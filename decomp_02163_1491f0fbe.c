// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1491f0fbe FUN_1491f0fbe body=1304 status=ok
// SIG undefined FUN_1491f0fbe(void)

undefined8 FUN_1491f0fbe(longlong param_1,longlong param_2,int *param_3,char param_4)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  undefined7 extraout_var;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_168 [38];
  char local_142;
  char local_141;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  uint local_120;
  uint uStack_11c;
  int local_118;
  uint *local_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(int *)(param_2 + 0x14) == *param_3) && (*(int *)(param_2 + 0x18) == param_3[1])) {
    uVar9 = 0;
    goto LAB_1491f1007;
  }
  local_118 = *(int *)(param_2 + 0x18);
  local_120 = (uint)*(undefined8 *)(param_2 + 0x10);
  uStack_11c = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  lVar11 = *(longlong *)(param_1 + 0x20);
  local_141 = param_4;
  if (lVar11 == 0) {
LAB_1491f107b:
    lVar11 = 0;
  }
  else {
    lVar7 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1491f107b;
  }
  local_142 = FUN_1491df834(lVar11,param_2);
  cVar6 = FUN_1491df834(lVar11,param_2);
  if (cVar6 != '\0') {
    local_108 = (undefined4 *)CONCAT44(local_108._4_4_,local_118);
    local_110 = (uint *)CONCAT44(uStack_11c,local_120);
    FUN_1491eb3b2(param_1,&local_110,0,0);
  }
  puVar1 = (uint *)(lVar11 + 0x118);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  uStack_ac = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_140 = lVar11;
  FUN_1459a7e20(&local_b8,puVar1);
  FUN_14920fefa(&local_b8,&local_120);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_110 = puVar1;
  FUN_1459a7e20(&local_108,puVar1);
  FUN_1459a7e20(local_110,&local_b8);
  FUN_1491ec4cc(param_1,&local_128,param_3);
  *(undefined8 *)(param_2 + 0x14) = local_128;
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (*(int *)(param_2 + 0x44) < 0) {
    FUN_1446f8c06((undefined8 *)(param_2 + 0x38),0);
  }
  puVar4 = *(undefined2 **)(param_2 + 0x38);
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = 0;
  }
  FUN_1491f1754(&local_110);
  lVar11 = local_140;
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1401f963a(&local_b8);
  iStack_b0 = *(int *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  local_b8 = (uint)uVar9;
  uStack_b4 = (uint)((ulonglong)uVar9 >> 0x20);
  FUN_14920fefa(puVar1,&local_120);
  local_108 = (undefined4 *)(param_2 + 0x1c);
  local_110 = &local_b8;
  FUN_140fe526c(puVar1,&local_128);
  if ((longlong)*(int *)(lVar11 + 0xc0) != 0) {
    plVar15 = *(longlong **)(lVar11 + 0xb8);
    plVar3 = plVar15 + *(int *)(lVar11 + 0xc0);
    do {
      lVar7 = *plVar15;
      if (lVar7 != 0) {
        cVar6 = *(char *)(lVar7 + 0x10);
        if (((cVar6 == '\x04') || (cVar6 == '\x02')) &&
           (*(int *)(lVar7 + 0x1c8) != *(int *)(lVar7 + 500))) {
          uVar5 = (uint)((ulonglong)CONCAT44(local_118,uStack_11c) >> 0x10);
          lVar14 = lVar7 + 0x1f8;
          if (*(longlong *)(lVar7 + 0x200) != 0) {
            lVar14 = *(longlong *)(lVar7 + 0x200);
          }
          iVar12 = *(int *)(lVar14 + (ulonglong)
                                     (*(int *)(lVar7 + 0x208) - 1U &
                                     (local_120 & 0xff) +
                                     (local_118 + (uStack_11c << 0x10 | uStack_11c & 0xffff) +
                                      (uVar5 << 0x13 | uVar5 & 0xffff) +
                                     ((uStack_11c & 0xffff) >> 4)) * 10) * 4);
          if (iVar12 != -1) {
            plVar2 = (longlong *)(lVar7 + 0x1c0);
            do {
              lVar14 = *plVar2 + (longlong)iVar12 * 0x18;
              if ((*(longlong *)(lVar14 + 4) == CONCAT44(local_118,uStack_11c)) &&
                 (*(char *)(*plVar2 + (longlong)iVar12 * 0x18) == (char)local_120)) {
                if ((undefined4 *)(lVar14 + 0xc) != (undefined4 *)0x0 && lVar14 != 0) {
                  local_12c = *(undefined4 *)(lVar14 + 0xc);
                  FUN_14920fefa(plVar2,&local_120);
                  local_110 = &local_b8;
                  local_108 = &local_12c;
                  FUN_140fe526c(plVar2,&local_128,&local_110);
                  cVar6 = *(char *)(lVar7 + 0x10);
                }
                break;
              }
              iVar12 = *(int *)(lVar14 + 0x10);
            } while (iVar12 != -1);
          }
        }
        if (cVar6 == '\x04') {
          iVar12 = *(int *)(lVar7 + 0x370);
          if ((longlong)iVar12 != 0) {
            lVar14 = *(longlong *)(lVar7 + 0x368);
            lVar13 = 0;
            do {
              if ((*(longlong *)(lVar14 + 4 + lVar13) == CONCAT44(local_118,uStack_11c)) &&
                 (*(char *)(lVar14 + lVar13) == (char)local_120)) {
                *(ulonglong *)(lVar14 + 4 + lVar13) = CONCAT44(iStack_b0,uStack_b4);
              }
              lVar13 = lVar13 + 0xc;
            } while ((longlong)iVar12 * 0xc != lVar13);
          }
          iVar12 = *(int *)(lVar7 + 0x390);
          if ((longlong)iVar12 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x388);
            lVar14 = 0;
            do {
              if ((*(longlong *)(lVar7 + 4 + lVar14) == CONCAT44(local_118,uStack_11c)) &&
                 (*(char *)(lVar7 + lVar14) == (char)local_120)) {
                *(ulonglong *)(lVar7 + 4 + lVar14) = CONCAT44(iStack_b0,uStack_b4);
              }
              lVar14 = lVar14 + 0xc;
            } while ((longlong)iVar12 * 0xc != lVar14);
          }
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar3);
  }
  puVar8 = (undefined8 *)
           FUN_14920fc30(lVar11 + 0x390,
                         (local_b8 & 0xff) +
                         ((uStack_b4 << 0x10 | uStack_b4 & 0xffff) + iStack_b0 +
                          ((uStack_b4 >> 0x10) << 0x13 | uStack_b4 >> 0x10) +
                         ((uStack_b4 & 0xffff) >> 4)) * 10);
  *puVar8 = CONCAT44(uStack_11c,local_120);
  *(int *)(puVar8 + 1) = local_118;
  *(int *)(lVar11 + 0xa8) = *(int *)(lVar11 + 0xa8) + 1;
  if (*(int *)(lVar11 + 0x480) != *(int *)(lVar11 + 0x4ac)) {
    FUN_14920d1d6(lVar11 + 0x478);
    FUN_14920d31a(lVar11 + 0x478);
  }
  uVar9 = FUN_1491ec404(param_1,2,param_2);
  uVar10 = (undefined7)((ulonglong)uVar9 >> 8);
  if (local_142 == '\x01' && local_141 == '\0') {
    local_130 = *(undefined4 *)(param_2 + 0x18);
    local_138 = *(undefined8 *)(param_2 + 0x10);
    FUN_1491eb3b2(param_1,&local_138,1,0);
    uVar10 = extraout_var;
  }
  uVar9 = CONCAT71(uVar10,1);
LAB_1491f1007:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1491f14d8 FUN_1491f14d8 body=100 status=ok
// SIG undefined FUN_1491f14d8(void)

void FUN_1491f14d8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Reorder Element: \'%s\' not found.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f153e FUN_1491f153e body=532 status=ok
// SIG undefined FUN_1491f153e(void)

ulonglong *
FUN_1491f153e(longlong param_1,ulonglong *param_2,longlong param_3,int *param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulonglong local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_3 + 0x214) == *param_4) && (*(int *)(param_3 + 0x218) == param_4[1])) {
    *param_2 = 0;
    goto LAB_1491f1586;
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar3 = param_1;
  if (lVar6 == 0) {
LAB_1491f15d8:
    lVar6 = 0;
  }
  else {
    lVar2 = FUN_141095a0a();
    lVar3 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (lVar3 = *(longlong *)(lVar3 + 0x30),
       *(longlong *)(lVar3 + (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30))
    goto LAB_1491f15d8;
  }
  local_88 = local_88 & 0xffffff00;
  uStack_84 = 0;
  uStack_80 = 0;
  lVar3 = FUN_140813120(lVar3,param_3);
  if (lVar3 != 0) {
    uStack_80 = *(undefined4 *)(lVar3 + 0x18);
    local_88 = (uint)*(undefined8 *)(lVar3 + 0x10);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
  }
  local_70 = -1;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = -1;
  if (&local_70 != param_4) {
    local_70 = (int)*(undefined8 *)param_4;
    uStack_6c = (undefined4)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  }
  FUN_1491dabdc(lVar6,&local_58,&local_88,&local_70);
  uVar4 = local_58 & 0xffffffff;
  if ((int)local_58 == -1) {
    iVar1 = -1;
    puVar5 = &DAT_14cc08210;
    if ((local_48._4_4_ != -1) && (1 < (int)local_48)) {
      FUN_1446f470e(&local_78,local_50,1);
      local_58 = local_78;
      uVar4 = local_78;
      goto LAB_1491f1686;
    }
  }
  else {
LAB_1491f1686:
    iVar1 = (int)uVar4;
    puVar5 = &local_58;
  }
  uVar4 = *puVar5;
  if (local_48._4_4_ != -1) {
    if (local_50 != 0) {
      FUN_1400020a8();
      iVar1 = (int)local_58;
    }
    local_50 = 0;
    local_48 = 0xffffffff00000000;
  }
  if (iVar1 != -1) {
    local_58 = 0xffffffff;
  }
  puVar5 = (ulonglong *)(param_3 + 0x214);
  if ((local_5c != -1) && (CONCAT44(uStack_64,uStack_68) != 0)) {
    FUN_1400020a8();
  }
  *puVar5 = uVar4;
  *(int *)(lVar6 + 0xa8) = *(int *)(lVar6 + 0xa8) + 1;
  if (*(int *)(lVar6 + 0x480) != *(int *)(lVar6 + 0x4ac)) {
    FUN_14920d1d6(lVar6 + 0x478);
    FUN_14920d31a(lVar6 + 0x478);
  }
  FUN_1491ec404(param_1,7,param_3);
  if (param_5 != '\0') {
    FUN_1491f0fbe(param_1,param_3,puVar5,0);
  }
  *param_2 = *puVar5;
LAB_1491f1586:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1754 FUN_1491f1754 body=59 status=ok
// SIG undefined FUN_1491f1754(void)

void FUN_1491f1754(undefined8 *param_1)

{
  FUN_1459a7e20(*param_1,param_1 + 1);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f963a(param_1 + 1);
  return;
}



// FUNCTION 1491f1790 FUN_1491f1790 body=90 status=ok
// SIG undefined FUN_1491f1790(void)

void FUN_1491f1790(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f17ec FUN_1491f17ec body=90 status=ok
// SIG undefined FUN_1491f17ec(void)

void FUN_1491f17ec(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1848 FUN_1491f1848 body=90 status=ok
// SIG undefined FUN_1491f1848(void)

void FUN_1491f1848(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f18a4 FUN_1491f18a4 body=103 status=ok
// SIG undefined FUN_1491f18a4(void)

void FUN_1491f18a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot parent \'%s\' to \'%s\' - would cause a cycle.",param_2,param_3);
  FUN_1491ed958(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f190c FUN_1491f190c body=374 status=ok
// SIG undefined FUN_1491f190c(void)

ulonglong FUN_1491f190c(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [144];
  undefined1 *local_68;
  int local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = (ulonglong)*(byte *)(param_2 + 0x10);
  if (uVar2 < 0x21) {
    if ((0x14UL >> (uVar2 & 0x3f) & 1) != 0) {
      local_68 = (undefined1 *)0x0;
      local_58 = *(int *)(param_2 + 0x1b0);
      lVar6 = (longlong)local_58;
      uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
      uVar2 = CONCAT71(uVar4,1);
      if (lVar6 != 0) {
        _Src = (void *)(param_2 + 0x110);
        if (*(void **)(param_2 + 0x1a0) != (void *)0x0) {
          _Src = *(void **)(param_2 + 0x1a0);
        }
        FUN_149191f7a(local_f8,local_58,0);
        puVar3 = local_68;
        if (local_68 == (undefined1 *)0x0) {
          puVar3 = local_f8;
        }
        memcpy(puVar3,_Src,lVar6 * 0x90);
        lVar6 = (longlong)local_58;
        puVar3 = local_f8;
        if (local_68 != (undefined1 *)0x0) {
          puVar3 = local_68;
        }
        if (lVar6 == 0) {
          uVar2 = CONCAT71(uVar4,1);
        }
        else {
          uVar2 = CONCAT71(uVar4,1);
          lVar5 = 0;
          do {
            bVar1 = FUN_1491f08d8(param_1,param_2,*(undefined8 *)(puVar3 + lVar5),param_3);
            uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 & bVar1);
            lVar5 = lVar5 + 0x90;
          } while (lVar6 * 0x90 != lVar5);
        }
        if (local_68 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1491f197b;
    }
    if ((0x100010002U >> (uVar2 & 0x3f) & 1) != 0) goto LAB_1491f19c4;
  }
  if (*(byte *)(param_2 + 0x10) == 0x80) {
LAB_1491f19c4:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
  }
  uVar2 = 0;
LAB_1491f197b:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1491f1aa6 FUN_1491f1aa6 body=142 status=ok
// SIG undefined FUN_1491f1aa6(void)

void FUN_1491f1aa6(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
     (bVar1 == 0x80)) {
    bVar1 = *(byte *)(param_1 + 0x10);
    if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
       (bVar1 == 0x80)) {
      local_10 = 1;
      local_18 = param_2;
      FUN_14921034e(param_1 + 200,&local_18);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f1b36 FUN_1491f1b36 body=100 status=ok
// SIG undefined FUN_1491f1b36(void)

void FUN_1491f1b36(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Remove Parent, Child \'%s\' not found.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1b9c FUN_1491f1b9c body=100 status=ok
// SIG undefined FUN_1491f1b9c(void)

void FUN_1491f1b9c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Remove Parent, Parent \'%s\' not found.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1c02 FUN_1491f1c02 body=90 status=ok
// SIG undefined FUN_1491f1c02(void)

void FUN_1491f1c02(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1c5e FUN_1491f1c5e body=90 status=ok
// SIG undefined FUN_1491f1c5e(void)

void FUN_1491f1c5e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1cba FUN_1491f1cba body=90 status=ok
// SIG undefined FUN_1491f1cba(void)

void FUN_1491f1cba(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1d16 FUN_1491f1d16 body=100 status=ok
// SIG undefined FUN_1491f1d16(void)

void FUN_1491f1d16(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Add Available Space, Space \'%s\' not found.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1d7c FUN_1491f1d7c body=90 status=ok
// SIG undefined FUN_1491f1d7c(void)

void FUN_1491f1d7c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f1dd8 FUN_1491f1dd8 body=554 status=ok
// SIG undefined FUN_1491f1dd8(void)

ulonglong FUN_1491f1dd8(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  undefined1 local_3c0;
  undefined1 local_3b0 [440];
  undefined1 local_1f8 [8];
  undefined1 *local_1f0;
  int local_1e8;
  longlong local_a0;
  uint local_98;
  uint local_94;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (*(char *)(param_3 + 0x10) == '\x04') {
    cVar1 = *(char *)(param_3 + 0x210);
  }
  else {
    cVar1 = *(char *)(param_2 + 0x210);
  }
  if (cVar1 != '\x01') {
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_1491f1e56:
      lVar7 = 0;
    }
    else {
      lVar4 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1491f1e56;
    }
    FUN_14449d5e6(lVar7,local_1f8,param_2,0);
    puVar5 = local_1f0;
    if (local_1f0 == (undefined1 *)0x0) {
      puVar5 = local_1f8;
    }
    if ((longlong)local_1e8 == 0) {
      bVar2 = true;
    }
    else {
      lVar7 = 0;
      do {
        bVar2 = *(longlong *)(puVar5 + lVar7) != param_3;
        if (*(longlong *)(puVar5 + lVar7) == param_3) break;
        bVar8 = (longlong)local_1e8 * 8 + -8 != lVar7;
        lVar7 = lVar7 + 8;
      } while (bVar8);
    }
    if (local_1f0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar2) {
      FUN_14918b1f6(local_1f8,param_2 + 0x210);
      uVar3 = local_98;
      lVar7 = (longlong)(int)local_98;
      if (lVar7 != 0) {
        lVar4 = 0;
        do {
          if ((*(longlong *)(local_a0 + 4 + lVar4) == *(longlong *)(param_3 + 0x14)) &&
             (*(char *)(local_a0 + lVar4) == *(char *)(param_3 + 0x10))) {
            uVar6 = 0;
            goto LAB_1491f1fbb;
          }
          lVar4 = lVar4 + 0xc;
        } while (lVar7 * 0xc != lVar4);
      }
      local_98 = local_98 + 1;
      if (local_94 < local_98) {
        FUN_149192788(&local_a0,uVar3);
      }
      *(undefined4 *)(local_a0 + 8 + lVar7 * 0xc) = *(undefined4 *)(param_3 + 0x18);
      *(undefined8 *)(local_a0 + lVar7 * 0xc) = *(undefined8 *)(param_3 + 0x10);
      lVar7 = *(longlong *)(param_1 + 0x20);
      if (lVar7 == 0) {
LAB_1491f1f86:
        lVar7 = 0;
      }
      else {
        lVar4 = FUN_141095a0a();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1491f1f86;
      }
      FUN_14918b1f6(local_3b0,local_1f8);
      local_3c0 = 0;
      local_3c8 = 0;
      FUN_1444a54c4(lVar7,param_2,local_3b0,0);
      uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
LAB_1491f1fbb:
      FUN_14918b3e4(local_1f8);
      goto LAB_1491f1ec2;
    }
  }
  uVar6 = 0;
LAB_1491f1ec2:
  if ((local_40 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2004 FUN_1491f2004 body=100 status=ok
// SIG undefined FUN_1491f2004(void)

void FUN_1491f2004(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Remove Available Space, Control \'%s\' not found.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f206a FUN_1491f206a body=100 status=ok
// SIG undefined FUN_1491f206a(void)

void FUN_1491f206a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Remove Available Space, \'%s\' is not a Control.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f20d0 FUN_1491f20d0 body=90 status=ok
// SIG undefined FUN_1491f20d0(void)

void FUN_1491f20d0(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2220 FUN_1491f2220 body=100 status=ok
// SIG undefined FUN_1491f2220(void)

void FUN_1491f2220(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Set Available Space Index, Control \'%s\' not found.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2286 FUN_1491f2286 body=100 status=ok
// SIG undefined FUN_1491f2286(void)

void FUN_1491f2286(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Set Available Space Index, \'%s\' is not a Control.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f22ec FUN_1491f22ec body=90 status=ok
// SIG undefined FUN_1491f22ec(void)

void FUN_1491f22ec(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f25b0 FUN_1491f25b0 body=100 status=ok
// SIG undefined FUN_1491f25b0(void)

void FUN_1491f25b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Add Channel Host, Host \'%s\' not found.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2616 FUN_1491f2616 body=100 status=ok
// SIG undefined FUN_1491f2616(void)

void FUN_1491f2616(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Add Channel Host, \'%s\' is also an animation channel.",param_2);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f267c FUN_1491f267c body=103 status=ok
// SIG undefined FUN_1491f267c(void)

void FUN_1491f267c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Add Channel Host, \'%s\' is the parent of channel \'%s\'.",param_2
                ,param_3);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f26e4 FUN_1491f26e4 body=103 status=ok
// SIG undefined FUN_1491f26e4(void)

void FUN_1491f26e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Add Channel Host, \'%s\' is already a host for channel \'%s\'.",
                param_2,param_3);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f274c FUN_1491f274c body=100 status=ok
// SIG undefined FUN_1491f274c(void)

void FUN_1491f274c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Remove Channel Host, \'%s\' is not an animation channel.",param_2)
  ;
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f27b2 FUN_1491f27b2 body=100 status=ok
// SIG undefined FUN_1491f27b2(void)

void FUN_1491f27b2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Remove Channel Host, \'%s\' is also an animation channel.",param_2
               );
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2818 FUN_1491f2818 body=103 status=ok
// SIG undefined FUN_1491f2818(void)

void FUN_1491f2818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Cannot Remove Channel Host, \'%s\' is not a host for channel \'%s\'.",
                param_2,param_3);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2880 FUN_1491f2880 body=109 status=ok
// SIG undefined FUN_1491f2880(void)

undefined8 * FUN_1491f2880(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_149192126(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
    param_2 = (undefined8 *)*param_1;
  }
  FUN_14919207a(param_2,param_3);
  return param_1;
}



// FUNCTION 1491f28ee FUN_1491f28ee body=446 status=ok
// SIG undefined FUN_1491f28ee(void)

void FUN_1491f28ee(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  ulonglong uStack_48;
  undefined2 *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x50);
    if (pcVar2 == (code *)0x0) {
      local_40 = (undefined2 *)0x0;
      uVar1 = *(uint *)(param_2 + 1);
      _Src = (void *)*param_2;
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_38 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_40,uVar1,0);
        memcpy(local_40,_Src,(longlong)(int)uVar1 * 2);
      }
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 != 0) {
        lVar4 = FUN_141095a0a();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar5 = FUN_144a79778(lVar5);
          if (lVar5 != 0) {
            puVar8 = &DAT_149dfb77a;
            if (*(int *)(param_2 + 1) != 0) {
              puVar8 = (undefined2 *)*param_2;
            }
            FUN_14010318a(lVar5,&local_60,0);
            puVar6 = &DAT_149dfb77a;
            if (local_58 != 0) {
              puVar6 = local_60;
            }
            FUN_140002266(&local_50,L"%s : %s",puVar6,puVar8);
            if (local_40 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_40 = local_50;
            uStack_38 = uStack_48;
            local_50 = (undefined2 *)0x0;
            uStack_48 = 0;
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      uVar3 = FUN_14626b866();
      puVar8 = &DAT_149dfb77a;
      if ((int)uStack_38 != 0) {
        puVar8 = local_40;
      }
      FUN_14586ad08(uVar3,3,puVar8);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_40 = (undefined2 *)CONCAT44(local_40._4_4_,3);
      plVar7 = (longlong *)(param_1 + 0x70);
      if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_1 + 0x60);
      }
      uVar3 = (**(code **)(*plVar7 + 8))(plVar7);
      (*pcVar2)(uVar3,&local_40,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2aad FUN_1491f2aad body=55 status=ok
// SIG undefined FUN_1491f2aad(void)

void FUN_1491f2aad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07a40 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07a40 = FUN_14171c317(FUN_1466cd58e,uVar1,L"ERigControlType");
  }
  return;
}



// FUNCTION 1491f2af6 FUN_1491f2af6 body=248 status=ok
// SIG undefined FUN_1491f2af6(void)

void FUN_1491f2af6(byte *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *param_1 = local_24 != 0;
  }
  else {
    *param_1 = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_1[1];
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    param_1[1] = local_24 != 0;
  }
  else {
    param_1[1] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f2ce2 FUN_1491f2ce2 body=449 status=ok
// SIG undefined FUN_1491f2ce2(void)

undefined8 *
FUN_1491f2ce2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char param_4,char param_5,
             byte param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  byte *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = FUN_140813180(param_2,param_3);
  if (iVar2 != -1) {
    if (param_5 != '\0') {
      FUN_149197016(param_1,param_3);
    }
    local_58 = (undefined8 *)0x0;
    uStack_50 = 1;
    FUN_149192788(&local_58,0);
    *(undefined4 *)(local_58 + 1) = *(undefined4 *)(param_3 + 1);
    *local_58 = *param_3;
    if (0 < (int)uStack_50) {
      lVar7 = 0;
      do {
        local_88 = *(undefined8 *)((longlong)local_58 + lVar7 * 0xc);
        local_80 = *(undefined4 *)((longlong)local_58 + lVar7 * 0xc + 8);
        local_68 = local_88;
        local_60 = local_80;
        FUN_14449fd62(param_2,&local_78,&local_88,0);
        if ((longlong)local_70 != 0) {
          lVar8 = (longlong)local_70 * 0xc;
          pbVar6 = local_78;
          do {
            if (((*pbVar6 & ~param_6) == 0) &&
               (iVar2 = *(int *)(param_1 + 1), iVar3 = FUN_149197016(param_1,pbVar6),
               uVar1 = uStack_50, iVar2 == iVar3 && param_4 == '\x01')) {
              lVar5 = (longlong)(int)uStack_50;
              uVar4 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
              if (uStack_50._4_4_ < uVar4) {
                FUN_149192788(&local_58,uVar1 & 0xffffffff);
              }
              *(undefined4 *)((longlong)local_58 + lVar5 * 0xc + 8) = *(undefined4 *)(pbVar6 + 8);
              *(undefined8 *)((longlong)local_58 + lVar5 * 0xc) = *(undefined8 *)pbVar6;
            }
            pbVar6 = pbVar6 + 0xc;
            lVar8 = lVar8 + -0xc;
          } while (lVar8 != 0);
        }
        if (local_78 != (byte *)0x0) {
          FUN_1400020a8(local_78);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_50);
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1491f2ea4 FUN_1491f2ea4 body=614 status=ok
// SIG undefined FUN_1491f2ea4(void)

undefined8 *
FUN_1491f2ea4(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  void *pvVar1;
  char cVar2;
  code *pcVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  void **local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_78;
  void **local_70;
  void *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_3 == 0) {
    FUN_1491f310c(param_1,param_2,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
  }
  FUN_1400021e4(param_3,&local_48);
  pvVar1 = local_48;
  local_58 = (undefined2 *)0x0;
  lVar6 = (longlong)local_40;
  local_50 = local_40;
  if (lVar6 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_40,0);
    memcpy(local_58,pvVar1,lVar6 * 2);
    puVar4 = local_58;
    if (local_50 != 0) goto LAB_1491f2f43;
  }
  puVar4 = &DAT_149dfb77a;
LAB_1491f2f43:
  cVar2 = FUN_14681f78a(puVar4);
  pvVar1 = local_48;
  puVar4 = local_58;
  if (cVar2 == '\0') {
    local_90 = (void *)0x0;
    local_88 = local_40;
    if ((longlong)local_40 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_40,0);
      memcpy(local_90,pvVar1,(longlong)local_40 * 2);
    }
    local_98 = &local_90;
    puVar5 = &local_a0;
    pcVar3 = FUN_1444ab7f8;
  }
  else {
    local_90 = (void *)0x0;
    lVar6 = (longlong)local_50;
    local_88 = local_50;
    if (lVar6 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_50,0);
      memcpy(local_90,puVar4,lVar6 * 2);
    }
    local_70 = &local_90;
    puVar5 = &local_78;
    pcVar3 = FUN_1444ab7b0;
  }
  local_80 = (char)param_4;
  *puVar5 = pcVar3;
  FUN_1491dd52c(param_2,&local_68,puVar5,1);
  pvVar1 = local_68;
  *param_1 = 0;
  *(int *)(param_1 + 1) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_149192186(param_1,local_60,0);
    memcpy((void *)*param_1,pvVar1,(longlong)local_60 * 0xc);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f310c FUN_1491f310c body=239 status=ok
// SIG undefined FUN_1491f310c(void)

undefined8 FUN_1491f310c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  void *_Src;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = &local_41;
  local_41 = 0xff;
  local_40 = &LAB_1444ab1fa;
  FUN_1491dd52c(param_2,&local_58,&local_40,1);
  _Src = local_58;
  local_40 = (undefined1 *)0x0;
  local_38 = (undefined1 *)CONCAT44(local_38._4_4_,local_50);
  if ((longlong)(int)local_50 == 0) {
    local_38 = (undefined1 *)(ulonglong)local_50;
  }
  else {
    FUN_149192186(&local_40,local_50,0);
    memcpy(local_40,_Src,(longlong)(int)local_50 * 0xc);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  FUN_1491f347c(&local_40,param_1,param_3);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f31fc FUN_1491f31fc body=639 status=ok
// SIG undefined FUN_1491f31fc(void)

longlong *
FUN_1491f31fc(longlong *param_1,undefined8 param_2,char *param_3,char *param_4,char param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  char local_68;
  undefined2 local_67;
  char local_65;
  longlong local_64;
  undefined2 local_5c;
  char local_5a;
  char local_58;
  undefined2 uStack_57;
  char cStack_55;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = FUN_140813180(param_2,param_3);
  iVar4 = FUN_140813180(param_2,param_4);
  if ((iVar3 != -1) && (iVar4 != -1)) {
    cVar7 = *param_4;
    local_5a = param_4[3];
    local_5c = *(undefined2 *)(param_4 + 1);
    lVar10 = *(longlong *)(param_4 + 4);
    lVar5 = *(longlong *)(param_3 + 4);
    cVar6 = *param_3;
    lVar9 = lVar10;
    cVar8 = cVar7;
    if ((cVar7 != '\0' && lVar10 != 0) &&
        ((uint)((ulonglong)lVar10 >> 0x10) & 0xffff) < DAT_14c87eb08 + 1U) {
      while (lVar10 = lVar5, cVar8 = cVar6, cVar7 != cVar6 || lVar9 != lVar5) {
        iVar3 = (int)param_1[1];
        lVar10 = (longlong)iVar3;
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_149192788(param_1,iVar3);
        }
        lVar5 = *param_1;
        *(char *)(lVar5 + lVar10 * 0xc) = cVar7;
        *(undefined2 *)(lVar5 + 1 + lVar10 * 0xc) = local_5c;
        *(char *)(lVar5 + 3 + lVar10 * 0xc) = local_5a;
        *(longlong *)(lVar5 + 4 + lVar10 * 0xc) = lVar9;
        local_65 = local_5a;
        local_67 = local_5c;
        local_68 = cVar7;
        local_64 = lVar9;
        FUN_1408130c0(param_2,&local_58,&local_68);
        local_5c = uStack_57;
        local_5a = cStack_55;
        lVar10 = CONCAT44(uStack_50,uStack_54);
        lVar5 = *(longlong *)(param_3 + 4);
        cVar6 = *param_3;
        cVar8 = local_58;
        if (((lVar10 == 0) || (DAT_14c87eb08 + 1U <= ((uint)((ulonglong)lVar10 >> 0x10) & 0xffff)))
           || (lVar9 = lVar10, cVar7 = local_58, local_58 == '\0')) break;
      }
    }
    if (cVar8 == cVar6 && lVar10 == lVar5) {
      FUN_149197016(param_1,param_3);
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        FUN_14920a7da(param_1,0);
      }
    }
    if (param_5 == '\0') {
      uVar1 = *(uint *)(param_1 + 1);
      if (1 < (longlong)(int)uVar1) {
        lVar5 = *param_1;
        lVar10 = (longlong)(int)uVar1 * 0xc;
        lVar9 = 0;
        do {
          lVar10 = lVar10 + -0xc;
          uStack_50 = *(undefined4 *)(lVar5 + 8 + lVar9);
          uVar2 = *(undefined8 *)(lVar5 + lVar9);
          local_58 = (char)uVar2;
          uStack_57 = (undefined2)((ulonglong)uVar2 >> 8);
          cStack_55 = (char)((ulonglong)uVar2 >> 0x18);
          uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)(lVar5 + 8 + lVar9) = *(undefined4 *)(lVar5 + 8 + lVar10);
          *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(lVar5 + lVar10);
          *(undefined4 *)(lVar5 + 8 + lVar10) = uStack_50;
          *(undefined8 *)(lVar5 + lVar10) = uVar2;
          lVar9 = lVar9 + 0xc;
        } while ((ulonglong)(uVar1 >> 1) * 0xc != lVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1491f347c FUN_1491f347c body=138 status=ok
// SIG undefined FUN_1491f347c(void)

longlong * FUN_1491f347c(longlong *param_1,longlong *param_2,byte param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      if ((*(byte *)(lVar3 + lVar6) & ~param_3) == 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_149192788(param_2,iVar2);
        }
        puVar1 = (undefined8 *)(lVar3 + lVar6);
        lVar4 = *param_2;
        *(undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar1 + 1);
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = *puVar1;
      }
      lVar6 = lVar6 + 0xc;
    } while ((longlong)(int)lVar5 * 0xc != lVar6);
  }
  return param_2;
}



// FUNCTION 1491f3506 FUN_1491f3506 body=238 status=ok
// SIG undefined FUN_1491f3506(void)

longlong * FUN_1491f3506(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_1,iVar1);
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) =
           *(undefined4 *)((undefined8 *)(lVar2 + lVar5) + 1);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + lVar5);
      lVar5 = lVar5 + 0xc;
    } while ((longlong)(int)lVar6 * 0xc != lVar5);
  }
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar4 = (undefined8 *)*param_3;
    lVar6 = (longlong)*(int *)(param_3 + 1) * 0xc;
    do {
      if (param_4 == '\0') {
        FUN_149197016(param_1,puVar4);
      }
      else {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_149192788(param_1,iVar1);
        }
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(puVar4 + 1);
        *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *puVar4;
      }
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      lVar6 = lVar6 + -0xc;
    } while (lVar6 != 0);
  }
  return param_1;
}



// FUNCTION 1491f35f4 FUN_1491f35f4 body=176 status=ok
// SIG undefined FUN_1491f35f4(void)

longlong * FUN_1491f35f4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pcVar4 = (char *)*param_2;
    pcVar1 = pcVar4 + (longlong)*(int *)(param_2 + 1) * 0xc;
    do {
      if ((longlong)(int)param_3[1] != 0) {
        lVar3 = 0;
        do {
          if ((*(longlong *)(*param_3 + 4 + lVar3) == *(longlong *)(pcVar4 + 4)) &&
             (*(char *)(*param_3 + lVar3) == *pcVar4)) {
            iVar2 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
              FUN_149192788(param_1,iVar2);
            }
            lVar3 = *param_1;
            *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(pcVar4 + 8);
            *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *(undefined8 *)pcVar4;
            break;
          }
          lVar3 = lVar3 + 0xc;
        } while ((longlong)(int)param_3[1] * 0xc != lVar3);
      }
      pcVar4 = pcVar4 + 0xc;
    } while (pcVar4 != pcVar1);
  }
  return param_1;
}



// FUNCTION 1491f36a4 FUN_1491f36a4 body=170 status=ok
// SIG undefined FUN_1491f36a4(void)

longlong * FUN_1491f36a4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pcVar4 = (char *)*param_2;
    pcVar1 = pcVar4 + (longlong)*(int *)(param_2 + 1) * 0xc;
    do {
      if ((longlong)(int)param_3[1] != 0) {
        lVar3 = 0;
        do {
          if ((*(longlong *)(*param_3 + 4 + lVar3) == *(longlong *)(pcVar4 + 4)) &&
             (*(char *)(*param_3 + lVar3) == *pcVar4)) goto LAB_1491f3728;
          lVar3 = lVar3 + 0xc;
        } while ((longlong)(int)param_3[1] * 0xc != lVar3);
      }
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_149192788(param_1,iVar2);
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(pcVar4 + 8);
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *(undefined8 *)pcVar4;
LAB_1491f3728:
      pcVar4 = pcVar4 + 0xc;
    } while (pcVar4 != pcVar1);
  }
  return param_1;
}



// FUNCTION 1491f374e FUN_1491f374e body=233 status=ok
// SIG undefined FUN_1491f374e(void)

longlong * FUN_1491f374e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_149192186(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
    uVar2 = *(uint *)(param_1 + 1);
    if (1 < (longlong)(int)uVar2) {
      lVar3 = *param_1;
      lVar4 = (longlong)(int)uVar2 * 0xc;
      lVar5 = 0;
      do {
        lVar4 = lVar4 + -0xc;
        local_28 = *(undefined4 *)(lVar3 + 8 + lVar5);
        local_30 = *(undefined8 *)(lVar3 + lVar5);
        *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar3 + 8 + lVar4);
        *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar3 + lVar4);
        *(undefined4 *)(lVar3 + 8 + lVar4) = local_28;
        *(undefined8 *)(lVar3 + lVar4) = local_30;
        lVar5 = lVar5 + 0xc;
      } while ((ulonglong)(uVar2 >> 1) * 0xc != lVar5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1491f3838 FUN_1491f3838 body=2462 status=ok
// SIG undefined FUN_1491f3838(void)

longlong * FUN_1491f3838(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 8,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 9,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xb,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xb] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xc] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xd,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xd] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xe,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xe] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xf,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xf] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x10,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x11,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x11] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x12,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x12] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x13,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x13] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x14,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x14] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x15,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x15] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x16,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x16] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x17,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x17] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x18,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x18] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x19,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x19] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1a,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x1a] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1b,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x1b] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1c,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x1c] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1d,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x1d] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1e,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0x1e] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 0x1f;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1491f41d6 FUN_1491f41d6 body=72 status=ok
// SIG undefined FUN_1491f41d6(void)

void FUN_1491f41d6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0xc) = 3;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x18) = (int)param_2[1];
  return;
}



