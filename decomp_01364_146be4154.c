// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146be4154 FUN_146be4154 body=45 status=ok
// SIG undefined FUN_146be4154(void)

bool FUN_146be4154(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 146be4182 FUN_146be4182 body=875 status=ok
// SIG undefined FUN_146be4182(void)

ulonglong FUN_146be4182(longlong param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                       char param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_278 [44];
  uint local_24c;
  longlong *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  uint local_220 [18];
  undefined8 local_1d8 [9];
  undefined8 local_190;
  undefined1 local_188;
  ulonglong local_184;
  undefined4 local_17c;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98 [4];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  pcVar3 = *(code **)(param_8 + 0x10);
  if (pcVar3 == (code *)0x0) {
LAB_146be41f4:
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar14 = *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(param_2 >> 9) * 8);
    uVar9 = (ulonglong)(param_2 & 0x1ff);
    uVar2 = *(uint *)(lVar14 + uVar9 * 0xc);
    lVar15 = *(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8);
    uVar13 = (ulonglong)uVar2 & 0x1ff;
    local_98[2] = *(undefined8 *)(lVar15 + 0x10 + uVar13 * 0x18);
    puVar10 = (undefined8 *)(lVar15 + uVar13 * 0x18);
    local_98[0] = *puVar10;
    local_98[1] = puVar10[1];
    uVar2 = *(uint *)(lVar14 + 4 + uVar9 * 0xc);
    lVar15 = *(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8);
    uVar13 = (ulonglong)uVar2 & 0x1ff;
    local_70 = *(undefined8 *)(lVar15 + 0x10 + uVar13 * 0x18);
    puVar10 = (undefined8 *)(lVar15 + uVar13 * 0x18);
    local_98[3] = *puVar10;
    uStack_78 = puVar10[1];
    uVar2 = *(uint *)(lVar14 + 8 + uVar9 * 0xc);
    lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8);
    uVar13 = (ulonglong)uVar2 & 0x1ff;
    local_58 = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
    puVar1 = (undefined4 *)(lVar7 + uVar13 * 0x18);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    local_190 = 0x3e45798ee2308c3a;
    local_188 = 0;
    local_184 = 0;
    local_17c = 0;
    puVar10 = local_98;
    puVar11 = local_220;
    for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8 *)puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 2;
    }
    local_228 = *(undefined4 *)(lVar14 + 8 + uVar9 * 0xc);
    local_230 = *(undefined8 *)(lVar14 + uVar9 * 0xc);
    if ((int)param_3 < (int)param_4) {
      local_248 = (longlong *)(param_8 + 0x30);
      uVar9 = 0;
      local_24c = param_2;
      do {
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                         (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar3 = *(code **)(param_8 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_146be435e:
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (ulonglong)(uVar2 >> 9) * 8)
          ;
          uVar13 = (ulonglong)(uVar2 & 0x1ff);
          local_238 = *(undefined4 *)(lVar7 + 8 + uVar13 * 0xc);
          local_240 = *(undefined8 *)(lVar7 + uVar13 * 0xc);
          if (param_6 != '\0') {
            lVar14 = 0;
            do {
              lVar15 = 0;
              do {
                if (*(int *)((longlong)&local_230 + lVar14 * 4) ==
                    *(int *)((longlong)&local_240 + lVar15 * 4)) goto LAB_146be44a7;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 3);
              lVar14 = lVar14 + 1;
            } while (lVar14 != 3);
          }
          puVar11 = (uint *)(lVar7 + uVar13 * 0xc);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
          lVar14 = *(longlong *)(lVar7 + (ulonglong)(*puVar11 >> 9) * 8);
          uVar9 = (ulonglong)*puVar11 & 0x1ff;
          local_e8[2] = *(undefined8 *)(lVar14 + 0x10 + uVar9 * 0x18);
          puVar10 = (undefined8 *)(lVar14 + uVar9 * 0x18);
          local_e8[0] = *puVar10;
          local_e8[1] = puVar10[1];
          lVar14 = *(longlong *)(lVar7 + (ulonglong)(puVar11[1] >> 9) * 8);
          uVar9 = (ulonglong)puVar11[1] & 0x1ff;
          local_c0 = *(undefined8 *)(lVar14 + 0x10 + uVar9 * 0x18);
          puVar10 = (undefined8 *)(lVar14 + uVar9 * 0x18);
          local_e8[3] = *puVar10;
          uStack_c8 = puVar10[1];
          lVar7 = *(longlong *)(lVar7 + (ulonglong)(puVar11[2] >> 9) * 8);
          uVar9 = (ulonglong)puVar11[2] & 0x1ff;
          local_a8 = *(undefined8 *)(lVar7 + 0x10 + uVar9 * 0x18);
          puVar1 = (undefined4 *)(lVar7 + uVar9 * 0x18);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          local_184 = local_184 & 0xffffffff00000000;
          puVar10 = local_e8;
          puVar12 = local_1d8;
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          uVar5 = (*(code *)*param_7)(param_7[1],local_220);
          uVar9 = (ulonglong)uVar5;
          if ((char)uVar5 != '\0') {
            if (param_5 == 0) {
              uVar9 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
              break;
            }
            FUN_146be3b36(local_220,local_24c,uVar2);
          }
        }
        else {
          local_240 = CONCAT44(local_240._4_4_,uVar2);
          plVar8 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar8 = local_248;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar4 = (*pcVar3)(uVar6,&local_240);
          if (cVar4 != '\0') goto LAB_146be435e;
        }
LAB_146be44a7:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_146be44b5;
    }
  }
  else {
    plVar8 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_8 + 0x20);
    }
    local_220[0] = param_2;
    uVar6 = (**(code **)(*plVar8 + 8))();
    cVar4 = (*pcVar3)(uVar6,local_220);
    if (cVar4 != '\0') goto LAB_146be41f4;
  }
  uVar9 = 0;
LAB_146be44b5:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 146be44ee FUN_146be44ee body=1887 status=ok
// SIG undefined FUN_146be44ee(void)

ulonglong FUN_146be44ee(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined1 param_5,uint param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined3 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint7 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uVar15;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (-1 < (int)param_2) {
    uVar15 = (ulonglong)param_2;
    uVar12 = param_2 >> 9;
    uVar13 = param_2 & 0x1ff;
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar12 * 8) +
                      (ulonglong)uVar13 * 4);
    if ((int)param_3 < 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x70) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
    }
    iVar19 = *(int *)(param_1 + 200);
    if ((iVar19 <= (int)uVar10) || (iVar19 <= (int)uVar21)) {
      if (iVar19 <= (int)uVar10) {
        bVar22 = (param_6 & 0x80000001) == 1;
        if ((-1 < (int)param_3) || (bVar22 && iVar19 <= (int)uVar21)) {
          if (!bVar22 || iVar19 > (int)uVar21) {
            uVar15 = (ulonglong)param_3;
            uVar21 = uVar10;
          }
          uVar12 = (uint)(uVar15 >> 9);
          uVar13 = (uint)uVar15 & 0x1ff;
          goto LAB_146be46eb;
        }
        uVar12 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar16 = (uint7)(uint3)(param_2 >> 8);
        if ((int)uVar12 < 0) {
          local_100 = *param_7;
          local_148 = &local_100;
          local_f8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_146be44ee(param_1,~uVar12,0xffffffff,param_4);
joined_r0x000146be4bd7:
          uVar17 = (ulonglong)uVar10;
          if ((param_4 == 0) && (uVar15 = CONCAT71(uVar16,1), (char)uVar10 != '\0'))
          goto LAB_146be4683;
        }
        else {
          iVar20 = uVar12 - 1;
          iVar19 = *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                           (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          local_110 = *param_7;
          local_148 = &local_110;
          local_108 = param_7[1];
          iVar18 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          uVar9 = FUN_146be44ee(param_1,iVar20,0xffffffff,param_4);
          uVar15 = CONCAT71(uVar16,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_146be4683;
          uVar10 = iVar19 - 1;
          local_120 = *param_7;
          local_148 = &local_120;
          local_118 = param_7[1];
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          bVar14 = FUN_146be44ee(param_1,uVar10,0xffffffff,param_4);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar14 = (byte)uVar9 | bVar14;
          if ((param_4 == 0) && (bVar14 != 0)) goto LAB_146be4683;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar10 >> 9) * 8);
          lVar6 = (ulonglong)((uVar10 & 0x1ff) << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar10 >> 9) * 8);
          local_98 = *(double *)(lVar3 + 0x10 + lVar6);
          dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
          local_b0 = local_98 - dVar1;
          local_a0 = *(double *)(lVar3 + 8 + lVar6);
          dVar2 = *(double *)(lVar4 + 8 + lVar6);
          local_b8 = local_a0 - dVar2;
          local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
          local_98 = local_98 + dVar1;
          local_a0 = local_a0 + dVar2;
          local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
          cVar7 = FUN_146be24be(param_1,iVar20);
          uVar17 = (ulonglong)CONCAT31(uVar5,bVar14);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_148 = &local_130;
            local_128 = param_7[1];
            local_140 = param_8;
            local_158 = CONCAT71(local_158._1_7_,param_5);
            local_150 = iVar18;
            bVar8 = FUN_146be44ee(param_1,iVar20,uVar10,param_4);
            uVar10 = CONCAT31(uVar5,bVar14 | bVar8);
            goto joined_r0x000146be4bd7;
          }
        }
        goto LAB_146be47d0;
      }
LAB_146be46eb:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar12 << 3));
      lVar6 = (ulonglong)(uVar13 << 3) * 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar12 << 3));
      local_98 = *(double *)(lVar3 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
      local_b0 = local_98 - dVar1;
      local_a0 = *(double *)(lVar3 + 8 + lVar6);
      dVar2 = *(double *)(lVar4 + 8 + lVar6);
      local_b8 = local_a0 - dVar2;
      local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
      local_98 = local_98 + dVar1;
      local_a0 = local_a0 + dVar2;
      local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 >> 9) * 8)
                        + (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        cVar7 = FUN_146be24be(param_1,~uVar10,&local_c0);
        if (cVar7 == '\0') {
          uVar17 = 0;
        }
        else {
          local_d0 = *param_7;
          local_148 = &local_d0;
          local_c8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_146be44ee(param_1,~uVar10,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if (param_4 == 0) {
            bVar14 = (byte)uVar10;
joined_r0x000146be49d9:
            if (bVar14 != 0) goto LAB_146be492e;
          }
        }
      }
      else {
        iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
        cVar7 = FUN_146be24be(param_1,uVar10 - 1,&local_c0);
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_148 = &local_e0;
          local_d8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_146be44ee(param_1,uVar10 - 1,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if ((param_4 != 0) || ((char)uVar10 == '\0')) goto LAB_146be4953;
LAB_146be492e:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
          goto LAB_146be4683;
        }
        uVar17 = 0;
LAB_146be4953:
        iVar19 = iVar19 + -1;
        cVar7 = FUN_146be24be(param_1,iVar19,&local_c0);
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_148 = &local_f0;
          local_e8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar11 = FUN_146be44ee(param_1,iVar19,uVar15,param_4);
          bVar14 = (byte)uVar11 | (byte)uVar17;
          uVar17 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar14) & 0xffffff01;
          if (param_4 == 0) {
            bVar14 = bVar14 & 1;
            goto joined_r0x000146be49d9;
          }
        }
      }
LAB_146be47d0:
      uVar15 = uVar17;
      goto LAB_146be4683;
    }
    if ((param_3 != 0xffffffff) &&
       (iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4), 0 < iVar19)) {
      uVar12 = uVar10 + 1;
      uVar15 = 0;
      do {
        local_90 = *param_7;
        local_88 = param_7[1];
        local_140 = param_8;
        local_148 = &local_90;
        local_150 = CONCAT31(local_150._1_3_,param_5);
        local_158 = param_4;
        uVar9 = FUN_146be4182(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar12 >> 9) * 8) +
                                       (ulonglong)(uVar12 & 0x1ff) * 4),uVar21 + 1,
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0xb8) +
                                        (ulonglong)(uVar21 >> 9) * 8) +
                                      (ulonglong)(uVar21 & 0x1ff) * 4) + uVar21 + 1);
        bVar14 = (byte)uVar9 | (byte)uVar15;
        uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),bVar14);
        if ((param_4 == 0) && ((bVar14 & 1) != 0)) goto LAB_146be492e;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(iVar19 + uVar10 + 1));
      goto LAB_146be4683;
    }
  }
  uVar15 = 0;
LAB_146be4683:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 146be4c4e FUN_146be4c4e body=162 status=ok
// SIG undefined FUN_146be4c4e(void)

void FUN_146be4c4e(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [9];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = param_2 + 9;
  puVar5 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = local_b0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar1 = FUN_146bda4f4(local_b0,local_68,0x3e45798ee2308c3a);
  *(uint *)((longlong)param_2 + 0x9c) = 2 - (uint)bVar1;
  uVar3 = 7;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be4cf2 FUN_146be4cf2 body=218 status=ok
// SIG undefined FUN_146be4cf2(void)

ulonglong FUN_146be4cf2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  
  uVar4 = *(uint *)(param_1 + 0x238);
  if ((ulonglong)uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    if ((int)uVar4 < 1) {
      dVar9 = -1.79769313486232e+308;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x230);
      lVar6 = 0;
      dVar7 = -1.79769313486232e+308;
      do {
        dVar1 = *(double *)(lVar5 + lVar6);
        dVar2 = *(double *)(lVar5 + 8 + lVar6);
        dVar3 = *(double *)(lVar5 + 0x10 + lVar6);
        if ((((dVar1 != DAT_14c8464e0) || (NAN(dVar1) || NAN(DAT_14c8464e0))) ||
            (dVar2 != DAT_14c8464e8)) || (NAN(dVar2) || NAN(DAT_14c8464e8))) {
LAB_146be4d6c:
          dVar9 = (dVar3 * param_2[2] + dVar1 * *param_2 + dVar2 * param_2[1]) -
                  *(double *)(lVar5 + 0x18 + lVar6);
          if (dVar9 <= dVar7) {
            dVar9 = dVar7;
          }
        }
        else if ((dVar3 != DAT_14c8464f0) || (dVar9 = dVar7, NAN(dVar3) || NAN(DAT_14c8464f0)))
        goto LAB_146be4d6c;
        lVar6 = lVar6 + 0x20;
        dVar7 = dVar9;
      } while ((ulonglong)uVar4 << 5 != lVar6);
    }
    uVar8 = ~-(ulonglong)(dVar9 == -1.79769313486232e+308) & (ulonglong)-dVar9;
  }
  return uVar8;
}



// FUNCTION 146be4dcc FUN_146be4dcc body=37 status=ok
// SIG undefined FUN_146be4dcc(void)

void FUN_146be4dcc(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0xa0)) {
    *(undefined4 *)(param_1 + 0xa4) = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146be4df2 FUN_146be4df2 body=146 status=ok
// SIG undefined FUN_146be4df2(void)

void FUN_146be4df2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146be4e86 FUN_146be4e86 body=11 status=ok
// SIG undefined FUN_146be4e86(void)

void FUN_146be4e86(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa4) = 5;
  return;
}



// FUNCTION 146be4e92 FUN_146be4e92 body=123 status=ok
// SIG undefined FUN_146be4e92(void)

void FUN_146be4e92(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144941252(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140704066(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146be4f0e FUN_146be4f0e body=205 status=ok
// SIG undefined FUN_146be4f0e(void)

longlong FUN_146be4f0e(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1411b354a(param_1,0,0,0,0);
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0xffefffffffffffff;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x270) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x278) = uVar1;
  *(undefined8 *)(param_1 + 0x280) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x288) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x290) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x298) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2b0) = 0xffefffffffffffff;
  *(undefined2 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 0x2ba) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0x7fefffffffffffff;
  *(undefined2 *)(param_1 + 0x2c8) = 0;
  return param_1;
}



// FUNCTION 146be4fdc FUN_146be4fdc body=196 status=ok
// SIG undefined FUN_146be4fdc(void)

undefined8 FUN_146be4fdc(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_58 [40];
  int *local_30;
  uint local_28;
  uint local_24;
  int *local_20;
  uint local_18;
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(int **)(param_1 + 0x40);
  local_24 = *local_30 * 0x200 + local_30[1];
  local_28 = 0;
  if ((local_24 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_30 + 2) - 1U))) {
    uVar2 = local_24;
    uVar1 = 1;
    if ((int)local_24 < 2) {
      uVar2 = 1;
    }
    do {
      local_28 = uVar1;
      if (uVar2 == local_28) break;
      uVar1 = local_28 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_30 + 2))[local_28 >> 9] +
                                         (ulonglong)(local_28 & 0x1ff) * 2) - 1U));
  }
  local_20 = local_30;
  local_18 = local_24;
  local_14 = local_24;
  FUN_146be5300(param_2,&local_30,&local_20,param_1);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146be50a2 FUN_146be50a2 body=202 status=ok
// SIG undefined FUN_146be50a2(void)

undefined8 * FUN_146be50a2(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_3;
  local_58[0] = (longlong *)0x0;
  if (local_68[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[8] = param_1;
  FUN_146be516e(param_2,local_68);
  if (local_68[0] != 0) {
    plVar1 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be516e FUN_146be516e body=290 status=ok
// SIG undefined FUN_146be516e(void)

longlong * FUN_146be516e(longlong *param_1,longlong *param_2)

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



// FUNCTION 146be52e2 FUN_146be52e2 body=29 status=ok
// SIG undefined FUN_146be52e2(void)

undefined8 FUN_146be52e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146be5300 FUN_146be5300 body=166 status=ok
// SIG undefined FUN_146be5300(void)

undefined8 *
FUN_146be5300(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  FUN_146be516e(param_1 + 4,param_4);
  if (*(int *)(param_1 + 1) != *(int *)(param_1 + 3)) {
    pcVar1 = (code *)param_1[4];
    plVar7 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[6];
    }
    local_24 = *(int *)(param_1 + 1);
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar1)(uVar6,&local_24);
    if (cVar5 == '\0') {
      FUN_146be53a8(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be53a8 FUN_146be53a8 body=174 status=ok
// SIG undefined FUN_146be53a8(void)

void FUN_146be53a8(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  do {
    uVar5 = *(uint *)(param_1 + 1);
    do {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 1) = uVar5;
      if (*(int *)((longlong)param_1 + 0xc) <= (int)uVar5) break;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(*param_1 + 8) +
                                           (ulonglong)(uVar5 >> 9) * 8) +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    if (*(uint *)(param_1 + 3) == uVar5) break;
    pcVar1 = (code *)param_1[4];
    plVar4 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar4 = param_1 + 8;
    }
    local_2c = uVar5;
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3,&local_2c);
  } while (cVar2 == '\0');
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be5458 FUN_146be5458 body=96 status=ok
// SIG undefined FUN_146be5458(void)

void FUN_146be5458(longlong param_1,int param_2)

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



// FUNCTION 146be54b8 FUN_146be54b8 body=132 status=ok
// SIG undefined FUN_146be54b8(void)

void FUN_146be54b8(longlong param_1,int param_2)

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



// FUNCTION 146be553e FUN_146be553e body=176 status=ok
// SIG undefined FUN_146be553e(void)

void FUN_146be553e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_2 + 0x140);
  iVar5 = *(int *)(param_2 + 0x144);
  if (0 < iVar4 * 0x200 + iVar5) {
    uVar7 = 0;
    do {
      uVar6 = (ulonglong)(uVar7 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar7 >> 9) * 8) +
                             uVar6 * 2) - 1U) < 0xfffe) {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
        uVar1 = *(undefined4 *)(lVar3 + 4 + uVar6 * 0xc);
        uVar2 = *(undefined4 *)(lVar3 + 8 + uVar6 * 0xc);
        FUN_146b9cc7c(param_1,*(undefined4 *)(lVar3 + uVar6 * 0xc),uVar1);
        FUN_146b9cc7c(param_1,uVar1,uVar2);
        iVar4 = *(int *)(param_2 + 0x140);
        iVar5 = *(int *)(param_2 + 0x144);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar4 * 0x200 + iVar5);
  }
  return;
}



// FUNCTION 146be55ee FUN_146be55ee body=190 status=ok
// SIG undefined FUN_146be55ee(void)

undefined8 FUN_146be55ee(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (0 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)) {
    uVar5 = 0xffffffff;
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      uVar1 = uVar5;
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x28) + (uVar3 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar6 = *param_1;
        uVar8 = (ulonglong)*(uint *)(lVar6 + uVar3 * 4);
        uVar7 = uVar3;
        if (uVar3 != uVar8) {
          puVar4 = (uint *)(lVar6 + uVar3 * 4);
          do {
            *puVar4 = *(uint *)(lVar6 + (longlong)(int)uVar8 * 4);
            lVar6 = *param_1;
            uVar2 = *(uint *)(lVar6 + uVar7 * 4);
            uVar7 = (ulonglong)(int)uVar2;
            puVar4 = (uint *)(lVar6 + uVar7 * 4);
            uVar8 = (ulonglong)*puVar4;
          } while (*puVar4 != uVar2);
        }
        if (((2 < *(int *)(param_1[2] + uVar7 * 4)) && (uVar1 = uVar2, uVar5 != 0xffffffff)) &&
           (uVar1 = uVar5, uVar5 != uVar2)) {
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
      }
      uVar5 = uVar1;
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 <
             (longlong)(*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)));
  }
  return 0;
}



// FUNCTION 146be56ac FUN_146be56ac body=771 status=ok
// SIG undefined FUN_146be56ac(void)

void FUN_146be56ac(longlong *param_1,undefined8 *param_2,double param_3,int param_4)

