// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1455759a0 FUN_1455759a0 body=6289 status=ok
// SIG undefined FUN_1455759a0(void)

undefined8 FUN_1455759a0(uint *param_1,int *param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  float *pfVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  undefined4 local_130;
  longlong local_128;
  uint *local_120;
  longlong local_118;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  if (*param_2 == 0x1010001) {
    uVar6 = param_2[2];
    param_1[0x12] = uVar6;
    param_1[0x13] = param_2[3];
    local_140 = 0x1011000;
    local_13c = 0x18;
    local_130 = 0x3f34fdf4;
    param_1[0x14] = (uint)((float)param_2[4] * 0.01);
    param_1[0x15] = param_2[5];
    param_1[0x16] = param_2[6];
    local_res8 = 0;
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      puVar7 = param_1 + 0x10;
      local_120 = puVar7;
      while( true ) {
        uVar5 = 0;
        if (uVar6 != 1) {
          local_128 = (ulonglong)local_res8 * 4;
          puVar12 = puVar7;
          do {
            if (local_res8 == param_1[0x12] - 1) {
              local_134 = param_2[(ulonglong)(local_res8 - 1) + 9];
              local_138 = 2;
            }
            else {
              local_134 = param_2[(ulonglong)local_res8 + 9];
              local_138 = 1;
            }
            iVar3 = FUN_1455fb090(&local_140,param_1 + ((ulonglong)uVar5 + local_128) * 0x36 + 0x19,
                                  *param_1,*puVar12,param_3,param_4);
            lVar13 = local_128;
            if (iVar3 != 0) {
              return 0x80800005;
            }
            uVar14 = 2;
            uVar5 = uVar5 + 1;
            puVar12 = local_120;
          } while (uVar5 < 2);
          if ((local_res8 == 0) || (local_res8 == param_1[0x12] - 1)) {
            *(undefined2 *)((longlong)param_1 + (ulonglong)local_res8 * 2 + 0x5c) = 2;
          }
          else {
            *(undefined2 *)((longlong)param_1 + (ulonglong)local_res8 * 2 + 0x5c) = 4;
            local_134 = param_2[(ulonglong)(local_res8 - 1) + 9];
            local_138 = 2;
            do {
              iVar3 = FUN_1455fb090(&local_140,param_1 + (uVar14 + lVar13) * 0x36 + 0x19,*param_1,
                                    *puVar7,param_3,param_4);
              if (iVar3 != 0) {
                return 0x80800005;
              }
              uVar6 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar6;
            } while (uVar6 < 4);
          }
        }
        uVar14 = (ulonglong)local_res8;
        local_128 = 0;
        pfVar9 = (float *)(param_1 + uVar14 * 0x9c + 0x3c3);
        local_118 = 3;
        local_120 = puVar7;
        do {
          fVar17 = (float)param_2[uVar14 * 6 + 0xb];
          lVar13 = local_128 + uVar14 * 0x9c;
          param_1[lVar13 + 0x37a] = (uint)fVar17;
          param_1[lVar13 + 0x386] = param_2[uVar14 * 6 + 0xc];
          if ((float)param_2[uVar14 * 6 + 0xd] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xd]));
            fVar16 = 1.0 - fVar16;
          }
          param_1[lVar13 + 0x392] = (uint)fVar16;
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xe]));
            fVar16 = 1.0 - fVar16;
          }
          param_1[lVar13 + 0x39e] = (uint)fVar16;
          fVar16 = powf(10.0,(float)param_2[uVar14 * 6 + 0xf] * 0.05);
          param_1[lVar13 + 0x3aa] = (uint)fVar16;
          fVar16 = (float)param_2[uVar14 * 6 + 0x10];
          param_1[lVar13 + 0x3b6] = (uint)fVar16;
          param_1[lVar13 + 0x3c2] = (uint)(1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xc]);
          fVar15 = expf(-440.0 / (float)*puVar7);
          param_1[lVar13 + 0x3ce] = (uint)(1.0 - fVar15);
          param_1[lVar13 + 0x3f2] = (uint)(fVar17 - fVar16 * 0.5);
          lVar13 = local_128 + uVar14 * 0x9c;
          param_1[lVar13 + 0x37b] = param_2[uVar14 * 6 + 0xb];
          param_1[lVar13 + 0x387] = param_2[uVar14 * 6 + 0xc];
          if ((float)param_2[uVar14 * 6 + 0xd] == 0.0) {
            fVar17 = 1.0;
          }
          else {
            fVar17 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xd]));
            fVar17 = 1.0 - fVar17;
          }
          param_1[lVar13 + 0x393] = (uint)fVar17;
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar17 = 1.0;
          }
          else {
            fVar17 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xe]));
            fVar17 = 1.0 - fVar17;
          }
          param_1[lVar13 + 0x39f] = (uint)fVar17;
          fVar17 = powf(10.0,(float)param_2[uVar14 * 6 + 0xf] * 0.05);
          pfVar9[-0x18] = fVar17;
          fVar17 = (float)param_2[uVar14 * 6 + 0x10];
          pfVar9[-0xc] = fVar17;
          *pfVar9 = 1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xc];
          fVar16 = expf(-440.0 / (float)*puVar7);
          pfVar9[0xc] = 1.0 - fVar16;
          pfVar9[0x30] = pfVar9[-0x48] - fVar17 * 0.5;
          fVar17 = (float)param_2[uVar14 * 6 + 0xb];
          pfVar9[-0x47] = fVar17;
          pfVar9[-0x3b] = (float)param_2[uVar14 * 6 + 0xc];
          if ((float)param_2[uVar14 * 6 + 0xd] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xd]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x2f] = fVar16;
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xe]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x23] = fVar16;
          fVar16 = powf(10.0,(float)param_2[uVar14 * 6 + 0xf] * 0.05);
          pfVar9[-0x17] = fVar16;
          fVar16 = (float)param_2[uVar14 * 6 + 0x10];
          pfVar9[-0xb] = fVar16;
          pfVar9[1] = 1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xc];
          fVar15 = expf(-440.0 / (float)*puVar7);
          pfVar9[0xd] = 1.0 - fVar15;
          pfVar9[0x31] = fVar17 - fVar16 * 0.5;
          fVar17 = (float)param_2[uVar14 * 6 + 0xb];
          pfVar9[-0x46] = fVar17;
          pfVar9[-0x3a] = (float)param_2[uVar14 * 6 + 0xc];
          if ((float)param_2[uVar14 * 6 + 0xd] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xd]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x2e] = fVar16;
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)*puVar7 * (float)param_2[uVar14 * 6 + 0xe]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x22] = fVar16;
          fVar16 = powf(10.0,(float)param_2[uVar14 * 6 + 0xf] * 0.05);
          pfVar9[-0x16] = fVar16;
          fVar16 = (float)param_2[uVar14 * 6 + 0x10];
          pfVar9[-10] = fVar16;
          pfVar9[2] = 1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xc];
          fVar15 = expf(-440.0 / (float)*puVar7);
          local_128 = local_128 + 4;
          pfVar9[0xe] = 1.0 - fVar15;
          pfVar9[0x32] = fVar17 - fVar16 * 0.5;
          pfVar9 = pfVar9 + 4;
          local_118 = local_118 + -1;
        } while (local_118 != 0);
        uVar6 = param_1[0x12];
        local_res8 = local_res8 + 1;
        if (uVar6 <= local_res8) break;
        local_118 = 0;
      }
      local_118 = 0;
      if (3 < uVar6) goto LAB_14557718c;
    }
    puVar12 = param_1 + 0x10;
    puVar7 = param_1 + (ulonglong)uVar6 * 0x9c + 999;
    uVar14 = (ulonglong)(4 - uVar6);
    do {
      lVar13 = 2;
      puVar11 = puVar7;
      do {
        puVar11[-0xd] = 0;
        puVar11[-1] = 0x3f800000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x6d] = 0xc1a00000;
        puVar11[-0x61] = 0x40000000;
        puVar11[-0x19] = (uint)(1.0 - fVar17);
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x55] = (uint)(1.0 - fVar17);
        fVar17 = expf(-22.0 / (float)*puVar12);
        puVar11[-0x3d] = 0x3f800000;
        puVar11[-0x31] = 0;
        puVar11[-0x25] = 0x3f000000;
        puVar11[0xb] = 0xc1a00000;
        puVar11[-0x49] = (uint)(1.0 - fVar17);
        puVar11[-0xc] = 0;
        *puVar11 = 0x3f800000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x18] = (uint)(1.0 - fVar17);
        puVar11[-0x6c] = 0xc1a00000;
        puVar11[-0x60] = 0x40000000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x54] = (uint)(1.0 - fVar17);
        fVar17 = expf(-22.0 / (float)*puVar12);
        puVar11[-0x48] = (uint)(1.0 - fVar17);
        puVar11[-0x3c] = 0x3f800000;
        puVar11[-0x30] = 0;
        puVar11[-0x24] = 0x3f000000;
        puVar11[0xc] = 0xc1a00000;
        puVar11[-0xb] = 0;
        puVar11[1] = 0x3f800000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x17] = (uint)(1.0 - fVar17);
        puVar11[-0x6b] = 0xc1a00000;
        puVar11[-0x5f] = 0x40000000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x53] = (uint)(1.0 - fVar17);
        fVar17 = expf(-22.0 / (float)*puVar12);
        puVar11[-0x47] = (uint)(1.0 - fVar17);
        puVar11[-0x3b] = 0x3f800000;
        puVar11[-0x2f] = 0;
        puVar11[-0x23] = 0x3f000000;
        puVar11[0xd] = 0xc1a00000;
        puVar11[-10] = 0;
        puVar11[2] = 0x3f800000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x16] = (uint)(1.0 - fVar17);
        puVar11[-0x6a] = 0xc1a00000;
        puVar11[-0x5e] = 0x40000000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x52] = (uint)(1.0 - fVar17);
        fVar17 = expf(-22.0 / (float)*puVar12);
        puVar11[-0x46] = (uint)(1.0 - fVar17);
        puVar11[-0x3a] = 0x3f800000;
        puVar11[-0x2e] = 0;
        puVar11[-0x22] = 0x3f000000;
        puVar11[0xe] = 0xc1a00000;
        puVar11[-9] = 0;
        puVar11[3] = 0x3f800000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x15] = (uint)(1.0 - fVar17);
        puVar11[-0x69] = 0xc1a00000;
        puVar11[-0x5d] = 0x40000000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x51] = (uint)(1.0 - fVar17);
        fVar17 = expf(-22.0 / (float)*puVar12);
        puVar11[-0x45] = (uint)(1.0 - fVar17);
        puVar11[-0x39] = 0x3f800000;
        puVar11[-0x2d] = 0;
        puVar11[-0x21] = 0x3f000000;
        puVar11[0xf] = 0xc1a00000;
        puVar11[-8] = 0;
        puVar11[4] = 0x3f800000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x14] = (uint)(1.0 - fVar17);
        puVar11[-0x68] = 0xc1a00000;
        puVar11[-0x5c] = 0x40000000;
        fVar17 = expf(-440.0 / (float)*puVar12);
        puVar11[-0x50] = (uint)(1.0 - fVar17);
        fVar17 = expf(-22.0 / (float)*puVar12);
        puVar11[-0x44] = (uint)(1.0 - fVar17);
        puVar11[-0x38] = 0x3f800000;
        puVar11[-0x2c] = 0;
        puVar11[-0x20] = 0x3f000000;
        puVar11[0x10] = 0xc1a00000;
        puVar11 = puVar11 + 6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      puVar7 = puVar7 + 0x9c;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  else {
    if (*param_2 != 0x1020001) {
      return 0x80260202;
    }
    uVar6 = param_2[2];
    param_1[0x12] = uVar6;
    param_1[0x13] = param_2[3];
    local_140 = 0x1011000;
    local_13c = 0x18;
    local_130 = 0x3f34fdf4;
    param_1[0x14] = (uint)((float)param_2[4] * 0.01);
    param_1[0x15] = param_2[5];
    param_1[0x16] = param_2[6];
    local_res8 = 0;
    uVar5 = 0;
    if (uVar6 != 0) {
      do {
        uVar14 = 2;
        if (uVar6 != 1) {
          uVar8 = 0;
          do {
            if (local_res8 == param_1[0x12] - 1) {
              local_138 = 2;
              local_134 = param_2[(ulonglong)(local_res8 - 1) + 9];
            }
            else {
              local_138 = 1;
              local_134 = param_2[(ulonglong)local_res8 + 9];
            }
            iVar3 = FUN_1455fb090(&local_140,
                                  param_1 + (uVar8 + (ulonglong)local_res8 * 4) * 0x36 + 0x19,
                                  *param_1,param_1[0x10],param_3,param_4);
            if (iVar3 != 0) {
              return 0x80800005;
            }
            uVar6 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar6;
          } while (uVar6 < 2);
          if ((local_res8 == 0) || (local_res8 == param_1[0x12] - 1)) {
            *(undefined2 *)((longlong)param_1 + (ulonglong)local_res8 * 2 + 0x5c) = 2;
          }
          else {
            *(undefined2 *)((longlong)param_1 + (ulonglong)local_res8 * 2 + 0x5c) = 4;
            local_134 = param_2[(ulonglong)(local_res8 - 1) + 9];
            local_138 = 2;
            do {
              iVar3 = FUN_1455fb090(&local_140,
                                    param_1 + (uVar14 + (ulonglong)local_res8 * 4) * 0x36 + 0x19,
                                    *param_1,param_1[0x10],param_3,param_4);
              if (iVar3 != 0) {
                return 0x80800005;
              }
              uVar6 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar6;
            } while (uVar6 < 4);
          }
        }
        uVar14 = (ulonglong)local_res8;
        lVar13 = 0;
        local_148 = 3;
        pfVar9 = (float *)(param_1 + uVar14 * 0x9c + 0x3c3);
        puVar7 = (uint *)((uVar14 + 2) * 3);
        local_118 = uVar14 * 0x9c;
        local_120 = puVar7;
        do {
          fVar17 = (float)param_2[(longlong)puVar7 * 2];
          lVar1 = local_118 + lVar13;
          param_1[lVar1 + 0x37a] = (uint)fVar17;
          param_1[lVar1 + 0x386] = param_2[uVar14 * 6 + 0xd];
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xe]));
            fVar16 = 1.0 - fVar16;
          }
          param_1[lVar1 + 0x392] = (uint)fVar16;
          if ((float)param_2[uVar14 * 6 + 0xf] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xf]));
            fVar16 = 1.0 - fVar16;
          }
          param_1[lVar1 + 0x39e] = (uint)fVar16;
          fVar16 = powf(10.0,(float)param_2[uVar14 * 6 + 0x10] * 0.05);
          param_1[lVar1 + 0x3aa] = (uint)fVar16;
          fVar16 = (float)param_2[uVar14 * 6 + 0x11];
          param_1[lVar1 + 0x3b6] = (uint)fVar16;
          param_1[lVar1 + 0x3c2] = (uint)(1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xd]);
          fVar15 = expf(-440.0 / (float)param_1[0x10]);
          puVar7 = local_120;
          lVar4 = local_118 + lVar13;
          param_1[lVar1 + 0x3ce] = (uint)(1.0 - fVar15);
          param_1[lVar1 + 0x3f2] = (uint)(fVar17 - fVar16 * 0.5);
          param_1[lVar4 + 0x37b] = param_2[(longlong)local_120 * 2];
          param_1[lVar4 + 0x387] = param_2[uVar14 * 6 + 0xd];
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar17 = 1.0;
          }
          else {
            fVar17 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xe]));
            fVar17 = 1.0 - fVar17;
          }
          param_1[lVar4 + 0x393] = (uint)fVar17;
          if ((float)param_2[uVar14 * 6 + 0xf] == 0.0) {
            fVar17 = 1.0;
          }
          else {
            fVar17 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xf]));
            fVar17 = 1.0 - fVar17;
          }
          param_1[lVar4 + 0x39f] = (uint)fVar17;
          fVar17 = powf(10.0,(float)param_2[uVar14 * 6 + 0x10] * 0.05);
          pfVar9[-0x18] = fVar17;
          fVar17 = (float)param_2[uVar14 * 6 + 0x11];
          pfVar9[-0xc] = fVar17;
          *pfVar9 = 1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xd];
          fVar16 = expf(-440.0 / (float)param_1[0x10]);
          pfVar9[0xc] = 1.0 - fVar16;
          pfVar9[0x30] = pfVar9[-0x48] - fVar17 * 0.5;
          fVar17 = (float)param_2[(longlong)puVar7 * 2];
          pfVar9[-0x47] = fVar17;
          pfVar9[-0x3b] = (float)param_2[uVar14 * 6 + 0xd];
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xe]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x2f] = fVar16;
          if ((float)param_2[uVar14 * 6 + 0xf] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xf]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x23] = fVar16;
          fVar16 = powf(10.0,(float)param_2[uVar14 * 6 + 0x10] * 0.05);
          pfVar9[-0x17] = fVar16;
          fVar16 = (float)param_2[uVar14 * 6 + 0x11];
          pfVar9[-0xb] = fVar16;
          pfVar9[1] = 1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xd];
          fVar15 = expf(-440.0 / (float)param_1[0x10]);
          pfVar9[0xd] = 1.0 - fVar15;
          pfVar9[0x31] = fVar17 - fVar16 * 0.5;
          fVar17 = (float)param_2[(longlong)puVar7 * 2];
          pfVar9[-0x46] = fVar17;
          pfVar9[-0x3a] = (float)param_2[uVar14 * 6 + 0xd];
          if ((float)param_2[uVar14 * 6 + 0xe] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xe]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x2e] = fVar16;
          if ((float)param_2[uVar14 * 6 + 0xf] == 0.0) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[uVar14 * 6 + 0xf]));
            fVar16 = 1.0 - fVar16;
          }
          pfVar9[-0x22] = fVar16;
          fVar16 = powf(10.0,(float)param_2[uVar14 * 6 + 0x10] * 0.05);
          pfVar9[-0x16] = fVar16;
          fVar16 = (float)param_2[uVar14 * 6 + 0x11];
          pfVar9[-10] = fVar16;
          pfVar9[2] = 1.0 - 1.0 / (float)param_2[uVar14 * 6 + 0xd];
          fVar15 = expf(-440.0 / (float)param_1[0x10]);
          lVar13 = lVar13 + 4;
          pfVar9[0xe] = 1.0 - fVar15;
          pfVar9[0x32] = fVar17 - fVar16 * 0.5;
          pfVar9 = pfVar9 + 4;
          local_148 = local_148 + -1;
        } while (local_148 != 0);
        uVar5 = param_1[0x12];
        local_res8 = local_res8 + 1;
        uVar6 = uVar5;
      } while (local_res8 < uVar5);
    }
    if (uVar5 < 4) {
      uVar14 = (ulonglong)(4 - uVar5);
      puVar12 = param_1 + (ulonglong)uVar5 * 0x9c + 999;
      lVar13 = 2;
      puVar7 = puVar12;
      do {
        do {
          puVar12[-0xd] = 0;
          puVar12[-1] = 0x3f800000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x6d] = 0xc1a00000;
          puVar12[-0x61] = 0x40000000;
          puVar12[-0x19] = (uint)(1.0 - fVar17);
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x55] = (uint)(1.0 - fVar17);
          fVar17 = expf(-22.0 / (float)param_1[0x10]);
          puVar12[-0x3d] = 0x3f800000;
          puVar12[-0x31] = 0;
          puVar12[-0x25] = 0x3f000000;
          puVar12[0xb] = 0xc1a00000;
          puVar12[-0x49] = (uint)(1.0 - fVar17);
          puVar12[-0xc] = 0;
          *puVar12 = 0x3f800000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x18] = (uint)(1.0 - fVar17);
          puVar12[-0x6c] = 0xc1a00000;
          puVar12[-0x60] = 0x40000000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x54] = (uint)(1.0 - fVar17);
          fVar17 = expf(-22.0 / (float)param_1[0x10]);
          puVar12[-0x48] = (uint)(1.0 - fVar17);
          puVar12[-0x3c] = 0x3f800000;
          puVar12[-0x30] = 0;
          puVar12[-0x24] = 0x3f000000;
          puVar12[0xc] = 0xc1a00000;
          puVar12[-0xb] = 0;
          puVar12[1] = 0x3f800000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x17] = (uint)(1.0 - fVar17);
          puVar12[-0x6b] = 0xc1a00000;
          puVar12[-0x5f] = 0x40000000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x53] = (uint)(1.0 - fVar17);
          fVar17 = expf(-22.0 / (float)param_1[0x10]);
          puVar12[-0x47] = (uint)(1.0 - fVar17);
          puVar12[-0x3b] = 0x3f800000;
          puVar12[-0x2f] = 0;
          puVar12[-0x23] = 0x3f000000;
          puVar12[0xd] = 0xc1a00000;
          puVar12[-10] = 0;
          puVar12[2] = 0x3f800000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x16] = (uint)(1.0 - fVar17);
          puVar12[-0x6a] = 0xc1a00000;
          puVar12[-0x5e] = 0x40000000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x52] = (uint)(1.0 - fVar17);
          fVar17 = expf(-22.0 / (float)param_1[0x10]);
          puVar12[-0x46] = (uint)(1.0 - fVar17);
          puVar12[-0x3a] = 0x3f800000;
          puVar12[-0x2e] = 0;
          puVar12[-0x22] = 0x3f000000;
          puVar12[0xe] = 0xc1a00000;
          puVar12[-9] = 0;
          puVar12[3] = 0x3f800000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x15] = (uint)(1.0 - fVar17);
          puVar12[-0x69] = 0xc1a00000;
          puVar12[-0x5d] = 0x40000000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x51] = (uint)(1.0 - fVar17);
          fVar17 = expf(-22.0 / (float)param_1[0x10]);
          puVar12[-0x45] = (uint)(1.0 - fVar17);
          puVar12[-0x39] = 0x3f800000;
          puVar12[-0x2d] = 0;
          puVar12[-0x21] = 0x3f000000;
          puVar12[0xf] = 0xc1a00000;
          puVar12[-8] = 0;
          puVar12[4] = 0x3f800000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x14] = (uint)(1.0 - fVar17);
          puVar12[-0x68] = 0xc1a00000;
          puVar12[-0x5c] = 0x40000000;
          fVar17 = expf(-440.0 / (float)param_1[0x10]);
          puVar12[-0x50] = (uint)(1.0 - fVar17);
          fVar17 = expf(-22.0 / (float)param_1[0x10]);
          puVar12[-0x44] = (uint)(1.0 - fVar17);
          puVar12[-0x38] = 0x3f800000;
          puVar12[-0x2c] = 0;
          puVar12[-0x20] = 0x3f000000;
          puVar12[0x10] = 0xc1a00000;
          puVar12 = puVar12 + 6;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        puVar12 = puVar7 + 0x9c;
        uVar14 = uVar14 - 1;
        lVar13 = 2;
        puVar7 = puVar12;
      } while (uVar14 != 0);
    }
  }