// FUNCTION 1491f421e FUN_1491f421e body=48 status=ok
// SIG undefined FUN_1491f421e(void)

char * FUN_1491f421e(longlong param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    pcVar1 = *(char **)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) << 5;
    do {
      if ((*(longlong *)(pcVar1 + 4) == *(longlong *)(param_2 + 4)) && (*pcVar1 == *param_2)) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return (char *)0x0;
}



// FUNCTION 1491f424e FUN_1491f424e body=36 status=ok
// SIG undefined FUN_1491f424e(void)

longlong FUN_1491f424e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) << 5;
    do {
      if (*(char *)(lVar1 + 0xc) == '\x03') {
        return lVar1;
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 1491f4282 FUN_1491f4282 body=25 status=ok
// SIG undefined FUN_1491f4282(void)

longlong FUN_1491f4282(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x34);
  if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar4 + 0x270))) {
    lVar4 = *(longlong *)(lVar4 + 0x268);
    lVar10 = (longlong)iVar6 * 0x60;
    plVar1 = (longlong *)(lVar4 + lVar10);
    lVar2 = *param_2;
    if (lVar2 == *(longlong *)(lVar4 + 0x50 + lVar10)) {
      lVar3 = plVar1[0xb];
      if (param_3 == '\x14') {
        return lVar3;
      }
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == param_3)) {
        return lVar3;
      }
    }
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar9 = (uint)lVar2 & 0xffff;
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)plVar1[9] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar7 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x18);
          if (*plVar7 == lVar2) {
            plVar8 = plVar7 + 1;
            if ((plVar8 != (longlong *)0x0 && plVar7 != (longlong *)0x0) &&
               ((param_3 == '\x14' || (*(char *)(*plVar8 + 0x10) == param_3)))) {
              plVar1[10] = lVar2;
              lVar4 = *plVar8;
              plVar1[0xb] = lVar4;
              return lVar4;
            }
            break;
          }
          iVar6 = (int)plVar7[2];
        } while (iVar6 != -1);
      }
    }
    *(undefined8 *)(lVar4 + lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar4 + lVar10 + 0x58) = 0;
  }
  return 0;
}



// FUNCTION 1491f429c FUN_1491f429c body=41 status=ok
// SIG undefined FUN_1491f429c(void)

undefined8 FUN_1491f429c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1491e0882(*(longlong *)(param_1 + 8),param_1,param_2,param_3,1);
  }
  return uVar1;
}



// FUNCTION 1491f42c6 FUN_1491f42c6 body=22 status=ok
// SIG undefined FUN_1491f42c6(void)

ulonglong FUN_1491f42c6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBP;
  longlong *plVar9;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x34);
  if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(lVar2 + 0x270))) {
    lVar1 = *(longlong *)(lVar2 + 0x268);
    lVar4 = (longlong)iVar5 * 0x60;
    if (*(int *)(lVar1 + 8 + lVar4) != *(int *)(lVar1 + 0x34 + lVar4)) {
      plVar9 = (longlong *)(lVar1 + lVar4);
      lVar1 = *param_2;
      uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar7 = (uint)lVar1 & 0xffff;
      plVar6 = plVar9 + 7;
      if ((longlong *)plVar9[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar9[8];
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)plVar9[9] - 1U &
                      (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar6 = (longlong *)(*plVar9 + (longlong)iVar5 * 0x18);
          if (*plVar6 == lVar1) {
            if (plVar6 != (longlong *)0x0) {
              FUN_1491dfecc(plVar6 + 1);
              FUN_14920e32a(plVar9,*param_2);
              if ((int)plVar9[1] == *(int *)((longlong)plVar9 + 0x34)) {
                if (*(int *)(param_1 + 0x34) != -1) {
                  iVar5 = *(int *)(lVar2 + 0x280);
                  *(uint *)(lVar2 + 0x280) = iVar5 + 1U;
                  if (*(uint *)(lVar2 + 0x284) < iVar5 + 1U) {
                    FUN_1446f48e2((longlong *)(lVar2 + 0x278),iVar5);
                  }
                  *(undefined4 *)(*(longlong *)(lVar2 + 0x278) + (longlong)iVar5 * 4) =
                       *(undefined4 *)(param_1 + 0x34);
                }
                *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
              }
              else if (plVar9[10] == *param_2) {
                plVar9[0xb] = 0;
              }
              uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
              if (*(longlong *)(lVar2 + 0x590) != param_1) {
                FUN_1491e07f8(lVar2,param_1 + 0x10,param_2);
              }
              goto LAB_1491d9f1b;
            }
            break;
          }
          iVar5 = (int)plVar6[2];
        } while (iVar5 != -1);
      }
    }
  }
  uVar8 = 0;
LAB_1491d9f1b:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1491f42dc FUN_1491f42dc body=19 status=ok
// SIG undefined FUN_1491f42dc(void)

undefined8 FUN_1491f42dc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x34);
  if (((longlong)iVar1 < 0) || (*(int *)(lVar2 + 0x270) <= iVar1)) {
    uVar3 = 0;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x60 + *(longlong *)(lVar2 + 0x268);
    lStack_48 = 0;
    uStack_40 = 0;
    FUN_1491d9a82(lVar4);
    FUN_1491dfdb4(lVar4);
    if (*(int *)(param_1 + 0x34) != -1) {
      iVar1 = *(int *)(lVar2 + 0x280);
      *(uint *)(lVar2 + 0x280) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x284) < iVar1 + 1U) {
        FUN_1446f48e2((longlong *)(lVar2 + 0x278),iVar1);
      }
      *(undefined4 *)(*(longlong *)(lVar2 + 0x278) + (longlong)iVar1 * 4) =
           *(undefined4 *)(param_1 + 0x34);
    }
    lVar4 = lStack_48;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    if (*(longlong *)(lVar2 + 0x590) != param_1) {
      lVar6 = (longlong)(int)uStack_40;
      if (lVar6 != 0) {
        lVar5 = 0;
        do {
          uStack_50 = *(undefined8 *)(lVar4 + lVar5);
          FUN_1491e07f8(lVar2,param_1 + 0x10,&uStack_50);
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
      }
    }
    if (lStack_48 != 0) {
      FUN_1400020a8(lStack_48);
    }
    uVar3 = 1;
  }
  if ((uStack_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1491f42f0 FUN_1491f42f0 body=28 status=ok
// SIG undefined FUN_1491f42f0(void)

void FUN_1491f42f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1491e083c(*(longlong *)(param_1 + 8),param_1 + 0x10,param_2,param_3);
  return;
}



// FUNCTION 1491f430e FUN_1491f430e body=36 status=ok
// SIG undefined FUN_1491f430e(void)

longlong FUN_1491f430e(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = &DAT_14bb83710;
    if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 8);
    }
    **(undefined1 **)(param_1 + 8) = *puVar1;
  }
  return param_1;
}



// FUNCTION 1491f4332 FUN_1491f4332 body=237 status=ok
// SIG undefined FUN_1491f4332(void)

void FUN_1491f4332(undefined8 param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined8 local_40;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (undefined8 *)FUN_144b3cbe6();
  puVar6 = local_98;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  pbVar5 = &DAT_14bb83710;
  if (*(byte **)(param_3 + 8) != (byte *)0x0) {
    pbVar5 = *(byte **)(param_3 + 8);
  }
  bVar1 = *pbVar5;
  FUN_1400f4f7e(param_2);
  FUN_14480c34d(param_2,local_78);
  FUN_14480c34d(param_2,local_58);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_60 = 0;
    local_40 = 0;
  }
  puVar2 = (ulonglong *)param_2[1];
  if (puVar2[1] < *puVar2 + 4) {
    local_2c = (uint)bVar1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f4420 FUN_1491f4420 body=51 status=ok
// SIG undefined FUN_1491f4420(void)

longlong FUN_1491f4420(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    puVar1 = (undefined8 *)FUN_144b3cbe6(param_2);
    puVar3 = *(undefined8 **)(param_1 + 8);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return param_1;
}



// FUNCTION 1491f4454 FUN_1491f4454 body=92 status=ok
// SIG undefined FUN_1491f4454(void)

void FUN_1491f4454(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1491f4332(param_1,param_2,param_3 + 0x10);
  FUN_1491f4332(param_1 + 0x10,param_2,param_3);
  FUN_1491f4332(param_1 + 0x20,param_2,param_3 + 0x30);
  FUN_1491f4332(param_1 + 0x30,param_2,param_3 + 0x20);
  return;
}



// FUNCTION 1491f44b0 FUN_1491f44b0 body=207 status=ok
// SIG undefined FUN_1491f44b0(void)

void FUN_1491f44b0(undefined1 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07c70) {
    FUN_144b3d300(&DAT_14cc07c70);
    if (DAT_14cc07c70 == -1) {
      DAT_14cc07c68 = FUN_14690ea9a();
      _Init_thread_footer(&DAT_14cc07c70);
    }
  }
  FUN_1414aa4be(DAT_14cc07c68,local_28,*param_1);
  (**(code **)(*param_2 + 0x160))(param_2,local_28);
  FUN_14480c34d(param_2,param_1 + 8);
  FUN_14480c34d(param_2,param_1 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f4580 FUN_1491f4580 body=257 status=ok
// SIG undefined FUN_1491f4580(void)

void FUN_1491f4580(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07c80) {
    FUN_144b3d300(&DAT_14cc07c80);
    if (DAT_14cc07c80 == -1) {
      DAT_14cc07c78 = FUN_14690ea9a();
      _Init_thread_footer(&DAT_14cc07c80);
    }
  }
  local_30 = 0;
  (**(code **)(*param_2 + 0x160))(param_2,&local_30);
  lVar1 = DAT_14cc07c78;
  iVar3 = FUN_1448e5bf4(DAT_14cc07c78,local_30,0);
  if (iVar3 == -1) {
    uVar2 = 0xff;
  }
  else {
    uVar2 = *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 8 + (longlong)iVar3 * 0x10);
  }
  *param_1 = uVar2;
  FUN_14480c34d(param_2,param_1 + 8);
  FUN_14480c34d(param_2,param_1 + 0x20);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f4682 FUN_1491f4682 body=35 status=ok
// SIG undefined FUN_1491f4682(void)

void FUN_1491f4682(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x20);
  if (param_3 == '\0') {
    puVar3 = (undefined8 *)(param_1 + 8);
  }
  uVar1 = *puVar3;
  uVar2 = puVar3[2];
  *param_2 = puVar3[1];
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}



// FUNCTION 1491f46a6 FUN_1491f46a6 body=74 status=ok
// SIG undefined FUN_1491f46a6(void)

undefined8 * FUN_1491f46a6(char *param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  
  pcVar2 = param_1 + 0x20;
  if (param_3 == '\0') {
    pcVar2 = param_1 + 8;
  }
  if (*param_1 == param_4) {
    param_2[2] = *(undefined8 *)(pcVar2 + 0x10);
    uVar1 = *(undefined8 *)(pcVar2 + 8);
    *param_2 = *(undefined8 *)pcVar2;
    param_2[1] = uVar1;
  }
  else {
    FUN_14690c9ab(param_2);
  }
  return param_2;
}



// FUNCTION 1491f46f0 FUN_1491f46f0 body=153 status=ok
// SIG undefined FUN_1491f46f0(void)

void FUN_1491f46f0(char *param_1,char param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_1);
  if (*param_1 != param_2) {
    local_38 = *(undefined8 *)(param_1 + 0x18);
    local_48 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    local_58 = *(undefined8 *)(param_1 + 0x30);
    local_68 = *(undefined4 *)(param_1 + 0x20);
    uStack_64 = *(undefined4 *)(param_1 + 0x24);
    uStack_60 = *(undefined4 *)(param_1 + 0x28);
    uStack_5c = *(undefined4 *)(param_1 + 0x2c);
    *param_1 = param_2;
    local_78 = 0;
    FUN_1491de136(param_1,&local_48,0,uVar1 & 0xffffffff);
    local_78 = 0;
    FUN_1491de136(param_1,&local_68,1,uVar1 & 0xffffffff);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f478a FUN_1491f478a body=61 status=ok
// SIG undefined FUN_1491f478a(void)

void FUN_1491f478a(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    return;
  }
  FUN_140f872f2(param_1 + 0x10);
  FUN_1491f4454(param_1 + 0x48,param_2,param_1 + 0x88);
  return;
}



// FUNCTION 1491f47c8 FUN_1491f47c8 body=62 status=ok
// SIG undefined FUN_1491f47c8(void)

void FUN_1491f47c8(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_140f8709c();
  if (param_3 != 0) {
    return;
  }
  FUN_140f86f22(param_1 + 0x48,param_2,param_1 + 0x88);
  return;
}



// FUNCTION 1491f4806 FUN_1491f4806 body=263 status=ok
// SIG undefined FUN_1491f4806(void)

void FUN_1491f4806(longlong param_1,longlong param_2,char param_3,char param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_2 + 0x10);
    if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
       (bVar1 == 0x80)) {
      if (param_3 != '\0') {
        FUN_144b3caae(param_1 + 0x48,param_2 + 0x48);
        if (*(undefined1 **)(param_1 + 0xa0) != (undefined1 *)0x0) {
          puVar2 = &DAT_14bb83710;
          if (*(undefined1 **)(param_2 + 0xa0) != (undefined1 *)0x0) {
            puVar2 = *(undefined1 **)(param_2 + 0xa0);
          }
          **(undefined1 **)(param_1 + 0xa0) = *puVar2;
        }
        if (*(undefined1 **)(param_1 + 0x90) != (undefined1 *)0x0) {
          puVar2 = &DAT_14bb83710;
          if (*(undefined1 **)(param_2 + 0x90) != (undefined1 *)0x0) {
            puVar2 = *(undefined1 **)(param_2 + 0x90);
          }
          **(undefined1 **)(param_1 + 0x90) = *puVar2;
        }
      }
      if (param_4 != '\0') {
        FUN_144b3caae(param_1 + 0x68,param_2 + 0x68);
        if (*(undefined1 **)(param_1 + 0xc0) != (undefined1 *)0x0) {
          puVar2 = &DAT_14bb83710;
          if (*(undefined1 **)(param_2 + 0xc0) != (undefined1 *)0x0) {
            puVar2 = *(undefined1 **)(param_2 + 0xc0);
          }
          **(undefined1 **)(param_1 + 0xc0) = *puVar2;
        }
        if (*(undefined1 **)(param_1 + 0xb0) != (undefined1 *)0x0) {
          puVar2 = &DAT_14bb83710;
          if (*(undefined1 **)(param_2 + 0xb0) != (undefined1 *)0x0) {
            puVar2 = *(undefined1 **)(param_2 + 0xb0);
          }
          **(undefined1 **)(param_1 + 0xb0) = *puVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 1491f490e FUN_1491f490e body=5 status=ok
// SIG undefined FUN_1491f490e(void)

longlong FUN_1491f490e(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 1491f4914 FUN_1491f4914 body=160 status=ok
// SIG undefined FUN_1491f4914(void)

void FUN_1491f4914(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 1) {
    local_30 = local_30 & 0xffffff00;
    uStack_2c = 0;
    uStack_28 = 0;
    lVar1 = *(longlong *)(param_1 + 0x108);
    if (lVar1 != 0) {
      uStack_28 = *(undefined4 *)(lVar1 + 0x18);
      local_30 = (uint)*(undefined8 *)(lVar1 + 0x10);
      uStack_2c = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
    }
    FUN_140f872f2(&local_30,param_2);
  }
  else if (param_3 == 0) {
    FUN_140f872f2(param_1 + 0x10,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f49ca FUN_1491f49ca body=384 status=ok
// SIG undefined FUN_1491f49ca(void)

void FUN_1491f49ca(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 1) {
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar1 = param_1 + 0x110;
      lVar5 = 0x14;
      lVar4 = 0;
      do {
        local_48 = local_48 & 0xffffff00;
        uStack_44 = 0;
        uStack_40 = 0;
        lVar3 = *(longlong *)(param_1 + 0x1a0);
        if (*(longlong *)(param_1 + 0x1a0) == 0) {
          lVar3 = lVar1;
        }
        lVar3 = *(longlong *)(lVar3 + -0x14 + lVar5);
        if (lVar3 != 0) {
          uStack_40 = *(undefined4 *)(lVar3 + 0x18);
          local_48 = (uint)*(undefined8 *)(lVar3 + 0x10);
          uStack_44 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
        }
        FUN_140f872f2(&local_48,param_2);
        lVar3 = *(longlong *)(param_1 + 0x1a0);
        if (*(longlong *)(param_1 + 0x1a0) == 0) {
          lVar3 = lVar1;
        }
        FUN_1491f4b4b(param_2,lVar3 + lVar5);
        lVar3 = *(longlong *)(param_1 + 0x1a0);
        if (*(longlong *)(param_1 + 0x1a0) == 0) {
          lVar3 = lVar1;
        }
        FUN_1491f4b4b(param_2,lVar3 + lVar5 + -0xc);
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x90;
      } while (lVar4 < *(int *)(param_1 + 0x1b0));
    }
  }
  else if (param_3 == 0) {
    FUN_140f872f2(param_1 + 0x10,param_2);
    FUN_1491f4454(param_1 + 0x48,param_2,param_1 + 0x88);
    local_48 = *(uint *)(param_1 + 0x1b0);
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
      }
      else {
        FUN_14572512c(param_2,&local_48);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f4b4b FUN_1491f4b4b body=244 status=ok
// SIG undefined FUN_1491f4b4b(void)

longlong * FUN_1491f4b4b(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1491f4c40 FUN_1491f4c40 body=938 status=ok
// SIG undefined FUN_1491f4c40(void)

void FUN_1491f4c40(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [36];
  int local_d4;
  uint local_d0 [6];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  uint *local_90;
  int *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140f8709c();
  if (param_3 == 1) {
    local_d4 = 0;
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar2 = param_1 + 0x110;
      do {
        local_d0[0] = local_d0[0] & 0xffffff00;
        local_d0[1] = 0;
        local_d0[2] = 0;
        FUN_140f872f2(local_d0,param_2);
        uVar7 = *(undefined8 *)(param_1 + 8);
        uVar5 = FUN_140813180(uVar7,local_d0);
        uVar7 = FUN_141124d94(uVar7,uVar5);
        lVar8 = *(longlong *)(param_1 + 0x1a0);
        if (*(longlong *)(param_1 + 0x1a0) == 0) {
          lVar8 = lVar2;
        }
        *(undefined8 *)(lVar8 + (longlong)local_d4 * 0x90) = uVar7;
        lVar8 = *(longlong *)(param_1 + 0x1a0);
        if (*(longlong *)(param_1 + 0x1a0) == 0) {
          lVar8 = lVar2;
        }
        *(undefined1 *)(lVar8 + 0x80 + (longlong)local_d4 * 0x90) = 1;
        iVar6 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
        if (iVar6 < 8) {
          uVar4 = (ulonglong)local_90 >> 0x20;
          local_90 = (uint *)((ulonglong)local_90 & 0xffffffff00000000);
          puVar3 = (ulonglong *)param_2[1];
          puVar1 = (undefined4 *)*puVar3 + 1;
          if ((undefined4 *)puVar3[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_90,4);
            }
            else {
              FUN_14572512c(param_2,&local_90);
            }
          }
          else {
            local_90 = (uint *)CONCAT44((int)uVar4,*(undefined4 *)*puVar3);
            *puVar3 = (ulonglong)puVar1;
          }
          lVar8 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar8 = lVar2;
          }
          lVar9 = (longlong)local_d4 * 0x90;
          *(undefined4 *)(lVar8 + 0x14 + lVar9) = local_90._0_4_;
          *(undefined4 *)(lVar8 + 0x18 + lVar9) = local_90._0_4_;
          *(undefined4 *)(lVar8 + 0x1c + lVar9) = local_90._0_4_;
          local_4c = 0;
          puVar3 = (ulonglong *)param_2[1];
          puVar1 = (undefined4 *)*puVar3 + 1;
          if ((undefined4 *)puVar3[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
            }
            else {
              FUN_14572512c(param_2,&local_4c);
            }
          }
          else {
            local_4c = *(undefined4 *)*puVar3;
            *puVar3 = (ulonglong)puVar1;
          }
          lVar8 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar8 = lVar2;
          }
          lVar9 = (longlong)local_d4 * 0x90;
          *(undefined4 *)(lVar8 + 8 + lVar9) = local_4c;
          *(undefined4 *)(lVar8 + 0xc + lVar9) = local_4c;
          *(undefined4 *)(lVar8 + 0x10 + lVar9) = local_4c;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar8 = lVar2;
          }
          FUN_1491f4b4b(param_2,lVar8 + (longlong)local_d4 * 0x90 + 0x14);
          lVar8 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar8 = lVar2;
          }
          FUN_1491f4b4b(param_2,lVar8 + (longlong)local_d4 * 0x90 + 8);
        }
        local_88 = &local_d4;
        local_90 = local_d0;
        FUN_140fe526c(param_1 + 0x1c0,&local_4c,&local_90,0);
        local_d4 = local_d4 + 1;
      } while (local_d4 < *(int *)(param_1 + 0x1b0));
    }
  }
  else if (param_3 == 0) {
    FUN_140f86f22(param_1 + 0x48,param_2,param_1 + 0x88);
    iVar6 = FUN_1448332aa(param_2);
    if (iVar6 < 0xe) {
      local_90 = (uint *)CONCAT44(local_90._4_4_,0xffffffff);
      local_88 = (int *)0x0;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_d0[0] = 0xffffffff;
      local_d0[2] = 0;
      local_d0[3] = 0;
      local_d0[4] = 0xffffffff;
      local_b8 = 0;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_a0 = 0xffffffff;
      local_98 = 0;
      FUN_140f86f22(&local_90,param_2);
    }
    uVar4 = (ulonglong)local_90 >> 0x20;
    local_90 = (uint *)((ulonglong)local_90 & 0xffffffff00000000);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_90,4);
      }
      else {
        FUN_14572512c(param_2,&local_90);
      }
    }
    else {
      local_90 = (uint *)CONCAT44((int)uVar4,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar1;
    }
    FUN_1491f4fec(param_1 + 0x110,(ulonglong)local_90 & 0xffffffff);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f4fec FUN_1491f4fec body=136 status=ok
// SIG undefined FUN_1491f4fec(void)

void FUN_1491f4fec(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0xa0) = param_2;
    if ((uint)(*(int *)(param_1 + 0xa4) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1492101e6(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar2 = param_1;
    }
    FUN_1492104d2((longlong)iVar1 * 0x90 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0xa0) = param_2;
    FUN_149210282(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1491f5076 FUN_1491f5076 body=652 status=ok
// SIG undefined FUN_1491f5076(void)

void FUN_1491f5076(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [44];
  int local_ec;
  longlong local_e8;
  int *local_e0;
  undefined1 local_d4 [4];
  undefined1 local_d0 [136];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140e37b2c();
  if ((param_2 == 0) ||
     ((*(char *)(param_2 + 0x10) != '\x02' && (*(char *)(param_2 + 0x10) != '\x04')))) {
    param_2 = 0;
  }
  lVar1 = param_1 + 0x110;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) < 0) {
    FUN_149210542(lVar1,0);
  }
  iVar4 = *(int *)(param_2 + 0x1b0);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)(param_1 + 0x1b4) < iVar4) {
    FUN_149210542(lVar1);
  }
  lVar2 = param_1 + 0x1c0;
  FUN_1414a87e6(lVar2);
  uVar9 = (longlong)*(int *)(param_2 + 0x1c8) - (longlong)*(int *)(param_2 + 500);
  uVar8 = (uint)uVar9;
  if ((uint)(*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500)) < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar9);
    }
    FUN_141906e72(lVar2,uVar9 & 0xffffffff);
    iVar4 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x208) == 0) || (*(int *)(param_1 + 0x208) < iVar4)) {
      *(int *)(param_1 + 0x208) = iVar4;
      FUN_140fe5654(lVar2);
    }
  }
  local_ec = 0;
  if (0 < *(int *)(param_2 + 0x1b0)) {
    do {
      lVar6 = *(longlong *)(param_2 + 0x1a0);
      if (*(longlong *)(param_2 + 0x1a0) == 0) {
        lVar6 = param_2 + 0x110;
      }
      plVar7 = (longlong *)(lVar6 + (longlong)local_ec * 0x90);
      lVar6 = *plVar7;
      memcpy(local_d0,plVar7 + 1,0x88);
      iVar4 = *(int *)(lVar6 + 0x1c);
      if ((((longlong)iVar4 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0xc0) <= iVar4)) ||
         (lVar6 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0xb8) + (longlong)iVar4 * 8),
         lVar6 == 0)) {
LAB_1491f5209:
        lVar6 = 0;
      }
      else {
        bVar3 = *(byte *)(lVar6 + 0x10);
        if (((0x20 < (ulonglong)bVar3) || ((0x100010016U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) &&
           (bVar3 != 0x80)) goto LAB_1491f5209;
      }
      iVar4 = *(int *)(param_1 + 0x1b0);
      *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
        FUN_1492101e6(lVar1,iVar4);
      }
      lVar5 = *(longlong *)(param_1 + 0x1a0);
      if (*(longlong *)(param_1 + 0x1a0) == 0) {
        lVar5 = lVar1;
      }
      plVar7 = (longlong *)((longlong)iVar4 * 0x90 + lVar5);
      *plVar7 = lVar6;
      memcpy(plVar7 + 1,local_d0,0x88);
      local_e8 = lVar6 + 0x10;
      local_e0 = &local_ec;
      FUN_140fe526c(lVar2,local_d4,&local_e8,0);
      local_ec = local_ec + 1;
    } while (local_ec < *(int *)(param_2 + 0x1b0));
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f5304 FUN_1491f5304 body=836 status=ok
// SIG undefined FUN_1491f5304(void)

void FUN_1491f5304(longlong param_1,longlong param_2,char param_3,char param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  int local_b8;
  int local_b4;
  int *local_b0;
  int *local_a8;
  undefined1 local_9c [4];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  FUN_1491f4806();
  if ((param_2 != 0 && param_5 == '\x01') &&
     ((*(char *)(param_2 + 0x10) == '\x04' || (*(char *)(param_2 + 0x10) == '\x02')))) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_b4 = 0;
    iVar2 = *(int *)(param_1 + 0x1b0);
    if (0 < iVar2) {
      lVar1 = param_1 + 0x110;
      do {
        lVar3 = *(longlong *)(param_2 + 0x1a0);
        if (*(longlong *)(param_2 + 0x1a0) == 0) {
          lVar3 = param_2 + 0x110;
        }
        if ((longlong)*(int *)(param_2 + 0x1b0) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar5 = lVar1;
          }
          lVar5 = *(longlong *)(lVar5 + (longlong)local_b4 * 0x90);
          uVar7 = 0;
          do {
            if ((*(longlong *)(*(longlong *)(lVar3 + uVar7) + 0x14) == *(longlong *)(lVar5 + 0x14))
               && (*(char *)(*(longlong *)(lVar3 + uVar7) + 0x10) == *(char *)(lVar5 + 0x10))) {
              local_b8 = (int)(uVar7 >> 4) * 0x38e38e39;
              if (local_b8 != -1) {
                local_b0 = &local_b4;
                local_a8 = &local_b8;
                FUN_140263e2a(&local_98,local_9c,&local_b0,0);
                iVar2 = *(int *)(param_1 + 0x1b0);
              }
              break;
            }
            uVar7 = uVar7 + 0x90;
          } while ((longlong)*(int *)(param_2 + 0x1b0) * 0x90 != uVar7);
        }
        local_b4 = local_b4 + 1;
      } while (local_b4 < iVar2);
      if (0 < iVar2) {
        uVar7 = 0;
        do {
          if ((int)uStack_90 != local_64) {
            puVar4 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar4 = local_60;
            }
            iVar2 = *(int *)(puVar4 + (ulonglong)((uint)uVar7 & local_50 + 0x7fffffffU) * 4);
            while (iVar2 != -1) {
              lVar3 = local_98 + (longlong)iVar2 * 0x10;
              if (uVar7 == *(uint *)(local_98 + (longlong)iVar2 * 0x10)) {
                if ((int *)(lVar3 + 4) != (int *)0x0 && lVar3 != 0) {
                  lVar5 = *(longlong *)(param_1 + 0x1a0);
                  if (*(longlong *)(param_1 + 0x1a0) == 0) {
                    lVar5 = lVar1;
                  }
                  lVar5 = uVar7 * 0x90 + lVar5;
                  lVar6 = *(longlong *)(param_2 + 0x1a0);
                  if (*(longlong *)(param_2 + 0x1a0) == 0) {
                    lVar6 = param_2 + 0x110;
                  }
                  lVar6 = (longlong)*(int *)(lVar3 + 4) * 0x90 + lVar6;
                  if (param_3 != '\0') {
                    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
                    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar6 + 8);
                  }
                  if (param_4 != '\0') {
                    *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar6 + 0x1c);
                    *(undefined8 *)(lVar5 + 0x14) = *(undefined8 *)(lVar6 + 0x14);
                  }
                  *(undefined1 *)(lVar5 + 0x80) = 1;
                  goto LAB_1491f5507;
                }
                break;
              }
              iVar2 = *(int *)(lVar3 + 8);
            }
          }
          if (param_3 != '\0') {
            lVar3 = *(longlong *)(param_1 + 0x1a0);
            if (*(longlong *)(param_1 + 0x1a0) == 0) {
              lVar3 = lVar1;
            }
            *(undefined8 *)(lVar3 + 8 + uVar7 * 0x90) = 0;
            *(undefined4 *)(lVar3 + 0x10 + uVar7 * 0x90) = 0;
          }
          if (param_4 != '\0') {
            lVar3 = *(longlong *)(param_1 + 0x1a0);
            if (*(longlong *)(param_1 + 0x1a0) == 0) {
              lVar3 = lVar1;
            }
            *(undefined8 *)(lVar3 + 0x14 + uVar7 * 0x90) = 0;
            *(undefined4 *)(lVar3 + 0x1c + uVar7 * 0x90) = 0;
          }
LAB_1491f5507:
          uVar7 = uVar7 + 1;
        } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x1b0));
      }
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f564a FUN_1491f564a body=239 status=ok
// SIG undefined FUN_1491f564a(void)