{
  double *pdVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_1a8 [32];
  code **local_188;
  undefined1 **local_180;
  undefined8 *local_178;
  uint *local_170;
  double dStack_168;
  double local_160;
  undefined1 *local_158;
  undefined8 **local_150;
  undefined8 local_148;
  uint local_140;
  undefined4 local_13c;
  code *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  double local_118;
  double dStack_110;
  double local_108;
  uint local_100;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  _RTL_CRITICAL_SECTION local_a8;
  double local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar2 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  InitializeCriticalSection(&local_a8);
  SetCriticalSectionSpinCount(&local_a8,4000);
  local_78 = 0xffffffff;
  local_100 = 0;
  local_80 = param_3 * 3.0;
  if (0 < *(int *)(param_2 + 4) * 0x200 + *(int *)((longlong)param_2 + 0x24)) {
    do {
      uVar6 = (uint)uVar2;
      if ((-1 < (int)uVar6) &&
         ((ushort)(*(short *)(*(longlong *)(param_2[5] + (uVar2 >> 9) * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        lVar3 = *param_1;
        uVar4 = *(uint *)(lVar3 + uVar2 * 4);
        if (uVar4 != uVar6) {
          puVar5 = (uint *)(lVar3 + uVar2 * 4);
          do {
            *puVar5 = *(uint *)(lVar3 + (longlong)(int)uVar4 * 4);
            lVar3 = *param_1;
            uVar6 = *(uint *)(lVar3 + uVar2 * 4);
            uVar2 = (ulonglong)(int)uVar6;
            puVar5 = (uint *)(lVar3 + uVar2 * 4);
            uVar4 = *puVar5;
          } while (uVar4 != uVar6);
        }
        if ((param_4 < 1) || (param_4 <= *(int *)(param_1[2] + uVar2 * 4))) {
          local_13c = *(undefined4 *)(param_2 + 10);
          lVar3 = *(longlong *)(param_2[2] + (ulonglong)(local_100 >> 9) * 8);
          pdVar1 = (double *)(lVar3 + (ulonglong)(local_100 & 0x1ff) * 0x18);
          local_170 = (uint *)*pdVar1;
          dStack_168 = pdVar1[1];
          local_160 = *(double *)(lVar3 + 0x10 + (ulonglong)(local_100 & 0x1ff) * 0x18);
          local_128 = &LAB_146be62c8;
          local_138 = FUN_146be62cc;
          local_158 = &LAB_146be62fc;
          local_180 = &local_128;
          local_188 = &local_138;
          local_178 = param_2;
          local_150 = &local_178;
          local_148 = param_1;
          local_140 = uVar6;
          local_130 = &local_148;
          local_120 = local_fc;
          local_118 = (double)local_170;
          dStack_110 = dStack_168;
          local_108 = local_160;
          FUN_146be5fbe(&local_f8,&local_118,(ulonglong)(local_100 >> 9),&local_158);
          auVar7._0_8_ = local_108 / local_80;
          auVar7._8_8_ = 0;
          auVar7 = roundsd(auVar7,auVar7,9);
          local_140 = (uint)auVar7._0_8_;
          auVar9._0_8_ = dStack_110 / local_80;
          auVar9._8_8_ = 0;
          auVar9 = roundsd(auVar9,auVar9,9);
          auVar8._0_8_ = local_118 / local_80;
          auVar8._8_8_ = 0;
          auVar7 = roundsd(auVar8,auVar8,9);
          local_148 = (longlong *)CONCAT44((int)auVar9._0_8_,(int)auVar7._0_8_);
          local_170 = &local_100;
          local_178 = &local_148;
          FUN_146be634e(&local_f8,local_fc,&local_178,0);
        }
      }
      local_100 = local_100 + 1;
      uVar2 = (ulonglong)local_100;
    } while ((int)local_100 < *(int *)(param_2 + 4) * 0x200 + *(int *)((longlong)param_2 + 0x24));
  }
  FUN_146be6294(&local_f8);
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be59b0 FUN_146be59b0 body=981 status=ok
// SIG undefined FUN_146be59b0(void)

void FUN_146be59b0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar10 = *(int *)(param_2 + 0x20);
  iVar12 = *(int *)(param_2 + 0x24);
  if (iVar10 * 0x200 + iVar12 < 1) {
    uStack_f0 = local_98 + 2;
    local_f8 = (longlong *)&DAT_100000000;
    local_e8 = (longlong *)&DAT_ffffffff;
    uStack_e0 = (longlong *)((ulonglong)uStack_e0 & 0xffffffff00000000);
  }
  else {
    uVar19 = 0;
    do {
      uVar7 = uVar19 >> 9 & 0x7fffff;
      uVar14 = (uint)uVar19 & 0x1ff;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar7 * 8) +
                             (ulonglong)uVar14 * 2) - 1U) < 0xfffe) {
        lVar11 = *param_1;
        uVar17 = (ulonglong)*(uint *)(lVar11 + uVar19 * 4);
        uVar13 = uVar19 & 0xffffffff;
        uVar16 = uVar19;
        if (uVar19 != uVar17) {
          puVar18 = (uint *)(lVar11 + uVar19 * 4);
          do {
            *puVar18 = *(uint *)(lVar11 + (longlong)(int)uVar17 * 4);
            lVar11 = *param_1;
            uVar3 = *(uint *)(lVar11 + uVar16 * 4);
            uVar13 = (ulonglong)uVar3;
            uVar16 = (ulonglong)(int)uVar3;
            puVar18 = (uint *)(lVar11 + uVar16 * 4);
            uVar17 = (ulonglong)*puVar18;
          } while (*puVar18 != uVar3);
        }
        local_9c = (undefined4)uVar13;
        if (2 < *(int *)(param_1[2] + uVar16 * 4)) {
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar7 * 8);
          local_e8 = *(longlong **)(lVar11 + 0x10 + (ulonglong)uVar14 * 0x18);
          puVar1 = (undefined8 *)(lVar11 + (ulonglong)uVar14 * 0x18);
          local_f8 = (longlong *)*puVar1;
          uStack_f0 = (longlong *)puVar1[1];
          local_d0 = (longlong *)0x7fefffffffffffff;
          uStack_c8 = (longlong *)0x7fefffffffffffff;
          local_c0 = (longlong *)0x7fefffffffffffff;
          uStack_b8 = (longlong *)0xffefffffffffffff;
          local_b0 = (longlong *)0xffefffffffffffff;
          local_a8 = 0xffefffffffffffff;
          uVar8 = FUN_146be67cc(local_98,uVar13,&local_9c,&local_d0);
          FUN_146ba5262(uVar8,&local_f8);
        }
        iVar10 = *(int *)(param_2 + 0x20);
        iVar12 = *(int *)(param_2 + 0x24);
      }
      uVar19 = uVar19 + 1;
    } while ((longlong)uVar19 < (longlong)(iVar10 * 0x200 + iVar12));
    uStack_f0 = local_98 + 2;
    local_f8 = (longlong *)&DAT_100000000;
    local_e8 = (longlong *)&DAT_ffffffff;
    uStack_e0 = (longlong *)((ulonglong)uStack_e0 & 0xffffffff00000000);
    if (local_70 != 0) {
      FUN_1449c0562(&local_f8);
    }
  }
  uStack_b8 = local_e8;
  plVar6 = uStack_b8;
  local_b0 = uStack_e0;
  uStack_c8 = local_f8;
  local_c0 = uStack_f0;
  local_d0 = local_98;
  uStack_b8._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
  bVar5 = uStack_b8._4_4_ < (int)uStack_f0[3];
  uStack_b8 = plVar6;
  if (bVar5) {
    do {
      local_f8 = local_d0;
      uStack_f0 = uStack_c8;
      local_e8 = local_c0;
      uStack_e0 = uStack_b8;
      local_d8 = local_b0;
      while( true ) {
        uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
        FUN_1449c0562(&uStack_f0);
        if ((int)local_e8[3] <= uStack_e0._4_4_) break;
        lVar11 = *local_d0;
        lVar9 = (longlong)uStack_b8._4_4_ * 0x40;
        lVar4 = *local_f8;
        lVar15 = (longlong)uStack_e0._4_4_ * 0x40;
        if (*(double *)(lVar11 + 8 + lVar9) < *(double *)(lVar4 + 0x20 + lVar15)) {
          lVar2 = lVar11 + lVar9;
          if ((((*(double *)(lVar4 + lVar15 + 8) < *(double *)(lVar2 + 0x20)) &&
               (*(double *)(lVar2 + 0x10) < *(double *)(lVar4 + 0x28 + lVar15))) &&
              (*(double *)(lVar4 + 0x10 + lVar15) < *(double *)(lVar2 + 0x28))) &&
             ((*(double *)(lVar2 + 0x18) < *(double *)(lVar4 + 0x30 + lVar15) &&
              (*(double *)(lVar4 + 0x18 + lVar15) < *(double *)(lVar2 + 0x30))))) {
            FUN_146b9cc7c(param_1,*(undefined4 *)(lVar11 + lVar9),*(undefined4 *)(lVar4 + lVar15));
          }
        }
      }
      uStack_b8 = (longlong *)CONCAT44(uStack_b8._4_4_,(uint)uStack_b8 & ~uStack_c8._4_4_);
      FUN_1449c0562(&uStack_c8);
    } while (uStack_b8._4_4_ < (int)local_c0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146be6d50(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be5d86 FUN_146be5d86 body=409 status=ok
// SIG undefined FUN_146be5d86(void)

longlong * FUN_146be5d86(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_64;
  uint *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar10 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  iVar1 = *(int *)(param_3 + 0x20);
  iVar2 = *(int *)(param_3 + 0x24);
  if (0 < iVar1 * 0x200 + iVar2) {
    uVar7 = 0;
    do {
      uVar6 = (uint)uVar7;
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_3 + 0x28) + (uVar7 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar3 = *param_1;
        uVar8 = (ulonglong)*(uint *)(lVar3 + uVar7 * 4);
        uVar5 = uVar7;
        if (uVar7 != uVar8) {
          puVar9 = (uint *)(lVar3 + uVar7 * 4);
          do {
            *puVar9 = *(uint *)(lVar3 + (longlong)(int)uVar8 * 4);
            lVar3 = *param_1;
            uVar6 = *(uint *)(lVar3 + uVar5 * 4);
            uVar5 = (ulonglong)(int)uVar6;
            puVar9 = (uint *)(lVar3 + uVar5 * 4);
            uVar8 = (ulonglong)*puVar9;
          } while (*puVar9 != uVar6);
        }
        local_64 = uVar6;
        if (2 < *(int *)(param_1[2] + uVar5 * 4)) {
          if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
            plVar4 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar4 = param_2 + 7;
            }
            iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_2[9] - 1U & uVar6) * 4);
            if (iVar1 != -1) {
              do {
                if (*(uint *)(*param_2 + (longlong)iVar1 * 0x10) == uVar6) goto LAB_146be5e6a;
                iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_2 + 8);
              } while (iVar1 != -1);
            }
          }
          local_60 = &local_64;
          local_58 = &local_68;
          local_68 = iVar10;
          FUN_140c0fbee(param_2,local_4c,&local_60,0);
          iVar10 = iVar10 + 1;
        }
LAB_146be5e6a:
        iVar1 = *(int *)(param_3 + 0x20);
        iVar2 = *(int *)(param_3 + 0x24);
      }
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)(iVar1 * 0x200 + iVar2));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146be5f20 FUN_146be5f20 body=157 status=ok
// SIG undefined FUN_146be5f20(void)

void FUN_146be5f20(longlong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  FUN_144a127d2(param_1,param_2,1);
  FUN_144a127d2(param_1 + 2,param_2 & 0xffffffff,1);
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      uVar2 = 0;
      uVar3 = 0xffffffff;
      if ((longlong)uVar1 < (longlong)(*(int *)(param_3 + 0x20) * 0x200 + *(int *)(param_3 + 0x24)))
      {
        bVar4 = (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_3 + 0x28) + (uVar1 >> 9 & 0x7fffff) * 8) +
                                   (ulonglong)((uint)uVar1 & 0x1ff) * 2) - 1U) < 0xfffe;
        uVar2 = (uint)bVar4;
        uVar3 = 0xffffffff;
        if (bVar4) {
          uVar3 = (uint)uVar1;
        }
      }
      *(uint *)(*param_1 + uVar1 * 4) = uVar3;
      *(uint *)(param_1[2] + uVar1 * 4) = uVar2;
      uVar1 = uVar1 + 1;
    } while ((param_2 & 0xffffffff) != uVar1);
  }
  return;
}



// FUNCTION 146be5fbe FUN_146be5fbe body=724 status=ok
// SIG undefined FUN_146be5fbe(void)

void FUN_146be5fbe(longlong *param_1,double *param_2,double param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 *local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = param_4;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    dVar12 = (double)param_1[0xf];
    auVar17._0_8_ = (param_2[2] - DAT_14c846520 * param_3) / dVar12;
    auVar17._8_8_ = 0;
    auVar17 = roundsd(auVar17,auVar17,9);
    auVar13._0_8_ = (DAT_14c846520 * param_3 + param_2[2]) / dVar12;
    auVar13._8_8_ = 0;
    auVar13 = roundsd(auVar13,auVar13,9);
    local_94 = (int)auVar13._0_8_;
    if ((int)auVar17._0_8_ <= local_94) {
      auVar18._0_8_ = (param_2[1] - DAT_14c846518 * param_3) / dVar12;
      auVar18._8_8_ = 0;
      auVar13 = roundsd(auVar18,auVar18,9);
      local_a0 = (int)auVar13._0_8_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (*param_2 - DAT_14c846510 * param_3) / dVar12;
      auVar13 = roundsd(ZEXT816(0),auVar16,9);
      local_98 = (int)auVar13._0_8_;
      auVar15._0_8_ = (DAT_14c846510 * param_3 + *param_2) / dVar12;
      auVar15._8_8_ = 0;
      auVar16 = roundsd(auVar15,auVar15,9);
      auVar14._0_8_ = (DAT_14c846518 * param_3 + param_2[1]) / dVar12;
      auVar14._8_8_ = 0;
      auVar13 = roundsd(ZEXT816(0),auVar14,9);
      local_9c = (int)auVar13._0_8_;
      iVar9 = (int)auVar17._0_8_;
      do {
        iVar6 = local_a0;
        if (local_a0 <= local_9c) {
          do {
            iVar10 = local_98;
            if (local_98 <= (int)auVar16._0_8_) {
              do {
                local_88 = iVar10;
                local_84 = iVar6;
                local_80 = iVar9;
                if ((int)param_1[9] != 0) {
                  iVar2 = FUN_1448eb174(&local_88,0xc,0);
                  plVar4 = (longlong *)param_1[8];
                  if ((longlong *)param_1[8] == (longlong *)0x0) {
                    plVar4 = param_1 + 7;
                  }
                  iVar2 = *(int *)((longlong)plVar4 +
                                  ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
                  if (iVar2 != -1) {
                    lVar3 = *param_1;
                    do {
                      lVar7 = (longlong)iVar2;
                      iVar5 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
                      if (((*(int *)(lVar3 + lVar7 * 0x18) == local_88) &&
                          (lVar7 = lVar3 + lVar7 * 0x18, *(int *)(lVar7 + 4) == local_84)) &&
                         (*(int *)(lVar7 + 8) == local_80)) goto LAB_146be621a;
                      iVar2 = iVar5;
                    } while (iVar5 != -1);
                  }
                }
LAB_146be61c9:
                bVar11 = iVar10 != (int)auVar16._0_8_;
                iVar10 = iVar10 + 1;
              } while (bVar11);
            }
            bVar11 = iVar6 != local_9c;
            iVar6 = iVar6 + 1;
          } while (bVar11);
        }
        bVar11 = iVar9 != local_94;
        iVar9 = iVar9 + 1;
      } while (bVar11);
    }
  }
LAB_146be6048:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146be621a:
  puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18 + 0xc);
  cVar1 = (*(code *)*param_6)(param_6[1],puVar8);
  if ((cVar1 == '\0') &&
     (dVar12 = (double)(*(code *)*local_90)(local_90[1],puVar8), dVar12 < param_3 * param_3)) {
    local_7c = *puVar8;
    local_78 = dVar12;
    cVar1 = (*(code *)*param_5)(param_5[1],&local_7c);
    if (cVar1 == '\0') goto LAB_146be6048;
  }
  if (iVar5 == -1) goto LAB_146be61c9;
  lVar3 = *param_1;
  iVar2 = iVar5;
  while( true ) {
    lVar7 = (longlong)iVar2;
    iVar5 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
    if (((*(int *)(lVar3 + lVar7 * 0x18) == local_88) &&
        (lVar7 = lVar3 + lVar7 * 0x18, *(int *)(lVar7 + 4) == local_84)) &&
       (*(int *)(lVar7 + 8) == local_80)) break;
    iVar2 = iVar5;
    if (iVar5 == -1) goto LAB_146be61c9;
  }
  goto LAB_146be621a;
}



// FUNCTION 146be6294 FUN_146be6294 body=51 status=ok
// SIG undefined FUN_146be6294(void)

void FUN_146be6294(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146be6714(param_1);
  return;
}



// FUNCTION 146be62cc FUN_146be62cc body=48 status=ok
// SIG undefined FUN_146be62cc(void)

undefined4 FUN_146be62cc(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = FUN_146b9cc7c(lVar1,(int)param_1[1],*param_2);
  iVar2 = *(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar2 * 4);
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 < *(int *)((longlong)param_1 + 0xc));
}



// FUNCTION 146be634e FUN_146be634e body=286 status=ok
// SIG undefined FUN_146be634e(void)