LAB_14557718c:
  uVar6 = *param_1;
  puVar7 = param_1 + 0x37a;
  uVar2 = param_1[3];
  uVar5 = 0;
  do {
    if ((((char)uVar2 == '\x01') && (uVar5 < param_1[0x12])) && (uVar10 = 0, uVar6 != 0)) {
      do {
        if ((uVar10 == 0) && (*(longlong *)(puVar7 + 0x84) == 0)) {
          lVar13 = (**(code **)(*param_4 + 8))
                             (param_4,0x400,
                              "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\modules\\compressor.h"
                              ,0x6a);
          *(longlong *)(puVar7 + 0x84) = lVar13;
          if (lVar13 == 0) {
            return 0x8080000a;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
    }
    uVar5 = uVar5 + 1;
    puVar7 = puVar7 + 0x9c;
  } while (uVar5 < 4);
  return 0;
}



// FUNCTION 145577240 FUN_145577240 body=462 status=ok
// SIG undefined FUN_145577240(void)

undefined8 FUN_145577240(uint *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  
  if ((param_1 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    iVar3 = *param_2;
    if (iVar3 == 0x1010001) {
      param_2[1] = 0xd0;
      uVar5 = *param_1;
      uVar7 = 0;
      do {
        uVar6 = 0;
        if (uVar5 != 0) {
          do {
            uVar4 = (ulonglong)uVar6;
            uVar6 = uVar6 + 1;
            lVar1 = (ulonglong)uVar7 * 0x9c + uVar4;
            lVar2 = uVar4 + (ulonglong)uVar7 * 8;
            param_2[lVar2 + 4] = (int)SQRT((float)param_1[lVar1 + 0x3da]);
            param_2[lVar2 + 0x1c] = param_1[lVar1 + 0x3e6];
            uVar5 = *param_1;
          } while (uVar6 < uVar5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 3);
    }
    else if (iVar3 == 0x1020001) {
      param_2[1] = 0x110;
      uVar5 = *param_1;
      uVar7 = 0;
      do {
        uVar6 = 0;
        if (uVar5 != 0) {
          do {
            uVar4 = (ulonglong)uVar6;
            uVar6 = uVar6 + 1;
            lVar1 = (ulonglong)uVar7 * 0x9c + uVar4;
            lVar2 = uVar4 + (ulonglong)uVar7 * 8;
            param_2[lVar2 + 4] = (int)SQRT((float)param_1[lVar1 + 0x3da]);
            param_2[lVar2 + 0x24] = param_1[lVar1 + 0x3e6];
            uVar5 = *param_1;
          } while (uVar6 < uVar5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 4);
    }
    else {
      if (iVar3 != 0x1030001) {
        return 0x80260202;
      }
      param_2[1] = 400;
      uVar5 = *param_1;
      uVar7 = 0;
      do {
        uVar6 = 0;
        if (uVar5 != 0) {
          do {
            uVar4 = (ulonglong)uVar6;
            uVar6 = uVar6 + 1;
            lVar1 = (ulonglong)uVar7 * 0x9c + uVar4;
            lVar2 = uVar4 + (ulonglong)uVar7 * 0xc;
            param_2[lVar2 + 4] = (int)SQRT((float)param_1[lVar1 + 0x3da]);
            param_2[lVar2 + 0x34] = param_1[lVar1 + 0x3e6];
            uVar5 = *param_1;
          } while (uVar6 < uVar5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 4);
    }
    return 0;
  }
  return 0x80260201;
}



// FUNCTION 145577410 FUN_145577410 body=718 status=ok
// SIG undefined FUN_145577410(void)

ulonglong FUN_145577410(uint *param_1,void *param_2,void *param_3,longlong *param_4,int param_5)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  void *pvVar5;
  ushort uVar6;
  void *pvVar7;
  void *_Src;
  void *pvVar8;
  ushort uVar9;
  
  uVar2 = 0;
  if ((((param_1 != (uint *)0x0) && (param_2 != (void *)0x0)) && (param_3 != (void *)0x0)) &&
     (param_5 - 1U < 0x100)) {
    if ((param_1[0x11] & 1) == 0) {
      return 0x80260203;
    }
    if ((param_1[0x11] & 2) != 0) {
      uVar9 = 0;
      if (*param_1 != 0) {
        do {
          uVar6 = 0;
          if (param_1[0x12] != 0) {
            do {
              fVar1 = *(float *)((longlong)param_2 + (ulonglong)uVar9 * 4);
              uVar3 = (ulonglong)uVar6;
              uVar6 = uVar6 + 1;
              param_1[uVar3 * 0x9c + (ulonglong)uVar9 + 0x3da] = (uint)(fVar1 * fVar1);
            } while ((uint)uVar6 < param_1[0x12]);
          }
          uVar9 = uVar9 + 1;
        } while ((uint)uVar9 < *param_1);
      }
      param_1[0x11] = param_1[0x11] & 0xfffffffd;
    }
    uVar4 = param_1[0x12];
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        pvVar8 = param_3;
        if (uVar4 == 1) {
          memcpy(param_3,param_2,(ulonglong)(param_5 * param_1[1] * 4));
        }
        else {
          if (uVar9 != 0) {
            pvVar8 = (void *)param_4[1];
          }
          uVar3 = (ulonglong)uVar9;
          uVar6 = 0;
          _Src = param_2;
          if (*(short *)((longlong)param_1 + uVar3 * 2 + 0x5c) != 0) {
            pvVar7 = param_2;
            pvVar5 = (void *)*param_4;
            do {
              _Src = pvVar5;
              uVar2 = FUN_1455fb240(param_1 + ((ulonglong)uVar6 + uVar3 * 4) * 0x36 + 0x19,pvVar7,
                                    _Src,param_4[2],*param_1,param_1[1],param_5);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              pvVar5 = (void *)*param_4;
              if (_Src == (void *)*param_4) {
                pvVar5 = pvVar8;
              }
              uVar6 = uVar6 + 1;
              pvVar7 = _Src;
            } while (uVar6 < *(ushort *)((longlong)param_1 + uVar3 * 2 + 0x5c));
            uVar2 = uVar2 & 0xffffffff;
          }
          if (pvVar8 != _Src) {
            memcpy(pvVar8,_Src,(ulonglong)(param_5 * param_1[1] * 4));
          }
        }
        if ((param_1[0x16] >> ((byte)uVar9 & 0x1f) & 1) == 0) {
          uVar3 = FUN_1455fbf10(param_1 + (ulonglong)uVar9 * 0x9c + 0x37a,param_4,pvVar8,param_5,
                                *param_1,param_1[1],param_1 + 4,param_1[0x13],param_1[0x14],
                                param_1[0x15]);
          uVar2 = uVar3 & 0xffffffff;
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        if (uVar9 != 0) {
          FUN_1455fbf40(param_3,pvVar8);
        }
        uVar4 = param_1[0x12];
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
    return uVar2;
  }
  return 0x80260201;
}



// FUNCTION 1455776e0 FUN_1455776e0 body=2237 status=ok
// SIG undefined FUN_1455776e0(void)

undefined8 FUN_1455776e0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  iVar5 = *param_1;
  if (iVar5 == 0x1010001) {
    if (param_1[1] != 0x74) {
      return 0x80260202;
    }
  }
  else {
    if (iVar5 != 0x1020001) {
      return 0x80260202;
    }
    if (param_1[1] != 0x90) {
      return 0x80260202;
    }
  }
  iVar1 = *param_2;
  if ((iVar1 != 0x1010001) && (iVar1 != 0x1020001)) {
    *param_2 = iVar5;
    param_2[1] = param_1[1];
    iVar1 = iVar5;
  }
  if (*param_1 == 0x1010001) {
    if (iVar1 == 0x1010001) {
      if (param_1[2] - 1U < 3) {
        param_2[2] = param_1[2];
        if ((uint)param_1[6] < 8) {
          param_2[6] = param_1[6];
          uVar3 = param_1[3];
          if ((uVar3 < 3) && ((param_3 != 1 || (uVar3 == 1)))) {
            param_2[3] = uVar3;
            if ((uint)param_1[5] < 2) {
              param_2[5] = param_1[5];
              iVar5 = FUN_1455fb7a0(param_1[4],0,0x42c80000);
              param_2[4] = iVar5;
              if ((param_1[7] == 0) && (param_1[8] == 0)) {
                param_2[7] = 0;
                uVar3 = 0;
                param_2[8] = param_1[8];
                iVar5 = 1;
                if (param_2[2] != 1) {
                  do {
                    fVar6 = (float)FUN_1455fb7a0(param_1[(ulonglong)uVar3 + 9],0x41200000,0x46bb8000
                                                );
                    param_2[(ulonglong)uVar3 + 9] = (int)fVar6;
                    if ((uVar3 != 0) &&
                       (fVar6 < (float)param_2[(ulonglong)(uVar3 - 1) + 9] ||
                        fVar6 == (float)param_2[(ulonglong)(uVar3 - 1) + 9])) {
                      return 0x80800008;
                    }
                    iVar5 = param_2[2];
                    uVar3 = uVar3 + 1;
                  } while (uVar3 < iVar5 - 1U);
                }
                uVar2 = 0;
                uVar3 = 0;
                if (iVar5 != 0) {
                  do {
                    iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xb],0xc2700000,0);
                    param_2[uVar2 * 6 + 0xb] = iVar5;
                    iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xc],0x3f800000,0x41f00000);
                    param_2[uVar2 * 6 + 0xc] = iVar5;
                    iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xd],0x3c23d70a,0x3f000000);
                    param_2[uVar2 * 6 + 0xd] = iVar5;
                    iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xe],0x3c23d70a,0x40a00000);
                    param_2[uVar2 * 6 + 0xe] = iVar5;
                    iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xf],0xc1900000,0x41900000);
                    param_2[uVar2 * 6 + 0xf] = iVar5;
                    fVar6 = (float)FUN_1455fb7a0(param_1[uVar2 * 6 + 0x10],0);
                    param_2[uVar2 * 6 + 0x10] = (int)fVar6;
                    fVar7 = ABS((float)param_2[uVar2 * 6 + 0xb] + (float)param_2[uVar2 * 6 + 0xb]);
                    if (fVar7 < fVar6) {
                      param_2[uVar2 * 6 + 0x10] = (int)fVar7;
                    }
                    uVar3 = param_2[2];
                    uVar4 = (int)uVar2 + 1;
                    uVar2 = (ulonglong)uVar4;
                  } while (uVar4 < uVar3);
                }
                if (uVar3 < 3) {
                  param_2 = param_2 + ((ulonglong)uVar3 * 3 + 6) * 2;
                  uVar2 = (ulonglong)(3 - uVar3);
                  do {
                    param_2[-1] = -0x3e600000;
                    param_2[0] = 0x40000000;
                    param_2[1] = 0;
                    param_2[2] = 0;
                    param_2[3] = 0x3f800000;
                    param_2[4] = 0;
                    param_2 = param_2 + 6;
                    uVar2 = uVar2 - 1;
                  } while (uVar2 != 0);
                }
                return 0;
              }
            }
          }
        }
      }
    }
    else if ((iVar1 == 0x1020001) && (param_1[2] - 1U < 3)) {
      param_2[2] = param_1[2];
      if ((uint)param_1[6] < 0x10) {
        param_2[6] = param_1[6];
        if ((uint)param_1[3] < 3) {
          param_2[3] = param_1[3];
          if ((uint)param_1[5] < 2) {
            param_2[5] = param_1[5];
            iVar5 = FUN_1455fb7a0(param_1[4],0,0x42c80000);
            param_2[4] = iVar5;
            if ((param_1[7] == 0) && (param_1[8] == 0)) {
              param_2[7] = 0;
              uVar3 = 0;
              param_2[8] = param_1[8];
              iVar5 = 1;
              if (param_1[2] != 1) {
                do {
                  fVar6 = (float)FUN_1455fb7a0(param_1[(ulonglong)uVar3 + 9],0x41200000,0x46bb8000);
                  param_2[(ulonglong)uVar3 + 9] = (int)fVar6;
                  if ((uVar3 != 0) &&
                     (fVar6 < (float)param_2[(ulonglong)(uVar3 - 1) + 9] ||
                      fVar6 == (float)param_2[(ulonglong)(uVar3 - 1) + 9])) {
                    return 0x80800008;
                  }
                  iVar5 = param_1[2];
                  uVar3 = uVar3 + 1;
                } while (uVar3 < iVar5 - 1U);
              }
              uVar2 = 0;
              uVar3 = 0;
              if (iVar5 != 0) {
                do {
                  iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xb],0xc2700000,0);
                  param_2[uVar2 * 6 + 0xc] = iVar5;
                  iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xc],0x3f800000,0x41f00000);
                  param_2[uVar2 * 6 + 0xd] = iVar5;
                  iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xd],0x3c23d70a,0x3f000000);
                  param_2[uVar2 * 6 + 0xe] = iVar5;
                  iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xe],0x3c23d70a,0x40a00000);
                  param_2[uVar2 * 6 + 0xf] = iVar5;
                  iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xf],0xc1900000,0x41900000);
                  param_2[uVar2 * 6 + 0x10] = iVar5;
                  fVar6 = (float)FUN_1455fb7a0(param_1[uVar2 * 6 + 0x10],0);
                  param_2[uVar2 * 6 + 0x11] = (int)fVar6;
                  fVar7 = ABS((float)param_2[uVar2 * 6 + 0xc] + (float)param_2[uVar2 * 6 + 0xc]);
                  if (fVar7 < fVar6) {
                    param_2[uVar2 * 6 + 0x11] = (int)fVar7;
                  }
                  uVar3 = param_1[2];
                  uVar4 = (int)uVar2 + 1;
                  uVar2 = (ulonglong)uVar4;
                } while (uVar4 < uVar3);
              }
              if (3 < uVar3) {
                return 0;
              }
              param_2 = param_2 + (ulonglong)uVar3 * 6 + 0xd;
              uVar2 = (ulonglong)(4 - uVar3);
              do {
                param_2[-1] = -0x3e600000;
                param_2[0] = 0x40000000;
                param_2[1] = 0;
                param_2[2] = 0;
                param_2[3] = 0x3f800000;
                param_2[4] = 0;
                param_2 = param_2 + 6;
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
              return 0;
            }
          }
        }
      }
    }
  }
  else if (((*param_1 == 0x1020001) && (iVar1 == 0x1020001)) && (param_1[2] - 1U < 4)) {
    param_2[2] = param_1[2];
    if ((uint)param_1[6] < 0x10) {
      param_2[6] = param_1[6];
      uVar3 = param_1[3];
      if ((uVar3 < 3) && ((param_3 != 1 || (uVar3 == 1)))) {
        param_2[3] = uVar3;
        if ((uint)param_1[5] < 2) {
          param_2[5] = param_1[5];
          iVar5 = FUN_1455fb7a0(param_1[4],0,0x42c80000);
          param_2[4] = iVar5;
          if ((param_1[7] == 0) && (param_1[8] == 0)) {
            param_2[7] = 0;
            uVar3 = 0;
            param_2[8] = param_1[8];
            iVar5 = 1;
            if (param_2[2] != 1) {
              do {
                fVar6 = (float)FUN_1455fb7a0(param_1[(ulonglong)uVar3 + 9],0x41200000,0x46bb8000);
                param_2[(ulonglong)uVar3 + 9] = (int)fVar6;
                if ((uVar3 != 0) &&
                   (fVar6 < (float)param_2[(ulonglong)(uVar3 - 1) + 9] ||
                    fVar6 == (float)param_2[(ulonglong)(uVar3 - 1) + 9])) {
                  return 0x80800008;
                }
                iVar5 = param_2[2];
                uVar3 = uVar3 + 1;
              } while (uVar3 < iVar5 - 1U);
            }
            uVar2 = 0;
            uVar3 = 0;
            if (iVar5 != 0) {
              do {
                iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xc],0xc2700000,0);
                param_2[uVar2 * 6 + 0xc] = iVar5;
                iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xd],0x3f800000,0x41f00000);
                param_2[uVar2 * 6 + 0xd] = iVar5;
                iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xe],0x3c23d70a,0x3f000000);
                param_2[uVar2 * 6 + 0xe] = iVar5;
                iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0xf],0x3c23d70a,0x40a00000);
                param_2[uVar2 * 6 + 0xf] = iVar5;
                iVar5 = FUN_1455fb7a0(param_1[uVar2 * 6 + 0x10],0xc1900000,0x41900000);
                param_2[uVar2 * 6 + 0x10] = iVar5;
                fVar6 = (float)FUN_1455fb7a0(param_1[uVar2 * 6 + 0x11],0);
                param_2[uVar2 * 6 + 0x11] = (int)fVar6;
                fVar7 = ABS((float)param_2[uVar2 * 6 + 0xc] + (float)param_2[uVar2 * 6 + 0xc]);
                if (fVar7 < fVar6) {
                  param_2[uVar2 * 6 + 0x11] = (int)fVar7;
                }
                uVar3 = param_2[2];
                uVar4 = (int)uVar2 + 1;
                uVar2 = (ulonglong)uVar4;
              } while (uVar4 < uVar3);
            }
            if (3 < uVar3) {
              return 0;
            }
            param_2 = param_2 + (ulonglong)uVar3 * 6 + 0xd;
            uVar2 = (ulonglong)(4 - uVar3);
            do {
              param_2[-1] = -0x3e600000;
              param_2[0] = 0x40000000;
              param_2[1] = 0;
              param_2[2] = 0;
              param_2[3] = 0x3f800000;
              param_2[4] = 0;
              param_2 = param_2 + 6;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            return 0;
          }
        }
      }
    }
  }
  return 0x80800008;
}



