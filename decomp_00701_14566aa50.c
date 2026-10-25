// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14566aa50 FUN_14566aa50 body=1749 status=ok
// SIG undefined FUN_14566aa50(void)

void FUN_14566aa50(longlong param_1,byte param_2,longlong param_3,longlong param_4,uint *param_5,
                  ulonglong *param_6,uint *param_7,uint *param_8,undefined4 param_9,
                  undefined4 param_10,undefined4 *param_11,longlong param_12)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  char cVar20;
  uint uVar21;
  undefined1 auStack_528 [32];
  ulonglong *local_508;
  undefined8 *local_500;
  uint *local_4f8;
  ulonglong *local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4d8;
  int *local_4d0;
  longlong *local_4c8;
  undefined8 *local_4c0;
  byte local_4b8;
  uint local_4b4;
  uint local_4b0;
  uint local_4ac;
  int local_4a8;
  uint local_4a4;
  int local_49c;
  undefined8 local_498;
  longlong local_490;
  uint local_488;
  uint local_484;
  longlong local_480;
  longlong local_478;
  ulonglong local_470;
  longlong local_468;
  uint *local_460;
  ulonglong *local_458;
  undefined4 *local_450;
  ulonglong local_448 [2];
  int local_438 [4];
  undefined8 local_428;
  undefined8 uStack_420;
  int local_418 [16];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  ulonglong local_398 [8];
  int local_358 [64];
  undefined8 local_258 [32];
  ulonglong local_158 [32];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_528;
  lVar9 = 0;
  uVar8 = 0;
  local_460 = param_5;
  local_458 = param_6;
  local_450 = param_11;
  local_480 = param_12;
  local_484 = (uint)(*(short **)(param_4 + 0x78))[1];
  local_488 = (uint)**(short **)(param_4 + 0x78);
  bVar3 = (&DAT_149d54970)[param_2];
  local_498 = (ulonglong)(local_488 * local_488 >> 6);
  local_4a4 = (uint)bVar3;
  local_448[0] = (ulonglong)(local_484 * local_484 >> 6);
  local_4ac = (uint)(byte)(&DAT_149d54960)[param_2];
  cVar20 = (&DAT_149d54960)[param_2] + bVar3;
  local_4a8 = 1 << (cVar20 - 2U & 0x1f);
  local_4b8 = param_2;
  local_490 = param_4;
  local_478 = param_1;
  local_468 = param_3;
  memset(local_358,0,0x100);
  memset(local_158,0,0x100);
  memset(local_258,0,0x100);
  local_4c0 = local_258;
  lVar18 = 4;
  local_4c8 = (longlong *)local_158;
  local_4d0 = local_358;
  local_508._0_4_ = 4 << ((byte)local_4ac & 0x1f);
  local_4d8 = *(undefined4 *)(local_478 + 0x2e4d0);
  local_4e0 = *(undefined4 *)(local_478 + 0x2a068);
  local_4f0 = (ulonglong *)&local_4b4;
  local_4e8 = 8;
  local_4f8 = &local_4b0;
  local_500 = (undefined8 *)CONCAT44(local_500._4_4_,4 << (bVar3 & 0x1f));
  FUN_14566a240(*(undefined8 *)(param_3 + 0x2018),*(undefined4 *)(param_3 + 0x2020),
                *(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x18));
  lVar17 = local_478;
  uVar4 = local_4b0;
  uVar14 = local_4b4 * local_4b4 >> (cVar20 + 4U & 0x1f);
  uVar21 = uVar14 - local_4b0;
  if (uVar14 < local_4b0) {
    uVar21 = local_4b0 - uVar14;
  }
  *param_7 = uVar21;
  *param_8 = local_4b0;
  if ((*(int *)(local_478 + 0x2e558) < 8) ||
     (4 < (int)((local_4b4 ^ (int)local_4b4 >> 0x1f) - ((int)local_4b4 >> 0x1f)) >>
          ((char)local_4a4 + (char)local_4ac & 0x1fU))) {
    lVar18 = 1;
  }
  else if ((0x280 < *(int *)(local_478 + 0x2a048)) || (0x1e0 < *(int *)(local_478 + 0x2a04c))) {
    lVar18 = 2;
  }
  puVar19 = (undefined8 *)(lVar18 * local_448[0]);
  uVar14 = 0;
  local_4f0 = (ulonglong *)((ulonglong)local_4f0 & 0xffffffff00000000);
  local_4f8 = (uint *)CONCAT44(local_4f8._4_4_,*(undefined4 *)(param_3 + 0x6480));
  local_508 = (ulonglong *)CONCAT44(local_508._4_4_,local_4b0);
  lVar18 = local_490;
  local_500 = puVar19;
  bVar3 = FUN_14566a750(local_478,local_4b8,local_490,uVar21);
  if (bVar3 == 0) {
    bVar3 = 1;
  }
  *(byte *)(**(longlong **)(lVar18 + 0x1c0) + 2) = bVar3;
  if (((*(int *)(lVar17 + 0x2e69c) == 1) && (*(int *)(local_468 + 0x141f0) != 0)) &&
     (*(int *)(local_468 + 0x6480) == 0)) {
    local_498 = local_498 << 1;
  }
  local_4b0 = 1;
  local_4b4 = 1;
  iVar6 = local_4a8 >> 4;
  local_418[0] = 0;
  local_418[1] = 0;
  local_418[2] = 0;
  local_418[3] = 0;
  local_418[4] = 0;
  local_418[5] = 0;
  local_418[6] = 0;
  local_418[7] = 0;
  local_418[8] = 0;
  local_418[9] = 0;
  local_418[10] = 0;
  local_418[0xb] = 0;
  local_418[0xc] = 0;
  local_418[0xd] = 0;
  local_418[0xe] = 0;
  local_418[0xf] = 0;
  local_398[0] = 0;
  local_398[1] = 0;
  local_398[2] = 0;
  local_398[3] = 0;
  local_398[4] = 0;
  local_398[5] = 0;
  local_398[6] = 0;
  local_398[7] = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_438[0] = 0;
  local_438[1] = 0;
  local_438[2] = 0;
  local_438[3] = 0;
  local_448[0] = 0;
  local_448[1] = 0;
  local_428 = 0;
  uStack_420 = 0;
  if (bVar3 == 1) {
    piVar13 = local_358;
    puVar10 = local_258;
  }
  else {
    piVar13 = local_418;
    puVar10 = &local_3d8;
    local_4a8 = local_4a8 >> 2;
    if (bVar3 != 2) {
      puVar10 = &local_428;
      piVar13 = local_438;
      local_4a8 = iVar6;
    }
    if (1 < bVar3) {
      local_4f0 = local_398;
      local_4f8 = (uint *)local_418;
      local_500 = &local_3d8;
      local_508 = local_158;
      FUN_14566a530(local_4ac,local_4a4,1,local_358);
    }
    if (bVar3 == 3) {
      local_4f0 = local_448;
      local_4f8 = (uint *)local_438;
      local_508 = local_398;
      local_500 = &local_428;
      FUN_14566a530(local_4ac,local_4a4,2,local_418);
    }
  }
  lVar17 = local_490;
  *(undefined1 *)(local_468 + 0x1415c) = 0;
  lVar18 = lVar9;
  if (0 < local_4a8) {
    do {
      if ((puVar19 <= (undefined8 *)(ulonglong)*(uint *)((longlong)puVar10 + lVar18 * 4)) &&
         (uVar16 = uVar14, uVar21 != 0)) break;
      lVar18 = lVar18 + 1;
      uVar16 = local_4b0;
    } while (lVar18 < local_4a8);
    lVar11 = (longlong)puVar10 - (longlong)piVar13;
    lVar18 = lVar9;
    do {
      if ((local_498 <= (uint)(*piVar13 - *(int *)(lVar11 + (longlong)piVar13))) &&
         (uVar4 != uVar21)) {
        local_4b4 = 0;
        break;
      }
      lVar18 = lVar18 + 1;
      piVar13 = piVar13 + 1;
    } while (lVar18 < local_4a8);
    if (uVar16 == 0) {
      uVar14 = uVar8;
      if (local_4b4 != 0) {
        uVar14 = 1;
      }
      goto LAB_14566aeb1;
    }
  }
  *(undefined1 *)(local_468 + 0x1415c) = 2;
  if (local_4b4 != 0) {
    *(undefined1 *)(local_468 + 0x1415c) = 1;
  }
LAB_14566aeb1:
  iVar6 = 1;
  if (*(char *)(local_468 + 0x1415c) == '\x01') {
    puVar19 = (undefined8 *)(local_468 + 0x4098);
    *local_460 = 0;
    *local_458 = (ulonglong)(uVar4 << 4);
    piVar13 = (int *)(local_490 + 0x94);
    local_498 = 0;
    local_480 = local_480 - (longlong)local_448;
    do {
      local_508 = (ulonglong *)CONCAT44(local_508._4_4_,iVar6);
      uVar7 = (ulonglong)
              (byte)(&DAT_149d54b48)
                    [(longlong)*piVar13 + ((longlong)piVar13[-1] + (ulonglong)local_4b8 * 2) * 2];
      iVar15 = (int)**(short **)(piVar13 + 0x1b);
      iVar12 = (int)(*(short **)(piVar13 + 0x1b))[1];
      cVar20 = (((&DAT_149d54970)
                 [(byte)(&DAT_149d54af4)
                        [(byte)(&DAT_149d54b80)
                               [(longlong)*piVar13 +
                                ((longlong)piVar13[-1] +
                                ((ulonglong)((byte *)**(undefined8 **)(lVar17 + 0x1c0))[2] +
                                (ulonglong)*(byte *)**(undefined8 **)(lVar17 + 0x1c0) * 4) * 2) * 2]
                        ]] - (&DAT_149d54970)[uVar7]) - (&DAT_149d54960)[uVar7]) +
               (&DAT_149d54960)
               [(byte)(&DAT_149d54af4)
                      [(byte)(&DAT_149d54b80)
                             [(longlong)*piVar13 +
                              ((longlong)piVar13[-1] +
                              ((ulonglong)((byte *)**(undefined8 **)(lVar17 + 0x1c0))[2] +
                              (ulonglong)*(byte *)**(undefined8 **)(lVar17 + 0x1c0) * 4) * 2) * 2]]]
      ;
      local_4b0 = iVar15 * iVar15 >> (cVar20 + 6U & 0x1f);
      FUN_145479000(lVar17,param_9,param_10,(ulonglong)local_4b8);
      *(undefined4 *)((longlong)local_448 + local_480 + lVar9) = 1;
      local_508 = (ulonglong *)((longlong)local_448 + (longlong)(iVar6 + -1) * 4);
      uVar4 = (**(code **)(local_478 + 0xb4a58 + uVar7 * 0x30))
                        (*puVar19,*(undefined4 *)(puVar19 + 1),*(undefined8 *)(piVar13 + 1),
                         piVar13[3]);
      lVar17 = local_490;
      if ((((uint)(iVar12 * iVar12 >> (cVar20 + 6U & 0x1f)) <= uVar4) && (uVar4 != 0)) ||
         ((local_4b0 <= *(uint *)((longlong)local_448 + lVar9) - uVar4 &&
          (*(uint *)((longlong)local_448 + lVar9) != uVar4)))) break;
      *(undefined4 *)((longlong)&local_498 + lVar9) = 1;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 4;
      puVar19 = puVar19 + 0x410;
      piVar13 = piVar13 + 0x22;
    } while (iVar6 < 3);
    if ((local_498._4_4_ & (uint)local_498) != 0) {
      *local_450 = 1;
    }
  }
  else {
    uVar7 = (ulonglong)local_4b8;
    if (uVar14 == 0) {
      local_508 = &local_470;
      FUN_14561b2d0(uVar4 - uVar21,(&DAT_149d549e0)[uVar7],
                    local_488 >> ((char)*(undefined4 *)(local_490 + 0x270) - 5U & 0x1f),&local_49c);
      uVar8 = local_49c >> 1;
      uVar5 = local_470 * 8;
    }
    else {
      uVar5 = (ulonglong)((uVar4 - uVar21) * 0x10);
    }
    puVar2 = local_458;
    puVar1 = local_460;
    *local_460 = uVar8;
    *local_458 = uVar5;
    local_508 = &local_470;
    FUN_14561b2d0(uVar21,(&DAT_149d549e0)[uVar7],
                  local_484 >> ((char)*(undefined4 *)(lVar17 + 0x270) - 5U & 0x1f),&local_49c);
    *puVar1 = *puVar1 + local_49c;
    *puVar2 = *puVar2 + local_470 * 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_528);
}



// FUNCTION 14566b140 FUN_14566b140 body=644 status=ok
// SIG undefined FUN_14566b140(void)

void FUN_14566b140(longlong param_1,byte param_2,longlong param_3,longlong param_4,int *param_5,
                  ulonglong *param_6,uint *param_7,uint *param_8,undefined4 param_9)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  
  sVar1 = **(short **)(param_4 + 0x78);
  sVar2 = (*(short **)(param_4 + 0x78))[1];
  uVar9 = (ulonglong)param_2;
  lVar14 = *(longlong *)(param_3 + 0x2068) >> 6;
  lVar10 = *(longlong *)(param_3 + 0x2070) >> 6;
  local_res20 = param_4;
  uVar5 = (**(code **)(param_1 + 0xb4a58 + uVar9 * 0x30))
                    (*(undefined8 *)(param_3 + 0x2018),*(undefined4 *)(param_3 + 0x2020),
                     *(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x18),local_res8);
  *param_7 = uVar5;
  *param_8 = local_res8[0];
  lVar12 = local_res20;
  uVar4 = FUN_14566a750(param_1,uVar9,local_res20,uVar5,local_res8[0],lVar10,
                        *(undefined4 *)(param_3 + 0x6480),param_9);
  lVar3 = local_res20;
  *(undefined1 *)(**(longlong **)(lVar12 + 0x1c0) + 2) = uVar4;
  bVar7 = (((&DAT_149d54970)[uVar9] -
           (&DAT_149d54970)[(byte)(&DAT_149d54af4)[*(byte *)(**(longlong **)(lVar12 + 0x1c0) + 2)]])
          - (&DAT_149d54960)[(byte)(&DAT_149d54af4)[*(byte *)(**(longlong **)(lVar12 + 0x1c0) + 2)]]
          ) + (&DAT_149d54960)[uVar9];
  *(undefined1 *)(param_3 + 0x1415c) = 0;
  uVar13 = uVar5 >> (bVar7 & 0x1f);
  uVar11 = local_res8[0] >> (bVar7 & 0x1f);
  if (((longlong)(ulonglong)uVar13 < lVar10) || (uVar5 == 0)) {
    *(undefined1 *)(param_3 + 0x1415c) = 2;
    if (((longlong)(ulonglong)(uVar11 - uVar13) < lVar14) || (local_res8[0] == uVar5)) {
      *(undefined1 *)(param_3 + 0x1415c) = 1;
      *param_5 = 0;
      *param_6 = (ulonglong)(local_res8[0] << 4);
      return;
    }
  }
  else if (((longlong)(ulonglong)(uVar11 - uVar13) < lVar14) || (local_res8[0] == uVar5)) {
    iVar8 = 0;
    uVar6 = (ulonglong)((local_res8[0] - uVar5) * 0x10);
    goto LAB_14566b32f;
  }
  FUN_14561b2d0(local_res8[0] - uVar5,(&DAT_149d549e0)[uVar9],
                (uint)(int)sVar1 >> ((char)*(undefined4 *)(local_res20 + 0x270) - 5U & 0x1f),
                local_res10,&local_res18);
  iVar8 = local_res10[0] >> 1;
  uVar6 = local_res18 * 8;
LAB_14566b32f:
  *param_5 = iVar8;
  *param_6 = uVar6;
  FUN_14561b2d0(uVar5,(&DAT_149d549e0)[uVar9],
                (uint)(int)sVar2 >> ((char)*(undefined4 *)(lVar3 + 0x270) - 5U & 0x1f),local_res10,
                &local_res18);
  *param_5 = *param_5 + local_res10[0];
  *param_6 = *param_6 + local_res18 * 0x10;
  return;
}



// FUNCTION 14566b3d0 FUN_14566b3d0 body=1469 status=ok
// SIG undefined FUN_14566b3d0(void)

void FUN_14566b3d0(longlong param_1,longlong param_2,int *param_3,uint *param_4,longlong *param_5,
                  byte param_6,uint param_7,int param_8,undefined4 param_9)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  int local_84;
  int local_78;
  int local_74;
  int local_70;
  
  bVar6 = param_6;
  iVar26 = 0;
  bVar2 = (&DAT_149d549c0)[param_6];
  uVar16 = (uint)bVar2;
  uVar17 = (uint)bVar2;
  iVar24 = 1 << ((byte)param_7 * '\x02' & 0x1f);
  local_78 = 0;
  local_84 = 0;
  iVar7 = 1 << ((byte)param_7 & 0x1f);
  iVar14 = (uint)(byte)(&DAT_149d549b0)[param_6] * 4;
  iVar21 = 0;
  if (*(int *)(param_2 + 0x636c) < 0) {
    iVar21 = *(int *)(param_2 + 0x636c) >> 5;
  }
  iVar10 = (uint)bVar2 * 4;
  iVar22 = 0;
  if (*(int *)(param_2 + 0x6374) < 0) {
    iVar22 = *(int *)(param_2 + 0x6374) >> 5;
  }
  iVar22 = iVar22 + (uint)(byte)(&DAT_149d549b0)[param_6];
  _param_6 = uVar17;
  if (((*(int *)(param_1 + 0xb48f0) == 0) || (*(int *)(param_1 + 0x2a2e4) == 0)) ||
     ((8 < param_6 && ((*(int *)(param_1 + 0xb64dc) == 0 || (*(int *)(param_1 + 0xb64e4) < 1)))))) {
    if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
      (*DAT_14c7fbd98)(iVar14,(uint)bVar2 * 4,param_2,iVar10,*(undefined8 *)(param_2 + 0x2018),
                       (longlong)*(int *)(param_2 + 0x2020),*(undefined8 *)(param_2 + 0x6190),
                       (longlong)*(int *)(param_2 + 0x6198));
    }
    else {
      (*DAT_14c7fbc08)(iVar14,iVar10,param_2,iVar10,*(undefined8 *)(param_2 + 0x2018),
                       (longlong)*(int *)(param_2 + 0x2020),*(undefined8 *)(param_2 + 0x6190),
                       (longlong)*(int *)(param_2 + 0x6198),*(undefined4 *)(param_2 + 0x63f0));
    }
    *param_4 = 1;
    local_74 = 0;
    if (0 < iVar22) {
      iVar14 = (uint)bVar2 * 4;
      local_70 = 0;
      lVar20 = 0;
      iVar11 = iVar14 * iVar7;
      do {
        iVar15 = 0;
        if (uVar16 != 0) {
          iVar18 = iVar26 << 4;
          uVar12 = _param_6;
          do {
            if (iVar15 < (int)(iVar21 + uVar17)) {
              uVar8 = (ulonglong)(byte)param_7;
              lVar9 = (longlong)iVar18 * 4;
              lVar4 = *(longlong *)(param_2 + 0x2000);
              lVar25 = *(longlong *)(param_2 + 0x2008) + lVar9;
              lVar5 = *(longlong *)(param_2 + 0x6180);
              psVar1 = (short *)(*(longlong *)(param_2 + 0x2010) + lVar20 * 2);
              lVar19 = param_2 + (longlong)((local_70 + iVar15) * 4) * 2;
              if ((param_7 & 0xff) == 1) {
                (*DAT_14c7fb9f0)(lVar19,iVar14,lVar25);
                uVar13 = 0x40;
              }
              else if ((param_7 & 0xff) == 2) {
                (*DAT_14c7fb9e0)(lVar19,iVar14,lVar25);
                uVar13 = 0x100;
              }
              else {
                (**(code **)(param_2 + 0x14210))(lVar19,lVar25,iVar14);
                uVar13 = 0x10;
              }
              (*DAT_14c7fe6a8)(lVar25,uVar13,param_2 + 0x2030,*(undefined8 *)(param_2 + 0x2040),
                               lVar4 + lVar9,lVar5 + lVar9,*(undefined8 *)(param_2 + 0x61f8),psVar1,
                               (&PTR_DAT_149d54c70)[uVar8 * 3],(&PTR_DAT_149d54c78)[uVar8 * 3]);
              *param_4 = *param_4 & (uint)(*psVar1 == 0);
              local_84 = local_84 + 1;
              iVar26 = local_78;
              iVar14 = iVar10;
              uVar12 = _param_6;
            }
            iVar26 = iVar26 + iVar24;
            iVar18 = iVar18 + iVar24 * 0x10;
            lVar20 = lVar20 + iVar24;
            iVar15 = iVar15 + iVar7;
            uVar16 = _param_6;
            local_78 = iVar26;
          } while (iVar15 < (int)uVar12);
        }
        local_74 = local_74 + iVar7;
        local_70 = local_70 + iVar11;
      } while (local_74 < iVar22);
    }
    *param_3 = 0;
    if (*param_5 < 0x7fffffffffffffff) {
      lVar20 = (*param_5 << 6) >> 2;
      *param_5 = lVar20;
      if (*param_4 != 0) {
        *(longlong *)(param_3 + 2) = lVar20;
        return;
      }
    }
    iVar26 = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_7 = 0;
    if (0 < iVar22) {
      lVar20 = 0;
      do {
        iVar14 = 0;
        if (uVar16 != 0) {
          lVar19 = lVar20 << 6;
          iVar10 = iVar26 << 4;
          uVar12 = _param_6;
          do {
            if (iVar14 < (int)(iVar21 + uVar17)) {
              lVar9 = *(longlong *)(param_2 + 0x6180);
              puVar23 = (uint *)(*(longlong *)(param_2 + 0x2000) + lVar19);
              lVar4 = *(longlong *)(param_2 + 0x2008);
              uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x2010) + lVar20 * 2);
              if (uVar3 == 1) {
                uVar16 = *puVar23;
                uVar12 = (int)uVar16 >> 0x1f;
                iVar11 = (uVar16 ^ uVar12) - uVar12;
LAB_14566b8e6:
                *param_3 = *param_3 + iVar11;
              }
              else if (1 < uVar3) {
                iVar11 = (*DAT_14c7fbcb8)(puVar23,iVar24 << 4);
                goto LAB_14566b8e6;
              }
              lVar9 = (*DAT_14c7fe668)(lVar4 + (longlong)iVar10 * 4,lVar9 + (longlong)iVar10 * 4,
                                       iVar24 << 4);
              *(longlong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + (lVar9 >> 2);
              uVar12 = _param_6;
            }
            iVar26 = iVar26 + iVar24;
            iVar10 = iVar10 + iVar24 * 0x10;
            lVar20 = lVar20 + iVar24;
            lVar19 = lVar19 + (longlong)iVar24 * 0x40;
            iVar14 = iVar14 + iVar7;
            uVar16 = _param_6;
          } while (iVar14 < (int)uVar12);
        }
        param_7 = param_7 + iVar7;
      } while ((int)param_7 < iVar22);
    }
    *param_3 = (local_84 + *param_3 * 4) * 0x200;
  }
  else {
    if (param_8 == 0) {
      FUN_14566b140(param_1,bVar6,param_2,param_2 + 0x6180,param_3,param_3 + 2,&param_6,&param_7,
                    param_9);
    }
    *param_5 = 0x7fffffff;
    *param_4 = 0;
  }
  return;
}



// FUNCTION 14566b990 FUN_14566b990 body=565 status=ok
// SIG undefined FUN_14566b990(void)

void FUN_14566b990(longlong param_1,byte param_2,longlong param_3,longlong param_4,int *param_5,
                  uint *param_6,uint *param_7,int param_8,int param_9)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong local_50 [2];
  
  piVar3 = param_5;
  lVar5 = (longlong)param_8;
  uVar6 = (ulonglong)*param_6;
  uVar8 = (ulonglong)*param_7;
  *param_5 = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  if (lVar5 <= param_9) {
    puVar10 = (undefined8 *)(lVar5 * 0x2080 + 0x2018 + param_3);
    puVar9 = (undefined4 *)(lVar5 * 0x88 + 0x18 + param_4);
    do {
      uVar7 = (ulonglong)param_2;
      sVar1 = **(short **)(puVar9 + 0x18);
      sVar2 = (*(short **)(puVar9 + 0x18))[1];
      if (*(char *)(param_3 + 0x141d7 + lVar5) != '\0') {
        uVar4 = (**(code **)(param_1 + 0xb4a58 + uVar7 * 0x30))
                          (*puVar10,*(undefined4 *)(puVar10 + 1),*(undefined8 *)(puVar9 + -2),
                           *puVar9,&param_5);
        uVar8 = uVar8 + (uint)param_5;
        uVar6 = uVar6 + uVar4;
        FUN_14561b2d0((uint)param_5 - uVar4,(&DAT_149d549e0)[uVar7],
                      (uint)(int)sVar1 >> ((char)*(undefined4 *)(param_4 + 0x270) - 5U & 0x1f),
                      &param_8,local_50);
        *piVar3 = *piVar3 + (param_8 >> 1);
        *(longlong *)(piVar3 + 2) = *(longlong *)(piVar3 + 2) + local_50[0] * 8;
        FUN_14561b2d0((ulonglong)uVar4,(&DAT_149d549e0)[uVar7],
                      (uint)(int)sVar2 >> ((char)*(undefined4 *)(param_4 + 0x270) - 5U & 0x1f),
                      &param_8,local_50);
        *piVar3 = *piVar3 + param_8;
        *(longlong *)(piVar3 + 2) = *(longlong *)(piVar3 + 2) + local_50[0] * 0x10;
      }
      lVar5 = lVar5 + 1;
      puVar10 = puVar10 + 0x410;
      puVar9 = puVar9 + 0x22;
    } while (lVar5 <= param_9);
  }
  uVar4 = (uint)uVar6;
  if (0xffffffff < uVar6) {
    uVar4 = 0xffffffff;
  }
  *param_6 = uVar4;
  uVar4 = (uint)uVar8;
  if (0xffffffff < uVar8) {
    uVar4 = 0xffffffff;
  }
  *param_7 = uVar4;
  return;
}



// FUNCTION 14566bbd0 FUN_14566bbd0 body=798 status=ok
// SIG undefined FUN_14566bbd0(void)

void FUN_14566bbd0(longlong param_1,longlong param_2,byte param_3,undefined4 param_4,
                  undefined4 param_5,char param_6,byte param_7,uint param_8,int param_9,
                  longlong param_10,undefined4 *param_11,ulonglong *param_12,int *param_13)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  
  iVar10 = param_9;
  uVar17 = (ulonglong)param_3;
  lVar15 = (longlong)param_6;
  bVar4 = (&DAT_149d54b48)
          [(longlong)*(int *)(param_2 + 0x6214) +
           ((longlong)*(int *)(param_2 + 0x6210) + uVar17 * 2) * 2];
  if ((*(int *)(param_1 + 0xb64dc) == 0) || (param_6 != '\x02')) {
    if ((0x80 < (ushort)(*(short *)(**(longlong **)(param_2 + 0x6340) + 0xc) + 0x40U)) ||
       (uVar14 = 1, 0x80 < (ushort)(*(short *)(**(longlong **)(param_2 + 0x6340) + 0xe) + 0x40U))) {
      uVar14 = 0;
    }
    if ((*(int *)(param_2 + 0x6944) < 1) || (uVar14 != 1)) {
      uVar14 = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)(param_2 + 0x6944) << 4;
      iVar12 = (int)(*(short **)(param_2 + 0x61f8))[1];
      uVar14 = 36000;
      if (uVar11 < 36000) {
        uVar14 = uVar11;
      }
      iVar1 = *(int *)(param_2 + 0x63f0) * 2 + -0x10;
      uVar11 = iVar12 * iVar12 >> 3;
      uVar16 = *(uint *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8;
      bVar5 = (byte)iVar1;
      if ((uVar16 != 0) && (0 < iVar1)) {
        uVar11 = uVar11 + (1 << (bVar5 - 1 & 0x1f)) >> (bVar5 & 0x1f);
      }
      if (((int)uVar14 <= (int)uVar11) && (uVar14 = uVar11, 36000 < (int)uVar11)) {
        uVar14 = 36000;
      }
      iVar12 = (int)**(short **)(param_2 + 0x61f8);
      uVar14 = uVar14 >> (('\b' - (&DAT_149d54970)[uVar17]) - (&DAT_149d54960)[uVar17] & 0x1fU);
      uVar11 = iVar12 * iVar12 >> 6;
      if ((uVar16 != 0) && (0 < iVar1)) {
        uVar11 = uVar11 + (1 << (bVar5 - 1 & 0x1f)) >> (bVar5 & 0x1f);
      }
    }
    if ((param_8 <= uVar14) && (param_9 - param_8 <= uVar11)) {
      uVar13 = 0;
      uVar16 = 0;
      if (*(char *)(param_2 + 0x141da) == '\0') {
        uVar13 = uVar14;
        uVar16 = uVar11;
      }
      if ((*param_13 == 0) || (param_13[1] == 0)) {
        puVar2 = (undefined8 *)(param_10 + 0x10 + lVar15 * 0x30);
        uVar9 = puVar2[1];
        *(undefined8 *)(param_2 + 0x6228) = *puVar2;
        *(undefined8 *)(param_2 + 0x6230) = uVar9;
        puVar3 = (undefined4 *)(param_10 + 0x20 + lVar15 * 0x30);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        *(undefined4 *)(param_2 + 0x62b0) = *puVar3;
        *(undefined4 *)(param_2 + 0x62b4) = uVar6;
        *(undefined4 *)(param_2 + 0x62b8) = uVar7;
        *(undefined4 *)(param_2 + 0x62bc) = uVar8;
        FUN_145479030(param_2 + 0x6180,param_4,param_5,uVar17);
      }
      iVar12 = (**(code **)(param_1 + 0xb4a58 + (ulonglong)bVar4 * 0x30))
                         (*(undefined8 *)(param_2 + 0x4098),*(undefined4 *)(param_2 + 0x40a0),
                          *(undefined8 *)(param_2 + 0x6218),*(undefined4 *)(param_2 + 0x6220),
                          &param_8);
      if (((((uint)(iVar12 * 4) <= uVar13) && (param_8 - iVar12 <= uVar16)) &&
          (iVar12 = (**(code **)(param_1 + 0xb4a58 + (ulonglong)bVar4 * 0x30))
                              (*(undefined8 *)(param_2 + 0x6118),*(undefined4 *)(param_2 + 0x6120),
                               *(undefined8 *)(param_2 + 0x62a0),*(undefined4 *)(param_2 + 0x62a8),
                               &param_9), (uint)(iVar12 * 4) <= uVar13)) &&
         ((uint)(param_9 - iVar12) <= uVar16)) {
        *(undefined4 *)(param_2 + 0x6940) = 1;
        *param_11 = *(undefined4 *)
                     (param_1 + 0xcbeb0 +
                     ((ulonglong)param_7 +
                     (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x6410) + 0x20 + lVar15) * 4) * 4)
        ;
        *param_12 = (ulonglong)(uint)(iVar10 << 4);
      }
    }
  }
  return;
}



// FUNCTION 14566bef0 FUN_14566bef0 body=567 status=ok
// SIG undefined FUN_14566bef0(void)

void FUN_14566bef0(int param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                  byte param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int local_50 [2];
  longlong local_48;
  
  puVar10 = param_7;
  bVar11 = param_6;
  lVar5 = param_7[1];
  uVar3 = (&DAT_149d54af4)[param_6];
  uVar6 = *param_7;
  lVar12 = (longlong)param_1 * 0x2080 + lVar5;
  lVar1 = lVar5 + 0x6180;
  lVar7 = *(longlong *)(lVar12 + 0x2018);
  _param_6 = *(int *)(lVar12 + 0x2020);
  lVar13 = (longlong)param_1 * 0x88 + lVar1;
  lVar8 = *(longlong *)(lVar13 + 0x10);
  iVar4 = *(int *)(lVar13 + 0x18);
  *(longlong *)(lVar12 + 0x2018) =
       lVar7 + ((longlong)_param_6 * (longlong)param_3 + (longlong)param_4) * 4;
  lVar2 = lVar8 + ((longlong)iVar4 * (longlong)param_3 + (longlong)param_4) * 4;
  *(longlong *)(lVar13 + 0x10) = lVar2;
  lVar14 = lVar2;
  if (*(int *)(lVar5 + 0x14150) != 0) {
    lVar14 = *(longlong *)(lVar12 + 0x2018);
  }
  iVar9 = iVar4;
  if (*(int *)(lVar5 + 0x14150) != 0) {
    iVar9 = _param_6;
  }
  FUN_145477a70(lVar1,(&DAT_149d54960)[(byte)param_5],bVar11,*(undefined1 *)(param_7 + 2),lVar14,
                iVar9,lVar2,iVar4,param_4,param_3,param_1);
  if (param_1 == 0) {
    param_7 = (undefined8 *)0x7fffffffffffffff;
    if (1 < bVar11) {
      bVar11 = 2;
    }
    FUN_14566b3d0(uVar6,lVar5,local_50,(longlong)puVar10 + 0x14,&param_7,uVar3,bVar11,0,1);
  }
  else {
    param_5 = 0;
    _param_6 = 0;
    FUN_14566b990(uVar6,uVar3,lVar5,lVar1,local_50,&param_5,&param_6,param_1,param_1);
  }
  *(longlong *)(lVar12 + 0x2018) = lVar7;
  *(longlong *)(lVar13 + 0x10) = lVar8;
  *(int *)puVar10[3] = *(int *)puVar10[3] + local_50[0];
  *(longlong *)(puVar10[3] + 8) = *(longlong *)(puVar10[3] + 8) + local_48;
  return;
}



// FUNCTION 14566c130 FUN_14566c130 body=341 status=ok
// SIG undefined FUN_14566c130(void)

void FUN_14566c130(longlong param_1,longlong param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar5 = *(longlong *)(param_2 + 0x1d0);
  lVar3 = *(longlong *)(param_2 + 0x1c8);
  if (lVar5 == 0) {
    if (lVar3 == 0) {
LAB_14566c193:
      lVar5 = 0;
      goto LAB_14566c1ab;
    }
  }
  else if (lVar3 != 0) {
    if (*(char *)(lVar3 + 8) < '\x01') {
      if (*(char *)(lVar5 + 8) < '\x01') {
        lVar5 = 3;
        goto LAB_14566c1ab;
      }
    }
    else if ('\0' < *(char *)(lVar5 + 8)) goto LAB_14566c193;
    lVar5 = 1;
    goto LAB_14566c1ab;
  }
  if (lVar5 != 0) {
    lVar3 = lVar5;
  }
  lVar5 = 0;
  if (*(char *)(lVar3 + 8) < '\x01') {
    lVar5 = 2;
  }
LAB_14566c1ab:
  uVar6 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1228) + 0x78b + lVar5);
  iVar2 = FUN_145477670(param_2);
  uVar7 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1228) + 0x794 + (longlong)iVar2 * 2);
  iVar2 = FUN_1454777c0(param_2);
  uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1228) + 0x795 + (longlong)iVar2 * 2);
  *param_3 = (uint)*(ushort *)(&DAT_149df5520 + uVar6 * 2);
  uVar1 = *(ushort *)(&DAT_149df5720 + uVar6 * -2);
  param_3[3] = (uint)uVar1;
  param_3[2] = (uint)uVar1;
  uVar8 = (uint)uVar1;
  param_3[1] = uVar8;
  param_3[1] = *(ushort *)(&DAT_149df5520 + uVar7 * 2) + uVar8;
  uVar4 = *(ushort *)(&DAT_149df5720 + uVar7 * -2) + uVar8;
  param_3[2] = uVar4;
  uVar8 = uVar8 + *(ushort *)(&DAT_149df5720 + uVar7 * -2);
  param_3[3] = uVar8;
  param_3[2] = *(ushort *)(&DAT_149df5520 + uVar9 * 2) + uVar4;
  param_3[3] = *(ushort *)(&DAT_149df5720 + uVar9 * -2) + uVar8;
  return;
}



// FUNCTION 14566c290 FUN_14566c290 body=345 status=ok
// SIG undefined FUN_14566c290(void)

void FUN_14566c290(int *param_1,longlong param_2,char param_3,longlong param_4,byte param_5,
                  int param_6,int param_7,int param_8,int param_9,int param_10)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int local_res18;
  
  if (param_3 == '\r') {
    bVar6 = false;
    iVar4 = 0;
    bVar5 = false;
    iVar3 = 0;
    if (*(longlong *)(param_2 + 0x1d0) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_2 + 0x1d0) + 0xc);
      bVar5 = iVar3 != -0x7fff8000;
      iVar4 = (int)(short)iVar3;
      iVar3 = (int)(short)((uint)iVar3 >> 0x10);
    }
    iVar2 = local_res18;
    if (*(longlong *)(param_2 + 0x1c8) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_2 + 0x1c8) + 0xc);
      bVar6 = iVar2 != -0x7fff8000;
      local_res18 = (int)(short)iVar2;
      iVar2 = (int)(short)((uint)iVar2 >> 0x10);
    }
    if (bVar5) {
      if (bVar6) {
        iVar4 = iVar4 + 1 + local_res18 >> 1;
        iVar3 = iVar3 + 1 + iVar2 >> 1;
      }
    }
    else {
      iVar4 = local_res18;
      iVar3 = iVar2;
      if (!bVar6) {
        iVar4 = 0;
        iVar3 = 0;
      }
    }
    if ((0x60 < (iVar4 - param_6) + 0x30U) || (0x60 < (iVar3 - param_7) + 0x30U)) {
      if (param_5 < 10) {
        lVar1 = *(longlong *)(param_4 + 0x10) * 3 >> 1;
      }
      else {
        lVar1 = *(longlong *)(param_4 + 0x10) * 2;
      }
      *(longlong *)(param_4 + 0x10) = lVar1;
    }
  }
  if (((((*param_1 != 0) && (1 < param_1[1])) && (8 < param_5)) &&
      (((param_8 != 0 && (param_6 + 7U < 0xf)) && (param_7 + 7U < 0xf)))) ||
     (((param_9 != 0 && (param_10 == 0)) &&
      ((5 < param_5 && (((param_8 != 0 && (param_6 + 0xfU < 0x1f)) && (param_7 + 0xfU < 0x1f))))))))
  {
    *(longlong *)(param_4 + 0x10) = (*(longlong *)(param_4 + 0x10) >> 3) * 7;
  }
  return;
}



// FUNCTION 14566c3f0 FUN_14566c3f0 body=425 status=ok
// SIG undefined FUN_14566c3f0(void)

undefined1 FUN_14566c3f0(undefined1 *param_1,ulonglong param_2,uint param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  uVar3 = (uint)param_2;
  uVar1 = (int)uVar3 >> 1 & 3;
  uVar4 = (ulonglong)((int)param_3 >> 1 & 3);
  uVar5 = 0;
  if (param_4 == '\f') {
    return *param_1;
  }
  if (param_4 == '\v') {
    if (((uVar3 | param_3) & 7) == 0) {
      return param_1[1];
    }
    uVar5 = 0;
    if (((param_3 & 7) == 0) && ((param_2 & 7) != 0)) {
      return param_1[2];
    }
  }
  else if (param_4 == '\n') {
    if (((uVar3 | param_3) & 7) == 0) {
      return param_1[3];
    }
    if (((param_3 & 7) != 0) && ((param_2 & 7) == 0)) {
      return param_1[4];
    }
  }
  else {
    if (param_4 == '\t') {
      if (((uVar3 | param_3) & 7) == 0) {
        return param_1[5];
      }
      if ((param_3 & 7) == 0) {
        if ((param_2 & 7) == 0) {
          return 0;
        }
      }
      else if ((param_2 & 7) == 0) {
        return param_1[6];
      }
      if ((param_3 & 7) != 0) {
        return param_1[8];
      }
      return param_1[7];
    }
    if (param_4 == '\x06') {
      return param_1[*(int *)(&DAT_149df4f60 + (uVar4 + (ulonglong)uVar1 * 4) * 4)];
    }
    if (param_4 == '\b') {
      if (param_1[*(int *)(&DAT_149df4f60 + (uVar4 + (ulonglong)uVar1 * 4) * 4)] == '\0') {
        return 0;
      }
      lVar2 = (ulonglong)((uint)((longlong)((ulonglong)param_3 + 2) >> 1) & 3) +
              (ulonglong)uVar1 * 4;
    }
    else {
      if (param_4 != '\a') {
        return 0;
      }
      if (param_1[*(int *)(&DAT_149df4f60 + (uVar4 + (ulonglong)uVar1 * 4) * 4)] == '\0') {
        return 0;
      }
      lVar2 = uVar4 + (ulonglong)((uint)((longlong)(param_2 + 2) >> 1) & 3) * 4;
    }
    if (param_1[*(int *)(&DAT_149df4f60 + lVar2 * 4)] != '\0') {
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 14566c5a0 FUN_14566c5a0 body=973 status=ok
// SIG undefined FUN_14566c5a0(void)

void FUN_14566c5a0(undefined8 param_1,longlong param_2,int *param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6,byte param_7,int param_8,longlong *param_9,
                  undefined4 *param_10,undefined4 *param_11,int param_12,undefined4 *param_13,
                  undefined4 *param_14,int param_15)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined1 auStack_188 [32];
  int *local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  byte local_128;
  undefined1 local_127;
  byte local_126;
  undefined2 local_124;
  undefined1 local_122;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  int local_10c;
  undefined8 local_108;
  longlong local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  int *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  int local_b0 [4];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  int local_80 [4];
  longlong local_70 [6];
  
  local_70[3] = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c0 = param_10;
  lVar1 = param_2 + 0x6180;
  puVar10 = (undefined8 *)*param_9;
  local_b8 = param_11;
  local_d8 = **(longlong **)(param_2 + 0x6340);
  local_f0 = param_13;
  local_f8 = param_14;
  local_d0 = param_6;
  local_126 = param_7;
  local_10c = (uint)(byte)(&DAT_149d549c0)[param_7] << 2;
  bVar11 = param_12 != 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_70[2] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_124 = 0;
  local_122 = 0;
  local_127 = 0;
  local_11c = 0;
  local_110 = 0;
  local_118 = 0;
  local_e8 = param_9;
  local_70[0] = 0;
  local_70[1] = 0;
  local_e0 = 0x7fffffffffffffff;
  local_128 = 4;
  local_120 = param_4;
  local_108 = param_1;
  local_100 = param_2;
  local_c8 = param_3;
  do {
    bVar5 = local_126;
    *(byte *)(local_d8 + 7) = bVar11;
    FUN_145478fd0(lVar1,local_120,param_5,local_126);
    uVar8 = (ulonglong)bVar11;
    local_150 = (longlong)&local_90 + uVar8 * 4;
    local_158 = (longlong)&local_a0 + uVar8 * 4;
    plVar2 = local_70 + uVar8;
    piVar7 = local_80 + uVar8;
    local_168 = piVar7;
    local_160 = plVar2;
    if (param_15 == 0) {
      local_148 = 0;
      FUN_14566b140(local_108,bVar5,local_100,lVar1);
    }
    else {
      local_130 = local_f8;
      local_138 = local_f0;
      local_140 = param_5;
      local_148 = local_120;
      FUN_14566aa50(local_108,bVar5);
    }
    iVar3 = *piVar7;
    local_b0[uVar8] = iVar3;
    iVar6 = FUN_14561b570(local_108,lVar1);
    iVar6 = iVar6 + iVar3;
    iVar3 = *(int *)(local_100 + 0x644c);
    lVar9 = *plVar2;
    *piVar7 = iVar6;
    lVar9 = ((longlong)iVar6 * (longlong)iVar3 + 0x100 >> 9) +
            (lVar9 << ((byte)*(undefined4 *)(local_100 + 0x6448) & 0x3f));
    *(undefined1 *)((longlong)&local_124 + uVar8) = *(undefined1 *)(local_d8 + 2);
    if (lVar9 < local_e0) {
      local_127 = *(undefined1 *)(local_100 + 0x1415c);
      local_e0 = lVar9;
      local_11c = *local_f0;
      local_118 = CONCAT44(local_118._4_4_,*local_f8);
      local_110 = local_f8[1];
      local_128 = bVar11;
      if (param_8 != 0) {
        puVar4 = (undefined8 *)*local_e8;
        if (puVar4 != puVar10) {
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
          }
          *local_e8 = (longlong)puVar10;
        }
        if (bVar11 != 1) {
          lVar9 = 0;
          piVar7 = (int *)(local_d0 + 0xc);
          do {
            if (*piVar7 == 0) {
              *(undefined4 *)(local_d0 + 0xc + lVar9 * 0x10) = 1;
              goto LAB_14566c88e;
            }
            lVar9 = lVar9 + 1;
            piVar7 = piVar7 + 4;
          } while (lVar9 < 3);
          lVar9 = -1;
LAB_14566c88e:
          puVar10 = (undefined8 *)(lVar9 * 0x10 + local_d0);
          *(undefined8 *)(param_2 + 0x6190) = *puVar10;
          *(int *)(param_2 + 0x6198) = local_10c;
        }
      }
    }
    bVar11 = bVar11 + 1;
    if (1 < bVar11) {
      if (((param_8 != 0) && ((undefined8 *)*local_e8 != puVar10)) && (puVar10 != (undefined8 *)0x0)
         ) {
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      }
      *(byte *)(local_d8 + 7) = local_128;
      uVar8 = (ulonglong)local_128;
      *(undefined1 *)(local_d8 + 2) = *(undefined1 *)((longlong)&local_124 + uVar8);
      *local_c8 = local_b0[uVar8];
      *(longlong *)(local_c8 + 2) = local_70[uVar8];
      *local_c0 = *(undefined4 *)((longlong)&local_a0 + uVar8 * 4);
      *local_b8 = *(undefined4 *)((longlong)&local_90 + uVar8 * 4);
      *(undefined1 *)(local_100 + 0x1415c) = local_127;
      *local_f0 = local_11c;
      *local_f8 = (undefined4)local_118;
      local_f8[1] = local_110;
      if (param_8 == 0) {
        if (local_128 == 0) {
          *(undefined1 *)(local_d8 + 7) = 0;
          FUN_145478fd0(lVar1,local_120,param_5,local_126);
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x6190) = *(undefined8 *)*local_e8;
        *(undefined4 *)(param_2 + 0x6198) = *(undefined4 *)(*local_e8 + 8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70[3] ^ (ulonglong)auStack_188);
    }
  } while( true );
}



// FUNCTION 14566c990 FUN_14566c990 body=1101 status=ok
// SIG undefined FUN_14566c990(void)

void FUN_14566c990(longlong param_1,longlong param_2,longlong param_3,char param_4,int param_5,
                  byte param_6,undefined4 param_7,undefined4 param_8,int param_9,
                  undefined4 *param_10,uint param_11,longlong param_12)

{
  longlong lVar1;
  short *psVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  short *local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar6 = (ulonglong)param_6;
  local_70 = **(longlong **)(param_2 + 0x6340);
  if ((('\x01' < param_4) && (param_5 != 0)) && (*(int *)(param_1 + 0x2e57c) == 1)) {
    local_58 = 0x7fffffff;
    local_68 = 0x7fffffff7fffffff;
    uStack_60 = 0x7fffffff7fffffff;
    if (5 < param_6) {
      lVar7 = (longlong)param_4;
      local_e0 = (short *)(*(longlong *)(param_2 + 0x6410) + lVar7 * 8);
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,param_8);
      iVar4 = FUN_1455ab540(param_1,param_2,param_6,param_7);
      if ((iVar4 <= *(int *)(param_2 + 0x6498)) &&
         ((int)((uint)(byte)(&DAT_149d549e0)[uVar6] * 0x10 + iVar4) <= param_9)) {
        lVar1 = param_3 + lVar7 * 4;
        local_e8._0_4_ = 0x6c;
        *(undefined4 *)(lVar1 + 0xd0) = *(undefined4 *)(local_70 + 0xc);
        uVar5 = FUN_1455aa9b0(lVar1 + 0xd0,*(longlong *)(param_2 + 0x6410) + lVar7 * 8,
                              param_2 + 0x64a4,*(undefined8 *)(param_2 + 0x64d8));
        *param_10 = uVar5;
        *(short *)(lVar1 + 0xd0) = *(short *)(lVar1 + 0xd0) >> 3;
        psVar2 = (short *)(param_3 + 0xd2 + lVar7 * 4);
        *psVar2 = *psVar2 >> 3;
        local_a8 = lVar7 * 4 + 0x6484 + param_2;
        local_c8 = &local_68;
        if (*(int *)(param_1 + 0xb46bc) == 0) {
          local_c8 = (undefined8 *)0x0;
        }
        local_88 = *(undefined4 *)(param_1 + 0xb4918);
        local_b0 = local_78;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_b8 = *(undefined8 *)(param_2 + 0x64d8);
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(param_1 + 0xb46c0));
        local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,*(undefined4 *)(param_1 + 0xb46c4));
        local_e0 = (short *)((ulonglong)param_6 * 0x30 + 0xb4a48 + param_1);
        local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,*(undefined4 *)(param_2 + 0x643c));
        local_c0 = param_2 + 0x64a4;
        (**(code **)(param_1 + 0xb4998))
                  (param_2,lVar1 + 0xd0,*(longlong *)(param_2 + 0x6410) + lVar7 * 8,
                   *(undefined4 *)(param_1 + 0x2a2f8));
      }
    }
    goto LAB_14566cdcd;
  }
  if ((*(int *)(param_1 + 0xcb788) == 0) || (*(int *)(param_1 + 0xb64e0) == 0)) {
    local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
    local_e0 = (short *)(param_3 + ((longlong)param_4 + 0x34) * 4);
    local_d0 = *(undefined8 *)(param_12 + 0x10);
    local_d8 = param_10;
    local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,param_8);
    FUN_145669db0(param_1,param_2,param_6,param_7);
    goto LAB_14566cdcd;
  }
  lVar7 = (longlong)param_4;
  iVar4 = *(int *)(param_3 + 0xd0 + lVar7 * 4);
  psVar2 = (short *)(param_3 + 0xd0 + lVar7 * 4);
  if (iVar4 == -0x7fff8000) {
LAB_14566cd23:
    local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
    local_d0 = *(undefined8 *)(param_12 + 0x10);
  }
  else {
    local_78[0] = 4;
    if (0x3c < *(int *)(param_1 + 0xb44e8)) {
      local_78[0] = 2;
    }
    uVar3 = (ulonglong)local_70 >> 0x20;
    local_70 = CONCAT44((int)uVar3,0xffffffff);
    local_e8 = &local_70;
    (**(code **)(param_1 + 0xb4a58 + uVar6 * 0x30))
              (*(undefined8 *)(param_2 + 0x2018),*(undefined4 *)(param_2 + 0x2020),
               (longlong)(((int)(short)iVar4 >> 3) * *(int *)(param_2 + 25000)) +
               ((longlong)*(short *)(param_3 + 0xd2 + lVar7 * 4) >> 3) +
               *(longlong *)(param_2 + 0x61a0));
    if (((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0xcb788) != 0)) &&
       ((param_6 < 6 && ((*psVar2 == 0 && (*(short *)(param_3 + 0xd2 + lVar7 * 4) == 0))))))
    goto LAB_14566cdcd;
    if ((*(int *)(param_1 + 0xb48e4) != 0) &&
       (param_11 < (uint)local_70 >> ((byte)local_78[0] & 0x1f))) goto LAB_14566cdcd;
    if (param_11 <= (uint)local_70 >> 1) goto LAB_14566cd23;
    if ((((*(int *)(param_1 + 0xb48e4) != 0) && ((uint)local_70 <= param_11)) &&
        ((uint)local_70 >> ((&DAT_149d54970)[uVar6] + (&DAT_149d54960)[uVar6] & 0x1f) < 400)) &&
       ((*psVar2 == 0 && (*(short *)(param_3 + 0xd2 + lVar7 * 4) == 0)))) goto LAB_14566cdcd;
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,1);
    local_d0 = *(undefined8 *)(param_12 + 0x10);
  }
  local_d8 = param_10;
  local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,param_8);
  local_e0 = psVar2;
  FUN_145669db0(param_1,param_2,param_6,param_7);
LAB_14566cdcd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_108);
}



// FUNCTION 14566ce00 FUN_14566ce00 body=64 status=ok
// SIG undefined FUN_14566ce00(void)

undefined1 FUN_14566ce00(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(longlong *)(param_2 + 0x1d0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(char *)(*(longlong *)(param_2 + 0x1d0) + 3);
  }
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    iVar1 = (int)*(char *)(*(longlong *)(param_2 + 0x1c8) + 3);
  }
  return *(undefined1 *)((longlong)(iVar1 + iVar2) + 0x7af + *(longlong *)(param_1 + 0x1228));
}



// FUNCTION 14566ce40 FUN_14566ce40 body=690 status=ok
// SIG undefined FUN_14566ce40(void)

void FUN_14566ce40(longlong param_1,longlong param_2,int *param_3,byte param_4,undefined8 *param_5,
                  longlong param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res18;
  int local_res20 [2];
  int local_68;
  int local_64;
  int local_60 [2];
  longlong local_58;
  longlong local_50 [2];
  
  iVar7 = 0;
  *(undefined4 *)(param_2 + 0x14150) = 0;
  *(undefined4 *)(param_5 + 0x57) = 0;
  local_res20[0] = 0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0;
  *(undefined1 *)(**(longlong **)(param_2 + 0x6340) + 8) = 0;
  local_58 = 0;
  local_50[0] = 0;
  *(undefined1 *)(**(longlong **)(param_2 + 0x6340) + 9) = 0xff;
  *(undefined1 *)(**(longlong **)(param_2 + 0x6340) + 7) = 3;
  local_res18 = param_3;
  if (param_4 < 3) {
    lVar4 = FUN_145674f60(param_1,param_2,local_res20,local_res8,&local_58,param_6);
    iVar6 = iVar7;
  }
  else {
    lVar4 = FUN_145675310(param_1,param_2,local_res20,local_res8,&local_58,&local_68,param_4,param_6
                         );
    iVar6 = local_68;
  }
  if (lVar4 < param_6) {
    bVar3 = 3;
    if (2 < param_4) {
      bVar3 = param_4;
    }
    FUN_145675890(param_1,param_2,param_5,local_res10,local_60,local_50,&local_64,bVar3,
                  (&DAT_149d54b80)
                  [(longlong)*(int *)(param_2 + 0x6214) +
                   ((longlong)*(int *)(param_2 + 0x6210) +
                   ((ulonglong)*(byte *)(**(longlong **)(param_2 + 0x6340) + 2) +
                   (ulonglong)param_4 * 4) * 2) * 2]);
    if ((iVar6 == 0) || (local_64 == 0)) {
      iVar6 = iVar7;
      if (*(longlong *)(param_2 + 0x6350) != 0) {
        iVar6 = (int)*(char *)(*(longlong *)(param_2 + 0x6350) + 3);
      }
      if (*(longlong *)(param_2 + 0x6348) != 0) {
        iVar7 = (int)*(char *)(*(longlong *)(param_2 + 0x6348) + 3);
      }
      uVar5 = (uint)*(ushort *)
                     (&DAT_149df5520 +
                     (ulonglong)
                     *(byte *)((longlong)(iVar7 + iVar6) + 0x7af + *(longlong *)(param_1 + 0x2b108))
                     * 2);
    }
    else {
      iVar6 = iVar7;
      if (*(longlong *)(param_2 + 0x6350) != 0) {
        iVar6 = (int)*(char *)(*(longlong *)(param_2 + 0x6350) + 3);
      }
      if (*(longlong *)(param_2 + 0x6348) != 0) {
        iVar7 = (int)*(char *)(*(longlong *)(param_2 + 0x6348) + 3);
      }
      uVar5 = ((uint)*(ushort *)
                      (&DAT_149df5720 +
                      (ulonglong)
                      *(byte *)((longlong)(iVar7 + iVar6) + 0x7af + *(longlong *)(param_1 + 0x2b108)
                               ) * -2) - local_60[0]) - local_res8[0];
    }
    *local_res18 = uVar5 + local_res10[0] + local_res20[0];
    *(longlong *)(local_res18 + 2) = local_50[0] + local_58;
    puVar1 = (undefined8 *)**(longlong **)(param_2 + 0x6340);
    uVar2 = puVar1[1];
    *param_5 = *puVar1;
    param_5[1] = uVar2;
    uVar2 = puVar1[3];
    param_5[2] = puVar1[2];
    param_5[3] = uVar2;
    uVar2 = puVar1[5];
    param_5[4] = puVar1[4];
    param_5[5] = uVar2;
    uVar2 = puVar1[7];
    param_5[6] = puVar1[6];
    param_5[7] = uVar2;
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)(puVar1 + 8);
    puVar1 = *(undefined8 **)(param_2 + 0x6410);
    uVar2 = puVar1[1];
    *(undefined8 *)((longlong)param_5 + 0x44) = *puVar1;
    *(undefined8 *)((longlong)param_5 + 0x4c) = uVar2;
    uVar2 = puVar1[3];
    *(undefined8 *)((longlong)param_5 + 0x54) = puVar1[2];
    *(undefined8 *)((longlong)param_5 + 0x5c) = uVar2;
    *(undefined4 *)((longlong)param_5 + 100) = *(undefined4 *)(puVar1 + 4);
    *(longlong *)(local_res18 + 4) =
         (*(longlong *)(local_res18 + 2) << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f)) +
         ((longlong)*(int *)(param_2 + 0x644c) * (longlong)*local_res18 + 0x100 >> 9);
  }
  else {
    *local_res18 = 0x7fffffff;
  }
  return;
}



// FUNCTION 14566d100 FUN_14566d100 body=7432 status=ok
// SIG undefined FUN_14566d100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14566d100(longlong param_1,int *param_2,longlong param_3,int param_4,int param_5,
                  int *param_6,byte param_7,undefined8 *param_8,uint *param_9)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  longlong lVar13;
  int *piVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 *puVar20;
  byte bVar21;
  int iVar22;
  char **ppcVar23;
  char cVar24;
  int iVar25;
  undefined8 uVar26;
  undefined7 uVar28;
  longlong *plVar27;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ushort uVar32;
  ushort *puVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  IMAGE_DOS_HEADER *pIVar37;
  uint *puVar38;
  longlong lVar39;
  ulonglong uVar40;
  char cVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auStack_27e8 [32];
  char **local_27c8;
  uint *local_27c0;
  uint *local_27b8;
  uint *local_27b0;
  char **local_27a8;
  byte *local_27a0;
  undefined1 *local_2798;
  char **local_2790;
  int local_2788;
  undefined4 *local_2780;
  undefined4 *local_2778;
  undefined8 *local_2770;
  char **local_2768;
  uint *local_2760;
  longlong *local_2758;
  longlong *local_2750;
  byte local_2748;
  byte local_2747;
  byte local_2746;
  byte local_2745;
  byte local_2744;
  undefined4 local_2740;
  char local_273c;
  byte local_273b [3];
  uint local_2738;
  undefined1 (*local_2730) [16];
  longlong local_2728;
  char local_2720;
  char local_271f;
  longlong local_2718;
  longlong local_2710;
  longlong local_2708;
  int local_2700;
  uint local_26fc;
  undefined8 local_26f8;
  byte local_26f0;
  byte local_26ef;
  undefined8 *local_26e8;
  uint local_26e0;
  uint local_26dc;
  uint local_26d8;
  int local_26d4;
  int local_26d0;
  uint local_26cc;
  uint local_26c8;
  uint local_26c4;
  uint local_26c0;
  uint *local_26b8;
  int local_26b0 [2];
  char *local_26a8;
  uint *local_26a0;
  longlong local_2698;
  undefined1 local_2690 [16];
  longlong local_2680;
  uint local_2678;
  uint local_2674;
  uint local_2670;
  char **local_2668;
  longlong local_2660;
  ulonglong local_2658;
  longlong local_2650;
  longlong local_2648;
  ulonglong local_2640;
  int *local_2638;
  char *local_2630;
  int *local_2628;
  byte local_2620 [4];
  int local_261c;
  longlong local_2618;
  uint local_2610 [2];
  longlong local_2608;
  int *local_2600;
  uint local_25f8 [2];
  ulonglong local_25f0;
  uint *local_25e8;
  longlong local_25e0;
  undefined8 local_25d8;
  undefined8 uStack_25d0;
  undefined8 local_25c8;
  undefined8 uStack_25c0;
  longlong local_25b8;
  uint local_25b0 [2];
  char *local_25a8;
  undefined4 local_25a0;
  undefined8 local_2598;
  undefined8 uStack_2590;
  undefined1 local_2588;
  undefined1 uStack_2587;
  undefined6 uStack_2586;
  undefined8 uStack_2580;
  longlong local_2538 [3];
  char *local_2520 [2];
  ulonglong local_2510;
  undefined8 uStack_2508;
  undefined4 local_2500;
  undefined8 local_24fc;
  undefined4 local_24f4;
  longlong local_24f0 [4];
  undefined4 local_24d0 [2];
  undefined4 local_24c8;
  undefined4 local_24c0;
  longlong local_24b8 [4];
  char *local_2498 [2];
  int local_2488 [4];
  char *local_2478 [2];
  uint local_2468 [8];
  ulonglong local_2448 [2];
  char *local_2438;
  undefined8 uStack_2430;
  undefined1 local_2428 [160];
  uint local_2388 [16];
  longlong local_2348 [30];
  char *local_2258 [24];
  undefined8 local_2198 [28];
  undefined8 local_20b8;
  undefined8 local_20b0;
  undefined8 uStack_20a8;
  undefined8 local_20a0;
  undefined4 local_2098;
  undefined2 local_2094;
  undefined4 local_2090;
  char local_2058 [8192];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14566d11f;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_27e8;
  uVar17 = (ulonglong)param_7;
  local_2600 = param_6;
  ppcVar23 = (char **)0x0;
  local_26e8 = param_8;
  local_2660 = param_1 + 0xb46b0;
  local_2698 = param_1 + 0x29ee0;
  local_2650 = param_3 + 0x6180;
  local_2730 = (undefined1 (*) [16])**(longlong **)(param_3 + 0x6340);
  local_25b8 = *(longlong *)(param_3 + 0x6410);
  local_26a8 = (char *)(param_1 + 0x2b088);
  bVar15 = (*local_2730)[4];
  local_24fc = 0;
  local_24f4 = 0;
  local_26b8 = param_9;
  local_2748 = param_7;
  local_2500 = 0;
  local_26d8 = 0;
  local_2700 = -1;
  local_25e8 = (uint *)0x7fffffffffffffff;
  local_2678 = 0xffffffff;
  local_273c = '\0';
  local_2728 = param_3;
  local_2708 = param_1;
  local_26d0 = param_4;
  local_2638 = param_2;
  local_261c = FUN_14561c1a0(param_1,uVar17,*(undefined4 *)(param_1 + 0x2a31c),
                             *(undefined4 *)(param_1 + 0x2a320));
  local_26e0 = *(int *)(param_1 + 0xb4740) + 1;
  local_2674 = 0;
  local_2738 = local_2738 & 0xffffff00;
  local_2746 = 1;
  local_20b8 = 0;
  local_25e0 = 0;
  local_2628 = param_2 + uVar17 * 0x1e + 4;
  local_2680 = (longlong)param_2 + uVar17 * 0x1e;
  local_26c8 = *(uint *)(param_1 + 0xb47c8);
  local_2630 = (char *)(param_1 + 0x30858 + ((ulonglong)bVar15 * 0xd + uVar17) * 0x78);
  local_271f = (&DAT_149d549c0)[uVar17];
  local_2720 = (&DAT_149d549b0)[uVar17];
  local_25a8 = local_2058;
  if ((*(byte *)(*(longlong *)(param_3 + 0x6390) + 0x98) & 8) != 0) {
    local_25a8 = (char *)((ulonglong)local_25a8 >> 1);
  }
  local_2668 = &local_25a8;
  if (*(int *)(param_1 + 0x2e69c) != 2) {
    local_2668 = ppcVar23;
  }
  local_25a0 = 0x40;
  local_2690 = ZEXT816(0);
  local_2640 = 0;
  local_2588 = 0;
  uStack_2587 = 0;
  uStack_2586 = 0;
  uStack_2580 = 0;
  local_25d8 = 0;
  uStack_25d0 = 0;
  local_25c8 = 0;
  uStack_25c0 = 0;
  local_2598 = 0;
  uStack_2590 = 0;
  uVar4 = 0;
  if ((*(int *)(param_1 + 0xb46fc) != 0) && (*(int *)(param_3 + 0x6430) < 0x73)) {
    uVar4 = 1;
  }
  *(undefined4 *)(param_3 + 0x14150) = uVar4;
  local_26dc = (uint)bVar15;
  uVar34 = (ulonglong)local_26dc;
  local_27c0 = (uint *)local_273b;
  local_27c8 = local_2498;
  local_24b8[0] = 0x7fffffffffffffff;
  local_24b8[1] = 0x7fffffffffffffff;
  local_24b8[2] = 0x7fffffffffffffff;
  local_24b8[3] = 0x7fffffffffffffff;
  local_2658 = uVar17;
  local_25f0 = (ulonglong)bVar15;
  FUN_145677e10(local_2698,param_3 + 0x6180,uVar34,local_2488);
  puVar20 = local_26e8;
  lVar39 = local_2728;
  lVar30 = (longlong)&local_2090 + 1;
  local_2608 = 0x7fffffffffffffff;
  puVar11 = local_2198 + 1;
  local_2538[0] = 0x7fffffffffffffff;
  local_2538[1] = 0x7fffffffffffffff;
  lVar13 = 0xe;
  local_2538[2] = 0x7fffffffffffffff;
  local_24f0[0] = 0x7fffffffffffffff;
  local_24f0[1] = 0x7fffffffffffffff;
  local_24f0[2] = 0x7fffffffffffffff;
  local_24f0[3] = 0x7fffffffffffffff;
  local_2510 = 0x7fffffff7fffffff;
  uStack_2508 = 0x7fffffff7fffffff;
  *(undefined8 *)(param_3 + 0x6484) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_3 + 0x648c) = 0x7fffffff7fffffff;
  do {
    puVar11[-1] = 0;
    *puVar11 = 0;
    puVar11 = puVar11 + 2;
    *(undefined4 *)(lVar30 + -1) = 0x4040404;
    lVar30 = lVar30 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar17 = 1;
  *local_2600 = 0x7fffffff;
  do {
    *(undefined4 *)((longlong)ppcVar23 + param_3 + 0x6498) = 0x7fffffff;
    bVar15 = (byte)uVar17;
    if (((*(uint *)(param_1 + 0xb46a8) & *(uint *)((longlong)ppcVar23 + 0x149df5094)) != 0) &&
       ((local_271f == local_2720 ||
        ((*(byte *)(puVar20 + 0x66) & (byte)(1 << (bVar15 & 0x1f))) == 0)))) {
      local_27a8 = local_2258;
      local_27b0 = local_2388 + 4;
      local_27b8 = local_2388;
      local_27c0 = (uint *)CONCAT44(local_27c0._4_4_,param_5);
      local_27c8 = (char **)CONCAT44(local_27c8._4_4_,local_26d0);
      FUN_1456780c0(param_1,lVar39,uVar17,local_2748);
      uVar34 = uVar17;
    }
    *(undefined4 *)((longlong)(local_2388 + 0xd) + (longlong)ppcVar23) = 0x80008000;
    bVar15 = bVar15 + 1;
    uVar17 = (ulonglong)bVar15;
    *(undefined4 *)((longlong)(local_2388 + 9) + (longlong)ppcVar23) = 0;
    ppcVar23 = (char **)((longlong)ppcVar23 + 4);
  } while ((char)bVar15 < '\x04');
  piVar14 = (int *)(lVar39 + 0x6498);
  uVar35 = *(uint *)(param_1 + 0xb46a8);
  puVar33 = (ushort *)((longlong)&local_20b8 + 2);
  cVar41 = *local_26a8;
  uVar26 = CONCAT71((int7)(uVar34 >> 8),1);
  uVar10 = local_2738;
  do {
    if ((*(uint *)(((longlong)&DAT_149df5090 - (lVar39 + 0x6494)) + (longlong)piVar14) & uVar35) ==
        0) {
      local_2738 = uVar10 & 0xff | 1 << ((uint)uVar26 & 0x1f);
      local_2746 = local_2746 | 9;
      uVar10 = local_2738;
    }
    else if (*(int *)(local_2660 + 0x94) != 0) {
      iVar25 = 1;
      do {
        uVar10 = local_2738;
        if (*(int *)(local_2728 + 0x6494 + (longlong)iVar25 * 4) < *piVar14 >> 2) {
          *puVar33 = *puVar33 | 0x1c00;
          break;
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < 4);
    }
    if (((cVar41 != '\0') && ((local_26a8[(longlong)(int)local_26dc * 4 + 0x50] & 4U) != 0)) &&
       (*(ushort *)(local_26a8 + (longlong)(int)local_26dc * 8 + 0x14) != ((ushort)uVar26 & 0xff)))
    {
      uVar10 = uVar10 & 0xff | 1 << ((uint)uVar26 & 0x1f);
      local_2746 = local_2746 | 9;
      local_2738 = uVar10;
    }
    uVar28 = (undefined7)((ulonglong)uVar26 >> 8);
    cVar24 = (char)uVar26 + '\x01';
    uVar26 = CONCAT71(uVar28,cVar24);
    piVar14 = piVar14 + 1;
    puVar33 = puVar33 + 1;
  } while (cVar24 < '\x04');
  if (((cVar41 == '\0') || ((local_26a8[local_25f0 * 4 + 0x50] & 4U) == 0)) &&
     ((*(int *)(local_2708 + 0xb4304) != 0 && (*(int *)(local_2708 + 0x2e660) == 0)))) {
    uVar17 = CONCAT71(uVar28,6);
    local_2738 = (uint)uVar17;
    uVar32 = 0xe3ff;
    local_2746 = 9;
    local_20b8 = CONCAT26(0xe3ff,(undefined6)local_20b8);
    if (local_2388[7] != 0) {
      uVar32 = 0xebff;
      local_20b8 = CONCAT26(0xebff,(undefined6)local_20b8);
    }
    if (local_2388[3] != 0) {
      local_20b8 = CONCAT26(uVar32,(undefined6)local_20b8) | 0x400000000000000;
      uVar32 = uVar32 | 0x400;
    }
  }
  else {
    uVar17 = (ulonglong)local_2738;
    uVar32 = local_20b8._6_2_;
  }
  uVar35 = (uint)uVar17;
  if ((*(int *)(local_2708 + 0xb4304) != 0) && (*(int *)(local_2708 + 0xb47b8) != 0)) {
    uVar32 = 0;
    local_20b8 = local_20b8 & 0xffffffffffff;
    uVar35 = (uint)CONCAT71((int7)(uVar17 >> 8),0xf7);
    local_2746 = 9;
    local_2738 = uVar35;
  }
  if ((((*(int *)(local_2708 + 0xb47b8) != 0) && (*(int *)(local_2708 + 0x2a2e8) == 0)) &&
      (*(int *)(local_2728 + 0x649c) < 0x7fffffff)) &&
     (*(int *)(local_2728 + 0x649c) * 2 < *(int *)(local_2728 + 0x64a0))) {
    local_20b8 = CONCAT26(uVar32,(undefined6)local_20b8) | 0x3c00000000000000;
  }
  if (((*(int *)(local_2708 + 0xb47a8) != 0) && (*(int *)(local_2708 + 0x2a2e8) != 0)) &&
     ((*(int *)(local_2708 + 0xb4304) == 0 &&
      ((2 < *(int *)(local_2708 + 0xb42d0) &&
       (*(int *)(local_2728 + 0x6498) * 2 < *(int *)(local_2728 + 0x649c))))))) {
    local_20b8 = local_20b8 | 0x3c0000000000;
  }
  if (*(byte *)(local_2708 + 0xb4878) < local_2748) {
    local_2738 = uVar35 | 1;
    local_2746 = local_2746 | 1;
  }
  local_2348[0] = 0;
  local_2348[1] = 0;
  piVar14 = (int *)(local_2630 + 0x1c);
  local_2348[2] = 0;
  local_2348[3] = 0;
  local_2348[4] = 0;
  local_2348[5] = 0;
  local_2348[6] = 0;
  local_20b8 = CONCAT62(local_20b8._2_6_,
                        (ushort)local_20b8 |
                        ~*(ushort *)
                          (local_2708 + 0xb47d0 + (ulonglong)(byte)(&DAT_149d54b30)[local_2658] * 4)
                       );
  lVar30 = 0x17;
  plVar27 = local_2348 + 7;
  do {
    piVar2 = (int *)(((longlong)local_2628 - (longlong)local_2630) + (longlong)piVar14);
    iVar25 = *piVar14;
    piVar14 = piVar14 + 1;
    *plVar27 = (longlong)*piVar2 * (longlong)iVar25 >> 5;
    lVar30 = lVar30 + -1;
    plVar27 = plVar27 + 1;
  } while (lVar30 != 0);
  lVar30 = (longlong)(int)local_26e0;
  uVar35 = 0;
  if (*(int *)(local_2708 + 0xb47a0) != 0) {
    uVar35 = local_26e0;
  }
  if (4 < (int)uVar35) {
    do {
      bVar15 = 0;
      iVar25 = 5;
      if (5 < (int)uVar35) {
        pcVar6 = (char *)(local_2680 + 0x62d);
        do {
          cVar41 = *pcVar6;
          if (local_2348[cVar41] < local_2348[pcVar6[-1]]) {
            *pcVar6 = pcVar6[-1];
            bVar15 = (byte)iVar25;
            pcVar6[-1] = cVar41;
          }
          iVar25 = iVar25 + 1;
          pcVar6 = pcVar6 + 1;
        } while (iVar25 < (int)uVar35);
      }
      uVar35 = (uint)bVar15;
    } while (4 < uVar35);
  }
  local_2098 = *(undefined4 *)(local_2680 + 0x640);
  uVar17 = 0;
  local_20b0 = *(undefined8 *)(local_2680 + 0x628);
  uStack_20a8 = *(undefined8 *)(local_2680 + 0x630);
  local_2094 = *(undefined2 *)(local_2680 + 0x644);
  uVar35 = 0;
  uVar4 = 0;
  local_20a0 = *(undefined8 *)(local_2680 + 0x638);
  auVar43 = ZEXT816(0);
  local_2740 = 0;
  local_2710 = 0;
  local_2628 = (int *)0x4;
  local_2680 = local_2538[1];
  lVar39 = local_2728;
  local_2718 = lVar30;
  do {
    lVar7 = (longlong)*(char *)((longlong)&local_20b0 + local_2710);
    local_26a0 = (uint *)0x7fffffffffffffff;
    puVar38 = (uint *)0x7fffffffffffffff;
    local_2630 = (char *)0x7fffffffffffffff;
    local_26f8._4_4_ = 0;
    lVar13 = lVar7 * 3;
    local_26d4 = 0;
    bVar15 = (&DAT_149df4fe0)[lVar13];
    bVar9 = (&DAT_149df4fe1)[lVar13];
    lVar18 = (longlong)(char)bVar9;
    bVar21 = (&DAT_149df4fe2)[lVar13];
    local_26c4 = 0;
    local_26b0[0] = 0;
    local_26fc = 0;
    local_26cc = 0;
    local_26a8 = (char *)0x0;
    local_2618 = 0;
    local_26f8._0_4_ = 0;
    local_26dc = 0;
    local_26c0 = 0;
    *(undefined8 *)(lVar39 + 0x6930) = 0;
    *(undefined8 *)(lVar39 + 0x6938) = 0;
    local_2747 = bVar9;
    local_2745 = bVar15;
    local_2744 = bVar21;
    if ((local_271f == local_2720) ||
       (((*(byte *)(local_26e8 + 0x66) >> (bVar9 & 0x1f) & 1) == 0 &&
        (((char)bVar21 < '\x01' || ((*(byte *)(local_26e8 + 0x66) >> (bVar21 & 0x1f) & 1) == 0))))))
    {
      if ((local_2710 == lVar30) && (-1 < local_2700)) {
        cVar41 = (char)uVar4;
        if (cVar41 == '\x01') {
          local_2738 = local_2738 | 0xd;
        }
        else if (cVar41 == '\x02') {
          local_2738 = local_2738 | 0xb;
        }
        else if (cVar41 == '\x03') {
          local_2738 = local_2738 | 7;
        }
      }
      uVar10 = (uint)(char)bVar9;
      lVar30 = local_2718;
      uVar4 = local_2740;
      local_26e0 = uVar10;
      if (((byte)local_2738 & (byte)(1 << (bVar9 & 0x1f))) != 0) {
        bVar8 = 0;
        if (-1 < (char)bVar21) {
          bVar8 = bVar21;
        }
        if ((local_2746 & (byte)(1 << (bVar8 & 0x1f))) != 0) goto LAB_14566ddc5;
      }
      local_2670 = (uint)bVar15;
      lVar39 = local_2728;
      local_2648 = lVar18;
      if ((*(ushort *)((longlong)&local_20b8 + lVar18 * 2) >> (local_2670 & 0x1f) & 1) == 0) {
        if ((local_26d8 != 0) && (*(int *)(local_2660 + 0xf0) != 0)) {
          local_2348[lVar7] = local_2348[lVar7] << 1;
        }
        if ((local_2348[lVar7] <= (longlong)local_26b8) &&
           ((*(int *)(local_2708 + 0x2e6bc) == 0 || (bVar9 != 0)))) {
          if (*(int *)(local_2660 + 0x104) != 0) {
            bVar8 = 0xff;
            uVar29 = (uint)(byte)(&DAT_149d54990)[local_2658];
            if (local_2638[3] - param_5 <= (int)(uint)(byte)(&DAT_149d54990)[local_2658]) {
              uVar29 = local_2638[3] - param_5;
            }
            uVar19 = (uint)(byte)(&DAT_149d549a0)[local_2658];
            if (local_2638[1] - local_26d0 <= (int)(uint)(byte)(&DAT_149d549a0)[local_2658]) {
              uVar19 = local_2638[1] - local_26d0;
            }
            iVar25 = -0x7fff8000;
            uVar36 = ~((local_26d0 + param_5 >> ((&DAT_149d54980)[local_2658] & 0x1f)) +
                      *(int *)(local_2698 + 0x45e4)) & 1;
            uVar16 = 1;
            if (*local_2638 < local_26d0) {
              lVar13 = *(longlong *)
                        (*(longlong *)(local_2650 + 0x1c0) +
                        (longlong)*(int *)(local_2650 + 0x1b8) * -8);
              iVar25 = *(int *)(lVar13 + 0xc);
              bVar8 = *(byte *)(lVar13 + 8);
              uVar16 = 1;
              if (0 < (int)uVar29) {
                uVar34 = (ulonglong)uVar29;
                plVar27 = (longlong *)
                          (*(longlong *)(local_2650 + 0x1c0) +
                          (longlong)-*(int *)(local_2650 + 0x1b8) * 8);
                uVar16 = 1;
                do {
                  pbVar1 = (byte *)(*plVar27 + 8);
                  if ((iVar25 != *(int *)(*plVar27 + 0xc)) || (uVar29 = 1, bVar9 != *pbVar1)) {
                    uVar29 = uVar35;
                  }
                  uVar16 = uVar16 & uVar29;
                  uVar29 = uVar35;
                  if (bVar8 == *pbVar1) {
                    uVar29 = uVar36;
                  }
                  uVar36 = uVar29;
                  plVar27 = plVar27 + 1;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
            }
            if (local_2638[2] < param_5) {
              if (iVar25 == -0x7fff8000) {
                iVar25 = *(int *)(*(longlong *)(*(longlong *)(local_2650 + 0x1c0) + -8) + 0xc);
              }
              if (bVar8 == 0xff) {
                bVar8 = *(byte *)(*(longlong *)(*(longlong *)(local_2650 + 0x1c0) + -8) + 8);
              }
              if (0 < (int)uVar19) {
                plVar27 = (longlong *)(*(longlong *)(local_2650 + 0x1c0) + -8);
                uVar34 = (ulonglong)uVar19;
                do {
                  pbVar1 = (byte *)(*plVar27 + 8);
                  if ((iVar25 != *(int *)(*plVar27 + 0xc)) || (uVar29 = 1, bVar9 != *pbVar1)) {
                    uVar29 = uVar35;
                  }
                  uVar16 = uVar16 & uVar29;
                  plVar27 = plVar27 + *(int *)(local_2650 + 0x1b8);
                  uVar36 = uVar36 & bVar8 == *pbVar1;
                  uVar34 = uVar34 - 1;
                } while (uVar34 != 0);
              }
            }
            if (((((uVar36 != 0) && (bVar15 != 10)) && (bVar15 != 0xd)) &&
                (('\0' < (char)bVar8 && (bVar9 != bVar8)))) ||
               ((uVar16 != 0 && ((byte)(bVar15 - 0xb) < 2)))) goto LAB_14566ddc5;
          }
          if ((char)bVar21 < '\x01') {
            if (bVar9 == 0) {
LAB_14566dd15:
              if ((*(int *)(local_2708 + 0xb47a8) != 0) &&
                 (local_2678 <
                  (uint)(*(int *)(local_2728 + 0x6480) << ((&DAT_149d549e0)[local_2658] & 0x1f))))
              goto LAB_14566ddc5;
              if (bVar15 != 0) {
                if ((local_26c8 & 0x20) != 0) {
                  uVar29 = 0x40;
                  if (*(int *)(local_2708 + 0x2e69c) == 2) {
                    uVar29 = 0;
                  }
                  if (*(uint *)(local_2728 + 0x6480) < uVar29) goto LAB_14566ddc5;
                }
                if (((((local_26c8 & 8) != 0) && ((byte)(bVar15 - 3) < 7)) && (-1 < local_2700)) &&
                   ('\0' < (char)local_2740)) goto LAB_14566ddc5;
                if ((local_26c8 & 0x10) != 0) {
                  if (bVar15 == 5) {
                    if (local_273c == '\x01') goto LAB_14566de8f;
                    bVar42 = local_273c == '\x04';
                  }
                  else {
                    if (bVar15 != 8) {
                      if (bVar15 == 7) {
                        if ((byte)(local_273c - 2U) < 2) goto LAB_14566de8f;
                      }
                      else if ((bVar15 != 6) || ((local_273c - 2U & 0xfd) == 0)) goto LAB_14566de8f;
                      goto LAB_14566ddc5;
                    }
                    bVar42 = (local_273c - 1U & 0xfd) == 0;
                  }
                  if (!bVar42) goto LAB_14566ddc5;
                }
              }
            }
            else {
              local_26f8._4_4_ = (uint)(*(int *)(local_2708 + 0x2b100) == 1);
LAB_14566dcd0:
              local_27c8 = (char **)&local_26f0;
              local_26f0 = bVar9;
              local_26ef = bVar21;
              iVar25 = FUN_1456765c0(local_2708,local_25b8 + 0x20,local_2428,local_2670);
              lVar30 = local_2718;
              lVar39 = local_2728;
              uVar4 = local_2740;
              if (iVar25 == 0) goto LAB_14566ddc5;
            }
LAB_14566de8f:
            uVar34 = local_2658;
            lVar7 = local_2708;
            lVar13 = local_2728;
            (*local_2730)[1] = bVar15;
            (*local_2730)[6] = 0;
            (*local_2730)[8] = bVar9;
            (*local_2730)[9] = bVar21;
            bVar15 = *(byte *)(local_2698 + 0x51c);
            *(undefined8 *)(*local_2730 + 0xc) = 0;
            bVar8 = 0;
            if (bVar15 != 4) {
              bVar8 = bVar15;
            }
            (*local_2730)[7] = bVar8;
            uVar10 = uVar10 - 1;
            if ((char)bVar9 < '\x01') {
              uVar10 = 0;
            }
            *(undefined4 *)(local_2728 + 0x6940) = 0;
            *(longlong *)(local_2728 + 0x6380) = local_2698 + 0x1e8 + (longlong)(int)uVar10 * 0xb0;
            uVar10 = uVar35;
            if ('\0' < (char)bVar21) {
              uVar10 = (int)(char)bVar21 - 1;
            }
            puVar11 = (undefined8 *)(local_2728 + 0x61b0);
            lVar30 = 3;
            *(longlong *)(local_2728 + 0x6388) = (longlong)(int)uVar10 * 0xb0 + local_2698 + 0x1e8;
            ppcVar23 = local_2258 + (longlong)(char)bVar9 * 6;
            uVar31 = uVar17;
            do {
              pcVar6 = ppcVar23[1];
              puVar11[-2] = *ppcVar23;
              puVar11[-1] = pcVar6;
              if ('\0' < (char)bVar21) {
                lVar39 = uVar31 + (longlong)(char)bVar21 * 3;
                pcVar6 = local_2258[lVar39 * 2 + 1];
                *puVar11 = local_2258[lVar39 * 2];
                puVar11[1] = pcVar6;
              }
              uVar31 = uVar31 + 1;
              ppcVar23 = ppcVar23 + 2;
              puVar11 = puVar11 + 0x11;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            if (bVar9 == 0) {
              *(undefined8 *)(local_2728 + 0x1415c) = 0;
              *(undefined4 *)(local_2728 + 0x14164) = 0;
              if ((*(int *)(local_2708 + 0xb4734) == 1) || (*(int *)(local_2728 + 0x63f4) != 0)) {
                bVar15 = (&DAT_149d54b30)[local_2658];
                if ((byte)(&DAT_149d54b40)[*(int *)(local_2708 + 0x2a318)] <=
                    (byte)(&DAT_149d54b30)[local_2658]) {
                  bVar15 = (&DAT_149d54b40)[*(int *)(local_2708 + 0x2a318)];
                }
                local_2790 = local_2668;
                *(byte *)(**(longlong **)(local_2728 + 0x6340) + 2) = bVar15;
                local_2798 = (undefined1 *)
                             CONCAT44(local_2798._4_4_,*(undefined4 *)(local_2708 + 0xb486c));
                local_27a0 = (byte *)CONCAT71(local_27a0._1_7_,bVar15);
                local_27a8 = (char **)CONCAT71(local_27a8._1_7_,(char)local_2658);
                local_27b0 = (uint *)((ulonglong)local_27b0 & 0xffffffff00000000);
                local_27b8 = local_26b8;
                local_27c0 = local_25b0;
                local_27c8 = (char **)&local_26f8;
                FUN_145673300(local_2708,local_2728,&local_26fc,&local_2618);
              }
              else {
                local_27a8 = local_2668;
                local_27b0 = (uint *)CONCAT71(local_27b0._1_7_,local_2748);
                local_27b8 = local_26b8;
                local_27c0 = local_25b0;
                local_27c8 = (char **)&local_26f8;
                FUN_1456734e0(local_2708,local_2728,&local_26fc,&local_2618);
                uVar34 = local_2658;
              }
              uVar29 = local_26fc;
              lVar30 = local_2718;
              lVar39 = local_2728;
              auVar43 = local_2690;
              uVar4 = local_2740;
              if (local_26fc != 0x7fffffff) {
                uVar31 = (ulonglong)
                         (byte)(&DAT_149d54b80)
                               [(longlong)*(int *)(lVar13 + 0x6214) +
                                ((longlong)*(int *)(lVar13 + 0x6210) +
                                ((ulonglong)(byte)(*local_2730)[2] + uVar34 * 4) * 2) * 2];
                uVar16 = *(uint *)((longlong)&local_2510 + uVar31 * 4);
                puVar12 = (uint *)((longlong)&local_2510 + uVar31 * 4);
                puVar3 = (uint *)((longlong)local_2478 + uVar31 * 4);
                if (uVar16 == 0x7fffffff) {
                  local_27a0 = local_2620 + uVar31;
                  local_27a8 = (char **)((longlong)local_2520 + uVar31 * 4);
                  local_27b0 = local_2468 + uVar31 * 2;
                  local_27c8 = (char **)CONCAT71(local_27c8._1_7_,
                                                 (&DAT_149d54b80)
                                                 [(longlong)*(int *)(lVar13 + 0x6214) +
                                                  ((longlong)*(int *)(lVar13 + 0x6210) +
                                                  ((ulonglong)(byte)(*local_2730)[2] + uVar34 * 4) *
                                                  2) * 2]);
                  local_27c0 = puVar12;
                  local_27b8 = puVar3;
                  FUN_145675a50(lVar7,local_2728,local_26e8,local_2748);
                  uVar16 = *puVar12;
                }
                uVar10 = *puVar3;
                lVar30 = *(longlong *)(local_2468 + uVar31 * 2);
                if (((uint)local_26f8 == 0) ||
                   (uVar19 = 1, *(int *)((longlong)local_2520 + uVar31 * 4) == 0)) {
                  uVar19 = 0;
                }
                (*local_2730)[6] = local_2620[uVar31];
                iVar25 = uVar16 + *(int *)(local_2708 + 0xcbeb0 +
                                          (ulonglong)(byte)(*local_2730)[1] * 4) + uVar29;
                if ((local_2745 != 0) && (local_2745 != 9)) {
                  iVar25 = iVar25 + local_261c;
                }
                pcVar6 = (char *)(local_2618 + lVar30);
                bVar21 = local_2744;
LAB_14566e2e2:
                lVar30 = local_2650;
                pIVar37 = &IMAGE_DOS_HEADER_140000000;
                if ((char)bVar21 < '\x01') {
                  iVar22 = local_2488[local_2648];
                }
                else {
                  iVar22 = *(int *)((longlong)local_2498 + local_2648 * 4);
                }
                iVar22 = iVar22 + iVar25;
                if (local_26d4 == 0) {
                  bVar15 = FUN_14566ce00(local_2698,local_2650);
                  uVar32 = *(ushort *)(&DAT_149df5720 + (ulonglong)bVar15 * -2);
                  if (uVar19 == 0) {
                    if ((((local_2747 == 0) || (*(int *)(lVar30 + 0x274) != 0)) ||
                        (*(int *)(local_2708 + 0x2e554) != 0)) ||
                       (bVar9 = (byte)*(undefined4 *)(local_2728 + 0x6448),
                       ((longlong)
                        (int)(*(ushort *)(pIVar37[0x150fa4].e_program + (ulonglong)bVar15 * 2) +
                              uVar10 + uVar29) * (longlong)*(int *)(local_2728 + 0x644c) + 0x100 >>
                       9) + ((longlong)pcVar6 << (bVar9 & 0x3f)) <
                       ((longlong)
                        ((ulonglong)uVar32 * (longlong)*(int *)(local_2728 + 0x644c) + 0x100) >> 9)
                       + ((longlong)local_2630 << (bVar9 & 0x3f)))) {
                      iVar22 = iVar22 + (uint)*(ushort *)
                                               (pIVar37[0x150fa4].e_program + (ulonglong)bVar15 * 2)
                      ;
                    }
                    else {
                      local_26dc = 1;
                      iVar22 = iVar22 + ((uVar32 - uVar10) - uVar29);
                      pcVar6 = local_2630;
                    }
                  }
                  else {
                    iVar22 = iVar22 + ((uVar32 - uVar10) - uVar29);
                  }
                  puVar38 = (uint *)(((longlong)pcVar6 <<
                                     ((byte)*(undefined4 *)(local_2728 + 0x6448) & 0x3f)) +
                                    ((longlong)*(int *)(local_2728 + 0x644c) * (longlong)iVar22 +
                                     0x100 >> 9));
                  local_26a0 = puVar38;
                }
                lVar39 = local_2728;
                bVar15 = local_2744;
                if (local_2668 != (char **)0x0) {
                  if ((*(int *)(local_2708 + 0x2e69c) == 2) && (5 < local_2748)) {
                    local_27b8 = local_25f8;
                    local_27c0 = local_2610;
                    local_27c8 = (char **)CONCAT71(local_27c8._1_7_,local_2748);
                    FUN_1456633f0(local_2708,local_2728,local_26d0,param_5);
                    if ((int)local_2610[0] < (int)local_25f8[0]) {
                      if (local_2747 == 0) {
                        if (local_2745 == 0) {
                          local_26a0 = (uint *)(((longlong)(int)(local_25f8[0] - local_2610[0]) + 1)
                                               * (longlong)puVar38);
                        }
                        else {
                          lVar30 = (longlong)(int)(local_25f8[0] - local_2610[0]) *
                                   (longlong)puVar38;
                          local_26a0 = (uint *)(((longlong)
                                                 (lVar30 + (ulonglong)((uint)(lVar30 >> 0x3f) & 3))
                                                >> 2) + (longlong)puVar38);
                        }
                      }
                      else if ('\0' < (char)local_2744) {
                        local_26a0 = (uint *)((longlong)puVar38 +
                                             ((longlong)
                                              ((longlong)puVar38 +
                                              (ulonglong)((uint)((longlong)puVar38 >> 0x3f) & 3)) >>
                                             2));
                      }
                    }
                  }
                  bVar15 = local_2744;
                  local_27b0 = (uint *)CONCAT71(local_27b0._1_7_,local_2745);
                  local_27b8 = (uint *)CONCAT71(local_27b8._1_7_,local_2744);
                  local_27c0 = (uint *)CONCAT71(local_27c0._1_7_,local_2747);
                  local_27c8 = local_2668;
                  FUN_145679b50(local_2708,lVar39,local_2748,&local_26a0);
                  puVar38 = local_26a0;
                }
                puVar11 = local_26e8;
                if ((local_2747 == 0) && ((longlong)puVar38 < (longlong)local_25e8)) {
                  local_273c = (*local_2730)[1];
                  local_25e8 = puVar38;
                }
                if ((local_26d4 == 0) && (local_2747 == 0)) {
                  plVar27 = local_2538;
                  lVar30 = 3;
                  do {
                    puVar12 = puVar38;
                    if (*plVar27 < (longlong)puVar38) {
                      puVar12 = (uint *)*plVar27;
                    }
                    *plVar27 = (longlong)puVar12;
                    plVar27 = plVar27 + 1;
                    lVar30 = lVar30 + -1;
                  } while (lVar30 != 0);
                  plVar27 = local_24f0;
                  lVar30 = 4;
                  do {
                    puVar12 = puVar38;
                    if (*plVar27 < (longlong)puVar38) {
                      puVar12 = (uint *)*plVar27;
                    }
                    *plVar27 = (longlong)puVar12;
                    plVar27 = plVar27 + 1;
                    lVar30 = lVar30 + -1;
                  } while (lVar30 != 0);
                  local_2608 = local_2538[2];
                  local_2680 = local_2538[1];
                }
                if ((((longlong)puVar38 < (longlong)local_26b8) || (*(int *)(lVar39 + 0x6940) != 0))
                   && (uVar4 = 3, local_26f8._4_4_ == 0)) {
                  local_2700 = (int)*(char *)((longlong)&local_20b0 + local_2710);
                  if (local_2747 == 0) {
                    *(undefined4 *)(*local_2730 + 0xc) = 0;
                    uVar4 = 1;
                    (*local_2730)[7] = 3;
                  }
                  else {
                    local_2678 = *(uint *)(lVar39 + 0x6484 + (longlong)(char)local_2747 * 4);
                  }
                  *local_2600 = iVar22;
                  *(char **)(local_2600 + 2) = pcVar6;
                  *(uint **)(local_2600 + 4) = puVar38;
                  uVar26 = *(undefined8 *)*local_2730;
                  uStack_2580 = *(undefined8 *)(*local_2730 + 8);
                  local_2690 = *local_2730;
                  local_2640 = (ulonglong)*(uint *)local_2730[4];
                  local_2674 = local_26dc;
                  local_2588 = (undefined1)uVar26;
                  uStack_2587 = (undefined1)((ulonglong)uVar26 >> 8);
                  uStack_2586 = (undefined6)((ulonglong)uVar26 >> 0x10);
                  local_25d8 = *(undefined8 *)local_2730[1];
                  uStack_25d0 = *(undefined8 *)(local_2730[1] + 8);
                  local_25c8 = *(undefined8 *)local_2730[2];
                  uStack_25c0 = *(undefined8 *)(local_2730[2] + 8);
                  local_2598 = *(undefined8 *)local_2730[3];
                  uStack_2590 = *(undefined8 *)(local_2730[3] + 8);
                  local_26d8 = uVar19;
                  local_26b8 = puVar38;
                  if (*(int *)(lVar39 + 0x6424) == 0) {
                    local_27c0 = (uint *)CONCAT44(local_27c0._4_4_,uVar4);
                    local_27c8 = (char **)((ulonglong)local_27c8 & 0xffffffff00000000);
                    FUN_145671400(lVar39,local_26e8,1);
                  }
                  memcpy((void *)puVar11[0xd],
                         (void *)((ulonglong)(byte)(*local_2730)[2] * 0x100 + 0x6530 + lVar39),
                         (longlong)*(int *)((longlong)puVar11 + 0x2b4));
                  *(undefined4 *)((longlong)puVar11 + 0x32c) =
                       *(undefined4 *)(lVar39 + 0x6930 + (ulonglong)(byte)(*local_2730)[2] * 4);
                  if (((local_26c8 & 1) != 0) &&
                     ('\x03' < *(char *)((longlong)&local_20b0 + local_2710))) {
                    iVar25 = (int)*(short *)(*(longlong *)(lVar39 + 0x61f8) + 2);
                    if ((*(byte *)(*(longlong *)(lVar39 + 0x6390) + 0x98) & 8) != 0) {
                      iVar25 = iVar25 >> ((char)*(undefined4 *)(lVar39 + 0x63f0) - 8U & 0x1f);
                    }
                    lVar30 = 4;
                    if (*(uint *)(lVar39 + 0x6480) != 0xffffffff) {
                      lVar30 = 4 - (ulonglong)(*(uint *)(lVar39 + 0x6480) < 0x10);
                    }
                    if ('\0' < (char)local_2747) {
                      local_26c0 = (uint)(lVar30 * (longlong)pcVar6 < (longlong)(iVar25 * iVar25));
                    }
                  }
                  local_2740 = local_2690._8_4_;
                }
                cVar41 = (char)local_2740;
                if ((local_26d4 == 0) && (local_2747 != 0)) {
                  if (*(int *)(local_2698 + 0x1220) == 2) {
                    iVar25 = iVar22 - local_26c4;
                    iVar5 = iVar22;
                  }
                  else {
                    iVar5 = local_26c4 + iVar22;
                    iVar25 = iVar22;
                  }
                  lVar13 = (longlong)pcVar6 << ((byte)*(undefined4 *)(lVar39 + 0x6448) & 0x3f);
                  lVar30 = ((longlong)*(int *)(lVar39 + 0x644c) * (longlong)iVar25 + 0x100 >> 9) +
                           lVar13;
                  lVar13 = ((longlong)*(int *)(lVar39 + 0x644c) * (longlong)iVar5 + 0x100 >> 9) +
                           lVar13;
                  if ((char)bVar15 < '\x01') {
                    if (lVar30 < local_2538[0]) {
                      local_2538[0] = lVar30;
                    }
                  }
                  else {
                    if (lVar30 < local_2680) {
                      local_2680 = lVar30;
                    }
                    local_2538[1] = local_2680;
                  }
                  if (lVar13 < local_2608) {
                    local_2608 = lVar13;
                  }
                  local_2538[2] = local_2608;
                  if ((local_26f8._4_4_ == 0) && (bVar9 = *(byte *)(local_2698 + 0x51c), bVar9 != 3)
                     ) {
                    uVar34 = 3;
                    if (bVar9 != 4) {
                      uVar34 = (ulonglong)bVar9;
                    }
                    lVar30 = local_24b8[uVar34];
                    lVar13 = 4;
                    uVar34 = uVar17;
                    do {
                      uVar31 = uVar17;
                      if (lVar30 != 0x7fffffffffffffff) {
                        uVar31 = *(longlong *)((longlong)local_24b8 + uVar34) - lVar30;
                        if (*(longlong *)((longlong)local_24b8 + uVar34) == 0x7fffffffffffffff) {
                          uVar31 = (local_25e0 - lVar30) + 10;
                        }
                      }
                      lVar7 = *(longlong *)((longlong)local_24f0 + uVar34);
                      if ((longlong)(uVar31 + (longlong)puVar38) <=
                          *(longlong *)((longlong)local_24f0 + uVar34)) {
                        lVar7 = uVar31 + (longlong)puVar38;
                      }
                      *(longlong *)((longlong)local_24f0 + uVar34) = lVar7;
                      uVar34 = uVar34 + 8;
                      lVar13 = lVar13 + -1;
                    } while (lVar13 != 0);
                  }
                }
                auVar43 = local_2690;
                if ((local_26c0 != 0) ||
                   ((lVar30 = local_2718, uVar4 = local_2740, *(int *)(lVar39 + 0x6940) != 0 &&
                    ((char)bVar15 < '\x01')))) break;
              }
            }
            else {
              local_2750 = local_24b8;
              local_2758 = &local_25e0;
              local_2760 = local_26b8;
              local_2768 = &local_2630;
              local_2770 = local_2198;
              local_2778 = &local_2090;
              local_2780 = &local_2500;
              local_2788 = param_5;
              local_2790 = (char **)CONCAT44(local_2790._4_4_,local_26d0);
              local_2798 = local_2428;
              local_27a0 = (byte *)&local_26d4;
              local_27a8 = local_2668;
              local_27b0 = &local_26cc;
              local_27b8 = &local_26fc;
              local_27c0 = (uint *)&local_26f8;
              local_27c8 = &local_26a8;
              puVar38 = (uint *)FUN_145678a70(local_2708,local_2728,local_2748,local_26b0);
              lVar30 = local_2718;
              lVar39 = lVar13;
              auVar43 = local_2690;
              uVar4 = local_2740;
              local_26a0 = puVar38;
              if (puVar38 != (uint *)0x7fffffffffffffff) {
                if ((char)bVar21 < '\x01') {
                  uVar10 = (uint)local_273b[0];
                }
                else {
                  uVar10 = 0x100 - local_273b[0];
                }
                local_26c4 = (uint)*(ushort *)(&DAT_149df5520 + (longlong)(int)uVar10 * 2);
                pcVar6 = local_26a8;
                uVar29 = local_26fc;
                uVar10 = local_26cc;
                iVar25 = local_26b0[0];
                uVar19 = (uint)local_26f8;
                if (*(int *)(local_2698 + 0x1220) == 2) {
                  iVar25 = local_26b0[0] + local_26c4;
                }
                goto LAB_14566e2e2;
              }
            }
          }
          else if ((((*(int *)(local_2708 + 0xb4940) != 0) &&
                    (*(int *)(local_2708 + 0x2b044 + lVar18 * 4) !=
                     *(int *)(local_2708 + 0x2b044 + (longlong)(char)bVar21 * 4))) &&
                   (((*(uint *)(local_2708 + 0xb46a8) &
                     *(uint *)(&DAT_149df5090 + (longlong)(char)bVar21 * 4)) != 0 &&
                    ((*(char *)(local_2708 + 0x2b088) == '\0' ||
                     ((*(byte *)(local_2708 + 0x2b0d8 + local_25f0 * 4) & 4) == 0)))))) &&
                  (((local_26c8 & 2) == 0 || ((local_2700 < 0 || ((char)local_2740 != '\0')))))) {
            local_26f8._4_4_ = (uint)(*(int *)(local_2708 + 0x2b100) == 0);
            if (bVar9 == 0) goto LAB_14566dd15;
            goto LAB_14566dcd0;
          }
        }
      }
    }
LAB_14566ddc5:
    cVar41 = (char)uVar4;
    local_2710 = local_2710 + 1;
  } while (local_2710 < 0x1e);
  puVar38 = local_26b8;
  bVar15 = local_2748;
  if (auVar43[1] == '\r') {
    uVar35 = auVar43._12_4_;
    cVar24 = auVar43[9];
    if ((local_2388[cVar41] == uVar35) &&
       ((cVar24 < '\x01' || (local_2388[cVar24] == (uint)local_25d8)))) {
      uStack_2587 = 10;
      local_2690[1] = 10;
      local_2690[0] = local_2588;
      local_2690._2_6_ = uStack_2586;
      local_2690._8_8_ = uStack_2580;
      auVar43 = local_2690;
    }
    else if ((local_2388[(longlong)cVar41 + 4] == uVar35) &&
            ((cVar24 < '\x01' || (local_2388[(longlong)cVar24 + 4] == (uint)local_25d8)))) {
      uStack_2587 = 0xb;
      local_2690[1] = 0xb;
      local_2690[0] = local_2588;
      local_2690._2_6_ = uStack_2586;
      local_2690._8_8_ = uStack_2580;
      auVar43 = local_2690;
    }
    else {
      auVar43 = local_2690;
      if ((uVar35 == 0) && ((cVar24 < '\x01' || ((uint)local_25d8 == 0)))) {
        uStack_2587 = 0xc;
        local_2690[1] = 0xc;
        local_2690[0] = local_2588;
        local_2690._2_6_ = uStack_2586;
        local_2690._8_8_ = uStack_2580;
        auVar43 = local_2690;
      }
    }
  }
  if ((local_2700 < 0) || ((longlong)param_9 <= (longlong)local_26b8)) {
    if ((*(int *)(local_2708 + 0xcee10) != 0) && (local_2748 == 3)) {
      puVar11 = (undefined8 *)**(longlong **)(lVar39 + 0x6340);
      uVar26 = puVar11[1];
      *local_26e8 = *puVar11;
      local_26e8[1] = uVar26;
      uVar26 = puVar11[3];
      local_26e8[2] = puVar11[2];
      local_26e8[3] = uVar26;
      uVar26 = puVar11[5];
      local_26e8[4] = puVar11[4];
      local_26e8[5] = uVar26;
      uVar26 = puVar11[7];
      local_26e8[6] = puVar11[6];
      local_26e8[7] = uVar26;
      *(undefined4 *)(local_26e8 + 8) = *(undefined4 *)(puVar11 + 8);
    }
    *local_2600 = 0x7fffffff;
    local_2600[4] = -1;
    local_2600[5] = 0x7fffffff;
  }
  else {
    uVar4 = (undefined4)local_2640;
    if ((*(int *)(local_2660 + 0x178) != 0) && (cVar41 == '\0')) {
      *local_2730 = auVar43;
      *(uint *)local_2730[1] = (uint)local_25d8;
      *(undefined4 *)(local_2730[1] + 4) = local_25d8._4_4_;
      *(undefined4 *)(local_2730[1] + 8) = (undefined4)uStack_25d0;
      *(undefined4 *)(local_2730[1] + 0xc) = uStack_25d0._4_4_;
      *(undefined8 *)local_2730[2] = local_25c8;
      *(undefined8 *)(local_2730[2] + 8) = uStack_25c0;
      *(undefined8 *)local_2730[3] = local_2598;
      *(undefined8 *)(local_2730[3] + 8) = uStack_2590;
      *(undefined4 *)local_2730[4] = uVar4;
      uVar34 = (ulonglong)
               (byte)(&DAT_149d54b80)
                     [(longlong)*(int *)(lVar39 + 0x6214) +
                      ((longlong)*(int *)(lVar39 + 0x6210) +
                      ((ulonglong)(byte)(*local_2730)[2] + (ulonglong)(byte)(*local_2730)[0] * 4) *
                      2) * 2];
      bVar9 = 3;
      if (2 < local_2748) {
        bVar9 = local_2748;
      }
      local_27a8 = (char **)CONCAT71(local_27a8._1_7_,
                                     (&DAT_149d54b80)
                                     [(longlong)*(int *)(lVar39 + 0x6214) +
                                      ((longlong)*(int *)(lVar39 + 0x6210) +
                                      ((ulonglong)(byte)(*local_2730)[2] +
                                      (ulonglong)(byte)(*local_2730)[0] * 4) * 2) * 2]);
      local_27b0 = (uint *)CONCAT71(local_27b0._1_7_,bVar9);
      local_27b8 = (uint *)((longlong)local_2520 + uVar34 * 4);
      local_27c0 = local_2468 + uVar34 * 2;
      local_27c8 = (char **)((longlong)local_2478 + uVar34 * 4);
      FUN_145675890(local_2708,lVar39,local_26e8,(longlong)&local_2510 + uVar34 * 4);
    }
    if (*(int *)(local_2708 + 0xb4304) == 0) {
      FUN_14561bcd0(local_2638 + 4,*(undefined4 *)(local_2660 + 0x40),bVar15,local_2700);
    }
    lVar30 = local_2728;
    lVar13 = 3;
    *(undefined8 *)*local_2730 = local_2690._0_8_;
    *(undefined8 *)(*local_2730 + 8) = local_2690._8_8_;
    *(undefined8 *)local_2730[1] = local_25d8;
    *(undefined8 *)(local_2730[1] + 8) = uStack_25d0;
    *(undefined8 *)local_2730[2] = local_25c8;
    *(undefined8 *)(local_2730[2] + 8) = uStack_25c0;
    *(undefined8 *)local_2730[3] = local_2598;
    *(undefined8 *)(local_2730[3] + 8) = uStack_2590;
    *(undefined4 *)local_2730[4] = uVar4;
    *(uint *)(lVar39 + 0x6940) = *(uint *)(lVar39 + 0x6940) | local_2674;
    uVar34 = uVar17;
    do {
      lVar7 = (longlong)puVar38 - *(longlong *)((longlong)local_2538 + uVar34);
      if (*(longlong *)((longlong)local_2538 + uVar34) == 0x7fffffffffffffff) {
        lVar7 = -0x80000000;
      }
      *(longlong *)((longlong)local_24d0 + uVar34) = lVar7;
      lVar13 = lVar13 + -1;
      uVar34 = uVar34 + 8;
    } while (lVar13 != 0);
    uVar35 = *(uint *)(lVar39 + 0x6940);
    uVar34 = uVar17;
    if (uVar35 == 0) {
      do {
        uVar31 = uVar17;
        if (*(longlong *)((longlong)local_24f0 + uVar34) != 0x7fffffffffffffff) {
          uVar31 = (longlong)puVar38 - *(longlong *)((longlong)local_24f0 + uVar34);
        }
        *(ulonglong *)((longlong)local_2448 + uVar34) = uVar31;
        local_2628 = (int *)((longlong)local_2628 + -1);
        uVar34 = uVar34 + 8;
      } while (local_2628 != (int *)0x0);
      uVar35 = *(uint *)(lVar39 + 0x6940);
      local_2520[0] = local_2438;
      local_2520[1] = (char *)uStack_2430;
      local_2628 = (int *)0x0;
    }
    else {
      local_2448[0] = 0;
      local_2448[1] = 0;
      local_2520[0] = (char *)0x0;
      local_2520[1] = (char *)0x0;
    }
    uVar35 = uVar35 | local_26d8;
    *(uint *)(lVar39 + 0x6940) = uVar35;
    uVar10 = local_26d8;
    local_2510 = local_2448[0];
    uStack_2508 = local_2448[1];
    if ((uVar35 == 0) && (*(int *)(lVar39 + 0x6424) == 0)) {
      local_273b[0] = *(byte *)(**(longlong **)(lVar39 + 0x6340) + 8);
      uVar34 = 1;
      if ('\0' < (char)local_273b[0]) {
        uVar34 = 3;
      }
      puVar20 = local_26e8 + 0x4e;
      puVar11 = (undefined8 *)(local_2728 + 0x2010);
      uVar31 = uVar17;
      uVar40 = uVar17;
      do {
        *puVar11 = *puVar20;
        uVar10 = FUN_145661fa0(lVar30,local_2748,uVar17);
        uVar10 = (uint)uVar31 | uVar10;
        uVar31 = (ulonglong)uVar10;
        puVar20 = puVar20 + 3;
        uVar17 = (ulonglong)((int)uVar17 + 1);
        puVar11 = puVar11 + 0x410;
        uVar40 = uVar40 + 1;
      } while ((longlong)uVar40 < (longlong)uVar34);
      uVar35 = *(uint *)(lVar30 + 0x6940);
      lVar39 = lVar30;
      if ((char)local_273b[0] < '\x01') {
        puVar20 = (undefined8 *)(uVar34 * 0x2080 + lVar30 + 0x2010);
        puVar11 = local_26e8 + uVar34 * 3 + 0x4f;
        do {
          *puVar20 = *puVar11;
          uVar10 = FUN_145661fa0(local_2728,local_2748,uVar34);
          uVar10 = (uint)uVar31 | uVar10;
          uVar31 = (ulonglong)uVar10;
          puVar11 = puVar11 + 3;
          uVar35 = (int)uVar34 + 1;
          uVar34 = (ulonglong)uVar35;
          puVar20 = puVar20 + 0x410;
        } while ((int)uVar35 < 3);
        uVar35 = *(uint *)(local_2728 + 0x6940);
        lVar39 = local_2728;
      }
      uVar10 = local_26d8 | uVar10 == 0;
    }
    *(uint *)(local_26e8 + 0x57) = uVar35;
    *(int *)(local_26e8 + 0x5a) = local_2700;
    *(uint *)(local_26e8 + 0x58) = uVar10;
    puVar11 = (undefined8 *)**(longlong **)(lVar39 + 0x6340);
    uVar26 = puVar11[1];
    *local_26e8 = *puVar11;
    local_26e8[1] = uVar26;
    uVar26 = puVar11[3];
    local_26e8[2] = puVar11[2];
    local_26e8[3] = uVar26;
    uVar26 = puVar11[5];
    local_26e8[4] = puVar11[4];
    local_26e8[5] = uVar26;
    uVar26 = puVar11[7];
    local_26e8[6] = puVar11[6];
    local_26e8[7] = uVar26;
    *(undefined4 *)(local_26e8 + 8) = *(undefined4 *)(puVar11 + 8);
    puVar11 = *(undefined8 **)(lVar39 + 0x6410);
    uVar26 = puVar11[1];
    *(undefined8 *)((longlong)local_26e8 + 0x44) = *puVar11;
    *(undefined8 *)((longlong)local_26e8 + 0x4c) = uVar26;
    uVar26 = puVar11[3];
    *(undefined8 *)((longlong)local_26e8 + 0x54) = puVar11[2];
    *(undefined8 *)((longlong)local_26e8 + 0x5c) = uVar26;
    *(undefined4 *)((longlong)local_26e8 + 100) = *(undefined4 *)(puVar11 + 4);
    local_26e8[0x5c] = local_2510;
    local_26e8[0x5d] = uStack_2508;
    *(undefined4 *)((longlong)local_26e8 + 0x2dc) = local_24d0[0];
    *(undefined4 *)(local_26e8 + 0x5b) = local_24c8;
    *(undefined4 *)((longlong)local_26e8 + 0x2d4) = local_24c0;
    local_26e8[0x5e] = local_2520[0];
    local_26e8[0x5f] = local_2520[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_27e8);
}



// FUNCTION 14566ee20 FUN_14566ee20 body=726 status=ok
// SIG undefined FUN_14566ee20(void)

void FUN_14566ee20(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined1 param_5,undefined8 *param_6,longlong param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 auVar11 [12];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte local_res8 [8];
  longlong local_res10;
  undefined1 *puVar17;
  byte *pbVar18;
  undefined1 local_58 [4];
  int local_54;
  undefined1 local_48 [16];
  undefined1 auVar12 [16];
  
  iVar6 = 0;
  uVar10 = 4;
  lVar7 = **(longlong **)(param_3 + 0x6340);
  uVar1 = *(undefined1 *)(lVar7 + 4);
  if ((*(int *)(param_1 + 0xb46fc) == 0) || (0x72 < *(int *)(param_3 + 0x6430))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_3 + 0x14150) = uVar4;
  pbVar18 = local_res8;
  puVar17 = local_48;
  local_res10 = param_2;
  FUN_145677e10(param_1 + 0x29ee0,param_3 + 0x6180,uVar1,local_58,puVar17,pbVar18);
  uVar4 = (undefined4)((ulonglong)pbVar18 >> 0x20);
  *(undefined8 *)(param_3 + 0x6484) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_3 + 0x648c) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_3 + 0x6498) = 0x7fffffff7fffffff;
  *(undefined4 *)(param_3 + 0x64a0) = 0x7fffffff;
  *param_4 = 0x7fffffff;
  *(undefined1 *)(lVar7 + 1) = 0xc;
  *(undefined1 *)(lVar7 + 6) = 0;
  *(undefined2 *)(lVar7 + 8) = 0xff01;
  *(undefined4 *)(lVar7 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x6940) = 1;
  *(undefined4 *)((longlong)param_6 + 0x32c) = 0;
  if (((*(char *)(param_1 + 0x2a3fc) != '\x03') &&
      (uVar10 = 0, *(char *)(param_1 + 0x2a3fc) == '\x04')) &&
     (*(uint *)(param_1 + 0xb47cc) <= *(uint *)(param_3 + 0x6480))) {
    iVar9 = 0x7fffffff;
    iVar8 = 0;
    do {
      *(char *)(lVar7 + 7) = (char)iVar8;
      iVar5 = FUN_14561b570(param_1,param_3 + 0x6180);
      uVar4 = (undefined4)((ulonglong)pbVar18 >> 0x20);
      if (iVar5 < iVar9) {
        uVar10 = *(undefined1 *)(lVar7 + 7);
        iVar9 = iVar5;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
  }
  if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
    *(undefined1 *)(lVar7 + 7) = uVar10;
    iVar6 = FUN_14561b570(param_1,param_3 + 0x6180);
  }
  else {
    *(char *)(lVar7 + 7) = *(char *)(param_1 + 0x2a3fc);
  }
  if (*(int *)(param_1 + 0x2b100) == 2) {
    iVar6 = iVar6 + (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)local_res8[0] * 2);
  }
  iVar9 = *(int *)(param_3 + 0x644c);
  *param_4 = iVar6 + local_54;
  param_4[2] = 0;
  param_4[3] = 0;
  lVar7 = (longlong)iVar9 * (longlong)(iVar6 + local_54) + 0x100 >> 9;
  *(longlong *)(param_4 + 4) = lVar7;
  if (lVar7 < param_7) {
    FUN_14561bcd0(local_res10 + 0x10,*(undefined4 *)(param_1 + 0xb46f0),param_5,10);
    auVar12 = ZEXT816(0);
    auVar11 = auVar12._0_12_;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    if (*(int *)(param_3 + 0x6424) == 0) {
      FUN_145671400(param_3,param_6,1,0,(ulonglong)puVar17 & 0xffffffff00000000,CONCAT44(uVar4,3));
      auVar11 = auVar12._0_12_;
    }
    *(undefined4 *)(param_6 + 0x57) = *(undefined4 *)(param_3 + 0x6940);
    *(undefined4 *)(param_6 + 0x58) = 0;
    *(undefined4 *)(param_6 + 0x5a) = 10;
    puVar2 = (undefined8 *)**(longlong **)(param_3 + 0x6340);
    uVar3 = puVar2[1];
    *param_6 = *puVar2;
    param_6[1] = uVar3;
    uVar3 = puVar2[3];
    param_6[2] = puVar2[2];
    param_6[3] = uVar3;
    uVar3 = puVar2[5];
    param_6[4] = puVar2[4];
    param_6[5] = uVar3;
    uVar3 = puVar2[7];
    param_6[6] = puVar2[6];
    param_6[7] = uVar3;
    *(undefined4 *)(param_6 + 8) = *(undefined4 *)(puVar2 + 8);
    puVar2 = *(undefined8 **)(param_3 + 0x6410);
    uVar3 = puVar2[1];
    *(undefined8 *)((longlong)param_6 + 0x44) = *puVar2;
    *(undefined8 *)((longlong)param_6 + 0x4c) = uVar3;
    uVar3 = puVar2[3];
    *(undefined8 *)((longlong)param_6 + 0x54) = puVar2[2];
    *(undefined8 *)((longlong)param_6 + 0x5c) = uVar3;
    uVar4 = *(undefined4 *)(puVar2 + 4);
    *(int *)((longlong)param_6 + 0x2dc) = auVar11._0_4_;
    *(undefined4 *)(param_6 + 0x5c) = uVar13;
    *(undefined4 *)((longlong)param_6 + 0x2e4) = uVar14;
    *(undefined4 *)(param_6 + 0x5d) = uVar15;
    *(undefined4 *)((longlong)param_6 + 0x2ec) = uVar16;
    *(undefined4 *)((longlong)param_6 + 100) = uVar4;
    *(int *)(param_6 + 0x5b) = auVar11._8_4_;
    *(undefined4 *)((longlong)param_6 + 0x2d4) = 0;
    *(undefined4 *)(param_6 + 0x5e) = uVar13;
    *(undefined4 *)((longlong)param_6 + 0x2f4) = uVar14;
    *(undefined4 *)(param_6 + 0x5f) = uVar15;
    *(undefined4 *)((longlong)param_6 + 0x2fc) = uVar16;
  }
  else {
    *param_4 = 0x7fffffff;
    param_4[4] = -1;
    param_4[5] = 0x7fffffff;
  }
  return;
}



// FUNCTION 14566f100 FUN_14566f100 body=49 status=ok
// SIG undefined FUN_14566f100(void)

undefined8 FUN_14566f100(longlong param_1)

{
  if ((*(int *)(param_1 + 0x2e56c) == 2) &&
     ((0.0 < *(double *)(param_1 + 0xb4e20) || (0.0 < *(double *)(param_1 + 0xb4e28))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14566f140 FUN_14566f140 body=159 status=ok
// SIG undefined FUN_14566f140(void)

undefined8 FUN_14566f140(longlong param_1,int param_2,int param_3)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x2a308);
  uVar2 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2e56c) == 2) {
    FUN_1425b0090();
    dVar1 = *(double *)(param_1 + 0xb4e20);
    iVar4 = (int)(dVar1 * 2.0);
    iVar3 = iVar3 - (int)(dVar1 + dVar1);
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
  }
  if (((param_2 <= iVar4) && (iVar4 < param_3 + param_2)) ||
     ((param_2 <= iVar3 && (iVar3 < param_3 + param_2)))) {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14566f1e0 FUN_14566f1e0 body=159 status=ok
// SIG undefined FUN_14566f1e0(void)

undefined8 FUN_14566f1e0(longlong param_1,int param_2,int param_3)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x2a310);
  uVar2 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2e56c) == 2) {
    FUN_1425b0090();
    dVar1 = *(double *)(param_1 + 0xb4e28);
    iVar4 = (int)(dVar1 * 2.0);
    iVar3 = iVar3 - (int)(dVar1 + dVar1);
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
  }
  if (((param_2 <= iVar4) && (iVar4 < param_3 + param_2)) ||
     ((param_2 <= iVar3 && (iVar3 < param_3 + param_2)))) {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14566f280 FUN_14566f280 body=216 status=ok
// SIG undefined FUN_14566f280(void)

undefined8 FUN_14566f280(longlong param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x2a308);
  if (*(int *)(param_1 + 0x2e56c) == 2) {
    FUN_1425b0090();
    dVar1 = *(double *)(param_1 + 0xb4e20);
    iVar2 = (int)(dVar1 * 2.0);
    iVar3 = iVar3 - (int)(dVar1 + dVar1);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
  }
  if (((iVar2 < param_2) || (param_2 + 8 <= iVar2)) && ((iVar3 < param_2 || (param_2 + 8 <= iVar3)))
     ) {
    iVar3 = *(int *)(param_1 + 0x2a310);
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2e56c) == 2) {
      FUN_1425b0090();
      dVar1 = *(double *)(param_1 + 0xb4e28);
      iVar2 = (int)(dVar1 * 2.0);
      iVar3 = iVar3 - (int)(dVar1 + dVar1);
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
    }
    if (((iVar2 < param_3) || (param_3 + 8 <= iVar2)) &&
       ((iVar3 < param_3 || (param_3 + 8 <= iVar3)))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14566f360 FUN_14566f360 body=8272 status=ok
// SIG undefined FUN_14566f360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14566f360(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int *param_6,byte param_7,undefined8 *param_8,ulonglong *param_9)

{
  double dVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  byte bVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 uVar28;
  int iVar29;
  longlong lVar30;
  char cVar31;
  char *pcVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong **ppuVar35;
  longlong *plVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined8 uVar82;
  undefined8 auStack_2658 [654];
  undefined1 auStack_11e8 [32];
  ulonglong *local_11c8;
  ulonglong *local_11c0;
  int *local_11b8;
  longlong *local_11b0;
  undefined8 *local_11a8;
  longlong *local_11a0;
  undefined4 local_1198;
  undefined4 *local_1190;
  undefined1 *local_1188;
  int local_1180;
  int local_1178;
  int local_1170;
  byte local_1168;
  char local_1167;
  byte local_1166;
  char local_1165;
  uint local_1164;
  int local_1160;
  undefined1 local_115c;
  byte local_115b [3];
  uint local_1158;
  undefined4 *local_1150;
  uint local_1148;
  uint local_1144;
  int local_1140;
  undefined4 local_113c;
  int local_1138;
  int local_1134;
  int local_1130;
  longlong local_1128;
  ulonglong local_1120;
  int local_1118;
  uint local_1114;
  ulonglong *local_1110;
  uint local_1108;
  int local_1104;
  uint local_1100;
  undefined4 local_10fc;
  undefined4 local_10f8;
  int local_10f4;
  undefined8 *local_10f0;
  ulonglong *local_10e8;
  ulonglong *local_10e0;
  ulonglong *local_10d8;
  undefined4 local_10d0 [2];
  undefined1 local_10c8 [8];
  undefined8 *local_10c0;
  ulonglong local_10b8;
  longlong local_10b0;
  undefined8 local_10a8;
  int local_10a0;
  uint local_109c;
  undefined4 local_1098;
  undefined4 local_1094;
  undefined4 local_1090;
  undefined4 local_108c;
  longlong local_1088;
  ulonglong *local_1080;
  ulonglong *local_1078;
  ulonglong *local_1070;
  ulonglong *local_1068;
  int local_1060;
  longlong local_1058;
  longlong local_1050;
  longlong local_1048;
  longlong local_1040;
  ulonglong *local_1038;
  int *local_1030;
  longlong local_1028;
  int local_1020 [2];
  longlong local_1018;
  ulonglong local_1010;
  int local_1008;
  ulonglong local_1000;
  ulonglong local_ff8;
  ulonglong local_ff0;
  longlong local_fe8;
  ulonglong local_fe0;
  longlong local_fd8;
  ulonglong local_fd0;
  longlong local_fc8;
  longlong local_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  longlong local_f88;
  longlong local_f80;
  ulonglong local_f78;
  ulonglong *local_f70;
  longlong lStack_f68;
  ulonglong *local_f60;
  ulonglong *puStack_f58;
  longlong local_f50 [4];
  undefined8 local_f30;
  undefined4 local_f28;
  undefined8 local_f24;
  undefined4 local_f1c;
  undefined8 local_f18;
  undefined4 local_f10;
  undefined8 local_f0c;
  undefined4 local_f04;
  ulonglong *local_f00 [3];
  undefined4 local_ee8 [7];
  undefined4 uStack_ecc;
  undefined4 local_ec8;
  undefined4 uStack_ec4;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined4 local_ea8;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  ulonglong local_e78 [2];
  int local_e68 [4];
  undefined8 local_e58 [28];
  undefined8 local_d78 [28];
  int local_c98 [4];
  longlong local_c88 [2];
  undefined4 auStack_c74 [4];
  undefined4 auStack_c64 [3];
  undefined1 local_c58 [8];
  undefined4 local_c50;
  undefined8 local_c4c;
  undefined4 local_c44;
  undefined8 local_c40;
  undefined4 local_c38;
  undefined8 local_c34;
  undefined4 local_c2c;
  ulonglong local_f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14566f37f;
  local_f8 = DAT_14c707940 ^ (ulonglong)auStack_11e8;
  local_fd8 = param_3 + 0x6180;
  local_1030 = param_6;
  local_10f0 = param_8;
  local_1150 = (undefined4 *)**(longlong **)(param_3 + 0x6340);
  local_1166 = *(byte *)(local_1150 + 1);
  local_1110 = param_9;
  local_1080 = param_9;
  local_1104 = 0;
  local_1168 = param_7;
  local_1148 = 4;
  local_115c = 0;
  local_1118 = param_4;
  local_1088 = param_1;
  local_fc8 = param_2;
  local_f88 = param_3;
  local_1008 = FUN_14561c1a0(param_1,param_7,*(undefined4 *)(param_1 + 0x2a31c),
                             *(undefined4 *)(param_1 + 0x2a320));
  iVar20 = *(int *)(param_1 + 0x2a308);
  iVar9 = 0;
  local_1100 = 0;
  local_10a8 = 0;
  local_10b0 = 0;
  if (*(int *)(param_1 + 0x2e56c) == 2) {
    FUN_1425b0090();
    dVar1 = *(double *)(param_1 + 0xb4e20);
    iVar9 = (int)(dVar1 * 2.0);
    iVar20 = iVar20 - (int)(dVar1 + dVar1);
    if (iVar20 < iVar9) {
      iVar20 = iVar9;
    }
  }
  if (((iVar9 < param_4) || (param_4 + 8 <= iVar9)) &&
     ((iVar20 < param_4 || (param_4 + 8 <= iVar20)))) {
    iVar9 = 0;
    iVar20 = *(int *)(param_1 + 0x2a310);
    if (*(int *)(param_1 + 0x2e56c) == 2) {
      FUN_1425b0090();
      dVar1 = *(double *)(param_1 + 0xb4e28);
      iVar9 = (int)(dVar1 * 2.0);
      iVar20 = iVar20 - (int)(dVar1 + dVar1);
      if (iVar20 < iVar9) {
        iVar20 = iVar9;
      }
    }
    if (((param_5 <= iVar9) && (iVar9 < param_5 + 8)) ||
       ((param_5 <= iVar20 && (iVar20 < param_5 + 8)))) goto LAB_14566f717;
  }
  else {
LAB_14566f717:
    if ((*(int *)(param_1 + 0x2e56c) == 2) &&
       ((0.0 < *(double *)(param_1 + 0xb4e20) || (0.0 < *(double *)(param_1 + 0xb4e28))))) {
      local_fe8 = 1;
      goto LAB_14566f543;
    }
  }
  local_fe8 = 0;
LAB_14566f543:
  local_f80 = (ulonglong)local_1168 * 0x78 + local_fc8 + 0x10;
  if ((*(int *)(param_1 + 0xb46fc) == 0) || (uVar43 = 1, 0x72 < *(int *)(param_3 + 0x6430))) {
    uVar43 = 0;
  }
  *(undefined4 *)(param_3 + 0x14150) = uVar43;
  uVar43 = 0;
  uVar44 = 0;
  uVar46 = 0;
  uVar48 = 0;
  *(undefined4 *)(param_3 + 0x6530) = 0;
  lVar12 = 4;
  local_1000 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0;
  local_fc0 = 4;
  uVar54 = 0;
  uVar55 = 0;
  uVar56 = 0;
  uVar57 = 0;
  puVar6 = local_ee8 + 2;
  uVar66 = 0;
  uVar67 = 0;
  uVar68 = 0;
  uVar69 = 0;
  uVar70 = 0;
  uVar71 = 0;
  uVar72 = 0;
  uVar73 = 0;
  uVar74 = 0;
  uVar75 = 0;
  uVar76 = 0;
  uVar77 = 0;
  uVar78 = 0;
  uVar79 = 0;
  uVar80 = 0;
  uVar81 = 0;
  local_fb8 = 0;
  uStack_fb0 = 0;
  local_fa8 = 0;
  uStack_fa0 = 0;
  local_f98 = 0;
  uStack_f90 = 0;
  local_f50[0] = 0x7fffffffffffffff;
  local_f50[1] = 0x7fffffffffffffff;
  local_f50[2] = 0x7fffffffffffffff;
  local_f50[3] = 0x7fffffffffffffff;
  do {
    puVar6[-2] = 0x80008000;
    puVar6[-1] = 0x80008000;
    *puVar6 = 0x80008000;
    puVar6[1] = 0x80008000;
    puVar6 = puVar6 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  local_11c0 = (ulonglong *)local_115b;
  local_11c8 = local_e78;
  FUN_145677e10(param_1 + 0x29ee0,0x7fffffffffffffff,local_1166,local_e68);
  iVar20 = local_1118;
  bVar5 = local_1168;
  uVar14 = 1;
  lVar12 = 0;
  local_1068 = (ulonglong *)0x7fffffffffffffff;
  local_f00[0] = (ulonglong *)0x7fffffffffffffff;
  local_f00[1] = (ulonglong *)0x7fffffffffffffff;
  local_10f4 = 0x7fffffff;
  local_f70 = (ulonglong *)0x7fffffffffffffff;
  lStack_f68 = 0x7fffffffffffffff;
  *local_1030 = 0x7fffffff;
  local_f60 = (ulonglong *)0x7fffffffffffffff;
  puStack_f58 = (ulonglong *)0x7fffffffffffffff;
  local_1114 = local_10a8._4_4_;
  local_1164 = (uint)local_10a8;
  do {
    if ((*(uint *)(param_1 + 0xb46a8) & *(uint *)((longlong)&DAT_149df5094 + lVar12)) == 0) {
      local_1164 = local_1164 | 1 << (uVar14 & 0x1f);
      local_1114 = local_1114 | 9;
    }
    else {
      local_11a8 = local_e58;
      local_11b0 = local_c88;
      local_11b8 = local_c98;
      local_11c0 = (ulonglong *)CONCAT44(local_11c0._4_4_,param_5);
      local_11c8 = (ulonglong *)CONCAT44(local_11c8._4_4_,iVar20);
      FUN_1456780c0(param_1,param_3,uVar14,bVar5);
    }
    *(undefined4 *)((longlong)auStack_c64 + lVar12) = 0x80008000;
    *(undefined4 *)((longlong)auStack_c74 + lVar12) = 0;
    bVar18 = (char)uVar14 + 1;
    uVar14 = (uint)bVar18;
    lVar12 = lVar12 + 4;
  } while ((char)bVar18 < '\x04');
  lVar12 = param_3 + 0x6180;
  local_1070 = local_f00[1];
  local_1078 = local_f00[0];
  local_1038 = puStack_f58;
  local_10e0 = local_f60;
  local_10e8 = local_f70;
  local_1048 = local_1058;
  local_108c = local_f10;
  local_1094 = local_f1c;
  local_1098 = local_f28;
  local_1160 = 0;
  local_10a8 = 0;
  local_113c = 0;
  local_10d8 = (ulonglong *)lStack_f68;
  local_1090 = local_f04;
  puVar6 = local_1150;
  uVar82 = local_f0c;
  uVar14 = local_1164;
  do {
    lVar7 = local_fd8;
    lVar34 = local_1088;
    puVar23 = local_1110;
    local_1144 = 0;
    local_1130 = 0;
    lVar33 = 0x7fffffff;
    local_10a0 = 0;
    local_1010 = 0;
    local_fd0 = 0;
    local_1167 = (&DAT_149df5040)[local_10a8 * 2];
    lVar30 = (longlong)local_1167;
    local_1158 = 0;
    local_1138 = 0;
    local_10b8 = 0;
    local_10d0[0] = 0;
    local_109c = 0;
    local_1140 = 0;
    local_1165 = (&DAT_149df5041)[local_10a8 * 2];
    lVar24 = (longlong)local_1165;
    local_1050 = 0x7fffffff;
    *(undefined8 *)(param_3 + 0x6930) = 0;
    *(undefined8 *)(param_3 + 0x6938) = 0;
    cVar19 = (char)local_113c;
    if (((2 < local_1160) && (*(int *)(param_1 + 0xb4740) < 0x1e)) && (local_1160 == 3)) {
      if (cVar19 == '\x01') {
        uVar14 = uVar14 | 0xc;
LAB_14566f90f:
        local_1114 = local_1114 | 9;
      }
      else {
        if (cVar19 == '\x02') {
          uVar14 = uVar14 | 10;
          goto LAB_14566f90f;
        }
        if (cVar19 != '\x03') goto LAB_14566f91a;
        uVar14 = uVar14 | 6;
      }
      local_1164 = uVar14;
    }
LAB_14566f91a:
    if ((uVar14 >> ((int)local_1167 & 0x1fU) & 1) == 0) {
LAB_14566f935:
      uVar16 = (ulonglong)local_1166;
      uVar14 = local_1164;
      if (((local_fe8 != 0) ||
          ((iVar20 = *(int *)(param_1 + 0x30858 +
                             ((uVar16 * 0xd + (ulonglong)local_1168) * 0x1e + local_10a8) * 4),
           (longlong)*(int *)(local_f80 + local_10a8 * 4) * (longlong)iVar20 >> 5 <=
           (longlong)local_1110 && (iVar20 != 0x7fffffff)))) &&
         ((*(int *)(param_1 + 0x2e6bc) == 0 || (local_1167 != '\0')))) {
        local_1120 = uVar16;
        if (local_1165 < '\x01') {
LAB_14566fa35:
          if (local_1165 < '\x01') {
            if (local_1167 != '\0') {
              local_1120 = uVar16;
              local_1144 = (uint)(*(int *)(param_1 + 0x2b100) == 1);
            }
          }
          else {
            local_1120 = uVar16;
            local_1144 = (uint)(*(int *)(param_1 + 0x2b100) == 0);
          }
          if (*(char *)(param_1 + 0x2b088) == '\0') {
LAB_14566faad:
            if ((*(int *)(param_1 + 0xb4304) == 0) || (*(int *)(param_1 + 0x2e660) != 0)) {
LAB_14566fac5:
              *(undefined1 *)((longlong)puVar6 + 6) = 0;
              *(undefined1 *)((longlong)puVar6 + 2) = 0;
              pcVar32 = (char *)(puVar6 + 2);
              *pcVar32 = local_1167;
              *(char *)((longlong)puVar6 + 9) = local_1165;
              iVar20 = 0;
              cVar19 = '\0';
              if (*(char *)(param_1 + 0x2a3fc) != '\x04') {
                cVar19 = *(char *)(param_1 + 0x2a3fc);
              }
              *(char *)((longlong)puVar6 + 7) = cVar19;
              iVar9 = local_1167 + -1;
              if (local_1167 < '\x01') {
                iVar9 = 0;
              }
              *(undefined4 *)(param_3 + 0x6940) = 0;
              *(longlong *)(lVar12 + 0x200) = (longlong)iVar9 * 0xb0 + 0x1e8 + param_1 + 0x29ee0;
              iVar9 = local_1165 + -1;
              if (local_1165 < '\x01') {
                iVar9 = 0;
              }
              local_1018 = lVar30;
              *(longlong *)(lVar12 + 0x208) = (longlong)iVar9 * 0xb0 + 0x1e8 + param_1 + 0x29ee0;
              uVar41 = local_e58[lVar30 * 6 + 1];
              *(undefined8 *)(lVar12 + 0x20) = local_e58[lVar30 * 6];
              *(undefined8 *)(lVar12 + 0x28) = uVar41;
              if ('\0' < local_1165) {
                uVar41 = local_e58[lVar24 * 6 + 1];
                *(undefined8 *)(lVar12 + 0x30) = local_e58[lVar24 * 6];
                *(undefined8 *)(lVar12 + 0x38) = uVar41;
              }
              uVar41 = local_e58[lVar30 * 6 + 3];
              *(undefined8 *)(lVar12 + 0xa8) = local_e58[lVar30 * 6 + 2];
              *(undefined8 *)(lVar12 + 0xb0) = uVar41;
              if ('\0' < local_1165) {
                uVar41 = local_e58[lVar24 * 6 + 3];
                *(undefined8 *)(lVar12 + 0xb8) = local_e58[lVar24 * 6 + 2];
                *(undefined8 *)(lVar12 + 0xc0) = uVar41;
              }
              uVar41 = local_e58[lVar30 * 6 + 5];
              *(undefined8 *)(lVar12 + 0x130) = local_e58[lVar30 * 6 + 4];
              *(undefined8 *)(lVar12 + 0x138) = uVar41;
              if ('\0' < local_1165) {
                uVar41 = local_e58[lVar24 * 6 + 5];
                *(undefined8 *)(lVar12 + 0x140) = local_e58[lVar24 * 6 + 4];
                *(undefined8 *)(lVar12 + 0x148) = uVar41;
              }
              if (local_1167 == '\0') {
                local_11c8 = &local_10b8;
                local_11c0 = local_1110;
                lVar7 = FUN_145674f60(local_1088,param_3,local_1020);
                uVar16 = local_10b8;
                param_1 = lVar34;
                uVar14 = local_1164;
                if ((longlong)puVar23 <= lVar7) goto LAB_145670e77;
                iVar20 = local_1020[0] + local_1008;
                if (local_10f4 == 0x7fffffff) {
                  if (*(int *)(lVar34 + 0xb4828) == 0) {
                    bVar5 = local_1168;
                    if (local_1168 < 3) {
                      bVar5 = 3;
                    }
                    local_11a8 = (undefined8 *)((ulonglong)local_11a8 & 0xffffffffffffff00);
                    local_11b0 = (longlong *)CONCAT71(local_11b0._1_7_,bVar5);
                    local_11b8 = (int *)(local_10c8 + 4);
                    local_11c0 = &local_fe0;
                    local_11c8 = (ulonglong *)local_10c8;
                    FUN_145675890(lVar34,param_3,local_10f0);
                  }
                  else {
                    bVar5 = 3;
                    if (2 < local_1168) {
                      bVar5 = local_1168;
                    }
                    *(undefined1 *)(**(longlong **)(param_3 + 0x6340) + 6) = 0;
                    *(undefined8 *)(param_3 + 0x1415c) = 0;
                    *(undefined4 *)(param_3 + 0x14164) = 0;
                    local_11b0 = (longlong *)0x7fffffffffffffff;
                    local_11c0 = &local_f78;
                    local_11b8 = (int *)CONCAT71(local_11b8._1_7_,bVar5);
                    local_11c8 = (ulonglong *)(local_10c8 + 4);
                    FUN_1456755d0(lVar34,param_3,local_10c8);
                    local_10f4 = local_10c8._0_4_ +
                                 *(int *)(lVar34 + ((longlong)*(int *)(lVar34 + 0x2a2e4) * 10 +
                                                    0x5195 + (ulonglong)
                                                             *(byte *)(**(longlong **)
                                                                         (param_3 + 0x6340) + 1)) *
                                                   0x28);
                  }
                  local_115c = *(undefined1 *)(**(longlong **)(param_3 + 0x6340) + 6);
                }
                uVar14 = iVar20 + local_10f4;
                local_1130 = local_10c8._0_4_;
                local_1010 = local_fe0;
                *(undefined1 *)((longlong)puVar6 + 6) = local_115c;
                local_1134 = local_1138;
                local_1128 = uVar16 + local_fe0;
              }
              else {
                local_1158 = 0x7fffffff;
                local_1058 = 0x7fffffffffffffff;
                local_1028 = 0x7fffffffffffffff;
                local_1134 = 0x7fffffff;
                local_1128 = 0x7fffffff;
                if (local_1165 < '\x01') {
                  local_10b8 = 0;
                }
                else {
                  local_10b8 = *(longlong *)(param_3 + 0x6410) + lVar24 * 8;
                }
                ppuVar35 = local_f00;
                puVar8 = local_d78;
                puVar21 = (undefined8 *)(local_fd8 + 0x130);
                local_1060 = 0;
                local_10c0 = puVar21;
                local_f00[0] = (ulonglong *)0x0;
                local_f00[1] = (ulonglong *)0x0;
                do {
                  if (*pcVar32 < '\x01') {
                    *ppuVar35 = (ulonglong *)0x0;
                  }
                  else {
                    puVar23 = (ulonglong *)FUN_14561b650(lVar34,(int)*pcVar32);
                    *ppuVar35 = puVar23;
                    if (puVar23 != (ulonglong *)0x0) {
                      uVar41 = puVar21[-0x21];
                      local_11c0 = (ulonglong *)0x0;
                      puVar8[-4] = puVar21[-0x22];
                      puVar8[-3] = uVar41;
                      local_11c8 = (ulonglong *)CONCAT44(local_11c8._4_4_,param_5);
                      uVar41 = puVar21[-0x10];
                      puVar8[-2] = puVar21[-0x11];
                      puVar8[-1] = uVar41;
                      uVar41 = puVar21[1];
                      *puVar8 = *puVar21;
                      puVar8[1] = uVar41;
                      FUN_1454793f0(lVar7,iVar20,puVar23);
                    }
                  }
                  param_3 = local_f88;
                  param_1 = local_1088;
                  puVar22 = local_10c0;
                  iVar20 = iVar20 + 1;
                  puVar21 = puVar21 + 2;
                  pcVar32 = pcVar32 + 1;
                  ppuVar35 = ppuVar35 + 1;
                  puVar8 = puVar8 + 6;
                } while (iVar20 < 2);
                lVar12 = (local_1120 * 0xd + (ulonglong)local_1168) * 0x78;
                if (local_1167 == '\x01') {
                  uVar43 = *(undefined4 *)(lVar12 + 0x30858 + local_1088);
                }
                else {
                  uVar43 = *(undefined4 *)(lVar12 + 0x30860 + local_1088);
                  if (local_1167 == '\x02') {
                    uVar43 = *(undefined4 *)(lVar12 + 0x3085c + local_1088);
                  }
                }
                local_f50[0] = 0x7fffffffffffffff;
                local_f50[1] = 0x7fffffffffffffff;
                local_f50[2] = 0x7fffffffffffffff;
                local_f50[3] = 0x7fffffffffffffff;
                uVar58 = (undefined4)local_c34;
                uVar59 = (undefined4)((ulonglong)local_c34 >> 0x20);
                uVar60 = (undefined4)local_c40;
                uVar61 = (undefined4)((ulonglong)local_c40 >> 0x20);
                uVar62 = (undefined4)local_c4c;
                uVar63 = (undefined4)((ulonglong)local_c4c >> 0x20);
                uVar64 = local_c58._0_4_;
                uVar65 = local_c58._4_4_;
                uVar26 = local_ec8;
                uVar45 = uStack_ec4;
                uVar47 = uStack_ec0;
                uVar49 = uStack_ebc;
                uVar54 = local_ee8[4];
                uVar55 = local_ee8[5];
                uVar56 = local_ee8[6];
                uVar57 = uStack_ecc;
                uVar50 = local_ee8[0];
                uVar51 = local_ee8[1];
                uVar52 = local_ee8[2];
                uVar53 = local_ee8[3];
                uVar44 = local_ea8;
                uVar28 = local_c38;
                uVar46 = local_c50;
                uVar41 = local_eb8;
                uVar42 = uStack_eb0;
                uVar48 = local_c44;
                uVar25 = local_c2c;
                if (*(char *)(local_1088 + 0x2a3fc) == '\x03') {
LAB_145670336:
                  uVar14 = local_1148;
                  lVar34 = local_1088;
                  if (local_1028 == 0x7fffffffffffffff) {
                    if (local_1060 == 0) goto LAB_145670392;
                    goto LAB_14567055a;
                  }
LAB_145670392:
                  cVar19 = (char)uVar14;
                  if (*(char *)(param_1 + 0x2a3fc) != '\x04') {
                    cVar19 = *(char *)(param_1 + 0x2a3fc);
                  }
                  *(char *)((longlong)local_1150 + 7) = cVar19;
                  if (local_1060 == 0) goto LAB_1456703b0;
                  *local_1150 = uVar50;
                  local_1150[1] = uVar51;
                  local_1150[2] = uVar52;
                  local_1150[3] = uVar53;
                  local_1040 = local_1128;
                  local_1150[4] = uVar54;
                  local_1150[5] = uVar55;
                  local_1150[6] = uVar56;
                  local_1150[7] = uVar57;
                  local_1108 = local_1158;
                  local_1150[8] = uVar26;
                  local_1150[9] = uVar45;
                  local_1150[10] = uVar47;
                  local_1150[0xb] = uVar49;
                  *(undefined8 *)(local_1150 + 0xc) = uVar41;
                  *(undefined8 *)(local_1150 + 0xe) = uVar42;
                  local_1150[0x10] = uVar44;
                  lVar12 = **(longlong **)(param_3 + 0x6340);
                  *(ulonglong *)(lVar12 + 0x14) = CONCAT44(uVar65,uVar64);
                  *(undefined4 *)(lVar12 + 0x1c) = uVar46;
                  lVar12 = **(longlong **)(param_3 + 0x6340);
                  *(ulonglong *)(lVar12 + 0x20) = CONCAT44(uVar63,uVar62);
                  *(undefined4 *)(lVar12 + 0x28) = uVar48;
                  lVar12 = **(longlong **)(param_3 + 0x6340);
                  *(ulonglong *)(lVar12 + 0x2c) = CONCAT44(uVar61,uVar60);
                  *(undefined4 *)(lVar12 + 0x34) = uVar28;
                  lVar12 = **(longlong **)(param_3 + 0x6340);
                  *(ulonglong *)(lVar12 + 0x38) = CONCAT44(uVar59,uVar58);
                  *(undefined4 *)(lVar12 + 0x40) = uVar25;
                  lVar33 = local_1048;
                }
                else {
                  local_1148 = 0;
                  if (*(uint *)(local_f88 + 0x6480) < *(uint *)(local_1088 + 0xb47cc)) {
                    local_1148 = *(uint *)(local_1088 + 0xb47cc) & 0xffffff00;
                    cVar19 = '\0';
                    if (*(char *)(local_1088 + 0x2a3fc) != '\x04') {
                      cVar19 = *(char *)(local_1088 + 0x2a3fc);
                    }
                    *(char *)((longlong)local_1150 + 7) = cVar19;
                  }
                  else if ((*(int *)(local_1088 + 0xb47a4) == 1) &&
                          (bVar5 = *(byte *)(local_10f0 + 0x65), bVar5 < 4)) {
                    local_1148 = (uint)bVar5;
                    if (*(byte *)(local_1088 + 0x2a3fc) != 4) {
                      bVar5 = *(byte *)(local_1088 + 0x2a3fc);
                    }
                    *(byte *)((longlong)local_1150 + 7) = bVar5;
                  }
                  else {
                    if (*(int *)(local_1088 + 0xb47a4) != 2) {
                      iVar20 = 0;
                      local_10fc = local_c2c;
                      local_10f8 = local_c38;
                      local_10c0 = (undefined8 *)CONCAT44(local_10c0._4_4_,local_c44);
                      local_1120 = CONCAT44(local_1120._4_4_,local_c50);
                      do {
                        lVar12 = *(longlong *)(param_3 + 0x6410);
                        *(char *)((longlong)local_1150 + 7) = (char)iVar20;
                        local_1170 = param_5;
                        local_1178 = local_1118;
                        local_1188 = local_c58;
                        local_1190 = local_ee8;
                        local_11a0 = &local_1050;
                        local_11a8 = (undefined8 *)local_10d0;
                        local_11b0 = &local_1040;
                        local_11b8 = &local_1138;
                        local_11c0 = (ulonglong *)&local_1108;
                        local_11c8 = local_1080;
                        local_1198 = uVar43;
                        local_1180 = iVar20;
                        lVar12 = FUN_145676c70(param_1,param_3,lVar12 + local_1018 * 8,local_10b8);
                        if (lVar12 == 0x7fffffffffffffff) {
                          uVar46 = (undefined4)local_1120;
                          uVar48 = local_10c0._0_4_;
                        }
                        else {
                          iVar29 = FUN_14561b570(param_1,param_3 + 0x6180);
                          iVar9 = *(int *)(param_3 + 0x644c);
                          local_f50[iVar20] = lVar12;
                          lVar7 = ((longlong)iVar9 * (longlong)iVar29 + 0x100 >> 9) + lVar12;
                          lVar34 = lVar7;
                          if (local_f50[3] < lVar7) {
                            lVar34 = local_f50[3];
                          }
                          local_f50[3] = lVar34;
                          cVar19 = *(char *)(param_1 + 0x2a3fc);
                          if (cVar19 != '\x04') {
                            lVar7 = lVar12;
                          }
                          lVar12 = lVar7;
                          if (lVar7 < local_10b0) {
                            lVar12 = local_10b0;
                          }
                          local_10b0 = lVar12;
                          if (lVar7 < local_1058) {
                            local_1148 = (uint)*(byte *)((longlong)local_1150 + 7);
                            local_1058 = lVar7;
                            if (cVar19 != '\x04') goto LAB_145670158;
                          }
                          else {
LAB_145670158:
                            if ((*(char *)((longlong)local_1150 + 7) != cVar19) ||
                               (cVar19 == '\x04')) {
                              uVar46 = (undefined4)local_1120;
                              uVar48 = local_10c0._0_4_;
                              goto LAB_145670322;
                            }
                          }
                          puVar4 = *(ushort **)(param_3 + 0x2010);
                          uVar50 = *local_1150;
                          uVar51 = local_1150[1];
                          uVar52 = local_1150[2];
                          uVar53 = local_1150[3];
                          uVar44 = local_1150[0x10];
                          uVar54 = local_1150[4];
                          uVar55 = local_1150[5];
                          uVar56 = local_1150[6];
                          uVar57 = local_1150[7];
                          uVar26 = local_1150[8];
                          uVar45 = local_1150[9];
                          uVar47 = local_1150[10];
                          uVar49 = local_1150[0xb];
                          local_1158 = local_1108;
                          uVar41 = *(undefined8 *)(local_1150 + 0xc);
                          uVar42 = *(undefined8 *)(local_1150 + 0xe);
                          local_1134 = local_1138;
                          local_1128 = local_1040;
                          local_1048 = local_1050;
                          *(undefined4 *)(param_3 + 0x6930) = 0;
                          local_1028 = lVar7;
                          local_1060 = 1;
                          uVar46 = *(undefined4 *)(**(longlong **)(param_3 + 0x6340) + 0x1c);
                          uVar2 = *(undefined8 *)(**(longlong **)(param_3 + 0x6340) + 0x14);
                          uVar64 = (undefined4)uVar2;
                          uVar65 = (undefined4)((ulonglong)uVar2 >> 0x20);
                          *(bool *)(param_3 + 0x6530) = *puVar4 == 0;
                          uVar3 = *puVar4;
                          *(uint *)(param_3 + 0x6930) = (uint)uVar3;
                          local_1120 = CONCAT44(local_1120._4_4_,uVar46);
                          uVar48 = *(undefined4 *)(**(longlong **)(param_3 + 0x6340) + 0x28);
                          uVar2 = *(undefined8 *)(**(longlong **)(param_3 + 0x6340) + 0x20);
                          uVar62 = (undefined4)uVar2;
                          uVar63 = (undefined4)((ulonglong)uVar2 >> 0x20);
                          *(bool *)(param_3 + 0x6531) = puVar4[1] == 0;
                          iVar9 = (uint)puVar4[1] + (uint)uVar3;
                          local_10c0 = (undefined8 *)CONCAT44(local_10c0._4_4_,uVar48);
                          *(int *)(param_3 + 0x6930) = iVar9;
                          local_10f8 = *(undefined4 *)(**(longlong **)(param_3 + 0x6340) + 0x34);
                          uVar2 = *(undefined8 *)(**(longlong **)(param_3 + 0x6340) + 0x2c);
                          uVar60 = (undefined4)uVar2;
                          uVar61 = (undefined4)((ulonglong)uVar2 >> 0x20);
                          *(bool *)(param_3 + 0x6532) = puVar4[2] == 0;
                          iVar9 = (uint)puVar4[2] + iVar9;
                          *(int *)(param_3 + 0x6930) = iVar9;
                          local_10fc = *(undefined4 *)(**(longlong **)(param_3 + 0x6340) + 0x40);
                          uVar2 = *(undefined8 *)(**(longlong **)(param_3 + 0x6340) + 0x38);
                          uVar58 = (undefined4)uVar2;
                          uVar59 = (undefined4)((ulonglong)uVar2 >> 0x20);
                          *(bool *)(param_3 + 0x6533) = puVar4[3] == 0;
                          *(uint *)(param_3 + 0x6930) = (uint)puVar4[3] + iVar9;
                          if ((iVar20 == 0) &&
                             (((*(int *)(param_1 + 0xb4824) != 0 &&
                               ((longlong)local_1110 < 0x7fffffffffffffff)) &&
                              ((longlong)local_1110 < lVar7 / 2)))) {
                            lVar12 = param_3 + 0x6180;
                            local_1148 = (uint)*(byte *)((longlong)local_1150 + 7);
                            puVar6 = local_1150;
                            uVar43 = (undefined4)local_fb8;
                            uVar44 = local_fb8._4_4_;
                            uVar46 = (undefined4)uStack_fb0;
                            uVar48 = uStack_fb0._4_4_;
                            uVar50 = (undefined4)local_fa8;
                            uVar51 = local_fa8._4_4_;
                            uVar52 = (undefined4)uStack_fa0;
                            uVar53 = uStack_fa0._4_4_;
                            uVar54 = (undefined4)local_f98;
                            uVar55 = local_f98._4_4_;
                            uVar56 = (undefined4)uStack_f90;
                            uVar57 = uStack_f90._4_4_;
                            uVar14 = local_1164;
                            goto LAB_145670e77;
                          }
                        }
LAB_145670322:
                        iVar20 = iVar20 + 1;
                        uVar28 = local_10f8;
                        uVar25 = local_10fc;
                      } while (iVar20 < 3);
                      goto LAB_145670336;
                    }
                    local_1148 = (uint)*(byte *)(local_10f0 + 0x65);
                    if (3 < *(byte *)(local_10f0 + 0x65)) {
                      local_1148 = 0;
                    }
                    cVar19 = (char)local_1148;
                    if (*(char *)(local_1088 + 0x2a3fc) != '\x04') {
                      cVar19 = *(char *)(local_1088 + 0x2a3fc);
                    }
                    *(char *)((longlong)local_1150 + 7) = cVar19;
                  }
LAB_1456703b0:
                  lVar34 = local_1088;
                  local_1170 = param_5;
                  local_1178 = local_1118;
                  local_1188 = local_c58;
                  local_1180 = 0;
                  local_1190 = local_ee8;
                  local_11a0 = &local_1050;
                  local_11a8 = (undefined8 *)local_10d0;
                  local_11b0 = &local_1040;
                  local_11b8 = &local_1138;
                  local_11c0 = (ulonglong *)&local_1108;
                  local_11c8 = local_1080;
                  local_1198 = uVar43;
                  lVar12 = FUN_145676c70(local_1088,param_3,
                                         *(longlong *)(param_3 + 0x6410) + local_1018 * 8);
                  if (lVar12 == 0x7fffffffffffffff) {
LAB_14567055a:
                    lVar12 = param_3 + 0x6180;
                    puVar6 = local_1150;
                    param_1 = lVar34;
                    uVar43 = (undefined4)local_fb8;
                    uVar44 = local_fb8._4_4_;
                    uVar46 = (undefined4)uStack_fb0;
                    uVar48 = uStack_fb0._4_4_;
                    uVar50 = (undefined4)local_fa8;
                    uVar51 = local_fa8._4_4_;
                    uVar52 = (undefined4)uStack_fa0;
                    uVar53 = uStack_fa0._4_4_;
                    uVar54 = (undefined4)local_f98;
                    uVar55 = local_f98._4_4_;
                    uVar56 = (undefined4)uStack_f90;
                    uVar57 = uStack_f90._4_4_;
                    uVar14 = local_1164;
                    goto LAB_145670e77;
                  }
                  puVar4 = *(ushort **)(param_3 + 0x2010);
                  *(undefined4 *)(param_3 + 0x6930) = 0;
                  *(bool *)(param_3 + 0x6530) = *puVar4 == 0;
                  uVar3 = *puVar4;
                  *(uint *)(param_3 + 0x6930) = (uint)uVar3;
                  *(bool *)(param_3 + 0x6531) = puVar4[1] == 0;
                  iVar20 = (uint)puVar4[1] + (uint)uVar3;
                  *(int *)(param_3 + 0x6930) = iVar20;
                  *(bool *)(param_3 + 0x6532) = puVar4[2] == 0;
                  iVar20 = (uint)puVar4[2] + iVar20;
                  *(int *)(param_3 + 0x6930) = iVar20;
                  local_1128 = local_1040;
                  *(bool *)(param_3 + 0x6533) = puVar4[3] == 0;
                  *(uint *)(param_3 + 0x6930) = (uint)puVar4[3] + iVar20;
                  local_1134 = local_1138;
                  lVar33 = local_1050;
                }
                lVar12 = local_1040;
                uVar14 = local_1108;
                local_1128 = local_1040;
                if (*(char *)(lVar34 + 0x2a3fc) == '\x04') {
                  iVar20 = FUN_14561b570(lVar34,param_3 + 0x6180);
                  uVar14 = uVar14 + iVar20;
                }
                if (local_1144 == 0) {
                  if (local_1165 < '\x01') {
                    local_1144 = (uint)(*(int *)(lVar34 + 0x2b100) == 1);
LAB_14567066a:
                    uVar10 = (uint)local_115b[0];
                  }
                  else {
                    local_1144 = (uint)(*(int *)(lVar34 + 0x2b100) == 0);
                    uVar10 = 0x100 - local_115b[0];
                  }
                }
                else {
                  if (local_1165 < '\x01') goto LAB_14567066a;
                  uVar10 = 0x100 - local_115b[0];
                }
                bVar5 = (byte)*(undefined4 *)(param_3 + 0x6448);
                local_1158 = (uint)*(ushort *)(&DAT_149df5520 + (longlong)(int)uVar10 * 2);
                lVar7 = lVar33 << (bVar5 & 0x3f);
                lVar12 = ((longlong)*(int *)(param_3 + 0x644c) * (longlong)(int)uVar14 + 0x100 >> 9)
                         + (lVar12 << (bVar5 & 0x3f));
                if (lVar7 <= lVar12) {
                  lVar12 = lVar7;
                }
                plVar36 = (longlong *)((longlong)local_1110 - lVar12);
                if (0 < (longlong)plVar36) {
                  FUN_145479030(param_3 + 0x6180,local_1118,param_5,3);
                  *(undefined8 *)(param_3 + 0x1415c) = 0;
                  *(undefined4 *)(param_3 + 0x14164) = 0;
                  local_11c0 = &local_ff0;
                  local_11b8 = (int *)CONCAT71(local_11b8._1_7_,3);
                  local_11c8 = &local_ff8;
                  local_11b0 = plVar36;
                  iVar20 = FUN_1456755d0(lVar34,param_3,&local_10a0);
                  if (iVar20 == 0) {
                    lVar12 = 0;
                    puVar8 = local_d78;
                    do {
                      if (local_f00[lVar12] != (ulonglong *)0x0) {
                        uVar41 = puVar8[-3];
                        puVar22[-0x22] = puVar8[-4];
                        puVar22[-0x21] = uVar41;
                        uVar41 = puVar8[-1];
                        puVar22[-0x11] = puVar8[-2];
                        puVar22[-0x10] = uVar41;
                        uVar41 = puVar8[1];
                        *puVar22 = *puVar8;
                        puVar22[1] = uVar41;
                      }
                      lVar12 = lVar12 + 1;
                      puVar22 = puVar22 + 2;
                      puVar8 = puVar8 + 6;
                    } while (lVar12 < 2);
                    lVar12 = param_3 + 0x6180;
                    puVar6 = local_1150;
                    param_1 = lVar34;
                    uVar43 = (undefined4)local_fb8;
                    uVar44 = local_fb8._4_4_;
                    uVar46 = (undefined4)uStack_fb0;
                    uVar48 = uStack_fb0._4_4_;
                    uVar50 = (undefined4)local_fa8;
                    uVar51 = local_fa8._4_4_;
                    uVar52 = (undefined4)uStack_fa0;
                    uVar53 = uStack_fa0._4_4_;
                    uVar54 = (undefined4)local_f98;
                    uVar55 = local_f98._4_4_;
                    uVar56 = (undefined4)uStack_f90;
                    uVar57 = uStack_f90._4_4_;
                    uVar14 = local_1164;
                    goto LAB_145670e77;
                  }
                  uVar14 = uVar14 + local_10a0;
                  local_1130 = local_10a0;
                  local_1010 = local_fd0;
                  lVar33 = lVar33 + local_ff0;
                  local_1128 = local_1128 + local_fd0;
                }
                lVar12 = 0;
                puVar8 = local_d78;
                do {
                  if (local_f00[lVar12] != (ulonglong *)0x0) {
                    uVar41 = puVar8[-3];
                    puVar22[-0x22] = puVar8[-4];
                    puVar22[-0x21] = uVar41;
                    uVar41 = puVar8[-1];
                    puVar22[-0x11] = puVar8[-2];
                    puVar22[-0x10] = uVar41;
                    uVar41 = puVar8[1];
                    *puVar22 = *puVar8;
                    puVar22[1] = uVar41;
                  }
                  lVar12 = lVar12 + 1;
                  puVar22 = puVar22 + 2;
                  puVar8 = puVar8 + 6;
                } while (lVar12 < 2);
                lVar30 = local_1018;
                puVar6 = local_1150;
                uVar43 = (undefined4)local_fb8;
                uVar44 = local_fb8._4_4_;
                uVar46 = (undefined4)uStack_fb0;
                uVar48 = uStack_fb0._4_4_;
                uVar50 = (undefined4)local_fa8;
                uVar51 = local_fa8._4_4_;
                uVar52 = (undefined4)uStack_fa0;
                uVar53 = uStack_fa0._4_4_;
                uVar54 = (undefined4)local_f98;
                uVar55 = local_f98._4_4_;
                uVar56 = (undefined4)uStack_f90;
                uVar57 = uStack_f90._4_4_;
              }
              lVar12 = local_1128;
              uVar10 = local_1158 + uVar14;
              if (*(int *)(lVar34 + 0x2b100) != 2) {
                uVar10 = uVar14;
              }
              if (local_1165 < '\x01') {
                iVar20 = local_e68[lVar30];
              }
              else {
                iVar20 = *(int *)((longlong)local_e78 + lVar30 * 4);
              }
              bVar5 = FUN_14566ce00(lVar34 + 0x29ee0,param_3 + 0x6180);
              uVar14 = (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)bVar5 * 2);
              if (((local_1167 != '\0') && (*(int *)(param_3 + 0x63f4) == 0)) &&
                 (bVar18 = (byte)*(undefined4 *)(param_3 + 0x6448),
                 ((longlong)
                  ((ulonglong)*(ushort *)(&DAT_149df5720 + (ulonglong)bVar5 * -2) *
                   (longlong)*(int *)(param_3 + 0x644c) + 0x100) >> 9) + (lVar33 << (bVar18 & 0x3f))
                 <= ((longlong)(int)(local_1130 + uVar14 + local_1134) *
                     (longlong)*(int *)(param_3 + 0x644c) + 0x100 >> 9) +
                    (lVar12 << (bVar18 & 0x3f)))) {
                local_1128 = lVar33;
                local_109c = 1;
                uVar14 = ((uint)*(ushort *)(&DAT_149df5720 + (ulonglong)bVar5 * -2) - local_1130) -
                         local_1134;
                local_1130 = 0;
              }
              lVar7 = local_1128;
              lVar12 = param_3 + 0x6180;
              iVar20 = uVar14 + iVar20 + uVar10;
              puVar23 = (ulonglong *)
                        (((longlong)iVar20 * (longlong)*(int *)(param_3 + 0x644c) + 0x100 >> 9) +
                        (local_1128 << ((byte)*(undefined4 *)(param_3 + 0x6448) & 0x3f)));
              if (local_1167 == '\0') {
                if ((longlong)puVar23 <= (longlong)local_1078) {
                  local_1078 = puVar23;
                }
                if ((longlong)puVar23 <= (longlong)local_1070) {
                  local_1070 = puVar23;
                }
                if ((longlong)puVar23 <= (longlong)local_1068) {
                  local_1068 = puVar23;
                }
                if ((longlong)puVar23 <= (longlong)local_10e8) {
                  local_10e8 = puVar23;
                }
                local_f70 = local_10e8;
                if ((longlong)puVar23 <= (longlong)local_10d8) {
                  local_10d8 = puVar23;
                }
                lStack_f68 = (longlong)local_10d8;
                if ((longlong)puVar23 <= (longlong)local_10e0) {
                  local_10e0 = puVar23;
                }
                local_f60 = local_10e0;
                if ((longlong)puVar23 <= (longlong)local_1038) {
                  local_1038 = puVar23;
                }
                puStack_f58 = local_1038;
              }
              if ((((longlong)puVar23 < (longlong)local_1110) || (*(int *)(param_3 + 0x6940) != 0))
                 && (local_1144 == 0)) {
                local_1104 = local_1160;
                uVar26 = 3;
                if (local_1167 == '\0') {
                  puVar6[3] = 0;
                  uVar26 = 1;
                  *(undefined1 *)((longlong)puVar6 + 7) = 3;
                }
                *local_1030 = iVar20;
                *(longlong *)(local_1030 + 2) = local_1128;
                *(ulonglong **)(local_1030 + 4) = puVar23;
                uVar43 = puVar6[4];
                uVar44 = puVar6[5];
                local_fb8 = *(undefined8 *)(puVar6 + 4);
                uVar46 = puVar6[6];
                uVar48 = puVar6[7];
                uStack_fb0 = *(undefined8 *)(puVar6 + 6);
                uVar50 = puVar6[8];
                uVar51 = puVar6[9];
                local_fa8 = *(undefined8 *)(puVar6 + 8);
                uVar52 = puVar6[10];
                uVar53 = puVar6[0xb];
                uStack_fa0 = *(undefined8 *)(puVar6 + 10);
                uVar54 = puVar6[0xc];
                uVar55 = puVar6[0xd];
                local_f98 = *(undefined8 *)(puVar6 + 0xc);
                uVar56 = puVar6[0xe];
                uVar57 = puVar6[0xf];
                uStack_f90 = *(undefined8 *)(puVar6 + 0xe);
                uVar66 = *(undefined1 *)puVar6;
                uVar67 = *(undefined1 *)((longlong)puVar6 + 1);
                uVar68 = *(undefined1 *)((longlong)puVar6 + 2);
                uVar69 = *(undefined1 *)((longlong)puVar6 + 3);
                uVar70 = *(undefined1 *)(puVar6 + 1);
                uVar71 = *(undefined1 *)((longlong)puVar6 + 5);
                uVar72 = *(undefined1 *)((longlong)puVar6 + 6);
                uVar73 = *(undefined1 *)((longlong)puVar6 + 7);
                uVar74 = *(undefined1 *)(puVar6 + 2);
                uVar75 = *(undefined1 *)((longlong)puVar6 + 9);
                uVar76 = *(undefined1 *)((longlong)puVar6 + 10);
                uVar77 = *(undefined1 *)((longlong)puVar6 + 0xb);
                uVar78 = *(undefined1 *)(puVar6 + 3);
                uVar79 = *(undefined1 *)((longlong)puVar6 + 0xd);
                uVar80 = *(undefined1 *)((longlong)puVar6 + 0xe);
                uVar81 = *(undefined1 *)((longlong)puVar6 + 0xf);
                local_1080 = (ulonglong *)
                             (((local_1010 << ((byte)*(undefined4 *)(param_3 + 0x6448) & 0x3f)) -
                              ((longlong)local_1130 * (longlong)*(int *)(param_3 + 0x644c) + 0x100
                              >> 9)) + (longlong)puVar23);
                local_1000 = (ulonglong)(uint)puVar6[0x10];
                local_1100 = local_109c;
                local_1110 = puVar23;
                if (*(int *)(param_3 + 0x6424) == 0) {
                  local_11c0 = (ulonglong *)CONCAT44(local_11c0._4_4_,uVar26);
                  local_11c8 = (ulonglong *)((ulonglong)local_11c8 & 0xffffffff00000000);
                  FUN_145671400(param_3,local_10f0,1);
                }
                memcpy((void *)local_10f0[0xd],(void *)(param_3 + 0x6530),
                       (longlong)*(int *)((longlong)local_10f0 + 0x2b4));
                *(undefined4 *)((longlong)local_10f0 + 0x32c) = *(undefined4 *)(param_3 + 0x6930);
                lVar30 = **(longlong **)(param_3 + 0x6340);
                uVar82 = *(undefined8 *)(lVar30 + 0x38);
                local_1098 = *(undefined4 *)(lVar30 + 0x1c);
                local_f30 = *(undefined8 *)(lVar30 + 0x14);
                local_1094 = *(undefined4 *)(lVar30 + 0x28);
                local_f24 = *(undefined8 *)(lVar30 + 0x20);
                local_108c = *(undefined4 *)(lVar30 + 0x34);
                local_f18 = *(undefined8 *)(lVar30 + 0x2c);
                local_1090 = *(undefined4 *)(lVar30 + 0x40);
                if (((*(byte *)(lVar34 + 0xb47c8) & 1) == 0) || (local_1160 < 4)) {
LAB_145670bfc:
                  local_113c = CONCAT31(local_113c._1_3_,uVar74);
                  goto LAB_145670c11;
                }
                iVar9 = (int)*(short *)(*(longlong *)(param_3 + 0x61f8) + 2);
                if ((*(byte *)(*(longlong *)(param_3 + 0x6390) + 0x98) & 8) != 0) {
                  iVar9 = iVar9 >> ((char)*(undefined4 *)(param_3 + 0x63f0) - 8U & 0x1f);
                }
                lVar30 = 4;
                if (*(uint *)(param_3 + 0x6480) != 0xffffffff) {
                  lVar30 = 4 - (ulonglong)(*(uint *)(param_3 + 0x6480) < 0x10);
                }
                if (local_1167 < '\x01') goto LAB_145670bfc;
                local_113c = CONCAT31(local_113c._1_3_,uVar74);
                if (lVar7 * lVar30 < (longlong)(iVar9 * iVar9)) {
                  local_1140 = 1;
                }
LAB_145670c19:
                if (*(int *)(lVar34 + 0x2b100) == 2) {
                  iVar29 = iVar20 - local_1158;
                  iVar9 = iVar20;
                }
                else {
                  iVar9 = iVar20 + local_1158;
                  iVar29 = iVar20;
                }
                lVar7 = lVar7 << ((byte)*(undefined4 *)(param_3 + 0x6448) & 0x3f);
                puVar13 = (ulonglong *)
                          (((longlong)iVar29 * (longlong)*(int *)(param_3 + 0x644c) + 0x100 >> 9) +
                          lVar7);
                puVar15 = (ulonglong *)
                          (((longlong)iVar9 * (longlong)*(int *)(param_3 + 0x644c) + 0x100 >> 9) +
                          lVar7);
                if (local_1165 < '\x01') {
                  if ((longlong)puVar13 < (longlong)local_1078) {
                    local_1078 = puVar13;
                  }
                }
                else {
                  if ((longlong)puVar13 < (longlong)local_1070) {
                    local_1070 = puVar13;
                  }
                }
                if ((longlong)puVar15 < (longlong)local_1068) {
                  local_1068 = puVar15;
                }
              }
              else {
LAB_145670c11:
                if (local_1167 != '\0') goto LAB_145670c19;
              }
              if (((local_1144 == 0) && (local_1167 != '\0')) &&
                 (bVar5 = *(byte *)(lVar34 + 0x2a3fc), bVar5 != 3)) {
                uVar16 = 3;
                if (bVar5 != 4) {
                  uVar16 = (ulonglong)bVar5;
                }
                lVar7 = local_f50[uVar16];
                if (lVar7 == 0x7fffffffffffffff) {
                  if ((longlong)puVar23 <= (longlong)local_10e8) {
                    local_10e8 = puVar23;
                  }
                  if ((longlong)puVar23 <= (longlong)local_10d8) {
                    local_10d8 = puVar23;
                  }
                  if ((longlong)puVar23 <= (longlong)local_10e0) {
                    local_10e0 = puVar23;
                  }
                  lVar7 = 0;
                  local_f60 = local_10e0;
                  local_f70 = local_10e8;
                  lStack_f68 = (longlong)local_10d8;
                }
                else {
                  if (local_f50[0] == 0x7fffffffffffffff) {
                    lVar30 = (local_10b0 + 10) - lVar7;
                  }
                  else {
                    lVar30 = local_f50[0] - lVar7;
                  }
                  if ((longlong)puVar23 + lVar30 <= (longlong)local_10e8) {
                    local_10e8 = (ulonglong *)((longlong)puVar23 + lVar30);
                  }
                  local_f70 = local_10e8;
                  if (local_f50[1] == 0x7fffffffffffffff) {
                    lVar30 = local_10b0 + (10 - lVar7);
                  }
                  else {
                    lVar30 = local_f50[1] - lVar7;
                  }
                  if ((longlong)puVar23 + lVar30 <= (longlong)local_10d8) {
                    local_10d8 = (ulonglong *)((longlong)puVar23 + lVar30);
                  }
                  lStack_f68 = (longlong)local_10d8;
                  if (local_f50[2] == 0x7fffffffffffffff) {
                    lVar30 = local_10b0 + (10 - lVar7);
                  }
                  else {
                    lVar30 = local_f50[2] - lVar7;
                  }
                  if ((longlong)puVar23 + lVar30 <= (longlong)local_10e0) {
                    local_10e0 = (ulonglong *)((longlong)puVar23 + lVar30);
                  }
                  local_f60 = local_10e0;
                  if (local_f50[3] == 0x7fffffffffffffff) {
                    lVar7 = (local_10b0 - lVar7) + 10;
                  }
                  else {
                    lVar7 = local_f50[3] - lVar7;
                  }
                }
                if (lVar7 + (longlong)puVar23 <= (longlong)local_1038) {
                  local_1038 = (ulonglong *)(lVar7 + (longlong)puVar23);
                }
                puStack_f58 = local_1038;
                local_10e8 = local_f70;
                local_10e0 = local_f60;
                local_10d8 = (ulonglong *)lStack_f68;
              }
              param_1 = lVar34;
              if ((local_1140 != 0) ||
                 ((uVar14 = local_1164, *(int *)(param_3 + 0x6940) != 0 && (local_1165 < '\x01'))))
              break;
            }
          }
          else if (((*(byte *)(param_1 + 0x2b0d8 + local_1120 * 4) & 4) == 0) ||
                  (*(short *)(param_1 + 0x2b09c + local_1120 * 8) == (short)local_1167)) {
            if ((*(char *)(param_1 + 0x2b088) == '\0') ||
               ((*(byte *)(param_1 + 0x2b0d8 + local_1120 * 4) & 4) == 0)) goto LAB_14566faad;
            goto LAB_14566fac5;
          }
        }
        else if (((*(int *)(param_1 + 0xb4940) != 0) &&
                 (*(int *)(param_1 + 0x2b044 + lVar30 * 4) !=
                  *(int *)(param_1 + 0x2b044 + lVar24 * 4))) &&
                (((*(uint *)(param_1 + 0xb46a8) & *(uint *)(&DAT_149df5090 + lVar24 * 4)) != 0 &&
                 ((*(char *)(param_1 + 0x2b088) == '\0' ||
                  ((*(byte *)(param_1 + 0x2b0d8 + (ulonglong)local_1166 * 4) & 4) == 0)))))) {
          local_1120 = (ulonglong)local_1166;
          if (((*(byte *)(param_1 + 0xb47c8) & 2) == 0) || (cVar19 != '\0')) goto LAB_14566fa35;
        }
      }
    }
    else {
      uVar10 = 0;
      if (-1 < local_1165) {
        uVar10 = (uint)local_1165;
      }
      if ((local_1114 >> (uVar10 & 0x1f) & 1) == 0) goto LAB_14566f935;
    }
LAB_145670e77:
    local_1160 = local_1160 + 1;
    local_10a8 = local_10a8 + 1;
  } while (local_1160 < 6);
  puVar23 = local_1110;
  local_f0c = uVar82;
  if ((longlong)local_1110 < (longlong)param_9) {
    lVar12 = 2;
    cVar19 = (char)local_113c;
    if ((*(int *)(param_1 + 0xb4828) != 0) && (cVar19 == '\0')) {
      plVar36 = (longlong *)0x7fffffffffffffff;
      *(undefined1 *)puVar6 = uVar66;
      *(undefined1 *)((longlong)puVar6 + 1) = uVar67;
      *(undefined1 *)((longlong)puVar6 + 2) = uVar68;
      *(undefined1 *)((longlong)puVar6 + 3) = uVar69;
      *(undefined1 *)(puVar6 + 1) = uVar70;
      *(undefined1 *)((longlong)puVar6 + 5) = uVar71;
      *(undefined1 *)((longlong)puVar6 + 6) = uVar72;
      *(undefined1 *)((longlong)puVar6 + 7) = uVar73;
      *(undefined1 *)(puVar6 + 2) = uVar74;
      *(undefined1 *)((longlong)puVar6 + 9) = uVar75;
      *(undefined1 *)((longlong)puVar6 + 10) = uVar76;
      *(undefined1 *)((longlong)puVar6 + 0xb) = uVar77;
      *(undefined1 *)(puVar6 + 3) = uVar78;
      *(undefined1 *)((longlong)puVar6 + 0xd) = uVar79;
      *(undefined1 *)((longlong)puVar6 + 0xe) = uVar80;
      *(undefined1 *)((longlong)puVar6 + 0xf) = uVar81;
      puVar6[4] = uVar43;
      puVar6[5] = uVar44;
      puVar6[6] = uVar46;
      puVar6[7] = uVar48;
      puVar6[8] = uVar50;
      puVar6[9] = uVar51;
      puVar6[10] = uVar52;
      puVar6[0xb] = uVar53;
      puVar6[0xc] = uVar54;
      puVar6[0xd] = uVar55;
      puVar6[0xe] = uVar56;
      puVar6[0xf] = uVar57;
      puVar6[0x10] = (int)local_1000;
      cVar31 = '\0';
      *(undefined8 *)(param_3 + 0x1415c) = 0;
      *(undefined4 *)(param_3 + 0x14164) = 0;
      uVar14 = 0;
      lVar34 = 0;
      do {
        cVar19 = (char)uVar14;
        if ((*(uint *)(param_1 + 0xb47e0) >> (uVar14 & 0x1f) & 1) != 0) {
          local_11b8 = (int *)CONCAT71(local_11b8._1_7_,3);
          local_11c0 = &local_f78;
          local_11c8 = &local_ff8;
          *(char *)(**(longlong **)(param_3 + 0x6340) + 6) = cVar19;
          local_11b0 = plVar36;
          iVar20 = FUN_1456755d0(param_1,param_3,local_10c8 + 4,&local_ff0);
          if (((iVar20 != 0) &&
              (plVar17 = (longlong *)
                         (((longlong)
                           (*(int *)(param_1 +
                                    (lVar34 + ((longlong)*(int *)(param_1 + 0x2a2e4) * 10 + 0x5195 +
                                              (ulonglong)
                                              *(byte *)(**(longlong **)(param_3 + 0x6340) + 1)) * 10
                                    ) * 4) + local_10c8._4_4_) *
                           (longlong)*(int *)(param_3 + 0x644c) + 0x100 >> 9) +
                         (local_ff0 << ((byte)*(undefined4 *)(param_3 + 0x6448) & 0x3f))),
              (longlong)plVar17 < (longlong)plVar36)) &&
             (plVar36 = plVar17, cVar31 = cVar19, *(int *)(param_3 + 0x6424) == 0)) {
            local_11c0 = (ulonglong *)CONCAT44(local_11c0._4_4_,3);
            local_11c8 = (ulonglong *)CONCAT44(local_11c8._4_4_,1);
            FUN_145671400(param_3,local_10f0,2,0);
          }
        }
        uVar14 = (uint)(byte)(cVar19 + 1U);
        lVar34 = lVar34 + 1;
      } while ((byte)(cVar19 + 1U) < 10);
      cVar19 = (char)local_113c;
      *(char *)(**(longlong **)(param_3 + 0x6340) + 6) = cVar31;
    }
    iVar20 = local_1104;
    puVar13 = local_1110;
    if (local_1110 == (ulonglong *)0x7fffffffffffffff) {
      *local_1030 = 0x7fffffff;
      local_1030[2] = -1;
      local_1030[3] = 0x7fffffff;
      local_1030[4] = -1;
      local_1030[5] = 0x7fffffff;
    }
    else {
      FUN_14561bcd0(local_fc8 + 0x10,*(undefined4 *)(param_1 + 0xb46f0),local_1168,local_1104);
      *(undefined1 *)local_1150 = uVar66;
      *(undefined1 *)((longlong)local_1150 + 1) = uVar67;
      *(undefined1 *)((longlong)local_1150 + 2) = uVar68;
      *(undefined1 *)((longlong)local_1150 + 3) = uVar69;
      *(undefined1 *)(local_1150 + 1) = uVar70;
      *(undefined1 *)((longlong)local_1150 + 5) = uVar71;
      *(undefined1 *)((longlong)local_1150 + 6) = uVar72;
      *(undefined1 *)((longlong)local_1150 + 7) = uVar73;
      *(undefined1 *)(local_1150 + 2) = uVar74;
      *(undefined1 *)((longlong)local_1150 + 9) = uVar75;
      *(undefined1 *)((longlong)local_1150 + 10) = uVar76;
      *(undefined1 *)((longlong)local_1150 + 0xb) = uVar77;
      *(undefined1 *)(local_1150 + 3) = uVar78;
      *(undefined1 *)((longlong)local_1150 + 0xd) = uVar79;
      *(undefined1 *)((longlong)local_1150 + 0xe) = uVar80;
      *(undefined1 *)((longlong)local_1150 + 0xf) = uVar81;
      local_1150[4] = uVar43;
      local_1150[5] = uVar44;
      local_1150[6] = uVar46;
      local_1150[7] = uVar48;
      local_1150[8] = uVar50;
      local_1150[9] = uVar51;
      local_1150[10] = uVar52;
      local_1150[0xb] = uVar53;
      local_1150[0xc] = uVar54;
      local_1150[0xd] = uVar55;
      local_1150[0xe] = uVar56;
      local_1150[0xf] = uVar57;
      local_1150[0x10] = (int)local_1000;
      *(uint *)(param_3 + 0x6940) = *(uint *)(param_3 + 0x6940) | local_1100;
      if (cVar19 < '\x01') {
        *(undefined1 *)(**(longlong **)(param_3 + 0x6340) + 0x14) = (undefined1)local_f30;
        *(undefined1 *)(**(longlong **)(param_3 + 0x6340) + 0x20) = (undefined1)local_f24;
        *(undefined1 *)(**(longlong **)(param_3 + 0x6340) + 0x2c) = (undefined1)local_f18;
        *(undefined1 *)(**(longlong **)(param_3 + 0x6340) + 0x38) = (undefined1)local_f0c;
      }
      else {
        lVar34 = **(longlong **)(param_3 + 0x6340);
        *(undefined8 *)(lVar34 + 0x14) = local_f30;
        *(undefined4 *)(lVar34 + 0x1c) = local_1098;
        lVar34 = **(longlong **)(param_3 + 0x6340);
        *(undefined8 *)(lVar34 + 0x20) = local_f24;
        *(undefined4 *)(lVar34 + 0x28) = local_1094;
        lVar34 = **(longlong **)(param_3 + 0x6340);
        *(undefined8 *)(lVar34 + 0x2c) = local_f18;
        *(undefined4 *)(lVar34 + 0x34) = local_108c;
        lVar34 = **(longlong **)(param_3 + 0x6340);
        *(undefined8 *)(lVar34 + 0x38) = uVar82;
        *(undefined4 *)(lVar34 + 0x40) = local_1090;
        local_1150[3] = *(undefined4 *)(**(longlong **)(param_3 + 0x6340) + 0x3c);
        local_1150[4] = *(undefined4 *)(**(longlong **)(param_3 + 0x6340) + 0x40);
      }
      lVar34 = 0;
      if (*(char *)((longlong)local_1150 + 9) == -1) {
        local_1150[4] = 0;
        local_1150[7] = 0;
        local_1150[10] = 0;
        local_1150[0xd] = 0;
        local_1150[0x10] = 0;
      }
      iVar9 = (int)puVar13;
      if (local_1078 == (ulonglong *)0x7fffffffffffffff) {
        iVar29 = -0x80000000;
      }
      else {
        iVar29 = iVar9 - (int)local_1078;
      }
      if (local_1070 == (ulonglong *)0x7fffffffffffffff) {
        iVar27 = -0x80000000;
      }
      else {
        iVar27 = iVar9 - (int)local_1070;
      }
      iVar9 = iVar9 - (int)local_1068;
      if (local_1068 == (ulonglong *)0x7fffffffffffffff) {
        iVar9 = -0x80000000;
      }
      iVar11 = *(int *)(param_3 + 0x6940);
      if (iVar11 == 0) {
        lVar7 = lVar34;
        if (DAT_14c707900 < 2) {
          do {
            lVar12 = lVar34;
            if (*(longlong *)((longlong)&local_f70 + lVar7) != 0x7fffffffffffffff) {
              lVar12 = (longlong)puVar13 - *(longlong *)((longlong)&local_f70 + lVar7);
            }
            *(longlong *)((longlong)&local_e98 + lVar7) = lVar12;
            local_fc0 = local_fc0 + -1;
            lVar7 = lVar7 + 8;
          } while (local_fc0 != 0);
          iVar11 = *(int *)(param_3 + 0x6940);
        }
        else {
          do {
            lVar7 = (longlong)puVar23 - *(longlong *)((longlong)&local_f70 + lVar34);
            lVar30 = (longlong)puVar23 - *(longlong *)((longlong)&lStack_f68 + lVar34);
            lVar33 = -(ulonglong)
                      (*(longlong *)((longlong)&local_f70 + lVar34) == 0x7fffffffffffffff);
            lVar24 = -(ulonglong)
                      (*(longlong *)((longlong)&lStack_f68 + lVar34) == 0x7fffffffffffffff);
            uVar37 = (uint)lVar33;
            uVar38 = (uint)((ulonglong)lVar33 >> 0x20);
            uVar39 = (uint)lVar24;
            uVar40 = (uint)((ulonglong)lVar24 >> 0x20);
            uVar14 = *(uint *)((longlong)&uStack_e90 + lVar34);
            uVar10 = *(uint *)((longlong)&uStack_e90 + lVar34 + 4);
            *(uint *)((longlong)&local_e98 + lVar34) =
                 ~uVar37 & (uint)lVar7 | ~uVar37 & *(uint *)((longlong)&local_e98 + lVar34) & uVar37
            ;
            *(uint *)((longlong)&local_e98 + lVar34 + 4) =
                 ~uVar38 & (uint)((ulonglong)lVar7 >> 0x20) |
                 ~uVar38 & *(uint *)((longlong)&local_e98 + lVar34 + 4) & uVar38;
            *(uint *)((longlong)&uStack_e90 + lVar34) =
                 ~uVar39 & (uint)lVar30 | ~uVar39 & uVar14 & uVar39;
            *(uint *)((longlong)&uStack_e90 + lVar34 + 4) =
                 ~uVar40 & (uint)((ulonglong)lVar30 >> 0x20) | ~uVar40 & uVar10 & uVar40;
            lVar12 = lVar12 + -1;
            lVar34 = lVar34 + 0x10;
          } while (lVar12 != 0);
        }
      }
      else {
        local_e88 = 0;
        uStack_e80 = 0;
        local_e98 = 0;
        uStack_e90 = 0;
      }
      *(int *)(local_10f0 + 0x57) = iVar11;
      *(undefined4 *)(local_10f0 + 0x58) = 0;
      *(int *)(local_10f0 + 0x5a) = iVar20;
      puVar8 = (undefined8 *)**(longlong **)(param_3 + 0x6340);
      uVar82 = puVar8[1];
      *local_10f0 = *puVar8;
      local_10f0[1] = uVar82;
      uVar82 = puVar8[3];
      local_10f0[2] = puVar8[2];
      local_10f0[3] = uVar82;
      uVar82 = puVar8[5];
      local_10f0[4] = puVar8[4];
      local_10f0[5] = uVar82;
      uVar82 = puVar8[7];
      local_10f0[6] = puVar8[6];
      local_10f0[7] = uVar82;
      *(undefined4 *)(local_10f0 + 8) = *(undefined4 *)(puVar8 + 8);
      puVar8 = *(undefined8 **)(param_3 + 0x6410);
      uVar82 = puVar8[1];
      *(undefined8 *)((longlong)local_10f0 + 0x44) = *puVar8;
      *(undefined8 *)((longlong)local_10f0 + 0x4c) = uVar82;
      uVar82 = puVar8[3];
      *(undefined8 *)((longlong)local_10f0 + 0x54) = puVar8[2];
      *(undefined8 *)((longlong)local_10f0 + 0x5c) = uVar82;
      uVar43 = *(undefined4 *)(puVar8 + 4);
      local_10f0[0x5c] = local_e98;
      local_10f0[0x5d] = uStack_e90;
      *(undefined4 *)((longlong)local_10f0 + 100) = uVar43;
      local_10f0[0x5e] = local_e88;
      local_10f0[0x5f] = uStack_e80;
      *(int *)((longlong)local_10f0 + 0x2dc) = iVar29;
      *(int *)(local_10f0 + 0x5b) = iVar27;
      *(int *)((longlong)local_10f0 + 0x2d4) = iVar9;
    }
  }
  else {
    *local_1030 = 0x7fffffff;
    local_1030[4] = -1;
    local_1030[5] = 0x7fffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f8 ^ (ulonglong)auStack_11e8);
}



// FUNCTION 145671400 FUN_145671400 body=293 status=ok
// SIG undefined FUN_145671400(void)

void FUN_145671400(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                  )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar4 = (longlong)param_5;
  if (lVar4 < param_6) {
    lVar3 = (longlong)param_4 - (longlong)param_3;
    lVar7 = param_6 - lVar4;
    puVar2 = (undefined8 *)(param_2 + (lVar4 * 3 + 0x3b + (longlong)param_3) * 8);
    puVar5 = (undefined8 *)(lVar4 * 0x88 + param_1 + 0x6180);
    puVar6 = (undefined8 *)(lVar4 * 0x2080 + 0x2000 + param_1);
    do {
      puVar1 = puVar2 + 3;
      puVar6[1] = puVar2[-9];
      *puVar6 = *puVar2;
      *puVar5 = puVar2[9];
      puVar6[2] = puVar2[0x12];
      puVar2[-9] = puVar1[lVar3 + -0xc];
      *puVar2 = puVar1[lVar3 + -3];
      puVar2[9] = puVar1[lVar3 + 6];
      puVar2[0x12] = puVar1[lVar3 + 0xf];
      puVar1[lVar3 + -0xc] = puVar6[1];
      puVar1[lVar3 + -3] = *puVar6;
      puVar1[lVar3 + 6] = *puVar5;
      puVar1[lVar3 + 0xf] = puVar6[2];
      lVar7 = lVar7 + -1;
      puVar2 = puVar1;
      puVar5 = puVar5 + 0x11;
      puVar6 = puVar6 + 0x410;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 145671530 FUN_145671530 body=1398 status=ok
// SIG undefined FUN_145671530(void)

void FUN_145671530(longlong param_1,byte param_2,longlong param_3,longlong param_4,
                  undefined4 *param_5,longlong *param_6,int *param_7,longlong *param_8)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  uint local_178;
  uint local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  longlong local_160;
  longlong local_158;
  uint local_150 [2];
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  int *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  int *local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  longlong *local_90;
  int local_88 [4];
  uint local_78 [4];
  uint local_68 [4];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar16 = 0;
  local_98 = param_5;
  local_90 = param_6;
  iVar9 = 1;
  local_a8 = param_7;
  local_a0 = param_8;
  local_160 = 0;
  local_158 = 0;
  local_130 = 0;
  if ((*(byte *)(*(longlong *)(param_4 + 0x210) + 0x98) & 8) == 0) {
    local_164 = 3;
  }
  else {
    local_164 = *(int *)(param_4 + 0x270) + -5;
  }
  lVar2 = (longlong)*(char *)(**(longlong **)(param_4 + 0x1c0) + 8);
  iVar15 = 0;
  local_170 = 0;
  local_140 = 0;
  local_e0 = (int *)(param_3 + 0x6484 + lVar2 * 4);
  *(undefined4 *)(param_3 + 0x6484 + lVar2 * 4) = 0;
  local_b8 = (ulonglong)param_2 * 2;
  local_120 = param_1;
  local_108 = param_3;
  local_c0 = param_4;
  do {
    local_178 = 0;
    local_138 = 0;
    local_148 = local_140 * 0x88 + local_c0;
    local_174 = 0;
    local_118 = local_140 * 0x2080 + param_3;
    local_128 = (ulonglong)
                (byte)(&DAT_149d54b48)
                      [(longlong)*(int *)(local_148 + 0xc) +
                       (*(int *)(local_148 + 8) + local_b8) * 2];
    local_f8 = *(longlong *)(local_118 + 0x2068) >> 6;
    local_e8 = *(longlong *)(local_118 + 0x2068) >> 8;
    local_100 = *(longlong *)(local_118 + 0x2070) >> 6;
    if (0x32 < local_e8) {
      local_e8 = 0x32;
    }
    uVar5 = (ulonglong)(byte)(&DAT_149d54af4)[(byte)(&DAT_149d54b30)[local_128]];
    local_f0 = *(longlong *)(local_118 + 0x2070) >> 8;
    if (0x50 < local_f0) {
      local_f0 = 0x50;
    }
    bVar4 = (&DAT_149d54960)[uVar5];
    iVar8 = (byte)(&DAT_149d54970)[uVar5] + 2;
    local_16c = bVar4 + 2;
    local_d8 = (longlong)(1 << ((&DAT_149d54960)[local_128] - bVar4 & 0x1f));
    lVar2 = (longlong)(1 << ((&DAT_149d54970)[local_128] - bVar4 & 0x1f));
    uVar7 = uVar16;
    lVar3 = local_140;
    lVar11 = local_d8;
    local_168 = iVar8;
    local_d0 = uVar5;
    local_c8 = lVar2;
    if (0 < lVar2) {
      do {
        lVar12 = lVar11;
        uVar1 = (uint)uVar7;
        if (0 < lVar11) {
          local_110 = (undefined8 *)(uVar5 * 0x30 + local_120 + 0xb4a58);
          puVar10 = (ulonglong *)((local_138 + lVar3 * 2) * 0x10 + 0x14168 + param_3);
          puVar6 = (undefined1 *)(param_3 + (local_138 + (lVar3 + 0x5057) * 2) * 2);
          uVar14 = uVar16;
          do {
            bVar4 = (byte)iVar8;
            iVar13 = (int)uVar14;
            local_188 = local_150;
            uVar1 = (*(code *)*local_110)
                              ((longlong)
                               (*(int *)(local_118 + 0x2020) * (int)uVar7 << (bVar4 & 0x1f)) +
                               (longlong)(iVar13 << ((byte)local_16c & 0x1f)) +
                               *(longlong *)(local_118 + 0x2018),*(int *)(local_118 + 0x2020),
                               (longlong)(*(int *)(local_148 + 0x18) * (int)uVar7 << (bVar4 & 0x1f))
                               + (longlong)(iVar13 << (bVar4 & 0x1f)) +
                               *(longlong *)(local_148 + 0x10));
            local_174 = local_174 + local_150[0];
            *puVar10 = (ulonglong)local_150[0];
            *puVar6 = 0;
            iVar8 = iVar15;
            if ((*(int *)(local_108 + 0x6424) == 0) &&
               (((longlong)(ulonglong)uVar1 < local_100 || (uVar1 == 0)))) {
              *puVar6 = 2;
              if ((((longlong)(ulonglong)(local_150[0] - uVar1) < local_f8) ||
                  (local_150[0] == uVar1)) &&
                 ((*puVar6 = 1, local_150[0] == 0 ||
                  (((longlong)(ulonglong)uVar1 < local_f0 &&
                   ((longlong)(ulonglong)(local_150[0] - uVar1) < local_e8)))))) {
                iVar8 = 1;
              }
            }
            if ((iVar9 != 0) && (iVar8 == 0)) {
              iVar9 = iVar15;
            }
            if (local_140 == 0) {
              *local_e0 = *local_e0 + local_150[0];
            }
            uVar7 = (ulonglong)local_178;
            uVar14 = (ulonglong)(iVar13 + 1);
            puVar10 = puVar10 + 1;
            puVar6 = puVar6 + 1;
            lVar11 = lVar11 + -1;
            lVar2 = local_c8;
            lVar3 = local_140;
            param_3 = local_108;
            uVar5 = local_d0;
            lVar12 = local_d8;
            iVar8 = local_168;
            uVar1 = local_178;
          } while (lVar11 != 0);
        }
        local_178 = uVar1 + 1;
        uVar7 = (ulonglong)local_178;
        local_138 = local_138 + 1;
        lVar11 = lVar12;
      } while (local_138 < lVar2);
      uVar7 = (ulonglong)local_174;
    }
    lVar2 = local_130 + uVar7;
    local_78[lVar3] = (uint)uVar7;
    if ((local_170 != 0) || (local_170 = 0, (uint)uVar7 == 0)) {
      local_170 = 1;
    }
    local_88[lVar3] =
         (int)(*(short *)(*(longlong *)(local_148 + 0x78) + 2) >> ((byte)local_164 & 0x1f));
    local_68[lVar3] = (uint)(byte)(&DAT_149d549e0)[local_128];
    local_140 = lVar3 + 1;
    local_130 = lVar2;
  } while (local_140 < 3);
  if (*(int *)(local_120 + 0xb48d0) == 0) {
    if (local_170 == 0) {
      local_188 = (uint *)&local_158;
      FUN_14561b3e0(local_78,local_68,local_88,&local_160);
      lVar3 = local_158;
      lVar11 = local_160;
    }
    else {
      do {
        local_188 = (uint *)&local_b0;
        FUN_14561b2d0(*(undefined4 *)((longlong)local_78 + uVar16),
                      *(undefined4 *)((longlong)local_68 + uVar16),
                      *(undefined4 *)((longlong)local_88 + uVar16),&local_16c);
        uVar16 = uVar16 + 4;
        lVar11 = local_160 + local_16c;
        lVar3 = local_158 + local_b0;
        local_160 = lVar11;
        local_158 = lVar3;
      } while ((longlong)uVar16 < 0xc);
    }
  }
  else {
    uVar5 = uVar16;
    if (local_88[0] < 0x78) {
      uVar5 = (longlong)((longlong)(0x118 - local_88[0]) * (ulonglong)local_78[0]) >> 7;
    }
    uVar7 = uVar16;
    if (local_88[1] < 0x78) {
      uVar7 = (longlong)((longlong)(0x118 - local_88[1]) * (ulonglong)local_78[1]) >> 7;
    }
    if (local_88[2] < 0x78) {
      uVar16 = (longlong)((longlong)(0x118 - local_88[2]) * (ulonglong)local_78[2]) >> 7;
    }
    lVar3 = ((longlong)((longlong)local_88[2] * (ulonglong)local_78[2]) >> 8) +
            ((longlong)((longlong)local_88[1] * (ulonglong)local_78[1]) >> 8) +
            ((longlong)((longlong)local_88[0] * (ulonglong)local_78[0]) >> 8) + local_158;
    lVar11 = local_160 + uVar5 + uVar7 + uVar16;
  }
  *local_a8 = iVar9;
  *local_a0 = lVar2 * 0x10;
  *local_98 = (int)lVar11;
  *local_90 = lVar3 << 4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 145671ac0 FUN_145671ac0 body=1164 status=ok
// SIG undefined FUN_145671ac0(void)

void FUN_145671ac0(longlong param_1,int param_2,int param_3,byte param_4,int param_5,
                  longlong param_6,longlong param_7,int param_8)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  short sVar10;
  short sVar11;
  ulonglong uVar12;
  int iVar13;
  short *psVar14;
  uint *local_468;
  undefined *local_460;
  longlong local_458;
  ulonglong local_450;
  ulonglong local_448;
  byte local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_468;
  lVar3 = (ulonglong)param_4 * 0x10;
  uVar5 = (ulonglong)(uint)(param_3 << 4);
  local_458 = param_6;
  uVar1 = *(ushort *)
           (*(longlong *)((longlong)param_2 * 0x2080 + 0x2010 + param_1) + (longlong)param_3 * 2);
  uVar12 = (ulonglong)uVar1;
  local_468 = (uint *)(*(longlong *)((longlong)param_2 * 0x2080 + 0x2000 + param_1) +
                      (longlong)(param_3 << 4) * 4);
  puVar9 = (uint *)0x6948;
  if ('\0' < *(char *)(**(longlong **)(param_1 + 0x6340) + 8)) {
    puVar9 = (uint *)0x76c8;
  }
  lVar4 = 0;
  if (0 < param_2) {
    lVar4 = 0x1b00;
  }
  lVar4 = (ulonglong)param_4 * 0x3600 + lVar4 + param_1;
  if (*(int *)(param_1 + 0x63f0) == 8) {
    local_460 = &DAT_149df3710;
  }
  else {
    local_460 = &DAT_149df3990;
    if (*(int *)(param_1 + 0x63f0) == 10) {
      local_460 = &DAT_149df3790;
    }
  }
  if (uVar1 != 0) {
    psVar14 = (short *)(&DAT_149df5054 + lVar3);
    iVar13 = (int)*(short *)(&DAT_149df5052 + lVar3);
    uVar2 = *local_468;
    lVar3 = (longlong)(int)uVar2;
    local_450 = uVar12;
    if (param_8 == 0) {
      if (uVar2 + 0x42 < 0x85) {
        uVar5 = (ulonglong)*(ushort *)(PTR_DAT_14c748070 + lVar3 * 8);
      }
      else {
        uVar5 = 10;
      }
      puVar9 = (uint *)(longlong)(short)uVar5;
      local_438[0] = (byte)puVar9[0x52754554];
      uVar6 = 1;
      if (1 < uVar12) {
        lVar4 = 1;
        lVar3 = param_7;
        do {
          sVar10 = *(short *)(param_6 + lVar4 * 2);
          if (local_468[sVar10] + 0x42 < 0x85) {
            sVar11 = *(short *)(PTR_DAT_14c748070 + (longlong)(int)local_468[sVar10] * 8);
          }
          else {
            sVar11 = 10;
          }
          uVar5 = (ulonglong)sVar11;
          puVar9 = (uint *)(ulonglong)local_438[*(short *)(lVar3 + 6)];
          local_438[sVar10] = (&DAT_149d51550)[uVar5];
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar13 = (int)*psVar14;
            psVar14 = psVar14 + 1;
          }
          lVar4 = lVar4 + 1;
          uVar6 = uVar12;
          lVar3 = lVar3 + 4;
          local_448 = uVar12;
        } while (lVar4 < (longlong)uVar12);
      }
      if (iVar13 != 0) {
        puVar9 = (uint *)(longlong)((int)uVar6 * 2);
        uVar5 = (ulonglong)local_438[*(short *)(param_7 + 2 + (longlong)puVar9 * 2)];
      }
    }
    else {
      if (uVar2 + 0x42 < 0x85) {
        sVar10 = *(short *)(PTR_DAT_14c748070 + lVar3 * 8);
        iVar8 = *(int *)(PTR_DAT_14c748078 + lVar3 * 4);
      }
      else {
        sVar10 = 10;
        uVar5 = (longlong)(int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) - 0x43;
        iVar8 = (uint)*(ushort *)(local_460 + ((longlong)uVar5 >> 8) * 2) +
                (int)*(short *)(&DAT_149df3510 + (uVar5 & 0xff) * 2);
      }
      uVar5 = (ulonglong)
              (uint)(iVar8 + *(int *)((longlong)puVar9 +
                                     ((longlong)sVar10 + (longlong)param_5 * 0xc) * 4 + lVar4));
      lVar3 = (longlong)puVar9 + lVar4 + 0x240;
      if (1 < uVar12) {
        lVar4 = 1;
        sVar11 = sVar10;
        do {
          uVar2 = local_468[*(short *)(param_6 + lVar4 * 2)];
          if (uVar2 + 0x42 < 0x85) {
            sVar10 = *(short *)(PTR_DAT_14c748070 + (longlong)(int)uVar2 * 8);
            iVar8 = *(int *)(PTR_DAT_14c748078 + (longlong)(int)uVar2 * 4);
          }
          else {
            sVar10 = 10;
            uVar6 = (longlong)(int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) - 0x43;
            iVar8 = (uint)*(ushort *)(local_460 + ((longlong)uVar6 >> 8) * 2) +
                    (int)*(short *)(&DAT_149df3510 + (uVar6 & 0xff) * 2);
          }
          lVar7 = 0;
          if (sVar11 == 0) {
            lVar7 = 0x54;
          }
          uVar5 = (ulonglong)(uint)((int)uVar5 + *(int *)(lVar3 + (lVar7 + sVar10) * 4) + iVar8);
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar13 = (int)*psVar14;
            psVar14 = psVar14 + 1;
            lVar3 = lVar3 + 0x240;
          }
          lVar4 = lVar4 + 1;
          sVar11 = sVar10;
        } while (lVar4 < (longlong)uVar12);
      }
      puVar9 = local_468;
      if (iVar13 != 0) {
        lVar4 = 0x2c;
        if (sVar10 == 0) {
          lVar4 = 0x5c;
        }
        uVar5 = (ulonglong)(uint)((int)uVar5 + *(int *)(lVar4 + lVar3));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)&local_468,puVar9,uVar5);
}



// FUNCTION 145671f70 FUN_145671f70 body=911 status=ok
// SIG undefined FUN_145671f70(void)

void FUN_145671f70(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
                  int param_6,int param_7,int param_8,byte param_9,byte param_10)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong local_60;
  longlong local_58;
  
  lVar10 = (longlong)param_6;
  lVar5 = (longlong)param_4;
  bVar2 = (&DAT_149d549c0)[param_10];
  uVar8 = (uint)(byte)(&DAT_149d549b0)[param_10];
  uVar4 = ((*(int *)(param_1 + 0x1ec) >> ((char)*(undefined4 *)(param_2 + 8) + 5U & 0x1f)) +
          (uint)(byte)(&DAT_149d549c0)[param_9]) - param_8;
  uVar9 = ((*(int *)(param_1 + 500) >> ((char)*(undefined4 *)(param_2 + 0xc) + 5U & 0x1f)) +
          (uint)(byte)(&DAT_149d549b0)[param_9]) - param_7;
  uVar11 = *(uint *)(*(longlong *)(param_1 + 0x210) + 0x98) & 8;
  if ((param_10 == 0) || (((int)(uint)bVar2 <= (int)uVar4 && ((int)uVar8 <= (int)uVar9)))) {
    iVar1 = (uint)bVar2 * 4;
    if (uVar11 != 0) {
      (*DAT_14c7fba30)(param_3 * 2,lVar5,param_5 * 2,lVar10,0,0,0,0,0,iVar1,uVar8 * 4,
                       *(undefined4 *)(param_1 + 0x270));
      return;
    }
    FUN_14266a760(param_3,lVar5,param_5,lVar10,0,0,0,0,0,iVar1,uVar8 * 4);
  }
  else {
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = uVar9;
    }
    uVar9 = (uint)bVar2;
    if ((int)uVar4 < (int)(uint)bVar2) {
      uVar9 = uVar4;
    }
    if (0 < (int)uVar8) {
      uVar3 = (ulonglong)uVar8;
      local_58 = 0;
      local_60 = 0;
      do {
        if (0 < (int)uVar9) {
          if (uVar11 == 0) {
            lVar7 = local_60 + param_3;
            uVar6 = (ulonglong)uVar9;
            do {
              FUN_14266a760(lVar7,lVar5,((local_58 - local_60) - param_3) + param_5 + lVar7,lVar10,0
                            ,0,0,0,0,4,4);
              lVar7 = lVar7 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          else {
            uVar6 = (ulonglong)uVar9;
            lVar7 = 0;
            do {
              (*DAT_14c7fba30)(local_60 * 2 + lVar7 * 2 + param_3 * 2,lVar5,
                               local_58 * 2 + lVar7 * 2 + param_5 * 2,lVar10,0,0,0,0,0,4,4,
                               *(undefined4 *)(param_1 + 0x270));
              lVar7 = lVar7 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        local_60 = local_60 + param_4 * 4;
        local_58 = local_58 + param_6 * 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 145672300 FUN_145672300 body=550 status=ok
// SIG undefined FUN_145672300(void)

ulonglong FUN_145672300(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       int param_5,longlong param_6,int param_7,int param_8,int param_9,
                       byte param_10,int param_11)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  
  uVar12 = (ulonglong)(byte)param_11;
  uVar3 = 0;
  uVar6 = (uint)(byte)(&DAT_149d549b0)[uVar12];
  uVar11 = ((*(int *)(param_2 + 0x1ec) >> ((char)*(undefined4 *)(param_3 + 8) + 5U & 0x1f)) +
           (uint)(byte)(&DAT_149d549c0)[param_10]) - param_9;
  local_res10[0] = 0;
  uVar10 = ((*(int *)(param_2 + 500) >> ((char)*(undefined4 *)(param_3 + 0xc) + 5U & 0x1f)) +
           (uint)(byte)(&DAT_149d549b0)[param_10]) - param_8;
  local_res20 = param_4;
  if ((byte)param_11 != 0) {
    bVar1 = (&DAT_149d549c0)[uVar12];
    if (((int)uVar11 < (int)(uint)bVar1) || ((int)uVar10 < (int)uVar6)) {
      pcVar2 = *(code **)(param_1 + 0xb4a58);
      if ((int)uVar10 < (int)uVar6) {
        uVar6 = uVar10;
      }
      param_11 = 0;
      uVar10 = (uint)bVar1;
      if ((int)uVar11 < (int)(uint)bVar1) {
        uVar10 = uVar11;
      }
      if (0 < (int)uVar6) {
        lVar4 = (longlong)(param_7 * 4);
        uVar5 = (ulonglong)uVar6;
        uVar12 = uVar3;
        uVar13 = uVar3;
        local_res18 = lVar4;
        do {
          if (0 < (int)uVar10) {
            lVar7 = uVar13 + param_4;
            lVar8 = (uVar12 - uVar13) - param_4;
            uVar9 = (ulonglong)uVar10;
            do {
              (*pcVar2)(lVar7,param_5,lVar8 + param_6 + lVar7,param_7,&param_11);
              lVar7 = lVar7 + 4;
              local_res10[0] = local_res10[0] + param_11;
              uVar3 = (ulonglong)local_res10[0];
              uVar9 = uVar9 - 1;
              param_4 = local_res20;
              lVar4 = local_res18;
            } while (uVar9 != 0);
          }
          uVar13 = uVar13 + (longlong)(param_5 * 4);
          uVar12 = uVar12 + lVar4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      return uVar3;
    }
  }
  (**(code **)(param_1 + 0xb4a58 + uVar12 * 0x30))(param_4,param_5,param_6,param_7,local_res10);
  return (ulonglong)local_res10[0];
}



// FUNCTION 145672530 FUN_145672530 body=1375 status=ok
// SIG undefined FUN_145672530(void)

void FUN_145672530(undefined8 param_1,longlong param_2,int param_3,undefined1 param_4,int param_5,
                  int param_6,int param_7,byte param_8,longlong *param_9,longlong *param_10,
                  longlong *param_11)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  sbyte sVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  undefined1 auStack_908 [32];
  longlong *local_8e8;
  undefined8 local_8e0;
  int local_8d8;
  int local_8d0;
  int local_8c8;
  int local_8c0;
  int local_8b8;
  undefined4 local_8b0;
  byte local_8a8;
  undefined1 local_8a7;
  int local_8a4;
  undefined1 *local_8a0;
  int local_898;
  int local_894;
  longlong *local_890;
  uint local_888;
  longlong local_880;
  undefined8 local_878;
  longlong *local_870;
  longlong *local_868;
  undefined1 local_858 [2048];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_908;
  local_868 = param_9;
  lVar5 = param_2 + 0x6180;
  lVar9 = (longlong)param_3 * 0x2080 + param_2;
  local_890 = param_10;
  plVar12 = (longlong *)((longlong)param_3 * 0x88 + lVar5);
  local_870 = param_11;
  sVar1 = *(short *)(*(longlong *)(lVar9 + 0x2010) + (longlong)param_5 * 2);
  local_8a7 = param_4;
  local_878 = param_1;
  if (((param_11 != (longlong *)0x0) || (*(int *)(param_2 + 0x6438) == 0)) || (sVar1 == 0)) {
    local_8a8 = (&DAT_149d54af4)[param_8];
    local_8d8 = (int)plVar12[3];
    local_898 = (uint)(byte)(&DAT_149d549c0)[local_8a8] << 2;
    local_894 = *(int *)(lVar9 + 0x2020);
    local_890 = (longlong *)0x0;
    local_880 = (longlong)((local_894 * param_6 + param_7) * 4) + *(longlong *)(lVar9 + 0x2018);
    local_8e0 = (undefined1 *)((longlong)((local_8d8 * param_6 + param_7) * 4) + plVar12[2]);
    lVar9 = *plVar12 + (longlong)(param_5 << 4) * 4;
    local_8b8 = CONCAT31(local_8b8._1_3_,local_8a8);
    local_8c0 = CONCAT31(local_8c0._1_3_,param_4);
    local_8c8 = param_7;
    local_8d0 = param_6;
    local_8e8 = (longlong *)CONCAT44(local_8e8._4_4_,local_894);
    local_8a4 = local_8d8;
    local_8a0 = local_8e0;
    local_888 = FUN_145672300(param_1,lVar5,plVar12,local_880);
    *param_10 = (ulonglong)local_888 << 4;
    if (local_870 != (longlong *)0x0) {
      local_8e8 = (longlong *)((longlong)(((int)local_870[1] * param_6 + param_7) * 4) + *local_870)
      ;
      local_8c0 = CONCAT31(local_8c0._1_3_,local_8a8);
      local_8c8 = CONCAT31(local_8c8._1_3_,local_8a7);
      local_8d0 = param_7;
      local_8d8 = param_6;
      local_8e0 = (undefined1 *)CONCAT44(local_8e0._4_4_,(int)local_870[1]);
      local_890 = local_8e8;
      FUN_145671f70(lVar5,plVar12,local_8a0,local_8a4);
    }
    if (sVar1 == 0) {
      uVar8 = (ulonglong)local_888;
    }
    else {
      puVar11 = local_858;
      if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
        local_8b8 = local_898;
        local_8c0 = local_898;
        local_8c8 = 0;
        local_8d0 = 0;
        local_8d8 = 0;
        local_8e0 = (undefined1 *)((ulonglong)local_8e0._4_4_ << 0x20);
        local_8e8 = (longlong *)0x0;
        FUN_14266a760(local_8a0,(longlong)local_8a4,local_858,0x20);
        if (param_8 == 1) {
          FUN_145471d20(lVar9,local_858,0x20,sVar1);
        }
        else if (param_8 == 2) {
          FUN_145471d40(lVar9);
        }
        else if (param_8 == 3) {
          FUN_145471d70(lVar9);
        }
        else {
          (**(code **)(param_2 + 0x14218))();
        }
      }
      else {
        local_8b0 = *(undefined4 *)(param_2 + 0x63f0);
        local_8b8 = local_898;
        local_8c0 = local_898;
        local_8c8 = 0;
        local_8d0 = 0;
        local_8d8 = 0;
        local_8e0 = (undefined1 *)((ulonglong)local_8e0._4_4_ << 0x20);
        local_8e8 = (longlong *)0x0;
        (*DAT_14c7fba30)((longlong)local_8a0 * 2);
        local_8e8 = (longlong *)CONCAT44(local_8e8._4_4_,*(undefined4 *)(param_2 + 0x63f0));
        if (*(int *)(param_2 + 0x63f4) == 0) {
          if (param_8 == 0) {
            FUN_145471ea0(lVar9,local_858,0x20,sVar1);
            puVar11 = (undefined1 *)((ulonglong)local_858 >> 1);
          }
          else if (param_8 == 1) {
            FUN_145471ec0(lVar9);
            puVar11 = (undefined1 *)((ulonglong)local_858 >> 1);
          }
          else if (param_8 == 2) {
            FUN_145471ef0(lVar9);
            puVar11 = (undefined1 *)((ulonglong)local_858 >> 1);
          }
          else {
            FUN_145471f30();
            puVar11 = (undefined1 *)((ulonglong)local_858 >> 1);
          }
        }
        else {
          FUN_145471e80(lVar9);
          puVar11 = (undefined1 *)((ulonglong)local_858 >> 1);
        }
      }
      uVar2 = local_8a7;
      bVar4 = local_8a8;
      local_8b8 = CONCAT31(local_8b8._1_3_,local_8a8);
      local_8c0 = CONCAT31(local_8c0._1_3_,local_8a7);
      local_8c8 = param_7;
      local_8d0 = param_6;
      local_8d8 = 0x20;
      local_8e8 = (longlong *)CONCAT44(local_8e8._4_4_,local_894);
      local_8e0 = puVar11;
      uVar3 = FUN_145672300(local_878,lVar5,plVar12,local_880);
      uVar8 = (ulonglong)uVar3;
      if (local_870 != (longlong *)0x0) {
        local_8c0 = CONCAT31(local_8c0._1_3_,bVar4);
        local_8c8 = CONCAT31(local_8c8._1_3_,uVar2);
        local_8d0 = param_7;
        local_8d8 = param_6;
        local_8e0 = (undefined1 *)CONCAT44(local_8e0._4_4_,(int)local_870[1]);
        local_8e8 = local_890;
        FUN_145671f70(lVar5,plVar12,puVar11,0x20);
      }
    }
    *local_868 = uVar8 << 4;
    goto LAB_145672a7f;
  }
  bVar4 = param_8 * '\x02';
  sVar7 = 2;
  if (param_8 == 3) {
    sVar7 = 0;
  }
  lVar5 = (longlong)(param_5 << 4) * 4;
  lVar9 = *(longlong *)(lVar9 + 0x2008) + lVar5;
  lVar5 = *plVar12 + lVar5;
  if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
    iVar6 = 8;
    lVar10 = (longlong)(0x10 << (bVar4 & 0x1f));
LAB_145672664:
    lVar5 = (*DAT_14c7fe660)(lVar9,lVar5,lVar10,&local_8a0);
  }
  else {
    iVar6 = *(int *)(param_2 + 0x63f0);
    lVar10 = (longlong)(0x10 << (bVar4 & 0x1f));
    if (iVar6 == 8) goto LAB_145672664;
    local_8e8 = (longlong *)CONCAT44(local_8e8._4_4_,iVar6);
    lVar5 = FUN_1456a7cc0(lVar9,lVar5,lVar10,&local_8a0);
  }
  *local_868 = lVar5 >> sVar7;
  *local_890 = (longlong)local_8a0 >> sVar7;
  if ((*(int *)(param_2 + 0x14150) != 0) &&
     (*(char *)(**(longlong **)(param_2 + 0x6340) + 8) < '\x01')) {
    lVar5 = (longlong)
            ((int)*(short *)(plVar12[0xf] + 2) * (int)*(short *)(plVar12[0xf] + 2) << (bVar4 & 0x1f)
            ) >> (sVar7 + -0xe + (char)iVar6 * '\x02' & 0x3fU);
    *local_868 = *local_868 + (lVar5 >> 4);
    *local_890 = *local_890 + lVar5;
  }
LAB_145672a7f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_908);
}



// FUNCTION 145672ab0 FUN_145672ab0 body=2114 status=ok
// SIG undefined FUN_145672ab0(void)

void FUN_145672ab0(uint param_1,uint param_2,ulonglong param_3,int param_4,byte param_5,byte param_6
                  ,longlong *param_7)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar25;
  undefined8 uVar24;
  undefined8 in_stack_ffffffffffffff00;
  undefined7 uVar27;
  undefined8 uVar26;
  undefined4 uVar28;
  undefined8 in_stack_ffffffffffffff08;
  longlong *plVar29;
  undefined7 uVar31;
  undefined8 uVar30;
  undefined4 uVar32;
  int in_stack_ffffffffffffff10;
  undefined3 uVar33;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar34;
  longlong *plVar35;
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b8;
  int local_b4;
  longlong *local_b0;
  int *local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  char *local_88;
  char *local_80;
  longlong local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  
  iVar6 = (int)param_3;
  uVar16 = 0;
  uVar23 = (ulonglong)(int)param_1;
  cVar7 = '\0';
  lVar5 = param_7[1];
  local_c0 = 0x7fffffffffffffff;
  local_88 = (char *)((longlong)param_7 + (longlong)param_4 + 0x10);
  local_c8 = 0x7fffffffffffffff;
  local_80 = (char *)((longlong)param_7 + (longlong)iVar6 + 0x20);
  plVar35 = (longlong *)param_7[0xe];
  local_b4 = (uint)(*local_80 != '\0') + (uint)(*local_88 != '\0');
  bVar8 = (&DAT_149d54af4)[param_6];
  local_b0 = (longlong *)(lVar5 + 0x6180 + uVar23 * 0x88);
  local_b8 = (int)local_b0[3];
  local_98 = (longlong)((local_b8 * iVar6 + param_4) * 4) + local_b0[2];
  if ((int)param_7[0xb] != 0) {
    return;
  }
  uVar27 = (undefined7)((ulonglong)in_stack_ffffffffffffff00 >> 8);
  local_90 = uVar23;
  if (*(char *)(**(longlong **)(lVar5 + 0x6340) + 8) < '\x01') {
    local_70 = *(undefined4 *)(lVar5 + 0x6434);
    local_68 = param_7 + 2;
    local_60 = param_7 + 4;
    local_58 = **(longlong **)(lVar5 + 0x6340) + 3;
    plVar29 = &local_78;
    uVar24 = CONCAT71(uVar27,param_6);
    lVar10 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffef8 >> 8),param_5);
    local_78 = lVar5;
    FUN_14565ffe0(param_1,param_2,param_3,param_4,lVar10,uVar24,plVar29);
    uVar28 = (undefined4)((ulonglong)uVar24 >> 0x20);
    if (plVar35 != (longlong *)0x0) {
      lVar10 = (longlong)(((int)plVar35[1] * iVar6 + param_4) * 4) + *plVar35;
      in_stack_ffffffffffffff18 =
           CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff18 >> 8),param_5);
      plVar29 = (longlong *)CONCAT44((int)((ulonglong)plVar29 >> 0x20),iVar6);
      uVar24 = CONCAT44(uVar28,(int)plVar35[1]);
      in_stack_ffffffffffffff10 = param_4;
      FUN_145671f70(lVar5 + 0x6180,local_b0,local_98,local_b8,lVar10,uVar24,plVar29,param_4,
                    in_stack_ffffffffffffff18,bVar8);
      uVar28 = (undefined4)((ulonglong)uVar24 >> 0x20);
    }
    uVar25 = (undefined4)((ulonglong)lVar10 >> 0x20);
    uVar32 = (undefined4)((ulonglong)plVar29 >> 0x20);
    uVar34 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
    if (*(int *)(lVar5 + 0x6438) == 0) {
      bVar2 = (&DAT_149d549c0)[param_5];
      lVar12 = local_90 * 0x2080 + lVar5;
      iVar13 = (uint)bVar2 * 4;
      local_c0 = CONCAT44(local_c0._4_4_,*(int *)(lVar12 + 0x2020));
      local_a8 = (int *)((longlong)((*(int *)(lVar12 + 0x2020) * iVar6 + param_4) * 4) +
                        *(longlong *)(lVar12 + 0x2018));
      lVar12 = lVar12 + (longlong)((iVar13 * iVar6 + param_4) * 4) * 2;
      bVar3 = (&DAT_149d549c0)[bVar8];
      bVar4 = (&DAT_149d549b0)[bVar8];
      uVar21 = ((*(int *)(lVar5 + 0x636c) >> ((char)(int)local_b0[1] + 5U & 0x1f)) - param_4) +
               (uint)bVar2;
      uVar11 = ((*(int *)(lVar5 + 0x6374) >>
                ((char)*(undefined4 *)((longlong)local_b0 + 0xc) + 5U & 0x1f)) +
               (uint)(byte)(&DAT_149d549b0)[param_5]) - iVar6;
      if (bVar8 == 0) {
LAB_145672e44:
        uVar16 = FUN_1456a8000(lVar12,iVar13,(uint)bVar3 * 4);
      }
      else {
        if (((int)(uint)bVar3 <= (int)uVar21) && ((int)(uint)bVar4 <= (int)uVar11))
        goto LAB_145672e44;
        uVar19 = (uint)bVar4;
        if ((int)uVar11 < (int)(uint)bVar4) {
          uVar19 = uVar11;
        }
        uVar11 = (uint)bVar3;
        if ((int)uVar21 < (int)(uint)bVar3) {
          uVar11 = uVar21;
        }
        if (0 < (int)uVar19) {
          uVar23 = (ulonglong)bVar2 << 5;
          local_a0 = (ulonglong)uVar19;
          local_c8 = uVar23;
          do {
            if (0 < (int)uVar11) {
              uVar14 = (ulonglong)uVar11;
              lVar17 = lVar12;
              do {
                lVar18 = FUN_1456a8000(lVar17,iVar13,4);
                uVar16 = uVar16 + lVar18;
                lVar17 = lVar17 + 8;
                uVar14 = uVar14 - 1;
                uVar23 = local_c8;
              } while (uVar14 != 0);
            }
            uVar25 = (undefined4)((ulonglong)lVar10 >> 0x20);
            uVar32 = (undefined4)((ulonglong)plVar29 >> 0x20);
            uVar34 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
            lVar12 = lVar12 + uVar23;
            local_a0 = local_a0 - 1;
          } while (local_a0 != 0);
          local_a0 = 0;
        }
      }
      if (((*(byte *)(*(longlong *)(lVar5 + 0x6390) + 0x98) & 8) != 0) &&
         (8 < *(int *)(lVar5 + 0x63f0))) {
        cVar7 = (char)*(int *)(lVar5 + 0x63f0);
        uVar16 = (1L << (cVar7 * '\x02' - 0x11U & 0x3f)) + uVar16 >> (cVar7 * '\x02' - 0x10U & 0x3f)
        ;
      }
      uVar15 = uVar16 << 4;
      uVar11 = FUN_145672300(*param_7,lVar5 + 0x6180,local_b0,local_a8,
                             CONCAT44(uVar25,(undefined4)local_c0),local_98,
                             CONCAT44(uVar32,local_b8),iVar6,CONCAT44(uVar34,param_4),param_5,bVar8)
      ;
      uVar22 = (ulonglong)param_2;
      uVar23 = (ulonglong)param_1;
      uVar14 = (ulonglong)uVar11 << 4;
      goto LAB_14567304f;
    }
    plVar35 = (longlong *)0x0;
    uVar33 = (undefined3)((uint)in_stack_ffffffffffffff10 >> 8);
LAB_14567301f:
    FUN_145672530(*param_7,lVar5,param_1,param_5,CONCAT44(uVar25,param_2),CONCAT44(uVar28,iVar6),
                  CONCAT44(uVar32,param_4),CONCAT31(uVar33,param_6),&local_c0,&local_c8,plVar35);
    uVar23 = (ulonglong)param_1;
  }
  else {
    if ((&DAT_149d54b30)[param_5] == param_6) {
      cVar7 = *(char *)((longlong)(int)(((int)param_2 >> (param_6 * '\x02' & 0x1f)) + param_1 * 4) +
                        0x1415c + lVar5);
    }
    uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
    uVar31 = (undefined7)((ulonglong)in_stack_ffffffffffffff08 >> 8);
    if (((*(int *)(*param_7 + 0xb4930) == 0) && (cVar7 == '\x01')) || (cVar7 == '\0')) {
LAB_145672f95:
      uVar30 = CONCAT71(uVar31,param_6);
      uVar26 = CONCAT71(uVar27,param_5);
      uVar24 = CONCAT44(uVar25,param_4);
      FUN_14565fae0(lVar5,param_1,param_2,param_3 & 0xffffffff,uVar24,uVar26,uVar30);
      uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
      uVar28 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar32 = (undefined4)((ulonglong)uVar30 >> 0x20);
      if (*(int *)(lVar5 + 0x6434) != 0) {
        uVar24 = CONCAT44(uVar25,local_b4);
        FUN_14565e680(lVar5,param_1,param_2,param_6,uVar24);
        uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
      }
      uVar33 = (undefined3)((uint)in_stack_ffffffffffffff10 >> 8);
      goto LAB_14567301f;
    }
    if (plVar35 == (longlong *)0x0) {
      if (cVar7 == '\x02') {
        lVar17 = uVar23 * 0x2080;
        lVar10 = (longlong)(int)(param_2 << 4) * 4;
        lVar12 = *(longlong *)(lVar17 + 0x2008 + lVar5);
        local_a8 = (int *)(*local_b0 + lVar10);
        FUN_14565f830(lVar5,param_1,param_2,param_3 & 0xffffffff,CONCAT44(uVar25,param_4),
                      CONCAT71(uVar27,param_5),CONCAT71(uVar31,param_6));
        uVar22 = (ulonglong)(int)param_2;
        uVar23 = (ulonglong)param_1;
        uVar15 = *(longlong *)
                  (lVar5 + 0x14168 +
                  (longlong)(int)(((int)param_2 >> (param_6 * '\x02' & 0x1f)) + param_1 * 4) * 8) *
                 0x10;
        uVar14 = uVar15;
        if (*(short *)(*(longlong *)(lVar17 + 0x2010 + lVar5) + uVar22 * 2) != 0) {
          iVar6 = *(int *)(lVar12 + lVar10);
          lVar12 = (longlong)iVar6 * (longlong)iVar6 -
                   (longlong)(iVar6 - *local_a8) * (longlong)(iVar6 - *local_a8) >>
                   ((char)*(undefined4 *)(lVar5 + 0x63f0) * '\x02' - 0x10U & 0x3f);
          lVar10 = lVar12 >> 2;
          if (param_6 == 3) {
            lVar10 = lVar12;
          }
          uVar14 = uVar16;
          if (-1 < (longlong)(uVar15 - lVar10)) {
            uVar14 = uVar15 - lVar10;
          }
        }
        goto LAB_14567304f;
      }
    }
    else if (cVar7 == '\x02') goto LAB_145672f95;
  }
  uVar22 = (ulonglong)param_2;
  uVar14 = local_c0;
  uVar15 = local_c8;
LAB_14567304f:
  uVar16 = (ulonglong)param_6;
  if ((longlong)((uVar14 << ((byte)*(undefined4 *)(lVar5 + 0x6448) & 0x3f)) + param_7[9]) <=
      param_7[10]) {
    iVar6 = FUN_145671ac0(param_7[1],uVar23 & 0xffffffff,uVar22 & 0xffffffff,uVar16,local_b4,
                          *(undefined8 *)param_7[0xc],((undefined8 *)param_7[0xc])[2],
                          *(undefined4 *)((longlong)param_7 + 0x5c));
    lVar17 = (longlong)(int)param_2;
    lVar18 = local_90 * 0x2080 + lVar5;
    *local_88 = *(short *)(*(longlong *)(lVar18 + 0x2010) + lVar17 * 2) != 0;
    *local_80 = *(short *)(*(longlong *)(lVar18 + 0x2010) + lVar17 * 2) != 0;
    bVar8 = (byte)*(undefined4 *)(lVar5 + 0x6448);
    lVar20 = uVar15 << (bVar8 & 0x3f);
    lVar12 = ((longlong)*(int *)(lVar5 + 0x644c) * (longlong)iVar6 + 0x100 >> 9) +
             (uVar14 << (bVar8 & 0x3f));
    lVar10 = lVar20;
    if (lVar12 < lVar20) {
      lVar10 = lVar12;
    }
    if (param_1 == 0) {
      if ((*(short *)(*(longlong *)(lVar18 + 0x2010) + lVar17 * 2) == 0) ||
         (((*(int *)(lVar5 + 0x6518) == 0 && (lVar20 < lVar12)) && (*(int *)(lVar5 + 0x63f4) == 0)))
         ) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
      }
      *(undefined1 *)(uVar16 * 0x100 + lVar17 + 0x6530 + lVar5) = uVar9;
      piVar1 = (int *)(lVar5 + 0x6930 + uVar16 * 4);
      *piVar1 = *piVar1 + (uint)*(ushort *)(*(longlong *)(lVar18 + 0x2010) + lVar17 * 2);
    }
    param_7[9] = param_7[9] + lVar10;
    *(int *)(param_7 + 6) = (int)param_7[6] + iVar6;
    param_7[7] = param_7[7] + uVar14;
    param_7[8] = param_7[8] + uVar15;
    if (param_7[9] <= param_7[10]) {
      *(byte *)(param_7 + 0xd) =
           *(byte *)(param_7 + 0xd) & *(short *)(*(longlong *)(lVar18 + 0x2010) + lVar17 * 2) == 0;
      return;
    }
  }
  *(undefined4 *)(param_7 + 0xb) = 1;
  return;
}



// FUNCTION 145673300 FUN_145673300 body=452 status=ok
// SIG undefined FUN_145673300(void)

void FUN_145673300(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  uint *param_5,undefined8 *param_6,undefined8 param_7,int param_8,
                  undefined1 param_9,byte param_10,uint param_11,undefined8 param_12)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_d8;
  uint *local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = (ulonglong)param_10;
  local_d0 = param_5;
  local_d8 = param_6;
  local_78 = param_7;
  lStack_70 = (ulonglong)param_11 << 0x20;
  local_58 = param_12;
  local_68 = (undefined **)0x0;
  uStack_60 = 1;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (param_8 == 0) {
    *(byte *)(**(longlong **)(param_2 + 0x6340) + 2) = param_10;
  }
  local_e8 = &local_a8;
  local_c8 = param_1;
  lStack_c0 = param_2;
  FUN_14561b830(param_9,uVar3,(longlong)param_8 * 0x88 + param_2 + 0x6180,&local_b8);
  pbVar1 = (byte *)**(undefined8 **)(param_2 + 0x6340);
  if ((((char)pbVar1[8] < '\x01') && (param_8 < 1)) && (*(int *)(param_2 + 0x63f4) == 0)) {
    if (*pbVar1 < 3) {
      bVar2 = pbVar1[0x14];
    }
    else {
      bVar2 = pbVar1[1];
    }
    local_68 = &PTR_DAT_149d54cd0 +
               ((longlong)*(int *)(&DAT_149d53df0 + (ulonglong)bVar2 * 4) + uVar3 * 4) * 3;
  }
  else {
    local_68 = &PTR_DAT_149d54c70 + uVar3 * 3;
  }
  local_e8 = &local_c8;
  FUN_145472750(param_2 + 0x6180,param_9,param_8,FUN_145672ab0);
  if ((int)lStack_70 == 0) {
    *param_4 = uStack_90;
    *param_3 = (undefined4)local_98;
    *local_d8 = local_88;
    *local_d0 = (uint)(byte)uStack_60;
  }
  else {
    *param_3 = 0x7fffffff;
    *param_4 = 0x7fffffffffffffff;
    *local_d8 = 0x7fffffffffffffff;
    *local_d0 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 1456734e0 FUN_1456734e0 body=1498 status=ok
// SIG undefined FUN_1456734e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1456734e0(longlong param_1,longlong param_2,undefined4 *param_3,longlong *param_4,
                  int *param_5,longlong *param_6,longlong param_7,byte param_8,longlong *param_9)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined1 *puVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  void *_Dst;
  undefined1 *puVar13;
  void *_Src;
  ulonglong uVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  size_t _Size;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_8218 [32];
  int *local_81f8;
  longlong *local_81f0;
  longlong local_81e8;
  undefined4 local_81e0;
  byte local_81d8;
  byte local_81d0;
  undefined4 local_81c8;
  ulonglong *local_81c0;
  byte local_81b8;
  byte local_81b7;
  uint local_81b4;
  uint local_81b0;
  uint local_81ac;
  longlong local_81a8;
  uint local_81a0;
  byte *local_8198;
  byte *local_8190;
  longlong *local_8188;
  int *local_8180;
  longlong local_8178;
  longlong local_8170;
  byte *local_8168;
  longlong *local_8160;
  undefined4 *local_8158;
  int *local_8150;
  longlong *local_8148;
  ulonglong local_8140;
  undefined4 local_8138;
  longlong local_8128 [8];
  int local_80e8 [12];
  longlong local_80b8 [4];
  ulonglong local_8098 [4];
  longlong local_8078 [4];
  undefined1 local_8058 [32768];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1456734ff;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_8218;
  local_8150 = param_5;
  local_8148 = param_6;
  lVar18 = *(longlong *)(param_2 + 0x6350);
  local_8168 = (byte *)**(undefined8 **)(param_2 + 0x6340);
  iVar7 = 0;
  lVar20 = *(longlong *)(param_2 + 0x6348);
  local_81b8 = (&DAT_149d54b30)[param_8];
  local_81b7 = param_8;
  local_8188 = param_9;
  if (lVar18 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (int)*(char *)(lVar18 + 3);
  }
  if (lVar20 != 0) {
    iVar7 = (int)*(char *)(lVar20 + 3);
  }
  local_8128[0] = 0x7fffffffffffffff;
  local_8128[1] = 0x7fffffffffffffff;
  local_8128[2] = 0x7fffffffffffffff;
  local_8128[3] = 0x7fffffffffffffff;
  local_8128[4] = 0x7fffffffffffffff;
  local_8128[5] = 0x7fffffffffffffff;
  uVar14 = (ulonglong)
           *(byte *)((longlong)(iVar7 + iVar10) + 0x7af + *(longlong *)(param_1 + 0x2b108));
  local_81a8 = param_7;
  local_8128[6] = 0x7fffffffffffffff;
  local_8128[7] = 0x7fffffffffffffff;
  bVar9 = (&DAT_149d54b30)[*local_8168];
  bVar4 = bVar9;
  if ((lVar18 != 0) && (*(char *)(lVar18 + 3) == '\0')) {
    bVar4 = *(byte *)(lVar18 + 2);
  }
  bVar5 = bVar9;
  if ((lVar20 != 0) && (*(char *)(lVar20 + 3) == '\0')) {
    bVar5 = *(byte *)(lVar20 + 2);
  }
  puVar13 = local_8058;
  bVar6 = bVar4;
  if (lVar20 != 0) {
    bVar6 = bVar5;
  }
  uVar3 = (uint)bVar4;
  if (lVar18 == 0) {
    uVar3 = (uint)bVar6;
  }
  uVar19 = *(uint *)(*(longlong *)(param_2 + 0x6390) + 0x98);
  lVar18 = 4;
  puVar16 = local_8098;
  do {
    puVar8 = puVar13;
    if ((uVar19 & 8) != 0) {
      puVar8 = (undefined1 *)((ulonglong)puVar13 >> 1);
    }
    puVar13 = puVar13 + 0x2000;
    *puVar16 = (ulonglong)puVar8;
    lVar18 = lVar18 + -1;
    puVar16 = puVar16 + 1;
  } while (lVar18 != 0);
  uVar19 = (uint)local_81b8;
  local_81a0 = (uint)*(ushort *)(&DAT_149df5520 + uVar14 * 2);
  local_81b0 = (uint)*(ushort *)(&DAT_149df5720 + uVar14 * -2);
  local_81ac = uVar19;
  local_8178 = param_1;
  local_8160 = param_4;
  local_8158 = param_3;
  if (*(int *)(param_1 + 0x2a318) == 4) {
    uVar15 = uVar19 - *(int *)(param_1 + 0xb4738);
    if ((int)uVar15 < 1) {
      uVar15 = 0;
    }
    local_81b4 = uVar15;
    if ((9 < param_8) && (local_81b4 = uVar19, (int)(uVar15 + 1) < (int)uVar19)) {
      local_81b4 = uVar15 + 1;
    }
    uVar15 = uVar19;
    if ((int)uVar19 < (int)local_81b4) goto LAB_145673a0a;
  }
  else {
    bVar4 = (&DAT_149d54b40)[*(int *)(param_1 + 0x2a318)];
    local_81b4 = (uint)bVar4;
    uVar15 = (uint)bVar4;
    if (local_81b8 < bVar4) {
      local_81b4 = uVar19;
      uVar15 = uVar19;
    }
  }
  local_8198 = local_8168 + 8;
  local_8170 = (ulonglong)(-(uint)((uint)bVar9 < uVar3 + bVar6) & 4) + (ulonglong)uVar19 * 8 + -8;
  local_8190 = local_8198;
  do {
    local_81c0 = (ulonglong *)0x0;
    lVar18 = (longlong)(int)uVar15;
    iVar7 = *(int *)(local_8178 + 0xcd338 + (lVar18 + local_8170) * 4);
    local_81f0 = local_80b8 + lVar18;
    piVar1 = local_80e8 + lVar18 + 8;
    if (local_8188 != (longlong *)0x0) {
      local_8140 = local_8098[lVar18];
      local_8138 = (undefined4)local_8188[1];
      local_81c0 = &local_8140;
    }
    local_81c8 = *(undefined4 *)(local_8178 + 0xb486c);
    local_81d8 = local_81b7;
    local_81e0 = 0;
    local_81e8 = local_81a8;
    local_81f8 = piVar1;
    local_81d0 = (byte)uVar15;
    FUN_145673300(local_8178,param_2,local_80e8 + lVar18 * 2,local_8078 + lVar18);
    iVar2 = local_80e8[lVar18 * 2];
    *(int *)((longlong)local_80b8 + lVar18 * 8 + -0x2c) = iVar2;
    iVar10 = iVar2;
    if (iVar2 < 0x7fffffff) {
      iVar10 = iVar2 + iVar7;
      *(int *)((longlong)local_80b8 + lVar18 * 8 + -0x2c) = iVar10;
    }
    lVar20 = local_8078[lVar18];
    lVar11 = 0x7fffffffffffffff;
    if ((lVar20 == 0x7fffffffffffffff) || (iVar2 == 0x7fffffff)) {
      lVar12 = 0x7fffffffffffffff;
      local_8128[lVar18 * 2] = 0x7fffffffffffffff;
    }
    else {
      local_8180 = (int *)(param_2 + 0x644c);
      bVar9 = (byte)*(undefined4 *)(param_2 + 0x6448);
      if (*piVar1 == 0) {
        lVar20 = lVar20 << (bVar9 & 0x3f);
        lVar12 = ((longlong)(int)(iVar2 + local_81a0) * (longlong)*local_8180 + 0x100 >> 9) + lVar20
        ;
        lVar11 = ((longlong)(int)(iVar10 + local_81a0) * (longlong)*local_8180 + 0x100 >> 9) +
                 lVar20;
        local_8128[lVar18 * 2] = lVar12;
      }
      else {
        lVar11 = local_80b8[lVar18] << (bVar9 & 0x3f);
        lVar12 = ((longlong)(int)local_81b0 * (longlong)*local_8180 + 0x100 >> 9) + lVar11;
        if ((char)*local_8198 < '\x01') {
          lVar11 = ((longlong)(int)(local_81b0 + iVar7) * (longlong)*local_8180 + 0x100 >> 9) +
                   lVar11;
        }
        else {
          *(int *)((longlong)local_80b8 + lVar18 * 8 + -0x2c) = iVar10 - iVar7;
          lVar11 = lVar12;
        }
        local_8128[lVar18 * 2] = lVar12;
        local_8190 = local_8198;
      }
    }
    local_8128[lVar18 * 2 + 1] = lVar11;
    if (((('\0' < (char)*local_8190) && (*(int *)(param_2 + 0x63f4) == 0)) && (*piVar1 == 0)) &&
       (local_80b8[lVar18] != 0x7fffffffffffffff)) {
      lVar17 = (local_80b8[lVar18] << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f)) +
               ((longlong)*(int *)(param_2 + 0x644c) * (longlong)(int)local_81b0 + 0x100 >> 9);
      lVar20 = lVar17;
      if (lVar12 < lVar17) {
        lVar20 = lVar12;
      }
      if (lVar11 < lVar17) {
        lVar17 = lVar11;
      }
      lVar11 = lVar17;
      local_8128[lVar18 * 2] = lVar20;
      local_8128[lVar18 * 2 + 1] = lVar11;
    }
    if ((*(int *)(local_8178 + 0xb488c) != 0) &&
       (((lVar11 == 0x7fffffffffffffff ||
         (((int)uVar15 < (int)local_81ac && (local_8128[lVar18 * 2 + 3] < lVar11)))) ||
        (*piVar1 == 1)))) break;
    if (lVar11 < local_81a8) {
      local_81b8 = (byte)uVar15;
      local_81a8 = lVar11;
    }
    uVar15 = uVar15 - 1;
  } while ((int)local_81b4 <= (int)uVar15);
  uVar19 = (uint)local_81b8;
LAB_145673a0a:
  lVar18 = 0;
  local_8168[2] = (byte)uVar19;
  *local_8160 = local_8078[uVar19];
  if (*(int *)(local_8178 + 0x2a318) == 4) {
    lVar18 = 4;
  }
  *local_8158 = *(undefined4 *)((longlong)local_80e8 + (ulonglong)local_8168[2] * 8 + lVar18);
  *local_8150 = local_80e8[(ulonglong)local_8168[2] + 8];
  *local_8148 = local_80b8[local_8168[2]];
  if (local_8188 != (longlong *)0x0) {
    _Dst = (void *)*local_8188;
    _Src = (void *)local_8098[local_8168[2]];
    if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
      _Size = 0x1000;
    }
    else {
      _Src = (void *)((longlong)_Src * 2);
      _Size = 0x2000;
      _Dst = (void *)((longlong)_Dst * 2);
    }
    memcpy(_Dst,_Src,_Size);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_8218);
}



// FUNCTION 145673ad0 FUN_145673ad0 body=5230 status=ok
// SIG undefined FUN_145673ad0(void)

void FUN_145673ad0(longlong param_1,longlong param_2,int param_3,int param_4,byte *param_5,
                  longlong param_6,void *param_7,void *param_8,int *param_9,int *param_10,
                  ulonglong *param_11,byte param_12,longlong param_13)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  byte *pbVar5;
  char *pcVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  undefined1 *puVar13;
  void *pvVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  ulonglong uVar21;
  byte bVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  byte local_2a8;
  char local_2a4 [4];
  int local_2a0;
  int local_29c;
  char local_298 [4];
  uint local_294;
  uint local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  int local_27c;
  undefined1 local_278 [4];
  undefined1 local_274 [4];
  char *local_270;
  uint local_268;
  uint local_264;
  uint local_260;
  longlong local_258;
  int local_250;
  uint local_24c;
  longlong *local_248;
  int *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong local_228;
  ulonglong local_220;
  int *local_218;
  longlong *local_210;
  longlong *local_208;
  int *local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  int local_1e0;
  int local_1dc;
  int *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  void *local_1c0;
  int local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  byte *local_170;
  ulonglong local_168;
  longlong *local_160;
  int *local_158;
  int *local_150;
  longlong *local_148;
  int *local_140;
  longlong *local_138;
  int *local_130;
  longlong *local_128;
  longlong local_120;
  int *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  int *local_f8;
  ulonglong *local_f0;
  void *local_e8;
  void *local_e0;
  longlong local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_170 = param_5;
  local_118 = param_9;
  plVar24 = (longlong *)(param_2 + 0x6180);
  iVar8 = *(int *)(param_2 + 0x6198);
  local_f8 = param_10;
  local_f0 = param_11;
  local_258 = param_13;
  local_27c = *(int *)(param_2 + 0x2020);
  lVar10 = (longlong)((param_3 * local_27c + param_4) * 4);
  local_108 = *(longlong *)(param_2 + 0x2018) + lVar10;
  local_e8 = param_7;
  local_1c0 = (void *)(*(longlong *)(param_2 + 0x6190) + lVar10);
  local_e0 = param_8;
  local_1f8 = (ulonglong)(byte)(&DAT_149d549c0)[param_12];
  bVar22 = (&DAT_149d549b0)[param_12];
  local_24c = (uint)(byte)(&DAT_149d549c0)[param_12];
  local_29c = iVar8;
  local_290 = (uint)bVar22;
  local_250 = param_3;
  local_1f0 = param_1;
  local_1b8 = param_4;
  local_178 = param_2;
  memcpy(local_278,param_7,(ulonglong)local_24c);
  local_168 = (ulonglong)bVar22;
  memcpy(local_274,param_8,(ulonglong)(uint)bVar22);
  *(undefined1 *)(**(longlong **)(param_2 + 0x6340) + 2) = 0;
  local_120 = (longlong)param_4;
  local_110 = (longlong)param_3;
  if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
    bVar22 = 0;
    uVar21 = 0;
    lVar10 = local_1f0;
LAB_145674610:
    do {
      plVar24 = (longlong *)(param_2 + 0x6180);
      local_2a0 = 0;
      local_1e8 = 0;
      local_1e0 = *(int *)(param_6 + (ulonglong)bVar22 * 4);
      iVar9 = iVar8;
      local_2a8 = bVar22;
      if ((*(uint *)(lVar10 + 0xb47d0) >> (bVar22 & 0x1f) & 1) != 0) {
        if ((*(byte *)(lVar10 + 0xb47c8) & 0x10) != 0) {
          bVar1 = *local_170;
          if (bVar22 == 5) {
            if ((bVar1 != 1) && (bVar1 != 4)) {
              bVar22 = 6;
              goto LAB_145674610;
            }
          }
          else if (bVar22 == 8) {
            if ((bVar1 - 1 & 0xfd) != 0) {
              bVar22 = 9;
              goto LAB_145674610;
            }
          }
          else if (bVar22 == 7) {
            if (1 < (byte)(bVar1 - 2)) {
              bVar22 = 8;
              goto LAB_145674610;
            }
          }
          else if ((bVar22 == 6) && ((bVar1 - 2 & 0xfd) != 0)) {
            bVar22 = 7;
            goto LAB_145674610;
          }
        }
        memcpy(local_2a4,local_278,local_1f8);
        memcpy(local_298,local_274,local_168);
        local_28c = 0;
        if (local_290 == 0) {
          piVar12 = (int *)(param_2 + 0x6448);
          uVar18 = uVar21;
          iVar15 = 0;
        }
        else {
          local_270 = local_298;
          local_294 = local_250 * -2;
          local_268 = 0;
          local_264 = local_1b8 + local_250 * 2;
          lVar10 = local_120 + local_110 * 2;
          local_1a0 = lVar10 * 2;
          local_1a8 = (longlong *)(lVar10 * 0xc);
          local_260 = local_264 * 0x10;
          uVar26 = uVar21;
          uVar17 = uVar21;
          do {
            if (local_1f8 == 0) {
              piVar12 = (int *)(param_2 + 0x6448);
              local_28c = (uint)uVar26;
              local_268 = (uint)uVar17;
            }
            else {
              local_248 = (longlong *)(param_2 + 0x2060);
              local_210 = (longlong *)(param_2 + 0x644c);
              local_240 = (int *)(param_2 + 0x2048);
              local_178 = (longlong)iVar8;
              local_208 = (longlong *)(local_1f0 + 0xb486c);
              local_238 = (longlong *)(param_2 + 0x2050);
              piVar19 = (int *)(param_2 + 0x6448);
              local_200 = (int *)(param_2 + 0x2058);
              local_1dc = (local_27c - local_29c) * (uint)uVar26 * 4;
              local_230 = (longlong *)(param_2 + 0x61f8);
              lVar16 = local_1a0;
              uVar18 = uVar21;
              uVar11 = local_264;
              local_288 = local_260;
              local_280 = (uint)uVar17;
              local_1d8 = piVar19;
              local_1c8 = local_1a8;
              do {
                local_160 = local_210;
                local_148 = local_208;
                local_140 = local_200;
                local_138 = local_248;
                local_130 = local_240;
                local_180 = local_238;
                local_188 = local_230;
                local_228 = (longlong)(int)local_280 + (longlong)local_1c0;
                lVar10 = (int)(local_1dc + local_280) + local_108;
                local_284 = uVar11;
                local_158 = piVar19;
                local_150 = piVar19;
                local_1d0 = (longlong *)
                            FUN_14561b610(CONCAT71((int7)(int3)(local_280 >> 8),3),uVar11,param_2);
                local_218 = (int *)((longlong)(int)local_288 * 4);
                local_220 = *(longlong *)(param_2 + 0x2008) + (longlong)local_218;
                local_2b8 = (undefined *)((ulonglong)local_2b8 & 0xffffffff00000000);
                local_198 = *(longlong *)(param_2 + 0x2000) + (longlong)local_218;
                local_190 = (longlong)local_218 + *plVar24;
                local_1b0 = *(longlong *)(param_2 + 0x2010) + (longlong)(int)uVar11 * 2;
                *(byte *)(**(longlong **)(param_2 + 0x6340) + 0x14 + (longlong)local_1c8) =
                     local_2a8;
                local_2c0 = CONCAT44(local_2c0._4_4_,local_250 + local_28c);
                local_2e8 = local_228;
                iVar8 = local_29c;
                if (*(int *)(param_2 + 0x14150) != 0) {
                  local_2e8 = lVar10;
                  iVar8 = local_27c;
                }
                local_2c8 = CONCAT44(local_2c8._4_4_,local_294 + uVar11);
                local_2d0 = CONCAT44(local_2d0._4_4_,local_29c);
                local_2d8 = (undefined *)local_228;
                local_2e0 = (undefined *)CONCAT44(local_2e0._4_4_,iVar8);
                FUN_145477a70(plVar24,1,0,local_2a8);
                local_2e0 = (undefined *)(longlong)local_27c;
                local_2d0 = local_178;
                local_2d8 = (undefined *)local_228;
                local_2e8 = lVar10;
                (*DAT_14c7fbd98)(4,4,local_1d0,8);
                if (*(int *)(param_2 + 0x63f4) == 0) {
                  pbVar5 = (byte *)**(undefined8 **)(param_2 + 0x6340);
                  iVar8 = 0;
                  if ((char)pbVar5[8] < '\x01') {
                    if (*pbVar5 < 3) {
                      bVar22 = (pbVar5 + 0x14)[(longlong)local_1c8];
                    }
                    else {
                      bVar22 = pbVar5[1];
                    }
                    iVar8 = *(int *)(&DAT_149d53df0 + (ulonglong)bVar22 * 4);
                  }
                  lVar10 = (longlong)iVar8;
                  FUN_1456a4120(local_1d0,local_220,8,iVar8);
                  local_230 = local_188;
                  local_2b0 = (&PTR_DAT_149d54cd8)[lVar10 * 3];
                  local_2b8 = (&PTR_DAT_149d54cd0)[lVar10 * 3];
                  local_2c0 = local_1b0;
                  local_248 = local_138;
                  local_200 = local_140;
                  local_2c8 = *local_188;
                  local_2d0 = local_190;
                  local_2d8 = (undefined *)local_198;
                  local_2e0 = (undefined *)*local_180;
                  local_2e8 = *(longlong *)local_130;
                  local_238 = local_180;
                  local_240 = local_130;
                  (*DAT_14c7fbc48)(local_220,0x10,*(undefined8 *)local_140,*local_138);
                  local_208 = local_148;
                  local_2d0 = CONCAT44(local_2d0._4_4_,(int)*local_148);
                  local_2d8 = (&PTR_DAT_149d54ce0)[lVar10 * 3];
                  local_2e0 = (&PTR_DAT_149d54cd0)[lVar10 * 3];
                  local_2e8 = CONCAT44(local_2e8._4_4_,
                                       (uint)(*local_270 != '\0') +
                                       (uint)(local_2a4[uVar18] != '\0'));
                  iVar9 = FUN_145671ac0(param_2,0,local_284,0);
                  local_2a0 = local_2a0 + iVar9;
                  bVar27 = *(short *)(*(longlong *)(param_2 + 0x2010) + lVar16) != 0;
                  lVar10 = (longlong)local_218 + *plVar24;
                  *local_270 = bVar27;
                  uVar26 = local_220;
                  local_2a4[uVar18] = bVar27;
                  lVar10 = (*DAT_14c7fe660)(uVar26,lVar10,0x10,&local_128);
                  piVar19 = local_150;
                  local_1e8 = local_1e8 + (lVar10 >> 2);
                  local_210 = local_160;
                  local_1d8 = local_150;
                  lVar10 = local_1f0;
                  iVar9 = local_29c;
                  if (local_258 <=
                      (longlong)
                      (((longlong)(int)*local_160 * (longlong)local_2a0 + 0x100 >> 9) +
                      (local_1e8 << ((byte)*local_150 & 0x3f)))) goto LAB_145674ebf;
                  local_2e8 = CONCAT44(local_2e8._4_4_,
                                       (uint)*(ushort *)(*(longlong *)(param_2 + 0x2010) + lVar16));
                  FUN_145471da0(iVar8,(longlong)local_218 + *plVar24,local_228,local_29c);
                }
                else {
                  FUN_14272f310(local_1d0,local_220,8);
                  local_2b0 = &DAT_149d57e90;
                  local_2b8 = &DAT_149d54e50;
                  local_2c0 = local_1b0;
                  local_2c8 = *local_230;
                  local_2d0 = local_190;
                  local_2d8 = (undefined *)local_198;
                  local_2e0 = (undefined *)*local_238;
                  local_2e8 = *(longlong *)local_240;
                  (*DAT_14c7fbc48)(local_220,0x10,*(undefined8 *)local_200,*local_248);
                  pcVar6 = local_270;
                  local_2d0 = CONCAT44(local_2d0._4_4_,(int)*local_208);
                  local_2d8 = &DAT_149d55e30;
                  local_2e0 = &DAT_149d54e50;
                  local_2e8 = CONCAT44(local_2e8._4_4_,
                                       (uint)(*local_270 != '\0') +
                                       (uint)(local_2a4[uVar18] != '\0'));
                  iVar8 = FUN_145671ac0(param_2,0,uVar11,0);
                  iVar8 = local_2a0 + iVar8;
                  bVar27 = *(short *)(*(longlong *)(param_2 + 0x2010) + lVar16) != 0;
                  *pcVar6 = bVar27;
                  local_2a0 = iVar8;
                  local_2a4[uVar18] = bVar27;
                  lVar10 = local_1f0;
                  iVar9 = local_29c;
                  if (local_258 <=
                      (longlong)
                      (((longlong)(int)*local_210 * (longlong)iVar8 + 0x100 >> 9) +
                      (local_1e8 << ((byte)*local_1d8 & 0x3f)))) goto LAB_145674ebf;
                  FUN_145471d00((longlong)local_218 + *plVar24,local_228,local_29c);
                  local_230 = (longlong *)(param_2 + 0x61f8);
                  local_208 = (longlong *)(local_1f0 + 0xb486c);
                  local_238 = (longlong *)(param_2 + 0x2050);
                  local_240 = (int *)(param_2 + 0x2048);
                  local_248 = (longlong *)(param_2 + 0x2060);
                  local_200 = (int *)(param_2 + 0x2058);
                  piVar19 = (int *)(param_2 + 0x6448);
                  local_210 = (longlong *)(param_2 + 0x644c);
                  local_284 = uVar11;
                  local_1d8 = piVar19;
                }
                local_280 = local_280 + 4;
                uVar11 = local_284 + 1;
                local_288 = local_288 + 0x10;
                uVar18 = uVar18 + 1;
                local_1c8 = (longlong *)((longlong)local_1c8 + 0xc);
                lVar16 = lVar16 + 2;
                piVar12 = local_158;
                iVar8 = local_29c;
                local_284 = uVar11;
              } while ((longlong)uVar18 < (longlong)local_1f8);
            }
            local_28c = local_28c + 1;
            uVar26 = (ulonglong)local_28c;
            local_268 = local_268 + iVar8 * 4;
            uVar17 = (ulonglong)local_268;
            local_260 = local_260 + 0x20;
            local_264 = local_264 + 2;
            local_294 = local_294 - 2;
            local_1a0 = local_1a0 + 4;
            local_1a8 = local_1a8 + 3;
            local_270 = local_270 + 1;
            uVar18 = local_1e8;
            bVar22 = local_2a8;
            iVar15 = local_2a0;
          } while ((int)local_28c < (int)local_290);
        }
        lVar16 = ((longlong)*(int *)(param_2 + 0x644c) * (longlong)(local_1e0 + iVar15) + 0x100 >> 9
                 ) + (uVar18 << ((byte)*piVar12 & 0x3f));
        lVar10 = local_1f0;
        iVar9 = local_29c;
        if (lVar16 < local_258) {
          *local_118 = local_1e0 + iVar15;
          *local_f8 = iVar15;
          *local_f0 = uVar18;
          *local_170 = bVar22;
          local_258 = lVar16;
          memcpy(local_e8,local_2a4,local_1f8);
          memcpy(local_e0,local_298,local_168);
          lVar10 = local_1f0;
          iVar9 = local_29c;
          if (local_290 * 4 != 0) {
            puVar13 = local_c8;
            uVar18 = (ulonglong)(local_290 * 4);
            uVar11 = local_24c * 4;
            pvVar14 = local_1c0;
            do {
              memcpy(puVar13,pvVar14,(ulonglong)uVar11);
              pvVar14 = (void *)((longlong)pvVar14 + (longlong)iVar8);
              puVar13 = puVar13 + 8;
              uVar18 = uVar18 - 1;
              lVar10 = local_1f0;
              iVar9 = local_29c;
            } while (uVar18 != 0);
          }
        }
      }
LAB_145674ebf:
      iVar8 = iVar9;
      bVar22 = local_2a8 + 1;
    } while (bVar22 < 10);
    local_2a8 = bVar22;
    if (((local_258 < param_13) && (*(int *)(param_2 + 0x14150) == 0)) && (local_290 * 4 != 0)) {
      puVar13 = local_c8;
      uVar21 = (ulonglong)(local_290 * 4);
      uVar11 = local_24c * 4;
      pvVar14 = local_1c0;
      do {
        memcpy(pvVar14,puVar13,(ulonglong)uVar11);
        puVar13 = puVar13 + 8;
        pvVar14 = (void *)((longlong)pvVar14 + (longlong)iVar8);
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  else {
    bVar22 = 0;
    uVar21 = 0;
    lVar10 = local_1f0;
LAB_145673c50:
    do {
      local_2a0 = 0;
      local_220 = 0;
      local_1dc = *(int *)(param_6 + (ulonglong)bVar22 * 4);
      iVar9 = iVar8;
      local_2a8 = bVar22;
      if ((*(uint *)(lVar10 + 0xb47d0) >> (bVar22 & 0x1f) & 1) != 0) {
        if ((*(byte *)(lVar10 + 0xb47c8) & 0x10) != 0) {
          bVar1 = *local_170;
          if (bVar22 == 5) {
            if ((bVar1 != 1) && (bVar1 != 4)) {
              bVar22 = 6;
              goto LAB_145673c50;
            }
          }
          else if (bVar22 == 8) {
            if ((bVar1 - 1 & 0xfd) != 0) {
              bVar22 = 9;
              goto LAB_145673c50;
            }
          }
          else if (bVar22 == 7) {
            if (1 < (byte)(bVar1 - 2)) {
              bVar22 = 8;
              goto LAB_145673c50;
            }
          }
          else if ((bVar22 == 6) && ((bVar1 - 2 & 0xfd) != 0)) {
            bVar22 = 7;
            goto LAB_145673c50;
          }
        }
        memcpy(local_2a4,local_278,local_1f8);
        memcpy(local_298,local_274,local_168);
        local_284 = 0;
        if (local_290 == 0) {
          plVar20 = (longlong *)(param_2 + 0x6448);
          uVar18 = uVar21;
          iVar15 = 0;
        }
        else {
          local_1e0 = iVar8 * 4;
          local_270 = local_298;
          iVar9 = iVar8 * 4;
          local_260 = 0;
          local_280 = local_250 * -2;
          local_264 = local_1b8 + local_250 * 2;
          local_1b0 = local_120 + local_110 * 2;
          local_188 = (longlong *)(local_1b0 * 2);
          local_1b0 = local_1b0 * 0xc;
          local_268 = local_264 * 0x10;
          uVar26 = uVar21;
          uVar17 = uVar21;
          do {
            local_230 = (longlong *)0x0;
            if (local_1f8 == 0) {
              plVar20 = (longlong *)(param_2 + 0x6448);
              local_284 = (uint)uVar26;
              local_260 = (uint)uVar17;
            }
            else {
              local_248 = (longlong *)(param_2 + 0x2060);
              local_d8 = (longlong)iVar8;
              piVar12 = (int *)(param_2 + 0x644c);
              local_200 = (int *)(param_2 + 0x2048);
              local_238 = (longlong *)(local_1f0 + 0xb486c);
              local_208 = (longlong *)(param_2 + 0x2050);
              local_240 = (int *)(param_2 + 0x2058);
              plVar23 = (longlong *)(param_2 + 0x6448);
              local_1c8 = (longlong *)
                          CONCAT44(local_1c8._4_4_,(local_27c - iVar8) * (uint)uVar26 * 4);
              local_210 = plVar24 + 0xf;
              local_294 = local_264;
              local_28c = (uint)uVar17;
              local_288 = local_268;
              local_228 = local_1b0;
              local_218 = piVar12;
              local_1d0 = local_188;
              do {
                uVar11 = local_288;
                local_148 = local_238;
                local_150 = local_240;
                local_160 = local_248;
                local_158 = local_200;
                local_128 = local_208;
                local_1a8 = local_210;
                lVar10 = ((int)local_1c8 + (int)uVar17) + local_108;
                lVar16 = (longlong)(int)uVar17 + (longlong)local_1c0;
                local_190 = lVar16 * 2;
                local_180 = plVar23;
                local_138 = plVar23;
                local_130 = piVar12;
                local_1e8 = FUN_14561b610(3,local_294,param_2);
                local_2b8 = (undefined *)((ulonglong)local_2b8 & 0xffffffff00000000);
                local_2c0 = CONCAT44(local_2c0._4_4_,local_250 + local_284);
                local_1d8 = (int *)((longlong)(int)uVar11 * 4);
                local_198 = *(longlong *)(param_2 + 0x2000) + (longlong)local_1d8;
                lVar25 = *(longlong *)(param_2 + 0x2008) + (longlong)local_1d8;
                local_1a0 = *plVar24 + (longlong)local_1d8;
                local_100 = *(longlong *)(param_2 + 0x2010) + (longlong)(int)local_294 * 2;
                local_2d0 = CONCAT44(local_2d0._4_4_,local_29c);
                *(byte *)(*(longlong *)plVar24[0x38] + 0x14 + local_228) = local_2a8;
                local_2e8 = lVar16;
                iVar8 = local_29c;
                if (*(int *)(param_2 + 0x14150) != 0) {
                  local_2e8 = lVar10;
                  iVar8 = local_27c;
                }
                local_2e0 = (undefined *)CONCAT44(local_2e0._4_4_,iVar8);
                local_2d8 = (undefined *)lVar16;
                local_2c8._0_4_ = local_294 + local_280;
                FUN_145477a70(plVar24,1,0,local_2a8);
                uVar18 = local_1e8;
                local_2e0 = (undefined *)(longlong)local_27c;
                local_2c8 = CONCAT44(local_2c8._4_4_,(int)plVar24[0x4e]);
                local_2d0 = local_d8;
                local_2e8 = lVar10;
                local_2d8 = (undefined *)lVar16;
                (*DAT_14c7fbc08)(4,4,local_1e8,8);
                if (*(int *)((longlong)plVar24 + 0x274) == 0) {
                  pbVar5 = *(byte **)plVar24[0x38];
                  iVar8 = 0;
                  if ((char)pbVar5[8] < '\x01') {
                    if (*pbVar5 < 3) {
                      bVar22 = pbVar5[local_228 + 0x14];
                    }
                    else {
                      bVar22 = pbVar5[1];
                    }
                    iVar8 = *(int *)(&DAT_149d53df0 + (ulonglong)bVar22 * 4);
                  }
                  lVar10 = (longlong)iVar8;
                  cVar2 = *local_270;
                  local_218 = (int *)(local_2a4 + (longlong)local_230);
                  cVar3 = local_2a4[(longlong)local_230];
                  if (iVar8 == 0) {
                    FUN_14565b030();
                  }
                  else {
                    FUN_14563f9b0(local_1e8,lVar25,8,iVar8);
                  }
                  local_210 = local_1a8;
                  local_2b0 = (&PTR_DAT_149d54cd8)[lVar10 * 3];
                  local_2b8 = (&PTR_DAT_149d54cd0)[lVar10 * 3];
                  local_2c0 = local_100;
                  local_248 = local_160;
                  local_240 = local_150;
                  local_208 = local_128;
                  local_2c8 = *local_1a8;
                  local_2d0 = local_1a0;
                  local_2d8 = (undefined *)local_198;
                  local_2e0 = (undefined *)*local_128;
                  local_2e8 = *(longlong *)local_158;
                  local_200 = local_158;
                  (*DAT_14c7fbb30)(lVar25,0x10,*(undefined8 *)local_150,*local_160);
                  local_238 = local_148;
                  local_2d0 = CONCAT44(local_2d0._4_4_,(int)*local_148);
                  local_2d8 = (&PTR_DAT_149d54ce0)[lVar10 * 3];
                  local_2e0 = (&PTR_DAT_149d54cd0)[lVar10 * 3];
                  local_2e8 = CONCAT44(local_2e8._4_4_,(uint)(cVar2 != '\0') + (uint)(cVar3 != '\0')
                                      );
                  iVar9 = FUN_145671ac0(param_2,0,local_294,0);
                  local_2a0 = local_2a0 + iVar9;
                  if ((int)plVar24[0x4e] == 8) {
                    lVar10 = (*DAT_14c7fe660)(lVar25);
                  }
                  else {
                    local_2e8 = CONCAT44(local_2e8._4_4_,(int)plVar24[0x4e]);
                    lVar10 = FUN_1456a7cc0(lVar25,(longlong)local_1d8 + *plVar24,0x10,&local_140);
                  }
                  plVar23 = local_138;
                  plVar20 = local_1d0;
                  uVar18 = local_220 + (lVar10 >> 2);
                  lVar16 = *local_138;
                  uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x2010) + (longlong)local_1d0);
                  local_220 = uVar18;
                  *local_270 = uVar4 != 0;
                  *(bool *)local_218 = uVar4 != 0;
                  piVar12 = local_130;
                  local_218 = local_130;
                  lVar10 = local_1f0;
                  iVar9 = local_29c;
                  if (local_258 <=
                      (longlong)
                      (((longlong)*local_130 * (longlong)local_2a0 + 0x100 >> 9) +
                      (uVar18 << ((byte)(int)lVar16 & 0x3f)))) goto LAB_145674588;
                  local_2e0 = (undefined *)CONCAT44(local_2e0._4_4_,(int)plVar24[0x4e]);
                  local_2e8 = CONCAT44(local_2e8._4_4_,(uint)uVar4);
                  FUN_145471f70(iVar8,(longlong)local_1d8 + *plVar24,local_190,local_29c);
                }
                else {
                  thunk_FUN_14563f700(uVar18,lVar25,8);
                  local_2b0 = &DAT_149d57e90;
                  local_2b8 = &DAT_149d54e50;
                  local_2c0 = local_100;
                  local_2c8 = *local_210;
                  local_2d0 = local_1a0;
                  local_2d8 = (undefined *)local_198;
                  local_2e0 = (undefined *)*local_208;
                  local_2e8 = *(longlong *)local_200;
                  (*DAT_14c7fbb30)(lVar25,0x10,*(undefined8 *)local_240,*local_248);
                  plVar7 = local_230;
                  pcVar6 = local_270;
                  local_2d0 = CONCAT44(local_2d0._4_4_,(int)*local_238);
                  local_2d8 = &DAT_149d55e30;
                  local_2e0 = &DAT_149d54e50;
                  local_2e8 = CONCAT44(local_2e8._4_4_,
                                       (uint)(*local_270 != '\0') +
                                       (uint)(local_2a4[(longlong)local_230] != '\0'));
                  iVar8 = FUN_145671ac0(param_2,0,local_294,0);
                  plVar20 = local_1d0;
                  iVar8 = local_2a0 + iVar8;
                  bVar27 = *(short *)(*(longlong *)(param_2 + 0x2010) + (longlong)local_1d0) != 0;
                  *pcVar6 = bVar27;
                  local_2a0 = iVar8;
                  local_2a4[(longlong)plVar7] = bVar27;
                  lVar10 = local_1f0;
                  iVar9 = local_29c;
                  if (local_258 <=
                      (longlong)
                      (((longlong)*local_218 * (longlong)iVar8 + 0x100 >> 9) +
                      (local_220 << ((byte)(int)*plVar23 & 0x3f)))) goto LAB_145674588;
                  local_2e8 = CONCAT44(local_2e8._4_4_,(int)plVar24[0x4e]);
                  FUN_145471e80((longlong)local_1d8 + *plVar24,local_190,local_29c);
                  local_210 = plVar24 + 0xf;
                  local_238 = (longlong *)(local_1f0 + 0xb486c);
                  local_208 = (longlong *)(param_2 + 0x2050);
                  local_200 = (int *)(param_2 + 0x2048);
                  local_248 = (longlong *)(param_2 + 0x2060);
                  local_240 = (int *)(param_2 + 0x2058);
                  piVar12 = (int *)(param_2 + 0x644c);
                  plVar23 = (longlong *)(param_2 + 0x6448);
                  local_230 = plVar7;
                  local_218 = piVar12;
                }
                local_230 = (longlong *)((longlong)local_230 + 1);
                local_28c = local_28c + 4;
                local_1d0 = (longlong *)((longlong)plVar20 + 2);
                local_288 = local_288 + 0x10;
                local_294 = local_294 + 1;
                local_228 = local_228 + 0xc;
                uVar17 = (ulonglong)local_28c;
                plVar20 = local_180;
                iVar8 = local_29c;
                iVar9 = local_1e0;
              } while ((longlong)local_230 < (longlong)local_1f8);
            }
            local_284 = local_284 + 1;
            uVar26 = (ulonglong)local_284;
            local_268 = local_268 + 0x20;
            local_264 = local_264 + 2;
            local_280 = local_280 - 2;
            local_260 = local_260 + iVar9;
            uVar17 = (ulonglong)local_260;
            local_188 = (longlong *)((longlong)local_188 + 4);
            local_1b0 = local_1b0 + 0x18;
            local_270 = local_270 + 1;
            uVar18 = local_220;
            bVar22 = local_2a8;
            iVar15 = local_2a0;
          } while ((int)local_284 < (int)local_290);
        }
        lVar16 = ((longlong)*(int *)(param_2 + 0x644c) * (longlong)(local_1dc + iVar15) + 0x100 >> 9
                 ) + (uVar18 << ((byte)(int)*plVar20 & 0x3f));
        lVar10 = local_1f0;
        iVar9 = local_29c;
        if (lVar16 < local_258) {
          *local_118 = local_1dc + iVar15;
          *local_f8 = iVar15;
          *local_f0 = uVar18;
          *local_170 = bVar22;
          local_258 = lVar16;
          memcpy(local_e8,local_2a4,local_1f8);
          memcpy(local_e0,local_298,local_168);
          lVar10 = local_1f0;
          iVar9 = local_29c;
          if (local_290 * 4 != 0) {
            uVar26 = (ulonglong)(local_290 * 4);
            uVar11 = local_24c * 4;
            lVar10 = (longlong)local_1c0 * 2;
            puVar13 = local_c8;
            uVar18 = uVar21;
            do {
              memcpy(puVar13,(void *)(lVar10 + uVar18 * 2),(ulonglong)uVar11 * 2);
              uVar18 = uVar18 + (longlong)iVar8;
              puVar13 = puVar13 + 0x10;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
            plVar24 = (longlong *)(local_178 + 0x6180);
            lVar10 = local_1f0;
            param_2 = local_178;
            iVar9 = local_29c;
          }
        }
      }
LAB_145674588:
      iVar8 = iVar9;
      bVar22 = local_2a8 + 1;
    } while (bVar22 < 10);
    local_2a8 = bVar22;
    if (((local_258 < param_13) && (*(int *)(param_2 + 0x14150) == 0)) && (local_290 * 4 != 0)) {
      puVar13 = local_c8;
      uVar18 = (ulonglong)(local_290 * 4);
      uVar11 = local_24c * 4;
      lVar10 = (longlong)local_1c0 * 2;
      do {
        memcpy((void *)(lVar10 + uVar21 * 2),puVar13,(ulonglong)uVar11 * 2);
        puVar13 = puVar13 + 0x10;
        uVar21 = uVar21 + (longlong)iVar8;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_308);
}



// FUNCTION 145674f60 FUN_145674f60 body=928 status=ok
// SIG undefined FUN_145674f60(void)

longlong FUN_145674f60(longlong param_1,longlong param_2,int *param_3,int *param_4,longlong *param_5
                      ,longlong param_6)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  byte local_b8;
  byte local_b7;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  byte *local_a0;
  int local_94;
  longlong local_88;
  longlong local_80;
  byte *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  local_88 = param_1 + 0xcbeb0;
  lVar11 = 0;
  local_ac = 0;
  local_a0 = (byte *)**(undefined8 **)(param_2 + 0x6340);
  lVar10 = 0;
  local_70 = *(undefined8 *)(param_2 + 0x6350);
  local_68 = *(undefined8 *)(param_2 + 0x6348);
  local_b7 = *local_a0;
  local_a4 = 0;
  bVar1 = (&DAT_149d549c0)[local_b7];
  bVar2 = (&DAT_149d549b0)[local_b7];
  uVar5 = (uint)bVar1;
  uVar9 = (uint)bVar2;
  local_b4 = 0;
  local_58 = (ulonglong)bVar1 * 0xc;
  local_50 = (ulonglong)bVar2 * 0x18;
  pbVar8 = local_a0 + 0x2c;
  do {
    local_60 = (longlong)local_b4;
    local_94 = local_b4 * 2;
    iVar7 = 0;
    local_78 = pbVar8;
    do {
      local_b8 = 0;
      local_b0 = 0x7fffffff;
      local_a8 = 0x7fffffff;
      local_80 = 0x7fffffffffffffff;
      if (*(int *)(param_1 + 0x2a2e4) == 0) {
        iVar6 = local_94 + iVar7;
        bVar1 = FUN_1454726e0(local_a0,local_70,iVar6);
        bVar2 = FUN_1454726a0(local_a0,local_68,iVar6);
        local_88 = param_1 + ((ulonglong)bVar1 * 10 + 0x51a9 + (ulonglong)bVar2) * 0x28;
      }
      iVar6 = local_ac;
      lVar3 = FUN_145673ad0(param_1,param_2,local_b4,iVar7,&local_b8,local_88,
                            (longlong)iVar7 + *(longlong *)(param_2 + 0x61c0),
                            local_60 + *(longlong *)(param_2 + 0x61c8),&local_b0,&local_a8,&local_80
                            ,local_b7,param_6 - lVar10);
      if (param_6 - lVar10 <= lVar3) {
        return 0x7fffffffffffffff;
      }
      lVar10 = lVar10 + lVar3;
      local_a4 = local_a4 + local_a8;
      local_ac = iVar6 + local_b0;
      lVar11 = lVar11 + local_80;
      pbVar8[-0x18] = local_b8;
      if (1 < (ulonglong)uVar9) {
        lVar3 = (ulonglong)uVar9 - 1;
        pbVar4 = pbVar8;
        do {
          *pbVar4 = local_b8;
          pbVar4 = pbVar4 + 0x18;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (1 < (ulonglong)uVar5) {
        pbVar4 = pbVar8 + -0xc;
        lVar3 = (ulonglong)uVar5 - 1;
        do {
          *pbVar4 = local_b8;
          pbVar4 = pbVar4 + 0xc;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (param_6 <= lVar10) {
        return 0x7fffffffffffffff;
      }
      pbVar8 = pbVar8 + local_58;
      iVar7 = iVar7 + uVar5;
    } while (iVar7 < 2);
    local_b4 = local_b4 + uVar9;
    pbVar8 = local_78 + local_50;
    if (1 < local_b4) {
      *param_3 = local_ac;
      *param_4 = local_a4;
      *param_5 = lVar11;
      local_a0[1] = local_a0[0x38];
      return ((longlong)*(int *)(param_2 + 0x644c) * (longlong)local_ac + 0x100 >> 9) +
             (lVar11 << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f));
    }
  } while( true );
}



// FUNCTION 145675310 FUN_145675310 body=690 status=ok
// SIG undefined FUN_145675310(void)

longlong FUN_145675310(longlong param_1,longlong param_2,int *param_3,int *param_4,longlong *param_5
                      ,int *param_6,byte param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_res8;
  int local_res10 [2];
  int *local_res18;
  int *local_res20;
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  
  uVar1 = *(undefined8 *)(param_2 + 0x6348);
  bVar7 = 0;
  lVar2 = **(longlong **)(param_2 + 0x6340);
  local_res8 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  bVar3 = FUN_1454726e0(lVar2,*(undefined8 *)(param_2 + 0x6350));
  bVar4 = FUN_1454726a0(lVar2,uVar1);
  bVar6 = 0;
  lVar8 = CONCAT44(param_8._4_4_,(int)param_8);
  local_58 = param_1 + ((ulonglong)bVar3 * 10 + 0x51a9 + (ulonglong)bVar4) * 0x28;
  *(undefined8 *)(param_2 + 0x1415c) = 0;
  *(undefined4 *)(param_2 + 0x14164) = 0;
LAB_1456753c6:
  do {
    if (*(int *)(param_1 + 0xb4834) != 0) {
      if (bVar6 == 5) {
        if ((bVar7 != 1) && (bVar7 != 4)) {
          bVar6 = 6;
          goto LAB_1456753c6;
        }
      }
      else if (bVar6 == 8) {
        if ((bVar7 - 1 & 0xfd) != 0) {
          bVar6 = 9;
          goto LAB_1456753c6;
        }
      }
      else if (bVar6 == 7) {
        if (1 < (byte)(bVar7 - 2)) {
          bVar6 = 8;
          goto LAB_1456753c6;
        }
      }
      else if ((bVar6 == 6) && ((bVar7 - 2 & 0xfd) != 0)) {
        bVar6 = 7;
        goto LAB_1456753c6;
      }
      if (*param_6 != 0) goto LAB_14567559b;
    }
    *(byte *)(lVar2 + 1) = bVar6;
    if ((*(int *)(param_1 + 0xb4734) == 1) || (*(int *)(param_2 + 0x63f4) != 0)) {
      bVar3 = (&DAT_149d54b30)[param_7];
      if ((byte)(&DAT_149d54b40)[*(int *)(param_1 + 0x2a318)] <= (byte)(&DAT_149d54b30)[param_7]) {
        bVar3 = (&DAT_149d54b40)[*(int *)(param_1 + 0x2a318)];
      }
      *(byte *)(**(longlong **)(param_2 + 0x6340) + 2) = bVar3;
      FUN_145673300(param_1,param_2,&param_8,&local_68,local_res10,local_60,lVar8,0,param_7,bVar3,
                    *(undefined4 *)(param_1 + 0xb486c),0);
    }
    else {
      FUN_1456734e0(param_1,param_2,&param_8,&local_68,local_res10,local_60,lVar8,param_7,0);
    }
    if ((int)param_8 != 0x7fffffff) {
      iVar9 = *(int *)(local_58 + (ulonglong)bVar6 * 4) + (int)param_8;
      lVar5 = (local_68 << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f)) +
              ((longlong)*(int *)(param_2 + 0x644c) * (longlong)iVar9 + 0x100 >> 9);
      if (lVar5 < lVar8) {
        local_res8 = *(undefined1 *)(lVar2 + 2);
        *local_res18 = iVar9;
        *local_res20 = (int)param_8;
        *param_5 = local_68;
        *param_6 = local_res10[0];
        lVar8 = lVar5;
        bVar7 = bVar6;
      }
    }
    bVar6 = bVar6 + 1;
    if (9 < bVar6) {
LAB_14567559b:
      *(undefined1 *)(lVar2 + 2) = local_res8;
      *(byte *)(lVar2 + 1) = bVar7;
      return lVar8;
    }
  } while( true );
}



// FUNCTION 1456755d0 FUN_1456755d0 body=681 status=ok
// SIG undefined FUN_1456755d0(void)

void FUN_1456755d0(longlong param_1,longlong param_2,int *param_3,longlong *param_4,uint *param_5,
                  longlong *param_6,undefined1 param_7,undefined8 param_8)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int *local_108;
  longlong *local_100;
  uint *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar5 = 1;
  pbVar2 = (byte *)**(undefined8 **)(param_2 + 0x6340);
  local_f8 = param_5;
  local_f0 = param_6;
  bVar1 = (&DAT_149d54b80)
          [(longlong)*(int *)(param_2 + 0x6214) +
           ((longlong)*(int *)(param_2 + 0x6210) +
           ((ulonglong)pbVar2[2] + (ulonglong)*pbVar2 * 4) * 2) * 2];
  uVar7 = (ulonglong)bVar1;
  uVar6 = (uint)((ulonglong)param_8 >> 0x3f) ^ 1;
  local_108 = param_3;
  local_100 = param_4;
  local_e8 = param_1;
  if (('\0' < (char)pbVar2[8]) && (uVar6 != 0)) {
    iVar4 = 1;
    do {
      FUN_14565fec0(param_2,param_7,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  *local_108 = 0;
  *local_100 = 0;
  *param_6 = 0;
  *local_f8 = 1;
  do {
    local_d8 = local_e8;
    lStack_80 = (ulonglong)*(uint *)(local_e8 + 0xb486c) << 0x20;
    local_68 = 0;
    local_78 = (undefined **)0x0;
    uStack_70 = 1;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (iVar5 == 0) {
      *(byte *)(**(longlong **)(param_2 + 0x6340) + 2) = bVar1;
    }
    local_118 = &local_b8;
    lStack_d0 = param_2;
    local_88 = param_8;
    FUN_14561b830(param_7,uVar7,(longlong)iVar5 * 0x88 + param_2 + 0x6180,&local_c8);
    pbVar2 = (byte *)**(undefined8 **)(param_2 + 0x6340);
    if ((((char)pbVar2[8] < '\x01') && (iVar5 < 1)) && (*(int *)(param_2 + 0x63f4) == 0)) {
      if (*pbVar2 < 3) {
        bVar3 = pbVar2[0x14];
      }
      else {
        bVar3 = pbVar2[1];
      }
      local_78 = &PTR_DAT_149d54cd0 +
                 ((longlong)*(int *)(&DAT_149d53df0 + (ulonglong)bVar3 * 4) + uVar7 * 4) * 3;
    }
    else {
      local_78 = &PTR_DAT_149d54c70 + uVar7 * 3;
    }
    local_118 = &local_d8;
    FUN_145472750(param_2 + 0x6180,param_7,iVar5,FUN_145672ab0);
    if ((int)lStack_80 != 0) goto LAB_14567584c;
    if ((int)local_a8 == 0x7fffffff) goto LAB_14567584c;
    iVar5 = iVar5 + 1;
    *local_108 = *local_108 + (int)local_a8;
    *local_100 = *local_100 + lStack_a0;
    *local_f0 = *local_f0 + local_98;
    *local_f8 = *local_f8 & (uint)(byte)uStack_70;
  } while (iVar5 < 3);
  if (uVar6 == 0) {
LAB_14567584c:
    *local_108 = 0x7fffffff;
    *local_100 = 0x7fffffffffffffff;
    *local_f0 = 0x7fffffffffffffff;
    *local_f8 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_138);
}



// FUNCTION 145675890 FUN_145675890 body=443 status=ok
// SIG undefined FUN_145675890(void)

longlong FUN_145675890(longlong param_1,longlong param_2,undefined8 param_3,int *param_4,
                      int *param_5,longlong *param_6,undefined4 *param_7,undefined1 param_8,
                      byte param_9)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int local_res10 [4];
  int *local_res20;
  undefined4 local_58 [2];
  longlong local_50;
  undefined1 local_48 [16];
  
  cVar7 = '\0';
  *(undefined8 *)(param_2 + 0x1415c) = 0;
  uVar4 = 0;
  *(undefined4 *)(param_2 + 0x14164) = 0;
  lVar5 = 0x7fffffffffffffff;
  lVar6 = 0;
  local_res20 = param_4;
  do {
    cVar3 = (char)uVar4;
    if ((*(uint *)(param_1 + (ulonglong)param_9 * 4 + 0xb47e0) >> (uVar4 & 0x1f) & 1) != 0) {
      *(char *)(**(longlong **)(param_2 + 0x6340) + 6) = cVar3;
      iVar1 = FUN_1456755d0(param_1,param_2,local_res10,&local_50,local_58,local_48,param_8,lVar5);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 +
                        (lVar6 + ((longlong)*(int *)(param_1 + 0x2a2e4) * 10 + 0x5195 +
                                 (ulonglong)*(byte *)(**(longlong **)(param_2 + 0x6340) + 1)) * 10)
                        * 4) + local_res10[0];
        lVar2 = (local_50 << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f)) +
                ((longlong)*(int *)(param_2 + 0x644c) * (longlong)iVar1 + 0x100 >> 9);
        if (lVar2 < lVar5) {
          *local_res20 = iVar1;
          *param_5 = local_res10[0];
          *param_6 = local_50;
          *param_7 = local_58[0];
          lVar5 = lVar2;
          cVar7 = cVar3;
          if (*(int *)(param_2 + 0x6424) == 0) {
            FUN_145671400(param_2,param_3,2,0,1,3);
          }
        }
      }
    }
    uVar4 = (uint)(byte)(cVar3 + 1U);
    lVar6 = lVar6 + 1;
  } while ((byte)(cVar3 + 1U) < 10);
  *(char *)(**(longlong **)(param_2 + 0x6340) + 6) = cVar7;
  return lVar5;
}



// FUNCTION 145675a50 FUN_145675a50 body=330 status=ok
// SIG undefined FUN_145675a50(void)

void FUN_145675a50(longlong param_1,longlong param_2,undefined8 param_3,byte param_4,
                  undefined1 param_5,int *param_6,int *param_7,undefined8 param_8,undefined8 param_9
                  ,undefined1 *param_10)

{
  byte bVar1;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 0xb4828) == 0) {
    bVar1 = 3;
    if (2 < param_4) {
      bVar1 = param_4;
    }
    FUN_145675890(param_1,param_2,param_3,param_6,param_7,param_8,param_9,bVar1,param_5);
  }
  else {
    bVar1 = 3;
    if (2 < param_4) {
      bVar1 = param_4;
    }
    *(undefined1 *)(**(longlong **)(param_2 + 0x6340) + 6) = 0;
    *(undefined8 *)(param_2 + 0x1415c) = 0;
    *(undefined4 *)(param_2 + 0x14164) = 0;
    FUN_1456755d0(param_1,param_2,param_7,param_8,param_9,local_res8,bVar1,0x7fffffffffffffff);
    *param_6 = *(int *)(param_1 +
                       ((longlong)*(int *)(param_1 + 0x2a2e4) * 10 + 0x5195 +
                       (ulonglong)*(byte *)(**(longlong **)(param_2 + 0x6340) + 1)) * 0x28) +
               *param_7;
  }
  *param_10 = *(undefined1 *)(**(longlong **)(param_2 + 0x6340) + 6);
  return;
}



// FUNCTION 145675ba0 FUN_145675ba0 body=599 status=ok
// SIG undefined FUN_145675ba0(void)

int FUN_145675ba0(longlong param_1,longlong param_2,longlong param_3,int param_4,byte param_5,
                 undefined4 *param_6,longlong param_7,longlong param_8,undefined8 *param_9,
                 undefined8 param_10,undefined8 param_11)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  byte *_Dst;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res20;
  
  uVar7 = (uint)param_5;
  pbVar4 = (byte *)**(undefined8 **)(param_3 + 0x1c0);
  lVar5 = *(longlong *)(param_2 + 0x6410);
  bVar1 = pbVar4[9];
  lVar9 = (longlong)param_4;
  local_res20 = 0;
  bVar2 = (&DAT_149d549c0)[*pbVar4];
  bVar3 = (&DAT_149d549b0)[*pbVar4];
  uVar11 = (ulonglong)bVar3;
  if ((uVar7 == 10) || (uVar7 == 0xb)) {
    *param_6 = *(undefined4 *)(param_7 + ((longlong)(char)pbVar4[8] + (ulonglong)param_5 * 4) * 4);
    if ((char)bVar1 < '\x01') goto LAB_145675d37;
    param_6[1] = *(undefined4 *)(param_7 + ((longlong)(char)pbVar4[9] + (ulonglong)param_5 * 4) * 4)
    ;
    *(undefined4 *)(pbVar4 + lVar9 * 0xc + 0x18) = *param_6;
  }
  else if (uVar7 == 0xd) {
    *param_6 = *(undefined4 *)(param_8 + (longlong)(char)pbVar4[8] * 4);
    local_res20 = FUN_1455aa9b0(param_6,*param_9,param_10,param_11,0x78);
    if ((char)bVar1 < '\x01') goto LAB_145675d37;
    param_6[1] = *(undefined4 *)(param_8 + (longlong)(char)pbVar4[9] * 4);
    iVar6 = FUN_1455aa9b0(param_6 + 1,param_9[1],param_10,param_11,0x78);
    local_res20 = local_res20 + iVar6;
    *(undefined4 *)(pbVar4 + lVar9 * 0xc + 0x18) = *param_6;
  }
  else {
    *param_6 = 0;
    if ((char)bVar1 < '\x01') {
LAB_145675d37:
      *(undefined4 *)(pbVar4 + lVar9 * 0xc + 0x18) = *param_6;
      if ((char)bVar1 < '\x01') goto LAB_145675d68;
    }
    else {
      param_6[1] = 0;
      pbVar8 = pbVar4 + lVar9 * 0xc + 0x18;
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
    }
  }
  *(undefined4 *)(pbVar4 + lVar9 * 0xc + 0x1c) = param_6[1];
LAB_145675d68:
  pbVar4[lVar9 * 0xc + 0x14] = param_5;
  if (bVar3 != 0) {
    pbVar8 = pbVar4 + lVar9 * 0xc + 0x14;
    do {
      _Dst = pbVar8;
      uVar10 = (ulonglong)bVar2;
      if (bVar2 != 0) {
        do {
          memmove(_Dst,pbVar4 + lVar9 * 0xc + 0x14,0xc);
          uVar10 = uVar10 - 1;
          _Dst = _Dst + 0xc;
        } while (uVar10 != 0);
      }
      pbVar8 = pbVar8 + 0x18;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return *(int *)(param_1 + 0xcbeb0 +
                 ((longlong)(int)uVar7 +
                 (ulonglong)*(byte *)((longlong)(char)pbVar4[8] + 0x20 + lVar5) * 4) * 4) +
         local_res20;
}



// FUNCTION 145675e00 FUN_145675e00 body=1969 status=ok
// SIG undefined FUN_145675e00(void)

longlong FUN_145675e00(longlong param_1,longlong param_2,longlong param_3,uint param_4,int *param_5,
                      longlong *param_6,longlong *param_7,longlong param_8,longlong param_9,
                      int param_10,int param_11)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined *puVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  bool bVar27;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar28;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar29;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar30;
  longlong in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar31;
  int local_a8;
  longlong local_a0;
  int local_98;
  longlong local_88;
  undefined *local_80;
  byte *local_78;
  uint *local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar17 = (ulonglong)(int)param_4;
  pbVar5 = (byte *)**(undefined8 **)(param_2 + 0x6340);
  iVar9 = (int)((ulonglong)
                (byte)(&DAT_149d549c0)
                      [(byte)(&DAT_149d54b48)
                             [(longlong)*(int *)(param_2 + 0x618c) +
                              ((longlong)*(int *)(param_2 + 0x6188) + (ulonglong)*pbVar5 * 2) * 2]]
               << 2);
  iVar7 = (uint)(byte)(&DAT_149d549b0)
                      [(byte)(&DAT_149d54b48)
                             [(longlong)*(int *)(param_2 + 0x618c) +
                              ((longlong)*(int *)(param_2 + 0x6188) + (ulonglong)*pbVar5 * 2) * 2]]
          * 4;
  iVar8 = FUN_14561b5e0(CONCAT71((int7)(((ulonglong)
                                         (byte)(&DAT_149d549c0)
                                               [(byte)(&DAT_149d54b48)
                                                      [(longlong)*(int *)(param_2 + 0x618c) +
                                                       ((longlong)*(int *)(param_2 + 0x6188) +
                                                       (ulonglong)*pbVar5 * 2) * 2]] << 2) >> 8),3),
                        param_4,*(undefined4 *)(param_2 + 0x2020));
  local_88 = *(longlong *)(param_2 + 0x2018) + (longlong)iVar8;
  iVar8 = FUN_14561b5e0(CONCAT71((int7)(int3)((uint)iVar8 >> 8),3),param_4,
                        *(undefined4 *)(param_2 + 0x6198));
  plVar23 = (longlong *)(param_2 + 0x6380);
  lVar21 = (longlong)iVar8 + *(longlong *)(param_2 + 0x6190);
  iVar26 = 0;
  local_60 = 0;
  local_58 = 0;
  local_98 = 0;
  local_80 = (&PTR_DAT_14c744430)[pbVar5[7]];
  local_70 = (uint *)(param_2 + 25000);
  bVar13 = pbVar5[9];
  iVar22 = ((int)param_4 / 2 + param_10 * 2) * 4;
  iVar8 = ((int)param_4 % 2 + param_11 * 2) * 4;
  local_78 = pbVar5 + (uVar17 + 2) * 0xc;
  local_68 = uVar17;
  do {
    uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
    uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
    uVar30 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
    uVar16 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    uVar31 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
    uVar24 = (ulonglong)*local_70;
    lVar12 = *plVar23;
    iVar15 = ((int)(uint)uVar17 >> 1) * 4;
    iVar20 = ((uint)uVar17 & 1) * 4;
    lVar14 = (longlong)(int)(*local_70 * iVar15 + iVar20) + *(longlong *)(local_70 + -2);
    if (((*(int *)(lVar12 + 0x10) != -1) && (*(int *)(lVar12 + 0x14) != -1)) &&
       ((*(int *)(lVar12 + 0x10) != 0x4000 || (*(int *)(lVar12 + 0x14) != 0x4000)))) {
      iVar3 = *(int *)(param_2 + 0x6370);
      uVar4 = *(undefined4 *)(param_2 + 0x618c);
      uVar24 = (ulonglong)*(int *)(*(longlong *)(lVar12 + 8) + 0x10);
      lVar14 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x38);
      iVar20 = (**(code **)(lVar12 + 0x20))
                         (iVar20 + (-*(int *)(param_2 + 0x6368) >>
                                   ((char)*(undefined4 *)(param_2 + 0x6188) + 3U & 0x1f)),
                          lVar12 + 0x10);
      iVar15 = (**(code **)(lVar12 + 0x28))
                         ((-iVar3 >> ((char)uVar4 + 3U & 0x1f)) + iVar15,lVar12 + 0x10);
      uVar17 = (ulonglong)param_4;
      lVar14 = (longlong)iVar15 * uVar24 + iVar20 + lVar14;
    }
    puVar6 = local_70;
    pbVar5 = local_78;
    if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
      in_stack_ffffffffffffff40 = CONCAT44(uVar31,iVar8);
      in_stack_ffffffffffffff38 = (ulonglong)uVar16 << 0x20;
      in_stack_ffffffffffffff28 = CONCAT44(uVar30,iVar26);
      in_stack_ffffffffffffff20 = CONCAT44(uVar29,iVar7);
      in_stack_ffffffffffffff18 = CONCAT44(uVar28,iVar9);
      FUN_145479090(lVar14,uVar24 & 0xffffffff,lVar21,*(undefined4 *)(param_2 + 0x6198),local_78,
                    *plVar23 + 0x10,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20,
                    in_stack_ffffffffffffff28,local_80,in_stack_ffffffffffffff38,
                    in_stack_ffffffffffffff40,iVar22);
    }
    else {
      in_stack_ffffffffffffff40 = CONCAT44(uVar31,iVar8);
      in_stack_ffffffffffffff38 = (ulonglong)uVar16 << 0x20;
      in_stack_ffffffffffffff28 = CONCAT44(uVar30,iVar26);
      in_stack_ffffffffffffff20 = CONCAT44(uVar29,iVar7);
      in_stack_ffffffffffffff18 = CONCAT44(uVar28,iVar9);
      FUN_1454791d0(lVar14 * 2,uVar24 & 0xffffffff,lVar21 * 2,*(undefined4 *)(param_2 + 0x6198),
                    local_78,*plVar23 + 0x10,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20,
                    in_stack_ffffffffffffff28,local_80,in_stack_ffffffffffffff38,
                    in_stack_ffffffffffffff40,iVar22,*(undefined4 *)(param_2 + 0x63f0));
    }
    uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
    local_78 = pbVar5 + 4;
    local_70 = puVar6 + 4;
    iVar26 = iVar26 + 1;
    plVar23 = plVar23 + 1;
  } while (iVar26 < (int)(('\0' < (char)bVar13) + 1));
  iVar8 = *(int *)(param_2 + 0x6198);
  iVar26 = *(int *)(param_2 + 0x2020);
  if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
    uVar10 = FUN_14561b610(3,uVar17 & 0xffffffff,param_2);
    (*DAT_14c7fbd98)(iVar7,iVar9,uVar10,8,local_88,(longlong)iVar26,lVar21,(longlong)iVar8);
  }
  else {
    uVar10 = FUN_14561b610(3,uVar17 & 0xffffffff,param_2);
    (*DAT_14c7fbc08)(iVar7,iVar9,uVar10,8,local_88,(longlong)iVar26,lVar21,(longlong)iVar8,
                     CONCAT44(uVar28,*(undefined4 *)(param_2 + 0x63f0)));
  }
  local_a8 = 0;
  if (iVar7 >> 2 != 0) {
    puVar11 = (undefined *)(longlong)(iVar9 >> 2);
    local_a0 = 0;
    local_80 = puVar11;
    do {
      lVar21 = 0;
      if (0 < (longlong)puVar11) {
        iVar8 = local_a8 * 2;
        do {
          if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = *(int *)(param_2 + 0x63f0);
          }
          local_68 = local_68 + lVar21 + local_a0;
          uVar16 = (int)uVar17 + iVar8;
          local_78 = (byte *)((ulonglong)(uVar16 & 1) + param_8);
          local_70 = (uint *)(((longlong)(int)uVar16 >> 1) + param_9);
          cVar1 = *(char *)local_70;
          cVar2 = *local_78;
          lVar14 = *(longlong *)(param_2 + 0x2000);
          lVar12 = (longlong)(int)(uVar16 * 0x10) * 4;
          lVar19 = *(longlong *)(param_2 + 0x2010);
          lVar25 = *(longlong *)(param_2 + 0x2008) + lVar12;
          lVar18 = *(longlong *)(param_2 + 0x6180) + lVar12;
          uVar10 = FUN_14561b610(CONCAT71((int7)(int3)(uVar16 >> 8),3),uVar16,param_2);
          (**(code **)(param_2 + 0x14210))(uVar10,lVar25,8);
          uVar10 = *(undefined8 *)(param_2 + 0x2048);
          (*DAT_14c7fbb30)(lVar25,0x10,*(undefined8 *)(param_2 + 0x2058),
                           *(undefined8 *)(param_2 + 0x2060),uVar10,
                           *(undefined8 *)(param_2 + 0x2050),lVar14 + lVar12,lVar18,
                           *(undefined8 *)(param_2 + 0x61f8),lVar19 + (longlong)(int)uVar16 * 2,
                           &DAT_149d54e50,&DAT_149d57e90);
          uVar28 = (undefined4)((ulonglong)uVar10 >> 0x20);
          uVar29 = (undefined4)((ulonglong)lVar18 >> 0x20);
          if (iVar9 == 8) {
            lVar12 = (*DAT_14c7fe660)();
          }
          else {
            uVar10 = CONCAT44(uVar28,iVar9);
            lVar12 = FUN_1456a7cc0(lVar25,*(longlong *)(param_2 + 0x6180) + lVar12,0x10,&local_88,
                                   uVar10);
            uVar28 = (undefined4)((ulonglong)uVar10 >> 0x20);
          }
          lVar12 = local_60 + lVar12;
          lVar19 = local_58 + local_88;
          uVar17 = (ulonglong)uVar16;
          local_60 = lVar12;
          local_58 = lVar19;
          iVar9 = FUN_145671ac0(param_2,0,uVar16,0,
                                CONCAT44(uVar28,(uint)(cVar1 != '\0') + (uint)(cVar2 != '\0')),
                                &DAT_149d54e50,&DAT_149d55e30,
                                CONCAT44(uVar29,*(undefined4 *)(param_1 + 0xb486c)));
          local_98 = local_98 + iVar9;
          bVar27 = *(short *)(*(longlong *)(param_2 + 0x2010) + local_68 * 2) != 0;
          *(bool *)local_70 = bVar27;
          *local_78 = bVar27;
          bVar13 = (byte)*(undefined4 *)(param_2 + 0x6448);
          lVar14 = ((longlong)*(int *)(param_2 + 0x644c) * (longlong)local_98 + 0x100 >> 9) +
                   ((lVar12 >> 2) << (bVar13 & 0x3f));
          lVar12 = (lVar19 >> 2) << (bVar13 & 0x3f);
          if (lVar14 < lVar12) {
            lVar12 = lVar14;
          }
          if (param_3 <= lVar12) {
            return 0x7fffffffffffffff;
          }
          lVar21 = lVar21 + 1;
          iVar8 = iVar8 + 1;
          puVar11 = local_80;
        } while (lVar21 < (longlong)local_80);
      }
      local_a8 = local_a8 + 1;
      local_a0 = local_a0 + 2;
    } while (local_a8 < iVar7 >> 2);
  }
  *param_6 = local_60 >> 2;
  *param_5 = local_98;
  *param_7 = local_58 >> 2;
  return ((longlong)*param_5 * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >> 9) +
         (*param_6 << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f));
}



// FUNCTION 1456765c0 FUN_1456765c0 body=288 status=ok
// SIG undefined FUN_1456765c0(void)

bool FUN_1456765c0(longlong param_1,longlong param_2,longlong param_3,int param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_4 - 10U < 3) {
    lVar8 = (longlong)*param_5;
    if (*(int *)(param_3 + ((longlong)param_4 * 4 + lVar8) * 4) != 0) {
      return true;
    }
    cVar1 = param_5[1];
    lVar7 = (longlong)cVar1;
    if ((cVar1 != -1) && (*(int *)(param_3 + ((longlong)param_4 * 4 + lVar7) * 4) != 0)) {
      return true;
    }
    uVar6 = (ulonglong)*(byte *)(lVar8 + param_2);
    iVar2 = *(int *)(param_1 + 0xcbedc + uVar6 * 0x10);
    iVar3 = *(int *)(param_1 + 0xcbed8 + uVar6 * 0x10);
    iVar4 = *(int *)(param_1 + (uVar6 + 0xcbee) * 0x10);
    if (param_4 == 0xb) {
      iVar5 = iVar2 - iVar4;
      bVar9 = iVar2 == iVar4;
      iVar3 = iVar2;
    }
    else {
      if (param_4 != 10) {
        if (cVar1 == -1) {
          if ((iVar3 <= iVar4) && (*(int *)(param_3 + 0xa0 + lVar8 * 4) == 0)) {
            return false;
          }
          if (iVar4 < iVar2) {
            return true;
          }
          if (*(int *)(param_3 + 0xb0 + lVar8 * 4) == 0) {
            return false;
          }
          return true;
        }
        if (((iVar3 <= iVar4) && (*(int *)(param_3 + 0xa0 + lVar8 * 4) == 0)) &&
           (*(int *)(param_3 + 0xa0 + lVar7 * 4) == 0)) {
          return false;
        }
        if (iVar4 < iVar2) {
          return true;
        }
        if (*(int *)(param_3 + 0xb0 + lVar8 * 4) != 0) {
          return true;
        }
        return *(int *)(param_3 + 0xb0 + lVar7 * 4) != 0;
      }
      iVar5 = iVar3 - iVar4;
      bVar9 = iVar5 == 0;
    }
    if (!bVar9 && SBORROW4(iVar3,iVar4) == iVar5 < 0) {
      return false;
    }
  }
  return true;
}



// FUNCTION 1456766e0 FUN_1456766e0 body=1396 status=ok
// SIG undefined FUN_1456766e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_1456766e0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,int param_5,
                  int param_6,longlong param_7,int *param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  uint uVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  undefined1 auStack_22b8 [32];
  undefined4 *local_2298;
  undefined4 *local_2290;
  undefined1 *local_2288;
  int local_2280;
  undefined8 local_2278;
  undefined *local_2270;
  undefined8 local_2268;
  undefined1 *local_2260;
  undefined1 *local_2258;
  undefined1 *local_2250;
  int local_2248;
  int local_2240;
  undefined4 local_2238;
  undefined4 local_2228;
  int local_2224;
  int local_2220;
  int local_2218 [2];
  longlong local_2210;
  ulonglong local_2208;
  undefined4 local_2200;
  int local_21fc;
  int local_21f8;
  undefined4 *local_21f0;
  uint local_21e8 [2];
  undefined1 local_21e0 [8];
  undefined *local_21d8;
  longlong local_21d0;
  int *local_21c8;
  undefined1 local_21c0 [8];
  undefined4 local_21b8 [2];
  undefined4 *local_21b0;
  longlong local_21a8 [2];
  undefined8 local_2198;
  undefined4 uStack_2194;
  undefined8 uStack_2190;
  undefined4 local_2188;
  undefined4 uStack_2184;
  undefined4 uStack_2180;
  undefined4 uStack_217c;
  undefined8 local_2178;
  undefined8 uStack_2170;
  undefined8 local_2168;
  undefined8 uStack_2160;
  undefined1 local_2158 [192];
  undefined4 local_2098 [16];
  undefined1 local_2058 [8192];
  ulonglong local_58;
  undefined8 uStack_48;
  
  plVar16 = local_21a8;
  uStack_48 = 0x1456766ff;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_22b8;
  local_21c8 = param_8;
  local_2208 = param_3 & 0xff;
  local_2224 = (uint)(byte)(&DAT_149d549b0)[local_2208] << 2;
  local_2220 = (uint)(byte)(&DAT_149d549c0)[local_2208] << 2;
  local_2218[1] = 0;
  lVar10 = **(longlong **)(param_2 + 0x6340);
  local_2218[0] = (int)*(char *)(lVar10 + 8);
  if (-1 < *(char *)(lVar10 + 9)) {
    local_2218[1] = (int)*(char *)(lVar10 + 9);
  }
  local_21e8[0] = 0xffffffff;
  local_21e8[1] = 0xffffffff;
  local_21d8 = (&PTR_DAT_14c744430)[*(byte *)(lVar10 + 7)];
  local_2210 = param_4;
  local_21d0 = param_1;
  local_21a8[0] = FUN_14561b650(param_1);
  local_21a8[1] = FUN_14561b650(param_1,(int)*(char *)(lVar10 + 9));
  iVar14 = 0;
  puVar17 = (undefined4 *)(param_2 + 0x62b0);
  lVar10 = 0;
  puVar12 = local_2098;
  plVar19 = plVar16;
  puVar20 = puVar17;
  do {
    lVar9 = (longlong)*(int *)((longlong)local_2218 + lVar10);
    lVar1 = *plVar19;
    *(undefined4 *)((longlong)local_21b8 + lVar10) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x6410) + lVar9 * 8);
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(puVar20 + -0x42);
      *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar20 + -0x44);
      *(undefined8 *)(puVar12 + -6) = uVar5;
      local_2290 = (undefined4 *)0x0;
      uVar5 = *(undefined8 *)(puVar20 + -0x20);
      local_2298 = (undefined4 *)CONCAT44(local_2298._4_4_,param_6);
      *(undefined8 *)(puVar12 + -4) = *(undefined8 *)(puVar20 + -0x22);
      *(undefined8 *)(puVar12 + -2) = uVar5;
      uVar2 = puVar20[1];
      uVar3 = puVar20[2];
      uVar4 = puVar20[3];
      *puVar12 = *puVar20;
      puVar12[1] = uVar2;
      puVar12[2] = uVar3;
      puVar12[3] = uVar4;
      FUN_1454793f0(param_2 + 0x6180,iVar14,lVar1,param_5);
      lVar9 = (longlong)*(int *)((longlong)local_2218 + lVar10);
    }
    lVar1 = local_21d0;
    iVar14 = iVar14 + 1;
    puVar20 = puVar20 + 4;
    lVar10 = lVar10 + 4;
    plVar19 = plVar19 + 1;
    puVar12 = puVar12 + 0xc;
    *(undefined4 *)(local_2210 + lVar9 * 4) = *(undefined4 *)(param_7 + lVar9 * 4);
  } while (iVar14 < 2);
  local_2290 = (undefined4 *)CONCAT44(local_2290._4_4_,*(undefined4 *)(local_21d0 + 0x2a068));
  local_2298 = (undefined4 *)CONCAT44(local_2298._4_4_,*(undefined4 *)(local_21d0 + 0x2a04c));
  FUN_1454720f0(local_2158,*(undefined4 *)(local_21d0 + 0x2a048),
                *(undefined4 *)(local_21d0 + 0x2a04c),*(undefined4 *)(local_21d0 + 0x2a048));
  uVar18 = 0;
  local_21fc = param_5 * 8;
  local_21f8 = param_6 * 8;
  local_21f0 = (undefined4 *)(local_2208 * 0x30 + 0xb4a48 + lVar1);
  do {
    puVar11 = local_2058;
    local_2200 = *(undefined4 *)(param_2 + 0x6440);
    uVar6 = uVar18 & 1;
    uVar8 = (ulonglong)uVar6 ^ 1;
    uVar15 = (ulonglong)uVar6;
    local_2178 = *(undefined8 *)(param_2 + 0x6520);
    uStack_2170 = *(undefined8 *)(param_2 + 0x6528);
    local_2198 = *(undefined8 *)(param_2 + 0x61a0);
    uStack_2190 = *(undefined8 *)(param_2 + 25000);
    local_2168 = *(undefined8 *)(param_2 + 0x61a0);
    uStack_2160 = *(undefined8 *)(param_2 + 25000);
    local_2188 = *(undefined4 *)(param_2 + 0x61b0);
    uStack_2184 = *(undefined4 *)(param_2 + 0x61b4);
    uStack_2180 = *(undefined4 *)(param_2 + 0x61b8);
    uStack_217c = *(undefined4 *)(param_2 + 0x61bc);
    if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
      local_2258 = (undefined1 *)CONCAT44(local_2258._4_4_,local_21fc);
      local_2298 = (undefined4 *)(local_2210 + (longlong)local_2218[uVar8] * 4);
      local_2290 = (undefined4 *)local_2158;
      local_2260 = (undefined1 *)CONCAT44(local_2260._4_4_,local_21f8);
      local_2268 = (ulonglong)local_2268._4_4_ << 0x20;
      local_2270 = local_21d8;
      local_2278 = (ulonglong)local_2278._4_4_ << 0x20;
      local_2280 = local_2224;
      local_2288 = (undefined1 *)CONCAT44(local_2288._4_4_,local_2220);
      FUN_145479090((&stack0xffffffffffffde68)[uVar8 * 2],*(undefined4 *)(&uStack_2190 + uVar8 * 2),
                    local_2058,local_2220);
    }
    else {
      local_2298 = (undefined4 *)(local_2210 + (longlong)local_2218[uVar8] * 4);
      puVar11 = (undefined1 *)((ulonglong)puVar11 >> 1);
      local_2250 = (undefined1 *)CONCAT44(local_2250._4_4_,*(undefined4 *)(param_2 + 0x63f0));
      local_2258 = (undefined1 *)CONCAT44(local_2258._4_4_,local_21fc);
      local_2260 = (undefined1 *)CONCAT44(local_2260._4_4_,local_21f8);
      local_2268 = (ulonglong)local_2268._4_4_ << 0x20;
      local_2270 = local_21d8;
      local_2278 = (ulonglong)local_2278._4_4_ << 0x20;
      local_2280 = local_2224;
      local_2290 = (undefined4 *)local_2158;
      local_2288 = (undefined1 *)CONCAT44(local_2288._4_4_,local_2220);
      FUN_1454791d0((&stack0xffffffffffffde68)[uVar8 * 2] * 2,
                    *(undefined4 *)(&uStack_2190 + uVar8 * 2),local_2058,local_2220);
    }
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar2 = (&uStack_2194)[uVar15 * 4];
      uVar3 = *(undefined4 *)(&uStack_2190 + uVar15 * 2);
      uVar4 = *(undefined4 *)((longlong)&uStack_2190 + uVar15 * 0x10 + 4);
      *(undefined4 *)(param_2 + 0x61a0) = *(undefined4 *)(&stack0xffffffffffffde68 + uVar15 * 2);
      *(undefined4 *)(param_2 + 0x61a4) = uVar2;
      *(undefined4 *)(param_2 + 25000) = uVar3;
      *(undefined4 *)(param_2 + 0x61ac) = uVar4;
      uVar8 = uVar15;
    }
    local_2208 = uVar8 * 4;
    puVar12 = local_21b8 + uVar8;
    FUN_1455aa900(param_2 + 0x6520,puVar12);
    local_21b0 = (undefined4 *)
                 (local_2210 + (longlong)*(int *)((longlong)local_2218 + local_2208) * 4);
    local_2228._0_2_ = (short)*local_21b0;
    local_2228 = CONCAT22((short)((int)*local_21b0 >> 0x13),(short)local_2228 >> 3);
    local_2298 = local_21f0;
    local_2290 = puVar12;
    local_2288 = puVar11;
    iVar14 = FUN_1455be590(param_2,&local_2228,local_2200,3);
    if (iVar14 != -1) {
      local_2290 = (undefined4 *)CONCAT44(local_2290._4_4_,1);
      local_2298 = local_21f0;
      iVar14 = FUN_1455aab30(param_2,&local_2228,puVar12,puVar11);
    }
    *(undefined4 *)(param_2 + 0x6520) = (undefined4)local_2178;
    *(undefined4 *)(param_2 + 0x6524) = local_2178._4_4_;
    *(undefined4 *)(param_2 + 0x6528) = (undefined4)uStack_2170;
    *(undefined4 *)(param_2 + 0x652c) = uStack_2170._4_4_;
    if (iVar14 == -1) {
      uVar7 = 0xffffffff;
    }
    else {
      local_2270 = (undefined *)(param_2 + 0x64a4);
      local_2238 = *(undefined4 *)(local_21d0 + 0xb4918);
      local_2240 = local_2224;
      local_2258 = local_21c0;
      local_2248 = local_2220;
      local_2260 = local_21e0;
      local_2268 = *(longlong *)(param_2 + 0x64d8);
      local_2280 = *(int *)(local_21d0 + 0xb46c0);
      local_2278 = 0;
      local_2288 = (undefined1 *)((ulonglong)local_2288 & 0xffffffff00000000);
      local_2290 = local_21f0;
      local_2298 = (undefined4 *)CONCAT44(local_2298._4_4_,*(undefined4 *)(param_2 + 0x643c));
      local_2250 = puVar11;
      uVar7 = (**(code **)(local_21d0 + 0xb4998))
                        (param_2,&local_2228,puVar12,*(undefined4 *)(local_21d0 + 0x2a2f8));
    }
    puVar12 = local_21b0;
    if (uVar6 != 0) {
      *(undefined4 *)(param_2 + 0x61a0) = (undefined4)local_2168;
      *(undefined4 *)(param_2 + 0x61a4) = local_2168._4_4_;
      *(undefined4 *)(param_2 + 25000) = (undefined4)uStack_2160;
      *(undefined4 *)(param_2 + 0x61ac) = uStack_2160._4_4_;
    }
    if (*(uint *)(local_21e0 + (local_2208 - 8)) <= uVar7) break;
    uVar18 = uVar18 + 1;
    *(uint *)(local_21e0 + (local_2208 - 8)) = uVar7;
    *puVar12 = local_2228;
  } while ((int)uVar18 < 4);
  piVar13 = local_2218;
  lVar10 = 2;
  *local_21c8 = 0;
  puVar12 = local_2098;
  do {
    if (*plVar16 != 0) {
      uVar5 = *(undefined8 *)(puVar12 + -6);
      *(undefined8 *)(puVar17 + -0x44) = *(undefined8 *)(puVar12 + -8);
      *(undefined8 *)(puVar17 + -0x42) = uVar5;
      uVar5 = *(undefined8 *)(puVar12 + -2);
      *(undefined8 *)(puVar17 + -0x22) = *(undefined8 *)(puVar12 + -4);
      *(undefined8 *)(puVar17 + -0x20) = uVar5;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      uVar4 = puVar12[3];
      *puVar17 = *puVar12;
      puVar17[1] = uVar2;
      puVar17[2] = uVar3;
      puVar17[3] = uVar4;
    }
    local_2298 = (undefined4 *)CONCAT44(local_2298._4_4_,0x6c);
    iVar14 = FUN_1455aa9b0(local_2210 + (longlong)*piVar13 * 4,
                           *(longlong *)(param_2 + 0x6410) + (longlong)*piVar13 * 8,param_2 + 0x64a4
                           ,*(undefined8 *)(param_2 + 0x64d8));
    puVar17 = puVar17 + 4;
    plVar16 = plVar16 + 1;
    puVar12 = puVar12 + 0xc;
    piVar13 = piVar13 + 1;
    *local_21c8 = *local_21c8 + iVar14;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_22b8);
}



// FUNCTION 145676c70 FUN_145676c70 body=4471 status=ok
// SIG undefined FUN_145676c70(void)

void FUN_145676c70(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8,
                  undefined4 *param_9,undefined8 *param_10,int param_11,longlong param_12,
                  longlong param_13,int param_14,undefined4 param_15,undefined4 param_16)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  byte bVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte *pbVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined4 auStack_3e0 [4];
  undefined *puStack_3d0;
  undefined1 auStack_3c8 [32];
  byte *local_3a8;
  byte *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined4 *local_380;
  undefined8 local_378;
  undefined1 *local_370;
  longlong local_368;
  undefined8 local_360;
  int local_358;
  int local_350;
  undefined4 local_348;
  undefined2 local_338;
  byte local_336;
  byte local_335;
  longlong local_330;
  byte local_328;
  longlong local_320;
  int local_318;
  longlong local_310;
  undefined8 *local_308;
  undefined2 local_300 [2];
  uint local_2fc;
  short local_2f8;
  short local_2f6;
  longlong local_2f0;
  byte *local_2e8;
  uint local_2e0;
  uint local_2dc;
  int local_2d8;
  longlong local_2d0;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined8 *local_2a0;
  byte *local_298;
  uint local_290;
  int local_28c;
  int local_288;
  int local_284;
  undefined4 *local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined1 local_248 [4];
  undefined1 local_244 [4];
  longlong local_240;
  longlong local_238;
  longlong local_230;
  ulonglong local_228;
  undefined4 *local_220;
  undefined8 *local_218;
  undefined4 *local_210;
  undefined4 *local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  byte local_1b8 [104];
  undefined4 local_150 [2];
  undefined1 local_148 [32];
  undefined8 local_128 [20];
  undefined8 local_88 [4];
  undefined8 auStack_68 [2];
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_240 = param_2 + 0x6180;
  local_220 = param_6;
  local_210 = param_7;
  lVar16 = *(longlong *)(param_2 + 0x6410);
  local_218 = param_8;
  local_208 = param_9;
  local_200 = param_10;
  local_330 = param_12;
  local_268 = (longlong)param_14;
  local_2c8 = 0;
  local_258 = 0;
  local_250 = 0;
  local_278 = 0;
  local_2d8 = 0;
  local_260 = param_13;
  puVar29 = (undefined8 *)(param_13 + local_268 * 0x3c8);
  pbVar20 = (byte *)**(undefined8 **)(param_2 + 0x6340);
  local_238 = param_1 + 0x29ee0;
  local_328 = *pbVar20;
  local_228 = (ulonglong)local_328;
  local_2fc = (uint)(byte)(&DAT_149d549c0)[local_228];
  local_2dc = (uint)(byte)(&DAT_149d549b0)[local_328];
  local_288 = (uint)(byte)(&DAT_149d549c0)[local_228] * 4;
  local_280 = (undefined4 *)(param_1 + 0xb46b0);
  local_336 = pbVar20[9];
  local_290 = *(uint *)(param_1 + 0xb4838 + (ulonglong)local_328 * 4);
  puVar29[2] = 0;
  puStack_3d0 = (undefined *)0x145676dda;
  local_308 = puVar29;
  local_2d0 = param_1;
  local_298 = pbVar20;
  local_230 = param_2;
  memset(puVar29 + 4,0,0x3a8);
  puVar29[3] = param_5;
  *puVar29 = param_3;
  puVar29[1] = param_4;
  *(undefined4 *)(puVar29 + 2) = *param_3;
  *(int *)(puVar29 + 0x78) = param_11;
  *(undefined4 *)((longlong)puVar29 + 0x3c) = 0xc0c0c0c;
  local_28c = (int)(param_11 + (param_11 >> 0x1f & 3U)) >> 2;
  local_338 = **(undefined2 **)(param_2 + 0x61c0);
  local_300[0] = **(undefined2 **)(param_2 + 0x61c8);
  local_2b0 = (longlong)(int)local_2dc;
  local_2a0 = (undefined8 *)(lVar16 + 0x20);
  local_2e8 = pbVar20 + 8;
  local_2c0 = 0;
  local_2e0 = ('\0' < (char)local_336) + 1;
  local_270 = 0;
LAB_145676e74:
  local_2c4 = 0;
  local_284 = local_2c0 * 2;
  local_2b8 = 0;
  local_2a8 = local_270 * 2;
LAB_145676e90:
  lVar18 = local_238;
  lVar16 = local_240;
  uVar25 = local_2e0;
  local_2f0 = local_2a8 + local_2b8;
  iVar28 = local_284 + local_2c4;
  iVar21 = 0;
  local_335 = 0xc;
  local_310 = 0x7fffffffffffffff;
  pbVar20 = local_2e8;
  local_318 = iVar28;
  do {
    lVar15 = (longlong)(char)*pbVar20;
    *(undefined4 *)((longlong)auStack_68 + lVar15 * 4) = 0;
    local_398 = (undefined8 *)((longlong)local_88 + lVar15 * 4);
    local_390 = (undefined8 *)((longlong)auStack_68 + (lVar15 + -4) * 4);
    local_3a0 = (byte *)CONCAT44(local_3a0._4_4_,param_16);
    local_3a8 = (byte *)CONCAT44(local_3a8._4_4_,param_15);
    puStack_3d0 = (undefined *)0x145676f1f;
    local_388 = local_2a0;
    FUN_1456a73a0(lVar18,lVar16,iVar28,iVar21);
    lVar15 = local_230;
    uVar12 = local_300[0];
    uVar11 = local_338;
    pbVar20 = pbVar20 + 1;
    iVar21 = iVar21 + 1;
  } while (iVar21 < (int)uVar25);
  bVar13 = 10;
  lVar16 = local_2f0 * 4;
  local_338 = CONCAT11(local_338._1_1_,10);
  local_320 = lVar16;
  do {
    lVar22 = local_2d0;
    puVar29 = local_308;
    local_1f8 = *(undefined4 *)(lVar15 + 0x2018);
    uStack_1f4 = *(undefined4 *)(lVar15 + 0x201c);
    uStack_1f0 = *(undefined4 *)(lVar15 + 0x2020);
    uStack_1ec = *(undefined4 *)(lVar15 + 0x2024);
    local_2f0 = (ulonglong)bVar13 - 10;
    lVar18 = local_2f0 + lVar16;
    local_308[lVar18 * 7 + 0xc] = 0x7fffffffffffffff;
    puVar24 = local_308;
    if ((local_290 >> (bVar13 & 0x1f) & 1) != 0) {
      local_3a8 = local_2e8;
      puStack_3d0 = (undefined *)0x145676fc5;
      iVar28 = FUN_1456765c0(local_2d0,local_2a0,local_128);
      puVar24 = local_308;
      iVar21 = local_318;
      if (iVar28 != 0) {
        local_1e8 = *(undefined8 *)(lVar15 + 0x61a0);
        uStack_1e0 = *(undefined8 *)(lVar15 + 25000);
        local_1c8 = *(undefined4 *)(lVar15 + 0x61b0);
        uStack_1c4 = *(undefined4 *)(lVar15 + 0x61b4);
        uStack_1c0 = *(undefined4 *)(lVar15 + 0x61b8);
        uStack_1bc = *(undefined4 *)(lVar15 + 0x61bc);
        *(undefined2 *)((longlong)puVar29 + lVar18 * 0x38 + 0x72) = uVar12;
        *(undefined2 *)(local_308 + (lVar18 + 2) * 7) = uVar11;
        if ((char)local_336 < '\x01') {
          if (((byte)local_338 == '\r') &&
             (*(int *)(local_330 + ((char)*local_2e8 + lVar16) * 4) == -0x7fff8000)) {
            local_1d8 = *(undefined4 *)(lVar15 + 0x6520);
            uStack_1d4 = *(undefined4 *)(lVar15 + 0x6524);
            uStack_1d0 = *(undefined4 *)(lVar15 + 0x6528);
            uStack_1cc = *(undefined4 *)(lVar15 + 0x652c);
            uVar14 = *(undefined4 *)(lVar15 + 0x6444);
            if (local_28c <= local_310) {
              if ((*(int *)(lVar22 + 0x2e568) == 1) || (local_318 < 1)) {
                if (local_318 != 0) goto LAB_145677099;
                iVar21 = *(int *)(lVar15 + 0x6470 + (longlong)(char)*local_2e8 * 4);
              }
              else {
                *(undefined4 *)(local_308 + 2) =
                     *(undefined4 *)(local_298 + (local_2a8 + local_2b8) * 0xc + 0xc);
                if (local_318 == 2) {
                  *(undefined4 *)(local_308 + 2) =
                       *(undefined4 *)(local_298 + (local_2a8 + local_2b8) * 0xc);
                }
LAB_145677099:
                uVar25 = (uint)*(short *)(local_308 + 2);
                uVar26 = (uint)*(short *)((longlong)local_308 + 0x12);
                if ((int)((uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f)) <=
                    (int)((uVar26 ^ (int)uVar26 >> 0x1f) - ((int)uVar26 >> 0x1f))) {
                  uVar25 = uVar26;
                }
                iVar21 = (int)((uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f)) >> 3;
              }
              if ((*(int *)(lVar22 + 0xb46b8) == 0) || (*(int *)(lVar22 + 0x2a2e8) == 0)) {
                iVar21 = *(int *)(lVar22 + 0xb493c);
              }
              else {
                puStack_3d0 = (undefined *)0x1456770e1;
                iVar21 = FUN_1455aac40(iVar21);
                iVar21 = (iVar21 + *(int *)(lVar22 + 0xb493c)) / 2;
              }
              local_2f8 = *(short *)(puVar24 + 2) >> 3;
              local_2f6 = *(short *)((longlong)puVar24 + 0x12) >> 3;
              iVar28 = iVar21;
              if (local_280[0x31] != 0) {
                lVar16 = (longlong)(char)*local_2e8;
                sVar4 = *(short *)(lVar15 + 0x141c8 + lVar16 * 4);
                if ((sVar4 != 0x7fff) && (*(short *)(lVar15 + 0x141ca + lVar16 * 4) != 0x7fff)) {
                  local_2f8 = sVar4 >> 3;
                  local_2f6 = *(short *)(lVar15 + 0x141ca + lVar16 * 4) >> 3;
                }
                iVar28 = 8;
                if (8 < iVar21) {
                  iVar28 = iVar21;
                }
              }
              lVar16 = **(longlong **)(lVar15 + 0x6340);
              puStack_3d0 = (undefined *)0x14567719e;
              iVar21 = FUN_14561b5e0(3,local_318,*(undefined4 *)(lVar15 + 0x2020));
              *(longlong *)(lVar15 + 0x2018) = *(longlong *)(lVar15 + 0x2018) + (longlong)iVar21;
              puStack_3d0 = (undefined *)0x1456771b9;
              iVar21 = FUN_14561b5e0(CONCAT71((int7)(int3)((uint)iVar21 >> 8),3),local_318,
                                     *(undefined4 *)(lVar15 + 25000));
              *(longlong *)(lVar15 + 0x61a0) = *(longlong *)(lVar15 + 0x61a0) + (longlong)iVar21;
              if ('\0' < *(char *)(lVar16 + 9)) {
                puStack_3d0 = (undefined *)0x1456771da;
                iVar21 = FUN_14561b5e0(CONCAT71((int7)(int3)((uint)iVar21 >> 8),3),local_318,
                                       *(undefined4 *)(lVar15 + 0x61b8));
                *(longlong *)(lVar15 + 0x61b0) = *(longlong *)(lVar15 + 0x61b0) + (longlong)iVar21;
              }
              puVar29 = local_308;
              puStack_3d0 = (undefined *)0x1456771f7;
              FUN_1455aa900(lVar15 + 0x6520,*local_308);
              puVar2 = local_280;
              local_390 = (undefined8 *)local_148;
              local_370 = (undefined1 *)CONCAT44(local_370._4_4_,1);
              local_378 = CONCAT44(local_378._4_4_,0x7fffffff);
              if (local_280[3] == 0) {
                local_390 = (undefined8 *)0x0;
              }
              local_380 = local_150;
              local_388 = (undefined8 *)*puVar29;
              local_3a0 = (byte *)CONCAT44(local_3a0._4_4_,*local_280);
              local_3a8 = (byte *)CONCAT44(local_3a8._4_4_,iVar28);
              puStack_3d0 = (undefined *)0x145677262;
              local_398._0_4_ = uVar14;
              iVar21 = FUN_1455be8a0(lVar22,lVar15,local_328,&local_2f8);
              pbVar20 = local_2e8;
              *(undefined4 *)(lVar15 + 0x6520) = local_1d8;
              *(undefined4 *)(lVar15 + 0x6524) = uStack_1d4;
              *(undefined4 *)(lVar15 + 0x6528) = uStack_1d0;
              *(undefined4 *)(lVar15 + 0x652c) = uStack_1cc;
              if (iVar21 != -1) {
                local_380 = (undefined4 *)(lVar15 + 0x64a4);
                local_388 = (undefined8 *)local_148;
                local_368 = (longlong)(char)*local_2e8 * 4 + 0x6484 + lVar15;
                if (*(int *)(lVar22 + 0xb46bc) == 0) {
                  local_388 = (undefined8 *)0x0;
                }
                local_348 = *(undefined4 *)(lVar22 + 0xb4918);
                local_350 = local_2dc * 4;
                local_358 = local_288;
                local_370 = local_248;
                local_360 = 0;
                local_378 = *(undefined8 *)(lVar15 + 0x64d8);
                local_390 = (undefined8 *)CONCAT44(local_390._4_4_,puVar2[4]);
                local_398 = (undefined8 *)CONCAT44(local_398._4_4_,puVar2[5]);
                local_3a0 = (byte *)(local_228 * 0x30 + 0xb4a48 + lVar22);
                local_3a8 = (byte *)CONCAT44(local_3a8._4_4_,*(undefined4 *)(lVar15 + 0x643c));
                puStack_3d0 = (undefined *)0x145677351;
                (**(code **)(lVar22 + 0xb4998))
                          (lVar15,local_150,*puVar29,*(undefined4 *)(lVar22 + 0x2a2f8));
                *(undefined4 *)(local_330 + ((char)*pbVar20 + local_320) * 4) = local_150[0];
              }
              *(undefined4 *)(lVar15 + 0x141c8 + (longlong)(char)*pbVar20 * 4) = local_150[0];
              lVar16 = **(longlong **)(lVar15 + 0x6340);
              *(ulonglong *)(lVar15 + 0x2018) = CONCAT44(uStack_1f4,local_1f8);
              *(ulonglong *)(lVar15 + 0x2020) = CONCAT44(uStack_1ec,uStack_1f0);
              *(undefined4 *)(lVar15 + 0x61a0) = (undefined4)local_1e8;
              *(undefined4 *)(lVar15 + 0x61a4) = local_1e8._4_4_;
              *(undefined4 *)(lVar15 + 25000) = (undefined4)uStack_1e0;
              *(undefined4 *)(lVar15 + 0x61ac) = uStack_1e0._4_4_;
              cVar3 = *(char *)(lVar16 + 9);
              goto joined_r0x00014567751e;
            }
            break;
          }
        }
        else {
          if ((*(int *)(local_330 + ((char)local_298[9] + lVar16) * 4) == -0x7fff8000) ||
             (*(int *)(local_330 + ((char)*local_2e8 + lVar16) * 4) == -0x7fff8000))
          goto LAB_145677a2e;
          if (((byte)local_338 != '\r') || (local_298[7] != 0)) goto LAB_14567753e;
          lVar17 = (longlong)local_318;
          lVar18 = **(longlong **)(lVar15 + 0x6340);
          puStack_3d0 = (undefined *)0x145677427;
          iVar28 = FUN_14561b5e0(3,local_318,*(undefined4 *)(lVar15 + 0x2020));
          *(longlong *)(lVar15 + 0x2018) = *(longlong *)(lVar15 + 0x2018) + (longlong)iVar28;
          puStack_3d0 = (undefined *)0x145677442;
          iVar28 = FUN_14561b5e0(CONCAT71((int7)(int3)((uint)iVar28 >> 8),3),iVar21,
                                 *(undefined4 *)(lVar15 + 25000));
          *(longlong *)(lVar15 + 0x61a0) = *(longlong *)(lVar15 + 0x61a0) + (longlong)iVar28;
          if ('\0' < *(char *)(lVar18 + 9)) {
            puStack_3d0 = (undefined *)0x145677463;
            iVar21 = FUN_14561b5e0(CONCAT71((int7)(int3)((uint)iVar28 >> 8),3),iVar21,
                                   *(undefined4 *)(lVar15 + 0x61b8));
            *(longlong *)(lVar15 + 0x61b0) = *(longlong *)(lVar15 + 0x61b0) + (longlong)iVar21;
          }
          lVar18 = local_330;
          if (*(byte *)(lVar22 + 0xb46ec) <= local_328) {
            local_390 = (undefined8 *)local_244;
            local_398 = (undefined8 *)(lVar17 * 0x10 + local_330);
            local_3a0 = (byte *)CONCAT44(local_3a0._4_4_,param_16);
            local_3a8 = (byte *)CONCAT44(local_3a8._4_4_,param_15);
            puStack_3d0 = (undefined *)0x1456774c0;
            FUN_1456766e0(lVar22,lVar15,local_328,local_58);
            *(undefined4 *)(lVar18 + ((char)local_298[8] + lVar16) * 4) =
                 local_58[(char)local_298[8]];
            *(undefined4 *)(lVar18 + ((char)local_298[9] + lVar16) * 4) =
                 local_58[(char)local_298[9]];
          }
          lVar16 = **(longlong **)(lVar15 + 0x6340);
          *(ulonglong *)(lVar15 + 0x2018) = CONCAT44(uStack_1f4,local_1f8);
          *(ulonglong *)(lVar15 + 0x2020) = CONCAT44(uStack_1ec,uStack_1f0);
          *(undefined4 *)(lVar15 + 0x61a0) = (undefined4)local_1e8;
          *(undefined4 *)(lVar15 + 0x61a4) = local_1e8._4_4_;
          *(undefined4 *)(lVar15 + 25000) = (undefined4)uStack_1e0;
          *(undefined4 *)(lVar15 + 0x61ac) = uStack_1e0._4_4_;
          cVar3 = *(char *)(lVar16 + 9);
joined_r0x00014567751e:
          if ('\0' < cVar3) {
            *(undefined4 *)(lVar15 + 0x61b0) = local_1c8;
            *(undefined4 *)(lVar15 + 0x61b4) = uStack_1c4;
            *(undefined4 *)(lVar15 + 0x61b8) = uStack_1c0;
            *(undefined4 *)(lVar15 + 0x61bc) = uStack_1bc;
          }
        }
LAB_14567753e:
        puVar29 = local_308;
        local_378 = *(undefined8 *)(lVar15 + 0x64d8);
        local_380 = (undefined4 *)(lVar15 + 0x64a4);
        bVar13 = (byte)local_338;
        uVar27 = (ulonglong)(byte)local_338;
        lVar22 = local_2f0 + local_320;
        local_398 = local_128;
        local_388 = local_308;
        local_3a0 = local_1b8 + uVar27 * 8;
        local_390 = (undefined8 *)((longlong)local_318 * 0x10 + local_330);
        local_3a8 = (byte *)CONCAT71(local_3a8._1_7_,(byte)local_338);
        puStack_3d0 = (undefined *)0x1456775be;
        uVar14 = FUN_145675ba0(local_2d0,lVar15,lVar15 + 0x6180);
        puVar24 = local_308;
        lVar16 = local_320;
        uVar23 = (ulonglong)local_2e0;
        *(undefined4 *)((longlong)puVar29 + lVar22 * 0x38 + 0x44) = uVar14;
        lVar18 = uVar27 + lVar22 * -7;
        if (local_2fc < 2) {
          puVar29 = puVar29 + lVar22 * 7 + 0x45;
          uVar19 = uVar23;
          do {
            uVar14 = *(undefined4 *)
                      ((longlong)auStack_3e0 + (lVar18 * 8 - (longlong)local_308) +
                      (longlong)puVar29);
            *(undefined4 *)(puVar29 + -0x38) = uVar14;
            if (1 < local_2b0) {
              *(undefined4 *)puVar29 = uVar14;
            }
            puVar29 = (undefined8 *)((longlong)puVar29 + 4);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        else {
          puVar29 = puVar29 + lVar22 * 7 + 0x29;
          uVar19 = uVar23;
          do {
            uVar14 = *(undefined4 *)
                      ((longlong)local_300 + (lVar18 * 8 - (longlong)local_308) + (longlong)puVar29)
            ;
            *(undefined4 *)(puVar29 + -0x1c) = uVar14;
            *(undefined4 *)puVar29 = uVar14;
            if (1 < local_2b0) {
              *(undefined4 *)(puVar29 + 0x1c) = uVar14;
            }
            puVar29 = (undefined8 *)((longlong)puVar29 + 4);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (((((*(int *)(lVar15 + 0x6528) <= (int)*(short *)(local_1b8 + uVar27 * 8) >> 3) &&
              ((int)*(short *)(local_1b8 + uVar27 * 8) >> 3 <= *(int *)(lVar15 + 0x652c))) &&
             (*(int *)(lVar15 + 0x6520) <= (int)*(short *)(local_1b8 + uVar27 * 8 + 2) >> 3)) &&
            ((int)*(short *)(local_1b8 + uVar27 * 8 + 2) >> 3 <= *(int *)(lVar15 + 0x6524))) &&
           (((char)local_336 < '\x01' ||
            (((*(int *)(lVar15 + 0x6528) <= (int)*(short *)(local_1b8 + uVar27 * 8 + 4) >> 3 &&
              ((int)*(short *)(local_1b8 + uVar27 * 8 + 4) >> 3 <= *(int *)(lVar15 + 0x652c))) &&
             ((*(int *)(lVar15 + 0x6520) <= (int)*(short *)(local_1b8 + uVar27 * 8 + 6) >> 3 &&
              ((int)*(short *)(local_1b8 + uVar27 * 8 + 6) >> 3 <= *(int *)(lVar15 + 0x6524)))))))))
        {
          if (0 < local_268) {
            bVar8 = false;
            pbVar20 = local_1b8 + uVar27 * 8;
            lVar18 = local_260 +
                     ((((local_320 + local_2f0) * 7 - uVar27) * 8 + 0x68) - (longlong)local_1b8);
            uVar19 = uVar23;
            bVar10 = true;
            do {
              if (((*pbVar20 & 0xf) != 0) ||
                 (bVar13 = 0,
                 (pbVar20[(longlong)
                          (local_1b8 +
                          lVar18 + ((uVar27 + (local_320 + local_2f0) * -7) * 8 - local_260) + -0x66
                          )] & 0xf) != 0)) {
                bVar13 = 1;
              }
              bVar8 = (bool)(bVar8 | bVar13);
              bVar9 = false;
              if (*(int *)pbVar20 == *(int *)(pbVar20 + lVar18)) {
                bVar9 = bVar10;
              }
              pbVar20 = pbVar20 + 4;
              uVar19 = uVar19 - 1;
              bVar10 = bVar9;
            } while (uVar19 != 0);
            bVar13 = (byte)local_338;
            if (!bVar8) {
              lVar18 = local_260;
              if (local_268 < 2) {
LAB_14567780b:
                if (!bVar9) goto LAB_1456778d9;
              }
              else if (!bVar9) {
                lVar18 = local_260 + 0x3c8;
                pbVar20 = local_1b8 + (ulonglong)(byte)local_338 * 8;
                bVar8 = true;
                do {
                  pbVar1 = pbVar20 + ((((local_320 + local_2f0) * 7 - (ulonglong)(byte)local_338) *
                                       8 + 0x68) - (longlong)local_1b8) + lVar18;
                  iVar21 = *(int *)pbVar20;
                  pbVar20 = pbVar20 + 4;
                  bVar9 = false;
                  if (iVar21 == *(int *)pbVar1) {
                    bVar9 = bVar8;
                  }
                  uVar23 = uVar23 - 1;
                  bVar8 = bVar9;
                } while (uVar23 != 0);
                goto LAB_14567780b;
              }
              lVar22 = local_2f0 + local_320;
              lVar17 = lVar22 * 0x38;
              if (*(longlong *)(lVar17 + 0x60 + lVar18) < 0x7fffffffffffffff) {
                puVar29 = (undefined8 *)(lVar17 + 0x40 + lVar18);
                uVar7 = puVar29[1];
                local_308[lVar22 * 7 + 8] = *puVar29;
                (local_308 + lVar22 * 7 + 8)[1] = uVar7;
                puVar29 = (undefined8 *)(lVar17 + 0x50 + lVar18);
                uVar7 = puVar29[1];
                local_308[lVar22 * 7 + 10] = *puVar29;
                (local_308 + lVar22 * 7 + 10)[1] = uVar7;
                puVar2 = (undefined4 *)(lVar17 + 0x60 + lVar18);
                uVar14 = puVar2[1];
                uVar5 = puVar2[2];
                uVar6 = puVar2[3];
                puVar29 = local_308 + lVar22 * 7 + 0xc;
                *(undefined4 *)puVar29 = *puVar2;
                *(undefined4 *)((longlong)puVar29 + 4) = uVar14;
                *(undefined4 *)(puVar29 + 1) = uVar5;
                *(undefined4 *)((longlong)puVar29 + 0xc) = uVar6;
                local_308[lVar22 * 7 + 0xe] = *(undefined8 *)(lVar17 + 0x70 + lVar18);
                if (1 < local_2fc) {
                  *(undefined4 *)(local_308 + lVar22 * 7 + 0x24) =
                       *(undefined4 *)(lVar17 + 0x120 + lVar18);
                }
                if (1 < local_2b0) {
                  *(undefined4 *)(local_308 + lVar22 * 7 + 0x40) =
                       *(undefined4 *)(lVar17 + 0x200 + lVar18);
                }
                if ((longlong)local_308[lVar22 * 7 + 0xc] < local_310) {
                  local_335 = (byte)local_338;
                  local_310 = local_308[lVar22 * 7 + 0xc];
                }
                goto LAB_145677a2e;
              }
            }
          }
LAB_1456778d9:
          lVar18 = local_2f0 + (longlong)local_318 * 4;
          local_388 = (undefined8 *)(lVar18 * 0x38 + 0x72 + (longlong)local_308);
          local_390 = local_308 + lVar18 * 7 + 0xe;
          local_398 = local_308 + lVar18 * 7 + 0xb;
          local_3a0 = (byte *)(local_308 + lVar18 * 7 + 10);
          local_3a8 = (byte *)(local_308 + lVar18 * 7 + 9);
          local_378 = CONCAT44(local_378._4_4_,param_16);
          local_380 = (undefined4 *)CONCAT44(local_380._4_4_,param_15);
          puStack_3d0 = (undefined *)0x145677950;
          lVar18 = FUN_145675e00(local_2d0,lVar15,local_308[3] - local_278,local_318);
          lVar22 = local_2f0 + lVar16;
          puVar24[lVar22 * 7 + 0xc] = lVar18;
          if (lVar18 < 0x7fffffffffffffff) {
            iVar21 = *(int *)((longlong)puVar24 + lVar22 * 0x38 + 0x44);
            lVar17 = local_2a8 + local_2b8;
            lVar18 = ((longlong)iVar21 * (longlong)*(int *)(lVar15 + 0x644c) + 0x100 >> 9) + lVar18;
            *(int *)((longlong)puVar24 + lVar22 * 0x38 + 0x44) =
                 *(int *)(puVar24 + lVar22 * 7 + 9) + iVar21;
            puVar24[lVar22 * 7 + 0xc] = lVar18;
            *(uint *)(puVar24 + lVar22 * 7 + 8) =
                 (uint)*(ushort *)(*(longlong *)(lVar15 + 0x2010) + lVar17 * 2);
            if (1 < local_2fc) {
              *(uint *)(puVar24 + lVar22 * 7 + 0x24) =
                   (uint)*(ushort *)(*(longlong *)(lVar15 + 0x2010) + 2 + lVar17 * 2);
            }
            if (1 < local_2b0) {
              *(uint *)(puVar24 + lVar22 * 7 + 0x40) =
                   (uint)*(ushort *)(*(longlong *)(lVar15 + 0x2010) + 4 + lVar17 * 2);
            }
          }
          if (lVar18 < local_310) {
            local_335 = bVar13;
            local_310 = lVar18;
          }
        }
      }
    }
LAB_145677a2e:
    bVar13 = (byte)local_338 + 1;
    local_338 = CONCAT11(local_338._1_1_,bVar13);
  } while (bVar13 < 0xe);
  iVar21 = local_318;
  if (local_310 != 0x7fffffffffffffff) {
    local_380 = (undefined4 *)(lVar15 + 0x64a4);
    local_390 = (undefined8 *)((longlong)local_318 * 0x10 + local_330);
    lVar16 = ((ulonglong)local_335 - 10) + (local_2a8 + local_2b8) * 4;
    local_338 = *(undefined2 *)(puVar24 + (lVar16 + 2) * 7);
    local_3a0 = local_1b8 + (ulonglong)local_335 * 8;
    local_378 = *(undefined8 *)(lVar15 + 0x64d8);
    local_398 = local_128;
    local_388 = local_308;
    local_300[0] = *(undefined2 *)((longlong)puVar24 + lVar16 * 0x38 + 0x72);
    local_3a8 = (byte *)CONCAT71(local_3a8._1_7_,local_335);
    puStack_3d0 = (undefined *)0x145677aed;
    FUN_145675ba0(local_2d0,lVar15,lVar15 + 0x6180,local_318);
    pbVar20 = local_298;
    puVar29 = local_308;
    local_2c8 = local_2c8 + *(int *)((longlong)puVar24 + lVar16 * 0x38 + 0x44);
    local_2d8 = local_2d8 + *(int *)(puVar24 + lVar16 * 7 + 9);
    local_278 = local_278 + puVar24[lVar16 * 7 + 0xc];
    local_258 = local_258 + puVar24[lVar16 * 7 + 10];
    local_250 = local_250 + puVar24[lVar16 * 7 + 0xb];
    if ((longlong)local_308[3] < local_278) {
      lVar16 = (longlong)(iVar21 + 1);
      puVar24 = local_308;
      if (lVar16 < 4) {
        puVar29 = local_308 + lVar16 * 0x1c + 0x13;
        lVar16 = 4 - lVar16;
        do {
          puVar29[-7] = 0x7fffffffffffffff;
          *puVar29 = 0x7fffffffffffffff;
          puVar29[7] = 0x7fffffffffffffff;
          puVar29[0xe] = 0x7fffffffffffffff;
          puVar29 = puVar29 + 0x1c;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      goto LAB_145677ddc;
    }
    local_2c4 = local_2c4 + local_2fc;
    local_2b8 = local_2b8 + (int)local_2fc;
    if (1 < local_2b8) goto code_r0x000145677b69;
    goto LAB_145676e90;
  }
  lVar16 = (longlong)(local_318 + 1);
  if (lVar16 < 4) {
    puVar29 = puVar24 + lVar16 * 0x1c + 0x13;
    lVar16 = 4 - lVar16;
    do {
      puVar29[-7] = 0x7fffffffffffffff;
      *puVar29 = 0x7fffffffffffffff;
      puVar29[7] = 0x7fffffffffffffff;
      puVar29[0xe] = 0x7fffffffffffffff;
      puVar29 = puVar29 + 0x1c;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
LAB_145677ddc:
  puVar24[3] = 0x7fffffffffffffff;
  goto LAB_145677de3;
code_r0x000145677b69:
  local_270 = local_270 + local_2b0;
  local_2c0 = local_2c0 + local_2dc;
  if (1 < local_2c0) {
    *(int *)(local_308 + 4) = local_2c8;
    local_308[5] = local_258;
    *(int *)(local_308 + 7) = local_2d8;
    local_308[3] = local_278;
    local_308[6] = local_250;
    bVar13 = local_298[0x14];
    *(byte *)((longlong)local_308 + 0x3c) = bVar13;
    *(byte *)((longlong)local_308 + 0x3d) = local_298[0x20];
    *(byte *)((longlong)local_308 + 0x3e) = local_298[0x2c];
    *(byte *)((longlong)local_308 + 0x3f) = local_298[0x38];
    if (local_278 <= param_5) {
      lVar16 = (ulonglong)bVar13 - 10;
      *(undefined4 *)(local_298 + 0x18) = *(undefined4 *)(local_308 + lVar16 * 7 + 0xd);
      if ('\0' < (char)local_298[9]) {
        *(undefined4 *)(local_298 + 0x1c) =
             *(undefined4 *)(lVar16 * 0x38 + 0x6c + (longlong)local_308);
      }
      **(undefined2 **)(lVar15 + 0x2010) = *(undefined2 *)(local_308 + lVar16 * 7 + 8);
      local_298[0x14] = *(byte *)((longlong)local_308 + 0x3c);
      lVar16 = (ulonglong)*(byte *)((longlong)local_308 + 0x3d) - 10;
      *(undefined4 *)(local_298 + 0x24) = *(undefined4 *)(local_308 + lVar16 * 7 + 0x29);
      if ('\0' < (char)local_298[9]) {
        *(undefined4 *)(local_298 + 0x28) =
             *(undefined4 *)(lVar16 * 0x38 + 0x14c + (longlong)local_308);
      }
      *(undefined2 *)(*(longlong *)(lVar15 + 0x2010) + 2) =
           *(undefined2 *)(local_308 + lVar16 * 7 + 0x24);
      local_298[0x20] = *(byte *)((longlong)local_308 + 0x3d);
      lVar16 = (ulonglong)*(byte *)((longlong)local_308 + 0x3e) - 10;
      *(undefined4 *)(local_298 + 0x30) = *(undefined4 *)(local_308 + lVar16 * 7 + 0x45);
      if ('\0' < (char)local_298[9]) {
        *(undefined4 *)(local_298 + 0x34) =
             *(undefined4 *)(lVar16 * 0x38 + 0x22c + (longlong)local_308);
      }
      *(undefined2 *)(*(longlong *)(lVar15 + 0x2010) + 4) =
           *(undefined2 *)(local_308 + lVar16 * 7 + 0x40);
      local_298[0x2c] = *(byte *)((longlong)local_308 + 0x3e);
      lVar16 = (ulonglong)*(byte *)((longlong)local_308 + 0x3f) - 10;
      *(undefined4 *)(local_298 + 0x3c) = *(undefined4 *)(local_308 + lVar16 * 7 + 0x61);
      if ('\0' < (char)local_298[9]) {
        *(undefined4 *)(local_298 + 0x40) =
             *(undefined4 *)(lVar16 * 0x38 + 0x30c + (longlong)local_308);
      }
      *(undefined2 *)(*(longlong *)(lVar15 + 0x2010) + 6) =
           *(undefined2 *)(local_308 + lVar16 * 7 + 0x5c);
      local_298[0x38] = *(byte *)((longlong)local_308 + 0x3f);
      *local_220 = *(undefined4 *)(local_308 + 4);
      *local_218 = local_308[5];
      uVar14 = *(undefined4 *)(local_308 + 7);
      *local_210 = uVar14;
      puStack_3d0 = (undefined *)0x145677d0b;
      uVar14 = FUN_145661f40(lVar15,CONCAT71((uint7)(uint3)((uint)uVar14 >> 8),3),0);
      *local_208 = uVar14;
      *local_200 = puVar29[6];
      pbVar20[1] = *(byte *)((longlong)puVar29 + 0x3f);
    }
LAB_145677de3:
                    /* WARNING: Subroutine does not return */
    puStack_3d0 = &UNK_145677df2;
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_3c8);
  }
  goto LAB_145676e74;
}



// FUNCTION 145677e10 FUN_145677e10 body=673 status=ok
// SIG undefined FUN_145677e10(void)

void FUN_145677e10(longlong param_1,longlong param_2,int param_3,uint *param_4,undefined8 *param_5,
                  byte *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  
  if ((*(char *)(param_1 + 0x11a8) != '\0') &&
     ((*(byte *)(param_1 + 0x11f8 + (longlong)param_3 * 4) & 4) != 0)) {
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    *param_5 = 0;
    param_5[1] = 0;
    *param_6 = 0x80;
    return;
  }
  lVar3 = *(longlong *)(param_2 + 0x1d0);
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  if (lVar3 == 0) {
    if (lVar2 == 0) {
      lVar3 = 0;
      goto LAB_145677ecb;
    }
  }
  else if (lVar2 != 0) {
    if (*(char *)(lVar2 + 8) < '\x01') {
      if (*(char *)(lVar3 + 8) < '\x01') {
        lVar3 = 3;
        goto LAB_145677ecb;
      }
    }
    else if ('\0' < *(char *)(lVar3 + 8)) {
      lVar3 = 0;
      goto LAB_145677ecb;
    }
    lVar3 = 1;
    goto LAB_145677ecb;
  }
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  lVar3 = 0;
  if (*(char *)(lVar2 + 8) < '\x01') {
    lVar3 = 2;
  }
LAB_145677ecb:
  bVar9 = 0x80;
  uVar6 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1228) + 0x78b + lVar3);
  if (*(int *)(param_1 + 0x1220) == 2) {
    iVar1 = FUN_1454773a0(param_1,param_2);
    bVar9 = *(byte *)((longlong)iVar1 + 0x78f + *(longlong *)(param_1 + 0x1228));
  }
  *param_6 = bVar9;
  *param_4 = (uint)*(ushort *)(&DAT_149df5520 + uVar6 * 2);
  if (*(int *)(param_1 + 0x1220) == 1) {
    param_4[1] = 0x200;
    uVar7 = 0x200;
    param_4[2] = 0x200;
  }
  else {
    iVar1 = FUN_145477670(param_2);
    uVar8 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1228) + 0x794 + (longlong)iVar1 * 2);
    iVar1 = FUN_1454777c0(param_2);
    uVar5 = (ulonglong)*(byte *)((longlong)iVar1 * 2 + 0x795 + *(longlong *)(param_1 + 0x1228));
    uVar7 = (uint)*(ushort *)(&DAT_149df5720 + uVar6 * -2);
    if (*(int *)(param_1 + 0x1220) == 2) {
      uVar7 = (uint)*(ushort *)(&DAT_149df5720 + uVar6 * -2) +
              (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)bVar9 * 2);
    }
    param_4[2] = uVar7;
    param_4[3] = uVar7;
    param_4[1] = uVar7;
    param_4[1] = *(ushort *)(&DAT_149df5520 + uVar8 * 2) + uVar7;
    uVar4 = *(ushort *)(&DAT_149df5720 + uVar8 * -2) + uVar7;
    param_4[2] = uVar4;
    uVar7 = uVar7 + *(ushort *)(&DAT_149df5720 + uVar8 * -2);
    param_4[3] = uVar7;
    param_4[2] = *(ushort *)(&DAT_149df5520 + uVar5 * 2) + uVar4;
    uVar7 = *(ushort *)(&DAT_149df5720 + uVar5 * -2) + uVar7;
  }
  param_4[3] = uVar7;
  if (*(int *)(param_1 + 0x1220) == 0) {
    *(undefined4 *)((longlong)param_5 + 4) = 0x200;
    *(undefined4 *)(param_5 + 1) = 0x200;
  }
  else {
    iVar1 = FUN_145477440(param_1,param_2);
    uVar5 = (ulonglong)*(byte *)((longlong)iVar1 + 0x79e + *(longlong *)(param_1 + 0x1228));
    uVar7 = (uint)*(ushort *)(&DAT_149df5720 + uVar6 * -2);
    if (*(int *)(param_1 + 0x1220) == 2) {
      uVar7 = (uint)*(ushort *)(&DAT_149df5720 + uVar6 * -2) +
              (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)bVar9 * -2);
    }
    *(uint *)((longlong)param_5 + 4) = *(ushort *)(&DAT_149df5520 + uVar5 * 2) + uVar7;
    *(uint *)(param_5 + 1) = *(ushort *)(&DAT_149df5720 + uVar5 * -2) + uVar7;
  }
  return;
}



// FUNCTION 1456780c0 FUN_1456780c0 body=475 status=ok
// SIG undefined FUN_1456780c0(void)

void FUN_1456780c0(longlong param_1,longlong param_2,char param_3,byte param_4,undefined4 param_5,
                  undefined4 param_6,longlong param_7,longlong param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  if (param_3 == '\x01') {
    iVar5 = *(int *)(param_1 + 0x2f698);
  }
  else if (param_3 == '\x02') {
    iVar5 = *(int *)(param_1 + 0x2f69c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2f6a0);
  }
  if ((iVar5 == -1) || (iVar5 = *(int *)(param_1 + 0x2a088 + (longlong)iVar5 * 4), iVar5 == -1)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x2e4f0) + 0x58 + (longlong)iVar5 * 0xe0;
  }
  lVar1 = param_2 + 0x6180;
  lVar3 = *(longlong *)(param_2 + 0x6410);
  uVar4 = **(undefined8 **)(param_2 + 0x6340);
  lVar9 = (longlong)param_3;
  piVar8 = (int *)(lVar9 * 0xb0 + param_1 + 0x2a028);
  lVar2 = lVar3 + lVar9 * 8;
  puVar6 = (undefined8 *)(param_9 + lVar9 * 0x30);
  FUN_14561c010(lVar1,puVar6,lVar7,param_5,param_6,piVar8,piVar8);
  FUN_1456a7180(param_1 + 0x29ee0,lVar1,uVar4,param_3,lVar2,param_5,param_6,lVar3 + 0x20);
  FUN_1456a71d0(lVar1,*(undefined4 *)(param_1 + 0x2a2f8),lVar2,param_7 + lVar9 * 4,
                param_8 + lVar9 * 4);
  if ((((*piVar8 == -1) || (piVar8[1] == -1)) || ((*piVar8 == 0x4000 && (piVar8[1] == 0x4000)))) &&
     (2 < param_4)) {
    FUN_14561bda0(param_1,param_2,*puVar6,*(undefined4 *)(lVar7 + 0x10),(int)param_3,param_4);
  }
  return;
}



// FUNCTION 1456782a0 FUN_1456782a0 body=1980 status=ok
// SIG undefined FUN_1456782a0(void)

void FUN_1456782a0(longlong param_1,longlong param_2,byte param_3,undefined4 param_4,
                  undefined4 param_5,longlong *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  short sVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 *local_190;
  undefined4 *local_188;
  longlong *local_180;
  undefined8 local_178;
  int *local_170;
  longlong local_168;
  undefined8 local_160;
  int local_158;
  int local_150;
  undefined4 local_148;
  byte local_138;
  short local_134;
  short sStack_132;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  int local_10c;
  longlong local_108;
  longlong local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98 [6];
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_f8 = param_7;
  uVar12 = (ulonglong)param_3;
  local_80 = 0;
  uStack_78 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = *(undefined4 *)(param_2 + 0x6520);
  uStack_b4 = *(undefined4 *)(param_2 + 0x6524);
  uStack_b0 = *(undefined4 *)(param_2 + 0x6528);
  uStack_ac = *(undefined4 *)(param_2 + 0x652c);
  lVar9 = (longlong)*(char *)(**(longlong **)(param_2 + 0x6340) + 8);
  local_12c = *(undefined4 *)(*(longlong *)(param_2 + 0x6410) + lVar9 * 8);
  local_130 = *(int *)(param_2 + 0x6460 + lVar9 * 4);
  local_138 = param_3;
  local_108 = lVar9;
  local_100 = FUN_14561b650(param_1);
  local_114 = (uint)(byte)(&DAT_149d549c0)[uVar12] << 2;
  local_10c = (uint)(byte)(&DAT_149d549b0)[uVar12] << 2;
  local_124 = *(undefined4 *)(param_2 + 0x6440);
  local_118 = *(undefined4 *)(*(longlong *)(param_2 + 0x6410) + lVar9 * 8);
  local_128 = *(undefined4 *)(*(longlong *)(param_2 + 0x6410) + 4 + lVar9 * 8);
  local_f0 = (undefined4 *)(param_2 + 0x141c8 + lVar9 * 4);
  local_110 = *local_f0;
  local_a8 = local_118;
  local_a4 = local_128;
  local_a0 = local_110;
  if (local_100 == 0) {
    local_e8 = local_80;
    uStack_e0 = CONCAT44(uStack_74,uStack_78);
  }
  else {
    local_e8 = *(undefined8 *)(param_2 + 0x61a0);
    uStack_e0 = *(undefined8 *)(param_2 + 25000);
    local_1a0 = 0;
    local_1a8 = param_5;
    local_d8 = *(undefined8 *)(param_2 + 0x6228);
    uStack_d0 = *(undefined8 *)(param_2 + 0x6230);
    local_c8 = *(undefined8 *)(param_2 + 0x62b0);
    uStack_c0 = *(undefined8 *)(param_2 + 0x62b8);
    FUN_1454793f0(param_2 + 0x6180,0,local_100,param_4);
  }
  if ((*(int *)(param_1 + 0xb46b8) == 0) || (*(int *)(param_1 + 0x2a2e8) == 0)) {
    iVar2 = *(int *)(param_1 + 0xb493c);
  }
  else {
    iVar2 = FUN_1455aac40(*(undefined4 *)(param_2 + 0x6470 + lVar9 * 4));
    iVar2 = (iVar2 + *(int *)(param_1 + 0xb493c)) / 2;
  }
  if ((*(int *)(param_1 + 0xb4774) == 0) || (0xb < param_3)) {
    iVar3 = iVar2;
    if (*(int *)(param_1 + 0xb4774) == 0) goto LAB_145678500;
  }
  else {
    bVar13 = (&DAT_149d54970)[uVar12];
    if ((byte)(&DAT_149d54960)[uVar12] <= (byte)(&DAT_149d54970)[uVar12]) {
      bVar13 = (&DAT_149d54960)[uVar12];
    }
    iVar3 = (4 - (uint)bVar13) * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
  }
  iVar2 = iVar3 + 2;
  if (4 < *(int *)(param_2 + 0x6494 + local_108 * 4) >>
          ((&DAT_149d54970)[uVar12] + (&DAT_149d54960)[uVar12] + '\x04' & 0x1fU)) {
    iVar2 = iVar3;
  }
  if (*(int *)(param_1 + 0x2e5bc) != 2) {
    piVar6 = (int *)(param_2 + 0x6498);
    lVar9 = 1;
    if (*(int *)(param_1 + 0x2a2e8) != 0) {
      do {
        if (*piVar6 < *(int *)(param_2 + 0x6494 + local_108 * 4) >> 3) {
          *(undefined2 *)(param_2 + local_108 * 4 + 0x141c8) = 0x7fff;
          *(undefined2 *)(param_2 + 0x141ca + local_108 * 4) = 0x7fff;
          *(undefined4 *)param_6 = 0x80008000;
          goto LAB_145678a28;
        }
        lVar9 = lVar9 + 1;
        piVar6 = piVar6 + 1;
      } while (lVar9 < 4);
    }
  }
LAB_145678500:
  FUN_1455aa900(param_2 + 0x6520,&local_12c);
  local_170 = (int *)CONCAT44(local_170._4_4_,1);
  local_178 = CONCAT44(local_178._4_4_,0x7fffffff);
  local_180 = param_6;
  local_120 = (longlong)local_130 * 4;
  local_134 = (short)(&local_a8)[local_130];
  _local_134 = CONCAT22((short)((int)(&local_a8)[local_130] >> 0x13),local_134 >> 3);
  local_190 = local_98;
  if (*(int *)(param_1 + 0xb46bc) == 0) {
    local_190 = (undefined4 *)0x0;
  }
  local_188 = &local_12c;
  local_198 = local_124;
  local_1a0 = CONCAT44(local_1a0._4_4_,*(undefined4 *)(param_1 + 0xb46b0));
  local_1a8 = iVar2;
  iVar3 = FUN_1455be8a0(param_1,param_2,uVar12,&local_134);
  bVar13 = local_138;
  if (*(int *)(param_1 + 0xb4778) != 0) {
    sVar7 = (short)local_118;
    sVar11 = local_a8._2_2_;
    if (((sVar7 != 0x7fff) && (local_a8._2_2_ != 0x7fff)) && (local_130 != 0)) {
      iVar10 = (int)sVar7 - (int)*(short *)((longlong)&local_a8 + local_120) >> 3;
      iVar8 = (int)local_a8._2_2_ - (int)*(short *)((longlong)&local_a8 + local_120 + 2) >> 3;
      if ((iVar10 != 0) || (iVar8 != 0)) {
        iVar1 = -iVar10;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        iVar10 = -iVar8;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        uVar4 = iVar10 + iVar1 + 1 >> 1;
        iVar8 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (0 < iVar8) {
          local_190 = local_98;
          local_170 = (int *)CONCAT44(local_170._4_4_,1);
          local_178 = CONCAT44(local_178._4_4_,0x7fffffff);
          _local_134 = CONCAT22((short)((int)local_118 >> 0x13),sVar7 >> 3);
          if (*(int *)(param_1 + 0xb46bc) == 0) {
            local_190 = (undefined4 *)0x0;
          }
          local_1a8 = iVar2;
          if (iVar2 <= 0xb - iVar8) {
            local_1a8 = 0xb - iVar8;
          }
          local_180 = &local_120;
          local_188 = &local_12c;
          local_198 = local_124;
          local_1a0 = CONCAT44(local_1a0._4_4_,*(undefined4 *)(param_1 + 0xb46b0));
          iVar8 = FUN_1455be8a0(param_1,param_2,local_138,&local_134);
          if (iVar8 < iVar3) {
            *(undefined4 *)param_6 = (undefined4)local_120;
            iVar3 = iVar8;
          }
        }
        sVar11 = (short)((uint)local_a8 >> 0x10);
      }
    }
    sVar7 = (short)local_128;
    if (((sVar7 != 0x7fff) && (local_a4._2_2_ != 0x7fff)) && (local_130 != 1)) {
      iVar10 = (int)sVar7 - (int)(short)local_118 >> 3;
      iVar8 = (int)local_a4._2_2_ - (int)sVar11 >> 3;
      if ((iVar10 != 0) || (iVar8 != 0)) {
        iVar1 = -iVar10;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        iVar10 = -iVar8;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        uVar4 = iVar10 + iVar1 + 1 >> 1;
        iVar8 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (0 < iVar8) {
          local_190 = local_98;
          _local_134 = CONCAT22((short)((int)local_128 >> 0x13),sVar7 >> 3);
          local_170 = (int *)CONCAT44(local_170._4_4_,1);
          local_178 = CONCAT44(local_178._4_4_,0x7fffffff);
          if (*(int *)(param_1 + 0xb46bc) == 0) {
            local_190 = (undefined4 *)0x0;
          }
          local_1a8 = iVar2;
          if (iVar2 <= 0xb - iVar8) {
            local_1a8 = 0xb - iVar8;
          }
          local_180 = &local_120;
          local_188 = &local_12c;
          local_198 = local_124;
          local_1a0 = CONCAT44(local_1a0._4_4_,*(undefined4 *)(param_1 + 0xb46b0));
          iVar8 = FUN_1455be8a0(param_1,param_2,local_138,&local_134);
          sVar7 = (short)local_128;
          if (iVar8 < iVar3) {
            *(undefined4 *)param_6 = (undefined4)local_120;
            iVar3 = iVar8;
          }
        }
      }
    }
    bVar13 = local_138;
    sVar11 = (short)local_110;
    if (sVar11 != 0x7fff) {
      if ((local_a0._2_2_ != 0x7fff) && (local_130 != 2)) {
        iVar10 = (int)sVar11 - (int)sVar7 >> 3;
        iVar8 = (int)local_a0._2_2_ - (int)local_a4._2_2_ >> 3;
        if ((iVar10 != 0) || (iVar8 != 0)) {
          iVar1 = -iVar8;
          if (-1 < iVar8) {
            iVar1 = iVar8;
          }
          iVar8 = -iVar10;
          if (-1 < iVar10) {
            iVar8 = iVar10;
          }
          uVar4 = iVar8 + iVar1 + 1 >> 1;
          iVar8 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          if (0 < iVar8) {
            local_170 = (int *)CONCAT44(local_170._4_4_,1);
            local_190 = local_98;
            local_178 = CONCAT44(local_178._4_4_,0x7fffffff);
            _local_134 = CONCAT22((short)((int)local_110 >> 0x13),sVar11 >> 3);
            if (*(int *)(param_1 + 0xb46bc) == 0) {
              local_190 = (undefined4 *)0x0;
            }
            local_180 = &local_120;
            local_1a8 = iVar2;
            if (iVar2 <= 0xb - iVar8) {
              local_1a8 = 0xb - iVar8;
            }
            local_188 = &local_12c;
            local_198 = local_124;
            local_1a0 = CONCAT44(local_1a0._4_4_,*(undefined4 *)(param_1 + 0xb46b0));
            iVar2 = FUN_1455be8a0(param_1,param_2,local_138,&local_134);
            if (iVar2 < iVar3) {
              *(undefined4 *)param_6 = (undefined4)local_120;
              iVar3 = iVar2;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0x6520) = local_b8;
  *(undefined4 *)(param_2 + 0x6524) = uStack_b4;
  *(undefined4 *)(param_2 + 0x6528) = uStack_b0;
  *(undefined4 *)(param_2 + 0x652c) = uStack_ac;
  if (iVar3 < 0x7fffffff) {
    local_188 = local_98;
    if (*(int *)(param_1 + 0xb46bc) == 0) {
      local_188 = (undefined4 *)0x0;
    }
    local_168 = param_2 + (local_108 + 0x1921) * 4;
    local_148 = *(undefined4 *)(param_1 + 0xb4918);
    local_150 = local_10c;
    local_158 = local_114;
    local_170 = &local_114;
    local_160 = 0;
    local_178 = *(undefined8 *)(param_2 + 0x64d8);
    local_190 = (undefined4 *)CONCAT44(local_190._4_4_,*(undefined4 *)(param_1 + 0xb46c0));
    local_198 = *(undefined4 *)(param_1 + 0xb46c4);
    local_1a8 = *(undefined4 *)(param_2 + 0x643c);
    local_1a0 = (ulonglong)bVar13 * 0x30 + 0xb4a48 + param_1;
    local_180 = (longlong *)(param_2 + 0x64a4);
    (**(code **)(param_1 + 0xb4998))(param_2,param_6,&local_12c,*(undefined4 *)(param_1 + 0x2a2f8));
  }
  local_1a8 = 0x6c;
  uVar5 = FUN_1455aa9b0(param_6,&local_12c,(longlong *)(param_2 + 0x64a4),
                        *(undefined8 *)(param_2 + 0x64d8));
  *local_f8 = uVar5;
  *local_f0 = (int)*param_6;
LAB_145678a28:
  if (local_100 != 0) {
    *(undefined8 *)(param_2 + 0x61a0) = local_e8;
    *(undefined8 *)(param_2 + 25000) = uStack_e0;
    *(undefined8 *)(param_2 + 0x6228) = local_d8;
    *(undefined8 *)(param_2 + 0x6230) = uStack_d0;
    *(undefined4 *)(param_2 + 0x62b0) = (undefined4)local_c8;
    *(undefined4 *)(param_2 + 0x62b4) = local_c8._4_4_;
    *(undefined4 *)(param_2 + 0x62b8) = (undefined4)uStack_c0;
    *(undefined4 *)(param_2 + 0x62bc) = uStack_c0._4_4_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 145678a70 FUN_145678a70 body=4300 status=ok
// SIG undefined FUN_145678a70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145678a70(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,
                  longlong *param_5,undefined4 *param_6,int *param_7,int *param_8,undefined8 param_9
                  ,undefined4 *param_10,longlong param_11,int param_12,int param_13,uint *param_14,
                  longlong param_15,longlong param_16,undefined4 **param_17,uint *param_18,
                  longlong *param_19,undefined8 *param_20)

{
  uint *puVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  byte bVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
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
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_6258 [32];
  uint *local_6238;
  undefined4 **local_6230;
  uint *local_6228;
  uint *local_6220;
  undefined8 local_6218;
  byte local_6210;
  undefined4 local_6208;
  undefined8 local_6200;
  char local_61f8;
  byte local_61f7;
  uint local_61f4;
  uint local_61f0;
  uint local_61ec;
  undefined4 local_61e8;
  int local_61e0 [2];
  int *local_61d8;
  uint local_61d0;
  uint local_61cc;
  longlong local_61c8;
  ulonglong local_61c0;
  uint local_61b8 [2];
  longlong local_61b0;
  undefined4 *local_61a8;
  longlong local_61a0;
  longlong *local_6198;
  undefined1 *local_6190;
  longlong local_6188;
  int *local_6180;
  longlong local_6178;
  undefined4 **local_6170;
  longlong local_6168;
  undefined8 *local_6160;
  longlong local_6158;
  longlong local_6148;
  longlong *local_6140;
  undefined4 *local_6138;
  undefined8 local_6130;
  longlong local_6128;
  undefined4 *local_6120;
  longlong local_6118;
  undefined4 *local_6110;
  longlong local_6108;
  int *local_6100;
  undefined8 local_60f8;
  undefined8 uStack_60f0;
  undefined8 local_60e8;
  undefined8 uStack_60e0;
  undefined8 local_60d8;
  undefined8 uStack_60d0;
  undefined8 local_60c8;
  undefined8 uStack_60c0;
  undefined8 local_60b8;
  undefined8 uStack_60b0;
  undefined8 local_60a8;
  undefined8 uStack_60a0;
  undefined4 local_6098 [4];
  undefined8 local_6088 [4];
  undefined1 local_6068 [24576];
  ulonglong local_68;
  undefined8 uStack_48;
  
  uStack_48 = 0x145678a8f;
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_6258;
  lVar17 = param_2 + 0x6180;
  puVar18 = (undefined4 *)0x0;
  local_6198 = param_5;
  local_6120 = param_6;
  local_6180 = param_7;
  local_6100 = param_8;
  local_6130 = param_9;
  local_6110 = param_10;
  local_6168 = param_15;
  local_6118 = param_16;
  local_6170 = param_17;
  local_6140 = param_19;
  local_6160 = param_20;
  local_61d8 = param_4;
  local_61f7 = (byte)param_3;
  local_61c8 = **(longlong **)(param_2 + 0x6340);
  local_61b0 = *(longlong *)(param_2 + 0x6410);
  local_61a0 = param_11;
  bVar11 = *(byte *)(local_61c8 + 1);
  local_61c0 = (ulonglong)bVar11;
  local_61f8 = *(char *)(local_61c8 + 9);
  lVar23 = (longlong)*(char *)(local_61c8 + 8);
  lVar24 = (ulonglong)bVar11 * 0x10 + param_11;
  local_61e0[0] = (int)*(char *)(local_61c8 + 8);
  local_61e0[1] = 0;
  if (-1 < local_61f8) {
    local_61e0[1] = (int)local_61f8;
  }
  local_61cc = 0;
  local_6108 = 0x7fffffffffffffff;
  local_61a8 = (undefined4 *)0x0;
  local_6158 = 0;
  local_61ec = (uint)CONCAT71((int7)(param_3 >> 8),4);
  local_60f8 = 0;
  uStack_60f0 = 0;
  local_60e8 = 0;
  uStack_60e0 = 0;
  local_60d8 = 0;
  uStack_60d0 = 0;
  local_60c8 = 0;
  uStack_60c0 = 0;
  local_60b8 = 0;
  uStack_60b0 = 0;
  local_60a8 = 0;
  uStack_60a0 = 0;
  uVar7 = 0;
  if (*(int *)(param_1 + 0xb47ac) != 0) {
    uVar7 = (param_12 + param_13 >> ((&DAT_149d54980)[param_3 & 0xff] & 0x1f)) +
            *(int *)(param_1 + 0x2e4c4) & 1;
  }
  local_61b8[0] = 0;
  local_6188 = 0x7fffffffffffffff;
  local_6178 = 0;
  local_6128 = 0;
  local_6190 = local_6068;
  if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) != 0) {
    local_6190 = (undefined1 *)((ulonglong)local_6190 >> 1);
  }
  if (uVar7 != 0) {
    lVar25 = *(longlong *)(param_2 + 0x6350);
    bVar9 = 4;
    if ((lVar25 != 0) && ('\0' < *(char *)(lVar25 + 8))) {
      bVar9 = *(byte *)(lVar25 + 7);
    }
    lVar25 = *(longlong *)(param_2 + 0x6348);
    bVar14 = 4;
    if ((lVar25 != 0) && (bVar14 = 4, '\0' < *(char *)(lVar25 + 8))) {
      bVar14 = *(byte *)(lVar25 + 7);
    }
    if ((bVar11 != 0xd) || (bVar9 == bVar14)) {
      local_61ec = (uint)bVar9;
    }
  }
  if ('\0' < local_61f8) {
    if ((*(int *)(lVar24 + lVar23 * 4) == -0x7fff8000) ||
       (*(int *)(lVar24 + (longlong)local_61e0[1] * 4) == -0x7fff8000)) goto LAB_1456799ef;
    if (*(int *)(param_1 + 0xb47a8) != 0) {
      local_61ec = local_61ec & 0xff;
      bVar9 = *(byte *)(lVar23 + param_15 + local_61c0 * 4);
      if (bVar9 == *(byte *)(param_15 + local_61e0[1] + local_61c0 * 4)) {
        local_61ec = (uint)bVar9;
      }
    }
  }
  if (bVar11 == 0xd) {
    if (local_61f8 < '\x01') {
      local_6228 = &local_61f0;
      local_6230 = (undefined4 **)&local_61f4;
      local_6238 = (uint *)CONCAT44(local_6238._4_4_,param_13);
      FUN_1456782a0(param_1,param_2,param_3 & 0xff,param_12);
      if (local_61f4 == 0x80008000) goto LAB_1456799ef;
      lVar23 = (longlong)local_61e0[0];
      *(uint *)(**(longlong **)(param_2 + 0x6340) + 0x18) = local_61f4;
      *(uint *)(lVar24 + lVar23 * 4) = local_61f4;
      param_14[lVar23] = local_61f4;
      if ((((*(int *)(param_1 + 0xb4304) == 0) && (local_61f4 != 0)) &&
          ((iVar5 = *(int *)(param_11 + 0xa0 + lVar23 * 4), iVar5 == 0 || (iVar5 == -0x7fff8000))))
         && ((iVar5 = *(int *)(param_11 + 0xb0 + lVar23 * 4), iVar5 == 0 || (iVar5 == -0x7fff8000)))
         ) {
        iVar19 = (int)(local_61f0 + ((int)local_61f0 >> 0x1f & 7U)) >> 3;
        iVar5 = 1;
        if (1 < iVar19) {
          iVar5 = iVar19;
        }
        *local_61d8 = *local_61d8 + iVar5;
      }
      else {
        *local_61d8 = *local_61d8 + local_61f0;
      }
    }
    else {
      lVar25 = (longlong)local_61e0[1];
      puVar1 = (uint *)(lVar24 + lVar23 * 4);
      *puVar1 = param_14[lVar23];
      *(uint *)(lVar24 + lVar25 * 4) = param_14[lVar25];
      if (local_61f7 < *(byte *)(param_1 + 0xb46ec)) {
        local_6238._0_4_ = 0x6c;
        iVar5 = FUN_1455aa9b0(puVar1,*(longlong *)(param_2 + 0x6410) + lVar23 * 8,param_2 + 0x64a4,
                              *(undefined8 *)(param_2 + 0x64d8));
        local_6238 = (uint *)CONCAT44(local_6238._4_4_,0x6c);
        iVar19 = FUN_1455aa9b0(lVar24 + lVar25 * 4,*(longlong *)(param_2 + 0x6410) + lVar25 * 8,
                               param_2 + 0x64a4,*(undefined8 *)(param_2 + 0x64d8));
        *local_61d8 = *local_61d8 + iVar19 + iVar5;
        param_11 = local_61a0;
      }
      else {
        local_6220 = &local_61f0;
        local_6228 = param_14;
        local_6230 = (undefined4 **)CONCAT44(local_6230._4_4_,param_13);
        local_6238 = (uint *)CONCAT44(local_6238._4_4_,param_12);
        FUN_1456766e0(param_1,param_2,param_3 & 0xff,lVar24);
        *local_61d8 = *local_61d8 + local_61f0;
        param_11 = local_61a0;
      }
    }
  }
  uVar12 = local_61c0;
  puVar8 = puVar18;
  do {
    lVar23 = (longlong)(int)puVar8;
    uVar7 = *(uint *)(lVar24 + (longlong)local_61e0[lVar23] * 4);
    (&local_61e8)[lVar23] = uVar7;
    if ((char)uVar12 != '\r') {
      uVar21 = *(int *)(param_2 + 0x6374) + 0x4e0;
      uVar15 = *(int *)(param_2 + 0x6370) - 0x4e0;
      iVar5 = *(int *)(param_2 + 0x6368) + -0x4e0;
      iVar19 = (int)(short)(uVar7 >> 0x10);
      if ((iVar5 <= iVar19) &&
         (iVar6 = *(int *)(param_2 + 0x636c) + 0x4e0, iVar5 = iVar19, iVar6 < iVar19)) {
        iVar5 = iVar6;
      }
      *(short *)((longlong)&local_61e8 + lVar23 * 4 + 2) = (short)iVar5;
      uVar12 = local_61c0;
      uVar7 = (uint)*(short *)(&local_61e8 + lVar23);
      if (((int)uVar15 <= (int)uVar7) && (uVar15 = uVar7, (int)uVar21 < (int)uVar7)) {
        uVar15 = uVar21;
      }
      uVar7 = uVar15 & 0xffff;
      *(short *)(&local_61e8 + lVar23) = (short)uVar15;
    }
    iVar5 = (int)(short)uVar7 >> 3;
    if ((((iVar5 < *(int *)(param_2 + 0x6528)) || (*(int *)(param_2 + 0x652c) < iVar5)) ||
        (iVar5 = (int)*(short *)((longlong)&local_61e8 + lVar23 * 4 + 2) >> 3,
        iVar5 < *(int *)(param_2 + 0x6520))) || (*(int *)(param_2 + 0x6524) < iVar5))
    goto LAB_1456799ef;
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
    *(undefined4 *)(local_61c8 + 0xc + lVar23 * 4) = (&local_61e8)[lVar23];
  } while ((int)uVar7 < (int)(('\0' < local_61f8) + 1));
  lVar23 = 3;
  puVar20 = local_6088;
  puVar8 = (undefined4 *)(param_2 + 0x6198);
  puVar16 = local_6098;
  do {
    *puVar20 = *(undefined8 *)(puVar8 + -2);
    puVar20 = puVar20 + 1;
    uVar26 = *puVar8;
    puVar8 = puVar8 + 0x22;
    *puVar16 = uVar26;
    lVar23 = lVar23 + -1;
    puVar16 = puVar16 + 1;
  } while (lVar23 != 0);
  if ((((*(int *)(param_1 + 0xb4304) == 0) && ((char)local_61c0 == '\r')) &&
      ((lVar23 = (longlong)local_61e0[0], *(int *)(lVar24 + lVar23 * 4) != 0 &&
       ((iVar5 = *(int *)(param_11 + 0xa0 + lVar23 * 4), iVar5 == 0 || (iVar5 == -0x7fff8000))))))
     && ((iVar5 = *(int *)(param_11 + 0xb0 + lVar23 * 4), iVar5 == 0 || (iVar5 == -0x7fff8000)))) {
    uVar12 = (ulonglong)*(byte *)(lVar23 + 0x20 + local_61b0);
    iVar5 = *(int *)(param_1 + 0xcbeb0 + (local_61c0 + uVar12 * 4) * 4);
    iVar19 = *(int *)(param_1 + 0xcbed8 + uVar12 * 0x10);
    if (iVar19 <= iVar5) {
      iVar5 = iVar19;
    }
    *local_61d8 = *local_61d8 + iVar5;
    iVar5 = *local_61d8;
  }
  else {
    *local_61d8 = *local_61d8 +
                  *(int *)(param_1 + 0xcbeb0 +
                          (local_61c0 +
                          (ulonglong)*(byte *)((longlong)local_61e0[0] + 0x20 + local_61b0) * 4) * 4
                          );
    iVar5 = *local_61d8;
  }
  if (((longlong)param_18 < (longlong)iVar5 * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >> 9) &&
     (*(char *)(local_61c8 + 1) != '\n')) goto LAB_1456799ef;
  local_61e8 = 0;
  if (((*(byte *)(local_61c8 + 0xc) & 0xf) != 0) ||
     (local_61f4 = 1, (*(byte *)(local_61c8 + 0xe) & 0xf) != 0)) {
    local_61f4 = 0;
  }
  if ('\0' < local_61f8) {
    if (((*(byte *)(local_61c8 + 0x10) & 0xf) != 0) ||
       (uVar7 = 1, (*(byte *)(local_61c8 + 0x12) & 0xf) != 0)) {
      uVar7 = 0;
    }
    local_61f4 = uVar7 & local_61f4;
  }
  *local_6160 = 0x7fffffffffffffff;
  local_6160[1] = 0x7fffffffffffffff;
  local_6160[2] = 0x7fffffffffffffff;
  local_6160[3] = 0x7fffffffffffffff;
  cVar4 = (char)local_61ec;
  if (*(char *)(param_1 + 0x2a3fc) == '\x03') {
LAB_145679573:
    local_61b0 = local_6158;
  }
  else {
    if (*(uint *)(param_2 + 0x6480) < *(uint *)(param_1 + 0xb47cc)) {
      cVar4 = '\0';
      goto LAB_145679573;
    }
    if (cVar4 != '\x04') goto LAB_145679573;
    local_61b0 = local_6158;
    puVar8 = puVar18;
    puVar16 = puVar18;
    do {
      *(char *)(local_61c8 + 7) = (char)puVar18;
      local_6148 = 0x7fffffffffffffff;
      local_61d0 = 0;
      iVar5 = FUN_14561b570(param_1,lVar17);
      lVar23 = (longlong)iVar5 * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >> 9;
      uVar7 = (uint)puVar18;
      if (((int)uVar7 < 1) || (local_61f4 == 0)) {
        local_61f0 = 0;
        local_6138 = (undefined4 *)0x0;
        if ((0 < (int)uVar7) &&
           ((*(int *)(param_1 + 0xb4890) != 0 &&
            ((*(uint *)(param_1 + 0xb4894) >> (uVar7 & 0x1f) & 1) != 0)))) goto LAB_145679504;
        if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
          uVar15 = local_61cc;
          if (uVar7 != 0) {
LAB_145679271:
            if (uVar15 == 0) goto LAB_145679280;
          }
LAB_1456792c1:
          *(undefined8 *)(param_2 + 0x6190) = local_6088[0];
          *(undefined4 *)(param_2 + 0x6198) = local_6098[0];
          *(undefined8 *)(param_2 + 0x6218) = local_6088[1];
          *(undefined4 *)(param_2 + 0x6220) = local_6098[1];
          *(undefined8 *)(param_2 + 0x62a0) = local_6088[2];
          *(undefined4 *)(param_2 + 0x62a8) = local_6098[2];
        }
        else {
          if (*(char *)(param_1 + 0x2a3fc) == *(char *)(local_61c8 + 7)) goto LAB_1456792c1;
          uVar15 = local_61f4;
          if (uVar7 == 0) goto LAB_145679271;
LAB_145679280:
          *(undefined1 **)(param_2 + 0x6190) = local_6190;
          *(undefined4 *)(param_2 + 0x6198) = 0x40;
          *(undefined4 *)(param_2 + 0x6220) = 0x40;
          *(undefined4 *)(param_2 + 0x62a8) = 0x40;
          *(undefined1 **)(param_2 + 0x6218) = local_6190 + 0x1000;
          *(undefined1 **)(param_2 + 0x62a0) = local_6190 + 0x2000;
        }
        FUN_145479060(lVar17,param_12,param_13,local_61f7);
        local_6220 = (uint *)&local_6148;
        local_6228 = &local_61d0;
        local_6230 = &local_6138;
        local_6238 = &local_61f0;
        FUN_145671530(param_1,local_61f7,param_2,lVar17);
        lVar24 = ((longlong)(int)local_61f0 * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >> 9) +
                 ((longlong)local_6138 << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f));
        lVar23 = lVar24 + lVar23;
        local_6160[(int)uVar7] = lVar24;
        lVar25 = local_6160[3];
        if (lVar23 <= (longlong)local_6160[3]) {
          lVar25 = lVar23;
        }
        local_6160[3] = lVar25;
        if (*(char *)(param_1 + 0x2a3fc) != '\x04') {
          lVar23 = lVar24;
        }
        lVar24 = *local_6140;
        if (*local_6140 <= lVar23) {
          lVar24 = lVar23;
        }
        *local_6140 = lVar24;
        if (uVar7 != 0) goto LAB_1456791ed;
        if (local_61f4 != 0) {
          puVar8 = (undefined4 *)(ulonglong)local_61f0;
          puVar16 = local_6138;
        }
        if (((*(int *)(param_1 + 0xb4824) == 0) || (0x7ffffffffffffffe < (longlong)param_18)) ||
           (lVar23 / 2 <= (longlong)param_18)) goto LAB_14567942b;
        *(undefined8 *)(param_2 + 0x6190) = local_6088[0];
        *(undefined4 *)(param_2 + 0x6198) = local_6098[0];
        goto LAB_1456799b1;
      }
      lVar24 = ((longlong)(int)puVar8 * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >> 9) +
               ((longlong)puVar16 << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f));
      lVar23 = lVar24 + lVar23;
      local_6160[(int)uVar7] = lVar24;
      lVar25 = local_6160[3];
      if (lVar23 <= (longlong)local_6160[3]) {
        lVar25 = lVar23;
      }
      local_6160[3] = lVar25;
      if (*(char *)(param_1 + 0x2a3fc) != '\x04') {
        lVar23 = lVar24;
      }
      lVar24 = *local_6140;
      if (*local_6140 <= lVar23) {
        lVar24 = lVar23;
      }
      *local_6140 = lVar24;
LAB_1456791ed:
      if (lVar23 < local_6108) {
LAB_14567942b:
        local_61ec = (uint)*(byte *)(local_61c8 + 7);
        bVar2 = true;
        local_6108 = lVar23;
        if (((*(char *)(param_1 + 0x2a3fc) != '\x04') || (uVar7 == 0)) || (local_61f4 != 0))
        goto LAB_145679206;
        local_61cc = (uint)(local_61cc == 0);
LAB_145679480:
        local_61b0 = *(longlong *)(param_2 + 0x1415c);
        local_60f8 = *(undefined8 *)(param_2 + 0x14168);
        uStack_60f0 = *(undefined8 *)(param_2 + 0x14170);
        local_61b8[0] = local_61d0;
        local_6188 = local_6148;
        local_60e8 = *(undefined8 *)(param_2 + 0x14178);
        uStack_60e0 = *(undefined8 *)(param_2 + 0x14180);
        local_61a8 = (undefined4 *)(ulonglong)*(uint *)(param_2 + 0x14164);
        local_61e8 = 1;
        local_60d8 = *(undefined8 *)(param_2 + 0x14188);
        uStack_60d0 = *(undefined8 *)(param_2 + 0x14190);
        local_60c8 = *(undefined8 *)(param_2 + 0x14198);
        uStack_60c0 = *(undefined8 *)(param_2 + 0x141a0);
        local_60b8 = *(undefined8 *)(param_2 + 0x141a8);
        uStack_60b0 = *(undefined8 *)(param_2 + 0x141b0);
        local_60a8 = *(undefined8 *)(param_2 + 0x141b8);
        uStack_60a0 = *(undefined8 *)(param_2 + 0x141c0);
        local_61a0 = local_6108;
      }
      else {
        bVar2 = false;
LAB_145679206:
        if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
          if (bVar2) goto LAB_145679480;
        }
        else if (*(char *)(param_1 + 0x2a3fc) == *(char *)(local_61c8 + 7)) goto LAB_145679480;
      }
LAB_145679504:
      puVar18 = (undefined4 *)(ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < 3);
    *(undefined8 *)(param_2 + 0x6190) = local_6088[0];
    *(undefined4 *)(param_2 + 0x6198) = local_6098[0];
    *(undefined8 *)(param_2 + 0x6218) = local_6088[1];
    *(undefined4 *)(param_2 + 0x6220) = local_6098[1];
    *(undefined8 *)(param_2 + 0x62a0) = local_6088[2];
    *(undefined4 *)(param_2 + 0x62a8) = local_6098[2];
    cVar4 = (char)local_61ec;
  }
  lVar23 = local_61a0;
  puVar18 = (undefined4 *)(param_2 + 0x6198);
  iVar5 = 0;
  cVar10 = *(char *)(param_1 + 0x2a3fc);
  if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
    cVar10 = cVar4;
  }
  *(char *)(local_61c8 + 7) = cVar10;
  if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
    iVar5 = FUN_14561b570(param_1,lVar17);
  }
  if (local_61e8 == 0) {
    FUN_145479060(lVar17,param_12,param_13,local_61f7);
    local_6220 = (uint *)&local_6188;
    local_6228 = local_61b8;
    local_6230 = &local_61a8;
    local_6238 = &local_61e8;
    FUN_145671530(param_1,local_61f7,param_2,lVar17);
    lVar17 = *(longlong *)(param_2 + 0x1415c);
    puVar8 = (undefined4 *)(ulonglong)*(uint *)(param_2 + 0x14164);
    uVar26 = *(undefined4 *)(param_2 + 0x14168);
    uVar27 = *(undefined4 *)(param_2 + 0x1416c);
    uVar28 = *(undefined4 *)(param_2 + 0x14170);
    uVar29 = *(undefined4 *)(param_2 + 0x14174);
    uVar30 = *(undefined4 *)(param_2 + 0x14178);
    uVar31 = *(undefined4 *)(param_2 + 0x1417c);
    uVar32 = *(undefined4 *)(param_2 + 0x14180);
    uVar33 = *(undefined4 *)(param_2 + 0x14184);
    uVar34 = *(undefined4 *)(param_2 + 0x14188);
    uVar35 = *(undefined4 *)(param_2 + 0x1418c);
    uVar36 = *(undefined4 *)(param_2 + 0x14190);
    uVar37 = *(undefined4 *)(param_2 + 0x14194);
    uVar38 = *(undefined4 *)(param_2 + 0x14198);
    uVar39 = *(undefined4 *)(param_2 + 0x1419c);
    uVar40 = *(undefined4 *)(param_2 + 0x141a0);
    uVar41 = *(undefined4 *)(param_2 + 0x141a4);
    uVar42 = *(undefined4 *)(param_2 + 0x141a8);
    uVar43 = *(undefined4 *)(param_2 + 0x141ac);
    uVar44 = *(undefined4 *)(param_2 + 0x141b0);
    uVar45 = *(undefined4 *)(param_2 + 0x141b4);
    uVar46 = *(undefined4 *)(param_2 + 0x141b8);
    uVar47 = *(undefined4 *)(param_2 + 0x141bc);
    uVar48 = *(undefined4 *)(param_2 + 0x141c0);
    uVar49 = *(undefined4 *)(param_2 + 0x141c4);
    lVar23 = ((longlong)local_61a8 << ((byte)*(undefined4 *)(param_2 + 0x6448) & 0x3f)) +
             ((longlong)(int)(local_61e8 + iVar5) * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >>
             9);
  }
  else {
    if (local_61cc != 0) {
      lVar17 = 3;
      puVar8 = puVar18;
      puVar13 = local_6190;
      do {
        *(undefined1 **)(puVar8 + -2) = puVar13;
        puVar13 = puVar13 + 0x1000;
        *puVar8 = 0x40;
        puVar8 = puVar8 + 0x22;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    lVar23 = ((longlong)iVar5 * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >> 9) + lVar23;
    puVar8 = local_61a8;
    uVar26 = (undefined4)local_60f8;
    uVar27 = local_60f8._4_4_;
    uVar28 = (undefined4)uStack_60f0;
    uVar29 = uStack_60f0._4_4_;
    uVar30 = (undefined4)local_60e8;
    uVar31 = local_60e8._4_4_;
    uVar32 = (undefined4)uStack_60e0;
    uVar33 = uStack_60e0._4_4_;
    uVar34 = (undefined4)local_60d8;
    uVar35 = local_60d8._4_4_;
    uVar36 = (undefined4)uStack_60d0;
    uVar37 = uStack_60d0._4_4_;
    uVar38 = (undefined4)local_60c8;
    uVar39 = local_60c8._4_4_;
    uVar40 = (undefined4)uStack_60c0;
    uVar41 = uStack_60c0._4_4_;
    uVar42 = (undefined4)local_60b8;
    uVar43 = local_60b8._4_4_;
    uVar44 = (undefined4)uStack_60b0;
    uVar45 = uStack_60b0._4_4_;
    uVar46 = (undefined4)local_60a8;
    uVar47 = local_60a8._4_4_;
    uVar48 = (undefined4)uStack_60a0;
    uVar49 = uStack_60a0._4_4_;
    lVar17 = local_61b0;
  }
  bVar11 = local_61f7;
  uVar22 = SUB84(puVar8,0);
  lVar24 = local_61c0 * 4;
  if (local_61f8 < '\x01') {
    *(undefined1 *)(lVar24 + local_61e0[0] + local_6168) = *(undefined1 *)(local_61c8 + 7);
  }
  if (((*(int *)(param_1 + 0xb47a8) != 0) && ('\0' < local_61f8)) &&
     ((*(int *)(local_6118 + (local_61e0[0] + lVar24) * 4) != 0 &&
      (*(int *)(local_6118 + (local_61e0[1] + lVar24) * 4) != 0)))) {
    uVar22 = 0x1010101;
    local_6158 = 0x101010101010101;
    lVar17 = 0x101010101010101;
  }
  if (((*(int *)(param_1 + 0xb4824) == 0) || (0x7ffffffffffffffe < (longlong)param_18)) ||
     (lVar23 / 2 <= (longlong)param_18)) {
    if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
      *local_61d8 = *local_61d8 + iVar5;
    }
    *(undefined4 *)(param_2 + 0x14168) = uVar26;
    *(undefined4 *)(param_2 + 0x1416c) = uVar27;
    *(undefined4 *)(param_2 + 0x14170) = uVar28;
    *(undefined4 *)(param_2 + 0x14174) = uVar29;
    *(undefined4 *)(param_2 + 0x14178) = uVar30;
    *(undefined4 *)(param_2 + 0x1417c) = uVar31;
    *(undefined4 *)(param_2 + 0x14180) = uVar32;
    *(undefined4 *)(param_2 + 0x14184) = uVar33;
    *(undefined4 *)(param_2 + 0x14188) = uVar34;
    *(undefined4 *)(param_2 + 0x1418c) = uVar35;
    *(undefined4 *)(param_2 + 0x14190) = uVar36;
    *(undefined4 *)(param_2 + 0x14194) = uVar37;
    *(undefined4 *)(param_2 + 0x14198) = uVar38;
    *(undefined4 *)(param_2 + 0x1419c) = uVar39;
    *(undefined4 *)(param_2 + 0x141a0) = uVar40;
    *(undefined4 *)(param_2 + 0x141a4) = uVar41;
    *(undefined4 *)(param_2 + 0x141a8) = uVar42;
    *(undefined4 *)(param_2 + 0x141ac) = uVar43;
    *(undefined4 *)(param_2 + 0x141b0) = uVar44;
    *(undefined4 *)(param_2 + 0x141b4) = uVar45;
    *(longlong *)(param_2 + 0x1415c) = lVar17;
    *(undefined4 *)(param_2 + 0x141b8) = uVar46;
    *(undefined4 *)(param_2 + 0x141bc) = uVar47;
    *(undefined4 *)(param_2 + 0x141c0) = uVar48;
    *(undefined4 *)(param_2 + 0x141c4) = uVar49;
    *(undefined4 *)(param_2 + 0x14164) = uVar22;
    if ((local_61b8[0] != 0) && (*(int *)(param_2 + 0x63f4) == 0)) {
      *(undefined4 *)(param_2 + 0x6940) = 1;
      iVar5 = 0;
      *local_6110 = 1;
      if (*(longlong *)(param_2 + 0x6350) == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = (int)*(char *)(*(longlong *)(param_2 + 0x6350) + 3);
      }
      if (*(longlong *)(param_2 + 0x6348) != 0) {
        iVar5 = (int)*(char *)(*(longlong *)(param_2 + 0x6348) + 3);
      }
      *local_61d8 = *local_61d8 +
                    (uint)*(ushort *)
                           (&DAT_149df5720 +
                           (ulonglong)
                           *(byte *)((longlong)(iVar5 + iVar19) + 0x7af +
                                    *(longlong *)(param_1 + 0x2b108)) * -2);
      *local_6198 = local_6188;
LAB_145679ae1:
      if (local_61f8 < '\x01') {
        *(undefined4 *)(local_6118 + (local_61e0[0] + lVar24) * 4) = *local_6120;
      }
      *(undefined8 *)(param_2 + 0x6190) = local_6088[0];
      *puVar18 = local_6098[0];
      *(undefined8 *)(param_2 + 0x6218) = local_6088[1];
      *(undefined4 *)(param_2 + 0x6220) = local_6098[1];
      *(undefined8 *)(param_2 + 0x62a0) = local_6088[2];
      *(undefined4 *)(param_2 + 0x62a8) = local_6098[2];
      goto LAB_1456799ef;
    }
    uVar12 = (ulonglong)local_61f7;
    local_61a8 = (undefined4 *)0x7fffffffffffffff;
    FUN_14565fec0(param_2,uVar12,0);
    local_6230 = &local_6110;
    if (local_6170 != (undefined4 **)0x0) {
      local_6230 = local_6170;
    }
    if ((*(int *)(param_1 + 0xb4734) == 1) || (*(int *)(param_2 + 0x63f4) != 0)) {
      local_6210 = (&DAT_149d54b30)[uVar12];
      if ((byte)(&DAT_149d54b40)[*(int *)(param_1 + 0x2a318)] <= (byte)(&DAT_149d54b30)[uVar12]) {
        local_6210 = (&DAT_149d54b40)[*(int *)(param_1 + 0x2a318)];
      }
      local_6200 = local_6130;
      *(byte *)(**(longlong **)(param_2 + 0x6340) + 2) = local_6210;
      local_6208 = *(undefined4 *)(param_1 + 0xb486c);
      local_6238 = &local_61e8;
      local_6218 = CONCAT71(local_6218._1_7_,bVar11);
      local_6220 = (uint *)((ulonglong)local_6220 & 0xffffffff00000000);
      local_6228 = param_18;
      FUN_145673300(param_1,param_2,local_6180,&local_6178);
    }
    else {
      local_6218 = local_6130;
      local_6220 = (uint *)CONCAT71(local_6220._1_7_,bVar11);
      local_6238 = &local_61e8;
      local_6228 = param_18;
      FUN_1456734e0(param_1,param_2,local_6180,&local_6178);
    }
    piVar3 = local_6100;
    if (*local_6180 != 0x7fffffff) {
      *local_61d8 = *local_61d8 + *local_6180;
      *local_6198 = *local_6198 + local_6178;
      bVar11 = (byte)*(undefined4 *)(param_2 + 0x6448);
      lVar23 = ((longlong)*local_61d8 * (longlong)*(int *)(param_2 + 0x644c) + 0x100 >> 9) +
               (*local_6198 << (bVar11 & 0x3f));
      lVar17 = (longlong)*local_6170 << (bVar11 & 0x3f);
      if (lVar23 < lVar17) {
        lVar17 = lVar23;
      }
      local_6220 = (uint *)((longlong)param_18 - lVar17);
      local_6228 = (uint *)CONCAT71(local_6228._1_7_,local_61f7);
      local_6230 = &local_61a8;
      local_6238 = &local_61d0;
      iVar5 = FUN_1456755d0(param_1,param_2,local_6100,&local_6128);
      if (iVar5 != 0) {
        *local_6170 = (undefined4 *)((longlong)*local_6170 + (longlong)local_61a8);
        *local_61d8 = *local_61d8 + *piVar3;
        *local_6198 = *local_6198 + local_6128;
        if ((local_61e8 == 0) || (uVar26 = 1, local_61d0 == 0)) {
          uVar26 = 0;
        }
        *local_6120 = uVar26;
        goto LAB_145679ae1;
      }
    }
    *local_61d8 = 0x7fffffff;
    *local_6198 = 0x7fffffffffffffff;
  }
  *(undefined8 *)(param_2 + 0x6190) = local_6088[0];
  *puVar18 = local_6098[0];
LAB_1456799b1:
  *(undefined8 *)(param_2 + 0x6218) = local_6088[1];
  *(undefined4 *)(param_2 + 0x6220) = local_6098[1];
  *(undefined8 *)(param_2 + 0x62a0) = local_6088[2];
  *(undefined4 *)(param_2 + 0x62a8) = local_6098[2];
LAB_1456799ef:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_6258);
}



// FUNCTION 145679b50 FUN_145679b50 body=498 status=ok
// SIG undefined FUN_145679b50(void)

void FUN_145679b50(longlong param_1,longlong param_2,byte param_3,longlong *param_4,
                  undefined8 param_5,char param_6,char param_7,char param_8)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  bVar1 = (&DAT_149d54990)[param_3];
  iVar3 = *(int *)(param_1 + 0x2e69c);
  bVar2 = (&DAT_149d549a0)[param_3];
  if (*param_4 != 0x7fffffffffffffff) {
    if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) == 0) {
      uVar4 = FUN_1455ffcc0(param_1,param_5,param_3);
      uVar5 = FUN_1455ffcc0(param_1,param_2 + 0x2018,param_3);
    }
    else {
      uVar4 = FUN_1455ffd60(param_1,param_5,param_3,*(undefined4 *)(param_2 + 0x63f0));
      uVar5 = FUN_1455ffd60(param_1,param_2 + 0x2018,param_3,*(undefined4 *)(param_2 + 0x63f0));
    }
    uVar4 = uVar4 / ((uint)bVar2 * (uint)bVar1);
    uVar9 = (ulonglong)uVar5 / (ulonglong)((uint)bVar2 * (uint)bVar1);
    if (iVar3 == 2) {
      uVar5 = 0xfa;
      if (*(int *)(param_1 + 0x2e56c) == 2) {
        uVar6 = (uint)(longlong)(((double)*(int *)(param_1 + 0xb63b0) / 250.0) * 250.0);
        if (param_6 == '\0') {
          uVar5 = uVar6 * 2;
          if (param_8 == '\0') {
            uVar5 = uVar6 * 10;
          }
        }
        else {
          uVar5 = uVar6;
          if ('\0' < param_7) {
            uVar5 = uVar6 * 2;
          }
        }
      }
    }
    else {
      uVar5 = 0x7d;
    }
    uVar8 = (uint)uVar9;
    uVar6 = uVar4;
    if (uVar8 < uVar4) {
      uVar6 = uVar8;
    }
    if (uVar6 <= uVar5) {
      if (uVar4 < uVar8) {
        uVar4 = (uVar8 - uVar4) * 2;
      }
      else {
        uVar4 = uVar4 - uVar8 >> 1;
      }
      if (uVar8 == 0) {
        uVar9 = 1;
      }
      uVar4 = (uint)((uVar4 * 0xfa) / uVar9);
      if (*(uint *)(&DAT_14c748080 + (longlong)iVar3 * 4) < uVar4) {
        uVar4 = *(uint *)(&DAT_14c748080 + (longlong)iVar3 * 4);
      }
      if ((iVar3 == 2) && ((param_6 == '\0' || ('\0' < param_7)))) {
        uVar4 = uVar4 * 2;
      }
      lVar7 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)((ulonglong)uVar4 * *param_4))
                     ,8) + (ulonglong)uVar4 * *param_4;
      *param_4 = *param_4 + ((lVar7 >> 6) - (lVar7 >> 0x3f));
    }
  }
  return;
}



// FUNCTION 145679d50 FUN_145679d50 body=10 status=ok
// SIG undefined FUN_145679d50(void)

void FUN_145679d50(undefined2 *param_1)

{
  *param_1 = 0x101;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 145679d60 FUN_145679d60 body=10 status=ok
// SIG undefined FUN_145679d60(void)

void FUN_145679d60(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145679d70 FUN_145679d70 body=19 status=ok
// SIG undefined FUN_145679d70(void)

void FUN_145679d70(longlong param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + (longlong)param_2 * 4 + 0x50) =
       *(uint *)(param_1 + 0x50 + (longlong)param_2 * 4) & ~(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 145679d90 FUN_145679d90 body=19 status=ok
// SIG undefined FUN_145679d90(void)

void FUN_145679d90(longlong param_1,int param_2,int param_3)

{
  *(undefined2 *)(param_1 + 0x10 + ((longlong)param_3 + (longlong)param_2 * 4) * 2) = 0;
  return;
}



// FUNCTION 145679db0 FUN_145679db0 body=103 status=ok
// SIG undefined FUN_145679db0(void)

void FUN_145679db0(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0x101;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_145472420();
  iVar2 = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  iVar1 = -8;
  do {
    FUN_145472490(param_1,iVar2,0,iVar1);
    FUN_145472450(param_1,iVar2);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 2;
  } while (iVar1 < 8);
  return;
}



// FUNCTION 145679e20 FUN_145679e20 body=433 status=ok
// SIG undefined FUN_145679e20(void)

void FUN_145679e20(longlong param_1,undefined2 *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  
  iVar5 = *(int *)(param_1 + 0x2f678);
  iVar2 = *(int *)(param_1 + 0x2a31c);
  dVar10 = (double)FUN_145614250(iVar2,*(undefined4 *)(param_1 + 0x2e4d0));
  iVar3 = iVar5 / 2;
  dVar1 = *(double *)(param_1 + 0x2f5d8 + (longlong)iVar3 * 8);
  *param_2 = 0x101;
  *(undefined1 *)(param_2 + 1) = 1;
  FUN_145472420(param_2);
  iVar7 = 0;
  *(undefined1 *)((longlong)param_2 + 3) = 0;
  if (0 < iVar3) {
    pdVar8 = (double *)(param_1 + 0x2f5d8);
    do {
      iVar4 = FUN_1456142c0(dVar10 / ((dVar1 - *pdVar8) * 0.25 + 1.0),
                            *(undefined4 *)(param_1 + 0x2e4d0));
      FUN_145472490(param_2,iVar7,0,iVar4 - iVar2);
      FUN_145472450(param_2,iVar7);
      iVar7 = iVar7 + 1;
      pdVar8 = pdVar8 + 1;
    } while (iVar7 < iVar3);
  }
  FUN_145472490(param_2,iVar7,0,0);
  FUN_145472450(param_2,iVar7,0);
  lVar6 = (longlong)iVar7;
  if (lVar6 < iVar5) {
    lVar9 = iVar5 - lVar6;
    pdVar8 = (double *)(param_1 + 0x2f5d8 + lVar6 * 8);
    do {
      iVar5 = FUN_1456142c0(((*pdVar8 - dVar1) * 0.25 + 1.0) * dVar10,
                            *(undefined4 *)(param_1 + 0x2e4d0));
      FUN_145472490(param_2,iVar7,0,iVar5 - iVar2);
      FUN_145472450(param_2,iVar7);
      iVar7 = iVar7 + 1;
      pdVar8 = pdVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 145679fe0 FUN_145679fe0 body=874 status=ok
// SIG undefined FUN_145679fe0(void)

void FUN_145679fe0(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  int local_e0;
  int local_d8;
  undefined1 local_d0;
  undefined2 local_c8;
  byte local_c6;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b0 [8];
  uint local_a8;
  int local_a4;
  undefined8 local_a0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x11ad) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x11b1) = 0xffff;
  *(undefined1 *)(param_1 + 0x11b3) = 0xff;
  *(undefined2 *)(&DAT_000011b4 + param_1) = 0xffff;
  *(undefined1 *)(param_1 + 0x11b6) = 0xff;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar6 = 0;
  if (0 < 1 << ((byte)*(undefined4 *)(param_1 + 0x4600) & 0x1f)) {
    do {
      iVar13 = 0;
      FUN_1454724b0(local_b0,param_1,0,uVar12);
      uVar10 = (ulonglong)(int)local_a8;
      lVar14 = *(longlong *)(param_1 + 0x4d0) + uVar10 * 8;
      iVar6 = local_a4;
      if (0 < *(int *)(param_1 + 0x428)) {
        do {
          lVar11 = lVar14;
          if ((int)uVar10 < iVar6) {
            do {
              local_d0 = 0xc;
              local_e8 = &local_68;
              local_f0 = &local_a0;
              local_f8 = &local_88;
              local_e0 = iVar13;
              local_d8 = (int)uVar10;
              FUN_14567a980(param_1,param_2,local_b0,lVar11);
              uVar9 = (int)uVar10 + 8;
              uVar10 = (ulonglong)uVar9;
              lVar11 = lVar11 + 0x40;
            } while ((int)uVar9 < local_a4);
            uVar10 = (ulonglong)local_a8;
            iVar6 = local_a4;
          }
          iVar13 = iVar13 + 8;
          lVar14 = lVar14 + (longlong)(*(int *)(param_1 + 0x434) << 3) * 8;
        } while (iVar13 < *(int *)(param_1 + 0x428));
      }
      uVar9 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar9;
    } while ((int)uVar9 < 1 << ((byte)*(undefined4 *)(param_1 + 0x4600) & 0x1f));
    uVar12 = local_a0 & 0xffffffff;
    iVar6 = local_a0._4_4_;
  }
  iVar4 = 0x7fffffff;
  FUN_14567a390(&local_88,&local_bc);
  iVar13 = FUN_14567a580(&local_88,&local_bc);
  if ((*(int *)(param_1 + 0x404) != 0) && (*(char *)(param_1 + 0x414) == '\0')) {
    FUN_14567a390(&local_68,&local_c4);
    iVar4 = FUN_14567a580(&local_68);
    uVar9 = iVar6 + (int)uVar12;
    if (uVar9 == 0) {
      bVar7 = 0x80;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar12 * 0x100 + (ulonglong)(uVar9 >> 1);
      iVar5 = SUB164(auVar1 / ZEXT416(uVar9),0);
      bVar7 = (byte)(0xff - iVar5 >> 0x17) | iVar5 == 0 | SUB161(auVar1 / ZEXT416(uVar9),0);
    }
    uVar9 = local_98._4_4_ + (int)local_98;
    if (uVar9 == 0) {
      bVar8 = 0x80;
    }
    else {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (local_98 & 0xffffffff) * 0x100 + (ulonglong)(uVar9 >> 1);
      iVar5 = SUB164(auVar2 / ZEXT416(uVar9),0);
      bVar8 = (byte)(0xff - iVar5 >> 0x17) | iVar5 == 0 | SUB161(auVar2 / ZEXT416(uVar9),0);
    }
    local_c8 = CONCAT11(bVar8,bVar7);
    uVar9 = uStack_90._4_4_ + (int)uStack_90;
    if (uVar9 == 0) {
      local_c6 = 0x80;
    }
    else {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uStack_90 & 0xffffffff) * 0x100 + (ulonglong)(uVar9 >> 1);
      iVar5 = SUB164(auVar3 / ZEXT416(uVar9),0);
      local_c6 = (byte)(0xff - iVar5 >> 0x17) | iVar5 == 0 | SUB161(auVar3 / ZEXT416(uVar9),0);
    }
    iVar4 = (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)local_c6 * 2) * (int)uStack_90 +
            (int)uVar12 * (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)bVar7 * 2) + iVar4 +
            (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)bVar7 * -2) * iVar6 +
            (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)bVar8 * 2) * (int)local_98 +
            (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)bVar8 * -2) * local_98._4_4_ +
            (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)local_c6 * -2) * uStack_90._4_4_;
  }
  if (iVar4 < iVar13) {
    *(undefined4 *)(param_1 + 0x11ad) = local_c4;
    *(undefined2 *)(param_1 + 0x11b1) = local_c0;
    *(undefined1 *)(param_1 + 0x11b3) = local_be;
    *(undefined2 *)(&DAT_000011b4 + param_1) = local_c8;
    *(byte *)(param_1 + 0x11b6) = local_c6;
    (&DAT_000011ac)[param_1] = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x11ad) = local_bc;
    *(undefined2 *)(param_1 + 0x11b1) = local_b8;
    *(undefined1 *)(param_1 + 0x11b3) = local_b6;
    (&DAT_000011ac)[param_1] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 14567a370 FUN_14567a370 body=31 status=ok
// SIG undefined FUN_14567a370(void)

void FUN_14567a370(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 5) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 9) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0xff;
  FUN_145472420();
  return;
}



// FUNCTION 14567a390 FUN_14567a390 body=481 status=ok
// SIG undefined FUN_14567a390(void)

void FUN_14567a390(uint *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  uint uVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar15 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[6];
  uVar16 = param_1[2] + uVar15 + uVar1 + param_1[3];
  uVar3 = param_1[7];
  uVar17 = param_1[4] + param_1[5];
  uVar12 = uVar16 + uVar2 + uVar3 + uVar17;
  if (uVar12 == 0) {
    bVar14 = 0x80;
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulonglong)uVar16 * 0x100 + (ulonglong)(uVar12 >> 1);
    iVar13 = SUB164(auVar5 / ZEXT416(uVar12),0);
    bVar14 = (byte)(0xff - iVar13 >> 0x17) | iVar13 == 0 | SUB161(auVar5 / ZEXT416(uVar12),0);
  }
  *param_2 = bVar14;
  if (uVar16 == 0) {
    bVar14 = 0x80;
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulonglong)(uVar15 + uVar1) * 0x100 + (ulonglong)(uVar16 >> 1);
    iVar13 = SUB164(auVar6 / ZEXT416(uVar16),0);
    bVar14 = (byte)(0xff - iVar13 >> 0x17) | iVar13 == 0 | SUB161(auVar6 / ZEXT416(uVar16),0);
  }
  uVar15 = uVar2 + uVar3 + uVar17;
  param_2[1] = bVar14;
  if (uVar15 == 0) {
    bVar14 = 0x80;
  }
  else {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulonglong)uVar17 * 0x100 + (ulonglong)(uVar15 >> 1);
    iVar13 = SUB164(auVar7 / ZEXT416(uVar15),0);
    bVar14 = (byte)(0xff - iVar13 >> 0x17) | iVar13 == 0 | SUB161(auVar7 / ZEXT416(uVar15),0);
  }
  param_2[2] = bVar14;
  uVar15 = param_1[1] + *param_1;
  if (uVar15 == 0) {
    bVar14 = 0x80;
  }
  else {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulonglong)*param_1 * 0x100 + (ulonglong)(uVar15 >> 1);
    iVar13 = SUB164(auVar8 / ZEXT416(uVar15),0);
    bVar14 = (byte)(0xff - iVar13 >> 0x17) | iVar13 == 0 | SUB161(auVar8 / ZEXT416(uVar15),0);
  }
  param_2[3] = bVar14;
  uVar15 = param_1[3] + param_1[2];
  if (uVar15 == 0) {
    bVar14 = 0x80;
  }
  else {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulonglong)param_1[2] * 0x100 + (ulonglong)(uVar15 >> 1);
    iVar13 = SUB164(auVar9 / ZEXT416(uVar15),0);
    bVar14 = (byte)(0xff - iVar13 >> 0x17) | iVar13 == 0 | SUB161(auVar9 / ZEXT416(uVar15),0);
  }
  param_2[4] = bVar14;
  uVar15 = param_1[5] + param_1[4];
  if (uVar15 == 0) {
    bVar14 = 0x80;
  }
  else {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulonglong)param_1[4] * 0x100 + (ulonglong)(uVar15 >> 1);
    iVar13 = SUB164(auVar10 / ZEXT416(uVar15),0);
    bVar14 = (byte)(0xff - iVar13 >> 0x17) | iVar13 == 0 | SUB161(auVar10 / ZEXT416(uVar15),0);
  }
  param_2[5] = bVar14;
  uVar15 = param_1[7] + param_1[6];
  if (uVar15 == 0) {
    param_2[6] = 0x80;
  }
  else {
    auVar4._4_8_ = 0;
    auVar4._0_4_ = uVar15;
    auVar11._8_4_ = 0;
    auVar11._0_8_ = (ulonglong)param_1[6] * 0x100 + (ulonglong)(uVar15 >> 1);
    iVar13 = SUB124(auVar11 / auVar4,0);
    param_2[6] = (byte)(0xff - iVar13 >> 0x17) | iVar13 == 0 | SUB121(auVar11 / auVar4,0);
  }
  return;
}



// FUNCTION 14567a580 FUN_14567a580 body=437 status=ok
// SIG undefined FUN_14567a580(void)

int FUN_14567a580(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[2] + param_1[3];
  iVar2 = *param_1 + param_1[1];
  iVar3 = param_1[4] + param_1[5];
  iVar4 = param_1[6] + param_1[7];
  iVar5 = (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)*param_2 * -2) * (iVar4 + iVar3) +
          (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)*param_2 * 2) * (iVar1 + iVar2);
  if (0 < iVar1 + iVar2) {
    iVar5 = iVar5 + (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)param_2[1] * 2) * iVar2 +
            (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)param_2[1] * -2) * iVar1;
    if (0 < iVar2) {
      iVar5 = iVar5 + (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)param_2[3] * 2) * *param_1 +
              (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)param_2[3] * -2) * param_1[1];
    }
    if (0 < iVar1) {
      iVar5 = iVar5 + (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)param_2[4] * 2) * param_1[2] +
              (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)param_2[4] * -2) * param_1[3];
    }
  }
  if (0 < iVar4 + iVar3) {
    iVar5 = iVar5 + (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)param_2[2] * 2) * iVar3 +
            (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)param_2[2] * -2) * iVar4;
    if (0 < iVar3) {
      iVar5 = iVar5 + (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)param_2[5] * 2) * param_1[4] +
              (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)param_2[5] * -2) * param_1[5];
    }
    if (0 < iVar4) {
      iVar5 = (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)param_2[6] * 2) * param_1[6] + iVar5 +
              (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)param_2[6] * -2) * param_1[7];
    }
  }
  return iVar5;
}



// FUNCTION 14567a740 FUN_14567a740 body=572 status=ok
// SIG undefined FUN_14567a740(void)

void FUN_14567a740(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,int param_8,int param_9,
                  int param_10,int param_11)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  if ((param_10 < *(int *)(param_1 + 0x428)) && (param_11 < *(int *)(param_1 + 0x430))) {
    *(longlong **)(param_2 + 0x1c0) = param_4;
    iVar8 = *(int *)(param_1 + 0x430);
    uVar7 = 0;
    cVar2 = *(char *)(*param_4 + 4);
    *(int *)(param_2 + 500) = ((*(int *)(param_1 + 0x428) - param_9) - param_10) * 0x40;
    *(int *)(param_2 + 0x1f0) = param_10 * -0x40;
    *(int *)(param_2 + 0x1ec) = ((iVar8 - param_8) - param_11) * 0x40;
    *(int *)(param_2 + 0x1e8) = param_11 * -0x40;
    uVar5 = uVar7;
    if (param_10 != 0) {
      uVar5 = param_4[-(longlong)*(int *)(param_2 + 0x1b8)];
    }
    *(ulonglong *)(param_2 + 0x1d0) = uVar5;
    uVar5 = uVar7;
    if (*(int *)(param_3 + 8) < param_11) {
      uVar5 = param_4[-1];
    }
    *(ulonglong *)(param_2 + 0x1c8) = uVar5;
    piVar1 = (int *)((longlong)cVar2 * 4 + param_5);
    *piVar1 = *piVar1 + 1;
    iVar8 = 0;
    if (*(int *)(param_1 + 0x404) != 0) {
      iVar11 = *(int *)(param_1 + 0x430);
      bVar3 = *(byte *)**(undefined8 **)(param_2 + 0x1c0);
      uVar4 = 8;
      uVar13 = iVar11 - param_11;
      if ((int)(uint)(byte)(&DAT_149d54990)[bVar3] <= iVar11 - param_11) {
        uVar13 = (uint)(byte)(&DAT_149d54990)[bVar3];
      }
      uVar12 = *(int *)(param_1 + 0x428) - param_10;
      if ((int)(uint)(byte)(&DAT_149d549a0)[bVar3] <= (int)uVar12) {
        uVar12 = (uint)(byte)(&DAT_149d549a0)[bVar3];
      }
      uVar5 = uVar7;
      if (0 < (int)uVar12) {
        do {
          if (0 < (int)uVar13) {
            uVar9 = (ulonglong)uVar13;
            pbVar6 = (byte *)((longlong)(iVar11 * (int)uVar5 + iVar11 * param_10 + param_11) +
                             *(longlong *)(param_1 + 0x508));
            do {
              bVar3 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              uVar10 = (uint)bVar3;
              if (uVar4 < bVar3) {
                uVar10 = uVar4;
              }
              uVar4 = uVar10;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar10 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)uVar12);
      }
      iVar11 = iVar8;
      if (*(longlong *)(param_2 + 0x1d0) != 0) {
        iVar11 = (int)*(char *)(*(longlong *)(param_2 + 0x1d0) + 5);
      }
      if (*(longlong *)(param_2 + 0x1c8) != 0) {
        iVar8 = (int)*(char *)(*(longlong *)(param_2 + 0x1c8) + 5);
      }
      uVar13 = (uint)cVar2;
      ((byte *)**(undefined8 **)(param_2 + 0x1c0))[5] = uVar4 == uVar13;
      if (uVar4 == uVar13) {
        uVar7 = 4;
      }
      piVar1 = (int *)(param_6 + uVar7 + (longlong)(iVar8 + iVar11) * 8);
      *piVar1 = *piVar1 + 1;
      if (uVar4 != uVar13) {
        piVar1 = (int *)((longlong)cVar2 * 4 + param_7);
        *piVar1 = *piVar1 + 1;
      }
    }
  }
  return;
}



// FUNCTION 14567a980 FUN_14567a980 body=740 status=ok
// SIG undefined FUN_14567a980(void)

void FUN_14567a980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,int param_9,
                  byte param_10)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = *(int *)(param_1 + 0x434);
  bVar1 = (&DAT_149d54990)[param_10];
  uVar10 = (uint)(bVar1 >> 1);
  uVar6 = (ulonglong)uVar10;
  if (*(int *)(param_1 + 0x428) <= param_8) {
    return;
  }
  if (*(int *)(param_1 + 0x430) <= param_9) {
    return;
  }
  uVar8 = (uint)bVar1;
  uVar7 = (uint)bVar1;
  uVar4 = (uint)(byte)(&DAT_149d549a0)[*(byte *)*param_4];
  if ((&DAT_149d54990)[*(byte *)*param_4] == bVar1) {
    if (uVar4 == uVar8) {
      FUN_14567a740(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar8,uVar8,param_8,
                    param_9);
      return;
    }
    if (uVar8 <= uVar4) {
LAB_14567aba1:
      uVar2 = (&DAT_149d54b1f)[param_10];
      uVar7 = 0;
      do {
        iVar5 = (uVar7 >> 1) * uVar10;
        iVar9 = (uVar7 & 1) * uVar10;
        FUN_14567a980(param_1,param_2,param_3,param_4 + (iVar5 * iVar3 + iVar9),param_5,param_6,
                      param_7,param_8 + iVar5,iVar9 + param_9,uVar2);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 4);
      return;
    }
    FUN_14567a740(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar7,uVar10,param_8,
                  param_9);
    param_8 = param_8 + uVar10;
    uVar6 = (ulonglong)(int)(uVar10 * iVar3);
    uVar8 = uVar10;
  }
  else {
    if ((bVar1 <= (byte)(&DAT_149d54990)[*(byte *)*param_4]) || (uVar4 != uVar7))
    goto LAB_14567aba1;
    FUN_14567a740(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar10,uVar7,param_8,
                  param_9);
    param_9 = uVar10 + param_9;
    uVar7 = uVar10;
  }
  FUN_14567a740(param_1,param_2,param_3,param_4 + uVar6,param_5,param_6,param_7,uVar7,uVar8,param_8,
                param_9);
  return;
}



// FUNCTION 14567ac70 FUN_14567ac70 body=679 status=ok
// SIG undefined FUN_14567ac70(void)

void FUN_14567ac70(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint local_res18;
  longlong local_res20;
  undefined1 *local_48;
  
  FUN_14518f040(*(undefined8 *)(param_2 + 0x1be80));
  lVar6 = 0x40;
  local_res20 = 0x40;
  lVar3 = FUN_14518efb0(0x40,0x338);
  *(longlong *)(param_2 + 0x1be80) = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(param_1,2,"Failed to allocate td->leaf_tree");
  }
  FUN_14518f040(*(undefined8 *)(param_2 + 0x1be88));
  lVar3 = FUN_14518efb0(0x55,0x1050);
  *(longlong *)(param_2 + 0x1be88) = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(param_1,2,"Failed to allocate td->pc_tree");
  }
  lVar3 = *(longlong *)(param_2 + 0x1be88);
  lVar7 = 0;
  lVar4 = *(longlong *)(param_2 + 0x1be80);
  lVar5 = lVar7;
  do {
    FUN_14567b020(param_1,1,*(longlong *)(param_2 + 0x1be80) + lVar5);
    lVar5 = lVar5 + 0x338;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  do {
    lVar6 = *(longlong *)(param_2 + 0x1be88) + lVar7;
    *(undefined1 *)(lVar6 + 8) = 3;
    FUN_14567b020(param_1,4,lVar6 + 0x10);
    FUN_14567b020(param_1,2,lVar6 + 0x348);
    FUN_14567b020(param_1,2,lVar6 + 0x9b8);
    memset((void *)(lVar6 + 0x680),0,0x338);
    memset((void *)(lVar6 + 0xcf0),0,0x338);
    *(longlong *)(lVar6 + 0x1028) = lVar4;
    lVar7 = lVar7 + 0x1050;
    *(longlong *)(lVar6 + 0x1030) = lVar4;
    *(longlong *)(lVar6 + 0x1038) = lVar4;
    *(longlong *)(lVar6 + 0x1040) = lVar4;
    lVar4 = lVar4 + 0x338;
  } while (lVar7 < 0x41400);
  uVar8 = 0x10;
  local_48 = &DAT_149df50a1;
  bVar2 = 2;
  local_res18 = 0x10;
  do {
    lVar6 = local_res20 * 0x1050;
    local_res20 = local_res20 + uVar8;
    do {
      lVar5 = *(longlong *)(param_2 + 0x1be88) + lVar6;
      FUN_14567b450(param_1,lVar5,4 << (bVar2 & 0x1f));
      lVar6 = lVar6 + 0x1050;
      *(undefined1 *)(lVar5 + 8) = *local_48;
      *(longlong *)(lVar5 + 0x1028) = lVar3;
      *(longlong *)(lVar5 + 0x1030) = lVar3 + 0x1050;
      *(longlong *)(lVar5 + 0x1038) = lVar3 + 0x20a0;
      lVar4 = lVar3 + 0x30f0;
      lVar3 = lVar3 + 0x4140;
      *(longlong *)(lVar5 + 0x1040) = lVar4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    local_48 = local_48 + 1;
    bVar2 = bVar2 + 2;
    uVar8 = (ulonglong)(local_res18 >> 2);
    uVar1 = local_res18 >> 2;
    local_res18 = local_res18 >> 2;
  } while (uVar1 != 0);
  *(longlong *)(param_2 + 0x1be90) = *(longlong *)(param_2 + 0x1be88) + 0x55a40;
  *(undefined4 *)(*(longlong *)(param_2 + 0x1be88) + 0x55d20) = 2;
  return;
}



// FUNCTION 14567af20 FUN_14567af20 body=252 status=ok
// SIG undefined FUN_14567af20(void)

void FUN_14567af20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x1be80) != 0) {
      lVar2 = 0;
      lVar1 = 0x40;
      do {
        FUN_14567b350(*(longlong *)(param_1 + 0x1be80) + lVar2);
        lVar2 = lVar2 + 0x338;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      FUN_14518f040(*(undefined8 *)(param_1 + 0x1be80));
      *(undefined8 *)(param_1 + 0x1be80) = 0;
    }
    if (*(longlong *)(param_1 + 0x1be88) != 0) {
      lVar2 = 0;
      lVar1 = 0x55;
      do {
        lVar3 = *(longlong *)(param_1 + 0x1be88) + lVar2;
        FUN_14567b350(lVar3 + 0x10);
        FUN_14567b350(lVar3 + 0x348);
        FUN_14567b350(lVar3 + 0x680);
        FUN_14567b350(lVar3 + 0x9b8);
        FUN_14567b350(lVar3 + 0xcf0);
        lVar2 = lVar2 + 0x1050;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      FUN_14518f040(*(undefined8 *)(param_1 + 0x1be88));
      *(undefined8 *)(param_1 + 0x1be88) = 0;
    }
  }
  return;
}



// FUNCTION 14567b020 FUN_14567b020 body=801 status=ok
// SIG undefined FUN_14567b020(void)

void FUN_14567b020(undefined8 param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 < 4) {
    param_2 = 4;
  }
  *(int *)(param_3 + 0x2b4) = param_2;
  lVar1 = FUN_14518efb0((longlong)param_2,1);
  *(longlong *)(param_3 + 0x68) = lVar1;
  if (lVar1 == 0) {
    FUN_144d82810(param_1,2,"Failed to allocate ctx->zcoeff_blk");
  }
  lVar1 = (longlong)param_2 * 2;
  lVar5 = (longlong)(param_2 << 4) << 2;
  lVar4 = 3;
  plVar3 = (longlong *)(param_3 + 0x70);
  do {
    lVar2 = FUN_14518ef10(0x20,lVar5);
    *plVar3 = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->coeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[9] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->qcoeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[0x12] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->dqcoeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar1);
    plVar3[0x1b] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->eobs[i][k]");
    }
    plVar3[0x24] = *plVar3;
    plVar3[0x2d] = plVar3[9];
    plVar3[0x36] = plVar3[0x12];
    plVar3[0x3f] = plVar3[0x1b];
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[1] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->coeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[10] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->qcoeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[0x13] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->dqcoeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar1);
    plVar3[0x1c] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->eobs[i][k]");
    }
    plVar3[0x25] = plVar3[1];
    plVar3[0x2e] = plVar3[10];
    plVar3[0x37] = plVar3[0x13];
    plVar3[0x40] = plVar3[0x1c];
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[2] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->coeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[0xb] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->qcoeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar5);
    plVar3[0x14] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->dqcoeff[i][k]");
    }
    lVar2 = FUN_14518ef10(0x20,lVar1);
    plVar3[0x1d] = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate ctx->eobs[i][k]");
    }
    plVar3[0x26] = plVar3[2];
    plVar3[0x2f] = plVar3[0xb];
    plVar3[0x38] = plVar3[0x14];
    plVar3[0x41] = plVar3[0x1d];
    plVar3 = plVar3 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 14567b350 FUN_14567b350 body=250 status=ok
// SIG undefined FUN_14567b350(void)

void FUN_14567b350(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_14518f040(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  lVar2 = 3;
  do {
    FUN_14518f040(puVar1[-9]);
    puVar1[-9] = 0;
    FUN_14518f040(*puVar1);
    *puVar1 = 0;
    FUN_14518f040(puVar1[9]);
    puVar1[9] = 0;
    FUN_14518f040(puVar1[0x12]);
    puVar1[0x12] = 0;
    FUN_14518f040(puVar1[-8]);
    puVar1[-8] = 0;
    FUN_14518f040(puVar1[1]);
    puVar1[1] = 0;
    FUN_14518f040(puVar1[10]);
    puVar1[10] = 0;
    FUN_14518f040(puVar1[0x13]);
    puVar1[0x13] = 0;
    FUN_14518f040(puVar1[-7]);
    puVar1[-7] = 0;
    FUN_14518f040(puVar1[2]);
    puVar1[2] = 0;
    FUN_14518f040(puVar1[0xb]);
    puVar1[0xb] = 0;
    FUN_14518f040(puVar1[0x14]);
    puVar1[0x14] = 0;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14567b450 FUN_14567b450 body=181 status=ok
// SIG undefined FUN_14567b450(void)

void FUN_14567b450(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  FUN_14567b020(param_1,param_3,param_2 + 0x10);
  iVar1 = param_3 / 2;
  FUN_14567b020(param_1,iVar1,param_2 + 0x348);
  FUN_14567b020(param_1,iVar1,param_2 + 0x9b8);
  if (param_3 < 5) {
    memset((void *)(param_2 + 0x680),0,0x338);
    memset((void *)(param_2 + 0xcf0),0,0x338);
  }
  else {
    FUN_14567b020(param_1,iVar1,(void *)(param_2 + 0x680));
    FUN_14567b020(param_1,iVar1,param_2 + 0xcf0);
  }
  return;
}



// FUNCTION 14567b510 FUN_14567b510 body=27 status=ok
// SIG undefined FUN_14567b510(void)

undefined8 FUN_14567b510(longlong param_1)

{
  if ((*(int *)(param_1 + 0x404) != 0) && (*(char *)(param_1 + 0x414) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14567b530 FUN_14567b530 body=195 status=ok
// SIG undefined FUN_14567b530(void)

void FUN_14567b530(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xb4ce0) = 0;
  *(undefined8 *)(param_1 + 0xb4ce8) = 0;
  *(undefined8 *)(param_1 + 0xb4cf0) = 0;
  *(undefined8 *)(param_1 + 0xb4cf8) = 0;
  *(undefined8 *)(param_1 + 0xb4d00) = 0;
  *(undefined8 *)(param_1 + 0xb4d08) = 0;
  *(undefined8 *)(param_1 + 0xb4d10) = 0;
  *(undefined8 *)(param_1 + 0xb4d18) = 0;
  *(undefined8 *)(param_1 + 0xb4d20) = 0;
  *(undefined8 *)(param_1 + 0xb4d28) = 0;
  *(undefined8 *)(param_1 + 0xb4d40) = 0;
  *(undefined8 *)(param_1 + 0xb4d48) = 0;
  *(undefined8 *)(param_1 + 0xb4d30) = 0;
  *(undefined8 *)(param_1 + 0xb4d38) = 0;
  *(undefined8 *)(param_1 + 0xb4d50) = 0;
  *(undefined8 *)(param_1 + 0xb4d58) = 0;
  *(undefined8 *)(param_1 + 0xb4d60) = 0;
  *(undefined8 *)(param_1 + 0xb4d68) = 0;
  *(undefined8 *)(param_1 + 0xb4d70) = 0;
  *(undefined8 *)(param_1 + 0xb4d78) = 0;
  *(undefined8 *)(param_1 + 0xb4d80) = 0;
  *(undefined8 *)(param_1 + 0xb4d88) = 0;
  *(undefined8 *)(param_1 + 0xb4d90) = 0;
  *(undefined8 *)(param_1 + 0xb4da0) = 0;
  *(undefined8 *)(param_1 + 0xb4d98) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xb4da8) = 0;
  return;
}



// FUNCTION 14567b600 FUN_14567b600 body=2267 status=ok
// SIG undefined FUN_14567b600(void)

void FUN_14567b600(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_a68 [32];
  ulonglong *local_a48;
  undefined8 local_a40;
  undefined4 local_a38;
  ulonglong local_a30;
  longlong local_a28;
  longlong local_a20;
  longlong local_a18;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  double dStack_9e0;
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  double dStack_9c0;
  double local_9b8;
  double dStack_9b0;
  double local_9a8;
  double dStack_9a0;
  double local_998;
  double dStack_990;
  double local_988;
  double dStack_980;
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined1 local_8a8 [2144];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a68;
  iVar13 = 0;
  lVar7 = param_1 + 0x29ee0;
  if ((*(int *)(param_1 + 0x2f698) == -1) ||
     (iVar9 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f698) * 4), iVar9 == -1))
  {
    lVar14 = *(longlong *)(param_1 + 0x2e4f0);
    local_a30 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x2e4f0);
    local_a30 = (longlong)iVar9 * 0xe0 + 0x58 + lVar14;
  }
  if ((*(int *)(param_1 + 0x2f69c) == -1) ||
     (iVar9 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f69c) * 4), iVar9 == -1))
  {
    local_a28 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x2e4f0);
    local_a28 = lVar14 + 0x58 + (longlong)iVar9 * 0xe0;
  }
  local_a20 = (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x58 + lVar14;
  local_a18 = param_2;
  FUN_1425b0090();
  uStack_8e0 = 0;
  local_8e8 = 0xffffffff00000000;
  local_938 = 0;
  uStack_930 = 0;
  local_8b8 = 0;
  local_928 = 0;
  uStack_920 = 0;
  local_918 = 0;
  uStack_910 = 0;
  local_908 = 0;
  uStack_900 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  uVar12 = 0;
  if ((*(int *)(param_1 + 0x2f6cc) != 0) ||
     ((*(int *)(param_1 + 0x2e4c4) != 0 && ((*(byte *)(param_1 + 0xcba80) & 1) == 0)))) {
    uVar12 = 1;
  }
  *(undefined4 *)(param_1 + 0x2a2e4) = uVar12;
  *(undefined4 *)(param_1 + 0xb42ec) = 0x7fffffff;
  uVar12 = *(undefined4 *)(param_1 + 0x2e4d0);
  iVar9 = iVar13;
  do {
    dVar4 = (double)FUN_145614250(iVar9,uVar12);
    if (10.0 <= dVar4) break;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x100);
  iVar5 = 0xff;
  if (iVar9 != 0x100) {
    iVar5 = iVar9;
  }
  FUN_1455cb7d0(param_1,iVar5);
  FUN_145472720(param_1 + 0x121b0,*(undefined4 *)(param_1 + 0x2a060),
                *(undefined4 *)(param_1 + 0x2a064));
  FUN_1455ffe70(param_1 + 0xc030,*(undefined8 *)(param_1 + 0x2e6d8),0,0);
  FUN_145479320(param_1 + 0x121b0,local_a20,0,0);
  if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) {
    local_a40 = 0;
    local_a48 = (ulonglong *)((ulonglong)local_a48 & 0xffffffff00000000);
    FUN_1454793f0(param_1 + 0x121b0,0,local_a30,0);
  }
  *(undefined8 **)(param_1 + 0x12370) = *(undefined8 **)(param_1 + 0x2a3b0);
  **(undefined8 **)(param_1 + 0x2a3b0) = *(undefined8 *)(param_1 + 0x2a378);
  FUN_1455cadb0(param_1);
  *(undefined4 *)(param_1 + 0x12458) = 0;
  FUN_14546f6d0(lVar7);
  FUN_14561aea0(param_1);
  *(undefined4 *)(param_1 + 0x2e4e4) = 0;
  iVar9 = 1;
  if ((*(int *)(param_1 + 0xcee14) != 0) && (*(longlong *)(param_1 + 0xb4fa8) == 0)) {
    lVar6 = FUN_14518efb0((longlong)*(int *)(param_1 + 0x2a300) * 0x18);
    *(longlong *)(param_1 + 0xb4fa8) = lVar6;
    if (lVar6 == 0) {
      FUN_144d82810(lVar7,2,"Failed to allocate cpi->twopass.fp_mb_float_stats");
    }
  }
  if (*(int *)(param_1 + 0xcee10) == 0) {
    *(undefined4 *)(param_1 + 0x2e4e0) = 0;
    *(undefined **)(param_1 + 0xcec88) = &DAT_145612db0;
    local_a38 = 0;
    *(undefined **)(param_1 + 0xcec90) = &DAT_145612dc0;
    FUN_1454724b0(local_8a8,lVar7,0,0);
    if (0 < *(int *)(param_1 + 0x2a304)) {
      do {
        local_a48 = &local_a30;
        local_a40 = CONCAT44(local_a40._4_4_,iVar13);
        local_a30 = local_a30 & 0xffffffff00000000;
        FUN_14567bf40(param_1,param_1 + 0xc030,&local_938,local_8a8);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x2a304));
    }
    puVar10 = &local_938;
  }
  else {
    *(code **)(param_1 + 0xcec88) = FUN_145612c70;
    *(code **)(param_1 + 0xcec90) = FUN_145612d20;
    if (*(int *)(param_1 + 0xcee14) != 0) {
      *(undefined4 *)(param_1 + 0x2e4e0) = 0;
      memset(*(void **)(param_1 + 0xb4fa8),0,(longlong)*(int *)(param_1 + 0x2a300) * 0x18);
    }
    FUN_145612930(param_1);
    lVar7 = *(longlong *)(param_1 + 0x2f680);
    if (*(int *)(param_1 + 0xcee14) != 0) {
      *(undefined8 *)(lVar7 + 0x7b0) = 0;
      *(undefined8 *)(lVar7 + 0x7b8) = 0;
      *(undefined8 *)(lVar7 + 0x7e8) = 0;
      if (0 < *(int *)(param_1 + 0x2a304)) {
        iVar5 = *(int *)(param_1 + 0x2a30c);
        iVar11 = iVar13;
        do {
          if (0 < iVar5) {
            dVar4 = *(double *)(lVar7 + 0x7b0);
            dVar3 = *(double *)(lVar7 + 0x7b8);
            dVar15 = *(double *)(lVar7 + 0x7e8);
            iVar8 = iVar13;
            do {
              iVar5 = iVar5 * iVar11 + iVar8;
              iVar8 = iVar8 + 1;
              lVar6 = (longlong)iVar5;
              dVar4 = dVar4 + *(double *)(*(longlong *)(param_1 + 0xb4fa8) + lVar6 * 0x18);
              *(double *)(lVar7 + 0x7b0) = dVar4;
              dVar3 = dVar3 + *(double *)(*(longlong *)(param_1 + 0xb4fa8) + 8 + lVar6 * 0x18);
              *(double *)(lVar7 + 0x7b8) = dVar3;
              dVar15 = dVar15 + *(double *)(*(longlong *)(param_1 + 0xb4fa8) + 0x10 + lVar6 * 0x18);
              *(double *)(lVar7 + 0x7e8) = dVar15;
              iVar5 = *(int *)(param_1 + 0x2a30c);
            } while (iVar8 < iVar5);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_1 + 0x2a304));
      }
    }
    puVar10 = (undefined8 *)(lVar7 + 0x7b0);
  }
  FUN_14567ede0(param_1,&local_a08,puVar10);
  dVar4 = (double)(*(longlong *)(local_a18 + 0xa8) - *(longlong *)(local_a18 + 0xa0));
  dStack_950 = 1.0;
  if (1.0 <= dVar4) {
    dStack_950 = dVar4;
  }
  *(double *)(param_1 + 0xb4db0) = local_a08;
  *(double *)(param_1 + 0xb4db8) = dStack_a00;
  *(double *)(param_1 + 0xb4dc0) = local_9f8;
  *(double *)(param_1 + 0xb4dc8) = dStack_9f0;
  *(double *)(param_1 + 0xb4dd0) = local_9e8;
  *(double *)(param_1 + 0xb4dd8) = dStack_9e0;
  *(double *)(param_1 + 0xb4de0) = local_9d8;
  *(double *)(param_1 + 0xb4de8) = dStack_9d0;
  *(double *)(param_1 + 0xb4df0) = local_9c8;
  *(double *)(param_1 + 0xb4df8) = dStack_9c0;
  *(double *)(param_1 + 0xb4e00) = local_9b8;
  *(double *)(param_1 + 0xb4e08) = dStack_9b0;
  *(double *)(param_1 + 0xb4e10) = local_9a8;
  *(double *)(param_1 + 0xb4e18) = dStack_9a0;
  *(double *)(param_1 + 0xb4e20) = local_998;
  *(double *)(param_1 + 0xb4e28) = dStack_990;
  *(double *)(param_1 + 0xb4e30) = local_988;
  *(double *)(param_1 + 0xb4e38) = dStack_980;
  *(double *)(param_1 + 0xb4e40) = local_978;
  *(double *)(param_1 + 0xb4e48) = dStack_970;
  *(double *)(param_1 + 0xb4e50) = local_968;
  *(double *)(param_1 + 0xb4e58) = dStack_960;
  *(double *)(param_1 + 0xb4e60) = local_958;
  *(double *)(param_1 + 0xb4e68) = dStack_950;
  *(double *)(param_1 + 0xb4e70) = local_948;
  *(undefined8 *)(param_1 + 0xb4e78) = uStack_940;
  *(undefined8 *)(param_1 + 0xb4da8) = uStack_940;
  *(double *)(param_1 + 0xb4ce0) = local_a08 + *(double *)(param_1 + 0xb4ce0);
  *(double *)(param_1 + 0xb4ce8) = dStack_a00 + *(double *)(param_1 + 0xb4ce8);
  *(double *)(param_1 + 0xb4cf0) = local_9f8 + *(double *)(param_1 + 0xb4cf0);
  *(double *)(param_1 + 0xb4cf8) = dStack_9f0 + *(double *)(param_1 + 0xb4cf8);
  *(double *)(param_1 + 0xb4d00) = local_9e8 + *(double *)(param_1 + 0xb4d00);
  *(double *)(param_1 + 0xb4d08) = dStack_9e0 + *(double *)(param_1 + 0xb4d08);
  *(double *)(param_1 + 0xb4d10) = local_9d8 + *(double *)(param_1 + 0xb4d10);
  *(double *)(param_1 + 0xb4d18) = dStack_9d0 + *(double *)(param_1 + 0xb4d18);
  *(double *)(param_1 + 0xb4d20) = local_9c8 + *(double *)(param_1 + 0xb4d20);
  *(double *)(param_1 + 0xb4d28) = dStack_9c0 + *(double *)(param_1 + 0xb4d28);
  *(double *)(param_1 + 0xb4d40) = local_9a8 + *(double *)(param_1 + 0xb4d40);
  *(double *)(param_1 + 0xb4d48) = dStack_9a0 + *(double *)(param_1 + 0xb4d48);
  *(double *)(param_1 + 0xb4d30) = local_9b8 + *(double *)(param_1 + 0xb4d30);
  piVar1 = (int *)(param_1 + 0x2e4c4);
  *(double *)(param_1 + 0xb4d38) = dStack_9b0 + *(double *)(param_1 + 0xb4d38);
  *(double *)(param_1 + 0xb4d50) = local_998 + *(double *)(param_1 + 0xb4d50);
  *(double *)(param_1 + 0xb4d98) = dStack_950 + *(double *)(param_1 + 0xb4d98);
  *(double *)(param_1 + 0xb4d58) = dStack_990 + *(double *)(param_1 + 0xb4d58);
  *(double *)(param_1 + 0xb4d60) = local_988 + *(double *)(param_1 + 0xb4d60);
  *(double *)(param_1 + 0xb4d68) = dStack_980 + *(double *)(param_1 + 0xb4d68);
  *(double *)(param_1 + 0xb4d70) = local_978 + *(double *)(param_1 + 0xb4d70);
  *(double *)(param_1 + 0xb4d78) = dStack_970 + *(double *)(param_1 + 0xb4d78);
  *(double *)(param_1 + 0xb4d80) = local_968 + *(double *)(param_1 + 0xb4d80);
  *(double *)(param_1 + 0xb4d88) = dStack_960 + *(double *)(param_1 + 0xb4d88);
  *(double *)(param_1 + 0xb4d90) = local_958 + *(double *)(param_1 + 0xb4d90);
  *(double *)(param_1 + 0xb4da0) = local_948 + *(double *)(param_1 + 0xb4da0);
  if (*(int *)(param_1 + 0xb4fd8) < 4) {
    if ((*piVar1 != 0) && (0.2 < *(double *)(param_1 + 0xb4de0))) {
      dVar4 = *(double *)(param_1 + 0xb4dc8);
      if (0.0 <= dVar4) {
        dVar4 = dVar4 + 1e-06;
      }
      else {
        dVar4 = dVar4 - 1e-06;
      }
      if (2.0 < *(double *)(param_1 + 0xb4dc0) / dVar4) goto LAB_14567bdae;
    }
    iVar9 = *(int *)(param_1 + 0xb4fd8) + 1;
  }
  else {
LAB_14567bdae:
    if (local_a28 != 0) {
      iVar13 = *(int *)(param_1 + 0x2f69c);
      iVar5 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f698) * 4);
      iVar11 = *(int *)(param_1 + 0x2a088 + (longlong)iVar13 * 4);
      if (-1 < iVar11) {
        lVar7 = (longlong)iVar11 * 0xe0;
        iVar11 = *(int *)(lVar7 + 0x18 + lVar14);
        if (0 < iVar11) {
          *(int *)(lVar7 + 0x18 + lVar14) = iVar11 + -1;
        }
      }
      *(int *)(param_1 + 0x2a088 + (longlong)iVar13 * 4) = iVar5;
      piVar2 = (int *)((longlong)iVar5 * 0xe0 + 0x18 + lVar14);
      *piVar2 = *piVar2 + 1;
    }
  }
  *(int *)(param_1 + 0xb4fd8) = iVar9;
  FUN_14546c880(local_a20);
  iVar13 = *(int *)(param_1 + 0x2f698);
  iVar9 = *(int *)(param_1 + 0x2a2d8);
  iVar5 = *(int *)(param_1 + 0x2a088 + (longlong)iVar13 * 4);
  if (-1 < iVar5) {
    lVar7 = (longlong)iVar5 * 0xe0;
    iVar5 = *(int *)(lVar7 + 0x18 + lVar14);
    if (0 < iVar5) {
      *(int *)(lVar7 + 0x18 + lVar14) = iVar5 + -1;
    }
  }
  *(int *)(param_1 + 0x2a088 + (longlong)iVar13 * 4) = iVar9;
  piVar2 = (int *)((longlong)iVar9 * 0xe0 + 0x18 + lVar14);
  *piVar2 = *piVar2 + 1;
  if ((*piVar1 == 0) && (iVar13 = *(int *)(param_1 + 0x2f69c), iVar13 != -1)) {
    iVar9 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f698) * 4);
    iVar5 = *(int *)(param_1 + 0x2a088 + (longlong)iVar13 * 4);
    if (-1 < iVar5) {
      lVar7 = (longlong)iVar5 * 0xe0;
      iVar5 = *(int *)(lVar7 + 0x18 + lVar14);
      if (0 < iVar5) {
        *(int *)(lVar7 + 0x18 + lVar14) = iVar5 + -1;
      }
    }
    *(int *)(param_1 + 0x2a088 + (longlong)iVar13 * 4) = iVar9;
    piVar2 = (int *)((longlong)iVar9 * 0xe0 + 0x18 + lVar14);
    *piVar2 = *piVar2 + 1;
  }
  *piVar1 = *piVar1 + 1;
  *(int *)(param_1 + 0x2e4c8) = *(int *)(param_1 + 0x2e4c8) + 1;
  if (*(int *)(param_1 + 0xb64dc) != 0) {
    FUN_1456880c0(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a68);
}



// FUNCTION 14567bf10 FUN_14567bf10 body=48 status=ok
// SIG undefined FUN_14567bf10(void)

void FUN_14567bf10(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb4f78) = 1;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4fa8));
  *(undefined8 *)(param_1 + 0xb4fa8) = 0;
  return;
}



// FUNCTION 14567bf40 FUN_14567bf40 body=4575 status=ok
// SIG undefined FUN_14567bf40(void)

void FUN_14567bf40(longlong param_1,void *param_2,double *param_3,longlong param_4,int *param_5,
                  int param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  code *pcVar12;
  longlong lVar13;
  char cVar14;
  longlong lVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_2b8 [32];
  int *local_298;
  byte local_288;
  undefined4 local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  undefined4 local_268;
  int local_264;
  int local_260;
  int local_25c;
  uint local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  longlong local_240;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  longlong local_210;
  longlong local_208;
  longlong *local_200;
  int *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  code *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  undefined1 local_168 [80];
  undefined1 local_118 [80];
  ulonglong local_c8;
  
  local_c8 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_1f8 = param_5;
  lVar4 = *(longlong *)((longlong)param_2 + 0x1be90);
  local_188 = *(undefined8 *)(param_4 + 8);
  lVar15 = param_1 + 0x29ee0;
  iVar7 = (int)((ulonglong)local_188 >> 0x20);
  local_26c = param_6;
  local_170 = (ulonglong)(uint)((iVar7 - (int)local_188) + 1 >> 1);
  uVar18 = iVar7 + 1 >> 1;
  local_1c8 = (ulonglong)uVar18;
  local_280 = (int)local_188 + 1 >> 1;
  local_268 = 0;
  if ((*(int *)(param_1 + 0x2f698) == -1) ||
     (iVar7 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f698) * 4), iVar7 == -1))
  {
    local_210 = *(longlong *)(param_1 + 0x2e4f0);
    local_200 = (longlong *)&DAT_00000038;
    local_1e0 = (longlong *)&DAT_00000040;
    local_1d8 = (longlong *)&DAT_00000048;
  }
  else {
    local_210 = *(longlong *)(param_1 + 0x2e4f0);
    lVar13 = (longlong)iVar7 * 0xe0;
    local_200 = (longlong *)(local_210 + 0x90 + lVar13);
    local_1e0 = (longlong *)(local_210 + 0x98 + lVar13);
    local_1d8 = (longlong *)(lVar13 + 0xa0 + local_210);
  }
  if ((*(int *)(param_1 + 0x2f69c) == -1) ||
     (iVar7 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f69c) * 4), iVar7 == -1))
  {
    local_1e8 = 0;
  }
  else {
    local_210 = *(longlong *)(param_1 + 0x2e4f0);
    local_1e8 = local_210 + 0x58 + (longlong)iVar7 * 0xe0;
  }
  local_1f0 = (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0;
  local_264 = 24000;
  if (*(int *)(param_1 + 0x2a068) != 0) {
    if (*(int *)(param_1 + 0x2e4d0) == 8) {
      local_264 = 24000;
    }
    else {
      local_264 = 0x5dc00;
      if (*(int *)(param_1 + 0x2e4d0) != 10) {
        local_264 = 0x5dc000;
      }
    }
  }
  local_250 = param_6 * 2;
  lVar13 = (longlong)(local_250 * *(int *)((longlong)param_2 + 0x6338)) + (longlong)local_280;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2a3b0) + lVar13 * 8);
  *(longlong **)((longlong)param_2 + 0x6340) = plVar1;
  *plVar1 = lVar13 * 0x44 + *(longlong *)(param_1 + 0x2a378);
  *(undefined8 *)((longlong)param_2 + 0x2008) = *(undefined8 *)(lVar4 + 0x1a8);
  *(undefined8 *)((longlong)param_2 + 0x2000) = *(undefined8 *)(lVar4 + 0x1f0);
  *(undefined8 *)((longlong)param_2 + 0x6180) = *(undefined8 *)(lVar4 + 0x238);
  *(undefined8 *)((longlong)param_2 + 0x2010) = *(undefined8 *)(lVar4 + 0x280);
  *(undefined8 *)((longlong)param_2 + 0x4088) = *(undefined8 *)(lVar4 + 0x1c0);
  *(undefined8 *)((longlong)param_2 + 0x4080) = *(undefined8 *)(lVar4 + 0x208);
  *(undefined8 *)((longlong)param_2 + 0x6208) = *(undefined8 *)(lVar4 + 0x250);
  *(undefined8 *)((longlong)param_2 + 0x4090) = *(undefined8 *)(lVar4 + 0x298);
  *(undefined8 *)((longlong)param_2 + 0x6108) = *(undefined8 *)(lVar4 + 0x1d8);
  *(undefined8 *)((longlong)param_2 + 0x6100) = *(undefined8 *)(lVar4 + 0x220);
  *(undefined8 *)((longlong)param_2 + 0x6290) = *(undefined8 *)(lVar4 + 0x268);
  *(undefined8 *)((longlong)param_2 + 0x6110) = *(undefined8 *)(lVar4 + 0x2b0);
  local_248 = 0x10;
  if (*(int *)(local_1f0 + 0x70 + local_210) < *(int *)(local_1f0 + 0x5c + local_210)) {
    local_248 = 8;
  }
  local_278 = (param_6 * *(int *)(local_1f0 + 0x68 + local_210) + local_280) * 0x10;
  local_260 = (param_6 * *(int *)(local_1f0 + 0x7c + local_210) + local_280) * local_248;
  *(int *)((longlong)param_2 + 0x6528) = param_6 * -0x10 + -0x14;
  *(int *)((longlong)param_2 + 0x652c) = (*(int *)(param_1 + 0x2a304) - param_6) * 0x10 + 4;
  puVar11 = (undefined1 *)0x0;
  local_258 = 0;
  local_25c = local_280;
  local_240 = param_1;
  local_208 = lVar15;
  local_178 = param_4;
  if (local_280 < (int)uVar18) {
    local_1d0 = param_4 + 0x838;
    local_214 = param_6 * -0x80;
    local_190 = local_118;
    if (param_6 == 0) {
      local_190 = puVar11;
    }
    do {
      iVar7 = local_26c * 2 + 1;
      if (local_280 == 0) {
        if (local_26c == 0) goto LAB_14567c351;
LAB_14567c319:
        bVar5 = true;
      }
      else {
        if (local_26c == 0) goto LAB_14567c319;
LAB_14567c351:
        bVar5 = false;
      }
      iVar8 = *(int *)(lVar15 + 0x428);
      if (local_280 * 2 + 1 < *(int *)(lVar15 + 0x430)) {
        bVar20 = (iVar7 < iVar8) + 5;
        bVar16 = (iVar7 < iVar8) + 5;
      }
      else {
        bVar20 = (iVar7 < iVar8) + 3;
        bVar16 = (iVar7 < iVar8) + 3;
      }
      local_274 = local_26c * *(int *)(lVar15 + 0x42c) + local_280;
      local_288 = bVar20;
      (**(code **)(param_1 + 0xcec88))(local_1d0,local_26c,puVar11);
      iVar9 = local_280;
      *(longlong *)((longlong)param_2 + 0x2018) =
           (longlong)(local_26c * *(int *)((longlong)param_2 + 0x2020) * 0x10) +
           *(longlong *)(*(longlong *)(local_240 + 0x2e6d8) + 0x38) + (longlong)(local_280 * 0x10);
      lVar15 = (longlong)(local_280 * local_248) +
               (longlong)(local_26c * *(int *)((longlong)param_2 + 0x40a0) * local_248);
      *(longlong *)((longlong)param_2 + 0x4098) =
           *(longlong *)(*(longlong *)(local_240 + 0x2e6d8) + 0x40) + lVar15;
      *(longlong *)((longlong)param_2 + 0x6118) =
           *(longlong *)(*(longlong *)(local_240 + 0x2e6d8) + 0x48) + lVar15;
      FUN_1425b0090();
      bVar17 = local_288;
      *(longlong *)((longlong)param_2 + 0x6190) =
           (longlong)local_278 + *(longlong *)(local_1f0 + 0x90 + local_210);
      *(longlong *)((longlong)param_2 + 0x6218) =
           *(longlong *)(local_1f0 + 0x98 + local_210) + (longlong)local_260;
      *(longlong *)((longlong)param_2 + 0x62a0) =
           *(longlong *)(local_1f0 + 0xa0 + local_210) + (longlong)local_260;
      local_218 = local_280 * 2;
      *(byte *)**(undefined8 **)((longlong)param_2 + 0x6340) = bVar20;
      uVar21 = (ulonglong)bVar20;
      *(undefined1 *)(**(longlong **)((longlong)param_2 + 0x6340) + 8) = 0;
      iVar7 = *(int *)(local_208 + 0x430);
      iVar8 = *(int *)(local_208 + 0x428);
      bVar20 = (&DAT_149d54990)[uVar21];
      bVar3 = (&DAT_149d549a0)[uVar21];
      *(int *)((longlong)param_2 + 0x6370) = local_214;
      *(uint *)((longlong)param_2 + 0x6374) = ((iVar8 - local_250) - (uint)bVar3) * 0x40;
      *(int *)((longlong)param_2 + 0x6368) = local_280 * -0x80;
      *(uint *)((longlong)param_2 + 0x636c) = ((iVar7 + local_280 * -2) - (uint)bVar20) * 0x40;
      cVar14 = '\0';
      *(undefined1 **)((longlong)param_2 + 0x6350) = local_190;
      puVar11 = local_168;
      if (local_218 <= (int)local_188) {
        puVar11 = (undefined1 *)0x0;
      }
      *(undefined1 **)((longlong)param_2 + 0x6348) = puVar11;
      *(undefined8 *)((longlong)param_2 + 0x14150) = 0;
      if ((local_280 == local_25c) && (local_280 != 0)) {
        *(undefined1 **)((longlong)param_2 + 0x6348) = local_168;
        *(undefined4 *)((longlong)param_2 + 0x14154) = 1;
      }
      *(undefined1 *)(**(longlong **)((longlong)param_2 + 0x6340) + 1) = 0;
      if (bVar5) {
        cVar14 = '\x02' - (local_288 < 6);
      }
      *(char *)(**(longlong **)((longlong)param_2 + 0x6340) + 2) = cVar14;
      memset(param_2,0,0x200);
      FUN_145660f40(param_2,bVar17,0,0);
      iVar7 = FUN_145420a00(param_2);
      lVar15 = local_208;
      local_24c = iVar7;
      iVar8 = FUN_14567ea70(local_208);
      if (iVar7 < iVar8) {
        *(int *)(param_3 + 10) = *(int *)(param_3 + 10) + 1;
      }
      else if ((0 < local_280) && (*(int *)((longlong)param_3 + 0x54) == -1)) {
        *(int *)((longlong)param_3 + 0x54) = local_26c;
      }
      iVar8 = FUN_14567eaa0(lVar15);
      if (iVar7 < iVar8) {
        *(int *)((longlong)param_3 + 0x84) = *(int *)((longlong)param_3 + 0x84) + 1;
      }
      if (*(int *)(lVar15 + 0x45e4) == 0) {
        iVar8 = FUN_14567ea40(lVar15,24000);
        if (iVar7 < iVar8) {
          iVar8 = FUN_14567ead0(param_2,bVar17);
          param_3[4] = (double)((longlong)param_3[4] + (longlong)iVar8);
          lVar15 = local_208;
        }
        else {
          param_3[4] = (double)((longlong)param_3[4] + 0xfa);
        }
      }
      if ((*(int *)(lVar15 + 0x188) != 0) && (*(int *)(lVar15 + 0x45f0) != 8)) {
        if (*(int *)(lVar15 + 0x45f0) == 10) {
          iVar7 = iVar7 >> 4;
        }
        else {
          iVar7 = iVar7 >> 8;
        }
      }
      local_21c = iVar7;
      FUN_1425b0090();
      dVar22 = log((double)iVar7 + 1.0);
      if (10.0 <= dVar22) {
        *param_3 = *param_3 + 1.0;
        if (*(int *)(local_240 + 0xcee14) != 0) {
          *(undefined8 *)(*(longlong *)(local_240 + 0xb4fa8) + (longlong)local_274 * 0x18) =
               0x3ff0000000000000;
        }
      }
      else {
        dVar23 = (10.0 - dVar22) * 0.05 + 1.0;
        *param_3 = *param_3 + dVar23;
        if (*(int *)(local_240 + 0xcee14) != 0) {
          *(double *)(*(longlong *)(local_240 + 0xb4fa8) + (longlong)local_274 * 0x18) = dVar23;
        }
      }
      if (*(int *)(local_240 + 0x2a068) == 0) {
        uVar18 = (uint)**(byte **)((longlong)param_2 + 0x2018);
      }
      else {
        uVar18 = (uint)*(ushort *)((longlong)*(byte **)((longlong)param_2 + 0x2018) * 2);
      }
      if ((0x3f < uVar18) || (9.0 <= dVar22)) {
        param_3[1] = param_3[1] + 1.0;
        if (*(int *)(local_240 + 0xcee14) != 0) {
          *(undefined8 *)(*(longlong *)(local_240 + 0xb4fa8) + 8 + (longlong)local_274 * 0x18) =
               0x3ff0000000000000;
        }
      }
      else {
        dVar22 = (double)(int)(0x40 - uVar18) * 0.01 + 1.0;
        param_3[1] = dVar22 + param_3[1];
        if (*(int *)(local_240 + 0xcee14) != 0) {
          *(double *)(*(longlong *)(local_240 + 0xb4fa8) + 8 + (longlong)local_274 * 0x18) = dVar22;
        }
      }
      iVar7 = iVar7 + 0x400;
      lVar15 = (longlong)iVar7;
      param_3[5] = (double)((longlong)param_3[5] + lVar15);
      *(int *)((longlong)param_2 + 0x6520) = iVar9 * -0x10 + -0x14;
      *(int *)((longlong)param_2 + 0x6524) = (*(int *)(local_240 + 0x2a30c) - local_280) * 0x10 + 4;
      iVar8 = local_280;
      local_180 = lVar15;
      iVar9 = FUN_14567b510(local_240 + 0x29ee0);
      param_1 = local_240;
      if (iVar9 == 0) {
        local_284 = 0;
        local_270 = 0;
        puVar2 = (undefined8 *)(local_240 + 0xb4a48 + uVar21 * 0x30);
        local_1c0 = *puVar2;
        uStack_1b8 = puVar2[1];
        puVar2 = (undefined8 *)(local_240 + 0xb4a58 + uVar21 * 0x30);
        local_1b0 = (code *)*puVar2;
        uStack_1a8 = puVar2[1];
        puVar2 = (undefined8 *)(local_240 + 0xb4a68 + uVar21 * 0x30);
        local_1a0 = *puVar2;
        uStack_198 = puVar2[1];
        lVar15 = (longlong)local_278 + *local_200;
        *(longlong *)((longlong)param_2 + 0x61a0) = lVar15;
        if ((*(byte *)(*(longlong *)((longlong)param_2 + 0x6390) + 0x98) & 8) == 0) {
          if (bVar17 == 3) {
            pcVar12 = FUN_145420d70;
          }
          else if (bVar17 == 4) {
            pcVar12 = FUN_145420d10;
          }
          else {
            pcVar12 = DAT_14c7fbc40;
            if (bVar17 != 5) {
              pcVar12 = DAT_14c7fbc38;
            }
          }
          local_298 = &local_230;
          (*pcVar12)(*(undefined8 *)((longlong)param_2 + 0x2018),
                     *(undefined4 *)((longlong)param_2 + 0x2020),lVar15,
                     *(undefined4 *)((longlong)param_2 + 25000));
          local_27c = local_230;
          iVar8 = local_230;
          iVar9 = local_230;
        }
        else {
          pcVar12 = (code *)FUN_14567e680(bVar17,*(undefined4 *)((longlong)param_2 + 0x63f0));
          local_298 = &local_238;
          (*pcVar12)(*(undefined8 *)((longlong)param_2 + 0x2018),
                     *(undefined4 *)((longlong)param_2 + 0x2020),lVar15,
                     *(undefined4 *)((longlong)param_2 + 25000));
          iVar8 = local_238;
          local_27c = local_238;
          if (bVar16 == 3) {
            pcVar12 = FUN_14562fc60;
          }
          else if (bVar16 == 4) {
            pcVar12 = FUN_14568c8c0;
          }
          else if (bVar16 == 5) {
            pcVar12 = FUN_14568c780;
          }
          else {
            pcVar12 = FUN_14562fc20;
          }
          local_298 = &local_234;
          (*pcVar12)(*(undefined8 *)((longlong)param_2 + 0x2018),
                     *(undefined4 *)((longlong)param_2 + 0x2020),
                     *(undefined8 *)((longlong)param_2 + 0x61a0),
                     *(undefined4 *)((longlong)param_2 + 25000));
          iVar9 = local_234;
          bVar17 = bVar16;
        }
        lVar15 = (longlong)local_278 + *(longlong *)(*(longlong *)(param_1 + 0x2e790) + 0x38);
        if ((*(byte *)(*(longlong *)((longlong)param_2 + 0x6390) + 0x98) & 8) == 0) {
          if (bVar17 == 3) {
            pcVar12 = FUN_145420d70;
          }
          else if (bVar17 == 4) {
            pcVar12 = FUN_145420d10;
          }
          else {
            pcVar12 = DAT_14c7fbc40;
            if (bVar17 != 5) {
              pcVar12 = DAT_14c7fbc38;
            }
          }
          local_298 = &local_228;
          (*pcVar12)(*(undefined8 *)((longlong)param_2 + 0x2018),
                     *(undefined4 *)((longlong)param_2 + 0x2020),lVar15,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x2e790) + 0x10));
          iVar10 = local_228;
        }
        else {
          pcVar12 = (code *)FUN_14567e680(local_288,*(undefined4 *)((longlong)param_2 + 0x63f0));
          local_298 = &local_22c;
          (*pcVar12)(*(undefined8 *)((longlong)param_2 + 0x2018),
                     *(undefined4 *)((longlong)param_2 + 0x2020),lVar15);
          iVar10 = local_22c;
        }
        piVar6 = local_1f8;
        if (iVar10 < 0x81) {
LAB_14567cc44:
          param_3[3] = (double)((longlong)param_3[3] + (longlong)iVar8);
        }
        else {
          local_298 = &local_27c;
          FUN_14567e730(param_1,param_2,local_1f8,&local_284);
          if (bVar17 == 3) {
            local_1b0 = FUN_145420d70;
          }
          else if (bVar17 == 4) {
            local_1b0 = FUN_145420d10;
          }
          else {
            local_1b0 = DAT_14c7fbc40;
            if (bVar17 != 5) {
              local_1b0 = DAT_14c7fbc38;
            }
          }
          if ((*(byte *)(*(longlong *)((longlong)param_2 + 0x6390) + 0x98) & 8) != 0) {
            if (bVar17 == 3) {
              local_1b0 = FUN_14562fc60;
            }
            else if (bVar17 == 4) {
              local_1b0 = FUN_14568c8c0;
            }
            else if (bVar17 == 5) {
              local_1b0 = FUN_14568c780;
            }
            else {
              local_1b0 = FUN_14562fc20;
            }
          }
          local_298 = (int *)((ulonglong)local_298 & 0xffffffff00000000);
          iVar9 = FUN_1455aaa20(param_2,&local_284,piVar6,&local_1c0);
          iVar8 = local_27c;
          if (*piVar6 != 0) {
            local_298 = &local_254;
            local_254 = 0x7fffffff;
            FUN_14567e730(param_1,param_2,&local_268,&local_270);
            iVar10 = local_254;
            iVar8 = local_27c;
            if (local_254 < local_27c) {
              local_284 = local_270;
              local_298 = (int *)((ulonglong)local_298 & 0xffffffff00000000);
              iVar9 = FUN_1455aaa20(param_2,&local_270,&local_268,&local_1c0);
              iVar8 = iVar10;
            }
          }
          if ((*(uint *)(param_1 + 0x2e4c4) < 2) || (local_1e8 == 0)) goto LAB_14567cc44;
          lVar15 = *(longlong *)(local_1e8 + 0x38) + (longlong)local_278;
          *(longlong *)((longlong)param_2 + 0x61a0) = lVar15;
          if ((*(byte *)(*(longlong *)((longlong)param_2 + 0x6390) + 0x98) & 8) == 0) {
            if (bVar17 == 3) {
              pcVar12 = FUN_145420d70;
            }
            else if (bVar17 == 4) {
              pcVar12 = FUN_145420d10;
            }
            else {
              pcVar12 = DAT_14c7fbc40;
              if (bVar17 != 5) {
                pcVar12 = DAT_14c7fbc38;
              }
            }
            local_298 = &local_220;
            (*pcVar12)(*(undefined8 *)((longlong)param_2 + 0x2018),
                       *(undefined4 *)((longlong)param_2 + 0x2020),lVar15,
                       *(undefined4 *)((longlong)param_2 + 25000));
            local_27c = local_220;
          }
          else {
            pcVar12 = (code *)FUN_14567e680(local_288,*(undefined4 *)((longlong)param_2 + 0x63f0));
            local_298 = &local_224;
            (*pcVar12)(*(undefined8 *)((longlong)param_2 + 0x2018),
                       *(undefined4 *)((longlong)param_2 + 0x2020),lVar15,
                       *(undefined4 *)((longlong)param_2 + 25000));
            local_27c = local_224;
          }
          local_298 = &local_27c;
          FUN_14567e730(param_1,param_2,&local_268,&local_270);
          if ((local_27c < iVar8) && (local_27c < iVar7)) {
            *(int *)((longlong)param_3 + 0x34) = *(int *)((longlong)param_3 + 0x34) + 1;
          }
          *(longlong *)((longlong)param_2 + 0x61a0) = (longlong)local_278 + *local_200;
          *(longlong *)((longlong)param_2 + 0x6228) = (longlong)local_260 + *local_1e0;
          *(longlong *)((longlong)param_2 + 0x62b0) = *local_1d8 + (longlong)local_260;
          lVar15 = (longlong)local_27c;
          if (iVar7 <= local_27c) {
            lVar15 = local_180;
          }
          param_3[3] = (double)((longlong)param_3[3] + lVar15);
        }
        iVar10 = local_264;
        *local_1f8 = 0;
        if (iVar7 < iVar8) {
          if (local_264 <= local_24c) {
            param_3[9] = param_3[9] + 1.0;
            goto LAB_14567cef6;
          }
          iVar8 = FUN_14567ead0(param_2,local_288);
          param_3[4] = (double)((longlong)param_3[4] + (longlong)iVar8);
          iVar8 = local_280;
          if (iVar9 < iVar10) {
            param_3[8] = param_3[8] + 1.0;
          }
          else {
            param_3[9] = param_3[9] + 1.0;
          }
        }
        else {
          FUN_1425b0090();
          bVar16 = local_288;
          if ((iVar8 * 10 < local_21c * 9) || (0x7ff < iVar7)) {
            if ((0x2000 < iVar7) && (iVar7 < iVar8 * 3)) {
              dVar22 = (double)iVar7;
              if (0.0 <= dVar22) {
                dVar22 = dVar22 + 1e-06;
              }
              else {
                dVar22 = dVar22 - 1e-06;
              }
              param_3[7] = (double)iVar8 / dVar22 + param_3[7];
              if (*(int *)(param_1 + 0xcee14) != 0) {
                *(double *)(*(longlong *)(param_1 + 0xb4fa8) + 0x10 + (longlong)local_274 * 0x18) =
                     (double)iVar8 / dVar22;
              }
            }
          }
          else {
            param_3[7] = param_3[7] + 1.0;
            if (*(int *)(param_1 + 0xcee14) != 0) {
              *(undefined8 *)(*(longlong *)(param_1 + 0xb4fa8) + 0x10 + (longlong)local_274 * 0x18)
                   = 0x3ff0000000000000;
            }
          }
          local_284 = CONCAT22(local_284._2_2_ << 3,(short)local_284 << 3);
          *(undefined1 *)(**(longlong **)((longlong)param_2 + 0x6340) + 1) = 0xd;
          *(int *)(**(longlong **)((longlong)param_2 + 0x6340) + 0xc) = local_284;
          *(undefined1 *)(**(longlong **)((longlong)param_2 + 0x6340) + 2) = 0;
          *(undefined1 *)(**(longlong **)((longlong)param_2 + 0x6340) + 8) = 1;
          *(undefined1 *)(**(longlong **)((longlong)param_2 + 0x6340) + 9) = 0xff;
          FUN_145478fd0((longlong)param_2 + 0x6180,local_250,local_218,local_288);
          FUN_14565f490(param_2,bVar16);
          uVar18 = (uint)(short)local_284;
          uVar19 = (uint)local_284._2_2_;
          *(int *)((longlong)param_3 + 0x5c) = *(int *)((longlong)param_3 + 0x5c) + uVar18;
          *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + 1;
          *(uint *)(param_3 + 0xc) =
               *(int *)(param_3 + 0xc) + ((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f));
          *(int *)((longlong)param_3 + 100) = *(int *)((longlong)param_3 + 100) + uVar19;
          *(uint *)(param_3 + 0xd) =
               *(int *)(param_3 + 0xd) + ((uVar19 ^ (int)uVar19 >> 0x1f) - ((int)uVar19 >> 0x1f));
          param_3[0xe] = (double)((longlong)param_3[0xe] + (longlong)(int)(uVar18 * uVar18));
          param_3[0xf] = (double)((longlong)param_3[0xf] + (longlong)(int)(uVar19 * uVar19));
          *local_1f8 = local_284;
          if (local_284 != 0) {
            *(int *)(param_3 + 0xb) = *(int *)(param_3 + 0xb) + 1;
            iVar7 = *(int *)(param_1 + 0x2a304) / 2;
            if (local_26c < iVar7) {
              if ((short)local_284 < 1) {
                if ((short)local_284 < 0) {
                  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
                }
              }
              else {
LAB_14567ce30:
                *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
              }
            }
            else if (iVar7 < local_26c) {
              if ((short)local_284 < 1) {
                if ((short)local_284 < 0) goto LAB_14567ce30;
              }
              else {
                *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
              }
            }
            iVar7 = *(int *)(param_1 + 0x2a30c) / 2;
            if (local_280 < iVar7) {
              if (local_284._2_2_ < 1) {
                if (local_284 < 0) {
                  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
                }
              }
              else {
LAB_14567ce6b:
                *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
              }
            }
            else if (iVar7 < local_280) {
              if (local_284._2_2_ < 1) {
                if (local_284 < 0) goto LAB_14567ce6b;
              }
              else {
                *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
              }
            }
          }
          iVar7 = iVar8;
          if (local_24c < local_264) {
            iVar8 = FUN_14567ead0(param_2,bVar16);
            param_3[4] = (double)((longlong)param_3[4] + (longlong)iVar8);
            iVar8 = local_280;
          }
          else {
LAB_14567cef6:
            param_3[4] = (double)((longlong)param_3[4] + 0xfa);
            iVar8 = local_280;
          }
        }
      }
      else {
        param_3[3] = (double)((longlong)param_3[3] + lVar15);
      }
      local_278 = local_278 + 0x10;
      param_3[2] = (double)((longlong)param_3[2] + (longlong)iVar7);
      local_260 = local_260 + local_248;
      if ((*(int *)(param_1 + 0xcee10) != 0) && (iVar8 == (int)local_1c8 + -1)) {
        *(double *)(local_178 + 0x7b0) = *(double *)(local_178 + 0x7b0) + *param_3;
        *(double *)(local_178 + 0x7b8) = *(double *)(local_178 + 0x7b8) + param_3[1];
        *(longlong *)(local_178 + 0x7c0) = *(longlong *)(local_178 + 0x7c0) + (longlong)param_3[2];
        *(longlong *)(local_178 + 0x7c8) = *(longlong *)(local_178 + 0x7c8) + (longlong)param_3[3];
        *(longlong *)(local_178 + 2000) = *(longlong *)(local_178 + 2000) + (longlong)param_3[4];
        *(longlong *)(local_178 + 0x7d8) = *(longlong *)(local_178 + 0x7d8) + (longlong)param_3[5];
        *(int *)(local_178 + 0x7e0) = *(int *)(local_178 + 0x7e0) + *(int *)(param_3 + 6);
        *(int *)(local_178 + 0x7e4) =
             *(int *)(local_178 + 0x7e4) + *(int *)((longlong)param_3 + 0x34);
        *(double *)(local_178 + 0x7e8) = param_3[7] + *(double *)(local_178 + 0x7e8);
        *(double *)(local_178 + 0x7f0) = param_3[8] + *(double *)(local_178 + 0x7f0);
        *(double *)(local_178 + 0x7f8) = param_3[9] + *(double *)(local_178 + 0x7f8);
        *(int *)(local_178 + 0x800) = *(int *)(local_178 + 0x800) + *(int *)(param_3 + 10);
        *(int *)(local_178 + 0x808) = *(int *)(local_178 + 0x808) + *(int *)(param_3 + 0xb);
        *(int *)(local_178 + 0x80c) =
             *(int *)(local_178 + 0x80c) + *(int *)((longlong)param_3 + 0x5c);
        *(int *)(local_178 + 0x810) = *(int *)(local_178 + 0x810) + *(int *)(param_3 + 0xc);
        *(int *)(local_178 + 0x814) =
             *(int *)(local_178 + 0x814) + *(int *)((longlong)param_3 + 100);
        *(int *)(local_178 + 0x818) = *(int *)(local_178 + 0x818) + *(int *)(param_3 + 0xd);
        *(longlong *)(local_178 + 0x820) = *(longlong *)(local_178 + 0x820) + (longlong)param_3[0xe]
        ;
        *(longlong *)(local_178 + 0x828) = *(longlong *)(local_178 + 0x828) + (longlong)param_3[0xf]
        ;
        *(int *)(local_178 + 0x830) = *(int *)(local_178 + 0x830) + *(int *)(param_3 + 0x10);
        *(int *)(local_178 + 0x834) =
             *(int *)(local_178 + 0x834) + *(int *)((longlong)param_3 + 0x84);
        iVar7 = *(int *)((longlong)param_3 + 0x54);
        iVar8 = *(int *)(local_178 + 0x804);
        iVar9 = iVar8;
        if (iVar7 <= iVar8) {
          iVar9 = iVar7;
        }
        if (iVar9 == -1) {
          iVar9 = iVar8;
          if (iVar8 <= iVar7) {
            iVar9 = iVar7;
          }
        }
        else {
          iVar9 = iVar7;
          if (iVar8 < iVar7) {
            iVar9 = iVar8;
          }
        }
        *(int *)(local_178 + 0x804) = iVar9;
      }
      (**(code **)(param_1 + 0xcec90))(local_1d0,local_26c,local_258,local_170 & 0xffffffff);
      lVar15 = param_1 + 0x29ee0;
      local_280 = local_280 + 1;
      local_258 = local_258 + 1;
      puVar11 = (undefined1 *)(ulonglong)local_258;
    } while (local_280 < (int)local_1c8);
  }
  FUN_1425b0090();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c8 ^ (ulonglong)auStack_2b8);
}



// FUNCTION 14567d140 FUN_14567d140 body=1777 status=ok
// SIG undefined FUN_14567d140(void)

void FUN_14567d140(longlong param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  puVar10 = (undefined8 *)(param_1 + 0xb4ce0);
  *puVar10 = 0;
  *(undefined8 *)(param_1 + 0xb4ce8) = 0;
  pdVar1 = (double *)(param_1 + 0xb4da0);
  *(undefined8 *)(param_1 + 0xb4cf0) = 0;
  pdVar2 = (double *)(param_1 + 0xb4d98);
  *pdVar1 = 0.0;
  *pdVar2 = 1.0;
  *(undefined8 *)(param_1 + 0xb4cf8) = 0;
  *(undefined8 *)(param_1 + 0xb4d00) = 0;
  *(undefined8 *)(param_1 + 0xb4d08) = 0;
  *(undefined8 *)(param_1 + 0xb4d10) = 0;
  *(undefined8 *)(param_1 + 0xb4d18) = 0;
  *(undefined8 *)(param_1 + 0xb4d20) = 0;
  *(undefined8 *)(param_1 + 0xb4d28) = 0;
  *(undefined8 *)(param_1 + 0xb4d40) = 0;
  *(undefined8 *)(param_1 + 0xb4d48) = 0;
  *(undefined8 *)(param_1 + 0xb4d30) = 0;
  *(undefined8 *)(param_1 + 0xb4d38) = 0;
  *(undefined8 *)(param_1 + 0xb4d50) = 0;
  *(undefined8 *)(param_1 + 0xb4d58) = 0;
  *(undefined8 *)(param_1 + 0xb4d60) = 0;
  *(undefined8 *)(param_1 + 0xb4d68) = 0;
  *(undefined8 *)(param_1 + 0xb4d70) = 0;
  *(undefined8 *)(param_1 + 0xb4d78) = 0;
  *(undefined8 *)(param_1 + 0xb4d80) = 0;
  *(undefined8 *)(param_1 + 0xb4d88) = 0;
  *(undefined8 *)(param_1 + 0xb4d90) = 0;
  *(undefined8 *)(param_1 + 0xb4da8) = 0;
  *(undefined8 *)(param_1 + 0xb4ea8) = 0;
  *(undefined8 *)(param_1 + 0xb4eb0) = 0;
  *(undefined8 *)(param_1 + 0xb4eb8) = 0;
  *(undefined8 *)(param_1 + 0xb4ec0) = 0;
  *(undefined8 *)(param_1 + 0xb4ec8) = 0;
  *(undefined8 *)(param_1 + 0xb4ed0) = 0;
  *(undefined8 *)(param_1 + 0xb4ed8) = 0;
  *(undefined8 *)(param_1 + 0xb4ee0) = 0;
  *(undefined8 *)(param_1 + 0xb4ee8) = 0;
  *(undefined8 *)(param_1 + 0xb4ef0) = 0;
  *(undefined8 *)(param_1 + 0xb4f08) = 0;
  *(undefined8 *)(param_1 + 0xb4f10) = 0;
  *(undefined8 *)(param_1 + 0xb4ef8) = 0;
  *(undefined8 *)(param_1 + 0xb4f00) = 0;
  *(undefined8 *)(param_1 + 0xb4f18) = 0;
  *(undefined8 *)(param_1 + 0xb4f20) = 0;
  *(undefined8 *)(param_1 + 0xb4f28) = 0;
  *(undefined8 *)(param_1 + 0xb4f30) = 0;
  *(undefined8 *)(param_1 + 0xb4f38) = 0;
  *(undefined8 *)(param_1 + 0xb4f40) = 0;
  *(undefined8 *)(param_1 + 0xb4f48) = 0;
  *(undefined8 *)(param_1 + 0xb4f50) = 0;
  *(undefined8 *)(param_1 + 0xb4f58) = 0;
  *(undefined8 *)(param_1 + 0xb4f68) = 0;
  *(undefined8 *)(param_1 + 0xb4f60) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xb4f70) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0xb4e90);
  if (puVar4 != (undefined8 *)0x0) {
    uVar7 = puVar4[1];
    *puVar10 = *puVar4;
    *(undefined8 *)(param_1 + 0xb4ce8) = uVar7;
    uVar7 = puVar4[3];
    *(undefined8 *)(param_1 + 0xb4cf0) = puVar4[2];
    *(undefined8 *)(param_1 + 0xb4cf8) = uVar7;
    uVar7 = puVar4[5];
    dVar6 = 0.0;
    *(undefined8 *)(param_1 + 0xb4d00) = puVar4[4];
    *(undefined8 *)(param_1 + 0xb4d08) = uVar7;
    uVar7 = puVar4[7];
    dVar14 = 0.0;
    *(undefined8 *)(param_1 + 0xb4d10) = puVar4[6];
    *(undefined8 *)(param_1 + 0xb4d18) = uVar7;
    uVar7 = puVar4[9];
    *(undefined8 *)(param_1 + 0xb4d20) = puVar4[8];
    *(undefined8 *)(param_1 + 0xb4d28) = uVar7;
    uVar7 = puVar4[0xb];
    *(undefined8 *)(param_1 + 0xb4d30) = puVar4[10];
    *(undefined8 *)(param_1 + 0xb4d38) = uVar7;
    uVar7 = puVar4[0xd];
    *(undefined8 *)(param_1 + 0xb4d40) = puVar4[0xc];
    *(undefined8 *)(param_1 + 0xb4d48) = uVar7;
    uVar7 = puVar4[0xf];
    *(undefined8 *)(param_1 + 0xb4d50) = puVar4[0xe];
    *(undefined8 *)(param_1 + 0xb4d58) = uVar7;
    uVar7 = puVar4[0x11];
    *(undefined8 *)(param_1 + 0xb4d60) = puVar4[0x10];
    *(undefined8 *)(param_1 + 0xb4d68) = uVar7;
    uVar7 = puVar4[0x13];
    *(undefined8 *)(param_1 + 0xb4d70) = puVar4[0x12];
    *(undefined8 *)(param_1 + 0xb4d78) = uVar7;
    uVar7 = puVar4[0x15];
    *(undefined8 *)(param_1 + 0xb4d80) = puVar4[0x14];
    *(undefined8 *)(param_1 + 0xb4d88) = uVar7;
    uVar7 = puVar4[0x17];
    *(undefined8 *)(param_1 + 0xb4d90) = puVar4[0x16];
    *(undefined8 *)(param_1 + 0xb4d98) = uVar7;
    uVar7 = puVar4[0x19];
    *(undefined8 *)(param_1 + 0xb4da0) = puVar4[0x18];
    *(undefined8 *)(param_1 + 0xb4da8) = uVar7;
    puVar9 = *(undefined8 **)(param_1 + 0xb4e80);
    *(undefined8 *)(param_1 + 0xb4ea8) = *puVar10;
    *(undefined8 *)(param_1 + 0xb4eb0) = *(undefined8 *)(param_1 + 0xb4ce8);
    *(undefined8 *)(param_1 + 0xb4eb8) = *(undefined8 *)(param_1 + 0xb4cf0);
    *(undefined8 *)(param_1 + 0xb4ec0) = *(undefined8 *)(param_1 + 0xb4cf8);
    *(undefined8 *)(param_1 + 0xb4ec8) = *(undefined8 *)(param_1 + 0xb4d00);
    *(undefined8 *)(param_1 + 0xb4ed0) = *(undefined8 *)(param_1 + 0xb4d08);
    *(undefined8 *)(param_1 + 0xb4ed8) = *(undefined8 *)(param_1 + 0xb4d10);
    *(undefined8 *)(param_1 + 0xb4ee0) = *(undefined8 *)(param_1 + 0xb4d18);
    *(undefined8 *)(param_1 + 0xb4ee8) = *(undefined8 *)(param_1 + 0xb4d20);
    *(undefined8 *)(param_1 + 0xb4ef0) = *(undefined8 *)(param_1 + 0xb4d28);
    *(undefined8 *)(param_1 + 0xb4ef8) = *(undefined8 *)(param_1 + 0xb4d30);
    *(undefined8 *)(param_1 + 0xb4f00) = *(undefined8 *)(param_1 + 0xb4d38);
    *(undefined8 *)(param_1 + 0xb4f08) = *(undefined8 *)(param_1 + 0xb4d40);
    *(undefined8 *)(param_1 + 0xb4f10) = *(undefined8 *)(param_1 + 0xb4d48);
    *(undefined8 *)(param_1 + 0xb4f18) = *(undefined8 *)(param_1 + 0xb4d50);
    *(undefined8 *)(param_1 + 0xb4f20) = *(undefined8 *)(param_1 + 0xb4d58);
    *(undefined8 *)(param_1 + 0xb4f28) = *(undefined8 *)(param_1 + 0xb4d60);
    *(undefined8 *)(param_1 + 0xb4f30) = *(undefined8 *)(param_1 + 0xb4d68);
    *(undefined8 *)(param_1 + 0xb4f38) = *(undefined8 *)(param_1 + 0xb4d70);
    *(undefined8 *)(param_1 + 0xb4f40) = *(undefined8 *)(param_1 + 0xb4d78);
    *(undefined8 *)(param_1 + 0xb4f48) = *(undefined8 *)(param_1 + 0xb4d80);
    *(undefined8 *)(param_1 + 0xb4f50) = *(undefined8 *)(param_1 + 0xb4d88);
    *(undefined8 *)(param_1 + 0xb4f58) = *(undefined8 *)(param_1 + 0xb4d90);
    *(undefined8 *)(param_1 + 0xb4f60) = *(undefined8 *)(param_1 + 0xb4d98);
    dVar3 = *(double *)(param_1 + 0xb4da0);
    *(undefined8 *)(param_1 + 0xb4f68) = *(undefined8 *)(param_1 + 0xb4da0);
    *(undefined8 *)(param_1 + 0xb4f70) = *(undefined8 *)(param_1 + 0xb4da8);
    dVar5 = *(double *)(param_1 + 0xb4ce8) / dVar3;
    if (*(int *)(param_1 + 0x2e5d8) == 0) {
      if (*(int *)(param_1 + 0x2e5d8) == 0) {
        dVar5 = (dVar5 * *(double *)(param_1 + 0xb4cf8)) / dVar3;
      }
      else {
        dVar5 = dVar5 * *(double *)(param_1 + 0xb4f88);
      }
      dVar13 = 0.0;
      if (puVar9 < puVar4) {
        iVar8 = *(int *)(param_1 + 0x2e5cc);
        iVar11 = *(int *)(param_1 + 0x18);
        puVar10 = puVar9;
        do {
          if (0.0 <= dVar5) {
            dVar3 = dVar5 + 1e-06;
          }
          else {
            dVar3 = dVar5 - 1e-06;
          }
          dVar3 = pow(((double)puVar10[3] * (double)puVar10[1]) / dVar3,(double)iVar8 / 100.0);
          dVar12 = 1.0 - (((double)puVar10[0xe] + (double)puVar10[0xe]) / (double)iVar11 +
                         (double)puVar10[0xc] * 0.5);
          dVar13 = 0.5;
          if ((0.5 <= dVar12) && (dVar13 = 1.0, dVar12 <= 1.0)) {
            dVar13 = dVar12;
          }
          dVar13 = pow(dVar13,0.5);
          puVar10 = puVar10 + 0x1a;
          dVar14 = dVar14 + dVar13 * dVar3 * dVar5;
          dVar13 = dVar14;
        } while (puVar10 < puVar4);
      }
      dVar3 = *pdVar1;
      if (0.0 <= dVar3) {
        dVar3 = dVar3 + 1e-06;
      }
      else {
        dVar3 = dVar3 - 1e-06;
      }
      dVar13 = dVar13 / dVar3;
      *(double *)(param_1 + 0xb4f88) = dVar13;
    }
    else {
      dVar13 = (double)*(int *)(param_1 + 0x2e5d8) / 10.0;
      *(double *)(param_1 + 0xb4f88) = dVar13;
      if (*(int *)(param_1 + 0x2e5d8) == 0) {
        dVar5 = (dVar5 * *(double *)(param_1 + 0xb4cf8)) / dVar3;
      }
      else {
        dVar5 = dVar13 * dVar5;
      }
    }
    for (; puVar9 < puVar4; puVar9 = puVar9 + 0x1a) {
      dVar3 = (double)FUN_14567e4f0(param_1 + 0x2e510,param_1,puVar9,dVar13,dVar5);
      dVar6 = dVar6 + dVar3;
    }
    *(double *)(param_1 + 0xb4f90) = dVar6;
    if (*(int *)(param_1 + 0x2e5d8) != 0) {
      *(longlong *)(param_1 + 0x2e548) =
           (longlong)((dVar6 / *pdVar1) * (double)*(longlong *)(param_1 + 0x2e548));
    }
    FUN_145620940(param_1,SUB84((*pdVar1 * 10000000.0) / *pdVar2,0));
    *(undefined4 *)(param_1 + 0xb4fd8) = 1;
    *(longlong *)(param_1 + 0xb4f80) =
         (longlong)(((double)*(longlong *)(param_1 + 0x2e548) * *pdVar2) / 10000000.0);
    *(undefined8 *)(param_1 + 0xb4348) = 0;
    *(undefined8 *)(param_1 + 0xb4350) = 0;
    *(undefined4 *)(param_1 + 0xb4370) = 0;
    *(undefined8 *)(param_1 + 0xb4fc8) = 0x3ff0000000000000;
    *(undefined4 *)(param_1 + 0xb4fdc) = 100;
    *(undefined4 *)(param_1 + 0xb4fe0) = 100;
    *(undefined4 *)(param_1 + 0xb4fd0) = 1;
    *(undefined4 *)(param_1 + 0xb4fd4) = 1;
    if (*(int *)(param_1 + 0x2e5bc) != 0) {
      iVar8 = *(int *)(param_1 + 0x2a048) * 0x10;
      iVar11 = *(int *)(param_1 + 0x2a04c) * 0x10;
      *(int *)(param_1 + 0xb43cc) = (int)(iVar8 + (iVar8 >> 0x1f & 0xfU)) >> 4;
      *(int *)(param_1 + 0xb43d4) = (int)(iVar11 + (iVar11 >> 0x1f & 0xfU)) >> 4;
      *(int *)(param_1 + 0xb43d0) = iVar8 / 0x18;
      *(int *)(param_1 + 0xb43d8) = iVar11 / 0x18;
      iVar8 = FUN_145617800(param_1,0,*(undefined4 *)(param_1 + 0xb4390));
      iVar8 = *(int *)(param_1 + 0xb4390) + iVar8;
      if (iVar8 <= *(int *)(param_1 + 0xb4394)) {
        iVar8 = *(int *)(param_1 + 0xb4394);
      }
      *(int *)(param_1 + 0xb43dc) = iVar8;
      iVar8 = FUN_145617800(param_1,1,*(undefined4 *)(param_1 + 0xb4390));
      iVar8 = *(int *)(param_1 + 0xb4390) + iVar8;
      if (iVar8 <= *(int *)(param_1 + 0xb4394)) {
        iVar8 = *(int *)(param_1 + 0xb4394);
      }
      *(int *)(param_1 + 0xb43e0) = iVar8;
      iVar8 = FUN_145617800(param_1,2,*(undefined4 *)(param_1 + 0xb4390));
      iVar8 = *(int *)(param_1 + 0xb4390) + iVar8;
      if (iVar8 <= *(int *)(param_1 + 0xb4394)) {
        iVar8 = *(int *)(param_1 + 0xb4394);
      }
      *(int *)(param_1 + 0xb43e4) = iVar8;
      iVar8 = FUN_145617800(param_1,3,*(undefined4 *)(param_1 + 0xb4390));
      iVar8 = *(int *)(param_1 + 0xb4390) + iVar8;
      if (iVar8 <= *(int *)(param_1 + 0xb4394)) {
        iVar8 = *(int *)(param_1 + 0xb4394);
      }
      *(int *)(param_1 + 0xb43e8) = iVar8;
      iVar8 = FUN_145617800(param_1,4,*(undefined4 *)(param_1 + 0xb4390));
      iVar8 = *(int *)(param_1 + 0xb4390) + iVar8;
      if (iVar8 <= *(int *)(param_1 + 0xb4394)) {
        iVar8 = *(int *)(param_1 + 0xb4394);
      }
      *(int *)(param_1 + 0xb43ec) = iVar8;
    }
    *(undefined4 *)(param_1 + 0xb4ff8) = 0;
  }
  return;
}



// FUNCTION 14567d840 FUN_14567d840 body=1708 status=ok
// SIG undefined FUN_14567d840(void)

void FUN_14567d840(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  double *pdVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar5 = *(undefined4 *)(param_1 + 0x2e4c4);
  if ((*(int *)(param_1 + 0x2e4c8) == 0) && (iVar4 = FUN_14568eb90(param_1 + 0xcef28), iVar4 != 0))
  {
    FUN_144d82810(param_1 + 0x29ee0,iVar4,"vp9_extrc_send_firstpass_stats() failed");
  }
  if (*(longlong *)(param_1 + 0xb4e80) != 0) {
    if (*(int *)(param_1 + 0x2e4c4) == 0) {
      iVar4 = *(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048);
      if (*(int *)(param_1 + 0xb63b4) == 0) {
        *(undefined8 *)(param_1 + 0xb63d0) = 0x3ff0000000000000;
        *(undefined8 *)(param_1 + 0xb6408) = 0x4058000000000000;
        *(undefined8 *)(param_1 + 0xb63b8) = 0x4010000000000000;
        *(undefined8 *)(param_1 + 0xb63c0) = 0x40c86a0000000000;
        *(undefined8 *)(param_1 + 0xb63c8) = 0x3fe8000000000000;
        *(undefined8 *)(param_1 + 0xb63e0) = 0x4044000000000000;
        *(undefined8 *)(param_1 + 0xb6400) = 0x40b5180000000000;
        *(undefined8 *)(param_1 + 0xb6410) = 0x3fe0000000000000;
        *(undefined8 *)(param_1 + 0xb63e8) = 0x4058000000000000;
        *(undefined8 *)(param_1 + 0xb63f0) = 0x4058000000000000;
        *(undefined8 *)(param_1 + 0xb63f8) = 0x40b5180000000000;
        if (iVar4 < 0xe1000) {
          uVar10 = 0x409f400000000000;
        }
        else {
          uVar10 = 0x407f400000000000;
          if (0x1fa3ff < iVar4) {
            uVar10 = 0x406f400000000000;
          }
        }
        *(undefined8 *)(param_1 + 0xb63d8) = uVar10;
      }
      else {
        dVar9 = *(double *)(param_1 + 0xb63c0) * 12500.0;
        dVar8 = *(double *)(param_1 + 0xb63c8) * 0.75;
        auVar1._8_4_ = SUB84(dVar9,0);
        auVar1._0_8_ = *(double *)(param_1 + 0xb63b8) * 4.0;
        auVar1._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0xb63b8) = auVar1;
        *(double *)(param_1 + 0xb63c8) = dVar8;
        if (1.0 < dVar8) {
          *(undefined8 *)(param_1 + 0xb63c8) = 0x3ff0000000000000;
        }
        *(double *)(param_1 + 0xb6400) = *(double *)(param_1 + 0xb6400) * 5400.0;
        *(double *)(param_1 + 0xb6408) = *(double *)(param_1 + 0xb6408) * 96.0;
        dVar9 = *(double *)(param_1 + 0xb63e8) * 96.0;
        auVar3._8_4_ = SUB84(dVar9,0);
        auVar3._0_8_ = *(double *)(param_1 + 0xb63e0) * 40.0;
        auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0xb63e0) = auVar3;
        dVar9 = *(double *)(param_1 + 0xb63f8) * 5400.0;
        dVar8 = *(double *)(param_1 + 0xb6410) * 0.5;
        auVar2._8_4_ = SUB84(dVar9,0);
        auVar2._0_8_ = *(double *)(param_1 + 0xb63f0) * 96.0;
        auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0xb63f0) = auVar2;
        *(double *)(param_1 + 0xb6410) = dVar8;
        if (1.0 < dVar8) {
          *(undefined8 *)(param_1 + 0xb6410) = 0x3ff0000000000000;
        }
        dVar9 = *(double *)(param_1 + 0xb63d8);
        if (iVar4 < 0xe1000) {
          *(double *)(param_1 + 0xb63d8) = dVar9 * 2000.0;
        }
        else if (iVar4 < 0x1fa400) {
          *(double *)(param_1 + 0xb63d8) = dVar9 * 500.0;
        }
        else {
          *(double *)(param_1 + 0xb63d8) = dVar9 * 250.0;
        }
      }
    }
    uVar7 = (ulonglong)*(byte *)(param_1 + 0xb5014);
    if (*(int *)(param_1 + 0xb5408 + uVar7 * 4) == 3) {
      pdVar6 = (double *)
               ((ulonglong)
                ((uint)*(byte *)(uVar7 + 0xb20 + param_1 + 0xb4cd8) + *(int *)(param_1 + 0x2e4c4)) *
                0xd0 + *(longlong *)(param_1 + 0xb4e88));
      local_108 = *pdVar6;
      dStack_100 = pdVar6[1];
      local_f8 = pdVar6[2];
      dStack_f0 = pdVar6[3];
      local_e8 = pdVar6[4];
      dStack_e0 = pdVar6[5];
      local_d8 = pdVar6[6];
      dStack_d0 = pdVar6[7];
      local_c8 = pdVar6[8];
      dStack_c0 = pdVar6[9];
      local_b8 = pdVar6[10];
      dStack_b0 = pdVar6[0xb];
      local_a8 = pdVar6[0xc];
      dStack_a0 = pdVar6[0xd];
      local_88 = pdVar6[0x10];
      dStack_80 = pdVar6[0x11];
      local_98 = pdVar6[0xe];
      dStack_90 = pdVar6[0xf];
      local_78 = pdVar6[0x12];
      dStack_70 = pdVar6[0x13];
      local_68 = pdVar6[0x14];
      dStack_60 = pdVar6[0x15];
      local_58 = pdVar6[0x16];
      dStack_50 = pdVar6[0x17];
      local_48 = *(undefined4 *)(pdVar6 + 0x18);
      uStack_44 = *(undefined4 *)((longlong)pdVar6 + 0xc4);
      uStack_40 = *(undefined4 *)(pdVar6 + 0x19);
      uStack_3c = *(undefined4 *)((longlong)pdVar6 + 0xcc);
      FUN_1456189e0(param_1,uVar7);
      uVar5 = FUN_145617450(param_1,*(undefined4 *)
                                     (param_1 + 0xb5aec +
                                     (ulonglong)*(byte *)(param_1 + 0xb5014) * 4));
      *(undefined4 *)(param_1 + 0xb4278) = uVar5;
      *(undefined4 *)(param_1 + 0x2a2e4) = 1;
      dVar9 = log(local_f8 * 256.0 + 1.0);
      *(double *)(param_1 + 0xb4fa0) = dStack_a0;
      *(double *)(param_1 + 0xb4f98) = dVar9;
    }
    else {
      FUN_1425b0090();
      if (*(int *)(param_1 + 0x2e57c) == 3) {
        *(undefined4 *)(param_1 + 0xb4fe4) = *(undefined4 *)(param_1 + 0x2e5b0);
      }
      else if (*(int *)(param_1 + 0x2e4c4) == 0) {
        dVar9 = *(double *)(param_1 + 0xb4f68);
        iVar4 = FUN_14567f180(param_1,SUB84(*(double *)(param_1 + 0xb4ec0) / dVar9,0),
                              SUB84((*(double *)(param_1 + 0xb4f18) + *(double *)(param_1 + 0xb4f18)
                                    ) / ((double)*(int *)(param_1 + 0x2a304) * dVar9) +
                                    *(double *)(param_1 + 0xb4f08) / dVar9,0),
                              *(double *)(param_1 + 0xb4ed0) / dVar9,
                              (int)(*(longlong *)(param_1 + 0xb4f80) /
                                   (longlong)(int)(*(double *)(param_1 + 0xb4da0) - 0.0)));
        *(int *)(param_1 + 0xb4fe4) = iVar4;
        *(int *)(param_1 + 0xb4fe8) = iVar4;
        *(int *)(param_1 + 0xb4314) = iVar4;
        *(int *)(param_1 + 0xb428c) = iVar4;
        uVar10 = FUN_145614250(iVar4,*(undefined4 *)(param_1 + 0x2e4d0));
        *(undefined8 *)(param_1 + 0xb4330) = uVar10;
        *(int *)(param_1 + 0xb4324) = iVar4;
        iVar4 = (*(int *)(param_1 + 0x2e5ac) + iVar4) / 2;
        *(int *)(param_1 + 0xb4288) = iVar4;
        *(int *)(param_1 + 0xb4320) = iVar4;
      }
      memset(&local_108,0,0xd0);
      iVar4 = FUN_14567e450(param_1 + 0xb4cd8,&local_108);
      if (iVar4 != -1) {
        *(uint *)(param_1 + 0xb4fb0) = (uint)(0.15 <= local_a8);
        if ((*(int *)(param_1 + 0xb42ec) == 0) || ((*(byte *)(param_1 + 0xcba80) & 1) != 0)) {
          FUN_1456819b0(param_1,uVar5);
        }
        else {
          *(undefined4 *)(param_1 + 0x2a2e4) = 1;
        }
        if (*(int *)(param_1 + 0xb42d4) == 0) {
          FUN_1456807c0(param_1,uVar5);
          *(undefined4 *)(param_1 + 0xb42d4) = *(undefined4 *)(param_1 + 0xb42e4);
        }
        FUN_1456189e0(param_1,*(undefined1 *)(param_1 + 0xb5014));
        *(undefined4 *)(param_1 + 0xb4278) =
             *(undefined4 *)(param_1 + 0xb5aec + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4);
        dVar9 = log(local_f8 * 256.0 + 1.0);
        *(double *)(param_1 + 0xb4f98) = dVar9;
        *(double *)(param_1 + 0xb4fa0) = dStack_a0;
        *(double *)(param_1 + 0xb4ea8) = *(double *)(param_1 + 0xb4ea8) - local_108;
        *(double *)(param_1 + 0xb4eb0) = *(double *)(param_1 + 0xb4eb0) - dStack_100;
        *(double *)(param_1 + 0xb4eb8) = *(double *)(param_1 + 0xb4eb8) - local_f8;
        *(double *)(param_1 + 0xb4ec0) = *(double *)(param_1 + 0xb4ec0) - dStack_f0;
        *(double *)(param_1 + 0xb4ec8) = *(double *)(param_1 + 0xb4ec8) - local_e8;
        *(double *)(param_1 + 0xb4ed0) = *(double *)(param_1 + 0xb4ed0) - dStack_e0;
        *(double *)(param_1 + 0xb4ed8) = *(double *)(param_1 + 0xb4ed8) - local_d8;
        *(double *)(param_1 + 0xb4ee0) = *(double *)(param_1 + 0xb4ee0) - dStack_d0;
        *(double *)(param_1 + 0xb4ee8) = *(double *)(param_1 + 0xb4ee8) - local_c8;
        *(double *)(param_1 + 0xb4ef0) = *(double *)(param_1 + 0xb4ef0) - dStack_c0;
        *(double *)(param_1 + 0xb4f08) = *(double *)(param_1 + 0xb4f08) - local_a8;
        *(double *)(param_1 + 0xb4f10) = *(double *)(param_1 + 0xb4f10) - dStack_a0;
        *(double *)(param_1 + 0xb4ef8) = *(double *)(param_1 + 0xb4ef8) - local_b8;
        *(double *)(param_1 + 0xb4f00) = *(double *)(param_1 + 0xb4f00) - dStack_b0;
        *(double *)(param_1 + 0xb4f68) =
             *(double *)(param_1 + 0xb4f68) - (double)CONCAT44(uStack_44,local_48);
        *(double *)(param_1 + 0xb4f18) = *(double *)(param_1 + 0xb4f18) - local_98;
        *(double *)(param_1 + 0xb4f20) = *(double *)(param_1 + 0xb4f20) - dStack_90;
        *(double *)(param_1 + 0xb4f28) = *(double *)(param_1 + 0xb4f28) - local_88;
        *(double *)(param_1 + 0xb4f30) = *(double *)(param_1 + 0xb4f30) - dStack_80;
        *(double *)(param_1 + 0xb4f38) = *(double *)(param_1 + 0xb4f38) - local_78;
        *(double *)(param_1 + 0xb4f40) = *(double *)(param_1 + 0xb4f40) - dStack_70;
        *(double *)(param_1 + 0xb4f48) = *(double *)(param_1 + 0xb4f48) - local_68;
        *(double *)(param_1 + 0xb4f50) = *(double *)(param_1 + 0xb4f50) - dStack_60;
        *(double *)(param_1 + 0xb4f58) = *(double *)(param_1 + 0xb4f58) - local_58;
        *(double *)(param_1 + 0xb4f60) = *(double *)(param_1 + 0xb4f60) - dStack_50;
      }
    }
  }
  return;
}



// FUNCTION 14567def0 FUN_14567def0 body=762 status=ok
// SIG undefined FUN_14567def0(void)

void FUN_14567def0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0xb4278);
  lVar4 = (longlong)(iVar5 - *(int *)(param_1 + 0xb4280)) + *(longlong *)(param_1 + 0xb4348);
  *(longlong *)(param_1 + 0xb4348) = lVar4;
  lVar1 = *(longlong *)(param_1 + 0xb4f80) - (longlong)iVar5;
  if (lVar1 < 1) {
    lVar1 = 0;
  }
  *(longlong *)(param_1 + 0xb4f80) = lVar1;
  *(int *)(param_1 + 0xb4fd0) = *(int *)(param_1 + 0xb4fd0) + *(int *)(param_1 + 0xb427c);
  *(int *)(param_1 + 0xb4fd4) = *(int *)(param_1 + 0xb4fd4) + *(int *)(param_1 + 0xb4280);
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0xb4378) != 0) {
    iVar3 = (int)((lVar4 * 100) / *(longlong *)(param_1 + 0xb4378));
    if (iVar3 < -100) {
      iVar3 = -100;
    }
    else if (100 < iVar3) {
      iVar3 = 100;
    }
  }
  *(int *)(param_1 + 0xb4370) = iVar3;
  if (*(int *)(param_1 + 0x2a2e4) != 0) {
    *(longlong *)(param_1 + 0xb4fb8) = *(longlong *)(param_1 + 0xb4fb8) - (longlong)iVar5;
    *(undefined4 *)(param_1 + 0xb4fe0) = *(undefined4 *)(param_1 + 0xb4fdc);
  }
  lVar1 = *(longlong *)(param_1 + 0xb4fb8);
  if (*(longlong *)(param_1 + 0xb4fb8) < 1) {
    lVar1 = 0;
  }
  *(char *)(param_1 + 0xb5014) = *(char *)(param_1 + 0xb5014) + '\x01';
  *(longlong *)(param_1 + 0xb4fb8) = lVar1;
  if ((*(int *)(param_1 + 0x2e57c) != 3) && (*(int *)(param_1 + 0xb4304) == 0)) {
    iVar3 = *(int *)(param_1 + 0xb4390) - *(int *)(param_1 + 0xb4fe4);
    iVar6 = 0;
    iVar5 = 0x30;
    if (*(int *)(param_1 + 0x2e57c) == 2) {
      iVar5 = 0x14;
    }
    iVar2 = 0;
    iVar7 = 0;
    if ((*(int *)(param_1 + 0x2e5b4) != 0) &&
       (iVar2 = 0, iVar7 = iVar6, 1 < *(int *)(param_1 + 0x2e5b4) - 5U)) {
      iVar6 = *(int *)(param_1 + 0x2b0f8);
      if (iVar6 < 0) {
        iVar2 = -iVar6;
        if (iVar3 < -iVar6) {
          iVar2 = iVar3;
        }
      }
      else {
        iVar2 = 0;
        iVar7 = iVar6;
        if (iVar5 < iVar6) {
          iVar7 = iVar5;
        }
      }
    }
    if (*(int *)(param_1 + 0x2e580) < *(int *)(param_1 + 0xb4370)) {
      *(int *)(param_1 + 0xb4ff0) = *(int *)(param_1 + 0xb4ff0) + -1;
      if (*(int *)(param_1 + 0xb4364) <= *(int *)(param_1 + 0xb4360)) {
        *(int *)(param_1 + 0xb4fec) = *(int *)(param_1 + 0xb4fec) + 1;
      }
    }
    else if (*(int *)(param_1 + 0xb4370) < -*(int *)(param_1 + 0x2e584)) {
      *(int *)(param_1 + 0xb4fec) = *(int *)(param_1 + 0xb4fec) + -1;
      if (*(int *)(param_1 + 0xb4360) < *(int *)(param_1 + 0xb4364)) {
        *(int *)(param_1 + 0xb4ff0) = *(int *)(param_1 + 0xb4ff0) + 1;
      }
    }
    else {
      if ((*(int *)(param_1 + 0xb4278) * 2 < *(int *)(param_1 + 0xb4280)) &&
         (*(int *)(param_1 + 0xb4308) * 2 < *(int *)(param_1 + 0xb4280))) {
        *(int *)(param_1 + 0xb4ff0) = *(int *)(param_1 + 0xb4ff0) + 1;
      }
      if (*(int *)(param_1 + 0xb4360) < *(int *)(param_1 + 0xb4364)) {
        *(int *)(param_1 + 0xb4fec) = *(int *)(param_1 + 0xb4fec) + -1;
      }
      else if (*(int *)(param_1 + 0xb4364) < *(int *)(param_1 + 0xb4360)) {
        *(int *)(param_1 + 0xb4ff0) = *(int *)(param_1 + 0xb4ff0) + -1;
      }
    }
    iVar6 = *(int *)(param_1 + 0xb4fec);
    if ((iVar7 <= iVar6) && (iVar7 = iVar6, iVar5 < iVar6)) {
      iVar7 = iVar5;
    }
    iVar6 = *(int *)(param_1 + 0xb4ff0);
    *(int *)(param_1 + 0xb4fec) = iVar7;
    if ((iVar2 <= iVar6) && (iVar2 = iVar6, iVar3 < iVar6)) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0xb4ff0) = iVar2;
    if ((((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) &&
        (*(int *)(param_1 + 0x2f6cc) == 0)) && (*(int *)(param_1 + 0x2f6c8) == 0)) {
      iVar3 = *(int *)(param_1 + 0xb4278) / 2;
      if (*(int *)(param_1 + 0xb4280) < iVar3) {
        iVar6 = *(int *)(param_1 + 0xb4308);
        lVar1 = (longlong)(iVar3 - *(int *)(param_1 + 0xb4280)) + *(longlong *)(param_1 + 0xb4350);
        if (iVar6 * 4 <= lVar1) {
          lVar1 = (longlong)(iVar6 * 4);
        }
        *(longlong *)(param_1 + 0xb4350) = lVar1;
        if (iVar6 != 0) {
          *(int *)(param_1 + 0xb4ff4) = (int)((lVar1 * 8) / (longlong)iVar6);
        }
        iVar7 = *(int *)(param_1 + 0xb4fec);
      }
      else if (*(longlong *)(param_1 + 0xb4350) == 0) {
        *(undefined4 *)(param_1 + 0xb4ff4) = 0;
        return;
      }
      iVar3 = *(int *)(param_1 + 0xb4ff4);
      if (iVar5 - iVar7 <= *(int *)(param_1 + 0xb4ff4)) {
        iVar3 = iVar5 - iVar7;
      }
      *(int *)(param_1 + 0xb4ff4) = iVar3;
      return;
    }
  }
  return;
}



// FUNCTION 14567e1f0 FUN_14567e1f0 body=42 status=ok
// SIG undefined FUN_14567e1f0(void)

void FUN_14567e1f0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0xb43cc + (longlong)*(int *)(param_1 + 0xb43c4) * 4);
  *param_3 = *(undefined4 *)(param_1 + 0xb43d4 + (longlong)*(int *)(param_1 + 0xb43c4) * 4);
  return;
}



// FUNCTION 14567e220 FUN_14567e220 body=539 status=ok
// SIG undefined FUN_14567e220(void)

void FUN_14567e220(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  longlong local_c0;
  double local_b8 [8];
  ulonglong local_78;
  
  local_78 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_2 + 0x1c0);
  iVar2 = *(int *)(param_1 + 100);
  iVar3 = *(int *)(param_2 + 0x1c8);
  iVar10 = iVar3 - param_3;
  local_b8[0] = 1.0;
  local_b8[1] = 1.0;
  iVar4 = iVar2;
  if (iVar10 < iVar2) {
    iVar4 = iVar10;
  }
  local_b8[2] = 1.0;
  local_b8[3] = 1.0;
  local_b8[4] = 1.0;
  local_b8[5] = 1.0;
  local_b8[6] = 1.0;
  local_b8[7] = 1.0;
  local_c4 = param_4;
  local_c0 = param_2;
  if ((*(int *)(param_1 + 0x60) != 0) && (iVar10 = 1, 1 < iVar4)) {
    iVar7 = param_3 + 2;
    local_c8 = -2 - param_3;
    do {
      if (iVar7 < iVar3) {
        if (iVar7 < 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)iVar7 * 0xd0 + *plVar1;
        }
        iVar5 = FUN_1456814e0(plVar1,iVar7 + -1);
        if (iVar5 != 0) break;
        lVar9 = local_c0;
        dVar11 = (double)FUN_14567f480(local_c0,lVar8);
        dVar12 = (*(double *)(lVar8 + 0x30) - *(double *)(lVar8 + 0x38)) *
                 *(double *)(lVar9 + 0x1738);
        dVar11 = (1.0 - dVar11) * dVar12 + dVar11;
        if (dVar12 <= dVar11) {
          dVar12 = dVar11;
        }
        uVar6 = local_c8 + iVar7 & 0x80000007;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
        }
        local_b8[(int)uVar6] = dVar12;
        if ((((local_c4 < local_c8 + iVar7) && (0.999 <= dVar12)) &&
            (local_b8[0] * local_b8[1] * local_b8[2] * local_b8[3] * local_b8[4] * local_b8[5] *
             local_b8[6] * local_b8[7] < 0.9)) &&
           (iVar5 = FUN_14567f540(plVar1,iVar7 + -1,(iVar2 - iVar10) + 1), iVar5 != 0)) break;
      }
      iVar10 = iVar10 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar10 < iVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_78 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14567e450 FUN_14567e450 body=159 status=ok
// SIG undefined FUN_14567e450(void)

undefined8 FUN_14567e450(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1a8);
  if (*(undefined8 **)(param_1 + 0x1b8) <= puVar1) {
    return 0xffffffff;
  }
  uVar2 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  uVar2 = puVar1[3];
  param_2[2] = puVar1[2];
  param_2[3] = uVar2;
  uVar2 = puVar1[5];
  param_2[4] = puVar1[4];
  param_2[5] = uVar2;
  uVar2 = puVar1[7];
  param_2[6] = puVar1[6];
  param_2[7] = uVar2;
  uVar2 = puVar1[9];
  param_2[8] = puVar1[8];
  param_2[9] = uVar2;
  uVar2 = puVar1[0xb];
  param_2[10] = puVar1[10];
  param_2[0xb] = uVar2;
  uVar2 = puVar1[0xd];
  param_2[0xc] = puVar1[0xc];
  param_2[0xd] = uVar2;
  uVar2 = puVar1[0xf];
  param_2[0xe] = puVar1[0xe];
  param_2[0xf] = uVar2;
  uVar2 = puVar1[0x11];
  param_2[0x10] = puVar1[0x10];
  param_2[0x11] = uVar2;
  uVar2 = puVar1[0x13];
  param_2[0x12] = puVar1[0x12];
  param_2[0x13] = uVar2;
  uVar2 = puVar1[0x15];
  param_2[0x14] = puVar1[0x14];
  param_2[0x15] = uVar2;
  uVar2 = puVar1[0x17];
  param_2[0x16] = puVar1[0x16];
  param_2[0x17] = uVar2;
  uVar2 = puVar1[0x19];
  param_2[0x18] = puVar1[0x18];
  param_2[0x19] = uVar2;
  *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 0xd0;
  return 1;
}



// FUNCTION 14567e4f0 FUN_14567e4f0 body=397 status=ok
// SIG undefined FUN_14567e4f0(void)

double FUN_14567e4f0(longlong param_1,longlong param_2,longlong param_3,double param_4,
                    double param_5)

{
  double dVar1;
  double _X;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 <= param_5) {
    dVar3 = param_5 + 1e-06;
  }
  else {
    dVar3 = param_5 - 1e-06;
  }
  dVar1 = pow((*(double *)(param_3 + 0x18) * *(double *)(param_3 + 8)) / dVar3,
              (double)*(int *)(param_1 + 0xbc) / 100.0);
  dVar2 = (double)*(int *)(param_1 + 0xc0) / 100.0;
  dVar3 = (double)*(int *)(param_1 + 0xc4) / 100.0;
  dVar4 = 1.0 - ((*(double *)(param_3 + 0x70) + *(double *)(param_3 + 0x70)) /
                 (double)*(int *)(param_2 + 0x18) + *(double *)(param_3 + 0x60) * 0.5);
  if (0.5 <= dVar4) {
    _X = 1.0;
    if (dVar4 <= 1.0) {
      _X = dVar4;
    }
  }
  else {
    _X = 0.5;
  }
  dVar4 = pow(_X,0.5);
  if (0.0 <= param_4) {
    param_4 = param_4 + 1e-06;
  }
  else {
    param_4 = param_4 - 1e-06;
  }
  param_4 = (dVar1 * param_5 * dVar4) / param_4;
  if ((dVar2 <= param_4) && (dVar2 = dVar3, param_4 <= dVar3)) {
    dVar2 = param_4;
  }
  return dVar2;
}



// FUNCTION 14567e680 FUN_14567e680 body=164 status=ok
// SIG undefined FUN_14567e680(void)

code * FUN_14567e680(char param_1,int param_2)

{
  if (param_2 == 10) {
    if (param_1 == '\x03') {
      return FUN_14562b320;
    }
    if (param_1 != '\x04') {
      if (param_1 != '\x05') {
        return FUN_14562b2e0;
      }
      return FUN_14568a520;
    }
    return FUN_14568a680;
  }
  if (param_2 != 0xc) {
    if (param_1 == '\x03') {
      return FUN_14562fc60;
    }
    if (param_1 != '\x04') {
      if (param_1 != '\x05') {
        return FUN_14562fc20;
      }
      return FUN_14568c780;
    }
    return FUN_14568c8c0;
  }
  if (param_1 == '\x03') {
    return FUN_14562d3f0;
  }
  if (param_1 != '\x04') {
    if (param_1 != '\x05') {
      return FUN_14562d3b0;
    }
    return FUN_14568b650;
  }
  return FUN_14568b7b0;
}



// FUNCTION 14567e730 FUN_14567e730 body=771 status=ok
// SIG undefined FUN_14567e730(void)

void FUN_14567e730(longlong param_1,longlong param_2,short *param_3,undefined4 *param_4,int *param_5
                  )

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 local_res8 [2];
  int local_res10 [2];
  short local_res18;
  short local_res1a;
  undefined4 *local_res20;
  undefined8 local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  sVar4 = *param_3;
  sVar5 = param_3[1];
  local_res8[0] = 0;
  local_res18 = sVar4 >> 3;
  local_res1a = sVar5 >> 3;
  bVar3 = *(byte *)**(undefined8 **)(param_2 + 0x6340);
  uVar15 = (ulonglong)bVar3;
  iVar6 = *(int *)(param_1 + 0xb64d0);
  if (*(int *)(param_1 + 0xb64d4) <= *(int *)(param_1 + 0xb64d0)) {
    iVar6 = *(int *)(param_1 + 0xb64d4);
  }
  puVar1 = (undefined8 *)(param_1 + 0xb4a48 + uVar15 * 0x30);
  local_80 = *puVar1;
  uStack_78 = puVar1[1];
  lVar2 = param_1 + 0xb4a58 + uVar15 * 0x30;
  uStack_68 = *(undefined4 *)(lVar2 + 8);
  uStack_64 = *(undefined4 *)(lVar2 + 0xc);
  puVar1 = (undefined8 *)(param_1 + 0xb4a68 + uVar15 * 0x30);
  local_60 = *puVar1;
  uStack_58 = puVar1[1];
  iVar14 = 0;
  iVar9 = iVar6;
  while (iVar9 < 0x3ff) {
    iVar14 = iVar14 + 1;
    iVar9 = iVar6 << ((byte)iVar14 & 0x1f);
  }
  iVar6 = iVar14 + 3;
  uVar7 = *(undefined8 *)(param_2 + 0x6520);
  uVar8 = *(undefined8 *)(param_2 + 0x6528);
  iVar10 = sVar4 + -0x3ff8 >> 3;
  iVar9 = *(int *)(param_2 + 0x6528);
  if (*(int *)(param_2 + 0x6528) <= iVar10) {
    iVar9 = iVar10;
  }
  iVar11 = sVar4 + 0x3ffe >> 3;
  iVar10 = *(int *)(param_2 + 0x652c);
  if (iVar11 <= *(int *)(param_2 + 0x652c)) {
    iVar10 = iVar11;
  }
  iVar12 = sVar5 + -0x3ff8 >> 3;
  iVar11 = *(int *)(param_2 + 0x6520);
  if (*(int *)(param_2 + 0x6520) <= iVar12) {
    iVar11 = iVar12;
  }
  iVar13 = sVar5 + 0x3ffe >> 3;
  iVar12 = *(int *)(param_2 + 0x6524);
  if (iVar13 <= *(int *)(param_2 + 0x6524)) {
    iVar12 = iVar13;
  }
  if ((iVar9 <= iVar10) && (iVar11 <= iVar12)) {
    *(int *)(param_2 + 0x6524) = iVar12;
    *(int *)(param_2 + 0x6528) = iVar9;
    *(int *)(param_2 + 0x652c) = iVar10;
    *(int *)(param_2 + 0x6520) = iVar11;
    if (bVar3 == 3) {
      local_70 = FUN_145420d70;
    }
    else if (bVar3 == 4) {
      local_70 = FUN_145420d10;
    }
    else {
      local_70 = DAT_14c7fbc40;
      if (bVar3 != 5) {
        local_70 = DAT_14c7fbc38;
      }
    }
    iVar9 = iVar6;
    local_res20 = param_4;
    if ((*(byte *)(*(longlong *)(param_2 + 0x6390) + 0x98) & 8) != 0) {
      local_70 = (code *)FUN_14567e680(uVar15,*(undefined4 *)(param_2 + 0x63f0));
    }
    iVar9 = (**(code **)(param_1 + 0xb4a40))
                      (param_2,param_1 + 0xcba88,&local_res18,local_res8,iVar9,
                       *(undefined4 *)(param_2 + 0x6440),local_res10,&local_80,param_3);
    if (iVar9 < 0x7fffffff) {
      iVar9 = FUN_1455aaa20(param_2,local_res8,param_3,&local_80,1);
    }
    iVar10 = local_res10[0];
    iVar11 = iVar9 + 0x20;
    if (0x7fffffde < iVar9) {
      iVar11 = iVar9;
    }
    if (iVar11 < *param_5) {
      *param_5 = iVar11;
      *param_4 = local_res8[0];
    }
    local_res10[0] = 0;
    while (iVar10 < 7 - iVar14) {
      iVar10 = iVar10 + 1;
      if (local_res10[0] == 0) {
        iVar9 = (**(code **)(param_1 + 0xb4a40))
                          (param_2,param_1 + 0xcba88,&local_res18,local_res8,iVar6 + iVar10,
                           *(undefined4 *)(param_2 + 0x6440),local_res10,&local_80,param_3);
        if (iVar9 < 0x7fffffff) {
          iVar9 = FUN_1455aaa20(param_2,local_res8,param_3,&local_80,1);
        }
        iVar11 = iVar9 + 0x20;
        if (0x7fffffde < iVar9) {
          iVar11 = iVar9;
        }
        if (iVar11 < *param_5) {
          *param_5 = iVar11;
          *local_res20 = local_res8[0];
        }
      }
      else {
        local_res10[0] = local_res10[0] + -1;
      }
    }
    *(undefined8 *)(param_2 + 0x6520) = uVar7;
    *(undefined8 *)(param_2 + 0x6528) = uVar8;
  }
  return;
}



// FUNCTION 14567ea40 FUN_14567ea40 body=37 status=ok
// SIG undefined FUN_14567ea40(void)

int FUN_14567ea40(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x188) != 0) && (*(int *)(param_1 + 0x45f0) != 8)) {
    if (*(int *)(param_1 + 0x45f0) != 10) {
      return param_2 << 8;
    }
    param_2 = param_2 << 4;
  }
  return param_2;
}



// FUNCTION 14567ea70 FUN_14567ea70 body=43 status=ok
// SIG undefined FUN_14567ea70(void)

undefined8 FUN_14567ea70(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x188) != 0) && (*(int *)(param_1 + 0x45f0) != 8)) {
    uVar1 = 200;
    if (*(int *)(param_1 + 0x45f0) != 10) {
      uVar1 = 800;
    }
    return uVar1;
  }
  return 0x32;
}



// FUNCTION 14567eaa0 FUN_14567eaa0 body=43 status=ok
// SIG undefined FUN_14567eaa0(void)

undefined8 FUN_14567eaa0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x188) != 0) && (*(int *)(param_1 + 0x45f0) != 8)) {
    uVar1 = 64000;
    if (*(int *)(param_1 + 0x45f0) != 10) {
      uVar1 = 0xfa000;
    }
    return uVar1;
  }
  return 4000;
}



// FUNCTION 14567ead0 FUN_14567ead0 body=778 status=ok
// SIG undefined FUN_14567ead0(void)

int FUN_14567ead0(longlong param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  uint uVar17;
  int local_res10;
  ulonglong local_70;
  
  pbVar15 = *(byte **)(param_1 + 0x2018);
  iVar11 = 0;
  uVar1 = (uint)(byte)(&DAT_149d549c0)[param_2];
  local_res10 = 0;
  if ((byte)(&DAT_149d549b0)[param_2] != 0) {
    uVar7 = (ulonglong)(((uint)(byte)(&DAT_149d549b0)[param_2] * 4 - 1 >> 1) + 1);
    do {
      if (uVar1 != 0) {
        uVar14 = (ulonglong)*(int *)(param_1 + 0x2020);
        local_70 = (ulonglong)((uVar1 * 4 - 1 >> 1) + 1);
        do {
          pbVar8 = pbVar15 + ~uVar14;
          iVar12 = 0;
          iVar11 = 0;
          pbVar13 = &DAT_14c748090;
          lVar16 = 3;
          if ((*(uint *)(*(longlong *)(param_1 + 0x6390) + 0x98) & 8) == 0) {
            bVar2 = *pbVar15;
            iVar5 = 0;
            uVar17 = (uint)bVar2;
            do {
              uVar3 = uVar17 - *pbVar8;
              uVar9 = (int)uVar3 >> 0x1f;
              iVar4 = (uVar3 ^ uVar9) - uVar9;
              iVar6 = iVar4;
              if (iVar4 < iVar5) {
                iVar6 = iVar5;
              }
              if (iVar4 < 9) {
                iVar11 = iVar11 + (uint)*pbVar13;
                iVar12 = iVar12 + (uint)*pbVar13 * (uint)*pbVar8;
              }
              uVar3 = uVar17 - pbVar8[1];
              uVar9 = (int)uVar3 >> 0x1f;
              iVar5 = (uVar3 ^ uVar9) - uVar9;
              iVar4 = iVar5;
              if (iVar5 < iVar6) {
                iVar4 = iVar6;
              }
              if (iVar5 < 9) {
                iVar11 = iVar11 + (uint)pbVar13[1];
                iVar12 = iVar12 + (uint)pbVar13[1] * (uint)pbVar8[1];
              }
              uVar3 = uVar17 - pbVar8[2];
              uVar9 = (int)uVar3 >> 0x1f;
              iVar6 = (uVar3 ^ uVar9) - uVar9;
              iVar5 = iVar6;
              if (iVar6 < iVar4) {
                iVar5 = iVar4;
              }
              if (iVar6 < 9) {
                iVar11 = iVar11 + (uint)pbVar13[2];
                iVar12 = iVar12 + (uint)pbVar13[2] * (uint)pbVar8[2];
              }
              pbVar13 = pbVar13 + 3;
              pbVar8 = pbVar8 + uVar14;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            if (iVar5 < 0x18) {
              bVar2 = (byte)(((iVar11 >> 1) + iVar12) / iVar11);
            }
            uVar3 = (uint)bVar2;
          }
          else {
            uVar17 = (uint)*(ushort *)((longlong)pbVar15 * 2);
            iVar5 = 0;
            do {
              uVar3 = uVar17 - *(ushort *)((longlong)pbVar8 * 2);
              uVar9 = (int)uVar3 >> 0x1f;
              iVar4 = (uVar3 ^ uVar9) - uVar9;
              iVar6 = iVar4;
              if (iVar4 < iVar5) {
                iVar6 = iVar5;
              }
              if (iVar4 < 9) {
                iVar11 = iVar11 + (uint)*pbVar13;
                iVar12 = iVar12 + (uint)*pbVar13 * (uint)*(ushort *)((longlong)pbVar8 * 2);
              }
              uVar10 = (uint)*(ushort *)((longlong)pbVar8 * 2 + 2);
              uVar3 = uVar17 - uVar10;
              uVar9 = (int)uVar3 >> 0x1f;
              iVar5 = (uVar3 ^ uVar9) - uVar9;
              iVar4 = iVar5;
              if (iVar5 < iVar6) {
                iVar4 = iVar6;
              }
              if (iVar5 < 9) {
                iVar11 = iVar11 + (uint)pbVar13[1];
                iVar12 = iVar12 + pbVar13[1] * uVar10;
              }
              uVar10 = (uint)*(ushort *)((longlong)pbVar8 * 2 + 4);
              uVar3 = uVar17 - uVar10;
              uVar9 = (int)uVar3 >> 0x1f;
              iVar6 = (uVar3 ^ uVar9) - uVar9;
              iVar5 = iVar6;
              if (iVar6 < iVar4) {
                iVar5 = iVar4;
              }
              if (iVar6 < 9) {
                iVar11 = iVar11 + (uint)pbVar13[2];
                iVar12 = iVar12 + pbVar13[2] * uVar10;
              }
              pbVar13 = pbVar13 + 3;
              pbVar8 = pbVar8 + uVar14;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            uVar3 = uVar17;
            if (iVar5 < 0x18) {
              uVar3 = ((iVar11 >> 1) + iVar12) / iVar11 & 0xffff;
            }
          }
          pbVar15 = pbVar15 + 1;
          iVar11 = local_res10 + (uVar17 - uVar3) * (uVar17 - uVar3);
          local_70 = local_70 - 1;
          local_res10 = iVar11;
        } while (local_70 != 0);
      }
      pbVar15 = pbVar15 + (int)(*(int *)(param_1 + 0x2020) + uVar1 * -4);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return iVar11 * 4;
}



// FUNCTION 14567ede0 FUN_14567ede0 body=825 status=ok
// SIG undefined FUN_14567ede0(void)

void FUN_14567ede0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(int *)(param_1 + 0x2e5bc) == 0) {
    iVar3 = *(int *)(param_1 + 0x2a300);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb64d8);
  }
  auVar7._0_8_ = (double)iVar3;
  auVar7._8_8_ = 0;
  if (auVar7._0_8_ < 0.0) {
    dVar5 = sqrt(auVar7._0_8_);
  }
  else {
    auVar6 = sqrtpd(in_XMM2,auVar7);
    dVar5 = auVar6._0_8_;
  }
  dVar5 = dVar5 * 200.0;
  iVar3 = *(int *)((longlong)param_3 + 0x54);
  iVar4 = *(int *)(param_1 + 0x2a304) / 2;
  if ((iVar4 < iVar3) || (iVar3 == -1)) {
    *(int *)((longlong)param_3 + 0x54) = iVar4;
    iVar3 = iVar4;
  }
  if (0 < iVar3) {
    iVar4 = *(int *)(param_3 + 10) + iVar3 * *(int *)(param_1 + 0x2a30c) * -2;
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    *(int *)(param_3 + 10) = iVar3;
  }
  dVar1 = param_3[1];
  dVar2 = *param_3;
  param_3[1] = dVar1 / auVar7._0_8_;
  *param_3 = dVar2 / auVar7._0_8_;
  param_2[1] = (dVar1 / auVar7._0_8_) * (dVar2 / auVar7._0_8_);
  *param_2 = (double)*(uint *)(param_1 + 0x2e4c4);
  param_2[0x19] = (double)(longlong)*(int *)(param_1 + 0xb64e0);
  param_2[3] = ((double)((longlong)param_3[2] >> 8) + dVar5) / auVar7._0_8_;
  param_2[4] = ((double)((longlong)param_3[3] >> 8) + dVar5) / auVar7._0_8_;
  param_2[2] = ((double)((longlong)param_3[5] >> 8) + dVar5) / auVar7._0_8_;
  dVar5 = param_3[4];
  param_2[0x18] = 1.0;
  param_2[5] = (double)(longlong)dVar5 / auVar7._0_8_;
  param_2[6] = (double)*(int *)(param_3 + 6) / auVar7._0_8_;
  param_2[8] = (double)*(int *)((longlong)param_3 + 0x34) / auVar7._0_8_;
  param_2[9] = param_3[7] / auVar7._0_8_;
  param_2[10] = param_3[8] / auVar7._0_8_;
  param_2[0xb] = param_3[9] / auVar7._0_8_;
  param_2[0xc] = (double)*(int *)(param_3 + 10) / auVar7._0_8_;
  param_2[0xd] = (double)*(int *)((longlong)param_3 + 0x84) / auVar7._0_8_;
  iVar3 = *(int *)((longlong)param_3 + 0x54);
  param_2[0xf] = 0.0;
  param_2[0xe] = (double)iVar3;
  if (*(int *)(param_3 + 0xb) < 1) {
    param_2[0x10] = 0.0;
    param_2[0x11] = 0.0;
    param_2[0x12] = 0.0;
    param_2[0x13] = 0.0;
    param_2[0x14] = 0.0;
    param_2[0x15] = 0.0;
    param_2[0x16] = 0.0;
    param_2[7] = 0.0;
  }
  else {
    param_2[0x10] = (double)*(int *)((longlong)param_3 + 0x5c) / (double)*(int *)(param_3 + 0xb);
    param_2[0x11] = (double)*(int *)(param_3 + 0xc) / (double)*(int *)(param_3 + 0xb);
    param_2[0x12] = (double)*(int *)((longlong)param_3 + 100) / (double)*(int *)(param_3 + 0xb);
    param_2[0x13] = (double)*(int *)(param_3 + 0xd) / (double)*(int *)(param_3 + 0xb);
    param_2[0x14] =
         ((double)(longlong)param_3[0xe] -
         ((double)*(int *)((longlong)param_3 + 0x5c) * (double)*(int *)((longlong)param_3 + 0x5c)) /
         (double)*(int *)(param_3 + 0xb)) / (double)*(int *)(param_3 + 0xb);
    param_2[0x15] =
         ((double)(longlong)param_3[0xf] -
         ((double)*(int *)((longlong)param_3 + 100) * (double)*(int *)((longlong)param_3 + 100)) /
         (double)*(int *)(param_3 + 0xb)) / (double)*(int *)(param_3 + 0xb);
    param_2[0x16] = (double)*(int *)(param_3 + 0x10) / (double)(*(int *)(param_3 + 0xb) * 2);
    param_2[7] = (double)*(int *)(param_3 + 0xb) / auVar7._0_8_;
  }
  return;
}



// FUNCTION 14567f120 FUN_14567f120 body=86 status=ok
// SIG undefined FUN_14567f120(void)

undefined8 FUN_14567f120(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048);
  if (uVar1 < 0x38401) {
    return 0x405cc00000000000;
  }
  if (uVar1 < 0xe1000) {
    return 0x405f400000000000;
  }
  if (uVar1 < 0x1fa401) {
    return 0x4060400000000000;
  }
  if (uVar1 < 0x7e9000) {
    return 0x4062c00000000000;
  }
  return 0x4069000000000000;
}



// FUNCTION 14567f180 FUN_14567f180 body=761 status=ok
// SIG undefined FUN_14567f180(void)

uint FUN_14567f180(longlong param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar2 = FUN_145617450();
  dVar6 = pow(param_4 / 250.0,0.5);
  uVar10 = 0xcccccccd;
  uVar11 = 0x3feccccc;
  if (0.9 <= dVar6) {
    uVar10 = 0x9999999a;
    uVar11 = 0x3ff19999;
    if (dVar6 <= 1.1) {
      uVar10 = SUB84(dVar6,0);
      uVar11 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
  }
  if (0.0 <= param_3) {
    dVar6 = 1.0;
    if (param_3 <= 1.0) {
      dVar6 = param_3;
    }
  }
  else {
    dVar6 = 0.0;
  }
  if (iVar2 < 1) {
    uVar5 = *(uint *)(param_1 + 0xb4390);
  }
  else {
    if (*(int *)(param_1 + 0x2e5bc) == 0) {
      iVar4 = *(int *)(param_1 + 0x2a300);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb64d8);
    }
    iVar1 = *(int *)(param_1 + 0x2e558);
    dVar7 = 0.01;
    if (0.01 <= 1.0 - dVar6) {
      dVar7 = 1.0 - dVar6;
    }
    dVar8 = (double)*(int *)(param_1 + 0xb4fd0);
    dVar6 = 1.0;
    if (1.0 <= (double)iVar4 * dVar7) {
      dVar6 = (double)iVar4 * dVar7;
    }
    if (0.0 <= dVar8) {
      dVar8 = dVar8 + 1e-06;
    }
    else {
      dVar8 = dVar8 - 1e-06;
    }
    dVar8 = (double)*(int *)(param_1 + 0xb4fd4) / dVar8;
    dVar9 = 4.0;
    if (dVar8 <= 4.0) {
      dVar9 = dVar8;
    }
    if (dVar9 < 0.25) {
      dVar9 = 0.25;
    }
    dVar9 = (dVar9 + 3.0) * 0.25 * *(double *)(param_1 + 0xb4fc8);
    dVar8 = 4.0;
    if (dVar9 <= 4.0) {
      dVar8 = dVar9;
    }
    dVar9 = 0.25;
    if (0.25 <= dVar8) {
      dVar9 = dVar8;
    }
    *(double *)(param_1 + 0xb4fc8) = dVar9;
    uVar5 = *(uint *)(param_1 + 0xb4394);
    if ((int)uVar5 < *(int *)(param_1 + 0xb4390)) {
      do {
        dVar8 = (double)FUN_14567f120(param_1);
        if (0.0 <= dVar8) {
          dVar8 = dVar8 + 1e-06;
        }
        else {
          dVar8 = dVar8 - 1e-06;
        }
        uVar3 = uVar5 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        dVar8 = pow((param_2 / dVar7) / dVar8,
                    (*(double *)(&DAT_149df51c8 + ((longlong)(int)uVar5 >> 5) * 8) -
                    *(double *)(&DAT_149df51c0 + ((longlong)(int)uVar5 >> 5) * 8)) *
                    (double)(int)uVar3 * 0.03125 +
                    *(double *)(&DAT_149df51c0 + ((longlong)(int)uVar5 >> 5) * 8));
        if (0.05 <= dVar8) {
          dVar9 = 5.0;
          if (dVar8 <= 5.0) {
            dVar9 = dVar8;
          }
        }
        else {
          dVar9 = 0.05;
        }
        iVar4 = FUN_1456173f0(1,uVar5,dVar9 * ((double)iVar1 * 0.04 + 1.0) *
                                      *(double *)(param_1 + 0xb4fc8) *
                                      (double)CONCAT44(uVar11,uVar10),
                              *(undefined4 *)(param_1 + 0x2e4d0));
      } while (((int)((ulonglong)((longlong)iVar2 << 9) / (ulonglong)(longlong)(int)dVar6) < iVar4)
              && (uVar5 = uVar5 + 1, (int)uVar5 < *(int *)(param_1 + 0xb4390)));
    }
    if ((*(int *)(param_1 + 0x2e57c) == 2) && ((int)uVar5 <= (int)*(uint *)(param_1 + 0x2e5b0))) {
      uVar5 = *(uint *)(param_1 + 0x2e5b0);
    }
  }
  return uVar5;
}



// FUNCTION 14567f480 FUN_14567f480 body=180 status=ok
// SIG undefined FUN_14567f480(void)

double FUN_14567f480(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_2 + 0x18);
  dVar2 = 1.0;
  dVar3 = *(double *)(param_2 + 0x20) - dVar1;
  if (0.1 < dVar3) {
    dVar2 = *(double *)(param_2 + 0x30);
    if (10.0 < dVar1) {
      if (0.0 <= dVar1) {
        dVar1 = dVar1 + 1e-06;
      }
      else {
        dVar1 = dVar1 - 1e-06;
      }
      if (*(double *)(param_2 + 0x10) / dVar1 < 6.0) {
        dVar2 = (dVar2 + *(double *)(param_2 + 0x50)) - *(double *)(param_2 + 0x48);
      }
    }
    dVar2 = (1.0 - ((dVar3 * 0.25) / *(double *)(param_2 + 0x10)) * *(double *)(param_1 + 0x16f8)) -
            (1.0 - dVar2) * 100.0 * 0.005;
  }
  if (dVar2 <= *(double *)(param_1 + 0x16f0)) {
    dVar2 = *(double *)(param_1 + 0x16f0);
  }
  return dVar2;
}



// FUNCTION 14567f540 FUN_14567f540 body=120 status=ok
// SIG undefined FUN_14567f540(void)

bool FUN_14567f540(longlong *param_1,int param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((int)param_1[1] < (int)(param_2 + param_3)) {
    return false;
  }
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = uVar3;
  if (0 < (int)param_3) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar3;
      if ((-1 < param_2) && (param_2 < (int)param_1[1])) {
        uVar1 = (longlong)param_2 * 0xd0 + *param_1;
      }
      if (*(double *)(uVar1 + 0x30) - *(double *)(uVar1 + 0x38) < 0.999) break;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      uVar1 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)param_3);
  }
  return uVar2 == param_3;
}



// FUNCTION 14567f5c0 FUN_14567f5c0 body=232 status=ok
// SIG undefined FUN_14567f5c0(void)

double FUN_14567f5c0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                    double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)FUN_145614250(param_4,*(undefined4 *)(param_1 + 0x24));
  dVar1 = dVar1 * 0.015 + 0.5;
  if (1.5 <= dVar1) {
    dVar1 = 1.5;
  }
  dVar2 = 1.0 - ((*(double *)(param_2 + 0x70) + *(double *)(param_2 + 0x70)) /
                 (double)*(int *)(param_1 + 0x18) + *(double *)(param_2 + 0x60) * 0.5);
  dVar3 = 0.5;
  if ((0.5 <= dVar2) && (dVar3 = 1.0, dVar2 <= 1.0)) {
    dVar3 = dVar2;
  }
  dVar2 = *(double *)(param_2 + 0x18);
  if (0.0 <= dVar2) {
    dVar2 = dVar2 + 1e-06;
  }
  else {
    dVar2 = dVar2 - 1e-06;
  }
  dVar2 = (dVar3 * *(double *)(param_3 + 0x16e8)) / dVar2;
  if (0.0 < param_5) {
    dVar2 = dVar2 + (param_5 + param_5) * dVar2;
  }
  dVar4 = dVar1 * *(double *)(param_3 + 0x1730);
  dVar3 = dVar2 * dVar1;
  if (dVar4 <= dVar2 * dVar1) {
    dVar3 = dVar4;
  }
  return dVar3;
}



// FUNCTION 14567f6b0 FUN_14567f6b0 body=817 status=ok
// SIG undefined FUN_14567f6b0(void)

int FUN_14567f6b0(undefined8 param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar3 = 0.0;
  dVar4 = 1.0;
  dVar2 = 0.0;
  if (0 < param_4) {
    uVar8 = (ulonglong)param_3;
    dVar11 = dVar4;
    dVar2 = 0.0;
    do {
      iVar5 = (int)uVar8;
      if ((iVar5 < 0) || (*(int *)(param_2 + 0x1c8) <= iVar5)) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)iVar5 * 0xd0 + *(longlong *)(param_2 + 0x1c0);
      }
      iVar5 = iVar5 + 1;
      uVar8 = (ulonglong)iVar5;
      if ((iVar5 < 0) || (*(int *)(param_2 + 0x1c8) <= iVar5)) {
        lVar6 = 0;
      }
      else {
        lVar6 = uVar8 * 0xd0 + *(longlong *)(param_2 + 0x1c0);
      }
      if (lVar7 == 0) break;
      dVar10 = *(double *)(lVar7 + 0x38);
      if (((*(double *)(lVar7 + 0x18) < *(double *)(lVar7 + 0x20) ||
            *(double *)(lVar7 + 0x18) == *(double *)(lVar7 + 0x20)) &&
          ((dVar9 = *(double *)(lVar7 + 0x40),
           dVar9 < *(double *)(lVar7 + 0x30) || dVar9 == *(double *)(lVar7 + 0x30) || (dVar9 < 0.5))
          )) && ((lVar6 == 0 ||
                 ((*(double *)(lVar6 + 0x18) < *(double *)(lVar6 + 0x20) ||
                   *(double *)(lVar6 + 0x18) == *(double *)(lVar6 + 0x20) &&
                  ((dVar9 = *(double *)(lVar6 + 0x40),
                   dVar9 < *(double *)(lVar6 + 0x30) || dVar9 == *(double *)(lVar6 + 0x30) ||
                   (dVar9 < 0.5)))))))) {
        dVar9 = (double)FUN_14567f480(param_2);
        dVar10 = (*(double *)(lVar7 + 0x30) - dVar10) * *(double *)(param_2 + 0x1738);
        dVar9 = (1.0 - dVar9) * dVar10 + dVar9;
        if (dVar10 <= dVar9) {
          dVar10 = dVar9;
        }
        dVar10 = dVar10 * dVar11;
        dVar11 = 0.01;
        if (0.01 <= dVar10) {
          dVar11 = dVar10;
        }
      }
      dVar10 = (double)FUN_14567f5c0(param_1);
      dVar2 = dVar2 + dVar10 * dVar11;
    } while ((int)(iVar5 - param_3) < param_4);
  }
  if (0x7fffffff < (uint)-param_5) {
    iVar5 = param_3 - 1;
    dVar3 = 0.0;
    do {
      if ((iVar5 < 0) || (*(int *)(param_2 + 0x1c8) <= iVar5)) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)iVar5 * 0xd0 + *(longlong *)(param_2 + 0x1c0);
      }
      iVar1 = iVar5 + 1;
      if ((iVar1 < 0) || (*(int *)(param_2 + 0x1c8) <= iVar1)) {
        lVar6 = 0;
      }
      else {
        lVar6 = (longlong)iVar1 * 0xd0 + *(longlong *)(param_2 + 0x1c0);
      }
      if (lVar7 == 0) break;
      dVar11 = *(double *)(lVar7 + 0x38);
      if (((*(double *)(lVar7 + 0x18) < *(double *)(lVar7 + 0x20) ||
            *(double *)(lVar7 + 0x18) == *(double *)(lVar7 + 0x20)) &&
          ((dVar10 = *(double *)(lVar7 + 0x40),
           dVar10 < *(double *)(lVar7 + 0x30) || dVar10 == *(double *)(lVar7 + 0x30) ||
           (dVar10 < 0.5)))) &&
         ((lVar6 == 0 ||
          ((*(double *)(lVar6 + 0x18) < *(double *)(lVar6 + 0x20) ||
            *(double *)(lVar6 + 0x18) == *(double *)(lVar6 + 0x20) &&
           ((dVar10 = *(double *)(lVar6 + 0x40),
            dVar10 < *(double *)(lVar6 + 0x30) || dVar10 == *(double *)(lVar6 + 0x30) ||
            (dVar10 < 0.5)))))))) {
        dVar10 = (double)FUN_14567f480(param_2);
        dVar11 = (*(double *)(lVar7 + 0x30) - dVar11) * *(double *)(param_2 + 0x1738);
        dVar10 = (1.0 - dVar10) * dVar11 + dVar10;
        if (dVar11 <= dVar10) {
          dVar11 = dVar10;
        }
        dVar11 = dVar11 * dVar4;
        dVar4 = 0.01;
        if (0.01 <= dVar11) {
          dVar4 = dVar11;
        }
      }
      dVar11 = (double)FUN_14567f5c0(param_1);
      iVar5 = iVar5 + -1;
      dVar3 = dVar3 + dVar11 * dVar4;
    } while (-param_5 <= (int)(iVar5 - param_3));
  }
  iVar5 = (param_4 + param_5) * 0x28;
  if (iVar5 <= (int)dVar3 + (int)dVar2) {
    iVar5 = (int)dVar3 + (int)dVar2;
  }
  iVar1 = 0xfa;
  if (0xfa < iVar5) {
    iVar1 = iVar5;
  }
  return iVar1;
}



// FUNCTION 14567f9f0 FUN_14567f9f0 body=247 status=ok
// SIG undefined FUN_14567f9f0(void)

int FUN_14567f9f0(double *param_1,double *param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar3 = 0;
  dVar5 = 0.0;
  dVar4 = 0.0;
  if (param_2 <= param_1) goto LAB_14567fad6;
  if ((ulonglong)((longlong)param_2 + (0xcf - (longlong)param_1)) < 0x340) {
LAB_14567fa9a:
    pdVar2 = param_1 + 3;
    do {
      if (param_3 <= iVar3) break;
      dVar5 = dVar5 + pdVar2[-1];
      dVar4 = dVar4 + *pdVar2;
      iVar3 = iVar3 + 1;
      pdVar1 = pdVar2 + 0x17;
      pdVar2 = pdVar2 + 0x1a;
    } while (pdVar1 < param_2);
  }
  else {
    do {
      if (param_3 <= iVar3) goto LAB_14567fabf;
      dVar5 = dVar5 + param_1[2];
      dVar4 = dVar4 + param_1[3];
      if (param_3 <= iVar3 + 1) goto LAB_14567fabf;
      dVar5 = dVar5 + param_1[0x1c];
      dVar4 = dVar4 + param_1[0x1d];
      if (param_3 <= iVar3 + 2) goto LAB_14567fabf;
      dVar5 = dVar5 + param_1[0x36];
      dVar4 = dVar4 + param_1[0x37];
      if (param_3 <= iVar3 + 3) goto LAB_14567fabf;
      dVar5 = dVar5 + param_1[0x50];
      dVar4 = dVar4 + param_1[0x51];
      param_1 = param_1 + 0x68;
      iVar3 = iVar3 + 4;
    } while (param_1 < param_2 + -0x4e);
    if (param_1 < param_2) goto LAB_14567fa9a;
  }
LAB_14567fabf:
  if (dVar4 < 0.0) {
    return (int)(dVar5 / (dVar4 - 1e-06));
  }
LAB_14567fad6:
  return (int)(dVar5 / (dVar4 + 1e-06));
}



// FUNCTION 14567faf0 FUN_14567faf0 body=750 status=ok
// SIG undefined FUN_14567faf0(void)

void FUN_14567faf0(longlong param_1,longlong param_2,int *param_3,int param_4,int param_5,
                  int param_6)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb4e80);
  iVar5 = param_6 + 1 + param_5;
  while (bVar6 = (byte)param_4, 1 < param_6 - param_5) {
    iVar5 = iVar5 >> 1;
    iVar4 = 0;
    if (*(int *)(param_2 + 0x1398) < param_4) break;
    *(byte *)((longlong)*param_3 + 0x8e0 + param_2) = bVar6;
    cVar3 = (char)iVar5;
    *(undefined4 *)(param_2 + 0x3f4 + (longlong)*param_3 * 4) = 3;
    *(char *)((longlong)*param_3 + 0x7e4 + param_2) = cVar3 - (char)param_5;
    *(char *)((longlong)*param_3 + 0x9dc + param_2) = cVar3;
    *(undefined4 *)(param_2 + 4 + (longlong)*param_3 * 4) = 2;
    if (-1 < iVar5) {
      do {
        if (*(ulonglong *)(param_1 + 0xb4e90) <= *(ulonglong *)(param_1 + 0xb4e80)) break;
        iVar4 = iVar4 + 1;
        *(ulonglong *)(param_1 + 0xb4e80) = *(ulonglong *)(param_1 + 0xb4e80) + 0xd0;
      } while (iVar4 <= iVar5);
    }
    iVar4 = (param_6 - iVar5) + 1;
    iVar2 = FUN_14567f6b0(param_1,param_1 + 0xb4cd8,
                          (int)((*(longlong *)(param_1 + 0xb4e80) - *(longlong *)(param_1 + 0xb4e88)
                                ) / 0xd0),iVar4,iVar5 - param_5,*(undefined4 *)(param_1 + 0xb4324));
    if (iVar2 >> (bVar6 & 0x1f) < 0xfa) {
      iVar4 = 0xfa;
    }
    else {
      iVar4 = FUN_14567f6b0(param_1,param_1 + 0xb4cd8,
                            (int)((*(longlong *)(param_1 + 0xb4e80) -
                                  *(longlong *)(param_1 + 0xb4e88)) / 0xd0),iVar4,iVar5 - param_5,
                            *(undefined4 *)(param_1 + 0xb4324));
      iVar4 = iVar4 >> (bVar6 & 0x1f);
    }
    *(int *)(param_2 + 0xec8 + (longlong)*param_3 * 4) = iVar4;
    *(undefined8 *)(param_1 + 0xb4e80) = uVar1;
    *param_3 = *param_3 + 1;
    param_4 = param_4 + 1;
    FUN_14567faf0(param_1,param_2,param_3,param_4,param_5,iVar5 + -1);
    param_5 = iVar5 + 1;
    *(undefined4 *)(param_2 + 0x3f4 + (longlong)*param_3 * 4) = 6;
    *(undefined1 *)((longlong)*param_3 + 0x7e4 + param_2) = 0;
    *(char *)((longlong)*param_3 + 0x9dc + param_2) = cVar3;
    iVar5 = param_6 + 1 + param_5;
    *(undefined4 *)(param_2 + 4 + (longlong)*param_3 * 4) = 0;
    *(byte *)((longlong)*param_3 + 0x8e0 + param_2) = bVar6;
    *param_3 = *param_3 + 1;
    uVar1 = *(undefined8 *)(param_1 + 0xb4e80);
  }
  for (; param_5 <= param_6; param_5 = param_5 + 1) {
    *(undefined4 *)(param_2 + 0x3f4 + (longlong)*param_3 * 4) = 1;
    *(undefined1 *)((longlong)*param_3 + 0x7e4 + param_2) = 0;
    *(char *)((longlong)*param_3 + 0x9dc + param_2) = (char)param_5;
    *(undefined4 *)(param_2 + 4 + (longlong)*param_3 * 4) = 0;
    *(byte *)((longlong)*param_3 + 0x8e0 + param_2) = bVar6;
    *(undefined4 *)(param_2 + 0xec8 + (longlong)*param_3 * 4) = 100;
    *param_3 = *param_3 + 1;
  }
  iVar5 = *(int *)(param_2 + 0x1394);
  if (*(int *)(param_2 + 0x1394) <= param_4) {
    iVar5 = param_4;
  }
  *(int *)(param_2 + 0x1394) = iVar5;
  return;
}



// FUNCTION 14567fde0 FUN_14567fde0 body=1384 status=ok
// SIG undefined FUN_14567fde0(void)

void FUN_14567fde0(longlong param_1,ulonglong param_2,int param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  uint local_198;
  uint local_194;
  int local_190;
  ulonglong local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8 [18];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar14 = (longlong)*(int *)(param_1 + 0xb4308) * (longlong)*(int *)(param_1 + 0x2e5d4);
  uVar7 = 0;
  lVar14 = lVar14 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar14),8);
  uVar19 = (lVar14 >> 6) - (lVar14 >> 0x3f);
  uVar15 = uVar7;
  if ((-1 < (longlong)uVar19) &&
     (uVar15 = uVar19, (longlong)*(int *)(param_1 + 0xb4310) < (longlong)uVar19)) {
    uVar15 = (longlong)*(int *)(param_1 + 0xb4310);
  }
  dVar4 = 1.0;
  uVar17 = *(uint *)(param_1 + 0xb63a4);
  lVar14 = (longlong)(int)uVar17;
  local_198 = 0;
  if (*(int *)(param_1 + 0x2a2e4) != 0) {
    iVar9 = param_3;
    if (*(int *)(param_1 + 0xb4300) != 0) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0xb5aec) = iVar9;
  }
  if ((*(int *)(param_1 + 0xb42fc) != 0) || (*(int *)(param_1 + 0x2a2e4) != 0)) {
    param_2 = param_2 - (longlong)param_3;
  }
  local_194 = 1;
  iVar9 = 2;
  local_190 = 1;
  if (*(int *)(param_1 + 0xb42fc) != 0) {
    *(int *)(param_1 + 0xb5af0) = param_3;
    local_194 = 2;
    local_190 = iVar9;
  }
  iVar12 = *(int *)(param_1 + 0xb42e4);
  local_190 = (iVar12 >> 1) + local_190;
  iVar20 = iVar12 + -1;
  iVar16 = 1;
  uVar19 = param_2;
  if (1 < iVar20) {
    uVar19 = (longlong)param_2 / (longlong)iVar20;
  }
  *(undefined4 *)(param_1 + 0xb5ee0) = *(undefined4 *)(param_1 + 0xb4298);
  iVar18 = (int)uVar15;
  local_188 = param_2;
  if (*(int *)(param_1 + 0xcee70) == 0) {
    dVar3 = dVar4;
    if (*(int *)(param_1 + 0x2e5d8) != 0) {
      dVar3 = *(double *)(param_1 + 0xb4ce8) / *(double *)(param_1 + 0xb4da0);
      if (*(int *)(param_1 + 0x2e5d8) == 0) {
        dVar3 = (dVar3 * *(double *)(param_1 + 0xb4cf8)) / *(double *)(param_1 + 0xb4da0);
      }
      else {
        dVar3 = dVar3 * *(double *)(param_1 + 0xb4f88);
      }
      uVar15 = *(ulonglong *)(param_1 + 0xb4e80);
      iVar9 = 0;
      if ((iVar20 != 0) && (dVar4 = 0.0, 0 < iVar20)) {
        uVar7 = *(ulonglong *)(param_1 + 0xb4e90);
        dVar4 = 0.0;
        do {
          if (uVar7 <= uVar15) break;
          local_1a8 = dVar3;
          dVar2 = (double)FUN_14567e4f0(param_1 + 0x2e510,param_1,uVar15,
                                        *(undefined8 *)(param_1 + 0xb4f88));
          uVar15 = uVar15 + 0xd0;
          dVar4 = dVar4 + dVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar20);
        uVar7 = (ulonglong)local_198;
      }
    }
    uVar15 = local_188;
    iVar9 = 0;
    uVar17 = (uint)uVar7;
    if (0 < iVar20) {
      lVar14 = (ulonglong)local_194 * 4 + 0xad8;
      do {
        puVar1 = *(undefined8 **)(param_1 + 0xb4e80);
        uVar17 = (uint)uVar7;
        if (*(undefined8 **)(param_1 + 0xb4e90) <= puVar1) break;
        local_178 = *puVar1;
        uStack_170 = puVar1[1];
        local_168 = puVar1[2];
        uStack_160 = puVar1[3];
        local_158 = puVar1[4];
        uStack_150 = puVar1[5];
        local_148 = puVar1[6];
        uStack_140 = puVar1[7];
        local_138 = puVar1[8];
        uStack_130 = puVar1[9];
        local_128 = puVar1[10];
        uStack_120 = puVar1[0xb];
        local_118 = puVar1[0xc];
        uStack_110 = puVar1[0xd];
        local_108 = puVar1[0xe];
        uStack_100 = puVar1[0xf];
        local_f8 = puVar1[0x10];
        uStack_f0 = puVar1[0x11];
        local_e8 = puVar1[0x12];
        uStack_e0 = puVar1[0x13];
        local_d8 = puVar1[0x14];
        uStack_d0 = puVar1[0x15];
        local_c8 = *(undefined4 *)(puVar1 + 0x16);
        uStack_c4 = *(undefined4 *)((longlong)puVar1 + 0xb4);
        uStack_c0 = *(undefined4 *)(puVar1 + 0x17);
        uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xbc);
        local_b8 = *(undefined4 *)(puVar1 + 0x18);
        uStack_b4 = *(undefined4 *)((longlong)puVar1 + 0xc4);
        uStack_b0 = *(undefined4 *)(puVar1 + 0x19);
        uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xcc);
        *(undefined8 **)(param_1 + 0xb4e80) = puVar1 + 0x1a;
        if (*(int *)(param_1 + 0x2e5d8) != 0) {
          local_1a8 = dVar3;
          dVar2 = (double)FUN_14567e4f0(param_1 + 0x2e510,param_1,&local_178,
                                        *(undefined8 *)(param_1 + 0xb4f88));
          uVar19 = (ulonglong)(uint)(int)((dVar2 / dVar4) * (double)(longlong)uVar15);
        }
        iVar16 = (int)uVar19;
        if ((iVar9 == iVar12 + -2) && (0 < iVar9)) {
          local_198 = (int)(iVar16 + (iVar16 >> 0x1f & 0xfU)) >> 4;
          iVar16 = iVar16 - local_198;
        }
        uVar7 = (ulonglong)local_198;
        iVar11 = (int)uVar15;
        if (iVar18 < iVar11) {
          iVar11 = iVar18;
        }
        if (iVar16 < 0) {
          iVar16 = 0;
        }
        else if (iVar11 < iVar16) {
          iVar16 = iVar11;
        }
        *(int *)(param_1 + 0xb5014 + lVar14) = iVar16;
        iVar9 = iVar9 + 1;
        lVar14 = lVar14 + 4;
        uVar17 = local_198;
      } while (iVar9 < iVar20);
    }
    piVar8 = (int *)(param_1 + 0xb5ae8 + (longlong)local_190 * 4);
    *piVar8 = *piVar8 + uVar17;
  }
  else {
    local_a8[0x10] = 0;
    local_a8[0x11] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_a8[8] = 0;
    local_a8[9] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    if (0 < (int)uVar17) {
      lVar13 = 0;
      piVar8 = (int *)(param_1 + 0xb5edc);
      do {
        if (piVar8[-0x2b5] == 3) {
          uVar7 = (ulonglong)*(byte *)(param_1 + 0xb58f4 + lVar13);
          local_a8[uVar7] = local_a8[uVar7] + *piVar8;
          local_a8[uVar7 + 6] = local_a8[uVar7 + 6] + 1;
        }
        lVar13 = lVar13 + 1;
        piVar8 = piVar8 + 1;
      } while (lVar13 < lVar14);
    }
    lVar13 = 0;
    do {
      iVar12 = *(int *)((longlong)local_a8 + lVar13 + 8);
      if (iVar12 == 0) break;
      iVar11 = *(int *)((longlong)local_a8 + lVar13 + 0x20);
      iVar5 = (*(int *)(param_1 + 0xb42e4) - iVar11) - iVar16;
      if (((longlong)param_2 < 1) || (iVar5 < 0)) {
        iVar12 = 0;
      }
      else {
        iVar5 = iVar5 * 100 + iVar12;
        if (0x3ff < iVar12) {
          iVar6 = iVar12 >> 10;
          iVar12 = iVar12 / iVar6;
          iVar5 = iVar5 / iVar6;
        }
        iVar12 = (int)((longlong)((longlong)iVar12 * param_2) / (longlong)iVar5);
        if (iVar12 < 1) {
          iVar12 = 0;
        }
      }
      *(int *)((longlong)local_a8 + lVar13 + 0x38) = iVar12;
      iVar16 = iVar16 + iVar11;
      iVar9 = iVar9 + 1;
      param_2 = param_2 - (longlong)iVar12;
      lVar13 = lVar13 + 4;
    } while (iVar9 < 6);
    iVar20 = iVar20 + (1 - iVar16);
    iVar9 = (int)param_2;
    if (1 < iVar20) {
      iVar9 = (int)((longlong)param_2 / (longlong)iVar20);
    }
    if (iVar18 < (int)param_2) {
      param_2 = uVar15;
    }
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if ((int)param_2 < iVar9) {
      iVar9 = (int)param_2;
    }
    uVar15 = (ulonglong)local_194;
    uVar10 = local_194;
    if ((longlong)(ulonglong)local_194 < lVar14) {
      piVar8 = (int *)(param_1 + ((ulonglong)local_194 + 0x2d7b7) * 4);
      do {
        if (piVar8[-0x2b5] == 3) {
          uVar7 = (ulonglong)*(byte *)(param_1 + 0xb58f4 + uVar15);
          iVar12 = (int)(((longlong)*piVar8 * (longlong)local_a8[uVar7 + 0xc]) /
                        (longlong)local_a8[uVar7]);
        }
        else {
          iVar12 = 0;
          if (piVar8[-0x2b5] != 6) {
            iVar12 = iVar9;
          }
        }
        piVar8[-0xfc] = iVar12;
        uVar15 = uVar15 + 1;
        piVar8 = piVar8 + 1;
        uVar10 = uVar17;
      } while ((longlong)uVar15 < lVar14);
    }
    *(undefined4 *)(param_1 + 0xb5aec + (longlong)(int)uVar10 * 4) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 145680370 FUN_145680370 body=1095 status=ok
// SIG undefined FUN_145680370(void)

ulonglong FUN_145680370(uint *param_1,int *param_2,longlong param_3,longlong param_4,int param_5,
                       int *param_6,double param_7,int param_8)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double local_res8;
  ulonglong uVar13;
  ulonglong uVar19;
  
  iVar3 = param_2[1];
  uVar16 = 0;
  iVar4 = *param_2;
  dVar7 = 0.0;
  dVar23 = 1.0;
  dVar6 = 0.0;
  *param_1 = 1;
  uVar15 = 0;
  uVar10 = (ulonglong)*(uint *)(param_4 + 0x68);
  local_res8 = 0.0;
  uVar13 = uVar16;
  if (0 < (int)*(uint *)(param_4 + 0x68)) {
    iVar5 = *(int *)(param_4 + 0x74);
    dVar8 = 1.0;
    dVar23 = 1.0;
    while ((int)uVar13 < iVar5) {
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar17 = param_5 + uVar12;
      uVar19 = (ulonglong)uVar17;
      if ((((int)uVar17 < 0) || (*(int *)(param_3 + 0x1c8) <= (int)uVar17)) ||
         (lVar11 = (longlong)(int)uVar17 * 0xd0 + *(longlong *)(param_3 + 0x1c0), lVar11 == 0))
      break;
      uVar14 = uVar15;
      if ((((int)(uVar17 + 1) < *(int *)(param_3 + 0x1c8)) &&
          (lVar9 = ((longlong)(int)uVar17 + 1) * 0xd0 + *(longlong *)(param_3 + 0x1c0), lVar9 != 0))
         && ((*(double *)(lVar9 + 0x20) <= *(double *)(lVar9 + 0x18) &&
              *(double *)(lVar9 + 0x18) != *(double *)(lVar9 + 0x20) ||
             ((dVar1 = *(double *)(lVar9 + 0x40),
              *(double *)(lVar9 + 0x30) <= dVar1 && dVar1 != *(double *)(lVar9 + 0x30) &&
              (0.5 <= dVar1)))))) {
        uVar14 = 1;
      }
      dVar1 = *(double *)(lVar11 + 0x38);
      dVar7 = dVar7 + ABS(dVar1 * *(double *)(lVar11 + 0xb0));
      if (0.05 < dVar1) {
        dVar21 = ABS(*(double *)(lVar11 + 0x80));
        if (0.0 <= dVar21) {
          dVar21 = dVar21 + 1e-06;
        }
        else {
          dVar21 = dVar21 - 1e-06;
        }
        dVar22 = *(double *)(lVar11 + 0x88);
        dVar24 = ABS(*(double *)(lVar11 + 0x90));
        if (0.0 <= dVar24) {
          dVar24 = dVar24 + 1e-06;
        }
        else {
          dVar24 = dVar24 - 1e-06;
        }
        dVar2 = *(double *)(lVar11 + 0x98);
        dVar25 = ABS(dVar22) / dVar21;
        if (dVar22 <= ABS(dVar22) / dVar21) {
          dVar25 = dVar22;
        }
        dVar21 = ABS(dVar2) / dVar24;
        if (dVar2 <= ABS(dVar2) / dVar24) {
          dVar21 = dVar2;
        }
        local_res8 = dVar21 * dVar1 + dVar25 * dVar1 + local_res8;
      }
      if (1 < (int)(*(int *)(param_4 + 0x78) + -1 + uVar12)) {
        dVar21 = *(double *)(lVar11 + 0x30) - dVar1;
        dVar22 = (double)FUN_14567f480(param_3);
        if (dVar21 <= dVar22) {
          dVar22 = dVar21;
        }
        if ((dVar22 <= dVar23) && (dVar23 = (double)FUN_14567f480(), dVar21 <= dVar23)) {
          dVar23 = dVar21;
        }
      }
      lVar9 = lVar11;
      dVar21 = dVar8;
      if (uVar14 == 0) {
        dVar22 = (double)FUN_14567f480(param_3);
        dVar21 = (*(double *)(lVar11 + 0x30) - dVar1) * *(double *)(param_3 + 0x1738);
        dVar22 = (1.0 - dVar22) * dVar21 + dVar22;
        if (dVar21 <= dVar22) {
          dVar21 = dVar22;
        }
        if ((((*(int *)(param_4 + 0x60) < (int)uVar12) && (0.999 <= dVar21)) && (dVar8 < 0.9)) &&
           (uVar20 = uVar16, (int)uVar19 + 5 <= *(int *)(param_3 + 0x1c8))) {
          do {
            uVar17 = (uint)uVar20;
            iVar18 = (int)uVar19;
            uVar10 = uVar16;
            if ((-1 < iVar18) && (iVar18 < *(int *)(param_3 + 0x1c8))) {
              uVar10 = (longlong)iVar18 * 0xd0 + *(longlong *)(param_3 + 0x1c0);
            }
            if (*(double *)(uVar10 + 0x30) - *(double *)(uVar10 + 0x38) < 0.999) break;
            uVar17 = uVar17 + 1;
            uVar19 = (ulonglong)(iVar18 + 1);
            uVar20 = (ulonglong)uVar17;
          } while ((int)uVar17 < 5);
          if (uVar17 == 5) {
            *param_1 = 0;
            break;
          }
          uVar10 = (ulonglong)*(uint *)(param_4 + 0x68);
        }
        if (uVar12 == 1) {
          dVar6 = dVar6 + *(double *)(lVar9 + 0x18);
        }
        else {
          dVar6 = dVar6 + (*(double *)(lVar9 + 0x20) - *(double *)(lVar9 + 0x18));
        }
      }
      if ((((param_6[1] <= (int)uVar12) && ((dVar23 < 0.995 || (*(int *)(param_4 + 0x88) != 0)))) ||
          (((*param_6 <= (int)uVar12 &&
            (((*(int *)(param_4 + 0x60) <= (int)(iVar5 - uVar12) && ((uVar12 & 1) != 0)) &&
             (uVar14 == 0)))) &&
           ((((double)(iVar3 + iVar4) * 0.25 < local_res8 || (4.0 < dVar7)) ||
            (param_7 * *(double *)(lVar9 + 0x10) < dVar6)))))) ||
         (dVar8 = dVar21, (int)uVar10 <= (int)uVar12)) break;
    }
  }
  if ((int)uVar13 < param_8) {
    uVar15 = (uint)(dVar23 < 0.995) & *param_1;
  }
  *param_1 = uVar15;
  *param_1 = *(int *)(param_4 + 0x60) <= (int)uVar13 & uVar15;
  return uVar13;
}



// FUNCTION 1456807c0 FUN_1456807c0 body=3277 status=ok
// SIG undefined FUN_1456807c0(void)

void FUN_1456807c0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  uint *local_170;
  double local_168;
  undefined4 local_160;
  int local_158;
  int local_154;
  int local_150;
  uint local_14c;
  undefined8 local_148;
  uint local_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  int local_12c;
  double local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar1 = (undefined4 *)(param_1 + 0xb4cd8);
  local_120 = *(undefined8 *)(param_1 + 0xb4e80);
  local_128 = 0.0;
  dVar4 = 0.0;
  dVar2 = 0.0;
  dVar3 = 0.0;
  iVar16 = 1;
  if ((((*(int *)(param_1 + 0x2e568) == 2) && (*(int *)(param_1 + 0x2e57c) == 1)) ||
      (*(int *)(param_1 + 0x2e578) < 4)) || (local_14c = 1, *(int *)(param_1 + 0x2e650) == 0)) {
    local_14c = 0;
  }
  iVar8 = iVar16;
  local_158 = param_2;
  if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
     (iVar8 = 0, *(int *)(param_1 + 0xb4300) != 0)) {
    local_154 = 0;
    local_148 = (int *)(param_1 + 0xb4544);
    local_150 = 1;
    if (iVar8 == 0) goto LAB_1456808fb;
    *local_148 = 0;
    local_150 = 1;
  }
  else {
    local_150 = 0;
    iVar16 = 0;
LAB_1456808fb:
    local_154 = 0;
    piVar19 = (int *)(param_1 + 0xb4544);
    local_148 = piVar19;
    memset((void *)(param_1 + 0xb5014),0,0x13a0);
    *piVar19 = *piVar19 + 1;
  }
  FUN_1425b0090();
  if (*(int *)(param_1 + 0x2e6c4) == 0) {
    uVar11 = *(undefined4 *)(param_1 + 0xb4290);
    dVar25 = (double)FUN_145614250(*(undefined4 *)(param_1 + 0xb4fe4),
                                   *(undefined4 *)(param_1 + 0x24));
    iVar6 = (int)dVar25;
    if (local_158 == 0) {
      iVar18 = (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5;
    }
    else {
      dVar25 = (double)FUN_145614250(uVar11,*(undefined4 *)(param_1 + 0x24));
      iVar18 = (int)(dVar25 / 6.0);
    }
    iVar20 = *(int *)(param_1 + 0xb42dc);
    iVar6 = iVar6 / 200;
    if (2 < iVar6) {
      iVar6 = 2;
    }
    iVar6 = iVar6 + *(int *)(param_1 + 0xb42d8);
    uVar17 = iVar20 + iVar16;
    uVar7 = iVar6 + iVar16;
    uVar10 = uVar17;
    if ((int)uVar7 < (int)uVar17) {
      iVar20 = iVar6;
      uVar10 = uVar7;
    }
    uStack_134 = iVar20 + iVar16;
    if (5 < iVar18) {
      iVar18 = 5;
    }
    uVar5 = iVar18 + 0xb + iVar16 | 1;
    uVar7 = uStack_134;
    if (((int)uStack_134 <= (int)uVar5) && (uVar7 = uVar5, (int)uVar17 <= (int)uVar5)) {
      uVar7 = uVar17;
    }
    iVar6 = *(int *)(param_1 + 0xb42ec);
    if (((int)uVar7 <= iVar6) && (iVar6 - *(int *)(param_1 + 0xb42d8) <= (int)uVar7)) {
      uVar7 = iVar6 / 2;
    }
    if ((int)uStack_134 < (int)uVar7) {
      uStack_134 = uVar7;
    }
  }
  else {
    uStack_13c = iVar16 + 0x10;
    iVar6 = *(int *)(param_1 + 0xb42ec);
    local_140 = *(int *)(param_1 + 0xb42d8) + 2 + iVar16;
    uVar10 = local_140;
    uStack_134 = uStack_13c;
    if (((int)uStack_13c <= iVar6) && (iVar6 - *(int *)(param_1 + 0xb42d8) <= (int)uStack_13c)) {
      local_140 = iVar6 / 2;
      uStack_13c = local_140;
      uVar10 = local_140;
      uStack_134 = local_140;
    }
  }
  if (*(int *)(param_1 + 0xcee70) == 0) {
    local_168 = 1.0;
  }
  else {
    iVar6 = 0;
    uVar7 = uStack_134;
    if (0 < (int)uStack_134) {
      do {
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 >> 1;
      } while (uVar7 != 0);
    }
    if (*(int *)(param_1 + 0x2e650) < iVar6) {
      iVar6 = *(int *)(param_1 + 0x2e650);
    }
    local_168 = (double)iVar6 * 0.25 + 1.0;
  }
  local_12c = local_154;
  local_160 = *(undefined4 *)(param_1 + 0x2e578);
  local_170 = &local_138;
  local_178 = (double)CONCAT44(local_178._4_4_,local_158);
  local_138 = uVar10;
  iVar6 = FUN_145680370(&local_140,param_1,puVar1,param_1 + 0xb4278);
  uVar7 = local_140 & local_14c;
  if ((*(int *)(param_1 + 0xcef28) != 0) && ((*(byte *)(param_1 + 0xcef38) & 2) != 0)) {
    local_118 = *(undefined4 *)(param_1 + 0xb42d8);
    local_114 = *(undefined4 *)(param_1 + 0xb42dc);
    local_10c = uStack_134;
    local_100 = *(undefined4 *)(param_1 + 0xb4300);
    local_fc = *(undefined4 *)(param_1 + 0xb42f0);
    local_f8 = *(undefined4 *)(param_1 + 0xb42ec);
    local_f4 = *(undefined4 *)(param_1 + 0x2e578);
    local_f0 = *(undefined4 *)(param_1 + 0x2e4c4);
    local_ec = *(undefined4 *)(param_1 + 0x2e4c8);
    local_108 = local_14c;
    local_e8 = *local_148;
    local_110 = uVar10;
    local_104 = iVar8;
    iVar8 = FUN_14568eed0(param_1 + 0xcef28,&local_118,&local_148);
    if (iVar8 != 0) {
      FUN_144d82810(param_1 + 0x29ee0,iVar8,"vp9_extrc_get_gop_decision() failed");
    }
    uVar7 = local_148._4_4_;
    iVar6 = (int)local_148;
  }
  iVar8 = local_158;
  iVar18 = iVar6 + -1;
  *(uint *)(param_1 + 0xb42e8) = (uint)(*(int *)(param_1 + 0xb42ec) <= iVar6);
  if (uVar7 == 0) {
    local_170 = (uint *)CONCAT44(local_170._4_4_,*(undefined4 *)(param_1 + 0xb4324));
    local_178 = (double)((ulonglong)local_178._4_4_ << 0x20);
    iVar20 = local_158 + 1;
    if (*(int *)(param_1 + 0xb4ea0) <= local_158 + 1) {
      iVar20 = *(int *)(param_1 + 0xb4ea0);
    }
    iVar18 = FUN_14567f6b0(param_1,puVar1,iVar20,iVar18);
    local_158 = 0;
    if ((int)*(double *)(param_1 + 0xb6400) < iVar18) {
      iVar18 = (int)*(double *)(param_1 + 0xb6400);
    }
  }
  else {
    iVar21 = *(int *)(param_1 + 0xb42ec) - iVar6;
    iVar20 = iVar18;
    if ((iVar21 < iVar18) && (iVar20 = iVar21, iVar21 < 0)) {
      iVar20 = 0;
    }
    local_170 = (uint *)CONCAT44(local_170._4_4_,*(undefined4 *)(param_1 + 0xb4324));
    local_178 = (double)CONCAT44(local_178._4_4_,iVar18);
    local_158 = 1;
    iVar18 = iVar8 + 1 + iVar6;
    if (*(int *)(param_1 + 0xb4ea0) <= iVar18) {
      iVar18 = *(int *)(param_1 + 0xb4ea0);
    }
    iVar18 = FUN_14567f6b0(param_1,puVar1,iVar18,iVar20);
  }
  *(int *)(param_1 + 0xb4298) = iVar18;
  *(int *)(param_1 + 0xb42fc) = local_158;
  *(undefined4 *)(param_1 + 0xb4530) = 0;
  *(undefined8 *)(param_1 + 0xb4528) = 0x3ff0000000000000;
  local_14c = -1;
  if ((*(int *)(param_1 + 0x2e5ac) != 0) || (*(int *)(param_1 + 0x2e5a8) != 0)) {
    iVar20 = *(int *)(param_1 + 0xb42f0);
    iVar21 = *(int *)(param_1 + 0xb42ec);
    if (iVar20 < iVar21) {
      if (0 < iVar21 - iVar6) {
        *(undefined4 *)(param_1 + 0xb4530) = 0xffffffff;
        iVar9 = (iVar20 + iVar21) / 2 + iVar6;
        if (iVar9 < 1) {
          iVar9 = 1;
        }
        iVar21 = iVar20 + iVar6;
        goto LAB_145680d23;
      }
    }
    else {
      iVar9 = (iVar20 + iVar21) / 2 - iVar6;
      *(undefined4 *)(param_1 + 0xb4530) = 1;
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      iVar21 = iVar21 - iVar6;
LAB_145680d23:
      *(double *)(param_1 + 0xb4528) = ((double)iVar21 * 0.8) / (double)iVar9 + 0.2;
    }
    local_154 = local_12c;
    local_150 = iVar16;
  }
  if (iVar6 * 200 <= iVar18) {
    iVar18 = iVar6 * 200;
  }
  *(int *)(param_1 + 0xb4298) = iVar18;
  if (*(int *)(param_1 + 0x2e5b4) == 5) {
    iVar20 = 0xfa;
    if (iVar18 < 0xfa) {
      iVar20 = iVar18;
    }
    *(int *)(param_1 + 0xb4298) = iVar20;
  }
  iVar18 = iVar6 - local_158;
  *(int *)(param_1 + 0xb42e4) = iVar18;
  if (local_158 != 0) {
    lVar14 = (longlong)iVar18;
    if (iVar18 < 0) {
      local_150 = iVar16;
      if (*(ulonglong *)(param_1 + 0xb4e88) <=
          (ulonglong)(*(longlong *)(param_1 + 0xb4e80) + lVar14 * 0xd0)) goto LAB_145680ddf;
    }
    else if ((ulonglong)(lVar14 * 0xd0 + *(longlong *)(param_1 + 0xb4e80)) <
             *(ulonglong *)(param_1 + 0xb4e90)) {
LAB_145680ddf:
      lVar14 = *(longlong *)(param_1 + 0xb4e80) + lVar14 * 0xd0;
      local_150 = iVar16;
      if ((lVar14 != 0) &&
         ((*(double *)(lVar14 + 0x20) <= *(double *)(lVar14 + 0x18) &&
           *(double *)(lVar14 + 0x18) != *(double *)(lVar14 + 0x20) ||
          ((dVar25 = *(double *)(lVar14 + 0x40),
           *(double *)(lVar14 + 0x30) <= dVar25 && dVar25 != *(double *)(lVar14 + 0x30) &&
           (0.5 <= dVar25)))))) {
        local_154 = 1;
        goto LAB_145680e1a;
      }
    }
    local_154 = 0;
  }
LAB_145680e1a:
  dVar25 = *(double *)(param_1 + 0xb4ce8) / *(double *)(param_1 + 0xb4da0);
  if (*(int *)(param_1 + 0x2e5d8) == 0) {
    dVar25 = (dVar25 * *(double *)(param_1 + 0xb4cf8)) / *(double *)(param_1 + 0xb4da0);
  }
  else {
    dVar25 = dVar25 * *(double *)(param_1 + 0xb4f88);
  }
  uVar22 = *(undefined8 *)(param_1 + 0xb4f88);
  if (iVar16 < iVar6) {
    iVar8 = iVar8 + iVar16;
    uVar23 = (ulonglong)(uint)(iVar6 - iVar16);
    dVar4 = 0.0;
    local_148 = (int *)((longlong)iVar8 * 0xd0);
    dVar2 = 0.0;
    dVar3 = 0.0;
    do {
      lVar14 = 0;
      if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0xb4ea0))) {
        lVar14 = *(longlong *)(param_1 + 0xb4e98) + (longlong)local_148;
      }
      local_178 = dVar25;
      dVar24 = (double)FUN_14567e4f0(param_1 + 0x2e510,param_1,lVar14,uVar22);
      iVar8 = iVar8 + 1;
      dVar24 = local_128 + dVar24;
      local_148 = (int *)((longlong)local_148 + 0xd0);
      dVar4 = dVar4 + *(double *)(lVar14 + 0x28);
      dVar2 = dVar2 + *(double *)(lVar14 + 0x30);
      dVar3 = dVar3 + *(double *)(lVar14 + 0x38);
      uVar23 = uVar23 - 1;
      iVar16 = local_150;
      local_128 = dVar24;
    } while (uVar23 != 0);
  }
  else {
    dVar24 = 0.0;
  }
  lVar14 = (longlong)*(int *)(param_1 + 0x2e5d4) * (longlong)*(int *)(param_1 + 0xb4308);
  lVar14 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar14),8) + lVar14;
  lVar14 = (lVar14 >> 6) - (lVar14 >> 0x3f);
  if (lVar14 < 0) {
    iVar8 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xb4310) < lVar14) {
      lVar14 = (longlong)*(int *)(param_1 + 0xb4310);
    }
    iVar8 = (int)lVar14;
  }
  lVar14 = 0;
  if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
     (iVar6 = 0, *(int *)(param_1 + 0xb4300) != 0)) {
    iVar6 = 1;
  }
  iVar18 = *(int *)(param_1 + 0xb42e4);
  lVar13 = *(longlong *)(param_1 + 0xb4fb8);
  lVar15 = lVar14;
  if ((((lVar13 < 1) || (*(double *)(param_1 + 0xb4fc0) <= 0.0)) ||
      (lVar15 = (longlong)
                (((double)((*(int *)(param_1 + 0xb42ec) - local_158) - iVar18) /
                 (double)(*(int *)(param_1 + 0xb42f0) + *(int *)(param_1 + 0xb42ec))) *
                 (double)*(int *)(param_1 + 0xb4308) * (double)iVar18 * 0.0625) +
                (longlong)((local_128 / *(double *)(param_1 + 0xb4fc0)) * (double)lVar13),
      dVar24 = local_128, -1 < lVar15)) && (lVar14 = lVar15, lVar13 < lVar15)) {
    lVar14 = lVar13;
  }
  local_148 = (int *)((longlong)((local_158 + iVar18) - iVar6) * (longlong)iVar8);
  if (lVar14 <= (longlong)local_148) {
    local_148 = (int *)lVar14;
  }
  iVar16 = (local_158 + iVar18) - iVar16;
  iVar6 = 0;
  dVar25 = (double)iVar16;
  iVar8 = iVar6;
  if (0 < iVar16) {
    iVar8 = (int)(dVar4 / dVar25);
  }
  *(int *)(param_1 + 0xb63b0) = iVar8;
  if (*(int *)(param_1 + 0x2e57c) == 3) {
LAB_145681155:
    if (1 < *(int *)(param_1 + 0xb42e4)) {
      dVar4 = dVar4 / dVar25;
      *(undefined4 *)(param_1 + 0xb4ff8) = 0;
      if (150.0 <= dVar4) {
        uVar10 = iVar6;
        if (250.0 < dVar4) {
          *(undefined4 *)(param_1 + 0xb4ff8) = 1;
          uVar10 = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xb4ff8) = 0xffffffff;
        uVar10 = local_14c;
        if (dVar4 < 75.0) {
          local_14c = -2;
          *(undefined4 *)(param_1 + 0xb4ff8) = 0xfffffffe;
          uVar10 = local_14c;
        }
      }
      if (0.5 < dVar2 / dVar25 - dVar3 / dVar25) {
        *(uint *)(param_1 + 0xb4ff8) = uVar10 + 1;
      }
      goto LAB_1456811e9;
    }
  }
  else if (1 < *(int *)(param_1 + 0xb42e4)) {
    local_178 = (double)CONCAT44(local_178._4_4_,(int)((longlong)local_148 / (longlong)iVar16));
    iVar16 = FUN_14567f180(param_1,(longlong)local_148 % (longlong)iVar16,iVar16,dVar4 / dVar25);
    *(int *)(param_1 + 0xb4fe4) =
         (int)(((*(double *)(param_1 + 0xb63b8) - 1.0) * (double)*(int *)(param_1 + 0xb4fe4) +
               (double)iVar16) / *(double *)(param_1 + 0xb63b8));
    dVar24 = local_128;
    goto LAB_145681155;
  }
  *(undefined4 *)(param_1 + 0xb4ff8) = 0;
LAB_1456811e9:
  iVar16 = *(int *)(param_1 + 0xb4298);
  if (((iVar16 == 0) || ((longlong)local_148 < 1)) || (*(int *)(param_1 + 0xb42e4) < 1)) {
    uVar23 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xb42e4) * 100 + -100 + iVar16;
    if (0x3ff < iVar16) {
      iVar18 = iVar16 >> 10;
      iVar16 = iVar16 / iVar18;
      iVar8 = iVar8 / iVar18;
    }
    uVar12 = ((longlong)iVar16 * (longlong)local_148) / (longlong)iVar8;
    uVar23 = uVar12 & 0xffffffff;
    if ((int)uVar12 < 1) {
      uVar23 = 0;
    }
  }
  lVar14 = param_1 + 0xb5014;
  uVar22 = 1;
  piVar19 = (int *)(param_1 + 0xb42fc);
  *(double *)(param_1 + 0xb4fc0) = *(double *)(param_1 + 0xb4fc0) - dVar24;
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*piVar19 != 0)) {
    iVar6 = 1;
  }
  *(int *)(param_1 + 0xb62cc) = *(int *)(param_1 + 0x2e4c4);
  *(int *)(param_1 + 0xb62d0) = *(int *)(param_1 + 0x2e4c4) + *(int *)(param_1 + 0xb42e4);
  *(undefined8 *)(param_1 + 0xb63a8) = 0;
  if (*(int *)(param_1 + 0x2a2e4) != 0) {
    if (*(int *)(param_1 + 0xb4300) == 0) {
      *(undefined4 *)(param_1 + 0xb5408) = 2;
      *(undefined4 *)(param_1 + 0xb5018) = 3;
      *(undefined1 *)(param_1 + 0xb58f4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xb5408) = 4;
      *(undefined4 *)(param_1 + 0xb5018) = 0;
      *(undefined1 *)(param_1 + 0xb58f4) = 5;
      *(undefined4 *)(param_1 + 0xb5edc) = 100;
    }
  }
  local_158 = 1;
  if (*piVar19 != 0) {
    *(undefined4 *)(param_1 + 0xb540c) = 3;
    *(undefined4 *)(param_1 + 0xb501c) = 3;
    *(undefined1 *)(param_1 + 0xb58f5) = 1;
    uVar22 = 2;
    *(char *)(param_1 + 0xb57f9) = *(char *)(param_1 + 0xb42e4) + -1;
    *(undefined1 *)(param_1 + 0xb59f1) = *(undefined1 *)(param_1 + 0xb42e4);
    *(undefined4 *)(param_1 + 0xb63a8) = 1;
    *(undefined4 *)(param_1 + 0xb63ac) = *(undefined4 *)(param_1 + 0x2e650);
    local_158 = 2;
  }
  local_170 = (uint *)CONCAT44(local_170._4_4_,*(int *)(param_1 + 0xb42e4) - iVar6);
  local_178 = (double)CONCAT44(local_178._4_4_,1);
  FUN_14567faf0(param_1,lVar14,&local_158,uVar22);
  lVar13 = (longlong)local_158;
  if (*piVar19 == 0) {
    *(undefined4 *)(param_1 + 0xb5408 + lVar13 * 4) = 2;
    *(undefined4 *)(param_1 + 0xb5018 + lVar13 * 4) = 3;
    *(undefined1 *)(lVar13 + 0x8e0 + lVar14) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xb5408 + lVar13 * 4) = 4;
    *(undefined4 *)(param_1 + 0xb5018 + lVar13 * 4) = 0;
    *(undefined1 *)(lVar13 + 0x8e0 + lVar14) = 5;
    *(undefined4 *)(param_1 + 0xb5edc + lVar13 * 4) = 100;
  }
  *(undefined1 *)(lVar13 + 0x7e4 + lVar14) = 0;
  *(undefined1 *)((longlong)local_158 + 0x9dc + lVar14) = *(undefined1 *)(param_1 + 0xb42e4);
  *(int *)(param_1 + 0xb63a4) = local_158;
  FUN_14567fde0(param_1,local_148,uVar23);
  *(undefined8 *)(param_1 + 0xb4e80) = local_120;
  uVar11 = FUN_14567f9f0(local_120,*(undefined8 *)(param_1 + 0xb4e90),
                         *(undefined4 *)(param_1 + 0xb42e4));
  *puVar1 = uVar11;
  if (*(int *)(param_1 + 0x2e5bc) == 2) {
    *(undefined4 *)(param_1 + 0xb43c8) = 0;
  }
  *(undefined8 *)(param_1 + 0xb4fd0) = 0;
  *(undefined4 *)(param_1 + 0xb4534) = *(undefined4 *)(param_1 + 0xb4538);
  *(undefined4 *)(param_1 + 0xb4538) = 0;
  if (((((*(int *)(param_1 + 0x2e5ac) != 0) || (*(int *)(param_1 + 0x2e5a8) != 0)) &&
       (*(int *)(param_1 + 0xb64dc) == 0)) &&
      ((*(int *)(param_1 + 0x2e5b4) == 0 && (*(int *)(param_1 + 0xcee70) != 0)))) &&
     (local_154 == 0)) {
    *(undefined4 *)(param_1 + 0xb4538) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_198);
}



// FUNCTION 1456814e0 FUN_1456814e0 body=1223 status=ok
// SIG undefined FUN_1456814e0(void)

ulonglong FUN_1456814e0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar4 = param_2 + -1;
  uVar9 = 0;
  plVar1 = param_1 + 1;
  uVar5 = uVar9;
  if ((iVar4 < 0) || ((int)*plVar1 <= iVar4)) {
    uVar8 = uVar9;
    if (param_2 < 0) goto LAB_145681549;
  }
  else {
    uVar8 = (longlong)iVar4 * 0xd0 + *param_1;
  }
  if (param_2 < (int)*plVar1) {
    uVar5 = (longlong)param_2 * 0xd0 + *param_1;
  }
LAB_145681549:
  param_2 = param_2 + 1;
  uVar7 = uVar9;
  if ((-1 < param_2) && (param_2 < (int)*plVar1)) {
    uVar7 = (longlong)param_2 * 0xd0 + *param_1;
  }
  dVar13 = *(double *)(uVar5 + 0x18);
  dVar16 = *(double *)(uVar5 + 0x30);
  dVar14 = 1.0 - dVar16;
  if (*(double *)(uVar5 + 0x20) <= dVar13 && dVar13 != *(double *)(uVar5 + 0x20)) {
    return 0;
  }
  if ((dVar16 < *(double *)(uVar5 + 0x40)) && (0.5 <= *(double *)(uVar5 + 0x40))) {
    return 0;
  }
  if (uVar7 != 0) {
    if (*(double *)(uVar7 + 0x20) <= *(double *)(uVar7 + 0x18) &&
        *(double *)(uVar7 + 0x18) != *(double *)(uVar7 + 0x20)) {
      return 0;
    }
    dVar2 = *(double *)(uVar7 + 0x40);
    if ((*(double *)(uVar7 + 0x30) <= dVar2 && dVar2 != *(double *)(uVar7 + 0x30)) && (0.5 <= dVar2)
       ) {
      return 0;
    }
  }
  if (0.2 < *(double *)(uVar5 + 0x40) || *(double *)(uVar5 + 0x40) == 0.2) {
    return 0;
  }
  if ((0.05 <= dVar16) &&
     (((dVar16 = *(double *)(uVar5 + 0x10), dVar13 * 1.5 <= dVar16 ||
       (dVar13 <= *(double *)(uVar8 + 0x18) * 5.0)) || (dVar13 <= *(double *)(uVar7 + 0x18) * 5.0)))
     ) {
    dVar2 = *(double *)(uVar8 + 0x18);
    dVar15 = dVar14 + *(double *)(uVar5 + 0x48);
    if (0.0 <= dVar2) {
      dVar10 = dVar2 + 1e-06;
    }
    else {
      dVar10 = dVar2 - 1e-06;
    }
    dVar10 = *(double *)(uVar8 + 0x10) / dVar10;
    if (0.0 <= dVar13) {
      dVar11 = dVar13 + 1e-06;
    }
    else {
      dVar11 = dVar13 - 1e-06;
    }
    dVar3 = *(double *)(uVar7 + 0x18);
    dVar11 = dVar16 / dVar11;
    if (0.0 <= dVar3) {
      dVar12 = dVar3 + 1e-06;
    }
    else {
      dVar12 = dVar3 - 1e-06;
    }
    dVar12 = *(double *)(uVar7 + 0x10) / dVar12;
    if (((((2.0 <= dVar11) || (dVar10 <= 2.25)) ||
         ((dVar12 <= 2.25 ||
          ((dVar14 <= (1.0 - *(double *)(uVar8 + 0x30)) * 3.0 ||
           (dVar14 <= (1.0 - *(double *)(uVar7 + 0x30)) * 3.0)))))) ||
        ((dVar14 <= 0.075 && (dVar15 <= 0.85)))) &&
       ((((1.25 <= dVar11 || (dVar15 <= 0.85)) || (dVar10 * 0.9 <= dVar11)) ||
        (dVar12 * 0.9 <= dVar11)))) {
      if (dVar13 <= dVar3 * 1.2) {
        return 0;
      }
      if (dVar13 <= dVar2 * 1.2) {
        return 0;
      }
      if (dVar14 <= 0.25) {
        return 0;
      }
      if (dVar15 <= 0.5) {
        return 0;
      }
      if (0.0 <= dVar13) {
        dVar13 = dVar13 + 1e-06;
      }
      else {
        dVar13 = dVar13 - 1e-06;
      }
      if (2.5 <= dVar16 / dVar13) {
        return 0;
      }
    }
  }
  dVar13 = 1.0;
  uVar5 = uVar9;
  dVar16 = 0.0;
  do {
    uVar6 = (uint)uVar5;
    uVar5 = uVar9;
    if ((-1 < param_2) && (param_2 < (int)*plVar1)) {
      uVar5 = (longlong)param_2 * 0xd0 + *param_1;
    }
    dVar14 = *(double *)(uVar5 + 0x18);
    if (0.0 <= dVar14) {
      dVar14 = dVar14 + 1e-06;
    }
    else {
      dVar14 = dVar14 - 1e-06;
    }
    dVar14 = (*(double *)(uVar5 + 0x10) * 12.5) / dVar14;
    dVar2 = *(double *)(uVar5 + 0x30);
    dVar15 = 128.0;
    if (dVar14 <= 128.0) {
      dVar15 = dVar14;
    }
    dVar14 = dVar2;
    if (dVar2 <= 0.85) {
      dVar14 = (dVar2 + 0.85) * 0.5;
    }
    dVar13 = dVar14 * dVar13;
    dVar14 = dVar16 + dVar13 * dVar15;
    if ((((dVar2 < 0.05) || (dVar15 < 1.5)) ||
        ((dVar2 - *(double *)(uVar5 + 0x48) < 0.2 && (dVar15 < 3.0)))) ||
       (((dVar14 - dVar16 < 3.0 || (*(double *)(uVar5 + 0x10) < 0.5)) ||
        (param_2 == (int)*plVar1 + -1)))) break;
    uVar6 = uVar6 + 1;
    uVar5 = (ulonglong)uVar6;
    param_2 = param_2 + 1;
    dVar16 = dVar14;
  } while ((int)uVar6 < 0x10);
  if ((30.0 < dVar14) && (3 < (int)uVar6)) {
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1456819b0 FUN_1456819b0 body=2491 status=ok
// SIG undefined FUN_1456819b0(void)

void FUN_1456819b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  double local_res8;
  int local_res10;
  double local_res18;
  double local_res20;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb4e80);
  uVar12 = 0;
  uVar17 = (ulonglong)param_2;
  uVar21 = uVar12;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xb4ea0))) {
    uVar21 = uVar17 * 0xd0 + *(longlong *)(param_1 + 0xb4e98);
  }
  dVar6 = 1.0;
  dVar26 = 0.0;
  local_res20 = 0.0;
  dVar25 = 0.0;
  local_res18 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  local_res10 = 0x20;
  dVar24 = *(double *)(param_1 + 0xb4ce8) / *(double *)(param_1 + 0xb4da0);
  if (*(int *)(param_1 + 0x2e5d8) == 0) {
    dVar24 = (dVar24 * *(double *)(param_1 + 0xb4cf8)) / *(double *)(param_1 + 0xb4da0);
  }
  else {
    dVar24 = dVar24 * *(double *)(param_1 + 0xb4f88);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb4f88);
  *(undefined4 *)(param_1 + 0x2a2e4) = 0;
  *(undefined4 *)(param_1 + 0xb42f0) = 0;
  memset((void *)(param_1 + 0xb5014),0,0x13a0);
  *(undefined4 *)(param_1 + 0xb42f4) = *(undefined4 *)(param_1 + 0xb42f8);
  *(undefined4 *)(param_1 + 0xb42ec) = 1;
  *(undefined4 *)(param_1 + 0xb4300) = 0;
  *(undefined4 *)(param_1 + 0xb42d4) = 0;
  *(undefined8 *)(param_1 + 0xb4fb8) = 0;
  *(undefined8 *)(param_1 + 0xb4fc0) = 0;
  dVar2 = *(double *)(uVar21 + 0x10);
  dVar22 = (double)FUN_14567e4f0(param_1 + 0x2e510,param_1,uVar21,uVar1,dVar24);
  uVar9 = FUN_14567e220(param_1 + 0x2e510,param_1 + 0xb4cd8,param_2,
                        *(undefined4 *)(param_1 + 0xb42d8));
  *(uint *)(param_1 + 0xb42ec) = uVar9;
  *(uint *)(param_1 + 0xb42f8) = (uint)(*(int *)(param_1 + 0x2e574) <= (int)uVar9);
  if (0 < (int)uVar9) {
    lVar20 = uVar17 * 0xd0;
    uVar21 = (ulonglong)uVar9;
    do {
      iVar10 = (int)uVar17;
      uVar17 = uVar12;
      if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0xb4ea0))) {
        uVar17 = *(longlong *)(param_1 + 0xb4e98) + lVar20;
      }
      dVar23 = (double)FUN_14567e4f0(param_1 + 0x2e510,param_1,uVar17,uVar1,dVar24);
      uVar17 = (ulonglong)(iVar10 + 1);
      dVar26 = dVar26 + dVar23;
      lVar20 = lVar20 + 0xd0;
      uVar21 = uVar21 - 1;
      local_res20 = dVar26;
    } while (uVar21 != 0);
  }
  uVar17 = 0;
  uVar21 = uVar17;
  if ((0 < *(longlong *)(param_1 + 0xb4f80)) && (0.0 < *(double *)(param_1 + 0xb4f90))) {
    lVar20 = (longlong)*(int *)(param_1 + 0x2e5d4) * (longlong)*(int *)(param_1 + 0xb4308);
    lVar20 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar20),8) + lVar20;
    uVar21 = (lVar20 >> 6) - (lVar20 >> 0x3f);
    uVar14 = uVar17;
    if ((-1 < (longlong)uVar21) &&
       (uVar14 = uVar21, (longlong)*(int *)(param_1 + 0xb4310) < (longlong)uVar21)) {
      uVar14 = (longlong)*(int *)(param_1 + 0xb4310);
    }
    uVar21 = (ulonglong)
             ((local_res20 / *(double *)(param_1 + 0xb4f90)) *
             (double)*(longlong *)(param_1 + 0xb4f80));
    *(ulonglong *)(param_1 + 0xb4fb8) = uVar21;
    uVar14 = (longlong)(int)uVar14 * (longlong)*(int *)(param_1 + 0xb42ec);
    if ((longlong)uVar14 < (longlong)uVar21) {
      uVar21 = uVar14;
    }
  }
  uVar14 = uVar17;
  if (-1 < (longlong)uVar21) {
    uVar14 = uVar21;
  }
  local_res8 = 0.0;
  *(ulonglong *)(param_1 + 0xb4fb8) = uVar14;
  uVar21 = uVar17;
  while( true ) {
    iVar10 = *(int *)(param_1 + 0xb42ec) + -1;
    if (0x30 < iVar10) {
      iVar10 = 0x30;
    }
    iVar19 = (int)uVar12;
    if ((iVar10 <= (int)uVar21) ||
       (puVar4 = *(undefined8 **)(param_1 + 0xb4e80), *(undefined8 **)(param_1 + 0xb4e90) <= puVar4)
       ) break;
    local_1b8 = *puVar4;
    uStack_1b0 = puVar4[1];
    uVar12 = (ulonglong)(iVar19 + 1);
    local_1a8 = (double)puVar4[2];
    dStack_1a0 = (double)puVar4[3];
    local_198 = (double)puVar4[4];
    uStack_190 = puVar4[5];
    local_188 = (double)puVar4[6];
    dStack_180 = (double)puVar4[7];
    local_178 = puVar4[8];
    uStack_170 = puVar4[9];
    local_168 = puVar4[10];
    uStack_160 = puVar4[0xb];
    local_158 = (double)puVar4[0xc];
    uStack_150 = puVar4[0xd];
    local_148 = (double)puVar4[0xe];
    uStack_140 = puVar4[0xf];
    local_138 = puVar4[0x10];
    uStack_130 = puVar4[0x11];
    uVar21 = (ulonglong)((int)uVar21 + 1);
    local_128 = puVar4[0x12];
    uStack_120 = puVar4[0x13];
    local_118 = puVar4[0x14];
    uStack_110 = puVar4[0x15];
    local_108 = (double)puVar4[0x16];
    uStack_100 = puVar4[0x17];
    local_f8 = puVar4[0x18];
    uStack_f0 = puVar4[0x19];
    *(undefined8 **)(param_1 + 0xb4e80) = puVar4 + 0x1a;
    dVar25 = dVar25 + (local_188 - dStack_180);
    dVar7 = dVar7 + (1.0 - dStack_1a0 / local_1a8);
  }
  if (0x1f < iVar19) {
    dVar24 = (dVar25 / (double)iVar19) * 64.0 - 16.0;
    dVar25 = (dVar7 / (double)iVar19) * 160.0 - 112.0;
    if (dVar24 <= dVar25) {
      dVar24 = dVar25;
    }
    iVar10 = 0x30;
    if ((int)dVar24 < 0x30) {
      iVar10 = (int)dVar24;
    }
    local_res10 = 0x20;
    if (0x20 < iVar10) {
      local_res10 = iVar10;
    }
  }
  *(undefined8 *)(param_1 + 0xb4e80) = uVar3;
  dVar24 = 0.0;
  if (0 < *(int *)(param_1 + 0xb42ec) + -1) {
    dVar6 = 1.0;
    while (puVar4 = *(undefined8 **)(param_1 + 0xb4e80), dVar24 = local_res8,
          puVar4 < *(undefined8 **)(param_1 + 0xb4e90)) {
      local_1b8 = *puVar4;
      uStack_1b0 = puVar4[1];
      local_1a8 = (double)puVar4[2];
      dStack_1a0 = (double)puVar4[3];
      local_198 = (double)puVar4[4];
      uStack_190 = puVar4[5];
      local_188 = (double)puVar4[6];
      dStack_180 = (double)puVar4[7];
      local_178 = puVar4[8];
      uStack_170 = puVar4[9];
      local_168 = puVar4[10];
      uStack_160 = puVar4[0xb];
      local_158 = (double)puVar4[0xc];
      uStack_150 = puVar4[0xd];
      local_148 = (double)puVar4[0xe];
      uStack_140 = puVar4[0xf];
      local_138 = puVar4[0x10];
      uStack_130 = puVar4[0x11];
      local_128 = puVar4[0x12];
      uStack_120 = puVar4[0x13];
      local_118 = puVar4[0x14];
      uStack_110 = puVar4[0x15];
      local_108 = (double)puVar4[0x16];
      uStack_100 = puVar4[0x17];
      local_f8 = puVar4[0x18];
      uStack_f0 = puVar4[0x19];
      *(undefined8 **)(param_1 + 0xb4e80) = puVar4 + 0x1a;
      iVar10 = (int)uVar17;
      if ((local_res10 < iVar10) && (dVar6 < 0.99)) break;
      if (iVar10 < 1) {
        uVar11 = SUB84(dStack_180,0);
        uVar27 = (undefined4)((ulonglong)dStack_180 >> 0x20);
        dVar6 = local_188 - dStack_180;
        dVar24 = dVar6 * 0.5 + 0.75;
LAB_145681fb2:
        dVar8 = 0.0;
      }
      else {
        dVar24 = (double)FUN_14567f480(param_1 + 0xb4cd8,&local_1b8);
        uVar11 = SUB84(dStack_180,0);
        uVar27 = (undefined4)((ulonglong)dStack_180 >> 0x20);
        if (local_188 - dStack_180 <= dVar24) {
          dVar24 = local_188 - dStack_180;
        }
        if (dVar24 <= dVar6) {
          dVar6 = dVar24;
        }
        dVar24 = dVar6 * 0.5 + 0.75;
        if (iVar10 < 2) goto LAB_145681fb2;
      }
      dVar25 = (double)FUN_145614250(*(undefined4 *)(param_1 + 0xb4324),
                                     *(undefined4 *)(param_1 + 0x2e4d0));
      dVar25 = dVar25 * 0.015 + 0.5;
      if (2.0 <= dVar25) {
        dVar25 = 2.0;
      }
      dVar26 = 1.0 - ((local_148 * 2.0) / (double)*(int *)(param_1 + 0x18) + local_158 * 0.5);
      dVar7 = 0.5;
      if ((0.5 <= dVar26) && (dVar7 = 1.0, dVar26 <= 1.0)) {
        dVar7 = dVar26;
      }
      dVar26 = dStack_1a0 + dVar8;
      if (0.0 <= dVar26) {
        dVar26 = dVar26 + 1e-06;
      }
      else {
        dVar26 = dVar26 - 1e-06;
      }
      dVar7 = ((dVar7 * *(double *)(param_1 + 0xb63d8)) / dVar26 + *(double *)(param_1 + 0xb63e0)) *
              dVar25;
      dVar26 = (local_198 - dStack_1a0) + dVar8;
      dVar8 = 0.0;
      if (0.0 <= dVar26) {
        dVar8 = dVar26;
      }
      if (*(int *)(param_1 + 0x2e4c4) == 0) {
        dVar26 = *(double *)(param_1 + 0xb63e8);
      }
      else {
        dVar26 = *(double *)(param_1 + 0xb63f0);
      }
      dVar26 = dVar25 * dVar24 * dVar26;
      if (dVar26 <= dVar7) {
        dVar7 = dVar26;
      }
      local_res18 = local_res18 + ABS(local_108 * (double)CONCAT44(uVar27,uVar11));
      dVar24 = local_res8 + dVar7;
      if ((((dVar7 < 25.0) || (6.0 < local_res18)) || (dVar2 * 1.5 < dVar8)) ||
         (uVar17 = (ulonglong)(iVar10 + 1U), local_res8 = dVar24,
         *(int *)(param_1 + 0xb42ec) + -1 <= (int)(iVar10 + 1U))) break;
    }
  }
  lVar20 = 0;
  *(undefined8 *)(param_1 + 0xb4e80) = uVar3;
  *(int *)(param_1 + 0xb4fdc) = (int)(dVar6 * 100.0);
  uVar11 = FUN_14567f9f0(dVar6 * 100.0,*(undefined8 *)(param_1 + 0xb4e90),
                         *(undefined4 *)(param_1 + 0xb42ec));
  *(undefined4 *)(param_1 + 0xb4cdc) = uVar11;
  if ((dVar6 <= 0.99) || (*(int *)(param_1 + 0xb42ec) < 9)) {
    iVar10 = *(int *)(param_1 + 0xb42ec) * 3;
    iVar19 = (int)dVar24;
    if ((int)dVar24 <= iVar10) {
      iVar19 = iVar10;
    }
    iVar10 = 300;
    if (300 < iVar19) {
      iVar10 = iVar19;
    }
    *(int *)(param_1 + 0xb42a0) = iVar10;
    if ((int)*(double *)(param_1 + 0xb63f8) <= iVar10) {
      iVar10 = (int)*(double *)(param_1 + 0xb63f8);
    }
  }
  else {
    iVar10 = (int)*(double *)(param_1 + 0xb63f8);
  }
  *(int *)(param_1 + 0xb42a0) = iVar10;
  lVar5 = *(longlong *)(param_1 + 0xb4fb8);
  iVar19 = *(int *)(param_1 + 0xb42ec);
  if (((iVar10 == 0) || (lVar5 < 1)) || (iVar19 < 1)) {
    iVar10 = (int)lVar20;
  }
  else {
    iVar18 = iVar19 * 100 + -100 + iVar10;
    if (0x3ff < iVar10) {
      iVar13 = iVar10 >> 10;
      iVar10 = iVar10 / iVar13;
      iVar18 = iVar18 / iVar13;
    }
    lVar20 = 0;
    iVar10 = (int)((iVar10 * lVar5) / (longlong)iVar18);
    if (iVar10 < 1) {
      iVar10 = 0;
    }
  }
  iVar10 = iVar10 + (int)((double)(lVar5 - iVar10) * (dVar22 / local_res20));
  lVar15 = lVar5 - (iVar19 * 200 + -200);
  lVar16 = lVar20;
  if ((-1 < lVar15) && (lVar16 = lVar15, 0x7fffffff < lVar15)) {
    lVar16 = 0x7fffffff;
  }
  iVar19 = (int)lVar16;
  if (iVar10 < (int)lVar16) {
    iVar19 = iVar10;
  }
  *(longlong *)(param_1 + 0xb4fb8) = lVar5 - iVar19;
  *(int *)(param_1 + 0xb5aec) = iVar19;
  *(int *)(param_1 + 0xb5408) = (int)lVar20;
  *(undefined4 *)(param_1 + 0xb5018) = 4;
  *(undefined1 *)(param_1 + 0xb58f4) = 0;
  *(double *)(param_1 + 0xb4fc0) = local_res20 - dVar22;
  *(double *)(param_1 + 0xb4f90) = *(double *)(param_1 + 0xb4f90) - local_res20;
  if (*(int *)(param_1 + 0x2e5bc) == 2) {
    *(int *)(param_1 + 0xb43c8) = (int)lVar20;
  }
  return;
}



// FUNCTION 145682370 FUN_145682370 body=216 status=ok
// SIG undefined FUN_145682370(void)

void FUN_145682370(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = ((param_1[1] - 1) * param_3 >> 8) + 1;
  uVar8 = uVar4 + *param_1;
  if (param_2 == 0) {
    uVar8 = *param_1;
  }
  uVar2 = param_1[1] - uVar4;
  if (param_2 == 0) {
    uVar2 = uVar4;
  }
  bVar1 = (&DAT_149d54800)[uVar2];
  uVar9 = param_1[2] + (uint)bVar1;
  uVar4 = uVar9;
  uVar5 = (uint)bVar1;
  if (-1 < (int)uVar9) {
    bVar3 = bVar1 - (char)uVar9;
    if ((int)(uVar8 << (bVar3 - 1 & 0x1f)) < 0) {
      iVar7 = param_1[3] - 1;
      lVar6 = (longlong)iVar7;
      if (-1 < iVar7) {
        do {
          if (*(char *)(*(longlong *)(param_1 + 4) + lVar6) != -1) break;
          iVar7 = iVar7 + -1;
          *(undefined1 *)(*(longlong *)(param_1 + 4) + lVar6) = 0;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar7) =
           *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar7) + '\x01';
    }
    *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) =
         (char)(uVar8 >> (0x18 - bVar3 & 0x1f));
    uVar8 = uVar8 << (bVar3 & 0x1f) & 0xffffff;
    param_1[3] = param_1[3] + 1;
    uVar4 = uVar9 - 8;
    uVar5 = uVar9;
  }
  param_1[2] = uVar4;
  *param_1 = uVar8 << ((byte)uVar5 & 0x1f);
  param_1[1] = uVar2 << (bVar1 & 0x1f);
  return;
}



// FUNCTION 145682450 FUN_145682450 body=330 status=ok
// SIG undefined FUN_145682450(void)

void FUN_145682450(uint *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  char param_6)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  do {
    param_5 = param_5 + -1;
    uVar10 = *param_1;
    uVar9 = ((uint)*(byte *)(((longlong)param_6 >> 1) + param_3) * (param_1[1] - 1) >> 8) + 1;
    uVar7 = param_4 >> ((byte)param_5 & 0x1f) & 1;
    if (uVar7 != 0) {
      uVar10 = uVar10 + uVar9;
      uVar9 = param_1[1] - uVar9;
    }
    bVar1 = (&DAT_149d54800)[uVar9];
    uVar5 = param_1[2] + (uint)bVar1;
    uVar6 = uVar5;
    uVar8 = (uint)bVar1;
    if (-1 < (int)uVar5) {
      bVar2 = bVar1 - (char)uVar5;
      if ((int)(uVar10 << (bVar2 - 1 & 0x1f)) < 0) {
        iVar4 = param_1[3] - 1;
        lVar3 = (longlong)iVar4;
        if (-1 < iVar4) {
          do {
            if (*(char *)(*(longlong *)(param_1 + 4) + lVar3) != -1) break;
            iVar4 = iVar4 + -1;
            *(undefined1 *)(*(longlong *)(param_1 + 4) + lVar3) = 0;
            lVar3 = lVar3 + -1;
          } while (-1 < lVar3);
        }
        *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar4) =
             *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar4) + '\x01';
      }
      *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) =
           (char)(uVar10 >> (0x18 - bVar2 & 0x1f));
      uVar10 = uVar10 << (bVar2 & 0x1f) & 0xffffff;
      param_1[3] = param_1[3] + 1;
      uVar6 = uVar5 - 8;
      uVar8 = uVar5;
    }
    param_1[2] = uVar6;
    *param_1 = uVar10 << ((byte)uVar8 & 0x1f);
    param_1[1] = uVar9 << (bVar1 & 0x1f);
    param_6 = *(char *)((int)((int)param_6 + uVar7) + param_2);
    if (param_5 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 1456825a0 FUN_1456825a0 body=255 status=ok
// SIG undefined FUN_1456825a0(void)

uint FUN_1456825a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x2f6c8);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0xb4304) != 0)) && (*(int *)(param_1 + 0xb64dc) == 0)) {
    return *(int *)(param_1 + 0x2f6c4) << ((byte)*(undefined4 *)(param_1 + 0x2f698) & 0x1f) |
           iVar1 << ((byte)*(undefined4 *)(param_1 + 0x2f6a0) & 0x1f);
  }
  iVar3 = *(int *)(param_1 + 0x2f6a0);
  if (*(int *)(param_1 + 0xcee70) != 0) {
    iVar3 = 0;
    do {
      if (((iVar3 != *(int *)(param_1 + 0x2f6a0)) && (iVar3 != *(int *)(param_1 + 0x2f698))) &&
         (iVar3 != *(int *)(param_1 + 0x2f69c))) {
        iVar2 = *(int *)(param_1 + 0xb63a0);
        iVar6 = 0;
        lVar5 = 0;
        if (0 < iVar2) {
          piVar4 = (int *)(param_1 + 0xb62d4);
          do {
            if (iVar3 == *piVar4) break;
            iVar6 = iVar6 + 1;
            lVar5 = lVar5 + 1;
            piVar4 = piVar4 + 1;
          } while (lVar5 < iVar2);
        }
        if (iVar6 == iVar2) break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
  }
  *(int *)(param_1 + 0xb639c) = iVar3;
  if (((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0xcb9e4) != 0)) &&
     (*(int *)(param_1 + 0xcb6a0) == 1)) {
    return *(uint *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4);
  }
  return *(int *)(param_1 + 0x2f6cc) << ((byte)iVar3 & 0x1f) |
         *(int *)(param_1 + 0x2f6c4) << ((byte)*(undefined4 *)(param_1 + 0x2f698) & 0x1f) |
         iVar1 << ((byte)*(undefined4 *)(param_1 + 0x2f69c) & 0x1f);
}



// FUNCTION 1456826a0 FUN_1456826a0 body=120 status=ok
// SIG undefined FUN_1456826a0(void)

void FUN_1456826a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xcd498) != 0) {
    iVar1 = 1;
    if (1 < *(int *)(param_1 + 0xcd42c)) {
      lVar2 = 0x2d0;
      do {
        FUN_14518f040(*(undefined8 *)(*(longlong *)(param_1 + 0xcd498) + lVar2));
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 0x2d0;
      } while (iVar1 < *(int *)(param_1 + 0xcd42c));
    }
    FUN_14518f040(*(undefined8 *)(param_1 + 0xcd498));
    *(undefined8 *)(param_1 + 0xcd498) = 0;
  }
  return;
}



// FUNCTION 145682720 FUN_145682720 body=721 status=ok
// SIG undefined FUN_145682720(void)

void FUN_145682720(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
  uint local_5c;
  
  uStack_80 = 0;
  local_88 = param_2;
  FUN_145686140(param_1,&local_88);
  if (*(int *)(param_1 + 0x2a2f0) == 0) {
    local_78 = (undefined4)local_88;
    uStack_74 = local_88._4_4_;
    uStack_70 = (undefined4)uStack_80;
    uStack_6c = uStack_80._4_4_;
    FUN_1456a82d0(&local_88,0,0x10);
    lVar1 = FUN_1456a8240(&local_88);
    FUN_1425b0090();
    uVar2 = FUN_145686720(param_1,param_2 + lVar1);
    lVar8 = param_2 + lVar1 + uVar2;
    FUN_1456a82d0(&local_78,uVar2 & 0xffffffff,0x10);
    iVar4 = 1 << ((byte)*(undefined4 *)(param_1 + 0x2e4e0) & 0x1f);
    iVar9 = 1 << ((byte)*(undefined4 *)(param_1 + 0x2e4e4) & 0x1f);
    lVar1 = 0;
    memset(*(void **)(param_1 + 0x2e4f8),0,
           (longlong)(*(int *)(param_1 + 0x2a310) + 7) & 0xfffffffffffffff8);
    if ((((*(int *)(param_1 + 0x2e568) == 2) && (1 < *(int *)(param_1 + 0xcd42c))) && (iVar9 == 1))
       && (1 < iVar4)) {
      lVar1 = FUN_145685b10(param_1,lVar8);
    }
    else {
      iVar6 = 0;
      if (0 < iVar9) {
        local_a0 = 0;
        do {
          iVar7 = 0;
          if (0 < iVar4) {
            lVar10 = local_a0;
            do {
              if ((iVar7 < iVar4 + -1) || (iVar6 < iVar9 + -1)) {
                lVar3 = lVar1 + lVar8 + 4;
              }
              else {
                lVar3 = lVar1 + lVar8;
              }
              puVar5 = (undefined1 *)(lVar1 + lVar8);
              FUN_1456a8360(local_68,lVar3);
              FUN_145684310(param_1,param_1 + 0x121b0,*(longlong *)(param_1 + 0x2f680) + lVar10,
                            local_68,iVar6,iVar7,param_1 + 0xb4938,param_1 + 0xb4550);
              FUN_1456a8380(local_68);
              if ((iVar7 < iVar4 + -1) || (iVar6 < iVar9 + -1)) {
                *puVar5 = (char)(local_5c >> 0x18);
                puVar5[1] = (char)(local_5c >> 0x10);
                puVar5[2] = (char)(local_5c >> 8);
                lVar1 = lVar1 + 4;
                puVar5[3] = (char)local_5c;
              }
              iVar7 = iVar7 + 1;
              lVar1 = lVar1 + (ulonglong)local_5c;
              lVar10 = lVar10 + 0x860;
            } while (iVar7 < iVar4);
          }
          local_a0 = local_a0 + (longlong)iVar4 * 0x860;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar9);
      }
    }
    *param_3 = (lVar1 - param_2) + lVar8;
    return;
  }
  lVar1 = FUN_1456a8240();
  *param_3 = lVar1;
  return;
}



// FUNCTION 145682a00 FUN_145682a00 body=346 status=ok
// SIG undefined FUN_145682a00(void)

void FUN_145682a00(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  
  lVar4 = *(longlong *)(param_2 + 0x1c8);
  bVar2 = ((byte *)**(undefined8 **)(param_2 + 0x1c0))[2];
  lVar5 = *(longlong *)(param_2 + 0x1d0);
  bVar3 = (&DAT_149d54b30)[*(byte *)**(undefined8 **)(param_2 + 0x1c0)];
  bVar6 = bVar3;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 3) == '\0')) {
    bVar6 = *(byte *)(lVar5 + 2);
  }
  bVar7 = bVar3;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 3) == '\0')) {
    bVar7 = *(byte *)(lVar4 + 2);
  }
  bVar8 = bVar6;
  if (lVar4 != 0) {
    bVar8 = bVar7;
  }
  uVar1 = (uint)bVar6;
  if (lVar5 == 0) {
    uVar1 = (uint)bVar8;
  }
  puVar10 = (undefined1 *)0x0;
  uVar1 = bVar8 + uVar1;
  if (bVar3 == 1) {
    uVar9 = (ulonglong)(1 < uVar1) + 10;
  }
  else if (bVar3 == 2) {
    uVar9 = 6;
    if (2 < uVar1) {
      uVar9 = 8;
    }
  }
  else {
    if (bVar3 != 3) goto LAB_145682ae7;
    uVar9 = (ulonglong)(-(uint)(3 < uVar1) & 3);
  }
  puVar10 = (undefined1 *)(uVar9 + *(longlong *)(param_1 + 0x1228) + 0x7a3);
LAB_145682ae7:
  FUN_145682370(param_3,bVar2 != 0,*puVar10);
  if ((((bVar2 != 0) && (1 < bVar3)) && (FUN_145682370(param_3,bVar2 != 1,puVar10[1]), bVar2 != 1))
     && (2 < bVar3)) {
    FUN_145682370(param_3,bVar2 != 2,puVar10[2]);
  }
  return;
}



// FUNCTION 145682b60 FUN_145682b60 body=139 status=ok
// SIG undefined FUN_145682b60(void)

int FUN_145682b60(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x11a8) != '\0') &&
     ((*(byte *)(param_1 + 0x11f8 + (longlong)param_3 * 4) & 8) != 0)) {
    return 1;
  }
  iVar2 = 0;
  cVar1 = *(char *)(param_4 + 3);
  if (*(longlong *)(param_2 + 0x1d0) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)*(char *)(*(longlong *)(param_2 + 0x1d0) + 3);
  }
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    iVar2 = (int)*(char *)(*(longlong *)(param_2 + 0x1c8) + 3);
  }
  FUN_145682370(param_5,(int)cVar1,
                *(undefined1 *)((longlong)(iVar2 + iVar3) + 0x7af + *(longlong *)(param_1 + 0x1228))
               );
  return (int)cVar1;
}



// FUNCTION 145682bf0 FUN_145682bf0 body=1312 status=ok
// SIG undefined FUN_145682bf0(void)

void FUN_145682bf0(uint *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  
  if (param_4 == 0xc) {
    puVar6 = &DAT_149df33f0;
  }
  else {
    puVar6 = &DAT_149df31b0;
    if (param_4 == 10) {
      puVar6 = &DAT_149df32d0;
    }
  }
  plVar17 = (longlong *)*param_2;
  do {
    if ((param_3 <= plVar17) || ((short)plVar17[1] == 0x7f)) {
      lVar7 = 0;
      if ((short)plVar17[1] == 0x7f) {
        lVar7 = 0x10;
      }
      *param_2 = lVar7 + (longlong)plVar17;
      return;
    }
    uVar14 = param_1[1];
    uVar11 = *param_1;
    if ((short)plVar17[1] == 0xb) {
      uVar12 = ((uVar14 - 1) * (uint)*(byte *)*plVar17 >> 8) + 1;
      bVar1 = (&DAT_149d54800)[uVar12];
      uVar13 = param_1[2] + (uint)bVar1;
      uVar14 = uVar13;
      uVar15 = (uint)bVar1;
      if (-1 < (int)uVar13) {
        bVar4 = bVar1 - (char)uVar13;
        if ((int)(uVar11 << (bVar4 - 1 & 0x1f)) < 0) {
          iVar8 = param_1[3] - 1;
          lVar7 = (longlong)iVar8;
          if (-1 < iVar8) {
            do {
              if (*(char *)(lVar7 + *(longlong *)(param_1 + 4)) != -1) break;
              iVar8 = iVar8 + -1;
              *(undefined1 *)(lVar7 + *(longlong *)(param_1 + 4)) = 0;
              lVar7 = lVar7 + -1;
            } while (-1 < lVar7);
          }
          *(char *)((longlong)iVar8 + *(longlong *)(param_1 + 4)) =
               *(char *)((longlong)iVar8 + *(longlong *)(param_1 + 4)) + '\x01';
        }
        *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) =
             (char)(uVar11 >> (0x18 - bVar4 & 0x1f));
        uVar11 = uVar11 << (bVar4 & 0x1f) & 0xffffff;
        param_1[3] = param_1[3] + 1;
        uVar14 = uVar13 - 8;
        uVar15 = uVar13;
      }
      param_1[2] = uVar14;
      *param_1 = uVar11 << ((byte)uVar15 & 0x1f);
      param_1[1] = uVar12 << (bVar1 & 0x1f);
    }
    else {
      iVar8 = ((uVar14 - 1) * (uint)*(byte *)*plVar17 >> 8) + 1;
      uVar14 = uVar14 - iVar8;
      uVar11 = uVar11 + iVar8;
      bVar1 = (&DAT_149d54800)[uVar14];
      uVar14 = uVar14 << (bVar1 & 0x1f);
      uVar13 = param_1[2] + (uint)bVar1;
      uVar15 = uVar13;
      uVar12 = (uint)bVar1;
      if (-1 < (int)uVar13) {
        bVar1 = bVar1 - (char)uVar13;
        if ((int)(uVar11 << (bVar1 - 1 & 0x1f)) < 0) {
          iVar8 = param_1[3] - 1;
          lVar7 = (longlong)iVar8;
          if (-1 < iVar8) {
            do {
              if (*(char *)(lVar7 + *(longlong *)(param_1 + 4)) != -1) break;
              iVar8 = iVar8 + -1;
              *(undefined1 *)(lVar7 + *(longlong *)(param_1 + 4)) = 0;
              lVar7 = lVar7 + -1;
            } while (-1 < lVar7);
          }
          *(char *)((longlong)iVar8 + *(longlong *)(param_1 + 4)) =
               *(char *)((longlong)iVar8 + *(longlong *)(param_1 + 4)) + '\x01';
        }
        *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) =
             (char)(uVar11 >> (0x18 - bVar1 & 0x1f));
        uVar11 = uVar11 << (bVar1 & 0x1f) & 0xffffff;
        param_1[3] = param_1[3] + 1;
        uVar15 = uVar13 - 8;
        uVar12 = uVar13;
      }
      param_1[2] = uVar15;
      uVar11 = uVar11 << ((byte)uVar12 & 0x1f);
      *param_1 = uVar11;
      param_1[1] = uVar14;
      sVar2 = (short)plVar17[1];
      plVar5 = plVar17;
      while (plVar17 = plVar5, sVar2 == 0) {
        uVar14 = ((uVar14 - 1) * (uint)*(byte *)(*plVar17 + 1) >> 8) + 1;
        bVar1 = (&DAT_149d54800)[uVar14];
        uVar14 = uVar14 << (bVar1 & 0x1f);
        uVar13 = uVar15 + bVar1;
        uVar15 = uVar13;
        uVar12 = (uint)bVar1;
        if (-1 < (int)uVar13) {
          bVar1 = bVar1 - (char)uVar13;
          if ((int)(uVar11 << (bVar1 - 1 & 0x1f)) < 0) {
            iVar8 = param_1[3] - 1;
            lVar7 = (longlong)iVar8;
            if (-1 < iVar8) {
              do {
                if (*(char *)(lVar7 + *(longlong *)(param_1 + 4)) != -1) break;
                iVar8 = iVar8 + -1;
                *(undefined1 *)(lVar7 + *(longlong *)(param_1 + 4)) = 0;
                lVar7 = lVar7 + -1;
              } while (-1 < lVar7);
            }
            *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar8) =
                 *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar8) + '\x01';
          }
          *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) =
               (char)(uVar11 >> (0x18 - bVar1 & 0x1f));
          uVar11 = uVar11 << (bVar1 & 0x1f) & 0xffffff;
          param_1[3] = param_1[3] + 1;
          uVar15 = uVar13 - 8;
          uVar12 = uVar13;
        }
        param_1[2] = uVar15;
        uVar11 = uVar11 << ((byte)uVar12 & 0x1f);
        *param_1 = uVar11;
        param_1[1] = uVar14;
        if ((plVar17 + 2 == param_3) ||
           (sVar2 = (short)plVar17[3], plVar5 = plVar17 + 2, sVar2 == 0x7f)) {
          lVar7 = 0x10;
          if ((short)plVar17[3] == 0x7f) {
            lVar7 = 0x20;
          }
          *param_2 = lVar7 + (longlong)plVar17;
          return;
        }
      }
      lVar7 = *plVar17;
      sVar2 = (short)plVar17[1];
      lVar18 = (longlong)sVar2;
      FUN_145682370(param_1,1,*(undefined1 *)(lVar7 + 1));
      if (sVar2 == 1) {
        FUN_145682370(param_1,0,*(undefined1 *)(lVar7 + 2));
        FUN_145682370(param_1,*(uint *)((longlong)plVar17 + 0xc) & 1,0x80);
      }
      else {
        uVar14 = *(uint *)((longlong)plVar17 + 0xc);
        uVar3 = *(undefined4 *)(&DAT_149df3150 + lVar18 * 8);
        iVar8 = *(int *)(&DAT_149df3154 + lVar18 * 8);
        FUN_145682370(param_1,1,*(undefined1 *)(lVar7 + 2));
        FUN_145682450(param_1,&DAT_149d519f0,&DAT_149d51a08 + (ulonglong)*(byte *)(lVar7 + 2) * 8,
                      uVar3,iVar8 + -3,0);
        if (4 < sVar2) {
          pbVar10 = *(byte **)(puVar6 + lVar18 * 0x18);
          iVar8 = *(int *)(puVar6 + lVar18 * 0x18 + 8);
          do {
            iVar8 = iVar8 + -1;
            uVar11 = *param_1;
            uVar15 = ((param_1[1] - 1) * (uint)*pbVar10 >> 8) + 1;
            if ((((int)uVar14 >> 1) >> ((byte)iVar8 & 0x1f) & 1U) != 0) {
              uVar11 = uVar11 + uVar15;
              uVar15 = param_1[1] - uVar15;
            }
            bVar1 = (&DAT_149d54800)[uVar15];
            uVar16 = param_1[2] + (uint)bVar1;
            uVar12 = uVar16;
            uVar13 = (uint)bVar1;
            if (-1 < (int)uVar16) {
              bVar4 = bVar1 - (char)uVar16;
              if ((int)(uVar11 << (bVar4 - 1 & 0x1f)) < 0) {
                iVar9 = param_1[3] - 1;
                lVar7 = (longlong)iVar9;
                if (-1 < iVar9) {
                  do {
                    if (*(char *)(lVar7 + *(longlong *)(param_1 + 4)) != -1) break;
                    iVar9 = iVar9 + -1;
                    *(undefined1 *)(lVar7 + *(longlong *)(param_1 + 4)) = 0;
                    lVar7 = lVar7 + -1;
                  } while (-1 < lVar7);
                }
                *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar9) =
                     *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar9) + '\x01';
              }
              *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) =
                   (char)(uVar11 >> (0x18 - bVar4 & 0x1f));
              uVar11 = uVar11 << (bVar4 & 0x1f) & 0xffffff;
              param_1[3] = param_1[3] + 1;
              uVar12 = uVar16 - 8;
              uVar13 = uVar16;
            }
            param_1[2] = uVar12;
            pbVar10 = pbVar10 + 1;
            *param_1 = uVar11 << ((byte)uVar13 & 0x1f);
            param_1[1] = uVar15 << (bVar1 & 0x1f);
          } while (iVar8 != 0);
        }
        FUN_145682370(param_1,uVar14 & 1,0x80);
      }
    }
    plVar17 = plVar17 + 2;
  } while( true );
}



// FUNCTION 145683110 FUN_145683110 body=338 status=ok
// SIG undefined FUN_145683110(void)

void FUN_145683110(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  lVar3 = **(longlong **)(param_2 + 0x1c0);
  cVar1 = *(char *)(lVar3 + 9);
  if ((*(char *)(param_1 + 0x11a8) == '\0') ||
     ((*(byte *)(param_1 + 0x11f8 + (longlong)*(char *)(lVar3 + 4) * 4) & 4) == 0)) {
    if (*(int *)(param_1 + 0x1220) == 2) {
      iVar4 = FUN_1454773a0();
      FUN_145682370(param_3,'\0' < cVar1,
                    *(undefined1 *)(*(longlong *)(param_1 + 0x1228) + 0x78f + (longlong)iVar4));
    }
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(lVar3 + 8);
      iVar4 = FUN_145477670(param_2);
      FUN_145682370(param_3,cVar1 != '\x01',
                    *(undefined1 *)(*(longlong *)(param_1 + 0x1228) + 0x794 + (longlong)iVar4 * 2));
      if (cVar1 == '\x01') {
        return;
      }
      bVar6 = *(char *)(lVar3 + 8) != '\x02';
      iVar4 = FUN_1454777c0(param_2);
      uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x1228) + 0x795 + (longlong)iVar4 * 2);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1164 + (longlong)*(char *)(param_1 + 0x121c) * 4);
      iVar5 = FUN_145477440(param_1,param_2);
      uVar2 = *(undefined1 *)((longlong)iVar5 + 0x79e + *(longlong *)(param_1 + 0x1228));
      bVar6 = *(char *)((9 - (ulonglong)(iVar4 != 0)) + lVar3) == *(char *)(param_1 + 0x121e);
    }
    FUN_145682370(param_3,bVar6,uVar2);
  }
  return;
}



// FUNCTION 145683270 FUN_145683270 body=1904 status=ok
// SIG undefined FUN_145683270(void)

void FUN_145683270(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  byte *pbVar17;
  longlong lVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulonglong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulonglong local_res10;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar25;
  undefined8 uVar24;
  uint in_stack_ffffffffffffff40;
  uint local_a4;
  longlong local_68;
  
  uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  lVar16 = param_1 + 0x29ee0;
  uVar8 = *(uint *)(param_1 + 0x2a2f8);
  lVar18 = *(longlong *)(param_1 + 0x2b108) + 0x7b2;
  local_res10 = 0;
  pbVar9 = (byte *)**(undefined8 **)(param_2 + 0x1c0);
  bVar2 = pbVar9[1];
  uVar21 = (ulonglong)(char)pbVar9[4];
  bVar3 = *pbVar9;
  pbVar22 = pbVar9 + 8;
  iVar10 = 0;
  bVar4 = *pbVar22;
  bVar5 = pbVar9[9];
  if (*(char *)(param_1 + 0x2b089) != '\0') {
    if (*(char *)(param_1 + 0x2b08c) == '\0') {
      cVar7 = *(char *)(param_1 + 0x2b088);
    }
    else {
      bVar6 = pbVar9[5];
      iVar15 = iVar10;
      if (*(longlong *)(param_2 + 0x1d0) != 0) {
        iVar15 = (int)*(char *)(*(longlong *)(param_2 + 0x1d0) + 5);
      }
      if (*(longlong *)(param_2 + 0x1c8) != 0) {
        iVar10 = (int)*(char *)(*(longlong *)(param_2 + 0x1c8) + 5);
      }
      FUN_145682370(param_4,(int)(char)bVar6,(&DAT_000011b4)[lVar16 + (iVar10 + iVar15)]);
      if (((char)bVar6 != 0) || (*(char *)(param_1 + 0x2b088) == '\0')) goto LAB_1456833c2;
      cVar7 = *(char *)(param_1 + 0x2b089);
    }
    if (cVar7 != '\0') {
      in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
      FUN_145682450(param_4,&DAT_149d52dc0,param_1 + 0x2b08d,uVar21 & 0xffffffff,CONCAT44(uVar25,3),
                    in_stack_ffffffffffffff40);
    }
  }
LAB_1456833c2:
  uVar24 = param_4;
  iVar10 = FUN_145682b60(lVar16,param_2,uVar21 & 0xffffffff,pbVar9,param_4);
  if ((*(char *)(param_1 + 0x2b088) == '\0') ||
     ((*(byte *)(param_1 + 0x2b0d8 + uVar21 * 4) & 4) == 0)) {
    lVar13 = *(longlong *)(param_2 + 0x1d0);
    lVar12 = *(longlong *)(param_2 + 0x1c8);
    uVar14 = local_res10;
    if (lVar13 == 0) {
      if (lVar12 == 0) {
        uVar14 = 0;
        goto LAB_145683470;
      }
LAB_14568345a:
      if (lVar13 != 0) {
        lVar12 = lVar13;
      }
      if (*(char *)(lVar12 + 8) < '\x01') {
        uVar14 = 2;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_14568345a;
      if (*(char *)(lVar12 + 8) < '\x01') {
        if (*(char *)(lVar13 + 8) < '\x01') {
          uVar14 = 3;
        }
        else {
LAB_145683449:
          uVar14 = 1;
        }
      }
      else if (*(char *)(lVar13 + 8) < '\x01') goto LAB_145683449;
    }
LAB_145683470:
    FUN_145682370(param_4,'\0' < (char)bVar4,
                  *(undefined1 *)(*(longlong *)(param_1 + 0x2b108) + 0x78b + uVar14));
  }
  if ((2 < bVar3) && (*(int *)(param_1 + 0x2a318) == 4)) {
    if (('\0' < (char)bVar4) && (iVar10 != 0)) goto LAB_145683634;
    FUN_145682a00(lVar16,param_2,param_4);
  }
  if ((char)bVar4 < '\x01') {
    if (bVar3 < 3) {
      bVar4 = (&DAT_149d549c0)[bVar3];
      bVar3 = (&DAT_149d549b0)[bVar3];
      local_res10 = 0;
      pbVar22 = pbVar9 + 0x14;
      do {
        lVar16 = 0;
        pbVar19 = pbVar22;
        do {
          in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
          uVar24 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),
                            *(undefined4 *)(&DAT_149df5334 + (ulonglong)*pbVar19 * 8));
          FUN_145682450(param_4,&DAT_149d52c28,*(undefined8 *)(param_1 + 0x2b108),
                        *(undefined4 *)(&DAT_149df5330 + (ulonglong)*pbVar19 * 8),uVar24,
                        in_stack_ffffffffffffff40);
          uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
          lVar16 = lVar16 + (ulonglong)bVar4;
          pbVar19 = pbVar19 + (ulonglong)bVar4 * 0xc;
        } while (lVar16 < 2);
        local_res10 = local_res10 + bVar3;
        pbVar22 = pbVar22 + (ulonglong)bVar3 * 0x18;
      } while ((longlong)local_res10 < 2);
    }
    else {
      in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
      uVar24 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),
                        *(undefined4 *)(&DAT_149df5334 + (ulonglong)bVar2 * 8));
      FUN_145682450(param_4,&DAT_149d52c28,
                    (ulonglong)(byte)(&DAT_149d549d0)[bVar3] * 9 + *(longlong *)(param_1 + 0x2b108),
                    *(undefined4 *)(&DAT_149df5330 + (ulonglong)bVar2 * 8),uVar24,
                    in_stack_ffffffffffffff40);
      uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
    }
    FUN_145682450(param_4,&DAT_149d52c28,
                  ((ulonglong)bVar2 + 4) * 9 + *(longlong *)(param_1 + 0x2b108),
                  *(undefined4 *)(&DAT_149df5330 + (ulonglong)pbVar9[6] * 8),
                  CONCAT44(uVar25,*(undefined4 *)(&DAT_149df5334 + (ulonglong)pbVar9[6] * 8)),
                  in_stack_ffffffffffffff40 & 0xffffff00);
    return;
  }
LAB_145683634:
  lVar13 = *(longlong *)(param_1 + 0x2b108) +
           (ulonglong)*(byte *)((longlong)(char)*pbVar22 + 0x20 + param_3) * 3 + 0x776;
  FUN_145683110(lVar16,param_2,param_4);
  if (((*(char *)(param_1 + 0x2b088) == '\0') ||
      ((*(byte *)(param_1 + 0x2b0d8 + uVar21 * 4) & 8) == 0)) && (2 < bVar3)) {
    in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
    FUN_145682450(param_4,&DAT_149d52c3c,lVar13,
                  *(undefined4 *)(&DAT_149df5368 + (ulonglong)bVar2 * 8),
                  *(undefined4 *)(&DAT_149df536c + (ulonglong)bVar2 * 8),in_stack_ffffffffffffff40);
  }
  if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
    if (*(longlong *)(param_2 + 0x1c8) == 0) {
      uVar21 = 3;
    }
    else {
      uVar21 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x1c8) + 7);
    }
    if (*(longlong *)(param_2 + 0x1d0) == 0) {
      uVar11 = 3;
    }
    else {
      uVar11 = (uint)*(byte *)(*(longlong *)(param_2 + 0x1d0) + 7);
    }
    uVar14 = uVar21;
    if ((uint)uVar21 != uVar11) {
      if ((uint)uVar21 == 3) {
        uVar14 = (ulonglong)uVar11;
      }
      else {
        uVar14 = 3;
        if (uVar11 == 3) {
          uVar14 = uVar21;
        }
      }
    }
    in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
    FUN_145682450(param_4,&DAT_149d52c4c,*(longlong *)(param_1 + 0x2b108) + 0x76e + uVar14 * 2,
                  *(undefined4 *)(&DAT_149df5380 + (ulonglong)pbVar9[7] * 8),
                  *(undefined4 *)(&DAT_149df5384 + (ulonglong)pbVar9[7] * 8),
                  in_stack_ffffffffffffff40);
    piVar1 = (int *)(param_6 + (ulonglong)pbVar9[7] * 4);
    *piVar1 = *piVar1 + 1;
  }
  if (bVar3 < 3) {
    bVar2 = (&DAT_149d549c0)[bVar3];
    bVar3 = (&DAT_149d549b0)[bVar3];
    local_a4 = 0;
    pbVar19 = pbVar9 + 0x14;
    do {
      local_68 = 0;
      pbVar23 = pbVar19;
      do {
        bVar4 = *pbVar23;
        in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
        FUN_145682450(param_4,&DAT_149d52c3c,lVar13,
                      *(undefined4 *)(&DAT_149df5368 + (ulonglong)bVar4 * 8),
                      *(undefined4 *)(&DAT_149df536c + (ulonglong)bVar4 * 8),
                      in_stack_ffffffffffffff40);
        if (bVar4 == 0xd) {
          pbVar17 = pbVar9 + ((longlong)(int)local_res10 + 2) * 0xc;
          lVar16 = (ulonglong)('\0' < (char)bVar5) + 1;
          pbVar20 = pbVar22;
          do {
            in_stack_ffffffffffffff40 = uVar8;
            FUN_145663f40(param_1,param_4,pbVar17,param_3 + (longlong)(char)*pbVar20 * 8,lVar18,
                          uVar8,param_5);
            pbVar17 = pbVar17 + 4;
            pbVar20 = pbVar20 + 1;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        pbVar23 = pbVar23 + (ulonglong)bVar2 * 0xc;
        local_68 = local_68 + (int)(uint)bVar2;
        local_res10 = (ulonglong)((int)local_res10 + (uint)bVar2);
      } while (local_68 < 2);
      local_a4 = local_a4 + (uint)bVar3 + (uint)bVar3;
      local_res10 = (ulonglong)local_a4;
      pbVar19 = pbVar19 + (ulonglong)bVar3 * 0x18;
    } while ((int)local_a4 < 4);
  }
  else if (bVar2 == 0xd) {
    lVar16 = (ulonglong)('\0' < (char)bVar5) + 1;
    do {
      FUN_145663f40(param_1,param_4,pbVar9 + local_res10 + 0xc,
                    param_3 + (longlong)(char)*pbVar22 * 8,lVar18,uVar8,param_5);
      local_res10 = local_res10 + 4;
      pbVar22 = pbVar22 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 1456839e0 FUN_1456839e0 body=676 status=ok
// SIG undefined FUN_1456839e0(void)

void FUN_1456839e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  int local_res8;
  undefined4 uVar13;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = *(undefined8 *)(param_2 + 0x1d0);
  uVar1 = *(undefined8 *)(param_2 + 0x1c8);
  pbVar2 = (byte *)**(undefined8 **)(param_2 + 0x1c0);
  bVar3 = *pbVar2;
  if ((*(char *)(param_1 + 0x11a9) != '\0') && (*(char *)(param_1 + 0x11a8) != '\0')) {
    FUN_145682450(param_3,&DAT_149d52dc0,param_1 + 0x11ad,(int)(char)pbVar2[4],3,0);
  }
  uVar12 = param_3;
  FUN_145682b60(param_1,param_2,(int)(char)pbVar2[4],pbVar2,param_3);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (bVar3 < 3) {
    bVar4 = (&DAT_149d549c0)[bVar3];
    pbVar8 = pbVar2 + 0x14;
    bVar3 = (&DAT_149d549b0)[bVar3];
    local_res8 = 0;
    do {
      iVar7 = local_res8 * 2;
      lVar9 = 0;
      pbVar10 = pbVar8;
      do {
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        bVar5 = FUN_1454726e0(pbVar2,uVar11,iVar7);
        bVar6 = FUN_1454726a0(pbVar2,uVar1,iVar7);
        uVar12 = CONCAT44(uVar13,*(undefined4 *)(&DAT_149df5334 + (ulonglong)*pbVar10 * 8));
        FUN_145682450(param_3,&DAT_149d52c28,
                      &DAT_149d52870 + ((ulonglong)bVar6 + (ulonglong)bVar5 * 10) * 9,
                      *(undefined4 *)(&DAT_149df5330 + (ulonglong)*pbVar10 * 8),uVar12,0);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        pbVar10 = pbVar10 + (ulonglong)bVar4 * 0xc;
        iVar7 = iVar7 + (uint)bVar4;
        lVar9 = lVar9 + (ulonglong)bVar4;
      } while (lVar9 < 2);
      local_res8 = local_res8 + (uint)bVar3;
      pbVar8 = pbVar8 + (ulonglong)bVar3 * 0x18;
    } while (local_res8 < 2);
  }
  else {
    if (*(int *)(param_1 + 0x438) == 4) {
      FUN_145682a00(param_1,param_2,param_3);
    }
    bVar3 = FUN_1454726e0(pbVar2,uVar11,0);
    bVar4 = FUN_1454726a0(pbVar2,uVar1,0);
    uVar11 = CONCAT44(uVar13,*(undefined4 *)(&DAT_149df5334 + (ulonglong)pbVar2[1] * 8));
    FUN_145682450(param_3,&DAT_149d52c28,
                  &DAT_149d52870 + ((ulonglong)bVar4 + (ulonglong)bVar3 * 10) * 9,
                  *(undefined4 *)(&DAT_149df5330 + (ulonglong)pbVar2[1] * 8),uVar11,0);
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  FUN_145682450(param_3,&DAT_149d52c28,&DAT_149d52810 + (ulonglong)pbVar2[1] * 9,
                *(undefined4 *)(&DAT_149df5330 + (ulonglong)pbVar2[6] * 8),
                CONCAT44(uVar13,*(undefined4 *)(&DAT_149df5334 + (ulonglong)pbVar2[6] * 8)),0);
  return;
}



// FUNCTION 145683c90 FUN_145683c90 body=422 status=ok
// SIG undefined FUN_145683c90(void)

void FUN_145683c90(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,int param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x2a310);
  lVar5 = *(longlong *)(param_1 + 0x12448);
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x2a3b0) +
           (longlong)(param_7 * *(int *)(param_1 + 0x2a314) + param_8) * 8);
  *(undefined8 **)(param_2 + 0x1c0) = puVar1;
  iVar4 = *(int *)(param_1 + 0x2a310);
  bVar2 = (&DAT_149d54990)[*(byte *)*puVar1];
  *(uint *)(param_2 + 500) =
       ((*(int *)(param_1 + 0x2a308) - (uint)(byte)(&DAT_149d549a0)[*(byte *)*puVar1]) - param_7) *
       0x40;
  uVar7 = 0;
  *(int *)(param_2 + 0x1f0) = param_7 * -0x40;
  *(uint *)(param_2 + 0x1ec) = ((iVar4 - (uint)bVar2) - param_8) * 0x40;
  *(int *)(param_2 + 0x1e8) = param_8 * -0x40;
  uVar6 = uVar7;
  if (param_7 != 0) {
    uVar6 = puVar1[-(longlong)*(int *)(param_2 + 0x1b8)];
  }
  *(undefined8 *)(param_2 + 0x1d0) = uVar6;
  if (*(int *)(param_3 + 8) < param_8) {
    uVar7 = puVar1[-1];
  }
  *(undefined8 *)(param_2 + 0x1c8) = uVar7;
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    FUN_1456839e0(param_1 + 0x29ee0,param_2,param_4);
  }
  else {
    FUN_145683270(param_1,param_2,lVar5 + (longlong)(param_7 * iVar3 + param_8) * 0x24,param_4,
                  param_9,param_10);
  }
  FUN_145682bf0(param_4,param_5,param_6,*(undefined4 *)(param_1 + 0x2e4d0));
  return;
}



// FUNCTION 145683e40 FUN_145683e40 body=1225 status=ok
// SIG undefined FUN_145683e40(void)

void FUN_145683e40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,int param_8,byte param_9,
                  undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *_Dst;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong in_stack_ffffffffffffff80;
  int iVar10;
  
  uVar9 = (ulonglong)param_9;
  iVar7 = 1 << ((&DAT_149d54960)[uVar9] & 0x1f);
  iVar7 = (int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2;
  if (*(int *)(param_1 + 0x2a308) <= (int)param_7) {
    return;
  }
  iVar10 = *(int *)(param_1 + 0x2a310);
  if (iVar10 <= param_8) {
    return;
  }
  iVar6 = *(int *)(&DAT_149d549f0 +
                  ((ulonglong)
                   **(byte **)(*(longlong *)(param_1 + 0x2a3b0) +
                              (longlong)(int)(param_7 * *(int *)(param_1 + 0x2a314) + param_8) * 8)
                  + (ulonglong)(byte)(&DAT_149d54960)[uVar9] * 0xd) * 4);
  bVar3 = (&DAT_149d54980)[uVar9];
  _Dst = (char *)((ulonglong)(param_7 & 7) + 0x268 + param_2);
  lVar8 = (ulonglong)
          (((int)*(char *)((longlong)param_8 + *(longlong *)(param_2 + 0x260)) >> (bVar3 & 0x1f) &
           1U) + (((int)*_Dst >> (bVar3 & 0x1f) & 1U) + (uint)bVar3 * 2) * 2) * 3 +
          *(longlong *)(param_2 + 0x1e0);
  uVar1 = iVar7 + param_7;
  iVar7 = iVar7 + param_8;
  if ((int)uVar1 < *(int *)(param_1 + 0x2a308)) {
    if (iVar7 < iVar10) {
      lVar2 = (longlong)iVar6 * 8;
      FUN_145682450(param_4,&DAT_149d52c44,lVar8,*(undefined4 *)(&DAT_149df5398 + lVar2),
                    *(undefined4 *)(&DAT_149df539c + lVar2),
                    in_stack_ffffffffffffff80 & 0xffffffffffffff00);
    }
    else {
      uVar4 = *(undefined1 *)(lVar8 + 2);
LAB_145683fb5:
      FUN_145682370(param_4,iVar6 == 3,uVar4);
    }
  }
  else if (iVar7 < iVar10) {
    uVar4 = *(undefined1 *)(lVar8 + 1);
    goto LAB_145683fb5;
  }
  bVar3 = (&DAT_149d54af8)[(longlong)iVar6 * 0xd + uVar9];
  iVar10 = param_8;
  if ((2 < bVar3) && (iVar6 != 0)) {
    if (iVar6 == 1) {
      FUN_145683c90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                    param_11);
      param_7 = uVar1;
      if (*(int *)(param_1 + 0x2a308) <= (int)uVar1) goto LAB_145684288;
    }
    else {
      if (iVar6 != 2) {
        FUN_145683e40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bVar3,param_10
                      ,param_11);
        FUN_145683e40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,iVar7,bVar3,param_10,
                      param_11);
        FUN_145683e40(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_8,bVar3,param_10,
                      param_11);
        FUN_145683e40(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,iVar7,bVar3,param_10,
                      param_11);
        goto LAB_145684288;
      }
      FUN_145683c90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                    param_11);
      iVar10 = iVar7;
      if (*(int *)(param_1 + 0x2a310) <= iVar7) goto LAB_145684288;
    }
  }
  FUN_145683c90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,iVar10,param_10,param_11);
LAB_145684288:
  if ((2 < param_9) && ((param_9 == 3 || (iVar6 != 3)))) {
    bVar5 = (&DAT_149d54990)[param_9];
    memset((void *)((longlong)param_8 + *(longlong *)(param_2 + 0x260)),
           (int)(char)(&DAT_149d54c50)[(ulonglong)bVar3 * 2],(ulonglong)(uint)bVar5);
    memset(_Dst,(int)(char)(&DAT_149d54c51)[(ulonglong)bVar3 * 2],(ulonglong)(uint)bVar5);
  }
  return;
}



// FUNCTION 145684310 FUN_145684310 body=364 status=ok
// SIG undefined FUN_145684310(void)

void FUN_145684310(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,int param_5,
                  int param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong local_res8;
  longlong *local_res10;
  
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    puVar2 = &DAT_149d52bf8;
  }
  else {
    puVar2 = (undefined *)(*(longlong *)(param_1 + 0x2b108) + 0x7e);
  }
  *(undefined **)(param_2 + 0x1e0) = puVar2;
  iVar5 = *param_3;
  if (iVar5 < param_3[1]) {
    local_res10 = (longlong *)
                  (param_1 + 0x2ffa8 + ((longlong)param_5 * 0x40 + (longlong)param_6) * 8);
    do {
      lVar3 = (longlong)(iVar5 - *param_3) + 7 >> 3;
      local_res8 = *(longlong *)(*local_res10 + lVar3 * 0x18);
      uVar1 = *(uint *)(*local_res10 + 0x10 + lVar3 * 0x18);
      *(undefined8 *)(param_2 + 0x268) = 0;
      lVar3 = (ulonglong)uVar1 * 0x10 + local_res8;
      iVar4 = param_3[2];
      if (iVar4 < param_3[3]) {
        do {
          FUN_145683e40(param_1,param_2,param_3,param_4,&local_res8,lVar3,iVar5,iVar4,0xc,param_7,
                        param_8);
          iVar4 = iVar4 + 8;
        } while (iVar4 < param_3[3]);
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 < param_3[1]);
  }
  return;
}



// FUNCTION 145684480 FUN_145684480 body=594 status=ok
// SIG undefined FUN_145684480(void)

void FUN_145684480(longlong param_1,byte param_2,int *param_3,longlong param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  int iVar7;
  byte bVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  int iVar16;
  int *piVar17;
  longlong lVar18;
  longlong local_res8;
  int *local_res18;
  int *local_68;
  longlong local_50;
  longlong local_48;
  
  local_48 = 2;
  local_res8 = (ulonglong)param_2 * 0x1b00 + 0x21270 + param_1;
  local_68 = (int *)((ulonglong)param_2 * 0x240 + param_1 + 0x2d84c);
  pbVar14 = (byte *)(param_4 + 2);
  local_res18 = param_3;
  do {
    local_50 = 2;
    do {
      iVar16 = 0;
      do {
        piVar10 = local_res18 + 5;
        piVar11 = param_3;
        piVar12 = local_res18;
        pbVar13 = pbVar14;
        lVar15 = 6;
        piVar17 = local_68;
        lVar18 = local_res8;
        if (iVar16 == 0) {
          lVar15 = 3;
        }
        do {
          FUN_1456a6f90(&DAT_149df3130,piVar11,lVar18);
          piVar12[1] = *piVar17 - *piVar12;
          uVar9 = piVar10[-4] + piVar10[-5];
          if (uVar9 == 0) {
            bVar8 = 0x80;
          }
          else {
            auVar1._4_8_ = 0;
            auVar1._0_4_ = uVar9;
            auVar4._8_4_ = 0;
            auVar4._0_8_ = (ulonglong)(uint)piVar10[-5] * 0x100 + (ulonglong)(uVar9 >> 1);
            iVar7 = SUB124(auVar4 / auVar1,0);
            bVar8 = (byte)(0xff - iVar7 >> 0x17) | iVar7 == 0 | SUB121(auVar4 / auVar1,0);
          }
          pbVar13[-2] = bVar8;
          uVar9 = piVar10[-2] + piVar10[-3];
          if (uVar9 == 0) {
            bVar8 = 0x80;
          }
          else {
            auVar2._4_8_ = 0;
            auVar2._0_4_ = uVar9;
            auVar5._8_4_ = 0;
            auVar5._0_8_ = (ulonglong)(uint)piVar10[-3] * 0x100 + (ulonglong)(uVar9 >> 1);
            iVar7 = SUB124(auVar5 / auVar2,0);
            bVar8 = (byte)(0xff - iVar7 >> 0x17) | iVar7 == 0 | SUB121(auVar5 / auVar2,0);
          }
          pbVar13[-1] = bVar8;
          uVar9 = *piVar10 + piVar10[-1];
          if (uVar9 == 0) {
            bVar8 = 0x80;
          }
          else {
            auVar3._4_8_ = 0;
            auVar3._0_4_ = uVar9;
            auVar6._8_4_ = 0;
            auVar6._0_8_ = (ulonglong)(uint)piVar10[-1] * 0x100 + (ulonglong)(uVar9 >> 1);
            iVar7 = SUB124(auVar6 / auVar3,0);
            bVar8 = (byte)(0xff - iVar7 >> 0x17) | iVar7 == 0 | SUB121(auVar6 / auVar3,0);
          }
          *pbVar13 = bVar8;
          piVar10 = piVar10 + 0x16;
          lVar15 = lVar15 + -1;
          piVar11 = piVar11 + 0x16;
          piVar12 = piVar12 + 0x16;
          pbVar13 = pbVar13 + 3;
          piVar17 = piVar17 + 1;
          lVar18 = lVar18 + 0x30;
        } while (lVar15 != 0);
        param_3 = param_3 + 0x84;
        local_res8 = local_res8 + 0x120;
        local_68 = local_68 + 6;
        pbVar14 = pbVar14 + 0x12;
        local_res18 = local_res18 + 0x84;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 6);
      local_50 = local_50 + -1;
    } while (local_50 != 0);
    local_48 = local_48 + -1;
  } while (local_48 != 0);
  return;
}



// FUNCTION 1456846e0 FUN_1456846e0 body=2261 status=ok
// SIG undefined FUN_1456846e0(void)

void FUN_1456846e0(uint *param_1,longlong param_2,byte param_3,longlong param_4,longlong param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  char local_res18 [8];
  longlong local_res20;
  int local_a8;
  undefined8 local_a0;
  longlong local_98;
  char *local_90;
  char *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  char *local_68;
  longlong local_60;
  longlong local_58;
  
  uVar4 = *(undefined4 *)(param_2 + 0xb4704);
  local_90 = (char *)(*(longlong *)(param_2 + 0x2b108) + 0xae + (ulonglong)param_3 * 0x1b0);
  param_5 = param_5 - (longlong)local_90;
  local_res20 = param_4;
  if (*(int *)(param_2 + 0xb4830) == 0) {
    lVar7 = 0;
    local_98 = 2;
    local_88 = local_90 + 1;
    local_a0 = 0;
    lVar17 = 0;
    local_60 = 2;
    while( true ) {
      do {
        local_a8 = 0;
        do {
          local_70 = 6;
          if (local_a8 == 0) {
            local_70 = 3;
          }
          iVar13 = 0;
          pcVar14 = local_88;
          local_80 = param_4;
          local_78 = lVar17;
          local_68 = local_88;
          while( true ) {
            do {
              local_res18[0] = pcVar14[param_5 + -1];
              cVar3 = pcVar14[-1];
              lVar12 = 0;
              if (iVar13 == 2) {
                lVar8 = FUN_1456a8ee0(param_4,cVar3,local_res18,0xfc,uVar4);
              }
              else {
                lVar8 = FUN_1456a8d70(local_res20 + (iVar13 + lVar17) * 8,cVar3,local_res18,0xfc);
              }
              if ((lVar8 < 1) || (local_res18[0] == cVar3)) {
                lVar8 = -0xc;
              }
              else {
                lVar12 = 1;
                lVar8 = lVar8 + -0xc;
              }
              piVar1 = (int *)((longlong)&local_a0 + lVar12 * 4);
              *piVar1 = *piVar1 + 1;
              lVar12 = 0;
              cVar3 = *pcVar14;
              local_res18[0] = pcVar14[param_5];
              if (iVar13 == 1) {
                lVar9 = FUN_1456a8ee0(param_4);
              }
              else {
                lVar9 = FUN_1456a8d70(local_res20 + ((iVar13 + 1) + lVar17) * 8,cVar3,local_res18,
                                      0xfc);
              }
              if ((lVar9 < 1) || (local_res18[0] == cVar3)) {
                lVar9 = -0xc;
              }
              else {
                lVar12 = 1;
                lVar9 = lVar9 + -0xc;
              }
              piVar1 = (int *)((longlong)&local_a0 + lVar12 * 4);
              *piVar1 = *piVar1 + 1;
              lVar12 = 0;
              cVar3 = pcVar14[1];
              local_res18[0] = pcVar14[param_5 + 1];
              if (iVar13 == 0) {
                lVar10 = FUN_1456a8ee0(param_4);
              }
              else {
                lVar10 = FUN_1456a8d70(local_res20 + ((iVar13 + 2) + lVar17) * 8,cVar3,local_res18,
                                       0xfc);
              }
              if ((lVar10 < 1) || (local_res18[0] == cVar3)) {
                lVar10 = -0xc;
              }
              else {
                lVar12 = 1;
                lVar10 = lVar10 + -0xc;
              }
              lVar7 = lVar7 + lVar8 + lVar9 + lVar10;
              piVar1 = (int *)((longlong)&local_a0 + lVar12 * 4);
              *piVar1 = *piVar1 + 1;
              iVar13 = iVar13 + 3;
              pcVar14 = pcVar14 + 3;
            } while (iVar13 < 3);
            param_4 = param_4 + 0x58;
            pcVar14 = local_68 + 3;
            lVar17 = lVar17 + 0xb;
            local_70 = local_70 + -1;
            local_68 = pcVar14;
            if (local_70 == 0) break;
            iVar13 = 0;
          }
          local_a8 = local_a8 + 1;
          lVar17 = local_78 + 0x42;
          param_4 = local_80 + 0x210;
          local_88 = local_88 + 0x12;
        } while (local_a8 < 6);
        local_60 = local_60 + -1;
      } while (local_60 != 0);
      local_98 = local_98 + -1;
      if (local_98 == 0) break;
      local_60 = 2;
    }
    lVar12 = 0;
    local_80 = param_4;
    local_78 = lVar17;
    if ((local_a0._4_4_ != 0) && (-1 < lVar7)) {
      FUN_145682370(param_1,1,0x80);
      lVar17 = 0;
      local_98 = 0;
      local_88 = (char *)0x2;
      do {
        local_80 = 2;
        do {
          local_a8 = 0;
          do {
            local_68 = (char *)0x6;
            pcVar14 = local_90;
            local_78 = lVar17;
            local_70 = local_98;
            if (local_a8 == 0) {
              local_68 = (char *)0x3;
            }
            do {
              iVar13 = 0;
              lVar7 = 3;
              do {
                bVar6 = false;
                local_res18[0] = pcVar14[param_5];
                if (iVar13 == 2) {
                  lVar12 = FUN_1456a8ee0(local_res20 + lVar17);
                }
                else {
                  lVar12 = FUN_1456a8d70(local_res20 + (iVar13 + local_98) * 8,*pcVar14,local_res18,
                                         0xfc);
                }
                if ((lVar12 < 1) || (local_res18[0] == *pcVar14)) {
                  uVar18 = *param_1;
                  uVar15 = (param_1[1] * 0xfc - 0xfc >> 8) + 1;
                }
                else {
                  bVar6 = true;
                  iVar21 = (param_1[1] * 0xfc - 0xfc >> 8) + 1;
                  uVar18 = *param_1 + iVar21;
                  uVar15 = param_1[1] - iVar21;
                }
                bVar2 = (&DAT_149d54800)[uVar15];
                uVar20 = param_1[2] + (uint)bVar2;
                uVar16 = uVar20;
                uVar19 = (uint)bVar2;
                if (-1 < (int)uVar20) {
                  bVar5 = bVar2 - (char)uVar20;
                  if ((int)(uVar18 << (bVar5 - 1 & 0x1f)) < 0) {
                    iVar21 = param_1[3] - 1;
                    lVar12 = (longlong)iVar21;
                    if (-1 < iVar21) {
                      do {
                        if (*(char *)(lVar12 + *(longlong *)(param_1 + 4)) != -1) break;
                        iVar21 = iVar21 + -1;
                        *(undefined1 *)(lVar12 + *(longlong *)(param_1 + 4)) = 0;
                        lVar12 = lVar12 + -1;
                      } while (-1 < lVar12);
                    }
                    *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar21) =
                         *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar21) + '\x01';
                  }
                  uVar16 = uVar18 >> (0x18 - bVar5 & 0x1f);
                  uVar18 = uVar18 << (bVar5 & 0x1f) & 0xffffff;
                  *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) = (char)uVar16;
                  param_1[3] = param_1[3] + 1;
                  uVar16 = uVar20 - 8;
                  uVar19 = uVar20;
                }
                param_1[2] = uVar16;
                *param_1 = uVar18 << ((byte)uVar19 & 0x1f);
                param_1[1] = uVar15 << (bVar2 & 0x1f);
                if (bVar6) {
                  FUN_1456a88a0(param_1,local_res18[0],*pcVar14);
                  *pcVar14 = local_res18[0];
                }
                iVar13 = iVar13 + 1;
                pcVar14 = pcVar14 + 1;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
              local_98 = local_98 + 0xb;
              lVar17 = lVar17 + 0x58;
              local_68 = (char *)((longlong)local_68 + -1);
            } while (local_68 != (char *)0x0);
            local_a8 = local_a8 + 1;
            local_98 = local_70 + 0x42;
            lVar17 = local_78 + 0x210;
            local_90 = local_90 + 0x12;
          } while (local_a8 < 6);
          local_80 = local_80 + -1;
        } while (local_80 != 0);
        local_88 = (char *)((longlong)local_88 + -1);
        if (local_88 == (char *)0x0) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar13 = 0;
    local_68 = (char *)0x2;
    uVar22 = 0;
    lVar17 = 0;
    local_a0 = local_a0 & 0xffffffff00000000;
    local_98 = 0;
    do {
      local_70 = 2;
      do {
        local_a8 = 0;
        do {
          pcVar14 = local_90;
          local_88 = (char *)6;
          local_80 = local_98;
          local_78 = lVar17;
          if (local_a8 == 0) {
            local_88 = (char *)3;
          }
          do {
            iVar21 = 0;
            local_60 = 3;
            local_58 = lVar17;
            do {
              local_res18[0] = pcVar14[param_5];
              bVar6 = false;
              if (iVar21 == 2) {
                lVar7 = FUN_1456a8ee0(lVar17 + local_res20,*pcVar14,local_res18,0xfc,uVar4);
              }
              else {
                lVar7 = FUN_1456a8d70(local_res20 + (iVar21 + local_98) * 8,*pcVar14,local_res18,
                                      0xfc);
              }
              if ((lVar7 < 1) || (local_res18[0] == *pcVar14)) {
                if (iVar13 != 0) goto LAB_1456848fc;
                uVar18 = (int)uVar22 + 1;
                uVar22 = (ulonglong)uVar18;
                local_a0 = CONCAT44(local_a0._4_4_,uVar18);
              }
              else {
                iVar13 = iVar13 + 1;
                bVar6 = true;
                if ((iVar13 == 1) && (FUN_145682370(param_1,1,0x80), 0 < (int)uVar22)) {
                  do {
                    uVar18 = *param_1;
                    uVar19 = ((param_1[1] - 1) * 0xfc >> 8) + 1;
                    bVar2 = (&DAT_149d54800)[uVar19];
                    uVar20 = param_1[2] + (uint)bVar2;
                    uVar15 = uVar20;
                    uVar16 = (uint)bVar2;
                    if (-1 < (int)uVar20) {
                      bVar5 = bVar2 - (char)uVar20;
                      if ((int)(uVar18 << (bVar5 - 1 & 0x1f)) < 0) {
                        iVar11 = param_1[3] - 1;
                        lVar17 = (longlong)iVar11;
                        if (-1 < iVar11) {
                          do {
                            if (*(char *)(lVar17 + *(longlong *)(param_1 + 4)) != -1) break;
                            iVar11 = iVar11 + -1;
                            *(undefined1 *)(lVar17 + *(longlong *)(param_1 + 4)) = 0;
                            lVar17 = lVar17 + -1;
                          } while (-1 < lVar17);
                        }
                        *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar11) =
                             *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar11) + '\x01';
                      }
                      uVar15 = uVar18 >> (0x18 - bVar5 & 0x1f);
                      uVar18 = uVar18 << (bVar5 & 0x1f) & 0xffffff;
                      *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) = (char)uVar15;
                      param_1[3] = param_1[3] + 1;
                      uVar15 = uVar20 - 8;
                      uVar16 = uVar20;
                    }
                    param_1[2] = uVar15;
                    *param_1 = uVar18 << ((byte)uVar16 & 0x1f);
                    param_1[1] = uVar19 << (bVar2 & 0x1f);
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                  uVar22 = local_a0 & 0xffffffff;
                }
LAB_1456848fc:
                uVar15 = (param_1[1] * 0xfc - 0xfc >> 8) + 1;
                uVar18 = uVar15 + *param_1;
                if (!bVar6) {
                  uVar18 = *param_1;
                }
                uVar16 = param_1[1] - uVar15;
                if (!bVar6) {
                  uVar16 = uVar15;
                }
                bVar2 = (&DAT_149d54800)[uVar16];
                uVar20 = param_1[2] + (uint)bVar2;
                uVar15 = uVar20;
                uVar19 = (uint)bVar2;
                if (-1 < (int)uVar20) {
                  bVar5 = bVar2 - (char)uVar20;
                  if ((int)(uVar18 << (bVar5 - 1 & 0x1f)) < 0) {
                    iVar11 = param_1[3] - 1;
                    lVar17 = (longlong)iVar11;
                    if (-1 < iVar11) {
                      do {
                        if (*(char *)(lVar17 + *(longlong *)(param_1 + 4)) != -1) break;
                        iVar11 = iVar11 + -1;
                        *(undefined1 *)(lVar17 + *(longlong *)(param_1 + 4)) = 0;
                        lVar17 = lVar17 + -1;
                      } while (-1 < lVar17);
                    }
                    *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar11) =
                         *(char *)(*(longlong *)(param_1 + 4) + (longlong)iVar11) + '\x01';
                  }
                  *(char *)((ulonglong)param_1[3] + *(longlong *)(param_1 + 4)) =
                       (char)(uVar18 >> (0x18 - bVar5 & 0x1f));
                  uVar18 = uVar18 << (bVar5 & 0x1f) & 0xffffff;
                  param_1[3] = param_1[3] + 1;
                  uVar15 = uVar20 - 8;
                  uVar19 = uVar20;
                }
                param_1[2] = uVar15;
                *param_1 = uVar18 << ((byte)uVar19 & 0x1f);
                param_1[1] = uVar16 << (bVar2 & 0x1f);
                lVar17 = local_58;
                if (bVar6) {
                  FUN_1456a88a0(param_1,local_res18[0],*pcVar14);
                  *pcVar14 = local_res18[0];
                  lVar17 = local_58;
                }
              }
              iVar21 = iVar21 + 1;
              pcVar14 = pcVar14 + 1;
              local_60 = local_60 + -1;
            } while (local_60 != 0);
            local_58 = lVar17 + 0x58;
            lVar12 = local_98 + 0xb;
            local_88 = (char *)((longlong)local_88 + -1);
            local_98 = lVar12;
            lVar17 = local_58;
          } while (local_88 != (char *)0x0);
          local_a8 = local_a8 + 1;
          local_98 = local_80 + 0x42;
          lVar17 = local_78 + 0x210;
          local_90 = local_90 + 0x12;
        } while (local_a8 < 6);
        local_70 = local_70 + -1;
      } while (local_70 != 0);
      local_68 = (char *)((longlong)local_68 + -1);
    } while (local_68 != (char *)0x0);
    local_88 = (char *)0x0;
    local_80 = local_98;
    local_78 = lVar17;
    local_68 = (char *)0x0;
    if (iVar13 != 0) {
      return;
    }
  }
  local_98 = lVar12;
  local_60 = 0;
  local_70 = 0;
  FUN_145682370(param_1,0,0x80);
  return;
}



// FUNCTION 145684fd0 FUN_145684fd0 body=197 status=ok
// SIG undefined FUN_145684fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145684fd0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 auStack_3388 [32];
  undefined1 *local_3368;
  undefined1 local_3358 [12672];
  undefined1 local_1d8 [432];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x145684fe2;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3388;
  bVar2 = 0;
  bVar1 = (&DAT_149d54b40)[*(int *)(param_1 + 0x2a318)];
  do {
    if ((*(uint *)(*(longlong *)(param_1 + 0x27ea8) + 0x31d8 + (ulonglong)bVar2 * 4) < 0x15) ||
       ((1 < bVar2 && (*(int *)(param_1 + 0xb4734) == 2)))) {
      FUN_145682370(param_2,0,0x80);
    }
    else {
      FUN_145684480(param_1,bVar2,local_3358,local_1d8);
      local_3368 = local_1d8;
      FUN_1456846e0(param_2,param_1,bVar2,local_3358);
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 <= bVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_3388);
}



// FUNCTION 1456850b0 FUN_1456850b0 body=618 status=ok
// SIG undefined FUN_1456850b0(void)

void FUN_1456850b0(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  FUN_1456a82d0(param_2,*param_1,6);
  FUN_1456a82d0(param_2,param_1[2],3);
  FUN_1456a8260(param_2,*(undefined1 *)(param_1 + 4));
  if ((*(char *)(param_1 + 4) != '\0') &&
     (FUN_1456a8260(param_2,*(undefined1 *)((longlong)param_1 + 0x11)),
     *(char *)((longlong)param_1 + 0x11) != '\0')) {
    cVar1 = *(char *)((longlong)param_1 + 0x16);
    cVar2 = *(char *)((longlong)param_1 + 0x12);
    uVar3 = (uint)cVar2;
    FUN_1456a8260(param_2,uVar3 != (int)cVar1);
    if (uVar3 != (int)cVar1) {
      *(char *)((longlong)param_1 + 0x16) = cVar2;
      FUN_1456a82d0(param_2,(uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f,6);
      FUN_1456a8260(param_2,uVar3 >> 0x1f);
    }
    cVar1 = *(char *)((longlong)param_1 + 0x13);
    uVar3 = (uint)cVar1;
    cVar2 = *(char *)((longlong)param_1 + 0x17);
    FUN_1456a8260(param_2,uVar3 != (int)cVar2);
    if (uVar3 != (int)cVar2) {
      *(char *)((longlong)param_1 + 0x17) = cVar1;
      FUN_1456a82d0(param_2,(uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f,6);
      FUN_1456a8260(param_2,uVar3 >> 0x1f);
    }
    cVar1 = *(char *)(param_1 + 5);
    uVar3 = (uint)cVar1;
    cVar2 = *(char *)(param_1 + 6);
    FUN_1456a8260(param_2,uVar3 != (int)cVar2);
    if (uVar3 != (int)cVar2) {
      *(char *)(param_1 + 6) = cVar1;
      FUN_1456a82d0(param_2,(uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f,6);
      FUN_1456a8260(param_2,uVar3 >> 0x1f);
    }
    cVar1 = *(char *)((longlong)param_1 + 0x15);
    uVar3 = (uint)cVar1;
    cVar2 = *(char *)((longlong)param_1 + 0x19);
    FUN_1456a8260(param_2,uVar3 != (int)cVar2);
    if (uVar3 != (int)cVar2) {
      *(char *)((longlong)param_1 + 0x19) = cVar1;
      FUN_1456a82d0(param_2,(uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f,6);
      FUN_1456a8260(param_2,uVar3 >> 0x1f);
    }
    cVar1 = *(char *)((longlong)param_1 + 0x1a);
    uVar3 = (uint)cVar1;
    cVar2 = *(char *)(param_1 + 7);
    FUN_1456a8260(param_2,uVar3 != (int)cVar2);
    if (uVar3 != (int)cVar2) {
      *(char *)(param_1 + 7) = cVar1;
      FUN_1456a82d0(param_2,(uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f,6);
      FUN_1456a8260(param_2,uVar3 >> 0x1f);
    }
    cVar1 = *(char *)((longlong)param_1 + 0x1b);
    uVar3 = (uint)cVar1;
    cVar2 = *(char *)((longlong)param_1 + 0x1d);
    FUN_1456a8260(param_2,uVar3 != (int)cVar2);
    if (uVar3 != (int)cVar2) {
      *(char *)((longlong)param_1 + 0x1d) = cVar1;
      FUN_1456a82d0(param_2,(uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f,6);
      FUN_1456a8260(param_2,uVar3 >> 0x1f);
    }
  }
  return;
}



// FUNCTION 145685320 FUN_145685320 body=1403 status=ok
// SIG undefined FUN_145685320(void)

void FUN_145685320(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  byte *pbVar7;
  longlong lVar8;
  
  FUN_1456a8260(param_3,*(undefined1 *)(param_1 + 0x11a8));
  if (*(char *)(param_1 + 0x11a8) != '\0') {
    FUN_1456a8260(param_3,*(undefined1 *)(param_1 + 0x11a9));
    lVar8 = 8;
    if (*(char *)(param_1 + 0x11a9) != '\0') {
      FUN_145679fe0(param_1,param_2);
      cVar1 = *(char *)(param_1 + 0x11ad);
      FUN_1456a8260(param_3,cVar1 != -1);
      if (cVar1 != -1) {
        FUN_1456a82d0(param_3,cVar1,8);
      }
      cVar1 = *(char *)(param_1 + 0x11ae);
      FUN_1456a8260(param_3,cVar1 != -1);
      if (cVar1 != -1) {
        FUN_1456a82d0(param_3,cVar1,8);
      }
      cVar1 = *(char *)(param_1 + 0x11af);
      FUN_1456a8260(param_3,cVar1 != -1);
      if (cVar1 != -1) {
        FUN_1456a82d0(param_3,cVar1,8);
      }
      cVar1 = *(char *)(param_1 + 0x11b0);
      FUN_1456a8260(param_3,cVar1 != -1);
      if (cVar1 != -1) {
        FUN_1456a82d0(param_3,cVar1,8);
      }
      cVar1 = *(char *)(param_1 + 0x11b1);
      FUN_1456a8260(param_3,cVar1 != -1);
      if (cVar1 != -1) {
        FUN_1456a82d0(param_3,cVar1,8);
      }
      cVar1 = *(char *)(param_1 + 0x11b2);
      FUN_1456a8260(param_3,cVar1 != -1);
      if (cVar1 != -1) {
        FUN_1456a82d0(param_3,cVar1,8);
      }
      cVar1 = *(char *)(param_1 + 0x11b3);
      FUN_1456a8260(param_3,cVar1 != -1);
      if (cVar1 != -1) {
        FUN_1456a82d0(param_3,cVar1,8);
      }
      FUN_1456a8260(param_3,(&DAT_000011ac)[param_1]);
      if ((&DAT_000011ac)[param_1] != '\0') {
        cVar1 = (&DAT_000011b4)[param_1];
        FUN_1456a8260(param_3,cVar1 != -1);
        if (cVar1 != -1) {
          FUN_1456a82d0(param_3,cVar1,8);
        }
        cVar1 = *(char *)(param_1 + 0x11b5);
        FUN_1456a8260(param_3,cVar1 != -1);
        if (cVar1 != -1) {
          FUN_1456a82d0(param_3,cVar1,8);
        }
        cVar1 = *(char *)(param_1 + 0x11b6);
        FUN_1456a8260(param_3,cVar1 != -1);
        if (cVar1 != -1) {
          FUN_1456a82d0(param_3,cVar1,8);
        }
      }
    }
    FUN_1456a8260(param_3,*(undefined1 *)(param_1 + 0x11aa));
    if (*(char *)(param_1 + 0x11aa) != '\0') {
      FUN_1456a8260(param_3,*(undefined1 *)(param_1 + 0x11ab));
      pbVar7 = (byte *)(param_1 + 0x11f8);
      psVar6 = (short *)(&DAT_000011bc + param_1);
      do {
        if ((*(char *)(param_1 + 0x11a8) == '\0') || ((*pbVar7 & 1) == 0)) {
          uVar5 = 0;
LAB_14568565f:
          FUN_1456a8260(param_3,uVar5);
        }
        else {
          FUN_1456a8260(param_3,1);
          uVar5 = (uint)psVar6[-2];
          uVar3 = FUN_145472470(0);
          iVar4 = FUN_145472480(0);
          if (iVar4 != 0) {
            iVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
            if (uVar3 == 0) {
              FUN_1456a82d0(param_3,iVar4,0);
              uVar5 = uVar5 >> 0x1f;
            }
            else {
              iVar2 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                }
              }
              FUN_1456a82d0(param_3,iVar4,iVar2 + 1);
              uVar5 = uVar5 >> 0x1f;
            }
            goto LAB_14568565f;
          }
          if (uVar3 == 0) {
            FUN_1456a82d0(param_3,uVar5,0);
          }
          else {
            iVar4 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            FUN_1456a82d0(param_3,uVar5,iVar4 + 1);
          }
        }
        if ((*(char *)(param_1 + 0x11a8) == '\0') || ((*pbVar7 & 2) == 0)) {
          uVar5 = 0;
LAB_14568570c:
          FUN_1456a8260(param_3,uVar5);
        }
        else {
          FUN_1456a8260(param_3,1);
          uVar5 = (uint)psVar6[-1];
          uVar3 = FUN_145472470(1);
          iVar4 = FUN_145472480(1);
          if (iVar4 != 0) {
            iVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
            if (uVar3 == 0) {
              FUN_1456a82d0(param_3,iVar4,0);
              uVar5 = uVar5 >> 0x1f;
            }
            else {
              iVar2 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                }
              }
              FUN_1456a82d0(param_3,iVar4,iVar2 + 1);
              uVar5 = uVar5 >> 0x1f;
            }
            goto LAB_14568570c;
          }
          if (uVar3 == 0) {
            FUN_1456a82d0(param_3,uVar5,0);
          }
          else {
            iVar4 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            FUN_1456a82d0(param_3,uVar5,iVar4 + 1);
          }
        }
        if ((*(char *)(param_1 + 0x11a8) == '\0') || ((*pbVar7 & 4) == 0)) {
          uVar5 = 0;
LAB_1456857b8:
          FUN_1456a8260(param_3,uVar5);
        }
        else {
          FUN_1456a8260(param_3,1);
          uVar5 = (uint)*psVar6;
          uVar3 = FUN_145472470(2);
          iVar4 = FUN_145472480(2);
          if (iVar4 != 0) {
            iVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
            if (uVar3 == 0) {
              FUN_1456a82d0(param_3,iVar4,0);
              uVar5 = uVar5 >> 0x1f;
            }
            else {
              iVar2 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                }
              }
              FUN_1456a82d0(param_3,iVar4,iVar2 + 1);
              uVar5 = uVar5 >> 0x1f;
            }
            goto LAB_1456857b8;
          }
          if (uVar3 == 0) {
            FUN_1456a82d0(param_3,uVar5,0);
          }
          else {
            iVar4 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            FUN_1456a82d0(param_3,uVar5,iVar4 + 1);
          }
        }
        if ((*(char *)(param_1 + 0x11a8) == '\0') || ((*pbVar7 & 8) == 0)) {
          uVar5 = 0;
LAB_145685865:
          FUN_1456a8260(param_3,uVar5);
        }
        else {
          FUN_1456a8260(param_3,1);
          uVar5 = (uint)psVar6[1];
          uVar3 = FUN_145472470(3);
          iVar4 = FUN_145472480(3);
          if (iVar4 != 0) {
            iVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
            if (uVar3 == 0) {
              FUN_1456a82d0(param_3,iVar4,0);
              uVar5 = uVar5 >> 0x1f;
            }
            else {
              iVar2 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                }
              }
              FUN_1456a82d0(param_3,iVar4,iVar2 + 1);
              uVar5 = uVar5 >> 0x1f;
            }
            goto LAB_145685865;
          }
          if (uVar3 == 0) {
            FUN_1456a82d0(param_3,uVar5,0);
          }
          else {
            iVar4 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            FUN_1456a82d0(param_3,uVar5,iVar4 + 1);
          }
        }
        pbVar7 = pbVar7 + 4;
        psVar6 = psVar6 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1456858a0 FUN_1456858a0 body=476 status=ok
// SIG undefined FUN_1456858a0(void)

void FUN_1456858a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 3;
  if (*(int *)(param_1 + 0x438) < 3) {
    iVar5 = *(int *)(param_1 + 0x438);
  }
  iVar1 = 1;
  local_78 = param_3;
  do {
    FUN_145682370(param_2,iVar5 >> ((byte)iVar1 & 0x1f) & 1,0x80);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  if (2 < *(int *)(param_1 + 0x438)) {
    FUN_145682370(param_2,*(int *)(param_1 + 0x438) == 4,0x80);
  }
  if (*(int *)(param_1 + 0x438) == 4) {
    lVar2 = 0;
    lVar6 = 2;
    do {
      FUN_145470f80(param_3 + 0x31c8 + lVar2 * 8,local_70);
      FUN_1456a8a50(param_2,*(longlong *)(param_1 + 0x1228) + 0x7ad + lVar2,local_70);
      lVar2 = lVar2 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar2 = 0;
    lVar8 = 2;
    lVar6 = 0;
    do {
      lVar4 = 2;
      FUN_145470f60(local_78 + 0x31b0 + lVar6,local_68);
      lVar3 = 0;
      puVar7 = local_68;
      do {
        FUN_1456a8a50(param_2,*(longlong *)(param_1 + 0x1228) + 0x7a9 + lVar3 + lVar2,puVar7);
        lVar3 = lVar3 + 1;
        puVar7 = puVar7 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar6 = lVar6 + 0xc;
      lVar2 = lVar2 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar2 = 0;
    lVar8 = 2;
    lVar6 = 0;
    do {
      FUN_145470f30(local_78 + 0x3190 + lVar6,local_58);
      lVar3 = 0;
      puVar7 = local_58;
      lVar4 = 3;
      do {
        FUN_1456a8a50(param_2,*(longlong *)(param_1 + 0x1228) + 0x7a3 + lVar3 + lVar2,puVar7);
        lVar3 = lVar3 + 1;
        puVar7 = puVar7 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar6 = lVar6 + 0x10;
      lVar2 = lVar2 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 145685a90 FUN_145685a90 body=128 status=ok
// SIG undefined FUN_145685a90(void)

undefined8 FUN_145685a90(longlong param_1,undefined8 *param_2)

{
  FUN_1456a8360(param_2 + 2,*param_2);
  FUN_145684310(param_1,param_2 + 8,
                (longlong)*(int *)(param_2 + 5) * 0x860 + *(longlong *)(param_1 + 0x2f680),
                param_2 + 2,0,*(int *)(param_2 + 5),(longlong)param_2 + 0x2c,param_2 + 6);
  FUN_1456a8380(param_2 + 2);
  return 1;
}



// FUNCTION 145685b10 FUN_145685b10 body=1091 status=ok
// SIG undefined FUN_145685b10(void)

ulonglong FUN_145685b10(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  uint local_res18;
  
  lVar9 = FUN_14546f0a0();
  uVar22 = 0;
  uVar1 = *(uint *)(param_1 + 0xcd42c);
  iVar26 = 1;
  iVar15 = 1;
  iVar21 = 1 << ((byte)*(undefined4 *)(param_1 + 0x2e4e0) & 0x1f);
  if (*(longlong *)(param_1 + 0xcd498) != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0xcd498) + 0x2d8) <=
        *(int *)(param_1 + 0x2e518) * *(int *)(param_1 + 0x2e51c)) goto LAB_145685cb4;
    if (1 < (int)uVar1) {
      lVar17 = 0x2d0;
      do {
        FUN_14518f040(*(undefined8 *)(lVar17 + *(longlong *)(param_1 + 0xcd498)));
        iVar15 = iVar15 + 1;
        lVar17 = lVar17 + 0x2d0;
      } while (iVar15 < *(int *)(param_1 + 0xcd42c));
    }
    FUN_14518f040(*(undefined8 *)(param_1 + 0xcd498));
    *(undefined8 *)(param_1 + 0xcd498) = 0;
  }
  iVar15 = *(int *)(param_1 + 0xcd42c);
  lVar17 = FUN_14518ef10(0x10);
  *(longlong *)(param_1 + 0xcd498) = lVar17;
  if (lVar17 == 0) {
    FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate cpi->vp9_bitstream_worker_data");
  }
  memset(*(void **)(param_1 + 0xcd498),0,(longlong)iVar15 * 0x2d0);
  if (1 < *(int *)(param_1 + 0xcd42c)) {
    lVar17 = 0x2d0;
    do {
      *(int *)(lVar17 + 8 + *(longlong *)(param_1 + 0xcd498)) =
           *(int *)(param_1 + 0x2e51c) * *(int *)(param_1 + 0x2e518);
      uVar10 = FUN_14518ef70((longlong)*(int *)(lVar17 + 8 + *(longlong *)(param_1 + 0xcd498)));
      *(undefined8 *)(lVar17 + *(longlong *)(param_1 + 0xcd498)) = uVar10;
      if (*(longlong *)(lVar17 + *(longlong *)(param_1 + 0xcd498)) == 0) {
        FUN_144d82810(param_1 + 0x29ee0,2);
      }
      iVar26 = iVar26 + 1;
      lVar17 = lVar17 + 0x2d0;
    } while (iVar26 < *(int *)(param_1 + 0xcd42c));
  }
LAB_145685cb4:
  uVar23 = (ulonglong)(int)uVar1;
  uVar14 = uVar22;
  uVar25 = uVar23;
  if (0 < iVar21) {
    do {
      uVar18 = 0;
      local_res18 = 0;
      uVar24 = uVar18;
      if (0 < (longlong)uVar23) {
        do {
          local_res18 = (uint)uVar24;
          iVar15 = (int)uVar14;
          if (iVar21 <= iVar15) break;
          lVar17 = 5;
          lVar19 = uVar18 * 0x30 + *(longlong *)(param_1 + 0xcd430);
          plVar20 = (longlong *)(uVar18 * 0x2d0 + *(longlong *)(param_1 + 0xcd498));
          plVar7 = (longlong *)(param_1 + 0x121b0);
          plVar8 = plVar20 + 8;
          do {
            plVar13 = plVar8;
            plVar11 = plVar7;
            lVar6 = plVar11[1];
            *plVar13 = *plVar11;
            plVar13[1] = lVar6;
            lVar6 = plVar11[3];
            plVar13[2] = plVar11[2];
            plVar13[3] = lVar6;
            lVar6 = plVar11[5];
            plVar13[4] = plVar11[4];
            plVar13[5] = lVar6;
            lVar6 = plVar11[7];
            plVar13[6] = plVar11[6];
            plVar13[7] = lVar6;
            lVar6 = plVar11[9];
            plVar13[8] = plVar11[8];
            plVar13[9] = lVar6;
            lVar6 = plVar11[0xb];
            plVar13[10] = plVar11[10];
            plVar13[0xb] = lVar6;
            lVar6 = plVar11[0xd];
            plVar13[0xc] = plVar11[0xc];
            plVar13[0xd] = lVar6;
            uVar4 = *(undefined4 *)((longlong)plVar11 + 0x74);
            lVar6 = plVar11[0xf];
            uVar5 = *(undefined4 *)((longlong)plVar11 + 0x7c);
            *(int *)(plVar13 + 0xe) = (int)plVar11[0xe];
            *(undefined4 *)((longlong)plVar13 + 0x74) = uVar4;
            *(int *)(plVar13 + 0xf) = (int)lVar6;
            *(undefined4 *)((longlong)plVar13 + 0x7c) = uVar5;
            lVar17 = lVar17 + -1;
            plVar7 = plVar11 + 0x10;
            plVar8 = plVar13 + 0x10;
          } while (lVar17 != 0);
          lVar17 = plVar11[0x10];
          lVar6 = plVar11[0x11];
          *(int *)(plVar20 + 5) = iVar15;
          plVar13[0x10] = lVar17;
          plVar13[0x11] = lVar6;
          *(undefined4 *)((longlong)plVar20 + 0x2c) = *(undefined4 *)(param_1 + 0xb4938);
          plVar20[6] = 0;
          plVar20[7] = 0;
          if (uVar18 == 0) {
            lVar17 = 4;
            if (iVar15 == iVar21 + -1) {
              lVar17 = 0;
            }
            *plVar20 = lVar17 + uVar22 + param_2;
          }
          *(undefined4 *)(lVar19 + 0x28) = 0;
          *(code **)(lVar19 + 0x10) = FUN_145685a90;
          *(longlong *)(lVar19 + 0x18) = param_1;
          *(longlong **)(lVar19 + 0x20) = plVar20;
          if ((int)local_res18 < (int)uVar25 + -1) {
            (**(code **)(lVar9 + 0x18))();
          }
          else {
            (**(code **)(lVar9 + 0x20))(lVar19);
          }
          uVar14 = (ulonglong)(iVar15 + 1);
          local_res18 = local_res18 + 1;
          uVar24 = (ulonglong)local_res18;
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < (longlong)uVar23);
      }
      uVar16 = 0;
      uVar24 = uVar16;
      uVar18 = uVar16;
      if (0 < (int)local_res18) {
        do {
          puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0xcd430) + uVar24 + 0x20);
          iVar15 = (**(code **)(lVar9 + 0x10))();
          if (iVar15 == 0) {
            return 0;
          }
          uVar2 = *(uint *)((longlong)puVar3 + 0x1c);
          uVar12 = *(uint *)(param_1 + 0xb4938);
          if (*(uint *)(param_1 + 0xb4938) <= *(uint *)((longlong)puVar3 + 0x2c)) {
            uVar12 = *(uint *)((longlong)puVar3 + 0x2c);
          }
          *(uint *)(param_1 + 0xb4938) = uVar12;
          *(int *)(param_1 + 0xb4550) = *(int *)(param_1 + 0xb4550) + *(int *)(puVar3 + 6);
          *(int *)(param_1 + 0xb4554) =
               *(int *)(param_1 + 0xb4554) + *(int *)((longlong)puVar3 + 0x34);
          *(int *)(param_1 + 0xb4558) = *(int *)(param_1 + 0xb4558) + *(int *)(puVar3 + 7);
          *(int *)(param_1 + 0xb455c) =
               *(int *)(param_1 + 0xb455c) + *(int *)((longlong)puVar3 + 0x3c);
          if (((int)uVar14 != iVar21) || ((int)uVar18 < (int)(local_res18 - 1))) {
            *(char *)(uVar22 + param_2) = (char)(uVar2 >> 0x18);
            *(char *)(uVar22 + 1 + param_2) = (char)(uVar2 >> 0x10);
            *(char *)(uVar22 + 2 + param_2) = (char)(uVar2 >> 8);
            *(char *)(uVar22 + 3 + param_2) = (char)uVar2;
            uVar22 = uVar22 + 4;
          }
          if (0 < (longlong)uVar16) {
            memcpy((void *)(param_2 + uVar22),(void *)*puVar3,(ulonglong)uVar2);
          }
          uVar22 = uVar22 + uVar2;
          uVar16 = uVar16 + 1;
          uVar24 = uVar24 + 0x30;
          uVar18 = (ulonglong)((int)uVar18 + 1);
        } while ((longlong)uVar16 < (longlong)(int)local_res18);
        uVar25 = (ulonglong)uVar1;
      }
    } while ((int)uVar14 < iVar21);
  }
  return uVar22;
}



// FUNCTION 145685f60 FUN_145685f60 body=146 status=ok
// SIG undefined FUN_145685f60(void)

void FUN_145685f60(longlong param_1,undefined8 param_2)

{
  if ((*(int *)(param_1 + 0x168) == *(int *)(param_1 + 0x170)) &&
     (*(int *)(param_1 + 0x16c) == *(int *)(param_1 + 0x174))) {
    FUN_1456a8260(param_2,0);
    return;
  }
  FUN_1456a8260(param_2,1);
  FUN_1456a82d0(param_2,*(int *)(param_1 + 0x170) + -1,0x10);
  FUN_1456a82d0(param_2,*(int *)(param_1 + 0x174) + -1,0x10);
  return;
}



// FUNCTION 145686000 FUN_145686000 body=81 status=ok
// SIG undefined FUN_145686000(void)

void FUN_145686000(longlong param_1,undefined8 param_2)

{
  FUN_1456a82d0(param_2,*(int *)(param_1 + 0x168) + -1,0x10);
  FUN_1456a82d0(param_2,*(int *)(param_1 + 0x16c) + -1,0x10);
  FUN_145685f60(param_1,param_2);
  return;
}



// FUNCTION 145686060 FUN_145686060 body=62 status=ok
// SIG undefined FUN_145686060(void)

void FUN_145686060(undefined8 param_1)

{
  FUN_1456a82d0(param_1,0x49,8);
  FUN_1456a82d0(param_1,0x83,8);
  FUN_1456a82d0(param_1,0x42,8);
  return;
}



// FUNCTION 1456860a0 FUN_1456860a0 body=152 status=ok
// SIG undefined FUN_1456860a0(void)

void FUN_1456860a0(longlong param_1,undefined8 param_2)

{
  if (1 < *(int *)(param_1 + 0x45ec)) {
    FUN_1456a8260(param_2,*(int *)(param_1 + 0x45f0) != 10);
  }
  FUN_1456a82d0(param_2,*(undefined4 *)(param_1 + 0x160),3);
  if (*(int *)(param_1 + 0x160) != 7) {
    FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x164));
    if ((*(int *)(param_1 + 0x45ec) - 1U & 0xfffffffd) != 0) {
      return;
    }
    FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x180));
    FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x184));
  }
  FUN_1456a8260(param_2,0);
  return;
}



// FUNCTION 145686140 FUN_145686140 body=1470 status=ok
// SIG undefined FUN_145686140(void)

void FUN_145686140(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int aiStack_307c [3075];
  undefined *puStack_70;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x29ee0;
  puStack_70 = (undefined *)0x14568617d;
  FUN_1456a82d0(param_2,2,2);
  iVar3 = *(int *)(param_1 + 0x2e4cc);
  uVar4 = 0;
  lVar13 = 3;
  uVar10 = 0;
  uVar5 = uVar4;
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar5 = 2;
      lVar12 = 2;
      goto LAB_1456861b8;
    }
    if (iVar3 != 2) {
      uVar5 = 6;
      lVar12 = lVar13;
      goto LAB_1456861b8;
    }
    uVar5 = 1;
  }
  lVar12 = 2;
LAB_1456861b8:
  puStack_70 = (undefined *)0x1456861c0;
  FUN_1456a82d0(param_2,uVar5,lVar12);
  puStack_70 = (undefined *)0x1456861ce;
  FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2a2f0));
  if (*(int *)(param_1 + 0x2a2f0) == 0) {
    puStack_70 = (undefined *)0x1456861ff;
    FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2a2e4));
    puStack_70 = (undefined *)0x14568620d;
    FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2a2e8));
    puStack_70 = (undefined *)0x14568621b;
    FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2e4d8));
    if (*(int *)(param_1 + 0x2a2e4) == 0) {
      puStack_70 = (undefined *)0x145686234;
      FUN_1456a82d0(param_2,0x49,8);
      puStack_70 = (undefined *)0x145686245;
      FUN_1456a82d0(param_2,0x83,8);
      puStack_70 = (undefined *)0x145686256;
      FUN_1456a82d0(param_2,0x42,8);
      puStack_70 = (undefined *)0x145686261;
      FUN_1456860a0(lVar1,param_2);
      puStack_70 = (undefined *)0x145686277;
      FUN_1456a82d0(param_2,*(int *)(param_1 + 0x2a048) + -1,0x10);
      puStack_70 = (undefined *)0x14568628d;
      FUN_1456a82d0(param_2,*(int *)(param_1 + 0x2a04c) + -1,0x10);
      puStack_70 = (undefined *)0x145686298;
      FUN_145685f60(lVar1,param_2);
    }
    else {
      if (*(int *)(param_1 + 0x2a2e8) == 0) {
        puStack_70 = (undefined *)0x1456862b4;
        FUN_1456a8260(param_2,*(undefined1 *)(param_1 + 0x2a2f4));
      }
      if (*(int *)(param_1 + 0x2e4d8) == 0) {
        puStack_70 = (undefined *)0x1456862d0;
        FUN_1456a82d0(param_2,*(undefined4 *)(param_1 + 0x2a2fc),2);
      }
      if (*(char *)(param_1 + 0x2a2f4) == '\0') {
        puStack_70 = (undefined *)0x145686324;
        uVar2 = FUN_1456825a0(param_1);
        puStack_70 = (undefined *)0x145686334;
        FUN_1456a82d0(param_2,uVar2,8);
        bVar7 = 1;
        do {
          if (bVar7 == 1) {
            uVar2 = *(undefined4 *)(param_1 + 0x2f698);
          }
          else if (bVar7 == 2) {
            uVar2 = *(undefined4 *)(param_1 + 0x2f69c);
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0x2f6a0);
          }
          puStack_70 = (undefined *)0x145686364;
          FUN_1456a82d0(param_2,uVar2,3);
          puStack_70 = (undefined *)0x145686378;
          FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2b044 + (ulonglong)bVar7 * 4));
          bVar7 = bVar7 + 1;
        } while ((char)bVar7 < '\x04');
        cVar8 = '\x01';
        do {
          if (cVar8 == '\x01') {
            iVar3 = *(int *)(param_1 + 0x2f698);
          }
          else if (cVar8 == '\x02') {
            iVar3 = *(int *)(param_1 + 0x2f69c);
          }
          else {
            iVar3 = *(int *)(param_1 + 0x2f6a0);
          }
          uVar5 = uVar4;
          if ((iVar3 != -1) &&
             (iVar3 = *(int *)(param_1 + 0x2a088 + (longlong)iVar3 * 4), iVar3 != -1)) {
            uVar5 = *(longlong *)(param_1 + 0x2e4f0) + 0x58 + (longlong)iVar3 * 0xe0;
          }
          if (((*(int *)(param_1 + 0xb64dc) == 0) ||
              (((*(int *)(param_1 + 0xb64ec) < 2 || (*(int *)(param_1 + 0x2e57c) != 1)) &&
               ((*(int *)(param_1 + 0xb64e8) < 2 ||
                (*(int *)((longlong)*(int *)(param_1 + 0xb64e0) * 0x1ab8 + 0xb9054 + param_1) == 0))
               )))) && (((uVar5 != 0 && (*(int *)(param_1 + 0x2a048) == *(int *)(uVar5 + 8))) &&
                        (*(int *)(param_1 + 0x2a04c) == *(int *)(uVar5 + 0xc))))) {
            puStack_70 = (undefined *)0x1456864ff;
            FUN_1456a8260(param_2,1);
            goto LAB_145686472;
          }
          puStack_70 = (undefined *)0x145686438;
          FUN_1456a8260(param_2,0);
          cVar8 = cVar8 + '\x01';
        } while (cVar8 < '\x04');
        puStack_70 = (undefined *)0x14568645b;
        FUN_1456a82d0(param_2,*(int *)(param_1 + 0x2a048) + -1,0x10);
        puStack_70 = (undefined *)0x145686472;
        FUN_1456a82d0(param_2,*(int *)(param_1 + 0x2a04c) + -1,0x10);
LAB_145686472:
        puStack_70 = (undefined *)0x14568647d;
        FUN_145685f60(lVar1,param_2);
        puStack_70 = (undefined *)0x14568648b;
        FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2a2f8));
        lVar12 = *(longlong *)(param_1 + 0x27ea8);
        if (*(char *)(param_1 + 0x2a3fc) == '\x04') {
          piVar6 = (int *)(lVar12 + 0x303c);
          uVar5 = uVar4;
          do {
            iVar3 = piVar6[6] + piVar6[-3] + piVar6[3] + *piVar6;
            *(int *)(((longlong)aiStack_307c - lVar12) + (longlong)piVar6) = iVar3;
            piVar6 = piVar6 + 1;
            uVar11 = (int)uVar5 + (uint)(0 < iVar3);
            uVar5 = (ulonglong)uVar11;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          if (uVar11 == 1) {
            do {
              if (*(int *)((longlong)&local_40 + (longlong)(int)uVar4 * 4) != 0) {
                *(char *)(param_1 + 0x2a3fc) = (char)uVar4;
                break;
              }
              uVar11 = (int)uVar4 + 1;
              uVar4 = (ulonglong)uVar11;
            } while ((int)uVar11 < 3);
          }
        }
        bVar7 = *(byte *)(param_1 + 0x2a3fc);
        local_40 = 1;
        uStack_38 = 0x300000002;
        puStack_70 = (undefined *)0x145686530;
        FUN_1456a8260(param_2,bVar7 == 4);
        if (bVar7 != 4) {
          puStack_70 = (undefined *)0x145686548;
          FUN_1456a82d0(param_2,*(undefined4 *)((longlong)&local_40 + (ulonglong)bVar7 * 4),2);
        }
      }
      else {
        puStack_70 = (undefined *)0x1456862e1;
        FUN_145686060(param_2);
        if (0 < *(int *)(param_1 + 0x2e4cc)) {
          puStack_70 = (undefined *)0x1456862f4;
          FUN_1456860a0(lVar1,param_2);
        }
        puStack_70 = (undefined *)0x1456862fc;
        uVar2 = FUN_1456825a0(param_1);
        puStack_70 = (undefined *)0x14568630c;
        FUN_1456a82d0(param_2,uVar2,8);
        puStack_70 = (undefined *)0x145686317;
        FUN_145686000(lVar1,param_2);
      }
    }
    if (*(int *)(param_1 + 0x2e4d8) == 0) {
      puStack_70 = (undefined *)0x14568655e;
      FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2b040));
      puStack_70 = (undefined *)0x14568656c;
      FUN_1456a8260(param_2,*(undefined4 *)(param_1 + 0x2e4dc));
    }
    puStack_70 = (undefined *)0x145686580;
    FUN_1456a82d0(param_2,*(undefined4 *)(param_1 + 0x2b118),2);
    puStack_70 = (undefined *)0x14568658f;
    FUN_1456850b0(param_1 + 0x2b058,param_2);
    puStack_70 = (undefined *)0x1456865a3;
    FUN_1456a82d0(param_2,*(undefined4 *)(param_1 + 0x2a31c),8);
    uVar11 = *(uint *)(param_1 + 0x2a320);
    uVar9 = uVar10;
    if (uVar11 != 0) {
      puStack_70 = (undefined *)0x1456865ba;
      FUN_1456a8260(param_2,1);
      puStack_70 = (undefined *)0x1456865d1;
      FUN_1456a82d0(param_2,(uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f),4);
      uVar9 = uVar11 >> 0x1f;
    }
    puStack_70 = (undefined *)0x1456865e2;
    FUN_1456a8260(param_2,uVar9);
    uVar11 = *(uint *)(param_1 + 0x2a324);
    uVar9 = uVar10;
    if (uVar11 != 0) {
      puStack_70 = (undefined *)0x1456865f9;
      FUN_1456a8260(param_2,1);
      puStack_70 = (undefined *)0x145686610;
      FUN_1456a82d0(param_2,(uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f),4);
      uVar9 = uVar11 >> 0x1f;
    }
    puStack_70 = (undefined *)0x145686621;
    FUN_1456a8260(param_2,uVar9);
    uVar11 = *(uint *)(param_1 + 0x2a328);
    if (uVar11 != 0) {
      puStack_70 = (undefined *)0x145686638;
      FUN_1456a8260(param_2,1);
      puStack_70 = (undefined *)0x14568664f;
      FUN_1456a82d0(param_2,(uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f),4);
      uVar10 = uVar11 >> 0x1f;
    }
    puStack_70 = (undefined *)0x145686660;
    FUN_1456a8260(param_2,uVar10);
    puStack_70 = (undefined *)0x145686672;
    FUN_145685320(lVar1,param_1 + 0x121b0,param_2);
    puStack_70 = (undefined *)0x145686687;
    FUN_145472650(*(undefined4 *)(param_1 + 0x2a310),&local_48,&local_44);
    for (local_48 = *(int *)(param_1 + 0x2e4e0) - local_48; local_48 != 0; local_48 = local_48 + -1)
    {
      puStack_70 = (undefined *)0x1456866a0;
      FUN_1456a8260(param_2,1);
    }
    if (*(int *)(param_1 + 0x2e4e0) < local_44) {
      puStack_70 = (undefined *)0x1456866c3;
      FUN_1456a8260(param_2,0);
    }
    puStack_70 = (undefined *)0x1456866d6;
    FUN_1456a8260(param_2,*(int *)(param_1 + 0x2e4e4) != 0);
    if (*(int *)(param_1 + 0x2e4e4) != 0) {
      puStack_70 = (undefined *)0x1456866f1;
      FUN_1456a8260(param_2,*(int *)(param_1 + 0x2e4e4) != 1);
    }
  }
  else {
    puStack_70 = (undefined *)0x1456861e7;
    FUN_1456a82d0(param_2,*(undefined4 *)(param_1 + 0x2f6a0),3);
  }
                    /* WARNING: Subroutine does not return */
  puStack_70 = &UNK_1456866fe;
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 145686720 FUN_145686720 body=1233 status=ok
// SIG undefined FUN_145686720(void)

void FUN_145686720(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined1 local_180 [24];
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar10 = *(longlong *)(param_1 + 0x27ea8);
  lVar3 = param_1 + 0x29ee0;
  local_168 = *(longlong *)(param_1 + 0x2b108);
  local_188 = lVar3;
  local_160 = param_1;
  local_158 = lVar10;
  FUN_1456a8360(local_180);
  lVar7 = 0;
  local_150 = 0;
  if (*(int *)(param_1 + 0x12424) == 0) {
    FUN_1456858a0(lVar3,local_180,lVar10);
  }
  else {
    *(undefined4 *)(param_1 + 0x2a318) = 0;
  }
  FUN_145684fd0(param_1,local_180);
  lVar5 = 3;
  lVar2 = lVar7;
  do {
    FUN_1456a8a50(local_180,*(longlong *)(param_1 + 0x2b108) + 0x7af + lVar2,
                  lVar10 + 0x31e8 + lVar2 * 8);
    lVar2 = lVar2 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) {
    lVar5 = 7;
    lVar2 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar3 + 0x1228) + 0x776 + lVar2;
      FUN_1456a6f90(&DAT_149d52c3c,local_148,lVar10 + 0x3060 + lVar7);
      puVar6 = local_148;
      lVar4 = 3;
      do {
        FUN_1456a8a50(local_180,lVar3,puVar6);
        puVar6 = puVar6 + 8;
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar2 = lVar2 + 3;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -1;
      lVar3 = local_188;
    } while (lVar5 != 0);
    if (*(char *)(local_188 + 0x51c) == '\x04') {
      lVar7 = 0;
      lVar2 = 0;
      lVar3 = 4;
      do {
        lVar5 = *(longlong *)(local_188 + 0x1228) + 0x76e + lVar2;
        FUN_1456a6f90(&DAT_149d52c4c,local_148,lVar10 + 0x3030 + lVar7);
        puVar6 = local_148;
        lVar4 = 2;
        do {
          FUN_1456a8a50(local_180,lVar5,puVar6);
          puVar6 = puVar6 + 8;
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar2 = lVar2 + 2;
        lVar7 = lVar7 + 0xc;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar7 = local_168;
    lVar4 = 0;
    lVar5 = 4;
    lVar3 = local_168 + 0x78b;
    lVar2 = lVar4;
    do {
      FUN_1456a8a50(local_180,lVar3,lVar10 + 0x30d0 + lVar2);
      lVar9 = local_188;
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar3 = 5;
    if (*(int *)(local_160 + 0xb4940) != 0) {
      iVar1 = *(int *)(local_188 + 0x1220);
      FUN_145682370(local_180,iVar1 != 0,0x80);
      if ((iVar1 != 0) && (FUN_145682370(local_180,iVar1 == 2,0x80), iVar1 == 2)) {
        lVar7 = lVar7 + 0x78f;
        lVar5 = 5;
        lVar2 = lVar4;
        do {
          FUN_1456a8a50(local_180,lVar7,lVar10 + 0x30f0 + lVar2);
          lVar2 = lVar2 + 8;
          lVar7 = lVar7 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    lVar7 = local_168;
    if (*(int *)(lVar9 + 0x1220) != 1) {
      lVar8 = 5;
      lVar2 = lVar4;
      lVar5 = lVar4;
      do {
        FUN_1456a8a50(local_180,lVar7 + 0x794 + lVar2,lVar10 + 0x3118 + lVar5);
        FUN_1456a8a50(local_180,lVar7 + 0x795 + lVar2,lVar10 + 0x3120 + lVar5);
        lVar5 = lVar5 + 0x10;
        lVar2 = lVar2 + 2;
        lVar8 = lVar8 + -1;
        lVar9 = local_188;
      } while (lVar8 != 0);
    }
    if (*(int *)(lVar9 + 0x1220) != 0) {
      lVar2 = local_168 + 0x79e;
      lVar7 = lVar4;
      do {
        FUN_1456a8a50(local_180,lVar2,lVar10 + 0x3168 + lVar7);
        lVar7 = lVar7 + 8;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar3 = local_188;
    lVar7 = 4;
    do {
      lVar2 = *(longlong *)(lVar3 + 0x1228) + lVar4;
      FUN_1456a6f90(&DAT_149d52c28,local_148,lVar10);
      puVar6 = local_148;
      lVar5 = 9;
      do {
        FUN_1456a8a50(local_180,lVar2,puVar6);
        lVar9 = local_158;
        puVar6 = puVar6 + 8;
        lVar2 = lVar2 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar4 = lVar4 + 9;
      lVar10 = lVar10 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar7 = 0x10;
    lVar10 = local_168 + 0x7e;
    lVar3 = local_150;
    do {
      FUN_1456a6f90(&DAT_149d52c44,local_148,lVar9 + 0x230 + lVar3);
      puVar6 = local_148;
      lVar2 = 3;
      do {
        FUN_1456a8a50(local_180,lVar10,puVar6);
        puVar6 = puVar6 + 8;
        lVar10 = lVar10 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar3 = lVar3 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    FUN_145663d40(local_188,*(undefined4 *)(local_188 + 0x418),local_180,lVar9 + 0x3200);
  }
  FUN_1456a8380(local_180);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 145686c10 FUN_145686c10 body=540 status=ok
// SIG undefined FUN_145686c10(void)

void FUN_145686c10(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *param_1;
  iVar8 = param_1[1];
  uVar1 = iVar9 + 0x3fU & 0xffffffc0;
  uVar4 = iVar9 + 0x10U;
  if ((int)(iVar9 + 0x10U) <= (int)uVar1) {
    uVar4 = uVar1;
  }
  uVar1 = iVar8 + 0x3fU & 0xffffffc0;
  iVar5 = uVar4 - param_1[2];
  uVar4 = iVar8 + 0x10U;
  if ((int)(iVar8 + 0x10U) <= (int)uVar1) {
    uVar4 = uVar1;
  }
  iVar6 = uVar4 - param_1[3];
  iVar3 = 0x10 >> (param_1[6] != iVar8);
  iVar2 = 0x10 >> (param_1[5] != iVar9);
  iVar8 = iVar6 >> (param_1[6] != iVar8);
  iVar9 = iVar5 >> (param_1[5] != iVar9);
  cVar7 = (*(longlong *)(param_1 + 0x12) - *(longlong *)(param_1 + 0x10) == 1) + '\x01';
  if ((*(byte *)(param_1 + 0x26) & 8) == 0) {
    FUN_145686e30(*(undefined8 *)(param_1 + 0xe),param_1[4],*(undefined8 *)(param_2 + 0x38),
                  *(undefined4 *)(param_2 + 0x10),param_1[2],param_1[3],0x10,0x10,iVar6,iVar5,1);
    FUN_145686e30(*(undefined8 *)(param_1 + 0x10),param_1[9],*(undefined8 *)(param_2 + 0x40),
                  *(undefined4 *)(param_2 + 0x24),param_1[7],param_1[8],iVar3,iVar2,iVar8,iVar9,
                  cVar7);
    FUN_145686e30(*(undefined8 *)(param_1 + 0x12),param_1[9],*(undefined8 *)(param_2 + 0x48),
                  *(undefined4 *)(param_2 + 0x24),param_1[7],param_1[8],iVar3,iVar2,iVar8,iVar9,
                  cVar7);
  }
  else {
    FUN_145687010();
    FUN_145687010(*(undefined8 *)(param_1 + 0x10),param_1[9],*(undefined8 *)(param_2 + 0x40),
                  *(undefined4 *)(param_2 + 0x24),param_1[7],param_1[8],iVar3,iVar2,iVar8,iVar9);
    FUN_145687010(*(undefined8 *)(param_1 + 0x12),param_1[9],*(undefined8 *)(param_2 + 0x48),
                  *(undefined4 *)(param_2 + 0x24),param_1[7],param_1[8],iVar3,iVar2,iVar8,iVar9);
  }
  return;
}



// FUNCTION 145686e30 FUN_145686e30 body=468 status=ok
// SIG undefined FUN_145686e30(void)

void FUN_145686e30(byte *param_1,int param_2,longlong param_3,int param_4,uint param_5,uint param_6,
                  uint param_7,int param_8,uint param_9,int param_10,int param_11)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t _Size;
  size_t _Size_00;
  void *pvVar4;
  void *_Dst;
  ulonglong uVar5;
  void *_Src;
  ulonglong uVar6;
  longlong lVar7;
  
  _Size_00 = (size_t)param_8;
  if (param_11 < 1) {
    param_11 = 1;
  }
  lVar7 = (longlong)param_4;
  _Src = (void *)(param_3 - _Size_00);
  if (0 < (int)param_6) {
    uVar6 = (ulonglong)param_6;
    pvVar4 = _Src;
    do {
      memset(pvVar4,(uint)*param_1,_Size_00);
      if (param_11 == 1) {
        memcpy((void *)(_Size_00 + (longlong)pvVar4),param_1,(longlong)(int)param_5);
      }
      else if (0 < (int)param_5) {
        pbVar3 = (byte *)(_Size_00 + (longlong)pvVar4);
        pbVar2 = param_1;
        uVar5 = (ulonglong)param_5;
        do {
          bVar1 = *pbVar2;
          pbVar2 = pbVar2 + param_11;
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      memset((void *)((((int)param_5 + param_3) - (longlong)_Src) + (longlong)pvVar4),
             (uint)param_1[(int)((param_5 - 1) * param_11)],(longlong)param_10);
      param_1 = param_1 + param_2;
      pvVar4 = (void *)((longlong)pvVar4 + lVar7);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  _Dst = (void *)(((longlong)(int)-(param_4 * param_7) - _Size_00) + param_3);
  _Size = (size_t)(int)(param_8 + param_5 + param_10);
  pvVar4 = (void *)(((longlong)(int)(param_4 * param_6) - _Size_00) + param_3);
  if (0 < (int)param_7) {
    uVar6 = (ulonglong)param_7;
    do {
      memcpy(_Dst,_Src,_Size);
      _Dst = (void *)((longlong)_Dst + lVar7);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (0 < (int)param_9) {
    uVar6 = (ulonglong)param_9;
    do {
      memcpy(pvVar4,(void *)(((longlong)(int)((param_6 - 1) * param_4) - _Size_00) + param_3),_Size)
      ;
      pvVar4 = (void *)((longlong)pvVar4 + lVar7);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 145687010 FUN_145687010 body=468 status=ok
// SIG undefined FUN_145687010(void)

void FUN_145687010(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,
                  uint param_6,uint param_7,int param_8,uint param_9,int param_10)

{
  undefined2 uVar1;
  size_t _Size;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *_Src;
  void *_Dst;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  void *_Dst_00;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *_Src_00;
  
  param_3 = param_3 * 2;
  uVar7 = (ulonglong)param_8;
  _Src = (undefined2 *)(param_1 * 2);
  uVar4 = (ulonglong)param_6;
  _Size = (longlong)param_5 * 2;
  _Src_00 = (undefined2 *)(param_3 + uVar7 * -2);
  if (0 < (int)param_6) {
    puVar5 = _Src_00;
    do {
      if (uVar7 != 0) {
        uVar1 = *_Src;
        puVar6 = puVar5;
        for (uVar2 = uVar7 & 0x7fffffffffffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        }
      }
      memcpy(puVar5 + uVar7,_Src,_Size);
      if ((longlong)param_10 != 0) {
        uVar1 = _Src[(longlong)param_5 + -1];
        puVar6 = (undefined2 *)((longlong)puVar5 + ((_Size + param_3) - (longlong)_Src_00));
        for (lVar3 = (longlong)param_10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        }
      }
      _Src = _Src + param_2;
      puVar5 = puVar5 + param_4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar3 = (longlong)param_4 * 2;
  _Dst = (void *)(param_3 + ((longlong)(int)-(param_4 * param_7) - uVar7) * 2);
  _Dst_00 = (void *)(param_3 + ((longlong)(int)(param_4 * param_6) - uVar7) * 2);
  lVar8 = (longlong)(param_5 + param_8 + param_10);
  if (0 < (int)param_7) {
    uVar4 = (ulonglong)param_7;
    do {
      memcpy(_Dst,_Src_00,lVar8 * 2);
      _Dst = (void *)((longlong)_Dst + lVar3);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (0 < (int)param_9) {
    uVar4 = (ulonglong)param_9;
    do {
      memcpy(_Dst_00,(void *)(param_3 + ((longlong)(int)((param_6 - 1) * param_4) - uVar7) * 2),
             lVar8 * 2);
      _Dst_00 = (void *)((longlong)_Dst_00 + lVar3);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1456871f0 FUN_1456871f0 body=1433 status=ok
// SIG undefined FUN_1456871f0(void)

void FUN_1456871f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  size_t _Size;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_1 + 0x2a308);
  iVar2 = *(int *)(param_1 + 0x2a310);
  iVar12 = *(int *)(param_1 + 0xb64e8);
  *(undefined8 *)(param_1 + 0xcb768) = 1;
  iVar13 = 0;
  *(undefined8 *)(param_1 + 0xb64e0) = 0;
  *(undefined4 *)(param_1 + 0xcb764) = 0;
  *(undefined8 *)(param_1 + 0xcb788) = 0;
  *(undefined8 *)(param_1 + 0xb75f8) = 0;
  *(undefined8 *)(param_1 + 0xcb780) = 0;
  *(undefined4 *)(param_1 + 0xcb84c) = 0;
  *(undefined8 *)(param_1 + 0xcb948) = 0;
  *(undefined8 *)(param_1 + 0xcb9d8) = 0;
  *(undefined4 *)(param_1 + 0xcb9e4) = 0;
  *(undefined8 *)(param_1 + 0xcba60) = 0;
  *(undefined8 *)(param_1 + 0xcba68) = 0;
  *(undefined8 *)(param_1 + 0xcb9a0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xcb9a8) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xcb9e0) = 0;
  *(undefined1 *)(param_1 + 0xcb9e2) = 0;
  if (0 < *(int *)(param_1 + 0x2e5dc)) {
    puVar5 = (undefined4 *)(param_1 + 0xcb884);
    puVar7 = (undefined1 *)(param_1 + 0xcb790);
    iVar10 = iVar13;
    do {
      puVar5[-0xc] = 0;
      iVar10 = iVar10 + 1;
      *puVar5 = 0;
      puVar5[-0x78] = 0;
      puVar5[-0x6c] = 0;
      puVar5[-0x60] = 1;
      puVar5[-0x54] = 2;
      *puVar7 = 3;
      puVar5[-0x3b] = 8;
      puVar5[0xc] = *(undefined4 *)(param_1 + 0x2e5a0);
      puVar5[0x42] = 0xffffffff;
      puVar5[0x18] = 0;
      puVar5[0x4b] = 0;
      puVar5[0x24] = 0;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x2e5dc));
  }
  *(undefined4 *)(param_1 + 0xcb944) = 0x7fffffff;
  *(undefined8 *)(param_1 + 0xcb778) = 7;
  *(undefined8 *)(param_1 + 0xcb770) = 6;
  if ((*(int *)(param_1 + 0x2e658) == 0) && (*(int *)(param_1 + 0x2e56c) == 2)) {
    iVar10 = FUN_145466a50(param_1 + 0xb64f8,0x20,0x10,*(undefined4 *)(param_1 + 0x2a060),
                           *(undefined4 *)(param_1 + 0x2a064),*(undefined4 *)(param_1 + 0x2a068),
                           0xa0,*(undefined4 *)(param_1 + 0x2e4e8),0,0,0);
    if (iVar10 != 0) {
      FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate empty frame for multiple frame contexts"
                   );
    }
    memset(*(void **)(param_1 + 0xb6550),0x80,*(size_t *)(param_1 + 0xb6558));
  }
  if (0 < *(int *)(param_1 + 0x2e5dc)) {
    piVar11 = (int *)(param_1 + 0x2e628);
    do {
      iVar8 = 0;
      iVar10 = *(int *)(param_1 + 0x2e5e0);
      if (0 < iVar10) {
        do {
          lVar6 = (longlong)(iVar10 * iVar13 + iVar8);
          lVar9 = lVar6 * 0x1ab8;
          *(undefined4 *)(lVar9 + 0xb9050 + param_1) = 0;
          *(undefined8 *)(lVar9 + 0xb9078 + param_1) = 0;
          *(undefined4 *)(lVar9 + 0xb9058 + param_1) = 0;
          *(undefined4 *)(lVar9 + 0xb905c + param_1) = 2;
          *(undefined4 *)(lVar9 + 0xb769c + param_1) = *(undefined4 *)(param_1 + 0x2e5a8);
          *(undefined8 *)(lVar9 + 0xb7700 + param_1) = 0;
          *(undefined8 *)(lVar9 + 0xb7710 + param_1) = 0;
          *(undefined8 *)(lVar9 + 0xb76a0 + param_1) = 0;
          *(undefined8 *)(lVar9 + 0xb76b0 + param_1) = 0;
          *(undefined8 *)(lVar9 + 0xb76b8 + param_1) = 0;
          *(undefined8 *)(lVar9 + 0xb76e0 + param_1) = 0;
          *(undefined4 *)(lVar9 + 0xb7718 + param_1) = *(undefined4 *)(param_1 + 0x2e5a8);
          *(undefined4 *)(lVar9 + 0xb771c + param_1) = *(undefined4 *)(param_1 + 0x2e5ac);
          *(undefined8 *)(lVar9 + 0xb7630 + param_1) = 0x3ff0000000000000;
          *(undefined8 *)(lVar9 + 0xb7638 + param_1) = 0x3ff0000000000000;
          *(undefined8 *)(lVar9 + 0xb7640 + param_1) = 0x3ff0000000000000;
          *(undefined8 *)(lVar9 + 0xb7648 + param_1) = 0x3ff0000000000000;
          *(undefined8 *)(lVar9 + 0xb7650 + param_1) = 0x3ff0000000000000;
          iVar10 = *(int *)(param_1 + 0x2e57c);
          iVar3 = *(int *)(param_1 + 0x2e5e4 + lVar6 * 4);
          *(int *)(lVar9 + 0xb78d0 + param_1) = iVar3;
          if (iVar10 == 1) {
            *(undefined4 *)(lVar9 + 0xb7614 + param_1) = *(undefined4 *)(param_1 + 0x2e5a8);
            *(undefined4 *)(lVar9 + 0xb76ac + param_1) = *(undefined4 *)(param_1 + 0x2e5a8);
            *(undefined4 *)(lVar9 + 0xb76a8 + param_1) = *(undefined4 *)(param_1 + 0x2e5a8);
          }
          else {
            *(undefined4 *)(lVar9 + 0xb7610 + param_1) = *(undefined4 *)(param_1 + 0x2e5ac);
            *(undefined4 *)(lVar9 + 0xb7614 + param_1) = *(undefined4 *)(param_1 + 0x2e5ac);
            *(int *)(lVar9 + 0xb76a8 + param_1) =
                 (*(int *)(param_1 + 0x2e5ac) + *(int *)(param_1 + 0x2e5a8)) / 2;
            *(int *)(lVar9 + 0xb76ac + param_1) =
                 (*(int *)(param_1 + 0x2e5ac) + *(int *)(param_1 + 0x2e5a8)) / 2;
            iVar4 = iVar12 + 1;
            iVar10 = iVar12;
            if (*piVar11 == 0) {
              iVar4 = iVar12;
              iVar10 = -1;
            }
            iVar12 = iVar4;
            *(int *)(lVar9 + 0xb9068 + param_1) = iVar10;
            *(undefined4 *)(lVar9 + 0xb906c + param_1) = 0xffffffff;
          }
          lVar6 = ((longlong)iVar3 * *(longlong *)(param_1 + 0x2e588)) / 1000;
          *(longlong *)(lVar9 + 0xb76c0 + param_1) = lVar6;
          *(longlong *)(lVar9 + 0xb76c8 + param_1) = lVar6;
          if ((1 < *(int *)(param_1 + 0x2e5dc)) && (iVar8 == 0)) {
            *(undefined4 *)(lVar9 + 0xb9080 + param_1) = 0;
            *(undefined4 *)(lVar9 + 0xb90a8 + param_1) = 0;
            *(undefined8 *)(lVar9 + 0xb90a0 + param_1) = 0;
            _Size = (size_t)(iVar2 * iVar1);
            lVar6 = FUN_14518ef70(_Size);
            *(longlong *)(lVar9 + 0xb9088 + param_1) = lVar6;
            if (lVar6 == 0) {
              FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate lc->map");
            }
            memset(*(void **)(lVar9 + 0xb9088 + param_1),0,_Size);
            lVar6 = FUN_14518ef70(_Size);
            *(longlong *)(lVar9 + 0xb9090 + param_1) = lVar6;
            if (lVar6 == 0) {
              FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate lc->last_coded_q_map");
            }
            memset(*(void **)(lVar9 + 0xb9090 + param_1),0xff,_Size);
            lVar6 = FUN_14518ef70(_Size);
            *(longlong *)(lVar9 + 0xb9098 + param_1) = lVar6;
            if (lVar6 == 0) {
              FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate lc->consec_zero_mv");
            }
            memset(*(void **)(lVar9 + 0xb9098 + param_1),0,_Size);
          }
          iVar10 = *(int *)(param_1 + 0x2e5e0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar10);
      }
      iVar13 = iVar13 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x2e5dc));
  }
  if (((*(int *)(param_1 + 0xb64ec) < 2) || (*(int *)(param_1 + 0x2e57c) != 1)) && (iVar12 < 8)) {
    *(int *)(param_1 + 0xb906c) = iVar12;
  }
  return;
}



// FUNCTION 145687790 FUN_145687790 body=966 status=ok
// SIG undefined FUN_145687790(void)

void FUN_145687790(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  float fVar15;
  
  iVar8 = 0;
  iVar9 = 0;
  *(int *)(param_1 + 0xcb6a0) = *(int *)(param_1 + 0x2e6b4);
  if (*(int *)(param_1 + 0x2e6b4) == 0) {
    iVar5 = *(int *)(param_1 + 0xb64ec);
    if ((iVar5 < 2) || (*(int *)(param_1 + 0x2e57c) != 1)) {
      iVar5 = *(int *)(param_1 + 0xb64e8);
    }
    lVar2 = (longlong)iVar5;
    if (0 < iVar5) {
      piVar4 = (int *)(param_1 + 0x2e63c);
      plVar6 = (longlong *)(param_1 + 0xb7728);
      do {
        iVar5 = piVar4[-0x16];
        *(int *)(plVar6 + 0x35) = iVar5;
        fVar15 = (float)iVar5 / (float)param_2;
        plVar6[-1] = (longlong)((float)*(longlong *)(param_1 + 0xb4398) * fVar15);
        *plVar6 = (longlong)((float)*(longlong *)(param_1 + 0xb43a0) * fVar15);
        lVar12 = (longlong)((float)*(longlong *)(param_1 + 0xb43a8) * fVar15);
        plVar6[1] = lVar12;
        lVar3 = plVar6[-0xc];
        if (lVar12 <= plVar6[-0xc]) {
          lVar3 = lVar12;
        }
        plVar6[-0xc] = lVar3;
        lVar3 = plVar6[-0xd];
        if (lVar12 <= plVar6[-0xd]) {
          lVar3 = lVar12;
        }
        plVar6[-0xd] = lVar3;
        if ((*(int *)(param_1 + 0xb64ec) < 2) || (*(int *)(param_1 + 0x2e57c) != 1)) {
          dVar14 = *(double *)(param_1 + 0xb4548);
        }
        else {
          dVar14 = *(double *)(param_1 + 0xb4548) / (double)*piVar4;
        }
        plVar6[0x36] = (longlong)dVar14;
        piVar4 = piVar4 + 1;
        *(int *)(plVar6 + -0x13) = (int)((double)iVar5 / dVar14);
        *(undefined4 *)(plVar6 + -0x12) = *(undefined4 *)(param_1 + 0xb4310);
        *(undefined4 *)(plVar6 + -2) = *(undefined4 *)(param_1 + 0xb4390);
        *(undefined4 *)((longlong)plVar6 + -0xc) = *(undefined4 *)(param_1 + 0xb4394);
        plVar6 = plVar6 + 0x357;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (0 < *(int *)(param_1 + 0x2e5dc)) {
    iVar5 = *(int *)(param_1 + 0x2e5e0);
    iVar13 = iVar8;
    do {
      iVar10 = iVar8;
      if (0 < iVar5) {
        do {
          iVar11 = iVar10 + 1;
          lVar2 = (longlong)(iVar10 + iVar5 * iVar13);
          *(undefined4 *)(lVar2 * 0x1ab8 + 0xb78d0 + param_1) =
               *(undefined4 *)(param_1 + 0x2e5e4 + lVar2 * 4);
          iVar5 = *(int *)(param_1 + 0x2e5e0);
          iVar10 = iVar11;
        } while (iVar11 < iVar5);
      }
      iVar10 = iVar9;
      if (-1 < iVar5 + -1) {
        iVar10 = iVar5 + -1;
      }
      lVar2 = (longlong)(iVar5 * iVar13 + iVar10);
      uVar1 = *(undefined4 *)(param_1 + 0x2e5e4 + lVar2 * 4);
      *(undefined4 *)(lVar2 * 0x1ab8 + 0xb78d0 + param_1) = uVar1;
      iVar5 = *(int *)(param_1 + 0x2e5e0);
      if (0 < iVar5) {
        piVar4 = (int *)(param_1 + 0x2e63c);
        iVar10 = iVar8;
        do {
          lVar12 = (longlong)(iVar10 + iVar5 * iVar13) * 0x1ab8;
          iVar5 = *(int *)(lVar12 + 0xb78d0 + param_1);
          *(undefined4 *)(lVar12 + 0xb78d4 + param_1) = uVar1;
          fVar15 = (float)iVar5 / (float)param_2;
          *(longlong *)(lVar12 + 0xb7720 + param_1) =
               (longlong)((float)*(longlong *)(param_1 + 0xb4398) * fVar15);
          *(longlong *)(lVar12 + 0xb7728 + param_1) =
               (longlong)((float)*(longlong *)(param_1 + 0xb43a0) * fVar15);
          lVar2 = *(longlong *)(lVar12 + 0xb76c8 + param_1);
          lVar3 = (longlong)((float)*(longlong *)(param_1 + 0xb43a8) * fVar15);
          *(longlong *)(lVar12 + 0xb7730 + param_1) = lVar3;
          if (lVar3 <= lVar2) {
            lVar2 = lVar3;
          }
          *(longlong *)(lVar12 + 0xb76c8 + param_1) = lVar2;
          lVar2 = *(longlong *)(lVar12 + 0xb76c0 + param_1);
          if (lVar3 <= lVar2) {
            lVar2 = lVar3;
          }
          iVar10 = iVar10 + 1;
          *(longlong *)(lVar12 + 0xb76c0 + param_1) = lVar2;
          dVar14 = *(double *)(param_1 + 0xb4548) / (double)*piVar4;
          *(double *)(lVar12 + 0xb78d8 + param_1) = dVar14;
          *(int *)(lVar12 + 0xb7690 + param_1) = (int)((double)iVar5 / dVar14);
          *(undefined4 *)(lVar12 + 0xb7698 + param_1) = *(undefined4 *)(param_1 + 0xb4310);
          *(undefined4 *)(lVar12 + 0xb7718 + param_1) = *(undefined4 *)(param_1 + 0xb4390);
          *(undefined4 *)(lVar12 + 0xb771c + param_1) = *(undefined4 *)(param_1 + 0xb4394);
          iVar5 = *(int *)(param_1 + 0x2e5e0);
          piVar4 = piVar4 + 1;
        } while (iVar10 < iVar5);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x2e5dc));
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x2e5dc);
  if (0 < (int)*(uint *)(param_1 + 0x2e5dc)) {
    piVar4 = (int *)(param_1 + 0x2e5e0 + (longlong)*(int *)(param_1 + 0x2e5e0) * 4);
    do {
      iVar9 = iVar8 + 1;
      if (*piVar4 < 1) {
        iVar9 = iVar8;
      }
      piVar4 = piVar4 + *(int *)(param_1 + 0x2e5e0);
      uVar7 = uVar7 - 1;
      iVar8 = iVar9;
    } while (uVar7 != 0);
  }
  *(uint *)(param_1 + 0xcba68) = (uint)(iVar9 == 1);
  return;
}



// FUNCTION 145687b60 FUN_145687b60 body=208 status=ok
// SIG undefined FUN_145687b60(void)

void FUN_145687b60(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  
  lVar4 = FUN_145689a10();
  iVar1 = *(int *)(param_1 + 0xb64e4);
  iVar2 = *(int *)(param_1 + 0xb64ec);
  iVar3 = *(int *)(param_1 + 0xb64e0);
  dVar6 = *(double *)(param_1 + 0xb4548) / (double)*(int *)(param_1 + 0x2e63c + (longlong)iVar1 * 4)
  ;
  *(double *)(lVar4 + 0x2d8) = dVar6;
  iVar5 = (int)((double)*(int *)(lVar4 + 0x2d0) / dVar6);
  *(int *)(lVar4 + 0x90) = iVar5;
  *(undefined4 *)(lVar4 + 0x98) = *(undefined4 *)(param_1 + 0xb4310);
  if (iVar1 == 0) {
    *(int *)(lVar4 + 0x2e0) = iVar5;
    return;
  }
  dVar6 = (double)round((double)(*(int *)(lVar4 + 0x2d0) -
                                *(int *)(param_1 + 0x2e5e0 + (longlong)(iVar2 * iVar3 + iVar1) * 4))
                        / (dVar6 - *(double *)(param_1 + 0xb4548) /
                                   (double)*(int *)(param_1 + 0x2e638 + (longlong)iVar1 * 4)));
  *(int *)(lVar4 + 0x2e0) = (int)dVar6;
  return;
}



// FUNCTION 145687c30 FUN_145687c30 body=510 status=ok
// SIG undefined FUN_145687c30(void)

void FUN_145687c30(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar9 = param_1;
  puVar7 = (undefined8 *)FUN_145689a10();
  uVar1 = *(undefined4 *)(lVar9 + 0xb42f0);
  uVar2 = *(undefined4 *)(lVar9 + 0xb42ec);
  uVar3 = *(undefined4 *)(lVar9 + 0xb450c);
  lVar8 = 5;
  puVar5 = (undefined8 *)(lVar9 + 0xb4278);
  puVar6 = puVar7;
  do {
    puVar11 = puVar6;
    puVar10 = puVar5;
    uVar4 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar4;
    uVar4 = puVar11[3];
    puVar10[2] = puVar11[2];
    puVar10[3] = uVar4;
    uVar4 = puVar11[5];
    puVar10[4] = puVar11[4];
    puVar10[5] = uVar4;
    uVar4 = puVar11[7];
    puVar10[6] = puVar11[6];
    puVar10[7] = uVar4;
    uVar4 = puVar11[9];
    puVar10[8] = puVar11[8];
    puVar10[9] = uVar4;
    uVar4 = puVar11[0xb];
    puVar10[10] = puVar11[10];
    puVar10[0xb] = uVar4;
    uVar4 = puVar11[0xd];
    puVar10[0xc] = puVar11[0xc];
    puVar10[0xd] = uVar4;
    uVar4 = puVar11[0xf];
    puVar10[0xe] = puVar11[0xe];
    puVar10[0xf] = uVar4;
    lVar8 = lVar8 + -1;
    puVar5 = puVar10 + 0x10;
    puVar6 = puVar11 + 0x10;
  } while (lVar8 != 0);
  uVar4 = puVar11[0x11];
  puVar10[0x10] = puVar11[0x10];
  puVar10[0x11] = uVar4;
  uVar4 = puVar11[0x13];
  puVar10[0x12] = puVar11[0x12];
  puVar10[0x13] = uVar4;
  uVar4 = puVar11[0x15];
  puVar10[0x14] = puVar11[0x14];
  puVar10[0x15] = uVar4;
  uVar4 = puVar11[0x17];
  puVar10[0x16] = puVar11[0x16];
  puVar10[0x17] = uVar4;
  uVar4 = puVar11[0x19];
  puVar10[0x18] = puVar11[0x18];
  puVar10[0x19] = uVar4;
  memcpy((void *)(param_1 + 0xb4cd8),puVar7 + 0x60,0x1740);
  *(longlong *)(param_1 + 0x2e548) = (longlong)*(int *)(puVar7 + 0x5a);
  *(undefined8 *)(param_1 + 0x2e6d0) = puVar7[0x34c];
  if (((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0x2e56c) == 0)) &&
     (*(byte *)((longlong)puVar7 + 0x1aac) != 0)) {
    *(uint *)(param_1 + 0x2e558) = (uint)*(byte *)((longlong)puVar7 + 0x1aac);
  }
  *(undefined4 *)(param_1 + 0xcef20) = *(undefined4 *)(puVar7 + 0x356);
  if ((1 < *(int *)(param_1 + 0xb64ec)) || (1 < *(int *)(param_1 + 0xb64e8))) {
    *(undefined4 *)(param_1 + 0xb42f0) = uVar1;
    *(undefined4 *)(param_1 + 0xb42ec) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xb450c) = uVar3;
  if (((*(int *)(param_1 + 0x2e5b4) == 3) && (1 < *(int *)(param_1 + 0xb64e8))) &&
     (*(int *)(param_1 + 0xb64e4) == 0)) {
    lVar9 = *(longlong *)(param_1 + 0xb4980);
    uVar4 = *(undefined8 *)(lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x20) = puVar7[0x351];
    puVar7[0x351] = uVar4;
    uVar4 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = puVar7[0x352];
    puVar7[0x352] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xcd3e8);
    *(undefined8 *)(param_1 + 0xcd3e8) = puVar7[0x353];
    puVar7[0x353] = uVar4;
    *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(puVar7 + 0x350);
    *(undefined4 *)(lVar9 + 0x14) = *(undefined4 *)(puVar7 + 0x354);
    *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)((longlong)puVar7 + 0x1aa4);
    *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(puVar7 + 0x355);
  }
  return;
}



// FUNCTION 145687e30 FUN_145687e30 body=386 status=ok
// SIG undefined FUN_145687e30(void)

void FUN_145687e30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar8 = param_1;
  puVar6 = (undefined8 *)FUN_145689a10();
  lVar7 = 5;
  puVar4 = (undefined8 *)(lVar8 + 0xb4278);
  puVar5 = puVar6;
  do {
    puVar10 = puVar5;
    puVar9 = puVar4;
    uVar1 = puVar9[1];
    *puVar10 = *puVar9;
    puVar10[1] = uVar1;
    uVar1 = puVar9[3];
    puVar10[2] = puVar9[2];
    puVar10[3] = uVar1;
    uVar1 = puVar9[5];
    puVar10[4] = puVar9[4];
    puVar10[5] = uVar1;
    uVar1 = puVar9[7];
    puVar10[6] = puVar9[6];
    puVar10[7] = uVar1;
    uVar1 = puVar9[9];
    puVar10[8] = puVar9[8];
    puVar10[9] = uVar1;
    uVar1 = puVar9[0xb];
    puVar10[10] = puVar9[10];
    puVar10[0xb] = uVar1;
    uVar1 = puVar9[0xd];
    puVar10[0xc] = puVar9[0xc];
    puVar10[0xd] = uVar1;
    uVar1 = puVar9[0xf];
    puVar10[0xe] = puVar9[0xe];
    puVar10[0xf] = uVar1;
    lVar7 = lVar7 + -1;
    puVar4 = puVar9 + 0x10;
    puVar5 = puVar10 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar9[0x11];
  puVar10[0x10] = puVar9[0x10];
  puVar10[0x11] = uVar1;
  uVar1 = puVar9[0x13];
  puVar10[0x12] = puVar9[0x12];
  puVar10[0x13] = uVar1;
  uVar1 = puVar9[0x15];
  puVar10[0x14] = puVar9[0x14];
  puVar10[0x15] = uVar1;
  uVar1 = puVar9[0x17];
  puVar10[0x16] = puVar9[0x16];
  puVar10[0x17] = uVar1;
  uVar1 = puVar9[0x19];
  puVar10[0x18] = puVar9[0x18];
  puVar10[0x19] = uVar1;
  memcpy(puVar6 + 0x60,(void *)(lVar8 + 0xb4cd8),0x1740);
  *(undefined4 *)(puVar6 + 0x5a) = *(undefined4 *)(param_1 + 0x2e548);
  puVar6[0x34c] = *(undefined8 *)(param_1 + 0x2e6d0);
  if (((*(int *)(param_1 + 0x2e5b4) == 3) && (1 < *(int *)(param_1 + 0xb64e8))) &&
     (*(int *)(param_1 + 0xb64e4) == 0)) {
    lVar8 = *(longlong *)(param_1 + 0xb4980);
    uVar1 = puVar6[0x351];
    uVar2 = puVar6[0x352];
    uVar3 = puVar6[0x353];
    puVar6[0x351] = *(undefined8 *)(lVar8 + 0x20);
    *(undefined8 *)(lVar8 + 0x20) = uVar1;
    puVar6[0x352] = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    puVar6[0x353] = *(undefined8 *)(param_1 + 0xcd3e8);
    *(undefined8 *)(param_1 + 0xcd3e8) = uVar3;
    *(undefined4 *)(puVar6 + 0x350) = *(undefined4 *)(lVar8 + 8);
    *(undefined4 *)(puVar6 + 0x354) = *(undefined4 *)(lVar8 + 0x14);
    *(undefined4 *)((longlong)puVar6 + 0x1aa4) = *(undefined4 *)(lVar8 + 0x18);
    *(undefined4 *)(puVar6 + 0x355) = *(undefined4 *)(lVar8 + 0x7c);
  }
  return;
}



// FUNCTION 145687fc0 FUN_145687fc0 body=125 status=ok
// SIG undefined FUN_145687fc0(void)

void FUN_145687fc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb64e8)) {
    lVar3 = 0;
    do {
      *(int *)(param_1 + 0xb64e0) = iVar2;
      FUN_14567d140(param_1);
      lVar1 = (longlong)iVar2;
      iVar2 = iVar2 + 1;
      *(longlong *)(lVar3 + 0xb79d0 + param_1) = lVar1;
      *(longlong *)(lVar3 + 0xb7b98 + param_1) = lVar1;
      lVar3 = lVar3 + 0x1ab8;
    } while (iVar2 < *(int *)(param_1 + 0xb64e8));
    *(undefined4 *)(param_1 + 0xb64e0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb64e0) = 0;
  return;
}



// FUNCTION 145688040 FUN_145688040 body=118 status=ok
// SIG undefined FUN_145688040(void)

void FUN_145688040(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_5 != (int *)0x0) && (param_6 != (int *)0x0)) && (param_4 != 0)) {
    uVar3 = (param_1 * param_3) / param_4;
    uVar1 = (param_2 * param_3) / param_4;
    uVar2 = uVar3 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    *param_5 = uVar2 + uVar3;
    uVar2 = uVar1 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    *param_6 = uVar2 + uVar1;
  }
  return;
}



// FUNCTION 1456880c0 FUN_1456880c0 body=59 status=ok
// SIG undefined FUN_1456880c0(void)

void FUN_1456880c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(*(int *)(param_1 + 0xb64ec) * *(int *)(param_1 + 0xb64e0)) * 0x1ab8;
  piVar1 = (int *)(lVar2 + 0xb9050 + param_1);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(lVar2 + 0xb9058 + param_1);
  *piVar1 = *piVar1 + 1;
  if (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -1) {
    *(int *)(param_1 + 0xcb780) = *(int *)(param_1 + 0xcb780) + 1;
  }
  return;
}



// FUNCTION 145688100 FUN_145688100 body=138 status=ok
// SIG undefined FUN_145688100(void)

longlong FUN_145688100(longlong param_1,int *param_2,int param_3)

{
  longlong lVar1;
  
  if ((param_2[1] != 0) && ((param_3 != 0 || (param_2[1] == *param_2 + -1)))) {
    lVar1 = FUN_145613da0(param_2,0);
    if ((lVar1 != 0) && (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -1)) {
      FUN_145613d50(param_2,param_3);
    }
    return lVar1;
  }
  return 0;
}



// FUNCTION 145688190 FUN_145688190 body=744 status=ok
// SIG undefined FUN_145688190(void)

void FUN_145688190(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(int *)(param_1 + 0xb64e0);
  *(undefined4 *)(param_1 + 0xcb6d4 + lVar5 * 4) = *(undefined4 *)(param_1 + 0x2f698);
  *(undefined4 *)(param_1 + 0xcb704 + lVar5 * 4) = *(undefined4 *)(param_1 + 0x2f69c);
  *(undefined4 *)(param_1 + 0xcb734 + lVar5 * 4) = *(undefined4 *)(param_1 + 0x2f6a0);
  if (*(int *)(param_1 + 0xcb6a0) != 1) {
    piVar1 = (int *)(param_1 + 0x2f6c4);
    uVar4 = *(uint *)(param_1 + 0xcb958 + lVar5 * 4) & 0xfffffffe;
    iVar2 = *(int *)(param_1 + 0xcb6d4 + lVar5 * 4);
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4;
    if ((((iVar2 == 0) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 0 && (*(int *)(param_1 + 0x2f6c8) != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 0 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      uVar4 = uVar4 | 1;
    }
    piVar3 = (int *)(param_1 + 0x2f6c8);
    uVar4 = uVar4 & 0xfffffffd;
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4;
    if ((((iVar2 == 1) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 1 && (*piVar3 != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 1 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      uVar4 = uVar4 | 2;
    }
    uVar4 = uVar4 & 0xfffffffb;
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4;
    if ((((iVar2 == 2) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 2 && (*piVar3 != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 2 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      uVar4 = uVar4 | 4;
    }
    uVar4 = uVar4 & 0xfffffff7;
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4;
    if ((((iVar2 == 3) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 3 && (*piVar3 != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 3 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      uVar4 = uVar4 | 8;
    }
    uVar4 = uVar4 & 0xffffffef;
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4;
    if ((((iVar2 == 4) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 4 && (*piVar3 != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 4 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      uVar4 = uVar4 | 0x10;
    }
    uVar4 = uVar4 & 0xffffffdf;
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4;
    if ((((iVar2 == 5) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 5 && (*piVar3 != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 5 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      uVar4 = uVar4 | 0x20;
    }
    uVar4 = uVar4 & 0xffffffbf;
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4;
    if ((((iVar2 == 6) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 6 && (*piVar3 != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 6 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      uVar4 = uVar4 | 0x40;
    }
    *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4 & 0xffffff7f;
    if ((((iVar2 == 7) && (*piVar1 != 0)) ||
        ((*(int *)(param_1 + 0xcb704 + lVar5 * 4) == 7 && (*piVar3 != 0)))) ||
       ((*(int *)(param_1 + 0xcb734 + lVar5 * 4) == 7 && (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      *(uint *)(param_1 + 0xcb958 + lVar5 * 4) = uVar4 & 0xffffff7f | 0x80;
    }
  }
  *(undefined1 *)(lVar5 + 0xcb97b + param_1) = *(undefined1 *)(param_1 + 0x2f6c4);
  *(undefined1 *)(lVar5 + 0xcb980 + param_1) = *(undefined1 *)(param_1 + 0x2f6c8);
  *(undefined1 *)(lVar5 + 0xcb985 + param_1) = *(undefined1 *)(param_1 + 0x2f6cc);
  *(byte *)(lVar5 + 0xcb96c + param_1) = *(byte *)(param_1 + 0xb46a8) & 1;
  *(byte *)(lVar5 + 0xcb971 + param_1) = *(byte *)(param_1 + 0xb46a8) & 2;
  *(byte *)(lVar5 + 0xcb976 + param_1) = *(byte *)(param_1 + 0xb46a8) & 4;
  return;
}



// FUNCTION 145688480 FUN_145688480 body=1927 status=ok
// SIG undefined FUN_145688480(void)

byte FUN_145688480(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  
  iVar13 = 0;
  iVar20 = 0;
  *(undefined4 *)(param_1 + 0xcb84c) = 0;
  if (((*(int *)(param_1 + 0xcb94c) != 1) || (1 < *(int *)(param_1 + 0xb64e8) - 2U)) ||
     (uVar5 = 1, 3 < *(int *)(param_1 + 0xb64ec))) {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xcba64) = uVar5;
  if (1 < *(int *)(param_1 + 0xb64e8)) {
    *(undefined4 *)(param_1 + 0xcb788) = 1;
    *(undefined4 *)(param_1 + 0xcb78c) = 1;
  }
  *(undefined4 *)(param_1 + 0xcb764) = 1;
  *(undefined4 *)(param_1 + 0xcb7b8 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) =
       *(undefined4 *)(param_1 + 0x2a314);
  *(undefined4 *)(param_1 + 0xcb7e8 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) =
       *(undefined4 *)(param_1 + 0x2a308);
  *(undefined4 *)(param_1 + 0xcb818 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) =
       *(undefined4 *)(param_1 + 0x2a310);
  iVar10 = *(int *)(param_1 + 0xcb9fc);
  if (*(int *)(param_1 + 0xb64f0) == iVar10) {
    iVar16 = *(int *)(param_1 + 0xb64e8);
    if (0 < iVar16) {
      puVar7 = (undefined4 *)(param_1 + 0xcb914);
      iVar10 = iVar13;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        iVar16 = *(int *)(param_1 + 0xb64e8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar16);
      iVar10 = *(int *)(param_1 + 0xcb9fc);
    }
    if ((*(int *)(param_1 + 0xcb948) == 3) && (iVar16 = iVar16 + -1, iVar10 <= iVar16)) {
      do {
        lVar14 = 5;
        lVar17 = (longlong)(iVar16 * *(int *)(param_1 + 0xb64ec) + *(int *)(param_1 + 0xb64e4)) *
                 0x1ab8;
        puVar3 = (undefined8 *)(param_1 + 0xb4278);
        puVar4 = (undefined8 *)(param_1 + 0xb7600 + lVar17);
        do {
          puVar11 = puVar4;
          puVar8 = puVar3;
          uVar2 = puVar11[1];
          *puVar8 = *puVar11;
          puVar8[1] = uVar2;
          uVar2 = puVar11[3];
          puVar8[2] = puVar11[2];
          puVar8[3] = uVar2;
          uVar2 = puVar11[5];
          puVar8[4] = puVar11[4];
          puVar8[5] = uVar2;
          uVar2 = puVar11[7];
          puVar8[6] = puVar11[6];
          puVar8[7] = uVar2;
          uVar2 = puVar11[9];
          puVar8[8] = puVar11[8];
          puVar8[9] = uVar2;
          uVar2 = puVar11[0xb];
          puVar8[10] = puVar11[10];
          puVar8[0xb] = uVar2;
          uVar2 = puVar11[0xd];
          puVar8[0xc] = puVar11[0xc];
          puVar8[0xd] = uVar2;
          uVar2 = puVar11[0xf];
          puVar8[0xe] = puVar11[0xe];
          puVar8[0xf] = uVar2;
          lVar14 = lVar14 + -1;
          puVar3 = puVar8 + 0x10;
          puVar4 = puVar11 + 0x10;
        } while (lVar14 != 0);
        uVar2 = puVar11[0x11];
        puVar8[0x10] = puVar11[0x10];
        puVar8[0x11] = uVar2;
        uVar2 = puVar11[0x13];
        puVar8[0x12] = puVar11[0x12];
        puVar8[0x13] = uVar2;
        uVar2 = puVar11[0x15];
        puVar8[0x14] = puVar11[0x14];
        puVar8[0x15] = uVar2;
        uVar2 = puVar11[0x17];
        puVar8[0x16] = puVar11[0x16];
        puVar8[0x17] = uVar2;
        uVar2 = puVar11[0x19];
        puVar8[0x18] = puVar11[0x18];
        puVar8[0x19] = uVar2;
        *(longlong *)(param_1 + 0x2e548) = (longlong)*(int *)(lVar17 + 0xb78d0 + param_1);
        iVar10 = FUN_145616d20(param_1);
        if (iVar10 != 0) {
          if (*(int *)(param_1 + 0xcb9fc) <= iVar16) {
            puVar7 = (undefined4 *)(param_1 + ((longlong)iVar16 + 0x32e45) * 4);
            do {
              *puVar7 = 1;
              puVar7 = puVar7 + -1;
              iVar16 = iVar16 + -1;
            } while (*(int *)(param_1 + 0xcb9fc) <= iVar16);
          }
          break;
        }
        iVar16 = iVar16 + -1;
      } while (*(int *)(param_1 + 0xcb9fc) <= iVar16);
    }
  }
  iVar10 = *(int *)(param_1 + 0xcb6a0);
  if (iVar10 == 3) {
    FUN_145689b80(param_1);
  }
  else if (iVar10 == 0) {
    FUN_145689f40(param_1);
  }
  else if (iVar10 == 2) {
    FUN_145689dc0(param_1);
  }
  else if ((iVar10 == 1) && (*(int *)(param_1 + 0xcb9e4) != 0)) {
    lVar14 = (longlong)*(int *)(param_1 + 0xb64f0);
    *(int *)(param_1 + 0xb64e0) = *(int *)(param_1 + 0xb64f0);
    *(undefined4 *)(param_1 + 0xb64e4) = *(undefined4 *)(param_1 + 0xcb9e8 + lVar14 * 4);
    *(undefined4 *)(param_1 + 0x2f6d0) = 1;
    *(undefined4 *)(param_1 + 0x2f698) = *(undefined4 *)(param_1 + 0xcb6d4 + lVar14 * 4);
    *(undefined4 *)(param_1 + 0x2f69c) = *(undefined4 *)(param_1 + 0xcb704 + lVar14 * 4);
    *(undefined4 *)(param_1 + 0x2f6a0) = *(undefined4 *)(param_1 + 0xcb734 + lVar14 * 4);
    *(undefined8 *)(param_1 + 0x2f6d4) = 0;
    *(undefined4 *)(param_1 + 0x2f6dc) = 0;
    *(undefined4 *)(param_1 + 0xb46a8) = 0;
    bVar21 = *(char *)(lVar14 + 0xcb96c + param_1) != '\0';
    if (bVar21) {
      *(undefined4 *)(param_1 + 0xb46a8) = 1;
    }
    uVar6 = (uint)bVar21;
    if (*(char *)(lVar14 + 0xcb971 + param_1) != '\0') {
      uVar6 = uVar6 | 2;
      *(uint *)(param_1 + 0xb46a8) = uVar6;
    }
    if (*(char *)(lVar14 + 0xcb976 + param_1) != '\0') {
      *(uint *)(param_1 + 0xb46a8) = uVar6 | 4;
    }
  }
  iVar10 = *(int *)(param_1 + 0xcb770);
  if (((*(int *)(param_1 + 0x2f698) == iVar10) || (*(int *)(param_1 + 0x2f69c) == iVar10)) ||
     (*(int *)(param_1 + 0x2f6a0) == iVar10)) {
    *(undefined4 *)(param_1 + 0xcb774) = 1;
  }
  iVar10 = *(int *)(param_1 + 0xcb778);
  if (((*(int *)(param_1 + 0x2f698) == iVar10) || (*(int *)(param_1 + 0x2f69c) == iVar10)) ||
     (*(int *)(param_1 + 0x2f6a0) == iVar10)) {
    *(undefined4 *)(param_1 + 0xcb77c) = 1;
  }
  *(undefined4 *)(param_1 + 0xcb76c) = 0;
  if (((*(int *)(param_1 + 0xcb768) != 0) && (*(int *)(param_1 + 0xcb774) == 0)) &&
     ((*(int *)(param_1 + 0xcb77c) == 0 &&
      ((((*(int *)(param_1 + 0xcb6a0) != 1 && (*(int *)(param_1 + 0xcb94c) != 0)) &&
        (*(int *)(param_1 + 0xb64e8) < 4)) &&
       ((*(int *)(param_1 + 0xb64ec) < 4 &&
        (*(int *)(param_1 + 0xb64e8) + -2 <= *(int *)(param_1 + 0xb64e0))))))))) {
    *(undefined4 *)(param_1 + 0xcb76c) = 1;
  }
  if (*(int *)(param_1 + 0xb64e0) == 0) {
    uVar12 = (ulonglong)*(uint *)(param_1 + 0xb64e8);
    *(undefined1 *)(param_1 + 0xcb9da) = 0;
    if (0 < (int)*(uint *)(param_1 + 0xb64e8)) {
      piVar9 = (int *)(param_1 + 0xcb9b0);
      do {
        if (*piVar9 != 0) {
          *(undefined1 *)(param_1 + 0xcb9da) = 1;
        }
        piVar9 = piVar9 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xcb9fc)) {
    *(undefined8 *)(param_1 + 0xcb884) = 0;
    *(undefined8 *)(param_1 + 0xcb88c) = 0;
    *(undefined8 *)(param_1 + 0xcb894) = 0;
    *(undefined8 *)(param_1 + 0xcb89c) = 0;
    *(undefined8 *)(param_1 + 0xcb8a4) = 0;
    *(undefined8 *)(param_1 + 0xcb8ac) = 0;
    if (*(int *)(param_1 + 0xcb6a0) != 1) {
      *(undefined8 *)(param_1 + 0xcb6d4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb6dc) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb6e4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb6ec) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb6f4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb6fc) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb704) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb70c) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb714) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb71c) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb724) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb72c) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb734) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb73c) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb744) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb74c) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb754) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb75c) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xcb958) = 0;
      *(undefined8 *)(param_1 + 0xcb960) = 0;
      *(undefined8 *)(param_1 + 0xcb968) = 0;
      *(undefined1 *)(param_1 + 0xcb970) = 0;
      *(undefined4 *)(param_1 + 0xcb971) = 0;
      *(undefined1 *)(param_1 + 0xcb975) = 0;
      *(undefined4 *)(param_1 + 0xcb976) = 0;
      *(undefined1 *)(param_1 + 0xcb97a) = 0;
      *(undefined4 *)(param_1 + 0xcb97b) = 0;
      *(undefined1 *)(param_1 + 0xcb97f) = 0;
      *(undefined4 *)(param_1 + 0xcb980) = 0;
      *(undefined1 *)(param_1 + 0xcb984) = 0;
      *(undefined4 *)(param_1 + 0xcb985) = 0;
      *(undefined1 *)(param_1 + 0xcb989) = 0;
    }
  }
  lVar14 = (longlong)
           (*(int *)(param_1 + 0xb64e0) * *(int *)(param_1 + 0xb64ec) + *(int *)(param_1 + 0xb64e4))
           * 0x1ab8 + 0xb64e0 + param_1;
  if ((*(int *)(param_1 + 0xcb6a0) != 1) || (*(int *)(param_1 + 0xcb9e4) != 0)) {
    uVar5 = FUN_1455cb810(*(undefined4 *)(lVar14 + 0x1404));
    *(undefined4 *)(lVar14 + 0x1238) = uVar5;
    uVar5 = FUN_1455cb810(*(undefined4 *)(lVar14 + 0x1408));
    *(undefined4 *)(&DAT_0000123c + lVar14) = uVar5;
    if (*(int *)(param_1 + 0xcefa8) != 0) {
      *(undefined4 *)(lVar14 + 0x1238) = *(undefined4 *)(param_1 + 0xb4390);
      *(undefined4 *)(&DAT_0000123c + lVar14) = *(undefined4 *)(param_1 + 0xb4394);
    }
  }
  if ((((*(int *)(param_1 + 0x2e5bc) == 2) && (*(int *)(param_1 + 0xcba68) == 1)) &&
      (iVar10 = *(int *)(param_1 + 0xb64e0), iVar10 == *(int *)(param_1 + 0xcb9fc))) &&
     (*(int *)(param_1 + 0xcd39c) != 0)) {
    iVar1 = *(int *)(lVar14 + 0x1414);
    iVar16 = *(int *)(lVar14 + 0x1418);
  }
  else {
    iVar1 = *(int *)(lVar14 + 0x140c);
    iVar16 = *(int *)(lVar14 + 0x1410);
    iVar10 = *(int *)(param_1 + 0xb64e0);
  }
  iVar15 = iVar13;
  if (iVar16 != 0) {
    uVar18 = (iVar1 * *(int *)(param_1 + 0x2e518)) / iVar16;
    uVar6 = (iVar1 * *(int *)(param_1 + 0x2e51c)) / iVar16;
    uVar19 = uVar18 & 0x80000001;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
    }
    iVar20 = uVar19 + uVar18;
    uVar18 = uVar6 & 0x80000001;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
    }
    iVar15 = uVar18 + uVar6;
  }
  if (iVar15 * iVar20 < 0x12c01) {
    *(undefined1 *)((longlong)iVar10 + 0xcb790 + param_1) = 1;
    iVar10 = *(int *)(param_1 + 0xb64e0);
  }
  if (iVar16 * 3 >> 2 < iVar1) {
    *(undefined4 *)(param_1 + 0xcb798 + (longlong)iVar10 * 4) = 0;
    iVar10 = *(int *)(param_1 + 0xb64e0);
  }
  iVar16 = *(int *)(param_1 + 0xb64e8);
  if (1 < iVar16) {
    if (0 < iVar16 + -1) {
      do {
        lVar14 = (longlong)(*(int *)(param_1 + 0xb64ec) * iVar13 + *(int *)(param_1 + 0xb64e4)) *
                 0x1ab8;
        iVar10 = *(int *)(lVar14 + 0xb78f0 + param_1);
        iVar1 = *(int *)(lVar14 + 0xb78ec + param_1);
        if ((iVar1 != iVar10 >> 1) && (((iVar1 != iVar10 >> 2 || (iVar13 != 0)) || (iVar16 != 3))))
        {
          *(undefined8 *)(param_1 + 0xcb788) = 0;
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar16 + -1);
    }
    iVar10 = *(int *)(param_1 + 0xb64e0);
    if ((0 < iVar10) && (*(int *)(param_1 + 0xcb880 + (longlong)iVar10 * 4) != 0)) {
      *(undefined8 *)(param_1 + 0xcb788) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xcb784) = 0;
  if ((((*(int *)(param_1 + 0x2a2e4) != 0) && (*(int *)(param_1 + 0x2f6d4) == 0)) &&
      (*(int *)(param_1 + 0x2f6d8) == 0)) && (*(int *)(param_1 + 0x2f6dc) == 0)) {
    *(undefined4 *)(param_1 + 0xcb784) = 1;
  }
  if ((*(int *)(param_1 + 0xcb6a0) == 1) &&
     (*(int *)(param_1 + 0xcb958 + (longlong)iVar10 * 4) != 0)) {
    *(undefined4 *)(param_1 + 0xcb784) = 0;
  }
  if (iVar10 == 0) {
    *(undefined8 *)(param_1 + 0xcb950) = 0;
  }
  if (((*(int *)(param_1 + 0xcb6a0) != 1) &&
      (*(int *)(param_1 + 0xcb854 + (longlong)iVar10 * 4) != 0)) &&
     ((iVar13 = *(int *)(param_1 + 0xcb98c + (longlong)iVar10 * 4), iVar13 != -1 &&
      (*(int *)((longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8 + 0xb9054 + param_1) == 0)))) {
    *(int *)(param_1 + 0x2f698) = iVar13;
  }
  iVar13 = FUN_14561ffa0(param_1,iVar20,iVar15);
  return -(iVar13 != 0) & 8;
}



// FUNCTION 145688c10 FUN_145688c10 body=160 status=ok
// SIG undefined FUN_145688c10(void)

void FUN_145688c10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2e5dc)) {
    do {
      iVar1 = *(int *)(param_1 + 0x2e5e0);
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          lVar4 = (longlong)(iVar1 * iVar3 + iVar2) * 0x1ab8;
          if (*(longlong *)(param_1 + 0xb9088 + lVar4) != 0) {
            FUN_14518f040();
          }
          if (*(longlong *)(param_1 + 0xb9090 + lVar4) != 0) {
            FUN_14518f040();
          }
          if (*(longlong *)(param_1 + 0xb9098 + lVar4) != 0) {
            FUN_14518f040();
          }
          iVar1 = *(int *)(param_1 + 0x2e5e0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2e5dc));
  }
  return;
}



// FUNCTION 145688cb0 FUN_145688cb0 body=832 status=ok
// SIG undefined FUN_145688cb0(void)

void FUN_145688cb0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0xb64e8)) {
    do {
      iVar7 = *(int *)(param_1 + 0xb64ec);
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          lVar11 = (longlong)(iVar7 * iVar13 + iVar9) * 0x1ab8;
          *(undefined4 *)(lVar11 + 0xb9050 + param_1) = 0;
          if (param_2 != 0) {
            *(undefined4 *)(lVar11 + 0xb9058 + param_1) = 0;
          }
          iVar7 = *(int *)(param_1 + 0xb64ec);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0xb64e8));
  }
  iVar13 = *(int *)(param_1 + 0xcb6a0);
  if (iVar13 == 3) {
    FUN_145689b80(param_1);
  }
  else if (iVar13 == 0) {
    FUN_145689f40(param_1);
  }
  else if (iVar13 == 2) {
    FUN_145689dc0(param_1);
  }
  lVar11 = FUN_145689a10(param_1);
  iVar13 = *(int *)(param_1 + 0xb64e4);
  iVar7 = *(int *)(param_1 + 0xb64ec);
  iVar9 = *(int *)(param_1 + 0xb64e0);
  dVar15 = *(double *)(param_1 + 0xb4548) /
           (double)*(int *)(param_1 + 0x2e63c + (longlong)iVar13 * 4);
  *(double *)(lVar11 + 0x2d8) = dVar15;
  iVar14 = (int)((double)*(int *)(lVar11 + 0x2d0) / dVar15);
  *(int *)(lVar11 + 0x90) = iVar14;
  *(undefined4 *)(lVar11 + 0x98) = *(undefined4 *)(param_1 + 0xb4310);
  if (iVar13 != 0) {
    dVar15 = (double)round((double)(*(int *)(lVar11 + 0x2d0) -
                                   *(int *)(param_1 + 0x2e5e0 +
                                           (longlong)(iVar7 * iVar9 + iVar13) * 4)) /
                           (dVar15 - *(double *)(param_1 + 0xb4548) /
                                     (double)*(int *)(param_1 + 0x2e638 + (longlong)iVar13 * 4)));
    iVar14 = (int)dVar15;
  }
  *(int *)(lVar11 + 0x2e0) = iVar14;
  puVar8 = (undefined8 *)FUN_145689a10(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb42f0);
  uVar2 = *(undefined4 *)(param_1 + 0xb42ec);
  uVar3 = *(undefined4 *)(param_1 + 0xb450c);
  lVar11 = 5;
  puVar5 = (undefined8 *)(param_1 + 0xb4278);
  puVar6 = puVar8;
  do {
    puVar12 = puVar6;
    puVar10 = puVar5;
    uVar4 = puVar12[1];
    *puVar10 = *puVar12;
    puVar10[1] = uVar4;
    uVar4 = puVar12[3];
    puVar10[2] = puVar12[2];
    puVar10[3] = uVar4;
    uVar4 = puVar12[5];
    puVar10[4] = puVar12[4];
    puVar10[5] = uVar4;
    uVar4 = puVar12[7];
    puVar10[6] = puVar12[6];
    puVar10[7] = uVar4;
    uVar4 = puVar12[9];
    puVar10[8] = puVar12[8];
    puVar10[9] = uVar4;
    uVar4 = puVar12[0xb];
    puVar10[10] = puVar12[10];
    puVar10[0xb] = uVar4;
    uVar4 = puVar12[0xd];
    puVar10[0xc] = puVar12[0xc];
    puVar10[0xd] = uVar4;
    uVar4 = puVar12[0xf];
    puVar10[0xe] = puVar12[0xe];
    puVar10[0xf] = uVar4;
    lVar11 = lVar11 + -1;
    puVar5 = puVar10 + 0x10;
    puVar6 = puVar12 + 0x10;
  } while (lVar11 != 0);
  uVar4 = puVar12[0x11];
  puVar10[0x10] = puVar12[0x10];
  puVar10[0x11] = uVar4;
  uVar4 = puVar12[0x13];
  puVar10[0x12] = puVar12[0x12];
  puVar10[0x13] = uVar4;
  uVar4 = puVar12[0x15];
  puVar10[0x14] = puVar12[0x14];
  puVar10[0x15] = uVar4;
  uVar4 = puVar12[0x17];
  puVar10[0x16] = puVar12[0x16];
  puVar10[0x17] = uVar4;
  uVar4 = puVar12[0x19];
  puVar10[0x18] = puVar12[0x18];
  puVar10[0x19] = uVar4;
  memcpy((void *)(param_1 + 0xb4cd8),puVar8 + 0x60,0x1740);
  *(longlong *)(param_1 + 0x2e548) = (longlong)*(int *)(puVar8 + 0x5a);
  *(undefined8 *)(param_1 + 0x2e6d0) = puVar8[0x34c];
  if (((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0x2e56c) == 0)) &&
     (*(byte *)((longlong)puVar8 + 0x1aac) != 0)) {
    *(uint *)(param_1 + 0x2e558) = (uint)*(byte *)((longlong)puVar8 + 0x1aac);
  }
  *(undefined4 *)(param_1 + 0xcef20) = *(undefined4 *)(puVar8 + 0x356);
  if ((1 < *(int *)(param_1 + 0xb64ec)) || (1 < *(int *)(param_1 + 0xb64e8))) {
    *(undefined4 *)(param_1 + 0xb42f0) = uVar1;
    *(undefined4 *)(param_1 + 0xb42ec) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xb450c) = uVar3;
  if (((*(int *)(param_1 + 0x2e5b4) == 3) && (1 < *(int *)(param_1 + 0xb64e8))) &&
     (*(int *)(param_1 + 0xb64e4) == 0)) {
    lVar11 = *(longlong *)(param_1 + 0xb4980);
    uVar4 = *(undefined8 *)(lVar11 + 0x20);
    *(undefined8 *)(lVar11 + 0x20) = puVar8[0x351];
    puVar8[0x351] = uVar4;
    uVar4 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = puVar8[0x352];
    puVar8[0x352] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xcd3e8);
    *(undefined8 *)(param_1 + 0xcd3e8) = puVar8[0x353];
    puVar8[0x353] = uVar4;
    *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(puVar8 + 0x350);
    *(undefined4 *)(lVar11 + 0x14) = *(undefined4 *)(puVar8 + 0x354);
    *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)((longlong)puVar8 + 0x1aa4);
    *(undefined4 *)(lVar11 + 0x7c) = *(undefined4 *)(puVar8 + 0x355);
  }
  return;
}



// FUNCTION 145688ff0 FUN_145688ff0 body=173 status=ok
// SIG undefined FUN_145688ff0(void)

void FUN_145688ff0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = param_1 + 0xb64e0;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xb64e8)) {
    do {
      iVar3 = *(int *)(param_1 + 0xb64ec);
      iVar6 = iVar7 + 1;
      lVar5 = (longlong)(iVar3 * iVar6) * 0x1ab8;
      iVar4 = *(int *)(lVar5 + -0x850 + lVar1);
      iVar2 = *(int *)(lVar5 + -0x908 + lVar1);
      if (((iVar4 * 3 >> 1 < iVar2) || (iVar2 < iVar4 >> 1)) && (iVar4 = 0, 0 < iVar3)) {
        do {
          iVar3 = iVar3 * iVar7 + iVar4;
          iVar4 = iVar4 + 1;
          lVar5 = (longlong)iVar3 * 0x1ab8 + lVar1;
          *(undefined8 *)(lVar5 + 0x11e8) = *(undefined8 *)(lVar5 + 0x1248);
          *(undefined8 *)(lVar5 + 0x11e0) = *(undefined8 *)(lVar5 + 0x1248);
          *(undefined8 *)(lVar5 + 0x1258) = 0;
          iVar3 = *(int *)(param_1 + 0xb64ec);
        } while (iVar4 < iVar3);
      }
      iVar7 = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0xb64e8));
  }
  return;
}



// FUNCTION 1456890a0 FUN_1456890a0 body=570 status=ok
// SIG undefined FUN_1456890a0(void)

void FUN_1456890a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  lVar5 = (longlong)*(int *)(param_1 + 0xb64e0);
  if (*(int *)(param_1 + 0xcb94c) == 2) {
    if (*(int *)((longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8 + 0xb9054 + param_1) == 0) {
      bVar7 = *(char *)(param_1 + 0xcb9da) == '\0';
      goto LAB_1456890e0;
    }
LAB_1456890e2:
    if (*(int *)(param_1 + 0xcb880 + lVar5 * 4) == 0) goto LAB_1456891ed;
  }
  else {
    bVar7 = *(int *)(param_1 + 0xcb94c) == 1;
LAB_1456890e0:
    if (!bVar7) goto LAB_1456890e2;
  }
  cVar3 = '\x01';
LAB_145689100:
  do {
    if (cVar3 == '\x01') {
      iVar1 = *(int *)(param_1 + 0x2f698);
    }
    else if (cVar3 == '\x02') {
      iVar1 = *(int *)(param_1 + 0x2f69c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x2f6a0);
    }
    if (((iVar1 != -1) && (iVar1 = *(int *)(param_1 + 0x2a088 + (longlong)iVar1 * 4), iVar1 != -1))
       && ((longlong)iVar1 * 0xe0 + *(longlong *)(param_1 + 0x2e4f0) + 0x58 != 0)) {
      if ((*(uint *)(&DAT_149df5460 + (longlong)cVar3 * 4) & *(uint *)(param_1 + 0xb46a8)) != 0) {
        lVar2 = (longlong)cVar3 * 0xb0;
        iVar1 = *(int *)(lVar2 + 0x2a028 + param_1);
        if ((((iVar1 != -1) && (*(int *)(lVar2 + 0x2a02c + param_1) != -1)) &&
            ((iVar1 != 0x4000 || (*(int *)(lVar2 + 0x2a02c + param_1) != 0x4000)))) &&
           (*(uint *)(param_1 + 0xb46a8) =
                 ~*(uint *)(&DAT_149df5460 + (longlong)cVar3 * 4) & *(uint *)(param_1 + 0xb46a8),
           *(int *)(param_1 + 0xcba64) == 0)) {
          if (cVar3 == '\x02') {
            cVar3 = '\x03';
            *(undefined4 *)(param_1 + 0x2f69c) = *(undefined4 *)(param_1 + 0x2f698);
            goto LAB_145689100;
          }
          if (cVar3 == '\x03') {
            *(undefined4 *)(param_1 + 0x2f6a0) = *(undefined4 *)(param_1 + 0x2f698);
            break;
          }
        }
      }
    }
    cVar3 = cVar3 + '\x01';
  } while (cVar3 < '\x04');
LAB_1456891ed:
  if ((*(int *)(param_1 + 0xcb6a0) != 1) && (*(int *)(param_1 + 0xcb94c) != 1)) {
    uVar6 = 1;
    do {
      cVar3 = (char)uVar6;
      lVar2 = uVar6 * 0xb0;
      iVar1 = *(int *)(lVar2 + 0x2a028 + param_1);
      if (((iVar1 != -1) && (*(int *)(lVar2 + 0x2a02c + param_1) != -1)) &&
         ((iVar1 != 0x4000 || (*(int *)(lVar2 + 0x2a02c + param_1) != 0x4000)))) {
        if (cVar3 == '\x01') {
          iVar1 = *(int *)(param_1 + 0x2f698);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x2f69c);
        }
        if ((((-1 < iVar1) &&
             ((uVar4 = 1 << ((byte)iVar1 & 0x1f), iVar1 != *(int *)(param_1 + 0xcb6d0 + lVar5 * 4)
              || ((*(uint *)(param_1 + 0xcb954 + lVar5 * 4) & uVar4) == 0)))) &&
            ((iVar1 != *(int *)(param_1 + 0xcb700 + lVar5 * 4) ||
             ((*(uint *)(param_1 + 0xb64e0 + (lVar5 + 0x551d) * 4) & uVar4) == 0)))) &&
           ((iVar1 != *(int *)(param_1 + 0xcb730 + lVar5 * 4) ||
            ((*(uint *)(param_1 + 0xb64e0 + (lVar5 + 0x551d) * 4) & uVar4) == 0)))) {
          *(uint *)(param_1 + 0xb46a8) = *(uint *)(param_1 + 0xb46a8) & (cVar3 == '\x01') - 3;
        }
      }
      uVar6 = (ulonglong)(byte)(cVar3 + 1U);
    } while ((char)(cVar3 + 1U) < '\x03');
  }
  return;
}



// FUNCTION 1456892e0 FUN_1456892e0 body=107 status=ok
// SIG undefined FUN_1456892e0(void)

void FUN_1456892e0(longlong param_1)

{
  if ((((*(int *)(param_1 + 0xcb6a0) == 1) || (*(int *)(param_1 + 0xcb94c) != 0)) ||
      (*(int *)(param_1 + 0xcb948) == 1)) &&
     (((*(int *)(param_1 + 0xcb76c) != 0 &&
       (*(int *)((longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8 + 0xb9054 + param_1) == 0)) &&
      (((uint)*(byte *)((longlong)*(int *)(param_1 + 0x2f69c) + 0xcb9a0 + param_1) !=
        *(uint *)(param_1 + 0xb64e0) ||
       (*(char *)((longlong)*(int *)(param_1 + 0x2f69c) + 0xcb9a8 + param_1) != '\0')))))) {
    *(undefined4 *)(param_1 + 0xcb76c) = 0;
  }
  return;
}



// FUNCTION 145689350 FUN_145689350 body=182 status=ok
// SIG undefined FUN_145689350(void)

void FUN_145689350(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8 + 0xb9054 + param_1) == 0) {
    if ((*(int *)(param_1 + 0xb64e0) == 0) && (*(char *)(param_1 + 0xcb9da) != '\0')) {
      FUN_145688cb0(param_1,*(int *)(param_1 + 0x2a2e4) == 0);
    }
    iVar1 = *(int *)(param_1 + 0xb64e0);
    if (((0 < iVar1) && (*(int *)(param_1 + 0xcb9b0 + (longlong)iVar1 * 4) != 0)) &&
       (*(uint *)(param_1 + 0xb46a8) = *(uint *)(param_1 + 0xb46a8) & 0xfffffffe,
       *(int *)(param_1 + 0xcb76c) != 0)) {
      *(undefined4 *)(param_1 + 0xcb76c) = 0;
      *(undefined4 *)(param_1 + 0xb42e4) = 0;
      *(undefined4 *)(param_1 + 0xb42d4) = 0;
      iVar2 = iVar1 + -1;
      if (*(int *)(param_1 + 0xb64e8) != 3) {
        iVar2 = iVar1;
      }
      *(undefined4 *)(param_1 + 0x2f6a0) = *(undefined4 *)(param_1 + 0xcb770 + (longlong)iVar2 * 8);
      *(undefined4 *)(param_1 + 0x2f6dc) = 1;
    }
  }
  return;
}



// FUNCTION 145689410 FUN_145689410 body=1351 status=ok
// SIG undefined FUN_145689410(void)

void FUN_145689410(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x2e4f0);
  if ((*(int *)(param_1 + 0xcb6a0) == 1) && (*(int *)(param_1 + 0xcb9e4) != 0)) {
    FUN_14568a010();
  }
  else if ((*(int *)(param_1 + 0x2a2e4) == 0) && (*(int *)(param_1 + 0xcba64) == 0)) {
    piVar1 = (int *)(param_1 + 0x2f698);
    *(undefined1 *)(param_1 + 0xcb9a0) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9a8) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 0) && (*(int *)(param_1 + 0x2f69c) != 0)) && (*(int *)(param_1 + 0x2f6a0) != 0)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a088)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a088) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a088) = iVar3;
      piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar2 = *piVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb9a1) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9a9) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 1) && (*(int *)(param_1 + 0x2f69c) != 1)) && (*(int *)(param_1 + 0x2f6a0) != 1)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a08c)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a08c) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a08c) = iVar3;
      piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar2 = *piVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb9a2) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9aa) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 2) && (*(int *)(param_1 + 0x2f69c) != 2)) && (*(int *)(param_1 + 0x2f6a0) != 2)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a090)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a090) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a090) = iVar3;
      piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar2 = *piVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb9a3) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ab) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 3) && (*(int *)(param_1 + 0x2f69c) != 3)) && (*(int *)(param_1 + 0x2f6a0) != 3)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a094)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a094) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a094) = iVar3;
      piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar2 = *piVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb9a4) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ac) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 4) && (*(int *)(param_1 + 0x2f69c) != 4)) && (*(int *)(param_1 + 0x2f6a0) != 4)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a098)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a098) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a098) = iVar3;
      piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar2 = *piVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb9a5) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ad) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 5) && (*(int *)(param_1 + 0x2f69c) != 5)) && (*(int *)(param_1 + 0x2f6a0) != 5)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a09c)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a09c) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a09c) = iVar3;
      piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar2 = *piVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb9a6) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ae) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 6) && (*(int *)(param_1 + 0x2f69c) != 6)) && (*(int *)(param_1 + 0x2f6a0) != 6)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a0a0)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a0a0) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a0a0) = iVar3;
      piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar2 = *piVar2 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb9a7) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9af) = *(undefined1 *)(param_1 + 0xb64e4);
    if (((*piVar1 != 7) && (*(int *)(param_1 + 0x2f69c) != 7)) && (*(int *)(param_1 + 0x2f6a0) != 7)
       ) {
      iVar3 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < *(int *)(param_1 + 0x2a0a4)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x2a0a4) * 0xe0;
        iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
        if (0 < iVar4) {
          *(int *)(lVar7 + 0x18 + lVar6) = iVar4 + -1;
        }
      }
      *(int *)(param_1 + 0x2a0a4) = iVar3;
      piVar1 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar6);
      *piVar1 = *piVar1 + 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2f6c4) != 0) {
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f698) + 0xcb9a0 + param_1) =
           *(undefined1 *)(param_1 + 0xb64e0);
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f698) + 0xcb9a8 + param_1) =
           *(undefined1 *)(param_1 + 0xb64e4);
    }
    if (*(int *)(param_1 + 0x2f6c8) != 0) {
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f69c) + 0xcb9a0 + param_1) =
           *(undefined1 *)(param_1 + 0xb64e0);
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f69c) + 0xcb9a8 + param_1) =
           *(undefined1 *)(param_1 + 0xb64e4);
    }
    if (*(int *)(param_1 + 0x2f6cc) != 0) {
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f6a0) + 0xcb9a0 + param_1) =
           *(undefined1 *)(param_1 + 0xb64e0);
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f6a0) + 0xcb9a8 + param_1) =
           *(undefined1 *)(param_1 + 0xb64e4);
    }
  }
  FUN_145688190(param_1);
  if (*(int *)(param_1 + 0xb64e0) == 0) {
    if (((*(byte *)(param_1 + 0xb46a8) & 1) != 0) || (*(int *)(param_1 + 0x2f6c4) != 0)) {
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f698) + 0xcb9db + param_1) = 1;
    }
    if (((*(byte *)(param_1 + 0xb46a8) & 2) != 0) || (*(int *)(param_1 + 0x2f6c8) != 0)) {
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f69c) + 0xcb9db + param_1) = 1;
    }
    if (((*(byte *)(param_1 + 0xb46a8) & 4) != 0) || (*(int *)(param_1 + 0x2f6cc) != 0)) {
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x2f6a0) + 0xcb9db + param_1) = 1;
    }
    if (*(int *)(param_1 + 0xcb6a0) == 1) {
      uVar5 = *(uint *)(param_1 + 0xcb958);
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(param_1 + 0xcb9db) = 1;
      }
      if ((uVar5 & 2) != 0) {
        *(undefined1 *)(param_1 + 0xcb9dc) = 1;
      }
      if ((uVar5 & 4) != 0) {
        *(undefined1 *)(param_1 + 0xcb9dd) = 1;
      }
      if ((uVar5 & 8) != 0) {
        *(undefined1 *)(param_1 + 0xcb9de) = 1;
      }
      if ((uVar5 & 0x10) != 0) {
        *(undefined1 *)(param_1 + 0xcb9df) = 1;
      }
      if ((uVar5 & 0x20) != 0) {
        *(undefined1 *)(param_1 + 0xcb9e0) = 1;
      }
      if ((uVar5 & 0x40) != 0) {
        *(undefined1 *)(param_1 + 0xcb9e1) = 1;
      }
      if ((char)uVar5 < '\0') {
        *(undefined1 *)(param_1 + 0xcb9e2) = 1;
      }
    }
  }
  return;
}



// FUNCTION 145689960 FUN_145689960 body=48 status=ok
// SIG undefined FUN_145689960(void)

void FUN_145689960(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)(*(longlong *)(param_1 + 0xcba00 + (longlong)*(int *)(param_1 + 0xb64e0) * 8) *
                  *(longlong *)(param_1 + 0xcba28));
  FUN_145620940(dVar1,10000000.0 / dVar1);
  return;
}



// FUNCTION 145689990 FUN_145689990 body=124 status=ok
// SIG undefined FUN_145689990(void)

void FUN_145689990(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((((*(int *)(param_1 + 0x2a2e4) == 0) && (*(int *)(param_1 + 0x2e57c) == 1)) &&
      (*(int *)(param_1 + 0xcba64) == 0)) &&
     (*(int *)(param_1 + 0xb4308) * 3 < *(int *)(param_1 + 0xb4280))) {
    iVar2 = *(int *)(param_1 + 0xb4390) + *(int *)(param_1 + 0x2a31c) >> 1;
    iVar1 = *(int *)(param_1 + 0xb4324);
    if (*(int *)(param_1 + 0xb4324) <= iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    *(int *)(param_1 + 0xb4324) = iVar1;
    if (0 < *(int *)(param_1 + 0xb64ec)) {
      puVar3 = (undefined4 *)(param_1 + 0xb76ac);
      do {
        iVar2 = iVar2 + 1;
        *puVar3 = *(undefined4 *)(param_1 + 0xb4324);
        puVar3 = puVar3 + 0x6ae;
      } while (iVar2 < *(int *)(param_1 + 0xb64ec));
    }
  }
  return;
}



// FUNCTION 145689a10 FUN_145689a10 body=124 status=ok
// SIG undefined FUN_145689a10(void)

longlong FUN_145689a10(longlong param_1)

{
  if ((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0x2e56c) == 0)) {
    return (longlong)
           (*(int *)(param_1 + 0xb64e0) * *(int *)(param_1 + 0xb64ec) + *(int *)(param_1 + 0xb64e4))
           * 0x1ab8 + 0xb7600 + param_1;
  }
  if ((1 < *(int *)(param_1 + 0xb64ec)) && (*(int *)(param_1 + 0x2e57c) == 1)) {
    return (longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8 + 0xb7600 + param_1;
  }
  return (longlong)*(int *)(param_1 + 0xb64e0) * 0x1ab8 + 0xb7600 + param_1;
}



// FUNCTION 145689a90 FUN_145689a90 body=219 status=ok
// SIG undefined FUN_145689a90(void)

void FUN_145689a90(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)local_28;
  uVar1 = *(uint *)(param_1 + 0xb46a8);
  local_28[0] = *(undefined4 *)(param_1 + 0x2f698);
  local_28[1] = *(undefined4 *)(param_1 + 0x2f69c);
  local_28[2] = *(undefined4 *)(param_1 + 0x2f6a0);
  cVar3 = '\x01';
  while ((*(uint *)(&DAT_149df5460 + (longlong)cVar3 * 4) & uVar1) == 0) {
    cVar3 = cVar3 + '\x01';
    if ('\x03' < cVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)local_28);
    }
  }
  uVar2 = local_28[(longlong)cVar3 + -1];
  if (cVar3 < '\x01') goto LAB_145689b6d;
  if (cVar3 == '\x01') {
LAB_145689b2b:
    if (((uVar1 & 2) == 0) && (*(int *)(param_1 + 0x2f6d8) == 0)) {
      *(undefined4 *)(param_1 + 0x2f69c) = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)local_28);
    }
    if (cVar3 == '\x03') goto LAB_145689b6d;
  }
  else {
    if (((uVar1 & 1) == 0) && (*(int *)(param_1 + 0x2f6d4) == 0)) {
      *(undefined4 *)(param_1 + 0x2f698) = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)local_28);
    }
    if (cVar3 != '\x02') goto LAB_145689b2b;
  }
  if (((uVar1 & 4) == 0) && (*(int *)(param_1 + 0x2f6dc) == 0)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = uVar2;
  }
LAB_145689b6d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)local_28);
}



// FUNCTION 145689b80 FUN_145689b80 body=563 status=ok
// SIG undefined FUN_145689b80(void)

void FUN_145689b80(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0xb64f0);
  *(int *)(param_1 + 0xb64e0) = iVar6;
  uVar1 = *(uint *)((longlong)(iVar6 * *(int *)(param_1 + 0xb64ec)) * 0x1ab8 + 0xb9050 + param_1);
  uVar7 = uVar1 & 3;
  uVar4 = uVar7 >> 1;
  if ((uVar1 & 1) != 0) {
    uVar4 = 2;
  }
  *(uint *)(param_1 + 0xb64e4) = uVar4;
  *(undefined8 *)(param_1 + 0x2f6d8) = 0;
  *(undefined4 *)(param_1 + 0x2f6d4) = 0;
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x2f6d0) = 1;
    *(undefined4 *)(param_1 + 0x2f6d4) = 1;
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0xb46a8) = 1;
    }
    else if (*(int *)(param_1 + 0xb9054) == 0) {
      *(undefined4 *)(param_1 + 0xb46a8) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0xb46a8) = 1;
      *(undefined4 *)(param_1 + 0x2f6d4) = 0;
      *(undefined4 *)(param_1 + 0x2f6d8) = 1;
    }
    *(int *)(param_1 + 0x2f698) = iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
      *(undefined4 *)(param_1 + 0x2f69c) = 0;
      iVar5 = 0;
    }
    else {
      iVar2 = iVar6 + -1;
      if (*(int *)(param_1 + 0xb9054) == 0) {
        *(int *)(param_1 + 0x2f69c) = iVar2;
        iVar5 = 0;
        iVar6 = iVar2;
      }
      else {
        *(int *)(param_1 + 0x2f698) = iVar2;
        iVar5 = 0;
        *(int *)(param_1 + 0x2f69c) = iVar6;
      }
    }
    goto LAB_145689d7b;
  }
  if (uVar4 == 1) {
    *(undefined4 *)(param_1 + 0x2f6d0) = 1;
    *(undefined4 *)(param_1 + 0x2f6dc) = 1;
    uVar3 = 1;
    if (iVar6 != 0) {
      uVar3 = 3;
    }
    *(undefined4 *)(param_1 + 0xb46a8) = uVar3;
    iVar5 = *(int *)(param_1 + 0xb64e8) + iVar6;
    *(int *)(param_1 + 0x2f698) = iVar6;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xb64e8) + -1;
    if (uVar7 == 1) {
      if (iVar6 == iVar5) {
        *(undefined4 *)(param_1 + 0x2f6d0) = 1;
        uVar3 = 1;
        if (iVar6 != 0) {
          uVar3 = 3;
        }
        *(undefined4 *)(param_1 + 0xb46a8) = uVar3;
      }
      else {
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xb46a8) = 1;
        }
        else {
          if (iVar5 <= iVar6) goto LAB_145689d10;
          *(undefined4 *)(param_1 + 0xb46a8) = 3;
        }
        *(undefined4 *)(param_1 + 0x2f6dc) = 1;
        *(undefined4 *)(param_1 + 0x2f6d0) = 1;
      }
LAB_145689d10:
      iVar5 = *(int *)(param_1 + 0xb64e8) + iVar6;
      *(int *)(param_1 + 0x2f698) = iVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x2f6d0) = 1;
      if (iVar6 == iVar5) {
        uVar3 = 1;
        if (iVar6 != 0) {
          uVar3 = 3;
        }
        *(undefined4 *)(param_1 + 0xb46a8) = uVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0x2f6dc) = 1;
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xb46a8) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0xb46a8) = 3;
        }
      }
      iVar5 = *(int *)(param_1 + 0xb64e8) + iVar6;
      *(int *)(param_1 + 0x2f698) = iVar5;
    }
  }
  *(int *)(param_1 + 0x2f69c) = iVar5 + -1;
LAB_145689d7b:
  *(int *)(param_1 + 0x2f6a0) = iVar5;
  if (*(int *)(param_1 + 0xcba64) != 0) {
    iVar5 = *(int *)(param_1 + 0xb64e4);
    if ((iVar5 == *(int *)(param_1 + 0xb64ec) + -1) && (0 < iVar5)) {
      *(undefined8 *)(param_1 + 0x2f6d4) = 0;
      *(undefined4 *)(param_1 + 0x2f6dc) = 0;
    }
  }
  FUN_145689a90(param_1,iVar5,iVar6);
  return;
}



// FUNCTION 145689dc0 FUN_145689dc0 body=378 status=ok
// SIG undefined FUN_145689dc0(void)

void FUN_145689dc0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0xb64f0);
  *(int *)(param_1 + 0xb64e0) = iVar3;
  iVar2 = 1;
  uVar4 = *(uint *)((longlong)(iVar3 * *(int *)(param_1 + 0xb64ec)) * 0x1ab8 + 0xb9050 + param_1) &
          1;
  *(undefined8 *)(param_1 + 0x2f6d8) = 0;
  *(uint *)(param_1 + 0xb64e4) = uVar4;
  *(undefined4 *)(param_1 + 0x2f6d4) = 0;
  *(undefined4 *)(param_1 + 0x2f6d0) = 1;
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x2f6d4) = 1;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x2f698) = 0;
      *(undefined4 *)(param_1 + 0xb46a8) = 1;
      *(undefined4 *)(param_1 + 0x2f69c) = 0;
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      *(int *)(param_1 + 0x2f698) = iVar3;
      if (*(int *)(param_1 + 0xb9054) == 0) {
        *(undefined4 *)(param_1 + 0xb46a8) = 3;
      }
      else {
        *(undefined4 *)(param_1 + 0xb46a8) = 1;
        *(undefined4 *)(param_1 + 0x2f6d4) = 0;
        *(undefined4 *)(param_1 + 0x2f6d8) = 1;
      }
      iVar2 = iVar3 + -1;
      if (*(int *)(param_1 + 0xb9054) == 0) {
        *(int *)(param_1 + 0x2f69c) = iVar2;
        iVar1 = 0;
        iVar3 = iVar2;
      }
      else {
        *(int *)(param_1 + 0x2f698) = iVar2;
        iVar1 = 0;
        *(int *)(param_1 + 0x2f69c) = iVar3;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2f6dc) = 1;
    if (iVar3 != 0) {
      if (iVar3 == *(int *)(param_1 + 0xb64e8) + -1) {
        *(undefined4 *)(param_1 + 0x2f6dc) = 0;
      }
      iVar2 = 3;
    }
    *(int *)(param_1 + 0xb46a8) = iVar2;
    *(int *)(param_1 + 0x2f698) = iVar3;
    iVar1 = *(int *)(param_1 + 0xb64e8) + iVar3;
    *(int *)(param_1 + 0x2f69c) = iVar1 + -1;
  }
  *(int *)(param_1 + 0x2f6a0) = iVar1;
  if (((*(int *)(param_1 + 0xcba64) != 0) && (uVar4 == *(int *)(param_1 + 0xb64ec) - 1U)) &&
     (uVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x2f6d4) = 0;
    *(undefined4 *)(param_1 + 0x2f6dc) = 0;
  }
  FUN_145689a90(param_1,iVar2,param_1,iVar3);
  return;
}



// FUNCTION 145689f40 FUN_145689f40 body=208 status=ok
// SIG undefined FUN_145689f40(void)

void FUN_145689f40(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xb64f0);
  *(int *)(param_1 + 0xb64e0) = iVar1;
  uVar3 = 1;
  *(undefined8 *)(param_1 + 0x2f6d8) = 0;
  *(undefined4 *)(param_1 + 0x2f6d0) = 1;
  *(undefined4 *)(param_1 + 0x2f6d4) = 1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2f698) = 0;
    *(undefined4 *)(param_1 + 0xb46a8) = 1;
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xb9054) == 0) {
      uVar3 = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x2f6d4) = 0;
      *(undefined4 *)(param_1 + 0x2f6d8) = 1;
    }
    *(undefined4 *)(param_1 + 0xb46a8) = uVar3;
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0x2f698) = iVar1;
    if (*(int *)(param_1 + 0xb9054) != 0) {
      *(int *)(param_1 + 0x2f698) = iVar2;
      iVar2 = iVar1;
    }
  }
  *(int *)(param_1 + 0x2f69c) = iVar2;
  if (((*(int *)(param_1 + 0xcba64) != 0) &&
      (*(int *)(param_1 + 0xb64e4) == *(int *)(param_1 + 0xb64ec) + -1)) &&
     (0 < *(int *)(param_1 + 0xb64e4))) {
    *(undefined8 *)(param_1 + 0x2f6d4) = 0;
    *(undefined4 *)(param_1 + 0x2f6dc) = 0;
  }
  FUN_145689a90();
  return;
}



// FUNCTION 14568a010 FUN_14568a010 body=948 status=ok
// SIG undefined FUN_14568a010(void)

void FUN_14568a010(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  piVar1 = (int *)(param_1 + 0xcba64);
  lVar7 = *(longlong *)(param_1 + 0x2e4f0);
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 1) != 0)) {
    lVar6 = lVar7 + 0x18;
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a088)) {
      lVar5 = (longlong)*(int *)(param_1 + 0x2a088) * 0xe0;
      iVar4 = *(int *)(lVar5 + lVar6);
      if (0 < iVar4) {
        *(int *)(lVar5 + lVar6) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a088) = iVar3;
    piVar2 = (int *)((longlong)iVar3 * 0xe0 + lVar6);
    *piVar2 = *piVar2 + 1;
    *(undefined1 *)(param_1 + 0xcb9a0) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9a8) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  lVar7 = lVar7 + 0x18;
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 2) != 0)) {
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a08c)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x2a08c) * 0xe0;
      iVar4 = *(int *)(lVar6 + lVar7);
      if (0 < iVar4) {
        *(int *)(lVar6 + lVar7) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a08c) = iVar3;
    piVar2 = (int *)((longlong)iVar3 * 0xe0 + lVar7);
    *piVar2 = *piVar2 + 1;
    *(undefined1 *)(param_1 + 0xcb9a1) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9a9) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 4) != 0)) {
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a090)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x2a090) * 0xe0;
      iVar4 = *(int *)(lVar6 + lVar7);
      if (0 < iVar4) {
        *(int *)(lVar6 + lVar7) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a090) = iVar3;
    piVar2 = (int *)((longlong)iVar3 * 0xe0 + lVar7);
    *piVar2 = *piVar2 + 1;
    *(undefined1 *)(param_1 + 0xcb9a2) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9aa) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 8) != 0)) {
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a094)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x2a094) * 0xe0;
      iVar4 = *(int *)(lVar6 + lVar7);
      if (0 < iVar4) {
        *(int *)(lVar6 + lVar7) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a094) = iVar3;
    piVar2 = (int *)((longlong)iVar3 * 0xe0 + lVar7);
    *piVar2 = *piVar2 + 1;
    *(undefined1 *)(param_1 + 0xcb9a3) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ab) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 0x10) != 0)) {
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a098)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x2a098) * 0xe0;
      iVar4 = *(int *)(lVar6 + lVar7);
      if (0 < iVar4) {
        *(int *)(lVar6 + lVar7) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a098) = iVar3;
    piVar2 = (int *)((longlong)iVar3 * 0xe0 + lVar7);
    *piVar2 = *piVar2 + 1;
    *(undefined1 *)(param_1 + 0xcb9a4) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ac) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 0x20) != 0)) {
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a09c)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x2a09c) * 0xe0;
      iVar4 = *(int *)(lVar6 + lVar7);
      if (0 < iVar4) {
        *(int *)(lVar6 + lVar7) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a09c) = iVar3;
    piVar2 = (int *)((longlong)iVar3 * 0xe0 + lVar7);
    *piVar2 = *piVar2 + 1;
    *(undefined1 *)(param_1 + 0xcb9a5) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ad) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 0x40) != 0)) {
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a0a0)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x2a0a0) * 0xe0;
      iVar4 = *(int *)(lVar6 + lVar7);
      if (0 < iVar4) {
        *(int *)(lVar6 + lVar7) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a0a0) = iVar3;
    piVar2 = (int *)((longlong)iVar3 * 0xe0 + lVar7);
    *piVar2 = *piVar2 + 1;
    *(undefined1 *)(param_1 + 0xcb9a6) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9ae) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*piVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xcb958 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) & 0x80) != 0)) {
    iVar3 = *(int *)(param_1 + 0x2a2d8);
    if (-1 < *(int *)(param_1 + 0x2a0a4)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x2a0a4) * 0xe0;
      iVar4 = *(int *)(lVar6 + lVar7);
      if (0 < iVar4) {
        *(int *)(lVar6 + lVar7) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a0a4) = iVar3;
    piVar1 = (int *)((longlong)iVar3 * 0xe0 + lVar7);
    *piVar1 = *piVar1 + 1;
    *(undefined1 *)(param_1 + 0xcb9a7) = *(undefined1 *)(param_1 + 0xb64e0);
    *(undefined1 *)(param_1 + 0xcb9af) = *(undefined1 *)(param_1 + 0xb64e4);
  }
  return;
}



// FUNCTION 14568a3d0 FUN_14568a3d0 body=34 status=ok
// SIG undefined FUN_14568a3d0(void)

void FUN_14568a3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14568a450(param_1,param_3,param_2,0,0);
  return;
}



// FUNCTION 14568a400 FUN_14568a400 body=69 status=ok
// SIG undefined FUN_14568a400(void)

void FUN_14568a400(longlong param_1,byte *param_2,char *param_3)

{
  *(uint *)(param_1 + (longlong)*param_3 * -4) =
       (uint)*(ushort *)(&DAT_149df5520 + (ulonglong)*param_2 * 2);
  FUN_14568a450(param_1,param_3,param_2,2,0);
  return;
}



// FUNCTION 14568a450 FUN_14568a450 body=208 status=ok
// SIG undefined FUN_14568a450(void)

void FUN_14568a450(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_4 / 2 + param_3);
  cVar2 = *(char *)(param_4 + param_2);
  if (cVar2 < '\x01') {
    *(uint *)(param_1 + (longlong)cVar2 * -4) =
         (uint)*(ushort *)(&DAT_149df5520 + (longlong)(int)(uint)bVar1 * 2) + param_5;
  }
  else {
    FUN_14568a450(param_1,param_2,param_3,(int)cVar2,
                  (uint)*(ushort *)(&DAT_149df5520 + (longlong)(int)(uint)bVar1 * 2) + param_5);
  }
  cVar2 = *(char *)((longlong)param_4 + 1 + param_2);
  if (cVar2 < '\x01') {
    *(uint *)(param_1 + (longlong)cVar2 * -4) =
         (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)bVar1 * -2) + param_5;
  }
  else {
    FUN_14568a450(param_1,param_2,param_3,(int)cVar2,
                  (uint)*(ushort *)(&DAT_149df5720 + (ulonglong)bVar1 * -2) + param_5);
  }
  return;
}



// FUNCTION 14568a520 FUN_14568a520 body=349 status=ok
// SIG undefined FUN_14568a520(void)

void FUN_14568a520(longlong param_1,int param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  longlong lVar16;
  
  param_1 = param_1 * 2;
  lVar8 = 0;
  param_3 = param_3 * 2;
  lVar15 = 0;
  lVar16 = 0;
  lVar1 = 0;
  lVar2 = 0;
  lVar7 = 8;
  do {
    if (DAT_14c707900 < 2) {
      lVar6 = 0;
      lVar9 = 0;
      lVar10 = 8;
      puVar3 = (ushort *)(param_1 + 2);
      do {
        iVar5 = (uint)puVar3[-1] - (uint)*(ushort *)((param_3 - param_1) + -2 + (longlong)puVar3);
        lVar6 = lVar6 + iVar5 * iVar5;
        iVar5 = (uint)*puVar3 - (uint)*(ushort *)((param_3 - param_1) + -4 + (longlong)(puVar3 + 2))
        ;
        lVar9 = lVar9 + iVar5 * iVar5;
        lVar10 = lVar10 + -1;
        puVar3 = puVar3 + 2;
      } while (lVar10 != 0);
      lVar8 = lVar8 + lVar9 + lVar6;
    }
    else {
      lVar6 = 4;
      puVar4 = (uint *)(param_3 + 4);
      do {
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -4 + (longlong)puVar4));
        auVar12 = pmovzxwd(in_XMM2,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(puVar4[-1]));
        auVar13._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar13._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar13._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar13._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        auVar12 = pmulld(auVar13,auVar13);
        auVar11 = pmovsxdq(auVar11,auVar12);
        lVar15 = lVar15 + auVar11._0_8_;
        lVar16 = lVar16 + auVar11._8_8_;
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -8 + (longlong)(puVar4 + 2)));
        auVar12 = pmovzxwd(auVar12,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(*puVar4));
        auVar14._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar14._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar14._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar14._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        in_XMM2 = pmulld(auVar14,auVar14);
        auVar11 = pmovsxdq(auVar11,in_XMM2);
        lVar1 = lVar1 + auVar11._0_8_;
        lVar2 = lVar2 + auVar11._8_8_;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar6 != 0);
    }
    param_1 = param_1 + (longlong)param_2 * 2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar11._8_4_ = (int)(lVar2 + lVar16);
  auVar11._0_8_ = lVar1 + lVar15;
  auVar11._12_4_ = (int)((ulonglong)(lVar2 + lVar16) >> 0x20);
  *param_5 = (int)((ulonglong)(lVar1 + lVar15 + auVar11._8_8_ + lVar8 + 8) >> 4);
  return;
}



// FUNCTION 14568a680 FUN_14568a680 body=349 status=ok
// SIG undefined FUN_14568a680(void)

void FUN_14568a680(longlong param_1,int param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  longlong lVar16;
  
  param_1 = param_1 * 2;
  lVar8 = 0;
  param_3 = param_3 * 2;
  lVar15 = 0;
  lVar16 = 0;
  lVar1 = 0;
  lVar2 = 0;
  lVar7 = 0x10;
  do {
    if (DAT_14c707900 < 2) {
      lVar6 = 0;
      lVar9 = 0;
      lVar10 = 4;
      puVar3 = (ushort *)(param_1 + 2);
      do {
        iVar5 = (uint)puVar3[-1] - (uint)*(ushort *)((param_3 - param_1) + -2 + (longlong)puVar3);
        lVar6 = lVar6 + iVar5 * iVar5;
        iVar5 = (uint)*puVar3 - (uint)*(ushort *)((param_3 - param_1) + -4 + (longlong)(puVar3 + 2))
        ;
        lVar9 = lVar9 + iVar5 * iVar5;
        lVar10 = lVar10 + -1;
        puVar3 = puVar3 + 2;
      } while (lVar10 != 0);
      lVar8 = lVar8 + lVar9 + lVar6;
    }
    else {
      lVar6 = 2;
      puVar4 = (uint *)(param_3 + 4);
      do {
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -4 + (longlong)puVar4));
        auVar12 = pmovzxwd(in_XMM2,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(puVar4[-1]));
        auVar13._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar13._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar13._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar13._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        auVar12 = pmulld(auVar13,auVar13);
        auVar11 = pmovsxdq(auVar11,auVar12);
        lVar15 = lVar15 + auVar11._0_8_;
        lVar16 = lVar16 + auVar11._8_8_;
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -8 + (longlong)(puVar4 + 2)));
        auVar12 = pmovzxwd(auVar12,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(*puVar4));
        auVar14._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar14._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar14._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar14._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        in_XMM2 = pmulld(auVar14,auVar14);
        auVar11 = pmovsxdq(auVar11,in_XMM2);
        lVar1 = lVar1 + auVar11._0_8_;
        lVar2 = lVar2 + auVar11._8_8_;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar6 != 0);
    }
    param_1 = param_1 + (longlong)param_2 * 2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar11._8_4_ = (int)(lVar2 + lVar16);
  auVar11._0_8_ = lVar1 + lVar15;
  auVar11._12_4_ = (int)((ulonglong)(lVar2 + lVar16) >> 0x20);
  *param_5 = (int)((ulonglong)(lVar1 + lVar15 + auVar11._8_8_ + lVar8 + 8) >> 4);
  return;
}



// FUNCTION 14568a7e0 FUN_14568a7e0 body=678 status=ok
// SIG undefined FUN_14568a7e0(void)

void FUN_14568a7e0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  ushort auStack_110 [17];
  undefined2 auStack_ee [15];
  undefined *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 local_98 [16];
  undefined2 local_78 [16];
  ushort local_58 [20];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar7 = 5;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar6 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar8 = local_58 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar8[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar6 * uVar3 + 0x40 >> 7);
    puVar8[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar8 = (ushort)(uVar3 * uVar6 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar8[1] = (ushort)(*puVar10 * uVar6 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar7 = lVar7 + -1;
    puVar8 = puVar8 + 4;
  } while (lVar7 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar7 = 4;
  puVar9 = local_58;
  puVar11 = local_98 + 2;
  uVar6 = (uint)local_58[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)(uVar6 * bVar2 + (uint)uVar3 * (uint)bVar1 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar6 = (uint)uVar3;
  } while (lVar7 != 0);
  lVar7 = 4;
  puVar11 = local_78 + -param_8;
  puVar9 = (ushort *)(param_8 * 2);
  do {
    puVar8 = (ushort *)
             ((longlong)local_98 + (longlong)puVar11 + (4 - (longlong)local_78) + (longlong)puVar9);
    uVar3 = *(ushort *)((param_8 * 2 - (longlong)(local_98 + 2)) + 2 + (longlong)puVar8);
    *(short *)((longlong)puVar11 + (longlong)puVar9) = (short)((uint)*puVar9 + puVar8[-2] + 1 >> 1);
    uVar4 = *(ushort *)(((param_8 * 2 + 4) - (longlong)(local_98 + 2)) + (longlong)puVar8);
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1e - (longlong)local_78) +
              (longlong)puVar9) = (short)((uint)puVar8[-1] + uVar3 + 1 >> 1);
    uVar3 = *(ushort *)((longlong)puVar8 + ((param_8 * 2 + 6) - (longlong)(local_98 + 2)));
    uVar5 = puVar8[1];
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1c - (longlong)local_78) +
              (longlong)puVar9) = (short)((uint)*puVar8 + uVar4 + 1 >> 1);
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1a - (longlong)local_78) +
              (longlong)puVar9) = (short)(uVar5 + 1 + (uint)uVar3 >> 1);
    puVar9 = puVar9 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_a8 = param_7;
  puStack_d0 = (undefined *)0x14568aa76;
  FUN_14568b180((ulonglong)local_78 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  puStack_d0 = &UNK_14568aa86;
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14568aab0 FUN_14568aab0 body=674 status=ok
// SIG undefined FUN_14568aab0(void)

void FUN_14568aab0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined2 *puVar12;
  ushort auStack_1d0 [33];
  undefined2 auStack_18e [39];
  undefined *puStack_140;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined2 local_108 [32];
  undefined2 local_c8 [32];
  ushort local_88 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar9 = (ushort *)(param_1 * 2);
  lVar7 = 9;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar6 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar10 = local_88 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar10[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar6 * uVar3 + 0x40 >> 7);
    puVar10[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar11 = puVar9 + 4;
    *puVar10 = (ushort)(uVar3 * uVar6 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar11 + (param_2 - 4);
    puVar10[1] = (ushort)(*puVar11 * uVar6 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 4;
  } while (lVar7 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 8;
  lVar7 = 8;
  puVar9 = local_88;
  puVar12 = local_108 + 2;
  uVar6 = (uint)local_88[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar12[-2] = (short)(uVar6 * bVar2 + (uint)uVar3 * (uint)bVar1 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar12[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar12 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar12[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 4;
    puVar12 = puVar12 + 4;
    uVar6 = (uint)uVar3;
  } while (lVar7 != 0);
  puVar12 = local_c8 + -param_8;
  puVar9 = (ushort *)(param_8 * 2);
  do {
    puVar10 = (ushort *)
              ((longlong)local_108 + (longlong)puVar12 + (4 - (longlong)local_c8) + (longlong)puVar9
              );
    uVar3 = *(ushort *)((param_8 * 2 - (longlong)(local_108 + 2)) + 2 + (longlong)puVar10);
    *(short *)((longlong)puVar12 + (longlong)puVar9) = (short)((uint)*puVar9 + puVar10[-2] + 1 >> 1)
    ;
    uVar4 = *(ushort *)((longlong)puVar10 + ((param_8 * 2 + 4) - (longlong)(local_108 + 2)));
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3e - (longlong)local_c8) +
              (longlong)puVar9) = (short)((uint)puVar10[-1] + uVar3 + 1 >> 1);
    uVar3 = *(ushort *)(((param_8 * 2 + 6) - (longlong)(local_108 + 2)) + (longlong)puVar10);
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3c - (longlong)local_c8) +
              (longlong)puVar9) = (short)((uint)*puVar10 + uVar4 + 1 >> 1);
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3a - (longlong)local_c8) +
              (longlong)puVar9) = (short)(puVar10[1] + 1 + (uint)uVar3 >> 1);
    puVar9 = puVar9 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  local_118 = param_7;
  puStack_140 = (undefined *)0x14568ad42;
  FUN_14568b310((ulonglong)local_c8 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  puStack_140 = &UNK_14568ad52;
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
}



// FUNCTION 14568ad80 FUN_14568ad80 body=467 status=ok
// SIG undefined FUN_14568ad80(void)

void FUN_14568ad80(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ushort local_78 [20];
  undefined2 local_50 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar8 = 5;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar7 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar6 = local_78 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar6[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar7 * uVar3 + 0x40 >> 7);
    puVar6[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar6 = (ushort)(uVar3 * uVar7 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar6[1] = (ushort)(*puVar10 * uVar7 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar8 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 4;
  puVar9 = local_78;
  puVar11 = local_50 + 2;
  uVar7 = (uint)local_78[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)((uint)uVar3 * (uint)bVar1 + uVar7 * bVar2 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar8 = lVar8 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar7 = (uint)uVar3;
  } while (lVar8 != 0);
  local_88 = param_7;
  FUN_14568b180((ulonglong)local_50 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14568af80 FUN_14568af80 body=473 status=ok
// SIG undefined FUN_14568af80(void)

void FUN_14568af80(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ushort local_c8 [40];
  undefined2 local_78 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar8 = 9;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar7 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar6 = local_c8 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar6[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar7 * uVar3 + 0x40 >> 7);
    puVar6[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar6 = (ushort)(uVar3 * uVar7 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar6[1] = (ushort)(*puVar10 * uVar7 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar8 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 8;
  puVar9 = local_c8;
  puVar11 = local_78 + 2;
  uVar7 = (uint)local_c8[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)((uint)uVar3 * (uint)bVar1 + uVar7 * bVar2 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar8 = lVar8 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar7 = (uint)uVar3;
  } while (lVar8 != 0);
  local_d8 = param_7;
  FUN_14568b310((ulonglong)local_78 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14568b180 FUN_14568b180 body=399 status=ok
// SIG undefined FUN_14568b180(void)

ulonglong FUN_14568b180(longlong param_1,int param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lVar22;
  longlong lVar23;
  
  puVar14 = (uint *)(param_1 * 2);
  uVar17 = 0;
  puVar13 = (uint *)(param_3 * 2);
  lVar12 = 4;
  lVar22 = 0;
  lVar23 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar9 = 0;
  lVar2 = 0;
  lVar5 = 0;
  lVar6 = 0;
  uVar11 = uVar17;
  uVar10 = uVar17;
  do {
    if (DAT_14c707900 < 2) {
      lVar16 = 4;
      puVar8 = puVar14;
      do {
        uVar1 = *(ushort *)(((longlong)puVar13 - (longlong)puVar14) + (longlong)puVar8);
        uVar7 = *puVar8;
        puVar8 = (uint *)((longlong)puVar8 + 2);
        iVar15 = (uint)(ushort)uVar7 - (uint)uVar1;
        uVar11 = uVar11 + ((ulonglong)(ushort)uVar7 - (ulonglong)uVar1);
        uVar10 = uVar10 + (longlong)(iVar15 * iVar15);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    else {
      auVar19 = pmovzxwd(in_XMM2,ZEXT416(*puVar14));
      auVar18 = pmovzxwd(ZEXT416(*puVar14),ZEXT416(*puVar13));
      auVar20._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar20._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar20._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar20._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar20);
      lVar5 = lVar5 + auVar18._0_8_;
      lVar6 = lVar6 + auVar18._8_8_;
      auVar19 = pmulld(auVar20,auVar20);
      auVar18 = pmovsxdq(auVar18,auVar19);
      lVar22 = lVar22 + auVar18._0_8_;
      lVar23 = lVar23 + auVar18._8_8_;
      auVar19 = pmovzxwd(auVar19,ZEXT416(puVar14[1]));
      auVar18 = pmovzxwd(ZEXT416(puVar14[1]),ZEXT416(puVar13[1]));
      auVar21._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar21._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar21._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar21._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar21);
      in_XMM2 = pmulld(auVar21,auVar21);
      lVar9 = lVar9 + auVar18._0_8_;
      lVar2 = lVar2 + auVar18._8_8_;
      auVar18 = pmovsxdq(auVar18,in_XMM2);
      lVar3 = lVar3 + auVar18._0_8_;
      lVar4 = lVar4 + auVar18._8_8_;
    }
    puVar14 = (uint *)((longlong)puVar14 + (longlong)param_2 * 2);
    puVar13 = (uint *)((longlong)puVar13 + (longlong)param_4 * 2);
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  auVar18._8_4_ = (int)(lVar2 + lVar6);
  auVar18._0_8_ = lVar9 + lVar5;
  auVar18._12_4_ = (int)((ulonglong)(lVar2 + lVar6) >> 0x20);
  auVar19._8_4_ = (int)(lVar4 + lVar23);
  auVar19._0_8_ = lVar3 + lVar22;
  auVar19._12_4_ = (int)((ulonglong)(lVar4 + lVar23) >> 0x20);
  uVar10 = lVar3 + lVar22 + auVar19._8_8_ + 8 + uVar10 >> 4;
  *param_5 = (int)uVar10;
  lVar9 = (longlong)(int)((longlong)(uVar11 + lVar9 + lVar5 + auVar18._8_8_ + 2) >> 2);
  lVar9 = lVar9 * lVar9;
  uVar11 = (uVar10 & 0xffffffff) -
           ((longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 0xf)) >> 4);
  if (-1 < (longlong)uVar11) {
    uVar17 = uVar11 & 0xffffffff;
  }
  return uVar17;
}



// FUNCTION 14568b310 FUN_14568b310 body=399 status=ok
// SIG undefined FUN_14568b310(void)

ulonglong FUN_14568b310(longlong param_1,int param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lVar22;
  longlong lVar23;
  
  puVar14 = (uint *)(param_1 * 2);
  uVar17 = 0;
  puVar13 = (uint *)(param_3 * 2);
  lVar12 = 8;
  lVar22 = 0;
  lVar23 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar9 = 0;
  lVar2 = 0;
  lVar5 = 0;
  lVar6 = 0;
  uVar11 = uVar17;
  uVar10 = uVar17;
  do {
    if (DAT_14c707900 < 2) {
      lVar16 = 4;
      puVar8 = puVar14;
      do {
        uVar1 = *(ushort *)(((longlong)puVar13 - (longlong)puVar14) + (longlong)puVar8);
        uVar7 = *puVar8;
        puVar8 = (uint *)((longlong)puVar8 + 2);
        iVar15 = (uint)(ushort)uVar7 - (uint)uVar1;
        uVar11 = uVar11 + ((ulonglong)(ushort)uVar7 - (ulonglong)uVar1);
        uVar10 = uVar10 + (longlong)(iVar15 * iVar15);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    else {
      auVar19 = pmovzxwd(in_XMM2,ZEXT416(*puVar14));
      auVar18 = pmovzxwd(ZEXT416(*puVar14),ZEXT416(*puVar13));
      auVar20._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar20._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar20._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar20._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar20);
      lVar5 = lVar5 + auVar18._0_8_;
      lVar6 = lVar6 + auVar18._8_8_;
      auVar19 = pmulld(auVar20,auVar20);
      auVar18 = pmovsxdq(auVar18,auVar19);
      lVar22 = lVar22 + auVar18._0_8_;
      lVar23 = lVar23 + auVar18._8_8_;
      auVar19 = pmovzxwd(auVar19,ZEXT416(puVar14[1]));
      auVar18 = pmovzxwd(ZEXT416(puVar14[1]),ZEXT416(puVar13[1]));
      auVar21._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar21._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar21._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar21._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar21);
      in_XMM2 = pmulld(auVar21,auVar21);
      lVar9 = lVar9 + auVar18._0_8_;
      lVar2 = lVar2 + auVar18._8_8_;
      auVar18 = pmovsxdq(auVar18,in_XMM2);
      lVar3 = lVar3 + auVar18._0_8_;
      lVar4 = lVar4 + auVar18._8_8_;
    }
    puVar14 = (uint *)((longlong)puVar14 + (longlong)param_2 * 2);
    puVar13 = (uint *)((longlong)puVar13 + (longlong)param_4 * 2);
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  auVar18._8_4_ = (int)(lVar2 + lVar6);
  auVar18._0_8_ = lVar9 + lVar5;
  auVar18._12_4_ = (int)((ulonglong)(lVar2 + lVar6) >> 0x20);
  auVar19._8_4_ = (int)(lVar4 + lVar23);
  auVar19._0_8_ = lVar3 + lVar22;
  auVar19._12_4_ = (int)((ulonglong)(lVar4 + lVar23) >> 0x20);
  uVar10 = lVar3 + lVar22 + auVar19._8_8_ + 8 + uVar10 >> 4;
  *param_5 = (int)uVar10;
  lVar9 = (longlong)(int)((longlong)(uVar11 + lVar9 + lVar5 + auVar18._8_8_ + 2) >> 2);
  lVar9 = lVar9 * lVar9;
  uVar11 = (uVar10 & 0xffffffff) -
           ((longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 0x1f)) >> 5);
  if (-1 < (longlong)uVar11) {
    uVar17 = uVar11 & 0xffffffff;
  }
  return uVar17;
}



// FUNCTION 14568b4a0 FUN_14568b4a0 body=432 status=ok
// SIG undefined FUN_14568b4a0(void)

ulonglong FUN_14568b4a0(longlong param_1,int param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ushort *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lVar22;
  longlong lVar23;
  
  puVar14 = (ushort *)(param_1 * 2);
  uVar17 = 0;
  param_3 = param_3 * 2;
  lVar13 = 4;
  lVar22 = 0;
  lVar23 = 0;
  lVar4 = 0;
  lVar5 = 0;
  lVar9 = 0;
  lVar3 = 0;
  lVar6 = 0;
  lVar7 = 0;
  uVar11 = uVar17;
  uVar16 = uVar17;
  do {
    if (DAT_14c707900 < 2) {
      lVar12 = 8;
      puVar8 = puVar14;
      do {
        uVar1 = *(ushort *)((param_3 - (longlong)puVar14) + (longlong)puVar8);
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        iVar15 = (uint)uVar2 - (uint)uVar1;
        uVar16 = uVar16 + ((ulonglong)uVar2 - (ulonglong)uVar1);
        uVar11 = uVar11 + (longlong)(iVar15 * iVar15);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    else {
      lVar12 = 2;
      puVar10 = (uint *)(param_3 + 4);
      do {
        auVar18 = ZEXT416(*(uint *)((longlong)puVar14 + (-4 - param_3) + (longlong)puVar10));
        auVar19 = pmovzxwd(in_XMM2,auVar18);
        auVar18 = pmovzxwd(auVar18,ZEXT416(puVar10[-1]));
        auVar20._0_4_ = auVar19._0_4_ - auVar18._0_4_;
        auVar20._4_4_ = auVar19._4_4_ - auVar18._4_4_;
        auVar20._8_4_ = auVar19._8_4_ - auVar18._8_4_;
        auVar20._12_4_ = auVar19._12_4_ - auVar18._12_4_;
        auVar18 = pmovsxdq(auVar18,auVar20);
        lVar6 = lVar6 + auVar18._0_8_;
        lVar7 = lVar7 + auVar18._8_8_;
        auVar19 = pmulld(auVar20,auVar20);
        auVar18 = pmovsxdq(auVar18,auVar19);
        lVar22 = lVar22 + auVar18._0_8_;
        lVar23 = lVar23 + auVar18._8_8_;
        auVar18 = ZEXT416(*(uint *)((longlong)puVar14 + (-8 - param_3) + (longlong)(puVar10 + 2)));
        auVar19 = pmovzxwd(auVar19,auVar18);
        auVar18 = pmovzxwd(auVar18,ZEXT416(*puVar10));
        auVar21._0_4_ = auVar19._0_4_ - auVar18._0_4_;
        auVar21._4_4_ = auVar19._4_4_ - auVar18._4_4_;
        auVar21._8_4_ = auVar19._8_4_ - auVar18._8_4_;
        auVar21._12_4_ = auVar19._12_4_ - auVar18._12_4_;
        auVar18 = pmovsxdq(auVar18,auVar21);
        lVar9 = lVar9 + auVar18._0_8_;
        lVar3 = lVar3 + auVar18._8_8_;
        in_XMM2 = pmulld(auVar21,auVar21);
        auVar18 = pmovsxdq(auVar18,in_XMM2);
        lVar4 = lVar4 + auVar18._0_8_;
        lVar5 = lVar5 + auVar18._8_8_;
        lVar12 = lVar12 + -1;
        puVar10 = puVar10 + 2;
      } while (lVar12 != 0);
    }
    puVar14 = puVar14 + param_2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  auVar18._8_4_ = (int)(lVar3 + lVar7);
  auVar18._0_8_ = lVar9 + lVar6;
  auVar18._12_4_ = (int)((ulonglong)(lVar3 + lVar7) >> 0x20);
  auVar19._8_4_ = (int)(lVar5 + lVar23);
  auVar19._0_8_ = lVar4 + lVar22;
  auVar19._12_4_ = (int)((ulonglong)(lVar5 + lVar23) >> 0x20);
  uVar11 = lVar4 + lVar22 + auVar19._8_8_ + uVar11 + 8 >> 4;
  *param_5 = (int)uVar11;
  lVar9 = (longlong)(int)((longlong)(uVar16 + lVar9 + lVar6 + auVar18._8_8_ + 2) >> 2);
  lVar9 = lVar9 * lVar9;
  uVar11 = (uVar11 & 0xffffffff) -
           ((longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 0x1f)) >> 5);
  if (-1 < (longlong)uVar11) {
    uVar17 = uVar11 & 0xffffffff;
  }
  return uVar17;
}



// FUNCTION 14568b650 FUN_14568b650 body=349 status=ok
// SIG undefined FUN_14568b650(void)

void FUN_14568b650(longlong param_1,int param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  longlong lVar16;
  
  param_1 = param_1 * 2;
  lVar8 = 0;
  param_3 = param_3 * 2;
  lVar15 = 0;
  lVar16 = 0;
  lVar1 = 0;
  lVar2 = 0;
  lVar7 = 8;
  do {
    if (DAT_14c707900 < 2) {
      lVar6 = 0;
      lVar9 = 0;
      lVar10 = 8;
      puVar3 = (ushort *)(param_1 + 2);
      do {
        iVar5 = (uint)puVar3[-1] - (uint)*(ushort *)((param_3 - param_1) + -2 + (longlong)puVar3);
        lVar6 = lVar6 + iVar5 * iVar5;
        iVar5 = (uint)*puVar3 - (uint)*(ushort *)((param_3 - param_1) + -4 + (longlong)(puVar3 + 2))
        ;
        lVar9 = lVar9 + iVar5 * iVar5;
        lVar10 = lVar10 + -1;
        puVar3 = puVar3 + 2;
      } while (lVar10 != 0);
      lVar8 = lVar8 + lVar9 + lVar6;
    }
    else {
      lVar6 = 4;
      puVar4 = (uint *)(param_3 + 4);
      do {
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -4 + (longlong)puVar4));
        auVar12 = pmovzxwd(in_XMM2,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(puVar4[-1]));
        auVar13._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar13._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar13._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar13._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        auVar12 = pmulld(auVar13,auVar13);
        auVar11 = pmovsxdq(auVar11,auVar12);
        lVar15 = lVar15 + auVar11._0_8_;
        lVar16 = lVar16 + auVar11._8_8_;
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -8 + (longlong)(puVar4 + 2)));
        auVar12 = pmovzxwd(auVar12,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(*puVar4));
        auVar14._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar14._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar14._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar14._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        in_XMM2 = pmulld(auVar14,auVar14);
        auVar11 = pmovsxdq(auVar11,in_XMM2);
        lVar1 = lVar1 + auVar11._0_8_;
        lVar2 = lVar2 + auVar11._8_8_;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar6 != 0);
    }
    param_1 = param_1 + (longlong)param_2 * 2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar11._8_4_ = (int)(lVar2 + lVar16);
  auVar11._0_8_ = lVar1 + lVar15;
  auVar11._12_4_ = (int)((ulonglong)(lVar2 + lVar16) >> 0x20);
  *param_5 = (int)((ulonglong)(lVar1 + lVar15 + auVar11._8_8_ + lVar8 + 0x80) >> 8);
  return;
}



// FUNCTION 14568b7b0 FUN_14568b7b0 body=349 status=ok
// SIG undefined FUN_14568b7b0(void)

void FUN_14568b7b0(longlong param_1,int param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  longlong lVar16;
  
  param_1 = param_1 * 2;
  lVar8 = 0;
  param_3 = param_3 * 2;
  lVar15 = 0;
  lVar16 = 0;
  lVar1 = 0;
  lVar2 = 0;
  lVar7 = 0x10;
  do {
    if (DAT_14c707900 < 2) {
      lVar6 = 0;
      lVar9 = 0;
      lVar10 = 4;
      puVar3 = (ushort *)(param_1 + 2);
      do {
        iVar5 = (uint)puVar3[-1] - (uint)*(ushort *)((param_3 - param_1) + -2 + (longlong)puVar3);
        lVar6 = lVar6 + iVar5 * iVar5;
        iVar5 = (uint)*puVar3 - (uint)*(ushort *)((param_3 - param_1) + -4 + (longlong)(puVar3 + 2))
        ;
        lVar9 = lVar9 + iVar5 * iVar5;
        lVar10 = lVar10 + -1;
        puVar3 = puVar3 + 2;
      } while (lVar10 != 0);
      lVar8 = lVar8 + lVar9 + lVar6;
    }
    else {
      lVar6 = 2;
      puVar4 = (uint *)(param_3 + 4);
      do {
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -4 + (longlong)puVar4));
        auVar12 = pmovzxwd(in_XMM2,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(puVar4[-1]));
        auVar13._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar13._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar13._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar13._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        auVar12 = pmulld(auVar13,auVar13);
        auVar11 = pmovsxdq(auVar11,auVar12);
        lVar15 = lVar15 + auVar11._0_8_;
        lVar16 = lVar16 + auVar11._8_8_;
        auVar11 = ZEXT416(*(uint *)((param_1 - param_3) + -8 + (longlong)(puVar4 + 2)));
        auVar12 = pmovzxwd(auVar12,auVar11);
        auVar11 = pmovzxwd(auVar11,ZEXT416(*puVar4));
        auVar14._0_4_ = auVar12._0_4_ - auVar11._0_4_;
        auVar14._4_4_ = auVar12._4_4_ - auVar11._4_4_;
        auVar14._8_4_ = auVar12._8_4_ - auVar11._8_4_;
        auVar14._12_4_ = auVar12._12_4_ - auVar11._12_4_;
        in_XMM2 = pmulld(auVar14,auVar14);
        auVar11 = pmovsxdq(auVar11,in_XMM2);
        lVar1 = lVar1 + auVar11._0_8_;
        lVar2 = lVar2 + auVar11._8_8_;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar6 != 0);
    }
    param_1 = param_1 + (longlong)param_2 * 2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar11._8_4_ = (int)(lVar2 + lVar16);
  auVar11._0_8_ = lVar1 + lVar15;
  auVar11._12_4_ = (int)((ulonglong)(lVar2 + lVar16) >> 0x20);
  *param_5 = (int)((ulonglong)(lVar1 + lVar15 + auVar11._8_8_ + lVar8 + 0x80) >> 8);
  return;
}



// FUNCTION 14568b910 FUN_14568b910 body=678 status=ok
// SIG undefined FUN_14568b910(void)

void FUN_14568b910(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  ushort auStack_110 [17];
  undefined2 auStack_ee [15];
  undefined *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 local_98 [16];
  undefined2 local_78 [16];
  ushort local_58 [20];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar7 = 5;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar6 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar8 = local_58 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar8[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar6 * uVar3 + 0x40 >> 7);
    puVar8[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar8 = (ushort)(uVar3 * uVar6 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar8[1] = (ushort)(*puVar10 * uVar6 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar7 = lVar7 + -1;
    puVar8 = puVar8 + 4;
  } while (lVar7 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar7 = 4;
  puVar9 = local_58;
  puVar11 = local_98 + 2;
  uVar6 = (uint)local_58[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)(uVar6 * bVar2 + (uint)uVar3 * (uint)bVar1 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar6 = (uint)uVar3;
  } while (lVar7 != 0);
  lVar7 = 4;
  puVar11 = local_78 + -param_8;
  puVar9 = (ushort *)(param_8 * 2);
  do {
    puVar8 = (ushort *)
             ((longlong)local_98 + (longlong)puVar11 + (4 - (longlong)local_78) + (longlong)puVar9);
    uVar3 = *(ushort *)((param_8 * 2 - (longlong)(local_98 + 2)) + 2 + (longlong)puVar8);
    *(short *)((longlong)puVar11 + (longlong)puVar9) = (short)((uint)*puVar9 + puVar8[-2] + 1 >> 1);
    uVar4 = *(ushort *)(((param_8 * 2 + 4) - (longlong)(local_98 + 2)) + (longlong)puVar8);
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1e - (longlong)local_78) +
              (longlong)puVar9) = (short)((uint)puVar8[-1] + uVar3 + 1 >> 1);
    uVar3 = *(ushort *)((longlong)puVar8 + ((param_8 * 2 + 6) - (longlong)(local_98 + 2)));
    uVar5 = puVar8[1];
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1c - (longlong)local_78) +
              (longlong)puVar9) = (short)((uint)*puVar8 + uVar4 + 1 >> 1);
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1a - (longlong)local_78) +
              (longlong)puVar9) = (short)(uVar5 + 1 + (uint)uVar3 >> 1);
    puVar9 = puVar9 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_a8 = param_7;
  puStack_d0 = (undefined *)0x14568bba6;
  FUN_14568c2b0((ulonglong)local_78 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  puStack_d0 = &UNK_14568bbb6;
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14568bbe0 FUN_14568bbe0 body=674 status=ok
// SIG undefined FUN_14568bbe0(void)

void FUN_14568bbe0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined2 *puVar12;
  ushort auStack_1d0 [33];
  undefined2 auStack_18e [39];
  undefined *puStack_140;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined2 local_108 [32];
  undefined2 local_c8 [32];
  ushort local_88 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar9 = (ushort *)(param_1 * 2);
  lVar7 = 9;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar6 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar10 = local_88 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar10[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar6 * uVar3 + 0x40 >> 7);
    puVar10[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar11 = puVar9 + 4;
    *puVar10 = (ushort)(uVar3 * uVar6 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar11 + (param_2 - 4);
    puVar10[1] = (ushort)(*puVar11 * uVar6 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 4;
  } while (lVar7 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 8;
  lVar7 = 8;
  puVar9 = local_88;
  puVar12 = local_108 + 2;
  uVar6 = (uint)local_88[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar12[-2] = (short)(uVar6 * bVar2 + (uint)uVar3 * (uint)bVar1 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar12[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar12 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar12[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 4;
    puVar12 = puVar12 + 4;
    uVar6 = (uint)uVar3;
  } while (lVar7 != 0);
  puVar12 = local_c8 + -param_8;
  puVar9 = (ushort *)(param_8 * 2);
  do {
    puVar10 = (ushort *)
              ((longlong)local_108 + (longlong)puVar12 + (4 - (longlong)local_c8) + (longlong)puVar9
              );
    uVar3 = *(ushort *)((param_8 * 2 - (longlong)(local_108 + 2)) + 2 + (longlong)puVar10);
    *(short *)((longlong)puVar12 + (longlong)puVar9) = (short)((uint)*puVar9 + puVar10[-2] + 1 >> 1)
    ;
    uVar4 = *(ushort *)((longlong)puVar10 + ((param_8 * 2 + 4) - (longlong)(local_108 + 2)));
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3e - (longlong)local_c8) +
              (longlong)puVar9) = (short)((uint)puVar10[-1] + uVar3 + 1 >> 1);
    uVar3 = *(ushort *)(((param_8 * 2 + 6) - (longlong)(local_108 + 2)) + (longlong)puVar10);
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3c - (longlong)local_c8) +
              (longlong)puVar9) = (short)((uint)*puVar10 + uVar4 + 1 >> 1);
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3a - (longlong)local_c8) +
              (longlong)puVar9) = (short)(puVar10[1] + 1 + (uint)uVar3 >> 1);
    puVar9 = puVar9 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  local_118 = param_7;
  puStack_140 = (undefined *)0x14568be72;
  FUN_14568c440((ulonglong)local_c8 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  puStack_140 = &UNK_14568be82;
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
}



// FUNCTION 14568beb0 FUN_14568beb0 body=467 status=ok
// SIG undefined FUN_14568beb0(void)

void FUN_14568beb0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ushort local_78 [20];
  undefined2 local_50 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar8 = 5;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar7 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar6 = local_78 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar6[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar7 * uVar3 + 0x40 >> 7);
    puVar6[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar6 = (ushort)(uVar3 * uVar7 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar6[1] = (ushort)(*puVar10 * uVar7 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar8 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 4;
  puVar9 = local_78;
  puVar11 = local_50 + 2;
  uVar7 = (uint)local_78[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)((uint)uVar3 * (uint)bVar1 + uVar7 * bVar2 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar8 = lVar8 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar7 = (uint)uVar3;
  } while (lVar8 != 0);
  local_88 = param_7;
  FUN_14568c2b0((ulonglong)local_50 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14568c0b0 FUN_14568c0b0 body=473 status=ok
// SIG undefined FUN_14568c0b0(void)

void FUN_14568c0b0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ushort local_c8 [40];
  undefined2 local_78 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar8 = 9;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar7 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar6 = local_c8 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar6[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar7 * uVar3 + 0x40 >> 7);
    puVar6[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar6 = (ushort)(uVar3 * uVar7 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar6[1] = (ushort)(*puVar10 * uVar7 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar8 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 8;
  puVar9 = local_c8;
  puVar11 = local_78 + 2;
  uVar7 = (uint)local_c8[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)((uint)uVar3 * (uint)bVar1 + uVar7 * bVar2 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar8 = lVar8 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar7 = (uint)uVar3;
  } while (lVar8 != 0);
  local_d8 = param_7;
  FUN_14568c440((ulonglong)local_78 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14568c2b0 FUN_14568c2b0 body=399 status=ok
// SIG undefined FUN_14568c2b0(void)

ulonglong FUN_14568c2b0(longlong param_1,int param_2,longlong param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lVar22;
  longlong lVar23;
  
  puVar13 = (uint *)(param_1 * 2);
  uVar17 = 0;
  puVar12 = (uint *)(param_3 * 2);
  lVar11 = 4;
  lVar22 = 0;
  lVar23 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar8 = 0;
  lVar2 = 0;
  lVar5 = 0;
  lVar6 = 0;
  uVar10 = uVar17;
  uVar16 = uVar17;
  do {
    if (DAT_14c707900 < 2) {
      lVar15 = 4;
      puVar7 = puVar13;
      do {
        uVar1 = *(ushort *)(((longlong)puVar12 - (longlong)puVar13) + (longlong)puVar7);
        uVar9 = *puVar7;
        puVar7 = (uint *)((longlong)puVar7 + 2);
        iVar14 = (uint)(ushort)uVar9 - (uint)uVar1;
        uVar10 = uVar10 + ((ulonglong)(ushort)uVar9 - (ulonglong)uVar1);
        uVar16 = uVar16 + (longlong)(iVar14 * iVar14);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      auVar19 = pmovzxwd(in_XMM2,ZEXT416(*puVar13));
      auVar18 = pmovzxwd(ZEXT416(*puVar13),ZEXT416(*puVar12));
      auVar20._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar20._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar20._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar20._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar20);
      lVar5 = lVar5 + auVar18._0_8_;
      lVar6 = lVar6 + auVar18._8_8_;
      auVar19 = pmulld(auVar20,auVar20);
      auVar18 = pmovsxdq(auVar18,auVar19);
      lVar22 = lVar22 + auVar18._0_8_;
      lVar23 = lVar23 + auVar18._8_8_;
      auVar19 = pmovzxwd(auVar19,ZEXT416(puVar13[1]));
      auVar18 = pmovzxwd(ZEXT416(puVar13[1]),ZEXT416(puVar12[1]));
      auVar21._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar21._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar21._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar21._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar21);
      in_XMM2 = pmulld(auVar21,auVar21);
      lVar8 = lVar8 + auVar18._0_8_;
      lVar2 = lVar2 + auVar18._8_8_;
      auVar18 = pmovsxdq(auVar18,in_XMM2);
      lVar3 = lVar3 + auVar18._0_8_;
      lVar4 = lVar4 + auVar18._8_8_;
    }
    puVar13 = (uint *)((longlong)puVar13 + (longlong)param_2 * 2);
    puVar12 = (uint *)((longlong)puVar12 + (longlong)param_4 * 2);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  auVar18._8_4_ = (int)(lVar2 + lVar6);
  auVar18._0_8_ = lVar8 + lVar5;
  auVar18._12_4_ = (int)((ulonglong)(lVar2 + lVar6) >> 0x20);
  auVar19._8_4_ = (int)(lVar4 + lVar23);
  auVar19._0_8_ = lVar3 + lVar22;
  auVar19._12_4_ = (int)((ulonglong)(lVar4 + lVar23) >> 0x20);
  uVar9 = (uint)(lVar3 + lVar22 + auVar19._8_8_ + 0x80 + uVar16 >> 8);
  *param_5 = uVar9;
  lVar8 = (longlong)(int)((longlong)(uVar10 + lVar8 + lVar5 + auVar18._8_8_ + 8) >> 4);
  lVar8 = lVar8 * lVar8;
  uVar10 = (ulonglong)uVar9 - ((longlong)(lVar8 + (ulonglong)((uint)(lVar8 >> 0x3f) & 0xf)) >> 4);
  if (-1 < (longlong)uVar10) {
    uVar17 = uVar10 & 0xffffffff;
  }
  return uVar17;
}



// FUNCTION 14568c440 FUN_14568c440 body=399 status=ok
// SIG undefined FUN_14568c440(void)

ulonglong FUN_14568c440(longlong param_1,int param_2,longlong param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lVar22;
  longlong lVar23;
  
  puVar13 = (uint *)(param_1 * 2);
  uVar17 = 0;
  puVar12 = (uint *)(param_3 * 2);
  lVar11 = 8;
  lVar22 = 0;
  lVar23 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar8 = 0;
  lVar2 = 0;
  lVar5 = 0;
  lVar6 = 0;
  uVar10 = uVar17;
  uVar16 = uVar17;
  do {
    if (DAT_14c707900 < 2) {
      lVar15 = 4;
      puVar7 = puVar13;
      do {
        uVar1 = *(ushort *)(((longlong)puVar12 - (longlong)puVar13) + (longlong)puVar7);
        uVar9 = *puVar7;
        puVar7 = (uint *)((longlong)puVar7 + 2);
        iVar14 = (uint)(ushort)uVar9 - (uint)uVar1;
        uVar10 = uVar10 + ((ulonglong)(ushort)uVar9 - (ulonglong)uVar1);
        uVar16 = uVar16 + (longlong)(iVar14 * iVar14);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    else {
      auVar19 = pmovzxwd(in_XMM2,ZEXT416(*puVar13));
      auVar18 = pmovzxwd(ZEXT416(*puVar13),ZEXT416(*puVar12));
      auVar20._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar20._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar20._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar20._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar20);
      lVar5 = lVar5 + auVar18._0_8_;
      lVar6 = lVar6 + auVar18._8_8_;
      auVar19 = pmulld(auVar20,auVar20);
      auVar18 = pmovsxdq(auVar18,auVar19);
      lVar22 = lVar22 + auVar18._0_8_;
      lVar23 = lVar23 + auVar18._8_8_;
      auVar19 = pmovzxwd(auVar19,ZEXT416(puVar13[1]));
      auVar18 = pmovzxwd(ZEXT416(puVar13[1]),ZEXT416(puVar12[1]));
      auVar21._0_4_ = auVar19._0_4_ - auVar18._0_4_;
      auVar21._4_4_ = auVar19._4_4_ - auVar18._4_4_;
      auVar21._8_4_ = auVar19._8_4_ - auVar18._8_4_;
      auVar21._12_4_ = auVar19._12_4_ - auVar18._12_4_;
      auVar18 = pmovsxdq(auVar18,auVar21);
      in_XMM2 = pmulld(auVar21,auVar21);
      lVar8 = lVar8 + auVar18._0_8_;
      lVar2 = lVar2 + auVar18._8_8_;
      auVar18 = pmovsxdq(auVar18,in_XMM2);
      lVar3 = lVar3 + auVar18._0_8_;
      lVar4 = lVar4 + auVar18._8_8_;
    }
    puVar13 = (uint *)((longlong)puVar13 + (longlong)param_2 * 2);
    puVar12 = (uint *)((longlong)puVar12 + (longlong)param_4 * 2);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  auVar18._8_4_ = (int)(lVar2 + lVar6);
  auVar18._0_8_ = lVar8 + lVar5;
  auVar18._12_4_ = (int)((ulonglong)(lVar2 + lVar6) >> 0x20);
  auVar19._8_4_ = (int)(lVar4 + lVar23);
  auVar19._0_8_ = lVar3 + lVar22;
  auVar19._12_4_ = (int)((ulonglong)(lVar4 + lVar23) >> 0x20);
  uVar9 = (uint)(lVar3 + lVar22 + auVar19._8_8_ + 0x80 + uVar16 >> 8);
  *param_5 = uVar9;
  lVar8 = (longlong)(int)((longlong)(uVar10 + lVar8 + lVar5 + auVar18._8_8_ + 8) >> 4);
  lVar8 = lVar8 * lVar8;
  uVar10 = (ulonglong)uVar9 - ((longlong)(lVar8 + (ulonglong)((uint)(lVar8 >> 0x3f) & 0x1f)) >> 5);
  if (-1 < (longlong)uVar10) {
    uVar17 = uVar10 & 0xffffffff;
  }
  return uVar17;
}



// FUNCTION 14568c5d0 FUN_14568c5d0 body=432 status=ok
// SIG undefined FUN_14568c5d0(void)

ulonglong FUN_14568c5d0(longlong param_1,int param_2,longlong param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ushort *puVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lVar23;
  longlong lVar24;
  
  puVar15 = (ushort *)(param_1 * 2);
  uVar18 = 0;
  param_3 = param_3 * 2;
  lVar14 = 4;
  lVar23 = 0;
  lVar24 = 0;
  lVar4 = 0;
  lVar5 = 0;
  lVar9 = 0;
  lVar3 = 0;
  lVar6 = 0;
  lVar7 = 0;
  uVar12 = uVar18;
  uVar17 = uVar18;
  do {
    if (DAT_14c707900 < 2) {
      lVar13 = 8;
      puVar8 = puVar15;
      do {
        uVar1 = *(ushort *)((param_3 - (longlong)puVar15) + (longlong)puVar8);
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        iVar16 = (uint)uVar2 - (uint)uVar1;
        uVar17 = uVar17 + ((ulonglong)uVar2 - (ulonglong)uVar1);
        uVar12 = uVar12 + (longlong)(iVar16 * iVar16);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    else {
      lVar13 = 2;
      puVar11 = (uint *)(param_3 + 4);
      do {
        auVar19 = ZEXT416(*(uint *)((longlong)puVar15 + (-4 - param_3) + (longlong)puVar11));
        auVar20 = pmovzxwd(in_XMM2,auVar19);
        auVar19 = pmovzxwd(auVar19,ZEXT416(puVar11[-1]));
        auVar21._0_4_ = auVar20._0_4_ - auVar19._0_4_;
        auVar21._4_4_ = auVar20._4_4_ - auVar19._4_4_;
        auVar21._8_4_ = auVar20._8_4_ - auVar19._8_4_;
        auVar21._12_4_ = auVar20._12_4_ - auVar19._12_4_;
        auVar19 = pmovsxdq(auVar19,auVar21);
        lVar6 = lVar6 + auVar19._0_8_;
        lVar7 = lVar7 + auVar19._8_8_;
        auVar20 = pmulld(auVar21,auVar21);
        auVar19 = pmovsxdq(auVar19,auVar20);
        lVar23 = lVar23 + auVar19._0_8_;
        lVar24 = lVar24 + auVar19._8_8_;
        auVar19 = ZEXT416(*(uint *)((longlong)puVar15 + (-8 - param_3) + (longlong)(puVar11 + 2)));
        auVar20 = pmovzxwd(auVar20,auVar19);
        auVar19 = pmovzxwd(auVar19,ZEXT416(*puVar11));
        auVar22._0_4_ = auVar20._0_4_ - auVar19._0_4_;
        auVar22._4_4_ = auVar20._4_4_ - auVar19._4_4_;
        auVar22._8_4_ = auVar20._8_4_ - auVar19._8_4_;
        auVar22._12_4_ = auVar20._12_4_ - auVar19._12_4_;
        auVar19 = pmovsxdq(auVar19,auVar22);
        lVar9 = lVar9 + auVar19._0_8_;
        lVar3 = lVar3 + auVar19._8_8_;
        in_XMM2 = pmulld(auVar22,auVar22);
        auVar19 = pmovsxdq(auVar19,in_XMM2);
        lVar4 = lVar4 + auVar19._0_8_;
        lVar5 = lVar5 + auVar19._8_8_;
        lVar13 = lVar13 + -1;
        puVar11 = puVar11 + 2;
      } while (lVar13 != 0);
    }
    puVar15 = puVar15 + param_2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  auVar19._8_4_ = (int)(lVar3 + lVar7);
  auVar19._0_8_ = lVar9 + lVar6;
  auVar19._12_4_ = (int)((ulonglong)(lVar3 + lVar7) >> 0x20);
  auVar20._8_4_ = (int)(lVar5 + lVar24);
  auVar20._0_8_ = lVar4 + lVar23;
  auVar20._12_4_ = (int)((ulonglong)(lVar5 + lVar24) >> 0x20);
  uVar10 = (uint)(lVar4 + lVar23 + auVar20._8_8_ + uVar12 + 0x80 >> 8);
  *param_5 = uVar10;
  lVar9 = (longlong)(int)((longlong)(uVar17 + lVar9 + lVar6 + auVar19._8_8_ + 8) >> 4);
  lVar9 = lVar9 * lVar9;
  uVar12 = (ulonglong)uVar10 - ((longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 0x1f)) >> 5);
  if (-1 < (longlong)uVar12) {
    uVar18 = uVar12 & 0xffffffff;
  }
  return uVar18;
}



// FUNCTION 14568c780 FUN_14568c780 body=312 status=ok
// SIG undefined FUN_14568c780(void)

int FUN_14568c780(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ushort *puVar11;
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar16;
  longlong lVar17;
  
  puVar11 = (ushort *)(param_1 * 2);
  iVar10 = 0;
  param_3 = param_3 * 2;
  lVar16 = 0;
  lVar17 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar9 = 8;
  do {
    if (DAT_14c707900 < 2) {
      lVar8 = 0x10;
      puVar5 = puVar11;
      do {
        puVar1 = (ushort *)((param_3 - (longlong)puVar11) + (longlong)puVar5);
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        iVar7 = (uint)uVar2 - (uint)*puVar1;
        iVar10 = iVar10 + iVar7 * iVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      lVar8 = 4;
      puVar6 = (uint *)(param_3 + 4);
      do {
        auVar12 = ZEXT416(*(uint *)((longlong)puVar11 + (-4 - param_3) + (longlong)puVar6));
        auVar13 = pmovzxwd(in_XMM2,auVar12);
        auVar12 = pmovzxwd(auVar12,ZEXT416(puVar6[-1]));
        auVar14._0_4_ = auVar13._0_4_ - auVar12._0_4_;
        auVar14._4_4_ = auVar13._4_4_ - auVar12._4_4_;
        auVar14._8_4_ = auVar13._8_4_ - auVar12._8_4_;
        auVar14._12_4_ = auVar13._12_4_ - auVar12._12_4_;
        auVar13 = pmulld(auVar14,auVar14);
        auVar12 = pmovsxdq(auVar12,auVar13);
        lVar16 = lVar16 + auVar12._0_8_;
        lVar17 = lVar17 + auVar12._8_8_;
        auVar12 = ZEXT416(*(uint *)((longlong)puVar11 + (-8 - param_3) + (longlong)(puVar6 + 2)));
        auVar13 = pmovzxwd(auVar13,auVar12);
        auVar12 = pmovzxwd(auVar12,ZEXT416(*puVar6));
        auVar15._0_4_ = auVar13._0_4_ - auVar12._0_4_;
        auVar15._4_4_ = auVar13._4_4_ - auVar12._4_4_;
        auVar15._8_4_ = auVar13._8_4_ - auVar12._8_4_;
        auVar15._12_4_ = auVar13._12_4_ - auVar12._12_4_;
        in_XMM2 = pmulld(auVar15,auVar15);
        auVar12 = pmovsxdq(auVar12,in_XMM2);
        lVar3 = lVar3 + auVar12._0_8_;
        lVar4 = lVar4 + auVar12._8_8_;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 2;
      } while (lVar8 != 0);
    }
    puVar11 = puVar11 + param_2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar10 = iVar10 + (int)lVar3 + (int)lVar16 + (int)(lVar4 + lVar17);
  *param_5 = iVar10;
  return iVar10;
}



// FUNCTION 14568c8c0 FUN_14568c8c0 body=312 status=ok
// SIG undefined FUN_14568c8c0(void)

int FUN_14568c8c0(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ushort *puVar11;
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar16;
  longlong lVar17;
  
  puVar11 = (ushort *)(param_1 * 2);
  iVar10 = 0;
  param_3 = param_3 * 2;
  lVar16 = 0;
  lVar17 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar9 = 0x10;
  do {
    if (DAT_14c707900 < 2) {
      lVar8 = 8;
      puVar5 = puVar11;
      do {
        puVar1 = (ushort *)((param_3 - (longlong)puVar11) + (longlong)puVar5);
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        iVar7 = (uint)uVar2 - (uint)*puVar1;
        iVar10 = iVar10 + iVar7 * iVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      lVar8 = 2;
      puVar6 = (uint *)(param_3 + 4);
      do {
        auVar12 = ZEXT416(*(uint *)((longlong)puVar11 + (-4 - param_3) + (longlong)puVar6));
        auVar13 = pmovzxwd(in_XMM2,auVar12);
        auVar12 = pmovzxwd(auVar12,ZEXT416(puVar6[-1]));
        auVar14._0_4_ = auVar13._0_4_ - auVar12._0_4_;
        auVar14._4_4_ = auVar13._4_4_ - auVar12._4_4_;
        auVar14._8_4_ = auVar13._8_4_ - auVar12._8_4_;
        auVar14._12_4_ = auVar13._12_4_ - auVar12._12_4_;
        auVar13 = pmulld(auVar14,auVar14);
        auVar12 = pmovsxdq(auVar12,auVar13);
        lVar16 = lVar16 + auVar12._0_8_;
        lVar17 = lVar17 + auVar12._8_8_;
        auVar12 = ZEXT416(*(uint *)((longlong)puVar11 + (-8 - param_3) + (longlong)(puVar6 + 2)));
        auVar13 = pmovzxwd(auVar13,auVar12);
        auVar12 = pmovzxwd(auVar12,ZEXT416(*puVar6));
        auVar15._0_4_ = auVar13._0_4_ - auVar12._0_4_;
        auVar15._4_4_ = auVar13._4_4_ - auVar12._4_4_;
        auVar15._8_4_ = auVar13._8_4_ - auVar12._8_4_;
        auVar15._12_4_ = auVar13._12_4_ - auVar12._12_4_;
        in_XMM2 = pmulld(auVar15,auVar15);
        auVar12 = pmovsxdq(auVar12,in_XMM2);
        lVar3 = lVar3 + auVar12._0_8_;
        lVar4 = lVar4 + auVar12._8_8_;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 2;
      } while (lVar8 != 0);
    }
    puVar11 = puVar11 + param_2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar10 = iVar10 + (int)lVar3 + (int)lVar16 + (int)(lVar4 + lVar17);
  *param_5 = iVar10;
  return iVar10;
}



// FUNCTION 14568ca00 FUN_14568ca00 body=678 status=ok
// SIG undefined FUN_14568ca00(void)

void FUN_14568ca00(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  ushort auStack_110 [17];
  undefined2 auStack_ee [15];
  undefined *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 local_98 [16];
  undefined2 local_78 [16];
  ushort local_58 [20];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar7 = 5;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar6 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar8 = local_58 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar8[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar6 * uVar3 + 0x40 >> 7);
    puVar8[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar8 = (ushort)(uVar3 * uVar6 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar8[1] = (ushort)(*puVar10 * uVar6 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar7 = lVar7 + -1;
    puVar8 = puVar8 + 4;
  } while (lVar7 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar7 = 4;
  puVar9 = local_58;
  puVar11 = local_98 + 2;
  uVar6 = (uint)local_58[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)(uVar6 * bVar2 + (uint)uVar3 * (uint)bVar1 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar6 = (uint)uVar3;
  } while (lVar7 != 0);
  lVar7 = 4;
  puVar11 = local_78 + -param_8;
  puVar9 = (ushort *)(param_8 * 2);
  do {
    puVar8 = (ushort *)
             ((longlong)local_98 + (longlong)puVar11 + (4 - (longlong)local_78) + (longlong)puVar9);
    uVar3 = *(ushort *)((param_8 * 2 - (longlong)(local_98 + 2)) + 2 + (longlong)puVar8);
    *(short *)((longlong)puVar11 + (longlong)puVar9) = (short)((uint)*puVar9 + puVar8[-2] + 1 >> 1);
    uVar4 = *(ushort *)(((param_8 * 2 + 4) - (longlong)(local_98 + 2)) + (longlong)puVar8);
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1e - (longlong)local_78) +
              (longlong)puVar9) = (short)((uint)puVar8[-1] + uVar3 + 1 >> 1);
    uVar3 = *(ushort *)((longlong)puVar8 + ((param_8 * 2 + 6) - (longlong)(local_98 + 2)));
    uVar5 = puVar8[1];
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1c - (longlong)local_78) +
              (longlong)puVar9) = (short)((uint)*puVar8 + uVar4 + 1 >> 1);
    *(short *)((longlong)local_58 + (longlong)puVar11 + (-0x1a - (longlong)local_78) +
              (longlong)puVar9) = (short)(uVar5 + 1 + (uint)uVar3 >> 1);
    puVar9 = puVar9 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_a8 = param_7;
  puStack_d0 = (undefined *)0x14568cc96;
  FUN_14568d3a0((ulonglong)local_78 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  puStack_d0 = &UNK_14568cca6;
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14568ccd0 FUN_14568ccd0 body=674 status=ok
// SIG undefined FUN_14568ccd0(void)

void FUN_14568ccd0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined2 *puVar12;
  ushort auStack_1d0 [33];
  undefined2 auStack_18e [39];
  undefined *puStack_140;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined2 local_108 [32];
  undefined2 local_c8 [32];
  ushort local_88 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar9 = (ushort *)(param_1 * 2);
  lVar7 = 9;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar6 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar10 = local_88 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar10[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar6 * uVar3 + 0x40 >> 7);
    puVar10[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar11 = puVar9 + 4;
    *puVar10 = (ushort)(uVar3 * uVar6 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar11 + (param_2 - 4);
    puVar10[1] = (ushort)(*puVar11 * uVar6 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 4;
  } while (lVar7 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 8;
  lVar7 = 8;
  puVar9 = local_88;
  puVar12 = local_108 + 2;
  uVar6 = (uint)local_88[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar12[-2] = (short)(uVar6 * bVar2 + (uint)uVar3 * (uint)bVar1 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar12[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar12 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar12[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 4;
    puVar12 = puVar12 + 4;
    uVar6 = (uint)uVar3;
  } while (lVar7 != 0);
  puVar12 = local_c8 + -param_8;
  puVar9 = (ushort *)(param_8 * 2);
  do {
    puVar10 = (ushort *)
              ((longlong)local_108 + (longlong)puVar12 + (4 - (longlong)local_c8) + (longlong)puVar9
              );
    uVar3 = *(ushort *)((param_8 * 2 - (longlong)(local_108 + 2)) + 2 + (longlong)puVar10);
    *(short *)((longlong)puVar12 + (longlong)puVar9) = (short)((uint)*puVar9 + puVar10[-2] + 1 >> 1)
    ;
    uVar4 = *(ushort *)((longlong)puVar10 + ((param_8 * 2 + 4) - (longlong)(local_108 + 2)));
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3e - (longlong)local_c8) +
              (longlong)puVar9) = (short)((uint)puVar10[-1] + uVar3 + 1 >> 1);
    uVar3 = *(ushort *)(((param_8 * 2 + 6) - (longlong)(local_108 + 2)) + (longlong)puVar10);
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3c - (longlong)local_c8) +
              (longlong)puVar9) = (short)((uint)*puVar10 + uVar4 + 1 >> 1);
    *(short *)((longlong)local_88 + (longlong)puVar12 + (-0x3a - (longlong)local_c8) +
              (longlong)puVar9) = (short)(puVar10[1] + 1 + (uint)uVar3 >> 1);
    puVar9 = puVar9 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  local_118 = param_7;
  puStack_140 = (undefined *)0x14568cf62;
  FUN_14568d520((ulonglong)local_c8 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  puStack_140 = &UNK_14568cf72;
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
}



// FUNCTION 14568cfa0 FUN_14568cfa0 body=467 status=ok
// SIG undefined FUN_14568cfa0(void)

void FUN_14568cfa0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ushort local_78 [20];
  undefined2 local_50 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar8 = 5;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar7 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar6 = local_78 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar6[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar7 * uVar3 + 0x40 >> 7);
    puVar6[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar6 = (ushort)(uVar3 * uVar7 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar6[1] = (ushort)(*puVar10 * uVar7 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar8 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 4;
  puVar9 = local_78;
  puVar11 = local_50 + 2;
  uVar7 = (uint)local_78[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)((uint)uVar3 * (uint)bVar1 + uVar7 * bVar2 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar8 = lVar8 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar7 = (uint)uVar3;
  } while (lVar8 != 0);
  local_88 = param_7;
  FUN_14568d3a0((ulonglong)local_50 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14568d1a0 FUN_14568d1a0 body=473 status=ok
// SIG undefined FUN_14568d1a0(void)

void FUN_14568d1a0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ushort local_c8 [40];
  undefined2 local_78 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar9 = (ushort *)(param_1 * 2);
  lVar8 = 9;
  bVar1 = (&DAT_149df5721)[(longlong)param_3 * 2];
  uVar7 = (uint)bVar1;
  bVar2 = (&DAT_149df5720)[(longlong)param_3 * 2];
  puVar6 = local_c8 + 2;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar6[-2] = (ushort)((uint)*puVar9 * (uint)bVar2 + uVar7 * uVar3 + 0x40 >> 7);
    puVar6[-1] = (ushort)((uint)uVar4 * (uint)bVar1 + (uint)bVar2 * (uint)uVar3 + 0x40 >> 7);
    uVar3 = puVar9[3];
    puVar10 = puVar9 + 4;
    *puVar6 = (ushort)(uVar3 * uVar7 + 0x40 + (uint)uVar4 * (uint)bVar2 >> 7);
    puVar9 = puVar10 + (param_2 - 4);
    puVar6[1] = (ushort)(*puVar10 * uVar7 + 0x40 + (uint)uVar3 * (uint)bVar2 >> 7);
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 4;
  } while (lVar8 != 0);
  bVar1 = (&DAT_149df5721)[(longlong)param_4 * 2];
  bVar2 = (&DAT_149df5720)[(longlong)param_4 * 2];
  lVar8 = 8;
  puVar9 = local_c8;
  puVar11 = local_78 + 2;
  uVar7 = (uint)local_c8[0];
  do {
    uVar3 = puVar9[4];
    uVar4 = puVar9[5];
    puVar11[-2] = (short)((uint)uVar3 * (uint)bVar1 + uVar7 * bVar2 + 0x40 >> 7);
    uVar5 = puVar9[6];
    puVar11[-1] = (short)((uint)puVar9[1] * (uint)bVar2 + (uint)uVar4 * (uint)bVar1 + 0x40 >> 7);
    uVar4 = puVar9[7];
    *puVar11 = (short)((uint)puVar9[2] * (uint)bVar2 + (uint)uVar5 * (uint)bVar1 + 0x40 >> 7);
    puVar11[1] = (short)((uint)puVar9[3] * (uint)bVar2 + 0x40 + (uint)uVar4 * (uint)bVar1 >> 7);
    lVar8 = lVar8 + -1;
    puVar9 = puVar9 + 4;
    puVar11 = puVar11 + 4;
    uVar7 = (uint)uVar3;
  } while (lVar8 != 0);
  local_d8 = param_7;
  FUN_14568d520((ulonglong)local_78 >> 1,4,param_5,param_6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14568d3a0 FUN_14568d3a0 body=381 status=ok
// SIG undefined FUN_14568d3a0(void)

int FUN_14568d3a0(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  longlong lVar22;
  
  puVar12 = (uint *)(param_1 * 2);
  iVar16 = 0;
  puVar11 = (uint *)(param_3 * 2);
  lVar21 = 0;
  lVar22 = 0;
  lVar10 = 4;
  lVar3 = 0;
  lVar4 = 0;
  lVar9 = 0;
  lVar2 = 0;
  lVar5 = 0;
  lVar6 = 0;
  iVar15 = iVar16;
  do {
    if (DAT_14c707900 < 2) {
      lVar14 = 4;
      puVar8 = puVar12;
      do {
        uVar1 = *(ushort *)(((longlong)puVar11 - (longlong)puVar12) + (longlong)puVar8);
        uVar7 = *puVar8;
        puVar8 = (uint *)((longlong)puVar8 + 2);
        iVar13 = (uint)(ushort)uVar7 - (uint)uVar1;
        iVar16 = iVar16 + ((uint)(ushort)uVar7 - (uint)uVar1);
        iVar15 = iVar15 + iVar13 * iVar13;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    else {
      auVar18 = pmovzxwd(in_XMM2,ZEXT416(*puVar12));
      auVar17 = pmovzxwd(ZEXT416(*puVar12),ZEXT416(*puVar11));
      auVar19._0_4_ = auVar18._0_4_ - auVar17._0_4_;
      auVar19._4_4_ = auVar18._4_4_ - auVar17._4_4_;
      auVar19._8_4_ = auVar18._8_4_ - auVar17._8_4_;
      auVar19._12_4_ = auVar18._12_4_ - auVar17._12_4_;
      auVar17 = pmovsxdq(auVar17,auVar19);
      lVar5 = lVar5 + auVar17._0_8_;
      lVar6 = lVar6 + auVar17._8_8_;
      auVar18 = pmulld(auVar19,auVar19);
      auVar17 = pmovsxdq(auVar17,auVar18);
      lVar21 = lVar21 + auVar17._0_8_;
      lVar22 = lVar22 + auVar17._8_8_;
      auVar18 = pmovzxwd(auVar18,ZEXT416(puVar12[1]));
      auVar17 = pmovzxwd(ZEXT416(puVar12[1]),ZEXT416(puVar11[1]));
      auVar20._0_4_ = auVar18._0_4_ - auVar17._0_4_;
      auVar20._4_4_ = auVar18._4_4_ - auVar17._4_4_;
      auVar20._8_4_ = auVar18._8_4_ - auVar17._8_4_;
      auVar20._12_4_ = auVar18._12_4_ - auVar17._12_4_;
      auVar17 = pmovsxdq(auVar17,auVar20);
      in_XMM2 = pmulld(auVar20,auVar20);
      lVar9 = lVar9 + auVar17._0_8_;
      lVar2 = lVar2 + auVar17._8_8_;
      auVar17 = pmovsxdq(auVar17,in_XMM2);
      lVar3 = lVar3 + auVar17._0_8_;
      lVar4 = lVar4 + auVar17._8_8_;
    }
    puVar12 = (uint *)((longlong)puVar12 + (longlong)param_2 * 2);
    puVar11 = (uint *)((longlong)puVar11 + (longlong)param_4 * 2);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar15 = iVar15 + (int)lVar3 + (int)lVar21 + (int)(lVar4 + lVar22);
  lVar9 = (longlong)(iVar16 + (int)lVar9 + (int)lVar5 + (int)(lVar2 + lVar6));
  lVar9 = lVar9 * lVar9;
  *param_5 = iVar15;
  return iVar15 - (int)((longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 0xf)) >> 4);
}



// FUNCTION 14568d520 FUN_14568d520 body=381 status=ok
// SIG undefined FUN_14568d520(void)

int FUN_14568d520(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  longlong lVar22;
  
  puVar12 = (uint *)(param_1 * 2);
  iVar16 = 0;
  puVar11 = (uint *)(param_3 * 2);
  lVar21 = 0;
  lVar22 = 0;
  lVar10 = 8;
  lVar3 = 0;
  lVar4 = 0;
  lVar9 = 0;
  lVar2 = 0;
  lVar5 = 0;
  lVar6 = 0;
  iVar15 = iVar16;
  do {
    if (DAT_14c707900 < 2) {
      lVar14 = 4;
      puVar8 = puVar12;
      do {
        uVar1 = *(ushort *)(((longlong)puVar11 - (longlong)puVar12) + (longlong)puVar8);
        uVar7 = *puVar8;
        puVar8 = (uint *)((longlong)puVar8 + 2);
        iVar13 = (uint)(ushort)uVar7 - (uint)uVar1;
        iVar16 = iVar16 + ((uint)(ushort)uVar7 - (uint)uVar1);
        iVar15 = iVar15 + iVar13 * iVar13;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    else {
      auVar18 = pmovzxwd(in_XMM2,ZEXT416(*puVar12));
      auVar17 = pmovzxwd(ZEXT416(*puVar12),ZEXT416(*puVar11));
      auVar19._0_4_ = auVar18._0_4_ - auVar17._0_4_;
      auVar19._4_4_ = auVar18._4_4_ - auVar17._4_4_;
      auVar19._8_4_ = auVar18._8_4_ - auVar17._8_4_;
      auVar19._12_4_ = auVar18._12_4_ - auVar17._12_4_;
      auVar17 = pmovsxdq(auVar17,auVar19);
      lVar5 = lVar5 + auVar17._0_8_;
      lVar6 = lVar6 + auVar17._8_8_;
      auVar18 = pmulld(auVar19,auVar19);
      auVar17 = pmovsxdq(auVar17,auVar18);
      lVar21 = lVar21 + auVar17._0_8_;
      lVar22 = lVar22 + auVar17._8_8_;
      auVar18 = pmovzxwd(auVar18,ZEXT416(puVar12[1]));
      auVar17 = pmovzxwd(ZEXT416(puVar12[1]),ZEXT416(puVar11[1]));
      auVar20._0_4_ = auVar18._0_4_ - auVar17._0_4_;
      auVar20._4_4_ = auVar18._4_4_ - auVar17._4_4_;
      auVar20._8_4_ = auVar18._8_4_ - auVar17._8_4_;
      auVar20._12_4_ = auVar18._12_4_ - auVar17._12_4_;
      auVar17 = pmovsxdq(auVar17,auVar20);
      in_XMM2 = pmulld(auVar20,auVar20);
      lVar9 = lVar9 + auVar17._0_8_;
      lVar2 = lVar2 + auVar17._8_8_;
      auVar17 = pmovsxdq(auVar17,in_XMM2);
      lVar3 = lVar3 + auVar17._0_8_;
      lVar4 = lVar4 + auVar17._8_8_;
    }
    puVar12 = (uint *)((longlong)puVar12 + (longlong)param_2 * 2);
    puVar11 = (uint *)((longlong)puVar11 + (longlong)param_4 * 2);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar15 = iVar15 + (int)lVar3 + (int)lVar21 + (int)(lVar4 + lVar22);
  lVar9 = (longlong)(iVar16 + (int)lVar9 + (int)lVar5 + (int)(lVar2 + lVar6));
  lVar9 = lVar9 * lVar9;
  *param_5 = iVar15;
  return iVar15 - (int)((longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 0x1f)) >> 5);
}



// FUNCTION 14568d6a0 FUN_14568d6a0 body=413 status=ok
// SIG undefined FUN_14568d6a0(void)

int FUN_14568d6a0(longlong param_1,int param_2,longlong param_3,int param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  longlong lVar22;
  
  puVar13 = (ushort *)(param_1 * 2);
  iVar16 = 0;
  param_3 = param_3 * 2;
  lVar21 = 0;
  lVar22 = 0;
  lVar12 = 4;
  lVar4 = 0;
  lVar5 = 0;
  lVar9 = 0;
  lVar3 = 0;
  lVar6 = 0;
  lVar7 = 0;
  iVar15 = iVar16;
  do {
    if (DAT_14c707900 < 2) {
      lVar11 = 8;
      puVar8 = puVar13;
      do {
        uVar1 = *(ushort *)((param_3 - (longlong)puVar13) + (longlong)puVar8);
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        iVar14 = (uint)uVar2 - (uint)uVar1;
        iVar16 = iVar16 + ((uint)uVar2 - (uint)uVar1);
        iVar15 = iVar15 + iVar14 * iVar14;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    else {
      lVar11 = 2;
      puVar10 = (uint *)(param_3 + 4);
      do {
        auVar17 = ZEXT416(*(uint *)((longlong)puVar13 + (-4 - param_3) + (longlong)puVar10));
        auVar18 = pmovzxwd(in_XMM2,auVar17);
        auVar17 = pmovzxwd(auVar17,ZEXT416(puVar10[-1]));
        auVar19._0_4_ = auVar18._0_4_ - auVar17._0_4_;
        auVar19._4_4_ = auVar18._4_4_ - auVar17._4_4_;
        auVar19._8_4_ = auVar18._8_4_ - auVar17._8_4_;
        auVar19._12_4_ = auVar18._12_4_ - auVar17._12_4_;
        auVar17 = pmovsxdq(auVar17,auVar19);
        lVar6 = lVar6 + auVar17._0_8_;
        lVar7 = lVar7 + auVar17._8_8_;
        auVar18 = pmulld(auVar19,auVar19);
        auVar17 = pmovsxdq(auVar17,auVar18);
        lVar21 = lVar21 + auVar17._0_8_;
        lVar22 = lVar22 + auVar17._8_8_;
        auVar17 = ZEXT416(*(uint *)((longlong)puVar13 + (-8 - param_3) + (longlong)(puVar10 + 2)));
        auVar18 = pmovzxwd(auVar18,auVar17);
        auVar17 = pmovzxwd(auVar17,ZEXT416(*puVar10));
        auVar20._0_4_ = auVar18._0_4_ - auVar17._0_4_;
        auVar20._4_4_ = auVar18._4_4_ - auVar17._4_4_;
        auVar20._8_4_ = auVar18._8_4_ - auVar17._8_4_;
        auVar20._12_4_ = auVar18._12_4_ - auVar17._12_4_;
        auVar17 = pmovsxdq(auVar17,auVar20);
        lVar9 = lVar9 + auVar17._0_8_;
        lVar3 = lVar3 + auVar17._8_8_;
        in_XMM2 = pmulld(auVar20,auVar20);
        auVar17 = pmovsxdq(auVar17,in_XMM2);
        lVar4 = lVar4 + auVar17._0_8_;
        lVar5 = lVar5 + auVar17._8_8_;
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 2;
      } while (lVar11 != 0);
    }
    puVar13 = puVar13 + param_2;
    param_3 = param_3 + (longlong)param_4 * 2;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar15 = iVar15 + (int)lVar4 + (int)lVar21 + (int)(lVar5 + lVar22);
  lVar9 = (longlong)(iVar16 + (int)lVar9 + (int)lVar6 + (int)(lVar3 + lVar7));
  lVar9 = lVar9 * lVar9;
  *param_5 = iVar15;
  return iVar15 - (int)((longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 0x1f)) >> 5);
}



// FUNCTION 14568d840 FUN_14568d840 body=367 status=ok
// SIG undefined FUN_14568d840(void)

void FUN_14568d840(undefined2 *param_1,undefined2 *param_2,uint param_3,uint param_4,
                  undefined2 *param_5,int param_6)

{
  undefined2 *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  
  if (0 < (int)param_4) {
    lVar18 = (longlong)(int)param_3;
    uVar19 = (ulonglong)param_4;
    do {
      lVar16 = 0;
      lVar17 = lVar16;
      if ((0 < (int)param_3) && (3 < param_3)) {
        if (((param_5 + lVar18 + -1 < param_1) || (param_1 + lVar18 + -1 < param_5)) &&
           ((param_2 + lVar18 + -1 < param_1 || (lVar17 = 0, param_1 + lVar18 + -1 < param_2)))) {
          lVar17 = lVar16;
          if (7 < param_3) {
            puVar13 = param_2;
            do {
              puVar1 = (undefined2 *)(((longlong)param_5 - (longlong)param_2) + (longlong)puVar13);
              lVar17 = lVar17 + 8;
              uVar20 = *puVar13;
              puVar6 = puVar13 + 1;
              puVar7 = puVar13 + 2;
              puVar8 = puVar13 + 3;
              puVar9 = puVar13 + 4;
              puVar10 = puVar13 + 5;
              puVar11 = puVar13 + 6;
              puVar12 = puVar13 + 7;
              puVar13 = puVar13 + 8;
              uVar20 = pavgw(*puVar1,uVar20);
              uVar21 = pavgw(puVar1[1],*puVar6);
              uVar22 = pavgw(puVar1[2],*puVar7);
              uVar23 = pavgw(puVar1[3],*puVar8);
              uVar24 = pavgw(puVar1[4],*puVar9);
              uVar25 = pavgw(puVar1[5],*puVar10);
              uVar26 = pavgw(puVar1[6],*puVar11);
              uVar27 = pavgw(puVar1[7],*puVar12);
              puVar1 = (undefined2 *)
                       ((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar13);
              *puVar1 = uVar20;
              puVar1[1] = uVar21;
              puVar1[2] = uVar22;
              puVar1[3] = uVar23;
              puVar1[4] = uVar24;
              puVar1[5] = uVar25;
              puVar1[6] = uVar26;
              puVar1[7] = uVar27;
            } while (lVar17 < (int)(param_3 & 0xfffffff8));
            if (((byte)param_3 & 7) < 4) goto LAB_14568d941;
          }
          puVar14 = (undefined8 *)(param_2 + lVar17);
          do {
            uVar3 = *(undefined8 *)(((longlong)param_5 - (longlong)param_2) + (longlong)puVar14);
            lVar17 = lVar17 + 4;
            uVar4 = *puVar14;
            uVar20 = pavgw((short)uVar3,(short)uVar4);
            uVar21 = pavgw((short)((ulonglong)uVar3 >> 0x10),(short)((ulonglong)uVar4 >> 0x10));
            uVar22 = pavgw((short)((ulonglong)uVar3 >> 0x20),(short)((ulonglong)uVar4 >> 0x20));
            uVar23 = pavgw((short)((ulonglong)uVar3 >> 0x30),(short)((ulonglong)uVar4 >> 0x30));
            pavgw(0,0);
            pavgw(0,0);
            pavgw(0,0);
            pavgw(0,0);
            *(ulonglong *)((longlong)puVar14 + ((longlong)param_1 - (longlong)param_2)) =
                 CONCAT26(uVar23,CONCAT24(uVar22,CONCAT22(uVar21,uVar20)));
            puVar14 = puVar14 + 1;
          } while (lVar17 < (int)(param_3 & 0xfffffffc));
        }
      }
LAB_14568d941:
      if (lVar17 < lVar18) {
        puVar15 = param_5 + lVar17;
        lVar17 = lVar18 - lVar17;
        do {
          uVar5 = *puVar15;
          puVar2 = (ushort *)(((longlong)param_2 - (longlong)param_5) + (longlong)puVar15);
          puVar15 = puVar15 + 1;
          *(short *)((longlong)param_1 + (-2 - (longlong)param_5) + (longlong)puVar15) =
               (short)(uVar5 + 1 + (uint)*puVar2 >> 1);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      param_1 = param_1 + lVar18;
      param_2 = param_2 + lVar18;
      param_5 = param_5 + param_6;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}



// FUNCTION 14568d9b0 FUN_14568d9b0 body=261 status=ok
// SIG undefined FUN_14568d9b0(void)

int FUN_14568d9b0(longlong param_1,int param_2,longlong param_3,int param_4)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  puVar9 = (undefined8 *)(param_1 * 2);
  iVar10 = 0;
  puVar4 = (undefined8 *)(param_3 * 2);
  iVar12 = 0;
  iVar13 = 0;
  iVar14 = 0;
  iVar15 = 0;
  lVar5 = 4;
  do {
    if (DAT_14c707900 < 2) {
      iVar7 = 0;
      iVar8 = 0;
      lVar6 = 2;
      puVar1 = (ushort *)((longlong)puVar9 + 2);
      do {
        uVar2 = (uint)puVar1[-1] -
                (uint)*(ushort *)((longlong)puVar4 + (-2 - (longlong)puVar9) + (longlong)puVar1);
        uVar3 = (int)uVar2 >> 0x1f;
        iVar8 = iVar8 + ((uVar2 ^ uVar3) - uVar3);
        uVar2 = (uint)*puVar1 -
                (uint)*(ushort *)
                       ((longlong)puVar4 + (-4 - (longlong)puVar9) + (longlong)(puVar1 + 2));
        uVar3 = (int)uVar2 >> 0x1f;
        iVar7 = iVar7 + ((uVar2 ^ uVar3) - uVar3);
        lVar6 = lVar6 + -1;
        puVar1 = puVar1 + 2;
      } while (lVar6 != 0);
      iVar10 = iVar10 + iVar7 + iVar8;
    }
    else {
      auVar11 = pmovzxwd(in_XMM2,*puVar9);
      in_XMM0 = pmovzxwd(in_XMM0,*puVar4);
      in_XMM2._0_4_ = auVar11._0_4_ - in_XMM0._0_4_;
      in_XMM2._4_4_ = auVar11._4_4_ - in_XMM0._4_4_;
      in_XMM2._8_4_ = auVar11._8_4_ - in_XMM0._8_4_;
      in_XMM2._12_4_ = auVar11._12_4_ - in_XMM0._12_4_;
      in_XMM1 = pabsd(in_XMM1,in_XMM2);
      iVar12 = iVar12 + in_XMM1._0_4_;
      iVar13 = iVar13 + in_XMM1._4_4_;
      iVar14 = iVar14 + in_XMM1._8_4_;
      iVar15 = iVar15 + in_XMM1._12_4_;
    }
    puVar9 = (undefined8 *)((longlong)puVar9 + (longlong)param_2 * 2);
    puVar4 = (undefined8 *)((longlong)puVar4 + (longlong)param_4 * 2);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return iVar12 + iVar14 + iVar13 + iVar15 + iVar10;
}



// FUNCTION 14568dac0 FUN_14568dac0 body=298 status=ok
// SIG undefined FUN_14568dac0(void)

void FUN_14568dac0(longlong param_1,int param_2,longlong param_3,undefined4 param_4,longlong param_5
                  )

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_3 * 2;
  lVar1 = 4;
  local_60 = param_4;
  auVar5._0_8_ = FUN_14568d840(local_58,param_5 * 2,4,4);
  auVar5._8_8_ = extraout_XMM0_Qb;
  puVar4 = local_58;
  puVar2 = (undefined8 *)(param_1 * 2);
  do {
    if (DAT_14c707900 < 2) {
      lVar3 = 2;
      do {
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    else {
      auVar6 = pmovzxwd(in_XMM2,*puVar2);
      auVar5 = pmovzxwd(auVar5,*puVar4);
      in_XMM2._0_4_ = auVar6._0_4_ - auVar5._0_4_;
      in_XMM2._4_4_ = auVar6._4_4_ - auVar5._4_4_;
      in_XMM2._8_4_ = auVar6._8_4_ - auVar5._8_4_;
      in_XMM2._12_4_ = auVar6._12_4_ - auVar5._12_4_;
      in_XMM1 = pabsd(in_XMM1,in_XMM2);
    }
    puVar2 = (undefined8 *)((longlong)puVar2 + (longlong)param_2 * 2);
    puVar4 = puVar4 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 14568dc00 FUN_14568dc00 body=261 status=ok
// SIG undefined FUN_14568dc00(void)

int FUN_14568dc00(longlong param_1,int param_2,longlong param_3,int param_4)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  puVar9 = (undefined8 *)(param_1 * 2);
  iVar10 = 0;
  puVar4 = (undefined8 *)(param_3 * 2);
  iVar12 = 0;
  iVar13 = 0;
  iVar14 = 0;
  iVar15 = 0;
  lVar5 = 8;
  do {
    if (DAT_14c707900 < 2) {
      iVar7 = 0;
      iVar8 = 0;
      lVar6 = 2;
      puVar1 = (ushort *)((longlong)puVar9 + 2);
      do {
        uVar2 = (uint)puVar1[-1] -
                (uint)*(ushort *)((longlong)puVar4 + (-2 - (longlong)puVar9) + (longlong)puVar1);
        uVar3 = (int)uVar2 >> 0x1f;
        iVar8 = iVar8 + ((uVar2 ^ uVar3) - uVar3);
        uVar2 = (uint)*puVar1 -
                (uint)*(ushort *)
                       ((longlong)puVar4 + (-4 - (longlong)puVar9) + (longlong)(puVar1 + 2));
        uVar3 = (int)uVar2 >> 0x1f;
        iVar7 = iVar7 + ((uVar2 ^ uVar3) - uVar3);
        lVar6 = lVar6 + -1;
        puVar1 = puVar1 + 2;
      } while (lVar6 != 0);
      iVar10 = iVar10 + iVar7 + iVar8;
    }
    else {
      auVar11 = pmovzxwd(in_XMM2,*puVar9);
      in_XMM0 = pmovzxwd(in_XMM0,*puVar4);
      in_XMM2._0_4_ = auVar11._0_4_ - in_XMM0._0_4_;
      in_XMM2._4_4_ = auVar11._4_4_ - in_XMM0._4_4_;
      in_XMM2._8_4_ = auVar11._8_4_ - in_XMM0._8_4_;
      in_XMM2._12_4_ = auVar11._12_4_ - in_XMM0._12_4_;
      in_XMM1 = pabsd(in_XMM1,in_XMM2);
      iVar12 = iVar12 + in_XMM1._0_4_;
      iVar13 = iVar13 + in_XMM1._4_4_;
      iVar14 = iVar14 + in_XMM1._8_4_;
      iVar15 = iVar15 + in_XMM1._12_4_;
    }
    puVar9 = (undefined8 *)((longlong)puVar9 + (longlong)param_2 * 2);
    puVar4 = (undefined8 *)((longlong)puVar4 + (longlong)param_4 * 2);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return iVar12 + iVar14 + iVar13 + iVar15 + iVar10;
}



// FUNCTION 14568dd10 FUN_14568dd10 body=298 status=ok
// SIG undefined FUN_14568dd10(void)

void FUN_14568dd10(longlong param_1,int param_2,longlong param_3,undefined4 param_4,longlong param_5
                  )

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_3 * 2;
  lVar1 = 8;
  local_80 = param_4;
  auVar5._0_8_ = FUN_14568d840(local_78,param_5 * 2,4,8);
  auVar5._8_8_ = extraout_XMM0_Qb;
  puVar4 = local_78;
  puVar2 = (undefined8 *)(param_1 * 2);
  do {
    if (DAT_14c707900 < 2) {
      lVar3 = 2;
      do {
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    else {
      auVar6 = pmovzxwd(in_XMM2,*puVar2);
      auVar5 = pmovzxwd(auVar5,*puVar4);
      in_XMM2._0_4_ = auVar6._0_4_ - auVar5._0_4_;
      in_XMM2._4_4_ = auVar6._4_4_ - auVar5._4_4_;
      in_XMM2._8_4_ = auVar6._8_4_ - auVar5._8_4_;
      in_XMM2._12_4_ = auVar6._12_4_ - auVar5._12_4_;
      in_XMM1 = pabsd(in_XMM1,in_XMM2);
    }
    puVar2 = (undefined8 *)((longlong)puVar2 + (longlong)param_2 * 2);
    puVar4 = puVar4 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14568de60 FUN_14568de60 body=43 status=ok
// SIG undefined FUN_14568de60(void)

void FUN_14568de60(longlong param_1,longlong param_2)

{
  FUN_14568e630(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x10),
                *(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x10),
                *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 14568de90 FUN_14568de90 body=43 status=ok
// SIG undefined FUN_14568de90(void)

void FUN_14568de90(longlong param_1,longlong param_2)

{
  FUN_14568e7e0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x10),
                *(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x10),
                *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 14568dec0 FUN_14568dec0 body=895 status=ok
// SIG undefined FUN_14568dec0(void)

void FUN_14568dec0(longlong param_1,longlong param_2,uint *param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort *puVar13;
  ushort *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_178 [32];
  int local_158;
  uint local_150;
  uint local_148;
  int local_144;
  uint local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  uint *local_f8;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [8];
  longlong local_b0 [10];
  double adStack_60 [5];
  
  local_b0[6] = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_d0[0] = *(int *)(param_1 + 8);
  local_d0[1] = *(undefined4 *)(param_1 + 0x1c);
  local_d0[2] = *(undefined4 *)(param_1 + 0x1c);
  local_d0[4] = *(undefined4 *)(param_1 + 0xc);
  local_d0[5] = *(undefined4 *)(param_1 + 0x20);
  local_d0[6] = *(undefined4 *)(param_1 + 0x20);
  local_b0[0] = *(longlong *)(param_1 + 0x38);
  local_b0[1] = *(undefined8 *)(param_1 + 0x40);
  local_b0[2] = *(undefined8 *)(param_1 + 0x48);
  local_e0[0] = *(int *)(param_1 + 0x10);
  local_e0[1] = *(undefined4 *)(param_1 + 0x24);
  local_e0[2] = *(undefined4 *)(param_1 + 0x24);
  local_b0[3] = *(undefined8 *)(param_2 + 0x38);
  local_b0[4] = *(undefined8 *)(param_2 + 0x40);
  local_b0[5] = *(undefined8 *)(param_2 + 0x48);
  local_f0[0] = *(int *)(param_2 + 0x10);
  local_f0[1] = *(undefined4 *)(param_2 + 0x24);
  local_f0[2] = *(undefined4 *)(param_2 + 0x24);
  local_144 = param_4 - param_5;
  local_130 = 0;
  local_148 = 0;
  local_108 = (longlong)param_3 - (longlong)local_d0;
  local_120 = 0;
  local_138 = (longlong)param_3 - (longlong)(local_b0 + 3);
  local_128 = 0;
  dVar20 = (double)((1 << ((byte)param_5 & 0x1f)) + -1);
  local_100 = param_1;
  local_f8 = param_3;
  do {
    lVar8 = local_120;
    lVar7 = local_128;
    uVar6 = local_130;
    uVar5 = local_148;
    iVar3 = *(int *)((longlong)local_d0 + local_120);
    uVar4 = *(uint *)((longlong)local_d0 + local_120 + 0x10);
    local_110 = (longlong *)((longlong)local_b0 + local_128 + 0x18);
    uVar16 = uVar4 * iVar3;
    local_140 = uVar16;
    if ((*(byte *)(local_100 + 0x98) & 8) == 0) {
      local_158 = iVar3;
      local_150 = uVar4;
      uVar11 = FUN_14568e630(*(undefined8 *)((longlong)local_b0 + local_128),
                             *(undefined4 *)((longlong)local_e0 + local_120),*local_110,
                             *(undefined4 *)((longlong)local_f0 + local_120));
    }
    else if (local_144 == 0) {
      local_158 = iVar3;
      local_150 = uVar4;
      uVar11 = FUN_14568e7e0(*(undefined8 *)((longlong)local_b0 + local_128),
                             *(undefined4 *)((longlong)local_e0 + local_120),*local_110,
                             *(undefined4 *)((longlong)local_f0 + local_120));
    }
    else {
      uVar11 = 0;
      puVar13 = (ushort *)(*(longlong *)((longlong)local_b0 + local_128) * 2);
      lVar12 = *local_110 * 2;
      if (0 < (int)uVar4) {
        uVar17 = (ulonglong)uVar4;
        local_118 = (longlong)*(int *)((longlong)local_f0 + local_120) * 2;
        do {
          if (0 < (longlong)iVar3) {
            puVar14 = puVar13;
            lVar15 = (longlong)iVar3;
            do {
              puVar1 = (ushort *)((lVar12 - (longlong)puVar13) + (longlong)puVar14);
              uVar2 = *puVar14;
              puVar14 = puVar14 + 1;
              lVar10 = (ulonglong)(uVar2 >> ((byte)local_144 & 0x3f)) -
                       (ulonglong)(*puVar1 >> ((byte)local_144 & 0x3f));
              uVar11 = uVar11 + lVar10 * lVar10;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          puVar13 = puVar13 + *(int *)((longlong)local_e0 + local_120);
          lVar12 = lVar12 + local_118;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    *(ulonglong *)((longlong)local_b0 + local_138 + lVar7 + 0x30) = uVar11;
    *(uint *)((longlong)local_d0 + local_108 + lVar8 + 4) = uVar16;
    if ((double)uVar11 <= 0.0) {
      dVar19 = 100.0;
    }
    else {
      dVar18 = log10(((double)uVar16 * dVar20 * dVar20) / (double)uVar11);
      dVar19 = 100.0;
      if (dVar18 * 10.0 <= 100.0) {
        dVar19 = dVar18 * 10.0;
      }
    }
    puVar9 = local_f8;
    local_130 = uVar6 + uVar11;
    local_148 = uVar5 + uVar16;
    local_128 = lVar7 + 8;
    local_120 = lVar8 + 4;
    *(double *)((longlong)adStack_60 + local_138 + lVar7) = dVar19;
  } while (local_128 < 0x18);
  *(ulonglong *)(local_f8 + 4) = local_130;
  *local_f8 = local_148;
  dVar19 = 100.0;
  if (0.0 < (double)local_130) {
    dVar20 = log10(((double)local_148 * dVar20 * dVar20) / (double)local_130);
    dVar19 = 100.0;
    if (dVar20 * 10.0 <= 100.0) {
      dVar19 = dVar20 * 10.0;
    }
  }
  *(double *)(puVar9 + 0xc) = dVar19;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0[6] ^ (ulonglong)auStack_178);
}



// FUNCTION 14568e270 FUN_14568e270 body=475 status=ok
// SIG undefined FUN_14568e270(void)

longlong FUN_14568e270(longlong param_1,int param_2,longlong param_3,int param_4,uint param_5,
                      uint param_6)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar16;
  longlong lVar17;
  
  lVar6 = 0;
  uVar12 = (ulonglong)(int)param_5;
  if ((int)param_6 < 1) {
    return 0;
  }
  lVar16 = 0;
  lVar17 = 0;
  lVar1 = 0;
  lVar2 = 0;
  uVar11 = (ulonglong)param_6;
  do {
    lVar8 = 0;
    if (((0 < (int)param_5) && (3 < param_5)) && (1 < DAT_14c707900)) {
      puVar5 = (ushort *)(param_3 + 2);
      do {
        lVar8 = lVar8 + 4;
        auVar14 = pmovzxbd(in_XMM2,ZEXT216(*(ushort *)((param_1 - param_3) + -2 + (longlong)puVar5))
                          );
        auVar13 = pmovzxbd(in_XMM1,ZEXT216(puVar5[-1]));
        auVar15._0_4_ = auVar14._0_4_ - auVar13._0_4_;
        auVar15._4_4_ = auVar14._4_4_ - auVar13._4_4_;
        auVar15._8_4_ = auVar14._8_4_ - auVar13._8_4_;
        auVar15._12_4_ = auVar14._12_4_ - auVar13._12_4_;
        auVar15 = pmulld(auVar15,auVar15);
        auVar14 = pmovsxdq(ZEXT216(puVar5[-1]),auVar15);
        lVar16 = lVar16 + auVar14._0_8_;
        lVar17 = lVar17 + auVar14._8_8_;
        auVar14 = pmovzxbd(auVar15,ZEXT216(*(ushort *)
                                            ((param_1 - param_3) + -4 + (longlong)(puVar5 + 2))));
        in_XMM1 = pmovzxbd(auVar13,ZEXT216(*puVar5));
        auVar13._0_4_ = auVar14._0_4_ - in_XMM1._0_4_;
        auVar13._4_4_ = auVar14._4_4_ - in_XMM1._4_4_;
        auVar13._8_4_ = auVar14._8_4_ - in_XMM1._8_4_;
        auVar13._12_4_ = auVar14._12_4_ - in_XMM1._12_4_;
        in_XMM2 = pmulld(auVar13,auVar13);
        auVar14 = pmovsxdq(ZEXT216(*puVar5),in_XMM2);
        lVar1 = lVar1 + auVar14._0_8_;
        lVar2 = lVar2 + auVar14._8_8_;
        puVar5 = puVar5 + 2;
      } while (lVar8 < (longlong)(uVar12 & 0xfffffffffffffffc));
    }
    lVar9 = 0;
    lVar10 = 0;
    if (lVar8 < (longlong)uVar12) {
      if ((longlong)(uVar12 - lVar8) < 2) {
LAB_14568e3d7:
        iVar4 = (uint)*(byte *)(lVar8 + param_1) - (uint)*(byte *)(lVar8 + param_3);
        lVar6 = lVar6 + iVar4 * iVar4;
      }
      else {
        pbVar3 = (byte *)(param_3 + 1 + lVar8);
        lVar7 = ((uVar12 - lVar8) - 2 >> 1) + 1;
        lVar8 = lVar8 + lVar7 * 2;
        do {
          lVar9 = lVar9 + (int)(((uint)pbVar3[(param_1 - param_3) + -1] - (uint)pbVar3[-1]) *
                               ((uint)pbVar3[(param_1 - param_3) + -1] - (uint)pbVar3[-1]));
          lVar10 = lVar10 + (int)(((uint)pbVar3[param_1 - param_3] - (uint)*pbVar3) *
                                 ((uint)pbVar3[param_1 - param_3] - (uint)*pbVar3));
          lVar7 = lVar7 + -1;
          pbVar3 = pbVar3 + 2;
        } while (lVar7 != 0);
        if (lVar8 < (longlong)uVar12) goto LAB_14568e3d7;
      }
      lVar6 = lVar6 + lVar10 + lVar9;
    }
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) {
      auVar14._8_4_ = (int)(lVar2 + lVar17);
      auVar14._0_8_ = lVar1 + lVar16;
      auVar14._12_4_ = (int)((ulonglong)(lVar2 + lVar17) >> 0x20);
      return lVar1 + lVar16 + auVar14._8_8_ + lVar6;
    }
  } while( true );
}



// FUNCTION 14568e450 FUN_14568e450 body=475 status=ok
// SIG undefined FUN_14568e450(void)

longlong FUN_14568e450(longlong param_1,int param_2,longlong param_3,int param_4,uint param_5,
                      uint param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong lVar18;
  longlong lVar19;
  
  param_1 = param_1 * 2;
  uVar13 = (ulonglong)(int)param_5;
  param_3 = param_3 * 2;
  lVar7 = 0;
  if ((int)param_6 < 1) {
    return 0;
  }
  lVar18 = 0;
  lVar19 = 0;
  lVar2 = 0;
  lVar3 = 0;
  uVar12 = (ulonglong)param_6;
  do {
    lVar9 = 0;
    if (((0 < (int)param_5) && (3 < param_5)) && (1 < DAT_14c707900)) {
      puVar5 = (uint *)(param_3 + 4);
      do {
        auVar14 = ZEXT416(*(uint *)((param_1 - param_3) + -4 + (longlong)puVar5));
        lVar9 = lVar9 + 4;
        auVar15 = pmovzxwd(in_XMM2,auVar14);
        auVar14 = pmovzxwd(auVar14,ZEXT416(puVar5[-1]));
        auVar16._0_4_ = auVar15._0_4_ - auVar14._0_4_;
        auVar16._4_4_ = auVar15._4_4_ - auVar14._4_4_;
        auVar16._8_4_ = auVar15._8_4_ - auVar14._8_4_;
        auVar16._12_4_ = auVar15._12_4_ - auVar14._12_4_;
        auVar15 = pmulld(auVar16,auVar16);
        auVar14 = pmovsxdq(auVar14,auVar15);
        lVar18 = lVar18 + auVar14._0_8_;
        lVar19 = lVar19 + auVar14._8_8_;
        auVar14 = ZEXT416(*(uint *)((param_1 - param_3) + -8 + (longlong)(puVar5 + 2)));
        auVar15 = pmovzxwd(auVar15,auVar14);
        auVar14 = pmovzxwd(auVar14,ZEXT416(*puVar5));
        auVar17._0_4_ = auVar15._0_4_ - auVar14._0_4_;
        auVar17._4_4_ = auVar15._4_4_ - auVar14._4_4_;
        auVar17._8_4_ = auVar15._8_4_ - auVar14._8_4_;
        auVar17._12_4_ = auVar15._12_4_ - auVar14._12_4_;
        in_XMM2 = pmulld(auVar17,auVar17);
        auVar14 = pmovsxdq(auVar14,in_XMM2);
        lVar2 = lVar2 + auVar14._0_8_;
        lVar3 = lVar3 + auVar14._8_8_;
        puVar5 = puVar5 + 2;
      } while (lVar9 < (longlong)(uVar13 & 0xfffffffffffffffc));
    }
    lVar10 = 0;
    lVar11 = 0;
    if (lVar9 < (longlong)uVar13) {
      if ((longlong)(uVar13 - lVar9) < 2) {
LAB_14568e5b7:
        iVar6 = (uint)*(ushort *)(param_1 + lVar9 * 2) - (uint)*(ushort *)(param_3 + lVar9 * 2);
        lVar7 = lVar7 + iVar6 * iVar6;
      }
      else {
        lVar1 = lVar9 + 1;
        lVar8 = ((uVar13 - lVar9) - 2 >> 1) + 1;
        lVar9 = lVar9 + lVar8 * 2;
        puVar4 = (ushort *)(param_1 + lVar1 * 2);
        do {
          iVar6 = (uint)puVar4[-1] - (uint)*(ushort *)((param_3 - param_1) + -2 + (longlong)puVar4);
          lVar10 = lVar10 + iVar6 * iVar6;
          iVar6 = (uint)*puVar4 -
                  (uint)*(ushort *)((param_3 - param_1) + -4 + (longlong)(puVar4 + 2));
          lVar11 = lVar11 + iVar6 * iVar6;
          lVar8 = lVar8 + -1;
          puVar4 = puVar4 + 2;
        } while (lVar8 != 0);
        if (lVar9 < (longlong)uVar13) goto LAB_14568e5b7;
      }
      lVar7 = lVar7 + lVar11 + lVar10;
    }
    param_1 = param_1 + (longlong)param_2 * 2;
    param_3 = param_3 + (longlong)param_4 * 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) {
      auVar14._8_4_ = (int)(lVar3 + lVar19);
      auVar14._0_8_ = lVar2 + lVar18;
      auVar14._12_4_ = (int)((ulonglong)(lVar3 + lVar19) >> 0x20);
      return lVar2 + lVar18 + auVar14._8_8_ + lVar7;
    }
  } while( true );
}



// FUNCTION 14568e630 FUN_14568e630 body=425 status=ok
// SIG undefined FUN_14568e630(void)

longlong FUN_14568e630(longlong param_1,int param_2,longlong param_3,int param_4,uint param_5,
                      int param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = param_6;
  lVar3 = 0;
  uVar6 = (int)param_5 >> 0x1f & 0xf;
  uVar1 = param_5 + uVar6;
  iVar2 = (uVar1 & 0xf) - uVar6;
  uVar1 = (int)uVar1 >> 4;
  param_5 = param_5 - iVar2;
  uVar7 = param_6 >> 0x1f & 0xf;
  uVar6 = param_6 + uVar7;
  param_6 = (uVar6 & 0xf) - uVar7;
  uVar6 = (int)uVar6 >> 4;
  if (0 < iVar2) {
    lVar3 = FUN_14568e270((int)param_5 + param_1,param_2,param_3 + (int)param_5,param_4,iVar2,iVar8)
    ;
  }
  if (0 < param_6) {
    iVar8 = iVar8 - param_6;
    lVar4 = FUN_14568e270(iVar8 * param_2 + param_1,param_2,iVar8 * param_4 + param_3,param_4,
                          param_5,param_6);
    lVar3 = lVar3 + lVar4;
  }
  if (0 < (int)uVar6) {
    uVar5 = (ulonglong)uVar6;
    do {
      uVar9 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        lVar4 = param_1;
        do {
          (*DAT_14c7fbc38)(lVar4,param_2,(param_3 - param_1) + lVar4,param_4,&param_5);
          lVar4 = lVar4 + 0x10;
          lVar3 = lVar3 + (ulonglong)param_5;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      param_1 = param_1 + (param_2 << 4);
      param_3 = param_3 + (param_4 << 4);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return lVar3;
}



// FUNCTION 14568e7e0 FUN_14568e7e0 body=424 status=ok
// SIG undefined FUN_14568e7e0(void)

longlong FUN_14568e7e0(longlong param_1,int param_2,longlong param_3,int param_4,uint param_5,
                      int param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = param_6;
  lVar3 = 0;
  uVar6 = (int)param_5 >> 0x1f & 0xf;
  uVar1 = param_5 + uVar6;
  iVar2 = (uVar1 & 0xf) - uVar6;
  uVar1 = (int)uVar1 >> 4;
  param_5 = param_5 - iVar2;
  uVar7 = param_6 >> 0x1f & 0xf;
  uVar6 = param_6 + uVar7;
  param_6 = (uVar6 & 0xf) - uVar7;
  uVar6 = (int)uVar6 >> 4;
  if (0 < iVar2) {
    lVar3 = FUN_14568e450(param_1 + (int)param_5,param_2,param_3 + (int)param_5,param_4,iVar2,iVar8)
    ;
  }
  if (0 < param_6) {
    iVar8 = iVar8 - param_6;
    lVar4 = FUN_14568e450(iVar8 * param_2 + param_1,param_2,iVar8 * param_4 + param_3,param_4,
                          param_5,param_6);
    lVar3 = lVar3 + lVar4;
  }
  if (0 < (int)uVar6) {
    uVar5 = (ulonglong)uVar6;
    do {
      uVar9 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        lVar4 = param_1;
        do {
          FUN_14562fc20(lVar4,param_2,(param_3 - param_1) + lVar4,param_4,&param_5);
          lVar4 = lVar4 + 0x10;
          lVar3 = lVar3 + (ulonglong)param_5;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      param_1 = param_1 + (param_2 << 4);
      param_3 = param_3 + (param_4 << 4);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return lVar3;
}



// FUNCTION 14568e990 FUN_14568e990 body=10 status=ok
// SIG undefined FUN_14568e990(void)

void FUN_14568e990(void)

{
  FUN_14518ef70(4);
  return;
}



// FUNCTION 14568e9a0 FUN_14568e9a0 body=3 status=ok
// SIG undefined FUN_14568e9a0(void)

void FUN_14568e9a0(void)

{
  return;
}



// FUNCTION 14568e9b0 FUN_14568e9b0 body=3 status=ok
// SIG undefined FUN_14568e9b0(void)

void FUN_14568e9b0(void)

{
  return;
}



// FUNCTION 14568e9c0 FUN_14568e9c0 body=3 status=ok
// SIG undefined FUN_14568e9c0(void)

void FUN_14568e9c0(void)

{
  return;
}



// FUNCTION 14568e9d0 FUN_14568e9d0 body=5 status=ok
// SIG undefined FUN_14568e9d0(void)

void FUN_14568e9d0(longlong param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014518f049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(*(void **)(param_1 + -8));
    return;
  }
  return;
}



// FUNCTION 14568e9e0 FUN_14568e9e0 body=46 status=ok
// SIG undefined FUN_14568e9e0(void)

undefined4 FUN_14568e9e0(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 8;
  }
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
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return 0;
}



// FUNCTION 14568ea10 FUN_14568ea10 body=264 status=ok
// SIG undefined FUN_14568ea10(void)

undefined8 FUN_14568ea10(undefined8 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 == (int *)0x0) {
    return 8;
  }
  if (*param_3 != 0) {
    iVar6 = (**(code **)(param_3 + 0x12))(*(undefined8 *)(param_3 + 2));
    if (iVar6 == 1) goto LAB_14568ea6c;
    FUN_14518f040(*(undefined8 *)(param_3 + 0x1c));
  }
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  param_3[0x1e] = 0;
  param_3[0x1f] = 0;
LAB_14568ea6c:
  uVar7 = param_1[1];
  uVar1 = param_1[2];
  uVar4 = param_1[3];
  *(undefined8 *)(param_3 + 4) = *param_1;
  *(undefined8 *)(param_3 + 6) = uVar7;
  uVar7 = param_1[4];
  uVar5 = param_1[5];
  *(undefined8 *)(param_3 + 8) = uVar1;
  *(undefined8 *)(param_3 + 10) = uVar4;
  uVar1 = param_1[6];
  uVar4 = param_1[7];
  *(undefined8 *)(param_3 + 0xc) = uVar7;
  *(undefined8 *)(param_3 + 0xe) = uVar5;
  uVar7 = param_1[8];
  *(undefined8 *)(param_3 + 0x10) = uVar1;
  *(undefined8 *)(param_3 + 0x12) = uVar4;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_3 + 0x14) = uVar7;
  iVar6 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_3[0x16] = *param_2;
  param_3[0x17] = iVar6;
  param_3[0x18] = iVar2;
  param_3[0x19] = iVar3;
  *(undefined8 *)(param_3 + 0x1a) = uVar1;
  uVar7 = (**(code **)(param_3 + 6))(*(undefined8 *)(param_3 + 0x14),param_3 + 0x16,param_3 + 2);
  if ((int)uVar7 == 1) {
    return uVar7;
  }
  iVar6 = param_2[2];
  param_3[0x1e] = iVar6;
  lVar8 = FUN_14518ef70((longlong)iVar6 * 200);
  *(longlong *)(param_3 + 0x1c) = lVar8;
  if (lVar8 == 0) {
    return 2;
  }
  *param_3 = 1;
  return 0;
}



// FUNCTION 14568eb20 FUN_14568eb20 body=97 status=ok
// SIG undefined FUN_14568eb20(void)

undefined8 FUN_14568eb20(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 8;
  }
  if (*param_1 != 0) {
    uVar1 = (**(code **)(param_1 + 0x12))(*(undefined8 *)(param_1 + 2));
    if ((int)uVar1 == 1) {
      return uVar1;
    }
    FUN_14518f040(*(undefined8 *)(param_1 + 0x1c));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
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
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return 0;
}



// FUNCTION 14568eb90 FUN_14568eb90 body=405 status=ok
// SIG undefined FUN_14568eb90(void)

undefined1 FUN_14568eb90(int *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (param_1 == (int *)0x0) {
    return 8;
  }
  if (*param_1 != 0) {
    uVar3 = 0;
    if (0 < param_1[0x1e]) {
      uVar4 = uVar3;
      puVar5 = (undefined8 *)*param_2;
      do {
        lVar1 = *(longlong *)(param_1 + 0x1c);
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        *(undefined8 *)(uVar4 + lVar1) = *puVar5;
        *(undefined8 *)(uVar4 + 8 + lVar1) = puVar5[1];
        *(undefined8 *)(uVar4 + 0x10 + lVar1) = puVar5[2];
        *(undefined8 *)(uVar4 + 0x18 + lVar1) = puVar5[3];
        *(undefined8 *)(uVar4 + 0x20 + lVar1) = puVar5[4];
        *(undefined8 *)(uVar4 + 0x28 + lVar1) = puVar5[5];
        *(undefined8 *)(uVar4 + 0x30 + lVar1) = puVar5[6];
        *(undefined8 *)(uVar4 + 0x38 + lVar1) = puVar5[7];
        *(undefined8 *)(uVar4 + 0x40 + lVar1) = puVar5[8];
        *(undefined8 *)(uVar4 + 0x48 + lVar1) = puVar5[9];
        *(undefined8 *)(uVar4 + 0x50 + lVar1) = puVar5[10];
        *(undefined8 *)(uVar4 + 0x58 + lVar1) = puVar5[0xb];
        *(undefined8 *)(uVar4 + 0x60 + lVar1) = puVar5[0xc];
        *(undefined8 *)(uVar4 + 0x68 + lVar1) = puVar5[0xd];
        *(undefined8 *)(uVar4 + 0x70 + lVar1) = puVar5[0xe];
        *(undefined8 *)(uVar4 + 0x78 + lVar1) = puVar5[0xf];
        *(undefined8 *)(uVar4 + 0x80 + lVar1) = puVar5[0x10];
        *(undefined8 *)(uVar4 + 0x88 + lVar1) = puVar5[0x11];
        *(undefined8 *)(uVar4 + 0x90 + lVar1) = puVar5[0x12];
        *(undefined8 *)(uVar4 + 0x98 + lVar1) = puVar5[0x13];
        *(undefined8 *)(uVar4 + 0xa0 + lVar1) = puVar5[0x14];
        *(undefined8 *)(uVar4 + 0xa8 + lVar1) = puVar5[0x15];
        *(undefined8 *)(uVar4 + 0xb0 + lVar1) = puVar5[0x16];
        *(undefined8 *)(uVar4 + 0xb8 + lVar1) = puVar5[0x17];
        *(undefined8 *)(uVar4 + 0xc0 + lVar1) = puVar5[0x18];
        uVar4 = uVar4 + 200;
        puVar5 = puVar5 + 0x1a;
      } while ((int)uVar6 < param_1[0x1e]);
    }
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 2));
    return iVar2 == 1;
  }
  return false;
}



// FUNCTION 14568ed30 FUN_14568ed30 body=197 status=ok
// SIG undefined FUN_14568ed30(void)

void FUN_14568ed30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    local_54 = param_2;
    local_50 = param_3;
    local_4c = param_4;
    local_58 = FUN_14568f030(param_5);
    local_30 = param_6;
    local_2c = param_7;
    local_68 = local_3c;
    FUN_145620390(param_5,param_9,param_8,local_48);
    (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 2),&local_58,param_10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 14568ee00 FUN_14568ee00 body=184 status=ok
// SIG undefined FUN_14568ee00(void)

void FUN_14568ee00(int *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    local_78 = (longlong)
               (*(int *)(param_3 + 0xc) * *(int *)(param_3 + 8) +
               *(int *)(param_3 + 0x20) * *(int *)(param_3 + 0x1c) * 2);
    local_70 = param_7;
    local_98 = param_6;
    local_80 = param_2;
    FUN_14568dec0(param_3,param_4,local_68,param_5);
    local_88 = local_58;
    (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 2),&local_88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14568eed0 FUN_14568eed0 body=134 status=ok
// SIG undefined FUN_14568eed0(void)

undefined8 FUN_14568eed0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || ((*(byte *)(param_1 + 4) & 2) == 0)) {
    return 8;
  }
  iVar1 = (**(code **)(param_1 + 0xe))(*(undefined8 *)(param_1 + 2));
  if (((param_3[1] == 0) ||
      (((*param_2 <= *param_3 && (*param_3 < param_2[9])) && (param_2[4] != 0)))) &&
     (((*param_3 <= param_2[8] && (*param_3 - param_3[1] <= param_2[1])) && (iVar1 != 1)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14568ef60 FUN_14568ef60 body=192 status=ok
// SIG undefined FUN_14568ef60(void)

void FUN_14568ef60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && ((*(byte *)(param_1 + 4) & 4) != 0)) {
    local_54 = param_2;
    local_50 = param_3;
    local_4c = param_4;
    local_58 = FUN_14568f030(param_5);
    local_30 = param_6;
    local_2c = param_7;
    local_68 = local_3c;
    FUN_145620390(param_5,param_9,param_8,local_48);
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 2),&local_58,param_10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 14568f030 FUN_14568f030 body=121 status=ok
// SIG undefined FUN_14568f030(void)

undefined8 FUN_14568f030(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 1) {
    return 1;
  }
  if (param_1 == 2) {
    return 4;
  }
  if (param_1 != 3) {
    if (param_1 != 4) {
      uVar1 = __acrt_iob_func(2);
      FUN_146c958a0(uVar1,"Unsupported update_type %d\n",param_1);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    return 3;
  }
  return 2;
}



// FUNCTION 14568f0b0 FUN_14568f0b0 body=293 status=ok
// SIG undefined FUN_14568f0b0(void)

void FUN_14568f0b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar2 = FUN_145613df0(*(undefined8 *)(param_1 + 0x2e6c8));
  uVar5 = 0;
  uVar8 = uVar5;
  if ((*(int *)(param_1 + 0x2f69c) != -1) &&
     (iVar1 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f69c) * 4), iVar1 != -1))
  {
    uVar8 = *(longlong *)(param_1 + 0x2e4f0) + 0x58 + (longlong)iVar1 * 0xe0;
  }
  if (*(int *)(param_1 + 0xb42d4) < iVar2) {
    if (0x19 < iVar2) {
      iVar2 = 0x19;
    }
    *(int *)(param_1 + 0xb46a0) = iVar2;
    lVar7 = (longlong)iVar2;
    if (0 < iVar2) {
      puVar6 = (undefined8 *)(param_1 + 0xb45d8);
      do {
        memset((void *)*puVar6,0,
               (longlong)(*(int *)(param_1 + 0x2a30c) * *(int *)(param_1 + 0x2a304)) << 5);
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar7 = param_1 + 0xb45d8;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_145613da0(*(undefined8 *)(param_1 + 0x2e6c8),uVar5);
        FUN_14568f6d0(param_1,lVar7,uVar3,uVar8,*(undefined8 *)(param_1 + 0x2e6d8));
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        lVar7 = lVar7 + 8;
      } while ((int)uVar4 < iVar2);
    }
    FUN_1425b0090();
    FUN_14568f940(param_1);
  }
  return;
}



// FUNCTION 14568f1e0 FUN_14568f1e0 body=563 status=ok
// SIG undefined FUN_14568f1e0(void)

void FUN_14568f1e0(longlong param_1,short *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  int local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined1 *local_110;
  short *local_108;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  short local_b8;
  short local_b6;
  undefined4 local_b4;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_98 = *(undefined8 *)(param_1 + 0xb4b68);
  uStack_90 = *(undefined8 *)(param_1 + 0xb4b70);
  uVar1 = *(undefined4 *)(param_1 + 0xb46b0);
  local_88 = *(undefined4 *)(param_1 + 0xb4b78);
  uStack_84 = *(undefined4 *)(param_1 + 0xb4b7c);
  uStack_80 = *(undefined4 *)(param_1 + 0xb4b80);
  uStack_7c = *(undefined4 *)(param_1 + 0xb4b84);
  iVar2 = *(int *)(param_1 + 0xb46b4);
  local_78 = *(undefined8 *)(param_1 + 0xb4b88);
  uStack_70 = *(undefined8 *)(param_1 + 0xb4b90);
  local_a8 = *(undefined4 *)(param_1 + 0x12550);
  uStack_a4 = *(undefined4 *)(param_1 + 0x12554);
  uStack_a0 = *(undefined4 *)(param_1 + 0x12558);
  uStack_9c = *(undefined4 *)(param_1 + 0x1255c);
  local_b4 = param_4;
  FUN_1455aa900();
  local_b6 = param_2[1] >> 3;
  local_b8 = *param_2 >> 3;
  *(undefined4 *)(param_1 + 0xb46b0) = 2;
  local_110 = local_68;
  if (*(int *)(param_1 + 0xb46bc) == 0) {
    local_110 = (undefined1 *)0x0;
  }
  local_128 = 9;
  if (iVar2 < 9) {
    local_128 = iVar2;
  }
  local_f0 = (undefined1 *)((ulonglong)local_f0._4_4_ << 0x20);
  local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
  local_118 = *(undefined4 *)(param_1 + 0x1246c);
  local_120 = (undefined8 *)CONCAT44(local_120._4_4_,2);
  local_108 = param_2;
  local_100 = param_3;
  FUN_1455be8a0(param_1,param_1 + 0xc030,6,&local_b8);
  local_c8 = 0;
  local_e8 = local_b0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_f0 = local_ac;
  local_f8 = 0;
  *(undefined4 *)(param_1 + 0xb46b0) = uVar1;
  local_100 = (undefined4 *)0x0;
  *(undefined4 *)(param_1 + 0x12550) = local_a8;
  *(undefined4 *)(param_1 + 0x12554) = uStack_a4;
  *(undefined4 *)(param_1 + 0x12558) = uStack_a0;
  *(undefined4 *)(param_1 + 0x1255c) = uStack_9c;
  local_108 = (short *)local_68;
  if (*(int *)(param_1 + 0xb46bc) == 0) {
    local_108 = (short *)(undefined1 *)0x0;
  }
  local_110 = (undefined1 *)CONCAT44(local_110._4_4_,*(undefined4 *)(param_1 + 0xb46c0));
  local_120 = &local_98;
  local_118 = 0;
  local_128 = *(undefined4 *)(param_1 + 0x1246c);
  (**(code **)(param_1 + 0xb4998))
            (param_1 + 0xc030,param_3,param_2,*(undefined4 *)(param_1 + 0x2a2f8));
  *(undefined1 *)(**(longlong **)(param_1 + 0x12370) + 1) = 0xd;
  lVar3 = **(longlong **)(param_1 + 0x12370);
  *(undefined4 *)(lVar3 + 0xc) = *param_3;
  FUN_145478fd0(param_1 + 0x121b0,local_b4,param_5,CONCAT71((int7)((ulonglong)lVar3 >> 8),6));
  FUN_142697b70(*(undefined8 *)(param_1 + 0xe048),*(undefined4 *)(param_1 + 0xe050),
                *(undefined8 *)(param_1 + 0x121c0),*(undefined4 *)(param_1 + 0x121c8));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_148);
}



// FUNCTION 14568f430 FUN_14568f430 body=664 status=ok
// SIG undefined FUN_14568f430(void)

void FUN_14568f430(longlong param_1,uint *param_2,longlong param_3,int param_4,undefined8 param_5,
                  short *param_6,longlong param_7,undefined4 param_8,undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  longlong local_res8;
  undefined4 local_res20 [2];
  undefined8 uVar12;
  undefined4 uVar13;
  
  bVar11 = 0;
  local_res8 = (longlong)param_4;
  uVar7 = 0x7fffffff;
  *(longlong *)(param_1 + 0xe048) = *(longlong *)(param_3 + 0x38) + local_res8;
  *(undefined4 *)(param_1 + 0xe050) = *(undefined4 *)(param_3 + 0x10);
  *(longlong *)(param_1 + 0x121c0) =
       *(longlong *)
        ((longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x90 + *(longlong *)(param_1 + 0x2e4f0)) +
       local_res8;
  *(undefined4 *)(param_1 + 0x121c8) =
       *(undefined4 *)
        ((longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x68 + *(longlong *)(param_1 + 0x2e4f0));
  bVar10 = 0xff;
  do {
    *(byte *)(**(longlong **)(param_1 + 0x12370) + 1) = bVar11;
    uVar12 = *(undefined8 *)(param_1 + 0xe048);
    FUN_145477a70(param_1 + 0x121b0,2,2,bVar11,uVar12,*(undefined4 *)(param_1 + 0xe050),
                  *(undefined8 *)(param_1 + 0x121c0),*(undefined4 *)(param_1 + 0x121c8),0,0,0);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar6 = FUN_142697b70(*(undefined8 *)(param_1 + 0xe048),*(undefined4 *)(param_1 + 0xe050),
                          *(undefined8 *)(param_1 + 0x121c0),*(undefined4 *)(param_1 + 0x121c8));
    lVar2 = local_res8;
    bVar9 = bVar11;
    if (uVar7 <= uVar6) {
      bVar9 = bVar10;
      uVar6 = uVar7;
    }
    uVar7 = uVar6;
    bVar11 = bVar11 + 1;
    bVar10 = bVar9;
  } while (bVar11 < 10);
  uVar6 = 0x7fffffff;
  if (param_2 + 1 != (uint *)0x0) {
    *(byte *)(param_2 + 1) = bVar9;
  }
  lVar1 = CONCAT44(param_5._4_4_,(uint)param_5);
  if ((int)uVar7 < 1) {
    uVar7 = 1;
  }
  *param_2 = uVar7;
  if (lVar1 == 0) {
    uVar7 = 0x7fffffff;
    param_2[5] = 0;
  }
  else {
    *(longlong *)(param_1 + 0x121d0) = *(longlong *)(lVar1 + 0x38) + local_res8;
    *(undefined4 *)(param_1 + 0x121d8) = *(undefined4 *)(lVar1 + 0x10);
    uVar7 = FUN_142697b70(*(undefined8 *)(param_1 + 0xe048),*(undefined4 *)(param_1 + 0xe050));
    uVar5 = param_9;
    uVar4 = param_8;
    psVar3 = param_6;
    param_2[5] = 0;
    uVar8 = FUN_14568f1e0(param_1,param_6,&param_5,param_8,CONCAT44(uVar13,param_9));
    if (uVar8 < uVar7) {
      param_2[5] = (uint)param_5;
      uVar7 = uVar8;
    }
    if ((*psVar3 != 0) || (psVar3[1] != 0)) {
      local_res20[0] = 0;
      uVar8 = FUN_14568f1e0(param_1,local_res20,&local_res8,uVar4,uVar5);
      if (uVar8 < uVar7) {
        param_2[5] = (uint)local_res8;
        uVar7 = uVar8;
      }
    }
  }
  param_2[4] = uVar7;
  if (param_7 != 0) {
    *(longlong *)(param_1 + 0x121d0) = *(longlong *)(param_7 + 0x38) + lVar2;
    *(undefined4 *)(param_1 + 0x121d8) = *(undefined4 *)(param_7 + 0x10);
    uVar6 = FUN_142697b70(*(undefined8 *)(param_1 + 0xe048),*(undefined4 *)(param_1 + 0xe050));
  }
  param_2[7] = 0;
  param_2[6] = uVar6;
  return;
}



// FUNCTION 14568f6d0 FUN_14568f6d0 body=605 status=ok
// SIG undefined FUN_14568f6d0(void)

void FUN_14568f6d0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  int *local_1a0;
  undefined8 local_198;
  int local_190;
  int local_188;
  int local_178;
  int local_174;
  int local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_f8 [80];
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_108 = 0;
  iVar4 = 0;
  local_158 = param_5;
  *(undefined4 *)(param_1 + 0x12558) = 0xffffffec;
  local_138 = 0;
  uStack_130 = 0;
  local_170 = 0;
  *(int *)(param_1 + 0x1255c) = *(int *)(param_1 + 0x2a304) * 8 + 0xc;
  *(undefined8 *)(param_1 + 0x12380) = 0;
  *(undefined4 *)(param_1 + 0x121c8) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x121d8) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x12250) = *(undefined4 *)(param_3 + 0x24);
  local_128 = 0;
  uStack_120 = 0;
  local_174 = 0;
  local_118 = 0;
  uStack_110 = 0;
  **(longlong **)(param_1 + 0x12370) = (longlong)&local_148;
  local_178 = 0;
  local_148 = 6;
  uStack_140 = 0xff01;
  local_168 = param_2;
  local_160 = param_4;
  iVar2 = iVar4;
  if (0 < *(int *)(param_1 + 0x2a304)) {
    do {
      local_178 = iVar2;
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0x12550) = 0xffffffec;
      *(int *)(param_1 + 0x12554) = *(int *)(param_1 + 0x2a30c) * 8 + 0xc;
      *(undefined8 *)(param_1 + 0x12378) = 0;
      iVar2 = local_178;
      if (0 < *(int *)(param_1 + 0x2a30c)) {
        lVar5 = (longlong)local_170 << 5;
        iVar6 = local_174;
        do {
          lVar1 = *param_2;
          local_1a0 = &local_178;
          local_1a8 = param_4;
          local_198 = param_5;
          local_190 = iVar4;
          local_188 = iVar3;
          FUN_14568f430(param_1,lVar1 + lVar5,param_3,iVar6);
          local_178 = *(int *)(lVar1 + lVar5 + 0x14);
          if (iVar3 == 0) {
            iVar2 = local_178;
          }
          iVar6 = iVar6 + 0x10;
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 0x20;
          *(undefined1 **)(param_1 + 0x12378) = local_f8;
          *(int *)(param_1 + 0x12550) = *(int *)(param_1 + 0x12550) + -0x10;
          *(int *)(param_1 + 0x12554) = *(int *)(param_1 + 0x12554) + -0x10;
          param_2 = local_168;
          param_4 = local_160;
          param_5 = local_158;
        } while (iVar3 < *(int *)(param_1 + 0x2a30c));
      }
      iVar4 = iVar4 + 1;
      *(undefined1 **)(param_1 + 0x12380) = local_a8;
      iVar3 = *(int *)(param_3 + 0x10);
      *(int *)(param_1 + 0x12558) = *(int *)(param_1 + 0x12558) + -0x10;
      *(int *)(param_1 + 0x1255c) = *(int *)(param_1 + 0x1255c) + -0x10;
      local_170 = local_170 + *(int *)(param_1 + 0x2a30c);
      local_174 = local_174 + iVar3 * 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x2a304));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 14568f940 FUN_14568f940 body=483 status=ok
// SIG undefined FUN_14568f940(void)

void FUN_14568f940(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  int iStack_24;
  
  iVar2 = *(int *)(param_1 + 0xb46a0);
  lVar3 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a304) * *(int *)(param_1 + 0x2a30c)) << 2,1
                       );
  if (lVar3 == 0) {
    FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate arf_not_zz");
  }
  iVar6 = *(int *)(param_1 + 0xb42d4);
  if (iVar2 <= *(int *)(param_1 + 0xb42d4)) {
    iVar6 = iVar2;
  }
  iVar2 = 0;
  lVar5 = (longlong)(iVar6 + -1);
  if (-1 < iVar6 + -1) {
    plVar10 = (longlong *)(param_1 + 0xb45d8 + lVar5 * 8);
    do {
      iVar6 = 0;
      iVar11 = 0;
      if (0 < *(int *)(param_1 + 0x2a304)) {
        do {
          iVar9 = *(int *)(param_1 + 0x2a30c);
          iVar8 = 0;
          if (0 < iVar9) {
            lVar7 = (longlong)iVar6 << 5;
            piVar4 = (int *)(lVar3 + (longlong)iVar6 * 4);
            do {
              lVar1 = *plVar10;
              iVar9 = *(int *)(lVar7 + 0x18 + lVar1);
              if (((1000 < iVar9) || (*(int *)(lVar7 + lVar1) < iVar9)) ||
                 (*(int *)(lVar7 + 0x10 + lVar1) < iVar9)) {
                *piVar4 = *piVar4 + 1;
              }
              iVar9 = *(int *)(param_1 + 0x2a30c);
              iVar8 = iVar8 + 1;
              lVar7 = lVar7 + 0x20;
              piVar4 = piVar4 + 1;
            } while (iVar8 < iVar9);
          }
          iVar6 = iVar6 + iVar9;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_1 + 0x2a304));
      }
      plVar10 = plVar10 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar6 = *(int *)(param_1 + 0x2a308);
  iVar11 = 0;
  iStack_24 = 0;
  if (0 < iVar6) {
    do {
      iVar6 = *(int *)(param_1 + 0x2a310);
      iVar9 = 0;
      if (0 < iVar6) {
        do {
          bVar12 = *(int *)(lVar3 + (longlong)
                                    (iVar9 / 2 + (iVar11 / 2) * *(int *)(param_1 + 0x2a30c)) * 4) ==
                   0;
          if (bVar12) {
            iStack_24 = iStack_24 + 1;
          }
          *(bool *)((longlong)(iVar11 * iVar6 + iVar9) + *(longlong *)(param_1 + 0xb4950)) = bVar12;
          iVar9 = iVar9 + 1;
          iVar6 = *(int *)(param_1 + 0x2a310);
        } while (iVar9 < iVar6);
      }
      iVar6 = *(int *)(param_1 + 0x2a308);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar6);
  }
  if (*(int *)(param_1 + 0x2a300) != 0) {
    iVar2 = (iStack_24 * 100) / (iVar6 * *(int *)(param_1 + 0x2a310));
  }
  *(int *)(param_1 + 0xb46a4) = iVar2;
  FUN_145679d50(param_1 + 0x2b088);
  FUN_14518f040(lVar3);
  return;
}



// FUNCTION 14568fb30 FUN_14568fb30 body=1185 status=ok
// SIG undefined FUN_14568fb30(void)

void FUN_14568fb30(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0xb46e0) = 3;
  *(undefined4 *)(param_1 + 0xb46dc) = 1;
  *(undefined4 *)(param_1 + 0xb46bc) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xb46b0);
  *(undefined8 *)(param_1 + 0xb46c0) = 2;
  *puVar1 = 1;
  if ((*(int *)(param_1 + 0x2e5ac) != 0) || (uVar4 = 0, *(int *)(param_1 + 0x2e5a8) != 0)) {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xb46e4) = uVar4;
  *(undefined8 *)(param_1 + 0xb46b4) = 0;
  *(undefined4 *)(param_1 + 0xb4704) = 1;
  *(undefined4 *)(param_1 + 0xb46d8) = 6;
  *(undefined1 *)(param_1 + 0xb46ec) = 0;
  *(undefined4 *)(param_1 + 0xb4734) = 0;
  *(undefined4 *)(param_1 + 0xb473c) = 0;
  *(undefined4 *)(param_1 + 0xb4774) = 0;
  *(undefined4 *)(param_1 + 0xb4778) = 1;
  *(undefined8 *)(param_1 + 0xb47a4) = 0;
  *(undefined8 *)(param_1 + 0xb47ac) = 0;
  *(undefined8 *)(param_1 + 0xb47b4) = 0;
  *(undefined8 *)(param_1 + 0xb47bc) = 0;
  *(undefined8 *)(param_1 + 0xb4744) = 0;
  *(undefined8 *)(param_1 + 0xb4750) = 0;
  *(undefined2 *)(param_1 + 0xb4758) = 0xd;
  *(undefined4 *)(param_1 + 0xb4760) = 0;
  *(undefined2 *)(param_1 + 0xb4764) = 0;
  *(undefined1 *)(param_1 + 0xb4766) = 0xc;
  *(undefined4 *)(param_1 + 0xb4768) = 0;
  *(undefined8 *)(param_1 + 0xb476c) = 4;
  *(undefined8 *)(param_1 + 0xb47c4) = 0;
  *(undefined4 *)(param_1 + 0xb47cc) = 0;
  *(undefined4 *)(param_1 + 0xb4890) = 0;
  *(undefined4 *)(param_1 + 0xb4720) = 0;
  *(undefined8 *)(param_1 + 0xb4728) = 0x4058c00000000000;
  *(undefined8 *)(param_1 + 0xb4710) = 0x4058c00000000000;
  *(undefined4 *)(param_1 + 0xb4708) = uVar4;
  *(undefined4 *)(param_1 + 0xb4718) = 1;
  *(undefined4 *)(param_1 + 0xb471c) = *(undefined4 *)(param_1 + 0x2e678);
  *(undefined4 *)(param_1 + 0xb475c) = 0;
  *(undefined4 *)(param_1 + 0xb491c) = 7;
  *(undefined4 *)(param_1 + 0xb4930) = 0;
  *(undefined4 *)(param_1 + 0xb47d0) = 0x3ff;
  *(undefined4 *)(param_1 + 0xb47e0) = 0x3ff;
  *(undefined4 *)(param_1 + 0xb47d4) = 0x3ff;
  *(undefined4 *)(param_1 + 0xb47e4) = 0x3ff;
  *(undefined4 *)(param_1 + 0xb47d8) = 0x3ff;
  *(undefined4 *)(param_1 + 0xb47e8) = 0x3ff;
  *(undefined4 *)(param_1 + 0xb47dc) = 0x3ff;
  *(undefined4 *)(param_1 + 0xb47ec) = 0x3ff;
  *(undefined8 *)(param_1 + 0xb4824) = 0;
  *(undefined4 *)(param_1 + 0xb46f8) = 0;
  *(undefined4 *)(param_1 + 0xb4700) = 0;
  *(undefined8 *)(param_1 + 0xb482c) = 0;
  *(undefined4 *)(param_1 + 0xb486c) = 0;
  *(undefined4 *)(param_1 + 0xb4740) = 0x1e;
  *(undefined4 *)(param_1 + 0xb47a0) = 0;
  *(undefined4 *)(param_1 + 0xb4834) = 0;
  *(undefined4 *)(param_1 + 0xb4838) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb483c) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4840) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4844) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4848) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb484c) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4850) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4854) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4858) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb485c) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4860) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4864) = 0x3c00;
  *(undefined4 *)(param_1 + 0xb4868) = 0x3c00;
  *(undefined1 *)(param_1 + 0xb4878) = 0xc;
  *(undefined8 *)(param_1 + 0xb487c) = 0x32;
  *(undefined1 *)(param_1 + 0xb474c) = 6;
  *(undefined4 *)(param_1 + 0xb4884) = 0;
  *(undefined4 *)(param_1 + 0xb4870) = 0xc;
  *(undefined4 *)(param_1 + 0xb4874) = 0x19;
  *(undefined1 *)(param_1 + 0xb4888) = 4;
  *(undefined8 *)(param_1 + 0xb48d0) = 0;
  *(undefined8 *)(param_1 + 0xb48d8) = 0;
  *(undefined8 *)(param_1 + 0xb48e0) = 0;
  *(undefined8 *)(param_1 + 0xb48c0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb48c8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb48bc) = 0;
  *(undefined4 *)(param_1 + 0xb4918) = 2;
  *(undefined4 *)(param_1 + 0xb46f0) = 1;
  *(undefined4 *)(param_1 + 0xb488c) = 1;
  *(undefined4 *)(param_1 + 0xb4738) = 2;
  bVar6 = *(int *)(param_1 + 0xb4fb0) == 1;
  uVar4 = 0x7fffffff;
  if (bVar6) {
    uVar4 = 0x100000;
  }
  *(undefined4 *)(param_1 + 0xb477c) = uVar4;
  if (bVar6) {
    *(undefined4 *)(param_1 + 0xb4780) = DAT_14c7480a0;
    *(undefined4 *)(param_1 + 0xb4784) = DAT_14c7480a4;
    *(undefined4 *)(param_1 + 0xb4788) = DAT_14c7480a8;
    *(undefined4 *)(param_1 + 0xb478c) = DAT_14c7480ac;
    *(undefined4 *)(param_1 + 0xb4790) = DAT_14c7480b0;
    *(undefined4 *)(param_1 + 0xb4794) = DAT_14c7480b4;
    *(undefined4 *)(param_1 + 0xb4798) = DAT_14c7480b8;
    *(undefined4 *)(param_1 + 0xb479c) = DAT_14c7480bc;
  }
  if (*(int *)(param_1 + 0x2e568) == 2) {
    FUN_145690c20(param_1,puVar1,param_2,*(undefined4 *)(param_1 + 0x2e69c));
  }
  else if (*(int *)(param_1 + 0x2e568) == 0) {
    FUN_1456905d0(param_1,param_1 + 0x29ee0,puVar1,param_2);
  }
  *(undefined8 *)(param_1 + 0xb4a40) = DAT_14c7fe670;
  iVar2 = *(int *)(param_1 + 0x2e56c);
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0xb46e4) = 0;
  }
  else if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0xb46e0) = 0;
  }
  if (*(int *)(param_1 + 0xb46c4) == 3) {
    pcVar5 = FUN_1455be2a0;
LAB_14568ff39:
    *(code **)(param_1 + 0xb4998) = pcVar5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb46bc);
    if (iVar3 == 0) {
      pcVar5 = FUN_1455abb60;
      goto LAB_14568ff39;
    }
    if (iVar3 == 1) {
      pcVar5 = FUN_1455ad0b0;
      goto LAB_14568ff39;
    }
    if (iVar3 == 2) {
      pcVar5 = FUN_1455b3430;
      goto LAB_14568ff39;
    }
    if (iVar3 == 3) {
      pcVar5 = FUN_1455b8a90;
      goto LAB_14568ff39;
    }
  }
  if (*(int *)(param_1 + 0x2e6bc) == 1) {
    pcVar5 = FUN_1455be3b0;
  }
  else {
    if (*(int *)(param_1 + 0x2e6bc) != 2) goto LAB_14568ff66;
    pcVar5 = FUN_1455be4a0;
  }
  *(code **)(param_1 + 0xb4998) = pcVar5;
LAB_14568ff66:
  if ((*(int *)(param_1 + 0xb46e4) != 1) || (uVar4 = 1, iVar2 == 1)) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x20178) = uVar4;
  *(undefined1 *)(param_1 + 0x1248c) = *(undefined1 *)(param_1 + 0xb4765);
  *(undefined1 *)(param_1 + 0x1248d) = *(undefined1 *)(param_1 + 0xb4766);
  if (*(int *)(param_1 + 0x2e5c8) == 0) {
    *(undefined4 *)(param_1 + 0xb47c4) = 0;
  }
  if (((*(int *)(param_1 + 0xb46f4) == 0) && (*(int *)(param_1 + 0xcee14) != 0)) &&
     (1 < *(int *)(param_1 + 0x2e67c))) {
    *(undefined4 *)(param_1 + 0xb46f0) = 0;
  }
  return;
}



// FUNCTION 14568ffe0 FUN_14568ffe0 body=539 status=ok
// SIG undefined FUN_14568ffe0(void)

void FUN_14568ffe0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0xb4898) = 0x80000;
  *(undefined4 *)(param_1 + 0xb48a0) = 0x50;
  *(undefined4 *)(param_1 + 0xb48b8) = 0;
  *(undefined4 *)(param_1 + 0xb48a8) = 0;
  if (*(int *)(param_1 + 0x2e568) == 2) {
    uVar4 = 0x1f;
    if (0 < param_2) {
      iVar3 = *(int *)(param_1 + 0x2a048);
      if (*(int *)(param_1 + 0x2a04c) <= *(int *)(param_1 + 0x2a048)) {
        iVar3 = *(int *)(param_1 + 0x2a04c);
      }
      if (iVar3 < 0x2d0) {
        *(undefined4 *)(param_1 + 0xb4770) = 0x18;
      }
      else {
        uVar1 = uVar4;
        if (*(int *)(param_1 + 0x2a2e8) != 0) {
          uVar1 = 0x3f;
        }
        *(undefined4 *)(param_1 + 0xb4770) = uVar1;
      }
    }
    if (1 < param_2) {
      iVar3 = *(int *)(param_1 + 0x2a048);
      if (*(int *)(param_1 + 0x2a04c) <= *(int *)(param_1 + 0x2a048)) {
        iVar3 = *(int *)(param_1 + 0x2a04c);
      }
      if (iVar3 < 0x2d0) {
        *(undefined4 *)(param_1 + 0xb4770) = 0x1e;
      }
      else {
        if (*(int *)(param_1 + 0x2a2e8) != 0) {
          uVar4 = 0x3f;
        }
        *(undefined4 *)(param_1 + 0xb4770) = uVar4;
      }
    }
    if (4 < param_2) {
      *(undefined4 *)(param_1 + 0xb48a0) = 200;
      iVar3 = *(int *)(param_1 + 0x2a048);
      if (*(int *)(param_1 + 0x2a04c) <= *(int *)(param_1 + 0x2a048)) {
        iVar3 = *(int *)(param_1 + 0x2a04c);
      }
      uVar2 = 0x800000;
      if (0x2cf < iVar3) {
        uVar2 = 0x2000000;
      }
      *(undefined8 *)(param_1 + 0xb4898) = uVar2;
    }
    if (6 < param_2) {
      iVar3 = *(int *)(param_1 + 0x2a048);
      if (*(int *)(param_1 + 0x2a04c) <= *(int *)(param_1 + 0x2a048)) {
        iVar3 = *(int *)(param_1 + 0x2a04c);
      }
      uVar4 = 300;
      if (0x2cf < iVar3) {
        uVar4 = 800;
      }
      *(undefined4 *)(param_1 + 0xb4884) = uVar4;
    }
  }
  else if (*(int *)(param_1 + 0x2e568) == 0) {
    FUN_145690200(param_1,param_1 + 0xb46b0,param_2);
  }
  if (*(int *)(param_1 + 0xb4770) == 0x3f) {
    *(undefined4 *)(param_1 + 0xb47a4) = 0;
  }
  if (((*(int *)(param_1 + 0xb4948) != 0) && (*(int *)(param_1 + 0x2e568) == 2)) &&
     (*(int *)(param_1 + 0xb4948) < *(int *)(param_1 + 0xb4884))) {
    *(int *)(param_1 + 0xb4948) = *(int *)(param_1 + 0xb4884);
  }
  if ((*(byte *)(param_1 + 0xb4770) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x30840) = 0x7fffffff;
  }
  if ((*(byte *)(param_1 + 0xb4770) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x30844) = 0x7fffffff;
  }
  if ((*(byte *)(param_1 + 0xb4770) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x30848) = 0x7fffffff;
  }
  if ((*(byte *)(param_1 + 0xb4770) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x3084c) = 0x7fffffff;
  }
  if ((*(byte *)(param_1 + 0xb4770) & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x30850) = 0x7fffffff;
  }
  if ((*(byte *)(param_1 + 0xb4770) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x30854) = 0x7fffffff;
  }
  if (((*(int *)(param_1 + 0xb46f4) == 0) && (*(int *)(param_1 + 0xcee14) != 0)) &&
     (1 < *(int *)(param_1 + 0x2e67c))) {
    *(undefined4 *)(param_1 + 0xb46f0) = 0;
  }
  return;
}



// FUNCTION 145690200 FUN_145690200 body=974 status=ok
// SIG undefined FUN_145690200(void)

void FUN_145690200(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_1 + 0x2a048);
  if (*(int *)(param_1 + 0x2a04c) <= *(int *)(param_1 + 0x2a048)) {
    iVar1 = *(int *)(param_1 + 0x2a04c);
  }
  *(undefined8 *)(param_2 + 0x1e8) = 0x100000;
  *(undefined4 *)(param_2 + 0x1f0) = 0x50;
  *(undefined2 *)(param_2 + 0xa8) = 0xd;
  if (iVar1 < 0x1e0) {
    *(undefined1 *)(param_2 + 0xa8) = 9;
    *(undefined4 *)(param_2 + 0x1f8) = 1;
LAB_145690298:
    *(undefined4 *)(param_2 + 0x1fc) = 0x40200000;
    *(undefined4 *)(param_2 + 0x200) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x204) = 0x3fc00000;
  }
  else {
    *(undefined4 *)(param_2 + 0x208) = 1;
    if (iVar1 < 0x438) {
      *(undefined4 *)(param_2 + 0x1f8) = 1;
      if (iVar1 < 0x2d0) goto LAB_145690298;
      *(undefined8 *)(param_2 + 0x1fc) = 0;
      *(undefined4 *)(param_2 + 0x204) = 0;
    }
  }
  if (param_3 < 1) goto LAB_145690385;
  *(undefined4 *)(param_2 + 0x208) = 0;
  *(undefined4 *)(param_2 + 0x1f8) = 1;
  if (iVar1 < 0x1e0) {
    *(undefined2 *)(param_2 + 0xa8) = 0x609;
LAB_145690312:
    fVar8 = -1.0;
    uVar6 = 0x200000;
    fVar7 = -1.0;
    uVar5 = 0x18;
  }
  else {
    *(undefined2 *)(param_2 + 0xa8) = 0x60c;
    if (iVar1 < 0x2d0) goto LAB_145690312;
    fVar8 = -9.0;
    uVar6 = 0x400000;
    fVar7 = -5.0;
    uVar5 = 0x1f;
    if (*(int *)(param_1 + 0x2a2e8) != 0) {
      uVar5 = 0x3f;
    }
  }
  *(undefined4 *)(param_2 + 0xc0) = uVar5;
  *(undefined8 *)(param_2 + 0x1e8) = uVar6;
  *(float *)(param_2 + 0x1fc) = fVar7;
  *(float *)(param_2 + 0x200) = fVar7;
  *(float *)(param_2 + 0x204) = fVar8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x2e6d8) + 0x98) & 8) != 0) {
    *(float *)(param_2 + 0x1fc) = fVar7 - 1.0;
    *(float *)(param_2 + 0x200) = fVar7 - 1.0;
    *(float *)(param_2 + 0x204) = fVar8 - 1.0;
  }
LAB_145690385:
  if (1 < param_3) {
    *(undefined2 *)(param_2 + 0xa8) = 0xd00;
    if (iVar1 < 0x2d0) {
      *(undefined4 *)(param_2 + 0xc0) = 0x1e;
      *(undefined8 *)(param_2 + 0x1e8) = 0x400000;
      *(undefined4 *)(param_2 + 0x1f0) = 100;
      *(undefined4 *)(param_2 + 0x1fc) = 0;
      *(undefined4 *)(param_2 + 0x200) = 0xbf800000;
      *(undefined4 *)(param_2 + 0x204) = 0xc0800000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2a2e8);
      *(undefined4 *)(param_2 + 0xf4) = 0;
      uVar5 = 0x1f;
      if (iVar3 != 0) {
        uVar5 = 0x3f;
      }
      *(undefined8 *)(param_2 + 0x1e8) = 0x1000000;
      *(undefined4 *)(param_2 + 0xc0) = uVar5;
      *(undefined4 *)(param_2 + 0x1f0) = 0x78;
      *(undefined4 *)(param_2 + 0x1f8) = 0;
    }
    uVar4 = *(int *)(param_1 + 0x2a048) * *(int *)(param_1 + 0x2a04c);
    if (uVar4 < 0xe1000) {
      uVar2 = 0;
    }
    else {
      uVar2 = 6;
      if (uVar4 < 0x1fa400) {
        uVar2 = 3;
      }
    }
    *(undefined1 *)(param_2 + 0xb4) = uVar2;
    if (0x86f < iVar1) {
      *(undefined4 *)(param_2 + 300) = 1;
      *(undefined4 *)(param_2 + 0x13c) = 1;
      *(undefined4 *)(param_2 + 0xc0) = 0x3f;
      *(undefined4 *)(param_2 + 0xa4) = 1;
      *(undefined4 *)(param_2 + 0x108) = 1;
      *(undefined4 *)(param_2 + 0xfc) = 1;
      *(undefined4 *)(param_2 + 0x1e0) = 1;
    }
  }
  if (param_3 < 3) {
    if (param_3 < 1) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1f8) = 0;
    if (iVar1 < 0x2d0) {
      *(undefined1 *)(param_2 + 0x1c8) = 9;
      *(undefined4 *)(param_2 + 0xc0) = 0x1f;
      iVar3 = *(int *)(param_1 + 0x2a31c);
      *(undefined8 *)(param_2 + 0x1e8) = 0x800000;
      *(undefined4 *)(param_2 + 0x1f0) = 0x78;
      *(uint *)(param_2 + 0xf0) = (uint)(iVar3 < 0xaf);
    }
    else {
      *(undefined4 *)(param_2 + 0xc0) = 0x3f;
      iVar3 = *(int *)(param_1 + 0x2a31c);
      *(undefined8 *)(param_2 + 0x1e8) = 0x2000000;
      *(undefined4 *)(param_2 + 0x1f0) = 200;
      *(uint *)(param_2 + 0xf0) = (uint)(iVar3 < 0xdc);
    }
  }
  if ((*(int *)(param_1 + 0x2e56c) == 2) &&
     ((*(int *)(param_1 + 0xb4fb0) == 1 || (iVar3 = FUN_14566f100(param_1), iVar3 != 0)))) {
    *(undefined4 *)(param_2 + 0xc0) = 0x18;
  }
  if (3 < param_3) {
    *(undefined4 *)(param_2 + 0x1f0) = 300;
    uVar6 = 0x4000000;
    if (iVar1 < 0x2d0) {
      uVar6 = 0x1000000;
    }
    *(undefined8 *)(param_2 + 0x1e8) = uVar6;
    *(undefined4 *)(param_2 + 0xc0) = 0x3f;
  }
  if (4 < param_3) {
    *(undefined4 *)(param_2 + 0x1f0) = 500;
  }
  return;
}



// FUNCTION 1456905d0 FUN_1456905d0 body=1611 status=ok
// SIG undefined FUN_1456905d0(void)

int FUN_1456905d0(longlong param_1,longlong param_2,undefined4 *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
      (*(int *)(param_1 + 0x2f6cc) != 0)) ||
     ((*(int *)(param_1 + 0x2f6c8) != 0 && (*(int *)(param_1 + 0xb4304) == 0)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined8 *)(param_3 + 0x10) = 1;
  param_3[0x28] = 1;
  param_3[0x29] = uVar6;
  param_3[0x83] = 1;
  param_3[0x77] = 1;
  param_3[0x14] = 1;
  param_3[0x2b] = 1;
  param_3[0x84] = 0xffffffff;
  param_3[0x85] = 0x15e;
  param_3[0x86] = 0x145;
  param_3[0x87] = 0xfa;
  uVar7 = 0x7fffffff;
  uVar3 = 0x400000;
  if (*(int *)(param_1 + 0xb4fb0) != 1) {
    uVar3 = 0x7fffffff;
  }
  param_3[0x33] = uVar3;
  param_3[0x34] = DAT_14c7480c0;
  param_3[0x35] = DAT_14c7480c4;
  param_3[0x36] = DAT_14c7480c8;
  param_3[0x37] = DAT_14c7480cc;
  param_3[0x38] = DAT_14c7480d0;
  param_3[0x39] = DAT_14c7480d4;
  param_3[0x3a] = DAT_14c7480d8;
  iVar4 = DAT_14c7480dc;
  param_3[0x3b] = DAT_14c7480dc;
  if ((int)param_4 < 1) goto LAB_1456908ab;
  param_3[0x9b] = 1;
  param_3[0x83] = uVar6;
  param_3[0x85] = 0xe1;
  param_3[0x86] = 0xe1;
  param_3[0x87] = 0xe1;
  if (*(int *)(param_1 + 0x2e56c) == 2) {
    uVar3 = uVar6;
    if ((*(int *)(param_1 + 0xb4fb0) != 1) && (iVar4 = FUN_14566f100(), iVar4 == 0)) {
      if (*(int *)(param_2 + 0x404) != 0) {
        cVar1 = *(char *)(param_2 + 0x414);
        goto LAB_1456907a6;
      }
      goto LAB_1456907ad;
    }
  }
  else {
    if (*(int *)(param_2 + 0x404) != 0) {
      cVar1 = *(char *)(param_2 + 0x414);
LAB_1456907a6:
      uVar3 = 1;
      if (cVar1 == '\0') goto LAB_1456907b0;
    }
LAB_1456907ad:
    uVar3 = 0;
  }
LAB_1456907b0:
  param_3[0x29] = uVar3;
  param_3[0x1c] = 1;
  param_3[0x28] = 1;
  uVar5 = 5;
  if ((int)param_4 < 6) {
    uVar5 = (ulonglong)param_4;
  }
  param_3[0x5d] = 1;
  param_3[0x31] = 1;
  param_3[2] = 1;
  *(undefined8 *)(param_3 + 0x1e) = *(undefined8 *)(&DAT_14c748120 + uVar5 * 8);
  param_3[0x16] = param_3[0xd];
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(&DAT_14c748150 + uVar5 * 8);
  param_3[0x10] = 2;
  param_3[4] = 1;
  if (*(int *)(param_1 + 0x2e69c) != 2) {
    param_3[0x24] = 10;
  }
  param_3[0x1a] = 0;
  param_3[0x4b] = 7;
  param_3[0x4f] = 7;
  param_3[0x3d] = 1;
  if (*(int *)(param_1 + 0x2e69c) != 2) {
    param_3[0x4a] = 7;
    param_3[0x4e] = 7;
  }
  param_3[0x70] = 0xf;
  iVar4 = 0x800000;
  param_3[0x71] = 0x1e;
  iVar2 = *(int *)(param_1 + 0xb4fb0);
  param_3[0x9a] = 1;
  if (iVar2 == 1) {
    uVar7 = 0x800000;
  }
  param_3[0x33] = uVar7;
LAB_1456908ab:
  if (1 < (int)param_4) {
    param_3[0x83] = 0;
    param_3[0xc] = (*(int *)(param_1 + 0x2e5d8) != 0) + 2;
    if ((((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
        (*(int *)(param_1 + 0x2f6cc) != 0)) ||
       ((*(int *)(param_1 + 0x2f6c8) != 0 && (*(int *)(param_1 + 0xb4304) == 0)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    param_3[0x21] = uVar3;
    param_3[0x25] = (uint)(*(int *)(param_1 + 0x2e5bc) != 2);
    iVar2 = *(int *)(param_2 + 0x404);
    param_3[0x47] = 100;
    iVar4 = -iVar2;
    *(undefined1 *)(param_3 + 0xf) = 0xd;
    param_3[0x2c] = 1;
    param_3[0x70] = 0xf;
    param_3[0x46] = -(uint)(iVar2 != 0) & 0x3a;
    *(undefined8 *)(param_3 + 0x85) = 0xffffffffffffffff;
    param_3[0x87] = 0xffffffff;
    param_3[0x71] = 0x2d;
    param_3[0x32] = 0;
    param_3[0x2b] = 0;
    param_3[4] = 0;
    if (*(int *)(param_1 + 0xb4fb0) == 1) {
      param_3[0x34] = DAT_14c7480e0;
      param_3[0x35] = DAT_14c7480e4;
      param_3[0x36] = DAT_14c7480e8;
      param_3[0x37] = DAT_14c7480ec;
      param_3[0x38] = DAT_14c7480f0;
      param_3[0x39] = DAT_14c7480f4;
      param_3[0x3a] = DAT_14c7480f8;
      iVar4 = DAT_14c7480fc;
      param_3[0x3b] = DAT_14c7480fc;
    }
    param_3[0x9a] = 0;
    if (2 < (int)param_4) {
      if ((*(int *)(param_2 + 0x404) == 0) || (uVar3 = 1, *(char *)(param_2 + 0x414) != '\0')) {
        uVar3 = 0;
      }
      param_3[0x29] = uVar3;
      if ((*(int *)(param_2 + 0x404) == 0) || (iVar4 = 1, *(char *)(param_2 + 0x414) != '\0')) {
        iVar4 = 0;
      }
      param_3[3] = 1;
      param_3[0x21] = iVar4;
      param_3[0x10] = 3;
      param_3[0x4b] = 1;
      param_3[0x4f] = 1;
      param_3[0x3d] = 0;
      param_3[0x3e] = 1;
      param_3[0x40] = uVar6;
      param_3[0x3f] = 1;
      param_3[0x42] = 1;
      param_3[0xc] = 1;
      param_3[0x24] = 6;
      param_3[0x78] = 1;
      if (*(int *)(param_1 + 0xb4fb0) == 1) {
        param_3[0x34] = DAT_14c748100;
        param_3[0x35] = DAT_14c748104;
        param_3[0x36] = DAT_14c748108;
        param_3[0x37] = DAT_14c74810c;
        param_3[0x38] = DAT_14c748110;
        param_3[0x39] = DAT_14c748114;
        param_3[0x3a] = DAT_14c748118;
        iVar4 = DAT_14c74811c;
        param_3[0x3b] = DAT_14c74811c;
      }
    }
    if (3 < (int)param_4) {
      param_3[0x29] = 1;
      param_3[0x21] = 1;
      *param_3 = 3;
      param_3[3] = 2;
      param_3[0x10] = 4;
      if (*(int *)(param_2 + 0x404) != 0) {
        param_3[0x46] = param_3[0x46] | 1;
      }
      param_3[0x47] = 200;
      param_3[0x23] = 1;
      param_3[0x60] = 1;
      param_3[0x6f] = 1;
      param_3[0x41] = uVar6;
      if (4 < (int)param_4) {
        param_3[0xd] = 0;
        *param_3 = 2;
        param_3[0x47] = 500;
        param_3[0x48] = 1;
        param_3[0x4c] = 1;
        param_3[0x49] = 1;
        param_3[0x4d] = 1;
        param_3[0x4a] = 1;
        param_3[0x4e] = 1;
        param_3[0x4b] = 1;
        param_3[0x4f] = 1;
        param_3[1] = 1;
        param_3[0x88] = 1;
      }
    }
  }
  return iVar4;
}



// FUNCTION 145690c20 FUN_145690c20 body=3807 status=ok
// SIG undefined FUN_145690c20(void)

void FUN_145690c20(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = 0;
  iVar1 = *(int *)(param_1 + 0x2a2e4);
  iVar3 = iVar8;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0xb42f0);
  }
  param_2[0xe] = 0;
  *(undefined8 *)(param_2 + 0x10) = 1;
  param_2[0x6f] = 1;
  param_2[0x33] = 0x7fffffff;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x8e) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x93) = 0;
  *(undefined8 *)(param_2 + 0x95) = 0;
  *(undefined8 *)(param_2 + 0x97) = 0;
  *(undefined8 *)(param_2 + 0x99) = 0;
  param_2[0x32] = 0;
  param_2[0x9c] = 0;
  *(undefined8 *)(param_2 + 0x9d) = 1;
  param_2[0x3f] = 0;
  param_2[0x9f] = 0;
  param_2[6] = 0;
  if (param_3 < 1) goto LAB_145691963;
  param_2[0x1c] = 1;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  param_2[0x16] = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (iVar5 = 1, *(char *)(param_1 + 0x2a2f4) != '\0')) {
    iVar5 = iVar8;
  }
  param_2[0x28] = 1;
  param_2[0x29] = iVar5;
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (iVar5 = 1, *(char *)(param_1 + 0x2a2f4) != '\0')) {
    iVar5 = iVar8;
  }
  param_2[0x21] = iVar5;
  param_2[0x3d] = 1;
  param_2[0x10] = 2;
  param_2[0x5d] = 1;
  param_2[0x31] = 1;
  param_2[2] = 1;
  param_2[0x4b] = 7;
  param_2[0x4f] = 7;
  param_2[0x4e] = 7;
  if (param_3 < 2) goto LAB_145691963;
  iVar8 = *(int *)(param_1 + 0x2a2e4);
  param_2[0x3d] = 2;
  param_2[0x46] = -(uint)(iVar8 != 0) & 0x3a;
  bVar9 = *(int *)(param_1 + 0xb64e8) == 1;
  param_2[0x25] = (uint)bVar9;
  if ((bVar9) && ((*(int *)(param_1 + 0xcd3a0) == 1 || (*(int *)(param_1 + 0x2e5bc) == 2)))) {
    bVar6 = 1;
    do {
      if (bVar6 == 1) {
        iVar8 = *(int *)(param_1 + 0x2f698);
      }
      else if (bVar6 == 2) {
        iVar8 = *(int *)(param_1 + 0x2f69c);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x2f6a0);
      }
      if ((((iVar8 != -1) &&
           (iVar8 = *(int *)(param_1 + 0x2a088 + (longlong)iVar8 * 4), iVar8 != -1)) &&
          ((longlong)iVar8 * 0xe0 + *(longlong *)(param_1 + 0x2e4f0) + 0x58 != 0)) &&
         ((*(uint *)(param_1 + 0xb46a8) & *(uint *)(&DAT_149df5770 + (ulonglong)bVar6 * 4)) != 0)) {
        lVar4 = (ulonglong)bVar6 * 0xb0;
        iVar8 = *(int *)(lVar4 + 0x2a028 + param_1);
        if (((iVar8 != -1) && (*(int *)(lVar4 + 0x2a02c + param_1) != -1)) &&
           ((iVar8 != 0x4000 || (*(int *)(lVar4 + 0x2a02c + param_1) != 0x4000)))) {
          param_2[0x25] = 0;
        }
      }
      bVar6 = bVar6 + 1;
    } while ((char)bVar6 < '\x04');
  }
  param_2[0x47] = 0x32;
  param_2[0x2c] = 1;
  param_2[0x2f] = 3;
  param_2[0x24] = 0xb;
  param_2[0x4a] = 7;
  *(undefined1 *)(param_2 + 0xf) = 0xd;
  param_2[0x20] = 7;
  param_2[0x2e] = 1;
  param_2[0x23] = 1;
  if (param_3 < 3) goto LAB_145691963;
  param_2[0x29] = 1;
  param_2[0x47] = 100;
  param_2[0x5e] = 1;
  param_2[0x12] = 1;
  param_2[4] = 0;
  param_2[0x10] = 4;
  param_2[0x24] = 6;
  param_2[0x14] = 0;
  param_2[0xd] = 0;
  param_2[0x30] = 0x3f;
  param_2[0x5f] = 2;
  if (param_3 < 4) goto LAB_145691963;
  piVar7 = (int *)(param_1 + 0x2e57c);
  if ((*piVar7 == 0) && (0 < *(int *)(param_1 + 0x2e578))) {
    param_2[0x93] = 1;
  }
  param_2[5] = 1;
  param_2[0x48] = 7;
  param_2[0x4c] = 1;
  param_2[0x49] = 7;
  param_2[0x4d] = 1;
  param_2[0x4a] = 7;
  param_2[0x4e] = 1;
  param_2[0x4f] = 1;
  param_2[0x4b] = 1;
  *param_2 = 5;
  param_2[0x14] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0x72) = 9;
  *(undefined8 *)(param_2 + 0x6e) = 0x3400;
  param_2[0x43] = (uint)(iVar1 != 0);
  param_2[0x6b] = 0x3400;
  param_2[0x6c] = 0x3400;
  param_2[0x6d] = 0x3400;
  param_2[0x60] = (uint)(iVar1 != 0);
  param_2[0x10] = 2;
  param_2[0x46] = 0x10;
  param_2[0x21] = (iVar1 != 0) + 1;
  param_2[0x26] = 3;
  if (4 < param_3) {
    param_2[0x93] = 0;
    *(undefined2 *)((longlong)param_2 + 0xb5) = 0x903;
    param_2[0x43] = (uint)(iVar1 != 0);
    iVar8 = (iVar1 != 0) + 1;
    param_2[0x2c] = iVar8;
    if ((iVar1 == 0) || (iVar3 % (param_2[0x2f] * 2) == 1)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    param_2[0x44] = uVar2;
    param_2[0x26] = 2;
    uVar2 = 0xf;
    if (iVar1 == 0) {
      uVar2 = 0x14;
    }
    param_2[0x45] = uVar2;
    if (((*(int *)(param_1 + 0x2e57c) == 0) && (0 < *(int *)(param_1 + 0x2e578))) &&
       (*(int *)(param_1 + 0xb4304) != 0)) {
      param_2[0x26] = 3;
    }
    param_2[0x61] = 1;
    param_2[0x14] = 0;
    param_2[0x6b] = 0x3400;
    param_2[0x6c] = 0x3400;
    param_2[0x6d] = 0x3400;
    param_2[0x6e] = 0x3400;
    param_2[0x10] = 2;
    param_2[0x74] = 1;
    param_2[0x15] = 4;
    param_2[0x60] = (uint)(iVar1 != 0);
    param_2[0x46] = 0x10;
    param_2[0x21] = iVar8;
    param_2[0x88] = 1;
    if (*(int *)(param_1 + 0x2e57c) == 0) {
      *param_2 = 1;
    }
    if (iVar1 == 0) {
      if (param_4 == 1) goto LAB_1456912aa;
    }
    else if (param_4 == 1) {
      param_2[0x50] = 0x207;
      param_2[0x51] = 0x207;
      param_2[0x52] = 0x207;
      param_2[0x53] = 0x207;
      param_2[0x54] = 0x207;
      param_2[0x55] = 0x207;
      param_2[0x56] = 0x207;
      param_2[0x57] = 0x207;
      param_2[0x58] = 0x207;
      param_2[0x59] = 7;
      param_2[0x5a] = 7;
      param_2[0x5b] = 7;
      param_2[0x5c] = 7;
LAB_1456912aa:
      param_2[0x89] = 1;
    }
    else {
      param_2[0x50] = 7;
      param_2[0x51] = 7;
      param_2[0x52] = 7;
      param_2[0x53] = 7;
      param_2[0x54] = 7;
      param_2[0x55] = 7;
      param_2[0x56] = 7;
      param_2[0x57] = 1;
      param_2[0x58] = 1;
      param_2[0x59] = 1;
      param_2[0x5a] = 1;
      param_2[0x5b] = 1;
      param_2[0x5c] = 1;
    }
    if ((*(int *)(param_1 + 0x2e57c) == 1) && (*(int *)(param_1 + 0x2e69c) != 1)) {
      param_2[0x8b] = 1;
      if (*(int *)(param_1 + 0xb64dc) == 0) {
        param_2[0x8c] = 1;
        goto LAB_1456912e3;
      }
LAB_1456912ec:
      if (0 < *(int *)(param_1 + 0xb64e0)) {
        param_2[0x95] = 1;
      }
    }
    else {
LAB_1456912e3:
      if (*(int *)(param_1 + 0xb64dc) != 0) goto LAB_1456912ec;
    }
    if (((*(int *)(param_1 + 0x2a2e4) != 0) && (*(int *)(param_1 + 0xcd39c) == 0)) &&
       ((*(int *)(param_1 + 0x2e57c) == 1 && (*(int *)(param_1 + 0xb4510) == 0)))) {
      if (((*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) < 0x18c01) &&
          (*(int *)(param_1 + 0xb64dc) == 0)) && (*(int *)(param_1 + 0x2e69c) != 1)) {
        param_2[0x97] = 2;
      }
      else {
        param_2[0x97] = 1;
      }
    }
    if (((*(int *)(param_1 + 0x2e57c) == 0) && (0 < *(int *)(param_1 + 0x2e578))) &&
       ((*(int *)(param_1 + 0x2a048) < 0x501 && (*(int *)(param_1 + 0x2a04c) < 0x2d1)))) {
      param_2[0x93] = 1;
      param_2[0x94] = 1;
    }
    if (0xe1000 < *(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048)) {
      param_2[0x3f] = 1;
    }
    if (*(int *)(param_1 + 0xcd3a0) == 0) {
      param_2[0x8f] = 1;
    }
  }
  if (5 < param_3) {
    if ((*piVar7 == 0) && (0 < *(int *)(param_1 + 0x2e578))) {
      param_2[0x93] = 1;
      param_2[0x94] = 1;
    }
    param_2[0x26] = 3;
    *param_2 = 1;
    param_2[1] = 1;
    param_2[0x12] = 0;
    if (param_2[0x8f] != 0) {
      param_2[0x91] = 1;
      uVar2 = 60000;
      if (*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) < 0x38401) {
        uVar2 = 40000;
      }
      param_2[0x92] = uVar2;
      if ((*(longlong *)(param_1 + 0xcee40) == 0) &&
         ((*(int *)(param_1 + 0xb64dc) == 0 ||
          (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -1)))) {
        lVar4 = FUN_14518efb0((longlong)
                              (((*(int *)(param_1 + 0x2a308) >> 3) + 1) *
                              (*(int *)(param_1 + 0x2a314) >> 3)),1);
        *(longlong *)(param_1 + 0xcee40) = lVar4;
        if (lVar4 == 0) {
          FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate cpi->content_state_sb_fd");
        }
      }
    }
    if ((*piVar7 == 1) && (param_4 != 1)) {
      param_2[0x8a] = 1;
    }
    if (0 < *(int *)(param_1 + 0xb64e4)) {
      param_2[0x10] = 4;
      param_2[0x8b] = 0;
      param_2[0x8d] = 1;
    }
    if ((((*(int *)(param_1 + 0x2a2e4) != 0) && (*(int *)(param_1 + 0xcd39c) == 0)) &&
        (*piVar7 == 1)) && (*(int *)(param_1 + 0xb4510) == 0)) {
      param_2[0x97] = 1;
    }
  }
  uVar2 = 0;
  if (6 < param_3) {
    param_2[0x91] = 0;
    param_2[0x10] = 3;
    *param_2 = 6;
    param_2[10] = 10;
    if (*(int *)(param_1 + 0xb64ec) < 3) {
LAB_145691587:
      iVar3 = *(int *)(param_1 + 0xb64e4);
      bVar9 = iVar3 == 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb64e4);
      bVar9 = false;
      if (iVar3 == 0) {
        if ((*(int *)(param_1 + 0xb64e0) == 0) ||
           (*(int *)(param_1 + 0x2e51c) * *(int *)(param_1 + 0x2e518) < 0x38401)) {
          *param_2 = 1;
          param_2[10] = 6;
        }
        goto LAB_145691587;
      }
    }
    if (((!bVar9 && -1 < iVar3) || (1 < *(int *)(param_1 + 0xb64e0))) &&
       (param_2[0x90] = 1, *(int *)(param_1 + 0xcb784) != 0)) {
      param_2[3] = 3;
    }
    iVar3 = *(int *)(param_1 + 0xb64dc);
    if (((iVar3 != 0) && (*(int *)(param_1 + 0xcee10) != 0)) && (1 < *(int *)(param_1 + 0x2e67c))) {
      param_2[0x11] = 1;
      iVar3 = *(int *)(param_1 + 0xb64dc);
    }
    *(undefined1 *)(param_1 + 0xcee38) = 0;
    if (((*(char *)(param_1 + 0xcee39) == '\0') && (*(int *)(param_1 + 0xcd39c) == 0)) &&
       ((*(int *)(param_1 + 0xcd3a0) == 0 &&
        ((iVar3 == 0 ||
         ((*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -1 &&
          (*(int *)(param_1 + 0xcb850 + (longlong)*(int *)(param_1 + 0xb64e8) * 4) == 0)))))))) {
      param_2[0x8e] = 1;
      *(undefined1 *)(param_1 + 0xcee38) = 2;
      if ((1 < *(int *)(param_1 + 0xb64ec)) &&
         (*(int *)(param_1 + 0xb64e4) == *(int *)(param_1 + 0xb64ec) + -1)) {
        *(undefined1 *)(param_1 + 0xcee38) = 0xff;
      }
    }
    if (*(int *)(param_1 + 0xb64dc) != 0) {
      if ((((*(int *)(param_1 + 0xcb78c) != 0) && (*(int *)(param_1 + 0xb64e8) == 3)) &&
          (0 < *(int *)(param_1 + 0xb64e4))) &&
         (0x4b000 < *(int *)(param_1 + 0x2e51c) * *(int *)(param_1 + 0x2e518))) {
        param_2[0x96] = 1;
      }
      if (((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0xcb76c) != 0)) &&
         (0 < *(int *)(param_1 + 0xb64e4))) {
        *(uint *)(param_1 + 0xb46a8) = *(uint *)(param_1 + 0xb46a8) & 0xfffffffd;
      }
    }
    if (0x4b000 < *(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048)) {
      param_2[0x3f] = 1;
    }
  }
  if (7 < param_3) {
    param_2[0x10] = 4;
    param_2[0x12] = 1;
    if ((*(int *)(param_1 + 0xb64e8) < 2) || (*(int *)(param_1 + 0xcba64) != 0)) {
      uVar2 = 1;
    }
    param_2[0x95] = uVar2;
    if (*(int *)(param_1 + 0xb64dc) == 0) {
      *(undefined1 *)(param_1 + 0xcee38) = 4;
    }
    if ((*(int *)(param_1 + 0xcee10) != 0) && (1 < *(int *)(param_1 + 0x2e67c))) {
      param_2[0x11] = 1;
    }
    if (((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) &&
       (*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) < 0x18c01)) {
      param_2[0x9c] = 1;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x2e6d8) + 0x98) & 8) != 0) {
      param_2[0x9c] = 0;
    }
    if (param_4 == 1) {
      param_2[5] = 2;
    }
    param_2[0x9f] = 1;
    if (((*(int *)(param_1 + 0xb64dc) == 0) && (*piVar7 == 1)) && (param_4 != 1)) {
      param_2[0x8a] = 3;
      if (((*(int *)(param_1 + 0xcd3c0) != 0) && (0x4ff < *(int *)(param_1 + 0x2a048))) &&
         ((0x2cf < *(int *)(param_1 + 0x2a04c) && (iVar3 = FUN_145661520(), 1 < iVar3)))) {
        param_2[0x8a] = 2;
      }
      param_2[0x10] = (*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) < 0x18c01) + 1;
    }
    param_2[0x8b] = 0;
    param_2[0x90] = 1;
    if (0x18c00 < *(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048)) {
      param_2[0x3f] = 1;
    }
  }
  if (8 < param_3) {
    if (iVar1 != 0) {
      param_2[0x50] = 1;
      param_2[0x51] = 1;
      param_2[0x52] = 1;
      param_2[0x53] = 1;
      param_2[0x54] = 1;
      param_2[0x55] = 1;
      param_2[0x56] = 1;
      param_2[0x57] = 1;
      param_2[0x58] = 1;
      param_2[0x59] = 1;
      param_2[0x5a] = 1;
      param_2[0x5b] = 1;
      param_2[0x5c] = 1;
    }
    param_2[0x3f] = 1;
    param_2[6] = 1;
    param_2[7] = 1;
    param_2[8] = 1;
    param_2[9] = 2;
    if (((*(int *)(param_1 + 0x2a2e4) != 0) && (0x13f < *(int *)(param_1 + 0x2a048))) &&
       (0xef < *(int *)(param_1 + 0x2a04c))) {
      param_2[0x98] = 1;
    }
    if (*piVar7 == 1) {
      param_2[0x99] = 1;
    }
    if (*(int *)(param_1 + 0xb44e8) < 0x46) {
      *(undefined1 *)(param_2 + 0x76) = 3;
    }
    if (0x383ff < *(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048)) {
      param_2[0x9d] = 2;
    }
  }
LAB_145691963:
  piVar7 = param_2 + 0x26;
  if (((*(int *)(param_1 + 0x2a2e4) != 0) &&
      (*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) < 0x12c01)) &&
     ((*piVar7 == 3 && ((0xd0 < *(int *)(param_1 + 0xb4324) && (8 < *(uint *)(param_1 + 0x2e4c4)))))
     )) {
    param_2[0x98] = 1;
  }
  if (param_2[0x9c] != 0) {
    *piVar7 = 5;
  }
  if (param_2[0x93] != 0) {
    if ((*(int *)(param_1 + 0xb4304) != 0) && (*(int *)(param_1 + 0x2a2e4) != 0)) {
      *piVar7 = 1;
      *(undefined1 *)(param_2 + 0x27) = 0xc;
    }
    if (*(longlong *)(param_1 + 0xcee60) == 0) {
      lVar4 = FUN_14518efb0((longlong)
                            (((*(int *)(param_1 + 0x2a308) >> 3) + 1) *
                            (*(int *)(param_1 + 0x2a314) >> 3)),1);
      *(longlong *)(param_1 + 0xcee60) = lVar4;
      if (lVar4 == 0) {
        FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate cpi->count_arf_frame_usage");
      }
    }
    if (*(longlong *)(param_1 + 0xcee68) == 0) {
      lVar4 = FUN_14518efb0((longlong)
                            (((*(int *)(param_1 + 0x2a308) >> 3) + 1) *
                            (*(int *)(param_1 + 0x2a314) >> 3)),1);
      *(longlong *)(param_1 + 0xcee68) = lVar4;
      if (lVar4 == 0) {
        FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate cpi->count_lastgolden_frame_usage");
      }
    }
  }
  if (*(char *)(param_1 + 0xcb9d9) != '\0') {
    *piVar7 = 1;
    *(undefined1 *)(param_2 + 0x27) = 0xc;
  }
  if (((*(int *)(param_1 + 0x2e69c) == 1) && (4 < *(int *)(param_1 + 0x2e558))) &&
     ((*(int *)(param_1 + 0xcb954) != 0 || (*(int *)(param_1 + 0xcb854) != 0)))) {
    *param_2 = 1;
    param_2[10] = 2;
  }
  if ((param_3 < 4) && (*(int *)(param_1 + 0x2e5b4) == 3)) {
    *(undefined4 *)(param_1 + 0x2e5b4) = 0;
  }
  return;
}



// FUNCTION 145691b10 FUN_145691b10 body=365 status=ok
// SIG undefined FUN_145691b10(void)

void FUN_145691b10(undefined8 param_1,longlong param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_2 + 0x2b060) = 0;
  if (param_3 == 3) {
    if (*(int *)(param_2 + 0x2b058) != 0) {
      *(undefined4 *)(param_2 + 0x2b058) = 0;
      return;
    }
  }
  else if (param_3 < 2) {
    uVar4 = FUN_145691d80(param_1,param_2,param_3 == 1);
    *(undefined4 *)(param_2 + 0x2b058) = uVar4;
    return;
  }
  if (*(int *)(param_2 + 0x2e56c) == 2) {
    if (*(int *)(param_2 + 0x2a2e4) == 0) {
      uVar2 = *(uint *)(param_2 + 0xb4cdc);
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xb4cd8);
    }
    iVar6 = 0x3f;
    if (8 < uVar2) {
      iVar6 = 0x2f;
    }
  }
  else {
    iVar6 = 0x3f;
  }
  sVar1 = FUN_1454772c0(*(undefined4 *)(param_2 + 0x2a31c),0,*(undefined4 *)(param_2 + 0x2e4d0));
  iVar5 = sVar1 * 0x50f3;
  if (*(int *)(param_2 + 0x2e4d0) == 8) {
    iVar5 = iVar5 + 0x117d76 >> 0x12;
  }
  else if (*(int *)(param_2 + 0x2e4d0) == 10) {
    iVar5 = iVar5 + 0x45f5d8 >> 0x14;
  }
  else {
    iVar5 = iVar5 + 0x117d75e >> 0x16;
  }
  if (((((*(int *)(param_2 + 0x2e56c) == 0) && (*(int *)(param_2 + 0x2e57c) == 1)) &&
       (*(int *)(param_2 + 0x2e5b4) == 3)) && (*(char *)(param_2 + 0x2b088) != '\0')) &&
     (((*(int *)(param_2 + 0x2a31c) < 200 ||
       (0x12c00 < *(int *)(param_2 + 0x2a04c) * *(int *)(param_2 + 0x2a048))) &&
      ((*(int *)(param_2 + 0x2e69c) != 1 && (*(int *)(param_2 + 0x2a2e4) != 0)))))) {
    iVar5 = iVar5 * 5 >> 3;
  }
  iVar3 = iVar5 + -4;
  if (*(int *)(param_2 + 0x2a2e4) != 0) {
    iVar3 = iVar5;
  }
  iVar5 = 0;
  if ((-1 < iVar3) && (iVar5 = iVar3, iVar6 < iVar3)) {
    iVar5 = iVar6;
  }
  *(int *)(param_2 + 0x2b058) = iVar5;
  return;
}



// FUNCTION 145691c80 FUN_145691c80 body=244 status=ok
// SIG undefined FUN_145691c80(void)

undefined8 FUN_145691c80(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  FUN_145474980(param_2 + 0x29ee0,param_3,param_4);
  if (*(int *)(param_2 + 0xcd42c) < 2) {
    FUN_145474320(*(undefined8 *)(param_2 + 0x2a070),param_2 + 0x29ee0,param_2 + 0x121b0,param_3,1,
                  param_4);
  }
  else {
    FUN_145476250(*(undefined8 *)(param_2 + 0x2a070));
  }
  if (*(int *)(param_2 + 0x2a068) == 0) {
    uVar1 = FUN_14568de60(param_1,*(undefined8 *)(param_2 + 0x2a070));
  }
  else {
    uVar1 = FUN_14568de90();
  }
  FUN_14546ca70(param_2 + 0x2f708,*(undefined8 *)(param_2 + 0x2a070));
  return uVar1;
}



// FUNCTION 145691d80 FUN_145691d80 body=691 status=ok
// SIG undefined FUN_145691d80(void)

void FUN_145691d80(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  int local_274;
  longlong local_270;
  uint local_268;
  undefined8 local_260;
  longlong *local_258;
  ulonglong local_250;
  longlong local_248 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (*(int *)(param_2 + 0x2e56c) == 2) {
    if (*(int *)(param_2 + 0x2a2e4) == 0) {
      uVar10 = *(uint *)(param_2 + 0xb4cdc);
    }
    else {
      uVar10 = *(uint *)(param_2 + 0xb4cd8);
    }
    iVar11 = 0x3f;
    if (8 < uVar10) {
      iVar11 = 0x2f;
    }
  }
  else {
    iVar11 = 0x3f;
  }
  iVar5 = *(int *)(param_2 + 0x2b05c);
  iVar7 = 0;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (iVar11 < iVar5) {
    iVar5 = iVar11;
  }
  uVar10 = 4;
  if (0xf < iVar5) {
    uVar10 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
  }
  puVar3 = (uint *)(param_2 + 0xb4cd8);
  if (*(int *)(param_2 + 0x2a2e4) == 0) {
    puVar3 = (uint *)(param_2 + 0xb4cdc);
  }
  local_268 = *puVar3;
  local_278 = param_3;
  local_274 = iVar11;
  local_270 = param_2;
  local_260 = param_1;
  memset(local_248,0xff,0x200);
  FUN_14546ca70(*(undefined8 *)(param_2 + 0x2a070),param_2 + 0x2f708);
  lVar1 = FUN_145691c80(param_1,param_2,iVar5,param_3);
  local_248[iVar5] = lVar1;
  iVar8 = iVar5;
  if (0 < (int)uVar10) {
    do {
      local_250 = (ulonglong)uVar10;
      iVar9 = iVar5 + uVar10;
      if (iVar11 <= (int)(iVar5 + uVar10)) {
        iVar9 = iVar11;
      }
      iVar11 = iVar5 - uVar10;
      if ((int)(iVar5 - uVar10) < 1) {
        iVar11 = 0;
      }
      lVar4 = (lVar1 >> (0xfU - (char)((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) & 0x3f)) *
              local_250;
      if ((*(int *)(param_2 + 0x2e56c) == 2) && (local_268 < 0x14)) {
        lVar4 = (longlong)((ulonglong)local_268 * lVar4) / 0x14;
      }
      lVar6 = lVar4 >> 1;
      if (*(int *)(local_270 + 0x2a318) == 0) {
        lVar6 = lVar4;
      }
      lVar4 = lVar1;
      if ((iVar7 < 1) && (iVar11 != iVar5)) {
        local_258 = local_248 + iVar11;
        lVar2 = *local_258;
        if (lVar2 < 0) {
          lVar2 = FUN_145691c80(local_260,local_270,iVar11,local_278);
          *local_258 = lVar2;
        }
        if ((lVar2 - lVar6 < lVar1) && (lVar4 = lVar2, iVar8 = iVar11, lVar1 <= lVar2)) {
          lVar4 = lVar1;
        }
      }
      if ((iVar7 < 0) || (iVar9 == iVar5)) {
LAB_145692033:
        lVar1 = lVar4;
        iVar9 = iVar8;
        if (iVar8 != iVar5) goto LAB_145691fd4;
        uVar10 = (uint)local_250 >> 1;
        iVar7 = 0;
      }
      else {
        lVar1 = local_248[iVar9];
        if (lVar1 < 0) {
          lVar1 = FUN_145691c80(local_260,local_270,iVar9,local_278);
          local_248[iVar9] = lVar1;
        }
        if (lVar4 - lVar6 <= lVar1) goto LAB_145692033;
LAB_145691fd4:
        iVar7 = 1;
        if (iVar9 < iVar5) {
          iVar7 = -1;
        }
      }
      if (iVar9 != iVar5) {
        iVar5 = iVar9;
      }
      param_2 = local_270;
      iVar11 = local_274;
      iVar8 = iVar9;
    } while (uVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_298);
}



// FUNCTION 145692050 FUN_145692050 body=531 status=ok
// SIG undefined FUN_145692050(void)

void FUN_145692050(longlong param_1,uint param_2,uint param_3,int param_4,undefined1 *param_5,
                  uint param_6,uint param_7,int param_8)

{
  undefined1 uVar1;
  void *_Memory;
  void *_Memory_00;
  undefined1 *_Memory_01;
  undefined1 *_Memory_02;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = (ulonglong)param_7;
  _Memory = calloc((longlong)(int)(param_2 * param_7),1);
  uVar8 = param_3;
  if ((int)param_3 < (int)param_2) {
    uVar8 = param_2;
  }
  _Memory_00 = calloc((longlong)(int)uVar8,1);
  _Memory_01 = calloc((longlong)(int)param_2,1);
  uVar9 = (ulonglong)(int)param_6;
  _Memory_02 = calloc(uVar9,1);
  if ((((_Memory != (void *)0x0) && (_Memory_00 != (void *)0x0)) &&
      (_Memory_01 != (undefined1 *)0x0)) && (_Memory_02 != (undefined1 *)0x0)) {
    if (0 < (int)param_2) {
      uVar9 = (ulonglong)param_2;
      pvVar6 = _Memory;
      do {
        FUN_145693220(param_1,param_3,pvVar6,param_7,_Memory_00);
        pvVar6 = (void *)((longlong)pvVar6 + (longlong)(int)param_7);
        param_1 = param_1 + param_4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uVar9 = (ulonglong)param_6;
    }
    if (0 < (int)param_7) {
      lVar2 = (longlong)_Memory - (longlong)param_5;
      do {
        puVar4 = param_5 + lVar2;
        puVar3 = _Memory_01;
        uVar7 = (ulonglong)param_2;
        if (0 < (int)param_2) {
          do {
            uVar1 = *puVar4;
            puVar4 = puVar4 + (int)param_7;
            *puVar3 = uVar1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
        FUN_145693220(_Memory_01,(ulonglong)param_2,_Memory_02,uVar9 & 0xffffffff,_Memory_00);
        if (0 < (int)uVar9) {
          uVar7 = uVar9 & 0xffffffff;
          puVar3 = param_5;
          puVar4 = _Memory_02;
          do {
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar3 = uVar1;
            puVar3 = puVar3 + param_8;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        param_5 = param_5 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  free(_Memory);
  free(_Memory_00);
  free(_Memory_01);
                    /* WARNING: Could not recover jumptable at 0x00014569225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory_02);
  return;
}



// FUNCTION 145692270 FUN_145692270 body=609 status=ok
// SIG undefined FUN_145692270(void)

void FUN_145692270(longlong param_1,uint param_2,uint param_3,int param_4,longlong param_5,
                  uint param_6,uint param_7,int param_8,undefined4 param_9)

{
  undefined2 uVar1;
  undefined2 *_Memory;
  void *_Memory_00;
  undefined2 *_Memory_01;
  undefined2 *_Memory_02;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar7 = (ulonglong)param_7;
  lVar5 = (longlong)(int)param_7;
  uVar10 = (ulonglong)param_2;
  _Memory = malloc(lVar5 * (int)param_2 * 2);
  uVar3 = param_3;
  if ((int)param_3 < (int)param_2) {
    uVar3 = param_2;
  }
  _Memory_00 = malloc((longlong)(int)uVar3 * 2);
  _Memory_01 = malloc((longlong)(int)param_2 * 2);
  uVar9 = (ulonglong)(int)param_6;
  _Memory_02 = malloc(uVar9 * 2);
  if ((((_Memory != (undefined2 *)0x0) && (_Memory_00 != (void *)0x0)) &&
      (_Memory_01 != (undefined2 *)0x0)) && (_Memory_02 != (undefined2 *)0x0)) {
    lVar8 = 0;
    if (0 < (int)param_2) {
      puVar6 = _Memory;
      do {
        FUN_1456945b0(param_1 * 2 + lVar8 * 2,param_3,puVar6,param_7,_Memory_00,param_9);
        puVar6 = puVar6 + lVar5;
        lVar8 = lVar8 + param_4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar9 = (ulonglong)param_6;
    }
    lVar8 = 0;
    if (0 < (int)param_7) {
      puVar6 = _Memory;
      do {
        uVar10 = (ulonglong)param_2;
        puVar2 = _Memory_01;
        puVar4 = puVar6;
        if (0 < (int)param_2) {
          do {
            *puVar2 = *puVar4;
            uVar10 = uVar10 - 1;
            puVar2 = puVar2 + 1;
            puVar4 = puVar4 + lVar5;
          } while (uVar10 != 0);
        }
        FUN_1456945b0(_Memory_01,param_2,_Memory_02,uVar9 & 0xffffffff,_Memory_00,param_9);
        puVar2 = (undefined2 *)(param_5 * 2 + lVar8 * 2);
        if (0 < (int)uVar9) {
          uVar10 = uVar9 & 0xffffffff;
          puVar4 = _Memory_02;
          do {
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar2 = uVar1;
            puVar2 = puVar2 + param_8;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        lVar8 = lVar8 + 1;
        puVar6 = puVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  free(_Memory);
  free(_Memory_00);
  free(_Memory_01);
                    /* WARNING: Could not recover jumptable at 0x0001456924ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory_02);
  return;
}



// FUNCTION 1456924e0 FUN_1456924e0 body=1758 status=ok
// SIG undefined FUN_1456924e0(void)

void FUN_1456924e0(byte *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong uVar20;
  byte *pbVar21;
  undefined *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 uVar26;
  longlong lVar27;
  short *psVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong local_48;
  
  lVar30 = (longlong)param_2;
  uVar20 = (ulonglong)param_4;
  uVar29 = (ulonglong)(int)param_4;
  lVar27 = (longlong)((int)param_4 / 2);
  uVar3 = (ulonglong)((lVar30 << 0x20) + lVar27) / uVar29;
  if ((int)param_4 < param_2) {
    lVar27 = ((longlong)(int)(param_2 - param_4) * 0x80000000 + lVar27) / (longlong)uVar29;
  }
  else {
    lVar27 = -(((longlong)(int)(param_4 - param_2) * 0x80000000 + lVar27) / (longlong)uVar29);
  }
  iVar11 = param_4 * 0x10;
  if (iVar11 < param_2 * 0x10) {
    if (iVar11 < param_2 * 0xd) {
      if (iVar11 < param_2 * 0xb) {
        puVar22 = &DAT_149df5a20;
        if (iVar11 < param_2 * 9) {
          puVar22 = &DAT_149df5820;
        }
      }
      else {
        puVar22 = &DAT_149df5c20;
      }
    }
    else {
      puVar22 = &DAT_149df5e20;
    }
  }
  else {
    puVar22 = &DAT_149df6020;
  }
  uVar17 = 0;
  for (lVar13 = lVar27; lVar13 >> 0x20 < 3; lVar13 = lVar13 + uVar3) {
    uVar17 = uVar17 + 1;
  }
  uVar31 = param_4 - 1;
  for (lVar13 = (longlong)(int)uVar31 * uVar3 + lVar27; lVar30 <= (lVar13 >> 0x20) + 4;
      lVar13 = lVar13 - uVar3) {
    uVar31 = uVar31 - 1;
  }
  if ((int)uVar31 < (int)uVar17) {
    if ((int)param_4 < 1) {
      return;
    }
    do {
      uVar32 = 0;
      psVar28 = (short *)(puVar22 + (ulonglong)((uint)(lVar27 >> 0x1b) & 0x1f) * 0x10);
      iVar11 = (int)((ulonglong)lVar27 >> 0x20);
      uVar23 = (ulonglong)iVar11;
      uVar29 = uVar32;
      if ((-1 < iVar11 + -3) && (uVar29 = lVar30 - 1, iVar11 + -3 < param_2)) {
        uVar29 = uVar23 - 3;
      }
      uVar14 = uVar32;
      if ((-1 < iVar11 + -2) && (uVar14 = lVar30 - 1, iVar11 + -2 < param_2)) {
        uVar14 = uVar23 - 2;
      }
      iVar2 = (uint)param_1[uVar29] * (int)*psVar28 + (uint)param_1[uVar14] * (int)psVar28[1];
      if (iVar11 + -1 < 0) {
        iVar2 = iVar2 + (int)psVar28[2] * (uint)*param_1;
        uVar29 = uVar32;
        if (-1 < lVar27) goto LAB_1456926ed;
      }
      else {
        if (iVar11 + -1 < param_2) {
          bVar1 = param_1[uVar23 - 1];
        }
        else {
          bVar1 = param_1[lVar30 + -1];
        }
        iVar2 = (uint)bVar1 * (int)psVar28[2] + iVar2;
LAB_1456926ed:
        uVar29 = lVar30 - 1;
        if (iVar11 < param_2) {
          uVar29 = uVar23;
        }
      }
      uVar14 = uVar32;
      if ((-1 < iVar11 + 1) && (uVar14 = lVar30 - 1, iVar11 + 1 < param_2)) {
        uVar14 = uVar23 + 1;
      }
      uVar15 = uVar32;
      if ((-1 < iVar11 + 2) && (uVar15 = lVar30 - 1, iVar11 + 2 < param_2)) {
        uVar15 = uVar23 + 2;
      }
      uVar16 = uVar32;
      if ((-1 < iVar11 + 3) && (uVar16 = lVar30 - 1, iVar11 + 3 < param_2)) {
        uVar16 = uVar23 + 3;
      }
      uVar24 = uVar32;
      if (-1 < iVar11 + 4) {
        if (iVar11 + 4 < param_2) {
          uVar24 = uVar23 + 4;
        }
        else {
          uVar24 = lVar30 - 1;
        }
      }
      uVar17 = (int)(iVar2 + (uint)param_1[uVar29] * (int)psVar28[3] +
                     (uint)param_1[uVar14] * (int)psVar28[4] +
                     (uint)param_1[uVar15] * (int)psVar28[5] +
                     (uint)param_1[uVar16] * (int)psVar28[6] + 0x40 +
                    (uint)param_1[uVar24] * (int)psVar28[7]) >> 7;
      if ((int)uVar17 < 0x100) {
        uVar29 = (ulonglong)uVar17;
        if ((int)uVar17 < 0) {
          uVar29 = uVar32;
        }
      }
      else {
        uVar29 = 0xff;
      }
      lVar27 = lVar27 + uVar3;
      *param_3 = (char)uVar29;
      param_3 = param_3 + 1;
      uVar20 = uVar20 - 1;
      if (uVar20 == 0) {
        return;
      }
    } while( true );
  }
  uVar12 = 0;
  if ((int)uVar17 < 1) {
    uVar17 = uVar12;
    if (0x7fffffff < uVar31) goto LAB_145692a42;
  }
  else {
    local_48 = (ulonglong)uVar17;
    do {
      iVar11 = (int)((ulonglong)lVar27 >> 0x20);
      lVar13 = (longlong)iVar11;
      psVar28 = (short *)(puVar22 + (ulonglong)((uint)(lVar27 >> 0x1b) & 0x1f) * 0x10);
      pbVar19 = param_1;
      if (-1 < iVar11 + -3) {
        pbVar19 = param_1 + lVar13 + -3;
      }
      pbVar18 = param_1;
      if (-1 < iVar11 + -2) {
        pbVar18 = param_1 + lVar13 + -2;
      }
      pbVar4 = param_1;
      if (-1 < iVar11 + -1) {
        pbVar4 = param_1 + lVar13 + -1;
      }
      lVar33 = lVar13;
      if (lVar27 < 0) {
        lVar33 = 0;
      }
      pbVar5 = param_1;
      if (-1 < iVar11 + 1) {
        pbVar5 = param_1 + lVar13 + 1;
      }
      pbVar6 = param_1;
      if (-1 < iVar11 + 2) {
        pbVar6 = param_1 + lVar13 + 2;
      }
      pbVar7 = param_1;
      if (-1 < iVar11 + 3) {
        pbVar7 = param_1 + lVar13 + 3;
      }
      pbVar21 = param_1;
      if (-1 < iVar11 + 4) {
        pbVar21 = param_1 + lVar13 + 4;
      }
      iVar11 = (int)((uint)*pbVar18 * (int)psVar28[1] + (int)*psVar28 * (uint)*pbVar19 +
                     (int)psVar28[2] * (uint)*pbVar4 + (uint)param_1[lVar33] * (int)psVar28[3] +
                     (int)psVar28[4] * (uint)*pbVar5 + (int)psVar28[5] * (uint)*pbVar6 +
                     (int)psVar28[6] * (uint)*pbVar7 + 0x40 + (int)psVar28[7] * (uint)*pbVar21) >> 7
      ;
      if (iVar11 < 0x100) {
        uVar26 = (undefined1)iVar11;
        if (iVar11 < 0) {
          uVar26 = 0;
        }
      }
      else {
        uVar26 = 0xff;
      }
      *param_3 = uVar26;
      lVar27 = lVar27 + uVar3;
      param_3 = param_3 + 1;
      local_48 = local_48 - 1;
    } while (local_48 != 0);
  }
  uVar31 = (uVar31 - uVar17) + 1;
  uVar12 = uVar17 + uVar31;
  uVar20 = (ulonglong)uVar31;
  do {
    pbVar19 = param_1 + (int)((ulonglong)lVar27 >> 0x20);
    psVar28 = (short *)(puVar22 + (ulonglong)((uint)(lVar27 >> 0x1b) & 0x1f) * 0x10);
    iVar11 = (int)((uint)pbVar19[4] * (int)psVar28[7] + (uint)pbVar19[3] * (int)psVar28[6] +
                   (uint)pbVar19[2] * (int)psVar28[5] + (uint)pbVar19[1] * (int)psVar28[4] +
                   (uint)pbVar19[-2] * (int)psVar28[1] + (uint)pbVar19[-1] * (int)psVar28[2] +
                   (uint)pbVar19[-3] * (int)*psVar28 + 0x40 + (int)psVar28[3] * (uint)*pbVar19) >> 7
    ;
    if (iVar11 < 0x100) {
      uVar26 = (undefined1)iVar11;
      if (iVar11 < 0) {
        uVar26 = 0;
      }
    }
    else {
      uVar26 = 0xff;
    }
    *param_3 = uVar26;
    lVar27 = lVar27 + uVar3;
    param_3 = param_3 + 1;
    uVar20 = uVar20 - 1;
  } while (uVar20 != 0);
LAB_145692a42:
  if ((int)uVar12 < (int)param_4) {
    lVar30 = lVar30 + -1;
    uVar20 = (ulonglong)(param_4 - uVar12);
    do {
      psVar28 = (short *)(puVar22 + (ulonglong)((uint)(lVar27 >> 0x1b) & 0x1f) * 0x10);
      iVar11 = (int)((ulonglong)lVar27 >> 0x20);
      lVar33 = (longlong)iVar11;
      lVar13 = lVar30;
      if (iVar11 + -3 < param_2) {
        lVar13 = lVar33 + -3;
      }
      lVar8 = lVar30;
      if (iVar11 + -2 < param_2) {
        lVar8 = lVar33 + -2;
      }
      iVar2 = (uint)param_1[lVar13] * (int)*psVar28 + (uint)param_1[lVar8] * (int)psVar28[1];
      if (param_2 < iVar11) {
        iVar2 = (uint)param_1[lVar30] * (int)psVar28[2] + iVar2;
        lVar13 = lVar30;
      }
      else {
        iVar2 = iVar2 + (uint)param_1[lVar33 + -1] * (int)psVar28[2];
        lVar13 = lVar33;
        if (param_2 <= iVar11) {
          lVar13 = lVar30;
        }
      }
      lVar8 = lVar30;
      if (iVar11 + 1 < param_2) {
        lVar8 = lVar33 + 1;
      }
      lVar9 = lVar30;
      if (iVar11 + 2 < param_2) {
        lVar9 = lVar33 + 2;
      }
      lVar10 = lVar30;
      if (iVar11 + 3 < param_2) {
        lVar10 = lVar33 + 3;
      }
      lVar25 = lVar30;
      if (iVar11 + 4 < param_2) {
        lVar25 = lVar33 + 4;
      }
      iVar11 = (int)(iVar2 + (uint)param_1[lVar13] * (int)psVar28[3] +
                     (uint)param_1[lVar8] * (int)psVar28[4] + (uint)param_1[lVar9] * (int)psVar28[5]
                     + (uint)param_1[lVar10] * (int)psVar28[6] + 0x40 +
                    (uint)param_1[lVar25] * (int)psVar28[7]) >> 7;
      if (iVar11 < 0x100) {
        uVar26 = (undefined1)iVar11;
        if (iVar11 < 0) {
          uVar26 = 0;
        }
      }
      else {
        uVar26 = 0xff;
      }
      *param_3 = uVar26;
      lVar27 = lVar27 + uVar3;
      param_3 = param_3 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return;
}



// FUNCTION 145692bc0 FUN_145692bc0 body=872 status=ok
// SIG undefined FUN_145692bc0(void)

void FUN_145692bc0(byte *param_1,int param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined1 uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  longlong lVar18;
  undefined1 uVar19;
  int iVar20;
  ulonglong uVar21;
  byte *pbVar22;
  longlong lVar23;
  ulonglong uVar24;
  
  lVar18 = (longlong)param_2;
  iVar17 = (param_2 - 4U) + (param_2 - 4U & 1);
  if (iVar17 < 4) {
    uVar24 = 0;
    uVar21 = uVar24;
    uVar5 = uVar24;
    if (0 < param_2) {
      do {
        iVar17 = (int)uVar5;
        lVar23 = lVar18 + -1;
        if (iVar17 + 1 < param_2) {
          lVar23 = uVar21 + 1;
        }
        uVar5 = uVar24;
        if (-1 < iVar17) {
          uVar5 = uVar21;
        }
        pbVar22 = param_1;
        if (-1 < iVar17 + -1) {
          pbVar22 = param_1 + (uVar21 - 1);
        }
        lVar8 = lVar18 + -1;
        if ((int)(iVar17 + 2U) < param_2) {
          lVar8 = uVar21 + 2;
        }
        pbVar16 = param_1;
        if (-1 < iVar17 + -2) {
          pbVar16 = param_1 + (uVar21 - 2);
        }
        lVar9 = lVar18 + -1;
        if (iVar17 + 3 < param_2) {
          lVar9 = uVar21 + 3;
        }
        pbVar10 = param_1;
        if (-1 < iVar17 + -3) {
          pbVar10 = param_1 + (uVar21 - 3);
        }
        lVar6 = lVar18 + -1;
        if (iVar17 + 4 < param_2) {
          lVar6 = uVar21 + 4;
        }
        iVar13 = (int)(((((uint)param_1[lVar23] + (uint)param_1[uVar5]) * 0x38 +
                         ((uint)param_1[lVar8] + (uint)*pbVar22) * 0xc +
                         ((uint)param_1[lVar9] + (uint)*pbVar16) * -3 + 0x40) - (uint)param_1[lVar6]
                       ) - (uint)*pbVar10) >> 7;
        if (iVar13 < 0x100) {
          uVar12 = (undefined1)iVar13;
          if (iVar13 < 0) {
            uVar12 = 0;
          }
        }
        else {
          uVar12 = 0xff;
        }
        *param_3 = uVar12;
        uVar21 = uVar21 + 2;
        param_3 = param_3 + 1;
        uVar5 = (ulonglong)(iVar17 + 2U);
      } while ((longlong)uVar21 < lVar18);
    }
  }
  else {
    iVar15 = -2;
    pbVar22 = param_1 + 2;
    iVar13 = 4;
    do {
      pbVar16 = param_1;
      if (-3 < iVar15) {
        pbVar16 = pbVar22 + -2;
      }
      bVar4 = *pbVar22;
      pbVar10 = param_1;
      if (-1 < iVar15 + 1) {
        pbVar10 = pbVar22 + -3;
      }
      pbVar1 = pbVar22 + -1;
      pbVar7 = param_1;
      if (-1 < iVar15) {
        pbVar7 = pbVar22 + -4;
      }
      pbVar2 = pbVar22 + 1;
      pbVar14 = param_1;
      if (-1 < iVar15 + -1) {
        pbVar14 = pbVar22 + -5;
      }
      pbVar3 = pbVar22 + 2;
      pbVar22 = pbVar22 + 2;
      iVar20 = (int)(((((uint)*pbVar1 + (uint)*pbVar16) * 0x38 +
                       ((uint)*pbVar10 + (uint)bVar4) * 0xc + ((uint)*pbVar2 + (uint)*pbVar7) * -3 +
                      0x40) - (uint)*pbVar3) - (uint)*pbVar14) >> 7;
      uVar12 = 0;
      if (iVar20 < 0x100) {
        uVar19 = (char)iVar20;
        if (iVar20 < 0) {
          uVar19 = uVar12;
        }
      }
      else {
        uVar19 = 0xff;
      }
      *param_3 = uVar19;
      param_3 = param_3 + 1;
      iVar15 = iVar15 + 2;
    } while ((longlong)(pbVar22 + (-2 - (longlong)param_1)) < 4);
    if (4 < (longlong)iVar17) {
      pbVar22 = param_1 + 8;
      lVar23 = ((longlong)iVar17 - 5U >> 1) + 1;
      iVar13 = (int)lVar23 * 2 + 4;
      do {
        iVar17 = (int)((((((((uint)pbVar22[-5] + (uint)pbVar22[-2]) * 4 - (uint)pbVar22[-6]) -
                          (uint)pbVar22[-1]) * 3 + ((uint)pbVar22[-4] + (uint)pbVar22[-3]) * 0x38) -
                        (uint)pbVar22[-7]) - (uint)*pbVar22) + 0x40) >> 7;
        if (iVar17 < 0x100) {
          uVar19 = (char)iVar17;
          if (iVar17 < 0) {
            uVar19 = uVar12;
          }
        }
        else {
          uVar19 = 0xff;
        }
        *param_3 = uVar19;
        pbVar22 = pbVar22 + 2;
        param_3 = param_3 + 1;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    lVar23 = (longlong)iVar13;
    for (; lVar23 < lVar18; lVar23 = lVar23 + 2) {
      lVar8 = lVar18 + -1;
      if (iVar13 + 1 < param_2) {
        lVar8 = lVar23 + 1;
      }
      lVar9 = lVar18 + -1;
      if (iVar13 + 2 < param_2) {
        lVar9 = lVar23 + 2;
      }
      lVar6 = lVar18 + -1;
      if (iVar13 + 3 < param_2) {
        lVar6 = lVar23 + 3;
      }
      lVar11 = lVar18 + -1;
      if (iVar13 + 4 < param_2) {
        lVar11 = lVar23 + 4;
      }
      iVar17 = (int)(((((uint)param_1[lVar8] + (uint)param_1[lVar23]) * 0x38 +
                       ((uint)param_1[lVar9] + (uint)param_1[lVar23 + -1]) * 0xc +
                       ((uint)param_1[lVar6] + (uint)param_1[lVar23 + -2]) * -3 + 0x40) -
                     (uint)param_1[lVar11]) - (uint)param_1[lVar23 + -3]) >> 7;
      if (iVar17 < 0x100) {
        uVar19 = (char)iVar17;
        if (iVar17 < 0) {
          uVar19 = uVar12;
        }
      }
      else {
        uVar19 = 0xff;
      }
      *param_3 = uVar19;
      param_3 = param_3 + 1;
      iVar13 = iVar13 + 2;
    }
  }
  return;
}



// FUNCTION 145692f30 FUN_145692f30 body=742 status=ok
// SIG undefined FUN_145692f30(void)

void FUN_145692f30(byte *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  
  lVar12 = (longlong)param_2;
  iVar13 = (param_2 - 3U) + (param_2 - 3U & 1);
  if (iVar13 < 4) {
    if (0 < param_2) {
      iVar13 = 2;
      lVar7 = (lVar12 - 1U >> 1) + 1;
      lVar10 = -1;
      do {
        lVar6 = lVar12 + -1;
        if (iVar13 <= param_2) {
          lVar6 = lVar10 + 2;
        }
        lVar3 = 0;
        if (-1 < iVar13 + -3) {
          lVar3 = lVar10;
        }
        pbVar11 = param_1;
        if (-1 < iVar13 + -5) {
          pbVar11 = param_1 + lVar10 + -2;
        }
        pbVar4 = (byte *)(lVar12 + -1);
        if (iVar13 + 1 < param_2) {
          pbVar4 = param_1 + lVar10 + 1 + (3 - (longlong)param_1);
        }
        iVar9 = (int)((param_1[lVar10 + 1] + 1) * 0x40 +
                      ((uint)param_1[lVar6] + (uint)param_1[lVar3]) * 0x23 +
                     ((uint)pbVar4[(longlong)param_1] + (uint)*pbVar11) * -3) >> 7;
        if (iVar9 < 0x100) {
          uVar8 = (undefined1)iVar9;
          if (iVar9 < 0) {
            uVar8 = 0;
          }
        }
        else {
          uVar8 = 0xff;
        }
        *param_3 = uVar8;
        iVar13 = iVar13 + 2;
        param_3 = param_3 + 1;
        lVar10 = lVar10 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  else {
    iVar9 = -1;
    pbVar11 = param_1 + 3;
    lVar10 = 2;
    iVar14 = 4;
    do {
      pbVar4 = param_1;
      if (-1 < iVar9) {
        pbVar4 = pbVar11 + -4;
      }
      pbVar5 = param_1;
      if (-1 < iVar9 + -2) {
        pbVar5 = pbVar11 + -6;
      }
      iVar2 = (int)((pbVar11[-3] + 1) * 0x40 + ((uint)*pbVar4 + (uint)pbVar11[-2]) * 0x23 +
                   ((uint)*pbVar5 + (uint)*pbVar11) * -3) >> 7;
      uVar8 = 0;
      if (iVar2 < 0x100) {
        uVar1 = (char)iVar2;
        if (iVar2 < 0) {
          uVar1 = uVar8;
        }
      }
      else {
        uVar1 = 0xff;
      }
      *param_3 = uVar1;
      iVar9 = iVar9 + 2;
      param_3 = param_3 + 1;
      pbVar11 = pbVar11 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (4 < (longlong)iVar13) {
      pbVar11 = param_1 + 7;
      lVar10 = ((longlong)iVar13 - 5U >> 1) + 1;
      iVar14 = (int)lVar10 * 2 + 4;
      do {
        iVar13 = (int)((pbVar11[-3] + 1) * 0x40 +
                      ((uint)pbVar11[-4] + (uint)pbVar11[-2]) * 0x23 +
                      ((uint)pbVar11[-6] + (uint)*pbVar11) * -3) >> 7;
        if (iVar13 < 0x100) {
          uVar1 = (char)iVar13;
          if (iVar13 < 0) {
            uVar1 = uVar8;
          }
        }
        else {
          uVar1 = 0xff;
        }
        *param_3 = uVar1;
        pbVar11 = pbVar11 + 2;
        param_3 = param_3 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    lVar10 = (longlong)iVar14;
    if (lVar10 < lVar12) {
      lVar7 = lVar10 + 3;
      iVar14 = iVar14 + 3;
      lVar10 = ((lVar12 - lVar10) - 1U >> 1) + 1;
      do {
        lVar6 = lVar12 + -1;
        if (iVar14 + -2 < param_2) {
          lVar6 = lVar7 + -2;
        }
        lVar3 = lVar12 + -1;
        if (iVar14 < param_2) {
          lVar3 = lVar7;
        }
        iVar13 = (int)((param_1[lVar7 + -3] + 1) * 0x40 +
                       ((uint)param_1[lVar6] + (uint)param_1[lVar7 + -4]) * 0x23 +
                      ((uint)param_1[lVar3] + (uint)param_1[lVar7 + -6]) * -3) >> 7;
        if (iVar13 < 0x100) {
          uVar1 = (char)iVar13;
          if (iVar13 < 0) {
            uVar1 = uVar8;
          }
        }
        else {
          uVar1 = 0xff;
        }
        *param_3 = uVar1;
        iVar14 = iVar14 + 2;
        param_3 = param_3 + 1;
        lVar7 = lVar7 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}



// FUNCTION 145693220 FUN_145693220 body=258 status=ok
// SIG undefined FUN_145693220(void)

void FUN_145693220(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4,void *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)param_4;
  uVar4 = (uint)param_2;
  if (uVar4 == uVar9) {
    memcpy(param_3,param_1,(longlong)(int)uVar4);
    return;
  }
  uVar2 = param_2 & 0xffffffff;
  pvVar5 = (void *)0x0;
  pvVar3 = pvVar5;
  while( true ) {
    uVar1 = (int)uVar2 + 1 >> 1;
    uVar2 = (ulonglong)uVar1;
    iVar7 = (int)pvVar3;
    if ((int)uVar1 < (int)uVar9) break;
    pvVar3 = (void *)(ulonglong)(iVar7 + 1);
  }
  pvVar3 = param_1;
  if (0 < iVar7) {
    pvVar3 = pvVar5;
    do {
      uVar1 = (int)param_2 + 1 >> 1;
      iVar8 = (int)pvVar5;
      pvVar6 = pvVar3;
      if (iVar8 == 0) {
        pvVar6 = param_1;
      }
      if (((iVar8 != iVar7 + -1) || (pvVar3 = param_3, uVar1 != uVar9)) &&
         (pvVar3 = param_5, ((ulonglong)pvVar5 & 1) != 0)) {
        pvVar3 = (void *)((longlong)((int)(uVar4 + 1) >> 1) + (longlong)param_5);
      }
      if ((param_2 & 1) == 0) {
        FUN_145692bc0(pvVar6,param_2,pvVar3);
      }
      else {
        FUN_145692f30();
      }
      pvVar5 = (void *)(ulonglong)(iVar8 + 1U);
      param_2 = (ulonglong)uVar1;
    } while ((int)(iVar8 + 1U) < iVar7);
    if (uVar1 == uVar9) {
      return;
    }
    param_4 = param_4 & 0xffffffff;
  }
  FUN_1456924e0(pvVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 145693330 FUN_145693330 body=2067 status=ok
// SIG undefined FUN_145693330(void)

void FUN_145693330(ushort *param_1,int param_2,undefined2 *param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ushort *puVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  short *psVar23;
  longlong lVar24;
  ushort *puVar25;
  ulonglong local_res18;
  ulonglong local_40;
  
  lVar24 = (longlong)param_2;
  uVar17 = (ulonglong)(int)param_4;
  local_res18 = (ulonglong)param_4;
  lVar22 = (longlong)((int)param_4 / 2);
  uVar1 = (ulonglong)((lVar24 << 0x20) + lVar22) / uVar17;
  if ((int)param_4 < param_2) {
    lVar22 = ((longlong)(int)(param_2 - param_4) * 0x80000000 + lVar22) / (longlong)uVar17;
  }
  else {
    lVar22 = -(((longlong)(int)(param_4 - param_2) * 0x80000000 + lVar22) / (longlong)uVar17);
  }
  iVar12 = param_4 * 0x10;
  if (iVar12 < param_2 * 0x10) {
    if (iVar12 < param_2 * 0xd) {
      if (iVar12 < param_2 * 0xb) {
        puVar18 = &DAT_149df5a20;
        if (iVar12 < param_2 * 9) {
          puVar18 = &DAT_149df5820;
        }
      }
      else {
        puVar18 = &DAT_149df5c20;
      }
    }
    else {
      puVar18 = &DAT_149df5e20;
    }
  }
  else {
    puVar18 = &DAT_149df6020;
  }
  iVar12 = 0;
  local_40 = 0;
  for (lVar14 = lVar22; iVar15 = (int)local_40, lVar14 >> 0x20 < 3; lVar14 = lVar14 + uVar1) {
    local_40 = (ulonglong)(iVar15 + 1);
  }
  uVar21 = param_4 - 1;
  for (lVar14 = (longlong)(int)uVar21 * uVar1 + lVar22; lVar24 <= (lVar14 >> 0x20) + 4;
      lVar14 = lVar14 - uVar1) {
    uVar21 = uVar21 - 1;
  }
  if ((int)uVar21 < iVar15) {
    if ((int)param_4 < 1) {
      return;
    }
    do {
      lVar14 = 0;
      psVar23 = (short *)(puVar18 + (ulonglong)((uint)(lVar22 >> 0x1b) & 0x1f) * 0x10);
      iVar12 = (int)((ulonglong)lVar22 >> 0x20);
      lVar19 = (longlong)iVar12;
      lVar2 = lVar14;
      if ((-1 < iVar12 + -3) && (lVar2 = lVar24 + -1, iVar12 + -3 < param_2)) {
        lVar2 = lVar19 + -3;
      }
      if ((-1 < iVar12 + -2) && (lVar14 = lVar24 + -1, iVar12 + -2 < param_2)) {
        lVar14 = lVar19 + -2;
      }
      iVar15 = (uint)param_1[lVar2] * (int)*psVar23 + (uint)param_1[lVar14] * (int)psVar23[1];
      if (iVar12 + -1 < 0) {
        lVar14 = 0;
LAB_145693543:
        iVar15 = iVar15 + (uint)param_1[lVar14] * (int)psVar23[2];
        if (-1 < lVar22) goto LAB_14569356b;
        lVar14 = 0;
      }
      else {
        if (param_2 <= iVar12 + -1) {
          lVar14 = lVar24 + -1;
          goto LAB_145693543;
        }
        iVar15 = (uint)param_1[lVar19 + -1] * (int)psVar23[2] + iVar15;
LAB_14569356b:
        lVar14 = lVar24 + -1;
        if (iVar12 < param_2) {
          lVar14 = lVar19;
        }
      }
      if (iVar12 + 1 < 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar24 + -1;
        if (iVar12 + 1 < param_2) {
          lVar2 = lVar19 + 1;
        }
      }
      if (iVar12 + 2 < 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar24 + -1;
        if (iVar12 + 2 < param_2) {
          lVar3 = lVar19 + 2;
        }
      }
      if (iVar12 + 3 < 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar24 + -1;
        if (iVar12 + 3 < param_2) {
          lVar4 = lVar19 + 3;
        }
      }
      if (iVar12 + 4 < 0) {
        lVar19 = 0;
      }
      else if (iVar12 + 4 < param_2) {
        lVar19 = lVar19 + 4;
      }
      else {
        lVar19 = lVar24 + -1;
      }
      iVar12 = (int)((int)psVar23[7] * (uint)param_1[lVar19] + 0x40 +
                    iVar15 + (uint)param_1[lVar14] * (int)psVar23[3] +
                    (uint)param_1[lVar2] * (int)psVar23[4] + (uint)param_1[lVar3] * (int)psVar23[5]
                    + (uint)param_1[lVar4] * (int)psVar23[6]) >> 7;
      if (param_5 == 8) {
LAB_145693668:
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xff < iVar12) {
          iVar12 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0x3ff < iVar12) {
          iVar12 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145693668;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xfff < iVar12) {
          iVar12 = 0xfff;
        }
      }
      lVar22 = lVar22 + uVar1;
      *param_3 = (short)iVar12;
      param_3 = param_3 + 1;
      local_res18 = local_res18 - 1;
      if (local_res18 == 0) {
        return;
      }
    } while( true );
  }
  if (iVar15 < 1) {
    iVar15 = iVar12;
    if (0x7fffffff < uVar21) goto LAB_1456939b0;
  }
  else {
    do {
      iVar12 = (int)((ulonglong)lVar22 >> 0x20);
      lVar24 = (longlong)iVar12;
      psVar23 = (short *)(puVar18 + (ulonglong)((uint)(lVar22 >> 0x1b) & 0x1f) * 0x10);
      puVar25 = param_1;
      if (-1 < iVar12 + -3) {
        puVar25 = param_1 + lVar24 + -3;
      }
      lVar14 = 0;
      if (-1 < iVar12 + -2) {
        lVar14 = lVar24 + -2;
      }
      puVar5 = param_1;
      if (-1 < iVar12 + -1) {
        puVar5 = param_1 + lVar24 + -1;
      }
      lVar19 = lVar24;
      if (lVar22 < 0) {
        lVar19 = 0;
      }
      puVar6 = param_1;
      if (-1 < iVar12 + 1) {
        puVar6 = param_1 + lVar24 + 1;
      }
      puVar7 = param_1;
      if (-1 < iVar12 + 2) {
        puVar7 = param_1 + lVar24 + 2;
      }
      puVar8 = param_1;
      if (-1 < iVar12 + 3) {
        puVar8 = param_1 + lVar24 + 3;
      }
      puVar16 = param_1;
      if (-1 < iVar12 + 4) {
        puVar16 = param_1 + lVar24 + 4;
      }
      iVar12 = (int)((uint)*puVar16 * (int)psVar23[7] + 0x40 +
                    (uint)param_1[lVar14] * (int)psVar23[1] + (int)*psVar23 * (uint)*puVar25 +
                    (int)psVar23[2] * (uint)*puVar5 + (uint)param_1[lVar19] * (int)psVar23[3] +
                    (int)psVar23[4] * (uint)*puVar6 + (int)psVar23[5] * (uint)*puVar7 +
                    (int)psVar23[6] * (uint)*puVar8) >> 7;
      if (param_5 == 8) {
LAB_145693823:
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else {
          iVar13 = 0xff;
LAB_145693838:
          if (iVar13 < iVar12) {
            iVar12 = iVar13;
          }
        }
      }
      else if (param_5 == 10) {
        if (-1 < iVar12) {
          iVar13 = 0x3ff;
          goto LAB_145693838;
        }
        iVar12 = 0;
      }
      else {
        if (param_5 != 0xc) goto LAB_145693823;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xfff < iVar12) {
          iVar12 = 0xfff;
        }
      }
      *param_3 = (short)iVar12;
      lVar22 = lVar22 + uVar1;
      param_3 = param_3 + 1;
      local_40 = local_40 - 1;
    } while (local_40 != 0);
  }
  uVar21 = (uVar21 - iVar15) + 1;
  iVar12 = iVar15 + uVar21;
  uVar17 = (ulonglong)uVar21;
  do {
    lVar24 = (longlong)(int)((ulonglong)lVar22 >> 0x20);
    psVar23 = (short *)(puVar18 + (ulonglong)((uint)(lVar22 >> 0x1b) & 0x1f) * 0x10);
    iVar15 = (int)((uint)param_1[lVar24 + 4] * (int)psVar23[7] +
                   (uint)param_1[lVar24 + 3] * (int)psVar23[6] +
                   (uint)param_1[lVar24 + 2] * (int)psVar23[5] +
                   (uint)param_1[lVar24 + -2] * (int)psVar23[1] +
                   (uint)param_1[lVar24 + -1] * (int)psVar23[2] +
                   (uint)param_1[lVar24 + 1] * (int)psVar23[4] +
                   (uint)param_1[lVar24 + -3] * (int)*psVar23 + 0x40 +
                  (int)psVar23[3] * (uint)param_1[lVar24]) >> 7;
    if (param_5 == 8) {
LAB_145693975:
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      else if (0xff < iVar15) {
        iVar15 = 0xff;
      }
    }
    else if (param_5 == 10) {
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      else if (0x3ff < iVar15) {
        iVar15 = 0x3ff;
      }
    }
    else {
      if (param_5 != 0xc) goto LAB_145693975;
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      else if (0xfff < iVar15) {
        iVar15 = 0xfff;
      }
    }
    *param_3 = (short)iVar15;
    lVar22 = lVar22 + uVar1;
    param_3 = param_3 + 1;
    uVar17 = uVar17 - 1;
  } while (uVar17 != 0);
LAB_1456939b0:
  if (iVar12 < (int)param_4) {
    lVar24 = (longlong)param_2 + -1;
    uVar17 = (ulonglong)(param_4 - iVar12);
    do {
      psVar23 = (short *)(puVar18 + (ulonglong)((uint)(lVar22 >> 0x1b) & 0x1f) * 0x10);
      iVar12 = (int)((ulonglong)lVar22 >> 0x20);
      lVar19 = (longlong)iVar12;
      lVar14 = lVar24;
      if (iVar12 + -3 < param_2) {
        lVar14 = lVar19 + -3;
      }
      lVar2 = lVar24;
      if (iVar12 + -2 < param_2) {
        lVar2 = lVar19 + -2;
      }
      lVar3 = lVar24;
      if (iVar12 <= param_2) {
        lVar3 = lVar19 + -1;
      }
      lVar4 = lVar19;
      if (param_2 <= iVar12) {
        lVar4 = lVar24;
      }
      lVar9 = lVar24;
      if (iVar12 + 1 < param_2) {
        lVar9 = lVar19 + 1;
      }
      lVar10 = lVar24;
      if (iVar12 + 2 < param_2) {
        lVar10 = lVar19 + 2;
      }
      lVar11 = lVar24;
      if (iVar12 + 3 < param_2) {
        lVar11 = lVar19 + 3;
      }
      lVar20 = lVar24;
      if (iVar12 + 4 < param_2) {
        lVar20 = lVar19 + 4;
      }
      iVar12 = (int)((int)psVar23[7] * (uint)param_1[lVar20] + 0x40 +
                    (uint)param_1[lVar14] * (int)*psVar23 + (uint)param_1[lVar2] * (int)psVar23[1] +
                    (uint)param_1[lVar3] * (int)psVar23[2] + (uint)param_1[lVar4] * (int)psVar23[3]
                    + (uint)param_1[lVar9] * (int)psVar23[4] +
                    (uint)param_1[lVar10] * (int)psVar23[5] +
                    (uint)param_1[lVar11] * (int)psVar23[6]) >> 7;
      if (param_5 == 8) {
LAB_145693b01:
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else {
          iVar15 = 0xff;
LAB_145693b0e:
          if (iVar15 < iVar12) {
            iVar12 = iVar15;
          }
        }
      }
      else if (param_5 == 10) {
        if (-1 < iVar12) {
          iVar15 = 0x3ff;
          goto LAB_145693b0e;
        }
        iVar12 = 0;
      }
      else {
        if (param_5 != 0xc) goto LAB_145693b01;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xfff < iVar12) {
          iVar12 = 0xfff;
        }
      }
      lVar22 = lVar22 + uVar1;
      *param_3 = (short)iVar12;
      param_3 = param_3 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}



// FUNCTION 145693b50 FUN_145693b50 body=1243 status=ok
// SIG undefined FUN_145693b50(void)

void FUN_145693b50(ushort *param_1,int param_2,undefined2 *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ushort *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  
  puVar1 = PTR_DAT_14c748180;
  lVar16 = (longlong)param_2;
  iVar14 = 0;
  lVar11 = 0;
  iVar15 = (param_2 - 4U) + (param_2 - 4U & 1);
  if (iVar15 < 4) {
    if (0 < param_2) {
      lVar13 = 0;
      do {
        lVar7 = lVar16 + -1;
        if (iVar14 + 1 < param_2) {
          lVar7 = lVar13 + 1;
        }
        lVar8 = lVar11;
        if (-1 < iVar14) {
          lVar8 = lVar13;
        }
        puVar5 = param_1;
        if (-1 < iVar14 + -1) {
          puVar5 = param_1 + lVar13 + -1;
        }
        lVar9 = lVar16 + -1;
        if (iVar14 + 2 < param_2) {
          lVar9 = lVar13 + 2;
        }
        puVar6 = param_1;
        if (-1 < iVar14 + -2) {
          puVar6 = param_1 + lVar13 + -2;
        }
        lVar3 = lVar16 + -1;
        if (iVar14 + 3 < param_2) {
          lVar3 = lVar13 + 3;
        }
        puVar12 = param_1;
        if (-1 < iVar14 + -3) {
          puVar12 = param_1 + lVar13 + -3;
        }
        lVar4 = lVar16 + -1;
        if (iVar14 + 4 < param_2) {
          lVar4 = lVar13 + 4;
        }
        iVar15 = (int)((int)*(short *)(puVar1 + 6) * ((uint)param_1[lVar4] + (uint)*puVar12) + 0x40
                      + ((uint)param_1[lVar3] + (uint)*puVar6) * (int)*(short *)(puVar1 + 4) +
                        ((uint)param_1[lVar9] + (uint)*puVar5) * (int)*(short *)(puVar1 + 2) +
                        ((uint)param_1[lVar7] + (uint)param_1[lVar8]) * (int)*(short *)puVar1) >> 7;
        if (param_4 == 8) {
LAB_145693cc8:
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          else {
            iVar17 = 0xff;
LAB_145693cd7:
            if (iVar17 < iVar15) {
              iVar15 = iVar17;
            }
          }
        }
        else if (param_4 == 10) {
          if (-1 < iVar15) {
            iVar17 = 0x3ff;
            goto LAB_145693cd7;
          }
          iVar15 = 0;
        }
        else {
          if (param_4 != 0xc) goto LAB_145693cc8;
          if (-1 < iVar15) {
            iVar17 = 0xfff;
            goto LAB_145693cd7;
          }
          iVar15 = 0;
        }
        *param_3 = (short)iVar15;
        lVar13 = lVar13 + 2;
        param_3 = param_3 + 1;
        iVar14 = iVar14 + 2;
      } while (lVar13 < lVar16);
    }
  }
  else {
    iVar17 = -2;
    lVar13 = lVar11;
    do {
      lVar7 = lVar13;
      if (iVar17 < -2) {
        lVar7 = lVar11;
      }
      lVar8 = lVar13 + 2;
      lVar9 = lVar11;
      if (-1 < iVar17 + 1) {
        lVar9 = lVar13 + -1;
      }
      puVar5 = param_1;
      if (-1 < iVar17) {
        puVar5 = param_1 + lVar13 + -2;
      }
      puVar6 = param_1;
      if (-1 < iVar17 + -1) {
        puVar6 = param_1 + lVar13 + -3;
      }
      iVar2 = (int)((int)*(short *)(puVar1 + 6) * ((uint)param_1[lVar13 + 4] + (uint)*puVar6) + 0x40
                   + ((uint)param_1[lVar13 + 3] + (uint)*puVar5) * (int)*(short *)(puVar1 + 4) +
                     ((uint)param_1[lVar9] + (uint)param_1[lVar8]) * (int)*(short *)(puVar1 + 2) +
                     ((uint)param_1[lVar7] + (uint)param_1[lVar13 + 1]) * (int)*(short *)puVar1) >>
              7;
      if (param_4 == 8) {
LAB_145693de5:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else {
          iVar10 = 0xff;
LAB_145693df4:
          if (iVar10 < iVar2) {
            iVar2 = iVar10;
          }
        }
      }
      else if (param_4 == 10) {
        if (-1 < iVar2) {
          iVar10 = 0x3ff;
          goto LAB_145693df4;
        }
        iVar2 = 0;
      }
      else {
        if (param_4 != 0xc) goto LAB_145693de5;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      *param_3 = (short)iVar2;
      iVar14 = iVar14 + 2;
      param_3 = param_3 + 1;
      iVar17 = iVar17 + 2;
      lVar13 = lVar8;
    } while (lVar8 < 4);
    lVar11 = (longlong)iVar14;
    while (lVar11 < iVar15) {
      iVar17 = (int)((int)*(short *)puVar1 * ((uint)param_1[lVar11 + 1] + (uint)param_1[lVar11]) +
                     0x40 + ((uint)param_1[lVar11 + -3] + (uint)param_1[lVar11 + 4]) *
                            (int)*(short *)(puVar1 + 6) +
                            ((uint)param_1[lVar11 + -2] + (uint)param_1[lVar11 + 3]) *
                            (int)*(short *)(puVar1 + 4) +
                            ((uint)param_1[lVar11 + 2] + (uint)param_1[lVar11 + -1]) *
                            (int)*(short *)(puVar1 + 2)) >> 7;
      if (param_4 == 8) {
LAB_145693ec6:
        if (iVar17 < 0) {
          iVar17 = 0;
        }
        else {
          iVar2 = 0xff;
LAB_145693ed5:
          if (iVar2 < iVar17) {
            iVar17 = iVar2;
          }
        }
      }
      else if (param_4 == 10) {
        if (-1 < iVar17) {
          iVar2 = 0x3ff;
          goto LAB_145693ed5;
        }
        iVar17 = 0;
      }
      else {
        if (param_4 != 0xc) goto LAB_145693ec6;
        if (-1 < iVar17) {
          iVar2 = 0xfff;
          goto LAB_145693ed5;
        }
        iVar17 = 0;
      }
      *param_3 = (short)iVar17;
      iVar14 = iVar14 + 2;
      param_3 = param_3 + 1;
      lVar11 = lVar11 + 2;
    }
    lVar11 = (longlong)iVar14;
    for (; lVar11 < lVar16; lVar11 = lVar11 + 2) {
      lVar13 = lVar16 + -1;
      if (iVar14 + 1 < param_2) {
        lVar13 = lVar11 + 1;
      }
      lVar7 = lVar16 + -1;
      if (iVar14 + 2 < param_2) {
        lVar7 = lVar11 + 2;
      }
      lVar8 = lVar16 + -1;
      if (iVar14 + 3 < param_2) {
        lVar8 = lVar11 + 3;
      }
      lVar9 = lVar16 + -1;
      if (iVar14 + 4 < param_2) {
        lVar9 = lVar11 + 4;
      }
      iVar15 = (int)((int)*(short *)(puVar1 + 6) *
                     ((uint)param_1[lVar11 + -3] + (uint)param_1[lVar9]) + 0x40 +
                    ((uint)param_1[lVar11 + -2] + (uint)param_1[lVar8]) *
                    (int)*(short *)(puVar1 + 4) +
                    ((uint)param_1[lVar11 + -1] + (uint)param_1[lVar7]) *
                    (int)*(short *)(puVar1 + 2) +
                    ((uint)param_1[lVar13] + (uint)param_1[lVar11]) * (int)*(short *)puVar1) >> 7;
      if (param_4 == 8) {
LAB_145693fea:
        if (iVar15 < 0) {
          iVar15 = 0;
        }
        else {
          iVar17 = 0xff;
LAB_145693ff9:
          if (iVar17 < iVar15) {
            iVar15 = iVar17;
          }
        }
      }
      else if (param_4 == 10) {
        if (-1 < iVar15) {
          iVar17 = 0x3ff;
          goto LAB_145693ff9;
        }
        iVar15 = 0;
      }
      else {
        if (param_4 != 0xc) goto LAB_145693fea;
        if (-1 < iVar15) {
          iVar17 = 0xfff;
          goto LAB_145693ff9;
        }
        iVar15 = 0;
      }
      *param_3 = (short)iVar15;
      param_3 = param_3 + 1;
      iVar14 = iVar14 + 2;
    }
  }
  return;
}



// FUNCTION 145694030 FUN_145694030 body=1404 status=ok
// SIG undefined FUN_145694030(void)

void FUN_145694030(ushort *param_1,uint param_2,undefined2 *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  short *psVar12;
  ulonglong uVar13;
  ushort *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong local_50;
  
  uVar13 = (ulonglong)(int)param_2;
  iVar8 = (param_2 - 3) + (param_2 - 3 & 1);
  if (iVar8 < 4) {
    if (0 < (int)param_2) {
      uVar18 = uVar13 - 1;
      iVar8 = 2;
      local_50 = (uVar18 >> 1) + 1;
      lVar15 = -1;
      puVar3 = param_1;
      psVar12 = (short *)PTR_DAT_14c748188;
      do {
        puVar1 = PTR_DAT_14c748188;
        uVar9 = uVar18;
        if (iVar8 <= (int)uVar13) {
          uVar9 = lVar15 + 2;
        }
        lVar16 = 0;
        if (-1 < iVar8 + -3) {
          lVar16 = lVar15;
        }
        puVar5 = param_1;
        if (-1 < iVar8 + -4) {
          puVar5 = param_1 + lVar15 + -1;
        }
        uVar13 = uVar18;
        if (iVar8 < (int)param_2) {
          uVar13 = lVar15 + 3;
        }
        puVar14 = param_1;
        if (-1 < iVar8 + -5) {
          puVar14 = param_1 + lVar15 + -2;
        }
        uVar6 = uVar18;
        if (iVar8 + 1 < (int)param_2) {
          uVar6 = lVar15 + 4;
        }
        iVar2 = (int)((uint)*puVar3 * (int)*psVar12 + 0x40 +
                      ((uint)param_1[uVar9] + (uint)param_1[lVar16]) * (int)psVar12[1] +
                      ((uint)param_1[uVar13] + (uint)*puVar5) *
                      (int)*(short *)(PTR_DAT_14c748188 + 4) +
                     ((uint)param_1[uVar6] + (uint)*puVar14) *
                     (int)*(short *)(PTR_DAT_14c748188 + 6)) >> 7;
        if (param_4 == 8) {
LAB_1456941c8:
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xff < iVar2) {
            iVar2 = 0xff;
          }
        }
        else if (param_4 == 10) {
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0x3ff < iVar2) {
            iVar2 = 0x3ff;
          }
        }
        else {
          if (param_4 != 0xc) goto LAB_1456941c8;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (0xfff < iVar2) {
            iVar2 = 0xfff;
          }
        }
        iVar8 = iVar8 + 2;
        uVar13 = (ulonglong)param_2;
        *(short *)((longlong)param_3 + lVar15 + 1) = (short)iVar2;
        lVar15 = lVar15 + 2;
        puVar3 = puVar3 + 2;
        local_50 = local_50 + -1;
        psVar12 = (short *)puVar1;
      } while (local_50 != 0);
    }
  }
  else {
    lVar16 = -1;
    iVar2 = 4;
    puVar3 = param_1 + -3;
    lVar15 = 2;
    iVar17 = -3;
    do {
      lVar11 = 0;
      if (-1 < iVar17 + 1) {
        lVar11 = lVar16 + -1;
      }
      lVar4 = 0;
      if (-1 < iVar17 + 2) {
        lVar4 = lVar16;
      }
      puVar5 = puVar3;
      if (iVar17 < 0) {
        puVar5 = param_1;
      }
      iVar10 = (int)(((uint)puVar3[4] + (uint)param_1[lVar4]) *
                     (int)*(short *)(PTR_DAT_14c748188 + 2) +
                     (uint)puVar3[3] * (int)*(short *)PTR_DAT_14c748188 + 0x40 +
                     ((uint)param_1[lVar11] + (uint)puVar3[5]) *
                     (int)*(short *)(PTR_DAT_14c748188 + 4) +
                    ((uint)puVar3[6] + (uint)*puVar5) * (int)*(short *)(PTR_DAT_14c748188 + 6)) >> 7
      ;
      if (param_4 == 8) {
LAB_14569432e:
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xff < iVar10) {
          iVar10 = 0xff;
        }
      }
      else if (param_4 == 10) {
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0x3ff < iVar10) {
          iVar10 = 0x3ff;
        }
      }
      else {
        if (param_4 != 0xc) goto LAB_14569432e;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xfff < iVar10) {
          iVar10 = 0xfff;
        }
      }
      puVar3 = puVar3 + 2;
      *param_3 = (short)iVar10;
      puVar1 = PTR_DAT_14c748188;
      lVar16 = lVar16 + 2;
      param_3 = param_3 + 1;
      lVar15 = lVar15 + -1;
      iVar17 = iVar17 + 2;
    } while (lVar15 != 0);
    if (4 < (longlong)iVar8) {
      puVar3 = param_1 + 7;
      lVar15 = ((longlong)iVar8 - 5U >> 1) + 1;
      iVar2 = (int)lVar15 * 2 + 4;
      do {
        iVar8 = (int)((int)*(short *)(puVar1 + 6) * ((uint)puVar3[-6] + (uint)*puVar3) +
                      (uint)puVar3[-3] * (int)*(short *)puVar1 + 0x40 +
                     ((uint)puVar3[-4] + (uint)puVar3[-2]) * (int)*(short *)(puVar1 + 2) +
                     ((uint)puVar3[-5] + (uint)puVar3[-1]) * (int)*(short *)(puVar1 + 4)) >> 7;
        if (param_4 == 8) {
LAB_14569441c:
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xff < iVar8) {
            iVar8 = 0xff;
          }
        }
        else if (param_4 == 10) {
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0x3ff < iVar8) {
            iVar8 = 0x3ff;
          }
        }
        else {
          if (param_4 != 0xc) goto LAB_14569441c;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xfff < iVar8) {
            iVar8 = 0xfff;
          }
        }
        *param_3 = (short)iVar8;
        puVar3 = puVar3 + 2;
        param_3 = param_3 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    lVar15 = (longlong)iVar2;
    if (lVar15 < (longlong)uVar13) {
      uVar18 = lVar15 + 3;
      iVar2 = iVar2 + 3;
      lVar16 = ((uVar13 - lVar15) - 1 >> 1) + 1;
      psVar12 = (short *)PTR_DAT_14c748188;
      puVar3 = param_1 + lVar15 + -3;
      do {
        puVar1 = PTR_DAT_14c748188;
        uVar9 = uVar13 - 1;
        if (iVar2 + -2 < (int)param_2) {
          uVar9 = uVar18 - 2;
        }
        uVar6 = uVar13;
        if (iVar2 <= (int)param_2) {
          uVar6 = uVar18;
        }
        uVar7 = uVar18;
        if ((int)param_2 <= iVar2) {
          uVar7 = uVar13 - 1;
        }
        iVar8 = (int)((uint)puVar3[3] * (int)*psVar12 + 0x40 +
                      ((uint)param_1[uVar9] + (uint)puVar3[2]) *
                      (int)*(short *)(PTR_DAT_14c748188 + 2) +
                      ((uint)param_1[uVar6 - 1] + (uint)puVar3[1]) *
                      (int)*(short *)(PTR_DAT_14c748188 + 4) +
                     ((uint)param_1[uVar7] + (uint)*puVar3) * (int)*(short *)(PTR_DAT_14c748188 + 6)
                     ) >> 7;
        if (param_4 == 8) {
LAB_145694561:
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xff < iVar8) {
            iVar8 = 0xff;
          }
        }
        else if (param_4 == 10) {
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0x3ff < iVar8) {
            iVar8 = 0x3ff;
          }
        }
        else {
          if (param_4 != 0xc) goto LAB_145694561;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xfff < iVar8) {
            iVar8 = 0xfff;
          }
        }
        iVar2 = iVar2 + 2;
        uVar18 = uVar18 + 2;
        *param_3 = (short)iVar8;
        param_3 = param_3 + 1;
        lVar16 = lVar16 + -1;
        psVar12 = (short *)puVar1;
        puVar3 = puVar3 + 2;
      } while (lVar16 != 0);
    }
  }
  return;
}



// FUNCTION 1456945b0 FUN_1456945b0 body=313 status=ok
// SIG undefined FUN_1456945b0(void)

void FUN_1456945b0(void *param_1,ulonglong param_2,void *param_3,uint param_4,void *param_5,
                  undefined4 param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  
  uVar3 = (uint)param_2;
  if (uVar3 != param_4) {
    uVar2 = param_2 & 0xffffffff;
    pvVar4 = (void *)0x0;
    pvVar7 = pvVar4;
    while( true ) {
      uVar1 = (int)uVar2 + 1 >> 1;
      uVar2 = (ulonglong)uVar1;
      iVar6 = (int)pvVar7;
      if ((int)uVar1 < (int)param_4) break;
      pvVar7 = (void *)(ulonglong)(iVar6 + 1);
    }
    if (iVar6 < 1) {
      FUN_145693330();
    }
    else {
      pvVar7 = pvVar4;
      do {
        uVar1 = (int)param_2 + 1 >> 1;
        iVar8 = (int)pvVar7;
        pvVar5 = pvVar4;
        if (iVar8 == 0) {
          pvVar5 = param_1;
        }
        if (((iVar8 != iVar6 + -1) || (pvVar4 = param_3, uVar1 != param_4)) &&
           (pvVar4 = param_5, ((ulonglong)pvVar7 & 1) != 0)) {
          pvVar4 = (void *)((longlong)param_5 + (longlong)((int)(uVar3 + 1) >> 1) * 2);
        }
        if ((param_2 & 1) == 0) {
          FUN_145693b50(pvVar5,param_2,pvVar4,param_6);
        }
        else {
          FUN_145694030();
        }
        pvVar7 = (void *)(ulonglong)(iVar8 + 1U);
        param_2 = (ulonglong)uVar1;
      } while ((int)(iVar8 + 1U) < iVar6);
      if (uVar1 != param_4) {
        FUN_145693330(pvVar4,param_2,param_3,param_4,param_6);
      }
    }
    return;
  }
  memcpy(param_3,param_1,(longlong)(int)uVar3 * 2);
  return;
}



// FUNCTION 1456946f0 FUN_1456946f0 body=707 status=ok
// SIG undefined FUN_1456946f0(void)

ulonglong FUN_1456946f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_40;
  int local_38;
  int local_30;
  int local_28;
  int local_20;
  
  iVar7 = *(int *)((longlong)param_2 + 0xc);
  local_48 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xe4);
  if ((iVar7 != iVar1) || ((int)param_2[2] != (int)param_1[0x1d])) {
    if ((1 < *(uint *)((longlong)param_2 + 0x2c)) || ((int)param_2[5] != 0)) {
      pcVar8 = "Cannot change width or height after initialization";
      goto LAB_14569499b;
    }
    local_40 = (int)param_2[2];
    local_30 = (int)param_1[0x1d];
    if ((((iVar7 * 2 < iVar1) || (local_40 * 2 < local_30)) || (iVar1 << 4 < iVar7)) ||
       (bVar5 = true, local_30 << 4 < local_40)) {
      bVar5 = false;
    }
    local_38 = iVar7;
    local_28 = iVar1;
    if (bVar5) {
      iVar1 = *(int *)(param_1[0xa5] + 0xb64d0);
      if (((iVar1 == 0) || (iVar7 <= iVar1)) &&
         ((iVar7 = *(int *)(param_1[0xa5] + 0xb64d4), iVar7 == 0 || (local_40 <= iVar7))))
      goto LAB_1456947b8;
    }
    local_48 = 1;
  }
LAB_1456947b8:
  if (*(uint *)((longlong)param_2 + 0x2c) <= *(uint *)((longlong)param_1 + 0x104)) {
    uVar9 = FUN_1456976e0(param_1,param_2,param_1 + 0x5a);
    local_20 = (int)uVar9;
    if (local_20 != 0) {
      return uVar9;
    }
    iVar7 = __intrinsic_setjmp(param_1[0xa5] + 0x29f40,auStack_68);
    if (iVar7 == 0) {
      lVar12 = 3;
      plVar6 = param_1 + 0x1b;
      do {
        plVar13 = plVar6;
        plVar10 = param_2;
        lVar11 = plVar10[1];
        *plVar13 = *plVar10;
        plVar13[1] = lVar11;
        lVar11 = plVar10[3];
        plVar13[2] = plVar10[2];
        plVar13[3] = lVar11;
        lVar11 = plVar10[5];
        plVar13[4] = plVar10[4];
        plVar13[5] = lVar11;
        lVar11 = plVar10[7];
        plVar13[6] = plVar10[6];
        plVar13[7] = lVar11;
        lVar11 = plVar10[9];
        plVar13[8] = plVar10[8];
        plVar13[9] = lVar11;
        lVar11 = plVar10[0xb];
        plVar13[10] = plVar10[10];
        plVar13[0xb] = lVar11;
        lVar11 = plVar10[0xd];
        plVar13[0xc] = plVar10[0xc];
        plVar13[0xd] = lVar11;
        lVar11 = plVar10[0xf];
        plVar13[0xe] = plVar10[0xe];
        plVar13[0xf] = lVar11;
        lVar12 = lVar12 + -1;
        param_2 = plVar10 + 0x10;
        plVar6 = plVar13 + 0x10;
      } while (lVar12 != 0);
      lVar12 = plVar10[0x11];
      plVar13[0x10] = plVar10[0x10];
      plVar13[0x11] = lVar12;
      lVar12 = plVar10[0x13];
      plVar13[0x12] = plVar10[0x12];
      plVar13[0x13] = lVar12;
      lVar12 = plVar10[0x15];
      plVar13[0x14] = plVar10[0x14];
      plVar13[0x15] = lVar12;
      lVar12 = plVar10[0x17];
      plVar13[0x16] = plVar10[0x16];
      plVar13[0x17] = lVar12;
      lVar12 = plVar10[0x19];
      plVar13[0x18] = plVar10[0x18];
      plVar13[0x19] = lVar12;
      uVar3 = *(undefined4 *)((longlong)plVar10 + 0xd4);
      lVar12 = plVar10[0x1b];
      uVar4 = *(undefined4 *)((longlong)plVar10 + 0xdc);
      *(int *)(plVar13 + 0x1a) = (int)plVar10[0x1a];
      *(undefined4 *)((longlong)plVar13 + 0xd4) = uVar3;
      *(int *)(plVar13 + 0x1b) = (int)lVar12;
      *(undefined4 *)((longlong)plVar13 + 0xdc) = uVar4;
      uVar3 = *(undefined4 *)((longlong)plVar10 + 0xe4);
      lVar12 = plVar10[0x1d];
      uVar4 = *(undefined4 *)((longlong)plVar10 + 0xec);
      *(int *)(plVar13 + 0x1c) = (int)plVar10[0x1c];
      *(undefined4 *)((longlong)plVar13 + 0xe4) = uVar3;
      *(int *)(plVar13 + 0x1d) = (int)lVar12;
      *(undefined4 *)((longlong)plVar13 + 0xec) = uVar4;
      plVar13[0x1e] = plVar10[0x1e];
      FUN_145698230(param_1 + 0x6e,param_1 + 0x1b,param_1 + 0x5a);
      FUN_1456988a0(param_1 + 0x1b,param_1[0xa5]);
      local_48 = local_48 | *(int *)(param_1[0xa5] + 0x2e4cc) != (int)param_1[0x6e];
      FUN_14561e4a0(param_1[0xa5],param_1 + 0x6e);
      if (local_48 != 0) {
        *(uint *)(param_1 + 0xc5) = *(uint *)(param_1 + 0xc5) | 1;
      }
      *(undefined4 *)(param_1[0xa5] + 0x29f38) = 0;
      return 0;
    }
    lVar12 = param_1[0xa5];
    uVar2 = *(uint *)(lVar12 + 0x29ee0);
    if (uVar2 != 0) {
      lVar11 = lVar12 + 0x29ee8;
      if (*(int *)(lVar12 + 0x29ee4) == 0) {
        lVar11 = 0;
      }
      *param_1 = lVar11;
    }
    *(undefined4 *)(lVar12 + 0x29f38) = 0;
    FUN_1425b0090();
    return (ulonglong)uVar2;
  }
  pcVar8 = "Cannot increase lag_in_frames";
LAB_14569499b:
  *param_1 = (longlong)pcVar8;
  return 8;
}



// FUNCTION 1456949c0 FUN_1456949c0 body=45 status=ok
// SIG undefined FUN_1456949c0(void)

undefined4 FUN_1456949c0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 == (undefined4 *)0x0) {
    return 8;
  }
  uVar2 = FUN_145620090(*(undefined8 *)(param_1 + 0x528));
  *puVar1 = uVar2;
  return 0;
}



// FUNCTION 1456949f0 FUN_1456949f0 body=52 status=ok
// SIG undefined FUN_1456949f0(void)

undefined4 FUN_1456949f0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 == (undefined4 *)0x0) {
    return 8;
  }
  uVar2 = FUN_145620090(*(undefined8 *)(param_1 + 0x528));
  uVar2 = FUN_1455cb820(uVar2);
  *puVar1 = uVar2;
  return 0;
}



// FUNCTION 145694ad0 FUN_145694ad0 body=143 status=ok
// SIG undefined FUN_145694ad0(void)

void FUN_145694ad0(longlong param_1,int *param_2)

{
  int iVar1;
  int local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  iVar1 = *param_2;
  if (9 < *param_2) {
    iVar1 = 9;
  }
  if (iVar1 < -9) {
    iVar1 = -9;
  }
  _local_88 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x2d0) >> 0x20),iVar1);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694b60 FUN_145694b60 body=123 status=ok
// SIG undefined FUN_145694b60(void)

void FUN_145694b60(longlong param_1,undefined4 *param_2)

{
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_88 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x2d0));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694be0 FUN_145694be0 body=123 status=ok
// SIG undefined FUN_145694be0(void)

void FUN_145694be0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _uStack_80 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x2d8) >> 0x20),*param_2);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694c60 FUN_145694c60 body=123 status=ok
// SIG undefined FUN_145694c60(void)

void FUN_145694c60(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _uStack_80 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x2d8));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694ce0 FUN_145694ce0 body=123 status=ok
// SIG undefined FUN_145694ce0(void)

void FUN_145694ce0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_78 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x2e0) >> 0x20),*param_2);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694d60 FUN_145694d60 body=123 status=ok
// SIG undefined FUN_145694d60(void)

void FUN_145694d60(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_78 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x2e0));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694de0 FUN_145694de0 body=123 status=ok
// SIG undefined FUN_145694de0(void)

void FUN_145694de0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _uStack_70 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x2e8) >> 0x20),*param_2);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694e60 FUN_145694e60 body=123 status=ok
// SIG undefined FUN_145694e60(void)

void FUN_145694e60(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _uStack_70 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x2e8));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694ee0 FUN_145694ee0 body=123 status=ok
// SIG undefined FUN_145694ee0(void)

void FUN_145694ee0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_68 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x2f0) >> 0x20),*param_2);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694f60 FUN_145694f60 body=123 status=ok
// SIG undefined FUN_145694f60(void)

void FUN_145694f60(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_68 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x2f0));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145694ff0 FUN_145694ff0 body=123 status=ok
// SIG undefined FUN_145694ff0(void)

void FUN_145694ff0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_58 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x300) >> 0x20),*param_2);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145695070 FUN_145695070 body=123 status=ok
// SIG undefined FUN_145695070(void)

void FUN_145695070(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_58 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x300));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 1456950f0 FUN_1456950f0 body=123 status=ok
// SIG undefined FUN_1456950f0(void)

void FUN_1456950f0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _uStack_50 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x308) >> 0x20),*param_2);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145695170 FUN_145695170 body=123 status=ok
// SIG undefined FUN_145695170(void)

void FUN_145695170(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _uStack_50 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x308));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 1456951f0 FUN_1456951f0 body=123 status=ok
// SIG undefined FUN_1456951f0(void)

void FUN_1456951f0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_48 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x310) >> 0x20),*param_2);
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 145695270 FUN_145695270 body=123 status=ok
// SIG undefined FUN_145695270(void)

void FUN_145695270(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  uStack_40 = *(undefined8 *)(param_1 + 0x318);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _local_48 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x310));
  FUN_145698ce0(local_28,&local_88);
  return;
}



// FUNCTION 1456952f0 FUN_1456952f0 body=123 status=ok
// SIG undefined FUN_1456952f0(void)

void FUN_1456952f0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_88 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_80 = *(undefined8 *)(param_1 + 0x2d8);
  local_78 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2e8);
  local_68 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
  local_58 = *(undefined8 *)(param_1 + 0x300);
  uStack_50 = *(undefined8 *)(param_1 + 0x308);
  local_48 = *(undefined8 *)(param_1 + 0x310);
  local_38 = *(undefined8 *)(param_1 + 800);
  uStack_30 = *(undefined8 *)(param_1 + 0x328);
  local_28 = *(undefined4 *)(param_1 + 0x330);
  uStack_24 = *(undefined4 *)(param_1 + 0x334);
  uStack_20 = *(undefined4 *)(param_1 + 0x338);
  uStack_1c = *(undefined4 *)(param_1 + 0x33c);
  local_18 = *(undefined4 *)(param_1 + 0x340);
  uStack_14 = *(undefined4 *)(param_1 + 0x344);
  uStack_10 = *(undefined4 *)(param_1 + 0x348);
  uStack_c = *(undefined4 *)(param_1 + 0x34c);
  _uStack_40 = CONCAT44(*param_2,(int)*(undefined8 *)(param_1 + 0x318));
  FUN_145698ce0(local_28,&local_88);
  return;
}


