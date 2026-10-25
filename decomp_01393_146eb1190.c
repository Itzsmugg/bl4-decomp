// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146eb1190 FUN_146eb1190 body=70 status=ok
// SIG undefined FUN_146eb1190(void)

void FUN_146eb1190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146eb5f66(param_1,param_2,param_3,param_4);
  }
  FUN_146eb11d6(param_1,param_2,param_3);
  return;
}



// FUNCTION 146eb11d6 FUN_146eb11d6 body=251 status=ok
// SIG undefined FUN_146eb11d6(void)

void FUN_146eb11d6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146eb11e6;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146eb11e6:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146eb12d2 FUN_146eb12d2 body=274 status=ok
// SIG undefined FUN_146eb12d2(void)

longlong FUN_146eb12d2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 != -0x10 && lVar1 != 0) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb13e4 FUN_146eb13e4 body=283 status=ok
// SIG undefined FUN_146eb13e4(void)

longlong FUN_146eb13e4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x1f')) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb1500 FUN_146eb1500 body=274 status=ok
// SIG undefined FUN_146eb1500(void)

longlong FUN_146eb1500(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 != -0x10 && lVar1 != 0) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb1612 FUN_146eb1612 body=326 status=ok
// SIG undefined FUN_146eb1612(void)

ulonglong FUN_146eb1612(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int local_6c;
  
  iVar2 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  lVar9 = param_1;
  iVar3 = FUN_1401f66f6(param_1,DAT_14c996ae0);
  uVar5 = (ulonglong)*(int *)(param_1 + 0x3b8);
  if ((longlong)uVar5 < 1) {
    uVar4 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    do {
      local_6c = *(int *)(*(longlong *)(param_1 + 0x490) + uVar6 * 4);
      if (0 < (int)*(uint *)(param_1 + 0x2f8)) {
        lVar11 = (longlong)local_6c;
        lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x470) + uVar6 * 4);
        lVar10 = 0;
        uVar7 = 0;
        do {
          if ((lVar9 <= (longlong)uVar7) && ((longlong)uVar7 < lVar11 + lVar9)) {
            lVar8 = 0;
            do {
              iVar1 = *(int *)(*(longlong *)(param_1 + 0x2f0) + lVar10 + lVar8 * 4);
              if (((((longlong)iVar1 < 0) || (iVar3 <= iVar1)) ||
                  (iVar1 = *(int *)(*(longlong *)(param_1 + 0x2d0) + (longlong)iVar1 * 4),
                  iVar1 < 0 && iVar2 < iVar1)) ||
                 (*(int *)(*(longlong *)(param_1 + 0x3b0) + uVar6 * 4) != iVar1))
              goto LAB_146eb1742;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 3);
            local_6c = local_6c + -1;
          }
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0xc;
        } while (uVar7 != *(uint *)(param_1 + 0x2f8));
      }
      if (local_6c != 0) break;
      uVar6 = uVar6 + 1;
      uVar4 = (ulonglong)(uVar5 <= uVar6);
    } while (uVar6 != uVar5);
  }
LAB_146eb1742:
  return uVar4 & 0xffffff01;
}



// FUNCTION 146eb1758 FUN_146eb1758 body=2036 status=ok
// SIG undefined FUN_146eb1758(void)

void FUN_146eb1758(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_1c8 [36];
  uint local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108 [2];
  longlong local_f8 [3];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1446ddc76(&local_50,"Geometry",1);
  uVar10 = FUN_1401f66f6(param_1,local_50);
  FUN_1409bcbd8(param_1,uVar10,DAT_14c996ae8);
  FUN_1446ddc76(&local_68,"Geometry",1);
  FUN_146ecd932(param_1,local_60,local_68);
  FUN_1446ddc76(&local_70,"Geometry",1);
  FUN_1446ddc76(&local_78,"Indices",1);
  lVar11 = FUN_146d84c64(param_1,local_78,local_70);
  FUN_1446ddc76(&local_80,"Geometry",1);
  FUN_1446ddc76(&local_88,"Visible",1);
  lVar12 = FUN_146eb1f4e(param_1,local_88,local_80);
  FUN_1446ddc76(&local_90,"Geometry",1);
  FUN_1446ddc76(&local_98,"MaterialIndex",1);
  lVar13 = FUN_140619ac2(param_1,local_98,local_90);
  FUN_1446ddc76(&local_a0,"Geometry",1);
  FUN_1446ddc76(&local_a8,"MaterialID",1);
  lVar14 = FUN_140619ac2(param_1,local_a8,local_a0);
  if (0 < (int)uVar10) {
    lVar21 = (ulonglong)uVar10 * 3;
    uVar20 = (ulonglong)uVar10 + 1;
    do {
      lVar21 = lVar21 + -3;
      uVar18 = (int)uVar20 - 2;
      lVar15 = *(longlong *)(lVar11 + 0x10);
      lVar16 = *(longlong *)(param_1 + 0x2f0);
      *(undefined4 *)(lVar16 + 8 + lVar21 * 4) = *(undefined4 *)(lVar15 + 8 + lVar21 * 4);
      *(undefined8 *)(lVar16 + lVar21 * 4) = *(undefined8 *)(lVar15 + lVar21 * 4);
      uVar22 = 1 << ((byte)uVar18 & 0x1f);
      lVar15 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar15 = lVar12 + 0x10;
      }
      uVar23 = (ulonglong)(uVar18 >> 5);
      lVar16 = *(longlong *)(param_1 + 800);
      if (*(longlong *)(param_1 + 800) == 0) {
        lVar16 = param_1 + 0x310;
      }
      if ((*(uint *)(lVar15 + uVar23 * 4) >> (uVar18 & 0x1f) & 1) == 0) {
        uVar22 = ~uVar22 & *(uint *)(lVar16 + uVar23 * 4);
      }
      else {
        uVar22 = uVar22 | *(uint *)(lVar16 + uVar23 * 4);
      }
      *(uint *)(lVar16 + uVar23 * 4) = uVar22;
      *(undefined4 *)(*(longlong *)(param_1 + 0x340) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + -8 + uVar20 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x360) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + -8 + uVar20 * 4);
      uVar20 = uVar20 - 1;
    } while (1 < uVar20);
  }
  FUN_1446ddc76(&local_b0,"Geometry",1);
  FUN_1446ddc76(&local_b8,"Indices",1);
  FUN_140498ea8(param_1,local_b8,local_b0);
  FUN_1446ddc76(&local_c0,"Geometry",1);
  FUN_1446ddc76(&local_c8,"Visible",1);
  FUN_140498ea8(param_1,local_c8,local_c0);
  FUN_1446ddc76(&local_d0,"Geometry",1);
  FUN_1446ddc76(&local_d8,"MaterialIndex",1);
  FUN_140498ea8(param_1,local_d8,local_d0);
  FUN_1446ddc76(&local_e0,"Geometry",1);
  FUN_1446ddc76(local_f8 + 2,"MaterialID",1);
  FUN_140498ea8(param_1,local_f8[2],local_e0);
  local_f8[0] = 0;
  local_f8[1] = 0;
  FUN_146eb9a22(local_f8,uVar10);
  FUN_1446ddc76(local_108,"Geometry",1);
  FUN_146ecf53a(param_1,local_108,local_f8,0);
  FUN_1446ddc76(&local_110,"Structure",1);
  FUN_146ecd932(param_1,local_108,local_110);
  FUN_1446ddc76(&local_118,"Structure",1);
  local_1a4 = FUN_1401f66f6(param_1,local_118);
  FUN_1409bcbd8(param_1,local_1a4,DAT_14c996af0);
  FUN_1446ddc76(&local_120,"Structure",1);
  FUN_1446ddc76(&local_128,"TransformIndex",1);
  lVar11 = FUN_140619ac2(param_1,local_128,local_120);
  FUN_1446ddc76(&local_130,"Structure",1);
  FUN_1446ddc76(&local_138,"BoundingBox",1);
  lVar12 = FUN_1429fcaca(param_1,local_138,local_130);
  FUN_1446ddc76(&local_140,"Structure",1);
  FUN_1446ddc76(&local_148,"InnerRadius",1);
  lVar13 = FUN_14061a004(param_1,local_148,local_140);
  FUN_1446ddc76(&local_150,"Structure",1);
  FUN_1446ddc76(&local_158,"OuterRadius",1);
  lVar14 = FUN_14061a004(param_1,local_158,local_150);
  FUN_1446ddc76(&local_160,"Structure",1);
  FUN_1446ddc76(&local_168,"VertexStart",1);
  lVar21 = FUN_140619ac2(param_1,local_168,local_160);
  FUN_1446ddc76(&local_170,"Structure",1);
  FUN_1446ddc76(&local_178,"VertexCount",1);
  lVar15 = FUN_140619ac2(param_1,local_178,local_170);
  FUN_1446ddc76(&local_180,"Structure",1);
  FUN_1446ddc76(&local_188,"FaceStart",1);
  lVar16 = FUN_140619ac2(param_1,local_188,local_180);
  FUN_1446ddc76(&local_190,"Structure",1);
  FUN_1446ddc76(&local_198,"FaceCount",1);
  lVar17 = FUN_140619ac2(param_1,local_198,local_190);
  if (0 < (int)local_1a4) {
    uVar20 = (ulonglong)local_1a4 + 1;
    lVar19 = (ulonglong)local_1a4 * 0xe;
    do {
      lVar19 = lVar19 + -0xe;
      *(undefined4 *)(*(longlong *)(param_1 + 0x3b0) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + -8 + uVar20 * 4);
      lVar3 = *(longlong *)(lVar12 + 0x10);
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      *(undefined8 *)(lVar4 + 0x30 + lVar19 * 4) = *(undefined8 *)(lVar3 + 0x30 + lVar19 * 4);
      puVar1 = (undefined8 *)(lVar3 + lVar19 * 4);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar19 * 4);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar19 * 4);
      uVar9 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar19 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar19 * 4);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(lVar4 + lVar19 * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(undefined4 *)(*(longlong *)(param_1 + 0x3f0) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + -8 + uVar20 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x410) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + -8 + uVar20 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x430) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar21 + 0x10) + -8 + uVar20 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x450) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + -8 + uVar20 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x470) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar16 + 0x10) + -8 + uVar20 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x490) + -8 + uVar20 * 4) =
           *(undefined4 *)(*(longlong *)(lVar17 + 0x10) + -8 + uVar20 * 4);
      uVar20 = uVar20 - 1;
    } while (1 < uVar20);
  }
  FUN_1446ddc76(&local_1a0,"Structure",1);
  FUN_146ec903a(param_1,local_1a0);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb1f4e FUN_146eb1f4e body=227 status=ok
// SIG undefined FUN_146eb1f4e(void)

undefined8 FUN_146eb1f4e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_146eb1f5a;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146eb1f5a:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 146eb2032 FUN_146eb2032 body=116 status=ok
// SIG undefined FUN_146eb2032(void)

undefined8 FUN_146eb2032(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"FGeometryCollection",1);
  if ((local_28 != (int)param_2) || (uVar1 = 1, local_24 != (int)((ulonglong)param_2 >> 0x20))) {
    uVar1 = FUN_146eb6986(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb20ae FUN_146eb20ae body=227 status=ok
// SIG undefined FUN_146eb20ae(void)

undefined8 FUN_146eb20ae(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_146eb20ba;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146eb20ba:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 146eb2192 FUN_146eb2192 body=283 status=ok
// SIG undefined FUN_146eb2192(void)

longlong FUN_146eb2192(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x03')) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb22ad FUN_146eb22ad body=16 status=ok
// SIG undefined FUN_146eb22ad(void)

void FUN_146eb22ad(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}



// FUNCTION 146eb22be FUN_146eb22be body=103 status=ok
// SIG undefined FUN_146eb22be(void)

void FUN_146eb22be(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_149f63ee0;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
      param_1 + 0x70)) {
    iVar1 = *(int *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(int **)(param_1 + 0x50) = iVar1 - (int)lVar2;
  }
  if (param_1[0x7c] == (basic_streambuf<char,std::char_traits<char>_>)0x1) {
    FUN_146eb2326(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146eb2314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}



// FUNCTION 146eb2326 FUN_146eb2326 body=212 status=ok
// SIG undefined FUN_146eb2326(void)

longlong FUN_146eb2326(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = 0;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      iVar2 = *(int *)(param_1 + 0x90);
      lVar3 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar3;
      **(longlong **)(param_1 + 0x38) = lVar3;
      **(int **)(param_1 + 0x50) = iVar2 - (int)lVar3;
    }
    cVar1 = FUN_146eb2e9c(param_1);
    iVar2 = fclose(*(FILE **)(param_1 + 0x80));
    lVar3 = 0;
    if (iVar2 == 0) {
      lVar3 = param_1;
    }
    if (cVar1 == '\0') {
      lVar3 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(longlong *)(param_1 + 0x18) = param_1 + 8;
  *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
  *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
  *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
  *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
  *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x74) = DAT_14c996af8;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return lVar3;
}



// FUNCTION 146eb23fa FUN_146eb23fa body=38 status=ok
// SIG undefined FUN_146eb23fa(void)

undefined8 FUN_146eb23fa(undefined8 param_1,int param_2)

{
  FUN_146eb22be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb2448 FUN_146eb2448 body=416 status=ok
// SIG undefined FUN_146eb2448(void)

int FUN_146eb2448(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  char cVar7;
  int iVar8;
  size_t _Count;
  bool bVar9;
  undefined1 auStack_b8 [32];
  char **local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  longlong *local_80;
  longlong local_70;
  char *local_68;
  char local_59;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == -1) {
    iVar8 = 0;
  }
  else {
    cVar7 = (char)param_2;
    iVar8 = param_2;
    if (**(longlong **)(param_1 + 0x40) != 0) {
      iVar5 = **(int **)(param_1 + 0x58);
      if (0 < iVar5) {
        **(int **)(param_1 + 0x58) = iVar5 + -1;
        pcVar1 = (char *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pcVar1 + 1);
        *pcVar1 = cVar7;
        goto LAB_146eb2581;
      }
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      iVar8 = -1;
    }
    else {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        iVar5 = *(int *)(param_1 + 0x90);
        lVar2 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = iVar5 - (int)lVar2;
      }
      plVar3 = *(longlong **)(param_1 + 0x68);
      if (plVar3 == (longlong *)0x0) {
        iVar5 = fputc((int)cVar7,*(FILE **)(param_1 + 0x80));
        if (iVar5 == -1) {
          iVar8 = -1;
        }
      }
      else {
        local_88 = &local_38;
        local_80 = &local_70;
        local_98 = &local_68;
        local_90 = local_58;
        local_59 = cVar7;
        uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 0x74,&local_59);
        iVar8 = -1;
        if (uVar4 < 2) {
          _Count = local_70 - (longlong)local_58;
          if ((_Count != 0) &&
             (sVar6 = fwrite(local_58,1,_Count,*(FILE **)(param_1 + 0x80)), _Count != sVar6))
          goto LAB_146eb2581;
          *(undefined1 *)(param_1 + 0x71) = 1;
          bVar9 = local_68 == &local_59;
          iVar5 = -1;
        }
        else {
          if (uVar4 != 3) goto LAB_146eb2581;
          iVar5 = fputc((int)local_59,*(FILE **)(param_1 + 0x80));
          bVar9 = iVar5 == -1;
        }
        iVar8 = param_2;
        if (bVar9) {
          iVar8 = iVar5;
        }
      }
    }
  }
LAB_146eb2581:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 146eb25ea FUN_146eb25ea body=214 status=ok
// SIG undefined FUN_146eb25ea(void)

uint FUN_146eb25ea(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar3 = *(ulonglong **)(param_1 + 0x38);
  uVar4 = *puVar3;
  if ((uVar4 == 0) || (uVar4 <= **(ulonglong **)(param_1 + 0x18))) {
LAB_146eb2620:
    uVar5 = 0xffffffff;
    if (param_2 != 0xffffffff && *(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        iVar2 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80));
        if (iVar2 != -1) {
          return param_2;
        }
        puVar3 = *(ulonglong **)(param_1 + 0x38);
        uVar4 = *puVar3;
      }
      uVar1 = param_1 + 0x70;
      if (uVar4 != uVar1) {
        *(char *)(param_1 + 0x70) = (char)param_2;
        uVar4 = **(ulonglong **)(param_1 + 0x18);
        if (uVar4 != uVar1) {
          *(ulonglong *)(param_1 + 0x88) = uVar4;
          *(ulonglong *)(param_1 + 0x90) = (longlong)**(int **)(param_1 + 0x50) + *puVar3;
        }
        **(ulonglong **)(param_1 + 0x18) = uVar1;
        **(ulonglong **)(param_1 + 0x38) = uVar1;
        **(undefined4 **)(param_1 + 0x50) = 1;
        uVar5 = param_2;
      }
    }
  }
  else {
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    else if (*(byte *)(uVar4 - 1) != param_2) goto LAB_146eb2620;
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    uVar5 = param_2;
  }
  return uVar5;
}



// FUNCTION 146eb26c0 FUN_146eb26c0 body=78 status=ok
// SIG undefined FUN_146eb26c0(void)

uint FUN_146eb26c0(longlong *param_1)

{
  uint uVar1;
  
  if ((*(byte **)param_1[7] == (byte *)0x0) || (*(int *)param_1[10] < 1)) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    if (uVar1 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    else {
      (**(code **)(*param_1 + 0x20))(param_1,uVar1);
    }
  }
  else {
    uVar1 = (uint)**(byte **)param_1[7];
  }
  return uVar1;
}



// FUNCTION 146eb270e FUN_146eb270e body=675 status=ok
// SIG undefined FUN_146eb270e(void)

uint FUN_146eb270e(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char ****ppppcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  byte *local_a0;
  longlong *local_98;
  byte **local_90;
  byte *local_80;
  byte local_71;
  longlong local_70;
  char ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (**(longlong **)(param_1 + 0x38) != 0) {
    iVar3 = **(int **)(param_1 + 0x50);
    if (0 < iVar3) {
      **(int **)(param_1 + 0x50) = iVar3 + -1;
      pbVar1 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar1 + 1);
      uVar4 = (uint)*pbVar1;
      goto LAB_146eb275f;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      iVar3 = *(int *)(param_1 + 0x90);
      lVar2 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(int **)(param_1 + 0x50) = iVar3 - (int)lVar2;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar5 = fgetc(*(FILE **)(param_1 + 0x80));
      uVar4 = uVar5 & 0xff;
      if (uVar5 == 0xffffffff) {
        uVar4 = 0xffffffff;
      }
    }
    else {
      local_68 = (char ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      iVar3 = fgetc(*(FILE **)(param_1 + 0x80));
      if (iVar3 != -1) {
LAB_146eb281f:
        uVar7 = local_58;
        if (local_58 < local_50) {
          ppppcVar6 = &local_68;
          if (0xf < local_50) {
            ppppcVar6 = (char ****)local_68;
          }
          pcVar9 = (char *)((longlong)ppppcVar6 + local_58);
          local_58 = local_58 + 1;
          *pcVar9 = (char)iVar3;
          *(char *)((longlong)ppppcVar6 + uVar7 + 1) = '\0';
        }
        else {
          FUN_1401dc532(&local_68,1);
        }
        ppppcVar6 = &local_68;
        if (0xf < local_50) {
          ppppcVar6 = (char ****)local_68;
        }
        local_a8 = &local_70;
        local_a0 = &local_71;
        local_98 = &local_70;
        local_90 = &local_80;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,ppppcVar6,
                           (char *)((longlong)ppppcVar6 + local_58));
        if (uVar4 < 2) {
          if (local_80 == &local_71) goto code_r0x000146eb28ae;
          ppppcVar6 = (char ****)local_68;
          if (local_50 < 0x10) {
            ppppcVar6 = &local_68;
          }
          pcVar9 = (char *)((longlong)ppppcVar6 + (local_58 - local_70));
          if (0 < (longlong)pcVar9) {
            pcVar9 = pcVar9 + 1;
            do {
              ungetc((int)pcVar9[local_70 + -2],*(FILE **)(param_1 + 0x80));
              pcVar9 = pcVar9 + -1;
            } while ((char *)0x1 < pcVar9);
          }
          uVar4 = (uint)local_71;
          goto LAB_146eb2901;
        }
        if (uVar4 == 3) {
          ppppcVar6 = (char ****)local_68;
          if (local_50 < 0x10) {
            ppppcVar6 = &local_68;
          }
          uVar4 = (uint)*(char *)ppppcVar6;
          goto LAB_146eb2901;
        }
      }
LAB_146eb28fc:
      uVar4 = 0xffffffff;
LAB_146eb2901:
      FUN_1401d9a90(&local_68);
    }
  }
LAB_146eb275f:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
code_r0x000146eb28ae:
  ppppcVar6 = &local_68;
  if (0xf < local_50) {
    ppppcVar6 = (char ****)local_68;
  }
  uVar7 = local_70 - (longlong)ppppcVar6;
  if (local_58 < (ulonglong)(local_70 - (longlong)ppppcVar6)) {
    uVar7 = local_58;
  }
  uVar8 = local_58 - uVar7;
  memmove(ppppcVar6,(char *)((longlong)ppppcVar6 + uVar7),uVar8 + 1);
  local_58 = uVar8;
  iVar3 = fgetc(*(FILE **)(param_1 + 0x80));
  if (iVar3 == -1) goto LAB_146eb28fc;
  goto LAB_146eb281f;
}



// FUNCTION 146eb29b2 FUN_146eb29b2 body=304 status=ok
// SIG undefined FUN_146eb29b2(void)

longlong FUN_146eb29b2(basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,
                      ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  ulonglong _Count;
  ulonglong _Size;
  
  if ((longlong)param_3 < 1) {
    lVar2 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146eb29e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = std::basic_streambuf<char,std::char_traits<char>_>::xsgetn(param_1,param_2,param_3);
      return lVar2;
    }
    _Count = param_3;
    if (((void *)**(undefined8 **)(param_1 + 0x38) != (void *)0x0) &&
       (_Size = (ulonglong)**(int **)(param_1 + 0x50), _Size != 0)) {
      if (param_3 <= _Size) {
        _Size = param_3;
      }
      memcpy(param_2,(void *)**(undefined8 **)(param_1 + 0x38),_Size);
      param_2 = param_2 + _Size;
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - (int)_Size;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)(int)_Size;
      _Count = param_3 - _Size;
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
          param_1 + 0x70) {
        iVar1 = *(int *)(param_1 + 0x90);
        lVar2 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = iVar1 - (int)lVar2;
      }
      do {
        if (_Count < 0x1000) {
          if (_Count == 0) {
            _Count = 0;
          }
          else {
            sVar3 = fread(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
            _Count = _Count - sVar3;
          }
          break;
        }
        sVar3 = fread(param_2,1,0xfff,*(FILE **)(param_1 + 0x80));
        param_2 = param_2 + sVar3;
        _Count = _Count - sVar3;
      } while (sVar3 == 0xfff);
    }
    lVar2 = param_3 - _Count;
  }
  return lVar2;
}



// FUNCTION 146eb2ae2 FUN_146eb2ae2 body=190 status=ok
// SIG undefined FUN_146eb2ae2(void)

longlong FUN_146eb2ae2(basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,
                      ulonglong param_3)

{
  longlong lVar1;
  size_t sVar2;
  size_t _Count;
  ulonglong _Size;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    _Count = param_3;
    if (((void *)**(undefined8 **)(param_1 + 0x40) != (void *)0x0) &&
       (_Size = (ulonglong)**(int **)(param_1 + 0x58), 0 < (longlong)param_3 && 0 < (longlong)_Size)
       ) {
      if (param_3 <= _Size) {
        _Size = param_3;
      }
      memcpy((void *)**(undefined8 **)(param_1 + 0x40),param_2,_Size);
      param_2 = param_2 + _Size;
      **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - (int)_Size;
      **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + _Size;
      _Count = param_3 - _Size;
    }
    if ((0 < (longlong)_Count) && (*(FILE **)(param_1 + 0x80) != (FILE *)0x0)) {
      sVar2 = fwrite(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
      _Count = _Count - sVar2;
    }
    return param_3 - _Count;
  }
                    /* WARNING: Could not recover jumptable at 0x000146eb2b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = std::basic_streambuf<char,std::char_traits<char>_>::xsputn(param_1,param_2,param_3);
  return lVar1;
}



// FUNCTION 146eb2ba0 FUN_146eb2ba0 body=284 status=ok
// SIG undefined FUN_146eb2ba0(void)

fpos_t * FUN_146eb2ba0(longlong param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  fpos_t fVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  fpos_t local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_4 == 1) && (**(longlong **)(param_1 + 0x38) == param_1 + 0x70)) {
    param_3 = param_3 - (ulonglong)(*(longlong *)(param_1 + 0x68) == 0);
  }
  if ((((*(longlong *)(param_1 + 0x80) == 0) || (cVar3 = FUN_146eb2e9c(param_1), cVar3 == '\0')) ||
      (((param_4 != 1 || (param_3 != 0)) &&
       (iVar4 = _fseeki64(*(FILE **)(param_1 + 0x80),param_3,param_4), iVar4 != 0)))) ||
     (iVar4 = fgetpos(*(FILE **)(param_1 + 0x80),&local_38), iVar4 != 0)) {
    *param_2 = -1;
    param_2[1] = 0;
    param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    iVar4 = *(int *)(param_1 + 0x90);
    lVar1 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar1;
    **(longlong **)(param_1 + 0x38) = lVar1;
    **(int **)(param_1 + 0x50) = iVar4 - (int)lVar1;
  }
  fVar2 = *(fpos_t *)(param_1 + 0x74);
  *param_2 = local_38;
  param_2[1] = 0;
  param_2[2] = fVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb2cbe FUN_146eb2cbe body=212 status=ok
// SIG undefined FUN_146eb2cbe(void)

longlong * FUN_146eb2cbe(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3[1] + *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_146eb2e9c();
    if (cVar1 != '\0') {
      iVar2 = fsetpos(*(FILE **)(param_1 + 0x80),&local_28);
      if (iVar2 == 0) {
        lVar3 = param_3[2];
        *(longlong *)(param_1 + 0x74) = lVar3;
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          iVar2 = *(int *)(param_1 + 0x90);
          lVar3 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar3;
          **(longlong **)(param_1 + 0x38) = lVar3;
          **(int **)(param_1 + 0x50) = iVar2 - (int)lVar3;
          lVar3 = *(longlong *)(param_1 + 0x74);
        }
        *param_2 = local_28;
        param_2[1] = 0;
        param_2[2] = lVar3;
        goto LAB_146eb2cfb;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_146eb2cfb:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb2d94 FUN_146eb2d94 body=84 status=ok
// SIG undefined FUN_146eb2d94(void)

longlong FUN_146eb2d94(longlong param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) &&
     (iVar1 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,
                      (uint)(param_2 == (char *)0x0 && param_3 == 0) << 2,param_3), iVar1 == 0)) {
    FUN_146eb2f6a(param_1,*(undefined8 *)(param_1 + 0x80),1);
    return param_1;
  }
  return 0;
}



// FUNCTION 146eb2de8 FUN_146eb2de8 body=64 status=ok
// SIG undefined FUN_146eb2de8(void)

int FUN_146eb2de8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    iVar2 = 0;
    if (iVar1 != -1) {
      iVar2 = fflush((FILE *)param_1[0x10]);
      iVar2 = iVar2 >> 0x1f;
    }
  }
  return iVar2;
}



// FUNCTION 146eb2e28 FUN_146eb2e28 body=115 status=ok
// SIG undefined FUN_146eb2e28(void)

void FUN_146eb2e28(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146eb3068(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if (cVar1 == '\0') {
    *(longlong *)(param_1 + 0x18) = param_1 + 8;
    *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
    *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
    *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
    *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  *(longlong **)(param_1 + 0x68) = plVar2;
  return;
}



// FUNCTION 146eb2e9c FUN_146eb2e9c body=204 status=ok
// SIG undefined FUN_146eb2e9c(void)

byte FUN_146eb2e9c(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  size_t _Count;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  undefined1 local_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = 1;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) != '\x01')) goto LAB_146eb2f42;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar2 == -1) {
LAB_146eb2f40:
    bVar1 = 0;
  }
  else {
    local_58 = &local_50;
    iVar2 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                      ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_48,local_28);
    if (iVar2 == 3) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
      bVar1 = 1;
      goto LAB_146eb2f42;
    }
    if (iVar2 != 1) {
      if (iVar2 != 0) goto LAB_146eb2f40;
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    }
    _Count = local_50 - (longlong)local_48;
    if (_Count != 0) {
      sVar3 = fwrite(local_48,1,_Count,(FILE *)param_1[0x10]);
      if (_Count != sVar3) goto LAB_146eb2f40;
    }
    bVar1 = *(byte *)((longlong)param_1 + 0x71) ^ 1;
  }
LAB_146eb2f42:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb2f6a FUN_146eb2f6a body=253 status=ok
// SIG undefined FUN_146eb2f6a(void)

void FUN_146eb2f6a(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(longlong *)(param_1 + 0x18) = param_1 + 8;
  *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
  *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
  *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
  *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
  *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (param_2 != 0) {
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    _get_stream_buffer_pointers(param_2,&local_38,&local_40,&local_48);
    *(undefined8 *)(param_1 + 0x18) = local_38;
    *(undefined8 *)(param_1 + 0x20) = local_38;
    *(undefined8 *)(param_1 + 0x38) = local_40;
    *(undefined8 *)(param_1 + 0x40) = local_40;
    *(undefined8 *)(param_1 + 0x50) = local_48;
    *(undefined8 *)(param_1 + 0x58) = local_48;
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_14c996af8;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb3068 FUN_146eb3068 body=237 status=ok
// SIG undefined FUN_146eb3068(void)

_Facet_base * FUN_146eb3068(locale *param_1)

{
  longlong lVar1;
  _Facet_base *p_Var2;
  __uint64 _Var3;
  _Locimp *p_Var4;
  _Facet_base *p_Var5;
  undefined1 auStack_58 [32];
  _Facet_base *local_38;
  _Lockit local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  std::_Lockit::_Lockit(local_2c,0);
  p_Var2 = DAT_14c996b00;
  local_38 = DAT_14c996b00;
  _Var3 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(ulonglong *)(lVar1 + 0x18) <= _Var3) ||
     (p_Var5 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var3 * 8),
     p_Var5 == (_Facet_base *)0x0)) {
    if (*(char *)(lVar1 + 0x24) == '\x01') {
      p_Var4 = std::locale::_Getgloballocale();
      if ((_Var3 < *(ulonglong *)(p_Var4 + 0x18)) &&
         (p_Var5 = *(_Facet_base **)(*(longlong *)(p_Var4 + 0x10) + _Var3 * 8),
         p_Var5 != (_Facet_base *)0x0)) goto LAB_146eb30e9;
    }
    p_Var5 = p_Var2;
    if (p_Var2 == (_Facet_base *)0x0) {
      _Var3 = std::codecvt<char,char,_Mbstatet>::_Getcat((facet **)&local_38,param_1);
      p_Var2 = local_38;
      if (_Var3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      std::_Facet_Register(local_38);
      (**(code **)(*(longlong *)p_Var2 + 8))(p_Var2);
      DAT_14c996b00 = local_38;
      p_Var5 = local_38;
    }
  }
LAB_146eb30e9:
  std::_Lockit::~_Lockit(local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return p_Var5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb3158 FUN_146eb3158 body=188 status=ok
// SIG undefined FUN_146eb3158(void)

void FUN_146eb3158(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146eb35d2();
  if (0 < (int)uVar6) {
    lVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)(*param_2 + lVar7) * 0x20;
      puVar1 = (undefined8 *)(param_1[2] + lVar8);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(param_1[2] + 0x10 + lVar8);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(local_48 + 0x10 + lVar7 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)(local_48 + lVar7 * 8);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      lVar7 = lVar7 + 4;
    } while ((ulonglong)uVar6 << 2 != lVar7);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb3216 FUN_146eb3216 body=109 status=ok
// SIG undefined FUN_146eb3216(void)

void FUN_146eb3216(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar7 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar7);
  if (0 < (int)uVar7) {
    lVar8 = 0;
    do {
      lVar3 = param_1[2];
      puVar1 = (undefined8 *)(param_2[2] + lVar8);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(param_2[2] + 0x10 + lVar8);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(lVar3 + lVar8);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar8 = lVar8 + 0x20;
    } while ((ulonglong)uVar7 << 5 != lVar8);
  }
  return;
}



// FUNCTION 146eb3284 FUN_146eb3284 body=193 status=ok
// SIG undefined FUN_146eb3284(void)

void FUN_146eb3284(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar11 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar11)) {
    lVar14 = (longlong)(param_5 + param_3);
    lVar15 = (longlong)param_3;
    lVar12 = lVar15 << 5;
    lVar13 = lVar14 << 5;
    do {
      if ((int)param_1[3] <= lVar14) {
        return;
      }
      if (param_4 <= lVar15) {
        return;
      }
      lVar3 = param_1[2];
      puVar1 = (undefined4 *)(param_2[2] + lVar12);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar1 = (undefined4 *)(param_2[2] + 0x10 + lVar12);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar2 = (undefined4 *)(lVar3 + 0x10 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      puVar1 = (undefined4 *)(lVar3 + lVar13);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 1;
      iVar11 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar12 = lVar12 + 0x20;
      lVar13 = lVar13 + 0x20;
    } while (lVar15 < iVar11);
  }
  return;
}



// FUNCTION 146eb3350 FUN_146eb3350 body=257 status=ok
// SIG undefined FUN_146eb3350(void)

void FUN_146eb3350(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar2 = (int *)*param_2;
      iVar1 = piVar2[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar7 = piVar2[uVar5 - 1];
        iVar4 = iVar1;
        if ((iVar7 != piVar2[uVar5 - 2] + 1) &&
           (iVar6 = (iVar1 - iVar7) + 1, iVar4 = piVar2[uVar5 - 2], iVar6 != 0)) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar1 = iVar4 - (iVar1 + 1);
          if (iVar1 != 0) {
            pvVar3 = (void *)((longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar6 * 0x20 + (longlong)pvVar3),(longlong)iVar1 << 5)
            ;
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 - iVar6;
          piVar2 = (int *)*param_2;
          iVar4 = piVar2[uVar5 - 2];
        }
        iVar1 = iVar4;
      }
      iVar7 = (iVar1 - *piVar2) + 1;
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar1 = iVar4 - (iVar1 + 1);
        if (iVar1 != 0) {
          pvVar3 = (void *)((longlong)*piVar2 * 0x20 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar7 * 0x20 + (longlong)pvVar3),(longlong)iVar1 << 5);
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar4 - iVar7;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140ea921a(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eb3470 FUN_146eb3470 body=57 status=ok
// SIG undefined FUN_146eb3470(void)

undefined8 * FUN_146eb3470(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63990;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb34aa FUN_146eb34aa body=132 status=ok
// SIG undefined FUN_146eb34aa(void)

void FUN_146eb34aa(longlong param_1,int param_2)

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



// FUNCTION 146eb3530 FUN_146eb3530 body=63 status=ok
// SIG undefined FUN_146eb3530(void)

void FUN_146eb3530(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146eb3570(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146eb3570 FUN_146eb3570 body=97 status=ok
// SIG undefined FUN_146eb3570(void)

ulonglong FUN_146eb3570(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146eb35d2 FUN_146eb35d2 body=70 status=ok
// SIG undefined FUN_146eb35d2(void)

int FUN_146eb35d2(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146eb34aa(param_1,iVar1);
  }
  FUN_140b1eaf7((longlong)iVar1 * 0x20 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146eb3618 FUN_146eb3618 body=283 status=ok
// SIG undefined FUN_146eb3618(void)

longlong FUN_146eb3618(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\f')
         ) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb3734 FUN_146eb3734 body=283 status=ok
// SIG undefined FUN_146eb3734(void)

longlong FUN_146eb3734(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '!'))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb3850 FUN_146eb3850 body=70 status=ok
// SIG undefined FUN_146eb3850(void)

void FUN_146eb3850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146eb3896(param_1,param_2,param_3,param_4);
  }
  FUN_146eb3aa6(param_1,param_2,param_3);
  return;
}



// FUNCTION 146eb3896 FUN_146eb3896 body=526 status=ok
// SIG undefined FUN_146eb3896(void)

void FUN_146eb3896(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146eb3930;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146eb3930:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c996a38) && (FUN_144b3d300(&DAT_14c996a38), DAT_14c996a38 == -1)) {
    DAT_14c996a30 = 0;
    _Init_thread_footer(&DAT_14c996a38);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c996a30;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f63b40;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146eb479e(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb3aa6 FUN_146eb3aa6 body=251 status=ok
// SIG undefined FUN_146eb3aa6(void)

void FUN_146eb3aa6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146eb3ab6;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146eb3ab6:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146eb3bae FUN_146eb3bae body=38 status=ok
// SIG undefined FUN_146eb3bae(void)

void FUN_146eb3bae(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146eb4232(param_1 + 0x10);
  return;
}



// FUNCTION 146eb3bd6 FUN_146eb3bd6 body=178 status=ok
// SIG undefined FUN_146eb3bd6(void)

void FUN_146eb3bd6(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146eb4292(&local_48,uVar4);
  if (0 < (int)uVar4) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + lVar5) * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(local_48 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar5 = lVar5 + 4;
    } while ((ulonglong)uVar4 << 2 != lVar5);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb3c8a FUN_146eb3c8a body=86 status=ok
// SIG undefined FUN_146eb3c8a(void)

void FUN_146eb3c8a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar1 = param_1[2];
      lVar5 = 0;
      do {
        lVar6 = (longlong)*(int *)(lVar1 + lVar3 + lVar5 * 4);
        if (-1 < lVar6) {
          *(undefined4 *)(lVar1 + lVar3 + lVar5 * 4) = *(undefined4 *)(*param_2 + lVar6 * 4);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 != uVar2);
  }
  return;
}



// FUNCTION 146eb3ce0 FUN_146eb3ce0 body=98 status=ok
// SIG undefined FUN_146eb3ce0(void)

void FUN_146eb3ce0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar1 = param_1[2];
      uVar2 = ((undefined8 *)(param_2[2] + lVar4))[1];
      *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(param_2[2] + lVar4);
      ((undefined8 *)(lVar1 + lVar4))[1] = uVar2;
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return;
}



// FUNCTION 146eb3d42 FUN_146eb3d42 body=181 status=ok
// SIG undefined FUN_146eb3d42(void)

void FUN_146eb3d42(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar6 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar6)) {
    lVar9 = (longlong)(param_5 + param_3);
    lVar10 = (longlong)param_3;
    lVar7 = lVar10 << 4;
    lVar8 = lVar9 << 4;
    do {
      if ((int)param_1[3] <= lVar9) {
        return;
      }
      if (param_4 <= lVar10) {
        return;
      }
      puVar1 = (undefined4 *)(param_2[2] + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_1[2] + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 1;
      iVar6 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < iVar6);
  }
  return;
}



// FUNCTION 146eb3e30 FUN_146eb3e30 body=57 status=ok
// SIG undefined FUN_146eb3e30(void)

undefined8 * FUN_146eb3e30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63bd0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb3e6a FUN_146eb3e6a body=122 status=ok
// SIG undefined FUN_146eb3e6a(void)

void FUN_146eb3e6a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb3ee6 FUN_146eb3ee6 body=257 status=ok
// SIG undefined FUN_146eb3ee6(void)

void FUN_146eb3ee6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar2 = (int *)*param_2;
      iVar1 = piVar2[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar7 = piVar2[uVar5 - 1];
        iVar4 = iVar1;
        if ((iVar7 != piVar2[uVar5 - 2] + 1) &&
           (iVar6 = (iVar1 - iVar7) + 1, iVar4 = piVar2[uVar5 - 2], iVar6 != 0)) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar1 = iVar4 - (iVar1 + 1);
          if (iVar1 != 0) {
            pvVar3 = (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar6 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4)
            ;
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 - iVar6;
          piVar2 = (int *)*param_2;
          iVar4 = piVar2[uVar5 - 2];
        }
        iVar1 = iVar4;
      }
      iVar7 = (iVar1 - *piVar2) + 1;
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar1 = iVar4 - (iVar1 + 1);
        if (iVar1 != 0) {
          pvVar3 = (void *)((longlong)*piVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar7 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4);
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar4 - iVar7;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146eb4232(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eb3ff0 FUN_146eb3ff0 body=206 status=ok
// SIG undefined FUN_146eb3ff0(void)

void FUN_146eb3ff0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146eb42d6(param_2,param_1 + 0x10);
  }
  else {
    FUN_146eb43d4(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb40e0 FUN_146eb40e0 body=57 status=ok
// SIG undefined FUN_146eb40e0(void)

undefined8 * FUN_146eb40e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63bd0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb411a FUN_146eb411a body=115 status=ok
// SIG undefined FUN_146eb411a(void)

void FUN_146eb411a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bfaaf6(param_1,iVar1);
    }
    FUN_146eb418e((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146eb4190(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146eb418e FUN_146eb418e body=1 status=ok
// SIG undefined FUN_146eb418e(void)

void FUN_146eb418e(void)

{
  return;
}



// FUNCTION 146eb4190 FUN_146eb4190 body=63 status=ok
// SIG undefined FUN_146eb4190(void)

void FUN_146eb4190(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146eb41d0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146eb41d0 FUN_146eb41d0 body=97 status=ok
// SIG undefined FUN_146eb41d0(void)

ulonglong FUN_146eb41d0(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146eb4232 FUN_146eb4232 body=96 status=ok
// SIG undefined FUN_146eb4232(void)

void FUN_146eb4232(longlong param_1,int param_2)

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



// FUNCTION 146eb4292 FUN_146eb4292 body=68 status=ok
// SIG undefined FUN_146eb4292(void)

int FUN_146eb4292(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146bfaaf6(param_1,iVar1);
  }
  FUN_146eb418e((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146eb42d6 FUN_146eb42d6 body=252 status=ok
// SIG undefined FUN_146eb42d6(void)

longlong * FUN_146eb42d6(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
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
      FUN_146eb4232(param_2);
    }
    FUN_146eb411a(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1468cfbb2(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
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



// FUNCTION 146eb43d4 FUN_146eb43d4 body=541 status=ok
// SIG undefined FUN_146eb43d4(void)

void FUN_146eb43d4(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x10;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146eb45f2(param_2,param_1);
    goto LAB_146eb4593;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 4,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_146eb4593;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_146eb4580:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 4);
  }
  else {
    if (local_24 == 0x10) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x8000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_146eb4232(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_146bfaaf6(param_1,iVar4);
        }
        goto LAB_146eb4580;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_146eb4593:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb45f2 FUN_146eb45f2 body=362 status=ok
// SIG undefined FUN_146eb45f2(void)

longlong * FUN_146eb45f2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
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
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146eb4232(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1468cfbb2(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146eb4232(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146eb475e(param_2);
        FUN_1468cfbb2(param_1,uVar3);
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



// FUNCTION 146eb475e FUN_146eb475e body=64 status=ok
// SIG undefined FUN_146eb475e(void)

longlong FUN_146eb475e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146bfaaf6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_146eb418e(lVar2,1);
  return lVar2;
}



// FUNCTION 146eb479e FUN_146eb479e body=138 status=ok
// SIG undefined FUN_146eb479e(void)

undefined1 *
FUN_146eb479e(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x21;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f636f0;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146eb4842 FUN_146eb4842 body=29 status=ok
// SIG undefined FUN_146eb4842(void)

undefined8 FUN_146eb4842(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb4860 FUN_146eb4860 body=178 status=ok
// SIG undefined FUN_146eb4860(void)

void FUN_146eb4860(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146eb4cd0(&local_48,uVar4);
  if (0 < (int)uVar4) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + lVar5) * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(local_48 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar5 = lVar5 + 4;
    } while ((ulonglong)uVar4 << 2 != lVar5);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb4914 FUN_146eb4914 body=98 status=ok
// SIG undefined FUN_146eb4914(void)

void FUN_146eb4914(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar1 = param_1[2];
      uVar2 = ((undefined8 *)(param_2[2] + lVar4))[1];
      *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(param_2[2] + lVar4);
      ((undefined8 *)(lVar1 + lVar4))[1] = uVar2;
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return;
}



// FUNCTION 146eb4976 FUN_146eb4976 body=181 status=ok
// SIG undefined FUN_146eb4976(void)

void FUN_146eb4976(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar6 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar6)) {
    lVar9 = (longlong)(param_5 + param_3);
    lVar10 = (longlong)param_3;
    lVar7 = lVar10 << 4;
    lVar8 = lVar9 << 4;
    do {
      if ((int)param_1[3] <= lVar9) {
        return;
      }
      if (param_4 <= lVar10) {
        return;
      }
      puVar1 = (undefined4 *)(param_2[2] + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_1[2] + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 1;
      iVar6 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < iVar6);
  }
  return;
}



// FUNCTION 146eb4a36 FUN_146eb4a36 body=122 status=ok
// SIG undefined FUN_146eb4a36(void)

void FUN_146eb4a36(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb4ab2 FUN_146eb4ab2 body=257 status=ok
// SIG undefined FUN_146eb4ab2(void)

void FUN_146eb4ab2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar2 = (int *)*param_2;
      iVar1 = piVar2[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar7 = piVar2[uVar5 - 1];
        iVar4 = iVar1;
        if ((iVar7 != piVar2[uVar5 - 2] + 1) &&
           (iVar6 = (iVar1 - iVar7) + 1, iVar4 = piVar2[uVar5 - 2], iVar6 != 0)) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar1 = iVar4 - (iVar1 + 1);
          if (iVar1 != 0) {
            pvVar3 = (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar6 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4)
            ;
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 - iVar6;
          piVar2 = (int *)*param_2;
          iVar4 = piVar2[uVar5 - 2];
        }
        iVar1 = iVar4;
      }
      iVar7 = (iVar1 - *piVar2) + 1;
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar1 = iVar4 - (iVar1 + 1);
        if (iVar1 != 0) {
          pvVar3 = (void *)((longlong)*piVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar7 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4);
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar4 - iVar7;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_14499148c(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eb4bbc FUN_146eb4bbc body=185 status=ok
// SIG undefined FUN_146eb4bbc(void)

void FUN_146eb4bbc(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146eb4d14(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb4c96 FUN_146eb4c96 body=57 status=ok
// SIG undefined FUN_146eb4c96(void)

undefined8 * FUN_146eb4c96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63cf0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb4cd0 FUN_146eb4cd0 body=68 status=ok
// SIG undefined FUN_146eb4cd0(void)

int FUN_146eb4cd0(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1449e2712(param_1,iVar1);
  }
  FUN_144948818((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146eb4d14 FUN_146eb4d14 body=252 status=ok
// SIG undefined FUN_146eb4d14(void)

longlong * FUN_146eb4d14(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
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
      FUN_14499148c(param_2);
    }
    FUN_14056a44c(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1447e46aa(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
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



// FUNCTION 146eb4e12 FUN_146eb4e12 body=283 status=ok
// SIG undefined FUN_146eb4e12(void)

longlong FUN_146eb4e12(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == ','))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 146eb4f2e FUN_146eb4f2e body=268 status=ok
// SIG undefined FUN_146eb4f2e(void)

undefined8 FUN_146eb4f2e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) break;
        iVar5 = *(int *)(lVar1 + 0x38);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == ','))
      {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146eb503a FUN_146eb503a body=167 status=ok
// SIG undefined FUN_146eb503a(void)

void FUN_146eb503a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146eb5330(&local_48,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(local_48 + uVar2 * 8) =
           *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb50e2 FUN_146eb50e2 body=92 status=ok
// SIG undefined FUN_146eb50e2(void)

void FUN_146eb50e2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146eb513e FUN_146eb513e body=149 status=ok
// SIG undefined FUN_146eb513e(void)

void FUN_146eb513e(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146eb51de FUN_146eb51de body=249 status=ok
// SIG undefined FUN_146eb51de(void)

void FUN_146eb51de(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_14171ef34(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eb52f6 FUN_146eb52f6 body=57 status=ok
// SIG undefined FUN_146eb52f6(void)

undefined8 * FUN_146eb52f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63870;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb5330 FUN_146eb5330 body=68 status=ok
// SIG undefined FUN_146eb5330(void)

int FUN_146eb5330(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140752556(param_1,iVar1);
  }
  FUN_140752555((longlong)iVar1 * 8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146eb5374 FUN_146eb5374 body=252 status=ok
// SIG undefined FUN_146eb5374(void)

longlong * FUN_146eb5374(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
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
      FUN_14171ef34(param_2);
    }
    FUN_1407524e2(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_14280e057(param_1,*param_2 + lVar3);
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



// FUNCTION 146eb5472 FUN_146eb5472 body=290 status=ok
// SIG undefined FUN_146eb5472(void)

longlong * FUN_146eb5472(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 3,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 3);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14171ef34(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1401f7a02(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146eb5596 FUN_146eb5596 body=526 status=ok
// SIG undefined FUN_146eb5596(void)

void FUN_146eb5596(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146eb5630;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146eb5630:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c996ad8) && (FUN_144b3d300(&DAT_14c996ad8), DAT_14c996ad8 == -1)) {
    DAT_14c996ad0 = 0;
    _Init_thread_footer(&DAT_14c996ad8);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c996ad0;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f63d80;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146eb5ea4(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb57a6 FUN_146eb57a6 body=251 status=ok
// SIG undefined FUN_146eb57a6(void)

void FUN_146eb57a6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146eb57b6;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146eb57b6:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146eb58a2 FUN_146eb58a2 body=205 status=ok
// SIG undefined FUN_146eb58a2(void)

void FUN_146eb58a2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_58 = 0;
  uStack_50 = 0;
  FUN_146eb5db8(&local_58,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      FUN_145be27ca(local_58 + lVar2,(longlong)*(int *)(*param_2 + uVar3 * 4) * 0x50 + param_1[2]);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x50;
    } while (uVar1 != uVar3);
  }
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_140f35b7a(local_48,uStack_40 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb5970 FUN_146eb5970 body=570 status=ok
// SIG undefined FUN_146eb5970(void)

void FUN_146eb5970(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  longlong *local_118;
  ulonglong local_110;
  undefined1 local_104 [4];
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = param_1;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar2) {
    local_120 = (ulonglong)uVar2;
    uVar4 = 0;
    do {
      lVar5 = uVar4 * 0x50 + local_118[2];
      local_98 = 0;
      local_90 = 0;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_110 = uVar4;
      FUN_145c3f772(local_b8,lVar5);
      FUN_1402226aa(lVar5);
      local_d8 = 0x100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      iVar6 = 0;
      local_d0 = local_a8;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
        iVar6 = local_90;
      }
      local_e8 = local_c8;
      uVar1 = local_e8;
      local_e0 = local_c0;
      local_dc = local_bc;
      local_f8 = local_d8;
      local_f0 = local_d0;
      local_e8._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      iVar3 = local_e8._4_4_;
      local_100 = local_b8;
      if ((local_e8._4_4_ != iVar6) || (local_e8 = uVar1, local_d0 != local_a8)) {
        do {
          local_e8 = uVar1;
          iVar3 = *(int *)(*local_100 + (longlong)iVar3 * 0xc);
          if (-1 < (longlong)iVar3) {
            iVar3 = *(int *)(*param_2 + (longlong)iVar3 * 4);
          }
          local_d8 = CONCAT44(local_d8._4_4_,iVar3);
          FUN_1447cbafe(lVar5,local_104,&local_d8,0);
          local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
          FUN_1449c0562(&local_f8);
          iVar3 = local_e8._4_4_;
          uVar1 = local_e8;
        } while (local_100 != local_b8 || (local_f0 != local_a8 || local_e8._4_4_ != iVar6));
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(local_b8);
      uVar4 = local_110 + 1;
    } while (uVar4 != local_120);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb5bac FUN_146eb5bac body=109 status=ok
// SIG undefined FUN_146eb5bac(void)

void FUN_146eb5bac(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_145c3f772(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x50;
    } while ((ulonglong)uVar1 * 0x50 != lVar2);
  }
  return;
}



// FUNCTION 146eb5c1a FUN_146eb5c1a body=94 status=ok
// SIG undefined FUN_146eb5c1a(void)

void FUN_146eb5c1a(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146eb5dff(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146eb5c86 FUN_146eb5c86 body=172 status=ok
// SIG undefined FUN_146eb5c86(void)

void FUN_146eb5c86(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146e2cc20(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146e2cc20(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140aa5d58(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eb5d36 FUN_146eb5d36 body=59 status=ok
// SIG undefined FUN_146eb5d36(void)

void FUN_146eb5d36(longlong param_1)

{
  FUN_140f35b7a(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_140aa5d58(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146eb5d72 FUN_146eb5d72 body=69 status=ok
// SIG undefined FUN_146eb5d72(void)

undefined8 * FUN_146eb5d72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63e10;
  FUN_140f35b7a(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb5db8 FUN_146eb5db8 body=71 status=ok
// SIG undefined FUN_146eb5db8(void)

int FUN_146eb5db8(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146e2cb8c(param_1,iVar1);
  }
  FUN_140c7a8b1((longlong)iVar1 * 0x50 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146eb5dff FUN_146eb5dff body=164 status=ok
// SIG undefined FUN_146eb5dff(void)

void FUN_146eb5dff(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 * 0x50;
    lVar3 = lVar5 * 0x50;
    do {
      if ((int)param_1[1] <= lVar5 || param_4 <= lVar4) {
        return;
      }
      FUN_145c3f772(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x50;
      lVar3 = lVar3 + 0x50;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146eb5ea4 FUN_146eb5ea4 body=138 status=ok
// SIG undefined FUN_146eb5ea4(void)

undefined1 *
FUN_146eb5ea4(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0xe;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f63ea0;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146eb5f48 FUN_146eb5f48 body=29 status=ok
// SIG undefined FUN_146eb5f48(void)

undefined8 FUN_146eb5f48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb5f66 FUN_146eb5f66 body=526 status=ok
// SIG undefined FUN_146eb5f66(void)

void FUN_146eb5f66(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146eb6000;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146eb6000:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c996a5c) && (FUN_144b3d300(&DAT_14c996a5c), DAT_14c996a5c == -1)) {
    DAT_14c996a54 = 0;
    _Init_thread_footer(&DAT_14c996a5c);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c996a54;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f63a20;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146eb6860(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb6182 FUN_146eb6182 body=38 status=ok
// SIG undefined FUN_146eb6182(void)

void FUN_146eb6182(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146eb666c(param_1 + 0x10);
  return;
}



// FUNCTION 146eb61aa FUN_146eb61aa body=313 status=ok
// SIG undefined FUN_146eb61aa(void)

void FUN_146eb61aa(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146bfa93c(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_146bfaa61(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb62e4 FUN_146eb62e4 body=105 status=ok
// SIG undefined FUN_146eb62e4(void)

void FUN_146eb62e4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_1401f7650(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146eb634e FUN_146eb634e body=94 status=ok
// SIG undefined FUN_146eb634e(void)

void FUN_146eb634e(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146eb66cc(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146eb63b6 FUN_146eb63b6 body=69 status=ok
// SIG undefined FUN_146eb63b6(void)

undefined8 * FUN_146eb63b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63ab0;
  FUN_146bfaa61(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb63fc FUN_146eb63fc body=122 status=ok
// SIG undefined FUN_146eb63fc(void)

void FUN_146eb63fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb6478 FUN_146eb6478 body=172 status=ok
// SIG undefined FUN_146eb6478(void)

void FUN_146eb6478(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146bfa9c2(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146bfa9c2(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146eb666c(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eb652c FUN_146eb652c body=185 status=ok
// SIG undefined FUN_146eb652c(void)

void FUN_146eb652c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146eb6762(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb65ec FUN_146eb65ec body=58 status=ok
// SIG undefined FUN_146eb65ec(void)

void FUN_146eb65ec(longlong param_1)

{
  FUN_146bfaa61(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146eb666c(param_1 + 0x10,0);
  return;
}



// FUNCTION 146eb6626 FUN_146eb6626 body=69 status=ok
// SIG undefined FUN_146eb6626(void)

undefined8 * FUN_146eb6626(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63ab0;
  FUN_146bfaa61(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb666c FUN_146eb666c body=96 status=ok
// SIG undefined FUN_146eb666c(void)

void FUN_146eb666c(longlong param_1,int param_2)

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



// FUNCTION 146eb66cc FUN_146eb66cc body=150 status=ok
// SIG undefined FUN_146eb66cc(void)

void FUN_146eb66cc(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5) {
        return;
      }
      if (param_4 <= lVar4) {
        return;
      }
      FUN_1401f7650(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146eb6762 FUN_146eb6762 body=252 status=ok
// SIG undefined FUN_146eb6762(void)

longlong * FUN_146eb6762(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
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
      FUN_146eb666c(param_2);
    }
    FUN_146bfa8ac(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146eb5374(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
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



// FUNCTION 146eb6860 FUN_146eb6860 body=138 status=ok
// SIG undefined FUN_146eb6860(void)

undefined1 *
FUN_146eb6860(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x1f;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f63760;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146eb6904 FUN_146eb6904 body=29 status=ok
// SIG undefined FUN_146eb6904(void)

undefined8 FUN_146eb6904(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb6922 FUN_146eb6922 body=39 status=ok
// SIG undefined FUN_146eb6922(void)

ios_base * FUN_146eb6922(ios_base *param_1,int param_2)

{
  std::ios_base::~ios_base(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eb694a FUN_146eb694a body=59 status=ok
// SIG undefined FUN_146eb694a(void)

longlong FUN_146eb694a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x10;
  std::ios_base::~ios_base((ios_base *)(param_1 + -*(int *)(param_1 + -4)));
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 146eb6986 FUN_146eb6986 body=138 status=ok
// SIG undefined FUN_146eb6986(void)

bool FUN_146eb6986(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"FTransformCollection",1);
  iVar1 = (int)((ulonglong)param_2 >> 0x20);
  if ((local_30 != (uint)param_2) || (bVar2 = true, local_2c != iVar1)) {
    FUN_1446ddc76(&local_28,"FManagedArrayCollection",1);
    bVar2 = iVar1 == local_24 && local_28 == (uint)param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb6a11 FUN_146eb6a11 body=83 status=ok
// SIG undefined FUN_146eb6a11(void)

void FUN_146eb6a11(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 1;
  do {
    cVar1 = FUN_140498cd4(param_2,(&DAT_14c996a90)[uVar2],DAT_14c996a88);
    if (cVar1 == '\0') goto LAB_146eb6a51;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 8);
  uVar2 = 8;
LAB_146eb6a51:
  FUN_146eaece8(param_1,uVar2 & 0xffffffff);
  return;
}



// FUNCTION 146eb6a64 FUN_146eb6a64 body=2239 status=ok
// SIG undefined FUN_146eb6a64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146eb6a64(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  undefined1 *puVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auStack_328 [32];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [64];
  undefined1 *local_288;
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double dVar4;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (*(char *)(*param_4 + (longlong)(int)param_1) == '\0') {
    local_288 = (undefined1 *)0x0;
    local_280 = 0x1000000000;
    plVar24 = param_4;
    cVar17 = FUN_1405180eb(param_1,param_2,param_4,local_2c8);
    if ((cVar17 != '\0') && ((int)local_280 != 0)) {
      do {
        puVar18 = local_288;
        if (local_288 == (undefined1 *)0x0) {
          puVar18 = local_2c8;
        }
        lVar25 = (longlong)*(int *)(puVar18 + (longlong)(int)local_280 * 4 + -4);
        local_280 = CONCAT44(local_280._4_4_,(int)local_280 + -1);
        iVar20 = *(int *)(*(longlong *)(param_2 + 0x10) + lVar25 * 4);
        lVar19 = *(longlong *)(param_3 + 0x10);
        lVar22 = lVar25 * 0x60;
        dVar45 = *(double *)(lVar19 + lVar22);
        dVar47 = ((double *)(lVar19 + lVar22))[1];
        auVar36 = *(undefined1 (*) [16])(lVar19 + 0x10 + lVar22);
        dVar32 = auVar36._0_8_;
        dVar7 = auVar36._8_8_;
        pdVar1 = (double *)(lVar19 + 0x20 + lVar22);
        dVar35 = *pdVar1;
        dVar42 = pdVar1[1];
        pdVar1 = (double *)(lVar19 + 0x30 + lVar22);
        dVar27 = *pdVar1;
        dVar30 = pdVar1[1];
        auVar50 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar22);
        dVar5 = auVar50._0_8_;
        dVar8 = auVar50._8_8_;
        auVar44 = *(undefined1 (*) [16])(lVar19 + 0x50 + lVar22);
        dVar39 = auVar44._0_8_;
        dVar2 = auVar44._8_8_;
        lVar19 = *param_5;
        if (iVar20 != DAT_14c75f3b2) {
          lVar21 = (longlong)iVar20 * 0x60;
          pdVar1 = (double *)(lVar19 + lVar21);
          local_308 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar21);
          dVar6 = local_308._0_8_;
          dVar9 = local_308._8_8_;
          local_2f8 = *(undefined1 (*) [16])(lVar19 + 0x50 + lVar21);
          dVar12 = local_2f8._0_8_;
          dVar10 = local_2f8._8_8_;
          auVar36 = minpd(auVar50,local_308);
          auVar50 = minpd(auVar44,local_2f8);
          auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
          auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
          iVar20 = movmskpd((int)lVar21,auVar37);
          auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
          auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
          uVar23 = movmskpd((int)plVar24,auVar51);
          if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) {
            dVar13 = *pdVar1;
            dVar14 = pdVar1[1];
            dVar15 = pdVar1[2];
            dVar16 = pdVar1[3];
            dVar53 = pdVar1[3];
            dVar31 = pdVar1[3];
            dVar33 = *pdVar1 * dVar47;
            dVar40 = *pdVar1 * dVar45;
            dVar34 = pdVar1[1];
            dVar41 = pdVar1[1];
            dVar46 = dVar45 * dVar34;
            dVar48 = dVar47 * dVar41;
            dVar3 = pdVar1[2];
            dVar4 = pdVar1[2];
            dVar49 = dVar45 * dVar4;
            dVar45 = dVar47 * dVar3 * -1.0 +
                     dVar32 * dVar34 + dVar7 * *pdVar1 * 1.0 + dVar45 * dVar53;
            dVar47 = dVar49 * 1.0 + dVar7 * dVar41 + dVar32 * *pdVar1 * -1.0 + dVar47 * dVar31;
            dVar35 = dVar35 * dVar6;
            dVar42 = dVar42 * dVar9;
            dVar27 = dVar27 * dVar12;
            dVar30 = dVar30 * dVar10;
            dVar34 = dVar42 * dVar13 - dVar35 * dVar14;
            dVar41 = dVar27 * dVar14 - dVar42 * dVar15;
            dVar49 = dVar35 * dVar15 - dVar27 * dVar13;
            dVar52 = dVar30 * dVar16 - dVar30 * dVar16;
            dVar41 = dVar41 + dVar41;
            dVar49 = dVar49 + dVar49;
            dVar34 = dVar34 + dVar34;
            dVar52 = dVar52 + dVar52;
            auVar50._0_8_ = dVar5 * dVar6;
            auVar50._8_8_ = dVar8 * dVar9;
            dVar35 = (dVar34 * dVar14 - dVar15 * dVar49) + dVar53 * dVar41 + dVar35 + pdVar1[4];
            dVar42 = (dVar41 * dVar15 - dVar34 * dVar13) + dVar31 * dVar49 + dVar42 + pdVar1[5];
            dVar27 = (dVar49 * dVar13 - dVar14 * dVar41) + dVar53 * dVar34 + dVar27 + pdVar1[6];
            dVar30 = (dVar52 * dVar16 - dVar52 * dVar16) + dVar31 * dVar52 + dVar30 + pdVar1[7];
            auVar44._0_8_ = dVar39 * dVar12;
            auVar44._8_8_ = dVar2 * dVar10;
            auVar36._8_8_ = dVar32 * dVar4 * -1.0 + ((dVar40 * -1.0 + dVar7 * dVar31) - dVar48);
            auVar36._0_8_ = dVar7 * dVar3 * 1.0 + ((dVar33 * 1.0 + dVar32 * dVar53) - dVar46);
            plVar24 = (longlong *)0x0;
          }
          else {
            local_2f8._8_8_ = dVar2 * dVar10;
            local_2f8._0_8_ = dVar39 * dVar12;
            dVar41 = *pdVar1;
            dVar4 = pdVar1[1];
            dVar3 = pdVar1[2];
            dVar34 = dVar4 + dVar4;
            dVar30 = dVar3 + dVar3;
            dVar31 = dVar41 * (dVar41 + dVar41);
            local_1a8 = (1.0 - (dVar31 + dVar4 * dVar34)) * dVar12;
            dVar2 = pdVar1[3];
            dVar10 = dVar30 * dVar2;
            dVar53 = (dVar41 + dVar41) * pdVar1[3];
            dVar2 = dVar34 * dVar2;
            local_1b8 = (dVar2 + *pdVar1 * dVar30) * dVar12;
            dStack_1b0 = (dVar30 * dVar4 - dVar53) * dVar12;
            dVar12 = (1.0 - (dVar3 * dVar30 + dVar31)) * dVar9;
            dVar31 = (dVar34 * dVar41 + dVar10) * dVar6;
            local_1c8 = (dVar30 * dVar4 + dVar53) * dVar9;
            local_1e8 = (*pdVar1 * dVar30 - dVar2) * dVar6;
            local_1f8._8_4_ = SUB84(dVar31,0);
            local_1f8._0_8_ = (1.0 - (dVar3 * dVar30 + dVar4 * dVar34)) * dVar6;
            local_1f8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar12,0);
            local_1d8._0_8_ = (dVar34 * dVar41 - dVar10) * dVar9;
            local_1d8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = pdVar1[4];
            dStack_190 = pdVar1[5];
            local_188 = pdVar1[6];
            uStack_180 = 0x3ff0000000000000;
            dVar2 = dVar47 + dVar47;
            dVar12 = dVar32 + dVar32;
            dVar53 = dVar45 * (dVar45 + dVar45);
            local_228 = (1.0 - (dVar53 + dVar47 * dVar2)) * dVar39;
            dVar10 = (dVar45 + dVar45) * dVar7;
            local_258 = (dVar2 * dVar45 - dVar12 * dVar7) * dVar8;
            dVar30 = (dVar12 * dVar47 - dVar10) * dVar39;
            local_278 = (1.0 - (dVar32 * dVar12 + dVar47 * dVar2)) * dVar5;
            dStack_250 = (1.0 - (dVar32 * dVar12 + dVar53)) * dVar8;
            dStack_270 = (dVar2 * dVar45 + dVar12 * dVar7) * dVar5;
            local_248 = (dVar12 * dVar47 + dVar10) * dVar8;
            local_268 = (dVar45 * dVar12 - dVar2 * dVar7) * dVar5;
            uStack_260 = 0;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar30,0);
            local_238._0_8_ = (dVar2 * dVar7 + dVar45 * dVar12) * dVar39;
            local_238._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            uStack_220 = 0;
            uStack_200 = 0x3ff0000000000000;
            plVar24 = (longlong *)local_1f8;
            local_308 = auVar44;
            local_218 = dVar35;
            dStack_210 = dVar42;
            local_208 = dVar27;
            FUN_1447fea8d(&local_178,&local_278);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar44 = local_2f8;
            auVar36 = _DAT_149934d80;
            auVar28._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
            auVar28._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
            auVar50 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar28);
            uVar26 = -(ulonglong)(0.0 <= local_2f8._0_8_);
            dVar32 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
            dVar39 = auVar50._0_8_;
            local_168 = local_168 * dVar39;
            local_170 = local_170 * dVar39;
            local_178 = local_178 * dVar39;
            dVar39 = auVar50._8_8_;
            local_148 = local_148 * dVar39;
            local_150 = local_150 * dVar39;
            local_158 = dVar39 * local_158;
            local_128 = local_128 * dVar32;
            local_130 = local_130 * dVar32;
            local_138 = dVar32 * local_138;
            FUN_14481fd10(&local_2e8,&local_178);
            dVar32 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
            dVar39 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
            auVar38._0_8_ = dVar32 + dVar39;
            auVar38._8_8_ = dVar32 + dVar39;
            auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
            auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
            auVar50 = sqrtpd(auVar38,auVar38);
            auVar50 = divpd(auVar36,auVar50);
            auVar43._0_8_ = auVar50._0_8_ * local_2d8;
            auVar43._8_8_ = auVar50._8_8_ * dStack_2d0;
            auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar29);
            dVar45 = (double)((ulonglong)(local_2e8 * auVar50._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
            dVar47 = (double)((ulonglong)(dStack_2e0 * auVar50._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
            dVar30 = 0.0;
            lVar19 = *param_5;
            auVar50._8_8_ = dVar8 * dVar9;
            auVar50._0_8_ = dVar5 * dVar6;
            dVar35 = local_118;
            dVar42 = dStack_110;
            dVar27 = local_108;
          }
        }
        *(double *)(lVar19 + lVar22) = dVar45;
        ((double *)(lVar19 + lVar22))[1] = dVar47;
        *(undefined1 (*) [16])(lVar19 + 0x10 + lVar22) = auVar36;
        auVar11._8_4_ = SUB84(dVar42,0);
        auVar11._0_8_ = dVar35;
        auVar11._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        *(undefined1 (*) [16])(lVar19 + 0x20 + lVar22) = auVar11;
        pdVar1 = (double *)(lVar19 + 0x30 + lVar22);
        *pdVar1 = dVar27;
        pdVar1[1] = dVar30;
        *(undefined1 (*) [16])(lVar19 + 0x40 + lVar22) = auVar50;
        *(undefined1 (*) [16])(lVar19 + 0x50 + lVar22) = auVar44;
        *(undefined1 *)(*param_4 + lVar25) = 1;
      } while ((int)local_280 != 0);
    }
    if (local_288 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb7324 FUN_146eb7324 body=864 status=ok
// SIG undefined FUN_146eb7324(void)

void FUN_146eb7324(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  int iVar2;
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
  char cVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_1d8 [32];
  double local_1b8 [4];
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_130 [64];
  undefined1 *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(char *)(*param_4 + (longlong)(int)param_1) == '\0') {
    local_f0 = (undefined1 *)0x0;
    local_e8 = 0x1000000000;
    cVar13 = FUN_1405180eb(param_1,param_2,param_4);
    if ((cVar13 != '\0') && ((int)local_e8 != 0)) {
      do {
        puVar14 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar14 = local_130;
        }
        lVar19 = (longlong)*(int *)(puVar14 + (longlong)(int)local_e8 * 4 + -4);
        local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + -1);
        iVar2 = *(int *)(*(longlong *)(param_2 + 0x10) + lVar19 * 4);
        lVar16 = *(longlong *)(param_3 + 0x10);
        lVar15 = lVar19 * 0x60;
        dVar7 = *(double *)(lVar16 + lVar15);
        dVar8 = ((double *)(lVar16 + lVar15))[1];
        dVar9 = *(double *)(lVar16 + 0x10 + lVar15);
        puVar1 = (undefined4 *)(lVar16 + 0x20 + lVar15);
        pdVar17 = (double *)(lVar16 + 0x40 + lVar15);
        dVar10 = *pdVar17;
        dVar11 = pdVar17[1];
        dVar12 = *(double *)(lVar16 + 0x50 + lVar15);
        dVar24 = dVar8 + dVar8;
        dVar20 = dVar9 + dVar9;
        dVar5 = dVar7 * (dVar7 + dVar7);
        dVar4 = (1.0 - (dVar9 * dVar20 + dVar5)) * dVar11;
        dVar6 = *(double *)(lVar16 + lVar15) * dVar20;
        pdVar17 = (double *)(lVar16 + 0x18 + lVar15);
        dVar23 = *pdVar17;
        dVar21 = dVar20 * dVar23;
        dVar22 = (dVar7 + dVar7) * *pdVar17;
        dVar23 = dVar24 * dVar23;
        dVar3 = (dVar20 * dVar8 - dVar22) * dVar12;
        local_1b8[0] = (1.0 - (dVar9 * dVar20 + dVar8 * dVar24)) * dVar10;
        local_1b8[1] = (dVar24 * dVar7 + dVar21) * dVar10;
        local_1b8[2] = (dVar6 - dVar23) * dVar10;
        local_1b8[3] = 0.0;
        local_198._8_4_ = SUB84(dVar4,0);
        local_198._0_8_ = (dVar24 * dVar7 - dVar21) * dVar11;
        local_198._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_188 = (dVar20 * dVar8 + dVar22) * dVar11;
        uStack_180 = 0;
        local_178._8_4_ = SUB84(dVar3,0);
        local_178._0_8_ = (dVar23 + dVar6) * dVar12;
        local_178._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_168 = (1.0 - (dVar5 + dVar8 * dVar24)) * dVar12;
        uStack_160 = 0;
        local_158 = *puVar1;
        uStack_154 = puVar1[1];
        uStack_150 = puVar1[2];
        uStack_14c = puVar1[3];
        local_148 = *(undefined8 *)(lVar16 + 0x30 + lVar15);
        uStack_140 = 0x3ff0000000000000;
        if (iVar2 != DAT_14c75f3b2) {
          FUN_1447fea8d(local_1b8,local_1b8,(longlong)iVar2 * 0x80 + *param_5);
        }
        pdVar17 = local_1b8;
        pdVar18 = (double *)(lVar19 * 0x80 + *param_5);
        for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
          *pdVar18 = *pdVar17;
          pdVar17 = pdVar17 + 1;
          pdVar18 = pdVar18 + 1;
        }
        *(undefined1 *)(*param_4 + lVar19) = 1;
      } while ((int)local_e8 != 0);
    }
    if (local_f0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb7685 FUN_146eb7685 body=201 status=ok
// SIG undefined FUN_146eb7685(void)

void FUN_146eb7685(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    FUN_1401c3474(&local_48);
  }
  uVar2 = 0;
  memset(local_48,0,(longlong)(int)uVar1);
  FUN_1407a57f6(param_3,uVar1,0);
  if (0 < (int)uVar1) {
    do {
      local_58 = param_3;
      FUN_146eb6a64(uVar2,param_2,param_1,&local_48);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb774f FUN_146eb774f body=201 status=ok
// SIG undefined FUN_146eb774f(void)

void FUN_146eb774f(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    FUN_1401c3474(&local_48);
  }
  uVar2 = 0;
  memset(local_48,0,(longlong)(int)uVar1);
  FUN_1405181c4(param_3,uVar1,0);
  if (0 < (int)uVar1) {
    do {
      local_58 = param_3;
      FUN_146eb7324(uVar2,param_2,param_1,&local_48);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb7819 FUN_146eb7819 body=213 status=ok
// SIG undefined FUN_146eb7819(void)

void FUN_146eb7819(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    FUN_1401c3474(&local_48);
  }
  uVar2 = 0;
  memset(local_48,0,(longlong)(int)uVar1);
  FUN_1407a57f6(param_3,uVar1,0);
  if (0 < (int)uVar1) {
    do {
      local_58 = 0;
      local_50 = param_3;
      FUN_146eb78ef(uVar2,param_2,param_1,&local_48);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb78ef FUN_146eb78ef body=3945 status=ok
// SIG undefined FUN_146eb78ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146eb78ef(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  double *pdVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar35;
  double dVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar46 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar59;
  undefined1 auVar58 [16];
  undefined1 auStack_378 [32];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [64];
  undefined1 *local_288;
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
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
  undefined1 local_188 [16];
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*(char *)(*param_4 + (longlong)(int)param_1) == '\0') {
    local_288 = (undefined1 *)0x0;
    local_280 = 0x1000000000;
    cVar12 = FUN_1405180eb(param_1,param_2,param_4);
    if ((cVar12 != '\0') && ((int)local_280 != 0)) {
      do {
        auVar47 = _DAT_149934d80;
        puVar15 = local_288;
        if (local_288 == (undefined1 *)0x0) {
          puVar15 = local_2c8;
        }
        lVar17 = (longlong)*(int *)(puVar15 + (longlong)(int)local_280 * 4 + -4);
        local_280 = CONCAT44(local_280._4_4_,(int)local_280 + -1);
        lVar5 = *(longlong *)(param_3 + 0x10);
        lVar16 = lVar17 * 0x30;
        uVar4 = *(undefined8 *)(lVar5 + 0x20 + lVar16);
        auVar32._0_8_ = (double)(float)uVar4;
        auVar32._8_8_ = (double)(float)((ulonglong)uVar4 >> 0x20);
        uVar4 = *(undefined8 *)(lVar5 + 0x28 + lVar16);
        auVar46._0_8_ = (double)(float)uVar4;
        auVar46._8_8_ = (double)(float)((ulonglong)uVar4 >> 0x20);
        uVar4 = *(undefined8 *)(lVar5 + 0x10 + lVar16);
        dVar35 = (double)(float)uVar4;
        dVar43 = (double)(float)((ulonglong)uVar4 >> 0x20);
        uVar4 = *(undefined8 *)(lVar5 + 0x18 + lVar16);
        dVar51 = (double)(float)uVar4;
        dVar53 = (double)(float)((ulonglong)uVar4 >> 0x20);
        iVar13 = *(int *)(*(longlong *)(param_2 + 0x10) + lVar17 * 4);
        dVar52 = (double)(float)*(undefined8 *)(lVar5 + lVar16);
        dVar56 = (double)(float)((ulonglong)*(undefined8 *)(lVar5 + lVar16) >> 0x20);
        uVar4 = *(undefined8 *)(lVar5 + 8 + lVar16);
        auVar58._0_8_ = (double)(float)uVar4;
        auVar58._8_8_ = (double)(float)((ulonglong)uVar4 >> 0x20);
        if (iVar13 != DAT_14c75f3b2) {
          local_348._8_4_ = SUB84(dVar43,0);
          local_348._0_8_ = dVar35;
          local_348._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          local_358._8_4_ = SUB84(dVar53,0);
          local_358._0_8_ = dVar51;
          local_358._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
          lVar5 = *param_6;
          lVar16 = (longlong)iVar13 * 0x60;
          pdVar1 = (double *)(lVar5 + lVar16);
          auVar30 = *(undefined1 (*) [16])(lVar5 + 0x40 + lVar16);
          dVar43 = auVar30._0_8_;
          dVar19 = auVar30._8_8_;
          auVar37 = *(undefined1 (*) [16])(lVar5 + 0x50 + lVar16);
          dVar54 = auVar37._0_8_;
          dVar26 = auVar37._8_8_;
          auVar41._8_8_ = auVar32._8_8_;
          auVar41._0_8_ = auVar32._0_8_;
          auVar30 = minpd(auVar41,auVar30);
          auVar40._8_8_ = auVar46._8_8_;
          auVar40._0_8_ = auVar46._0_8_;
          auVar41 = minpd(auVar40,auVar37);
          auVar37._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
          auVar37._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
          iVar13 = movmskpd((int)lVar5,auVar37);
          auVar30._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
          auVar30._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
          uVar14 = movmskpd((int)lVar16,auVar30);
          if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
            dVar34 = *pdVar1;
            dVar9 = pdVar1[1];
            dVar33 = pdVar1[2];
            dVar11 = pdVar1[3];
            dVar50 = pdVar1[3];
            dVar7 = pdVar1[3];
            dVar53 = pdVar1[1];
            dVar36 = pdVar1[1];
            dVar20 = dVar53 * dVar52;
            dVar27 = dVar36 * dVar56;
            dVar55 = *pdVar1 * dVar56;
            dVar57 = *pdVar1 * dVar52;
            dVar44 = pdVar1[2];
            dVar8 = pdVar1[2];
            dVar29 = dVar52 * dVar8;
            dVar45 = auVar58._8_8_ * dVar44;
            dVar52 = dVar56 * dVar44 * -1.0 +
                     auVar58._0_8_ * dVar53 + auVar58._8_8_ * *pdVar1 * 1.0 + dVar50 * dVar52;
            dVar56 = dVar29 * 1.0 +
                     auVar58._8_8_ * dVar36 + auVar58._0_8_ * *pdVar1 * -1.0 + dVar7 * dVar56;
            dVar35 = dVar35 * dVar43;
            dVar28 = (double)local_348._8_8_ * dVar19;
            dVar51 = dVar51 * dVar54;
            dVar59 = (double)local_358._8_8_ * dVar26;
            dVar53 = dVar28 * dVar34 - dVar35 * dVar9;
            dVar36 = dVar51 * dVar9 - dVar28 * dVar33;
            dVar44 = dVar35 * dVar33 - dVar51 * dVar34;
            dVar29 = dVar59 * dVar11 - dVar59 * dVar11;
            dVar36 = dVar36 + dVar36;
            dVar44 = dVar44 + dVar44;
            dVar53 = dVar53 + dVar53;
            dVar29 = dVar29 + dVar29;
            auVar32._0_8_ = auVar32._0_8_ * dVar43;
            auVar32._8_8_ = auVar32._8_8_ * dVar19;
            dVar35 = (dVar53 * dVar9 - dVar33 * dVar44) + dVar50 * dVar36 + dVar35 + pdVar1[4];
            dVar43 = (dVar36 * dVar33 - dVar53 * dVar34) + dVar7 * dVar44 + dVar28 + pdVar1[5];
            dVar51 = (dVar44 * dVar34 - dVar9 * dVar36) + dVar50 * dVar53 + dVar51 + pdVar1[6];
            dVar53 = (dVar29 * dVar11 - dVar29 * dVar11) + dVar7 * dVar29 + dVar59 + pdVar1[7];
            auVar46._0_8_ = auVar46._0_8_ * dVar54;
            auVar46._8_8_ = auVar46._8_8_ * dVar26;
            auVar58._8_8_ =
                 auVar58._0_8_ * dVar8 * -1.0 + ((dVar57 * -1.0 + dVar7 * auVar58._8_8_) - dVar27);
            auVar58._0_8_ = dVar45 * 1.0 + ((dVar55 * 1.0 + dVar50 * auVar58._0_8_) - dVar20);
          }
          else {
            dVar59 = *pdVar1;
            dVar28 = pdVar1[1];
            dVar34 = pdVar1[2];
            dVar7 = dVar28 + dVar28;
            dVar36 = dVar34 + dVar34;
            dVar29 = dVar59 * (dVar59 + dVar59);
            dVar45 = (1.0 - (dVar34 * dVar36 + dVar29)) * dVar19;
            dVar53 = pdVar1[3];
            dVar44 = dVar36 * dVar53;
            dVar8 = (dVar59 + dVar59) * pdVar1[3];
            dVar53 = dVar7 * dVar53;
            dVar50 = (dVar36 * dVar28 - dVar8) * dVar54;
            local_1a8 = (1.0 - (dVar29 + dVar28 * dVar7)) * dVar54;
            dVar29 = (dVar7 * dVar59 + dVar44) * dVar43;
            local_1c8 = (dVar36 * dVar28 + dVar8) * dVar19;
            local_1e8 = (*pdVar1 * dVar36 - dVar53) * dVar43;
            local_1f8._8_4_ = SUB84(dVar29,0);
            local_1f8._0_8_ = (1.0 - (dVar34 * dVar36 + dVar28 * dVar7)) * dVar43;
            local_1f8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar45,0);
            local_1d8._0_8_ = (dVar7 * dVar59 - dVar44) * dVar19;
            local_1d8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar50,0);
            local_1b8._0_8_ = (dVar53 + *pdVar1 * dVar36) * dVar54;
            local_1b8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
            uStack_1a0 = 0;
            local_198 = pdVar1[4];
            dStack_190 = pdVar1[5];
            local_188._8_8_ = 0x3ff0000000000000;
            local_188._0_8_ = pdVar1[6];
            dVar50 = dVar56 + dVar56;
            dVar36 = auVar58._0_8_ + auVar58._0_8_;
            dVar53 = (dVar52 + dVar52) * dVar52;
            local_228 = (1.0 - (dVar53 + dVar50 * dVar56)) * auVar46._0_8_;
            dVar44 = (dVar52 + dVar52) * auVar58._8_8_;
            dVar7 = (dVar36 * dVar56 - dVar44) * auVar46._0_8_;
            local_278 = ((double)DAT_149934d80 - (dVar36 * auVar58._0_8_ + dVar50 * dVar56)) *
                        auVar32._0_8_;
            dVar53 = (DAT_149934d80._8_8_ - (dVar36 * auVar58._0_8_ + dVar53)) * auVar32._8_8_;
            dStack_270 = (dVar50 * dVar52 + dVar36 * auVar58._8_8_) * auVar32._0_8_;
            local_248 = (dVar36 * dVar56 + dVar44) * auVar32._8_8_;
            local_268 = (dVar52 * dVar36 - dVar50 * auVar58._8_8_) * auVar32._0_8_;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar53,0);
            local_258._0_8_ = (dVar50 * dVar52 - dVar36 * auVar58._8_8_) * auVar32._8_8_;
            local_258._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar7,0);
            local_238._0_8_ = (dVar52 * dVar36 + dVar50 * auVar58._8_8_) * auVar46._0_8_;
            local_238._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            uStack_220 = 0;
            dStack_210 = (double)local_348._8_8_;
            uStack_200 = 0x3ff0000000000000;
            local_218 = dVar35;
            local_208 = dVar51;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar24._8_8_ = -(ulonglong)(0.0 <= dVar19 * auVar32._8_8_);
            auVar24._0_8_ = -(ulonglong)(0.0 <= dVar43 * auVar32._0_8_);
            auVar58 = blendvpd(_DAT_149936790,auVar47,auVar24);
            uVar18 = -(ulonglong)(0.0 <= dVar54 * auVar46._0_8_);
            dVar35 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
            dVar51 = auVar58._0_8_;
            local_168 = local_168 * dVar51;
            local_170 = local_170 * dVar51;
            local_178 = local_178 * dVar51;
            dVar51 = auVar58._8_8_;
            local_148 = local_148 * dVar51;
            local_150 = local_150 * dVar51;
            local_158 = dVar51 * local_158;
            local_128 = local_128 * dVar35;
            local_130 = local_130 * dVar35;
            local_138 = dVar35 * local_138;
            FUN_14481fd10(&local_2e8,&local_178);
            dVar35 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
            dVar51 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
            auVar42._0_8_ = dVar35 + dVar51;
            auVar42._8_8_ = dVar35 + dVar51;
            auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
            auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
            auVar58 = sqrtpd(auVar42,auVar42);
            auVar47 = divpd(auVar47,auVar58);
            auVar49._0_8_ = auVar47._0_8_ * local_2d8;
            auVar49._8_8_ = auVar47._8_8_ * dStack_2d0;
            auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar25);
            dVar52 = (double)((ulonglong)(local_2e8 * auVar47._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
            dVar56 = (double)((ulonglong)(dStack_2e0 * auVar47._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
            dVar53 = 0.0;
            auVar32._8_8_ = dVar19 * auVar32._8_8_;
            auVar32._0_8_ = dVar43 * auVar32._0_8_;
            auVar46._8_8_ = dVar26 * auVar46._8_8_;
            auVar46._0_8_ = dVar54 * auVar46._0_8_;
            dVar35 = local_118;
            dVar43 = dStack_110;
            dVar51 = local_108;
          }
        }
        auVar47 = _DAT_149934d80;
        auVar23 = auVar32;
        dVar54 = dVar52;
        if (param_5 != 0) {
          local_348._8_4_ = SUB84(dVar43,0);
          local_348._0_8_ = dVar35;
          local_348._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          lVar5 = *(longlong *)(param_5 + 0x10);
          lVar16 = lVar17 * 0x60;
          dVar7 = *(double *)(lVar5 + lVar16);
          dVar36 = ((double *)(lVar5 + lVar16))[1];
          pdVar1 = (double *)(lVar5 + 0x10 + lVar16);
          dVar44 = *pdVar1;
          dVar8 = pdVar1[1];
          pauVar2 = (undefined1 (*) [16])(lVar5 + 0x20 + lVar16);
          local_338 = *pauVar2;
          pauVar3 = (undefined1 (*) [16])(lVar5 + 0x30 + lVar16);
          local_358 = *pauVar3;
          local_308 = *(undefined1 (*) [16])(lVar5 + 0x40 + lVar16);
          local_318 = *(undefined1 (*) [16])(lVar5 + 0x50 + lVar16);
          auVar30 = minpd(local_308,auVar32);
          auVar37 = minpd(local_318,auVar46);
          auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
          auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
          iVar13 = movmskpd((int)lVar5,auVar31);
          auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
          auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
          uVar14 = movmskpd((int)lVar16,auVar38);
          dVar59 = auVar58._8_8_;
          dVar29 = auVar58._0_8_;
          dVar26 = auVar32._8_8_;
          dVar45 = auVar46._0_8_;
          dVar50 = auVar46._8_8_;
          dVar19 = auVar32._0_8_;
          if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
            dVar9 = *(double *)*pauVar2 * dVar19;
            dVar43 = *(double *)(*pauVar2 + 8) * dVar26;
            local_338._8_4_ = SUB84(dVar43,0);
            local_338._0_8_ = dVar9;
            local_338._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
            dVar20 = (double)local_358._0_8_ * dVar45;
            dVar27 = *(double *)(*pauVar3 + 8) * dVar50;
            auVar47._8_4_ = SUB84(dVar53,0);
            auVar47._0_8_ = dVar51;
            auVar47._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
            dVar53 = dVar43 * dVar52 - dVar56 * dVar9;
            dVar43 = dVar20 * dVar56 - dVar29 * dVar43;
            dVar28 = dVar9 * dVar29 - dVar52 * dVar20;
            dVar33 = dVar27 * dVar59 - dVar59 * dVar27;
            dVar43 = dVar43 + dVar43;
            dVar28 = dVar28 + dVar28;
            dVar53 = dVar53 + dVar53;
            dVar33 = dVar33 + dVar33;
            dVar11 = dVar56 * dVar43;
            dVar34 = dVar53 * dVar56;
            dVar55 = dVar56 * dVar7;
            dVar57 = dVar56 * dVar36;
            dVar54 = dVar36 * dVar29 * -1.0 +
                     dVar44 * dVar56 + dVar52 * dVar8 * 1.0 + dVar59 * dVar7;
            dVar56 = dVar7 * dVar29 * 1.0 +
                     dVar8 * dVar56 + dVar52 * dVar44 * -1.0 + dVar59 * dVar36;
            dVar35 = dVar35 + (dVar34 - dVar29 * dVar28) + dVar59 * dVar43 + dVar9;
            dVar43 = (double)local_348._8_8_ +
                     (dVar43 * dVar29 - dVar53 * dVar52) + dVar59 * dVar28 + (double)local_338._8_8_
            ;
            local_358._8_8_ = auVar47._8_8_;
            dVar51 = dVar51 + (dVar28 * dVar52 - dVar11) + dVar59 * dVar53 + dVar20;
            dVar53 = (double)local_358._8_8_ +
                     (dVar33 * dVar59 - dVar33 * dVar59) + dVar59 * dVar33 + dVar27;
            local_358._8_8_ = dVar53;
            local_358._0_8_ = dVar51;
            auVar23._0_8_ = dVar19 * (double)local_308._0_8_;
            auVar23._8_8_ = dVar26 * (double)local_308._8_8_;
            auVar46._0_8_ = dVar45 * (double)local_318._0_8_;
            auVar46._8_8_ = dVar50 * (double)local_318._8_8_;
            auVar58._8_8_ =
                 dVar44 * dVar29 * -1.0 + ((dVar52 * dVar7 * -1.0 + dVar59 * dVar8) - dVar57);
            auVar58._0_8_ =
                 dVar8 * dVar29 * 1.0 + ((dVar52 * dVar36 * 1.0 + dVar59 * dVar44) - dVar55);
            local_328 = auVar32;
            local_2f8 = dVar7;
            dStack_2f0 = dVar36;
          }
          else {
            dVar54 = dVar56 + dVar56;
            dVar34 = dVar29 + dVar29;
            dVar28 = dVar52 * (dVar52 + dVar52);
            dVar43 = (dVar52 + dVar52) * dVar59;
            dVar53 = (dVar34 * dVar56 - dVar43) * dVar45;
            local_1c8 = (dVar34 * dVar56 + dVar43) * dVar26;
            local_1f8._8_8_ = (dVar54 * dVar52 + dVar34 * dVar59) * dVar19;
            local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar29 * dVar34 + dVar56 * dVar54)) * dVar19
            ;
            local_1e8 = (dVar52 * dVar34 - dVar54 * dVar59) * dVar19;
            uStack_1e0 = 0;
            local_1a8 = (1.0 - (dVar28 + dVar56 * dVar54)) * dVar45;
            dVar43 = dVar45 * (double)local_318._0_8_;
            dVar50 = dVar50 * (double)local_318._8_8_;
            local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar29 * dVar34 + dVar28)) * dVar26;
            local_1d8._0_8_ = (dVar54 * dVar52 - dVar34 * dVar59) * dVar26;
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar53,0);
            local_1b8._0_8_ = (dVar54 * dVar59 + dVar52 * dVar34) * dVar45;
            local_1b8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
            uStack_1a0 = 0;
            dStack_190 = (double)local_348._8_8_;
            local_188._8_4_ = 0;
            local_188._0_8_ = dVar51;
            local_188._12_4_ = 0x3ff00000;
            dVar51 = dVar36 + dVar36;
            dVar56 = dVar44 + dVar44;
            dVar53 = dVar7 * (dVar7 + dVar7);
            local_228 = (1.0 - (dVar53 + dVar36 * dVar51)) * (double)local_318._0_8_;
            dVar52 = (dVar7 + dVar7) * dVar8;
            dVar19 = dVar19 * (double)local_308._0_8_;
            dVar26 = dVar26 * (double)local_308._8_8_;
            local_278 = ((double)DAT_149934d80 - (dVar44 * dVar56 + dVar36 * dVar51)) *
                        (double)local_308._0_8_;
            dStack_270 = (dVar51 * dVar7 + dVar56 * dVar8) * (double)local_308._0_8_;
            local_248 = (dVar56 * dVar36 + dVar52) * (double)local_308._8_8_;
            local_268 = (dVar7 * dVar56 - dVar51 * dVar8) * (double)local_308._0_8_;
            uStack_260 = 0;
            local_258._8_8_ =
                 (DAT_149934d80._8_8_ - (dVar44 * dVar56 + dVar53)) * (double)local_308._8_8_;
            local_258._0_8_ = (dVar51 * dVar7 - dVar56 * dVar8) * (double)local_308._8_8_;
            uStack_240 = 0;
            local_238._8_8_ = (dVar56 * dVar36 - dVar52) * (double)local_318._0_8_;
            local_238._0_8_ = (dVar51 * dVar8 + dVar7 * dVar56) * (double)local_318._0_8_;
            uStack_220 = 0;
            local_208 = (double)local_358._0_8_;
            uStack_200 = 0x3ff0000000000000;
            local_218 = *(double *)*pauVar2;
            dStack_210 = *(double *)(*pauVar2 + 8);
            local_198 = dVar35;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar21._8_8_ = -(ulonglong)(0.0 <= dVar26);
            auVar21._0_8_ = -(ulonglong)(0.0 <= dVar19);
            auVar32 = blendvpd(_DAT_149936790,auVar47,auVar21);
            uVar18 = -(ulonglong)(0.0 <= dVar43);
            dVar35 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
            dVar51 = auVar32._0_8_;
            local_168 = local_168 * dVar51;
            local_170 = local_170 * dVar51;
            local_178 = local_178 * dVar51;
            dVar51 = auVar32._8_8_;
            local_148 = local_148 * dVar51;
            local_150 = local_150 * dVar51;
            local_158 = dVar51 * local_158;
            local_128 = local_128 * dVar35;
            local_130 = local_130 * dVar35;
            local_138 = dVar35 * local_138;
            FUN_14481fd10(&local_2e8,&local_178);
            dVar35 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
            dVar51 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
            auVar39._0_8_ = dVar35 + dVar51;
            auVar39._8_8_ = dVar35 + dVar51;
            auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
            auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
            auVar32 = sqrtpd(auVar39,auVar39);
            auVar47 = divpd(auVar47,auVar32);
            auVar48._0_8_ = auVar47._0_8_ * local_2d8;
            auVar48._8_8_ = auVar47._8_8_ * dStack_2d0;
            auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar22);
            dVar54 = (double)((ulonglong)(local_2e8 * auVar47._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
            dVar56 = (double)((ulonglong)(dStack_2e0 * auVar47._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
            dVar53 = 0.0;
            auVar23._8_8_ = dVar26;
            auVar23._0_8_ = dVar19;
            auVar46._8_8_ = dVar50;
            auVar46._0_8_ = dVar43;
            dVar35 = local_118;
            dVar43 = dStack_110;
            dVar51 = local_108;
          }
        }
        lVar5 = *param_6;
        lVar16 = lVar17 * 0x60;
        *(double *)(lVar5 + lVar16) = dVar54;
        ((double *)(lVar5 + lVar16))[1] = dVar56;
        *(undefined1 (*) [16])(lVar5 + 0x10 + lVar16) = auVar58;
        auVar6._8_4_ = SUB84(dVar43,0);
        auVar6._0_8_ = dVar35;
        auVar6._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 0x20 + lVar16) = auVar6;
        auVar10._8_4_ = SUB84(dVar53,0);
        auVar10._0_8_ = dVar51;
        auVar10._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 0x30 + lVar16) = auVar10;
        *(undefined1 (*) [16])(lVar5 + 0x40 + lVar16) = auVar23;
        *(undefined1 (*) [16])(lVar5 + 0x50 + lVar16) = auVar46;
        *(undefined1 *)(*param_4 + lVar17) = 1;
      } while ((int)local_280 != 0);
    }
    if (local_288 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb8859 FUN_146eb8859 body=213 status=ok
// SIG undefined FUN_146eb8859(void)

void FUN_146eb8859(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    FUN_1401c3474(&local_48);
  }
  uVar2 = 0;
  memset(local_48,0,(longlong)(int)uVar1);
  FUN_1406ccac6(param_3,uVar1,0);
  if (0 < (int)uVar1) {
    do {
      local_58 = 0;
      local_50 = param_3;
      FUN_146eb892f(uVar2,param_2,param_1,&local_48);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb892f FUN_146eb892f body=2569 status=ok
// SIG undefined FUN_146eb892f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146eb892f(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  float *pfVar1;
  double *pdVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  undefined1 auVar45 [16];
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  float fVar53;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar64;
  undefined1 auVar63 [16];
  undefined1 auStack_238 [32];
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [64];
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [8];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(char *)(*param_4 + (longlong)(int)param_1) == '\0') {
    local_1c8 = (undefined1 *)0x0;
    local_1c0 = 0x1000000000;
    cVar8 = FUN_1405180eb(param_1,param_2,param_4);
    auVar7 = _DAT_149e1ef10;
    if ((cVar8 != '\0') && ((int)local_1c0 != 0)) {
      fVar4 = (float)DAT_149e1ef10;
      fVar5 = DAT_149e1ef10._4_4_;
      fVar6 = DAT_149e1ef10._12_4_;
      do {
        puVar10 = local_1c8;
        if (local_1c8 == (undefined1 *)0x0) {
          puVar10 = local_208;
        }
        lVar11 = (longlong)*(int *)(puVar10 + (longlong)(int)local_1c0 * 4 + -4);
        local_1c0 = CONCAT44(local_1c0._4_4_,(int)local_1c0 + -1);
        iVar9 = *(int *)(*(longlong *)(param_2 + 0x10) + lVar11 * 4);
        lVar3 = *(longlong *)(param_3 + 0x10);
        lVar12 = lVar11 * 0x30;
        auVar55 = *(undefined1 (*) [16])(lVar3 + lVar12);
        fVar14 = auVar55._0_4_;
        fVar22 = auVar55._4_4_;
        fVar25 = auVar55._8_4_;
        fVar33 = auVar55._12_4_;
        auVar48 = *(undefined1 (*) [16])(lVar3 + 0x10 + lVar12);
        auVar58 = *(undefined1 (*) [16])(lVar3 + 0x20 + lVar12);
        fVar23 = auVar58._0_4_;
        fVar24 = auVar58._4_4_;
        fVar34 = auVar58._12_4_;
        fVar21 = auVar7._8_4_;
        if (iVar9 != DAT_14c75f3b2) {
          lVar3 = *param_6;
          lVar13 = (longlong)iVar9 * 0x30;
          pfVar1 = (float *)(lVar3 + lVar13);
          auVar55 = *(undefined1 (*) [16])(lVar3 + 0x20 + lVar13);
          fVar37 = auVar55._0_4_;
          fVar43 = auVar55._4_4_;
          fVar46 = auVar55._8_4_;
          fVar51 = auVar55._12_4_;
          fVar53 = auVar58._8_4_;
          auVar55 = minps(auVar58,auVar55);
          auVar27._4_4_ = -(uint)(auVar55._4_4_ < 0.0);
          auVar27._0_4_ = -(uint)(auVar55._0_4_ < 0.0);
          auVar27._8_4_ = -(uint)(auVar55._8_4_ < 0.0);
          auVar27._12_4_ = -(uint)(auVar55._12_4_ < 0.0);
          iVar9 = movmskps((int)lVar3,auVar27);
          if (iVar9 == 0) {
            fVar39 = *pfVar1;
            fVar41 = pfVar1[1];
            fVar44 = pfVar1[2];
            fVar50 = pfVar1[3];
            fVar60 = auVar48._0_4_ * fVar37;
            fVar61 = auVar48._4_4_ * fVar43;
            fVar38 = auVar48._8_4_ * fVar46;
            fVar40 = auVar48._12_4_ * fVar51;
            fVar42 = fVar61 * fVar39 - fVar60 * fVar41;
            fVar62 = fVar38 * fVar41 - fVar61 * fVar44;
            fVar64 = fVar60 * fVar44 - fVar38 * fVar39;
            fVar56 = fVar40 * fVar50 - fVar40 * fVar50;
            fVar42 = fVar42 + fVar42;
            fVar62 = fVar62 + fVar62;
            fVar64 = fVar64 + fVar64;
            fVar56 = fVar56 + fVar56;
            auVar55._4_4_ =
                 fVar44 * fVar14 * 1.0 +
                 fVar41 * fVar33 * 1.0 + fVar39 * fVar25 * -1.0 + fVar22 * fVar50;
            auVar55._0_4_ =
                 fVar44 * fVar22 * -1.0 +
                 fVar41 * fVar25 * 1.0 + fVar39 * fVar33 * 1.0 + fVar14 * fVar50;
            auVar58._0_4_ = fVar23 * fVar37;
            auVar58._4_4_ = fVar24 * fVar43;
            auVar58._8_4_ = fVar53 * fVar46;
            auVar58._12_4_ = fVar34 * fVar51;
            auVar55._8_4_ =
                 fVar44 * fVar33 * 1.0 +
                 fVar41 * fVar14 * -1.0 + fVar39 * fVar22 * 1.0 + fVar25 * fVar50;
            auVar55._12_4_ =
                 fVar44 * fVar25 * -1.0 +
                 fVar41 * fVar22 * -1.0 + fVar39 * fVar14 * -1.0 + fVar33 * fVar50;
            auVar48._4_4_ =
                 (fVar62 * fVar44 - fVar42 * fVar39) + fVar50 * fVar64 + fVar61 + pfVar1[5];
            auVar48._0_4_ =
                 (fVar42 * fVar41 - fVar64 * fVar44) + fVar50 * fVar62 + fVar60 + pfVar1[4];
            auVar48._8_4_ =
                 (fVar64 * fVar39 - fVar62 * fVar41) + fVar50 * fVar42 + fVar38 + pfVar1[6];
            auVar48._12_4_ =
                 (fVar56 * fVar50 - fVar56 * fVar50) + fVar50 * fVar56 + fVar40 + pfVar1[7];
          }
          else {
            fVar39 = *pfVar1;
            fVar41 = pfVar1[1];
            fVar44 = pfVar1[2];
            fVar50 = pfVar1[3];
            fVar61 = fVar39 + fVar39;
            fVar38 = fVar41 + fVar41;
            fVar40 = fVar44 + fVar44;
            fVar60 = fVar50 * (fVar50 + fVar50);
            auVar49._0_4_ = (fVar4 - (fVar44 * fVar40 + fVar41 * fVar38)) * fVar37;
            auVar49._4_4_ = (fVar5 - (fVar44 * fVar40 + fVar39 * fVar61)) * fVar43;
            auVar49._8_4_ = (fVar21 - (fVar41 * fVar38 + fVar39 * fVar61)) * fVar46;
            auVar49._12_4_ = (fVar6 - (fVar60 + fVar60)) * fVar51;
            fVar44 = (fVar38 * fVar39 + fVar40 * fVar50) * fVar37;
            auVar59._4_4_ = (fVar40 * fVar41 + fVar61 * fVar50) * fVar43;
            auVar59._0_4_ = fVar44;
            local_158 = (fVar40 * fVar39 + fVar38 * fVar50) * fVar46;
            local_168 = (fVar38 * fVar39 - fVar40 * fVar50) * fVar43;
            fStack_154 = (fVar40 * fVar41 - fVar61 * fVar50) * fVar46;
            auVar55 = blendps(auVar49,ZEXT816(0),8);
            auVar59._8_4_ = local_158;
            auVar59._12_4_ = (fVar61 * fVar39 + fVar61 * fVar50) * fVar51;
            local_178._4_4_ = fVar44;
            local_178._0_4_ = auVar49._0_4_;
            local_178._8_4_ = (fVar40 * fVar39 - fVar38 * fVar50) * fVar37;
            local_178._12_4_ = 0;
            auVar58 = insertps(auVar59,auVar59,0x4c);
            uStack_160 = auVar58._0_4_;
            uStack_15c = auVar58._8_4_;
            uStack_150 = auVar55._8_4_;
            uStack_14c = auVar55._12_4_;
            local_148 = insertps(*(undefined1 (*) [16])(pfVar1 + 4),ZEXT816(0x3f800000),0x30);
            fVar41 = fVar14 + fVar14;
            fVar44 = fVar22 + fVar22;
            fVar50 = fVar25 + fVar25;
            fVar39 = fVar33 * (fVar33 + fVar33);
            auVar45._0_4_ = (fVar4 - (fVar25 * fVar50 + fVar22 * fVar44)) * fVar23;
            auVar45._4_4_ = (fVar5 - (fVar25 * fVar50 + fVar14 * fVar41)) * fVar24;
            auVar45._8_4_ = (fVar21 - (fVar22 * fVar44 + fVar14 * fVar41)) * fVar53;
            auVar45._12_4_ = (fVar6 - (fVar39 + fVar39)) * fVar34;
            fVar25 = (fVar44 * fVar14 + fVar50 * fVar33) * fVar23;
            auVar52._4_4_ = (fVar50 * fVar22 + fVar41 * fVar33) * fVar24;
            auVar52._0_4_ = fVar25;
            local_198 = (fVar50 * fVar14 + fVar44 * fVar33) * fVar53;
            auVar31._0_4_ = (fVar44 * fVar14 - fVar50 * fVar33) * fVar24;
            auVar31._4_4_ = (fVar50 * fVar22 - fVar41 * fVar33) * fVar53;
            auVar31._8_4_ = (fVar50 * fVar14 - fVar44 * fVar33) * fVar23;
            auVar31._12_4_ = (fVar41 * fVar14 - fVar41 * fVar33) * fVar34;
            auVar55 = blendps(auVar45,ZEXT816(0),8);
            auVar52._8_4_ = local_198;
            auVar52._12_4_ = (fVar41 * fVar14 + fVar41 * fVar33) * fVar34;
            local_1b8._4_4_ = fVar25;
            local_1b8._0_4_ = auVar45._0_4_;
            local_1b8._8_4_ = auVar31._8_4_;
            local_1b8._12_4_ = 0;
            auVar58 = insertps(auVar52,auVar52,0x4c);
            local_1a8._4_4_ = auVar45._4_4_;
            local_1a8._0_4_ = auVar31._0_4_;
            uStack_1a0 = auVar58._0_4_;
            uStack_19c = auVar58._8_4_;
            uStack_190 = auVar55._8_4_;
            uStack_18c = auVar55._12_4_;
            local_188 = insertps(auVar48,ZEXT816(0x3f800000),0x30);
            fStack_194 = auVar31._4_4_;
            fStack_164 = auVar49._4_4_;
            FUN_144afeb32(&local_138,local_1b8,auVar31._8_8_);
            FUN_144afd82e(&local_138);
            auVar19._4_4_ = -(uint)(0.0 <= fVar24 * fVar43);
            auVar19._0_4_ = -(uint)(0.0 <= fVar23 * fVar37);
            auVar19._8_4_ = -(uint)(0.0 <= fVar53 * fVar46);
            auVar19._12_4_ = -(uint)(0.0 <= fVar34 * fVar51);
            auVar55 = blendvps(_DAT_149f63320,auVar7,auVar19);
            fVar14 = auVar55._0_4_;
            local_130 = local_130 * fVar14;
            local_134 = local_134 * fVar14;
            local_138 = local_138 * fVar14;
            fVar14 = auVar55._4_4_;
            local_120 = local_120 * fVar14;
            local_124 = local_124 * fVar14;
            local_128 = fVar14 * local_128;
            fVar14 = auVar55._8_4_;
            local_110 = local_110 * fVar14;
            local_114 = local_114 * fVar14;
            local_118 = fVar14 * local_118;
            FUN_14066c2ac(&local_218,&local_138);
            fVar14 = local_218 * local_218 + fStack_214 * fStack_214;
            fVar22 = fStack_210 * fStack_210 + fStack_20c * fStack_20c;
            auVar32._0_4_ = fVar22 + fVar14;
            auVar32._4_4_ = fVar22 + fVar14;
            auVar32._8_4_ = fVar14 + fVar22;
            auVar32._12_4_ = fVar14 + fVar22;
            auVar20._4_4_ = -(uint)(1e-08 <= auVar32._4_4_);
            auVar20._0_4_ = -(uint)(1e-08 <= auVar32._0_4_);
            auVar20._8_4_ = -(uint)(1e-08 <= auVar32._8_4_);
            auVar20._12_4_ = -(uint)(1e-08 <= auVar32._12_4_);
            auVar55 = sqrtps(auVar32,auVar32);
            auVar55 = divps(_DAT_1499314a0,auVar55);
            auVar36._0_4_ = auVar55._0_4_ * local_218;
            auVar36._4_4_ = auVar55._4_4_ * fStack_214;
            auVar36._8_4_ = auVar55._8_4_ * fStack_210;
            auVar36._12_4_ = auVar55._12_4_ * fStack_20c;
            auVar55 = blendvps(_DAT_149932320,auVar36,auVar20);
            auVar48 = blendps(local_108,ZEXT816(0),8);
            auVar58._4_4_ = fVar24 * fVar43;
            auVar58._0_4_ = fVar23 * fVar37;
            auVar58._8_4_ = fVar53 * fVar46;
            auVar58._12_4_ = fVar34 * fVar51;
          }
        }
        auVar18 = auVar48;
        if (param_5 != 0) {
          lVar3 = *(longlong *)(param_5 + 0x10);
          lVar13 = lVar11 * 0x60;
          pdVar2 = (double *)(lVar3 + 0x50 + lVar13);
          fVar25 = (float)*pdVar2;
          fVar33 = (float)pdVar2[1];
          auVar26._12_4_ = fVar33;
          auVar26._8_4_ = fVar25;
          pdVar2 = (double *)(lVar3 + 0x40 + lVar13);
          fVar43 = (float)*pdVar2;
          fVar46 = (float)pdVar2[1];
          auVar26._4_4_ = fVar46;
          auVar26._0_4_ = fVar43;
          pdVar2 = (double *)(lVar3 + 0x30 + lVar13);
          fVar34 = (float)*pdVar2;
          fVar37 = (float)pdVar2[1];
          auVar63._12_4_ = fVar37;
          auVar63._8_4_ = fVar34;
          pdVar2 = (double *)(lVar3 + 0x20 + lVar13);
          auVar63._0_4_ = (float)*pdVar2;
          auVar63._4_4_ = (float)pdVar2[1];
          pdVar2 = (double *)(lVar3 + 0x10 + lVar13);
          fVar51 = (float)*pdVar2;
          fVar53 = (float)pdVar2[1];
          fVar60 = (float)*(double *)(lVar3 + lVar13);
          fVar61 = (float)((double *)(lVar3 + lVar13))[1];
          auVar27 = minps(auVar26,auVar58);
          auVar28._4_4_ = -(uint)(auVar27._4_4_ < 0.0);
          auVar28._0_4_ = -(uint)(auVar27._0_4_ < 0.0);
          auVar28._8_4_ = -(uint)(auVar27._8_4_ < 0.0);
          auVar28._12_4_ = -(uint)(auVar27._12_4_ < 0.0);
          iVar9 = movmskps((int)lVar3,auVar28);
          fVar39 = auVar55._0_4_;
          fVar41 = auVar55._4_4_;
          fVar44 = auVar55._8_4_;
          fVar50 = auVar55._12_4_;
          fVar23 = auVar58._4_4_;
          fVar22 = auVar58._8_4_;
          fVar24 = auVar58._12_4_;
          fVar14 = auVar58._0_4_;
          if (iVar9 == 0) {
            fVar62 = auVar63._0_4_ * fVar14;
            fVar64 = auVar63._4_4_ * fVar23;
            fVar34 = fVar34 * fVar22;
            fVar37 = fVar37 * fVar24;
            fVar21 = fVar64 * fVar39 - fVar41 * fVar62;
            fVar38 = fVar34 * fVar41 - fVar44 * fVar64;
            fVar40 = fVar62 * fVar44 - fVar39 * fVar34;
            fVar42 = fVar37 * fVar50 - fVar50 * fVar37;
            fVar21 = fVar21 + fVar21;
            fVar38 = fVar38 + fVar38;
            fVar40 = fVar40 + fVar40;
            fVar42 = fVar42 + fVar42;
            auVar55._4_4_ =
                 fVar44 * fVar60 * 1.0 +
                 fVar41 * fVar53 * 1.0 + fVar39 * fVar51 * -1.0 + fVar50 * fVar61;
            auVar55._0_4_ =
                 fVar44 * fVar61 * -1.0 +
                 fVar41 * fVar51 * 1.0 + fVar39 * fVar53 * 1.0 + fVar50 * fVar60;
            auVar18._0_4_ =
                 auVar48._0_4_ + (fVar21 * fVar41 - fVar40 * fVar44) + fVar50 * fVar38 + fVar62;
            auVar18._4_4_ =
                 auVar48._4_4_ + (fVar38 * fVar44 - fVar21 * fVar39) + fVar50 * fVar40 + fVar64;
            auVar18._8_4_ =
                 auVar48._8_4_ + (fVar40 * fVar39 - fVar38 * fVar41) + fVar50 * fVar21 + fVar34;
            auVar18._12_4_ =
                 auVar48._12_4_ + (fVar42 * fVar50 - fVar42 * fVar50) + fVar50 * fVar42 + fVar37;
            auVar58._0_4_ = fVar14 * fVar43;
            auVar58._4_4_ = fVar23 * fVar46;
            auVar58._8_4_ = fVar22 * fVar25;
            auVar58._12_4_ = fVar24 * fVar33;
            auVar55._8_4_ =
                 fVar44 * fVar53 * 1.0 +
                 fVar41 * fVar60 * -1.0 + fVar39 * fVar61 * 1.0 + fVar50 * fVar51;
            auVar55._12_4_ =
                 fVar44 * fVar51 * -1.0 +
                 fVar41 * fVar61 * -1.0 + fVar39 * fVar60 * -1.0 + fVar50 * fVar53;
          }
          else {
            fVar34 = fVar39 + fVar39;
            fVar38 = fVar41 + fVar41;
            fVar40 = fVar44 + fVar44;
            fVar37 = fVar50 * (fVar50 + fVar50);
            auVar57._0_4_ = (fVar4 - (fVar44 * fVar40 + fVar41 * fVar38)) * fVar14;
            auVar57._4_4_ = (fVar5 - (fVar44 * fVar40 + fVar39 * fVar34)) * fVar23;
            auVar57._8_4_ = (fVar21 - (fVar41 * fVar38 + fVar39 * fVar34)) * fVar22;
            auVar57._12_4_ = (fVar6 - (fVar37 + fVar37)) * fVar24;
            fVar37 = (fVar38 * fVar39 + fVar50 * fVar40) * fVar14;
            auVar54._4_4_ = (fVar40 * fVar41 + fVar50 * fVar34) * fVar23;
            auVar54._0_4_ = fVar37;
            local_158 = (fVar40 * fVar39 + fVar50 * fVar38) * fVar22;
            local_168 = (fVar38 * fVar39 - fVar50 * fVar40) * fVar23;
            fStack_154 = (fVar40 * fVar41 - fVar50 * fVar34) * fVar22;
            auVar58 = blendps(auVar57,ZEXT816(0),8);
            auVar54._8_4_ = local_158;
            auVar54._12_4_ = (fVar34 * fVar39 + fVar50 * fVar34) * fVar24;
            local_178._4_4_ = fVar37;
            local_178._0_4_ = auVar57._0_4_;
            local_178._8_4_ = (fVar40 * fVar39 - fVar50 * fVar38) * fVar14;
            local_178._12_4_ = 0;
            auVar55 = insertps(auVar54,auVar54,0x4c);
            uStack_160 = auVar55._0_4_;
            uStack_15c = auVar55._8_4_;
            uStack_150 = auVar58._8_4_;
            uStack_14c = auVar58._12_4_;
            local_148 = insertps(auVar48,ZEXT816(0x3f800000),0x30);
            fVar37 = fVar60 + fVar60;
            fVar39 = fVar61 + fVar61;
            fVar41 = fVar51 + fVar51;
            fVar34 = fVar53 * (fVar53 + fVar53);
            auVar29._0_4_ = (fVar4 - (fVar51 * fVar41 + fVar61 * fVar39)) * fVar43;
            auVar29._4_4_ = (fVar5 - (fVar51 * fVar41 + fVar60 * fVar37)) * fVar46;
            auVar29._8_4_ = (fVar21 - (fVar61 * fVar39 + fVar60 * fVar37)) * fVar25;
            auVar29._12_4_ = (fVar6 - (fVar34 + fVar34)) * fVar33;
            fVar34 = (fVar39 * fVar60 + fVar41 * fVar53) * fVar43;
            auVar47._4_4_ = (fVar41 * fVar61 + fVar37 * fVar53) * fVar46;
            auVar47._0_4_ = fVar34;
            local_198 = (fVar41 * fVar60 + fVar39 * fVar53) * fVar25;
            auVar15._0_4_ = (fVar39 * fVar60 - fVar41 * fVar53) * fVar46;
            auVar15._4_4_ = (fVar41 * fVar61 - fVar37 * fVar53) * fVar25;
            auVar15._8_4_ = (fVar41 * fVar60 - fVar39 * fVar53) * fVar43;
            auVar15._12_4_ = (fVar37 * fVar60 - fVar37 * fVar53) * fVar33;
            auVar55 = blendps(auVar29,ZEXT816(0),8);
            auVar47._8_4_ = local_198;
            auVar47._12_4_ = (fVar37 * fVar60 + fVar37 * fVar53) * fVar33;
            local_1b8._4_4_ = fVar34;
            local_1b8._0_4_ = auVar29._0_4_;
            local_1b8._8_4_ = auVar15._8_4_;
            local_1b8._12_4_ = 0;
            auVar48 = insertps(auVar47,auVar47,0x4c);
            uStack_190 = auVar55._8_4_;
            uStack_18c = auVar55._12_4_;
            local_1a8._4_4_ = auVar29._4_4_;
            local_1a8._0_4_ = auVar15._0_4_;
            uStack_1a0 = auVar48._0_4_;
            uStack_19c = auVar48._8_4_;
            local_188 = insertps(auVar63,ZEXT816(0x3f800000),0x30);
            fStack_194 = auVar15._4_4_;
            fStack_164 = auVar57._4_4_;
            FUN_144afeb32(auVar15._8_8_,local_1b8,auVar55._0_8_);
            FUN_144afd82e(&local_138);
            auVar16._4_4_ = -(uint)(0.0 <= fVar23 * fVar46);
            auVar16._0_4_ = -(uint)(0.0 <= fVar14 * fVar43);
            auVar16._8_4_ = -(uint)(0.0 <= fVar22 * fVar25);
            auVar16._12_4_ = -(uint)(0.0 <= fVar24 * fVar33);
            auVar55 = blendvps(_DAT_149f63320,auVar7,auVar16);
            fVar34 = auVar55._0_4_;
            local_130 = local_130 * fVar34;
            local_134 = local_134 * fVar34;
            local_138 = local_138 * fVar34;
            fVar34 = auVar55._4_4_;
            local_120 = local_120 * fVar34;
            local_124 = local_124 * fVar34;
            local_128 = fVar34 * local_128;
            fVar34 = auVar55._8_4_;
            local_110 = local_110 * fVar34;
            local_114 = local_114 * fVar34;
            local_118 = fVar34 * local_118;
            FUN_14066c2ac(&local_218,&local_138);
            fVar34 = local_218 * local_218 + fStack_214 * fStack_214;
            fVar21 = fStack_210 * fStack_210 + fStack_20c * fStack_20c;
            auVar30._0_4_ = fVar21 + fVar34;
            auVar30._4_4_ = fVar21 + fVar34;
            auVar30._8_4_ = fVar34 + fVar21;
            auVar30._12_4_ = fVar34 + fVar21;
            auVar17._4_4_ = -(uint)(1e-08 <= auVar30._4_4_);
            auVar17._0_4_ = -(uint)(1e-08 <= auVar30._0_4_);
            auVar17._8_4_ = -(uint)(1e-08 <= auVar30._8_4_);
            auVar17._12_4_ = -(uint)(1e-08 <= auVar30._12_4_);
            auVar55 = sqrtps(auVar30,auVar30);
            auVar55 = divps(_DAT_1499314a0,auVar55);
            auVar35._0_4_ = auVar55._0_4_ * local_218;
            auVar35._4_4_ = auVar55._4_4_ * fStack_214;
            auVar35._8_4_ = auVar55._8_4_ * fStack_210;
            auVar35._12_4_ = auVar55._12_4_ * fStack_20c;
            auVar55 = blendvps(_DAT_149932320,auVar35,auVar17);
            auVar18 = blendps(local_108,ZEXT816(0),8);
            auVar58._4_4_ = fVar23 * fVar46;
            auVar58._0_4_ = fVar14 * fVar43;
            auVar58._8_4_ = fVar22 * fVar25;
            auVar58._12_4_ = fVar24 * fVar33;
          }
        }
        lVar3 = *param_6;
        *(undefined1 (*) [16])(lVar3 + lVar12) = auVar55;
        *(undefined1 (*) [16])(lVar3 + 0x10 + lVar12) = auVar18;
        *(undefined1 (*) [16])(lVar3 + 0x20 + lVar12) = auVar58;
        *(undefined1 *)(*param_4 + lVar11) = 1;
      } while ((int)local_1c0 != 0);
    }
    if (local_1c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb9339 FUN_146eb9339 body=201 status=ok
// SIG undefined FUN_146eb9339(void)

void FUN_146eb9339(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    FUN_1401c3474(&local_48);
  }
  uVar2 = 0;
  memset(local_48,0,(longlong)(int)uVar1);
  FUN_1406ccac6(param_3,uVar1,0);
  if (0 < (int)uVar1) {
    do {
      local_58 = param_3;
      FUN_146eb9403(uVar2,param_2,param_1,&local_48);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb9403 FUN_146eb9403 body=1566 status=ok
// SIG undefined FUN_146eb9403(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146eb9403(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  undefined1 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar24;
  float fVar25;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_238 [32];
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [64];
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(char *)(*param_4 + (longlong)(int)param_1) == '\0') {
    local_1c8 = (undefined1 *)0x0;
    local_1c0 = 0x1000000000;
    cVar11 = FUN_1405180eb(param_1,param_2,param_4,local_208);
    auVar10 = _DAT_149e1ef10;
    auVar9 = _DAT_149932320;
    if ((cVar11 != '\0') && ((int)local_1c0 != 0)) {
      fVar4 = DAT_149e1ef10._4_4_;
      fVar7 = DAT_149e1ef10._12_4_;
      do {
        puVar12 = local_1c8;
        if (local_1c8 == (undefined1 *)0x0) {
          puVar12 = local_208;
        }
        lVar16 = (longlong)*(int *)(puVar12 + (longlong)(int)local_1c0 * 4 + -4);
        local_1c0 = CONCAT44(local_1c0._4_4_,(int)local_1c0 + -1);
        lVar13 = *(longlong *)(param_3 + 0x10);
        lVar15 = lVar16 * 0x60;
        pdVar2 = (double *)(lVar13 + 0x50 + lVar15);
        fVar17 = (float)*pdVar2;
        fVar24 = (float)pdVar2[1];
        pdVar2 = (double *)(lVar13 + 0x40 + lVar15);
        fVar28 = (float)*pdVar2;
        fVar29 = (float)pdVar2[1];
        auVar19._0_8_ = CONCAT44(fVar29,fVar28);
        iVar14 = *(int *)(*(longlong *)(param_2 + 0x10) + lVar16 * 4);
        pdVar2 = (double *)(lVar13 + 0x30 + lVar15);
        fVar30 = (float)*pdVar2;
        fVar32 = (float)pdVar2[1];
        auVar43._12_4_ = fVar32;
        auVar43._8_4_ = fVar30;
        auVar19._8_8_ = CONCAT44(fVar24,fVar17);
        pdVar2 = (double *)(lVar13 + 0x20 + lVar15);
        auVar43._0_4_ = (float)*pdVar2;
        auVar43._4_4_ = (float)pdVar2[1];
        pdVar2 = (double *)(lVar13 + 0x10 + lVar15);
        fVar35 = (float)*pdVar2;
        fVar36 = (float)pdVar2[1];
        fVar37 = (float)*(double *)(lVar13 + lVar15);
        fVar39 = (float)((double *)(lVar13 + lVar15))[1];
        auVar50._4_4_ = fVar39;
        auVar50._0_4_ = fVar37;
        auVar50._12_4_ = fVar36;
        auVar50._8_4_ = fVar35;
        lVar13 = *param_5;
        if (iVar14 != DAT_14c75f3b2) {
          lVar15 = (longlong)iVar14 * 0x30;
          pauVar1 = (undefined1 (*) [16])(lVar13 + lVar15);
          auVar50 = *(undefined1 (*) [16])(lVar13 + 0x20 + lVar15);
          fVar3 = auVar50._0_4_;
          fVar5 = auVar50._4_4_;
          fVar6 = auVar50._8_4_;
          fVar8 = auVar50._12_4_;
          auVar18._8_8_ = CONCAT44(fVar24,fVar17);
          auVar18._0_8_ = auVar19._0_8_;
          auVar19 = minps(auVar18,auVar50);
          auVar20._4_4_ = -(uint)(auVar19._4_4_ < 0.0);
          auVar20._0_4_ = -(uint)(auVar19._0_4_ < 0.0);
          auVar20._8_4_ = -(uint)(auVar19._8_4_ < 0.0);
          auVar20._12_4_ = -(uint)(auVar19._12_4_ < 0.0);
          iVar14 = movmskps((int)lVar15,auVar20);
          if (iVar14 == 0) {
            auVar19 = *pauVar1;
            fVar40 = auVar19._0_4_;
            fVar41 = auVar19._4_4_;
            fVar26 = auVar19._8_4_;
            fVar46 = auVar19._12_4_;
            fVar42 = auVar43._0_4_ * fVar3;
            fVar44 = auVar43._4_4_ * fVar5;
            fVar30 = fVar30 * fVar6;
            fVar32 = fVar32 * fVar8;
            fVar47 = fVar44 * fVar40 - fVar42 * fVar41;
            fVar48 = fVar30 * fVar41 - fVar44 * fVar26;
            fVar25 = fVar42 * fVar26 - fVar30 * fVar40;
            fVar27 = fVar32 * fVar46 - fVar32 * fVar46;
            fVar47 = fVar47 + fVar47;
            fVar48 = fVar48 + fVar48;
            fVar25 = fVar25 + fVar25;
            fVar27 = fVar27 + fVar27;
            auVar43._4_4_ =
                 (fVar48 * fVar26 - fVar47 * fVar40) + fVar46 * fVar25 + fVar44 +
                 *(float *)(pauVar1[1] + 4);
            auVar43._0_4_ =
                 (fVar47 * fVar41 - fVar25 * fVar26) + fVar46 * fVar48 + fVar42 +
                 *(float *)pauVar1[1];
            auVar50._4_4_ =
                 fVar26 * fVar37 * 1.0 +
                 fVar41 * fVar36 * 1.0 + fVar40 * fVar35 * -1.0 + fVar39 * fVar46;
            auVar50._0_4_ =
                 fVar26 * fVar39 * -1.0 +
                 fVar41 * fVar35 * 1.0 + fVar40 * fVar36 * 1.0 + fVar37 * fVar46;
            auVar19._0_4_ = fVar28 * fVar3;
            auVar19._4_4_ = fVar29 * fVar5;
            auVar19._8_4_ = fVar17 * fVar6;
            auVar19._12_4_ = fVar24 * fVar8;
            auVar50._8_4_ =
                 fVar26 * fVar36 * 1.0 +
                 fVar41 * fVar37 * -1.0 + fVar40 * fVar39 * 1.0 + fVar35 * fVar46;
            auVar50._12_4_ =
                 fVar26 * fVar35 * -1.0 +
                 fVar41 * fVar39 * -1.0 + fVar40 * fVar37 * -1.0 + fVar36 * fVar46;
            auVar43._8_4_ =
                 (fVar25 * fVar40 - fVar48 * fVar41) + fVar46 * fVar47 + fVar30 +
                 *(float *)(pauVar1[1] + 8);
            auVar43._12_4_ =
                 (fVar27 * fVar46 - fVar27 * fVar46) + fVar46 * fVar27 + fVar32 +
                 *(float *)(pauVar1[1] + 0xc);
          }
          else {
            fVar30 = *(float *)*pauVar1;
            fVar32 = *(float *)(*pauVar1 + 4);
            fVar40 = *(float *)(*pauVar1 + 8);
            fVar41 = *(float *)(*pauVar1 + 0xc);
            fVar46 = fVar30 + fVar30;
            fVar47 = fVar32 + fVar32;
            fVar48 = fVar40 + fVar40;
            fVar26 = fVar41 * (fVar41 + fVar41);
            auVar45._0_4_ = (auVar10._0_4_ - (fVar40 * fVar48 + fVar32 * fVar47)) * fVar3;
            auVar45._4_4_ = (fVar4 - (fVar40 * fVar48 + fVar30 * fVar46)) * fVar5;
            auVar45._8_4_ = (auVar10._8_4_ - (fVar32 * fVar47 + fVar30 * fVar46)) * fVar6;
            auVar45._12_4_ = (fVar7 - (fVar26 + fVar26)) * fVar8;
            fVar40 = (fVar47 * fVar30 + fVar48 * fVar41) * fVar3;
            local_158 = (fVar48 * fVar30 + fVar47 * fVar41) * fVar6;
            local_168 = (fVar47 * fVar30 - fVar48 * fVar41) * fVar5;
            fStack_154 = (fVar48 * fVar32 - fVar46 * fVar41) * fVar6;
            auVar19 = blendps(auVar45,ZEXT816(0),8);
            auVar49._4_4_ = (fVar48 * fVar32 + fVar46 * fVar41) * fVar5;
            auVar49._0_4_ = fVar40;
            auVar49._8_4_ = local_158;
            auVar49._12_4_ = (fVar46 * fVar30 + fVar46 * fVar41) * fVar8;
            local_178._4_4_ = fVar40;
            local_178._0_4_ = auVar45._0_4_;
            local_178._8_4_ = (fVar48 * fVar30 - fVar47 * fVar41) * fVar3;
            local_178._12_4_ = 0;
            auVar50 = insertps(auVar49,auVar49,0x4c);
            uStack_160 = auVar50._0_4_;
            uStack_15c = auVar50._8_4_;
            uStack_150 = auVar19._8_4_;
            uStack_14c = auVar19._12_4_;
            local_148 = insertps(pauVar1[1],ZEXT816(0x3f800000),0x30);
            fVar32 = fVar37 + fVar37;
            fVar40 = fVar39 + fVar39;
            fVar41 = fVar35 + fVar35;
            fVar30 = fVar36 * (fVar36 + fVar36);
            auVar33._0_4_ = (auVar10._0_4_ - (fVar35 * fVar41 + fVar39 * fVar40)) * fVar28;
            auVar33._4_4_ = (fVar4 - (fVar35 * fVar41 + fVar37 * fVar32)) * fVar29;
            auVar33._8_4_ = (auVar10._8_4_ - (fVar39 * fVar40 + fVar37 * fVar32)) * fVar17;
            auVar33._12_4_ = (fVar7 - (fVar30 + fVar30)) * fVar24;
            fVar30 = (fVar40 * fVar37 + fVar41 * fVar36) * fVar28;
            auVar38._4_4_ = (fVar41 * fVar39 + fVar32 * fVar36) * fVar29;
            auVar38._0_4_ = fVar30;
            local_198 = (fVar41 * fVar37 + fVar40 * fVar36) * fVar17;
            auVar21._0_4_ = (fVar40 * fVar37 - fVar41 * fVar36) * fVar29;
            auVar21._4_4_ = (fVar41 * fVar39 - fVar32 * fVar36) * fVar17;
            auVar21._8_4_ = (fVar41 * fVar37 - fVar40 * fVar36) * fVar28;
            auVar21._12_4_ = (fVar32 * fVar37 - fVar32 * fVar36) * fVar24;
            auVar19 = blendps(auVar33,ZEXT816(0),8);
            auVar38._8_4_ = local_198;
            auVar38._12_4_ = (fVar32 * fVar37 + fVar32 * fVar36) * fVar24;
            local_1b8._4_4_ = fVar30;
            local_1b8._0_4_ = auVar33._0_4_;
            local_1b8._8_4_ = auVar21._8_4_;
            local_1b8._12_4_ = 0;
            auVar50 = insertps(auVar38,auVar38,0x4c);
            uStack_1a0 = auVar50._0_4_;
            uStack_19c = auVar50._8_4_;
            uStack_190 = auVar19._8_4_;
            uStack_18c = auVar19._12_4_;
            local_188 = insertps(auVar43,ZEXT816(0x3f800000),0x30);
            local_1a8 = auVar21._0_4_;
            fStack_1a4 = auVar33._4_4_;
            fStack_194 = auVar21._4_4_;
            fStack_164 = auVar45._4_4_;
            FUN_144afeb32(auVar21._8_8_,local_1b8,local_178,auVar19._0_8_);
            FUN_144afd82e(&local_138);
            auVar22._4_4_ = -(uint)(0.0 <= fVar29 * fVar5);
            auVar22._0_4_ = -(uint)(0.0 <= fVar28 * fVar3);
            auVar22._8_4_ = -(uint)(0.0 <= fVar17 * fVar6);
            auVar22._12_4_ = -(uint)(0.0 <= fVar24 * fVar8);
            auVar19 = blendvps(_DAT_149f63320,auVar10,auVar22);
            fVar30 = auVar19._0_4_;
            local_130 = local_130 * fVar30;
            local_134 = local_134 * fVar30;
            local_138 = local_138 * fVar30;
            fVar30 = auVar19._4_4_;
            local_120 = local_120 * fVar30;
            local_124 = local_124 * fVar30;
            local_128 = fVar30 * local_128;
            fVar30 = auVar19._8_4_;
            local_110 = local_110 * fVar30;
            local_114 = local_114 * fVar30;
            local_118 = fVar30 * local_118;
            FUN_14066c2ac(&local_218,&local_138);
            fVar30 = local_218 * local_218 + fStack_214 * fStack_214;
            fVar32 = fStack_210 * fStack_210 + fStack_20c * fStack_20c;
            auVar31._0_4_ = fVar32 + fVar30;
            auVar31._4_4_ = fVar32 + fVar30;
            auVar31._8_4_ = fVar30 + fVar32;
            auVar31._12_4_ = fVar30 + fVar32;
            auVar23._4_4_ = -(uint)(1e-08 <= auVar31._4_4_);
            auVar23._0_4_ = -(uint)(1e-08 <= auVar31._0_4_);
            auVar23._8_4_ = -(uint)(1e-08 <= auVar31._8_4_);
            auVar23._12_4_ = -(uint)(1e-08 <= auVar31._12_4_);
            auVar19 = sqrtps(auVar31,auVar31);
            auVar19 = divps(_DAT_1499314a0,auVar19);
            auVar34._0_4_ = auVar19._0_4_ * local_218;
            auVar34._4_4_ = auVar19._4_4_ * fStack_214;
            auVar34._8_4_ = auVar19._8_4_ * fStack_210;
            auVar34._12_4_ = auVar19._12_4_ * fStack_20c;
            auVar50 = blendvps(auVar9,auVar34,auVar23);
            auVar43 = blendps(local_108,ZEXT816(0),8);
            lVar13 = *param_5;
            auVar19._4_4_ = fVar29 * fVar5;
            auVar19._0_4_ = fVar28 * fVar3;
            auVar19._8_4_ = fVar17 * fVar6;
            auVar19._12_4_ = fVar24 * fVar8;
          }
        }
        lVar15 = lVar16 * 0x30;
        *(undefined1 (*) [16])(lVar13 + lVar15) = auVar50;
        *(undefined1 (*) [16])(lVar13 + 0x10 + lVar15) = auVar43;
        *(undefined1 (*) [16])(lVar13 + 0x20 + lVar15) = auVar19;
        *(undefined1 *)(*param_4 + lVar16) = 1;
      } while ((int)local_1c0 != 0);
    }
    if (local_1c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eb9a22 FUN_146eb9a22 body=48 status=ok
// SIG undefined FUN_146eb9a22(void)

void FUN_146eb9a22(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  FUN_144a127d2(param_1,param_2,1);
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      *(int *)(*param_1 + uVar1 * 4) = (int)uVar1;
      uVar1 = uVar1 + 1;
    } while ((param_2 & 0xffffffff) != uVar1);
  }
  return;
}



// FUNCTION 146eb9a52 FUN_146eb9a52 body=91 status=ok
// SIG undefined FUN_146eb9a52(void)

void FUN_146eb9a52(longlong *param_1,int *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  FUN_144a127d2(param_3,*param_2,1);
  if (0 < *param_2) {
    uVar1 = 0;
    iVar2 = 0;
    do {
      *(int *)(*param_3 + uVar1 * 4) = iVar2;
      if (iVar2 < (int)param_1[1]) {
        iVar2 = iVar2 + (uint)(uVar1 == *(uint *)(*param_1 + (longlong)iVar2 * 4));
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)*param_2);
  }
  return;
}



// FUNCTION 146eb9aad FUN_146eb9aad body=118 status=ok
// SIG undefined FUN_146eb9aad(void)

void FUN_146eb9aad(longlong *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_14475e60e(param_3,&local_21,*param_2);
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    do {
      iVar1 = *(int *)(*param_1 + lVar2 * 4);
      if (*param_2 <= iVar1) break;
      *(undefined1 *)(*param_3 + (longlong)iVar1) = 1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[1]);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb9b24 FUN_146eb9b24 body=1 status=ok
// SIG undefined FUN_146eb9b24(void)

void FUN_146eb9b24(void)

{
  return;
}



// FUNCTION 146eb9b25 FUN_146eb9b25 body=105 status=ok
// SIG undefined FUN_146eb9b25(void)

void FUN_146eb9b25(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_138 [40];
  undefined1 local_110 [240];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 != 0) {
    FUN_146ea7fa0(local_110,param_1);
    FUN_146ea9378(local_110,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eb9b8f FUN_146eb9b8f body=22 status=ok
// SIG undefined FUN_146eb9b8f(void)

undefined8 FUN_146eb9b8f(undefined8 param_1)

{
  FUN_146eb9ba5();
  return param_1;
}



// FUNCTION 146eb9ba5 FUN_146eb9ba5 body=1391 status=ok
// SIG undefined FUN_146eb9ba5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_146eb9ba5(undefined1 (*param_1) [16],longlong param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  uVar11 = uRam000000014c846088;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *(undefined8 *)param_1[2] = _DAT_14c846080;
  *(undefined8 *)(param_1[2] + 8) = uVar11;
  uVar11 = uRam000000014c846078;
  *(undefined8 *)param_1[1] = _DAT_14c846070;
  *(undefined8 *)(param_1[1] + 8) = uVar11;
  uVar11 = uRam000000014c846068;
  *(undefined8 *)*param_1 = _DAT_14c846060;
  *(undefined8 *)(*param_1 + 8) = uVar11;
  auVar10 = _DAT_149e1ef10;
  auVar9 = _DAT_149932320;
  if ((-1 < param_4) && (param_4 < *(int *)(param_2 + 0x18))) {
    auVar35 = *param_1;
    auVar38 = param_1[1];
    auVar15 = param_1[2];
    fVar4 = DAT_149e1ef10._4_4_;
    fVar7 = DAT_149e1ef10._12_4_;
    do {
      lVar2 = *(longlong *)(param_2 + 0x10);
      lVar13 = (longlong)param_4 * 0x30;
      pfVar1 = (float *)(lVar2 + lVar13);
      auVar16 = *(undefined1 (*) [16])(lVar2 + 0x20 + lVar13);
      fVar3 = auVar16._0_4_;
      fVar5 = auVar16._4_4_;
      fVar6 = auVar16._8_4_;
      fVar8 = auVar16._12_4_;
      fVar23 = auVar15._0_4_;
      fVar24 = auVar15._4_4_;
      fVar25 = auVar15._8_4_;
      fVar26 = auVar15._12_4_;
      auVar15 = minps(auVar15,auVar16);
      auVar16._4_4_ = -(uint)(auVar15._4_4_ < 0.0);
      auVar16._0_4_ = -(uint)(auVar15._0_4_ < 0.0);
      auVar16._8_4_ = -(uint)(auVar15._8_4_ < 0.0);
      auVar16._12_4_ = -(uint)(auVar15._12_4_ < 0.0);
      iVar12 = movmskps((int)lVar2,auVar16);
      fVar14 = auVar35._0_4_;
      fVar20 = auVar35._4_4_;
      fVar27 = auVar35._8_4_;
      fVar42 = auVar35._12_4_;
      if (iVar12 == 0) {
        fVar22 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar33 = pfVar1[3];
        fVar37 = auVar38._0_4_ * fVar3;
        fVar39 = auVar38._4_4_ * fVar5;
        fVar40 = auVar38._8_4_ * fVar6;
        fVar41 = auVar38._12_4_ * fVar8;
        fVar21 = fVar39 * fVar22 - fVar37 * fVar32;
        fVar43 = fVar40 * fVar32 - fVar39 * fVar31;
        fVar44 = fVar37 * fVar31 - fVar40 * fVar22;
        fVar45 = fVar41 * fVar33 - fVar41 * fVar33;
        fVar21 = fVar21 + fVar21;
        fVar43 = fVar43 + fVar43;
        fVar44 = fVar44 + fVar44;
        fVar45 = fVar45 + fVar45;
        auVar38._4_4_ = (fVar43 * fVar31 - fVar21 * fVar22) + fVar33 * fVar44 + fVar39 + pfVar1[5];
        auVar38._0_4_ = (fVar21 * fVar32 - fVar44 * fVar31) + fVar33 * fVar43 + fVar37 + pfVar1[4];
        auVar35._4_4_ =
             fVar31 * fVar14 * 1.0 +
             fVar32 * fVar42 * 1.0 + fVar22 * fVar27 * -1.0 + fVar20 * fVar33;
        auVar35._0_4_ =
             fVar31 * fVar20 * -1.0 +
             fVar32 * fVar27 * 1.0 + fVar22 * fVar42 * 1.0 + fVar14 * fVar33;
        auVar15._0_4_ = fVar23 * fVar3;
        auVar15._4_4_ = fVar24 * fVar5;
        auVar15._8_4_ = fVar25 * fVar6;
        auVar15._12_4_ = fVar26 * fVar8;
        auVar38._8_4_ = (fVar44 * fVar22 - fVar43 * fVar32) + fVar33 * fVar21 + fVar40 + pfVar1[6];
        auVar38._12_4_ = (fVar45 * fVar33 - fVar45 * fVar33) + fVar33 * fVar45 + fVar41 + pfVar1[7];
        auVar35._8_4_ =
             fVar31 * fVar42 * 1.0 +
             fVar32 * fVar14 * -1.0 + fVar22 * fVar20 * 1.0 + fVar27 * fVar33;
        auVar35._12_4_ =
             fVar31 * fVar27 * -1.0 +
             fVar32 * fVar20 * -1.0 + fVar22 * fVar14 * -1.0 + fVar42 * fVar33;
      }
      else {
        fVar22 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar33 = pfVar1[3];
        fVar43 = fVar22 + fVar22;
        fVar44 = fVar32 + fVar32;
        fVar45 = fVar31 + fVar31;
        fVar21 = fVar33 * (fVar33 + fVar33);
        auVar34._0_4_ = (auVar10._0_4_ - (fVar31 * fVar45 + fVar32 * fVar44)) * fVar3;
        auVar34._4_4_ = (fVar4 - (fVar31 * fVar45 + fVar22 * fVar43)) * fVar5;
        auVar34._8_4_ = (auVar10._8_4_ - (fVar32 * fVar44 + fVar22 * fVar43)) * fVar6;
        auVar34._12_4_ = (fVar7 - (fVar21 + fVar21)) * fVar8;
        fVar31 = (fVar44 * fVar22 + fVar45 * fVar33) * fVar3;
        local_158 = (fVar45 * fVar22 + fVar44 * fVar33) * fVar6;
        local_168 = (fVar44 * fVar22 - fVar45 * fVar33) * fVar5;
        fStack_154 = (fVar45 * fVar32 - fVar43 * fVar33) * fVar6;
        auVar35 = blendps(auVar34,ZEXT816(0),8);
        auVar46._4_4_ = (fVar45 * fVar32 + fVar43 * fVar33) * fVar5;
        auVar46._0_4_ = fVar31;
        auVar46._8_4_ = local_158;
        auVar46._12_4_ = (fVar43 * fVar22 + fVar43 * fVar33) * fVar8;
        local_178._4_4_ = fVar31;
        local_178._0_4_ = auVar34._0_4_;
        local_178._8_4_ = (fVar45 * fVar22 - fVar44 * fVar33) * fVar3;
        local_178._12_4_ = 0;
        auVar15 = insertps(auVar46,auVar46,0x4c);
        uStack_160 = auVar15._0_4_;
        uStack_15c = auVar15._8_4_;
        uStack_150 = auVar35._8_4_;
        uStack_14c = auVar35._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(pfVar1 + 4),ZEXT816(0x3f800000),0x30);
        fVar32 = fVar14 + fVar14;
        fVar31 = fVar20 + fVar20;
        fVar33 = fVar27 + fVar27;
        fVar22 = fVar42 * (fVar42 + fVar42);
        auVar29._0_4_ = (auVar10._0_4_ - (fVar27 * fVar33 + fVar20 * fVar31)) * fVar23;
        auVar29._4_4_ = (fVar4 - (fVar27 * fVar33 + fVar14 * fVar32)) * fVar24;
        auVar29._8_4_ = (auVar10._8_4_ - (fVar20 * fVar31 + fVar14 * fVar32)) * fVar25;
        auVar29._12_4_ = (fVar7 - (fVar22 + fVar22)) * fVar26;
        fVar27 = (fVar31 * fVar14 + fVar33 * fVar42) * fVar23;
        auVar36._4_4_ = (fVar33 * fVar20 + fVar32 * fVar42) * fVar24;
        auVar36._0_4_ = fVar27;
        local_198 = (fVar33 * fVar14 + fVar31 * fVar42) * fVar25;
        auVar17._0_4_ = (fVar31 * fVar14 - fVar33 * fVar42) * fVar24;
        auVar17._4_4_ = (fVar33 * fVar20 - fVar32 * fVar42) * fVar25;
        auVar17._8_4_ = (fVar33 * fVar14 - fVar31 * fVar42) * fVar23;
        auVar17._12_4_ = (fVar32 * fVar14 - fVar32 * fVar42) * fVar26;
        auVar35 = blendps(auVar29,ZEXT816(0),8);
        auVar36._8_4_ = local_198;
        auVar36._12_4_ = (fVar32 * fVar14 + fVar32 * fVar42) * fVar26;
        local_1b8._4_4_ = fVar27;
        local_1b8._0_4_ = auVar29._0_4_;
        local_1b8._8_4_ = auVar17._8_4_;
        local_1b8._12_4_ = 0;
        auVar15 = insertps(auVar36,auVar36,0x4c);
        uStack_1a0 = auVar15._0_4_;
        uStack_19c = auVar15._8_4_;
        uStack_190 = auVar35._8_4_;
        uStack_18c = auVar35._12_4_;
        local_188 = insertps(auVar38,ZEXT816(0x3f800000),0x30);
        local_1a8 = auVar17._0_4_;
        fStack_1a4 = auVar29._4_4_;
        fStack_194 = auVar17._4_4_;
        fStack_164 = auVar34._4_4_;
        FUN_144afeb32(auVar17._8_8_,local_1b8,local_178,auVar35._0_8_);
        FUN_144afd82e(&local_138);
        auVar18._4_4_ = -(uint)(0.0 <= fVar24 * fVar5);
        auVar18._0_4_ = -(uint)(0.0 <= fVar23 * fVar3);
        auVar18._8_4_ = -(uint)(0.0 <= fVar25 * fVar6);
        auVar18._12_4_ = -(uint)(0.0 <= fVar26 * fVar8);
        auVar35 = blendvps(_DAT_149f63320,auVar10,auVar18);
        fVar14 = auVar35._0_4_;
        local_130 = local_130 * fVar14;
        local_134 = local_134 * fVar14;
        local_138 = local_138 * fVar14;
        fVar14 = auVar35._4_4_;
        local_120 = local_120 * fVar14;
        local_124 = local_124 * fVar14;
        local_128 = fVar14 * local_128;
        fVar14 = auVar35._8_4_;
        local_110 = local_110 * fVar14;
        local_114 = local_114 * fVar14;
        local_118 = fVar14 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar14 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar20 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar28._0_4_ = fVar20 + fVar14;
        auVar28._4_4_ = fVar20 + fVar14;
        auVar28._8_4_ = fVar14 + fVar20;
        auVar28._12_4_ = fVar14 + fVar20;
        auVar19._4_4_ = -(uint)(1e-08 <= auVar28._4_4_);
        auVar19._0_4_ = -(uint)(1e-08 <= auVar28._0_4_);
        auVar19._8_4_ = -(uint)(1e-08 <= auVar28._8_4_);
        auVar19._12_4_ = -(uint)(1e-08 <= auVar28._12_4_);
        auVar35 = sqrtps(auVar28,auVar28);
        auVar35 = divps(_DAT_1499314a0,auVar35);
        auVar30._0_4_ = auVar35._0_4_ * local_1c8;
        auVar30._4_4_ = auVar35._4_4_ * fStack_1c4;
        auVar30._8_4_ = auVar35._8_4_ * fStack_1c0;
        auVar30._12_4_ = auVar35._12_4_ * fStack_1bc;
        auVar35 = blendvps(auVar9,auVar30,auVar19);
        auVar38 = blendps(local_108,ZEXT816(0),8);
        auVar15._4_4_ = fVar24 * fVar5;
        auVar15._0_4_ = fVar23 * fVar3;
        auVar15._8_4_ = fVar25 * fVar6;
        auVar15._12_4_ = fVar26 * fVar8;
      }
      param_4 = *(int *)(*(longlong *)(param_3 + 0x10) + (longlong)param_4 * 4);
    } while (param_4 != DAT_14c75f3b2);
    param_1[1] = auVar38;
    param_1[2] = auVar15;
    *param_1 = auVar35;
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eba115 FUN_146eba115 body=127 status=ok
// SIG undefined FUN_146eba115(void)

double * FUN_146eba115(double *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146eb9ba5(local_48);
  *param_1 = (double)(float)local_48._0_8_;
  param_1[1] = (double)SUB84(local_48._0_8_,4);
  param_1[2] = (double)(float)local_48._8_8_;
  param_1[3] = (double)SUB84(local_48._8_8_,4);
  param_1[4] = (double)(float)local_48._16_8_;
  param_1[5] = (double)SUB84(local_48._16_8_,4);
  param_1[6] = (double)(float)local_48._24_8_;
  param_1[7] = (double)SUB84(local_48._24_8_,4);
  param_1[8] = (double)(float)local_48._32_8_;
  param_1[9] = (double)SUB84(local_48._32_8_,4);
  param_1[10] = (double)(float)local_48._40_8_;
  param_1[0xb] = (double)SUB84(local_48._40_8_,4);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eba195 FUN_146eba195 body=151 status=ok
// SIG undefined FUN_146eba195(void)

double * FUN_146eba195(double *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  FUN_146eba22d(local_48);
  *param_1 = (double)(float)local_48._0_8_;
  param_1[1] = (double)SUB84(local_48._0_8_,4);
  param_1[2] = (double)(float)local_48._8_8_;
  param_1[3] = (double)SUB84(local_48._8_8_,4);
  param_1[4] = (double)(float)local_48._16_8_;
  param_1[5] = (double)SUB84(local_48._16_8_,4);
  param_1[6] = (double)(float)local_48._24_8_;
  param_1[7] = (double)SUB84(local_48._24_8_,4);
  auVar1._8_4_ = SUB84((double)SUB84(local_48._32_8_,4),0);
  auVar1._0_8_ = (double)(float)local_48._32_8_;
  auVar1._12_4_ = (int)((ulonglong)(double)SUB84(local_48._32_8_,4) >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar1;
  param_1[10] = (double)(float)local_48._40_8_;
  param_1[0xb] = (double)SUB84(local_48._40_8_,4);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eba22d FUN_146eba22d body=1389 status=ok
// SIG undefined FUN_146eba22d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_146eba22d(undefined1 (*param_1) [16],longlong *param_2,longlong *param_3,int param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  uVar11 = uRam000000014c846088;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *(undefined8 *)param_1[2] = _DAT_14c846080;
  *(undefined8 *)(param_1[2] + 8) = uVar11;
  uVar11 = uRam000000014c846078;
  *(undefined8 *)param_1[1] = _DAT_14c846070;
  *(undefined8 *)(param_1[1] + 8) = uVar11;
  uVar11 = uRam000000014c846068;
  *(undefined8 *)*param_1 = _DAT_14c846060;
  *(undefined8 *)(*param_1 + 8) = uVar11;
  auVar10 = _DAT_149e1ef10;
  auVar9 = _DAT_149932320;
  if ((-1 < param_4) && (param_4 < (int)param_2[1])) {
    auVar35 = *param_1;
    auVar38 = param_1[1];
    auVar15 = param_1[2];
    fVar4 = DAT_149e1ef10._4_4_;
    fVar7 = DAT_149e1ef10._12_4_;
    do {
      lVar2 = *param_2;
      lVar13 = (longlong)param_4 * 0x30;
      pfVar1 = (float *)(lVar2 + lVar13);
      auVar16 = *(undefined1 (*) [16])(lVar2 + 0x20 + lVar13);
      fVar3 = auVar16._0_4_;
      fVar5 = auVar16._4_4_;
      fVar6 = auVar16._8_4_;
      fVar8 = auVar16._12_4_;
      fVar23 = auVar15._0_4_;
      fVar24 = auVar15._4_4_;
      fVar25 = auVar15._8_4_;
      fVar26 = auVar15._12_4_;
      auVar15 = minps(auVar15,auVar16);
      auVar16._4_4_ = -(uint)(auVar15._4_4_ < 0.0);
      auVar16._0_4_ = -(uint)(auVar15._0_4_ < 0.0);
      auVar16._8_4_ = -(uint)(auVar15._8_4_ < 0.0);
      auVar16._12_4_ = -(uint)(auVar15._12_4_ < 0.0);
      iVar12 = movmskps((int)lVar2,auVar16);
      fVar14 = auVar35._0_4_;
      fVar20 = auVar35._4_4_;
      fVar27 = auVar35._8_4_;
      fVar42 = auVar35._12_4_;
      if (iVar12 == 0) {
        fVar22 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar33 = pfVar1[3];
        fVar37 = auVar38._0_4_ * fVar3;
        fVar39 = auVar38._4_4_ * fVar5;
        fVar40 = auVar38._8_4_ * fVar6;
        fVar41 = auVar38._12_4_ * fVar8;
        fVar21 = fVar39 * fVar22 - fVar37 * fVar32;
        fVar43 = fVar40 * fVar32 - fVar39 * fVar31;
        fVar44 = fVar37 * fVar31 - fVar40 * fVar22;
        fVar45 = fVar41 * fVar33 - fVar41 * fVar33;
        fVar21 = fVar21 + fVar21;
        fVar43 = fVar43 + fVar43;
        fVar44 = fVar44 + fVar44;
        fVar45 = fVar45 + fVar45;
        auVar38._4_4_ = (fVar43 * fVar31 - fVar21 * fVar22) + fVar33 * fVar44 + fVar39 + pfVar1[5];
        auVar38._0_4_ = (fVar21 * fVar32 - fVar44 * fVar31) + fVar33 * fVar43 + fVar37 + pfVar1[4];
        auVar35._4_4_ =
             fVar31 * fVar14 * 1.0 +
             fVar32 * fVar42 * 1.0 + fVar22 * fVar27 * -1.0 + fVar20 * fVar33;
        auVar35._0_4_ =
             fVar31 * fVar20 * -1.0 +
             fVar32 * fVar27 * 1.0 + fVar22 * fVar42 * 1.0 + fVar14 * fVar33;
        auVar15._0_4_ = fVar23 * fVar3;
        auVar15._4_4_ = fVar24 * fVar5;
        auVar15._8_4_ = fVar25 * fVar6;
        auVar15._12_4_ = fVar26 * fVar8;
        auVar38._8_4_ = (fVar44 * fVar22 - fVar43 * fVar32) + fVar33 * fVar21 + fVar40 + pfVar1[6];
        auVar38._12_4_ = (fVar45 * fVar33 - fVar45 * fVar33) + fVar33 * fVar45 + fVar41 + pfVar1[7];
        auVar35._8_4_ =
             fVar31 * fVar42 * 1.0 +
             fVar32 * fVar14 * -1.0 + fVar22 * fVar20 * 1.0 + fVar27 * fVar33;
        auVar35._12_4_ =
             fVar31 * fVar27 * -1.0 +
             fVar32 * fVar20 * -1.0 + fVar22 * fVar14 * -1.0 + fVar42 * fVar33;
      }
      else {
        fVar22 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar33 = pfVar1[3];
        fVar43 = fVar22 + fVar22;
        fVar44 = fVar32 + fVar32;
        fVar45 = fVar31 + fVar31;
        fVar21 = fVar33 * (fVar33 + fVar33);
        auVar34._0_4_ = (auVar10._0_4_ - (fVar31 * fVar45 + fVar32 * fVar44)) * fVar3;
        auVar34._4_4_ = (fVar4 - (fVar31 * fVar45 + fVar22 * fVar43)) * fVar5;
        auVar34._8_4_ = (auVar10._8_4_ - (fVar32 * fVar44 + fVar22 * fVar43)) * fVar6;
        auVar34._12_4_ = (fVar7 - (fVar21 + fVar21)) * fVar8;
        fVar31 = (fVar44 * fVar22 + fVar45 * fVar33) * fVar3;
        local_158 = (fVar45 * fVar22 + fVar44 * fVar33) * fVar6;
        local_168 = (fVar44 * fVar22 - fVar45 * fVar33) * fVar5;
        fStack_154 = (fVar45 * fVar32 - fVar43 * fVar33) * fVar6;
        auVar35 = blendps(auVar34,ZEXT816(0),8);
        auVar46._4_4_ = (fVar45 * fVar32 + fVar43 * fVar33) * fVar5;
        auVar46._0_4_ = fVar31;
        auVar46._8_4_ = local_158;
        auVar46._12_4_ = (fVar43 * fVar22 + fVar43 * fVar33) * fVar8;
        local_178._4_4_ = fVar31;
        local_178._0_4_ = auVar34._0_4_;
        local_178._8_4_ = (fVar45 * fVar22 - fVar44 * fVar33) * fVar3;
        local_178._12_4_ = 0;
        auVar15 = insertps(auVar46,auVar46,0x4c);
        uStack_160 = auVar15._0_4_;
        uStack_15c = auVar15._8_4_;
        uStack_150 = auVar35._8_4_;
        uStack_14c = auVar35._12_4_;
        local_148 = insertps(*(undefined1 (*) [16])(pfVar1 + 4),ZEXT816(0x3f800000),0x30);
        fVar32 = fVar14 + fVar14;
        fVar31 = fVar20 + fVar20;
        fVar33 = fVar27 + fVar27;
        fVar22 = fVar42 * (fVar42 + fVar42);
        auVar29._0_4_ = (auVar10._0_4_ - (fVar27 * fVar33 + fVar20 * fVar31)) * fVar23;
        auVar29._4_4_ = (fVar4 - (fVar27 * fVar33 + fVar14 * fVar32)) * fVar24;
        auVar29._8_4_ = (auVar10._8_4_ - (fVar20 * fVar31 + fVar14 * fVar32)) * fVar25;
        auVar29._12_4_ = (fVar7 - (fVar22 + fVar22)) * fVar26;
        fVar27 = (fVar31 * fVar14 + fVar33 * fVar42) * fVar23;
        auVar36._4_4_ = (fVar33 * fVar20 + fVar32 * fVar42) * fVar24;
        auVar36._0_4_ = fVar27;
        local_198 = (fVar33 * fVar14 + fVar31 * fVar42) * fVar25;
        auVar17._0_4_ = (fVar31 * fVar14 - fVar33 * fVar42) * fVar24;
        auVar17._4_4_ = (fVar33 * fVar20 - fVar32 * fVar42) * fVar25;
        auVar17._8_4_ = (fVar33 * fVar14 - fVar31 * fVar42) * fVar23;
        auVar17._12_4_ = (fVar32 * fVar14 - fVar32 * fVar42) * fVar26;
        auVar35 = blendps(auVar29,ZEXT816(0),8);
        auVar36._8_4_ = local_198;
        auVar36._12_4_ = (fVar32 * fVar14 + fVar32 * fVar42) * fVar26;
        local_1b8._4_4_ = fVar27;
        local_1b8._0_4_ = auVar29._0_4_;
        local_1b8._8_4_ = auVar17._8_4_;
        local_1b8._12_4_ = 0;
        auVar15 = insertps(auVar36,auVar36,0x4c);
        uStack_1a0 = auVar15._0_4_;
        uStack_19c = auVar15._8_4_;
        uStack_190 = auVar35._8_4_;
        uStack_18c = auVar35._12_4_;
        local_188 = insertps(auVar38,ZEXT816(0x3f800000),0x30);
        local_1a8 = auVar17._0_4_;
        fStack_1a4 = auVar29._4_4_;
        fStack_194 = auVar17._4_4_;
        fStack_164 = auVar34._4_4_;
        FUN_144afeb32(auVar17._8_8_,local_1b8,local_178,auVar35._0_8_);
        FUN_144afd82e(&local_138);
        auVar18._4_4_ = -(uint)(0.0 <= fVar24 * fVar5);
        auVar18._0_4_ = -(uint)(0.0 <= fVar23 * fVar3);
        auVar18._8_4_ = -(uint)(0.0 <= fVar25 * fVar6);
        auVar18._12_4_ = -(uint)(0.0 <= fVar26 * fVar8);
        auVar35 = blendvps(_DAT_149f63320,auVar10,auVar18);
        fVar14 = auVar35._0_4_;
        local_130 = local_130 * fVar14;
        local_134 = local_134 * fVar14;
        local_138 = local_138 * fVar14;
        fVar14 = auVar35._4_4_;
        local_120 = local_120 * fVar14;
        local_124 = local_124 * fVar14;
        local_128 = fVar14 * local_128;
        fVar14 = auVar35._8_4_;
        local_110 = local_110 * fVar14;
        local_114 = local_114 * fVar14;
        local_118 = fVar14 * local_118;
        FUN_14066c2ac(&local_1c8,&local_138);
        fVar14 = local_1c8 * local_1c8 + fStack_1c4 * fStack_1c4;
        fVar20 = fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc;
        auVar28._0_4_ = fVar20 + fVar14;
        auVar28._4_4_ = fVar20 + fVar14;
        auVar28._8_4_ = fVar14 + fVar20;
        auVar28._12_4_ = fVar14 + fVar20;
        auVar19._4_4_ = -(uint)(1e-08 <= auVar28._4_4_);
        auVar19._0_4_ = -(uint)(1e-08 <= auVar28._0_4_);
        auVar19._8_4_ = -(uint)(1e-08 <= auVar28._8_4_);
        auVar19._12_4_ = -(uint)(1e-08 <= auVar28._12_4_);
        auVar35 = sqrtps(auVar28,auVar28);
        auVar35 = divps(_DAT_1499314a0,auVar35);
        auVar30._0_4_ = auVar35._0_4_ * local_1c8;
        auVar30._4_4_ = auVar35._4_4_ * fStack_1c4;
        auVar30._8_4_ = auVar35._8_4_ * fStack_1c0;
        auVar30._12_4_ = auVar35._12_4_ * fStack_1bc;
        auVar35 = blendvps(auVar9,auVar30,auVar19);
        auVar38 = blendps(local_108,ZEXT816(0),8);
        auVar15._4_4_ = fVar24 * fVar5;
        auVar15._0_4_ = fVar23 * fVar3;
        auVar15._8_4_ = fVar25 * fVar6;
        auVar15._12_4_ = fVar26 * fVar8;
      }
      param_4 = *(int *)(*param_3 + (longlong)param_4 * 4);
    } while (param_4 != DAT_14c75f3b2);
    param_1[1] = auVar38;
    param_1[2] = auVar15;
    *param_1 = auVar35;
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eba858 FUN_146eba858 body=1582 status=ok
// SIG undefined FUN_146eba858(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146eba858(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  int iVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [64];
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (*(char *)(*param_3 + (longlong)(int)param_1) == '\0') {
    local_1c8 = (undefined1 *)0x0;
    local_1c0 = 0x1000000000;
    local_228 = local_208;
    cVar15 = FUN_1407a67e0(param_1,param_2,*(undefined4 *)(*(longlong *)(param_2 + 0xb8) + 200),
                           param_3);
    auVar14 = _DAT_149e1ef10;
    auVar13 = _DAT_149932320;
    if ((cVar15 != '\0') && ((int)local_1c0 != 0)) {
      fVar5 = DAT_149e1ef10._4_4_;
      fVar9 = DAT_149e1ef10._12_4_;
      do {
        puVar17 = local_1c8;
        if (local_1c8 == (undefined1 *)0x0) {
          puVar17 = local_208;
        }
        iVar2 = *(int *)(puVar17 + (longlong)(int)local_1c0 * 4 + -4);
        local_1c0 = CONCAT44(local_1c0._4_4_,(int)local_1c0 + -1);
        iVar16 = FUN_144b072ca(param_2,iVar2);
        plVar18 = (longlong *)(*(longlong *)(param_2 + 0xb8) + 0xc0);
        if (*(char *)(param_2 + 0x118) != '\0') {
          plVar18 = (longlong *)(param_2 + 0x108);
        }
        lVar19 = *plVar18;
        lVar21 = (longlong)iVar2 * 0x30;
        auVar23 = *(undefined1 (*) [16])(lVar19 + lVar21);
        fVar22 = auVar23._0_4_;
        fVar28 = auVar23._4_4_;
        fVar32 = auVar23._8_4_;
        fVar10 = auVar23._12_4_;
        auVar45 = *(undefined1 (*) [16])(lVar19 + 0x10 + lVar21);
        auVar50 = *(undefined1 (*) [16])(lVar19 + 0x20 + lVar21);
        fVar3 = auVar50._0_4_;
        fVar6 = auVar50._4_4_;
        fVar11 = auVar50._12_4_;
        lVar19 = *param_4;
        if (iVar16 != DAT_14c75f3b2) {
          lVar20 = (longlong)iVar16 * 0x30;
          pauVar1 = (undefined1 (*) [16])(lVar19 + lVar20);
          auVar23 = *(undefined1 (*) [16])(lVar19 + 0x20 + lVar20);
          fVar4 = auVar23._0_4_;
          fVar7 = auVar23._4_4_;
          fVar8 = auVar23._8_4_;
          fVar12 = auVar23._12_4_;
          fVar31 = auVar50._8_4_;
          auVar23 = minps(auVar50,auVar23);
          auVar24._4_4_ = -(uint)(auVar23._4_4_ < 0.0);
          auVar24._0_4_ = -(uint)(auVar23._0_4_ < 0.0);
          auVar24._8_4_ = -(uint)(auVar23._8_4_ < 0.0);
          auVar24._12_4_ = -(uint)(auVar23._12_4_ < 0.0);
          iVar16 = movmskps((int)lVar20,auVar24);
          if (iVar16 == 0) {
            auVar23 = *pauVar1;
            fVar30 = auVar23._0_4_;
            fVar37 = auVar23._4_4_;
            fVar36 = auVar23._8_4_;
            fVar38 = auVar23._12_4_;
            fVar44 = auVar45._0_4_ * fVar4;
            fVar46 = auVar45._4_4_ * fVar7;
            fVar47 = auVar45._8_4_ * fVar8;
            fVar48 = auVar45._12_4_ * fVar12;
            fVar29 = fVar46 * fVar30 - fVar44 * fVar37;
            fVar41 = fVar47 * fVar37 - fVar46 * fVar36;
            fVar42 = fVar44 * fVar36 - fVar47 * fVar30;
            fVar43 = fVar48 * fVar38 - fVar48 * fVar38;
            fVar29 = fVar29 + fVar29;
            fVar41 = fVar41 + fVar41;
            fVar42 = fVar42 + fVar42;
            fVar43 = fVar43 + fVar43;
            auVar45._4_4_ =
                 (fVar41 * fVar36 - fVar29 * fVar30) + fVar38 * fVar42 + fVar46 +
                 *(float *)(pauVar1[1] + 4);
            auVar45._0_4_ =
                 (fVar29 * fVar37 - fVar42 * fVar36) + fVar38 * fVar41 + fVar44 +
                 *(float *)pauVar1[1];
            auVar23._4_4_ =
                 fVar36 * fVar22 * 1.0 +
                 fVar37 * fVar10 * 1.0 + fVar30 * fVar32 * -1.0 + fVar28 * fVar38;
            auVar23._0_4_ =
                 fVar36 * fVar28 * -1.0 +
                 fVar37 * fVar32 * 1.0 + fVar30 * fVar10 * 1.0 + fVar22 * fVar38;
            auVar50._0_4_ = fVar3 * fVar4;
            auVar50._4_4_ = fVar6 * fVar7;
            auVar50._8_4_ = fVar31 * fVar8;
            auVar50._12_4_ = fVar11 * fVar12;
            auVar23._8_4_ =
                 fVar36 * fVar10 * 1.0 +
                 fVar37 * fVar22 * -1.0 + fVar30 * fVar28 * 1.0 + fVar32 * fVar38;
            auVar23._12_4_ =
                 fVar36 * fVar32 * -1.0 +
                 fVar37 * fVar28 * -1.0 + fVar30 * fVar22 * -1.0 + fVar10 * fVar38;
            auVar45._8_4_ =
                 (fVar42 * fVar30 - fVar41 * fVar37) + fVar38 * fVar29 + fVar47 +
                 *(float *)(pauVar1[1] + 8);
            auVar45._12_4_ =
                 (fVar43 * fVar38 - fVar43 * fVar38) + fVar38 * fVar43 + fVar48 +
                 *(float *)(pauVar1[1] + 0xc);
          }
          else {
            fVar30 = *(float *)*pauVar1;
            fVar37 = *(float *)(*pauVar1 + 4);
            fVar36 = *(float *)(*pauVar1 + 8);
            fVar38 = *(float *)(*pauVar1 + 0xc);
            fVar41 = fVar30 + fVar30;
            fVar42 = fVar37 + fVar37;
            fVar43 = fVar36 + fVar36;
            fVar29 = fVar38 * (fVar38 + fVar38);
            auVar39._0_4_ = (auVar14._0_4_ - (fVar36 * fVar43 + fVar37 * fVar42)) * fVar4;
            auVar39._4_4_ = (fVar5 - (fVar36 * fVar43 + fVar30 * fVar41)) * fVar7;
            auVar39._8_4_ = (auVar14._8_4_ - (fVar37 * fVar42 + fVar30 * fVar41)) * fVar8;
            auVar39._12_4_ = (fVar9 - (fVar29 + fVar29)) * fVar12;
            fVar36 = (fVar42 * fVar30 + fVar43 * fVar38) * fVar4;
            local_158 = (fVar43 * fVar30 + fVar42 * fVar38) * fVar8;
            local_168 = (fVar42 * fVar30 - fVar43 * fVar38) * fVar7;
            fStack_154 = (fVar43 * fVar37 - fVar41 * fVar38) * fVar8;
            auVar23 = blendps(auVar39,ZEXT816(0),8);
            auVar49._4_4_ = (fVar43 * fVar37 + fVar41 * fVar38) * fVar7;
            auVar49._0_4_ = fVar36;
            auVar49._8_4_ = local_158;
            auVar49._12_4_ = (fVar41 * fVar30 + fVar41 * fVar38) * fVar12;
            local_178._4_4_ = fVar36;
            local_178._0_4_ = auVar39._0_4_;
            local_178._8_4_ = (fVar43 * fVar30 - fVar42 * fVar38) * fVar4;
            local_178._12_4_ = 0;
            auVar50 = insertps(auVar49,auVar49,0x4c);
            uStack_160 = auVar50._0_4_;
            uStack_15c = auVar50._8_4_;
            uStack_150 = auVar23._8_4_;
            uStack_14c = auVar23._12_4_;
            local_148 = insertps(pauVar1[1],ZEXT816(0x3f800000),0x30);
            fVar37 = fVar22 + fVar22;
            fVar36 = fVar28 + fVar28;
            fVar38 = fVar32 + fVar32;
            fVar30 = fVar10 * (fVar10 + fVar10);
            auVar34._0_4_ = (auVar14._0_4_ - (fVar32 * fVar38 + fVar28 * fVar36)) * fVar3;
            auVar34._4_4_ = (fVar5 - (fVar32 * fVar38 + fVar22 * fVar37)) * fVar6;
            auVar34._8_4_ = (auVar14._8_4_ - (fVar28 * fVar36 + fVar22 * fVar37)) * fVar31;
            auVar34._12_4_ = (fVar9 - (fVar30 + fVar30)) * fVar11;
            fVar32 = (fVar36 * fVar22 + fVar38 * fVar10) * fVar3;
            auVar40._4_4_ = (fVar38 * fVar28 + fVar37 * fVar10) * fVar6;
            auVar40._0_4_ = fVar32;
            local_198 = (fVar38 * fVar22 + fVar36 * fVar10) * fVar31;
            auVar25._0_4_ = (fVar36 * fVar22 - fVar38 * fVar10) * fVar6;
            auVar25._4_4_ = (fVar38 * fVar28 - fVar37 * fVar10) * fVar31;
            auVar25._8_4_ = (fVar38 * fVar22 - fVar36 * fVar10) * fVar3;
            auVar25._12_4_ = (fVar37 * fVar22 - fVar37 * fVar10) * fVar11;
            auVar23 = blendps(auVar34,ZEXT816(0),8);
            auVar40._8_4_ = local_198;
            auVar40._12_4_ = (fVar37 * fVar22 + fVar37 * fVar10) * fVar11;
            local_1b8._4_4_ = fVar32;
            local_1b8._0_4_ = auVar34._0_4_;
            local_1b8._8_4_ = auVar25._8_4_;
            local_1b8._12_4_ = 0;
            auVar50 = insertps(auVar40,auVar40,0x4c);
            uStack_1a0 = auVar50._0_4_;
            uStack_19c = auVar50._8_4_;
            uStack_190 = auVar23._8_4_;
            uStack_18c = auVar23._12_4_;
            local_188 = insertps(auVar45,ZEXT816(0x3f800000),0x30);
            local_1a8 = auVar25._0_4_;
            fStack_1a4 = auVar34._4_4_;
            fStack_194 = auVar25._4_4_;
            fStack_164 = auVar39._4_4_;
            FUN_144afeb32(auVar25._8_8_,local_1b8,local_178,auVar23._0_8_);
            FUN_144afd82e(&local_138);
            auVar26._4_4_ = -(uint)(0.0 <= fVar6 * fVar7);
            auVar26._0_4_ = -(uint)(0.0 <= fVar3 * fVar4);
            auVar26._8_4_ = -(uint)(0.0 <= fVar31 * fVar8);
            auVar26._12_4_ = -(uint)(0.0 <= fVar11 * fVar12);
            auVar23 = blendvps(_DAT_149f63320,auVar14,auVar26);
            fVar22 = auVar23._0_4_;
            local_130 = local_130 * fVar22;
            local_134 = local_134 * fVar22;
            local_138 = local_138 * fVar22;
            fVar22 = auVar23._4_4_;
            local_120 = local_120 * fVar22;
            local_124 = local_124 * fVar22;
            local_128 = fVar22 * local_128;
            fVar22 = auVar23._8_4_;
            local_110 = local_110 * fVar22;
            local_114 = local_114 * fVar22;
            local_118 = fVar22 * local_118;
            FUN_14066c2ac(&local_218,&local_138);
            fVar22 = local_218 * local_218 + fStack_214 * fStack_214;
            fVar28 = fStack_210 * fStack_210 + fStack_20c * fStack_20c;
            auVar33._0_4_ = fVar28 + fVar22;
            auVar33._4_4_ = fVar28 + fVar22;
            auVar33._8_4_ = fVar22 + fVar28;
            auVar33._12_4_ = fVar22 + fVar28;
            auVar27._4_4_ = -(uint)(1e-08 <= auVar33._4_4_);
            auVar27._0_4_ = -(uint)(1e-08 <= auVar33._0_4_);
            auVar27._8_4_ = -(uint)(1e-08 <= auVar33._8_4_);
            auVar27._12_4_ = -(uint)(1e-08 <= auVar33._12_4_);
            auVar23 = sqrtps(auVar33,auVar33);
            auVar23 = divps(_DAT_1499314a0,auVar23);
            auVar35._0_4_ = auVar23._0_4_ * local_218;
            auVar35._4_4_ = auVar23._4_4_ * fStack_214;
            auVar35._8_4_ = auVar23._8_4_ * fStack_210;
            auVar35._12_4_ = auVar23._12_4_ * fStack_20c;
            auVar23 = blendvps(auVar13,auVar35,auVar27);
            auVar45 = blendps(local_108,ZEXT816(0),8);
            lVar19 = *param_4;
            auVar50._4_4_ = fVar6 * fVar7;
            auVar50._0_4_ = fVar3 * fVar4;
            auVar50._8_4_ = fVar31 * fVar8;
            auVar50._12_4_ = fVar11 * fVar12;
          }
        }
        *(undefined1 (*) [16])(lVar19 + lVar21) = auVar23;
        *(undefined1 (*) [16])(lVar19 + 0x10 + lVar21) = auVar45;
        *(undefined1 (*) [16])(lVar19 + 0x20 + lVar21) = auVar50;
        *(undefined1 *)(*param_3 + (longlong)iVar2) = 1;
      } while ((int)local_1c0 != 0);
    }
    if (local_1c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ebae88 FUN_146ebae88 body=143 status=ok
// SIG undefined FUN_146ebae88(void)

void FUN_146ebae88(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ec8658(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146ec86de(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146ec873e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ebaf18 FUN_146ebaf18 body=1255 status=ok
// SIG undefined FUN_146ebaf18(void)

void FUN_146ebaf18(longlong *param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  byte local_e1;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98 [9];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e1 = param_4;
  uVar5 = FUN_1401f66f6(param_1,DAT_14c996af0);
  local_d8 = CONCAT44(local_d8._4_4_,uVar5);
  local_4c = 0;
  local_50 = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  iVar6 = FUN_1401f66f6(param_1,DAT_14c996ae8);
  uVar7 = FUN_1401f66f6(param_1,DAT_14c996ae0);
  uVar9 = (ulonglong)uVar7;
  local_b8 = param_1 + 0x90;
  local_f8 = (longlong *)&local_4c;
  local_f0 = local_98 + 6;
  FUN_1429fe5be(iVar6,param_2,local_b8,param_1 + 0x8c);
  local_c0 = param_1 + 0x84;
  local_c8 = param_1 + 0x88;
  local_f8 = (longlong *)&local_50;
  local_f0 = local_98 + 4;
  FUN_1429fe5be(uVar9,param_3);
  local_e0 = local_4c;
  local_dc = iVar6;
  if (local_4c - iVar6 != 0 && iVar6 <= local_4c) {
    lVar11 = (longlong)local_4c;
    FUN_1409bcbd8(param_1,local_4c - iVar6,DAT_14c996ae8);
    iVar6 = 0;
    if (0 < (int)uVar7) {
      iVar6 = uVar7 - 1;
    }
    lVar11 = lVar11 - local_dc;
    lVar8 = (longlong)local_dc * 0xc + 8;
    do {
      lVar13 = param_1[0x5e];
      *(int *)(lVar13 + -8 + lVar8) = iVar6;
      *(int *)(lVar13 + -4 + lVar8) = iVar6;
      *(int *)(lVar13 + lVar8) = iVar6;
      lVar8 = lVar8 + 0xc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar6 = local_50;
  local_b0 = uVar9;
  if (local_50 - uVar7 != 0 && (int)uVar7 <= local_50) {
    FUN_1409bcbd8(param_1,local_50 - uVar7,DAT_14c996ae0);
  }
  uVar5 = FUN_1401f66f6(param_1,DAT_14c996ae8);
  local_cc = FUN_1401f66f6(param_1,DAT_14c996ae0);
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_f8 = local_98 + 6;
  local_f0 = local_98 + 2;
  FUN_1429fe6ba(uVar5,param_2,local_b8,param_1 + 0x8c);
  local_f8 = local_98 + 4;
  local_f0 = local_98;
  FUN_1429fe6ba(local_cc,param_3,local_c8,local_c0);
  (**(code **)(*param_1 + 0x38))(param_1,DAT_14c996ae0,local_98);
  (**(code **)(*param_1 + 0x38))(param_1,DAT_14c996ae8,local_98 + 2);
  bVar3 = local_e1;
  if (0 < (int)local_d8) {
    local_d8 = local_d8 & 0xffffffff;
    uVar9 = 0;
    do {
      uVar5 = *(undefined4 *)(param_1[0x76] + uVar9 * 4);
      *(undefined4 *)(param_1[0x92] + uVar9 * 4) = *(undefined4 *)(*param_2 + uVar9 * 4);
      *(undefined4 *)(param_1[0x8a] + uVar9 * 4) = *(undefined4 *)(*param_3 + uVar9 * 4);
      lVar11 = (longlong)*(int *)(param_1[0x8a] + uVar9 * 4);
      if (0 < lVar11) {
        lVar8 = (longlong)*(int *)(param_1[0x86] + uVar9 * 4);
        lVar11 = lVar11 + lVar8;
        do {
          *(undefined4 *)(param_1[0x5a] + lVar8 * 4) = uVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != local_d8);
    uVar9 = 0;
    do {
      lVar11 = (longlong)*(int *)(param_1[0x92] + uVar9 * 4);
      if (0 < lVar11) {
        iVar10 = *(int *)(param_1[0x76] + uVar9 * 4);
        uVar5 = *(undefined4 *)(param_1[0x86] + uVar9 * 4);
        lVar13 = (longlong)*(int *)(param_1[0x8e] + uVar9 * 4);
        lVar11 = lVar11 + lVar13;
        lVar8 = lVar13 * 0xc;
        do {
          puVar1 = (undefined4 *)(param_1[0x5e] + lVar13 * 0xc);
          lVar12 = 0;
          bVar4 = false;
          do {
            bVar14 = bVar4;
            iVar2 = *(int *)(param_1[0x5e] + lVar8 + lVar12 * 4);
            bVar15 = *(int *)(param_1[0x5a] + (longlong)iVar2 * 4) != iVar10;
            lVar12 = lVar12 + 1;
            bVar4 = (bool)(bVar14 | iVar6 <= iVar2 | bVar15);
          } while (lVar12 != 3);
          if ((bVar14 || iVar6 <= iVar2) || bVar15) {
            *puVar1 = uVar5;
            puVar1[1] = uVar5;
            puVar1[2] = uVar5;
          }
          lVar13 = lVar13 + 1;
          lVar8 = lVar8 + 0xc;
        } while (lVar13 < lVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != local_d8);
  }
  iVar10 = (int)local_b0;
  if (iVar6 < iVar10) {
    local_a8 = 0;
    uStack_a0 = 0;
    do {
      uVar9 = uStack_a0;
      lVar11 = (longlong)(int)uStack_a0;
      uVar7 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
      if (uStack_a0._4_4_ < uVar7) {
        FUN_1446f48e2(&local_a8,uVar9 & 0xffffffff);
      }
      *(int *)(local_a8 + lVar11 * 4) = iVar6;
      iVar6 = iVar6 + 1;
    } while (iVar10 != iVar6);
    (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c996ae0,&local_a8,bVar3 | 0x100);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  iVar6 = local_dc;
  if (local_e0 < local_dc) {
    local_a8 = 0;
    uStack_a0 = 0;
    iVar10 = local_e0;
    do {
      uVar9 = uStack_a0;
      lVar11 = (longlong)(int)uStack_a0;
      uVar7 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
      if (uStack_a0._4_4_ < uVar7) {
        FUN_1446f48e2(&local_a8,uVar9 & 0xffffffff);
      }
      *(int *)(local_a8 + lVar11 * 4) = iVar10;
      iVar10 = iVar10 + 1;
    } while (iVar6 != iVar10);
    (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c996ae8,&local_a8,bVar3 | 0x100);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if (bVar3 != 0) {
    FUN_146eb1612(param_1);
    FUN_146eb0c04(param_1);
    FUN_146ebb400(param_1);
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_98[4] != 0) {
    FUN_1400020a8();
  }
  if (local_98[6] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebb400 FUN_146ebb400 body=81 status=ok
// SIG undefined FUN_146ebb400(void)

void FUN_146ebb400(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = FUN_1401f66f6(param_1,DAT_14c996af0);
    if (iVar2 <= iVar3) {
      return;
    }
    cVar1 = FUN_146ebb52a(param_1,iVar3);
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = FUN_146ebb451(param_1,iVar3);
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = FUN_146ebb5bd(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (cVar1 == '\0');
  return;
}



// FUNCTION 146ebb451 FUN_146ebb451 body=217 status=ok
// SIG undefined FUN_146ebb451(void)

longlong FUN_146ebb451(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_1401f66f6(param_1,DAT_14c996af0);
  lVar8 = (longlong)param_2;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x470) + lVar8 * 4);
  lVar4 = (longlong)iVar6;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x490) + lVar8 * 4);
  iVar2 = FUN_1401f66f6(param_1,DAT_14c996ae8);
  lVar3 = 0;
  if ((iVar6 < iVar2) && (iVar6 = iVar1 + iVar6, iVar6 <= iVar2)) {
    if (0 < iVar1) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x430) + lVar8 * 4);
      lVar5 = lVar4 * 0xc + *(longlong *)(param_1 + 0x2f0);
      do {
        lVar7 = 0;
        do {
          iVar2 = *(int *)(lVar5 + lVar7 * 4);
          if (iVar2 < iVar1) {
            return 0;
          }
          if (*(int *)(*(longlong *)(param_1 + 0x450) + lVar8 * 4) + iVar1 <= iVar2) {
            return 0;
          }
          lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2d0) + (longlong)iVar2 * 4);
          if (*(int *)(*(longlong *)(param_1 + 400) + lVar3 * 4) != param_2) {
            return 0;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0xc;
      } while (lVar4 < iVar6);
    }
    lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return lVar3;
}



// FUNCTION 146ebb52a FUN_146ebb52a body=147 status=ok
// SIG undefined FUN_146ebb52a(void)

undefined8 FUN_146ebb52a(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  FUN_1401f66f6(param_1,DAT_14c996af0);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x430) + (longlong)param_2 * 4);
  lVar4 = (longlong)iVar5;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x450) + (longlong)param_2 * 4);
  iVar2 = FUN_1401f66f6(param_1,DAT_14c996ae0);
  uVar3 = 0;
  if ((iVar5 < iVar2) && (iVar5 = iVar1 + iVar5, iVar5 <= iVar2)) {
    if (iVar1 < 1) {
      uVar3 = 1;
    }
    else {
      do {
        lVar4 = lVar4 + 1;
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x2d0) + -4 + lVar4 * 4);
        bVar6 = *(int *)(*(longlong *)(param_1 + 400) + (longlong)iVar1 * 4) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),bVar6);
        if (!bVar6) {
          return uVar3;
        }
      } while (lVar4 < iVar5);
    }
  }
  return uVar3;
}



// FUNCTION 146ebb5bd FUN_146ebb5bd body=197 status=ok
// SIG undefined FUN_146ebb5bd(void)

undefined8 FUN_146ebb5bd(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1401f66f6(param_1,DAT_14c996af0);
  lVar6 = (longlong)(int)param_2;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x430) + lVar6 * 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x450) + lVar6 * 4);
  uVar3 = FUN_1401f66f6(param_1);
  uVar4 = 1;
  if ((iVar1 < (int)uVar3) && (lVar7 = (longlong)iVar2 + (longlong)iVar1, (int)lVar7 <= (int)uVar3))
  {
    if (0 < (int)uVar3) {
      uVar5 = 0;
      do {
        if ((((longlong)uVar5 < (longlong)iVar1) || (lVar7 <= (longlong)uVar5)) &&
           (*(uint *)(*(longlong *)(param_1 + 400) +
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x2d0) + uVar5 * 4) * 4) == param_2)
           ) {
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
    if (0 < (longlong)*(int *)(param_1 + 0x3b8)) {
      uVar5 = 0;
      do {
        if ((param_2 != uVar5) &&
           (*(int *)(*(longlong *)(param_1 + 0x3b0) + uVar5 * 4) ==
            *(int *)(*(longlong *)(param_1 + 0x3b0) + lVar6 * 4))) {
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while ((longlong)*(int *)(param_1 + 0x3b8) != uVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 146ebb682 FUN_146ebb682 body=75 status=ok
// SIG undefined FUN_146ebb682(void)

void FUN_146ebb682(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x60))(param_1 + 0x110);
  uVar2 = 0xffffffff;
  if (param_2 < iVar1) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + (longlong)param_2 * 4);
  }
  FUN_146ebb6ce(param_1,uVar2,param_3,0);
  return;
}



// FUNCTION 146ebb6ce FUN_146ebb6ce body=533 status=ok
// SIG undefined FUN_146ebb6ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_146ebb6ce(longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4,char param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_168 [44];
  int local_13c;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar8 = FUN_1409bcbd8(param_1,1,DAT_14c9974a8);
  lVar9 = (longlong)iVar8;
  *(int *)(*(longlong *)(param_1 + 0x120) + lVar9 * 4) = param_2;
  local_138 = *param_3;
  local_130 = *(undefined4 *)(param_3 + 1);
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_13c = iVar8;
  FUN_146bc855c(&local_128);
  FUN_145be27ca(lVar9 * 0x50 + *(longlong *)(param_1 + 0x140),&local_128);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_128);
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + lVar9 * 4) = 2;
  uVar7 = uRam000000014c846088;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar9 = lVar9 * 0x30;
  puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar9);
  *puVar2 = _DAT_14c846080;
  puVar2[1] = uVar7;
  uVar7 = uRam000000014c846078;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar9);
  *puVar2 = _DAT_14c846070;
  puVar2[1] = uVar7;
  uVar6 = uRam000000014c84606c;
  uVar5 = uRam000000014c846068;
  uVar4 = uRam000000014c846064;
  puVar1 = (undefined4 *)(lVar3 + lVar9);
  *puVar1 = _DAT_14c846060;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  if (param_1 != 0) {
    FUN_146ea7fa0(&local_128,param_1);
    FUN_146ea9378(&local_128,iVar8,param_3);
  }
  FUN_146ebb8e4(param_1,iVar8);
  if (DAT_14c75f3b2 != param_2) {
    FUN_1447cbafe((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x140),&local_128,&local_13c,0)
    ;
    iVar8 = local_13c;
  }
  FUN_140002266(&local_128,L"ClusterBone_%d",iVar8);
  plVar10 = (longlong *)((longlong)local_13c * 0x10 + *(longlong *)(param_1 + 0xe0));
  if (plVar10 != &local_128) {
    if (*plVar10 != 0) {
      FUN_1400020a8();
    }
    *plVar10 = local_128;
    local_128 = 0;
    *(undefined4 *)(plVar10 + 1) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_120._4_4_;
    uStack_120 = 0;
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (param_5 != '\0') {
    FUN_146ebba3e(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return local_13c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebb8e4 FUN_146ebb8e4 body=345 status=ok
// SIG undefined FUN_146ebb8e4(void)

void FUN_146ebb8e4(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar3 = DAT_14c9974a8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446ddc76(&local_38,"Level",1);
  cVar2 = FUN_140498cd4(param_1,local_38,uVar3);
  uVar3 = DAT_14c9974a8;
  if (cVar2 == '\0') {
    local_48 = 0;
    local_40 = 1;
    FUN_1446ddc76(&local_50,"Level",1);
    FUN_140b1fb8c(param_1,local_50,uVar3,&local_48);
  }
  uVar3 = DAT_14c9974a8;
  FUN_1446ddc76(&local_58,"Level",1);
  uVar3 = FUN_140b1fc18(param_1,local_58,uVar3);
  if (param_2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_140759cba(param_1,&local_68);
    lVar1 = local_68;
    lVar4 = (longlong)(int)uStack_60;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        FUN_146ebd578(uVar3,param_1 + 0x130,*(undefined4 *)(lVar1 + lVar5));
        lVar5 = lVar5 + 4;
      } while (lVar4 * 4 != lVar5);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  else {
    FUN_146ebd578(uVar3,param_1 + 0x130,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ebba3e FUN_146ebba3e body=78 status=ok
// SIG undefined FUN_146ebba3e(void)

void FUN_146ebba3e(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_14c996b18 != 0) {
    iVar2 = -1;
    do {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x60))((longlong *)(param_1 + 0x110));
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
    FUN_146eb1612(param_1);
    FUN_146eb0c04(param_1);
    return;
  }
  return;
}



// FUNCTION 146ebba8c FUN_146ebba8c body=1703 status=ok
// SIG undefined FUN_146ebba8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ebba8c(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  char cVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong *plVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_108 = 0;
  uStack_100 = 0;
  local_f0 = param_2;
  uVar32 = FUN_1401f66f6(0,DAT_14c9974a8);
  if (0 < (int)uVar32) {
    uVar43 = 0;
    cVar31 = DAT_14c75f3b2;
    do {
      uVar30 = uStack_100;
      if (*(int *)(*(longlong *)(param_1 + 0x120) + uVar43 * 4) == (int)cVar31) {
        lVar44 = (longlong)(int)uStack_100;
        uVar38 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar38);
        if (uStack_100._4_4_ < uVar38) {
          FUN_1446f48e2(&local_108,uVar30 & 0xffffffff);
          cVar31 = DAT_14c75f3b2;
        }
        *(int *)(local_108 + lVar44 * 4) = (int)uVar43;
      }
      uVar43 = uVar43 + 1;
    } while (uVar32 != uVar43);
  }
  iVar33 = FUN_1409bcbd8(param_1,1,DAT_14c9974a8);
  uVar12 = DAT_14c9974a8;
  FUN_1446ddc76(&local_110,"Level",1);
  cVar31 = FUN_140498cd4(param_1,local_110,uVar12);
  uVar12 = DAT_14c9974a8;
  if (cVar31 != '\0') {
    FUN_1446ddc76(&local_118,"Level",1);
    lVar44 = FUN_140b1fc18(param_1,local_118,uVar12);
    if (0 < (int)uVar32) {
      uVar43 = 0;
      do {
        piVar1 = (int *)(*(longlong *)(lVar44 + 0x10) + uVar43 * 4);
        *piVar1 = *piVar1 + 1;
        uVar43 = uVar43 + 1;
      } while (uVar32 != uVar43);
    }
    *(undefined4 *)(*(longlong *)(lVar44 + 0x10) + (longlong)iVar33 * 4) = 0;
  }
  lVar44 = (longlong)iVar33;
  if (param_2 == 0) {
    FUN_1400b22c2(&local_d8,"ClusterBone");
  }
  else {
    FUN_1400021e4(&local_f0,&local_d8);
  }
  plVar45 = (longlong *)(lVar44 * 0x10 + *(longlong *)(param_1 + 0xe0));
  if (plVar45 != &local_d8) {
    if (*plVar45 != 0) {
      FUN_1400020a8();
    }
    *plVar45 = local_d8;
    local_d8 = 0;
    *(undefined4 *)(plVar45 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)plVar45 + 0xc) = uStack_d0._4_4_;
    uStack_d0 = 0;
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  *(int *)(*(longlong *)(param_1 + 0x120) + lVar44 * 4) = (int)DAT_14c75f3b2;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_e8 = local_108;
  local_e0 = (int)uStack_100;
  FUN_146bc855c(&local_d8);
  FUN_145be27ca(lVar44 * 0x50 + *(longlong *)(param_1 + 0x140),&local_d8);
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_d8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + lVar44 * 4) = 2;
  uVar12 = DAT_14c9974a8;
  FUN_1446ddc76(&local_120,"ExplodedVector",1);
  cVar31 = FUN_140498cd4(param_1,local_120,uVar12);
  uVar12 = DAT_14c9974a8;
  if (cVar31 != '\0') {
    FUN_1446ddc76(&local_128,"ExplodedTransform",1);
    cVar31 = FUN_140498cd4(param_1,local_128,uVar12);
    uVar12 = DAT_14c9974a8;
    if (cVar31 != '\0') {
      FUN_1446ddc76(&local_130,"ExplodedVector",1);
      lVar36 = FUN_14067648e(param_1,local_130,uVar12);
      FUN_1446ddc76(&local_138,"ExplodedTransform",1);
      lVar37 = FUN_146ebc134(param_1,local_138);
      fVar48 = 0.0;
      fVar47 = 0.0;
      fVar46 = 0.0;
      if ((longlong)(int)uStack_100 != 0) {
        lVar41 = *(longlong *)(lVar36 + 0x10);
        lVar39 = 0;
        do {
          lVar42 = (longlong)*(int *)(local_108 + lVar39);
          lVar27 = lVar42 * 0x30;
          auVar11 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0xc0) + 0x10 + lVar27);
          lVar28 = lVar42 * 0xc;
          *(longlong *)(lVar41 + lVar28) = auVar11._0_8_;
          uVar12 = extractps(auVar11,2);
          *(undefined8 *)(lVar41 + 8 + lVar28) = uVar12;
          lVar41 = *(longlong *)(param_1 + 0xc0);
          uVar12 = *(undefined8 *)(lVar41 + 0x20 + lVar27);
          dVar14 = (double)(float)((ulonglong)uVar12 >> 0x20);
          uVar7 = *(undefined8 *)(lVar41 + 0x28 + lVar27);
          dVar17 = (double)(float)((ulonglong)uVar7 >> 0x20);
          uVar8 = *(undefined8 *)(lVar41 + 0x10 + lVar27);
          uVar9 = *(undefined8 *)(lVar41 + 0x18 + lVar27);
          dVar20 = (double)(float)((ulonglong)uVar9 >> 0x20);
          dVar23 = (double)(float)((ulonglong)*(undefined8 *)(lVar41 + lVar27) >> 0x20);
          uVar10 = *(undefined8 *)(lVar41 + 8 + lVar27);
          dVar26 = (double)(float)((ulonglong)uVar10 >> 0x20);
          lVar40 = *(longlong *)(lVar37 + 0x10);
          lVar42 = lVar42 * 0x60;
          auVar21._8_4_ = SUB84(dVar23,0);
          auVar21._0_8_ = (double)(float)*(undefined8 *)(lVar41 + lVar27);
          auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + lVar42) = auVar21;
          auVar24._8_4_ = SUB84(dVar26,0);
          auVar24._0_8_ = (double)(float)uVar10;
          auVar24._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 0x10 + lVar42) = auVar24;
          pdVar3 = (double *)(lVar40 + 0x20 + lVar42);
          *pdVar3 = (double)(float)uVar8;
          pdVar3[1] = (double)(float)((ulonglong)uVar8 >> 0x20);
          auVar18._8_4_ = SUB84(dVar20,0);
          auVar18._0_8_ = (double)(float)uVar9;
          auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 0x30 + lVar42) = auVar18;
          auVar11._8_4_ = SUB84(dVar14,0);
          auVar11._0_8_ = (double)(float)uVar12;
          auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 0x40 + lVar42) = auVar11;
          auVar15._8_4_ = SUB84(dVar17,0);
          auVar15._0_8_ = (double)(float)uVar7;
          auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 0x50 + lVar42) = auVar15;
          lVar41 = *(longlong *)(lVar36 + 0x10);
          fVar48 = fVar48 + *(float *)(lVar41 + lVar28);
          fVar47 = fVar47 + *(float *)(lVar41 + 4 + lVar28);
          fVar46 = fVar46 + *(float *)(lVar41 + 8 + lVar28);
          lVar39 = lVar39 + 4;
        } while ((longlong)(int)uStack_100 * 4 != lVar39);
      }
      lVar41 = *(longlong *)(param_1 + 0xc0);
      lVar40 = lVar44 * 0x30;
      uVar12 = *(undefined8 *)(lVar41 + 0x20 + lVar40);
      dVar14 = (double)(float)((ulonglong)uVar12 >> 0x20);
      uVar7 = *(undefined8 *)(lVar41 + 0x28 + lVar40);
      dVar17 = (double)(float)((ulonglong)uVar7 >> 0x20);
      uVar8 = *(undefined8 *)(lVar41 + 0x10 + lVar40);
      uVar9 = *(undefined8 *)(lVar41 + 0x18 + lVar40);
      dVar20 = (double)(float)((ulonglong)uVar9 >> 0x20);
      dVar23 = (double)(float)((ulonglong)*(undefined8 *)(lVar41 + lVar40) >> 0x20);
      uVar10 = *(undefined8 *)(lVar41 + 8 + lVar40);
      dVar26 = (double)(float)((ulonglong)uVar10 >> 0x20);
      lVar37 = *(longlong *)(lVar37 + 0x10);
      lVar39 = lVar44 * 0x60;
      auVar22._8_4_ = SUB84(dVar23,0);
      auVar22._0_8_ = (double)(float)*(undefined8 *)(lVar41 + lVar40);
      auVar22._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])(lVar37 + lVar39) = auVar22;
      auVar25._8_4_ = SUB84(dVar26,0);
      auVar25._0_8_ = (double)(float)uVar10;
      auVar25._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      *(undefined1 (*) [16])(lVar37 + 0x10 + lVar39) = auVar25;
      pdVar3 = (double *)(lVar37 + 0x20 + lVar39);
      *pdVar3 = (double)(float)uVar8;
      pdVar3[1] = (double)(float)((ulonglong)uVar8 >> 0x20);
      auVar19._8_4_ = SUB84(dVar20,0);
      auVar19._0_8_ = (double)(float)uVar9;
      auVar19._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined1 (*) [16])(lVar37 + 0x30 + lVar39) = auVar19;
      auVar13._8_4_ = SUB84(dVar14,0);
      auVar13._0_8_ = (double)(float)uVar12;
      auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(lVar37 + 0x40 + lVar39) = auVar13;
      auVar16._8_4_ = SUB84(dVar17,0);
      auVar16._0_8_ = (double)(float)uVar7;
      auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      *(undefined1 (*) [16])(lVar37 + 0x50 + lVar39) = auVar16;
      fVar49 = 1.0 / (float)(int)uStack_100;
      lVar36 = *(longlong *)(lVar36 + 0x10);
      *(float *)(lVar36 + lVar44 * 0xc) = fVar49 * fVar48;
      *(float *)(lVar36 + 4 + lVar44 * 0xc) = fVar47 * fVar49;
      *(float *)(lVar36 + 8 + lVar44 * 0xc) = fVar46 * fVar49;
    }
  }
  if ((longlong)(int)uStack_100 != 0) {
    lVar36 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(local_108 + lVar36) * 4) = iVar33
      ;
      lVar36 = lVar36 + 4;
    } while ((longlong)(int)uStack_100 * 4 != lVar36);
  }
  uVar12 = uRam000000014c846088;
  lVar36 = *(longlong *)(param_1 + 0xc0);
  lVar37 = lVar44 * 0x30;
  puVar4 = (undefined8 *)(lVar36 + 0x20 + lVar37);
  *puVar4 = _DAT_14c846080;
  puVar4[1] = uVar12;
  uVar12 = uRam000000014c846078;
  puVar4 = (undefined8 *)(lVar36 + 0x10 + lVar37);
  *puVar4 = _DAT_14c846070;
  puVar4[1] = uVar12;
  uVar29 = uRam000000014c84606c;
  uVar6 = uRam000000014c846068;
  uVar5 = uRam000000014c846064;
  puVar2 = (undefined4 *)(lVar36 + lVar37);
  *puVar2 = _DAT_14c846060;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar29;
  if (param_3 != '\0') {
    FUN_146ebc230(iVar33,param_1 + 0x130,param_1 + 0xd0,0);
  }
  iVar33 = rand();
  iVar34 = rand();
  iVar35 = rand();
  uVar5 = (&DAT_14c758c60)[iVar34 % 100 + 5U & 0xff];
  uVar6 = (&DAT_14c758c60)[iVar33 % 100 + 5U & 0xff];
  lVar36 = *(longlong *)(param_1 + 0x100);
  lVar44 = lVar44 * 0x10;
  *(undefined4 *)(lVar36 + lVar44) = (&DAT_14c758c60)[iVar35 % 100 + 5U & 0xff];
  *(undefined4 *)(lVar36 + 4 + lVar44) = uVar5;
  *(undefined4 *)(lVar36 + 8 + lVar44) = uVar6;
  *(undefined4 *)(lVar36 + 0xc + lVar44) = 0x3f800000;
  FUN_146ebba3e(param_1);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ebc134 FUN_146ebc134 body=251 status=ok
// SIG undefined FUN_146ebc134(void)

void FUN_146ebc134(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146ebc144;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146ebc144:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146ebc230 FUN_146ebc230 body=1469 status=ok
// SIG undefined FUN_146ebc230(void)

void FUN_146ebc230(uint param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_158 [39];
  char local_131;
  ulonglong local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong local_110 [2];
  longlong local_100 [2];
  longlong local_f0 [2];
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  uint local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((-1 < (int)param_1) && (iVar2 = (**(code **)(*param_2 + 0x60))(param_2), (int)param_1 < iVar2)
     ) {
    lVar9 = param_2[2];
    lVar5 = (ulonglong)param_1 * 0x50;
    if (*(int *)(lVar9 + 0x34 + lVar5) < *(int *)(lVar9 + 8 + lVar5)) {
      plVar10 = (longlong *)(lVar9 + lVar5);
      plVar1 = plVar10 + 2;
      lVar9 = *(longlong *)(param_3 + 0x10);
      local_88 = 0x100000000;
      local_78 = 0xffffffff;
      local_70 = 0;
      plStack_80 = plVar1;
      if ((int)plVar10[5] != 0) {
        FUN_1449c0562(&local_88);
      }
      local_98 = local_78;
      local_90 = local_70;
      local_8c = local_6c;
      local_a8 = local_88;
      local_a0 = plStack_80;
      uVar7 = *(uint *)(plVar10 + 5);
      local_88 = CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
      local_78 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
      local_70 = uVar7 & 0xffffffe0;
      local_b0 = plVar10;
      plStack_80 = plVar1;
      if (*(uint *)(plVar10 + 5) != uVar7) {
        FUN_1449c0562(&local_88);
        uVar7 = local_78._4_4_;
      }
      if ((local_b0 != plVar10 || local_a0 != plStack_80) || local_98._4_4_ != uVar7) {
        iVar2 = 1;
        local_131 = param_4;
        local_120 = plStack_80;
        local_118 = (longlong *)((ulonglong)param_1 * 0x10 + lVar9);
LAB_146ebc40b:
        plVar1 = local_118;
        uVar11 = (ulonglong)*(int *)(*local_b0 + (longlong)(int)local_98._4_4_ * 0xc);
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_144a83b10(&local_88,iVar2);
        local_128 = uVar11 * 0x10;
        iVar4 = *(int *)(*(longlong *)(param_3 + 0x10) + 8 + local_128);
        local_130 = uVar11;
        if ((longlong)iVar4 != 0) {
          lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + local_128);
          lVar5 = (longlong)iVar4 * 2;
          lVar6 = 0;
          do {
            if (*(short *)(lVar9 + lVar6 * 2) == 0x5f) {
              iVar3 = (int)lVar6;
              if (0 < iVar3 && local_131 == '\0') {
                iVar8 = iVar4 + -1;
                if (iVar4 == 0) {
                  iVar8 = 0;
                }
                if (iVar3 < iVar8) {
                  iVar8 = iVar3;
                }
                if (iVar8 < 1) {
                  iVar8 = 0;
                }
                FUN_14006620a(&local_c0,lVar9,iVar8);
                iVar4 = (int)plVar1[1];
                if ((longlong)iVar4 == 0) goto LAB_146ebc604;
                lVar9 = (longlong)iVar4 * 2;
                lVar5 = 0;
                goto LAB_146ebc69d;
              }
              break;
            }
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + -2;
          } while (lVar5 != 0);
        }
        FUN_1400b22c2(&local_e0,L"_Common");
        FUN_1407ec8fc(&local_d0,plVar1,&local_e0);
        FUN_144a7dea0(&local_c0,&local_d0,&local_88);
        lVar9 = local_c0;
        iVar4 = (int)uStack_b8;
        local_c0 = 0;
        uStack_b8 = 0;
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        uVar11 = local_130;
        if (local_e0 != 0) {
          FUN_1400020a8();
          uVar11 = local_130;
        }
        goto LAB_146ebc4ef;
      }
    }
  }
LAB_146ebc6b2:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar5 = lVar5 + 1;
    lVar9 = lVar9 + -2;
    if (lVar9 == 0) break;
LAB_146ebc69d:
    if (*(short *)(*plVar1 + lVar5 * 2) == 0x5f) {
      if (0 < (int)lVar5) {
        iVar3 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        iVar4 = iVar3 - (int)lVar5;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        FUN_140056680(&local_d0,(*plVar1 + (longlong)iVar3 * 2) - (ulonglong)(uint)(iVar4 * 2));
        FUN_1400b22c2(local_100,L"_Common");
        FUN_140474144(local_110,&local_c0,&local_d0);
        FUN_1401c7f3e(local_f0,local_110,local_100);
        FUN_144a7dea0(&local_e0,local_f0,&local_88);
        lVar9 = local_e0;
        iVar4 = (int)uStack_d8;
        local_e0 = 0;
        uStack_d8 = 0;
        if (local_f0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_110[0] != 0) {
          FUN_1400020a8();
        }
        uVar11 = local_130;
        if (local_100[0] != 0) {
          FUN_1400020a8();
        }
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        goto LAB_146ebc678;
      }
      break;
    }
  }
LAB_146ebc604:
  FUN_1400b22c2(local_f0,L"_Common");
  FUN_1407ec8fc(&local_e0,&local_c0,local_f0);
  FUN_144a7dea0(&local_d0,&local_e0,&local_88);
  lVar9 = local_d0;
  iVar4 = (int)uStack_c8;
  local_d0 = 0;
  uStack_c8 = 0;
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  uVar11 = local_130;
  if (local_f0[0] != 0) {
    FUN_1400020a8();
    uVar11 = local_130;
  }
LAB_146ebc678:
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
LAB_146ebc4ef:
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(local_128 + *(longlong *)(param_3 + 0x10),lVar9,iVar3);
  FUN_146ebc230(uVar11 & 0xffffffff,param_2,param_3,local_131);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  plVar1 = local_120;
  if (lVar9 != 0) {
    FUN_1400020a8(lVar9);
  }
  iVar2 = iVar2 + 1;
  local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
  FUN_1449c0562(&local_a8);
  if (local_b0 == plVar10 && (local_a0 == plVar1 && local_98._4_4_ == uVar7)) goto LAB_146ebc6b2;
  goto LAB_146ebc40b;
}



// FUNCTION 146ebc7ee FUN_146ebc7ee body=314 status=ok
// SIG undefined FUN_146ebc7ee(void)

int FUN_146ebc7ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [48];
  longlong local_c0;
  longlong *local_88;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1406bf76c(local_f0,param_1);
  iVar7 = -1;
  if ((((local_c0 != 0) && (local_88 != (longlong *)0x0)) &&
      (cVar4 = FUN_1429f811a(local_f0), cVar4 != '\0')) &&
     (lVar3 = param_2[1], (longlong)(int)lVar3 != 0)) {
    lVar2 = *param_2;
    iVar7 = -1;
    lVar8 = 0;
    iVar6 = -1;
    do {
      iVar1 = *(int *)(lVar2 + lVar8);
      if ((((longlong)iVar1 < 0) || (local_88 == (longlong *)0x0)) ||
         (iVar5 = (**(code **)(*local_88 + 0x60))(), iVar5 <= iVar1)) {
        FUN_1429f8126(local_f0,iVar1);
      }
      else {
        lVar9 = local_88[2];
        iVar5 = FUN_1429f8126(local_f0,iVar1);
        lVar9 = lVar9 + (longlong)iVar1 * 0x50;
        if (((lVar9 != 0) && (*(int *)(lVar9 + 8) != *(int *)(lVar9 + 0x34))) &&
           (iVar6 == -1 || iVar5 < iVar6)) {
          iVar6 = iVar5;
          iVar7 = iVar1;
        }
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 146ebc92a FUN_146ebc92a body=643 status=ok
// SIG undefined FUN_146ebc92a(void)

void FUN_146ebc92a(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [40];
  longlong *local_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  int local_138 [60];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148 = 0;
  uStack_140 = 0;
  lVar8 = param_3[1];
  local_160 = param_3;
  if ((longlong)(int)lVar8 != 0) {
    lVar11 = *param_3;
    lVar9 = 0;
    do {
      uVar3 = uStack_140;
      iVar7 = *(int *)(lVar11 + lVar9);
      if (iVar7 != param_2) {
        lVar10 = (longlong)(int)uStack_140;
        uVar6 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar6);
        if (uStack_140._4_4_ < uVar6) {
          FUN_1446f48e2(&local_148,uVar3 & 0xffffffff);
        }
        *(int *)(local_148 + lVar10 * 4) = iVar7;
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar8 * 4 != lVar9);
  }
  lVar8 = local_148;
  plVar1 = (longlong *)(param_1 + 0x110);
  if (DAT_14c75f3b2 != param_2) {
    lVar11 = (longlong)(int)uStack_140;
    if (lVar11 != 0) {
      lVar9 = 0;
      do {
        cVar5 = FUN_146ebcbae(param_1,param_2,*(undefined4 *)(lVar8 + lVar9));
        if (cVar5 != '\0') goto LAB_146ebc9cd;
        lVar9 = lVar9 + 4;
      } while (lVar11 * 4 != lVar9);
    }
    local_158 = 0;
    uStack_150 = 0;
    lVar8 = local_160[1];
    if ((longlong)(int)lVar8 != 0) {
      lVar11 = *local_160;
      lVar9 = 0;
      cVar5 = DAT_14c75f3b2;
      do {
        local_138[0] = *(int *)(*(longlong *)(param_1 + 0x120) +
                               (longlong)*(int *)(lVar11 + lVar9) * 4);
        if (local_138[0] != cVar5) {
          FUN_1449e3bb0(&local_158,local_138);
          cVar5 = DAT_14c75f3b2;
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar8 * 4 != lVar9);
    }
    if (param_1 != 0) {
      FUN_146ea7fa0(local_138,param_1);
      FUN_146ea9378(local_138,param_2,&local_148);
    }
    FUN_146ebb8e4(param_1,param_2);
    FUN_146ebc230(param_2,param_1 + 0x130,param_1 + 0xd0,0);
    lVar8 = local_158;
    lVar11 = (longlong)(int)uStack_150;
    if (lVar11 != 0) {
      lVar9 = 0;
      do {
        if (*(int *)(lVar8 + lVar9) != -1) {
          FUN_146ebc230(*(int *)(lVar8 + lVar9),param_1 + 0x130,param_1 + 0xd0,0);
        }
        lVar9 = lVar9 + 4;
      } while (lVar11 * 4 != lVar9);
    }
    if (local_158 != 0) {
      FUN_1400020a8(local_158);
    }
  }
LAB_146ebc9cd:
  iVar7 = (**(code **)(*plVar1 + 0x60))(plVar1);
  if (0 < iVar7) {
    lVar8 = 0;
    bVar2 = false;
    do {
      bVar4 = bVar2;
      if ((*(int *)(*(longlong *)(param_1 + 0x120) + lVar8 * 4) == (int)DAT_14c75f3b2) &&
         (bVar4 = true, bVar2)) {
        FUN_146ebba8c(param_1,0,1);
        break;
      }
      bVar2 = bVar4;
      lVar8 = lVar8 + 1;
      iVar7 = (**(code **)(*plVar1 + 0x60))(plVar1);
    } while (lVar8 < iVar7);
  }
  FUN_146ebba3e(param_1);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ebcbae FUN_146ebcbae body=354 status=ok
// SIG undefined FUN_146ebcbae(void)

ulonglong FUN_146ebcbae(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong *plVar8;
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
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 != param_3) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar6 = (longlong)param_3 * 0x50;
    uVar7 = 0;
    if (*(int *)(lVar2 + 0x34 + lVar6) < *(int *)(lVar2 + 8 + lVar6)) {
      plVar8 = (longlong *)(lVar2 + lVar6);
      plVar1 = plVar8 + 2;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = plVar1;
      if ((int)plVar8[5] != 0) {
        FUN_1449c0562(&local_58);
        uVar7 = (ulonglong)*(uint *)(plVar8 + 5);
      }
      local_68 = local_48;
      uVar3 = local_68;
      local_60 = local_40;
      local_5c = local_3c;
      local_78 = local_58;
      local_70 = local_50;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_80 = plVar8;
      if ((local_68._4_4_ != (int)uVar7) || (local_50 != plVar1)) {
        iVar5 = local_68._4_4_;
        local_68 = uVar3;
        do {
          cVar4 = FUN_146ebcbae(param_1,param_2,*(undefined4 *)(*local_80 + (longlong)iVar5 * 0xc));
          if (cVar4 != '\0') {
            uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
            goto LAB_146ebcc84;
          }
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
          uVar3 = local_68;
        } while (local_80 != plVar8 || (local_70 != plVar1 || local_68._4_4_ != (int)uVar7));
      }
      local_68 = uVar3;
      uVar7 = 0;
    }
  }
LAB_146ebcc84:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ebcd12 FUN_146ebcd12 body=108 status=ok
// SIG undefined FUN_146ebcd12(void)

undefined4 FUN_146ebcd12(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x110);
  iVar3 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x60))(plVar1);
  bVar4 = false;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      bVar2 = bVar4;
      if ((*(int *)(*(longlong *)(param_1 + 0x120) + lVar5 * 4) == (int)DAT_14c75f3b2) &&
         (bVar2 = true, bVar4)) {
        return 1;
      }
      bVar4 = bVar2;
      lVar5 = lVar5 + 1;
      iVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
    } while (lVar5 < iVar3);
  }
  return 0;
}



// FUNCTION 146ebcd7e FUN_146ebcd7e body=944 status=ok
// SIG undefined FUN_146ebcd7e(void)

void FUN_146ebcd7e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_f8 [36];
  int local_d4;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong local_c0;
  int *local_b8;
  longlong local_b0;
  int *local_a8;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  uVar4 = DAT_14c9974a8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446ddc76(&local_70,"Level",1);
  lVar6 = FUN_140b1fc18(param_1,local_70,uVar4);
  piVar7 = (int *)*param_2;
  uVar8 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar11 = piVar7 + *(int *)(param_2 + 1);
    cVar5 = DAT_14c75f3b2;
    local_d0 = param_2;
    local_c8 = param_1;
    local_c0 = lVar6;
    local_b8 = piVar11;
    do {
      iVar1 = *piVar7;
      if (iVar1 != cVar5) {
        iVar2 = *(int *)(param_1[0x24] + (longlong)iVar1 * 4);
        if (iVar2 != cVar5) {
          lVar3 = param_1[0x28];
          lVar10 = (longlong)iVar1 * 0x50;
          lVar6 = lVar3 + lVar10;
          lVar13 = lVar6 + 0x10;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_d4 = iVar2;
          local_a8 = piVar7;
          local_60 = lVar13;
          if (*(int *)(lVar6 + 0x28) != 0) {
            FUN_1449c0562(&local_68);
          }
          plVar9 = (longlong *)(lVar3 + lVar10);
          local_80 = local_58;
          local_78 = local_50;
          local_74 = local_4c;
          uStack_90 = local_68;
          local_88 = local_60;
          uVar12 = *(uint *)(plVar9 + 5);
          local_68 = CONCAT44(1 << ((byte)uVar12 & 0x1f),(int)uVar12 >> 5);
          local_58 = CONCAT44(uVar12,-1 << ((byte)uVar12 & 0x1f));
          local_50 = uVar12 & 0xffffffe0;
          local_b0 = lVar10;
          local_98 = plVar9;
          local_60 = lVar13;
          if (*(uint *)(plVar9 + 5) != uVar12) {
            FUN_1449c0562(&local_68);
            uVar12 = local_58._4_4_;
          }
          lVar3 = local_60;
          lVar6 = local_c0;
          param_1 = local_c8;
          iVar1 = local_d4;
          if ((local_98 != plVar9 || local_88 != local_60) || local_80._4_4_ != uVar12) {
            lVar10 = (longlong)local_d4;
            do {
              local_68 = CONCAT44(local_68._4_4_,
                                  *(undefined4 *)(*local_98 + (longlong)(int)local_80._4_4_ * 0xc));
              FUN_1447cbafe(lVar10 * 0x50 + param_1[0x28],local_9c,&local_68,0);
              piVar7 = (int *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)local_68 * 4);
              *piVar7 = *piVar7 + -1;
              *(int *)(param_1[0x24] + (longlong)(int)local_68 * 4) = iVar1;
              local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
              FUN_1449c0562(&uStack_90);
            } while (local_98 != plVar9 || (local_88 != lVar3 || local_80._4_4_ != uVar12));
          }
          FUN_14068ded2(local_b0 + param_1[0x28],0);
          piVar7 = local_a8;
          piVar11 = local_b8;
          cVar5 = DAT_14c75f3b2;
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar11);
    uVar8 = *(undefined4 *)(local_d0 + 1);
    piVar7 = (int *)*local_d0;
    param_2 = local_d0;
  }
  FUN_144958a06(piVar7,uVar8);
  (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c9974a8,param_2,0x101);
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  FUN_140759cba(param_1,&local_98);
  if ((int)uStack_90 != 0) {
    FUN_146ebc230((int)*local_98,param_1 + 0x26,param_1 + 0x1a,0);
  }
  FUN_146ebba3e(param_1);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebd130 FUN_146ebd130 body=304 status=ok
// SIG undefined FUN_146ebd130(void)

void FUN_146ebd130(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_5c = param_2;
  FUN_1449e3bb0(param_3,&local_5c);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)local_5c * 0x50);
  lVar2 = *(longlong *)(param_1 + 0x10) + (longlong)local_5c * 0x50;
  lVar4 = lVar2 + 0x10;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar4;
  if (*(int *)(lVar2 + 0x28) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)plVar1[5];
  }
  uStack_68 = CONCAT44(uStack_3c,uStack_40);
  local_70 = local_48;
  iStack_6c = iStack_44;
  local_80 = (undefined4)local_58;
  uStack_7c = local_58._4_4_;
  uStack_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  local_88 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar4)) {
    do {
      FUN_146ebd130(param_1,*(undefined4 *)(*local_88 + (longlong)iStack_6c * 0xc),param_3);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebd262 FUN_146ebd262 body=481 status=ok
// SIG undefined FUN_146ebd262(void)

void FUN_146ebd262(longlong param_1,uint param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0 || (int)param_2 < 0) goto LAB_146ebd33d;
  uVar7 = (ulonglong)param_2;
  lVar5 = FUN_140b35e94(param_1,DAT_14c9974c0,DAT_14c9974a8);
  lVar6 = FUN_1401c0c0c(param_1,DAT_14c996a70,DAT_14c9974a8);
  if (lVar6 == 0 || lVar5 == 0) goto LAB_146ebd33d;
  if ((char)param_3 == '\0') {
    lVar5 = *(longlong *)(lVar5 + 0x10);
    iVar3 = *(int *)(lVar5 + 8 + uVar7 * 0x50);
    iVar4 = *(int *)(lVar5 + 0x34 + uVar7 * 0x50);
    if (iVar3 == iVar4) goto LAB_146ebd31e;
  }
  else {
    if (*(int *)(*(longlong *)(lVar6 + 0x10) + uVar7 * 4) == 1) {
LAB_146ebd31e:
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_4,iVar3);
      }
      *(uint *)(*param_4 + (longlong)iVar3 * 4) = param_2;
      goto LAB_146ebd33d;
    }
    lVar5 = *(longlong *)(lVar5 + 0x10);
    iVar3 = *(int *)(lVar5 + 8 + uVar7 * 0x50);
    iVar4 = *(int *)(lVar5 + 0x34 + uVar7 * 0x50);
  }
  if (iVar4 < iVar3) {
    plVar8 = (longlong *)(lVar5 + uVar7 * 0x50);
    plVar1 = plVar8 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)plVar8[5] == 0) {
      iVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar3 = (int)plVar8[5];
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar2 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar4 = local_70._4_4_;
    local_88 = plVar8;
    if ((local_70._4_4_ != iVar3) || (local_70 = local_50, uStack_58 != plVar1)) {
      do {
        local_70 = uVar2;
        FUN_146ebd262(param_1,*(undefined4 *)(*local_88 + (longlong)iVar4 * 0xc),param_3,param_4);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_88 != plVar8 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar3));
    }
  }
LAB_146ebd33d:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ebd444 FUN_146ebd444 body=306 status=ok
// SIG undefined FUN_146ebd444(void)

int FUN_146ebd444(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar2 = DAT_14c9974a8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_40,"Level",1);
  cVar3 = FUN_140498cd4(param_1,local_40,uVar2);
  uVar2 = DAT_14c9974a8;
  iVar4 = -1;
  if (cVar3 != '\0') {
    FUN_1446ddc76(&local_48,"Level",1);
    lVar5 = FUN_140619ac2(param_1,local_48,uVar2);
    if ((param_2 < 0) ||
       (iVar4 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x60))(), iVar4 <= param_2)) {
      iVar4 = (int)DAT_14c75f3b2;
    }
    else {
      do {
        iVar4 = param_2;
        lVar6 = (longlong)iVar4;
        iVar1 = *(int *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 4);
        if ((iVar1 <= param_3) &&
           ((((iVar1 == param_3 || (param_4 == '\0')) ||
             (*(int *)(*(longlong *)(param_1 + 0x1b0) + lVar6 * 4) == 2)) ||
            ((*(int *)(*(longlong *)(param_1 + 0x140) + 8 + lVar6 * 0x50) !=
              *(int *)(*(longlong *)(param_1 + 0x140) + 0x34 + lVar6 * 0x50) &&
             (iVar1 + 1 == param_3)))))) break;
        param_2 = *(int *)(*(longlong *)(param_1 + 0x120) + lVar6 * 4);
      } while (param_2 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146ebd578 FUN_146ebd578 body=306 status=ok
// SIG undefined FUN_146ebd578(void)

void FUN_146ebd578(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
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
  lVar2 = (longlong)param_3 * 0x50;
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + lVar2);
  lVar2 = *(longlong *)(param_2 + 0x10) + lVar2;
  lVar4 = lVar2 + 0x10;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar4;
  if (*(int *)(lVar2 + 0x28) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = (int)plVar1[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar4)) {
    do {
      *(int *)(*(longlong *)(param_1 + 0x10) +
              (longlong)*(int *)(*local_88 + (longlong)iStack_6c * 0xc) * 4) =
           *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)param_3 * 4) + 1;
      FUN_146ebd578(param_1,param_2);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar3));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebd6ac FUN_146ebd6ac body=115 status=ok
// SIG undefined FUN_146ebd6ac(void)

int FUN_146ebd6ac(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar1 == 0) {
    iVar3 = -1;
  }
  else {
    iVar2 = *(int *)*param_2;
    bVar5 = (int)uVar1 < 2;
    if (iVar2 != -1 && !bVar5) {
      uVar4 = 2;
      do {
        iVar2 = FUN_146ebd720(param_1,iVar2,*(undefined4 *)(*param_2 + -4 + uVar4 * 4));
        bVar5 = uVar1 <= uVar4;
        if (bVar5) break;
        uVar4 = uVar4 + 1;
      } while (iVar2 != -1);
    }
    iVar3 = -1;
    if (bVar5) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}



// FUNCTION 146ebd720 FUN_146ebd720 body=332 status=ok
// SIG undefined FUN_146ebd720(void)

int FUN_146ebd720(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar1 = DAT_14c9974a8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446ddc76(&local_40,"Parent",1);
  lVar2 = FUN_146d84614(param_1,local_40,uVar1);
  if (lVar2 == 0) {
    iVar5 = -1;
  }
  else {
    local_58 = (undefined4 *)0x0;
    uStack_50 = 1;
    FUN_1446f48e2(&local_58);
    *local_58 = param_2;
    iVar5 = local_58[(int)uStack_50 + -1];
    if (iVar5 != -1) {
      iVar4 = (int)uStack_50;
      do {
        lVar3 = *(longlong *)(lVar2 + 0x10);
        uStack_50 = CONCAT44(uStack_50._4_4_,iVar4 + 1U);
        if (uStack_50._4_4_ < iVar4 + 1U) {
          FUN_1446f48e2(&local_58,iVar4);
        }
        local_58[iVar4] = *(undefined4 *)(lVar3 + (longlong)iVar5 * 4);
        iVar5 = local_58[(int)uStack_50 + -1];
        iVar4 = (int)uStack_50;
      } while (iVar5 != -1);
    }
    iVar5 = -1;
    if (param_3 != -1) {
      do {
        if ((int)uStack_50 != 0) {
          lVar3 = 0;
          do {
            iVar5 = param_3;
            if (*(int *)((longlong)local_58 + lVar3) == param_3) goto LAB_146ebd83d;
            lVar3 = lVar3 + 4;
          } while ((longlong)(int)uStack_50 * 4 != lVar3);
        }
        param_3 = *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)param_3 * 4);
        iVar5 = -1;
      } while (param_3 != -1);
    }
LAB_146ebd83d:
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 146ebd86e FUN_146ebd86e body=479 status=ok
// SIG undefined FUN_146ebd86e(void)

ulonglong FUN_146ebd86e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_198 [40];
  longlong *local_170;
  longlong *local_168;
  ulonglong local_160;
  longlong local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_168 = param_1 + 0x26;
  local_170 = param_1 + 0x1a;
  local_148 = 0;
  uStack_140 = 0;
  uVar6 = 0;
  iVar3 = 0;
  while( true ) {
    uStack_140 = uStack_140 & 0xffffffff00000000;
    if (iVar3 < 0) {
      FUN_14481578e(&local_148,0);
    }
    lVar1 = param_1[0x19];
    if (0 < (longlong)(int)lVar1) {
      lVar9 = 0;
      lVar5 = 0;
      do {
        uVar2 = uStack_140;
        iVar3 = *(int *)(param_1[0x24] + lVar5 * 4);
        if (((iVar3 != -1) && (*(int *)(param_1[0x36] + lVar5 * 4) == 2)) &&
           (*(int *)(param_1[0x28] + 8 + lVar9) - *(int *)(param_1[0x28] + 0x34 + lVar9) == 1)) {
          lVar8 = (longlong)(int)uStack_140;
          uVar4 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar4);
          local_160 = uVar6;
          if (uStack_140._4_4_ < uVar4) {
            FUN_1446f48e2(&local_148,uVar2 & 0xffffffff);
          }
          *(int *)(local_148 + lVar8 * 4) = (int)lVar5;
          FUN_140619b9c(param_1[0x28] + lVar9,local_158);
          if (param_1 != (longlong *)0x0) {
            FUN_146ea7fa0(local_138,param_1);
            FUN_146ea9378(local_138,iVar3,local_158);
          }
          if (local_158[0] != 0) {
            FUN_1400020a8();
          }
          FUN_146ebb8e4(param_1,iVar3);
          FUN_146ebc230(iVar3,local_168,local_170,0);
          uVar6 = local_160;
        }
        lVar5 = lVar5 + 1;
        lVar9 = lVar9 + 0x50;
      } while ((int)lVar1 != lVar5);
    }
    if ((int)uStack_140 == 0) goto LAB_146ebda0b;
    (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c9974a8,&local_148);
    uVar7 = (undefined7)(uVar6 >> 8);
    if ((int)uStack_140 == 0) break;
    uVar6 = CONCAT71(uVar7,1);
    iVar3 = uStack_140._4_4_;
  }
  uVar6 = CONCAT71(uVar7,1);
LAB_146ebda0b:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffff01;
}



// FUNCTION 146ebda4e FUN_146ebda4e body=280 status=ok
// SIG undefined FUN_146ebda4e(void)

ulonglong FUN_146ebda4e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1[0x19];
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)(int)lVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      if (*(int *)(param_1[0x36] + uVar4 * 4) == 2) {
        local_78 = 0;
        uStack_70 = 0;
        FUN_146ebd262(param_1,uVar4 & 0xffffffff,1,&local_78);
        uVar2 = uStack_60;
        if ((int)uStack_70 == 0) {
          lVar5 = (longlong)(int)uStack_60;
          uVar3 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
          if (uStack_60._4_4_ < uVar3) {
            FUN_1446f48e2(&local_68,uVar2 & 0xffffffff);
          }
          *(int *)(local_68 + lVar5 * 4) = (int)uVar4;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)(int)lVar1 != uVar4);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(int)uStack_60 != 0);
    if ((int)uStack_60 != 0) {
      (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c9974a8,&local_68,0x100);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebdb68 FUN_146ebdb68 body=509 status=ok
// SIG undefined FUN_146ebdb68(void)

undefined1 * FUN_146ebdb68(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  *param_2 = 1;
  *(undefined8 *)(param_2 + 4) = 0x412000003f000000;
  *(undefined8 *)(param_2 + 0xc) = 0x13f000000;
  *(undefined4 *)(param_2 + 0x14) = 0;
  plVar2 = (longlong *)FUN_140619ac2(*(undefined8 *)(param_1 + 8),DAT_14c996b68,DAT_14c996b60);
  if ((longlong)(int)plVar2[3] == 0) {
    return param_2;
  }
  lVar9 = 0;
  while (*(int *)(plVar2[2] + lVar9) != -1) {
    lVar9 = lVar9 + 4;
    if ((longlong)(int)plVar2[3] * 4 == lVar9) {
      return param_2;
    }
  }
  lVar9 = FUN_146eb1f4e(*(undefined8 *)(param_1 + 8),DAT_14c996b70,DAT_14c996b60);
  lVar3 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b78,DAT_14c996b60);
  lVar4 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b80,DAT_14c996b60);
  lVar5 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b88,DAT_14c996b60);
  lVar6 = FUN_140619ac2(*(undefined8 *)(param_1 + 8),DAT_14c996b90,DAT_14c996b60);
  lVar7 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b98,DAT_14c996b60);
  if ((longlong)(int)plVar2[3] == 0) {
    return param_2;
  }
  iVar1 = 0;
  uVar11 = 0;
  while (*(int *)(plVar2[2] + uVar11) != -1) {
    uVar11 = uVar11 + 4;
    iVar1 = iVar1 + -1;
    if ((longlong)(int)plVar2[3] * 4 == uVar11) {
      return param_2;
    }
  }
  uVar10 = -iVar1;
  if ((int)uVar10 < 0) {
    return param_2;
  }
  iVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (iVar1 <= (int)uVar10) {
    return param_2;
  }
  lVar8 = lVar9 + 0x10;
  if (*(longlong *)(lVar9 + 0x20) != 0) {
    lVar8 = *(longlong *)(lVar9 + 0x20);
  }
  *param_2 = (*(uint *)(lVar8 + (ulonglong)((uint)(uVar11 >> 7) & 0x7ffffff) * 4) >> (uVar10 & 0x1f)
             & 1) != 0;
  lVar9 = (ulonglong)(uVar10 & 0x7fffffff) * 4;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + lVar9);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + lVar9);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + lVar9);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + lVar9);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + lVar9);
  return param_2;
}



// FUNCTION 146ebdd7e FUN_146ebdd7e body=411 status=ok
// SIG undefined FUN_146ebdd7e(void)

longlong FUN_146ebdd7e(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  FUN_146ebdb68();
  plVar2 = (longlong *)FUN_140619ac2(*(undefined8 *)(param_1 + 8),DAT_14c996b68,DAT_14c996b60);
  if ((longlong)(int)plVar2[3] != 0) {
    iVar1 = 0;
    uVar11 = 0;
    do {
      if (*(int *)(plVar2[2] + uVar11) == param_3) {
        uVar9 = -iVar1;
        if ((int)uVar9 < 0) {
          return param_2;
        }
        iVar1 = (**(code **)(*plVar2 + 0x60))(plVar2);
        if (iVar1 <= (int)uVar9) {
          return param_2;
        }
        lVar3 = FUN_146eb1f4e(*(undefined8 *)(param_1 + 8),DAT_14c996b70,DAT_14c996b60);
        lVar4 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b78,DAT_14c996b60);
        lVar5 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b80,DAT_14c996b60);
        lVar6 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b88,DAT_14c996b60);
        lVar7 = FUN_140619ac2(*(undefined8 *)(param_1 + 8),DAT_14c996b90,DAT_14c996b60);
        lVar8 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996b98,DAT_14c996b60);
        lVar10 = lVar3 + 0x10;
        if (*(longlong *)(lVar3 + 0x20) != 0) {
          lVar10 = *(longlong *)(lVar3 + 0x20);
        }
        *(bool *)param_2 =
             (*(uint *)(lVar10 + (ulonglong)((uint)(uVar11 >> 7) & 0x7ffffff) * 4) >> (uVar9 & 0x1f)
             & 1) != 0;
        lVar10 = (ulonglong)(uVar9 & 0x7fffffff) * 4;
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + lVar10);
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + lVar10);
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + lVar10);
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + lVar10);
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + lVar10);
        return param_2;
      }
      uVar11 = uVar11 + 4;
      iVar1 = iVar1 + -1;
    } while ((longlong)(int)plVar2[3] * 4 != uVar11);
  }
  return param_2;
}



// FUNCTION 146ebdf1a FUN_146ebdf1a body=230 status=ok
// SIG undefined FUN_146ebdf1a(void)

undefined8 * FUN_146ebdf1a(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar3 = DAT_14c9974a8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"TransformToConvexIndices",1);
  cVar1 = FUN_140498cd4(param_2,local_30,uVar3);
  if (cVar1 != '\0') {
    cVar1 = FUN_140498cd4(param_2,DAT_14c9974d0,DAT_14c9974c8);
    uVar3 = DAT_14c9974a8;
    if (cVar1 != '\0') {
      FUN_1446ddc76(&local_38,"TransformToConvexIndices",1);
      uVar3 = FUN_146eb57a6(param_2,local_38,uVar3);
      uVar4 = FUN_140dffbf6(param_2,DAT_14c9974d0,DAT_14c9974c8);
      *param_1 = uVar3;
      param_1[1] = uVar4;
      uVar2 = 1;
      goto LAB_146ebdf87;
    }
  }
  uVar2 = 0;
LAB_146ebdf87:
  *(undefined1 *)(param_1 + 2) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebe002 FUN_146ebe002 body=132 status=ok
// SIG undefined FUN_146ebe002(void)

undefined8 FUN_146ebe002(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  uVar2 = DAT_14c9974a8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"TransformToConvexIndices",1);
  cVar1 = FUN_140498cd4(param_1,local_28,uVar2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140498cd4(param_1,DAT_14c9974d0,DAT_14c9974c8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebe088 FUN_146ebe088 body=417 status=ok
// SIG undefined FUN_146ebe088(void)

void FUN_146ebe088(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined2 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar1 = (uint)((ulonglong)DAT_14c9974c8 >> 0x10);
    uVar5 = (uint)DAT_14c9974c8 & 0xffff;
    lVar4 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x98);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)DAT_14c9974c8 >> 0x20) +
                             ((uint)DAT_14c9974c8 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 0x14) == DAT_14c9974c8)
        goto LAB_146ebe0c1;
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 0x14 + 0xc);
      } while (iVar6 != -1);
    }
  }
  FUN_140b203e2(param_1);
LAB_146ebe0c1:
  uVar2 = DAT_14c9974a8;
  FUN_1446ddc76(&local_30,"TransformToConvexIndices",1);
  cVar3 = FUN_140498cd4(param_1,local_30,uVar2);
  uVar2 = DAT_14c9974a8;
  if (cVar3 == '\0') {
    local_40 = DAT_14c9974c8;
    local_38 = 1;
    FUN_1446ddc76(&local_48,"TransformToConvexIndices",1);
    FUN_146eb114a(param_1,local_48,uVar2,&local_40);
  }
  cVar3 = FUN_140498cd4(param_1,DAT_14c9974d0,DAT_14c9974c8);
  if (cVar3 == '\0') {
    local_58 = 0;
    local_50 = 1;
    FUN_140dff3f6(param_1,DAT_14c9974d0,DAT_14c9974c8);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ebe22a FUN_146ebe22a body=1262 status=ok
// SIG undefined FUN_146ebe22a(void)

undefined8 *
FUN_146ebe22a(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             double param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_298 [40];
  undefined4 local_270;
  undefined8 *local_268;
  undefined8 *local_258;
  longlong local_250;
  undefined1 *local_248;
  longlong **local_240;
  longlong *local_238;
  undefined1 local_229;
  longlong local_228;
  longlong *local_220;
  longlong local_218;
  undefined1 *local_210;
  undefined1 **local_208;
  longlong *local_200;
  double *local_1f8;
  LPCRITICAL_SECTION local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  undefined4 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  longlong *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  double local_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  code *local_148;
  longlong **local_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128 [2];
  longlong *local_118 [2];
  longlong local_108 [5];
  _RTL_CRITICAL_SECTION local_e0;
  undefined1 local_b8 [24];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar22 = 0x9999999a;
  uVar23 = 0x4058f999;
  if (param_5 <= 99.9) {
    uVar22 = SUB84(param_5,0);
    uVar23 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = CONCAT44(uVar23,uVar22);
  local_228 = FUN_146ebe71a(param_2);
  local_238 = &local_228;
  local_240 = (longlong **)&local_229;
  if (local_228 != 0) {
    local_240 = &local_238;
  }
  puVar15 = &LAB_142a08600;
  if (local_228 == 0) {
    puVar15 = &LAB_142a08616;
  }
  local_128[0] = *param_6;
  local_118[0] = (longlong *)0x0;
  if (local_128[0] != 0) {
    plVar13 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_6[2];
    }
    (**(code **)*plVar13)(plVar13,local_118);
  }
  local_258 = param_1 + 5;
  local_250 = param_2 + 0x1a0;
  local_150 = param_9;
  local_158 = param_8;
  local_160 = param_7;
  local_168 = CONCAT44(uVar23,uVar22);
  local_174 = 1;
  local_188 = 0;
  uStack_180 = 0;
  local_248 = puVar15;
  local_170 = param_4;
  FUN_146ebdf1a(local_b8,param_2);
  FUN_14051b394(&local_188,*(undefined4 *)(param_2 + 0x238),1);
  if (0 < (int)uStack_180) {
    lVar11 = 4;
    lVar12 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x230);
      lVar5 = *param_3;
      lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x2d0) + lVar12 * 4) * 0x60;
      pdVar1 = (double *)(lVar5 + 0x40 + lVar14);
      dVar17 = (double)*(float *)(lVar4 + -8 + lVar11 * 2) * *pdVar1;
      dVar18 = (double)*(float *)(lVar4 + -4 + lVar11 * 2) * pdVar1[1];
      dVar16 = (double)*(float *)(lVar4 + lVar11 * 2) * *(double *)(lVar5 + 0x50 + lVar14);
      dVar8 = *(double *)(lVar5 + lVar14);
      dVar9 = ((double *)(lVar5 + lVar14))[1];
      dVar10 = *(double *)(lVar5 + 0x10 + lVar14);
      pdVar1 = (double *)(lVar5 + 0x18 + lVar14);
      dVar3 = *pdVar1;
      dVar19 = dVar18 * dVar8 - dVar17 * dVar9;
      dVar20 = dVar16 * dVar9 - dVar18 * dVar10;
      dVar21 = dVar17 * dVar10 - dVar8 * dVar16;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar19 = dVar19 + dVar19;
      pdVar2 = (double *)(lVar5 + 0x20 + lVar14);
      dVar7 = (dVar10 * dVar20 - dVar8 * dVar19) + *pdVar1 * dVar21 + dVar18 + pdVar2[1];
      dVar18 = *(double *)(lVar5 + 0x30 + lVar14);
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = (dVar19 * dVar9 - dVar21 * dVar10) + dVar3 * dVar20 + dVar17 + *pdVar2;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(local_188 + -0x10 + lVar11 * 4) = auVar6;
      *(double *)(local_188 + lVar11 * 4) =
           dVar19 * dVar3 + dVar16 + (dVar21 * dVar8 - dVar20 * dVar9) + dVar18;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 6;
    } while (lVar12 < (int)uStack_180);
  }
  local_190 = (double)CONCAT44(uVar23,uVar22) / -100.0 + 1.0;
  uVar22 = *(undefined4 *)(param_2 + 0x198);
  FUN_140c7a828(param_1 + 2,uVar22,1);
  InitializeCriticalSection(&local_e0);
  SetCriticalSectionSpinCount(&local_e0,4000);
  local_220 = local_128;
  local_140 = &local_220;
  local_210 = local_b8;
  local_208 = &local_248;
  local_1e0 = local_258;
  local_1d0 = local_250;
  local_1c8 = &local_174;
  local_1c0 = &local_158;
  local_1b8 = &local_150;
  local_1b0 = &local_188;
  local_1a8 = &local_170;
  local_1a0 = &local_168;
  local_198 = &local_160;
  local_268 = &local_138;
  local_138 = 0;
  local_130 = 0;
  local_148 = FUN_142a02280;
  local_270 = 0;
  local_218 = param_2;
  local_200 = param_3;
  local_1f8 = &local_190;
  local_1f0 = &local_e0;
  local_1e8 = param_1;
  local_1d8 = param_1 + 2;
  FUN_1401f8d10(L"ParallelFor Task",uVar22,1);
  DeleteCriticalSection(&local_e0);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_128[0] != 0) {
    plVar13 = local_118[0];
    if (local_118[0] == (longlong *)0x0) {
      plVar13 = local_108;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (*param_6 != 0) {
    plVar13 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_a0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebe71a FUN_146ebe71a body=157 status=ok
// SIG undefined FUN_146ebe71a(void)

undefined8 FUN_146ebe71a(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  uVar2 = DAT_14c9974a8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_28,"HasCustomConvex",1);
  cVar1 = FUN_140498cd4(param_1,local_28,uVar2);
  uVar2 = DAT_14c9974a8;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_1446ddc76(&local_30,"HasCustomConvex",1);
    uVar2 = FUN_140b1fc18(param_1,local_30,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ebe7b8 FUN_146ebe7b8 body=84 status=ok
// SIG undefined FUN_146ebe7b8(void)

void FUN_146ebe7b8(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140f35b7a(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef3f6(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ebe80c FUN_146ebe80c body=11205 status=ok
// SIG undefined FUN_146ebe80c(void)

longlong *
FUN_146ebe80c(longlong *param_1,longlong param_2,double param_3,_LIST_ENTRY *param_4,
             undefined8 param_5,int param_6,_LIST_ENTRY **param_7,
             _RTL_CRITICAL_SECTION_DEBUG *param_8)

{
  DWORD *pDVar1;
  double dVar2;
  _LIST_ENTRY *p_Var3;
  double dVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  HANDLE pvVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int *piVar16;
  _LIST_ENTRY **pp_Var17;
  DWORD DVar18;
  int iVar19;
  longlong lVar20;
  int *piVar21;
  void *_Src;
  _LIST_ENTRY *p_Var22;
  undefined8 *puVar23;
  bool bVar24;
  int iVar25;
  longlong lVar26;
  undefined8 *puVar27;
  DWORD **ppDVar28;
  undefined4 *puVar29;
  uint uVar30;
  _RTL_CRITICAL_SECTION_DEBUG *p_Var31;
  _LIST_ENTRY *p_Var32;
  uint *puVar33;
  byte bVar34;
  DWORD DVar35;
  _RTL_CRITICAL_SECTION_DEBUG *p_Var36;
  _RTL_CRITICAL_SECTION *p_Var37;
  longlong lVar38;
  ulonglong uVar39;
  code *pcVar40;
  _RTL_CRITICAL_SECTION_DEBUG *p_Var41;
  ulonglong uVar42;
  uint *puVar43;
  longlong lVar44;
  bool bVar45;
  undefined1 auStack_858 [32];
  _LIST_ENTRY **local_838;
  int *local_830;
  _LIST_ENTRY *local_828;
  _LIST_ENTRY **pp_Stack_820;
  undefined8 *local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  _LIST_ENTRY *local_800;
  undefined8 local_7f8;
  _RTL_CRITICAL_SECTION_DEBUG *local_7e8;
  longlong local_7e0;
  _RTL_CRITICAL_SECTION_DEBUG *local_7d8;
  _RTL_CRITICAL_SECTION_DEBUG *local_7d0;
  _LIST_ENTRY *local_7c8;
  _RTL_CRITICAL_SECTION_DEBUG *local_7c0;
  _RTL_CRITICAL_SECTION_DEBUG *local_7b8;
  _LIST_ENTRY *local_7b0;
  int local_7a4;
  _RTL_CRITICAL_SECTION_DEBUG *local_7a0;
  DWORD *local_798;
  _LIST_ENTRY *local_790;
  _LIST_ENTRY *local_788;
  int local_77c;
  uint local_778;
  int local_774;
  longlong local_770;
  longlong local_768;
  longlong local_760;
  _LIST_ENTRY *local_758;
  longlong *local_750;
  uint *local_748;
  uint *local_740;
  _LIST_ENTRY *local_738;
  longlong local_730;
  undefined8 local_728;
  code *local_720;
  _RTL_CRITICAL_SECTION *local_718;
  _LIST_ENTRY *local_710;
  _LIST_ENTRY *local_708;
  longlong local_700;
  undefined1 local_6f8 [24];
  undefined8 uStack_6e0;
  _LIST_ENTRY *local_6d0;
  undefined8 uStack_6c8;
  _LIST_ENTRY local_6b8;
  undefined1 local_6a8 [16];
  longlong local_698;
  _LIST_ENTRY *local_690;
  undefined8 uStack_688;
  _RTL_CRITICAL_SECTION_DEBUG *local_680;
  undefined8 local_678;
  undefined4 local_670;
  undefined4 local_66c;
  _LIST_ENTRY local_668;
  _RTL_CRITICAL_SECTION_DEBUG *local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined4 local_644;
  _LIST_ENTRY local_640;
  _RTL_CRITICAL_SECTION_DEBUG *local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 local_61c;
  longlong local_618;
  undefined8 uStack_610;
  longlong local_608;
  ulonglong uStack_600;
  undefined1 local_5f8 [40];
  DWORD local_5d0;
  longlong local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8 [24];
  _LIST_ENTRY *p_Stack_5a0;
  _RTL_CRITICAL_SECTION_DEBUG *local_598;
  _RTL_CRITICAL_SECTION_DEBUG *local_590;
  _RTL_CRITICAL_SECTION_DEBUG **local_588;
  _RTL_CRITICAL_SECTION_DEBUG *local_580;
  longlong local_578;
  ulonglong uStack_570;
  _RTL_CRITICAL_SECTION_DEBUG *local_560;
  _LIST_ENTRY *local_558;
  int local_550;
  _LIST_ENTRY *local_548;
  _LIST_ENTRY *local_540;
  undefined8 local_538;
  DWORD *local_530;
  int local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  _LIST_ENTRY *local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  _LIST_ENTRY *local_4d8;
  undefined8 uStack_4d0;
  longlong local_4c8;
  ulonglong uStack_4c0;
  _LIST_ENTRY local_4b8;
  undefined8 local_4a8;
  undefined8 local_4a0;
  _LIST_ENTRY *p_Stack_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  _LIST_ENTRY *local_448;
  _LIST_ENTRY *p_Stack_440;
  undefined8 local_438;
  _LIST_ENTRY *local_430;
  _LIST_ENTRY *p_Stack_428;
  undefined8 local_420;
  _LIST_ENTRY local_418;
  _RTL_CRITICAL_SECTION_DEBUG *p_Stack_408;
  _LIST_ENTRY *local_400;
  DWORD local_3f8;
  DWORD DStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3b0 [8];
  _LIST_ENTRY local_3a8;
  undefined8 local_398;
  int local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined1 local_350 [8];
  _LIST_ENTRY local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 local_298 [2];
  undefined8 local_288;
  undefined1 local_258 [32];
  _LIST_ENTRY *local_238;
  DWORD DStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int local_224;
  _LIST_ENTRY *local_220;
  _LIST_ENTRY **local_218;
  int local_210;
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  _LIST_ENTRY *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  _LIST_ENTRY local_178 [2];
  undefined1 local_158 [32];
  _RTL_CRITICAL_SECTION_DEBUG **local_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  int iStack_124;
  DWORD *pDStack_120;
  DWORD **local_118;
  _LIST_ENTRY **pp_Stack_110;
  _LIST_ENTRY **local_108;
  undefined8 *local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  _LIST_ENTRY local_c8 [2];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_858;
  local_698 = FUN_146ebe71a(param_2);
  local_6a8._0_8_ = &local_698;
  p_Var37 = (_RTL_CRITICAL_SECTION *)(local_6a8 + 0xf);
  if (local_698 != 0) {
    p_Var37 = (_RTL_CRITICAL_SECTION *)local_6a8;
  }
  pcVar40 = (code *)&LAB_142a0861a;
  if (local_698 == 0) {
    pcVar40 = FUN_142a08630;
  }
  local_7c0 = (_RTL_CRITICAL_SECTION_DEBUG *)(param_2 + 0x110);
  local_6b8.Flink = (_LIST_ENTRY *)0x0;
  local_6b8.Blink = (_LIST_ENTRY *)0x0;
  FUN_146eb7819(param_2 + 0xb0);
  local_6f8._16_8_ = 0;
  uStack_6e0 = 0;
  local_6f8._0_8_ = (_LIST_ENTRY *)0x0;
  local_6f8._8_8_ = (_LIST_ENTRY *)0x0;
  local_6d0 = (_LIST_ENTRY *)0x0;
  uStack_6c8 = 0;
  local_750 = param_1;
  if (param_8 == (_RTL_CRITICAL_SECTION_DEBUG *)0x0) {
    local_798 = (DWORD *)&local_6d0;
    p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)(local_6f8 + 0x10);
    local_830 = (int *)local_298;
    local_298[0] = 0;
    local_288 = 0;
    local_818 = (undefined8 *)0x0;
    local_828 = (_LIST_ENTRY *)0x0;
    pp_Stack_820 = (_LIST_ENTRY **)0x0;
    local_838 = param_7;
    FUN_146ebe22a(local_158,param_2,&local_6b8);
    param_8 = (_RTL_CRITICAL_SECTION_DEBUG *)local_6f8;
    FUN_146ec13d4(param_8,local_158);
    FUN_146ebe7b8(local_158);
  }
  else {
    p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)&param_8->ProcessLocksList;
    local_798 = &param_8->Flags;
  }
  local_700 = param_2;
  FUN_146eca9e2(&local_700,param_8);
  FUN_146ec1438(param_2);
  uVar5 = DAT_14c996af0;
  FUN_1446ddc76(&local_708,"Proximity",1);
  plVar15 = (longlong *)FUN_146eb1500(param_2,local_708,uVar5);
  uVar5 = DAT_14c9974a8;
  FUN_1446ddc76(&local_710,"Volume",1);
  local_548 = (_LIST_ENTRY *)FUN_146eac244(param_2,local_710,uVar5);
  pDVar1 = *(DWORD **)&param_8->EntryCount;
  local_7c8 = (_LIST_ENTRY *)(param_2 + 0x1a0);
  local_530 = pDVar1;
  local_538 = param_5;
  local_540 = param_4;
  local_7d0 = (_RTL_CRITICAL_SECTION_DEBUG *)(ulonglong)*(uint *)&p_Var31->CriticalSection;
  local_550 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_7e8 = param_8;
  local_7e0 = param_2;
  local_7b8 = p_Var31;
  local_720 = pcVar40;
  local_718 = p_Var37;
  local_560 = p_Var31;
  local_558 = local_7c8;
  FUN_140c7a828(&local_578,local_7d0,1);
  if ((plVar15 != (longlong *)0x0) && (iVar12 = (**(code **)(*plVar15 + 0x60))(plVar15), 0 < iVar12)
     ) {
    lVar38 = 0;
    do {
      iVar12 = *(int *)(*(longlong *)(local_7e0 + 0x3b0) + lVar38 * 4);
      lVar26 = plVar15[2];
      lVar20 = lVar26 + lVar38 * 0x50;
      p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)(lVar20 + 0x10);
      local_208 = (undefined1  [8])&DAT_100000000;
      uStack_1f8 = (_RTL_CRITICAL_SECTION_DEBUG *)&DAT_ffffffff;
      local_1f0 = (_LIST_ENTRY *)((ulonglong)local_1f0 & 0xffffffff00000000);
      local_200 = (code *)p_Var31;
      if (*(int *)(lVar20 + 0x28) != 0) {
        FUN_1449c0562(local_208);
      }
      p_Var41 = (_RTL_CRITICAL_SECTION_DEBUG *)(lVar26 + lVar38 * 0x50);
      local_158._24_8_ = uStack_1f8;
      local_138 = (_RTL_CRITICAL_SECTION_DEBUG **)local_1f0;
      local_158._8_8_ = local_208;
      local_158._16_8_ = local_200;
      DVar35 = p_Var41->Flags;
      local_208._4_4_ = 1 << ((byte)DVar35 & 0x1f);
      local_208._0_4_ = (int)DVar35 >> 5;
      uStack_1f8 = (_RTL_CRITICAL_SECTION_DEBUG *)CONCAT44(DVar35,-1 << ((byte)DVar35 & 0x1f));
      local_1f0 = (_LIST_ENTRY *)(CONCAT44(local_1f0._4_4_,DVar35) & 0xffffffffffffffe0);
      local_200 = (code *)p_Var31;
      local_158._0_8_ = p_Var41;
      if (p_Var41->Flags != DVar35) {
        FUN_1449c0562(local_208);
        DVar35 = uStack_1f8._4_4_;
      }
      p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)local_200;
      while (((local_158._28_4_ != DVar35 ||
              ((_RTL_CRITICAL_SECTION_DEBUG *)local_158._16_8_ != p_Var31)) ||
             ((_RTL_CRITICAL_SECTION_DEBUG *)local_158._0_8_ != p_Var41))) {
        FUN_1447cbafe((longlong)iVar12 * 0x50 + local_578,local_208,
                      (longlong)
                      *(int *)(*(longlong *)local_158._0_8_ + (longlong)(int)local_158._28_4_ * 0xc)
                      * 4 + *(longlong *)(local_7e0 + 0x3b0),0);
        local_158._24_4_ = local_158._24_4_ & ~local_158._12_4_;
        FUN_1449c0562(local_158 + 8);
      }
      lVar38 = lVar38 + 1;
      iVar12 = (**(code **)(*plVar15 + 0x60))(plVar15);
    } while (lVar38 < iVar12);
  }
  p_Var41 = local_7d0;
  p_Var31 = local_7e8;
  dVar4 = (double)pDVar1 / -100.0 + 1.0;
  local_588 = &local_580;
  local_580 = local_7e8;
  local_598 = local_7b8;
  local_590 = local_7e8;
  local_5b8._16_8_ = (_LIST_ENTRY *)0x0;
  p_Stack_5a0 = (_LIST_ENTRY *)0x0;
  local_5b8._0_8_ = 0;
  local_5b8._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
  iVar19 = (int)local_7d0;
  FUN_140bfc200(local_5b8,(ulonglong)local_7d0 & 0xffffffff,1);
  FUN_144a8c360(local_5b8 + 0x10,(ulonglong)p_Var41 & 0xffffffff,1);
  iVar12 = 0;
  if (0 < iVar19) {
    p_Var36 = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
    iVar12 = 0;
    do {
      if (*(int *)(*(longlong *)(local_7e0 + 0x1b0) + (longlong)p_Var36 * 4) == 0) {
LAB_146ebed6b:
        *(undefined4 *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ + (longlong)p_Var36 * 4) =
             0xffffffff;
      }
      else {
        lVar38 = *(longlong *)(local_7e0 + 0x120);
        lVar20 = (longlong)*(int *)(lVar38 + (longlong)p_Var36 * 4);
        if (lVar20 != -1) {
          if (*(int *)(*(longlong *)(local_7e0 + 0x1b0) + lVar20 * 4) == 1) goto LAB_146ebed6b;
          lVar20 = lVar20 * 0x10;
          plVar15 = (longlong *)(local_5b8._0_8_ + lVar20);
          iVar19 = *(int *)(local_5b8._0_8_ + 8 + lVar20);
          *(uint *)(local_5b8._0_8_ + 8 + lVar20) = iVar19 + 1U;
          if (*(uint *)(local_5b8._0_8_ + 0xc + lVar20) < iVar19 + 1U) {
            FUN_1446f48e2(plVar15,iVar19);
          }
          *(int *)(*plVar15 + (longlong)iVar19 * 4) = (int)p_Var36;
          lVar38 = *(longlong *)(local_7e0 + 0x120);
          p_Var31 = local_7e8;
        }
        iVar19 = -1;
        uVar39 = (ulonglong)p_Var36 & 0xffffffff;
        do {
          uVar30 = *(uint *)(lVar38 + (longlong)(int)uVar39 * 4);
          uVar39 = (ulonglong)uVar30;
          iVar19 = iVar19 + 1;
        } while (uVar30 != 0xffffffff);
        if (iVar12 <= iVar19) {
          iVar12 = iVar19;
        }
        *(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ + (longlong)p_Var36 * 4) = iVar19;
        if (param_6 == 1) {
          local_158._0_4_ = (int)p_Var36;
          cVar9 = (*local_720)(local_718,local_158);
          lVar38 = local_578;
          if ((cVar9 == '\0') &&
             (p_Var32 = (p_Var31->ProcessLocksList).Flink,
             *(int *)((longlong)&p_Var32[(longlong)p_Var36 * 5 + 3].Flink + 4) <
             *(int *)&p_Var32[(longlong)p_Var36 * 5].Blink)) {
            lVar20 = local_578 + (longlong)p_Var36 * 0x50;
            p_Var41 = (_RTL_CRITICAL_SECTION_DEBUG *)(lVar20 + 0x10);
            local_158._0_8_ = (_LIST_ENTRY *)0x100000000;
            local_158._16_8_ = &DAT_ffffffff;
            local_158._24_8_ = local_158._24_8_ & 0xffffffff00000000;
            local_158._8_8_ = p_Var41;
            if (*(int *)(lVar20 + 0x28) != 0) {
              FUN_1449c0562(local_158);
            }
            p_Var32 = (_LIST_ENTRY *)(lVar38 + (longlong)p_Var36 * 0x50);
            local_4a0 = (_LIST_ENTRY *)local_158._16_8_;
            p_Stack_498 = (_LIST_ENTRY *)local_158._24_8_;
            local_4b8.Blink = (_LIST_ENTRY *)local_158._0_8_;
            local_4a8 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
            local_158._20_4_ = *(undefined4 *)&p_Var32[2].Blink;
            local_158._4_4_ = 1 << ((byte)local_158._20_4_ & 0x1f);
            local_158._0_4_ = (int)local_158._20_4_ >> 5;
            local_158._16_4_ = -1 << ((byte)local_158._20_4_ & 0x1f);
            local_158._24_8_ = CONCAT44(local_158._28_4_,local_158._20_4_) & 0xffffffffffffffe0;
            iVar19 = local_158._20_4_;
            local_4b8.Flink = p_Var32;
            local_158._8_8_ = p_Var41;
            if (*(int *)&p_Var32[2].Blink != local_158._20_4_) {
              FUN_1449c0562(local_158);
              iVar19 = local_158._20_4_;
            }
            uVar5 = local_158._8_8_;
            p_Var41 = local_7d0;
            if ((local_4b8.Flink != p_Var32 ||
                local_4a8 != (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_) ||
                local_4a0._4_4_ != iVar19) {
              do {
                iVar13 = *(int *)((longlong)&(local_4b8.Flink)->Flink->Flink +
                                 (longlong)local_4a0._4_4_ * 0xc);
                lVar38 = (longlong)iVar13;
                local_158._0_4_ = iVar13;
                cVar9 = (*local_720)(local_718,local_158);
                if (((cVar9 == '\0') && (lVar38 < (longlong)p_Var36)) &&
                   (p_Var22 = (p_Var31->ProcessLocksList).Flink,
                   *(int *)((longlong)&p_Var22[lVar38 * 5 + 3].Flink + 4) <
                   *(int *)&p_Var22[lVar38 * 5].Blink)) {
                  iVar13 = FUN_142a04620(&local_560,iVar13);
                  iVar25 = FUN_142a04620(&local_560,(ulonglong)p_Var36 & 0xffffffff);
                  p_Var22 = *(_LIST_ENTRY **)p_Var31;
                  if ((*(int *)&(&p_Var22->Flink)[iVar25][3].Blink != 0) &&
                     (p_Var41 = (_RTL_CRITICAL_SECTION_DEBUG *)(longlong)iVar13,
                     *(int *)&(&p_Var22->Flink)[(longlong)p_Var41][3].Blink != 0)) {
                    puVar23 = &DAT_14c846480;
                    puVar27 = (undefined8 *)local_208;
                    for (lVar38 = 0xc; lVar38 != 0; lVar38 = lVar38 + -1) {
                      *puVar27 = *puVar23;
                      puVar23 = puVar23 + 1;
                      puVar27 = puVar27 + 1;
                    }
                    local_418.Flink = (_LIST_ENTRY *)&DAT_3ff0000000000000;
                    local_418.Blink = (_LIST_ENTRY *)0x0;
                    p_Stack_408 = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
                    local_158._0_8_ = (&p_Var22->Flink)[(longlong)p_Var41];
                    local_348.Flink = (&p_Var22->Flink)[iVar25];
                    local_158._8_8_ = FUN_14172543a;
                    local_158._16_8_ =
                         (((_RTL_CRITICAL_SECTION_DEBUG *)local_158._0_8_)->ProcessLocksList).Flink;
                    local_348.Blink = (_LIST_ENTRY *)FUN_14172543a;
                    local_338 = (_RTL_CRITICAL_SECTION_DEBUG *)local_348.Flink[1].Flink;
                    local_7f8 = 0x3f50624de0000000;
                    local_800 = &local_418;
                    local_810 = 0;
                    uStack_808 = 0;
                    local_818 = &local_468;
                    pp_Stack_820 = &local_448;
                    local_828 = &local_640;
                    local_830 = &local_528;
                    local_838 = (_LIST_ENTRY **)&local_4f8;
                    cVar9 = FUN_14068570a(&local_348,local_158,local_208,&local_430);
                    p_Var31 = local_7e8;
                    if (cVar9 != '\0') {
                      local_5f8._16_8_ = local_640.Flink;
                      local_5f8._24_8_ = local_640.Blink;
                      local_5f8._32_8_ = local_630;
                      local_368 = (_LIST_ENTRY *)CONCAT44(uStack_524,local_528);
                      uStack_360 = CONCAT44(uStack_51c,uStack_520);
                      local_358 = CONCAT44(uStack_514,local_518);
                      local_388 = (int)local_4f8;
                      uStack_384 = local_4f8._4_4_;
                      uStack_380 = uStack_4f0;
                      uStack_37c = uStack_4ec;
                      local_378 = CONCAT44(uStack_4e4,local_4e8);
                      p_Var22 = *(_LIST_ENTRY **)local_7e8;
                      pp_Stack_820 = &local_690;
                      local_828 = &local_668;
                      local_838 = (_LIST_ENTRY **)(local_5f8 + 0x10);
                      local_830 = (int *)((ulonglong)local_830 & 0xffffffffffffff00);
                      local_7d8 = p_Var41;
                      cVar9 = FUN_142a04ec4((&p_Var22->Flink)[iVar25],
                                            (&p_Var22->Flink)[(longlong)p_Var41],&local_388,
                                            &local_368);
                      p_Var31 = local_7e8;
                      if (cVar9 != '\0') {
                        local_338 = local_658;
                        local_348.Flink = local_668.Flink;
                        local_348.Blink = local_668.Blink;
                        uStack_320 = local_680;
                        p_Var31 = uStack_320;
                        uStack_330 = local_690;
                        uStack_328 = uStack_688;
                        p_Var3 = uStack_328;
                        local_3a8.Flink = (_LIST_ENTRY *)0x0;
                        local_3a8.Blink = (_LIST_ENTRY *)0x0;
                        uStack_328._0_4_ = (DWORD)uStack_688;
                        uStack_328._4_4_ = (DWORD)((ulonglong)uStack_688 >> 0x20);
                        uStack_320._0_4_ = SUB84(local_680,0);
                        uStack_320._4_4_ = (undefined4)((ulonglong)local_680 >> 0x20);
                        local_418.Flink = local_668.Flink;
                        local_418.Blink = local_668.Blink;
                        p_Stack_408 = local_658;
                        local_400 = local_690;
                        local_3f8 = (DWORD)uStack_328;
                        DStack_3f4 = uStack_328._4_4_;
                        uStack_3f0 = (undefined4)uStack_320;
                        uStack_3ec = uStack_320._4_4_;
                        uStack_328 = p_Var3;
                        uStack_320 = p_Var31;
                        cVar9 = FUN_142a051af((&p_Var22->Flink)[iVar25],&local_418,1,&local_3a8);
                        p_Var31 = local_7e8;
                        if (cVar9 != '\0') {
                          FUN_142a0571e(local_158,&local_3a8,(double)local_540 * dVar4);
                          FUN_146d834a8((&(*(_LIST_ENTRY **)p_Var31)->Flink)[iVar25],local_158);
                          FUN_146d835c4(local_158);
                        }
                        bVar45 = (longlong)local_3a8.Blink < 0;
                        local_3a8.Blink =
                             (_LIST_ENTRY *)((ulonglong)local_3a8.Blink & 0xffffffff00000000);
                        if (bVar45) {
                          FUN_140163800(&local_3a8,0);
                        }
                        p_Var41 = local_7d8;
                        local_238 = uStack_328;
                        DStack_230 = (DWORD)uStack_320;
                        uStack_22c = (undefined4)((ulonglong)uStack_320 >> 0x20);
                        local_258._16_4_ = (undefined4)local_338;
                        local_258._20_4_ = local_338._4_4_;
                        local_258._24_4_ = (undefined4)uStack_330;
                        local_258._28_4_ = uStack_330._4_4_;
                        local_258._0_8_ = local_348.Flink;
                        local_258._8_8_ = local_348.Blink;
                        cVar9 = FUN_142a051af((&(*(_LIST_ENTRY **)p_Var31)->Flink)
                                              [(longlong)local_7d8],local_258,0,&local_3a8);
                        if (cVar9 != '\0') {
                          FUN_142a0571e(local_158,&local_3a8,(double)local_540 * dVar4);
                          FUN_146d834a8((&(*(_LIST_ENTRY **)p_Var31)->Flink)[(longlong)p_Var41],
                                        local_158);
                          FUN_146d835c4(local_158);
                        }
                        p_Var31 = local_7e8;
                        if (local_3a8.Flink != (_LIST_ENTRY *)0x0) {
                          FUN_1400020a8();
                          p_Var31 = local_7e8;
                        }
                      }
                    }
                  }
                }
                local_4a0 = (_LIST_ENTRY *)
                            CONCAT44(local_4a0._4_4_,(uint)local_4a0 & ~local_4b8.Blink._4_4_);
                FUN_1449c0562(&local_4b8.Blink);
                p_Var41 = local_7d0;
              } while (local_4b8.Flink != p_Var32 ||
                       (local_4a8 != (_RTL_CRITICAL_SECTION_DEBUG *)uVar5 ||
                       local_4a0._4_4_ != iVar19));
            }
          }
        }
      }
      p_Var36 = (_RTL_CRITICAL_SECTION_DEBUG *)((longlong)&p_Var36->Type + 1);
    } while (p_Var36 != p_Var41);
  }
  local_5c8 = 0;
  uStack_5c0 = 0;
  uVar30 = (uint)p_Var41;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(p_Var41);
  }
  if (p_Var41 != (_RTL_CRITICAL_SECTION_DEBUG *)0x0) {
    FUN_14481578e(&local_5c8,(ulonglong)p_Var41 & 0xffffffff);
  }
  if (-1 < iVar12) {
    uVar39 = 1;
    if (1 < uVar30) {
      uVar39 = (ulonglong)p_Var41 & 0xffffffff;
    }
    do {
      if (p_Var41 != (_RTL_CRITICAL_SECTION_DEBUG *)0x0) {
        uVar42 = 0;
        do {
          uVar6 = uStack_5c0;
          if (*(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ + uVar42 * 4) == iVar12) {
            lVar38 = (longlong)(int)uStack_5c0;
            uVar14 = (int)uStack_5c0 + 1;
            uStack_5c0 = CONCAT44(uStack_5c0._4_4_,uVar14);
            if (uStack_5c0._4_4_ < uVar14) {
              FUN_1446f48e2(&local_5c8,uVar6 & 0xffffffff);
            }
            *(int *)(local_5c8 + lVar38 * 4) = (int)uVar42;
          }
          uVar42 = uVar42 + 1;
        } while (uVar39 != uVar42);
      }
      bVar45 = 0 < iVar12;
      iVar12 = iVar12 + -1;
    } while (bVar45);
  }
  local_5f8._16_8_ = local_5b8;
  local_5f8._24_8_ = local_7b8;
  local_5f8._32_8_ = local_7c8;
  local_5d0 = 1;
  local_5f8._0_8_ = 0;
  local_5f8._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
  if (param_6 == 0) {
    local_608 = 0;
    uStack_600 = 0;
  }
  else {
    FUN_140c7a828(local_5f8,(ulonglong)p_Var41 & 0xffffffff,1);
    p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
    if (p_Var41 != (_RTL_CRITICAL_SECTION_DEBUG *)0x0) {
      local_7b0 = (_LIST_ENTRY *)&DAT_00000001;
      if (1 < (int)uVar30) {
        local_7b0 = (_LIST_ENTRY *)((ulonglong)p_Var41 & 0xffffffff);
      }
      p_Var32 = (_LIST_ENTRY *)0x0;
      lVar38 = local_7e0;
      do {
        lVar26 = local_578;
        lVar20 = local_578 + (longlong)p_Var32 * 0x50;
        p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)(lVar20 + 0x10);
        local_158._0_8_ = &DAT_100000000;
        local_158._16_8_ = &DAT_ffffffff;
        local_158._24_8_ = local_158._24_8_ & 0xffffffff00000000;
        local_158._8_8_ = p_Var31;
        if (*(int *)(lVar20 + 0x28) != 0) {
          FUN_1449c0562(local_158);
        }
        p_Var41 = (_RTL_CRITICAL_SECTION_DEBUG *)(lVar26 + (longlong)p_Var32 * 0x50);
        local_1f0 = (_LIST_ENTRY *)local_158._16_8_;
        local_1e8 = (_LIST_ENTRY *)local_158._24_8_;
        local_200 = (code *)local_158._0_8_;
        uStack_1f8 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
        local_208 = (undefined1  [8])p_Var41;
        local_158._20_4_ = p_Var41->Flags;
        local_158._4_4_ = 1 << ((byte)local_158._20_4_ & 0x1f);
        local_158._0_4_ = (int)local_158._20_4_ >> 5;
        local_158._16_4_ = -1 << ((byte)local_158._20_4_ & 0x1f);
        local_158._24_8_ = CONCAT44(local_158._28_4_,local_158._20_4_) & 0xffffffffffffffe0;
        DVar35 = local_158._20_4_;
        local_158._8_8_ = p_Var31;
        if (p_Var41->Flags != local_158._20_4_) {
          FUN_1449c0562(local_158);
          DVar35 = local_158._20_4_;
        }
        uVar5 = local_158._8_8_;
        p_Var31 = p_Var41;
        p_Var22 = p_Var32;
        if ((local_208 != (undefined1  [8])p_Var41 ||
            uStack_1f8 != (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_) ||
            local_1f0._4_4_ != DVar35) {
          do {
            local_7c8 = p_Var22;
            local_7d8 = p_Var31;
            iVar12 = *(int *)(*(longlong *)local_208 + (longlong)(int)local_1f0._4_4_ * 0xc);
            lVar20 = (longlong)iVar12;
            if ((longlong)p_Var32 <= lVar20) {
              lVar26 = *(longlong *)(lVar38 + 0x120);
              uVar14 = *(uint *)(lVar26 + (longlong)p_Var32 * 4);
              local_348.Flink = (_LIST_ENTRY *)CONCAT44(local_348.Flink._4_4_,uVar14);
              uVar30 = *(uint *)(lVar26 + lVar20 * 4);
              if (uVar14 != uVar30) {
                local_138 = (_RTL_CRITICAL_SECTION_DEBUG **)0x0;
                uStack_130._0_4_ = 0;
                local_158._0_8_ = (_LIST_ENTRY *)0x0;
                local_158._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
                uStack_130._4_2_ = 0x80;
                uStack_130._6_2_ = 0;
                uStack_128 = 0xffffffff;
                iStack_124 = 0;
                local_118 = (DWORD **)0x0;
                pp_Stack_110 = (_LIST_ENTRY **)((ulonglong)pp_Stack_110 & 0xffffffff00000000);
                p_Var32 = local_7c8;
                while (local_7c8 = p_Var32, uVar14 != 0xffffffff) {
                  FUN_1447cbafe(local_158,&local_418,&local_348,0);
                  lVar26 = *(longlong *)(lVar38 + 0x120);
                  uVar14 = *(uint *)(lVar26 + (longlong)(int)local_348.Flink * 4);
                  local_348.Flink = (_LIST_ENTRY *)CONCAT44(local_348.Flink._4_4_,uVar14);
                  p_Var32 = local_7c8;
                }
                uVar14 = 0xffffffff;
                if (uVar30 != 0xffffffff) {
                  ppDVar28 = local_118;
                  if (local_118 == (DWORD **)0x0) {
                    ppDVar28 = &pDStack_120;
                  }
                  do {
                    lVar38 = local_7e0;
                    if (local_158._8_4_ != iStack_124) {
                      for (iVar19 = *(int *)((longlong)ppDVar28 +
                                            (ulonglong)(uVar30 & (int)pp_Stack_110 - 1U) * 4);
                          iVar19 != -1;
                          iVar19 = *(int *)((longlong)&((_LIST_ENTRY *)local_158._0_8_)->Flink +
                                           (longlong)iVar19 * 0xc + 4)) {
                        uVar14 = uVar30;
                        if (*(uint *)((longlong)&((_LIST_ENTRY *)local_158._0_8_)->Flink +
                                     (longlong)iVar19 * 0xc) == uVar30) goto LAB_146ebf81a;
                      }
                    }
                    uVar30 = *(uint *)(lVar26 + (longlong)(int)uVar30 * 4);
                    uVar14 = 0xffffffff;
                  } while (uVar30 != 0xffffffff);
                }
LAB_146ebf81a:
                pp_Stack_110 = (_LIST_ENTRY **)((ulonglong)pp_Stack_110 & 0xffffffff00000000);
                if (local_118 != (DWORD **)0x0) {
                  FUN_1400020a8();
                }
                FUN_1447a082e(local_158);
                lVar26 = *(longlong *)(lVar38 + 0x120);
              }
              local_158._0_8_ = local_5f8;
              local_158._8_8_ = local_7c0;
              local_158._16_4_ = uVar14;
              local_158._24_8_ = local_5b8 + 0x10;
              FUN_142a046da(local_158,(ulonglong)p_Var32 & 0xffffffff,
                            *(undefined4 *)(lVar26 + lVar20 * 4));
              for (uVar30 = *(uint *)(*(longlong *)(lVar38 + 0x120) + (longlong)p_Var32 * 4);
                  (p_Var41 = local_7d8, uVar30 != 0xffffffff && (uVar30 != uVar14));
                  uVar30 = *(uint *)(*(longlong *)(lVar38 + 0x120) + (longlong)(int)uVar30 * 4)) {
                FUN_142a046da(local_158,uVar30,iVar12);
              }
            }
            local_1f0 = (_LIST_ENTRY *)CONCAT44(local_1f0._4_4_,(uint)local_1f0 & ~local_200._4_4_);
            FUN_1449c0562(&local_200);
            p_Var31 = local_7d8;
            p_Var22 = local_7c8;
          } while (local_208 != (undefined1  [8])p_Var41 ||
                   (uStack_1f8 != (_RTL_CRITICAL_SECTION_DEBUG *)uVar5 || local_1f0._4_4_ != DVar35)
                  );
        }
        p_Var32 = (_LIST_ENTRY *)((longlong)&p_Var32->Flink + 1);
        p_Var31 = local_7d0;
      } while (p_Var32 != local_7b0);
    }
    local_608 = 0;
    uStack_600 = 0;
    FUN_140c7a828(&local_608,(ulonglong)p_Var31 & 0xffffffff,1);
  }
  local_768 = local_5c8;
  local_770 = (longlong)(int)uStack_5c0;
  if (0 < local_770) {
    iVar12 = 0;
    do {
      InitializeCriticalSection((LPCRITICAL_SECTION)local_208);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)local_208,4000);
      lVar20 = (longlong)iVar12;
      lVar38 = lVar20;
      iVar13 = iVar12;
      iVar19 = iVar12 + 1;
      if (iVar12 + 1 < (int)uStack_5c0) {
        iVar19 = (int)uStack_5c0;
      }
      do {
        lVar38 = lVar38 + 1;
        iVar25 = iVar19;
        if ((int)uStack_5c0 <= lVar38) break;
        iVar25 = iVar13 + 1;
        iVar13 = iVar25;
      } while (*(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ +
                       (longlong)*(int *)(local_5c8 + lVar38 * 4) * 4) ==
               *(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ +
                       (longlong)*(int *)(local_5c8 + lVar20 * 4) * 4));
      local_258._0_8_ = local_768 + lVar20 * 4;
      local_258._8_4_ = iVar25 - iVar12;
      local_158._0_8_ = local_258;
      local_158._8_8_ = &local_558;
      local_158._16_8_ = local_7b8;
      local_158._24_8_ = &local_720;
      local_138 = (_RTL_CRITICAL_SECTION_DEBUG **)(local_5f8 + 0x10);
      uStack_130 = (longlong *)local_208;
      uStack_128 = SUB84(local_7e8,0);
      iStack_124 = (int)((ulonglong)local_7e8 >> 0x20);
      pDStack_120 = local_798;
      local_118 = &local_530;
      pp_Stack_110 = &local_540;
      local_108 = &local_548;
      local_100 = &local_538;
      local_348.Flink = (_LIST_ENTRY *)0x0;
      local_348.Blink = (_LIST_ENTRY *)((ulonglong)local_348.Blink & 0xffffffff00000000);
      local_418.Flink = (_LIST_ENTRY *)FUN_142a06750;
      local_418.Blink = (_LIST_ENTRY *)local_158;
      local_828 = &local_348;
      local_830 = (int *)((ulonglong)local_830 & 0xffffffff00000000);
      FUN_1401f8d10(L"ParallelFor Task",iVar25 - iVar12,1,&local_418);
      iVar12 = iVar25;
      if (param_6 != 0) {
        if ((longlong)(int)local_258._8_4_ != 0) {
          p_Var32 = (_LIST_ENTRY *)
                    ((longlong)(_LIST_ENTRY **)local_258._0_8_ + (longlong)(int)local_258._8_4_ * 4)
          ;
          local_7b0 = (_LIST_ENTRY *)CONCAT44(local_7b0._4_4_,iVar25);
          p_Var22 = (_LIST_ENTRY *)local_258._0_8_;
          local_790 = p_Var32;
          do {
            uVar5 = local_5f8._0_8_;
            lVar38 = (longlong)*(int *)&p_Var22->Flink;
            local_418.Flink = (_LIST_ENTRY *)CONCAT44(local_418.Flink._4_4_,*(int *)&p_Var22->Flink)
            ;
            if ((*(int *)((longlong)&(local_558[1].Flink)->Flink + lVar38 * 4) != local_550) &&
               (p_Var3 = (local_7e8->ProcessLocksList).Flink,
               *(int *)&p_Var3[lVar38 * 5].Blink !=
               *(int *)((longlong)&p_Var3[lVar38 * 5 + 3].Flink + 4))) {
              lVar20 = local_5f8._0_8_ + lVar38 * 0x50;
              p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)(lVar20 + 0x10);
              local_348.Flink = (_LIST_ENTRY *)&DAT_100000000;
              local_338 = (_RTL_CRITICAL_SECTION_DEBUG *)&DAT_ffffffff;
              uStack_330 = (_LIST_ENTRY *)((ulonglong)uStack_330 & 0xffffffff00000000);
              local_788 = p_Var22;
              local_348.Blink = (_LIST_ENTRY *)p_Var31;
              if (*(int *)(lVar20 + 0x28) != 0) {
                FUN_1449c0562(&local_348);
              }
              p_Var41 = (_RTL_CRITICAL_SECTION_DEBUG *)(uVar5 + lVar38 * 0x50);
              local_158._24_8_ = local_338;
              local_138 = (_RTL_CRITICAL_SECTION_DEBUG **)uStack_330;
              local_158._8_8_ = local_348.Flink;
              local_158._16_8_ = local_348.Blink;
              DVar35 = p_Var41->Flags;
              local_348.Flink = (_LIST_ENTRY *)CONCAT44(1 << ((byte)DVar35 & 0x1f),(int)DVar35 >> 5)
              ;
              local_338 = (_RTL_CRITICAL_SECTION_DEBUG *)
                          CONCAT44(DVar35,-1 << ((byte)DVar35 & 0x1f));
              uStack_330 = (_LIST_ENTRY *)(CONCAT44(uStack_330._4_4_,DVar35) & 0xffffffffffffffe0);
              local_348.Blink = (_LIST_ENTRY *)p_Var31;
              local_158._0_8_ = p_Var41;
              if (p_Var41->Flags != DVar35) {
                FUN_1449c0562(&local_348);
                DVar35 = local_338._4_4_;
              }
              local_7c8 = (_LIST_ENTRY *)CONCAT44(local_7c8._4_4_,DVar35);
              p_Var31 = (_RTL_CRITICAL_SECTION_DEBUG *)local_348.Blink;
              DVar18 = local_158._28_4_;
              local_7d8 = p_Var41;
              local_7c0 = (_RTL_CRITICAL_SECTION_DEBUG *)local_348.Blink;
              if (local_158._28_4_ == DVar35) goto LAB_146ebffae;
              do {
                do {
                  iVar12 = *(int *)(*(longlong *)local_158._0_8_ + (longlong)(int)DVar18 * 0xc);
                  local_4b8.Flink = (_LIST_ENTRY *)CONCAT44(local_4b8.Flink._4_4_,iVar12);
                  if (iVar12 < (int)local_418.Flink) {
                    cVar9 = FUN_142a047e2(&local_598);
                    if (cVar9 != '\0') {
                      local_4f8._0_4_ = (int)local_418.Flink;
                      local_528 = (int)local_4b8.Flink;
                      piVar16 = (int *)&local_4f8;
                      piVar21 = &local_528;
                      bVar45 = true;
                      do {
                        bVar24 = bVar45;
                        local_640.Flink = (_LIST_ENTRY *)CONCAT44(local_640.Flink._4_4_,*piVar21);
                        local_348.Flink = (_LIST_ENTRY *)0x0;
                        local_348.Blink = (_LIST_ENTRY *)0x0;
                        uVar30 = *(uint *)(local_5b8._0_8_ + 8 + (longlong)*piVar16 * 0x10);
                        lVar38 = (longlong)(int)uVar30;
                        if (lVar38 != 0) {
                          puVar23 = (undefined8 *)(local_5b8._0_8_ + (longlong)*piVar16 * 0x10);
                          local_348.Blink = (_LIST_ENTRY *)(ulonglong)uVar30;
                          FUN_1446f48e2(&local_348,0);
                          _Src = (void *)*puVar23;
                          p_Var32 = local_348.Flink;
                          do {
                            memcpy(p_Var32,_Src,lVar38 << 2);
                            do {
                              do {
                                if ((int)local_348.Blink < 1) goto LAB_146ebfeca;
                                uVar39 = (ulonglong)local_348.Blink & 0xffffffff;
                                local_348.Blink =
                                     (_LIST_ENTRY *)
                                     CONCAT44(local_348.Blink._4_4_,(int)local_348.Blink + -1);
                                local_668.Flink =
                                     (_LIST_ENTRY *)
                                     CONCAT44(local_668.Flink._4_4_,
                                              *(undefined4 *)
                                               ((longlong)local_348.Flink + uVar39 * 4 + -4));
                                cVar9 = FUN_142a047e2(&local_598);
                              } while (cVar9 == '\0');
                              FUN_1447cbafe((longlong)(int)local_640.Flink * 0x50 + local_608,
                                            &local_690,&local_668,0);
                              FUN_1447cbafe((longlong)(int)local_668.Flink * 0x50 + local_608,
                                            &local_690,&local_640);
                              p_Var32 = local_348.Blink;
                              uVar5 = local_5b8._0_8_;
                              lVar20 = (longlong)(int)local_668.Flink;
                              uVar30 = *(uint *)(local_5b8._0_8_ + 8 + lVar20 * 0x10);
                              lVar38 = (longlong)(int)uVar30;
                            } while (lVar38 == 0);
                            iVar12 = (int)local_348.Blink;
                            lVar26 = (longlong)(int)local_348.Blink;
                            local_348.Blink =
                                 (_LIST_ENTRY *)
                                 CONCAT44(local_348.Blink._4_4_,(int)local_348.Blink + uVar30);
                            if ((uint)(local_348.Blink._4_4_ - iVar12) < uVar30) {
                              FUN_1446f48e2(&local_348,(ulonglong)p_Var32 & 0xffffffff);
                            }
                            _Src = *(void **)(uVar5 + lVar20 * 0x10);
                            p_Var32 = (_LIST_ENTRY *)
                                      ((longlong)&(local_348.Flink)->Flink + lVar26 * 4);
                          } while( true );
                        }
LAB_146ebfeca:
                        if (local_348.Flink != (_LIST_ENTRY *)0x0) {
                          FUN_1400020a8();
                        }
                        piVar16 = &local_528;
                        piVar21 = (int *)&local_4f8;
                        bVar45 = false;
                      } while (bVar24);
                      FUN_1447cbafe((longlong)(int)local_418.Flink * 0x50 + local_608,&local_348,
                                    &local_4b8,0);
                      FUN_1447cbafe((longlong)(int)local_4b8.Flink * 0x50 + local_608,&local_348,
                                    &local_418);
                      p_Var31 = local_7c0;
                      p_Var41 = local_7d8;
                      DVar35 = (DWORD)local_7c8;
                      iVar25 = (int)local_7b0;
                    }
                  }
                  local_158._24_4_ = local_158._24_4_ & ~local_158._12_4_;
                  FUN_1449c0562(local_158 + 8);
                  DVar18 = local_158._28_4_;
                } while (local_158._28_4_ != DVar35);
LAB_146ebffae:
              } while (((_RTL_CRITICAL_SECTION_DEBUG *)local_158._16_8_ != p_Var31) ||
                      (p_Var22 = local_788, p_Var32 = local_790,
                      (_RTL_CRITICAL_SECTION_DEBUG *)local_158._0_8_ != p_Var41));
            }
            p_Var22 = (_LIST_ENTRY *)((longlong)&p_Var22->Flink + 4);
            iVar12 = iVar25;
          } while (p_Var22 != p_Var32);
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)local_208);
    } while (iVar12 < (int)uStack_5c0);
  }
  p_Var41 = local_7b8;
  p_Var31 = local_7e8;
  if (param_6 != 0) {
    local_618 = 0;
    uStack_610 = 0;
    FUN_146be4e92(&local_618,*(undefined4 *)&local_7e8->CriticalSection);
    local_158._0_8_ = &local_720;
    local_348.Blink = (_LIST_ENTRY *)local_158;
    local_158._8_8_ = local_5b8;
    local_158._16_8_ = &local_558;
    local_158._24_8_ = p_Var41;
    local_138 = &local_560;
    uStack_128 = SUB84(p_Var31,0);
    iStack_124 = (int)((ulonglong)p_Var31 >> 0x20);
    local_828 = (_LIST_ENTRY *)local_208;
    local_208 = (undefined1  [8])0x0;
    local_200 = (code *)((ulonglong)local_200 & 0xffffffff00000000);
    local_348.Flink = (_LIST_ENTRY *)FUN_142a06f38;
    local_830 = (int *)((ulonglong)local_830 & 0xffffffff00000000);
    uStack_130 = &local_618;
    FUN_1401f8d10(L"ParallelFor Task",local_7d0,1);
    if (0 < (int)local_770) {
      local_790 = local_c8;
      local_788 = local_178;
      iVar12 = 0;
      lVar38 = local_770;
      do {
        lVar20 = (longlong)iVar12;
        puVar43 = (uint *)(local_768 + lVar20 * 4);
        iVar19 = iVar12;
        iVar13 = iVar12 + 1;
        if (iVar12 + 1 < (int)lVar38) {
          iVar13 = (int)lVar38;
        }
        do {
          lVar20 = lVar20 + 1;
          iVar25 = iVar13;
          if (lVar38 <= lVar20) break;
          iVar25 = iVar19 + 1;
          iVar19 = iVar25;
        } while (*(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ +
                         (longlong)*(int *)(local_768 + lVar20 * 4) * 4) ==
                 *(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ + (longlong)(int)*puVar43 * 4))
        ;
        local_238 = (_LIST_ENTRY *)0x0;
        DStack_230 = 0;
        local_258._0_8_ = (_LIST_ENTRY *)0x0;
        local_258._8_8_ = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
        uStack_22c._0_2_ = 0x80;
        uStack_22c._2_2_ = 0;
        uStack_228 = 0xffffffff;
        local_224 = 0;
        local_218 = (_LIST_ENTRY **)0x0;
        local_210 = 0;
        iVar19 = iVar25 - iVar12;
        iVar12 = iVar25;
        if (iVar19 != 0) {
          puVar33 = puVar43 + iVar19;
          local_77c = iVar25;
          local_748 = puVar33;
          do {
            uVar30 = *puVar43;
            p_Var36 = (_RTL_CRITICAL_SECTION_DEBUG *)(longlong)(int)uVar30;
            local_158._0_4_ = uVar30;
            cVar9 = (*local_720)(local_718,local_158);
            lVar20 = local_608;
            if (((cVar9 == '\0') && (*(int *)(local_5b8._0_8_ + 8 + (longlong)p_Var36 * 0x10) != 0))
               && (p_Var32 = (p_Var31->ProcessLocksList).Flink, lVar26 = (longlong)p_Var36 * 0x50,
                  local_760 = lVar26,
                  *(int *)&p_Var32[(longlong)p_Var36 * 5].Blink !=
                  *(int *)((longlong)&p_Var32[(longlong)p_Var36 * 5 + 3].Flink + 4))) {
              if (local_258._8_4_ != local_224) {
                pp_Var17 = local_218;
                if (local_218 == (_LIST_ENTRY **)0x0) {
                  pp_Var17 = &local_220;
                }
                for (iVar12 = *(int *)((longlong)pp_Var17 + (ulonglong)(local_210 - 1U & uVar30) * 4
                                      ); iVar12 != -1;
                    iVar12 = *(int *)((longlong)(_LIST_ENTRY **)local_258._0_8_ +
                                     (longlong)iVar12 * 0xc + 4)) {
                  if (*(uint *)((longlong)(_LIST_ENTRY **)local_258._0_8_ + (longlong)iVar12 * 0xc)
                      == uVar30) goto LAB_146ec057e;
                }
              }
              local_7a0 = (_RTL_CRITICAL_SECTION_DEBUG *)(local_608 + lVar26 + 0x10);
              local_158._0_8_ = (_LIST_ENTRY *)0x100000000;
              local_158._16_8_ = &DAT_ffffffff;
              local_158._24_8_ = local_158._24_8_ & 0xffffffff00000000;
              local_158._8_8_ = local_7a0;
              if (*(int *)(local_608 + lVar26 + 0x28) != 0) {
                FUN_1449c0562(local_158);
              }
              local_758 = (_LIST_ENTRY *)(lVar20 + lVar26);
              local_628 = (_LIST_ENTRY *)local_158._16_8_;
              local_620 = local_158._24_4_;
              local_61c = local_158._28_4_;
              local_640.Blink = (_LIST_ENTRY *)local_158._0_8_;
              local_630 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
              local_640.Flink = local_758;
              local_158._20_4_ = *(undefined4 *)&local_758[2].Blink;
              local_158._4_4_ = 1 << ((byte)local_158._20_4_ & 0x1f);
              local_158._0_4_ = (int)local_158._20_4_ >> 5;
              local_158._8_8_ = local_7a0;
              local_158._16_4_ = -1 << ((byte)local_158._20_4_ & 0x1f);
              local_158._24_8_ = CONCAT44(local_158._28_4_,local_158._20_4_) & 0xffffffffffffffe0;
              iVar12 = local_158._20_4_;
              local_740 = puVar43;
              if (*(int *)&local_758[2].Blink != local_158._20_4_) {
                FUN_1449c0562(local_158);
                iVar12 = local_158._20_4_;
              }
              iVar19 = local_628._4_4_;
              local_7c0 = p_Var36;
              local_7a4 = iVar12;
              local_7a0 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
              if (local_628._4_4_ == iVar12) goto LAB_146ec1280;
              do {
                do {
                  uVar30 = *(uint *)((longlong)&(local_640.Flink)->Flink->Flink +
                                    (longlong)iVar19 * 0xc);
                  if (local_258._8_4_ != local_224) {
                    pp_Var17 = local_218;
                    if (local_218 == (_LIST_ENTRY **)0x0) {
                      pp_Var17 = &local_220;
                    }
                    for (iVar19 = *(int *)((longlong)pp_Var17 +
                                          (ulonglong)(local_210 - 1U & uVar30) * 4); iVar19 != -1;
                        iVar19 = *(int *)((longlong)(_LIST_ENTRY **)local_258._0_8_ +
                                         (longlong)iVar19 * 0xc + 4)) {
                      if (*(uint *)((longlong)(_LIST_ENTRY **)local_258._0_8_ +
                                   (longlong)iVar19 * 0xc) == uVar30) goto LAB_146ec1255;
                    }
                  }
                  lVar20 = (longlong)(int)uVar30;
                  p_Var32 = (p_Var31->ProcessLocksList).Flink;
                  lVar38 = lVar20 * 0x50;
                  if (*(int *)&p_Var32[lVar20 * 5].Blink !=
                      *(int *)((longlong)&p_Var32[lVar20 * 5 + 3].Flink + 4)) {
                    local_158._0_4_ = uVar30;
                    local_778 = uVar30;
                    uVar11 = (*local_720)(local_718,local_158);
                    local_7b0 = (_LIST_ENTRY *)CONCAT71(local_7b0._1_7_,uVar11);
                    if (((*(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ +
                                  (longlong)p_Var36 * 4) <=
                          *(int *)((longlong)(_LIST_ENTRY **)local_5b8._16_8_ + lVar20 * 4)) ||
                        (*(int *)(local_5b8._0_8_ + 8 + lVar20 * 0x10) < 1)) &&
                       ((param_6 != 3 || (*(int *)(local_5b8._0_8_ + 8 + lVar20 * 0x10) != 0)))) {
                      p_Var32 = (p_Var31->ProcessLocksList).Flink;
                      local_7d0 = (_RTL_CRITICAL_SECTION_DEBUG *)
                                  ((longlong)&p_Var32[1].Flink + lVar26);
                      local_158._0_8_ = &DAT_100000000;
                      local_158._16_8_ = &DAT_ffffffff;
                      local_158._24_8_ = local_158._24_8_ & 0xffffffff00000000;
                      local_158._8_8_ = local_7d0;
                      if (*(int *)((longlong)&p_Var32[2].Blink + lVar26) != 0) {
                        FUN_1449c0562(local_158);
                      }
                      p_Var32 = (_LIST_ENTRY *)((longlong)&p_Var32->Flink + lVar26);
                      local_650 = (_LIST_ENTRY *)local_158._16_8_;
                      local_648 = local_158._24_4_;
                      local_644 = local_158._28_4_;
                      local_668.Blink = (_LIST_ENTRY *)local_158._0_8_;
                      local_658 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
                      local_158._20_4_ = *(undefined4 *)&p_Var32[2].Blink;
                      local_158._4_4_ = 1 << ((byte)local_158._20_4_ & 0x1f);
                      local_158._0_4_ = (int)local_158._20_4_ >> 5;
                      local_158._8_8_ = local_7d0;
                      local_158._16_4_ = -1 << ((byte)local_158._20_4_ & 0x1f);
                      local_158._24_8_ =
                           CONCAT44(local_158._28_4_,local_158._20_4_) & 0xffffffffffffffe0;
                      iVar19 = local_158._20_4_;
                      local_668.Flink = p_Var32;
                      if (*(int *)&p_Var32[2].Blink != local_158._20_4_) {
                        FUN_1449c0562(local_158);
                        iVar19 = local_158._20_4_;
                      }
                      local_7d0 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
                      if (((local_650._4_4_ != iVar19) ||
                          (local_658 != (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_)) ||
                         (lVar26 = local_760, local_668.Flink != p_Var32)) {
                        do {
                          local_730 = lVar38;
                          local_738 = p_Var32;
                          local_774 = iVar19;
                          lVar38 = local_730;
                          iVar12 = *(int *)((longlong)&(local_668.Flink)->Flink->Flink +
                                           (longlong)local_650._4_4_ * 0xc);
                          lVar26 = (longlong)iVar12;
                          p_Var32 = (p_Var31->ProcessLocksList).Flink;
                          local_7d8 = (_RTL_CRITICAL_SECTION_DEBUG *)
                                      ((longlong)&p_Var32[1].Flink + local_730);
                          local_158._0_8_ = (_LIST_ENTRY *)0x100000000;
                          local_158._16_8_ = &DAT_ffffffff;
                          local_158._24_8_ = local_158._24_8_ & 0xffffffff00000000;
                          local_158._8_8_ = local_7d8;
                          if (*(int *)&(local_7d8->ProcessLocksList).Blink != 0) {
                            FUN_1449c0562(local_158);
                          }
                          local_7c8 = (_LIST_ENTRY *)((longlong)&p_Var32->Flink + lVar38);
                          local_678 = (_LIST_ENTRY *)local_158._16_8_;
                          local_670 = local_158._24_4_;
                          local_66c = local_158._28_4_;
                          uStack_688 = (_LIST_ENTRY *)local_158._0_8_;
                          local_680 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
                          local_158._20_4_ = *(undefined4 *)&local_7c8[2].Blink;
                          local_158._4_4_ = 1 << ((byte)local_158._20_4_ & 0x1f);
                          local_158._0_4_ = (int)local_158._20_4_ >> 5;
                          local_158._8_8_ = local_7d8;
                          local_158._16_4_ = -1 << ((byte)local_158._20_4_ & 0x1f);
                          local_158._24_8_ =
                               CONCAT44(local_158._28_4_,local_158._20_4_) & 0xffffffffffffffe0;
                          iVar19 = local_158._20_4_;
                          local_690 = local_7c8;
                          if (*(int *)&local_7c8[2].Blink != local_158._20_4_) {
                            FUN_1449c0562(local_158);
                            iVar19 = local_158._20_4_;
                          }
                          p_Var41 = local_7e8;
                          local_7d8 = (_RTL_CRITICAL_SECTION_DEBUG *)local_158._8_8_;
                          while (((local_7e8 = p_Var41, local_678._4_4_ != iVar19 ||
                                  (local_680 != local_7d8)) || (local_690 != local_7c8))) {
                            bVar34 = 1;
                            if (*(int *)((longlong)&((_LIST_ENTRY *)local_5b8._16_8_)->Flink +
                                        (longlong)p_Var36 * 4) ==
                                *(int *)((longlong)&((_LIST_ENTRY *)local_5b8._16_8_)->Flink +
                                        lVar20 * 4)) {
                              bVar34 = *(int *)(local_5b8._0_8_ + 8 + lVar20 * 0x10) == 0 |
                                       (byte)local_7b0;
                            }
                            iVar13 = *(int *)((longlong)&local_690->Flink->Flink +
                                             (longlong)local_678._4_4_ * 0xc);
                            lVar44 = (longlong)iVar13;
                            puVar23 = &DAT_14c846480;
                            p_Var32 = &local_418;
                            for (lVar38 = 0xc; lVar38 != 0; lVar38 = lVar38 + -1) {
                              p_Var32->Flink = (_LIST_ENTRY *)*puVar23;
                              puVar23 = puVar23 + 1;
                              p_Var32 = (_LIST_ENTRY *)&p_Var32->Blink;
                            }
                            local_348.Flink = (_LIST_ENTRY *)&DAT_3ff0000000000000;
                            local_348.Blink = (_LIST_ENTRY *)0x0;
                            local_338 = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
                            local_158._0_8_ = (&(*(_LIST_ENTRY **)p_Var41)->Flink)[lVar44];
                            local_208 = (undefined1  [8])
                                        (&(*(_LIST_ENTRY **)p_Var41)->Flink)[lVar26];
                            local_158._8_8_ = FUN_14172543a;
                            local_158._16_8_ =
                                 (((_RTL_CRITICAL_SECTION_DEBUG *)local_158._0_8_)->ProcessLocksList
                                 ).Flink;
                            local_200 = FUN_14172543a;
                            uStack_1f8 = (_RTL_CRITICAL_SECTION_DEBUG *)
                                         (((_RTL_CRITICAL_SECTION_DEBUG *)local_208)->
                                         ProcessLocksList).Flink;
                            local_7f8 = 0x3f50624de0000000;
                            local_800 = &local_348;
                            local_810 = 0;
                            uStack_808 = 0;
                            local_818 = (undefined8 *)local_3b0;
                            pp_Stack_820 = (_LIST_ENTRY **)(local_3b0 + 4);
                            local_828 = &local_3a8;
                            local_830 = &local_388;
                            local_838 = (_LIST_ENTRY **)&local_368;
                            cVar9 = FUN_14068570a(local_208,local_158,&local_418,local_350);
                            if (cVar9 != '\0') {
                              local_448 = local_3a8.Flink;
                              p_Stack_440 = local_3a8.Blink;
                              local_438 = local_398;
                              local_468 = CONCAT44(uStack_384,local_388);
                              uStack_460 = CONCAT44(uStack_37c,uStack_380);
                              local_458 = local_378;
                              local_488 = (undefined4)local_368;
                              uStack_484 = local_368._4_4_;
                              uStack_480 = (undefined4)uStack_360;
                              uStack_47c = uStack_360._4_4_;
                              local_478 = local_358;
                              p_Var32 = *(_LIST_ENTRY **)p_Var41;
                              pp_Stack_820 = &local_430;
                              local_828 = &local_4b8;
                              local_830 = (int *)CONCAT71(local_830._1_7_,bVar34);
                              local_838 = &local_448;
                              puVar29 = &local_488;
                              FUN_142a04ec4((&p_Var32->Flink)[lVar26],(&p_Var32->Flink)[lVar44],
                                            puVar29,&local_468);
                              uVar5 = local_158._24_8_;
                              p_Var3 = local_1f0;
                              local_4a0 = local_430;
                              p_Var22 = local_4a0;
                              p_Stack_498 = p_Stack_428;
                              local_490 = local_420;
                              local_158._8_8_ = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
                              local_158._16_8_ = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
                              local_158._24_3_ = 0x10101;
                              uVar8 = local_158._24_8_;
                              local_158._30_2_ = SUB82(uVar5,6);
                              local_158._24_4_ = (undefined4)uVar8;
                              local_158._28_2_ = 0x808;
                              local_158._0_8_ = &PTR_FUN_149f51c30;
                              uStack_128 = 0;
                              iStack_124 = 0;
                              pDStack_120 = (DWORD *)0x0;
                              local_138 = (_RTL_CRITICAL_SECTION_DEBUG **)0x0;
                              uStack_130._0_4_ = 0;
                              uStack_130._4_2_ = 0;
                              uStack_130._6_2_ = 0;
                              local_118 = (DWORD **)0x7f7fffff7f7fffff;
                              pp_Stack_110 = (_LIST_ENTRY **)0xff7fffff7f7fffff;
                              local_108 = (_LIST_ENTRY **)&DAT_ff7fffffff7fffff;
                              local_100 = (undefined8 *)0x0;
                              local_f8 = 0;
                              local_f0 = 0;
                              uStack_e8 = 0;
                              local_e0 = 0x3ff0000000000000;
                              local_d8 = 0x3ff0000000000000;
                              local_d0 = 0x3ff0000000000000;
                              local_790[1].Flink = DAT_14c8463e0;
                              local_790[1].Blink = DAT_14c8463e8;
                              local_790->Flink = DAT_14c8463d0;
                              local_790->Blink = DAT_14c8463d8;
                              local_200 = (code *)0x0;
                              uStack_1f8 = (_RTL_CRITICAL_SECTION_DEBUG *)0x0;
                              local_1f0 = (_LIST_ENTRY *)CONCAT53(local_1f0._3_5_,0x10101);
                              pvVar7 = local_1f0;
                              local_1f0._6_2_ = SUB82(p_Var3,6);
                              local_1f0._0_4_ = (uint)pvVar7;
                              local_1f0._0_6_ = CONCAT24(0x808,(uint)local_1f0);
                              local_208 = (undefined1  [8])&PTR_FUN_149f51c30;
                              local_1d8 = 0;
                              uStack_1d0 = 0;
                              local_1e8 = (_LIST_ENTRY *)0x0;
                              uStack_1e0 = 0;
                              local_1c8 = 0x7f7fffff7f7fffff;
                              uStack_1c0 = 0xff7fffff7f7fffff;
                              local_1b8 = &DAT_ff7fffffff7fffff;
                              local_1b0 = 0;
                              local_1a8 = 0;
                              local_1a0 = 0;
                              uStack_198 = 0;
                              local_190 = 0x3ff0000000000000;
                              local_188 = 0x3ff0000000000000;
                              local_180 = 0x3ff0000000000000;
                              local_788[1].Flink = DAT_14c8463e0;
                              local_788[1].Blink = DAT_14c8463e8;
                              local_788->Flink = DAT_14c8463d0;
                              local_788->Blink = DAT_14c8463d8;
                              local_4c8 = 0;
                              uStack_4c0 = 0;
                              local_4a0._0_4_ = (uint)local_430;
                              local_4a0._4_4_ = (int)((ulonglong)local_430 >> 0x20);
                              local_4f8._0_4_ = (int)local_4b8.Flink;
                              local_4f8._4_4_ = local_4b8.Flink._4_4_;
                              uStack_4f0 = local_4b8.Blink._0_4_;
                              uStack_4ec = local_4b8.Blink._4_4_;
                              local_4e8 = (undefined4)local_4a8;
                              uStack_4e4 = local_4a8._4_4_;
                              uStack_4e0 = (uint)local_4a0;
                              uStack_4dc = local_4a0._4_4_;
                              local_4d8 = p_Stack_428;
                              uStack_4d0 = local_420;
                              local_4a0 = p_Var22;
                              cVar9 = FUN_142a051af((&p_Var32->Flink)[lVar26],&local_4f8,
                                                    CONCAT71((int7)(CONCAT62((int6)((ulonglong)
                                                                                    puVar29 >> 0x10)
                                                                             ,0x101) >> 8),1),
                                                    &local_4c8);
                              if (cVar9 == '\0') {
LAB_146ec0cf4:
                                if (bVar34 == 0) {
                                  bVar45 = (longlong)uStack_4c0 < 0;
                                  uStack_4c0 = uStack_4c0 & 0xffffffff00000000;
                                  if (bVar45) {
                                    FUN_140163800(&local_4c8,0);
                                  }
                                  local_508 = p_Stack_498;
                                  uStack_500 = local_490;
                                  local_518 = (undefined4)local_4a8;
                                  uStack_514 = local_4a8._4_4_;
                                  uStack_510 = (uint)local_4a0;
                                  uStack_50c = local_4a0._4_4_;
                                  local_528 = (int)local_4b8.Flink;
                                  uStack_524 = local_4b8.Flink._4_4_;
                                  uStack_520 = local_4b8.Blink._0_4_;
                                  uStack_51c = local_4b8.Blink._4_4_;
                                  bVar45 = false;
                                  cVar10 = FUN_142a051af((&(*(_LIST_ENTRY **)p_Var41)->Flink)
                                                         [lVar44],&local_528,0,&local_4c8);
                                  if (cVar10 != '\0') {
                                    FUN_142a0571e(&local_348,&local_4c8,(double)local_540 * dVar4);
                                    FUN_146d834a8(local_208,&local_348);
                                    FUN_146d835c4(&local_348);
                                    bVar45 = true;
                                  }
                                }
                                else {
                                  bVar45 = false;
                                }
                                if ((((iVar12 < (int)uStack_610) &&
                                     (dVar2 = *(double *)(local_618 + lVar26 * 8),
                                     cVar9 == '\x01' && 0.0 < dVar2)) &&
                                    ((double)(float)local_f0 / dVar2 < 1.0 - param_3)) ||
                                   (((iVar13 < (int)uStack_610 && bVar34 == 0 &&
                                     (dVar2 = *(double *)(local_618 + lVar44 * 8),
                                     bVar45 && 0.0 < dVar2)) &&
                                    ((double)(float)local_1a0 / dVar2 < 1.0 - param_3)))) {
                                  bVar24 = false;
                                  p_Var41 = local_7e8;
                                }
                                else {
                                  if (cVar9 != '\0') {
                                    FUN_146d834a8((&(*(_LIST_ENTRY **)local_7e8)->Flink)[lVar26],
                                                  local_158);
                                  }
                                  p_Var41 = local_7e8;
                                  bVar24 = true;
                                  if (bVar45) {
                                    FUN_146d834a8((&(*(_LIST_ENTRY **)local_7e8)->Flink)[lVar44],
                                                  local_208);
                                    bVar24 = true;
                                  }
                                }
                              }
                              else {
                                if (3 < (int)uStack_4c0) {
                                  FUN_142a0571e(&local_348,&local_4c8,(double)local_540 * dVar4);
                                  FUN_146d834a8(local_158,&local_348);
                                  FUN_146d835c4(&local_348);
                                  goto LAB_146ec0cf4;
                                }
                                bVar24 = false;
                              }
                              if (local_4c8 != 0) {
                                FUN_1400020a8();
                              }
                              FUN_146d835c4(local_208);
                              FUN_146d835c4(local_158);
                              if (!bVar24) {
                                local_158._0_8_ = local_258;
                                local_158._8_8_ = local_7b8;
                                local_158._16_8_ = p_Var41;
                                FUN_142a04c8e(local_158,local_7c0);
                                iVar12 = local_7a4;
                                if (bVar34 == 0) {
                                  FUN_142a04c8e(local_158,local_778);
                                }
                                p_Var31 = p_Var41;
                                p_Var36 = local_7c0;
                                lVar26 = local_760;
                                goto LAB_146ec1255;
                              }
                            }
                            local_678 = (_LIST_ENTRY *)
                                        CONCAT44(local_678._4_4_,(uint)local_678 & ~uStack_688._4_4_
                                                );
                            FUN_1449c0562(&uStack_688);
                            p_Var31 = p_Var41;
                            p_Var36 = local_7c0;
                            p_Var41 = local_7e8;
                          }
                          local_668.Blink._4_4_ = (uint)((ulonglong)local_668.Blink >> 0x20);
                          local_650._4_4_ = (int)((ulonglong)local_650 >> 0x20);
                          local_650 = (_LIST_ENTRY *)
                                      CONCAT44(local_650._4_4_,
                                               (uint)local_650 & ~local_668.Blink._4_4_);
                          FUN_1449c0562(&local_668.Blink);
                          iVar19 = local_774;
                          p_Var32 = local_738;
                          lVar38 = local_730;
                        } while (((local_650._4_4_ != local_774) || (local_658 != local_7d0)) ||
                                (lVar26 = local_760, iVar12 = local_7a4,
                                local_668.Flink != local_738));
                      }
                    }
                  }
LAB_146ec1255:
                  local_628 = (_LIST_ENTRY *)
                              CONCAT44(local_628._4_4_,(uint)local_628 & ~local_640.Blink._4_4_);
                  FUN_1449c0562(&local_640.Blink);
                  iVar19 = local_628._4_4_;
                } while (local_628._4_4_ != iVar12);
LAB_146ec1280:
                iVar19 = local_628._4_4_;
              } while ((local_630 != local_7a0) ||
                      (lVar38 = local_770, puVar33 = local_748, p_Var41 = local_7b8,
                      puVar43 = local_740, iVar25 = local_77c, local_640.Flink != local_758));
            }
LAB_146ec057e:
            puVar43 = puVar43 + 1;
          } while (puVar43 != puVar33);
          local_210 = 0;
          iVar12 = iVar25;
          if (local_218 != (_LIST_ENTRY **)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_1447a082e(local_258);
      } while (iVar12 < (int)lVar38);
    }
    if (local_618 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140f35b7a(local_608,uStack_600 & 0xffffffff);
  if (local_608 != 0) {
    FUN_1400020a8();
  }
  FUN_140f35b7a(local_5f8._0_8_,local_5f8._8_8_ & 0xffffffff);
  if (local_5f8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_5c8 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_5b8._0_8_,local_5b8._8_8_ & 0xffffffff);
  if (local_5b8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((_LIST_ENTRY *)local_5b8._16_8_ != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  FUN_140f35b7a(local_578,uStack_570 & 0xffffffff);
  if (local_578 != 0) {
    FUN_1400020a8();
  }
  local_418.Flink = *(_LIST_ENTRY **)&p_Var31->EntryCount;
  local_158._24_8_ = &local_418;
  dVar4 = (double)local_418.Flink / -100.0 + 1.0;
  uVar39 = -(ulonglong)(dVar4 != 0.0);
  local_258._0_8_ = ~uVar39 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar4) & uVar39;
  uStack_130 = (longlong *)local_258;
  local_348.Blink = (_LIST_ENTRY *)local_158;
  local_158._0_8_ = &local_6b8;
  local_138 = (_RTL_CRITICAL_SECTION_DEBUG **)local_798;
  local_828 = (_LIST_ENTRY *)local_208;
  local_208 = (undefined1  [8])0x0;
  local_200 = (code *)((ulonglong)local_200 & 0xffffffff00000000);
  local_348.Flink = (_LIST_ENTRY *)FUN_142a070ae;
  local_830 = (int *)((ulonglong)local_830 & 0xffffffff00000000);
  local_158._8_8_ = p_Var41;
  local_158._16_8_ = p_Var31;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)&p_Var41->CriticalSection,1);
  lVar38 = local_7e0;
  FUN_146ebe088(local_7e0);
  uVar5 = DAT_14c9974a8;
  FUN_1446ddc76(&local_728,"TransformToConvexIndices",1);
  lVar20 = FUN_146eb57a6(lVar38,local_728,uVar5);
  lVar38 = FUN_140dffbf6(lVar38,DAT_14c9974d0,DAT_14c9974c8);
  local_158._8_8_ = local_158._8_8_ & 0xffffffffffffff00;
  p_Var32 = (p_Var31->ProcessLocksList).Flink;
  (p_Var31->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
  p_Var37 = p_Var41->CriticalSection;
  p_Var41->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  local_158._0_8_ = &PTR_LAB_149f63d80;
  local_158._16_8_ = p_Var32;
  local_158._24_8_ = p_Var37;
  FUN_146ec7de2(lVar20 + 0x10,local_158 + 0x10);
  local_158._0_8_ = &PTR_LAB_149f63e10;
  FUN_140f35b7a(local_158._16_8_,local_158._24_8_ & 0xffffffff);
  if ((_LIST_ENTRY *)local_158._16_8_ != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  lVar26 = local_7e0;
  FUN_146ece8e2(local_7e0,DAT_14c9974c8);
  p_Var31 = local_7e8;
  FUN_1408a70b0(lVar26,*(undefined4 *)&local_7e8->CriticalSection,DAT_14c9974c8);
  local_158._8_8_ = local_158._8_8_ & 0xffffffffffffff00;
  local_158._16_8_ = *(undefined8 *)p_Var31;
  *(_LIST_ENTRY **)p_Var31 = (_LIST_ENTRY *)0x0;
  local_158._24_8_ = p_Var31->CriticalSection;
  p_Var31->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  local_158._0_8_ = &PTR_LAB_149f64ab0;
  FUN_146ec7d94(lVar38 + 0x10,local_158 + 0x10);
  local_158._0_8_ = &PTR_LAB_149f64b40;
  FUN_1402ef3f6(local_158._16_8_,local_158._24_8_ & 0xffffffff);
  if ((_LIST_ENTRY *)local_158._16_8_ != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  FUN_146ec1810(local_7e0);
  plVar15 = local_750;
  *local_750 = lVar20;
  local_750[1] = lVar38;
  FUN_146ebe7b8(local_6f8);
  if (local_6b8.Flink != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_858) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar15;
}



// FUNCTION 146ec13d4 FUN_146ec13d4 body=99 status=ok
// SIG undefined FUN_146ec13d4(void)

longlong FUN_146ec13d4(longlong param_1,longlong param_2)

{
  FUN_146ec7d94();
  FUN_146ec7de2(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  return param_1;
}



// FUNCTION 146ec1438 FUN_146ec1438 body=982 status=ok
// SIG undefined FUN_146ec1438(void)

void FUN_146ec1438(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float _X;
  float _X_00;
  undefined1 auStack_608 [40];
  undefined4 local_5e0;
  undefined8 *local_5d8;
  undefined1 *local_5d0;
  longlong local_5c8;
  longlong *local_5c0;
  undefined8 *local_5b8;
  longlong *local_5b0;
  longlong local_5a8;
  ulonglong uStack_5a0;
  longlong local_598 [3];
  undefined1 local_580 [64];
  longlong local_540;
  undefined8 local_4d0;
  undefined1 local_490 [64];
  longlong local_450;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined1 **local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  uVar2 = DAT_14c9974a8;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_608;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = param_1;
  FUN_1446ddc76(&local_b0,"Volume",1);
  plVar6 = (longlong *)FUN_140498c8e(param_1,local_b0,uVar2,&local_a8);
  uVar2 = DAT_14c9974a8;
  local_c0 = 0;
  local_b8 = 1;
  FUN_1446ddc76(&local_c8,&DAT_149eda610,1);
  lVar7 = FUN_140498c8e(param_1,local_c8,uVar2,&local_c0);
  FUN_146e9b1a8(local_490,param_1);
  FUN_146ea7fa0(local_580,param_1);
  uVar2 = DAT_14c9974a8;
  FUN_1446ddc76(local_598 + 2,"SimulationType",1);
  lVar8 = FUN_140757af2(param_1,local_598[2],uVar2);
  cVar3 = FUN_146e9bde4(local_490);
  if ((cVar3 != '\0') && (cVar3 = FUN_146ea8240(local_580), lVar8 != 0 && cVar3 == '\x01')) {
    local_598[0] = 0;
    local_598[1] = 0;
    FUN_146eb7819(local_4d0,local_540);
    local_5a8 = 0;
    uStack_5a0 = 0;
    uVar4 = FUN_1401f66f6(param_1,DAT_14c996af0);
    FUN_144aa29e6(&local_5a8,uVar4,1);
    local_88 = &local_5d0;
    local_5b8 = &local_98;
    local_5b0 = local_598;
    local_5d8 = &local_80;
    local_80 = 0;
    local_78 = 0;
    local_90 = FUN_142a08cba;
    local_5e0 = 0;
    local_5d0 = local_490;
    local_5c8 = lVar8;
    local_5c0 = &local_5a8;
    FUN_1401f8d10(L"ParallelFor Task",uStack_5a0 & 0xffffffff,1);
    FUN_1406bf0a6(&local_5d0);
    if (0 < (int)plVar6[3]) {
      lVar9 = 0;
      do {
        *(undefined4 *)(plVar6[2] + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)plVar6[3]);
    }
    if ((longlong)(int)local_5c8 == 0) {
      _X_00 = 0.0;
    }
    else {
      _X_00 = 0.0;
      lVar9 = 0;
      do {
        lVar10 = (longlong)*(int *)(local_5d0 + lVar9);
        if (*(int *)(*(longlong *)(lVar8 + 0x10) + lVar10 * 4) == 1) {
          lVar11 = (longlong)*(int *)(*(longlong *)(local_450 + 0x10) + lVar10 * 4);
          if (lVar11 != -1) {
            fVar12 = *(float *)(local_5a8 + lVar11 * 4);
            if (_X_00 <= fVar12) {
              _X_00 = fVar12;
            }
            *(float *)(plVar6[2] + lVar10 * 4) = fVar12;
            goto LAB_146ec1703;
          }
          *(undefined4 *)(plVar6[2] + lVar10 * 4) = 0;
        }
        else {
LAB_146ec1703:
          lVar11 = (longlong)*(int *)(*(longlong *)(local_540 + 0x10) + lVar10 * 4);
          if (lVar11 != -1) {
            lVar1 = plVar6[2];
            *(float *)(lVar1 + lVar11 * 4) =
                 *(float *)(lVar1 + lVar10 * 4) + *(float *)(lVar1 + lVar11 * 4);
          }
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)local_5c8 * 4 != lVar9);
    }
    fVar12 = _X_00;
    if (DAT_14c996ba0 == '\0') {
      fVar12 = powf(_X_00,0.33333334);
    }
    iVar5 = (**(code **)(*plVar6 + 0x60))(plVar6);
    if (0 < iVar5) {
      lVar8 = 0;
      do {
        _X = *(float *)(plVar6[2] + lVar8 * 4);
        if (DAT_14c996ba0 == '\0') {
          _X = powf(_X,0.33333334);
        }
        *(float *)(*(longlong *)(lVar7 + 0x10) + lVar8 * 4) =
             _X * (float)(~-(uint)(0.0 < _X_00) & 0x3f800000 |
                         (uint)(1.0 / fVar12) & -(uint)(0.0 < _X_00));
        lVar8 = lVar8 + 1;
        iVar5 = (**(code **)(*plVar6 + 0x60))(plVar6);
      } while (lVar8 < iVar5);
    }
    if (local_5d0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_5a8 != 0) {
      FUN_1400020a8();
    }
    if (local_598[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ec1810 FUN_146ec1810 body=282 status=ok
// SIG undefined FUN_146ec1810(void)

void FUN_146ec1810(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14c9974c8;
  plVar6 = (longlong *)FUN_140dffcee(param_1,DAT_14c9974d0);
  if (plVar6 != (longlong *)0x0) {
    *(undefined1 *)(plVar6 + 1) = 1;
    local_48 = 0;
    uStack_40 = 0;
    iVar5 = (**(code **)(*plVar6 + 0x60))(plVar6);
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        puVar3 = *(undefined8 **)(plVar6[2] + lVar7 * 8);
        if (puVar3 == (undefined8 *)0x0) {
LAB_146ec18a3:
          uVar4 = uStack_40;
          iVar5 = (int)uStack_40;
          uVar1 = (int)uStack_40 + 1;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
          if (uStack_40._4_4_ < uVar1) {
            FUN_1446f48e2(&local_48,uVar4 & 0xffffffff);
          }
          *(int *)(local_48 + (longlong)iVar5 * 4) = (int)lVar7;
        }
        else if (*(int *)(puVar3 + 7) == 0) {
          *(undefined8 *)(plVar6[2] + lVar7 * 8) = 0;
          LOCK();
          piVar2 = (int *)(puVar3 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((*piVar2 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
          goto LAB_146ec18a3;
        }
        lVar7 = lVar7 + 1;
        iVar5 = (**(code **)(*plVar6 + 0x60))(plVar6);
      } while (lVar7 < iVar5);
    }
    (**(code **)(*param_1 + 0x28))(param_1,&local_38,&local_48,0x100);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec192c FUN_146ec192c body=6700 status=ok
// SIG undefined FUN_146ec192c(void)

void FUN_146ec192c(longlong param_1,char param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  code ***pppcVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  code *pcVar19;
  ulonglong uVar20;
  int *piVar21;
  longlong *plVar22;
  longlong lVar23;
  int *piVar24;
  code **ppcVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  code **ppcVar29;
  code *pcVar30;
  code ***pppcVar31;
  undefined8 unaff_R14;
  code **ppcVar32;
  longlong *plVar33;
  bool bVar34;
  undefined1 auStack_3b8 [32];
  code *local_398;
  code **local_390;
  longlong *local_388;
  code **local_380;
  code **local_378;
  char local_361;
  longlong local_360;
  code **local_358;
  undefined8 local_350;
  int *local_348;
  int *local_340;
  longlong *local_338;
  int local_32c;
  longlong *local_328;
  longlong *local_320;
  longlong local_318;
  undefined4 local_310;
  int local_30c;
  int *local_308;
  int local_300;
  undefined4 local_2fc;
  longlong local_2f8 [3];
  longlong *local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2a9;
  code *local_2a8;
  ulonglong uStack_2a0;
  code *local_298;
  ulonglong uStack_290;
  longlong local_288 [5];
  undefined8 local_260;
  undefined8 uStack_258;
  code *local_248 [2];
  undefined8 local_238 [6];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  ulonglong uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  code **local_178;
  undefined8 uStack_170;
  code **local_168;
  undefined8 local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_128;
  code ***pppcStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_328 = param_4;
  uVar11 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  lVar16 = FUN_140dffa30(param_1,DAT_14c996a78,DAT_14c9974a8);
  if ((int)uVar11 < 1 || lVar16 == 0) {
LAB_146ec1a0c:
    uVar12 = 0;
  }
  else {
    uVar20 = 0;
    bVar34 = false;
    do {
      while (bVar34) {
        uVar20 = uVar20 + 1;
        bVar34 = true;
        if (uVar20 == uVar11) goto LAB_146ec19fa;
      }
      lVar28 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + uVar20 * 8);
      bVar34 = lVar28 != 0;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar11);
    if (lVar28 == 0) goto LAB_146ec1a0c;
LAB_146ec19fa:
    uVar12 = (undefined4)
             CONCAT71((int7)((ulonglong)unaff_R14 >> 8),(*(byte *)(local_328 + 1) & 0xfd) == 0);
  }
  bVar34 = (char)local_328[1] == '\x02';
  local_288[2] = 0;
  local_288[3] = 0;
  local_288[0] = 0;
  local_288[1] = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_298 = (code *)0x0;
  uStack_290 = 0;
  local_2a8 = (code *)0x0;
  uStack_2a0 = 0;
  FUN_140c7a828(&local_2a8,uVar11,1);
  FUN_146ebe088();
  local_2c8 = 0;
  uStack_2c0 = 0;
  if (param_2 == '\0') {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar11);
    }
    if (uVar11 == 0) goto LAB_146ec3296;
    local_360 = CONCAT44(local_360._4_4_,uVar12);
    param_3 = &local_2c8;
    FUN_14481578e(param_3,uVar11);
    local_358 = (code **)CONCAT44(local_358._4_4_,uVar11);
    uVar20 = 0;
    do {
      uVar8 = uStack_2c0;
      lVar28 = *(longlong *)(param_1 + 0x1b0);
      if (*(int *)(*(longlong *)(param_1 + 0x1b0) + uVar20 * 4) == 1) {
        lVar28 = (longlong)(int)uStack_2c0;
        uVar14 = (int)uStack_2c0 + 1;
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar14);
        if (uStack_2c0._4_4_ < uVar14) {
          FUN_1446f48e2(param_3,uVar8 & 0xffffffff);
        }
        *(int *)(local_2c8 + lVar28 * 4) = (int)uVar20;
        lVar28 = local_2c8;
      }
      uVar15 = (undefined4)lVar28;
      uVar20 = uVar20 + 1;
    } while (uVar11 != uVar20);
    iVar13 = (int)uStack_2c0;
    uVar11 = (uint)local_358;
    uVar12 = (undefined4)local_360;
  }
  else {
    uVar15 = *(undefined4 *)((longlong)param_3 + 0xc);
    iVar13 = (int)param_3[1];
  }
  if (iVar13 != 0) {
    local_358 = (code **)CONCAT44(local_358._4_4_,uVar11);
    local_32c = CONCAT31(local_32c._1_3_,(byte)uVar12 ^ 1 | bVar34);
    local_360 = CONCAT44(local_360._4_4_,uVar12);
    piVar21 = (int *)*param_3;
    local_361 = param_2;
    local_310 = uVar15;
    plVar17 = (longlong *)FUN_140dffbf6(param_1,DAT_14c9974d0,DAT_14c9974c8);
    uVar7 = DAT_14c9974a8;
    FUN_1446ddc76(&local_2d0,"TransformToConvexIndices",1);
    local_338 = (longlong *)FUN_146eb57a6(param_1,local_2d0,uVar7);
    local_340 = piVar21 + iVar13;
    lVar28 = 0;
    local_348 = piVar21;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1b0) +
                  (longlong)*(int *)((longlong)piVar21 + lVar28) * 4) == 1) {
        FUN_14068ded2((longlong)*(int *)((longlong)piVar21 + lVar28) * 0x50 + local_338[2],0);
        piVar21 = local_348;
      }
      lVar28 = lVar28 + 4;
    } while ((longlong)iVar13 * 4 != lVar28);
    local_350 = CONCAT71(local_350._1_7_,bVar34 & (byte)uVar12);
    local_128 = (code *)0x0;
    pppcStack_120 = (code ***)0x0;
    local_320 = plVar17;
    local_318 = param_1;
    local_30c = iVar13;
    uVar12 = (**(code **)(*plVar17 + 0x60))(plVar17);
    FUN_1403ed7b2(&local_128,uVar12,1);
    plVar17 = local_338;
    iVar13 = (**(code **)(*local_338 + 0x60))(local_338);
    if (0 < iVar13) {
      lVar28 = 0;
      do {
        lVar26 = plVar17[2];
        lVar23 = lVar28 * 0x50 + lVar26;
        ppcVar32 = (code **)(lVar23 + 0x10);
        local_208 = (code *)&DAT_100000000;
        local_1f8 = (code ***)0xffffffff;
        local_1f0 = local_1f0 & 0xffffffff00000000;
        uStack_200 = ppcVar32;
        if (*(int *)(lVar23 + 0x28) != 0) {
          FUN_1449c0562(&local_208);
        }
        ppcVar25 = (code **)(lVar26 + lVar28 * 0x50);
        local_160 = local_1f8;
        local_158 = local_1f0;
        uStack_170 = local_208;
        local_168 = uStack_200;
        iVar13 = *(int *)(ppcVar25 + 5);
        local_208 = (code *)CONCAT44(1 << ((byte)iVar13 & 0x1f),iVar13 >> 5);
        local_1f8 = (code ***)CONCAT44(iVar13,-1 << ((byte)iVar13 & 0x1f));
        local_1f0 = CONCAT44(local_1f0._4_4_,iVar13) & 0xffffffffffffffe0;
        uStack_200 = ppcVar32;
        local_178 = ppcVar25;
        if (*(int *)(ppcVar25 + 5) != iVar13) {
          FUN_1449c0562(&local_208);
          iVar13 = local_1f8._4_4_;
        }
        ppcVar32 = uStack_200;
        if ((local_178 != ppcVar25 || local_168 != uStack_200) || local_160._4_4_ != iVar13) {
          do {
            local_128[*(int *)(*local_178 + (longlong)local_160._4_4_ * 0xc)] = (code)0x1;
            local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_170._4_4_);
            FUN_1449c0562(&uStack_170);
          } while (local_178 != ppcVar25 || (local_168 != ppcVar32 || local_160._4_4_ != iVar13));
        }
        plVar17 = local_338;
        lVar28 = lVar28 + 1;
        iVar13 = (**(code **)(*local_338 + 0x60))(local_338);
      } while (lVar28 < iVar13);
    }
    plVar33 = local_320;
    iVar13 = (**(code **)(*local_320 + 0x60))(local_320);
    lVar23 = local_318;
    plVar17 = local_328;
    lVar28 = local_360;
    if (0 < iVar13) {
      lVar26 = 0;
      do {
        if (local_128[lVar26] == (code)0x0) {
          puVar3 = *(undefined8 **)(plVar33[2] + lVar26 * 8);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(plVar33[2] + lVar26 * 8) = 0;
            LOCK();
            piVar21 = (int *)(puVar3 + 1);
            *piVar21 = *piVar21 + -1;
            UNLOCK();
            if ((*piVar21 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
        lVar26 = lVar26 + 1;
        iVar13 = (**(code **)(*plVar33 + 0x60))(plVar33);
      } while (lVar26 < iVar13);
    }
    FUN_146ec1810(lVar23);
    if (local_128 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_2f8[2] = lVar23;
    local_2e0 = plVar33;
    local_2d8 = local_338;
    if ((char)lVar28 != '\0') {
      piVar21 = local_340;
      piVar24 = local_348;
      do {
        lVar28 = (longlong)*piVar24;
        if ((*(int *)(*(longlong *)(lVar23 + 0x1b0) + lVar28 * 4) == 1) &&
           (puVar3 = *(undefined8 **)(*(longlong *)(lVar16 + 0x10) + lVar28 * 8),
           puVar3 != (undefined8 *)0x0)) {
          LOCK();
          *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
          UNLOCK();
          iVar13 = (int)uStack_290;
          FUN_146ec335a(puVar3,&DAT_14c846480,&local_298);
          local_178 = (code **)CONCAT44(local_178._4_4_,iVar13);
          if (iVar13 < (int)uStack_290) {
            do {
              FUN_1447cbafe(local_2a8 + lVar28 * 0x50,&local_208,&local_178,0);
              iVar13 = (int)local_178 + 1;
              local_178 = (code **)CONCAT44(local_178._4_4_,iVar13);
            } while (iVar13 < (int)uStack_290);
          }
          lVar23 = local_318;
          piVar1 = (int *)(puVar3 + 1);
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          piVar21 = local_340;
          if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
            (**(code **)*puVar3)(puVar3,1);
            piVar21 = local_340;
          }
        }
        plVar33 = local_320;
        plVar17 = local_328;
        piVar24 = piVar24 + 1;
      } while (piVar24 != piVar21);
      if ((char)local_350 == '\0') {
        local_1b8 = (code *)0x0;
        uStack_1b0 = (code ***)0x0;
        FUN_1400498da(&local_1b8,uStack_290 & 0xffffffff,1);
        uStack_170 = &local_2a9;
        local_208 = (code *)0x0;
        uStack_200 = (code **)((ulonglong)uStack_200 & 0xffffffff00000000);
        local_128 = FUN_142a08634;
        local_390 = (code **)((ulonglong)local_390 & 0xffffffff00000000);
        local_388 = &local_208;
        local_178 = &local_1b8;
        local_168 = &local_298;
        pppcStack_120 = &local_178;
        FUN_1401f8d10(L"ParallelFor Task",uStack_290 & 0xffffffff,1);
        FUN_1429fea90(local_2f8 + 2,&local_1b8,&local_2a8);
        FUN_1402ef3f6(local_1b8,(ulonglong)uStack_1b0 & 0xffffffff);
        if (local_1b8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if ((char)local_32c != '\0') {
      local_2f8[0] = 0;
      local_2f8[1] = 0;
      FUN_146bff40c(local_2f8,&DAT_14c846480,(ulonglong)local_358 & 0xffffffff);
      local_128 = (code *)0x0;
      local_118 = (longlong *)0x0;
      local_158 = 0;
      local_150 = 0;
      local_178 = (code **)0x0;
      uStack_170 = (undefined1 *)0x0;
      local_14c = 0xffffffff00000080;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      if (local_361 == '\0') {
        local_380 = &local_298;
        local_378 = &local_2a8;
        if ((char)plVar17[7] == '\0') {
          local_380 = (code **)0x0;
          local_378 = (code **)0x0;
        }
        local_248[0] = (code *)0x0;
        local_238[0] = 0;
      }
      else {
        local_308 = local_348;
        local_300 = local_30c;
        local_2fc = local_310;
        FUN_146bc855c(&local_178);
        local_1e8 = 0;
        local_1e0 = 0;
        local_208 = (code *)0x0;
        uStack_200 = (code **)0x0;
        local_1dc = 0xffffffff00000080;
        local_1d4 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        FUN_145c3f772(&local_208,&local_178);
        local_1b8 = (code *)0x0;
        plVar18 = (longlong *)FUN_14001cc68(0x58,8);
        *plVar18 = (longlong)&PTR_FUN_149f64a90;
        local_1a8 = plVar18;
        FUN_14627166e(plVar18 + 1,&local_208);
        uVar20 = uStack_110;
        plVar22 = local_118;
        pppcVar31 = pppcStack_120;
        pcVar30 = local_128;
        if (plVar18 != (longlong *)&DAT_fffffffffffffff8) {
          local_1b8 = (code *)&LAB_142a08852;
        }
        local_128 = local_1b8;
        pppcStack_120 = uStack_1b0;
        local_118 = local_1a8;
        uStack_110 = uStack_1a0;
        local_1b8 = pcVar30;
        uStack_1b0 = pppcVar31;
        local_1a8 = plVar22;
        uStack_1a0 = uVar20;
        local_198 = local_108;
        uStack_194 = uStack_104;
        uStack_190 = uStack_100;
        uStack_18c = uStack_fc;
        local_188 = local_f8;
        uStack_184 = uStack_f4;
        uStack_180 = uStack_f0;
        uStack_17c = uStack_ec;
        if (pcVar30 != (code *)0x0) {
          if (plVar22 == (longlong *)0x0) {
            plVar22 = (longlong *)&local_198;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        local_1c0 = 0;
        if (local_1c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_208);
        local_380 = &local_298;
        local_378 = &local_2a8;
        if ((char)plVar17[7] == '\0') {
          local_380 = (code **)0x0;
          local_378 = (code **)0x0;
        }
        local_248[0] = local_128;
        local_238[0] = 0;
        if (local_128 != (code *)0x0) {
          plVar22 = local_118;
          if (local_118 == (longlong *)0x0) {
            plVar22 = (longlong *)&local_108;
          }
          (**(code **)*plVar22)(plVar22,local_238);
        }
      }
      local_388 = plVar17 + 4;
      local_390 = local_248;
      local_398 = (code *)0x0;
      FUN_146ebe22a(&local_208,lVar23,local_2f8,(int)*plVar17);
      FUN_146ec13d4(local_288,&local_208);
      FUN_146ebe7b8(&local_208);
      if ((char)local_350 == '\0') {
        FUN_1429fea90(local_2f8 + 2,local_288,local_288 + 2);
      }
      local_130 = 0;
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_178);
      if (local_128 != (code *)0x0) {
        plVar22 = local_118;
        if (local_118 == (longlong *)0x0) {
          plVar22 = (longlong *)&local_108;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_2f8[0] != 0) {
        FUN_1400020a8();
      }
    }
    plVar22 = local_338;
    if ((char)local_350 != '\0') {
      local_1b8 = (code *)0x0;
      uStack_1b0 = (code ***)0x0;
      local_350 = (**(code **)(*plVar33 + 0x60))(plVar33);
      piVar21 = local_340;
      piVar24 = local_348;
      do {
        if (*(int *)(*(longlong *)(lVar23 + 0x1b0) + (longlong)*piVar24 * 4) == 1) {
          local_360 = (longlong)*piVar24 * 0x50;
          ppcVar32 = (code **)(local_288[2] + local_360);
          local_348 = piVar24;
          if (((double)plVar17[2] <= 1.0 && (double)plVar17[2] != 1.0) || (0.0 < (double)plVar17[3])
             ) {
            ppcVar25 = ppcVar32 + 2;
            local_208 = (code *)0x100000000;
            local_1f8._0_4_ = 0xffffffff;
            local_1f8._4_4_ = 0;
            local_1f0 = local_1f0 & 0xffffffff00000000;
            uStack_200 = ppcVar25;
            if (*(int *)(ppcVar32 + 5) != 0) {
              FUN_1449c0562(&local_208);
            }
            local_160._0_4_ = (uint)local_1f8;
            local_160._4_4_ = local_1f8._4_4_;
            local_158 = local_1f0;
            uStack_170 = local_208;
            local_168 = uStack_200;
            local_1f8._4_4_ = *(int *)(ppcVar32 + 5);
            local_208 = (code *)CONCAT44(1 << ((byte)local_1f8._4_4_ & 0x1f),local_1f8._4_4_ >> 5);
            local_1f8._0_4_ = -1 << ((byte)local_1f8._4_4_ & 0x1f);
            local_1f0 = CONCAT44(local_1f0._4_4_,local_1f8._4_4_) & 0xffffffffffffffe0;
            uStack_200 = ppcVar25;
            local_178 = ppcVar32;
            if (*(int *)(ppcVar32 + 5) != local_1f8._4_4_) {
              FUN_1449c0562(&local_208);
            }
            iVar13 = local_1f8._4_4_;
            ppcVar25 = uStack_200;
            dVar4 = 0.0;
            dVar5 = 0.0;
            if ((local_178 != ppcVar32 || local_168 != uStack_200) ||
                local_160._4_4_ != local_1f8._4_4_) {
              do {
                dVar4 = dVar5 + (double)*(float *)(*(longlong *)
                                                    (local_288[0] +
                                                    (longlong)
                                                    *(int *)(*local_178 +
                                                            (longlong)local_160._4_4_ * 0xc) * 8) +
                                                  0x68);
                local_160._0_4_ = (uint)local_160 & ~uStack_170._4_4_;
                FUN_1449c0562(&uStack_170);
                dVar5 = dVar4;
              } while (local_178 != ppcVar32 || (local_168 != ppcVar25 || local_160._4_4_ != iVar13)
                      );
            }
            pcVar30 = local_2a8;
            ppcVar25 = (code **)(local_2a8 + local_360 + 0x10);
            local_208 = (code *)&DAT_100000000;
            local_1f8 = (code ***)0xffffffff;
            local_1f0 = local_1f0 & 0xffffffff00000000;
            uStack_200 = ppcVar25;
            if (*(int *)(local_2a8 + local_360 + 0x28) != 0) {
              FUN_1449c0562(&local_208);
            }
            ppcVar29 = (code **)(pcVar30 + local_360);
            local_160 = local_1f8;
            local_158 = local_1f0;
            uStack_170 = local_208;
            local_168 = uStack_200;
            local_1f8._4_4_ = *(int *)(ppcVar29 + 5);
            local_208 = (code *)CONCAT44(1 << ((byte)local_1f8._4_4_ & 0x1f),local_1f8._4_4_ >> 5);
            local_1f8._0_4_ = -1 << ((byte)local_1f8._4_4_ & 0x1f);
            local_1f0 = CONCAT44(local_1f0._4_4_,local_1f8._4_4_) & 0xffffffffffffffe0;
            uStack_200 = ppcVar25;
            local_178 = ppcVar29;
            if (*(int *)(ppcVar29 + 5) != local_1f8._4_4_) {
              FUN_1449c0562(&local_208);
            }
            iVar13 = local_1f8._4_4_;
            ppcVar25 = uStack_200;
            dVar5 = 0.0;
            dVar6 = 0.0;
            if ((local_178 != ppcVar29 || local_168 != uStack_200) ||
                local_160._4_4_ != local_1f8._4_4_) {
              do {
                dVar5 = dVar6 + (double)*(float *)(*(longlong *)
                                                    (local_298 +
                                                    (longlong)
                                                    *(int *)(*local_178 +
                                                            (longlong)local_160._4_4_ * 0xc) * 0x70)
                                                  + 0x68);
                local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_170._4_4_);
                FUN_1449c0562(&uStack_170);
                dVar6 = dVar5;
              } while (local_178 != ppcVar29 || (local_168 != ppcVar25 || local_160._4_4_ != iVar13)
                      );
            }
            pcVar30 = local_2a8;
            lVar23 = local_318;
            if ((dVar5 * (double)plVar17[2] <= dVar4 && (double)plVar17[2] < 1.0) ||
               (dVar5 < (double)plVar17[3])) {
              ppcVar32 = (code **)(local_2a8 + local_360 + 0x10);
              local_208 = (code *)&DAT_100000000;
              local_1f8 = (code ***)0xffffffff;
              local_1f0 = local_1f0 & 0xffffffff00000000;
              uStack_200 = ppcVar32;
              if (*(int *)(local_2a8 + local_360 + 0x28) != 0) {
                FUN_1449c0562(&local_208);
              }
              ppcVar25 = (code **)(pcVar30 + local_360);
              local_160 = local_1f8;
              local_158 = local_1f0;
              uStack_170 = local_208;
              local_168 = uStack_200;
              iVar13 = *(int *)(ppcVar25 + 5);
              local_208 = (code *)CONCAT44(1 << ((byte)iVar13 & 0x1f),iVar13 >> 5);
              local_1f8 = (code ***)CONCAT44(iVar13,-1 << ((byte)iVar13 & 0x1f));
              local_1f0 = CONCAT44(local_1f0._4_4_,iVar13) & 0xffffffffffffffe0;
              uStack_200 = ppcVar32;
              local_178 = ppcVar25;
              if (*(int *)(ppcVar25 + 5) != iVar13) {
                FUN_1449c0562(&local_208);
                iVar13 = local_1f8._4_4_;
              }
              ppcVar32 = uStack_200;
              piVar21 = local_340;
              piVar24 = local_348;
              if ((local_178 != ppcVar25 || local_168 != uStack_200) || local_160._4_4_ != iVar13) {
                do {
                  FUN_1429fed62(&local_208,
                                *(undefined8 *)
                                 (local_298 +
                                 (longlong)*(int *)(*local_178 + (longlong)local_160._4_4_ * 0xc) *
                                 0x70));
                  pppcVar31 = uStack_1b0;
                  iVar2 = (int)uStack_1b0;
                  lVar16 = (longlong)(int)uStack_1b0;
                  uVar11 = (int)uStack_1b0 + 1;
                  uStack_1b0 = (code ***)CONCAT44(uStack_1b0._4_4_,uVar11);
                  if (uStack_1b0._4_4_ < uVar11) {
                    FUN_14004e612(&local_1b8,(ulonglong)pppcVar31 & 0xffffffff);
                  }
                  *(code **)(local_1b8 + lVar16 * 8) = local_208;
                  local_208 = (code *)CONCAT44(local_208._4_4_,(int)local_350 + iVar2);
                  FUN_144984904(plVar22[2] + local_360,&local_128,&local_208,0);
                  local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_170._4_4_);
                  FUN_1449c0562(&uStack_170);
                  piVar21 = local_340;
                  piVar24 = local_348;
                } while (local_178 != ppcVar25 ||
                         (local_168 != ppcVar32 || local_160._4_4_ != iVar13));
              }
              goto LAB_146ec31d2;
            }
          }
          ppcVar25 = ppcVar32 + 2;
          local_358 = ppcVar32;
          uStack_200 = ppcVar25;
          if ((char)plVar17[7] == '\x01') {
            local_208 = (code *)&DAT_100000000;
            local_1f8 = (code ***)0xffffffff;
            local_1f0 = (ulonglong)local_1f0._4_4_ << 0x20;
            if (*(int *)(ppcVar32 + 5) != 0) {
              FUN_1449c0562(&local_208);
            }
            local_160 = local_1f8;
            local_158 = local_1f0;
            uStack_170 = local_208;
            local_168 = uStack_200;
            local_178 = local_358;
            iVar13 = *(int *)(local_358 + 5);
            local_208 = (code *)CONCAT44(1 << ((byte)iVar13 & 0x1f),iVar13 >> 5);
            local_1f8 = (code ***)CONCAT44(iVar13,-1 << ((byte)iVar13 & 0x1f));
            local_1f0 = CONCAT44(local_1f0._4_4_,iVar13) & 0xffffffffffffffe0;
            uStack_200 = ppcVar25;
            if (*(int *)(local_358 + 5) != iVar13) {
              FUN_1449c0562(&local_208);
              iVar13 = local_1f8._4_4_;
            }
            ppcVar32 = uStack_200;
            piVar21 = local_340;
            piVar24 = local_348;
            plVar33 = local_320;
            if ((local_178 != local_358 || local_168 != uStack_200) || local_160._4_4_ != iVar13) {
              do {
                pppcVar31 = uStack_1b0;
                lVar16 = local_288[0];
                iVar2 = *(int *)(*local_178 + (longlong)local_160._4_4_ * 0xc);
                iVar9 = (int)uStack_1b0;
                lVar28 = (longlong)(int)uStack_1b0;
                uVar11 = (int)uStack_1b0 + 1;
                uStack_1b0 = (code ***)CONCAT44(uStack_1b0._4_4_,uVar11);
                if (uStack_1b0._4_4_ < uVar11) {
                  FUN_14004e612(&local_1b8,(ulonglong)pppcVar31 & 0xffffffff);
                }
                *(undefined8 *)(local_1b8 + lVar28 * 8) =
                     *(undefined8 *)(lVar16 + (longlong)iVar2 * 8);
                *(undefined8 *)(lVar16 + (longlong)iVar2 * 8) = 0;
                local_208 = (code *)CONCAT44(local_208._4_4_,(int)local_350 + iVar9);
                FUN_144984904(plVar22[2] + local_360,&local_128,&local_208,0);
                local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_170._4_4_);
                FUN_1449c0562(&uStack_170);
                piVar21 = local_340;
                piVar24 = local_348;
                plVar33 = local_320;
              } while (local_178 != local_358 ||
                       (local_168 != ppcVar32 || local_160._4_4_ != iVar13));
            }
          }
          else {
            local_208 = (code *)&DAT_100000000;
            local_1f8 = (code ***)0xffffffff;
            local_1f0 = (ulonglong)local_1f0._4_4_ << 0x20;
            if (*(int *)(ppcVar32 + 5) != 0) {
              FUN_1449c0562(&local_208);
            }
            local_160 = local_1f8;
            local_158 = local_1f0;
            uStack_170 = local_208;
            local_168 = uStack_200;
            local_178 = local_358;
            iVar13 = *(int *)(local_358 + 5);
            local_208 = (code *)CONCAT44(1 << ((byte)iVar13 & 0x1f),iVar13 >> 5);
            local_1f8 = (code ***)CONCAT44(iVar13,-1 << ((byte)iVar13 & 0x1f));
            local_1f0 = CONCAT44(local_1f0._4_4_,iVar13) & 0xffffffffffffffe0;
            uStack_200 = ppcVar25;
            if (*(int *)(local_358 + 5) != iVar13) {
              FUN_1449c0562(&local_208);
              iVar13 = local_1f8._4_4_;
            }
            ppcVar32 = uStack_200;
            piVar21 = local_340;
            piVar24 = local_348;
            plVar33 = local_320;
            local_32c = iVar13;
            if ((local_178 != local_358 || local_168 != uStack_200) || local_160._4_4_ != iVar13) {
              do {
                pppcVar31 = uStack_1b0;
                lVar16 = local_288[0];
                pcVar30 = local_2a8;
                lVar28 = (longlong)*(int *)(*local_178 + (longlong)local_160._4_4_ * 0xc);
                if ((int)uStack_2a0 == 0) {
                  lVar27 = plVar22[2] + local_360;
                  iVar13 = (int)uStack_1b0;
                  lVar26 = (longlong)(int)uStack_1b0;
                  uVar11 = (int)uStack_1b0 + 1;
                  uStack_1b0 = (code ***)CONCAT44(uStack_1b0._4_4_,uVar11);
                  if (uStack_1b0._4_4_ < uVar11) {
                    FUN_14004e612(&local_1b8,(ulonglong)pppcVar31 & 0xffffffff);
                  }
                  *(undefined8 *)(local_1b8 + lVar26 * 8) = *(undefined8 *)(lVar16 + lVar28 * 8);
                  *(undefined8 *)(lVar16 + lVar28 * 8) = 0;
                  local_208 = (code *)CONCAT44(local_208._4_4_,(int)local_350 + iVar13);
                  FUN_144984904(lVar27,&local_128,&local_208,0);
                }
                else {
                  pppcVar31 = (code ***)(local_2a8 + local_360 + 0x10);
                  local_128 = (code *)&DAT_100000000;
                  local_118 = (longlong *)0xffffffff;
                  uStack_110 = uStack_110 & 0xffffffff00000000;
                  pppcStack_120 = pppcVar31;
                  if (*(int *)(local_2a8 + local_360 + 0x28) != 0) {
                    FUN_1449c0562(&local_128);
                  }
                  pcVar30 = pcVar30 + local_360;
                  local_1f0 = (ulonglong)local_118;
                  local_1e8 = uStack_110;
                  uStack_200 = (code **)local_128;
                  local_1f8 = pppcStack_120;
                  iVar13 = *(int *)(pcVar30 + 0x28);
                  local_128 = (code *)CONCAT44(1 << ((byte)iVar13 & 0x1f),iVar13 >> 5);
                  local_118 = (longlong *)CONCAT44(iVar13,-1 << ((byte)iVar13 & 0x1f));
                  uStack_110 = CONCAT44(uStack_110._4_4_,iVar13) & 0xffffffffffffffe0;
                  local_208 = pcVar30;
                  pppcStack_120 = pppcVar31;
                  if (*(int *)(pcVar30 + 0x28) != iVar13) {
                    FUN_1449c0562(&local_128);
                    iVar13 = local_118._4_4_;
                  }
                  pppcVar31 = pppcStack_120;
                  lVar23 = local_318;
                  plVar22 = local_338;
                  if ((local_208 != pcVar30 || local_1f8 != pppcStack_120) ||
                      local_1f0._4_4_ != iVar13) {
                    do {
                      iVar2 = *(int *)(*(longlong *)local_208 + (longlong)(int)local_1f0._4_4_ * 0xc
                                      );
                      lVar16 = FUN_14001cc68(0xb0,0x10);
                      FUN_146daee5c(lVar16);
                      pppcVar10 = uStack_1b0;
                      if (lVar16 != 0) {
                        LOCK();
                        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
                        UNLOCK();
                      }
                      iVar9 = (int)uStack_1b0;
                      lVar23 = (longlong)(int)uStack_1b0;
                      uVar11 = (int)uStack_1b0 + 1;
                      uStack_1b0 = (code ***)CONCAT44(uStack_1b0._4_4_,uVar11);
                      if (uStack_1b0._4_4_ < uVar11) {
                        FUN_14004e612(&local_1b8,(ulonglong)pppcVar10 & 0xffffffff);
                      }
                      plVar17 = local_328;
                      *(longlong *)(local_1b8 + lVar23 * 8) = lVar16;
                      local_390 = (code **)*local_328;
                      local_398 = local_298 + (longlong)iVar2 * 0x70 + 0x10;
                      FUN_146ec4ae6(*(undefined8 *)(local_1b8 + lVar23 * 8),
                                    *(undefined8 *)(local_288[0] + lVar28 * 8),
                                    *(undefined8 *)(local_298 + (longlong)iVar2 * 0x70));
                      local_128 = (code *)CONCAT44(local_128._4_4_,(int)local_350 + iVar9);
                      FUN_144984904(local_338[2] + local_360,local_2f8,&local_128,0);
                      local_1f0 = CONCAT44(local_1f0._4_4_,(uint)local_1f0 & ~uStack_200._4_4_);
                      FUN_1449c0562(&uStack_200);
                      lVar23 = local_318;
                      plVar22 = local_338;
                    } while (local_208 != pcVar30 ||
                             (local_1f8 != pppcVar31 || local_1f0._4_4_ != iVar13));
                  }
                }
                local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_170._4_4_);
                FUN_1449c0562(&uStack_170);
                piVar21 = local_340;
                piVar24 = local_348;
                plVar33 = local_320;
              } while (local_178 != local_358 ||
                       (local_168 != ppcVar32 || local_160._4_4_ != local_32c));
            }
          }
        }
LAB_146ec31d2:
        piVar24 = piVar24 + 1;
      } while (piVar24 != piVar21);
      iVar13 = (int)local_350;
      FUN_1408a70b0(lVar23,(int)uStack_1b0 + iVar13,DAT_14c9974c8);
      if (0 < (int)uStack_1b0) {
        lVar16 = 0;
        do {
          pcVar19 = local_1b8 + lVar16 * 8;
          pcVar30 = (code *)(lVar16 * 8 + plVar33[2] + (longlong)iVar13 * 8);
          if (pcVar19 != pcVar30) {
            puVar3 = *(undefined8 **)pcVar30;
            *(longlong *)pcVar30 = *(longlong *)pcVar19;
            *(longlong *)pcVar19 = 0;
            if (puVar3 != (undefined8 *)0x0) {
              LOCK();
              piVar21 = (int *)(puVar3 + 1);
              *piVar21 = *piVar21 + -1;
              UNLOCK();
              if ((*piVar21 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                (**(code **)*puVar3)(puVar3,1);
              }
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)uStack_1b0);
      }
      FUN_1402ef3f6(local_1b8);
      if (local_1b8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_146ec1810(lVar23);
  }
LAB_146ec3296:
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140f35b7a(local_2a8,uStack_2a0 & 0xffffffff);
  if (local_2a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_146ec8e6b(local_298,uStack_290 & 0xffffffff);
  if (local_298 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_146ebe7b8(local_288);
  if ((local_a0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec335a FUN_146ec335a body=5782 status=ok
// SIG undefined FUN_146ec335a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ec335a(longlong param_1,double *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  double dVar61;
  undefined1 auStack_308 [32];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  float *local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  float *local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  double dVar5;
  
  dVar3 = DAT_14c8463e8;
  dVar46 = DAT_14c8463e0;
  dVar47 = DAT_14c8463d8;
  dVar30 = DAT_14c8463d0;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  bVar6 = *(byte *)(param_1 + 0x1c);
  if ((char)bVar6 < '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_308);
  }
  if (0x3f < bVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_308);
  }
  switch(bVar6 & 0x1f) {
  case 0:
    if (bVar6 != 0) break;
    local_2c8 = *(double *)(param_1 + 0x20);
    dStack_2c0 = *(double *)(param_1 + 0x28);
    dVar4 = *(double *)(param_1 + 0x30);
    dVar5 = *(double *)(param_1 + 0x10);
    dVar9 = *(double *)(param_1 + 0x10);
    dVar56 = *(double *)(param_1 + 0x10);
    local_298 = (float *)0x0;
    uStack_290 = CONCAT44(uStack_290._4_4_,0x2a);
    FUN_1405161ea(&local_298,0x2a,0);
    memcpy(local_298,&DAT_14c996c60,0x1f8);
    iVar12 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
      FUN_146ec8f92(param_3,iVar12);
    }
    lVar17 = *param_3;
    lVar13 = (longlong)iVar12 * 0x70;
    plVar2 = (longlong *)(lVar17 + lVar13);
    puVar14 = (undefined8 *)(lVar17 + 0x10 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined8 *)(lVar17 + lVar13) = 0;
    ((undefined8 *)(lVar17 + lVar13))[1] = 0;
    puVar14 = (undefined8 *)(lVar17 + 0x20 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0x3ff0000000000000;
    puVar14 = (undefined8 *)(lVar17 + 0x30 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14 = (undefined8 *)(lVar17 + 0x40 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0;
    auVar58 = _DAT_149934d80;
    dVar61 = (double)DAT_149934d80;
    dVar38 = DAT_149934d80._8_8_;
    *(undefined1 (*) [16])(lVar17 + 0x50 + lVar13) = _DAT_149934d80;
    puVar14 = (undefined8 *)(lVar17 + 0x60 + lVar13);
    *puVar14 = 0x3ff0000000000000;
    puVar14[1] = 0;
    lVar17 = FUN_14001cc68(0xb0,0x10);
    uVar11 = FUN_146d83314(lVar17,&local_298);
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    puVar14 = (undefined8 *)*plVar2;
    *plVar2 = lVar17;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar14 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar14 + 0xc) == 0)) {
        uVar11 = (**(code **)*puVar14)(puVar14,1);
      }
    }
    auVar25 = *(undefined1 (*) [16])(param_2 + 8);
    dVar45 = auVar25._0_8_;
    dVar41 = auVar25._8_8_;
    auVar26 = *(undefined1 (*) [16])(param_2 + 10);
    dVar37 = auVar26._0_8_;
    dVar42 = auVar26._8_8_;
    auVar24._8_8_ = dVar9;
    auVar24._0_8_ = dVar5;
    auVar25 = minpd(auVar24,auVar25);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = dVar56;
    auVar27 = minpd(auVar32,auVar26);
    auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    iVar12 = movmskpd(uVar11,auVar26);
    auVar25._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    uVar10 = movmskpd((int)puVar14,auVar25);
    if ((uVar10 & 0x3fffffff) == 0 && iVar12 == 0) {
      dVar60 = *param_2;
      dVar36 = param_2[1];
      dVar38 = param_2[3];
      dVar61 = param_2[3];
      dVar44 = param_2[1];
      dVar48 = param_2[1];
      dVar39 = param_2[2];
      dVar40 = param_2[3];
      dVar23 = param_2[2];
      dVar31 = param_2[2];
      dVar43 = dVar47 * dVar23 * -1.0 + dVar46 * dVar44 + dVar3 * *param_2 * 1.0 + dVar30 * dVar38;
      dVar29 = dVar30 * dVar31 * 1.0 + dVar3 * dVar48 + dVar46 * *param_2 * -1.0 + dVar47 * dVar61;
      auVar49._0_8_ =
           dVar3 * dVar23 * 1.0 + ((*param_2 * dVar47 * 1.0 + dVar46 * dVar38) - dVar30 * dVar44);
      auVar49._8_8_ =
           dVar46 * dVar31 * -1.0 + ((*param_2 * dVar30 * -1.0 + dVar3 * dVar61) - dVar47 * dVar48);
      dStack_2e0 = 0.0;
      dVar30 = local_2c8 * dVar45;
      dVar47 = dStack_2c0 * dVar41;
      dVar4 = dVar4 * dVar37;
      dVar3 = dVar42 * 0.0;
      dVar46 = dVar47 * dVar60 - dVar30 * dVar36;
      dVar48 = dVar4 * dVar36 - dVar47 * dVar39;
      dVar23 = dVar30 * dVar39 - dVar4 * dVar60;
      dVar44 = dVar3 * dVar40 - dVar3 * dVar40;
      dVar48 = dVar48 + dVar48;
      dVar23 = dVar23 + dVar23;
      dVar46 = dVar46 + dVar46;
      dVar44 = dVar44 + dVar44;
      local_108 = (dVar46 * dVar36 - dVar39 * dVar23) + dVar38 * dVar48 + dVar30 + param_2[4];
      dStack_100 = (dVar48 * dVar39 - dVar46 * dVar60) + dVar61 * dVar23 + dVar47 + param_2[5];
      local_f8 = (dVar23 * dVar60 - dVar36 * dVar48) + dVar38 * dVar46 + dVar4 + param_2[6];
      dVar30 = (dVar44 * dVar40 - dVar44 * dVar40) + dVar61 * dVar44 + dVar3 + param_2[7];
      local_2e8 = dVar56;
    }
    else {
      dStack_2e0 = dVar42 * 0.0;
      dVar23 = *param_2;
      dVar31 = param_2[1];
      dVar60 = param_2[2];
      dVar36 = dVar31 + dVar31;
      dVar39 = dVar60 + dVar60;
      dVar48 = dVar23 * (dVar23 + dVar23);
      dStack_2d0 = 0.0;
      local_198 = (1.0 - (dVar48 + dVar31 * dVar36)) * dVar37;
      dVar44 = param_2[3];
      dVar40 = dVar39 * dVar44;
      dVar43 = (dVar23 + dVar23) * param_2[3];
      dVar44 = dVar36 * dVar44;
      local_1a8 = (dVar44 + *param_2 * dVar39) * dVar37;
      local_1c8 = (dVar36 * dVar23 - dVar40) * dVar41;
      dStack_1a0 = (dVar39 * dVar31 - dVar43) * dVar37;
      local_1e8 = (dVar61 - (dVar60 * dVar39 + dVar31 * dVar36)) * dVar45;
      dStack_1c0 = (dVar38 - (dVar60 * dVar39 + dVar48)) * dVar41;
      dStack_1e0 = (dVar36 * dVar23 + dVar40) * dVar45;
      local_1b8 = (dVar39 * dVar31 + dVar43) * dVar41;
      local_1d8 = (*param_2 * dVar39 - dVar44) * dVar45;
      dStack_1d0 = 0.0;
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = param_2[4];
      dStack_180 = param_2[5];
      local_178 = param_2[6];
      uStack_170 = 0x3ff0000000000000;
      dVar44 = dVar47 + dVar47;
      dVar23 = dVar46 + dVar46;
      dVar48 = dVar30 * (dVar30 + dVar30);
      local_218 = (1.0 - (dVar48 + dVar47 * dVar44)) * dVar56;
      dVar31 = (dVar30 + dVar30) * dVar3;
      local_228 = (dVar44 * dVar3 + dVar30 * dVar23) * dVar56;
      local_248 = (dVar44 * dVar30 - dVar23 * dVar3) * dVar9;
      dStack_220 = (dVar23 * dVar47 - dVar31) * dVar56;
      local_268 = (dVar61 - (dVar46 * dVar23 + dVar47 * dVar44)) * dVar5;
      dStack_240 = (dVar38 - (dVar46 * dVar23 + dVar48)) * dVar9;
      dStack_260 = (dVar44 * dVar30 + dVar23 * dVar3) * dVar5;
      local_238 = (dVar23 * dVar47 + dVar31) * dVar9;
      local_258 = (dVar30 * dVar23 - dVar44 * dVar3) * dVar5;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208._8_8_ = dStack_2c0;
      local_208._0_8_ = local_2c8;
      uStack_1f0 = 0x3ff0000000000000;
      local_2e8 = dVar56 * dVar37;
      local_2d8 = dVar4;
      local_1f8 = dVar4;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar20._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar41);
      auVar20._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar45);
      auVar25 = blendvpd(_DAT_149936790,auVar58,auVar20);
      uVar19 = -(ulonglong)(0.0 <= dVar56 * dVar37);
      dVar30 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
      dVar47 = auVar25._0_8_;
      local_158 = local_158 * dVar47;
      uStack_160 = uStack_160 * dVar47;
      local_168 = (float *)((double)local_168 * dVar47);
      dVar47 = auVar25._8_8_;
      local_138 = local_138 * dVar47;
      local_148._8_8_ = (double)local_148._8_8_ * dVar47;
      local_148._0_8_ = dVar47 * (double)local_148._0_8_;
      local_118 = local_118 * dVar30;
      dStack_120 = dStack_120 * dVar30;
      local_128 = dVar30 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar30 = local_278 * local_278 + local_288 * local_288;
      dVar47 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar33._0_8_ = dVar30 + dVar47;
      auVar33._8_8_ = dVar30 + dVar47;
      auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
      auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
      auVar25 = sqrtpd(auVar33,auVar33);
      auVar58 = divpd(auVar58,auVar25);
      auVar57._0_8_ = auVar58._0_8_ * local_278;
      auVar57._8_8_ = auVar58._8_8_ * dStack_270;
      dVar43 = (double)((ulonglong)(local_288 * auVar58._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
      dVar29 = (double)((ulonglong)(dStack_280 * auVar58._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
      auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar21);
      dVar30 = 0.0;
    }
    plVar2[2] = (longlong)dVar43;
    plVar2[3] = (longlong)dVar29;
    *(undefined1 (*) [16])(plVar2 + 4) = auVar49;
    plVar2[6] = (longlong)local_108;
    plVar2[7] = (longlong)dStack_100;
    plVar2[8] = (longlong)local_f8;
    plVar2[9] = (longlong)dVar30;
    auVar7._8_4_ = SUB84(dVar9 * dVar41,0);
    auVar7._0_8_ = dVar5 * dVar45;
    auVar7._12_4_ = (int)((ulonglong)(dVar9 * dVar41) >> 0x20);
    *(undefined1 (*) [16])(plVar2 + 10) = auVar7;
    auVar8._8_4_ = SUB84(dVar42 * 0.0,0);
    auVar8._0_8_ = dVar56 * dVar37;
    auVar8._12_4_ = (int)((ulonglong)(dVar42 * 0.0) >> 0x20);
    *(undefined1 (*) [16])(plVar2 + 0xc) = auVar8;
    pfVar15 = local_298;
    goto LAB_146ec3fa1;
  case 1:
    if (bVar6 != 1) break;
    fVar54 = (float)*(double *)(param_1 + 0x30);
    fVar53 = (float)*(double *)(param_1 + 0x28);
    fVar52 = (float)*(double *)(param_1 + 0x20);
    fVar55 = (float)*(double *)(param_1 + 0x48);
    fVar50 = (float)*(double *)(param_1 + 0x40);
    fVar51 = (float)*(double *)(param_1 + 0x38);
    local_168 = (float *)0x0;
    uStack_160._0_4_ = 1;
    uStack_160._4_4_ = 0;
    FUN_140aacb36(&local_168,0);
    iVar12 = (uint)uStack_160;
    *local_168 = fVar52;
    local_168[1] = fVar53;
    local_168[2] = fVar54;
    lVar17 = (longlong)(int)(uint)uStack_160;
    uStack_160._0_4_ = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < (uint)uStack_160) {
      FUN_140aacb36(&local_168,iVar12);
    }
    uVar10 = (uint)uStack_160;
    local_168[lVar17 * 3] = fVar51;
    local_168[lVar17 * 3 + 1] = fVar53;
    local_168[lVar17 * 3 + 2] = fVar54;
    lVar17 = (longlong)(int)(uint)uStack_160;
    uStack_160._0_4_ = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < (uint)uStack_160) {
      FUN_140aacb36(&local_168,uVar10);
    }
    uVar10 = (uint)uStack_160;
    local_168[lVar17 * 3] = fVar52;
    local_168[lVar17 * 3 + 1] = fVar50;
    local_168[lVar17 * 3 + 2] = fVar54;
    lVar17 = (longlong)(int)(uint)uStack_160;
    uStack_160._0_4_ = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < (uint)uStack_160) {
      FUN_140aacb36(&local_168,uVar10);
    }
    uVar10 = (uint)uStack_160;
    local_168[lVar17 * 3] = fVar51;
    local_168[lVar17 * 3 + 1] = fVar50;
    local_168[lVar17 * 3 + 2] = fVar54;
    lVar17 = (longlong)(int)(uint)uStack_160;
    uStack_160._0_4_ = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < (uint)uStack_160) {
      FUN_140aacb36(&local_168,uVar10);
    }
    uVar10 = (uint)uStack_160;
    local_168[lVar17 * 3] = fVar52;
    local_168[lVar17 * 3 + 1] = fVar53;
    local_168[lVar17 * 3 + 2] = fVar55;
    lVar17 = (longlong)(int)(uint)uStack_160;
    uStack_160._0_4_ = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < (uint)uStack_160) {
      FUN_140aacb36(&local_168,uVar10);
    }
    uVar10 = (uint)uStack_160;
    local_168[lVar17 * 3] = fVar51;
    local_168[lVar17 * 3 + 1] = fVar53;
    local_168[lVar17 * 3 + 2] = fVar55;
    lVar17 = (longlong)(int)(uint)uStack_160;
    uStack_160._0_4_ = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < (uint)uStack_160) {
      FUN_140aacb36(&local_168,uVar10);
    }
    uVar10 = (uint)uStack_160;
    local_168[lVar17 * 3] = fVar52;
    local_168[lVar17 * 3 + 1] = fVar50;
    local_168[lVar17 * 3 + 2] = fVar55;
    lVar17 = (longlong)(int)(uint)uStack_160;
    uStack_160._0_4_ = (uint)uStack_160 + 1;
    if (uStack_160._4_4_ < (uint)uStack_160) {
      FUN_140aacb36(&local_168,uVar10);
    }
    local_168[lVar17 * 3] = fVar51;
    local_168[lVar17 * 3 + 1] = fVar50;
    local_168[lVar17 * 3 + 2] = fVar55;
    iVar12 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
      FUN_146ec8f92(param_3,iVar12);
    }
    lVar17 = *param_3;
    lVar18 = (longlong)iVar12 * 0x70;
    puVar14 = (undefined8 *)(lVar17 + 0x10 + lVar18);
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined8 *)(lVar17 + lVar18) = 0;
    ((undefined8 *)(lVar17 + lVar18))[1] = 0;
    puVar14 = (undefined8 *)(lVar17 + 0x20 + lVar18);
    *puVar14 = 0;
    puVar14[1] = 0x3ff0000000000000;
    puVar14 = (undefined8 *)(lVar17 + 0x30 + lVar18);
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14 = (undefined8 *)(lVar17 + 0x40 + lVar18);
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14 = (undefined8 *)(lVar17 + 0x50 + lVar18);
    *puVar14 = 0x3ff0000000000000;
    puVar14[1] = 0x3ff0000000000000;
    puVar14 = (undefined8 *)(lVar17 + 0x60 + lVar18);
    *puVar14 = 0x3ff0000000000000;
    puVar14[1] = 0;
    lVar13 = FUN_14001cc68(0xb0,0x10);
    FUN_146d83314(lVar13,&local_168,0,0);
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    puVar14 = *(undefined8 **)(lVar17 + lVar18);
    *(longlong *)(lVar17 + lVar18) = lVar13;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar14 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar14 + 0xc) == 0)) {
        (**(code **)*puVar14)(puVar14,1);
      }
    }
    pdVar16 = (double *)(lVar17 + lVar18 + 0x10);
    for (lVar13 = 0xc; pfVar15 = local_168, lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar16 = *param_2;
      param_2 = param_2 + 1;
      pdVar16 = pdVar16 + 1;
    }
    goto LAB_146ec3fa1;
  case 3:
    if (bVar6 != 3) break;
    dVar46 = *(double *)(param_1 + 0x50) * 0.5;
    dVar30 = *(double *)(param_1 + 0x40);
    dVar47 = *(double *)(param_1 + 0x48);
    local_2b0 = *(double *)(param_1 + 0x28);
    local_2a8 = *(double *)(param_1 + 0x30);
    uStack_2a0 = 0;
    local_2c8 = *(double *)(param_1 + 0x38) * dVar46 + *(double *)(param_1 + 0x20);
    dStack_2c0 = 0.0;
    FUN_140d92ea8(&local_168,param_1 + 0x38);
    FUN_141706d54(&local_168,&local_1e8);
    local_2d8 = local_1e8;
    dStack_2d0 = dStack_1e0;
    fVar55 = (float)*(double *)(param_1 + 0x50) * 0.5;
    local_2e8 = local_1d8;
    dStack_2e0 = dStack_1d0;
    local_298 = (float *)0x0;
    uStack_290 = 0;
    lVar17 = 8;
    do {
      fVar53 = (float)*(double *)(param_1 + 0x10);
      fVar50 = *(float *)((longlong)&DAT_14c996e60 + lVar17);
      fVar51 = *(float *)(lVar17 + 0x14c996e5c);
      fVar52 = *(float *)(lVar17 + 0x14c996e58);
      lVar13 = (longlong)(int)(uint)uStack_290;
      uVar10 = (uint)uStack_290 + 1;
      if (uStack_290._4_4_ < uVar10) {
        uVar19 = uStack_290 & 0xffffffff;
        uStack_290._0_4_ = uVar10;
        FUN_140aacb36(&local_298,uVar19);
        uVar10 = (uint)uStack_290;
      }
      uStack_290._0_4_ = uVar10;
      uVar10 = (uint)uStack_290;
      local_298[lVar13 * 3] = fVar52 * fVar53 + 0.0;
      local_298[lVar13 * 3 + 1] = fVar51 * fVar53 + 0.0;
      local_298[lVar13 * 3 + 2] = fVar50 * fVar53 + fVar55;
      fVar53 = -fVar53;
      fVar50 = *(float *)((longlong)&DAT_14c996e60 + lVar17);
      fVar51 = *(float *)(lVar17 + 0x14c996e5c);
      fVar52 = *(float *)(lVar17 + 0x14c996e58);
      lVar13 = (longlong)(int)(uint)uStack_290;
      uStack_290._0_4_ = (uint)uStack_290 + 1;
      if (uStack_290._4_4_ < (uint)uStack_290) {
        FUN_140aacb36(&local_298,uVar10);
      }
      local_298[lVar13 * 3] = fVar53 * fVar52;
      local_298[lVar13 * 3 + 1] = fVar51 * fVar53;
      local_298[lVar13 * 3 + 2] = fVar50 * fVar53 - fVar55;
      lVar17 = lVar17 + 0xc;
    } while (lVar17 != 0x140);
    iVar12 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
      FUN_146ec8f92(param_3,iVar12);
    }
    lVar17 = *param_3;
    lVar13 = (longlong)iVar12 * 0x70;
    plVar2 = (longlong *)(lVar17 + lVar13);
    puVar14 = (undefined8 *)(lVar17 + 0x10 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined8 *)(lVar17 + lVar13) = 0;
    ((undefined8 *)(lVar17 + lVar13))[1] = 0;
    puVar14 = (undefined8 *)(lVar17 + 0x20 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0x3ff0000000000000;
    puVar14 = (undefined8 *)(lVar17 + 0x30 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14 = (undefined8 *)(lVar17 + 0x40 + lVar13);
    *puVar14 = 0;
    puVar14[1] = 0;
    auVar58 = _DAT_149934d80;
    dVar3 = (double)DAT_149934d80;
    dVar4 = DAT_149934d80._8_8_;
    *(undefined1 (*) [16])(lVar17 + 0x50 + lVar13) = _DAT_149934d80;
    puVar14 = (undefined8 *)(lVar17 + 0x60 + lVar13);
    *puVar14 = 0x3ff0000000000000;
    puVar14[1] = 0;
    lVar17 = FUN_14001cc68(0xb0,0x10);
    uVar11 = FUN_146d83314(lVar17,&local_298);
    dVar5 = local_2c8;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    dVar30 = dVar30 * dVar46 + local_2b0;
    dVar47 = local_2a8 + dVar47 * dVar46;
    puVar14 = (undefined8 *)*plVar2;
    *plVar2 = lVar17;
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar14 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar14 + 0xc) == 0)) {
        uVar11 = (**(code **)*puVar14)(puVar14,1);
      }
    }
    auVar25 = *(undefined1 (*) [16])(param_2 + 8);
    dVar46 = auVar25._0_8_;
    dVar56 = auVar25._8_8_;
    auVar26 = *(undefined1 (*) [16])(param_2 + 10);
    dVar9 = auVar26._0_8_;
    auVar27 = minpd(auVar58,auVar25);
    auVar34 = minpd(ZEXT816(0x3ff0000000000000),auVar26);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    iVar12 = movmskpd(uVar11,auVar28);
    auVar27._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    uVar10 = movmskpd((int)puVar14,auVar27);
    if ((uVar10 & 0x3fffffff) == 0 && iVar12 == 0) {
      dVar41 = *param_2;
      dVar42 = param_2[1];
      dVar4 = param_2[3];
      dVar3 = param_2[3];
      dVar61 = param_2[1];
      dVar38 = param_2[1];
      dVar44 = param_2[2];
      dVar48 = param_2[3];
      dVar45 = param_2[2];
      dVar37 = param_2[2];
      dVar23 = dStack_2d0 * dVar45 * -1.0 +
               local_2e8 * dVar61 + dStack_2e0 * *param_2 * 1.0 + local_2d8 * dVar4;
      dVar31 = local_2d8 * dVar37 * 1.0 +
               dStack_2e0 * dVar38 + local_2e8 * *param_2 * -1.0 + dStack_2d0 * dVar3;
      auVar58._0_8_ =
           dStack_2e0 * dVar45 * 1.0 +
           ((*param_2 * dStack_2d0 * 1.0 + local_2e8 * dVar4) - local_2d8 * dVar61);
      auVar58._8_8_ =
           local_2e8 * dVar37 * -1.0 +
           ((*param_2 * local_2d8 * -1.0 + dStack_2e0 * dVar3) - dStack_2d0 * dVar38);
      dVar5 = dVar5 * dVar46;
      dVar30 = dVar30 * dVar56;
      dVar47 = dVar47 * dVar9;
      dVar61 = auVar26._8_8_ * 0.0;
      dVar46 = dVar30 * dVar41 - dVar5 * dVar42;
      dVar38 = dVar47 * dVar42 - dVar30 * dVar44;
      dVar45 = dVar5 * dVar44 - dVar47 * dVar41;
      dVar56 = dVar61 * dVar48 - dVar61 * dVar48;
      dVar38 = dVar38 + dVar38;
      dVar45 = dVar45 + dVar45;
      dVar46 = dVar46 + dVar46;
      dVar56 = dVar56 + dVar56;
      local_108 = (dVar46 * dVar42 - dVar44 * dVar45) + dVar4 * dVar38 + dVar5 + param_2[4];
      dStack_100 = (dVar38 * dVar44 - dVar46 * dVar41) + dVar3 * dVar45 + dVar30 + param_2[5];
      local_f8 = (dVar45 * dVar41 - dVar42 * dVar38) + dVar4 * dVar46 + dVar47 + param_2[6];
      dVar30 = (dVar56 * dVar48 - dVar56 * dVar48) + dVar3 * dVar56 + dVar61 + param_2[7];
    }
    else {
      dVar38 = *param_2;
      dVar45 = param_2[1];
      dVar61 = param_2[2];
      dVar37 = dVar45 + dVar45;
      dVar41 = dVar61 + dVar61;
      dVar48 = dVar38 * (dVar38 + dVar38);
      local_1e8 = (dVar3 - (dVar61 * dVar41 + dVar45 * dVar37)) * dVar46;
      dStack_1c0 = (dVar4 - (dVar61 * dVar41 + dVar48)) * dVar56;
      dVar61 = param_2[3];
      dVar42 = dVar41 * dVar61;
      dVar44 = (dVar38 + dVar38) * param_2[3];
      dVar61 = dVar37 * dVar61;
      local_1c8 = (dVar37 * dVar38 - dVar42) * dVar56;
      dStack_1a0 = (dVar41 * dVar45 - dVar44) * dVar9;
      local_1a8 = (dVar61 + *param_2 * dVar41) * dVar9;
      dStack_1e0 = (dVar37 * dVar38 + dVar42) * dVar46;
      local_1b8 = (dVar41 * dVar45 + dVar44) * dVar56;
      local_198 = (1.0 - (dVar48 + dVar45 * dVar37)) * dVar9;
      local_1d8 = (*param_2 * dVar41 - dVar61) * dVar46;
      dStack_1d0 = 0.0;
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = param_2[4];
      dStack_180 = param_2[5];
      local_178 = param_2[6];
      uStack_170 = 0x3ff0000000000000;
      dVar38 = dStack_2d0 + dStack_2d0;
      dVar61 = local_2e8 + local_2e8;
      dVar45 = local_2d8 * (local_2d8 + local_2d8);
      local_268 = dVar3 - (local_2e8 * dVar61 + dStack_2d0 * dVar38);
      dStack_240 = dVar4 - (local_2e8 * dVar61 + dVar45);
      local_218 = 1.0 - (dVar45 + dStack_2d0 * dVar38);
      dStack_220 = (local_2d8 + local_2d8) * dStack_2e0;
      dStack_260 = dVar38 * local_2d8 + dVar61 * dStack_2e0;
      local_238 = dVar61 * dStack_2d0 + dStack_220;
      local_248 = dVar38 * local_2d8 - dVar61 * dStack_2e0;
      dStack_220 = dVar61 * dStack_2d0 - dStack_220;
      local_228 = dVar38 * dStack_2e0 + local_2d8 * dVar61;
      local_258 = local_2d8 * dVar61 - dVar38 * dStack_2e0;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208._8_4_ = SUB84(dVar30,0);
      local_208._0_8_ = dVar5;
      local_208._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      uStack_1f0 = 0x3ff0000000000000;
      local_1f8 = dVar47;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar34._8_8_ = -(ulonglong)(0.0 <= dVar56);
      auVar34._0_8_ = -(ulonglong)(0.0 <= dVar46);
      auVar27 = blendvpd(_DAT_149936790,auVar58,auVar34);
      uVar19 = -(ulonglong)(0.0 <= dVar9 * 1.0);
      dVar30 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
      dVar47 = auVar27._0_8_;
      local_158 = local_158 * dVar47;
      uStack_160 = uStack_160 * dVar47;
      local_168 = (float *)((double)local_168 * dVar47);
      dVar47 = auVar27._8_8_;
      local_138 = local_138 * dVar47;
      local_148._8_8_ = (double)local_148._8_8_ * dVar47;
      local_148._0_8_ = dVar47 * (double)local_148._0_8_;
      local_118 = local_118 * dVar30;
      dStack_120 = dStack_120 * dVar30;
      local_128 = dVar30 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar30 = local_278 * local_278 + local_288 * local_288;
      dVar47 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar35._0_8_ = dVar30 + dVar47;
      auVar35._8_8_ = dVar30 + dVar47;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
      auVar27 = sqrtpd(auVar35,auVar35);
      auVar58 = divpd(auVar58,auVar27);
      auVar59._0_8_ = auVar58._0_8_ * local_278;
      auVar59._8_8_ = auVar58._8_8_ * dStack_270;
      dVar23 = (double)((ulonglong)(local_288 * auVar58._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
      dVar31 = (double)((ulonglong)(dStack_280 * auVar58._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
      auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar22);
      dVar30 = 0.0;
    }
    plVar2[2] = (longlong)dVar23;
    plVar2[3] = (longlong)dVar31;
    *(undefined1 (*) [16])(plVar2 + 4) = auVar58;
    plVar2[6] = (longlong)local_108;
    plVar2[7] = (longlong)dStack_100;
    plVar2[8] = (longlong)local_f8;
    plVar2[9] = (longlong)dVar30;
    *(undefined1 (*) [16])(plVar2 + 10) = auVar25;
    plVar2[0xc] = (longlong)(dVar9 * 1.0);
    plVar2[0xd] = (longlong)(auVar26._8_8_ * 0.0);
    pfVar15 = local_298;
LAB_146ec3fa1:
    if (pfVar15 != (float *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 4:
    lVar17 = 0;
    if (bVar6 == 4) {
      lVar17 = param_1;
    }
    dVar45 = *param_2;
    dVar37 = param_2[1];
    dVar41 = param_2[2];
    dVar47 = param_2[3];
    dVar30 = param_2[3];
    dVar42 = *(double *)(lVar17 + 0x30);
    dVar44 = *(double *)(lVar17 + 0x38);
    dVar48 = *(double *)(lVar17 + 0x40);
    dVar23 = *(double *)(lVar17 + 0x48);
    dVar3 = param_2[1];
    dVar46 = param_2[1];
    dVar31 = *(double *)(lVar17 + 0x50) * param_2[8];
    dVar38 = *(double *)(lVar17 + 0x58) * param_2[9];
    dVar9 = *(double *)(lVar17 + 0x60) * param_2[10];
    dVar56 = dVar38 * dVar45 - dVar37 * dVar31;
    dVar60 = dVar9 * dVar37 - dVar41 * dVar38;
    dVar61 = dVar31 * dVar41 - dVar45 * dVar9;
    dVar60 = dVar60 + dVar60;
    dVar61 = dVar61 + dVar61;
    dVar56 = dVar56 + dVar56;
    dVar4 = param_2[2];
    dVar5 = param_2[2];
    local_168 = (float *)(dVar44 * dVar4 * -1.0 +
                         dVar48 * dVar3 + *param_2 * dVar23 * 1.0 + dVar47 * dVar42);
    uStack_160 = dVar42 * dVar5 * 1.0 + dVar23 * dVar46 + *param_2 * dVar48 * -1.0 + dVar30 * dVar44
    ;
    dVar38 = (dVar41 * dVar60 - dVar45 * dVar56) + dVar30 * dVar61 + dVar38 + param_2[5];
    local_138 = dVar56 * dVar47 + dVar9 + (dVar61 * dVar45 - dVar60 * dVar37) + param_2[6];
    local_158 = dVar23 * dVar4 * 1.0 +
                ((*param_2 * dVar44 * 1.0 + dVar47 * dVar48) - dVar3 * dVar42);
    dStack_150 = dVar48 * dVar5 * -1.0 +
                 ((*param_2 * dVar42 * -1.0 + dVar30 * dVar23) - dVar46 * dVar44);
    local_148._8_4_ = SUB84(dVar38,0);
    local_148._0_8_ = (dVar56 * dVar37 - dVar61 * dVar41) + dVar47 * dVar60 + dVar31 + param_2[4];
    local_148._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_130 = 0;
    local_128 = 1.0;
    dStack_120 = 1.0;
    local_118 = 1.0;
    uStack_110 = 0;
    if (*(longlong *)(lVar17 + 0x20) != 0) {
      FUN_146ec335a(*(longlong *)(lVar17 + 0x20),&local_168,param_3);
    }
    break;
  case 5:
    lVar17 = 0;
    if (bVar6 == 5) {
      lVar17 = param_1;
    }
    iVar12 = *(int *)(lVar17 + 0x28);
    if ((longlong)iVar12 != 0) {
      lVar17 = *(longlong *)(lVar17 + 0x20);
      lVar13 = 0;
      do {
        lVar18 = *(longlong *)(lVar17 + lVar13);
        if (lVar18 != 0) {
          FUN_146ec335a(lVar18,param_2,param_3);
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar12 * 8 != lVar13);
    }
    break;
  case 8:
    if (bVar6 == 8) {
      iVar12 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
        FUN_146ec8f92(param_3,iVar12);
      }
      lVar17 = *param_3;
      lVar18 = (longlong)iVar12 * 0x70;
      puVar14 = (undefined8 *)(lVar17 + 0x10 + lVar18);
      *puVar14 = 0;
      puVar14[1] = 0;
      *(undefined8 *)(lVar17 + lVar18) = 0;
      ((undefined8 *)(lVar17 + lVar18))[1] = 0;
      puVar14 = (undefined8 *)(lVar17 + 0x20 + lVar18);
      *puVar14 = 0;
      puVar14[1] = 0x3ff0000000000000;
      puVar14 = (undefined8 *)(lVar17 + 0x30 + lVar18);
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14 = (undefined8 *)(lVar17 + 0x40 + lVar18);
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14 = (undefined8 *)(lVar17 + 0x50 + lVar18);
      *puVar14 = 0x3ff0000000000000;
      puVar14[1] = 0x3ff0000000000000;
      puVar14 = (undefined8 *)(lVar17 + 0x60 + lVar18);
      *puVar14 = 0x3ff0000000000000;
      puVar14[1] = 0;
      lVar13 = FUN_14001cc68(0xb0,0x10);
      FUN_140515e58(lVar13,param_1);
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      puVar14 = *(undefined8 **)(lVar17 + lVar18);
      *(longlong *)(lVar17 + lVar18) = lVar13;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar14 + 0xc) == 0)) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
      pdVar16 = (double *)(lVar17 + lVar18 + 0x10);
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar16 = *param_2;
        param_2 = param_2 + 1;
        pdVar16 = pdVar16 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_308);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec4ae6 FUN_146ec4ae6 body=1375 status=ok
// SIG undefined FUN_146ec4ae6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ec4ae6(undefined8 param_1,undefined8 param_2,longlong param_3,double *param_4,
                  double *param_5,undefined8 param_6)

{
  float fVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  undefined1 auVar5 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  int iVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auStack_1e8 [40];
  longlong local_1c0 [2];
  longlong local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188 [184];
  ulonglong local_d0;
  double dVar3;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_142a0173c();
  auVar10 = _DAT_149934d80;
  if (param_4 != (double *)0x0) {
    iVar11 = 0;
    if ((longlong)local_1a8 != 0) {
      lVar12 = 0;
      do {
        dVar6 = (double)*(float *)(local_1b0 + lVar12) - param_4[4];
        dVar21 = (double)*(float *)(local_1b0 + 4 + lVar12) - param_4[5];
        dVar22 = (double)*(float *)(local_1b0 + 8 + lVar12) - param_4[6];
        dVar19 = *param_4;
        dVar7 = -dVar19;
        dVar8 = -param_4[1];
        dVar2 = param_4[2] * -1.0;
        dVar4 = param_4[3] * 1.0;
        dVar18 = dVar6 * dVar2 - dVar7 * dVar22;
        dVar9 = dVar21 * dVar7 - dVar6 * dVar8;
        dVar14 = dVar22 * dVar8 - dVar21 * dVar2;
        dVar14 = dVar14 + dVar14;
        dVar18 = dVar18 + dVar18;
        dVar9 = dVar9 + dVar9;
        auVar5 = *(undefined1 (*) [16])(param_4 + 8);
        auVar24 = divpd(auVar10,auVar5);
        dVar3 = param_4[10];
        *(float *)(local_1b0 + lVar12) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar24._0_8_
                             ) * ((dVar9 * dVar8 - dVar18 * dVar2) + dVar4 * dVar14 + dVar6));
        *(float *)(local_1b0 + 4 + lVar12) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar24._8_8_
                             ) * (dVar19 * dVar9 + dVar2 * dVar14 + dVar4 * dVar18 + dVar21));
        *(float *)(local_1b0 + 8 + lVar12) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar3)) &
                             (ulonglong)(1.0 / dVar3)) *
                    (dVar4 * dVar9 + dVar22 + (dVar18 * dVar7 - dVar14 * dVar8)));
        lVar12 = lVar12 + 0xc;
        iVar11 = local_1a8;
      } while ((longlong)local_1a8 * 0xc != lVar12);
    }
    local_1a0 = 0x7f7fffff7f7fffff;
    uStack_198 = 0xff7fffff7f7fffff;
    local_190 = &DAT_ff7fffffff7fffff;
    if (iVar11 != 0) {
      fVar20 = -3.4028235e+38;
      fVar13 = -3.4028235e+38;
      fVar15 = 3.4028235e+38;
      fVar16 = 3.4028235e+38;
      lVar12 = 0;
      fVar17 = 3.4028235e+38;
      fVar23 = fVar20;
      do {
        fVar1 = *(float *)(local_1b0 + 8 + lVar12);
        if (fVar1 <= fVar16) {
          fVar16 = fVar1;
        }
        fVar1 = *(float *)(local_1b0 + 4 + lVar12);
        if (fVar1 <= fVar17) {
          fVar17 = fVar1;
        }
        if (*(float *)(local_1b0 + lVar12) <= fVar15) {
          fVar15 = *(float *)(local_1b0 + lVar12);
        }
        local_1a0 = CONCAT44(fVar17,fVar15);
        fVar1 = *(float *)(local_1b0 + 8 + lVar12);
        if (fVar13 <= fVar1) {
          fVar13 = fVar1;
        }
        fVar1 = *(float *)(local_1b0 + 4 + lVar12);
        if (fVar20 <= fVar1) {
          fVar20 = fVar1;
        }
        if (fVar23 <= *(float *)(local_1b0 + lVar12)) {
          fVar23 = *(float *)(local_1b0 + lVar12);
        }
        uStack_198 = CONCAT44(fVar23,fVar16);
        local_190 = (undefined1 *)CONCAT44(fVar13,fVar20);
        lVar12 = lVar12 + 0xc;
      } while ((longlong)iVar11 * 0xc != lVar12);
    }
  }
  FUN_142a01956(local_1c0,param_3,0);
  if ((param_5 != (double *)0x0) && ((longlong)local_1a8 != 0)) {
    lVar12 = 0;
    do {
      dVar18 = (double)*(float *)(local_1b0 + lVar12) * param_5[8];
      dVar19 = (double)*(float *)(local_1b0 + 4 + lVar12) * param_5[9];
      dVar14 = (double)*(float *)(local_1b0 + 8 + lVar12) * param_5[10];
      dVar9 = *param_5;
      dVar7 = param_5[1];
      dVar8 = param_5[2];
      dVar2 = param_5[3];
      dVar3 = param_5[3];
      dVar21 = dVar19 * dVar9 - dVar18 * dVar7;
      dVar22 = dVar14 * dVar7 - dVar19 * dVar8;
      dVar25 = dVar18 * dVar8 - dVar9 * dVar14;
      dVar22 = dVar22 + dVar22;
      dVar25 = dVar25 + dVar25;
      dVar21 = dVar21 + dVar21;
      dVar6 = param_5[5];
      dVar4 = param_5[6];
      *(float *)(local_1b0 + lVar12) =
           (float)((dVar21 * dVar7 - dVar25 * dVar8) + dVar2 * dVar22 + dVar18 + param_5[4]);
      *(float *)(local_1b0 + 4 + lVar12) =
           (float)((dVar8 * dVar22 - dVar9 * dVar21) + dVar3 * dVar25 + dVar19 + dVar6);
      *(float *)(local_1b0 + 8 + lVar12) =
           (float)(dVar21 * dVar2 + dVar14 + (dVar25 * dVar9 - dVar22 * dVar7) + dVar4);
      lVar12 = lVar12 + 0xc;
    } while ((longlong)local_1a8 * 0xc != lVar12);
  }
  FUN_142a021ed(&local_1b0,param_6);
  FUN_146d83314(local_188,&local_1b0,*(undefined8 *)(param_3 + 0x10),0);
  FUN_146d834a8(param_1,local_188);
  FUN_146d835c4(local_188);
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ec5046 FUN_146ec5046 body=398 status=ok
// SIG undefined FUN_146ec5046(void)

longlong * FUN_146ec5046(longlong param_1,longlong *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  lVar9 = (longlong)param_3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar9 * 8);
  FUN_14051b394(param_2,*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24),1);
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(lVar3 + lVar9 * 8);
  if (0 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) {
    lVar10 = 0x10;
    uVar6 = 0;
    do {
      uVar5 = uVar6 >> 9 & 0x7fffff;
      uVar7 = (uint)uVar6 & 0x1ff;
      uVar8 = (ulonglong)uVar7;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar5 * 8) +
                             (ulonglong)uVar7 * 2) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar5 * 8);
        local_68 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18) * *(double *)(param_1 + 0xa8);
        local_70 = *(double *)(lVar4 + 8 + uVar8 * 0x18) * *(double *)(param_1 + 0xa0);
        local_78 = *(double *)(lVar4 + uVar8 * 0x18) * *(double *)(param_1 + 0x98);
        FUN_146bed047(&local_60,param_1 + 0x60,&local_78);
        dVar1 = *(double *)(param_1 + 0x90);
        dVar2 = *(double *)(param_1 + 0x88);
        lVar4 = *param_2;
        *(double *)(lVar4 + -0x10 + lVar10) = local_60 + *(double *)(param_1 + 0x80);
        *(double *)(lVar4 + -8 + lVar10) = local_58 + dVar2;
        *(double *)(lVar4 + lVar10) = local_50 + dVar1;
        lVar3 = *(longlong *)(param_1 + 0x50);
      }
      lVar4 = *(longlong *)(lVar3 + lVar9 * 8);
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((longlong)uVar6 < (longlong)(*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ec51d6 FUN_146ec51d6 body=120 status=ok
// SIG undefined FUN_146ec51d6(void)

void FUN_146ec51d6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_146ec7ef0(param_1 + 0x50);
  return;
}



// FUNCTION 146ec524e FUN_146ec524e body=3402 status=ok
// SIG undefined FUN_146ec524e(void)

void FUN_146ec524e(undefined8 param_1,undefined4 *param_2,char param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_748 [32];
  undefined1 **local_728;
  longlong *local_720;
  undefined4 local_718;
  longlong *local_710;
  longlong local_708;
  longlong *local_6f8;
  longlong local_6f0;
  undefined8 local_6e8;
  undefined4 *local_6e0;
  longlong local_6d8;
  int *local_6d0;
  int *local_6c8;
  undefined1 local_6bc [4];
  longlong local_6b8;
  undefined8 uStack_6b0;
  longlong local_6a8;
  undefined8 uStack_6a0;
  undefined1 *local_690;
  longlong **local_688;
  undefined1 *local_680;
  longlong **local_678;
  undefined1 *local_670;
  longlong **local_668;
  longlong local_660;
  int local_658;
  longlong *local_650;
  longlong *local_648;
  longlong *local_640;
  longlong local_638;
  undefined8 uStack_630;
  longlong local_628;
  undefined8 uStack_620;
  int *local_618;
  undefined8 uStack_610;
  longlong local_608;
  undefined8 uStack_600;
  undefined1 local_5f8 [64];
  longlong local_5b8;
  longlong local_580;
  longlong local_548;
  undefined8 *local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d4;
  undefined4 local_4cc;
  longlong local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  longlong *local_490;
  undefined8 local_488;
  uint local_480;
  undefined4 local_47c;
  longlong *local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_748;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c996fd0) && (FUN_144b3d300(&DAT_14c996fd0), DAT_14c996fd0 == -1)) {
    DAT_14c996fc8 = DAT_14c9974c8;
    _Init_thread_footer(&DAT_14c996fd0);
  }
  FUN_146ebdf1a(&local_78,param_1);
  if (local_68 == '\x01') {
    FUN_146ea7fa0(local_5f8,param_1);
    local_608 = 0;
    uStack_600 = 0;
    if (((local_5b8 != 0) && (local_580 != 0)) && (local_548 != 0)) {
      FUN_146eb7819(local_548,local_5b8,&local_608);
    }
    local_618 = (int *)0x0;
    uStack_610 = 0;
    local_6f8 = local_78;
    if (param_3 == '\0') {
      iVar13 = (**(code **)(*local_78 + 0x60))(local_78);
      if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      if ((int)uStack_610._4_4_ < iVar13) {
        FUN_14481578e(&local_618,iVar13);
      }
      iVar13 = (**(code **)(*local_78 + 0x60))(local_78);
      if (0 < iVar13) {
        iVar13 = 0;
        do {
          uVar5 = uStack_610;
          lVar19 = (longlong)(int)uStack_610;
          uVar6 = (int)uStack_610 + 1;
          uStack_610 = CONCAT44(uStack_610._4_4_,uVar6);
          if (uStack_610._4_4_ < uVar6) {
            FUN_1446f48e2(&local_618,uVar5 & 0xffffffff);
          }
          local_618[lVar19] = iVar13;
          iVar13 = iVar13 + 1;
          iVar7 = (**(code **)(*local_6f8 + 0x60))();
        } while (iVar13 < iVar7);
      }
    }
    else {
      uVar6 = *(uint *)(param_4 + 1);
      if ((longlong)(int)uVar6 != 0) {
        uStack_610 = (ulonglong)uVar6;
        FUN_1446f48e2(&local_618,0);
        memcpy(local_618,(void *)*param_4,(longlong)(int)uVar6 << 2);
      }
    }
    if ((param_5 != 0) && (FUN_146ba22a4(param_5), *(longlong *)(param_2 + 4) != 0)) {
      FUN_146ec5f9a(param_5);
    }
    local_6e0 = param_2;
    if ((longlong)(int)uStack_610 != 0) {
      piVar8 = local_618 + (int)uStack_610;
      piVar9 = local_618;
      plVar12 = local_6f8;
      local_6e8 = param_1;
      local_6d0 = piVar8;
      do {
        lVar10 = (longlong)*piVar9;
        lVar19 = plVar12[2];
        lVar18 = lVar10 * 0x50;
        iVar13 = *(int *)(lVar19 + 8 + lVar18) - *(int *)(lVar19 + 0x34 + lVar18);
        if (1 < iVar13) {
          plVar17 = (longlong *)(lVar19 + lVar18);
          local_628 = 0;
          uStack_620 = 0;
          plVar12 = plVar17 + 2;
          local_1a8 = 0x100000000;
          local_198 = 0xffffffff;
          local_190 = local_190 & 0xffffffff00000000;
          local_6d8 = lVar10;
          local_6c8 = piVar9;
          local_1a0 = plVar12;
          if ((int)plVar17[5] != 0) {
            FUN_1449c0562(&local_1a8);
          }
          local_3b0 = local_198;
          local_3a8 = (undefined4)local_190;
          local_3a4 = local_190._4_4_;
          uStack_3c0 = local_1a8;
          local_3b8 = local_1a0;
          local_198._4_4_ = (int)plVar17[5];
          local_1a8 = CONCAT44(1 << ((byte)local_198._4_4_ & 0x1f),local_198._4_4_ >> 5);
          local_198._0_4_ = -1 << ((byte)local_198._4_4_ & 0x1f);
          local_190 = CONCAT44(local_190._4_4_,local_198._4_4_) & 0xffffffffffffffe0;
          local_6f0 = lVar18;
          local_3c8 = plVar17;
          local_1a0 = plVar12;
          if ((int)plVar17[5] != local_198._4_4_) {
            FUN_1449c0562(&local_1a8);
          }
          iVar7 = local_198._4_4_;
          plVar12 = local_1a0;
          if ((local_3c8 != plVar17 || local_3b8 != local_1a0) || local_3b0._4_4_ != local_198._4_4_
             ) {
            do {
              uVar5 = uStack_620;
              uVar3 = *(undefined8 *)
                       (*(longlong *)(local_70 + 0x10) +
                       (longlong)*(int *)(*local_3c8 + (longlong)(int)local_3b0._4_4_ * 0xc) * 8);
              lVar19 = (longlong)(int)uStack_620;
              uVar6 = (int)uStack_620 + 1;
              uStack_620 = CONCAT44(uStack_620._4_4_,uVar6);
              if (uStack_620._4_4_ < uVar6) {
                FUN_146ec8f0c(&local_628,uVar5 & 0xffffffff);
              }
              *(undefined8 *)(local_628 + lVar19 * 8) = uVar3;
              local_3b0 = CONCAT44(local_3b0._4_4_,(uint)local_3b0 & ~uStack_3c0._4_4_);
              FUN_1449c0562(&uStack_3c0);
            } while (local_3c8 != plVar17 || (local_3b8 != plVar12 || local_3b0._4_4_ != iVar7));
          }
          local_638 = 0;
          uStack_630 = 0;
          iVar7 = 0;
          uVar5 = uStack_630;
          do {
            uStack_630 = uVar5;
            iVar14 = iVar7 + 1;
            uVar5 = uStack_630;
            for (iVar16 = iVar14; uStack_630._0_4_ = (int)uVar5, iVar16 < iVar13;
                iVar16 = iVar16 + 1) {
              lVar19 = (longlong)(int)uStack_630;
              uVar6 = (int)uStack_630 + 1;
              uStack_630._4_4_ = (uint)(uVar5 >> 0x20);
              uStack_630 = CONCAT44(uStack_630._4_4_,uVar6);
              if (uStack_630._4_4_ < uVar6) {
                FUN_1406b704c(&local_638,uVar5 & 0xffffffff);
              }
              *(int *)(local_638 + lVar19 * 8) = iVar7;
              *(int *)(local_638 + 4 + lVar19 * 8) = iVar16;
              uVar5 = uStack_630;
            }
            iVar7 = iVar14;
          } while (iVar14 != iVar13);
          local_1a8 = 0x3f50624dd2f1a9fc;
          local_1a0 = (longlong *)0x3f50624dd2f1a9fc;
          local_198 = 0x3e7ad7f29abcaf48;
          local_190 = 0x3fefae147ae147ae;
          local_188 = 0x403e000000000000;
          local_180 = 0x4065400000000000;
          local_178 = 0x3fb999999999999a;
          local_170 = 0x32;
          local_16c = 0x101;
          local_168 = 0;
          local_160 = 0xffffffff;
          local_158 = 0;
          uStack_150 = 0;
          local_650 = &local_628;
          local_138 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_130 = 0x3ff0000000000000;
          local_c8 = 0;
          local_c0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_bc = 0xffffffff00000080;
          local_b4 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_658 = (int)uStack_630;
          local_668 = &local_650;
          local_670 = &LAB_142a08c7e;
          local_678 = &local_648;
          local_680 = &LAB_142a08c6c;
          local_688 = &local_640;
          local_690 = &LAB_142a08c58;
          local_720 = &local_660;
          local_728 = &local_670;
          local_660 = local_638;
          local_648 = local_650;
          local_640 = local_650;
          uStack_630 = uVar5;
          local_128 = (undefined4)DAT_14c8464e0;
          uStack_124 = DAT_14c8464e0._4_4_;
          uStack_120 = (undefined4)DAT_14c8464e8;
          uStack_11c = DAT_14c8464e8._4_4_;
          local_118 = DAT_14c8464f0;
          local_110 = DAT_14c846510;
          uStack_108 = DAT_14c846518;
          local_100 = DAT_14c846520;
          FUN_146ba4c5e(&local_1a8,uStack_620 & 0xffffffff,&local_690,&local_680);
          local_6a8 = 0;
          uStack_6a0 = 0;
          local_6b8 = 0;
          uStack_6b0 = 0;
          if (*(longlong *)(local_6e0 + 6) == 0) {
            local_710 = *(longlong **)(local_6e0 + 4);
            puVar11 = local_6e0;
            lVar19 = local_6f0;
            param_1 = local_6e8;
          }
          else {
            local_728 = (undefined1 **)((ulonglong)local_728 & 0xffffffffffffff00);
            FUN_1411b354a(&local_3c8,0,0,0);
            lVar10 = local_628;
            lVar19 = local_6d8;
            lVar18 = (longlong)(int)uStack_620;
            if (lVar18 != 0) {
              lVar15 = 0;
              do {
                FUN_142a01135(*(undefined8 *)(lVar10 + lVar15),&local_3c8,lVar19 * 0x60 + local_608,
                              0);
                lVar15 = lVar15 + 8;
              } while (lVar18 * 8 != lVar15);
            }
            FUN_146ba21d6(&local_498,&local_3c8,1);
            local_4e0 = 0;
            local_4d8 = 0;
            local_500 = 0;
            uStack_4f8 = 0;
            local_4d4 = 0xffffffff00000080;
            local_4cc = 0;
            local_4c0 = 0;
            local_4b8 = 0;
            local_4b0 = 0;
            local_4a8 = 0x4000000000000000;
            local_4a0 = 2;
            local_508 = &local_498;
            FUN_146bef8a8(&local_508,1);
            puVar11 = local_6e0;
            FUN_146b9dbb6(&local_6b8,&local_508,*(undefined8 *)(local_6e0 + 6),1);
            if (*(longlong *)(puVar11 + 4) != 0) {
              FUN_146ec5f9a(&local_6b8);
            }
            param_1 = local_6e8;
            lVar19 = local_6f0;
            if (param_5 != 0) {
              FUN_146ec5f9a(param_5,&local_6b8);
            }
            local_4b8 = 0;
            if (local_4c0 != 0) {
              FUN_1400020a8();
            }
            FUN_146bddd50(&local_500);
            FUN_1457e5b52(&local_498);
            FUN_141082778(&local_3c8);
            local_710 = &local_6b8;
          }
          local_708 = local_6d8 * 0x60 + local_608;
          local_718 = *puVar11;
          local_720 = (longlong *)((ulonglong)local_720 & 0xffffffffffffff00);
          local_728 = (undefined1 **)CONCAT71(local_728._1_7_,1);
          FUN_146ba2a14(&local_1a8,local_718,*(undefined8 *)(puVar11 + 2),0);
          plVar12 = local_6f8;
          if ((0 < (int)uStack_150) && ((int)uStack_150 < iVar13)) {
            lVar18 = local_6f8[2];
            lVar10 = lVar18 + lVar19;
            plVar12 = (longlong *)(lVar10 + 0x10);
            local_498 = 0x100000000;
            local_488 = 0xffffffff;
            local_480 = 0;
            local_490 = plVar12;
            if (*(int *)(lVar10 + 0x28) != 0) {
              FUN_1449c0562(&local_498);
            }
            plVar17 = (longlong *)(lVar18 + lVar19);
            local_3b0 = local_488;
            local_3a8 = local_480;
            local_3a4 = local_47c;
            uStack_3c0 = local_498;
            local_3b8 = local_490;
            uVar6 = *(uint *)(plVar17 + 5);
            local_498 = CONCAT44(1 << ((byte)uVar6 & 0x1f),(int)uVar6 >> 5);
            local_488 = CONCAT44(uVar6,-1 << ((byte)uVar6 & 0x1f));
            local_480 = uVar6 & 0xffffffe0;
            local_490 = plVar12;
            local_3c8 = plVar17;
            if (*(uint *)(plVar17 + 5) != uVar6) {
              FUN_1449c0562(&local_498);
              uVar6 = local_488._4_4_;
            }
            plVar12 = local_490;
            if ((local_3c8 != plVar17 || local_3b8 != local_490) || local_3b0._4_4_ != uVar6) {
              do {
                lVar10 = (longlong)*(int *)(*local_3c8 + (longlong)(int)local_3b0._4_4_ * 0xc);
                puVar4 = *(undefined8 **)(*(longlong *)(local_70 + 0x10) + lVar10 * 8);
                if (puVar4 != (undefined8 *)0x0) {
                  *(undefined8 *)(*(longlong *)(local_70 + 0x10) + lVar10 * 8) = 0;
                  LOCK();
                  piVar8 = (int *)(puVar4 + 1);
                  *piVar8 = *piVar8 + -1;
                  UNLOCK();
                  if ((*piVar8 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
                    (**(code **)*puVar4)(puVar4,1);
                  }
                }
                local_3b0 = CONCAT44(local_3b0._4_4_,(uint)local_3b0 & ~uStack_3c0._4_4_);
                FUN_1449c0562(&uStack_3c0);
              } while (local_3c8 != plVar17 || (local_3b8 != plVar12 || local_3b0._4_4_ != uVar6));
            }
            plVar12 = local_6f8;
            FUN_1402226aa(local_6f8[2] + lVar19);
            if (0 < (int)uStack_150) {
              iVar13 = 0;
              do {
                local_3c8 = (longlong *)0x0;
                uStack_3c0 = 0;
                FUN_146ec5046(&local_1a8,&local_498,iVar13,1);
                FUN_140627580(&local_3c8,(ulonglong)local_490 & 0xffffffff,1);
                if (0 < (int)local_490) {
                  lVar19 = 8;
                  lVar10 = 0;
                  do {
                    dVar1 = *(double *)(local_498 + lVar19 * 2);
                    dVar2 = *(double *)(local_498 + -8 + lVar19 * 2);
                    *(float *)((longlong)local_3c8 + lVar19 + -8) =
                         (float)*(double *)(local_498 + -0x10 + lVar19 * 2);
                    *(float *)((longlong)local_3c8 + lVar19 + -4) = (float)dVar2;
                    *(float *)((longlong)local_3c8 + lVar19) = (float)dVar1;
                    lVar10 = lVar10 + 1;
                    lVar19 = lVar19 + 0xc;
                  } while (lVar10 < (int)local_490);
                }
                lVar19 = FUN_14001cc68(0xb0,0x10);
                FUN_146d83314(lVar19,&local_3c8,0,0);
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
                  UNLOCK();
                }
                iVar7 = FUN_1409bcbd8(param_1,1,DAT_14c996fc8);
                local_508 = (undefined8 *)CONCAT44(local_508._4_4_,iVar7);
                puVar4 = *(undefined8 **)(*(longlong *)(local_70 + 0x10) + (longlong)iVar7 * 8);
                *(longlong *)(*(longlong *)(local_70 + 0x10) + (longlong)iVar7 * 8) = lVar19;
                if (puVar4 != (undefined8 *)0x0) {
                  LOCK();
                  piVar8 = (int *)(puVar4 + 1);
                  *piVar8 = *piVar8 + -1;
                  UNLOCK();
                  if ((*piVar8 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
                    (**(code **)*puVar4)(puVar4,1);
                  }
                }
                FUN_1447cbafe(plVar12[2] + local_6f0,local_6bc,&local_508,0);
                if (local_498 != 0) {
                  FUN_1400020a8();
                }
                if (local_3c8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < (int)uStack_150);
            }
          }
          if (local_6a8 != 0) {
            FUN_1400020a8();
          }
          if (local_6b8 != 0) {
            FUN_1400020a8();
          }
          FUN_146ec51d6(&local_1a8);
          if (local_638 != 0) {
            FUN_1400020a8();
          }
          piVar8 = local_6d0;
          piVar9 = local_6c8;
          if (local_628 != 0) {
            FUN_1400020a8();
            piVar8 = local_6d0;
            piVar9 = local_6c8;
          }
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != piVar8);
    }
    FUN_146ec1810(param_1);
    if (local_618 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (local_608 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_748) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec5f9a FUN_146ec5f9a body=116 status=ok
// SIG undefined FUN_146ec5f9a(void)

void FUN_146ec5f9a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_14070416c();
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
      FUN_144941252((longlong *)(param_1 + 0x10),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x10)),*(void **)(param_2 + 0x10),
           (longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 146ec600e FUN_146ec600e body=227 status=ok
// SIG undefined FUN_146ec600e(void)

undefined8 FUN_146ec600e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_146ec601a;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146ec601a:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 146ec60f2 FUN_146ec60f2 body=921 status=ok
// SIG undefined FUN_146ec60f2(void)

void FUN_146ec60f2(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  undefined1 auStack_e8 [40];
  int *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  uVar3 = DAT_14c9974a8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    uVar11 = (uint)((ulonglong)DAT_14c9974c8 >> 0x10);
    uVar6 = (uint)DAT_14c9974c8 & 0xffff;
    plVar8 = param_1 + 0x12;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x13];
    }
    iVar10 = *(int *)((longlong)plVar8 +
                     (ulonglong)
                     ((int)param_1[0x14] - 1U &
                     (int)((ulonglong)DAT_14c9974c8 >> 0x20) + ((uint)DAT_14c9974c8 << 0x10 | uVar6)
                     + (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(longlong *)(param_1[0xb] + (longlong)iVar10 * 0x14) == DAT_14c9974c8) {
          FUN_1446ddc76(&local_70,"TransformToConvexIndices",1);
          cVar5 = FUN_140498cd4(param_1,local_70,uVar3);
          uVar3 = DAT_14c9974a8;
          if (cVar5 != '\0') {
            FUN_1446ddc76(&local_78,"TransformToConvexIndices",1);
            lVar7 = FUN_146eb57a6(param_1,local_78,uVar3);
            local_88 = 0;
            uStack_80 = 0;
            if ((longlong)*(int *)(param_2 + 1) != 0) {
              piVar14 = (int *)*param_2;
              piVar9 = piVar14 + *(int *)(param_2 + 1);
              local_c0 = piVar9;
              local_b8 = lVar7;
              do {
                lVar2 = *(longlong *)(lVar7 + 0x10);
                lVar13 = (longlong)*piVar14 * 0x50;
                if (*(int *)(lVar2 + 0x34 + lVar13) < *(int *)(lVar2 + 8 + lVar13)) {
                  plVar12 = (longlong *)(lVar2 + lVar13);
                  plVar8 = plVar12 + 2;
                  local_68 = 0x100000000;
                  local_58 = 0xffffffff;
                  local_50 = 0;
                  local_60 = plVar8;
                  if ((int)plVar12[5] != 0) {
                    FUN_1449c0562(&local_68);
                  }
                  local_98 = local_58;
                  local_90 = local_50;
                  local_8c = local_4c;
                  local_a8 = local_68;
                  local_a0 = local_60;
                  uVar11 = *(uint *)(plVar12 + 5);
                  local_68 = CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
                  local_58 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
                  local_50 = uVar11 & 0xffffffe0;
                  local_b0 = plVar12;
                  local_60 = plVar8;
                  if (*(uint *)(plVar12 + 5) != uVar11) {
                    FUN_1449c0562(&local_68);
                    uVar11 = local_58._4_4_;
                  }
                  plVar8 = local_60;
                  if ((local_b0 != plVar12 || local_a0 != local_60) || local_98._4_4_ != uVar11) {
                    do {
                      uVar4 = uStack_80;
                      uVar1 = *(undefined4 *)(*local_b0 + (longlong)(int)local_98._4_4_ * 0xc);
                      lVar7 = (longlong)(int)uStack_80;
                      uVar6 = (int)uStack_80 + 1;
                      uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
                      if (uStack_80._4_4_ < uVar6) {
                        FUN_1446f48e2(&local_88,uVar4 & 0xffffffff);
                      }
                      *(undefined4 *)(local_88 + lVar7 * 4) = uVar1;
                      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
                      FUN_1449c0562(&local_a8);
                    } while (local_b0 != plVar12 || (local_a0 != plVar8 || local_98._4_4_ != uVar11)
                            );
                  }
                  lVar7 = local_b8;
                  FUN_14068ded2(lVar13 + *(longlong *)(local_b8 + 0x10),0);
                  piVar9 = local_c0;
                }
                piVar14 = piVar14 + 1;
              } while (piVar14 != piVar9);
              if ((int)uStack_80 != 0) {
                FUN_144958a06();
                (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c9974c8,&local_88,0x100);
              }
              if (local_88 != 0) {
                FUN_1400020a8();
              }
            }
          }
          break;
        }
        iVar10 = *(int *)(param_1[0xb] + (longlong)iVar10 * 0x14 + 0xc);
      } while (iVar10 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ec676c FUN_146ec676c body=1009 status=ok
// SIG undefined FUN_146ec676c(void)

void FUN_146ec676c(longlong param_1,longlong param_2,undefined4 param_3,float *param_4,
                  float *param_5,float *param_6,float *param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  longlong local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined8 *local_140;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  float local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_142a0173c(&local_178,param_1);
  FUN_142a01956(&local_178,param_2,param_3);
  if (local_170 < 1) {
    fVar8 = 0.0;
  }
  else {
    iVar4 = 0;
    fVar8 = 0.0;
    do {
      iVar1 = *(int *)(local_178 + (longlong)iVar4 * 4);
      iVar4 = iVar4 - (iVar1 >> 0x1f);
      iVar2 = -iVar1;
      if (-1 < iVar1) {
        iVar2 = 3;
      }
      if (2 < iVar2) {
        lVar5 = (longlong)*(int *)(local_178 + (longlong)iVar4 * 4);
        fVar9 = *(float *)(local_168 + lVar5 * 0xc);
        fVar10 = *(float *)(local_168 + 4 + lVar5 * 0xc);
        fVar11 = *(float *)(local_168 + 8 + lVar5 * 0xc);
        lVar5 = local_178 + 4 + (longlong)iVar4 * 4;
        uVar3 = 1;
        do {
          lVar6 = (longlong)*(int *)(lVar5 + -4 + uVar3 * 4);
          lVar7 = (longlong)*(int *)(lVar5 + uVar3 * 4);
          fVar17 = *(float *)(local_168 + 8 + lVar6 * 0xc) - fVar11;
          fVar15 = *(float *)(local_168 + 4 + lVar6 * 0xc) - fVar10;
          fVar16 = *(float *)(local_168 + lVar6 * 0xc) - fVar9;
          fVar18 = *(float *)(local_168 + 8 + lVar7 * 0xc) - fVar11;
          fVar14 = *(float *)(local_168 + 4 + lVar7 * 0xc) - fVar10;
          fVar12 = *(float *)(local_168 + lVar7 * 0xc) - fVar9;
          fVar13 = fVar12 * fVar15 - fVar16 * fVar14;
          fVar16 = fVar18 * fVar16 - fVar17 * fVar12;
          fVar12 = fVar14 * fVar17 - fVar18 * fVar15;
          fVar8 = fVar8 + SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar16 * fVar16) * 0.5;
          uVar3 = uVar3 + 1;
        } while (iVar2 - 1 != uVar3);
      }
      iVar4 = iVar4 + iVar2;
    } while (iVar4 < local_170);
  }
  *param_4 = fVar8;
  fVar9 = (float)FUN_142a01f44(param_2);
  fVar8 = (float)FUN_142a01f44(param_1);
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  *param_5 = fVar8;
  uStack_d0 = &local_138;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_c8 = 24533.473;
  fStack_c4 = 1.4013e-45;
  uStack_c0 = &local_140;
  local_d8 = 80.26146;
  fStack_d4 = 1.4013e-45;
  local_188 = 0x34000000;
  local_138 = &local_178;
  FUN_140ab378c(&local_128,local_160);
  if ((int)local_128 < 1) {
    *param_6 = 0.0;
    *param_7 = 1.0;
  }
  else {
    local_c8 = 3.4028235e+38;
    fVar9 = local_c8;
    local_c8 = 3.4028235e+38;
    fStack_c4 = -3.4028235e+38;
    uStack_c0 = (undefined8 **)0xff7fffff7f7fffff;
    local_d8 = 3.4028235e+38;
    fVar8 = local_d8;
    local_d8 = 3.4028235e+38;
    fStack_d4 = -3.4028235e+38;
    uStack_d0 = (undefined8 *)0xff7fffff7f7fffff;
    local_138 = (longlong *)0xff7fffff7f7fffff;
    fStack_130 = 3.4028235e+38;
    fStack_12c = -3.4028235e+38;
    if ((int)local_128 == 1) {
      fVar13 = -INFINITY;
      fVar10 = -INFINITY;
      fVar14 = -INFINITY;
      fVar11 = -INFINITY;
      fVar15 = -INFINITY;
      fVar12 = -INFINITY;
      local_c8 = fVar9;
      local_d8 = fVar8;
    }
    else {
      local_140 = &local_128;
      FUN_142a08520(&local_140,&local_168,&local_c8);
      FUN_142a08520(&local_140,param_1 + 0x30,&local_d8);
      FUN_142a08520(&local_140,param_2 + 0x30,&local_138);
      fVar13 = uStack_c0._4_4_ - (float)uStack_c0;
      fVar10 = fStack_c4 - local_c8;
      fVar14 = fStack_12c - fStack_130;
      fVar11 = local_138._4_4_ - (float)local_138;
      fVar15 = uStack_d0._4_4_ - (float)uStack_d0;
      fVar12 = fStack_d4 - local_d8;
    }
    if (fVar12 <= fVar15) {
      fVar12 = fVar15;
    }
    if (fVar11 <= fVar14) {
      fVar11 = fVar14;
    }
    if (fVar11 <= fVar12) {
      fVar12 = fVar11;
    }
    if (fVar10 <= fVar13) {
      fVar10 = fVar13;
    }
    *param_6 = fVar10;
    *param_7 = fVar12;
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec6b5e FUN_146ec6b5e body=1484 status=ok
// SIG undefined FUN_146ec6b5e(void)

ulonglong FUN_146ec6b5e(undefined8 param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_258 [40];
  undefined4 local_230;
  undefined8 *local_228;
  byte local_21d;
  uint local_21c;
  longlong *local_218;
  longlong local_210;
  longlong local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8 [2];
  undefined1 local_198 [64];
  longlong local_158;
  longlong local_120;
  longlong local_e8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  code *local_70;
  longlong **local_68;
  ulonglong local_60;
  ulonglong uVar11;
  
  uVar2 = DAT_14c9974a8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1446ddc76(&local_98,"TransformToConvexIndices",1);
  cVar4 = FUN_140498cd4(param_1,local_98,uVar2);
  if ((cVar4 == '\0') ||
     (cVar4 = FUN_140498cd4(param_1,DAT_14c9974d0,DAT_14c9974c8), uVar2 = DAT_14c9974a8,
     cVar4 == '\0')) {
    uVar11 = 0;
  }
  else {
    FUN_1446ddc76(&local_a0,"TransformToConvexIndices",1);
    plVar10 = (longlong *)FUN_146eab2fc(param_1,local_a0,uVar2);
    local_218 = (longlong *)FUN_146ec600e(param_1,DAT_14c9974d0,DAT_14c9974c8);
    uVar2 = DAT_14c9974a8;
    FUN_1446ddc76(&local_a8,"SimulationType",1);
    local_208 = FUN_146d84614(param_1,local_a8,uVar2);
    bVar5 = local_208 == 0 & param_3;
    uVar11 = CONCAT71((int7)((ulonglong)local_208 >> 8),bVar5);
    if (bVar5 == 0) {
      local_21c = (uint)uVar11;
      uVar6 = (**(code **)(*plVar10 + 0x60))(plVar10);
      local_1f8 = (longlong *)(param_2 + 0x10);
      FUN_140c7a828(local_1f8,uVar6,1);
      FUN_146ea80f4(local_198,param_1);
      local_1a8[0] = 0;
      local_1a8[1] = 0;
      if (((local_158 != 0) && (local_120 != 0)) && (local_e8 != 0)) {
        FUN_146eb7819(local_e8,local_158,local_1a8);
      }
      plVar16 = local_218;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      iVar7 = (**(code **)(*local_218 + 0x60))(local_218);
      if (iVar7 < 0) {
LAB_146ec7124:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if ((int)uStack_1b0._4_4_ < iVar7) {
        FUN_14481578e(&local_1b8,iVar7);
      }
      iVar7 = (**(code **)(*plVar16 + 0x60))(plVar16);
      if (iVar7 < 0) goto LAB_146ec7124;
      if ((int)uStack_1c0._4_4_ < iVar7) {
        FUN_14481578e(&local_1c8,iVar7);
      }
      local_210 = param_2;
      iVar7 = (**(code **)(*plVar10 + 0x60))(plVar10);
      if (iVar7 < 1) {
        iVar7 = 0;
      }
      else {
        lVar13 = 0;
        iVar7 = 0;
        local_21d = param_3;
        local_200 = plVar10;
        do {
          if ((param_3 == 0) || (*(int *)(*(longlong *)(local_208 + 0x10) + lVar13 * 4) == 1)) {
            lVar1 = plVar10[2];
            lVar12 = lVar13 * 0x50;
            lVar15 = lVar1 + lVar12;
            plVar10 = (longlong *)(lVar15 + 0x10);
            local_90 = (longlong *)&DAT_100000000;
            local_80 = (longlong *)&DAT_ffffffff;
            local_78 = 0;
            local_88 = plVar10;
            if (*(int *)(lVar15 + 0x28) != 0) {
              FUN_1449c0562(&local_90);
            }
            plVar16 = (longlong *)(lVar1 + lVar12);
            local_1d8 = local_80;
            local_1d0 = CONCAT44(local_74,local_78);
            local_1e8 = local_90;
            local_1e0 = local_88;
            uVar14 = *(uint *)(plVar16 + 5);
            local_90 = (longlong *)CONCAT44(1 << ((byte)uVar14 & 0x1f),(int)uVar14 >> 5);
            local_80 = (longlong *)CONCAT44(uVar14,-1 << ((byte)uVar14 & 0x1f));
            local_78 = uVar14 & 0xffffffe0;
            local_1f0 = plVar16;
            local_88 = plVar10;
            if (*(uint *)(plVar16 + 5) != uVar14) {
              FUN_1449c0562(&local_90);
              uVar14 = local_80._4_4_;
            }
            plVar3 = local_88;
            plVar10 = local_200;
            param_3 = local_21d;
            if ((local_1f0 != plVar16 || local_1e0 != local_88) || local_1d8._4_4_ != uVar14) {
              do {
                uVar11 = uStack_1b0;
                uVar6 = *(undefined4 *)(*local_1f0 + (longlong)(int)local_1d8._4_4_ * 0xc);
                local_90 = (longlong *)CONCAT44(local_90._4_4_,iVar7);
                lVar15 = (longlong)(int)uStack_1b0;
                uVar8 = (int)uStack_1b0 + 1;
                uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar8);
                if (uStack_1b0._4_4_ < uVar8) {
                  FUN_1446f48e2(&local_1b8,uVar11 & 0xffffffff);
                }
                uVar11 = uStack_1c0;
                *(int *)(local_1b8 + lVar15 * 4) = (int)lVar13;
                lVar15 = (longlong)(int)uStack_1c0;
                uVar8 = (int)uStack_1c0 + 1;
                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar8);
                if (uStack_1c0._4_4_ < uVar8) {
                  FUN_1446f48e2(&local_1c8,uVar11 & 0xffffffff);
                }
                *(undefined4 *)(local_1c8 + lVar15 * 4) = uVar6;
                FUN_1447cbafe(*local_1f8 + lVar12,&local_70,&local_90,0);
                local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,(uint)local_1d8 & ~local_1e8._4_4_)
                ;
                FUN_1449c0562(&local_1e8);
                iVar7 = iVar7 + 1;
                plVar10 = local_200;
                param_3 = local_21d;
              } while (local_1f0 != plVar16 || (local_1e0 != plVar3 || local_1d8._4_4_ != uVar14));
            }
          }
          lVar13 = lVar13 + 1;
          iVar9 = (**(code **)(*plVar10 + 0x60))(plVar10);
        } while (lVar13 < iVar9);
      }
      lVar13 = local_210;
      FUN_1400498da(local_210,iVar7);
      *(undefined8 *)(lVar13 + 0x20) = 0;
      if (*(int *)(lVar13 + 0x34) < 0) {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        FUN_1447a8aa0(lVar13 + 0x28,0);
      }
      else {
        *(undefined4 *)(lVar13 + 0x30) = 0;
      }
      local_1f0 = &local_1b8;
      local_68 = &local_1f0;
      local_1e8 = local_1a8;
      local_1e0 = &local_1c8;
      local_1d8 = local_218;
      local_1d0 = lVar13;
      local_228 = &local_90;
      local_90 = (longlong *)0x0;
      local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
      local_70 = FUN_142a08d18;
      local_230 = 0;
      FUN_1401f8d10(L"ParallelFor Task",uStack_1c0 & 0xffffffff,1);
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      if (local_1a8[0] != 0) {
        FUN_1400020a8();
      }
      uVar11 = (ulonglong)local_21c;
    }
    uVar11 = uVar11 ^ 1;
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 146ec712c FUN_146ec712c body=130 status=ok
// SIG undefined FUN_146ec712c(void)

longlong FUN_146ec712c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146ec71b0();
  if (lVar1 == 0) {
    local_38 = 0;
    local_30 = param_3;
    FUN_146ec7208(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x14;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 146ec71b0 FUN_146ec71b0 body=87 status=ok
// SIG undefined FUN_146ec71b0(void)

int * FUN_146ec71b0(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 146ec7208 FUN_146ec7208 body=300 status=ok
// SIG undefined FUN_146ec7208(void)

undefined4 *
FUN_146ec7208(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  FUN_146ec7336(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0xffffffff00000000;
  local_68 = param_5;
  cVar1 = FUN_146ec741c(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_50 + 0xc) =
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
      FUN_146ec7548(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec7336 FUN_146ec7336 body=230 status=ok
// SIG undefined FUN_146ec7336(void)

int * FUN_146ec7336(longlong *param_1,int *param_2)

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



// FUNCTION 146ec741c FUN_146ec741c body=162 status=ok
// SIG undefined FUN_146ec741c(void)

void FUN_146ec741c(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

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
          FUN_146ec74be(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_146ec748e;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_146ec748e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 146ec74be FUN_146ec74be body=138 status=ok
// SIG undefined FUN_146ec74be(void)

void FUN_146ec74be(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146ec7548 FUN_146ec7548 body=458 status=ok
// SIG undefined FUN_146ec7548(void)

void FUN_146ec7548(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar2 = *(uint *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)
                 (int)(uVar2 * 0x40 + *(int *)(lVar3 + 4 + lVar6 * 0x14) + (uVar2 >> 2) + 0x9e3779b9
                      ^ uVar2) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 146ec7714 FUN_146ec7714 body=54 status=ok
// SIG undefined FUN_146ec7714(void)

void FUN_146ec7714(longlong *param_1)

{
  FUN_146ec774a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ec774a FUN_146ec774a body=128 status=ok
// SIG undefined FUN_146ec774a(void)

void FUN_146ec774a(longlong param_1,int param_2)

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



// FUNCTION 146ec77cc FUN_146ec77cc body=89 status=ok
// SIG undefined FUN_146ec77cc(void)

void FUN_146ec77cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f64a48;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ec7826 FUN_146ec7826 body=104 status=ok
// SIG undefined FUN_146ec7826(void)

void FUN_146ec7826(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f64a58;
  FUN_146bfdd7e(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x31);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ec788e FUN_146ec788e body=652 status=ok
// SIG undefined FUN_146ec788e(void)

void FUN_146ec788e(longlong param_1,double param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  double dVar18;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_146ba2d40(&local_d8,param_1);
  uVar13 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  if ((int)uVar13 < 1) {
    dVar18 = 0.0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    dVar18 = 0.0;
    uVar16 = 0;
    do {
      uVar17 = (ulonglong)(uVar16 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar16 >> 9) * 8) +
                             uVar17 * 2) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar16 >> 9) * 8);
        uVar1 = *(uint *)(lVar4 + uVar17 * 0xc);
        uVar2 = *(uint *)(lVar4 + 4 + uVar17 * 0xc);
        lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8);
        uVar15 = (ulonglong)uVar1 & 0x1ff;
        lVar6 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
        uVar14 = (ulonglong)uVar2 & 0x1ff;
        uVar1 = *(uint *)(lVar4 + 8 + uVar17 * 0xc);
        lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar1 >> 9) * 8);
        uVar17 = (ulonglong)uVar1 & 0x1ff;
        dVar10 = (*(double *)(lVar6 + 0x10 + uVar14 * 0x18) - local_c8) * param_2;
        dVar8 = (*(double *)(lVar6 + 8 + uVar14 * 0x18) - local_d0) * param_2;
        dVar11 = (*(double *)(lVar6 + uVar14 * 0x18) - local_d8) * param_2;
        dVar12 = (*(double *)(lVar4 + 0x10 + uVar17 * 0x18) - local_c8) * param_2;
        dVar7 = (*(double *)(lVar4 + 8 + uVar17 * 0x18) - local_d0) * param_2;
        dVar9 = (*(double *)(lVar4 + uVar17 * 0x18) - local_d8) * param_2;
        dVar18 = dVar18 + (*(double *)(lVar5 + uVar15 * 0x18) - local_d8) * param_2 *
                          (dVar7 * dVar10 - dVar12 * dVar8) +
                          (*(double *)(lVar5 + 8 + uVar15 * 0x18) - local_d0) * param_2 *
                          (dVar12 * dVar11 - dVar10 * dVar9) +
                          (*(double *)(lVar5 + 0x10 + uVar15 * 0x18) - local_c8) * param_2 *
                          (dVar9 * dVar8 - dVar11 * dVar7);
      }
      uVar16 = uVar16 + 1;
    } while (uVar13 != uVar16);
    dVar18 = dVar18 * 0.16666666666666666;
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar18);
}



// FUNCTION 146ec7b1c FUN_146ec7b1c body=408 status=ok
// SIG undefined FUN_146ec7b1c(void)

longlong * FUN_146ec7b1c(longlong param_1,longlong *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  lVar9 = (longlong)param_3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar9 * 8);
  FUN_146bca1c8(param_2,*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24),1);
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(lVar3 + lVar9 * 8);
  if (0 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) {
    lVar10 = 8;
    uVar6 = 0;
    do {
      uVar5 = uVar6 >> 9 & 0x7fffff;
      uVar7 = (uint)uVar6 & 0x1ff;
      uVar8 = (ulonglong)uVar7;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar5 * 8) +
                             (ulonglong)uVar7 * 2) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar5 * 8);
        local_68 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18) * *(double *)(param_1 + 0xa8);
        local_70 = *(double *)(lVar4 + 8 + uVar8 * 0x18) * *(double *)(param_1 + 0xa0);
        local_78 = *(double *)(lVar4 + uVar8 * 0x18) * *(double *)(param_1 + 0x98);
        FUN_146bed047(&local_60,param_1 + 0x60,&local_78);
        dVar1 = *(double *)(param_1 + 0x90);
        dVar2 = *(double *)(param_1 + 0x88);
        lVar4 = *param_2;
        *(float *)(lVar4 + -8 + lVar10) = (float)(local_60 + *(double *)(param_1 + 0x80));
        *(float *)(lVar4 + -4 + lVar10) = (float)(local_58 + dVar2);
        *(float *)(lVar4 + lVar10) = (float)(local_50 + dVar1);
        lVar3 = *(longlong *)(param_1 + 0x50);
      }
      lVar4 = *(longlong *)(lVar3 + lVar9 * 8);
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 0xc;
    } while ((longlong)uVar6 < (longlong)(*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ec7cb6 FUN_146ec7cb6 body=38 status=ok
// SIG undefined FUN_146ec7cb6(void)

undefined8 FUN_146ec7cb6(undefined8 param_1,int param_2)

{
  FUN_146ec77cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ec7cdc FUN_146ec7cdc body=71 status=ok
// SIG undefined FUN_146ec7cdc(void)

char FUN_146ec7cdc(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 0x38);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 146ec7d24 FUN_146ec7d24 body=38 status=ok
// SIG undefined FUN_146ec7d24(void)

undefined8 FUN_146ec7d24(undefined8 param_1,int param_2)

{
  FUN_146ec7826();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ec7d4a FUN_146ec7d4a body=74 status=ok
// SIG undefined FUN_146ec7d4a(void)

char FUN_146ec7d4a(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 0xe8);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 146ec7d94 FUN_146ec7d94 body=78 status=ok
// SIG undefined FUN_146ec7d94(void)

longlong * FUN_146ec7d94(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1402ef3f6(*param_1,(int)param_1[1]);
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



// FUNCTION 146ec7de2 FUN_146ec7de2 body=78 status=ok
// SIG undefined FUN_146ec7de2(void)

longlong * FUN_146ec7de2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140f35b7a(*param_1,(int)param_1[1]);
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



// FUNCTION 146ec7e30 FUN_146ec7e30 body=89 status=ok
// SIG undefined FUN_146ec7e30(void)

undefined8 * FUN_146ec7e30(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1405161ea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ec7e8a FUN_146ec7e8a body=102 status=ok
// SIG undefined FUN_146ec7e8a(void)

void FUN_146ec7e8a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140aacb36(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0xc + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    return;
  }
  return;
}



// FUNCTION 146ec7ef0 FUN_146ec7ef0 body=61 status=ok
// SIG undefined FUN_146ec7ef0(void)

void FUN_146ec7ef0(longlong *param_1)

{
  FUN_146bee8b4();
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



// FUNCTION 146ec7f2e FUN_146ec7f2e body=68 status=ok
// SIG undefined FUN_146ec7f2e(void)

void FUN_146ec7f2e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146ec7f72();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146ec7f72 FUN_146ec7f72 body=322 status=ok
// SIG undefined FUN_146ec7f72(void)

void FUN_146ec7f72(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 146ec80b6 FUN_146ec80b6 body=311 status=ok
// SIG undefined FUN_146ec80b6(void)

undefined4 * FUN_146ec80b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ec81ee(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  local_40 = *(undefined8 *)*param_3;
  *local_48 = local_40;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = (*(code *)PTR_FUN_14c75b148)(&local_40,8,0);
  cVar3 = FUN_146ec82d4(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_48 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
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
      FUN_146ec83cc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec81ee FUN_146ec81ee body=230 status=ok
// SIG undefined FUN_146ec81ee(void)

int * FUN_146ec81ee(longlong *param_1,int *param_2)

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



// FUNCTION 146ec82d4 FUN_146ec82d4 body=134 status=ok
// SIG undefined FUN_146ec82d4(void)

undefined8 FUN_146ec82d4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_146ec835a(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ec835a FUN_146ec835a body=114 status=ok
// SIG undefined FUN_146ec835a(void)

void FUN_146ec835a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 146ec83cc FUN_146ec83cc body=467 status=ok
// SIG undefined FUN_146ec83cc(void)

void FUN_146ec83cc(longlong *param_1)

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
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        local_68 = *(undefined8 *)(lVar3 + lVar10 * 0x14);
        iVar6 = (*(code *)PTR_FUN_14c75b148)(&local_68,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x10 + lVar10 * 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x14) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ec85a0 FUN_146ec85a0 body=52 status=ok
// SIG undefined FUN_146ec85a0(void)

void FUN_146ec85a0(longlong *param_1)

{
  FUN_146ec85d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ec85d4 FUN_146ec85d4 body=89 status=ok
// SIG undefined FUN_146ec85d4(void)

void FUN_146ec85d4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 146ec862d FUN_146ec862d body=43 status=ok
// SIG undefined FUN_146ec862d(void)

void FUN_146ec862d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146ec8658 FUN_146ec8658 body=132 status=ok
// SIG undefined FUN_146ec8658(void)

void FUN_146ec8658(longlong param_1,int param_2)

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



// FUNCTION 146ec86de FUN_146ec86de body=95 status=ok
// SIG undefined FUN_146ec86de(void)

void FUN_146ec86de(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146ec862d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146ec873e FUN_146ec873e body=63 status=ok
// SIG undefined FUN_146ec873e(void)

void FUN_146ec873e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ec877e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146ec877e FUN_146ec877e body=97 status=ok
// SIG undefined FUN_146ec877e(void)

ulonglong FUN_146ec877e(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146ec87e0 FUN_146ec87e0 body=247 status=ok
// SIG undefined FUN_146ec87e0(void)

void FUN_146ec87e0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(*param_1 + 0x60))();
  local_58 = 0;
  uStack_50 = 0;
  FUN_146ec8c7c(&local_58,uVar3);
  if (0 < (int)uVar3) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar6 * 4) * 8 + param_1[2]);
      if ((undefined8 *)(local_58 + lVar5) != puVar4) {
        puVar2 = *(undefined8 **)(local_58 + uVar6 * 8);
        *(undefined8 *)(local_58 + uVar6 * 8) = *puVar4;
        *puVar4 = 0;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar3 != uVar6);
  }
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_1402ef3f6(local_48,uStack_40 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec88d8 FUN_146ec88d8 body=77 status=ok
// SIG undefined FUN_146ec88d8(void)

void FUN_146ec88d8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  FUN_146ec8cc0(param_1 + 2,param_2,uVar1);
  return;
}



// FUNCTION 146ec8926 FUN_146ec8926 body=94 status=ok
// SIG undefined FUN_146ec8926(void)

void FUN_146ec8926(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ec8d28(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ec898e FUN_146ec898e body=122 status=ok
// SIG undefined FUN_146ec898e(void)

void FUN_146ec898e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec8a0a FUN_146ec8a0a body=296 status=ok
// SIG undefined FUN_146ec8a0a(void)

void FUN_146ec8a0a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_1402ef3f6(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_1402ef3f6(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140049c78(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ec8b3a FUN_146ec8b3a body=185 status=ok
// SIG undefined FUN_146ec8b3a(void)

void FUN_146ec8b3a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_140049436(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ec8bfa FUN_146ec8bfa body=59 status=ok
// SIG undefined FUN_146ec8bfa(void)

void FUN_146ec8bfa(longlong param_1)

{
  FUN_1402ef3f6(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_140049c78(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146ec8c36 FUN_146ec8c36 body=69 status=ok
// SIG undefined FUN_146ec8c36(void)

undefined8 * FUN_146ec8c36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f64b40;
  FUN_1402ef3f6(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ec8c7c FUN_146ec8c7c body=68 status=ok
// SIG undefined FUN_146ec8c7c(void)

int FUN_146ec8c7c(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14004e612(param_1,iVar1);
  }
  FUN_1400499a3((longlong)iVar1 * 8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ec8cc0 FUN_146ec8cc0 body=104 status=ok
// SIG undefined FUN_146ec8cc0(void)

void FUN_146ec8cc0(longlong *param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)(*param_1 + uVar4 * 8);
        if (puVar3 != puVar2) {
          *(undefined8 **)(*param_1 + uVar4 * 8) = puVar2;
          LOCK();
          *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
          UNLOCK();
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar3 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  return;
}



// FUNCTION 146ec8d28 FUN_146ec8d28 body=162 status=ok
// SIG undefined FUN_146ec8d28(void)

void FUN_146ec8d28(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar4) {
    lVar5 = (longlong)param_3;
    lVar6 = (longlong)(param_3 + param_5);
    do {
      if ((int)param_1[1] <= lVar6) {
        return;
      }
      if (param_4 <= lVar5) {
        return;
      }
      puVar2 = *(undefined8 **)(param_2[2] + lVar5 * 8);
      puVar3 = *(undefined8 **)(*param_1 + lVar6 * 8);
      if (puVar3 != puVar2) {
        *(undefined8 **)(*param_1 + lVar6 * 8) = puVar2;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
          UNLOCK();
        }
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 1;
      iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar5 < iVar4);
  }
  return;
}



// FUNCTION 146ec8dca FUN_146ec8dca body=63 status=ok
// SIG undefined FUN_146ec8dca(void)

void FUN_146ec8dca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ec8e0a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146ec8e0a FUN_146ec8e0a body=97 status=ok
// SIG undefined FUN_146ec8e0a(void)

ulonglong FUN_146ec8e0a(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146ec8e6b FUN_146ec8e6b body=60 status=ok
// SIG undefined FUN_146ec8e6b(void)

void FUN_146ec8e6b(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 146ec8ea8 FUN_146ec8ea8 body=99 status=ok
// SIG undefined FUN_146ec8ea8(void)

void FUN_146ec8ea8(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1400cc4ea(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 146ec8f0c FUN_146ec8f0c body=132 status=ok
// SIG undefined FUN_146ec8f0c(void)

void FUN_146ec8f0c(longlong param_1,int param_2)

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



// FUNCTION 146ec8f92 FUN_146ec8f92 body=143 status=ok
// SIG undefined FUN_146ec8f92(void)

void FUN_146ec8f92(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ec903a FUN_146ec903a body=474 status=ok
// SIG undefined FUN_146ec903a(void)

void FUN_146ec903a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_78 = 0;
  uStack_70 = 0;
  lVar8 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = lVar8;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar8)) {
    do {
      uVar3 = uStack_70;
      puVar2 = (undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x40);
      if (*(longlong *)(*local_a0 + 8 + (longlong)iStack_84 * 0x40) == param_2) {
        lVar7 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_1446f84a2(&local_78,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar7 * 8) = *puVar2;
      }
      if (*(longlong *)((longlong)puVar2 + 0x14) == param_2) {
        *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
      lVar7 = local_78;
    } while (local_a0 != plVar1 || (local_90 != lVar8 || iStack_84 != iVar5));
    lVar8 = (longlong)(int)uStack_70;
    if (lVar8 != 0) {
      lVar6 = 0;
      do {
        local_a0 = *(longlong **)(lVar7 + lVar6);
        local_98 = param_2;
        FUN_140498fec(plVar1,&local_a0);
        lVar6 = lVar6 + 8;
      } while (lVar8 * 8 != lVar6);
    }
  }
  FUN_146ee3ca4(param_1 + 0x58,param_2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ec9216 FUN_146ec9216 body=320 status=ok
// SIG undefined FUN_146ec9216(void)

undefined8 * FUN_146ec9216(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  
  *param_2 = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb) = 0;
  uVar2 = DAT_14c996fe0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar3 = FUN_1401f66f6(uVar1,DAT_14c996fe0);
  if (0 < iVar3) {
    lVar4 = FUN_146eb1f4e(uVar1,DAT_14c996ff8,uVar2);
    uVar2 = DAT_14c996fe0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar5 = FUN_146ec9356(uVar1,DAT_14c997000,DAT_14c996fe0);
    lVar6 = FUN_140619ac2(uVar1,DAT_14c996ff0,uVar2);
    lVar7 = FUN_14061a004(*(undefined8 *)(param_1 + 8),DAT_14c996fe8,DAT_14c996fe0);
    uVar2 = DAT_14c996fe0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar8 = FUN_146ec9356(uVar1,DAT_14c997010,DAT_14c996fe0);
    lVar9 = FUN_14061a004(uVar1,DAT_14c997008,uVar2);
    pbVar10 = (byte *)(lVar4 + 0x10);
    if (*(byte **)(lVar4 + 0x20) != (byte *)0x0) {
      pbVar10 = *(byte **)(lVar4 + 0x20);
    }
    *(byte *)((longlong)param_2 + 0xe) = *pbVar10 & 1;
    *(undefined1 *)((longlong)param_2 + 0xd) = **(undefined1 **)(lVar5 + 0x10);
    *(undefined4 *)((longlong)param_2 + 4) = **(undefined4 **)(lVar7 + 0x10);
    *(undefined4 *)param_2 = **(undefined4 **)(lVar6 + 0x10);
    *(undefined1 *)((longlong)param_2 + 0xc) = **(undefined1 **)(lVar8 + 0x10);
    *(undefined4 *)(param_2 + 1) = **(undefined4 **)(lVar9 + 0x10);
  }
  return param_2;
}



// FUNCTION 146ec9356 FUN_146ec9356 body=227 status=ok
// SIG undefined FUN_146ec9356(void)

undefined8 FUN_146ec9356(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_146ec9362;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146ec9362:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 146ec943a FUN_146ec943a body=538 status=ok
// SIG undefined FUN_146ec943a(void)

void FUN_146ec943a(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar3 = DAT_14c996fe0;
  lVar11 = param_1[1];
  iVar1 = FUN_1401f66f6(lVar11,DAT_14c996fe0);
  iVar2 = 0;
  if (iVar1 < 1) {
    if (*(int *)(lVar11 + 0x60) != *(int *)(lVar11 + 0x8c)) {
      uVar10 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar9 = (uint)lVar3 & 0xffff;
      lVar4 = lVar11 + 0x90;
      if (*(longlong *)(lVar11 + 0x98) != 0) {
        lVar4 = *(longlong *)(lVar11 + 0x98);
      }
      iVar1 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(lVar11 + 0xa0) - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar1 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0x58) + (longlong)iVar1 * 0x14) == lVar3)
          goto LAB_146ec95b3;
          iVar1 = *(int *)(*(longlong *)(lVar11 + 0x58) + (longlong)iVar1 * 0x14 + 0xc);
        } while (iVar1 != -1);
      }
    }
    (**(code **)*param_1)(param_1);
    lVar11 = param_1[1];
    lVar3 = DAT_14c996fe0;
LAB_146ec95b3:
    iVar2 = FUN_1409bcbd8(lVar11,1,lVar3);
    lVar11 = param_1[1];
    lVar3 = DAT_14c996fe0;
  }
  lVar3 = FUN_140b1fd10(lVar11,DAT_14c996ff8,lVar3);
  lVar4 = FUN_14062f696(param_1[1],DAT_14c997000,DAT_14c996fe0);
  lVar5 = FUN_140b1fc18(param_1[1],DAT_14c996ff0,DAT_14c996fe0);
  lVar6 = FUN_140499144(param_1[1],DAT_14c996fe8,DAT_14c996fe0);
  lVar7 = FUN_14062f696(param_1[1],DAT_14c997010,DAT_14c996fe0);
  lVar8 = FUN_140499144(param_1[1],DAT_14c997008,DAT_14c996fe0);
  uVar10 = 1 << ((byte)iVar2 & 0x1f);
  lVar11 = lVar3 + 0x10;
  if (*(longlong *)(lVar3 + 0x20) != 0) {
    lVar11 = *(longlong *)(lVar3 + 0x20);
  }
  iVar1 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  lVar3 = (longlong)(iVar1 >> 5);
  if (*(char *)((longlong)param_2 + 0xe) == '\x01') {
    uVar10 = uVar10 | *(uint *)(lVar11 + lVar3 * 4);
  }
  else {
    uVar10 = ~uVar10 & *(uint *)(lVar11 + lVar3 * 4);
  }
  *(uint *)(lVar11 + lVar3 * 4) = uVar10;
  lVar11 = (longlong)iVar2;
  *(undefined1 *)(*(longlong *)(lVar4 + 0x10) + lVar11) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + lVar11 * 4) = param_2[1];
  *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 4) = *param_2;
  *(undefined1 *)(*(longlong *)(lVar7 + 0x10) + lVar11) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + lVar11 * 4) = param_2[2];
  return;
}



// FUNCTION 146ec9654 FUN_146ec9654 body=3184 status=ok
// SIG undefined FUN_146ec9654(void)

void FUN_146ec9654(longlong param_1,longlong *param_2,double param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  longlong lVar16;
  double dVar17;
  int *piVar18;
  longlong *plVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_498 [32];
  undefined1 *local_478;
  undefined1 *local_470;
  undefined1 *local_468;
  uint local_460;
  int local_45c;
  longlong local_458;
  longlong local_450;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  double local_430;
  double local_428;
  double local_420;
  undefined1 local_418 [24];
  undefined1 local_400 [24];
  undefined1 local_3e8 [24];
  undefined1 local_3d0 [24];
  double local_3b8;
  int local_3ac;
  double local_3a8 [3];
  double local_390 [3];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  double dStack_358;
  double local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  double dStack_328;
  double local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  int local_2ec;
  int *local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8 [3];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  double local_2a0 [58];
  ulonglong local_d0;
  
  uVar8 = DAT_14c996af0;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  dVar17 = param_3;
  if ((longlong)(int)param_2[1] == 0) {
    dVar7 = -1.79769313486232e+308;
    dVar5 = -1.79769313486232e+308;
    dVar15 = 1.79769313486232e+308;
    dVar3 = dVar15;
    dVar4 = dVar15;
    dVar6 = dVar5;
  }
  else {
    dVar15 = 1.79769313486232e+308;
    dVar7 = -1.79769313486232e+308;
    dVar5 = -1.79769313486232e+308;
    lVar13 = 0;
    dVar3 = dVar15;
    dVar4 = dVar15;
    dVar6 = dVar5;
    do {
      lVar16 = *(longlong *)(*param_2 + lVar13);
      dVar2 = (double)*(float *)(lVar16 + 0x54);
      dVar21 = (double)*(float *)(lVar16 + 0x50);
      dVar22 = (double)*(float *)(lVar16 + 0x4c);
      dVar24 = (double)*(float *)(lVar16 + 0x48);
      dVar25 = (double)*(float *)(lVar16 + 0x44);
      dVar26 = (double)*(float *)(lVar16 + 0x40);
      if (dVar24 <= dVar15) {
        dVar15 = dVar24;
      }
      if (dVar25 <= dVar3) {
        dVar3 = dVar25;
      }
      if (dVar26 <= dVar4) {
        dVar4 = dVar26;
      }
      if (dVar7 <= dVar2) {
        dVar7 = dVar2;
      }
      if (dVar5 <= dVar21) {
        dVar5 = dVar21;
      }
      if (dVar6 <= dVar22) {
        dVar6 = dVar22;
      }
      dVar23 = dVar22 - dVar26;
      if (dVar22 - dVar26 <= dVar21 - dVar25) {
        dVar23 = dVar21 - dVar25;
      }
      if (dVar23 <= dVar2 - dVar24) {
        dVar23 = dVar2 - dVar24;
      }
      if (dVar17 <= dVar23 + param_3) {
        dVar17 = dVar23 + param_3;
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar13);
  }
  FUN_1446ddc76(&local_2a8,"Proximity",1);
  cVar9 = FUN_140498cd4(param_1,local_2a8,uVar8);
  uVar8 = DAT_14c996af0;
  if (cVar9 == '\0') {
    local_2b8 = DAT_14c996af0;
    local_2b0 = 1;
    FUN_1446ddc76(&local_2c0,"Proximity",1);
    FUN_146eb114a(param_1,local_2c0,uVar8,&local_2b8);
  }
  uVar8 = DAT_14c996af0;
  FUN_1446ddc76(local_2d8 + 2,"Proximity",1);
  local_448 = FUN_146eb57a6(param_1,local_2d8[2],uVar8);
  FUN_1458481c0(local_2a0);
  dVar2 = dVar6 - dVar4;
  if (dVar6 - dVar4 <= dVar5 - dVar3) {
    dVar2 = dVar5 - dVar3;
  }
  if (dVar2 <= dVar7 - dVar15) {
    dVar2 = dVar7 - dVar15;
  }
  local_2a0[0] = dVar17 + dVar17;
  if (dVar2 + param_3 <= dVar17 + dVar17) {
    local_2a0[0] = dVar2 + param_3;
  }
  uVar10 = FUN_1401f66f6(param_1,DAT_14c996af0);
  local_2d8[0] = 0;
  local_2d8[1] = 0;
  local_348 = (longlong *)CONCAT44(local_348._4_4_,0xffffffff);
  FUN_1448156a8(local_2d8,&local_348,(int)param_2[1]);
  if (0 < (int)uVar10) {
    uVar20 = 0;
    local_460 = uVar10;
    local_458 = param_1;
    do {
      lVar13 = param_2[2];
      lVar16 = (longlong)*(int *)(*(longlong *)(local_458 + 0x3b0) + uVar20 * 4) * 0x50;
      dVar17 = (double)(lVar16 + 0x10 + lVar13);
      local_378 = (longlong *)0x100000000;
      local_368 = 2.12199579047121e-314;
      local_360 = (double)((ulonglong)local_360 & 0xffffffff00000000);
      uStack_370 = dVar17;
      if (*(int *)((longlong)dVar17 + 0x18) != 0) {
        FUN_1449c0562(&local_378);
      }
      plVar19 = (longlong *)(lVar13 + lVar16);
      local_330 = local_368;
      dStack_328 = local_360;
      uStack_340 = (double)local_378;
      local_338 = uStack_370;
      iVar11 = (int)plVar19[5];
      local_378 = (longlong *)CONCAT44(1 << ((byte)iVar11 & 0x1f),iVar11 >> 5);
      local_368 = (double)CONCAT44(iVar11,-1 << ((byte)iVar11 & 0x1f));
      local_360 = (double)(CONCAT44(local_360._4_4_,iVar11) & 0xffffffffffffffe0);
      uStack_370 = dVar17;
      local_348 = plVar19;
      if ((int)plVar19[5] != iVar11) {
        FUN_1449c0562(&local_378);
        iVar11 = local_368._4_4_;
      }
      dVar17 = uStack_370;
      if ((local_348 != plVar19 || local_338 != uStack_370) || local_330._4_4_ != iVar11) {
        do {
          *(int *)(local_2d8[0] +
                  (longlong)*(int *)(*local_348 + (longlong)local_330._4_4_ * 0xc) * 4) =
               (int)uVar20;
          local_330 = (double)CONCAT44(local_330._4_4_,(uint)local_330 & ~uStack_340._4_4_);
          FUN_1449c0562(&uStack_340);
        } while (local_348 != plVar19 || (local_338 != dVar17 || local_330._4_4_ != iVar11));
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar10);
    local_2e8 = (int *)0x0;
    uStack_2e0 = 0;
    local_2ec = 0;
    dVar17 = param_3 * 0.5;
    lVar13 = local_458;
    do {
      lVar16 = param_2[2];
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x3b0) + (longlong)local_2ec * 4) * 0x50;
      lVar13 = lVar14 + lVar16;
      lVar12 = lVar13 + 0x10;
      local_348 = (longlong *)0x100000000;
      local_338 = 2.12199579047121e-314;
      local_330 = (double)((ulonglong)local_330 & 0xffffffff00000000);
      uStack_340 = (double)lVar12;
      if (*(int *)(lVar13 + 0x28) != 0) {
        FUN_1449c0562(&local_348);
      }
      plVar19 = (longlong *)(lVar16 + lVar14);
      local_300 = local_338;
      local_2f8 = (uint)local_330;
      local_2f4 = local_330._4_4_;
      local_310 = local_348;
      local_308 = (longlong)uStack_340;
      local_338._4_4_ = (int)plVar19[5];
      local_348 = (longlong *)CONCAT44(1 << ((byte)local_338._4_4_ & 0x1f),local_338._4_4_ >> 5);
      local_338._0_4_ = -1 << ((byte)local_338._4_4_ & 0x1f);
      local_330 = (double)(CONCAT44(local_330._4_4_,local_338._4_4_) & 0xffffffffffffffe0);
      local_450 = lVar14;
      local_318 = plVar19;
      if ((int)plVar19[5] != local_338._4_4_) {
        uStack_340 = (double)lVar12;
        FUN_1449c0562(&local_348);
        lVar12 = (longlong)uStack_340;
      }
      iVar11 = local_338._4_4_;
      local_45c = local_338._4_4_;
      if ((local_318 != plVar19 || local_308 != lVar12) || local_300._4_4_ != local_338._4_4_) {
        do {
          lVar13 = *(longlong *)
                    (*param_2 + (longlong)*(int *)(*local_318 + (longlong)local_300._4_4_ * 0xc) * 8
                    );
          local_378 = (longlong *)((double)*(float *)(lVar13 + 0x40) - dVar17);
          uStack_370 = (double)*(float *)(lVar13 + 0x44) - dVar17;
          local_368 = (double)*(float *)(lVar13 + 0x48) - dVar17;
          local_360 = (double)*(float *)(lVar13 + 0x4c) + dVar17;
          dStack_358 = (double)*(float *)(lVar13 + 0x50) + dVar17;
          local_350 = (double)*(float *)(lVar13 + 0x54) + dVar17;
          local_348 = local_378;
          uStack_340 = uStack_370;
          local_338 = local_368;
          local_330 = local_360;
          dStack_328 = dStack_358;
          local_320 = local_350;
          FUN_146c88a30(local_2a0,&local_378,&local_2e8);
          if ((longlong)(int)uStack_2e0 != 0) {
            piVar1 = local_2e8 + (int)uStack_2e0;
            piVar18 = local_2e8;
            do {
              lVar16 = *(longlong *)(*param_2 + (longlong)*piVar18 * 8);
              local_3a8[0] = (double)*(float *)(lVar16 + 0x40);
              local_3a8[1] = (double)*(float *)(lVar16 + 0x44);
              local_3a8[2] = (double)*(float *)(lVar16 + 0x48);
              local_390[0] = (double)*(float *)(lVar16 + 0x4c);
              local_390[1] = (double)*(float *)(lVar16 + 0x50);
              local_390[2] = (double)*(float *)(lVar16 + 0x54);
              local_3ac = *(int *)(local_2d8[0] + (longlong)*piVar18 * 4);
              if (local_2ec != local_3ac) {
                lVar14 = -3;
                do {
                  if (((double)(&local_378)[lVar14] <= (double)(&local_330)[lVar14] &&
                       (double)(&local_330)[lVar14] != (double)(&local_378)[lVar14]) ||
                     ((double)(&local_318)[lVar14] <= local_390[lVar14] &&
                      local_390[lVar14] != (double)(&local_318)[lVar14])) goto LAB_146ec9de9;
                  lVar14 = lVar14 + 1;
                } while (lVar14 != 0);
                local_420 = (double)*(float *)(lVar16 + 0x74) - (double)*(float *)(lVar13 + 0x74);
                local_428 = (double)*(float *)(lVar16 + 0x70) - (double)*(float *)(lVar13 + 0x70);
                local_430 = (double)*(float *)(lVar16 + 0x6c) - (double)*(float *)(lVar13 + 0x6c);
                FUN_146eca898(local_418,lVar13,lVar16,&local_430);
                local_468 = local_400;
                local_470 = local_3e8;
                local_478 = local_3d0;
                local_440 = lVar13;
                local_438 = lVar16;
                iVar11 = FUN_146eca2c5(&local_440,&local_438,local_418,&local_3b8);
                lVar16 = local_448;
                if ((iVar11 != 0) || (iVar11 = local_45c, local_3b8 <= param_3)) {
                  FUN_1447cbafe((longlong)local_2ec * 0x50 + *(longlong *)(local_448 + 0x10),
                                local_418,&local_3ac,0);
                  FUN_1447cbafe((longlong)local_3ac * 0x50 + *(longlong *)(lVar16 + 0x10),local_418,
                                &local_2ec,0);
                  iVar11 = local_45c;
                }
              }
LAB_146ec9de9:
              piVar18 = piVar18 + 1;
            } while (piVar18 != piVar1);
          }
          local_300 = CONCAT44(local_300._4_4_,(uint)local_300 & ~local_310._4_4_);
          FUN_1449c0562(&local_310);
        } while (local_318 != plVar19 || (local_308 != lVar12 || local_300._4_4_ != iVar11));
      }
      lVar12 = local_450;
      lVar16 = param_2[2];
      lVar13 = local_450 + lVar16;
      dVar15 = (double)(lVar13 + 0x10);
      local_348 = (longlong *)0x100000000;
      local_338 = 2.12199579047121e-314;
      local_330 = (double)((ulonglong)local_330 & 0xffffffff00000000);
      uStack_340 = dVar15;
      if (*(int *)(lVar13 + 0x28) != 0) {
        FUN_1449c0562(&local_348);
      }
      lVar13 = local_458;
      plVar19 = (longlong *)(lVar16 + lVar12);
      local_360 = local_338;
      dStack_358 = local_330;
      uStack_370 = (double)local_348;
      local_368 = uStack_340;
      iVar11 = (int)plVar19[5];
      local_348 = (longlong *)CONCAT44(1 << ((byte)iVar11 & 0x1f),iVar11 >> 5);
      local_338 = (double)CONCAT44(iVar11,-1 << ((byte)iVar11 & 0x1f));
      local_330 = (double)(CONCAT44(local_330._4_4_,iVar11) & 0xffffffffffffffe0);
      local_378 = plVar19;
      uStack_340 = dVar15;
      if ((int)plVar19[5] != iVar11) {
        FUN_1449c0562(&local_348);
        iVar11 = local_338._4_4_;
      }
      dVar15 = uStack_340;
      if ((local_378 != plVar19 || local_368 != uStack_340) || local_360._4_4_ != iVar11) {
        do {
          lVar12 = (longlong)*(int *)(*local_378 + (longlong)local_360._4_4_ * 0xc);
          lVar16 = *(longlong *)(*param_2 + lVar12 * 8);
          local_348 = (longlong *)((double)*(float *)(lVar16 + 0x40) - dVar17);
          uStack_340 = (double)*(float *)(lVar16 + 0x44) - dVar17;
          local_338 = (double)*(float *)(lVar16 + 0x48) - dVar17;
          local_330 = (double)*(float *)(lVar16 + 0x4c) + dVar17;
          dStack_328 = (double)*(float *)(lVar16 + 0x50) + dVar17;
          local_320 = (double)*(float *)(lVar16 + 0x54) + dVar17;
          FUN_146c86256(local_2a0,lVar12,&local_348);
          local_360 = (double)CONCAT44(local_360._4_4_,(uint)local_360 & ~uStack_370._4_4_);
          FUN_1449c0562(&uStack_370);
        } while (local_378 != plVar19 || (local_368 != dVar15 || local_360._4_4_ != iVar11));
      }
      local_2ec = local_2ec + 1;
    } while (local_2ec < (int)local_460);
    if (local_2e8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_2d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_145820e5c(local_2a0);
  if ((local_d0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eca2c5 FUN_146eca2c5 body=1490 status=ok
// SIG undefined FUN_146eca2c5(void)

/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_146eca2c5(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_308 [32];
  double *local_2e8;
  undefined4 *local_2e0;
  double *local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248 [4];
  undefined8 local_228;
  undefined8 uStack_220;
  double adStack_218 [10];
  double local_1c8 [12];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_248[2] = -1.0;
  local_248[3] = -1.0;
  local_248[0] = -1.0;
  local_248[1] = -1.0;
  dVar9 = *param_3;
  uVar14 = SUB84(dVar9,0);
  uVar15 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar1 = param_3[1];
  uVar16 = SUB84(dVar1,0);
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[2];
  uVar12 = SUB84(dVar2,0);
  uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar9 = SQRT(dVar2 * dVar2 + dVar9 * dVar9 + dVar1 * dVar1);
  local_24c = 0xffffffff;
  local_250 = 0xffffffff;
  uVar3 = 2;
  if (0.001 < dVar9) {
    dVar1 = 0.0;
    uVar7 = 0;
    local_2d0 = param_4;
    do {
      local_280._8_4_ = uVar16;
      local_280._0_8_ = -(double)CONCAT44(uVar15,uVar14);
      local_280._12_4_ = (int)((ulonglong)-(double)CONCAT44(uVar17,uVar16) >> 0x20);
      local_2e0 = &local_24c;
      local_2e8 = (double *)0x0;
      local_270 = -(double)CONCAT44(uVar13,uVar12);
      FUN_1449cbc5a(param_1,&local_268,local_280,0);
      local_2b0 = CONCAT44(uVar15,uVar14);
      local_2a8 = CONCAT44(uVar17,uVar16);
      local_2a0 = CONCAT44(uVar13,uVar12);
      local_2e0 = &local_250;
      local_2e8 = (double *)0x0;
      FUN_1449cbc5a(param_2,&local_298,&local_2b0,0);
      dVar8 = dStack_260 - (double)CONCAT44(uStack_28c,uStack_290);
      dVar10 = local_268 - (double)CONCAT44(uStack_294,local_298);
      dVar2 = ((double)CONCAT44(uVar13,uVar12) * (local_258 - local_288) +
              (double)CONCAT44(uVar15,uVar14) * dVar10 + (double)CONCAT44(uVar17,uVar16) * dVar8) /
              dVar9;
      if (dVar1 <= dVar2) {
        dVar1 = dVar2;
      }
      if ((dVar9 - dVar1 < 0.001) || (0xf < uVar7)) {
        if ((local_108 & 0xffffffff) == 0) {
          param_5[2] = local_258;
          *param_5 = local_268;
          param_5[1] = dStack_260;
          param_6[2] = local_288;
          *param_6 = (double)CONCAT44(uStack_294,local_298);
          param_6[1] = (double)CONCAT44(uStack_28c,uStack_290);
        }
        else {
          *param_5 = 0.0;
          param_5[1] = 0.0;
          param_5[2] = 0.0;
          param_6[2] = 0.0;
          *param_6 = 0.0;
          param_6[1] = 0.0;
          if (0 < (int)local_108) {
            uVar6 = 0;
            do {
              lVar4 = (longlong)*(int *)((longlong)&local_108 + uVar6 * 4 + 4);
              dVar1 = local_248[lVar4];
              dVar2 = local_1c8[lVar4 * 3 + 1];
              dVar8 = local_1c8[lVar4 * 3 + 2];
              *param_5 = local_1c8[lVar4 * 3] * dVar1 + *param_5;
              param_5[1] = dVar2 * dVar1 + param_5[1];
              param_5[2] = dVar8 * dVar1 + param_5[2];
              dVar2 = (double)(&uStack_220)[lVar4 * 3];
              dVar8 = adStack_218[lVar4 * 3];
              *param_6 = *(double *)((longlong)&local_228 + lVar4 * 0x18) * dVar1 + *param_6;
              param_6[1] = dVar2 * dVar1 + param_6[1];
              param_6[2] = dVar1 * dVar8 + param_6[2];
              uVar6 = uVar6 + 1;
            } while ((local_108 & 0xffffffff) != uVar6);
          }
        }
        dVar1 = -(double)CONCAT44(uVar13,uVar12) / dVar9;
        dVar2 = -(double)CONCAT44(uVar17,uVar16) / dVar9;
        dVar8 = -(double)CONCAT44(uVar15,uVar14) / dVar9;
        *local_2d0 = dVar9;
        dVar9 = dVar8 * 0.0;
        dVar10 = dVar2 * 0.0;
        dVar11 = dVar1 * 0.0;
        *param_5 = *param_5 + dVar9;
        param_5[1] = param_5[1] + dVar10;
        param_5[2] = param_5[2] + dVar11;
        *param_6 = *param_6 - dVar9;
        param_6[1] = param_6[1] - dVar10;
        param_6[2] = param_6[2] - dVar11;
        *param_7 = dVar8;
        param_7[1] = dVar2;
        param_7[2] = dVar1;
        uVar3 = *local_2d0 < 0.0;
        goto LAB_146eca812;
      }
      uVar7 = uVar7 + 1;
      lVar4 = (longlong)(int)local_108;
      *(int *)((longlong)&local_108 + lVar4 * 4 + 4) = (int)local_108;
      iVar5 = (int)local_108 + 1;
      local_168[lVar4 * 3] = dVar10;
      local_168[lVar4 * 3 + 1] = dVar8;
      local_168[lVar4 * 3 + 2] = local_258 - local_288;
      local_1c8[lVar4 * 3] = local_268;
      local_1c8[lVar4 * 3 + 1] = dStack_260;
      local_1c8[lVar4 * 3 + 2] = local_258;
      *(undefined4 *)((longlong)&local_228 + lVar4 * 0x18) = local_298;
      *(undefined4 *)((longlong)&local_228 + lVar4 * 0x18 + 4U) = uStack_294;
      *(undefined4 *)(&uStack_220 + lVar4 * 3) = uStack_290;
      *(undefined4 *)((longlong)adStack_218 + lVar4 * 0x18 + -4) = uStack_28c;
      adStack_218[lVar4 * 3] = local_288;
      local_108 = CONCAT44(local_108._4_4_,iVar5);
      local_2e0 = (undefined4 *)&local_228;
      local_2e8 = local_1c8;
      FUN_1449162b1(&local_2c8,local_168,&local_108,local_248);
      uVar14 = SUB84(local_2c8,0);
      uVar15 = (undefined4)((ulonglong)local_2c8 >> 0x20);
      uVar16 = SUB84(local_2c0,0);
      uVar17 = (undefined4)((ulonglong)local_2c0 >> 0x20);
      uVar12 = SUB84(local_2b8,0);
      uVar13 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      dVar9 = SQRT(local_2b8 * local_2b8 + local_2c8 * local_2c8 + local_2c0 * local_2c0);
    } while (0.001 < dVar9);
    uVar3 = 2;
  }
LAB_146eca812:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146eca898 FUN_146eca898 body=320 status=ok
// SIG undefined FUN_146eca898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146eca898(double *param_1,longlong param_2,longlong param_3,double *param_4)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    if ((param_4[1] == 0.0) && (!NAN(param_4[1]))) {
      if ((param_4[2] == 0.0) && (!NAN(param_4[2]))) {
        *param_4 = 1.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
    }
  }
  local_3c = 0xffffffff;
  local_98 = 0;
  local_90 = &local_3c;
  FUN_144916780(param_2,&local_58,param_4,*(undefined8 *)(param_2 + 0x10));
  local_88 = *(uint *)param_4 ^ (uint)DAT_149931e80;
  uStack_84 = *(uint *)((longlong)param_4 + 4) ^ DAT_149931e80._4_4_;
  uStack_80 = *(uint *)(param_4 + 1) ^ DAT_149931e80._8_4_;
  uStack_7c = *(uint *)((longlong)param_4 + 0xc) ^ DAT_149931e80._12_4_;
  local_78 = CONCAT44((uint)((ulonglong)param_4[2] >> 0x20) ^ DAT_149931e80._4_4_,
                      SUB84(param_4[2],0) ^ (uint)DAT_149931e80);
  local_98 = 0;
  local_90 = &local_3c;
  FUN_144916780(param_3,&local_70,&local_88,*(undefined8 *)(param_3 + 0x10));
  *param_1 = local_58 - local_70;
  param_1[1] = local_50 - local_68;
  param_1[2] = local_48 - local_60;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eca9da FUN_146eca9da body=7 status=ok
// SIG undefined FUN_146eca9da(void)

undefined8 * FUN_146eca9da(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 146eca9e2 FUN_146eca9e2 body=133 status=ok
// SIG undefined FUN_146eca9e2(void)

void FUN_146eca9e2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar2 = DAT_14c996af0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  FUN_1446ddc76(&local_38,"Proximity",1);
  cVar3 = FUN_140498cd4(uVar1,local_38,uVar2);
  if (cVar3 == '\0') {
    FUN_146ecaa68(param_1,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecaa68 FUN_146ecaa68 body=2770 status=ok
// SIG undefined FUN_146ecaa68(void)

void FUN_146ecaa68(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong **pplVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  undefined8 *local_3a0;
  undefined8 *local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  code *local_378;
  ulonglong local_370;
  int local_364;
  longlong local_360;
  longlong *local_358;
  longlong *local_350;
  ulonglong local_348;
  longlong local_340;
  ulonglong local_338;
  undefined8 local_330;
  undefined8 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  char local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined1 local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  double local_2c0;
  double local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  ulonglong uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  code *local_270;
  undefined8 local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  ulonglong local_248;
  undefined8 uStack_240;
  longlong local_238 [5];
  undefined8 local_210;
  longlong *local_208;
  longlong *plStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [8];
  float local_1b8;
  int local_1a8;
  float local_1a4;
  float local_1a0;
  char local_19c;
  char local_19b;
  char local_19a;
  longlong *local_198;
  longlong *plStack_190;
  longlong *local_188;
  double adStack_180 [3];
  ulonglong local_168;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_146ec9216(*param_1 + 0x160,&local_1a8);
  iVar11 = local_1a8;
  if ((local_1a0 <= 0.0) || (bVar16 = true, 1 < (byte)(local_19c - 1U))) {
    bVar16 = local_19b == '\x01';
  }
  bVar17 = local_1a8 == 1;
  FUN_146ebdd7e(*param_1 + 0x150,local_1c0,0xffffffff);
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  if ((bool)(bVar17 | bVar16)) {
    if ((param_2 == (undefined8 *)0x0) || (0.0 < (double)param_2[4])) {
      local_2a8 = (longlong **)0x0;
      uStack_2a0 = 0;
      FUN_146eb7819(*param_1 + 0xb0,*param_1 + 0x110,&local_2a8);
      local_3a0 = local_b8;
      local_b8[0] = 0;
      local_a8 = 0;
      local_388 = 0;
      local_398 = (undefined8 *)0x0;
      uStack_390 = 0;
      local_3a8 = 0;
      FUN_146ebe22a(&local_198,*param_1,&local_2a8,(double)local_1b8);
      param_2 = &local_1f8;
      FUN_146ec13d4(param_2,&local_198);
      FUN_146ebe7b8(&local_198);
      iVar11 = local_1a8;
      if (local_2a8 != (longlong **)0x0) {
        FUN_1400020a8();
        iVar11 = local_1a8;
      }
    }
    if (iVar11 == 1) {
      FUN_146ec9654(*param_1,param_2,SUB84((double)local_1a4,0));
      goto LAB_146ecac2c;
    }
  }
  FUN_146ecc6de(&local_198,*param_1);
  FUN_146ecc7ca(&local_198,*param_1);
  FUN_146eccb04(&local_198);
LAB_146ecac2c:
  local_208 = (longlong *)0x0;
  plStack_200 = (longlong *)0x0;
  if (bVar16) {
    FUN_146ecbec8(&local_198,*param_1,local_1a4,param_2);
    local_208 = local_198;
    plStack_200 = plStack_190;
    iVar11 = (int)plStack_190;
  }
  else {
    iVar11 = 0;
  }
  plVar13 = local_208;
  uVar5 = DAT_14c996af0;
  if (0.0 < local_1a0) {
    if (local_19c == '\x02') {
      lVar7 = *param_1;
      FUN_1446ddc76(&local_330,"Proximity",1);
      lVar7 = FUN_146eb57a6(lVar7,local_330,uVar5);
      if (iVar11 != 0) {
        lVar10 = 0;
        do {
          fVar18 = *(float *)((longlong)plVar13 + lVar10 + 8);
          if ((fVar18 < local_1a0 * local_1a0) &&
             (fVar18 < *(float *)((longlong)plVar13 + lVar10 + 0xc) * 0.5)) {
            FUN_144a7cc9e((longlong)*(int *)((longlong)plVar13 + lVar10) * 0x50 +
                          *(longlong *)(lVar7 + 0x10),
                          *(undefined4 *)((longlong)plVar13 + lVar10 + 4));
            FUN_144a7cc9e((longlong)*(int *)((longlong)plVar13 + lVar10 + 4) * 0x50 +
                          *(longlong *)(lVar7 + 0x10),*(undefined4 *)((longlong)plVar13 + lVar10));
          }
          lVar10 = lVar10 + 0x18;
        } while ((longlong)iVar11 * 0x18 != lVar10);
      }
    }
    else if (local_19c == '\x01') {
      lVar7 = *param_1;
      FUN_1446ddc76(&local_328,"Proximity",1);
      lVar7 = FUN_146eb57a6(lVar7,local_328,uVar5);
      if (iVar11 != 0) {
        lVar10 = 0;
        do {
          fVar18 = *(float *)((longlong)plVar13 + lVar10 + 0x10);
          if ((fVar18 < local_1a0) && (fVar18 < *(float *)((longlong)plVar13 + lVar10 + 0x14) * 0.5)
             ) {
            FUN_144a7cc9e((longlong)*(int *)((longlong)plVar13 + lVar10) * 0x50 +
                          *(longlong *)(lVar7 + 0x10),
                          *(undefined4 *)((longlong)plVar13 + lVar10 + 4));
            FUN_144a7cc9e((longlong)*(int *)((longlong)plVar13 + lVar10 + 4) * 0x50 +
                          *(longlong *)(lVar7 + 0x10),*(undefined4 *)((longlong)plVar13 + lVar10));
          }
          lVar10 = lVar10 + 0x18;
        } while ((longlong)iVar11 * 0x18 != lVar10);
      }
    }
    else if (local_19c == '\0') {
      lVar7 = *param_1;
      FUN_1446ddc76(&local_210,"Proximity",1);
      lVar7 = FUN_146eb57a6(lVar7,local_210,uVar5);
      uVar6 = FUN_1401f66f6(*param_1,DAT_14c996af0);
      local_238[2] = 0;
      local_238[3] = 0;
      adStack_180[1] = 0.0;
      adStack_180[2] = 0.0;
      local_188 = (longlong *)0x0;
      adStack_180[0] = 0.0;
      local_198 = (longlong *)0x0;
      plStack_190 = (longlong *)0x0;
      local_168 = local_168 & 0xffffffffffffff00;
      FUN_146eccb68(local_238 + 2,&local_198,uVar6);
      local_238[0] = 0;
      local_238[1] = 0;
      FUN_146eb7819(*param_1 + 0xb0,*param_1 + 0x110,local_238);
      local_398 = &local_2a8;
      local_2a8 = (longlong **)0x0;
      uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
      local_270 = FUN_142a0f8ca;
      local_3a0 = (undefined8 *)((ulonglong)local_3a0 & 0xffffffff00000000);
      local_268 = &local_198;
      local_198 = local_238 + 2;
      plStack_190 = param_1;
      local_188 = local_238;
      FUN_1401f8d10(L"ParallelFor Task",uVar6,1);
      local_248 = 0;
      uStack_240 = 0;
      if (0 < (int)uVar6) {
        local_348 = (ulonglong)uVar6;
        uVar8 = 0;
        local_360 = lVar7;
        local_358 = plVar13;
        local_350 = param_1;
        do {
          lVar7 = uVar8 * 0x38;
          plVar13 = (longlong *)(local_238[2] + 0x10 + lVar7);
          puVar1 = (undefined8 *)(local_238[2] + 0x20 + lVar7);
          local_198 = *(longlong **)(local_238[2] + lVar7);
          plStack_190 = (longlong *)((longlong *)(local_238[2] + lVar7))[1];
          local_188 = (longlong *)*plVar13;
          adStack_180[0] = (double)plVar13[1];
          adStack_180[1] = (double)*puVar1;
          adStack_180[2] = (double)puVar1[1];
          local_168 = *(ulonglong *)(local_238[2] + 0x30 + lVar7);
          bVar16 = (longlong)uStack_240 < 0;
          uStack_240 = uStack_240 & 0xffffffff00000000;
          if (bVar16) {
            FUN_14481578e(&local_248,0);
          }
          local_378 = *(code **)(local_360 + 0x10);
          lVar7 = uVar8 * 0x50;
          uStack_2a0 = (longlong)local_378 + lVar7 + 0x10;
          local_2a8 = (longlong **)&DAT_100000000;
          local_298 = 0xffffffff;
          uStack_290 = uStack_290 & 0xffffffff00000000;
          uVar12 = uStack_2a0;
          if (*(int *)((longlong)local_378 + lVar7 + 0x28) != 0) {
            local_370 = uStack_2a0;
            FUN_1449c0562(&local_2a8);
            uVar12 = local_370;
          }
          local_378 = (code *)((longlong)local_378 + lVar7);
          local_258 = local_298;
          local_250 = (undefined4)uStack_290;
          local_24c = uStack_290._4_4_;
          local_268 = local_2a8;
          local_260 = uStack_2a0;
          local_270 = local_378;
          iVar11 = *(int *)(local_378 + 0x28);
          local_2a8 = (longlong **)CONCAT44(1 << ((byte)iVar11 & 0x1f),iVar11 >> 5);
          local_298 = CONCAT44(iVar11,-1 << ((byte)iVar11 & 0x1f));
          uStack_290 = CONCAT44(uStack_290._4_4_,iVar11) & 0xffffffffffffffe0;
          local_338 = uVar8;
          uStack_2a0 = uVar12;
          if (*(int *)(local_378 + 0x28) != iVar11) {
            FUN_1449c0562(&local_2a8);
            iVar11 = local_298._4_4_;
          }
          local_370 = uStack_2a0;
          local_364 = iVar11;
          local_340 = lVar7;
          if ((local_270 != local_378 || local_260 != uStack_2a0) || local_258._4_4_ != iVar11) {
            do {
              iVar11 = *(int *)(*(longlong *)local_270 + (longlong)local_258._4_4_ * 0xc);
              lVar7 = (longlong)iVar11 * 0x38;
              puVar1 = (undefined8 *)(local_238[2] + 0x10 + lVar7);
              puVar2 = (undefined8 *)(local_238[2] + 0x20 + lVar7);
              local_2a8 = (longlong **)*(longlong *)(local_238[2] + lVar7);
              uStack_2a0 = ((longlong *)(local_238[2] + lVar7))[1];
              local_298 = *puVar1;
              uStack_290 = puVar1[1];
              local_288 = *puVar2;
              uStack_280 = puVar2[1];
              local_278 = *(undefined8 *)(local_238[2] + 0x30 + lVar7);
              iVar14 = -3;
              do {
                uVar6 = iVar14 + 4;
                if (iVar14 == -1) {
                  uVar6 = 0;
                }
                uVar8 = (ulonglong)(iVar14 + 2);
                if (iVar14 == -3) {
                  uVar8 = 2;
                }
                local_2c8 = (&local_198)[uVar8];
                local_2b8 = adStack_180[uVar8];
                local_2d0 = (&local_198)[uVar6];
                local_2c0 = adStack_180[uVar6];
                local_2b0 = 1;
                local_2f0 = (double)(&local_2a8)[uVar8];
                local_2e0 = (double)(&uStack_290)[uVar8];
                local_2f8 = (double)(&local_2a8)[uVar6];
                local_2e8 = (double)(&uStack_290)[uVar6];
                local_2d8 = 1;
                FUN_140b34bd8(&local_2d0,&local_320,&local_2f8);
                uVar8 = uStack_240;
                if (local_300 == '\x01') {
                  dVar3 = local_2e8 - local_2f8;
                  if (local_2e0 - local_2f0 <= local_2e8 - local_2f8) {
                    dVar3 = local_2e0 - local_2f0;
                  }
                  dVar4 = local_2c0 - (double)local_2d0;
                  if (local_2b8 - (double)local_2c8 <= local_2c0 - (double)local_2d0) {
                    dVar4 = local_2b8 - (double)local_2c8;
                  }
                  if (dVar3 <= dVar4) {
                    dVar4 = dVar3;
                  }
                  dVar3 = local_310 - local_320;
                  if (local_308 - local_318 <= local_310 - local_320) {
                    dVar3 = local_308 - local_318;
                  }
                  fVar18 = (float)dVar4 * 0.5;
                  if (local_1a0 <= (float)dVar4 * 0.5) {
                    fVar18 = local_1a0;
                  }
                  if (fVar18 < (float)dVar3) goto LAB_146ecb1e6;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 != 0);
              lVar7 = (longlong)(int)uStack_240;
              uVar6 = (int)uStack_240 + 1;
              uStack_240 = CONCAT44(uStack_240._4_4_,uVar6);
              if (uStack_240._4_4_ < uVar6) {
                FUN_1446f48e2(&local_248,uVar8 & 0xffffffff);
              }
              *(int *)(local_248 + lVar7 * 4) = iVar11;
LAB_146ecb1e6:
              local_258 = CONCAT44(local_258._4_4_,(uint)local_258 & ~local_268._4_4_);
              FUN_1449c0562(&local_268);
            } while (local_270 != local_378 ||
                     (local_260 != local_370 || local_258._4_4_ != local_364));
          }
          uVar8 = local_338;
          lVar10 = local_340;
          lVar7 = local_360;
          local_378 = (code *)(longlong)(int)uStack_240;
          if (local_378 != (code *)0x0) {
            local_370 = local_248;
            local_378 = (code *)((longlong)local_378 << 2);
            lVar15 = 0;
            do {
              iVar11 = *(int *)(local_370 + lVar15);
              FUN_144a7cc9e(*(longlong *)(lVar7 + 0x10) + lVar10,iVar11);
              FUN_144a7cc9e((longlong)iVar11 * 0x50 + *(longlong *)(lVar7 + 0x10));
              lVar15 = lVar15 + 4;
            } while (local_378 != (code *)lVar15);
          }
          param_1 = local_350;
          plVar13 = local_358;
          uVar8 = uVar8 + 1;
        } while (uVar8 != local_348);
        if (local_248 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_238[0] != 0) {
        FUN_1400020a8();
      }
      if (local_238[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_19a == '\x01') {
    pplVar9 = &local_208;
    if (local_19b != '\x01') {
      pplVar9 = (longlong **)0x0;
    }
    FUN_146ecb88c(param_1,pplVar9);
  }
  else {
    FUN_146e9a5f4(&local_198,*param_1);
    FUN_146e9a7b6(&local_198);
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_1400020a8(plVar13);
  }
  FUN_146ebe7b8(&local_1f8);
  if ((local_70 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