// FUNCTION 145577fa0 FUN_145577fa0 body=355 status=ok
// SIG undefined FUN_145577fa0(void)

int FUN_145577fa0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = param_2[2];
    param_1[1] = param_2[4];
    param_1[2] = param_2[5];
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 5) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 9) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xd) = uVar1;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x12);
    param_1[0x10] = *param_2;
    param_1[0x13] = 0;
    iVar2 = strcmp("Soft Limiter",PTR_s_Soft_Limiter_14c7467a0);
    if (iVar2 == 0) {
      iVar2 = FUN_145578120(param_1,&DAT_149dab51c,0xffff,param_3);
      if (-1 < iVar2) {
        puVar3 = param_1 + 0x50;
        lVar4 = 0xc;
        do {
          puVar3[-0xc] = 0;
          *puVar3 = 0x3f800000;
          puVar3[0x6c] = 0x3f800000;
          puVar3[0x78] = 0;
          puVar3[0x84] = 0;
          puVar3[0xc] = 0;
          puVar3[0x18] = 0;
          puVar3[0x3c] = 0;
          puVar3[0x48] = 0;
          puVar3[0x24] = 0;
          puVar3[0x30] = 0;
          puVar3 = puVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        param_1[0x11] = 3;
      }
    }
    else {
      iVar2 = -0x7f7ffffa;
    }
    return iVar2;
  }
  return -0x7fd9fdff;
}



// FUNCTION 145578120 FUN_145578120 body=1192 status=ok
// SIG undefined FUN_145578120(void)

int FUN_145578120(uint *param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  void *_Dst;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  
  if ((param_1 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    if (*param_2 == 0x1010003) {
      pfVar5 = (float *)(param_1 + 0xa4);
      uVar8 = 0;
      do {
        param_1[0x12] = param_2[2];
        param_1[0x13] = 0;
        fVar9 = powf(10.0,(float)param_2[3] * 0.05);
        pfVar5[-0x90] = fVar9;
        uVar1 = param_1[0x12];
        if (uVar1 == 0) {
          if ((float)param_2[4] == 0.0) {
            fVar9 = 1.0;
          }
          else {
            fVar9 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[4]));
            fVar9 = 1.0 - fVar9;
          }
          pfVar5[-0x84] = fVar9;
          if ((float)param_2[5] == 0.0) {
            pfVar5[-0x78] = 1.0;
          }
          else {
            fVar9 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[5]));
            pfVar5[-0x78] = 1.0 - fVar9;
          }
        }
        else if (uVar1 == 1) {
          pfVar5[-0x84] = 1.0;
          pfVar5[-0x78] = 1.0;
        }
        else {
          if (uVar1 != 2) {
            return -0x7f7ffffb;
          }
          pfVar5[-0x84] = 0.045793355;
          if ((float)param_2[5] == 0.0) {
            fVar9 = 1.0;
          }
          else {
            fVar9 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[5]));
            fVar9 = 1.0 - fVar9;
          }
          pfVar5[-0x78] = fVar9;
          *pfVar5 = fVar9;
          pfVar5[-0xc] = 0.01704061;
          fVar2 = (float)param_2[4];
          pfVar5[0xc] = fVar9;
          pfVar5[-0x18] = fVar2;
        }
        uVar8 = uVar8 + 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar8 < 0xc);
    }
    else {
      if (*param_2 != 0x1020003) {
        return -0x7fd9fdfe;
      }
      pfVar5 = (float *)(param_1 + 0x38);
      uVar8 = 0;
      param_1[0x12] = param_2[2];
      param_1[0x13] = param_2[7];
      do {
        fVar9 = powf(10.0,(float)param_2[3] * 0.05);
        pfVar5[-0x24] = fVar9;
        fVar9 = powf(10.0,(float)param_2[6] * 0.05);
        *pfVar5 = fVar9;
        uVar1 = param_1[0x12];
        if (uVar1 == 0) {
          if ((float)param_2[4] == 0.0) {
            fVar9 = 1.0;
          }
          else {
            fVar9 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[4]));
            fVar9 = 1.0 - fVar9;
          }
          pfVar5[-0x18] = fVar9;
          if ((float)param_2[5] == 0.0) {
            pfVar5[-0xc] = 1.0;
          }
          else {
            fVar9 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[5]));
            pfVar5[-0xc] = 1.0 - fVar9;
          }
        }
        else if (uVar1 == 1) {
          pfVar5[-0x18] = 1.0;
          pfVar5[-0xc] = 1.0;
        }
        else {
          if (uVar1 != 2) {
            return -0x7f7ffffb;
          }
          pfVar5[-0x18] = 0.045793355;
          if ((float)param_2[5] == 0.0) {
            fVar9 = 1.0;
          }
          else {
            fVar9 = expf(-2.2 / ((float)param_1[0x10] * (float)param_2[5]));
            fVar9 = 1.0 - fVar9;
          }
          pfVar5[-0xc] = fVar9;
          pfVar5[0x6c] = fVar9;
          pfVar5[0x60] = 0.01704061;
          fVar2 = (float)param_2[4];
          pfVar5[0x78] = fVar9;
          pfVar5[0x54] = fVar2;
        }
        uVar8 = uVar8 + 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar8 < 0xc);
    }
    uVar6 = 0;
    iVar7 = 0;
    uVar8 = *param_1;
    uVar1 = param_1[1];
    uVar3 = param_1[0xf];
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      _Dst = (void *)(**(code **)(*param_4 + 8))
                               (param_4,(ulonglong)(uVar1 << 9),
                                "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\modules\\limiter.h"
                                ,0x70);
      *(void **)(param_1 + 0xe0) = _Dst;
      if (_Dst == (void *)0x0) {
        iVar7 = -0x7f7ffff6;
      }
      else {
        memset(_Dst,0,(ulonglong)(uVar1 << 9));
      }
    }
    if ((((char)uVar3 == '\x01') && (iVar7 == 0)) && (uVar8 != 0)) {
      do {
        if ((uVar6 == 0) && (*(longlong *)(param_1 + 0xe2) == 0)) {
          lVar4 = (**(code **)(*param_4 + 8))
                            (param_4,0x400,
                             "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\modules\\limiter.h"
                             ,0x7d);
          *(longlong *)(param_1 + 0xe2) = lVar4;
          if (lVar4 == 0) {
            return -0x7f7ffff6;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
    return iVar7;
  }
  return -0x7fd9fdff;
}



// FUNCTION 1455786b0 FUN_1455786b0 body=350 status=ok
// SIG undefined FUN_1455786b0(void)

undefined8
FUN_1455786b0(uint *param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == 0)) || (0xff < param_5 - 1U)) {
    return 0x80260201;
  }
  if ((param_1[0x11] & 1) == 0) {
    return 0x80260203;
  }
  if ((param_1[0x11] & 2) != 0) {
    uVar3 = 0;
    if (*param_1 != 0) {
      do {
        if ((uint)uVar3 < 0xc) {
          param_1[uVar3 + 0x44] = *(uint *)(param_2 + uVar3 * 4) & 0x7fffffff;
        }
        uVar2 = (uint)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *param_1);
    }
    param_1[0x11] = param_1[0x11] & 0xfffffffd;
  }
  uVar2 = param_1[0x12];
  if (uVar2 == 0) {
    uVar1 = thunk_FUN_1455fc2d0(param_1 + 0x14,param_4,param_2,param_3,param_5,*param_1,param_1[1],
                                param_1[0x13]);
    return uVar1;
  }
  if (uVar2 == 1) {
    uVar1 = thunk_FUN_1455fc690(param_1 + 0x14,param_4,param_2,param_3,param_5,*param_1,param_1[1]);
    return uVar1;
  }
  if (uVar2 == 2) {
    uVar1 = FUN_1455fc8b0(param_1 + 0x14,param_4,param_2,param_3,param_5,*param_1,param_1[1],
                          param_1[0x13]);
    return uVar1;
  }
  return 0x80800005;
}



// FUNCTION 145578810 FUN_145578810 body=684 status=ok
// SIG undefined FUN_145578810(void)

undefined8 FUN_145578810(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  iVar2 = *param_1;
  if (iVar2 == 0x1010003) {
    iVar4 = param_1[1];
  }
  else {
    if (iVar2 != 0x1020003) {
      return 0x80260202;
    }
    iVar4 = param_1[1];
  }
  if (iVar4 != 0x20) {
    return 0x80260202;
  }
  iVar4 = *param_2;
  if ((iVar4 != 0x1010003) && (iVar4 != 0x1020003)) {
    *param_2 = iVar2;
    param_2[1] = param_1[1];
    iVar4 = iVar2;
  }
  if (*param_1 == 0x1010003) {
    if (iVar4 != 0x1010003) {
      if (iVar4 != 0x1020003) {
        return 0x80800008;
      }
      if (2 < (uint)param_1[2]) {
        return 0x80800008;
      }
      if (param_1[6] != 0) {
        return 0x80800008;
      }
      if (param_1[7] != 0) {
        return 0x80800008;
      }
      param_2[2] = param_1[2];
      iVar2 = FUN_1455fb7a0(param_1[3],0xc1f00000,0);
      param_2[3] = iVar2;
      if (param_1[2] == 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x40266666;
      }
      iVar2 = FUN_1455fb7a0(param_1[4],0,uVar3);
      param_2[4] = iVar2;
      iVar2 = FUN_1455fb7a0(param_1[5],0,0x40a00000);
      param_2[5] = iVar2;
      param_2[6] = 0;
      uVar1 = (uint)(param_3 == 1);
      goto LAB_145578a86;
    }
    if (((2 < (uint)param_1[2]) || (param_1[6] != 0)) || (param_1[7] != 0)) {
      return 0x80800008;
    }
    param_2[2] = param_1[2];
    iVar2 = FUN_1455fb7a0(param_1[3],0xc1f00000,0);
    param_2[3] = iVar2;
    if (param_1[2] == 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x40266666;
    }
    iVar2 = FUN_1455fb7a0(param_1[4],0,uVar3);
    param_2[4] = iVar2;
    iVar2 = FUN_1455fb7a0(param_1[5],0,0x40a00000);
    param_2[5] = iVar2;
    param_2[6] = param_1[6];
  }
  else {
    if (*param_1 != 0x1020003) {
      return 0x80800008;
    }
    if (iVar4 != 0x1020003) {
      return 0x80800008;
    }
    if (2 < (uint)param_1[2]) {
      return 0x80800008;
    }
    if (1 < (uint)param_1[7]) {
      return 0x80800008;
    }
    if ((param_3 == 1) && (param_1[7] != 1)) {
      return 0x80800008;
    }
    param_2[2] = param_1[2];
    iVar4 = 0;
    iVar2 = FUN_1455fb7a0(param_1[3],0xc1f00000,0);
    param_2[3] = iVar2;
    if (param_1[2] == 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x40266666;
    }
    iVar2 = FUN_1455fb7a0(param_1[4],0,uVar3);
    param_2[4] = iVar2;
    iVar2 = FUN_1455fb7a0(param_1[5],0,0x40a00000);
    param_2[5] = iVar2;
    if (param_1[2] == 2) {
      iVar4 = FUN_1455fb7a0(param_1[6],0,param_2[3] ^ 0x80000000);
    }
    param_2[6] = iVar4;
  }
  uVar1 = param_1[7];
LAB_145578a86:
  param_2[7] = uVar1;
  return 0;
}



// FUNCTION 145578ac0 FUN_145578ac0 body=112 status=ok
// SIG undefined FUN_145578ac0(void)

undefined8 FUN_145578ac0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar5 = 0x80260201;
  }
  else {
    *param_1 = param_2[2];
    param_1[1] = param_2[4];
    param_1[2] = param_2[5];
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 5) = uVar5;
    uVar1 = param_2[0xb];
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    param_1[7] = param_2[10];
    param_1[8] = uVar1;
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    uVar1 = param_2[0xe];
    uVar2 = param_2[0xf];
    uVar3 = param_2[0x10];
    uVar4 = param_2[0x11];
    param_1[0xb] = uVar1;
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x12);
    param_1[0x10] = *param_2;
    uVar5 = FUN_145578cb0(uVar1,"Default");
    if (-1 < (int)uVar5) {
      param_1[0x11] = 3;
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 145578b40 FUN_145578b40 body=362 status=ok
// SIG undefined FUN_145578b40(void)

undefined8 FUN_145578b40(uint *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  iVar4 = *param_2;
  if (iVar4 == 0x1010002) {
    iVar4 = param_2[2];
    local_48 = CONCAT44(iVar4,iVar4);
    uStack_40 = CONCAT44(iVar4,iVar4);
    iVar5 = iVar4;
    iVar6 = iVar4;
    iVar7 = iVar4;
  }
  else {
    if (iVar4 != 0x1020002) {
      if (iVar4 != 0x1030002) {
        return 0x80260202;
      }
      uVar2 = 0;
      local_58 = *(undefined8 *)(param_2 + 2);
      uStack_50 = *(undefined8 *)(param_2 + 4);
      local_48 = *(undefined8 *)(param_2 + 6);
      uStack_40 = *(undefined8 *)(param_2 + 8);
      local_38 = *(undefined8 *)(param_2 + 10);
      uStack_30 = *(undefined8 *)(param_2 + 0xc);
      uVar1 = 0;
      if (*param_1 != 0) {
        do {
          fVar3 = powf(10.0,*(float *)((longlong)&local_58 + (ulonglong)param_1[uVar2 + 3] * 4) *
                            0.05);
          param_1[uVar2 + 0x12] = (uint)fVar3;
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
        } while (uVar1 < *param_1);
        if (0xb < uVar1) {
          return 0;
        }
      }
      iVar4 = 0xc;
      goto LAB_145578c80;
    }
    iVar4 = param_2[2];
    local_48 = *(undefined8 *)(param_2 + 6);
    uStack_40 = *(undefined8 *)(param_2 + 8);
    iVar5 = param_2[3];
    iVar6 = param_2[4];
    iVar7 = param_2[5];
  }
  uVar2 = 0;
  local_58 = CONCAT44(iVar5,iVar4);
  uStack_50 = CONCAT44(iVar7,iVar6);
  uVar1 = 0;
  if (*param_1 != 0) {
    do {
      fVar3 = powf(10.0,*(float *)((longlong)&local_58 + (ulonglong)param_1[uVar2 + 3] * 4) * 0.05);
      param_1[uVar2 + 0x12] = (uint)fVar3;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *param_1);
    if (7 < uVar1) {
      return 0;
    }
  }
  iVar4 = 8;
LAB_145578c80:
  memset(param_1 + (ulonglong)uVar1 + 0x12,0,(ulonglong)(iVar4 - uVar1) << 2);
  return 0;
}



// FUNCTION 145578cb0 FUN_145578cb0 body=571 status=ok
// SIG undefined FUN_145578cb0(void)

/* WARNING: Removing unreachable block (ram,0x000145578ea9) */
/* WARNING: Removing unreachable block (ram,0x000145578d82) */
/* WARNING: Removing unreachable block (ram,0x000145578da3) */
/* WARNING: Removing unreachable block (ram,0x000145578dc0) */
/* WARNING: Removing unreachable block (ram,0x000145578de4) */
/* WARNING: Removing unreachable block (ram,0x000145578ded) */
/* WARNING: Removing unreachable block (ram,0x000145578d6a) */
/* WARNING: Removing unreachable block (ram,0x000145578d76) */
/* WARNING: Removing unreachable block (ram,0x000145578e10) */
/* WARNING: Removing unreachable block (ram,0x000145578e1a) */

undefined4 FUN_145578cb0(uint *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar6;
  float fVar7;
  float local_58 [20];
  ulonglong uVar5;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (char *)0x0)) {
    return 0x80260201;
  }
  lVar6 = (longlong)PTR_s_Default_14c7467a8 - (longlong)param_2;
  do {
    cVar1 = *param_2;
    cVar2 = param_2[lVar6];
    if (cVar1 != cVar2) break;
    param_2 = param_2 + 1;
  } while (cVar2 != '\0');
  if (cVar1 != cVar2) {
    return 0x80800006;
  }
  local_58[4] = 0.0;
  local_58[5] = 0.0;
  local_58[6] = 0.0;
  local_58[7] = 0.0;
  local_58[6] = 0.0;
  local_58[7] = 0.0;
  local_58[4] = 0.0;
  local_58[5] = 0.0;
  uVar4 = 0;
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  uVar5 = uVar4;
  if (*param_1 != 0) {
    do {
      fVar7 = powf(10.0,local_58[param_1[uVar4 + 3]] * 0.05);
      uVar3 = (int)uVar4 + 1;
      uVar5 = (ulonglong)uVar3;
      param_1[uVar4 + 0x12] = (uint)fVar7;
      uVar4 = uVar5;
    } while (uVar3 < *param_1);
    if (7 < uVar3) {
      return 0;
    }
  }
  memset(param_1 + uVar5 + 0x12,0,(ulonglong)(8 - (int)uVar5) << 2);
  return 0;
}



// FUNCTION 145578ef0 FUN_145578ef0 body=95 status=ok
// SIG undefined FUN_145578ef0(void)

undefined8
FUN_145578ef0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_5 - 1U < 0x100)) {
    uVar1 = *(uint *)(param_1 + 0x44);
    if ((uVar1 & 1) == 0) {
      return 0x80260203;
    }
    if ((uVar1 & 2) != 0) {
      *(uint *)(param_1 + 0x44) = uVar1 & 0xfffffffd;
    }
    uVar2 = FUN_1455fd240();
    return uVar2;
  }
  return 0x80260201;
}



// FUNCTION 145578f50 FUN_145578f50 body=668 status=ok
// SIG undefined FUN_145578f50(void)