void FUN_1491f564a(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491f4914();
  if (param_3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc07c90) {
      FUN_144b3d300(&DAT_14cc07c90);
      if (DAT_14cc07c90 == -1) {
        if (DAT_14cc079c8 == 0) {
          uVar1 = FUN_1408c25db();
          DAT_14cc079c8 = FUN_14171c317(FUN_1466ccfe2,uVar1,L"ERigBoneType");
        }
        DAT_14cc07c88 = DAT_14cc079c8;
        _Init_thread_footer(&DAT_14cc07c90);
      }
    }
    FUN_1414aa4be(DAT_14cc07c88,local_28,*(undefined1 *)(param_1 + 0x110));
    (**(code **)(*param_2 + 0x160))(param_2,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f573a FUN_1491f573a body=1851 status=ok
// SIG undefined FUN_1491f573a(void)

void FUN_1491f573a(undefined1 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07cb0) {
    FUN_144b3d300(&DAT_14cc07cb0);
    if (DAT_14cc07cb0 == -1) {
      if (DAT_14cc07a58 == 0) {
        uVar5 = FUN_1408c25db();
        DAT_14cc07a58 = FUN_14171c317(FUN_1466ceeee,uVar5,L"ERigControlAnimationType");
      }
      DAT_14cc07ca8 = DAT_14cc07a58;
      _Init_thread_footer(&DAT_14cc07cb0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07cc0) {
    FUN_144b3d300(&DAT_14cc07cc0);
    if (DAT_14cc07cc0 == -1) {
      if (DAT_14cc07a40 == 0) {
        uVar5 = FUN_1408c25db();
        DAT_14cc07a40 = FUN_14171c317(FUN_1466cd58e,uVar5,L"ERigControlType");
      }
      DAT_14cc07cb8 = DAT_14cc07a40;
      _Init_thread_footer(&DAT_14cc07cc0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07cd0) {
    FUN_144b3d300(&DAT_14cc07cd0);
    if (DAT_14cc07cd0 == -1) {
      if (DAT_14cc07a88 == 0) {
        uVar5 = FUN_1408c25db();
        DAT_14cc07a88 = FUN_14171c317(FUN_1466cef4e,uVar5,L"ERigControlVisibility");
      }
      DAT_14cc07cc8 = DAT_14cc07a88;
      _Init_thread_footer(&DAT_14cc07cd0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07ce0) {
    FUN_144b3d300(&DAT_14cc07ce0);
    if (DAT_14cc07ce0 == -1) {
      if (DAT_14cc07aa0 == 0) {
        uVar5 = FUN_1408c25db();
        DAT_14cc07aa0 = FUN_14171c317(FUN_1466cd5bf,uVar5,L"ERigControlAxis");
      }
      DAT_14cc07cd8 = DAT_14cc07aa0;
      _Init_thread_footer(&DAT_14cc07ce0);
    }
  }
  FUN_1414aa4be(DAT_14cc07ca8,local_38,*param_1);
  FUN_1414aa4be(DAT_14cc07cb8,local_40,param_1[1]);
  FUN_1414aa4be(DAT_14cc07cc8,local_48,param_1[0x12d]);
  FUN_1414aa4be(DAT_14cc07cd8,local_50,param_1[0xc]);
  local_68 = 0;
  uStack_60 = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_14010318a(*(longlong *)(param_1 + 0x150),&local_88,0);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    lVar3 = local_88;
    local_68 = local_88;
    iVar4 = (int)uStack_80;
    uStack_60 = uStack_80;
    if ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_30 = lVar3;
      local_28 = iVar4 + -1;
      if (iVar4 == 0) {
        local_28 = 0;
      }
      FUN_14475bf92(&local_88);
      (**(code **)(*param_2 + 0x128))(param_2,&local_88);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  (**(code **)(*param_2 + 0x160))(param_2,local_38);
  (**(code **)(*param_2 + 0x160))(param_2,local_40);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 4);
  (**(code **)(*param_2 + 0x160))(param_2,local_50);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_88 = CONCAT44(local_88._4_4_,(uint)(byte)param_1[0xd]);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
    param_1[0xd] = (uint)local_88 != 0;
  }
  else {
    param_1[0xd] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1492105b0(param_2,param_1 + 0x10);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_88 = CONCAT44(local_88._4_4_,(uint)(byte)param_1[0x20]);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
    param_1[0x20] = (uint)local_88 != 0;
  }
  else {
    param_1[0x20] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1491f3838(param_2,param_1 + 0x24);
  FUN_1491f3838(param_2,param_1 + 0xa8);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_88 = CONCAT44(local_88._4_4_,(uint)(byte)param_1[300]);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
    param_1[300] = (uint)local_88 != 0;
  }
  else {
    param_1[300] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x160))(param_2,local_48);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x130);
  FUN_1408ef3d7(param_2,param_1 + 0x138);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_88 = CONCAT44(local_88._4_4_,(uint)(byte)param_1[0x148]);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
    param_1[0x148] = (uint)local_88 != 0;
  }
  else {
    param_1[0x148] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14021219d(param_2,&local_68);
  FUN_14920a84c(param_2,param_1 + 0x158);
  FUN_14920a84c(param_2,param_1 + 0x178);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_88 = CONCAT44(local_88._4_4_,(uint)(byte)param_1[0x198]);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
    param_1[0x198] = (uint)local_88 != 0;
  }
  else {
    param_1[0x198] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_88 = CONCAT44(local_88._4_4_,(uint)(byte)param_1[0x199]);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
    param_1[0x199] = (uint)local_88 != 0;
  }
  else {
    param_1[0x199] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_149210854(param_2,param_1 + 0x1a0);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1b0,1);
  }
  else {
    param_1[0x1b0] = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_88 = CONCAT44(local_88._4_4_,(uint)(byte)param_1[0x1b1]);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
    param_1[0x1b1] = (uint)local_88 != 0;
  }
  else {
    param_1[0x1b1] = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f5e76 FUN_1491f5e76 body=3936 status=ok
// SIG undefined FUN_1491f5e76(void)

void FUN_1491f5e76(byte *param_1,longlong *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  byte bVar14;
  undefined ***unaff_R14;
  undefined2 *puVar15;
  bool bVar16;
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined2 *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined **local_3c0;
  undefined8 local_3b8;
  undefined **local_3b0;
  undefined **local_3a8 [4];
  longlong local_388;
  ulonglong local_ec;
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc07cf0) && (FUN_144b3d300(&DAT_14cc07cf0), DAT_14cc07cf0 == -1)) {
    if (DAT_14cc07a58 == 0) {
      uVar12 = FUN_1408c25db();
      DAT_14cc07a58 = FUN_14171c317(FUN_1466ceeee,uVar12,L"ERigControlAnimationType");
    }
    DAT_14cc07ce8 = DAT_14cc07a58;
    _Init_thread_footer(&DAT_14cc07cf0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc07d00) && (FUN_144b3d300(&DAT_14cc07d00), DAT_14cc07d00 == -1)) {
    if (DAT_14cc07a40 == 0) {
      uVar12 = FUN_1408c25db();
      DAT_14cc07a40 = FUN_14171c317(FUN_1466cd58e,uVar12,L"ERigControlType");
    }
    DAT_14cc07cf8 = DAT_14cc07a40;
    _Init_thread_footer(&DAT_14cc07d00);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc07d10) && (FUN_144b3d300(&DAT_14cc07d10), DAT_14cc07d10 == -1)) {
    if (DAT_14cc07a88 == 0) {
      uVar12 = FUN_1408c25db();
      DAT_14cc07a88 = FUN_14171c317(FUN_1466cef4e,uVar12,L"ERigControlVisibility");
    }
    DAT_14cc07d08 = DAT_14cc07a88;
    _Init_thread_footer(&DAT_14cc07d10);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc07d20) && (FUN_144b3d300(&DAT_14cc07d20), DAT_14cc07d20 == -1)) {
    if (DAT_14cc07aa0 == 0) {
      uVar12 = FUN_1408c25db();
      DAT_14cc07aa0 = FUN_14171c317(FUN_1466cd5bf,uVar12,L"ERigControlAxis");
    }
    DAT_14cc07d18 = DAT_14cc07aa0;
    _Init_thread_footer(&DAT_14cc07d20);
  }
  local_3b0 = (undefined **)0x0;
  local_3b8 = 0;
  local_3c0 = (undefined **)0x0;
  local_3c8 = 0;
  local_3d8 = (undefined2 *)0x0;
  uStack_3d0 = 0;
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (0x10 < iVar9) {
    (**(code **)(*param_2 + 0x160))(param_2,&local_3b0);
  }
  (**(code **)(*param_2 + 0x160))(param_2,&local_3b8);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 4);
  (**(code **)(*param_2 + 0x160))(param_2,&local_3c8);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_3a8[0] = (undefined **)CONCAT44(local_3a8[0]._4_4_,(uint)param_1[0xd]);
    (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
    if (1 < (uint)local_3a8[0]) {
      FUN_14572541c(param_2);
    }
    param_1[0xd] = (uint)local_3a8[0] != 0;
  }
  else {
    param_1[0xd] = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x11) {
    puVar4 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar3) {
      local_3a8[0] = (undefined **)((ulonglong)local_3a8[0] & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
      }
      bVar16 = (uint)local_3a8[0] != 0;
    }
    else {
      bVar16 = *(int *)*puVar4 != 0;
      *puVar4 = (ulonglong)piVar3;
    }
  }
  else {
    bVar16 = false;
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0xd) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_3a8[0] = (undefined **)((ulonglong)local_3a8[0] & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
      uVar11 = (ulonglong)local_3a8[0] & 0xffffffff;
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
        uVar11 = (ulonglong)local_3a8[0] & 0xffffffff;
      }
    }
    else {
      uVar11 = (ulonglong)*(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    local_49c = (undefined4)CONCAT71((int7)(uVar11 >> 8),(int)uVar11 != 0);
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      unaff_R14 = local_3a8;
      local_3a8[0] = (undefined **)((ulonglong)local_3a8[0] & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,unaff_R14,4);
      uVar11 = (ulonglong)local_3a8[0] & 0xffffffff;
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
        uVar11 = (ulonglong)local_3a8[0] & 0xffffffff;
      }
    }
    else {
      uVar11 = (ulonglong)*(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    local_4a0 = (undefined4)CONCAT71((int7)(uVar11 >> 8),(int)uVar11 != 0);
    puVar4 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar3) {
      local_3a8[0] = (undefined **)((ulonglong)local_3a8[0] & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
      }
      uVar11 = CONCAT71((int7)((ulonglong)local_3a8 >> 8),(uint)local_3a8[0] != 0);
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(int *)*puVar4 != 0);
      *puVar4 = (ulonglong)piVar3;
    }
  }
  else {
    FUN_1492105b0(param_2,param_1 + 0x10);
    uVar11 = 0;
    local_4a0 = 0;
    local_49c = 0;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_3a8[0] = (undefined **)CONCAT44(local_3a8[0]._4_4_,(uint)param_1[0x20]);
    (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
    if (1 < (uint)local_3a8[0]) {
      FUN_14572541c(param_2);
    }
    param_1[0x20] = (uint)local_3a8[0] != 0;
  }
  else {
    param_1[0x20] = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_41c = 0x3ff00000;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f4 = 0x3ff00000;
  uStack_3f0 = 0;
  uStack_3ec = 0x3ff00000;
  local_3e8 = 0x3ff0000000000000;
  uStack_3e0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_484 = 0;
  uStack_480 = 0;
  uStack_47c = 0x3ff00000;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_454 = 0x3ff00000;
  uStack_450 = 0;
  uStack_44c = 0x3ff00000;
  local_448 = 0x3ff0000000000000;
  uStack_440 = 0;
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 10) {
    FUN_1400f4f7e(param_2,&local_438);
    FUN_14480c34d(param_2,&local_418);
    FUN_14480c34d(param_2,&local_3f8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      uStack_400 = 0;
      uStack_3e0 = 0;
    }
    FUN_1400f4f7e(param_2,&local_498);
    FUN_14480c34d(param_2,&local_478);
    FUN_14480c34d(param_2,&local_458);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      uStack_460 = 0;
      uStack_440 = 0;
    }
  }
  else {
    FUN_1491f3838(param_2,param_1 + 0x24);
    FUN_1491f3838(param_2,param_1 + 0xa8);
  }
  lVar13 = DAT_14cc07cf8;
  iVar9 = FUN_1448e5bf4(DAT_14cc07cf8,local_3b8,0);
  if (iVar9 == -1) {
    bVar7 = 0xff;
  }
  else {
    bVar7 = (byte)*(undefined8 *)(*(longlong *)(lVar13 + 0x40) + 8 + (longlong)iVar9 * 0x10);
  }
  param_1[1] = bVar7;
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x11) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_3a8[0] = (undefined **)((ulonglong)local_3a8[0] & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
      uVar10 = (uint)local_3a8[0];
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
        uVar10 = (uint)local_3a8[0];
      }
    }
    else {
      uVar10 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (bVar16) {
      if ((uVar10 == 0) || (param_1[1] == 0)) {
        uVar12 = 1;
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 2;
      bVar7 = 2;
    }
    *param_1 = bVar7;
    FUN_1414aa4be(DAT_14cc07ce8,local_3a8,uVar12);
    local_3b0 = local_3a8[0];
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_3a8[0] = (undefined **)CONCAT44(local_3a8[0]._4_4_,(uint)param_1[300]);
    (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
    if (1 < (uint)local_3a8[0]) {
      FUN_14572541c(param_2);
    }
    param_1[300] = (uint)local_3a8[0] != 0;
  }
  else {
    param_1[300] = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x11) {
    FUN_1414aa4be(DAT_14cc07d08,local_3a8,0);
    local_3c0 = local_3a8[0];
  }
  else {
    (**(code **)(*param_2 + 0x160))(param_2,&local_3c0);
  }
  puVar4 = (ulonglong *)(param_1 + 0x130);
  (**(code **)(*param_2 + 0x160))(param_2,puVar4);
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0xb) {
    FUN_1491d7834(local_3a8);
    uVar6 = *puVar4;
    local_3a8[0] = &PTR_FUN_14bb89f40;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (uVar6 == local_ec) {
      FUN_145df188e(local_3a8);
      *puVar4 = (ulonglong)local_3a8[0];
      if (local_388 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_1408ef3d7(param_2,param_1 + 0x138);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_3a8[0] = (undefined **)CONCAT44(local_3a8[0]._4_4_,(uint)param_1[0x148]);
    (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
    if (1 < (uint)local_3a8[0]) {
      FUN_14572541c(param_2);
    }
    param_1[0x148] = (uint)local_3a8[0] != 0;
  }
  else {
    param_1[0x148] = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14021219d(param_2,&local_3d8);
  lVar13 = DAT_14cc07ce8;
  iVar9 = FUN_1448e5bf4(DAT_14cc07ce8,local_3b0,0);
  bVar14 = 0xff;
  bVar7 = 0xff;
  if (iVar9 != -1) {
    bVar7 = (byte)*(undefined8 *)(*(longlong *)(lVar13 + 0x40) + 8 + (longlong)iVar9 * 0x10);
  }
  *param_1 = bVar7;
  lVar13 = DAT_14cc07d18;
  iVar9 = FUN_1448e5bf4(DAT_14cc07d18,local_3c8,0);
  if (iVar9 != -1) {
    bVar14 = (byte)*(undefined8 *)(*(longlong *)(lVar13 + 0x40) + 8 + (longlong)iVar9 * 0x10);
  }
  param_1[0xc] = bVar14;
  lVar13 = DAT_14cc07d08;
  iVar9 = FUN_1448e5bf4(DAT_14cc07d08,local_3c0,0);
  if (iVar9 == -1) {
    bVar7 = 0xff;
  }
  else {
    bVar7 = (byte)*(undefined8 *)(*(longlong *)(lVar13 + 0x40) + 8 + (longlong)iVar9 * 0x10);
  }
  param_1[0x12d] = bVar7;
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 10) {
    FUN_14919dde6(param_1 + 0x24,&local_438,param_1[1],param_1[0xc]);
    FUN_14919dde6(param_1 + 0xa8,&local_498,param_1[1],param_1[0xc]);
  }
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  if (1 < (int)uStack_3d0) {
    cVar8 = FUN_144a61b4f();
    puVar15 = local_3d8;
    if ((int)uStack_3d0 == 0) {
      puVar15 = &DAT_149dfb77a;
    }
    uVar12 = FUN_140851d9a();
    if (cVar8 == '\0') {
      lVar13 = FUN_140277b32(uVar12,0,puVar15,0);
    }
    else {
      local_4b0 = 0;
      local_4c0 = 0;
      local_4b8 = 1;
      local_4c8 = 0;
      lVar13 = FUN_1412ecd05(uVar12,0,puVar15,0);
    }
    if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar13);
    }
    *(longlong *)(param_1 + 0x150) = lVar13;
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 9) {
    if (*(int *)(param_1 + 0x164) < 0) {
      param_1[0x160] = 0;
      param_1[0x161] = 0;
      param_1[0x162] = 0;
      param_1[0x163] = 0;
      FUN_14920a7da(param_1 + 0x158,0);
    }
    else {
      param_1[0x160] = 0;
      param_1[0x161] = 0;
      param_1[0x162] = 0;
      param_1[0x163] = 0;
    }
  }
  else {
    FUN_14920a84c(param_2,param_1 + 0x158);
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x11) {
    if (*(int *)(param_1 + 0x184) < 0) {
      param_1[0x180] = 0;
      param_1[0x181] = 0;
      param_1[0x182] = 0;
      param_1[0x183] = 0;
      FUN_14920a7da(param_1 + 0x178,0);
    }
    else {
      param_1[0x180] = 0;
      param_1[0x181] = 0;
      param_1[0x182] = 0;
      param_1[0x183] = 0;
    }
  }
  else {
    FUN_14920a84c(param_2,param_1 + 0x178);
  }
  if (*(int *)(param_1 + 0x194) < 0) {
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x192] = 0;
    param_1[0x193] = 0;
    FUN_14920a7da(param_1 + 0x188,0);
  }
  else {
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x192] = 0;
    param_1[0x193] = 0;
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0xd) {
    FUN_1491d74b0(param_1,local_49c,local_4a0,uVar11 & 0xffffffff);
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x11) {
    if (*param_1 < 2) {
      bVar7 = param_1[1];
      if ((10 < bVar7) || (bVar16 = true, (0x407U >> (bVar7 & 0x1f) & 1) == 0)) {
        bVar16 = bVar7 == 3;
      }
    }
    else {
      bVar16 = false;
    }
    param_1[0x198] = bVar16;
  }
  else {
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      local_3a8[0] = (undefined **)CONCAT44(local_3a8[0]._4_4_,(uint)param_1[0x198]);
      (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
      }
      param_1[0x198] = (uint)local_3a8[0] != 0;
    }
    else {
      param_1[0x198] = *piVar3 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x16) {
    param_1[0x199] = 0;
  }
  else {
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      local_3a8[0] = (undefined **)CONCAT44(local_3a8[0]._4_4_,(uint)param_1[0x199]);
      (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
      }
      param_1[0x199] = (uint)local_3a8[0] != 0;
    }
    else {
      param_1[0x199] = *piVar3 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x17) {
    if (*(int *)(param_1 + 0x1ac) < 0) {
      param_1[0x1a8] = 0;
      param_1[0x1a9] = 0;
      param_1[0x1aa] = 0;
      param_1[0x1ab] = 0;
      FUN_14921096e(param_1 + 0x1a0);
    }
    else {
      param_1[0x1a8] = 0;
      param_1[0x1a9] = 0;
      param_1[0x1aa] = 0;
      param_1[0x1ab] = 0;
    }
  }
  else {
    FUN_149210854(param_2,param_1 + 0x1a0);
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  pbVar2 = param_1 + 0x1b0;
  if (iVar9 < 0x1a) {
    *pbVar2 = 3;
  }
  else {
    pbVar5 = *(byte **)param_2[1];
    if ((byte *)((undefined8 *)param_2[1])[1] < pbVar5 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,pbVar2,1);
    }
    else {
      *pbVar2 = *pbVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar9 < 0x1b) {
    param_1[0x1b1] = 0;
  }
  else {
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      local_3a8[0] = (undefined **)CONCAT44(local_3a8[0]._4_4_,(uint)param_1[0x1b1]);
      (**(code **)(*param_2 + 0x170))(param_2,local_3a8,4);
      if (1 < (uint)local_3a8[0]) {
        FUN_14572541c(param_2);
      }
      param_1[0x1b1] = (uint)local_3a8[0] != 0;
    }
    else {
      param_1[0x1b1] = *piVar3 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if (local_3d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f6dd8 FUN_1491f6dd8 body=97 status=ok
// SIG undefined FUN_1491f6dd8(void)

void FUN_1491f6dd8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1492107d0(param_1,iVar1);
    }
    FUN_1492107bd((longlong)iVar1 * 2 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_149210a00(param_1);
  return;
}



// FUNCTION 1491f6e3a FUN_1491f6e3a body=8 status=ok
// SIG undefined FUN_1491f6e3a(void)

longlong FUN_1491f6e3a(longlong param_1)

{
  return param_1 + 0x400;
}



// FUNCTION 1491f6e42 FUN_1491f6e42 body=8 status=ok
// SIG undefined FUN_1491f6e42(void)

longlong FUN_1491f6e42(longlong param_1)

{
  return param_1 + 0x480;
}



// FUNCTION 1491f6e4a FUN_1491f6e4a body=117 status=ok
// SIG undefined FUN_1491f6e4a(void)

void FUN_1491f6e4a(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1491f49ca();
  if (param_3 != 0) {
    return;
  }
  FUN_1491f573a(param_1 + 0x210,param_2);
  FUN_1491f4454(param_1 + 0x400,param_2,param_1 + 0x440);
  FUN_1491f4454(param_1 + 0x480,param_2,param_1 + 0x4c0);
  FUN_1491f44b0(param_1 + 0x3c8,param_2);
  return;
}



// FUNCTION 1491f6ec0 FUN_1491f6ec0 body=216 status=ok
// SIG undefined FUN_1491f6ec0(void)

void FUN_1491f6ec0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_1491f4c40();
  if (param_3 != 0) {
    return;
  }
  FUN_1491f5e76(param_1 + 0x210,param_2);
  FUN_140f86f22(param_1 + 0x400,param_2,param_1 + 0x440);
  FUN_140f86f22(param_1 + 0x480,param_2,param_1 + 0x4c0);
  iVar5 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar5 < 0x13) {
    *(undefined1 *)(param_1 + 0x3c8) = 3;
    uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(ulonglong *)(param_1 + 0x3d0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0x3d8) = uVar1;
    *(undefined8 *)(param_1 + 0x3e0) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8._4_4_;
    uVar3 = (undefined4)DAT_14c8464e8;
    uVar2 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 1000) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x3ec) = uVar2;
    *(undefined4 *)(param_1 + 0x3f0) = uVar3;
    *(undefined4 *)(param_1 + 0x3f4) = uVar4;
    *(undefined8 *)(param_1 + 0x3f8) = DAT_14c8464f0;
  }
  else {
    FUN_1491f4580(param_1 + 0x3c8,param_2);
  }
  FUN_1491f46f0(param_1 + 0x3c8,*(undefined1 *)(param_1 + 0x3c0));
  return;
}



// FUNCTION 1491f6f98 FUN_1491f6f98 body=212 status=ok
// SIG undefined FUN_1491f6f98(void)

void FUN_1491f6f98(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1491f5076();
  if ((param_2 == 0) || (*(char *)(param_2 + 0x10) != '\x04')) {
    param_2 = 0;
  }
  FUN_149191da2(param_1 + 0x210,param_2 + 0x210);
  FUN_144b3caae(param_1 + 0x400,param_2 + 0x400);
  FUN_144b3caae(param_1 + 0x420,param_2 + 0x420);
  FUN_140e37f6e(param_1 + 0x440,param_2 + 0x440);
  FUN_144b3caae(param_1 + 0x480,param_2 + 0x480);
  FUN_144b3caae(param_1 + 0x4a0,param_2 + 0x4a0);
  FUN_140e37f6e(param_1 + 0x4c0,param_2 + 0x4c0);
  uVar1 = *(undefined8 *)(param_2 + 0x3d0);
  uVar2 = *(undefined8 *)(param_2 + 0x3d8);
  uVar3 = *(undefined8 *)(param_2 + 0x3e0);
  uVar4 = *(undefined8 *)(param_2 + 1000);
  uVar5 = *(undefined8 *)(param_2 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3d0) = uVar1;
  *(undefined8 *)(param_1 + 0x3d8) = uVar2;
  *(undefined8 *)(param_1 + 0x3e0) = uVar3;
  *(undefined8 *)(param_1 + 1000) = uVar4;
  *(undefined8 *)(param_1 + 0x3f0) = uVar5;
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 0x3f8);
  return;
}



// FUNCTION 1491f706c FUN_1491f706c body=673 status=ok
// SIG undefined FUN_1491f706c(void)

void FUN_1491f706c(longlong param_1,longlong param_2,char param_3,char param_4,undefined1 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_1491f5304(param_1);
  if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\x04')) {
    if (param_3 != '\0') {
      FUN_144b3caae(param_1 + 0x400,param_2 + 0x400);
      if (*(undefined1 **)(param_1 + 0x458) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x458) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x458);
        }
        **(undefined1 **)(param_1 + 0x458) = *puVar1;
      }
      if (*(undefined1 **)(param_1 + 0x448) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x448) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x448);
        }
        **(undefined1 **)(param_1 + 0x448) = *puVar1;
      }
      FUN_144b3caae(param_1 + 0x480,param_2 + 0x480);
      if (*(undefined1 **)(param_1 + 0x4d8) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x4d8) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x4d8);
        }
        **(undefined1 **)(param_1 + 0x4d8) = *puVar1;
      }
      if (*(undefined1 **)(param_1 + 0x4c8) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x4c8) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x4c8);
        }
        **(undefined1 **)(param_1 + 0x4c8) = *puVar1;
      }
      if (*(char *)(param_2 + 0x3c8) == '\x03') {
        local_38 = *(undefined8 *)(param_2 + 0x3e0);
        local_48 = *(undefined4 *)(param_2 + 0x3d0);
        uStack_44 = *(undefined4 *)(param_2 + 0x3d4);
        uStack_40 = *(undefined4 *)(param_2 + 0x3d8);
        uStack_3c = *(undefined4 *)(param_2 + 0x3dc);
      }
      else {
        local_58 = 0;
        FUN_14690c9ab(&local_48,(undefined4 *)(param_2 + 0x3d0),*(char *)(param_2 + 0x3c8),3);
      }
      local_58 = 0;
      FUN_1491de136(param_1 + 0x3c8,&local_48,0,3);
    }
    if (param_4 != '\0') {
      FUN_144b3caae(param_1 + 0x420,param_2 + 0x420);
      if (*(undefined1 **)(param_1 + 0x478) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x478) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x478);
        }
        **(undefined1 **)(param_1 + 0x478) = *puVar1;
      }
      if (*(undefined1 **)(param_1 + 0x468) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x468) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x468);
        }
        **(undefined1 **)(param_1 + 0x468) = *puVar1;
      }
      FUN_144b3caae(param_1 + 0x4a0,param_2 + 0x4a0);
      if (*(undefined1 **)(param_1 + 0x4f8) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x4f8) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x4f8);
        }
        **(undefined1 **)(param_1 + 0x4f8) = *puVar1;
      }
      if (*(undefined1 **)(param_1 + 0x4e8) != (undefined1 *)0x0) {
        puVar1 = &DAT_14bb83710;
        if (*(undefined1 **)(param_2 + 0x4e8) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_2 + 0x4e8);
        }
        **(undefined1 **)(param_1 + 0x4e8) = *puVar1;
      }
      if (*(char *)(param_2 + 0x3c8) == '\x03') {
        local_38 = *(undefined8 *)(param_2 + 0x3f8);
        local_48 = *(undefined4 *)(param_2 + 1000);
        uStack_44 = *(undefined4 *)(param_2 + 0x3ec);
        uStack_40 = *(undefined4 *)(param_2 + 0x3f0);
        uStack_3c = *(undefined4 *)(param_2 + 0x3f4);
      }
      else {
        local_58 = 0;
        FUN_14690c9ab(&local_48,(undefined4 *)(param_2 + 1000),*(char *)(param_2 + 0x3c8),3);
      }
      local_58 = 0;
      FUN_1491de136(param_1 + 0x3c8,&local_48,1,3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f730e FUN_1491f730e body=110 status=ok
// SIG undefined FUN_1491f730e(void)

void FUN_1491f730e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e4ab72(param_1 + 0x48);
  FUN_140e4ab12(param_1 + 0x88,param_3);
  FUN_140e4ab72(param_1 + 0x400,param_2);
  FUN_140e4ab72(param_1 + 0x480,param_2);
  FUN_140e4ab12(param_1 + 0x440,param_3);
  FUN_140e4ab12(param_1 + 0x4c0,param_3);
  return;
}



// FUNCTION 1491f737c FUN_1491f737c body=110 status=ok
// SIG undefined FUN_1491f737c(void)

void FUN_1491f737c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140a17d8e(param_1 + 0x48);
  FUN_140a17e3a(param_1 + 0x88,param_3);
  FUN_140a17d8e(param_1 + 0x400,param_2);
  FUN_140a17d8e(param_1 + 0x480,param_2);
  FUN_140a17e3a(param_1 + 0x440,param_3);
  FUN_140a17e3a(param_1 + 0x4c0,param_3);
  return;
}



// FUNCTION 1491f73ea FUN_1491f73ea body=270 status=ok
// SIG undefined FUN_1491f73ea(void)

void FUN_1491f73ea(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    FUN_140f872f2(param_1 + 0x10);
    puVar3 = &DAT_14bb83714;
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 0x50);
    }
    local_28 = *puVar3;
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_24 = (uint)*(byte *)(param_1 + 0x48);
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      if (1 < local_24) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x48) = local_24 != 0;
    }
    else {
      *(bool *)(param_1 + 0x48) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f756e FUN_1491f756e body=79 status=ok
// SIG undefined FUN_1491f756e(void)

void FUN_1491f756e(longlong param_1,longlong *param_2)

{
  if (((*(byte *)(param_2 + 5) & 4) == 0) &&
     ((*(byte *)(param_2 + 5) & 1) == 0 && (*(byte *)((longlong)param_2 + 0x2b) & 10) == 0)) {
    return;
  }
  FUN_1402ac1b3(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001491f75b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 1491f75be FUN_1491f75be body=193 status=ok
// SIG undefined FUN_1491f75be(void)

undefined8 FUN_1491f75be(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_3,&local_40);
  puVar1 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_140002266(&local_30,L"%s|%s",puVar1,puVar2);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_50 = local_30;
  local_48 = local_28 + -1;
  if (local_28 == 0) {
    local_48 = 0;
  }
  FUN_141500794(param_1,&local_50,0);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f7680 FUN_1491f7680 body=22 status=ok
// SIG undefined FUN_1491f7680(void)

undefined8 FUN_1491f7680(undefined8 param_1)

{
  FUN_1491f75be();
  return param_1;
}



// FUNCTION 1491f7696 FUN_1491f7696 body=20 status=ok
// SIG undefined FUN_1491f7696(void)

void FUN_1491f7696(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
  }
  return;
}



// FUNCTION 1491f76aa FUN_1491f76aa body=75 status=ok
// SIG undefined FUN_1491f76aa(void)

void FUN_1491f76aa(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001491f76da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,param_1,4,*(code **)(*param_2 + 0x170));
    return;
  }
  FUN_14572512c(param_2,param_1);
  return;
}



// FUNCTION 1491f76f6 FUN_1491f76f6 body=75 status=ok
// SIG undefined FUN_1491f76f6(void)

void FUN_1491f76f6(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001491f7726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,param_1,4,*(code **)(*param_2 + 0x170));
    return;
  }
  FUN_14572512c(param_2,param_1);
  return;
}



// FUNCTION 1491f7742 FUN_1491f7742 body=73 status=ok
// SIG undefined FUN_1491f7742(void)

void FUN_1491f7742(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1491f4914();
  if (param_3 != 0) {
    return;
  }
  FUN_1402ac1b3(param_2,param_1 + 0x110);
  FUN_1491f76aa(param_1 + 0x120,param_2);
  return;
}



// FUNCTION 1491f778c FUN_1491f778c body=73 status=ok
// SIG undefined FUN_1491f778c(void)

void FUN_1491f778c(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_140f86e4c();
  if (param_3 != 0) {
    return;
  }
  FUN_1402ac1b3(param_2,param_1 + 0x110);
  FUN_1491f76f6(param_1 + 0x120,param_2);
  return;
}



// FUNCTION 1491f77d6 FUN_1491f77d6 body=63 status=ok
// SIG undefined FUN_1491f77d6(void)

void FUN_1491f77d6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140e37a8a();
  if ((param_2 == 0) || (*(char *)(param_2 + 0x10) != '\x10')) {
    param_2 = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  return;
}



// FUNCTION 1491f7822 FUN_1491f7822 body=58 status=ok
// SIG undefined FUN_1491f7822(void)

void FUN_1491f7822(longlong param_1,longlong param_2)

{
  FUN_140e37a8a();
  if ((param_2 == 0) || (*(char *)(param_2 + 0x10) != ' ')) {
    param_2 = 0;
  }
  FUN_1491bef34(param_1 + 0x110,param_2 + 0x110);
  return;
}



// FUNCTION 1491f785c FUN_1491f785c body=98 status=ok
// SIG undefined FUN_1491f785c(void)