undefined4 *
FUN_146be634e(longlong param_1,undefined4 *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146be646e(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_48 = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = *puVar2;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  uVar3 = FUN_1448eb174(local_48,0xc,0);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar7 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    *(uint *)((longlong)local_48 + 0x14) = uVar3;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(local_48 + 2) =
         *(undefined4 *)
          (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_50[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_146be6554(param_1);
  }
  *param_2 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be646e FUN_146be646e body=230 status=ok
// SIG undefined FUN_146be646e(void)

int * FUN_146be646e(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 146be6554 FUN_146be6554 body=446 status=ok
// SIG undefined FUN_146be6554(void)

void FUN_146be6554(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1448eb174(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be6714 FUN_146be6714 body=54 status=ok
// SIG undefined FUN_146be6714(void)

void FUN_146be6714(longlong *param_1)

{
  FUN_146be674a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be674a FUN_146be674a body=128 status=ok
// SIG undefined FUN_146be674a(void)

void FUN_146be674a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146be67cc FUN_146be67cc body=188 status=ok
// SIG undefined FUN_146be67cc(void)

longlong FUN_146be67cc(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  int *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_146be686b;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_146be688a(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_146be686b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146be688a FUN_146be688a body=295 status=ok
// SIG undefined FUN_146be688a(void)

undefined4 * FUN_146be688a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
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
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146be69b2(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  uVar9 = puVar1[8];
  uVar10 = puVar1[9];
  uVar11 = puVar1[10];
  uVar12 = puVar1[0xb];
  local_40[2] = *puVar1;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = uVar4;
  local_40[6] = uVar5;
  local_40[7] = uVar6;
  local_40[8] = uVar7;
  local_40[9] = uVar8;
  local_40[10] = uVar9;
  local_40[0xb] = uVar10;
  local_40[0xc] = uVar11;
  local_40[0xd] = uVar12;
  local_40[0xe] = 0xffffffff;
  cVar13 = FUN_146be6a98(param_1,param_3,local_40,local_48);
  if (cVar13 == '\0') {
    uVar14 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar16 = 1;
    if (3 < uVar14) {
      uVar15 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar16 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0xf] = param_3;
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(undefined4 *)
            (lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar16;
      FUN_146be6ba8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be69b2 FUN_146be69b2 body=229 status=ok
// SIG undefined FUN_146be69b2(void)

int * FUN_146be69b2(longlong *param_1,int *param_2)

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



// FUNCTION 146be6a98 FUN_146be6a98 body=157 status=ok
// SIG undefined FUN_146be6a98(void)

undefined8 FUN_146be6a98(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146be6b36(iVar2,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 146be6b36 FUN_146be6b36 body=114 status=ok
// SIG undefined FUN_146be6b36(void)

void FUN_146be6b36(longlong *param_1,int param_2)

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



// FUNCTION 146be6ba8 FUN_146be6ba8 body=422 status=ok
// SIG undefined FUN_146be6ba8(void)

void FUN_146be6ba8(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146be6d50 FUN_146be6d50 body=52 status=ok
// SIG undefined FUN_146be6d50(void)

void FUN_146be6d50(longlong *param_1)

{
  FUN_146be6d84();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be6d84 FUN_146be6d84 body=89 status=ok
// SIG undefined FUN_146be6d84(void)

void FUN_146be6d84(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 146be6dde FUN_146be6dde body=132 status=ok
// SIG undefined FUN_146be6dde(void)

void FUN_146be6dde(longlong param_1,int param_2)

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



// FUNCTION 146be6e63 FUN_146be6e63 body=68 status=ok
// SIG undefined FUN_146be6e63(void)

void FUN_146be6e63(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_146ba12c2(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146be6ea8 FUN_146be6ea8 body=322 status=ok
// SIG undefined FUN_146be6ea8(void)

void FUN_146be6ea8(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 146be6fec FUN_146be6fec body=162 status=ok
// SIG undefined FUN_146be6fec(void)

undefined8 * FUN_146be6fec(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x40);
  uVar3 = *piVar1 * 0x200 + piVar1[1];
  uVar4 = 0;
  if ((uVar3 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(piVar1 + 2) - 1U))) {
    uVar2 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar5 = uVar3;
    }
    do {
      uVar6 = uVar2;
      uVar4 = uVar5;
      if (uVar5 == uVar6) break;
      uVar2 = uVar6 + 1;
      uVar4 = uVar6;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(piVar1 + 2))[uVar6 >> 9] +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  }
  param_2[4] = 0;
  param_2[2] = 0;
  *param_2 = piVar1;
  *(uint *)(param_2 + 1) = uVar4;
  *(uint *)((longlong)param_2 + 0xc) = uVar3;
  FUN_146be715a(param_2 + 2,param_1);
  return param_2;
}



// FUNCTION 146be708e FUN_146be708e body=202 status=ok
// SIG undefined FUN_146be708e(void)

undefined8 * FUN_146be708e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_3;
  local_58[0] = (longlong *)0x0;
  if (local_68[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[8] = param_1;
  FUN_146be715a(param_2,local_68);
  if (local_68[0] != 0) {
    plVar1 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be715a FUN_146be715a body=290 status=ok
// SIG undefined FUN_146be715a(void)

longlong * FUN_146be715a(longlong *param_1,longlong *param_2)

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



// FUNCTION 146be72dc FUN_146be72dc body=29 status=ok
// SIG undefined FUN_146be72dc(void)

undefined8 FUN_146be72dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146be72fa FUN_146be72fa body=254 status=ok
// SIG undefined FUN_146be72fa(void)

void FUN_146be72fa(longlong *param_1,uint param_2,longlong *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if ((int)param_1[9] != 0) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar6 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar8 = iVar9, iVar8 != -1) {
      lVar7 = *param_1;
      iVar9 = *(int *)(lVar7 + 8 + (longlong)iVar8 * 0x10);
      if (*(uint *)(lVar7 + (longlong)iVar8 * 0x10) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) =
               *(undefined4 *)((longlong)iVar8 * 0x10 + lVar7 + 4);
          do {
            iVar8 = iVar9;
            if (iVar8 == -1) goto LAB_146be73aa;
            lVar7 = *param_1;
            iVar9 = *(int *)(lVar7 + 8 + (longlong)iVar8 * 0x10);
          } while (*(uint *)(lVar7 + (longlong)iVar8 * 0x10) != param_2);
        } while( true );
      }
    }
  }
LAB_146be73aa:
  if (param_4 != '\0') {
    uVar2 = *(uint *)(param_3 + 1);
    lVar7 = (longlong)(int)uVar2;
    if (1 < lVar7) {
      puVar4 = (undefined4 *)*param_3;
      lVar10 = 0;
      puVar5 = puVar4;
      do {
        uVar3 = *puVar5;
        *puVar5 = puVar4[lVar7 + lVar10 + -1];
        puVar4[lVar7 + lVar10 + -1] = uVar3;
        lVar10 = lVar10 + -1;
        puVar5 = puVar5 + 1;
      } while (-lVar10 != (ulonglong)(uVar2 >> 1));
    }
  }
  return;
}



// FUNCTION 146be73f8 FUN_146be73f8 body=125 status=ok
// SIG undefined FUN_146be73f8(void)

int FUN_146be73f8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)param_2 & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar2 + uVar4 * 4);
    if (iVar1 != -1) {
      piVar3 = (int *)((longlong)plVar2 + uVar4 * 4);
      iVar5 = 0;
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_146be7476(param_1);
          iVar5 = iVar5 + 1;
        }
        else {
          piVar3 = (int *)(*param_1 + (longlong)iVar1 * 0x10 + 8);
        }
        iVar1 = *piVar3;
      } while (iVar1 != -1);
    }
  }
  return iVar5;
}



// FUNCTION 146be7476 FUN_146be7476 body=96 status=ok
// SIG undefined FUN_146be7476(void)

void FUN_146be7476(longlong *param_1,int param_2)

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
  FUN_1406ea140(param_1,param_2,1);
  return;
}



// FUNCTION 146be74d6 FUN_146be74d6 body=52 status=ok
// SIG undefined FUN_146be74d6(void)

void FUN_146be74d6(longlong *param_1)

{
  FUN_146be750a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be750a FUN_146be750a body=332 status=ok
// SIG undefined FUN_146be750a(void)

void FUN_146be750a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (lVar2 != 0) {
        FUN_146ba12c2(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 146be7657 FUN_146be7657 body=43 status=ok
// SIG undefined FUN_146be7657(void)

void FUN_146be7657(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 146be7682 FUN_146be7682 body=52 status=ok
// SIG undefined FUN_146be7682(void)

void FUN_146be7682(longlong *param_1)

{
  FUN_146be76b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be76b6 FUN_146be76b6 body=317 status=ok
// SIG undefined FUN_146be76b6(void)

void FUN_146be76b6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x48 + (longlong)iStack_4c * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be77f4 FUN_146be77f4 body=43 status=ok
// SIG undefined FUN_146be77f4(void)

void FUN_146be77f4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 146be7820 FUN_146be7820 body=113 status=ok
// SIG undefined FUN_146be7820(void)

void FUN_146be7820(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 146be7892 FUN_146be7892 body=133 status=ok
// SIG undefined FUN_146be7892(void)

void FUN_146be7892(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1448eb174(param_2,8,0);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(lVar1 + lVar4 * 0x14) == *param_2) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x14) == param_2[1])) {
          FUN_146be7918(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146be7918 FUN_146be7918 body=93 status=ok
// SIG undefined FUN_146be7918(void)

void FUN_146be7918(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_146be7976(param_1,param_2,1);
  return;
}



// FUNCTION 146be7976 FUN_146be7976 body=138 status=ok
// SIG undefined FUN_146be7976(void)

void FUN_146be7976(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146be7a00 FUN_146be7a00 body=323 status=ok
// SIG undefined FUN_146be7a00(void)

undefined4 * FUN_146be7a00(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146be7b44(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1448eb174(local_40,8,0);
  local_58 = 0;
  cVar2 = FUN_146be7c2a(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)(local_40 + 2) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146be7ccc(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be7b44 FUN_146be7b44 body=230 status=ok
// SIG undefined FUN_146be7b44(void)

int * FUN_146be7b44(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 146be7c2a FUN_146be7c2a body=162 status=ok
// SIG undefined FUN_146be7c2a(void)

void FUN_146be7c2a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_146be7976(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_146be7c9c;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_146be7c9c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 146be7ccc FUN_146be7ccc body=446 status=ok
// SIG undefined FUN_146be7ccc(void)

void FUN_146be7ccc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x14;
        iVar6 = FUN_1448eb174(lVar2,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be7e8c FUN_146be7e8c body=54 status=ok
// SIG undefined FUN_146be7e8c(void)

void FUN_146be7e8c(longlong *param_1)

{
  FUN_146be7ec2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be7ec2 FUN_146be7ec2 body=128 status=ok
// SIG undefined FUN_146be7ec2(void)

void FUN_146be7ec2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146be7f44 FUN_146be7f44 body=357 status=ok
// SIG undefined FUN_146be7f44(void)

void FUN_146be7f44(int *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    local_38 = *param_2;
    iVar6 = (int)((ulonglong)local_38 >> 0x20);
    if (iVar6 < (int)local_38) {
      local_38 = CONCAT44((int)local_38,iVar6);
    }
    plVar3 = *(longlong **)(param_1 + 2);
    uVar4 = FUN_1448eb174(&local_38,8,0);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar7 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar3[8];
      }
      iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar3[9] - 1U & uVar4) * 4);
      if (iVar6 != -1) {
        lVar8 = *plVar3;
        do {
          lVar9 = (longlong)iVar6;
          if ((*(int *)(lVar8 + lVar9 * 0x14) == (int)local_38) &&
             (*(int *)(lVar8 + 4 + lVar9 * 0x14) == local_38._4_4_)) goto LAB_146be7fd7;
          iVar6 = *(int *)(lVar8 + lVar9 * 0x14 + 0xc);
        } while (iVar6 != -1);
      }
    }
    plVar3 = *(longlong **)(param_1 + 4);
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    iVar6 = (int)plVar3[1];
    lVar8 = (longlong)iVar6;
    *(uint *)(plVar3 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar6 + 1U) {
      FUN_146be863c(plVar3,iVar6);
    }
    lVar9 = *plVar3;
    *(undefined4 *)(lVar9 + lVar8 * 0xc) = uVar2;
    *(undefined4 *)(lVar9 + 4 + lVar8 * 0xc) = uVar1;
    *(undefined4 *)(lVar9 + 8 + lVar8 * 0xc) = 1;
  }
  else {
    iVar5 = FUN_146be8560(*(undefined8 *)(param_1 + 6),*param_2);
    plVar3 = *(longlong **)(param_1 + 4);
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    iVar6 = (int)plVar3[1];
    lVar8 = (longlong)iVar6;
    *(uint *)(plVar3 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar6 + 1U) {
      FUN_146be863c(plVar3,iVar6);
    }
    lVar9 = *plVar3;
    *(undefined4 *)(lVar9 + lVar8 * 0xc) = uVar2;
    *(undefined4 *)(lVar9 + 4 + lVar8 * 0xc) = uVar1;
    *(int *)(lVar9 + 8 + lVar8 * 0xc) = iVar5 + param_3;
  }
LAB_146be7fd7:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be80aa FUN_146be80aa body=288 status=ok
// SIG undefined FUN_146be80aa(void)

void FUN_146be80aa(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar5) || (uStack_48 != plVar1)) {
    do {
      lVar3 = *local_78;
      lVar4 = (longlong)iStack_5c;
      iVar2 = *(int *)(lVar3 + 8 + lVar4 * 0x14);
      if (((iVar2 != -1) && (iVar2 <= *(int *)(lVar3 + lVar4 * 0x14))) &&
         (iVar2 <= *(int *)(lVar3 + 4 + lVar4 * 0x14))) {
        FUN_146be8c22(param_2,lVar3 + lVar4 * 0x14);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be81cc FUN_146be81cc body=403 status=ok
// SIG undefined FUN_146be81cc(void)

void FUN_146be81cc(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x14 + -0x10);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146be8360 FUN_146be8360 body=132 status=ok
// SIG undefined FUN_146be8360(void)

longlong FUN_146be8360(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_146be83e6();
  if (lVar1 == 0) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_146be843e(param_1,&local_2c,param_2);
    lVar1 = *param_1 + (longlong)local_2c * 0x14;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 146be83e6 FUN_146be83e6 body=87 status=ok
// SIG undefined FUN_146be83e6(void)

int * FUN_146be83e6(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x14) == param_3[1])
           ) {
          return piVar1;
        }
        iVar2 = piVar1[3];
      } while (iVar2 != -1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 146be843e FUN_146be843e body=288 status=ok
// SIG undefined FUN_146be843e(void)

undefined4 * FUN_146be843e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146be7b44(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_146be7c2a(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
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
      *(uint *)(local_40 + 2) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_146be7ccc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be8560 FUN_146be8560 body=219 status=ok
// SIG undefined FUN_146be8560(void)

int FUN_146be8560(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar5 = -1;
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  local_28 = param_2;
  if (iVar6 < (int)param_2) {
    local_28 = CONCAT44((int)param_2,iVar6);
    iVar5 = 1;
  }
  param_1 = (longlong *)*param_1;
  iVar6 = 0;
  uVar2 = FUN_1448eb174(&local_28,8,0);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar3 * 0x14);
        if ((*piVar1 == (int)local_28) &&
           (*(int *)(*param_1 + 4 + (longlong)iVar3 * 0x14) == local_28._4_4_)) {
          iVar6 = 0;
          if (piVar1 + 2 != (int *)0x0 && piVar1 != (int *)0x0) {
            iVar6 = iVar5 * piVar1[2];
          }
          break;
        }
        iVar3 = piVar1[3];
      } while (iVar3 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 146be863c FUN_146be863c body=147 status=ok
// SIG undefined FUN_146be863c(void)

void FUN_146be863c(longlong param_1,int param_2)

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



// FUNCTION 146be86d0 FUN_146be86d0 body=101 status=ok
// SIG undefined FUN_146be86d0(void)

int FUN_146be86d0(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x18) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x18, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 146be8736 FUN_146be8736 body=334 status=ok
// SIG undefined FUN_146be8736(void)

undefined4 *
FUN_146be8736(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146be8886(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_48 = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = *puVar2;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = FUN_1448eb174(local_48,0xc,0);
  local_68 = param_4;
  cVar3 = FUN_146be896c(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146be8a62(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be8886 FUN_146be8886 body=230 status=ok
// SIG undefined FUN_146be8886(void)

int * FUN_146be8886(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 146be896c FUN_146be896c body=107 status=ok
// SIG undefined FUN_146be896c(void)

void FUN_146be896c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar6 = FUN_146be86d0();
    if (iVar6 != -1) {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x18);
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_146be89d8(param_1,*param_4,1);
      *param_4 = iVar6;
      uVar5 = 1;
      goto LAB_146be8988;
    }
  }
  uVar5 = 0;
LAB_146be8988:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 146be89d8 FUN_146be89d8 body=138 status=ok
// SIG undefined FUN_146be89d8(void)

void FUN_146be89d8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146be8a62 FUN_146be8a62 body=446 status=ok
// SIG undefined FUN_146be8a62(void)

void FUN_146be8a62(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1448eb174(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be8c22 FUN_146be8c22 body=164 status=ok
// SIG undefined FUN_146be8c22(void)

void FUN_146be8c22(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_28 = (undefined4)*param_2;
  uStack_24 = (undefined4)((ulonglong)*param_2 >> 0x20);
  uVar1 = *param_1;
  local_2c = param_3;
  uVar4 = FUN_1448eb174(&local_2c,0xc,0);
  iVar5 = FUN_146be86d0(uVar1,uVar4,&local_2c);
  if (iVar5 == -1) {
    plVar2 = (longlong *)param_1[1];
    iVar5 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar5 + 1U) {
      FUN_146bd78c8(plVar2,iVar5);
    }
    lVar3 = *plVar2;
    *(undefined4 *)(lVar3 + 8 + (longlong)iVar5 * 0xc) = uStack_24;
    *(ulonglong *)(lVar3 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_28,local_2c);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be8cc8 FUN_146be8cc8 body=54 status=ok
// SIG undefined FUN_146be8cc8(void)

void FUN_146be8cc8(longlong *param_1)

{
  FUN_146be8cfe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be8cfe FUN_146be8cfe body=128 status=ok
// SIG undefined FUN_146be8cfe(void)

void FUN_146be8cfe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146be8d80 FUN_146be8d80 body=316 status=ok
// SIG undefined FUN_146be8d80(void)

undefined4 *
FUN_146be8d80(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146be8ebe(param_1,local_50);
  *local_48 = *param_3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = FUN_1448eb174(local_48,8,0);
  local_68 = param_4;
  cVar1 = FUN_146be8fa4(param_1,uVar2,local_48,&local_54);
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
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146be90ca(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be8ebe FUN_146be8ebe body=229 status=ok
// SIG undefined FUN_146be8ebe(void)

int * FUN_146be8ebe(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146be8fa4 FUN_146be8fa4 body=155 status=ok
// SIG undefined FUN_146be8fa4(void)

void FUN_146be8fa4(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x10;
        if ((*(int *)(lVar1 + lVar5) == *param_3) && (*(int *)(lVar1 + 4 + lVar5) == param_3[1])) {
          *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)param_3;
          FUN_146be9040(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_146be9017;
        }
        iVar4 = *(int *)((undefined8 *)(lVar1 + lVar5) + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_146be9017:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 146be9040 FUN_146be9040 body=138 status=ok
// SIG undefined FUN_146be9040(void)

void FUN_146be9040(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146be90ca FUN_146be90ca body=452 status=ok
// SIG undefined FUN_146be90ca(void)

void FUN_146be90ca(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x10;
        iVar6 = FUN_1448eb174(lVar3 + lVar10,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146be9290 FUN_146be9290 body=54 status=ok
// SIG undefined FUN_146be9290(void)

void FUN_146be9290(longlong *param_1)

{
  FUN_146be92c6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be92c6 FUN_146be92c6 body=128 status=ok
// SIG undefined FUN_146be92c6(void)

void FUN_146be92c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146be9348 FUN_146be9348 body=54 status=ok
// SIG undefined FUN_146be9348(void)

void FUN_146be9348(longlong *param_1)

{
  FUN_146be937e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be937e FUN_146be937e body=128 status=ok
// SIG undefined FUN_146be937e(void)

void FUN_146be937e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146be9400 FUN_146be9400 body=61 status=ok
// SIG undefined FUN_146be9400(void)

void FUN_146be9400(longlong *param_1)

{
  FUN_146be943e();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146be943e FUN_146be943e body=71 status=ok
// SIG undefined FUN_146be943e(void)

void FUN_146be943e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 146be9485 FUN_146be9485 body=38 status=ok
// SIG undefined FUN_146be9485(void)

void FUN_146be9485(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146bc7c1a(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 146be94ac FUN_146be94ac body=219 status=ok
// SIG undefined FUN_146be94ac(void)

undefined8 * FUN_146be94ac(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_146be983e(&local_58,*param_2,*(undefined4 *)(param_2 + 1),0);
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_54;
  *(undefined4 *)(param_1 + 9) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_4c;
  *(undefined4 *)(param_1 + 10) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_44;
  *(undefined4 *)(param_1 + 0xb) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_3c;
  param_1[0xc] = local_38;
  uVar1 = *(undefined4 *)(param_2 + 1);
  param_1[0xd] = *param_2;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  FUN_146be971a(param_1,param_3);
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be9588 FUN_146be9588 body=35 status=ok
// SIG undefined FUN_146be9588(void)

undefined8 FUN_146be9588(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_146be95f4(*param_2,param_1,*(undefined4 *)(param_2 + 1),*param_3);
  return param_1;
}



// FUNCTION 146be95d6 FUN_146be95d6 body=29 status=ok
// SIG undefined FUN_146be95d6(void)

undefined8 FUN_146be95d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146be95f4 FUN_146be95f4 body=294 status=ok
// SIG undefined FUN_146be95f4(void)

void FUN_146be95f4(longlong param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar10;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_4 >> 9) * 8);
  uVar5 = (ulonglong)((param_4 & 0x1ff) << 4);
  uVar2 = *(undefined8 *)(lVar4 + uVar5);
  uVar5 = *(ulonglong *)(lVar4 + 8 + uVar5);
  uVar12 = uVar5 >> 0x20;
  iVar7 = (int)((ulonglong)uVar2 >> 0x20);
  iVar6 = (int)uVar2;
  iVar8 = -1;
  if (iVar7 == param_3) {
    iVar8 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar8 = iVar7;
  }
  if (uVar12 == 0xffffffff) {
    lVar4 = *(longlong *)(param_1 + 0x130);
    uVar10 = 0xffffffff;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x130);
    lVar3 = *(longlong *)(lVar4 + (uVar5 >> 0x29) * 8);
    uVar11 = (ulonglong)((uint)(uVar5 >> 0x20) & 0x1ff);
    iVar6 = *(int *)(lVar3 + uVar11 * 0xc);
    iVar7 = *(int *)(lVar3 + 4 + uVar11 * 0xc);
    uVar10 = uVar12;
    if ((((iVar6 != param_3) || (iVar7 != iVar8)) &&
        ((iVar1 = *(int *)(lVar3 + uVar11 * 0xc + 8), iVar7 != param_3 || (iVar1 != iVar8)))) &&
       (uVar10 = 0xffffffff, iVar6 == iVar8 && iVar1 == param_3)) {
      uVar10 = uVar12;
    }
  }
  uVar9 = (undefined4)uVar10;
  lVar4 = *(longlong *)(lVar4 + (uVar5 >> 9 & 0x7fffff) * 8);
  uVar12 = (ulonglong)((uint)uVar5 & 0x1ff);
  iVar6 = *(int *)(lVar4 + uVar12 * 0xc);
  iVar7 = *(int *)(lVar4 + 4 + uVar12 * 0xc);
  if (((iVar6 != param_3) || (iVar7 != iVar8)) &&
     (((iVar1 = *(int *)(lVar4 + uVar12 * 0xc + 8), iVar7 != param_3 || (iVar1 != iVar8)) &&
      (uVar5 = uVar5 & 0xffffffff, iVar6 != iVar8 || iVar1 != param_3)))) {
    uVar9 = 0xffffffff;
    uVar5 = uVar10;
  }
  *param_2 = (int)uVar5;
  param_2[1] = uVar9;
  return;
}



// FUNCTION 146be971a FUN_146be971a body=290 status=ok
// SIG undefined FUN_146be971a(void)

longlong * FUN_146be971a(longlong *param_1,longlong *param_2)

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



// FUNCTION 146be983e FUN_146be983e body=228 status=ok
// SIG undefined FUN_146be983e(void)

longlong * FUN_146be983e(longlong *param_1,longlong param_2,uint param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  if (param_4 == '\0') {
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 8) + (ulonglong)(param_3 >> 9) * 8) +
                     (ulonglong)(param_3 & 0x1ff) * 4);
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 != 0xffffffff) {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
                      (ulonglong)(uVar1 & 0x1ff) * 4);
      *(int *)(param_1 + 2) = iVar2;
      if (iVar2 < 8) {
        *(uint *)((longlong)param_1 + 0x14) = uVar1 + iVar2;
        *(uint *)(param_1 + 3) = uVar1 + 1;
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
        if (iVar2 == 0) {
          *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff;
          *(undefined4 *)(param_1 + 3) = 0xffffffff;
          return param_1;
        }
      }
      else {
        *(uint *)((longlong)param_1 + 0x14) = uVar1 + 8;
        *(uint *)(param_1 + 3) = uVar1 + 1;
        *(undefined4 *)((longlong)param_1 + 0x1c) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar1 + 9 >> 9) * 8) +
              (ulonglong)(uVar1 + 9 & 0x1ff) * 4);
      }
      FUN_146be9922(param_1);
      return param_1;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff;
  }
  param_1[3] = -1;
  return param_1;
}



// FUNCTION 146be9922 FUN_146be9922 body=141 status=ok
// SIG undefined FUN_146be9922(void)

void FUN_146be9922(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 3);
  if ((int)uVar1 <= *(int *)((longlong)param_1 + 0x14)) {
    *(undefined4 *)(param_1 + 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
          (ulonglong)(uVar1 & 0x1ff) * 4);
    *(uint *)(param_1 + 3) = uVar1 + 1;
    return;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  if ((ulonglong)uVar1 != 0xffffffff) {
    *(undefined4 *)(param_1 + 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*param_1 + 0x58) + (ulonglong)(uVar1 >> 9) * 8) +
          (ulonglong)(uVar1 & 0x1ff) * 4);
    uVar2 = (ulonglong)uVar1 + 1;
    *(undefined4 *)((longlong)param_1 + 0x1c) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(*param_1 + 0x58) + (uVar2 >> 9) * 8) +
          (ulonglong)((uint)uVar2 & 0x1ff) * 4);
    return;
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}



// FUNCTION 146be99b0 FUN_146be99b0 body=114 status=ok
// SIG undefined FUN_146be99b0(void)

undefined4 FUN_146be99b0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(param_2 >> 9) * 8)
                       + (ulonglong)(param_2 & 0x1ff) * 4);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      uVar2 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar1 >> 9) * 8) +
               (ulonglong)(uVar1 & 0x1ff) * 4);
    }
  }
  return uVar2;
}



// FUNCTION 146be9a22 FUN_146be9a22 body=205 status=ok
// SIG undefined FUN_146be9a22(void)

void FUN_146be9a22(longlong *param_1,char param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [4];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == '\0') {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    iVar1 = 0;
    if (0 < param_3) {
      iVar1 = param_3;
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1403ed7b2(param_1,iVar1,1);
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    local_3c = 0xffffffff00000080;
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    if (local_68 != param_1 + 3) {
      FUN_146be9af0(param_1 + 3,local_68);
      local_20 = 0;
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a082e(local_68);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be9af0 FUN_146be9af0 body=58 status=ok
// SIG undefined FUN_146be9af0(void)

void FUN_146be9af0(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  FUN_14627166e(param_1,param_2);
  return;
}



// FUNCTION 146be9b2a FUN_146be9b2a body=119 status=ok
// SIG undefined FUN_146be9b2a(void)

undefined4 FUN_146be9b2a(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar1 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x90);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x10) == param_2) {
          if ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0 || lVar1 == 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar1 + 4);
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 146be9ba2 FUN_146be9ba2 body=133 status=ok
// SIG undefined FUN_146be9ba2(void)

undefined8 * FUN_146be9ba2(undefined8 *param_1)

{
  void *_Dst;
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x8000);
  memset(_Dst,0,0x8000);
  lVar1 = 0x3c;
  do {
    *(undefined8 *)((longlong)_Dst + lVar1 + -0xc) = 0;
    *(undefined8 *)((longlong)_Dst + lVar1 + -4) = 0xc00000000;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x803c);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_146bea1b0(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 146be9c28 FUN_146be9c28 body=58 status=ok
// SIG undefined FUN_146be9c28(void)

longlong FUN_146be9c28(longlong param_1,int param_2)

{
  FUN_146becdc4(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146be9c62 FUN_146be9c62 body=180 status=ok
// SIG undefined FUN_146be9c62(void)

undefined8 * FUN_146be9c62(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f36420;
  puVar1[2] = param_2;
  FUN_146be9ba2(puVar1 + 3);
  local_38 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_30 = 0xc00000000;
  FUN_146bea236(puVar1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_146bfd628(puVar1 + 4,param_1 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be9d18 FUN_146be9d18 body=203 status=ok
// SIG undefined FUN_146be9d18(void)

undefined8 * FUN_146be9d18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f36420;
  puVar1[2] = param_2;
  FUN_146be9ba2(puVar1 + 3);
  local_48 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0xc00000000;
  FUN_146bea236(puVar1);
  local_88 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xc00000000;
  FUN_146bea236(puVar1);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be9de4 FUN_146be9de4 body=231 status=ok
// SIG undefined FUN_146be9de4(void)

undefined8 * FUN_146be9de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f36420;
  puVar1[2] = param_3;
  FUN_146be9ba2(puVar1 + 3);
  local_58 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_50 = 0xc00000000;
  FUN_146bea236(puVar1);
  local_98 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xc00000000;
  FUN_146bea236(puVar1);
  FUN_146bea65e(puVar1,param_2,param_1);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146be9ecc FUN_146be9ecc body=139 status=ok
// SIG undefined FUN_146be9ecc(void)

void FUN_146be9ecc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = param_2[1];
  if (0 < (longlong)(int)lVar1) {
    uVar3 = 0;
    do {
      lVar2 = (longlong)*(int *)(*param_2 + uVar3 * 4);
      if (lVar2 <= (longlong)uVar3 && lVar2 != -1) {
        FUN_146bea75c(param_1 + 0x18,
                      (ulonglong)(((uint)uVar3 & 0x1ff) << 6) +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar3 >> 9 & 0x7fffff) * 8));
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)(int)lVar1 != uVar3);
  }
  FUN_146bea2c4(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24));
  return;
}



// FUNCTION 146be9fa8 FUN_146be9fa8 body=61 status=ok
// SIG undefined FUN_146be9fa8(void)

bool FUN_146be9fa8(longlong param_1,uint param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0x40) {
    FUN_146bea50a((ulonglong)((param_2 & 0x1ff) << 6) +
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_2 >> 9) * 8),
                  param_3);
  }
  return param_4 == 0x40;
}



// FUNCTION 146bea014 FUN_146bea014 body=56 status=ok
// SIG undefined FUN_146bea014(void)

undefined8 * FUN_146bea014(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_149f364e0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146bea04c FUN_146bea04c body=58 status=ok
// SIG undefined FUN_146bea04c(void)

void FUN_146bea04c(undefined8 param_1,longlong param_2)

{
  FUN_146bea890(param_1,*(undefined4 *)(param_2 + 0x20));
  FUN_146beace0(param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 146bea088 FUN_146bea088 body=36 status=ok
// SIG undefined FUN_146bea088(void)

void FUN_146bea088(undefined8 param_1,undefined4 *param_2)

{
  FUN_146beace0(*(undefined8 *)(param_2 + 0xc),*param_2,*param_2,param_2[1],
                *(undefined8 *)(param_2 + 0xc));
  return;
}



// FUNCTION 146bea0ac FUN_146bea0ac body=77 status=ok
// SIG undefined FUN_146bea0ac(void)

void FUN_146bea0ac(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  FUN_146bea890(param_1,*(undefined4 *)(param_2 + 0x10));
  FUN_146bec918(param_1,*(undefined4 *)(param_2 + 0x10),uVar1,uVar2,uVar3,param_2 + 0x28);
  return;
}



// FUNCTION 146bea0fa FUN_146bea0fa body=93 status=ok
// SIG undefined FUN_146bea0fa(void)

void FUN_146bea0fa(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x10) != -1) {
    FUN_146beace0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
                  *(int *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x68));
  }
  if (*(int *)(param_2 + 0x14) != -1) {
    FUN_146beace0(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc),
                  *(int *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 146bea158 FUN_146bea158 body=36 status=ok
// SIG undefined FUN_146bea158(void)

void FUN_146bea158(undefined8 param_1,undefined4 *param_2)

{
  FUN_146beace0(*(undefined8 *)(param_2 + 2),*param_2,*param_2,param_2[1],
                *(undefined8 *)(param_2 + 2));
  return;
}



// FUNCTION 146bea1a6 FUN_146bea1a6 body=9 status=ok
// SIG undefined FUN_146bea1a6(void)

void FUN_146bea1a6(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return;
}



// FUNCTION 146bea1b0 FUN_146bea1b0 body=132 status=ok
// SIG undefined FUN_146bea1b0(void)

void FUN_146bea1b0(longlong param_1,int param_2)

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



// FUNCTION 146bea236 FUN_146bea236 body=141 status=ok
// SIG undefined FUN_146bea236(void)

void FUN_146bea236(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_146bea2c4(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24));
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = 0;
      do {
        FUN_146bea50a(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar3 * 8) +
                      lVar2,param_2);
        lVar2 = lVar2 + 0x40;
      } while (lVar2 != 0x8000);
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < (ulonglong)(longlong)iVar1);
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bea2c4 FUN_146bea2c4 body=272 status=ok
// SIG undefined FUN_146bea2c4(void)

void FUN_146bea2c4(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    plVar1 = (longlong *)(param_1 + 2);
    uVar3 = param_1[4];
    if ((int)uVar3 < (int)uVar2) {
      do {
        _Dst = (void *)FUN_14001cc68(0x8000);
        memset(_Dst,0,0x8000);
        lVar5 = 0x3c;
        do {
          *(undefined8 *)((longlong)_Dst + lVar5 + -0xc) = 0;
          *(undefined8 *)((longlong)_Dst + lVar5 + -4) = 0xc00000000;
          lVar5 = lVar5 + 0x40;
        } while (lVar5 != 0x803c);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_146bea1b0(plVar1,iVar4);
        }
        *(void **)(*plVar1 + (longlong)iVar4 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
    else if (uVar2 < uVar3) {
      FUN_146bea3d4(plVar1,uVar2,0);
    }
    iVar4 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    iVar6 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    *param_1 = iVar6;
    param_1[1] = iVar4;
  }
  return;
}



// FUNCTION 146bea3d4 FUN_146bea3d4 body=148 status=ok
// SIG undefined FUN_146bea3d4(void)

void FUN_146bea3d4(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  if (param_2 < iVar2) {
    lVar4 = (longlong)param_2;
    do {
      lVar3 = *param_1;
      lVar1 = *(longlong *)(lVar3 + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = 0x8000;
        do {
          if (*(longlong *)(lVar1 + -0x10 + lVar3) != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + -0x40;
        } while (lVar3 != 0);
        FUN_1400020a8(lVar1);
        lVar3 = *param_1;
      }
      *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
      iVar2 = (int)param_1[1];
    } while (lVar4 < iVar2);
  }
  if ((iVar2 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146bea468(param_1);
    return;
  }
  return;
}



// FUNCTION 146bea468 FUN_146bea468 body=63 status=ok
// SIG undefined FUN_146bea468(void)

void FUN_146bea468(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bea4a8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146bea4a8 FUN_146bea4a8 body=97 status=ok
// SIG undefined FUN_146bea4a8(void)

ulonglong FUN_146bea4a8(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146bea50a FUN_146bea50a body=104 status=ok
// SIG undefined FUN_146bea50a(void)

void * FUN_146bea50a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x38);
    *(int *)((longlong)param_1 + 0x38) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0xc;
    }
    else {
      FUN_146bea572(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x30);
        if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 146bea572 FUN_146bea572 body=101 status=ok
// SIG undefined FUN_146bea572(void)

void FUN_146bea572(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0xc;
    if (0xc < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146bea5d8(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// FUNCTION 146bea5d8 FUN_146bea5d8 body=133 status=ok
// SIG undefined FUN_146bea5d8(void)

void FUN_146bea5d8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 146bea65e FUN_146bea65e body=252 status=ok
// SIG undefined FUN_146bea65e(void)

void FUN_146bea65e(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [48];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  local_58 = 0;
  local_50 = 0xc00000000;
  lVar2 = param_2[1];
  local_90 = param_3;
  if (0 < (longlong)(int)lVar2) {
    uVar3 = 0;
    do {
      uVar1 = *(uint *)(*param_2 + uVar3 * 4);
      if (uVar1 != 0xffffffff) {
        FUN_146bea50a(local_88,(ulonglong)(((uint)uVar3 & 0x1ff) << 6) +
                               *(longlong *)
                                (*(longlong *)(local_90 + 0x20) + (uVar3 >> 9 & 0x7fffff) * 8));
        FUN_146bea50a((ulonglong)((uVar1 & 0x1ff) << 6) +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar1 >> 9) * 8),
                      local_88);
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)(int)lVar2 != uVar3);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bea75c FUN_146bea75c body=99 status=ok
// SIG undefined FUN_146bea75c(void)

void FUN_146bea75c(int *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      FUN_146bea50a((ulonglong)((uVar2 & 0x1ff) << 6) +
                    *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8),
                    param_2);
      return;
    }
    FUN_146bea2c4(param_1,param_3 & 0xffffffff);
  }
  FUN_146bea7c0(param_1,param_2);
  return;
}



// FUNCTION 146bea7c0 FUN_146bea7c0 body=207 status=ok
// SIG undefined FUN_146bea7c0(void)

void FUN_146bea7c0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x8000);
      memset(_Dst,0,0x8000);
      lVar3 = 0x3c;
      do {
        *(undefined8 *)((longlong)_Dst + lVar3 + -0xc) = 0;
        *(undefined8 *)((longlong)_Dst + lVar3 + -4) = 0xc00000000;
        lVar3 = lVar3 + 0x40;
      } while (lVar3 != 0x803c);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_146bea1b0(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar4 = 0;
  }
  FUN_146bea50a((ulonglong)uVar4 * 0x40 +
                *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8),param_2);
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146bea890 FUN_146bea890 body=125 status=ok
// SIG undefined FUN_146bea890(void)

void FUN_146bea890(longlong param_1,uint param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((-1 < (int)param_2) &&
     ((uint)(*(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c)) <= param_2)) {
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_20 = 0xc00000000;
    FUN_146bea90e(param_1 + 0x18,param_2 + 1,&local_58);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bea90e FUN_146bea90e body=78 status=ok
// SIG undefined FUN_146bea90e(void)

void FUN_146bea90e(int *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_146bea2c4();
  for (uVar3 = iVar1 * 0x200 + iVar2; uVar3 < param_2; uVar3 = uVar3 + 1) {
    FUN_146bea50a((ulonglong)((uVar3 & 0x1ff) << 6) +
                  *(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar3 >> 9) * 8),param_3);
  }
  return;
}



// FUNCTION 146bea95c FUN_146bea95c body=38 status=ok
// SIG undefined FUN_146bea95c(void)

undefined8 FUN_146bea95c(undefined8 param_1,int param_2)

{
  FUN_146beab62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146bea984 FUN_146bea984 body=132 status=ok
// SIG undefined FUN_146bea984(void)

void FUN_146bea984(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_146beabda((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x48);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[8] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xc;
  *(uint *)(puVar1 + 8) = param_3;
  FUN_146bea50a(puVar1,(ulonglong)((param_3 & 0x1ff) << 6) +
                       *(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(param_3 >> 9) * 8))
  ;
  return;
}



// FUNCTION 146beaa0a FUN_146beaa0a body=245 status=ok
// SIG undefined FUN_146beaa0a(void)

void FUN_146beaa0a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar5 = (int)param_3[1];
  iVar6 = *(int *)(param_1 + 0x20) + iVar5;
  if (-1 < iVar6) {
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < iVar6) {
      FUN_146beac6e(plVar1);
      iVar5 = (int)param_3[1];
    }
    if (iVar5 != 0) {
      lVar4 = *param_3;
      lVar7 = 0;
      do {
        uVar3 = *(uint *)(lVar4 + lVar7);
        iVar6 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
          FUN_146beabda(plVar1,iVar6);
        }
        puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 0x48);
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[8] = 0;
        *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xc;
        *(uint *)(puVar2 + 8) = uVar3;
        FUN_146bea50a(puVar2,(ulonglong)((uVar3 & 0x1ff) << 6) +
                             *(longlong *)
                              (*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar3 >> 9) * 8));
        lVar7 = lVar7 + 4;
      } while ((longlong)iVar5 * 4 != lVar7);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 146beab00 FUN_146beab00 body=97 status=ok
// SIG undefined FUN_146beab00(void)

undefined8 FUN_146beab00(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)(param_3 ^ 1) * 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x10 + lVar2);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8 + lVar2);
    lVar1 = lVar1 * 0x48;
    do {
      FUN_146bea50a((ulonglong)((*(uint *)(lVar2 + 0x40) & 0x1ff) << 6) +
                    *(longlong *)
                     (*(longlong *)(param_2 + 0x20) + (ulonglong)(*(uint *)(lVar2 + 0x40) >> 9) * 8)
                    ,lVar2);
      lVar2 = lVar2 + 0x48;
      lVar1 = lVar1 + -0x48;
    } while (lVar1 != 0);
  }
  return 1;
}



// FUNCTION 146beab62 FUN_146beab62 body=72 status=ok
// SIG undefined FUN_146beab62(void)

void FUN_146beab62(longlong param_1)

{
  FUN_146beabaa(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_146beabaa(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146beabaa FUN_146beabaa body=47 status=ok
// SIG undefined FUN_146beabaa(void)

void FUN_146beabaa(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146beabda FUN_146beabda body=147 status=ok
// SIG undefined FUN_146beabda(void)

void FUN_146beabda(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146beac6e FUN_146beac6e body=113 status=ok
// SIG undefined FUN_146beac6e(void)

void FUN_146beac6e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 146beace0 FUN_146beace0 body=367 status=ok
// SIG undefined FUN_146beace0(void)

void FUN_146beace0(longlong param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_80;
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar2 = SUB84(param_5,0);
  uVar3 = (undefined4)((ulonglong)param_5 >> 0x20);
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (1.0 <= param_5) {
    uVar2 = 0;
    uVar3 = 0x3ff00000;
  }
  if ((double)CONCAT44(uVar3,uVar2) <= 0.0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  local_a8 = &local_98;
  local_98 = 2;
  uStack_94 = 0xc;
  uStack_90 = 1;
  uStack_8c = 0x100;
  local_88 = (ulonglong)((param_4 & 0x1ff) << 6) +
             *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_4 >> 9) * 8);
  local_80 = (ulonglong)((param_3 & 0x1ff) << 6) +
             *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_3 >> 9) * 8);
  local_40 = 0;
  local_38 = 0xc00000000;
  local_78 = &local_70;
  FUN_146beae50(&local_78,&local_80,&local_88,(float)(double)CONCAT44(uVar3,uVar2));
  puVar1 = (undefined4 *)
           ((ulonglong)((param_2 & 0x1ff) << 6) +
           *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_2 >> 9) * 8));
  if (puVar1 != &local_70) {
    if (local_40 == 0) {
      *(undefined8 *)(puVar1 + 8) = local_50;
      *(undefined8 *)(puVar1 + 10) = uStack_48;
      *(undefined8 *)(puVar1 + 4) = local_60;
      *(undefined8 *)(puVar1 + 6) = uStack_58;
      *puVar1 = local_70;
      puVar1[1] = uStack_6c;
      puVar1[2] = uStack_68;
      puVar1[3] = uStack_64;
    }
    if (*(longlong *)(puVar1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar1 + 0xc) = local_40;
    local_40 = 0;
    puVar1[0xe] = (undefined4)local_38;
    puVar1[0xf] = local_38._4_4_;
    local_38 = 0xc00000000;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146beae50 FUN_146beae50 body=1725 status=ok
// SIG undefined FUN_146beae50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146beae50(longlong *param_1,longlong *param_2,longlong *param_3,float param_4,
                  longlong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong lVar8;
  ushort uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  undefined4 local_180;
  uint local_178;
  uint local_174;
  longlong local_170;
  longlong *local_168;
  longlong local_160 [12];
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [48];
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [48];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(int *)(*param_2 + 0x38) == 0) && (*(int *)(*param_3 + 0x38) == 0)) {
    lVar12 = *param_1;
    iVar5 = *(int *)(lVar12 + 0x38);
    if (*(char *)(param_5 + 0xc) == '\x01') {
      if (iVar5 < 1) {
        *(undefined4 *)(lVar12 + 0x38) = 1;
        if ((uint)(*(int *)(lVar12 + 0x3c) - iVar5) < 1U - iVar5) {
          FUN_146beb76e(lVar12,iVar5);
        }
      }
      else if (iVar5 != 1) {
        *(undefined4 *)(lVar12 + 0x38) = 1;
      }
      puVar7 = *(uint **)((uint *)*param_1 + 0xc);
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)*param_1;
      }
      *puVar7 = *(ushort *)(param_5 + 10) | 0xffff0000;
    }
    else if (iVar5 < 0) {
      *(undefined4 *)(lVar12 + 0x38) = 0;
      if ((uint)(*(int *)(lVar12 + 0x3c) - iVar5) < (uint)-iVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_1c8);
      }
    }
    else if (iVar5 != 0) {
      *(undefined4 *)(lVar12 + 0x38) = 0;
    }
  }
  else {
    local_80 = (undefined1 *)0x0;
    local_78 = 0xc00000000;
    local_1a8 = param_3;
    local_1a0 = param_2;
    FUN_146beb53c(local_b0,*(int *)(*param_2 + 0x38),1);
    puVar4 = local_80;
    if (local_80 == (undefined1 *)0x0) {
      puVar4 = local_b0;
    }
    if (0 < (longlong)(int)local_78) {
      uVar2 = (int)local_78 + 3;
      lVar12 = (longlong)(int)local_78 + -1;
      auVar22._8_4_ = (int)lVar12;
      auVar22._0_8_ = lVar12;
      auVar22._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
      in_XMM1 = pmovsxbq(in_XMM1,0x302);
      in_XMM2 = pmovsxbq(in_XMM2,0x100);
      uVar14 = 0;
      lVar12 = SUB168(auVar22 ^ _DAT_149931e80,0);
      in_XMM5 = pmovsxbq(in_XMM5,0x404);
      do {
        lVar10 = SUB168(auVar22 ^ _DAT_149931e80,8);
        iVar5 = (int)uVar14;
        if ((bool)(~(lVar12 < SUB168(in_XMM2 ^ _DAT_149931e80,0)) & 1)) {
          *(int *)(puVar4 + uVar14 * 4) = iVar5;
        }
        if (SUB168(in_XMM2 ^ _DAT_149931e80,8) <= lVar10) {
          *(int *)(puVar4 + uVar14 * 4 + 4) = iVar5 + 1;
        }
        if (SUB168(in_XMM1 ^ _DAT_149931e80,0) <= lVar12) {
          *(int *)(puVar4 + uVar14 * 4 + 8) = iVar5 + 2;
        }
        if (SUB168(in_XMM1 ^ _DAT_149931e80,8) <= lVar10) {
          *(int *)(puVar4 + uVar14 * 4 + 0xc) = iVar5 + 3;
        }
        uVar14 = uVar14 + 4;
        lVar10 = in_XMM2._8_8_;
        in_XMM2._0_8_ = in_XMM2._0_8_ + in_XMM5._0_8_;
        in_XMM2._8_8_ = lVar10 + in_XMM5._8_8_;
        lVar10 = in_XMM1._8_8_;
        in_XMM1._0_8_ = in_XMM1._0_8_ + in_XMM5._0_8_;
        in_XMM1._8_8_ = lVar10 + in_XMM5._8_8_;
      } while ((uVar2 & 0xfffffffc) != uVar14);
    }
    local_160[0] = *local_1a0;
    FUN_146beba2b();
    local_c0 = (undefined1 *)0x0;
    local_b8 = 0xc00000000;
    FUN_146beb53c(local_f0,*(undefined4 *)(*local_1a8 + 0x38),1);
    plVar15 = local_1a8;
    puVar4 = local_c0;
    if (local_c0 == (undefined1 *)0x0) {
      puVar4 = local_f0;
    }
    if (0 < (longlong)(int)local_b8) {
      uVar2 = (int)local_b8 + 3;
      lVar12 = (longlong)(int)local_b8 + -1;
      auVar19._8_4_ = (int)lVar12;
      auVar19._0_8_ = lVar12;
      auVar19._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
      auVar20 = pmovsxbq(in_XMM1,0x302);
      auVar21 = pmovsxbq(in_XMM2,0x100);
      uVar14 = 0;
      lVar12 = SUB168(auVar19 ^ _DAT_149931e80,0);
      auVar22 = pmovsxbq(in_XMM5,0x404);
      do {
        lVar10 = SUB168(auVar19 ^ _DAT_149931e80,8);
        iVar5 = (int)uVar14;
        if ((bool)(~(lVar12 < SUB168(auVar21 ^ _DAT_149931e80,0)) & 1)) {
          *(int *)(puVar4 + uVar14 * 4) = iVar5;
        }
        if (SUB168(auVar21 ^ _DAT_149931e80,8) <= lVar10) {
          *(int *)(puVar4 + uVar14 * 4 + 4) = iVar5 + 1;
        }
        if (SUB168(auVar20 ^ _DAT_149931e80,0) <= lVar12) {
          *(int *)(puVar4 + uVar14 * 4 + 8) = iVar5 + 2;
        }
        if (SUB168(auVar20 ^ _DAT_149931e80,8) <= lVar10) {
          *(int *)(puVar4 + uVar14 * 4 + 0xc) = iVar5 + 3;
        }
        uVar14 = uVar14 + 4;
        lVar10 = auVar21._8_8_;
        auVar21._0_8_ = auVar21._0_8_ + auVar22._0_8_;
        auVar21._8_8_ = lVar10 + auVar22._8_8_;
        lVar10 = auVar20._8_8_;
        auVar20._0_8_ = auVar20._0_8_ + auVar22._0_8_;
        auVar20._8_8_ = lVar10 + auVar22._8_8_;
      } while ((uVar2 & 0xfffffffc) != uVar14);
    }
    local_160[0] = *local_1a8;
    FUN_146beba2b();
    local_100 = (longlong *)0x0;
    local_f8 = 0x1800000000;
    lVar12 = *local_1a0;
    iVar5 = *(int *)(lVar12 + 0x38);
    uVar2 = *(int *)(*plVar15 + 0x38) + iVar5;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar2);
    }
    if (0x18 < uVar2) {
      FUN_146bebe70(local_160);
      lVar12 = *local_1a0;
      iVar5 = *(int *)(lVar12 + 0x38);
      plVar15 = local_1a8;
    }
    iVar11 = (int)(param_4 * 65535.0);
    iVar13 = 0xffff - iVar11;
    local_170 = param_5;
    iVar17 = 0;
    local_190 = param_5;
    local_198 = param_1;
    local_168 = local_160;
    if ((iVar5 < 1) || (lVar10 = *plVar15, *(int *)(lVar10 + 0x38) < 1)) {
      iVar18 = 0;
    }
    else {
      iVar17 = 0;
      iVar18 = 0;
      plVar16 = local_1a0;
      do {
        uVar14 = local_f8;
        puVar4 = local_80;
        if (local_80 == (undefined1 *)0x0) {
          puVar4 = local_b0;
        }
        lVar8 = *(longlong *)(lVar12 + 0x30);
        if (*(longlong *)(lVar12 + 0x30) == 0) {
          lVar8 = lVar12;
        }
        uVar2 = *(uint *)(lVar8 + (longlong)*(int *)(puVar4 + (longlong)iVar18 * 4) * 4);
        puVar4 = local_c0;
        if (local_c0 == (undefined1 *)0x0) {
          puVar4 = local_f0;
        }
        lVar12 = *(longlong *)(lVar10 + 0x30);
        if (*(longlong *)(lVar10 + 0x30) == 0) {
          lVar12 = lVar10;
        }
        uVar1 = *(uint *)(lVar12 + (longlong)*(int *)(puVar4 + (longlong)iVar17 * 4) * 4);
        uVar9 = (ushort)uVar2;
        local_178 = uVar1;
        local_174 = uVar2;
        if (uVar9 == (ushort)uVar1) {
          lVar12 = (longlong)(int)local_f8;
          uVar3 = (int)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar3);
          if (local_f8._4_4_ < uVar3) {
            FUN_146bebf5c(local_160,uVar14 & 0xffffffff);
            plVar15 = local_1a8;
            plVar16 = local_1a0;
          }
          lVar10 = (longlong)(int)((uVar1 >> 0x10) * iVar11 + (uVar2 >> 0x10) * iVar13) * 0x80008001
          ;
          plVar6 = local_100;
          if (local_100 == (longlong *)0x0) {
            plVar6 = local_160;
          }
          *(ushort *)((longlong)plVar6 + lVar12 * 4) = uVar9;
          *(short *)((longlong)plVar6 + lVar12 * 4 + 2) =
               (short)(uint)((ulonglong)lVar10 >> 0x2f) - (short)(lVar10 >> 0x3f);
          iVar18 = iVar18 + 1;
          iVar17 = iVar17 + 1;
        }
        else if (uVar9 < (ushort)uVar1) {
          FUN_146beb58c(&local_170,&local_174,iVar13);
          iVar18 = iVar18 + 1;
          plVar15 = local_1a8;
          plVar16 = local_1a0;
        }
        else {
          FUN_146beb58c(&local_170,&local_178,iVar11);
          iVar17 = iVar17 + 1;
          plVar15 = local_1a8;
          plVar16 = local_1a0;
        }
        lVar12 = *plVar16;
        iVar5 = *(int *)(lVar12 + 0x38);
      } while ((iVar18 < iVar5) && (lVar10 = *plVar15, iVar17 < *(int *)(lVar10 + 0x38)));
    }
    if (iVar18 < iVar5) {
      lVar10 = (longlong)iVar18;
      do {
        puVar4 = local_80;
        if (local_80 == (undefined1 *)0x0) {
          puVar4 = local_b0;
        }
        lVar8 = *(longlong *)(lVar12 + 0x30);
        if (*(longlong *)(lVar12 + 0x30) == 0) {
          lVar8 = lVar12;
        }
        local_174 = *(uint *)(lVar8 + (longlong)*(int *)(puVar4 + lVar10 * 4) * 4);
        FUN_146beb58c(&local_170,&local_174,iVar13);
        lVar10 = lVar10 + 1;
        lVar12 = *local_1a0;
      } while (lVar10 < *(int *)(lVar12 + 0x38));
    }
    lVar12 = *local_1a8;
    if (iVar17 < *(int *)(lVar12 + 0x38)) {
      lVar10 = (longlong)iVar17;
      do {
        puVar4 = local_c0;
        if (local_c0 == (undefined1 *)0x0) {
          puVar4 = local_f0;
        }
        lVar8 = *(longlong *)(lVar12 + 0x30);
        if (*(longlong *)(lVar12 + 0x30) == 0) {
          lVar8 = lVar12;
        }
        local_174 = *(uint *)(lVar8 + (longlong)*(int *)(puVar4 + lVar10 * 4) * 4);
        FUN_146beb58c(&local_170,&local_174,iVar11);
        lVar10 = lVar10 + 1;
        lVar12 = *local_1a8;
      } while (lVar10 < *(int *)(lVar12 + 0x38));
    }
    local_188 = local_160;
    if (local_100 != (longlong *)0x0) {
      local_188 = local_100;
    }
    local_180 = (int)local_f8;
    FUN_146beb632(local_198,&local_188,local_190);
    if (local_100 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146beb53c FUN_146beb53c body=78 status=ok
// SIG undefined FUN_146beb53c(void)

void FUN_146beb53c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146beb88a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x38) = param_2, param_3 == '\x01')) {
      FUN_146beb986();
      return;
    }
  }
  return;
}



// FUNCTION 146beb58c FUN_146beb58c body=166 status=ok
// SIG undefined FUN_146beb58c(void)

void FUN_146beb58c(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(*param_1 + 0xd) == '\x01') {
    lVar5 = (longlong)(int)((uint)*(ushort *)((longlong)param_2 + 2) * param_3) * 0x80008001;
    lVar3 = param_1[1];
    uVar1 = *(undefined2 *)param_2;
    iVar2 = *(int *)(lVar3 + 0x68);
    *(uint *)(lVar3 + 0x68) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x6c) < iVar2 + 1U) {
      FUN_146bebf5c(lVar3,iVar2);
    }
    lVar4 = *(longlong *)(lVar3 + 0x60);
    if (*(longlong *)(lVar3 + 0x60) == 0) {
      lVar4 = lVar3;
    }
    *(undefined2 *)(lVar4 + (longlong)iVar2 * 4) = uVar1;
    *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) =
         (short)(uint)((ulonglong)lVar5 >> 0x2f) - (short)(lVar5 >> 0x3f);
  }
  else {
    lVar3 = param_1[1];
    iVar2 = *(int *)(lVar3 + 0x68);
    *(uint *)(lVar3 + 0x68) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x6c) < iVar2 + 1U) {
      FUN_146bebf5c(lVar3,iVar2);
    }
    lVar5 = *(longlong *)(lVar3 + 0x60);
    if (*(longlong *)(lVar3 + 0x60) == 0) {
      lVar5 = lVar3;
    }
    *(undefined4 *)(lVar5 + (longlong)iVar2 * 4) = *param_2;
  }
  return;
}



// FUNCTION 146beb632 FUN_146beb632 body=235 status=ok
// SIG undefined FUN_146beb632(void)

void FUN_146beb632(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  
  FUN_146bec140(*param_2,(int)param_2[1],param_3,&LAB_146bebfd2);
  uVar4 = param_3[1];
  if ((int)*(uint *)(param_2 + 1) < (int)param_3[1]) {
    uVar4 = *(uint *)(param_2 + 1);
  }
  if (uVar4 == 0) {
    lVar5 = *param_1;
    if (*(char *)(param_3 + 3) != '\0') {
      iVar1 = *(int *)(lVar5 + 0x38);
      if (iVar1 < 1) {
        *(undefined4 *)(lVar5 + 0x38) = 1;
        if ((uint)(*(int *)(lVar5 + 0x3c) - iVar1) < 1U - iVar1) {
          FUN_146beb76e();
        }
      }
      else if (iVar1 != 1) {
        *(undefined4 *)(lVar5 + 0x38) = 1;
      }
      puVar3 = *(uint **)((uint *)*param_1 + 0xc);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)*param_1;
      }
      *puVar3 = *(ushort *)((longlong)param_3 + 10) | 0xffff0000;
      return;
    }
    FUN_146beb71e(lVar5,0,0);
  }
  else {
    FUN_146beb71e(*param_1,uVar4,0);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        lVar5 = *(longlong *)(*param_1 + 0x30);
        if (lVar5 == 0) {
          lVar5 = *param_1;
        }
        *(undefined4 *)(lVar5 + uVar2 * 4) = *(undefined4 *)(*param_2 + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
  }
  FUN_146bebfde(param_1,*param_3);
  return;
}



// FUNCTION 146beb71e FUN_146beb71e body=78 status=ok
// SIG undefined FUN_146beb71e(void)

void FUN_146beb71e(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146beb76e();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x38) = param_2, param_3 == '\x01')) {
      FUN_146beb7e4();
      return;
    }
  }
  return;
}



// FUNCTION 146beb76e FUN_146beb76e body=116 status=ok
// SIG undefined FUN_146beb76e(void)

void FUN_146beb76e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xc;
    if (0xc < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xc < *(uint *)(param_1 + 0x3c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar4;
    FUN_146bea5d8(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146beb7e4 FUN_146beb7e4 body=59 status=ok
// SIG undefined FUN_146beb7e4(void)

void FUN_146beb7e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146beb820(param_1,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_146bea5d8(param_1,*(undefined4 *)(param_1 + 0x38),iVar1,4);
  return;
}



// FUNCTION 146beb820 FUN_146beb820 body=105 status=ok
// SIG undefined FUN_146beb820(void)

ulonglong FUN_146beb820(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0xc;
  if (0xc < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146beb88a FUN_146beb88a body=116 status=ok
// SIG undefined FUN_146beb88a(void)

void FUN_146beb88a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xc;
    if (0xc < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xc < *(uint *)(param_1 + 0x3c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar4;
    FUN_146beb900(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146beb900 FUN_146beb900 body=133 status=ok
// SIG undefined FUN_146beb900(void)

void FUN_146beb900(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 146beb986 FUN_146beb986 body=59 status=ok
// SIG undefined FUN_146beb986(void)

void FUN_146beb986(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146beb9c2(param_1,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_146beb900(param_1,*(undefined4 *)(param_1 + 0x38),iVar1,4);
  return;
}



// FUNCTION 146beb9c2 FUN_146beb9c2 body=105 status=ok
// SIG undefined FUN_146beb9c2(void)

ulonglong FUN_146beb9c2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0xc;
  if (0xc < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146beba2b FUN_146beba2b body=694 status=ok
// SIG undefined FUN_146beba2b(void)

void FUN_146beba2b(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auStack_378 [40];
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar4 = &local_348;
    do {
      piVar3 = (int *)*plVar4;
      piVar9 = (int *)plVar4[1];
      iVar11 = (int)plVar4[2];
      uVar6 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar3) >> 2) + 1;
      piVar10 = piVar9;
      piVar12 = piVar9;
      piVar14 = piVar3;
      local_350 = plVar4;
      if (iVar11 != 0) {
LAB_146bebaf6:
        if (8 < (int)uVar6) {
          iVar1 = piVar3[uVar6 >> 1];
          piVar3[uVar6 >> 1] = *piVar3;
          *piVar3 = iVar1;
          piVar7 = piVar9 + 1;
          piVar5 = piVar3;
          do {
            piVar10 = piVar5 + 1;
            piVar2 = piVar5 + 1;
            do {
              piVar13 = piVar2;
              piVar5 = piVar10;
              if (piVar9 < piVar5) break;
              lVar8 = *(longlong *)(*param_4 + 0x30);
              if (lVar8 == 0) {
                lVar8 = *param_4;
              }
              piVar10 = piVar5 + 1;
              piVar2 = piVar13 + 1;
            } while (*(ushort *)(lVar8 + (longlong)*piVar5 * 4) <=
                     *(ushort *)(lVar8 + (longlong)*piVar3 * 4));
            piVar2 = piVar7 + -2;
            do {
              piVar10 = piVar7;
              piVar15 = piVar2;
              piVar7 = piVar10 + -1;
              if (piVar7 <= piVar3) break;
              lVar8 = *(longlong *)(*param_4 + 0x30);
              if (lVar8 == 0) {
                lVar8 = *param_4;
              }
              piVar2 = piVar15 + -1;
            } while (*(ushort *)(lVar8 + (longlong)*piVar3 * 4) <=
                     *(ushort *)(lVar8 + (longlong)*piVar7 * 4));
            if (piVar7 < piVar5) goto LAB_146bebba7;
            iVar1 = *piVar5;
            *piVar5 = *piVar7;
            *piVar7 = iVar1;
          } while( true );
        }
        if (piVar3 < piVar9) {
          do {
            piVar10 = piVar3;
            if (piVar3 + 1 <= piVar9) {
              lVar8 = *(longlong *)(*param_4 + 0x30);
              if (lVar8 == 0) {
                lVar8 = *param_4;
              }
              iVar11 = *piVar3;
              piVar12 = piVar3 + 1;
              piVar14 = piVar3;
              do {
                piVar10 = piVar12;
                iVar1 = *piVar12;
                if (*(ushort *)(lVar8 + (longlong)*piVar12 * 4) <=
                    *(ushort *)(lVar8 + (longlong)iVar11 * 4)) {
                  piVar10 = piVar14;
                  iVar1 = iVar11;
                }
                iVar11 = iVar1;
                piVar12 = piVar12 + 1;
                piVar14 = piVar10;
              } while (piVar12 <= piVar9);
            }
            iVar11 = *piVar10;
            *piVar10 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar3 < piVar9);
        }
        goto LAB_146bebcb3;
      }
LAB_146bebcd2:
      FUN_146bebce2(piVar3,uVar6,piVar10,param_4);
LAB_146bebcb3:
      plVar4 = local_350 + -3;
    } while (&local_348 <= plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146bebba7:
  iVar1 = *piVar3;
  *piVar3 = *piVar7;
  *piVar7 = iVar1;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar15 - (longlong)piVar14 < (longlong)piVar12 - (longlong)piVar13) {
    if (piVar5 < piVar9) {
      *local_350 = (longlong)piVar5;
      local_350[1] = (longlong)piVar9;
      *(int *)(local_350 + 2) = iVar11;
      local_350 = local_350 + 3;
    }
    piVar13 = piVar3;
    if (piVar7 <= piVar3 + 1) goto LAB_146bebcb3;
  }
  else {
    if (piVar3 + 1 < piVar7) {
      *local_350 = (longlong)piVar3;
      local_350[1] = (longlong)piVar10;
      *(int *)(local_350 + 2) = iVar11;
      local_350 = local_350 + 3;
    }
    piVar3 = piVar5;
    piVar10 = piVar9;
    piVar15 = piVar9;
    if (piVar9 <= piVar5) goto LAB_146bebcb3;
  }
  uVar6 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar13) >> 2) + 1;
  piVar9 = piVar10;
  piVar12 = piVar15;
  piVar14 = piVar13;
  if (iVar11 == 0) goto LAB_146bebcd2;
  goto LAB_146bebaf6;
}



// FUNCTION 146bebce2 FUN_146bebce2 body=398 status=ok
// SIG undefined FUN_146bebce2(void)

void FUN_146bebce2(undefined4 *param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar2;
joined_r0x000146bebd0a:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar2 * 2 + 2;
        lVar9 = *param_4;
        if (iVar7 < (int)param_2) {
          lVar6 = *(longlong *)(lVar9 + 0x30);
          lVar10 = lVar6;
          if (lVar6 == 0) {
            lVar10 = lVar9;
          }
          if (*(ushort *)(lVar10 + (longlong)(int)param_1[iVar5] * 4) <=
              *(ushort *)(lVar10 + (longlong)(int)param_1[iVar7] * 4)) {
            iVar5 = iVar7;
          }
        }
        else {
          lVar6 = *(longlong *)(lVar9 + 0x30);
        }
        if (lVar6 != 0) {
          lVar9 = lVar6;
        }
        iVar7 = param_1[iVar2];
        if (*(ushort *)(lVar9 + (longlong)iVar7 * 4) <
            *(ushort *)(lVar9 + (longlong)(int)param_1[iVar5] * 4)) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar7;
          iVar2 = iVar5;
          goto joined_r0x000146bebd0a;
        }
      }
      bVar11 = iVar8 != 0;
      iVar2 = iVar8 + -1;
      iVar8 = iVar2;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar2 = iVar2 + 2;
            lVar9 = *param_4;
            iVar7 = iVar5;
            if ((longlong)iVar2 < (longlong)uVar4) {
              lVar6 = *(longlong *)(lVar9 + 0x30);
              lVar10 = lVar6;
              if (lVar6 == 0) {
                lVar10 = lVar9;
              }
              if (*(ushort *)(lVar10 + (longlong)(int)param_1[iVar5] * 4) <=
                  *(ushort *)(lVar10 + (longlong)(int)param_1[iVar2] * 4)) {
                iVar7 = iVar2;
              }
            }
            else {
              lVar6 = *(longlong *)(lVar9 + 0x30);
            }
            if (lVar6 != 0) {
              lVar9 = lVar6;
            }
            iVar2 = param_1[iVar8];
            if (*(ushort *)(lVar9 + (longlong)(int)param_1[iVar7] * 4) <=
                *(ushort *)(lVar9 + (longlong)iVar2 * 4)) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = iVar2;
            iVar2 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 146bebe70 FUN_146bebe70 body=101 status=ok
// SIG undefined FUN_146bebe70(void)

void FUN_146bebe70(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x6c) = (int)uVar2;
    FUN_146bebed6(param_1,*(undefined4 *)(param_1 + 0x68),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 146bebed6 FUN_146bebed6 body=133 status=ok
// SIG undefined FUN_146bebed6(void)

void FUN_146bebed6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,param_4);
  return;
}



// FUNCTION 146bebf5c FUN_146bebf5c body=116 status=ok
// SIG undefined FUN_146bebf5c(void)

void FUN_146bebf5c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x18;
    if (0x18 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0x6c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)uVar4;
    FUN_146bebed6(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146bebfde FUN_146bebfde body=353 status=ok
// SIG undefined FUN_146bebfde(void)

void FUN_146bebfde(longlong *param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (uint *)*param_1;
  uVar10 = puVar2[0xe];
  uVar12 = (ulonglong)uVar10;
  if (param_2 != 0 && uVar12 != 0) {
    if (uVar10 == 1) {
      if (param_2 == 2) {
        puVar8 = *(uint **)(puVar2 + 0xc);
        if (*(uint **)(puVar2 + 0xc) == (uint *)0x0) {
          puVar8 = puVar2;
        }
        *puVar8 = *puVar8 | 0xffff0000;
      }
    }
    else if (0 < (int)uVar10) {
      puVar8 = *(uint **)(puVar2 + 0xc);
      if (*(uint **)(puVar2 + 0xc) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      uVar6 = 0;
      uVar13 = 0;
      do {
        uVar13 = uVar13 + *(ushort *)((longlong)puVar8 + uVar6 * 4 + 2);
        uVar6 = uVar6 + 1;
      } while (uVar12 != uVar6);
      if (0xffff < uVar13 || uVar13 != 0 && param_2 == 2) {
        uVar6 = 0;
        lVar11 = 0;
        uVar10 = 0xffff;
        bVar5 = 0;
        do {
          bVar4 = bVar5;
          lVar9 = *(longlong *)(*param_1 + 0x30);
          if (lVar9 == 0) {
            lVar9 = *param_1;
          }
          uVar1 = *(ushort *)(lVar9 + 2 + uVar6 * 4);
          lVar11 = ((ulonglong)uVar1 * 0x10000 - (ulonglong)uVar1) + lVar11;
          uVar7 = lVar11 / (longlong)uVar13;
          if (0xfffe < (longlong)uVar7) {
            uVar7 = 0xffff;
          }
          lVar11 = lVar11 - (uVar7 & 0xffff) * uVar13;
          *(short *)(lVar9 + 2 + uVar6 * 4) = (short)uVar7;
          bVar3 = (uVar10 & 0xffff) < ((uint)uVar7 & 0xffff);
          uVar6 = uVar6 + 1;
          uVar10 = (uint)uVar7;
          bVar5 = bVar4 | bVar3;
        } while (uVar12 != uVar6);
        if ((bool)(bVar4 | bVar3)) {
          lVar11 = *param_1;
          local_38 = &LAB_146bebfd2;
          lVar9 = *(longlong *)(lVar11 + 0x30);
          if (*(longlong *)(lVar11 + 0x30) == 0) {
            lVar9 = lVar11;
          }
          FUN_146bec52c(lVar9,*(undefined4 *)(lVar11 + 0x38));
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bec140 FUN_146bec140 body=648 status=ok
// SIG undefined FUN_146bec140(void)

void FUN_146bec140(longlong param_1,uint param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined4 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar7 = &local_348;
    do {
      puVar8 = (undefined4 *)*plVar7;
      puVar9 = (undefined4 *)plVar7[1];
      local_354 = (int)plVar7[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar8) >> 2);
      puVar10 = puVar8;
      puVar11 = puVar8;
      puVar12 = puVar9;
      local_360 = plVar7;
      if (local_354 != 0) {
LAB_146bec20d:
        plVar7 = local_360;
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar1 = puVar11[uVar5];
          puVar11[uVar5] = *puVar11;
          *puVar11 = uVar1;
          puVar14 = puVar12 + 1;
          puVar8 = puVar11;
          local_350 = puVar10;
          do {
            puVar10 = puVar8 + 1;
            puVar13 = puVar8 + 1;
            do {
              puVar8 = puVar13;
              puVar3 = puVar10;
              if (puVar12 < puVar8) break;
              cVar2 = (*param_4)(puVar11,puVar8);
              puVar10 = puVar3 + 1;
              puVar13 = puVar8 + 1;
            } while (cVar2 == '\0');
            puVar10 = puVar14 + -2;
            do {
              puVar13 = puVar14;
              puVar6 = puVar10;
              puVar14 = puVar13 + -1;
              if (puVar14 <= puVar11) break;
              cVar2 = (*param_4)(puVar14,puVar11);
              puVar10 = puVar6 + -1;
            } while (cVar2 == '\0');
            if (puVar14 < puVar8) goto LAB_146bec298;
            uVar1 = *puVar8;
            *puVar8 = *puVar14;
            *puVar14 = uVar1;
          } while( true );
        }
        for (; local_360 = plVar7, puVar9 = puVar11, puVar8 = puVar11, puVar11 < puVar12;
            puVar12 = puVar12 + -1) {
          while (puVar10 = puVar9, puVar8 = puVar8 + 1, puVar8 <= puVar12) {
            cVar2 = (*param_4)(puVar10,puVar8);
            puVar9 = puVar8;
            if (cVar2 == '\0') {
              puVar9 = puVar10;
            }
          }
          uVar1 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar1;
          plVar7 = local_360;
        }
        goto LAB_146bec39c;
      }
LAB_146bec3b6:
      FUN_146bec3c9(puVar8);
      plVar7 = local_360;
LAB_146bec39c:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146bec298:
  uVar1 = *puVar11;
  *puVar11 = *puVar14;
  *puVar14 = uVar1;
  local_354 = local_354 + -1;
  puVar13 = puVar13 + -2;
  if ((longlong)puVar6 - (longlong)local_350 < (longlong)puVar9 - (longlong)puVar3) {
    plVar7 = local_360;
    if (puVar8 < puVar12) {
      *local_360 = (longlong)puVar8;
      local_360[1] = (longlong)puVar12;
      *(int *)(local_360 + 2) = local_354;
      plVar7 = local_360 + 3;
    }
    puVar8 = puVar11;
    puVar9 = puVar6;
    if (puVar14 <= puVar11 + 1) goto LAB_146bec39c;
  }
  else {
    if (puVar11 + 1 < puVar14) {
      *local_360 = (longlong)puVar11;
      local_360[1] = (longlong)puVar13;
      *(int *)(local_360 + 2) = local_354;
      local_360 = local_360 + 3;
    }
    plVar7 = local_360;
    puVar11 = puVar3;
    puVar13 = puVar12;
    puVar9 = puVar12;
    if (puVar12 <= puVar8) goto LAB_146bec39c;
  }
  local_360 = plVar7;
  iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar11) >> 2);
  puVar10 = puVar11;
  puVar11 = puVar8;
  puVar12 = puVar13;
  if (local_354 == 0) goto LAB_146bec3b6;
  goto LAB_146bec20d;
}



// FUNCTION 146bec3c9 FUN_146bec3c9 body=355 status=ok
// SIG undefined FUN_146bec3c9(void)

void FUN_146bec3c9(undefined4 *param_1,uint param_2,undefined8 param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar6;
joined_r0x000146bec404:
    do {
      iVar5 = iVar6 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar6 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (cVar4 = (*param_4)(param_1 + iVar7,param_1 + iVar5), cVar4 == '\0')) {
          iVar5 = iVar7;
        }
        puVar1 = param_1 + iVar6;
        puVar2 = param_1 + iVar5;
        cVar4 = (*param_4)(puVar1,puVar2);
        if (cVar4 != '\0') {
          uVar3 = *puVar1;
          *puVar1 = *puVar2;
          *puVar2 = uVar3;
          iVar6 = iVar5;
          goto joined_r0x000146bec404;
        }
      }
      bVar11 = iVar8 != 0;
      iVar6 = iVar8 + -1;
      iVar8 = iVar6;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar9 - 1];
      param_1[uVar9 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar10 = uVar9 - 1;
          iVar6 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar7 = iVar5;
            if (((longlong)iVar6 < (longlong)uVar10) &&
               (cVar4 = (*param_4)(param_1 + iVar6,param_1 + iVar5), cVar4 == '\0')) {
              iVar7 = iVar6;
            }
            puVar1 = param_1 + iVar8;
            puVar2 = param_1 + iVar7;
            cVar4 = (*param_4)(puVar1,puVar2);
            if (cVar4 == '\0') break;
            uVar3 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar3;
            iVar6 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar10);
          uVar3 = *param_1;
          *param_1 = param_1[uVar9 - 2];
          param_1[uVar9 - 2] = uVar3;
          uVar9 = uVar10;
        } while (2 < uVar10);
      }
    }
  }
  return;
}



// FUNCTION 146bec52c FUN_146bec52c body=648 status=ok
// SIG undefined FUN_146bec52c(void)

void FUN_146bec52c(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined4 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar7 = &local_348;
    do {
      puVar8 = (undefined4 *)*plVar7;
      puVar9 = (undefined4 *)plVar7[1];
      local_354 = (int)plVar7[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar8) >> 2);
      puVar10 = puVar8;
      puVar11 = puVar8;
      puVar12 = puVar9;
      local_360 = plVar7;
      if (local_354 != 0) {
LAB_146bec5f9:
        plVar7 = local_360;
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar1 = puVar11[uVar5];
          puVar11[uVar5] = *puVar11;
          *puVar11 = uVar1;
          puVar14 = puVar12 + 1;
          puVar8 = puVar11;
          local_350 = puVar10;
          do {
            puVar10 = puVar8 + 1;
            puVar13 = puVar8 + 1;
            do {
              puVar8 = puVar13;
              puVar3 = puVar10;
              if (puVar12 < puVar8) break;
              cVar2 = (*(code *)*param_4)(puVar11,puVar8);
              puVar10 = puVar3 + 1;
              puVar13 = puVar8 + 1;
            } while (cVar2 == '\0');
            puVar10 = puVar14 + -2;
            do {
              puVar13 = puVar14;
              puVar6 = puVar10;
              puVar14 = puVar13 + -1;
              if (puVar14 <= puVar11) break;
              cVar2 = (*(code *)*param_4)(puVar14,puVar11);
              puVar10 = puVar6 + -1;
            } while (cVar2 == '\0');
            if (puVar14 < puVar8) goto LAB_146bec684;
            uVar1 = *puVar8;
            *puVar8 = *puVar14;
            *puVar14 = uVar1;
          } while( true );
        }
        for (; local_360 = plVar7, puVar9 = puVar11, puVar8 = puVar11, puVar11 < puVar12;
            puVar12 = puVar12 + -1) {
          while (puVar10 = puVar9, puVar8 = puVar8 + 1, puVar8 <= puVar12) {
            cVar2 = (*(code *)*param_4)(puVar10,puVar8);
            puVar9 = puVar8;
            if (cVar2 == '\0') {
              puVar9 = puVar10;
            }
          }
          uVar1 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar1;
          plVar7 = local_360;
        }
        goto LAB_146bec788;
      }
LAB_146bec7a2:
      FUN_146bec7b5(puVar8);
      plVar7 = local_360;
LAB_146bec788:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146bec684:
  uVar1 = *puVar11;
  *puVar11 = *puVar14;
  *puVar14 = uVar1;
  local_354 = local_354 + -1;
  puVar13 = puVar13 + -2;
  if ((longlong)puVar6 - (longlong)local_350 < (longlong)puVar9 - (longlong)puVar3) {
    plVar7 = local_360;
    if (puVar8 < puVar12) {
      *local_360 = (longlong)puVar8;
      local_360[1] = (longlong)puVar12;
      *(int *)(local_360 + 2) = local_354;
      plVar7 = local_360 + 3;
    }
    puVar8 = puVar11;
    puVar9 = puVar6;
    if (puVar14 <= puVar11 + 1) goto LAB_146bec788;
  }
  else {
    if (puVar11 + 1 < puVar14) {
      *local_360 = (longlong)puVar11;
      local_360[1] = (longlong)puVar13;
      *(int *)(local_360 + 2) = local_354;
      local_360 = local_360 + 3;
    }
    plVar7 = local_360;
    puVar11 = puVar3;
    puVar13 = puVar12;
    puVar9 = puVar12;
    if (puVar12 <= puVar8) goto LAB_146bec788;
  }
  local_360 = plVar7;
  iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar11) >> 2);
  puVar10 = puVar11;
  puVar11 = puVar8;
  puVar12 = puVar13;
  if (local_354 == 0) goto LAB_146bec7a2;
  goto LAB_146bec5f9;
}



// FUNCTION 146bec7b5 FUN_146bec7b5 body=355 status=ok
// SIG undefined FUN_146bec7b5(void)

void FUN_146bec7b5(undefined4 *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar6;
joined_r0x000146bec7f0:
    do {
      iVar5 = iVar6 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar6 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (cVar4 = (*(code *)*param_4)(param_1 + iVar7,param_1 + iVar5), cVar4 == '\0')) {
          iVar5 = iVar7;
        }
        puVar1 = param_1 + iVar6;
        puVar2 = param_1 + iVar5;
        cVar4 = (*(code *)*param_4)(puVar1,puVar2);
        if (cVar4 != '\0') {
          uVar3 = *puVar1;
          *puVar1 = *puVar2;
          *puVar2 = uVar3;
          iVar6 = iVar5;
          goto joined_r0x000146bec7f0;
        }
      }
      bVar11 = iVar8 != 0;
      iVar6 = iVar8 + -1;
      iVar8 = iVar6;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar9 - 1];
      param_1[uVar9 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar10 = uVar9 - 1;
          iVar6 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar7 = iVar5;
            if (((longlong)iVar6 < (longlong)uVar10) &&
               (cVar4 = (*(code *)*param_4)(param_1 + iVar6,param_1 + iVar5), cVar4 == '\0')) {
              iVar7 = iVar6;
            }
            puVar1 = param_1 + iVar8;
            puVar2 = param_1 + iVar7;
            cVar4 = (*(code *)*param_4)(puVar1,puVar2);
            if (cVar4 == '\0') break;
            uVar3 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar3;
            iVar6 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar10);
          uVar3 = *param_1;
          *param_1 = param_1[uVar9 - 2];
          param_1[uVar9 - 2] = uVar3;
          uVar9 = uVar10;
        } while (2 < uVar10);
      }
    }
  }
  return;
}