undefined8 FUN_145578f50(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  iVar4 = *param_1;
  if (iVar4 == 0x1010002) {
    if (param_1[1] != 0x10) {
      return 0x80260202;
    }
  }
  else if ((iVar4 != 0x1020002) || (param_1[1] != 0x30)) {
    if (iVar4 != 0x1030002) {
      return 0x80260202;
    }
    if (param_1[1] != 0x40) {
      return 0x80260202;
    }
  }
  iVar1 = *param_2;
  if (((iVar1 != 0x1010002) && (iVar1 != 0x1020002)) && (iVar1 != 0x1030002)) {
    *param_2 = iVar4;
    param_2[1] = param_1[1];
    iVar1 = iVar4;
  }
  iVar4 = *param_1;
  if (iVar4 == 0x1010002) {
    if (iVar1 != 0x1010002) {
      return 0x80800008;
    }
    if (param_1[3] != 0) {
      return 0x80800008;
    }
    iVar4 = FUN_1455fb7a0(param_1[2],0xc2c80000,0x41400000);
    param_2[2] = iVar4;
    param_2[3] = param_1[3];
  }
  else if (iVar4 == 0x1020002) {
    if (((iVar1 != 0x1020002) || (param_1[10] != 0)) ||
       ((param_1[0xb] != 0 || ((param_3 == 1 && ((float)param_1[3] != (float)param_1[2])))))) {
      return 0x80800008;
    }
    iVar4 = FUN_1455fb7a0(param_1[2],0xc2c80000,0x41400000);
    param_2[2] = iVar4;
    iVar4 = FUN_1455fb7a0(param_1[3],0xc2c80000,0x41400000);
    param_2[3] = iVar4;
    iVar4 = FUN_1455fb7a0(param_1[4],0xc2c80000,0x41400000);
    param_2[4] = iVar4;
    iVar4 = FUN_1455fb7a0(param_1[5],0xc2c80000,0x41400000);
    param_2[5] = iVar4;
    iVar4 = FUN_1455fb7a0(param_1[6],0xc2c80000,0x41400000);
    param_2[6] = iVar4;
    iVar4 = FUN_1455fb7a0(param_1[7],0xc2c80000,0x41400000);
    param_2[7] = iVar4;
    iVar4 = FUN_1455fb7a0(param_1[8],0xc2c80000,0x41400000);
    param_2[8] = iVar4;
    iVar4 = FUN_1455fb7a0(param_1[9],0xc2c80000,0x41400000);
    param_2[9] = iVar4;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  else {
    if (iVar4 != 0x1030002) {
      return 0x80800008;
    }
    if (iVar1 != 0x1030002) {
      return 0x80800008;
    }
    if (param_1[0xe] != 0) {
      return 0x80800008;
    }
    if (param_1[0xf] != 0) {
      return 0x80800008;
    }
    if ((param_3 == 1) && ((float)param_1[3] != (float)param_1[2])) {
      return 0x80800008;
    }
    lVar2 = 0xc;
    piVar3 = param_2 + 2;
    do {
      iVar4 = FUN_1455fb7a0(*(undefined4 *)
                             (((longlong)param_1 - (longlong)param_2) + (longlong)piVar3),0xc2c80000
                            ,0x41400000);
      *piVar3 = iVar4;
      piVar3 = piVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  return 0;
}



// FUNCTION 1455791f0 FUN_1455791f0 body=561 status=ok
// SIG undefined FUN_1455791f0(void)

void FUN_1455791f0(longlong param_1,longlong param_2,uint param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  int *piVar32;
  uint uVar33;
  int *piVar34;
  undefined1 (*pauVar35) [16];
  uint uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  short sVar64;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  undefined1 auVar65 [16];
  short sVar72;
  short sVar44;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  
  uVar36 = 0;
  uVar37 = 0;
  auVar65._0_4_ = (int)param_4 >> 0x10;
  auVar65._4_4_ = auVar65._0_4_;
  auVar65._8_4_ = auVar65._0_4_;
  auVar65._12_4_ = auVar65._0_4_;
  auVar63._0_4_ = (int)(param_4 ^ 0x80000000) >> 0x10;
  auVar63._4_4_ = (int)(param_4 ^ 0x80000000) >> 0x10;
  auVar63._8_4_ = (int)(param_4 ^ 0x80000000) >> 0x10;
  auVar63._12_4_ = (int)(param_4 ^ 0x80000000) >> 0x10;
  auVar65 = packssdw(auVar65,auVar65);
  auVar63 = packssdw(auVar63,auVar63);
  if (param_3 != 0) {
    piVar34 = (int *)(param_2 + 0x20);
    pauVar35 = (undefined1 (*) [16])(param_1 + 0x20);
    do {
      piVar1 = piVar34 + -4;
      piVar8 = piVar34 + -3;
      piVar9 = piVar34 + -2;
      piVar10 = piVar34 + -1;
      uVar37 = uVar37 + 0x10;
      piVar2 = piVar34 + 4;
      piVar11 = piVar34 + 5;
      piVar12 = piVar34 + 6;
      piVar13 = piVar34 + 7;
      piVar3 = piVar34 + 0xc;
      piVar14 = piVar34 + 0xd;
      piVar15 = piVar34 + 0xe;
      piVar16 = piVar34 + 0xf;
      piVar4 = piVar34 + 0x14;
      piVar17 = piVar34 + 0x15;
      piVar18 = piVar34 + 0x16;
      piVar19 = piVar34 + 0x17;
      piVar5 = piVar34 + -8;
      piVar20 = piVar34 + -7;
      piVar21 = piVar34 + -6;
      piVar22 = piVar34 + -5;
      iVar23 = *piVar34;
      piVar24 = piVar34 + 1;
      piVar25 = piVar34 + 2;
      piVar26 = piVar34 + 3;
      piVar6 = piVar34 + 8;
      piVar27 = piVar34 + 9;
      piVar28 = piVar34 + 10;
      piVar29 = piVar34 + 0xb;
      piVar7 = piVar34 + 0x10;
      piVar30 = piVar34 + 0x11;
      piVar31 = piVar34 + 0x12;
      piVar32 = piVar34 + 0x13;
      piVar34 = piVar34 + 0x20;
      auVar60._0_4_ = *piVar20 >> 0x10;
      auVar60._4_4_ = *piVar22 >> 0x10;
      auVar60._8_4_ = *piVar8 >> 0x10;
      auVar60._12_4_ = *piVar10 >> 0x10;
      auVar59._0_4_ = *piVar24 >> 0x10;
      auVar59._4_4_ = *piVar26 >> 0x10;
      auVar59._8_4_ = *piVar11 >> 0x10;
      auVar59._12_4_ = *piVar13 >> 0x10;
      auVar60 = packssdw(auVar60,auVar59);
      auVar58._0_4_ = *piVar27 >> 0x10;
      auVar58._4_4_ = *piVar29 >> 0x10;
      auVar58._8_4_ = *piVar14 >> 0x10;
      auVar58._12_4_ = *piVar16 >> 0x10;
      sVar64 = auVar65._0_2_;
      auVar38._0_2_ = -(ushort)(sVar64 < auVar60._0_2_);
      sVar66 = auVar65._2_2_;
      auVar38._2_2_ = -(ushort)(sVar66 < auVar60._2_2_);
      sVar67 = auVar65._4_2_;
      auVar38._4_2_ = -(ushort)(sVar67 < auVar60._4_2_);
      sVar68 = auVar65._6_2_;
      auVar38._6_2_ = -(ushort)(sVar68 < auVar60._6_2_);
      sVar69 = auVar65._8_2_;
      auVar38._8_2_ = -(ushort)(sVar69 < auVar60._8_2_);
      sVar70 = auVar65._10_2_;
      auVar38._10_2_ = -(ushort)(sVar70 < auVar60._10_2_);
      sVar71 = auVar65._12_2_;
      auVar38._12_2_ = -(ushort)(sVar71 < auVar60._12_2_);
      sVar72 = auVar65._14_2_;
      auVar38._14_2_ = -(ushort)(sVar72 < auVar60._14_2_);
      auVar62._0_4_ = *piVar30 >> 0x10;
      auVar62._4_4_ = *piVar32 >> 0x10;
      auVar62._8_4_ = *piVar17 >> 0x10;
      auVar62._12_4_ = *piVar19 >> 0x10;
      auVar59 = packssdw(auVar58,auVar62);
      sVar44 = auVar63._0_2_;
      auVar45._0_2_ = -(ushort)(auVar59._0_2_ < sVar44);
      sVar46 = auVar63._2_2_;
      auVar45._2_2_ = -(ushort)(auVar59._2_2_ < sVar46);
      sVar47 = auVar63._4_2_;
      auVar45._4_2_ = -(ushort)(auVar59._4_2_ < sVar47);
      sVar48 = auVar63._6_2_;
      auVar45._6_2_ = -(ushort)(auVar59._6_2_ < sVar48);
      sVar49 = auVar63._8_2_;
      auVar45._8_2_ = -(ushort)(auVar59._8_2_ < sVar49);
      sVar50 = auVar63._10_2_;
      auVar45._10_2_ = -(ushort)(auVar59._10_2_ < sVar50);
      sVar51 = auVar63._12_2_;
      sVar52 = auVar63._14_2_;
      auVar45._12_2_ = -(ushort)(auVar59._12_2_ < sVar51);
      auVar45._14_2_ = -(ushort)(auVar59._14_2_ < sVar52);
      auVar61._0_4_ = *piVar5 >> 0x10;
      auVar61._4_4_ = *piVar21 >> 0x10;
      auVar61._8_4_ = *piVar1 >> 0x10;
      auVar61._12_4_ = *piVar9 >> 0x10;
      auVar53._0_2_ = -(ushort)(sVar64 < auVar59._0_2_);
      auVar53._2_2_ = -(ushort)(sVar66 < auVar59._2_2_);
      auVar53._4_2_ = -(ushort)(sVar67 < auVar59._4_2_);
      auVar53._6_2_ = -(ushort)(sVar68 < auVar59._6_2_);
      auVar53._8_2_ = -(ushort)(sVar69 < auVar59._8_2_);
      auVar53._10_2_ = -(ushort)(sVar70 < auVar59._10_2_);
      auVar53._12_2_ = -(ushort)(sVar71 < auVar59._12_2_);
      auVar53._14_2_ = -(ushort)(sVar72 < auVar59._14_2_);
      auVar54._4_4_ = *piVar25 >> 0x10;
      auVar54._0_4_ = iVar23 >> 0x10;
      auVar54._8_4_ = *piVar2 >> 0x10;
      auVar54._12_4_ = *piVar12 >> 0x10;
      auVar62 = packssdw(auVar61,auVar54);
      auVar56._0_4_ = *piVar6 >> 0x10;
      auVar56._4_4_ = *piVar28 >> 0x10;
      auVar56._8_4_ = *piVar3 >> 0x10;
      auVar56._12_4_ = *piVar15 >> 0x10;
      auVar39._0_2_ = -(ushort)(sVar64 < auVar62._0_2_);
      auVar39._2_2_ = -(ushort)(sVar66 < auVar62._2_2_);
      auVar39._4_2_ = -(ushort)(sVar67 < auVar62._4_2_);
      auVar39._6_2_ = -(ushort)(sVar68 < auVar62._6_2_);
      auVar39._8_2_ = -(ushort)(sVar69 < auVar62._8_2_);
      auVar39._10_2_ = -(ushort)(sVar70 < auVar62._10_2_);
      auVar39._12_2_ = -(ushort)(sVar71 < auVar62._12_2_);
      auVar39._14_2_ = -(ushort)(sVar72 < auVar62._14_2_);
      auVar57._4_4_ = *piVar31 >> 0x10;
      auVar57._0_4_ = *piVar7 >> 0x10;
      auVar57._8_4_ = *piVar4 >> 0x10;
      auVar57._12_4_ = *piVar18 >> 0x10;
      auVar57 = packssdw(auVar56,auVar57);
      auVar42._0_2_ = -(ushort)(sVar64 < auVar57._0_2_);
      auVar42._2_2_ = -(ushort)(sVar66 < auVar57._2_2_);
      auVar42._4_2_ = -(ushort)(sVar67 < auVar57._4_2_);
      auVar42._6_2_ = -(ushort)(sVar68 < auVar57._6_2_);
      auVar42._8_2_ = -(ushort)(sVar69 < auVar57._8_2_);
      auVar42._10_2_ = -(ushort)(sVar70 < auVar57._10_2_);
      auVar42._12_2_ = -(ushort)(sVar71 < auVar57._12_2_);
      auVar42._14_2_ = -(ushort)(sVar72 < auVar57._14_2_);
      auVar40._0_2_ = -(ushort)(auVar60._0_2_ < sVar44);
      auVar40._2_2_ = -(ushort)(auVar60._2_2_ < sVar46);
      auVar40._4_2_ = -(ushort)(auVar60._4_2_ < sVar47);
      auVar40._6_2_ = -(ushort)(auVar60._6_2_ < sVar48);
      auVar40._8_2_ = -(ushort)(auVar60._8_2_ < sVar49);
      auVar40._10_2_ = -(ushort)(auVar60._10_2_ < sVar50);
      auVar40._12_2_ = -(ushort)(auVar60._12_2_ < sVar51);
      auVar40._14_2_ = -(ushort)(auVar60._14_2_ < sVar52);
      auVar43._0_2_ = -(ushort)(auVar57._0_2_ < sVar44);
      auVar43._2_2_ = -(ushort)(auVar57._2_2_ < sVar46);
      auVar43._4_2_ = -(ushort)(auVar57._4_2_ < sVar47);
      auVar43._6_2_ = -(ushort)(auVar57._6_2_ < sVar48);
      auVar43._8_2_ = -(ushort)(auVar57._8_2_ < sVar49);
      auVar43._10_2_ = -(ushort)(auVar57._10_2_ < sVar50);
      auVar43._12_2_ = -(ushort)(auVar57._12_2_ < sVar51);
      auVar43._14_2_ = -(ushort)(auVar57._14_2_ < sVar52);
      auVar41._0_2_ = -(ushort)(auVar62._0_2_ < sVar44);
      auVar41._2_2_ = -(ushort)(auVar62._2_2_ < sVar46);
      auVar41._4_2_ = -(ushort)(auVar62._4_2_ < sVar47);
      auVar41._6_2_ = -(ushort)(auVar62._6_2_ < sVar48);
      auVar41._8_2_ = -(ushort)(auVar62._8_2_ < sVar49);
      auVar41._10_2_ = -(ushort)(auVar62._10_2_ < sVar50);
      auVar41._12_2_ = -(ushort)(auVar62._12_2_ < sVar51);
      auVar41._14_2_ = -(ushort)(auVar62._14_2_ < sVar52);
      auVar54 = auVar53 | auVar38 | auVar42 | auVar39 | auVar45 | auVar40 | auVar43 | auVar41;
      auVar55._0_4_ = -(uint)(auVar54._0_4_ == 0);
      auVar55._4_4_ = -(uint)(auVar54._4_4_ == 0);
      auVar55._8_4_ = -(uint)(auVar54._8_4_ == 0);
      auVar55._12_4_ = -(uint)(auVar54._12_4_ == 0);
      pauVar35[-2] = auVar62;
      pauVar35[-1] = auVar57;
      uVar33 = uVar37;
      if ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                   (ushort)((byte)(auVar55._12_4_ >> 7) & 1) << 0xc |
                   (ushort)((byte)(auVar55._12_4_ >> 0xf) & 1) << 0xd |
                   (ushort)((byte)(auVar55._12_4_ >> 0x17) & 1) << 0xe |
                  (ushort)(byte)(auVar55._12_4_ >> 0x1f) << 0xf) == 0xffff) {
        uVar33 = uVar36;
      }
      uVar36 = uVar33;
      *pauVar35 = auVar60;
      pauVar35[1] = auVar59;
      pauVar35 = pauVar35 + 4;
    } while (uVar37 < param_3);
    *param_5 = uVar36;
    return;
  }
  *param_5 = 0;
  return;
}



// FUNCTION 145579430 FUN_145579430 body=432 status=ok
// SIG undefined FUN_145579430(void)

void FUN_145579430(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  ushort *puVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ushort uVar13;
  ushort uVar14;
  float fVar15;
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
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar41;
  undefined1 auVar39 [12];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar61;
  undefined1 auVar59 [12];
  undefined1 auVar31 [16];
  undefined1 auVar40 [16];
  undefined1 auVar51 [16];
  undefined1 auVar60 [16];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    uVar29 = (ulonglong)((param_4 - 1U >> 4) + 1);
    do {
      uVar28 = 0;
      lVar1 = param_3 + param_2;
      do {
        uVar5 = uVar28 * 4;
        puVar2 = (ushort *)(param_2 + (ulonglong)uVar5 * 4);
        uVar13 = *puVar2;
        uVar27 = (ulonglong)uVar5;
        puVar6 = (ushort *)(param_2 + 0x20 + (ulonglong)uVar5 * 4);
        uVar14 = *puVar6;
        uVar5 = uVar28 * 8;
        uVar28 = uVar28 + 1;
        auVar31._0_12_ = ZEXT812(0);
        auVar31._12_2_ = 0;
        auVar31._14_2_ = puVar6[3];
        auVar30._12_4_ = auVar31._12_4_;
        auVar30._0_10_ = auVar31._0_10_;
        auVar30._10_2_ = puVar6[2];
        lVar9 = (ulonglong)auVar30._10_6_ << 0x10;
        auVar11._2_8_ = lVar9;
        auVar11._0_2_ = puVar6[1];
        auVar11._10_6_ = 0;
        auVar39._0_8_ = CONCAT26(puVar6[5],(uint6)puVar6[4] << 0x10);
        auVar39._8_2_ = 0;
        auVar39._10_2_ = puVar6[6];
        auVar40._12_2_ = 0;
        auVar40._0_12_ = auVar39;
        auVar40._14_2_ = puVar6[7];
        auVar51._0_12_ = ZEXT812(0);
        auVar51._12_2_ = 0;
        auVar51._14_2_ = puVar2[3];
        auVar50._12_4_ = auVar51._12_4_;
        auVar50._0_10_ = auVar51._0_10_;
        auVar50._10_2_ = puVar2[2];
        lVar10 = (ulonglong)auVar50._10_6_ << 0x10;
        auVar12._2_8_ = lVar10;
        auVar12._0_2_ = puVar2[1];
        auVar12._10_6_ = 0;
        auVar59._0_8_ = CONCAT26(puVar2[5],(uint6)puVar2[4] << 0x10);
        auVar59._8_2_ = 0;
        auVar59._10_2_ = puVar2[6];
        auVar60._12_2_ = 0;
        auVar60._0_12_ = auVar59;
        auVar60._14_2_ = puVar2[7];
        puVar3 = (uint *)(lVar1 + (ulonglong)uVar5 * 4);
        puVar7 = (uint *)(lVar1 + 0x10 + (ulonglong)uVar5 * 4);
        fVar34 = (float)(*puVar3 & 0xffff0000);
        fVar35 = (float)(puVar3[1] & 0xffff0000);
        fVar36 = (float)(puVar3[2] & 0xffff0000);
        fVar37 = (float)(puVar3[3] & 0xffff0000);
        fVar54 = (float)(*puVar3 << 0x10);
        fVar55 = (float)(puVar3[1] << 0x10);
        fVar56 = (float)(puVar3[2] << 0x10);
        fVar57 = (float)(puVar3[3] << 0x10);
        fVar46 = (float)(*puVar7 << 0x10);
        fVar47 = (float)(puVar7[1] << 0x10);
        fVar48 = (float)(puVar7[2] << 0x10);
        fVar49 = (float)(puVar7[3] << 0x10);
        fVar32 = SUB164(auVar11 << 0x30,4);
        fVar33 = (float)lVar9;
        fVar38 = (float)((uint6)puVar6[4] << 0x10);
        fVar41 = (float)(auVar39._0_8_ >> 0x20);
        fVar42 = (float)(*puVar7 & 0xffff0000);
        fVar43 = (float)(puVar7[1] & 0xffff0000);
        fVar44 = (float)(puVar7[2] & 0xffff0000);
        fVar45 = (float)(puVar7[3] & 0xffff0000);
        fVar52 = SUB164(auVar12 << 0x30,4);
        fVar53 = (float)lVar10;
        fVar58 = (float)((uint6)puVar2[4] << 0x10);
        fVar61 = (float)(auVar59._0_8_ >> 0x20);
        pfVar4 = (float *)(param_1 + uVar27 * 8);
        fVar15 = pfVar4[1];
        fVar16 = pfVar4[2];
        fVar17 = pfVar4[3];
        pfVar8 = (float *)(param_1 + 0x10 + uVar27 * 8);
        fVar18 = *pfVar8;
        fVar19 = pfVar8[1];
        fVar20 = pfVar8[2];
        fVar21 = pfVar8[3];
        pfVar8 = (float *)(param_1 + uVar27 * 8);
        *pfVar8 = fVar54 * (float)((uint)uVar13 << 0x10) -
                  (fVar34 * (float)((uint)uVar14 << 0x10) - *pfVar4);
        pfVar8[1] = fVar55 * fVar52 - (fVar35 * fVar32 - fVar15);
        pfVar8[2] = fVar56 * fVar53 - (fVar36 * fVar33 - fVar16);
        pfVar8[3] = fVar57 * auVar50._12_4_ - (fVar37 * auVar30._12_4_ - fVar17);
        pfVar4 = (float *)(param_1 + 0x40 + uVar27 * 8);
        fVar15 = *pfVar4;
        fVar16 = pfVar4[1];
        fVar17 = pfVar4[2];
        fVar22 = pfVar4[3];
        pfVar4 = (float *)(param_1 + 0x50 + uVar27 * 8);
        fVar23 = *pfVar4;
        fVar24 = pfVar4[1];
        fVar25 = pfVar4[2];
        fVar26 = pfVar4[3];
        pfVar4 = (float *)(param_1 + 0x10 + uVar27 * 8);
        *pfVar4 = fVar46 * fVar58 - (fVar42 * fVar38 - fVar18);
        pfVar4[1] = fVar47 * fVar61 - (fVar43 * fVar41 - fVar19);
        pfVar4[2] = fVar48 * auVar59._8_4_ - (fVar44 * auVar39._8_4_ - fVar20);
        pfVar4[3] = fVar49 * auVar60._12_4_ - (fVar45 * auVar40._12_4_ - fVar21);
        pfVar4 = (float *)(param_1 + 0x40 + uVar27 * 8);
        *pfVar4 = fVar54 * (float)((uint)uVar14 << 0x10) + fVar15 +
                  fVar34 * (float)((uint)uVar13 << 0x10);
        pfVar4[1] = fVar55 * fVar32 + fVar16 + fVar35 * fVar52;
        pfVar4[2] = fVar56 * fVar33 + fVar17 + fVar36 * fVar53;
        pfVar4[3] = fVar57 * auVar30._12_4_ + fVar22 + fVar37 * auVar50._12_4_;
        pfVar4 = (float *)(param_1 + 0x50 + uVar27 * 8);
        *pfVar4 = fVar46 * fVar38 + fVar23 + fVar42 * fVar58;
        pfVar4[1] = fVar47 * fVar41 + fVar24 + fVar43 * fVar61;
        pfVar4[2] = fVar48 * auVar39._8_4_ + fVar25 + fVar44 * auVar59._8_4_;
        pfVar4[3] = fVar49 * auVar40._12_4_ + fVar26 + fVar45 * auVar60._12_4_;
      } while (uVar28 < 2);
      param_2 = param_2 + 0x40;
      param_1 = param_1 + 0x80;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  return;
}



// FUNCTION 1455796a0 FUN_1455796a0 body=340 status=ok
// SIG undefined FUN_1455796a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1455796a0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,uint *param_5)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [32];
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  
  auVar6 = _DAT_149931820;
  uVar10 = 0;
  uVar11 = 0;
  auVar13 = vshufps_avx(in_ZMM3._0_16_,in_ZMM3._0_16_,0);
  auVar15._16_16_ = auVar13;
  auVar15._0_16_ = auVar13;
  if (param_3 != 0) {
    pauVar8 = (undefined1 (*) [16])(param_1 + 0x20);
    pauVar9 = (undefined1 (*) [32])(param_2 + 0x40);
    do {
      auVar1 = pauVar9[-2];
      auVar2 = pauVar9[-1];
      auVar3 = *pauVar9;
      auVar4 = pauVar9[1];
      auVar5 = vshufps_avx(auVar1,auVar2,0x88);
      auVar13 = vcvtps2ph_f16c(auVar5,0);
      auVar5 = vshufps_avx(auVar1,auVar2,0xdd);
      auVar14 = vcvtps2ph_f16c(auVar5,0);
      auVar13 = vshufps_avx(auVar13,auVar13,0xd8);
      pauVar8[-2] = auVar13;
      uVar11 = uVar11 + 0x10;
      pauVar9 = pauVar9 + 4;
      auVar5 = vshufps_avx(auVar3,auVar4,0x88);
      auVar12 = vcvtps2ph_f16c(auVar5,0);
      auVar5 = vshufps_avx(auVar3,auVar4,0xdd);
      auVar13 = vcvtps2ph_f16c(auVar5,0);
      auVar13 = vshufps_avx(auVar13,auVar13,0xd8);
      pauVar8[1] = auVar13;
      auVar13 = vshufps_avx(auVar14,auVar14,0xd8);
      auVar12 = vshufps_avx(auVar12,auVar12,0xd8);
      *pauVar8 = auVar13;
      auVar1 = vandnps_avx(auVar6,auVar1);
      auVar5 = vcmpps_avx(auVar1,auVar15,0xe);
      pauVar8[-1] = auVar12;
      auVar1 = vandnps_avx(auVar6,auVar2);
      auVar2 = vcmpps_avx(auVar1,auVar15,0xe);
      auVar1 = vandnps_avx(auVar6,auVar4);
      auVar4 = vorps_avx(auVar5,auVar2);
      auVar2 = vandnps_avx(auVar6,auVar3);
      auVar1 = vcmpps_avx(auVar1,auVar15,0xe);
      auVar2 = vcmpps_avx(auVar2,auVar15,0xe);
      auVar1 = vorps_avx(auVar1,auVar2);
      auVar1 = vorps_avx(auVar4,auVar1);
      pauVar8 = pauVar8 + 4;
      uVar7 = uVar11;
      if (auVar1 == (undefined1  [32])0x0) {
        uVar7 = uVar10;
      }
      uVar10 = uVar7;
    } while (uVar11 < param_3);
  }
  *param_5 = uVar10;
  return;
}



// FUNCTION 145579800 FUN_145579800 body=422 status=ok
// SIG undefined FUN_145579800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145579800(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  float *pfVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [32];
  
  auVar12 = _DAT_149dab560;
  if (param_4 != 0) {
    pauVar15 = (undefined1 (*) [16])(param_3 + 0x20);
    param_2 = param_2 - param_3;
    uVar14 = (ulonglong)((param_4 - 1U >> 4) + 1);
    pfVar13 = (float *)(param_1 + 0x40);
    do {
      pauVar1 = pauVar15 + -2;
      pauVar2 = pauVar15 + -1;
      auVar4 = *pauVar15;
      pauVar3 = pauVar15 + 1;
      auVar8 = vcvtph2ps_f16c(*(undefined1 (*) [16])((longlong)pauVar15 + param_2));
      auVar9 = vcvtph2ps_f16c(*(undefined1 (*) [16])((longlong)pauVar15 + param_2 + -0x20));
      auVar10 = vcvtph2ps_f16c(*(undefined1 (*) [16])((longlong)pauVar15 + param_2 + 0x10));
      auVar11 = vcvtph2ps_f16c(*(undefined1 (*) [16])((longlong)pauVar15 + param_2 + -0x10));
      pauVar15 = pauVar15 + 4;
      auVar16 = vpslld_avx(*pauVar1,0x10);
      auVar19 = vpslld_avx(*pauVar2,0x10);
      auVar23 = vpslld_avx(auVar4,0x10);
      auVar5 = vpand_avx(auVar12,*pauVar1);
      auVar6 = vpand_avx(auVar12,*pauVar2);
      auVar22 = vpslld_avx(*pauVar3,0x10);
      auVar17._0_4_ = auVar5._0_4_ * auVar8._0_4_;
      auVar17._4_4_ = auVar5._4_4_ * auVar8._4_4_;
      auVar17._8_4_ = auVar5._8_4_ * auVar8._8_4_;
      auVar17._12_4_ = auVar5._12_4_ * auVar8._12_4_;
      auVar17._16_4_ = auVar6._0_4_ * auVar8._16_4_;
      auVar17._20_4_ = auVar6._4_4_ * auVar8._20_4_;
      auVar17._24_4_ = auVar6._8_4_ * auVar8._24_4_;
      auVar17._28_4_ = auVar6._12_4_ * auVar8._28_4_;
      auVar4 = vpand_avx(auVar4,auVar12);
      auVar7 = vpand_avx(auVar12,*pauVar3);
      auVar17 = vsubps_avx(auVar17,*(undefined1 (*) [32])(pfVar13 + -0x10));
      auVar18._0_4_ = auVar4._0_4_ * auVar10._0_4_;
      auVar18._4_4_ = auVar4._4_4_ * auVar10._4_4_;
      auVar18._8_4_ = auVar4._8_4_ * auVar10._8_4_;
      auVar18._12_4_ = auVar4._12_4_ * auVar10._12_4_;
      auVar18._16_4_ = auVar7._0_4_ * auVar10._16_4_;
      auVar18._20_4_ = auVar7._4_4_ * auVar10._20_4_;
      auVar18._24_4_ = auVar7._8_4_ * auVar10._24_4_;
      auVar18._28_4_ = auVar7._12_4_ * auVar10._28_4_;
      auVar20._0_4_ = auVar16._0_4_ * auVar9._0_4_;
      auVar20._4_4_ = auVar16._4_4_ * auVar9._4_4_;
      auVar20._8_4_ = auVar16._8_4_ * auVar9._8_4_;
      auVar20._12_4_ = auVar16._12_4_ * auVar9._12_4_;
      auVar20._16_4_ = auVar19._0_4_ * auVar9._16_4_;
      auVar20._20_4_ = auVar19._4_4_ * auVar9._20_4_;
      auVar20._24_4_ = auVar19._8_4_ * auVar9._24_4_;
      auVar20._28_4_ = auVar19._12_4_ * auVar9._28_4_;
      auVar17 = vsubps_avx(auVar20,auVar17);
      auVar18 = vsubps_avx(auVar18,*(undefined1 (*) [32])(pfVar13 + -8));
      auVar21._0_4_ = auVar23._0_4_ * auVar11._0_4_;
      auVar21._4_4_ = auVar23._4_4_ * auVar11._4_4_;
      auVar21._8_4_ = auVar23._8_4_ * auVar11._8_4_;
      auVar21._12_4_ = auVar23._12_4_ * auVar11._12_4_;
      auVar21._16_4_ = auVar22._0_4_ * auVar11._16_4_;
      auVar21._20_4_ = auVar22._4_4_ * auVar11._20_4_;
      auVar21._24_4_ = auVar22._8_4_ * auVar11._24_4_;
      auVar21._28_4_ = auVar22._12_4_ * auVar11._28_4_;
      auVar18 = vsubps_avx(auVar21,auVar18);
      auVar24._0_4_ = auVar23._0_4_ * auVar10._0_4_ + pfVar13[8] + auVar4._0_4_ * auVar11._0_4_;
      auVar24._4_4_ = auVar23._4_4_ * auVar10._4_4_ + pfVar13[9] + auVar4._4_4_ * auVar11._4_4_;
      auVar24._8_4_ = auVar23._8_4_ * auVar10._8_4_ + pfVar13[10] + auVar4._8_4_ * auVar11._8_4_;
      auVar24._12_4_ =
           auVar23._12_4_ * auVar10._12_4_ + pfVar13[0xb] + auVar4._12_4_ * auVar11._12_4_;
      auVar24._16_4_ = auVar22._0_4_ * auVar10._16_4_ + pfVar13[0xc] + auVar7._0_4_ * auVar11._16_4_
      ;
      auVar24._20_4_ = auVar22._4_4_ * auVar10._20_4_ + pfVar13[0xd] + auVar7._4_4_ * auVar11._20_4_
      ;
      auVar24._24_4_ = auVar22._8_4_ * auVar10._24_4_ + pfVar13[0xe] + auVar7._8_4_ * auVar11._24_4_
      ;
      auVar24._28_4_ =
           auVar22._12_4_ * auVar10._28_4_ + pfVar13[0xf] + auVar7._12_4_ * auVar11._28_4_;
      *(undefined1 (*) [32])(pfVar13 + 8) = auVar24;
      *(undefined1 (*) [32])(pfVar13 + -0x10) = auVar17;
      *(undefined1 (*) [32])(pfVar13 + -8) = auVar18;
      *pfVar13 = auVar16._0_4_ * auVar8._0_4_ + *pfVar13 + auVar5._0_4_ * auVar9._0_4_;
      pfVar13[1] = auVar16._4_4_ * auVar8._4_4_ + pfVar13[1] + auVar5._4_4_ * auVar9._4_4_;
      pfVar13[2] = auVar16._8_4_ * auVar8._8_4_ + pfVar13[2] + auVar5._8_4_ * auVar9._8_4_;
      pfVar13[3] = auVar16._12_4_ * auVar8._12_4_ + pfVar13[3] + auVar5._12_4_ * auVar9._12_4_;
      pfVar13[4] = auVar19._0_4_ * auVar8._16_4_ + pfVar13[4] + auVar6._0_4_ * auVar9._16_4_;
      pfVar13[5] = auVar19._4_4_ * auVar8._20_4_ + pfVar13[5] + auVar6._4_4_ * auVar9._20_4_;
      pfVar13[6] = auVar19._8_4_ * auVar8._24_4_ + pfVar13[6] + auVar6._8_4_ * auVar9._24_4_;
      pfVar13[7] = auVar19._12_4_ * auVar8._28_4_ + pfVar13[7] + auVar6._12_4_ * auVar9._28_4_;
      uVar14 = uVar14 - 1;
      pfVar13 = pfVar13 + 0x20;
    } while (uVar14 != 0);
  }
  return;
}