void FUN_1491f785c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_1491f4806();
  if (((param_2 != 0) && (*(char *)(param_2 + 0x10) == ' ')) && (*(int *)(param_2 + 0x118) != 0)) {
    plVar1 = *(longlong **)(param_2 + 0x110);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x30))();
      if (cVar2 != '\0') {
        FUN_1491bef34(param_1 + 0x110,(longlong *)(param_2 + 0x110));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1491f78be FUN_1491f78be body=425 status=ok
// SIG undefined FUN_1491f78be(void)

void FUN_1491f78be(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  FUN_14021219d(param_2,param_1);
  iVar6 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (0x1c < iVar6) {
    puVar2 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x10),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      local_34 = (uint)*(byte *)(param_1 + 0x11);
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      if (1 < local_34) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x11) = local_34 != 0;
    }
    else {
      *(bool *)(param_1 + 0x11) = *piVar3 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  local_34 = *(uint *)(param_1 + 0x20);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    }
    else {
      FUN_14572512c(param_2,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (0 < (int)local_34) {
    lVar7 = 0x10;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      FUN_14021219d(param_2,lVar5 + lVar7 + -0x10);
      FUN_14021219d(param_2,lVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar8 < (int)local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f7a68 FUN_1491f7a68 body=431 status=ok
// SIG undefined FUN_1491f7a68(void)

void FUN_1491f7a68(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  FUN_14021219d(param_2,param_1);
  iVar6 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (0x1c < iVar6) {
    puVar2 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x10),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      local_34 = (uint)*(byte *)(param_1 + 0x11);
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      if (1 < local_34) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x11) = local_34 != 0;
    }
    else {
      *(bool *)(param_1 + 0x11) = *piVar3 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  local_34 = 0;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    }
    else {
      FUN_14572512c(param_2,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  FUN_1491f7c18((longlong *)(param_1 + 0x18),local_34);
  if (0 < (int)local_34) {
    lVar7 = 0x10;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      FUN_14021219d(param_2,lVar5 + lVar7 + -0x10);
      FUN_14021219d(param_2,lVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar8 < (int)local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f7c18 FUN_1491f7c18 body=130 status=ok
// SIG undefined FUN_1491f7c18(void)

void FUN_1491f7c18(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149210a96(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x20 + *param_1),0,(longlong)(param_2 - iVar1) << 5);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149210b1c(param_1,param_2,iVar1 - param_2);
    FUN_149210b76(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1491f7c9c FUN_1491f7c9c body=54 status=ok
// SIG undefined FUN_1491f7c9c(void)

void FUN_1491f7c9c(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    return;
  }
  FUN_140f872f2(param_1 + 0x10);
  FUN_1491f78be(param_1 + 0x48,param_2);
  return;
}



// FUNCTION 1491f7cd2 FUN_1491f7cd2 body=55 status=ok
// SIG undefined FUN_1491f7cd2(void)

void FUN_1491f7cd2(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_140f8709c();
  if (param_3 != 0) {
    return;
  }
  FUN_1491f7a68(param_1 + 0x48,param_2);
  return;
}



// FUNCTION 1491f7d0a FUN_1491f7d0a body=71 status=ok
// SIG undefined FUN_1491f7d0a(void)

void FUN_1491f7d0a(longlong param_1,longlong param_2)

{
  if ((param_2 == 0) || (*(char *)(param_2 + 0x10) != '@')) {
    param_2 = 0;
  }
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  FUN_1491bf11c(param_1 + 0x60,param_2 + 0x60);
  return;
}



// FUNCTION 1491f7d52 FUN_1491f7d52 body=64 status=ok
// SIG undefined FUN_1491f7d52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491f7d52(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 4;
  for (lVar2 = 0xc; uVar1 = uRam000000014cc07d2c, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x10] = _DAT_14cc07d24;
  param_1[0x11] = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



// FUNCTION 1491f7d9e FUN_1491f7d9e body=137 status=ok
// SIG undefined FUN_1491f7d9e(void)

undefined8 * FUN_1491f7d9e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined4 *)(param_1 + 0x18);
  local_38 = 0;
  FUN_149184980(param_3,&local_20,&local_30,DAT_14cc07d40);
  if (local_20 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1400021e4(&local_20,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f7e34 FUN_1491f7e34 body=61 status=ok
// SIG undefined FUN_1491f7e34(void)

void FUN_1491f7e34(longlong param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = *(undefined1 *)(param_1 + 0x10);
  FUN_1491f7e72();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f7e72 FUN_1491f7e72 body=1174 status=ok
// SIG undefined FUN_1491f7e72(void)

void FUN_1491f7e72(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    if (DAT_14cc07d68 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07d68 = FUN_140002ddd(FUN_1466cf66f,uVar1,L"RigBoolMetadata");
    }
    break;
  case 1:
    if (DAT_14cc07d80 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07d80 = FUN_140002ddd(FUN_1466cf705,uVar1,L"RigBoolArrayMetadata");
    }
    break;
  case 2:
    if (DAT_14cc07d98 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07d98 = FUN_140002ddd(FUN_1466cf79b,uVar1,L"RigFloatMetadata");
    }
    break;
  case 3:
    if (DAT_14cc07db0 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07db0 = FUN_140002ddd(FUN_1466cf831,uVar1,L"RigFloatArrayMetadata");
    }
    break;
  case 4:
    if (DAT_14cc07dc8 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07dc8 = FUN_140002ddd(FUN_1466cf8c7,uVar1,L"RigInt32Metadata");
    }
    break;
  case 5:
    if (DAT_14cc07de0 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07de0 = FUN_140002ddd(FUN_1466cf95d,uVar1,L"RigInt32ArrayMetadata");
    }
    break;
  case 6:
    if (DAT_14cc07df8 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07df8 = FUN_140002ddd(FUN_1466cf9f3,uVar1,L"RigNameMetadata");
    }
    break;
  case 7:
    if (DAT_14cc07e10 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07e10 = FUN_140002ddd(FUN_1466cfa89,uVar1,L"RigNameArrayMetadata");
    }
    break;
  case 8:
    if (DAT_14cc07e28 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07e28 = FUN_140002ddd(FUN_1466cfb1f,uVar1,L"RigVectorMetadata");
    }
    break;
  case 9:
    if (DAT_14cc07e40 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07e40 = FUN_140002ddd(FUN_1466cfbb5,uVar1,L"RigVectorArrayMetadata");
    }
    break;
  case 10:
    if (DAT_14cc07e58 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07e58 = FUN_140002ddd(FUN_1466cfc4b,uVar1,L"RigRotatorMetadata");
    }
    break;
  case 0xb:
    if (DAT_14cc07e70 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07e70 = FUN_140002ddd(FUN_1466cfce1,uVar1,L"RigRotatorArrayMetadata");
    }
    break;
  case 0xc:
    if (DAT_14cc07e88 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07e88 = FUN_140002ddd(FUN_1466cfd77,uVar1,L"RigQuatMetadata");
    }
    break;
  case 0xd:
    if (DAT_14cc07ea0 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07ea0 = FUN_140002ddd(FUN_1466cfe0d,uVar1,L"RigQuatArrayMetadata");
    }
    break;
  case 0xe:
    if (DAT_14cc07eb8 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07eb8 = FUN_140002ddd(FUN_1466cfea3,uVar1,L"RigTransformMetadata");
    }
    break;
  case 0xf:
    if (DAT_14cc07ed0 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07ed0 = FUN_140002ddd(FUN_1466cff39,uVar1,L"RigTransformArrayMetadata");
    }
    break;
  case 0x10:
    if (DAT_14cc07ee8 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07ee8 = FUN_140002ddd(FUN_1466cffcf,uVar1,L"RigLinearColorMetadata");
    }
    break;
  case 0x11:
    if (DAT_14cc07f00 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07f00 = FUN_140002ddd(FUN_1466d0065,uVar1,L"RigLinearColorArrayMetadata");
    }
    break;
  case 0x12:
    if (DAT_14cc07f18 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07f18 = FUN_140002ddd(FUN_1466d00fb,uVar1,L"RigElementKeyMetadata");
    }
    break;
  case 0x13:
    if (DAT_14cc07f30 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07f30 = FUN_140002ddd(FUN_1466d0191,uVar1,L"RigElementKeyArrayMetadata");
    }
    break;
  default:
    if (DAT_14cc07d50 == 0) {
      uVar1 = FUN_1408c25db();
      DAT_14cc07d50 = FUN_140002ddd(FUN_141906e0f,uVar1,L"RigBaseMetadata");
    }
  }
  return;
}



// FUNCTION 1491f8308 FUN_1491f8308 body=117 status=ok
// SIG undefined FUN_1491f8308(void)

void FUN_1491f8308(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
                    /* WARNING: Could not recover jumptable at 0x0001491f8368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x10),1);
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  return;
}



// FUNCTION 1491f837e FUN_1491f837e body=9 status=ok
// SIG undefined FUN_1491f837e(void)

void FUN_1491f837e(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x18);
  return;
}



// FUNCTION 1491f8394 FUN_1491f8394 body=186 status=ok
// SIG undefined FUN_1491f8394(void)

undefined4
FUN_1491f8394(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68._0_4_ = *param_2;
  local_68._4_4_ = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_50 = (undefined4 *)0x0;
  local_48 = 1;
  FUN_149210c12(&local_50);
  *local_50 = (undefined4)local_68;
  local_50[1] = local_68._4_4_;
  local_50[2] = uStack_60;
  local_50[3] = uStack_5c;
  local_50[4] = param_3;
  local_50[5] = param_4;
  *(undefined8 *)(local_50 + 6) = param_5;
  *(undefined8 *)(local_50 + 8) = param_6;
  local_68 = local_50;
  uStack_60 = local_48;
  uVar1 = FUN_1491f8450(param_1,&local_68);
  if (local_50 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f8450 FUN_1491f8450 body=760 status=ok
// SIG undefined FUN_1491f8450(void)

ulonglong FUN_1491f8450(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  longlong local_d8;
  undefined4 local_d0;
  int *local_78;
  int *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar5 = FUN_144729dda(param_1 + 0x18);
  if ((cVar5 == '\0') || (lVar7 = FUN_14479d2ce(param_1 + 0x18), lVar7 == 0)) {
    uVar12 = 0;
    goto LAB_1491f849a;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  iVar11 = (int)param_2[1];
  if (iVar11 < 0) {
LAB_1491f8741:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar11 == 0) goto LAB_1491f84f8;
  FUN_14481578e(&local_58);
  iVar11 = (int)param_2[1];
  if (iVar11 < 0) goto LAB_1491f8741;
  if (iVar11 == 0) {
LAB_1491f84f8:
    uVar12 = 0;
  }
  else {
    FUN_14481578e(&local_68);
    if ((longlong)(int)param_2[1] == 0) goto LAB_1491f84f8;
    lVar15 = *param_2;
    lVar16 = (longlong)(int)param_2[1] * 0x28;
    uVar12 = 0;
    do {
      local_e8 = *(undefined4 *)(lVar15 + 0x14);
      FUN_1491e06ae(lVar7,&local_78,lVar15,*(undefined4 *)(lVar15 + 0x10));
      piVar3 = local_78;
      plVar14 = *(longlong **)(lVar15 + 0x18);
      if (plVar14 != (longlong *)0x0) {
        plVar8 = (longlong *)FUN_144b3cbe6(local_78);
        plVar13 = &local_d8;
        for (lVar9 = 0xc; uVar12 = uStack_50, lVar9 != 0; lVar9 = lVar9 + -1) {
          *plVar13 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar13 = plVar13 + 1;
        }
        iVar11 = *piVar3;
        if (((-1 < (longlong)iVar11) && (iVar11 < *(int *)(lVar7 + 0x1c0))) &&
           ((longlong)iVar11 * 0x60 + *(longlong *)(lVar7 + 0x1b8) == *(longlong *)(piVar3 + 2))) {
          lVar9 = (longlong)(int)uStack_50;
          uVar6 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
          if (uStack_50._4_4_ < uVar6) {
            FUN_1446f48e2(&local_58,uVar12 & 0xffffffff);
          }
          *(int *)(local_58 + lVar9 * 4) = iVar11;
        }
        *piVar3 = -1;
        *(longlong **)(piVar3 + 2) = plVar14;
        plVar8 = &local_d8;
        for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
          *plVar14 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar14 = plVar14 + 1;
        }
        uVar12 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      }
      uVar4 = uStack_60;
      piVar3 = local_70;
      pcVar1 = *(char **)(lVar15 + 0x20);
      if (pcVar1 != (char *)0x0) {
        pcVar2 = *(char **)(local_70 + 2);
        pcVar10 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          pcVar10 = &DAT_14cc07bfc;
        }
        cVar5 = *pcVar10;
        iVar11 = *local_70;
        if (((-1 < (longlong)iVar11) && (iVar11 < *(int *)(lVar7 + 0x1e0))) &&
           ((char *)((longlong)iVar11 + *(longlong *)(lVar7 + 0x1d8)) == pcVar2)) {
          uVar12 = (ulonglong)(int)uStack_60;
          uVar6 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
          if (uStack_60._4_4_ < uVar6) {
            FUN_1446f48e2(&local_68,uVar4 & 0xffffffff);
          }
          *(int *)(local_68 + uVar12 * 4) = iVar11;
        }
        *piVar3 = -1;
        *(char **)(piVar3 + 2) = pcVar1;
        uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
        if (*pcVar1 != cVar5) {
          *pcVar1 = cVar5;
        }
      }
      lVar15 = lVar15 + 0x28;
      lVar16 = lVar16 + -0x28;
    } while (lVar16 != 0);
  }
  local_d8 = local_58;
  local_d0 = (int)uStack_50;
  FUN_1491f8b50(lVar7 + 0x1b8,&local_d8);
  local_d8 = local_68;
  local_d0 = (int)uStack_60;
  FUN_1491f8bfa(lVar7 + 0x1d8,&local_d8);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1491f849a:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffff01;
}



// FUNCTION 1491f874a FUN_1491f874a body=177 status=ok
// SIG undefined FUN_1491f874a(void)

undefined4
FUN_1491f874a(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58._0_4_ = *param_2;
  local_58._4_4_ = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = (undefined4 *)0x0;
  local_40 = 1;
  FUN_149210caa(&local_48);
  *local_48 = (undefined4)local_58;
  local_48[1] = local_58._4_4_;
  local_48[2] = uStack_50;
  local_48[3] = uStack_4c;
  local_48[4] = param_3;
  local_48[5] = param_4;
  local_58 = local_48;
  uStack_50 = local_40;
  uVar1 = FUN_1491f87fc(param_1,&local_58,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  if (local_48 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f87fc FUN_1491f87fc body=849 status=ok
// SIG undefined FUN_1491f87fc(void)

undefined8 FUN_1491f87fc(ulonglong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined7 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  byte local_102;
  char local_101;
  ulonglong local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  int *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined1 local_68 [16];
  undefined1 *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar4 = FUN_144729dda(param_1 + 0x18);
  if ((cVar4 == '\0') || (piVar7 = (int *)FUN_14479d2ce(param_1 + 0x18), piVar7 == (int *)0x0)) {
    bVar5 = 0;
    uVar11 = 0;
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    iVar1 = (int)param_2[1];
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    piVar8 = piVar7;
    local_100 = param_1;
    if (iVar1 != 0) {
      FUN_149210d42(&local_98);
      piVar8 = (int *)0x0;
      if ((longlong)(int)param_2[1] != 0) {
        lVar15 = *param_2;
        lVar16 = (longlong)(int)param_2[1] * 0x18;
        do {
          local_118 = *(undefined4 *)(lVar15 + 0x14);
          piVar8 = (int *)FUN_1491e06ae(piVar7,&local_f8,lVar15,*(undefined4 *)(lVar15 + 0x10));
          uVar3 = uStack_90;
          piVar2 = (int *)CONCAT44(uStack_f4,local_f8);
          if ((piVar2 != (int *)0x0) &&
             (piVar8 = (int *)CONCAT44(uStack_ec,uStack_f0), piVar8 != (int *)0x0)) {
            iVar1 = *piVar2;
            if (((longlong)iVar1 < 0) ||
               ((piVar7[0x70] <= iVar1 ||
                ((longlong)iVar1 * 0x60 + *(longlong *)(piVar7 + 0x6e) != *(longlong *)(piVar2 + 2))
                ))) {
              iVar1 = *piVar8;
              if (((longlong)iVar1 < 0) ||
                 ((piVar7[0x78] <= iVar1 ||
                  ((longlong)iVar1 + *(longlong *)(piVar7 + 0x76) != *(longlong *)(piVar8 + 2))))) {
                lVar12 = (longlong)(int)uStack_90;
                uVar6 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
                if (uStack_90._4_4_ < uVar6) {
                  FUN_149210d98(&local_98,uVar3 & 0xffffffff);
                }
                puVar14 = (uint *)(local_98 + lVar12 * 4);
                *puVar14 = local_f8;
                puVar14[1] = uStack_f4;
                puVar14[2] = uStack_f0;
                puVar14[3] = uStack_ec;
                piVar8 = local_98;
              }
            }
          }
          lVar15 = lVar15 + 0x18;
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
      }
    }
    bVar17 = (int)uStack_90 != 0;
    param_1 = (ulonglong)bVar17;
    if (bVar17) {
      local_102 = bVar17;
      local_101 = param_3;
      FUN_141906ab0(piVar7 + 0x6e,local_68);
      local_f8 = local_f8 & 0xffffff00;
      piVar8 = (int *)FUN_141906c0e(piVar7 + 0x76,local_88,uStack_90 & 0xffffffff);
      if (0 < (int)uStack_90) {
        lVar15 = 8;
        lVar16 = 0;
        do {
          piVar8 = *(int **)((longlong)local_98 + lVar15 + -8);
          piVar2 = *(int **)((longlong)local_98 + lVar15);
          puVar9 = (undefined8 *)FUN_144b3cbe6(piVar8);
          puVar14 = &local_f8;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *(undefined8 *)puVar14 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar14 + 2;
          }
          pcVar10 = *(char **)(piVar2 + 2);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = &DAT_14cc07bfc;
          }
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_68;
          }
          cVar4 = *pcVar10;
          iVar1 = *(int *)(puVar13 + lVar16 * 4);
          *piVar8 = iVar1;
          *(longlong *)(piVar8 + 2) = (longlong)iVar1 * 0x60 + *(longlong *)(piVar7 + 0x6e);
          puVar13 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar13 = local_88;
          }
          iVar1 = *(int *)(puVar13 + lVar16 * 4);
          *piVar2 = iVar1;
          pcVar10 = (char *)((longlong)iVar1 + *(longlong *)(piVar7 + 0x76));
          *(char **)(piVar2 + 2) = pcVar10;
          if (*(undefined8 **)(piVar8 + 2) != (undefined8 *)0x0) {
            puVar14 = &local_f8;
            puVar9 = *(undefined8 **)(piVar8 + 2);
            for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar9 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 2;
              puVar9 = puVar9 + 1;
            }
            pcVar10 = *(char **)(piVar2 + 2);
          }
          if ((pcVar10 != (char *)0x0) && (*pcVar10 != cVar4)) {
            *pcVar10 = cVar4;
          }
          lVar16 = lVar16 + 1;
          piVar8 = (int *)(longlong)(int)uStack_90;
          lVar15 = lVar15 + 0x10;
        } while (lVar16 < (longlong)piVar8);
      }
      uVar3 = local_100;
      if (local_101 != '\0') {
        FUN_1491f8ca4(local_100);
        piVar8 = (int *)FUN_1491f8cde(uVar3);
      }
      param_1 = (ulonglong)local_102;
      if (local_78 != (undefined1 *)0x0) {
        piVar8 = (int *)FUN_1400020a8();
      }
      if (local_58 != (undefined1 *)0x0) {
        piVar8 = (int *)FUN_1400020a8();
      }
    }
    if (local_98 != (int *)0x0) {
      piVar8 = (int *)FUN_1400020a8();
    }
    uVar11 = (undefined7)((ulonglong)piVar8 >> 8);
    bVar5 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar11,bVar5 & (byte)param_1);
}



// FUNCTION 1491f8b50 FUN_1491f8b50 body=168 status=ok
// SIG undefined FUN_1491f8b50(void)

void FUN_1491f8b50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  lVar3 = (longlong)*(int *)(param_2 + 1);
  if (lVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 1);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    plVar1 = (longlong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      FUN_14481578e(plVar1);
      lVar3 = (longlong)*(int *)(param_2 + 1);
      if (lVar3 == 0) {
        return;
      }
    }
    piVar8 = (int *)*param_2;
    piVar2 = piVar8 + lVar3;
    do {
      iVar5 = *piVar8;
      if (iVar5 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        lVar7 = (longlong)*(int *)(param_1 + 0x18);
        if (lVar7 != 0) {
          lVar6 = 0;
          do {
            if (*(int *)(lVar3 + lVar6) == iVar5) goto LAB_1491f8bdb;
            lVar6 = lVar6 + 4;
          } while (lVar7 * 4 - lVar6 != 0);
        }
        uVar4 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar4;
        if (*(uint *)(param_1 + 0x1c) < uVar4) {
          FUN_1446f48e2(plVar1);
          lVar3 = *plVar1;
        }
        *(int *)(lVar3 + lVar7 * 4) = iVar5;
      }
LAB_1491f8bdb:
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar2);
  }
  return;
}



// FUNCTION 1491f8bfa FUN_1491f8bfa body=168 status=ok
// SIG undefined FUN_1491f8bfa(void)

void FUN_1491f8bfa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  lVar3 = (longlong)*(int *)(param_2 + 1);
  if (lVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 1);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    plVar1 = (longlong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      FUN_14481578e(plVar1);
      lVar3 = (longlong)*(int *)(param_2 + 1);
      if (lVar3 == 0) {
        return;
      }
    }
    piVar8 = (int *)*param_2;
    piVar2 = piVar8 + lVar3;
    do {
      iVar5 = *piVar8;
      if (iVar5 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        lVar7 = (longlong)*(int *)(param_1 + 0x18);
        if (lVar7 != 0) {
          lVar6 = 0;
          do {
            if (*(int *)(lVar3 + lVar6) == iVar5) goto LAB_1491f8c85;
            lVar6 = lVar6 + 4;
          } while (lVar7 * 4 - lVar6 != 0);
        }
        uVar4 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar4;
        if (*(uint *)(param_1 + 0x1c) < uVar4) {
          FUN_1446f48e2(plVar1);
          lVar3 = *plVar1;
        }
        *(int *)(lVar3 + lVar7 * 4) = iVar5;
      }
LAB_1491f8c85:
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar2);
  }
  return;
}



// FUNCTION 1491f8ca4 FUN_1491f8ca4 body=57 status=ok
// SIG undefined FUN_1491f8ca4(void)

undefined8 FUN_1491f8ca4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x18);
  if ((cVar1 != '\0') && (lVar2 = FUN_14479d2ce(param_1 + 0x18), lVar2 != 0)) {
    FUN_140e4aa06(lVar2);
    return 1;
  }
  return 0;
}



// FUNCTION 1491f8cde FUN_1491f8cde body=61 status=ok
// SIG undefined FUN_1491f8cde(void)

undefined8 FUN_1491f8cde(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  param_1 = param_1 + 0x18;
  lVar3 = param_1;
  cVar1 = FUN_144729dda(param_1);
  bVar6 = (byte)lVar3;
  if (cVar1 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    bVar6 = (byte)param_1;
    if (lVar3 != 0) {
      uVar4 = FUN_140e4926c(lVar3);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar2 = 1;
      goto LAB_1491f8d13;
    }
  }
  bVar2 = 0;
  uVar5 = 0;
LAB_1491f8d13:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 1491f8d1c FUN_1491f8d1c body=61 status=ok
// SIG undefined FUN_1491f8d1c(void)

undefined8 FUN_1491f8d1c(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  param_1 = param_1 + 0x18;
  lVar3 = param_1;
  cVar1 = FUN_144729dda(param_1);
  bVar6 = (byte)lVar3;
  if (cVar1 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    bVar6 = (byte)param_1;
    if (lVar3 != 0) {
      uVar4 = FUN_1491e03ba(lVar3);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar2 = 1;
      goto LAB_1491f8d43;
    }
  }
  bVar2 = 0;
  uVar5 = 0;
LAB_1491f8d43:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 1491f8d5a FUN_1491f8d5a body=233 status=ok
// SIG undefined FUN_1491f8d5a(void)

longlong FUN_1491f8d5a(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [36];
  int local_54;
  undefined1 *local_50;
  int *local_48;
  undefined1 local_40 [4];
  undefined2 local_3c;
  undefined1 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = FUN_1491f8e44();
  if (iVar5 == -1) {
    uVar2 = *param_2;
    local_3a = param_2[3];
    local_3c = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined8 *)(param_2 + 4);
    iVar5 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
      FUN_149210e1e(param_1 + 8,iVar5);
    }
    lVar4 = *(longlong *)(param_1 + 8);
    lVar6 = (longlong)iVar5 * 0x20;
    *(undefined1 *)(lVar4 + lVar6) = uVar2;
    *(undefined2 *)(lVar4 + 1 + lVar6) = local_3c;
    *(undefined1 *)(lVar4 + 3 + lVar6) = local_3a;
    *(undefined8 *)(lVar4 + 4 + lVar6) = uVar3;
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    local_48 = &local_54;
    local_54 = iVar5;
    local_50 = param_2;
    FUN_140fe526c(param_1 + 0x18,local_40,&local_50,0);
    iVar5 = local_54;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f8e44 FUN_1491f8e44 body=191 status=ok
// SIG undefined FUN_1491f8e44(void)

undefined4 FUN_1491f8e44(longlong param_1,byte *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_2 + 4);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar3 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (uint)*param_2 +
                             ((int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar3) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4)) * 10) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18;
        if ((*(longlong *)(lVar5 + 4) == lVar1) &&
           (*(byte *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18) == *param_2)) {
          if ((undefined4 *)(lVar5 + 0xc) == (undefined4 *)0x0 || lVar5 == 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar5 + 0xc);
        }
        iVar4 = *(int *)(lVar5 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1491f8f04 FUN_1491f8f04 body=289 status=ok
// SIG undefined FUN_1491f8f04(void)

ulonglong FUN_1491f8f04(longlong *param_1,longlong *param_2,char param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8 [3];
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 == '\0') && (*param_2 != *param_1)) {
    uVar2 = 0;
  }
  else {
    FUN_14919eb96(local_a8,param_1);
    if ((longlong)(int)param_2[2] != 0) {
      pcVar3 = (char *)param_2[1];
      pcVar4 = pcVar3 + (longlong)(int)param_2[2] * 0x20;
      do {
        pcVar1 = (char *)FUN_1491f8d5a(local_a8,pcVar3);
        if ((*(longlong *)(pcVar3 + 4) != *(longlong *)(pcVar1 + 4)) || (*pcVar3 != *pcVar1)) {
          uVar2 = 0;
          goto LAB_1491f8fab;
        }
        if ((longlong)*(int *)(pcVar3 + 0x18) != 0) {
          lVar6 = *(longlong *)(pcVar3 + 0x10);
          lVar5 = (longlong)*(int *)(pcVar3 + 0x18) * 0xc;
          do {
            FUN_149197016(pcVar1 + 0x10,lVar6);
            lVar6 = lVar6 + 0xc;
            lVar5 = lVar5 + -0xc;
          } while (lVar5 != 0);
        }
        pcVar3 = pcVar3 + 0x20;
      } while (pcVar3 != pcVar4);
    }
    *param_1 = local_a8[0];
    FUN_149208320(param_1 + 1);
    FUN_1459a7e20(param_1 + 3,local_90);
    uVar2 = CONCAT71((int7)((ulonglong)(param_1 + 3) >> 8),1);
LAB_1491f8fab:
    FUN_14919ec32(local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1491f9026 FUN_1491f9026 body=273 status=ok
// SIG undefined FUN_1491f9026(void)

longlong FUN_1491f9026(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_d8 [36];
  int local_b4;
  undefined8 *local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = FUN_1491f9138();
  if (iVar1 == -1) {
    local_60 = 0;
    local_58 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_98 = *param_2;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_149210ea4(param_1,iVar1);
    }
    FUN_14919eb96((longlong)iVar1 * 0x68 + *param_1,&local_98);
    local_a8 = &local_b4;
    local_b4 = iVar1;
    local_b0 = param_2;
    FUN_140171856(param_1 + 2,local_9c,&local_b0,0);
    FUN_14919ec32(&local_98);
    iVar1 = local_b4;
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return (longlong)iVar1 * 0x68 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f9138 FUN_1491f9138 body=167 status=ok
// SIG undefined FUN_1491f9138(void)

undefined4 FUN_1491f9138(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          return (int)plVar1[1];
        }
        iVar6 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1491f91e8 FUN_1491f91e8 body=116 status=ok
// SIG undefined FUN_1491f91e8(void)

void FUN_1491f91e8(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_144a54ea2();
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x438) + 0x10))(param_1 + 0x438);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1491f925c(param_1);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x478))(plVar3);
      if (cVar1 != '\0') {
        FUN_14024c0da(lVar2,param_2,1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1491f925c FUN_1491f925c body=149 status=ok
// SIG undefined FUN_1491f925c(void)

longlong FUN_1491f925c(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar2 = FUN_144966fca(param_1[4]);
  if (cVar2 != '\0') {
    uVar3 = FUN_144966fba(param_1);
    thunk_FUN_14036294a(uVar3);
  }
  lVar4 = param_1[0x7c];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar4;
  }
  iVar1 = *(int *)(lVar4 + 0x8f0);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x8e8);
    lVar6 = 0;
    do {
      lVar5 = (**(code **)(**(longlong **)(lVar4 + lVar6) + 0x108))();
      if (lVar5 != 0) {
        return lVar5;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  return 0;
}



// FUNCTION 1491f92f2 FUN_1491f92f2 body=134 status=ok
// SIG undefined FUN_1491f92f2(void)

void FUN_1491f92f2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + -0x438;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(lVar4);
      thunk_FUN_14036294a(uVar2);
    }
    lVar3 = *(longlong *)(param_1 + -0x58);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar4);
      *(longlong *)(param_1 + -0x58) = lVar3;
    }
  }
  FUN_1491f9378(lVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1491f9378 FUN_1491f9378 body=131 status=ok
// SIG undefined FUN_1491f9378(void)

void FUN_1491f9378(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x948) != 0) {
    uVar3 = FUN_140732592();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x948),uVar3);
    lVar1 = *(longlong *)(param_1 + 0x948);
    if ((lVar1 != 0 & bVar2) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001491f93eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x438) + 0x30))(lVar1 + 0x438,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1491f93fc FUN_1491f93fc body=134 status=ok
// SIG undefined FUN_1491f93fc(void)

void FUN_1491f93fc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + -0x438;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(lVar4);
      thunk_FUN_14036294a(uVar2);
    }
    lVar3 = *(longlong *)(param_1 + -0x58);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar4);
      *(longlong *)(param_1 + -0x58) = lVar3;
    }
  }
  FUN_1491f9482(lVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1491f9482 FUN_1491f9482 body=131 status=ok
// SIG undefined FUN_1491f9482(void)

void FUN_1491f9482(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x948) != 0) {
    uVar3 = FUN_140732592();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x948),uVar3);
    lVar1 = *(longlong *)(param_1 + 0x948);
    if ((lVar1 != 0 & bVar2) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001491f94f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x438) + 0x28))(lVar1 + 0x438,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1491f9506 FUN_1491f9506 body=105 status=ok
// SIG undefined FUN_1491f9506(void)

void FUN_1491f9506(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = param_1 + -0x438;
  if (lVar4 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(lVar4);
      thunk_FUN_14036294a(uVar2);
    }
    plVar3 = *(longlong **)(param_1 + -0x58);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar4);
      *(longlong **)(param_1 + -0x58) = plVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001491f9568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xd8))();
  return;
}



// FUNCTION 1491f9570 FUN_1491f9570 body=105 status=ok
// SIG undefined FUN_1491f9570(void)

void FUN_1491f9570(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = param_1 + -0x438;
  if (lVar4 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(lVar4);
      thunk_FUN_14036294a(uVar2);
    }
    plVar3 = *(longlong **)(param_1 + -0x58);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar4);
      *(longlong **)(param_1 + -0x58) = plVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001491f95d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 200))();
  return;
}



// FUNCTION 1491f95da FUN_1491f95da body=105 status=ok
// SIG undefined FUN_1491f95da(void)

void FUN_1491f95da(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = param_1 + -0x438;
  if (lVar4 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(lVar4);
      thunk_FUN_14036294a(uVar2);
    }
    plVar3 = *(longlong **)(param_1 + -0x58);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar4);
      *(longlong **)(param_1 + -0x58) = plVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001491f963c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xd0))();
  return;
}



// FUNCTION 1491f9644 FUN_1491f9644 body=498 status=ok
// SIG undefined FUN_1491f9644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491f9644(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1 + -0x438;
  lVar2 = FUN_144a49ec8(lVar3);
  FUN_144a7a45a(lVar2);
  if (param_2 != (longlong *)0x0) {
    if (lVar2 != 0) {
      local_30 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_149208f62(lVar2 + 0xb78,&local_30);
    }
    if (lVar3 != 0) {
      cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
      if (cVar1 != '\0') {
        uVar4 = FUN_144966fba(lVar3);
        thunk_FUN_14036294a(uVar4);
      }
      if (*(longlong *)(param_1 + -0x58) == 0) {
        uVar4 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar3);
        *(undefined8 *)(param_1 + -0x58) = uVar4;
      }
    }
    cVar1 = FUN_144966fca(param_2[4]);
    if (cVar1 != '\0') {
      uVar4 = FUN_144966fba(param_2);
      thunk_FUN_14036294a(uVar4);
    }
    if (param_2[0x7c] == 0) {
      lVar3 = (**(code **)(*param_2 + 0x350))(param_2);
      param_2[0x7c] = lVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if (lVar3 == 0) {
    FUN_1491f98b4(lVar2,_DAT_00000948);
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar4 = FUN_144966fba(lVar3);
      thunk_FUN_14036294a(uVar4);
    }
    lVar5 = *(longlong *)(param_1 + -0x58);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar3);
      *(longlong *)(param_1 + -0x58) = lVar5;
    }
    FUN_1491f98b4(lVar2,*(undefined8 *)(lVar5 + 0x948));
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar4 = FUN_144966fba(lVar3);
      thunk_FUN_14036294a(uVar4);
    }
    lVar2 = *(longlong *)(param_1 + -0x58);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar3);
      *(longlong *)(param_1 + -0x58) = lVar2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  FUN_1491f9840(lVar2,0,0);
  return;
}



// FUNCTION 1491f9840 FUN_1491f9840 body=116 status=ok
// SIG undefined FUN_1491f9840(void)

void FUN_1491f9840(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x948) = param_2;
  *(undefined8 *)(param_1 + 0x8d0) = 0;
  *(undefined8 *)(param_1 + 0x8d8) = 0;
  FUN_1433dc002(param_1 + 0x8c0,0);
  if (*(longlong *)(param_1 + 0x948) == 0) {
    return;
  }
  FUN_1491fa8c4(param_1 + 0x8a8,*(longlong *)(param_1 + 0x948),param_3);
  return;
}



// FUNCTION 1491f98b4 FUN_1491f98b4 body=119 status=ok
// SIG undefined FUN_1491f98b4(void)

void FUN_1491f98b4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && param_1 != 0) {
    local_20 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_18 = &local_20;
    FUN_14791b116(param_1 + 0xb78);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f992c FUN_1491f992c body=146 status=ok
// SIG undefined FUN_1491f992c(void)

void FUN_1491f992c(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_3 + 0x478))(param_3);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(param_1[0x87] + 0x10))(param_1 + 0x87);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x31) = *(byte *)(lVar2 + 0x31) & 0xfe;
    }
  }
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      uVar3 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar3);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  FUN_1491f99be(lVar2,param_2,param_3);
  return;
}



// FUNCTION 1491f99be FUN_1491f99be body=577 status=ok
// SIG undefined FUN_1491f99be(void)

void FUN_1491f99be(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = param_2;
  plVar5 = (longlong *)FUN_1491fa858();
  if (plVar5 == (longlong *)0x0) {
    uVar6 = FUN_145b9f06c();
    lVar7 = FUN_144a78ede(param_3,uVar6);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x210) == -1)) {
      FUN_1491fa04a(param_1);
      iVar11 = 100;
      if (0 < (int)param_1[0x11e]) {
        lVar13 = 0;
        lVar12 = 0;
        do {
          plVar5 = *(longlong **)(param_1[0x11d] + lVar13);
          if ((plVar5 != (longlong *)0x0) &&
             (lVar8 = (**(code **)(*plVar5 + 0x108))(plVar5), lVar8 != 0)) {
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x108))(plVar5);
            cVar3 = (**(code **)(*plVar5 + 0x478))(plVar5);
            cVar4 = (**(code **)(*param_3 + 0x478))(param_3);
            if (cVar3 == cVar4) {
              uVar6 = (**(code **)(**(longlong **)param_1[0x11d] + 0x108))();
              uVar9 = FUN_145b9f06c();
              lVar8 = FUN_144a78ede(uVar6,uVar9);
              if (lVar8 == 0) {
                iVar11 = 100 - (int)param_1[0x11e];
              }
              else {
                iVar11 = *(int *)(lVar8 + 0x210) + -1;
              }
            }
          }
          lVar12 = lVar12 + 1;
          lVar13 = lVar13 + 0x10;
        } while (lVar12 < (int)param_1[0x11e]);
      }
      FUN_149218cea(lVar7,iVar11);
    }
    plVar10 = (longlong *)FUN_14001cc68(0x278,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14bb905c0;
    plVar5 = plVar10 + 2;
    FUN_14919980c(plVar5);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    iVar11 = (int)param_1[0x11e];
    *(uint *)(param_1 + 0x11e) = iVar11 + 1U;
    if (*(uint *)((longlong)param_1 + 0x8f4) < iVar11 + 1U) {
      FUN_149210ff0(param_1 + 0x11d,iVar11);
    }
    lVar7 = param_1[0x11d];
    *(longlong **)(lVar7 + (longlong)iVar11 * 0x10) = plVar5;
    *(longlong **)(lVar7 + 8 + (longlong)iVar11 * 0x10) = plVar10;
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
    FUN_1491fa04a(param_1);
    (**(code **)(*param_1 + 0xd8))(param_1);
    plVar10 = (longlong *)FUN_149211076(param_1 + 0x11f,local_44);
    *plVar10 = (longlong)plVar5;
  }
  FUN_14919983e(plVar5,param_3);
  (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,param_1[0x26]);
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f9c00 FUN_1491f9c00 body=103 status=ok
// SIG undefined FUN_1491f9c00(void)

bool FUN_1491f9c00(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      uVar3 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar3);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  lVar2 = FUN_1491fa858(lVar2,param_2);
  return lVar2 != 0;
}



// FUNCTION 1491f9c68 FUN_1491f9c68 body=166 status=ok
// SIG undefined FUN_1491f9c68(void)

void FUN_1491f9c68(longlong *param_1,undefined4 param_2,float param_3,undefined2 *param_4,
                  undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      uVar3 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar3);
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  lVar2 = FUN_1491fa858(lVar2,param_2);
  if (lVar2 != 0) {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    *(float *)(lVar2 + 0x23c) = param_3;
    *(undefined2 *)(lVar2 + 0x100) = *param_4;
    *(undefined1 *)(lVar2 + 0x238) = param_5;
  }
  return;
}



// FUNCTION 1491f9d0e FUN_1491f9d0e body=168 status=ok
// SIG undefined FUN_1491f9d0e(void)

void FUN_1491f9d0e(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      uVar4 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar4);
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  FUN_1491f9db6(lVar3,param_2);
  lVar3 = (**(code **)(param_1[0x87] + 0x10))(param_1 + 0x87);
  if (lVar3 != 0) {
    plVar5 = (longlong *)FUN_1491f925c(param_1);
    if (plVar5 == (longlong *)0x0) {
      *(byte *)(lVar3 + 0x31) = *(byte *)(lVar3 + 0x31) | 1;
    }
    else {
      bVar2 = (**(code **)(*plVar5 + 0x478))(plVar5);
      *(byte *)(lVar3 + 0x31) = *(byte *)(lVar3 + 0x31) & 0xfe | bVar2 ^ 1;
    }
  }
  return;
}



// FUNCTION 1491f9db6 FUN_1491f9db6 body=244 status=ok
// SIG undefined FUN_1491f9db6(void)

void FUN_1491f9db6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar3 = FUN_1491fa858();
  if (lVar3 == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x8e8);
  iVar4 = *(int *)(param_1 + 0x8f0);
  if ((longlong)iVar4 < 1) goto LAB_1491f9e12;
  lVar6 = *(longlong *)*plVar1;
  uVar9 = 0;
  if (lVar6 != lVar3) {
    plVar5 = (longlong *)*plVar1 + 2;
    lVar2 = lVar6;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      lVar7 = lVar2;
      if ((longlong)iVar4 - 1U == uVar8) goto LAB_1491f9e25;
      lVar2 = *plVar5;
      plVar5 = plVar5 + 2;
      uVar9 = uVar8 + 1;
    } while (lVar2 != lVar3);
    if ((int)uVar8 + 2 < iVar4) {
      if (lVar7 != 0) {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_1491f9e95;
LAB_1491f9ea0:
        FUN_1433dc002(lVar7 + 0x60,lVar3);
      }
    }
    else if (lVar7 != 0) {
LAB_1491f9e95:
      lVar3 = param_1 + 0x8a8;
      goto LAB_1491f9ea0;
    }
  }
  FUN_1492115bc(plVar1,uVar9 & 0xffffffff);
  FUN_149211632(plVar1);
  iVar4 = *(int *)(param_1 + 0x8f0);
LAB_1491f9e12:
  if (iVar4 == 0) {
    lVar6 = param_1 + 0x8a8;
  }
  else {
    lVar6 = *(longlong *)*plVar1;
  }
LAB_1491f9e25:
  *(longlong *)(param_1 + 0x8e0) = lVar6;
  FUN_1492116ce(param_1 + 0x8f8,param_2);
  return;
}



// FUNCTION 1491f9eaa FUN_1491f9eaa body=103 status=ok
// SIG undefined FUN_1491f9eaa(void)

void FUN_1491f9eaa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + -0x438);
  lVar1 = FUN_144966fba(plVar3);
  if (lVar1 != 0) {
    lVar2 = FUN_144a81888(lVar1);
    if ((lVar2 != 0) && (0 < *(int *)(lVar1 + 0x6d8 + (longlong)*(int *)(lVar1 + 0x718) * 0x10))) {
                    /* WARNING: Could not recover jumptable at 0x0001491f9f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2a8))(plVar3,DAT_14cc080a8);
      return;
    }
  }
  return;
}



// FUNCTION 1491f9f12 FUN_1491f9f12 body=100 status=ok
// SIG undefined FUN_1491f9f12(void)

undefined8 FUN_1491f9f12(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + -0x438;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_144966fca(*(undefined8 *)(param_1 + -0x418));
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(lVar4);
      thunk_FUN_14036294a(uVar2);
    }
    lVar3 = *(longlong *)(param_1 + -0x58);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(lVar4);
      *(longlong *)(param_1 + -0x58) = lVar3;
    }
  }
  return *(undefined8 *)(lVar3 + 0x948);
}



// FUNCTION 1491f9f76 FUN_1491f9f76 body=60 status=ok
// SIG undefined FUN_1491f9f76(void)

void FUN_1491f9f76(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xd8))();
  FUN_14005d520(param_1,param_2);
  *(undefined4 *)(param_1 + 0xbd) = 0xffff;
  param_1[0xbc] = -1;
  return;
}



// FUNCTION 1491f9fb2 FUN_1491f9fb2 body=108 status=ok
// SIG undefined FUN_1491f9fb2(void)

void FUN_1491f9fb2(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x7e1) & 1) != 0) {
    local_28 = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_30 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x18))();
    *(byte *)(param_1 + 0x7e1) = *(byte *)(param_1 + 0x7e1) & 0xfe;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fa020 FUN_1491fa020 body=42 status=ok
// SIG undefined FUN_1491fa020(void)

void FUN_1491fa020(longlong param_1)

{
  FUN_144b1ff56();
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FUN_144926950();
    return;
  }
  return;
}



// FUNCTION 1491fa04a FUN_1491fa04a body=1612 status=ok
// SIG undefined FUN_1491fa04a(void)

void FUN_1491fa04a(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_3b8 [32];
  longlong **local_398;
  longlong local_390;
  longlong *local_388;
  longlong *local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong *local_348;
  undefined8 local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined8 uStack_328;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_378 = 0;
  uStack_370 = 0;
  if (0 < (int)param_1[0x11e]) {
    plVar20 = param_1 + 0x11f;
    plVar12 = param_1 + 0x121;
    lVar17 = 0;
    local_388 = param_1;
    do {
      plVar15 = *(longlong **)(param_1[0x11d] + lVar17 * 0x10);
      if ((plVar15 != (longlong *)0x0) &&
         (lVar8 = (**(code **)(*plVar15 + 0x108))(plVar15), lVar8 == 0)) {
        local_368 = (longlong *)&DAT_100000000;
        local_358 = 0xffffffff;
        uStack_350 = 0;
        uStack_360 = plVar12;
        if ((int)param_1[0x124] == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_368);
          iVar9 = (int)param_1[0x124];
        }
        uStack_328 = CONCAT44(uStack_34c,uStack_350);
        local_330 = local_358;
        uVar5 = local_330;
        local_340 = local_368;
        uStack_338 = (undefined4)uStack_360;
        uStack_334 = uStack_360._4_4_;
        local_330._4_4_ = (int)((ulonglong)local_358 >> 0x20);
        iVar7 = local_330._4_4_;
        local_390 = lVar17;
        local_348 = plVar20;
        if ((local_330._4_4_ != iVar9) ||
           (param_1 = local_388, local_330 = uVar5, uStack_360 != plVar12)) {
          do {
            local_330 = uVar5;
            uVar16 = uStack_370;
            lVar17 = *local_348;
            if (*(longlong **)(lVar17 + 8 + (longlong)iVar7 * 0x18) == plVar15) {
              lVar8 = (longlong)(int)uStack_370;
              uVar23 = (int)uStack_370 + 1;
              uStack_370 = CONCAT44(uStack_370._4_4_,uVar23);
              if (uStack_370._4_4_ < uVar23) {
                FUN_1446f48e2(&local_378,uVar16 & 0xffffffff);
              }
              *(undefined4 *)(local_378 + lVar8 * 4) =
                   *(undefined4 *)(lVar17 + (longlong)iVar7 * 0x18);
            }
            local_330 = CONCAT44(local_330._4_4_,(uint)local_330 & ~local_340._4_4_);
            FUN_1449c0562(&local_340);
            lVar17 = local_390;
            param_1 = local_388;
            iVar7 = local_330._4_4_;
            uVar5 = local_330;
          } while (local_348 != plVar20 ||
                   ((longlong *)CONCAT44(uStack_334,uStack_338) != plVar12 ||
                   local_330._4_4_ != iVar9));
        }
      }
      lVar17 = lVar17 + 1;
      uVar23 = *(uint *)(param_1 + 0x11e);
    } while (lVar17 < (int)uVar23);
    lVar17 = (longlong)(int)uStack_370;
    if (lVar17 != 0) {
      lVar8 = 0;
      do {
        FUN_1491f9db6(param_1);
        lVar8 = lVar8 + 4;
      } while (lVar17 * 4 != lVar8);
      uVar23 = *(uint *)(param_1 + 0x11e);
    }
    if (1 < (int)uVar23) {
      plVar20 = (longlong *)param_1[0x11d];
      memset(&uStack_338,0,0x2f0);
      local_340 = plVar20 + (ulonglong)uVar23 * 2 + -2;
      local_348 = plVar20;
      fVar25 = logf((float)(int)uVar23);
      uStack_338 = (int)(longlong)(fVar25 + fVar25);
      pplVar11 = &local_348;
      do {
        plVar12 = *pplVar11;
        plVar15 = pplVar11[1];
        iVar9 = *(int *)(pplVar11 + 2);
        iVar7 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar12) >> 4);
        uVar23 = iVar7 + 1;
        plVar19 = plVar12;
        plVar20 = plVar15;
        local_398 = pplVar11;
        if (iVar9 != 0) {
LAB_1491fa2c1:
          if (8 < (int)uVar23) {
            local_390 = CONCAT44(local_390._4_4_,iVar9);
            lVar17 = plVar12[(ulonglong)(uVar23 >> 1) * 2];
            lVar8 = (plVar12 + (ulonglong)(uVar23 >> 1) * 2)[1];
            lVar2 = plVar12[1];
            plVar12[(ulonglong)(uVar23 >> 1) * 2] = *plVar12;
            (plVar12 + (ulonglong)(uVar23 >> 1) * 2)[1] = lVar2;
            local_368._0_4_ = (undefined4)lVar17;
            local_368._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
            uStack_360._0_4_ = (undefined4)lVar8;
            uStack_360._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
            *(undefined4 *)plVar12 = (undefined4)local_368;
            *(undefined4 *)((longlong)plVar12 + 4) = local_368._4_4_;
            *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_360;
            *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_360._4_4_;
            plVar22 = plVar20 + 2;
            plVar18 = plVar12;
            local_380 = plVar19;
            local_368 = (longlong *)lVar17;
            uStack_360 = (longlong *)lVar8;
            do {
              plVar4 = plVar18 + 2;
              plVar21 = plVar18 + 2;
              do {
                plVar18 = plVar21;
                plVar19 = plVar4;
                if (plVar20 < plVar18) break;
                cVar6 = FUN_1444ab86c(plVar12,plVar18);
                plVar4 = plVar19 + 2;
                plVar21 = plVar18 + 2;
              } while (cVar6 == '\0');
              plVar4 = plVar22 + -4;
              do {
                plVar21 = plVar22;
                plVar10 = plVar4;
                plVar22 = plVar21 + -2;
                if (plVar22 <= plVar12) break;
                cVar6 = FUN_1444ab86c(plVar22,plVar12);
                plVar4 = plVar10 + -2;
              } while (cVar6 == '\0');
              if (plVar22 < plVar18) goto LAB_1491fa375;
              lVar17 = *plVar18;
              lVar8 = plVar18[1];
              lVar2 = plVar21[-1];
              *plVar18 = *plVar22;
              plVar18[1] = lVar2;
              local_368._0_4_ = (undefined4)lVar17;
              local_368._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
              uStack_360._0_4_ = (undefined4)lVar8;
              uStack_360._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
              *(undefined4 *)plVar22 = (undefined4)local_368;
              *(undefined4 *)((longlong)plVar21 + -0xc) = local_368._4_4_;
              *(undefined4 *)(plVar21 + -1) = (undefined4)uStack_360;
              *(undefined4 *)((longlong)plVar21 + -4) = uStack_360._4_4_;
              local_368 = (longlong *)lVar17;
              uStack_360 = (longlong *)lVar8;
            } while( true );
          }
          for (; pplVar11 = local_398, plVar19 = plVar12, plVar15 = plVar12, plVar12 < plVar20;
              plVar20 = plVar20 + -2) {
            while (plVar22 = plVar19, plVar15 = plVar15 + 2, plVar15 <= plVar20) {
              cVar6 = FUN_1444ab86c(plVar22,plVar15);
              plVar19 = plVar15;
              if (cVar6 == '\0') {
                plVar19 = plVar22;
              }
            }
            plVar15 = (longlong *)*plVar22;
            plVar19 = (longlong *)plVar22[1];
            lVar17 = plVar20[1];
            *plVar22 = *plVar20;
            plVar22[1] = lVar17;
            local_368._0_4_ = SUB84(plVar15,0);
            local_368._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
            uStack_360._0_4_ = SUB84(plVar19,0);
            uStack_360._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
            *(undefined4 *)plVar20 = (undefined4)local_368;
            *(undefined4 *)((longlong)plVar20 + 4) = local_368._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_360;
            *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_360._4_4_;
            local_368 = plVar15;
            uStack_360 = plVar19;
          }
          goto LAB_1491fa637;
        }
LAB_1491fa438:
        pplVar11 = local_398;
        if (uVar23 != 0) {
          iVar9 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
          iVar7 = iVar9;
joined_r0x0001491fa459:
          do {
            iVar14 = iVar9 * 2 + 1;
            if (iVar14 < (int)uVar23) {
              iVar13 = iVar9 * 2 + 2;
              if ((iVar13 < (int)uVar23) &&
                 (cVar6 = FUN_1444ab86c(plVar12 + (longlong)iVar13 * 2,
                                        plVar12 + (longlong)iVar14 * 2), cVar6 == '\0')) {
                iVar14 = iVar13;
              }
              plVar20 = plVar12 + (longlong)iVar9 * 2;
              plVar15 = plVar12 + (longlong)iVar14 * 2;
              cVar6 = FUN_1444ab86c(plVar20,plVar15);
              if (cVar6 != '\0') {
                plVar19 = (longlong *)*plVar20;
                plVar22 = (longlong *)plVar20[1];
                lVar17 = plVar15[1];
                *plVar20 = *plVar15;
                plVar20[1] = lVar17;
                local_368._0_4_ = SUB84(plVar19,0);
                local_368._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
                uStack_360._0_4_ = SUB84(plVar22,0);
                uStack_360._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
                *(undefined4 *)plVar15 = (undefined4)local_368;
                *(undefined4 *)((longlong)plVar15 + 4) = local_368._4_4_;
                *(undefined4 *)(plVar15 + 1) = (undefined4)uStack_360;
                *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_360._4_4_;
                iVar9 = iVar14;
                local_368 = plVar19;
                uStack_360 = plVar22;
                goto joined_r0x0001491fa459;
              }
            }
            bVar24 = iVar7 != 0;
            iVar9 = iVar7 + -1;
            iVar7 = iVar9;
          } while (bVar24);
          pplVar11 = local_398;
          if (1 < (int)uVar23) {
            uVar16 = (ulonglong)uVar23 - 1;
            plVar15 = (longlong *)*plVar12;
            plVar19 = (longlong *)plVar12[1];
            lVar17 = (plVar12 + uVar16 * 2)[1];
            *plVar12 = plVar12[uVar16 * 2];
            plVar12[1] = lVar17;
            local_368._0_4_ = SUB84(plVar15,0);
            local_368._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
            uStack_360._0_4_ = SUB84(plVar19,0);
            uStack_360._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
            plVar20 = plVar12 + uVar16 * 2;
            *(undefined4 *)plVar20 = (undefined4)local_368;
            *(undefined4 *)((longlong)plVar20 + 4) = local_368._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_360;
            *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_360._4_4_;
            local_368 = plVar15;
            uStack_360 = plVar19;
            if (uVar23 != 2) {
              do {
                iVar9 = 0;
                iVar14 = 1;
                iVar7 = 0;
                do {
                  iVar9 = iVar9 + 2;
                  iVar13 = iVar14;
                  if (((longlong)iVar9 < (longlong)uVar16) &&
                     (cVar6 = FUN_1444ab86c(plVar12 + (longlong)iVar9 * 2,
                                            plVar12 + (longlong)iVar14 * 2), cVar6 == '\0')) {
                    iVar13 = iVar9;
                  }
                  plVar20 = plVar12 + (longlong)iVar7 * 2;
                  plVar15 = plVar12 + (longlong)iVar13 * 2;
                  cVar6 = FUN_1444ab86c(plVar20,plVar15);
                  if (cVar6 == '\0') break;
                  plVar19 = (longlong *)*plVar20;
                  plVar22 = (longlong *)plVar20[1];
                  lVar17 = plVar15[1];
                  *plVar20 = *plVar15;
                  plVar20[1] = lVar17;
                  local_368._0_4_ = SUB84(plVar19,0);
                  local_368._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
                  uStack_360._0_4_ = SUB84(plVar22,0);
                  uStack_360._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
                  *(undefined4 *)plVar15 = (undefined4)local_368;
                  *(undefined4 *)((longlong)plVar15 + 4) = local_368._4_4_;
                  *(undefined4 *)(plVar15 + 1) = (undefined4)uStack_360;
                  *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_360._4_4_;
                  iVar9 = iVar13 * 2;
                  iVar14 = iVar13 * 2 + 1;
                  local_368 = plVar19;
                  uStack_360 = plVar22;
                  iVar7 = iVar13;
                } while ((longlong)iVar14 < (longlong)uVar16);
                uVar1 = uVar16 - 1;
                plVar15 = (longlong *)*plVar12;
                plVar19 = (longlong *)plVar12[1];
                lVar17 = (plVar12 + uVar1 * 2)[1];
                *plVar12 = plVar12[uVar1 * 2];
                plVar12[1] = lVar17;
                local_368._0_4_ = SUB84(plVar15,0);
                local_368._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
                uStack_360._0_4_ = SUB84(plVar19,0);
                uStack_360._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
                plVar20 = plVar12 + uVar1 * 2;
                *(undefined4 *)plVar20 = (undefined4)local_368;
                *(undefined4 *)((longlong)plVar20 + 4) = local_368._4_4_;
                *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_360;
                *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_360._4_4_;
                bVar24 = 2 < uVar16;
                pplVar11 = local_398;
                uVar16 = uVar1;
                local_368 = plVar15;
                uStack_360 = plVar19;
              } while (bVar24);
            }
          }
        }
LAB_1491fa637:
        pplVar11 = pplVar11 + -3;
        param_1 = local_388;
      } while (&local_348 <= pplVar11);
    }
  }
  (**(code **)(*param_1 + 0xd8))(param_1);
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1491fa375:
  plVar4 = (longlong *)*plVar12;
  plVar3 = (longlong *)plVar12[1];
  lVar17 = plVar21[-1];
  *plVar12 = *plVar22;
  plVar12[1] = lVar17;
  local_368._0_4_ = SUB84(plVar4,0);
  local_368._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  uStack_360._0_4_ = SUB84(plVar3,0);
  uStack_360._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  *(undefined4 *)plVar22 = (undefined4)local_368;
  *(undefined4 *)((longlong)plVar21 + -0xc) = local_368._4_4_;
  *(undefined4 *)(plVar21 + -1) = (undefined4)uStack_360;
  *(undefined4 *)((longlong)plVar21 + -4) = uStack_360._4_4_;
  iVar9 = (int)local_390 + -1;
  plVar21 = plVar21 + -4;
  local_368 = plVar4;
  uStack_360 = plVar3;
  if ((longlong)plVar10 - (longlong)local_380 < (longlong)plVar15 - (longlong)plVar19) {
    pplVar11 = local_398;
    if (plVar18 < plVar20) {
      *local_398 = plVar18;
      local_398[1] = plVar20;
      *(int *)(local_398 + 2) = iVar9;
      pplVar11 = local_398 + 3;
    }
    plVar15 = plVar10;
    plVar19 = plVar12;
    if (plVar22 <= plVar12 + 2) goto LAB_1491fa637;
  }
  else {
    if (plVar12 + 2 < plVar22) {
      *local_398 = plVar12;
      local_398[1] = plVar21;
      *(int *)(local_398 + 2) = iVar9;
      local_398 = local_398 + 3;
    }
    pplVar11 = local_398;
    plVar12 = plVar18;
    plVar15 = plVar20;
    plVar21 = plVar20;
    if (plVar20 <= plVar18) goto LAB_1491fa637;
  }
  local_398 = pplVar11;
  iVar7 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar19) >> 4);
  uVar23 = iVar7 + 1;
  plVar20 = plVar21;
  if (iVar9 == 0) goto LAB_1491fa438;
  goto LAB_1491fa2c1;
}



// FUNCTION 1491fa698 FUN_1491fa698 body=42 status=ok
// SIG undefined FUN_1491fa698(void)

undefined8 FUN_1491fa698(longlong param_1,undefined8 param_2)

{
  FUN_1491fa04a();
  (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x28))(*(longlong **)(param_1 + 0x8e0),param_2);
  return 1;
}



// FUNCTION 1491fa704 FUN_1491fa704 body=160 status=ok
// SIG undefined FUN_1491fa704(void)

void FUN_1491fa704(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x8f0) < 1) {
    *(longlong *)(param_1 + 0x8e0) = param_1 + 0x8a8;
    return;
  }
  lVar3 = **(longlong **)(param_1 + 0x8e8);
  *(longlong *)(param_1 + 0x8e0) = lVar3;
  if (*(int *)(param_1 + 0x8f0) != 1) {
    lVar2 = 1;
    lVar4 = 0x10;
    lVar1 = lVar3;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8e8) + lVar4);
      FUN_1433dc002(lVar1 + 0x60,lVar3);
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x10;
      lVar1 = lVar3;
    } while (lVar2 < *(int *)(param_1 + 0x8f0));
  }
  FUN_1433dc002(lVar3 + 0x60,param_1 + 0x8a8);
  return;
}



// FUNCTION 1491fa7a4 FUN_1491fa7a4 body=90 status=ok
// SIG undefined FUN_1491fa7a4(void)

void FUN_1491fa7a4(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x948) != 0) {
    uVar3 = FUN_140732592();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x948),uVar3);
    lVar1 = *(longlong *)(param_1 + 0x948);
    if ((lVar1 != 0 & bVar2) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001491fa7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x438) + 0x48))(lVar1 + 0x438);
      return;
    }
  }
  return;
}



// FUNCTION 1491fa7fe FUN_1491fa7fe body=90 status=ok
// SIG undefined FUN_1491fa7fe(void)

void FUN_1491fa7fe(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x948) != 0) {
    uVar3 = FUN_140732592();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x948),uVar3);
    lVar1 = *(longlong *)(param_1 + 0x948);
    if ((lVar1 != 0 & bVar2) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001491fa84d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x438) + 0x40))(lVar1 + 0x438);
      return;
    }
  }
  return;
}



// FUNCTION 1491fa858 FUN_1491fa858 body=108 status=ok
// SIG undefined FUN_1491fa858(void)

undefined8 FUN_1491fa858(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x900) != *(int *)(param_1 + 0x92c)) {
    lVar2 = param_1 + 0x930;
    if (*(longlong *)(param_1 + 0x938) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x938);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x940) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x8f8) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 != (uint *)0x0) {
            return *(undefined8 *)(puVar1 + 2);
          }
          return 0;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1491fa8c4 FUN_1491fa8c4 body=80 status=ok
// SIG undefined FUN_1491fa8c4(void)

void FUN_1491fa8c4(longlong param_1,undefined8 param_2,longlong param_3)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1433dc002(param_1 + 0x18,0);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(longlong *)(param_1 + 0x28) = param_3;
  FUN_1433dc002(param_1 + 0x18,*(undefined8 *)(param_3 + 0x170));
  FUN_147903226(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1491fa914 FUN_1491fa914 body=135 status=ok
// SIG undefined FUN_1491fa914(void)

void FUN_1491fa914(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_38[1] = 0;
    local_28 = 1;
    local_24 = 0xffffffffffffffff;
    local_38[0] = *(longlong *)(param_1 + 0x28);
    lVar1 = FUN_1433dc006(param_1 + 0x18);
    if (lVar1 == 0) {
      FUN_147903184(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    else {
      FUN_140320438(param_1 + 0x18,local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fa99c FUN_1491fa99c body=131 status=ok
// SIG undefined FUN_1491fa99c(void)

void FUN_1491fa99c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  undefined8 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_38[1] = 0;
    local_28 = 1;
    local_24 = 0xffffffffffffffff;
    local_38[0] = *(longlong *)(param_1 + 0x28);
    lVar1 = FUN_1433dc006(param_1 + 0x18);
    if (lVar1 == 0) {
      FUN_1479031bc(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      FUN_1408112ba(param_1 + 0x18,local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491faa20 FUN_1491faa20 body=241 status=ok
// SIG undefined FUN_1491faa20(void)

void FUN_1491faa20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_48 = *(undefined8 *)(param_2 + 8);
    local_40 = 1;
    local_30 = *(undefined4 *)(param_2 + 0x20);
    local_2c = *(undefined4 *)(param_2 + 0x24);
    local_28 = *(undefined4 *)(param_2 + 0x28);
    local_3c = *(undefined4 *)(param_2 + 0x14);
    local_38 = *(undefined4 *)(param_2 + 0x18);
    local_50 = *(longlong *)(param_1 + 0x28);
    lVar2 = FUN_1433dc006(param_1 + 0x18);
    plVar1 = *(longlong **)(param_1 + 0x28);
    if (lVar2 == 0) {
      if (plVar1[0x2e] == 0) {
        FUN_1479031ca(plVar1,&local_50);
      }
      else {
        (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
      }
    }
    else {
      FUN_1446f470e(&local_58,L"AnimGraph",1);
      FUN_1433d8096(plVar1,&local_50,lVar2,local_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fab12 FUN_1491fab12 body=411 status=ok
// SIG undefined FUN_1491fab12(void)

void FUN_1491fab12(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [32];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x6a0);
    cVar2 = FUN_144729dda(lVar1 + 0x30);
    if (((cVar2 != '\0') && (*(longlong *)(lVar1 + 0x48) != 0)) && (0 < *(int *)(lVar1 + 8))) {
      FUN_144ade5d8(local_c0,*(undefined8 *)(param_1 + 0x28),param_2[0x98]);
      lVar3 = FUN_1433dc006(param_1 + 0x18);
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (lVar3 == 0) {
        if (*(longlong *)(lVar1 + 0x170) == 0) {
          FUN_1479031da(lVar1,local_c0);
        }
        else {
          FUN_1478ff8ec(lVar1,local_c0);
        }
      }
      else {
        FUN_14005af20(lVar1,local_c0,lVar3);
      }
      if (local_c0 != param_2) {
        *(undefined8 *)(param_2 + 0x20) = local_a0;
        local_a0 = 0;
        *(undefined4 *)(param_2 + 0x28) = (undefined4)local_98;
        *(undefined4 *)(param_2 + 0x2c) = local_98._4_4_;
        local_98 = 0;
        *(undefined8 *)(param_2 + 0x30) = local_90;
        local_90 = 0;
        *(undefined8 *)(param_2 + 0x38) = local_88;
        local_88 = 0;
        *(undefined4 *)(param_2 + 0x40) = (undefined4)local_80;
        *(undefined4 *)(param_2 + 0x44) = local_80._4_4_;
        local_80 = 0;
      }
      param_2[0x48] = local_78;
      local_78 = 0;
      FUN_1447e1642(param_2 + 0x58,local_68);
      FUN_1447166b4(local_68);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8);
    }
  }
  if (param_2[0x98] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    FUN_1448859f0(param_2 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8,*(undefined8 *)(param_2 + 0x30));
}



// FUNCTION 1491faccc FUN_1491faccc body=236 status=ok
// SIG undefined FUN_1491faccc(void)

void FUN_1491faccc(longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491fadba(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = FUN_1433dc006(param_1 + 0x18);
    if (lVar1 == 0) {
      FUN_1479031a2(*(undefined8 *)(param_1 + 0x28),param_2);
    }
    else {
      FUN_147906d38(param_1 + 0x18,param_2);
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fadba FUN_1491fadba body=256 status=ok
// SIG undefined FUN_1491fadba(void)

undefined8 FUN_1491fadba(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cc080c0 == 0) {
    uVar2 = FUN_1408c25db();
    DAT_14cc080c0 = FUN_140002ddd(FUN_1466d09c7,uVar2,L"AnimNode_ControlRigInputPose");
  }
  local_48 = *(undefined8 *)(DAT_14cc080c0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491faebc FUN_1491faebc body=80 status=ok
// SIG undefined FUN_1491faebc(void)

int FUN_1491faebc(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar1 = (int *)*param_1;
    piVar3 = piVar1 + (longlong)*(int *)(param_1 + 1) * 4;
    iVar2 = 0;
    do {
      if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) && (piVar1[2] == param_2[2])) &&
         (piVar1[3] == param_2[3])) {
        return iVar2;
      }
      piVar1 = piVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (piVar1 != piVar3);
  }
  return -1;
}



// FUNCTION 1491faf0c FUN_1491faf0c body=246 status=ok
// SIG undefined FUN_1491faf0c(void)

longlong * FUN_1491faf0c(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  if (((param_2 != (longlong *)0x0) &&
      (lVar3 = (**(code **)(*param_2 + 0x3b0))(param_2,param_3), uVar7 = 0, lVar3 != 0)) &&
     (bVar2 = *(char *)(lVar3 + 0x211) - 1, bVar2 < 10)) {
    uVar7 = *(undefined4 *)(&DAT_14bb90874 + (ulonglong)bVar2 * 4);
  }
  if (*(int *)(param_4 + 0x338) != *(int *)(param_4 + 0x364)) {
    lVar3 = *param_3;
    uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    lVar5 = param_4 + 0x368;
    if (*(longlong *)(param_4 + 0x370) != 0) {
      lVar5 = *(longlong *)(param_4 + 0x370);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_4 + 0x378) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_4 + 0x330) + (longlong)iVar4 * 0x50;
        if (*(longlong *)(*(longlong *)(param_4 + 0x330) + (longlong)iVar4 * 0x50) == lVar3)
        goto LAB_1491faf61;
        iVar4 = *(int *)(lVar5 + 0x48);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_1491faf61:
  lVar3 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  *param_1 = lVar3;
  *(undefined4 *)(param_1 + 1) = uVar7;
  return param_1;
}



// FUNCTION 1491fb002 FUN_1491fb002 body=341 status=ok
// SIG undefined FUN_1491fb002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1491fb002(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc08140) {
    FUN_144b3d300(&DAT_14cc08140);
    if (DAT_14cc08140 == -1) {
      _DAT_14cc08130 = 0;
      _DAT_14cc08138 = 0;
      _Init_thread_footer(&DAT_14cc08140);
    }
  }
  if (param_4 != 0) {
    lVar4 = FUN_145b9ef82();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      FUN_1491faf0c(&local_40,param_2,param_3,param_4);
      if (local_38 != 0 && local_40 != 0) {
        uVar5 = FUN_14757509a(param_4);
        lVar4 = FUN_140f938fc();
        lVar4 = FUN_14752639a(uVar5,*(undefined8 *)(lVar4 + 0x18));
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(lVar4 + 8);
        }
        *param_1 = lVar4 + (longlong)*(int *)(local_40 + 8) * 8;
        *(int *)(param_1 + 1) = local_38;
        if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_1;
      }
    }
  }
  uVar3 = uRam000000014cc0813c;
  uVar2 = _DAT_14cc08138;
  uVar1 = DAT_14cc08130_4;
  *(undefined4 *)param_1 = _DAT_14cc08130;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1491fb174 FUN_1491fb174 body=368 status=ok
// SIG undefined FUN_1491fb174(void)

void FUN_1491fb174(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = *(int *)(param_1 + 0x3b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x3b0);
    lVar10 = 0;
    do {
      local_50 = *(longlong *)(lVar4 + 0x108 + lVar10);
      if ((DAT_14c950c29 == '\x01') && (local_50 != 0)) {
        FUN_1456cec3c();
      }
      if (local_50 != 0) {
        uVar9 = FUN_1458989be();
        cVar8 = FUN_144a7ca96(&local_50,uVar9);
        lVar6 = local_50;
        if ((cVar8 != '\0') && (local_50 != 0)) {
          lVar5 = *(longlong *)(local_50 + 0x98);
          if (lVar5 != 0) {
            local_60 = *param_4;
            local_58 = param_4[1];
            if (local_58 != 0) {
              LOCK();
              *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
              UNLOCK();
            }
            FUN_14759584e(lVar5,param_2,param_3,&local_60);
          }
          lVar6 = *(longlong *)(lVar6 + 0x90);
          if (lVar6 != 0) {
            local_70 = *param_4;
            local_68 = param_4[1];
            if (local_68 != 0) {
              LOCK();
              *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
              UNLOCK();
            }
            FUN_14759584e(lVar6,param_2,param_3,&local_70);
          }
        }
      }
      lVar10 = lVar10 + 0x110;
    } while ((longlong)iVar3 * 0x110 - lVar10 != 0);
  }
  plVar7 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491fb2e6 FUN_1491fb2e6 body=309 status=ok
// SIG undefined FUN_1491fb2e6(void)

void FUN_1491fb2e6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar2 = *(int *)(param_1 + 0x3b8);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x3b0);
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x108 + lVar10);
      if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
        FUN_1456cec3c(lVar5);
LAB_1491fb338:
        lVar9 = FUN_1458989be();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          lVar9 = *(longlong *)(lVar5 + 0x98);
          if ((lVar9 != 0) &&
             (((*(int *)(lVar9 + 0x30) != 0 || *(int *)(lVar9 + 0x2c) != 0) ||
              *(int *)(lVar9 + 0x34) != 0) || *(int *)(lVar9 + 0x38) != 0)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140c60952(param_2,iVar3);
            }
            uVar6 = *(undefined4 *)(lVar9 + 0x30);
            uVar7 = *(undefined4 *)(lVar9 + 0x34);
            uVar8 = *(undefined4 *)(lVar9 + 0x38);
            puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x10);
            *puVar1 = *(undefined4 *)(lVar9 + 0x2c);
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
          }
          lVar5 = *(longlong *)(lVar5 + 0x90);
          if ((lVar5 != 0) &&
             (((*(int *)(lVar5 + 0x30) != 0 || *(int *)(lVar5 + 0x2c) != 0) ||
              *(int *)(lVar5 + 0x34) != 0) || *(int *)(lVar5 + 0x38) != 0)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140c60952(param_2,iVar3);
            }
            uVar6 = *(undefined4 *)(lVar5 + 0x30);
            uVar7 = *(undefined4 *)(lVar5 + 0x34);
            uVar8 = *(undefined4 *)(lVar5 + 0x38);
            puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x10);
            *puVar1 = *(undefined4 *)(lVar5 + 0x2c);
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
          }
        }
      }
      else if (lVar5 != 0) goto LAB_1491fb338;
      lVar10 = lVar10 + 0x110;
    } while ((longlong)iVar2 * 0x110 - lVar10 != 0);
  }
  return;
}



// FUNCTION 1491fb41c FUN_1491fb41c body=68 status=ok
// SIG undefined FUN_1491fb41c(void)

void FUN_1491fb41c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fb462 FUN_1491fb462 body=572 status=ok
// SIG undefined FUN_1491fb462(void)

uint FUN_1491fb462(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  longlong lVar6;
  
  lVar1 = *param_2;
  uVar2 = *param_3;
  if ((longlong)(int)param_1[0x23] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x22] + lVar6) == lVar1) {
        *(undefined8 *)(param_1[0x22] + lVar6) = uVar2;
        uVar5 = (uint)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        goto LAB_1491fb49e;
      }
      lVar6 = lVar6 + 0x118;
    } while ((longlong)(int)param_1[0x23] * 0x118 - lVar6 != 0);
  }
  uVar5 = 0;
LAB_1491fb49e:
  if ((longlong)(int)param_1[0x21] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x20] + lVar6) == lVar1) {
        uVar3 = uVar5 & 0xff;
        cVar4 = (char)uVar5;
        uVar5 = 1;
        if (cVar4 != '\0') {
          uVar5 = uVar3;
        }
        *(undefined8 *)(param_1[0x20] + lVar6) = uVar2;
        break;
      }
      lVar6 = lVar6 + 0x110;
    } while ((longlong)(int)param_1[0x21] * 0x110 - lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x71] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x70] + lVar6) == lVar1) {
        uVar3 = uVar5 & 0xff;
        cVar4 = (char)uVar5;
        uVar5 = 1;
        if (cVar4 != '\0') {
          uVar5 = uVar3;
        }
        *(undefined8 *)(param_1[0x70] + lVar6) = uVar2;
        break;
      }
      lVar6 = lVar6 + 0x118;
    } while ((longlong)(int)param_1[0x71] * 0x118 - lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x73] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x72] + lVar6) == lVar1) {
        uVar3 = uVar5 & 0xff;
        cVar4 = (char)uVar5;
        uVar5 = 1;
        if (cVar4 != '\0') {
          uVar5 = uVar3;
        }
        *(undefined8 *)(param_1[0x72] + lVar6) = uVar2;
        break;
      }
      lVar6 = lVar6 + 0x110;
    } while ((longlong)(int)param_1[0x73] * 0x110 - lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x25] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x24] + lVar6) == lVar1) {
        uVar3 = uVar5 & 0xff;
        cVar4 = (char)uVar5;
        uVar5 = 1;
        if (cVar4 != '\0') {
          uVar5 = uVar3;
        }
        *(undefined8 *)(param_1[0x24] + lVar6) = uVar2;
        break;
      }
      lVar6 = lVar6 + 0x228;
    } while ((longlong)(int)param_1[0x25] * 0x228 - lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x27] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x26] + lVar6) == lVar1) {
        uVar3 = uVar5 & 0xff;
        cVar4 = (char)uVar5;
        uVar5 = 1;
        if (cVar4 != '\0') {
          uVar5 = uVar3;
        }
        *(undefined8 *)(param_1[0x26] + lVar6) = uVar2;
        break;
      }
      lVar6 = lVar6 + 0x338;
    } while ((longlong)(int)param_1[0x27] * 0x338 - lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x29] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x28] + lVar6) == lVar1) {
        uVar3 = uVar5 & 0xff;
        cVar4 = (char)uVar5;
        uVar5 = 1;
        if (cVar4 != '\0') {
          uVar5 = uVar3;
        }
        *(undefined8 *)(param_1[0x28] + lVar6) = uVar2;
        break;
      }
      lVar6 = lVar6 + 0x448;
    } while ((longlong)(int)param_1[0x29] * 0x448 - lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x2b] != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1[0x2a] + lVar6) == lVar1) {
        cVar4 = (char)uVar5;
        uVar3 = uVar5 & 0xff;
        uVar5 = 1;
        if (cVar4 != '\0') {
          uVar5 = uVar3;
        }
        *(undefined8 *)(param_1[0x2a] + lVar6) = uVar2;
        break;
      }
      lVar6 = lVar6 + 0x998;
    } while ((longlong)(int)param_1[0x2b] * 0x998 - lVar6 != 0);
  }
  if ((char)uVar5 != '\0') {
    (**(code **)(*param_1 + 0x368))();
  }
  return uVar5;
}



// FUNCTION 1491fb69e FUN_1491fb69e body=1967 status=ok
// SIG undefined FUN_1491fb69e(void)

void FUN_1491fb69e(longlong param_1,uint param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double extraout_XMM0_Qa;
  undefined1 in_XMM1 [16];
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined1 local_169;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  longlong *local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_14581db06(param_1,&local_118);
  cVar6 = FUN_1411696b0(&local_118,param_2);
  if (cVar6 != '\0') {
    *(undefined1 *)(param_1 + 0xda) = 1;
    cVar6 = (char)param_2;
    *(char *)(param_1 + 0xd9) = cVar6;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      uVar8 = FUN_14757509a(param_1);
      lVar9 = FUN_140f938fc();
      lVar9 = FUN_14752639a(uVar8,*(undefined8 *)(lVar9 + 0x18));
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 8);
      }
      dVar17 = (double)(**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x3a8))
                                 (*(longlong **)(param_1 + 0x1a8),&local_90);
      if ((longlong)local_88 != 0) {
        plVar1 = local_90 + local_88;
        plVar14 = local_90;
        do {
          lVar3 = *plVar14;
          cVar7 = FUN_1491e0d78(dVar17,lVar3);
          dVar17 = extraout_XMM0_Qa;
          if ((cVar7 != '\0') && (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364))) {
            lVar15 = *(longlong *)(lVar3 + 0x14);
            uVar5 = (uint)((ulonglong)lVar15 >> 0x10);
            uVar12 = (uint)lVar15 & 0xffff;
            lVar11 = *(longlong *)(param_1 + 0x370);
            if (*(longlong *)(param_1 + 0x370) == 0) {
              lVar11 = param_1 + 0x368;
            }
            iVar13 = *(int *)(lVar11 + (ulonglong)
                                       (*(int *)(param_1 + 0x378) - 1U &
                                       (int)((ulonglong)lVar15 >> 0x20) +
                                       ((uint)lVar15 << 0x10 | uVar12) +
                                       (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4)) * 4);
            if (iVar13 != -1) {
LAB_1491fb80f:
              lVar11 = *(longlong *)(param_1 + 0x330) + (longlong)iVar13 * 0x50;
              if (*(longlong *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar13 * 0x50) != lVar15)
              goto code_r0x0001491fb824;
              if ((lVar11 + 8U & 0xfffffffffffffff7) == 0) goto switchD_1491fb85f_caseD_2;
              bVar2 = *(byte *)(lVar3 + 0x211);
              if (9 < bVar2 - 1) goto switchD_1491fb85f_caseD_2;
              lVar15 = (longlong)*(int *)(lVar11 + 0x10);
              switch((uint)bVar2) {
              default:
                if (cVar6 != '\x10') goto switchD_1491fb85f_caseD_2;
                local_168 = (double)CONCAT71(local_168._1_7_,1);
                local_178 = lVar15;
                FUN_14919f2a0(*(undefined8 *)(param_1 + 0x1a8),&local_118,lVar3,&local_168);
                dVar17 = (double)(ulonglong)(uint)local_118;
                plVar10 = (longlong *)(lVar9 + local_178 * 8);
                break;
              case 2:
                goto switchD_1491fb85f_caseD_2;
              case 3:
                if (cVar6 != '\x10') goto switchD_1491fb85f_caseD_2;
                local_168 = (double)CONCAT71(local_168._1_7_,1);
                local_178 = lVar15;
                FUN_14919f2a0(*(undefined8 *)(param_1 + 0x1a8),&local_118,lVar3,&local_168);
                in_XMM1 = ZEXT416((uint)local_118);
                dVar17 = (double)(ulonglong)(uint)fStack_114;
                lVar3 = *(longlong *)(lVar9 + local_178 * 8);
                *(undefined1 *)(lVar3 + 0x7c) = 1;
                *(float *)(lVar3 + 0x78) = local_118;
                plVar10 = (longlong *)(lVar9 + local_178 * 8 + 8);
                break;
              case 4:
              case 6:
                if (cVar6 != '\x10') goto switchD_1491fb85f_caseD_2;
                if (bVar2 == 6) {
                  local_178 = lVar15;
                  FUN_1491a0846(*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x2f8),&local_118,
                                lVar3,0);
                  fVar16 = (float)(double)CONCAT44(fStack_104,local_108);
                  in_XMM1._0_4_ = (float)(double)CONCAT44(fStack_10c,local_110);
                  fVar18 = (float)(double)CONCAT44(fStack_114,local_118);
                }
                else {
                  local_168 = (double)CONCAT71(local_168._1_7_,1);
                  local_178 = lVar15;
                  FUN_14919f2a0(*(longlong *)(param_1 + 0x1a8),&local_118,lVar3,&local_168);
                  in_XMM1 = ZEXT416((uint)fStack_114);
                  fVar18 = local_118;
                  fVar16 = local_110;
                }
                lVar3 = *(longlong *)(lVar9 + local_178 * 8);
                *(undefined1 *)(lVar3 + 0x7c) = 1;
                *(float *)(lVar3 + 0x78) = fVar18;
                lVar3 = *(longlong *)(lVar9 + 8 + local_178 * 8);
                *(undefined1 *)(lVar3 + 0x7c) = 1;
                *(int *)(lVar3 + 0x78) = in_XMM1._0_4_;
LAB_1491fb97d:
                dVar17 = (double)(ulonglong)(uint)fVar16;
                plVar10 = (longlong *)(lVar9 + local_178 * 8 + 0x10);
                break;
              case 5:
                if (cVar6 == '\x10') {
                  local_168 = (double)CONCAT71(local_168._1_7_,1);
                  local_178 = lVar15;
                  FUN_14919f2a0(*(undefined8 *)(param_1 + 0x1a8),&local_118,lVar3,&local_168);
                  in_XMM1 = ZEXT416((uint)local_118);
                  lVar3 = *(longlong *)(lVar9 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(float *)(lVar3 + 0x78) = local_118;
                  lVar3 = *(longlong *)(lVar9 + 8 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(float *)(lVar3 + 0x78) = fStack_114;
                  fVar16 = local_110;
                  goto LAB_1491fb97d;
                }
                if ((param_2 & 0xff) == 2) {
                  lVar3 = *(longlong *)(lVar9 + lVar15 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0;
                  lVar3 = *(longlong *)(lVar9 + 8 + lVar15 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0;
                  plVar10 = (longlong *)(lVar9 + lVar15 * 8 + 0x10);
                  goto LAB_1491fbc7d;
                }
                if ((param_2 & 0xff) == 1) {
                  lVar3 = *(longlong *)(lVar9 + lVar15 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0x3f800000;
                  lVar3 = *(longlong *)(lVar9 + 8 + lVar15 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0x3f800000;
                  plVar10 = (longlong *)(lVar9 + lVar15 * 8 + 0x10);
                  goto LAB_1491fbc0f;
                }
                goto switchD_1491fb85f_caseD_2;
              case 7:
                local_168 = (double)CONCAT71(local_168._1_7_,1);
                local_178 = lVar15;
                FUN_14919f2a0(*(undefined8 *)(param_1 + 0x1a8),&local_118,lVar3,&local_168);
                in_XMM1._0_8_ = (double)local_100;
                dVar20 = (double)fStack_104;
                dVar17 = (double)local_108;
                in_XMM1._8_8_ = 0;
                dVar19 = (double)local_f0;
                dVar21 = (double)local_f4;
                dVar4 = (double)local_f8;
                goto LAB_1491fbbbe;
              case 8:
                local_168 = (double)CONCAT71(local_168._1_7_,1);
                local_178 = lVar15;
                FUN_14919f2a0(*(undefined8 *)(param_1 + 0x1a8),&local_118,lVar3,&local_168);
                in_XMM1._0_8_ = (double)local_100;
                dVar20 = (double)fStack_104;
                dVar17 = (double)local_108;
                in_XMM1._8_8_ = 0;
                dVar19 = DAT_14c846520;
                dVar4 = DAT_14c846510;
                dVar21 = DAT_14c846518;
                goto LAB_1491fbbbe;
              case 9:
                local_169 = 1;
                local_178 = lVar15;
                FUN_14919f2a0(*(undefined8 *)(param_1 + 0x1a8),&local_118,lVar3,&local_169);
                local_140 = (double)local_110;
                local_148 = (double)fStack_114;
                local_150 = (double)local_118;
                local_158 = (double)fStack_104;
                dStack_160 = (double)local_108;
                local_168 = (double)fStack_10c;
                local_128 = (double)local_f8;
                dStack_130 = (double)local_fc;
                local_138 = (double)local_100;
                FUN_144a7484c(&local_150);
                in_XMM1._8_8_ = 0;
                in_XMM1._0_8_ = local_158;
                dVar17 = local_168;
                dVar20 = dStack_160;
                dVar19 = local_128;
                dVar4 = local_138;
                dVar21 = dStack_130;
LAB_1491fbbbe:
                if (cVar6 == '\x10') {
                  lVar15 = *(longlong *)(lVar9 + local_178 * 8);
                  *(undefined1 *)(lVar15 + 0x7c) = 1;
                  *(float *)(lVar15 + 0x78) = (float)dVar17;
                  lVar15 = *(longlong *)(lVar9 + 8 + local_178 * 8);
                  *(undefined1 *)(lVar15 + 0x7c) = 1;
                  *(float *)(lVar15 + 0x78) = (float)dVar20;
                  lVar15 = *(longlong *)(lVar9 + 0x10 + local_178 * 8);
                  *(undefined1 *)(lVar15 + 0x7c) = 1;
                  *(float *)(lVar15 + 0x78) = (float)in_XMM1._0_8_;
                  FUN_1491a0846(*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x2f8),&local_118,
                                lVar3,0);
                  dVar17 = (double)(ulonglong)(uint)(float)(double)CONCAT44(fStack_114,local_118);
                  in_XMM1 = ZEXT416((uint)(float)(double)CONCAT44(fStack_10c,local_110));
                  lVar15 = *(longlong *)(lVar9 + 0x18 + local_178 * 8);
                  *(undefined1 *)(lVar15 + 0x7c) = 1;
                  *(float *)(lVar15 + 0x78) = (float)(double)CONCAT44(fStack_114,local_118);
                  lVar15 = *(longlong *)(lVar9 + 0x20 + local_178 * 8);
                  *(undefined1 *)(lVar15 + 0x7c) = 1;
                  *(float *)(lVar15 + 0x78) = (float)(double)CONCAT44(fStack_10c,local_110);
                  lVar15 = *(longlong *)(lVar9 + 0x28 + local_178 * 8);
                  *(undefined1 *)(lVar15 + 0x7c) = 1;
                  *(float *)(lVar15 + 0x78) = (float)(double)CONCAT44(fStack_104,local_108);
                }
                if (*(char *)(lVar3 + 0x211) == '\b') goto switchD_1491fb85f_caseD_2;
                if (cVar6 == '\x02') {
                  lVar3 = *(longlong *)(lVar9 + 0x30 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0;
                  lVar3 = *(longlong *)(lVar9 + 0x38 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0;
                  plVar10 = (longlong *)(lVar9 + local_178 * 8 + 0x40);
LAB_1491fbc7d:
                  dVar17 = 0.0;
                }
                else if ((param_2 & 0xff) == 1) {
                  lVar3 = *(longlong *)(lVar9 + 0x30 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0x3f800000;
                  lVar3 = *(longlong *)(lVar9 + 0x38 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(undefined4 *)(lVar3 + 0x78) = 0x3f800000;
                  plVar10 = (longlong *)(lVar9 + local_178 * 8 + 0x40);
LAB_1491fbc0f:
                  dVar17 = 5.26354424712089e-315;
                }
                else {
                  if (cVar6 != '\x10') goto switchD_1491fb85f_caseD_2;
                  lVar3 = *(longlong *)(lVar9 + 0x30 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(float *)(lVar3 + 0x78) = (float)dVar4;
                  lVar3 = *(longlong *)(lVar9 + 0x38 + local_178 * 8);
                  *(undefined1 *)(lVar3 + 0x7c) = 1;
                  *(float *)(lVar3 + 0x78) = (float)dVar21;
                  plVar10 = (longlong *)(lVar9 + local_178 * 8 + 0x40);
                  dVar17 = (double)(ulonglong)(uint)(float)dVar19;
                }
              }
              lVar3 = *plVar10;
              *(undefined1 *)(lVar3 + 0x7c) = 1;
              *(int *)(lVar3 + 0x78) = SUB84(dVar17,0);
            }
          }
switchD_1491fb85f_caseD_2:
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar1);
      }
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8(local_90);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001491fb824:
  iVar13 = *(int *)(lVar11 + 0x48);
  if (iVar13 == -1) goto switchD_1491fb85f_caseD_2;
  goto LAB_1491fb80f;
}



// FUNCTION 1491fbe4e FUN_1491fbe4e body=91 status=ok
// SIG undefined FUN_1491fbe4e(void)

void FUN_1491fbe4e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1475ccaf6();
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar2 = FUN_145b9f06c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1491fbeaa(param_1,*(undefined8 *)(lVar1 + 0x198));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001491fbe71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1);
  return;
}



// FUNCTION 1491fbeaa FUN_1491fbeaa body=107 status=ok
// SIG undefined FUN_1491fbeaa(void)

void FUN_1491fbeaa(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x1a8) = param_2;
    if (param_2 == 0) {
      lVar2 = 0;
      goto LAB_1491fbef0;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x1a8) = param_2;
    bVar1 = DAT_14c950c29;
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
LAB_1491fbef0:
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  return;
}



// FUNCTION 1491fbf16 FUN_1491fbf16 body=629 status=ok
// SIG undefined FUN_1491fbf16(void)

void FUN_1491fbf16(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140836bcc();
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x3b8), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x3b0);
    lVar12 = 0;
    do {
      local_80 = *(longlong *)(lVar3 + 0x108 + lVar12);
      if ((DAT_14c950c29 == 1) && (local_80 != 0)) {
        FUN_1456cec3c();
      }
      if (local_80 != 0) {
        uVar9 = FUN_1458989be();
        cVar7 = FUN_144a7ca96(&local_80,uVar9);
        if (((cVar7 != '\0') && (local_80 != 0)) && (*(longlong *)(local_80 + 0x98) != 0)) {
          plVar11 = (longlong *)(local_80 + 0x98);
          uVar9 = FUN_1459f5f3a();
          bVar8 = FUN_144a7ca96(plVar11,uVar9);
          lVar4 = *plVar11;
          if ((lVar4 != 0 & bVar8) == 1) {
            lVar5 = *(longlong *)(param_1 + 0x1a8);
            if ((lVar5 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar5);
            }
            else if (lVar5 == 0) {
              *(undefined8 *)(lVar4 + 0x60) = 0;
              *(undefined8 *)(lVar4 + 0x68) = 0;
              *(undefined8 *)(lVar4 + 0x70) = 0;
              *(undefined4 *)(lVar4 + 0x80) = 0;
              if (*(int *)(lVar4 + 0x84) < 0) {
                FUN_1446f8c06((undefined8 *)(lVar4 + 0x78),0);
              }
              puVar6 = *(undefined2 **)(lVar4 + 0x78);
              if (puVar6 != (undefined2 *)0x0) {
                *puVar6 = 0;
              }
              goto LAB_1491fc13e;
            }
            FUN_1400bbfae(&local_80,lVar5);
            *(undefined4 *)(lVar4 + 0x68) = (undefined4)local_80;
            *(undefined4 *)(lVar4 + 0x6c) = local_80._4_4_;
            *(undefined4 *)(lVar4 + 0x70) = uStack_78;
            *(undefined4 *)(lVar4 + 0x74) = uStack_74;
            if ((undefined8 *)(lVar4 + 0x68) == &local_80) {
              if (local_70 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar4 + 0x78) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(lVar4 + 0x78) = local_70;
              local_70 = 0;
              *(undefined4 *)(lVar4 + 0x80) = local_68;
              *(undefined4 *)(lVar4 + 0x84) = local_64;
            }
            cVar7 = (*(code *)PTR_FUN_14c758760)();
            if (cVar7 != '\0') {
              uVar2 = *(uint *)(lVar5 + 0xc);
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
                *(undefined8 *)(lVar4 + 0x60) = 0;
                goto LAB_1491fc13e;
              }
            }
            FUN_14485c47a(lVar4 + 0x60,lVar5);
          }
        }
      }
LAB_1491fc13e:
      lVar12 = lVar12 + 0x110;
    } while ((longlong)iVar1 * 0x110 - lVar12 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fc18c FUN_1491fc18c body=267 status=ok
// SIG undefined FUN_1491fc18c(void)

void FUN_1491fc18c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x110) + lVar4) == param_2) goto LAB_1491fc267;
      lVar4 = lVar4 + 0x118;
    } while ((longlong)*(int *)(param_1 + 0x118) * 0x118 - lVar4 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x110);
  FUN_1475b6bbc(&local_140);
  iVar3 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar3 + 1U) {
    FUN_147652364(plVar1,iVar3);
  }
  puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x118);
  *puVar2 = local_140;
  FUN_147613664(puVar2 + 1,local_138);
  FUN_1404dbc70(local_138);
  lVar4 = *plVar1 + (longlong)iVar3 * 0x118;
  uVar5 = 0;
  if (*(char *)(param_3 + 1) == '\x01') {
    uVar5 = *param_3;
  }
  *(undefined1 *)(lVar4 + 0x84) = 1;
  *(undefined4 *)(lVar4 + 0x80) = uVar5;
LAB_1491fc267:
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fc298 FUN_1491fc298 body=264 status=ok
// SIG undefined FUN_1491fc298(void)

void FUN_1491fc298(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130 [264];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x100) + lVar5) == param_2) goto LAB_1491fc370;
      lVar5 = lVar5 + 0x110;
    } while ((longlong)*(int *)(param_1 + 0x108) * 0x110 - lVar5 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x100);
  FUN_1475cc9d8(&local_138);
  iVar3 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar3 + 1U) {
    FUN_1476523f8(plVar1,iVar3);
  }
  puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x110);
  *puVar2 = local_138;
  FUN_14764a36a(puVar2 + 1,local_130);
  FUN_140bb7e7c();
  lVar5 = *plVar1 + (longlong)iVar3 * 0x110;
  if (param_3[1] == '\x01') {
    uVar4 = *param_3;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(lVar5 + 0x71) = 1;
  *(undefined1 *)(lVar5 + 0x70) = uVar4;
LAB_1491fc370:
  if (param_3[1] == '\x01') {
    param_3[1] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fc3a2 FUN_1491fc3a2 body=459 status=ok
// SIG undefined FUN_1491fc3a2(void)

void FUN_1491fc3a2(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [40];
  longlong *local_180;
  longlong local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 local_108;
  undefined1 local_100 [68];
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined8 local_84;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar6 = *(longlong *)(param_1 + 0x380);
  iVar2 = *(int *)(param_1 + 0x388);
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar5) == param_2) goto LAB_1491fc524;
      lVar5 = lVar5 + 0x118;
    } while (lVar7 * 0x118 - lVar5 != 0);
  }
  local_180 = (longlong *)(param_1 + 0x380);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 2;
  local_154 = 0;
  uStack_14c = 0;
  local_144 = 0x200000000;
  local_13c = 0;
  uStack_134 = 0;
  local_12c = 0;
  local_128 = 2;
  local_170 = &PTR_FUN_14a46bfe0;
  local_120 = 0x404;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  memset(local_100,0,0xa0);
  plVar3 = local_180;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  uStack_ac = 0;
  local_a4 = 0;
  local_84 = 0xffffffff00000080;
  *(uint *)(param_1 + 0x388) = iVar2 + 1U;
  local_178 = param_2;
  if (*(uint *)(param_1 + 0x38c) < iVar2 + 1U) {
    FUN_149211778(local_180,iVar2);
    lVar6 = *plVar3;
  }
  plVar1 = (longlong *)(lVar6 + lVar7 * 0x118);
  *plVar1 = param_2;
  FUN_1476c3f1e(plVar1 + 1,&local_170);
  FUN_140e127fe(&local_170);
  lVar6 = *plVar3 + lVar7 * 0x118;
  if (param_4[1] == '\x01') {
    uVar4 = *param_4;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(lVar6 + 0x71) = 1;
  *(undefined1 *)(lVar6 + 0x70) = uVar4;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(lVar6 + 0x88) = param_3;
LAB_1491fc524:
  if (param_4[1] == '\x01') {
    param_4[1] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fc56e FUN_1491fc56e body=438 status=ok
// SIG undefined FUN_1491fc56e(void)

void FUN_1491fc56e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined8 local_e8;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *(longlong *)(param_1 + 0x390);
  iVar3 = *(int *)(param_1 + 0x398);
  lVar5 = (longlong)iVar3;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) == param_2) goto LAB_1491fc6f0;
      lVar6 = lVar6 + 0x110;
    } while (lVar5 * 0x110 - lVar6 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x390);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 2;
  local_124 = 0;
  uStack_11c = 0;
  local_114 = 0x200000000;
  local_10c = 0;
  uStack_104 = 0;
  uVar7 = 0;
  local_fc = 0;
  local_f8 = 2;
  local_140 = &PTR_FUN_14a46eaf0;
  local_f0 = 0x404;
  local_ee = 0;
  local_a0 = 0;
  local_98 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_db = 0;
  uStack_d8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_94 = 0xffffffff00000080;
  local_68 = 0;
  local_60 = 0;
  local_7c = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  *(uint *)(param_1 + 0x398) = iVar3 + 1U;
  local_148 = param_2;
  if (*(uint *)(param_1 + 0x39c) < iVar3 + 1U) {
    FUN_14921180c(plVar1,iVar3);
    lVar4 = *plVar1;
  }
  plVar2 = (longlong *)(lVar4 + lVar5 * 0x110);
  *plVar2 = param_2;
  FUN_14764cde2(plVar2 + 1,&local_140);
  FUN_14581ef76(&local_140);
  lVar4 = *plVar1 + lVar5 * 0x110;
  if (*(char *)(param_3 + 1) == '\x01') {
    uVar7 = *param_3;
  }
  *(undefined1 *)(lVar4 + 0x74) = 1;
  *(undefined4 *)(lVar4 + 0x70) = uVar7;
LAB_1491fc6f0:
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fc726 FUN_1491fc726 body=366 status=ok
// SIG undefined FUN_1491fc726(void)

void FUN_1491fc726(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_288 [40];
  undefined8 local_260;
  undefined1 local_258 [272];
  undefined1 auStack_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x120) + lVar5) == param_2) goto LAB_1491fc860;
      lVar5 = lVar5 + 0x228;
    } while ((longlong)*(int *)(param_1 + 0x128) * 0x228 - lVar5 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x120);
  FUN_1475cca02(&local_260);
  iVar4 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar4 + 1U;
  if (*(uint *)(param_1 + 300) < iVar4 + 1U) {
    FUN_14765248c(plVar1,iVar4);
  }
  lVar5 = *plVar1;
  lVar6 = (longlong)iVar4 * 0x228;
  puVar2 = (undefined8 *)(lVar5 + lVar6);
  *puVar2 = local_260;
  FUN_147613664(puVar2 + 1,local_258);
  FUN_147613664(lVar5 + 0x118 + lVar6,auStack_148);
  FUN_1404dbc70(auStack_148);
  FUN_1404dbc70(local_258);
  lVar6 = lVar6 + *plVar1;
  if (*(char *)(param_3 + 2) == '\x01') {
    dVar3 = *param_3;
    *(undefined1 *)(lVar6 + 0x84) = 1;
    *(float *)(lVar6 + 0x80) = (float)dVar3;
    fVar7 = (float)param_3[1];
  }
  else {
    *(undefined1 *)(lVar6 + 0x84) = 1;
    *(undefined4 *)(lVar6 + 0x80) = 0;
    fVar7 = 0.0;
  }
  *(undefined1 *)(lVar6 + 0x194) = 1;
  *(float *)(lVar6 + 400) = fVar7;
LAB_1491fc860:
  if (*(char *)(param_3 + 2) == '\x01') {
    *(undefined1 *)(param_3 + 2) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fc896 FUN_1491fc896 body=431 status=ok
// SIG undefined FUN_1491fc896(void)

void FUN_1491fc896(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined1 local_370 [272];
  undefined1 auStack_260 [272];
  undefined1 auStack_150 [272];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x130) + lVar5) == param_2) goto LAB_1491fca0f;
      lVar5 = lVar5 + 0x338;
    } while ((longlong)*(int *)(param_1 + 0x138) * 0x338 - lVar5 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x130);
  FUN_1475cca38(&local_378);
  iVar4 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar4 + 1U) {
    FUN_147652520(plVar1,iVar4);
  }
  lVar6 = (longlong)iVar4 * 0x338;
  puVar2 = (undefined8 *)(*plVar1 + lVar6);
  lVar5 = *plVar1 + lVar6;
  *puVar2 = local_378;
  FUN_147613664(puVar2 + 1,local_370);
  FUN_147613664(lVar5 + 0x118,auStack_260);
  FUN_147613664(lVar5 + 0x228,auStack_150);
  FUN_1404dbc70(auStack_150);
  FUN_1404dbc70(auStack_260);
  FUN_1404dbc70();
  lVar6 = lVar6 + *plVar1;
  if (*(char *)(param_3 + 3) == '\x01') {
    dVar3 = *param_3;
    *(undefined1 *)(lVar6 + 0x84) = 1;
    *(float *)(lVar6 + 0x80) = (float)dVar3;
    dVar3 = param_3[1];
    *(undefined1 *)(lVar6 + 0x194) = 1;
    *(float *)(lVar6 + 400) = (float)dVar3;
    fVar7 = (float)param_3[2];
  }
  else {
    *(undefined1 *)(lVar6 + 0x84) = 1;
    *(undefined4 *)(lVar6 + 0x80) = 0;
    *(undefined1 *)(lVar6 + 0x194) = 1;
    *(undefined4 *)(lVar6 + 400) = 0;
    fVar7 = 0.0;
  }
  *(undefined1 *)(lVar6 + 0x2a4) = 1;
  *(float *)(lVar6 + 0x2a0) = fVar7;
LAB_1491fca0f:
  if (*(char *)(param_3 + 3) == '\x01') {
    *(undefined1 *)(param_3 + 3) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fca46 FUN_1491fca46 body=597 status=ok
// SIG undefined FUN_1491fca46(void)

void FUN_1491fca46(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_9e8 [32];
  undefined1 local_9c8 [2456];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_9e8;
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x150) + lVar4) == param_2) goto LAB_1491fcbda;
      lVar4 = lVar4 + 0x998;
    } while ((longlong)*(int *)(param_1 + 0x158) * 0x998 - lVar4 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x150);
  FUN_1475cca7a(local_9c8);
  iVar3 = *(int *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x15c) < iVar3 + 1U) {
    FUN_1476526d4(plVar1,iVar3);
  }
  FUN_147652650(*plVar1 + (longlong)iVar3 * 0x998,local_9c8);
  FUN_1475b1918();
  lVar4 = (longlong)iVar3 * 0x998 + *plVar1;
  if (*(char *)(param_3 + 9) == '\x01') {
    dVar2 = *param_3;
    *(undefined1 *)(lVar4 + 0x84) = 1;
    *(float *)(lVar4 + 0x80) = (float)dVar2;
    dVar2 = param_3[1];
    *(undefined1 *)(lVar4 + 0x194) = 1;
    *(float *)(lVar4 + 400) = (float)dVar2;
    dVar2 = param_3[2];
    *(undefined1 *)(lVar4 + 0x2a4) = 1;
    *(float *)(lVar4 + 0x2a0) = (float)dVar2;
    dVar2 = param_3[5];
    *(undefined1 *)(lVar4 + 0x3b4) = 1;
    *(float *)(lVar4 + 0x3b0) = (float)dVar2;
    dVar2 = param_3[3];
    *(undefined1 *)(lVar4 + 0x4c4) = 1;
    *(float *)(lVar4 + 0x4c0) = (float)dVar2;
    dVar2 = param_3[4];
    *(undefined1 *)(lVar4 + 0x5d4) = 1;
    *(float *)(lVar4 + 0x5d0) = (float)dVar2;
    dVar2 = param_3[6];
    *(undefined1 *)(lVar4 + 0x6e4) = 1;
    *(float *)(lVar4 + 0x6e0) = (float)dVar2;
    dVar2 = param_3[7];
    *(undefined1 *)(lVar4 + 0x7f4) = 1;
    *(float *)(lVar4 + 0x7f0) = (float)dVar2;
    fVar5 = (float)param_3[8];
  }
  else {
    if ((*(ushort *)(param_1 + 0xd9) & 0x1ff) != 0x102) goto LAB_1491fcbda;
    *(undefined1 *)(lVar4 + 0x84) = 1;
    *(undefined4 *)(lVar4 + 0x80) = 0;
    *(undefined1 *)(lVar4 + 0x194) = 1;
    *(undefined4 *)(lVar4 + 400) = 0;
    *(undefined1 *)(lVar4 + 0x2a4) = 1;
    *(undefined4 *)(lVar4 + 0x2a0) = 0;
    *(undefined1 *)(lVar4 + 0x3b4) = 1;
    *(undefined4 *)(lVar4 + 0x3b0) = 0;
    *(undefined1 *)(lVar4 + 0x4c4) = 1;
    *(undefined4 *)(lVar4 + 0x4c0) = 0;
    *(undefined1 *)(lVar4 + 0x5d4) = 1;
    *(undefined4 *)(lVar4 + 0x5d0) = 0;
    *(undefined1 *)(lVar4 + 0x6e4) = 1;
    *(undefined4 *)(lVar4 + 0x6e0) = 0;
    *(undefined1 *)(lVar4 + 0x7f4) = 1;
    *(undefined4 *)(lVar4 + 0x7f0) = 0;
    fVar5 = 0.0;
  }
  *(undefined1 *)(lVar4 + 0x904) = 1;
  *(float *)(lVar4 + 0x900) = fVar5;
LAB_1491fcbda:
  if (*(char *)(param_3 + 9) == '\x01') {
    *(undefined1 *)(param_3 + 9) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_9e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fcc9c FUN_1491fcc9c body=199 status=ok
// SIG undefined FUN_1491fcc9c(void)

undefined8 FUN_1491fcc9c(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((longlong)*(int *)(param_1 + 600) == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    lVar8 = *(longlong *)(param_1 + 0x250);
    uVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),DAT_14c950c29);
    lVar9 = (longlong)*(int *)(param_1 + 600) * 0x110;
    do {
      lVar7 = *(longlong *)(lVar8 + 0x108);
      if (((uVar5 & 1) == 0) || (lVar7 == 0)) {
        if (lVar7 != 0) goto LAB_1491fccf0;
      }
      else {
        uVar6 = FUN_1456cec3c(lVar7);
        lVar7 = *(longlong *)(lVar8 + 0x108);
        uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),DAT_14c950c29);
LAB_1491fccf0:
        if (((uVar5 & 1) != 0) && (lVar7 != 0)) {
          uVar6 = FUN_1456cec3c(lVar7);
          uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),DAT_14c950c29);
        }
        if ((((*(int *)(lVar7 + 0x2c) == iVar1) && (*(int *)(lVar7 + 0x30) == iVar2)) &&
            (*(int *)(lVar7 + 0x34) == iVar3)) && (*(int *)(lVar7 + 0x38) == iVar4))
        goto LAB_1491fcd4a;
      }
      lVar8 = lVar8 + 0x110;
      lVar9 = lVar9 + -0x110;
    } while (lVar9 != 0);
    lVar8 = 0;
LAB_1491fcd4a:
    uVar6 = CONCAT71((int7)(uVar5 >> 8),lVar8 != 0);
  }
  return uVar6;
}



// FUNCTION 1491fcd64 FUN_1491fcd64 body=250 status=ok
// SIG undefined FUN_1491fcd64(void)

longlong FUN_1491fcd64(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = *(int *)(param_1 + 600);
  if ((longlong)iVar7 != 0) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    lVar5 = *(longlong *)(param_1 + 0x250);
    lVar9 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar8 = *(longlong *)(lVar5 + 0x108 + lVar9);
      if (((bVar6 & 1) == 0) || (lVar8 == 0)) {
        if (lVar8 != 0) goto LAB_1491fcdc4;
      }
      else {
        FUN_1456cec3c(lVar8);
        lVar8 = *(longlong *)(lVar5 + 0x108 + lVar9);
        bVar6 = DAT_14c950c29;
LAB_1491fcdc4:
        if (((bVar6 & 1) != 0) && (lVar8 != 0)) {
          FUN_1456cec3c(lVar8);
          bVar6 = DAT_14c950c29;
        }
        if ((((*(int *)(lVar8 + 0x2c) == iVar1) && (*(int *)(lVar8 + 0x30) == iVar2)) &&
            (*(int *)(lVar8 + 0x34) == iVar3)) && (*(int *)(lVar8 + 0x38) == iVar4)) {
          iVar7 = (int)(lVar9 >> 4) * -0xf0f0f0f;
          if (iVar7 == -1) {
            return 0;
          }
          return (longlong)iVar7 * 0x110 + *(longlong *)(param_1 + 0x250);
        }
      }
      lVar9 = lVar9 + 0x110;
    } while ((longlong)iVar7 * 0x110 - lVar9 != 0);
  }
  return 0;
}



// FUNCTION 1491fce5e FUN_1491fce5e body=272 status=ok
// SIG undefined FUN_1491fce5e(void)

void FUN_1491fce5e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 600);
  if ((longlong)iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x250);
    lVar5 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(lVar1 + 0x108 + lVar5);
      if (((bVar2 & 1) == 0) || (lVar4 == 0)) {
        if (lVar4 != 0) goto LAB_1491fceb3;
      }
      else {
        FUN_1456cec3c(lVar4);
        lVar4 = *(longlong *)(lVar1 + 0x108 + lVar5);
        bVar2 = DAT_14c950c29;
LAB_1491fceb3:
        if (((bVar2 & 1) != 0) && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
          bVar2 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar4 + 0x18) == param_2) {
          iVar3 = (int)(lVar5 >> 4) * -0xf0f0f0f;
          if (iVar3 == -1) {
            return;
          }
          lVar1 = *(longlong *)(param_1 + 0x250);
          if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
            FUN_1456cec3c(param_3);
          }
          *(longlong *)(lVar1 + 0x108 + (longlong)iVar3 * 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001491fcf5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(param_1 + -0x160) + 0x368))((longlong *)(param_1 + -0x160));
          return;
        }
      }
      lVar5 = lVar5 + 0x110;
    } while ((longlong)iVar3 * 0x110 - lVar5 != 0);
  }
  return;
}



// FUNCTION 1491fcf84 FUN_1491fcf84 body=600 status=ok
// SIG undefined FUN_1491fcf84(void)

void FUN_1491fcf84(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 != (longlong *)0x0) {
    cVar4 = (**(code **)(*param_1 + 0x10))(param_1,(longlong)param_2 + 0x2c);
    if (cVar4 == '\0') {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 2;
      local_134 = 0;
      uStack_12c = 0;
      local_124 = 0x200000000;
      local_11c = 0;
      uStack_114 = 0;
      local_10c = 0;
      local_108 = 2;
      local_100 = 0x404;
      local_b0 = 0;
      local_a8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_a4 = 0xffffffff00000080;
      local_78 = 0;
      local_70 = 0;
      local_9c = 0;
      uStack_94 = 0;
      local_8c = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_150 = &PTR_FUN_14a49f3e0;
      local_48 = param_2;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      iVar2 = (int)param_1[0x4b];
      *(uint *)(param_1 + 0x4b) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x25c) < iVar2 + 1U) {
        FUN_14764a2d6(param_1 + 0x4a,iVar2);
      }
      plVar1 = param_1 + -0x2c;
      lVar3 = param_1[0x4a];
      lVar6 = (longlong)iVar2 * 0x110;
      FUN_14764a36a(lVar6 + lVar3,&local_150);
      *(undefined ***)(lVar3 + lVar6) = &PTR_FUN_14a49f3e0;
      *(longlong **)(lVar3 + 0x108 + lVar6) = local_48;
      if ((local_48 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_140bb7e7c(&local_150);
      lVar3 = param_1[0x4a];
      *(undefined2 *)(lVar3 + 0x68 + lVar6) = 0x100;
      (**(code **)(*param_2 + 0x170))(param_2,0,plVar1,0x10);
      if ((longlong)(int)param_1[3] != 0) {
        lVar5 = 0;
        do {
          if ((*(int *)(param_1[2] + 8 + lVar5) != 0) && (*(longlong *)(param_1[2] + lVar5) != 0)) {
            FUN_14764a43e(param_1 + 2,param_1,lVar3 + lVar6);
            break;
          }
          lVar5 = lVar5 + 0x10;
        } while ((longlong)(int)param_1[3] * 0x10 != lVar5);
      }
      (**(code **)(*plVar1 + 0x368))(plVar1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fd1de FUN_1491fd1de body=255 status=ok
// SIG undefined FUN_1491fd1de(void)

void FUN_1491fd1de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x28) == '\0') && (iVar3 = *(int *)(param_1 + 600), (longlong)iVar3 != 0)
     ) {
    lVar1 = *(longlong *)(param_1 + 0x250);
    uVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar5 = *(longlong *)(lVar1 + 0x108 + uVar4);
      if (((bVar2 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1491fd252;
      }
      else {
        FUN_1456cec3c(lVar5);
        lVar5 = *(longlong *)(lVar1 + 0x108 + uVar4);
        bVar2 = DAT_14c950c29;
LAB_1491fd252:
        if (((bVar2 & 1) != 0) && (lVar5 != 0)) {
          FUN_1456cec3c(lVar5);
          bVar2 = DAT_14c950c29;
        }
        if (lVar5 == param_2) {
          iVar3 = (int)(uVar4 >> 4) * -0xf0f0f0f;
          if (iVar3 < 0) {
            return;
          }
          if (*(int *)(param_1 + 600) <= iVar3) {
            return;
          }
          FUN_1475bde6c(param_1 + 0x250,iVar3,1);
                    /* WARNING: Could not recover jumptable at 0x0001491fd2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(param_1 + -0x160) + 0x368))((longlong *)(param_1 + -0x160));
          return;
        }
      }
      uVar4 = uVar4 + 0x110;
    } while ((longlong)iVar3 * 0x110 - uVar4 != 0);
  }
  return;
}



// FUNCTION 1491fd2e6 FUN_1491fd2e6 body=8 status=ok
// SIG undefined FUN_1491fd2e6(void)

longlong FUN_1491fd2e6(longlong param_1)

{
  return param_1 + 0x3b0;
}



// FUNCTION 1491fd2ee FUN_1491fd2ee body=8 status=ok
// SIG undefined FUN_1491fd2ee(void)

longlong FUN_1491fd2ee(longlong param_1)

{
  return param_1 + 0x3a0;
}



// FUNCTION 1491fd2f6 FUN_1491fd2f6 body=78 status=ok
// SIG undefined FUN_1491fd2f6(void)

undefined8 FUN_1491fd2f6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar3 = 1;
  if (uVar1 == *(uint *)(param_1 + 0x420)) {
    if (0 < (int)uVar1) {
      pcVar4 = (char *)(*(longlong *)(param_1 + 0x418) + 8);
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(*param_2 + uVar5 * 8);
        if (*(longlong *)(pcVar4 + -8) != *(longlong *)(lVar2 + 0x14)) {
          return 1;
        }
        if (*pcVar4 != *(char *)(lVar2 + 0x211)) {
          return 1;
        }
        uVar5 = uVar5 + 1;
        pcVar4 = pcVar4 + 0xc;
      } while (uVar1 != uVar5);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1491fd344 FUN_1491fd344 body=121 status=ok
// SIG undefined FUN_1491fd344(void)

void FUN_1491fd344(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_1491fd3be(param_1 + 0x418,(int)param_2[1]);
  iVar4 = *(int *)(param_1 + 0x420);
  if (0 < iVar4) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_2 + lVar3 * 8);
      if (lVar1 != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x418) + lVar2) = *(undefined8 *)(lVar1 + 0x14);
        *(undefined1 *)(*(longlong *)(param_1 + 0x418) + 8 + lVar2) =
             *(undefined1 *)(*(longlong *)(*param_2 + lVar3 * 8) + 0x211);
        iVar4 = *(int *)(param_1 + 0x420);
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0xc;
    } while (lVar3 < iVar4);
  }
  return;
}



// FUNCTION 1491fd3be FUN_1491fd3be body=110 status=ok
// SIG undefined FUN_1491fd3be(void)

void FUN_1491fd3be(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14921197a(param_1,iVar1);
    }
    FUN_149211961((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_149211a0e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1491fd42e FUN_1491fd42e body=86 status=ok
// SIG undefined FUN_1491fd42e(void)

void FUN_1491fd42e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xe0) = 0;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
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
  FUN_1475828fe(param_1);
  return;
}



// FUNCTION 1491fd484 FUN_1491fd484 body=3587 status=ok
// SIG undefined FUN_1491fd484(void)

undefined8 FUN_1491fd484(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined1 auStack_178 [40];
  ulonglong local_150;
  undefined8 local_148;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_104;
  int local_100;
  undefined8 local_fc;
  longlong local_f0;
  undefined8 uStack_e8;
  longlong *local_e0 [2];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong **local_98;
  undefined1 local_8c [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(local_a8,"UIMin",1);
  FUN_1446ddc76(local_b0,"UIMax",1);
  local_70 = 0;
  local_68 = 0x100000000;
  plVar2 = (longlong *)(param_1 + 0x330);
  FUN_149211abc(plVar2);
  plVar13 = *(longlong **)(param_1 + 0x1a8);
  if (plVar13 == (longlong *)0x0) {
    lVar12 = 0;
  }
  else {
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    (**(code **)(*plVar13 + 0x408))(plVar13,&local_c8);
    FUN_1491fd344(param_1,&local_c8);
    if (0 < (int)uStack_c0) {
      FUN_140aec85e();
      FUN_14127a5f0();
      FUN_1458f5a7a();
      iVar10 = 1;
      uVar19 = FUN_1446f470e(local_d0,L"Space");
      if ((longlong)(int)uStack_c0 != 0) {
        uVar18 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x2f8);
        local_128 = local_c8 + (int)uStack_c0;
        local_150 = 0;
        iVar9 = 0;
        local_140 = 0;
        local_12c = 0;
        local_130 = 0;
        local_134 = 0;
        local_13c = 0;
        plVar13 = local_c8;
LAB_1491fd776:
        lVar12 = *plVar13;
        cVar5 = FUN_1491e0d78(uVar19,lVar12);
        uVar19 = extraout_XMM0_Da;
        if (cVar5 != '\0') {
          FUN_144a5dc74(local_e0);
          cVar5 = FUN_1444a659c(uVar18,lVar12);
          uVar19 = extraout_XMM0_Da_00;
          if (((cVar5 != '\0') &&
              (lVar6 = FUN_140813120(extraout_XMM0_Da_00,lVar12), uVar19 = extraout_XMM0_Da_01,
              lVar6 != 0)) && (*(char *)(lVar6 + 0x10) == '\x04')) {
            FUN_1491db0c2(uVar18,&local_120);
            uVar19 = FUN_140008f88(local_e0,&local_120);
            if (local_120 != (longlong *)0x0) {
              uVar19 = (**(code **)(*local_120 + 0x10))();
            }
          }
          switch(*(undefined1 *)(lVar12 + 0x211)) {
          case 0:
            plVar8 = (longlong *)FUN_1475ccb16(param_1);
            uVar19 = extraout_XMM0_Da_05;
            if ((longlong)(int)plVar8[1] != 0) {
              lVar11 = 0;
              lVar6 = 0;
              do {
                if (*(longlong *)(lVar12 + 0x14) == *(longlong *)(*plVar8 + lVar11)) {
                  local_120 = (longlong *)CONCAT44(iVar10,(int)local_150);
                  local_118 = (longlong *)CONCAT44(0xffffffff,local_12c);
                  local_110 = 0;
                  local_108 = 0;
                  local_104 = 0xffffffff;
                  local_fc = 0xffffffffffffffff;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  plVar8 = (longlong *)(*plVar8 - lVar6);
                  local_98 = &local_120;
                  local_148 = uVar18;
                  local_100 = iVar9;
                  local_a0 = plVar8;
                  FUN_149211e22(plVar2,local_8c);
                  if (local_f0 != 0) {
                    FUN_1400020a8();
                  }
                  uVar19 = FUN_147652216(&local_88,plVar8 + 1);
                  local_12c = local_12c + 1;
LAB_1491fde44:
                  iVar10 = iVar10 + 1;
                  goto LAB_1491fdf94;
                }
                lVar6 = lVar6 + -0x110;
                lVar11 = lVar11 + 0x110;
                local_148 = uVar18;
              } while ((longlong)(int)plVar8[1] * -0x110 - lVar6 != 0);
            }
            break;
          case 1:
            plVar8 = (longlong *)FUN_1475c6b9e(param_1);
            uVar19 = extraout_XMM0_Da_06;
            if ((longlong)(int)plVar8[1] != 0) {
              lVar11 = 0;
              lVar6 = 0;
              do {
                if (*(longlong *)(lVar12 + 0x14) == *(longlong *)(*plVar8 + lVar11)) {
                  local_120 = (longlong *)CONCAT44(iVar10,(int)local_150);
                  local_118 = (longlong *)CONCAT44(0xffffffff,local_140);
                  local_110 = 0;
                  local_108 = 0;
                  local_104 = 0xffffffff;
                  local_fc = 0xffffffffffffffff;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  plVar8 = (longlong *)(*plVar8 - lVar6);
                  local_98 = &local_120;
                  local_148 = uVar18;
                  local_100 = iVar9;
                  local_a0 = plVar8;
                  FUN_149211e22(plVar2,local_8c);
                  if (local_f0 != 0) {
                    FUN_1400020a8();
                  }
                  uVar19 = FUN_140f937a0(&local_88,plVar8 + 1);
                  local_140 = local_140 + 1;
                  goto LAB_1491fde44;
                }
                lVar6 = lVar6 + -0x118;
                lVar11 = lVar11 + 0x118;
                local_148 = uVar18;
              } while ((longlong)(int)plVar8[1] * -0x118 - lVar6 != 0);
            }
            break;
          case 2:
            if (*(longlong *)(lVar12 + 0x360) == 0) {
              if ((longlong)*(int *)(param_1 + 0x398) != 0) {
                lVar11 = 0;
                lVar6 = 0;
                do {
                  if (*(longlong *)(lVar12 + 0x14) ==
                      *(longlong *)(*(longlong *)(param_1 + 0x390) + lVar11)) {
                    local_120 = (longlong *)CONCAT44(iVar10,(int)local_150);
                    local_118 = (longlong *)CONCAT44(0xffffffff,local_134);
                    local_110 = 0;
                    local_108 = 0;
                    local_104 = 0xffffffff;
                    local_fc = 0xffffffffffffffff;
                    local_f0 = 0;
                    uStack_e8 = 0;
                    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x390) - lVar6);
                    local_98 = &local_120;
                    local_148 = uVar18;
                    local_100 = iVar9;
                    local_a0 = plVar8;
                    FUN_149211e22(plVar2,local_8c);
                    if (local_f0 != 0) {
                      FUN_1400020a8();
                    }
                    uVar19 = FUN_146349d6c(&local_88,plVar8 + 1);
                    local_134 = local_134 + 1;
                    goto LAB_1491fde44;
                  }
                  lVar6 = lVar6 + -0x110;
                  lVar11 = lVar11 + 0x110;
                  local_148 = uVar18;
                } while ((longlong)*(int *)(param_1 + 0x398) * -0x110 - lVar6 != 0);
              }
            }
            else if ((longlong)*(int *)(param_1 + 0x388) != 0) {
              lVar11 = 0;
              lVar6 = 0;
              do {
                if (*(longlong *)(lVar12 + 0x14) ==
                    *(longlong *)(*(longlong *)(param_1 + 0x380) + lVar11)) {
                  local_120 = (longlong *)CONCAT44(iVar10,(int)local_150);
                  local_118 = (longlong *)CONCAT44(0xffffffff,local_130);
                  local_110 = 0;
                  local_108 = 0;
                  local_104 = 0xffffffff;
                  local_fc = 0xffffffffffffffff;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x380) - lVar6);
                  local_98 = &local_120;
                  local_148 = uVar18;
                  local_100 = iVar9;
                  local_a0 = plVar8;
                  FUN_149211e22(plVar2,local_8c);
                  if (local_f0 != 0) {
                    FUN_1400020a8();
                  }
                  uVar19 = FUN_1492121b4(&local_88,plVar8 + 1);
                  local_130 = local_130 + 1;
                  goto LAB_1491fde44;
                }
                lVar6 = lVar6 + -0x118;
                lVar11 = lVar11 + 0x118;
                local_148 = uVar18;
              } while ((longlong)*(int *)(param_1 + 0x388) * -0x118 - lVar6 != 0);
            }
            break;
          case 3:
            plVar8 = (longlong *)FUN_1475c6ba6(param_1);
            uVar19 = extraout_XMM0_Da_04;
            if ((longlong)(int)plVar8[1] != 0) {
              lVar11 = 0;
              lVar6 = 0;
              do {
                if (*(longlong *)(lVar12 + 0x14) == *(longlong *)(*plVar8 + lVar11)) {
                  local_120 = (longlong *)CONCAT44(iVar10,(int)local_150);
                  local_118 = (longlong *)CONCAT44(0xffffffff,local_140);
                  local_110 = 0;
                  local_108 = 0;
                  local_104 = 0xffffffff;
                  local_fc = 0xffffffffffffffff;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  plVar8 = (longlong *)(*plVar8 - lVar6);
                  local_98 = &local_120;
                  local_148 = uVar18;
                  local_100 = iVar9;
                  local_a0 = plVar8;
                  FUN_149211e22(plVar2,local_8c);
                  if (local_f0 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140f937a0(&local_88,plVar8 + 1);
                  uVar19 = FUN_140f937a0(&local_88,plVar8 + 0x23);
                  local_140 = local_140 + 2;
                  iVar10 = iVar10 + 2;
                  goto LAB_1491fdf94;
                }
                lVar6 = lVar6 + -0x228;
                lVar11 = lVar11 + 0x228;
                local_148 = uVar18;
              } while ((longlong)(int)plVar8[1] * -0x228 - lVar6 != 0);
            }
            break;
          case 4:
          case 5:
          case 6:
            puVar7 = (undefined8 *)FUN_1475c6bae(param_1);
            uVar19 = extraout_XMM0_Da_02;
            if ((longlong)*(int *)(puVar7 + 1) != 0) {
              plVar8 = (longlong *)*puVar7;
              lVar6 = (longlong)*(int *)(puVar7 + 1) * 0x338;
              do {
                if (*(longlong *)(lVar12 + 0x14) == *plVar8) {
                  local_120 = (longlong *)CONCAT44(iVar10,(int)local_150);
                  local_118 = (longlong *)CONCAT44(0xffffffff,local_140);
                  local_110 = 0;
                  local_108 = 0;
                  local_104 = 0xffffffff;
                  local_fc = 0xffffffffffffffff;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_98 = &local_120;
                  local_148 = uVar18;
                  local_100 = iVar9;
                  local_a0 = plVar8;
                  FUN_149211e22(plVar2,local_8c);
                  if (local_f0 != 0) {
                    FUN_1400020a8();
                  }
                  if ((longlong)*(int *)(param_1 + 0x3a8) == 0) goto LAB_1491fdf57;
                  lVar12 = *plVar8;
                  lVar11 = 0;
                  lVar6 = 0;
                  goto LAB_1491fdc37;
                }
                plVar8 = plVar8 + 0x67;
                lVar6 = lVar6 + -0x338;
                local_148 = uVar18;
              } while (lVar6 != 0);
            }
            break;
          case 7:
          case 8:
          case 9:
            plVar8 = (longlong *)FUN_1475ccb1e(param_1);
            uVar19 = extraout_XMM0_Da_03;
            if ((longlong)(int)plVar8[1] != 0) {
              lVar6 = *plVar8;
              lVar11 = 0;
              do {
                local_138 = iVar10;
                if (*(longlong *)(lVar12 + 0x14) == *(longlong *)(lVar6 + lVar11)) {
                  local_120 = (longlong *)CONCAT44(iVar10,(int)local_150);
                  local_118 = (longlong *)CONCAT44(0xffffffff,local_140);
                  local_110 = 0;
                  local_108 = 0;
                  local_104 = 0xffffffff;
                  local_fc = 0xffffffffffffffff;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_a0 = (longlong *)(lVar6 + lVar11);
                  local_98 = &local_120;
                  local_148 = uVar18;
                  local_100 = iVar9;
                  FUN_149211e22(plVar2,local_8c);
                  if (local_f0 != 0) {
                    FUN_1400020a8();
                  }
                  if ((longlong)*(int *)(param_1 + 0x3a8) == 0) goto LAB_1491fde54;
                  lVar3 = *(longlong *)(lVar6 + lVar11);
                  lVar15 = 0;
                  lVar17 = 0;
                  goto LAB_1491fdb69;
                }
                lVar11 = lVar11 + 0x998;
                local_148 = uVar18;
              } while ((longlong)(int)plVar8[1] * 0x998 - lVar11 != 0);
            }
          }
          goto switchD_1491fd7dd_default;
        }
        goto LAB_1491fd92b;
      }
LAB_1491fd93a:
      FUN_140f937a0(&local_88,param_1 + 0x220);
    }
    lVar12 = local_70;
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8();
      lVar12 = local_70;
    }
  }
  local_118 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_118[1] = (longlong)&DAT_100000001;
  *local_118 = (longlong)&PTR_FUN_14a492060;
  local_120 = local_118 + 2;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 2;
  if (lVar12 == 0) {
    local_118[9] = local_78;
    *(undefined4 *)(local_118 + 7) = local_88;
    *(undefined4 *)((longlong)local_118 + 0x3c) = uStack_84;
    *(undefined4 *)(local_118 + 8) = uStack_80;
    *(undefined4 *)((longlong)local_118 + 0x44) = uStack_7c;
  }
  local_118[10] = lVar12;
  local_70 = 0;
  *(undefined4 *)(local_118 + 0xb) = (undefined4)local_68;
  *(undefined4 *)((longlong)local_118 + 0x5c) = local_68._4_4_;
  local_68 = 0x100000000;
  FUN_140aec6f8(&local_120);
  plVar2 = local_118;
  if (local_118 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_120;
    plVar13 = *(longlong **)(param_1 + 0xe8);
    if (plVar13 == (longlong *)0x0) goto LAB_1491fd647;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1491fd611:
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1491fd647;
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar10 = *piVar1;
    UNLOCK();
    plVar2 = plVar13;
  }
  else {
    LOCK();
    *(int *)(local_118 + 1) = (int)local_118[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_120;
    plVar13 = *(longlong **)(param_1 + 0xe8);
    if (local_118 != plVar13) {
      *(longlong **)(param_1 + 0xe8) = local_118;
      if (plVar13 == (longlong *)0x0) goto LAB_1491fd647;
      goto LAB_1491fd611;
    }
    LOCK();
    plVar13 = local_118 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 != 0) goto LAB_1491fd647;
    (**(code **)*local_118)(local_118);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar10 = *piVar1;
    UNLOCK();
  }
  if (iVar10 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_1491fd647:
  plVar2 = local_118;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_118 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1404dbc0c(&local_88);
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    lVar17 = lVar17 + -0x118;
    lVar15 = lVar15 + 0x118;
    if ((longlong)*(int *)(param_1 + 0x3a8) * -0x118 - lVar17 == 0) break;
LAB_1491fdb69:
    if (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + lVar15) == lVar3) {
      lVar17 = *(longlong *)(param_1 + 0x3a0) - lVar17;
      if (lVar17 != 0) {
        if (*(int *)(param_1 + 0x338) == *(int *)(param_1 + 0x364)) goto LAB_1491fe158;
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar16 = (uint)lVar3 & 0xffff;
        lVar15 = param_1 + 0x368;
        if (*(longlong *)(param_1 + 0x370) != 0) {
          lVar15 = *(longlong *)(param_1 + 0x370);
        }
        iVar10 = *(int *)(lVar15 + (ulonglong)
                                   (*(int *)(param_1 + 0x378) - 1U &
                                   (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar16)
                                   + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar10 == -1) goto LAB_1491fe158;
        goto LAB_1491fe1fc;
      }
      break;
    }
  }
  goto LAB_1491fde54;
  while (iVar10 = *(int *)(lVar15 + 0x48), iVar10 != -1) {
LAB_1491fe1fc:
    lVar15 = *plVar2 + (longlong)iVar10 * 0x50;
    if (*(longlong *)(*plVar2 + (longlong)iVar10 * 0x50) == lVar3) {
      if ((lVar15 + 8U & 0xfffffffffffffff7) != 0) {
        *(undefined1 *)(lVar15 + 0x20) = 1;
        *(int *)(lVar15 + 0x24) = local_13c;
      }
      break;
    }
  }
LAB_1491fe158:
  local_13c = local_13c + 1;
  FUN_149212302(&local_88,lVar17 + 8);
LAB_1491fde54:
  FUN_140f937a0(&local_88,lVar11 + 8 + lVar6);
  FUN_140f937a0(&local_88,lVar11 + 0x118 + lVar6);
  FUN_140f937a0(&local_88,lVar11 + 0x228 + lVar6);
  FUN_140f937a0(&local_88,lVar11 + 0x338 + lVar6);
  FUN_140f937a0(&local_88,lVar11 + 0x448 + lVar6);
  uVar19 = FUN_140f937a0(&local_88,lVar11 + 0x558 + lVar6);
  if ((*(char *)(lVar12 + 0x211) == '\t') || (iVar10 = 6, *(char *)(lVar12 + 0x211) == '\a')) {
    FUN_140f937a0(&local_88,lVar11 + 0x668 + lVar6);
    FUN_140f937a0(&local_88,lVar11 + 0x778 + lVar6);
    uVar19 = FUN_140f937a0(&local_88,lVar11 + 0x888 + lVar6);
    iVar10 = 9;
  }
  local_140 = local_140 + iVar10;
  iVar10 = local_138 + iVar10;
  goto LAB_1491fdf94;
  while( true ) {
    lVar6 = lVar6 + -0x118;
    lVar11 = lVar11 + 0x118;
    if ((longlong)*(int *)(param_1 + 0x3a8) * -0x118 - lVar6 == 0) break;
LAB_1491fdc37:
    if (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + lVar11) == lVar12) {
      lVar6 = *(longlong *)(param_1 + 0x3a0) - lVar6;
      if (lVar6 != 0) {
        if (*(int *)(param_1 + 0x338) == *(int *)(param_1 + 0x364)) goto LAB_1491fe1df;
        uVar4 = (uint)((ulonglong)lVar12 >> 0x10);
        uVar16 = (uint)lVar12 & 0xffff;
        lVar11 = param_1 + 0x368;
        if (*(longlong *)(param_1 + 0x370) != 0) {
          lVar11 = *(longlong *)(param_1 + 0x370);
        }
        iVar14 = *(int *)(lVar11 + (ulonglong)
                                   (*(int *)(param_1 + 0x378) - 1U &
                                   (int)((ulonglong)lVar12 >> 0x20) +
                                   ((uint)lVar12 << 0x10 | uVar16) +
                                   (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar14 == -1) goto LAB_1491fe1df;
        goto LAB_1491fe223;
      }
      break;
    }
  }
  goto LAB_1491fdf57;
  while (iVar14 = *(int *)(lVar11 + 0x48), iVar14 != -1) {
LAB_1491fe223:
    lVar11 = *plVar2 + (longlong)iVar14 * 0x50;
    if (*(longlong *)(*plVar2 + (longlong)iVar14 * 0x50) == lVar12) {
      if ((lVar11 + 8U & 0xfffffffffffffff7) != 0) {
        *(undefined1 *)(lVar11 + 0x20) = 1;
        *(int *)(lVar11 + 0x24) = local_13c;
      }
      break;
    }
  }
LAB_1491fe1df:
  local_13c = local_13c + 1;
  FUN_149212302(&local_88,lVar6 + 8);
LAB_1491fdf57:
  FUN_140f937a0(&local_88,plVar8 + 1);
  FUN_140f937a0(&local_88,plVar8 + 0x23);
  uVar19 = FUN_140f937a0(&local_88,plVar8 + 0x45);
  local_140 = local_140 + 3;
  iVar10 = iVar10 + 3;
LAB_1491fdf94:
  local_150 = (ulonglong)((int)local_150 + 1);
  uVar18 = local_148;
switchD_1491fd7dd_default:
  if (local_e0[0] != (longlong *)0x0) {
    uVar19 = (**(code **)(*local_e0[0] + 0x10))();
  }
  iVar9 = iVar9 + 1;
LAB_1491fd92b:
  plVar13 = plVar13 + 1;
  if (plVar13 == local_128) goto LAB_1491fd93a;
  goto LAB_1491fd776;
}



// FUNCTION 1491fe288 FUN_1491fe288 body=167 status=ok
// SIG undefined FUN_1491fe288(void)

bool FUN_1491fe288(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1fc)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x200;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x208);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x210) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x10;
        if (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x10) == lVar1) {
          return lVar4 == 0;
        }
        iVar3 = *(int *)(lVar4 + 8);
      } while (iVar3 != -1);
    }
  }
  return true;
}



// FUNCTION 1491fe330 FUN_1491fe330 body=107 status=ok
// SIG undefined FUN_1491fe330(void)

undefined8 * FUN_1491fe330(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc081c8) {
    FUN_144b3d300(&DAT_14cc081c8);
    if (DAT_14cc081c8 == -1) {
      FUN_14633cd78(&DAT_14cc081c0);
      _Init_thread_footer(&DAT_14cc081c8);
    }
  }
  *param_1 = DAT_14cc081c0;
  return param_1;
}



// FUNCTION 1491fe39c FUN_1491fe39c body=107 status=ok
// SIG undefined FUN_1491fe39c(void)

undefined8 * FUN_1491fe39c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc081d8) {
    FUN_144b3d300(&DAT_14cc081d8);
    if (DAT_14cc081d8 == -1) {
      FUN_14633cd78(&DAT_14cc081d0);
      _Init_thread_footer(&DAT_14cc081d8);
    }
  }
  *param_1 = DAT_14cc081d0;
  return param_1;
}



// FUNCTION 1491fe408 FUN_1491fe408 body=107 status=ok
// SIG undefined FUN_1491fe408(void)

undefined8 * FUN_1491fe408(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc081e8) {
    FUN_144b3d300(&DAT_14cc081e8);
    if (DAT_14cc081e8 == -1) {
      FUN_14633cd78(&DAT_14cc081e0);
      _Init_thread_footer(&DAT_14cc081e8);
    }
  }
  *param_1 = DAT_14cc081e0;
  return param_1;
}



// FUNCTION 1491fe474 FUN_1491fe474 body=107 status=ok
// SIG undefined FUN_1491fe474(void)

undefined8 * FUN_1491fe474(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc081f8) {
    FUN_144b3d300(&DAT_14cc081f8);
    if (DAT_14cc081f8 == -1) {
      FUN_14633cd78(&DAT_14cc081f0);
      _Init_thread_footer(&DAT_14cc081f8);
    }
  }
  *param_1 = DAT_14cc081f0;
  return param_1;
}



// FUNCTION 1491fe4e0 FUN_1491fe4e0 body=124 status=ok
// SIG undefined FUN_1491fe4e0(void)

float FUN_1491fe4e0(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar1 = (float)FUN_140cf0978();
  if ((*(byte *)(param_1 + 0x219) & 2) != 0) {
    local_34 = 1.0;
    FUN_1400f01f6(param_1 + 0x220,param_2,&local_34);
    fVar1 = fVar1 * local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fe55e FUN_1491fe55e body=2548 status=ok
// SIG undefined FUN_1491fe55e(void)

void FUN_1491fe55e(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar18;
  undefined1 auStack_318 [47];
  char local_2e9;
  longlong local_2e8;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  float local_2c8;
  float fStack_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  undefined1 local_251;
  longlong local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined8 uStack_230;
  undefined1 local_21c [4];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined1 local_1e4;
  undefined1 local_1e3;
  undefined1 local_1e2;
  undefined1 local_1e1;
  undefined4 local_1e0;
  bool local_1dc;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  longlong *local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  longlong *local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  bool local_128;
  double local_120;
  double local_118;
  bool local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2e9 = param_3;
  FUN_1491fbeaa();
  (**(code **)(*(longlong *)param_1[0x35] + 0x3a8))((longlong *)param_1[0x35],&local_2d8);
  iVar6 = (int)(float)local_2d0;
  if (local_2d8 != 0.0) {
    FUN_1400020a8();
  }
  if ((0 < iVar6) && (iVar6 == (int)param_1[0x38])) {
    FUN_1491fef54(param_1);
  }
  local_238 = (longlong *)0x0;
  uStack_230 = 0;
  (**(code **)(*(longlong *)param_1[0x35] + 0x408))((longlong *)param_1[0x35],&local_238);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_2e8 = *(longlong *)(param_1[0x35] + 0x2f8);
  local_248 = 0x697dd581;
  uStack_244 = 0xe64f41ab;
  uStack_240 = 0xaa4a51ec;
  uStack_23c = 0xbeb7b628;
  iVar6 = FUN_1448a256a(param_1);
  plVar16 = local_238;
  dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
  uVar18 = extraout_XMM0_Da;
  if (iVar6 < 0x3f) {
    if ((int)uStack_230 == 0) goto LAB_1491fe8bd;
    lVar12 = (longlong)(int)uStack_230;
    lVar13 = 0;
    do {
      if (*(char *)(*(longlong *)((longlong)plVar16 + lVar13) + 0x211) == '\x01') {
        local_2d8 = (double)CONCAT71(local_2d8._1_7_,8);
        dVar11 = (double)(*(longlong *)((longlong)plVar16 + lVar13) + 0x14);
        uVar18 = FUN_1491d5456(local_218,dVar11,&local_2d8);
        local_188._0_4_ = CONCAT31(local_188._1_3_,8);
        local_188._4_4_ = local_218._0_4_;
        uStack_180._0_4_ = local_218._4_4_;
        if ((((local_218._0_8_ != 0) &&
             (uVar7 = FUN_140813180(local_2e8,&local_188), uVar18 = extraout_XMM0_Da_00,
             -1 < (int)uVar7)) && ((int)uVar7 < *(int *)(local_2e8 + 0xc0))) &&
           (*(longlong *)(*(longlong *)(local_2e8 + 0xb8) + (ulonglong)uVar7 * 8) != 0)) {
          local_251 = 1;
          FUN_1491d5112(&local_250,local_218,&local_251);
          local_2d0 = &local_250;
          local_2d8 = dVar11;
          uVar18 = FUN_140db3efa(&local_108,local_21c,&local_2d8,0);
        }
      }
      lVar13 = lVar13 + 8;
    } while (lVar12 * 8 != lVar13);
  }
  dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
  if ((int)uStack_230 != 0) {
    plVar15 = local_238 + (int)uStack_230;
    plVar16 = local_238;
    do {
      lVar12 = *plVar16;
      local_188 = dVar11;
      cVar5 = FUN_1491e0d78(uVar18,lVar12);
      uVar18 = extraout_XMM0_Da_01;
      dVar11 = local_188;
      if (cVar5 != '\0') {
        uVar18 = FUN_1491df068(local_2e8,&local_250,lVar12 + 0x10);
        if ((local_250 != 0) && (local_250 != *(longlong *)(lVar12 + 0x14))) {
          uVar18 = FUN_1491fb462(param_1,&local_250,lVar12 + 0x14);
        }
        puVar14 = (undefined8 *)(lVar12 + 0x14);
        dVar11 = local_188;
        if ((int)uStack_100 != local_d4) {
          lVar13 = *(longlong *)(lVar12 + 0x14);
          uVar7 = (uint)((ulonglong)lVar13 >> 0x10);
          uVar9 = (uint)lVar13 & 0xffff;
          puVar8 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar8 = local_d0;
          }
          iVar6 = *(int *)(puVar8 + (ulonglong)
                                    (local_c0 - 1U &
                                    (int)((ulonglong)lVar13 >> 0x20) +
                                    ((uint)lVar13 << 0x10 | uVar9) +
                                    (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar9 >> 4)) * 4);
          while (iVar6 != -1) {
            plVar1 = (longlong *)(local_108 + (longlong)iVar6 * 0x18);
            if (*plVar1 == lVar13) {
              if (plVar1 != (longlong *)&DAT_fffffffffffffff8 && plVar1 != (longlong *)0x0) {
                local_2e0 = puVar14;
                uVar18 = FUN_1491fb462(param_1);
                puVar14 = local_2e0;
                dVar11 = local_188;
              }
              break;
            }
            iVar6 = (int)plVar1[2];
          }
        }
        local_188._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
        cVar5 = *(char *)(lVar12 + 0x211);
        local_188._1_3_ = (undefined3)((ulonglong)dVar11 >> 8);
        switch(cVar5) {
        case '\0':
          if (local_2e9 != '\0') {
            local_188._0_4_ = CONCAT31(local_188._1_3_,1);
            FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,&local_188);
            local_1e1 = 1;
            local_1e2 = (undefined1)local_2d8;
            uVar18 = FUN_1491fc298(param_1,*(undefined8 *)(lVar12 + 0x14),&local_1e2);
            dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
          }
          break;
        case '\x01':
        case '\n':
          bVar17 = local_2e9 == '\0';
          if (bVar17) {
            uVar10 = *puVar14;
          }
          else {
            local_188._0_4_ = CONCAT31(local_188._1_3_,1);
            FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,&local_188);
            dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
            local_1e0 = (float)local_2d8;
            uVar10 = *(undefined8 *)(lVar12 + 0x14);
          }
          local_1dc = !bVar17;
          local_188 = dVar11;
          uVar18 = FUN_1491fc18c(param_1,uVar10,&local_1e0);
          dVar11 = local_188;
          break;
        case '\x02':
          if (*(longlong *)(lVar12 + 0x360) == 0) {
            if (local_2e9 != '\0') {
              local_188._0_4_ = CONCAT31(local_188._1_3_,1);
              FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,&local_188);
              local_1e8 = 1;
              local_1ec = (float)local_2d8;
              uVar18 = FUN_1491fc56e(param_1,*(undefined8 *)(lVar12 + 0x14),&local_1ec);
              dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
            }
          }
          else if (local_2e9 != '\0') {
            local_188._0_4_ = CONCAT31(local_188._1_3_,1);
            FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,&local_188);
            local_1e3 = 1;
            local_1e4 = (undefined1)local_2d8;
            uVar18 = FUN_1491fc3a2(param_1,*(undefined8 *)(lVar12 + 0x14),
                                   *(undefined8 *)(lVar12 + 0x360),&local_1e4);
            dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
          }
          break;
        case '\x03':
          bVar17 = local_2e9 == '\0';
          if (bVar17) {
            uVar10 = *puVar14;
          }
          else {
            local_188._0_4_ = CONCAT31(local_188._1_3_,1);
            FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,&local_188);
            dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
            local_118 = (double)local_2d8._4_4_;
            local_120 = (double)(float)local_2d8;
            uVar10 = *(undefined8 *)(lVar12 + 0x14);
          }
          local_110 = !bVar17;
          local_188 = dVar11;
          uVar18 = FUN_1491fc726(param_1,uVar10,&local_120);
          dVar11 = local_188;
          break;
        case '\x04':
        case '\x05':
        case '\x06':
          bVar17 = local_2e9 == '\0';
          if (bVar17) {
            uVar10 = *puVar14;
          }
          else {
            local_188._0_4_ = CONCAT31(local_188._1_3_,1);
            FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,&local_188);
            dVar11 = (double)CONCAT44(local_188._4_4_,(undefined4)local_188);
            local_130 = (double)(float)local_2d0;
            local_138 = (double)local_2d8._4_4_;
            local_140 = (double)(float)local_2d8;
            uVar10 = *(undefined8 *)(lVar12 + 0x14);
          }
          local_128 = !bVar17;
          local_188 = dVar11;
          uVar18 = FUN_1491fc896(param_1,uVar10,&local_140);
          dVar11 = local_188;
          break;
        case '\a':
        case '\b':
        case '\t':
          if (local_2e9 == '\0') {
            local_190 = 0;
            uVar10 = *puVar14;
          }
          else {
            local_2e0 = puVar14;
            if (cVar5 == '\t') {
              local_188._0_4_ = CONCAT31(local_188._1_3_,1);
              FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,&local_188);
              local_1b0 = (double)(float)local_2d0;
              local_1b8 = (longlong *)(double)local_2d8._4_4_;
              local_1c0 = (double)(float)local_2d8;
              dVar11 = (double)fStack_2c4;
              dVar3 = (double)local_2c8;
              dVar4 = (double)local_2d0._4_4_;
              local_198 = (double)local_2b8;
              local_1a0 = (double)local_2bc;
              local_1a8 = (double)local_2c0;
            }
            else {
              local_188 = dVar11;
              if (cVar5 == '\a') {
                local_21c[0] = 1;
                FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,local_21c);
                local_178 = (double)local_2c0;
                uStack_180 = (double)fStack_2c4;
                local_188 = (double)local_2c8;
                dVar2 = (double)local_2b0;
                dVar11 = (double)local_2b4;
                dVar3 = (double)local_2b8;
                local_218._8_4_ = SUB84((double)local_2d8._4_4_,0);
                local_218._0_8_ = (double)(float)local_2d8;
                local_218._12_4_ = (int)((ulonglong)(double)local_2d8._4_4_ >> 0x20);
                local_208._8_4_ = SUB84((double)local_2d0._4_4_,0);
                local_208._0_8_ = (double)(float)local_2d0;
                local_208._12_4_ = (int)((ulonglong)(double)local_2d0._4_4_ >> 0x20);
                FUN_1448052ee(local_218,&local_170);
                local_198 = dVar2;
                local_1a0 = dVar11;
                local_1a8 = dVar3;
                local_1b0 = local_160;
                local_1b8 = local_168;
                local_1c0 = local_170;
                dVar11 = local_178;
                dVar3 = uStack_180;
                dVar4 = local_188;
                local_148 = dVar2;
              }
              else {
                local_218[0] = 1;
                FUN_14919f2a0(param_1[0x35],&local_2d8,lVar12,local_218);
                local_150 = (double)local_2d0._4_4_;
                local_158 = (double)(float)local_2d0;
                local_160 = (double)local_2d8._4_4_;
                local_168 = (longlong *)(double)(float)local_2d8;
                dVar11 = (double)local_2c0;
                dVar3 = (double)fStack_2c4;
                dVar4 = (double)local_2c8;
                local_178 = dVar11;
                local_188 = dVar4;
                uStack_180 = dVar3;
                FUN_1448052ee(&local_168,&local_2d8);
                local_1b0 = (double)CONCAT44(fStack_2c4,local_2c8);
                local_198 = DAT_14c846520;
                local_1a0 = DAT_14c846518;
                local_1a8 = DAT_14c846510;
                local_1b8 = local_2d0;
                local_1c0 = local_2d8;
              }
            }
            local_190 = 1;
            uVar10 = *local_2e0;
            local_1d8 = dVar4;
            local_1d0 = dVar3;
            local_1c8 = dVar11;
            dVar11 = local_188;
          }
          local_188 = dVar11;
          uVar18 = FUN_1491fca46(param_1,uVar10,&local_1d8);
          dVar11 = local_188;
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar15);
  }
LAB_1491fe8bd:
  local_188 = dVar11;
  (**(code **)(*param_1 + 0x368))(param_1);
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_108);
  if (local_238 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491fef54 FUN_1491fef54 body=262 status=ok
// SIG undefined FUN_1491fef54(void)

void FUN_1491fef54(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  if ((plVar1 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x1c0))) {
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*plVar1 + 0x408))(plVar1,&local_48);
    if ((int)uStack_40 == *(int *)(param_1 + 0x1c0)) {
      FUN_1408d9e0e(param_1 + 0x1c8,0);
      if (0 < (int)uStack_40) {
        lVar3 = 0;
        iVar2 = (int)uStack_40;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x1b8) + lVar3) == '\0') {
            FUN_144a13f80(param_1 + 0x1c8,local_4c,*(longlong *)(local_48 + lVar3 * 8) + 0x14,0);
            iVar2 = (int)uStack_40;
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if (*(int *)(param_1 + 0x1c4) != 0) {
      FUN_14475e67c((longlong *)(param_1 + 0x1b8),0);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ff05c FUN_1491ff05c body=1383 status=ok
// SIG undefined FUN_1491ff05c(void)

void FUN_1491ff05c(longlong param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined1 *local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_78 [2];
  undefined8 *local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364)) {
    lVar7 = *param_2;
    uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar9 = (uint)lVar7 & 0xffff;
    lVar8 = param_1 + 0x368;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x370);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(param_1 + 0x378) - 1U &
                              (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar9) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x330);
      do {
        lVar13 = (longlong)iVar10 * 0x50;
        if (*(longlong *)(lVar8 + lVar13) == lVar7) {
          if (((lVar13 + lVar8 + 8 & 0xfffffffffffffff7U) != 0) &&
             (*(longlong *)(param_1 + 0x1a8) != 0)) {
            iVar10 = *(int *)(lVar13 + lVar8 + 0x10);
            uVar6 = FUN_14757509a(param_1);
            lVar7 = FUN_140f938fc();
            lVar7 = FUN_14752639a(uVar6,*(undefined8 *)(lVar7 + 0x18));
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(longlong *)(lVar7 + 8);
            }
            lVar8 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x3b0))
                              (*(longlong **)(param_1 + 0x1a8),param_2);
            if ((lVar8 != 0) && ((byte)(*(char *)(lVar8 + 0x211) - 6U) < 4)) {
              iVar4 = (uint)(*(char *)(lVar8 + 0x211) != '\x06') * 3;
              iVar1 = iVar4 + iVar10;
              local_58[0] = 0;
              local_58[1] = 0;
              local_68 = (undefined8 *)0x0;
              uStack_60 = 0;
              local_148 = CONCAT44(local_148._4_4_,iVar1);
              local_130 = (longlong)iVar1;
              local_78[0] = 0;
              local_78[1] = 0;
              local_128 = (longlong)(iVar10 + 2 + iVar4);
              lVar8 = local_130;
              local_120 = lVar7;
              do {
                lVar7 = local_120;
                FUN_1491ff60e(&local_68,0,1);
                FUN_147a403e4(local_78,0,1);
                plVar2 = *(longlong **)(lVar7 + lVar8 * 8);
                local_c8 = CONCAT31(local_c8._1_3_,2);
                uStack_c4 = 0;
                uStack_c0 = CONCAT31(uStack_c0._1_3_,2);
                uStack_bc = 0;
                (**(code **)(*plVar2 + 8))(plVar2,&local_c8,&local_68,local_78);
                if ((longlong)(int)uStack_60 != 0) {
                  lVar7 = (longlong)(int)uStack_60 << 2;
                  puVar11 = local_68;
                  do {
                    FUN_14920a692(local_58,puVar11,puVar11);
                    puVar11 = (undefined8 *)((longlong)puVar11 + 4);
                    lVar7 = lVar7 + -4;
                  } while (lVar7 != 0);
                }
                lVar13 = local_120;
                lVar7 = local_128;
                bVar3 = lVar8 < local_128;
                lVar8 = lVar8 + 1;
              } while (bVar3);
              FUN_1491ff60e(&local_68,0,1);
              FUN_1491ff682(local_58,&local_68);
              puVar11 = local_68;
              lVar8 = (longlong)(int)uStack_60;
              if (0 < lVar8) {
                local_98 = 0.0;
                dStack_90 = 0.0;
                local_88 = 0.0;
                local_13c = *(undefined4 *)local_68;
                local_140 = *(undefined4 *)((longlong)local_68 + lVar8 * 4 + -4);
                lVar14 = (longlong)((int)local_148 + 1);
                local_148 = lVar8 << 2;
                lVar12 = 0;
                lVar8 = local_130;
                local_138 = param_4;
                local_118 = param_3;
                local_110 = lVar14;
                do {
                  local_9c = 0.0;
                  local_a0 = 0.0;
                  local_a4 = 0.0;
                  FUN_1400f01f6(*(undefined8 *)(lVar13 + lVar8 * 8),
                                *(undefined4 *)((longlong)puVar11 + lVar12),&local_9c);
                  FUN_1400f01f6(*(undefined8 *)(lVar13 + lVar14 * 8),
                                *(undefined4 *)((longlong)puVar11 + lVar12),&local_a0);
                  FUN_1400f01f6(*(undefined8 *)(lVar13 + lVar7 * 8),
                                *(undefined4 *)((longlong)puVar11 + lVar12),&local_a4);
                  local_88 = (double)local_9c;
                  dStack_90 = (double)local_a4;
                  local_98 = (double)local_a0;
                  if (local_118[1] == '\x01') {
                    local_e0 = local_88;
                    local_d8 = local_98;
                    local_d0 = dStack_90;
                    FUN_14690c017(&local_108,&local_e0,*local_118,1);
                  }
                  else {
                    FUN_144a7484c(&local_98,&local_108);
                  }
                  local_b8 = local_f8;
                  uStack_b4 = uStack_f4;
                  uStack_b0 = uStack_f0;
                  uStack_ac = uStack_ec;
                  local_c8 = local_108;
                  uStack_c4 = uStack_104;
                  uStack_c0 = uStack_100;
                  uStack_bc = uStack_fc;
                  if (local_138[1] == '\x01') {
                    FUN_14690c377(&local_108,&local_c8,*local_138,1);
                    local_88 = (double)CONCAT44(uStack_104,local_108);
                    local_98 = (double)CONCAT44(uStack_fc,uStack_100);
                    dStack_90 = (double)CONCAT44(uStack_f4,local_f8);
                    uVar15 = local_108;
                    uVar16 = uStack_104;
                  }
                  else {
                    FUN_141706cfc(&local_108,&local_c8);
                    local_88 = (double)CONCAT44(uStack_f4,local_f8);
                    local_98 = (double)CONCAT44(uStack_104,local_108);
                    dStack_90 = (double)CONCAT44(uStack_fc,uStack_100);
                    uVar15 = local_f8;
                    uVar16 = uStack_f4;
                  }
                  lVar13 = local_120;
                  lVar8 = local_130;
                  local_158 = param_5;
                  FUN_14752e24f(&local_108,*(undefined8 *)(local_120 + local_130 * 8),
                                *(undefined4 *)((longlong)puVar11 + lVar12),
                                (float)(double)CONCAT44(uVar16,uVar15));
                  lVar14 = local_110;
                  local_158 = param_5;
                  FUN_14752e24f(&local_108,*(undefined8 *)(lVar13 + local_110 * 8),
                                *(undefined4 *)((longlong)puVar11 + lVar12),(float)local_98);
                  lVar7 = local_128;
                  local_158 = param_5;
                  FUN_14752e24f(&local_108,*(undefined8 *)(lVar13 + local_128 * 8),
                                *(undefined4 *)((longlong)puVar11 + lVar12),(float)dStack_90);
                  lVar12 = lVar12 + 4;
                } while (local_148 != lVar12);
                FUN_1491ff700(param_1,param_2,local_13c,local_140);
              }
              if (local_78[0] != 0) {
                FUN_1400020a8();
              }
              if (local_68 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_58[0] != 0) {
                FUN_1400020a8();
              }
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar13 + lVar8 + 0x48);
      } while (iVar10 != -1);
    }
  }
  if ((local_58[2] ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491ff5c4 FUN_1491ff5c4 body=73 status=ok
// SIG undefined FUN_1491ff5c4(void)

undefined8 FUN_1491ff5c4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  }
  else {
    uVar1 = FUN_145b9f06c();
    lVar2 = FUN_144a78ede(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_149218cf8(lVar2,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1491ff60e FUN_1491ff60e body=115 status=ok
// SIG undefined FUN_1491ff60e(void)

void FUN_1491ff60e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14753e8f2(param_1,iVar1);
    }
    FUN_14753f0b4((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14921244c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1491ff682 FUN_1491ff682 body=124 status=ok
// SIG undefined FUN_1491ff682(void)

void FUN_1491ff682(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar1) {
    FUN_140aba11c(param_2);
  }
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14753e8f2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1491ff700 FUN_1491ff700 body=706 status=ok
// SIG undefined FUN_1491ff700(void)

void FUN_1491ff700(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8 [3];
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = param_3;
  local_c4 = param_4;
  if (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364)) {
    lVar5 = *param_2;
    uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    lVar6 = param_1 + 0x368;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x370);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x378) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x330) + (longlong)iVar9 * 0x50;
        if (*(longlong *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar9 * 0x50) == lVar5) {
          if (((lVar6 + 8U & 0xfffffffffffffff7) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
            iVar9 = *(int *)(lVar6 + 0x10);
            uVar4 = FUN_14757509a(param_1);
            lVar5 = FUN_140f938fc();
            lVar5 = FUN_14752639a(uVar4,*(undefined8 *)(lVar5 + 0x18));
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = *(longlong *)(lVar5 + 8);
            }
            lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x3b0))
                              (*(longlong **)(param_1 + 0x1a8),param_2);
            if ((lVar6 != 0) && ((byte)(*(char *)(lVar6 + 0x211) - 6U) < 4)) {
              local_b8 = (ulonglong)((uint)(*(char *)(lVar6 + 0x211) != '\x06') * 3 + iVar9);
              lVar6 = 0;
              do {
                lVar11 = (longlong)((int)local_b8 + (int)lVar6);
                local_b0 = lVar6;
                uVar3 = (**(code **)(**(longlong **)(lVar5 + lVar11 * 8) + 0x48))();
                if (0 < (int)uVar3) {
                  uVar12 = 0;
                  lVar6 = 0;
                  uVar10 = 0;
                  local_c0 = 0;
                  do {
                    lVar2 = *(longlong *)(lVar5 + lVar11 * 8);
                    FUN_140861d3c(local_a8,lVar2,lVar2 + 0x58,lVar2 + 0x80);
                    iVar9 = *(int *)(*local_a8[0] + uVar10 * 4);
                    local_90 = lVar2 + 0x68;
                    if (iVar9 <= local_c4 && local_c8 <= iVar9) {
                      lVar2 = *(longlong *)(lVar5 + lVar11 * 8);
                      FUN_140861d3c(local_a8,lVar2,lVar2 + 0x58,lVar2 + 0x80);
                      lVar7 = *(longlong *)(lVar2 + 0x68);
                      puVar1 = (undefined4 *)(lVar7 + lVar6);
                      local_88 = *puVar1;
                      uStack_84 = puVar1[1];
                      uStack_80 = puVar1[2];
                      puVar1 = (undefined4 *)(lVar7 + 0xc + lVar6);
                      uStack_7c = *puVar1;
                      uStack_78 = puVar1[1];
                      uStack_74 = puVar1[2];
                      uStack_70 = puVar1[3];
                      local_90 = lVar2 + 0x68;
                      if ((local_c0 & 1) != 0) {
                        FUN_1467f95e0(uVar12,&local_88);
                        uVar12 = local_88;
                        lVar2 = *(longlong *)(lVar5 + lVar11 * 8);
                        FUN_140861d3c(local_a8,lVar2,lVar2 + 0x58,lVar2 + 0x80);
                        lVar7 = *(longlong *)(lVar2 + 0x68);
                        *(undefined4 *)(lVar7 + lVar6) = uVar12;
                      }
                      local_c0 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
                      uVar12 = local_88;
                    }
                    uVar10 = uVar10 + 1;
                    lVar6 = lVar6 + 0x1c;
                  } while (uVar3 != uVar10);
                }
                lVar6 = local_b0 + 1;
              } while (lVar6 != 3);
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar6 + 0x48);
      } while (iVar9 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491ff9c4 FUN_1491ff9c4 body=8 status=ok
// SIG undefined FUN_1491ff9c4(void)

longlong FUN_1491ff9c4(longlong param_1)

{
  return param_1 + 0x380;
}



// FUNCTION 1491ff9cc FUN_1491ff9cc body=8 status=ok
// SIG undefined FUN_1491ff9cc(void)

longlong FUN_1491ff9cc(longlong param_1)

{
  return param_1 + 0x390;
}



// FUNCTION 1491ff9fe FUN_1491ff9fe body=45 status=ok
// SIG undefined FUN_1491ff9fe(void)

longlong FUN_1491ff9fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c4fb4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffa2c FUN_1491ffa2c body=48 status=ok
// SIG undefined FUN_1491ffa2c(void)

longlong FUN_1491ffa2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x278;
  FUN_145c4fb4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffa5c FUN_1491ffa5c body=48 status=ok
// SIG undefined FUN_1491ffa5c(void)

longlong FUN_1491ffa5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x280;
  FUN_145c4fb4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffab0 FUN_1491ffab0 body=45 status=ok
// SIG undefined FUN_1491ffab0(void)

longlong FUN_1491ffab0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145db258e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffade FUN_1491ffade body=48 status=ok
// SIG undefined FUN_1491ffade(void)

longlong FUN_1491ffade(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x278;
  FUN_145db258e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffb0e FUN_1491ffb0e body=48 status=ok
// SIG undefined FUN_1491ffb0e(void)

longlong FUN_1491ffb0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x280;
  FUN_145db258e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffb3e FUN_1491ffb3e body=48 status=ok
// SIG undefined FUN_1491ffb3e(void)

longlong FUN_1491ffb3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_14064ee12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffb7a FUN_1491ffb7a body=48 status=ok
// SIG undefined FUN_1491ffb7a(void)

longlong FUN_1491ffb7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145e1d7da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffbb2 FUN_1491ffbb2 body=48 status=ok
// SIG undefined FUN_1491ffbb2(void)

longlong FUN_1491ffbb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x160;
  FUN_145e1d7da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491ffc18 FUN_1491ffc18 body=63 status=ok
// SIG undefined FUN_1491ffc18(void)

undefined1 FUN_1491ffc18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491ffe0a(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 1491ffc80 FUN_1491ffc80 body=59 status=ok
// SIG undefined FUN_1491ffc80(void)

undefined8 FUN_1491ffc80(longlong *param_1)

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



// FUNCTION 1491ffccc FUN_1491ffccc body=40 status=ok
// SIG undefined FUN_1491ffccc(void)

void FUN_1491ffccc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_1491912a0(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 1491ffe0a FUN_1491ffe0a body=187 status=ok
// SIG undefined FUN_1491ffe0a(void)

undefined8 * FUN_1491ffe0a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  param_1[6] = param_2[6];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 9,param_2 + 9);
  FUN_14919754a(param_1 + 0xb,param_2 + 0xb);
  FUN_140bb2e20(param_1 + 0x15,param_2 + 0x15);
  FUN_140bb2e20(param_1 + 0x1f,param_2 + 0x1f);
  param_1[0x29] = param_2[0x29];
  FUN_144a787a6(param_1 + 0x2a,param_2 + 0x2a);
  FUN_1491ffec6(param_1 + 0x2c,param_2 + 0x2c);
  return param_1;
}



// FUNCTION 1491ffec6 FUN_1491ffec6 body=88 status=ok
// SIG undefined FUN_1491ffec6(void)

undefined8 * FUN_1491ffec6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491d2aa4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491fffa6 FUN_1491fffa6 body=59 status=ok
// SIG undefined FUN_1491fffa6(void)

undefined8 FUN_1491fffa6(longlong *param_1)

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



// FUNCTION 1492000bc FUN_1492000bc body=67 status=ok
// SIG undefined FUN_1492000bc(void)

undefined1 FUN_1492000bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491c5c28(param_2,param_3);
    FUN_1491c5cf6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 149200128 FUN_149200128 body=59 status=ok
// SIG undefined FUN_149200128(void)

undefined8 FUN_149200128(longlong *param_1)

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



// FUNCTION 14920016e FUN_14920016e body=34 status=ok
// SIG undefined FUN_14920016e(void)

void FUN_14920016e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145d30608(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 149200296 FUN_149200296 body=63 status=ok
// SIG undefined FUN_149200296(void)

undefined1 FUN_149200296(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492003c0(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 1492002fe FUN_1492002fe body=59 status=ok
// SIG undefined FUN_1492002fe(void)

undefined8 FUN_1492002fe(longlong *param_1)

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



// FUNCTION 14920034a FUN_14920034a body=40 status=ok
// SIG undefined FUN_14920034a(void)

void FUN_14920034a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_145d30558(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1492003c0 FUN_1492003c0 body=77 status=ok
// SIG undefined FUN_1492003c0(void)

longlong FUN_1492003c0(longlong param_1,longlong param_2)

{
  FUN_1491c5890();
  FUN_1491c5c28(param_1 + 0x30,param_2 + 0x30);
  FUN_1491c5cf6(param_1 + 0x40,param_2 + 0x40);
  FUN_14606ee6c(param_1);
  FUN_14606ec40(param_1 + 0x30);
  return param_1;
}



// FUNCTION 14920040e FUN_14920040e body=78 status=ok
// SIG undefined FUN_14920040e(void)

longlong * FUN_14920040e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140f8ce79(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14920045c FUN_14920045c body=200 status=ok
// SIG undefined FUN_14920045c(void)

void FUN_14920045c(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  memset(param_2,0,0x140);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x60) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x68) = uVar1;
  uVar1 = DAT_14c8463d8;
  *(undefined8 *)((longlong)param_2 + 0x80) = DAT_14c8463d0;
  *(undefined8 *)((longlong)param_2 + 0x88) = uVar1;
  uVar1 = DAT_14c8463e8;
  *(undefined8 *)((longlong)param_2 + 0x90) = DAT_14c8463e0;
  *(undefined8 *)((longlong)param_2 + 0x98) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xb0) = DAT_14c846520;
  uVar1 = DAT_14c846518;
  *(undefined8 *)((longlong)param_2 + 0xa0) = DAT_14c846510;
  *(undefined8 *)((longlong)param_2 + 0xa8) = uVar1;
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)((longlong)param_2 + 0xc0);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  return;
}



// FUNCTION 149200524 FUN_149200524 body=174 status=ok
// SIG undefined FUN_149200524(void)

void FUN_149200524(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  param_2[0xe] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xc] = DAT_14c8464e0;
  param_2[0xd] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_2[0x10] = DAT_14c8463d0;
  param_2[0x11] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x12] = DAT_14c8463e0;
  param_2[0x13] = uVar1;
  uVar1 = DAT_14c846518;
  param_2[0x14] = DAT_14c846510;
  param_2[0x15] = uVar1;
  param_2[0x16] = DAT_14c846520;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x18;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  return;
}



// FUNCTION 1492005fa FUN_1492005fa body=103 status=ok
// SIG undefined FUN_1492005fa(void)

undefined8 FUN_1492005fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
    do {
      memcpy((void *)(param_2 + -0x128),(void *)(param_3 + -0x128),0x128);
      FUN_149200754(param_2,param_3);
      param_3 = param_3 + 0x140;
      param_2 = param_2 + 0x140;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14920068a FUN_14920068a body=59 status=ok
// SIG undefined FUN_14920068a(void)

undefined8 FUN_14920068a(longlong *param_1)

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



// FUNCTION 1492006d6 FUN_1492006d6 body=47 status=ok
// SIG undefined FUN_1492006d6(void)

void FUN_1492006d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    if (*(longlong *)(param_2 + 0x128) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 149200754 FUN_149200754 body=89 status=ok
// SIG undefined FUN_149200754(void)

undefined8 * FUN_149200754(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492007ae(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492007ae FUN_1492007ae body=115 status=ok
// SIG undefined FUN_1492007ae(void)

void FUN_1492007ae(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,4);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492008c2 FUN_1492008c2 body=63 status=ok
// SIG undefined FUN_1492008c2(void)

undefined1 FUN_1492008c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492019c4(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14920092a FUN_14920092a body=59 status=ok
// SIG undefined FUN_14920092a(void)

undefined8 FUN_14920092a(longlong *param_1)

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



// FUNCTION 149200976 FUN_149200976 body=40 status=ok
// SIG undefined FUN_149200976(void)

void FUN_149200976(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14920163e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1492009ec FUN_1492009ec body=38 status=ok
// SIG undefined FUN_1492009ec(void)

undefined8 FUN_1492009ec(undefined8 param_1,int param_2)

{
  FUN_14920163e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149200a46 FUN_149200a46 body=2127 status=ok
// SIG undefined FUN_149200a46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149200a46(longlong *param_1,uint param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 unaff_XMM7 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
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
  double local_1c8;
  double dStack_1c0;
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
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[2])) {
    pdVar8 = (double *)(**(code **)(*param_1 + 0x40))(param_1);
    pdVar9 = param_3;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar8 = *pdVar9;
      pdVar9 = pdVar9 + 1;
      pdVar8 = pdVar8 + 1;
    }
    iVar7 = FUN_1492016be(param_1 + 1,param_1[1] + (ulonglong)param_2 * 0x10 + 8);
    if ((iVar7 < 0) || ((int)param_1[2] <= iVar7)) {
      dVar30 = *param_3;
      dVar29 = param_3[1];
      auVar22 = *(undefined1 (*) [16])(param_3 + 2);
      local_108 = param_3[4];
      dStack_100 = param_3[5];
      local_f8 = param_3[6];
      dVar35 = param_3[7];
      dVar3 = param_3[8];
      dVar4 = param_3[9];
      dVar15 = param_3[10];
      dVar19 = param_3[0xb];
    }
    else {
      plVar12 = param_1;
      pdVar9 = (double *)(**(code **)(*param_1 + 0x18))(param_1,iVar7);
      auVar40 = _DAT_149934d80;
      dVar35 = *pdVar9;
      dVar21 = pdVar9[1];
      dVar15 = pdVar9[2];
      dVar32 = pdVar9[3];
      auVar22 = *(undefined1 (*) [16])(pdVar9 + 8);
      dVar3 = auVar22._0_8_;
      dVar4 = auVar22._8_8_;
      auVar36 = *(undefined1 (*) [16])(pdVar9 + 10);
      dVar23 = auVar36._0_8_;
      dVar19 = auVar36._8_8_;
      local_298 = *(undefined1 (*) [16])(param_3 + 8);
      local_2a8 = *(undefined1 (*) [16])(param_3 + 10);
      auVar22 = minpd(local_298,auVar22);
      auVar24 = minpd(local_2a8,auVar36);
      auVar36._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      iVar7 = movmskpd((int)pdVar9,auVar36);
      auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
      auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
      uVar10 = movmskpd((int)plVar12,auVar25);
      if ((uVar10 & 0x3fffffff) == 0 && iVar7 == 0) {
        dVar33 = *param_3;
        dVar34 = param_3[1];
        dVar20 = param_3[2];
        dVar5 = param_3[3];
        dVar30 = dVar34 * dVar15 * -1.0 + dVar20 * dVar21 + dVar35 * dVar5 * 1.0 + dVar32 * dVar33;
        dVar29 = dVar33 * dVar15 * 1.0 + dVar5 * dVar21 + dVar35 * dVar20 * -1.0 + dVar32 * dVar34;
        auVar22._0_8_ =
             dVar5 * dVar15 * 1.0 + ((dVar35 * dVar34 * 1.0 + dVar32 * dVar20) - dVar21 * dVar33);
        auVar22._8_8_ =
             dVar20 * dVar15 * -1.0 + ((dVar35 * dVar33 * -1.0 + dVar32 * dVar5) - dVar21 * dVar34);
        dVar20 = param_3[4] * dVar3;
        dVar5 = param_3[5] * dVar4;
        dVar33 = param_3[6] * dVar23;
        dVar34 = param_3[7] * dVar19;
        dVar39 = dVar5 * dVar35 - dVar21 * dVar20;
        dVar42 = dVar33 * dVar21 - dVar15 * dVar5;
        dVar37 = dVar20 * dVar15 - dVar35 * dVar33;
        dVar38 = dVar34 * dVar32 - dVar32 * dVar34;
        dVar42 = dVar42 + dVar42;
        dVar37 = dVar37 + dVar37;
        unaff_XMM7._0_8_ = dVar32 * dVar42 + dVar20;
        unaff_XMM7._8_8_ = dVar32 * dVar37 + dVar5;
        dVar39 = dVar39 + dVar39;
        dVar38 = dVar38 + dVar38;
        local_108 = pdVar9[4] + (dVar39 * dVar21 - dVar15 * dVar37) + unaff_XMM7._0_8_;
        dStack_100 = pdVar9[5] + (dVar42 * dVar15 - dVar39 * dVar35) + unaff_XMM7._8_8_;
        local_f8 = pdVar9[6] + (dVar37 * dVar35 - dVar21 * dVar42) + dVar32 * dVar39 + dVar33;
        dVar35 = pdVar9[7] + (dVar38 * dVar32 - dVar38 * dVar32) + dVar32 * dVar38 + dVar34;
        dVar3 = (double)local_298._0_8_ * dVar3;
        dVar4 = (double)local_298._8_8_ * dVar4;
        dVar15 = (double)local_2a8._0_8_ * dVar23;
        dVar19 = (double)local_2a8._8_8_ * dVar19;
      }
      else {
        dVar30 = dVar21 + dVar21;
        dVar33 = dVar15 + dVar15;
        dVar20 = dVar35 * (dVar35 + dVar35);
        local_1e8 = ((double)DAT_149934d80 - (dVar15 * dVar33 + dVar21 * dVar30)) * dVar3;
        dStack_1c0 = (DAT_149934d80._8_8_ - (dVar15 * dVar33 + dVar20)) * dVar4;
        dVar34 = (dVar35 + dVar35) * dVar32;
        local_1c8 = (dVar30 * dVar35 - dVar33 * dVar32) * dVar4;
        dVar29 = (dVar33 * dVar21 - dVar34) * dVar23;
        local_198 = (1.0 - (dVar20 + dVar21 * dVar30)) * dVar23;
        dVar15 = dVar23 * (double)local_2a8._0_8_;
        dVar19 = dVar19 * (double)local_2a8._8_8_;
        dStack_1e0 = (dVar30 * dVar35 + dVar33 * dVar32) * dVar3;
        local_1b8 = (dVar33 * dVar21 + dVar34) * dVar4;
        local_1d8 = (dVar35 * dVar33 - dVar30 * dVar32) * dVar3;
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        local_1a8._8_4_ = SUB84(dVar29,0);
        local_1a8._0_8_ = (dVar30 * dVar32 + dVar35 * dVar33) * dVar23;
        local_1a8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        uStack_190 = 0;
        uStack_170 = 0x3ff0000000000000;
        dVar35 = *param_3;
        dVar23 = param_3[1];
        dVar29 = param_3[2];
        dVar32 = dVar23 + dVar23;
        dVar33 = dVar29 + dVar29;
        dVar21 = dVar35 * (dVar35 + dVar35);
        local_218 = (1.0 - (dVar21 + dVar23 * dVar32)) * (double)local_2a8._0_8_;
        dVar30 = param_3[3];
        dVar34 = dVar33 * dVar30;
        dVar20 = (dVar35 + dVar35) * param_3[3];
        dVar30 = dVar32 * dVar30;
        local_228 = (dVar30 + *param_3 * dVar33) * (double)local_2a8._0_8_;
        dStack_220 = (dVar33 * dVar23 - dVar20) * (double)local_2a8._0_8_;
        dVar3 = dVar3 * (double)local_298._0_8_;
        dVar4 = dVar4 * (double)local_298._8_8_;
        local_268 = ((double)DAT_149934d80 - (dVar29 * dVar33 + dVar23 * dVar32)) *
                    (double)local_298._0_8_;
        dVar29 = (DAT_149934d80._8_8_ - (dVar29 * dVar33 + dVar21)) * (double)local_298._8_8_;
        dStack_260 = (dVar32 * dVar35 + dVar34) * (double)local_298._0_8_;
        local_238 = (dVar33 * dVar23 + dVar20) * (double)local_298._8_8_;
        local_258 = (*param_3 * dVar33 - dVar30) * (double)local_298._0_8_;
        uStack_250 = 0;
        local_248._8_4_ = SUB84(dVar29,0);
        local_248._0_8_ = (dVar32 * dVar35 - dVar34) * (double)local_298._8_8_;
        local_248._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = param_3[4];
        dStack_200 = param_3[5];
        local_1f8 = param_3[6];
        uStack_1f0 = 0x3ff0000000000000;
        local_188 = pdVar9[4];
        dStack_180 = pdVar9[5];
        local_178 = pdVar9[6];
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar4);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar3);
        auVar22 = blendvpd(_DAT_149936790,auVar40,auVar24);
        dVar30 = (double)(~-(ulonglong)(0.0 <= dVar15) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar15) & 0x3ff0000000000000);
        dVar29 = auVar22._0_8_;
        local_158 = local_158 * dVar29;
        local_160 = local_160 * dVar29;
        local_168 = local_168 * dVar29;
        dVar29 = auVar22._8_8_;
        local_138 = local_138 * dVar29;
        local_140 = local_140 * dVar29;
        local_148 = dVar29 * local_148;
        local_118 = local_118 * dVar30;
        local_120 = local_120 * dVar30;
        local_128 = dVar30 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar30 = local_278 * local_278 + local_288 * local_288;
        dVar29 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar26._0_8_ = dVar30 + dVar29;
        auVar26._8_8_ = dVar30 + dVar29;
        auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar22 = sqrtpd(auVar26,auVar26);
        auVar22 = divpd(auVar40,auVar22);
        unaff_XMM7._0_8_ = auVar22._0_8_ * local_278;
        unaff_XMM7._8_8_ = auVar22._8_8_ * dStack_270;
        dVar30 = (double)((ulonglong)(local_288 * auVar22._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        dVar29 = (double)((ulonglong)(dStack_280 * auVar22._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
        auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,unaff_XMM7,auVar16);
        dVar35 = 0.0;
      }
    }
    auVar24 = _DAT_149935300;
    auVar36 = _DAT_149934d80;
    dVar32 = auVar22._0_8_;
    dVar33 = auVar22._8_8_;
    dVar23 = dVar32 * dVar32 + dVar30 * dVar30;
    dVar21 = dVar33 * dVar33 + dVar29 * dVar29;
    auVar27._0_8_ = dVar23 + dVar21;
    auVar27._8_8_ = dVar23 + dVar21;
    auVar17._8_8_ = -(ulonglong)(1e-08 <= auVar27._8_8_);
    auVar17._0_8_ = -(ulonglong)(1e-08 <= auVar27._0_8_);
    auVar22 = sqrtpd(unaff_XMM7,auVar27);
    auVar40 = divpd(_DAT_149934d80,auVar22);
    auVar41._0_8_ = auVar40._0_8_ * dVar32;
    auVar41._8_8_ = auVar40._8_8_ * dVar33;
    auVar22 = blendvpd(_DAT_149935300,auVar41,auVar17);
    lVar11 = param_1[3];
    lVar6 = (ulonglong)param_2 * 0x60;
    *(ulonglong *)(lVar11 + lVar6) =
         (ulonglong)(dVar30 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar27._0_8_);
    ((ulonglong *)(lVar11 + lVar6))[1] =
         (ulonglong)(dVar29 * auVar40._8_8_) & -(ulonglong)(1e-08 <= auVar27._8_8_);
    *(undefined1 (*) [16])(lVar11 + 0x10 + lVar6) = auVar22;
    pdVar9 = (double *)(lVar11 + 0x20 + lVar6);
    *pdVar9 = local_108;
    pdVar9[1] = dStack_100;
    pdVar9 = (double *)(lVar11 + 0x30 + lVar6);
    *pdVar9 = local_f8;
    pdVar9[1] = dVar35;
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(lVar11 + 0x40 + lVar6) = auVar2;
    auVar1._8_4_ = SUB84(dVar19,0);
    auVar1._0_8_ = dVar15;
    auVar1._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])(lVar11 + 0x50 + lVar6) = auVar1;
    lVar11 = param_1[3];
    dVar3 = *(double *)(lVar11 + lVar6);
    dVar4 = ((double *)(lVar11 + lVar6))[1];
    pdVar9 = (double *)(lVar11 + 0x10 + lVar6);
    dVar19 = *pdVar9;
    dVar15 = pdVar9[1];
    auVar31._0_8_ = dVar3 * dVar3;
    auVar31._8_8_ = dVar4 * dVar4;
    dVar30 = dVar19 * dVar19 + auVar31._0_8_;
    dVar35 = dVar15 * dVar15 + auVar31._8_8_;
    dVar29 = dVar30 + dVar35;
    dVar30 = dVar30 + dVar35;
    uVar13 = -(ulonglong)(1e-08 <= dVar29);
    uVar14 = -(ulonglong)(1e-08 <= dVar30);
    auVar40._8_8_ = dVar30;
    auVar40._0_8_ = dVar29;
    auVar22 = sqrtpd(auVar31,auVar40);
    auVar22 = divpd(auVar36,auVar22);
    auVar28._0_8_ = auVar22._0_8_ * dVar19;
    auVar28._8_8_ = auVar22._8_8_ * dVar15;
    auVar18._8_8_ = uVar14;
    auVar18._0_8_ = uVar13;
    auVar36 = blendvpd(auVar24,auVar28,auVar18);
    *(ulonglong *)(lVar11 + lVar6) = (ulonglong)(dVar3 * auVar22._0_8_) & uVar13;
    ((ulonglong *)(lVar11 + lVar6))[1] = (ulonglong)(dVar4 * auVar22._8_8_) & uVar14;
    *(undefined1 (*) [16])(lVar11 + 0x10 + lVar6) = auVar36;
  }
  if ((local_e0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149201296 FUN_149201296 body=646 status=ok
// SIG undefined FUN_149201296(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149201296(longlong *param_1,uint param_2,undefined8 *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar14;
  undefined1 auVar13 [16];
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118 [13];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[2])) {
    lVar10 = (ulonglong)param_2 * 0x60;
    puVar7 = param_3;
    puVar11 = (undefined8 *)(param_1[3] + lVar10);
    for (lVar9 = 0xc; auVar2 = _DAT_149935300, auVar22 = _DAT_149934d80, lVar9 != 0;
        lVar9 = lVar9 + -1) {
      *puVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
    lVar9 = param_1[3];
    dVar12 = *(double *)(lVar9 + lVar10);
    dVar14 = ((double *)(lVar9 + lVar10))[1];
    pdVar1 = (double *)(lVar9 + 0x10 + lVar10);
    dVar4 = *pdVar1;
    dVar5 = pdVar1[1];
    dVar15 = dVar4 * dVar4 + dVar12 * dVar12;
    dVar18 = dVar5 * dVar5 + dVar14 * dVar14;
    auVar16._0_8_ = dVar15 + dVar18;
    auVar16._8_8_ = dVar15 + dVar18;
    auVar17 = sqrtpd(auVar16,auVar16);
    auVar19 = divpd(_DAT_149934d80,auVar17);
    auVar20._0_8_ = auVar19._0_8_ * dVar4;
    auVar20._8_8_ = auVar19._8_8_ * dVar5;
    auVar17._8_8_ = -(ulonglong)(1e-08 <= auVar16._8_8_);
    auVar17._0_8_ = -(ulonglong)(1e-08 <= auVar16._0_8_);
    auVar17 = blendvpd(_DAT_149935300,auVar20,auVar17);
    *(ulonglong *)(lVar9 + lVar10) =
         (ulonglong)(dVar12 * auVar19._0_8_) & -(ulonglong)(1e-08 <= auVar16._0_8_);
    ((ulonglong *)(lVar9 + lVar10))[1] =
         (ulonglong)(dVar14 * auVar19._8_8_) & -(ulonglong)(1e-08 <= auVar16._8_8_);
    *(undefined1 (*) [16])(lVar9 + 0x10 + lVar10) = auVar17;
    iVar6 = FUN_1492016be(param_1 + 1,(ulonglong)param_2 * 0x10 + param_1[1] + 8);
    if ((iVar6 < 0) || ((int)param_1[2] <= iVar6)) {
      local_178 = *(undefined4 *)param_3;
      uStack_174 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_170 = *(undefined4 *)(param_3 + 1);
      uStack_16c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_168 = (double)param_3[2];
      dStack_160 = (double)param_3[3];
      local_158 = *(undefined4 *)(param_3 + 4);
      uStack_154 = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_150 = *(undefined4 *)(param_3 + 5);
      uStack_14c = *(undefined4 *)((longlong)param_3 + 0x2c);
      local_148 = *(undefined4 *)(param_3 + 6);
      uStack_144 = *(undefined4 *)((longlong)param_3 + 0x34);
      uStack_140 = *(undefined4 *)(param_3 + 7);
      uStack_13c = *(undefined4 *)((longlong)param_3 + 0x3c);
      local_138 = *(undefined4 *)(param_3 + 8);
      uStack_134 = *(undefined4 *)((longlong)param_3 + 0x44);
      uStack_130 = *(undefined4 *)(param_3 + 9);
      uStack_12c = *(undefined4 *)((longlong)param_3 + 0x4c);
      local_128 = *(undefined4 *)(param_3 + 10);
      uStack_124 = *(undefined4 *)((longlong)param_3 + 0x54);
      uStack_120 = *(undefined4 *)(param_3 + 0xb);
      uStack_11c = *(undefined4 *)((longlong)param_3 + 0x5c);
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,iVar6);
      puVar11 = local_118;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      FUN_1449437a2(param_3,&local_178);
    }
    auVar19._0_8_ = (double)CONCAT44(uStack_174,local_178) * (double)CONCAT44(uStack_174,local_178);
    auVar19._8_8_ =
         (double)CONCAT44(uStack_16c,uStack_170) * (double)CONCAT44(uStack_16c,uStack_170);
    dVar12 = local_168 * local_168 + auVar19._0_8_;
    dVar14 = dStack_160 * dStack_160 + auVar19._8_8_;
    auVar13._0_8_ = dVar12 + dVar14;
    auVar13._8_8_ = dVar12 + dVar14;
    auVar17 = sqrtpd(auVar19,auVar13);
    auVar17 = divpd(auVar22,auVar17);
    auVar21._0_8_ = auVar17._0_8_ * local_168;
    auVar21._8_8_ = auVar17._8_8_ * dStack_160;
    uVar3 = (ulonglong)((double)CONCAT44(uStack_16c,uStack_170) * auVar17._8_8_) &
            -(ulonglong)(1e-08 <= auVar13._8_8_);
    auVar22._8_8_ = -(ulonglong)(1e-08 <= auVar13._8_8_);
    auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar13._0_8_);
    auVar22 = blendvpd(auVar2,auVar21,auVar22);
    pauVar8 = (undefined1 (*) [16])(**(code **)(*param_1 + 0x40))(param_1,param_2);
    auVar2._8_4_ = (int)uVar3;
    auVar2._0_8_ = (ulonglong)((double)CONCAT44(uStack_174,local_178) * auVar17._0_8_) &
                   -(ulonglong)(1e-08 <= auVar13._0_8_);
    auVar2._12_4_ = (int)(uVar3 >> 0x20);
    *pauVar8 = auVar2;
    pauVar8[1] = auVar22;
    *(undefined4 *)pauVar8[2] = local_158;
    *(undefined4 *)(pauVar8[2] + 4) = uStack_154;
    *(undefined4 *)(pauVar8[2] + 8) = uStack_150;
    *(undefined4 *)(pauVar8[2] + 0xc) = uStack_14c;
    *(undefined4 *)pauVar8[3] = local_148;
    *(undefined4 *)(pauVar8[3] + 4) = uStack_144;
    *(undefined4 *)(pauVar8[3] + 8) = uStack_140;
    *(undefined4 *)(pauVar8[3] + 0xc) = uStack_13c;
    *(undefined4 *)pauVar8[4] = local_138;
    *(undefined4 *)(pauVar8[4] + 4) = uStack_134;
    *(undefined4 *)(pauVar8[4] + 8) = uStack_130;
    *(undefined4 *)(pauVar8[4] + 0xc) = uStack_12c;
    *(undefined4 *)pauVar8[5] = local_128;
    *(undefined4 *)(pauVar8[5] + 4) = uStack_124;
    *(undefined4 *)(pauVar8[5] + 8) = uStack_120;
    *(undefined4 *)(pauVar8[5] + 0xc) = uStack_11c;
  }
  if ((local_b0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14920153e FUN_14920153e body=199 status=ok
// SIG undefined FUN_14920153e(void)

int FUN_14920153e(longlong param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_149201766((longlong *)(param_1 + 0x78),iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  lVar4 = (longlong)iVar1 * 0x140;
  memcpy((void *)(lVar3 + lVar4),param_2,0x128);
  *(undefined8 *)(lVar3 + 0x128 + lVar4) = 0;
  iVar2 = *(int *)((longlong)param_2 + 0x130);
  _Src = *(void **)((longlong)param_2 + 0x128);
  *(int *)(lVar3 + 0x130 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar3 + lVar4 + 0x134) = 0;
  }
  else {
    puVar5 = (undefined8 *)(lVar3 + lVar4 + 0x128);
    FUN_1492007ae(puVar5,iVar2,0);
    memcpy((void *)*puVar5,_Src,(longlong)iVar2 * 0x28);
  }
  return iVar1;
}



// FUNCTION 149201618 FUN_149201618 body=33 status=ok
// SIG undefined FUN_149201618(void)

void FUN_149201618(longlong param_1)

{
  FUN_1492018b0(param_1 + 0x78);
  FUN_149201916(param_1 + 0x78);
  return;
}



// FUNCTION 14920163e FUN_14920163e body=74 status=ok
// SIG undefined FUN_14920163e(void)

void FUN_14920163e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb88d90;
  FUN_149201688(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eba250;
  FUN_146910042(param_1 + 1);
  return;
}



// FUNCTION 149201688 FUN_149201688 body=53 status=ok
// SIG undefined FUN_149201688(void)

void FUN_149201688(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x128);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1492016be FUN_1492016be body=167 status=ok
// SIG undefined FUN_1492016be(void)

undefined4 FUN_1492016be(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          return (int)plVar1[1];
        }
        iVar6 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 149201766 FUN_149201766 body=147 status=ok
// SIG undefined FUN_149201766(void)

void FUN_149201766(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x140,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x140)) {
      uVar5 = uVar4 / 0x140 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x140,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492017fa FUN_1492017fa body=68 status=ok
// SIG undefined FUN_1492017fa(void)

void FUN_1492017fa(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_149201688(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_149201840(param_1,param_2);
  return;
}



// FUNCTION 149201840 FUN_149201840 body=112 status=ok
// SIG undefined FUN_149201840(void)

void FUN_149201840(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x140,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x140)) {
      uVar2 = uVar1 / 0x140 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x140,0x10);
  }
  return;
}



// FUNCTION 1492018b0 FUN_1492018b0 body=102 status=ok
// SIG undefined FUN_1492018b0(void)

void FUN_1492018b0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x128 + (longlong)(int)param_2 * 0x140) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x140);
    memmove(_Dst,(void *)((longlong)_Dst + 0x140),(longlong)(int)(~param_2 + iVar2) * 0x140);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 149201916 FUN_149201916 body=62 status=ok
// SIG undefined FUN_149201916(void)

void FUN_149201916(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149201954(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x140,0x10);
  }
  return;
}