// FUNCTION 146bec918 FUN_146bec918 body=669 status=ok
// SIG undefined FUN_146bec918(void)

void FUN_146bec918(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  double *param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_d8 [32];
  float local_b8;
  float local_b0;
  float local_a8;
  undefined4 *local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (ABS((float)*param_6 + -1.0) <= 1e-08) {
    if (param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8,0x1ff);
    }
  }
  else if (ABS((float)param_6[1] + -1.0) <= 1e-08) {
    if (param_2 != param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8,0x1ff);
    }
  }
  else if (1e-08 < ABS((float)param_6[2] + -1.0)) {
    local_a0 = &local_90;
    local_90 = 2;
    uStack_8c = 0xc;
    uStack_88 = 1;
    uStack_84 = 0x100;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_b8 = (float)*param_6;
    local_b0 = (float)param_6[1];
    local_a8 = (float)param_6[2];
    FUN_146becbe6(&local_80,
                  (ulonglong)((param_3 & 0x1ff) << 6) +
                  *(longlong *)(lVar1 + (ulonglong)(param_3 >> 9) * 8),
                  (ulonglong)((param_4 & 0x1ff) << 6) +
                  *(longlong *)(lVar1 + (ulonglong)(param_4 >> 9) * 8),
                  (ulonglong)((param_5 & 0x1ff) << 6) +
                  *(longlong *)(lVar1 + (ulonglong)(param_5 >> 9) * 8));
    puVar2 = (undefined4 *)
             ((ulonglong)((param_2 & 0x1ff) << 6) +
             *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_2 >> 9) * 8));
    if (puVar2 != &local_80) {
      if (local_50 == 0) {
        *(undefined8 *)(puVar2 + 8) = local_60;
        *(undefined8 *)(puVar2 + 10) = uStack_58;
        *(undefined8 *)(puVar2 + 4) = local_70;
        *(undefined8 *)(puVar2 + 6) = uStack_68;
        *puVar2 = local_80;
        puVar2[1] = uStack_7c;
        puVar2[2] = uStack_78;
        puVar2[3] = uStack_74;
      }
      if (*(longlong *)(puVar2 + 0xc) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(puVar2 + 0xc) = local_50;
      local_50 = 0;
      puVar2[0xe] = (undefined4)local_48;
      puVar2[0xf] = local_48._4_4_;
      local_48 = 0xc00000000;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else if (param_2 != param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8,0x1ff);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146becbe6 FUN_146becbe6 body=373 status=ok
// SIG undefined FUN_146becbe6(void)

undefined1 *
FUN_146becbe6(undefined1 *param_1,longlong param_2,undefined1 *param_3,longlong param_4,
             undefined4 param_5,float param_6,float param_7,undefined8 param_8)

{
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  longlong local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 local_a0 [48];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (1e-08 < ABS(param_6 + param_7)) {
    local_d8 = &local_c8;
    local_c0 = 1;
    local_bc = 0x100;
    local_c8 = 0;
    local_c4 = *(int *)(param_4 + 0x38) + *(int *)(param_3 + 0x38);
    if (local_c4 < 2) {
      local_c4 = 1;
    }
    local_70 = 0;
    local_68 = 0xc00000000;
    local_b8 = param_4;
    local_b0 = param_3;
    local_a8 = local_a0;
    FUN_146beae50(&local_a8,&local_b0,&local_b8,param_7 / (param_6 + param_7));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0xc00000000;
    local_d8 = (undefined4 *)param_8;
    local_b8 = param_2;
    local_b0 = local_a0;
    local_a8 = param_1;
    FUN_146beae50(&local_a8,&local_b0,&local_b8,param_5);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
  }
  FUN_146becd5c(param_1,param_2);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146becd5c FUN_146becd5c body=103 status=ok
// SIG undefined FUN_146becd5c(void)

void * FUN_146becd5c(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x38);
  pvVar2 = *(void **)((longlong)param_2 + 0x30);
  *(int *)((longlong)param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0xc;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_146bea572(param_1,iVar1,0);
    pvVar2 = *(void **)((longlong)param_1 + 0x30);
    if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 146becdc4 FUN_146becdc4 body=145 status=ok
// SIG undefined FUN_146becdc4(void)

void FUN_146becdc4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if (0 < (longlong)(int)lVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = 0x8000;
        do {
          if (*(longlong *)(lVar1 + -0x10 + lVar3) != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + -0x40;
        } while (lVar3 != 0);
        FUN_1400020a8(lVar1);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != (int)lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_146bece56(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bece56 FUN_146bece56 body=96 status=ok
// SIG undefined FUN_146bece56(void)

void FUN_146bece56(longlong param_1,int param_2)

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



// FUNCTION 146beceb6 FUN_146beceb6 body=106 status=ok
// SIG undefined FUN_146beceb6(void)

void FUN_146beceb6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146becf20(param_1);
    return;
  }
  return;
}



// FUNCTION 146becf20 FUN_146becf20 body=63 status=ok
// SIG undefined FUN_146becf20(void)

void FUN_146becf20(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146becf60(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146becf60 FUN_146becf60 body=97 status=ok
// SIG undefined FUN_146becf60(void)

ulonglong FUN_146becf60(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146becfc2 FUN_146becfc2 body=132 status=ok
// SIG undefined FUN_146becfc2(void)

void FUN_146becfc2(longlong param_1,int param_2)

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



// FUNCTION 146bed047 FUN_146bed047 body=443 status=ok
// SIG undefined FUN_146bed047(void)

double * FUN_146bed047(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar10 = dVar2 + dVar2;
  dVar3 = param_2[2];
  dVar11 = dVar3 + dVar3;
  dVar4 = param_2[3];
  dVar9 = dVar1 * (dVar1 + dVar1);
  dVar8 = (dVar1 + dVar1) * dVar4;
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar7 = param_3[2];
  *param_1 = (dVar1 * dVar11 + dVar10 * dVar4) * dVar7 +
             (1.0 - (dVar11 * dVar3 + dVar10 * dVar2)) * dVar5 +
             (dVar1 * dVar10 - dVar4 * dVar11) * dVar6;
  param_1[1] = (dVar2 * dVar11 - dVar8) * dVar7 +
               (dVar1 * dVar10 + dVar4 * dVar11) * dVar5 + (1.0 - (dVar9 + dVar11 * dVar3)) * dVar6;
  param_1[2] = (1.0 - (dVar9 + dVar10 * dVar2)) * dVar7 +
               (dVar1 * dVar11 - dVar10 * dVar4) * dVar5 + (dVar2 * dVar11 + dVar8) * dVar6;
  return param_1;
}



// FUNCTION 146bed202 FUN_146bed202 body=63 status=ok
// SIG undefined FUN_146bed202(void)

void FUN_146bed202(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bed242(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146bed242 FUN_146bed242 body=97 status=ok
// SIG undefined FUN_146bed242(void)

ulonglong FUN_146bed242(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146bed2a3 FUN_146bed2a3 body=1 status=ok
// SIG undefined FUN_146bed2a3(void)

void FUN_146bed2a3(void)

{
  return;
}



// FUNCTION 146bed2a4 FUN_146bed2a4 body=404 status=ok
// SIG undefined FUN_146bed2a4(void)

void FUN_146bed2a4(double *param_1,double *param_2,double *param_3)

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
  
  dVar10 = param_2[10];
  dVar5 = param_2[8] * param_2[9];
  dVar3 = 0.0;
  dVar4 = *(double *)(&DAT_149931170 + (ulonglong)(dVar5 * dVar10 < 0.0) * 8);
  dVar6 = dVar5 * dVar4 * param_3[2];
  dVar7 = param_2[8] * dVar10 * dVar4 * param_3[1];
  dVar8 = param_2[9] * dVar10 * dVar4 * *param_3;
  dVar10 = SQRT(dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7);
  dVar4 = 0.0;
  dVar5 = 0.0;
  if (0.0 < dVar10) {
    dVar10 = 1.0 / dVar10;
    dVar3 = dVar6 * dVar10;
    dVar5 = dVar7 * dVar10;
    dVar4 = dVar8 * dVar10;
  }
  dVar8 = *param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar6 = param_2[3];
  dVar10 = param_2[3];
  dVar11 = dVar4 * dVar2 - dVar8 * dVar3;
  dVar7 = dVar5 * dVar8 - dVar4 * dVar1;
  dVar9 = dVar3 * dVar1 - dVar5 * dVar2;
  dVar9 = dVar9 + dVar9;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  *param_1 = (dVar7 * dVar1 - dVar11 * dVar2) + dVar6 * dVar9 + dVar4;
  param_1[1] = (dVar2 * dVar9 - dVar8 * dVar7) + dVar10 * dVar11 + dVar5;
  param_1[2] = dVar7 * dVar6 + dVar3 + (dVar11 * dVar8 - dVar9 * dVar1);
  return;
}



// FUNCTION 146bed438 FUN_146bed438 body=858 status=ok
// SIG undefined FUN_146bed438(void)

double FUN_146bed438(longlong *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
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
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = *param_1;
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                    (ulonglong)(uVar14 & 0x1ff) * 4);
  if ((int)uVar14 < *(int *)(lVar3 + 200)) {
    if ((int)uVar10 < 1) {
      dVar16 = 0.0;
    }
    else {
      dVar16 = 0.0;
      do {
        uVar14 = uVar14 + 1;
        lVar3 = *(longlong *)(*param_1 + 8);
        uVar2 = *(uint *)(*(longlong *)
                           (*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 4);
        lVar4 = *(longlong *)(lVar3 + 0x10);
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
        uVar9 = (ulonglong)uVar2 & 0x1ff;
        uVar2 = *(uint *)(lVar3 + uVar9 * 0xc);
        lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
        uVar13 = (ulonglong)uVar2 & 0x1ff;
        local_f8 = *(undefined8 *)(lVar5 + 0x10 + uVar13 * 0x18);
        puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x18);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar2 = *(uint *)(lVar3 + 4 + uVar9 * 0xc);
        lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
        uVar13 = (ulonglong)uVar2 & 0x1ff;
        local_d8 = *(undefined8 *)(lVar5 + 0x10 + uVar13 * 0x18);
        puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x18);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        uVar2 = *(uint *)(lVar3 + 8 + uVar9 * 0xc);
        lVar3 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
        uVar9 = (ulonglong)uVar2 & 0x1ff;
        puVar1 = (undefined8 *)(lVar3 + uVar9 * 0x18);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        local_b8 = *(undefined8 *)(lVar3 + 0x10 + uVar9 * 0x18);
        local_88._0_4_ = (undefined4)uVar6;
        local_88._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_80._0_4_ = (undefined4)uVar7;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_108 = (undefined4)local_88;
        uStack_104 = local_88._4_4_;
        uStack_100 = (undefined4)uStack_80;
        uStack_fc = uStack_80._4_4_;
        local_a8 = local_e8;
        uStack_a0 = uStack_e0;
        local_98 = local_d8;
        local_88 = uVar6;
        uStack_80 = uVar7;
        local_78 = local_f8;
        dVar15 = (double)FUN_146bed793(&local_108,&local_e8,&local_c8,param_3);
        dVar16 = dVar16 + dVar15 / 12.566370614359172;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else {
    if ((int)uVar10 < 0) {
      uVar10 = ~uVar10;
      cVar8 = FUN_146beda7c(lVar3,uVar10,param_3);
      if ((cVar8 == '\0') && (cVar8 = FUN_146bedb6c(param_1,uVar10,param_3), cVar8 != '\0')) {
        dVar15 = (double)FUN_146bedc1c(param_1,uVar10,param_3);
      }
      else {
        local_118 = *(undefined8 *)(param_3 + 4);
        local_128 = *param_3;
        uStack_124 = param_3[1];
        uStack_120 = param_3[2];
        uStack_11c = param_3[3];
        dVar15 = (double)FUN_146bed438(param_1,uVar10);
      }
      dVar16 = 0.0;
    }
    else {
      iVar11 = uVar10 - 1;
      iVar12 = *(int *)(*(longlong *)
                         (*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) + -1;
      cVar8 = FUN_146beda7c(lVar3,iVar11,param_3);
      if ((cVar8 == '\0') && (cVar8 = FUN_146bedb6c(param_1,iVar11,param_3), cVar8 != '\0')) {
        dVar16 = (double)FUN_146bedc1c(param_1,iVar11,param_3);
      }
      else {
        local_138 = *(undefined8 *)(param_3 + 4);
        local_148 = *param_3;
        uStack_144 = param_3[1];
        uStack_140 = param_3[2];
        uStack_13c = param_3[3];
        dVar16 = (double)FUN_146bed438(param_1,iVar11);
      }
      dVar16 = dVar16 + 0.0;
      cVar8 = FUN_146beda7c(*param_1,iVar12,param_3);
      if ((cVar8 == '\0') && (cVar8 = FUN_146bedb6c(param_1,iVar12,param_3), cVar8 != '\0')) {
        dVar15 = (double)FUN_146bedc1c(param_1,iVar12,param_3);
      }
      else {
        local_158 = *(undefined8 *)(param_3 + 4);
        local_168 = *param_3;
        uStack_164 = param_3[1];
        uStack_160 = param_3[2];
        uStack_15c = param_3[3];
        dVar15 = (double)FUN_146bed438(param_1,iVar12);
      }
    }
    dVar16 = dVar16 + dVar15;
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar16;
}



// FUNCTION 146bed793 FUN_146bed793 body=745 status=ok
// SIG undefined FUN_146bed793(void)

double FUN_146bed793(double *param_1,double *param_2,double *param_3,double *param_4)

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
  
  *param_1 = *param_1 - *param_4;
  param_1[1] = param_1[1] - param_4[1];
  param_1[2] = param_1[2] - param_4[2];
  *param_2 = *param_2 - *param_4;
  param_2[1] = param_2[1] - param_4[1];
  param_2[2] = param_2[2] - param_4[2];
  dVar12 = *param_3 - *param_4;
  *param_3 = dVar12;
  dVar7 = param_3[1] - param_4[1];
  param_3[1] = dVar7;
  dVar6 = param_3[2] - param_4[2];
  param_3[2] = dVar6;
  dVar9 = *param_1;
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar8 = SQRT(dVar2 * dVar2 + dVar9 * dVar9 + dVar1 * dVar1);
  dVar10 = SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4);
  dVar11 = SQRT(dVar6 * dVar6 + dVar12 * dVar12 + dVar7 * dVar7);
  dVar9 = atan2((dVar7 * dVar3 - dVar12 * dVar4) * dVar2 +
                ((dVar4 * dVar6 - dVar5 * dVar7) * dVar9 - (dVar6 * dVar3 - dVar5 * dVar12) * dVar1)
                ,(dVar6 * dVar2 + dVar12 * dVar9 + dVar7 * dVar1) * dVar10 +
                 (dVar5 * dVar6 + dVar3 * dVar12 + dVar7 * dVar4) * dVar8 +
                 dVar8 * dVar10 * dVar11 + (dVar2 * dVar5 + dVar9 * dVar3 + dVar1 * dVar4) * dVar11)
  ;
  return dVar9 * -2.0;
}



// FUNCTION 146beda7c FUN_146beda7c body=239 status=ok
// SIG undefined FUN_146beda7c(void)

undefined8 FUN_146beda7c(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)(param_1 + 0x60);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar7 = *(double *)(lVar4 + lVar5) + dVar6;
  if (*(double *)(lVar3 + lVar5) - dVar7 <= *param_3) {
    dVar8 = *(double *)(lVar4 + 8 + lVar5) + dVar6;
    dVar1 = *(double *)(lVar3 + 8 + lVar5);
    if (dVar1 - dVar8 <= param_3[1]) {
      dVar6 = dVar6 + *(double *)(lVar4 + 0x10 + lVar5);
      dVar2 = *(double *)(lVar3 + 0x10 + lVar5);
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                      (param_3[2] <= dVar6 + dVar2 && dVar2 - dVar6 <= param_3[2]) &
                      -(*param_3 <= dVar7 + *(double *)(lVar3 + lVar5)) &
                      -(param_3[1] <= dVar8 + dVar1));
    }
  }
  return 0;
}



// FUNCTION 146bedb6c FUN_146bedb6c body=176 status=ok
// SIG undefined FUN_146bedb6c(void)

undefined8 FUN_146bedb6c(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          dVar3 = *param_3 - *(double *)(lVar2 + 8);
          dVar4 = param_3[1] - *(double *)(lVar2 + 0x10);
          dVar5 = param_3[2] - *(double *)(lVar2 + 0x18);
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                          *(double *)(param_1 + 0x60) * *(double *)(lVar2 + 0x20) <
                          SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4));
        }
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146bedc1c FUN_146bedc1c body=265 status=ok
// SIG undefined FUN_146bedc1c(void)

double FUN_146bedc1c(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2)
        goto LAB_146bedc2f;
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146bedc2f:
  if (*(int *)(param_1 + 0x68) == 2) {
    dVar3 = (double)FUN_146bedd25(lVar2 + 8,lVar2 + 0x28,lVar2 + 0x40);
    return dVar3;
  }
  dVar3 = *(double *)(lVar2 + 0x18) - param_3[2];
  dVar4 = *(double *)(lVar2 + 0x10) - param_3[1];
  dVar5 = *(double *)(lVar2 + 8) - *param_3;
  dVar6 = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
  dVar6 = 1.0 / (dVar6 * dVar6 * dVar6);
  return (dVar3 * dVar6 * *(double *)(lVar2 + 0x38) +
         dVar6 * dVar5 * *(double *)(lVar2 + 0x28) + dVar4 * dVar6 * *(double *)(lVar2 + 0x30)) *
         0.07957747154594767;
}



// FUNCTION 146bedd25 FUN_146bedd25 body=427 status=ok
// SIG undefined FUN_146bedd25(void)

double FUN_146bedd25(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = param_1[2] - param_4[2];
  dVar4 = param_1[1] - param_4[1];
  dVar5 = *param_1 - *param_4;
  dVar2 = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
  dVar6 = dVar2 * dVar2 * dVar2 * 12.566370614359172;
  dVar1 = 1.0 / dVar6;
  dVar2 = -3.0 / (dVar6 * dVar2 * dVar2);
  dVar7 = dVar3 * dVar2;
  dVar6 = dVar4 * dVar2;
  dVar2 = dVar2 * dVar5;
  return (dVar7 * dVar3 + dVar1) * param_3[8] +
         dVar7 * dVar5 * param_3[6] + dVar4 * dVar7 * param_3[7] +
         dVar3 * dVar6 * param_3[5] +
         dVar5 * dVar6 * param_3[3] + (dVar6 * dVar4 + dVar1) * param_3[4] +
         dVar3 * dVar2 * param_3[2] +
         (dVar2 * dVar5 + dVar1) * *param_3 + dVar4 * dVar2 * param_3[1] +
         (param_2[2] * dVar3 + *param_2 * dVar5 + param_2[1] * dVar4) * dVar1;
}



// FUNCTION 146bedee6 FUN_146bedee6 body=103 status=ok
// SIG undefined FUN_146bedee6(void)

void FUN_146bedee6(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1 * 0x200 + param_1[1];
  uVar5 = (uint)param_3;
  if (uVar4 != uVar5) {
    if (uVar5 <= uVar4) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18) = param_2[2];
      uVar3 = param_2[1];
      puVar1 = (undefined8 *)(lVar2 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
      *puVar1 = *param_2;
      puVar1[1] = uVar3;
      return;
    }
    FUN_146bee1a4(param_1,param_3 & 0xffffffff);
  }
  FUN_146bee100(param_1,param_2);
  return;
}



// FUNCTION 146bedf4e FUN_146bedf4e body=89 status=ok
// SIG undefined FUN_146bedf4e(void)

void FUN_146bedf4e(int *param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = *param_2;
      return;
    }
    FUN_1411b328a(param_1,param_3 & 0xffffffff);
  }
  FUN_146bee31c(param_1,param_2);
  return;
}



// FUNCTION 146bedfa8 FUN_146bedfa8 body=170 status=ok
// SIG undefined FUN_146bedfa8(void)

longlong * FUN_146bedfa8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_141082b5c(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_141082bc6(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x800);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3bbe(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146bee054 FUN_146bee054 body=170 status=ok
// SIG undefined FUN_146bee054(void)

longlong * FUN_146bee054(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_141067b84(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_141067bec(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x3000,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x3000);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141040c48(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146bee100 FUN_146bee100 body=163 status=ok
// SIG undefined FUN_146bee100(void)

void FUN_146bee100(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  
  iVar5 = *param_1;
  uVar6 = param_1[1];
  if (uVar6 == 0x200) {
    iVar2 = param_1[4];
    if (iVar5 == iVar2 + -1) {
      _Dst = (void *)FUN_14001cc68(0x3000);
      memset(_Dst,0,0x3000);
      param_1[4] = iVar2 + 1U;
      if ((uint)param_1[5] < iVar2 + 1U) {
        FUN_141040c48(param_1 + 2,iVar2);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) = _Dst;
      iVar5 = *param_1;
    }
    iVar5 = iVar5 + 1;
    *param_1 = iVar5;
    param_1[1] = 0;
    uVar6 = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar5 * 8);
  *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar6 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + (ulonglong)uVar6 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146bee1a4 FUN_146bee1a4 body=214 status=ok
// SIG undefined FUN_146bee1a4(void)

void FUN_146bee1a4(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar6 = uVar3 - *puVar2;
    if (iVar6 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_14582f6b2(plVar1,uVar3,0);
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x3000);
        memset(_Dst,0,0x3000);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_141040c48(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar6;
  }
  return;
}



// FUNCTION 146bee27a FUN_146bee27a body=63 status=ok
// SIG undefined FUN_146bee27a(void)

void FUN_146bee27a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bee2ba(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146bee2ba FUN_146bee2ba body=97 status=ok
// SIG undefined FUN_146bee2ba(void)

ulonglong FUN_146bee2ba(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146bee31c FUN_146bee31c body=148 status=ok
// SIG undefined FUN_146bee31c(void)

void FUN_146bee31c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x800);
      memset(_Dst,0,0x800);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_1411b3bbe(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) + (ulonglong)uVar3 * 4) =
       *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146bee3b0 FUN_146bee3b0 body=63 status=ok
// SIG undefined FUN_146bee3b0(void)

void FUN_146bee3b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bee3f0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146bee3f0 FUN_146bee3f0 body=97 status=ok
// SIG undefined FUN_146bee3f0(void)

ulonglong FUN_146bee3f0(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146bee452 FUN_146bee452 body=95 status=ok
// SIG undefined FUN_146bee452(void)

void FUN_146bee452(longlong param_1)

{
  FUN_146bee5d0(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bee4b2 FUN_146bee4b2 body=97 status=ok
// SIG undefined FUN_146bee4b2(void)

undefined8 * FUN_146bee4b2(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x1000);
  memset(_Dst,0,0x1000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_146becfc2(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 146bee514 FUN_146bee514 body=85 status=ok
// SIG undefined FUN_146bee514(void)

undefined8 * FUN_146bee514(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 146bee56a FUN_146bee56a body=101 status=ok
// SIG undefined FUN_146bee56a(void)

undefined8 * FUN_146bee56a(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145c3f772(param_1,param_2);
  return param_1;
}



// FUNCTION 146bee5d0 FUN_146bee5d0 body=103 status=ok
// SIG undefined FUN_146bee5d0(void)

void FUN_146bee5d0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_146bee638(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bee638 FUN_146bee638 body=96 status=ok
// SIG undefined FUN_146bee638(void)

void FUN_146bee638(longlong param_1,int param_2)

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



// FUNCTION 146bee698 FUN_146bee698 body=104 status=ok
// SIG undefined FUN_146bee698(void)

undefined8 * FUN_146bee698(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = param_2;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 146bee700 FUN_146bee700 body=113 status=ok
// SIG undefined FUN_146bee700(void)

void FUN_146bee700(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 146bee772 FUN_146bee772 body=62 status=ok
// SIG undefined FUN_146bee772(void)

void FUN_146bee772(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bee7b0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146bee7b0 FUN_146bee7b0 body=112 status=ok
// SIG undefined FUN_146bee7b0(void)

ulonglong FUN_146bee7b0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146bee7ea;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_146bee7ea:
  return param_2 & 0xffffffff;
}



// FUNCTION 146bee820 FUN_146bee820 body=147 status=ok
// SIG undefined FUN_146bee820(void)

void FUN_146bee820(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bee8b4 FUN_146bee8b4 body=70 status=ok
// SIG undefined FUN_146bee8b4(void)

void FUN_146bee8b4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_146ba12c2(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 146bee918 FUN_146bee918 body=594 status=ok
// SIG undefined FUN_146bee918(void)

void FUN_146bee918(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  ulonglong uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  lVar8 = *(longlong *)(param_1 + 8);
  iVar6 = *(int *)(lVar8 + 0x170);
  if (iVar6 < 0) {
LAB_146beeb63:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 == 0) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    FUN_14481578e(&local_78,iVar6);
    lVar8 = *(longlong *)(param_1 + 8);
    iVar6 = *(int *)(lVar8 + 0x170);
    local_88 = 0;
    uStack_80 = 0;
    if (iVar6 < 0) goto LAB_146beeb63;
    if (iVar6 != 0) {
      FUN_1447a8aa0(&local_88,iVar6);
      lVar8 = *(longlong *)(param_1 + 8);
    }
  }
  if (0 < *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144)) {
    uVar7 = 0;
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar8 + 0x148) + (ulonglong)(uVar7 >> 9) * 8) +
                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
        FUN_146beeb6c(&local_a0,lVar8,uVar7);
        dVar2 = local_90 * local_90 + local_a0 * local_a0 + local_98 * local_98;
        local_b8 = dVar2;
        sVar4 = _dtest(&local_b8);
        if ((sVar4 != 2) &&
           (local_b8 = dVar2, sVar4 = _dtest(&local_b8), uVar3 = uStack_70, sVar4 < 1)) {
          lVar8 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_1446f48e2(&local_78,uVar3 & 0xffffffff);
          }
          *(uint *)(local_78 + lVar8 * 4) = uVar7;
          FUN_146beeb6c(&local_b8,*(undefined8 *)(param_1 + 8),uVar7);
          uVar3 = uStack_80;
          lVar8 = (longlong)(int)uStack_80;
          uVar5 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
          if (uStack_80._4_4_ < uVar5) {
            FUN_1403e3958(&local_88,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_88 + 0x10 + lVar8 * 0x18) = local_a8;
          pdVar1 = (double *)(local_88 + lVar8 * 0x18);
          *pdVar1 = local_b8;
          pdVar1[1] = dStack_b0;
        }
        lVar8 = *(longlong *)(param_1 + 8);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144));
  }
  FUN_146beec38(param_1,&local_78,&local_88,uStack_70 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146beeb6c FUN_146beeb6c body=203 status=ok
// SIG undefined FUN_146beeb6c(void)

void FUN_146beeb6c(double *param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar9 = *(longlong *)(param_2 + 0x10);
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar13 = (ulonglong)(param_3 & 0x1ff);
  uVar7 = *(uint *)(lVar10 + uVar13 * 0xc);
  uVar8 = *(uint *)(lVar10 + 4 + uVar13 * 0xc);
  lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar14 = (ulonglong)uVar7 & 0x1ff;
  dVar1 = *(double *)(lVar11 + 8 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar11 + 0x10 + uVar14 * 0x18);
  lVar12 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
  uVar15 = (ulonglong)uVar8 & 0x1ff;
  uVar7 = *(uint *)(lVar10 + 8 + uVar13 * 0xc);
  lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar13 = (ulonglong)uVar7 & 0x1ff;
  dVar3 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  dVar4 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  dVar5 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  dVar6 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  *param_1 = (*(double *)(lVar11 + uVar14 * 0x18) + *(double *)(lVar12 + uVar15 * 0x18) +
             *(double *)(lVar9 + uVar13 * 0x18)) * 0.3333333333333333;
  param_1[1] = (dVar1 + dVar5 + dVar6) * 0.3333333333333333;
  param_1[2] = (dVar2 + dVar3 + dVar4) * 0.3333333333333333;
  return;
}



// FUNCTION 146beec38 FUN_146beec38 body=773 status=ok
// SIG undefined FUN_146beec38(void)

void FUN_146beec38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_146beef3e(&local_b0);
  FUN_146beef3e(local_118);
  local_1c0 = &local_148;
  local_148 = 0x7fefffffffffffff;
  local_140 = 0x7fefffffffffffff;
  local_138 = 0x7fefffffffffffff;
  local_130 = 0xffefffffffffffff;
  local_128 = 0xffefffffffffffff;
  local_120 = 0xffefffffffffffff;
  local_1d8 = *(undefined4 *)(param_1 + 0x18);
  local_1e0 = 0;
  uVar8 = 0;
  local_1e8 = param_4;
  local_1d0 = &local_b0;
  local_1c8 = local_118;
  local_1a4 = FUN_146beef78(param_1,param_2,param_3,0);
  *(undefined8 *)(param_1 + 0x68) = local_b0;
  FUN_146bedfa8(param_1 + 0x70,local_a8);
  *(undefined8 *)(param_1 + 0x80) = local_98;
  FUN_146bee054(param_1 + 0x88,local_90);
  *(undefined8 *)(param_1 + 0x98) = local_80;
  FUN_146bee054(param_1 + 0xa0,local_78);
  *(undefined8 *)(param_1 + 0xb0) = local_68;
  FUN_146bedfa8(param_1 + 0xb8,local_60);
  *(int *)(param_1 + 200) = local_4c;
  local_1b0 = param_1;
  if (0 < local_b8) {
    local_198 = param_1 + 0x68;
    local_1a0 = param_1 + 0x80;
    do {
      uVar9 = (ulonglong)(uVar8 >> 9);
      lVar5 = *(longlong *)(local_f8 + uVar9 * 8);
      lVar6 = (ulonglong)((uVar8 & 0x1ff) * 8) * 3;
      piVar2 = (int *)(lVar5 + lVar6);
      local_168 = *piVar2;
      iStack_164 = piVar2[1];
      iStack_160 = piVar2[2];
      iStack_15c = piVar2[3];
      local_158 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      iVar1 = local_50 + uVar8;
      FUN_146bedee6(local_1a0,&local_168,iVar1);
      lVar5 = *(longlong *)(local_e0 + uVar9 * 8);
      puVar3 = (undefined4 *)(lVar5 + lVar6);
      local_188 = *puVar3;
      uStack_184 = puVar3[1];
      uStack_180 = puVar3[2];
      uStack_17c = puVar3[3];
      local_178 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      FUN_146bedee6(param_1 + 0x98,&local_188,iVar1);
      local_18c = *(int *)(*(longlong *)(local_110 + uVar9 * 8) + (ulonglong)(uVar8 & 0x1ff) * 4) +
                  local_4c;
      FUN_146bedf4e(local_198,&local_18c,iVar1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b8);
  }
  if (0 < local_b4) {
    lVar5 = local_1b0 + 0xb0;
    uVar8 = 0;
    do {
      uVar4 = *(uint *)(*(longlong *)(local_c8 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      uVar7 = ~uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4 + local_50;
      }
      local_168 = uVar7 + 1;
      FUN_146bedf4e(lVar5,&local_168,local_4c + uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b4);
  }
  *(int *)(local_1b0 + 0xcc) = local_50 + local_1a4;
  FUN_146bef71c(local_118);
  FUN_146bef71c(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146beef3e FUN_146beef3e body=57 status=ok
// SIG undefined FUN_146beef3e(void)

longlong FUN_146beef3e(longlong param_1)

{
  FUN_141040b84();
  FUN_141040be6(param_1 + 0x18);
  FUN_141040be6(param_1 + 0x30);
  FUN_141040b84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 146beef78 FUN_146beef78 body=1954 status=ok
// SIG undefined FUN_146beef78(void)

uint FUN_146beef78(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
                  int param_6,int param_7,longlong param_8,longlong param_9,double *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  int local_108;
  longlong local_100;
  longlong local_f8;
  double *local_f0;
  int local_dc;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  pdVar8 = param_10;
  lVar7 = param_8;
  uVar23 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_2[1] < 1) {
    uVar27 = SUB84(DAT_14c8464f0,0);
    uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    dVar30 = DAT_14c8464f0 + 0.0;
    dVar31 = DAT_14c8464e8 + 0.0;
    dVar25 = DAT_14c8464e0 + 0.0;
    dVar26 = DAT_14c8464e8;
    dVar29 = DAT_14c8464e0;
  }
  else {
    dVar25 = -1.79769313486232e+308;
    uVar27 = 0xffffffff;
    uVar28 = 0x7fefffff;
    dVar31 = -1.79769313486232e+308;
    dVar30 = -1.79769313486232e+308;
    dVar26 = 1.79769313486232e+308;
    dVar29 = 1.79769313486232e+308;
  }
  *param_10 = dVar29;
  param_10[1] = dVar26;
  param_10[2] = (double)CONCAT44(uVar28,uVar27);
  param_10[3] = dVar25;
  param_10[4] = dVar31;
  param_10[5] = dVar30;
  local_c8 = param_1;
  if (param_7 < (int)param_5) {
    local_98 = (double)CONCAT44(local_98._4_4_,param_6);
    pcVar3 = *(code **)(param_1 + 0x20);
    plVar12 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_1 + 0x30);
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    iVar10 = (*pcVar3)(uVar11,&local_98,pdVar8);
    lVar9 = local_c8;
    pdVar8 = param_10;
    lVar7 = param_9;
    if ((int)uVar23 < 1) {
      uVar27 = 0xffffffff;
      uVar28 = 0x7fefffff;
      dVar26 = -1.79769313486232e+308;
    }
    else {
      dVar29 = 1.79769313486232e+308;
      lVar18 = 0;
      dVar25 = -1.79769313486232e+308;
      do {
        dVar26 = *(double *)((longlong)iVar10 * 8 + *param_3 + (longlong)param_4 * 0x18 + lVar18);
        uVar27 = SUB84(dVar26,0);
        uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (dVar29 <= dVar26) {
          uVar27 = SUB84(dVar29,0);
          uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        if (dVar26 <= dVar25) {
          dVar26 = dVar25;
        }
        lVar18 = lVar18 + 0x18;
        dVar29 = (double)CONCAT44(uVar28,uVar27);
        dVar25 = dVar26;
      } while ((ulonglong)uVar23 * 0x18 != lVar18);
    }
    if (dVar26 - (double)CONCAT44(uVar28,uVar27) <= 1e-08) {
      uVar22 = (ulonglong)(uint)((int)uVar23 / 2);
    }
    else {
      uVar22 = 0;
      if (1 < (int)uVar23) {
        dVar26 = (dVar26 + (double)CONCAT44(uVar28,uVar27)) * 0.5;
        iVar19 = uVar23 - 1;
        lVar13 = (longlong)param_4;
        local_c0 = lVar13 * 4;
        lVar18 = lVar13 * 0x18;
        uVar22 = 0;
        while( true ) {
          lVar15 = *param_3;
          iVar21 = (int)uVar22;
          uVar22 = (longlong)iVar21 - 1;
          puVar2 = (undefined8 *)((lVar13 + iVar21) * 0x18 + -0x18 + lVar15);
          do {
            puVar24 = puVar2;
            uVar22 = uVar22 + 1;
            puVar2 = puVar24 + 3;
          } while ((double)puVar24[(longlong)iVar10 + 3] <= dVar26);
          lVar20 = (longlong)iVar19;
          lVar17 = 0;
          lVar14 = lVar20 * 0x18;
          do {
            lVar16 = lVar14;
            lVar17 = lVar17 + -1;
            lVar14 = lVar16 + -0x18;
          } while (dVar26 < *(double *)(lVar18 + (longlong)iVar10 * 8 + lVar15 + lVar16));
          if (lVar20 + lVar17 + 1 <= (longlong)uVar22) break;
          lVar15 = lVar15 + lVar18 + lVar16 + -0x18;
          iVar19 = iVar19 + 1 + (int)lVar17;
          uVar11 = puVar24[5];
          uVar4 = *puVar2;
          uVar5 = puVar24[4];
          uVar6 = *(undefined8 *)(lVar15 + 0x20);
          *puVar2 = *(undefined8 *)(lVar15 + 0x18);
          puVar24[4] = uVar6;
          puVar24[5] = *(undefined8 *)(lVar15 + 0x28);
          lVar15 = *param_3;
          *(undefined8 *)(lVar16 + 0x10 + lVar15 + lVar18) = uVar11;
          puVar2 = (undefined8 *)(lVar16 + lVar15 + lVar18);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          lVar14 = local_c0 + *param_2;
          uVar27 = *(undefined4 *)(lVar14 + uVar22 * 4);
          lVar15 = lVar13 * 4 + 4 + lVar20 * 4;
          *(undefined4 *)(lVar14 + uVar22 * 4) = *(undefined4 *)(*param_2 + lVar15 + lVar17 * 4);
          *(undefined4 *)(lVar15 + *param_2 + lVar17 * 4) = uVar27;
        }
      }
    }
    iVar19 = (int)uVar22;
    local_d8 = (ulonglong)(uVar23 - iVar19);
    local_98 = 1.79769313486232e+308;
    dStack_90 = 1.79769313486232e+308;
    local_88 = 1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    local_78 = -1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    iVar10 = param_6 + 1;
    local_f0 = param_10;
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = iVar19;
    local_110 = iVar10;
    local_dc = param_4;
    local_d0 = param_2;
    local_9c = FUN_146beef78(local_c8,param_2,param_3,param_4);
    local_f0 = &local_98;
    local_f8 = lVar7;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = (int)local_d8;
    local_110 = iVar10;
    local_a0 = FUN_146beef78(lVar9,param_2,param_3,iVar19 + param_4);
    dVar26 = pdVar8[1];
    uVar27 = SUB84(dVar26,0);
    uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
    dVar29 = *pdVar8;
    if (local_98 <= *pdVar8) {
      dVar29 = local_98;
    }
    *pdVar8 = dVar29;
    if (dStack_90 <= dVar26) {
      uVar27 = SUB84(dStack_90,0);
      uVar28 = (undefined4)((ulonglong)dStack_90 >> 0x20);
    }
    pdVar8[1] = (double)CONCAT44(uVar28,uVar27);
    dVar26 = pdVar8[2];
    if (local_88 <= pdVar8[2]) {
      dVar26 = local_88;
    }
    pdVar8[2] = dVar26;
    dVar26 = pdVar8[3];
    if (pdVar8[3] <= local_80) {
      dVar26 = local_80;
    }
    pdVar8[3] = dVar26;
    dVar26 = pdVar8[4];
    if (pdVar8[4] <= local_78) {
      dVar26 = local_78;
    }
    pdVar8[4] = dVar26;
    dVar26 = pdVar8[5];
    if (pdVar8[5] <= local_70) {
      dVar26 = local_70;
    }
    pdVar8[5] = dVar26;
    uVar23 = *(uint *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = uVar23 + 1;
    FUN_146bedf4e(lVar7,lVar7 + 100,uVar23);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_9c);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_a0);
    local_a8 = (pdVar8[2] + pdVar8[5]) * 0.5;
    local_b0 = (pdVar8[1] + pdVar8[4]) * 0.5;
    local_b8 = (*pdVar8 + pdVar8[3]) * 0.5;
    FUN_146bedee6(lVar7 + 0x18,&local_b8,uVar23);
    local_a8 = (pdVar8[5] - pdVar8[2]) * 0.5;
    local_b0 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_b8 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_b8,uVar23);
  }
  else {
    local_d0 = (longlong *)(ulonglong)*(uint *)(param_8 + 0x60);
    *(uint *)(param_8 + 0x60) = *(uint *)(param_8 + 0x60) + 1;
    piVar1 = (int *)(param_8 + 100);
    FUN_146bedf4e(param_8,piVar1);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&param_5);
    lVar9 = local_c8;
    if ((int)param_5 < 1) {
      dVar26 = pdVar8[2];
      dVar29 = pdVar8[5];
      dVar25 = *pdVar8;
      dVar30 = pdVar8[1];
      dVar31 = pdVar8[4];
      uVar27 = SUB84(pdVar8[3],0);
      uVar28 = (undefined4)((ulonglong)pdVar8[3] >> 0x20);
    }
    else {
      lVar13 = 0;
      lVar18 = 0;
      do {
        *piVar1 = *piVar1 + 1;
        FUN_146bedf4e(lVar7 + 0x48,*param_2 + (longlong)param_4 * 4 + lVar13);
        FUN_146bef794(&local_98,*(undefined8 *)(lVar9 + 8),
                      *(undefined4 *)(*param_2 + (longlong)param_4 * 4 + lVar18 * 4));
        dVar25 = *pdVar8;
        if (local_98 <= *pdVar8) {
          dVar25 = local_98;
        }
        *pdVar8 = dVar25;
        dVar30 = pdVar8[1];
        if (dStack_90 <= pdVar8[1]) {
          dVar30 = dStack_90;
        }
        pdVar8[1] = dVar30;
        dVar26 = pdVar8[2];
        if (local_88 <= pdVar8[2]) {
          dVar26 = local_88;
        }
        pdVar8[2] = dVar26;
        dVar29 = pdVar8[3];
        uVar27 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        if (dVar29 <= local_80) {
          uVar27 = SUB84(local_80,0);
          uVar28 = (undefined4)((ulonglong)local_80 >> 0x20);
        }
        pdVar8[3] = (double)CONCAT44(uVar28,uVar27);
        dVar31 = pdVar8[4];
        if (pdVar8[4] <= local_78) {
          dVar31 = local_78;
        }
        pdVar8[4] = dVar31;
        dVar29 = pdVar8[5];
        if (pdVar8[5] <= local_70) {
          dVar29 = local_70;
        }
        pdVar8[5] = dVar29;
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 4;
      } while (lVar18 < (int)param_5);
    }
    plVar12 = local_d0;
    lVar7 = param_8;
    local_88 = (dVar29 + dVar26) * 0.5;
    dStack_90 = (dVar31 + dVar30) * 0.5;
    local_98 = ((double)CONCAT44(uVar28,uVar27) + dVar25) * 0.5;
    uVar23 = (uint)local_d0;
    FUN_146bedee6(param_8 + 0x18,&local_98,(ulonglong)local_d0 & 0xffffffff);
    local_88 = (pdVar8[5] - pdVar8[2]) * 0.5;
    dStack_90 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_98 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_98,(ulonglong)plVar12 & 0xffffffff);
    uVar23 = ~uVar23;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 146bef71c FUN_146bef71c body=120 status=ok
// SIG undefined FUN_146bef71c(void)

void FUN_146bef71c(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146bef794 FUN_146bef794 body=276 status=ok
// SIG undefined FUN_146bef794(void)

void FUN_146bef794(double *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar5 = (ulonglong)(param_3 & 0x1ff);
  uVar6 = *(uint *)(lVar1 + uVar5 * 0xc);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
  uVar7 = (ulonglong)(uVar6 & 0x1ff);
  dVar14 = *(double *)(lVar2 + uVar7 * 0x18);
  dVar15 = *(double *)(lVar2 + 8 + uVar7 * 0x18);
  dVar16 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18);
  bVar4 = false;
  dVar8 = dVar14;
  dVar10 = dVar15;
  dVar12 = dVar16;
  uVar6 = *(uint *)(lVar1 + 4 + uVar5 * 0xc);
  do {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
    uVar7 = (ulonglong)(uVar6 & 0x1ff);
    dVar11 = *(double *)(lVar2 + uVar7 * 0x18);
    dVar9 = dVar11;
    if ((dVar8 <= dVar11) && (dVar9 = dVar8, dVar14 < dVar11)) {
      dVar14 = dVar11;
    }
    dVar8 = *(double *)(lVar2 + 8 + uVar7 * 0x18);
    dVar11 = dVar8;
    if ((dVar10 <= dVar8) && (dVar11 = dVar10, dVar15 < dVar8)) {
      dVar15 = dVar8;
    }
    dVar8 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18);
    dVar13 = dVar8;
    if ((dVar12 <= dVar8) && (dVar13 = dVar12, dVar16 < dVar8)) {
      dVar16 = dVar8;
    }
    bVar3 = !bVar4;
    bVar4 = true;
    dVar8 = dVar9;
    dVar10 = dVar11;
    dVar12 = dVar13;
    uVar6 = *(uint *)(lVar1 + 8 + uVar5 * 0xc);
  } while (bVar3);
  *param_1 = dVar9;
  param_1[1] = dVar11;
  param_1[2] = dVar13;
  param_1[3] = dVar14;
  param_1[4] = dVar15;
  param_1[5] = dVar16;
  return;
}



// FUNCTION 146bef8a8 FUN_146bef8a8 body=130 status=ok
// SIG undefined FUN_146bef8a8(void)

void FUN_146bef8a8(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (-1 < *(int *)(lVar1 + 0xcc)) {
    if (*(ulonglong *)(lVar1 + 0x10) ==
        (ulonglong)
        (uint)(*(int *)(*(longlong *)(lVar1 + 8) + 0x214) +
              *(int *)(*(longlong *)(lVar1 + 8) + 0x218))) goto LAB_146bef8d9;
    lVar1 = *param_1;
  }
  FUN_146bee918(lVar1,0);
  *(ulonglong *)(lVar1 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar1 + 8) + 0x214) +
             *(int *)(*(longlong *)(lVar1 + 8) + 0x218));
LAB_146bef8d9:
  if ((param_2 != '\0') || (param_1[0xb] != *(longlong *)(*param_1 + 0x10))) {
    FUN_146bef92a(param_1);
    param_1[0xb] = *(longlong *)(*param_1 + 0x10);
  }
  return;
}



// FUNCTION 146bef92a FUN_146bef92a body=208 status=ok
// SIG undefined FUN_146bef92a(void)

void FUN_146bef92a(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c0 [72];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_146bef9fc(local_c0,*(undefined8 *)(*param_1 + 8));
  FUN_146beff5c(param_1 + 1,0);
  local_78 = 0;
  local_70 = 0xffffffff00000000;
  local_58 = 0;
  local_50 = 0;
  uStack_4c = 0x80;
  uStack_48 = 0xffffffff;
  uStack_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_d8 = &local_78;
  local_d0 = local_c0;
  FUN_146befada(param_1,*(undefined4 *)(*param_1 + 0xcc),0,1);
  FUN_145a22d80(&local_78);
  FUN_146bee452(local_c0);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bef9fc FUN_146bef9fc body=220 status=ok
// SIG undefined FUN_146bef9fc(void)

longlong FUN_146bef9fc(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141040be6();
  FUN_141040be6(param_1 + 0x18);
  FUN_146bee4b2(param_1 + 0x30);
  iVar1 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  FUN_146bee1a4(param_1,iVar1);
  FUN_146bee1a4(param_1 + 0x18,iVar1);
  FUN_146b9c0e2(param_1 + 0x30);
  local_48 = &local_60;
  local_68 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_146befd4e;
  local_70 = 0;
  local_60 = param_2;
  local_58 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146befada FUN_146befada body=626 status=ok
// SIG undefined FUN_146befada(void)

int FUN_146befada(longlong *param_1,uint param_2,int param_3,int param_4,undefined8 *param_5,
                 undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145a22d80(param_5);
  lVar3 = *param_1;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  if ((int)uVar2 < *(int *)(lVar3 + 200)) {
LAB_146befb3d:
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    goto LAB_146befb56;
  }
  while( true ) {
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) break;
    param_2 = ~uVar1;
    FUN_145a22d80(param_5);
    lVar3 = *param_1;
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                     (ulonglong)(param_2 & 0x1ff) * 4);
    if ((int)uVar2 < *(int *)(lVar3 + 200)) goto LAB_146befb3d;
    param_3 = param_3 + 1;
  }
  iVar4 = uVar1 - 1;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                  (ulonglong)(uVar2 + 1 & 0x1ff) * 4) + -1;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_78 = 0;
  local_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a0 = param_3 + 1;
  local_b0 = param_6;
  local_b8 = param_5;
  local_9c = FUN_146befada(param_1,iVar4,local_a0,param_4);
  local_b0 = param_6;
  local_b8 = &local_98;
  local_a4 = iVar5;
  iVar5 = FUN_146befada(param_1,iVar5,local_a0,param_4);
  iVar5 = iVar5 + local_9c;
  if (param_3 != 0) {
    if (*(int *)((longlong)param_5 + 0xc) == -1) {
      if ((local_90._4_4_ != -1) || (param_4 < iVar5)) {
        if (local_90._4_4_ == -1) {
          FUN_146bee514(param_5);
          FUN_146bf02c6(param_1,iVar4,param_5);
          goto LAB_146befcd4;
        }
        FUN_146bf02c6(param_1,iVar4,&local_98);
        if (&local_98 != param_5) {
          if (local_90._4_4_ == -1) {
            FUN_145a22d80(param_5);
          }
          else {
            FUN_146bee56a(param_5,&local_98);
          }
        }
      }
    }
    else {
LAB_146befcd4:
      if (local_90._4_4_ == -1) {
        FUN_146bf02c6(param_1,local_a4,param_5);
      }
      else {
        FUN_1468b3f6e(param_5,&local_98);
      }
    }
    if (param_4 < iVar5) {
      FUN_146bf03e4(param_1,param_2,param_5,param_6);
    }
  }
  FUN_145a22d80(&local_98);
LAB_146befb56:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146befd56 FUN_146befd56 body=142 status=ok
// SIG undefined FUN_146befd56(void)

void FUN_146befd56(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((-1 < (int)param_2) &&
     (lVar1 = *param_1, (int)param_2 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar2 = param_1[1];
      uVar5 = (ulonglong)((param_2 >> 9) << 3);
      uVar4 = (ulonglong)((param_2 & 0x1ff) << 3);
      lVar3 = uVar4 * 3;
      FUN_146befde4(lVar1,param_2,lVar3 + *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar5),
                    uVar4 + *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar5),
                    *(longlong *)(*(longlong *)(lVar2 + 8) + uVar5) + lVar3);
    }
  }
  return;
}



// FUNCTION 146befde4 FUN_146befde4 body=374 status=ok
// SIG undefined FUN_146befde4(void)

void FUN_146befde4(longlong param_1,uint param_2,undefined4 *param_3,undefined8 param_4,
                  double *param_5)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar6 = (ulonglong)(param_2 & 0x1ff);
  uVar2 = *(uint *)(lVar4 + uVar6 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)uVar2 & 0x1ff;
  local_68 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
  local_78 = *pdVar1;
  dStack_70 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 4 + uVar6 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)uVar2 & 0x1ff;
  local_50 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
  local_60 = *pdVar1;
  dStack_58 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 8 + uVar6 * 0xc);
  lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar6 = (ulonglong)uVar2 & 0x1ff;
  local_38 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  *param_5 = (local_78 + local_60 + local_48) * 0.3333333333333333;
  param_5[1] = (dStack_70 + dStack_58 + dStack_40) * 0.3333333333333333;
  param_5[2] = (local_68 + local_50 + local_38) * 0.3333333333333333;
  local_98 = param_4;
  FUN_146b9cae0(&local_90,&local_78,&local_60,&local_48);
  *(undefined8 *)(param_3 + 4) = local_80;
  *param_3 = local_90;
  param_3[1] = uStack_8c;
  param_3[2] = uStack_88;
  param_3[3] = uStack_84;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146beff5c FUN_146beff5c body=110 status=ok
// SIG undefined FUN_146beff5c(void)

void FUN_146beff5c(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_146bddd86(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_146bf0114(param_1);
    return;
  }
  FUN_146beffca(param_1);
  FUN_146bddd86(param_1,param_2);
  return;
}



// FUNCTION 146beffca FUN_146beffca body=329 status=ok
// SIG undefined FUN_146beffca(void)

void FUN_146beffca(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x8c + (longlong)iVar4 * 0x90) * 4) =
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



// FUNCTION 146bf0114 FUN_146bf0114 body=433 status=ok
// SIG undefined FUN_146bf0114(void)

void FUN_146bf0114(longlong *param_1)

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
        *(int *)(lVar3 + 0x8c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar7) =
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



// FUNCTION 146bf02c6 FUN_146bf02c6 body=285 status=ok
// SIG undefined FUN_146bf02c6(void)

void FUN_146bf02c6(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  while (uVar3 = *(uint *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                          (ulonglong)(param_2 & 0x1ff) * 4), *(int *)(lVar1 + 200) <= (int)uVar3) {
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
    }
    else {
      FUN_146bf02c6(param_1,param_2 - 1,param_3);
      lVar1 = *param_1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                        (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
    }
  }
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4);
  if (0 < iVar2) {
    do {
      uVar3 = uVar3 + 1;
      FUN_1447cbafe(param_3,local_34,
                    (ulonglong)((uVar3 & 0x1ff) << 2) +
                    *(longlong *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8),0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf03e4 FUN_146bf03e4 body=182 status=ok
// SIG undefined FUN_146bf03e4(void)

void FUN_146bf03e4(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_c0 [24];
  undefined1 local_a8 [8];
  undefined1 local_a0 [24];
  undefined1 local_88 [76];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = local_88;
  local_e0 = local_a0;
  local_e8 = local_a8;
  local_d0 = 0x10;
  local_3c = param_2;
  FUN_146bf049b(*(undefined8 *)(*param_1 + 8),param_3,param_4,local_c0);
  local_38 = &local_3c;
  local_30 = local_c0;
  FUN_146bf1ca8(param_1 + 1,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf049b FUN_146bf049b body=543 status=ok
// SIG undefined FUN_146bf049b(void)

void FUN_146bf049b(undefined8 param_1,longlong param_2,undefined8 param_3,double *param_4,
                  double *param_5,undefined4 *param_6,undefined8 *param_7,int param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_128;
  double dStack_120;
  double local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0 [9];
  double local_98;
  longlong *local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34) < 3000) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1d8);
  }
  local_1a0 = param_7;
  FUN_140619b9c(param_2,&local_58);
  local_e8 = DAT_14c8464f0;
  local_f8 = (undefined4)DAT_14c8464e0;
  uStack_f4 = DAT_14c8464e0._4_4_;
  uStack_f0 = (undefined4)DAT_14c8464e8;
  uStack_ec = DAT_14c8464e8._4_4_;
  local_e0[0] = 0;
  local_1b0 = (longlong)param_8;
  local_88 = &local_58;
  local_80 = param_3;
  FUN_146bf0e29(&local_78,local_50);
  local_60 = 1.0 / local_60;
  local_128 = local_78 * local_60;
  dStack_120 = dStack_70 * local_60;
  local_118 = local_60 * local_68;
  local_188 = DAT_14c8464f0;
  local_198 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_190 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_1b0 = (longlong)param_8;
  local_110 = &local_58;
  local_108 = param_1;
  local_100 = param_3;
  local_78 = local_128;
  dStack_70 = dStack_120;
  local_68 = local_118;
  FUN_146bf0fbe(&local_f8,local_50);
  param_4[2] = local_68;
  *param_4 = local_78;
  param_4[1] = dStack_70;
  if (local_98 < 0.0) {
    local_98 = sqrt(local_98);
  }
  else {
    local_98 = SQRT(local_98);
  }
  *param_5 = local_98;
  *(undefined8 *)(param_6 + 4) = local_e8;
  *param_6 = local_f8;
  param_6[1] = uStack_f4;
  param_6[2] = uStack_f0;
  param_6[3] = uStack_ec;
  puVar2 = local_e0;
  puVar3 = local_1a0;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf0e29 FUN_146bf0e29 body=404 status=ok
// SIG undefined FUN_146bf0e29(void)

double * FUN_146bf0e29(double *param_1,int param_2,double *param_3,undefined8 param_4,
                      undefined8 param_5,ulonglong param_6)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  double *local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  int local_64;
  undefined1 *local_60;
  double **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = 0x7fffffff;
  if ((longlong)param_6 < 0x7fffffff) {
    uVar6 = param_6;
  }
  auVar8._4_12_ = in_XMM0._4_12_;
  auVar8._0_4_ = (float)param_2 / (float)(int)uVar6;
  auVar8 = roundss(auVar8,auVar8,10);
  local_68 = (int)auVar8._0_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_64 = param_2;
  FUN_146bf114a(&local_78,uVar6 & 0xffffffff,1);
  local_58 = &local_a8;
  local_88 = (undefined1 *)&param_5;
  local_b8 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_146bf12e8;
  local_c0 = 0;
  local_a8 = param_3;
  local_a0 = &local_68;
  local_98 = &local_64;
  local_90 = param_4;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",uVar6 & 0xffffffff,1);
  dVar7 = *param_3;
  dVar1 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_1 = dVar7;
  param_1[1] = dVar1;
  dVar7 = *param_1;
  if ((longlong)(int)uStack_70 != 0) {
    dVar1 = param_1[1];
    dVar10 = param_1[2];
    dVar9 = param_1[3];
    lVar5 = 0;
    do {
      dVar10 = dVar10 + *(double *)(local_78 + 0x10 + lVar5);
      dVar1 = dVar1 + *(double *)(local_78 + 8 + lVar5);
      dVar7 = dVar7 + *(double *)(local_78 + lVar5);
      dVar9 = dVar9 + *(double *)(local_78 + 0x18 + lVar5);
      lVar5 = lVar5 + 0x20;
    } while ((longlong)(int)uStack_70 * 0x20 != lVar5);
    param_1[2] = dVar10;
    param_1[1] = dVar1;
    param_1[3] = dVar9;
  }
  *param_1 = dVar7;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf0fbe FUN_146bf0fbe body=395 status=ok
// SIG undefined FUN_146bf0fbe(void)

undefined8 *
FUN_146bf0fbe(undefined8 *param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             ulonglong param_6)

{
  longlong lVar1;
  longlong lVar2;
  int **ppiVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined8 *local_e8;
  int *local_e0 [4];
  undefined1 *local_c0;
  longlong *local_b8;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  int local_64;
  undefined1 *local_60;
  int **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = 0x7fffffff;
  if ((longlong)param_6 < 0x7fffffff) {
    uVar4 = param_6;
  }
  auVar7._4_12_ = in_XMM0._4_12_;
  auVar7._0_4_ = (float)param_2 / (float)(int)uVar4;
  auVar7 = roundss(auVar7,auVar7,10);
  local_68 = (int)auVar7._0_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_64 = param_2;
  FUN_146bf13ca(&local_78,uVar4 & 0xffffffff,1);
  local_58 = local_e0;
  local_c0 = (undefined1 *)&param_5;
  local_e8 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_146bf1680;
  local_f0 = 0;
  local_e0[0] = param_3;
  local_e0[1] = &local_68;
  local_e0[2] = &local_64;
  local_e0[3] = (int *)param_4;
  local_b8 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",uVar4 & 0xffffffff,1);
  puVar5 = param_1;
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = *(undefined8 *)param_3;
    param_3 = param_3 + 2;
    puVar5 = puVar5 + 1;
  }
  if ((longlong)(int)uStack_70 != 0) {
    lVar6 = (longlong)(int)uStack_70 * 0x68;
    lVar1 = local_78;
    do {
      FUN_146bf143c(&param_5,local_e0,lVar1,param_1);
      ppiVar3 = local_e0;
      puVar5 = param_1;
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *ppiVar3;
        ppiVar3 = ppiVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar1 = lVar1 + 0x68;
      lVar6 = lVar6 + -0x68;
    } while (lVar6 != 0);
  }
  if (local_78 != 0) {
    FUN_1400020a8(local_78);
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bf114a FUN_146bf114a body=116 status=ok
// SIG undefined FUN_146bf114a(void)

void FUN_146bf114a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bf11c0(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146bf1246(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bf11c0 FUN_146bf11c0 body=132 status=ok
// SIG undefined FUN_146bf11c0(void)

void FUN_146bf11c0(longlong param_1,int param_2)

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



// FUNCTION 146bf1246 FUN_146bf1246 body=63 status=ok
// SIG undefined FUN_146bf1246(void)

void FUN_146bf1246(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf1286(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146bf1286 FUN_146bf1286 body=97 status=ok
// SIG undefined FUN_146bf1286(void)

ulonglong FUN_146bf1286(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146bf12f0 FUN_146bf12f0 body=217 status=ok
// SIG undefined FUN_146bf12f0(void)

void FUN_146bf12f0(undefined8 *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar7;
  
  pdVar2 = (double *)*param_1;
  dVar10 = *pdVar2;
  dVar11 = pdVar2[1];
  dVar12 = pdVar2[2];
  dVar13 = pdVar2[3];
  iVar4 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar4) {
    iVar4 = *(int *)param_1[2];
  }
  iVar9 = *(int *)param_1[1] * param_2;
  if (iVar9 < iVar4) {
    lVar3 = ((undefined8 *)param_1[3])[1];
    do {
      uVar6 = *(uint *)(**(longlong **)param_1[3] + (longlong)iVar9 * 4);
      uVar8 = (ulonglong)(uVar6 >> 9);
      uVar6 = uVar6 & 0x1ff;
      uVar7 = (ulonglong)uVar6;
      dVar1 = *(double *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x38) + uVar8 * 8) + (ulonglong)uVar6 * 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + uVar8 * 8);
      dVar12 = dVar12 + *(double *)(lVar5 + 0x10 + uVar7 * 0x18) * dVar1;
      dVar13 = dVar13 + dVar1;
      dVar11 = dVar11 + *(double *)(lVar5 + 8 + uVar7 * 0x18) * dVar1;
      dVar10 = dVar10 + dVar1 * *(double *)(lVar5 + uVar7 * 0x18);
      iVar9 = iVar9 + 1;
    } while (iVar4 != iVar9);
  }
  lVar3 = *(longlong *)param_1[5];
  lVar5 = (longlong)param_2 * 0x20;
  *(double *)(lVar3 + lVar5) = dVar10;
  *(double *)(lVar3 + 8 + lVar5) = dVar11;
  *(double *)(lVar3 + 0x10 + lVar5) = dVar12;
  *(double *)(lVar3 + 0x18 + lVar5) = dVar13;
  return;
}



// FUNCTION 146bf13ca FUN_146bf13ca body=113 status=ok
// SIG undefined FUN_146bf13ca(void)

void FUN_146bf13ca(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bf1542(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146bf15d2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bf143c FUN_146bf143c body=261 status=ok
// SIG undefined FUN_146bf143c(void)

double * FUN_146bf143c(undefined8 param_1,double *param_2,double *param_3,double *param_4)

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
  double dVar15;
  double dVar16;
  
  dVar16 = param_3[2];
  dVar1 = param_4[2];
  dVar2 = param_3[1];
  dVar3 = param_4[1];
  *param_2 = *param_3 + *param_4;
  param_2[1] = dVar2 + dVar3;
  param_2[2] = dVar16 + dVar1;
  dVar16 = param_3[0xb];
  dVar1 = param_4[0xb];
  dVar2 = param_3[10];
  dVar3 = param_4[10];
  dVar4 = param_3[9];
  dVar5 = param_4[9];
  dVar6 = param_3[8];
  dVar7 = param_4[8];
  dVar8 = param_3[7];
  dVar9 = param_4[7];
  dVar10 = param_3[6];
  dVar11 = param_4[6];
  dVar12 = param_3[5];
  dVar13 = param_4[5];
  dVar14 = param_3[4];
  dVar15 = param_4[4];
  param_2[3] = param_3[3] + param_4[3];
  param_2[4] = dVar14 + dVar15;
  param_2[5] = dVar12 + dVar13;
  param_2[6] = dVar10 + dVar11;
  param_2[7] = dVar8 + dVar9;
  param_2[8] = dVar6 + dVar7;
  param_2[9] = dVar4 + dVar5;
  param_2[10] = dVar2 + dVar3;
  param_2[0xb] = dVar16 + dVar1;
  dVar16 = param_3[0xc];
  if (param_3[0xc] <= param_4[0xc]) {
    dVar16 = param_4[0xc];
  }
  param_2[0xc] = dVar16;
  return param_2;
}



// FUNCTION 146bf1542 FUN_146bf1542 body=143 status=ok
// SIG undefined FUN_146bf1542(void)

void FUN_146bf1542(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bf15d2 FUN_146bf15d2 body=63 status=ok
// SIG undefined FUN_146bf15d2(void)

void FUN_146bf15d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf1612(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 146bf1612 FUN_146bf1612 body=109 status=ok
// SIG undefined FUN_146bf1612(void)

ulonglong FUN_146bf1612(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x68) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
      uVar1 = uVar1 / 0x68;
    }
  }
  return uVar1;
}



// FUNCTION 146bf1688 FUN_146bf1688 body=713 status=ok
// SIG undefined FUN_146bf1688(void)

void FUN_146bf1688(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
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
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pdVar8 = (double *)*param_1;
  dVar15 = *pdVar8;
  dVar16 = pdVar8[1];
  dVar17 = pdVar8[2];
  dVar18 = pdVar8[3];
  dVar1 = pdVar8[4];
  dVar2 = pdVar8[5];
  dVar3 = pdVar8[6];
  dVar4 = pdVar8[7];
  dVar5 = pdVar8[8];
  dVar6 = pdVar8[9];
  dVar14 = pdVar8[10];
  dVar7 = pdVar8[0xb];
  dVar13 = pdVar8[0xc];
  uVar19 = SUB84(dVar13,0);
  uVar20 = (undefined4)((ulonglong)dVar13 >> 0x20);
  iVar12 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar12) {
    iVar12 = *(int *)param_1[2];
  }
  iVar11 = *(int *)param_1[1] * param_2;
  if (iVar11 < iVar12) {
    do {
      local_150 = (double)CONCAT44(uVar20,uVar19);
      local_148 = dVar7;
      local_140 = dVar6;
      FUN_146bf1952(param_1[3],&local_138,iVar11);
      dVar17 = dVar17 + local_128;
      dVar16 = dVar16 + local_130;
      dVar15 = dVar15 + local_138;
      dVar7 = local_148 + local_e0;
      dVar14 = dVar14 + local_e8;
      dVar6 = local_140 + local_f0;
      dVar5 = dVar5 + local_f8;
      dVar4 = dVar4 + local_100;
      dVar3 = dVar3 + local_108;
      dVar2 = dVar2 + local_110;
      dVar1 = dVar1 + local_118;
      dVar18 = dVar18 + local_120;
      dVar13 = local_d8;
      if (local_d8 <= local_150) {
        dVar13 = local_150;
      }
      iVar11 = iVar11 + 1;
      uVar19 = SUB84(dVar13,0);
      uVar20 = (undefined4)((ulonglong)dVar13 >> 0x20);
    } while (iVar12 != iVar11);
  }
  lVar9 = *(longlong *)param_1[5];
  lVar10 = (longlong)param_2 * 0x68;
  *(double *)(lVar9 + lVar10) = dVar15;
  *(double *)(lVar9 + 8 + lVar10) = dVar16;
  *(double *)(lVar9 + 0x10 + lVar10) = dVar17;
  *(double *)(lVar9 + 0x18 + lVar10) = dVar18;
  *(double *)(lVar9 + 0x20 + lVar10) = dVar1;
  *(double *)(lVar9 + 0x28 + lVar10) = dVar2;
  *(double *)(lVar9 + 0x30 + lVar10) = dVar3;
  *(double *)(lVar9 + 0x38 + lVar10) = dVar4;
  *(double *)(lVar9 + 0x40 + lVar10) = dVar5;
  *(double *)(lVar9 + 0x48 + lVar10) = dVar6;
  *(double *)(lVar9 + 0x50 + lVar10) = dVar14;
  *(double *)(lVar9 + 0x58 + lVar10) = dVar7;
  *(double *)(lVar9 + 0x60 + lVar10) = dVar13;
  if ((local_d0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bf1952 FUN_146bf1952 body=854 status=ok
// SIG undefined FUN_146bf1952(void)

void FUN_146bf1952(double *param_1,double *param_2,int param_3)

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
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  uVar12 = *(uint *)(*(longlong *)param_1[3] + (longlong)param_3 * 4);
  lVar14 = *(longlong *)((longlong)param_1[4] + 0x10);
  uVar19 = (ulonglong)(uVar12 >> 9);
  lVar15 = *(longlong *)(*(longlong *)((longlong)param_1[4] + 0x130) + uVar19 * 8);
  uVar17 = (ulonglong)uVar12 & 0x1ff;
  uVar12 = *(uint *)(lVar15 + uVar17 * 0xc);
  uVar13 = *(uint *)(lVar15 + 4 + uVar17 * 0xc);
  lVar16 = *(longlong *)(lVar14 + (ulonglong)(uVar12 >> 9) * 8);
  uVar18 = (ulonglong)uVar12 & 0x1ff;
  dVar1 = *(double *)(lVar16 + uVar18 * 0x18);
  dVar2 = *(double *)(lVar16 + 8 + uVar18 * 0x18);
  dVar3 = *(double *)(lVar16 + 0x10 + uVar18 * 0x18);
  lVar16 = *(longlong *)(lVar14 + (ulonglong)(uVar13 >> 9) * 8);
  uVar18 = (ulonglong)uVar13 & 0x1ff;
  dVar24 = *(double *)(lVar16 + uVar18 * 0x18);
  dVar26 = *(double *)(lVar16 + 8 + uVar18 * 0x18);
  dVar27 = *(double *)(lVar16 + 0x10 + uVar18 * 0x18);
  uVar12 = *(uint *)(lVar15 + 8 + uVar17 * 0xc);
  lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar12 >> 9) * 8);
  uVar18 = (ulonglong)uVar12 & 0x1ff;
  dVar23 = *(double *)(lVar14 + uVar18 * 0x18);
  dVar25 = *(double *)(lVar14 + 8 + uVar18 * 0x18);
  dVar21 = *(double *)(lVar14 + 0x10 + uVar18 * 0x18);
  dVar22 = param_1[5];
  lVar14 = *(longlong *)(*(longlong *)((longlong)dVar22 + 0x20) + uVar19 * 8);
  uVar17 = (ulonglong)(uint)((int)uVar17 << 3);
  lVar15 = uVar17 * 3;
  dVar4 = *(double *)(lVar14 + lVar15);
  dVar5 = *(double *)(lVar14 + 8 + lVar15);
  dVar6 = *(double *)(lVar14 + 0x10 + lVar15);
  dVar7 = *(double *)(*(longlong *)(*(longlong *)((longlong)dVar22 + 0x38) + uVar19 * 8) + uVar17);
  lVar14 = *(longlong *)(*(longlong *)((longlong)dVar22 + 8) + uVar19 * 8);
  dVar22 = *(double *)(lVar14 + lVar15);
  dVar8 = *(double *)(lVar14 + 8 + lVar15);
  dVar20 = *(double *)(lVar14 + 0x10 + lVar15);
  *param_2 = dVar4 * dVar7;
  param_2[1] = dVar5 * dVar7;
  param_2[2] = dVar6 * dVar7;
  dVar9 = param_1[2];
  dVar20 = dVar20 - dVar9;
  dVar10 = param_1[1];
  dVar8 = dVar8 - dVar10;
  dVar11 = *param_1;
  dVar22 = dVar22 - dVar11;
  param_2[3] = dVar22 * dVar4 * dVar7;
  param_2[4] = dVar5 * dVar22 * dVar7;
  param_2[5] = dVar6 * dVar22 * dVar7;
  param_2[6] = dVar8 * dVar4 * dVar7;
  param_2[7] = dVar5 * dVar8 * dVar7;
  param_2[8] = dVar6 * dVar8 * dVar7;
  param_2[9] = dVar20 * dVar4 * dVar7;
  param_2[10] = dVar5 * dVar20 * dVar7;
  param_2[0xb] = dVar6 * dVar20 * dVar7;
  dVar23 = dVar11 - dVar23;
  dVar25 = dVar10 - dVar25;
  dVar21 = dVar9 - dVar21;
  dVar23 = dVar21 * dVar21 + dVar23 * dVar23 + dVar25 * dVar25;
  dVar24 = dVar11 - dVar24;
  dVar26 = dVar10 - dVar26;
  dVar27 = dVar9 - dVar27;
  dVar24 = dVar27 * dVar27 + dVar24 * dVar24 + dVar26 * dVar26;
  dVar11 = dVar11 - dVar1;
  dVar10 = dVar10 - dVar2;
  dVar9 = dVar9 - dVar3;
  dVar1 = dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
  if (dVar1 <= dVar24) {
    dVar1 = dVar24;
  }
  if (dVar1 <= dVar23) {
    dVar1 = dVar23;
  }
  param_2[0xc] = dVar1;
  return;
}



// FUNCTION 146bf1ca8 FUN_146bf1ca8 body=330 status=ok
// SIG undefined FUN_146bf1ca8(void)

undefined4 *
FUN_146bf1ca8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146bf1df4(param_1,local_58);
  puVar6 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_50 = uVar3;
  puVar7 = local_50;
  for (lVar4 = 0x10; puVar7 = puVar7 + 2, lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  local_50[0x22] = 0xffffffff;
  local_5c = local_58[0];
  local_68 = param_4;
  cVar1 = FUN_146bf1ee2(param_1,uVar3,local_50);
  if (cVar1 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar2 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_50[0x23] = uVar3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      local_50[0x22] =
           *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146bf0114(param_1);
    }
  }
  *param_2 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf1df4 FUN_146bf1df4 body=238 status=ok
// SIG undefined FUN_146bf1df4(void)

int * FUN_146bf1df4(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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



// FUNCTION 146bf1ee2 FUN_146bf1ee2 body=171 status=ok
// SIG undefined FUN_146bf1ee2(void)

void FUN_146bf1ee2(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x88);
          FUN_146bf1f8e(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_146bf1f59;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x88);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_146bf1f59:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 146bf1f8e FUN_146bf1f8e body=153 status=ok
// SIG undefined FUN_146bf1f8e(void)

void FUN_146bf1f8e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x90 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
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
      puVar7 = puVar7 + 0x24;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146bf2028 FUN_146bf2028 body=583 status=ok
// SIG undefined FUN_146bf2028(void)

void FUN_146bf2028(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar9 = param_1[3];
  dVar10 = dVar9 * dVar9 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar10 <= 0.0) {
    param_2[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar1;
  }
  else {
    dVar10 = 1.0 / dVar10;
    dVar7 = -dVar1 * dVar10;
    dVar8 = -dVar2 * dVar10;
    dVar4 = -dVar3 * dVar10;
    dVar9 = dVar9 * dVar10;
    dVar11 = dVar8 + dVar8;
    dVar10 = dVar4 + dVar4;
    dVar5 = dVar9 * (dVar7 + dVar7);
    dVar6 = (dVar7 + dVar7) * dVar7;
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    *param_2 = (dVar7 * dVar10 + dVar9 * dVar11) * dVar3 +
               (1.0 - (dVar10 * dVar4 + dVar11 * dVar8)) * dVar1 +
               (dVar7 * dVar11 - dVar9 * dVar10) * dVar2;
    param_2[1] = (dVar8 * dVar10 - dVar5) * dVar3 +
                 (dVar7 * dVar11 + dVar9 * dVar10) * dVar1 +
                 (1.0 - (dVar6 + dVar10 * dVar4)) * dVar2;
    param_2[2] = (1.0 - (dVar6 + dVar11 * dVar8)) * dVar3 +
                 (dVar7 * dVar10 - dVar9 * dVar11) * dVar1 + (dVar8 * dVar10 + dVar5) * dVar2;
  }
  return;
}



// FUNCTION 146bf2270 FUN_146bf2270 body=132 status=ok
// SIG undefined FUN_146bf2270(void)

void FUN_146bf2270(longlong param_1,int param_2)

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



// FUNCTION 146bf22f6 FUN_146bf22f6 body=62 status=ok
// SIG undefined FUN_146bf22f6(void)

void FUN_146bf22f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf2334(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146bf2334 FUN_146bf2334 body=93 status=ok
// SIG undefined FUN_146bf2334(void)

ulonglong FUN_146bf2334(uint param_1,uint param_2)

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



// FUNCTION 146bf2392 FUN_146bf2392 body=166 status=ok
// SIG undefined FUN_146bf2392(void)

void FUN_146bf2392(longlong *param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)(*param_1 + 0x220);
  lVar7 = (longlong)param_2;
  uVar2 = *(uint *)(lVar3 + lVar7 * 0xc);
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  uVar8 = (ulonglong)uVar2 & 0x1ff;
  puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x18);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  param_3[2] = *(undefined8 *)(lVar4 + 0x10 + uVar8 * 0x18);
  *param_3 = uVar5;
  param_3[1] = uVar6;
  uVar2 = *(uint *)(lVar3 + 4 + lVar7 * 0xc);
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  uVar8 = (ulonglong)uVar2 & 0x1ff;
  puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x18);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  param_4[2] = *(undefined8 *)(lVar4 + 0x10 + uVar8 * 0x18);
  *param_4 = uVar5;
  param_4[1] = uVar6;
  uVar2 = *(uint *)(lVar3 + 8 + lVar7 * 0xc);
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
  uVar8 = (ulonglong)uVar2 & 0x1ff;
  puVar1 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  param_5[2] = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  *param_5 = uVar5;
  param_5[1] = uVar6;
  return;
}