// FUNCTION 1455799b0 FUN_1455799b0 body=143 status=ok
// SIG undefined FUN_1455799b0(void)

void FUN_1455799b0(float *param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
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
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulonglong uVar41;
  longlong lVar42;
  
  if (param_4 != 0) {
    lVar42 = (longlong)param_3 - (longlong)param_1;
    param_2 = param_2 - (longlong)param_1;
    uVar41 = (ulonglong)((param_4 - 1U >> 4) + 1);
    do {
      pfVar1 = (float *)(lVar42 + (longlong)param_1);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar7 = pfVar1[4];
      fVar8 = pfVar1[5];
      fVar9 = pfVar1[6];
      fVar10 = pfVar1[7];
      pfVar1 = (float *)(lVar42 + 0x20 + (longlong)param_1);
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      fVar14 = pfVar1[4];
      fVar15 = pfVar1[5];
      fVar16 = pfVar1[6];
      fVar17 = pfVar1[7];
      fVar18 = *param_1;
      fVar19 = param_1[1];
      fVar20 = param_1[2];
      fVar21 = param_1[3];
      fVar22 = param_1[4];
      fVar23 = param_1[5];
      fVar24 = param_1[6];
      fVar25 = param_1[7];
      fVar26 = param_1[9];
      fVar27 = param_1[10];
      fVar28 = param_1[0xb];
      fVar29 = param_1[0xc];
      fVar30 = param_1[0xd];
      fVar31 = param_1[0xe];
      fVar32 = param_1[0xf];
      pfVar2 = (float *)(param_2 + 0x20 + (longlong)param_1);
      *pfVar2 = *pfVar1 + param_1[8];
      pfVar2[1] = fVar11 + fVar26;
      pfVar2[2] = fVar12 + fVar27;
      pfVar2[3] = fVar13 + fVar28;
      pfVar2[4] = fVar14 + fVar29;
      pfVar2[5] = fVar15 + fVar30;
      pfVar2[6] = fVar16 + fVar31;
      pfVar2[7] = fVar17 + fVar32;
      pfVar1 = (float *)(param_2 + (longlong)param_1);
      *pfVar1 = fVar3 + fVar18;
      pfVar1[1] = fVar4 + fVar19;
      pfVar1[2] = fVar5 + fVar20;
      pfVar1[3] = fVar6 + fVar21;
      pfVar1[4] = fVar7 + fVar22;
      pfVar1[5] = fVar8 + fVar23;
      pfVar1[6] = fVar9 + fVar24;
      pfVar1[7] = fVar10 + fVar25;
      param_1 = param_1 + 0x10;
      uVar41 = uVar41 - 1;
    } while (uVar41 != 0);
    uVar41 = (ulonglong)((param_4 - 1U >> 4) + 1);
    do {
      uVar33 = *(undefined8 *)param_1;
      uVar34 = *(undefined8 *)(param_1 + 2);
      uVar35 = *(undefined8 *)(param_1 + 4);
      uVar36 = *(undefined8 *)(param_1 + 6);
      uVar37 = *(undefined8 *)(param_1 + 8);
      uVar38 = *(undefined8 *)(param_1 + 10);
      uVar39 = *(undefined8 *)(param_1 + 0xc);
      uVar40 = *(undefined8 *)(param_1 + 0xe);
      param_1 = param_1 + 0x10;
      *param_3 = uVar33;
      param_3[1] = uVar34;
      param_3[2] = uVar35;
      param_3[3] = uVar36;
      param_3[4] = uVar37;
      param_3[5] = uVar38;
      param_3[6] = uVar39;
      param_3[7] = uVar40;
      uVar41 = uVar41 - 1;
      param_3 = param_3 + 8;
    } while (uVar41 != 0);
  }
  return;
}



// FUNCTION 145579a40 FUN_145579a40 body=285 status=ok
// SIG undefined FUN_145579a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145579a40(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 (*pauVar12) [32];
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  auVar11 = _DAT_149dab580;
  if (param_4 != 0) {
    pauVar14 = (undefined1 (*) [16])(param_2 + 0x10);
    uVar13 = (ulonglong)((param_4 - 1U >> 4) + 1);
    pauVar12 = (undefined1 (*) [32])(param_1 + 0x40);
    do {
      auVar1 = *(undefined1 (*) [32])((param_3 - param_2) + -0x10 + (longlong)pauVar14);
      auVar2 = *(undefined1 (*) [32])((param_3 - param_2) + 0x10 + (longlong)pauVar14);
      auVar3 = vcvtph2ps_f16c(pauVar14[1]);
      auVar4 = vcvtph2ps_f16c(pauVar14[2]);
      auVar5 = vcvtph2ps_f16c(pauVar14[-1]);
      auVar6 = vcvtph2ps_f16c(*pauVar14);
      pauVar14 = pauVar14 + 4;
      auVar15 = vpslld_avx2(auVar1,0x10);
      auVar16 = vpslld_avx2(auVar2,0x10);
      auVar1 = vpand_avx2(auVar1,auVar11);
      auVar2 = vpand_avx2(auVar2,auVar11);
      auVar9 = vfmsub213ps_fma(auVar3,auVar1,pauVar12[-2]);
      auVar7 = vfmadd213ps_fma(auVar3,auVar15,*pauVar12);
      auVar10 = vfmsub213ps_fma(auVar4,auVar2,pauVar12[-1]);
      auVar8 = vfmadd213ps_fma(auVar4,auVar16,pauVar12[1]);
      auVar9 = vfmsub231ps_fma(ZEXT1632(auVar9),auVar5,auVar15);
      auVar10 = vfmsub231ps_fma(ZEXT1632(auVar10),auVar6,auVar16);
      auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar5,auVar1);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar6,auVar2);
      pauVar12[-2] = ZEXT1632(auVar9);
      pauVar12[-1] = ZEXT1632(auVar10);
      *pauVar12 = ZEXT1632(auVar7);
      pauVar12[1] = ZEXT1632(auVar8);
      uVar13 = uVar13 - 1;
      pauVar12 = pauVar12 + 4;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 145579b60 FUN_145579b60 body=33 status=ok
