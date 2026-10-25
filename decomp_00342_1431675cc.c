// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431675cc FUN_1431675cc body=347 status=ok
// SIG undefined FUN_1431675cc(void)

void FUN_1431675cc(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d0 [88];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(undefined8 *)
           (param_4 + 0x38 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + 8) * 8);
  local_58 = *(int *)(param_3 + 0x98);
  local_68 = *(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x88);
  uStack_60 = *(undefined8 *)(param_3 + 0x90);
  iVar3 = -1;
  if (0 < (longlong)*(int *)(param_2 + 0x20)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar4 * 8);
      if (*(undefined1 (*) [16])(lVar2 + 0x88) == *(undefined1 (*) [16])(param_3 + 0x88) &&
          *(int *)(lVar2 + 0x98) == local_58) {
        iVar3 = (int)lVar4;
        break;
      }
      lVar4 = lVar4 + 1;
    } while (*(int *)(param_2 + 0x20) != lVar4);
  }
  FUN_1473744bc(uVar1,local_d0,*(longlong *)(param_1 + 0x120),
                (longlong)iVar3 * 0x20 + *(longlong *)(param_2 + 0x28));
  local_78 = param_6;
  local_74 = param_7;
  local_70 = 1;
  local_e0 = 0;
  local_e8 = 0;
  local_f8 = uVar1;
  local_f0 = local_d0;
  FUN_143167728(param_1 + -0x1c8,param_5,param_2,iVar3);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143167728 FUN_143167728 body=1812 status=ok
// SIG undefined FUN_143167728(void)

void FUN_143167728(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  longlong param_5,void *param_6,longlong param_7,uint param_8)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  uint uVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  longlong **local_150;
  longlong *local_148;
  longlong local_140;
  longlong lStack_138;
  undefined8 local_130;
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
  undefined2 local_d7;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar3 = (longlong *)param_1[0x5d];
  local_168 = plVar3[2];
  local_188 = param_2;
  local_170 = param_3;
  if (param_7 == 0) {
    local_178 = 0;
  }
  else {
    lVar11 = plVar3[0x29f];
    lVar8 = *(longlong *)(lVar11 + 0x88);
    local_1a8 = local_1a8 & 0xffffffff00000000;
    FUN_144706208(param_1,lVar8,0x7fffffff,0x400);
    local_1a8 = local_1a8 & 0xffffffff00000000;
    FUN_144706208(param_1,*(undefined8 *)(param_7 + 0x88),0x7fffffff,0x800);
    FUN_14492aa36(param_1);
    uVar4 = *(ulonglong *)(lVar11 + 0xd8);
    local_140 = 0;
    lStack_138 = 0;
    local_130 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d7 = 0xff;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_178 = lVar11;
    local_148 = plVar3;
    _Dst = (void *)FUN_140a6e1ae(plVar3 + 0x287,0x68,0x100);
    memcpy(_Dst,param_6,0x58);
    lVar11 = param_1[0x33];
    if (lVar11 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar11 = param_1[0x33];
    }
    *(int *)(lVar11 + 0x1c0) = *(int *)(lVar11 + 0x1c0) + 1;
    local_1a8 = local_e8;
    local_1a0 = 0x58;
    (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x78))
              (*(longlong **)(lVar11 + 0x28),*(undefined8 *)(lVar8 + 0x20),uVar4 & 0xffffffff,
               *(undefined8 *)(lStack_138 + 0x20));
    lVar11 = param_1[0x33];
    if (lVar11 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar11 = param_1[0x33];
    }
    *(int *)(lVar11 + 0x1c0) = *(int *)(lVar11 + 0x1c0) + 1;
    local_1a8 = (ulonglong)param_8 + *(longlong *)(param_7 + 0xd8);
    local_1a0 = 0x10;
    (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x78))
              (*(longlong **)(lVar11 + 0x28),*(undefined8 *)(lVar8 + 0x20),(int)uVar4 + 0x58,
               *(undefined8 *)(*(longlong *)(param_7 + 0x88) + 0x20));
    local_1a8 = local_1a8 & 0xffffffff00000000;
    FUN_144706208(param_1,lVar8,0x400,0x200);
    FUN_14492aa36(param_1);
    FUN_144902b9c(&local_148);
  }
  lVar11 = local_170;
  if ((char)param_1[0x712] != '\x02') {
    *(undefined2 *)(param_1 + 0x6c0) = 0x101;
    *(undefined1 *)(param_1 + 0x165) = 1;
    *(undefined1 *)(param_1 + 0x712) = 2;
  }
  if (param_1[0x33] == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  local_160 = (longlong)param_4;
  uVar5 = *(undefined8 *)(*(longlong *)(lVar11 + 0x18) + local_160 * 8);
  lVar8 = FUN_14737899e(param_1);
  lVar9 = FUN_147385cbe(local_168,lVar8);
  if ((param_5 == 0) || (lVar12 = *(longlong *)(param_5 + 0x58), lVar12 == 0)) {
    FUN_1473763b4(&local_148,param_1[0x5d],5);
    local_1a8 = CONCAT44(local_1a8._4_4_,2);
    FUN_1473711de(&local_148,0,0x50,0x20);
    FUN_1473706b4(param_1 + 0x6e8,&local_148);
    lVar12 = param_1[0x33];
    if (lVar12 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar12 = param_1[0x33];
    }
    *(int *)(lVar12 + 0x1c0) = *(int *)(lVar12 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar12 + 0x28) + 0xe8))
              (*(longlong **)(lVar12 + 0x28),*(undefined8 *)(lVar11 + 0x98));
    local_158 = param_1;
    local_150 = &local_148;
    uVar6 = FUN_143168efe(uVar5,lVar9,local_188);
    local_188 = CONCAT71(local_188._1_7_,uVar6);
    FUN_147377214(&local_148);
  }
  else {
    local_180 = param_5 + 0x588;
    LOCK();
    bVar15 = *(char *)(param_5 + 0x588) == '\0';
    if (bVar15) {
      *(char *)(param_5 + 0x588) = '\x01';
    }
    UNLOCK();
    if (!bVar15) {
      FUN_1447d2058(local_180);
    }
    FUN_1473706b4(param_1 + 0x6e8,lVar12);
    lVar10 = param_1[0x33];
    if (lVar10 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar10 = param_1[0x33];
    }
    *(int *)(lVar10 + 0x1c0) = *(int *)(lVar10 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xe8))
              (*(longlong **)(lVar10 + 0x28),*(undefined8 *)(lVar11 + 0x98));
    local_148 = param_1;
    local_140 = lVar12;
    uVar6 = FUN_143168efe(uVar5,lVar9,local_188);
    local_188 = CONCAT71(local_188._1_7_,uVar6);
    FUN_147378a64(param_5,param_1);
    LOCK();
    bVar15 = *(char *)(param_5 + 0x588) == '\x01';
    if (bVar15) {
      *(char *)(param_5 + 0x588) = '\0';
    }
    UNLOCK();
    if (!bVar15) {
      FUN_14008cdb0(local_180);
    }
  }
  cVar2 = *(char *)(lVar9 + 0xba);
  if (-1 < cVar2) {
    lVar11 = *(longlong *)(param_1[1] + 0x1280);
    lVar12 = param_1[1] + 0xb00;
    if (lVar11 != 0) {
      lVar12 = lVar11;
    }
    lVar11 = *(longlong *)(lVar12 + 0x248 + (longlong)(int)param_1[2] * 0x280);
    if (lVar11 != 0) {
      uVar5 = *(undefined8 *)(lVar11 + 0x18);
      lVar11 = param_1[0x33];
      if (lVar11 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar11 = param_1[0x33];
      }
      *(int *)(lVar11 + 0x1c0) = *(int *)(lVar11 + 0x1c0) + 1;
      (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x148))
                (*(longlong **)(lVar11 + 0x28),(int)cVar2,uVar5);
    }
  }
  cVar2 = *(char *)(lVar9 + 0xbb);
  if ((-1 < cVar2) && (uVar7 = *(uint *)(lVar8 + 8), uVar7 != 0)) {
    puVar13 = (uint *)(lVar8 + 0x20);
    uVar14 = 0;
    do {
      lVar11 = *(longlong *)(param_1[0x7b3] + (longlong)(int)uVar14 * 8);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x40 + (ulonglong)*(uint *)(plVar3 + 1) * 8);
      }
      if (*(longlong *)(lVar11 + 0xd8) != 0) {
        uVar7 = *puVar13;
        lVar9 = param_1[0x33];
        if (lVar9 == 0) {
          (**(code **)(*param_1 + 8))(param_1);
          lVar9 = param_1[0x33];
        }
        *(int *)(lVar9 + 0x1c0) = *(int *)(lVar9 + 0x1c0) + 1;
        (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x128))
                  (*(longlong **)(lVar9 + 0x28),(uVar7 >> 4 & 0x3f) + (int)cVar2,
                   *(undefined8 *)(lVar11 + 0xd8));
        uVar7 = *(uint *)(lVar8 + 8);
      }
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 6;
    } while (uVar14 < uVar7);
  }
  if ((char)local_188 != '\0') {
    if (param_5 != 0) {
      FUN_147378b94(param_5,param_1);
    }
    FUN_14492aa36(param_1);
    lVar11 = local_178;
    if ((((DAT_14c760bac == 0) || (*(int *)(local_170 + 200) == 0)) ||
        (*(int *)(local_170 + 0xb8) == 0)) ||
       ((lVar8 = (longlong)*(int *)(*(longlong *)(local_170 + 0xb0) + local_160 * 4), lVar8 == -1 ||
        (lVar8 = *(longlong *)(*(longlong *)(local_170 + 0xc0) + lVar8 * 8), lVar8 == 0)))) {
      lVar8 = *(longlong *)(local_170 + 0xa0);
    }
    *(int *)(local_170 + 0x134) =
         *(int *)(*(longlong *)(*(longlong *)(param_1[0x5d] + 0x10) + 0x538) + 0x58) + 1;
    lVar9 = param_1[0x33];
    if (lVar9 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar9 = param_1[0x33];
    }
    *(int *)(lVar9 + 0x1c0) = *(int *)(lVar9 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar9 + 0x48) + 600))(*(longlong **)(lVar9 + 0x48),lVar8);
    if (lVar11 == 0) {
      lVar11 = param_1[0x33];
      if (lVar11 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar11 = param_1[0x33];
      }
      *(int *)(lVar11 + 0x1c0) = *(int *)(lVar11 + 0x1c0) + 1;
      (**(code **)(**(longlong **)(lVar11 + 0x48) + 0x260))(*(longlong **)(lVar11 + 0x48),param_6);
    }
    else {
      uVar5 = *(undefined8 *)(local_168 + 0x4d8);
      lVar8 = param_1[0x33];
      if (lVar8 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar8 = param_1[0x33];
      }
      *(int *)(lVar8 + 0x1c0) = *(int *)(lVar8 + 0x1c0) + 1;
      local_1a8 = *(ulonglong *)(lVar11 + 0xd8);
      local_1a0 = 0;
      uStack_198 = 0;
      (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x1d8))
                (*(longlong **)(lVar8 + 0x48),uVar5,1,
                 *(undefined8 *)(*(longlong *)(lVar11 + 0x88) + 0x20));
    }
    if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
        (lVar11 = param_1[0x5d], *(char *)(lVar11 + 0x48) == '\x01')) &&
       (*(longlong *)(lVar11 + 0x60) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar11 + 0x60) + 0x10);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar11 + 0x60) + 0x14);
      *piVar1 = *piVar1 + 1;
    }
  }
  if ((char)param_1[0x70e] == '\x01') {
    FUN_140039a1a(param_1 + 0x6e8,0);
    *(undefined2 *)(param_1 + 0x70e) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143167e3e FUN_143167e3e body=358 status=ok
// SIG undefined FUN_143167e3e(void)

void FUN_143167e3e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined4 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d0 [104];
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = *(undefined8 *)
           (param_4 + 0x38 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + 8) * 8);
  local_58 = *(int *)(param_3 + 0x98);
  local_68 = *(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x88);
  uStack_60 = *(undefined8 *)(param_3 + 0x90);
  iVar6 = -1;
  if (0 < (longlong)*(int *)(param_2 + 0x20)) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar5 * 8);
      if (*(undefined1 (*) [16])(lVar3 + 0x88) == *(undefined1 (*) [16])(param_3 + 0x88) &&
          *(int *)(lVar3 + 0x98) == local_58) {
        iVar6 = (int)lVar5;
        break;
      }
      lVar5 = lVar5 + 1;
    } while (*(int *)(param_2 + 0x20) != lVar5);
  }
  FUN_1473744bc(uVar2,local_d0,*(longlong *)(param_1 + 0x120),
                (longlong)iVar6 * 0x20 + *(longlong *)(param_2 + 0x28));
  if (param_6 == 0) {
    local_e8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x118);
    if (uVar1 == 0) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
    local_e8 = *(undefined8 *)(param_6 + 0xf8 + (ulonglong)uVar4 * 8);
  }
  local_e0 = param_7;
  local_f8 = uVar2;
  local_f0 = local_d0;
  FUN_143167728(param_1 + -0x1c8,param_5,param_2,iVar6);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143167fa6 FUN_143167fa6 body=1500 status=ok
// SIG undefined FUN_143167fa6(void)

void FUN_143167fa6(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined1 auStack_1b8 [32];
  int *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_139;
  int local_138;
  undefined1 local_134 [7];
  undefined1 local_12d;
  int local_12c;
  undefined1 local_128 [24];
  undefined1 *local_110;
  undefined8 local_108;
  undefined1 local_100 [32];
  undefined1 *local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = *(longlong *)
           (param_2 + 0x38 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + 8) * 8);
  local_e0 = (undefined1 *)0x0;
  local_d8 = 0x400000000;
  uVar4 = (**(code **)(*DAT_14c82b500 + 0x20))();
  cVar3 = FUN_1447e0190();
  uVar19 = 5;
  if (uVar4 < 5) {
    uVar19 = uVar4;
  }
  uVar4 = 1;
  if (cVar3 != '\0') {
    uVar4 = uVar19;
  }
  local_110 = (undefined1 *)0x0;
  local_108 = 0x500000000;
  iVar15 = 0;
  if (uVar4 != 0) {
    uVar19 = 0;
    do {
      uVar13 = local_108;
      lVar21 = (longlong)(int)local_108;
      uVar5 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar5);
      if (local_108._4_4_ < uVar5) {
        FUN_14316a77a(local_128,uVar13 & 0xffffffff);
      }
      puVar7 = local_110;
      if (local_110 == (undefined1 *)0x0) {
        puVar7 = local_128;
      }
      *(uint *)(puVar7 + lVar21 * 4) = uVar19;
      uVar19 = uVar19 + 1;
    } while (uVar4 != uVar19);
    iVar15 = (int)local_108;
  }
  local_170 = *(undefined8 *)(param_1 + -0x1c0);
  local_188 = local_128;
  if (local_110 != (undefined1 *)0x0) {
    local_188 = local_110;
  }
  local_178 = param_5;
  local_158 = param_6;
  iVar14 = (int)param_4;
  local_180 = iVar15;
  local_168 = lVar2;
  local_160 = param_3;
  if (iVar14 != 0) {
    cVar3 = FUN_1447e0190();
    if (iVar14 < 2 || cVar3 != '\x01') {
      uVar19 = 0;
    }
    else {
      uVar19 = iVar14 + 0x200U >> 10;
      if ((int)DAT_14c8335d8 < (int)uVar19) {
        uVar19 = DAT_14c8335d8;
      }
    }
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar17 = (*(undefined **)(lVar21 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar21 + 0x2c8) == 0) +
             uVar19;
    if (DAT_14c8c27ac < 1) {
      memset(&local_d0,0,0x82);
      local_148 = 0;
      local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffff00000000);
      local_12c = 0;
      FUN_140e55932(&local_d0,&local_148,&local_150,&local_12c);
      iVar10 = local_12c;
      local_190 = &local_139;
      local_198 = &local_138;
      FUN_1457b80ec((ulonglong)local_150 & 0xffffffff,local_12c,&local_12d,local_134);
      DAT_14c8c27ac = iVar10;
      if ((0 < local_138) && (DAT_14c8c27ac = iVar10, local_138 <= iVar10)) {
        DAT_14c8c27ac = local_138;
      }
    }
    iVar10 = DAT_14c8c27ac;
    if (iVar17 < DAT_14c8c27ac) {
      iVar10 = iVar17;
    }
    uVar13 = 1;
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    iVar17 = iVar15;
    if (iVar10 < iVar15) {
      iVar17 = iVar10;
    }
    if (iVar15 == 0) {
      iVar17 = iVar10;
    }
    if (iVar17 < 2) {
      if (0 < iVar14) {
        iVar15 = 0;
        do {
          FUN_14316a955(&local_178,&local_188,0,iVar15);
          iVar15 = iVar15 + 1;
        } while (iVar14 != iVar15);
      }
    }
    else {
      iVar15 = iVar17 * 6;
      iVar10 = iVar14 + iVar15 + -1;
      iVar16 = -6;
      param_4 = param_4 & 0xffffffff;
      do {
        if (iVar15 <= iVar14) {
          uVar13 = (longlong)iVar10 / (longlong)iVar15 & 0xffffffff;
          iVar12 = (int)((longlong)iVar10 / (longlong)iVar15);
          param_4 = (longlong)(iVar12 + iVar14 + -1) / (longlong)iVar12;
          iVar6 = (int)param_4;
          param_4 = param_4 & 0xffffffff;
          if (iVar17 <= iVar6) break;
        }
        iVar6 = (int)param_4;
        iVar12 = (int)uVar13;
        iVar10 = iVar10 - iVar17;
        iVar15 = iVar15 - iVar17;
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0);
      iVar17 = iVar17 + -1;
      lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar18 = 6;
      if ((*(byte *)(lVar21 + 0xc60) & 0x37) != 0) {
        uVar18 = 0;
      }
      FUN_144a85b52(&local_148,1);
      puVar1 = (undefined8 *)(lVar21 + 0x308);
      puVar9 = (uint *)*puVar1;
      if (puVar9 != (uint *)0x0) goto LAB_1431682d9;
      while( true ) {
        uVar19 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar19 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar19 | 1;
          __tlregdtor(&LAB_143168583);
        }
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar21 + 0x310);
        *(undefined8 *)(lVar21 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar1 = puVar8;
        FUN_140217a48(puVar1);
        puVar9 = (uint *)*puVar1;
LAB_1431682d9:
        puVar20 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar11 = (uint *)(puVar20 + 0x10);
        uVar19 = puVar9[0x12];
        if (puVar11 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar4 = *puVar9;
          *puVar9 = *puVar9 + uVar19 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar19) != 0xffffffff) break;
          puVar9 = (uint *)*puVar1;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar1 = puVar9;
          puVar20 = (undefined8 *)((longlong)puVar9 + 0x97U & 0xffffffffffffffc0);
          puVar11 = (uint *)(puVar20 + 0x10);
          uVar19 = 0;
          if (puVar11 <= puVar9 + 0x4000) {
            uVar19 = 1;
            goto LAB_14316835c;
          }
        }
      }
      uVar19 = uVar19 + 1;
LAB_14316835c:
      *(uint **)(puVar9 + 0x10) = puVar11;
      puVar9[0x12] = uVar19;
      *puVar20 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar20 + 1) = 0;
      *puVar20 = &PTR_FUN_14a34c460;
      puVar20[3] = L"SetRayTracingBindings";
      *(undefined4 *)(puVar20 + 4) = 0;
      *(undefined4 *)(puVar20 + 5) = 0;
      *(int *)((longlong)puVar20 + 0x2c) = iVar14;
      *(int *)(puVar20 + 6) = iVar12;
      *(int *)((longlong)puVar20 + 0x34) = iVar6;
      puVar20[7] = &local_188;
      puVar20[8] = &local_178;
      puVar20[9] = &local_148;
      *(undefined1 *)(puVar20 + 10) = uVar18;
      puVar20[0xb] = 0;
      puVar20[0xc] = 0;
      *(int *)((longlong)puVar20 + 0x24) = iVar6;
      *(int *)(puVar20 + 0xc) = iVar17;
      FUN_14316c21a(puVar20 + 0xb);
      FUN_14316c1e4(puVar20[0xb],iVar17);
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
      }
      local_150 = puVar20;
      FUN_14316afae(&local_150);
      local_c4 = 0;
      local_d0 = puVar20;
      local_c8 = iVar17;
      cVar3 = FUN_14316b02c(&local_d0,1);
      if (cVar3 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_144,local_148) + 0x20))
                  ((longlong *)CONCAT44(uStack_144,local_148),0xffffffff,0);
      }
      FUN_14316b3d8(&local_d0);
      FUN_144a75412(&local_148);
    }
  }
  *(undefined1 *)(lVar2 + 0x48) = 1;
  if (local_110 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar7 = local_e0;
  if (local_e0 == (undefined1 *)0x0) {
    puVar7 = local_100;
  }
  FUN_144717c65(puVar7,local_d8 & 0xffffffff);
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431685aa FUN_1431685aa body=282 status=ok
// SIG undefined FUN_1431685aa(void)

undefined8 * FUN_1431685aa(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143168583);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1431686c4 FUN_1431686c4 body=1739 status=ok
// SIG undefined FUN_1431686c4(void)

/* WARNING: Removing unreachable block (ram,0x000143168980) */

void FUN_1431686c4(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong **pplVar5;
  LARGE_INTEGER *pLVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_2b8 [32];
  LARGE_INTEGER *local_298;
  uint local_290;
  undefined8 **local_288;
  longlong local_280;
  longlong **local_278;
  longlong **local_270;
  LARGE_INTEGER *local_268;
  undefined4 local_260;
  undefined4 local_250;
  undefined4 local_24c;
  longlong local_248;
  LARGE_INTEGER local_240;
  LARGE_INTEGER **local_238;
  undefined4 local_230;
  LARGE_INTEGER *local_228;
  uint local_220;
  undefined2 **local_218;
  uint local_210;
  longlong *local_208;
  undefined4 local_200;
  longlong *local_1f8;
  undefined4 local_1f0;
  longlong *local_1e8;
  LARGE_INTEGER *local_1e0;
  undefined2 *local_1d8;
  ulonglong uStack_1d0;
  undefined2 *local_1c8;
  LARGE_INTEGER LStack_1c0;
  LARGE_INTEGER local_1b8;
  longlong local_1b0;
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER LStack_1a0;
  DWORD local_198;
  undefined4 uStack_194;
  DWORD DStack_190;
  undefined4 uStack_18c;
  LARGE_INTEGER local_180;
  undefined8 local_178;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  undefined2 *local_80;
  uint local_70;
  undefined4 local_6c;
  undefined2 *local_68 [3];
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  QueryPerformanceCounter(&local_180);
  local_240 = local_180;
  lVar7 = *param_1;
  lVar3 = *(longlong *)(lVar7 + 8);
  local_4c = 3;
  local_6c = 3;
  lVar8 = param_1[1];
  local_248 = param_1[3];
  bVar14 = (int)param_1[7] == 3;
  local_1b0 = param_1[4];
  local_24c = (undefined4)param_1[2];
  local_250 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1c8 = (undefined2 *)0x0;
  LStack_1c0.QuadPart = 0;
  local_1d8 = (undefined2 *)0x0;
  uStack_1d0 = 0;
  local_1b8.QuadPart = 0;
  if (bVar14) {
    if (*(int *)(lVar7 + 0x48) == 0) {
      local_1d8 = &DAT_149dfb77a;
    }
    else {
      local_1d8 = *(undefined2 **)(lVar7 + 0x40);
    }
    uStack_1d0 = (ulonglong)(1 < *(int *)(lVar3 + 0x118));
    FUN_140002266(&local_180,L"%s_%016llx",&DAT_14a34c280,lVar8);
    iVar2 = *(int *)(lVar7 + 0x80);
    *(uint *)(lVar7 + 0x80) = iVar2 + 1U;
    if (*(uint *)(lVar7 + 0x84) < iVar2 + 1U) {
      FUN_147375286(lVar7 + 0x40,iVar2);
    }
    local_88 = local_180;
    lVar12 = (longlong)iVar2 * 0x10;
    *(LARGE_INTEGER *)(lVar7 + 0x40 + lVar12) = local_180;
    local_180.QuadPart = 0;
    *(int *)(lVar7 + 0x48 + lVar12) = (int)local_178;
    *(undefined4 *)(lVar7 + 0x4c + lVar12) = local_178._4_4_;
    LStack_1c0 = local_88;
    if ((int)local_178 == 0) {
      LStack_1c0.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    local_68[0] = &DAT_149dfb77a;
    if (*(int *)(lVar3 + 0xf8) != 0) {
      local_68[0] = *(undefined2 **)(lVar3 + 0xf0);
    }
    uVar11 = 1;
    local_50 = 1;
    if ((int)local_178 == 0) {
      local_88.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    local_70 = 1;
    if (1 < *(int *)(lVar3 + 0x108)) {
      lVar12 = *param_1;
      lVar7 = lVar12 + 0x40;
      FUN_140002266(&local_180,L"%s_%016llx",&DAT_14a34c288,lVar8);
      iVar2 = *(int *)(lVar12 + 0x80);
      *(uint *)(lVar12 + 0x80) = iVar2 + 1U;
      if (*(uint *)(lVar12 + 0x84) < iVar2 + 1U) {
        FUN_147375286(lVar7,iVar2);
      }
      lVar13 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar7 + lVar13);
      ((LARGE_INTEGER *)(lVar7 + lVar13))->QuadPart = (LONGLONG)local_180;
      *(int *)(lVar12 + 0x48 + lVar13) = (int)local_178;
      *(undefined4 *)(lVar12 + 0x4c + lVar13) = local_178._4_4_;
      local_178 = 0;
      local_80 = &DAT_149dfb77a;
      local_1c8 = &DAT_149dfb77a;
      if (*(int *)(puVar1 + 1) != 0) {
        local_1c8 = (undefined2 *)*puVar1;
      }
      local_68[1] = &DAT_149dfb77a;
      if (*(int *)(lVar3 + 0x108) != 0) {
        local_68[1] = *(undefined2 **)(lVar3 + 0x100);
      }
      local_50 = 2;
      if (*(int *)(puVar1 + 1) != 0) {
        local_80 = (undefined2 *)*puVar1;
      }
      local_70 = 2;
      uVar11 = 2;
    }
    local_180.QuadPart = 0;
    if (1 < *(int *)(lVar3 + 0x118)) {
      lVar12 = *param_1;
      lVar7 = lVar12 + 0x40;
      FUN_140002266(&local_180,L"%s_%016llx",&DAT_14a34c290,lVar8);
      iVar2 = *(int *)(lVar12 + 0x80);
      *(uint *)(lVar12 + 0x80) = iVar2 + 1U;
      if (*(uint *)(lVar12 + 0x84) < iVar2 + 1U) {
        FUN_147375286(lVar7,iVar2);
      }
      local_1b8 = local_180;
      lVar8 = (longlong)iVar2 * 0x10;
      ((LARGE_INTEGER *)(lVar7 + lVar8))->QuadPart = (LONGLONG)local_180;
      local_180.QuadPart = 0;
      *(int *)(lVar12 + 0x48 + lVar8) = (int)local_178;
      *(undefined4 *)(lVar12 + 0x4c + lVar8) = local_178._4_4_;
      puVar9 = &DAT_149dfb77a;
      if ((int)local_178 == 0) {
        local_1b8.QuadPart = (LONGLONG)&DAT_149dfb77a;
      }
      puVar10 = &DAT_149dfb77a;
      if (*(int *)(lVar3 + 0x118) != 0) {
        puVar10 = *(undefined2 **)(lVar3 + 0x110);
      }
      local_70 = uVar11 + 1;
      local_68[uVar11] = puVar10;
      if ((int)local_178 != 0) {
        puVar9 = *(undefined2 **)(lVar7 + lVar8);
      }
      (&local_88)[uVar11].QuadPart = (LONGLONG)puVar9;
      uVar11 = local_70;
      local_50 = local_70;
    }
  }
  else {
    local_88.QuadPart = (LONGLONG)&DAT_149dfb77a;
    local_68[0] = &DAT_149dfb77a;
    if (*(int *)(lVar3 + 0xf8) != 0) {
      local_68[0] = *(undefined2 **)(lVar3 + 0xf0);
    }
    local_50 = 1;
    if (*(int *)(lVar7 + 0x48) != 0) {
      local_88 = *(LARGE_INTEGER *)(lVar7 + 0x40);
    }
    local_70 = 1;
    uVar11 = 1;
  }
  local_138 = 0;
  local_130 = 0x300000000;
  local_f8 = 0;
  local_f0 = 0x300000000;
  local_b8 = 0;
  local_b0 = 0x300000000;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_298 = &local_88;
  local_290 = uVar11;
  FUN_14737532e(&local_180,*(undefined8 *)(lVar3 + 0xb0),*(undefined4 *)(lVar3 + 0xb8),local_68);
  local_238 = &local_1e0;
  local_268 = &local_1a8;
  local_1a8.QuadPart = 0;
  LStack_1a0 = (LARGE_INTEGER)((ulonglong)(uint)LStack_1a0._4_4_ << 0x20);
  local_270 = &local_1f8;
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  local_208 = &local_1b0;
  local_278 = &local_208;
  local_200 = 1;
  local_218 = &local_1d8;
  local_288 = &local_218;
  local_210 = (uint)bVar14;
  local_230 = 1;
  local_260 = 0;
  local_280 = local_248;
  local_290 = local_250;
  local_298 = (LARGE_INTEGER *)CONCAT44(local_298._4_4_,local_24c);
  local_228 = &local_88;
  local_220 = uVar11;
  local_1e0 = &local_180;
  FUN_14316491e(&local_1e8,param_1[6]);
  pplVar5 = (longlong **)(*param_1 + 0x10);
  if (pplVar5 != &local_1e8) {
    plVar4 = *pplVar5;
    *pplVar5 = local_1e8;
    local_1e8 = (longlong *)0x0;
    if (plVar4 == (longlong *)0x0) goto LAB_143168c6b;
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_1e8 != (longlong *)0x0) {
    (**(code **)(*local_1e8 + 0x10))();
  }
LAB_143168c6b:
  lVar7 = *param_1;
  if (*(longlong *)(lVar7 + 0x10) != 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined4 *)(lVar7 + 0x28) = 0;
    lVar7 = *param_1;
  }
  if (*(int *)(lVar7 + 0x48) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(lVar7 + 0x40);
  }
  local_1f8 = (longlong *)0x0;
  (**(code **)**(undefined8 **)(lVar7 + 0x10))
            (*(undefined8 **)(lVar7 + 0x10),&DAT_14a34bf98,&local_1f8);
  pLVar6 = (LARGE_INTEGER *)(**(code **)(*local_1f8 + 0x18))(local_1f8,puVar9);
  local_1a8 = (LARGE_INTEGER)pLVar6->QuadPart;
  LStack_1a0 = pLVar6[1];
  local_198 = pLVar6[2].s.LowPart;
  uStack_194 = *(undefined4 *)((longlong)pLVar6 + 0x14);
  DStack_190 = pLVar6[3].s.LowPart;
  uStack_18c = *(undefined4 *)((longlong)pLVar6 + 0x1c);
  if (local_1f8 != (longlong *)0x0) {
    (**(code **)(*local_1f8 + 0x10))();
  }
  lVar7 = *param_1;
  *(DWORD *)(lVar7 + 0x98) = local_198;
  *(undefined4 *)(lVar7 + 0x9c) = uStack_194;
  *(DWORD *)(lVar7 + 0xa0) = DStack_190;
  *(undefined4 *)(lVar7 + 0xa4) = uStack_18c;
  ((LARGE_INTEGER *)(lVar7 + 0x88))->QuadPart = (LONGLONG)local_1a8;
  *(LARGE_INTEGER *)(lVar7 + 0x90) = LStack_1a0;
  QueryPerformanceCounter(&local_1a8);
  lVar7 = local_1a8.QuadPart - (longlong)local_240;
  auVar15._8_4_ = (int)((ulonglong)lVar7 >> 0x20);
  auVar15._0_8_ = lVar7;
  auVar15._12_4_ = 0x45300000;
  *(float *)(*param_1 + 0xa8) =
       (float)((((double)CONCAT44(0x43300000,(int)lVar7) - 4503599627370496.0) +
               (auVar15._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
  FUN_1473752f6(&local_180);
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143168d90 FUN_143168d90 body=248 status=ok
// SIG undefined FUN_143168d90(void)

void FUN_143168d90(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143168ea4 FUN_143168ea4 body=90 status=ok
// SIG undefined FUN_143168ea4(void)

void FUN_143168ea4(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a34c2f0;
  lVar2 = 0x38;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_14737719e(lVar1);
      FUN_1400020a8(lVar1);
    }
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x78);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 143168efe FUN_143168efe body=2290 status=ok
// SIG undefined FUN_143168efe(void)

ulonglong FUN_143168efe(longlong param_1,longlong param_2,longlong **param_3,longlong *param_4)

{
  double dVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  double dVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  uint *puVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_b18 [32];
  undefined4 local_af8;
  undefined4 local_af0;
  longlong local_ae8;
  longlong local_ae0;
  longlong *local_ad8;
  longlong *local_ad0;
  longlong **local_ac8;
  ulonglong local_ac0;
  longlong *local_ab8;
  uint local_ab0;
  byte local_aac;
  byte local_aab;
  undefined8 auStack_aa8 [16];
  undefined8 local_a28 [64];
  undefined1 local_828 [128];
  undefined8 local_7a8 [32];
  undefined4 local_6a8 [64];
  undefined1 local_5a8 [256];
  undefined4 local_4a8 [64];
  undefined1 local_3a8 [768];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b18;
  plVar18 = param_3[0xc0];
  uVar10 = *(uint *)(param_3 + 0xc1);
  lVar21 = param_1 + 0xb0;
  if (param_1 == 0) {
    lVar21 = 0;
  }
  local_ab0 = *(uint *)(*(longlong *)(*param_4 + 0x2e8) + 8);
  local_aac = *(byte *)(lVar21 + 0x10) >> 1 & 1;
  local_aab = *(byte *)(lVar21 + 0x10) >> 2 & 1;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x6000000000;
  local_90 = (undefined1 *)0x0;
  local_88 = 0x100000000;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_ae8 = param_1;
  local_ae0 = param_2;
  local_ab8 = param_4;
  if ((ulonglong)uVar10 != 0) {
    uVar22 = 0;
    do {
      lVar21 = *plVar18;
      if (lVar21 != 0) {
        switch(*(undefined1 *)((longlong)plVar18 + 10)) {
        case 0:
          FUN_143169820(&local_ab8,lVar21,uVar22 & 0xffffffff);
          break;
        case 1:
          FUN_143169990(&local_ab8,lVar21,uVar22 & 0xffffffff);
          break;
        case 2:
          FUN_143169a98(&local_ab8,lVar21,uVar22 & 0xffffffff);
          break;
        case 3:
          if (local_aab == 0) {
            lVar21 = *(longlong *)(lVar21 + 0x20 + (ulonglong)local_ab0 * 8);
            uVar4 = *(undefined4 *)(lVar21 + 0x6c);
            local_7a8[uVar22 & 0xff] = *(undefined8 *)(lVar21 + 0x60);
            local_4a8[uVar22 & 0xff] = uVar4;
            uStack_68 = uStack_68 | 1L << ((byte)uVar22 & 0x3f);
          }
        }
      }
      uVar22 = uVar22 + 1;
      plVar18 = plVar18 + 2;
    } while (uVar10 != uVar22);
  }
  lVar21 = local_ae8;
  uVar22 = 0;
  do {
    if (param_3[uVar22] != (longlong *)0x0) {
      FUN_143169820(&local_ab8,param_3[uVar22],uVar22 & 0xffffffff);
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x40);
  uVar22 = 0;
  do {
    if (param_3[uVar22 + 0x40] != (longlong *)0x0) {
      FUN_143169990(&local_ab8,param_3[uVar22 + 0x40],uVar22 & 0xffffffff);
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x40);
  lVar16 = 0;
  do {
    if (param_3[lVar16 + 0x80] != (longlong *)0x0) {
      auStack_aa8[lVar16] = *(undefined8 *)(param_3[lVar16 + 0x80][(ulonglong)local_ab0 + 8] + 0xd8)
      ;
      uStack_78 = uStack_78 | 1L << ((byte)lVar16 & 0x3f);
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x10);
  lVar16 = 0;
  do {
    if ((param_3[lVar16 + 0x90] != (longlong *)0x0) && ((local_aab & 1) == 0)) {
      lVar17 = param_3[lVar16 + 0x90][(ulonglong)local_ab0 + 4];
      uVar4 = *(undefined4 *)(lVar17 + 0x6c);
      local_7a8[lVar16] = *(undefined8 *)(lVar17 + 0x60);
      local_4a8[lVar16] = uVar4;
      uStack_68 = uStack_68 | 1L << ((byte)lVar16 & 0x3f);
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x20);
  uVar22 = 0;
  local_ad0 = param_4;
  do {
    if (param_3[uVar22 + 0xb0] != (longlong *)0x0) {
      FUN_143169a98(&local_ab8,param_3[uVar22 + 0xb0],uVar22 & 0xffffffff);
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x10);
  uVar10 = *(uint *)(lVar21 + 0x10);
  local_ac8 = param_3;
  if (uVar10 != 0) {
    dVar8 = (double)(float)DAT_14c866ff8;
    param_3 = &local_ab8;
    do {
      local_ac0 = (ulonglong)uVar10;
      uVar7 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      uVar22 = (ulonglong)uVar7;
      local_ad8 = local_ac8[uVar22 + 0x80];
      lVar16 = *(longlong *)(lVar21 + 0x58);
      lVar17 = local_ad8[2];
      iVar11 = (int)local_ad8[3];
      if ((lVar16 != 0) && (uVar12 = (ulonglong)*(uint *)(lVar16 + uVar22 * 4), uVar12 != 0)) {
        puVar19 = (uint *)(lVar16 + uVar12 * 4);
        uVar10 = *puVar19;
        do {
          puVar19 = puVar19 + 1;
          uVar12 = (ulonglong)(uVar10 >> 8) & 0xffff;
          if ((int)uVar12 < iVar11) {
            lVar21 = *(longlong *)(lVar17 + uVar12 * 8);
            dVar1 = *(double *)(lVar21 + 0x58);
            if ((dVar1 != dVar8) || (NAN(dVar1) || NAN(dVar8))) {
              *(double *)(lVar21 + 0x58) = dVar8;
            }
            FUN_143169820(param_3);
          }
          uVar10 = *puVar19;
        } while (uVar10 >> 0x18 == uVar7);
        lVar17 = local_ad8[2];
        iVar11 = (int)local_ad8[3];
        lVar21 = local_ae8;
      }
      lVar16 = *(longlong *)(lVar21 + 0x18);
      if ((lVar16 != 0) && (uVar12 = (ulonglong)*(uint *)(lVar16 + uVar22 * 4), uVar12 != 0)) {
        puVar19 = (uint *)(lVar16 + uVar12 * 4);
        uVar10 = *puVar19;
        do {
          puVar19 = puVar19 + 1;
          uVar12 = (ulonglong)(uVar10 >> 8) & 0xffff;
          if ((int)uVar12 < iVar11) {
            FUN_143169990(param_3,*(undefined8 *)(lVar17 + uVar12 * 8));
          }
          uVar10 = *puVar19;
        } while (uVar10 >> 0x18 == uVar7);
        lVar17 = local_ad8[2];
        iVar11 = (int)local_ad8[3];
        lVar21 = local_ae8;
      }
      lVar16 = *(longlong *)(lVar21 + 0x68);
      if ((lVar16 != 0) && (uVar12 = (ulonglong)*(uint *)(lVar16 + uVar22 * 4), uVar12 != 0)) {
        puVar19 = (uint *)(lVar16 + uVar12 * 4);
        uVar10 = *puVar19;
        do {
          puVar19 = puVar19 + 1;
          uVar15 = uVar10 >> 8 & 0xffff;
          if ((int)uVar15 < iVar11) {
            lVar21 = *(longlong *)(lVar17 + (ulonglong)uVar15 * 8);
            if ((lVar21 == 0) ||
               (lVar21 = *(longlong *)(lVar21 + 0x30 + (ulonglong)local_ab0 * 8), lVar21 == 0)) {
              lVar21 = 0;
            }
            else {
              lVar21 = *(longlong *)(lVar21 + 0x78);
            }
            if (local_aac == 1) {
              uVar12 = (ulonglong)(uVar10 & 0xff);
            }
            else {
              uVar4 = *(undefined4 *)(lVar21 + 0x44);
              uVar12 = (ulonglong)(uVar10 & 0xff);
              local_a28[uVar12] = *(undefined8 *)(lVar21 + 0x38);
              local_6a8[uVar12] = uVar4;
            }
            uVar9 = local_a0;
            local_80 = local_80 | 1L << ((byte)uVar12 & 0x3f);
            uVar20 = *(undefined8 *)(lVar21 + 0x10);
            lVar16 = (longlong)(int)local_a0;
            uVar10 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,uVar10);
            if (local_a0._4_4_ < uVar10) {
              FUN_147378c1c(local_3a8,uVar9 & 0xffffffff);
            }
            puVar13 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar13 = local_3a8;
            }
            *(undefined8 *)(puVar13 + lVar16 * 8) = uVar20;
            FUN_1446ff3a6(*local_ab8,lVar21,0x40);
          }
          uVar10 = *puVar19;
        } while (uVar10 >> 0x18 == uVar7);
        lVar17 = local_ad8[2];
        iVar11 = (int)local_ad8[3];
        lVar21 = local_ae8;
      }
      lVar16 = *(longlong *)(lVar21 + 0x28);
      if ((lVar16 != 0) && (uVar12 = (ulonglong)*(uint *)(lVar16 + uVar22 * 4), uVar12 != 0)) {
        puVar19 = (uint *)(lVar16 + uVar12 * 4);
        uVar10 = *puVar19;
        do {
          puVar19 = puVar19 + 1;
          uVar15 = uVar10 >> 8 & 0xffff;
          if ((int)uVar15 < iVar11) {
            lVar16 = *(longlong *)(lVar17 + (ulonglong)uVar15 * 8);
            if (lVar16 == 0) {
              lVar16 = 0;
            }
            else {
              lVar16 = *(longlong *)(lVar16 + 0x20 + (ulonglong)local_ab0 * 8);
            }
            if ((local_aab & 1) == 0) {
              uVar4 = *(undefined4 *)(lVar16 + 0x6c);
              local_7a8[uVar10 & 0xff] = *(undefined8 *)(lVar16 + 0x60);
              local_4a8[uVar10 & 0xff] = uVar4;
              uStack_68 = uStack_68 | 1L << ((byte)uVar10 & 0x3f);
            }
          }
          uVar10 = *puVar19;
        } while (uVar10 >> 0x18 == uVar7);
        lVar17 = local_ad8[2];
        iVar11 = (int)local_ad8[3];
      }
      lVar21 = *(longlong *)(lVar21 + 0x38);
      if ((lVar21 != 0) && (uVar22 = (ulonglong)*(uint *)(lVar21 + uVar22 * 4), uVar22 != 0)) {
        puVar19 = (uint *)(lVar21 + uVar22 * 4);
        uVar10 = *puVar19;
        do {
          puVar19 = puVar19 + 1;
          uVar22 = (ulonglong)(uVar10 >> 8) & 0xffff;
          if ((int)uVar22 < iVar11) {
            FUN_143169a98(param_3,*(undefined8 *)(lVar17 + uVar22 * 8));
          }
          uVar10 = *puVar19;
        } while (uVar10 >> 0x18 == uVar7);
      }
      uVar10 = (uint)local_ac0 - 1 & (uint)local_ac0;
      lVar21 = local_ae8;
    } while (uVar10 != 0);
  }
  plVar18 = local_ad0;
  lVar16 = local_ad0[1];
  if (*(char *)(lVar21 + 0xc2) != '\0') {
    uVar22 = 0;
    local_af0 = 0;
    local_af8 = 0;
    iVar11 = FUN_14737127a(lVar16,local_6a8,local_a28);
    if (iVar11 < 0) goto LAB_143169613;
    iVar5 = *(int *)(lVar16 + 0x2c);
    lVar17 = *(longlong *)(lVar16 + 0x38);
    param_3 = (longlong **)(ulonglong)*(byte *)(local_ae0 + 0x25);
    plVar6 = (longlong *)*plVar18;
    lVar14 = plVar6[0x33];
    if (lVar14 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      lVar14 = plVar6[0x33];
    }
    *(int *)(lVar14 + 0x1c0) = *(int *)(lVar14 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar14 + 0x28) + 0xf8))
              (*(longlong **)(lVar14 + 0x28),param_3,(ulonglong)(uint)(iVar11 * iVar5) + lVar17);
  }
  if (*(char *)(lVar21 + 0xc4) != '\0') {
    uVar22 = 0;
    local_af0 = 0;
    local_af8 = 0;
    iVar11 = FUN_14737127a(lVar16,local_5a8,local_828);
    if (iVar11 < 0) goto LAB_143169613;
    iVar5 = *(int *)(lVar16 + 0x2c);
    lVar17 = *(longlong *)(lVar16 + 0x38);
    param_3 = (longlong **)(ulonglong)*(byte *)(local_ae0 + 0x29);
    plVar6 = (longlong *)*plVar18;
    lVar14 = plVar6[0x33];
    if (lVar14 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      lVar14 = plVar6[0x33];
    }
    *(int *)(lVar14 + 0x1c0) = *(int *)(lVar14 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar14 + 0x28) + 0xf8))
              (*(longlong **)(lVar14 + 0x28),param_3,(ulonglong)(uint)(iVar11 * iVar5) + lVar17);
  }
  if (*(char *)(lVar21 + 0xc3) != '\0') {
    bVar2 = *(byte *)(local_ae0 + 0x27);
    uVar22 = 0;
    do {
      if ((uStack_78 >> (uVar22 & 0x3f) & 1) == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = auStack_aa8[uVar22];
      }
      plVar6 = (longlong *)*plVar18;
      lVar21 = plVar6[0x33];
      if (lVar21 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        lVar21 = plVar6[0x33];
      }
      *(int *)(lVar21 + 0x1c0) = *(int *)(lVar21 + 0x1c0) + 1;
      (**(code **)(**(longlong **)(lVar21 + 0x28) + 0x128))
                (*(longlong **)(lVar21 + 0x28),(uint)bVar2 + (int)uVar22,uVar20);
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(byte *)(local_ae8 + 0xc3));
  }
  if (*(char *)(local_ae8 + 0xc1) != '\0') {
    local_af0 = 0;
    local_af8 = 1;
    iVar11 = FUN_14737127a(lVar16,local_4a8,local_7a8);
    if (iVar11 < 0) {
      uVar22 = 0;
      goto LAB_143169613;
    }
    iVar5 = *(int *)(lVar16 + 0x9c);
    lVar21 = *(longlong *)(lVar16 + 0xa8);
    uVar3 = *(undefined1 *)(local_ae0 + 0x28);
    plVar6 = (longlong *)*plVar18;
    lVar16 = plVar6[0x33];
    if (lVar16 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      lVar16 = plVar6[0x33];
    }
    *(int *)(lVar16 + 0x1c0) = *(int *)(lVar16 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar16 + 0x28) + 0xf8))
              (*(longlong **)(lVar16 + 0x28),uVar3,(ulonglong)(uint)(iVar11 * iVar5) + lVar21);
  }
  puVar13 = local_a8;
  if (local_a8 == (undefined1 *)0x0) {
    puVar13 = local_3a8;
  }
  lVar21 = (longlong)(int)local_a0;
  if (lVar21 != 0) {
    lVar16 = 0;
    do {
      plVar6 = (longlong *)*plVar18;
      uVar20 = *(undefined8 *)(*(longlong *)(puVar13 + lVar16) + 0x58);
      lVar17 = plVar6[0x33];
      if (lVar17 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        lVar17 = plVar6[0x33];
      }
      FUN_1447093fc(lVar17,uVar20);
      lVar16 = lVar16 + 8;
    } while (lVar21 * 8 != lVar16);
  }
  puVar13 = local_90;
  if (local_90 == (undefined1 *)0x0) {
    puVar13 = local_98;
  }
  lVar21 = (longlong)(int)local_88;
  uVar22 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  if (lVar21 != 0) {
    lVar16 = 0;
    do {
      FUN_1456b1ee6(*(undefined8 *)(puVar13 + lVar16),*plVar18);
      lVar16 = lVar16 + 8;
    } while (lVar21 * 8 != lVar16);
  }
LAB_143169613:
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b18) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 1431697f1 FUN_1431697f1 body=46 status=ok
// SIG undefined FUN_1431697f1(void)

void FUN_1431697f1(void)

{
  longlong lVar1;
  
  lVar1 = 0xc0;
  do {
    if (*(longlong *)(lVar1 + 0x14ca76d00) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143169820 FUN_143169820 body=368 status=ok
// SIG undefined FUN_143169820(void)

void FUN_143169820(undefined8 *param_1,longlong *param_2,byte param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  if (param_2 == (longlong *)0x0) {
LAB_143169956:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = (**(code **)(*param_2 + 8))(param_2);
    if ((*(byte *)(lVar5 + 2) & 4) != 0) {
      param_2 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar5 = (**(code **)(*param_2 + 0x30))(param_2);
    if (lVar5 == 0) goto LAB_143169956;
    lVar5 = *(longlong *)(lVar5 + 0x128 + (ulonglong)uVar1 * 8);
  }
  lVar5 = *(longlong *)(lVar5 + 0x168);
  if (lVar5 != 0) goto LAB_1431698c6;
  plVar7 = *(longlong **)(DAT_14ca94dc8 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_14316995d:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
    if ((*(byte *)(lVar5 + 2) & 4) != 0) {
      plVar7 = (longlong *)**(longlong **)(plVar7[0x48] + 0xa0);
    }
    lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7);
    if (lVar5 == 0) goto LAB_14316995d;
    lVar5 = *(longlong *)(lVar5 + 0x128 + (ulonglong)uVar1 * 8);
  }
  lVar5 = *(longlong *)(lVar5 + 0x168);
LAB_1431698c6:
  if (*(char *)((longlong)param_1 + 0xc) == '\0') {
    uVar2 = *(undefined4 *)(lVar5 + 0x44);
    param_1[(ulonglong)param_3 + 0x12] = *(undefined8 *)(lVar5 + 0x38);
    *(undefined4 *)((longlong)param_1 + (ulonglong)param_3 * 4 + 0x410) = uVar2;
    param_1[0x147] = param_1[0x147] | 1L << (param_3 & 0x3f);
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  iVar3 = *(int *)(param_1 + 0x143);
  *(uint *)(param_1 + 0x143) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xa1c) < iVar3 + 1U) {
    FUN_147378c1c(param_1 + 0xe2,iVar3);
  }
  puVar6 = param_1 + 0xe2;
  if ((undefined8 *)param_1[0x142] != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x142];
  }
  puVar6[iVar3] = uVar4;
  FUN_1446ff3a6(*(undefined8 *)*param_1,lVar5,0x40);
  return;
}



// FUNCTION 143169990 FUN_143169990 body=264 status=ok
// SIG undefined FUN_143169990(void)

void FUN_143169990(undefined8 *param_1,longlong param_2,byte param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 200 + (ulonglong)*(uint *)(param_1 + 1) * 8);
  }
  lVar6 = lVar4 + 0x28;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\0') {
    uVar1 = *(undefined4 *)(lVar6 + 0x44);
    param_1[(ulonglong)param_3 + 0x12] = *(undefined8 *)(lVar6 + 0x38);
    *(undefined4 *)((longlong)param_1 + (ulonglong)param_3 * 4 + 0x410) = uVar1;
    param_1[0x147] = param_1[0x147] | 1L << (param_3 & 0x3f);
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  iVar2 = *(int *)(param_1 + 0x143);
  *(uint *)(param_1 + 0x143) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xa1c) < iVar2 + 1U) {
    FUN_147378c1c(param_1 + 0xe2,iVar2);
  }
  puVar5 = param_1 + 0xe2;
  if ((undefined8 *)param_1[0x142] != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x142];
  }
  puVar5[iVar2] = uVar3;
  FUN_1446ff3a6(*(undefined8 *)*param_1,lVar6,0x40);
  lVar4 = *(longlong *)(lVar6 + 0x90);
  if (lVar4 != 0) {
    iVar2 = *(int *)(param_1 + 0x146);
    *(uint *)(param_1 + 0x146) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa34) < iVar2 + 1U) {
      FUN_147378d22(param_1 + 0x144,iVar2);
    }
    puVar5 = param_1 + 0x144;
    if ((undefined8 *)param_1[0x145] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0x145];
    }
    puVar5[iVar2] = lVar4;
  }
  return;
}



// FUNCTION 143169a98 FUN_143169a98 body=190 status=ok
// SIG undefined FUN_143169a98(void)

void FUN_143169a98(undefined8 *param_1,longlong param_2,byte param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 200 + (ulonglong)*(uint *)(param_1 + 1) * 8);
  }
  lVar6 = lVar4 + 0x28;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\0') {
    uVar1 = *(undefined4 *)(lVar6 + 0x44);
    param_1[(ulonglong)param_3 + 0x52] = *(undefined8 *)(lVar6 + 0x38);
    *(undefined4 *)((longlong)param_1 + (ulonglong)param_3 * 4 + 0x510) = uVar1;
    param_1[0x149] = param_1[0x149] | 1L << (param_3 & 0x3f);
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  iVar2 = *(int *)(param_1 + 0x143);
  *(uint *)(param_1 + 0x143) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xa1c) < iVar2 + 1U) {
    FUN_147378c1c(param_1 + 0xe2,iVar2);
  }
  puVar5 = param_1 + 0xe2;
  if ((undefined8 *)param_1[0x142] != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x142];
  }
  puVar5[iVar2] = uVar3;
  FUN_144719d5c(*(undefined8 *)*param_1,lVar6,8);
  return;
}



// FUNCTION 143169b56 FUN_143169b56 body=390 status=ok
// SIG undefined FUN_143169b56(void)

undefined8 FUN_143169b56(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  void *pvVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar6 = uVar3 - iVar2;
    iVar8 = iVar6;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar12 = 0;
      iVar7 = (int)param_1[6];
      uVar15 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar7 * 0x158);
        if (iVar7 < iVar6) {
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          pvVar11 = (void *)((longlong)(int)(uVar15 - 1) * 0x158 + lVar5 + 0x158);
          uVar14 = uVar15;
          do {
            uVar15 = uVar14 - 1;
            uVar13 = uVar14 + 0x1e;
            if (-1 < (int)uVar15) {
              uVar13 = uVar15;
            }
            pvVar11 = (void *)((longlong)pvVar11 + -0x158);
            uVar14 = uVar15;
          } while ((*(uint *)((longlong)plVar9 + (longlong)((int)uVar13 >> 5) * 4) >>
                    (uVar15 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar7 * 0x158 + lVar5),pvVar11,0x158);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar10 = iVar7 + 0x1f;
          if (-1 < iVar7) {
            iVar10 = iVar7;
          }
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar10 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
          uVar12 = 1;
        }
        iVar7 = iVar4;
      } while (iVar4 != -1);
      iVar7 = (int)param_1[1] - uVar3;
      if (iVar7 != 0) {
        pvVar11 = (void *)((longlong)iVar6 * 0x158 + *param_1);
        memmove(pvVar11,(void *)((longlong)iVar2 * 0x158 + (longlong)pvVar11),
                (longlong)iVar7 * 0x158);
        iVar8 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    FUN_144a6134a(param_1 + 2,iVar6,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140039e66(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 143169cdc FUN_143169cdc body=168 status=ok
// SIG undefined FUN_143169cdc(void)

void FUN_143169cdc(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_2 + 0x17c);
  if (uVar3 != 0) {
    uVar6 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                        (*(longlong **)(param_2 + 0x40),uVar6);
      lVar5 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar5 = param_1 + 0x18;
      }
      FUN_1447584e6(uVar4,*(undefined8 *)(lVar5 + (ulonglong)uVar6 * 8));
      bVar2 = (byte)uVar6 & 0x1f;
      uVar3 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar3;
      if (uVar3 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar3 != 0);
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x58);
  }
  FUN_14476c499(lVar5,*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143169d9e FUN_143169d9e body=29 status=ok
// SIG undefined FUN_143169d9e(void)

void FUN_143169d9e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143169dbc FUN_143169dbc body=29 status=ok
// SIG undefined FUN_143169dbc(void)

undefined8 FUN_143169dbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143169dec FUN_143169dec body=344 status=ok
// SIG undefined FUN_143169dec(void)

void FUN_143169dec(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  QueryPerformanceCounter(&local_30);
  lVar2 = local_30.QuadPart - *param_1;
  auVar5._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
  auVar5._0_8_ = lVar2;
  auVar5._12_4_ = 0x45300000;
  if (*(float *)(param_1 + 1) <=
      (float)((((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0) +
              (auVar5._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca76ddc) && (FUN_144b3d300(&DAT_14ca76ddc), DAT_14ca76ddc == -1)) {
      _Init_thread_footer(&DAT_14ca76ddc);
    }
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)param_1[2] + (longlong)iVar1 * 8);
    switch(*(undefined1 *)(lVar2 + 0x9c)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 10:
    case 0xb:
      uVar4 = *(undefined4 *)(lVar2 + 0xa8);
      uVar3 = *(undefined8 *)(lVar2 + 0xa0);
      break;
    case 5:
      uVar4 = *(undefined4 *)(lVar2 + 0xb0);
      uVar3 = *(undefined8 *)(lVar2 + 0xa8);
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      uVar4 = *(undefined4 *)(lVar2 + 0xb8);
      uVar3 = *(undefined8 *)(lVar2 + 0xb0);
      break;
    default:
      goto switchD_143169e71_default;
    }
    local_28 = 0;
    local_30.QuadPart = 0;
    FUN_142b7740d(uVar3,uVar4);
  }
switchD_143169e71_default:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143169f78 FUN_143169f78 body=12 status=ok
// SIG undefined FUN_143169f78(void)

void FUN_143169f78(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143169f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143169f84 FUN_143169f84 body=29 status=ok
// SIG undefined FUN_143169f84(void)

undefined8 FUN_143169f84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143169fd0 FUN_143169fd0 body=12 status=ok
// SIG undefined FUN_143169fd0(void)

void FUN_143169fd0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143169fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143169fdc FUN_143169fdc body=29 status=ok
// SIG undefined FUN_143169fdc(void)

undefined8 FUN_143169fdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143169ffa FUN_143169ffa body=879 status=ok
// SIG undefined FUN_143169ffa(void)

void FUN_143169ffa(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar16 = *(uint *)(param_2 + 0x17c);
  if (uVar16 != 0) {
    iVar15 = 0;
    if (uVar16 != 0) {
      for (; (uVar16 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
      }
    }
    do {
      plVar7 = (longlong *)
               (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                         (*(longlong **)(param_2 + 0x40),iVar15);
      uVar10 = plVar7[0x776];
      if (uVar10 == 0) {
        puVar1 = (ulonglong *)(plVar7 + 0x776);
        (**(code **)(*DAT_14ca83900 + 0x290))(DAT_14ca83900,&local_50,1);
        uVar10 = local_50;
        if (puVar1 == &local_50) {
LAB_14316a0fa:
          uVar10 = local_50;
          if (local_50 != 0) {
            LOCK();
            puVar3 = (uint *)(local_50 + 8);
            uVar6 = *puVar3;
            *puVar3 = *puVar3 - 1;
            UNLOCK();
            if ((uVar6 & 0x3fffffff) == 1) {
              puVar3 = (uint *)(local_50 + 8);
              LOCK();
              uVar6 = *puVar3;
              *puVar3 = *puVar3 | 0x40000000;
              UNLOCK();
              if ((uVar6 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(local_50 + 0xd);
                plVar8 = (longlong *)FUN_14001cc68(0x10,8);
                plVar8[1] = uVar10;
                plVar12 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar8 = (longlong)plVar12;
                    LOCK();
                    bVar19 = plVar12 != DAT_14ca843c0;
                    plVar9 = plVar8;
                    if (bVar19) {
                      plVar12 = DAT_14ca843c0;
                      plVar9 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar9;
                    UNLOCK();
                  } while (bVar19);
                }
                else {
                  do {
                    *plVar8 = (longlong)plVar9;
                    LOCK();
                    bVar19 = plVar9 != DAT_14ca843c8;
                    plVar12 = plVar8;
                    if (bVar19) {
                      plVar9 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar19);
                }
              }
            }
          }
          uVar10 = *puVar1;
        }
        else {
          uVar4 = *puVar1;
          *puVar1 = local_50;
          local_50 = 0;
          if (uVar4 != 0) {
            LOCK();
            puVar3 = (uint *)(uVar4 + 8);
            uVar6 = *puVar3;
            *puVar3 = *puVar3 - 1;
            UNLOCK();
            if ((uVar6 & 0x3fffffff) == 1) {
              puVar3 = (uint *)(uVar4 + 8);
              LOCK();
              uVar6 = *puVar3;
              *puVar3 = *puVar3 | 0x40000000;
              UNLOCK();
              if ((uVar6 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(uVar4 + 0xd);
                plVar8 = (longlong *)FUN_14001cc68(0x10,8);
                plVar8[1] = uVar4;
                plVar12 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar8 = (longlong)plVar12;
                    LOCK();
                    bVar19 = plVar12 != DAT_14ca843c0;
                    plVar9 = plVar8;
                    if (bVar19) {
                      plVar12 = DAT_14ca843c0;
                      plVar9 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar9;
                    UNLOCK();
                  } while (bVar19);
                }
                else {
                  do {
                    *plVar8 = (longlong)plVar9;
                    LOCK();
                    bVar19 = plVar9 != DAT_14ca843c8;
                    plVar12 = plVar8;
                    if (bVar19) {
                      plVar9 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar19);
                }
              }
            }
            goto LAB_14316a0fa;
          }
        }
        if (uVar10 != 0) goto LAB_14316a173;
        lVar17 = 0;
      }
      else {
LAB_14316a173:
        uVar6 = *(uint *)(plVar7 + 0x5c);
        if (uVar6 == 0) {
          uVar13 = 0x20;
        }
        else {
          uVar13 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
            }
          }
        }
        lVar17 = *(longlong *)(uVar10 + 0x20 + (ulonglong)uVar13 * 8);
      }
      uVar18 = *(undefined8 *)(lVar17 + 0x70);
      lVar11 = plVar7[0x22];
      if ((lVar11 == 0) || (uVar6 = *(uint *)(lVar11 + 4), *(uint *)(plVar7[0x21] + 0x20) <= uVar6))
      {
        FUN_140059560(plVar7[0x15],&local_50,(int)plVar7[0x16],
                      *(undefined4 *)((longlong)plVar7 + 0xb4));
        if (local_50 != 0) {
          plVar7[0x21] = local_50;
          uVar6 = ((uint)(local_50 >> 0x14) & 0xffff ^ (uint)(local_50 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          lVar11 = FUN_14005975a(plVar7 + 0x17,uVar6 >> 0x10 ^ uVar6,&local_50);
          plVar7[0x22] = lVar11;
          if (local_50 != 0) {
            LOCK();
            piVar2 = (int *)(local_50 + 0x478);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              FUN_1402cd3ea(*(undefined8 *)(local_50 + 0x10));
            }
            lVar11 = plVar7[0x22];
          }
          uVar6 = *(uint *)(lVar11 + 4);
          goto LAB_14316a1b7;
        }
        lVar11 = 0;
        uVar6 = 0;
        uVar14 = 0;
        uVar18 = 0;
      }
      else {
LAB_14316a1b7:
        *(uint *)(lVar11 + 4) = uVar6 + 1;
        lVar11 = plVar7[0x21];
        uVar14 = 8;
      }
      *(longlong *)(lVar17 + 0x78) = lVar11;
      *(uint *)(lVar17 + 0x80) = uVar6;
      *(undefined4 *)(lVar17 + 0x84) = uVar14;
      *(undefined8 *)(lVar17 + 0x88) = uVar18;
      lVar11 = plVar7[0x33];
      if (lVar11 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
        lVar11 = plVar7[0x33];
      }
      *(int *)(lVar11 + 0x1c0) = *(int *)(lVar11 + 0x1c0) + 1;
      (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x1a0))
                (*(longlong **)(lVar11 + 0x28),*(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0x38),
                 *(undefined4 *)(*(longlong *)(lVar17 + 0x78) + 0x18),*(undefined4 *)(lVar17 + 0x80)
                );
      *(int *)((longlong)plVar7 + 0x1c4) = *(int *)((longlong)plVar7 + 0x1c4) + 1;
      *(undefined1 *)(plVar7 + 0x777) = 1;
      bVar5 = (byte)iVar15 & 0x1f;
      uVar16 = uVar16 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      if (uVar16 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
          }
        }
      }
    } while (uVar16 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14316a36a FUN_14316a36a body=85 status=ok
// SIG undefined FUN_14316a36a(void)

void FUN_14316a36a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                    (*(longlong **)(param_2 + 0x40),*(undefined4 *)(param_1 + 0x18));
  iVar1 = *(int *)(lVar2 + 0x30);
  *(uint *)(lVar2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x34) < iVar1 + 1U) {
    FUN_14476c1d2((longlong *)(lVar2 + 0x28),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar1 * 8) =
       *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14316a3c0 FUN_14316a3c0 body=136 status=ok
// SIG undefined FUN_14316a3c0(void)

void FUN_14316a3c0(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                    (*(longlong **)(param_2 + 0x40),*param_1);
  iVar1 = *(int *)(lVar3 + 0x30);
  *(uint *)(lVar3 + 0x30) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x34) < iVar1 + 1U) {
    FUN_14476c1d2((longlong *)(lVar3 + 0x28),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 2);
  *(longlong *)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar1 * 8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((param_1[4] == 1) && (*(char *)(lVar3 + 0x3bb8) == '\x01')) {
    FUN_144721e30(lVar3 + 0x1c8,*(undefined8 *)(lVar3 + 0x3bb0));
    *(undefined1 *)(lVar3 + 0x3bb8) = 0;
  }
  return;
}



// FUNCTION 14316a448 FUN_14316a448 body=351 status=ok
// SIG undefined FUN_14316a448(void)

void FUN_14316a448(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                     (*(longlong **)(param_2 + 0x40),*(undefined4 *)(param_1 + 0x10));
  iVar2 = (int)plVar4[6];
  *(uint *)(plVar4 + 6) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0x34) < iVar2 + 1U) {
    FUN_14476c1d2(plVar4 + 5,iVar2);
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(plVar4[5] + (longlong)iVar2 * 8) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if ((*(int *)(param_1 + 0x20) == 1) && ((char)plVar4[0x777] == '\x01')) {
    if (plVar4[0x776] == 0) {
      lVar7 = 0;
    }
    else {
      uVar3 = *(uint *)(plVar4 + 0x5c);
      if (uVar3 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      }
      lVar7 = *(longlong *)(plVar4[0x776] + 0x20 + (ulonglong)uVar5 * 8);
    }
    if (*(int *)(lVar7 + 0x60) == 1) {
      *(int *)((longlong)plVar4 + 0x1c4) = *(int *)((longlong)plVar4 + 0x1c4) + -1;
      lVar6 = plVar4[0x33];
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        lVar6 = plVar4[0x33];
      }
      FUN_144709cca(lVar6,(undefined8 *)(lVar7 + 0x78));
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      *(undefined8 *)(lVar7 + 0x88) = 0;
    }
    else if (*(int *)(lVar7 + 0x60) == 2) {
      FUN_144ac2c24(plVar4,local_40,1,*(undefined8 *)(lVar7 + 0x70));
    }
    *(undefined1 *)(plVar4 + 0x777) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14316a5f2 FUN_14316a5f2 body=357 status=ok
// SIG undefined FUN_14316a5f2(void)

void FUN_14316a5f2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (DAT_14c760da4 != 0) {
    lVar1 = *param_1;
    uVar8 = 0;
    do {
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                         (*(longlong **)(param_2 + 0x40),uVar8 & 0xffffffff);
      lVar2 = *(longlong *)(lVar1 + 0x90 + uVar8 * 8);
      lVar6 = plVar5[0x33];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
        lVar6 = plVar5[0x33];
      }
      *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
      (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x250))
                (*(longlong **)(lVar6 + 0x48),*(undefined8 *)(lVar2 + 0xd0),param_1[0xc],4);
      lVar2 = param_1[3];
      lVar6 = plVar5[0x33];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
        lVar6 = plVar5[0x33];
      }
      FUN_1447093fc(lVar6,lVar2);
      if (((plVar5[0x33] != 0) &&
          (0 < (int)DAT_14c760b84 && *(int *)((longlong)plVar5 + 0x1c4) == 0)) &&
         (DAT_14c760b84 < *(uint *)(plVar5[0x33] + 0x1c0))) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      if ((char)param_1[0x10] == '\x01') {
        FUN_1473728f0(lVar1,uVar8 & 0xffffffff);
        FUN_147372e06(lVar1,uVar8 & 0xffffffff);
      }
    } while ((uVar8 < 7) && (uVar8 = uVar8 + 1, uVar8 < DAT_14c760da4));
    if (DAT_14c760da4 != 0) {
      uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uVar7 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      do {
        *(undefined1 *)(lVar1 + 0x88 + (ulonglong)uVar7) = 0;
        bVar3 = (byte)uVar7 & 0x1f;
        uVar4 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar4;
        if (uVar4 == 0) {
          uVar7 = 0x20;
        }
        else {
          uVar7 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
        }
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 14316a758 FUN_14316a758 body=34 status=ok
// SIG undefined FUN_14316a758(void)

void FUN_14316a758(longlong param_1)

{
  FUN_14316a5f2(param_1 + 0x10);
  FUN_144902b9c(param_1 + 0x18);
  return;
}



// FUNCTION 14316a77a FUN_14316a77a body=475 status=ok
// SIG undefined FUN_14316a77a(void)

void FUN_14316a77a(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x20);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 6) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 5;
LAB_14316a79d:
    if (*(void **)((longlong)param_1 + 0x18) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x18),(longlong)param_2 << 2);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (5 < *(uint *)((longlong)param_1 + 0x24)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_14316a842;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_14316a842:
    uVar8 = uVar8 >> 2;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x7fffffff;
      uVar8 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x24) = uVar6;
      if (uVar6 < 6) goto LAB_14316a79d;
    }
    if (*(longlong *)((longlong)param_1 + 0x18) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x18,0,uVar8,4);
      memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 << 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,uVar8,4);
  return;
}



// FUNCTION 14316a955 FUN_14316a955 body=1623 status=ok
// SIG undefined FUN_14316a955(void)

void FUN_14316a955(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  byte bVar17;
  int *piVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined8 *local_198;
  uint local_18c;
  ulonglong local_188;
  uint local_17c;
  ulonglong local_178;
  void *local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar8 = *param_2;
  lVar24 = (longlong)param_3;
  plVar19 = (longlong *)((longlong)param_4 * 0x38 + *param_1);
  cVar16 = (char)param_1[4];
  if (cVar16 == '\x02') {
    uStack_90 = *(undefined4 *)(lVar8 + lVar24 * 4);
    iVar5 = *(int *)((longlong)plVar19 + 0xc);
    local_1a0 = (undefined1 *)plVar19[5];
    uVar3 = *(ushort *)((longlong)plVar19 + 0x1a);
    lVar8 = plVar19[4];
    lVar10 = plVar19[3];
    lVar26 = plVar19[2];
    lVar24 = param_1[3];
    local_b8 = param_1[1];
    lVar9 = param_1[2];
    uVar22 = *(ulonglong *)(lVar9 + 0x30);
    uVar20 = lVar9 + 0x30 + ((longlong)uVar22 >> 0x18);
    if ((uVar22 & 1) == 0) {
      uVar20 = uVar22;
    }
    *(undefined4 *)(uVar20 + (*(int *)(lVar9 + 0xc) + *(int *)(lVar9 + 0x20) * iVar5 + 0x2c)) =
         *(undefined4 *)((longlong)plVar19 + 0x14);
    lVar21 = *(longlong *)(*(longlong *)(lVar24 + 0x38) + (longlong)(int)lVar26 * 8);
    uStack_a0 = *(undefined8 *)(lVar21 + 0xe8);
    local_198 = &local_b8;
    local_a8 = *(undefined8 *)(lVar9 + 0x58);
    local_98 = *(undefined4 *)(lVar9 + 0xc);
    local_1a8 = CONCAT44(local_1a8._4_4_,(uint)uVar3);
    uStack_b0 = lVar9;
    iStack_94 = iVar5;
    cVar16 = FUN_14316b421(lVar21,uStack_a0,(short)lVar10,lVar8);
    if (cVar16 == '\0') {
      puVar27 = (undefined8 *)&DAT_14a34bea0;
    }
    else {
      puVar27 = (undefined8 *)((longlong)(int)lVar26 * 0x20 + *(longlong *)(lVar24 + 0x48));
    }
    uVar22 = *(ulonglong *)(lVar9 + 0x30);
    uVar20 = lVar9 + 0x30 + ((longlong)uVar22 >> 0x18);
    if ((uVar22 & 1) == 0) {
      uVar20 = uVar22;
    }
    uVar22 = (ulonglong)(uint)(iVar5 * *(int *)(lVar9 + 0x20) + *(int *)(lVar9 + 0xc));
    uVar14 = *puVar27;
    uVar15 = puVar27[1];
    uVar13 = puVar27[3];
    puVar1 = (undefined8 *)(uVar20 + 0x10 + uVar22);
    *puVar1 = puVar27[2];
    puVar1[1] = uVar13;
    puVar27 = (undefined8 *)(uVar20 + uVar22);
    *puVar27 = uVar14;
    puVar27[1] = uVar15;
    goto LAB_14316ada0;
  }
  if (cVar16 != '\x01') {
    if (cVar16 == '\0') {
      uVar25 = *(uint *)(plVar19 + 2);
      lVar26 = (longlong)(int)uVar25;
      lVar9 = param_1[3];
      iVar5 = *(int *)((longlong)plVar19 + 0xc);
      lVar10 = param_1[2];
      if (*(int *)(lVar10 + 0x18) == 1) {
        uVar22 = *(ulonglong *)(lVar10 + 0x30);
        uVar20 = lVar10 + 0x30 + ((longlong)uVar22 >> 0x18);
        if ((uVar22 & 1) == 0) {
          uVar20 = uVar22;
        }
        uVar22 = (ulonglong)(uint)(iVar5 * *(int *)(lVar10 + 0x20) + *(int *)(lVar10 + 0x10));
        puVar27 = (undefined8 *)(*(longlong *)(lVar9 + 0x68) + lVar26 * 0x20);
        uVar14 = *puVar27;
        uVar15 = puVar27[1];
        puVar27 = (undefined8 *)(*(longlong *)(lVar9 + 0x68) + 0x10 + lVar26 * 0x20);
        uVar13 = puVar27[1];
        puVar1 = (undefined8 *)(uVar20 + 0x10 + uVar22);
        *puVar1 = *puVar27;
        puVar1[1] = uVar13;
        puVar27 = (undefined8 *)(uVar20 + uVar22);
        *puVar27 = uVar14;
        puVar27[1] = uVar15;
      }
      else {
        local_168 = (ulonglong)*(uint *)(lVar8 + lVar24 * 4);
        uVar6 = *(undefined4 *)((longlong)plVar19 + 0x14);
        local_150 = (undefined1 *)plVar19[5];
        uVar3 = *(ushort *)((longlong)plVar19 + 0x1a);
        local_170 = (void *)plVar19[4];
        uVar4 = *(ushort *)(plVar19 + 3);
        lVar8 = param_1[1];
        lVar24 = *(longlong *)(*plVar19 + 0xe0 + (ulonglong)*(uint *)(lVar8 + 8) * 0x10);
        lVar21 = (longlong)(int)plVar19[1] * 0x20;
        puVar27 = (undefined8 *)(lVar24 + 0x10 + lVar21);
        uVar14 = *puVar27;
        uVar15 = puVar27[1];
        uVar22 = *(ulonglong *)(lVar10 + 0x30);
        uVar20 = lVar10 + 0x30 + ((longlong)uVar22 >> 0x18);
        if ((uVar22 & 1) == 0) {
          uVar20 = uVar22;
        }
        uVar22 = (ulonglong)(*(int *)(lVar10 + 0x10) + *(int *)(lVar10 + 0x20) * iVar5 + 0x20);
        uVar13 = *(undefined8 *)(lVar24 + lVar21);
        *(undefined4 *)(uVar20 + 8 + uVar22) = *(undefined4 *)(lVar24 + 8 + lVar21);
        *(undefined8 *)(uVar20 + uVar22) = uVar13;
        *(undefined4 *)(uVar20 + 0xc + uVar22) = uVar6;
        local_148._0_4_ = (undefined4)uVar14;
        local_148._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_140._0_4_ = (undefined4)uVar15;
        uStack_140._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
        puVar2 = (undefined4 *)(uVar20 + 0x10 + uVar22);
        *puVar2 = (undefined4)local_148;
        puVar2[1] = local_148._4_4_;
        puVar2[2] = (undefined4)uStack_140;
        puVar2[3] = uStack_140._4_4_;
        lVar24 = lVar10 + 0x30;
        bVar23 = uVar4 - 1 < 6 && (uVar3 == 0 && DAT_14c760ba0 != 0);
        lVar21 = *(longlong *)(*(longlong *)(lVar9 + 0x58) + lVar26 * 8);
        local_158 = lVar9;
        local_148 = uVar14;
        uStack_140 = uVar15;
        if (bVar23) {
          local_88 = 0;
          local_80 = (uint)uVar4;
          local_188 = (ulonglong)((uint)uVar4 * 8);
          local_17c = (uint)uVar3;
          local_160 = (ulonglong)uVar4;
          local_7c = uVar25;
          memcpy(&local_b8,local_170,local_188);
          local_1a0 = &LAB_142760e05;
          local_1a8 = 0xc0;
          local_188 = FUN_140ab9477(&local_b8,local_188,0,&DAT_149e18840);
          local_58 = local_98;
          iStack_54 = iStack_94;
          uStack_50 = uStack_90;
          uStack_4c = uStack_8c;
          local_68 = (undefined4)local_a8;
          uStack_64 = local_a8._4_4_;
          uStack_60 = (undefined4)uStack_a0;
          uStack_5c = uStack_a0._4_4_;
          local_78 = (undefined4)local_b8;
          uStack_74 = local_b8._4_4_;
          uStack_70 = (undefined4)uStack_b0;
          uStack_6c = uStack_b0._4_4_;
          local_178 = (ulonglong)local_7c;
          local_f8 = (undefined4)local_b8;
          uStack_f4 = local_b8._4_4_;
          uStack_f0 = (undefined4)uStack_b0;
          uStack_ec = uStack_b0._4_4_;
          local_e8 = (undefined4)local_a8;
          uStack_e4 = local_a8._4_4_;
          uStack_e0 = (undefined4)uStack_a0;
          uStack_dc = uStack_a0._4_4_;
          local_d8 = local_98;
          iStack_d4 = iStack_94;
          uStack_d0 = uStack_90;
          uStack_cc = uStack_8c;
          local_18c = local_80;
          local_c0 = local_80;
          local_bc = local_7c;
          local_c8 = local_188;
          piVar18 = (int *)FUN_14737c616(local_168 * 0x100 + lVar10 + 0x80);
          uVar22 = local_160;
          uVar25 = local_17c;
          if (piVar18 != (int *)0x0) {
            uVar22 = *(ulonglong *)(lVar10 + 0x30);
            uVar20 = ((longlong)uVar22 >> 0x18) + lVar24;
            if ((uVar22 & 1) == 0) {
              uVar20 = uVar22;
            }
            uVar22 = (ulonglong)(uint)(*(int *)(lVar10 + 0x20) * iVar5 + *(int *)(lVar10 + 0x10));
            puVar27 = (undefined8 *)(*(longlong *)(lVar9 + 0x68) + lVar26 * 0x20);
            uVar14 = *puVar27;
            uVar15 = puVar27[1];
            puVar27 = (undefined8 *)(*(longlong *)(lVar9 + 0x68) + 0x10 + lVar26 * 0x20);
            uVar13 = puVar27[1];
            puVar1 = (undefined8 *)(uVar20 + 0x10 + uVar22);
            *puVar1 = *puVar27;
            puVar1[1] = uVar13;
            puVar27 = (undefined8 *)(uVar20 + uVar22);
            *puVar27 = uVar14;
            puVar27[1] = uVar15;
            iVar7 = *(int *)(lVar10 + 0x20);
            uVar22 = *(ulonglong *)(lVar10 + 0x30);
            uVar20 = ((longlong)uVar22 >> 0x18) + lVar24;
            if ((uVar22 & 1) == 0) {
              uVar20 = uVar22;
            }
            memcpy((void *)((*(int *)(lVar10 + 0x10) + iVar7 * iVar5 + 0x40) + uVar20),
                   (void *)((*piVar18 * iVar7 + *(int *)(lVar10 + 0x10) + 0x40) + uVar20),
                   (ulonglong)(iVar7 - 0x40));
            goto LAB_14316ada0;
          }
        }
        else {
          local_178 = 0;
          local_18c = 0;
          local_188 = 0;
          uVar22 = (ulonglong)uVar4;
          uVar25 = (uint)uVar3;
        }
        uVar20 = local_168;
        uStack_a0 = *(undefined8 *)(lVar21 + 0xe8);
        local_198 = &local_b8;
        local_a8 = *(undefined8 *)(lVar10 + 0x58);
        uStack_90 = (undefined4)local_168;
        local_98 = *(undefined4 *)(lVar10 + 0x10);
        local_1a0 = local_150;
        local_1a8 = CONCAT44(local_1a8._4_4_,uVar25);
        local_b8 = lVar8;
        uStack_b0 = lVar10;
        iStack_94 = iVar5;
        bVar17 = FUN_14316b421(lVar21,uStack_a0,uVar22,local_170);
        if ((bVar23 & bVar17) == 1) {
          local_118 = local_58;
          iStack_114 = iStack_54;
          uStack_110 = uStack_50;
          uStack_10c = uStack_4c;
          local_128 = local_68;
          uStack_124 = uStack_64;
          uStack_120 = uStack_60;
          uStack_11c = uStack_5c;
          local_138 = local_78;
          uStack_134 = uStack_74;
          uStack_130 = uStack_70;
          uStack_12c = uStack_6c;
          local_108 = local_188;
          local_100 = local_18c;
          local_fc = (undefined4)local_178;
          FUN_14737c6f6(uVar20 * 0x100 + lVar10 + 0x80,&local_138,iVar5);
        }
        if (bVar17 == 0) {
          puVar27 = (undefined8 *)&DAT_14a34bea0;
        }
        else {
          puVar27 = (undefined8 *)(lVar26 * 0x20 + *(longlong *)(local_158 + 0x68));
        }
        uVar22 = *(ulonglong *)(lVar10 + 0x30);
        uVar20 = lVar24 + ((longlong)uVar22 >> 0x18);
        if ((uVar22 & 1) == 0) {
          uVar20 = uVar22;
        }
        uVar22 = (ulonglong)(uint)(iVar5 * *(int *)(lVar10 + 0x20) + *(int *)(lVar10 + 0x10));
        uVar14 = *puVar27;
        uVar15 = puVar27[1];
        uVar13 = puVar27[3];
        puVar1 = (undefined8 *)(uVar20 + 0x10 + uVar22);
        *puVar1 = puVar27[2];
        puVar1[1] = uVar13;
        puVar27 = (undefined8 *)(uVar20 + uVar22);
        *puVar27 = uVar14;
        puVar27[1] = uVar15;
      }
    }
    goto LAB_14316ada0;
  }
  uVar6 = *(undefined4 *)(lVar8 + lVar24 * 4);
  iVar5 = *(int *)((longlong)plVar19 + 0xc);
  puVar11 = (undefined1 *)plVar19[5];
  uVar3 = *(ushort *)((longlong)plVar19 + 0x1a);
  lVar8 = plVar19[4];
  lVar10 = plVar19[3];
  lVar26 = (longlong)(int)plVar19[2];
  lVar24 = param_1[1];
  lVar9 = param_1[2];
  uVar22 = *(ulonglong *)(lVar9 + 0x30);
  uVar20 = lVar9 + 0x30 + ((longlong)uVar22 >> 0x18);
  if ((uVar22 & 1) == 0) {
    uVar20 = uVar22;
  }
  lVar21 = param_1[3];
  *(undefined4 *)(uVar20 + (*(int *)(lVar9 + 0x14) + *(int *)(lVar9 + 0x20) * iVar5 + 0x2c)) =
       *(undefined4 *)((longlong)plVar19 + 0x14);
  if (lVar26 == -1) {
LAB_14316ab83:
    puVar27 = (undefined8 *)&DAT_14a34bea0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(lVar21 + 0x78) + lVar26 * 8);
    uStack_a0 = *(undefined8 *)(lVar12 + 0xe8);
    local_198 = &local_b8;
    local_a8 = *(undefined8 *)(lVar9 + 0x58);
    local_98 = *(undefined4 *)(lVar9 + 0x14);
    local_1a8 = CONCAT44(local_1a8._4_4_,(uint)uVar3);
    local_1a0 = puVar11;
    local_b8 = lVar24;
    uStack_b0 = lVar9;
    iStack_94 = iVar5;
    uStack_90 = uVar6;
    cVar16 = FUN_14316b421(lVar12,uStack_a0,(short)lVar10,lVar8);
    if (cVar16 == '\0') goto LAB_14316ab83;
    puVar27 = (undefined8 *)(lVar26 * 0x20 + *(longlong *)(lVar21 + 0x88));
  }
  uVar22 = *(ulonglong *)(lVar9 + 0x30);
  uVar20 = lVar9 + 0x30 + ((longlong)uVar22 >> 0x18);
  if ((uVar22 & 1) == 0) {
    uVar20 = uVar22;
  }
  uVar22 = (ulonglong)(uint)(iVar5 * *(int *)(lVar9 + 0x20) + *(int *)(lVar9 + 0x14));
  uVar14 = *puVar27;
  uVar15 = puVar27[1];
  uVar13 = puVar27[3];
  puVar1 = (undefined8 *)(uVar20 + 0x10 + uVar22);
  *puVar1 = puVar27[2];
  puVar1[1] = uVar13;
  puVar27 = (undefined8 *)(uVar20 + uVar22);
  *puVar27 = uVar14;
  puVar27[1] = uVar15;
LAB_14316ada0:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14316afae FUN_14316afae body=125 status=ok
// SIG undefined FUN_14316afae(void)

void FUN_14316afae(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_14316c4e6(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14316b02c FUN_14316b02c body=939 status=ok
// SIG undefined FUN_14316b02c(void)

ulonglong FUN_14316b02c(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_14316afae(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_14316b1b2;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_14316b1b2:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_14316b2fe;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_14316a955(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_14316b300;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_14316b2fe:
        uVar11 = 0;
LAB_14316b300:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_14316b2fe;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 14316b3d8 FUN_14316b3d8 body=73 status=ok
// SIG undefined FUN_14316b3d8(void)

void FUN_14316b3d8(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_14316c4e6(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014316b417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14316b421 FUN_14316b421 body=3088 status=ok
// SIG undefined FUN_14316b421(void)

undefined8
FUN_14316b421(longlong param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
             void *param_6,longlong *param_7)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  double dVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  undefined1 *puVar9;
  LPVOID lpTlsValue;
  void *_Dst;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_b98 [32];
  undefined4 local_b78;
  undefined4 local_b70;
  longlong local_b60;
  longlong local_b58;
  longlong local_b50;
  longlong local_b48;
  ulonglong local_b40;
  longlong local_b38 [14];
  undefined1 local_ac8;
  undefined2 local_ac7;
  undefined8 local_ac0;
  longlong *local_ab8;
  uint local_ab0;
  byte local_aac;
  byte local_aab;
  undefined8 local_aa8 [16];
  undefined8 local_a28 [64];
  undefined8 local_828 [16];
  undefined8 local_7a8 [32];
  undefined4 local_6a8 [64];
  undefined4 local_5a8 [64];
  undefined4 local_4a8 [64];
  undefined1 local_3a8 [768];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  lVar11 = param_1 + 0xb0;
  if (param_1 == 0) {
    lVar11 = 0;
  }
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b98;
  local_ab0 = *(uint *)(*param_7 + 8);
  local_ab8 = param_7;
  local_aac = *(byte *)(lVar11 + 0x10) >> 1 & 1;
  local_aab = *(byte *)(lVar11 + 0x10) >> 2 & 1;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x6000000000;
  local_90 = (undefined1 *)0x0;
  local_88 = 0x100000000;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (param_3 != 0) {
    uVar12 = 0;
    do {
      lVar11 = *(longlong *)(param_4 + uVar12 * 8);
      if (lVar11 != 0) {
        local_aa8[uVar12] =
             *(undefined8 *)(*(longlong *)(lVar11 + 0x40 + (ulonglong)local_ab0 * 8) + 0xd8);
        uStack_78 = uStack_78 | 1L << ((byte)uVar12 & 0x3f);
      }
      uVar12 = uVar12 + 1;
    } while (param_3 != uVar12);
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  local_b60 = param_1;
  local_b58 = param_2;
  if (uVar7 != 0) {
    dVar4 = (double)(float)DAT_14c866ff8;
    local_b48 = param_4;
    do {
      local_b40 = (ulonglong)uVar7;
      uVar3 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      uVar12 = (ulonglong)uVar3;
      local_b50 = *(longlong *)(local_b48 + uVar12 * 8);
      lVar11 = *(longlong *)(local_b60 + 0x58);
      lVar19 = *(longlong *)(local_b50 + 0x10);
      iVar10 = *(int *)(local_b50 + 0x18);
      if ((lVar11 != 0) && (uVar13 = (ulonglong)*(uint *)(lVar11 + uVar12 * 4), uVar13 != 0)) {
        puVar15 = (uint *)(lVar11 + uVar13 * 4);
        uVar7 = *puVar15;
        do {
          puVar15 = puVar15 + 1;
          uVar6 = uVar7 >> 8 & 0xffff;
          if ((int)uVar6 < iVar10) {
            plVar18 = *(longlong **)(lVar19 + (ulonglong)uVar6 * 8);
            if (((double)plVar18[0xb] != dVar4) || (NAN((double)plVar18[0xb]) || NAN(dVar4))) {
              plVar18[0xb] = (longlong)dVar4;
            }
            if (plVar18 == (longlong *)0x0) {
LAB_14316b70a:
              lVar11 = 0;
            }
            else {
              uVar13 = (ulonglong)local_ab0;
              lVar11 = (**(code **)(*plVar18 + 8))(plVar18);
              if ((*(byte *)(lVar11 + 2) & 4) != 0) {
                plVar18 = (longlong *)**(longlong **)(plVar18[0x48] + 0xa0);
              }
              lVar11 = (**(code **)(*plVar18 + 0x30))(plVar18);
              if (lVar11 == 0) goto LAB_14316b70a;
              lVar11 = *(longlong *)(lVar11 + 0x128 + uVar13 * 8);
            }
            lVar11 = *(longlong *)(lVar11 + 0x168);
            if (lVar11 == 0) {
              plVar18 = *(longlong **)(DAT_14ca94dc8 + 0x10);
              if (plVar18 == (longlong *)0x0) {
LAB_14316b711:
                lVar11 = 0;
              }
              else {
                uVar13 = (ulonglong)local_ab0;
                lVar11 = (**(code **)(*plVar18 + 8))(plVar18);
                if ((*(byte *)(lVar11 + 2) & 4) != 0) {
                  plVar18 = (longlong *)**(longlong **)(plVar18[0x48] + 0xa0);
                }
                lVar11 = (**(code **)(*plVar18 + 0x30))(plVar18);
                if (lVar11 == 0) goto LAB_14316b711;
                lVar11 = *(longlong *)(lVar11 + 0x128 + uVar13 * 8);
              }
              lVar11 = *(longlong *)(lVar11 + 0x168);
            }
            if (local_aac == 0) {
              uVar2 = *(undefined4 *)(lVar11 + 0x44);
              local_a28[uVar7 & 0xff] = *(undefined8 *)(lVar11 + 0x38);
              local_6a8[uVar7 & 0xff] = uVar2;
              local_80 = local_80 | 1L << ((byte)uVar7 & 0x3f);
            }
            uVar16 = *(undefined8 *)(lVar11 + 0x10);
            lVar14 = (longlong)(int)local_a0;
            uVar7 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,uVar7);
            if (local_a0._4_4_ < uVar7) {
              FUN_147378c1c(local_3a8);
            }
            puVar9 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar9 = local_3a8;
            }
            *(undefined8 *)(puVar9 + lVar14 * 8) = uVar16;
            if ((*(byte *)(*(longlong *)(lVar11 + 0x20) + 0xdf) & 1) != 0) {
              FUN_147377d64(local_ab8[1],lVar11,(int)local_ab8[5]);
            }
          }
          uVar7 = *puVar15;
        } while (uVar7 >> 0x18 == uVar3);
        lVar19 = *(longlong *)(local_b50 + 0x10);
        iVar10 = *(int *)(local_b50 + 0x18);
      }
      lVar11 = *(longlong *)(local_b60 + 0x18);
      if ((lVar11 != 0) && (uVar13 = (ulonglong)*(uint *)(lVar11 + uVar12 * 4), uVar13 != 0)) {
        puVar15 = (uint *)(lVar11 + uVar13 * 4);
        uVar7 = *puVar15;
        do {
          puVar15 = puVar15 + 1;
          uVar6 = uVar7 >> 8 & 0xffff;
          if ((int)uVar6 < iVar10) {
            lVar11 = *(longlong *)(lVar19 + (ulonglong)uVar6 * 8);
            if (lVar11 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(longlong *)(lVar11 + 200 + (ulonglong)local_ab0 * 8);
            }
            lVar14 = lVar11 + 0x28;
            if (lVar11 == 0) {
              lVar14 = 0;
            }
            if (local_aac == 0) {
              uVar2 = *(undefined4 *)(lVar14 + 0x44);
              local_a28[uVar7 & 0xff] = *(undefined8 *)(lVar14 + 0x38);
              local_6a8[uVar7 & 0xff] = uVar2;
              local_80 = local_80 | 1L << ((byte)uVar7 & 0x3f);
            }
            uVar16 = *(undefined8 *)(lVar14 + 0x10);
            lVar11 = (longlong)(int)local_a0;
            uVar7 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,uVar7);
            if (local_a0._4_4_ < uVar7) {
              FUN_147378c1c(local_3a8);
            }
            puVar9 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar9 = local_3a8;
            }
            *(undefined8 *)(puVar9 + lVar11 * 8) = uVar16;
            if ((*(byte *)(*(longlong *)(lVar14 + 0x20) + 0xdf) & 1) != 0) {
              FUN_147377d64(local_ab8[1],lVar14,(int)local_ab8[5]);
            }
            lVar11 = *(longlong *)(lVar14 + 0x90);
            if (lVar11 != 0) {
              lVar14 = (longlong)(int)local_88;
              uVar7 = (int)local_88 + 1;
              local_88 = CONCAT44(local_88._4_4_,uVar7);
              if (local_88._4_4_ < uVar7) {
                FUN_147378d22(local_98);
              }
              puVar9 = local_90;
              if (local_90 == (undefined1 *)0x0) {
                puVar9 = local_98;
              }
              *(longlong *)(puVar9 + lVar14 * 8) = lVar11;
            }
          }
          uVar7 = *puVar15;
        } while (uVar7 >> 0x18 == uVar3);
        lVar19 = *(longlong *)(local_b50 + 0x10);
        iVar10 = *(int *)(local_b50 + 0x18);
      }
      lVar11 = *(longlong *)(local_b60 + 0x68);
      if ((lVar11 != 0) && (uVar13 = (ulonglong)*(uint *)(lVar11 + uVar12 * 4), uVar13 != 0)) {
        puVar15 = (uint *)(lVar11 + uVar13 * 4);
        uVar7 = *puVar15;
        do {
          puVar15 = puVar15 + 1;
          uVar6 = uVar7 >> 8 & 0xffff;
          if ((int)uVar6 < iVar10) {
            lVar11 = *(longlong *)(lVar19 + (ulonglong)uVar6 * 8);
            if ((lVar11 == 0) ||
               (lVar11 = *(longlong *)(lVar11 + 0x30 + (ulonglong)local_ab0 * 8), lVar11 == 0)) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(longlong *)(lVar11 + 0x78);
            }
            if (local_aac == 1) {
              uVar13 = (ulonglong)(uVar7 & 0xff);
            }
            else {
              uVar2 = *(undefined4 *)(lVar11 + 0x44);
              uVar13 = (ulonglong)(uVar7 & 0xff);
              local_a28[uVar13] = *(undefined8 *)(lVar11 + 0x38);
              local_6a8[uVar13] = uVar2;
            }
            local_80 = local_80 | 1L << ((byte)uVar13 & 0x3f);
            uVar16 = *(undefined8 *)(lVar11 + 0x10);
            lVar14 = (longlong)(int)local_a0;
            uVar7 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,uVar7);
            if (local_a0._4_4_ < uVar7) {
              FUN_147378c1c(local_3a8);
            }
            puVar9 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar9 = local_3a8;
            }
            *(undefined8 *)(puVar9 + lVar14 * 8) = uVar16;
            if ((*(byte *)(*(longlong *)(lVar11 + 0x20) + 0xdf) & 1) != 0) {
              FUN_147377d64(local_ab8[1],lVar11,(int)local_ab8[5]);
            }
          }
          uVar7 = *puVar15;
        } while (uVar7 >> 0x18 == uVar3);
        lVar19 = *(longlong *)(local_b50 + 0x10);
        iVar10 = *(int *)(local_b50 + 0x18);
      }
      lVar11 = *(longlong *)(local_b60 + 0x28);
      if ((lVar11 != 0) && (uVar13 = (ulonglong)*(uint *)(lVar11 + uVar12 * 4), uVar13 != 0)) {
        puVar15 = (uint *)(lVar11 + uVar13 * 4);
        uVar7 = *puVar15;
        do {
          puVar15 = puVar15 + 1;
          uVar6 = uVar7 >> 8 & 0xffff;
          if ((int)uVar6 < iVar10) {
            lVar11 = *(longlong *)(lVar19 + (ulonglong)uVar6 * 8);
            if (lVar11 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)local_ab0 * 8);
            }
            if ((local_aab & 1) == 0) {
              uVar2 = *(undefined4 *)(lVar11 + 0x6c);
              local_7a8[uVar7 & 0xff] = *(undefined8 *)(lVar11 + 0x60);
              local_4a8[uVar7 & 0xff] = uVar2;
              uStack_68 = uStack_68 | 1L << ((byte)uVar7 & 0x3f);
            }
          }
          uVar7 = *puVar15;
        } while (uVar7 >> 0x18 == uVar3);
        lVar19 = *(longlong *)(local_b50 + 0x10);
        iVar10 = *(int *)(local_b50 + 0x18);
      }
      lVar11 = *(longlong *)(local_b60 + 0x38);
      if ((lVar11 != 0) && (uVar12 = (ulonglong)*(uint *)(lVar11 + uVar12 * 4), uVar12 != 0)) {
        puVar15 = (uint *)(lVar11 + uVar12 * 4);
        uVar7 = *puVar15;
        do {
          puVar15 = puVar15 + 1;
          uVar6 = uVar7 >> 8 & 0xffff;
          if ((int)uVar6 < iVar10) {
            lVar11 = *(longlong *)(lVar19 + (ulonglong)uVar6 * 8);
            if (lVar11 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(longlong *)(lVar11 + 200 + (ulonglong)local_ab0 * 8);
            }
            lVar14 = lVar11 + 0x28;
            if (lVar11 == 0) {
              lVar14 = 0;
            }
            if (local_aac == 0) {
              uVar2 = *(undefined4 *)(lVar14 + 0x44);
              local_828[uVar7 & 0xff] = *(undefined8 *)(lVar14 + 0x38);
              local_5a8[uVar7 & 0xff] = uVar2;
              local_70 = local_70 | 1L << ((byte)uVar7 & 0x3f);
            }
            uVar16 = *(undefined8 *)(lVar14 + 0x10);
            lVar11 = (longlong)(int)local_a0;
            uVar7 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,uVar7);
            if (local_a0._4_4_ < uVar7) {
              FUN_147378c1c(local_3a8);
            }
            puVar9 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar9 = local_3a8;
            }
            *(undefined8 *)(puVar9 + lVar11 * 8) = uVar16;
            if ((*(byte *)(*(longlong *)(lVar14 + 0x20) + 0xdf) & 1) != 0) {
              FUN_147377e06(local_ab8[1],lVar14,(int)local_ab8[5]);
            }
          }
          uVar7 = *puVar15;
        } while (uVar7 >> 0x18 == uVar3);
      }
      uVar7 = (uint)local_b40 - 1 & (uint)local_b40;
    } while (uVar7 != 0);
  }
  lVar11 = local_b60;
  if ((param_6 != (void *)0x0) && ((*(byte *)(local_b60 + 0xc0) & 1) != 0)) {
    local_b38[0] = *param_7;
    local_b38[1] = 0;
    local_b38[2] = 0;
    local_b38[3] = 0;
    local_b38[10] = 0;
    local_b38[0xb] = 0;
    local_b38[0xc] = 0;
    local_b38[0xd] = 0;
    local_ac8 = 0;
    local_ac7 = 0xff;
    local_b38[4] = 0;
    local_b38[5] = 0;
    local_b38[6] = 0;
    local_b38[7] = 0;
    local_b38[8] = 0;
    local_b38[9] = 0;
    local_ac0 = *(undefined8 *)(local_b38[0] + 0x10);
    dwTlsIndex = DAT_14c760b80;
    if (DAT_14c760b80 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar8 = 0xffffffff;
      LOCK();
      bVar20 = DAT_14c760b80 != 0xffffffff;
      DVar5 = dwTlsIndex;
      if (bVar20) {
        DVar8 = DAT_14c760b80;
        DVar5 = DAT_14c760b80;
      }
      DAT_14c760b80 = DVar5;
      UNLOCK();
      if (bVar20) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar8;
      }
    }
    lVar11 = local_b60;
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_141116b2e(&local_ac0);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    _Dst = (void *)FUN_144abce4e((longlong)lpTlsValue + 0x10,param_5,local_b38,0);
    memcpy(_Dst,param_6,(ulonglong)param_5);
    local_aa8[0] = local_b38[0xb];
    uStack_78 = uStack_78 | 1;
    FUN_144902b9c(local_b38);
  }
  lVar19 = param_7[2];
  uVar2 = (undefined4)param_7[5];
  if (*(char *)(lVar11 + 0xc2) == '\0') {
LAB_14316bcdb:
    if (*(char *)(lVar11 + 0xc4) != '\0') {
      local_b78 = 0;
      local_b70 = uVar2;
      iVar10 = FUN_14737127a(lVar19,local_5a8,local_828);
      if (iVar10 < 0) goto LAB_14316bfcd;
      lVar11 = param_7[1];
      uVar12 = *(ulonglong *)(lVar11 + 0x30);
      uVar13 = lVar11 + 0x30 + ((longlong)uVar12 >> 0x18);
      if ((uVar12 & 1) == 0) {
        uVar13 = uVar12;
      }
      *(ulonglong *)
       (uVar13 + ((uint)*(byte *)(param_7[3] + 0x98 + (ulonglong)*(byte *)(local_b58 + 0x29)) * 4 +
                  (int)param_7[4] + *(int *)(lVar11 + 0x20) * *(int *)((longlong)param_7 + 0x24) +
                 0x20)) =
           (ulonglong)(uint)(iVar10 * *(int *)(lVar19 + 0x2c)) + *(longlong *)(lVar19 + 0x38);
      lVar11 = local_b60;
    }
    if (*(char *)(lVar11 + 0xc3) != '\0') {
      bVar1 = *(byte *)(local_b58 + 0x27);
      iVar10 = 0x20;
      uVar12 = 0;
      do {
        if ((uStack_78 >> (uVar12 & 0x3f) & 1) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = local_aa8[uVar12];
        }
        lVar11 = param_7[1];
        uVar13 = *(ulonglong *)(lVar11 + 0x30);
        uVar17 = lVar11 + 0x30 + ((longlong)uVar13 >> 0x18);
        if ((uVar13 & 1) == 0) {
          uVar17 = uVar13;
        }
        *(undefined8 *)
         (uVar17 + (*(int *)(lVar11 + 0x20) * *(int *)((longlong)param_7 + 0x24) + (int)param_7[4] +
                    (uint)*(byte *)(param_7[3] + 0x98 + (ulonglong)bVar1) * 4 + iVar10)) = uVar16;
        uVar12 = uVar12 + 1;
        iVar10 = iVar10 + 8;
      } while (uVar12 < *(byte *)(local_b60 + 0xc3));
    }
    if (*(char *)(local_b60 + 0xc1) != '\0') {
      local_b78 = 1;
      local_b70 = uVar2;
      iVar10 = FUN_14737127a(lVar19,local_4a8,local_7a8);
      if (iVar10 < 0) goto LAB_14316bfcd;
      lVar11 = param_7[1];
      uVar12 = *(ulonglong *)(lVar11 + 0x30);
      uVar13 = lVar11 + 0x30 + ((longlong)uVar12 >> 0x18);
      if ((uVar12 & 1) == 0) {
        uVar13 = uVar12;
      }
      *(ulonglong *)
       (uVar13 + ((uint)*(byte *)(param_7[3] + 0x98 + (ulonglong)*(byte *)(local_b58 + 0x28)) * 4 +
                  (int)param_7[4] + *(int *)(lVar11 + 0x20) * *(int *)((longlong)param_7 + 0x24) +
                 0x20)) =
           (ulonglong)(uint)(iVar10 * *(int *)(lVar19 + 0x9c)) + *(longlong *)(lVar19 + 0xa8);
    }
    puVar9 = local_a8;
    if (local_a8 == (undefined1 *)0x0) {
      puVar9 = local_3a8;
    }
    lVar11 = (longlong)(int)local_a0;
    uVar16 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    if (lVar11 != 0) {
      lVar19 = 0;
      do {
        FUN_147377c4e(param_7[1],*(undefined8 *)(puVar9 + lVar19),(int)param_7[5]);
        lVar19 = lVar19 + 8;
      } while (lVar11 * 8 != lVar19);
    }
  }
  else {
    local_b78 = 0;
    local_b70 = uVar2;
    iVar10 = FUN_14737127a(lVar19,local_6a8,local_a28);
    if (-1 < iVar10) {
      lVar11 = param_7[1];
      uVar12 = *(ulonglong *)(lVar11 + 0x30);
      uVar13 = lVar11 + 0x30 + ((longlong)uVar12 >> 0x18);
      if ((uVar12 & 1) == 0) {
        uVar13 = uVar12;
      }
      *(ulonglong *)
       (uVar13 + ((uint)*(byte *)(param_7[3] + 0x98 + (ulonglong)*(byte *)(local_b58 + 0x25)) * 4 +
                  (int)param_7[4] + *(int *)(lVar11 + 0x20) * *(int *)((longlong)param_7 + 0x24) +
                 0x20)) =
           (ulonglong)(uint)(iVar10 * *(int *)(lVar19 + 0x2c)) + *(longlong *)(lVar19 + 0x38);
      lVar11 = local_b60;
      goto LAB_14316bcdb;
    }
LAB_14316bfcd:
    uVar16 = 0;
  }
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 14316c032 FUN_14316c032 body=434 status=ok
// SIG undefined FUN_14316c032(void)

undefined8 * FUN_14316c032(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a34c460;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_14316c4b6(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143168583);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_14316c0fc;
      }
      _aligned_free(piVar3);
    }
  }
LAB_14316c0fc:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143168583);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 14316c1e4 FUN_14316c1e4 body=53 status=ok
// SIG undefined FUN_14316c1e4(void)

void FUN_14316c1e4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14316c21a FUN_14316c21a body=667 status=ok
// SIG undefined FUN_14316c21a(void)

void FUN_14316c21a(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_14316c315;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_143168583);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_14316c315:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_14316c38f;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14316c38f:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_14316c436;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_143168583);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_14316c436;
    }
    _aligned_free(_Memory);
  }
LAB_14316c436:
  *param_1 = _Dst;
  return;
}



// FUNCTION 14316c4b6 FUN_14316c4b6 body=47 status=ok
// SIG undefined FUN_14316c4b6(void)

void FUN_14316c4b6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14316c4e6 FUN_14316c4e6 body=369 status=ok
// SIG undefined FUN_14316c4e6(void)

void FUN_14316c4e6(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14a34c470;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_14316b3d8(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_14316b3d8(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 14316c676 FUN_14316c676 body=450 status=ok
// SIG undefined FUN_14316c676(void)

void FUN_14316c676(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a34c470;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a34c4b0;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_14316c753;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_143168583);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_14316c753:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_14316c7cd;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_14316c7cd:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 14316c838 FUN_14316c838 body=26 status=ok
// SIG undefined FUN_14316c838(void)

undefined8 FUN_14316c838(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14316b02c(param_2,0);
  }
  return 0;
}



// FUNCTION 14316c852 FUN_14316c852 body=72 status=ok
// SIG undefined FUN_14316c852(void)

undefined8
FUN_14316c852(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_14316b02c(param_3,0);
  }
  FUN_14316c676(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 14316c8cc FUN_14316c8cc body=26 status=ok
// SIG undefined FUN_14316c8cc(void)

undefined8 FUN_14316c8cc(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14316b02c(*param_2,0);
  }
  return 0;
}



// FUNCTION 14316c8e6 FUN_14316c8e6 body=70 status=ok
// SIG undefined FUN_14316c8e6(void)

undefined8
FUN_14316c8e6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_14316b02c(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a34c4b0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 14316c92c FUN_14316c92c body=179 status=ok
// SIG undefined FUN_14316c92c(void)

void FUN_14316c92c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_14316b3d8(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143168583);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014316c9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14316c9ee FUN_14316c9ee body=202 status=ok
// SIG undefined FUN_14316c9ee(void)

void FUN_14316c9ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a34bee8;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x1c);
  FUN_14737d0d8(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  FUN_14737d09e(param_1 + 0xf);
  FUN_14737d09e(param_1 + 0xb);
  FUN_14737d09e(param_1 + 7);
  FUN_14737d09e(param_1 + 3);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 14316cab8 FUN_14316cab8 body=974 status=ok
// SIG undefined FUN_14316cab8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14316cab8(void)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 1;
  local_38 = 4;
  FUN_14078dbce(&DAT_14ca769f8,L"r.D3D12.GPUTimeout",&local_30,
                L"0: Disable GPU Timeout; use with care as it could freeze your PC!\n1: Enable GPU Timeout; operation taking long on the GPU will fail(default)\n"
               );
  atexit(FUN_14315f3df);
  local_30 = 0;
  local_38 = 4;
  FUN_14078dbce(&DAT_14ca76e48,L"r.D3D12.DiagnosticBufferExtraMemory",&local_30,
                L"Extra allocated memory for diagnostic buffer");
  atexit(FUN_14315f424);
  DAT_14ca76e80 = 0;
  atexit((_func_5014 *)&LAB_14316039b);
  local_38 = 0;
  FUN_141471170(&DAT_14ca76a10,L"r.D3D12.ExplicitDescriptorHeap.DeduplicateSamplers",&DAT_14c760b8c,
                L"Use an exhaustive search to deduplicate sampler descriptors when generating shader binding tables. Reduces sampler heap usage at the cost of some CPU time. (default = 1)"
               );
  atexit(FUN_1431606c3);
  local_38 = 4;
  FUN_141471170(&DAT_14ca76a28,L"r.D3D12.ExplicitDescriptorHeap.ViewDescriptorHeapSize",
                &DAT_14c760b90,
                L"Maximum number of descriptors per explicit view descriptor heap. (default = 250k, ~8MB per heap)\nTypical measured descriptor heap usage in large scenes is ~50k. An error is reported when this limit is reached and shader bindings for subsequent objects are skipped.\n"
               );
  atexit(FUN_143160708);
  local_38 = 0;
  FUN_141471170(&DAT_14ca76a40,L"D3D12.StablePowerState",&DAT_14ca76e40,
                L"Enable stable power state. This increases GPU timing measurement accuracy but may decrease overall GPU clock rate.\n    0 (default): off\n    1          : set during profiling\n    2          : set on startup\n"
               );
  atexit(FUN_143160b4c);
  local_30 = 0x42c80000;
  local_38 = 4;
  FUN_140a6b41e(&DAT_14ca76a50,L"D3D12.PSO.StallWarningThresholdInMs",&local_30,
                L"Sets a threshold of when to logs messages about stalls due to PSO creation.\nValue is in milliseconds. (100 is the default)\n"
               );
  atexit(FUN_1431613e3);
  local_38 = 4;
  FUN_14153156c(&DAT_14ca76a70,L"D3D12.PSOPrecache.KeepLowLevel",&DAT_14ca76a68,
                L"Keep in memory the d3d12 PSO blob for precached PSOs. Consumes more memory but reduces stalls.\n"
               );
  atexit(FUN_143161428);
  local_38 = 4;
  FUN_14153156c(&DAT_14ca76a88,L"D3D12.PSO.KeepUsedPSOsInLowLevelCache",&DAT_14ca76a80,
                L"Keep in memory the d3d12 PSO blob for used PSOs. Consumes more memory but reduces potential stalls.\n"
               );
  atexit(FUN_14316146d);
  local_38 = 0;
  FUN_141471170(&DAT_14ca76aa0,L"D3D12.InsertOuterOcclusionQuery",&DAT_14ca76a98,
                L"If true, enable a dummy outer occlusion query around occlusion query batches. Can help performance on some GPU architectures"
               );
  atexit(FUN_143161ac0);
  FUN_1400b22c2(&local_30,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_30,&DAT_14ca76ab4);
  if (cVar1 == '\0') {
    _DAT_14ca76ab4 = 0;
    uRam000000014ca76abc = 0;
  }
  if (CONCAT44(uStack_2c,local_30) != 0) {
    FUN_1400020a8();
  }
  local_38 = 4;
  FUN_141471170(&DAT_14ca76ac8,L"r.D3D12.RayTracing.DebugForceBuildMode",&DAT_14ca76ad8,
                L"Forces specific acceleration structure build mode (not runtime-tweakable).\n0: Use build mode requested by high-level code (Default)\n1: Force fast build mode\n2: Force fast trace mode\n"
               );
  atexit(FUN_14316218e);
  local_38 = 0;
  FUN_141471170(&DAT_14ca76ae0,L"r.D3D12.RayTracing.CacheShaderRecords",&DAT_14c760ba0,
                L"Automatically cache and re-use SBT hit group records. This significantly improves CPU performance in large scenes with many identical mesh instances. (default = 1)\nThis mode assumes that contents of uniform buffers does not change during ray tracing resource binding."
               );
  atexit(FUN_1431621d3);
  local_38 = 4;
  FUN_141471170(&DAT_14ca76af0,L"r.D3D12.RayTracing.AllowCompaction",&DAT_14c760ba4,
                L"Whether to automatically perform compaction for static acceleration structures to save GPU memory. (default = 1)\n"
               );
  atexit(FUN_143162218);
  local_38 = 4;
  FUN_141471170(&DAT_14ca76b00,L"r.D3D12.RayTracing.MaxBatchedCompaction",&DAT_14c760ba8,
                L"Maximum of amount of compaction requests and rebuilds per frame. (default = 64)\n"
               );
  atexit(FUN_14316225d);
  local_38 = 4;
  FUN_141471170(&DAT_14ca76b10,L"r.D3D12.RayTracing.SpecializeStateObjects",&DAT_14ca76b20,
                L"Whether to create specialized unique ray tracing pipeline state objects for each ray generation shader. (default = 0)\nThis option can produce more more efficient PSOs for the GPU at the cost of longer creation times and more memory. Requires DXR 1.1.\n"
               );
  atexit(FUN_1431622a2);
  local_38 = 0;
  FUN_141471170(&DAT_14ca76b28,L"r.D3D12.RayTracing.AllowSpecializedStateObjects",&DAT_14c760bac,
                L"Whether to use specialized RTPSOs if they have been created. This is intended for performance testingand has no effect if r.D3D12.RayTracing.SpecializeStateObjects is 0. (default = 1)\n"
               );
  atexit(FUN_1431622e7);
  local_38 = 0;
  FUN_141471170(&DAT_14ca76b38,L"r.D3D12.RayTracing.GPUValidation",&DAT_14ca76b48,
                L"Whether to perform validation of ray tracing geometry and other structures on the GPU. Requires Shader Model 6. (default = 0)"
               );
  atexit(FUN_14316232c);
  DAT_14ca76b58 = 0;
  atexit(FUN_143165836);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14316ce88 FUN_14316ce88 body=1284 status=ok
// SIG undefined FUN_14316ce88(void)

longlong *
FUN_14316ce88(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,undefined8 *param_5,
             int *param_6,undefined8 *param_7,uint param_8)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined4 local_120;
  int local_114;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  int **local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  int local_98;
  uint local_94;
  int local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  int *local_80;
  longlong local_78 [2];
  int local_68;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  longlong *local_50;
  ulonglong local_48;
  
  uVar11 = (ulonglong)param_8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar4 = *(undefined4 **)(**(longlong **)(param_1 + 0x1b0) + 2000 + uVar11 * 8);
  uVar5 = *(undefined8 *)(puVar4 + 4);
  uVar3 = *puVar4;
  if (param_3 == (longlong *)0x0) {
LAB_14316cf09:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar7 = (**(code **)(*param_3 + 8))(param_3);
    plVar10 = param_3;
    if ((*(byte *)(lVar7 + 2) & 4) != 0) {
      plVar10 = (longlong *)**(undefined8 **)(param_3[0x48] + 0xa0);
    }
    lVar7 = (**(code **)(*plVar10 + 0x30))();
    if (lVar7 == 0) goto LAB_14316cf09;
    plVar10 = *(longlong **)(lVar7 + 0x128 + uVar11 * 8);
  }
  lVar7 = plVar10[0x17];
  local_50 = plVar10;
  if (*(int *)(lVar7 + 0xcc) == 3) {
    FUN_14737da5e(plVar10,param_7,*(undefined1 *)((longlong)param_6 + 0x11));
    *param_5 = *(undefined8 *)param_4;
    param_5[1] = *(undefined8 *)(param_4 + 2);
    local_b0 = 0;
    local_a8 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_b0,5);
    (**(code **)(*DAT_14ca83900 + 0x370))();
    lVar7 = plVar10[0x17];
    *param_2 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    goto LAB_14316d318;
  }
  local_5c = param_4[2];
  local_68 = *param_4;
  local_64 = param_4[1];
  local_58 = param_4[3];
  local_54 = 1;
  local_60 = 0;
  *param_2 = 0;
  iVar6 = *(int *)(lVar7 + 0x78);
  local_114 = 0x27;
  if ((iVar6 != 0x13) && (iVar6 != 0x2c)) {
    local_114 = iVar6;
  }
  iVar13 = local_5c - local_68;
  iVar14 = local_58 - local_64;
  local_110 = param_2;
  iVar6 = FUN_14316d38d();
  uVar15 = iVar6 * *(int *)(lVar7 + 0x68) + 0xffU & 0xffffff00;
  local_138 = (ulonglong)(*(int *)(lVar7 + 0x70) * uVar15);
  local_130 = local_110;
  local_120 = 0;
  local_128 = 0;
  iVar6 = FUN_14631a284(uVar5,3,uVar3,uVar3);
  if (iVar6 < 0) {
    local_130 = local_78;
    local_78[0] = 0;
    local_78[1] = 0;
    local_138 = 0;
    FUN_145763094(iVar6,
                  "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, MipBytesAligned, TempTexture2D.GetInitReference(), nullptr)"
                  ,".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x1a8);
    plVar10 = local_50;
  }
  *param_5 = DAT_14c967818;
  param_5[1] = CONCAT44(iVar14,iVar13);
  lVar8 = (**(code **)(*plVar10 + 8))(plVar10);
  if ((byte)(*(char *)(lVar8 + 0x32) - 3U) < 2) {
    iVar6 = 0;
    if (*param_6 - 1U < 5) {
      iVar6 = *param_6;
    }
    lVar8 = (**(code **)(*param_3 + 8))(param_3);
    iVar6 = (iVar6 + param_6[5] * 6) * (uint)*(byte *)(lVar8 + 0x30);
    bVar1 = *(byte *)((longlong)param_6 + 0x11);
  }
  else {
    lVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    cVar2 = *(char *)(lVar8 + 0x32);
    lVar8 = (**(code **)(*param_3 + 8))();
    if ((cVar2 == '\x04') || (iVar6 = 0, cVar2 == '\x01')) {
      iVar6 = param_6[5];
    }
    iVar6 = iVar6 * (uint)*(byte *)(lVar8 + 0x30);
    bVar1 = *(byte *)((longlong)param_6 + 0x11);
  }
  param_2 = local_110;
  local_80 = (int *)0x0;
  if (local_64 == 0 && local_68 == 0) {
    uVar11 = *(ulonglong *)(lVar7 + 0x68);
    local_90 = *(int *)(lVar7 + 0x70);
    if ((uVar11 != local_5c) ||
       (uVar11 = (ulonglong)local_5c, local_94 = local_5c, local_58 != local_90))
    goto LAB_14316d170;
  }
  else {
    local_90 = *(int *)(lVar7 + 0x70);
    uVar11 = *(ulonglong *)(lVar7 + 0x68);
LAB_14316d170:
    local_80 = &local_68;
    local_94 = (uint)uVar11;
  }
  local_b0 = *(undefined8 *)(*local_110 + 0x20);
  puStack_f0 = &local_b0;
  local_a8 = 1;
  local_a0 = 0;
  local_98 = local_114;
  local_8c = 1;
  local_84 = 0;
  local_e0 = *(undefined8 *)(plVar10[0x17] + 0x20);
  local_f8 = &local_e0;
  local_d8 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (ulonglong)((uint)bVar1 + iVar6);
  *param_7 = 0;
  *(int *)(param_7 + 1) = local_114;
  *(uint *)((longlong)param_7 + 0xc) = local_94;
  *(int *)(param_7 + 2) = local_90;
  *(undefined4 *)((longlong)param_7 + 0x14) = 1;
  *(uint *)(param_7 + 3) = uVar15;
  *(undefined4 *)((longlong)param_7 + 0x1c) = 0;
  local_108 = &param_8;
  uStack_100 = &local_50;
  local_e8 = &local_80;
  local_88 = uVar15;
  if (DAT_14ca85164 == '\x01') {
    FUN_143177bca(&local_108,&DAT_14ca85100);
  }
  else {
    puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar9 + 7;
    if (DAT_14ca85108 < puVar12) {
      FUN_140023dd8(&DAT_14ca85100,0x40);
      puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar12 = puVar9 + 7;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar12;
    *DAT_14ca85130 = puVar9;
    DAT_14ca85130 = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a34ff10;
    *(undefined4 *)(puVar9 + 2) = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar9 + 0x14) = local_108._4_4_;
    *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_100._4_4_;
    puVar9[4] = local_f8;
    puVar9[5] = puStack_f0;
    puVar9[6] = local_e8;
  }
  local_108 = (undefined4 *)0x0;
  uStack_100 = (longlong **)((ulonglong)uStack_100 & 0xffffffff00000000);
  FUN_14007658c(&DAT_14ca850c8,&local_108,5);
  (**(code **)(*DAT_14ca83900 + 0x370))();
LAB_14316d318:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14316d38d FUN_14316d38d body=22 status=ok
// SIG undefined FUN_14316d38d(void)

undefined4 FUN_14316d38d(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0x5d) {
    uVar1 = *(undefined4 *)(&DAT_14a350340 + (ulonglong)(param_1 - 1U) * 4);
  }
  return uVar1;
}



// FUNCTION 14316d3a4 FUN_14316d3a4 body=2406 status=ok
// SIG undefined FUN_14316d3a4(void)

void FUN_14316d3a4(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int *param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint **ppuVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_388 [32];
  ulonglong local_368;
  undefined8 local_360;
  undefined8 local_358;
  ulonglong local_350;
  undefined8 **local_348;
  undefined1 local_338;
  uint local_330;
  int local_32c;
  int local_328;
  undefined4 local_324;
  undefined8 local_320;
  longlong local_318;
  uint *local_310;
  longlong *local_308;
  ulonglong local_300;
  undefined8 *local_2f8;
  undefined8 uStack_2f0;
  uint *local_2e8;
  longlong **local_2e0;
  undefined1 *local_2d8;
  undefined4 *local_2d0;
  int *local_2c8;
  uint *local_2c0;
  int *local_2b8;
  uint *local_2b0;
  undefined8 **local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  int *local_290;
  undefined8 **local_288;
  uint local_27c;
  undefined8 local_278;
  undefined4 local_270;
  ulonglong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  uint local_230;
  uint local_22c;
  int local_228;
  undefined4 local_224;
  uint local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined8 uStack_210;
  undefined8 *local_208;
  undefined1 local_200 [44];
  undefined8 local_1d4;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  int local_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 *puStack_168;
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
  undefined1 local_108;
  undefined2 local_107;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e4;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_6c = param_5[6];
  uVar20 = (ulonglong)local_6c;
  local_310 = *(uint **)(**(longlong **)(param_1 + 0x1b0) + 2000 + uVar20 * 8);
  local_320 = *(undefined8 *)(local_310 + 4);
  local_330 = *local_310;
  local_68 = param_2;
  if (param_2 != (longlong *)0x0) {
    lVar10 = (**(code **)(*param_2 + 8))(param_2);
    if ((*(byte *)(lVar10 + 2) & 4) != 0) {
      param_2 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar10 = (**(code **)(*param_2 + 0x30))(param_2);
    if (lVar10 != 0) {
      local_308 = *(longlong **)(lVar10 + 0x128 + uVar20 * 8);
      goto LAB_14316d45b;
    }
  }
  local_308 = (longlong *)0x0;
LAB_14316d45b:
  local_32c = *param_3;
  local_328 = param_3[2];
  local_70 = local_328 - local_32c;
  uVar13 = (ulonglong)local_70;
  iVar9 = param_3[1];
  iVar19 = param_3[3];
  iVar15 = iVar19 - iVar9;
  lVar10 = local_308[0x17];
  local_324 = *(undefined4 *)(lVar10 + 0x78);
  local_74 = iVar15;
  iVar8 = FUN_14316d38d();
  uVar5 = *(uint *)(lVar10 + 0x7c);
  uVar20 = (ulonglong)uVar5;
  local_8c = local_32c;
  local_80 = local_328;
  local_78 = 1;
  local_84 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a0 = 0;
  local_c8 = 3;
  uStack_b0 = CONCAT44(0x10001,iVar15);
  _local_a8 = CONCAT44(1,local_324);
  local_98 = 1;
  local_348 = &local_d0;
  local_d8 = 1;
  if (DAT_14ca81480 == 0) {
    local_d8 = local_330;
  }
  local_d0 = (undefined8 *)0x0;
  local_e4 = 1;
  local_dc = 0;
  uStack_140 = 0;
  local_178 = 3;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_160 = uStack_b0;
  local_158 = CONCAT44(1,local_324);
  uStack_150 = 0;
  local_148 = 1;
  local_350 = 0;
  local_360 = (undefined8 **)((ulonglong)local_360._4_4_ << 0x20);
  local_338 = 1;
  local_358 = CONCAT44(local_358._4_4_,0x7fffffff);
  local_368 = CONCAT44(local_368._4_4_,4);
  local_318 = lVar10;
  puStack_168 = (undefined1 *)uVar13;
  local_d4 = local_d8;
  local_b8 = uVar13;
  local_88 = iVar9;
  local_7c = iVar19;
  iVar9 = FUN_140a6e850(local_320);
  if (iVar9 < 0) {
    local_360 = (undefined8 **)&local_f8;
    local_f8 = 0;
    uStack_f0 = 0;
    local_368 = 0;
    FUN_145763094(iVar9,
                  "Adapter->CreateCommittedResource(NonMSAADesc, NodeMask, HeapProps, D3D12_RESOURCE_STATE_RENDER_TARGET, nullptr, NonMSAATexture2D.GetInitReference(), nullptr)"
                  ,".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x2bd);
  }
  puVar6 = local_310;
  local_178 = SUB84(local_310,0);
  uStack_174 = (undefined4)((ulonglong)local_310 >> 0x20);
  uStack_170 = 0;
  uStack_16c = 0;
  puStack_168 = (undefined1 *)0x0;
  uStack_160 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_107 = 0xff;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_368 = 0;
  FUN_1400daf10(&local_178,local_d0,0,0);
  uStack_188 = 0;
  uStack_180 = 0;
  if (local_a8 == 0x1b) {
    local_190 = 0x1c;
  }
  else {
    local_190 = local_a8;
    if (local_a8 == 0x5a) {
      local_190 = 0x57;
    }
  }
  uStack_18c = 4;
  FUN_1456cd742(local_200,puVar6,0);
  local_2e8 = (uint *)0x0;
  local_2d8 = puStack_168;
  local_1a8 = local_190;
  uStack_1a4 = uStack_18c;
  uStack_1a0 = (undefined4)uStack_188;
  uStack_19c = uStack_188._4_4_;
  local_198 = uStack_180;
  local_2e0 = (longlong **)&local_178;
  FUN_1400db59c(&local_248,&local_190);
  local_1d4 = local_248;
  FUN_1447f03f2(local_200,&local_2e8,0x10);
  local_208 = (undefined8 *)0x0;
  uVar21 = *(uint *)(local_318 + 0x78);
  uVar22 = 0x27;
  if ((uVar21 != 0x13) && (uVar21 != 0x2c)) {
    uVar22 = uVar21;
  }
  iVar9 = FUN_14316d38d(uVar22);
  uVar21 = iVar9 * local_70 + 0xff & 0xffffff00;
  local_368 = (ulonglong)(local_74 * uVar21);
  local_350 = local_350 & 0xffffffff00000000;
  local_358 = 0;
  local_360 = &local_208;
  iVar9 = FUN_14631a284(local_320,3,local_330,local_330);
  if (iVar9 < 0) {
    local_360 = &local_218;
    local_218 = (undefined8 *)0x0;
    uStack_210 = 0;
    local_368 = 0;
    FUN_145763094(iVar9,
                  "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, NodeMask, NodeMask, MipBytesAligned, StagingTexture2D.GetInitReference(), nullptr)"
                  ,".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x2d6);
  }
  plVar7 = local_308;
  lVar10 = (**(code **)(*local_308 + 8))(local_308);
  if ((byte)(*(char *)(lVar10 + 0x32) - 3U) < 2) {
    iVar9 = 0;
    if (*param_5 - 1U < 5) {
      iVar9 = *param_5;
    }
    local_330 = uVar22;
    lVar10 = (**(code **)(*local_68 + 8))();
    iVar9 = (iVar9 + param_5[5] * 6) * (uint)*(byte *)(lVar10 + 0x30);
    bVar2 = *(byte *)((longlong)param_5 + 0x11);
    uVar22 = local_330;
  }
  else {
    lVar10 = (**(code **)(*plVar7 + 8))(plVar7);
    cVar3 = *(char *)(lVar10 + 0x32);
    lVar10 = (**(code **)(*local_68 + 8))();
    if ((cVar3 == '\x04') || (iVar9 = 0, cVar3 == '\x01')) {
      iVar9 = param_5[5];
    }
    iVar9 = iVar9 * (uint)*(byte *)(lVar10 + 0x30);
    bVar2 = *(byte *)((longlong)param_5 + 0x11);
  }
  local_248 = local_208[4];
  local_240 = 1;
  local_238 = 0;
  local_22c = local_70;
  local_228 = local_74;
  local_224 = 1;
  local_21c = 0;
  local_278 = local_d0[4];
  local_270 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = (ulonglong)((uint)bVar2 + iVar9);
  local_230 = uVar22;
  local_220 = uVar21;
  FUN_140393c76(param_4,local_74 * local_70 * uVar5 * iVar8,
                CONCAT71((int7)((ulonglong)local_278 >> 8),1));
  local_27c = 0;
  if (uVar5 != 0) {
    local_330 = uVar21;
    local_300 = uVar20;
    do {
      local_2e8 = &local_6c;
      local_2e0 = &local_68;
      local_2d8 = local_200;
      local_2d0 = &local_c8;
      local_2c8 = param_3;
      local_2c0 = &local_70;
      local_2b8 = &local_74;
      local_2b0 = &local_27c;
      local_2a8 = &local_d0;
      local_2a0 = &local_278;
      local_298 = &local_248;
      local_290 = &local_8c;
      local_288 = &local_208;
      if (DAT_14ca85164 == '\x01') {
        FUN_143177d64(&local_2e8,&DAT_14ca85100);
      }
      else {
        puVar16 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar16 + 0xf;
        if (DAT_14ca85108 < puVar11) {
          FUN_140023dd8(&DAT_14ca85100,0x80);
          puVar16 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar11 = puVar16 + 0xf;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar11;
        *DAT_14ca85130 = puVar16;
        DAT_14ca85130 = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_14a34ff20;
        ppuVar14 = &local_2e8;
        puVar11 = puVar16 + 2;
        for (lVar10 = 0xd; uVar20 = local_300, lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar11 = *ppuVar14;
          ppuVar14 = ppuVar14 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      local_2e8 = (uint *)0x0;
      local_2e0 = (longlong **)((ulonglong)local_2e0 & 0xffffffff00000000);
      FUN_14007658c(&DAT_14ca850c8,&local_2e8,5);
      (**(code **)(*DAT_14ca83900 + 0x370))();
      iVar9 = (**(code **)(*(longlong *)local_208[4] + 0x40))
                        ((longlong *)local_208[4],0,0,&local_2e8);
      if (iVar9 < 0) {
        local_2f8 = (undefined8 *)0x0;
        uStack_2f0 = 0;
        local_360 = &local_2f8;
        local_368 = 0;
        FUN_145763094(iVar9,"StagingTexture2D->GetResource()->Map(0, nullptr, &pData)",
                      ".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x31d);
      }
      iVar9 = param_3[1];
      iVar19 = param_3[3];
      if (iVar9 < iVar19) {
        iVar15 = param_3[2];
        do {
          iVar12 = *param_3;
          if (iVar12 < iVar15) {
            puVar17 = (undefined1 *)
                      ((longlong)
                       (int)(((iVar9 - param_3[1]) * (uint)uVar20 * local_70 + local_27c) * iVar8) +
                      *param_4);
            puVar18 = (undefined1 *)
                      ((longlong)local_2e8 +
                      (ulonglong)(uint)(iVar12 * iVar8) +
                      (ulonglong)((iVar9 - param_3[1]) * local_330));
            do {
              iVar19 = iVar8;
              if (iVar8 != 0) {
                do {
                  uVar4 = *puVar18;
                  puVar18 = puVar18 + 1;
                  *puVar17 = uVar4;
                  puVar17 = puVar17 + 1;
                  iVar19 = iVar19 + -1;
                } while (iVar19 != 0);
                iVar15 = param_3[2];
              }
              puVar17 = puVar17 + (uVar5 - 1) * iVar8;
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar15);
            iVar19 = param_3[3];
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar19);
      }
      (**(code **)(*(longlong *)local_208[4] + 0x48))((longlong *)local_208[4],0,0);
      local_27c = local_27c + 1;
    } while (local_27c < (uint)uVar20);
  }
  if (local_208 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_208 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_208)(local_208,1);
    }
  }
  FUN_1448470d8(local_200);
  FUN_1456d02da(&local_178);
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_d0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14316dd0c FUN_14316dd0c body=7848 status=ok
// SIG undefined FUN_14316dd0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14316dd0c(undefined8 param_1,longlong *param_2,int *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  void *pvVar28;
  void *pvVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float *pfVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  ulonglong uVar41;
  uint uVar42;
  float fVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  longlong *plVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  bool bVar52;
  undefined4 uVar53;
  undefined4 uVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar72;
  undefined1 in_XMM3 [16];
  undefined1 auVar73 [16];
  double dVar75;
  double dVar76;
  undefined1 in_XMM4 [16];
  double dVar78;
  undefined1 auVar79 [16];
  double dVar81;
  double dVar82;
  undefined1 auVar84 [16];
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar119;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar131 [16];
  float fVar132;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  uint local_1c4;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  void *local_1a8;
  uint local_19c;
  ulonglong local_198;
  void *local_190;
  longlong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [12];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [12];
  void *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  undefined1 auVar62 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar77 [16];
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  undefined1 auVar130 [16];
  undefined1 auVar135 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((param_3[2] - *param_3 == 0) || (param_3[3] - param_3[1] == 0)) {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1f8);
    }
    goto LAB_14316ddc4;
  }
  if (param_2 == (longlong *)0x0) {
    FUN_14735b34c(param_4,(param_3[3] - param_3[1]) * (param_3[2] - *param_3),1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1f8);
  }
  uVar40 = *(uint *)(param_5 + 3);
  local_108 = (void *)0x0;
  uStack_100 = 0;
  lVar31 = (**(code **)(*param_2 + 8))(param_2);
  if (((*(byte *)(lVar31 + 2) & 4) == 0) ||
     (param_2 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0), param_2 != (longlong *)0x0)) {
    lVar31 = (**(code **)(*param_2 + 8))(param_2);
    if ((*(byte *)(lVar31 + 2) & 4) != 0) {
      param_2 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar31 = (**(code **)(*param_2 + 0x30))(param_2);
    if (lVar31 == 0) goto LAB_14316dfdf;
    plVar48 = *(longlong **)(lVar31 + 0x128 + (ulonglong)uVar40 * 8);
  }
  else {
LAB_14316dfdf:
    plVar48 = (longlong *)0x0;
  }
  lVar31 = plVar48[0x17];
  if (*(int *)(lVar31 + 0x7c) == 1) {
    local_128 = *param_5;
    local_1d8 = &local_128;
    auStack_118 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_120 = (undefined4)param_5[1];
    uStack_11c = (undefined4)((ulonglong)param_5[1] >> 0x20);
    local_138 = *(undefined8 *)param_3;
    local_130 = *(undefined8 *)(param_3 + 2);
    FUN_14737dbe4(param_1,plVar48);
  }
  else {
    local_158 = *param_5;
    local_1d8 = &local_158;
    auStack_148 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_150 = (undefined4)param_5[1];
    uStack_14c = (undefined4)((ulonglong)param_5[1] >> 0x20);
    local_168 = *(undefined8 *)param_3;
    local_160 = *(undefined8 *)(param_3 + 2);
    FUN_14316d3a4(param_1,plVar48);
  }
  iVar7 = param_3[2];
  iVar8 = *param_3;
  local_19c = *(uint *)(lVar31 + 0x7c);
  uVar42 = (iVar7 - iVar8) * local_19c;
  uVar44 = (ulonglong)uVar42;
  local_1c0 = CONCAT44(local_1c0._4_4_,param_3[3]);
  local_1b0 = CONCAT44(local_1b0._4_4_,param_3[1]);
  uVar40 = param_3[3] - param_3[1];
  FUN_14735b34c(param_4,uVar40 * uVar42,1);
  lVar32 = (**(code **)(*plVar48 + 8))(plVar48);
  pvVar29 = local_108;
  pvVar28 = local_190;
  auVar67 = _DAT_149e1a210;
  auVar95 = _DAT_149e1a200;
  auVar56 = _DAT_1499378f0;
  uVar41 = (ulonglong)((uint)*(byte *)(lVar32 + 0x33) * 0x30);
  iVar9 = *(int *)((longlong)&DAT_14c873428 + uVar41);
  iVar30 = *(int *)(lVar31 + 0x78);
  if (iVar30 == 0) {
    iVar30 = *(int *)((longlong)&DAT_14c873434 + uVar41);
  }
  local_1c4 = iVar9 * uVar42;
  bVar1 = *(byte *)(param_5 + 1);
  local_198 = CONCAT71(local_198._1_7_,bVar1);
  fVar39 = *(float *)((longlong)param_5 + 0xc);
  local_1a8 = (void *)*param_4;
  local_1b8 = uVar44;
  if (iVar30 < 0x23) {
    local_190 = local_108;
    switch(iVar30) {
    case 10:
      bVar52 = (int)local_1c0 != (int)local_1b0;
      if (bVar52) {
        local_180 = (ulonglong)uVar40;
        dVar60 = 1.0;
        dVar97 = 1.0;
        dVar65 = 1.0;
        dVar75 = 1.0;
        auVar71 = ZEXT816(0);
        auVar74 = ZEXT816(0);
        auVar80 = ZEXT816(0);
        uVar41 = 0;
        uVar45 = 0;
        auVar54 = ZEXT816(0);
        do {
          local_178 = uVar45;
          local_170 = uVar41;
          auVar62 = auVar54;
          if (uVar42 != 0) {
            local_188 = local_170 + (longlong)local_108;
            lVar31 = 0;
            uVar53 = auVar71._0_4_;
            unaff_XMM15_Db = auVar71._4_4_;
            auVar56 = auVar71;
            unaff_XMM13 = auVar80;
            unaff_XMM14 = auVar74;
            dVar81 = dVar75;
            dVar85 = dVar65;
            dVar82 = dVar97;
            dVar76 = dVar60;
            do {
              uVar3 = *(ushort *)(local_188 + lVar31 * 8);
              uVar33 = (uint)uVar3 << 0xd;
              uVar40 = uVar33 & 0xf800000;
              if (uVar40 == 0xf800000) {
                fVar39 = (float)(uVar33 | 0x70000000);
              }
              else if (uVar40 == 0) {
                fVar39 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar39 = (float)((uVar33 & 0xfffe000) + 0x38000000);
              }
              uVar4 = *(ushort *)(local_188 + 2 + lVar31 * 8);
              uVar38 = (uint)uVar4 << 0xd;
              uVar37 = uVar38 & 0xf800000;
              if (uVar37 == 0xf800000) {
                fVar88 = (float)(uVar38 | 0x70000000);
              }
              else if (uVar37 == 0) {
                fVar88 = (float)(uVar38 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar88 = (float)((uVar38 & 0xfffe000) + 0x38000000);
              }
              uVar5 = *(ushort *)(local_188 + 4 + lVar31 * 8);
              uVar51 = (uint)uVar5 << 0xd;
              uVar50 = uVar51 & 0xf800000;
              if (uVar50 == 0xf800000) {
                fVar119 = (float)(uVar51 | 0x70000000);
              }
              else if (uVar50 == 0) {
                fVar119 = (float)(uVar51 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar119 = (float)((uVar51 & 0xfffe000) + 0x38000000);
              }
              uVar6 = *(ushort *)(local_188 + 6 + lVar31 * 8);
              uVar34 = (uint)uVar6 << 0xd;
              uVar49 = uVar34 & 0xf800000;
              if (uVar49 == 0xf800000) {
                fVar132 = (float)(uVar34 | 0x70000000);
              }
              else if (uVar49 == 0) {
                fVar132 = (float)(uVar34 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar132 = (float)((uVar34 & 0xfffe000) + 0x38000000);
              }
              if (uVar40 == 0xf800000) {
                fVar47 = (float)(uVar33 | 0x70000000);
              }
              else if (uVar40 == 0) {
                fVar47 = (float)(uVar33 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar47 = (float)((uVar33 & 0xfffe000) + 0x38000000);
              }
              if (uVar37 == 0xf800000) {
                fVar46 = (float)(uVar38 | 0x70000000);
              }
              else if (uVar37 == 0) {
                fVar46 = (float)(uVar38 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar46 = (float)((uVar38 & 0xfffe000) + 0x38000000);
              }
              if (uVar50 == 0xf800000) {
                fVar43 = (float)(uVar51 | 0x70000000);
              }
              else if (uVar50 == 0) {
                fVar43 = (float)(uVar51 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar43 = (float)((uVar51 & 0xfffe000) + 0x38000000);
              }
              if (uVar49 == 0xf800000) {
                fVar35 = (float)(uVar34 | 0x70000000);
              }
              else if (uVar49 == 0) {
                fVar35 = (float)(uVar34 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar35 = (float)((uVar34 & 0xfffe000) + 0x38000000);
              }
              uVar40 = (int)(short)uVar3 & 0x80000000;
              dVar61 = (double)(float)((uint)fVar39 | uVar40);
              if (auVar54._0_8_ <= dVar61) {
                dVar61 = auVar54._0_8_;
              }
              auVar62._8_8_ = 0;
              auVar62._0_8_ = dVar61;
              uVar33 = (int)(short)uVar4 & 0x80000000;
              auVar71._8_8_ = auVar56._8_8_;
              dVar66 = (double)(float)((uint)fVar88 | uVar33);
              if ((double)CONCAT44(unaff_XMM15_Db,uVar53) <= dVar66) {
                dVar66 = (double)CONCAT44(unaff_XMM15_Db,uVar53);
              }
              auVar71._0_8_ = dVar66;
              uVar37 = (int)(short)uVar5 & 0x80000000;
              auVar74._8_8_ = unaff_XMM14._8_8_;
              dVar72 = (double)(float)((uint)fVar119 | uVar37);
              if (unaff_XMM14._0_8_ <= dVar72) {
                dVar72 = unaff_XMM14._0_8_;
              }
              auVar74._0_8_ = dVar72;
              uVar38 = (int)(short)uVar6 & 0x80000000;
              auVar80._8_8_ = unaff_XMM13._8_8_;
              dVar78 = (double)(float)((uint)fVar132 | uVar38);
              if (unaff_XMM13._0_8_ <= dVar78) {
                dVar78 = unaff_XMM13._0_8_;
              }
              auVar80._0_8_ = dVar78;
              dVar60 = (double)(float)((uint)fVar47 | uVar40);
              if (dVar60 <= dVar76) {
                dVar60 = dVar76;
              }
              dVar97 = (double)(float)((uint)fVar46 | uVar33);
              if (dVar97 <= dVar82) {
                dVar97 = dVar82;
              }
              dVar65 = (double)(float)((uint)fVar43 | uVar37);
              if (dVar65 <= dVar85) {
                dVar65 = dVar85;
              }
              dVar75 = (double)(float)(uVar38 | (uint)fVar35);
              if (dVar75 <= dVar81) {
                dVar75 = dVar81;
              }
              lVar31 = lVar31 + 1;
              auVar54._8_8_ = 0;
              auVar54._0_8_ = dVar61;
              uVar53 = SUB84(dVar66,0);
              unaff_XMM15_Db = (undefined4)((ulonglong)dVar66 >> 0x20);
              unaff_XMM15_Dc = auVar56._8_4_;
              unaff_XMM15_Dd = auVar56._12_4_;
              unaff_XMM14._8_8_ = auVar74._8_8_;
              unaff_XMM14._0_8_ = dVar72;
              unaff_XMM13._8_8_ = auVar80._8_8_;
              unaff_XMM13._0_8_ = dVar78;
              auVar56 = auVar71;
              dVar81 = dVar75;
              dVar85 = dVar65;
              dVar82 = dVar97;
              dVar76 = dVar60;
            } while (uVar42 != (uint)lVar31);
          }
          uVar41 = (ulonglong)((int)local_170 + local_1c4);
          uVar45 = local_178 + 1;
          auVar54 = auVar62;
        } while (local_178 + 1 != local_180);
        local_190 = (void *)((longlong)local_108 + 6);
        local_1c0 = 0;
        local_19c = 0;
        uVar41 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              uVar3 = *(ushort *)((longlong)local_190 + lVar31 * 8 + local_1c0);
              uVar40 = (uint)uVar3 << 0xd;
              if ((uVar40 & 0xf800000) == 0xf800000) {
                fVar39 = (float)(uVar40 | 0x70000000);
              }
              else if ((uVar40 & 0xf800000) == 0) {
                fVar39 = (float)(uVar40 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar39 = (float)((uVar40 & 0xfffe000) + 0x38000000);
              }
              uVar4 = *(ushort *)((longlong)local_190 + lVar31 * 8 + (local_1c0 - 2));
              uVar40 = (uint)uVar4 << 0xd;
              if ((uVar40 & 0xf800000) == 0xf800000) {
                fVar88 = (float)(uVar40 | 0x70000000);
              }
              else if ((uVar40 & 0xf800000) == 0) {
                fVar88 = (float)(uVar40 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar88 = (float)((uVar40 & 0xfffe000) + 0x38000000);
              }
              uVar5 = *(ushort *)((longlong)local_190 + lVar31 * 8 + (local_1c0 - 4));
              uVar40 = (uint)uVar5 << 0xd;
              if ((uVar40 & 0xf800000) == 0xf800000) {
                fVar119 = (float)(uVar40 | 0x70000000);
              }
              else if ((uVar40 & 0xf800000) == 0) {
                fVar119 = (float)(uVar40 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar119 = (float)((uVar40 & 0xfffe000) + 0x38000000);
              }
              uVar6 = *(ushort *)((longlong)local_190 + lVar31 * 8 + (local_1c0 - 6));
              uVar40 = (uint)uVar6 << 0xd;
              if ((uVar40 & 0xf800000) == 0xf800000) {
                fVar132 = (float)(uVar40 | 0x70000000);
              }
              else if ((uVar40 & 0xf800000) == 0) {
                fVar132 = (float)(uVar40 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar132 = (float)((uVar40 & 0xfffe000) + 0x38000000);
              }
              auVar128._4_12_ = unaff_XMM13._4_12_;
              auVar128._0_4_ =
                   (float)(((double)(float)((uint)fVar39 | (int)(short)uVar3 & 0x80000000U) -
                           auVar80._0_8_) / (dVar75 - auVar80._0_8_));
              auVar137._4_12_ = unaff_XMM14._4_12_;
              auVar137._0_4_ =
                   (float)(((double)(float)((uint)fVar88 | (int)(short)uVar4 & 0x80000000U) -
                           auVar74._0_8_) / (dVar65 - auVar74._0_8_));
              fVar39 = (float)(((double)(float)((uint)fVar119 | (int)(short)uVar5 & 0x80000000U) -
                               auVar71._0_8_) / (dVar97 - auVar71._0_8_));
              dVar81 = ((double)(float)((int)(short)uVar6 & 0x80000000U | (uint)fVar132) -
                       auVar62._0_8_) / (dVar60 - auVar62._0_8_);
              uVar40 = (uint)((ulonglong)dVar81 >> 0x20);
              auVar55._0_4_ = (float)dVar81;
              auVar55._4_4_ = uVar40;
              auVar55._8_8_ = 0;
              if ((bVar1 & 1) == 0) {
                if (auVar128._0_4_ <= 0.0) {
                  auVar25._12_4_ = 0;
                  auVar25._0_12_ = auVar128._4_12_;
                  auVar128 = auVar25 << 0x20;
                }
                if (1.0 <= auVar128._0_4_) {
                  auVar128._0_4_ = 1.0;
                }
                unaff_XMM13._4_12_ = auVar128._4_12_;
                unaff_XMM13._0_4_ = auVar128._0_4_ * 255.0 + 0.5;
                uVar33 = (uint)unaff_XMM13._0_4_;
                if (auVar137._0_4_ <= 0.0) {
                  auVar26._12_4_ = 0;
                  auVar26._0_12_ = auVar137._4_12_;
                  auVar137 = auVar26 << 0x20;
                }
                if (1.0 <= auVar137._0_4_) {
                  auVar137._0_4_ = 1.0;
                }
                unaff_XMM14._4_12_ = auVar137._4_12_;
                unaff_XMM14._0_4_ = auVar137._0_4_ * 255.0 + 0.5;
                uVar37 = (uint)unaff_XMM14._0_4_;
                if (fVar39 <= 0.0) {
                  fVar39 = 0.0;
                }
                if (1.0 <= fVar39) {
                  fVar39 = 1.0;
                }
                uVar38 = (uint)(fVar39 * 255.0 + 0.5);
                if (auVar55._0_4_ <= 0.0) {
                  auVar55 = ZEXT416(uVar40) << 0x20;
                }
                if (1.0 <= auVar55._0_4_) {
                  auVar55._0_4_ = 1.0;
                }
                uVar40 = (uint)(auVar55._0_4_ * 255.0 + 0.5);
              }
              else {
                auVar15._4_4_ = unaff_XMM15_Db;
                auVar15._0_4_ = fVar39;
                auVar15._8_4_ = unaff_XMM15_Dc;
                auVar15._12_4_ = unaff_XMM15_Dd;
                auVar56 = insertps(auVar55,auVar15,0x10);
                auVar56 = insertps(auVar56,auVar137,0x20);
                auVar56 = insertps(auVar56,auVar128,0x30);
                auVar56 = maxps(auVar56,_DAT_149e1a200);
                auVar56 = minps(auVar56,_DAT_149e1a210);
                fVar39 = auVar56._0_4_;
                fVar88 = auVar56._4_4_;
                fVar119 = auVar56._8_4_;
                unaff_XMM14._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar88 + -0x39000000) >> 0x14) * 4);
                unaff_XMM14._0_4_ =
                     (float)*(undefined4 *)
                             (&DAT_149e1bee0 + (ulonglong)((int)fVar39 + 0xc7000000U >> 0x14) * 4);
                unaff_XMM14._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar119 + -0x39000000) >> 0x14) * 4);
                unaff_XMM14._12_4_ = 0;
                auVar129._0_4_ = (uint)fVar39 >> 0xc;
                auVar129._4_4_ = (uint)fVar88 >> 0xc;
                auVar129._8_4_ = (uint)fVar119 >> 0xc;
                auVar129._12_4_ = (uint)auVar56._12_4_ >> 0xc;
                auVar95 = pmaddwd(auVar129 & _DAT_1499d1ec0 | _DAT_1499378f0,unaff_XMM14);
                unaff_XMM13._0_4_ = (float)(auVar95._0_4_ >> 0x10);
                unaff_XMM13._4_4_ = auVar95._4_4_ >> 0x10;
                unaff_XMM13._8_4_ = auVar95._8_4_ >> 0x10;
                unaff_XMM13._12_4_ = auVar95._12_4_ >> 0x10;
                auVar57._0_4_ = (int)(fVar39 * 0.0 + 0.5);
                auVar57._4_4_ = (int)(fVar88 * 0.0 + 0.5);
                auVar57._8_4_ = (int)(fVar119 * 0.0 + 0.5);
                auVar57._12_4_ = (int)(auVar56._12_4_ * 255.0 + 0.5);
                auVar57 = auVar57 | unaff_XMM13;
                auVar58._4_4_ = auVar57._4_4_;
                auVar58._12_4_ = auVar57._12_4_;
                auVar58._0_4_ = auVar57._8_4_;
                auVar58._8_4_ = auVar57._0_4_;
                auVar56 = packssdw(auVar58,auVar58);
                sVar10 = auVar56._0_2_;
                sVar11 = auVar56._2_2_;
                sVar12 = auVar56._4_2_;
                sVar13 = auVar56._6_2_;
                bVar2 = (0 < sVar13) * (sVar13 < 0x100) * auVar56[6] - (0xff < sVar13);
                uVar37 = CONCAT13(bVar2,CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar56[4] -
                                                 (0xff < sVar12),
                                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                                          auVar56[2] - (0xff < sVar11),
                                                          (0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar56[0] - (0xff < sVar10))));
                uVar38 = uVar37 >> 8;
                uVar40 = uVar37 >> 0x10;
                uVar33 = (uint)bVar2;
              }
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + (ulonglong)local_19c * 4) =
                   uVar37 & 0xff | (uVar38 & 0xff) << 8 | (uVar40 & 0xff) << 0x10 | uVar33 << 0x18;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar41 = uVar41 + 1;
          local_19c = local_19c + uVar42;
          local_1c0 = (ulonglong)((int)local_1c0 + local_1c4);
          local_1b0 = uVar44;
        } while (uVar41 != local_180);
      }
      break;
    case 0xb:
      bVar52 = (int)local_1c0 != (int)local_1b0;
      if (bVar52) {
        uVar41 = 0;
        auVar90 = pmovzxbd(in_XMM4,0xffffffff);
        uVar44 = 0;
        uVar45 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              fVar39 = (float)*(ushort *)((longlong)local_108 + lVar31 * 8 + uVar41 + 6) *
                       1.5259022e-05;
              fVar132 = (float)*(ushort *)((longlong)local_108 + lVar31 * 8 + uVar41 + 4) *
                        1.5259022e-05;
              auVar135 = ZEXT416((uint)fVar132);
              fVar119 = (float)*(ushort *)((longlong)local_108 + lVar31 * 8 + uVar41 + 2) *
                        1.5259022e-05;
              auVar125 = ZEXT416((uint)fVar119);
              fVar88 = (float)*(ushort *)((longlong)local_108 + lVar31 * 8 + uVar41) * 1.5259022e-05
              ;
              auVar113 = ZEXT416((uint)fVar88);
              if ((bVar1 & 1) == 0) {
                if (fVar39 <= 0.0) {
                  fVar39 = 0.0;
                }
                if (1.0 <= fVar39) {
                  fVar39 = 1.0;
                }
                uVar33 = (uint)(fVar39 * 255.0 + 0.5);
                if (fVar132 <= 0.0) {
                  auVar135._12_4_ = 0;
                  auVar135._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar135._0_4_) {
                  auVar135._0_4_ = 0x3f800000;
                }
                uVar37 = (uint)(auVar135._0_4_ * 255.0 + 0.5);
                if (fVar119 <= 0.0) {
                  auVar125._12_4_ = 0;
                  auVar125._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar125._0_4_) {
                  auVar125._0_4_ = 0x3f800000;
                }
                uVar38 = (uint)(auVar125._0_4_ * 255.0 + 0.5);
                if (fVar88 <= 0.0) {
                  auVar113._12_4_ = 0;
                  auVar113._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar113._0_4_) {
                  auVar113._0_4_ = 0x3f800000;
                }
                uVar51 = (uint)(auVar113._0_4_ * 255.0 + 0.5);
              }
              else {
                auVar104 = insertps(auVar113,auVar125,0x10);
                auVar104 = insertps(auVar104,auVar135,0x20);
                auVar104 = insertps(auVar104,ZEXT416((uint)fVar39),0x30);
                auVar104 = maxps(auVar104,auVar95);
                auVar104 = minps(auVar104,auVar67);
                fVar39 = auVar104._0_4_;
                fVar88 = auVar104._4_4_;
                fVar119 = auVar104._8_4_;
                auVar136._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar88 + -0x39000000) >> 0x14) * 4);
                auVar136._0_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 + (ulonglong)((int)fVar39 + 0xc7000000U >> 0x14) * 4);
                auVar136._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar119 + -0x39000000) >> 0x14) * 4);
                auVar136._12_4_ = 0;
                auVar126._0_4_ = (uint)fVar39 >> 0xc;
                auVar126._4_4_ = (uint)fVar88 >> 0xc;
                auVar126._8_4_ = (uint)fVar119 >> 0xc;
                auVar126._12_4_ = (uint)auVar104._12_4_ >> 0xc;
                auVar117 = pmaddwd(auVar126 & auVar90 | auVar56,auVar136);
                auVar127._0_4_ = auVar117._0_4_ >> 0x10;
                auVar127._4_4_ = auVar117._4_4_ >> 0x10;
                auVar127._8_4_ = auVar117._8_4_ >> 0x10;
                auVar127._12_4_ = auVar117._12_4_ >> 0x10;
                auVar114._0_4_ = (int)(fVar39 * 0.0 + 0.5);
                auVar114._4_4_ = (int)(fVar88 * 0.0 + 0.5);
                auVar114._8_4_ = (int)(fVar119 * 0.0 + 0.5);
                auVar114._12_4_ = (int)(auVar104._12_4_ * 255.0 + 0.5);
                auVar114 = auVar114 | auVar127;
                auVar115._4_4_ = auVar114._4_4_;
                auVar115._12_4_ = auVar114._12_4_;
                auVar115._0_4_ = auVar114._8_4_;
                auVar115._8_4_ = auVar114._0_4_;
                auVar104 = packssdw(auVar115,auVar115);
                sVar10 = auVar104._0_2_;
                sVar11 = auVar104._2_2_;
                sVar12 = auVar104._4_2_;
                sVar13 = auVar104._6_2_;
                bVar2 = (0 < sVar13) * (sVar13 < 0x100) * auVar104[6] - (0xff < sVar13);
                uVar37 = CONCAT13(bVar2,CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar104[4] -
                                                 (0xff < sVar12),
                                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                                          auVar104[2] - (0xff < sVar11),
                                                          (0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar104[0] - (0xff < sVar10))));
                uVar38 = uVar37 >> 8;
                uVar51 = uVar37 >> 0x10;
                uVar33 = (uint)bVar2;
              }
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar44 * 4) =
                   uVar37 & 0xff | (uVar38 & 0xff) << 8 | (uVar51 & 0xff) << 0x10 | uVar33 << 0x18;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar45 = uVar45 + 1;
          uVar44 = (ulonglong)((int)uVar44 + uVar42);
          uVar41 = (ulonglong)((int)uVar41 + local_1c4);
        } while (uVar45 != uVar40);
      }
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
switchD_14316e1fc_caseD_c:
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0) {
        FUN_146971392(param_4,0);
      }
      break;
    case 0x13:
      bVar52 = (int)local_1c0 != (int)local_1b0;
      if (bVar52) {
        uVar41 = 0;
        auVar95 = pmovzxbd(unaff_XMM9,0xffffffff);
        uVar33 = 0;
        uVar44 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              fVar88 = *(float *)((longlong)local_108 + lVar31 * 4 + uVar41);
              if (1.0 <= fVar88) {
                fVar88 = 1.0;
              }
              fVar88 = ABS((1.0 / (fVar88 * 0.1 + -0.1)) / fVar39);
              auVar63 = ZEXT416((uint)fVar88);
              if (1.0 <= fVar88) {
                auVar63._4_12_ = ZEXT812(0);
                auVar63._0_4_ = 0x3f800000;
              }
              if ((bVar1 & 1) == 0) {
                if (auVar63._0_4_ <= 0.0) {
                  auVar27._12_4_ = 0;
                  auVar27._0_12_ = auVar63._4_12_;
                  auVar63 = auVar27 << 0x20;
                }
                if (1.0 <= auVar63._0_4_) {
                  auVar63._0_4_ = 0x3f800000;
                }
                uVar51 = (uint)(auVar63._0_4_ * 255.0 + 0.5);
                uVar50 = 0;
                uVar37 = uVar51;
                uVar38 = uVar51;
              }
              else {
                auVar67 = pshufb(auVar63,_DAT_149f5d880);
                auVar67 = maxps(auVar67,_DAT_149e1a200);
                auVar67 = minps(auVar67,_DAT_149e1a210);
                fVar88 = auVar67._0_4_;
                fVar119 = auVar67._4_4_;
                fVar132 = auVar67._8_4_;
                auVar87._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar119 + -0x39000000) >> 0x14) * 4);
                auVar87._0_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 + (ulonglong)((int)fVar88 + 0xc7000000U >> 0x14) * 4);
                auVar87._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar132 + -0x39000000) >> 0x14) * 4);
                auVar87._12_4_ = 0;
                auVar84._0_4_ = (uint)fVar88 >> 0xc;
                auVar84._4_4_ = (uint)fVar119 >> 0xc;
                auVar84._8_4_ = (uint)fVar132 >> 0xc;
                auVar84._12_4_ = (uint)auVar67._12_4_ >> 0xc;
                auVar90 = pmaddwd(auVar84 & auVar95 | auVar56,auVar87);
                auVar64._4_4_ = (int)(fVar119 * 0.0 + 0.5) | auVar90._4_4_ >> 0x10;
                auVar64._12_4_ = (int)(auVar67._12_4_ * 255.0 + 0.5) | auVar90._12_4_ >> 0x10;
                auVar64._0_4_ = (int)(fVar132 * 0.0 + 0.5) | auVar90._8_4_ >> 0x10;
                auVar64._8_4_ = (int)(fVar88 * 0.0 + 0.5) | auVar90._0_4_ >> 0x10;
                auVar67 = packssdw(auVar64,auVar64);
                sVar10 = auVar67._0_2_;
                sVar11 = auVar67._2_2_;
                sVar12 = auVar67._4_2_;
                sVar13 = auVar67._6_2_;
                bVar2 = (0 < sVar13) * (sVar13 < 0x100) * auVar67[6] - (0xff < sVar13);
                uVar51 = CONCAT13(bVar2,CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar67[4] -
                                                 (0xff < sVar12),
                                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                                          auVar67[2] - (0xff < sVar11),
                                                          (0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar67[0] - (0xff < sVar10))));
                uVar50 = (uint)bVar2 << 0x18;
                uVar37 = uVar51 >> 8;
                uVar38 = uVar51 >> 0x10;
              }
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + (ulonglong)uVar33 * 4) =
                   uVar51 & 0xff | (uVar37 & 0xff) << 8 | (uVar38 & 0xff) << 0x10 | uVar50;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar44 = uVar44 + 1;
          uVar33 = uVar33 + uVar42;
          uVar41 = (ulonglong)((int)uVar41 + local_1c4);
        } while (uVar44 != uVar40);
      }
      break;
    case 0x18:
      bVar52 = (int)local_1c0 != (int)local_1b0;
      if (bVar52) {
        local_198 = (ulonglong)uVar40;
        uVar40 = 0;
        uVar44 = 0;
        uVar41 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              uVar33 = *(uint *)((longlong)local_108 + lVar31 * 4 + (ulonglong)uVar40);
              iVar7 = (uVar33 >> 0x14 & 0x3ff) * 0xff;
              iVar8 = (uVar33 >> 10 & 0x3ff) * 0xff;
              iVar9 = (uVar33 & 0x3ff) * 0xff;
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar44 * 4) =
                   (iVar8 + (iVar8 + 0x200U >> 10) + 0x200 >> 2 & 0xff00) +
                   (((iVar9 + 0x200U >> 10) + iVar9 + 0x200 & 0x3fc00) << 6 |
                    (uint)(byte)(&DAT_14a34fc90)[uVar33 >> 0x1e] << 0x18 |
                   (iVar7 + 0x200U >> 10) + iVar7 + 0x200 >> 10);
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar41 = uVar41 + 1;
          uVar44 = (ulonglong)((int)uVar44 + uVar42);
          uVar40 = uVar40 + local_1c4;
        } while (uVar41 != local_198);
      }
      break;
    case 0x1a:
      bVar52 = (int)local_1c0 != (int)local_1b0;
      if (bVar52) {
        uVar44 = 0;
        auVar90 = pmovzxbd(in_XMM3,0xffffffff);
        uVar45 = 0;
        uVar41 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              uVar33 = *(uint *)((longlong)local_108 + lVar31 * 4 + uVar44);
              uVar37 = uVar33 & 0x3f;
              uVar38 = uVar33 >> 6 & 0x1f;
              if (uVar38 == 0) {
                if (uVar37 == 0) {
                  uVar38 = 0xffffff90;
                  uVar37 = 0;
                }
                else {
                  uVar51 = 0x1f;
                  if (uVar37 != 0) {
                    for (; uVar37 >> uVar51 == 0; uVar51 = uVar51 - 1) {
                    }
                  }
                  uVar38 = (uVar51 ^ 0xffffffe0) + 0x1b;
                  uVar37 = uVar33 << (~(byte)uVar51 + 7 & 0x1f) & 0x3e;
                }
LAB_14316e9a2:
                fVar39 = (float)(uVar37 * 0x20000 + uVar38 * 0x800000 + 0x38000000);
              }
              else {
                if (uVar38 != 0x1f) goto LAB_14316e9a2;
                fVar39 = (float)(uVar37 << 0x11 | 0x7f800000);
              }
              uVar37 = uVar33 >> 0xb & 0x3f;
              uVar38 = uVar33 >> 0x11 & 0x1f;
              if (uVar38 == 0) {
                if (uVar37 == 0) {
                  uVar38 = 0xffffff90;
                  uVar37 = 0;
                }
                else {
                  uVar51 = 0x1f;
                  if (uVar37 != 0) {
                    for (; uVar37 >> uVar51 == 0; uVar51 = uVar51 - 1) {
                    }
                  }
                  uVar38 = (uVar51 ^ 0xffffffe0) + 0x1b;
                  uVar37 = (uVar33 >> 0xb) << (~(byte)uVar51 + 7 & 0x1f) & 0x3e;
                }
LAB_14316ea06:
                fVar88 = (float)(uVar37 * 0x20000 + uVar38 * 0x800000 + 0x38000000);
              }
              else {
                if (uVar38 != 0x1f) goto LAB_14316ea06;
                fVar88 = (float)(uVar37 << 0x11 | 0x7f800000);
              }
              uVar37 = uVar33 >> 0x16 & 0x1f;
              uVar38 = uVar33 >> 0x1b;
              if (uVar38 == 0x1f) {
                fVar119 = (float)(uVar37 << 0x11 | 0x7f800000);
              }
              else {
                if (uVar33 < 0x8000000) {
                  if (uVar37 == 0) {
                    uVar38 = 0xffffff90;
                    uVar37 = 0;
                  }
                  else {
                    uVar51 = 0x1f;
                    if (uVar37 != 0) {
                      for (; uVar37 >> uVar51 == 0; uVar51 = uVar51 - 1) {
                      }
                    }
                    uVar38 = (uVar51 ^ 0xffffffe0) + 0x1c;
                    uVar37 = (uVar33 >> 0x16) << (~(byte)uVar51 + 6 & 0x1f) & 0x1e;
                  }
                }
                fVar119 = (float)(uVar37 * 0x40000 + uVar38 * 0x800000 + 0x38000000);
              }
              auVar102 = ZEXT416((uint)fVar39);
              auVar111 = ZEXT416((uint)fVar88);
              auVar123 = ZEXT416((uint)fVar119);
              if ((bVar1 & 1) == 0) {
                if (fVar119 <= 0.0) {
                  auVar123 = ZEXT416(0);
                }
                if (1.0 <= auVar123._0_4_) {
                  auVar123._0_4_ = 0x3f800000;
                }
                uVar33 = (uint)(auVar123._0_4_ * 255.0 + 0.5);
                if (fVar88 <= 0.0) {
                  auVar111 = ZEXT416(0);
                }
                if (1.0 <= auVar111._0_4_) {
                  auVar111._0_4_ = 0x3f800000;
                }
                uVar37 = (uint)(auVar111._0_4_ * 255.0 + 0.5);
                if (fVar39 <= 0.0) {
                  auVar102 = ZEXT416(0);
                }
                if (1.0 <= auVar102._0_4_) {
                  auVar102._0_4_ = 0x3f800000;
                }
                uVar38 = (uint)(auVar102._0_4_ * 255.0 + 0.5);
                uVar51 = 0;
              }
              else {
                auVar104 = insertps(auVar102,auVar111,0x1c);
                auVar104 = insertps(auVar104,auVar123,0x28);
                auVar104 = maxps(auVar104,auVar95);
                auVar104 = minps(auVar104,auVar67);
                fVar39 = auVar104._0_4_;
                fVar88 = auVar104._4_4_;
                fVar119 = auVar104._8_4_;
                auVar124._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar88 + -0x39000000) >> 0x14) * 4);
                auVar124._0_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 + (ulonglong)((int)fVar39 + 0xc7000000U >> 0x14) * 4);
                auVar124._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar119 + -0x39000000) >> 0x14) * 4);
                auVar124._12_4_ = 0;
                auVar112._0_4_ = (uint)fVar39 >> 0xc;
                auVar112._4_4_ = (uint)fVar88 >> 0xc;
                auVar112._8_4_ = (uint)fVar119 >> 0xc;
                auVar112._12_4_ = (uint)auVar104._12_4_ >> 0xc;
                auVar117 = pmaddwd(auVar112 & auVar90 | auVar56,auVar124);
                auVar103._4_4_ = (int)(fVar88 * 0.0 + 0.5) | auVar117._4_4_ >> 0x10;
                auVar103._12_4_ = (int)(auVar104._12_4_ * 255.0 + 0.5) | auVar117._12_4_ >> 0x10;
                auVar103._0_4_ = (int)(fVar119 * 0.0 + 0.5) | auVar117._8_4_ >> 0x10;
                auVar103._8_4_ = (int)(fVar39 * 0.0 + 0.5) | auVar117._0_4_ >> 0x10;
                auVar104 = packssdw(auVar103,auVar103);
                sVar10 = auVar104._0_2_;
                sVar11 = auVar104._2_2_;
                sVar12 = auVar104._4_2_;
                sVar13 = auVar104._6_2_;
                bVar2 = (0 < sVar13) * (sVar13 < 0x100) * auVar104[6] - (0xff < sVar13);
                uVar33 = CONCAT13(bVar2,CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar104[4] -
                                                 (0xff < sVar12),
                                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                                          auVar104[2] - (0xff < sVar11),
                                                          (0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar104[0] - (0xff < sVar10))));
                uVar37 = uVar33 >> 8;
                uVar38 = uVar33 >> 0x10;
                uVar51 = (uint)bVar2 << 0x18;
              }
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar45 * 4) =
                   uVar33 & 0xff | (uVar37 & 0xff) << 8 | (uVar38 & 0xff) << 0x10 | uVar51;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar41 = uVar41 + 1;
          uVar45 = (ulonglong)((int)uVar45 + uVar42);
          uVar44 = (ulonglong)((int)uVar44 + local_1c4);
        } while (uVar41 != uVar40);
      }
      break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
      bVar52 = (int)local_1c0 != (int)local_1b0;
      if (bVar52) {
        uVar33 = 0;
        uVar41 = 0;
        uVar44 = 0;
        do {
          if (uVar42 != 0) {
            uVar45 = (ulonglong)uVar33;
            lVar31 = 0;
            do {
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar41 * 4) =
                   (uint)*(byte *)((longlong)local_108 + lVar31 * 4 + uVar45 + 1) << 8 |
                   (uint)*(byte *)((longlong)local_108 + lVar31 * 4 + uVar45 + 3) << 0x18 |
                   (uint)*(byte *)((longlong)local_108 + lVar31 * 4 + uVar45 + 2) |
                   (uint)*(byte *)((longlong)local_108 + lVar31 * 4 + uVar45) << 0x10;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar44 = uVar44 + 1;
          uVar41 = (ulonglong)((int)uVar41 + uVar42);
          uVar33 = uVar33 + local_1c4;
        } while (uVar44 != uVar40);
      }
      break;
    default:
      local_190 = pvVar28;
      if (iVar30 != 2) goto switchD_14316e1fc_caseD_c;
      bVar52 = (int)local_1c0 != (int)local_1b0;
      if (bVar52) {
        auVar56 = ZEXT816(0);
        auVar95 = ZEXT816(0x3ff0000000000000);
        uVar41 = 0;
        auVar70 = ZEXT816(0x3ff0000000000000);
        auVar77 = ZEXT816(0x3ff0000000000000);
        auVar83 = ZEXT816(0x3ff0000000000000);
        auVar73 = ZEXT816(0);
        auVar79 = ZEXT816(0);
        auVar86 = ZEXT816(0);
        do {
          if (uVar42 != 0) {
            pfVar36 = (float *)((ulonglong)(local_1c4 * (int)uVar41) + (longlong)local_108);
            uVar53 = auVar56._0_4_;
            uVar59 = auVar56._4_4_;
            uVar45 = uVar44;
            auVar92 = auVar95;
            auVar94 = auVar70;
            auVar96 = auVar77;
            auVar98 = auVar83;
            auVar107 = auVar86;
            auVar120 = auVar79;
            auVar133 = auVar73;
            do {
              dVar60 = (double)*pfVar36;
              dVar97 = dVar60;
              if ((double)CONCAT44(uVar59,uVar53) <= dVar60) {
                dVar97 = (double)CONCAT44(uVar59,uVar53);
              }
              auVar56._8_8_ = 0;
              auVar56._0_8_ = dVar97;
              dVar65 = (double)pfVar36[1];
              dVar75 = dVar65;
              if (auVar133._0_8_ <= dVar65) {
                dVar75 = auVar133._0_8_;
              }
              auVar22._8_4_ = 0;
              auVar22._0_8_ = dVar75;
              auVar73._12_4_ = 0;
              auVar73._0_12_ = auVar22;
              dVar75 = (double)pfVar36[2];
              dVar81 = dVar75;
              if (auVar120._0_8_ <= dVar75) {
                dVar81 = auVar120._0_8_;
              }
              auVar23._8_4_ = 0;
              auVar23._0_8_ = dVar81;
              auVar79._12_4_ = 0;
              auVar79._0_12_ = auVar23;
              dVar81 = (double)pfVar36[3];
              dVar85 = dVar81;
              if (auVar107._0_8_ <= dVar81) {
                dVar85 = auVar107._0_8_;
              }
              auVar24._8_4_ = 0;
              auVar24._0_8_ = dVar85;
              auVar86._12_4_ = 0;
              auVar86._0_12_ = auVar24;
              if (dVar60 <= auVar92._0_8_) {
                dVar60 = auVar92._0_8_;
              }
              auVar16._8_4_ = 0;
              auVar16._0_8_ = dVar60;
              auVar95._12_4_ = 0;
              auVar95._0_12_ = auVar16;
              if (dVar65 <= auVar94._0_8_) {
                dVar65 = auVar94._0_8_;
              }
              auVar17._8_4_ = 0;
              auVar17._0_8_ = dVar65;
              auVar70._12_4_ = 0;
              auVar70._0_12_ = auVar17;
              if (dVar75 <= auVar96._0_8_) {
                dVar75 = auVar96._0_8_;
              }
              auVar18._8_4_ = 0;
              auVar18._0_8_ = dVar75;
              auVar77._12_4_ = 0;
              auVar77._0_12_ = auVar18;
              if (dVar81 <= auVar98._0_8_) {
                dVar81 = auVar98._0_8_;
              }
              auVar19._8_4_ = 0;
              auVar19._0_8_ = dVar81;
              auVar83._12_4_ = 0;
              auVar83._0_12_ = auVar19;
              pfVar36 = pfVar36 + 4;
              auVar92._12_4_ = 0;
              auVar92._0_12_ = auVar16;
              auVar94._12_4_ = 0;
              auVar94._0_12_ = auVar17;
              auVar96._12_4_ = 0;
              auVar96._0_12_ = auVar18;
              auVar98._12_4_ = 0;
              auVar98._0_12_ = auVar19;
              uVar53 = SUB84(dVar97,0);
              uVar59 = (undefined4)((ulonglong)dVar97 >> 0x20);
              auVar133._12_4_ = 0;
              auVar133._0_12_ = auVar22;
              auVar120._12_4_ = 0;
              auVar120._0_12_ = auVar23;
              auVar107._12_4_ = 0;
              auVar107._0_12_ = auVar24;
              uVar33 = (int)uVar45 - 1;
              uVar45 = (ulonglong)uVar33;
            } while (uVar33 != 0);
          }
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar40);
        uVar41 = 0;
        uVar44 = 0;
        uVar45 = 0;
        do {
          if (uVar42 != 0) {
            pfVar36 = (float *)((longlong)local_108 + uVar41 + 0xc);
            lVar31 = 0;
            do {
              fVar119 = (float)(((double)*pfVar36 - auVar86._0_8_) / (auVar83._0_8_ - auVar86._0_8_)
                               );
              auVar134 = ZEXT416((uint)fVar119);
              fVar88 = (float)(((double)pfVar36[-1] - auVar79._0_8_) /
                              (auVar77._0_8_ - auVar79._0_8_));
              auVar121 = ZEXT416((uint)fVar88);
              fVar39 = (float)(((double)pfVar36[-2] - auVar73._0_8_) /
                              (auVar70._0_8_ - auVar73._0_8_));
              auVar108 = ZEXT416((uint)fVar39);
              dVar97 = ((double)pfVar36[-3] - auVar56._0_8_) / (auVar95._0_8_ - auVar56._0_8_);
              uVar20 = (ulonglong)dVar97 >> 0x20;
              auVar99._0_4_ = (float)dVar97;
              auVar99._4_8_ = uVar20;
              auVar99._12_4_ = 0;
              if ((bVar1 & 1) == 0) {
                if (fVar119 <= 0.0) {
                  auVar134 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar134._0_4_) {
                  auVar134._0_4_ = 0x3f800000;
                }
                uVar33 = (uint)(auVar134._0_4_ * 255.0 + 0.5);
                if (fVar88 <= 0.0) {
                  auVar121 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar121._0_4_) {
                  auVar121._0_4_ = 0x3f800000;
                }
                uVar37 = (uint)(auVar121._0_4_ * 255.0 + 0.5);
                if (fVar39 <= 0.0) {
                  auVar108 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar108._0_4_) {
                  auVar108._0_4_ = 0x3f800000;
                }
                uVar38 = (uint)(auVar108._0_4_ * 255.0 + 0.5);
                if (auVar99._0_4_ <= 0.0) {
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar20;
                  auVar99 = auVar21 << 0x20;
                }
                if (1.0 <= auVar99._0_4_) {
                  auVar99._0_4_ = 1.0;
                }
                uVar51 = (uint)(auVar99._0_4_ * 255.0 + 0.5);
              }
              else {
                auVar67 = insertps(auVar99,auVar108,0x10);
                auVar67 = insertps(auVar67,auVar121,0x20);
                auVar67 = insertps(auVar67,auVar134,0x30);
                auVar67 = maxps(auVar67,_DAT_149e1a200);
                auVar67 = minps(auVar67,_DAT_149e1a210);
                fVar39 = auVar67._0_4_;
                fVar88 = auVar67._4_4_;
                fVar119 = auVar67._8_4_;
                auVar122._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar88 + -0x39000000) >> 0x14) * 4);
                auVar122._0_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 + (ulonglong)((int)fVar39 + 0xc7000000U >> 0x14) * 4);
                auVar122._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar119 + -0x39000000) >> 0x14) * 4);
                auVar122._12_4_ = 0;
                auVar109._0_4_ = (uint)fVar39 >> 0xc;
                auVar109._4_4_ = (uint)fVar88 >> 0xc;
                auVar109._8_4_ = (uint)fVar119 >> 0xc;
                auVar109._12_4_ = (uint)auVar67._12_4_ >> 0xc;
                auVar90 = pmaddwd(auVar109 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar122);
                auVar110._0_4_ = auVar90._0_4_ >> 0x10;
                auVar110._4_4_ = auVar90._4_4_ >> 0x10;
                auVar110._8_4_ = auVar90._8_4_ >> 0x10;
                auVar110._12_4_ = auVar90._12_4_ >> 0x10;
                auVar100._0_4_ = (int)(fVar39 * 0.0 + 0.5);
                auVar100._4_4_ = (int)(fVar88 * 0.0 + 0.5);
                auVar100._8_4_ = (int)(fVar119 * 0.0 + 0.5);
                auVar100._12_4_ = (int)(auVar67._12_4_ * 255.0 + 0.5);
                auVar100 = auVar100 | auVar110;
                auVar101._4_4_ = auVar100._4_4_;
                auVar101._12_4_ = auVar100._12_4_;
                auVar101._0_4_ = auVar100._8_4_;
                auVar101._8_4_ = auVar100._0_4_;
                auVar67 = packssdw(auVar101,auVar101);
                sVar10 = auVar67._0_2_;
                sVar11 = auVar67._2_2_;
                sVar12 = auVar67._4_2_;
                sVar13 = auVar67._6_2_;
                bVar2 = (0 < sVar13) * (sVar13 < 0x100) * auVar67[6] - (0xff < sVar13);
                uVar37 = CONCAT13(bVar2,CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar67[4] -
                                                 (0xff < sVar12),
                                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                                          auVar67[2] - (0xff < sVar11),
                                                          (0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar67[0] - (0xff < sVar10))));
                uVar38 = uVar37 >> 8;
                uVar51 = uVar37 >> 0x10;
                uVar33 = (uint)bVar2;
              }
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar44 * 4) =
                   uVar37 & 0xff | (uVar38 & 0xff) << 8 | (uVar51 & 0xff) << 0x10 | uVar33 << 0x18;
              lVar31 = lVar31 + 1;
              pfVar36 = pfVar36 + 4;
            } while (uVar42 != (uint)lVar31);
          }
          uVar45 = uVar45 + 1;
          uVar44 = (ulonglong)((int)uVar44 + uVar42);
          uVar41 = (ulonglong)((int)uVar41 + local_1c4);
        } while (uVar45 != uVar40);
      }
    }
  }
  else if (iVar30 < 0x3d) {
    if (iVar30 < 0x31) {
      if (iVar30 == 0x23) {
        bVar52 = (int)local_1c0 != (int)local_1b0;
        local_190 = pvVar28;
        if (bVar52) {
          uVar33 = 0;
          uVar41 = 0;
          uVar44 = 0;
          do {
            if (uVar42 != 0) {
              lVar31 = 0;
              do {
                *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar41 * 4) =
                     ((uint)*(ushort *)((longlong)local_108 + lVar31 * 4 + (ulonglong)uVar33) * 0xff
                      + 0x807f & 0xff0000) +
                     ((uint)*(ushort *)((longlong)local_108 + lVar31 * 4 + (ulonglong)uVar33 + 2) *
                      0xff + 0x807f >> 8 & 0xff00) + -0x1000000;
                lVar31 = lVar31 + 1;
              } while (uVar42 != (uint)lVar31);
            }
            uVar44 = uVar44 + 1;
            uVar41 = (ulonglong)((int)uVar41 + uVar42);
            uVar33 = uVar33 + local_1c4;
          } while (uVar44 != uVar40);
        }
      }
      else {
        local_190 = pvVar28;
        if (iVar30 != 0x2c) goto switchD_14316e1fc_caseD_c;
        bVar52 = (int)local_1c0 != (int)local_1b0;
        if (bVar52) {
          bVar2 = *(byte *)(param_5 + 2);
          uVar41 = 0;
          auVar95 = pmovzxbd(unaff_XMM10,0xffffffff);
          uVar44 = 0;
          do {
            if (uVar42 != 0) {
              lVar31 = 0;
              do {
                uVar33 = *(uint *)((longlong)local_108 + lVar31 * 4);
                if ((bVar2 & 1) == 0) {
                  fVar88 = (float)(uVar33 & 0xffffff) * 5.9604645e-08;
                  if (1.0 <= fVar88) {
                    fVar88 = 1.0;
                  }
                  fVar88 = ABS((1.0 / (fVar88 * 0.1 + -0.1)) / fVar39);
                  auVar67 = ZEXT416((uint)fVar88);
                  if (1.0 <= fVar88) {
                    auVar67._4_12_ = ZEXT812(0);
                    auVar67._0_4_ = 0x3f800000;
                  }
                  if ((bVar1 & 1) == 0) {
                    if (auVar67._0_4_ <= 0.0) {
                      auVar90._12_4_ = 0;
                      auVar90._0_12_ = auVar67._4_12_;
                      auVar67 = auVar90 << 0x20;
                    }
                    if (1.0 <= auVar67._0_4_) {
                      auVar67._0_4_ = 0x3f800000;
                    }
                    uVar38 = (uint)(auVar67._0_4_ * 255.0 + 0.5);
                    uVar51 = 0;
                    uVar33 = uVar38;
                    uVar37 = uVar38;
                  }
                  else {
                    auVar67 = pshufb(auVar67,_DAT_149f5d880);
                    auVar67 = maxps(auVar67,_DAT_149e1a200);
                    auVar67 = minps(auVar67,_DAT_149e1a210);
                    fVar88 = auVar67._0_4_;
                    fVar119 = auVar67._4_4_;
                    fVar132 = auVar67._8_4_;
                    auVar93._4_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 +
                          (ulonglong)(ushort)((uint)((int)fVar119 + -0x39000000) >> 0x14) * 4);
                    auVar93._0_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 + (ulonglong)((int)fVar88 + 0xc7000000U >> 0x14) * 4);
                    auVar93._8_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 +
                          (ulonglong)(ushort)((uint)((int)fVar132 + -0x39000000) >> 0x14) * 4);
                    auVar93._12_4_ = 0;
                    auVar89._0_4_ = (uint)fVar88 >> 0xc;
                    auVar89._4_4_ = (uint)fVar119 >> 0xc;
                    auVar89._8_4_ = (uint)fVar132 >> 0xc;
                    auVar89._12_4_ = (uint)auVar67._12_4_ >> 0xc;
                    auVar90 = pmaddwd(auVar89 & auVar95 | auVar56,auVar93);
                    auVar91._0_4_ = auVar90._0_4_ >> 0x10;
                    auVar91._4_4_ = auVar90._4_4_ >> 0x10;
                    auVar91._8_4_ = auVar90._8_4_ >> 0x10;
                    auVar91._12_4_ = auVar90._12_4_ >> 0x10;
                    auVar68._0_4_ = (int)(fVar88 * 0.0 + 0.5);
                    auVar68._4_4_ = (int)(fVar119 * 0.0 + 0.5);
                    auVar68._8_4_ = (int)(fVar132 * 0.0 + 0.5);
                    auVar68._12_4_ = (int)(auVar67._12_4_ * 255.0 + 0.5);
                    auVar68 = auVar68 | auVar91;
                    auVar69._4_4_ = auVar68._4_4_;
                    auVar69._12_4_ = auVar68._12_4_;
                    auVar69._0_4_ = auVar68._8_4_;
                    auVar69._8_4_ = auVar68._0_4_;
                    auVar67 = packssdw(auVar69,auVar69);
                    sVar10 = auVar67._0_2_;
                    sVar11 = auVar67._2_2_;
                    sVar12 = auVar67._4_2_;
                    sVar13 = auVar67._6_2_;
                    bVar14 = (0 < sVar13) * (sVar13 < 0x100) * auVar67[6] - (0xff < sVar13);
                    uVar38 = CONCAT13(bVar14,CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar67[4] -
                                                      (0xff < sVar12),
                                                      CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                                               auVar67[2] - (0xff < sVar11),
                                                               (0 < sVar10) * (sVar10 < 0x100) *
                                                               auVar67[0] - (0xff < sVar10))));
                    uVar51 = (uint)bVar14 << 0x18;
                    uVar33 = uVar38 >> 8;
                    uVar37 = uVar38 >> 0x10;
                  }
                  uVar33 = uVar38 & 0xff | (uVar33 & 0xff) << 8 | (uVar37 & 0xff) << 0x10 | uVar51;
                }
                else {
                  uVar33 = (uVar33 >> 0x18) * 0x10101 | 0xff000000;
                }
                *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar41 * 4) = uVar33;
                lVar31 = lVar31 + 1;
              } while (uVar42 != (uint)lVar31);
            }
            uVar44 = uVar44 + 1;
            uVar41 = (ulonglong)((int)uVar41 + uVar42);
          } while (uVar44 != uVar40);
        }
      }
    }
    else if (iVar30 == 0x31) {
      bVar52 = (int)local_1c0 != (int)local_1b0;
      local_190 = pvVar28;
      if (bVar52) {
        uVar33 = 0;
        uVar41 = 0;
        uVar44 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar41 * 4) =
                   (uint)*(byte *)((longlong)local_108 + lVar31 * 2 + (ulonglong)uVar33 + 1) << 8 |
                   (uint)*(byte *)((longlong)local_108 + lVar31 * 2 + (ulonglong)uVar33) << 0x10 |
                   0xff000000;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar44 = uVar44 + 1;
          uVar41 = (ulonglong)((int)uVar41 + uVar42);
          uVar33 = uVar33 + local_1c4;
        } while (uVar44 != uVar40);
      }
    }
    else {
      if ((iVar30 != 0x35) && (local_190 = pvVar28, iVar30 != 0x38)) goto switchD_14316e1fc_caseD_c;
      bVar52 = (int)local_1c0 != (int)local_1b0;
      local_190 = pvVar28;
      if (bVar52) {
        uVar33 = 0;
        uVar41 = 0;
        uVar44 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              uVar38 = (uint)*(ushort *)((longlong)local_108 + lVar31 * 2 + (ulonglong)uVar33) *
                       0xff + 0x807f;
              uVar37 = uVar38 >> 0x10;
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar41 * 4) =
                   uVar37 << 8 | uVar38 & 0xff0000 | uVar37 | 0xff000000;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar44 = uVar44 + 1;
          uVar41 = (ulonglong)((int)uVar41 + uVar42);
          uVar33 = uVar33 + local_19c * iVar9 * (iVar7 - iVar8);
        } while (uVar44 != uVar40);
      }
    }
  }
  else if (iVar30 < 0x5a) {
    if (iVar30 == 0x3d) {
      bVar52 = (int)local_1c0 != (int)local_1b0;
      local_190 = pvVar28;
      if (bVar52) {
        uVar33 = 0;
        uVar41 = 0;
        uVar44 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              bVar1 = *(byte *)((longlong)local_108 + lVar31 + (ulonglong)uVar33);
              uVar37 = (uint)bVar1;
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar41 * 4) =
                   uVar37 << 8 | (uint)bVar1 << 0x10 | uVar37 << 0x18 | uVar37;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar44 = uVar44 + 1;
          uVar41 = (ulonglong)((int)uVar41 + uVar42);
          uVar33 = uVar33 + local_1c4;
        } while (uVar44 != uVar40);
      }
    }
    else {
      if (iVar30 != 0x43) {
        local_190 = pvVar28;
        if (iVar30 == 0x57) goto LAB_14316e4cc;
        goto switchD_14316e1fc_caseD_c;
      }
      bVar52 = (int)local_1c0 != (int)local_1b0;
      local_190 = pvVar28;
      if (bVar52) {
        uVar44 = 0;
        auVar90 = pmovzxbd(in_XMM3,0xffffffff);
        uVar45 = 0;
        uVar41 = 0;
        do {
          if (uVar42 != 0) {
            lVar31 = 0;
            do {
              uVar33 = *(uint *)((longlong)local_108 + lVar31 * 4 + uVar44);
              fVar39 = (float)((uVar33 >> 4 & 0xf800000) + 0x33800000);
              fVar88 = (float)(uVar33 >> 0x12 & 0x1ff) * fVar39;
              auVar117 = ZEXT416((uint)fVar88);
              fVar119 = (float)(uVar33 >> 9 & 0x1ff) * fVar39;
              auVar130 = ZEXT416((uint)fVar119);
              fVar39 = (float)(uVar33 & 0x1ff) * fVar39;
              auVar104 = ZEXT416((uint)fVar39);
              if ((bVar1 & 1) == 0) {
                if (fVar88 <= 0.0) {
                  auVar117._12_4_ = 0;
                  auVar117._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar117._0_4_) {
                  auVar117._0_4_ = 0x3f800000;
                }
                uVar33 = (uint)(auVar117._0_4_ * 255.0 + 0.5);
                if (fVar119 <= 0.0) {
                  auVar130._12_4_ = 0;
                  auVar130._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar130._0_4_) {
                  auVar130._0_4_ = 0x3f800000;
                }
                uVar37 = (uint)(auVar130._0_4_ * 255.0 + 0.5);
                if (fVar39 <= 0.0) {
                  auVar104._12_4_ = 0;
                  auVar104._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar104._0_4_) {
                  auVar104._0_4_ = 0x3f800000;
                }
                uVar51 = (uint)(auVar104._0_4_ * 255.0 + 0.5);
                uVar38 = 0xff000000;
              }
              else {
                auVar104 = insertps(auVar104,auVar130,0x10);
                auVar104 = insertps(auVar104,auVar117,0x20);
                auVar104 = insertps(auVar104,0x3f800000,0x30);
                auVar104 = maxps(auVar104,auVar95);
                auVar104 = minps(auVar104,auVar67);
                fVar39 = auVar104._0_4_;
                fVar88 = auVar104._4_4_;
                fVar119 = auVar104._8_4_;
                auVar131._4_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar88 + -0x39000000) >> 0x14) * 4);
                auVar131._0_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 + (ulonglong)((int)fVar39 + 0xc7000000U >> 0x14) * 4);
                auVar131._8_4_ =
                     *(undefined4 *)
                      (&DAT_149e1bee0 +
                      (ulonglong)(ushort)((uint)((int)fVar119 + -0x39000000) >> 0x14) * 4);
                auVar131._12_4_ = 0;
                auVar116._0_4_ = (uint)fVar39 >> 0xc;
                auVar116._4_4_ = (uint)fVar88 >> 0xc;
                auVar116._8_4_ = (uint)fVar119 >> 0xc;
                auVar116._12_4_ = (uint)auVar104._12_4_ >> 0xc;
                auVar117 = pmaddwd(auVar116 & auVar90 | auVar56,auVar131);
                auVar118._0_4_ = auVar117._0_4_ >> 0x10;
                auVar118._4_4_ = auVar117._4_4_ >> 0x10;
                auVar118._8_4_ = auVar117._8_4_ >> 0x10;
                auVar118._12_4_ = auVar117._12_4_ >> 0x10;
                auVar105._0_4_ = (int)(fVar39 * 0.0 + 0.5);
                auVar105._4_4_ = (int)(fVar88 * 0.0 + 0.5);
                auVar105._8_4_ = (int)(fVar119 * 0.0 + 0.5);
                auVar105._12_4_ = (int)(auVar104._12_4_ * 255.0 + 0.5);
                auVar105 = auVar105 | auVar118;
                auVar106._4_4_ = auVar105._4_4_;
                auVar106._12_4_ = auVar105._12_4_;
                auVar106._0_4_ = auVar105._8_4_;
                auVar106._8_4_ = auVar105._0_4_;
                auVar104 = packssdw(auVar106,auVar106);
                sVar10 = auVar104._0_2_;
                sVar11 = auVar104._2_2_;
                sVar12 = auVar104._4_2_;
                sVar13 = auVar104._6_2_;
                bVar2 = (0 < sVar13) * (sVar13 < 0x100) * auVar104[6] - (0xff < sVar13);
                uVar33 = CONCAT13(bVar2,CONCAT12((0 < sVar12) * (sVar12 < 0x100) * auVar104[4] -
                                                 (0xff < sVar12),
                                                 CONCAT11((0 < sVar11) * (sVar11 < 0x100) *
                                                          auVar104[2] - (0xff < sVar11),
                                                          (0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar104[0] - (0xff < sVar10))));
                uVar37 = uVar33 >> 8;
                uVar51 = uVar33 >> 0x10;
                uVar38 = (uint)bVar2 << 0x18;
              }
              *(uint *)((longlong)local_1a8 + lVar31 * 4 + uVar45 * 4) =
                   uVar33 & 0xff | (uVar37 & 0xff) << 8 | (uVar51 & 0xff) << 0x10 | uVar38;
              lVar31 = lVar31 + 1;
            } while (uVar42 != (uint)lVar31);
          }
          uVar41 = uVar41 + 1;
          uVar45 = (ulonglong)((int)uVar45 + uVar42);
          uVar44 = (ulonglong)((int)uVar44 + local_1c4);
        } while (uVar41 != uVar40);
      }
    }
  }
  else {
    local_190 = pvVar28;
    if (1 < iVar30 - 0x5aU) goto switchD_14316e1fc_caseD_c;
LAB_14316e4cc:
    if (uVar42 * 4 == local_1c4) {
      memcpy(local_1a8,local_108,(ulonglong)(uVar40 * uVar42) << 2);
    }
    else {
      bVar52 = (int)local_1c0 != (int)local_1b0;
      local_190 = pvVar28;
      if (bVar52) {
        uVar41 = (ulonglong)uVar40;
        uVar44 = 0;
        uVar40 = 0;
        do {
          memcpy((void *)((longlong)local_1a8 + (ulonglong)uVar40 * 4),
                 (void *)(uVar44 + (longlong)pvVar29),(ulonglong)(uVar42 * 4));
          uVar40 = uVar40 + uVar42;
          uVar44 = (ulonglong)((int)uVar44 + local_1c4);
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
      }
    }
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8(local_108);
  }
LAB_14316ddc4:
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14316fca2 FUN_14316fca2 body=1883 status=ok
// SIG undefined FUN_14316fca2(void)

void FUN_14316fca2(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 **local_170;
  undefined8 local_168;
  undefined4 local_160;
  ulonglong local_158;
  uint local_14c;
  int local_148;
  int local_144;
  undefined8 local_140;
  uint local_138;
  uint local_134;
  ulonglong local_130;
  undefined1 local_128 [16];
  uint *local_110;
  longlong *plStack_108;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  int *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined8 *local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_4c = *(uint *)(param_6 + 0x18);
  uVar20 = (ulonglong)local_4c;
  puVar4 = *(undefined4 **)(**(longlong **)(param_1 + 0x1b0) + 2000 + uVar20 * 8);
  local_140 = *(undefined8 *)(puVar4 + 4);
  uVar2 = *puVar4;
  local_158 = param_4;
  if (param_2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_2 + 8))(param_2);
    plVar9 = param_2;
    if ((*(byte *)(lVar6 + 2) & 4) != 0) {
      plVar9 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar6 = (**(code **)(*plVar9 + 0x30))();
    if (lVar6 != 0) {
      local_58 = *(longlong *)(lVar6 + 0x128 + uVar20 * 8);
      goto LAB_14316fd49;
    }
  }
  local_58 = 0;
LAB_14316fd49:
  uVar11 = DAT_14c873614;
  uVar17 = param_3[2] - *param_3;
  lVar6 = *(longlong *)(local_58 + 0xb8);
  uVar22 = *(uint *)(lVar6 + 0x78);
  if (((uVar22 == DAT_14c873614) || (uVar22 == DAT_14c873824)) || (uVar22 == DAT_14c8736a4)) {
    local_134 = DAT_14c873824;
    local_138 = DAT_14c8736a4;
    uVar20 = local_158 >> 0x20;
    iVar5 = (int)(local_158 >> 0x20);
    local_14c = uVar2;
    local_144 = param_3[3] - param_3[1];
    FUN_145ee9bde(param_5,(iVar5 - (int)local_158) * uVar17 * (param_3[3] - param_3[1]),1);
    local_70 = *param_3;
    local_6c = param_3[1];
    local_64 = param_3[2];
    local_60 = param_3[3];
    local_68 = (undefined4)local_158;
    local_78 = (undefined8 *)0x0;
    local_130 = uVar20;
    local_5c = iVar5;
    lVar7 = (**(code **)(*param_2 + 8))(param_2);
    uVar19 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30))
             * *(int *)(lVar6 + 0x68) + 0xffU & 0xffffff00;
    local_148 = *(int *)(lVar6 + 0x70) * uVar19;
    local_178 = (ulonglong)((uint)*(ushort *)(lVar6 + 0x74) * local_148);
    local_168 = 0;
    local_170 = &local_78;
    local_160 = 0;
    iVar5 = FUN_14631a284(local_140,3,local_14c,local_14c);
    if (iVar5 < 0) {
      local_170 = (undefined8 **)local_88;
      local_88 = (undefined1  [16])0x0;
      local_178 = 0;
      FUN_145763094(iVar5,
                    "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, MipBytesAligned, TempTexture3D.GetInitReference(), nullptr)"
                    ,".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x40f);
    }
    uVar20 = local_130;
    local_a0 = *(undefined4 *)(lVar6 + 0x78);
    local_9c = *(undefined4 *)(lVar6 + 0x68);
    local_98 = *(undefined4 *)(lVar6 + 0x70);
    local_b8 = local_78[4];
    puStack_f8 = &local_b8;
    local_b0 = 1;
    local_a8 = 0;
    local_94 = (uint)*(ushort *)(lVar6 + 0x74);
    local_8c = 0;
    plStack_108 = &local_58;
    local_e8 = *(undefined8 *)(*(longlong *)(local_58 + 0xb8) + 0x20);
    local_100 = &local_e8;
    local_e0 = 0;
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_110 = &local_4c;
    local_f0 = &local_70;
    local_90 = uVar19;
    if (DAT_14ca85164 == '\x01') {
      FUN_14317859c(&local_110,&DAT_14ca85100);
    }
    else {
      puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar8 + 7;
      if (DAT_14ca85108 < puVar10) {
        FUN_140023dd8(&DAT_14ca85100,0x40);
        puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar8 + 7;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar10;
      *DAT_14ca85130 = puVar8;
      DAT_14ca85130 = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_14a34ff30;
      puVar8[2] = local_110;
      puVar8[3] = plStack_108;
      puVar8[4] = local_100;
      puVar8[5] = puStack_f8;
      puVar8[6] = local_f0;
    }
    local_110 = (uint *)0x0;
    plStack_108 = (longlong *)((ulonglong)plStack_108 & 0xffffffff00000000);
    FUN_14007658c(&DAT_14ca850c8,&local_110,5);
    (**(code **)(*DAT_14ca83900 + 0x370))();
    iVar5 = (**(code **)(*(longlong *)local_78[4] + 0x40))((longlong *)local_78[4],0,0,&local_110);
    if (iVar5 < 0) {
      local_170 = (undefined8 **)local_128;
      local_128 = (undefined1  [16])0x0;
      local_178 = 0;
      FUN_145763094(iVar5,"TempTexture3D->GetResource()->Map(0, nullptr, &pData)",
                    ".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x43a);
    }
    uVar21 = (uint)uVar20;
    local_14c = uVar19;
    if (uVar22 == uVar11) {
      if ((int)local_158 < (int)uVar21) {
        iVar5 = param_3[3];
        iVar14 = 0;
        local_140 = CONCAT44(local_140._4_4_,(int)local_158);
        do {
          iVar18 = param_3[1];
          if (iVar18 < iVar5) {
            uVar22 = ((int)local_140 - (int)local_158) * local_148;
            do {
              memcpy((void *)((longlong)(int)(((iVar18 - param_3[1]) + iVar14) * uVar17) * 8 +
                             *param_5),
                     (void *)((longlong)local_110 +
                             (ulonglong)uVar22 + (ulonglong)((iVar18 - param_3[1]) * uVar19)),
                     (ulonglong)uVar17 << 3);
              iVar18 = iVar18 + 1;
              iVar5 = param_3[3];
            } while (iVar18 < iVar5);
          }
          iVar18 = (int)local_140 + 1;
          iVar14 = iVar14 + local_144;
          local_140 = CONCAT44(local_140._4_4_,iVar18);
        } while (iVar18 != (int)local_130);
      }
    }
    else if (uVar22 == local_134) {
      if ((int)local_158 < (int)uVar21) {
        iVar5 = param_3[3];
        iVar14 = 0;
        uVar22 = 0;
        do {
          iVar18 = param_3[1];
          if (iVar18 < iVar5) {
            uVar20 = (ulonglong)(uint)param_3[2];
            iVar16 = iVar18 + iVar14;
            do {
              lVar6 = (longlong)*param_3;
              if (*param_3 < (int)uVar20) {
                iVar5 = param_3[1];
                do {
                  lVar7 = (longlong)(int)((iVar16 - param_3[1]) * uVar17 + (int)lVar6);
                  *(undefined2 *)(*param_5 + lVar7 * 8) =
                       *(undefined2 *)
                        ((longlong)local_110 +
                        lVar6 * 2 + (ulonglong)((iVar18 - iVar5) * uVar19) + (ulonglong)uVar22);
                  *(undefined2 *)(*param_5 + 6 + lVar7 * 8) = 0x3c00;
                  lVar6 = lVar6 + 1;
                  uVar20 = (ulonglong)param_3[2];
                } while (lVar6 < (longlong)uVar20);
                iVar5 = param_3[3];
              }
              iVar18 = iVar18 + 1;
              iVar16 = iVar16 + 1;
            } while (iVar18 < iVar5);
          }
          uVar11 = (int)local_158 + 1;
          local_158 = (ulonglong)uVar11;
          uVar22 = uVar22 + local_148;
          iVar14 = iVar14 + local_144;
        } while (uVar11 != uVar21);
      }
    }
    else if (uVar22 == local_138 && (int)local_158 < (int)uVar21) {
      iVar5 = param_3[3];
      iVar14 = 0;
      uVar22 = 0;
      do {
        iVar18 = param_3[1];
        if (iVar18 < iVar5) {
          uVar20 = (ulonglong)(uint)param_3[2];
          iVar16 = iVar18 + iVar14;
          do {
            lVar6 = (longlong)*param_3;
            if (*param_3 < (int)uVar20) {
              iVar5 = param_3[1];
              do {
                fVar3 = *(float *)((longlong)local_110 +
                                  lVar6 * 4 +
                                  (ulonglong)((iVar18 - iVar5) * uVar19) + (ulonglong)uVar22);
                fVar15 = ABS(fVar3);
                if ((uint)fVar15 < 0x47800000) {
                  if ((uint)fVar15 < 0x38800000) {
                    fVar15 = fVar15 + 0.5;
                  }
                  else {
                    fVar15 = (float)((int)fVar15 + 0x8000fff +
                                     (uint)(((uint)fVar15 >> 0xd & 1) != 0) >> 0xd);
                  }
                }
                else {
                  fVar15 = (float)((0x7f800000 < (uint)fVar15 | 0x3e) << 9);
                }
                iVar13 = movmskps(uVar11,ZEXT416((uint)fVar3));
                uVar11 = iVar13 << 0xf | (uint)fVar15;
                lVar7 = (longlong)(int)((iVar16 - param_3[1]) * uVar17 + (int)lVar6);
                *(short *)(*param_5 + lVar7 * 8) = (short)uVar11;
                *(undefined2 *)(*param_5 + 6 + lVar7 * 8) = 0x3c00;
                lVar6 = lVar6 + 1;
                uVar20 = (ulonglong)param_3[2];
              } while (lVar6 < (longlong)uVar20);
              iVar5 = param_3[3];
            }
            iVar18 = iVar18 + 1;
            iVar16 = iVar16 + 1;
          } while (iVar18 < iVar5);
        }
        uVar12 = (int)local_158 + 1;
        local_158 = (ulonglong)uVar12;
        uVar22 = uVar22 + local_148;
        iVar14 = iVar14 + local_144;
      } while (uVar12 != uVar21);
    }
    (**(code **)(*(longlong *)local_78[4] + 0x48))((longlong *)local_78[4],0,0);
    if (local_78 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_78 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_78)(local_78,1);
      }
    }
  }
  else {
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317041c FUN_14317041c body=589 status=ok
// SIG undefined FUN_14317041c(void)

undefined8 *
FUN_14317041c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  uint local_a4;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined5 uStack_75;
  undefined3 local_70;
  undefined5 uStack_6d;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = *param_4;
  uStack_64 = param_4[1];
  uStack_60 = param_4[2];
  uStack_5c = param_4[3];
  uVar5 = FUN_14737f5f3(param_3);
  local_b8 = &local_78;
  uStack_6d = 0;
  uStack_75 = 0;
  local_70 = 0;
  local_78 = 0;
  local_76 = 4;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_80,param_3,uVar5);
  local_98 = *param_4;
  uStack_94 = param_4[1];
  uStack_90 = param_4[2];
  uStack_8c = param_4[3];
  lVar10 = **(longlong **)(param_1 + 0x1b0);
  uVar11 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if (uVar11 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar4 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  if (DAT_14c760da4 != 0) {
    puVar16 = (undefined2 *)0x0;
    uVar12 = uVar11;
    local_a4 = uVar4;
    local_a0 = param_2;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 2000 + (ulonglong)uVar4 * 8);
      puVar6 = (undefined2 *)FUN_14001cc68(0xa8,0x10);
      local_58 = local_98;
      uStack_54 = uStack_94;
      uStack_50 = uStack_90;
      uStack_4c = uStack_8c;
      local_b8 = puVar16;
      FUN_14737ed38(puVar6,uVar2,uVar5,&local_58);
      puVar15 = puVar6;
      if (puVar16 != (undefined2 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 4) = *(int *)(puVar6 + 4) + 1;
        UNLOCK();
        puVar15 = puVar16;
      }
      *(undefined2 **)(puVar15 + (ulonglong)uVar4 * 4 + 0x18) = puVar6;
      uVar12 = uVar12 & ~(1 << (uVar4 & 0x1f));
      if (uVar12 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
      puVar16 = puVar15;
    } while (uVar12 != 0);
    param_2 = local_a0;
    if (puVar15 != (undefined2 *)0x0) {
      *(uint *)(puVar15 + 0x14) = uVar11;
      bVar3 = (byte)local_a4 & 0x1f;
      uVar11 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar11;
      if (uVar11 != 0) {
        uVar4 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        do {
          puVar13 = (undefined8 *)(puVar15 + 0x14);
          puVar14 = (undefined8 *)(*(longlong *)(puVar15 + (ulonglong)uVar4 * 4 + 0x18) + 0x28);
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          bVar3 = (byte)uVar4 & 0x1f;
          uVar11 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar11;
          if (uVar11 == 0) {
            uVar4 = 0x20;
          }
          else {
            uVar4 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
          }
        } while (uVar11 != 0);
      }
      *local_a0 = puVar15;
      LOCK();
      *(int *)(puVar15 + 4) = *(int *)(puVar15 + 4) + 1;
      UNLOCK();
      goto LAB_1431705c6;
    }
  }
  *param_2 = 0;
LAB_1431705c6:
  if (local_80 != 0) {
    LOCK();
    puVar1 = (uint *)(local_80 + 8);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_80 + 8);
      LOCK();
      uVar11 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar11 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_80 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = local_80;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar17 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar17) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar17);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar17 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar17) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar17);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14317066a FUN_14317066a body=69 status=ok
// SIG undefined FUN_14317066a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317066a(void)

{
  _DAT_14ca77050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431706ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77058,1);
  return;
}



// FUNCTION 1431706b0 FUN_1431706b0 body=295 status=ok
// SIG undefined FUN_1431706b0(void)

void FUN_1431706b0(longlong param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[7] = 4;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = iVar2;
  if (iVar2 < 0x5a) {
    if (iVar2 < 0x46) {
      if (iVar2 < 0x27) {
        if (iVar2 == 0x13) {
          iVar2 = 0x15;
          iVar3 = 0x15;
        }
        else if (iVar2 == 0x1b) {
          iVar2 = 0x1d;
          iVar3 = 0x1c;
        }
      }
      else if (iVar2 == 0x27) {
        iVar2 = 0x29;
        iVar3 = 0x29;
      }
      else if (iVar2 == 0x2c) {
        iVar2 = 0x2e;
        iVar3 = 0x2e;
      }
      else if (iVar2 == 0x35) {
        iVar2 = 0x38;
        iVar3 = 0x38;
      }
    }
    else if (iVar2 == 0x46) {
      iVar2 = 0x48;
      iVar3 = 0x47;
    }
    else if (iVar2 == 0x4c) {
      iVar2 = 0x4e;
      iVar3 = 0x4d;
    }
    else if (iVar2 == 0x49) {
      iVar2 = 0x4b;
      iVar3 = 0x4a;
    }
  }
  else if (iVar2 == 0x5a) {
    iVar2 = 0x5b;
    iVar3 = 0x57;
  }
  else if (iVar2 == 0x61) {
    iVar2 = 99;
    iVar3 = 0x62;
  }
  *param_2 = iVar2;
  param_2[6] = 2;
  bVar1 = *(byte *)(param_1 + 0x39);
  param_2[1] = iVar3;
  if (bVar1 != 0) {
    iVar2 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)bVar1 * 0x30));
    param_2[6] = 3;
    param_2[2] = iVar2;
  }
  return;
}



// FUNCTION 1431707d7 FUN_1431707d7 body=69 status=ok
// SIG undefined FUN_1431707d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431707d7(void)

{
  _DAT_14ca77068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143170819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77070,1);
  return;
}



// FUNCTION 14317081c FUN_14317081c body=69 status=ok
// SIG undefined FUN_14317081c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317081c(void)

{
  _DAT_14ca77078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317085e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77080,1);
  return;
}



// FUNCTION 143170861 FUN_143170861 body=69 status=ok
// SIG undefined FUN_143170861(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143170861(void)

{
  _DAT_14ca77090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431708a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77098,1);
  return;
}



// FUNCTION 1431708a6 FUN_1431708a6 body=195 status=ok
// SIG undefined FUN_1431708a6(void)

void FUN_1431708a6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    lVar6 = 0;
    do {
      FUN_145dd1f80(*(undefined8 *)(lVar2 + lVar6));
      if (DAT_14ca84ef4 == '\x01') {
        FUN_14614984c(*(undefined8 *)(lVar2 + lVar6));
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = &PTR_FUN_14a351f50;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  puVar4[3] = puVar5;
  puVar4[2] = puVar5;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  plVar3 = DAT_14ca81488;
  DAT_14ca81488 = puVar4;
  if (plVar3 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014317095d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,1);
  return;
}



// FUNCTION 14317096a FUN_14317096a body=320 status=ok
// SIG undefined FUN_14317096a(void)

void FUN_14317096a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14ca84d88 = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    agsDeInitialize();
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    local_38 = *(longlong *)(param_1 + 0x1d8);
    FUN_144bcf310();
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  FUN_145bcc89c();
  iVar1 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    lVar3 = 0;
    do {
      FUN_1456ca11e(*(undefined8 *)(lVar2 + lVar3));
      FUN_146319d4c(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,7);
  thunk_FUN_141628ed8();
  FUN_147413d24();
  FUN_145c78bb8(param_1);
  FUN_145d1128d(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b8));
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_14631a3c2(param_1 + 0x1b0);
  }
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x1e0));
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143170aae FUN_143170aae body=886 status=ok
// SIG undefined FUN_143170aae(void)

void FUN_143170aae(longlong param_1,int param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  puVar19 = (undefined8 *)FUN_14001cc68(0x310,0x10);
  lVar20 = *(longlong *)(**(longlong **)(param_1 + 0x1b0) + 2000);
  lVar2 = *(longlong *)(lVar20 + 0x1280);
  lVar20 = lVar20 + 0xb00;
  if (lVar2 != 0) {
    lVar20 = lVar2;
  }
  puVar19[1] = (ulonglong)((uint)(param_2 != 0) * 0x280) + lVar20;
  puVar19[0x35] = 0;
  puVar19[0x36] = 0x1800000000;
  puVar19[2] = 0;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  puVar19[0x3c] = 0;
  puVar19[0x3e] = 0;
  *(undefined1 *)(puVar19 + 0x4d) = 0;
  *(undefined1 *)(puVar19 + 0x4f) = 0;
  puVar19[0x5c] = 0;
  *(undefined4 *)(puVar19 + 0x5d) = 0;
  puVar19[0x37] = 0;
  puVar19[0x38] = 0;
  puVar19[0x39] = 0;
  puVar19[0x3a] = 0;
  *(undefined2 *)(puVar19 + 0x3b) = 0;
  puVar19[0x44] = 0;
  puVar19[0x45] = 0;
  puVar19[0x46] = 0;
  puVar19[0x47] = 0;
  puVar19[0x48] = 0;
  puVar19[0x49] = 0;
  puVar19[0x4a] = 0;
  puVar19[0x4b] = 0;
  puVar19[0x58] = 0;
  puVar19[0x59] = 0;
  puVar19[0x56] = 0;
  puVar19[0x57] = 0;
  puVar19[0x54] = 0;
  puVar19[0x55] = 0;
  puVar19[0x52] = 0;
  puVar19[0x53] = 0;
  puVar19[0x50] = 0;
  puVar19[0x51] = 0;
  *(undefined8 *)((longlong)puVar19 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar19 + 0x2f4) = 0;
  puVar19[0x60] = 0;
  *(undefined4 *)(puVar19 + 0x61) = 0;
  *puVar19 = &PTR_FUN_14a349180;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
  FUN_1447183c0(&local_a8,0);
  *local_a8 = puVar19;
  uVar22 = puVar19[0x3c];
  uVar4 = puVar19[0x3d];
  uVar5 = puVar19[0x3e];
  uVar6 = puVar19[0x3f];
  uVar7 = puVar19[0x40];
  uVar8 = puVar19[0x41];
  uVar9 = puVar19[0x42];
  uVar10 = puVar19[0x43];
  uVar11 = *param_3;
  uVar12 = param_3[1];
  uVar13 = param_3[2];
  uVar14 = param_3[3];
  uVar15 = param_3[4];
  uVar16 = param_3[5];
  uVar17 = param_3[7];
  puVar19[0x42] = param_3[6];
  puVar19[0x43] = uVar17;
  puVar19[0x40] = uVar15;
  puVar19[0x41] = uVar16;
  puVar19[0x3e] = uVar13;
  puVar19[0x3f] = uVar14;
  puVar19[0x3c] = uVar11;
  puVar19[0x3d] = uVar12;
  local_98._0_4_ = (undefined4)uVar22;
  local_98._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
  uStack_90._0_4_ = (undefined4)uVar4;
  uStack_90._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_88._0_4_ = (undefined4)uVar5;
  local_88._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar6;
  uStack_80._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_78._0_4_ = (undefined4)uVar7;
  local_78._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_70._0_4_ = (undefined4)uVar8;
  uStack_70._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_68._0_4_ = (undefined4)uVar9;
  local_68._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar10;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  *(undefined4 *)(param_3 + 6) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_68._4_4_;
  *(undefined4 *)(param_3 + 7) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_60._4_4_;
  *(undefined4 *)(param_3 + 4) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_78._4_4_;
  *(undefined4 *)(param_3 + 5) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_70._4_4_;
  *(undefined4 *)(param_3 + 2) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_88._4_4_;
  *(undefined4 *)(param_3 + 3) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_80._4_4_;
  *(undefined4 *)param_3 = (undefined4)local_98;
  *(undefined4 *)((longlong)param_3 + 4) = local_98._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_90._4_4_;
  local_98 = uVar22;
  uStack_90 = uVar4;
  local_88 = uVar5;
  uStack_80 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar8;
  local_68 = uVar9;
  uStack_60 = uVar10;
  if (param_4 == '\0') {
    FUN_14473bfcc(param_1,&local_a8);
  }
  else {
    puVar21 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar21,0);
    *puVar21 = &PTR_FUN_149e00300;
    if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
    }
    puVar21[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar21[9] = puVar21;
    puVar21[10] = puVar21;
    lVar20 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar20 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined8 *)(lVar20 + 0x30);
    }
    puVar21[0xf] = uVar22;
    puVar21[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar21 + 0x1c) = 2;
    puVar3 = (undefined8 *)puVar19[0x4b];
    if (puVar3 != puVar21) {
      puVar19[0x4b] = puVar21;
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    FUN_14473bfcc(param_1,&local_a8);
    if (puVar21 != (undefined8 *)0x0) {
      if ((*(byte *)(puVar21 + 0x14) & 1) == 0) {
        FUN_140082318(puVar21);
      }
      bVar18 = false;
      goto LAB_143170cb7;
    }
  }
  bVar18 = true;
  puVar21 = (undefined8 *)0x0;
LAB_143170cb7:
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar18) {
    LOCK();
    piVar1 = (int *)(puVar21 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar21)(puVar21,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143170e26 FUN_143170e26 body=64 status=ok
// SIG undefined FUN_143170e26(void)

void FUN_143170e26(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x5c) == 0xb) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20);
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8);
  (**(code **)(*plVar1 + 0x90))(plVar1,uVar2,param_1 + 0x58,*(undefined8 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}



// FUNCTION 143170e66 FUN_143170e66 body=69 status=ok
// SIG undefined FUN_143170e66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143170e66(void)

{
  _DAT_14ca771e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143170ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca771f0,1);
  return;
}



// FUNCTION 143170eab FUN_143170eab body=69 status=ok
// SIG undefined FUN_143170eab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143170eab(void)

{
  _DAT_14ca77200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143170eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77208,1);
  return;
}



// FUNCTION 143170efe FUN_143170efe body=69 status=ok
// SIG undefined FUN_143170efe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143170efe(void)

{
  _DAT_14ca77238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143170f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77240,1);
  return;
}



// FUNCTION 143170f43 FUN_143170f43 body=183 status=ok
// SIG undefined FUN_143170f43(void)

void FUN_143170f43(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [30];
  undefined4 uStack_8a;
  undefined2 uStack_86;
  undefined2 local_84 [26];
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 local_4a [29];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_50 + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4c + lVar1) = 1;
    *(undefined1 *)((longlong)local_4a + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8a + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_86 + lVar1) = 1;
    *(undefined1 *)((longlong)local_84 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,local_4a);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,local_84);
  }
  FUN_140622c95(local_4a,local_84);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143170ffb FUN_143170ffb body=198 status=ok
// SIG undefined FUN_143170ffb(void)

undefined8 FUN_143170ffb(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  float local_34;
  float fStack_30;
  char cStack_2c;
  char cStack_2b;
  undefined1 uStack_2a;
  undefined2 local_28;
  float local_24;
  float fStack_20;
  char cStack_1c;
  char cStack_1b;
  undefined1 uStack_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_24 = 0.0;
  fStack_20 = 0.0;
  cStack_1c = '\0';
  cStack_1b = '\0';
  uStack_1a = 0;
  local_38 = 0;
  local_34 = 0.0;
  fStack_30 = 0.0;
  cStack_2c = '\0';
  cStack_2b = '\0';
  uStack_2a = 0;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&local_28);
  }
  if (param_2 == (longlong *)0x0) {
    cVar1 = '\0';
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 8))(param_2,&local_38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    cVar1 = (char)local_38;
  }
  if (((char)local_28 == cVar1) && (local_28._1_1_ == local_38._1_1_)) {
    if ((local_24 == local_34) && (!NAN(local_24) && !NAN(local_34))) {
      if (((fStack_20 == fStack_30) && (!NAN(fStack_20) && !NAN(fStack_30))) &&
         (cStack_1c == cStack_2c)) {
        uVar2 = CONCAT71(uVar3,cStack_1b == cStack_2b);
        goto LAB_1431710a4;
      }
    }
  }
  uVar2 = 0;
LAB_1431710a4:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431710c2 FUN_1431710c2 body=146 status=ok
// SIG undefined FUN_1431710c2(void)

void FUN_1431710c2(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  undefined2 local_20;
  undefined8 local_1e;
  undefined4 local_16;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1e = 0x7000101;
  local_16 = 7;
  local_12 = 0xffff;
  local_2c = 0x7000101;
  local_24 = 7;
  local_20 = 0xffff;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&local_1e);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_2c);
  }
  FUN_140924781(&local_1e,&local_2c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143171156 FUN_143171156 body=189 status=ok
// SIG undefined FUN_143171156(void)

longlong * FUN_143171156(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [768];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar3 = **(longlong **)(param_1 + 0x1b0);
  lVar1 = FUN_1406bf828(lVar3,param_3);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    lVar3 = lVar3 + 0x2b8;
    lVar2 = FUN_1406f6f86(lVar3,param_3,lVar1,local_328);
    if (lVar2 == 0) {
      lVar2 = FUN_1406c2626(lVar3,param_3,lVar1,local_328);
      *param_2 = lVar2;
      if (lVar2 == 0) goto LAB_1431711ea;
    }
    else {
      *param_2 = lVar2;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
LAB_1431711ea:
  if ((local_28 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143171214 FUN_143171214 body=184 status=ok
// SIG undefined FUN_143171214(void)

longlong * FUN_143171214(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*param_3 + 0xe0);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x1b0) + 0x2b8;
    lVar2 = FUN_1405e94c6(lVar3,param_3,lVar1,local_88);
    if (lVar2 == 0) {
      lVar2 = FUN_140676b68(lVar3,param_3,lVar1,local_88);
      *param_2 = lVar2;
      if (lVar2 == 0) goto LAB_1431712a3;
    }
    else {
      *param_2 = lVar2;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
LAB_1431712a3:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431712cd FUN_1431712cd body=69 status=ok
// SIG undefined FUN_1431712cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431712cd(void)

{
  _DAT_14ca77248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317130f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77250,1);
  return;
}



// FUNCTION 143171312 FUN_143171312 body=69 status=ok
// SIG undefined FUN_143171312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143171312(void)

{
  _DAT_14ca77258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143171354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77260,1);
  return;
}



// FUNCTION 143171357 FUN_143171357 body=69 status=ok
// SIG undefined FUN_143171357(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143171357(void)

{
  _DAT_14ca77268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143171399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77270,1);
  return;
}



// FUNCTION 14317139c FUN_14317139c body=69 status=ok
// SIG undefined FUN_14317139c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317139c(void)

{
  _DAT_14ca77278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431713de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77280,1);
  return;
}



// FUNCTION 1431713e1 FUN_1431713e1 body=69 status=ok
// SIG undefined FUN_1431713e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431713e1(void)

{
  _DAT_14ca77288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143171423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77290,1);
  return;
}



// FUNCTION 143171426 FUN_143171426 body=69 status=ok
// SIG undefined FUN_143171426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143171426(void)

{
  _DAT_14ca77298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143171468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca772a0,1);
  return;
}



// FUNCTION 14317146b FUN_14317146b body=69 status=ok
// SIG undefined FUN_14317146b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317146b(void)

{
  _DAT_14ca772a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431714ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca772b0,1);
  return;
}



// FUNCTION 1431714b0 FUN_1431714b0 body=69 status=ok
// SIG undefined FUN_1431714b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431714b0(void)

{
  _DAT_14ca772b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431714f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca772c0,1);
  return;
}



// FUNCTION 1431714f6 FUN_1431714f6 body=121 status=ok
// SIG undefined FUN_1431714f6(void)

void FUN_1431714f6(longlong param_1,byte param_2,uint param_3,longlong param_4)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar2 = (ulonglong)param_2 * 0x80 + param_1;
  uVar4 = (ulonglong)param_3;
  if (*(longlong *)(lVar2 + 0x2638 + uVar4 * 8) != param_4) {
    uVar5 = 0;
    if ((param_2 == 5) &&
       (uVar5 = *(uint *)(param_1 + 0x2c4c), param_3 < *(uint *)(param_1 + 0x2c4c))) {
      uVar5 = param_3;
    }
    *(uint *)(param_1 + 0x2c38 + (ulonglong)param_2 * 4) = uVar5;
    *(longlong *)(lVar2 + uVar4 * 8 + 0x2638) = param_4;
    puVar1 = (ushort *)(param_1 + 0x2628 + (ulonglong)param_2 * 2);
    *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_3 & 0x1f));
    if (param_4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_4 + 0x20);
    }
    *(undefined8 *)(param_1 + (ulonglong)param_2 * 0x80 + 0x2938 + uVar4 * 8) = uVar3;
  }
  return;
}



// FUNCTION 14317156f FUN_14317156f body=69 status=ok
// SIG undefined FUN_14317156f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317156f(void)

{
  _DAT_14ca772c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431715b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca772d0,1);
  return;
}



// FUNCTION 1431715b4 FUN_1431715b4 body=69 status=ok
// SIG undefined FUN_1431715b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431715b4(void)

{
  _DAT_14ca772e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431715f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca772e8,1);
  return;
}



// FUNCTION 1431715f9 FUN_1431715f9 body=69 status=ok
// SIG undefined FUN_1431715f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431715f9(void)

{
  _DAT_14ca772f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317163b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77300,1);
  return;
}



// FUNCTION 14317163e FUN_14317163e body=69 status=ok
// SIG undefined FUN_14317163e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317163e(void)

{
  _DAT_14ca77308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143171680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77310,1);
  return;
}



// FUNCTION 143171683 FUN_143171683 body=69 status=ok
// SIG undefined FUN_143171683(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143171683(void)

{
  _DAT_14ca77318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431716c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77320,1);
  return;
}



// FUNCTION 1431716c8 FUN_1431716c8 body=69 status=ok
// SIG undefined FUN_1431716c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431716c8(void)

{
  _DAT_14ca77328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317170a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77330,1);
  return;
}



// FUNCTION 14317170e FUN_14317170e body=595 status=ok
// SIG undefined FUN_14317170e(void)

void FUN_14317170e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    plVar13 = (longlong *)*param_2;
    plVar2 = plVar13 + (int)param_2[1];
    do {
      plVar10 = (longlong *)*plVar13;
      local_78 = 0;
      uStack_70 = 0;
      cVar6 = (**(code **)(*plVar10 + 8))(plVar10);
      puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x270))(plVar10);
      if (puVar7 == (undefined8 *)0x0) {
        plVar9 = plVar10 + -0x39;
        if (plVar10 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
        }
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_78);
        if (*(char *)((longlong)plVar9 + 0x14) == '\0') {
          FUN_1448a9090(plVar9,1);
          FUN_144758090(plVar9[0x5d],plVar9);
        }
      }
      else {
        uVar12 = *(uint *)((longlong)puVar7 + 0x11c);
        if (uVar12 != 0) {
          uVar11 = 0;
          if (uVar12 != 0) {
            for (; (uVar12 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
            }
          }
          do {
            plVar10 = (longlong *)puVar7[(ulonglong)uVar11 + 0x25];
            (**(code **)(*plVar10 + 0x28))(plVar10,&local_78);
            if (*(char *)((longlong)plVar10 + 0x14) == '\0') {
              FUN_1448a9090(plVar10,1);
              FUN_144758090(plVar10[0x5d],plVar10);
            }
            bVar4 = (byte)uVar11 & 0x1f;
            uVar12 = uVar12 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            if (uVar12 == 0) {
              uVar11 = 0x20;
            }
            else {
              uVar11 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                }
              }
            }
          } while (uVar12 != 0);
        }
        if (*(char *)((longlong)puVar7 + 0x124) == '\0') {
          *puVar7 = &PTR_LAB_14a1e4500;
          lVar3 = puVar7[0x1f];
          if (lVar3 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar3 + 8);
            uVar12 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar12 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar3 + 8);
              LOCK();
              uVar12 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar12 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)(lVar3 + 0xd);
                plVar8 = (longlong *)FUN_14001cc68(0x10,8);
                plVar8[1] = lVar3;
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar8 = (longlong)plVar10;
                    LOCK();
                    bVar14 = plVar10 != DAT_14ca843c0;
                    plVar9 = plVar8;
                    if (bVar14) {
                      plVar10 = DAT_14ca843c0;
                      plVar9 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar9;
                    UNLOCK();
                  } while (bVar14);
                }
                else {
                  do {
                    *plVar8 = (longlong)plVar9;
                    LOCK();
                    bVar14 = plVar9 != DAT_14ca843c8;
                    plVar10 = plVar8;
                    if (bVar14) {
                      plVar9 = DAT_14ca843c8;
                      plVar10 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar10;
                    UNLOCK();
                  } while (bVar14);
                }
              }
            }
          }
          FUN_1400020a8(puVar7);
        }
      }
      iVar5 = (int)uStack_70;
      if ((int)uStack_70 == 0) {
        *(undefined8 *)(local_80 + (ulonglong)(cVar6 == '\x02') * 8) = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        plVar10 = (longlong *)FUN_14001cc68(0x10,0x10);
        *plVar10 = local_78;
        local_78 = 0;
        *(int *)(plVar10 + 1) = iVar5;
        *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_70._4_4_;
        *(longlong **)(local_80 + (ulonglong)(cVar6 == '\x02') * 8) = plVar10;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143171962 FUN_143171962 body=7811 status=ok
// SIG undefined FUN_143171962(void)

undefined8 FUN_143171962(undefined8 *param_1,byte param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  void *_Src;
  longlong lVar22;
  longlong *plVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  longlong lVar32;
  undefined4 *puVar33;
  longlong *plVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint *puVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_418 [32];
  int local_3f8;
  undefined8 local_3f0;
  ulonglong local_3e8;
  longlong *local_3d8;
  longlong *local_3d0;
  uint *local_3c8;
  byte local_3b9;
  ulonglong local_3b8;
  uint local_3ac;
  longlong *local_3a8;
  longlong *local_3a0;
  uint *local_398;
  uint *local_390;
  uint *local_388;
  ulonglong local_380;
  longlong local_378;
  ulonglong local_370;
  longlong local_368;
  longlong local_360;
  longlong *local_358;
  undefined8 local_350;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_418;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_3b9 = param_2;
  local_378 = param_3;
  FUN_144ac2eaa(param_1 + 0xe);
  plVar21 = param_1 + 0x23;
  uVar38 = param_1[0xc];
  local_3d0 = plVar21;
  local_3b8 = uVar38;
  if (*(int *)(param_1 + 0x24) == *(int *)((longlong)param_1 + 0x14c)) {
    if (plVar21 == (longlong *)(uVar38 + 0x2c0)) goto LAB_1431727b1;
    puVar31 = (uint *)(param_1 + 0x25);
    iVar20 = *(int *)(param_1 + 0x28);
    if (iVar20 != 0) {
      puVar13 = (uint *)param_1[0x27];
      if ((uint *)param_1[0x27] == (uint *)0x0) {
        puVar13 = puVar31;
      }
      uVar17 = *puVar13;
      if (uVar17 == 0) {
        iVar10 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar10 = iVar20 + -1;
        }
        uVar38 = 0;
        uVar24 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar24 = uVar38;
        }
        iVar10 = 0;
        do {
          if (uVar24 == uVar38) goto LAB_143171a05;
          iVar10 = iVar10 + 0x20;
          uVar17 = puVar13[uVar38 + 1];
          uVar38 = uVar38 + 1;
        } while (uVar17 == 0);
      }
      else {
        iVar10 = 0;
        uVar38 = 0;
      }
      uVar37 = (ulonglong)(-uVar17 & uVar17);
      uVar24 = uVar37 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar16 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar16 < iVar20) {
        local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,0xffffffff);
        do {
          lVar12 = *local_3d0;
          if (*(longlong *)(lVar12 + 8 + (longlong)iVar16 * 0x20) != 0) {
            FUN_1400020a8();
          }
          lVar12 = *(longlong *)(lVar12 + (longlong)iVar16 * 0x20);
          if (lVar12 != 0) {
            LOCK();
            piVar1 = (int *)(lVar12 + 0x478);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              FUN_1402cd3ea(*(undefined8 *)(lVar12 + 0x10));
            }
          }
          uVar17 = (uint)local_3d8 & ~(uint)uVar37;
          puVar13 = (uint *)param_1[0x27];
          if ((uint *)param_1[0x27] == (uint *)0x0) {
            puVar13 = puVar31;
          }
          iVar18 = *(int *)(param_1 + 0x28);
          iVar16 = (int)uVar38;
          lVar12 = (longlong)iVar16;
          local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,uVar17);
          uVar17 = puVar13[lVar12] & uVar17;
          if (uVar17 == 0) {
            iVar19 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar19 = iVar18 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar8 = iVar19;
            if (iVar19 < iVar16) {
              iVar8 = iVar16;
            }
            if (iVar16 < iVar19) {
              lVar26 = 0;
              do {
                uVar17 = puVar13[lVar12 + lVar26 + 1];
                if (uVar17 != 0) {
                  uVar38 = (ulonglong)(iVar16 + (int)lVar26 + 1);
                  local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,0xffffffff);
                  goto LAB_1431735cc;
                }
                iVar10 = iVar10 + 0x20;
                lVar26 = lVar26 + 1;
              } while (iVar8 - lVar12 != lVar26);
              local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,0xffffffff);
              iVar16 = iVar8;
            }
            uVar38 = (ulonglong)(iVar16 + 1);
            iVar16 = iVar18;
          }
          else {
LAB_1431735cc:
            uVar37 = (ulonglong)(-uVar17 & uVar17);
            uVar24 = uVar37 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar16 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar18 <= iVar16) {
              iVar16 = iVar18;
            }
          }
        } while (iVar16 != iVar20);
      }
    }
LAB_143171a05:
    uVar38 = local_3b8;
    if (param_1[0x23] != 0) {
      FUN_1400020a8();
    }
    plVar21 = local_3d0;
    param_1[0x23] = *(undefined8 *)(uVar38 + 0x2c0);
    *(undefined8 *)(uVar38 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(uVar38 + 0x2c8);
    *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(uVar38 + 0x2cc);
    *(undefined8 *)(uVar38 + 0x2c8) = 0;
    if (*(longlong *)(uVar38 + 0x2e0) == 0) {
      uVar4 = *(undefined4 *)(uVar38 + 0x2d4);
      uVar5 = *(undefined4 *)(uVar38 + 0x2d8);
      uVar6 = *(undefined4 *)(uVar38 + 0x2dc);
      *puVar31 = *(uint *)(uVar38 + 0x2d0);
      *(undefined4 *)((longlong)param_1 + 300) = uVar4;
      *(undefined4 *)(param_1 + 0x26) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar6;
    }
    if (param_1[0x27] != 0) {
      FUN_1400020a8();
    }
    param_1[0x27] = *(undefined8 *)(uVar38 + 0x2e0);
    *(undefined8 *)(uVar38 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(uVar38 + 0x2e8);
    *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)(uVar38 + 0x2ec);
    *(undefined8 *)(uVar38 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(uVar38 + 0x2f0);
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)(uVar38 + 0x2f4);
    *(undefined8 *)(uVar38 + 0x2f0) = 0xffffffff;
    if (*(longlong *)(uVar38 + 0x300) == 0) {
      *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(uVar38 + 0x2f8);
    }
    if (param_1[0x2b] != 0) {
      FUN_1400020a8();
    }
    param_1[0x2b] = *(undefined8 *)(uVar38 + 0x300);
    *(undefined8 *)(uVar38 + 0x300) = 0;
    puVar33 = (undefined4 *)(uVar38 + 0x308);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(uVar38 + 0x308);
  }
  else {
    uVar17 = *(uint *)(uVar38 + 0x2e8);
    if (uVar17 == 0) {
      puVar31 = (uint *)&DAT_00000001;
      uVar30 = 0;
      uVar24 = 0;
      uVar9 = 0;
    }
    else {
      puVar31 = *(uint **)(uVar38 + 0x2e0);
      if (*(uint **)(uVar38 + 0x2e0) == (uint *)0x0) {
        puVar31 = (uint *)(uVar38 + 0x2d0);
      }
      uVar9 = *puVar31;
      if (uVar9 == 0) {
        iVar20 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar20 = uVar17 - 1;
        }
        uVar24 = 0;
        uVar37 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar37 = uVar24;
        }
        uVar30 = 0;
        do {
          if (uVar37 == uVar24) goto LAB_143172588;
          uVar30 = uVar30 + 0x20;
          uVar9 = puVar31[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar30 = 0;
        uVar24 = 0;
      }
      puVar31 = (uint *)(ulonglong)(-uVar9 & uVar9);
      uVar37 = (longlong)puVar31 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar9 = (uVar30 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar9) {
        uVar9 = uVar17;
      }
    }
    if (uVar9 != uVar17) {
      local_3d8 = param_1 + 0x2a;
      local_3a0 = param_1 + 0x2b;
      local_3c8 = (uint *)(param_1 + 0x25);
      uVar27 = 0xffffffff;
      local_3a8 = (longlong *)(uVar38 + 0x2c0);
      local_390 = (uint *)(ulonglong)uVar17;
      local_388 = (uint *)(uVar38 + 0x2d0);
      do {
        local_380 = CONCAT44(local_380._4_4_,uVar27);
        plVar23 = (longlong *)(*local_3a8 + (longlong)(int)uVar9 * 0x20);
        uVar38 = *(ulonglong *)(*local_3a8 + (longlong)(int)uVar9 * 0x20);
        uVar17 = ((uint)(uVar38 >> 0x14) & 0xffff ^ (uint)(uVar38 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        uVar17 = uVar17 >> 0x10 ^ uVar17;
        iVar20 = *(int *)(param_1 + 0x24);
        iVar10 = *(int *)((longlong)param_1 + 0x14c);
        local_3ac = uVar30;
        if (iVar20 != iVar10) {
          plVar34 = (longlong *)param_1[0x2b];
          if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
            plVar34 = local_3d8;
          }
          iVar16 = *(int *)((longlong)plVar34 +
                           (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar17) * 4);
          if (iVar16 != -1) {
            do {
              lVar12 = *plVar21 + (longlong)iVar16 * 0x20;
              if (*(ulonglong *)(*plVar21 + (longlong)iVar16 * 0x20) == uVar38) {
                if (lVar12 != 0) goto LAB_143171ee5;
                break;
              }
              iVar16 = *(int *)(lVar12 + 0x18);
            } while (iVar16 != -1);
          }
        }
        if (iVar10 == 0) {
          *(int *)(param_1 + 0x24) = iVar20 + 1;
          if (*(int *)((longlong)param_1 + 0x124) == iVar20) {
            FUN_1447711aa(plVar21,iVar20);
          }
          iVar10 = *(int *)(param_1 + 0x28);
          if (iVar10 == 0) {
            iVar16 = -1;
          }
          else {
            iVar16 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar16 = iVar10 + -1;
            }
            iVar16 = iVar16 >> 5;
          }
          iVar18 = iVar10 + 1;
          iVar19 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar19 = iVar10;
          }
          if (iVar19 >> 5 == iVar16) {
            *(int *)(param_1 + 0x28) = iVar18;
          }
          else {
            if (*(int *)((longlong)param_1 + 0x144) <= iVar10) {
              iVar16 = iVar10;
              if (iVar10 + 0x20U < 0xa0) {
                iVar18 = 0x80;
              }
              else {
                uVar9 = iVar10 + 0x20U >> 5;
                if (*(int *)((longlong)param_1 + 0x144) + 0x1fU < 0xa0) {
                  uVar30 = 4;
                  if (4 < uVar9) {
                    uVar30 = uVar9;
                  }
                }
                else {
                  uVar30 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
                }
                uVar38 = (ulonglong)(uVar30 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar27 = (uint)(uVar38 + 0xf);
                    if (uVar30 < 0x1ffd) {
                      uVar38 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar38 + 0xf >> 4]];
                    }
                    else {
                      uVar37 = (ulonglong)(uVar27 & 0xfffffff0);
                      if (uVar37 < 0x7ff1) {
                        bVar15 = (&DAT_14c841e00)[uVar27 >> 4];
                        uVar35 = 0x32;
                        if (0x32 < bVar15) {
                          uVar35 = (ulonglong)bVar15;
                        }
                        uVar25 = 0x32 - (ulonglong)bVar15;
                        do {
                          uVar38 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1431723b2;
                          lVar12 = uVar35 + 1 + uVar25;
                          uVar25 = uVar25 - 1;
                        } while (lVar12 != 0x33);
                      }
                      uVar38 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar38 = 0x10;
                      }
                      uVar38 = -uVar38 & (uVar37 + uVar38) - 1;
                    }
                  }
                  else {
                    local_370 = (ulonglong)uVar9;
                    uVar38 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar38,0);
                    uVar9 = (uint)local_370;
                    iVar16 = *(int *)(param_1 + 0x28);
                  }
                }
LAB_1431723b2:
                iVar8 = (int)(uVar38 >> 2);
                iVar18 = iVar8 << 5;
                if (iVar8 < (int)uVar9) {
                  iVar18 = -0x20;
                }
              }
              *(int *)((longlong)param_1 + 0x144) = iVar18;
              FUN_1446efbd8(local_3c8,iVar16);
              iVar18 = *(int *)(param_1 + 0x28) + 1;
            }
            iVar16 = iVar18 + 0x1f;
            if (-1 < iVar18) {
              iVar16 = iVar18;
            }
            *(int *)(param_1 + 0x28) = iVar18;
            if (iVar18 % 0x20 != 0) {
              puVar13 = (uint *)param_1[0x27];
              if ((uint *)param_1[0x27] == (uint *)0x0) {
                puVar13 = local_3c8;
              }
              bVar15 = -(char)(iVar18 % 0x20);
              puVar13[iVar16 >> 5] = (puVar13[iVar16 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
            }
          }
          lVar12 = (longlong)iVar20;
          puVar13 = (uint *)param_1[0x27];
          if ((uint *)param_1[0x27] == (uint *)0x0) {
            puVar13 = local_3c8;
          }
          bVar15 = (byte)iVar10 & 0x1f;
          puVar13[iVar19 >> 5] =
               puVar13[iVar19 >> 5] & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
        }
        else {
          iVar20 = *(int *)(param_1 + 0x29);
          lVar12 = (longlong)iVar20;
          iVar16 = *(int *)(param_1[0x23] + 4 + lVar12 * 0x20);
          *(int *)(param_1 + 0x29) = iVar16;
          *(int *)((longlong)param_1 + 0x14c) = iVar10 + -1;
          if (iVar10 + -1 != 0) {
            *(undefined4 *)(param_1[0x23] + (longlong)iVar16 * 0x20) = 0xffffffff;
          }
        }
        plVar21 = local_3d0;
        puVar13 = (uint *)param_1[0x27];
        if ((uint *)param_1[0x27] == (uint *)0x0) {
          puVar13 = local_3c8;
        }
        iVar10 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar10 = iVar20;
        }
        puVar13[iVar10 >> 5] = puVar13[iVar10 >> 5] | 1 << ((byte)iVar20 & 0x1f);
        lVar26 = param_1[0x23];
        lVar22 = *plVar23;
        *(longlong *)(lVar26 + lVar12 * 0x20) = lVar22;
        if (lVar22 != 0) {
          LOCK();
          *(int *)(lVar22 + 0x478) = *(int *)(lVar22 + 0x478) + 1;
          UNLOCK();
        }
        plVar34 = (longlong *)(lVar26 + lVar12 * 0x20);
        plVar34[1] = 0;
        plVar34[2] = 0;
        *(undefined4 *)(plVar34 + 3) = 0xffffffff;
        uVar9 = *(int *)(param_1 + 0x24) - *(int *)((longlong)param_1 + 0x14c);
        if (1 < uVar9) {
          plVar11 = (longlong *)param_1[0x2b];
          if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
            plVar11 = local_3d8;
          }
          iVar10 = *(int *)((longlong)plVar11 +
                           (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar17) * 4);
          if (iVar10 != -1) {
            do {
              plVar11 = (longlong *)(*local_3d0 + (longlong)iVar10 * 0x20);
              lVar12 = *(longlong *)(*local_3d0 + (longlong)iVar10 * 0x20);
              if (lVar12 == *plVar34) {
                if (plVar11[1] != 0) {
                  FUN_1400020a8();
                  lVar12 = *plVar11;
                }
                if (lVar12 != 0) {
                  LOCK();
                  piVar1 = (int *)(lVar12 + 0x478);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    FUN_1402cd3ea(*(undefined8 *)(lVar12 + 0x10));
                  }
                }
                plVar21 = local_3d0;
                lVar12 = *plVar34;
                uVar4 = *(undefined4 *)((longlong)plVar34 + 4);
                lVar26 = plVar34[1];
                uVar5 = *(undefined4 *)((longlong)plVar34 + 0xc);
                plVar11[2] = plVar34[2];
                *(int *)plVar11 = (int)lVar12;
                *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
                *(int *)(plVar11 + 1) = (int)lVar26;
                *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
                FUN_147370168(local_3d0,iVar20,1);
                goto LAB_143171ec4;
              }
              iVar10 = (int)plVar11[3];
            } while (iVar10 != -1);
          }
        }
        uVar30 = 1;
        if (3 < uVar9) {
          uVar38 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
          lVar12 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar30 = 1 << ((byte)lVar12 & 0x1f);
        }
        if (((int)uVar9 < 1) || ((int)uVar30 <= *(int *)(param_1 + 0x2c))) {
          uVar17 = *(int *)(param_1 + 0x2c) - 1U & uVar17;
          *(uint *)((longlong)plVar34 + 0x1c) = uVar17;
          plVar11 = (longlong *)param_1[0x2b];
          if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
            plVar11 = local_3d8;
          }
          *(undefined4 *)(plVar34 + 3) =
               *(undefined4 *)
                ((longlong)plVar11 +
                ((longlong)*(int *)(param_1 + 0x2c) - 1U & (longlong)(int)uVar17) * 4);
          plVar34 = (longlong *)param_1[0x2b];
          if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
            plVar34 = local_3d8;
          }
          *(int *)((longlong)plVar34 +
                  ((longlong)*(int *)(param_1 + 0x2c) - 1U & (longlong)(int)uVar17) * 4) = iVar20;
        }
        else {
          *(uint *)(param_1 + 0x2c) = uVar30;
          if (param_1[0x2b] != 0) {
            FUN_1446efa72(local_3a0,0,0,4);
            uVar30 = *(uint *)(param_1 + 0x2c);
            if (uVar30 == 0) goto LAB_143171ec4;
          }
          if (uVar30 == 1) {
            if (*local_3a0 != 0) {
              FUN_1446efa72(local_3a0,0,0,4);
            }
LAB_1431720ab:
            uVar17 = 0;
            do {
              plVar34 = (longlong *)param_1[0x2b];
              if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
                plVar34 = local_3d8;
              }
              *(undefined4 *)
               ((longlong)plVar34 + (ulonglong)(*(int *)(param_1 + 0x2c) + 0x7fffffffU & uVar17) * 4
               ) = 0xffffffff;
              uVar17 = uVar17 + 1;
            } while (uVar30 != uVar17);
          }
          else {
            FUN_1446efa72(local_3a0,0,uVar30,4);
            if (0 < (int)uVar30) goto LAB_1431720ab;
          }
          iVar10 = *(int *)(param_1 + 0x28);
          if (iVar10 == 0) {
            uVar38 = 0;
            uVar37 = 1;
            iVar16 = 0;
            iVar18 = 0;
          }
          else {
            puVar13 = (uint *)param_1[0x27];
            if ((uint *)param_1[0x27] == (uint *)0x0) {
              puVar13 = local_3c8;
            }
            uVar17 = *puVar13;
            if (uVar17 == 0) {
              iVar16 = iVar10 + 0x1e;
              if (-1 < iVar10 + -1) {
                iVar16 = iVar10 + -1;
              }
              uVar38 = 0;
              uVar37 = (ulonglong)(uint)(iVar16 >> 5);
              if (iVar16 >> 5 < 1) {
                uVar37 = uVar38;
              }
              iVar18 = 0;
              do {
                if (uVar37 == uVar38) goto LAB_143171ec4;
                iVar18 = iVar18 + 0x20;
                uVar17 = puVar13[uVar38 + 1];
                uVar38 = uVar38 + 1;
              } while (uVar17 == 0);
            }
            else {
              uVar38 = 0;
              iVar18 = 0;
            }
            uVar37 = (ulonglong)(-uVar17 & uVar17);
            uVar35 = uVar37 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar16 = (iVar18 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar10 <= iVar16) {
              iVar16 = iVar10;
            }
          }
          if (iVar16 < iVar10) {
            uVar17 = 0xffffffff;
            do {
              lVar12 = param_1[0x23];
              lVar26 = (longlong)iVar16 * 0x20;
              uVar9 = ((uint)(*(ulonglong *)(lVar12 + lVar26) >> 0x14) & 0xffff ^
                      (uint)(*(ulonglong *)(lVar12 + lVar26) >> 4)) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              uVar35 = (longlong)(int)(uVar9 >> 0x10 ^ uVar9) &
                       (longlong)*(int *)(param_1 + 0x2c) - 1U;
              iVar10 = (int)uVar35;
              *(int *)(lVar12 + 0x1c + lVar26) = iVar10;
              plVar21 = (longlong *)param_1[0x2b];
              if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
                plVar21 = local_3d8;
              }
              *(undefined4 *)(lVar12 + 0x18 + lVar26) =
                   *(undefined4 *)
                    ((longlong)plVar21 + ((longlong)*(int *)(param_1 + 0x2c) - 1U & uVar35) * 4);
              plVar21 = (longlong *)param_1[0x2b];
              if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
                plVar21 = local_3d8;
              }
              *(int *)((longlong)plVar21 +
                      ((longlong)iVar10 & (longlong)*(int *)(param_1 + 0x2c) - 1U) * 4) = iVar16;
              uVar17 = ~(uint)uVar37 & uVar17;
              puVar13 = (uint *)param_1[0x27];
              if ((uint *)param_1[0x27] == (uint *)0x0) {
                puVar13 = local_3c8;
              }
              iVar10 = *(int *)(param_1 + 0x28);
              iVar16 = (int)uVar38;
              lVar12 = (longlong)iVar16;
              uVar9 = puVar13[lVar12] & uVar17;
              plVar21 = local_3d0;
              local_398 = puVar31;
              if (uVar9 == 0) {
                iVar19 = iVar10 + 0x1e;
                if (-1 < iVar10 + -1) {
                  iVar19 = iVar10 + -1;
                }
                iVar19 = iVar19 >> 5;
                iVar8 = iVar19;
                if (iVar19 < iVar16) {
                  iVar8 = iVar16;
                }
                if (iVar19 <= iVar16) break;
                lVar26 = 0;
                while( true ) {
                  iVar18 = iVar18 + 0x20;
                  uVar9 = puVar13[lVar12 + lVar26 + 1];
                  if (uVar9 != 0) break;
                  lVar26 = lVar26 + 1;
                  if (iVar8 - lVar12 == lVar26) goto LAB_143171ec4;
                }
                uVar38 = (ulonglong)(iVar16 + (int)lVar26 + 1);
                uVar17 = 0xffffffff;
              }
              uVar37 = (ulonglong)(-uVar9 & uVar9);
              uVar35 = uVar37 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar35 != 0) {
                for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              iVar16 = (iVar18 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            } while (iVar16 < iVar10);
          }
        }
LAB_143171ec4:
        lVar12 = *plVar21 + (longlong)iVar20 * 0x20;
LAB_143171ee5:
        uVar17 = *(uint *)(plVar23 + 2);
        if ((longlong)(int)uVar17 != 0) {
          iVar20 = *(int *)(lVar12 + 0x10);
          *(uint *)(lVar12 + 0x10) = iVar20 + uVar17;
          if ((uint)(*(int *)(lVar12 + 0x14) - iVar20) < uVar17) {
            FUN_144771048((longlong *)(lVar12 + 8),iVar20);
          }
          memmove((void *)((longlong)iVar20 * 8 + *(longlong *)(lVar12 + 8)),(void *)plVar23[1],
                  (longlong)(int)uVar17 << 3);
          *(undefined4 *)(plVar23 + 2) = 0;
        }
        uVar27 = (uint)local_380 & ~(uint)puVar31;
        puVar13 = *(uint **)(local_3b8 + 0x2e0);
        if (*(uint **)(local_3b8 + 0x2e0) == (uint *)0x0) {
          puVar13 = local_388;
        }
        uVar17 = *(uint *)(local_3b8 + 0x2e8);
        iVar20 = (int)uVar24;
        lVar12 = (longlong)iVar20;
        uVar9 = puVar13[lVar12] & uVar27;
        uVar30 = local_3ac;
        if (uVar9 == 0) {
          iVar10 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar10 = uVar17 - 1;
          }
          iVar10 = iVar10 >> 5;
          uVar30 = local_3ac + 0x20;
          iVar16 = iVar10;
          if (iVar10 < iVar20) {
            iVar16 = iVar20;
          }
          if (iVar20 < iVar10) {
            lVar26 = 0;
            do {
              uVar9 = puVar13[lVar12 + lVar26 + 1];
              if (uVar9 != 0) {
                uVar24 = (ulonglong)(iVar20 + (int)lVar26 + 1);
                uVar27 = 0xffffffff;
                goto LAB_143171fd6;
              }
              uVar30 = uVar30 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar16 - lVar12 != lVar26);
            uVar27 = 0xffffffff;
            iVar20 = iVar16;
          }
          uVar24 = (ulonglong)(iVar20 + 1);
          plVar21 = local_3d0;
          uVar9 = uVar17;
        }
        else {
LAB_143171fd6:
          puVar31 = (uint *)(ulonglong)(-uVar9 & uVar9);
          uVar38 = (longlong)puVar31 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar9 = (uVar30 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar17 <= (int)uVar9) {
            uVar9 = uVar17;
          }
        }
      } while (uVar9 != (uint)local_390);
      uVar38 = param_1[0xc];
    }
LAB_143172588:
    if (*(int *)(uVar38 + 0x2c8) == *(int *)(uVar38 + 0x2f4)) goto LAB_1431727b1;
    lVar12 = uVar38 + 0x2f8;
    if (*(longlong *)(uVar38 + 0x300) != 0) {
      lVar12 = *(longlong *)(uVar38 + 0x300);
    }
    iVar20 = *(int *)(uVar38 + 0x308);
    iVar10 = iVar20 + 3;
    if (-1 < iVar20) {
      iVar10 = iVar20;
    }
    if (*(int *)(uVar38 + 0x2c8) - *(int *)(uVar38 + 0x2f4) < iVar10 >> 2) {
      iVar20 = *(int *)(uVar38 + 0x2e8);
      if (iVar20 != 0) {
        puVar31 = *(uint **)(uVar38 + 0x2e0);
        if (*(uint **)(uVar38 + 0x2e0) == (uint *)0x0) {
          puVar31 = (uint *)(uVar38 + 0x2d0);
        }
        uVar17 = *puVar31;
        if (uVar17 == 0) {
          iVar10 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar10 = iVar20 + -1;
          }
          uVar24 = 0;
          uVar37 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar37 = uVar24;
          }
          iVar10 = 0;
          do {
            if (uVar37 == uVar24) goto LAB_1431725f0;
            iVar10 = iVar10 + 0x20;
            uVar17 = puVar31[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar24 = 0;
          iVar10 = 0;
        }
        uVar35 = (ulonglong)(-uVar17 & uVar17);
        uVar37 = uVar35 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar16 = (iVar10 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar16 < iVar20) {
          uVar17 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar12 + (longlong)
                       *(int *)(*(longlong *)(uVar38 + 0x2c0) + 0x1c + (longlong)iVar16 * 0x20) * 4)
                 = 0xffffffff;
            uVar17 = ~(uint)uVar35 & uVar17;
            puVar31 = *(uint **)(uVar38 + 0x2e0);
            if (*(uint **)(uVar38 + 0x2e0) == (uint *)0x0) {
              puVar31 = (uint *)(uVar38 + 0x2d0);
            }
            iVar18 = *(int *)(uVar38 + 0x2e8);
            iVar16 = (int)uVar24;
            lVar26 = (longlong)iVar16;
            uVar9 = puVar31[lVar26] & uVar17;
            if (uVar9 == 0) {
              iVar19 = iVar18 + 0x1e;
              if (-1 < iVar18 + -1) {
                iVar19 = iVar18 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar8 = iVar19;
              if (iVar19 < iVar16) {
                iVar8 = iVar16;
              }
              if (iVar16 < iVar19) {
                lVar22 = 0;
                do {
                  uVar9 = puVar31[lVar26 + lVar22 + 1];
                  if (uVar9 != 0) {
                    uVar24 = (ulonglong)(iVar16 + (int)lVar22 + 1);
                    uVar17 = 0xffffffff;
                    goto LAB_143173763;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar8 - lVar26 != lVar22);
                uVar17 = 0xffffffff;
                iVar16 = iVar8;
              }
              uVar24 = (ulonglong)(iVar16 + 1);
              iVar16 = iVar18;
            }
            else {
LAB_143173763:
              uVar35 = (ulonglong)(-uVar9 & uVar9);
              uVar37 = uVar35 * 2 + 1;
              lVar26 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                }
              }
              iVar16 = (iVar10 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
              if (iVar18 <= iVar16) {
                iVar16 = iVar18;
              }
            }
          } while (iVar16 != iVar20);
        }
      }
    }
    else if (0 < iVar20) {
      lVar26 = 0;
      do {
        *(undefined4 *)(lVar12 + lVar26 * 4) = 0xffffffff;
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(uVar38 + 0x308));
    }
LAB_1431725f0:
    local_3d8 = (longlong *)(uVar38 + 0x2c0);
    iVar20 = *(int *)(uVar38 + 0x2e8);
    local_3b8 = uVar38;
    if (iVar20 == 0) {
      uVar24 = 0;
      uVar37 = 1;
      iVar10 = 0;
      iVar16 = 0;
    }
    else {
      puVar31 = *(uint **)(uVar38 + 0x2e0);
      if (*(uint **)(uVar38 + 0x2e0) == (uint *)0x0) {
        puVar31 = (uint *)(uVar38 + 0x2d0);
      }
      uVar17 = *puVar31;
      if (uVar17 == 0) {
        iVar10 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar10 = iVar20 + -1;
        }
        uVar24 = 0;
        uVar37 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar37 = uVar24;
        }
        iVar16 = 0;
        do {
          if (uVar37 == uVar24) goto LAB_143172778;
          iVar16 = iVar16 + 0x20;
          uVar17 = puVar31[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar24 = 0;
        iVar16 = 0;
      }
      uVar37 = (ulonglong)(-uVar17 & uVar17);
      uVar35 = uVar37 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar20 <= iVar10) {
        iVar10 = iVar20;
      }
    }
    if (iVar10 < iVar20) {
      uVar17 = 0xffffffff;
      do {
        lVar12 = *local_3d8;
        if (*(longlong *)(lVar12 + 8 + (longlong)iVar10 * 0x20) != 0) {
          FUN_1400020a8();
        }
        lVar12 = *(longlong *)(lVar12 + (longlong)iVar10 * 0x20);
        if (lVar12 != 0) {
          LOCK();
          piVar1 = (int *)(lVar12 + 0x478);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            FUN_1402cd3ea(*(undefined8 *)(lVar12 + 0x10));
          }
        }
        uVar17 = uVar17 & ~(uint)uVar37;
        puVar31 = *(uint **)(local_3b8 + 0x2e0);
        if (*(uint **)(local_3b8 + 0x2e0) == (uint *)0x0) {
          puVar31 = (uint *)(uVar38 + 0x2d0);
        }
        iVar20 = *(int *)(local_3b8 + 0x2e8);
        iVar10 = (int)uVar24;
        lVar12 = (longlong)iVar10;
        uVar9 = puVar31[lVar12] & uVar17;
        if (uVar9 == 0) {
          iVar18 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar18 = iVar20 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar19 = iVar18;
          if (iVar18 < iVar10) {
            iVar19 = iVar10;
          }
          if (iVar18 <= iVar10) break;
          lVar26 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar9 = puVar31[lVar12 + lVar26 + 1];
            if (uVar9 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar19 - lVar12 == lVar26) goto LAB_143172778;
          }
          uVar24 = (ulonglong)(iVar10 + (int)lVar26 + 1);
          uVar17 = 0xffffffff;
        }
        uVar37 = (ulonglong)(-uVar9 & uVar9);
        uVar35 = uVar37 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar20);
    }
LAB_143172778:
    uVar38 = local_3b8;
    *(undefined4 *)(local_3b8 + 0x2c8) = 0;
    if (*(int *)(local_3b8 + 0x2cc) < 0) {
      FUN_1446f4a44(local_3d8);
    }
    *(undefined8 *)(uVar38 + 0x2f0) = 0xffffffff;
    puVar33 = (undefined4 *)(uVar38 + 0x2e8);
    plVar21 = local_3d0;
  }
  *puVar33 = 0;
LAB_1431727b1:
  if ((((*(int *)(param_1 + 0x1e) != 0) || (*(int *)(param_1 + 0x20) != 0)) ||
      (*(int *)(param_1 + 0x22) != 0)) ||
     (*(int *)(param_1 + 0x24) != *(int *)((longlong)param_1 + 0x14c))) {
    lVar12 = param_1[0xc];
    if (*(char *)(lVar12 + 0x278) == '\0') {
      if ((longlong)*(int *)(lVar12 + 0x248) != 0) {
        lVar26 = 0;
        do {
          if (*(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x240) + lVar26) + 0x28) != 0)
          goto LAB_1431727ef;
          lVar26 = lVar26 + 8;
        } while ((longlong)*(int *)(lVar12 + 0x248) * 8 != lVar26);
      }
    }
    else {
LAB_1431727ef:
      local_3a8 = param_1 + 0x1d;
      puVar31 = (uint *)(param_1 + 0x25);
      uVar17 = *(uint *)(param_1 + 0x28);
      local_3c8 = puVar31;
      if (uVar17 == 0) {
        uVar24 = 1;
        uVar38 = 0;
        iVar20 = 0;
        uVar9 = 0;
      }
      else {
        puVar13 = (uint *)param_1[0x27];
        if ((uint *)param_1[0x27] == (uint *)0x0) {
          puVar13 = puVar31;
        }
        uVar9 = *puVar13;
        if (uVar9 == 0) {
          iVar20 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar20 = uVar17 - 1;
          }
          uVar38 = 0;
          uVar24 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar24 = uVar38;
          }
          iVar20 = 0;
          do {
            if (uVar24 == uVar38) goto LAB_143172f1b;
            iVar20 = iVar20 + 0x20;
            uVar9 = puVar13[uVar38 + 1];
            uVar38 = uVar38 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar38 = 0;
          iVar20 = 0;
        }
        uVar24 = (ulonglong)(-uVar9 & uVar9);
        uVar37 = uVar24 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar9 = (iVar20 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar9) {
          uVar9 = uVar17;
        }
      }
      if (uVar9 != uVar17) {
        uVar30 = 0xffffffff;
        lVar12 = 0;
        local_3b8 = (ulonglong)uVar17;
        do {
          local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,iVar20);
          lVar26 = *plVar21;
          lVar36 = (longlong)(int)uVar9 * 0x20;
          local_358 = (longlong *)0x0;
          local_350 = (undefined1 *)0x200000001;
          local_368 = *(longlong *)(lVar26 + lVar36) + 0x40;
          lVar22 = *(longlong *)(*(longlong *)(lVar26 + lVar36) + 0x28);
          local_380 = uVar38;
          if ((*(byte *)(lVar22 + 0xdf) & 2) != 0) {
            lVar32 = *(longlong *)(lVar22 + 0x30);
            if (lVar32 == 0) {
              lVar32 = *(longlong *)(lVar22 + 0xe0);
              if (lVar32 != 0) {
                _Src = *(void **)(lVar32 + 0x10);
                uVar17 = *(uint *)(lVar32 + 0x18);
                goto LAB_14317297f;
              }
              _Src = (void *)(lVar22 + 0x38);
              local_350 = &DAT_200000002;
              uVar17 = 1;
            }
            else {
              uVar17 = (uint)*(byte *)(lVar32 + 0x81);
              _Src = (void *)(lVar32 + 0x70);
              if (*(byte *)(lVar32 + 0x81) == 0) {
                _Src = (void *)0x0;
              }
LAB_14317297f:
              if (uVar17 == 0) goto LAB_1431729df;
              local_350 = (undefined1 *)CONCAT44(2,uVar17 + 1);
              if (uVar17 == 1) {
                uVar17 = 1;
              }
              else {
                FUN_147385384(&local_368);
              }
            }
            plVar21 = local_358;
            if (local_358 == (longlong *)0x0) {
              plVar21 = &local_368;
            }
            memcpy(plVar21 + 1,_Src,(longlong)(int)uVar17 << 3);
          }
LAB_1431729df:
          if (lVar12 == 0) {
            lVar12 = param_1[0xd];
            if (lVar12 == 0) {
              lVar12 = FUN_144a719cc(*param_1,*(undefined4 *)(param_1 + 1));
              param_1[0xd] = lVar12;
            }
            lVar12 = FUN_14474793a(*param_1,lVar12,0,0);
          }
          plVar21 = local_358;
          if (local_358 == (longlong *)0x0) {
            plVar21 = &local_368;
          }
          lVar22 = (longlong)(int)local_350;
          local_3ac = uVar30;
          if (lVar22 != 0) {
            lVar32 = 0;
            bVar15 = DAT_14c760b88;
            do {
              if (((*(longlong *)((longlong)plVar21 + lVar32) != 0) && ((bVar15 & 1) != 0)) &&
                 (*(longlong *)(*(longlong *)((longlong)plVar21 + lVar32) + 8) != 0)) {
                FUN_144ad4010(*(undefined8 *)(lVar12 + 0x10));
                bVar15 = DAT_14c760b88;
              }
              lVar32 = lVar32 + 8;
            } while (lVar22 * 8 != lVar32);
          }
          if (local_358 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          plVar21 = (longlong *)(lVar26 + lVar36);
          if (*(longlong *)(*plVar21 + 0x38) != 0) {
            lVar26 = plVar21[2];
            uVar38 = (ulonglong)(int)lVar26;
            if (1 < (longlong)uVar38) {
              lVar22 = plVar21[1];
              memset(&local_358,0,0x2f0);
              local_360 = lVar22 + uVar38 * 8 + -8;
              local_368 = lVar22;
              fVar41 = logf((float)(int)lVar26);
              local_358 = (longlong *)CONCAT44(local_358._4_4_,(int)(longlong)(fVar41 + fVar41));
              plVar23 = &local_368;
              do {
                puVar13 = (uint *)*plVar23;
                puVar31 = (uint *)plVar23[1];
                iVar20 = (int)plVar23[2];
                iVar10 = (int)((ulonglong)((longlong)puVar31 - (longlong)puVar13) >> 3);
                puVar14 = puVar31;
                puVar29 = puVar13;
                if (iVar20 != 0) {
LAB_143172b2b:
                  if (8 < (int)(iVar10 + 1U)) {
                    uVar38 = (ulonglong)(iVar10 + 1U >> 1);
                    uVar3 = *(undefined8 *)(puVar13 + uVar38 * 2);
                    *(undefined8 *)(puVar13 + uVar38 * 2) = *(undefined8 *)puVar13;
                    *(undefined8 *)puVar13 = uVar3;
                    local_390 = puVar13;
                    local_388 = puVar31 + 2;
                    do {
                      puVar7 = local_390 + 2;
                      puVar39 = local_390 + 2;
                      do {
                        local_390 = puVar39;
                        local_398 = puVar7;
                        if (puVar31 < local_390) break;
                        puVar7 = local_398 + 2;
                        puVar39 = local_390 + 2;
                      } while (*local_390 <= *puVar13);
                      puVar7 = local_388 + -4;
                      puVar39 = local_388;
                      do {
                        puVar2 = puVar39;
                        puVar28 = puVar7;
                        puVar39 = puVar2 + -2;
                        if (puVar39 <= puVar13) break;
                        puVar7 = puVar28 + -2;
                      } while (*puVar13 <= *puVar39);
                      if (puVar39 < local_390) goto LAB_143172bdd;
                      uVar3 = *(undefined8 *)local_390;
                      *(undefined8 *)local_390 = *(undefined8 *)puVar39;
                      *(undefined8 *)puVar39 = uVar3;
                      local_388 = puVar39;
                    } while( true );
                  }
                  if (puVar13 < puVar31) {
                    do {
                      puVar14 = puVar13;
                      if (puVar13 + 2 <= puVar31) {
                        uVar17 = *puVar13;
                        puVar29 = puVar13 + 2;
                        do {
                          uVar9 = *puVar29;
                          bVar40 = uVar17 < uVar9;
                          if (uVar17 <= uVar9) {
                            uVar17 = uVar9;
                          }
                          if (bVar40) {
                            puVar14 = puVar29;
                          }
                          puVar29 = puVar29 + 2;
                        } while (puVar29 <= puVar31);
                      }
                      uVar3 = *(undefined8 *)puVar14;
                      *(undefined8 *)puVar14 = *(undefined8 *)puVar31;
                      *(undefined8 *)puVar31 = uVar3;
                      puVar31 = puVar31 + -2;
                    } while (puVar13 < puVar31);
                  }
                  goto LAB_143172ccb;
                }
LAB_143172ce4:
                FUN_143179457(puVar13);
LAB_143172ccb:
                plVar23 = plVar23 + -3;
              } while (&local_368 <= plVar23);
              uVar38 = (ulonglong)*(uint *)(plVar21 + 2);
            }
            if (0 < (int)uVar38) {
              iVar20 = 0;
              do {
                lVar26 = plVar21[1];
                lVar22 = (longlong)iVar20;
                iVar10 = *(int *)(lVar26 + lVar22 * 8);
                iVar18 = (int)uVar38;
                iVar16 = iVar20 + 1;
                if (iVar20 + 1 < iVar18) {
                  iVar16 = iVar18;
                }
                do {
                  lVar22 = lVar22 + 1;
                  iVar19 = *(int *)(lVar26 + -4 + lVar22 * 8);
                  iVar8 = iVar16;
                  if (iVar18 <= lVar22) break;
                  iVar20 = iVar20 + 1;
                  iVar8 = iVar20;
                } while (*(int *)(lVar26 + lVar22 * 8) == iVar19);
                iVar20 = iVar8;
                if (lVar12 == 0) {
                  lVar12 = param_1[0xd];
                  if (lVar12 == 0) {
                    lVar12 = FUN_144a719cc(*param_1,*(undefined4 *)(param_1 + 1));
                    param_1[0xd] = lVar12;
                  }
                  lVar12 = FUN_14474793a(*param_1,lVar12,0,0);
                }
                *(int *)(lVar12 + 0x1c0) = *(int *)(lVar12 + 0x1c0) + 1;
                lVar26 = *plVar21;
                iVar16 = 8;
                if (*(int *)(lVar26 + 0x18) == 3) {
                  iVar16 = 0x58;
                }
                local_3e8 = (ulonglong)(uint)(iVar16 * iVar10);
                local_3f0 = *(undefined8 *)(*(longlong *)(lVar26 + 0x28) + 0x20);
                local_3f8 = iVar19 - iVar10;
                (**(code **)(**(longlong **)(lVar12 + 0x28) + 0x1b0))
                          (*(longlong **)(lVar12 + 0x28),*(undefined8 *)(lVar26 + 0x38));
                uVar38 = (ulonglong)*(uint *)(plVar21 + 2);
              } while (iVar20 < (int)*(uint *)(plVar21 + 2));
            }
          }
          puVar31 = local_3c8;
          uVar30 = local_3ac & ~(uint)uVar24;
          puVar13 = (uint *)param_1[0x27];
          if ((uint *)param_1[0x27] == (uint *)0x0) {
            puVar13 = local_3c8;
          }
          uVar17 = *(uint *)(param_1 + 0x28);
          iVar10 = (int)local_380;
          lVar26 = (longlong)iVar10;
          uVar9 = puVar13[lVar26] & uVar30;
          uVar38 = local_380;
          iVar20 = (uint)local_3d8;
          if (uVar9 == 0) {
            iVar16 = uVar17 + 0x1e;
            if (-1 < (int)(uVar17 - 1)) {
              iVar16 = uVar17 - 1;
            }
            iVar16 = iVar16 >> 5;
            iVar20 = (uint)local_3d8 + 0x20;
            iVar18 = iVar16;
            if (iVar16 < iVar10) {
              iVar18 = iVar10;
            }
            if (iVar10 < iVar16) {
              lVar22 = 0;
              do {
                uVar9 = puVar13[lVar26 + lVar22 + 1];
                if (uVar9 != 0) {
                  uVar30 = 0xffffffff;
                  uVar38 = (ulonglong)(iVar10 + (int)lVar22 + 1);
                  goto LAB_143172e66;
                }
                iVar20 = iVar20 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar18 - lVar26 != lVar22);
              uVar30 = 0xffffffff;
              lVar26 = (longlong)iVar18;
            }
            uVar38 = lVar26 + 1U & 0xffffffff;
            uVar9 = uVar17;
          }
          else {
LAB_143172e66:
            uVar24 = (ulonglong)(-uVar9 & uVar9);
            uVar37 = uVar24 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            uVar9 = (iVar20 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if ((int)uVar17 <= (int)uVar9) {
              uVar9 = uVar17;
            }
          }
          plVar21 = local_3d0;
        } while (uVar9 != (uint)local_3b8);
        if (lVar12 != 0) {
          FUN_144a537b2(lVar12);
          lVar26 = param_1[0xc];
          iVar20 = *(int *)(lVar26 + 0x228);
          *(uint *)(lVar26 + 0x228) = iVar20 + 1U;
          if (*(uint *)(lVar26 + 0x22c) < iVar20 + 1U) {
            FUN_144ad40f4((longlong *)(lVar26 + 0x220),iVar20);
          }
          *(longlong *)(*(longlong *)(lVar26 + 0x220) + (longlong)iVar20 * 8) = lVar12;
        }
      }
LAB_143172f1b:
      lVar12 = param_1[0xc];
      if ((longlong *)(lVar12 + 0x290) != local_3a8) {
        if (*(longlong *)(lVar12 + 0x290) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar12 + 0x290) = param_1[0x1d];
        param_1[0x1d] = 0;
        *(undefined4 *)(lVar12 + 0x298) = *(undefined4 *)(param_1 + 0x1e);
        *(undefined4 *)(lVar12 + 0x29c) = *(undefined4 *)((longlong)param_1 + 0xf4);
        param_1[0x1e] = 0;
        if (*(longlong *)(lVar12 + 0x2a0) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar12 + 0x2a0) = param_1[0x1f];
        param_1[0x1f] = 0;
        *(undefined4 *)(lVar12 + 0x2a8) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(lVar12 + 0x2ac) = *(undefined4 *)((longlong)param_1 + 0x104);
        param_1[0x20] = 0;
        if (*(longlong *)(lVar12 + 0x2b0) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar12 + 0x2b0) = param_1[0x21];
        uVar38 = 0;
        param_1[0x21] = 0;
        *(undefined4 *)(lVar12 + 0x2b8) = *(undefined4 *)(param_1 + 0x22);
        *(undefined4 *)(lVar12 + 700) = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[0x22] = 0;
        puVar13 = (uint *)(lVar12 + 0x2d0);
        iVar20 = *(int *)(lVar12 + 0x2e8);
        if (iVar20 != 0) {
          puVar14 = *(uint **)(lVar12 + 0x2e0);
          if (*(uint **)(lVar12 + 0x2e0) == (uint *)0x0) {
            puVar14 = puVar13;
          }
          uVar17 = *puVar14;
          uVar24 = (ulonglong)local_3d0 >> 0x20;
          local_3d0 = (longlong *)(uVar24 << 0x20);
          puVar31 = local_3c8;
          if (uVar17 == 0) {
            iVar10 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar10 = iVar20 + -1;
            }
            uVar38 = 0;
            uVar37 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar37 = uVar38;
            }
            local_3d0 = (longlong *)(uVar24 << 0x20);
            do {
              if (uVar37 == uVar38) goto LAB_14317301b;
              local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,(int)local_3d0 + 0x20);
              uVar17 = puVar14[uVar38 + 1];
              uVar38 = uVar38 + 1;
            } while (uVar17 == 0);
          }
          uVar37 = (ulonglong)(-uVar17 & uVar17);
          uVar24 = uVar37 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar10 = ((int)local_3d0 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if (iVar10 < iVar20) {
            local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,0xffffffff);
            do {
              lVar26 = *(longlong *)(lVar12 + 0x2c0);
              if (*(longlong *)(lVar26 + 8 + (longlong)iVar10 * 0x20) != 0) {
                FUN_1400020a8();
              }
              lVar26 = *(longlong *)(lVar26 + (longlong)iVar10 * 0x20);
              if (lVar26 != 0) {
                LOCK();
                piVar1 = (int *)(lVar26 + 0x478);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  FUN_1402cd3ea(*(undefined8 *)(lVar26 + 0x10));
                }
              }
              uVar17 = (uint)local_3d8 & ~(uint)uVar37;
              puVar31 = *(uint **)(lVar12 + 0x2e0);
              if (*(uint **)(lVar12 + 0x2e0) == (uint *)0x0) {
                puVar31 = puVar13;
              }
              iVar16 = *(int *)(lVar12 + 0x2e8);
              iVar10 = (int)uVar38;
              lVar26 = (longlong)iVar10;
              local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,uVar17);
              uVar17 = puVar31[lVar26] & uVar17;
              if (uVar17 == 0) {
                iVar18 = iVar16 + 0x1e;
                if (-1 < iVar16 + -1) {
                  iVar18 = iVar16 + -1;
                }
                iVar18 = iVar18 >> 5;
                local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,(int)local_3d0 + 0x20);
                iVar19 = iVar18;
                if (iVar18 < iVar10) {
                  iVar19 = iVar10;
                }
                if (iVar10 < iVar18) {
                  lVar22 = 0;
                  do {
                    uVar17 = puVar31[lVar26 + lVar22 + 1];
                    if (uVar17 != 0) {
                      uVar38 = (ulonglong)(iVar10 + (int)lVar22 + 1);
                      local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,0xffffffff);
                      goto LAB_143173429;
                    }
                    local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,(int)local_3d0 + 0x20);
                    lVar22 = lVar22 + 1;
                  } while (iVar19 - lVar26 != lVar22);
                  local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,0xffffffff);
                  iVar10 = iVar19;
                }
                uVar38 = (ulonglong)(iVar10 + 1);
                iVar10 = iVar16;
              }
              else {
LAB_143173429:
                uVar37 = (ulonglong)(-uVar17 & uVar17);
                uVar24 = uVar37 * 2 + 1;
                lVar26 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                iVar10 = ((int)local_3d0 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                if (iVar16 <= iVar10) {
                  iVar10 = iVar16;
                }
              }
              puVar31 = local_3c8;
            } while (iVar10 != iVar20);
          }
        }
LAB_14317301b:
        if (*(longlong *)(lVar12 + 0x2c0) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar12 + 0x2c0) = param_1[0x23];
        param_1[0x23] = 0;
        *(undefined4 *)(lVar12 + 0x2c8) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(lVar12 + 0x2cc) = *(undefined4 *)((longlong)param_1 + 0x124);
        param_1[0x24] = 0;
        if (param_1[0x27] == 0) {
          uVar17 = puVar31[1];
          uVar9 = puVar31[2];
          uVar30 = puVar31[3];
          *puVar13 = *puVar31;
          *(uint *)(lVar12 + 0x2d4) = uVar17;
          *(uint *)(lVar12 + 0x2d8) = uVar9;
          *(uint *)(lVar12 + 0x2dc) = uVar30;
        }
        if (*(longlong *)(lVar12 + 0x2e0) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar12 + 0x2e0) = param_1[0x27];
        param_1[0x27] = 0;
        *(undefined4 *)(lVar12 + 0x2e8) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(lVar12 + 0x2ec) = *(undefined4 *)((longlong)param_1 + 0x144);
        param_1[0x28] = 0;
        *(undefined4 *)(lVar12 + 0x2f0) = *(undefined4 *)(param_1 + 0x29);
        *(undefined4 *)(lVar12 + 0x2f4) = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[0x29] = 0xffffffff;
        if (param_1[0x2b] == 0) {
          *(undefined4 *)(lVar12 + 0x2f8) = *(undefined4 *)(param_1 + 0x2a);
        }
        if (*(longlong *)(lVar12 + 0x300) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar12 + 0x300) = param_1[0x2b];
        param_1[0x2b] = 0;
        *(undefined4 *)(lVar12 + 0x308) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
  }
  lVar12 = param_1[0xc];
  if (param_1[0xd] != 0) {
    iVar20 = *(int *)(lVar12 + 0x288);
    *(uint *)(lVar12 + 0x288) = iVar20 + 1U;
    if (*(uint *)(lVar12 + 0x28c) < iVar20 + 1U) {
      FUN_14476c338((longlong *)(lVar12 + 0x280),iVar20);
    }
    *(undefined8 *)(*(longlong *)(lVar12 + 0x280) + (longlong)iVar20 * 8) = param_1[0xd];
    param_1[0xd] = 0;
    lVar12 = param_1[0xc];
  }
  lVar26 = param_1[4];
  param_1[4] = lVar26 + 1;
  *(longlong *)(lVar12 + 0x250) = lVar26 + 1;
  *(byte *)(param_1[0xc] + 0x1d8) = *(byte *)(param_1[0xc] + 0x1d8) | local_3b9;
  lVar12 = (longlong)*(int *)(param_1[0xc] + 0x248);
  if (lVar12 != 0) {
    lVar26 = *(longlong *)(param_1[0xc] + 0x240);
    lVar22 = 0;
    do {
      lVar36 = *(longlong *)(lVar26 + lVar22);
      uVar3 = *(undefined8 *)(param_1[0xc] + 0x250);
      *(undefined8 **)(lVar36 + 0x10) = param_1 + 3;
      *(undefined8 *)(lVar36 + 0x18) = uVar3;
      *(undefined1 *)(lVar36 + 0x20) = 1;
      lVar22 = lVar22 + 8;
    } while (lVar12 * 8 != lVar22);
  }
  iVar20 = *(int *)(local_378 + 0x408);
  *(uint *)(local_378 + 0x408) = iVar20 + 1U;
  if (*(uint *)(local_378 + 0x40c) < iVar20 + 1U) {
    FUN_147385456(local_378,iVar20);
  }
  lVar12 = *(longlong *)(local_378 + 0x400);
  if (*(longlong *)(local_378 + 0x400) == 0) {
    lVar12 = local_378;
  }
  *(undefined8 *)(lVar12 + (longlong)iVar20 * 8) = param_1[0xc];
  param_1[0xc] = 0;
  if ((local_60 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return param_1[4];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143172bdd:
  uVar3 = *(undefined8 *)puVar13;
  *(undefined8 *)puVar13 = *(undefined8 *)puVar39;
  *(undefined8 *)puVar39 = uVar3;
  iVar20 = iVar20 + -1;
  puVar2 = puVar2 + -4;
  if ((longlong)puVar28 - (longlong)puVar29 < (longlong)puVar14 - (longlong)local_398) {
    if (local_390 < puVar31) {
      *plVar23 = (longlong)local_390;
      plVar23[1] = (longlong)puVar31;
      *(int *)(plVar23 + 2) = iVar20;
      plVar23 = plVar23 + 3;
    }
    puVar31 = puVar2;
    puVar29 = puVar13;
    if (puVar39 <= puVar13 + 2) goto LAB_143172ccb;
  }
  else {
    if (puVar13 + 2 < puVar39) {
      *plVar23 = (longlong)puVar13;
      plVar23[1] = (longlong)puVar2;
      *(int *)(plVar23 + 2) = iVar20;
      plVar23 = plVar23 + 3;
    }
    puVar13 = local_390;
    puVar28 = puVar31;
    puVar29 = local_398;
    if (puVar31 <= local_390) goto LAB_143172ccb;
  }
  iVar10 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar29) >> 3);
  puVar14 = puVar28;
  if (iVar20 == 0) goto LAB_143172ce4;
  goto LAB_143172b2b;
}



// FUNCTION 1431737e6 FUN_1431737e6 body=69 status=ok
// SIG undefined FUN_1431737e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431737e6(void)

{
  _DAT_14ca77350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143173828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77358,1);
  return;
}



// FUNCTION 14317382b FUN_14317382b body=69 status=ok
// SIG undefined FUN_14317382b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317382b(void)

{
  _DAT_14ca77370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317386d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77378,1);
  return;
}



// FUNCTION 143173870 FUN_143173870 body=69 status=ok
// SIG undefined FUN_143173870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143173870(void)

{
  _DAT_14ca77380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431738b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77388,1);
  return;
}



// FUNCTION 1431738b5 FUN_1431738b5 body=69 status=ok
// SIG undefined FUN_1431738b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431738b5(void)

{
  _DAT_14ca77398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431738f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca773a0,1);
  return;
}



// FUNCTION 1431738fa FUN_1431738fa body=460 status=ok
// SIG undefined FUN_1431738fa(void)

void FUN_1431738fa(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  param_2[4] = DAT_14ca84eb8 << 10;
  param_2[5] = DAT_14ca84ec0 << 10;
  lVar5 = DAT_14ca84ec8;
  param_2[7] = DAT_14ca84ec8;
  *param_2 = DAT_14ca773f8;
  param_2[1] = DAT_14ca77400;
  param_2[2] = DAT_14ca77408;
  param_2[3] = -(ulonglong)(DAT_14ca77410 == 0) | DAT_14ca77410;
  param_2[6] = param_2[4];
  if (DAT_14ca77368 != 0) {
    puVar3 = (ulonglong *)FUN_1403f51e6(**(undefined8 **)(param_1 + 0x1b0));
    lVar5 = (longlong)((float)*puVar3 * 0.9);
    lVar7 = (longlong)((float)lVar5 * 0.05);
    param_2[3] = lVar5;
    uVar1 = puVar3[2];
    lVar6 = lVar5 - uVar1;
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar6 < 0) {
      uVar2 = *puVar3;
      lVar7 = (lVar6 + lVar4) - lVar7;
      lVar5 = 0x6400000;
      if (0x6400000 < lVar7) {
        lVar5 = lVar7;
      }
      param_2[7] = lVar5;
      if (((0x6400000 < lVar7) && (uVar2 < uVar1)) && (lVar4 <= lVar5)) {
        FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x1b9,
                      L"Video memory usage is overbudget by %llu MB and the texture pool size didn\'t shrink."
                      ,puVar3[2] - *puVar3 >> 0x14);
        lVar5 = param_2[7];
      }
    }
    else if (lVar7 < lVar6) {
      lVar7 = (lVar6 + lVar4) - lVar7;
      lVar4 = lVar7;
      if (0 < DAT_14ca84ed0) {
        auVar8 = roundss(ZEXT816(0),
                         ZEXT416((uint)((float)DAT_14ca84ed0 * 0.01 * (float)lVar5 * 0.0009765625 *
                                       0.0009765625)),0xb);
        lVar4 = (longlong)auVar8._0_4_ << 0x14;
      }
      lVar5 = 0x7fffffffffffffff;
      if (0 < DAT_14ca84ec8) {
        lVar5 = DAT_14ca84ec8;
      }
      if (lVar7 < lVar5) {
        lVar5 = lVar7;
      }
      if (lVar4 < lVar5) {
        lVar5 = lVar4;
      }
      param_2[7] = lVar5;
    }
    else {
      param_2[7] = lVar4;
      lVar5 = lVar4;
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar5;
  return;
}



// FUNCTION 143173ac6 FUN_143173ac6 body=5204 status=ok
// SIG undefined FUN_143173ac6(void)

longlong *
FUN_143173ac6(longlong *param_1,longlong *param_2,uint param_3,uint param_4,byte param_5,
             uint param_6,longlong **param_7,undefined8 param_8,longlong param_9,uint param_10,
             undefined8 param_11,longlong *param_12)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  HANDLE pvVar17;
  undefined4 *puVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  uint *puVar22;
  int iVar23;
  byte bVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulonglong *puVar27;
  longlong lVar28;
  longlong **pplVar29;
  code *pcVar30;
  undefined8 uVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_758 [32];
  longlong local_738;
  longlong *plStack_730;
  longlong **local_728;
  longlong **pplStack_720;
  longlong **local_718;
  undefined1 *local_710;
  byte local_6f9;
  longlong local_6f8;
  uint local_6ec;
  ulonglong local_6e8;
  longlong local_6e0;
  ulonglong local_6d8;
  undefined8 local_6d0;
  longlong local_6c8;
  longlong *local_6c0;
  ulonglong local_6b8;
  longlong *local_6b0;
  void *local_6a8;
  int local_69c;
  longlong *local_698;
  SIZE_T local_690;
  undefined1 local_688 [8];
  undefined8 *local_680;
  longlong *local_678;
  longlong *local_670;
  longlong *local_668;
  undefined8 local_660;
  longlong lStack_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  longlong local_608;
  undefined8 uStack_600;
  undefined1 local_5f8;
  undefined2 local_5f7;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong lStack_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 local_580;
  undefined2 local_57f;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined8 uStack_570;
  ulonglong local_568;
  uint uStack_560;
  undefined4 uStack_55c;
  int local_558;
  undefined8 uStack_554;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  longlong *local_540;
  undefined8 local_538 [7];
  longlong *local_500;
  longlong *local_4f8;
  longlong *plStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined1 local_478 [8];
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 local_44c;
  undefined4 uStack_448;
  undefined8 uStack_444;
  undefined8 local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  ulonglong local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined8 local_400;
  undefined1 local_258 [32];
  undefined1 *local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  ulonglong local_218;
  undefined1 local_210 [336];
  longlong **local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  uint local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined2 local_8f;
  byte local_8d;
  undefined2 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_758;
  local_6b0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca773b4) && (FUN_144b3d300(&DAT_14ca773b4), DAT_14ca773b4 == -1)) {
    FUN_1446f470e(&DAT_14ca773ac,L"RHIAsyncCreateTexture2D",1);
    _Init_thread_footer(&DAT_14ca773b4);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca773c0) && (FUN_144b3d300(&DAT_14ca773c0), DAT_14ca773c0 == -1)) {
    FUN_1446f470e(&DAT_14ca773b8,L"FRHITexture",1);
    _Init_thread_footer(&DAT_14ca773c0);
  }
  local_6d0 = CONCAT44(local_6d0._4_4_,DAT_14c760da4);
  local_a4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_9c = CONCAT44(param_4,param_3);
  local_c0 = param_7;
  local_8d = param_5;
  local_8c = 0xff00;
  local_94 = 0x10001;
  local_90 = (undefined1)param_6;
  local_8f = 1;
  local_b8 = 1;
  local_a0 = 0;
  local_b4 = 0;
  uStack_ac = 0;
  local_6e8 = CONCAT44(local_6e8._4_4_,local_a4);
  local_88 = 0x70;
  local_80 = param_11;
  local_6e0 = (ulonglong)param_5 * 3;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_558 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)(uint)((int)local_6e0 << 4));
  local_6d8 = CONCAT44(local_6d8._4_4_,local_558);
  if (((ulonglong)param_7 & 0x10) == 0) {
    if (local_558 < 0x49) {
      if (local_558 < 0x2c) {
        if (local_558 == 0x1b) {
          local_6f8 = CONCAT44(local_6f8._4_4_,0x1c);
          goto LAB_143173ccf;
        }
        if (local_558 == 0x13) {
LAB_143174da7:
          local_6f8 = CONCAT44(local_6f8._4_4_,0x15);
          goto LAB_143173ccf;
        }
        if (local_558 == 0x27) goto LAB_143174eff;
      }
      else {
        if (local_558 == 0x46) {
          local_6f8 = CONCAT44(local_6f8._4_4_,0x47);
          goto LAB_143173ccf;
        }
        if (local_558 == 0x35) {
LAB_143174dcf:
          local_6f8 = CONCAT44(local_6f8._4_4_,0x38);
          goto LAB_143173ccf;
        }
        if (local_558 == 0x2c) {
LAB_143173cb8:
          local_6f8 = CONCAT44(local_6f8._4_4_,0x2e);
          goto LAB_143173ccf;
        }
      }
    }
    else if (local_558 < 0x61) {
      if (local_558 == 0x5a) {
        local_6f8 = CONCAT44(local_6f8._4_4_,0x57);
        goto LAB_143173ccf;
      }
      if (local_558 == 0x4c) {
        local_6f8 = CONCAT44(local_6f8._4_4_,0x4d);
        goto LAB_143173ccf;
      }
      if (local_558 == 0x49) {
        local_6f8 = CONCAT44(local_6f8._4_4_,0x4a);
        goto LAB_143173ccf;
      }
    }
    else if (local_558 == 0x61) {
      local_6f8 = CONCAT44(local_6f8._4_4_,0x62);
      goto LAB_143173ccf;
    }
  }
  else if (local_558 < 0x5a) {
    if (local_558 < 0x46) {
      if (local_558 < 0x27) {
        if (local_558 == 0x13) goto LAB_143174da7;
        if (local_558 == 0x1b) {
          local_6f8 = CONCAT44(local_6f8._4_4_,0x1d);
          goto LAB_143173ccf;
        }
      }
      else {
        if (local_558 == 0x27) {
LAB_143174eff:
          local_6f8 = CONCAT44(local_6f8._4_4_,0x29);
          goto LAB_143173ccf;
        }
        if (local_558 == 0x2c) goto LAB_143173cb8;
        if (local_558 == 0x35) goto LAB_143174dcf;
      }
    }
    else {
      if (local_558 == 0x46) {
        local_6f8 = CONCAT44(local_6f8._4_4_,0x48);
        goto LAB_143173ccf;
      }
      if (local_558 == 0x4c) {
        local_6f8 = CONCAT44(local_6f8._4_4_,0x4e);
        goto LAB_143173ccf;
      }
      if (local_558 == 0x49) {
        local_6f8 = CONCAT44(local_6f8._4_4_,0x4b);
        goto LAB_143173ccf;
      }
    }
  }
  else {
    local_6f8 = CONCAT44(local_6f8._4_4_,0x5b);
    if (local_558 == 0x5a) goto LAB_143173ccf;
    if (local_558 == 0x61) {
      local_6f8 = CONCAT44(local_6f8._4_4_,99);
      goto LAB_143173ccf;
    }
  }
  local_6f8 = CONCAT44(local_6f8._4_4_,local_558);
LAB_143173ccf:
  local_578 = 3;
  uStack_570 = 0;
  uStack_55c = CONCAT22((short)param_6,1);
  uStack_554 = 1;
  uStack_54c = 0;
  uStack_548 = 0;
  local_698 = param_2;
  local_568 = (ulonglong)param_3;
  uStack_560 = param_4;
  memset(local_228,0,0x168);
  if (param_10 != 0) {
    uVar21 = (ulonglong)(uint)((int)local_6e0 << 4);
    uVar11 = *(uint *)((longlong)&DAT_14c87341c + uVar21);
    uVar12 = *(uint *)((longlong)&DAT_14c873420 + uVar21);
    iVar20 = *(int *)((longlong)&DAT_14c873428 + uVar21);
    puVar27 = &local_218;
    uVar21 = 0;
    do {
      uVar9 = ((param_3 >> ((byte)uVar21 & 0x1f)) + (uVar11 - 1)) / uVar11;
      uVar10 = ((param_4 >> ((byte)uVar21 & 0x1f)) + (uVar12 - 1)) / uVar12;
      puVar27[-2] = *(ulonglong *)(param_9 + uVar21 * 8);
      uVar9 = (uVar9 + (uVar9 == 0)) * iVar20;
      puVar27[-1] = (ulonglong)uVar9;
      *puVar27 = (ulonglong)(uVar9 * (uVar10 + (uVar10 == 0)));
      uVar21 = uVar21 + 1;
      puVar27 = puVar27 + 3;
    } while (param_10 != uVar21);
  }
  local_6a8 = (void *)local_6b0[0x3c];
  local_6ec = *(uint *)(local_6b0 + 0x3d);
  if (param_10 < param_6) {
    uVar21 = (ulonglong)(uint)((int)local_6e0 << 4);
    iVar20 = *(int *)((longlong)&DAT_14c873428 + uVar21);
    puVar27 = &local_218 + (ulonglong)param_10 * 3;
    do {
      uVar11 = (((param_3 >> ((byte)param_10 & 0x1f)) + *(uint *)((longlong)&DAT_14c87341c + uVar21)
                ) - 1) / *(uint *)((longlong)&DAT_14c87341c + uVar21);
      iVar23 = uVar11 + (uVar11 == 0);
      uVar11 = (((param_4 >> ((byte)param_10 & 0x1f)) + *(uint *)((longlong)&DAT_14c873420 + uVar21)
                ) - 1) / *(uint *)((longlong)&DAT_14c873420 + uVar21);
      uVar12 = iVar23 * iVar20;
      uVar11 = (uVar11 + (uVar11 == 0)) * uVar12;
      uVar14 = (ulonglong)uVar11;
      if (local_6ec < uVar11) {
        local_6a8 = (void *)FUN_14001cc68(uVar14);
        memset(local_6a8,0,uVar14);
        iVar20 = *(int *)((longlong)&DAT_14c873428 + uVar21);
        uVar12 = iVar23 * iVar20;
        local_6ec = uVar11;
      }
      puVar27[-2] = (ulonglong)local_6a8;
      puVar27[-1] = (ulonglong)uVar12;
      *puVar27 = uVar14;
      param_10 = param_10 + 1;
      puVar27 = puVar27 + 3;
    } while (param_6 != param_10);
    iVar20 = DAT_14c760da4;
    uVar11 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  else {
    iVar20 = (int)local_6d0;
    uVar11 = (uint)local_6e8;
  }
  uVar21 = local_6d8;
  if (uVar11 == 0) {
    uVar12 = 0x20;
  }
  else {
    uVar12 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
  }
  lVar28 = *(longlong *)local_6b0[0x36];
  bVar33 = true;
  if (iVar20 == 0) {
    lVar15 = 0;
  }
  else {
    local_6e0 = CONCAT71(local_6e0._1_7_,(int)local_6f8 == 0x31);
    local_6f9 = (int)local_6f8 == 0x23;
    local_6d0 = CONCAT71(local_6d0._1_7_,(int)local_6f8 == 0x16);
    local_6b8 = CONCAT71(local_6b8._1_7_,(int)local_6f8 == 0x2f);
    lVar15 = 0;
    local_6c0 = (longlong *)CONCAT44(local_6c0._4_4_,uVar12);
    uVar14 = (ulonglong)uVar12;
    local_6e8 = CONCAT44(local_6e8._4_4_,uVar11);
    do {
      uVar31 = *(undefined8 *)(lVar28 + 2000 + uVar14 * 8);
      lVar13 = (**(code **)(*local_6b0 + 0x638))(local_6b0,&local_c0,uVar31);
      plVar1 = (longlong *)(lVar13 + 0x60);
      plStack_730 = plVar1;
      if (lVar13 == 0) {
        plStack_730 = (longlong *)0x0;
      }
      local_738 = lVar13 + 0xa8;
      local_400 = 0;
      local_438._0_4_ = local_578;
      local_438._4_4_ = uStack_574;
      uStack_430 = (undefined4)uStack_570;
      uStack_42c = uStack_570._4_4_;
      local_428 = local_568;
      uStack_420 = CONCAT44(uStack_55c,uStack_560);
      local_418 = CONCAT44((undefined4)uStack_554,local_558);
      uStack_410 = uStack_554._4_4_;
      uStack_40c = uStack_54c;
      local_408 = CONCAT44(uStack_544,uStack_548);
      local_710 = (undefined1 *)0x0;
      pplStack_720 = param_7;
      local_728 = (longlong **)CONCAT71(local_728._1_7_,param_5);
      local_718 = (longlong **)((ulonglong)local_718 & 0xffffffff00000000);
      FUN_14038721c(uVar31,lVar28,&local_438,0);
      local_418 = 0;
      uStack_42c = 0;
      local_438._0_4_ = (int)local_6f8;
      local_438._4_4_ = 4;
      uStack_430 = 0x1688;
      local_428 = (ulonglong)param_6 << 0x20;
      if ((((0x2f < (uint)local_6d8) ||
           ((bVar24 = (byte)local_6d0, (0x580000UL >> (uVar21 & 0x3f) & 1) == 0 &&
            (bVar24 = (byte)local_6b8, (0xb00000000000U >> (uVar21 & 0x3f) & 1) == 0)))) &&
          (bVar24 = (byte)local_6e0, (uint)local_6d8 != 0x67)) &&
         (bVar24 = 0, (uint)local_6d8 == 0x68)) {
        bVar24 = local_6f9;
      }
      uStack_420 = (ulonglong)bVar24;
      FUN_1400db716(lVar13,&local_438,lVar15);
      lVar8 = lVar13;
      if (lVar15 != 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        lVar8 = lVar15;
      }
      lVar15 = lVar8;
      *(longlong *)(lVar15 + 0x128 + uVar14 * 8) = lVar13;
      uVar11 = uVar11 & ~(1 << ((uint)uVar14 & 0x1f));
      if (uVar11 == 0) {
        uVar14 = 0x20;
      }
      else {
        uVar12 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        uVar14 = (ulonglong)uVar12;
      }
    } while (uVar11 != 0);
    if (lVar15 == 0) {
      lVar15 = 0;
      bVar33 = true;
    }
    else {
      *(uint *)(lVar15 + 0x120) = (uint)local_6e8;
      bVar24 = (byte)local_6c0 & 0x1f;
      uVar11 = (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24) & (uint)local_6e8;
      if (uVar11 != 0) {
        uVar12 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        do {
          puVar25 = (undefined8 *)(lVar15 + 0x120);
          puVar26 = (undefined8 *)(*(longlong *)(lVar15 + 0x128 + (ulonglong)uVar12 * 8) + 0x120);
          for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar26 = *puVar25;
            puVar25 = puVar25 + 1;
            puVar26 = puVar26 + 1;
          }
          bVar24 = (byte)uVar12 & 0x1f;
          uVar11 = (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24) & uVar11;
          if (uVar11 == 0) {
            uVar12 = 0x20;
          }
          else {
            uVar12 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
          }
        } while (uVar11 != 0);
      }
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
      bVar33 = false;
    }
  }
  local_238 = (undefined1 *)0x0;
  local_230 = 0x400000000;
  puVar25 = (undefined8 *)*param_12;
  if (puVar25 != (undefined8 *)0x0) {
    *param_12 = 0;
    LOCK();
    piVar2 = (int *)(puVar25 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar25)(puVar25,1);
    }
  }
  if (!bVar33) {
    plVar1 = *(longlong **)(lVar15 + 0x68);
    uVar31 = *(undefined8 *)(lVar28 + 0x4e0 + (ulonglong)*(uint *)(plVar1 + 1) * 8);
    plVar3 = *(longlong **)(*(longlong *)(lVar15 + 0xb8) + 0x20);
    local_6c8 = lVar15;
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_438);
    local_5f0 = (longlong *)0x0;
    local_668 = (longlong *)0x0;
    (**(code **)(*plVar3 + 0x38))(plVar3,&DAT_14a3491d8,&local_668);
    local_728 = (longlong **)0x0;
    pplStack_720 = (longlong **)0x0;
    local_738 = 0;
    plStack_730 = (longlong *)0x0;
    local_718 = &local_5f0;
    (**(code **)(*local_668 + 0x130))(local_668,&local_438,0,param_6);
    (**(code **)(*local_668 + 0x10))();
    plVar7 = local_5f0;
    lVar28 = local_6c8;
    local_5e8 = 0;
    lStack_5e0 = 0;
    local_5d8 = 0;
    local_5a0 = 0;
    uStack_598 = 0;
    local_590 = 0;
    uStack_588 = 0;
    local_580 = 0;
    local_57f = 0xff;
    local_5d0 = 0;
    uStack_5c8 = 0;
    local_5c0 = 0;
    uStack_5b8 = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_660 = 0;
    lStack_658 = 0;
    local_650 = 0;
    local_618 = 0;
    uStack_610 = 0;
    local_608 = 0;
    uStack_600 = 0;
    local_5f8 = 0;
    local_5f7 = 0xff;
    local_648 = 0;
    uStack_640 = 0;
    local_638 = 0;
    uStack_630 = 0;
    local_628 = 0;
    uStack_620 = 0;
    bVar33 = (longlong *)0x400000 < local_5f0;
    bVar24 = 1 < param_6 && bVar33;
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(local_6c8 + 0x68) + 0x10) + 8);
    local_668 = plVar1;
    local_5f0 = plVar1;
    memset(&local_438,0,0x1e0);
    uStack_448 = 0;
    uStack_444 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    local_44c = 0;
    local_468 = 0;
    uStack_460 = 0;
    local_478 = (undefined1  [8])0x0;
    uStack_470 = 0;
    local_488 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4f8 = (longlong *)0x0;
    plStack_4f0 = (longlong *)0x0;
    local_670 = (longlong *)0x0;
    uVar21 = (ulonglong)param_6;
    local_6b8 = uVar21;
    if (1 < param_6 && bVar33) {
      local_718 = &local_670;
      pplStack_720 = &local_4f8;
      local_728 = (longlong **)local_478;
      plStack_730 = &local_438;
      local_738 = 0;
      (**(code **)(*plVar3 + 0x130))(plVar3,&local_578,0,param_6);
      uVar14 = local_418;
      FUN_14008f39a(uVar31,local_418 & 0xffffffff,0x200,&local_5f0);
      local_438._0_4_ = (undefined4)local_590;
      local_438._4_4_ = (undefined4)((ulonglong)local_590 >> 0x20);
      local_6e8 = uVar14;
      local_6c0 = (longlong *)((longlong)local_670 - uVar14);
      FUN_14008f39a(uVar31,local_6c0,0x200,&local_668);
      lVar15 = local_608 - local_418;
      lVar13 = 0x20;
      do {
        *(longlong *)((longlong)&local_438 + lVar13) =
             *(longlong *)((longlong)&local_438 + lVar13) + lVar15;
        lVar13 = lVar13 + 0x20;
      } while (uVar21 << 5 != lVar13);
    }
    else {
      FUN_14008f39a(uVar31,(ulonglong)plVar7 & 0xffffffff,0x200,&local_5f0);
      local_6e8 = 0;
      local_6c0 = (longlong *)0x0;
    }
    uVar11 = *(uint *)(lVar28 + 0x120);
    uVar12 = 0x20;
    if ((uVar11 != 0) && (uVar12 = 0, uVar11 != 0)) {
      for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
    lVar28 = *(longlong *)(lVar28 + 0x128 + (ulonglong)uVar12 * 8);
    if (lVar28 != 0) {
      uVar31 = CONCAT44(uVar12,uVar11);
      local_69c = param_6 - 1;
      local_690 = local_6b8 * 0x2c;
      pcVar30 = GetProcessHeap_exref;
      local_6f9 = bVar24;
      do {
        local_6f8 = *(longlong *)(lVar28 + 0xb8);
        local_538[0] = 0;
        FUN_14315bb1a(local_688,*(undefined8 *)(lVar28 + 0x68),1,local_538);
        uVar21 = local_230;
        puVar25 = local_680;
        if (local_680 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_680 + 1) = *(int *)(local_680 + 1) + 1;
          UNLOCK();
        }
        lVar15 = local_680[5];
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        lVar13 = (longlong)(int)local_230;
        uVar11 = (int)local_230 + 1;
        local_230 = CONCAT44(local_230._4_4_,uVar11);
        if (local_230._4_4_ < uVar11) {
          FUN_14476a5c8(local_258,uVar21 & 0xffffffff);
        }
        plVar1 = local_678;
        lVar8 = local_6f8;
        puVar16 = local_238;
        if (local_238 == (undefined1 *)0x0) {
          puVar16 = local_258;
        }
        *(longlong *)(puVar16 + lVar13 * 8) = lVar15;
        if (bVar24 == 0) {
          local_6d0 = local_590;
          local_6d8 = *(ulonglong *)(lStack_5e0 + 0x20);
          plVar3 = *(longlong **)(local_6f8 + 0x20);
          lVar15 = local_678[0x33];
          if (lVar15 == 0) {
            (**(code **)(*local_678 + 8))(local_678);
            lVar15 = plVar1[0x33];
          }
          local_6e0 = *(longlong *)(lVar15 + 0x20);
          *(int *)(lVar15 + 0x1c0) = *(int *)(lVar15 + 0x1c0) + 1;
          local_500 = (longlong *)0x0;
          pvVar17 = (HANDLE)(*pcVar30)();
          puVar26 = HeapAlloc(pvVar17,0,local_690);
          bVar24 = local_6f9;
          if (puVar26 != (undefined8 *)0x0) {
            pplVar29 = (longlong **)(puVar26 + local_6b8 * 4);
            pplVar32 = pplVar29 + local_6b8;
            (**(code **)(*plVar3 + 0x50))(plVar3,local_538);
            local_540 = (longlong *)0x0;
            (**(code **)(*plVar3 + 0x38))(plVar3,&DAT_14a3491d8,&local_540);
            local_718 = &local_500;
            local_738 = local_6d0;
            plStack_730 = puVar26;
            local_728 = pplVar32;
            pplStack_720 = pplVar29;
            (**(code **)(*local_540 + 0x130))(local_540,local_538,0,param_6);
            (**(code **)(*local_540 + 0x10))();
            pcVar30 = GetProcessHeap_exref;
            local_710 = local_228;
            plStack_730 = local_500;
            local_738 = CONCAT44(local_738._4_4_,param_6);
            local_728 = (longlong **)puVar26;
            pplStack_720 = pplVar32;
            local_718 = pplVar29;
            FUN_144b1b438(local_6e0,plVar3,local_6d8,0);
            pvVar17 = GetProcessHeap();
            HeapFree(pvVar17,0,puVar26);
            bVar24 = local_6f9;
          }
        }
        else {
          uVar4 = *(undefined8 *)(lStack_5e0 + 0x20);
          uVar5 = *(undefined8 *)(local_6f8 + 0x20);
          lVar15 = local_678[0x33];
          if (lVar15 == 0) {
            (**(code **)(*local_678 + 8))(local_678);
            lVar15 = plVar1[0x33];
          }
          *(int *)(lVar15 + 0x1c0) = *(int *)(lVar15 + 0x1c0) + 1;
          local_710 = local_228;
          local_718 = &local_4f8;
          pplStack_720 = (longlong **)local_478;
          local_728 = (longlong **)&local_438;
          plStack_730 = (longlong *)local_6e8;
          local_738 = CONCAT44(local_738._4_4_,1);
          FUN_144b1b438(*(undefined8 *)(lVar15 + 0x20),uVar5,uVar4,0);
          plVar1 = local_678;
          uVar4 = *(undefined8 *)(lStack_658 + 0x20);
          uVar5 = *(undefined8 *)(lVar8 + 0x20);
          lVar15 = local_678[0x33];
          if (lVar15 == 0) {
            (**(code **)(*local_678 + 8))(local_678);
            lVar15 = plVar1[0x33];
          }
          *(int *)(lVar15 + 0x1c0) = *(int *)(lVar15 + 0x1c0) + 1;
          local_710 = local_210;
          local_718 = &plStack_4f0;
          pplStack_720 = (longlong **)(local_478 + 4);
          local_728 = (longlong **)&local_418;
          plStack_730 = local_6c0;
          local_738 = CONCAT44(local_738._4_4_,local_69c);
          FUN_144b1b438(*(undefined8 *)(lVar15 + 0x20),uVar5,uVar4,1);
          pcVar30 = GetProcessHeap_exref;
        }
        plVar1 = local_678;
        lVar15 = local_678[0x33];
        if (lVar15 == 0) {
          (**(code **)(*local_678 + 8))(local_678);
          lVar15 = plVar1[0x33];
        }
        FUN_1447093fc(lVar15,local_6f8);
        FUN_140065414(local_688);
        if (puVar25 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar25 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar25)(puVar25,1);
          }
        }
        bVar6 = (byte)((ulonglong)uVar31 >> 0x20) & 0x1f;
        uVar11 = (uint)uVar31 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        if (uVar11 == 0) break;
        uVar12 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        lVar28 = *(longlong *)(lVar28 + 0x128 + (ulonglong)uVar12 * 8);
        uVar31 = CONCAT44(uVar12,uVar11);
      } while (lVar28 != 0);
    }
    lVar15 = local_6c8;
    FUN_1400db0ea(local_6c8);
    puVar25 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar19 = (uint *)*puVar25;
    if (puVar19 != (uint *)0x0) goto LAB_143174a67;
    while( true ) {
      uVar11 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar11 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar11 | 1;
        __tlregdtor(&LAB_1431774c4);
      }
      lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar18 = *(undefined4 **)(lVar28 + 0x310);
      *(undefined8 *)(lVar28 + 0x310) = 0;
      if (puVar18 == (undefined4 *)0x0) {
        puVar18 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar18 = 0xffffffff;
      *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
      puVar18[0x12] = 0;
      *puVar25 = puVar18;
      FUN_140217a48(puVar25);
      puVar19 = (uint *)*puVar25;
LAB_143174a67:
      puVar26 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar22 = (uint *)(puVar26 + 0x34);
      uVar11 = puVar19[0x12];
      if (puVar22 <= puVar19 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
        LOCK();
        uVar12 = *puVar19;
        *puVar19 = *puVar19 + uVar11 + 1;
        UNLOCK();
        if ((uVar12 ^ uVar11) != 0xffffffff) break;
        puVar19 = (uint *)*puVar25;
        *puVar19 = 0xffffffff;
        *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar25 = puVar19;
        puVar26 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
        puVar22 = (uint *)(puVar26 + 0x34);
        uVar11 = 0;
        if (puVar22 <= puVar19 + 0x4000) {
          uVar11 = 1;
          goto LAB_143174ae7;
        }
      }
    }
    uVar11 = uVar11 + 1;
LAB_143174ae7:
    *(uint **)(puVar19 + 0x10) = puVar22;
    puVar19[0x12] = uVar11;
    FUN_1447247dc(puVar26,local_258);
    *puVar26 = &PTR_FUN_14a3501f8;
    puVar26[0x15] = lVar15;
    if (lVar15 != 0) {
      (**(code **)(*(longlong *)(lVar15 + 0x60) + 8))(lVar15 + 0x60);
    }
    puVar26[0x16] = local_5f0;
    puVar26[0x17] = 0;
    puVar26[0x18] = 0;
    puVar26[0x19] = 0;
    puVar26[0x20] = 0;
    puVar26[0x21] = 0;
    puVar26[0x22] = 0;
    puVar26[0x23] = 0;
    *(undefined1 *)(puVar26 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar26 + 0x121) = 0xff;
    puVar26[0x1a] = 0;
    puVar26[0x1b] = 0;
    puVar26[0x1c] = 0;
    puVar26[0x1d] = 0;
    puVar26[0x1e] = 0;
    puVar26[0x1f] = 0;
    puVar26[0x25] = local_668;
    puVar26[0x26] = 0;
    puVar26[0x27] = 0;
    puVar26[0x28] = 0;
    puVar26[0x2f] = 0;
    puVar26[0x30] = 0;
    puVar26[0x31] = 0;
    puVar26[0x32] = 0;
    *(undefined1 *)(puVar26 + 0x33) = 0;
    *(undefined2 *)((longlong)puVar26 + 0x199) = 0xff;
    puVar26[0x29] = 0;
    puVar26[0x2a] = 0;
    puVar26[0x2b] = 0;
    puVar26[0x2c] = 0;
    puVar26[0x2d] = 0;
    puVar26[0x2e] = 0;
    FUN_14488e164(puVar26 + 0x16);
    FUN_14488e164(puVar26 + 0x25,&local_668);
    if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
    }
    puVar26[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar26[9] = puVar26;
    puVar26[10] = puVar26;
    lVar28 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar28 == 0) {
      uVar31 = 0;
    }
    else {
      uVar31 = *(undefined8 *)(lVar28 + 0x30);
    }
    puVar26[0xf] = uVar31;
    puVar26[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar26 + 0x1c) = 0;
    if (puVar26 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
      UNLOCK();
    }
    local_538[0] = CONCAT71(local_538[0]._1_7_,1);
    FUN_1447439e4(puVar26);
    puVar25 = (undefined8 *)*param_12;
    *param_12 = (longlong)puVar26;
    if (puVar25 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar25 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar25)(puVar25,1);
      }
    }
    FUN_1456d02da(&local_668);
    FUN_1456d02da(&local_5f0);
  }
  if (local_6ec != *(uint *)(local_6b0 + 0x3d)) {
    FUN_1400020a8(local_6a8);
  }
  plVar1 = local_698;
  *local_698 = lVar15;
  puVar16 = local_238;
  if (local_238 == (undefined1 *)0x0) {
    puVar16 = local_258;
  }
  FUN_144717c65(puVar16,local_230 & 0xffffffff);
  if (local_238 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_758) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 143174f1c FUN_143174f1c body=2941 status=ok
// SIG undefined FUN_143174f1c(void)

void FUN_143174f1c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  char cVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_118 [32];
  uint local_f8;
  byte local_f2;
  char local_f1;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  longlong *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  int local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  uint local_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar18 = param_1[0x17];
  local_ec = (uint)*(ushort *)(uVar18 + 0x74);
  uVar13 = *(uint *)(uVar18 + 0x7c);
  uVar16 = *(uint *)(uVar18 + 0x88);
  local_e0 = param_1;
  puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))();
  bVar10 = *(byte *)((longlong)puVar8 + 0x32);
  local_d8 = (ulonglong)bVar10;
  uVar4 = *puVar8;
  uVar20 = (uint)*(byte *)((longlong)puVar8 + 0x33);
  uVar3 = *(ushort *)((longlong)puVar8 + 0x2c);
  local_ac = (uint)*(ushort *)((longlong)puVar8 + 0x2e);
  uVar6 = puVar8[6];
  uVar7 = *(uint *)((longlong)&DAT_14c873434 + (ulonglong)(uVar20 * 0x30));
  uVar12 = (ulonglong)uVar7;
  if (((uint)uVar4 >> 0x19 & 1) == 0) {
    if ((uVar4 & 4) != 0) {
      if (uVar7 == 0x29) {
        uVar12 = 0x27;
      }
      else if (uVar7 == 0x36) {
        uVar12 = 0x35;
      }
    }
  }
  else {
    uVar18 = (ulonglong)(((uint)uVar4 & 0x10) >> 4);
    uVar7 = FUN_147365ff0(uVar12,uVar18);
    uVar12 = (ulonglong)uVar7;
  }
  plVar21 = local_e0;
  local_f0 = (uint)uVar12;
  local_e8 = (uint)(byte)uVar6;
  local_f8 = local_f0;
  if ((uVar4 & 0x10) == 0) {
    if ((int)local_f0 < 0x49) {
      if ((int)local_f0 < 0x2c) {
        if (local_f0 == 0x1b) {
          local_f8 = 0x1c;
        }
        else if (local_f0 == 0x13) {
LAB_1431759b0:
          local_f8 = 0x15;
        }
        else if (local_f0 == 0x27) goto LAB_143175a6e;
      }
      else if (local_f0 == 0x46) {
        local_f8 = 0x47;
      }
      else if (local_f0 == 0x35) {
LAB_1431759d8:
        local_f8 = 0x38;
      }
      else if (local_f0 == 0x2c) {
LAB_14317504d:
        local_f8 = 0x2e;
      }
    }
    else if ((int)local_f0 < 0x61) {
      if (local_f0 == 0x5a) {
        local_f8 = 0x57;
      }
      else if (local_f0 == 0x4c) {
        local_f8 = 0x4d;
      }
      else if (local_f0 == 0x49) {
        local_f8 = 0x4a;
      }
    }
    else if (local_f0 == 0x61) {
      local_f8 = 0x62;
    }
  }
  else if ((int)local_f0 < 0x5a) {
    if ((int)local_f0 < 0x46) {
      if ((int)local_f0 < 0x27) {
        if (local_f0 == 0x13) goto LAB_1431759b0;
        if (local_f0 == 0x1b) {
          local_f8 = 0x1d;
        }
      }
      else if (local_f0 == 0x27) {
LAB_143175a6e:
        local_f8 = 0x29;
      }
      else {
        if (local_f0 == 0x2c) goto LAB_14317504d;
        if (local_f0 == 0x35) goto LAB_1431759d8;
      }
    }
    else if (local_f0 == 0x46) {
      local_f8 = 0x48;
    }
    else if (local_f0 == 0x4c) {
      local_f8 = 0x4e;
    }
    else if (local_f0 == 0x49) {
      local_f8 = 0x4b;
    }
  }
  else {
    local_f8 = 0x5b;
    if ((local_f0 != 0x5a) && (local_f8 = local_f0, local_f0 == 0x61)) {
      local_f8 = 99;
    }
  }
  uVar17 = (uint)(byte)uVar6;
  uVar7 = (uint)bVar10;
  local_c8 = uVar7 - 3;
  if ((uVar20 == 0x56) || (uVar20 == 0x43)) {
    local_c4 = 0;
    cVar23 = 1 < uVar13;
  }
  else {
    local_c4 = (undefined4)CONCAT71((int7)(uVar18 >> 8),(uVar4 & 0x88000) == 0 && (uVar16 & 8) == 0)
    ;
    local_c0 = (longlong *)CONCAT44(local_c0._4_4_,uVar13);
    cVar23 = 1 < uVar13;
    if ((uVar16 & 1) != 0) {
      if (uVar7 == 2) {
        local_a8 = local_f8;
        uStack_a4 = 8;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_98 = (ulonglong)uVar3;
        FUN_1400db170(local_e0 + 0x30,1,1);
        uVar17 = local_e8;
        FUN_1400db3a0(plVar21,&local_a8,0,param_2);
      }
      else {
        bVar10 = ((byte)local_c8 < 2 || bVar10 == 1) & (byte)(uVar4 >> 0x18);
        local_b8 = (longlong *)CONCAT71(local_b8._1_7_,bVar10);
        uVar13 = 1;
        if (bVar10 != 0) {
          uVar13 = local_ec;
        }
        FUN_1400db170(local_e0 + 0x30,uVar13 * uVar17,1);
        if (uVar17 != 0) {
          bVar25 = local_f8 == 0x31;
          local_f2 = local_f8 == 0x23;
          local_e4 = CONCAT31(local_e4._1_3_,local_f8 == 0x16);
          bVar24 = local_f8 == 0x2f;
          uVar13 = 0;
          uVar12 = (ulonglong)local_f0;
          uVar18 = (ulonglong)local_f0;
          iVar11 = 0;
          local_f1 = cVar23;
          local_d0 = param_2;
          local_b0 = uVar16;
          do {
            plVar21 = local_d0;
            if ((char)local_b8 == '\0') {
              uStack_a0 = 0;
              uStack_9c = 0;
              local_98 = 0;
              local_a8 = local_f8;
              uVar16 = (uint)uVar12;
              if (((uint)local_d8 < 5) && ((0x1aU >> ((uint)local_d8 & 0x1f) & 1) != 0)) {
                if ((uint)local_c0 < 2) {
                  uStack_a4 = 5;
                  if (((0x2f < uVar16) ||
                      ((bVar10 = (byte)local_e4, (0x580000UL >> (uVar18 & 0x3f) & 1) == 0 &&
                       (bVar10 = bVar24, (0xb00000000000U >> (uVar18 & 0x3f) & 1) == 0)))) &&
                     ((bVar10 = bVar25, uVar16 != 0x67 && (bVar10 = local_f2, uVar16 != 0x68)))) {
                    bVar10 = 0;
                  }
                  local_98 = (ulonglong)CONCAT14(bVar10,local_ec);
                  uStack_a0 = uVar13;
                }
                else {
                  uStack_a4 = 7;
                  uStack_9c = local_ec;
                }
              }
              else if ((uint)local_c0 < 2) {
                uStack_a4 = 4;
                if ((((0x2f < uVar16) ||
                     ((bVar10 = (byte)local_e4, (0x580000UL >> (uVar18 & 0x3f) & 1) == 0 &&
                      (bVar10 = bVar24, (0xb00000000000U >> (uVar18 & 0x3f) & 1) == 0)))) &&
                    (bVar10 = bVar25, uVar16 != 0x67)) && (bVar10 = local_f2, uVar16 != 0x68)) {
                  bVar10 = 0;
                }
                uStack_9c = (uint)bVar10;
                uStack_a0 = uVar13;
              }
              else {
                uStack_a4 = 6;
              }
              FUN_1400db3a0(local_e0,&local_a8,iVar11,local_d0);
              uVar12 = (ulonglong)local_f0;
              iVar11 = iVar11 + 1;
            }
            else {
              *(undefined1 *)(local_e0 + 0x2f) = 1;
              *(uint *)((longlong)local_e0 + 0x17c) = local_ec;
              if (local_ec != 0) {
                uVar16 = 0;
                do {
                  local_a8 = local_f8;
                  uStack_a4 = 5;
                  uVar7 = (uint)uVar12;
                  if (((0x2f < uVar7) ||
                      ((bVar10 = (byte)local_e4, (0x580000UL >> (uVar18 & 0x3f) & 1) == 0 &&
                       (bVar10 = bVar24, (0xb00000000000U >> (uVar18 & 0x3f) & 1) == 0)))) &&
                     ((bVar10 = bVar25, uVar7 != 0x67 && (bVar10 = local_f2, uVar7 != 0x68)))) {
                    bVar10 = 0;
                  }
                  local_98 = (ulonglong)CONCAT14(bVar10,1);
                  uStack_a0 = uVar13;
                  uStack_9c = uVar16;
                  FUN_1400db3a0(local_e0,&local_a8,iVar11 + uVar16,plVar21);
                  uVar12 = (ulonglong)local_f0;
                  uVar16 = uVar16 + 1;
                } while (local_ec != uVar16);
                uVar17 = local_e8;
                iVar11 = iVar11 + uVar16;
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar17);
          uVar7 = (uint)local_d8;
          param_2 = local_d0;
          uVar16 = local_b0;
          cVar23 = local_f1;
          goto LAB_143175098;
        }
      }
      uVar12 = (ulonglong)local_f0;
    }
  }
LAB_143175098:
  if ((uVar16 & 2) != 0) {
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    iVar11 = (int)uVar12;
    if (iVar11 < 0x2c) {
      if (iVar11 == 0x13) {
        uVar12 = 0x14;
      }
      else if (iVar11 == 0x27) {
        uVar12 = 0x28;
      }
    }
    else if (iVar11 == 0x2c) {
      uVar12 = 0x2d;
    }
    else if (iVar11 == 0x35) {
      uVar12 = 0x37;
    }
    local_e4 = (uint)uVar12;
    if ((uVar7 < 5) && ((0x1aU >> (uVar7 & 0x1f) & 1) != 0)) {
      if (cVar23 == '\0') {
        uStack_7c = 4;
        uStack_6c = local_ec;
      }
      else {
        uStack_7c = 6;
        uStack_70 = local_ec;
      }
    }
    else if (cVar23 == '\0') {
      uStack_7c = 3;
    }
    else {
      uStack_7c = 5;
    }
    plVar21 = param_2 + 0x34;
    plVar22 = local_e0 + 0x34;
    local_d0 = local_e0 + 0xc;
    local_b8 = local_e0 + 0x15;
    uVar18 = 0;
    local_f1 = cVar23;
    local_c0 = plVar22;
    local_80 = local_e4;
    do {
      uStack_7c = CONCAT44((uint)uVar18,(undefined4)uStack_7c) & 0x1ffffffff;
      if (((int)uVar12 == 0x2d) || ((int)uVar12 == 0x14)) {
        uStack_7c = CONCAT44(((uint)uVar18 & 1) + (uint)(1 < uVar18) * 2,(undefined4)uStack_7c);
      }
      bVar25 = true;
      if (param_2 != (longlong *)0x0) {
        bVar25 = *plVar21 == 0;
      }
      lVar5 = local_e0[0xd];
      plVar9 = (longlong *)FUN_14001cc68(0x80,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14a34fee0;
      plVar9[3] = lVar5;
      plVar9[2] = (longlong)&PTR__purecall_14a3516b0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      *(undefined4 *)(plVar9 + 8) = 0;
      lVar14 = lVar5 + 0x6d8;
      if (*(longlong *)(lVar5 + 0x898) != 0) {
        lVar14 = *(longlong *)(lVar5 + 0x898);
      }
      FUN_144a30b90(lVar14 + 0x150,plVar9 + 9);
      *(undefined4 *)(plVar9 + 0xb) = 0xffffffff;
      *(undefined1 *)((longlong)plVar9 + 0x5c) = 0xff;
      *(bool *)(plVar9 + 0xc) = bVar25;
      *(undefined1 *)((longlong)plVar9 + 0x61) = 3;
      plVar9[2] = (longlong)&PTR_FUN_14a3516f0;
      plVar19 = plVar22;
      if (plVar9 == (longlong *)0x0) {
        *plVar22 = 0x10;
        plVar15 = (longlong *)plVar22[1];
        if (plVar15 != (longlong *)0x0) {
          plVar22[1] = 0;
LAB_1431756e7:
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          if (plVar9 != (longlong *)0x0) goto LAB_1431755cf;
        }
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        *plVar22 = (longlong)(plVar9 + 2);
        plVar15 = (longlong *)plVar22[1];
        if (plVar9 == plVar15) {
          LOCK();
          plVar15 = plVar9 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        else {
          plVar22[1] = (longlong)plVar9;
          if (plVar15 != (longlong *)0x0) {
            plVar19 = local_c0 + uVar18 * 2;
            goto LAB_1431756e7;
          }
        }
LAB_1431755cf:
        LOCK();
        plVar15 = plVar9 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      lVar5 = *plVar19;
      local_a8 = (uint)local_d0;
      uStack_a4 = (undefined4)((ulonglong)local_d0 >> 0x20);
      uStack_a0 = (uint)local_b8;
      uStack_9c = (uint)((ulonglong)local_b8 >> 0x20);
      local_98 = local_e0[0x17];
      *(ulonglong *)(lVar5 + 0x68) = CONCAT44(uStack_6c,uStack_70);
      *(uint *)(lVar5 + 0x58) = local_80;
      *(undefined4 *)(lVar5 + 0x5c) = (undefined4)uStack_7c;
      *(undefined4 *)(lVar5 + 0x60) = uStack_7c._4_4_;
      *(undefined4 *)(lVar5 + 100) = uStack_74;
      FUN_14317deee(&local_68,&local_80);
      *(undefined8 *)(lVar5 + 0x2c) = local_68;
      FUN_1447f03f2(lVar5,&local_a8,0x40);
      uVar18 = uVar18 + 1;
      plVar22 = plVar22 + 2;
      plVar21 = plVar21 + 2;
      uVar12 = (ulonglong)local_e4;
    } while (uVar18 != 4);
    uVar12 = (ulonglong)local_f0;
    uVar7 = (uint)local_d8;
    uVar17 = local_e8;
    cVar23 = local_f1;
  }
  uVar13 = (uint)uVar12;
  if ((char)local_c4 == '\0') goto LAB_1431757c8;
  uStack_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_a0 = 0x1688;
  local_a8 = local_f8;
  if (uVar7 == 4) {
    uStack_a4 = 10;
    local_98 = (ulonglong)uVar17 << 0x20;
    uStack_90 = (ulonglong)local_ac << 0x20;
  }
  else {
    if ((byte)local_c8 < 2) {
      uStack_a4 = 9;
    }
    else {
      if (uVar7 == 1) {
        if (cVar23 != '\0') {
          uStack_a4 = 7;
          local_98 = (ulonglong)local_ec << 0x20;
          goto LAB_1431757b6;
        }
        uStack_a4 = 5;
        local_98 = (ulonglong)uVar17 << 0x20;
        uStack_90 = (ulonglong)local_ec << 0x20;
        if (uVar13 < 0x30) {
          if ((0x580000UL >> (uVar12 & 0x3f) & 1) == 0) {
            uVar13 = local_f0;
            if ((0xb00000000000U >> (uVar12 & 0x3f) & 1) == 0) goto LAB_143175896;
            bVar25 = local_f8 == 0x2f;
          }
          else {
            bVar25 = local_f8 == 0x16;
          }
        }
        else {
LAB_143175896:
          if (uVar13 == 0x67) {
            bVar25 = local_f8 == 0x31;
          }
          else if (uVar13 == 0x68) {
            bVar25 = local_f8 == 0x23;
          }
          else {
            bVar25 = false;
          }
        }
        local_88 = (ulonglong)bVar25;
        goto LAB_1431757b6;
      }
      if (uVar7 != 2) {
        if (cVar23 != '\0') {
          uStack_a4 = 6;
          goto LAB_1431757b6;
        }
        uStack_a4 = 4;
        local_98 = (ulonglong)uVar17 << 0x20;
        if (uVar13 < 0x30) {
          if ((0x580000UL >> (uVar12 & 0x3f) & 1) == 0) {
            uVar13 = local_f0;
            if ((0xb00000000000U >> (uVar12 & 0x3f) & 1) == 0) goto LAB_143175908;
            bVar25 = local_f8 == 0x2f;
          }
          else {
            bVar25 = local_f8 == 0x16;
          }
        }
        else {
LAB_143175908:
          if (uVar13 == 0x67) {
            bVar25 = local_f8 == 0x31;
          }
          else if (uVar13 == 0x68) {
            bVar25 = local_f8 == 0x23;
          }
          else {
            bVar25 = false;
          }
        }
        uStack_90 = (ulonglong)bVar25;
        goto LAB_1431757b6;
      }
      uStack_a4 = 8;
    }
    local_98 = (ulonglong)uVar17 << 0x20;
  }
LAB_1431757b6:
  FUN_1400db716(local_e0,&local_a8,param_2);
LAB_1431757c8:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143175a9a FUN_143175a9a body=504 status=ok
// SIG undefined FUN_143175a9a(void)

void FUN_143175a9a(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if ((*(byte *)(lVar1 + 0xdf) & 1) == 0) {
    if ((*(uint *)(lVar1 + 0xc0) >> 10 & 1) == 0) {
      local_90 = 0;
      local_98 = param_3;
      FUN_1447d3e9e(param_2,lVar1,*(uint *)(lVar1 + 0xc0),0x400);
      bVar3 = true;
      goto LAB_143175b25;
    }
  }
  else {
    local_98 = param_3;
    FUN_144706208(param_2,lVar1,0x7fffffff,0x400);
  }
  bVar3 = false;
LAB_143175b25:
  local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x20);
  local_70 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (ulonglong)param_3;
  FUN_14492aa36(param_2);
  lVar4 = param_2[0x33];
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
    lVar4 = param_2[0x33];
  }
  *(int *)(lVar4 + 0x1c0) = *(int *)(lVar4 + 0x1c0) + 1;
  local_90 = param_6;
  local_88 = 0;
  local_98 = 0;
  (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x80))
            (*(longlong **)(lVar4 + 0x28),&local_78,param_4,param_5);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  lVar4 = param_2[0x33];
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
    lVar4 = param_2[0x33];
  }
  FUN_1447093fc(lVar4,uVar2);
  if (param_2[0x33] != 0) {
    if ((0 < (int)DAT_14c760b84 && *(int *)((longlong)param_2 + 0x1c4) == 0) &&
       (DAT_14c760b84 < *(uint *)(param_2[0x33] + 0x1c0))) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
  }
  if (bVar3) {
    local_90 = 0;
    local_98 = param_3;
    FUN_1447d3e9e(param_2,lVar1,0x400,*(undefined4 *)(lVar1 + 0xc0));
  }
  else if ((*(byte *)(lVar1 + 0xdf) & 1) != 0) {
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xa8,0x18);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143175c93 FUN_143175c93 body=203 status=ok
// SIG undefined FUN_143175c93(void)

void FUN_143175c93(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong *local_48;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  if (param_4 != 0) {
    local_48 = &local_38;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*param_2 + 0x130))(param_2,param_3,0,param_4);
    local_38 = local_38 + 0x1ff & 0xfffffffffffffe00;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (ulonglong *)0x0;
  local_68 = local_38;
  uStack_60 = param_1;
  (**(code **)(*param_2 + 0x130))(param_2,param_3,param_4,1);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143175d60 FUN_143175d60 body=786 status=ok
// SIG undefined FUN_143175d60(void)

void FUN_143175d60(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar9 = *(longlong *)(param_1 + 0x18);
  local_c8 = param_2;
  if (lVar9 != -0x120) {
    uVar10 = *(uint *)(lVar9 + 0x120);
    if (uVar10 == 0) {
      uVar7 = 0x20;
    }
    else {
      uVar7 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    }
    lVar9 = *(longlong *)(lVar9 + 0x128 + (ulonglong)uVar7 * 8);
    if (lVar9 != 0) {
      uVar11 = CONCAT44(uVar7,uVar10);
      do {
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(local_c8 + 0x40) + 0x278))
                           (*(longlong **)(local_c8 + 0x40),
                            *(undefined4 *)(*(longlong *)(lVar9 + 0x68) + 8));
        local_d4 = *(uint *)(param_1 + 0x10);
        local_d0 = *(longlong *)(lVar9 + 0xb8);
        local_90 = *(undefined8 *)(local_d0 + 0x20);
        local_88 = 0;
        local_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        local_80 = (ulonglong)local_d4;
        if ((*(byte *)(local_d0 + 0xdf) & 1) == 0) {
          if ((*(uint *)(local_d0 + 0xc0) >> 10 & 1) != 0) goto LAB_143175e5a;
          local_f0 = (undefined8 *)0x0;
          local_f8 = local_d4;
          uVar4 = FUN_1447d3e9e(plVar3,local_d0,*(uint *)(local_d0 + 0xc0),0x400);
          local_d8 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        }
        else {
          local_f8 = local_d4;
          FUN_144706208(plVar3,local_d0,0x7fffffff,0x400);
LAB_143175e5a:
          local_d8 = 0;
        }
        FUN_14492aa36(plVar3);
        if (0 < *(int *)(param_1 + 0x28)) {
          lVar12 = 0;
          lVar8 = 0;
          do {
            lVar6 = *(longlong *)(param_1 + 0x20);
            local_c0 = *(undefined8 *)
                        (*(longlong *)(*(longlong *)(lVar6 + 0x10 + lVar12) + 0x10) + 0x20);
            local_b8 = 1;
            puVar1 = (undefined4 *)(lVar6 + 0x18 + lVar12);
            local_b0 = *puVar1;
            uStack_ac = puVar1[1];
            uStack_a8 = puVar1[2];
            uStack_a4 = puVar1[3];
            puVar1 = (undefined4 *)(lVar6 + 0x28 + lVar12);
            local_a0 = *puVar1;
            uStack_9c = puVar1[1];
            uStack_98 = puVar1[2];
            uStack_94 = puVar1[3];
            lVar5 = plVar3[0x33];
            if (lVar5 == 0) {
              (**(code **)(*plVar3 + 8))(plVar3);
              lVar5 = plVar3[0x33];
            }
            *(int *)(lVar5 + 0x1c0) = *(int *)(lVar5 + 0x1c0) + 1;
            local_f8 = *(uint *)(lVar6 + 8 + lVar12);
            local_f0 = &local_c0;
            local_e8 = 0;
            (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x80))
                      (*(longlong **)(lVar5 + 0x28),&local_90,*(undefined4 *)(lVar6 + lVar12),
                       *(undefined4 *)(lVar6 + 4 + lVar12));
            uVar4 = *(undefined8 *)(lVar9 + 0xb8);
            lVar6 = plVar3[0x33];
            if (lVar6 == 0) {
              (**(code **)(*plVar3 + 8))(plVar3);
              lVar6 = plVar3[0x33];
            }
            FUN_1447093fc(lVar6,uVar4);
            lVar8 = lVar8 + 1;
            lVar12 = lVar12 + 0x38;
          } while (lVar8 < *(int *)(param_1 + 0x28));
        }
        if (((plVar3[0x33] != 0) &&
            (0 < (int)DAT_14c760b84 && *(int *)((longlong)plVar3 + 0x1c4) == 0)) &&
           (DAT_14c760b84 < *(uint *)(plVar3[0x33] + 0x1c0))) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
        if ((char)local_d8 == '\0') {
          if ((*(byte *)(local_d0 + 0xdf) & 1) != 0) {
            (**(code **)(*plVar3 + 0x20))(plVar3,lVar9 + 0xa8,0x18);
          }
        }
        else {
          local_f8 = local_d4;
          local_f0 = (undefined8 *)0x0;
          FUN_1447d3e9e(plVar3,local_d0,0x400,*(undefined4 *)(local_d0 + 0xc0));
        }
        bVar2 = (byte)((ulonglong)uVar11 >> 0x20) & 0x1f;
        uVar10 = (uint)uVar11 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar10 == 0) break;
        uVar7 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        lVar9 = *(longlong *)(lVar9 + 0x128 + (ulonglong)uVar7 * 8);
        uVar11 = CONCAT44(uVar7,uVar10);
      } while (lVar9 != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143176074 FUN_143176074 body=96 status=ok
// SIG undefined FUN_143176074(void)

void FUN_143176074(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_3 != 0) && (DAT_14c760bc8 != 0)) {
    FUN_1446f470e(&local_20,param_4,1);
    *(undefined8 *)(param_3 + 0x10) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431760d6 FUN_1431760d6 body=1012 status=ok
// SIG undefined FUN_1431760d6(void)

longlong FUN_1431760d6(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined4 *param_4,
                      longlong *param_5)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auStack_168 [32];
  int local_148;
  undefined4 local_140;
  undefined4 local_138;
  int *local_130;
  undefined8 local_128;
  undefined4 local_120;
  uint local_110;
  undefined2 local_10a;
  undefined4 *local_108;
  uint local_100;
  undefined4 local_fc;
  ulonglong local_f8;
  longlong local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  uint local_d8;
  uint local_d0;
  ushort local_cc;
  undefined2 local_ca;
  undefined4 local_c4;
  uint local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  longlong local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_110 = CONCAT31(local_110._1_3_,param_2);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar7 = *(longlong *)param_1[0x36];
  local_108 = param_4;
  (**(code **)(*param_5 + 0x50))(param_5,local_e8);
  local_b0 = 0x80000;
  local_e0 = 0;
  local_f8 = (ulonglong)local_d8;
  if ((local_b8 & 1) != 0) {
    local_e0 = 0x10000;
  }
  local_100 = (uint)local_cc;
  local_10a = local_ca;
  local_fc = local_c4;
  uVar6 = local_b8 * 2 & 8;
  iVar8 = 0x10;
  if ((local_b8 & 3) == 0) {
    iVar8 = uVar6 * 2;
  }
  iVar13 = 0xc0;
  if (((local_b8 & 8) != 0 || iVar8 != 0) &&
     (iVar13 = 0xac3, ((uint)(local_e8[0] == 1) << 6 | uVar6) != 0x40)) {
    if (iVar8 == 0) {
LAB_1431761cd:
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      if (((uint)param_3 >> 0x19 & 1) == 0) {
        iVar13 = 0x10;
        if ((local_b8 & 2) == 0) {
          if (uVar6 == 0 && ((local_b8 & 2) == 0 && (local_b8 & 1) == 0)) goto LAB_1431761cd;
          iVar13 = (uint)((local_b8 & 3) == 0) * 4 + 4;
        }
      }
    }
  }
  puVar1 = *(uint **)(lVar7 + 2000);
  lVar4 = FUN_14001cc68(0xe8,0x10);
  local_128 = 0;
  local_130 = local_e8;
  local_140 = 0;
  local_120 = 1;
  local_138 = 0x7fffffff;
  local_148 = iVar13;
  FUN_1447f3b12(lVar4,puVar1,*puVar1,param_5);
  LOCK();
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  UNLOCK();
  local_f0 = lVar4;
  FUN_1473824be(lVar4);
  local_84 = ((ulonglong)local_d0 << 0x20) + local_f8;
  local_76 = 1 < (ushort)local_100;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar6 = 1;
  if ((bool)local_76) {
    uVar6 = local_100;
  }
  local_a0 = *local_108;
  local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_75 = (undefined1)local_110;
  local_74 = 0;
  local_7c = 1;
  local_7a = (undefined2)uVar6;
  local_78 = (undefined1)local_10a;
  local_77 = (undefined1)local_fc;
  local_9c = local_108[1];
  uStack_98 = local_108[2];
  uStack_94 = local_108[3];
  uStack_90 = local_108[4];
  local_88 = 0;
  local_73 = 0xff;
  local_70 = 0x70;
  local_68 = L"TextureFromResource";
  uVar6 = *puVar1;
  if (uVar6 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  local_a8 = param_3;
  if (uVar6 != 0) {
    local_108 = (undefined4 *)CONCAT44(local_108._4_4_,uVar6);
    lVar4 = 0;
    local_110 = uVar3;
    do {
      lVar5 = (**(code **)(*param_1 + 0x638))
                        (param_1,&local_a8,*(undefined8 *)(lVar7 + 2000 + (ulonglong)uVar3 * 8));
      lVar10 = lVar5;
      if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x60) + 8))(lVar5 + 0x60);
        lVar10 = lVar4;
      }
      *(longlong *)(lVar10 + 0x128 + (ulonglong)uVar3 * 8) = lVar5;
      uVar6 = uVar6 & ~(1 << (uVar3 & 0x1f));
      if (uVar6 == 0) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      }
      lVar4 = lVar10;
    } while (uVar6 != 0);
    if (lVar10 != 0) {
      *(uint *)(lVar10 + 0x120) = (uint)local_108;
      bVar2 = (byte)local_110 & 0x1f;
      uVar6 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & (uint)local_108;
      if (uVar6 != 0) {
        uVar3 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        uVar9 = (ulonglong)uVar3;
        do {
          puVar11 = (undefined8 *)(lVar10 + 0x120);
          puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x128 + uVar9 * 8) + 0x120);
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          bVar2 = (byte)uVar9 & 0x1f;
          uVar6 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar6;
          if (uVar6 == 0) {
            uVar9 = 0x20;
          }
          else {
            uVar3 = 0;
            if (uVar6 != 0) {
              for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
            uVar9 = (ulonglong)uVar3;
          }
        } while (uVar6 != 0);
      }
      goto LAB_14317645f;
    }
  }
  lVar10 = 0;
LAB_14317645f:
  *(undefined1 *)(lVar10 + 0x118) = 5;
  *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(local_f0 + 0x40);
  *(longlong *)(lVar10 + 0xb8) = local_f0;
  *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(local_f0 + 0x40);
  FUN_143174f1c(lVar10,0);
  FUN_1400db0ea(lVar10);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1431764cc FUN_1431764cc body=843 status=ok
// SIG undefined FUN_1431764cc(void)

longlong * FUN_1431764cc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d4;
  longlong *local_d0;
  longlong local_c8;
  undefined2 *local_c0;
  int local_b8;
  int local_b4;
  longlong *local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_3 = (longlong *)*param_3;
  if (param_3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar10 = (**(code **)(*param_3 + 8))(param_3);
    if ((*(byte *)(lVar10 + 2) & 4) != 0) {
      param_3 = (longlong *)**(longlong **)(param_3[0x48] + 0xa0);
    }
    plVar7 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3);
  }
  lVar10 = *(longlong *)param_1[0x36];
  puVar1 = *(uint **)(lVar10 + 2000);
  local_b0 = plVar7;
  (**(code **)(*plVar7 + 8))(plVar7);
  local_c8 = plVar7[2];
  FUN_1400021e4(&local_c8,&local_a8);
  iVar3 = (int)local_a0;
  iVar5 = ((int)local_a0 == 0) + 5;
  local_c0 = local_a8;
  local_a8 = (undefined2 *)0x0;
  local_b8 = (int)local_a0;
  iVar4 = local_a0._4_4_;
  local_b4 = local_a0._4_4_;
  local_a0 = 0;
  iVar11 = iVar5 + iVar3;
  if (iVar11 < iVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar4 < iVar11) {
    FUN_1446f8c06(&local_c0);
  }
  FUN_1400020e8(&local_c0,L"Alias",5);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar12 = local_c0;
  if (local_b8 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 8))(plVar7);
  local_76 = *(undefined1 *)((longlong)puVar8 + 0x32);
  local_a8 = (undefined2 *)*puVar8;
  local_75 = *(undefined1 *)((longlong)puVar8 + 0x33);
  local_74 = *(undefined1 *)((longlong)puVar8 + 0x34);
  local_84 = *(undefined8 *)((longlong)puVar8 + 0x24);
  local_7c = *(undefined2 *)((longlong)puVar8 + 0x2c);
  local_7a = *(undefined2 *)((longlong)puVar8 + 0x2e);
  local_78 = *(undefined1 *)(puVar8 + 6);
  local_77 = *(undefined1 *)((longlong)puVar8 + 0x31);
  local_90 = *(undefined4 *)(puVar8 + 3);
  local_a0 = puVar8[1];
  uStack_98 = puVar8[2];
  local_88 = *(undefined4 *)(puVar8 + 4);
  local_73 = *(undefined1 *)((longlong)puVar8 + 0x35);
  local_8c = *(undefined4 *)((longlong)puVar8 + 0x1c);
  local_70 = 0x70;
  uVar17 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar14 = *puVar1;
  uVar6 = 0x20;
  if ((uVar14 != 0) && (uVar6 = 0, uVar14 != 0)) {
    for (; (uVar14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  local_68 = puVar12;
  if (uVar14 != 0) {
    lVar16 = 0;
    local_d8 = uVar6;
    local_d4 = uVar14;
    local_d0 = param_2;
    do {
      lVar9 = (**(code **)(*param_1 + 0x638))
                        (param_1,&local_a8,*(undefined8 *)(lVar10 + 2000 + (ulonglong)uVar6 * 8));
      lVar13 = lVar9;
      uVar17 = extraout_XMM0_Da;
      if (lVar16 != 0) {
        uVar17 = (**(code **)(*(longlong *)(lVar9 + 0x60) + 8))(lVar9 + 0x60);
        lVar13 = lVar16;
      }
      *(longlong *)(lVar13 + 0x128 + (ulonglong)uVar6 * 8) = lVar9;
      uVar14 = uVar14 & ~(1 << (uVar6 & 0x1f));
      if (uVar14 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
      lVar16 = lVar13;
    } while (uVar14 != 0);
    param_2 = local_d0;
    if (lVar13 != 0) {
      *(uint *)(lVar13 + 0x120) = local_d4;
      bVar2 = (byte)local_d8 & 0x1f;
      uVar14 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & local_d4;
      if (uVar14 != 0) {
        uVar6 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        do {
          puVar8 = (undefined8 *)(lVar13 + 0x120);
          puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x128 + (ulonglong)uVar6 * 8) + 0x120);
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar15 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar15 = puVar15 + 1;
          }
          bVar2 = (byte)uVar6 & 0x1f;
          uVar14 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar14;
          if (uVar14 == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar6 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
          }
        } while (uVar14 != 0);
      }
      goto LAB_143176730;
    }
  }
  lVar13 = 0;
LAB_143176730:
  local_c8 = lVar13;
  FUN_1473825de(uVar17,&local_c8,&local_b0);
  if (local_c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar13 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = lVar13;
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14317682f FUN_14317682f body=226 status=ok
// SIG undefined FUN_14317682f(void)

void FUN_14317682f(int param_1,uint param_2,longlong param_3,int param_4,longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      if (param_1 != 0) {
        pfVar4 = (float *)((ulonglong)(uint)((int)uVar2 * param_1) * 0x10 + param_5);
        lVar5 = 0;
        do {
          uVar1 = *(uint *)(uVar3 + param_3 + lVar5 * 4);
          *pfVar4 = (float)(uVar1 & 0x3ff) / 1023.0;
          pfVar4[1] = (float)(uVar1 >> 10 & 0x3ff) / 1023.0;
          pfVar4[2] = (float)(uVar1 >> 0x14 & 0x3ff) / 1023.0;
          pfVar4[3] = (float)(uVar1 >> 0x1e) / 3.0;
          pfVar4 = pfVar4 + 4;
          lVar5 = lVar5 + 1;
        } while (param_1 != (int)lVar5);
      }
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)(uint)((int)uVar3 + param_4);
    } while (uVar2 != param_2);
  }
  return;
}



// FUNCTION 143176911 FUN_143176911 body=2272 status=ok
// SIG undefined FUN_143176911(void)

void FUN_143176911(int param_1,uint param_2,longlong param_3,int param_4,longlong param_5,
                  longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint *puVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  ulonglong local_120;
  
  if (*(int *)(param_6 + 4) == 3) {
    if (param_2 != 0) {
      local_120 = 0;
      uVar24 = 0;
      do {
        if (param_1 != 0) {
          lVar11 = local_120 + param_3 + 6;
          puVar22 = (uint *)((ulonglong)(uint)((int)uVar24 * param_1) * 0x10 + param_5);
          lVar17 = 0;
          do {
            uVar1 = *(ushort *)(lVar11 + lVar17 * 8);
            uVar18 = (uint)uVar1 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar19 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar19 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar19 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            uVar2 = *(ushort *)(lVar11 + -2 + lVar17 * 8);
            uVar18 = (uint)uVar2 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar15 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar15 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar15 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            uVar3 = *(ushort *)(lVar11 + -4 + lVar17 * 8);
            uVar18 = (uint)uVar3 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar27 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar27 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar27 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            uVar4 = *(ushort *)(lVar11 + -6 + lVar17 * 8);
            uVar18 = (uint)uVar4 << 0xd;
            if ((uVar18 & 0xf800000) == 0xf800000) {
              fVar8 = (float)(uVar18 | 0x70000000);
            }
            else if ((uVar18 & 0xf800000) == 0) {
              fVar8 = (float)(uVar18 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar8 = (float)((uVar18 & 0xfffe000) + 0x38000000);
            }
            *puVar22 = (int)(short)uVar4 & 0x80000000U | (uint)fVar8;
            puVar22[1] = (uint)fVar27 | (int)(short)uVar3 & 0x80000000U;
            puVar22[2] = (uint)fVar15 | (int)(short)uVar2 & 0x80000000U;
            puVar22[3] = (uint)fVar19 | (int)(short)uVar1 & 0x80000000U;
            lVar17 = lVar17 + 1;
            puVar22 = puVar22 + 4;
          } while (param_1 != (int)lVar17);
        }
        uVar24 = uVar24 + 1;
        local_120 = (ulonglong)(uint)((int)local_120 + param_4);
      } while (uVar24 != param_2);
    }
  }
  else if (param_2 != 0) {
    dVar35 = 1.0;
    dVar34 = 0.0;
    uVar24 = 0;
    uVar12 = 0;
    dVar33 = 0.0;
    dVar32 = 0.0;
    dVar31 = 0.0;
    dVar5 = 1.0;
    dVar6 = 1.0;
    dVar7 = 1.0;
    do {
      if (param_1 != 0) {
        lVar11 = uVar24 + param_3;
        lVar17 = 0;
        uVar39 = SUB84(dVar34,0);
        uVar40 = (undefined4)((ulonglong)dVar34 >> 0x20);
        uVar43 = SUB84(dVar33,0);
        uVar44 = (undefined4)((ulonglong)dVar33 >> 0x20);
        uVar45 = SUB84(dVar32,0);
        uVar46 = (undefined4)((ulonglong)dVar32 >> 0x20);
        uVar41 = SUB84(dVar35,0);
        uVar42 = (undefined4)((ulonglong)dVar35 >> 0x20);
        dVar30 = dVar31;
        dVar36 = dVar7;
        dVar37 = dVar6;
        dVar38 = dVar5;
        do {
          uVar1 = *(ushort *)(lVar11 + lVar17 * 8);
          uVar25 = (uint)uVar1 << 0xd;
          uVar18 = uVar25 & 0xf800000;
          if (uVar18 == 0xf800000) {
            fVar19 = (float)(uVar25 | 0x70000000);
          }
          else if (uVar18 == 0) {
            fVar19 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar19 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar2 = *(ushort *)(lVar11 + 2 + lVar17 * 8);
          uVar28 = (uint)uVar2 << 0xd;
          uVar14 = uVar28 & 0xf800000;
          if (uVar14 == 0xf800000) {
            fVar15 = (float)(uVar28 | 0x70000000);
          }
          else if (uVar14 == 0) {
            fVar15 = (float)(uVar28 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar15 = (float)((uVar28 & 0xfffe000) + 0x38000000);
          }
          uVar3 = *(ushort *)(lVar11 + 4 + lVar17 * 8);
          uVar9 = (uint)uVar3 << 0xd;
          uVar16 = uVar9 & 0xf800000;
          if (uVar16 == 0xf800000) {
            fVar27 = (float)(uVar9 | 0x70000000);
          }
          else if (uVar16 == 0) {
            fVar27 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar27 = (float)((uVar9 & 0xfffe000) + 0x38000000);
          }
          uVar4 = *(ushort *)(lVar11 + 6 + lVar17 * 8);
          uVar20 = (uint)uVar4 << 0xd;
          uVar23 = uVar20 & 0xf800000;
          if (uVar23 == 0xf800000) {
            fVar8 = (float)(uVar20 | 0x70000000);
          }
          else if (uVar23 == 0) {
            fVar8 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar8 = (float)((uVar20 & 0xfffe000) + 0x38000000);
          }
          if (uVar18 == 0xf800000) {
            fVar26 = (float)(uVar25 | 0x70000000);
          }
          else if (uVar18 == 0) {
            fVar26 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar26 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          if (uVar14 == 0xf800000) {
            fVar29 = (float)(uVar28 | 0x70000000);
          }
          else if (uVar14 == 0) {
            fVar29 = (float)(uVar28 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar29 = (float)((uVar28 & 0xfffe000) + 0x38000000);
          }
          if (uVar16 == 0xf800000) {
            fVar10 = (float)(uVar9 | 0x70000000);
          }
          else if (uVar16 == 0) {
            fVar10 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar10 = (float)((uVar9 & 0xfffe000) + 0x38000000);
          }
          if (uVar23 == 0xf800000) {
            fVar21 = (float)(uVar20 | 0x70000000);
          }
          else if (uVar23 == 0) {
            fVar21 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar21 = (float)((uVar20 & 0xfffe000) + 0x38000000);
          }
          uVar18 = (int)(short)uVar1 & 0x80000000;
          dVar31 = (double)(float)((uint)fVar19 | uVar18);
          if (dVar30 <= dVar31) {
            dVar31 = dVar30;
          }
          uVar25 = (int)(short)uVar2 & 0x80000000;
          dVar32 = (double)(float)((uint)fVar15 | uVar25);
          if ((double)CONCAT44(uVar46,uVar45) <= dVar32) {
            dVar32 = (double)CONCAT44(uVar46,uVar45);
          }
          uVar14 = (int)(short)uVar3 & 0x80000000;
          dVar33 = (double)(float)((uint)fVar27 | uVar14);
          if ((double)CONCAT44(uVar44,uVar43) <= dVar33) {
            dVar33 = (double)CONCAT44(uVar44,uVar43);
          }
          uVar28 = (int)(short)uVar4 & 0x80000000;
          dVar34 = (double)(float)((uint)fVar8 | uVar28);
          if ((double)CONCAT44(uVar40,uVar39) <= dVar34) {
            dVar34 = (double)CONCAT44(uVar40,uVar39);
          }
          dVar35 = (double)(float)((uint)fVar26 | uVar18);
          if (dVar35 <= (double)CONCAT44(uVar42,uVar41)) {
            dVar35 = (double)CONCAT44(uVar42,uVar41);
          }
          dVar5 = (double)(float)((uint)fVar29 | uVar25);
          if (dVar5 <= dVar38) {
            dVar5 = dVar38;
          }
          dVar6 = (double)(float)((uint)fVar10 | uVar14);
          if (dVar6 <= dVar37) {
            dVar6 = dVar37;
          }
          dVar7 = (double)(float)(uVar28 | (uint)fVar21);
          if (dVar7 <= dVar36) {
            dVar7 = dVar36;
          }
          lVar17 = lVar17 + 1;
          uVar39 = SUB84(dVar34,0);
          uVar40 = (undefined4)((ulonglong)dVar34 >> 0x20);
          uVar43 = SUB84(dVar33,0);
          uVar44 = (undefined4)((ulonglong)dVar33 >> 0x20);
          uVar45 = SUB84(dVar32,0);
          uVar46 = (undefined4)((ulonglong)dVar32 >> 0x20);
          uVar41 = SUB84(dVar35,0);
          uVar42 = (undefined4)((ulonglong)dVar35 >> 0x20);
          dVar30 = dVar31;
          dVar36 = dVar7;
          dVar37 = dVar6;
          dVar38 = dVar5;
        } while (param_1 != (int)lVar17);
      }
      uVar12 = uVar12 + 1;
      uVar24 = (ulonglong)(uint)((int)uVar24 + param_4);
    } while (uVar12 != param_2);
    uVar18 = 0;
    uVar24 = 0;
    do {
      if (param_1 != 0) {
        lVar11 = (ulonglong)uVar18 + param_3 + 6;
        pfVar13 = (float *)((ulonglong)(uint)((int)uVar24 * param_1) * 0x10 + param_5);
        lVar17 = 0;
        do {
          uVar1 = *(ushort *)(lVar11 + lVar17 * 8);
          uVar25 = (uint)uVar1 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar19 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar19 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar19 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar2 = *(ushort *)(lVar11 + -2 + lVar17 * 8);
          uVar25 = (uint)uVar2 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar15 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar15 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar15 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar3 = *(ushort *)(lVar11 + -4 + lVar17 * 8);
          uVar25 = (uint)uVar3 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar27 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar27 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar27 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          uVar4 = *(ushort *)(lVar11 + -6 + lVar17 * 8);
          uVar25 = (uint)uVar4 << 0xd;
          if ((uVar25 & 0xf800000) == 0xf800000) {
            fVar8 = (float)(uVar25 | 0x70000000);
          }
          else if ((uVar25 & 0xf800000) == 0) {
            fVar8 = (float)(uVar25 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar8 = (float)((uVar25 & 0xfffe000) + 0x38000000);
          }
          *pfVar13 = (float)(((double)(float)((int)(short)uVar4 & 0x80000000U | (uint)fVar8) -
                             dVar31) / (dVar35 - dVar31));
          pfVar13[1] = (float)(((double)(float)((uint)fVar27 | (int)(short)uVar3 & 0x80000000U) -
                               dVar32) / (dVar5 - dVar32));
          pfVar13[2] = (float)(((double)(float)((uint)fVar15 | (int)(short)uVar2 & 0x80000000U) -
                               dVar33) / (dVar6 - dVar33));
          pfVar13[3] = (float)(((double)(float)((uint)fVar19 | (int)(short)uVar1 & 0x80000000U) -
                               dVar34) / (dVar7 - dVar34));
          lVar17 = lVar17 + 1;
          pfVar13 = pfVar13 + 4;
        } while (param_1 != (int)lVar17);
      }
      uVar24 = uVar24 + 1;
      uVar18 = uVar18 + param_4;
    } while (uVar24 != param_2);
  }
  return;
}



// FUNCTION 1431771f1 FUN_1431771f1 body=723 status=ok
// SIG undefined FUN_1431771f1(void)

void FUN_1431771f1(int param_1,uint param_2,float *param_3,int param_4,void *param_5,
                  longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  ulonglong uVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  if (*(int *)(param_6 + 4) == 3) {
    memcpy(param_5,param_3,(longlong)(int)(param_1 * param_2 * 0x10));
    return;
  }
  if (param_2 != 0) {
    dVar11 = 1.0;
    dVar16 = 0.0;
    uVar9 = 0;
    dVar5 = 0.0;
    dVar14 = 0.0;
    dVar12 = 0.0;
    dVar13 = 1.0;
    dVar15 = 1.0;
    dVar4 = 1.0;
    do {
      if (param_1 != 0) {
        pfVar10 = (float *)((ulonglong)(uint)((int)uVar9 * param_4) + (longlong)param_3);
        uVar17 = SUB84(dVar16,0);
        uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
        uVar25 = SUB84(dVar14,0);
        uVar26 = (undefined4)((ulonglong)dVar14 >> 0x20);
        uVar27 = SUB84(dVar12,0);
        uVar28 = (undefined4)((ulonglong)dVar12 >> 0x20);
        uVar19 = SUB84(dVar11,0);
        uVar20 = (undefined4)((ulonglong)dVar11 >> 0x20);
        uVar21 = SUB84(dVar13,0);
        uVar22 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar23 = SUB84(dVar15,0);
        uVar24 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar6 = dVar5;
        dVar7 = dVar4;
        iVar8 = param_1;
        do {
          dVar11 = (double)*pfVar10;
          dVar12 = dVar11;
          if ((double)CONCAT44(uVar28,uVar27) <= dVar11) {
            dVar12 = (double)CONCAT44(uVar28,uVar27);
          }
          dVar13 = (double)pfVar10[1];
          dVar14 = dVar13;
          if ((double)CONCAT44(uVar26,uVar25) <= dVar13) {
            dVar14 = (double)CONCAT44(uVar26,uVar25);
          }
          dVar15 = (double)pfVar10[2];
          dVar5 = dVar15;
          if (dVar6 <= dVar15) {
            dVar5 = dVar6;
          }
          dVar4 = (double)pfVar10[3];
          dVar16 = dVar4;
          if ((double)CONCAT44(uVar18,uVar17) <= dVar4) {
            dVar16 = (double)CONCAT44(uVar18,uVar17);
          }
          if (dVar11 <= (double)CONCAT44(uVar20,uVar19)) {
            dVar11 = (double)CONCAT44(uVar20,uVar19);
          }
          if (dVar13 <= (double)CONCAT44(uVar22,uVar21)) {
            dVar13 = (double)CONCAT44(uVar22,uVar21);
          }
          if (dVar15 <= (double)CONCAT44(uVar24,uVar23)) {
            dVar15 = (double)CONCAT44(uVar24,uVar23);
          }
          if (dVar4 <= dVar7) {
            dVar4 = dVar7;
          }
          pfVar10 = pfVar10 + 4;
          uVar17 = SUB84(dVar16,0);
          uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
          uVar25 = SUB84(dVar14,0);
          uVar26 = (undefined4)((ulonglong)dVar14 >> 0x20);
          uVar27 = SUB84(dVar12,0);
          uVar28 = (undefined4)((ulonglong)dVar12 >> 0x20);
          uVar19 = SUB84(dVar11,0);
          uVar20 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uVar21 = SUB84(dVar13,0);
          uVar22 = (undefined4)((ulonglong)dVar13 >> 0x20);
          uVar23 = SUB84(dVar15,0);
          uVar24 = (undefined4)((ulonglong)dVar15 >> 0x20);
          iVar8 = iVar8 + -1;
          dVar6 = dVar5;
          dVar7 = dVar4;
        } while (iVar8 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
    uVar9 = 0;
    do {
      if (param_1 != 0) {
        pfVar10 = (float *)((ulonglong)(uint)((int)uVar9 * param_1) * 0x10 + (longlong)param_5);
        iVar8 = param_1;
        do {
          fVar1 = param_3[3];
          fVar2 = param_3[2];
          fVar3 = param_3[1];
          *pfVar10 = (float)(((double)*param_3 - dVar12) / (dVar11 - dVar12));
          pfVar10[1] = (float)(((double)fVar3 - dVar14) / (dVar13 - dVar14));
          pfVar10[2] = (float)(((double)fVar2 - dVar5) / (dVar15 - dVar5));
          pfVar10[3] = (float)(((double)fVar1 - dVar16) / (dVar4 - dVar16));
          pfVar10 = pfVar10 + 4;
          param_3 = param_3 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
  }
  return;
}



// FUNCTION 1431774ec FUN_1431774ec body=548 status=ok
// SIG undefined FUN_1431774ec(void)

void FUN_1431774ec(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14a34edb0;
  iVar2 = *(int *)(param_1 + 0x51);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[0x50];
    lVar6 = 0;
    do {
      FUN_144ad4734(*(undefined8 *)param_1[1],*(undefined8 *)(lVar3 + lVar6));
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_1473830e8(param_1 + 0x58);
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x4f) == '\x01') {
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  if (*(char *)(param_1 + 0x4d) == '\x01') {
    *(undefined1 *)(param_1 + 0x4d) = 0;
  }
  puVar4 = (undefined8 *)param_1[0x4b];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  FUN_14476c499(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_144b1b7f7(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    plVar5 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_144b1b7f7(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_14476c499(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143177710 FUN_143177710 body=33 status=ok
// SIG undefined FUN_143177710(void)

void FUN_143177710(longlong *param_1)

{
  FUN_143175d60();
                    /* WARNING: Could not recover jumptable at 0x00014317772e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 143177732 FUN_143177732 body=1175 status=ok
// SIG undefined FUN_143177732(void)

void FUN_143177732(longlong *param_1,ulonglong *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(uint *)(*param_1 + 0x18);
  uVar3 = *(uint *)(*param_1 + 0x10);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 5;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x30);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 5;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar18 + 3) = 0;
  *(float *)((longlong)puVar18 + 0x1c) = (float)uVar3;
  *(float *)(puVar18 + 4) = (float)uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar19 = FUN_145ee189a();
  lVar20 = 0;
  FUN_1448e935e(uVar4,&local_70,uVar19,0);
  FUN_145ee189a();
  lVar6 = local_68;
  lVar23 = local_70;
  local_80 = local_70;
  local_78 = local_68;
  uVar19 = FUN_145c1161c();
  FUN_1448e935e(uVar4,&local_70,uVar19,0);
  FUN_145c1161c();
  if (lVar23 != 0) {
    lVar23 = (longlong)*(int *)(lVar23 + 0xd4);
    lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x50) + lVar23 * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(lVar6 + 8),lVar23,1);
    }
  }
  *(longlong *)(param_1[1] + 8) = lVar20;
  if (local_70 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_68 + 8) + 0x50) +
              (longlong)*(int *)(local_70 + 0xd4) * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(local_68 + 8),(longlong)*(int *)(local_70 + 0xd4),1);
    }
  }
  *(longlong *)(param_1[1] + 0x10) = lVar20;
  *(undefined8 *)param_1[1] = DAT_14ca94df8;
  *(undefined4 *)(param_1[1] + 0x58) = 1;
  puVar5 = (undefined4 *)param_1[1];
  lVar20 = FUN_140028f18(param_2,puVar5);
  if ((lVar20 != 0) && ((*(byte *)((longlong)puVar5 + 0xcb) & 0x10) == 0)) {
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
    uVar11 = puVar5[4];
    uVar12 = puVar5[5];
    uVar13 = puVar5[6];
    uVar14 = puVar5[7];
    uVar15 = puVar5[9];
    uVar16 = puVar5[10];
    uVar17 = puVar5[0xb];
    *(undefined4 *)(param_2 + 0x35) = puVar5[8];
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uVar15;
    *(undefined4 *)(param_2 + 0x36) = uVar16;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uVar17;
    *(undefined4 *)(param_2 + 0x33) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x19c) = uVar12;
    *(undefined4 *)(param_2 + 0x34) = uVar13;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uVar14;
    *(undefined4 *)(param_2 + 0x31) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x18c) = uVar8;
    *(undefined4 *)(param_2 + 0x32) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0x194) = uVar10;
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
    if ((undefined8 *)param_2[1] < puVar22) {
      FUN_140023dd8(param_2,0x28);
      puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar22 = puVar18 + 4;
    }
    *param_2 = (ulonglong)puVar22;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar18;
    param_2[6] = (ulonglong)(puVar18 + 1);
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_14a37d348;
    puVar18[2] = lVar20;
    *(undefined4 *)(puVar18 + 3) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x1c) = 1;
  }
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a2f1798;
  *(undefined4 *)(puVar18 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar18 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar18 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = 0x3f800000;
  lVar20 = *param_1;
  lVar23 = param_1[2];
  lVar6 = param_1[3];
  if (local_80 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_78 + 8) + 0x50) +
              (longlong)*(int *)(local_80 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(local_78 + 8),(longlong)*(int *)(local_80 + 0xd4),1);
    }
  }
  local_98 = lVar6;
  local_90 = lVar20 + 0x10;
  local_88 = lVar20 + 0x18;
  FUN_147383587(param_2,&local_80,lVar21,lVar23);
  if (local_70 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_68 + 8) + 0x50) +
              (longlong)*(int *)(local_70 + 0xd4) * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(local_68 + 8),(longlong)*(int *)(local_70 + 0xd4),1);
    }
  }
  FUN_1473836ba(param_2,&local_70,lVar20);
  uVar1 = *(ushort *)(local_70 + 0xe0);
  uVar4 = *(undefined8 *)param_1[5];
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a34ff08;
  *(uint *)(puVar18 + 2) = (uint)uVar1;
  puVar18[3] = uVar4;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fc200;
  puVar18[2] = 0x200000000;
  *(undefined4 *)(puVar18 + 3) = 1;
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143177bca FUN_143177bca body=400 status=ok
// SIG undefined FUN_143177bca(void)

void FUN_143177bca(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                     (*(longlong **)(param_2 + 0x40),*(undefined4 *)*param_1);
  uVar1 = *(undefined4 *)(param_1[2] + 0x10);
  lVar7 = *(longlong *)param_1[1];
  lVar2 = *(longlong *)(lVar7 + 0xb8);
  if ((*(byte *)(lVar2 + 0xdf) & 1) == 0) {
    if ((*(uint *)(lVar2 + 0xc0) >> 0xb & 1) == 0) {
      FUN_1447d3e9e(plVar5,lVar2,*(uint *)(lVar2 + 0xc0),0x800,uVar1,0);
      bVar4 = true;
      goto LAB_143177c5e;
    }
  }
  else {
    FUN_144706208(plVar5,lVar2,0x7fffffff,0x800,uVar1);
  }
  bVar4 = false;
LAB_143177c5e:
  FUN_14492aa36(plVar5);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x80))
            (*(longlong **)(lVar6 + 0x28),param_1[3],0,0,0,param_1[2],*(undefined8 *)param_1[4]);
  uVar3 = *(undefined8 *)(*(longlong *)param_1[1] + 0xb8);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  if (bVar4) {
    FUN_1447d3e9e(plVar5,lVar2,0x800,*(undefined4 *)(lVar2 + 0xc0),uVar1,0);
  }
  else if (((*(byte *)(lVar2 + 0xdf) & 1) != 0) && (lVar7 = lVar7 + 0xa8, lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143177d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar7,0x18);
    return;
  }
  return;
}



// FUNCTION 143177d64 FUN_143177d64 body=501 status=ok
// SIG undefined FUN_143177d64(void)

void FUN_143177d64(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                     (*(longlong **)(param_2 + 0x40),*(undefined4 *)*param_1);
  local_3c = *(undefined4 *)param_1[6];
  local_40 = *(undefined4 *)param_1[5];
  local_70 = &local_48;
  local_48 = 0;
  puVar2 = (undefined4 *)param_1[4];
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  local_78 = &local_58;
  lVar7 = 0;
  if (*(char *)(*(longlong *)param_1[1] + 0x52) == '\0') {
    lVar7 = *(longlong *)param_1[1];
  }
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)param_1[7]);
  FUN_1473837d8(plVar5,lVar7,param_1[2],param_1[3]);
  uVar1 = *(undefined4 *)(param_1[9] + 0x10);
  lVar7 = *(longlong *)param_1[8];
  if ((*(byte *)(lVar7 + 0xdf) & 1) == 0) {
    if ((*(uint *)(lVar7 + 0xc0) >> 0xb & 1) == 0) {
      local_78 = (undefined4 *)CONCAT44(local_78._4_4_,uVar1);
      local_70 = (undefined8 *)0x0;
      FUN_1447d3e9e(plVar5,lVar7,*(uint *)(lVar7 + 0xc0),0x800);
      bVar4 = true;
      goto LAB_143177e62;
    }
  }
  else {
    local_78 = (undefined4 *)CONCAT44(local_78._4_4_,uVar1);
    FUN_144706208(plVar5,lVar7,0x7fffffff,0x800);
  }
  bVar4 = false;
LAB_143177e62:
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
  local_68 = param_1[0xb];
  local_70 = (undefined8 *)param_1[9];
  local_78 = (undefined4 *)((ulonglong)local_78 & 0xffffffff00000000);
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x80))(*(longlong **)(lVar6 + 0x28),param_1[10],0,0);
  uVar3 = *(undefined8 *)param_1[0xc];
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  uVar3 = *(undefined8 *)param_1[8];
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  if (bVar4) {
    local_78 = (undefined4 *)CONCAT44(local_78._4_4_,uVar1);
    local_70 = (undefined8 *)0x0;
    FUN_1447d3e9e(plVar5,lVar7,0x800,*(undefined4 *)(lVar7 + 0xc0));
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143177f5a FUN_143177f5a body=1182 status=ok
// SIG undefined FUN_143177f5a(void)

void FUN_143177f5a(longlong *param_1,ulonglong *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(uint *)(*param_1 + 0x18);
  uVar3 = *(uint *)(*param_1 + 0x10);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 5;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x30);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 5;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar18 + 3) = 0;
  *(float *)((longlong)puVar18 + 0x1c) = (float)uVar3;
  *(float *)(puVar18 + 4) = (float)uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar19 = FUN_145ee189a();
  lVar20 = 0;
  FUN_1448e935e(uVar4,&local_70,uVar19,0);
  FUN_145ee189a();
  lVar6 = local_68;
  lVar23 = local_70;
  local_80 = local_70;
  local_78 = local_68;
  uVar19 = FUN_1460455a2();
  FUN_1448e935e(uVar4,&local_70,uVar19,0);
  FUN_1460455a2();
  if (lVar23 != 0) {
    lVar23 = (longlong)*(int *)(lVar23 + 0xd4);
    lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x50) + lVar23 * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(lVar6 + 8),lVar23,1);
    }
  }
  *(longlong *)(param_1[1] + 8) = lVar20;
  if (local_70 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_68 + 8) + 0x50) +
              (longlong)*(int *)(local_70 + 0xd4) * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(local_68 + 8),(longlong)*(int *)(local_70 + 0xd4),1);
    }
  }
  *(longlong *)(param_1[1] + 0x10) = lVar20;
  *(undefined8 *)param_1[1] = DAT_14ca94df8;
  *(undefined4 *)(param_1[1] + 0x58) = 1;
  puVar5 = (undefined4 *)param_1[1];
  lVar20 = FUN_140028f18(param_2,puVar5);
  if ((lVar20 != 0) && ((*(byte *)((longlong)puVar5 + 0xcb) & 0x10) == 0)) {
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
    uVar11 = puVar5[4];
    uVar12 = puVar5[5];
    uVar13 = puVar5[6];
    uVar14 = puVar5[7];
    uVar15 = puVar5[9];
    uVar16 = puVar5[10];
    uVar17 = puVar5[0xb];
    *(undefined4 *)(param_2 + 0x35) = puVar5[8];
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uVar15;
    *(undefined4 *)(param_2 + 0x36) = uVar16;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uVar17;
    *(undefined4 *)(param_2 + 0x33) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x19c) = uVar12;
    *(undefined4 *)(param_2 + 0x34) = uVar13;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uVar14;
    *(undefined4 *)(param_2 + 0x31) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x18c) = uVar8;
    *(undefined4 *)(param_2 + 0x32) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0x194) = uVar10;
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
    if ((undefined8 *)param_2[1] < puVar22) {
      FUN_140023dd8(param_2,0x28);
      puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar22 = puVar18 + 4;
    }
    *param_2 = (ulonglong)puVar22;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar18;
    param_2[6] = (ulonglong)(puVar18 + 1);
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_14a37d348;
    puVar18[2] = lVar20;
    *(undefined4 *)(puVar18 + 3) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x1c) = 1;
  }
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a2f1798;
  *(undefined4 *)(puVar18 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar18 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar18 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = 0x3f800000;
  lVar20 = *param_1;
  lVar23 = param_1[2];
  lVar6 = param_1[3];
  if (local_80 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_78 + 8) + 0x50) +
              (longlong)*(int *)(local_80 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(local_78 + 8),(longlong)*(int *)(local_80 + 0xd4),1);
    }
  }
  local_98 = lVar6;
  local_90 = lVar20 + 0x10;
  local_88 = lVar20 + 0x18;
  FUN_147383587(param_2,&local_80,lVar21,lVar23);
  lVar20 = param_1[4];
  if (local_70 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_68 + 8) + 0x50) +
              (longlong)*(int *)(local_70 + 0xd4) * 8);
    if (lVar23 == 0) {
      lVar23 = FUN_1400bafc2(*(longlong *)(local_68 + 8),(longlong)*(int *)(local_70 + 0xd4),1);
    }
  }
  FUN_147383c35(param_2,&local_70,lVar23,lVar20);
  uVar1 = *(ushort *)(local_70 + 0xe0);
  uVar4 = *(undefined8 *)param_1[5];
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a34ff18;
  *(uint *)(puVar18 + 2) = (uint)uVar1;
  puVar18[3] = uVar4;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar22 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar22) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar22;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fc200;
  puVar18[2] = 0x200000000;
  *(undefined4 *)(puVar18 + 3) = 1;
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143178404 FUN_143178404 body=397 status=ok
// SIG undefined FUN_143178404(void)

void FUN_143178404(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                     (*(longlong **)(param_2 + 0x40),*(undefined4 *)*param_1);
  uVar1 = *(undefined4 *)(param_1[2] + 0x10);
  lVar7 = *(longlong *)param_1[1];
  lVar2 = *(longlong *)(lVar7 + 0xb8);
  if ((*(byte *)(lVar2 + 0xdf) & 1) == 0) {
    if ((*(uint *)(lVar2 + 0xc0) >> 0xb & 1) == 0) {
      FUN_1447d3e9e(plVar5,lVar2,*(uint *)(lVar2 + 0xc0),0x800,uVar1,0);
      bVar4 = true;
      goto LAB_143178498;
    }
  }
  else {
    FUN_144706208(plVar5,lVar2,0x7fffffff,0x800,uVar1);
  }
  bVar4 = false;
LAB_143178498:
  FUN_14492aa36(plVar5);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x80))
            (*(longlong **)(lVar6 + 0x28),param_1[3],0,0,0,param_1[2],param_1[4]);
  uVar3 = *(undefined8 *)(*(longlong *)param_1[1] + 0xb8);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  if (bVar4) {
    FUN_1447d3e9e(plVar5,lVar2,0x800,*(undefined4 *)(lVar2 + 0xc0),uVar1,0);
  }
  else if (((*(byte *)(lVar2 + 0xdf) & 1) != 0) && (lVar7 = lVar7 + 0xa8, lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014317855b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar7,0x18);
    return;
  }
  return;
}



// FUNCTION 14317859c FUN_14317859c body=397 status=ok
// SIG undefined FUN_14317859c(void)

void FUN_14317859c(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                     (*(longlong **)(param_2 + 0x40),*(undefined4 *)*param_1);
  uVar1 = *(undefined4 *)(param_1[2] + 0x10);
  lVar7 = *(longlong *)param_1[1];
  lVar2 = *(longlong *)(lVar7 + 0xb8);
  if ((*(byte *)(lVar2 + 0xdf) & 1) == 0) {
    if ((*(uint *)(lVar2 + 0xc0) >> 0xb & 1) == 0) {
      FUN_1447d3e9e(plVar5,lVar2,*(uint *)(lVar2 + 0xc0),0x800,uVar1,0);
      bVar4 = true;
      goto LAB_143178630;
    }
  }
  else {
    FUN_144706208(plVar5,lVar2,0x7fffffff,0x800,uVar1);
  }
  bVar4 = false;
LAB_143178630:
  FUN_14492aa36(plVar5);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x80))
            (*(longlong **)(lVar6 + 0x28),param_1[3],0,0,0,param_1[2],param_1[4]);
  uVar3 = *(undefined8 *)(*(longlong *)param_1[1] + 0xb8);
  lVar6 = plVar5[0x33];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = plVar5[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  if (bVar4) {
    FUN_1447d3e9e(plVar5,lVar2,0x800,*(undefined4 *)(lVar2 + 0xc0),uVar1,0);
  }
  else if (((*(byte *)(lVar2 + 0xdf) & 1) != 0) && (lVar7 = lVar7 + 0xa8, lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001431786f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar7,0x18);
    return;
  }
  return;
}



// FUNCTION 143178734 FUN_143178734 body=210 status=ok
// SIG undefined FUN_143178734(void)

void FUN_143178734(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      cVar1 = *(char *)(lVar2 + 0x10 + lVar5);
      if (cVar1 == '\x01') {
        if (*(longlong *)(lVar2 + 8 + lVar5) == 0) {
          FUN_143165bba();
        }
        else {
          FUN_147372a88();
        }
      }
      else if (cVar1 == '\0') {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if (*(longlong *)(lVar2 + 8 + lVar5) == 0) {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x28) = 0x100000;
          if (*(char *)(lVar3 + 0xea) == '\0') {
            LOCK();
            DAT_14ca84ee0 = DAT_14ca84ee0 - *(longlong *)(lVar3 + 0xe0);
            UNLOCK();
          }
          FUN_14488df26(lVar3 + 0x78);
        }
        else {
          FUN_14018601c(lVar3);
        }
        FUN_14017ef6c(lVar3 + 0x30,param_2);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)(int)lVar4 * 0x18 != lVar5);
  }
  return;
}



// FUNCTION 143178806 FUN_143178806 body=341 status=ok
// SIG undefined FUN_143178806(void)

void FUN_143178806(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  for (bVar5 = *(byte *)(param_1 + 0x20); bVar5 != 0; bVar5 = bVar5 - 1 & bVar5) {
    uVar4 = (ulonglong)((-bVar5 & bVar5) == 2);
    (&local_48)[uVar4] = *(undefined8 *)(param_2 + 0x50 + uVar4 * 8);
  }
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  lVar6 = *(longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar7 = 0;
    do {
      cVar1 = *(char *)(lVar6 + 0x10 + lVar7);
      if (cVar1 == '\x01') {
        if (*(longlong *)(lVar6 + 8 + lVar7) == 0) {
          FUN_143165bba();
        }
        else {
          FUN_147372a88();
        }
      }
      else if (cVar1 == '\0') {
        lVar3 = *(longlong *)(lVar6 + lVar7);
        if (*(longlong *)(lVar6 + 8 + lVar7) == 0) {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x28) = 0x100000;
          if (*(char *)(lVar3 + 0xea) == '\0') {
            LOCK();
            DAT_14ca84ee0 = DAT_14ca84ee0 - *(longlong *)(lVar3 + 0xe0);
            UNLOCK();
          }
          FUN_14488df26(lVar3 + 0x78);
        }
        else {
          FUN_14018601c(lVar3);
        }
        FUN_14017ef6c(lVar3 + 0x30,&local_58);
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar7);
    lVar6 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317895c FUN_14317895c body=339 status=ok
// SIG undefined FUN_14317895c(void)

void FUN_14317895c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_1;
    lVar9 = 0;
    do {
      switch(*(undefined4 *)(lVar2 + lVar9)) {
      case 0:
      case 2:
        puVar3 = *(undefined8 **)(lVar2 + 8 + lVar9);
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (puVar3 != (undefined8 *)0x0 && *piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        break;
      case 1:
        (**(code **)(**(longlong **)(lVar2 + 8 + lVar9) + 0x10))();
        break;
      case 3:
        FUN_147370c3a(*(longlong *)(*(longlong *)(lVar2 + 8 + lVar9) + 0x10) + 0x658);
        break;
      case 4:
        FUN_14736ba48(*(longlong *)(lVar2 + 0x10 + lVar9) + 0x6b0,*(undefined8 *)(lVar2 + 8 + lVar9)
                     );
        break;
      case 5:
        if (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 8 + lVar9) + 0x10) + 0x6c0) != 0) {
          FUN_14736b63e();
        }
        break;
      case 6:
        plVar8 = *(longlong **)(lVar2 + 8 + lVar9);
LAB_143178a64:
        FUN_1400020a8(plVar8);
        break;
      case 7:
        FUN_14315f380(*(undefined8 *)(lVar2 + 0x10 + lVar9),*(undefined8 *)(lVar2 + 8 + lVar9));
        break;
      case 9:
        puVar3 = *(undefined8 **)(lVar2 + 8 + lVar9);
        pcVar4 = (code *)*puVar3;
        plVar8 = puVar3 + 4;
        if ((longlong *)puVar3[2] != (longlong *)0x0) {
          plVar8 = (longlong *)puVar3[2];
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        (*pcVar4)(uVar6);
        plVar8 = *(longlong **)(lVar2 + 8 + lVar9);
        if (plVar8 != (longlong *)0x0) {
          if (*plVar8 != 0) {
            plVar7 = plVar8 + 4;
            if ((longlong *)plVar8[2] != (longlong *)0x0) {
              plVar7 = (longlong *)plVar8[2];
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          goto LAB_143178a64;
        }
      }
      lVar9 = lVar9 + 0x30;
    } while ((longlong)(int)lVar5 * 0x30 != lVar9);
  }
  return;
}



// FUNCTION 143178ac6 FUN_143178ac6 body=57 status=ok
// SIG undefined FUN_143178ac6(void)

undefined8 * FUN_143178ac6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a34ff40;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143178b00 FUN_143178b00 body=110 status=ok
// SIG undefined FUN_143178b00(void)

void FUN_143178b00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x1b8);
  if (lVar2 != 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x1b0);
    plVar3 = plVar4 + lVar2 * 2;
    do {
      lVar2 = (longlong)DAT_14c760da4;
      if (lVar2 != 0) {
        lVar1 = *plVar4;
        lVar5 = 0;
        do {
          FUN_143160b92(*(longlong *)(lVar1 + 2000 + lVar5) + 0x40);
          lVar5 = lVar5 + 8;
        } while (lVar2 * 8 != lVar5);
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar3);
  }
  return;
}



// FUNCTION 143178b6e FUN_143178b6e body=230 status=ok
// SIG undefined FUN_143178b6e(void)

void FUN_143178b6e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar6 = (longlong)*(int *)(*param_1 + 0x1b8);
  if (lVar6 != 0) {
    plVar8 = *(longlong **)(*param_1 + 0x1b0);
    plVar5 = plVar8 + lVar6 * 2;
    do {
      lVar6 = (longlong)DAT_14c760da4;
      if (lVar6 != 0) {
        lVar1 = *plVar8;
        lVar7 = 0;
        do {
          FUN_14315aa64(*(longlong *)(lVar1 + 2000 + lVar7) + 0x13e8,param_2);
          FUN_14315ab78(*(longlong *)(lVar1 + 2000 + lVar7) + 0x14b0,param_2);
          lVar2 = *(longlong *)(lVar1 + 2000 + lVar7);
          uVar3 = *(undefined8 *)(lVar2 + 0x14f0);
          uVar4 = (**(code **)(*(longlong *)*param_2 + 0x278))
                            ((longlong *)*param_2,*(undefined4 *)(lVar2 + 8));
          FUN_1431623be(uVar3,uVar4);
          FUN_14156b630(*(longlong *)(lVar1 + 2000 + lVar7) + 0x40);
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar5);
  }
  return;
}



// FUNCTION 143178c54 FUN_143178c54 body=355 status=ok
// SIG undefined FUN_143178c54(void)

void FUN_143178c54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = (longlong *)0x0;
  local_58[1] = (longlong *)0x0;
  plVar5 = local_58[0];
  for (bVar8 = *(byte *)(param_1 + 0x18); local_58[0] = plVar5, bVar8 != 0;
      bVar8 = bVar8 - 1 & bVar8) {
    uVar4 = (ulonglong)((-bVar8 & bVar8) == 2);
    local_58[uVar4] = *(longlong **)(param_2 + 0x50 + uVar4 * 8);
    plVar5 = local_58[0];
  }
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x1b8);
  if (lVar7 != 0) {
    local_68 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x1b0);
    local_60 = local_68 + lVar7 * 2;
    do {
      lVar7 = (longlong)DAT_14c760da4;
      if (lVar7 != 0) {
        lVar1 = *local_68;
        lVar9 = 0;
        do {
          FUN_14315aa64(*(longlong *)(lVar1 + 2000 + lVar9) + 0x13e8,local_58);
          FUN_14315ab78(*(longlong *)(lVar1 + 2000 + lVar9) + 0x14b0,local_58);
          lVar2 = *(longlong *)(lVar1 + 2000 + lVar9);
          uVar3 = *(undefined8 *)(lVar2 + 0x14f0);
          uVar6 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined4 *)(lVar2 + 8));
          FUN_1431623be(uVar3,uVar6);
          FUN_14156b630(*(longlong *)(lVar1 + 2000 + lVar9) + 0x40);
          lVar9 = lVar9 + 8;
        } while (lVar7 * 8 != lVar9);
      }
      local_68 = local_68 + 2;
    } while (local_68 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143178db8 FUN_143178db8 body=724 status=ok
// SIG undefined FUN_143178db8(void)

void FUN_143178db8(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  ulonglong *puVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  double *local_80;
  double local_78 [2];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)*param_1;
  if ((longlong)(int)param_1[0x1a] == 0) {
    dVar19 = 0.0;
  }
  else {
    plVar17 = (longlong *)param_1[0x19];
    if ((longlong *)param_1[0x19] == (longlong *)0x0) {
      plVar17 = param_1 + 1;
    }
    plVar10 = plVar17 + (int)param_1[0x1a];
    bVar12 = true;
    lVar9 = 0;
    iVar14 = 0;
    uVar8 = 0;
    do {
      lVar7 = 0;
      do {
        lVar13 = *plVar17;
        if ((*(int *)(lVar13 + 0x70) < *(int *)(lVar13 + 0x68)) &&
           ((lVar7 == 0 ||
            (*(ulonglong *)(*(longlong *)(lVar13 + 0x60) + (longlong)*(int *)(lVar13 + 0x70) * 8) <
             *(ulonglong *)(*(longlong *)(lVar7 + 0x60) + (longlong)*(int *)(lVar7 + 0x70) * 8)))))
        {
          lVar7 = lVar13;
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar10);
      if (lVar7 == 0) break;
      if (bVar12) {
        uVar16 = *(uint *)(lVar7 + 0x70);
        puVar15 = (ulonglong *)((longlong)(int)uVar16 * 8 + *(longlong *)(lVar7 + 0x60));
        uVar18 = -(uVar16 & 1) | 1;
      }
      else {
        if (iVar14 < 1) {
          uVar16 = *(uint *)(lVar7 + 0x70);
          lVar13 = *(longlong *)(lVar7 + 0x60);
          lVar11 = (longlong)(int)uVar16;
        }
        else {
          uVar16 = *(uint *)(lVar7 + 0x70);
          lVar13 = *(longlong *)(lVar7 + 0x60);
          lVar11 = (longlong)(int)uVar16;
          uVar2 = *(ulonglong *)(lVar13 + lVar11 * 8);
          if (uVar8 < uVar2) {
            lVar9 = (lVar9 - uVar8) + uVar2;
          }
        }
        uVar18 = 1;
        if ((uVar16 & 1) != 0) {
          *(longlong *)(lVar7 + 0x78) =
               *(longlong *)(lVar7 + 0x78) +
               (*(longlong *)(lVar13 + lVar11 * 8) - *(longlong *)(lVar13 + -8 + lVar11 * 8));
          uVar18 = 0xffffffff;
        }
        puVar15 = (ulonglong *)(lVar13 + lVar11 * 8);
      }
      uVar8 = *puVar15;
      iVar14 = iVar14 + uVar18;
      *(uint *)(lVar7 + 0x70) = uVar16 + 1;
      plVar17 = (longlong *)param_1[0x19];
      if ((longlong *)param_1[0x19] == (longlong *)0x0) {
        plVar17 = param_1 + 1;
      }
      bVar12 = false;
      plVar10 = plVar17 + (int)param_1[0x1a];
    } while ((longlong)(int)param_1[0x1a] != 0);
    auVar20._8_4_ = (int)((ulonglong)lVar9 >> 0x20);
    auVar20._0_8_ = lVar9;
    auVar20._12_4_ = 0x45300000;
    dVar19 = ((double)CONCAT44(0x43300000,(int)lVar9) - 4503599627370496.0) +
             (auVar20._8_8_ - 1.9342813113834067e+25);
  }
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)plVar1[0x36] + 2000) + 0x1280);
  lVar7 = *(longlong *)(*(longlong *)plVar1[0x36] + 2000) + 0xb00;
  if (lVar9 != 0) {
    lVar7 = lVar9;
  }
  iVar14 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x80))
                     (*(longlong **)(lVar7 + 0x10),local_68);
  if (iVar14 < 0) {
    local_80 = local_78;
    local_78[0] = 0.0;
    local_78[1] = 0.0;
    local_88 = 0;
    FUN_145763094(iVar14,
                  "Queues[(uint32)QueueType].D3DCommandQueue->GetTimestampFrequency(&Frequency)",
                  ".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x2ff);
  }
  dVar3 = (((double)CONCAT44(0x43300000,local_68._0_4_) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,local_68._4_4_) - 1.9342813113834067e+25)) * DAT_14c83f420;
  local_78[0] = 0.0;
  cVar4 = (**(code **)(*plVar1 + 0x5f8))(plVar1);
  lVar9 = DAT_14ca77360;
  if (cVar4 != '\0') {
    iVar14 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
      uVar8 = 0;
    }
    else if (iVar14 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar9 + uVar8 * 4) == 0) {
      DAT_14ca84ac0 = (undefined4)(longlong)local_78[0];
      goto LAB_143178ff9;
    }
  }
  DAT_14ca84ac0 = (undefined4)(longlong)(dVar19 * (1.0 / dVar3));
LAB_143178ff9:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143179098 FUN_143179098 body=29 status=ok
// SIG undefined FUN_143179098(void)

void FUN_143179098(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1431790b6 FUN_1431790b6 body=52 status=ok
// SIG undefined FUN_1431790b6(void)

undefined8 * FUN_1431790b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a34ff70;
  FUN_1400500bc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431790ea FUN_1431790ea body=48 status=ok
// SIG undefined FUN_1431790ea(void)

void FUN_1431790ea(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c720(*param_1 + 0xd8,*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 0x270) = uVar1;
  *(undefined1 *)(param_2 + 0x278) = 1;
  return;
}



// FUNCTION 143179130 FUN_143179130 body=29 status=ok
// SIG undefined FUN_143179130(void)

undefined8 FUN_143179130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14317914e FUN_14317914e body=135 status=ok
// SIG undefined FUN_14317914e(void)

void FUN_14317914e(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if (puVar1 != (uint *)0x0) {
    uVar5 = *puVar1;
    if (uVar5 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    plVar4 = *(longlong **)(puVar1 + (ulonglong)uVar3 * 2 + 2);
    if (plVar4 != (longlong *)0x0) {
      uVar6 = CONCAT44(uVar3,uVar5);
      do {
        if (*(code **)(*plVar4 + 0x10) == FUN_144810b26) {
          FUN_144810b26();
        }
        else {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        bVar2 = (byte)((ulonglong)uVar6 >> 0x20) & 0x1f;
        uVar5 = (uint)uVar6 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar5 == 0) {
          return;
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        plVar4 = (longlong *)plVar4[(ulonglong)uVar3 + 0x19];
        uVar6 = CONCAT44(uVar3,uVar5);
      } while (plVar4 != (longlong *)0x0);
    }
  }
  return;
}



// FUNCTION 1431791d6 FUN_1431791d6 body=641 status=ok
// SIG undefined FUN_1431791d6(void)

void FUN_1431791d6(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar8 = *(longlong *)(*param_1 + 0x1280);
  lVar11 = *param_1 + 0xb00;
  if (lVar8 != 0) {
    lVar11 = lVar8;
  }
  lVar8 = (longlong)(int)param_1[1] * 0x280;
  iVar3 = *(int *)(lVar11 + 8 + lVar8);
  uVar9 = DAT_14c760bc4;
  if ((((iVar3 == 2) || (uVar9 = DAT_14c760bc0, iVar3 == 1)) ||
      (uVar9 = DAT_14c760bbc, uVar10 = 0x7fffffff, iVar3 == 0)) && (uVar10 = 1, 1 < (int)uVar9)) {
    uVar10 = uVar9;
  }
  lVar11 = lVar11 + lVar8;
  uVar9 = *(uint *)(param_1 + 0x2b);
  if ((longlong)(int)uVar9 != 0) {
    iVar3 = *(int *)(lVar11 + 0x100);
    *(uint *)(lVar11 + 0x100) = iVar3 + uVar9;
    if ((uint)(*(int *)(lVar11 + 0x104) - iVar3) < uVar9) {
      FUN_14472227c((longlong *)(lVar11 + 0xf8),iVar3);
    }
    memmove((void *)((longlong)iVar3 * 0x18 + *(longlong *)(lVar11 + 0xf8)),(void *)param_1[0x2a],
            (longlong)(int)uVar9 * 0x18);
    *(undefined4 *)(param_1 + 0x2b) = 0;
  }
  uVar9 = *(uint *)(param_1 + 0x2d);
  if ((longlong)(int)uVar9 != 0) {
    iVar3 = *(int *)(lVar11 + 0x110);
    *(uint *)(lVar11 + 0x110) = iVar3 + uVar9;
    if ((uint)(*(int *)(lVar11 + 0x114) - iVar3) < uVar9) {
      FUN_14472227c((longlong *)(lVar11 + 0x108),iVar3);
    }
    memmove((void *)((longlong)iVar3 * 0x18 + *(longlong *)(lVar11 + 0x108)),(void *)param_1[0x2c],
            (longlong)(int)uVar9 * 0x18);
    *(undefined4 *)(param_1 + 0x2d) = 0;
  }
  if (param_1[0x1f] != 0) {
    plVar1 = (longlong *)(lVar11 + 0xe8);
    iVar3 = *(int *)(lVar11 + 0xe0);
    *(int *)(lVar11 + 0xe0) = iVar3 + 1;
    iVar4 = *(int *)(lVar11 + 0xf0);
    if (iVar3 == 0) {
      *(uint *)(lVar11 + 0xf0) = iVar4 + 1U;
      if (*(uint *)(lVar11 + 0xf4) < iVar4 + 1U) {
        FUN_14472227c(plVar1,iVar4);
      }
      lVar8 = *plVar1;
      *(longlong *)(lVar8 + 0x10 + (longlong)iVar4 * 0x18) = param_1[0x21];
      uVar5 = *(undefined4 *)((longlong)param_1 + 0xfc);
      lVar7 = param_1[0x20];
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x104);
      puVar2 = (undefined4 *)(lVar8 + (longlong)iVar4 * 0x18);
      *puVar2 = (int)param_1[0x1f];
      puVar2[1] = uVar5;
      puVar2[2] = (int)lVar7;
      puVar2[3] = uVar6;
    }
    else {
      *(int *)(lVar11 + 0xf0) = iVar4 + -1;
      FUN_144b1b760(plVar1);
    }
    uVar9 = *(uint *)(param_1 + 0x29);
    if ((longlong)(int)uVar9 != 0) {
      iVar3 = *(int *)(lVar11 + 0xf0);
      *(uint *)(lVar11 + 0xf0) = iVar3 + uVar9;
      if ((uint)(*(int *)(lVar11 + 0xf4) - iVar3) < uVar9) {
        FUN_14472227c(plVar1,iVar3);
      }
      memmove((void *)((longlong)iVar3 * 0x18 + *plVar1),(void *)param_1[0x28],
              (longlong)(int)uVar9 * 0x18);
      *(undefined4 *)(param_1 + 0x29) = 0;
    }
    iVar3 = *(int *)(lVar11 + 0xf0);
    *(uint *)(lVar11 + 0xf0) = iVar3 + 1U;
    if (*(uint *)(lVar11 + 0xf4) < iVar3 + 1U) {
      FUN_14472227c(plVar1,iVar3);
    }
    lVar8 = *(longlong *)(lVar11 + 0xe8);
    *(longlong *)(lVar8 + 0x10 + (longlong)iVar3 * 0x18) = param_1[0x24];
    lVar7 = param_1[0x23];
    plVar1 = (longlong *)(lVar8 + (longlong)iVar3 * 0x18);
    *plVar1 = param_1[0x22];
    plVar1[1] = lVar7;
    if (uVar10 <= *(uint *)(lVar11 + 0xe0)) {
      *(undefined4 *)(lVar11 + 0xe0) = 0;
    }
  }
  return;
}



// FUNCTION 143179457 FUN_143179457 body=301 status=ok
// SIG undefined FUN_143179457(void)

void FUN_143179457(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000143179478:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(uint *)(param_1 + iVar5) <= *(uint *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(uint *)(param_1 + iVar2) < *(uint *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000143179478;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
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
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(uint *)(param_1 + iVar5) <= *(uint *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(uint *)(param_1 + iVar6) <= *(uint *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
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



// FUNCTION 143179584 FUN_143179584 body=282 status=ok
// SIG undefined FUN_143179584(void)

undefined8 * FUN_143179584(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431774c4);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14317969e FUN_14317969e body=1204 status=ok
// SIG undefined FUN_14317969e(void)

void FUN_14317969e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_104;
  int local_100;
  uint local_fc;
  longlong *local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e0 = param_2;
  lVar4 = (**(code **)(*(longlong *)param_1[1] + 8))();
  uVar1 = *(uint *)(lVar4 + 0x30);
  lVar4 = (**(code **)(*(longlong *)*param_1 + 8))();
  if ((byte)*(uint *)(lVar4 + 0x30) < (byte)uVar1) {
    uVar1 = *(uint *)(lVar4 + 0x30);
  }
  lVar4 = (**(code **)(*(longlong *)*param_1 + 8))();
  local_c8 = (ulonglong)*(byte *)(lVar4 + 0x30);
  lVar4 = (**(code **)(*(longlong *)param_1[1] + 8))();
  puVar7 = (uint *)(*param_1 + 0x120);
  if (*param_1 == 0) {
    puVar7 = (uint *)0x0;
  }
  uVar12 = *puVar7;
  local_f8 = param_1;
  if (uVar12 != 0) {
    local_d0 = (ulonglong)*(byte *)(lVar4 + 0x30);
    uVar2 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar4 = param_1[1] + 0x120;
    if (param_1[1] == 0) {
      lVar4 = 0;
    }
    plVar13 = (longlong *)(lVar4 + 8 + (ulonglong)(uVar2 * 8));
    plVar14 = (longlong *)((longlong)puVar7 + (ulonglong)(uVar2 * 8) + 8);
    local_fc = uVar1 & 0xff;
    local_100 = -local_fc;
    do {
      uVar11 = (ulonglong)uVar2;
      plVar14 = (longlong *)*plVar14;
      plVar13 = (longlong *)*plVar13;
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(local_e0 + 0x40) + 0x278))
                         (*(longlong **)(local_e0 + 0x40),*(undefined4 *)(plVar14[0xd] + 8));
      local_f0 = plVar13[0x17];
      if ((*(byte *)(local_f0 + 0xdf) & 1) == 0) {
        if ((*(uint *)(local_f0 + 0xc0) >> 10 & 1) != 0) goto LAB_1431797de;
        local_120 = (undefined8 *)0x0;
        local_128 = 0xffffffff;
        uVar6 = FUN_1447d3e9e(plVar5,local_f0,*(uint *)(local_f0 + 0xc0),0x400);
        local_108 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      else {
        local_128 = 0xffffffff;
        FUN_144706208(plVar5,local_f0,0x7fffffff,0x400);
LAB_1431797de:
        local_108 = 0;
      }
      local_d8 = plVar14[0x17];
      local_104 = uVar12;
      local_e8 = uVar11;
      if ((*(byte *)(local_d8 + 0xdf) & 1) == 0) {
        if ((*(uint *)(local_d8 + 0xc0) >> 0xb & 1) != 0) goto LAB_143179855;
        local_120 = (undefined8 *)0x0;
        local_128 = 0xffffffff;
        uVar6 = FUN_1447d3e9e(plVar5,local_d8,*(uint *)(local_d8 + 0xc0),0x800);
        local_10c = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      else {
        local_128 = 0xffffffff;
        FUN_144706208(plVar5,local_d8,0x7fffffff,0x800);
LAB_143179855:
        local_10c = 0;
      }
      FUN_14492aa36(plVar5);
      iVar10 = local_100;
      if ((char)local_fc != '\0') {
        do {
          (**(code **)(*plVar14 + 8))(plVar14);
          iVar3 = (int)local_c8;
          (**(code **)(*plVar13 + 8))(plVar13);
          local_90 = *(undefined8 *)(plVar13[0x17] + 0x20);
          local_88 = 0;
          local_70 = 0;
          uStack_68 = 0;
          uStack_78 = 0;
          local_80 = (ulonglong)(uint)((int)local_d0 + iVar10);
          local_c0 = *(undefined8 *)(plVar14[0x17] + 0x20);
          local_b8 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          uStack_a8 = 0;
          local_b0 = (ulonglong)(uint)(iVar3 + iVar10);
          lVar4 = plVar5[0x33];
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
            lVar4 = plVar5[0x33];
          }
          *(int *)(lVar4 + 0x1c0) = *(int *)(lVar4 + 0x1c0) + 1;
          local_120 = &local_c0;
          local_118 = 0;
          local_128 = 0;
          (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x80))
                    (*(longlong **)(lVar4 + 0x28),&local_90,0,0);
          lVar4 = plVar13[0x17];
          lVar8 = plVar5[0x33];
          if (lVar8 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
            lVar8 = plVar5[0x33];
          }
          FUN_1447093fc(lVar8,lVar4);
          lVar4 = plVar14[0x17];
          lVar8 = plVar5[0x33];
          if (lVar8 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
            lVar8 = plVar5[0x33];
          }
          FUN_1447093fc(lVar8,lVar4);
          if (plVar5[0x33] != 0) {
            if ((0 < (int)DAT_14c760b84 && *(int *)((longlong)plVar5 + 0x1c4) == 0) &&
               (DAT_14c760b84 < *(uint *)(plVar5[0x33] + 0x1c0))) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
      }
      uVar12 = local_104;
      if ((char)local_10c == '\0') {
        bVar9 = (byte)local_e8;
        if (((*(byte *)(local_d8 + 0xdf) & 1) != 0) && (plVar14 + 0x15 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x20))(plVar5,plVar14 + 0x15,0x18);
        }
      }
      else {
        local_120 = (undefined8 *)0x0;
        local_128 = 0xffffffff;
        FUN_1447d3e9e(plVar5,local_d8,0x800);
        bVar9 = (byte)local_e8;
        uVar12 = local_104;
      }
      if ((char)local_108 == '\0') {
        if (((*(byte *)(local_f0 + 0xdf) & 1) != 0) && (plVar13 + 0x15 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x20))(plVar5,plVar13 + 0x15,0x18);
        }
      }
      else {
        local_120 = (undefined8 *)0x0;
        local_128 = 0xffffffff;
        FUN_1447d3e9e(plVar5,local_f0,0x400);
      }
      uVar12 = uVar12 & (-2 << (bVar9 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar9 & 0x1f));
      if (uVar12 == 0) break;
      uVar2 = 0;
      if (uVar12 != 0) {
        for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      plVar14 = (longlong *)((longlong)plVar14 + (ulonglong)(uVar2 * 8) + 0x128);
      plVar13 = (longlong *)((longlong)plVar13 + (ulonglong)(uVar2 * 8) + 0x128);
    } while( true );
  }
  LOCK();
  *(int *)local_f8[2] = *(int *)local_f8[2] + -1;
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143179b5e FUN_143179b5e body=385 status=ok
// SIG undefined FUN_143179b5e(void)

void FUN_143179b5e(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))(*(longlong **)(param_2 + 0x40),0);
  uVar1 = (undefined4)param_1[9];
  lVar3 = *(longlong *)(lVar2 + 0xb8);
  if ((*(byte *)(lVar3 + 0xdf) & 1) == 0) {
    if ((*(uint *)(lVar3 + 0xc0) >> 0xb & 1) == 0) {
      FUN_1447d3e9e(plVar6,lVar3,*(uint *)(lVar3 + 0xc0),0x800,uVar1,0);
      bVar5 = true;
      goto LAB_143179be7;
    }
  }
  else {
    FUN_144706208(plVar6,lVar3,0x7fffffff,0x800,uVar1);
  }
  bVar5 = false;
LAB_143179be7:
  FUN_14492aa36(plVar6);
  lVar7 = plVar6[0x33];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    lVar7 = plVar6[0x33];
  }
  *(int *)(lVar7 + 0x1c0) = *(int *)(lVar7 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x80))
            (*(longlong **)(lVar7 + 0x28),param_1 + 1,0,0,0,param_1 + 7,0);
  uVar4 = *(undefined8 *)(lVar2 + 0xb8);
  lVar7 = plVar6[0x33];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    lVar7 = plVar6[0x33];
  }
  FUN_1447093fc(lVar7,uVar4);
  if (bVar5) {
    FUN_1447d3e9e(plVar6,lVar3,0x800,*(undefined4 *)(lVar3 + 0xc0),uVar1,0);
  }
  else if (((*(byte *)(lVar3 + 0xdf) & 1) != 0) && (lVar2 + 0xa8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143179ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x20))(plVar6,lVar2 + 0xa8,0x18);
    return;
  }
  return;
}



// FUNCTION 143179cea FUN_143179cea body=116 status=ok
// SIG undefined FUN_143179cea(void)

void FUN_143179cea(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 143179d5e FUN_143179d5e body=801 status=ok
// SIG undefined FUN_143179d5e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143179d5e(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  plVar10 = &local_d8;
  local_48 = DAT_14c707940 ^ (ulonglong)&uStack_58;
  local_c0 = (ulonglong)*(uint *)(param_1 + 0x10);
  local_c8 = param_2;
  if (local_c0 < 0x5e) {
    if (*(uint *)(param_1 + 0x10) == 0) {
      uVar12 = 0;
      local_b8 = (undefined4 *)0x0;
    }
    else {
      lVar8 = -(local_c0 * 0x2c + 0x1e & 0xfffffffffffffff0);
      plVar10 = (longlong *)((longlong)&local_d8 + lVar8);
      local_b8 = (undefined4 *)((longlong)&local_d8 + lVar8);
      uVar12 = local_c0;
    }
  }
  else {
    local_b8 = (undefined4 *)FUN_14001cc68(local_c0 * 0x2c,0);
    plVar10 = &local_d8;
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x10);
  }
  local_50 = 0;
  lVar8 = param_1[0xd];
  lVar2 = *(longlong *)(*param_1 + 0xb8);
  plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(*param_1 + 0x68) + 0x10) + 8);
  lVar3 = *plVar7;
  *(undefined8 **)((longlong)plVar10 + -0x10) = &local_50;
  *(undefined4 **)((longlong)plVar10 + -0x18) = local_b8 + uVar12 * 8 + uVar12;
  *(undefined4 **)((longlong)plVar10 + -0x20) = local_b8 + uVar12 * 8;
  *(undefined4 **)((longlong)plVar10 + -0x28) = local_b8;
  *(longlong *)((longlong)plVar10 + -0x30) = lVar8;
  pcVar4 = *(code **)(lVar3 + 0x130);
  *(undefined8 *)((longlong)plVar10 + -0x58) = 0x143179e44;
  (*pcVar4)(plVar7,lVar2 + 0x58,0);
  local_80 = *(undefined8 *)(param_1[3] + 0x20);
  local_78 = 1;
  lVar8 = *param_1;
  if (lVar8 != -0x120) {
    uVar13 = *(uint *)(lVar8 + 0x120);
    if (uVar13 == 0) {
      uVar9 = 0x20;
    }
    else {
      uVar9 = 0;
      if (uVar13 != 0) {
        for (; (uVar13 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x128 + (ulonglong)uVar9 * 8);
    if (lVar8 != 0) {
      uVar14 = CONCAT44(uVar9,uVar13);
      do {
        lVar2 = *(longlong *)(lVar8 + 0xb8);
        uVar1 = *(undefined4 *)(*(longlong *)(lVar8 + 0x68) + 8);
        plVar7 = *(longlong **)(local_c8 + 0x40);
        pcVar4 = *(code **)(*plVar7 + 0x278);
        local_d8 = lVar8;
        *(undefined8 *)((longlong)plVar10 + -0x28) = 0x143179ec9;
        plVar7 = (longlong *)(*pcVar4)(plVar7,uVar1);
        local_b0 = *(undefined8 *)(lVar2 + 0x20);
        local_a8 = 0;
        local_d0 = lVar2;
        if ((int)param_1[0x10] != 0) {
          uVar12 = 0;
          puVar11 = local_b8;
          do {
            local_a0 = (undefined4)uVar12;
            local_70 = *puVar11;
            uStack_6c = puVar11[1];
            uStack_68 = puVar11[2];
            uStack_64 = puVar11[3];
            local_60 = puVar11[4];
            uStack_5c = puVar11[5];
            uStack_58 = puVar11[6];
            uStack_54 = puVar11[7];
            lVar8 = plVar7[0x33];
            if (lVar8 == 0) {
              pcVar4 = *(code **)(*plVar7 + 8);
              *(undefined8 *)((longlong)plVar10 + -0x28) = 0x143179f22;
              (*pcVar4)(plVar7);
              lVar8 = plVar7[0x33];
            }
            plVar5 = *(longlong **)(lVar8 + 0x28);
            *(int *)(lVar8 + 0x1c0) = *(int *)(lVar8 + 0x1c0) + 1;
            lVar8 = *plVar5;
            *(undefined8 **)((longlong)plVar10 + -0x18) = &local_80;
            *(undefined8 *)((longlong)plVar10 + -0x10) = 0;
            *(undefined4 *)((longlong)plVar10 + -0x20) = 0;
            pcVar4 = *(code **)(lVar8 + 0x80);
            *(undefined8 *)((longlong)plVar10 + -0x48) = 0x143179f67;
            (*pcVar4)(plVar5,&local_b0,0,0);
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 8;
          } while (uVar12 < *(uint *)(param_1 + 0x10));
        }
        *(undefined8 *)((longlong)plVar10 + -8) = 0;
        *(undefined4 *)((longlong)plVar10 + -0x10) = 0xffffffff;
        lVar8 = local_d0;
        *(undefined8 *)((longlong)plVar10 + -0x38) = 0x143179faf;
        FUN_1447d3e9e(plVar7,lVar8);
        if (((plVar7[0x33] != 0) &&
            (0 < (int)DAT_14c760b84 && *(int *)((longlong)plVar7 + 0x1c4) == 0)) &&
           (DAT_14c760b84 < *(uint *)(plVar7[0x33] + 0x1c0))) {
          pcVar4 = *(code **)(*plVar7 + 0x10);
          *(undefined8 *)((longlong)plVar10 + -0x28) = 0x143179ff4;
          (*pcVar4)(plVar7);
        }
        if (*(char *)(local_d8 + 0x119) == '\x02') {
          *(byte *)(local_d8 + 0xd6) = *(byte *)(local_d8 + 0xd6) & 0xef;
        }
        bVar6 = (byte)((ulonglong)uVar14 >> 0x20) & 0x1f;
        uVar13 = (uint)uVar14 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        if (uVar13 == 0) break;
        uVar9 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        lVar8 = *(longlong *)(local_d8 + 0x128 + (ulonglong)uVar9 * 8);
        uVar14 = CONCAT44(uVar9,uVar13);
      } while (lVar8 != 0);
    }
  }
  puVar11 = local_b8;
  if (0x5d < (uint)local_c0) {
    *(undefined8 *)((longlong)plVar10 + -0x28) = 0x14317a051;
    FUN_1400020a8(puVar11);
  }
  if ((local_48 ^ (ulonglong)&uStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)plVar10 + -0x28) = &UNK_14317a07f;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317a084 FUN_14317a084 body=34 status=ok
// SIG undefined FUN_14317a084(void)

void FUN_14317a084(longlong param_1)

{
  FUN_143179d5e(param_1 + 0x10);
  FUN_1456d02da(param_1 + 0x18);
  return;
}



// FUNCTION 14317a0a6 FUN_14317a0a6 body=312 status=ok
// SIG undefined FUN_14317a0a6(void)

void FUN_14317a0a6(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x20);
  local_50 = *(undefined8 *)(lVar5 + 0x68);
  local_60 = *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 0x20);
  local_58 = 1;
  local_38 = *(undefined4 *)(lVar5 + 0x90);
  local_48 = *(undefined4 *)(lVar5 + 0x80);
  uStack_44 = *(undefined4 *)(lVar5 + 0x84);
  uStack_40 = *(undefined4 *)(lVar5 + 0x88);
  uStack_3c = *(undefined4 *)(lVar5 + 0x8c);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != -0x120) {
    uVar6 = *(uint *)(lVar4 + 0x120);
    if (uVar6 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x128 + (ulonglong)uVar3 * 8);
    if (lVar4 != 0) {
      uVar7 = CONCAT44(uVar3,uVar6);
      do {
        uVar2 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                          (*(longlong **)(param_2 + 0x40),
                           *(undefined4 *)(*(longlong *)(lVar4 + 0x68) + 8));
        local_78 = 0;
        local_70 = &local_60;
        FUN_143175a9a(lVar4,uVar2,*(undefined4 *)(param_1 + 0x18),0);
        bVar1 = (byte)((ulonglong)uVar7 >> 0x20) & 0x1f;
        uVar6 = (uint)uVar7 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
        if (uVar6 == 0) break;
        uVar3 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0x128 + (ulonglong)uVar3 * 8);
        uVar7 = CONCAT44(uVar3,uVar6);
      } while (lVar4 != 0);
      lVar5 = *(longlong *)(param_1 + 0x20);
    }
  }
  if (lVar5 != 0) {
    FUN_1456d02da(lVar5 + 8);
    FUN_1400020a8(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317a1e0 FUN_14317a1e0 body=189 status=ok
// SIG undefined FUN_14317a1e0(void)

void FUN_14317a1e0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  lVar4 = *param_1;
  if (lVar4 != -0x120) {
    uVar5 = *(uint *)(lVar4 + 0x120);
    if (uVar5 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x128 + (ulonglong)uVar3 * 8);
    if (lVar4 != 0) {
      uVar6 = CONCAT44(uVar3,uVar5);
      do {
        uVar2 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                          (*(longlong **)(param_2 + 0x40),
                           *(undefined4 *)(*(longlong *)(lVar4 + 0x68) + 8));
        FUN_143175a9a(lVar4,uVar2,(int)param_1[7],*(undefined4 *)((longlong)param_1 + 0x3c),
                      (int)param_1[8],param_1 + 1);
        bVar1 = (byte)((ulonglong)uVar6 >> 0x20) & 0x1f;
        uVar5 = (uint)uVar6 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
        if (uVar5 == 0) {
          return;
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0x128 + (ulonglong)uVar3 * 8);
        uVar6 = CONCAT44(uVar3,uVar5);
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 14317a29e FUN_14317a29e body=190 status=ok
// SIG undefined FUN_14317a29e(void)

void FUN_14317a29e(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != -0x120) {
    uVar5 = *(uint *)(lVar4 + 0x120);
    if (uVar5 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x128 + (ulonglong)uVar3 * 8);
    if (lVar4 != 0) {
      uVar6 = CONCAT44(uVar3,uVar5);
      do {
        uVar2 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                          (*(longlong **)(param_2 + 0x40),
                           *(undefined4 *)(*(longlong *)(lVar4 + 0x68) + 8));
        FUN_143175a9a(lVar4,uVar2,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                      *(undefined4 *)(param_1 + 0x50),param_1 + 0x18);
        bVar1 = (byte)((ulonglong)uVar6 >> 0x20) & 0x1f;
        uVar5 = (uint)uVar6 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
        if (uVar5 == 0) {
          return;
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0x128 + (ulonglong)uVar3 * 8);
        uVar6 = CONCAT44(uVar3,uVar5);
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 14317a35c FUN_14317a35c body=747 status=ok
// SIG undefined FUN_14317a35c(void)

void FUN_14317a35c(uint *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  uint *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar8 = *(longlong *)(param_1 + 4);
  local_c8 = param_2;
  if (lVar8 != -0x120) {
    uVar9 = *(uint *)(lVar8 + 0x120);
    if (uVar9 == 0) {
      uVar7 = 0x20;
    }
    else {
      uVar7 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x128 + (ulonglong)uVar7 * 8);
    if (lVar8 != 0) {
      uVar10 = CONCAT44(uVar7,uVar9);
      local_d0 = param_1 + 6;
      do {
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(local_c8 + 0x40) + 0x278))
                           (*(longlong **)(local_c8 + 0x40),
                            *(undefined4 *)(*(longlong *)(lVar8 + 0x68) + 8));
        uVar9 = *param_1;
        lVar1 = *(longlong *)(lVar8 + 0xb8);
        local_90 = *(undefined8 *)(lVar1 + 0x20);
        local_88 = 0;
        local_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        local_80 = (ulonglong)uVar9;
        local_c0 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x10) + 0x20);
        local_b8 = 1;
        local_b0 = *local_d0;
        uStack_ac = local_d0[1];
        uStack_a8 = local_d0[2];
        uStack_a4 = local_d0[3];
        local_a0 = local_d0[4];
        uStack_9c = local_d0[5];
        uStack_98 = local_d0[6];
        uStack_94 = local_d0[7];
        if ((*(byte *)(lVar1 + 0xdf) & 1) == 0) {
          if ((*(uint *)(lVar1 + 0xc0) >> 10 & 1) != 0) goto LAB_14317a482;
          local_e0 = (undefined8 *)0x0;
          local_e8 = uVar9;
          FUN_1447d3e9e(plVar5,lVar1,*(uint *)(lVar1 + 0xc0),0x400);
          bVar4 = true;
        }
        else {
          local_e8 = uVar9;
          FUN_144706208(plVar5,lVar1,0x7fffffff,0x400);
LAB_14317a482:
          bVar4 = false;
        }
        FUN_14492aa36(plVar5);
        uVar2 = *(undefined8 *)(lVar8 + 0xb8);
        lVar6 = plVar5[0x33];
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
          lVar6 = plVar5[0x33];
        }
        FUN_1447093fc(lVar6,uVar2);
        lVar6 = plVar5[0x33];
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
          lVar6 = plVar5[0x33];
        }
        *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
        local_e8 = param_1[3];
        local_e0 = &local_c0;
        local_d8 = 0;
        (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x80))
                  (*(longlong **)(lVar6 + 0x28),&local_90,param_1[1],param_1[2]);
        if (((plVar5[0x33] != 0) &&
            (0 < (int)DAT_14c760b84 && *(int *)((longlong)plVar5 + 0x1c4) == 0)) &&
           (DAT_14c760b84 < *(uint *)(plVar5[0x33] + 0x1c0))) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        if (bVar4) {
          local_e0 = (undefined8 *)0x0;
          local_e8 = uVar9;
          FUN_1447d3e9e(plVar5,lVar1,0x400,*(undefined4 *)(lVar1 + 0xc0));
        }
        else if ((*(byte *)(lVar1 + 0xdf) & 1) != 0) {
          (**(code **)(*plVar5 + 0x20))(plVar5,lVar8 + 0xa8,0x18);
        }
        bVar3 = (byte)((ulonglong)uVar10 >> 0x20) & 0x1f;
        uVar9 = (uint)uVar10 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        if (uVar9 == 0) break;
        uVar7 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        lVar8 = *(longlong *)(lVar8 + 0x128 + (ulonglong)uVar7 * 8);
        uVar10 = CONCAT44(uVar7,uVar9);
      } while (lVar8 != 0);
    }
  }
  lVar8 = *(longlong *)(param_1 + 0xe);
  if (lVar8 != 0) {
    FUN_1456d02da(lVar8);
    FUN_1400020a8(lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317a651 FUN_14317a651 body=1628 status=ok
// SIG undefined FUN_14317a651(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317a651(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0x10;
  local_48 = 4;
  FUN_14078dbce(&DAT_14ca77050,L"d3d12.ReservedResourceHeapSizeMB",&local_34,
                L"Size of the backing heaps for reserved resources in megabytes (default 16MB).");
  atexit(FUN_14317066a);
  local_48 = 0;
  FUN_141471170(&DAT_14ca77068,L"d3d12.BindResourceLabels",&DAT_14c760bc8,
                L"Whether to enable binding of debug names to D3D12 resources.");
  atexit(FUN_1431707d7);
  local_34 = 0;
  local_48 = 4;
  FUN_14078dbce(&DAT_14ca77078,L"r.D3D12.Depth24Bit",&local_34,
                L"0: Use 32-bit float depth buffer\n1: Use 24-bit fixed point depth buffer(default)\n"
               );
  atexit(FUN_14317081c);
  local_34 = 4;
  local_48 = 4;
  FUN_14078dbce(&DAT_14ca77090,L"D3D12.ZeroBufferSizeInMB",&local_34,
                L"The D3D12 RHI needs a static allocation of zeroes to use when streaming textures asynchronously. It should be large enough to support the largest mipmap you need to stream. The default is 4MB."
               );
  atexit(FUN_143170861);
  _DAT_14ca770b0 = 0x100000000;
  puRam000000014ca770b8 = &DAT_100000001;
  _DAT_14ca770c0 = 0x100000000;
  uRam000000014ca770c8 = 1;
  _DAT_14ca770d0 = 0x7f7fffff00000000;
  uRam000000014ca770d8 = 0x3e800000000;
  _DAT_14ca770e0 = 0;
  _DAT_14ca770e8 = 3;
  uRam000000014ca770ec = 3;
  uRam000000014ca770f0 = 3;
  uRam000000014ca770f4 = 0;
  _DAT_14ca770f8 = &DAT_100000001;
  uRam000000014ca77100 = 0;
  _DAT_14ca77108 = 0x17f7fffff;
  uRam000000014ca77110 = 1000;
  _DAT_14ca77118 = 0x14;
  uRam000000014ca7711c = 1;
  uRam000000014ca77120 = 1;
  uRam000000014ca77124 = 1;
  _DAT_14ca77128 = 0x100000000;
  uRam000000014ca77130 = 1;
  _DAT_14ca77138 = 0x7f7fffff00000000;
  uRam000000014ca77140 = 0x3e800000002;
  _DAT_14ca77148 = 0x1400000000;
  uRam000000014ca77150 = 0x300000003;
  _DAT_14ca77158 = 3;
  puRam000000014ca77160 = &DAT_100000001;
  _DAT_14ca77168 = 0;
  uRam000000014ca77170 = 0x37f7fffff;
  _DAT_14ca77178 = 1000;
  uRam000000014ca77180 = 0x100000015;
  _DAT_14ca77188 = &DAT_100000001;
  uRam000000014ca77190 = 0x100000000;
  _DAT_14ca77198 = 1;
  uRam000000014ca771a0 = 0x7f7fffff00000000;
  _DAT_14ca771a8 = 0x3e800000004;
  uRam000000014ca771b0 = 0x1500000000;
  _DAT_14ca771b8 = 3;
  uRam000000014ca771bc = 3;
  uRam000000014ca771c0 = 3;
  uRam000000014ca771c4 = 0;
  _DAT_14ca771c8 = &DAT_100000001;
  uRam000000014ca771d0 = 0;
  _DAT_14ca771d8 = 0x7f7fffff;
  uRam000000014ca771dc = 5;
  uRam000000014ca771e0 = 1000;
  uRam000000014ca771e4 = 0;
  local_48 = 4;
  FUN_141471170(&DAT_14ca771e8,L"r.PSOPrecache.D3D12.DriverCacheAware",&DAT_14ca771f8,
                L"If enabled, the PSO precaching system will not precache PSOs that the D3D12 graphics driver considers similar for caching, i.e. it will not precache PSOs that while technically different will still result in a driver cache hit.\nThis is not implemented for all GPU vendors and can result in performance issues or cache misses if the heuristics the engine uses does not match the graphics driver\'s behavior that decides whether a PSO is in the cache or not."
               );
  atexit(FUN_143170e66);
  local_48 = 4;
  FUN_1415c789c(&DAT_14ca77200,L"gbx.rhi.QuantizeSamplerStateMipBiasAmount",&DAT_14ca771fc,
                L"Mip biass quantization amount. Any value greater than zero enabled this feature.")
  ;
  atexit(FUN_143170eab);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77210);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca77210,4000);
  atexit((_func_5014 *)&LAB_143170ef0);
  local_48 = 0;
  FUN_141471170(&DAT_14ca77238,L"D3D12.SamplerWarningThreshold",&DAT_14c760bb0,
                L"Threshold to start warning about creating too many sampler states");
  atexit(FUN_143170efe);
  local_48 = 4;
  FUN_141471170(&DAT_14ca77248,L"D3D12.GlobalResourceDescriptorHeapSize",&DAT_14c760bd0,
                L"Global resource descriptor heap size");
  atexit(FUN_1431712cd);
  local_48 = 4;
  FUN_141471170(&DAT_14ca77258,L"D3D12.GlobalSamplerDescriptorHeapSize",&DAT_14c760bcc,
                L"Global sampler descriptor heap size");
  atexit(FUN_143171312);
  local_48 = 4;
  FUN_141471170(&DAT_14ca77268,L"D3D12.LocalViewHeapSize",&DAT_14c760bb4,L"Local view heap size");
  atexit(FUN_143171357);
  local_48 = 4;
  FUN_141471170(&DAT_14ca77278,L"D3D12.GlobalSamplerHeapSize",&DAT_14c760bd4,
                L"Global sampler descriptor heap size");
  atexit(FUN_14317139c);
  local_48 = 4;
  FUN_141471170(&DAT_14ca77288,L"D3D12.OnlineDescriptorHeapSize",&DAT_14c760bdc,
                L"Online descriptor heap size");
  atexit(FUN_1431713e1);
  local_48 = 4;
  FUN_141471170(&DAT_14ca77298,L"D3D12.OnlineDescriptorHeapBlockSize",&DAT_14c760be4,
                L"Block size for sub allocations on the global view descriptor heap.");
  atexit(FUN_143171426);
  local_48 = 4;
  FUN_141471170(&DAT_14ca772a8,L"D3D12.BindlessOnlineDescriptorHeapSize",&DAT_14c760bd8,
                L"Online descriptor heap size");
  atexit(FUN_14317146b);
  local_48 = 4;
  FUN_141471170(&DAT_14ca772b8,L"D3D12.BindlessOnlineDescriptorHeapBlockSize",&DAT_14c760be0,
                L"Block size for sub allocations on the global view descriptor heap.");
  atexit(FUN_1431714b0);
  local_34 = 2;
  local_48 = 4;
  FUN_14078dbce(&DAT_14ca772c8,L"rhi.UseSubmissionThread",&local_34,
                L"Whether to enable the RHI submission thread.\n  0: No\n  1: Yes, but not when running with multi-gpu.\n  2: Yes, always\n"
               );
  atexit(FUN_14317156f);
  local_34 = 1;
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14ca772e0,L"D3D12.gbx.TriggerCrashOnLongFrame",&local_34,
                L"Whether to trigger a crash when a frame takes too long to render in Editor-Only.  (Default = 1)\n"
               );
  atexit(FUN_1431715b4);
  local_48 = 0x20;
  FUN_1415c789c(&DAT_14ca772f8,L"r.D3D12.SubmissionTimeout",&DAT_14c760bb8,
                L"The maximum time, in seconds, that a submitted GPU command list is allowed to take before the RHI reports a GPU hang"
               );
  atexit(FUN_1431715f9);
  local_48 = 0x20;
  FUN_141471170(&DAT_14ca77308,L"r.D3D12.Submission.MaxExecuteBatchSize.Direct",&DAT_14c760bbc,
                L"The maximum number of command lists to pass to a single ExecuteCommandLists invocation for direct queues\nThe valid range is 1 to INT_MAX inclusive. Values less than 1 will be clamped to 1"
               );
  atexit(FUN_14317163e);
  local_48 = 0x20;
  FUN_141471170(&DAT_14ca77318,L"r.D3D12.Submission.MaxExecuteBatchSize.Copy",&DAT_14c760bc0,
                L"The maximum number of command lists to pass to a single ExecuteCommandLists invocation for copy queues\nThe valid range is 1 to INT_MAX inclusive. Values less than 1 will be clamped to 1"
               );
  atexit(FUN_143171683);
  local_48 = 0x20;
  FUN_141471170(&DAT_14ca77328,L"r.D3D12.Submission.MaxExecuteBatchSize.Async",&DAT_14c760bc4,
                L"The maximum number of command lists to pass to a single ExecuteCommandLists invocation for async queues\nThe valid range is 1 to INT_MAX inclusive. Values less than 1 will be clamped to 1"
               );
  atexit(FUN_1431716c8);
  local_34 = 0;
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14ca77350,L"r.D3D12.GPUTimeFromTimestamps",&local_34,
                L"Prefer timestamps instead of GetHardwareGPUFrameTime to compute GPU frame time");
  atexit(FUN_1431737e6);
  local_48 = 0;
  FUN_141471170(&DAT_14ca77370,L"D3D12.AdjustTexturePoolSizeBasedOnBudget",&DAT_14ca77368,
                L"Indicates if the RHI should lower the texture pool size when the application is over the memory budget provided by the OS. This can result in lower quality textures (but hopefully improve performance)."
               );
  atexit(FUN_14317382b);
  local_34 = 0;
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14ca77380,L"D3D12.UseUpdateTexture3DComputeShader",&local_34,
                L"If enabled, use a compute shader for UpdateTexture3D. Avoids alignment restrictions 0: off (default)\n 1: on"
               );
  atexit(FUN_143173870);
  local_48 = 4;
  FUN_14153156c(&DAT_14ca77398,L"D3D12.TexturePoolOnlyAccountStreamableTexture",&DAT_14ca773a8,
                L"Texture streaming pool size only account streamable texture .\n - 0: All texture types are counted in the pool (legacy, default).\n - 1: Only streamable textures are counted in the pool.\nWhen enabling the new behaviour, r.Streaming.PoolSize will need to be re-adjusted.\n"
               );
  atexit(FUN_1431738b5);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14317acb0 FUN_14317acb0 body=1588 status=ok
// SIG undefined FUN_14317acb0(void)

void FUN_14317acb0(longlong param_1,undefined8 *param_2,void *param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  int iVar7;
  undefined8 *puVar8;
  void *pvVar9;
  LPVOID lpTlsValue;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort *puVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 uVar24;
  int iVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  longlong local_a0;
  void *local_98;
  longlong local_90;
  uint local_84;
  uint local_80;
  DWORD local_7c;
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar19 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if (uVar19 == 0) {
    uVar23 = 0x20;
  }
  else {
    uVar23 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
      }
    }
  }
  local_a4 = (undefined4)CONCAT71((int7)(local_60 >> 8),1);
  local_a0 = param_4;
  local_98 = param_3;
  local_78 = param_1;
  local_70 = param_2;
  if (DAT_14c760da4 != 0) {
    local_90 = **(longlong **)(param_1 + 0x1b0);
    uVar16 = (ulonglong)uVar23;
    puVar20 = (undefined8 *)0x0;
    local_84 = uVar23;
    local_80 = uVar19;
    do {
      lVar21 = local_a0;
      lVar15 = *(longlong *)(local_90 + 2000 + uVar16 * 8);
      puVar8 = (undefined8 *)FUN_14001cc68(0x100);
      *(byte *)((longlong)puVar8 + 0xd) = *(byte *)((longlong)puVar8 + 0xd) | 3;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined1 *)((longlong)puVar8 + 0xc) = 0x12;
      *puVar8 = &PTR_FUN_14a1e4960;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = lVar21;
      if (lVar21 != 0) {
        LOCK();
        *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
        UNLOCK();
      }
      iVar18 = *(int *)(lVar21 + 0x84);
      *(int *)(puVar8 + 5) = iVar18;
      puVar8[6] = lVar15;
      *(undefined4 *)(puVar8 + 7) = 1;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      *puVar8 = &PTR_FUN_14a351228;
      puVar8[0x10] = lVar15;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0;
      *(undefined1 *)(puVar8 + 0x1e) = 0;
      *(undefined2 *)((longlong)puVar8 + 0xf1) = 0xff;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      *(int *)(puVar8 + 0x1f) = param_5;
      if (iVar18 != 0 && local_98 != (void *)0x0) {
        lVar21 = **(longlong **)(local_78 + 0x1b0);
        if (param_5 == 2) {
          pvVar9 = (void *)FUN_14008f39a(*(undefined8 *)
                                          (lVar21 + 0x4e0 + (ulonglong)*(uint *)(lVar15 + 8) * 8),
                                         iVar18,0x100);
        }
        else {
          dwTlsIndex = DAT_14c760b80;
          local_68 = lVar21;
          if (DAT_14c760b80 == 0xffffffff) {
            dwTlsIndex = TlsAlloc();
            DVar6 = 0xffffffff;
            LOCK();
            bVar27 = DAT_14c760b80 != 0xffffffff;
            DVar5 = dwTlsIndex;
            if (bVar27) {
              DVar6 = DAT_14c760b80;
              DVar5 = DAT_14c760b80;
            }
            DAT_14c760b80 = DVar5;
            UNLOCK();
            if (bVar27) {
              TlsFree(dwTlsIndex);
              dwTlsIndex = DVar6;
            }
          }
          local_7c = dwTlsIndex;
          lpTlsValue = TlsGetValue(dwTlsIndex);
          if (lpTlsValue == (LPVOID)0x0) {
            lpTlsValue = (LPVOID)FUN_141116b2e(&local_68);
            FUN_140fddf04(lpTlsValue);
            TlsSetValue(local_7c,lpTlsValue);
          }
          pvVar9 = (void *)FUN_144abce4e((longlong)lpTlsValue + 0x10,iVar18,puVar8 + 0x10,0);
        }
        if (*(int *)(lVar15 + 0x6d0) == 0) {
          iVar18 = *(int *)(lVar15 + 0x6d4);
          memcpy(pvVar9,local_98,(ulonglong)*(uint *)(local_a0 + 0x84));
          if (iVar18 == 0) goto LAB_14317aeee;
        }
        else {
          memcpy(pvVar9,local_98,(ulonglong)*(uint *)(local_a0 + 0x84));
        }
        if ((longlong)*(int *)(local_a0 + 0x28) != 0) {
          puVar17 = *(ushort **)(local_a0 + 0x20);
          lVar15 = (longlong)*(int *)(local_a0 + 0x28) << 2;
          do {
            FUN_1456c4e2c(&local_68,local_98,puVar17);
            if (((int)local_68 != -1) && (local_68._4_1_ != -1)) {
              *(int *)((longlong)pvVar9 + (ulonglong)*puVar17) = (int)local_68;
            }
            puVar17 = puVar17 + 2;
            lVar15 = lVar15 + -4;
          } while (lVar15 != 0);
        }
      }
LAB_14317aeee:
      puVar22 = puVar8;
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
        UNLOCK();
        puVar22 = puVar20;
      }
      puVar22[uVar16 + 8] = puVar8;
      uVar19 = uVar19 & ~(1 << ((uint)uVar16 & 0x1f));
      if (uVar19 == 0) {
        uVar16 = 0x20;
      }
      else {
        uVar23 = 0;
        if (uVar19 != 0) {
          for (; (uVar19 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
          }
        }
        uVar16 = (ulonglong)uVar23;
      }
      puVar20 = puVar22;
    } while (uVar19 != 0);
    if (puVar22 != (undefined8 *)0x0) {
      *(uint *)(puVar22 + 7) = local_80;
      bVar4 = (byte)local_84 & 0x1f;
      uVar19 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & local_80;
      if (uVar19 != 0) {
        uVar23 = 0;
        if (uVar19 != 0) {
          for (; (uVar19 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
          }
        }
        uVar16 = (ulonglong)uVar23;
        do {
          puVar20 = puVar22 + 7;
          puVar8 = (undefined8 *)(puVar22[uVar16 + 8] + 0x38);
          for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar8 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar8 = puVar8 + 1;
          }
          bVar4 = (byte)uVar16 & 0x1f;
          uVar19 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar19;
          if (uVar19 == 0) {
            uVar16 = 0x20;
          }
          else {
            uVar23 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
              }
            }
            uVar16 = (ulonglong)uVar23;
          }
        } while (uVar19 != 0);
      }
      local_a4 = 0;
      goto LAB_14317b05a;
    }
  }
  puVar22 = (undefined8 *)0x0;
LAB_14317b05a:
  uVar19 = *(uint *)(local_a0 + 0x28);
  uVar16 = (ulonglong)uVar19;
  if ((uVar16 != 0) && (puVar22 != (undefined8 *)&DAT_ffffffffffffffc8)) {
    uVar23 = *(uint *)(puVar22 + 7);
    if (uVar23 == 0) {
      uVar14 = 0x20;
    }
    else {
      uVar14 = 0;
      if (uVar23 != 0) {
        for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
        }
      }
    }
    lVar15 = puVar22[(ulonglong)uVar14 + 8];
    if (lVar15 != 0) {
      uVar24 = CONCAT44(uVar14,uVar23);
      local_90 = CONCAT71(local_90._1_7_,(int)uVar19 < 1 || local_98 == (void *)0x0);
      do {
        plVar1 = (longlong *)(lVar15 + 0x10);
        iVar18 = *(int *)(lVar15 + 0x18);
        if (iVar18 < (int)uVar19) {
          *(uint *)(lVar15 + 0x18) = uVar19;
          if ((uint)(*(int *)(lVar15 + 0x1c) - iVar18) < uVar19 - iVar18) {
            FUN_144abccec(plVar1);
          }
          memset((void *)((longlong)iVar18 * 8 + *plVar1),0,(longlong)(int)(uVar19 - iVar18) << 3);
        }
        else {
          if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar16);
          }
          iVar25 = iVar18 - uVar19;
          if (iVar25 != 0 && (int)uVar19 <= iVar18) {
            pvVar9 = (void *)(uVar16 * 8 + *(longlong *)(lVar15 + 0x10));
            FUN_1446fc3c5(pvVar9);
            iVar7 = *(int *)(lVar15 + 0x18) - iVar18;
            if (iVar7 != 0) {
              memmove(pvVar9,(void *)((longlong)pvVar9 + (longlong)iVar25 * 8),(longlong)iVar7 << 3)
              ;
              iVar18 = *(int *)(lVar15 + 0x18);
            }
            *(int *)(lVar15 + 0x18) = iVar18 - iVar25;
            FUN_147389cc6(plVar1);
          }
        }
        if ((char)local_90 == '\0') {
          uVar26 = 0;
          lVar21 = local_a0;
          do {
            bVar4 = *(byte *)(*(longlong *)(lVar21 + 0x20) + 2 + uVar26 * 4);
            if (((byte)(bVar4 - 10) < 0xe) && ((0x3263U >> (bVar4 - 10 & 0x1f) & 1) != 0)) {
LAB_14317b187:
              lVar11 = 0;
            }
            else {
              plVar10 = (longlong *)
                        ((ulonglong)*(ushort *)(*(longlong *)(lVar21 + 0x20) + uVar26 * 4) +
                        (longlong)local_98);
              if ((bVar4 < 0x13) && ((0x67200U >> (bVar4 & 0x1f) & 1) != 0)) {
                if (*plVar10 == 0) goto LAB_14317b187;
                plVar10 = (longlong *)(*plVar10 + 0x10);
              }
              lVar11 = *plVar10;
            }
            lVar3 = *(longlong *)(*plVar1 + uVar26 * 8);
            if (lVar3 != lVar11) {
              *(longlong *)(*plVar1 + uVar26 * 8) = lVar11;
              if (lVar11 != 0) {
                LOCK();
                *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                UNLOCK();
              }
              if (lVar3 != 0) {
                LOCK();
                puVar2 = (uint *)(lVar3 + 8);
                uVar23 = *puVar2;
                *puVar2 = *puVar2 - 1;
                UNLOCK();
                if ((uVar23 & 0x3fffffff) == 1) {
                  puVar2 = (uint *)(lVar3 + 8);
                  LOCK();
                  uVar23 = *puVar2;
                  *puVar2 = *puVar2 | 0x40000000;
                  UNLOCK();
                  if ((uVar23 >> 0x1e & 1) == 0) {
                    bVar4 = *(byte *)(lVar3 + 0xd);
                    plVar12 = (longlong *)FUN_14001cc68(0x10);
                    plVar12[1] = lVar3;
                    plVar10 = DAT_14ca843c0;
                    plVar13 = DAT_14ca843c8;
                    lVar21 = local_a0;
                    if ((bVar4 & 2) == 0) {
                      do {
                        *plVar12 = (longlong)plVar10;
                        LOCK();
                        bVar27 = plVar10 != DAT_14ca843c0;
                        plVar13 = plVar12;
                        if (bVar27) {
                          plVar10 = DAT_14ca843c0;
                          plVar13 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar13;
                        UNLOCK();
                      } while (bVar27);
                    }
                    else {
                      do {
                        *plVar12 = (longlong)plVar13;
                        LOCK();
                        bVar27 = plVar13 != DAT_14ca843c8;
                        plVar10 = plVar12;
                        if (bVar27) {
                          plVar13 = DAT_14ca843c8;
                          plVar10 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar10;
                        UNLOCK();
                      } while (bVar27);
                    }
                  }
                }
              }
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar16);
        }
        bVar4 = (byte)((ulonglong)uVar24 >> 0x20) & 0x1f;
        uVar23 = (uint)uVar24 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        if (uVar23 == 0) break;
        uVar14 = 0;
        if (uVar23 != 0) {
          for (; (uVar23 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        lVar15 = *(longlong *)(lVar15 + 0x40 + (ulonglong)uVar14 * 8);
        uVar24 = CONCAT44(uVar14,uVar23);
      } while (lVar15 != 0);
    }
  }
  *local_70 = puVar22;
  if ((char)local_a4 == '\0') {
    LOCK();
    *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317b2e6 FUN_14317b2e6 body=46 status=ok
// SIG undefined FUN_14317b2e6(void)

void FUN_14317b2e6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x538);
    FUN_14473bdf6(uVar1,0);
    FUN_14473bdf6(uVar1,1);
  }
  return;
}



// FUNCTION 14317b314 FUN_14317b314 body=7681 status=ok
// SIG undefined FUN_14317b314(void)

void FUN_14317b314(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint *puVar10;
  wchar_t *pwVar11;
  uint uVar12;
  longlong **pplVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong **pplVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong **pplVar22;
  longlong lVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_408 [32];
  wchar_t *local_3e8;
  longlong local_3e0;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  undefined8 local_3c8;
  longlong local_3c0;
  undefined8 *local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  ulonglong uStack_3a0;
  longlong **local_398;
  longlong **pplStack_390;
  longlong *local_388;
  longlong **pplStack_380;
  longlong *local_370;
  uint local_368;
  uint local_364;
  undefined1 local_360;
  undefined1 local_35f;
  longlong local_358;
  undefined8 uStack_350;
  longlong local_348;
  ulonglong uStack_340;
  longlong *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  int local_2c4;
  undefined1 local_2c0 [8];
  undefined1 *local_2b8;
  int local_2b0;
  longlong *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  int local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [24];
  longlong *local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  ulonglong uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_d8 [2];
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_408;
  DAT_14c868880 = 1;
  DAT_14c868882 = 1;
  local_1f8 = (wchar_t *)0x0;
  uStack_1f0 = (longlong **)0x0;
  uVar25 = (ulonglong)(int)DAT_14c760da4;
  local_3e0 = param_1;
  local_3c8 = param_2;
  if (0 < (longlong)uVar25) {
    lVar15 = **(longlong **)(param_1 + 0x1b0);
    uVar20 = 0;
    do {
      iVar5 = (**(code **)(**(longlong **)
                             (*(longlong *)(*(longlong *)(lVar15 + 2000 + uVar20 * 8) + 0x10) + 8) +
                          0x128))();
      if (iVar5 < 0) {
        FUN_14317d116(&local_2a8,iVar5);
        FUN_140002266(&local_c8,L"\r\n\t- Device %d Removed: %s",uVar20 & 0xffffffff);
        iVar5 = (int)uStack_c0 + -1;
        if ((int)uStack_c0 == 0) {
          iVar5 = 0;
        }
        FUN_1400020e8(&local_1f8,local_c8,iVar5);
        if (local_c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_140002266(&local_2a8,L"\r\n\t- Device %d OK (no device removed reason)",
                      uVar20 & 0xffffffff);
        iVar5 = (int)uStack_2a0 + -1;
        if ((int)uStack_2a0 == 0) {
          iVar5 = 0;
        }
        FUN_1400020e8(&local_1f8,local_2a8,iVar5);
      }
      if (local_2a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar20 = uVar20 + 1;
    } while (uVar25 != uVar20);
    if (local_1f8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar25 = (ulonglong)DAT_14c760da4;
  }
  local_1f8 = (wchar_t *)0x0;
  uStack_1f0 = (longlong **)0x0;
  if ((int)uVar25 != 0) {
    uVar12 = 0;
    do {
      lVar15 = *(longlong *)(**(longlong **)(local_3e0 + 0x1b0) + 2000 + (longlong)(int)uVar12 * 8);
      iVar5 = *(int *)(lVar15 + 0x12c0);
      if (0 < iVar5) {
        lVar23 = 0x248;
        lVar26 = 0;
        do {
          lVar9 = *(longlong *)(lVar15 + 0x1280);
          if (*(longlong *)(lVar15 + 0x1280) == 0) {
            lVar9 = lVar15 + 0xb00;
          }
          if (*(longlong *)(lVar9 + lVar23) != 0) {
            local_3e8 = L"3D";
            if (lVar26 == 2) {
              local_3e8 = L"Compute";
            }
            if (lVar26 == 1) {
              local_3e8 = L"Copy";
            }
            FUN_14712511c(*(longlong *)(lVar9 + lVar23),&local_2a8,uVar12);
            iVar5 = (int)uStack_2a0 + -1;
            if ((int)uStack_2a0 == 0) {
              iVar5 = 0;
            }
            FUN_1400020e8(&local_1f8,local_2a8,iVar5);
            if (local_2a8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            iVar5 = *(int *)(lVar15 + 0x12c0);
          }
          lVar26 = lVar26 + 1;
          lVar23 = lVar23 + 0x280;
        } while (lVar26 < iVar5);
        uVar25 = (ulonglong)DAT_14c760da4;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)uVar25);
    if ((longlong **)local_1f8 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  local_3a8 = 0;
  uStack_3a0 = 0;
  FUN_142b777d0(&local_3a8);
  if ((longlong)(int)uStack_3a0 != 0) {
    lVar23 = (longlong)(int)uStack_3a0 * 0x30 + local_3a8;
    lVar15 = local_3a8;
    do {
      if ((*(char *)(lVar15 + 0x28) == '\x01') &&
         (uVar12 = *(uint *)(local_3e0 + 0x1b8), uVar12 != 0)) {
        uVar14 = 0;
        do {
          if (DAT_14c760da4 != 0) {
            uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            uVar12 = 0;
            if (uVar6 != 0) {
              for (; (uVar6 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
            lVar26 = *(longlong *)(*(longlong *)(local_3e0 + 0x1b0) + (longlong)(int)uVar14 * 0x10);
            do {
              FUN_14317b2e6(*(undefined8 *)
                             (*(longlong *)(lVar26 + 2000 + (ulonglong)uVar12 * 8) + 0x10),
                            *(undefined8 *)(lVar15 + 0x20));
              bVar4 = (byte)uVar12 & 0x1f;
              uVar6 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar6;
              if (uVar6 == 0) {
                uVar12 = 0x20;
              }
              else {
                uVar12 = 0;
                if (uVar6 != 0) {
                  for (; (uVar6 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                  }
                }
              }
            } while (uVar6 != 0);
            uVar12 = *(uint *)(local_3e0 + 0x1b8);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar12);
      }
      lVar15 = lVar15 + 0x30;
    } while (lVar15 != lVar23);
  }
  if (*(int *)(local_3e0 + 0x1b8) != 0) {
    local_3b8 = local_d8;
    local_3d0 = 0;
    do {
      if (DAT_14c760da4 != 0) {
        uVar14 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        uVar12 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
          }
        }
        local_3b0 = *(longlong *)
                     (*(longlong *)(local_3e0 + 0x1b0) + (longlong)(int)local_3d0 * 0x10);
        do {
          lVar15 = *(longlong *)(local_3b0 + 2000 + (ulonglong)uVar12 * 8);
          puVar18 = *(undefined8 **)(*(longlong *)(lVar15 + 0x10) + 8);
          local_388 = (longlong *)0x0;
          pplStack_380 = (longlong **)0x0;
          iVar5 = (**(code **)*puVar18)(puVar18,&DAT_14a354b98);
          if ((-1 < iVar5) &&
             (iVar5 = (**(code **)(*local_388 + 0x28))(local_388,&local_1f8), -1 < iVar5)) {
            pplStack_380 = (longlong **)local_1f8;
          }
          if (local_388 == (longlong *)0x0) {
            puVar18 = *(undefined8 **)(*(longlong *)(lVar15 + 0x10) + 8);
            local_388 = (longlong *)0x0;
            pplStack_380 = (longlong **)0x0;
            iVar5 = (**(code **)*puVar18)(puVar18,&DAT_14a3552a0);
            if ((-1 < iVar5) &&
               (iVar5 = (**(code **)(*local_388 + 0x18))(local_388,&local_1f8), -1 < iVar5)) {
              pplStack_380 = (longlong **)local_1f8;
            }
            if (local_388 != (longlong *)0x0) {
              pwVar11 = L"false";
              if (pplStack_380 != (longlong **)0x0) {
                bVar27 = false;
                local_288 = 0;
                local_280 = 0;
                local_2a8 = (longlong *)0x0;
                uStack_2a0 = 0;
                local_27c = 0xffffffff00000080;
                local_274 = 0;
                local_268 = 0;
                local_260 = 0;
                local_3d4 = uVar12;
                local_3c0 = lVar15;
                FUN_140056680(local_258,L"DRED");
                FUN_140056680(local_248,L"526BDA74-7A81-44C3-B0FD-9DBF80973C25");
                local_398 = (longlong **)0x0;
                pplStack_390 = (longlong **)0x0;
                local_2d8 = 0;
                local_2d0 = 0;
                local_2f8 = 0;
                uStack_2f0 = 0;
                local_2cc = 0xffffffff00000080;
                local_2c4 = 0;
                local_2b8 = (undefined1 *)0x0;
                local_2b0 = 0;
                if (pplStack_380 != (longlong **)0x0) {
                  bVar27 = false;
                  pplVar22 = pplStack_380;
                  local_3cc = uVar14;
                  do {
                    if (pplVar22[7] == (longlong *)0x0) break;
                    iVar5 = (int)*pplVar22[7];
                    if (iVar5 != 0 && iVar5 != *(int *)(pplVar22 + 6)) {
                      iVar19 = 100;
                      if (100 < iVar5) {
                        iVar19 = iVar5;
                      }
                      uVar14 = *(int *)(pplVar22 + 6) - 1;
                      uVar12 = iVar5 + 0x14U;
                      if ((int)uVar14 <= (int)(iVar5 + 0x14U)) {
                        uVar12 = uVar14;
                      }
                      FUN_147389d62();
                      uVar14 = iVar19 - 100U;
                      if ((int)(iVar19 - 100U) <= (int)uVar12) {
                        do {
                          if ((int)uStack_2f0 != local_2c4) {
                            puVar8 = local_2b8;
                            if (local_2b8 == (undefined1 *)0x0) {
                              puVar8 = local_2c0;
                            }
                            uVar6 = *(uint *)(puVar8 + (ulonglong)(local_2b0 - 1U & uVar14) * 4);
                            while (uVar6 != 0xffffffff) {
                              puVar10 = (uint *)(local_2f8 + (longlong)(int)uVar6 * 0x18);
                              if (*puVar10 == uVar14) {
                                if (puVar10 + 2 != (uint *)0x0 && puVar10 != (uint *)0x0) {
                                  FUN_1400b22c2(&local_1f8,&DAT_14a354984);
                                  if (local_398 != (longlong **)0x0) {
                                    FUN_1400020a8();
                                  }
                                  local_398 = (longlong **)local_1f8;
                                  pplStack_390 = uStack_1f0;
                                  pwVar11 = *(wchar_t **)(puVar10 + 2);
                                  sVar7 = wcslen(pwVar11);
                                  FUN_1400020e8(&local_398,pwVar11,sVar7 & 0xffffffff);
                                  FUN_14047a987();
                                  goto LAB_14317c570;
                                }
                                break;
                              }
                              uVar6 = puVar10[4];
                            }
                          }
                          bVar27 = (longlong)pplStack_390 < 0;
                          pplStack_390 = (longlong **)((ulonglong)pplStack_390 & 0xffffffff00000000)
                          ;
                          if (bVar27) {
                            FUN_1446f8c06();
                          }
                          if (local_398 != (longlong **)0x0) {
                            *(undefined2 *)local_398 = 0;
                          }
LAB_14317c570:
                          bVar27 = uVar14 != uVar12;
                          uVar14 = uVar14 + 1;
                        } while (bVar27);
                      }
                      uVar25 = (ulonglong)*(uint *)pplVar22[7];
                      if ((uVar25 != 0) && (*(uint *)pplVar22[7] != *(uint *)(pplVar22 + 6))) {
                        local_a8 = 0;
                        local_a0 = 0;
                        local_c8 = (longlong *)0x0;
                        uStack_c0 = 0;
                        local_9c = 0xffffffff00000080;
                        local_94 = 0;
                        local_88 = (undefined1 *)0x0;
                        local_80 = 0;
                        local_35f = 0;
                        local_348 = 0;
                        uStack_340 = 0;
                        local_358 = 0;
                        uStack_350 = 0;
                        local_370 = (longlong *)0x0;
                        local_368 = 1;
                        FUN_143188d0a(&local_370);
                        *local_370 = (longlong)&local_360;
                        if ((ulonglong)*(uint *)(pplVar22 + 6) != 0) {
                          uVar20 = 0;
                          iVar19 = 0;
                          iVar5 = 0;
                          do {
                            iVar3 = *(int *)((longlong)pplVar22[8] + uVar20 * 4);
                            if (iVar3 == 2) {
                              iVar19 = iVar19 + -1;
                            }
                            else if (iVar3 == 1) {
                              iVar19 = iVar19 + 1;
                            }
                            if (iVar19 < iVar5) {
                              iVar5 = iVar19;
                            }
                            uVar20 = uVar20 + 1;
                          } while (*(uint *)(pplVar22 + 6) != uVar20);
                          iVar19 = -iVar5;
                          if (-iVar5 < 0) {
                            iVar19 = iVar5;
                          }
                          if (iVar5 != 0) {
                            do {
                              lVar15 = local_370[(longlong)(int)local_368 + -1];
                              iVar5 = *(int *)(lVar15 + 0x20);
                              *(uint *)(lVar15 + 0x20) = iVar5 + 1U;
                              if (*(uint *)(lVar15 + 0x24) < iVar5 + 1U) {
                                FUN_143188d94((longlong *)(lVar15 + 0x18),iVar5);
                              }
                              lVar15 = *(longlong *)(lVar15 + 0x18);
                              puVar18 = (undefined8 *)(lVar15 + (longlong)iVar5 * 0x28);
                              puVar18[2] = 0;
                              puVar18[3] = 0;
                              *puVar18 = 0;
                              puVar18[1] = 0;
                              puVar18[4] = 0;
                              FUN_14020fad6(puVar18 + 1,L"Unknown event");
                              uVar12 = local_368;
                              *(undefined2 *)puVar18 = 0x101;
                              lVar23 = (longlong)(int)local_368;
                              local_368 = local_368 + 1;
                              if (local_364 < local_368) {
                                FUN_143188f00(&local_370,uVar12);
                              }
                              local_370[lVar23] = lVar15 + (longlong)iVar5 * 0x28;
                              iVar19 = iVar19 + -1;
                            } while (iVar19 != 0);
                            if (*(int *)(pplVar22 + 6) == 0) goto LAB_14317ca09;
                          }
                          uVar20 = 0;
                          do {
                            if ((int)uStack_c0 != local_94) {
                              puVar8 = local_88;
                              if (local_88 == (undefined1 *)0x0) {
                                puVar8 = local_90;
                              }
                              uVar12 = *(uint *)(puVar8 + (ulonglong)((uint)uVar20 & local_80 - 1U)
                                                          * 4);
                              while (uVar12 != 0xffffffff) {
                                puVar10 = (uint *)(local_c8 + (longlong)(int)uVar12 * 3);
                                if (uVar20 == *puVar10) goto LAB_14317c7cd;
                                uVar12 = puVar10[4];
                              }
                            }
                            puVar10 = (uint *)0x0;
LAB_14317c7cd:
                            uVar12 = *(uint *)((longlong)pplVar22[8] + uVar20 * 4);
                            puVar24 = puVar10 + 2;
                            if (puVar10 == (uint *)0x0) {
                              puVar24 = (uint *)0x0;
                            }
                            if ((ulonglong)uVar12 == 2) {
                              pcVar2 = (char *)local_370[(longlong)(int)local_368 + -1];
                              local_368 = local_368 - 1;
                              FUN_14318905a();
                              if (pcVar2[1] != '\x01') {
                                local_318 = 0;
                                uStack_310 = 0;
                                local_328 = 0;
                                uStack_320 = 0;
                                local_338 = (longlong *)0x0;
                                uStack_330 = 0;
                                local_308 = 0;
                                goto LAB_14317cb1d;
                              }
                              if ((uVar20 < uVar25) && (*pcVar2 == '\x01')) {
                                pcVar2[0] = '\x02';
                                pcVar2[1] = '\x01';
                              }
                            }
                            else if (uVar12 == 1) {
                              lVar15 = local_370[(longlong)(int)local_368 + -1];
                              iVar5 = *(int *)(lVar15 + 0x20);
                              lVar23 = (longlong)iVar5;
                              *(uint *)(lVar15 + 0x20) = iVar5 + 1U;
                              if (*(uint *)(lVar15 + 0x24) < iVar5 + 1U) {
                                FUN_143188d94((longlong *)(lVar15 + 0x18),iVar5);
                              }
                              lVar15 = *(longlong *)(lVar15 + 0x18);
                              puVar18 = (undefined8 *)(lVar15 + 0x10 + lVar23 * 0x28);
                              *puVar18 = 0;
                              puVar18[1] = 0;
                              puVar18 = (undefined8 *)(lVar15 + lVar23 * 0x28);
                              *puVar18 = 0;
                              puVar18[1] = 0;
                              *(undefined8 *)(lVar15 + 0x20 + lVar23 * 0x28) = 0;
                              pwVar11 = L"Unknown event";
                              if (puVar24 != (uint *)0x0) {
                                pwVar11 = *(wchar_t **)puVar24;
                              }
                              lVar26 = lVar15 + lVar23 * 0x28;
                              FUN_14020fad6(lVar15 + lVar23 * 0x28 + 8,pwVar11);
                              uVar12 = local_368;
                              *(bool *)lVar26 = uVar20 < uVar25;
                              *(undefined1 *)(lVar26 + 1) = 1;
                              lVar15 = (longlong)(int)local_368;
                              local_368 = local_368 + 1;
                              if (local_364 < local_368) {
                                FUN_143188f00(&local_370,uVar12);
                              }
                              local_370[lVar15] = lVar26;
                            }
                            else {
                              pwVar11 = L"Unknown Op";
                              if (uVar12 < 0x31) {
                                pwVar11 = (wchar_t *)(&PTR_u_SetMarker_14a354990)[uVar12];
                              }
                              lVar15 = local_370[(longlong)(int)local_368 + -1];
                              iVar5 = *(int *)(lVar15 + 0x20);
                              *(uint *)(lVar15 + 0x20) = iVar5 + 1U;
                              if (*(uint *)(lVar15 + 0x24) < iVar5 + 1U) {
                                FUN_143188d94((longlong *)(lVar15 + 0x18),iVar5);
                              }
                              lVar15 = *(longlong *)(lVar15 + 0x18);
                              pcVar2 = (char *)(lVar15 + (longlong)iVar5 * 0x28);
                              puVar18 = (undefined8 *)(lVar15 + (longlong)iVar5 * 0x28);
                              plVar21 = puVar18 + 1;
                              puVar18[2] = 0;
                              puVar18[3] = 0;
                              *puVar18 = 0;
                              puVar18[1] = 0;
                              puVar18[4] = 0;
                              if (puVar24 == (uint *)0x0) {
                                FUN_14020fad6(plVar21,pwVar11);
                              }
                              else {
                                FUN_140002266(&local_1f8,L"%s [%s]");
                                if (plVar21 != &local_1f8) {
                                  if (*plVar21 != 0) {
                                    FUN_1400020a8();
                                  }
                                  *(wchar_t **)(pcVar2 + 8) = local_1f8;
                                  local_1f8 = (wchar_t *)0x0;
                                  *(int *)(pcVar2 + 0x10) = (int)uStack_1f0;
                                  *(undefined4 *)(pcVar2 + 0x14) = uStack_1f0._4_4_;
                                  uStack_1f0 = (longlong **)0x0;
                                }
                                if ((longlong **)local_1f8 != (longlong **)0x0) {
                                  FUN_1400020a8();
                                }
                              }
                              *pcVar2 = (uVar20 < uVar25) * '\x02';
                              pcVar2[1] = '\x01';
                            }
                            uVar20 = uVar20 + 1;
                          } while (uVar20 < *(uint *)(pplVar22 + 6));
                        }
LAB_14317ca09:
                        local_318 = 0;
                        uStack_310 = 0;
                        local_328 = 0;
                        uStack_320 = 0;
                        local_338 = (longlong *)0x0;
                        uStack_330 = 0;
                        local_308 = 0;
                        if ((longlong)(int)uStack_340 != 0) {
                          local_1f8 = (wchar_t *)0x0;
                          uStack_1f0 = (longlong **)0x0;
                          local_1e8 = (longlong *)0xefcdab8967452301;
                          uStack_1e0 = 0x1032547698badcfe;
                          local_1d8 = 0xc3d2e1f0;
                          local_1d0 = 0;
                          local_160 = 0xefcdab8967452301;
                          uStack_158 = 0x1032547698badcfe;
                          local_150 = 0xc3d2e1f0;
                          local_148 = 0;
                          *local_3b8 = 0;
                          local_3b8[1] = 0;
                          lVar15 = (longlong)(int)uStack_340 * 0x28;
                          lVar23 = local_348;
                          do {
                            local_230 = &local_1f8;
                            FUN_143188caa(&local_230,lVar23);
                            lVar23 = lVar23 + 0x28;
                            lVar15 = lVar15 + -0x28;
                          } while (lVar15 != 0);
                          FUN_1467b334a(&local_1f8,&local_230);
                          local_338 = local_230;
                          uStack_330 = uStack_228;
                          local_230 = (longlong *)0x0;
                          local_318 = CONCAT44(uStack_20c,local_210);
                          uStack_310 = CONCAT44(uStack_204,uStack_208);
                          local_328 = CONCAT44(uStack_21c,local_220);
                          uStack_320 = CONCAT44(uStack_214,uStack_218);
                          local_308 = local_200;
                          FUN_14738a386(&local_1f8);
                        }
LAB_14317cb1d:
                        if (local_370 != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                        FUN_1431891d0(local_348,uStack_340 & 0xffffffff);
                        if (local_348 != 0) {
                          FUN_1400020a8();
                        }
                        if (local_358 != 0) {
                          FUN_1400020a8();
                        }
                        local_80 = 0;
                        if (local_88 != (undefined1 *)0x0) {
                          FUN_1400020a8();
                        }
                        FUN_14738a86a(&local_c8);
                        if (1 < (int)uStack_330) {
                          FUN_140056680(&local_1f8);
                          iVar5 = (int)uStack_1f0 + -1;
                          if ((int)uStack_1f0 == 0) {
                            iVar5 = 0;
                          }
                          if (0 < iVar5) {
                            iVar19 = 0;
                            do {
                              iVar19 = iVar19 + 1;
                            } while (iVar5 != iVar19);
                          }
                          FUN_14738a8f8(&local_2a8);
                          if ((longlong **)local_1f8 != (longlong **)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        if (local_338 != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      bVar27 = true;
                      uVar14 = local_3cc;
                    }
                    pplVar22 = (longlong **)pplVar22[9];
                  } while (pplVar22 != (longlong **)0x0);
                }
                goto LAB_14317c3c6;
              }
              goto LAB_14317c1d0;
            }
            pplVar22 = (longlong **)0x0;
          }
          else {
            pwVar11 = L"false";
            if (pplStack_380 != (longlong **)0x0) {
              bVar27 = false;
              local_288 = 0;
              local_280 = 0;
              local_2a8 = (longlong *)0x0;
              uStack_2a0 = 0;
              local_27c = 0xffffffff00000080;
              local_274 = 0;
              local_268 = 0;
              local_260 = 0;
              local_3d4 = uVar12;
              local_3c0 = lVar15;
              FUN_140056680(local_258,L"DRED");
              FUN_140056680(local_248,L"526BDA74-7A81-44C3-B0FD-9DBF80973C25");
              local_398 = (longlong **)0x0;
              pplStack_390 = (longlong **)0x0;
              local_2d8 = 0;
              local_2d0 = 0;
              local_2f8 = 0;
              uStack_2f0 = 0;
              local_2cc = 0xffffffff00000080;
              local_2c4 = 0;
              local_2b8 = (undefined1 *)0x0;
              local_2b0 = 0;
              if (pplStack_380 != (longlong **)0x0) {
                bVar27 = false;
                pplVar22 = pplStack_380;
                local_3cc = uVar14;
                do {
                  if (pplVar22[7] == (longlong *)0x0) break;
                  iVar5 = (int)*pplVar22[7];
                  if (iVar5 != 0 && iVar5 != *(int *)(pplVar22 + 6)) {
                    iVar19 = 100;
                    if (100 < iVar5) {
                      iVar19 = iVar5;
                    }
                    uVar14 = *(int *)(pplVar22 + 6) - 1;
                    uVar12 = iVar5 + 0x14U;
                    if ((int)uVar14 <= (int)(iVar5 + 0x14U)) {
                      uVar12 = uVar14;
                    }
                    FUN_147389d62(&local_2f8);
                    if ((longlong)*(int *)(pplVar22 + 10) != 0) {
                      plVar21 = pplVar22[0xb];
                      plVar16 = plVar21 + (longlong)*(int *)(pplVar22 + 10) * 2;
                      do {
                        local_230 = (longlong *)CONCAT44(local_230._4_4_,(int)*plVar21);
                        local_1f8 = (wchar_t *)&local_230;
                        uStack_1f0 = (longlong **)(plVar21 + 1);
                        FUN_147389eea(&local_2f8);
                        plVar21 = plVar21 + 2;
                      } while (plVar21 != plVar16);
                    }
                    uVar14 = iVar19 - 100U;
                    if ((int)(iVar19 - 100U) <= (int)uVar12) {
                      do {
                        if ((int)uStack_2f0 != local_2c4) {
                          puVar8 = local_2b8;
                          if (local_2b8 == (undefined1 *)0x0) {
                            puVar8 = local_2c0;
                          }
                          uVar6 = *(uint *)(puVar8 + (ulonglong)(local_2b0 - 1U & uVar14) * 4);
                          while (uVar6 != 0xffffffff) {
                            puVar10 = (uint *)(local_2f8 + (longlong)(int)uVar6 * 0x18);
                            if (*puVar10 == uVar14) {
                              if (puVar10 + 2 != (uint *)0x0 && puVar10 != (uint *)0x0) {
                                FUN_1400b22c2(&local_1f8,&DAT_14a354984);
                                if (local_398 != (longlong **)0x0) {
                                  FUN_1400020a8();
                                }
                                local_398 = (longlong **)local_1f8;
                                pplStack_390 = uStack_1f0;
                                pwVar11 = *(wchar_t **)(puVar10 + 2);
                                sVar7 = wcslen(pwVar11);
                                FUN_1400020e8(&local_398,pwVar11,sVar7 & 0xffffffff);
                                FUN_14047a987(&local_398);
                                goto LAB_14317b9c8;
                              }
                              break;
                            }
                            uVar6 = puVar10[4];
                          }
                        }
                        bVar27 = (longlong)pplStack_390 < 0;
                        pplStack_390 = (longlong **)((ulonglong)pplStack_390 & 0xffffffff00000000);
                        if (bVar27) {
                          FUN_1446f8c06(&local_398);
                        }
                        if (local_398 != (longlong **)0x0) {
                          *(undefined2 *)local_398 = 0;
                        }
LAB_14317b9c8:
                        bVar27 = uVar14 != uVar12;
                        uVar14 = uVar14 + 1;
                      } while (bVar27);
                    }
                    uVar25 = (ulonglong)*(uint *)pplVar22[7];
                    if ((uVar25 != 0) && (*(uint *)pplVar22[7] != *(uint *)(pplVar22 + 6))) {
                      local_a8 = 0;
                      local_a0 = 0;
                      local_c8 = (longlong *)0x0;
                      uStack_c0 = 0;
                      local_9c = 0xffffffff00000080;
                      local_94 = 0;
                      local_88 = (undefined1 *)0x0;
                      local_80 = 0;
                      if ((longlong)*(int *)(pplVar22 + 10) != 0) {
                        pplVar13 = (longlong **)pplVar22[0xb];
                        pplVar17 = pplVar13 + (longlong)*(int *)(pplVar22 + 10) * 2;
                        do {
                          uStack_1f0 = pplVar13 + 1;
                          local_1f8 = (wchar_t *)pplVar13;
                          FUN_14738a3ce(&local_c8);
                          pplVar13 = pplVar13 + 2;
                        } while (pplVar13 != pplVar17);
                      }
                      local_35f = 0;
                      local_348 = 0;
                      uStack_340 = 0;
                      local_358 = 0;
                      uStack_350 = 0;
                      local_370 = (longlong *)0x0;
                      local_368 = 1;
                      FUN_143188792(&local_370);
                      *local_370 = (longlong)&local_360;
                      if ((ulonglong)*(uint *)(pplVar22 + 6) != 0) {
                        uVar20 = 0;
                        iVar19 = 0;
                        iVar5 = 0;
                        do {
                          iVar3 = *(int *)((longlong)pplVar22[8] + uVar20 * 4);
                          if (iVar3 == 2) {
                            iVar19 = iVar19 + -1;
                          }
                          else if (iVar3 == 1) {
                            iVar19 = iVar19 + 1;
                          }
                          if (iVar19 < iVar5) {
                            iVar5 = iVar19;
                          }
                          uVar20 = uVar20 + 1;
                        } while (*(uint *)(pplVar22 + 6) != uVar20);
                        iVar19 = -iVar5;
                        if (-iVar5 < 0) {
                          iVar19 = iVar5;
                        }
                        if (iVar5 != 0) {
                          do {
                            lVar15 = local_370[(longlong)(int)local_368 + -1];
                            iVar5 = *(int *)(lVar15 + 0x20);
                            *(uint *)(lVar15 + 0x20) = iVar5 + 1U;
                            if (*(uint *)(lVar15 + 0x24) < iVar5 + 1U) {
                              FUN_14318881c((longlong *)(lVar15 + 0x18),iVar5);
                            }
                            lVar15 = *(longlong *)(lVar15 + 0x18);
                            puVar18 = (undefined8 *)((longlong)iVar5 * 0x28 + 8 + lVar15);
                            puVar18[1] = 0;
                            puVar18[2] = 0;
                            puVar18[-1] = 0;
                            *puVar18 = 0;
                            puVar18[3] = 0;
                            FUN_14020fad6(puVar18,L"Unknown event");
                            uVar12 = local_368;
                            *(undefined2 *)(puVar18 + -1) = 0x101;
                            lVar23 = (longlong)(int)local_368;
                            local_368 = local_368 + 1;
                            if (local_364 < local_368) {
                              FUN_143188988(&local_370,uVar12);
                            }
                            local_370[lVar23] = (longlong)iVar5 * 0x28 + lVar15;
                            iVar19 = iVar19 + -1;
                          } while (iVar19 != 0);
                          if (*(int *)(pplVar22 + 6) == 0) goto LAB_14317bec4;
                        }
                        uVar20 = 0;
                        do {
                          if ((int)uStack_c0 != local_94) {
                            puVar8 = local_88;
                            if (local_88 == (undefined1 *)0x0) {
                              puVar8 = local_90;
                            }
                            uVar12 = *(uint *)(puVar8 + (ulonglong)((uint)uVar20 & local_80 - 1U) *
                                                        4);
                            while (uVar12 != 0xffffffff) {
                              puVar10 = (uint *)(local_c8 + (longlong)(int)uVar12 * 3);
                              if (uVar20 == *puVar10) goto LAB_14317bc85;
                              uVar12 = puVar10[4];
                            }
                          }
                          puVar10 = (uint *)0x0;
LAB_14317bc85:
                          uVar12 = *(uint *)((longlong)pplVar22[8] + uVar20 * 4);
                          puVar24 = puVar10 + 2;
                          if (puVar10 == (uint *)0x0) {
                            puVar24 = (uint *)0x0;
                          }
                          if ((ulonglong)uVar12 == 2) {
                            pcVar2 = (char *)local_370[(longlong)(int)local_368 + -1];
                            local_368 = local_368 - 1;
                            FUN_143188ae2();
                            if (pcVar2[1] != '\x01') {
                              local_318 = 0;
                              uStack_310 = 0;
                              local_328 = 0;
                              uStack_320 = 0;
                              local_338 = (longlong *)0x0;
                              uStack_330 = 0;
                              local_308 = 0;
                              goto LAB_14317bfd8;
                            }
                            if ((uVar20 < uVar25) && (*pcVar2 == '\x01')) {
                              pcVar2[0] = '\x02';
                              pcVar2[1] = '\x01';
                            }
                          }
                          else if (uVar12 == 1) {
                            lVar15 = local_370[(longlong)(int)local_368 + -1];
                            iVar5 = *(int *)(lVar15 + 0x20);
                            lVar23 = (longlong)iVar5;
                            *(uint *)(lVar15 + 0x20) = iVar5 + 1U;
                            if (*(uint *)(lVar15 + 0x24) < iVar5 + 1U) {
                              FUN_14318881c((longlong *)(lVar15 + 0x18),iVar5);
                            }
                            lVar15 = *(longlong *)(lVar15 + 0x18);
                            puVar18 = (undefined8 *)(lVar15 + 0x10 + lVar23 * 0x28);
                            *puVar18 = 0;
                            puVar18[1] = 0;
                            puVar18 = (undefined8 *)(lVar15 + lVar23 * 0x28);
                            *puVar18 = 0;
                            puVar18[1] = 0;
                            *(undefined8 *)(lVar15 + 0x20 + lVar23 * 0x28) = 0;
                            pwVar11 = L"Unknown event";
                            if (puVar24 != (uint *)0x0) {
                              pwVar11 = *(wchar_t **)puVar24;
                            }
                            lVar26 = lVar15 + lVar23 * 0x28;
                            FUN_14020fad6(lVar15 + lVar23 * 0x28 + 8,pwVar11);
                            uVar12 = local_368;
                            *(bool *)lVar26 = uVar20 < uVar25;
                            *(undefined1 *)(lVar26 + 1) = 1;
                            lVar15 = (longlong)(int)local_368;
                            local_368 = local_368 + 1;
                            if (local_364 < local_368) {
                              FUN_143188988(&local_370,uVar12);
                            }
                            local_370[lVar15] = lVar26;
                          }
                          else {
                            pwVar11 = L"Unknown Op";
                            if (uVar12 < 0x31) {
                              pwVar11 = (wchar_t *)(&PTR_u_SetMarker_14a354990)[uVar12];
                            }
                            lVar15 = local_370[(longlong)(int)local_368 + -1];
                            iVar5 = *(int *)(lVar15 + 0x20);
                            *(uint *)(lVar15 + 0x20) = iVar5 + 1U;
                            if (*(uint *)(lVar15 + 0x24) < iVar5 + 1U) {
                              FUN_14318881c((longlong *)(lVar15 + 0x18),iVar5);
                            }
                            lVar15 = *(longlong *)(lVar15 + 0x18);
                            pcVar2 = (char *)(lVar15 + (longlong)iVar5 * 0x28);
                            puVar18 = (undefined8 *)(lVar15 + (longlong)iVar5 * 0x28);
                            plVar21 = puVar18 + 1;
                            puVar18[2] = 0;
                            puVar18[3] = 0;
                            *puVar18 = 0;
                            puVar18[1] = 0;
                            puVar18[4] = 0;
                            if (puVar24 == (uint *)0x0) {
                              FUN_14020fad6(plVar21,pwVar11);
                            }
                            else {
                              FUN_140002266(&local_1f8,L"%s [%s]");
                              if (plVar21 != &local_1f8) {
                                if (*plVar21 != 0) {
                                  FUN_1400020a8();
                                }
                                *(wchar_t **)(pcVar2 + 8) = local_1f8;
                                local_1f8 = (wchar_t *)0x0;
                                *(int *)(pcVar2 + 0x10) = (int)uStack_1f0;
                                *(undefined4 *)(pcVar2 + 0x14) = uStack_1f0._4_4_;
                                uStack_1f0 = (longlong **)0x0;
                              }
                              if ((longlong **)local_1f8 != (longlong **)0x0) {
                                FUN_1400020a8();
                              }
                            }
                            *pcVar2 = (uVar20 < uVar25) * '\x02';
                            pcVar2[1] = '\x01';
                          }
                          uVar20 = uVar20 + 1;
                        } while (uVar20 < *(uint *)(pplVar22 + 6));
                      }
LAB_14317bec4:
                      local_318 = 0;
                      uStack_310 = 0;
                      local_328 = 0;
                      uStack_320 = 0;
                      local_338 = (longlong *)0x0;
                      uStack_330 = 0;
                      local_308 = 0;
                      if ((longlong)(int)uStack_340 != 0) {
                        local_1f8 = (wchar_t *)0x0;
                        uStack_1f0 = (longlong **)0x0;
                        local_1e8 = (longlong *)0xefcdab8967452301;
                        uStack_1e0 = 0x1032547698badcfe;
                        local_1d8 = 0xc3d2e1f0;
                        local_1d0 = 0;
                        local_160 = 0xefcdab8967452301;
                        uStack_158 = 0x1032547698badcfe;
                        local_150 = 0xc3d2e1f0;
                        local_148 = 0;
                        *local_3b8 = 0;
                        local_3b8[1] = 0;
                        lVar15 = (longlong)(int)uStack_340 * 0x28;
                        lVar23 = local_348;
                        do {
                          local_230 = &local_1f8;
                          FUN_143188732(&local_230,lVar23);
                          lVar23 = lVar23 + 0x28;
                          lVar15 = lVar15 + -0x28;
                        } while (lVar15 != 0);
                        FUN_1467b334a(&local_1f8,&local_230);
                        local_338 = local_230;
                        uStack_330 = uStack_228;
                        local_230 = (longlong *)0x0;
                        local_318 = CONCAT44(uStack_20c,local_210);
                        uStack_310 = CONCAT44(uStack_204,uStack_208);
                        local_328 = CONCAT44(uStack_21c,local_220);
                        uStack_320 = CONCAT44(uStack_214,uStack_218);
                        local_308 = local_200;
                        FUN_14738a386(&local_1f8);
                      }
LAB_14317bfd8:
                      if (local_370 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      FUN_143188c58(local_348,uStack_340 & 0xffffffff);
                      if (local_348 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_358 != 0) {
                        FUN_1400020a8();
                      }
                      local_80 = 0;
                      if (local_88 != (undefined1 *)0x0) {
                        FUN_1400020a8();
                      }
                      FUN_14738a86a(&local_c8);
                      if (1 < (int)uStack_330) {
                        FUN_140056680(&local_1f8);
                        iVar5 = (int)uStack_1f0 + -1;
                        if ((int)uStack_1f0 == 0) {
                          iVar5 = 0;
                        }
                        if (0 < iVar5) {
                          iVar19 = 0;
                          do {
                            iVar19 = iVar19 + 1;
                          } while (iVar5 != iVar19);
                        }
                        FUN_14738a8f8(&local_2a8);
                        if ((longlong **)local_1f8 != (longlong **)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      if (local_338 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    bVar27 = true;
                    uVar14 = local_3cc;
                  }
                  pplVar22 = (longlong **)pplVar22[9];
                } while (pplVar22 != (longlong **)0x0);
              }
LAB_14317c3c6:
              if ((int)uStack_2a0 != local_274) {
                FUN_1467b3438(&local_2a8);
              }
              uVar12 = local_3d4;
              local_2b0 = 0;
              if (local_2b8 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              FUN_14738aad8(&local_2f8);
              if (local_398 != (longlong **)0x0) {
                FUN_1400020a8();
              }
              FUN_1467b3520(&local_2a8);
              pwVar11 = L"false";
              lVar15 = local_3c0;
              if (bVar27) {
                pwVar11 = L"true";
              }
            }
LAB_14317c1d0:
            FUN_140056680(&local_1f8,pwVar11);
            FUN_140056680(&local_2a8,L"RHI.DREDHasBreadcrumbData");
            FUN_14152eab6(&local_2a8,&local_1f8);
            if (local_2a8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if ((longlong **)local_1f8 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            iVar5 = (**(code **)(*local_388 + 0x20))(local_388,&local_1f8);
            pwVar11 = L"false";
            if ((longlong **)local_1f8 != (longlong **)0x0) {
              pwVar11 = L"true";
            }
            pplVar22 = (longlong **)local_1f8;
            if (iVar5 < 0) {
              pplVar22 = (longlong **)0x0;
              pwVar11 = L"false";
            }
            FUN_140056680(&local_2a8,pwVar11);
            FUN_140056680(&local_c8,L"RHI.DREDHasPageFaultData");
            FUN_14152eab6(&local_c8,&local_2a8);
            if (local_c8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_2a8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_388 != (longlong *)0x0) {
              (**(code **)(*local_388 + 0x10))();
            }
          }
          FUN_14317b2e6(*(undefined8 *)(lVar15 + 0x10),pplVar22);
          bVar4 = (byte)uVar12 & 0x1f;
          uVar14 = uVar14 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          if (uVar14 == 0) {
            uVar12 = 0x20;
          }
          else {
            uVar12 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
              }
            }
          }
        } while (uVar14 != 0);
      }
      local_3d0 = local_3d0 + 1;
    } while (local_3d0 < *(uint *)(local_3e0 + 0x1b8));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  FUN_146816410(&DAT_14c872ee0);
  local_1f8 = L"GPU Crashed";
  uStack_1f0._0_4_ = 0xb;
  FUN_1446e940c(&local_c8,&local_1f8);
  local_1f8 = L"Developer.MessageLog";
  uStack_1f0._0_4_ = 0x14;
  FUN_1446e940c(&local_2f8,&local_1f8);
  local_1f8 = L"GPU Crashed or D3D Device Removed.\n";
  uStack_1f0 = (longlong **)CONCAT44(uStack_1f0._4_4_,0x23);
  FUN_140208c1e(&local_2a8,&local_2f8,&local_c8,&local_1f8);
  FUN_14615b4b0(local_3c8,&local_2a8);
  if (local_2a8 != (longlong *)0x0) {
    (**(code **)(*local_2a8 + 0x10))();
  }
  local_1f8 = L"GPU Crash Debugging enabled";
  uStack_1f0._0_4_ = 0x1b;
  FUN_1446e940c(&local_c8,&local_1f8);
  local_1f8 = L"Developer.MessageLog";
  uStack_1f0._0_4_ = 0x14;
  FUN_1446e940c(&local_2f8,&local_1f8);
  local_1f8 = L"Check log for GPU state information.";
  uStack_1f0 = (longlong **)CONCAT44(uStack_1f0._4_4_,0x24);
  FUN_140208c1e(&local_2a8,&local_2f8,&local_c8,&local_1f8);
  FUN_14615b4b0(local_3c8,&local_2a8);
  if (local_2a8 != (longlong *)0x0) {
    (**(code **)(*local_2a8 + 0x10))();
  }
  uVar25 = 0;
  if ((longlong)(int)uStack_3a0 != 0) {
    lVar15 = (longlong)(int)uStack_3a0 * 0x30;
    lVar23 = local_3a8 + 0x10;
    do {
      if (*(int *)(lVar23 + 0xc) != -1) {
        local_2a8 = (longlong *)0x0;
        uStack_2a0 = 0;
        FUN_140009b9a(&local_c8,lVar23);
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,4);
        FUN_14023423e(&local_1e8,&local_c8);
        uVar25 = uStack_2a0;
        lVar26 = (longlong)(int)uStack_2a0;
        uVar12 = (int)uStack_2a0 + 1;
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar12);
        if (uStack_2a0._4_4_ < uVar12) {
          FUN_140188694(&local_2a8,uVar25 & 0xffffffff);
        }
        plVar21 = local_2a8 + lVar26 * 4;
        *(undefined4 *)plVar21 = (undefined4)local_1f8;
        *(undefined4 *)((longlong)plVar21 + 4) = local_1f8._4_4_;
        *(int *)(plVar21 + 1) = (int)uStack_1f0;
        *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_1f0._4_4_;
        if (local_1e8 == (longlong *)0x0) {
          local_2a8[lVar26 * 4 + 2] = 0;
          *(undefined4 *)(local_2a8 + lVar26 * 4 + 3) = 0;
        }
        else {
          FUN_14023423e(local_2a8 + lVar26 * 4 + 2,&local_1e8);
        }
        if (local_1e8 != (longlong *)0x0) {
          (**(code **)(*local_1e8 + 0x10))();
          local_1e8 = (longlong *)0x0;
          uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
        }
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))();
        }
        local_1f8 = L"GPU CrashDump";
        uStack_1f0._0_4_ = 0xd;
        FUN_1446e940c(&local_2f8,&local_1f8);
        local_1f8 = L"Developer.MessageLog";
        uStack_1f0._0_4_ = 0x14;
        FUN_1446e940c(&local_230,&local_1f8);
        local_1f8 = L"\nA GPU mini dump has been written to \"{0}\".";
        uStack_1f0 = (longlong **)CONCAT44(uStack_1f0._4_4_,0x2b);
        FUN_140208c1e(&local_c8,&local_230,&local_2f8,&local_1f8);
        FUN_14023409e(&local_1f8,&local_c8,1);
        FUN_1467d244e(local_3c8,&local_1f8,&local_2a8);
        plVar21 = (longlong *)uStack_1f0;
        if (uStack_1f0 != (longlong **)0x0) {
          LOCK();
          plVar16 = (longlong *)(uStack_1f0 + 1);
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (*(code *)**uStack_1f0)(uStack_1f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))();
        }
        FUN_14007f2db(local_2a8,uStack_2a0 & 0xffffffff);
        if (local_2a8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar23 = lVar23 + 0x30;
      lVar15 = lVar15 + -0x30;
    } while (lVar15 != 0);
    uVar25 = uStack_3a0 & 0xffffffff;
  }
  FUN_145e08fc8(local_3a8,uVar25);
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14317d116 FUN_14317d116 body=243 status=ok
// SIG undefined FUN_14317d116(void)

longlong * FUN_14317d116(longlong *param_1,int param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case -0x7785ffff:
    pwVar1 = L"DXGI_ERROR_INVALID_CALL";
    break;
  case -0x7785fffe:
  case -0x7785fffd:
  case -0x7785fffc:
switchD_14317d151_caseD_887a0002:
    FUN_140002266(&local_28,L"%08X");
    if (&local_28 == param_1) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_28;
      *(undefined4 *)(param_1 + 1) = local_20;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  case -0x7785fffb:
    pwVar1 = L"DXGI_ERROR_DEVICE_REMOVED";
    break;
  case -0x7785fffa:
    pwVar1 = L"DXGI_ERROR_DEVICE_HUNG";
    break;
  case -0x7785fff9:
    pwVar1 = L"DXGI_ERROR_DEVICE_RESET";
    break;
  default:
    if (param_2 != -0x7785ffe0) goto switchD_14317d151_caseD_887a0002;
    pwVar1 = L"DXGI_ERROR_DRIVER_INTERNAL_ERROR";
  }
  FUN_14020fad6(param_1,pwVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14317d20a FUN_14317d20a body=69 status=ok
// SIG undefined FUN_14317d20a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317d20a(void)

{
  _DAT_14ca77448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317d24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77450,1);
  return;
}



// FUNCTION 14317d250 FUN_14317d250 body=415 status=ok
// SIG undefined FUN_14317d250(void)

void FUN_14317d250(void)

{
  float fVar1;
  int iVar2;
  double dVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_14317b314();
  QueryPerformanceCounter(&local_58);
  lVar4 = DAT_14ca77458;
  dVar3 = (double)local_58.QuadPart * DAT_14c83f420;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar7 = 0;
  }
  else if (iVar2 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  fVar1 = *(float *)(lVar4 + uVar7 * 4);
  if ((DAT_14ca778e9 & 1) != 0) {
    do {
      QueryPerformanceCounter(&local_58);
      if ((double)fVar1 <=
          ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar3 + 16777216.0)) break;
      FUN_14000f986(0);
    } while ((DAT_14ca778e9 & 1) != 0);
  }
  IsDebuggerPresent();
  FUN_14682e305(L"GPU Crash dump Triggered",0);
  FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
  FUN_1401b9920(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14317d3fe FUN_14317d3fe body=1457 status=ok
// SIG undefined FUN_14317d3fe(void)

void FUN_14317d3fe(longlong param_1,int param_2,longlong param_3,char param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  DWORD *pDVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == -0x7ff8fff2) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77460);
    iVar9 = *(int *)(param_1 + 0x1b8);
    if (iVar9 != 0) {
      uVar16 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uVar4 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      iVar17 = 0;
      lVar19 = 0;
      do {
        if (DAT_14c760da4 != 0) {
          uVar13 = (ulonglong)uVar4;
          uVar15 = uVar16;
          do {
            lVar1 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar17 * 0x10) +
                        2000 + uVar13 * 8) + 0x10);
            lVar2 = *(longlong *)(lVar1 + 8);
            lVar18 = lVar2;
            if (((param_3 == 0) || (lVar18 = param_3, lVar2 == param_3)) && (lVar18 == param_3)) {
              lVar19 = lVar1;
            }
            bVar6 = (byte)uVar13 & 0x1f;
            uVar15 = uVar15 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            if (uVar15 == 0) {
              uVar13 = 0x20;
            }
            else {
              uVar5 = 0;
              if (uVar15 != 0) {
                for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
                }
              }
              uVar13 = (ulonglong)uVar5;
            }
          } while (uVar15 != 0);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar9);
      if ((iVar9 == 1) && (lVar19 == 0)) {
        lVar19 = **(longlong **)(param_1 + 0x1b0);
      }
      if (lVar19 != 0) {
        uVar10 = FUN_14680e92a();
        FUN_147366318(uVar10,*(undefined8 *)(lVar19 + 0x748),*(undefined8 *)(lVar19 + 0x758));
      }
    }
    cVar7 = FUN_140b3f358();
    if (cVar7 == '\0') {
      if (param_4 == '\0') {
        local_58 = L"OutOfMemory";
        local_50 = 0xb;
        FUN_1446e940c(local_6c,&local_58);
        local_58 = L"D3D12RHI";
        local_50 = 8;
        FUN_1446e940c(local_70,&local_58);
        local_58 = 
        L"Out of video memory trying to allocate a rendering resource. Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
        ;
        local_50 = 0xd2;
      }
      else {
        local_58 = L"OutOfVideoMemoryTextures";
        local_50 = 0x18;
        FUN_1446e940c(local_6c,&local_58);
        local_58 = L"Developer.MessageLog";
        local_50 = 0x14;
        FUN_1446e940c(local_70,&local_58);
        local_58 = 
        L"Out of video memory trying to allocate a texture! Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
        ;
        local_50 = 199;
      }
      FUN_140208c1e(local_68,local_70,local_6c,&local_58);
      plVar11 = local_68[0];
      if (*(code **)(*local_68[0] + 0x50) != FUN_144828418) {
        plVar11 = (longlong *)(**(code **)(*local_68[0] + 0x50))();
      }
      FUN_1447a1fc0(plVar11);
      pcVar3 = *(code **)(*local_68[0] + 0x28);
      if (pcVar3 == FUN_14482841c) {
        plVar11 = local_68[0] + 3;
        if (local_68[0][5] != 0) {
          plVar11 = (longlong *)(local_68[0][5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar11 = local_68[0] + 2;
      }
      else {
        plVar11 = (longlong *)(*pcVar3)(local_68[0]);
      }
      if ((int)plVar11[1] == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      else {
        puVar14 = (undefined2 *)*plVar11;
      }
      FUN_14682f732(0,puVar14,L"Error");
      if (local_68[0] != (longlong *)0x0) {
        (**(code **)(*local_68[0] + 0x10))();
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca77440) && (FUN_144b3d300(&DAT_14ca77440), DAT_14ca77440 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca77438 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GPUCrashOnOutOfMemory",1);
      _Init_thread_footer(&DAT_14ca77440);
    }
    if (DAT_14ca77438 == (longlong *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      FUN_145bf78ac(&DAT_14c872ee0);
      FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Util.cpp",0x305,
                    L"Out of video memory trying to allocate a rendering resource");
    }
    else {
      iVar9 = (**(code **)(*DAT_14ca77438 + 0xb0))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      FUN_145bf78ac(&DAT_14c872ee0);
      FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Util.cpp",0x305,
                    L"Out of video memory trying to allocate a rendering resource");
      if (iVar9 != 0) goto LAB_14317d7f1;
    }
    FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
  }
  else if (param_2 + 0x7785fffbU < 3) {
    DVar8 = GetCurrentThreadId();
    if (*(longlong *)(param_1 + 0x28) == 0) {
      pDVar12 = (DWORD *)(param_1 + 0x30);
    }
    else {
      pDVar12 = (DWORD *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x34);
    }
    if (DVar8 == *pDVar12) {
      TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77460);
      FUN_14317d250(param_1);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77460);
      FUN_147381bc4(param_1);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77460);
  }
LAB_14317d7f1:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  FUN_146816410(&DAT_14c872ee0);
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Util.cpp",0x3ef,&DAT_149e0625e,param_5);
  uVar13 = local_48 ^ (ulonglong)auStack_98;
  if (uVar13 != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar13,(DAT_14c868880 != '\0') * '\x03');
  }
  FUN_142797bc0(CONCAT71((int7)(uVar13 >> 8),1));
  return;
}



// FUNCTION 14317d9b0 FUN_14317d9b0 body=809 status=ok
// SIG undefined FUN_14317d9b0(void)

longlong * FUN_14317d9b0(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (-0x7785ffdf < param_2) {
    if (param_2 < -0x7783ffff) {
      switch(param_2) {
      case -0x7785ffde:
        pwVar3 = L"DXGI_ERROR_NOT_CURRENTLY_AVAILABLE";
        break;
      default:
        goto switchD_14317da07_caseD_887a0023;
      case -0x7785ffdc:
        pwVar3 = L"DXGI_ERROR_REMOTE_OUTOFMEMORY";
        break;
      case -0x7785ffdb:
        pwVar3 = L"DXGI_ERROR_MODE_CHANGE_IN_PROGRESS";
        break;
      case -0x7785ffda:
        pwVar3 = L"DXGI_ERROR_ACCESS_LOST";
        break;
      case -0x7785ffd9:
        pwVar3 = L"DXGI_ERROR_WAIT_TIMEOUT";
        break;
      case -0x7785ffd8:
        pwVar3 = L"DXGI_ERROR_SESSION_DISCONNECTED";
        break;
      case -0x7785ffd5:
        pwVar3 = L"DXGI_ERROR_ACCESS_DENIED";
        break;
      case -0x7785ffd2:
        pwVar3 = L"DXGI_ERROR_NOT_CURRENT";
        break;
      case -0x7785ffcf:
        pwVar3 = L"DXGI_ERROR_DYNAMIC_CODE_POLICY_VIOLATION";
        break;
      case -0x7785ffce:
        pwVar3 = L"DXGI_ERROR_NON_COMPOSITED_UI";
        break;
      case -0x7785ffcd:
        pwVar3 = L"DXGI_ERROR_CACHE_CORRUPT";
        break;
      case -0x7785ffcc:
        pwVar3 = L"DXGI_ERROR_CACHE_FULL";
        break;
      case -0x7785ffca:
        pwVar3 = L"DXGI_ERROR_ALREADY_EXISTS";
      }
      goto LAB_14317dbf1;
    }
    if (param_2 == -0x7783ffff) {
      pwVar3 = L"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS";
      goto LAB_14317dbf1;
    }
    if (param_2 == -0x7783fffe) {
      pwVar3 = L"D3D11_ERROR_FILE_NOT_FOUND";
      goto LAB_14317dbf1;
    }
    if (param_2 == 0) {
      pwVar3 = L"S_OK";
      goto LAB_14317dbf1;
    }
    goto switchD_14317da07_caseD_887a0023;
  }
  if (param_2 < -0x7ff8ffa9) {
    if (param_2 == -0x7fffbffe) {
      pwVar3 = L"E_NOINTERFACE";
      goto LAB_14317dbf1;
    }
    if (param_2 == -0x7fffbffb) {
      pwVar3 = L"E_FAIL";
      goto LAB_14317dbf1;
    }
    if (param_2 == -0x7ff8fff2) {
      pwVar3 = L"E_OUTOFMEMORY";
      goto LAB_14317dbf1;
    }
    goto switchD_14317da07_caseD_887a0023;
  }
  switch(param_2) {
  case -0x7785ffff:
    pwVar3 = L"DXGI_ERROR_INVALID_CALL";
    break;
  case -0x7785fffd:
    pwVar3 = L"DXGI_ERROR_MORE_DATA";
    break;
  case -0x7785fffc:
    pwVar3 = L"DXGI_ERROR_UNSUPPORTED";
    break;
  case -0x7785fffb:
    FUN_14020fad6(param_1,L"DXGI_ERROR_DEVICE_REMOVED");
    goto LAB_14317dc22;
  case -0x7785fff6:
    pwVar3 = L"DXGI_ERROR_WAS_STILL_DRAWING";
    break;
  case -0x7785fff5:
    pwVar3 = L"DXGI_ERROR_FRAME_STATISTICS_DISJOINT";
    break;
  default:
    if (param_2 == -0x7ff8ffa9) {
      pwVar3 = L"E_INVALIDARG";
      break;
    }
  case -0x7785fffe:
  case -0x7785fffa:
  case -0x7785fff9:
  case -0x7785fff8:
  case -0x7785fff7:
switchD_14317da07_caseD_887a0023:
    FUN_140002266(&local_38,L"%08X",param_2);
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      *(int *)(param_1 + 1) = local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
    }
LAB_14317dc22:
    if (param_3 != (longlong *)0x0 && param_2 == -0x7785fffb) {
      uVar2 = (**(code **)(*param_3 + 0x128))(param_3);
      FUN_14317d116(local_48,uVar2);
      FUN_140056680(local_58,L" with Reason: ");
      FUN_1401c7f3e(&local_38,local_58,local_48);
      iVar1 = local_30 + -1;
      if (local_30 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_1,local_38,iVar1);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
    if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
LAB_14317dbf1:
  FUN_14020fad6(param_1,pwVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 14317dcda FUN_14317dcda body=348 status=ok
// SIG undefined FUN_14317dcda(void)

void FUN_14317dcda(int param_1,longlong param_2,char *param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (ulonglong)*(byte *)(param_2 + 1);
  if (param_1 < 2) {
    if (uVar4 == 0) {
      cVar2 = '\0';
    }
    else {
      uVar4 = (uVar4 * 2 + 0x1fffffffe & 0x1fffffffe) + 1;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar5 = 1 << ((byte)lVar1 & 0x1f);
      uVar6 = 0x20;
      if (uVar5 < 0x20) {
        uVar6 = uVar5;
      }
      cVar2 = (char)uVar6;
    }
    *param_3 = cVar2;
    if ((ulonglong)*(byte *)(param_2 + 2) == 0) {
      cVar2 = '\0';
    }
    else {
      uVar4 = ((ulonglong)*(byte *)(param_2 + 2) * 2 + 0x1fffffffe & 0x1fffffffe) + 1;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar5 = 1 << ((byte)lVar1 & 0x1f);
      uVar6 = 0x40;
      if (uVar5 < 0x40) {
        uVar6 = uVar5;
      }
      cVar2 = (char)uVar6;
    }
    param_3[2] = cVar2;
  }
  else {
    *param_3 = (uVar4 != 0) << 5;
    param_3[2] = (*(char *)(param_2 + 2) != '\0') << 6;
    if (param_1 != 2) {
      bVar3 = 0x10;
      if (*(byte *)(param_2 + 3) < 0x10) {
        bVar3 = *(byte *)(param_2 + 3);
      }
      param_3[1] = bVar3;
      cVar2 = param_4 << 4;
      if (*(char *)(param_2 + 4) == '\0') {
        cVar2 = '\0';
      }
      goto LAB_14317dd25;
    }
  }
  bVar3 = *(byte *)(param_2 + 3);
  if (0x10 < (ulonglong)bVar3) {
    uVar4 = ((ulonglong)bVar3 * 2 + 0x1fffffffe & 0x1fffffffe) + 1;
    lVar1 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar1 & 0x1f);
    bVar3 = 0x10;
    if (uVar6 < 0x10) {
      bVar3 = (byte)uVar6;
    }
  }
  param_3[1] = bVar3;
  if (param_4 == '\x01' && (ulonglong)*(byte *)(param_2 + 4) != 0) {
    uVar4 = ((ulonglong)*(byte *)(param_2 + 4) * 2 + 0x1fffffffe & 0x1fffffffe) + 1;
    lVar1 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar5 = 1 << ((byte)lVar1 & 0x1f);
    uVar6 = 0x10;
    if (uVar5 < 0x10) {
      uVar6 = uVar5;
    }
    cVar2 = (char)uVar6;
  }
  else {
    cVar2 = '\0';
  }
LAB_14317dd25:
  param_3[3] = cVar2;
  return;
}



// FUNCTION 14317de36 FUN_14317de36 body=178 status=ok
// SIG undefined FUN_14317de36(void)

void FUN_14317de36(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0xec);
    bVar2 = ((bVar1 & 4) != 0 || (*(byte *)(param_2 + 0x10) & 0x40) != 0) << 2;
    *(byte *)(param_1 + 0xec) = bVar1 & 0xfb | bVar2;
    bVar3 = ((bVar1 & 8) != 0 || (*(byte *)(param_2 + 0x10) & 2) != 0) << 3;
    *(byte *)(param_1 + 0xec) = bVar1 & 0xf3 | bVar2 | bVar3;
    bVar4 = ((bVar1 & 0x10) != 0 || (*(byte *)(param_2 + 0x10) & 4) != 0) << 4;
    *(byte *)(param_1 + 0xec) = bVar1 & 0xe3 | bVar2 | bVar3 | bVar4;
    if (DAT_14ca84f5e == '\x01') {
      *(byte *)(param_1 + 0xec) =
           bVar1 & 0xc3 | bVar2 | bVar3 | bVar4 |
           ((bVar1 & 0x20) != 0 || (*(byte *)(param_2 + 0x10) & 8) != 0) << 5;
    }
  }
  return;
}



// FUNCTION 14317deee FUN_14317deee body=316 status=ok
// SIG undefined FUN_14317deee(void)

void FUN_14317deee(uint *param_1,uint *param_2)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  uVar4 = *param_2;
  uVar3 = (ulonglong)uVar4;
  if (uVar3 < 0x30) {
    if ((0x580000UL >> (uVar3 & 0x3f) & 1) == 0) {
      if ((0xb00000000000U >> (uVar3 & 0x3f) & 1) == 0) goto LAB_14317df20;
      bVar2 = uVar4 == 0x2f;
    }
    else {
      bVar2 = uVar4 == 0x16;
    }
LAB_14317df2d:
    bVar5 = bVar2;
    if (uVar4 == 0x14) {
LAB_14317df32:
      uVar4 = 0x13;
    }
    else if ((int)uVar4 < 0x2f) {
      if (uVar4 == 0x16) goto LAB_14317df32;
      if (uVar4 == 0x28) {
        uVar4 = 0x27;
      }
      else if (uVar4 == 0x2d) goto LAB_14317e015;
    }
    else if (uVar4 == 0x37) {
      uVar4 = 0x35;
    }
    else if (uVar4 == 0x2f) {
LAB_14317e015:
      uVar4 = 0x2c;
    }
  }
  else {
LAB_14317df20:
    bVar5 = false;
    bVar2 = false;
    if (1 < uVar4 - 0x67) goto LAB_14317df2d;
  }
  *(ushort *)(param_1 + 1) =
       ((ushort)(uVar4 == 0x13 || uVar4 == 0x2c) - (ushort)bVar5) * 0x100 + (ushort)bVar5 + 0x100;
  if (param_2[1] == 3) {
    *(ushort *)((longlong)param_1 + 6) = (byte)param_2[3] | 0x100;
LAB_14317df77:
    *param_1 = 0x10000;
    return;
  }
  switch(param_2[1]) {
  case 0:
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  default:
    goto switchD_14317dfb6_caseD_1;
  case 4:
    *(ushort *)((longlong)param_1 + 6) = (byte)param_2[3] | 0x100;
    uVar1 = (ushort)param_2[4];
    uVar4 = param_2[5];
    break;
  case 5:
    *(undefined2 *)((longlong)param_1 + 6) = 0x100;
    goto LAB_14317df77;
  case 6:
    *(undefined2 *)((longlong)param_1 + 6) = 0x100;
    uVar1 = (ushort)param_2[3];
    uVar4 = param_2[4];
  }
  *param_1 = uVar4 << 0x10 | (uint)uVar1;
switchD_14317dfb6_caseD_1:
  return;
}



// FUNCTION 14317e02a FUN_14317e02a body=54 status=ok
// SIG undefined FUN_14317e02a(void)

void FUN_14317e02a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8);
  (**(code **)(*plVar1 + 0xa8))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),param_1 + 0x58,
             *(undefined8 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}



// FUNCTION 14317e060 FUN_14317e060 body=69 status=ok
// SIG undefined FUN_14317e060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317e060(void)

{
  _DAT_14ca77500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317e0a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77508,1);
  return;
}



// FUNCTION 14317e0b4 FUN_14317e0b4 body=1056 status=ok
// SIG undefined FUN_14317e0b4(void)

void FUN_14317e0b4(longlong param_1,int param_2,int param_3,byte param_4,byte param_5)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined8 local_a0;
  byte local_8a;
  char local_89;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  tagRECT local_68;
  ulonglong uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  local_8a = param_4;
  FUN_14080c2b4();
  FUN_146319d4c(lVar2);
  if (DAT_14c760da4 != 0) {
    uVar5 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar14 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
      }
    }
    do {
      FUN_1448a9090(*(undefined8 *)(*(longlong *)(lVar2 + 2000 + (ulonglong)uVar14 * 8) + 0xac0),0);
      bVar3 = (byte)uVar14 & 0x1f;
      uVar5 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar5;
      if (uVar5 == 0) {
        uVar14 = 0x20;
      }
      else {
        uVar14 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
      }
    } while (uVar5 != 0);
  }
  if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 8))();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar14 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar9 = param_1 + 0x58;
      }
      lVar11 = *(longlong *)(lVar9 + (longlong)(int)uVar14 * 0x10);
      if (lVar11 != 0) {
        plVar12 = (longlong *)(lVar9 + (longlong)(int)uVar14 * 0x10);
        (**(code **)(*(longlong *)(lVar11 + 0x60) + 0x18))(lVar11 + 0x60);
        lVar9 = *plVar12;
        if (lVar9 != -0x120) {
          uVar5 = *(uint *)(lVar9 + 0x120);
          if (uVar5 == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar6 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
          }
          lVar11 = *(longlong *)(lVar9 + 0x128 + (ulonglong)uVar6 * 8);
          if (lVar11 != 0) {
            uVar8 = CONCAT44(uVar6,uVar5);
            do {
              pbVar1 = (byte *)(*(longlong *)(lVar11 + 0xb8) + 0xdf);
              *pbVar1 = *pbVar1 & 0xf7;
              bVar3 = (byte)((ulonglong)uVar8 >> 0x20) & 0x1f;
              uVar5 = (uint)uVar8 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
              if (uVar5 == 0) break;
              uVar6 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                }
              }
              lVar11 = *(longlong *)(lVar11 + ((ulonglong)uVar6 + 0x25) * 8);
              uVar8 = CONCAT44(uVar6,uVar5);
            } while (lVar11 != 0);
            lVar9 = *plVar12;
          }
        }
        if (lVar9 != 0) {
          *plVar12 = 0;
          (**(code **)(*(longlong *)(lVar9 + 0x60) + 0x10))(lVar9 + 0x60);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 0x54));
  }
  FUN_14080c2b4();
  FUN_146319d4c(lVar2);
  bVar3 = local_8a;
  if (param_5 == 0) {
    param_5 = *(byte *)(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  if (((*(int *)(param_1 + 0x20) != param_2) || (*(int *)(param_1 + 0x24) != param_3)) ||
     (*(byte *)(param_1 + 0x28) != param_5)) {
    *(int *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x24) = param_3;
    *(byte *)(param_1 + 0x28) = param_5;
    if ((*(byte *)(param_1 + 0x2d) & local_8a) == 1) {
      local_68.right = 0;
      local_68.bottom = 0;
      local_50 = 0;
      local_68.top = param_3;
      local_68.left = param_2;
      uVar14 = *(uint *)((longlong)&DAT_14c873434 + (ulonglong)((uint)param_5 * 0x30));
      if ((int)uVar14 < 0x49) {
        if (uVar14 == 0x1b) {
          uVar5 = 0x1c;
        }
        else if (uVar14 == 0x35) {
          uVar5 = 0x38;
        }
        else if (uVar14 == 0x46) {
          uVar5 = 0x47;
        }
        else {
LAB_14317e2e4:
          uVar5 = uVar14;
        }
      }
      else if (uVar14 == 0x49) {
        uVar5 = 0x4a;
      }
      else if (uVar14 == 0x4c) {
        uVar5 = 0x4d;
      }
      else {
        uVar5 = 0x57;
        if (uVar14 != 0x5a) goto LAB_14317e2e4;
      }
      uStack_58 = (ulonglong)uVar5;
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))();
      if (iVar7 < 0) {
        FUN_1401d51be(param_1,1);
      }
    }
  }
  if (*(byte *)(param_1 + 0x29) != bVar3) {
    *(byte *)(param_1 + 0x29) = bVar3;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    if ((*(char *)(param_1 + 0x2d) == '\x01') &&
       (FUN_1401d51be(param_1,1), *(char *)(param_1 + 0x29) == '\0')) {
      local_68._0_8_ = *(undefined8 *)(param_1 + 0x20);
      local_68.right = 0;
      local_68.bottom = 0;
      local_50 = 0;
      uVar14 = *(uint *)((longlong)&DAT_14c873434 +
                        (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x30));
      if ((int)uVar14 < 0x49) {
        if (uVar14 == 0x1b) {
          uVar5 = 0x1c;
        }
        else if (uVar14 == 0x35) {
          uVar5 = 0x38;
        }
        else if (uVar14 == 0x46) {
          uVar5 = 0x47;
        }
        else {
LAB_14317e3ae:
          uVar5 = uVar14;
        }
      }
      else if (uVar14 == 0x49) {
        uVar5 = 0x4a;
      }
      else if (uVar14 == 0x4c) {
        uVar5 = 0x4d;
      }
      else {
        uVar5 = 0x57;
        if (uVar14 != 0x5a) goto LAB_14317e3ae;
      }
      uStack_58 = (ulonglong)uVar5;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))();
    }
  }
  local_68.left = 0;
  local_68.top = 0;
  local_68.right = 0;
  local_68.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x18),&local_68);
  local_70 = (double)local_68.top;
  local_78 = (double)local_68.left;
  local_80 = (double)local_68.bottom;
  local_88 = (double)local_68.right;
  local_a8 = &local_88;
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  FUN_1403485af(param_1 + 0xbc,param_1 + 0xb8,&local_89);
  FUN_1456cc642(param_1);
  if (local_89 == '\x01') {
    if ((DAT_14ca84f23 != '\x01') || (cVar4 = FUN_140348454(), cVar4 == '\0')) goto LAB_14317e4a7;
    uVar10 = *(undefined4 *)(param_1 + 0xb8);
    uVar13 = *(undefined4 *)(param_1 + 0xbc);
  }
  else {
    uVar10 = 0;
    uVar13 = 0;
  }
  FUN_143185758(param_1,uVar10,uVar13);
LAB_14317e4a7:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317e4e4 FUN_14317e4e4 body=278 status=ok
// SIG undefined FUN_14317e4e4(void)

void FUN_14317e4e4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  lVar6 = (longlong)DAT_14c760da4;
  if (lVar6 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 2000 + lVar5) + 0xac0);
      lVar4 = FUN_144ad3d06(0x30);
      FUN_144724502(lVar4,1);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      FUN_1447584e6(plVar3,lVar4);
      (**(code **)(*plVar3 + 0x28))(plVar3,local_58);
      iVar1 = *(int *)(param_1 + 200);
      *(uint *)(param_1 + 200) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
        FUN_14476c1d2((longlong *)(param_1 + 0xc0),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 8) = lVar4;
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  FUN_14473bfcc(DAT_14ca77418,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14317e5fc FUN_14317e5fc body=56 status=ok
// SIG undefined FUN_14317e5fc(void)

void FUN_14317e5fc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_143158ff0(*(undefined8 *)(param_1 + 0x110));
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014317e629. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14317e634 FUN_14317e634 body=1298 status=ok
// SIG undefined FUN_14317e634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317e634(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  uint local_54;
  LARGE_INTEGER local_50 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(param_1[0x22] + 0x530);
  if (lVar7 != 0) {
    *(undefined8 *)(param_1[0x22] + 0x530) = 0;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar15 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar15 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar15 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar15 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar7 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10);
        plVar11[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar10;
            LOCK();
            bVar16 = plVar10 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar16) {
              plVar10 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar16 = plVar12 != DAT_14ca843c8;
            plVar10 = plVar11;
            if (bVar16) {
              plVar12 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  cVar3 = (**(code **)(*DAT_14ca77418 + 0x390))();
  if (cVar3 != '\0') goto LAB_14317e9d7;
  if (DAT_14c760da4 != 0) {
    uVar15 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    iVar5 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    do {
      lVar7 = (**(code **)(*param_1 + 0x278))(param_1,iVar5);
      if (*(longlong *)param_2[0x14] == 0) {
        lVar8 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar7 + 0x2e0);
        if (uVar2 == 0) {
          uVar13 = 0x20;
        }
        else {
          uVar13 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
            }
          }
        }
        lVar8 = *(longlong *)(*(longlong *)param_2[0x14] + 0x128 + (ulonglong)uVar13 * 8);
      }
      local_78 = local_78 & 0xffffffff00000000;
      FUN_144706208(lVar7,*(undefined8 *)(*(longlong *)(lVar8 + 0x168) + 0x20),0x7fffffff,0);
      FUN_14492aa36(lVar7);
      FUN_14315c060(lVar7);
      bVar4 = (byte)iVar5 & 0x1f;
      uVar15 = uVar15 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      if (uVar15 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
      }
    } while (uVar15 != 0);
  }
  iVar5 = 0;
  if (param_4 != '\0') {
    iVar5 = FUN_147413c95();
  }
  bVar4 = *(byte *)((longlong)param_2 + 0x2b);
  local_58 = iVar5;
  if ((bVar4 == 1) && ((longlong *)param_2[6] != (longlong *)0x0)) {
    local_50[0].QuadPart = 0;
    (**(code **)(*(longlong *)param_2[6] + 0x58))();
    if ((bool)*(char *)((longlong)param_2 + 0x29) != (local_54 != 0)) {
      *(undefined2 *)((longlong)param_2 + 0x2a) = 1;
    }
    if ((longlong *)local_50[0].QuadPart != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_50[0] + 0x10))();
    }
    bVar4 = *(byte *)((longlong)param_2 + 0x2b);
  }
  if ((bVar4 & 1) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x1c));
    uVar15 = *(uint *)((longlong)param_2 + 0xb4);
    if (*(uint *)((longlong)param_2 + 0xb4) == 0) {
      uVar15 = *(uint *)((longlong)param_2 + 0x54);
    }
    uVar15 = (uVar15 - 1) % *(uint *)((longlong)param_2 + 0x54);
    *(uint *)((longlong)param_2 + 0xb4) = uVar15;
    plVar10 = param_2 + 0xb;
    if ((longlong *)param_2[0x11] != (longlong *)0x0) {
      plVar10 = (longlong *)param_2[0x11];
    }
    param_2[0x15] = (longlong)(plVar10 + (longlong)(int)uVar15 * 2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x1c));
LAB_14317e92a:
    if (((longlong *)param_2[0x1a] == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*(longlong *)param_2[0x1a] + 0x18))(), cVar3 == '\0'))
    goto LAB_14317e9d7;
    bVar16 = false;
LAB_14317e94e:
    uVar15 = ((int)param_2[0x16] + 1U) % *(uint *)((longlong)param_2 + 0x54);
    *(uint *)(param_2 + 0x16) = uVar15;
    plVar10 = param_2 + 0xb;
    if ((longlong *)param_2[0x11] != (longlong *)0x0) {
      plVar10 = (longlong *)param_2[0x11];
    }
    param_2[0x14] = (longlong)(plVar10 + (longlong)(int)uVar15 * 2);
    if (!bVar16) goto LAB_14317e9d7;
  }
  else {
    plVar10 = (longlong *)param_2[0x1a];
    if (plVar10 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar10 + 0x30))(plVar10,param_1,&local_58);
      iVar5 = local_58;
      if (cVar3 == '\0') goto LAB_14317e92a;
    }
    lVar7 = 0;
    if ((iVar5 == 0) && (*(char *)((longlong)param_2 + 0x29) == '\0')) {
      lVar7 = (ulonglong)*(byte *)((longlong)param_2 + 0x2c) << 9;
    }
    uVar9 = FUN_141552594();
    FUN_14275a87c(uVar9);
    if (param_2[6] != 0) {
      FUN_1403936f2(local_50,2,1);
      iVar5 = (**(code **)(*(longlong *)param_2[6] + 0x40))((longlong *)param_2[6],iVar5,lVar7);
      iVar6 = (**(code **)(*(longlong *)param_2[6] + 0x88))((longlong *)param_2[6],&local_54);
      uVar14 = DAT_14ca84f50 + 1;
      DAT_14ca84f50 = (ulonglong)local_54;
      if (iVar6 < 0) {
        DAT_14ca84f50 = uVar14;
      }
      FUN_1402488ea(local_50);
      if (iVar5 < 0) {
        local_70 = &local_68;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        FUN_145763094(iVar5,"PresentInternal(SyncInterval)",
                      ".\\Runtime/D3D12RHI/Private/D3D12Viewport.cpp",0x203);
      }
    }
    if ((longlong *)param_2[0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0x1a] + 0x38))();
    }
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      bVar16 = true;
      goto LAB_14317e94e;
    }
    uVar14 = (**(code **)(*(longlong *)param_2[8] + 0x120))();
    iVar5 = (int)((uVar14 & 0xffffffff) % (ulonglong)*(uint *)((longlong)param_2 + 0x54));
    *(int *)(param_2 + 0x16) = iVar5;
    plVar10 = param_2 + 0xb;
    if ((longlong *)param_2[0x11] != (longlong *)0x0) {
      plVar10 = (longlong *)param_2[0x11];
    }
    param_2[0x14] = (longlong)(plVar10 + (longlong)iVar5 * 2);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca77538) && (FUN_144b3d300(&DAT_14ca77538), DAT_14ca77538 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar10 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FinishCurrentFrame",1);
    if (plVar10 == (longlong *)0x0) {
      DAT_14ca77530 = 0;
    }
    else {
      DAT_14ca77530 = (**(code **)(*plVar10 + 0x68))(plVar10);
    }
    _Init_thread_footer(&DAT_14ca77538);
  }
  bVar16 = *(int *)(DAT_14ca77530 + 4) == 0;
  (**(code **)(*param_2 + 0x40 + (ulonglong)!bVar16 * 8))(param_2);
  (**(code **)(*param_2 + 0x40 + (ulonglong)bVar16 * 8))(param_2);
LAB_14317e9d7:
  if (DAT_14ca964b2 == '\x01') {
    (**(code **)(*param_2 + 0x40))(param_2);
    QueryPerformanceCounter(local_50);
    _DAT_14ca964b8 = local_50[0].s.LowPart - _DAT_14ca964b4;
    DAT_14ca964b2 = '\0';
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14317eb48 FUN_14317eb48 body=161 status=ok
// SIG undefined FUN_14317eb48(void)

void FUN_14317eb48(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  
  if (((*(longlong **)(param_2 + 0xd0) != (longlong *)0x0) &&
      (cVar1 = (**(code **)(**(longlong **)(param_2 + 0xd0) + 0x10))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(**(longlong **)(param_2 + 0xd0) + 0x18))(), cVar1 == '\0')) {
    return;
  }
  cVar1 = (**(code **)(*DAT_14ca77418 + 0x390))();
  if (cVar1 != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xe0));
  uVar3 = (*(int *)(param_2 + 0xb4) + 1U) % *(uint *)(param_2 + 0x54);
  *(uint *)(param_2 + 0xb4) = uVar3;
  lVar2 = param_2 + 0x58;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x88);
  }
  *(longlong *)(param_2 + 0xa8) = (longlong)(int)uVar3 * 0x10 + lVar2;
                    /* WARNING: Could not recover jumptable at 0x00014317ebe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xe0));
  return;
}



// FUNCTION 14317ebea FUN_14317ebea body=85 status=ok
// SIG undefined FUN_14317ebea(void)

undefined4 FUN_14317ebea(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xe0));
    lVar1 = param_2 + 0x58;
    if (*(longlong *)(param_2 + 0x88) != 0) {
      lVar1 = *(longlong *)(param_2 + 0x88);
    }
    uVar2 = *(undefined4 *)(lVar1 + 8 + (longlong)*(int *)(param_2 + 0xb4) * 0x10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xe0));
  }
  return uVar2;
}



// FUNCTION 14317ec57 FUN_14317ec57 body=69 status=ok
// SIG undefined FUN_14317ec57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14317ec57(void)

{
  _DAT_14ca77540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014317ec99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77548,1);
  return;
}



// FUNCTION 14317ec9c FUN_14317ec9c body=5046 status=ok
// SIG undefined FUN_14317ec9c(void)

void FUN_14317ec9c(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  undefined2 *puVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined8 *puVar30;
  longlong lVar31;
  undefined1 auStack_aa8 [32];
  int *local_a88;
  undefined1 *local_a80;
  undefined1 local_a78;
  int *local_a70;
  undefined8 local_a68;
  wchar_t *local_a60;
  undefined8 **local_a58;
  undefined8 *local_a50;
  ulonglong local_a48;
  ulonglong local_a40;
  longlong local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  longlong local_a20;
  longlong local_a18;
  longlong local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined1 *local_9f8;
  int local_9f0;
  undefined **local_9e8;
  ulonglong local_9e0;
  undefined8 uStack_9d8;
  undefined1 local_9d0;
  undefined1 local_9c8 [44];
  int local_99c;
  longlong local_990;
  undefined8 local_8c8;
  ulonglong uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  longlong local_8a8;
  undefined2 *puStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined4 local_888;
  undefined2 *local_880;
  undefined8 uStack_878;
  longlong local_868;
  undefined8 uStack_860;
  longlong local_858;
  undefined8 uStack_850;
  longlong local_848;
  longlong local_840;
  undefined1 local_838 [12];
  undefined4 uStack_82c;
  undefined8 *puStack_828;
  undefined1 *local_820;
  longlong *plStack_818;
  longlong *local_810;
  longlong *local_808;
  undefined8 *local_7f8;
  undefined1 local_7e9;
  int local_7e8;
  undefined1 local_7e4 [7];
  undefined1 local_7dd;
  int local_7dc;
  undefined8 *local_7d8;
  undefined8 *puStack_7d0;
  ulonglong local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  ulonglong uStack_7b0;
  ulonglong local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 local_790;
  ulonglong local_788;
  longlong local_5d8;
  undefined4 local_5d0;
  longlong *local_398;
  undefined8 local_390;
  undefined1 local_388 [16];
  undefined1 *local_378;
  undefined8 local_370;
  undefined1 local_368 [776];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_aa8;
  plVar12 = param_1 + 0x39;
  if (param_1 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  local_a18 = param_3;
  FUN_140048e76(local_368,plVar12);
  FUN_147386d36(*(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8),
                &local_848);
  if (local_848 == 0) {
    local_a20 = 0;
  }
  else {
    local_a20 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_840 + 8) + 0x50) +
                 (longlong)*(int *)(local_848 + 0xd4) * 8);
    if (local_a20 == 0) {
      local_a20 = FUN_1400bafc2();
    }
  }
  iVar19 = (uint)*(byte *)(local_a20 + 0xb4) +
           (uint)*(byte *)(local_a20 + 0xb3) + (uint)*(byte *)(local_a20 + 0xb2);
  uVar29 = (uint)*(byte *)(local_a20 + 0xb1);
  uVar17 = *(uint *)(param_5 + 1);
  local_a48 = (ulonglong)uVar17;
  local_858 = 0;
  uStack_850 = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_a48);
  }
  local_a10 = param_2;
  if (uVar17 == 0) {
    local_868 = 0;
    uStack_860 = 0;
  }
  else {
    FUN_14480809c(&local_858);
    local_868 = 0;
    uStack_860 = 0;
    FUN_14738bb30(&local_868,local_a48);
    lVar24 = 0;
    uVar28 = 0;
    uVar21 = local_a48;
    do {
      uVar6 = uStack_860;
      if (*(int *)(*param_5 + lVar24) == -1) {
        lVar31 = 0;
      }
      else {
        lVar31 = *(longlong *)(*param_5 + 0x18 + lVar24);
      }
      lVar23 = (longlong)(int)uStack_860;
      uVar17 = (int)uStack_860 + 1;
      uStack_860 = CONCAT44(uStack_860._4_4_,uVar17);
      if (uStack_860._4_4_ < uVar17) {
        FUN_14738bb86(&local_868,uVar6 & 0xffffffff);
        uVar21 = local_a48;
      }
      uVar6 = uStack_850;
      *(longlong *)(local_868 + lVar23 * 8) = lVar31;
      if (lVar31 != 0) {
        lVar23 = (longlong)(int)uStack_850;
        uVar17 = (int)uStack_850 + 1;
        uStack_850 = CONCAT44(uStack_850._4_4_,uVar17);
        if (uStack_850._4_4_ < uVar17) {
          FUN_1447808da(&local_858,uVar6 & 0xffffffff);
          uVar21 = local_a48;
        }
        *(int *)(local_858 + lVar23 * 4) = (int)uVar28;
        iVar19 = iVar19 + (uint)*(byte *)(lVar31 + 0xb2) +
                 (uint)*(byte *)(lVar31 + 0xb4) + (uint)*(byte *)(lVar31 + 0xb3);
        uVar29 = uVar29 + *(byte *)(lVar31 + 0xb1);
      }
      uVar28 = uVar28 + 1;
      lVar24 = lVar24 + 0x88;
    } while (uVar21 != uVar28);
  }
  uVar17 = 0;
  local_888 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_8a8 = 0;
  puStack_8a0 = (undefined2 *)0x0;
  local_8b8 = 0;
  uStack_8b0 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_880 = (undefined2 *)0x0;
  uStack_878 = 0;
  FUN_14020fad6(&puStack_8a0,L"ShaderBundleWorkGraph");
  iVar16 = (int)uStack_878 + -1;
  if ((int)uStack_878 == 0) {
    iVar16 = 0;
  }
  uVar22 = 0;
  if (0 < iVar16) {
    puVar27 = local_880;
    if ((int)uStack_878 == 0) {
      puVar27 = &DAT_149dfb77a;
    }
    lVar24 = 0;
    uVar22 = 0;
    do {
      uVar13 = ((uint)(ushort)puVar27[lVar24] + (uint)(0x19 < (ushort)puVar27[lVar24] - 0x61) * 0x20
               ) - 0x20;
      uVar22 = uVar22 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar22 ^ uVar13) & 0xff) * 4);
      uVar22 = uVar22 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar22 & 0xff ^ uVar13 >> 8 & 0xff) * 4);
      lVar24 = lVar24 + 1;
    } while (iVar16 != (int)lVar24);
  }
  iVar16 = (int)local_898 + -1;
  if ((int)local_898 == 0) {
    iVar16 = 0;
  }
  if (0 < iVar16) {
    puVar27 = puStack_8a0;
    if ((int)local_898 == 0) {
      puVar27 = &DAT_149dfb77a;
    }
    lVar24 = 0;
    uVar17 = 0;
    do {
      uVar13 = ((uint)(ushort)puVar27[lVar24] + (uint)(0x19 < (ushort)puVar27[lVar24] - 0x61) * 0x20
               ) - 0x20;
      uVar17 = uVar17 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar17 ^ uVar13) & 0xff) * 4);
      uVar17 = uVar17 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar13 >> 8 & 0xff) * 4);
      lVar24 = lVar24 + 1;
    } while (iVar16 != (int)lVar24);
  }
  uStack_8c0 = (ulonglong)(uVar22 + uVar17 * 0x40 + (uVar17 >> 2) + 0x9e3779b9 ^ uVar17);
  local_8a8 = local_a20;
  local_8c8 = *(undefined8 *)(local_a20 + 0x88);
  local_5d8 = local_868;
  local_5d0 = (int)uStack_860;
  FUN_147386da0(&local_8c8,&local_5d8);
  lVar24 = FUN_1431e3b3d(local_368,&local_8c8);
  local_a38 = *(longlong *)(lVar24 + 0x40);
  uVar22 = (**(code **)(*DAT_14c82b500 + 0x20))();
  cVar7 = FUN_1447e0190();
  uVar17 = 4;
  if (uVar22 < 4) {
    uVar17 = uVar22;
  }
  uVar22 = 1;
  if (cVar7 != '\0') {
    uVar22 = uVar17;
  }
  local_378 = (undefined1 *)0x0;
  local_370 = 0x400000000;
  if (uVar22 != 0) {
    uVar17 = 0;
    do {
      uVar21 = local_370;
      lVar24 = (longlong)(int)local_370;
      uVar13 = (int)local_370 + 1;
      local_370 = CONCAT44(local_370._4_4_,uVar13);
      if (local_370._4_4_ < uVar13) {
        FUN_143189222(local_388,uVar21 & 0xffffffff);
      }
      puVar9 = local_378;
      if (local_378 == (undefined1 *)0x0) {
        puVar9 = local_388;
      }
      *(uint *)(puVar9 + lVar24 * 4) = uVar17;
      uVar17 = uVar17 + 1;
    } while (uVar22 != uVar17);
  }
  FUN_1473763b4(local_9c8,param_1[0x5d],uVar22);
  local_a88 = (int *)CONCAT44(local_a88._4_4_,1);
  FUN_1473711de(local_9c8,0,iVar19,uVar29);
  local_398 = (longlong *)0x0;
  local_390 = 0x400000000;
  FUN_147386e34(&local_5d8,uVar22);
  lVar24 = local_a38;
  local_9e0 = 0;
  uStack_9d8 = 0;
  local_9e8 = &PTR_FUN_14a355380;
  local_9d0 = 0;
  FUN_14570f178(&local_9e0,(*(int *)(local_a38 + 0x6c) + 1) * (*(uint *)(local_a38 + 0x68) >> 2));
  plStack_818 = &local_858;
  iVar19 = (int)uStack_850;
  local_9f8 = local_378;
  if (local_378 == (undefined1 *)0x0) {
    local_9f8 = local_388;
  }
  local_9f0 = (int)local_370;
  stack0xfffffffffffff7d0 = &local_9e8;
  local_838._0_8_ = param_1;
  puStack_828 = (undefined8 *)lVar24;
  local_810 = param_5;
  local_820 = local_9c8;
  local_808 = &local_5d8;
  if ((int)uStack_850 != 0) {
    cVar7 = FUN_1447e0190();
    uVar17 = 0;
    if ((1 < iVar19 && cVar7 == '\x01') &&
       (uVar17 = iVar19 + 0x200U >> 10, (int)DAT_14c8335d8 < (int)uVar17)) {
      uVar17 = DAT_14c8335d8;
    }
    lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar16 = (*(undefined **)(lVar24 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar24 + 0x2c8) == 0) +
             uVar17;
    if (DAT_14c8c27ac < 1) {
      memset(&local_7d8,0,0x82);
      local_a08 = (longlong *)((ulonglong)local_a08 & 0xffffffff00000000);
      local_7f8 = (undefined8 *)((ulonglong)local_7f8 & 0xffffffff00000000);
      local_7dc = 0;
      FUN_140e55932(&local_7d8,&local_a08,&local_7f8,&local_7dc);
      iVar25 = local_7dc;
      local_a80 = &local_7e9;
      local_a88 = &local_7e8;
      FUN_1457b80ec((ulonglong)local_7f8 & 0xffffffff,local_7dc,&local_7dd,local_7e4);
      DAT_14c8c27ac = iVar25;
      if ((0 < local_7e8) && (DAT_14c8c27ac = iVar25, local_7e8 <= iVar25)) {
        DAT_14c8c27ac = local_7e8;
      }
    }
    iVar25 = DAT_14c8c27ac;
    if (iVar16 < DAT_14c8c27ac) {
      iVar25 = iVar16;
    }
    uVar21 = 1;
    if (iVar25 < 2) {
      iVar25 = 1;
    }
    iVar16 = local_9f0;
    if (iVar25 < local_9f0) {
      iVar16 = iVar25;
    }
    if (local_9f0 == 0) {
      iVar16 = iVar25;
    }
    if (1 < iVar16) {
      iVar25 = iVar16 * 6;
      iVar14 = iVar19 + iVar25 + -1;
      iVar26 = -6;
      iVar8 = iVar19;
      do {
        if (iVar25 <= iVar19) {
          uVar21 = (longlong)iVar14 / (longlong)iVar25 & 0xffffffff;
          iVar20 = (int)((longlong)iVar14 / (longlong)iVar25);
          iVar8 = (iVar19 + -1 + iVar20) / iVar20;
          if (iVar16 <= iVar8) break;
        }
        iVar20 = (int)uVar21;
        iVar14 = iVar14 - iVar16;
        iVar25 = iVar25 - iVar16;
        iVar26 = iVar26 + 1;
      } while (iVar26 != 0);
      uVar17 = iVar16 - 1;
      lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar15 = 6;
      if ((*(byte *)(lVar24 + 0xc60) & 0x37) != 0) {
        uVar15 = 0;
      }
      local_a40 = CONCAT44(local_a40._4_4_,uVar15);
      FUN_144a85b52(&local_a08,1);
      puVar1 = (undefined8 *)(lVar24 + 0x308);
      puVar11 = (uint *)*puVar1;
      if (puVar11 != (uint *)0x0) goto LAB_14317f413;
      do {
        uVar29 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar29 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar29 | 1;
          __tlregdtor(&LAB_143185bb0);
        }
        lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar24 + 0x310);
        *(undefined8 *)(lVar24 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar1 = puVar10;
        FUN_140217a48(puVar1);
        puVar11 = (uint *)*puVar1;
LAB_14317f413:
        uVar21 = *(longlong *)(puVar11 + 0x10) + 0x3f;
        uVar29 = puVar11[0x12];
        while( true ) {
          puVar30 = (undefined8 *)(uVar21 & 0xffffffffffffffc0);
          if (puVar30 + 0x10 <= puVar11 + 0x4000) {
            *(undefined8 **)(puVar11 + 0x10) = puVar30 + 0x10;
            puVar11[0x12] = uVar29 + 1;
            *puVar30 = &PTR_FUN_149e002e8;
            *(undefined4 *)(puVar30 + 1) = 0;
            *puVar30 = &PTR_FUN_14a3553c0;
            puVar30[3] = L"DispatchShaderBundle";
            *(undefined4 *)(puVar30 + 4) = 0;
            *(undefined4 *)(puVar30 + 5) = 0;
            *(int *)((longlong)puVar30 + 0x2c) = iVar19;
            *(int *)(puVar30 + 6) = iVar20;
            *(int *)((longlong)puVar30 + 0x34) = iVar8;
            puVar30[7] = &local_9f8;
            puVar30[8] = local_838;
            puVar30[9] = &local_a08;
            *(char *)(puVar30 + 10) = (char)local_a40;
            puVar30[0xb] = 0;
            puVar30[0xc] = 0;
            *(int *)((longlong)puVar30 + 0x24) = iVar8;
            *(uint *)(puVar30 + 0xc) = uVar17;
            FUN_14318a172(puVar30 + 0xb);
            FUN_14318a13c(puVar30[0xb],uVar17);
            if (puVar30 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
              UNLOCK();
            }
            local_7f8 = puVar30;
            FUN_143189b16(&local_7f8);
            puStack_7d0._0_5_ = (uint5)uVar17;
            local_7d8 = puVar30;
            cVar7 = FUN_143189b94(&local_7d8,1);
            if (cVar7 == '\0') {
              (**(code **)(*local_a08 + 0x20))(local_a08,0xffffffff,0);
            }
            FUN_143189f40(&local_7d8);
            FUN_144a75412(&local_a08);
            goto LAB_14317f596;
          }
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar22 = *puVar11;
          *puVar11 = *puVar11 + uVar29 + 1;
          UNLOCK();
          if ((uVar22 ^ uVar29) != 0xffffffff) break;
          puVar11 = (uint *)*puVar1;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar1 = puVar11;
          uVar21 = (longlong)puVar11 + 0x97;
          uVar29 = 0;
        }
      } while( true );
    }
    if (0 < iVar19) {
      iVar16 = 0;
      do {
        FUN_14318942c(local_838,&local_9f8,0,iVar16);
        iVar16 = iVar16 + 1;
      } while (iVar19 != iVar16);
    }
  }
LAB_14317f596:
  if ((uint)uStack_9d8 == 0 || (int)uStack_850 == 0) {
    local_a40 = 0;
    local_a28 = 0;
    local_a30 = 0;
  }
  else {
    if ((uint)uStack_9d8 < 0x40000000) {
      uVar17 = (uint)uStack_9d8 << 2;
    }
    else {
      FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                    L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                    ,4);
      uVar17 = 0;
    }
    local_7c8 = (ulonglong)uVar17;
    local_7d8 = (undefined8 *)CONCAT44(local_7d8._4_4_,1);
    puStack_7d0 = (undefined8 *)0x0;
    uStack_7c0 = 0x1000100000001;
    local_7b8 = 0x100000000;
    uStack_7b0 = 0x100000000;
    local_7a8 = local_7a8 & 0xffffffff00000000;
    local_a50 = &local_a08;
    local_a08 = (longlong *)0x0;
    local_a58 = &local_7f8;
    local_7f8 = (undefined8 *)0x0;
    local_7dc = 1 << (*(byte *)(param_1[0x5d] + 8) & 0x1f);
    local_a70 = &local_7dc;
    local_838._4_8_ = 0x100000000;
    local_838._0_4_ = uVar17;
    local_a60 = L"BundleRecordBuffer";
    local_a68 = 0;
    local_a78 = 1;
    local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x400);
    local_a88 = (int *)CONCAT44(local_a88._4_4_,2);
    lVar24 = FUN_1401297de(*(undefined8 *)(param_1[0x5d] + 0x10),&local_7d8,0x10);
    FUN_14315b95e(lVar24,local_838,&local_9e8);
    iVar19 = (int)param_1[4];
    *(uint *)(param_1 + 4) = iVar19 + 1U;
    if (*(uint *)((longlong)param_1 + 0x24) < iVar19 + 1U) {
      FUN_14476c1d2(param_1 + 3,iVar19);
    }
    *(undefined8 *)(param_1[3] + (longlong)iVar19 * 8) = local_838._0_8_;
    local_a88 = (int *)((ulonglong)local_a88 & 0xffffffff00000000);
    FUN_144706208(param_1,*(undefined8 *)(lVar24 + 0x88),0x400,0);
    local_a30 = *(undefined8 *)(lVar24 + 0xd0);
    local_a28 = *(undefined8 *)(lVar24 + 0xe0);
    local_a40 = (ulonglong)*(uint *)(local_a38 + 0x68);
  }
  if (1 < (int)local_390) {
    lVar24 = 1;
    do {
      plVar12 = local_398;
      if (local_398 == (longlong *)0x0) {
        plVar12 = &local_5d8;
      }
      lVar23 = lVar24 * 0x90;
      lVar31 = plVar12[lVar24 * 0x12 + 0xd];
      if ((longlong)(int)lVar31 != 0) {
        lVar5 = plVar12[lVar24 * 0x12 + 0xc];
        lVar18 = 0;
        do {
          plVar12 = local_398;
          if (local_398 == (longlong *)0x0) {
            plVar12 = &local_5d8;
          }
          FUN_147386eba(plVar12,*(undefined8 *)(lVar5 + lVar18));
          lVar18 = lVar18 + 8;
        } while ((longlong)(int)lVar31 * 8 != lVar18);
      }
      plVar12 = local_398;
      if (local_398 == (longlong *)0x0) {
        plVar12 = &local_5d8;
      }
      lVar31 = plVar12[lVar24 * 0x12 + 0xf];
      if ((longlong)(int)lVar31 != 0) {
        lVar5 = plVar12[lVar24 * 0x12 + 0xe];
        lVar18 = 0;
        do {
          plVar12 = local_398;
          if (local_398 == (longlong *)0x0) {
            plVar12 = &local_5d8;
          }
          FUN_147386f46(plVar12,*(undefined8 *)(lVar5 + lVar18));
          lVar18 = lVar18 + 8;
        } while ((longlong)(int)lVar31 * 8 != lVar18);
      }
      plVar12 = local_398;
      if (local_398 == (longlong *)0x0) {
        plVar12 = &local_5d8;
      }
      *(undefined4 *)(plVar12 + lVar24 * 0x12 + 0xd) = 0;
      if (*(int *)((longlong)plVar12 + lVar23 + 0x6c) != 0) {
        FUN_1473788de(plVar12 + lVar24 * 0x12 + 0xc,0);
      }
      plVar12 = local_398;
      if (local_398 == (longlong *)0x0) {
        plVar12 = &local_5d8;
      }
      *(undefined4 *)(plVar12 + lVar24 * 0x12 + 0xf) = 0;
      if (*(int *)((longlong)plVar12 + lVar23 + 0x7c) != 0) {
        FUN_14737893e(plVar12 + lVar24 * 0x12 + 0xe);
      }
      plVar12 = local_398;
      if (local_398 == (longlong *)0x0) {
        plVar12 = &local_5d8;
      }
      FUN_147377362(plVar12 + lVar24 * 0x12);
      *(undefined4 *)(plVar12 + lVar24 * 0x12 + 5) = 0;
      plVar12[lVar24 * 0x12] = 0;
      (plVar12 + lVar24 * 0x12)[1] = 0;
      plVar12[lVar24 * 0x12 + 2] = 0;
      (plVar12 + lVar24 * 0x12 + 2)[1] = 0;
      *(undefined8 *)((longlong)plVar12 + lVar24 * 0x90 + 0x1d) = 0;
      plVar12 = local_398;
      if (local_398 == (longlong *)0x0) {
        plVar12 = &local_5d8;
      }
      *(undefined4 *)(plVar12 + lVar24 * 0x12 + 0x11) = 0;
      if (*(int *)((longlong)plVar12 + lVar24 * 0x90 + 0x8c) != 0) {
        FUN_14737893e(plVar12 + lVar24 * 0x12 + 0x10);
      }
      plVar12 = local_398;
      if (local_398 == (longlong *)0x0) {
        plVar12 = &local_5d8;
      }
      FUN_147377362(plVar12 + lVar24 * 0x12 + 6);
      *(undefined4 *)(plVar12 + lVar24 * 0x12 + 0xb) = 0;
      lVar31 = lVar24 + 1;
      plVar12[lVar24 * 0x12 + 6] = 0;
      plVar12[lVar24 * 0x12 + 7] = 0;
      plVar12[lVar24 * 0x12 + 8] = 0;
      plVar12[lVar24 * 0x12 + 9] = 0;
      *(undefined8 *)((longlong)plVar12 + lVar23 + 0x4d) = 0;
      lVar24 = lVar31;
    } while (lVar31 < (int)local_390);
  }
  plVar12 = local_398;
  if (local_398 == (longlong *)0x0) {
    plVar12 = &local_5d8;
  }
  lVar24 = plVar12[0x11];
  if ((longlong)(int)lVar24 != 0) {
    lVar31 = plVar12[0x10];
    lVar23 = 0;
    do {
      FUN_14736c1fe(param_1,*(undefined8 *)(lVar31 + lVar23),8);
      lVar23 = lVar23 + 8;
    } while ((longlong)(int)lVar24 * 8 != lVar23);
  }
  plVar12 = local_398;
  if (local_398 == (longlong *)0x0) {
    plVar12 = &local_5d8;
  }
  lVar24 = plVar12[0xd];
  if ((longlong)(int)lVar24 != 0) {
    lVar31 = plVar12[0xc];
    lVar23 = 0;
    do {
      FUN_1446ff3a6(param_1,*(undefined8 *)(lVar31 + lVar23),0x40);
      lVar23 = lVar23 + 8;
    } while ((longlong)(int)lVar24 * 8 != lVar23);
  }
  plVar12 = &local_5d8;
  if (local_398 != (longlong *)0x0) {
    plVar12 = local_398;
  }
  lVar24 = plVar12[0xf];
  if ((longlong)(int)lVar24 != 0) {
    lVar31 = plVar12[0xe];
    lVar23 = 0;
    do {
      FUN_144719d5c(param_1,*(undefined8 *)(lVar31 + lVar23),8);
      lVar23 = lVar23 + 8;
    } while ((longlong)(int)lVar24 * 8 != lVar23);
  }
  FUN_14492aa36(param_1);
  FUN_1473706b4(param_1 + 0x6e8,local_9c8);
  puStack_828 = (undefined8 *)0x0;
  local_838._8_4_ = 0x1688;
  local_838._0_8_ = &DAT_100000027;
  uStack_82c = 0;
  local_820 = (undefined1 *)(ulonglong)(*(uint *)(local_a18 + 0x20) >> 2);
  plStack_818 = (longlong *)0x1;
  lVar24 = param_1[0x5d];
  plVar12 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14a34c510;
  FUN_1447f3900(plVar12 + 2,lVar24,0,0);
  plVar12[2] = (longlong)&PTR_LAB_14a34db50;
  plVar12[0x12] = 0;
  *(undefined4 *)(plVar12 + 0x13) = 0;
  *(undefined1 *)((longlong)plVar12 + 0x9c) = 0;
  plVar12[0x14] = 0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  lVar24 = local_a10;
  local_7d8 = (undefined8 *)(local_a18 + 0x30);
  if (local_a18 == 0) {
    local_7d8 = (undefined8 *)0x0;
  }
  puStack_7d0 = local_7d8 + 9;
  if (local_7d8 == (undefined8 *)0x0) {
    local_7c8 = 0;
    puStack_7d0 = (undefined8 *)0x0;
  }
  else {
    local_7c8 = local_7d8[0xb];
  }
  FUN_14737f2a6(plVar12 + 2,&local_7d8,local_838,0);
  (&local_7d8)[*(ushort *)(local_848 + 0xe0)] = (undefined8 *)plVar12[9];
  local_a88 = (int *)((ulonglong)local_a88 & 0xffffffff00000000);
  iVar19 = FUN_143160a10(local_9c8,&local_7d8,1,0);
  lVar23 = local_a20;
  uVar4 = *(undefined1 *)(*(longlong *)(local_a20 + 0xd8) + 0x25);
  lVar31 = param_1[0x33];
  if (lVar31 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar31 = param_1[0x33];
  }
  *(int *)(lVar31 + 0x1c0) = *(int *)(lVar31 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar31 + 0x28) + 0xe8))
            (*(longlong **)(lVar31 + 0x28),*(undefined8 *)(*(longlong *)(lVar23 + 0xd8) + 8));
  lVar31 = param_1[0x33];
  if (lVar31 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar31 = param_1[0x33];
  }
  *(int *)(lVar31 + 0x1c0) = *(int *)(lVar31 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar31 + 0x28) + 0xf8))
            (*(longlong **)(lVar31 + 0x28),uVar4,(ulonglong)(uint)(iVar19 * local_99c) + local_990);
  lVar23 = local_a38;
  local_7d8 = (undefined8 *)0x5;
  puStack_7d0 = *(undefined8 **)(local_a38 + 0x38);
  local_7c8 = *(undefined8 *)(local_a38 + 0x40);
  uStack_7c0 = *(undefined8 *)(local_a38 + 0x48);
  local_7b8 = *(undefined8 *)(local_a38 + 0x50);
  uStack_7b0 = (ulonglong)*(byte *)(local_a38 + 0x80) ^ 1;
  local_7a8 = *(undefined8 *)(local_a38 + 0x58);
  uStack_7a0 = *(undefined8 *)(local_a38 + 0x60);
  local_798 = local_a30;
  local_790 = local_a28;
  local_788 = local_a40;
  lVar31 = param_1[0x33];
  if (lVar31 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar31 = param_1[0x33];
  }
  *(int *)(lVar31 + 0x1c0) = *(int *)(lVar31 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar31 + 0x78) + 0x2a0))(*(longlong **)(lVar31 + 0x78),&local_7d8);
  *(int *)(lVar23 + 0x84) =
       *(int *)(*(longlong *)(*(longlong *)(param_1[0x5d] + 0x10) + 0x538) + 0x58) + 1;
  local_a00 = *(undefined8 *)(lVar24 + 0x14);
  local_a08 = (longlong *)CONCAT44((int)local_a48,(int)local_a48 + 0x3fU >> 6);
  if (DAT_14ca77550 == '\0') {
    local_838 = SUB1612((undefined1  [16])0x0,0);
    uStack_82c = 1;
    local_820 = (undefined1 *)0x10;
    puStack_828 = &local_a08;
    lVar24 = param_1[0x33];
    if (lVar24 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar24 = param_1[0x33];
    }
    *(int *)(lVar24 + 0x1c0) = *(int *)(lVar24 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar24 + 0x78) + 0x2a8))(*(longlong **)(lVar24 + 0x78),local_838);
  }
  *(undefined1 *)(lVar23 + 0x80) = 1;
  FUN_1473707ca(param_1 + 0x6e8);
  *(undefined2 *)(param_1 + 0x6c0) = 0x101;
  *(undefined1 *)(param_1 + 0x165) = 1;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined4 *)(param_1 + 0x76) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0x3b3) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x3b7) = DAT_14ca84e1e;
  *(undefined1 *)(param_1 + 0x77) = DAT_14ca84f32;
  *(undefined1 *)((longlong)param_1 + 0x3b9) = DAT_14ca84f34;
  *(undefined4 *)(param_1 + 0x166) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x167) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb5c) = 0xffffffff;
  param_1[0x475] = -1;
  *(undefined4 *)(param_1 + 0x476) = 0xffffffff;
  param_1[0x537] = -1;
  *(undefined4 *)(param_1 + 0x538) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5fc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5fd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fec) = 0xffffffff;
  param_1[0x5fe] = -1;
  if (((param_1[0x33] != 0) && (0 < (int)DAT_14c760b84 && *(int *)((longlong)param_1 + 0x1c4) == 0))
     && (DAT_14c760b84 < *(uint *)(param_1[0x33] + 0x1c0))) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_9e0 != 0 && (local_9e0 & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_147386fd2(&local_5d8);
  FUN_147377214(local_9c8);
  if (local_378 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145711c9a(&local_8c8);
  if (local_868 != 0) {
    FUN_1400020a8();
  }
  if (local_858 != 0) {
    FUN_1400020a8();
  }
  FUN_140048db6(local_368);
  if ((local_60 ^ (ulonglong)auStack_aa8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143180054 FUN_143180054 body=56 status=ok
// SIG undefined FUN_143180054(void)

int FUN_143180054(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x40000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14318008c FUN_14318008c body=69 status=ok
// SIG undefined FUN_14318008c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318008c(void)

{
  _DAT_14ca77558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431800ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77560,1);
  return;
}



// FUNCTION 1431800d1 FUN_1431800d1 body=69 status=ok
// SIG undefined FUN_1431800d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431800d1(void)

{
  _DAT_14ca77570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143180113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77578,1);
  return;
}



// FUNCTION 143180116 FUN_143180116 body=69 status=ok
// SIG undefined FUN_143180116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143180116(void)

{
  _DAT_14ca77580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143180158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77588,1);
  return;
}



// FUNCTION 14318015b FUN_14318015b body=69 status=ok
// SIG undefined FUN_14318015b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318015b(void)

{
  _DAT_14ca77590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318019d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77598,1);
  return;
}



// FUNCTION 1431801a0 FUN_1431801a0 body=208 status=ok
// SIG undefined FUN_1431801a0(void)

void FUN_1431801a0(longlong param_1)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 *local_58;
  int *local_50;
  longlong local_48;
  int local_3c;
  code *local_38;
  undefined4 **local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    *(undefined1 *)(param_1 + 0x30) = 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    (**(code **)**(undefined8 **)(param_1 + 0x40))(*(undefined8 **)(param_1 + 0x40),0);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))();
    FUN_14018802a(*(undefined8 *)(param_1 + 0x38));
    local_3c = *(int *)(param_1 + 0x28) / DAT_14c760bf0;
    local_50 = &local_3c;
    local_30 = &local_50;
    local_58 = &local_28;
    local_28 = 0;
    local_20 = 0;
    local_38 = FUN_14318a946;
    local_60 = 0;
    local_48 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",DAT_14c760bf0,1);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143180272 FUN_143180272 body=609 status=ok
// SIG undefined FUN_143180272(void)

undefined8 FUN_143180272(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_38[2] = lVar4;
  *local_38 = (longlong)&PTR_FUN_14a355450;
  local_38[3] = param_1;
  local_38[4] = (longlong)FUN_1431801a0;
  if ((local_38 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*local_38 + 0x30))(), uVar2 = DAT_14c8673e0, cVar3 == '\0')) {
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_143180448;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      goto LAB_143180436;
    }
  }
  else {
    if ((DAT_14c8673ec < 1) &&
       (DAT_14c8673e8 = DAT_14c8673e8 + -1, DAT_14c8673e8 <= (int)DAT_14c8673e0)) {
      if (0 < (int)DAT_14c8673e0) {
        iVar5 = 0;
        do {
          if (((*(int *)(DAT_14c8673d8 + 8 + (longlong)iVar5 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(DAT_14c8673d8 + (longlong)iVar5 * 0x10),
              plVar1 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(&DAT_14c8673d8,iVar5);
            FUN_14005b248(&DAT_14c8673d8);
          }
          else {
            iVar5 = iVar5 + 1;
          }
        } while (iVar5 < (int)DAT_14c8673e0);
      }
      DAT_14c8673e8 = 2;
      if (2 < (int)(DAT_14c8673e0 * 2)) {
        DAT_14c8673e8 = DAT_14c8673e0 * 2;
      }
      if ((DAT_14c8673e8 < (int)uVar2) && (DAT_14c8673e4 != DAT_14c8673e0)) {
        FUN_14045812c();
      }
    }
    if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x38))(local_38,local_28);
    }
    uVar2 = DAT_14c8673e0;
    lVar6 = (longlong)(int)DAT_14c8673e0;
    DAT_14c8673e0 = DAT_14c8673e0 + 1;
    if (DAT_14c8673e4 < DAT_14c8673e0) {
      FUN_1447a71f6(&DAT_14c8673d8,uVar2);
    }
    lVar4 = DAT_14c8673d8;
    lVar6 = lVar6 * 0x10;
    *(undefined8 *)(DAT_14c8673d8 + lVar6) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar6) = 0;
    *(longlong **)(lVar4 + lVar6) = local_38;
    local_38 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar6) = local_30;
LAB_143180436:
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143180448:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1431804d4 FUN_1431804d4 body=265 status=ok
// SIG undefined FUN_1431804d4(void)

undefined8 FUN_1431804d4(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  do {
    if ((bVar2 & 1) != 0) {
      lVar8 = **(longlong **)(param_1 + 0x18);
      if (lVar8 != 0) {
        do {
          uVar7 = *(undefined8 *)(lVar8 + 8);
          lVar5 = *(longlong *)(param_1 + 0x18);
          *(longlong *)(param_1 + 0x18) = lVar8;
          *(undefined8 *)(lVar8 + 8) = 0;
          if (lVar5 != 0) {
            FUN_1400020a8();
          }
          iVar3 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
            FUN_14318ab80(param_1 + 0x20,iVar3);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8) = uVar7;
          lVar8 = **(longlong **)(param_1 + 0x18);
        } while (lVar8 != 0);
      }
      return 0;
    }
    while (((*(byte *)(param_1 + 0x30) & 1) == 0 &&
           (lVar8 = **(longlong **)(param_1 + 0x18), lVar8 != 0))) {
      plVar4 = *(longlong **)(lVar8 + 8);
      lVar5 = *(longlong *)(param_1 + 0x18);
      *(longlong *)(param_1 + 0x18) = lVar8;
      *(undefined8 *)(lVar8 + 8) = 0;
      if (lVar5 != 0) {
        FUN_1400020a8();
      }
      if (plVar4 != (longlong *)0x0) {
        puVar6 = (undefined8 *)*plVar4;
        if ((char)plVar4[1] == '\x01') {
          LOCK();
          piVar1 = (int *)(puVar6 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (puVar6 != (undefined8 *)0x0 && *piVar1 == 0) {
LAB_143180540:
            (**(code **)*puVar6)(puVar6,1);
          }
        }
        else if (puVar6 != (undefined8 *)0x0) goto LAB_143180540;
        FUN_1400020a8(plVar4);
      }
    }
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                (*(longlong **)(param_1 + 0x38),0xffffffff,0);
    }
    bVar2 = *(byte *)(param_1 + 0x30);
  } while( true );
}



// FUNCTION 1431805de FUN_1431805de body=115 status=ok
// SIG undefined FUN_1431805de(void)

void FUN_1431805de(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return;
  }
  uVar1 = FUN_1405d8a54(0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  puVar2 = (undefined8 *)FUN_1411b1052(param_1,L"GbxRHIGarbageThread",0,0,0xffffffffffffffff,0);
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  iVar3 = 4;
  if (DAT_14c760bec < 4) {
    iVar3 = DAT_14c760bec;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014318064e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,iVar3,*(code **)*puVar2);
  return;
}



// FUNCTION 143180652 FUN_143180652 body=132 status=ok
// SIG undefined FUN_143180652(void)

ulonglong FUN_143180652(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      FUN_1431805de(param_1);
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = param_2;
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = 0;
    puVar2[1] = puVar1;
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),puVar2 != (undefined8 *)0x0);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      *puVar1 = puVar2;
    }
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1431806d6 FUN_1431806d6 body=69 status=ok
// SIG undefined FUN_1431806d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431806d6(void)

{
  _DAT_14ca775b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143180718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca775c0,1);
  return;
}



// FUNCTION 14318071b FUN_14318071b body=69 status=ok
// SIG undefined FUN_14318071b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318071b(void)

{
  _DAT_14ca775d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318075d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca775d8,1);
  return;
}



// FUNCTION 143180760 FUN_143180760 body=69 status=ok
// SIG undefined FUN_143180760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143180760(void)

{
  _DAT_14ca775e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431807a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca775f0,1);
  return;
}



// FUNCTION 1431807a5 FUN_1431807a5 body=69 status=ok
// SIG undefined FUN_1431807a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431807a5(void)

{
  _DAT_14ca77600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431807e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77608,1);
  return;
}



// FUNCTION 1431807ea FUN_1431807ea body=69 status=ok
// SIG undefined FUN_1431807ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431807ea(void)

{
  _DAT_14ca77610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014318082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77618,1);
  return;
}



// FUNCTION 14318082f FUN_14318082f body=69 status=ok
// SIG undefined FUN_14318082f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318082f(void)

{
  _DAT_14ca77620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143180871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77628,1);
  return;
}



// FUNCTION 143180874 FUN_143180874 body=69 status=ok
// SIG undefined FUN_143180874(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143180874(void)

{
  _DAT_14ca77638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431808b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77640,1);
  return;
}



// FUNCTION 1431808b9 FUN_1431808b9 body=69 status=ok
// SIG undefined FUN_1431808b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431808b9(void)

{
  _DAT_14ca77650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431808fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77658,1);
  return;
}



// FUNCTION 1431808fe FUN_1431808fe body=69 status=ok
// SIG undefined FUN_1431808fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431808fe(void)

{
  _DAT_14ca77668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143180940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca77670,1);
  return;
}



// FUNCTION 143180943 FUN_143180943 body=187 status=ok
// SIG undefined FUN_143180943(void)

ulonglong FUN_143180943(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14ca77678;
  if (DAT_14ca84df4 == 0x10de) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar5 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar5 = 1;
    }
    if (0.0 < *(float *)(lVar2 + uVar5 * 4)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      uVar5 = FUN_14054d46e(&DAT_14c846b20,L"NoPSOCacheBootWait");
      return uVar5 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 1431809fe FUN_1431809fe body=333 status=ok
// SIG undefined FUN_1431809fe(void)

longlong FUN_1431809fe(undefined8 param_1,undefined8 *param_2)

{
  size_t _Size;
  int iVar1;
  void *_Dst;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  longlong local_48;
  uint local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _Dst = (void *)0x0;
  FUN_144bce340(0,0,0);
  local_3c = 0;
  iVar1 = FUN_144bcf210(param_1,0);
  if (-1 < iVar1) {
    _Size = (ulonglong)local_3c * 0xc;
    _Dst = (void *)FUN_14001cc68(_Size + (_Size == 0));
    memset(_Dst,0,_Size);
  }
  iVar1 = FUN_144bcf210(param_1,_Dst,&local_3c);
  if (((_Dst != (void *)0x0) && (-1 < iVar1)) && ((ulonglong)local_3c != 0)) {
    lVar2 = 0;
    do {
      if ((3 < *(uint *)((longlong)_Dst + lVar2)) && (7 < *(uint *)((longlong)_Dst + lVar2 + 4))) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)((longlong)_Dst + lVar2 + 8);
        *param_2 = *(undefined8 *)((longlong)_Dst + lVar2);
        break;
      }
      lVar2 = lVar2 + 0xc;
    } while ((ulonglong)local_3c * 0xc != lVar2);
  }
  local_48 = 0;
  FUN_143180b4c(local_78);
  iVar1 = FUN_144bcf280(param_1,&local_48,param_2,local_78);
  if ((iVar1 < 0) && (local_48 != 0)) {
    local_38 = local_48;
    FUN_144bcf310();
    local_48 = 0;
  }
  if (_Dst != (void *)0x0) {
    FUN_1400020a8(_Dst);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_48;
}



// FUNCTION 143180b4c FUN_143180b4c body=808 status=ok
// SIG undefined FUN_143180b4c(void)

undefined8 * FUN_143180b4c(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca77700) && (FUN_144b3d300(&DAT_14ca77700), DAT_14ca77700 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.DisableEngineAndAppRegistration",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14ca776f8 = 0;
    }
    else {
      DAT_14ca776f8 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14ca77700);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = DAT_14ca776f8;
  if (DAT_14ca776f8 != 0) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar6 = 0;
    }
    else if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar6 = 1;
    }
    if (*(int *)(lVar8 + uVar6 * 4) != 0) {
      return param_1;
    }
  }
  if (DAT_14c764000 != 0) {
    lVar8 = 0;
    puVar7 = &DAT_14c764000;
    uVar9 = DAT_14c764000;
    while( true ) {
      uVar1 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar8);
      uVar11 = (uint)uVar1;
      if (uVar9 != uVar1) break;
      if (uVar9 == 0) goto LAB_143180c51;
LAB_143180c1c:
      uVar9 = *(ushort *)((longlong)&DAT_14c764002 + lVar8);
      lVar8 = lVar8 + 2;
    }
    uVar10 = (uint)uVar9;
    uVar6 = (ulonglong)uVar10;
    if ((uVar1 | uVar9) < 0x80) {
      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6];
      uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar1]) goto LAB_143180c1c;
    }
    if (uVar10 != uVar11) goto LAB_143180c54;
  }
LAB_143180c51:
  puVar7 = &DAT_149dfb77a;
LAB_143180c54:
  *param_1 = puVar7;
  param_1[3] = L"Unreal Engine";
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  iVar2 = DAT_14c868710;
  *(uint *)(param_1 + 4) = (uint)*DAT_14c868708;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < iVar2) &&
     (FUN_144b3d300(&DAT_14c868710), iVar2 = DAT_14c868710, DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
    iVar2 = DAT_14c868710;
  }
  *(uint *)((longlong)param_1 + 0x24) = (uint)DAT_14c868708[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < iVar2) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  *(uint *)(param_1 + 5) = (uint)DAT_14c868708[2];
  return param_1;
}



// FUNCTION 143180e74 FUN_143180e74 body=121 status=ok
// SIG undefined FUN_143180e74(void)

undefined1 FUN_143180e74(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c [8];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    iVar1 = FUN_144bce240(param_1,0,local_1c,0xc);
    if ((-1 < iVar1) && (local_14 != 0)) {
      local_20 = 1;
      iVar1 = FUN_144bce1a0(param_1);
      if (-1 < iVar1) {
        DAT_14ca778e8 = 1;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14ca778e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143180eee FUN_143180eee body=88 status=ok
// SIG undefined FUN_143180eee(void)

void FUN_143180eee(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [48];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_144bce340(0,0x8086,param_1);
  if (-1 < iVar1) {
    FUN_143180b4c(local_40);
    FUN_144bce2e0(local_40);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143180f48 FUN_143180f48 body=1118 status=ok
// SIG undefined FUN_143180f48(void)

uint FUN_143180f48(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 *local_160;
  uint local_14c;
  longlong local_148;
  longlong *local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong *local_f8 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_94;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_108 = 0;
  uStack_100 = 0;
  iVar8 = *(int *)(param_1 + 0x1b8);
  local_148 = param_1;
  if ((longlong)iVar8 < 1) goto LAB_143181174;
  lVar13 = 0;
  bVar15 = false;
  do {
    lVar1 = *(longlong *)(*(longlong *)(local_148 + 0x1b0) + lVar13);
    plVar2 = *(longlong **)(lVar1 + 0x230);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    uVar12 = uStack_100;
    lVar14 = (longlong)(int)uStack_100;
    uVar6 = (int)uStack_100 + 1;
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar6);
    if (uStack_100._4_4_ < uVar6) {
      FUN_14631a580(&local_108,uVar12 & 0xffffffff);
    }
    *(longlong **)(local_108 + lVar14 * 8) = plVar2;
    plVar2 = *(longlong **)(lVar1 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      iVar7 = (**(code **)(*plVar2 + 0x68))();
      bVar15 = (bool)(bVar15 | iVar7 == 0);
    }
    lVar13 = lVar13 + 0x10;
  } while ((longlong)iVar8 * 0x10 != lVar13);
  if (!bVar15) goto LAB_143181174;
  plVar2 = (longlong *)(local_148 + 0x1f0);
  if (*(longlong **)(local_148 + 0x1f0) == (longlong *)0x0) {
LAB_14318104f:
    FUN_14736b0de(plVar2,0,*(undefined8 *)(**(longlong **)(local_148 + 0x1b0) + 0xb8));
  }
  else {
    iVar8 = (**(code **)(**(longlong **)(local_148 + 0x1f0) + 0x68))();
    if (iVar8 == 0) goto LAB_14318104f;
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    iVar8 = (**(code **)(*(longlong *)*plVar2 + 0x68))();
    if (iVar8 != 0) {
      FUN_14738cd21(local_108,uStack_100 & 0xffffffff);
      uVar12 = uStack_100 >> 0x20;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if ((int)uVar12 != 0) {
        FUN_14738cd52();
      }
      local_f8[0] = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
      iVar8 = 0;
      while( true ) {
        plVar3 = (longlong *)*plVar2;
        if (plVar10 != (longlong *)0x0) {
          local_f8[0] = (longlong *)0x0;
          (**(code **)(*plVar10 + 0x10))();
        }
        iVar7 = (**(code **)(*plVar3 + 0x38))(plVar3,iVar8,local_f8);
        uVar12 = uStack_100;
        if (iVar7 == -0x7785fffe) break;
        lVar13 = (longlong)(int)uStack_100;
        uVar6 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar6);
        if (uStack_100._4_4_ < uVar6) {
          FUN_14631a580(&local_108,uVar12 & 0xffffffff);
        }
        *(longlong **)(local_108 + lVar13 * 8) = local_f8[0];
        if (local_f8[0] == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          (**(code **)(*local_f8[0] + 8))();
          plVar10 = local_f8[0];
        }
        iVar8 = iVar8 + 1;
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
    }
  }
LAB_143181174:
  local_140 = (longlong *)(local_148 + 0x200);
  *(undefined4 *)(local_148 + 0x208) = 0;
  if (*(int *)(local_148 + 0x20c) != 0) {
    FUN_14736ab10(local_140,0);
  }
  uVar12 = (ulonglong)(int)uStack_100;
  if ((longlong)uVar12 < 1) {
    uVar6 = 0;
  }
  else {
    uVar11 = 0;
    local_14c = 0;
    local_138 = uVar12;
    do {
      plVar2 = *(longlong **)(local_108 + uVar11 * 8);
      iVar8 = 0;
      local_130 = uVar11;
      do {
        local_110 = (longlong *)0x0;
        iVar7 = (**(code **)(*plVar2 + 0x38))(plVar2,iVar8,&local_110);
        if (iVar7 == 0) {
          local_118 = (longlong *)0x0;
          iVar9 = (**(code **)*local_110)(local_110,&DAT_14a3445c0,&local_118);
          if (-1 < iVar9) {
            iVar9 = (**(code **)(*local_118 + 0xd8))(local_118,local_f8);
            if (iVar9 < 0) {
              local_128 = 0;
              uStack_120 = 0;
              local_160 = &local_128;
              local_168 = 0;
              FUN_145763094(iVar9,"Output6->GetDesc1(&OutputDesc)",
                            ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0x355);
            }
            uVar5 = local_b0;
            uVar4 = local_b8;
            bVar15 = local_94 == 0xc;
            iVar9 = *(int *)(local_148 + 0x208);
            lVar13 = (longlong)iVar9;
            *(uint *)(local_148 + 0x208) = iVar9 + 1U;
            if (*(uint *)(local_148 + 0x20c) < iVar9 + 1U) {
              FUN_146319bae(local_140,iVar9);
            }
            local_14c = CONCAT31((int3)(local_14c >> 8),(byte)local_14c | bVar15);
            lVar1 = *local_140;
            *(undefined8 *)(lVar1 + lVar13 * 0x14) = uVar4;
            *(undefined8 *)(lVar1 + 8 + lVar13 * 0x14) = uVar5;
            *(bool *)(lVar1 + 0x10 + lVar13 * 0x14) = bVar15;
          }
          if (local_118 != (longlong *)0x0) {
            (**(code **)(*local_118 + 0x10))();
          }
        }
        if (local_110 != (longlong *)0x0) {
          (**(code **)(*local_110 + 0x10))();
        }
        iVar8 = iVar8 + 1;
      } while (iVar7 == 0);
      uVar11 = local_130 + 1;
    } while (uVar11 != local_138);
    uVar12 = uStack_100 & 0xffffffff;
    uVar6 = local_14c;
  }
  FUN_14738cd21(local_108,uVar12);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar6 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431813a8 FUN_1431813a8 body=4288 status=ok
// SIG undefined FUN_1431813a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1431813a8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar23;
  byte bVar24;
  byte bVar25;
  ushort local_8e8 [128];
  int local_7e8;
  undefined4 local_7e4;
  ulonglong local_7d8;
  undefined4 local_7d0 [4];
  longlong local_7c0;
  longlong *local_7b8 [34];
  longlong local_6a8 [34];
  ulonglong local_598;
  undefined8 local_590 [3];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined2 local_55c;
  undefined1 local_55a;
  int local_558;
  longlong local_550 [34];
  ulonglong local_440;
  undefined4 local_438 [6];
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined2 local_404;
  undefined1 local_402;
  int local_400;
  longlong local_3f8 [34];
  ulonglong local_2e8;
  undefined8 local_2e0 [3];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined2 local_2ac;
  undefined1 local_2aa;
  int local_2a8;
  longlong local_298 [34];
  ulonglong local_188;
  undefined8 local_180 [3];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  int local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined4 *local_110;
  undefined8 *local_108;
  longlong *local_100;
  longlong *local_f8;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_d4;
  int local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  ulonglong local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  longlong *local_70;
  uint local_68;
  int local_64;
  char local_5e;
  undefined1 local_5d;
  char local_5c;
  byte local_5b;
  char local_5a;
  undefined1 local_59;
  
  uVar21 = 0;
  cVar10 = FUN_145db1694(10,0,0x3ad7);
  if (cVar10 == '\0') goto LAB_1431814b8;
  plVar23 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    local_b0 = (longlong *)0x0;
    uVar16 = FUN_14118da1c();
    DAT_14ca7768c = FUN_14054d46e(uVar16,L"quad_buffer_stereo");
    CreateDXGIFactory(&DAT_14a349300,&local_b0);
    if (local_b0 != (longlong *)0x0) {
      local_100 = (longlong *)0x0;
      (**(code **)*local_b0)(local_b0,&DAT_14a3445f0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      FUN_145af9b74(local_298);
      iVar12 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_298[0]);
      if (iVar12 < 1) {
        local_a8 = 0;
      }
      else {
        plVar17 = (longlong *)FUN_147364b50();
        local_a8 = (**(code **)(*plVar17 + 0x60))(plVar17);
      }
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar17 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GraphicsAdapter",1);
      if (plVar17 == (longlong *)0x0) {
        local_68 = (uint)(local_a8 == 0);
        local_9c = local_68 | 0xfffffffe;
      }
      else {
        lVar19 = *plVar17;
        puVar18 = (uint *)(**(code **)(lVar19 + 0x68))(plVar17);
        if (local_a8 == 0) {
          local_9c = 0xffffffff;
          local_68 = (uint)CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
          if (puVar18 != (uint *)0x0) {
            local_9c = *puVar18;
          }
        }
        else {
          local_9c = 0xfffffffe;
          local_68 = 0;
        }
      }
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_141369f9a(&DAT_14c846b20,L"graphicsadapter=",&local_9c);
      local_cc = local_9c;
      local_70 = (longlong *)0x0;
      memset(local_298,0,0x130);
      local_168 = 0xffffffff;
      uStack_160 = 0x100000000;
      local_158 = 0x500000001;
      local_150 = 1;
      local_14c = 0;
      local_14a = 0;
      local_148 = 0;
      memset(local_3f8,0,0x130);
      local_2c8 = 0xffffffff;
      uStack_2c0 = 0x100000000;
      local_2b8 = 0x500000001;
      local_2b0 = 1;
      local_2ac = 0;
      local_2aa = 0;
      local_2a8 = 0;
      memset(local_550,0,0x130);
      local_420 = 0xffffffff;
      uStack_418 = 0x100000000;
      local_410 = 0x500000001;
      local_408 = 1;
      local_404 = 0;
      local_402 = 0;
      local_400 = 0;
      memset(local_6a8,0,0x130);
      local_578 = 0xffffffff;
      uStack_570 = 0x100000000;
      local_568 = 0x500000001;
      local_560 = 1;
      local_55c = 0;
      local_55a = 0;
      local_558 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca77708) && (FUN_144b3d300(&DAT_14ca77708), DAT_14ca77708 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14ca77704 = FUN_14054d46e(&DAT_14c846b20,L"warp");
        _Init_thread_footer(&DAT_14ca77708);
      }
      local_5c = DAT_14ca77704;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca77710) && (FUN_144b3d300(&DAT_14ca77710), DAT_14ca77710 == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14ca7770c = FUN_14054d46e(&DAT_14c846b20,L"AllowSoftwareRendering");
        _Init_thread_footer(&DAT_14ca77710);
      }
      bVar24 = DAT_14ca7770c;
      local_d0 = 2;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      local_f8 = plVar23;
      FUN_141369f9a(&DAT_14c846b20,L"-gpupreference=",&local_d0);
      iVar12 = (uint)(local_d0 == 2) * 2;
      if (local_d0 == 1) {
        iVar12 = 1;
      }
      local_74 = FUN_14631b780();
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      local_5e = FUN_14054d46e(&DAT_14c846b20,L"novendordevice");
      local_5b = bVar24 ^ 1;
      local_68 = local_68 ^ 1;
      local_128 = local_7d0;
      local_108 = local_180;
      local_118 = local_2e0;
      local_110 = local_438;
      local_120 = local_590;
      uVar22 = 0;
LAB_1431818a1:
      plVar23 = local_70;
      if (local_70 != (longlong *)0x0) {
        local_70 = (longlong *)0x0;
        (**(code **)(*plVar23 + 0x10))();
      }
      if ((iVar12 == 0) || (local_100 == (longlong *)0x0)) {
        iVar13 = (**(code **)(*local_b0 + 0x38))(local_b0,uVar22,&local_70);
      }
      else {
        iVar13 = (**(code **)(*local_100 + 0xe8))(local_100,uVar22,iVar12,&DAT_14a343ec0,&local_70);
      }
      plVar17 = local_70;
      plVar23 = local_f8;
      if (iVar13 != -0x7785fffe) {
        if (local_70 != (longlong *)0x0) {
          memset(local_8e8,0,0x130);
          iVar13 = (**(code **)(*plVar17 + 0x40))(plVar17,local_8e8);
          if (iVar13 < 0) {
            local_138 = 0;
            uStack_130 = 0;
            FUN_145763094(iVar13,"TempAdapter->GetDesc(&AdapterDesc)",
                          ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0x474,0,
                          &local_138);
          }
          if (local_7e8 == 0x8086 && local_5e == '\0') {
            FUN_143180eee(local_7e4);
          }
          plVar23 = local_70;
          local_7b8[0] = (longlong *)0x0;
          FUN_1473896ab();
          iVar13 = Ordinal_101(plVar23,0xb000,&DAT_14a349310,local_7b8);
          if (-1 < iVar13) {
            local_ec = FUN_143185bff(local_7b8[0]);
            local_e8 = FUN_143185c81(local_7b8[0]);
            FUN_1473896ac(local_7b8[0],&local_e4,&local_e0);
            local_dc = (**(code **)(*local_7b8[0] + 0x38))();
            local_98 = local_dc;
            local_d8 = FUN_147389719(local_7b8[0]);
            local_59 = local_d8;
            uVar11 = FUN_143185d03(plVar23,local_7b8[0]);
            local_64 = local_ec;
            local_80 = local_e8;
            local_84 = local_e4;
            local_d7 = uVar11;
            uVar14 = FUN_143185e2f(local_ec,local_e8,local_e4,local_59,uVar11);
            local_d4 = uVar14;
            (**(code **)(*local_7b8[0] + 0x10))();
            iVar13 = 0;
            local_7c = uVar14;
            local_5d = uVar11;
            do {
              local_7b8[0] = (longlong *)0x0;
              iVar15 = (**(code **)(*local_70 + 0x38))(local_70,iVar13,local_7b8);
              if (local_7b8[0] != (longlong *)0x0) {
                (**(code **)(*local_7b8[0] + 0x10))();
              }
              iVar13 = iVar13 + 1;
            } while (-1 < iVar15);
            local_94 = FUN_147364bce(local_7e8);
            bVar24 = local_5b;
            if (local_94 != 0x1414) {
              FUN_140056680(&local_c8,local_8e8);
              FUN_142797d18(local_7b8,&local_c8,0);
              if (CONCAT44(uStack_c4,local_c8) != 0) {
                FUN_1400020a8();
              }
              FUN_14626e2bc(local_7b8);
              bVar24 = 0;
            }
            bVar25 = local_94 != 0x1414;
            memcpy(local_7b8,local_8e8,0x110);
            local_90 = local_7d8;
            local_c8 = *local_128;
            uStack_c4 = local_128[1];
            uStack_c0 = local_128[2];
            uStack_bc = local_128[3];
            local_b8 = *(undefined8 *)(local_128 + 4);
            local_78 = local_e0;
            local_5a = FUN_147387035(local_70);
            uVar11 = local_5d;
            uVar14 = local_98;
            if (local_5c == '\0') {
              bVar25 = bVar24;
            }
            lVar19 = 0;
            do {
              uVar3 = *(ushort *)((longlong)local_8e8 + lVar19);
              uVar4 = *(ushort *)((longlong)L"NVIDIA PerfHUD" + lVar19);
              if (uVar3 == uVar4) {
                if (uVar3 == 0) goto LAB_143181c22;
              }
              else {
                if (0x7f < (uVar4 | uVar3)) {
                  iVar13 = (uint)uVar3 - (uint)uVar4;
                  goto LAB_143181c24;
                }
                if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar4]) {
                  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[uVar4]
                  ;
                  goto LAB_143181c24;
                }
              }
              lVar19 = lVar19 + 2;
            } while( true );
          }
        }
        goto LAB_143181987;
      }
      if (local_cc == 0xffffffff) {
        if ((local_168._4_4_ == 0) || ((int)local_168 < 0)) {
          if ((local_420._4_4_ == 0) || ((int)local_420 < 0)) {
            if (local_2c8._4_4_ == 0) {
              puVar20 = (undefined8 *)FUN_14001cc68(0x860,0x10);
            }
            else {
              iVar12 = (int)local_2c8;
              puVar20 = (undefined8 *)FUN_14001cc68(0x860,0x10);
              if (-1 < iVar12) {
                plVar17 = local_3f8;
                goto LAB_14318229b;
              }
            }
            plVar17 = local_6a8;
          }
          else {
            puVar20 = (undefined8 *)FUN_14001cc68(0x860,0x10);
            plVar17 = local_550;
          }
        }
        else {
          puVar20 = (undefined8 *)FUN_14001cc68(0x860,0x10);
          plVar17 = local_298;
        }
LAB_14318229b:
        FUN_143157970(puVar20,plVar17);
        *puVar20 = &PTR_FUN_14a353fc0;
        plVar17 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar17[1] = (longlong)&DAT_100000001;
        *plVar17 = (longlong)&PTR_FUN_14a355590;
        plVar17[2] = (longlong)puVar20;
        lVar19 = (longlong)*(int *)(param_1 + 0x10);
        uVar22 = *(int *)(param_1 + 0x10) + 1;
        *(uint *)(param_1 + 0x10) = uVar22;
        if (*(uint *)(param_1 + 0x14) < uVar22) goto LAB_1431822ed;
      }
      else {
        puVar20 = (undefined8 *)FUN_14001cc68(0x860,0x10);
        FUN_143157970(puVar20,local_6a8);
        *puVar20 = &PTR_FUN_14a353fc0;
        plVar17 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar17[1] = (longlong)&DAT_100000001;
        *plVar17 = (longlong)&PTR_FUN_14a355590;
        plVar17[2] = (longlong)puVar20;
        lVar19 = (longlong)*(int *)(param_1 + 0x10);
        uVar22 = *(int *)(param_1 + 0x10) + 1;
        *(uint *)(param_1 + 0x10) = uVar22;
        plVar23 = local_f8;
        if (*(uint *)(param_1 + 0x14) < uVar22) {
LAB_1431822ed:
          FUN_14631a622(plVar23);
        }
      }
      lVar5 = *plVar23;
      uVar21 = lVar19 * 0x10;
      *(undefined8 **)(lVar5 + uVar21) = puVar20;
      *(longlong **)(lVar5 + 8 + uVar21) = plVar17;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
      if (((0 < *(int *)(param_1 + 0x10)) &&
          (uVar21 = *(ulonglong *)*plVar23, *(int *)(uVar21 + 0x20c) != 0)) &&
         (-1 < *(int *)(uVar21 + 0x208))) {
        DAT_14ca84df4 = *(undefined4 *)(uVar21 + 0x1d8);
        FUN_14020fad6(&DAT_14ca84da0,uVar21 + 0xd8);
        DAT_14ca84de8 = *(undefined4 *)(uVar21 + 0x1dc);
        _DAT_14ca84dec = *(undefined4 *)(uVar21 + 0x1e4);
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar17 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
      }
      if (local_100 != (longlong *)0x0) {
        (**(code **)(*local_100 + 0x10))();
      }
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_143181443;
  }
  else {
LAB_143181443:
    lVar19 = *(longlong *)*plVar23;
    if (((lVar19 != 0) && (*(int *)(lVar19 + 0x20c) != 0)) && (-1 < *(int *)(lVar19 + 0x208))) {
      if ((*(int *)(lVar19 + 0x21c) != 5) &&
         (uVar21 = CONCAT71((int7)(uVar21 >> 8),1), param_2 <= *(int *)(lVar19 + 0x21c)))
      goto LAB_1431814b8;
      local_298[0] = 0;
      local_298[1] = 0;
      FUN_14631b754();
      local_3f8[0] = 0;
      local_3f8[1] = 0;
      FUN_14631b754(param_2,local_3f8);
      if (local_3f8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_298[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar21 = 0;
LAB_1431814b8:
  return uVar21 & 0xffffffff;
LAB_143181c22:
  iVar13 = 0;
LAB_143181c24:
  if (((bVar25 == 0 && iVar13 != 0) && ((local_a8 != local_7c0 & (byte)local_68) == 0)) &&
     ((int)local_9c < 0 || uVar22 == local_9c)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar10 = FUN_14054d46e(&DAT_14c846b20,L"ForceZeroAdapters");
    if (-1 < (int)uVar22 && (local_64 != 0 && cVar10 == '\0')) {
      if (((local_74 != -1) && (iVar13 = FUN_147364bce(local_7e8), local_74 == iVar13)) &&
         ((local_168._4_4_ == 0 || ((int)local_168 < 0)))) {
        memcpy(local_298,local_7b8,0x110);
        puVar20 = local_108;
        local_188 = local_90;
        uVar16 = CONCAT44(uStack_bc,uStack_c0);
        *local_108 = CONCAT44(uStack_c4,local_c8);
        puVar20[1] = uVar16;
        puVar20[2] = local_b8;
        local_168 = CONCAT44(local_64,uVar22);
        uStack_160 = CONCAT44(local_84,local_80);
        local_158 = CONCAT44(local_7c,local_78);
        local_14c = CONCAT11(local_59,local_5a);
        local_150 = uVar14;
        local_14a = uVar11;
        local_148 = iVar12;
      }
      if (local_5a == '\0' && local_94 != 0x1414) {
        if ((local_2c8._4_4_ == 0) || ((int)local_2c8 < 0)) {
          memcpy(local_3f8,local_7b8,0x110);
          puVar20 = local_118;
          local_2e8 = local_90;
          uVar16 = CONCAT44(uStack_bc,uStack_c0);
          *local_118 = CONCAT44(uStack_c4,local_c8);
          puVar20[1] = uVar16;
          puVar20[2] = local_b8;
          local_2c8 = CONCAT44(local_64,uVar22);
          uStack_2c0 = CONCAT44(local_84,local_80);
          local_2b8 = CONCAT44(local_7c,local_78);
          local_2b0 = uVar14;
          local_2ac = CONCAT11(local_59,local_5a);
          local_2aa = uVar11;
          local_2a8 = iVar12;
        }
        if (local_440 < local_90) {
          memcpy(local_550,local_7b8,0x110);
          puVar6 = local_110;
          local_440 = local_90;
          *(undefined8 *)(local_110 + 4) = local_b8;
          uVar9 = uStack_bc;
          uVar8 = uStack_c0;
          uVar7 = uStack_c4;
          *puVar6 = local_c8;
          puVar6[1] = uVar7;
          puVar6[2] = uVar8;
          puVar6[3] = uVar9;
          local_420 = CONCAT44(local_64,uVar22);
          uStack_418 = CONCAT44(local_84,local_80);
          local_410 = CONCAT44(local_7c,local_78);
          local_408 = uVar14;
          local_404 = CONCAT11(local_59,local_5a);
          local_402 = uVar11;
          local_400 = iVar12;
          if ((local_74 != -1) && (iVar13 = FUN_147364bce(local_7e8), local_74 == iVar13)) {
            memcpy(local_298,local_550,0x158);
          }
        }
      }
      if ((local_578._4_4_ == 0) || ((int)local_578 < 0)) {
        memcpy(local_6a8,local_7b8,0x110);
        puVar20 = local_120;
        local_598 = local_90;
        uVar16 = CONCAT44(uStack_bc,uStack_c0);
        *local_120 = CONCAT44(uStack_c4,local_c8);
        puVar20[1] = uVar16;
        puVar20[2] = local_b8;
        local_578 = CONCAT44(local_64,uVar22);
        uStack_570 = CONCAT44(local_84,local_80);
        local_568 = CONCAT44(local_7c,local_78);
        local_55c = CONCAT11(local_59,local_5a);
        local_560 = uVar14;
        local_55a = uVar11;
        local_558 = iVar12;
      }
    }
  }
LAB_143181987:
  uVar22 = uVar22 + 1;
  goto LAB_1431818a1;
}



// FUNCTION 143182472 FUN_143182472 body=453 status=ok
// SIG undefined FUN_143182472(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143182472(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _DAT_14ca85070 = 0x9b000e009b;
  DAT_14ca85078 = 0x9b;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x20c) != 0)) && (-1 < *(int *)(lVar2 + 0x208))) &&
         (*(int *)(lVar2 + 0x21c) != 5 && 3 < *(int *)(lVar2 + 0x21c))) {
        DAT_14ca85078 = 0x31;
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0x10 != lVar5);
  }
  cVar3 = FUN_14631b5dd(&local_24);
  if (cVar3 != '\0') {
    param_2 = local_24;
  }
  DAT_14c760db4 = 3;
  if (param_2 < 5) {
    DAT_14c760db4 = param_2;
  }
  puVar1 = (undefined8 *)(param_1 + 8);
  DAT_14ca85550 = *(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2);
  if ((0 < *(int *)(param_1 + 0x10)) && (*(longlong *)*puVar1 != 0)) {
    pwVar6 = L"false";
    if (*(char *)(*(longlong *)*puVar1 + 0x224) != '\0') {
      pwVar6 = L"true";
    }
    FUN_140056680(local_38,pwVar6);
    FUN_140056680(local_48,L"RHI.IntegratedGPU");
    FUN_14152eab6(local_48,local_38);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    DAT_14ca84f11 = *(undefined1 *)(*(longlong *)*puVar1 + 0x224);
  }
  FUN_14631b720(local_38,DAT_14c760db4);
  uVar4 = FUN_14001cc68(0x210,0x10);
  FUN_146210c98(uVar4,puVar1,0);
  _DAT_14ca775a8 = uVar4;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14318263c FUN_14318263c body=7607 status=ok
// SIG undefined FUN_14318263c(void)

/* WARNING: Removing unreachable block (ram,0x000143182d27) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14318263c(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  float fVar3;
  undefined8 *puVar4;
  double dVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  LARGE_INTEGER LVar15;
  longlong *plVar16;
  HANDLE hObject;
  size_t sVar17;
  undefined8 uVar18;
  longlong lVar19;
  LARGE_INTEGER LVar20;
  ulonglong uVar21;
  LPCWSTR lpFileName;
  ushort uVar22;
  ulonglong uVar23;
  LARGE_INTEGER LVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  undefined2 *puVar28;
  ushort uVar29;
  ulonglong uVar30;
  LARGE_INTEGER *pLVar31;
  LARGE_INTEGER *pLVar32;
  wchar_t *pwVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 in_register_00001244 [12];
  float fVar38;
  undefined1 auStackY_288 [32];
  LARGE_INTEGER *local_208;
  ulonglong uStack_200;
  longlong local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  char local_1c9;
  LARGE_INTEGER local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  LARGE_INTEGER local_1a8;
  int local_1a0;
  LARGE_INTEGER local_198;
  ulonglong uStack_190;
  longlong local_188;
  ulonglong uStack_180;
  LARGE_INTEGER local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER *pLStack_158;
  undefined1 local_14c [4];
  LARGE_INTEGER local_148;
  undefined8 uStack_140;
  wchar_t *local_138;
  undefined8 uStack_130;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStackY_288;
  FUN_145826e34();
  iVar9 = (**(code **)(*DAT_14ca77628 + 0xb0))();
  if (iVar9 == 1) {
LAB_1431826c5:
    bVar36 = false;
  }
  else {
    bVar36 = true;
    if ((iVar9 == 2) && (DAT_14ca84df4 == 0x10de)) {
      iVar9 = (**(code **)(*DAT_14ca77658 + 0xb0))();
      if (iVar9 < 1) goto LAB_1431826c5;
      FUN_1461924c8(&local_1c8);
      FUN_142797d18(&local_148,&local_1c8,1);
      if (local_148.s.LowPart == 0x10de) {
        local_208 = (LARGE_INTEGER *)0x0;
        uStack_200 = 0;
        FUN_1403de9f2(&uStack_110,&local_208,&DAT_149e0635c,1);
        local_160.QuadPart = 0;
        uVar26 = local_208[1].s.LowPart;
        LVar24 = *local_208;
        pLStack_158 = (LARGE_INTEGER *)CONCAT44(pLStack_158._4_4_,uVar26);
        if ((longlong)(int)uVar26 == 0) {
          pLStack_158 = (LARGE_INTEGER *)(ulonglong)uVar26;
        }
        else {
          FUN_1446dd670(&local_160,uVar26,0);
          memcpy((void *)local_160,(void *)LVar24,(longlong)(int)uVar26 * 2);
        }
        cVar7 = FUN_1405b43cc(&local_160);
        if (cVar7 == '\0') {
          bVar36 = false;
        }
        else {
          LVar24 = local_160;
          if ((int)pLStack_158 == 0) {
            LVar24.QuadPart = (LONGLONG)&DAT_149dfb77a;
          }
          iVar12 = _wtoi((wchar_t *)LVar24);
          bVar36 = iVar9 <= iVar12;
        }
        if ((wchar_t *)local_160.QuadPart != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_208,uStack_200 & 0xffffffff);
        if (local_208 != (LARGE_INTEGER *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        bVar36 = false;
      }
      FUN_14626e2bc(&local_148);
      if ((wchar_t *)local_1c8.QuadPart != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  uVar26 = *(uint *)(DAT_14c868708 + 4) & 0x7fffffff;
  local_188 = 0;
  uStack_180 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar6 = FUN_14054d46e(&DAT_14c846b20,L"GbxSkipPSOVersionClear");
  FUN_140056680(&local_198,L"PSOEngineVersion.ini");
  if ((bVar36 | bVar6) == 0) {
    FUN_140b74eb8();
    FUN_140056680(&local_208);
    iVar9 = (int)uStack_200 + -1;
    if ((int)uStack_200 == 0) {
      iVar9 = 0;
    }
    local_148.QuadPart = (LONGLONG)local_208;
    uStack_140 = CONCAT44(uStack_140._4_4_,iVar9);
    local_138 = L"PSOEngineVersion.ini";
    uStack_130 = CONCAT44(uStack_130._4_4_,0x14);
    FUN_140bee87a(&local_1c8,&local_148,2);
    if ((wchar_t *)local_198.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_198 = local_1c8;
    uStack_190 = uStack_1c0;
    local_1c8.QuadPart = 0;
    uStack_1c0 = 0;
    if (local_208 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
LAB_1431827ee:
    uVar18 = FUN_145789b0e(1);
    FUN_140056680(&local_160,uVar18);
    local_178.QuadPart = 0;
    uStack_170 = 0;
    if ((1 < (int)pLStack_158) && (DAT_14ca84df4 == 0x10de)) {
      uVar21 = 0;
      FUN_14099d55c(DAT_14ca77648,&local_148,0);
      bVar34 = true;
      bVar35 = false;
      if (1 < (int)uStack_140) {
        local_1c8.QuadPart = 0;
        uStack_1c0 = 0;
        FUN_1403de9f2(&local_148,&local_1c8,&DAT_149e06196,1);
        iVar9 = (int)uStack_1c0;
        bVar34 = (longlong)(int)uStack_1c0 == 0;
        if (!bVar34) {
          pwVar33 = (wchar_t *)(local_1c8.QuadPart + (longlong)(int)uStack_1c0 * 0x10);
          LVar24 = local_1c8;
          do {
            local_208 = (LARGE_INTEGER *)0x0;
            uStack_200 = 0;
            FUN_1403de9f2(LVar24.QuadPart,&local_208,&DAT_149e0635c,1);
            uVar21 = uStack_170;
            pLVar31 = local_208;
            if (((int)uStack_200 == 2) && (local_208[3].s.LowPart == 9)) {
              LVar15.QuadPart = (LONGLONG)&DAT_149dfb77a;
              if ((int)pLStack_158 != 0) {
                LVar15 = local_160;
              }
              LVar20.QuadPart = (LONGLONG)&DAT_149dfb77a;
              if (local_208[1].s.LowPart != 0) {
                LVar20 = (LARGE_INTEGER)local_208->QuadPart;
              }
              lVar19 = 0;
              while( true ) {
                uVar22 = *(ushort *)(LVar20.QuadPart + lVar19);
                uVar23 = (ulonglong)uVar22;
                uVar29 = *(ushort *)(LVar15.QuadPart + lVar19);
                if (uVar22 != uVar29) break;
                if (uVar22 == 0) goto LAB_143182976;
LAB_143182940:
                lVar19 = lVar19 + 2;
              }
              if ((uVar29 | uVar22) < 0x80) {
                uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                uVar30 = (ulonglong)uVar29;
                uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
                if ((&DAT_149e05da0)[uVar23] == (&DAT_149e05da0)[uVar30]) goto LAB_143182940;
              }
              if (uVar22 != uVar29) goto LAB_143182a0d;
LAB_143182976:
              lVar19 = (longlong)(int)uStack_170;
              uVar10 = (int)uStack_170 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,uVar10);
              if (uStack_170._4_4_ < uVar10) {
                FUN_1447a1bd6(&local_178,uVar21 & 0xffffffff);
              }
              lVar25 = lVar19 * 0x10;
              pwVar1 = (wchar_t *)(local_178.QuadPart + lVar25);
              pwVar2 = (wchar_t *)(local_178.QuadPart + lVar25);
              pwVar2[0] = L'\0';
              pwVar2[1] = L'\0';
              pwVar2[2] = L'\0';
              pwVar2[3] = L'\0';
              DVar13 = pLVar31[3].s.LowPart;
              LVar15 = pLVar31[2];
              *(DWORD *)((wchar_t *)(local_178.QuadPart + 8) + lVar19 * 8) = DVar13;
              if ((longlong)(int)DVar13 == 0) {
                pwVar1[6] = L'\0';
                pwVar1[7] = L'\0';
              }
              else {
                FUN_1446dd670(pwVar1,DVar13,0);
                memcpy(*(void **)pwVar1,(void *)LVar15,(longlong)(int)DVar13 * 2);
              }
            }
LAB_143182a0d:
            FUN_1447a1747(local_208,uStack_200 & 0xffffffff);
            if (local_208 != (LARGE_INTEGER *)0x0) {
              FUN_1400020a8();
            }
            LVar24.QuadPart = LVar24.QuadPart + 0x10;
          } while ((wchar_t *)LVar24.QuadPart != pwVar33);
          uVar21 = uStack_1c0 & 0xffffffff;
        }
        bVar35 = iVar9 != 0;
        FUN_1447a1747(local_1c8.QuadPart,uVar21);
        if ((wchar_t *)local_1c8.QuadPart != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if ((!bVar35 && !bVar34) &&
         (FUN_1447a1747(local_178.QuadPart,uStack_170 & 0xffffffff),
         (wchar_t *)local_178.QuadPart != (wchar_t *)0x0)) {
        FUN_1400020a8();
      }
    }
    FUN_1410e5bda(&local_188,&local_178);
    FUN_1447a1747(local_178.QuadPart,uStack_170 & 0xffffffff);
    if ((wchar_t *)local_178.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    bVar35 = (int)uStack_180 != 0;
    if ((wchar_t *)local_160.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    bVar6 = bVar35 & ((bVar36 | bVar6) ^ 1);
  }
  else {
    cVar7 = FUN_143180943();
    if (cVar7 != '\0') goto LAB_1431827ee;
    bVar6 = 0;
  }
  lVar19 = local_188;
  iVar9 = (int)uStack_180;
  bVar8 = FUN_143180943();
  if ((iVar9 != 0 & bVar8) == 1) {
    local_148.QuadPart = 0;
    uStack_140 = 0;
    local_1c8.QuadPart = 0;
    uStack_1c0 = 0;
    local_208 = (LARGE_INTEGER *)0x0;
    uStack_200 = 0;
    FUN_142799c7a(&local_148,1,0,0);
    if ((longlong)(int)uStack_140 != 0) {
      pwVar33 = (wchar_t *)(local_148.QuadPart + (longlong)(int)uStack_140 * 0x10);
      LVar24 = local_148;
      do {
        FUN_1447a1747(local_208,uStack_200 & 0xffffffff);
        uVar21 = uStack_200 >> 0x20;
        uStack_200 = uStack_200 & 0xffffffff00000000;
        if ((int)uVar21 != 0) {
          FUN_1408be2c4(&local_208,0);
        }
        plVar16 = (longlong *)FUN_14054d1d4();
        puVar28 = &DAT_149dfb77a;
        if (*(int *)(LVar24.QuadPart + 8) != 0) {
          puVar28 = *(undefined2 **)LVar24;
        }
        (**(code **)(*plVar16 + 0x70))(plVar16,&local_208,puVar28,0);
        if ((longlong)(int)uStack_200 != 0) {
          pLVar32 = local_208 + (longlong)(int)uStack_200 * 2;
          pLVar31 = local_208;
          do {
            FUN_140c50e9c(&local_160,pLVar31,1);
            lVar25 = 0;
            do {
              iVar12 = *(int *)(lVar19 + 8 + lVar25);
              iVar27 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar27 = 0;
              }
              puVar28 = &DAT_149dfb77a;
              if (iVar12 != 0) {
                puVar28 = *(undefined2 **)(lVar19 + lVar25);
              }
              cVar7 = FUN_144a38768(&local_160,puVar28,iVar27);
              if (cVar7 != '\0') {
                puVar28 = &DAT_149dfb77a;
                if (*(int *)(LVar24.QuadPart + 8) != 0) {
                  puVar28 = *(undefined2 **)LVar24;
                }
                FUN_140002266(&local_178,L"%s\\%s",puVar28);
                uVar21 = uStack_1c0;
                lVar25 = (longlong)(int)uStack_1c0;
                uVar10 = (int)uStack_1c0 + 1;
                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar10);
                if (uStack_1c0._4_4_ < uVar10) {
                  FUN_1447a1bd6(&local_1c8,uVar21 & 0xffffffff);
                }
                pwVar1 = (wchar_t *)(local_1c8.QuadPart + lVar25 * 0x10);
                pwVar1[0] = L'\0';
                pwVar1[1] = L'\0';
                pwVar1[2] = L'\0';
                pwVar1[3] = L'\0';
                *(LARGE_INTEGER *)(local_1c8.QuadPart + lVar25 * 0x10) = local_178;
                local_178.QuadPart = 0;
                *(int *)(local_1c8.QuadPart + (lVar25 * 2 + 1) * 8) = (int)uStack_170;
                *(uint *)(local_1c8.QuadPart + lVar25 * 0x10 + 0xc) = uStack_170._4_4_;
                uStack_170 = 0;
                break;
              }
              lVar25 = lVar25 + 0x10;
            } while ((longlong)iVar9 * 0x10 != lVar25);
            if ((wchar_t *)local_160.QuadPart != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            pLVar31 = pLVar31 + 2;
          } while (pLVar31 != pLVar32);
        }
        LVar24.QuadPart = LVar24.QuadPart + 0x10;
      } while ((wchar_t *)LVar24.QuadPart != pwVar33);
    }
    lVar19 = DAT_14ca77678;
    iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
      uVar21 = 0;
    }
    else if (iVar9 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      uVar21 = (ulonglong)(DVar13 != DVar14);
    }
    else {
      uVar21 = 1;
    }
    fVar3 = *(float *)(lVar19 + uVar21 * 4);
    fVar38 = 0.0;
    if (0.0 <= fVar3) {
      fVar38 = fVar3;
    }
    QueryPerformanceCounter(&local_160);
    if ((longlong)(int)uStack_1c0 != 0) {
      dVar5 = (double)local_160.QuadPart * DAT_14c83f420;
      pwVar33 = (wchar_t *)(local_1c8.QuadPart + (longlong)(int)uStack_1c0 * 0x10);
      bVar36 = true;
      LVar24 = local_1c8;
LAB_143182e34:
      do {
        if (bVar36) {
          plVar16 = (longlong *)FUN_14054d1d4();
          puVar28 = &DAT_149dfb77a;
          if (*(int *)(LVar24.QuadPart + 8) != 0) {
            puVar28 = *(undefined2 **)LVar24;
          }
          cVar7 = (**(code **)(*plVar16 + 0x48))(plVar16,puVar28);
          if (cVar7 != '\0') {
            lpFileName = L"";
            if (*(int *)(LVar24.QuadPart + 8) != 0) {
              lpFileName = *(LPCWSTR *)LVar24;
            }
            hObject = CreateFileW(lpFileName,0xc0010000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                  (HANDLE)0x0);
            if (hObject == (HANDLE)0xffffffffffffffff) {
              QueryPerformanceCounter(&local_160);
              if (dVar5 + 16777216.0 + (double)fVar38 <=
                  (double)local_160.QuadPart * DAT_14c83f420 + 16777216.0) {
                bVar36 = false;
              }
              FUN_14000f986();
              goto LAB_143182e34;
            }
            CloseHandle(hObject);
          }
        }
        LVar24.QuadPart = LVar24.QuadPart + 0x10;
      } while ((wchar_t *)LVar24.QuadPart != pwVar33);
    }
    FUN_1447a1747(local_208,uStack_200 & 0xffffffff);
    if (local_208 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_1c8.QuadPart,uStack_1c0 & 0xffffffff);
    if ((wchar_t *)local_1c8.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_148.QuadPart,uStack_140 & 0xffffffff);
    if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  bVar6 = uVar26 != 0 & bVar6;
  if (bVar6 == 1) {
    plVar16 = (longlong *)FUN_14054d1d4();
    LVar24 = local_198;
    if ((int)uStack_190 == 0) {
      LVar24.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    cVar7 = (**(code **)(*plVar16 + 0x48))(plVar16,LVar24.QuadPart);
    bVar36 = true;
    if (cVar7 != '\0') {
      local_148.QuadPart = 0;
      uStack_140 = 0;
      LVar24.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if ((int)uStack_190 != 0) {
        LVar24 = local_198;
      }
      FUN_140f7cb10(&local_148,LVar24.QuadPart,0,0);
      LVar24.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if ((int)uStack_140 != 0) {
        LVar24 = local_148;
      }
      uVar10 = _wtoi((wchar_t *)LVar24);
      bVar36 = uVar10 != uVar26;
      if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    bVar36 = false;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_14054d46e(&DAT_14c846b20,L"clearPSODriverCache");
  if (cVar7 != '\0') {
    FUN_1447a1747(local_188,uStack_180 & 0xffffffff);
    uVar21 = uStack_180 >> 0x20;
    uStack_180 = uStack_180 & 0xffffffff00000000;
    if ((int)uVar21 != 0) {
      FUN_1408be2c4(&local_188,0);
    }
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar8 = FUN_14054d46e();
  if ((bVar8 | bVar36) == 1) {
    FUN_1456afa32(&local_1c8);
    uVar21 = uStack_180;
    lVar19 = local_188;
    if (1 < (int)uStack_1c0) {
      local_208 = (LARGE_INTEGER *)0x0;
      uStack_200 = CONCAT44(uStack_200._4_4_,(int)uStack_180);
      if ((int)uStack_180 == 0) {
        uStack_200 = uStack_180 & 0xffffffff;
      }
      else {
        FUN_140b856de(&local_208,uStack_180 & 0xffffffff,0);
        FUN_140b8566a(local_208,lVar19,uVar21 & 0xffffffff);
      }
      if (DAT_14ca84df4 == 0x1002) {
        local_148 = local_1c8;
        if ((int)uStack_1c0 == 0) {
          local_148.QuadPart = (LONGLONG)&DAT_149dfb77a;
        }
        uVar11 = 0;
        if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
          sVar17 = wcslen((wchar_t *)local_148);
          uVar11 = (undefined4)sVar17;
        }
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
        local_138 = L"AMD";
        uStack_130 = CONCAT44(uStack_130._4_4_,3);
        local_128 = L"DxCache";
        uStack_120 = 7;
        FUN_140bee87a(&local_160,&local_148,3);
        FUN_143185f02(&local_208,&local_160);
        local_148 = local_1c8;
        if ((int)uStack_1c0 == 0) {
          local_148.QuadPart = (LONGLONG)&DAT_149dfb77a;
        }
        uVar11 = 0;
        if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
          sVar17 = wcslen((wchar_t *)local_148);
          uVar11 = (undefined4)sVar17;
        }
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
        local_138 = L"AMD";
        uStack_130 = CONCAT44(uStack_130._4_4_,3);
        local_128 = L"DxcCache";
        uStack_120 = 8;
        FUN_140bee87a(&local_178,&local_148,3);
        if ((wchar_t *)local_160.QuadPart != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_160 = local_178;
        pLStack_158 = (LARGE_INTEGER *)uStack_170;
        FUN_143185f02(&local_208);
        local_148 = local_1c8;
        if ((int)uStack_1c0 == 0) {
          local_148.QuadPart = (LONGLONG)&DAT_149dfb77a;
        }
        uVar11 = 0;
        if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
          sVar17 = wcslen((wchar_t *)local_148);
          uVar11 = (undefined4)sVar17;
        }
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
        local_138 = L"..";
        uStack_130 = CONCAT44(uStack_130._4_4_,2);
        local_128 = L"LocalLow";
        uStack_120 = 8;
        local_118 = 0x49e3fad8;
        uStack_114 = 1;
        uStack_110 = 3;
        local_108 = L"DxCache";
        local_100 = 7;
        FUN_140bee87a(&local_178,&local_148,5);
        if ((wchar_t *)local_160.QuadPart != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_160 = local_178;
        pLStack_158 = (LARGE_INTEGER *)uStack_170;
        FUN_143185f02(&local_208);
        local_148 = local_1c8;
        if ((int)uStack_1c0 == 0) {
          local_148.QuadPart = (LONGLONG)&DAT_149dfb77a;
        }
        uVar11 = 0;
        if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
          sVar17 = wcslen((wchar_t *)local_148);
          uVar11 = (undefined4)sVar17;
        }
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
        local_138 = L"..";
        uStack_130 = CONCAT44(uStack_130._4_4_,2);
        local_128 = L"LocalLow";
        uStack_120 = 8;
        local_118 = 0x49e3fad8;
        uStack_114 = 1;
        uStack_110 = 3;
        local_108 = L"DxcCache";
        local_100 = 8;
        FUN_140bee87a(&local_178,&local_148,5);
        if ((wchar_t *)local_160.QuadPart != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_160 = local_178;
        pLStack_158 = (LARGE_INTEGER *)uStack_170;
        FUN_143185f02(&local_208,&local_160);
joined_r0x00014318353b:
        if ((wchar_t *)local_160.QuadPart != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (DAT_14ca84df4 == 0x8086) {
          local_148 = local_1c8;
          if ((int)uStack_1c0 == 0) {
            local_148.QuadPart = (LONGLONG)&DAT_149dfb77a;
          }
          uVar11 = 0;
          if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
            sVar17 = wcslen((wchar_t *)local_148);
            uVar11 = (undefined4)sVar17;
          }
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
          local_138 = L"..";
          uStack_130 = CONCAT44(uStack_130._4_4_,2);
          local_128 = L"LocalLow";
          uStack_120 = 8;
          local_118 = 0x49e3fb0a;
          uStack_114 = 1;
          uStack_110 = 5;
          local_108 = L"ShaderCache";
          local_100 = 0xb;
          FUN_140bee87a(&local_160,&local_148,5);
          FUN_143185f02(&local_208,&local_160);
          goto joined_r0x00014318353b;
        }
        if (DAT_14ca84df4 == 0x10de) {
          local_148 = local_1c8;
          if ((int)uStack_1c0 == 0) {
            local_148.QuadPart = (LONGLONG)&DAT_149dfb77a;
          }
          uVar11 = 0;
          if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
            sVar17 = wcslen((wchar_t *)local_148);
            uVar11 = (undefined4)sVar17;
          }
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
          local_138 = L"NVIDIA";
          uStack_130 = CONCAT44(uStack_130._4_4_,6);
          local_128 = L"DXCache";
          uStack_120 = 7;
          FUN_140bee87a(&local_160,&local_148,3);
          FUN_143185f02(&local_208,&local_160);
          local_148 = local_1c8;
          if ((int)uStack_1c0 == 0) {
            local_148.QuadPart = (LONGLONG)&DAT_149dfb77a;
          }
          uVar11 = 0;
          if ((wchar_t *)local_148.QuadPart != (wchar_t *)0x0) {
            sVar17 = wcslen((wchar_t *)local_148);
            uVar11 = (undefined4)sVar17;
          }
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
          local_138 = L"..";
          uStack_130 = CONCAT44(uStack_130._4_4_,2);
          local_128 = L"LocalLow";
          uStack_120 = 8;
          local_118 = 0x49e3fa86;
          uStack_114 = 1;
          uStack_110 = 6;
          local_108 = L"PerDriverVersion";
          local_100 = 0x10;
          local_f8 = L"DXCache";
          local_f0 = 7;
          FUN_140bee87a(&local_178,&local_148,6);
          FUN_143185f02(&local_208,&local_178);
          if ((wchar_t *)local_178.QuadPart != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          goto joined_r0x00014318353b;
        }
      }
      FUN_1447a1747(local_208);
      if (local_208 != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((wchar_t *)local_1c8.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((bVar6 & bVar36) == 1) {
    uVar18 = FUN_14054d1d4();
    local_1c8.QuadPart = 0;
    uStack_1c0 = 0;
    lVar19 = 0x1000000000;
    iVar9 = 0;
    puVar28 = (undefined2 *)((longlong)&uStack_130 + 6);
    do {
      lVar19 = lVar19 + -0x100000000;
      *puVar28 = *(undefined2 *)(&DAT_149e01586 + (ulonglong)(uVar26 % 10) * 2);
      iVar9 = iVar9 + 1;
      puVar28 = puVar28 + -1;
      bVar36 = 9 < uVar26;
      uVar26 = uVar26 / 10;
    } while (bVar36);
    LVar24 = local_198;
    if ((int)uStack_190 == 0) {
      LVar24.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    FUN_1400020e8(&local_1c8,(longlong)&local_148 + (lVar19 >> 0x1f),iVar9);
    local_1a8.s = local_1c8.s;
    local_1a0 = (int)uStack_1c0 + -1;
    if ((int)uStack_1c0 == 0) {
      local_1a0 = 0;
    }
    FUN_1415d54ec(&local_1a8,LVar24.QuadPart,0,uVar18);
    if (local_1c8.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  lVar19 = **(longlong **)(param_1 + 0x1b0);
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1c8.QuadPart = 0;
  uStack_1c0 = 0;
  if ((DAT_14ca84df4 == 0x1002) && (cVar7 = FUN_1462b4477(), cVar7 != '\0')) {
    agsInitialize(0x1800001,0,param_1 + 0x1c8,&local_1c8);
  }
  iVar9 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar9 != 0) {
    lVar25 = 0;
    do {
      FUN_14315902e();
      lVar25 = lVar25 + 0x10;
    } while ((longlong)iVar9 * 0x10 != lVar25);
  }
  if ((DAT_14ca775f8 != 0) &&
     (plVar16 = *(longlong **)(**(longlong **)(param_1 + 0x1b0) + 0x38), plVar16 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar16 + 0x208))(plVar16,3,0,0);
  }
  local_1c9 = '\0';
  if (DAT_14ca84df4 == 0x1002) {
    cVar7 = FUN_1462b4477();
    if ((cVar7 != '\0') && (*(longlong *)(param_1 + 0x1c8) != 0)) {
      if (0 < (longlong)(int)local_1b8) {
        lVar25 = 0;
        do {
          if ((*(int *)(lStack_1b0 + 0x14 + lVar25) == *(int *)(lVar19 + 0x1dc)) &&
             (*(int *)(lStack_1b0 + 0x10 + lVar25) == *(int *)(lVar19 + 0x1d8))) {
            iVar9 = *(int *)(lStack_1b0 + 8 + lVar25);
            if (iVar9 < 7 && iVar9 != 0) {
              _DAT_14ca84f14 = 0x4000000040;
            }
            break;
          }
          lVar25 = lVar25 + 0x78;
        } while ((longlong)(int)local_1b8 * 0x78 - lVar25 != 0);
      }
    }
    if ((DAT_14ca84df4 == 0x1002) && (cVar7 = FUN_1462b4477(), cVar7 != '\0')) {
      local_1c9 = (~*(uint *)(param_1 + 0x1d0) & 0x30) == 0;
    }
  }
  if (((0 < DAT_14ca775b0 & DAT_14ca84ef4) == 1) && (cVar7 = FUN_145db1694(), cVar7 == '\0')) {
    DAT_14ca84ef8 = 0;
    DAT_14ca84ef9 = 0;
    DAT_14ca84efa = 0;
    DAT_14ca84ef4 = 0;
    _DAT_14ca84ef5 = 0;
    DAT_14ca84ef7 = 0;
  }
  if (DAT_14ca84df4 != 0x10de) goto LAB_143183a7e;
  cVar7 = FUN_1462b4477();
  if (cVar7 != '\0') {
    iVar9 = FUN_1412969d0();
    if (iVar9 == 0) {
      FUN_142500970(*(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 8),0x14,&local_1c9);
      local_208 = (LARGE_INTEGER *)CONCAT44(local_208._4_4_,0xffffffff);
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_128 = (wchar_t *)0x0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_138 = (wchar_t *)0x0;
      uStack_130 = 0;
      local_148.QuadPart = 0;
      uStack_140 = 0;
      FUN_1424ff8e0(&local_208);
      if ((0 < (int)DAT_14ca775c8 & DAT_14ca84ef4 & (uint)local_208 < DAT_14ca775c8) != 0) {
LAB_1431839f4:
        DAT_14ca84ef8 = 0;
        DAT_14ca84ef9 = 0;
        DAT_14ca84efa = 0;
        DAT_14ca84ef4 = 0;
        _DAT_14ca84ef5 = 0;
        DAT_14ca84ef7 = 0;
        goto LAB_143183a2c;
      }
      if (((uint)local_208 < 0xb613 & DAT_14ca84ef7) == 1) {
        DAT_14ca84ef7 = 0;
      }
    }
    if (DAT_14ca84ef4 != 0) {
      lVar25 = 0;
      do {
        if (*(int *)((longlong)&DAT_14a353fe0 + lVar25) == *(int *)(lVar19 + 0x1dc))
        goto LAB_1431839f4;
        lVar25 = lVar25 + 4;
      } while (lVar25 != 0x48);
    }
  }
LAB_143183a2c:
  if (DAT_14ca84df4 == 0x10de) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    lVar25 = (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.D3D12.Submission.MaxExecuteBatchSize.Async",1);
    if (lVar25 != 0) {
      FUN_140635eb8(lVar25,1,0xd000000,0);
    }
  }
LAB_143183a7e:
  if (((DAT_14ca84ef4 == 1) && (DAT_14ca84df4 == 0x1002)) &&
     (uStack_1c0 != 0 && *(longlong *)(param_1 + 0x1c8) != 0)) {
    if ((DAT_14ca775e0 < 1) || (iVar9 = agsCheckDriverVersion(), iVar9 != 1)) {
      if ((DAT_14ca84ef4 & 1) != 0) {
        DAT_14ca84ef9 = (byte)(*(uint *)(param_1 + 0x1d0) >> 0xb) & 1;
      }
    }
    else {
      DAT_14ca84ef8 = 0;
      DAT_14ca84ef9 = 0;
      DAT_14ca84efa = 0;
      DAT_14ca84ef4 = 0;
      _DAT_14ca84ef5 = 0;
      DAT_14ca84ef7 = 0;
    }
  }
  if ((DAT_14ca84df4 == 0x8086) && (cVar7 = FUN_1462b4477(), cVar7 != '\0')) {
    if (DAT_14ca778e8 == '\x01') {
      local_1c9 = '\x01';
      memset(&local_148,0,0xc0);
      uVar18 = FUN_1431809fe(*(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 8),&local_148);
      *(undefined8 *)(param_1 + 0x1d8) = uVar18;
    }
    if ((DAT_14ca84f63 != '\0') || (DAT_14ca84f64 == '\x01')) {
      _DAT_14ca84f63 = 0;
    }
  }
  DAT_14ca84d8c = 0x5a0;
  DAT_14ca84ec8 = 0;
  if ((DAT_14c760bf4 == '\x01') && (DAT_14ca84df4 == 0x1002)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca77688) && (FUN_144b3d300(&DAT_14ca77688), DAT_14ca77688 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca77680 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VolumetricCloud.DisableCompute",1);
      _Init_thread_footer(&DAT_14ca77688);
    }
    if (DAT_14ca77680 != 0) {
      FUN_140635eb8(DAT_14ca77680,1,0xd000000,0);
    }
  }
  DAT_14ca773f8 = *(undefined8 *)(lVar19 + 0x1e8);
  DAT_14ca77400 = *(undefined8 *)(lVar19 + 0x1f0);
  DAT_14ca77408 = *(undefined8 *)(lVar19 + 0x1f8);
  FUN_14016c8d4();
  local_1d8 = (longlong *)0x0;
  puVar4 = *(undefined8 **)(**(longlong **)(param_1 + 0x1b0) + 0x230);
  iVar9 = (**(code **)*puVar4)(puVar4,&DAT_14a1e7f70);
  if (iVar9 < 0) {
    local_1e8 = 0;
    uStack_1e0 = 0;
    FUN_145763094(iVar9,
                  "GetAdapter().GetAdapter()->QueryInterface(IID_PPV_ARGS(DxgiAdapter3.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0x866);
  }
  iVar9 = (**(code **)(*local_1d8 + 0x70))(local_1d8,0,0,&local_208);
  if (iVar9 < 0) {
    FUN_145763094(iVar9,
                  "DxgiAdapter3->QueryVideoMemoryInfo(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, &LocalVideoMemoryInfo)"
                  ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0x868);
  }
  lVar19 = (longlong)((float)local_208 * 0.9);
  if (0 < DAT_14ca84ed0) {
    auVar37._4_12_ = in_register_00001244;
    auVar37._0_4_ = (float)lVar19 * (float)DAT_14ca84ed0 * 0.01 * 0.0009765625 * 0.0009765625;
    auVar37 = roundss(ZEXT816(0),auVar37,0xb);
    DAT_14ca84ec8 = (longlong)auVar37._0_4_ << 0x14;
  }
  DAT_14ca77410 = lVar19;
  *(longlong *)(param_1 + 0x18) = DAT_14ca84ec8;
  if (local_1f8 < lVar19) {
    lVar19 = local_1f8;
  }
  iVar9 = (**(code **)(*local_1d8 + 0x78))(local_1d8,0,0,lVar19);
  if (iVar9 < 0) {
    FUN_145763094(iVar9,
                  "DxgiAdapter3->SetVideoMemoryReservation(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, FMath::Min((int64)LocalVideoMemoryInfo.AvailableForReservation, FD3D12GlobalStats::GTotalGraphicsMemory))"
                  ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0x881);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca77718) && (FUN_144b3d300(&DAT_14ca77718), DAT_14ca77718 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nod3dasync");
    DAT_14ca77714 = bVar6 ^ 1;
    _Init_thread_footer(&DAT_14ca77718);
  }
  DAT_14ca84e06 = DAT_14ca77714;
  if (DAT_14ca77714 == 1) {
    DAT_14ca84e6b = 1;
  }
  if ((DAT_14ca84e0a == '\0') && (local_1c9 == '\x01')) {
    DAT_14ca84e0a = '\x01';
  }
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_128 = (wchar_t *)0x0;
  uStack_120 = 0;
  uStack_11c = 0;
  local_138 = (wchar_t *)0x0;
  uStack_130 = 0;
  local_148.QuadPart = 0;
  uStack_140 = 0;
  plVar16 = *(longlong **)(**(longlong **)(param_1 + 0x1b0) + 8);
  iVar9 = (**(code **)(*plVar16 + 0x68))(plVar16,0,&local_148,0x3c);
  if (-1 < iVar9) {
    DAT_14ca85068 = 1 < uStack_140._4_4_;
    DAT_14ca85069 = 2 < uStack_140._4_4_;
  }
  local_148.QuadPart = 0;
  uStack_140 = 0;
  local_138 = (wchar_t *)((ulonglong)local_138 & 0xffffffff00000000);
  plVar16 = *(longlong **)(**(longlong **)(param_1 + 0x1b0) + 8);
  iVar9 = (**(code **)(*plVar16 + 0x68))(plVar16,0x1e,&local_148,0x14);
  if (1 < DAT_14c760da4) {
    DAT_14ca84e23 = 0;
  }
  DAT_14ca84e1e = *(undefined1 *)(**(longlong **)(param_1 + 0x1b0) + 0xc4);
  DAT_14ca84f23 = FUN_143180f48(param_1);
  DAT_14ca84f4c._0_1_ = 0x12;
  FUN_140056680(&local_178,&DAT_14a3502a2);
  local_160.QuadPart = (LONGLONG)&local_168;
  local_168 = DAT_14cae4098;
  pLStack_158 = &local_178;
  FUN_1406e263c(&DAT_14cae4048,local_14c,&local_160,0);
  if ((wchar_t *)local_178.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  DAT_14ca84eb0 = 1;
  DAT_14ca84ef1 = 1;
  _DAT_14ca84f5e = 1;
  DAT_14ca84f60 = DAT_14ca84f65;
  DAT_14ca84f61 = 0;
  _DAT_14ca84e2c = 0x101;
  if (((iVar9 == 0) && ((int)uStack_140 != 0)) &&
     (cVar7 = FUN_144a12f44(DAT_14ca85550), cVar7 != '\0')) {
    DAT_14ca84f33 = local_148.s.LowPart != 0;
    DAT_14ca84f32 = 1;
    if ((int)uStack_140 == 2) {
      _DAT_14ca84f34 = 0x101;
      _DAT_14ca84f40 = (undefined1 *)CONCAT44(uStack_140._4_4_,uStack_140._4_4_);
      _DAT_14ca84f38 = (undefined1 *)CONCAT44(uStack_140._4_4_,uStack_140._4_4_);
      _DAT_14ca84f48 = 0x3901;
    }
  }
  else {
    DAT_14ca84f32 = 0;
    _DAT_14ca84f34 = _DAT_14ca84f34 & 0xff00;
    _DAT_14ca84f40 = &DAT_100000001;
    _DAT_14ca84f38 = &DAT_100000001;
  }
  pLStack_158 = (LARGE_INTEGER *)((ulonglong)pLStack_158 & 0xffffffff00000000);
  local_160.QuadPart = 0;
  plVar16 = *(longlong **)(**(longlong **)(param_1 + 0x1b0) + 8);
  iVar9 = (**(code **)(*plVar16 + 0x68))(plVar16,0x29,&local_160,0xc);
  bVar6 = DAT_14ca84e27;
  if (-1 < iVar9) {
    bVar6 = 0;
    if (((int)pLStack_158 != 0) && (bVar6 = 0, local_160.s.HighPart != 0)) {
      if (*(longlong *)(**(longlong **)(param_1 + 0x1b0) + 0x68) == 0) {
        bVar6 = 0;
      }
      else {
        bVar6 = FUN_1431843f4(*(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 8));
        bVar8 = FUN_1431843f4(*(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 0x68));
        bVar6 = bVar8 ^ bVar6 ^ 1;
      }
    }
  }
  DAT_14ca84e27 = bVar6;
  FUN_1457bb726(param_1);
  iVar9 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar9 != 0) {
    lVar19 = *(longlong *)(param_1 + 0x1b0);
    lVar25 = 0;
    bVar6 = DAT_14ca813bd;
    do {
      if ((bVar6 & 1) == 0) {
        FUN_145ec3bf4(*(undefined8 *)(lVar19 + lVar25));
        DAT_14ca813bc = DAT_14ca813c0 != 0;
        DAT_14ca813bd = 1;
        bVar6 = 1;
      }
      lVar25 = lVar25 + 0x10;
    } while ((longlong)iVar9 * 0x10 != lVar25);
  }
  FUN_145ec9638();
  DAT_14ca84d88 = 1;
  if (local_1d8 != (longlong *)0x0) {
    (**(code **)(*local_1d8 + 0x10))();
  }
  if ((wchar_t *)local_198.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_188,uStack_180 & 0xffffffff);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStackY_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431843f4 FUN_1431843f4 body=127 status=ok
// SIG undefined FUN_1431843f4(void)

undefined8 FUN_1431843f4(undefined8 *param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  IID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  HVar1 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_28);
  if (-1 < HVar1) {
    local_30 = (longlong *)0x0;
    iVar2 = (**(code **)*param_1)(param_1,&local_28,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
    uVar3 = 1;
    if (-1 < iVar2) goto LAB_143184456;
  }
  uVar3 = 0;
LAB_143184456:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143184474 FUN_143184474 body=781 status=ok
// SIG undefined FUN_143184474(void)

ulonglong FUN_143184474(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined8 *local_1d0;
  char local_1b9;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  uint local_1a4;
  longlong *local_1a0;
  longlong *local_198;
  undefined1 local_190 [304];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_198 = (longlong *)0x0;
  local_1b9 = param_3;
  iVar4 = FUN_14736b01c(**(undefined8 **)(param_1 + 0x1b0));
  if ((iVar4 < 0) || (iVar4 = (**(code **)(*local_198 + 0x40))(local_198,local_190), iVar4 < 0)) {
LAB_143184738:
    uVar11 = 0;
  }
  else {
    do {
      local_1a0 = (longlong *)0x0;
      iVar5 = (**(code **)(*local_198 + 0x38))(local_198,0,&local_1a0);
      bVar2 = false;
      iVar4 = 2;
      if (iVar5 != -0x7785fffe) {
        if (iVar5 < 0) {
LAB_143184560:
          bVar2 = false;
          iVar4 = 1;
        }
        else {
          local_1a4 = 0;
          local_1d8 = 0;
          iVar4 = (**(code **)(*local_1a0 + 0x40))(local_1a0,0x1c,0,&local_1a4);
          bVar2 = true;
          if (iVar4 == -0x7785fffe) {
            iVar4 = 3;
          }
          else {
            if (iVar4 == -0x7785ffde) goto LAB_143184560;
            iVar4 = 0;
            if ((ulonglong)local_1a4 != 0) {
              lVar7 = FUN_14001cc68((ulonglong)local_1a4 * 0x1c,0x10);
              local_1d8 = lVar7;
              iVar4 = (**(code **)(*local_1a0 + 0x40))(local_1a0,0x1c,0,&local_1a4);
              if (iVar4 < 0) {
                local_1b8 = 0;
                uStack_1b0 = 0;
                local_1d0 = &local_1b8;
                local_1d8 = 0;
                FUN_145763094(iVar4,"Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)",
                              ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp",0x9a2);
              }
              if (local_1a4 != 0) {
                uVar11 = 0;
                cVar10 = local_1b9;
                uVar6 = local_1a4;
                do {
                  uVar1 = *(uint *)(lVar7 + uVar11 * 0x1c);
                  if (uVar1 < 0x28f1) {
                    puVar8 = (undefined4 *)(uVar11 * 0x1c + lVar7);
                    if ((uint)puVar8[1] < 0x28f1) {
                      if (cVar10 == '\0') {
                        if ((uint)(puVar8[3] * 0x28f0) < (uint)puVar8[2]) goto LAB_143184697;
                        iVar4 = (int)param_2[1];
                      }
                      else {
                        iVar4 = (int)param_2[1];
                        if (0 < (longlong)iVar4) {
                          lVar9 = 0;
                          do {
                            if ((*(uint *)(*param_2 + lVar9) == uVar1) &&
                               (*(uint *)(*param_2 + 4 + lVar9) == puVar8[1])) goto LAB_143184697;
                            lVar9 = lVar9 + 0xc;
                          } while ((longlong)iVar4 * 0xc != lVar9);
                        }
                      }
                      *(uint *)(param_2 + 1) = iVar4 + 1U;
                      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
                        FUN_146319c42(param_2);
                        cVar10 = local_1b9;
                      }
                      lVar9 = *param_2;
                      lVar3 = (longlong)iVar4 * 0xc;
                      *(undefined4 *)(lVar9 + 8 + lVar3) = 0;
                      *(undefined8 *)(lVar9 + lVar3) = 0;
                      lVar9 = *param_2;
                      *(undefined4 *)(lVar9 + lVar3) = *puVar8;
                      *(undefined4 *)(lVar9 + 4 + lVar3) = puVar8[1];
                      *(uint *)(lVar9 + 8 + lVar3) = (uint)puVar8[2] / (uint)puVar8[3];
                      uVar6 = local_1a4;
                    }
                  }
LAB_143184697:
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar6);
              }
              iVar4 = 0;
              if (lVar7 != 0) {
                FUN_1400020a8(lVar7);
              }
            }
          }
        }
      }
      if (local_1a0 != (longlong *)0x0) {
        (**(code **)(*local_1a0 + 0x10))();
      }
      if ((iVar4 != 0) && (iVar4 != 3)) {
        if (iVar4 != 2) goto LAB_143184738;
        break;
      }
    } while (!bVar2);
    uVar11 = CONCAT71((int7)((ulonglong)param_2 >> 8),0 < (int)param_2[1]);
  }
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 143184782 FUN_143184782 body=996 status=ok
// SIG undefined FUN_143184782(void)

undefined8 * FUN_143184782(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  LPVOID _Dst;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined2 *local_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca77690) && (FUN_144b3d300(&DAT_14ca77690), DAT_14ca77690 == -1)) {
    local_98 = CONCAT44(local_98._4_4_,0x16);
    FUN_14577453c(L"FD3D12DiagnosticBuffer");
    _Init_thread_footer(&DAT_14ca77690);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca77694) && (FUN_144b3d300(&DAT_14ca77694), DAT_14ca77694 == -1)) {
    local_98 = CONCAT44(local_98._4_4_,0x24);
    FUN_14577453c(L"FD3D12Device::CreateDiagnosticBuffer");
    _Init_thread_footer(&DAT_14ca77694);
  }
  FUN_140002266(&local_48,L"DiagnosticBuffer (Queue: 0x%p)",param_2);
  lVar7 = DAT_14ca76e58;
  iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
    uVar12 = 0;
  }
  else if (iVar8 == 1) {
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar9 != DVar10);
  }
  else {
    uVar12 = 1;
  }
  iVar8 = *(int *)(lVar7 + uVar12 * 4);
  iVar13 = 0;
  if (0 < iVar8) {
    iVar13 = iVar8;
  }
  plVar3 = *(longlong **)(*(longlong *)(*param_2 + 0x10) + 0x20);
  if (plVar3 != (longlong *)0x0) {
    uVar12 = (ulonglong)(iVar13 + 0x600);
    _Dst = VirtualAlloc((LPVOID)0x0,uVar12,0x3000,4);
    *param_1 = _Dst;
    if (_Dst != (LPVOID)0x0) {
      memset(_Dst,0,uVar12);
      local_50 = 0;
      iVar8 = (**(code **)(*plVar3 + 0x180))(plVar3,*param_1,&DAT_14a349268);
      if (-1 < iVar8) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x88,0x10);
        puVar4 = (undefined4 *)*param_2;
        uVar2 = *puVar4;
        *puVar11 = &PTR_FUN_149e002e8;
        *(undefined4 *)(puVar11 + 1) = 0;
        puVar11[2] = puVar4;
        *(undefined4 *)(puVar11 + 3) = uVar2;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar2;
        *puVar11 = &PTR_FUN_14a34ce88;
        puVar11[4] = 0;
        puVar11[5] = 0;
        *(undefined1 *)(puVar11 + 6) = 1;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        *(undefined4 *)((longlong)puVar11 + 0x7c) = 1;
        *(undefined2 *)(puVar11 + 0x10) = 0x100;
        puVar5 = (undefined8 *)param_1[1];
        if (puVar5 != puVar11) {
          param_1[1] = puVar11;
          if (puVar11 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
            UNLOCK();
          }
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar5 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
        }
        local_d8 = local_d8 & 0xffffff00;
        FUN_141033122(param_1[1],local_50,L"DiagnosticBuffer",1);
        local_b0 = local_48;
        if (local_40 == 0) {
          local_b0 = &DAT_149dfb77a;
        }
        uVar6 = *(undefined8 *)(*param_2 + 0x10);
        puVar5 = (undefined8 *)param_1[2];
        if (puVar5 != (undefined8 *)0x0) {
          param_1[2] = 0;
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        uStack_90 = 0;
        uStack_60 = 0;
        local_98 = 1;
        uStack_80 = 0x1000100000001;
        local_78 = 0x100000000;
        uStack_70 = 0x100000000;
        local_68 = 0x10;
        local_a8 = 0;
        local_c0 = 0;
        local_c8 = 0x7fffffff;
        local_d0 = 0;
        local_d8 = 0x400;
        local_b8 = param_1 + 2;
        local_88 = uVar12;
        iVar8 = FUN_1400f3752(uVar6,&local_98,param_1[1],0);
        if (-1 < iVar8) {
          param_1[3] = *(undefined8 *)(param_1[2] + 0x40);
          goto LAB_143184a8d;
        }
        puVar5 = (undefined8 *)param_1[1];
        if (puVar5 != (undefined8 *)0x0) {
          param_1[1] = 0;
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      VirtualFree((LPVOID)*param_1,0,0x8000);
      *param_1 = 0;
    }
  }
LAB_143184a8d:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143184b68 FUN_143184b68 body=290 status=ok
// SIG undefined FUN_143184b68(void)

void FUN_143184b68(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  DWORD DVar5;
  HANDLE hFindFile;
  undefined1 auStack_288 [32];
  _WIN32_FIND_DATAW local_268;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = param_3;
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(0,*param_2,iVar4);
  *(undefined1 *)(param_1 + 8) = 1;
  if (*(char *)((longlong)param_1 + 0x42) == '\0') {
    *(undefined2 *)(param_1 + 8) = 0x100;
    FUN_1473870d2(param_1,0x10000,1);
  }
  else {
    hFindFile = FindFirstFileW((LPCWSTR)*param_1,&local_268);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      DVar5 = GetLastError();
      if (DVar5 == 2) {
        *(undefined1 *)(param_1 + 8) = 0;
      }
    }
    else {
      FindClose(hFindFile);
    }
    bVar1 = *(byte *)(param_1 + 8);
    FUN_1473870d2(param_1,0x10000,1);
    if (((bVar1 & 1) != 0) && (puVar2 = (undefined8 *)param_1[2], puVar2 != (undefined8 *)0x0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(puVar2 + 1);
      uVar3 = *puVar2;
      *(undefined8 *)((longlong)param_1 + 0x44) = uVar3;
      if (((int)uVar3 != 0xb) && (1 < *(int *)(param_1 + 1))) {
        FUN_143184c8c(param_1);
        FUN_143184b68(param_1,param_1,*(undefined1 *)((longlong)param_1 + 0x42));
      }
      goto LAB_143184c67;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xb;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
LAB_143184c67:
  if ((local_18 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143184c8c FUN_143184c8c body=93 status=ok
// SIG undefined FUN_143184c8c(void)

void FUN_143184c8c(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xb;
  if (*(char *)((longlong)param_1 + 0x42) == '\x01') {
    if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
      UnmapViewOfFile((LPCVOID)param_1[5]);
    }
    if ((HANDLE)param_1[4] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[4]);
    }
    if ((HANDLE)param_1[3] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[3]);
    }
                    /* WARNING: Could not recover jumptable at 0x000143184cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteFileW((LPCWSTR)*param_1);
    return;
  }
  return;
}



// FUNCTION 143184ce9 FUN_143184ce9 body=69 status=ok
// SIG undefined FUN_143184ce9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143184ce9(void)

{
  _DAT_14ca77698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143184d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca776a0,1);
  return;
}



// FUNCTION 143184d2e FUN_143184d2e body=69 status=ok
// SIG undefined FUN_143184d2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143184d2e(void)

{
  _DAT_14ca776b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143184d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca776b8,1);
  return;
}



// FUNCTION 143184d74 FUN_143184d74 body=1646 status=ok
// SIG undefined FUN_143184d74(void)

void FUN_143184d74(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  if (((*(char *)(param_1 + 0x109) == '\0') && (*(char *)(param_1 + 0x169) == '\0')) &&
     ((*(char *)(param_1 + 0x1f0) != '\x01' || (*(char *)(param_1 + 0x1c9) == '\0')))) {
    *(undefined8 *)(param_1 + 0x100) = 0xc;
    *(undefined8 *)(param_1 + 0x160) = 0xc;
    *(ulonglong *)(param_1 + 0x1c0) = (ulonglong)*(uint *)(param_1 + 0x1d4) + 0xc;
    local_98 = CONCAT44(local_98._4_4_,*(int *)(param_1 + 0x110));
    if (*(int *)(param_1 + 0x110) != 0) {
      lVar1 = param_1 + 200;
      iVar10 = 0;
      do {
        FUN_1473870d2(lVar1,0x300,0);
        if (*(char *)(param_1 + 0x109) == '\0') {
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100));
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 0x300;
        }
        else {
          puVar8 = (undefined8 *)0x0;
        }
        *puVar8 = 0;
        FUN_1473870d2(lVar1,8,0);
        if (*(char *)(param_1 + 0x109) == '\0') {
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x100) + *(longlong *)(param_1 + 0xd8));
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
          if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
            FUN_1473870d2(lVar1,0xf0,0);
            if (*(char *)(param_1 + 0x109) == '\0') {
              lVar4 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100);
              *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 0xf0;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = FUN_1406bfa6a(*(longlong *)(param_1 + 8) + 0x238,lVar4);
            puVar8[1] = *(undefined8 *)(lVar4 + 8);
          }
        }
        if ((*(int *)(puVar8 + 0x43) != 0) &&
           (FUN_147387280(lVar1,puVar8 + 0x42), *(int *)(puVar8 + 0x43) != 0)) {
          lVar4 = 0;
          uVar9 = 0;
          do {
            FUN_1473870d2(lVar1,4,0);
            if (*(char *)(param_1 + 0x109) == '\0') {
              *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 4;
            }
            FUN_147387280(lVar1,puVar8[0x42] + lVar4);
            uVar9 = uVar9 + 1;
            lVar4 = lVar4 + 0x20;
          } while (uVar9 < *(uint *)(puVar8 + 0x43));
        }
        lVar4 = puVar8[3];
        if ((lVar4 != 0) && (FUN_1473870d2(lVar1,lVar4,0), *(char *)(param_1 + 0x109) == '\0')) {
          puVar8[2] = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100);
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + lVar4;
        }
        lVar4 = puVar8[5];
        if ((lVar4 != 0) && (FUN_1473870d2(lVar1,lVar4,0), *(char *)(param_1 + 0x109) == '\0')) {
          puVar8[4] = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100);
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + lVar4;
        }
        lVar4 = puVar8[7];
        if ((lVar4 != 0) && (FUN_1473870d2(lVar1,lVar4,0), *(char *)(param_1 + 0x109) == '\0')) {
          puVar8[6] = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100);
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + lVar4;
        }
        lVar4 = puVar8[9];
        if ((lVar4 != 0) && (FUN_1473870d2(lVar1,lVar4,0), *(char *)(param_1 + 0x109) == '\0')) {
          puVar8[8] = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100);
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + lVar4;
        }
        lVar4 = puVar8[0xb];
        if ((lVar4 != 0) && (FUN_1473870d2(lVar1,lVar4,0), *(char *)(param_1 + 0x109) == '\0')) {
          puVar8[10] = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x100);
          *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + lVar4;
        }
        FUN_147387a60(param_1,puVar8 + 1);
        if (*(char *)(param_1 + 0x109) != '\0') break;
        uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        if (DAT_14ca81480 != 0) {
          uVar2 = 1;
        }
        if (uVar2 == *(uint *)(puVar8 + 0x4b)) {
          local_90 = 0;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14a3555b0;
          local_88[0] = FUN_14318acda;
          local_60 = param_1;
          FUN_1406c28c8(param_1,puVar8,&local_90,local_88);
          if (local_88[0] != (code *)0x0) {
            pppuVar5 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar5 = &local_68;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != (int)local_98);
    }
    iVar10 = *(int *)(param_1 + 0x170);
    if (iVar10 != 0) {
      lVar1 = param_1 + 0x128;
      local_98 = -0x651e95c4d06fbfb1;
      do {
        FUN_1473870d2(lVar1,0x60,0);
        if (*(char *)(param_1 + 0x169) == '\0') {
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x160));
          *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 0x60;
        }
        else {
          puVar8 = (undefined8 *)0x0;
        }
        *puVar8 = 0;
        FUN_1473870d2(lVar1,8,0);
        if (*(char *)(param_1 + 0x169) == '\0') {
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x160) + *(longlong *)(param_1 + 0x138));
          *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 8;
          if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
            FUN_1473870d2(lVar1,0xf0,0);
            if (*(char *)(param_1 + 0x169) == '\0') {
              lVar4 = *(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x160);
              *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 0xf0;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = FUN_1406bfa6a(*(longlong *)(param_1 + 8) + 0x238,lVar4);
            puVar8[1] = *(undefined8 *)(lVar4 + 8);
          }
        }
        lVar4 = puVar8[3];
        if ((lVar4 != 0) && (FUN_1473870d2(lVar1,lVar4,0), *(char *)(param_1 + 0x169) == '\0')) {
          puVar8[2] = *(longlong *)(param_1 + 0x138) + *(longlong *)(param_1 + 0x160);
          *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + lVar4;
        }
        FUN_147387ac8(param_1,puVar8 + 1);
        if (*(char *)(param_1 + 0x169) != '\0') break;
        uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        if (DAT_14ca81480 != 0) {
          uVar2 = 1;
        }
        if (uVar2 == *(uint *)(puVar8 + 4)) {
          lVar4 = puVar8[9];
          uVar9 = CONCAT44(*(undefined4 *)(puVar8 + 7),uVar2) * -0x651e95c4d06fbf81;
          uVar6 = puVar8[8] * -0x4b6d499041670d8d + lVar4;
          uVar7 = (lVar4 + 0x9ae16a3b2f90404fU << 0x2e | lVar4 + 0x9ae16a3b2f90404fU >> 0x12) +
                  puVar8[8] * -0x4b6d499041670d8d + uVar9;
          uVar9 = ((uVar9 << 0x22 | uVar9 >> 0x1e) +
                   (uVar6 * 0x200000 | uVar6 >> 0x2b) + lVar4 * local_98 ^ uVar7) *
                  -0x651e95c4d06fbf81;
          uVar9 = (uVar9 >> 0x2f ^ uVar7 ^ uVar9) * -0x651e95c4d06fbf81;
          puVar8[10] = (uVar9 >> 0x2f ^ uVar9) * -0x651e95c4d06fbf81;
          local_90 = 0;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14a3555d0;
          local_88[0] = FUN_14318add0;
          local_60 = param_1;
          FUN_140676ce4(param_1,puVar8,&local_90,local_88);
          if (local_88[0] != (code *)0x0) {
            pppuVar5 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar5 = &local_68;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431853e4 FUN_1431853e4 body=745 status=ok
// SIG undefined FUN_1431853e4(void)

void FUN_1431853e4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  piVar11 = DAT_14ca776a8;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar12 + 0xc60);
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (iVar4 == 0x40000002) {
    uVar8 = (undefined4)CONCAT71(uVar9,*DAT_14ca776a8 != 0);
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      uVar8 = (undefined4)CONCAT71(uVar9,*DAT_14ca776a8 != 0);
    }
    else if (iVar4 == 2) {
      uVar8 = (undefined4)CONCAT71(uVar9,*DAT_14ca776a8 != 0);
      iVar4 = 2;
    }
    else {
      uVar7 = 1;
      if (iVar4 == 1) {
        uVar5 = FUN_140ad26c0();
        unaff_RBP = (ulonglong)uVar5;
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(uVar5 != DVar6);
        iVar4 = *(int *)(lVar12 + 0xc60);
      }
      uVar8 = (undefined4)CONCAT71((int7)(unaff_RBP >> 8),piVar11[uVar7] != 0);
      if (iVar4 == 0x40000002) goto LAB_143185490;
    }
    lVar12 = DAT_14ca776c0;
    if (((DAT_14c86a9f8 & 1) != 0) && (iVar4 != 2)) {
      if (iVar4 == 1) {
        uVar5 = FUN_140ad26c0();
        piVar11 = (int *)(ulonglong)uVar5;
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(uVar5 != DVar6);
      }
      else {
        uVar7 = 1;
      }
      goto LAB_1431854c7;
    }
  }
LAB_143185490:
  uVar7 = 0;
  lVar12 = DAT_14ca776c0;
LAB_1431854c7:
  bVar13 = *(int *)(lVar12 + uVar7 * 4) != 0;
  *(bool *)(param_1 + 0x1f0) = bVar13;
  FUN_143184b68(param_1 + 200,param_2,uVar8);
  FUN_143184b68(param_1 + 0x128,param_3,uVar8);
  lVar12 = param_1 + 0x188;
  FUN_143184b68(lVar12,param_4,CONCAT71((int7)((ulonglong)piVar11 >> 8),bVar13) & 0xffffffff);
  *(undefined8 *)(param_1 + 0x100) = 0xc;
  *(undefined8 *)(param_1 + 0x160) = 0xc;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x1d4);
  *(ulonglong *)(param_1 + 0x1c0) = uVar7 + 0xc;
  if ((*(char *)(param_1 + 0x1f0) == '\x01') &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10), plVar2 != (longlong *)0x0)) {
    if (uVar7 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x198) + 0xc;
    }
    plVar1 = (longlong *)(param_1 + 0x1e8);
    plVar3 = *(longlong **)(param_1 + 0x1e8);
    if (plVar3 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    local_68 = plVar1;
    iVar4 = (**(code **)(*plVar2 + 0x160))(plVar2,lVar10,uVar7,&DAT_14a3536c0);
    if (iVar4 < 0 && iVar4 != -0x7785fffc) {
      if (1 < *(int *)(param_1 + 400)) {
        FUN_143184c8c(lVar12);
        FUN_143184b68(lVar12,lVar12,*(undefined1 *)(param_1 + 0x1ca));
      }
      plVar3 = (longlong *)*plVar1;
      if (plVar3 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      local_68 = plVar1;
      iVar4 = (**(code **)(*plVar2 + 0x160))(plVar2,0,0,&DAT_14a3536c0);
      if (iVar4 < 0) {
        local_60 = &local_58;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = (longlong *)0x0;
        FUN_145763094(iVar4,
                      "pDevice1->CreatePipelineLibrary(nullptr, 0, IID_PPV_ARGS(PipelineLibrary.GetInitReference()))"
                      ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12PipelineState.cpp",0x22c);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000143185637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  return;
}



// FUNCTION 1431856ce FUN_1431856ce body=69 status=ok
// SIG undefined FUN_1431856ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431856ce(void)

{
  _DAT_14ca776c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143185710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca776d0,1);
  return;
}



// FUNCTION 143185713 FUN_143185713 body=69 status=ok
// SIG undefined FUN_143185713(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143185713(void)

{
  _DAT_14ca776d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143185755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca776e0,1);
  return;
}



// FUNCTION 143185758 FUN_143185758 body=504 status=ok
// SIG undefined FUN_143185758(void)

void FUN_143185758(longlong param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  uint local_5c;
  undefined1 auStack_58 [30];
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) goto LAB_1431858f1;
  uVar6 = 0;
  if (param_3 < 7) {
    if ((3U >> (param_3 & 0x1f) & 1) == 0) {
      if ((0x18U >> (param_3 & 0x1f) & 1) == 0) {
        uVar6 = 0;
        if ((0x60U >> (param_3 & 0x1f) & 1) != 0) {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0xc;
      }
    }
    else {
      uVar6 = 0x11;
      if (param_2 != 2) {
        uVar6 = 0;
      }
    }
  }
  if (*(uint *)(param_1 + 0x50) == uVar6) goto LAB_1431858f1;
  local_5c = 0;
  iVar2 = (**(code **)(*plVar1 + 0x128))(plVar1,uVar6);
  if (uVar6 < 0xc) {
    if (uVar6 == 0) {
      pwVar5 = L"RGB_FULL_G22_NONE_P709";
      goto LAB_1431858b7;
    }
    if (uVar6 == 1) {
      pwVar5 = L"RGB_FULL_G10_NONE_P709";
      goto LAB_1431858b7;
    }
LAB_143185827:
    local_78[0] = 0;
    local_78[1] = 0;
    lVar3 = 0x1000000000;
    iVar7 = 0;
    puVar4 = &local_3a;
    uVar9 = (ulonglong)uVar6;
    do {
      lVar3 = lVar3 + -0x100000000;
      uVar8 = (uint)uVar9;
      *puVar4 = *(undefined2 *)(&DAT_149e01586 + (ulonglong)(uVar8 + (int)(uVar9 / 10) * -10) * 2);
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + -1;
      uVar9 = uVar9 / 10;
    } while (9 < uVar8);
    FUN_1400020e8(local_78,auStack_58 + (lVar3 >> 0x1f),iVar7);
  }
  else {
    if (uVar6 == 0xc) {
      pwVar5 = L"RGB_FULL_G2084_NONE_P2020";
    }
    else {
      if (uVar6 != 0x11) goto LAB_143185827;
      pwVar5 = L"RGB_FULL_G22_NONE_P2020";
    }
LAB_1431858b7:
    FUN_140056680(local_78,pwVar5);
  }
  if ((-1 < iVar2) && ((local_5c & 1) != 0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x130))
                      (*(longlong **)(param_1 + 0x48),uVar6);
    if (iVar2 < 0) {
      local_90 = &local_88;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      FUN_145763094(iVar2,"SwapChain4->SetColorSpace1(NewColorSpace)",
                    ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport.cpp",0x220);
    }
    *(uint *)(param_1 + 0x50) = uVar6;
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
LAB_1431858f1:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143185952 FUN_143185952 body=95 status=ok
// SIG undefined FUN_143185952(void)

undefined8 * FUN_143185952(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a351f50;
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (param_1[4] != 0) goto LAB_14318598d;
  while ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    param_1[3] = *(undefined8 *)param_1[3];
LAB_14318598d:
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431859b2 FUN_1431859b2 body=510 status=ok
// SIG undefined FUN_1431859b2(void)

void FUN_1431859b2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar12 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x90) + lVar12 * 8);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
      lVar6 = *(longlong *)(lVar5 + lVar12 * 8);
      if (lVar6 != lVar4) {
        *(longlong *)(lVar5 + lVar12 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar6 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar6 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar6 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = lVar6;
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar8;
                  LOCK();
                  bVar13 = plVar8 != DAT_14ca843c0;
                  plVar7 = plVar11;
                  if (bVar13) {
                    plVar8 = DAT_14ca843c0;
                    plVar7 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar7;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar7;
                  LOCK();
                  bVar13 = plVar7 != DAT_14ca843c8;
                  plVar8 = plVar11;
                  if (bVar13) {
                    plVar7 = DAT_14ca843c8;
                    plVar8 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar8;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x98));
  }
  FUN_14488e164(*(longlong *)(param_1 + 0x10) + 0x80,param_1 + 0x18);
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x90);
    plVar8 = plVar7 + *(int *)(param_1 + 0x98);
    do {
      lVar12 = *plVar7;
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar12 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar13) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
  }
  FUN_144902b9c(param_1 + 0x18);
  lVar12 = *(longlong *)(param_1 + 0x10);
  if (lVar12 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar12 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar12 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar12 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar12;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar8;
            LOCK();
            bVar13 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar11;
            if (bVar13) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar11 = (longlong)plVar7;
            LOCK();
            bVar13 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar11;
            if (bVar13) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  return;
}



// FUNCTION 143185bff FUN_143185bff body=129 status=ok
// SIG undefined FUN_143185bff(void)

undefined4 FUN_143185bff(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puStack_40 = &local_28;
  local_28 = 0xc1000000c200;
  uStack_20 = 0xb1000000c000;
  local_18 = 0xb000;
  local_38 = 0;
  local_48 = 5;
  iVar1 = (**(code **)(*param_1 + 0x68))(0,2,&local_48,0x18);
  uVar2 = 0xb000;
  if (-1 < iVar1) {
    uVar2 = (undefined4)local_38;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143185c81 FUN_143185c81 body=129 status=ok
// SIG undefined FUN_143185c81(void)

undefined4 FUN_143185c81(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = 0;
  do {
    local_2c = *(undefined4 *)((longlong)&DAT_14a353f80 + lVar3);
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,7,&local_2c,4);
    uVar2 = local_2c;
    if (-1 < iVar1) goto LAB_143185ce2;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x20);
  uVar2 = 0x51;
LAB_143185ce2:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143185d03 FUN_143185d03 body=299 status=ok
// SIG undefined FUN_143185d03(void)

ulonglong FUN_143185d03(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 local_22c [8];
  int local_224;
  longlong local_220;
  undefined1 local_218 [192];
  undefined1 local_158 [256];
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  (**(code **)(*param_2 + 0x68))(param_2,0x25,&local_248,0x18);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((int)uStack_240 == 0) {
    uVar4 = 0;
    memset(local_158,0,0x130);
    (**(code **)(*param_1 + 0x40))(param_1);
    iVar2 = FUN_147364bce(local_58);
    if (iVar2 == 0x8086) {
      cVar1 = FUN_1462b4477();
      uVar4 = 0;
      if (cVar1 != '\0') {
        memset(local_218,0,0xc0);
        lVar3 = FUN_1431809fe(param_2,local_218);
        if (lVar3 != 0) {
          iVar2 = FUN_144bce240(lVar3,0,local_22c,0xc);
          uVar4 = CONCAT71((int7)((ulonglong)local_22c >> 8),local_224 != 0 && -1 < iVar2);
          local_220 = lVar3;
          FUN_144bcf310();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143185e2f FUN_143185e2f body=210 status=ok
// SIG undefined FUN_143185e2f(void)

byte FUN_143185e2f(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = 5;
  if (0x65 < param_2 && 0xbfff < param_1) {
    iVar3 = FUN_141434525(0x31,L"BindlessResources",&DAT_14ca83b38);
    iVar4 = 2;
    if (iVar3 != 1) {
      iVar3 = FUN_141434525(0x31,L"BindlessSamplers",&DAT_14ca83b58);
      iVar4 = (iVar3 == 1) + 1;
    }
    if (((param_4 != '\0') && (param_5 != '\0')) && (iVar4 < param_3)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar1 = FUN_14054d46e(&DAT_14c846b20,L"ForceDisableSM6");
      bVar1 = bVar1 | 4;
    }
  }
  bVar2 = 3;
  if (bVar1 != 5) {
    bVar2 = bVar1;
  }
  if (param_1 < 0xb000) {
    bVar2 = bVar1;
  }
  return bVar2;
}



// FUNCTION 143185f02 FUN_143185f02 body=680 status=ok
// SIG undefined FUN_143185f02(void)

void FUN_143185f02(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  ulonglong *local_98;
  longlong *local_90;
  longlong local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (ulonglong *)0x0;
  uStack_50 = 0;
  local_90 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  (**(code **)(*local_90 + 0x70))(local_90,&local_58,puVar9,0);
  uVar12 = 0;
  if ((longlong)(int)uStack_50 != 0) {
    puVar10 = local_58 + (longlong)(int)uStack_50 * 2;
    puVar11 = local_58;
    do {
      puVar9 = &DAT_149dfb77a;
      if ((int)puVar11[1] != 0) {
        puVar9 = (undefined2 *)*puVar11;
      }
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar8 = (undefined2 *)*param_2;
      }
      FUN_140002266(&local_68,L"%s\\%s",puVar8,puVar9);
      if ((int)param_1[1] == 0) {
LAB_143186046:
        puVar9 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar9 = local_68;
        }
        local_a8 = 1;
        (**(code **)(*local_90 + 0x30))(local_90,puVar9,0,1);
      }
      else {
        FUN_140c50e9c(&local_78,&local_68,1);
        puVar9 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar9 = local_78;
        }
        bVar3 = false;
        iVar4 = local_70 + -1;
        if (local_70 == 0) {
          iVar4 = 0;
        }
        lVar5 = (longlong)iVar4;
        if (7 < iVar4) {
          iVar4 = 8;
        }
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        FUN_140056680(&local_88,(longlong)puVar9 + (lVar5 * 2 - (ulonglong)(uint)(iVar4 * 2)));
        if ((longlong)(int)param_1[1] != 0) {
          plVar7 = (longlong *)*param_1;
          plVar6 = plVar7 + (longlong)(int)param_1[1] * 2;
LAB_14318609b:
          if ((int)plVar7[1] == local_80) {
            bVar3 = true;
            local_98 = puVar10;
            if (1 < local_80) {
              lVar5 = 0;
              do {
                uVar1 = *(ushort *)(*plVar7 + lVar5);
                uVar2 = *(ushort *)(local_88 + lVar5);
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar4 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_143186121;
                  }
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                  goto code_r0x00014318611e;
                }
                lVar5 = lVar5 + 2;
              } while( true );
            }
          }
          else {
            if ((int)plVar7[1] + local_80 != 1) goto LAB_1431860b1;
            bVar3 = true;
          }
        }
LAB_143186025:
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (bVar3) goto LAB_143186046;
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar10);
    uVar12 = (int)uStack_50;
  }
  FUN_1447a1747(local_58,uVar12);
  if (local_58 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014318611e:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_143186121:
  if (iVar4 == 0) goto LAB_143186025;
LAB_1431860b1:
  plVar7 = plVar7 + 2;
  bVar3 = false;
  if (plVar7 == plVar6) goto LAB_143186025;
  goto LAB_14318609b;
}



// FUNCTION 1431861ab FUN_1431861ab body=361 status=ok
// SIG undefined FUN_1431861ab(void)

void FUN_1431861ab(undefined8 param_1,longlong param_2,longlong param_3)

{
  short *psVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  short sVar8;
  undefined1 auStack_f8 [32];
  short *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  short local_48 [16];
  undefined2 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar5 = *(ulonglong *)(param_3 + 0x50);
  lVar6 = 0;
  do {
    uVar5 = uVar5 << 4 | uVar5 >> 0x3c;
    uVar7 = (uint)uVar5 & 0xf;
    sVar3 = (short)uVar7;
    sVar8 = sVar3 + 0x30;
    if (9 < uVar7) {
      sVar8 = sVar3 + 0x37;
    }
    local_48[lVar6] = sVar8;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  local_d8 = local_48;
  local_28 = 0;
  psVar1 = *(short **)(param_2 + 0x18);
  local_a8 = &local_a0;
  local_a0 = 0x12;
  local_9c = *(undefined4 *)(param_3 + 0x20);
  local_98 = 0;
  local_90 = *(undefined8 *)(param_3 + 8);
  local_88 = 6;
  local_80 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 0x18);
  local_70 = 0x13;
  local_68 = *(undefined4 *)(param_3 + 0x28);
  uStack_64 = *(undefined4 *)(param_3 + 0x2c);
  uStack_60 = *(undefined4 *)(param_3 + 0x30);
  uStack_5c = *(undefined4 *)(param_3 + 0x34);
  local_b0 = 0x48;
  iVar4 = FUN_143186315(local_68,psVar1,&local_b0,*(undefined8 *)(param_3 + 0x60));
  if (iVar4 < 0) {
    if (iVar4 + 0x7785fffbU < 2) {
      local_d0 = &local_c8;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = psVar1;
      FUN_145763094(iVar4,&DAT_14a3502ae,
                    ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12PipelineState.cpp",0x354);
    }
    else {
      local_58[0] = 0;
      local_58[1] = 0;
      iVar4 = DAT_14ca7771c + 1;
      bVar2 = DAT_14ca7771c < 9;
      DAT_14ca7771c = iVar4;
      if (bVar2) {
        FUN_1431863cb(local_58,param_3 + 0x10);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143186315 FUN_143186315 body=182 status=ok
// SIG undefined FUN_143186315(void)

void FUN_143186315(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  if (param_4 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431863c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x178))(param_2,param_3,&DAT_14a354028,param_1);
    return;
  }
  iVar1 = (**(code **)(*param_4 + 0x68))(param_4,param_5,param_3,&DAT_14a354028,param_1);
  if (iVar1 == -0x7ff8ffa9) {
    iVar1 = (**(code **)(*param_2 + 0x178))(param_2,param_3,&DAT_14a354028,param_1);
    if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x000143186393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 0x40))(param_4,param_5,*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1431863cb FUN_1431863cb body=436 status=ok
// SIG undefined FUN_1431863cb(void)

void FUN_1431863cb(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  INT_PTR IVar4;
  undefined8 uVar5;
  LPCWSTR lpLibFileName;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  LPCWSTR *local_48;
  LPCWSTR local_40;
  undefined8 local_38;
  LPCWSTR local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *param_2;
  if (lVar6 == 0) goto LAB_14318654a;
  if (DAT_14ca77720 == (FARPROC)0x0) {
    if (DAT_14ca77728 == (HMODULE)0x0) {
      FUN_140d6ac5a();
      FUN_140056680(&local_40);
      iVar1 = (int)local_38;
      iVar3 = ((int)local_38 == 0) + 0x3b;
      local_30 = local_40;
      local_40 = (LPCWSTR)0x0;
      local_28 = (int)local_38;
      iVar2 = local_38._4_4_;
      local_24 = local_38._4_4_;
      local_38 = 0;
      iVar7 = iVar3 + iVar1;
      if (iVar7 < iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (iVar2 < iVar7) {
        FUN_1446f8c06(&local_30);
      }
      FUN_1401aebe8(&local_30,L"Binaries/ThirdParty/Windows/DirectX/x64/d3dcompiler_47.dll",0x3a);
      lpLibFileName = local_30;
      if (local_28 == 0) {
        lpLibFileName = L"";
      }
      DAT_14ca77728 = LoadLibraryW(lpLibFileName);
      if (local_30 != (LPCWSTR)0x0) {
        FUN_1400020a8();
      }
      if (local_40 != (LPCWSTR)0x0) {
        FUN_1400020a8();
      }
      if (DAT_14ca77728 != (HMODULE)0x0) goto LAB_1431864e1;
    }
    else {
LAB_1431864e1:
      DAT_14ca77720 = GetProcAddress(DAT_14ca77728,"D3DDisassemble");
    }
    if (DAT_14ca77720 == (FARPROC)0x0) goto LAB_14318654a;
    lVar6 = *param_2;
  }
  local_48 = &local_30;
  local_30 = (LPCWSTR)0x0;
  IVar4 = (*DAT_14ca77720)(lVar6,param_2[1],0,&DAT_149e02088);
  if (-1 < (int)IVar4) {
    uVar5 = (**(code **)(*(longlong *)local_30 + 0x18))();
    FUN_1407c8b48(param_1,&DAT_14a3540be,uVar5);
    (**(code **)(*(longlong *)local_30 + 0x10))();
  }
LAB_14318654a:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143186581 FUN_143186581 body=1477 status=ok
// SIG undefined FUN_143186581(void)

void FUN_143186581(undefined8 param_1,longlong param_2,longlong param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  short sVar8;
  undefined1 auStack_398 [32];
  short *local_378;
  undefined8 *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_340;
  undefined8 *local_338;
  undefined8 local_330;
  undefined4 local_328 [2];
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined8 local_310 [2];
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined1 local_274 [252];
  undefined4 local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  short local_58 [16];
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar4 = *(ulonglong *)(param_3 + 0x2d0);
  lVar5 = 0;
  do {
    uVar4 = uVar4 << 4 | uVar4 >> 0x3c;
    uVar6 = (uint)uVar4 & 0xf;
    sVar2 = (short)uVar6;
    sVar8 = sVar2 + 0x30;
    if (9 < uVar6) {
      sVar8 = sVar2 + 0x37;
    }
    local_58[lVar5] = sVar8;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x10);
  local_38 = 0;
  psVar1 = *(short **)(param_2 + 0x18);
  if (*(longlong *)(param_3 + 0x28) == 0) {
    local_2c0 = 4;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 3;
    local_2a0 = 0;
    uStack_298 = 0;
    lVar5 = 0xc4;
    do {
      *(undefined8 *)((longlong)&local_320 + lVar5) = 0x200000001;
      *(undefined1 **)((longlong)&local_318 + lVar5) = &DAT_100000001;
      *(undefined8 *)((longlong)&local_330 + lVar5) = 0;
      *(undefined1 **)((longlong)local_328 + lVar5) = &DAT_100000002;
      *(undefined8 *)((longlong)local_310 + lVar5) = 0xf00000004;
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != 0x204);
    local_330._0_4_ = 0x12;
    local_330._4_4_ = *(undefined4 *)(param_3 + 600);
    local_328[0] = 0;
    local_320 = *(undefined8 *)(param_3 + 8);
    local_318 = 0xc;
    local_310[0] = *(undefined8 *)(param_3 + 0x210);
    local_310[1] = *(undefined8 *)(param_3 + 0x218);
    uStack_300 = CONCAT44(*(undefined4 *)(param_3 + 0x220),0xd);
    local_2f8 = 0xe;
    local_2f4 = *(undefined4 *)(param_3 + 0x224);
    local_2f0 = CONCAT44(local_2f0._4_4_,1);
    uStack_2e8 = *(undefined8 *)(param_3 + 0x10);
    local_2e0 = *(undefined8 *)(param_3 + 0x18);
    local_2d8 = CONCAT44(local_2d8._4_4_,5);
    uStack_2d0 = *(undefined8 *)(param_3 + 0x50);
    local_2c8 = *(undefined8 *)(param_3 + 0x58);
    local_290 = 2;
    local_288 = *(undefined8 *)(param_3 + 0x40);
    uStack_280 = *(undefined8 *)(param_3 + 0x48);
    local_278 = 8;
    memcpy(local_274,(void *)(param_3 + 0x60),0x148);
    local_12c = CONCAT44(0x15,(undefined4)local_12c);
    uStack_124 = *(undefined8 *)(param_3 + 0x1d8);
    local_11c = *(undefined8 *)(param_3 + 0x1e0);
    uStack_114 = *(undefined8 *)(param_3 + 0x1e8);
    uStack_10c = *(undefined8 *)(param_3 + 0x1f0);
    local_104 = *(undefined8 *)(param_3 + 0x1f8);
    uStack_fc = *(undefined8 *)(param_3 + 0x200);
    uStack_f4 = *(undefined8 *)(param_3 + 0x208);
    uStack_e8 = 0x10;
    uStack_e4 = *(undefined4 *)(param_3 + 0x24c);
    uStack_e0 = 10;
    local_dc = *(undefined8 *)(param_3 + 0x1ac);
    uStack_d4 = *(undefined8 *)(param_3 + 0x1b4);
    local_cc = *(undefined8 *)(param_3 + 0x1bc);
    uStack_bc = *(undefined4 *)(param_3 + 0x1cc);
    local_b8 = *(undefined4 *)(param_3 + 0x1d0);
    uStack_b4 = *(undefined4 *)(param_3 + 0x1d4);
    _uStack_c4 = CONCAT44(*(undefined4 *)(param_3 + 0x1c8),(int)*(undefined8 *)(param_3 + 0x1c4));
    uStack_b0 = 0xf;
    uStack_ac = *(undefined8 *)(param_3 + 0x228);
    uStack_a4 = *(undefined8 *)(param_3 + 0x230);
    local_9c = *(undefined4 *)(param_3 + 0x238);
    uStack_98 = *(undefined4 *)(param_3 + 0x23c);
    uStack_94 = *(undefined4 *)(param_3 + 0x240);
    uStack_90 = *(undefined4 *)(param_3 + 0x244);
    local_8c = *(undefined4 *)(param_3 + 0x248);
    local_88 = 0x11;
    local_84 = *(undefined8 *)(param_3 + 0x250);
    local_78 = 9;
    local_74 = *(undefined4 *)(param_3 + 0x1a8);
    local_70 = 0x13;
    local_68 = *(undefined4 *)(param_3 + 0x260);
    uStack_64 = *(undefined4 *)(param_3 + 0x264);
    uStack_60 = *(undefined4 *)(param_3 + 0x268);
    uStack_5c = *(undefined4 *)(param_3 + 0x26c);
    local_340 = 0x2d8;
    local_338 = &local_330;
    local_378 = local_58;
    iVar3 = FUN_143186315(param_1,psVar1,&local_340,*(undefined8 *)(param_3 + 0x300));
    if (-1 < iVar3) goto LAB_143186aec;
    FUN_143186b47(param_3 + 8);
    if (1 < iVar3 + 0x7785fffbU) goto LAB_143186aec;
    local_370 = &local_368;
    local_368 = 0;
    uStack_360 = 0;
    uVar7 = 0x337;
  }
  else {
    lVar5 = 0x74;
    do {
      *(undefined8 *)((longlong)&local_320 + lVar5) = 0x200000001;
      *(undefined1 **)((longlong)&local_318 + lVar5) = &DAT_100000001;
      *(undefined8 *)((longlong)&local_330 + lVar5) = 0;
      *(undefined1 **)((longlong)local_328 + lVar5) = &DAT_100000002;
      *(undefined8 *)((longlong)local_310 + lVar5) = 0xf00000004;
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != 0x1b4);
    local_330._0_4_ = 0x12;
    local_330._4_4_ = *(undefined4 *)(param_3 + 600);
    local_328[0] = 0;
    local_320 = *(undefined8 *)(param_3 + 8);
    local_318 = 0xe;
    local_314 = *(undefined4 *)(param_3 + 0x224);
    local_310[0] = CONCAT44(local_310[0]._4_4_,0x19);
    local_310[1] = *(undefined8 *)(param_3 + 0x20);
    uStack_300 = *(undefined8 *)(param_3 + 0x28);
    local_2f8 = 0x18;
    local_2f0 = *(undefined8 *)(param_3 + 0x30);
    uStack_2e8 = *(undefined8 *)(param_3 + 0x38);
    local_2e0 = CONCAT44(local_2e0._4_4_,2);
    local_2d8 = *(undefined8 *)(param_3 + 0x40);
    uStack_2d0 = *(undefined8 *)(param_3 + 0x48);
    local_2c8 = CONCAT44(local_2c8._4_4_,8);
    memcpy((void *)((longlong)&local_2c8 + 4),(void *)(param_3 + 0x60),0x148);
    local_178 = 0x15;
    local_174 = *(undefined8 *)(param_3 + 0x1d8);
    uStack_16c = *(undefined8 *)(param_3 + 0x1e0);
    local_164 = *(undefined8 *)(param_3 + 0x1e8);
    uStack_15c = *(undefined8 *)(param_3 + 0x1f0);
    local_154 = *(undefined8 *)(param_3 + 0x1f8);
    uStack_14c = *(undefined8 *)(param_3 + 0x200);
    local_144 = *(undefined8 *)(param_3 + 0x208);
    local_138 = 0x10;
    local_134 = *(undefined4 *)(param_3 + 0x24c);
    local_130 = 10;
    local_12c = *(undefined8 *)(param_3 + 0x1ac);
    uStack_124 = *(undefined8 *)(param_3 + 0x1b4);
    local_11c = *(undefined8 *)(param_3 + 0x1bc);
    uStack_10c = *(undefined8 *)(param_3 + 0x1cc);
    uStack_114 = CONCAT44(*(undefined4 *)(param_3 + 0x1c8),(int)*(undefined8 *)(param_3 + 0x1c4));
    local_104 = CONCAT44(0xf,*(undefined4 *)(param_3 + 0x1d4));
    uStack_fc = *(undefined8 *)(param_3 + 0x228);
    uStack_f4 = *(undefined8 *)(param_3 + 0x230);
    local_ec = *(undefined4 *)(param_3 + 0x238);
    uStack_e8 = *(undefined4 *)(param_3 + 0x23c);
    uStack_e4 = *(undefined4 *)(param_3 + 0x240);
    uStack_e0 = *(undefined4 *)(param_3 + 0x244);
    local_dc = CONCAT44(0x11,*(undefined4 *)(param_3 + 0x248));
    uStack_d4 = *(undefined8 *)(param_3 + 0x250);
    local_cc = CONCAT44(9,(undefined4)local_cc);
    _uStack_c4 = CONCAT44(0x13,*(undefined4 *)(param_3 + 0x1a8));
    local_b8 = *(undefined4 *)(param_3 + 0x260);
    uStack_b4 = *(undefined4 *)(param_3 + 0x264);
    uStack_b0 = *(undefined4 *)(param_3 + 0x268);
    uStack_ac = CONCAT44(uStack_ac._4_4_,*(undefined4 *)(param_3 + 0x26c));
    local_340 = 0x288;
    local_338 = &local_330;
    local_378 = local_58;
    iVar3 = FUN_143186315(param_1,psVar1,&local_340,*(undefined8 *)(param_3 + 0x300));
    if (-1 < iVar3) goto LAB_143186aec;
    FUN_143186b47(param_3 + 8);
    if (1 < iVar3 + 0x7785fffbU) goto LAB_143186aec;
    local_370 = &local_358;
    local_358 = 0;
    uStack_350 = 0;
    uVar7 = 0x325;
  }
  local_378 = psVar1;
  FUN_145763094(iVar3,&DAT_14a3502ae,
                ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12PipelineState.cpp",uVar7);
LAB_143186aec:
  if ((local_30 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143186b47 FUN_143186b47 body=1285 status=ok
// SIG undefined FUN_143186b47(void)

void FUN_143186b47(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  uint local_68;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58[0] = 0;
  local_58[1] = 0;
  iVar1 = DAT_14ca77730 + 1;
  bVar3 = DAT_14ca77730 < 9;
  DAT_14ca77730 = iVar1;
  if (bVar3) {
    FUN_1407c8b48(local_58,L"AlphaToCoverageEnable = %u\n",*(undefined4 *)(param_1 + 0x58));
    FUN_1407c8b48(local_58,L"IndependentBlendEnable = %u\n",*(undefined4 *)(param_1 + 0x5c));
    uVar4 = 1;
    if (*(int *)(param_1 + 0x5c) != 0) {
      uVar4 = *(uint *)(param_1 + 0x240);
    }
    if (uVar4 != 0) {
      pbVar6 = (byte *)(param_1 + 0x84);
      uVar5 = 0;
      do {
        local_70 = *(undefined4 *)(pbVar6 + -4);
        local_78 = *(undefined4 *)(pbVar6 + -8);
        local_80 = *(undefined4 *)(pbVar6 + -0xc);
        local_88 = *(undefined4 *)(pbVar6 + -0x10);
        local_90 = *(undefined4 *)(pbVar6 + -0x14);
        local_98 = *(undefined4 *)(pbVar6 + -0x18);
        local_a0 = *(undefined4 *)(pbVar6 + -0x1c);
        local_a8 = *(undefined4 *)(pbVar6 + -0x20);
        local_68 = (uint)*pbVar6;
        FUN_1407c8b48(local_58,
                      L"RenderTarget[%u] = { %u, %u, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X, 0x%X }\n"
                      ,uVar5 & 0xffffffff,*(undefined4 *)(pbVar6 + -0x24));
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar6 + 0x28;
      } while (uVar4 != uVar5);
    }
    FUN_1407c8b48(local_58,L"SampleMask = 0x%X\n",*(undefined4 *)(param_1 + 0x1a0));
    FUN_1407c8b48(local_58,L"FillMode = %u\n",*(undefined4 *)(param_1 + 0x1a4));
    FUN_1407c8b48(local_58,L"CullMode = %u\n",*(undefined4 *)(param_1 + 0x1a8));
    FUN_1407c8b48(local_58,L"FrontCounterClockwise = %u\n",*(undefined4 *)(param_1 + 0x1ac));
    FUN_1407c8b48(local_58,L"DepthBias = %d\n",*(undefined4 *)(param_1 + 0x1b0));
    FUN_1407c8b48(local_58,L"DepthBiasClamp = %f\n",(double)*(float *)(param_1 + 0x1b4));
    FUN_1407c8b48(local_58,L"SlopeScaledDepthBias = %f\n",(double)*(float *)(param_1 + 0x1b8));
    FUN_1407c8b48(local_58,L"DepthClipEnable = %u\n",*(undefined4 *)(param_1 + 0x1bc));
    FUN_1407c8b48(local_58,L"MultisampleEnable = %u\n",*(undefined4 *)(param_1 + 0x1c0));
    FUN_1407c8b48(local_58,L"AntialiasedLineEnable = %u\n",*(undefined4 *)(param_1 + 0x1c4));
    FUN_1407c8b48(local_58,L"ForcedSampleCount = %u\n",*(undefined4 *)(param_1 + 0x1c8));
    FUN_1407c8b48(local_58,L"ConservativeRaster = %u\n",*(undefined4 *)(param_1 + 0x1cc));
    FUN_1407c8b48(local_58,L"DepthEnable = %u\n",*(undefined4 *)(param_1 + 0x1d0));
    FUN_1407c8b48(local_58,L"DepthWriteMask = %u\n",*(undefined4 *)(param_1 + 0x1d4));
    FUN_1407c8b48(local_58,L"DepthFunc = %u\n",*(undefined4 *)(param_1 + 0x1d8));
    FUN_1407c8b48(local_58,L"StencilEnable = %u\n",*(undefined4 *)(param_1 + 0x1dc));
    FUN_1407c8b48(local_58,L"StencilReadMask = 0x%X\n",*(undefined1 *)(param_1 + 0x1e0));
    FUN_1407c8b48(local_58,L"StencilWriteMask = 0x%X\n",*(undefined1 *)(param_1 + 0x1e1));
    local_a0 = *(undefined4 *)(param_1 + 0x1f0);
    local_a8 = *(undefined4 *)(param_1 + 0x1e4);
    FUN_1407c8b48(local_58,L"FrontFace = { %u, %u, %u, %u }\n",local_a8,
                  *(undefined4 *)(param_1 + 0x1e8));
    local_a0 = *(undefined4 *)(param_1 + 0x200);
    local_a8 = *(undefined4 *)(param_1 + 500);
    FUN_1407c8b48(local_58,L"BackFace  = { %u, %u, %u, %u }\n",local_a8,
                  *(undefined4 *)(param_1 + 0x1f8));
    FUN_1407c8b48(local_58,L"InputLayout.NumElements = %u\n",*(undefined4 *)(param_1 + 0x210));
    if (*(int *)(param_1 + 0x210) != 0) {
      lVar7 = 0x1c;
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x208);
        local_80 = *(undefined4 *)(lVar2 + lVar7);
        local_88 = *(undefined4 *)(lVar2 + -4 + lVar7);
        local_90 = *(undefined4 *)(lVar2 + -8 + lVar7);
        local_98 = *(undefined4 *)(lVar2 + -0xc + lVar7);
        local_a0 = *(undefined4 *)(lVar2 + -0x10 + lVar7);
        local_a8 = *(undefined4 *)(lVar2 + -0x14 + lVar7);
        FUN_1407c8b48(local_58,L"InputLayout[%u] = { \"%S\", %u, 0x%X, %u, %u, 0x%X, %u }\n",
                      uVar5 & 0xffffffff,*(undefined8 *)(lVar2 + -0x1c + lVar7));
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar5 < *(uint *)(param_1 + 0x210));
    }
    FUN_1407c8b48(local_58,L"IBStripCutValue = 0x%X\n",*(undefined4 *)(param_1 + 0x218));
    FUN_1407c8b48(local_58,L"PrimitiveTopologyType = 0x%X\n",*(undefined4 *)(param_1 + 0x21c));
    FUN_1407c8b48(local_58,L"NumRenderTargets = %u\n",*(undefined4 *)(param_1 + 0x240));
    if (*(int *)(param_1 + 0x240) != 0) {
      uVar5 = 0;
      do {
        FUN_1407c8b48(local_58,L"RTVFormats[%u] = 0x%X\n",uVar5 & 0xffffffff,
                      *(undefined4 *)(param_1 + 0x220 + uVar5 * 4));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x240));
    }
    FUN_1407c8b48(local_58,L"DSVFormat = 0x%X\n",*(undefined4 *)(param_1 + 0x244));
    FUN_1407c8b48(local_58,L"SampleDesc = { %u, %u }\n",*(undefined4 *)(param_1 + 0x248),
                  *(undefined4 *)(param_1 + 0x24c));
    FUN_1407c8b48(local_58,L"NodeMask = 0x%X\n",*(undefined4 *)(param_1 + 0x250));
    FUN_1407c8b48(local_58,L"Flags = 0x%X\n",*(undefined4 *)(param_1 + 0x268));
    FUN_1431863cb(local_58,param_1 + 8);
    FUN_1431863cb(local_58,param_1 + 0x18);
    FUN_1431863cb(local_58,param_1 + 0x28);
    FUN_1431863cb(local_58,param_1 + 0x48);
    FUN_1431863cb(local_58,param_1 + 0x38);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_58[2] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14318704e FUN_14318704e body=178 status=ok
// SIG undefined FUN_14318704e(void)

void FUN_14318704e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  
  puVar4 = (uint *)(*param_1 + 0x80);
  if (*param_1 == 0) {
    puVar4 = (uint *)0x0;
  }
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    lVar5 = param_1[1] + 0x120;
    if (param_1[1] == 0) {
      lVar5 = 0;
    }
    iVar2 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)(uint)(iVar2 * 8));
    lVar1 = *(longlong *)((longlong)puVar4 + (ulonglong)(uint)(iVar2 * 8) + 8);
    FUN_14178c7aa(lVar1,param_2,lVar5);
    bVar3 = (byte)iVar2 & 0x1f;
    for (uVar6 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar6; uVar6 != 0;
        uVar6 = uVar6 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3)) {
      iVar2 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x128 + (ulonglong)(uint)(iVar2 * 8));
      lVar1 = *(longlong *)(lVar1 + 0x88 + (ulonglong)(uint)(iVar2 * 8));
      FUN_14178c7aa(lVar1,param_2,lVar5);
      bVar3 = (byte)iVar2 & 0x1f;
    }
  }
  return;
}



// FUNCTION 143187100 FUN_143187100 body=405 status=ok
// SIG undefined FUN_143187100(void)

void FUN_143187100(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  for (bVar7 = *(byte *)(param_1 + 0x20); bVar7 != 0; bVar7 = bVar7 - 1 & bVar7) {
    uVar2 = (ulonglong)((-bVar7 & bVar7) == 2);
    (&local_48)[uVar2] = *(undefined8 *)(param_2 + 0x50 + uVar2 * 8);
  }
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  lVar8 = *(longlong *)(param_1 + 0x10);
  puVar3 = (uint *)(lVar8 + 0x80);
  if (lVar8 == 0) {
    puVar3 = (uint *)0x0;
  }
  uVar10 = *puVar3;
  if (uVar10 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x18) + 0x120;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar8 = 0;
    }
    iVar1 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    lVar8 = *(longlong *)(lVar8 + 8 + (ulonglong)(uint)(iVar1 * 8));
    lVar9 = *(longlong *)((longlong)puVar3 + (ulonglong)(uint)(iVar1 * 8) + 8);
    FUN_14178c7aa(lVar9,&local_58,lVar8);
    bVar7 = (byte)iVar1 & 0x1f;
    uVar10 = (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7) & uVar10;
    if (uVar10 != 0) {
      do {
        iVar1 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        lVar8 = *(longlong *)(lVar8 + 0x128 + (ulonglong)(uint)(iVar1 * 8));
        lVar9 = *(longlong *)(lVar9 + 0x88 + (ulonglong)(uint)(iVar1 * 8));
        FUN_14178c7aa(lVar9,&local_58,lVar8);
        bVar7 = (byte)iVar1 & 0x1f;
        uVar10 = uVar10 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      } while (uVar10 != 0);
    }
    lVar8 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar8 != 0) {
    LOCK();
    puVar3 = (uint *)(lVar8 + 8);
    uVar10 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar3 = (uint *)(lVar8 + 8);
      LOCK();
      uVar10 = *puVar3;
      *puVar3 = *puVar3 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(lVar8 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar8;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar11 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar11) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar11 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar11) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143187296 FUN_143187296 body=1593 status=ok
// SIG undefined FUN_143187296(void)

undefined8 FUN_143187296(longlong *param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  longlong *plVar14;
  longlong **pplVar15;
  undefined **ppuVar16;
  bool bVar17;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined1 local_1ea;
  undefined1 local_1e9;
  ulonglong local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  longlong *local_160 [4];
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1d0 = *param_2;
  local_1e0 = param_2[2];
  puVar4 = (undefined8 *)param_1[3];
  local_1e8 = *(ulonglong *)param_1[5];
  local_1c8 = *(longlong **)param_1[1];
  local_160[1] = *(longlong **)(*param_1 + 0x30);
  puVar5 = (undefined8 *)param_2[1];
  local_160[3] = (longlong *)*puVar5;
  uStack_140 = puVar5[1];
  local_138 = puVar5[2];
  uStack_130 = puVar5[3];
  puVar5 = (undefined8 *)param_1[2];
  local_128 = *puVar5;
  uStack_120 = puVar5[1];
  local_118 = *(undefined4 *)(puVar5 + 2);
  uStack_114 = *(undefined4 *)((longlong)puVar5 + 0x14);
  uStack_110 = *(undefined4 *)(puVar5 + 3);
  uStack_10c = *(undefined4 *)((longlong)puVar5 + 0x1c);
  local_108 = *(undefined4 *)(puVar5 + 4);
  uStack_104 = *(undefined4 *)((longlong)puVar5 + 0x24);
  uStack_100 = *(undefined4 *)(puVar5 + 5);
  uStack_fc = *(undefined4 *)((longlong)puVar5 + 0x2c);
  local_f8 = *(undefined4 *)(puVar5 + 6);
  uStack_f4 = *(undefined4 *)((longlong)puVar5 + 0x34);
  uStack_f0 = *(undefined4 *)(puVar5 + 7);
  uStack_ec = *(undefined4 *)((longlong)puVar5 + 0x3c);
  local_1e9 = *(undefined1 *)((longlong)puVar4 + 0x32);
  local_1d8 = (undefined *)*puVar4;
  local_1ea = *(undefined1 *)((longlong)puVar4 + 0x33);
  local_b4 = *(undefined1 *)((longlong)puVar4 + 0x34);
  local_c4 = *(undefined8 *)((longlong)puVar4 + 0x24);
  local_bc = *(undefined2 *)((longlong)puVar4 + 0x2c);
  local_ba = *(undefined2 *)((longlong)puVar4 + 0x2e);
  local_b8 = *(undefined1 *)(puVar4 + 6);
  local_b7 = *(undefined1 *)((longlong)puVar4 + 0x31);
  local_e0 = *(undefined4 *)(puVar4 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_d8 = *(undefined4 *)(puVar4 + 2);
  uStack_d4 = *(undefined4 *)((longlong)puVar4 + 0x14);
  local_d0 = *(undefined4 *)(puVar4 + 3);
  local_c8 = *(undefined4 *)(puVar4 + 4);
  local_b3 = *(undefined1 *)((longlong)puVar4 + 0x35);
  local_cc = *(undefined4 *)((longlong)puVar4 + 0x1c);
  local_b0 = *(undefined **)param_1[4];
  local_160[0] = local_1c8;
  local_160[2] = (longlong *)local_1d0;
  local_e8 = local_1d8;
  local_b6 = local_1e9;
  local_b5 = local_1ea;
  if (*(int *)(*param_1 + 0x2c) == 0) {
    local_1c0 = &PTR_FUN_14a3548b0;
    local_1a8 = local_160 + 3;
    local_70 = 0x40000;
    local_168 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_1b8 = local_160[1];
    local_1b0 = local_1d0;
    local_1a0 = local_128;
    uStack_198 = uStack_120;
    local_190 = local_118;
    uStack_18c = uStack_114;
    uStack_188 = uStack_110;
    uStack_184 = uStack_10c;
    local_180 = local_108;
    uStack_17c = uStack_104;
    uStack_178 = uStack_100;
    uStack_174 = uStack_fc;
    local_170 = puVar5[6];
    local_a8 = local_1d8;
    local_a0 = local_e0;
    uStack_9c = uStack_dc;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    local_90 = local_d0;
    local_8c = local_cc;
    local_88 = local_c8;
    local_84 = local_c4;
    local_7c = local_bc;
    local_7a = local_ba;
    local_78 = local_b8;
    local_77 = local_b7;
    local_76 = local_1e9;
    local_75 = local_1ea;
    local_74 = local_b4;
    local_73 = local_b3;
    local_68 = local_b0;
    lVar7 = (**(code **)(*local_1c8 + 0x630))(local_1c8,&local_a8,0);
    uVar6 = local_168;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    uVar8 = FUN_14001cc68(0x130,0x10);
    local_208 = local_1e8;
    local_200 = (undefined8 *)((ulonglong)local_200 & 0xffffffffffffff00);
    local_1f8 = puVar4;
    FUN_1431ed9da(uVar8,lVar7,uVar6,local_1e0);
    if (lVar7 != 0) {
      LOCK();
      puVar9 = (uint *)(lVar7 + 8);
      uVar2 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar9 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar9;
        *puVar9 = *puVar9 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar7;
          plVar14 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar17 = plVar14 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar17) {
                plVar14 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar17 = plVar11 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar17) {
                plVar11 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
    }
  }
  else {
    uVar8 = FUN_14001cc68(0x130,0x10);
    local_1c0 = (undefined **)0x0;
    ppuVar12 = (undefined **)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x170,0x10);
    *ppuVar12 = (undefined *)UE::Tasks::Private::FTaskBase::vftable;
    ppuVar12[1] = &DAT_100000002;
    ppuVar12[2] = (undefined *)0x0;
    *(undefined4 *)(ppuVar12 + 3) = 0;
    *(undefined4 *)(ppuVar12 + 4) = 0xffffffff;
    ppuVar12[6] = (undefined *)0x0;
    ppuVar12[7] = (undefined *)0x100000000;
    *(undefined1 *)(ppuVar12 + 8) = 1;
    ppuVar12[0xe] =
         (undefined *)
         LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
         TTaskDelegateDummy::vftable;
    ppuVar12[0xf] = (undefined *)0x0;
    ppuVar12[0x10] = (undefined *)0xe800000000000020;
    ppuVar12[0x12] = (undefined *)0x0;
    ppuVar12[0x13] = (undefined *)0x100000000;
    *(undefined2 *)(ppuVar12 + 0x14) = 0;
    LOCK();
    bVar17 = *(char *)(ppuVar12 + 8) == '\x01';
    if (bVar17) {
      *(char *)(ppuVar12 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar17) {
      FUN_14008cdb0(ppuVar12 + 8);
    }
    *ppuVar12 = (undefined *)&PTR_LAB_14a3548c8;
    if (*(code **)(ppuVar12[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(ppuVar12[0xe] + 0x18))(ppuVar12 + 0xe,ppuVar12 + 9);
    }
    ppuVar1 = local_1c0;
    ppuVar12[0xe] =
         (undefined *)
         LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
         ::vftable;
    ppuVar12[9] = (undefined *)ppuVar12;
    ppuVar12[10] = (undefined *)ppuVar12;
    lVar7 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar7 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = *(undefined **)(lVar7 + 0x30);
    }
    ppuVar12[0xf] = puVar13;
    ppuVar12[0x10] = (undefined *)0xc00000528d520c00;
    *(undefined4 *)((longlong)ppuVar12 + 0x1c) = 0;
    pplVar15 = local_160;
    ppuVar16 = ppuVar12 + 0x17;
    for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
      *ppuVar16 = (undefined *)*pplVar15;
      pplVar15 = pplVar15 + 1;
      ppuVar16 = ppuVar16 + 1;
    }
    *(undefined1 *)((longlong)ppuVar12 + 0x162) = local_b6;
    ppuVar12[0x26] = local_e8;
    *(undefined1 *)((longlong)ppuVar12 + 0x163) = local_b5;
    *(undefined1 *)((longlong)ppuVar12 + 0x164) = local_b4;
    *(undefined8 *)((longlong)ppuVar12 + 0x154) = local_c4;
    *(undefined2 *)((longlong)ppuVar12 + 0x15c) = local_bc;
    *(undefined2 *)((longlong)ppuVar12 + 0x15e) = local_ba;
    *(undefined1 *)(ppuVar12 + 0x2c) = local_b8;
    *(undefined1 *)((longlong)ppuVar12 + 0x161) = local_b7;
    *(undefined4 *)(ppuVar12 + 0x27) = local_e0;
    *(undefined4 *)((longlong)ppuVar12 + 0x13c) = uStack_dc;
    *(undefined4 *)(ppuVar12 + 0x28) = uStack_d8;
    *(undefined4 *)((longlong)ppuVar12 + 0x144) = uStack_d4;
    *(undefined4 *)(ppuVar12 + 0x29) = local_d0;
    *(undefined4 *)(ppuVar12 + 0x2a) = local_c8;
    *(undefined1 *)((longlong)ppuVar12 + 0x165) = local_b3;
    *(undefined4 *)((longlong)ppuVar12 + 0x14c) = local_cc;
    ppuVar12[0x2d] = local_b0;
    *ppuVar12 = (undefined *)&PTR_FUN_14a3548b8;
    if (local_1c0 != (undefined **)0x0) {
      local_1c0 = (undefined **)0x0;
      LOCK();
      ppuVar16 = ppuVar1 + 1;
      *(int *)ppuVar16 = *(int *)ppuVar16 + -1;
      UNLOCK();
      if (*(int *)ppuVar16 == 0) {
        (**(code **)*ppuVar1)(ppuVar1,1);
      }
    }
    local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
    local_1c0 = ppuVar12;
    FUN_1447439e4(ppuVar12);
    local_208 = local_208 & 0xffffffffffffff00;
    local_200 = puVar4;
    FUN_147413b96(uVar8,&local_1c0,local_1e0,local_1e8);
    if (ppuVar12 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = ppuVar12 + 1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppuVar1 == 0) {
        (**(code **)*ppuVar12)(ppuVar12,1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431878d0 FUN_1431878d0 body=78 status=ok
// SIG undefined FUN_1431878d0(void)

undefined8 * FUN_1431878d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14a354810;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143187924 FUN_143187924 body=29 status=ok
// SIG undefined FUN_143187924(void)

void FUN_143187924(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143187942 FUN_143187942 body=29 status=ok
// SIG undefined FUN_143187942(void)

undefined8 FUN_143187942(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143187960 FUN_143187960 body=46 status=ok
// SIG undefined FUN_143187960(void)

undefined8 FUN_143187960(undefined8 param_1,int param_2)

{
  FUN_147389c82();
  if (param_2 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 14318798e FUN_14318798e body=398 status=ok
// SIG undefined FUN_14318798e(void)

void FUN_14318798e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  undefined2 local_42;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = param_1 + 0xd0;
  local_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  local_d0 = &PTR_FUN_14a3548b0;
  local_b0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a8 = *(undefined8 *)(param_1 + 0xf8);
  local_a0 = *(undefined4 *)(param_1 + 0x100);
  uStack_9c = *(undefined4 *)(param_1 + 0x104);
  uStack_98 = *(undefined4 *)(param_1 + 0x108);
  uStack_94 = *(undefined4 *)(param_1 + 0x10c);
  local_90 = *(undefined4 *)(param_1 + 0x110);
  uStack_8c = *(undefined4 *)(param_1 + 0x114);
  uStack_88 = *(undefined4 *)(param_1 + 0x118);
  uStack_84 = *(undefined4 *)(param_1 + 0x11c);
  local_80 = *(undefined8 *)(param_1 + 0x120);
  local_78 = 0;
  local_30 = *(undefined8 *)(param_1 + 0x168);
  local_3e = *(undefined1 *)(param_1 + 0x162);
  local_70 = *(undefined8 *)(param_1 + 0x130);
  local_3d = *(undefined1 *)(param_1 + 0x163);
  local_3c = *(undefined1 *)(param_1 + 0x164);
  local_4c = *(undefined8 *)(param_1 + 0x154);
  local_44 = *(undefined2 *)(param_1 + 0x15c);
  local_42 = *(undefined2 *)(param_1 + 0x15e);
  local_40 = *(undefined1 *)(param_1 + 0x160);
  local_3f = *(undefined1 *)(param_1 + 0x161);
  local_68 = *(undefined8 *)(param_1 + 0x138);
  uStack_60 = *(undefined8 *)(param_1 + 0x140);
  local_58 = *(undefined4 *)(param_1 + 0x148);
  local_50 = *(undefined4 *)(param_1 + 0x150);
  local_3b = *(undefined1 *)(param_1 + 0x165);
  local_54 = *(undefined4 *)(param_1 + 0x14c);
  local_38 = 0x40000;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x630))
                    (*(longlong **)(param_1 + 0xb8),&local_70,0);
  *(longlong *)(param_1 + 0xa8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xb0) = local_78;
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143187b1e FUN_143187b1e body=1282 status=ok
// SIG undefined FUN_143187b1e(void)

undefined8 * FUN_143187b1e(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined8 local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
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
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128[1] = *param_2;
  uVar4 = param_2[2];
  puVar5 = (undefined8 *)param_1[2];
  uVar6 = *(undefined8 *)param_1[4];
  local_128[0] = *(undefined8 *)(*param_1 + 0x30);
  puVar8 = (undefined8 *)param_2[1];
  local_128[2] = *puVar8;
  local_128[3] = puVar8[1];
  local_108 = puVar8[2];
  uStack_100 = puVar8[3];
  puVar7 = (undefined4 *)param_1[1];
  local_c8 = *(undefined8 *)(puVar7 + 0xc);
  local_f8 = *puVar7;
  uStack_f4 = puVar7[1];
  uStack_f0 = puVar7[2];
  uStack_ec = puVar7[3];
  local_e8 = puVar7[4];
  uStack_e4 = puVar7[5];
  uStack_e0 = puVar7[6];
  uStack_dc = puVar7[7];
  local_d8 = puVar7[8];
  uStack_d4 = puVar7[9];
  uStack_d0 = puVar7[10];
  uStack_cc = puVar7[0xb];
  local_c0 = *puVar5;
  local_b8 = *(undefined4 *)(puVar5 + 1);
  local_b0 = *(undefined8 *)param_1[3];
  if (*(int *)(*param_1 + 0x2c) == 0) {
    local_90 = local_128 + 2;
    local_138 = &local_a8;
    local_a8 = &PTR_FUN_14a3548b0;
    local_50 = 0;
    local_a0 = local_128[0];
    local_98 = local_128[1];
    local_88 = local_f8;
    uStack_84 = uStack_f4;
    uStack_80 = uStack_f0;
    uStack_7c = uStack_ec;
    local_78 = local_e8;
    uStack_74 = uStack_e4;
    uStack_70 = uStack_e0;
    uStack_6c = uStack_dc;
    local_68 = local_d8;
    uStack_64 = uStack_d4;
    uStack_60 = uStack_d0;
    uStack_5c = uStack_cc;
    local_58 = local_c8;
    lVar15 = FUN_1403161f2(DAT_14ca77418,&local_c0,local_b0,0x40000);
    uVar13 = local_50;
    *(undefined4 *)(lVar15 + 0x18) = 0x40000;
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
    puVar8 = (undefined8 *)FUN_14001cc68(0x108,0x10);
    *puVar8 = &PTR_LAB_14a37fd70;
    puVar8[1] = lVar15;
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
    puVar8[2] = 0;
    puVar8[3] = uVar13;
    puVar8[4] = uVar4;
    puVar8[5] = uVar6;
    *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x5c) = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x96) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x9e) = 0;
    *(undefined1 *)((longlong)puVar8 + 0xa6) = 1;
    *puVar8 = &PTR_FUN_14a354900;
    puVar8[0x15] = *puVar5;
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar5 + 1);
    puVar8[0x19] = 0;
    puVar8[0x1a] = 0x100000000;
    puVar8[0x1f] = 0;
    puVar8[0x20] = 0x100000000;
    if (lVar15 != 0) {
      LOCK();
      puVar10 = (uint *)(lVar15 + 8);
      uVar2 = *puVar10;
      *puVar10 = *puVar10 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar10 = (uint *)(lVar15 + 8);
        LOCK();
        uVar2 = *puVar10;
        *puVar10 = *puVar10 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar15;
          plVar14 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar14;
              LOCK();
              bVar18 = plVar14 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar18) {
                plVar14 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar18 = plVar12 != DAT_14ca843c8;
              plVar14 = plVar11;
              if (bVar18) {
                plVar12 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
  }
  else {
    puVar8 = (undefined8 *)FUN_14001cc68(0x108,0x10);
    puVar9 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x138,0x10);
    *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
    puVar9[1] = &DAT_100000002;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffffffff;
    puVar9[6] = 0;
    puVar9[7] = 0x100000000;
    *(undefined1 *)(puVar9 + 8) = 1;
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0xe800000000000020;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0x100000000;
    *(undefined2 *)(puVar9 + 0x14) = 0;
    LOCK();
    bVar18 = *(char *)(puVar9 + 8) == '\x01';
    if (bVar18) {
      *(char *)(puVar9 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_14008cdb0(puVar9 + 8);
    }
    *puVar9 = &PTR_LAB_14a3548c8;
    if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
    }
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar9[9] = puVar9;
    puVar9[10] = puVar9;
    lVar15 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar15 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar15 + 0x30);
    }
    puVar9[0xf] = uVar13;
    puVar9[0x10] = 0xc00000528d520c00;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
    puVar16 = local_128;
    puVar17 = puVar9 + 0x17;
    for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
    }
    *puVar9 = &PTR_FUN_14a354910;
    local_a8 = (undefined **)CONCAT71(local_a8._1_7_,1);
    FUN_1447439e4(puVar9);
    *puVar8 = &PTR_LAB_14a37fd70;
    puVar8[1] = 0;
    puVar8[2] = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
    }
    puVar8[3] = 0;
    puVar8[4] = uVar4;
    puVar8[5] = uVar6;
    *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x5c) = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x96) = 0;
    *(undefined8 *)((longlong)puVar8 + 0x9e) = 0;
    *(undefined1 *)((longlong)puVar8 + 0xa6) = 1;
    *puVar8 = &PTR_FUN_14a354900;
    puVar8[0x15] = *puVar5;
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar5 + 1);
    puVar8[0x19] = 0;
    puVar8[0x1a] = 0x100000000;
    puVar8[0x1f] = 0;
    puVar8[0x20] = 0x100000000;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar9 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 143188022 FUN_143188022 body=78 status=ok
// SIG undefined FUN_143188022(void)

undefined8 * FUN_143188022(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a3548e0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143188076 FUN_143188076 body=29 status=ok
// SIG undefined FUN_143188076(void)

void FUN_143188076(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143188094 FUN_143188094 body=29 status=ok
// SIG undefined FUN_143188094(void)

undefined8 FUN_143188094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431880b2 FUN_1431880b2 body=46 status=ok
// SIG undefined FUN_1431880b2(void)

undefined8 FUN_1431880b2(undefined8 param_1,int param_2)

{
  FUN_147389c82();
  if (param_2 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 1431880e0 FUN_1431880e0 body=231 status=ok
// SIG undefined FUN_1431880e0(void)

void FUN_1431880e0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined ***local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_1 + 200;
  local_68 = *(undefined8 *)(param_1 + 0xb8);
  uStack_60 = *(undefined8 *)(param_1 + 0xc0);
  local_78 = &local_70;
  local_70 = &PTR_FUN_14a3548b0;
  local_50 = *(undefined4 *)(param_1 + 0xe8);
  uStack_4c = *(undefined4 *)(param_1 + 0xec);
  uStack_48 = *(undefined4 *)(param_1 + 0xf0);
  uStack_44 = *(undefined4 *)(param_1 + 0xf4);
  local_40 = *(undefined4 *)(param_1 + 0xf8);
  uStack_3c = *(undefined4 *)(param_1 + 0xfc);
  uStack_38 = *(undefined4 *)(param_1 + 0x100);
  uStack_34 = *(undefined4 *)(param_1 + 0x104);
  local_30 = *(undefined4 *)(param_1 + 0x108);
  uStack_2c = *(undefined4 *)(param_1 + 0x10c);
  uStack_28 = *(undefined4 *)(param_1 + 0x110);
  uStack_24 = *(undefined4 *)(param_1 + 0x114);
  local_20 = *(undefined8 *)(param_1 + 0x118);
  local_18 = 0;
  lVar1 = FUN_1403161f2(DAT_14ca77418,param_1 + 0x120,*(undefined8 *)(param_1 + 0x130),0x40000);
  *(undefined4 *)(lVar1 + 0x18) = 0x40000;
  *(longlong *)(param_1 + 0xa8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xb0) = local_18;
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431881c8 FUN_1431881c8 body=135 status=ok
// SIG undefined FUN_1431881c8(void)

void FUN_1431881c8(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if (puVar1 != (uint *)0x0) {
    uVar5 = *puVar1;
    if (uVar5 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    plVar4 = *(longlong **)(puVar1 + (ulonglong)uVar3 * 2 + 2);
    if (plVar4 != (longlong *)0x0) {
      uVar6 = CONCAT44(uVar3,uVar5);
      do {
        if (*(code **)(*plVar4 + 0x10) == FUN_1447ef9e6) {
          FUN_1447ef9e6();
        }
        else {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        bVar2 = (byte)((ulonglong)uVar6 >> 0x20) & 0x1f;
        uVar5 = (uint)uVar6 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar5 == 0) {
          return;
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        plVar4 = (longlong *)plVar4[(ulonglong)uVar3 + 0x19];
        uVar6 = CONCAT44(uVar3,uVar5);
      } while (plVar4 != (longlong *)0x0);
    }
  }
  return;
}



// FUNCTION 143188250 FUN_143188250 body=1249 status=ok
// SIG undefined FUN_143188250(void)

void FUN_143188250(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined **local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined2 local_e0;
  int local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 *local_b0;
  longlong lStack_a8;
  uint local_a0;
  int local_98;
  int iStack_94;
  undefined8 uStack_90;
  int local_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = *(longlong *)(param_2 + 0x38);
  lVar4 = *(longlong *)(lVar3 + 0x120);
  plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8);
  uStack_80 = 0;
  local_78 = 0;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    uVar8 = *(uint *)(param_1 + 0x34) >> 2;
    local_98 = 0x2a;
    iStack_94 = 1;
    uStack_90 = *(longlong *)(param_1 + 0x28) * (ulonglong)uVar8;
    local_88 = uVar8 * *(int *)(param_1 + 0x30);
    uStack_84 = 0;
  }
  else {
    local_78 = *(undefined8 *)(param_1 + 0x40);
    local_98 = *(int *)(param_1 + 0x20);
    iStack_94 = *(int *)(param_1 + 0x24);
    uStack_90 = *(longlong *)(param_1 + 0x28);
    local_88 = *(int *)(param_1 + 0x30);
    uStack_84 = *(uint *)(param_1 + 0x34);
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
  }
  local_130 = &PTR__purecall_14a3516b0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uVar12 = 0;
  uStack_100 = 0;
  lVar14 = lVar4 + 0x6d8;
  if (*(longlong *)(lVar4 + 0x898) != 0) {
    lVar14 = *(longlong *)(lVar4 + 0x898);
  }
  local_128 = lVar4;
  FUN_144a30b90(lVar14,local_f8);
  local_e8 = CONCAT35(local_e8._5_3_,0xffffffffff);
  local_e0 = 1;
  FUN_1400db9e2(*(undefined8 *)(lVar4 + 0x6a8),&local_148);
  local_e8 = local_148;
  local_130 = &PTR_LAB_14a3511c0;
  local_b0 = (undefined8 *)0x0;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40);
  local_148 = 0;
  if (lVar14 != 0) {
    uVar12 = *(undefined8 *)(lVar14 + 0x10);
  }
  lStack_a8 = 0;
  local_a0 = 0;
  local_140 = lVar14;
  local_138 = uVar12;
  if (iStack_94 == 1) {
    uVar8 = uStack_84;
    if (local_98 != 0) {
      uVar8 = FUN_1447f0274();
      uVar8 = uVar8 >> 3;
    }
    lStack_a8 = (ulonglong)uVar8 * uStack_90 - *(longlong *)(lVar14 + 0x60);
    local_a0 = uVar8;
  }
  plVar2 = (longlong *)(lVar3 + -0x1c8);
  local_b8 = local_78;
  local_c8 = local_88;
  uStack_c4 = uStack_84;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = local_98;
  iStack_d4 = iStack_94;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  FUN_1447f028a(local_68);
  uStack_104 = local_68._0_4_;
  uStack_100 = local_68._4_4_;
  FUN_1447f03f2(&local_130,&local_148,0x20);
  if (((*(char *)(lVar3 + 14000) != '\0') || (*(longlong *)(lVar3 + 0x36b8) != 0)) ||
     ((*(char *)(lVar3 + 0x36a8) == '\x01' && (*(char *)(lVar3 + 0x36a9) == '\x01')))) {
    FUN_14736d042(plVar2);
    if (*(longlong *)(lVar3 + -0x30) == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    lVar14 = *(longlong *)(lVar3 + 0x36b8);
    FUN_147370955(lVar4,lVar14,local_e8,local_f8[0]);
    lVar14 = (ulonglong)*(uint *)(lVar14 + 0x38) * (longlong)(int)local_e8 +
             *(longlong *)(lVar14 + 0x28);
    goto LAB_143188562;
  }
  plVar6 = *(longlong **)(lVar3 + 0x35b0);
  pcVar7 = *(code **)(*plVar6 + 0x28);
  if (pcVar7 == (code *)&LAB_144b1ae10) {
    if (plVar6[5] != 0) {
      uVar8 = *(uint *)(plVar6[5] + 4);
      goto LAB_1431884c6;
    }
LAB_1431884d5:
    (**(code **)(**(longlong **)(lVar3 + 0x35b0) + 8))();
  }
  else {
    if (pcVar7 == (code *)&LAB_144b1ae08) {
      uVar8 = *(uint *)(plVar6[2] + 0x34);
    }
    else {
      uVar8 = (*pcVar7)(plVar6);
    }
LAB_1431884c6:
    if ((uVar8 == 0) || (uVar8 < (int)plVar6[3] + 1U)) goto LAB_1431884d5;
  }
  plVar6 = *(longlong **)(lVar3 + 0x35b0);
  uVar9 = (**(code **)(*plVar6 + 0x28))(plVar6);
  iVar11 = (int)plVar6[3];
  uVar8 = iVar11 + 1;
  if (((char)plVar6[4] == '\x01') && (uVar9 < uVar8)) {
    *(undefined4 *)((longlong)plVar6 + 0x1c) = 1;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar8 = 1;
    iVar11 = 0;
  }
  *(uint *)(plVar6 + 3) = uVar8;
  lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x35b0) + 0x10);
  lVar13 = (longlong)iVar11 * (ulonglong)*(uint *)(lVar10 + 0x38);
  lVar14 = lVar13 + *(longlong *)(lVar10 + 0x28);
  local_168 = (ulonglong)local_168._4_4_ << 0x20;
  (**(code **)(*plVar5 + 0xc0))(plVar5,1,*(longlong *)(lVar10 + 0x20) + lVar13,local_f8[0]);
LAB_143188562:
  lVar10 = *(longlong *)(param_1 + 0x10) + 0x28;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar10 = 0;
  }
  FUN_144719d5c(plVar2,lVar10,8);
  FUN_14492aa36(plVar2);
  lVar10 = *(longlong *)(lVar3 + -0x30);
  if (lVar10 == 0) {
    (**(code **)(*(longlong *)(lVar3 + -0x1c8) + 8))(plVar2);
    lVar10 = *(longlong *)(lVar3 + -0x30);
  }
  *(int *)(lVar10 + 0x1c0) = *(int *)(lVar10 + 0x1c0) + 1;
  local_168 = *(undefined8 *)(param_1 + 0x18);
  local_158 = 0;
  local_160 = 0;
  (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x188))
            (*(longlong **)(lVar10 + 0x28),lVar14,local_f8[0],*(undefined8 *)(local_110 + 0x20));
  lVar10 = local_110;
  lVar14 = *(longlong *)(lVar3 + -0x30);
  if (lVar14 == 0) {
    (**(code **)(*(longlong *)(lVar3 + -0x1c8) + 8))(plVar2);
    lVar14 = *(longlong *)(lVar3 + -0x30);
  }
  FUN_1447093fc(lVar14,lVar10);
  if (((*(longlong *)(lVar3 + -0x30) != 0) && (0 < (int)DAT_14c760b84 && *(int *)(lVar3 + -4) == 0))
     && (DAT_14c760b84 < *(uint *)(*(longlong *)(lVar3 + -0x30) + 0x1c0))) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (((*(char *)(lVar3 + -0x1b4) == '\x01') && (*(char *)(lVar4 + 0x48) == '\x01')) &&
     (*(longlong *)(lVar4 + 0x60) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x60) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x60) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  local_130 = &PTR_LAB_14a3511c0;
  if (local_b0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_b0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_b0)(local_b0,1);
    }
  }
  FUN_1448470d8(&local_130);
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143188732 FUN_143188732 body=95 status=ok
// SIG undefined FUN_143188732(void)

void FUN_143188732(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1467b3124(*param_1,param_2 + 8,*param_2);
  if ((longlong)*(int *)(param_2 + 0x20) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    lVar2 = (longlong)*(int *)(param_2 + 0x20) * 0x28;
    do {
      FUN_143188732(param_3,lVar1,param_3);
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  FUN_1467b32e8(*param_1);
  return;
}



// FUNCTION 143188792 FUN_143188792 body=138 status=ok
// SIG undefined FUN_143188792(void)

void FUN_143188792(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,8);
  }
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,8,8);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14318881c FUN_14318881c body=363 status=ok
// SIG undefined FUN_14318881c(void)

void FUN_14318881c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1431888b2;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1431888b2:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 143188988 FUN_143188988 body=346 status=ok
// SIG undefined FUN_143188988(void)

void FUN_143188988(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143188a1a;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143188a1a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 143188ae2 FUN_143188ae2 body=374 status=ok
// SIG undefined FUN_143188ae2(void)

void FUN_143188ae2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143188b8b;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_143188b8b:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 143188c58 FUN_143188c58 body=81 status=ok
// SIG undefined FUN_143188c58(void)

void FUN_143188c58(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 1);
    do {
      FUN_143188c58(*(undefined8 *)(pcVar1 + 0x17),*(undefined4 *)(pcVar1 + 0x1f));
      if (*(longlong *)(pcVar1 + 0x17) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(pcVar1 + 7) != 0) {
        FUN_1400020a8();
      }
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143188caa FUN_143188caa body=95 status=ok
// SIG undefined FUN_143188caa(void)

void FUN_143188caa(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1467b3124(*param_1,param_2 + 8,*param_2);
  if ((longlong)*(int *)(param_2 + 0x20) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    lVar2 = (longlong)*(int *)(param_2 + 0x20) * 0x28;
    do {
      FUN_143188caa(param_3,lVar1,param_3);
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  FUN_1467b32e8(*param_1);
  return;
}



// FUNCTION 143188d0a FUN_143188d0a body=138 status=ok
// SIG undefined FUN_143188d0a(void)

void FUN_143188d0a(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,8);
  }
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,8,8);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 143188d94 FUN_143188d94 body=363 status=ok
// SIG undefined FUN_143188d94(void)

void FUN_143188d94(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143188e2a;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143188e2a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 143188f00 FUN_143188f00 body=346 status=ok
// SIG undefined FUN_143188f00(void)

void FUN_143188f00(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143188f92;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143188f92:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14318905a FUN_14318905a body=374 status=ok
// SIG undefined FUN_14318905a(void)

void FUN_14318905a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143189103;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_143189103:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 1431891d0 FUN_1431891d0 body=81 status=ok
// SIG undefined FUN_1431891d0(void)

void FUN_1431891d0(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 1);
    do {
      FUN_1431891d0(*(undefined8 *)(pcVar1 + 0x17),*(undefined4 *)(pcVar1 + 0x1f));
      if (*(longlong *)(pcVar1 + 0x17) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(pcVar1 + 7) != 0) {
        FUN_1400020a8();
      }
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143189222 FUN_143189222 body=475 status=ok
// SIG undefined FUN_143189222(void)

void FUN_143189222(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x18);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 4;
LAB_143189245:
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x10),(longlong)param_2 << 2);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 0x1c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_1431892ea;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_1431892ea:
    uVar8 = uVar8 >> 2;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x1c) = uVar6;
      if (uVar6 < 5) goto LAB_143189245;
    }
    if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x10,0,uVar8,4);
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,uVar8,4);
  return;
}



// FUNCTION 14318942c FUN_14318942c body=1769 status=ok
// SIG undefined FUN_14318942c(void)

void FUN_14318942c(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_788 [32];
  undefined4 local_768;
  undefined4 local_760;
  longlong local_750;
  longlong local_748;
  ulonglong local_740;
  uint local_734;
  uint local_730;
  uint local_72c;
  longlong local_728;
  ulonglong local_720;
  ulonglong local_718;
  undefined4 local_710 [2];
  longlong local_708 [17];
  longlong local_680;
  longlong local_678;
  uint local_670;
  byte local_66c;
  byte local_66b;
  undefined4 auStack_628 [64];
  undefined4 local_528 [16];
  undefined4 local_4e8 [32];
  ulonglong local_468;
  ulonglong uStack_460;
  ulonglong local_458;
  ulonglong uStack_450;
  undefined8 local_3c8 [64];
  undefined8 local_1c8 [16];
  undefined8 local_148 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_788;
  lVar5 = *param_1;
  lVar16 = (longlong)*(int *)(*(longlong *)param_1[4] + (longlong)param_4 * 4);
  lVar6 = lVar16 * 0x88;
  local_740 = (ulonglong)
              (uint)(*(int *)(param_1[2] + 0x68) *
                    *(int *)(*(longlong *)(param_1[2] + 0x70) + lVar16 * 4));
  local_728 = *(longlong *)param_1[5] + lVar6;
  uVar10 = *(ulonglong *)(param_1[1] + 8);
  local_718 = param_1[1] + 8 + ((longlong)uVar10 >> 0x18);
  if ((uVar10 & 1) == 0) {
    local_718 = uVar10;
  }
  lVar6 = *(longlong *)(*(longlong *)param_1[5] + 0x18 + lVar6);
  local_750 = (longlong)*(int *)(*param_2 + (longlong)param_3 * 4);
  local_678 = *(longlong *)(param_1[6] + 0x240);
  if (local_678 == 0) {
    local_678 = param_1[6];
  }
  local_678 = local_750 * 0x90 + local_678;
  local_748 = param_1[3];
  lVar16 = lVar6 + 0xa0;
  local_730 = (uint)*(byte *)(lVar6 + 0xb1);
  local_734 = (uint)*(byte *)(lVar6 + 0xb2);
  local_720 = (ulonglong)*(byte *)(lVar6 + 0xb3);
  local_72c = (uint)*(byte *)(lVar6 + 0xb4);
  if (lVar6 == 0) {
    lVar16 = 0;
  }
  uVar2 = *(uint *)(lVar5 + 0x2e0);
  local_670 = 0x20;
  if ((uVar2 != 0) && (local_670 = 0, uVar2 != 0)) {
    for (; (uVar2 >> local_670 & 1) == 0; local_670 = local_670 + 1) {
    }
  }
  local_66c = *(byte *)(lVar16 + 0x10) >> 1 & 1;
  local_66b = *(byte *)(lVar16 + 0x10) >> 2 & 1;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_708[0xe] = 0;
  local_708[0xf] = 0;
  local_708[0xc] = 0;
  local_708[0xd] = 0;
  local_708[10] = 0;
  local_708[0xb] = 0;
  local_708[8] = 0;
  local_708[9] = 0;
  local_708[6] = 0;
  local_708[7] = 0;
  local_708[4] = 0;
  local_708[5] = 0;
  local_708[2] = 0;
  local_708[3] = 0;
  local_708[0] = 0;
  local_708[1] = 0;
  iVar8 = *(int *)(local_728 + 0x68);
  local_680 = lVar5;
  if ((longlong)iVar8 != 0) {
    lVar16 = *(longlong *)(local_728 + 0x60);
    lVar14 = 0;
    do {
      plVar7 = *(longlong **)(lVar16 + lVar14);
      if (plVar7 != (longlong *)0x0) {
        switch(*(undefined1 *)(lVar16 + 10 + lVar14)) {
        case 0:
          (**(code **)(*plVar7 + 0x18))(plVar7,local_710);
          FUN_14738c7ba(&local_680,plVar7,*(undefined2 *)(lVar16 + 8 + lVar14));
          break;
        case 1:
          (**(code **)(*plVar7 + 8))(plVar7);
          if (local_66c == 0) {
            uVar1 = *(ushort *)(lVar16 + 8 + lVar14);
            uVar4 = *(undefined4 *)(plVar7[(ulonglong)local_670 + 0x19] + 0x6c);
            local_3c8[uVar1] = *(undefined8 *)(plVar7[(ulonglong)local_670 + 0x19] + 0x60);
            auStack_628[uVar1] = uVar4;
            uStack_460 = uStack_460 | 1L << ((byte)uVar1 & 0x3f);
            FUN_147386eba(local_678);
          }
          break;
        case 2:
          (**(code **)(*plVar7 + 8))(plVar7);
          if (local_66c == 0) {
            lVar13 = plVar7[(ulonglong)local_670 + 0x19] + 0x28;
            if (plVar7[(ulonglong)local_670 + 0x19] == 0) {
              lVar13 = 0;
            }
            uVar1 = *(ushort *)(lVar16 + 8 + lVar14);
            uVar4 = *(undefined4 *)(lVar13 + 0x44);
            local_1c8[uVar1] = *(undefined8 *)(lVar13 + 0x38);
            local_528[uVar1] = uVar4;
            local_458 = local_458 | 1L << ((byte)uVar1 & 0x3f);
            FUN_147386f46(local_678);
          }
          break;
        case 3:
          (**(code **)(*plVar7 + 0x10))(plVar7);
          if (local_66b == 0) {
            uVar1 = *(ushort *)(lVar16 + 8 + lVar14);
            uVar4 = *(undefined4 *)(plVar7[(ulonglong)local_670 + 4] + 0x6c);
            local_148[uVar1] = *(undefined8 *)(plVar7[(ulonglong)local_670 + 4] + 0x60);
            local_4e8[uVar1] = uVar4;
            uStack_450 = uStack_450 | 1L << ((byte)uVar1 & 0x3f);
          }
        }
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar8 * 0x10 != lVar14);
  }
  lVar16 = local_728;
  local_740 = (ulonglong)((uint)local_740 & 0xfffffffc);
  iVar8 = *(int *)(local_728 + 0x58);
  if ((longlong)iVar8 != 0) {
    lVar14 = *(longlong *)(local_728 + 0x50);
    lVar13 = 0;
    do {
      switch(*(undefined1 *)(lVar14 + 10 + lVar13)) {
      case 0:
        FUN_14738c7ba(&local_680,*(undefined8 *)(lVar14 + lVar13),
                      *(undefined2 *)(lVar14 + 8 + lVar13));
        break;
      case 1:
        FUN_14738c820(&local_680,*(undefined8 *)(lVar14 + lVar13),
                      *(undefined2 *)(lVar14 + 8 + lVar13));
        break;
      case 2:
        FUN_14738c87e(&local_680,*(undefined8 *)(lVar14 + lVar13),
                      *(undefined2 *)(lVar14 + 8 + lVar13));
        break;
      case 3:
        if (*(longlong *)(lVar14 + lVar13) == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(*(longlong *)(lVar14 + lVar13) + 0x20 + (ulonglong)local_670 * 8);
        }
        if (local_66b == 0) {
          uVar1 = *(ushort *)(lVar14 + 8 + lVar13);
          uVar4 = *(undefined4 *)(lVar11 + 0x6c);
          local_148[uVar1] = *(undefined8 *)(lVar11 + 0x60);
          local_4e8[uVar1] = uVar4;
          uStack_450 = uStack_450 | 1L << ((byte)uVar1 & 0x3f);
        }
        break;
      case 4:
        if (*(longlong *)(lVar14 + lVar13) == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(*(longlong *)(lVar14 + lVar13) + 0x40);
        }
        local_708[*(ushort *)(lVar14 + 8 + lVar13)] = lVar11;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)iVar8 * 0x10 != lVar13);
  }
  uVar10 = local_720;
  uVar2 = local_730;
  iVar8 = *(int *)(lVar6 + 0x80);
  if (0 < (longlong)iVar8) {
    lVar14 = *(longlong *)(lVar6 + 0x78);
    lVar13 = 0;
    do {
      uVar12 = (ulonglong)*(byte *)(lVar14 + lVar13);
      if ((uVar12 != 0xff) &&
         (lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x3d98) + uVar12 * 8), lVar11 != 0)) {
        uVar3 = *(uint *)(lVar5 + 0x2e0);
        if (uVar3 == 0) {
          uVar15 = 0x20;
        }
        else {
          uVar15 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
            }
          }
        }
        local_708[lVar13] = *(longlong *)(lVar11 + 0x40 + (ulonglong)uVar15 * 8);
      }
      lVar13 = lVar13 + 1;
    } while (iVar8 != lVar13);
  }
  lVar14 = local_718 + local_740;
  local_710[0] = 0xffffffff;
  FUN_14738c8de(&local_680,lVar6,local_710,local_708);
  uVar3 = local_72c;
  lVar5 = local_748;
  uVar9 = 0;
  uVar12 = local_468;
  do {
    if (local_708[uVar9] != 0) {
      uVar12 = uVar12 | 1L << (uVar9 & 0x3f);
      local_468 = uVar12;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x10);
  if (local_734 != 0) {
    local_768 = (undefined4)local_750;
    iVar8 = FUN_143160a10(local_748,local_3c8,local_734,0);
    *(ulonglong *)
     (lVar14 + (ulonglong)
               *(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x98 +
                        (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x25)) * 4) =
         (ulonglong)(uint)(iVar8 * *(int *)(lVar5 + 0x2c)) + *(longlong *)(lVar5 + 0x38);
  }
  lVar5 = local_748;
  if (uVar2 != 0) {
    local_760 = (undefined4)local_750;
    local_768 = 1;
    iVar8 = FUN_14737127a(local_748,local_4e8,local_148,uVar2);
    *(ulonglong *)
     (lVar14 + (ulonglong)
               *(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x98 +
                        (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x28)) * 4) =
         (ulonglong)(uint)(iVar8 * *(int *)(lVar5 + 0x9c)) + *(longlong *)(lVar5 + 0xa8);
  }
  lVar5 = local_748;
  if (uVar3 != 0) {
    local_760 = (undefined4)local_750;
    local_768 = 0;
    iVar8 = FUN_14737127a(local_748,local_528,local_1c8,uVar3);
    *(ulonglong *)
     (lVar14 + (ulonglong)
               *(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x98 +
                        (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x29)) * 4) =
         (ulonglong)(uint)(iVar8 * *(int *)(lVar5 + 0x2c)) + *(longlong *)(lVar5 + 0x38);
  }
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      if (local_708[uVar12] != 0) {
        *(undefined8 *)
         (lVar14 + (ulonglong)
                   *(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x98 +
                            (ulonglong)
                            ((uint)*(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x27) + (int)uVar12 &
                            0xff)) * 4) = *(undefined8 *)(local_708[uVar12] + 0xd8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar12);
  }
  uVar10 = (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0xd8) + 0xb9);
  if (uVar10 != 0xff) {
    uVar10 = (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0xd8) + 0x98 + uVar10);
    *(undefined4 *)(lVar14 + uVar10 * 4) = *(undefined4 *)(lVar16 + 0x78);
    *(undefined4 *)(lVar14 + 4 + uVar10 * 4) = *(undefined4 *)(lVar16 + 0x7c);
    *(undefined4 *)(lVar14 + 8 + uVar10 * 4) = *(undefined4 *)(lVar16 + 0x80);
    *(undefined4 *)(lVar14 + 0xc + uVar10 * 4) = *(undefined4 *)(lVar16 + 0x84);
  }
  if ((local_48 ^ (ulonglong)auStack_788) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143189b16 FUN_143189b16 body=125 status=ok
// SIG undefined FUN_143189b16(void)

void FUN_143189b16(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_14318a43e(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143189b94 FUN_143189b94 body=939 status=ok
// SIG undefined FUN_143189b94(void)

ulonglong FUN_143189b94(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_143189b16(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_143189d1a;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_143189d1a:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_143189e66;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_14318942c(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_143189e68;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_143189e66:
        uVar11 = 0;
LAB_143189e68:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_143189e66;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 143189f40 FUN_143189f40 body=73 status=ok
// SIG undefined FUN_143189f40(void)

void FUN_143189f40(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_14318a43e(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143189f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 143189f8a FUN_143189f8a body=434 status=ok
// SIG undefined FUN_143189f8a(void)

undefined8 * FUN_143189f8a(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a3553c0;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_14318a40e(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143185bb0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_14318a054;
      }
      _aligned_free(piVar3);
    }
  }
LAB_14318a054:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143185bb0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 14318a13c FUN_14318a13c body=53 status=ok
// SIG undefined FUN_14318a13c(void)

void FUN_14318a13c(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14318a172 FUN_14318a172 body=667 status=ok
// SIG undefined FUN_14318a172(void)

void FUN_14318a172(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_14318a26d;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_143185bb0);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_14318a26d:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_14318a2e7;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14318a2e7:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_14318a38e;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_143185bb0);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_14318a38e;
    }
    _aligned_free(_Memory);
  }
LAB_14318a38e:
  *param_1 = _Dst;
  return;
}



// FUNCTION 14318a40e FUN_14318a40e body=47 status=ok
// SIG undefined FUN_14318a40e(void)

void FUN_14318a40e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14318a43e FUN_14318a43e body=369 status=ok
// SIG undefined FUN_14318a43e(void)

void FUN_14318a43e(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14a3553d0;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_143189f40(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_143189f40(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 14318a5ce FUN_14318a5ce body=450 status=ok
// SIG undefined FUN_14318a5ce(void)

void FUN_14318a5ce(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a3553d0;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a355410;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_14318a6ab;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_143185bb0);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_14318a6ab:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_14318a725;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_14318a725:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 14318a790 FUN_14318a790 body=26 status=ok
// SIG undefined FUN_14318a790(void)

undefined8 FUN_14318a790(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_143189b94(param_2,0);
  }
  return 0;
}