// SIG undefined FUN_145579b60(void)

double FUN_145579b60(double param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  if ((param_1 != 0.0) && (dVar1 = 1.0 / param_1, 1.0 <= dVar1)) {
    dVar1 = 1.0;
  }
  return dVar1;
}



// FUNCTION 145579b90 FUN_145579b90 body=1205 status=ok
// SIG undefined FUN_145579b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145579b90(ulonglong param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  uint uVar4;
  ulonglong uVar5;
  undefined4 in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  double dVar32;
  uint uVar35;
  int iVar36;
  uint uVar37;
  undefined1 auVar33 [16];
  double dVar38;
  undefined1 auVar34 [16];
  undefined4 uVar39;
  ulonglong local_180 [8];
  undefined4 local_140 [16];
  double local_100 [29];
  
  local_140[0] = SUB84(param_2,0);
  uVar4 = (uint)(param_1 >> 0x20);
  uVar29 = (uVar4 & 0xffe00) + 0x200 >> 10;
  uVar35 = (in_XMM0_Dd & 0xffe00) + 0x200 >> 10;
  iVar30 = uVar29 * 0x10;
  iVar36 = uVar35 << 4;
  iVar14 = uVar29 * 8;
  auVar16._0_8_ = param_1 & 0xfffffffffffff;
  auVar16._8_4_ = in_XMM0_Dc;
  auVar16._12_4_ = in_XMM0_Dd & 0xfffff;
  uVar29 = ((int)(uVar4 + 0xc0180200) >> 0x14) + 0x41380000;
  auVar16 = auVar16 | _DAT_14d2c8600;
  dVar28 = *(double *)(&DAT_14d2c1a00 + iVar14);
  dVar24 = auVar16._0_8_;
  auVar33._0_8_ = (double)((ulonglong)dVar24 & 0xfffffffff8000000);
  auVar33._8_4_ = auVar16._8_4_ & 0xf8000000;
  auVar33._12_4_ = auVar16._12_4_;
  dVar15 = *(double *)(&DAT_14d2c1a00 + (int)(uVar35 << 3));
  dVar18 = auVar16._8_8_ * dVar15;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = uVar29;
  auVar6._0_12_ = auVar2 << 0x20;
  auVar6._12_4_ = ((int)(in_XMM0_Dd + 0xc0180200) >> 0x14) + 0x41380000;
  dVar32 = (auVar33._0_8_ * dVar28 - dVar24 * dVar28) + dVar28 * (dVar24 - auVar33._0_8_);
  dVar38 = (auVar33._8_8_ * dVar15 - dVar18) + dVar15 * (auVar16._8_8_ - auVar33._8_8_);
  dVar19 = *(double *)(&DAT_14d2c3a40 + iVar30) + ((double)((ulonglong)uVar29 << 0x20) - 1572864.0);
  dVar21 = *(double *)(&DAT_14d2c3a40 + iVar36) + (auVar6._8_8_ - 1572864.0);
  dVar22 = dVar24 * dVar28 + -1.442694902420044;
  dVar18 = dVar18 + -1.442694902420044;
  dVar28 = dVar22 + dVar19;
  dVar15 = dVar18 + dVar21;
  dVar24 = dVar32 + dVar28;
  dVar1 = dVar38 + dVar15;
  dVar23 = dVar22 + dVar32;
  dVar27 = dVar18 + dVar38;
  dVar19 = *(double *)(&UNK_14d2c3a48 + iVar30) +
           (dVar19 - dVar28) + dVar22 + (dVar28 - dVar24) + dVar32 +
           dVar23 * (((((dVar23 * -0.026667131649815552 + 0.04616704187202374) * dVar23 +
                       -0.08325619496072671) * dVar23 + 0.16015105075297303) * dVar23 +
                     -0.3465736568077919) * dVar23 + 9.597935033233511e-08);
  dVar15 = *(double *)(&UNK_14d2c3a48 + iVar36) +
           (dVar21 - dVar15) + dVar18 + (dVar15 - dVar1) + dVar38 +
           dVar27 * (((((dVar27 * -0.026667131649815552 + 0.04616704187202374) * dVar27 +
                       -0.08325619496072671) * dVar27 + 0.16015105075297303) * dVar27 +
                     -0.3465736568077919) * dVar27 + 9.597935033233511e-08);
  auVar34._8_4_ = SUB84(dVar1,0);
  auVar34._0_8_ = dVar24;
  auVar34._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar23 = dVar24 + dVar19;
  dVar32 = auVar34._8_8_ + dVar15;
  auVar25._8_4_ = SUB84(dVar32,0);
  auVar25._0_8_ = dVar23;
  uVar39 = (undefined4)((ulonglong)dVar32 >> 0x20);
  auVar25._12_4_ = uVar39;
  dVar27 = dVar23 - (double)((ulonglong)dVar23 & 0xfffffffff8000000);
  dVar38 = dVar32 - (double)((ulonglong)dVar32 & 0xfffffffff8000000);
  auVar13._0_8_ = (double)((ulonglong)param_2 & 0xfffffffff8000000);
  auVar13._8_4_ = in_XMM1_Dc & 0xf8000000;
  auVar13._12_4_ = in_XMM1_Dd;
  auVar20._8_4_ = in_XMM1_Dc;
  auVar20._0_8_ = param_2;
  auVar20._12_4_ = in_XMM1_Dd;
  dVar28 = auVar13._8_8_;
  dVar18 = auVar20._8_8_ - dVar28;
  auVar26._0_8_ = (double)((ulonglong)dVar23 & 0xfffffffff8000000);
  auVar26._8_4_ = SUB84(dVar32,0) & 0xf8000000;
  auVar26._12_4_ = uVar39;
  auVar11._0_4_ = -(uint)((int)(uVar4 + 0x100000) < 0x200000);
  auVar11._4_4_ = -(uint)((int)(in_XMM0_Dd + 0x100000) < 0x200000);
  auVar11._8_4_ = -(uint)((longlong)param_1 < 0);
  auVar11._12_4_ = -(uint)((int)in_XMM0_Dd < 0);
  dVar21 = auVar26._0_8_ * auVar13._0_8_;
  dVar22 = auVar26._8_8_ * dVar28;
  uVar31 = SUB84(dVar21 + 52776558133248.0,0);
  uVar37 = SUB84(dVar22 + 52776558133248.0,0);
  uVar29 = (uint)((ulonglong)dVar21 >> 0x20) & 0x7fffffff;
  uVar35 = (uint)((ulonglong)dVar22 >> 0x20) & 0x7fffffff;
  uVar4 = (uint)((ulonglong)param_2 >> 0x20) & 0x7fffffff;
  dVar24 = (dVar21 - ((dVar21 + 52776558133248.0) - 52776558133248.0)) +
           dVar27 * (param_2 - auVar13._0_8_) + auVar13._0_8_ * dVar27 +
           (double)((ulonglong)dVar23 & 0xfffffffff8000000) * (param_2 - auVar13._0_8_) +
           (dVar19 - (dVar23 - dVar24)) * param_2;
  dVar28 = (dVar22 - ((dVar22 + 52776558133248.0) - 52776558133248.0)) +
           dVar38 * dVar18 + dVar28 * dVar38 +
           (double)((ulonglong)dVar32 & 0xfffffffff8000000) * dVar18 +
           (dVar15 - (auVar25._8_8_ - dVar1)) * (double)CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
  auVar8._0_4_ = -(uint)(0x7f800000 < uVar4);
  auVar8._4_4_ = -(uint)(0x7f800000 < (in_XMM1_Dd & 0x7fffffff));
  auVar8._8_8_ = 0;
  auVar9._0_4_ = -(uint)(uVar4 == 0x7f800000);
  auVar9._4_4_ = -(uint)((in_XMM1_Dd & 0x7fffffff) == 0x7f800000);
  auVar9._8_4_ = 0xffffffff;
  auVar9._12_4_ = 0xffffffff;
  auVar17._0_4_ = -(uint)(uVar29 == 0x408f3fff);
  auVar17._4_4_ = -(uint)(uVar35 == 0x408f3fff);
  auVar17._8_4_ = 0xffffffff;
  auVar17._12_4_ = 0xffffffff;
  auVar10._0_4_ = -(uint)(0x408f3fff < uVar29);
  auVar10._4_4_ = -(uint)(0x408f3fff < uVar35);
  auVar10._8_8_ = 0;
  auVar12._8_4_ = SUB84(dVar28,0);
  auVar12._0_8_ = dVar24;
  auVar12._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  uVar4 = movmskps(iVar14,auVar11 | auVar8 | auVar9 | auVar10 | auVar17);
  uVar29 = uVar31 * 0x2000 + 0x3ff00000 & 0xfff00000;
  auVar3._4_8_ = 0;
  auVar3._0_4_ = uVar29;
  auVar7._0_12_ = auVar3 << 0x20;
  auVar7._12_4_ = uVar37 * 0x2000 + 0x3ff00000 & 0xfff00000;
  local_100[0] = (double)((ulonglong)uVar29 << 0x20) *
                 *(double *)(&DAT_14d2c7a80 + (int)((uVar31 & 0x7f) * 0x10));
  local_100[1] = auVar7._8_8_ * *(double *)(&DAT_14d2c7a80 + (int)((uVar37 & 0x7f) << 4));
  local_100[0] = local_100[0] +
                 dVar24 * local_100[0] *
                 (dVar24 * (((dVar24 * 0.0013333558146428443 + 0.009618129107628477) * dVar24 +
                            0.055504108664821576) * dVar24 + 0.2402265069591007) +
                 0.6931471805599453);
  local_100[1] = local_100[1] +
                 auVar12._8_8_ * local_100[1] *
                 (dVar28 * (((dVar28 * 0.0013333558146428443 + 0.009618129107628477) * dVar28 +
                            0.055504108664821576) * dVar28 + 0.2402265069591007) +
                 0.6931471805599453);
  if ((uVar4 & 3) != 0) {
    uVar5 = 0;
    local_180[0] = param_1;
    do {
      if (((uVar4 & 3) >> ((uint)uVar5 & 0x1f) & 1) != 0) {
        FUN_1455fd340(local_180 + uVar5,local_140 + uVar5 * 2,local_100 + uVar5);
      }
      uVar29 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar29;
    } while ((int)uVar29 < 2);
  }
  return;
}



// FUNCTION 14557a050 FUN_14557a050 body=48 status=ok
// SIG undefined FUN_14557a050(void)

longlong FUN_14557a050(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557a080 FUN_14557a080 body=152 status=ok
// SIG undefined FUN_14557a080(void)

undefined8 FUN_14557a080(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == (int)DAT_14c7467b0) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14557a120 FUN_14557a120 body=40 status=ok
// SIG undefined FUN_14557a120(void)

int FUN_14557a120(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557a150 FUN_14557a150 body=105 status=ok
// SIG undefined FUN_14557a150(void)

undefined8 FUN_14557a150(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557a330(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557a1c0 FUN_14557a1c0 body=34 status=ok
// SIG undefined FUN_14557a1c0(void)

bool FUN_14557a1c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557a1f0 FUN_14557a1f0 body=38 status=ok
// SIG undefined FUN_14557a1f0(void)

bool FUN_14557a1f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557a220 FUN_14557a220 body=85 status=ok
// SIG undefined FUN_14557a220(void)

longlong FUN_14557a220(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dab6a8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dab778;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557a280 FUN_14557a280 body=167 status=ok
// SIG undefined FUN_14557a280(void)

undefined8 * FUN_14557a280(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dab898;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dab5b0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dab680;
  *param_1 = &PTR__purecall_149dab6a8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dab778;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dab7a0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dab870;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557a330 FUN_14557a330 body=124 status=ok
// SIG undefined FUN_14557a330(void)

void FUN_14557a330(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dab7a0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dab870;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dab6a8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dab778;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557a3b0 FUN_14557a3b0 body=49 status=ok
// SIG undefined FUN_14557a3b0(void)

undefined8 FUN_14557a3b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[5],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557a3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557a3f0 FUN_14557a3f0 body=54 status=ok
// SIG undefined FUN_14557a3f0(void)

bool FUN_14557a3f0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557a430 FUN_14557a430 body=54 status=ok
// SIG undefined FUN_14557a430(void)

bool FUN_14557a430(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557a470 FUN_14557a470 body=54 status=ok
// SIG undefined FUN_14557a470(void)

bool FUN_14557a470(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557a4b0 FUN_14557a4b0 body=54 status=ok
// SIG undefined FUN_14557a4b0(void)

bool FUN_14557a4b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557a4f0 FUN_14557a4f0 body=222 status=ok
// SIG undefined FUN_14557a4f0(void)

undefined8 * FUN_14557a4f0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x58) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557a5d0 FUN_14557a5d0 body=202 status=ok
// SIG undefined FUN_14557a5d0(void)

ulonglong FUN_14557a5d0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x60) || (puVar1[0xb] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_14557a080(&local_res8);
      iVar3 = (*(code *)puVar1[0xb])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14557a6a0 FUN_14557a6a0 body=222 status=ok
// SIG undefined FUN_14557a6a0(void)

undefined8 * FUN_14557a6a0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x68) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557a780 FUN_14557a780 body=222 status=ok
// SIG undefined FUN_14557a780(void)

undefined8 * FUN_14557a780(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x70) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557a860 FUN_14557a860 body=95 status=ok
// SIG undefined FUN_14557a860(void)

bool FUN_14557a860(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((((0x77 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557a8c0 FUN_14557a8c0 body=225 status=ok
// SIG undefined FUN_14557a8c0(void)

undefined8 * FUN_14557a8c0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x80) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557a9b0 FUN_14557a9b0 body=102 status=ok
// SIG undefined FUN_14557a9b0(void)

undefined8 *
FUN_14557a9b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x87 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453e4970(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557aa20 FUN_14557aa20 body=102 status=ok
// SIG undefined FUN_14557aa20(void)

undefined8 *
FUN_14557aa20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x8f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557aa90 FUN_14557aa90 body=102 status=ok
// SIG undefined FUN_14557aa90(void)

undefined8 *
FUN_14557aa90(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x97 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557ab00 FUN_14557ab00 body=102 status=ok
// SIG undefined FUN_14557ab00(void)

undefined8 *
FUN_14557ab00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x9f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x13], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557ab70 FUN_14557ab70 body=60 status=ok
// SIG undefined FUN_14557ab70(void)

bool FUN_14557ab70(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0xa7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x14], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557abb0 FUN_14557abb0 body=102 status=ok
// SIG undefined FUN_14557abb0(void)

undefined8 *
FUN_14557abb0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0xaf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x15], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557ac20 FUN_14557ac20 body=102 status=ok
// SIG undefined FUN_14557ac20(void)

undefined8 *
FUN_14557ac20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0xb7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x16], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557ac90 FUN_14557ac90 body=228 status=ok
// SIG undefined FUN_14557ac90(void)

undefined8 * FUN_14557ac90(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0xc0) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x17], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557ad80 FUN_14557ad80 body=60 status=ok
// SIG undefined FUN_14557ad80(void)

bool FUN_14557ad80(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((199 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x18], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557adc0 FUN_14557adc0 body=101 status=ok
// SIG undefined FUN_14557adc0(void)

bool FUN_14557adc0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((((0xcf < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x19], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557ae30 FUN_14557ae30 body=266 status=ok
// SIG undefined FUN_14557ae30(void)

undefined8 * FUN_14557ae30(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0xd8) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1a], pcVar1 == (code *)0x0)) {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
      uVar3 = (*pcVar1)();
      local_28 = &PTR_FUN_14ba6d600;
      local_20 = (undefined8 *)0x0;
      local_18 = '\0';
      FUN_144d73b20(&local_28,uVar3);
      puVar2 = local_20;
      *param_2 = &PTR_FUN_14ba6d600;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0;
      uVar3 = uVar4;
      if (local_20 != (undefined8 *)0x0) {
        uVar4 = *local_20;
        uVar3 = local_20[1];
      }
      FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
      if (puVar2 == (undefined8 *)0x0) {
        return param_2;
      }
      if (local_18 == '\0') {
        return param_2;
      }
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
      return param_2;
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14ba6d600;
  return param_2;
}



// FUNCTION 14557af40 FUN_14557af40 body=176 status=ok
// SIG undefined FUN_14557af40(void)

void FUN_14557af40(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xdf < *puVar1) && (puVar1[0x1b] != 0)) {
    lVar2 = cef_string_map_alloc();
    if (lVar2 != 0) {
      FUN_14516eb30(param_2,lVar2);
    }
    (*(code *)puVar1[0x1b])(puVar1,lVar2);
    if (lVar2 != 0) {
      FUN_14516c300(param_2,*(undefined8 *)(*param_2 + 8));
      *(longlong *)(*param_2 + 8) = *param_2;
      *(longlong *)*param_2 = *param_2;
      *(longlong *)(*param_2 + 0x10) = *param_2;
      param_2[1] = 0;
      FUN_14516e8e0(lVar2,param_2);
      cef_string_map_free(lVar2);
    }
  }
  return;
}



// FUNCTION 14557aff0 FUN_14557aff0 body=135 status=ok
// SIG undefined FUN_14557aff0(void)

bool FUN_14557aff0(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((((0xe7 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1c], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_2 + 8) != 0)) &&
     (((*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0 && (*(longlong *)(param_3 + 8) != 0)) &&
      (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)))) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557b080 FUN_14557b080 body=228 status=ok
// SIG undefined FUN_14557b080(void)

undefined8 * FUN_14557b080(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0xf0) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1d], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557b170 FUN_14557b170 body=140 status=ok
// SIG undefined FUN_14557b170(void)

undefined8 * FUN_14557b170(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_20 [24];
  
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0xf8) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1e], pcVar1 == (code *)0x0)) {
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    puVar4 = (undefined8 *)(*pcVar1)(local_20);
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    puVar4 = param_2 + 1;
    if (param_2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    param_2[3] = 0;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  *param_2 = &PTR_FUN_14ba6c6e8;
  return param_2;
}



// FUNCTION 14557b200 FUN_14557b200 body=64 status=ok
// SIG undefined FUN_14557b200(void)

undefined8 * FUN_14557b200(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557a330();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557b290 FUN_14557b290 body=48 status=ok
// SIG undefined FUN_14557b290(void)

longlong FUN_14557b290(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557b2c0 FUN_14557b2c0 body=40 status=ok
// SIG undefined FUN_14557b2c0(void)

int FUN_14557b2c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557b2f0 FUN_14557b2f0 body=181 status=ok
// SIG undefined FUN_14557b2f0(void)

undefined8 FUN_14557b2f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = param_1 + -6;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[-4] = &PTR_FUN_149dabb00;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149dabb40;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_149daba98;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149dabad8;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557b3b0 FUN_14557b3b0 body=34 status=ok
// SIG undefined FUN_14557b3b0(void)

bool FUN_14557b3b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557b3e0 FUN_14557b3e0 body=38 status=ok
// SIG undefined FUN_14557b3e0(void)

bool FUN_14557b3e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557b410 FUN_14557b410 body=11 status=ok
// SIG undefined FUN_14557b410(void)

undefined8 FUN_14557b410(void)

{
  return 0;
}



// FUNCTION 14557b420 FUN_14557b420 body=85 status=ok
// SIG undefined FUN_14557b420(void)

longlong FUN_14557b420(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149daba98;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabad8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557b480 FUN_14557b480 body=167 status=ok
// SIG undefined FUN_14557b480(void)

undefined8 * FUN_14557b480(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dabb68;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149daba30;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149daba70;
  *param_1 = &PTR__purecall_149daba98;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabad8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dabb00;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabb40;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557b530 FUN_14557b530 body=214 status=ok
// SIG undefined FUN_14557b530(void)

undefined8 * FUN_14557b530(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x30) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557b610 FUN_14557b610 body=214 status=ok
// SIG undefined FUN_14557b610(void)

undefined8 * FUN_14557b610(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x38) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557b6f0 FUN_14557b6f0 body=214 status=ok
// SIG undefined FUN_14557b6f0(void)

undefined8 * FUN_14557b6f0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x40) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557b870 FUN_14557b870 body=143 status=ok
// SIG undefined FUN_14557b870(void)

undefined8 * FUN_14557b870(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_149dabb00;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149dabb40;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_149daba98;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149dabad8;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 14557b950 FUN_14557b950 body=48 status=ok
// SIG undefined FUN_14557b950(void)

longlong FUN_14557b950(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557b980 FUN_14557b980 body=40 status=ok
// SIG undefined FUN_14557b980(void)

int FUN_14557b980(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557b9b0 FUN_14557b9b0 body=105 status=ok
// SIG undefined FUN_14557b9b0(void)

undefined8 FUN_14557b9b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557bb90(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557ba20 FUN_14557ba20 body=34 status=ok
// SIG undefined FUN_14557ba20(void)

bool FUN_14557ba20(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557ba50 FUN_14557ba50 body=38 status=ok
// SIG undefined FUN_14557ba50(void)

bool FUN_14557ba50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557ba80 FUN_14557ba80 body=85 status=ok
// SIG undefined FUN_14557ba80(void)

longlong FUN_14557ba80(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabc28;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabc40;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557bae0 FUN_14557bae0 body=167 status=ok
// SIG undefined FUN_14557bae0(void)

undefined8 * FUN_14557bae0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dabca8;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dabbe8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dabc00;
  *param_1 = &PTR__purecall_149dabc28;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabc40;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dabc68;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabc80;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557bb90 FUN_14557bb90 body=124 status=ok
// SIG undefined FUN_14557bb90(void)

void FUN_14557bb90(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dabc68;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabc80;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabc28;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabc40;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557bc10 FUN_14557bc10 body=54 status=ok
// SIG undefined FUN_14557bc10(void)

bool FUN_14557bc10(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557bc50 FUN_14557bc50 body=49 status=ok
// SIG undefined FUN_14557bc50(void)

undefined8 FUN_14557bc50(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557bc76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557bc90 FUN_14557bc90 body=116 status=ok
// SIG undefined FUN_14557bc90(void)

undefined8 * FUN_14557bc90(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x3f < *puVar1) && ((code *)puVar1[7] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[7])(puVar1,param_3);
    FUN_14557bd50(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557bd10 FUN_14557bd10 body=64 status=ok
// SIG undefined FUN_14557bd10(void)

undefined8 * FUN_14557bd10(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557bb90();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557bd50 FUN_14557bd50 body=230 status=ok
// SIG undefined FUN_14557bd50(void)

longlong * FUN_14557bd50(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1455fdfe0(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c748000;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 14557be40 FUN_14557be40 body=48 status=ok
// SIG undefined FUN_14557be40(void)

void FUN_14557be40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14557bec0 FUN_14557bec0 body=48 status=ok
// SIG undefined FUN_14557bec0(void)

longlong FUN_14557bec0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557bef0 FUN_14557bef0 body=40 status=ok
// SIG undefined FUN_14557bef0(void)

int FUN_14557bef0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557bf20 FUN_14557bf20 body=105 status=ok
// SIG undefined FUN_14557bf20(void)

undefined8 FUN_14557bf20(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557c100(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557bf90 FUN_14557bf90 body=34 status=ok
// SIG undefined FUN_14557bf90(void)

bool FUN_14557bf90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557bfc0 FUN_14557bfc0 body=38 status=ok
// SIG undefined FUN_14557bfc0(void)

bool FUN_14557bfc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557bff0 FUN_14557bff0 body=85 status=ok
// SIG undefined FUN_14557bff0(void)

longlong FUN_14557bff0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabd60;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabd70;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557c050 FUN_14557c050 body=167 status=ok
// SIG undefined FUN_14557c050(void)

undefined8 * FUN_14557c050(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dabdd0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dabd28;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dabd38;
  *param_1 = &PTR__purecall_149dabd60;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabd70;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dabd98;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabda8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557c100 FUN_14557c100 body=124 status=ok
// SIG undefined FUN_14557c100(void)

void FUN_14557c100(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dabd98;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabda8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabd60;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabd70;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557c180 FUN_14557c180 body=47 status=ok
// SIG undefined FUN_14557c180(void)

void FUN_14557c180(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[5],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557c1a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14557c1b0 FUN_14557c1b0 body=47 status=ok
// SIG undefined FUN_14557c1b0(void)

void FUN_14557c1b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557c1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14557c1e0 FUN_14557c1e0 body=64 status=ok
// SIG undefined FUN_14557c1e0(void)

undefined8 * FUN_14557c1e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557c100();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557c270 FUN_14557c270 body=48 status=ok
// SIG undefined FUN_14557c270(void)

longlong FUN_14557c270(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557c2a0 FUN_14557c2a0 body=40 status=ok
// SIG undefined FUN_14557c2a0(void)

int FUN_14557c2a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557c2d0 FUN_14557c2d0 body=105 status=ok
// SIG undefined FUN_14557c2d0(void)

undefined8 FUN_14557c2d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557c4b0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557c340 FUN_14557c340 body=34 status=ok
// SIG undefined FUN_14557c340(void)

bool FUN_14557c340(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557c370 FUN_14557c370 body=38 status=ok
// SIG undefined FUN_14557c370(void)

bool FUN_14557c370(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557c3a0 FUN_14557c3a0 body=85 status=ok
// SIG undefined FUN_14557c3a0(void)

longlong FUN_14557c3a0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabe30;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabe38;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557c400 FUN_14557c400 body=167 status=ok
// SIG undefined FUN_14557c400(void)

undefined8 * FUN_14557c400(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dabe90;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dabe00;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dabe08;
  *param_1 = &PTR__purecall_149dabe30;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabe38;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dabe60;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabe68;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557c4b0 FUN_14557c4b0 body=124 status=ok
// SIG undefined FUN_14557c4b0(void)

void FUN_14557c4b0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dabe60;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabe68;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabe30;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabe38;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557c530 FUN_14557c530 body=54 status=ok
// SIG undefined FUN_14557c530(void)

void FUN_14557c530(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x2f < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,param_2);
  }
  return;
}



// FUNCTION 14557c570 FUN_14557c570 body=64 status=ok
// SIG undefined FUN_14557c570(void)

undefined8 * FUN_14557c570(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557c4b0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557c600 FUN_14557c600 body=48 status=ok
// SIG undefined FUN_14557c600(void)

longlong FUN_14557c600(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557c630 FUN_14557c630 body=40 status=ok
// SIG undefined FUN_14557c630(void)

int FUN_14557c630(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557c660 FUN_14557c660 body=105 status=ok
// SIG undefined FUN_14557c660(void)

undefined8 FUN_14557c660(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557c840(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557c6d0 FUN_14557c6d0 body=34 status=ok
// SIG undefined FUN_14557c6d0(void)

bool FUN_14557c6d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557c700 FUN_14557c700 body=38 status=ok
// SIG undefined FUN_14557c700(void)

bool FUN_14557c700(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557c730 FUN_14557c730 body=85 status=ok
// SIG undefined FUN_14557c730(void)

longlong FUN_14557c730(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabef0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabef8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557c790 FUN_14557c790 body=167 status=ok
// SIG undefined FUN_14557c790(void)

undefined8 * FUN_14557c790(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dabf50;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dabec0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dabec8;
  *param_1 = &PTR__purecall_149dabef0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabef8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dabf20;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dabf28;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557c840 FUN_14557c840 body=124 status=ok
// SIG undefined FUN_14557c840(void)

void FUN_14557c840(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dabf20;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabf28;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dabef0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dabef8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557c8c0 FUN_14557c8c0 body=56 status=ok
// SIG undefined FUN_14557c8c0(void)

void FUN_14557c8c0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x2f < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,param_2);
  }
  return;
}



// FUNCTION 14557c900 FUN_14557c900 body=64 status=ok
// SIG undefined FUN_14557c900(void)

undefined8 * FUN_14557c900(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557c840();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557c990 FUN_14557c990 body=48 status=ok
// SIG undefined FUN_14557c990(void)

longlong FUN_14557c990(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557c9c0 FUN_14557c9c0 body=40 status=ok
// SIG undefined FUN_14557c9c0(void)

int FUN_14557c9c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557c9f0 FUN_14557c9f0 body=181 status=ok
// SIG undefined FUN_14557c9f0(void)

undefined8 FUN_14557c9f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = param_1 + -6;
    if (puVar3 != (undefined8 *)0x0) {
      param_1[-4] = &PTR_FUN_149dac0e0;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149dac168;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      param_1[-4] = &PTR__purecall_149dac030;
      *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + 0x18 + (longlong)puVar3) =
           &PTR_LAB_149dac0b8;
      *(int *)((longlong)*(int *)(param_1[-3] + 4) + 0x14 + (longlong)puVar3) =
           *(int *)(param_1[-3] + 4) + -0x18;
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(puVar3,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557cab0 FUN_14557cab0 body=34 status=ok
// SIG undefined FUN_14557cab0(void)

bool FUN_14557cab0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557cae0 FUN_14557cae0 body=38 status=ok
// SIG undefined FUN_14557cae0(void)

bool FUN_14557cae0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557cb10 FUN_14557cb10 body=85 status=ok
// SIG undefined FUN_14557cb10(void)

longlong FUN_14557cb10(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac030;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac0b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557cb70 FUN_14557cb70 body=167 status=ok
// SIG undefined FUN_14557cb70(void)

undefined8 * FUN_14557cb70(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dac190;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dabf80;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dac008;
  *param_1 = &PTR__purecall_149dac030;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac0b8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dac0e0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac168;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557cc20 FUN_14557cc20 body=42 status=ok
// SIG undefined FUN_14557cc20(void)

bool FUN_14557cc20(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557ccd0 FUN_14557ccd0 body=214 status=ok
// SIG undefined FUN_14557ccd0(void)

undefined8 * FUN_14557ccd0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x58) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557cdd0 FUN_14557cdd0 body=214 status=ok
// SIG undefined FUN_14557cdd0(void)

undefined8 * FUN_14557cdd0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x68) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557ced0 FUN_14557ced0 body=214 status=ok
// SIG undefined FUN_14557ced0(void)

undefined8 * FUN_14557ced0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x78) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557cfd0 FUN_14557cfd0 body=259 status=ok
// SIG undefined FUN_14557cfd0(void)

undefined8 * FUN_14557cfd0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0x88) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else if ((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(*(longlong *)(param_3 + 8) + 8) == 0)
          ) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557d120 FUN_14557d120 body=168 status=ok
// SIG undefined FUN_14557d120(void)

void FUN_14557d120(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x97 < *puVar1) && (puVar1[0x12] != 0)) {
    lVar2 = cef_string_multimap_alloc();
    if (lVar2 != 0) {
      FUN_14516edb0(param_2,lVar2);
    }
    (*(code *)puVar1[0x12])(puVar1,lVar2);
    if (lVar2 != 0) {
      FUN_1453e2580(param_2,*(undefined8 *)(*param_2 + 8));
      *(longlong *)(*param_2 + 8) = *param_2;
      *(longlong *)*param_2 = *param_2;
      *(longlong *)(*param_2 + 0x10) = *param_2;
      param_2[1] = 0;
      FUN_14516ebd0(lVar2,param_2);
      cef_string_multimap_free(lVar2);
    }
  }
  return;
}



// FUNCTION 14557d1d0 FUN_14557d1d0 body=114 status=ok
// SIG undefined FUN_14557d1d0(void)

void FUN_14557d1d0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x9f < *puVar1) && (puVar1[0x13] != 0)) {
    lVar2 = cef_string_multimap_alloc();
    if (lVar2 != 0) {
      FUN_14516edb0(param_2,lVar2);
    }
    (*(code *)puVar1[0x13])(puVar1,lVar2);
    if (lVar2 != 0) {
      cef_string_multimap_free(lVar2);
    }
  }
  return;
}



// FUNCTION 14557d250 FUN_14557d250 body=220 status=ok
// SIG undefined FUN_14557d250(void)

undefined8 * FUN_14557d250(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  if ((**(ulonglong **)(param_1 + -8) < 0xa8) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x14], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557d360 FUN_14557d360 body=143 status=ok
// SIG undefined FUN_14557d360(void)

undefined8 * FUN_14557d360(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -4;
  *puVar1 = &PTR_FUN_149dac0e0;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149dac168;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *puVar1 = &PTR__purecall_149dac030;
  *(undefined ***)((longlong)*(int *)(param_1[-3] + 4) + -0x18 + (longlong)param_1) =
       &PTR_LAB_149dac0b8;
  *(int *)((longlong)*(int *)(param_1[-3] + 4) + -0x1c + (longlong)param_1) =
       *(int *)(param_1[-3] + 4) + -0x18;
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(puVar1,0x28);
  }
  return puVar1;
}



// FUNCTION 14557d440 FUN_14557d440 body=34 status=ok
// SIG undefined FUN_14557d440(void)

int FUN_14557d440(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (**(code **)**(undefined8 **)(param_1 + 0x10))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557d470 FUN_14557d470 body=62 status=ok
// SIG undefined FUN_14557d470(void)

undefined8 FUN_14557d470(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)param_1[2] + 8))();
  LOCK();
  plVar1 = param_1 + 9;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 14557d4d0 FUN_14557d4d0 body=20 status=ok
// SIG undefined FUN_14557d4d0(void)

undefined8 * FUN_14557d4d0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14557d510 FUN_14557d510 body=42 status=ok
// SIG undefined FUN_14557d510(void)

undefined1 FUN_14557d510(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 14557d540 FUN_14557d540 body=42 status=ok
// SIG undefined FUN_14557d540(void)

undefined1 FUN_14557d540(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 14557d570 FUN_14557d570 body=42 status=ok
// SIG undefined FUN_14557d570(void)

undefined1 FUN_14557d570(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 14557d5a0 FUN_14557d5a0 body=43 status=ok
// SIG undefined FUN_14557d5a0(void)

undefined8 * FUN_14557d5a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14557d5d0 FUN_14557d5d0 body=96 status=ok
// SIG undefined FUN_14557d5d0(void)

undefined8 * FUN_14557d5d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149dac260;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7467cc;
  param_1[3] = param_1;
  param_1[5] = &LAB_14557d4f0;
  param_1[6] = FUN_14557d510;
  param_1[7] = FUN_14557d540;
  param_1[8] = FUN_14557d570;
  param_1[4] = 0x28;
  *param_1 = &PTR_FUN_149dac288;
  return param_1;
}



// FUNCTION 14557d630 FUN_14557d630 body=43 status=ok
// SIG undefined FUN_14557d630(void)

undefined8 * FUN_14557d630(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14557d660 FUN_14557d660 body=20 status=ok
// SIG undefined FUN_14557d660(void)

undefined8 * FUN_14557d660(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14557d680 FUN_14557d680 body=48 status=ok
// SIG undefined FUN_14557d680(void)

longlong FUN_14557d680(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557d6b0 FUN_14557d6b0 body=40 status=ok
// SIG undefined FUN_14557d6b0(void)

int FUN_14557d6b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557d6e0 FUN_14557d6e0 body=105 status=ok
// SIG undefined FUN_14557d6e0(void)

undefined8 FUN_14557d6e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557d8c0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557d750 FUN_14557d750 body=34 status=ok
// SIG undefined FUN_14557d750(void)

bool FUN_14557d750(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557d780 FUN_14557d780 body=38 status=ok
// SIG undefined FUN_14557d780(void)

bool FUN_14557d780(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557d7b0 FUN_14557d7b0 body=85 status=ok
// SIG undefined FUN_14557d7b0(void)

longlong FUN_14557d7b0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac348;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac3b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557d810 FUN_14557d810 body=167 status=ok
// SIG undefined FUN_14557d810(void)

undefined8 * FUN_14557d810(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dac478;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dac2b0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dac320;
  *param_1 = &PTR__purecall_149dac348;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac3b8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dac3e0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac450;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557d8c0 FUN_14557d8c0 body=124 status=ok
// SIG undefined FUN_14557d8c0(void)

void FUN_14557d8c0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dac3e0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac450;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac348;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac3b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557d940 FUN_14557d940 body=49 status=ok
// SIG undefined FUN_14557d940(void)

undefined8 FUN_14557d940(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[5],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557d966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557d980 FUN_14557d980 body=96 status=ok
// SIG undefined FUN_14557d980(void)

undefined8 *
FUN_14557d980(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557d9e0 FUN_14557d9e0 body=96 status=ok
// SIG undefined FUN_14557d9e0(void)

undefined8 *
FUN_14557d9e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557da40 FUN_14557da40 body=96 status=ok
// SIG undefined FUN_14557da40(void)

undefined8 *
FUN_14557da40(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557daa0 FUN_14557daa0 body=222 status=ok
// SIG undefined FUN_14557daa0(void)

undefined8 * FUN_14557daa0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x50) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557db80 FUN_14557db80 body=130 status=ok
// SIG undefined FUN_14557db80(void)

undefined8 * FUN_14557db80(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  if ((((0x57 < **(ulonglong **)(param_1 + -8)) &&
       (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557dc10 FUN_14557dc10 body=96 status=ok
// SIG undefined FUN_14557dc10(void)

undefined8 *
FUN_14557dc10(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453df930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14557dc70 FUN_14557dc70 body=54 status=ok
// SIG undefined FUN_14557dc70(void)

bool FUN_14557dc70(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557dcb0 FUN_14557dcb0 body=49 status=ok
// SIG undefined FUN_14557dcb0(void)

undefined8 FUN_14557dcb0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xd],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557dcd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557dcf0 FUN_14557dcf0 body=49 status=ok
// SIG undefined FUN_14557dcf0(void)

undefined8 FUN_14557dcf0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x77 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xe],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557dd16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557dd30 FUN_14557dd30 body=225 status=ok
// SIG undefined FUN_14557dd30(void)

undefined8 * FUN_14557dd30(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x80) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557de20 FUN_14557de20 body=228 status=ok
// SIG undefined FUN_14557de20(void)

undefined8 * FUN_14557de20(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x88) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557df10 FUN_14557df10 body=228 status=ok
// SIG undefined FUN_14557df10(void)

undefined8 * FUN_14557df10(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x90) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557e000 FUN_14557e000 body=266 status=ok
// SIG undefined FUN_14557e000(void)

undefined8 * FUN_14557e000(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x98) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 == (code *)0x0)) {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    if ((*(longlong *)(param_3 + 8) != 0) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
      uVar3 = (*pcVar1)();
      local_28 = &PTR_FUN_14ba6d600;
      local_20 = (undefined8 *)0x0;
      local_18 = '\0';
      FUN_144d73b20(&local_28,uVar3);
      puVar2 = local_20;
      *param_2 = &PTR_FUN_14ba6d600;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0;
      uVar3 = uVar4;
      if (local_20 != (undefined8 *)0x0) {
        uVar4 = *local_20;
        uVar3 = local_20[1];
      }
      FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
      if (puVar2 == (undefined8 *)0x0) {
        return param_2;
      }
      if (local_18 == '\0') {
        return param_2;
      }
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
      return param_2;
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14ba6d600;
  return param_2;
}



// FUNCTION 14557e110 FUN_14557e110 body=64 status=ok
// SIG undefined FUN_14557e110(void)

undefined8 * FUN_14557e110(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557d8c0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557e1a0 FUN_14557e1a0 body=48 status=ok
// SIG undefined FUN_14557e1a0(void)

longlong FUN_14557e1a0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557e1d0 FUN_14557e1d0 body=40 status=ok
// SIG undefined FUN_14557e1d0(void)

int FUN_14557e1d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557e200 FUN_14557e200 body=105 status=ok
// SIG undefined FUN_14557e200(void)

undefined8 FUN_14557e200(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557e3e0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557e270 FUN_14557e270 body=34 status=ok
// SIG undefined FUN_14557e270(void)

bool FUN_14557e270(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557e2a0 FUN_14557e2a0 body=38 status=ok
// SIG undefined FUN_14557e2a0(void)

bool FUN_14557e2a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557e2d0 FUN_14557e2d0 body=85 status=ok
// SIG undefined FUN_14557e2d0(void)

longlong FUN_14557e2d0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac5a8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac5b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557e330 FUN_14557e330 body=167 status=ok
// SIG undefined FUN_14557e330(void)

undefined8 * FUN_14557e330(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dac618;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dac570;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dac580;
  *param_1 = &PTR__purecall_149dac5a8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac5b8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dac5e0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac5f0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557e3e0 FUN_14557e3e0 body=124 status=ok
// SIG undefined FUN_14557e3e0(void)

void FUN_14557e3e0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dac5e0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac5f0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac5a8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac5b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557e460 FUN_14557e460 body=74 status=ok
// SIG undefined FUN_14557e460(void)

void FUN_14557e460(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x2f < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_3 + 8));
  }
  return;
}



// FUNCTION 14557e4b0 FUN_14557e4b0 body=47 status=ok
// SIG undefined FUN_14557e4b0(void)

void FUN_14557e4b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557e4d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 14557e4e0 FUN_14557e4e0 body=64 status=ok
// SIG undefined FUN_14557e4e0(void)

undefined8 * FUN_14557e4e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557e3e0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557e570 FUN_14557e570 body=48 status=ok
// SIG undefined FUN_14557e570(void)

longlong FUN_14557e570(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557e5a0 FUN_14557e5a0 body=152 status=ok
// SIG undefined FUN_14557e5a0(void)

undefined8 FUN_14557e5a0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7467dc) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14557e640 FUN_14557e640 body=40 status=ok
// SIG undefined FUN_14557e640(void)

int FUN_14557e640(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557e670 FUN_14557e670 body=105 status=ok
// SIG undefined FUN_14557e670(void)

undefined8 FUN_14557e670(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557e850(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557e6e0 FUN_14557e6e0 body=34 status=ok
// SIG undefined FUN_14557e6e0(void)

bool FUN_14557e6e0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557e710 FUN_14557e710 body=38 status=ok
// SIG undefined FUN_14557e710(void)

bool FUN_14557e710(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557e740 FUN_14557e740 body=85 status=ok
// SIG undefined FUN_14557e740(void)

longlong FUN_14557e740(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac698;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac6c0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557e7a0 FUN_14557e7a0 body=167 status=ok
// SIG undefined FUN_14557e7a0(void)

undefined8 * FUN_14557e7a0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dac738;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dac648;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dac670;
  *param_1 = &PTR__purecall_149dac698;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac6c0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dac6e8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac710;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557e850 FUN_14557e850 body=124 status=ok
// SIG undefined FUN_14557e850(void)

void FUN_14557e850(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dac6e8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac710;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac698;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac6c0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557e8d0 FUN_14557e8d0 body=202 status=ok
// SIG undefined FUN_14557e8d0(void)

ulonglong FUN_14557e8d0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x30) || (puVar1[5] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_14557e5a0(&local_res8);
      iVar3 = (*(code *)puVar1[5])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14557e9a0 FUN_14557e9a0 body=54 status=ok
// SIG undefined FUN_14557e9a0(void)

bool FUN_14557e9a0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557e9e0 FUN_14557e9e0 body=72 status=ok
// SIG undefined FUN_14557e9e0(void)

bool FUN_14557e9e0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x3f < *puVar1) && ((code *)puVar1[7] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[7])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557ea30 FUN_14557ea30 body=202 status=ok
// SIG undefined FUN_14557ea30(void)

ulonglong FUN_14557ea30(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d73660(&local_res8);
      iVar3 = (*(code *)puVar1[8])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14557eb00 FUN_14557eb00 body=218 status=ok
// SIG undefined FUN_14557eb00(void)

ulonglong FUN_14557eb00(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x50) || (puVar1[9] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d73660(&local_res8);
      iVar3 = (*(code *)puVar1[9])(puVar1,uVar5,param_3,param_4,uVar6);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14557ebe0 FUN_14557ebe0 body=64 status=ok
// SIG undefined FUN_14557ebe0(void)

undefined8 * FUN_14557ebe0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557e850();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557ec70 FUN_14557ec70 body=48 status=ok
// SIG undefined FUN_14557ec70(void)

longlong FUN_14557ec70(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557eca0 FUN_14557eca0 body=40 status=ok
// SIG undefined FUN_14557eca0(void)

int FUN_14557eca0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557ecd0 FUN_14557ecd0 body=105 status=ok
// SIG undefined FUN_14557ecd0(void)

undefined8 FUN_14557ecd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557eeb0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557ed40 FUN_14557ed40 body=34 status=ok
// SIG undefined FUN_14557ed40(void)

bool FUN_14557ed40(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557ed70 FUN_14557ed70 body=38 status=ok
// SIG undefined FUN_14557ed70(void)

bool FUN_14557ed70(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557eda0 FUN_14557eda0 body=85 status=ok
// SIG undefined FUN_14557eda0(void)

longlong FUN_14557eda0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac8d0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac970;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557ee00 FUN_14557ee00 body=167 status=ok
// SIG undefined FUN_14557ee00(void)

undefined8 * FUN_14557ee00(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149daca60;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dac808;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dac8a8;
  *param_1 = &PTR__purecall_149dac8d0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dac970;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dac998;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149daca38;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557eeb0 FUN_14557eeb0 body=124 status=ok
// SIG undefined FUN_14557eeb0(void)

void FUN_14557eeb0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dac998;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149daca38;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dac8d0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dac970;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557ef30 FUN_14557ef30 body=49 status=ok
// SIG undefined FUN_14557ef30(void)

undefined8 FUN_14557ef30(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[5],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557ef56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557ef70 FUN_14557ef70 body=49 status=ok
// SIG undefined FUN_14557ef70(void)

undefined8 FUN_14557ef70(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557ef96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557efb0 FUN_14557efb0 body=49 status=ok
// SIG undefined FUN_14557efb0(void)

undefined8 FUN_14557efb0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557efd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557eff0 FUN_14557eff0 body=222 status=ok
// SIG undefined FUN_14557eff0(void)

undefined8 * FUN_14557eff0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x48) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f0d0 FUN_14557f0d0 body=222 status=ok
// SIG undefined FUN_14557f0d0(void)

undefined8 * FUN_14557f0d0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x50) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f1b0 FUN_14557f1b0 body=222 status=ok
// SIG undefined FUN_14557f1b0(void)

undefined8 * FUN_14557f1b0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x58) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f290 FUN_14557f290 body=54 status=ok
// SIG undefined FUN_14557f290(void)

bool FUN_14557f290(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557f2d0 FUN_14557f2d0 body=222 status=ok
// SIG undefined FUN_14557f2d0(void)

undefined8 * FUN_14557f2d0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x68) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f3b0 FUN_14557f3b0 body=222 status=ok
// SIG undefined FUN_14557f3b0(void)

undefined8 * FUN_14557f3b0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x70) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f490 FUN_14557f490 body=222 status=ok
// SIG undefined FUN_14557f490(void)

undefined8 * FUN_14557f490(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x78) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f570 FUN_14557f570 body=225 status=ok
// SIG undefined FUN_14557f570(void)

undefined8 * FUN_14557f570(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x80) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f660 FUN_14557f660 body=55 status=ok
// SIG undefined FUN_14557f660(void)

undefined8 FUN_14557f660(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x87 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557f68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557f6a0 FUN_14557f6a0 body=55 status=ok
// SIG undefined FUN_14557f6a0(void)

undefined8 FUN_14557f6a0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x8f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x11],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557f6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557f6e0 FUN_14557f6e0 body=228 status=ok
// SIG undefined FUN_14557f6e0(void)

undefined8 * FUN_14557f6e0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x98) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f7d0 FUN_14557f7d0 body=228 status=ok
// SIG undefined FUN_14557f7d0(void)

undefined8 * FUN_14557f7d0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0xa0) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x13], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 14557f8c0 FUN_14557f8c0 body=166 status=ok
// SIG undefined FUN_14557f8c0(void)

bool FUN_14557f8c0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xa7 < *puVar1) && (puVar1[0x14] != 0)) {
    lVar3 = cef_string_list_alloc();
    if (lVar3 != 0) {
      FUN_14516e860(param_2,lVar3);
    }
    iVar2 = (*(code *)puVar1[0x14])(puVar1,lVar3);
    if (lVar3 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar3,param_2);
      cef_string_list_free(lVar3);
    }
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557f970 FUN_14557f970 body=60 status=ok
// SIG undefined FUN_14557f970(void)

bool FUN_14557f970(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0xaf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x15], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557f9b0 FUN_14557f9b0 body=60 status=ok
// SIG undefined FUN_14557f9b0(void)

bool FUN_14557f9b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0xb7 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x16], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557f9f0 FUN_14557f9f0 body=55 status=ok
// SIG undefined FUN_14557f9f0(void)

undefined8 FUN_14557f9f0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0xbf < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x17],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557fa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557fa30 FUN_14557fa30 body=60 status=ok
// SIG undefined FUN_14557fa30(void)

bool FUN_14557fa30(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((199 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x18], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557fa70 FUN_14557fa70 body=64 status=ok
// SIG undefined FUN_14557fa70(void)

undefined8 * FUN_14557fa70(undefined8 *param_1,ulonglong param_2)

{
  FUN_14557eeb0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14557fb00 FUN_14557fb00 body=48 status=ok
// SIG undefined FUN_14557fb00(void)

longlong FUN_14557fb00(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 14557fb30 FUN_14557fb30 body=40 status=ok
// SIG undefined FUN_14557fb30(void)

int FUN_14557fb30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 14557fb60 FUN_14557fb60 body=105 status=ok
// SIG undefined FUN_14557fb60(void)

undefined8 FUN_14557fb60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_14557fd40(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14557fbd0 FUN_14557fbd0 body=34 status=ok
// SIG undefined FUN_14557fbd0(void)

bool FUN_14557fbd0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 14557fc00 FUN_14557fc00 body=38 status=ok
// SIG undefined FUN_14557fc00(void)

bool FUN_14557fc00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 14557fc30 FUN_14557fc30 body=85 status=ok
// SIG undefined FUN_14557fc30(void)

longlong FUN_14557fc30(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dacde0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dacfa0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 14557fc90 FUN_14557fc90 body=167 status=ok
// SIG undefined FUN_14557fc90(void)

undefined8 * FUN_14557fc90(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dad1b0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dacbf8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dacdb8;
  *param_1 = &PTR__purecall_149dacde0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dacfa0;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dacfc8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dad188;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 14557fd40 FUN_14557fd40 body=124 status=ok
// SIG undefined FUN_14557fd40(void)

void FUN_14557fd40(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dacfc8;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dad188;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dacde0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dacfa0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 14557fdc0 FUN_14557fdc0 body=54 status=ok
// SIG undefined FUN_14557fdc0(void)

bool FUN_14557fdc0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557fe00 FUN_14557fe00 body=54 status=ok
// SIG undefined FUN_14557fe00(void)

bool FUN_14557fe00(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557fe40 FUN_14557fe40 body=49 status=ok
// SIG undefined FUN_14557fe40(void)

undefined8 FUN_14557fe40(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014557fe66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14557fe80 FUN_14557fe80 body=54 status=ok
// SIG undefined FUN_14557fe80(void)

bool FUN_14557fe80(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557fec0 FUN_14557fec0 body=114 status=ok
// SIG undefined FUN_14557fec0(void)

bool FUN_14557fec0(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0x4f < *puVar1) && ((code *)puVar1[9] != (code *)0x0)) && (*(longlong *)(param_3 + 8) != 0)
      ) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    iVar2 = (*(code *)puVar1[9])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557ff40 FUN_14557ff40 body=114 status=ok
// SIG undefined FUN_14557ff40(void)

bool FUN_14557ff40(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0x57 < *puVar1) && ((code *)puVar1[10] != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    iVar2 = (*(code *)puVar1[10])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14557ffc0 FUN_14557ffc0 body=116 status=ok
// SIG undefined FUN_14557ffc0(void)

bool FUN_14557ffc0(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((*puVar1 < 0x60) || ((code *)puVar1[0xb] == (code *)0x0)) ||
      (lVar2 = *(longlong *)(param_3 + 8), lVar2 == 0)) || (*(longlong *)(lVar2 + 8) == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = (*(code *)puVar1[0xb])(puVar1,param_2,lVar2,param_4);
    bVar4 = iVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 145580040 FUN_145580040 body=128 status=ok
// SIG undefined FUN_145580040(void)

undefined8 * FUN_145580040(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((*puVar1 < 0x68) || ((code *)puVar1[0xc] == (code *)0x0)) ||
      (*(longlong *)(param_4 + 8) == 0)) || (*(longlong *)(*(longlong *)(param_4 + 8) + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    uVar2 = (*(code *)puVar1[0xc])(puVar1,param_3);
    FUN_1453e7440(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 1455800c0 FUN_1455800c0 body=72 status=ok
// SIG undefined FUN_1455800c0(void)

bool FUN_1455800c0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x6f < *puVar1) && ((code *)puVar1[0xd] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0xd])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580110 FUN_145580110 body=116 status=ok
// SIG undefined FUN_145580110(void)

bool FUN_145580110(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((*puVar1 < 0x78) || ((code *)puVar1[0xe] == (code *)0x0)) ||
      (*(longlong *)(param_4 + 8) == 0)) || (*(longlong *)(*(longlong *)(param_4 + 8) + 8) == 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0xe])(puVar1,param_2,param_3);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 145580190 FUN_145580190 body=119 status=ok
// SIG undefined FUN_145580190(void)

bool FUN_145580190(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((*puVar1 < 0x80) || ((code *)puVar1[0xf] == (code *)0x0)) ||
      (*(longlong *)(param_4 + 8) == 0)) || (*(longlong *)(*(longlong *)(param_4 + 8) + 8) == 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0xf])(puVar1,param_2,param_3);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 145580210 FUN_145580210 body=131 status=ok
// SIG undefined FUN_145580210(void)

bool FUN_145580210(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((*puVar1 < 0x88) || ((code *)puVar1[0x10] == (code *)0x0)) ||
      (lVar2 = *(longlong *)(param_4 + 8), lVar2 == 0)) || (*(longlong *)(lVar2 + 8) == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = (*(code *)puVar1[0x10])(puVar1,param_2,param_3,lVar2,param_5);
    bVar4 = iVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 1455802a0 FUN_1455802a0 body=143 status=ok
// SIG undefined FUN_1455802a0(void)

undefined8 *
FUN_1455802a0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((*puVar1 < 0x90) || ((code *)puVar1[0x11] == (code *)0x0)) ||
      (lVar2 = *(longlong *)(param_5 + 8), lVar2 == 0)) || (*(longlong *)(lVar2 + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    uVar3 = (*(code *)puVar1[0x11])(puVar1,param_3,param_4,lVar2,uVar4);
    FUN_1453e7440(param_2,uVar3);
  }
  return param_2;
}



// FUNCTION 145580330 FUN_145580330 body=78 status=ok
// SIG undefined FUN_145580330(void)

bool FUN_145580330(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x97 < *puVar1) && ((code *)puVar1[0x12] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x12])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580380 FUN_145580380 body=78 status=ok
// SIG undefined FUN_145580380(void)

bool FUN_145580380(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x9f < *puVar1) && ((code *)puVar1[0x13] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x13])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455803d0 FUN_1455803d0 body=73 status=ok
// SIG undefined FUN_1455803d0(void)

undefined8 FUN_1455803d0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xa7 < *puVar1) && ((code *)puVar1[0x14] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145580409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x14])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145580420 FUN_145580420 body=73 status=ok
// SIG undefined FUN_145580420(void)

undefined8 FUN_145580420(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xaf < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145580459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x15])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145580470 FUN_145580470 body=99 status=ok
// SIG undefined FUN_145580470(void)

bool FUN_145580470(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xb7 < *puVar1) && ((code *)puVar1[0x16] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x16])(puVar1,param_2,param_3);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455804e0 FUN_1455804e0 body=243 status=ok
// SIG undefined FUN_1455804e0(void)

undefined8 * FUN_1455804e0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xc0) || ((code *)puVar1[0x17] == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*(code *)puVar1[0x17])(puVar1,param_3);
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1455805e0 FUN_1455805e0 body=243 status=ok
// SIG undefined FUN_1455805e0(void)

undefined8 * FUN_1455805e0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 200) || ((code *)puVar1[0x18] == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*(code *)puVar1[0x18])(puVar1,param_3);
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1455806e0 FUN_1455806e0 body=120 status=ok
// SIG undefined FUN_1455806e0(void)

bool FUN_1455806e0(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xcf < *puVar1) && ((code *)puVar1[0x19] != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    iVar2 = (*(code *)puVar1[0x19])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145580760 FUN_145580760 body=120 status=ok
// SIG undefined FUN_145580760(void)

bool FUN_145580760(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xd7 < *puVar1) && ((code *)puVar1[0x1a] != (code *)0x0)) &&
      (*(longlong *)(param_3 + 8) != 0)) && (*(longlong *)(*(longlong *)(param_3 + 8) + 8) != 0)) {
    iVar2 = (*(code *)puVar1[0x1a])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1455807e0 FUN_1455807e0 body=73 status=ok
// SIG undefined FUN_1455807e0(void)

undefined8 FUN_1455807e0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xdf < *puVar1) && ((code *)puVar1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145580819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x1b])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145580830 FUN_145580830 body=73 status=ok
// SIG undefined FUN_145580830(void)

undefined8 FUN_145580830(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xe7 < *puVar1) && ((code *)puVar1[0x1c] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145580869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[0x1c])(puVar1,param_2);
    return uVar2;
  }
  return 0;
}


