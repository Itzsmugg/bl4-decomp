// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144d29d90 FUN_144d29d90 body=363 status=ok
// SIG undefined FUN_144d29d90(void)

void FUN_144d29d90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 == 0) {
    FUN_144d29b00(param_1,param_2);
  }
  else {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtGeneration";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtBuildFaceAabbsAndPoints";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    FUN_144d29b00(param_1,param_2);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d29f00 FUN_144d29f00 body=127 status=ok
// SIG undefined FUN_144d29f00(void)

undefined8 * FUN_144d29f00(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 144d29f80 FUN_144d29f80 body=65 status=ok
// SIG undefined FUN_144d29f80(void)

int * FUN_144d29f80(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144d29fd0 FUN_144d29fd0 body=135 status=ok
// SIG undefined FUN_144d29fd0(void)

undefined8 * FUN_144d29fd0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *param_1 = hkaiNavMeshGeneration::Pruning::LocateBoundsEdgesTask::vftable;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[4] = hkaiNavMeshGeneration::Pruning::LocateBoundsEdgesTask::vftable;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar1;
  param_1[0x124] = param_2;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 144d2a060 FUN_144d2a060 body=638 status=ok
// SIG undefined FUN_144d2a060(void)

void FUN_144d2a060(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  uint local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined *local_78;
  undefined *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar7 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar6;
  }
  lVar7 = *(longlong *)(lVar6 + 0x3e0);
  local_res20 = lVar7;
  if (lVar7 != 0) {
    local_78 = &DAT_1499cd534;
    local_70 = &DAT_1499cd538;
    FUN_144b3f370(lVar7,&local_78);
    local_68 = "TtGeneration";
    local_60 = "";
    FUN_144b3f370(lVar7,&local_68);
    local_58 = "TtLocateBoundsEdgesTask";
    local_50 = "";
    FUN_144b3f370(lVar7,&local_58);
  }
  local_res18 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x900) + 0x20) + 0x28);
  lVar7 = FUN_144cb5260();
  local_res10 = *(longlong *)(lVar7 + 8);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x1b68);
  iVar1 = *(int *)(param_2 + 0x18);
  lVar7 = local_res10;
  do {
    puVar8 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar9 = *puVar8;
    *puVar8 = *puVar8 + 1;
    UNLOCK();
    uVar3 = (uint)uVar9;
    if ((uint)(uVar9 >> 0x20) <= (uint)uVar9) {
      iVar4 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      lVar7 = local_res20;
      if (iVar4 == 0) {
        if (local_res20 != 0) {
          local_58 = "Et";
          local_50 = "";
          FUN_144b3f260(local_res20,&local_58);
          local_68 = "Et";
          local_60 = "";
          FUN_144b3f260(lVar7,&local_68);
          local_78 = &DAT_149981764;
          local_70 = &DAT_149981766;
          FUN_144b3f260(lVar7,&local_78);
        }
        return;
      }
      uVar9 = (ulonglong)local_res8[0];
      lVar7 = local_res10;
      uVar3 = local_res8[0];
    }
    local_res8[0] = uVar3;
    iVar5 = (int)uVar9 + 1;
    lVar6 = (longlong)(int)uVar9;
    iVar4 = *(int *)(param_1 + 0x8f0);
    if (iVar5 < *(int *)(param_1 + 0x8f0)) {
      iVar4 = iVar5;
    }
    if (lVar6 < iVar4) {
      piVar11 = (int *)(local_res18 + 4 + lVar6 * 0x60);
      piVar10 = (int *)(lVar6 * 0x10 + lVar7);
      lVar6 = iVar4 - lVar6;
      do {
        if (*piVar10 != 0 || piVar10[1] != 0) {
          FUN_145031f80(uVar2,0,*piVar11 + 1);
        }
        piVar10 = piVar10 + 4;
        piVar11 = piVar11 + 0x18;
        lVar6 = lVar6 + -1;
        lVar7 = local_res10;
      } while (lVar6 != 0);
    }
  } while( true );
}



// FUNCTION 144d2a2e0 FUN_144d2a2e0 body=127 status=ok
// SIG undefined FUN_144d2a2e0(void)

undefined8 * FUN_144d2a2e0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 144d2a360 FUN_144d2a360 body=65 status=ok
// SIG undefined FUN_144d2a360(void)

int * FUN_144d2a360(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144d2a3b0 FUN_144d2a3b0 body=655 status=ok
// SIG undefined FUN_144d2a3b0(void)

void FUN_144d2a3b0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint local_res8 [2];
  int local_res10;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  int *local_50;
  int local_48;
  uint local_44;
  
  lVar15 = *(longlong *)(param_1 + 0x900);
  local_50 = (int *)0x0;
  local_48 = 0;
  local_44 = 0x80000000;
  lVar13 = *(longlong *)(lVar15 + 0x1b98);
  local_c8 = (undefined4)lVar13;
  local_d8._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
  uStack_c4 = local_d8._4_4_;
  lVar14 = (longlong)*(int *)(lVar15 + 0x1ba0) * 0x10 + lVar13;
  local_c0 = (undefined4)lVar14;
  uStack_d0._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
  local_bc = uStack_d0._4_4_;
  local_b8 = *(undefined8 *)(lVar15 + 0x30);
  uStack_b0 = *(undefined8 *)(lVar15 + 0x38);
  local_a8 = *(undefined8 *)(lVar15 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar15 + 0x48);
  local_98 = *(undefined8 *)(lVar15 + 0x50);
  uStack_90 = *(undefined8 *)(lVar15 + 0x58);
  local_88 = *(float *)(lVar15 + 0x60);
  fStack_84 = *(float *)(lVar15 + 100);
  fStack_80 = *(float *)(lVar15 + 0x68);
  fStack_7c = *(float *)(lVar15 + 0x6c);
  local_78 = *(undefined8 *)(lVar15 + 0x20);
  local_70 = *(undefined8 *)(lVar15 + 0x28);
  local_68 = lVar15 + 0x1b50;
  local_60 = *(undefined8 *)(lVar15 + 0x1b68);
  local_58 = *(undefined4 *)(lVar15 + 0x1b94);
  local_d8 = lVar13;
  uStack_d0 = lVar14;
  FUN_1401f86b2(&local_50,&PTR_vftable_14c6e47c0,8);
  iVar3 = *(int *)(param_2 + 0x18);
  iVar16 = iVar3 + 1;
  local_res10 = iVar16;
  do {
    puVar10 = (ulonglong *)
              ((longlong)*(int *)(((longlong)iVar3 + 1) * 0x40 + *(longlong *)(param_1 + 0x50)) *
               0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar11 = *puVar10;
    *puVar10 = *puVar10 + 1;
    UNLOCK();
    uVar7 = (uint)uVar11;
    if ((uint)(uVar11 >> 0x20) <= (uint)uVar11) {
      iVar16 = FUN_144bf98f0(param_1 + 0x10,iVar16,1,local_res8);
      if (iVar16 == 0) {
        local_48 = 0;
        if ((-1 < (int)local_44) && (local_50 != (int *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_50,(ulonglong)(local_44 & 0x7fffffff) << 2);
        }
        return;
      }
      uVar11 = (ulonglong)local_res8[0];
      iVar16 = local_res10;
      uVar7 = local_res8[0];
    }
    local_res8[0] = uVar7;
    iVar8 = (int)uVar11 + 1;
    lVar15 = (longlong)(int)uVar11;
    iVar9 = *(int *)(param_1 + 0x8f0);
    if (iVar8 < *(int *)(param_1 + 0x8f0)) {
      iVar9 = iVar8;
    }
    if (lVar15 < iVar9) {
      lVar13 = lVar15 << 4;
      lVar15 = iVar9 - lVar15;
      do {
        pfVar1 = (float *)(CONCAT44(uStack_c4,local_c8) + lVar13);
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        local_48 = 0;
        local_d8 = CONCAT44(fVar5 * local_a8._4_4_ + fVar4 * local_b8._4_4_ + fVar6 * local_98._4_4_
                            + fRam000000014c6dacac * fStack_84,
                            fVar5 * (float)local_a8 + fVar4 * (float)local_b8 +
                            fVar6 * (float)local_98 + fRam000000014c6dacac * local_88);
        uStack_d0 = CONCAT44(fVar5 * uStack_a0._4_4_ + fVar4 * uStack_b0._4_4_ +
                             fVar6 * uStack_90._4_4_ + fRam000000014c6dacac * fStack_7c,
                             fVar5 * (float)uStack_a0 + fVar4 * (float)uStack_b0 +
                             fVar6 * (float)uStack_90 + fRam000000014c6dacac * fStack_80);
        FUN_144d2bfb0(local_68,local_78,local_70,&local_d8,local_58,&local_50);
        piVar2 = local_50 + local_48;
        iVar16 = local_res10;
        for (piVar12 = local_50; local_res10 = iVar16, piVar12 != piVar2; piVar12 = piVar12 + 1) {
          FUN_145031f80(local_60,0,*piVar12 + 1);
          iVar16 = local_res10;
        }
        lVar13 = lVar13 + 0x10;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  } while( true );
}



// FUNCTION 144d2a640 FUN_144d2a640 body=110 status=ok
// SIG undefined FUN_144d2a640(void)

undefined8 * FUN_144d2a640(undefined8 *param_1,ulonglong param_2)

{
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x920);
  }
  return param_1;
}



// FUNCTION 144d2a6b0 FUN_144d2a6b0 body=195 status=ok
// SIG undefined FUN_144d2a6b0(void)

undefined8 * FUN_144d2a6b0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1ba0);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::Pruning::LocateSeedPointsTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::Pruning::LocateSeedPointsTask>
               ::vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar2;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,uVar2,uVar1,1);
  param_1[0x124] = param_2;
  *param_1 = hkaiNavMeshGeneration::Pruning::LocateSeedPointsTask::vftable;
  param_1[4] = hkaiNavMeshGeneration::Pruning::LocateSeedPointsTask::vftable;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 144d2a780 FUN_144d2a780 body=363 status=ok
// SIG undefined FUN_144d2a780(void)

void FUN_144d2a780(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 == 0) {
    FUN_144d2a3b0(param_1,param_2);
  }
  else {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtGeneration";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtLocateSeedPointsTask";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    FUN_144d2a3b0(param_1,param_2);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d2a8f0 FUN_144d2a8f0 body=127 status=ok
// SIG undefined FUN_144d2a8f0(void)

undefined8 * FUN_144d2a8f0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 144d2a970 FUN_144d2a970 body=65 status=ok
// SIG undefined FUN_144d2a970(void)

int * FUN_144d2a970(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144d2a9c0 FUN_144d2a9c0 body=958 status=ok
// SIG undefined FUN_144d2a9c0(void)

void FUN_144d2a9c0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int *piVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulonglong *puVar29;
  ulonglong uVar30;
  int *piVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  int *piVar35;
  uint local_res10 [2];
  int local_res18;
  longlong local_res20;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int *local_90;
  int local_88;
  uint local_84;
  int *local_80;
  int local_78;
  uint local_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  lVar6 = *(longlong *)(param_1 + 0x900);
  local_90 = (int *)0x0;
  local_88 = 0;
  local_84 = 0x80000000;
  local_80 = (int *)0x0;
  local_78 = 0;
  local_74 = 0x80000000;
  lVar7 = *(longlong *)(lVar6 + 0x1ba8);
  uVar18 = *(undefined8 *)(lVar6 + 0x30);
  uVar19 = *(undefined8 *)(lVar6 + 0x38);
  uVar20 = *(undefined8 *)(lVar6 + 0x40);
  uVar21 = *(undefined8 *)(lVar6 + 0x48);
  uVar22 = *(undefined8 *)(lVar6 + 0x50);
  uVar23 = *(undefined8 *)(lVar6 + 0x58);
  fVar11 = *(float *)(lVar6 + 0x60);
  fVar12 = *(float *)(lVar6 + 100);
  fVar13 = *(float *)(lVar6 + 0x68);
  fVar14 = *(float *)(lVar6 + 0x6c);
  uVar8 = *(undefined8 *)(lVar6 + 0x20);
  uVar9 = *(undefined8 *)(lVar6 + 0x28);
  uVar10 = *(undefined8 *)(lVar6 + 0x1b68);
  uVar4 = *(undefined4 *)(lVar6 + 0x1b94);
  FUN_1401f86b2(&local_90,&PTR_vftable_14c6e47c0,8);
  if ((local_74 & 0x7fffffff) < 8) {
    FUN_1401f86b2(&local_80,&PTR_vftable_14c6e47c0,8);
  }
  iVar5 = *(int *)(param_2 + 0x18);
  local_res20 = param_1 + 0x10;
  local_res18 = iVar5 + 1;
  lVar33 = local_res20;
  iVar26 = local_res18;
  do {
    puVar29 = (ulonglong *)
              ((longlong)*(int *)(((longlong)iVar5 + 1) * 0x40 + *(longlong *)(lVar33 + 0x40)) *
               0x40 + *(longlong *)(lVar33 + 0x490));
    LOCK();
    uVar30 = *puVar29;
    *puVar29 = *puVar29 + 1;
    UNLOCK();
    uVar25 = (uint)uVar30;
    if ((uint)(uVar30 >> 0x20) <= (uint)uVar30) {
      iVar26 = FUN_144bf98f0(lVar33,iVar26,1,local_res10);
      if (iVar26 == 0) {
        local_78 = 0;
        if ((-1 < (int)local_74) && (local_80 != (int *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_80,(ulonglong)(local_74 & 0x7fffffff) << 2);
        }
        local_80 = (int *)0x0;
        local_74 = 0x80000000;
        local_88 = 0;
        if ((-1 < (int)local_84) && (local_90 != (int *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_90,(ulonglong)(local_84 & 0x7fffffff) << 2);
        }
        return;
      }
      uVar30 = (ulonglong)local_res10[0];
      lVar33 = local_res20;
      iVar26 = local_res18;
      uVar25 = local_res10[0];
    }
    local_res10[0] = uVar25;
    iVar27 = (int)uVar30 + 1;
    lVar32 = (longlong)(int)uVar30;
    iVar28 = *(int *)(param_1 + 0x8f0);
    if (iVar27 < *(int *)(param_1 + 0x8f0)) {
      iVar28 = iVar27;
    }
    if (lVar32 < iVar28) {
      lVar34 = lVar32 << 5;
      lVar32 = iVar28 - lVar32;
      do {
        pfVar1 = (float *)(lVar34 + lVar7);
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        local_88 = 0;
        local_e8 = (float)uVar20;
        fStack_e4 = (float)((ulonglong)uVar20 >> 0x20);
        fStack_e0 = (float)uVar21;
        fStack_dc = (float)((ulonglong)uVar21 >> 0x20);
        local_f8 = (float)uVar18;
        fStack_f4 = (float)((ulonglong)uVar18 >> 0x20);
        fStack_f0 = (float)uVar19;
        fStack_ec = (float)((ulonglong)uVar19 >> 0x20);
        local_d8 = (float)uVar22;
        fStack_d4 = (float)((ulonglong)uVar22 >> 0x20);
        fStack_d0 = (float)uVar23;
        fStack_cc = (float)((ulonglong)uVar23 >> 0x20);
        local_68 = fVar16 * local_e8 + fVar15 * local_f8 + fVar17 * local_d8 +
                   fRam000000014c6dacac * fVar11;
        fStack_64 = fVar16 * fStack_e4 + fVar15 * fStack_f4 + fVar17 * fStack_d4 +
                    fRam000000014c6dacac * fVar12;
        fStack_60 = fVar16 * fStack_e0 + fVar15 * fStack_f0 + fVar17 * fStack_d0 +
                    fRam000000014c6dacac * fVar13;
        fStack_5c = fVar16 * fStack_dc + fVar15 * fStack_ec + fVar17 * fStack_cc +
                    fRam000000014c6dacac * fVar14;
        FUN_144d2bfb0(lVar6 + 0x1b50,uVar8,uVar9,&local_68,uVar4,&local_90);
        if (local_88 != 0) {
          pfVar1 = (float *)(lVar34 + 0x10 + lVar7);
          fVar15 = *pfVar1;
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          local_78 = 0;
          local_58 = fVar16 * local_e8 + fVar15 * local_f8 + fVar17 * local_d8 +
                     fRam000000014c6dacac * fVar11;
          fStack_54 = fVar16 * fStack_e4 + fVar15 * fStack_f4 + fVar17 * fStack_d4 +
                      fRam000000014c6dacac * fVar12;
          fStack_50 = fVar16 * fStack_e0 + fVar15 * fStack_f0 + fVar17 * fStack_d0 +
                      fRam000000014c6dacac * fVar13;
          fStack_4c = fVar16 * fStack_dc + fVar15 * fStack_ec + fVar17 * fStack_cc +
                      fRam000000014c6dacac * fVar14;
          FUN_144d2bfb0(lVar6 + 0x1b50,uVar8,uVar9,&local_58,uVar4,&local_80);
          if (local_78 != 0) {
            piVar2 = local_90 + local_88;
            piVar24 = local_80;
            iVar26 = local_78;
            for (piVar35 = local_90; piVar35 != piVar2; piVar35 = piVar35 + 1) {
              iVar28 = *piVar35;
              piVar3 = piVar24 + iVar26;
              for (piVar31 = piVar24; piVar31 != piVar3; piVar31 = piVar31 + 1) {
                FUN_145031f80(uVar10,iVar28 + 1,*piVar31 + 1);
                piVar24 = local_80;
                iVar26 = local_78;
              }
            }
          }
        }
        lVar34 = lVar34 + 0x20;
        lVar32 = lVar32 + -1;
        lVar33 = local_res20;
        iVar26 = local_res18;
      } while (lVar32 != 0);
    }
  } while( true );
}



// FUNCTION 144d2ad80 FUN_144d2ad80 body=110 status=ok
// SIG undefined FUN_144d2ad80(void)

undefined8 * FUN_144d2ad80(undefined8 *param_1,ulonglong param_2)

{
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x920);
  }
  return param_1;
}



// FUNCTION 144d2adf0 FUN_144d2adf0 body=195 status=ok
// SIG undefined FUN_144d2adf0(void)

undefined8 * FUN_144d2adf0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1bb0);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::Pruning::LocateRegionConnectionsTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::Pruning::LocateRegionConnectionsTask>
               ::vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar2;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,uVar2,uVar1,1);
  param_1[0x124] = param_2;
  *param_1 = hkaiNavMeshGeneration::Pruning::LocateRegionConnectionsTask::vftable;
  param_1[4] = hkaiNavMeshGeneration::Pruning::LocateRegionConnectionsTask::vftable;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 144d2aec0 FUN_144d2aec0 body=363 status=ok
// SIG undefined FUN_144d2aec0(void)

void FUN_144d2aec0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 == 0) {
    FUN_144d2a9c0(param_1,param_2);
  }
  else {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtGeneration";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtLocateRegionConnections";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    FUN_144d2a9c0(param_1,param_2);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d2b030 FUN_144d2b030 body=127 status=ok
// SIG undefined FUN_144d2b030(void)

undefined8 * FUN_144d2b030(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 144d2b0b0 FUN_144d2b0b0 body=65 status=ok
// SIG undefined FUN_144d2b0b0(void)

int * FUN_144d2b0b0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144d2b100 FUN_144d2b100 body=135 status=ok
// SIG undefined FUN_144d2b100(void)

undefined8 * FUN_144d2b100(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *param_1 = hkaiNavMeshGeneration::Pruning::AddConnectivityEdgesTask::vftable;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[4] = hkaiNavMeshGeneration::Pruning::AddConnectivityEdgesTask::vftable;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar1;
  param_1[0x124] = param_2;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 144d2b190 FUN_144d2b190 body=597 status=ok
// SIG undefined FUN_144d2b190(void)

void FUN_144d2b190(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int *piVar10;
  uint local_res8 [2];
  int local_res10;
  longlong local_res18;
  undefined *local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar2 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar7;
  }
  lVar2 = *(longlong *)(lVar7 + 0x3e0);
  local_res18 = lVar2;
  if (lVar2 != 0) {
    local_68 = &DAT_1499cd534;
    local_60 = &DAT_1499cd538;
    FUN_144b3f370(lVar2,&local_68);
    local_58 = "TtGeneration";
    local_50 = "";
    FUN_144b3f370(lVar2,&local_58);
    local_48 = "TtAddConnectivityEdges";
    local_40 = "";
    FUN_144b3f370(lVar2,&local_48);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x1b68);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x900) + 0x20) + 0x28);
  iVar1 = *(int *)(param_2 + 0x18);
  local_res10 = iVar1 + 1;
  do {
    puVar8 = (ulonglong *)
             ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x50)) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar9 = *puVar8;
    *puVar8 = *puVar8 + 1;
    UNLOCK();
    uVar4 = (uint)uVar9;
    if ((uint)(uVar9 >> 0x20) <= (uint)uVar9) {
      iVar5 = FUN_144bf98f0(param_1 + 0x10,local_res10,1,local_res8);
      lVar7 = local_res18;
      if (iVar5 == 0) {
        if (local_res18 != 0) {
          local_48 = "Et";
          local_40 = "";
          FUN_144b3f260(local_res18,&local_48);
          local_58 = "Et";
          local_50 = "";
          FUN_144b3f260(lVar7,&local_58);
          local_68 = &DAT_149981764;
          local_60 = &DAT_149981766;
          FUN_144b3f260(lVar7,&local_68);
        }
        return;
      }
      uVar9 = (ulonglong)local_res8[0];
      uVar4 = local_res8[0];
    }
    local_res8[0] = uVar4;
    iVar6 = (int)uVar9 + 1;
    lVar7 = (longlong)(int)uVar9;
    iVar5 = *(int *)(param_1 + 0x8f0);
    if (iVar6 < *(int *)(param_1 + 0x8f0)) {
      iVar5 = iVar6;
    }
    if (lVar7 < iVar5) {
      piVar10 = (int *)(lVar7 * 0x60 + 4 + lVar2);
      lVar7 = iVar5 - lVar7;
      do {
        if ((int)uVar9 <= piVar10[3]) {
          FUN_145031f80(uVar3,*piVar10 + 1,*(int *)((longlong)piVar10[3] * 0x60 + 4 + lVar2) + 1);
        }
        uVar9 = (ulonglong)((int)uVar9 + 1);
        piVar10 = piVar10 + 0x18;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  } while( true );
}



// FUNCTION 144d2b3f0 FUN_144d2b3f0 body=127 status=ok
// SIG undefined FUN_144d2b3f0(void)

undefined8 * FUN_144d2b3f0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 144d2b470 FUN_144d2b470 body=729 status=ok
// SIG undefined FUN_144d2b470(void)

void FUN_144d2b470(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char *local_28;
  char *pcStack_20;
  undefined *local_18;
  undefined *puStack_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 == 0) {
    local_28 = "TtFindRegions";
    pcStack_20 = "";
  }
  else {
    local_28 = "TtAi";
    pcStack_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    local_28 = "TtGeneration";
    pcStack_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    local_28 = "TtFindRegions";
    pcStack_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  FUN_145032060(*(undefined8 *)(lVar3 + 0x1b68),lVar3 + 0x1b70,lVar3 + 0x1b80);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x1b68);
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(plVar2 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + 0xc)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)((longlong)plVar2 + 0xc) = 0x80000000;
    (*DAT_14c787678)(0,plVar2,0);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1b68) = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_18 = *(undefined **)(lVar3 + 0x1b80);
  puStack_10 = local_18 + (longlong)*(int *)(lVar3 + 0x1b88) * 4;
  local_28 = *(char **)(lVar3 + 0x1b70);
  pcStack_20 = local_28 + (longlong)*(int *)(lVar3 + 0x1b78) * 4;
  FUN_145036b70(*(undefined8 *)(lVar3 + 0x20),&local_28,&local_18);
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x1b78) + -1;
  *(int *)(lVar3 + 0x910) = iVar4;
  FUN_144bf95c0(lVar3 + 0x30,*(undefined4 *)(lVar3 + 0x914),iVar4,1);
  if (lVar1 != 0) {
    local_28 = "Et";
    pcStack_20 = "";
    local_18 = &DAT_149981764;
    puStack_10 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_18);
    local_28 = "Et";
    pcStack_20 = "";
    local_18 = &DAT_149981764;
    puStack_10 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_18);
    local_28 = "Et";
    pcStack_20 = "";
    local_18 = &DAT_149981764;
    puStack_10 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d2b750 FUN_144d2b750 body=8 status=ok
// SIG undefined FUN_144d2b750(void)

char * FUN_144d2b750(void)

{
  return "FindRegions";
}



// FUNCTION 144d2b760 FUN_144d2b760 body=115 status=ok
// SIG undefined FUN_144d2b760(void)

undefined8 * FUN_144d2b760(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144d2b7e0 FUN_144d2b7e0 body=65 status=ok
// SIG undefined FUN_144d2b7e0(void)

int * FUN_144d2b7e0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144d2b830 FUN_144d2b830 body=485 status=ok
// SIG undefined FUN_144d2b830(void)

void FUN_144d2b830(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong lStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  longlong local_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x900);
  local_40 = 0;
  local_38 = 0;
  local_34 = 0x80000000;
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar4 = *(longlong *)(lVar3 + 0x18);
  uStack_94 = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_88 = (undefined4)lVar4;
  lVar4 = lVar4 + (longlong)*(int *)(lVar3 + 0x20) * 4;
  local_84 = uStack_94;
  local_78 = *(longlong *)(lVar3 + 0x28);
  uStack_8c = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_80 = (undefined4)lVar4;
  local_68 = *(undefined8 *)(lVar2 + 0x28);
  lStack_70 = (longlong)*(int *)(lVar3 + 0x30) * 0x60 + local_78;
  local_60 = *(longlong *)(lVar2 + 0x1b70);
  local_7c = uStack_8c;
  lStack_58 = local_60 + (longlong)*(int *)(lVar2 + 0x1b78) * 4;
  lVar4 = *(longlong *)(lVar2 + 0x1b80);
  lStack_48 = lVar4 + (longlong)*(int *)(lVar2 + 0x1b88) * 4;
  local_98 = (undefined4)lVar4;
  uStack_94 = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_50 = local_98;
  uStack_4c = uStack_94;
  FUN_1401f86b2(&local_40,&PTR_vftable_14c6e47a0,0x40);
  local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0x900) + 0x1b90);
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar6 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + ((longlong)iVar1 + 1) * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar8 = *puVar6;
    *puVar6 = *puVar6 + 1;
    UNLOCK();
    uVar7 = (uint)uVar8;
    if ((uint)(uVar8 >> 0x20) <= (uint)uVar8) {
      iVar5 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar5 == 0) {
        if ((-1 < (int)local_34) && (local_40 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_40,(ulonglong)(local_34 & 0x7fffffff) << 2);
        }
        return;
      }
      uVar8 = (ulonglong)local_res8[0];
      uVar7 = local_res8[0];
    }
    local_res8[0] = uVar7;
    uVar7 = (uint)uVar8;
    iVar5 = *(int *)(param_1 + 0x8f0);
    if ((int)(uVar7 + 1) < *(int *)(param_1 + 0x8f0)) {
      iVar5 = uVar7 + 1;
    }
    while ((int)uVar7 < iVar5) {
      FUN_144d2bab0(param_1 + -0x20,&local_88,uVar8 & 0xffffffff);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    }
  } while( true );
}



// FUNCTION 144d2ba20 FUN_144d2ba20 body=135 status=ok
// SIG undefined FUN_144d2ba20(void)

undefined8 * FUN_144d2ba20(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *param_1 = hkaiNavMeshGeneration::Pruning::PruneRegionsByAreaTask::vftable;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[4] = hkaiNavMeshGeneration::Pruning::PruneRegionsByAreaTask::vftable;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar1;
  param_1[0x124] = param_2;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 144d2bab0 FUN_144d2bab0 body=596 status=ok
// SIG undefined FUN_144d2bab0(void)

void FUN_144d2bab0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  longlong local_78;
  longlong lStack_70;
  
  iVar3 = *(int *)(param_2[5] + (longlong)param_3 * 4);
  piVar1 = (int *)(param_2[7] +
                  ((longlong)(*(int *)(param_2[5] + 4 + (longlong)param_3 * 4) - iVar3) +
                  (longlong)iVar3) * 4);
  piVar12 = (int *)(param_2[7] + (longlong)iVar3 * 4);
  for (piVar14 = piVar12; piVar14 != piVar1; piVar14 = piVar14 + 1) {
    if (*piVar14 == 0) {
      return;
    }
  }
  lVar5 = param_2[2];
  lVar6 = param_2[4];
  lVar7 = *param_2;
  fVar2 = *(float *)(param_2 + 0xb);
  lVar8 = param_2[3];
  local_78 = lVar5;
  lStack_70 = lVar8;
  if ((fVar2 <= 1.8446726e+19) && (uVar11 = 0, piVar12 != piVar1)) {
    piVar14 = piVar12;
    do {
      local_78 = lVar5;
      lStack_70 = lVar8;
      fVar15 = (float)FUN_144d28e90(lVar7 + (longlong)(*piVar14 + -1) * 4,&local_78,lVar6);
      lVar10 = 0;
      fVar16 = 0.0;
      if (0.0 <= fVar15) {
        fVar16 = fVar15;
      }
      if ((9.223372e+18 <= fVar16) && (fVar16 = fVar16 - 9.223372e+18, fVar16 < 9.223372e+18)) {
        lVar10 = -0x8000000000000000;
      }
      uVar11 = uVar11 + (longlong)fVar16 + lVar10;
      if (fVar2 <= (float)uVar11) {
        return;
      }
      piVar14 = piVar14 + 1;
    } while (piVar14 != piVar1);
  }
  lVar5 = *(longlong *)(param_1 + 0x920);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x1be8));
  lVar6 = param_2[2];
  lVar7 = *param_2;
  lVar8 = *(longlong *)(param_1 + 0x920);
  for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
    iVar3 = *piVar12;
    lVar10 = *(longlong *)(lVar8 + 0x1bd0);
    lVar13 = (longlong)iVar3 + -1 >> 5;
    *(uint *)(lVar10 + lVar13 * 4) = *(uint *)(lVar10 + lVar13 * 4) | 1 << (iVar3 - 1U & 0x1f);
    uVar4 = *(uint *)(lVar7 + -4 + (longlong)iVar3 * 4);
    uVar9 = uVar4;
    do {
      lVar10 = *(longlong *)(lVar8 + 0x1bb8);
      lVar13 = (longlong)(int)uVar9 >> 5;
      *(uint *)(lVar10 + lVar13 * 4) = *(uint *)(lVar10 + lVar13 * 4) | 1 << (uVar9 & 0x1f);
      uVar9 = *(uint *)((longlong)(int)uVar9 * 0x60 + 0xc + lVar6);
    } while (uVar9 != uVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x1be8));
  return;
}



// FUNCTION 144d2bd10 FUN_144d2bd10 body=127 status=ok
// SIG undefined FUN_144d2bd10(void)

undefined8 * FUN_144d2bd10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 144d2bd90 FUN_144d2bd90 body=395 status=ok
// SIG undefined FUN_144d2bd90(void)

void FUN_144d2bd90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtGeneration";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtDoRemoval";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_145036b80(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                *(longlong *)(param_1 + 0x10) + 0x1bd0);
  lVar2 = *(longlong *)(param_1 + 0x10);
  FUN_144cb54d0(*(undefined8 *)(lVar2 + 0x20),lVar2 + 0x1bb8,lVar2 + 0x1bd0);
  FUN_145036b30(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
  FUN_144d29330(*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d2bf20 FUN_144d2bf20 body=8 status=ok
// SIG undefined FUN_144d2bf20(void)

char * FUN_144d2bf20(void)

{
  return "DoRemoval";
}



// FUNCTION 144d2bf30 FUN_144d2bf30 body=115 status=ok
// SIG undefined FUN_144d2bf30(void)

undefined8 * FUN_144d2bf30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144d2bfb0 FUN_144d2bfb0 body=516 status=ok
// SIG undefined FUN_144d2bfb0(void)

void FUN_144d2bfb0(longlong *param_1,longlong param_2,undefined8 param_3,float *param_4,
                  float param_5,undefined1 (*param_6) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  undefined1 auVar19 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float fVar32;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  undefined4 local_498 [2];
  longlong local_490;
  longlong local_488;
  longlong local_480;
  longlong local_478;
  undefined8 local_470;
  undefined1 (*local_468) [16];
  undefined1 local_458 [16];
  undefined4 local_448;
  undefined1 auStack_444 [1020];
  undefined1 (*local_48) [16];
  longlong *plVar7;
  
  local_490 = *(longlong *)(param_2 + 0x18);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  local_488 = local_490 + (longlong)*(int *)(param_2 + 0x20) * 4;
  local_480 = *(longlong *)(param_2 + 0x28);
  local_478 = (longlong)*(int *)(param_2 + 0x30) * 0x60 + local_480;
  local_48 = (undefined1 (*) [16])auStack_444;
  local_498[0] = 0xffffffff;
  local_468 = param_6;
  local_448 = 1;
  plVar7 = param_1;
  local_4a8 = param_5;
  fStack_4a4 = param_5;
  fStack_4a0 = param_5;
  fStack_49c = param_5;
  local_470 = param_3;
  do {
    local_48 = (undefined1 (*) [16])((longlong)local_48[-1] + 0xc);
    auVar11._4_4_ = fVar2;
    auVar11._0_4_ = fVar2;
    auVar11._8_4_ = fVar2;
    auVar11._12_4_ = fVar2;
    auVar29._4_4_ = fVar1;
    auVar29._0_4_ = fVar1;
    auVar29._8_4_ = fVar1;
    auVar29._12_4_ = fVar1;
    auVar10._4_4_ = fVar3;
    auVar10._0_4_ = fVar3;
    auVar10._8_4_ = fVar3;
    auVar10._12_4_ = fVar3;
    pauVar8 = (undefined1 (*) [16])
              ((longlong)*(int *)*local_48 * 0x80 + *param_1 + (longlong)param_1);
    auVar18 = maxps(auVar11,pauVar8[2]);
    auVar11 = maxps(auVar10,pauVar8[4]);
    auVar10 = *pauVar8;
    auVar18 = minps(auVar18,pauVar8[3]);
    auVar11 = minps(auVar11,pauVar8[5]);
    auVar29 = maxps(auVar29,auVar10);
    auVar29 = minps(auVar29,pauVar8[1]);
    fVar17 = auVar18._0_4_ - fVar2;
    fVar20 = auVar18._4_4_ - fVar2;
    fVar21 = auVar18._8_4_ - fVar2;
    fVar22 = auVar18._12_4_ - fVar2;
    fVar28 = auVar29._0_4_ - fVar1;
    fVar30 = auVar29._4_4_ - fVar1;
    fVar31 = auVar29._8_4_ - fVar1;
    fVar32 = auVar29._12_4_ - fVar1;
    fVar9 = auVar11._0_4_ - fVar3;
    fVar14 = auVar11._4_4_ - fVar3;
    fVar15 = auVar11._8_4_ - fVar3;
    fVar16 = auVar11._12_4_ - fVar3;
    auVar18._0_4_ =
         -(uint)(fVar28 * fVar28 + fVar17 * fVar17 + fVar9 * fVar9 <= local_4a8 &&
                auVar10._0_4_ <= *(float *)pauVar8[1]);
    auVar18._4_4_ =
         -(uint)(fVar30 * fVar30 + fVar20 * fVar20 + fVar14 * fVar14 <= fStack_4a4 &&
                auVar10._4_4_ <= *(float *)(pauVar8[1] + 4));
    auVar18._8_4_ =
         -(uint)(fVar31 * fVar31 + fVar21 * fVar21 + fVar15 * fVar15 <= fStack_4a0 &&
                auVar10._8_4_ <= *(float *)(pauVar8[1] + 8));
    auVar18._12_4_ =
         -(uint)(fVar32 * fVar32 + fVar22 * fVar22 + fVar16 * fVar16 <= fStack_49c &&
                auVar10._12_4_ <= *(float *)(pauVar8[1] + 0xc));
    iVar4 = movmskps((int)param_6,auVar18);
    if (iVar4 != 0) {
      auVar10 = pauVar8[6];
      uVar6 = movmskps((int)plVar7,auVar18);
      plVar7 = (longlong *)CONCAT44((int)((ulonglong)plVar7 >> 0x20),uVar6);
      uVar23 = auVar10._0_4_;
      uVar24 = auVar10._4_4_;
      uVar25 = auVar10._8_4_;
      uVar26 = auVar10._12_4_;
      lVar5 = (ulonglong)uVar6 * 0x40;
      iVar4 = *(int *)(&DAT_149990100 + (longlong)plVar7 * 4);
      auVar12._0_4_ = uVar25 & *(uint *)(&DAT_14998fd20 + lVar5);
      auVar12._4_4_ = uVar25 & *(uint *)(&UNK_14998fd24 + lVar5);
      auVar12._8_4_ = uVar25 & *(uint *)(&UNK_14998fd28 + lVar5);
      auVar12._12_4_ = uVar25 & *(uint *)(&UNK_14998fd2c + lVar5);
      auVar27._0_4_ = uVar26 & *(uint *)(&DAT_14998fd30 + lVar5);
      auVar27._4_4_ = uVar26 & *(uint *)(&UNK_14998fd34 + lVar5);
      auVar27._8_4_ = uVar26 & *(uint *)(&UNK_14998fd38 + lVar5);
      auVar27._12_4_ = uVar26 & *(uint *)(&UNK_14998fd3c + lVar5);
      auVar19._0_4_ = uVar24 & *(uint *)(&DAT_14998fd10 + lVar5);
      auVar19._4_4_ = uVar24 & *(uint *)(&UNK_14998fd14 + lVar5);
      auVar19._8_4_ = uVar24 & *(uint *)(&UNK_14998fd18 + lVar5);
      auVar19._12_4_ = uVar24 & *(uint *)(&UNK_14998fd1c + lVar5);
      auVar13._0_4_ = uVar23 & *(uint *)(&DAT_14998fd00 + lVar5);
      auVar13._4_4_ = uVar23 & *(uint *)(&UNK_14998fd04 + lVar5);
      auVar13._8_4_ = uVar23 & *(uint *)(&UNK_14998fd08 + lVar5);
      auVar13._12_4_ = uVar23 & *(uint *)(&UNK_14998fd0c + lVar5);
      local_458 = auVar27 | auVar12 | auVar19 | auVar13;
      if ((pauVar8[7][4] & 1) == 0) {
        *local_48 = local_458;
        local_48 = (undefined1 (*) [16])((longlong)*local_48 + (longlong)iVar4 * 4);
      }
      else {
        plVar7 = (longlong *)local_498;
        fStack_4a4 = local_4a8;
        fStack_4a0 = local_4a8;
        fStack_49c = local_4a8;
        FUN_144d2c1c0(plVar7,local_458,(longlong)iVar4,param_4,&local_4a8);
      }
    }
    param_6 = (undefined1 (*) [16])&local_448;
  } while (param_6 != local_48);
  return;
}



// FUNCTION 144d2c1c0 FUN_144d2c1c0 body=1277 status=ok
// SIG undefined FUN_144d2c1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d2c1c0(longlong param_1,longlong param_2,int param_3,float *param_4,
                  undefined1 (*param_5) [16])

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  
  if (0 < param_3) {
    lVar18 = 0;
    do {
      iVar4 = *(int *)(param_2 + lVar18 * 4);
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar8 = *(longlong *)(param_1 + 0x28);
      fVar11 = *param_4;
      fVar12 = param_4[1];
      fVar13 = param_4[2];
      auVar50 = *param_5;
      uVar5 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 4);
      lVar20 = (longlong)(int)uVar5 * 0x60;
      uVar6 = *(uint *)(lVar20 + lVar7);
      uVar22 = (ulonglong)*(int *)(lVar20 + 0xc + lVar7);
      pfVar1 = (float *)(*(longlong *)(lVar8 + 0x18 + (ulonglong)(uVar6 >> 0x1e) * 0x10) +
                        (ulonglong)(uVar6 & 0x3fffffff) * 0x10);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar51 = fVar11 - fVar14;
      fVar52 = fVar12 - fVar15;
      fVar53 = fVar13 - fVar16;
      uVar6 = *(uint *)(uVar22 * 0x60 + lVar7);
      pfVar2 = (float *)(*(longlong *)(lVar8 + 0x18 + (ulonglong)(uVar6 >> 0x1e) * 0x10) +
                        (ulonglong)(uVar6 & 0x3fffffff) * 0x10);
      fVar43 = *pfVar2;
      fVar44 = pfVar2[1];
      fVar45 = pfVar2[2];
      fVar34 = pfVar2[3];
      do {
        fVar39 = fVar43 - fVar14;
        fVar40 = fVar44 - fVar15;
        fVar41 = fVar45 - fVar16;
        fVar42 = fVar34 - pfVar1[3];
        fVar54 = fVar11 - fVar43;
        fVar55 = fVar12 - fVar44;
        fVar56 = fVar13 - fVar45;
        lVar23 = (longlong)(int)uVar22 * 0x60;
        uVar6 = *(uint *)(lVar23 + lVar7);
        uVar21 = (ulonglong)(uVar6 & 0x3fffffff);
        uVar6 = uVar6 >> 0x1e;
        lVar20 = *(longlong *)(lVar8 + 0x18 + (ulonglong)uVar6 * 0x10);
        pfVar2 = (float *)(lVar20 + uVar21 * 0x10);
        fVar57 = *pfVar2;
        fVar58 = pfVar2[1];
        fVar59 = pfVar2[2];
        fVar35 = pfVar2[3];
        fVar46 = fVar14 - fVar57;
        fVar47 = fVar15 - fVar58;
        fVar48 = fVar16 - fVar59;
        fVar49 = pfVar1[3] - fVar35;
        fVar43 = fVar57 - fVar43;
        fVar44 = fVar58 - fVar44;
        fVar45 = fVar59 - fVar45;
        fVar57 = fVar11 - fVar57;
        fVar58 = fVar12 - fVar58;
        fVar59 = fVar13 - fVar59;
        fVar60 = param_4[3] - fVar35;
        fVar36 = fVar39 * fVar44 - fVar40 * fVar43;
        fVar37 = fVar40 * fVar45 - fVar41 * fVar44;
        fVar38 = fVar41 * fVar43 - fVar39 * fVar45;
        fVar33 = (fVar57 * fVar48 - fVar46 * fVar59) * fVar38;
        fVar34 = (fVar60 * fVar49 - fVar49 * fVar60) *
                 (fVar42 * (fVar35 - fVar34) - fVar42 * (fVar35 - fVar34));
        auVar30._4_4_ =
             -(uint)(0.0 < (fVar54 * fVar45 - fVar56 * fVar43) * fVar38 +
                           (fVar56 * fVar44 - fVar55 * fVar45) * fVar37 +
                           (fVar55 * fVar43 - fVar54 * fVar44) * fVar36);
        auVar30._0_4_ =
             -(uint)(0.0 < (fVar41 * fVar51 - fVar53 * fVar39) * fVar38 +
                           (fVar40 * fVar53 - fVar52 * fVar41) * fVar37 +
                           (fVar39 * fVar52 - fVar51 * fVar40) * fVar36);
        auVar30._8_4_ =
             -(uint)(0.0 < fVar33 + (fVar59 * fVar47 - fVar48 * fVar58) * fVar37 +
                           (fVar58 * fVar46 - fVar47 * fVar57) * fVar36);
        auVar30._12_4_ = -(uint)(0.0 < fVar34 + fVar33 + fVar34);
        uVar17 = movmskps(uVar6 * 2,auVar30);
        if (((byte)uVar17 & 7) == 7) {
          fVar43 = fVar37 * fVar37;
          fVar44 = fVar38 * fVar38;
          fVar45 = fVar36 * fVar36;
          fVar37 = fVar37 * fVar51;
          fVar38 = fVar38 * fVar52;
          fVar36 = fVar36 * fVar53;
          auVar27._0_4_ = fVar44 + fVar43 + fVar45;
          auVar27._4_4_ = fVar44 + fVar43 + fVar45;
          auVar27._8_4_ = fVar44 + fVar43 + fVar45;
          auVar27._12_4_ = fVar44 + fVar43 + fVar45;
          auVar29._0_4_ = fVar38 + fVar37 + fVar36;
          auVar29._4_4_ = fVar38 + fVar37 + fVar36;
          auVar29._8_4_ = fVar38 + fVar37 + fVar36;
          auVar29._12_4_ = fVar38 + fVar37 + fVar36;
          if (auVar27._0_4_ == 0.0) {
            auVar32._0_4_ = auVar27._0_4_ * 0.0;
            auVar32._4_4_ = auVar27._4_4_ * 0.0;
            auVar32._8_4_ = auVar27._8_4_ * 0.0;
            auVar32._12_4_ = auVar27._12_4_ * 0.0;
          }
          else {
            auVar30 = divps(auVar29,auVar27);
            auVar32._0_4_ = auVar30._0_4_ * auVar30._0_4_ * auVar27._0_4_;
            auVar32._4_4_ = auVar30._4_4_ * auVar30._4_4_ * auVar27._4_4_;
            auVar32._8_4_ = auVar30._8_4_ * auVar30._8_4_ * auVar27._8_4_;
            auVar32._12_4_ = auVar30._12_4_ * auVar30._12_4_ * auVar27._12_4_;
          }
        }
        else {
          auVar24._0_4_ = fVar52 * fVar40 + fVar51 * fVar39 + fVar53 * fVar41;
          auVar24._4_4_ = fVar55 * fVar44 + fVar54 * fVar43 + fVar56 * fVar45;
          auVar24._8_4_ = fVar58 * fVar47 + fVar57 * fVar46 + fVar59 * fVar48;
          auVar24._12_4_ = fVar60 * fVar49 + fVar58 * fVar47 + fVar60 * fVar49;
          fVar34 = fVar40 * fVar40 + fVar39 * fVar39 + fVar41 * fVar41;
          fVar35 = fVar44 * fVar44 + fVar43 * fVar43 + fVar45 * fVar45;
          fVar33 = fVar47 * fVar47 + fVar46 * fVar46 + fVar48 * fVar48;
          fVar36 = fVar49 * fVar49 + fVar47 * fVar47 + fVar49 * fVar49;
          auVar10._4_4_ = fVar35;
          auVar10._0_4_ = fVar34;
          auVar10._8_4_ = fVar33;
          auVar10._12_4_ = fVar36;
          auVar30 = divps(auVar24,auVar10);
          auVar28._0_4_ = ~-(uint)(fVar34 == 0.0) & auVar30._0_4_;
          auVar28._4_4_ = ~-(uint)(fVar35 == 0.0) & auVar30._4_4_;
          auVar28._8_4_ = ~-(uint)(fVar33 == 0.0) & auVar30._8_4_;
          auVar28._12_4_ = ~-(uint)(fVar36 == 0.0) & auVar30._12_4_;
          auVar30 = minps(auVar28,_DAT_14c6daca0);
          auVar30 = maxps(ZEXT816(0),auVar30);
          fVar34 = auVar30._0_4_;
          fVar35 = auVar30._4_4_;
          fVar33 = auVar30._8_4_;
          fVar36 = fVar51 - fVar34 * fVar39;
          fVar37 = fVar52 - fVar34 * fVar40;
          fVar34 = fVar53 - fVar34 * fVar41;
          fVar54 = fVar54 - fVar35 * fVar43;
          fVar55 = fVar55 - fVar35 * fVar44;
          fVar56 = fVar56 - fVar35 * fVar45;
          fVar36 = fVar36 * fVar36;
          fVar37 = fVar37 * fVar37;
          fVar34 = fVar34 * fVar34;
          fVar57 = fVar57 - fVar33 * fVar46;
          fVar58 = fVar58 - fVar33 * fVar47;
          fVar59 = fVar59 - fVar33 * fVar48;
          fVar54 = fVar54 * fVar54;
          fVar55 = fVar55 * fVar55;
          fVar56 = fVar56 * fVar56;
          fVar57 = fVar57 * fVar57;
          fVar58 = fVar58 * fVar58;
          fVar59 = fVar59 * fVar59;
          auVar25._0_4_ = fVar55 + fVar54 + fVar56;
          auVar25._4_4_ = fVar55 + fVar54 + fVar56;
          auVar25._8_4_ = fVar55 + fVar54 + fVar56;
          auVar25._12_4_ = fVar55 + fVar54 + fVar56;
          auVar31._0_4_ = fVar37 + fVar36 + fVar34;
          auVar31._4_4_ = fVar37 + fVar36 + fVar34;
          auVar31._8_4_ = fVar37 + fVar36 + fVar34;
          auVar31._12_4_ = fVar37 + fVar36 + fVar34;
          auVar30 = minps(auVar31,auVar25);
          auVar26._0_4_ = fVar58 + fVar57 + fVar59;
          auVar26._4_4_ = fVar58 + fVar57 + fVar59;
          auVar26._8_4_ = fVar58 + fVar57 + fVar59;
          auVar26._12_4_ = fVar58 + fVar57 + fVar59;
          auVar32 = minps(auVar30,auVar26);
        }
        uVar6 = *(uint *)(lVar23 + 0xc + lVar7);
        uVar22 = (ulonglong)uVar6;
        pfVar2 = (float *)(lVar20 + uVar21 * 0x10);
        fVar43 = *pfVar2;
        fVar44 = pfVar2[1];
        fVar45 = pfVar2[2];
        fVar34 = pfVar2[3];
        auVar50 = minps(auVar50,auVar32);
      } while (uVar6 != uVar5);
      if (auVar50._0_4_ <= *(float *)*param_5) {
        if (auVar50._0_4_ < *(float *)*param_5) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
          *param_5 = auVar50;
        }
        plVar9 = *(longlong **)(param_1 + 0x30);
        iVar19 = (int)plVar9[1] + 1;
        if ((int)(*(uint *)((longlong)plVar9 + 0xc) & 0x7fffffff) < iVar19) {
          FUN_1401f86b2(plVar9,&PTR_vftable_14c6e47c0,(longlong)iVar19);
        }
        piVar3 = (int *)(*plVar9 + (longlong)(int)plVar9[1] * 4);
        if (piVar3 != (int *)0x0) {
          *piVar3 = iVar4;
        }
        *(int *)(plVar9 + 1) = iVar19;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < param_3);
  }
  return;
}



// FUNCTION 144d2c6c0 FUN_144d2c6c0 body=9 status=ok
// SIG undefined FUN_144d2c6c0(void)

void FUN_144d2c6c0(longlong param_1)

{
  FUN_144d2b3f0(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c6cc FUN_144d2c6cc body=9 status=ok
// SIG undefined FUN_144d2c6cc(void)

void FUN_144d2c6cc(longlong param_1)

{
  FUN_144d29f00(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c6d8 FUN_144d2c6d8 body=9 status=ok
// SIG undefined FUN_144d2c6d8(void)

void FUN_144d2c6d8(longlong param_1)

{
  FUN_144d2a2e0(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c6e4 FUN_144d2c6e4 body=9 status=ok
// SIG undefined FUN_144d2c6e4(void)

void FUN_144d2c6e4(longlong param_1)

{
  FUN_144d29a30(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c6f0 FUN_144d2c6f0 body=9 status=ok
// SIG undefined FUN_144d2c6f0(void)

void FUN_144d2c6f0(longlong param_1)

{
  FUN_144d2a8f0(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c6fc FUN_144d2c6fc body=9 status=ok
// SIG undefined FUN_144d2c6fc(void)

void FUN_144d2c6fc(longlong param_1)

{
  FUN_144d2a640(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c708 FUN_144d2c708 body=9 status=ok
// SIG undefined FUN_144d2c708(void)

void FUN_144d2c708(longlong param_1)

{
  FUN_144d2b030(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c714 FUN_144d2c714 body=9 status=ok
// SIG undefined FUN_144d2c714(void)

void FUN_144d2c714(longlong param_1)

{
  FUN_144d2ad80(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c720 FUN_144d2c720 body=9 status=ok
// SIG undefined FUN_144d2c720(void)

void FUN_144d2c720(longlong param_1)

{
  FUN_144d2bd10(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c72c FUN_144d2c72c body=9 status=ok
// SIG undefined FUN_144d2c72c(void)

void FUN_144d2c72c(longlong param_1)

{
  FUN_144d2b760(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c738 FUN_144d2c738 body=9 status=ok
// SIG undefined FUN_144d2c738(void)

void FUN_144d2c738(longlong param_1)

{
  FUN_144d2bf30(param_1 + -0x20);
  return;
}



// FUNCTION 144d2c750 FUN_144d2c750 body=171 status=ok
// SIG undefined FUN_144d2c750(void)

void FUN_144d2c750(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 local_res8 [8];
  longlong local_res18;
  undefined1 local_4e8 [1232];
  
  FUN_144be3930(local_4e8);
  local_res18 = *param_1;
  if (local_res18 != 0) {
    FUN_144b3d910();
  }
  FUN_144d2c800(local_res8,local_4e8,&local_res18,param_2,param_4,0xffff);
  (**(code **)(*param_3 + 0x98))(param_3,local_4e8,0);
  FUN_144be39a0(local_4e8);
  if (*param_1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144d2c800 FUN_144d2c800 body=1515 status=ok
// SIG undefined FUN_144d2c800(void)

undefined2 *
FUN_144d2c800(undefined2 *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5,short param_6)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  short local_res10 [4];
  longlong *local_res18;
  undefined2 local_58 [2];
  undefined2 local_54 [2];
  undefined2 local_50 [4];
  undefined8 local_48 [2];
  
  lVar6 = *param_3;
  local_48[0] = 0x290;
  local_res18 = param_3;
  lVar5 = (*DAT_14c787670)(0,local_48,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"hkReferencedObject");
  }
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_144d2d740(lVar5,lVar6,param_4,param_5);
    if (lVar6 != 0) {
      FUN_144b3d910(lVar6);
    }
  }
  local_48[0] = 0x40;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_48,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res10,0,0x40);
    if (lVar6 != 0) {
      FUN_144b3f230(lVar6);
    }
  }
  else {
    puVar7[1] = 0xffffffff;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar7[2] = 1;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    puVar7[7] = "Simplification/Init";
    puVar7[6] = lVar6;
    FUN_144be3b70(param_2,local_res10,puVar7,0x40);
    FUN_144b3f230(puVar7);
  }
  sVar4 = local_res10[0];
  if ((param_6 != -1) && (local_res10[0] != -1)) {
    iVar8 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    iVar3 = *(int *)(param_2 + 0x330);
    lVar5 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar8;
    *(short *)(lVar5 + (longlong)iVar3 * 4) = param_6;
    *(short *)(lVar5 + 2 + (longlong)iVar3 * 4) = sVar4;
  }
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  local_48[0] = 0x50;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_48,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_58,0,0x40);
    if (lVar6 != 0) {
      FUN_144b3f230(lVar6);
    }
  }
  else {
    puVar7[8] = "Simplification/EdgeCollapse";
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
              ::vftable;
    puVar7[1] = 0xffffffff;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
                ::vftable;
    *(undefined4 *)(puVar7 + 7) = param_5;
    puVar7[2] = 1;
    puVar7[6] = lVar6;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
    FUN_144be3b70(param_2,local_58,puVar7,0x40);
    FUN_144b3f230(puVar7);
  }
  uVar2 = local_58[0];
  plVar1 = (longlong *)(param_2 + 0x328);
  iVar8 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar5 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar8;
  *(short *)(lVar5 + (longlong)iVar3 * 4) = local_res10[0];
  *(undefined2 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  local_48[0] = 0x40;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_48,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_54,0,0x40);
    if (lVar6 != 0) {
      FUN_144b3f230(lVar6);
    }
  }
  else {
    puVar7[2] = 1;
    puVar7[1] = 0xffffffff;
    puVar7[6] = lVar6;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_3>_>
              ::vftable;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_3>_>
                ::vftable;
    puVar7[7] = "Simplification/AfterFirstCollapseRound";
    FUN_144be3b70(param_2,local_54,puVar7,0x40);
    FUN_144b3f230(puVar7);
  }
  uVar2 = local_54[0];
  iVar8 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar5 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar8;
  *(undefined2 *)(lVar5 + (longlong)iVar3 * 4) = local_58[0];
  *(undefined2 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  local_48[0] = 0x50;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_48,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_50,0,0x40);
    if (lVar6 != 0) {
      FUN_144b3f230(lVar6);
    }
  }
  else {
    puVar7[2] = 1;
    puVar7[1] = 0xffffffff;
    puVar7[6] = lVar6;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_4>_>
              ::vftable;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_4>_>
                ::vftable;
    *(undefined4 *)(puVar7 + 7) = param_5;
    puVar7[8] = "Simplification/EdgeCollapse";
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
    FUN_144be3b70(param_2,local_50,puVar7,0x40);
    FUN_144b3f230(puVar7);
  }
  uVar2 = local_50[0];
  iVar8 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar5 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar8;
  *(undefined2 *)(lVar5 + (longlong)iVar3 * 4) = local_54[0];
  *(undefined2 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  lVar5 = *local_res18;
  if (lVar5 != 0) {
    FUN_144b3d910(lVar5);
  }
  local_48[0] = 0x50;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_48,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,param_1,0,0x40);
    if (lVar5 != 0) {
      FUN_144b3f230(lVar5);
    }
    if (lVar6 != 0) {
      FUN_144b3f230(lVar6);
    }
  }
  else {
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_5>_>
              ::vftable;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Simplification::addSimplificationTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Simplification::SimplificationSettings_const&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_5>_>
                ::vftable;
    puVar7[8] = "Simplification/FinalTasks";
    puVar7[6] = lVar6;
    puVar7[7] = lVar5;
    FUN_144be3b70(param_2,param_1,puVar7,0x40);
    FUN_144b3f230(puVar7);
  }
  iVar8 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar5 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar8;
  *(undefined2 *)(lVar5 + (longlong)iVar3 * 4) = local_50[0];
  *(undefined2 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (lVar6 != 0) {
    FUN_144b3f230(lVar6);
  }
  if (*local_res18 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144d2cdf0 FUN_144d2cdf0 body=140 status=ok
// SIG undefined FUN_144d2cdf0(void)

void FUN_144d2cdf0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) * 0x38);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d2ce80 FUN_144d2ce80 body=109 status=ok
// SIG undefined FUN_144d2ce80(void)

longlong FUN_144d2ce80(longlong *param_1,int param_2)

{
  longlong lVar1;
  int local_res10 [2];
  
  local_res10[0] = param_2;
  lVar1 = FUN_144d30bb0(param_1 + 2,local_res10);
  if ((lVar1 != 0) && (-1 < *(int *)(lVar1 + 4))) {
    return param_1[2] + 8 + (longlong)*(int *)(lVar1 + 4) * 0x40;
  }
  return (longlong)param_2 * 0x38 + *param_1;
}



// FUNCTION 144d2cef0 FUN_144d2cef0 body=1539 status=ok
// SIG undefined FUN_144d2cef0(void)

undefined8
FUN_144d2cef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
             longlong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  char cVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  ulonglong local_98;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_78;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong local_48;
  longlong lStack_40;
  
  if (*param_4 < 0) {
    return 1;
  }
  puVar19 = (undefined4 *)FUN_144d2ce80();
  lVar20 = FUN_144d2ce80(param_1,*puVar19);
  FUN_145047eb0(lVar20 + 0xc,puVar19 + 3,param_2,&local_118);
  uVar25 = *(ulonglong *)(lVar20 + 0x18);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar25;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_108;
  if ((-1 < (longlong)
            ((local_110 - (SUB168(auVar1 * auVar9,8) - ((longlong)uVar25 >> 0x3f & local_108))) -
            (ulonglong)(local_118 < local_108 * uVar25))) &&
     (uVar25 = *(ulonglong *)(lVar20 + 0x20), auVar2._8_8_ = 0, auVar2._0_8_ = uVar25,
     auVar10._8_8_ = 0, auVar10._0_8_ = local_108,
     -1 < (longlong)
          (((SUB168(auVar2 * auVar10,8) - ((longlong)uVar25 >> 0x3f & local_108)) - local_110) -
          (ulonglong)(local_108 * uVar25 < local_118)))) {
    uVar25 = (longlong)local_110 >> 0x3f;
    local_d8 = local_108;
    local_c8 = *param_5;
    lStack_c0 = param_5[1];
    local_f8 = (uVar25 ^ local_118) - uVar25;
    local_b8 = param_5[2];
    lStack_f0 = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25);
    local_58 = local_108;
    local_68 = local_f8;
    lStack_60 = lStack_f0;
    cVar17 = FUN_144d2d500(&local_68,&local_c8);
    if (cVar17 != '\0') {
      uVar25 = (longlong)local_110 >> 0x3f;
      local_f8 = (uVar25 ^ local_118) - uVar25;
      lStack_f0 = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25);
      *param_5 = local_f8;
      param_5[1] = lStack_f0;
      local_d8 = local_108;
      param_5[2] = local_108;
    }
    iVar24 = *param_4;
    lVar20 = FUN_144d2ce80(param_1,iVar24);
    cVar17 = *(char *)(lVar20 + 8);
    if (iVar24 != param_4[1]) {
      do {
        puVar19 = (undefined4 *)FUN_144d2ce80(param_1,iVar24);
        FUN_145047eb0(param_3,param_2,puVar19 + 3,&local_118);
        uVar25 = *(ulonglong *)(puVar19 + 10);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar25;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_108;
        if ((longlong)
            ((local_110 - (SUB168(auVar3 * auVar11,8) - ((longlong)uVar25 >> 0x3f & local_108))) -
            (ulonglong)(local_118 < local_108 * uVar25)) < 0) {
          return 0;
        }
        uVar25 = *(ulonglong *)(puVar19 + 0xc);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar25;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_108;
        if ((longlong)
            (((SUB168(auVar4 * auVar12,8) - ((longlong)uVar25 >> 0x3f & local_108)) - local_110) -
            (ulonglong)(local_108 * uVar25 < local_118)) < 0) {
          return 0;
        }
        local_88 = *param_5;
        lStack_80 = param_5[1];
        local_98 = local_108;
        local_78 = param_5[2];
        uVar25 = (longlong)local_110 >> 0x3f;
        local_f8 = (uVar25 ^ local_118) - uVar25;
        lStack_f0 = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25);
        local_d8 = local_108;
        local_e8 = local_f8;
        lStack_e0 = lStack_f0;
        cVar18 = FUN_144d2d500(&local_e8,&local_88);
        if (cVar18 != '\0') {
          uVar25 = (longlong)local_110 >> 0x3f;
          local_48 = (uVar25 ^ local_118) - uVar25;
          lStack_40 = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25);
          local_98 = local_108;
          *param_5 = local_48;
          param_5[1] = lStack_40;
          param_5[2] = local_108;
        }
        if (*(char *)(puVar19 + 2) != cVar17) {
          if (*(char *)(puVar19 + 2) == '\0') {
            puVar22 = (undefined4 *)FUN_144d2ce80(param_1,*puVar19);
            puVar21 = puVar19;
          }
          else {
            puVar21 = (undefined4 *)FUN_144d2ce80(param_1,puVar19[1]);
            puVar22 = puVar19;
          }
          FUN_145047eb0(puVar22 + 3,puVar21 + 3,param_3,&local_118);
          uVar25 = *(ulonglong *)(puVar22 + 6);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar25;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_108;
          if ((longlong)
              ((local_110 - (SUB168(auVar5 * auVar13,8) - ((longlong)uVar25 >> 0x3f & local_108))) -
              (ulonglong)(local_118 < local_108 * uVar25)) < 0) {
            return 0;
          }
          uVar25 = *(ulonglong *)(puVar22 + 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_108;
          if ((longlong)
              (((SUB168(auVar6 * auVar14,8) - ((longlong)uVar25 >> 0x3f & local_108)) - local_110) -
              (ulonglong)(local_108 * uVar25 < local_118)) < 0) {
            return 0;
          }
          local_e8 = *param_5;
          lStack_e0 = param_5[1];
          local_98 = local_108;
          local_d8 = param_5[2];
          uVar25 = (longlong)local_110 >> 0x3f;
          local_88 = (uVar25 ^ local_118) - uVar25;
          lStack_80 = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25);
          local_78 = local_108;
          local_68 = local_88;
          lStack_60 = lStack_80;
          cVar17 = FUN_144d2d500(&local_88,&local_e8);
          if (cVar17 != '\0') {
            uVar25 = (longlong)local_110 >> 0x3f;
            local_c8 = (uVar25 ^ local_118) - uVar25;
            lStack_c0 = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25)
            ;
            local_98 = local_108;
            *param_5 = local_c8;
            param_5[1] = lStack_c0;
            param_5[2] = local_108;
          }
        }
        iVar24 = puVar19[1];
        cVar17 = *(char *)(puVar19 + 2);
      } while (iVar24 != param_4[1]);
    }
    lVar20 = FUN_144d2ce80(param_1);
    lVar23 = FUN_144d2ce80(param_1,*(undefined4 *)(lVar20 + 4));
    FUN_145047eb0(lVar20 + 0xc,lVar23 + 0xc,param_3,&local_118);
    uVar25 = *(ulonglong *)(lVar20 + 0x18);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar25;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_108;
    if ((-1 < (longlong)
              ((local_110 - (SUB168(auVar7 * auVar15,8) - ((longlong)uVar25 >> 0x3f & local_108))) -
              (ulonglong)(local_118 < local_108 * uVar25))) &&
       (uVar25 = *(ulonglong *)(lVar20 + 0x20), auVar8._8_8_ = 0, auVar8._0_8_ = uVar25,
       auVar16._8_8_ = 0, auVar16._0_8_ = local_108,
       -1 < (longlong)
            (((SUB168(auVar8 * auVar16,8) - ((longlong)uVar25 >> 0x3f & local_108)) - local_110) -
            (ulonglong)(local_108 * uVar25 < local_118)))) {
      local_e8 = *param_5;
      lStack_e0 = param_5[1];
      local_98 = local_108;
      local_d8 = param_5[2];
      uVar25 = (longlong)local_110 >> 0x3f;
      local_c8 = (uVar25 ^ local_118) - uVar25;
      lStack_c0 = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25);
      local_78 = local_108;
      local_88 = local_c8;
      lStack_80 = lStack_c0;
      cVar17 = FUN_144d2d500(&local_88,&local_e8);
      if (cVar17 != '\0') {
        uVar25 = (longlong)local_110 >> 0x3f;
        *param_5 = (uVar25 ^ local_118) - uVar25;
        param_5[1] = ((uVar25 ^ local_110) - uVar25) - (ulonglong)((uVar25 ^ local_118) < uVar25);
        param_5[2] = local_108;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d2d500 FUN_144d2d500 body=245 status=ok
// SIG undefined FUN_144d2d500(void)

undefined8 FUN_144d2d500(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong local_38;
  
  uVar1 = param_1[2];
  uVar14 = param_1[1];
  uVar11 = param_2[1];
  uVar2 = param_2[2];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *param_1;
  uVar13 = SUB168(auVar3 * auVar7,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar14;
  uVar12 = uVar14 * uVar2 + uVar13;
  local_38 = (ulonglong)CARRY8(uVar14 * uVar2,uVar13) + SUB168(auVar4 * auVar8,8);
  if ((longlong)uVar14 < 0) {
    local_38 = local_38 - uVar2;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  uVar14 = SUB168(auVar5 * auVar9,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar11;
  uVar13 = uVar11 * uVar1 + uVar14;
  lVar15 = (ulonglong)CARRY8(uVar11 * uVar1,uVar14) + SUB168(auVar6 * auVar10,8);
  if ((longlong)uVar11 < 0) {
    lVar15 = lVar15 - uVar1;
  }
  return CONCAT71((int7)(uVar12 >> 8),
                  (longlong)
                  ((lVar15 - local_38) -
                  (ulonglong)
                  (uVar13 < uVar12 ||
                  uVar13 - uVar12 < (ulonglong)(*param_2 * uVar1 < *param_1 * uVar2))) < 0);
}



// FUNCTION 144d2d600 FUN_144d2d600 body=197 status=ok
// SIG undefined FUN_144d2d600(void)

void FUN_144d2d600(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 + (longlong)(int)param_1[1] * 8 != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_1[1] * 8 + 7;
    do {
      puVar3[-9] = 0;
      if ((-1 < (int)puVar3[-8]) && (*(longlong *)(puVar3 + -0xb) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -0xb),
                   (ulonglong)(puVar3[-8] & 0x7fffffff) << 4);
      }
      puVar1 = puVar3 + -0xf;
      *(undefined8 *)(puVar3 + -0xb) = 0;
      puVar3[-8] = 0x80000000;
      puVar3 = puVar3 + -8;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 5);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d2d6d0 FUN_144d2d6d0 body=107 status=ok
// SIG undefined FUN_144d2d6d0(void)

void FUN_144d2d6d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 144d2d740 FUN_144d2d740 body=511 status=ok
// SIG undefined FUN_144d2d740(void)

undefined8 *
FUN_144d2d740(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 local_res20 [8];
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::Simplification::NavMeshSimplification::vftable;
  param_1[4] = &PTR_LAB_14aba30f0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[5] = 0xffffffff;
  param_1[3] = param_2;
  param_1[6] = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x80000000;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x80000000;
  *(undefined4 *)(param_1 + 0x45) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x80000000;
  FUN_145045ad0(local_res20,param_3,param_1 + 0x20);
  return param_1;
}



// FUNCTION 144d2d940 FUN_144d2d940 body=799 status=ok
// SIG undefined FUN_144d2d940(void)

void FUN_144d2d940(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined4 local_248;
  uint uStack_244;
  longlong local_238;
  longlong lStack_230;
  undefined1 local_228 [512];
  
  cVar3 = FUN_144cb5360(*(undefined8 *)(param_1 + 0x18));
  if ((((cVar3 != '\0') || (cVar3 = FUN_144cb4d20(*(undefined8 *)(param_1 + 0x18)), cVar3 != '\0'))
      && (*(char *)(param_1 + 0x1b4) != '\0')) &&
     ((DAT_14c783c70 == (longlong *)0x0 ||
      (pcVar5 = (char *)(**(code **)(*DAT_14c783c70 + 0x28))(DAT_14c783c70,local_res8,0),
      *pcVar5 != '\0')))) {
    FUN_144bde670(&local_248,local_228,0x200);
    FUN_144be6160(&local_248,
                  "Simplification was requested to output its deviation and the input nav mesh already have deviation overlay. The output deviation will not take into account the existing input deviation."
                 );
    FUN_144bfc0d0(0,local_228,
                  "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationMain.cpp"
                  ,0x31c);
    if (DAT_14c783c70 != (longlong *)0x0) {
      (**(code **)(*DAT_14c783c70 + 0x20))(DAT_14c783c70,0,0);
    }
    FUN_144bde6e0(&local_248);
  }
  FUN_145040750(*(undefined8 *)(param_1 + 0x18));
  FUN_147e54438(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  FUN_145049530(param_1 + 0x1c0,*(undefined8 *)(param_1 + 0x18),param_1 + 0x100);
  FUN_14504be00(param_1 + 0x218,param_1 + 0x20);
  FUN_144d2f410(param_1);
  FUN_144d2fb40(param_1);
  iVar1 = *(int *)(param_1 + 0x50);
  FUN_145040870(param_1 + 0x20);
  FUN_14504c540(param_1 + 0x218,param_1 + 0x20,*(int *)(param_1 + 0x50) - iVar1);
  FUN_145049af0(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x50));
  FUN_144d2fd10(param_1);
  cVar3 = FUN_144cb5360(param_1 + 0x20);
  if (cVar3 != '\0') {
    FUN_144cb5430(param_1 + 0x20);
  }
  cVar3 = FUN_144cb4d20(param_1 + 0x20);
  if (cVar3 != '\0') {
    FUN_144cb4de0(param_1 + 0x20);
  }
  FUN_144d2ec30(param_1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x30);
  iVar4 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
  iVar1 = 1000;
  if (1000 < iVar4) {
    iVar1 = iVar4;
  }
  *(int *)(param_1 + 0x22c) = iVar1;
  FUN_14504e2c0(param_1 + 0x230,param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x50);
  uStack_244 = *(uint *)(param_1 + 0x60);
  iVar4 = uStack_244 + iVar1;
  if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar4) {
    FUN_144d30c20(param_1 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  *(int *)(param_1 + 0x60) = iVar4;
  iVar4 = *(int *)(param_1 + 0x230);
  lVar9 = (longlong)iVar4;
  local_238 = *(longlong *)(param_1 + 0x58) + (longlong)(int)uStack_244 * 0xc;
  local_248 = 0;
  *(ulonglong *)(param_1 + 600) = (ulonglong)uStack_244 << 0x20;
  lStack_230 = local_238 + (longlong)iVar1 * 0xc;
  *(int *)(param_1 + 0x260) = iVar1;
  *(longlong *)(param_1 + 0x248) = local_238;
  *(longlong *)(param_1 + 0x250) = lStack_230;
  plVar8 = (longlong *)(param_1 + 0x278);
  if ((int)(*(uint *)(param_1 + 0x284) & 0x7fffffff) < iVar4) {
    FUN_144d30e40(plVar8,&PTR_vftable_14c6e47a0,lVar9);
  }
  iVar1 = *(int *)(param_1 + 0x280);
  if (iVar1 < iVar4) {
    lVar2 = *plVar8;
    *(int *)(param_1 + 0x280) = iVar4;
    for (puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        puVar6 != (undefined8 *)(lVar9 * 0x10 + lVar2); puVar6 = puVar6 + 2) {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0x80000000;
      }
    }
  }
  else if (iVar4 < iVar1) {
    lVar2 = *plVar8;
    *(int *)(param_1 + 0x280) = iVar4;
    plVar8 = (longlong *)((longlong)iVar1 * 0x10 + *plVar8);
    while (plVar8 != (longlong *)(lVar9 * 0x10 + lVar2)) {
      plVar7 = plVar8 + -2;
      *(undefined4 *)(plVar8 + -1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar8 + -4)) && (*plVar7 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar7,
                   (ulonglong)(*(uint *)((longlong)plVar8 + -4) & 0x7fffffff) << 2);
      }
      *plVar7 = 0;
      *(undefined4 *)((longlong)plVar8 + -4) = 0x80000000;
      plVar8 = plVar7;
    }
  }
  return;
}



// FUNCTION 144d2dc60 FUN_144d2dc60 body=525 status=ok
// SIG undefined FUN_144d2dc60(void)

undefined8 * FUN_144d2dc60(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  FUN_14504e4d0(param_1 + 0x230,param_1 + 0x20,3);
  plVar9 = (longlong *)(param_1 + 0x268);
  uVar11 = 0;
  plVar8 = (longlong *)*plVar9;
  plVar4 = plVar8 + (longlong)*(int *)(param_1 + 0x270) * 2;
  while (plVar4 != plVar8) {
    plVar7 = plVar4 + -2;
    *(undefined4 *)(plVar4 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar4 + -4)) && (*plVar7 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar7,
                 (ulonglong)(*(uint *)((longlong)plVar4 + -4) & 0x7fffffff) << 2);
    }
    *plVar7 = 0;
    *(undefined4 *)((longlong)plVar4 + -4) = 0x80000000;
    plVar4 = plVar7;
  }
  *(undefined4 *)(param_1 + 0x270) = 0;
  iVar10 = *(int *)(param_1 + 0x228);
  lVar12 = (longlong)iVar10;
  uVar5 = *(uint *)(param_1 + 0x274) & 0x7fffffff;
  puVar6 = (undefined8 *)(ulonglong)uVar5;
  if ((int)uVar5 < iVar10) {
    puVar6 = (undefined8 *)FUN_144d30e40(plVar9,&PTR_vftable_14c6e47a0,lVar12);
  }
  iVar2 = *(int *)(param_1 + 0x270);
  if (iVar2 < iVar10) {
    lVar3 = *plVar9;
    *(int *)(param_1 + 0x270) = iVar10;
    for (puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar9);
        puVar6 != (undefined8 *)(lVar12 * 0x10 + lVar3); puVar6 = puVar6 + 2) {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0x80000000;
      }
    }
  }
  else if (iVar10 < iVar2) {
    lVar3 = *plVar9;
    *(int *)(param_1 + 0x270) = iVar10;
    plVar9 = (longlong *)((longlong)iVar2 * 0x10 + *plVar9);
    while (plVar9 != (longlong *)(lVar12 * 0x10 + lVar3)) {
      uVar5 = *(uint *)((longlong)plVar9 + -4);
      puVar6 = (undefined8 *)(ulonglong)uVar5;
      plVar8 = plVar9 + -2;
      *(undefined4 *)(plVar9 + -1) = 0;
      if ((-1 < (int)uVar5) && (*plVar8 != 0)) {
        puVar6 = (undefined8 *)
                 (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                           (&PTR_vftable_14c6e47a0,*plVar8,(ulonglong)(uVar5 & 0x7fffffff) << 2);
      }
      *plVar8 = 0;
      *(undefined4 *)((longlong)plVar9 + -4) = 0x80000000;
      plVar9 = plVar8;
    }
  }
  if (param_2 < *(int *)(param_1 + 0x230)) {
    do {
      plVar9 = (longlong *)((longlong)(int)uVar11 * 0x10 + *(longlong *)(param_1 + 0x268));
      iVar10 = (int)plVar9[1] + 1;
      if ((int)(*(uint *)((longlong)plVar9 + 0xc) & 0x7fffffff) < iVar10) {
        FUN_1401f86b2(plVar9,&PTR_vftable_14c6e47a0,(longlong)iVar10);
      }
      piVar1 = (int *)(*plVar9 + (longlong)(int)plVar9[1] * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_2;
      }
      *(int *)(plVar9 + 1) = iVar10;
      param_2 = param_2 + 2;
      lVar12 = (longlong)((int)uVar11 + 1);
      puVar6 = (undefined8 *)(lVar12 / (longlong)*(int *)(param_1 + 0x228) & 0xffffffff);
      uVar11 = lVar12 % (longlong)*(int *)(param_1 + 0x228) & 0xffffffff;
    } while (param_2 < *(int *)(param_1 + 0x230));
  }
  return puVar6;
}



// FUNCTION 144d2de70 FUN_144d2de70 body=800 status=ok
// SIG undefined FUN_144d2de70(void)

void FUN_144d2de70(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  int *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_4c;
  longlong local_40;
  undefined4 local_38;
  uint local_34;
  
  puVar4 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x268));
  piVar7 = (int *)*puVar4;
  piVar1 = piVar7 + *(int *)(puVar4 + 1);
  if (piVar7 != piVar1) {
    do {
      local_a4 = *(int *)(param_1 + 0x22c);
      local_c0 = *piVar7;
      lVar5 = (longlong)local_c0;
      local_108 = 0xffffffff;
      local_a0 = *(int *)(param_1 + 0x260) - (*(int *)(param_1 + 0x230) + -1) * local_a4;
      local_dc = 0x80000000;
      local_c4 = 0x80000000;
      if (local_a4 < local_a0) {
        local_a0 = local_a4;
      }
      local_8c = 0x80000000;
      local_a4 = local_a4 * local_c0;
      local_4c = 0xffffffff80000000;
      local_34 = 0x80000000;
      local_b0 = *(longlong *)(param_1 + 0x248) + ((longlong)local_a0 + (longlong)local_a4) * 0xc;
      local_a8 = *(undefined4 *)(param_1 + 600);
      local_b8 = *(longlong *)(param_1 + 0x248) + (longlong)local_a4 * 0xc;
      local_128 = *(undefined8 *)(param_1 + 0x18);
      local_a4 = *(int *)(param_1 + 0x25c) + local_a4;
      local_88 = param_1 + 0x1c0;
      local_100 = 0;
      local_80 = param_1 + 0x1e0;
      local_f8 = 0;
      local_78 = param_1 + 0x1f0;
      local_70 = param_1 + 0x208;
      local_68 = param_1 + 0x218;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_9c = 0;
      local_98 = 0;
      local_90 = 0;
      local_58 = 0;
      local_50 = 0;
      local_40 = 0;
      local_38 = 0;
      local_120 = param_1 + 0x20;
      local_118 = param_1 + 0x100;
      local_110 = param_1 + 0x20;
      local_60 = (int *)(param_1 + 0x230);
      FUN_145056cc0(&local_128);
      plVar6 = (longlong *)(lVar5 * 0x10 + *(longlong *)(param_1 + 0x278));
      if (&local_98 != plVar6) {
        FUN_143821c08(plVar6,&PTR_vftable_14c6e47a0);
        FUN_143821c08(&local_98,&PTR_vftable_14c6e47a0);
        lVar5 = *plVar6;
        *plVar6 = local_98;
        lVar3 = plVar6[1];
        *(undefined4 *)(plVar6 + 1) = local_90;
        uVar2 = *(uint *)((longlong)plVar6 + 0xc);
        *(uint *)((longlong)plVar6 + 0xc) = local_8c;
        local_98 = lVar5;
        local_90 = (int)lVar3;
        local_8c = uVar2;
      }
      local_38 = 0;
      if ((-1 < (int)local_34) && (local_40 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_40,(ulonglong)(local_34 & 0x7fffffff) << 2);
      }
      local_40 = 0;
      local_34 = 0x80000000;
      local_50 = 0;
      if ((-1 < (int)(uint)local_4c) && (local_58 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_58,(ulonglong)((uint)local_4c & 0x7fffffff) << 4);
      }
      local_58 = 0;
      local_4c = CONCAT44(local_4c._4_4_,0x80000000);
      local_90 = 0;
      if ((-1 < (int)local_8c) && (local_98 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 2);
      }
      local_98 = 0;
      local_8c = 0x80000000;
      local_c8 = 0;
      if ((-1 < (int)local_c4) && (local_d0 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_d0,(ulonglong)(local_c4 & 0x7fffffff) << 2);
      }
      local_d0 = 0;
      local_c4 = 0x80000000;
      FUN_144d30150(&local_110);
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
  }
  return;
}



// FUNCTION 144d2e190 FUN_144d2e190 body=178 status=ok
// SIG undefined FUN_144d2e190(void)

void FUN_144d2e190(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x278);
      piVar5 = *(int **)(lVar3 + lVar6);
      piVar1 = piVar5 + *(int *)(lVar3 + 8 + lVar6);
      for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
        lVar4 = (longlong)*piVar5 * 0x60 + *(longlong *)(param_1 + 0x48);
        if (-1 < *(int *)(lVar4 + 4)) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)*piVar5 * 4) = 0xffffffff;
          iVar2 = *(int *)(lVar4 + 0x10);
          if (-1 < iVar2) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar2 * 4) = 0xffffffff;
          }
        }
      }
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 144d2e250 FUN_144d2e250 body=2513 status=ok
// SIG undefined FUN_144d2e250(void)

void FUN_144d2e250(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar22 [16];
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_358;
  int local_350;
  uint local_34c;
  longlong local_348;
  longlong lStack_340;
  longlong local_338;
  longlong lStack_330;
  longlong local_328;
  undefined4 local_320;
  uint local_31c;
  longlong local_318;
  undefined4 local_310 [2];
  undefined8 local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined8 local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  longlong local_230;
  undefined4 local_228;
  uint local_224;
  undefined8 local_218;
  longlong local_210;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  longlong local_1a0;
  undefined4 local_198;
  uint local_194;
  longlong local_188;
  longlong lStack_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong uVar13;
  
  lVar16 = param_1 + 0x1e0;
  uVar8 = 0;
  lVar6 = param_1 + 0x218;
  lVar15 = param_1 + 0x20;
  local_178 = *(undefined8 *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x1c0);
  local_168 = param_1 + 0x100;
  local_c8 = param_1 + 0x1f0;
  local_c0 = param_1 + 0x208;
  local_b0 = param_1 + 0x230;
  local_158 = 0xffffffff;
  local_150 = 0;
  local_148 = 0;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0x80000000;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0xffffffff80000000;
  local_108 = 0;
  uStack_100 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0x80000000;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0xffffffff80000000;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x80000000;
  local_170 = lVar15;
  local_160 = lVar15;
  local_d8 = plVar1;
  local_d0 = lVar16;
  local_b8 = lVar6;
  FUN_145056cc0(&local_178);
  FUN_144d30230(&local_178);
  if ((*(char *)(param_1 + 0x1b4) != '\0') &&
     (FUN_144cb5380(lVar15), uVar13 = uVar8, 0 < *(int *)(param_1 + 0x50))) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x48) + uVar8;
      iVar9 = (int)uVar13;
      if (-1 < *(int *)(lVar7 + 4)) {
        FUN_144cb6610(lVar15,lVar7,&local_358,&local_2d8);
        local_338 = *plVar1;
        local_31c = 0x80000000;
        lStack_330 = local_338 + (longlong)*(int *)(param_1 + 0x1c8) * 8;
        local_328 = 0;
        local_320 = 0;
        local_188 = local_338;
        lStack_180 = lStack_330;
        local_318 = FUN_144b3d480();
        local_348 = *(longlong *)(param_1 + 0x1d0);
        lStack_340 = (longlong)*(int *)(param_1 + 0x1d8) * 0x38 + local_348;
        local_310[0] = 0;
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 0x80000000;
        local_308 = local_348;
        lStack_300 = lStack_340;
        local_2e8 = FUN_144b3d480();
        local_2b8 = 1;
        local_2e0 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_res18 = local_2d8;
        local_res1c = local_2d4;
        local_res20 = (undefined4)local_358;
        local_res24 = local_358._4_4_;
        local_res8[0] = iVar9;
        lVar7 = FUN_144d30b40(&local_328,local_res8);
        if ((lVar7 == 0) || (*(int *)(lVar7 + 4) < 0)) {
          lVar7 = local_338 + (longlong)iVar9 * 8;
        }
        else {
          lVar7 = local_328 + ((longlong)*(int *)(lVar7 + 4) * 3 + 1) * 4;
        }
        FUN_144d2cef0(&local_308,&local_res20,&local_res18,lVar7,&local_2c8);
        lVar7 = FUN_147e513e3(&local_2c8,local_res10);
        if ((float)lVar7 == 0.0) {
          iVar20 = 0;
        }
        else {
          iVar20 = local_res10[0] * 0x800000 + (int)((float)lVar7 / (float)local_2b8);
        }
        auVar22._4_4_ = iVar20;
        auVar22._0_4_ = iVar20;
        auVar22._8_4_ = iVar20;
        auVar22._12_4_ = iVar20;
        auVar22 = sqrtps(auVar22,auVar22);
        fVar21 = ceilf(auVar22._0_4_ * 1.0000001);
        FUN_144cb5450(lVar15,uVar13,(longlong)fVar21);
        if ((local_2e8 != 0) && (*(int *)(local_2e8 + 4) != -2)) {
          (*DAT_14c787678)(DAT_14c6e47a8,local_2e8,0);
          FUN_144b3ec00(&local_2e8);
        }
        local_2f0 = 0;
        if ((-1 < (int)local_2ec) && (local_2f8 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_2f8,(ulonglong)(local_2ec & 0x7fffffff) << 6);
        }
        local_2f8 = 0;
        local_2ec = 0x80000000;
        if ((local_318 != 0) && (*(int *)(local_318 + 4) != -2)) {
          (*DAT_14c787678)(DAT_14c6e47a8,local_318,0);
          FUN_144b3ec00(&local_318);
        }
        local_320 = 0;
        if ((-1 < (int)local_31c) && (local_328 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_328,(ulonglong)(local_31c & 0x7fffffff) * 0xc);
        }
      }
      uVar8 = uVar8 + 0x60;
      uVar13 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x50));
  }
  uVar8 = 0;
  FUN_145049b80(plVar1);
  local_218 = *(undefined8 *)(param_1 + 0x18);
  local_1c8 = *(undefined8 *)(param_1 + 0x1a0);
  local_200 = 0xffffffff;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 0x80000000;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 0xffffffff80000000;
  local_1a0 = 0;
  local_198 = 0;
  local_194 = 0x80000000;
  local_210 = lVar15;
  local_208 = lVar15;
  local_1d0 = lVar6;
  local_1c0 = lVar16;
  FUN_14504f0e0(&local_218);
  local_2a8 = *(undefined8 *)(param_1 + 0x18);
  local_258 = *(undefined8 *)(param_1 + 0x1a0);
  local_290 = 0xffffffff;
  local_288 = 0;
  uStack_280 = 0;
  local_270 = 0;
  local_268 = 0;
  local_264 = 0x80000000;
  local_248 = 0;
  local_240 = 0;
  local_23c = 0xffffffff80000000;
  local_230 = 0;
  local_228 = 0;
  local_224 = 0x80000000;
  local_2a0 = lVar15;
  local_298 = lVar15;
  local_260 = lVar6;
  local_250 = lVar16;
  FUN_145053340();
  if ((*(char *)(param_1 + 0x1b4) != '\0') &&
     (FUN_144cb4d30(), uVar13 = uVar8, 0 < *(int *)(param_1 + 0x40))) {
    do {
      if (-1 < *(int *)(uVar8 + *(longlong *)(param_1 + 0x38))) {
        puVar4 = (undefined4 *)FUN_145053390(&local_2a8,local_res8,uVar13);
        FUN_144cb4df0(lVar15,uVar13,*puVar4);
      }
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
      uVar8 = uVar8 + 4;
    } while ((int)uVar10 < *(int *)(param_1 + 0x40));
  }
  iVar9 = *(int *)(param_1 + 0x50);
  local_358 = 0;
  local_350 = 0;
  local_34c = 0x80000000;
  if (((0 < iVar9) &&
      (FUN_141807aa8(&local_358,&PTR_vftable_14c6e47a0,(longlong)iVar9), local_350 < iVar9)) ||
     (iVar20 = local_350, iVar9 < local_350)) {
    iVar20 = iVar9;
  }
  uVar10 = local_34c;
  lVar15 = local_358;
  iVar9 = 0;
  iVar18 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar6 = 0;
    lVar7 = 0;
    lVar16 = (longlong)(iVar20 + -1);
    do {
      iVar12 = *(int *)(lVar7 + 4 + *(longlong *)(param_1 + 0x48));
      lVar17 = lVar16;
      if (iVar12 < 0) {
        lVar17 = lVar16 + -1;
      }
      if (-1 < iVar12) {
        iVar9 = iVar9 + 1;
        lVar16 = lVar6;
      }
      lVar7 = lVar7 + 0x60;
      *(int *)(local_358 + lVar16 * 4) = iVar18;
      iVar18 = iVar18 + 1;
      if (-1 < iVar12) {
        lVar6 = lVar6 + 1;
      }
      lVar16 = lVar17;
    } while (iVar18 < *(int *)(param_1 + 0x50));
  }
  lStack_340 = local_358 + (longlong)iVar20 * 4;
  local_348 = local_358;
  FUN_144cb3ea0(param_1 + 0x20,&local_348);
  FUN_144cb3b80(param_1 + 0x20,iVar9);
  if ((-1 < (int)uVar10) && (lVar15 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar15,(ulonglong)(uVar10 & 0x7fffffff) << 2);
  }
  iVar9 = *(int *)(param_1 + 0x40);
  iVar20 = 0;
  lVar15 = 0;
  local_358 = 0;
  local_350 = 0;
  local_34c = 0x80000000;
  if (((0 < iVar9) &&
      (FUN_141807aa8(&local_358,&PTR_vftable_14c6e47a0,(longlong)iVar9), local_350 < iVar9)) ||
     (iVar18 = local_350, iVar9 < local_350)) {
    iVar18 = iVar9;
  }
  uVar10 = local_34c;
  lVar16 = local_358;
  iVar9 = iVar18 + -1;
  iVar12 = iVar20;
  iVar11 = iVar20;
  iVar19 = iVar20;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar2 = *(int *)(lVar15 + *(longlong *)(param_1 + 0x38));
      iVar12 = iVar11;
      iVar3 = iVar9;
      if (-1 < iVar2) {
        iVar12 = iVar11 + 1;
        iVar3 = iVar11;
      }
      *(int *)(lVar15 + local_358) = iVar3;
      iVar19 = iVar19 + 1;
      iVar11 = iVar9 + -1;
      if (-1 < iVar2) {
        iVar11 = iVar9;
      }
      iVar9 = iVar11;
      lVar15 = lVar15 + 4;
      iVar11 = iVar12;
    } while (iVar19 < *(int *)(param_1 + 0x40));
  }
  lStack_340 = local_358 + (longlong)iVar18 * 4;
  local_348 = local_358;
  FUN_144cb3980(param_1 + 0x20,&local_348);
  FUN_144cb38a0(param_1 + 0x20,iVar12);
  if ((-1 < (int)uVar10) && (lVar16 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar16,(ulonglong)(uVar10 & 0x7fffffff) << 2);
  }
  FUN_14502c7c0(&local_338,param_1 + 0x58);
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      FUN_14502c980(&local_338,
                    *(undefined4 *)((longlong)iVar20 * 0x60 + *(longlong *)(param_1 + 0x48)));
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(param_1 + 0x50));
  }
  FUN_14502ca20(&local_338);
  puVar4 = *(undefined4 **)(param_1 + 0x48);
  puVar14 = puVar4 + (longlong)*(int *)(param_1 + 0x50) * 0x18;
  for (; puVar4 != puVar14; puVar4 = puVar4 + 0x18) {
    puVar5 = (undefined4 *)FUN_14502ce90(&local_338,local_res8,*puVar4);
    *puVar4 = *puVar5;
  }
  lVar15 = 3;
  puVar4 = (undefined4 *)((longlong)&local_2f8 + 4);
  do {
    lVar15 = lVar15 + -1;
    puVar4[-5] = 0;
    if ((-1 < (int)puVar4[-4]) && (*(longlong *)(puVar4 + -7) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -7),
                 (ulonglong)(puVar4[-4] & 0x7fffffff) << 2);
    }
    *(undefined8 *)(puVar4 + -7) = 0;
    puVar4[-4] = 0x80000000;
    puVar4 = puVar4 + -4;
  } while (lVar15 != 0);
  local_228 = 0;
  if ((-1 < (int)local_224) && (local_230 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_230,(ulonglong)(local_224 & 0x7fffffff) << 2);
  }
  local_230 = 0;
  local_224 = 0x80000000;
  FUN_144d301c0(&local_248);
  FUN_144d30150(&local_298);
  local_198 = 0;
  if ((-1 < (int)local_194) && (local_1a0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1a0,(ulonglong)(local_194 & 0x7fffffff) << 2);
  }
  local_1a0 = 0;
  local_194 = 0x80000000;
  FUN_144d301c0(&local_1b8);
  FUN_144d30150(&local_208);
  return;
}



// FUNCTION 144d2ec30 FUN_144d2ec30 body=2001 status=ok
// SIG undefined FUN_144d2ec30(void)

void FUN_144d2ec30(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  uint local_res10;
  uint local_res18;
  int *local_e8;
  int local_e0;
  uint local_dc;
  int *local_d8;
  int local_d0;
  uint local_cc;
  int local_c8;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  int local_b0;
  longlong local_a8;
  longlong local_98;
  longlong local_90;
  int local_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 uStack_68;
  
  if (*(int *)(param_1 + 0x1a0) + *(int *)(param_1 + 0x1a4) != 0) {
    iVar11 = *(int *)(param_1 + 0x50);
    uVar26 = 0x80000000;
    local_res10 = 0x80000000;
    uVar10 = iVar11 + 0x1f >> 5;
    if ((int)uVar10 < 1) {
      local_c0 = 0;
      local_b8 = 0;
      local_b4 = 0x80000000;
    }
    else {
      local_c0 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                           (&PTR_vftable_14c6e47a0,(longlong)(int)uVar10 << 2);
      local_b8 = uVar10;
      local_b4 = uVar10;
    }
    local_b0 = iVar11;
    if ((int)(local_b4 & 0x7fffffff) < (int)uVar10) {
      FUN_140163394(&local_c0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar10);
    }
    lVar13 = local_c0;
    if (((int)local_b8 < (int)uVar10) || ((int)uVar10 < (int)local_b8)) {
      local_b8 = uVar10;
    }
    FUN_144bfb550(local_c0,0,(longlong)(int)local_b8);
    piVar20 = (int *)0x0;
    local_dc = 0x80000000;
    local_d8 = (int *)0x0;
    local_cc = 0x80000000;
    local_e8 = (int *)0x0;
    local_res18 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar16 = param_1 + 0x20;
      local_98 = 0;
      local_a8 = lVar16;
      do {
        uVar10 = *(uint *)(lVar13 + (longlong)((int)local_res18 >> 5) * 4);
        local_e0 = 0;
        if ((uVar10 >> (sbyte)(local_res18 & 0x1f) & 1) == 0) {
          bVar6 = false;
          bVar5 = false;
          *(uint *)(lVar13 + (longlong)((int)local_res18 >> 5) * 4) =
               uVar10 | 1 << (local_res18 & 0x1f);
          plVar3 = (longlong *)(param_1 + 0x48);
          puVar25 = (uint *)(*plVar3 + local_98);
          uVar4 = *(undefined8 *)
                   (*(longlong *)(param_1 + 0x58) + (ulonglong)(*puVar25 & 0x3fffffff) * 0xc);
          local_78 = uVar4;
          cVar7 = FUN_144cb5190(lVar16);
          if ((cVar7 != '\0') &&
             ((cVar7 = FUN_144cb52c0(lVar16,local_res18), cVar7 != '\0' ||
              (cVar7 = FUN_144cb52c0(lVar16,puVar25[2]), cVar7 != '\0')))) {
            bVar6 = true;
            bVar5 = true;
          }
          iVar11 = 0;
          if ((uVar26 & 0x7fffffff) == 0) {
            FUN_1401f86b2(&local_e8,&PTR_vftable_14c6e47c0,1);
            local_res10 = local_dc;
            iVar11 = local_e0;
          }
          lVar13 = local_c0;
          if ((uint *)(local_e8 + iVar11) != (uint *)0x0) {
            local_e8[iVar11] = local_res18;
          }
          uVar26 = puVar25[4];
          local_e0 = 1;
          iVar11 = local_e0;
          lVar16 = local_a8;
          for (; local_a8 = lVar16, -1 < (int)uVar26;
              uVar26 = *(uint *)((longlong)(int)uVar26 * 0x60 + 0x10 + *plVar3)) {
            uVar26 = *(uint *)((ulonglong)uVar26 * 0x60 + 0xc + *plVar3);
            local_e0 = iVar11;
            if (uVar26 == local_res18) goto LAB_144d2f034;
            cVar7 = FUN_144cb5190(lVar16);
            if ((cVar7 != '\0') && (cVar7 = FUN_144cb52c0(lVar16,uVar26), cVar7 != '\0')) {
              cVar7 = FUN_144cb52c0(lVar16,*(undefined4 *)
                                            ((longlong)(int)uVar26 * 0x60 + *plVar3 + 8));
              bVar5 = bVar6;
              if (cVar7 != '\0') {
                bVar6 = true;
                bVar5 = true;
              }
            }
            iVar14 = iVar11 + 1;
            if ((int)(local_res10 & 0x7fffffff) < iVar14) {
              FUN_1401f86b2(&local_e8,&PTR_vftable_14c6e47c0,(longlong)iVar14);
              local_res10 = local_dc;
              iVar11 = local_e0;
            }
            if ((uint *)(local_e8 + iVar11) != (uint *)0x0) {
              local_e8[iVar11] = uVar26;
            }
            puVar1 = (uint *)(lVar13 + (longlong)((int)uVar26 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << (uVar26 & 0x1f);
            iVar11 = iVar14;
            lVar16 = local_a8;
          }
          uVar26 = *(uint *)((longlong)(int)puVar25[2] * 0x60 + 0x10 + *(longlong *)(param_1 + 0x48)
                            );
          uVar10 = local_res10;
          while (local_e0 = iVar11, -1 < (int)uVar26) {
            uVar17 = (ulonglong)uVar26;
            cVar7 = FUN_144cb5190(lVar16);
            if (((cVar7 != '\0') && (cVar7 = FUN_144cb52c0(lVar16,uVar17), cVar7 != '\0')) &&
               (cVar7 = FUN_144cb52c0(lVar16,*(undefined4 *)
                                              (uVar17 * 0x60 + *(longlong *)(param_1 + 0x48) + 8)),
               cVar7 != '\0')) {
              bVar5 = true;
            }
            iVar14 = iVar11 + 1;
            if ((int)(uVar10 & 0x7fffffff) < iVar14) {
              FUN_1401f86b2(&local_e8,&PTR_vftable_14c6e47c0,(longlong)iVar14);
              local_res10 = local_dc;
              iVar11 = local_e0;
              uVar10 = local_dc;
            }
            if ((uint *)(local_e8 + iVar11) != (uint *)0x0) {
              local_e8[iVar11] = uVar26;
            }
            puVar25 = (uint *)(local_c0 + (ulonglong)(uVar26 >> 5) * 4);
            *puVar25 = *puVar25 | 1 << (uVar26 & 0x1f);
            lVar13 = *(longlong *)(param_1 + 0x48);
            iVar11 = iVar14;
            uVar26 = *(uint *)((longlong)*(int *)(uVar17 * 0x60 + 8 + lVar13) * 0x60 + 0x10 + lVar13
                              );
          }
LAB_144d2f034:
          lVar13 = local_c0;
          lVar16 = local_a8;
          piVar20 = local_d8;
          uVar26 = local_res10;
          if ((!bVar5) && (local_e0 != 0)) {
            local_6c = (undefined4)local_78;
            uStack_68 = (undefined4)((ulonglong)uVar4 >> 0x20);
            iVar11 = local_e0;
            do {
              iVar24 = 0;
              local_d0 = 0;
              iVar14 = *(int *)(*(longlong *)(param_1 + 0x58) + 8 +
                               (ulonglong)
                               (*(uint *)((longlong)*local_e8 * 0x60 + *(longlong *)(param_1 + 0x48)
                                         ) & 0x3fffffff) * 0xc);
              if (1 < iVar11) {
                uVar17 = (ulonglong)(iVar11 - 1);
                piVar20 = local_e8;
                do {
                  piVar20 = piVar20 + 1;
                  uVar10 = *(uint *)((longlong)*piVar20 * 0x60 + *(longlong *)(param_1 + 0x48));
                  if (iVar14 < *(int *)(*(longlong *)(param_1 + 0x58) + 8 +
                                       (ulonglong)(uVar10 & 0x3fffffff) * 0xc)) {
                    iVar14 = *(int *)(*(longlong *)(param_1 + 0x58) + 8 +
                                     (ulonglong)(uVar10 & 0x3fffffff) * 0xc);
                  }
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              iVar19 = iVar11 + -1;
              iVar15 = iVar14 - *(int *)(param_1 + 0x1a4);
              iVar9 = *(int *)(param_1 + 0x1a0);
              local_90 = (longlong)iVar19;
              local_c8 = iVar14;
              if (-1 < iVar19) {
                piVar20 = local_e8 + local_90;
                piVar12 = local_d8;
                piVar22 = local_e8;
                do {
                  iVar8 = *(int *)(*(longlong *)(param_1 + 0x58) + 8 +
                                  (ulonglong)
                                  (*(uint *)((longlong)*piVar20 * 0x60 +
                                            *(longlong *)(param_1 + 0x48)) & 0x3fffffff) * 0xc);
                  iVar27 = iVar11;
                  if (iVar15 - iVar9 <= iVar8) {
                    iVar23 = iVar24 + 1;
                    if (iVar14 < iVar8) {
                      iVar8 = iVar14;
                    }
                    if ((int)(local_cc & 0x7fffffff) < iVar23) {
                      FUN_1401f86b2(&local_d8,&PTR_vftable_14c6e47c0,(longlong)iVar23);
                      piVar12 = local_d8;
                      piVar22 = local_e8;
                      iVar24 = local_d0;
                    }
                    if (piVar12 + iVar24 != (int *)0x0) {
                      piVar12[iVar24] = *piVar20;
                    }
                    iVar27 = iVar11 + -1;
                    iVar24 = iVar23;
                    local_d0 = iVar23;
                    iVar14 = iVar8;
                    if ((iVar27 != iVar19) && (piVar20 != piVar22 + (longlong)iVar11 + -1)) {
                      *piVar20 = piVar22[(longlong)iVar11 + -1];
                    }
                  }
                  iVar11 = iVar27;
                  iVar19 = iVar19 + -1;
                  local_90 = local_90 + -1;
                  piVar20 = piVar20 + -1;
                } while (-1 < local_90);
              }
              local_80 = *(int *)(param_1 + 0x1a4);
              uStack_7c = *(int *)(param_1 + 0x1a0) + local_80;
              uVar21 = (ulonglong)uStack_7c;
              uVar18 = (longlong)local_80 * (longlong)(local_c8 - iVar14) +
                       (longlong)iVar14 * uVar21;
              uVar17 = -uVar18;
              if ((longlong)-uVar18 < 0) {
                uVar17 = uVar18;
              }
              iVar19 = (int)(uVar17 / uVar21);
              iVar9 = (int)(uVar17 % uVar21);
              iVar14 = iVar19;
              if ((longlong)uVar18 < 0) {
                iVar14 = -iVar19;
                iVar9 = -iVar9;
              }
              iVar15 = -iVar19;
              if (-1 < (longlong)uVar18) {
                iVar15 = iVar19;
              }
              if ((iVar9 >> 0x1f | (uint)(iVar9 != 0)) == 0xffffffff) {
                iVar14 = iVar15 + -1;
              }
              iVar9 = *(int *)(param_1 + 0x60);
              iVar19 = iVar9 + 1;
              if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar19) {
                FUN_147e4dcf0((longlong *)(param_1 + 0x58),&PTR_vftable_14c6e47a0,(longlong)iVar19);
              }
              puVar2 = (undefined8 *)
                       (*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x60) * 0xc);
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = CONCAT44(uStack_68,local_6c);
                *(int *)(puVar2 + 1) = iVar14;
              }
              *(int *)(param_1 + 0x60) = iVar19;
              for (piVar20 = local_d8; piVar20 != local_d8 + iVar24; piVar20 = piVar20 + 1) {
                *(int *)((longlong)*piVar20 * 0x60 + *(longlong *)(param_1 + 0x48)) = iVar9;
              }
            } while (iVar11 != 0);
            lVar13 = local_c0;
            lVar16 = param_1 + 0x20;
            piVar20 = local_d8;
          }
        }
        local_98 = local_98 + 0x60;
        local_res18 = local_res18 + 1;
      } while ((int)local_res18 < *(int *)(param_1 + 0x50));
    }
    piVar12 = local_e8;
    if ((-1 < (int)local_cc) && (piVar20 != (int *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,piVar20,(ulonglong)(local_cc & 0x7fffffff) << 2);
    }
    if ((-1 < (int)uVar26) && (piVar12 != (int *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,piVar12,(ulonglong)(uVar26 & 0x7fffffff) << 2);
    }
    FUN_144bf90d0(&local_c0);
  }
  return;
}



// FUNCTION 144d2f410 FUN_144d2f410 body=1830 status=ok
// SIG undefined FUN_144d2f410(void)

void FUN_144d2f410(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint *puVar19;
  int *piVar20;
  uint local_res18;
  int local_res20;
  uint uStack_104;
  int *local_100;
  int local_f8;
  uint local_f4;
  char *local_f0;
  uint local_e8;
  char *local_e0;
  longlong local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [8];
  uint *local_b0;
  undefined1 local_a8 [16];
  
  lVar7 = *(longlong *)(param_1 + 0x18);
  iVar12 = *(int *)(lVar7 + 0x60) + *(int *)(lVar7 + 0x50) + *(int *)(lVar7 + 0x40);
  if ((int)(*(uint *)(param_1 + 0x1ec) & 0x7fffffff) < iVar12) {
    FUN_144d30d30((undefined8 *)(param_1 + 0x1e0),&PTR_vftable_14c6e47a0);
  }
  iVar8 = *(int *)(param_1 + 0x1e8);
  if ((iVar8 < iVar12) || (iVar12 < iVar8)) {
    *(int *)(param_1 + 0x1e8) = iVar12;
    iVar8 = iVar12;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x1e0);
  puVar1 = puVar9 + (longlong)iVar8 * 2;
  for (; puVar9 != puVar1; puVar9 = puVar9 + 2) {
    *puVar9 = 0x7fffff;
    puVar9[1] = 0xff800001;
  }
  uVar14 = 0x80000000;
  local_res18 = 0x80000000;
  uVar13 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x30);
  if ((int)uVar13 < 1) {
    local_e8 = 0x80000000;
    local_f0 = (char *)0x0;
  }
  else {
    local_e8 = uVar13;
    local_f0 = (char *)(**(code **)(PTR_vftable_14c6e47c0 + 8))
                                 (&PTR_vftable_14c6e47c0,(longlong)(int)uVar13);
    uVar11 = (ulonglong)uVar13;
    pcVar5 = local_f0;
    do {
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      uVar11 = uVar11 - 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar11 != 0);
  }
  pcVar5 = local_f0;
  cVar3 = FUN_144cb4d20(*(undefined8 *)(param_1 + 0x18));
  piVar20 = (int *)0x0;
  local_100 = (int *)0x0;
  local_f4 = 0x80000000;
  local_res20 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x30)) {
    local_d8 = 0;
    local_e0 = pcVar5;
    do {
      if (*local_e0 == '\0') {
        *local_e0 = '\x01';
        lVar7 = *(longlong *)(param_1 + 0x18);
        local_f8 = 0;
        puVar17 = (uint *)(*(longlong *)(lVar7 + 0x28) + local_d8);
        uVar13 = *puVar17;
        iVar12 = 0;
        local_b0 = puVar17;
        if ((uVar14 & 0x7fffffff) == 0) {
          FUN_1401f86b2(&local_100,&PTR_vftable_14c6e47c0,1);
          lVar7 = *(longlong *)(param_1 + 0x18);
          local_res18 = local_f4;
          piVar20 = local_100;
          iVar12 = local_f8;
        }
        if ((uint *)(piVar20 + iVar12) != (uint *)0x0) {
          piVar20[iVar12] = uVar13 & 0x3fffffff;
          lVar7 = *(longlong *)(param_1 + 0x18);
        }
        iVar12 = 1;
        local_f8 = 1;
        if (cVar3 == '\0') {
          uVar13 = *(uint *)(*(longlong *)(lVar7 + 0x38) + 8 +
                            (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
          local_d0._0_8_ =
               *(undefined8 *)
                (*(longlong *)(lVar7 + 0x38) + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
          uStack_104 = uVar13;
        }
        else {
          piVar6 = (int *)FUN_144cb4e20(lVar7,local_c0,puVar17[1]);
          lVar7 = *(longlong *)(param_1 + 0x18);
          iVar8 = *(int *)(*(longlong *)(lVar7 + 0x38) + 8 +
                          (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
          uVar13 = iVar8 - *piVar6;
          local_d0._0_8_ =
               *(undefined8 *)
                (*(longlong *)(lVar7 + 0x38) + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
          if (1 < (longlong)((int)uVar13 >> 0x17) + 1U) {
            uVar13 = (int)uVar13 >> 0x1f ^ 0x7fffff;
          }
          uStack_104 = iVar8 + *piVar6;
          if (1 < (longlong)((int)uStack_104 >> 0x17) + 1U) {
            uStack_104 = (int)uStack_104 >> 0x1f ^ 0x7fffff;
          }
        }
        uVar14 = uStack_104;
        if ((int)puVar17[4] < 0) {
LAB_144d2f846:
          puVar17 = (uint *)((longlong)(int)puVar17[2] * 0x60 + 0x10 +
                            *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28));
          uVar4 = *puVar17;
          iVar8 = local_f8;
          local_f8 = iVar12;
          while (iVar12 = local_f8, -1 < (int)uVar4) {
            pcVar5[uVar4] = '\x01';
            lVar7 = 0;
            local_d0 = *(undefined1 (*) [16])
                        ((longlong)(int)*puVar17 * 0x60 +
                        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28));
            uVar4 = local_d0._0_4_;
            iVar12 = 0;
            local_a8 = local_d0;
            if (0 < local_f8) {
              do {
                if (piVar20[lVar7] == (uVar4 & 0x3fffffff)) {
                  iVar16 = local_f8;
                  if (-1 < iVar12) goto LAB_144d2f9fe;
                  break;
                }
                iVar12 = iVar12 + 1;
                lVar7 = lVar7 + 1;
              } while (lVar7 < local_f8);
            }
            iVar16 = local_f8 + 1;
            if ((int)(local_res18 & 0x7fffffff) < iVar16) {
              local_f8 = iVar8;
              FUN_1401f86b2(&local_100,&PTR_vftable_14c6e47c0,(longlong)iVar16);
              local_res18 = local_f4;
              piVar20 = local_100;
            }
            if ((uint *)(piVar20 + local_f8) != (uint *)0x0) {
              piVar20[local_f8] = uVar4 & 0x3fffffff;
            }
            uVar11 = (ulonglong)(uVar4 & 0x3fffffff);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
            if (cVar3 == '\0') {
              uVar4 = *(uint *)(lVar7 + 8 + uVar11 * 0xc);
              local_d0._0_8_ = *(undefined8 *)(lVar7 + uVar11 * 0xc);
              if ((int)uVar4 < (int)uVar13) {
                uVar13 = uVar4;
              }
              pcVar5 = local_f0;
              uStack_104 = uVar14;
              iVar8 = iVar16;
              if ((int)uVar14 < (int)uVar4) {
                uStack_104 = uVar4;
                uVar14 = uVar4;
              }
            }
            else {
              uVar18 = local_d0._4_4_;
              iVar12 = *(int *)(lVar7 + 8 + uVar11 * 0xc);
              local_d0._0_8_ = *(undefined8 *)(lVar7 + uVar11 * 0xc);
              local_f8 = iVar16;
              piVar6 = (int *)FUN_144cb4e20(*(longlong *)(param_1 + 0x18),local_b8,uVar18);
              uVar4 = iVar12 + *piVar6;
              if (1 < (longlong)((int)uVar4 >> 0x17) + 1U) {
                uVar4 = (int)uVar4 >> 0x1f ^ 0x7fffff;
              }
              uVar15 = iVar12 - *piVar6;
              if (1 < (longlong)((int)uVar15 >> 0x17) + 1U) {
                uVar15 = (int)uVar15 >> 0x1f ^ 0x7fffff;
              }
              if ((int)uVar15 < (int)uVar13) {
                uVar13 = uVar15;
              }
              pcVar5 = local_f0;
              iVar8 = local_f8;
              if ((int)uVar14 < (int)uVar4) {
                uStack_104 = uVar4;
                uVar14 = uVar4;
              }
            }
LAB_144d2f9fe:
            local_f8 = iVar8;
            puVar17 = (uint *)((longlong)(int)local_a8._8_4_ * 0x60 + 0x10 +
                              *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28));
            iVar8 = local_f8;
            local_f8 = iVar16;
            uVar4 = *puVar17;
          }
        }
        else {
          uVar11 = (ulonglong)
                   *(uint *)((longlong)(int)puVar17[4] * 0x60 + 0xc + *(longlong *)(lVar7 + 0x28));
          do {
            iVar8 = 0;
            pcVar5[(int)uVar11] = '\x01';
            puVar19 = (uint *)((longlong)(int)uVar11 * 0x60 +
                              *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28));
            lVar7 = 0;
            uVar4 = *puVar19;
            if (0 < iVar12) {
              do {
                if (piVar20[lVar7] == (uVar4 & 0x3fffffff)) {
                  if (-1 < iVar8) goto LAB_144d2f812;
                  break;
                }
                iVar8 = iVar8 + 1;
                lVar7 = lVar7 + 1;
              } while (lVar7 < iVar12);
            }
            iVar8 = iVar12 + 1;
            if ((int)(local_res18 & 0x7fffffff) < iVar8) {
              FUN_1401f86b2(&local_100,&PTR_vftable_14c6e47c0,(longlong)iVar8);
              local_res18 = local_f4;
              piVar20 = local_100;
              iVar12 = local_f8;
            }
            if ((uint *)(piVar20 + iVar12) != (uint *)0x0) {
              piVar20[iVar12] = uVar4 & 0x3fffffff;
            }
            lVar7 = *(longlong *)(param_1 + 0x18);
            uVar11 = (ulonglong)(*puVar19 & 0x3fffffff);
            iVar12 = iVar8;
            local_f8 = iVar8;
            if (cVar3 == '\0') {
              uVar4 = *(uint *)(*(longlong *)(lVar7 + 0x38) + 8 + uVar11 * 0xc);
              if ((int)uVar4 < (int)uVar13) {
                uVar13 = uVar4;
              }
              local_d0._0_8_ = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + uVar11 * 0xc);
              pcVar5 = local_f0;
              uStack_104 = uVar14;
              if ((int)uVar14 < (int)uVar4) {
                uStack_104 = uVar4;
                uVar14 = uVar4;
              }
            }
            else {
              iVar8 = *(int *)(*(longlong *)(lVar7 + 0x38) + 8 + uVar11 * 0xc);
              local_d0._0_8_ = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + uVar11 * 0xc);
              piVar6 = (int *)FUN_144cb4e20(lVar7,local_bc,puVar19[1]);
              uVar4 = iVar8 + *piVar6;
              if (1 < (longlong)((int)uVar4 >> 0x17) + 1U) {
                uVar4 = (int)uVar4 >> 0x1f ^ 0x7fffff;
              }
              uVar15 = iVar8 - *piVar6;
              if (1 < (longlong)((int)uVar15 >> 0x17) + 1U) {
                uVar15 = (int)uVar15 >> 0x1f ^ 0x7fffff;
              }
              if ((int)uVar15 < (int)uVar13) {
                uVar13 = uVar15;
              }
              pcVar5 = local_f0;
              if ((int)uVar14 < (int)uVar4) {
                uStack_104 = uVar4;
                uVar14 = uVar4;
              }
            }
LAB_144d2f812:
            puVar17 = local_b0;
            if ((int)puVar19[4] < 0) goto LAB_144d2f846;
            uVar2 = *(ulonglong *)
                     ((longlong)(int)puVar19[4] * 0x60 + 8 +
                     *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28));
            uVar11 = uVar2 >> 0x20;
            iVar8 = local_f8;
          } while ((int)(uVar2 >> 0x20) != local_res20);
        }
        local_f8 = iVar8;
        for (piVar6 = piVar20; uVar14 = local_res18, piVar6 != piVar20 + iVar12; piVar6 = piVar6 + 1
            ) {
          lVar10 = (longlong)*piVar6;
          lVar7 = *(longlong *)(param_1 + 0x1e0);
          if ((int)uVar13 < *(int *)(lVar7 + lVar10 * 8)) {
            *(uint *)(lVar7 + lVar10 * 8) = uVar13;
          }
          if (*(int *)(lVar7 + 4 + lVar10 * 8) < (int)uStack_104) {
            *(uint *)(lVar7 + 4 + lVar10 * 8) = uStack_104;
          }
        }
      }
      local_e0 = local_e0 + 1;
      local_res20 = local_res20 + 1;
      local_d8 = local_d8 + 0x60;
    } while (local_res20 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x30));
  }
  if ((-1 < (int)uVar14) && (piVar20 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,piVar20,(ulonglong)(uVar14 & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_e8) && (pcVar5 != (char *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,pcVar5,local_e8 & 0x7fffffff)
    ;
  }
  return;
}



// FUNCTION 144d2fb40 FUN_144d2fb40 body=461 status=ok
// SIG undefined FUN_144d2fb40(void)

void FUN_144d2fb40(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  
  FUN_144c3fad0(param_1 + 0x1f0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x30),0);
  cVar3 = FUN_144cb5190(*(undefined8 *)(param_1 + 0x18));
  if (cVar3 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x18);
    iVar6 = 0;
    if (0 < *(int *)(lVar4 + 0x30)) {
      lVar8 = 0;
      do {
        cVar3 = FUN_144cb52c0(lVar4,iVar6);
        if (cVar3 != '\0') {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
          uVar5 = (ulonglong)((*(uint *)(lVar4 + lVar8) & 0x3fffffff) >> 5);
          *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) =
               *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) |
               1 << (*(uint *)(lVar4 + lVar8) & 0x1f);
          lVar2 = *(longlong *)(param_1 + 0x18);
          uVar1 = *(uint *)((longlong)*(int *)(lVar4 + 8 + lVar8) * 0x60 +
                            *(longlong *)(lVar2 + 0x28) + 0x10);
          while (-1 < (int)uVar1) {
            puVar7 = (uint *)((ulonglong)uVar1 * 0x60 + *(longlong *)(lVar2 + 0x28));
            uVar1 = *puVar7;
            uVar5 = (ulonglong)((uVar1 & 0x3fffffff) >> 5);
            *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) =
                 *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) | 1 << (uVar1 & 0x1f);
            lVar2 = *(longlong *)(param_1 + 0x18);
            uVar1 = *(uint *)((longlong)(int)puVar7[2] * 0x60 + *(longlong *)(lVar2 + 0x28) + 0x10);
          }
          puVar7 = (uint *)((longlong)*(int *)(lVar4 + 0xc + lVar8) * 0x60 +
                           *(longlong *)(lVar2 + 0x28));
          uVar1 = *puVar7;
          uVar5 = (ulonglong)((uVar1 & 0x3fffffff) >> 5);
          *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) =
               *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) | 1 << (uVar1 & 0x1f);
          uVar1 = puVar7[4];
          while (-1 < (int)uVar1) {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
            puVar7 = (uint *)((longlong)*(int *)((ulonglong)uVar1 * 0x60 + 0xc + lVar4) * 0x60 +
                             lVar4);
            uVar1 = *puVar7;
            uVar5 = (ulonglong)((uVar1 & 0x3fffffff) >> 5);
            *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) =
                 *(uint *)(*(longlong *)(param_1 + 0x1f0) + uVar5 * 4) | 1 << (uVar1 & 0x1f);
            uVar1 = puVar7[4];
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x18);
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0x60;
      } while (iVar6 < *(int *)(lVar4 + 0x30));
    }
  }
  return;
}



// FUNCTION 144d2fd10 FUN_144d2fd10 body=366 status=ok
// SIG undefined FUN_144d2fd10(void)

void FUN_144d2fd10(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  uint uStackX_14;
  
  iVar8 = *(int *)(param_1 + 0x40);
  if ((int)(*(uint *)(param_1 + 0x214) & 0x7fffffff) < iVar8) {
    FUN_144d30d30((longlong *)(param_1 + 0x208),&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  if ((*(int *)(param_1 + 0x210) < iVar8) || (iVar8 < *(int *)(param_1 + 0x210))) {
    *(int *)(param_1 + 0x210) = iVar8;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar7 = 0x7fffff;
      uVar9 = 0xff800001;
      iVar1 = *(int *)(lVar10 + *(longlong *)(param_1 + 0x38));
      iVar6 = iVar1;
      do {
        lVar4 = (longlong)iVar6;
        iVar6 = *(int *)(lVar4 * 0x60 + 0xc + *(longlong *)(param_1 + 0x48));
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x58) + 8 +
                         (ulonglong)
                         (*(uint *)(lVar4 * 0x60 + *(longlong *)(param_1 + 0x48)) & 0x3fffffff) *
                         0xc);
        if ((int)uVar2 < (int)uVar7) {
          uVar7 = uVar2;
        }
        if ((int)uVar9 < (int)uVar2) {
          uVar9 = uVar2;
        }
      } while (iVar6 != iVar1);
      local_res10 = uVar7;
      uStackX_14 = uVar9;
      cVar3 = FUN_144cb4d20(param_1 + 0x20);
      if (cVar3 != '\0') {
        piVar5 = (int *)FUN_144cb4e20(param_1 + 0x20,local_res8,iVar8);
        local_res10 = uVar7 - *piVar5;
        if (1 < (longlong)((int)local_res10 >> 0x17) + 1U) {
          local_res10 = (int)local_res10 >> 0x1f ^ 0x7fffff;
        }
        uStackX_14 = *piVar5 + uVar9;
        if (1 < (longlong)((int)uStackX_14 >> 0x17) + 1U) {
          uStackX_14 = (int)uStackX_14 >> 0x1f ^ 0x7fffff;
        }
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 4;
      *(ulonglong *)(lVar11 + *(longlong *)(param_1 + 0x208)) = CONCAT44(uStackX_14,local_res10);
      lVar11 = lVar11 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 144d2fe80 FUN_144d2fe80 body=616 status=ok
// SIG undefined FUN_144d2fe80(void)

void FUN_144d2fe80(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[0x4f];
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x50) * 2;
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -2;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) << 2);
    }
    *plVar3 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar3;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x284)) && (param_1[0x4f] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x4f],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x284) & 0x7fffffff) << 4);
  }
  param_1[0x4f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x80000000;
  plVar1 = (longlong *)param_1[0x4d];
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x4e) * 2;
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -2;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) << 2);
    }
    *plVar3 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar3;
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x274)) && (param_1[0x4d] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x4d],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x274) & 0x7fffffff) << 4);
  }
  param_1[0x4d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x80000000;
  FUN_144d2d6d0(param_1 + 0x46);
  FUN_144d2d600(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x214)) && (param_1[0x41] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x41],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x214) & 0x7fffffff) << 3);
  }
  param_1[0x41] = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x80000000;
  FUN_144bf90d0(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1ec)) && (param_1[0x3c] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x3c],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1ec) & 0x7fffffff) << 3);
  }
  param_1[0x3c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x80000000;
  FUN_144d2cdf0(param_1 + 0x38);
  FUN_147e4ccc0(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144d300f0 FUN_144d300f0 body=87 status=ok
// SIG undefined FUN_144d300f0(void)

undefined8 FUN_144d300f0(undefined8 param_1,ulonglong param_2)

{
  FUN_144d2fe80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 144d30150 FUN_144d30150 body=107 status=ok
// SIG undefined FUN_144d30150(void)

void FUN_144d30150(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 2);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 144d301c0 FUN_144d301c0 body=104 status=ok
// SIG undefined FUN_144d301c0(void)

void FUN_144d301c0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144d30230 FUN_144d30230 body=253 status=ok
// SIG undefined FUN_144d30230(void)

void FUN_144d30230(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xf4)) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xe8),
               (ulonglong)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  FUN_144d301c0(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x9c)) && (*(longlong *)(param_1 + 0x90) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x90),
               (ulonglong)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x58),
               (ulonglong)(*(uint *)(param_1 + 100) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  FUN_144d30150(param_1 + 0x18);
  return;
}



// FUNCTION 144d30330 FUN_144d30330 body=236 status=ok
// SIG undefined FUN_144d30330(void)

void FUN_144d30330(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtSimplification/Init";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x20) != 0) {
    FUN_144d2d940();
    FUN_144d2dc60(*(undefined8 *)(param_1 + 0x10),0);
  }
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d30420 FUN_144d30420 body=5 status=ok
// SIG undefined FUN_144d30420(void)

undefined8 FUN_144d30420(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144d30430 FUN_144d30430 body=115 status=ok
// SIG undefined FUN_144d30430(void)

undefined8 * FUN_144d30430(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144d304b0 FUN_144d304b0 body=15 status=ok
// SIG undefined FUN_144d304b0(void)

undefined4 * FUN_144d304b0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 144d304c0 FUN_144d304c0 body=240 status=ok
// SIG undefined FUN_144d304c0(void)

void FUN_144d304c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *local_18;
  char *local_10;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar2 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar2 != 0) {
    local_18 = "TtSimplification/EdgeCollapse";
    local_10 = "";
    FUN_144b3f370(lVar2,&local_18);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x20) != 0) {
    FUN_144d2de70(*(longlong *)(param_1 + 0x10),uVar1);
  }
  if (lVar2 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar2,&local_18);
  }
  return;
}



// FUNCTION 144d305b0 FUN_144d305b0 body=5 status=ok
// SIG undefined FUN_144d305b0(void)

undefined8 FUN_144d305b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144d305c0 FUN_144d305c0 body=115 status=ok
// SIG undefined FUN_144d305c0(void)

undefined8 * FUN_144d305c0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144d30640 FUN_144d30640 body=239 status=ok
// SIG undefined FUN_144d30640(void)

void FUN_144d30640(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtSimplification/AfterFirstCollapseRound";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x20) != 0) {
    FUN_144d2e190();
    FUN_144d2dc60(*(undefined8 *)(param_1 + 0x10),1);
  }
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d30730 FUN_144d30730 body=5 status=ok
// SIG undefined FUN_144d30730(void)

undefined8 FUN_144d30730(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144d30740 FUN_144d30740 body=115 status=ok
// SIG undefined FUN_144d30740(void)

undefined8 * FUN_144d30740(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144d307c0 FUN_144d307c0 body=15 status=ok
// SIG undefined FUN_144d307c0(void)

undefined4 * FUN_144d307c0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 144d307d0 FUN_144d307d0 body=240 status=ok
// SIG undefined FUN_144d307d0(void)

void FUN_144d307d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *local_18;
  char *local_10;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar2 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar2 != 0) {
    local_18 = "TtSimplification/EdgeCollapse";
    local_10 = "";
    FUN_144b3f370(lVar2,&local_18);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x20) != 0) {
    FUN_144d2de70(*(longlong *)(param_1 + 0x10),uVar1);
  }
  if (lVar2 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar2,&local_18);
  }
  return;
}



// FUNCTION 144d308c0 FUN_144d308c0 body=5 status=ok
// SIG undefined FUN_144d308c0(void)

undefined8 FUN_144d308c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144d308d0 FUN_144d308d0 body=115 status=ok
// SIG undefined FUN_144d308d0(void)

undefined8 * FUN_144d308d0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144d30950 FUN_144d30950 body=335 status=ok
// SIG undefined FUN_144d30950(void)

void FUN_144d30950(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtSimplification/FinalTasks";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x20) != 0) {
    FUN_144d2e190();
    FUN_144d2e250(*(undefined8 *)(param_1 + 0x10));
    FUN_144cda610(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10) + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar3 = 0;
    uVar5 = uVar3;
    if (0 < *(int *)(lVar2 + 0x30)) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x28);
        uVar3 = uVar3 + 0x60;
        uVar4 = (int)uVar5 + 1;
        *(undefined8 *)(lVar2 + -0x48 + uVar3) = 0;
        *(undefined8 *)(lVar2 + -0x40 + uVar3) = 0;
        *(undefined8 *)(lVar2 + -0x38 + uVar3) = 0;
        *(undefined8 *)(lVar2 + -0x30 + uVar3) = 0;
        *(undefined8 *)(lVar2 + -0x28 + uVar3) = 0;
        *(undefined8 *)(lVar2 + -0x20 + uVar3) = 0;
        *(undefined8 *)(lVar2 + -0x18 + uVar3) = 0;
        *(undefined8 *)(lVar2 + -0x10 + uVar3) = 0;
        *(undefined4 *)(lVar2 + -8 + uVar3) = 0;
        lVar2 = *(longlong *)(param_1 + 0x18);
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(lVar2 + 0x30));
    }
  }
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144d30aa0 FUN_144d30aa0 body=5 status=ok
// SIG undefined FUN_144d30aa0(void)

undefined8 FUN_144d30aa0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144d30ab0 FUN_144d30ab0 body=129 status=ok
// SIG undefined FUN_144d30ab0(void)

undefined8 * FUN_144d30ab0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144d30b40 FUN_144d30b40 body=105 status=ok
// SIG undefined FUN_144d30b40(void)

uint * FUN_144d30b40(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0xc) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144d30bb0 FUN_144d30bb0 body=103 status=ok
// SIG undefined FUN_144d30bb0(void)

uint * FUN_144d30bb0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)((ulonglong)uVar3 * 0x40 + *param_1) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144d30c20 FUN_144d30c20 body=262 status=ok
// SIG undefined FUN_144d30c20(void)

ulonglong FUN_144d30c20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar3 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0xc);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144d30d30 FUN_144d30d30 body=269 status=ok
// SIG undefined FUN_144d30d30(void)

void FUN_144d30d30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144d30e40 FUN_144d30e40 body=459 status=ok
// SIG undefined FUN_144d30e40(void)

void FUN_144d30e40(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar7 = param_3;
  if (param_3 <= uVar10 && uVar10 - param_3 != 0) {
    uVar7 = uVar10;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar8 = uVar7 << 4;
  local_res20 = lVar8;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,lVar8,&local_res8);
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  local_res18 = puVar4;
  if (0 < (int)uVar2) {
    puVar9 = (undefined4 *)(lVar3 + 0xc);
    uVar6 = (ulonglong)uVar2;
    do {
      puVar1 = (undefined8 *)(puVar9 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        FUN_143821c08(puVar4,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar4;
        puVar9[-1] = *(undefined4 *)(puVar4 + 1);
        *puVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar9 = puVar9 + 4;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = (uint *)((longlong)local_res18 + 0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) << 2);
      }
      *puVar5 = 0x80000000;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5 = puVar5 + 4;
      uVar10 = uVar10 - 1;
      lVar8 = local_res20;
      param_2 = local_res10;
    } while (uVar10 != 0);
  }
  if (lVar8 + 0x10U <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar7 = uVar7 + 1;
    if (lVar8 + 0x10U <= local_res8) {
      uVar7 = uVar7 + (local_res8 - lVar8 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 4);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144d3100c FUN_144d3100c body=9 status=ok
// SIG undefined FUN_144d3100c(void)

void FUN_144d3100c(longlong param_1)

{
  FUN_144d30430(param_1 + -0x20);
  return;
}



// FUNCTION 144d31018 FUN_144d31018 body=9 status=ok
// SIG undefined FUN_144d31018(void)

void FUN_144d31018(longlong param_1)

{
  FUN_144d305c0(param_1 + -0x20);
  return;
}



// FUNCTION 144d31024 FUN_144d31024 body=9 status=ok
// SIG undefined FUN_144d31024(void)

void FUN_144d31024(longlong param_1)

{
  FUN_144d30740(param_1 + -0x20);
  return;
}



// FUNCTION 144d31030 FUN_144d31030 body=9 status=ok
// SIG undefined FUN_144d31030(void)

void FUN_144d31030(longlong param_1)

{
  FUN_144d308d0(param_1 + -0x20);
  return;
}



// FUNCTION 144d3103c FUN_144d3103c body=9 status=ok
// SIG undefined FUN_144d3103c(void)

void FUN_144d3103c(longlong param_1)

{
  FUN_144d30ab0(param_1 + -0x20);
  return;
}



// FUNCTION 144d31050 FUN_144d31050 body=4004 status=ok
// SIG undefined FUN_144d31050(void)

void FUN_144d31050(longlong param_1,int param_2,int param_3,longlong *param_4,longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  int *piVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong lVar15;
  char cVar16;
  int iVar17;
  undefined4 *puVar18;
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
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
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
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  int local_428 [2];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 local_320;
  undefined1 local_31f;
  int local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  char local_210;
  char local_20f;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
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
  
  puVar18 = (undefined4 *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x28));
  iVar17 = puVar18[3];
  lVar15 = *(longlong *)(param_1 + 0x28);
  FUN_147e582da(param_1 + 0x38,&local_208,*puVar18);
  FUN_147e582da(param_1 + 0x38,&local_188,*(undefined4 *)((longlong)iVar17 * 0x60 + lVar15));
  FUN_144cb4a80(param_1,&local_478,puVar18[1]);
  puVar18 = (undefined4 *)((longlong)param_3 * 0x60 + *(longlong *)(param_1 + 0x28));
  iVar17 = puVar18[3];
  lVar15 = *(longlong *)(param_1 + 0x28);
  FUN_147e582da(param_1 + 0x38,&local_108,*puVar18);
  FUN_147e582da(param_1 + 0x38,&local_758,*(undefined4 *)((longlong)iVar17 * 0x60 + lVar15));
  FUN_144cb4a80(param_1,&local_450,puVar18[1]);
  local_5b8 = CONCAT44(uStack_184,local_188);
  uStack_5b0 = CONCAT44(uStack_17c,uStack_180);
  local_5a8 = CONCAT44(uStack_174,local_178);
  uStack_5a0 = CONCAT44(uStack_16c,uStack_170);
  local_598 = CONCAT44(uStack_164,local_168);
  uStack_590 = CONCAT44(uStack_15c,uStack_160);
  local_588 = CONCAT44(uStack_154,local_158);
  uStack_580 = CONCAT44(uStack_14c,uStack_150);
  local_578 = CONCAT44(uStack_124,local_128);
  uStack_570 = CONCAT44(uStack_11c,uStack_120);
  local_568 = CONCAT44(uStack_114,local_118);
  uStack_560 = CONCAT44(uStack_10c,uStack_110);
  local_628 = CONCAT44(uStack_204,local_208);
  uStack_620 = CONCAT44(uStack_1fc,uStack_200);
  local_678 = local_1f8;
  uStack_670 = uStack_1f0;
  local_6c8 = local_1f8;
  uStack_6c0 = uStack_1f0;
  local_668 = local_1e8;
  uStack_660 = uStack_1e0;
  local_6b8 = local_1e8;
  uStack_6b0 = uStack_1e0;
  local_658 = local_1d8;
  uStack_650 = uStack_1d0;
  local_6a8 = local_1d8;
  uStack_6a0 = uStack_1d0;
  local_648 = local_1a8;
  uStack_640 = uStack_1a0;
  local_698 = local_1a8;
  uStack_690 = uStack_1a0;
  local_638 = CONCAT44(uStack_194,local_198);
  uStack_630 = CONCAT44(uStack_18c,uStack_190);
  cVar9 = FUN_144d32000(&local_6d8,&local_7b8);
  uVar7 = local_458;
  uVar4 = uStack_460;
  uVar3 = local_468;
  uVar2 = uStack_470;
  uVar1 = local_478;
  if (cVar9 == '\0') {
    local_618 = CONCAT44(uStack_204,local_208);
    uStack_610 = CONCAT44(uStack_1fc,uStack_200);
    local_608 = local_1f8;
    uStack_600 = uStack_1f0;
    local_5e8 = local_1d8;
    uStack_5e0 = uStack_1d0;
    local_4e8 = local_1c8;
    uStack_4e0 = uStack_1c0;
    local_4d8 = local_1b8;
    uStack_4d0 = uStack_1b0;
    local_5d8 = local_1a8;
    uStack_5d0 = uStack_1a0;
    local_678 = local_f8;
    uStack_670 = uStack_f0;
    local_668 = local_e8;
    uStack_660 = uStack_e0;
    local_658 = local_d8;
    uStack_650 = uStack_d0;
    local_4a8 = local_c8;
    uStack_4a0 = uStack_c0;
    local_498 = local_b8;
    uStack_490 = uStack_b0;
    local_648 = local_a8;
    uStack_640 = uStack_a0;
    local_638 = local_98;
    uStack_630 = uStack_90;
    local_488 = local_148;
    uStack_480 = uStack_140;
    local_4f8 = local_138;
    uStack_4f0 = uStack_130;
    local_5b8 = local_758;
    uStack_5b0 = uStack_750;
    local_5a8 = local_748;
    uStack_5a0 = uStack_740;
    local_598 = local_738;
    uStack_590 = uStack_730;
    local_588 = local_728;
    uStack_580 = uStack_720;
    local_5f8 = local_1e8;
    uStack_5f0 = uStack_1e0;
    local_5c8 = CONCAT44(uStack_194,local_198);
    uStack_5c0 = CONCAT44(uStack_18c,uStack_190);
    local_4c8 = local_718;
    uStack_4c0 = uStack_710;
    local_4b8 = local_708;
    uStack_4b0 = uStack_700;
    local_578 = CONCAT44(uStack_6f4,local_6f8);
    uStack_570 = CONCAT44(uStack_6ec,uStack_6f0);
    local_568 = CONCAT44(uStack_6e4,local_6e8);
    uStack_560 = CONCAT44(uStack_6dc,uStack_6e0);
    local_478 = local_450;
    uStack_470 = uStack_448;
    local_628 = CONCAT44(uStack_104,local_108);
    uStack_620 = CONCAT44(uStack_fc,uStack_100);
    local_468 = local_440;
    uStack_460 = uStack_438;
    local_458 = local_430;
    local_450 = uVar1;
    uStack_448 = uVar2;
    local_440 = uVar3;
    uStack_438 = uVar4;
    local_430 = uVar7;
    iVar17 = param_3;
    param_3 = param_2;
  }
  else {
    local_498 = local_1b8;
    uStack_490 = uStack_1b0;
    local_4a8 = local_1c8;
    uStack_4a0 = uStack_1c0;
    local_4b8 = local_138;
    uStack_4b0 = uStack_130;
    local_4c8 = local_148;
    uStack_4c0 = uStack_140;
    local_5c8 = local_98;
    uStack_5c0 = uStack_90;
    local_5d8 = local_a8;
    uStack_5d0 = uStack_a0;
    local_4d8 = local_b8;
    uStack_4d0 = uStack_b0;
    local_4e8 = local_c8;
    uStack_4e0 = uStack_c0;
    local_5e8 = local_d8;
    uStack_5e0 = uStack_d0;
    local_5f8 = local_e8;
    uStack_5f0 = uStack_e0;
    local_608 = local_f8;
    uStack_600 = uStack_f0;
    local_618 = CONCAT44(uStack_104,local_108);
    uStack_610 = CONCAT44(uStack_fc,uStack_100);
    local_4f8 = local_708;
    uStack_4f0 = uStack_700;
    local_488 = local_718;
    uStack_480 = uStack_710;
    local_108 = local_208;
    uStack_104 = uStack_204;
    uStack_100 = uStack_200;
    uStack_fc = uStack_1fc;
    local_188 = (undefined4)local_758;
    uStack_184 = local_758._4_4_;
    uStack_180 = (undefined4)uStack_750;
    uStack_17c = uStack_750._4_4_;
    local_178 = (undefined4)local_748;
    uStack_174 = local_748._4_4_;
    uStack_170 = (undefined4)uStack_740;
    uStack_16c = uStack_740._4_4_;
    local_168 = (undefined4)local_738;
    uStack_164 = local_738._4_4_;
    uStack_160 = (undefined4)uStack_730;
    uStack_15c = uStack_730._4_4_;
    local_158 = (undefined4)local_728;
    uStack_154 = local_728._4_4_;
    uStack_150 = (undefined4)uStack_720;
    uStack_14c = uStack_720._4_4_;
    local_128 = local_6f8;
    uStack_124 = uStack_6f4;
    uStack_120 = uStack_6f0;
    uStack_11c = uStack_6ec;
    local_118 = local_6e8;
    uStack_114 = uStack_6e4;
    uStack_110 = uStack_6e0;
    uStack_10c = uStack_6dc;
    iVar17 = param_2;
  }
  local_7a8 = local_678;
  uStack_7a0 = uStack_670;
  local_798 = local_668;
  uStack_790 = uStack_660;
  local_788 = local_658;
  uStack_780 = uStack_650;
  local_6d8 = CONCAT44(uStack_184,local_188);
  uStack_6d0 = CONCAT44(uStack_17c,uStack_180);
  local_778._0_4_ = (undefined4)local_648;
  local_778._4_4_ = local_648._4_4_;
  uStack_770._0_4_ = (undefined4)uStack_640;
  uStack_770._4_4_ = uStack_640._4_4_;
  local_6c8 = CONCAT44(uStack_174,local_178);
  uStack_6c0 = CONCAT44(uStack_16c,uStack_170);
  local_6b8 = CONCAT44(uStack_164,local_168);
  uStack_6b0 = CONCAT44(uStack_15c,uStack_160);
  local_6a8 = CONCAT44(uStack_154,local_158);
  uStack_6a0 = CONCAT44(uStack_14c,uStack_150);
  local_7b8 = CONCAT44(uStack_104,local_108);
  uStack_7b0 = CONCAT44(uStack_fc,uStack_100);
  local_768._0_4_ = (undefined4)local_638;
  local_768._4_4_ = local_638._4_4_;
  uStack_760._0_4_ = (undefined4)uStack_630;
  uStack_760._4_4_ = uStack_630._4_4_;
  local_558 = local_158;
  uStack_554 = uStack_154;
  uStack_550 = uStack_150;
  uStack_54c = uStack_14c;
  local_548 = local_128;
  uStack_544 = uStack_124;
  uStack_540 = uStack_120;
  uStack_53c = uStack_11c;
  local_538 = local_118;
  uStack_534 = uStack_114;
  uStack_530 = uStack_110;
  uStack_52c = uStack_10c;
  local_528 = local_188;
  uStack_524 = uStack_184;
  uStack_520 = uStack_180;
  uStack_51c = uStack_17c;
  local_518 = local_178;
  uStack_514 = uStack_174;
  uStack_510 = uStack_170;
  uStack_50c = uStack_16c;
  local_508 = local_168;
  uStack_504 = uStack_164;
  uStack_500 = uStack_160;
  uStack_4fc = uStack_15c;
  local_428[0] = iVar17;
  local_318 = param_3;
  iVar11 = FUN_144d320f0(&local_7b8,&local_6d8);
  if (iVar11 == -1) {
    local_6d8 = CONCAT44(uStack_524,local_528);
    uStack_6d0 = CONCAT44(uStack_51c,uStack_520);
    local_6c8 = CONCAT44(uStack_514,local_518);
    uStack_6c0 = CONCAT44(uStack_50c,uStack_510);
    local_6b8 = CONCAT44(uStack_504,local_508);
    uStack_6b0 = CONCAT44(uStack_4fc,uStack_500);
    local_6a8 = CONCAT44(uStack_554,local_558);
    uStack_6a0 = CONCAT44(uStack_54c,uStack_550);
    FUN_144cb9950(&local_6d8,&local_7b8);
    local_758 = local_7b8;
    uStack_750 = uStack_7b0;
    local_748 = local_7a8;
    uStack_740 = uStack_7a0;
    local_738 = local_798;
    uStack_730 = uStack_790;
    local_728 = local_788;
    uStack_720 = uStack_780;
    local_6f8 = (undefined4)local_778;
    uStack_6f4 = local_778._4_4_;
    uStack_6f0 = (undefined4)uStack_770;
    uStack_6ec = uStack_770._4_4_;
    local_6e8 = (undefined4)local_768;
    uStack_6e4 = local_768._4_4_;
    uStack_6e0 = (undefined4)uStack_760;
    uStack_6dc = uStack_760._4_4_;
    FUN_144cb95e0(&local_7b8,&local_478,&local_718);
    bVar5 = true;
    local_320 = 1;
    uStack_420 = local_758;
    uStack_418 = uStack_750;
    local_3d0 = local_708;
    uStack_3c8 = uStack_700;
    uStack_410 = local_748;
    uStack_408 = uStack_740;
    local_400 = local_738;
    uStack_3f8 = uStack_730;
    local_3f0 = local_728;
    uStack_3e8 = uStack_720;
    local_3e0 = local_718;
    uStack_3d8 = uStack_710;
    local_3c0 = CONCAT44(uStack_6f4,local_6f8);
    uStack_3b8 = CONCAT44(uStack_6ec,uStack_6f0);
    local_3b0 = CONCAT44(uStack_6e4,local_6e8);
    uStack_3a8 = CONCAT44(uStack_6dc,uStack_6e0);
    local_290 = CONCAT44(uStack_524,local_528);
    uStack_288 = CONCAT44(uStack_51c,uStack_520);
    local_280 = CONCAT44(uStack_514,local_518);
    uStack_278 = CONCAT44(uStack_50c,uStack_510);
    local_270 = CONCAT44(uStack_504,local_508);
    uStack_268 = CONCAT44(uStack_4fc,uStack_500);
    local_260 = CONCAT44(uStack_554,local_558);
    uStack_258 = CONCAT44(uStack_54c,uStack_550);
    local_230 = CONCAT44(uStack_544,local_548);
    uStack_228 = CONCAT44(uStack_53c,uStack_540);
    local_220 = CONCAT44(uStack_534,local_538);
    uStack_218 = CONCAT44(uStack_52c,uStack_530);
  }
  else {
    bVar5 = false;
    local_320 = 0;
    uStack_420 = local_628;
    uStack_418 = uStack_620;
    local_3e0 = local_4a8;
    uStack_3d8 = uStack_4a0;
    local_3d0 = local_498;
    uStack_3c8 = uStack_490;
    if (iVar11 != 0) {
      uStack_410 = local_678;
      uStack_408 = uStack_670;
      local_400 = local_668;
      uStack_3f8 = uStack_660;
      local_3f0 = local_658;
      uStack_3e8 = uStack_650;
      local_3c0 = local_648;
      uStack_3b8 = uStack_640;
      local_3b0 = local_638;
      uStack_3a8 = uStack_630;
      local_6c8 = local_678;
      uStack_6c0 = uStack_670;
      local_6b8 = local_668;
      uStack_6b0 = uStack_660;
      local_6a8 = local_658;
      uStack_6a0 = uStack_650;
      local_698 = local_648;
      uStack_690 = uStack_640;
      local_688 = local_638;
      uStack_680 = uStack_630;
      FUN_144cb9950(&local_6d8,&local_7b8);
      local_758 = local_7b8;
      uStack_750 = uStack_7b0;
      local_748 = local_7a8;
      uStack_740 = uStack_7a0;
      local_738 = local_798;
      uStack_730 = uStack_790;
      local_728 = local_788;
      uStack_720 = uStack_780;
      local_6f8 = (undefined4)local_778;
      uStack_6f4 = local_778._4_4_;
      uStack_6f0 = (undefined4)uStack_770;
      uStack_6ec = uStack_770._4_4_;
      local_6e8 = (undefined4)local_768;
      uStack_6e4 = local_768._4_4_;
      uStack_6e0 = (undefined4)uStack_760;
      uStack_6dc = uStack_760._4_4_;
      FUN_144cb95e0(&local_7b8,&local_450,&local_718);
      cVar9 = '\x01';
      local_290 = local_758;
      uStack_288 = uStack_750;
      local_280 = local_748;
      uStack_278 = uStack_740;
      local_270 = local_738;
      uStack_268 = uStack_730;
      local_260 = local_728;
      uStack_258 = uStack_720;
      local_250 = local_718;
      uStack_248 = uStack_710;
      local_230 = CONCAT44(uStack_6f4,local_6f8);
      uStack_228 = CONCAT44(uStack_6ec,uStack_6f0);
      local_240 = local_708;
      uStack_238 = uStack_700;
      local_220 = CONCAT44(uStack_6e4,local_6e8);
      uStack_218 = CONCAT44(uStack_6dc,uStack_6e0);
      goto LAB_144d319a0;
    }
    local_280 = CONCAT44(uStack_514,local_518);
    uStack_278 = CONCAT44(uStack_50c,uStack_510);
    local_260 = CONCAT44(uStack_554,local_558);
    uStack_258 = CONCAT44(uStack_54c,uStack_550);
    uStack_410 = local_678;
    uStack_408 = uStack_670;
    local_400 = local_668;
    uStack_3f8 = uStack_660;
    local_220 = CONCAT44(uStack_534,local_538);
    uStack_218 = CONCAT44(uStack_52c,uStack_530);
    local_3f0 = local_658;
    uStack_3e8 = uStack_650;
    local_3c0 = local_648;
    uStack_3b8 = uStack_640;
    local_3b0 = local_638;
    uStack_3a8 = uStack_630;
    local_290 = CONCAT44(uStack_524,local_528);
    uStack_288 = CONCAT44(uStack_51c,uStack_520);
    local_270 = CONCAT44(uStack_504,local_508);
    uStack_268 = CONCAT44(uStack_4fc,uStack_500);
    local_230 = CONCAT44(uStack_544,local_548);
    uStack_228 = CONCAT44(uStack_53c,uStack_540);
  }
  cVar9 = '\0';
  local_678 = uStack_410;
  uStack_670 = uStack_408;
  local_668 = local_400;
  uStack_660 = uStack_3f8;
  local_658 = local_3f0;
  uStack_650 = uStack_3e8;
  local_648 = local_3c0;
  uStack_640 = uStack_3b8;
  local_638 = local_3b0;
  uStack_630 = uStack_3a8;
  local_628 = uStack_420;
  uStack_620 = uStack_418;
  local_250 = local_488;
  uStack_248 = uStack_480;
  local_240 = local_4f8;
  uStack_238 = uStack_4f0;
LAB_144d319a0:
  local_7b8 = local_5b8;
  uStack_7b0 = uStack_5b0;
  local_7a8 = local_5a8;
  uStack_7a0 = uStack_5a0;
  local_798 = local_598;
  uStack_790 = uStack_590;
  local_788 = local_588;
  uStack_780 = uStack_580;
  local_778 = local_578;
  uStack_770 = uStack_570;
  local_768._0_4_ = (undefined4)local_568;
  local_768._4_4_ = local_568._4_4_;
  uStack_760._0_4_ = (undefined4)uStack_560;
  uStack_760._4_4_ = uStack_560._4_4_;
  local_6d8 = local_618;
  uStack_6d0 = uStack_610;
  local_6c8 = local_608;
  uStack_6c0 = uStack_600;
  local_6b8 = local_5f8;
  uStack_6b0 = uStack_5f0;
  local_6a8 = local_5e8;
  uStack_6a0 = uStack_5e0;
  local_698 = local_5d8;
  uStack_690 = uStack_5d0;
  local_688 = local_5c8;
  uStack_680 = uStack_5c0;
  local_20f = cVar9;
  iVar11 = FUN_144d320f0(&local_7b8,&local_6d8);
  if (iVar11 == -1) {
    bVar6 = false;
    local_31f = 0;
    local_360 = local_4c8;
    uStack_358 = uStack_4c0;
    local_3a0 = (undefined4)local_5b8;
    uStack_39c = local_5b8._4_4_;
    uStack_398 = (undefined4)uStack_5b0;
    uStack_394 = uStack_5b0._4_4_;
    local_350 = local_4b8;
    uStack_348 = uStack_4b0;
    local_390 = (undefined4)local_5a8;
    uStack_38c = local_5a8._4_4_;
    uStack_388 = (undefined4)uStack_5a0;
    uStack_384 = uStack_5a0._4_4_;
    local_380 = (undefined4)local_598;
    uStack_37c = local_598._4_4_;
    uStack_378 = (undefined4)uStack_590;
    uStack_374 = uStack_590._4_4_;
    local_370 = (undefined4)local_588;
    uStack_36c = local_588._4_4_;
    uStack_368 = (undefined4)uStack_580;
    uStack_364 = uStack_580._4_4_;
    local_340 = local_578;
    uStack_338 = uStack_570;
    local_330 = local_568;
    uStack_328 = uStack_560;
    local_6d8 = local_5b8;
    uStack_6d0 = uStack_5b0;
    local_6c8 = local_5a8;
    uStack_6c0 = uStack_5a0;
    local_6b8 = local_598;
    uStack_6b0 = uStack_590;
    local_6a8 = local_588;
    uStack_6a0 = uStack_580;
    local_698 = local_578;
    uStack_690 = uStack_570;
    local_688 = local_568;
    uStack_680 = uStack_560;
    FUN_144cb9950(&local_6d8,&local_7b8);
    local_758 = local_7b8;
    uStack_750 = uStack_7b0;
    local_748 = local_7a8;
    uStack_740 = uStack_7a0;
    local_738 = local_798;
    uStack_730 = uStack_790;
    local_728 = local_788;
    uStack_720 = uStack_780;
    local_6f8 = (undefined4)local_778;
    uStack_6f4 = local_778._4_4_;
    uStack_6f0 = (undefined4)uStack_770;
    uStack_6ec = uStack_770._4_4_;
    local_6e8 = (undefined4)local_768;
    uStack_6e4 = local_768._4_4_;
    uStack_6e0 = (undefined4)uStack_760;
    uStack_6dc = uStack_760._4_4_;
    FUN_144cb95e0(&local_7b8,&local_450,&local_718);
    cVar16 = '\x01';
    local_310 = local_758;
    uStack_308 = uStack_750;
    local_300 = local_748;
    uStack_2f8 = uStack_740;
    local_2f0 = local_738;
    uStack_2e8 = uStack_730;
    local_2e0 = local_728;
    uStack_2d8 = uStack_720;
    local_2d0 = local_718;
    uStack_2c8 = uStack_710;
    local_2b0 = CONCAT44(uStack_6f4,local_6f8);
    uStack_2a8 = CONCAT44(uStack_6ec,uStack_6f0);
    local_2c0 = local_708;
    uStack_2b8 = uStack_700;
    local_2a0 = CONCAT44(uStack_6e4,local_6e8);
    uStack_298 = CONCAT44(uStack_6dc,uStack_6e0);
    uVar19 = (undefined4)local_5b8;
    uVar20 = local_5b8._4_4_;
    uVar21 = (undefined4)uStack_5b0;
    uVar22 = uStack_5b0._4_4_;
    uVar23 = (undefined4)local_5a8;
    uVar24 = local_5a8._4_4_;
    uVar25 = (undefined4)uStack_5a0;
    uVar26 = uStack_5a0._4_4_;
    uVar27 = (undefined4)local_598;
    uVar28 = local_598._4_4_;
    uVar29 = (undefined4)uStack_590;
    uVar30 = uStack_590._4_4_;
    uVar31 = (undefined4)local_588;
    uVar32 = local_588._4_4_;
    uVar33 = (undefined4)uStack_580;
    uVar34 = uStack_580._4_4_;
  }
  else if (iVar11 == 0) {
    bVar6 = false;
    local_31f = 0;
    cVar16 = '\0';
    local_360 = local_4c8;
    uStack_358 = uStack_4c0;
    local_3a0 = (undefined4)local_5b8;
    uStack_39c = local_5b8._4_4_;
    uStack_398 = (undefined4)uStack_5b0;
    uStack_394 = uStack_5b0._4_4_;
    local_350 = local_4b8;
    uStack_348 = uStack_4b0;
    local_390 = (undefined4)local_5a8;
    uStack_38c = local_5a8._4_4_;
    uStack_388 = (undefined4)uStack_5a0;
    uStack_384 = uStack_5a0._4_4_;
    local_310 = local_618;
    uStack_308 = uStack_610;
    local_380 = (undefined4)local_598;
    uStack_37c = local_598._4_4_;
    uStack_378 = (undefined4)uStack_590;
    uStack_374 = uStack_590._4_4_;
    local_300 = local_608;
    uStack_2f8 = uStack_600;
    local_370 = (undefined4)local_588;
    uStack_36c = local_588._4_4_;
    uStack_368 = (undefined4)uStack_580;
    uStack_364 = uStack_580._4_4_;
    local_2f0 = local_5f8;
    uStack_2e8 = uStack_5f0;
    local_340 = local_578;
    uStack_338 = uStack_570;
    local_2e0 = local_5e8;
    uStack_2d8 = uStack_5e0;
    local_330 = local_568;
    uStack_328 = uStack_560;
    local_2d0 = local_4e8;
    uStack_2c8 = uStack_4e0;
    local_2c0 = local_4d8;
    uStack_2b8 = uStack_4d0;
    local_2b0 = local_5d8;
    uStack_2a8 = uStack_5d0;
    local_2a0 = local_5c8;
    uStack_298 = uStack_5c0;
    uVar19 = (undefined4)local_5b8;
    uVar20 = local_5b8._4_4_;
    uVar21 = (undefined4)uStack_5b0;
    uVar22 = uStack_5b0._4_4_;
    uVar23 = (undefined4)local_5a8;
    uVar24 = local_5a8._4_4_;
    uVar25 = (undefined4)uStack_5a0;
    uVar26 = uStack_5a0._4_4_;
    uVar27 = (undefined4)local_598;
    uVar28 = local_598._4_4_;
    uVar29 = (undefined4)uStack_590;
    uVar30 = uStack_590._4_4_;
    uVar31 = (undefined4)local_588;
    uVar32 = local_588._4_4_;
    uVar33 = (undefined4)uStack_580;
    uVar34 = uStack_580._4_4_;
  }
  else {
    local_6d8 = local_618;
    uStack_6d0 = uStack_610;
    local_6c8 = local_608;
    uStack_6c0 = uStack_600;
    local_6b8 = local_5f8;
    uStack_6b0 = uStack_5f0;
    local_6a8 = local_5e8;
    uStack_6a0 = uStack_5e0;
    local_698 = local_5d8;
    uStack_690 = uStack_5d0;
    local_688 = local_5c8;
    uStack_680 = uStack_5c0;
    FUN_144cb9950(&local_6d8,&local_7b8);
    local_758 = local_7b8;
    uStack_750 = uStack_7b0;
    local_748 = local_7a8;
    uStack_740 = uStack_7a0;
    local_738 = local_798;
    uStack_730 = uStack_790;
    local_728 = local_788;
    uStack_720 = uStack_780;
    local_6f8 = (undefined4)local_778;
    uStack_6f4 = local_778._4_4_;
    uStack_6f0 = (undefined4)uStack_770;
    uStack_6ec = uStack_770._4_4_;
    local_6e8 = (undefined4)local_768;
    uStack_6e4 = local_768._4_4_;
    uStack_6e0 = (undefined4)uStack_760;
    uStack_6dc = uStack_760._4_4_;
    FUN_144cb95e0(&local_7b8,&local_478,&local_718);
    bVar6 = true;
    cVar16 = '\0';
    local_31f = 1;
    local_310 = local_618;
    uStack_308 = uStack_610;
    local_360 = local_718;
    uStack_358 = uStack_710;
    local_300 = local_608;
    uStack_2f8 = uStack_600;
    local_350 = local_708;
    uStack_348 = uStack_700;
    local_2f0 = local_5f8;
    uStack_2e8 = uStack_5f0;
    local_3a0 = (undefined4)local_758;
    uStack_39c = local_758._4_4_;
    uStack_398 = (undefined4)uStack_750;
    uStack_394 = uStack_750._4_4_;
    local_2e0 = local_5e8;
    uStack_2d8 = uStack_5e0;
    local_390 = (undefined4)local_748;
    uStack_38c = local_748._4_4_;
    uStack_388 = (undefined4)uStack_740;
    uStack_384 = uStack_740._4_4_;
    local_2d0 = local_4e8;
    uStack_2c8 = uStack_4e0;
    local_380 = (undefined4)local_738;
    uStack_37c = local_738._4_4_;
    uStack_378 = (undefined4)uStack_730;
    uStack_374 = uStack_730._4_4_;
    local_2c0 = local_4d8;
    uStack_2b8 = uStack_4d0;
    local_370 = (undefined4)local_728;
    uStack_36c = local_728._4_4_;
    uStack_368 = (undefined4)uStack_720;
    uStack_364 = uStack_720._4_4_;
    local_2b0 = local_5d8;
    uStack_2a8 = uStack_5d0;
    local_340 = CONCAT44(uStack_6f4,local_6f8);
    uStack_338 = CONCAT44(uStack_6ec,uStack_6f0);
    local_2a0 = local_5c8;
    uStack_298 = uStack_5c0;
    local_330 = CONCAT44(uStack_6e4,local_6e8);
    uStack_328 = CONCAT44(uStack_6dc,uStack_6e0);
    local_578._0_4_ = local_6f8;
    local_578._4_4_ = uStack_6f4;
    uStack_570._0_4_ = uStack_6f0;
    uStack_570._4_4_ = uStack_6ec;
    local_568._0_4_ = local_6e8;
    local_568._4_4_ = uStack_6e4;
    uStack_560._0_4_ = uStack_6e0;
    uStack_560._4_4_ = uStack_6dc;
    uVar19 = (undefined4)local_758;
    uVar20 = local_758._4_4_;
    uVar21 = (undefined4)uStack_750;
    uVar22 = uStack_750._4_4_;
    uVar23 = (undefined4)local_748;
    uVar24 = local_748._4_4_;
    uVar25 = (undefined4)uStack_740;
    uVar26 = uStack_740._4_4_;
    uVar27 = (undefined4)local_738;
    uVar28 = local_738._4_4_;
    uVar29 = (undefined4)uStack_730;
    uVar30 = uStack_730._4_4_;
    uVar31 = (undefined4)local_728;
    uVar32 = local_728._4_4_;
    uVar33 = (undefined4)uStack_720;
    uVar34 = uStack_720._4_4_;
  }
  local_698 = CONCAT44(local_578._4_4_,(undefined4)local_578);
  uStack_690 = CONCAT44(uStack_570._4_4_,(undefined4)uStack_570);
  local_688 = CONCAT44(local_568._4_4_,(undefined4)local_568);
  uStack_680 = CONCAT44(uStack_560._4_4_,(undefined4)uStack_560);
  local_7a8 = local_678;
  uStack_7a0 = uStack_670;
  local_6a8 = CONCAT44(uVar32,uVar31);
  uStack_6a0 = CONCAT44(uVar34,uVar33);
  local_788 = local_658;
  uStack_780 = uStack_650;
  local_798 = local_668;
  uStack_790 = uStack_660;
  local_778 = local_648;
  uStack_770 = uStack_640;
  local_6d8 = CONCAT44(uVar20,uVar19);
  uStack_6d0 = CONCAT44(uVar22,uVar21);
  local_6c8 = CONCAT44(uVar24,uVar23);
  uStack_6c0 = CONCAT44(uVar26,uVar25);
  local_6b8 = CONCAT44(uVar28,uVar27);
  uStack_6b0 = CONCAT44(uVar30,uVar29);
  local_7b8 = local_628;
  uStack_7b0 = uStack_620;
  local_768 = local_638;
  uStack_760 = uStack_630;
  local_210 = cVar16;
  cVar10 = FUN_144d32000(&local_7b8,&local_6d8);
  if (cVar10 != '\0') {
    if ((((bVar5) || (bVar6)) || (cVar16 != '\0')) || (cVar9 != '\0')) {
      iVar17 = (int)param_4[1] + 1;
      if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar17) {
        FUN_144d32230(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar17);
      }
      puVar12 = (undefined8 *)((longlong)(int)param_4[1] * 0x220 + *param_4);
      if (puVar12 != (undefined8 *)0x0) {
        lVar15 = 4;
        piVar8 = local_428;
        do {
          piVar14 = piVar8;
          puVar13 = puVar12;
          uVar1 = *(undefined8 *)(piVar14 + 2);
          uVar2 = *(undefined8 *)(piVar14 + 4);
          uVar3 = *(undefined8 *)(piVar14 + 6);
          *puVar13 = *(undefined8 *)piVar14;
          puVar13[1] = uVar1;
          uVar1 = *(undefined8 *)(piVar14 + 8);
          uVar4 = *(undefined8 *)(piVar14 + 10);
          puVar13[2] = uVar2;
          puVar13[3] = uVar3;
          uVar2 = *(undefined8 *)(piVar14 + 0xc);
          uVar3 = *(undefined8 *)(piVar14 + 0xe);
          puVar13[4] = uVar1;
          puVar13[5] = uVar4;
          uVar1 = *(undefined8 *)(piVar14 + 0x10);
          uVar4 = *(undefined8 *)(piVar14 + 0x12);
          puVar13[6] = uVar2;
          puVar13[7] = uVar3;
          uVar2 = *(undefined8 *)(piVar14 + 0x14);
          uVar3 = *(undefined8 *)(piVar14 + 0x16);
          puVar13[8] = uVar1;
          puVar13[9] = uVar4;
          uVar1 = *(undefined8 *)(piVar14 + 0x18);
          uVar4 = *(undefined8 *)(piVar14 + 0x1a);
          puVar13[10] = uVar2;
          puVar13[0xb] = uVar3;
          uVar2 = *(undefined8 *)(piVar14 + 0x1c);
          uVar3 = *(undefined8 *)(piVar14 + 0x1e);
          puVar13[0xc] = uVar1;
          puVar13[0xd] = uVar4;
          puVar13[0xe] = uVar2;
          puVar13[0xf] = uVar3;
          lVar15 = lVar15 + -1;
          puVar12 = puVar13 + 0x10;
          piVar8 = piVar14 + 0x20;
        } while (lVar15 != 0);
        uVar1 = *(undefined8 *)(piVar14 + 0x22);
        uVar2 = *(undefined8 *)(piVar14 + 0x24);
        uVar3 = *(undefined8 *)(piVar14 + 0x26);
        puVar13[0x10] = *(undefined8 *)(piVar14 + 0x20);
        puVar13[0x11] = uVar1;
        puVar13[0x12] = uVar2;
        puVar13[0x13] = uVar3;
      }
      *(int *)(param_4 + 1) = iVar17;
    }
    else {
      iVar11 = (int)param_5[1] + 1;
      if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar11) {
        FUN_144d32330(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      puVar12 = (undefined8 *)(*param_5 + (longlong)(int)param_5[1] * 8);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = CONCAT44(param_3,iVar17);
      }
      *(int *)(param_5 + 1) = iVar11;
    }
  }
  return;
}



// FUNCTION 144d32000 FUN_144d32000 body=232 status=ok
// SIG undefined FUN_144d32000(void)

ulonglong FUN_144d32000(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_68 = param_2[8];
  uStack_60 = param_2[9];
  local_58 = param_2[10];
  uStack_50 = param_2[0xb];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = param_1[8];
  uStack_20 = param_1[9];
  local_18 = param_1[10];
  uStack_10 = param_1[0xb];
  uVar1 = FUN_144cab880(&local_48,&local_88);
  if (uVar1 != 0) {
    return (ulonglong)(uVar1 >> 0x1f);
  }
  local_48 = param_2[4];
  uStack_40 = param_2[5];
  local_38 = param_2[6];
  uStack_30 = param_2[7];
  local_28 = param_2[8];
  uStack_20 = param_2[9];
  local_18 = param_2[10];
  uStack_10 = param_2[0xb];
  local_88 = param_1[4];
  uStack_80 = param_1[5];
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_68 = param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  uVar2 = FUN_144cab9d0(&local_88,&local_48);
  return uVar2;
}



// FUNCTION 144d320f0 FUN_144d320f0 body=309 status=ok
// SIG undefined FUN_144d320f0(void)

void FUN_144d320f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1[0xb] == param_2[0xb] &&
      (param_1[10] == param_2[10] && (param_1[9] == param_2[9] && param_1[8] == param_2[8]))) {
    FUN_144cabac0(param_1,param_2);
    return;
  }
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_68 = param_2[8];
  uStack_60 = param_2[9];
  local_58 = param_2[10];
  uStack_50 = param_2[0xb];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = param_1[8];
  uStack_20 = param_1[9];
  local_18 = param_1[10];
  uStack_10 = param_1[0xb];
  iVar1 = FUN_144cab880(&local_48,&local_88);
  if (iVar1 == 0) {
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    local_38 = param_2[6];
    uStack_30 = param_2[7];
    local_28 = param_2[8];
    uStack_20 = param_2[9];
    local_18 = param_2[10];
    uStack_10 = param_2[0xb];
    local_88 = param_1[4];
    uStack_80 = param_1[5];
    local_78 = param_1[6];
    uStack_70 = param_1[7];
    local_68 = param_1[8];
    uStack_60 = param_1[9];
    local_58 = param_1[10];
    uStack_50 = param_1[0xb];
    FUN_144cab880(&local_88,&local_48);
  }
  return;
}



// FUNCTION 144d32230 FUN_144d32230 body=256 status=ok
// SIG undefined FUN_144d32230(void)

ulonglong FUN_144d32230(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0x220;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x220);
  uVar3 = uVar4 * 0x220 + 0x220;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x220;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x220;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xf0f0f0f0f0f0f0f1) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x220;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 144d32330 FUN_144d32330 body=259 status=ok
// SIG undefined FUN_144d32330(void)

void FUN_144d32330(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144d32440 FUN_144d32440 body=142 status=ok
// SIG undefined FUN_144d32440(void)

void FUN_144d32440(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d324d0 FUN_144d324d0 body=362 status=ok
// SIG undefined FUN_144d324d0(void)

undefined8 * FUN_144d324d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  
  iVar10 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = *(int *)(param_2 + 1);
  puVar7 = (undefined4 *)*param_2;
  if (0 < iVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar1 << 2);
    *param_1 = puVar3;
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if (3 < iVar1) {
      uVar5 = (iVar1 - 4U >> 2) + 1;
      uVar9 = (ulonglong)uVar5;
      iVar10 = uVar5 * 4;
      do {
        if (puVar3 != (undefined4 *)0x0) {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar3 = uVar2;
        }
        if (puVar3 + 1 != (undefined4 *)0x0) {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar3[1] = uVar2;
        }
        if (puVar3 + 2 != (undefined4 *)0x0) {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar3[2] = uVar2;
        }
        if (puVar3 + 3 != (undefined4 *)0x0) {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar3[3] = uVar2;
        }
        puVar3 = puVar3 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if (iVar1 <= iVar10) goto LAB_144d325bb;
    }
    uVar9 = (ulonglong)(uint)(iVar1 - iVar10);
    do {
      if (puVar3 != (undefined4 *)0x0) {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = uVar2;
      }
      puVar3 = puVar3 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
LAB_144d325bb:
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar5 = *(uint *)(param_2 + 3);
  puVar8 = (undefined8 *)param_2[2];
  if (0 < (int)uVar5) {
    uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar5 << 3);
    param_1[2] = uVar4;
    uVar9 = (ulonglong)uVar5;
    *(uint *)(param_1 + 3) = uVar5;
    *(uint *)((longlong)param_1 + 0x1c) = uVar5;
    puVar6 = (undefined8 *)param_1[2];
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar6 = uVar4;
      }
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 != 0);
  }
  return param_1;
}



// FUNCTION 144d32640 FUN_144d32640 body=416 status=ok
// SIG undefined FUN_144d32640(void)

void FUN_144d32640(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) << 4);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) * 0x30);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  puVar3 = (uint *)param_1[10];
  if (puVar3 + (longlong)*(int *)(param_1 + 0xb) * 0x24 != puVar3) {
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0xb) * 0x24 + 0x1b;
    do {
      puVar2 = puVar4 + -0x24;
      puVar4[-0x25] = 0;
      if ((-1 < (int)*puVar2) && (*(longlong *)(puVar4 + -0x27) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x27),
                   (ulonglong)(*puVar2 & 0x7fffffff) << 2);
      }
      puVar4[-0x27] = 0;
      puVar4[-0x26] = 0;
      *puVar2 = 0x80000000;
      puVar4[-0x2d] = 0;
      if ((-1 < (int)puVar4[-0x2c]) && (*(longlong *)(puVar4 + -0x2f) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x2f),
                   (ulonglong)(puVar4[-0x2c] & 0x7fffffff) << 2);
      }
      puVar1 = puVar4 + -0x3f;
      puVar4[-0x2f] = 0;
      puVar4[-0x2e] = 0;
      puVar4[-0x2c] = 0x80000000;
      puVar4 = puVar2;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) * 0x90);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  FUN_144d32440(param_1 + 6);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144d327e0 FUN_144d327e0 body=87 status=ok
// SIG undefined FUN_144d327e0(void)

undefined8 FUN_144d327e0(undefined8 param_1,ulonglong param_2)

{
  FUN_144d32640();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 144d32840 FUN_144d32840 body=178 status=ok
// SIG undefined FUN_144d32840(void)

void FUN_144d32840(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d32900 FUN_144d32900 body=101 status=ok
// SIG undefined FUN_144d32900(void)

undefined8 * FUN_144d32900(undefined8 *param_1,ulonglong param_2)

{
  FUN_144d32840(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144d32970 FUN_144d32970 body=59 status=ok
// SIG undefined FUN_144d32970(void)

undefined8 * FUN_144d32970(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiTraversalAnalysis::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  return param_1;
}



// FUNCTION 144d329b0 FUN_144d329b0 body=204 status=ok
// SIG undefined FUN_144d329b0(void)

void FUN_144d329b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiTraversalAnalysis::vftable;
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  lVar2 = param_1[4];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 5) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144d32a80 FUN_144d32a80 body=908 status=ok
// SIG undefined FUN_144d32a80(void)

void FUN_144d32a80(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_e8;
  undefined4 *puStack_e0;
  int local_d8;
  uint local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  longlong *local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined1 local_70 [48];
  
  puVar12 = (undefined8 *)0x0;
  local_d4 = 0x80000000;
  local_d8 = 0;
  local_e8 = 0;
  puStack_e0 = (undefined4 *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0x80000000;
  local_c0 = FUN_144b3d480();
  local_b8 = 0;
  local_b0 = 0;
  FUN_144d32e10(param_1,&local_e8);
  FUN_1450653f0(local_70);
  FUN_144d33570(param_1,&local_e8,local_70);
  local_res8 = 0x38;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"hkaiTraversalAnalysisOutput");
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0xffffffff;
    *puVar8 = hkaiTraversalAnalysisOutput::vftable;
    puVar8[2] = 1;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x80000000;
    uVar9 = FUN_144b3d480();
    puVar8[5] = uVar9;
    *(undefined4 *)(puVar8 + 6) = 0;
    puVar12 = puVar8;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = puVar12;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  puVar8 = *(undefined8 **)(param_1 + 0x20);
  puVar12 = puVar8 + *(int *)(param_1 + 0x28);
  for (; puVar8 != puVar12; puVar8 = puVar8 + 1) {
    local_a8 = local_70;
    local_a0 = &local_e8;
    local_88 = 0xffffffffffffffff;
    local_98[0] = *(undefined8 *)(param_1 + 0x38);
    (**(code **)(*(longlong *)*puVar8 + 0x18))((longlong *)*puVar8,local_70,&local_a8,local_98);
  }
  lVar2 = *(longlong *)(local_e8 + 0x140);
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
  lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + 0x20) * 0x10 + lVar17;
  for (; lVar17 != lVar16; lVar17 = lVar17 + 0x10) {
    lVar3 = *(longlong *)(lVar17 + 8);
    if (lVar3 != 0) {
      FUN_144b3d910(lVar3);
    }
    plVar10 = (longlong *)FUN_144d3ea80(lVar3);
    lVar13 = *plVar10;
    lVar15 = (longlong)(int)plVar10[1] * 0x90 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x90) {
      uVar6 = (ulonglong)local_res8 >> 0x20;
      local_res8 = CONCAT44((int)uVar6,*(undefined4 *)(lVar13 + 0x30));
      piVar11 = (int *)FUN_144ca4a20(lVar2,local_res18,&local_res8);
      lVar4 = *(longlong *)((longlong)*piVar11 * 0x120 + *(longlong *)(lVar2 + 0x38));
      local_res10[0] = *(undefined4 *)(lVar13 + 0x34);
      piVar11 = (int *)FUN_144ca4a20(lVar2,local_res20,local_res10);
      lVar4 = *(longlong *)(lVar4 + 0x20);
      lVar5 = *(longlong *)((longlong)*piVar11 * 0x120 + *(longlong *)(lVar2 + 0x38));
      if ((*(int *)(lVar4 + 0x108) != 0) &&
         ((*(byte *)((longlong)*(int *)(lVar13 + 0x38) + *(longlong *)(lVar4 + 0x100)) & 4) != 0)) {
        *(undefined4 *)(lVar13 + 0x38) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x168) + (longlong)*(int *)(lVar13 + 0x38) * 4);
      }
      lVar4 = *(longlong *)(lVar5 + 0x20);
      if ((*(int *)(lVar4 + 0x108) != 0) &&
         ((*(byte *)((longlong)*(int *)(lVar13 + 0x3c) + *(longlong *)(lVar4 + 0x100)) & 4) != 0)) {
        *(undefined4 *)(lVar13 + 0x3c) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x168) + (longlong)*(int *)(lVar13 + 0x3c) * 4);
      }
    }
    if (lVar3 != 0) {
      FUN_144b3f230(lVar3);
    }
  }
  FUN_145065410(local_70);
  if (local_b0 != 0) {
    FUN_144b3f230();
  }
  FUN_144d33b20(&local_d0);
  puVar7 = puStack_e0;
  if (puStack_e0 + (longlong)local_d8 * 6 != puStack_e0) {
    puVar14 = puStack_e0 + (longlong)local_d8 * 6 + 5;
    do {
      puVar14[-7] = 0;
      if ((-1 < (int)puVar14[-6]) && (*(longlong *)(puVar14 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar14 + -9),
                   (ulonglong)(puVar14[-6] & 0x7fffffff) << 5);
      }
      puVar1 = puVar14 + -0xb;
      *(undefined8 *)(puVar14 + -9) = 0;
      puVar14[-6] = 0x80000000;
      puVar14 = puVar14 + -6;
    } while (puVar1 != puVar7);
  }
  local_d8 = 0;
  if ((-1 < (int)local_d4) && (puStack_e0 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puStack_e0,(ulonglong)(local_d4 & 0x7fffffff) * 0x18);
  }
  puStack_e0 = (undefined4 *)0x0;
  local_d4 = 0x80000000;
  if (local_e8 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144d32e10 FUN_144d32e10 body=1878 status=ok
// SIG undefined FUN_144d32e10(void)

void FUN_144d32e10(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  char cVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 local_res10;
  uint local_res18 [2];
  undefined4 local_res20 [2];
  longlong *local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  longlong *local_308;
  undefined8 uStack_300;
  int local_2f8 [4];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [160];
  undefined1 local_228 [288];
  undefined1 local_108 [176];
  undefined1 local_58 [24];
  
  FUN_144b4a100(local_2c8);
  local_res10 = 0x520;
  lVar10 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar10,"hkaiWorld");
  }
  lVar11 = 0;
  if (lVar10 != 0) {
    lVar11 = FUN_144b4a2d0(lVar10,local_2c8);
  }
  lVar10 = *param_2;
  *param_2 = lVar11;
  if (lVar10 != 0) {
    FUN_144b3f230();
  }
  plVar16 = (longlong *)(param_1 + 0x30);
  puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x18);
  puVar15 = puVar18 + (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x20) * 0xc;
  if (puVar18 != puVar15) {
    puVar23 = puVar18 + 6;
    local_308 = plVar16;
    do {
      local_res10 = 0x100;
      lVar10 = (*DAT_14c787670)(0,&local_res10,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar10,"hkaiNavMeshInstance");
      }
      lVar11 = 0;
      if (lVar10 != 0) {
        lVar11 = FUN_144c3e1d0(lVar10);
      }
      local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(puVar23 + -5));
      FUN_144c3e6c0(lVar11,*puVar18,&local_res10);
      uVar5 = puVar23[-3];
      *(undefined8 *)(lVar11 + 0x60) = puVar23[-4];
      *(undefined8 *)(lVar11 + 0x68) = uVar5;
      uVar5 = puVar23[-1];
      *(undefined8 *)(lVar11 + 0x70) = puVar23[-2];
      *(undefined8 *)(lVar11 + 0x78) = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar23 + 4);
      uVar3 = *(undefined4 *)(puVar23 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar23 + 0xc);
      *(undefined4 *)(lVar11 + 0x80) = *(undefined4 *)puVar23;
      *(undefined4 *)(lVar11 + 0x84) = uVar2;
      *(undefined4 *)(lVar11 + 0x88) = uVar3;
      *(undefined4 *)(lVar11 + 0x8c) = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar23 + 0x14);
      uVar3 = *(undefined4 *)(puVar23 + 3);
      uVar4 = *(undefined4 *)((longlong)puVar23 + 0x1c);
      *(undefined4 *)(lVar11 + 0x90) = *(undefined4 *)(puVar23 + 2);
      *(undefined4 *)(lVar11 + 0x94) = uVar2;
      *(undefined4 *)(lVar11 + 0x98) = uVar3;
      *(undefined4 *)(lVar11 + 0x9c) = uVar4;
      FUN_144ca8090(*(longlong *)(lVar11 + 0x20) + 400,puVar23 + -4,lVar11 + 0xc0);
      local_328 = *(longlong **)(*plVar16 + 0x28);
      uStack_320 = local_328 + *(int *)(*plVar16 + 0x30);
      local_308 = local_328;
      uStack_300 = uStack_320;
      FUN_144c2cb60(*param_2,local_res18,lVar11,&local_308);
      FUN_144b3f230();
      puVar18 = puVar18 + 0xc;
      puVar23 = puVar23 + 0xc;
    } while (puVar18 != puVar15);
  }
  plVar14 = (longlong *)(param_1 + 0x30);
  local_308 = plVar14;
  FUN_144bde5d0(&local_res10,0x6a79a7be);
  FUN_144fae780(*param_2,0);
  FUN_144bde650(&local_res10);
  local_328 = (longlong *)0x0;
  uStack_320 = (longlong *)0x8000000000000000;
  local_318 = 0;
  lVar11 = FUN_145061e60(*(undefined8 *)(*plVar16 + 0x38),&local_328,1);
  lVar10 = param_2[7];
  if ((lVar11 != lVar10) && (param_2[7] = lVar11, local_308 = plVar14, lVar10 != 0)) {
    FUN_144b3f230();
    local_308 = (longlong *)(param_1 + 0x30);
  }
  FUN_144bf90d0(&local_328);
  lVar10 = *(longlong *)(*plVar16 + 0x18);
  lVar11 = (longlong)*(int *)(*plVar16 + 0x20) * 0x60 + lVar10;
  if (lVar10 != lVar11) {
    do {
      FUN_144d33eb0(param_2 + 3,&local_res10,lVar10 + 8);
      iVar17 = (int)local_res10;
      if (iVar17 == (int)param_2[4]) {
        iVar22 = (int)param_2[4] + 1;
        if ((int)(*(uint *)((longlong)param_2 + 0x24) & 0x7fffffff) < iVar22) {
          FUN_144d33fb0(param_2 + 3,&PTR_vftable_14c6e47a0,(longlong)iVar22);
        }
        puVar12 = (undefined4 *)(param_2[3] + (longlong)(int)param_2[4] * 8);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = *(undefined4 *)(lVar10 + 8);
          puVar12[1] = 0;
        }
        *(int *)(param_2 + 4) = iVar22;
      }
      puVar12 = (undefined4 *)(lVar10 + 0x50);
      lVar10 = lVar10 + 0x60;
      *(undefined4 *)(param_2[3] + 4 + (longlong)iVar17 * 8) = *puVar12;
    } while (lVar10 != lVar11);
    local_308 = (longlong *)(param_1 + 0x30);
  }
  local_res18[0] = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x20);
  plVar14 = (longlong *)(longlong)(int)local_res18[0];
  cVar20 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x24) -
           *(float *)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x18) + 0xb0) <= 0.0;
  uVar21 = 0;
  local_res10 = CONCAT71(local_res10._1_7_,cVar20);
  plVar16 = local_308;
  local_328 = plVar14;
  uVar24 = uVar21;
  if (0 < (int)local_res18[0]) {
    do {
      if (*(int *)(*(longlong *)(*plVar16 + 0x18) + 0x50 + uVar24) == 0) {
        iVar17 = (int)param_2[2] + 1;
        if ((int)(*(uint *)((longlong)param_2 + 0x14) & 0x7fffffff) < iVar17) {
          FUN_144d33ca0(param_2 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar17);
        }
        lVar10 = param_2[2];
        *(int *)(param_2 + 2) = iVar17;
        puVar18 = (undefined8 *)(param_2[1] + (longlong)(int)lVar10 * 0x18);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = 0xffffffffffffffff;
          puVar18[1] = 0;
          *(undefined4 *)(puVar18 + 2) = 0;
          *(undefined4 *)((longlong)puVar18 + 0x14) = 0x80000000;
        }
        uVar2 = *(undefined4 *)(*(longlong *)(*plVar16 + 0x18) + 8 + uVar24);
        *(undefined4 *)puVar18 = uVar2;
        *(undefined4 *)((longlong)puVar18 + 4) = uVar2;
      }
      else if (cVar20 == '\0') {
        iVar17 = (int)param_2[2] + 1;
        if ((int)(*(uint *)((longlong)param_2 + 0x14) & 0x7fffffff) < iVar17) {
          FUN_144d33ca0(param_2 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar17);
          plVar14 = (longlong *)(ulonglong)local_res18[0];
        }
        iVar22 = 0;
        lVar10 = param_2[2];
        *(int *)(param_2 + 2) = iVar17;
        puVar18 = (undefined8 *)(param_2[1] + (longlong)(int)lVar10 * 0x18);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = 0xffffffffffffffff;
          puVar18[1] = 0;
          *(undefined4 *)(puVar18 + 2) = 0;
          *(undefined4 *)((longlong)puVar18 + 0x14) = 0x80000000;
        }
        uVar2 = *(undefined4 *)(uVar24 + 8 + *(longlong *)(*plVar16 + 0x18));
        *(undefined4 *)puVar18 = uVar2;
        *(undefined4 *)((longlong)puVar18 + 4) = uVar2;
        if ((*(int *)(*(longlong *)(*plVar16 + 0x18) + 0x50 + uVar24) != 0) && (0 < (int)plVar14)) {
          do {
            if (iVar22 != (int)uVar21) {
              local_res20[0] = *(undefined4 *)(uVar24 + 8 + *(longlong *)(*plVar16 + 0x18));
              FUN_144ca4a20(*(undefined8 *)(*param_2 + 0x140),local_2f8,local_res20);
              FUN_144c3ed40(*(undefined8 *)
                             ((longlong)local_2f8[0] * 0x120 +
                             *(longlong *)(*(longlong *)(*param_2 + 0x140) + 0x38)),&local_2e8);
              iVar17 = *(int *)(puVar18 + 2) + 1;
              if ((int)(*(uint *)((longlong)puVar18 + 0x14) & 0x7fffffff) < iVar17) {
                FUN_144c36720(puVar18 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar17);
              }
              puVar12 = (undefined4 *)((longlong)*(int *)(puVar18 + 2) * 0x20 + puVar18[1]);
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = local_2e8;
                puVar12[1] = uStack_2e4;
                puVar12[2] = uStack_2e0;
                puVar12[3] = uStack_2dc;
                *(undefined8 *)(puVar12 + 4) = local_2d8;
                *(undefined8 *)(puVar12 + 6) = uStack_2d0;
              }
              plVar14 = (longlong *)(ulonglong)local_res18[0];
              *(int *)(puVar18 + 2) = iVar17;
              plVar16 = local_308;
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 < (int)plVar14);
        }
      }
      plVar14 = (longlong *)(ulonglong)local_res18[0];
      uVar21 = (ulonglong)((int)uVar21 + 1);
      local_328 = (longlong *)((longlong)local_328 - 1);
      uVar24 = uVar24 + 0x60;
      cVar20 = (char)local_res10;
    } while (local_328 != (longlong *)0x0);
    local_308 = (longlong *)(param_1 + 0x30);
  }
  plVar8 = local_308;
  local_328 = (longlong *)0x0;
  uStack_320 = (longlong *)0x8000000000000000;
  FUN_144d33710(param_1,&local_328,param_2);
  plVar16 = local_328 + (int)uStack_320;
  lVar10 = (longlong)uStack_320;
  for (plVar14 = local_328; uStack_320 = (longlong *)lVar10, plVar14 != plVar16;
      plVar14 = plVar14 + 1) {
    lVar10 = (longlong)(int)((ulonglong)*plVar14 >> 0x20) * 0x60 + *(longlong *)(*plVar8 + 0x18);
    lVar11 = (longlong)(int)*plVar14 * 0x60 + *(longlong *)(*plVar8 + 0x18);
    if ((*(int *)(lVar10 + 0x50) == 0) || (*(int *)(lVar10 + 0x50) == 1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((*(int *)(lVar11 + 0x50) == 0) || (*(int *)(lVar11 + 0x50) == 1)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((bVar6) || (bVar7)) {
      lVar9 = param_2[2];
      iVar17 = (int)lVar9 + 2;
      if ((int)(*(uint *)((longlong)param_2 + 0x14) & 0x7fffffff) < iVar17) {
        FUN_144d33ca0(param_2 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar17);
      }
      puVar12 = (undefined4 *)(param_2[1] + (longlong)(int)lVar9 * 0x18);
      if (puVar12 != puVar12 + 0xc) {
        puVar13 = puVar12 + 5;
        do {
          if (puVar13 + -5 != (undefined4 *)0x0) {
            puVar13[-5] = 0xffffffff;
            *(undefined8 *)(puVar13 + -3) = 0;
            puVar13[-1] = 0;
            puVar13[-4] = 0xffffffff;
            *puVar13 = 0x80000000;
          }
          puVar1 = puVar13 + 1;
          puVar13 = puVar13 + 6;
        } while (puVar1 != puVar12 + 0xc);
      }
      *(int *)(param_2 + 2) = iVar17;
      uVar2 = *(undefined4 *)(lVar11 + 8);
      *puVar12 = *(undefined4 *)(lVar10 + 8);
      puVar12[1] = uVar2;
      uVar2 = *(undefined4 *)(lVar10 + 8);
      puVar12[6] = *(undefined4 *)(lVar11 + 8);
      puVar12[7] = uVar2;
    }
    lVar10 = (longlong)uStack_320;
    plVar8 = local_308;
  }
  uStack_320._4_4_ = (uint)((ulonglong)lVar10 >> 0x20);
  if ((-1 < lVar10) && (local_328 != (longlong *)0x0)) {
    uVar19 = uStack_320._4_4_ & 0x7fffffff;
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_328,(ulonglong)uVar19 << 3);
    lVar10 = (longlong)uStack_320;
  }
  uStack_320 = (longlong *)lVar10;
  FUN_144b49dd0(local_58);
  FUN_144b4a050(local_108);
  FUN_144b409a0(local_228);
  return;
}



// FUNCTION 144d33570 FUN_144d33570 body=409 status=ok
// SIG undefined FUN_144d33570(void)

void FUN_144d33570(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  *param_3 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = *(longlong *)(*param_2 + 0x140);
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  lVar1 = param_3[2];
  param_3[2] = lVar6;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  lVar6 = param_3[2];
  uVar8 = 0;
  bVar3 = false;
  uVar7 = uVar8;
  if (0 < *(int *)(lVar6 + 0x40)) {
    do {
      lVar1 = *(longlong *)((longlong)(int)uVar7 * 0x120 + *(longlong *)(lVar6 + 0x38));
      if ((lVar1 != 0) && (!bVar3)) {
        bVar3 = true;
        *(undefined4 *)(param_3 + 1) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x68) + 0xb0);
      }
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(lVar6 + 0x40));
  }
  uVar5 = FUN_144b3e3b0(*(undefined8 *)(*param_2 + 0x140));
  local_res8 = 0x28;
  uVar2 = *(undefined8 *)(*param_2 + 0x140);
  lVar6 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar6,"hkaiStreamingCollectionSegmentCaster");
  }
  uVar7 = uVar8;
  if (lVar6 != 0) {
    uVar7 = FUN_145065450(lVar6,uVar2,uVar5);
  }
  lVar6 = param_3[3];
  param_3[3] = uVar7;
  if (lVar6 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x28;
  lVar6 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar6,"hkaiGeometrySegmentCaster");
  }
  if (lVar6 != 0) {
    uVar8 = FUN_1450628c0(lVar6);
  }
  lVar6 = param_3[4];
  param_3[4] = uVar8;
  if (lVar6 != 0) {
    FUN_144b3f230();
  }
  FUN_1450628f0(param_3[4],*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x38),param_2[7]);
  return;
}



// FUNCTION 144d33710 FUN_144d33710 body=1040 status=ok
// SIG undefined FUN_144d33710(void)

void FUN_144d33710(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  bool bVar20;
  ulonglong local_res20;
  longlong local_78;
  int local_70;
  ulonglong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar10 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x20);
  uVar16 = (ulonglong)(int)uVar10;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar6 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar6 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar6 + 0xf0) = lVar5;
  }
  uVar11 = 0;
  uVar7 = *(ulonglong *)(*(longlong *)(lVar5 + 0x3d0) + 0x10);
  bVar20 = *(longlong *)(uVar7 + 8) != 0;
  local_70 = uVar10 + 4;
  local_68 = uVar7;
  if (bVar20) {
    local_68 = uVar11;
  }
  if (bVar20) {
    uVar7 = uVar11;
  }
  local_78 = (longlong)local_70 * 0x20;
  if (uVar7 == 0) {
    lVar6 = (*DAT_14c787670)(1,&local_78,0x40);
  }
  else {
    local_res20 = local_78 + 0x3fU & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(uVar7 + 0x28)) {
      lVar6 = *(longlong *)(uVar7 + 0x38);
      if (local_res20 + lVar6 <= *(ulonglong *)(uVar7 + 0x40)) {
        *(ulonglong *)(uVar7 + 0x38) = local_res20 + lVar6;
        goto LAB_144d3380f;
      }
    }
    lVar6 = FUN_144b454a0(uVar7,&local_res20);
  }
LAB_144d3380f:
  uVar7 = uVar11;
  uVar19 = uVar16;
  uVar17 = uVar11;
  if (0 < (int)uVar10) {
    do {
      local_res20 = CONCAT44(local_res20._4_4_,
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) + 8 + uVar17));
      FUN_144ca4a20(*(undefined8 *)(*param_3 + 0x140),&local_78,&local_res20);
      FUN_144c3ed40(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(*param_3 + 0x140) + 0x38) +
                     (longlong)(int)local_78 * 0x120),&local_58);
      FUN_144fc00a0((longlong)(int)uVar7 * 0x20 + lVar6,&local_58,uVar7);
      uVar19 = uVar19 - 1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar17 = uVar17 + 0x60;
    } while (uVar19 != 0);
    uVar19 = (ulonglong)uVar10;
  }
  puVar13 = (undefined4 *)(uVar16 * 0x20 + lVar6);
  uStack_54 = 0x7fffffff;
  uStack_50 = 0x7fffffff;
  local_48 = 0;
  uStack_40 = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  local_58 = 0xffffffff;
  *puVar13 = 0xffffffff;
  puVar13[1] = 0x7fffffff;
  puVar13[2] = 0x7fffffff;
  puVar13[3] = 0;
  puVar13[8] = 0xffffffff;
  puVar13[9] = 0x7fffffff;
  puVar13[10] = 0x7fffffff;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0xffffffff;
  puVar13[0x11] = 0x7fffffff;
  puVar13[0x12] = 0x7fffffff;
  puVar13[0x13] = 0;
  puVar13[0x14] = 0;
  puVar13[0x15] = 0;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0;
  puVar13[0x18] = 0xffffffff;
  puVar13[0x19] = 0x7fffffff;
  puVar13[0x1a] = 0x7fffffff;
  puVar13[0x1b] = 0;
  puVar13[0x1c] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  FUN_144fc0200(lVar6,uVar19 & 0xffffffff);
  iVar18 = (uint)uVar19 - 1;
  iVar12 = 1;
  uVar15 = (uint)uVar19;
  if (0 < iVar18) {
    do {
      iVar9 = (int)uVar11;
      lVar5 = (longlong)iVar9 * 0x20;
      uVar2 = *(uint *)(lVar5 + 0x10 + lVar6);
      uVar15 = uVar10;
      if (*(uint *)((longlong)iVar12 * 0x20 + lVar6) <= uVar2) {
        do {
          lVar14 = (longlong)iVar12;
          lVar8 = lVar14 * 0x20 + lVar6;
          if (-1 < (*(int *)(lVar5 + 0x14 + lVar6) - *(int *)(lVar8 + 4) |
                    *(int *)(lVar5 + 0x18 + lVar6) - *(int *)(lVar8 + 8) |
                    *(int *)(lVar8 + 0x14) - *(int *)(lVar5 + 4 + lVar6) |
                   *(int *)(lVar8 + 0x18) - *(int *)(lVar5 + 8 + lVar6))) goto LAB_144d3399e;
          iVar12 = iVar12 + 1;
        } while (*(uint *)((lVar14 + 1) * 0x20 + lVar6) <= uVar2);
      }
      uVar11 = (ulonglong)(iVar9 + 1U);
      iVar12 = iVar9 + 2;
    } while ((int)(iVar9 + 1U) < iVar18);
  }
LAB_144d3399e:
  if ((int)uVar11 < (int)(uVar15 - 1)) {
    do {
      uVar10 = (uint)uVar11;
      iVar18 = (int)param_2[1] + 1;
      uVar3 = *(undefined4 *)((longlong)(int)uVar10 * 0x20 + 0xc + lVar6);
      uVar4 = *(undefined4 *)((longlong)iVar12 * 0x20 + 0xc + lVar6);
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar18) {
        FUN_144c36610(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar18);
      }
      puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = CONCAT44(uVar3,uVar4);
      }
      iVar12 = iVar12 + 1;
      *(int *)(param_2 + 1) = iVar18;
      while (iVar18 = (int)uVar11, (int)uVar10 < (int)(uVar15 - 1)) {
        lVar5 = (longlong)iVar18 * 0x20;
        uVar10 = *(uint *)(lVar5 + 0x10 + lVar6);
        if (*(uint *)((longlong)iVar12 * 0x20 + lVar6) <= uVar10) {
          do {
            lVar14 = (longlong)iVar12;
            lVar8 = lVar14 * 0x20 + lVar6;
            if (-1 < (*(int *)(lVar5 + 0x14 + lVar6) - *(int *)(lVar8 + 4) |
                      *(int *)(lVar5 + 0x18 + lVar6) - *(int *)(lVar8 + 8) |
                      *(int *)(lVar8 + 0x14) - *(int *)(lVar5 + 4 + lVar6) |
                     *(int *)(lVar8 + 0x18) - *(int *)(lVar5 + 8 + lVar6))) goto LAB_144d33aae;
            iVar12 = iVar12 + 1;
          } while (*(uint *)((lVar14 + 1) * 0x20 + lVar6) <= uVar10);
        }
        uVar10 = iVar18 + 1;
        uVar11 = (ulonglong)uVar10;
        iVar12 = iVar18 + 2;
      }
LAB_144d33aae:
    } while (iVar18 < (int)(uVar15 - 1));
  }
  if (local_68 == 0) {
    (*DAT_14c787678)(1,lVar6);
  }
  else {
    uVar16 = (longlong)local_70 * 0x20 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_68 + 0x28) < uVar16) ||
       (lVar6 + uVar16 != *(longlong *)(local_68 + 0x38))) {
      FUN_144be8550(local_68,lVar6);
    }
    else {
      *(longlong *)(local_68 + 0x38) = lVar6;
      if (*(longlong *)(local_68 + 0x48) == lVar6) {
        FUN_144be8430();
      }
    }
  }
  return;
}



// FUNCTION 144d33b20 FUN_144d33b20 body=123 status=ok
// SIG undefined FUN_144d33b20(void)

void FUN_144d33b20(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d33ba0 FUN_144d33ba0 body=253 status=ok
// SIG undefined FUN_144d33ba0(void)

undefined8 * FUN_144d33ba0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiTraversalAnalysis::vftable;
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  lVar2 = param_1[4];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 5) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 144d33ca0 FUN_144d33ca0 body=516 status=ok
// SIG undefined FUN_144d33ca0(void)

ulonglong FUN_144d33ca0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res18;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar7 * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x18);
  piVar5 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = piVar5 + 5;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar3 + 0x14);
    uVar8 = (ulonglong)uVar1;
    piVar9 = piVar4;
    do {
      if (piVar6 + -5 != (int *)0x0) {
        piVar6[-5] = *piVar5;
        piVar6[-4] = piVar9[-4];
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        FUN_144c90920(piVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar9 + -3);
        piVar6[-1] = piVar9[-1];
        *piVar6 = *piVar9;
        piVar9[-3] = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        piVar9[0] = 0;
      }
      piVar6 = piVar6 + 6;
      piVar5 = piVar5 + 6;
      piVar9 = piVar9 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)uVar1;
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(longlong *)(piVar4 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar4 = -0x80000000;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      piVar4 = piVar4 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar10 * 0x18 + 0x18;
  uVar11 = uVar10;
  if (uVar8 <= local_res18) {
    uVar11 = uVar10 + 1;
    if (uVar8 <= local_res18 - 0x18) {
      uVar10 = (local_res18 - 0x18) + uVar10 * -0x18;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar11 = uVar11 + uVar10 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x18);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 144d33eb0 FUN_144d33eb0 body=254 status=ok
// SIG undefined FUN_144d33eb0(void)

uint * FUN_144d33eb0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144d33f86:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 8) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_144d33f86;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144d33fb0 FUN_144d33fb0 body=275 status=ok
// SIG undefined FUN_144d33fb0(void)

void FUN_144d33fb0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
      }
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144d340d0 FUN_144d340d0 body=85 status=ok
// SIG undefined FUN_144d340d0(void)

void FUN_144d340d0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x14);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d34130 FUN_144d34130 body=95 status=ok
// SIG undefined FUN_144d34130(void)

undefined8 FUN_144d34130(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(), cVar2 != '\0')) {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2), cVar2 != '\0')) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 8) == 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144d34190 FUN_144d34190 body=392 status=ok
// SIG undefined FUN_144d34190(void)

void FUN_144d34190(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 *local_50;
  
  local_c4 = *(uint *)(param_1 + 0x40) ^ 0x80000000;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0x80000000;
  local_c8 = *(undefined4 *)(*param_2 + 0x18);
  local_c0 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
  fVar2 = (float)FUN_14506fd10(param_2);
  local_b4 = 0;
  local_bc = *(float *)(param_1 + 0x44) - fVar2 * 2.0;
  local_b8 = local_bc + 0.05;
  local_68 = *(undefined4 *)(param_1 + 0x1c);
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_b0 = *puVar1;
  local_a8 = *(undefined8 *)(param_1 + 0x60);
  local_ab = 1;
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_4;
  FUN_144f50de0(local_58,0,0x18,&LAB_144d353f0,&LAB_144d35410);
  if (local_50 != (undefined4 *)0x0) {
    *local_50 = (undefined4)local_88;
    local_50[1] = local_88._4_4_;
    local_50[2] = (undefined4)uStack_80;
    local_50[3] = uStack_80._4_4_;
    *(undefined8 *)(local_50 + 4) = local_78;
  }
  FUN_145070490(param_3,&local_c8,local_58);
  FUN_144f50d20(local_58);
  local_98 = 0;
  if ((-1 < (int)local_94) && (local_a0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 5);
  }
  return;
}



// FUNCTION 144d34320 FUN_144d34320 body=3885 status=ok
// SIG undefined FUN_144d34320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d34320(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 local_res10 [4];
  ulonglong uVar56;
  longlong local_3d8;
  undefined4 local_3d0;
  uint local_3cc;
  longlong local_3c8;
  int local_3c0;
  uint local_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  longlong local_398;
  int local_390;
  uint local_38c;
  undefined **local_388;
  undefined8 local_380;
  undefined8 local_378;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined8 uStack_320;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  undefined1 local_258 [16];
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  uint uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float *local_208;
  int local_200;
  uint local_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [16];
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [16];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float local_164;
  uint local_160;
  uint local_15c;
  longlong local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined2 local_118;
  undefined2 local_116;
  undefined1 local_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  fVar24 = *(float *)(param_1 + 0x48);
  local_228._4_4_ = *(undefined4 *)(param_1 + 0x38);
  local_f8 = *(float *)(param_1 + 0x34);
  local_228._0_4_ = local_228._4_4_;
  fStack_220 = (float)local_228._4_4_;
  uStack_21c = local_228._4_4_;
  fVar29 = *(float *)(param_1 + 0x38);
  lVar13 = *(longlong *)
            ((ulonglong)((uint)param_3[0x10] >> 0x16) * 0x120 + *(longlong *)(param_2[2] + 0x38));
  local_3b8 = *(float *)(lVar13 + 0xc0);
  fStack_3b4 = *(float *)(lVar13 + 0xc4);
  fStack_3b0 = *(float *)(lVar13 + 200);
  fStack_3ac = *(float *)(lVar13 + 0xcc);
  fVar33 = *(float *)(*param_2 + 0x24);
  local_108 = fVar33 * _DAT_14c6dacb0;
  fStack_104 = fVar33 * fRam000000014c6dacb4;
  fStack_100 = fVar33 * fRam000000014c6dacb8;
  fStack_fc = fVar33 * fRam000000014c6dacbc;
  fVar15 = fVar29 + fVar24;
  fVar16 = *(float *)(*param_2 + 0x20) * 0.9;
  fVar31 = *(float *)(param_1 + 0x34);
  local_3a8 = (local_f8 - fVar15) * local_3b8;
  fStack_3a4 = (local_f8 - fVar15) * fStack_3b4;
  fStack_3a0 = (local_f8 - fVar15) * fStack_3b0;
  fStack_39c = (local_f8 - fVar15) * fStack_3ac;
  uVar11 = *(undefined4 *)(param_1 + 0x4c);
  fVar52 = fVar15 * local_3b8;
  fVar53 = fVar15 * fStack_3b4;
  fVar54 = fVar15 * fStack_3b0;
  fVar55 = fVar15 * fStack_3ac;
  local_328 = CONCAT44(uVar11,uVar11);
  uStack_320 = CONCAT44(uVar11,uVar11);
  fStack_f4 = local_f8;
  fStack_f0 = local_f8;
  fStack_ec = local_f8;
  FUN_144beacd0(&local_328,&local_348,&local_358);
  fStack_344 = local_348;
  fStack_340 = local_348;
  fStack_33c = local_348;
  local_358 = fStack_354;
  fStack_350 = fStack_354;
  fStack_34c = fStack_354;
  local_278 = *(float *)(param_1 + 0x50);
  local_238 = *(float *)(param_1 + 0x54);
  uVar11 = *(undefined4 *)(param_1 + 0x58);
  local_328 = CONCAT44(uVar11,uVar11);
  uStack_320 = CONCAT44(uVar11,uVar11);
  fStack_274 = local_278;
  fStack_270 = local_278;
  fStack_26c = local_278;
  fStack_234 = local_238;
  fStack_230 = local_238;
  fStack_22c = local_238;
  puVar12 = (undefined4 *)FUN_144beaab0(&local_218,&local_328);
  local_248 = param_3[0xc];
  fStack_244 = param_3[0xd];
  fStack_240 = param_3[0xe];
  fStack_23c = param_3[0xf];
  fVar48 = param_3[4];
  fVar49 = param_3[5];
  fVar50 = param_3[6];
  fVar51 = param_3[7];
  local_e8 = *puVar12;
  local_328 = *(undefined8 *)(param_3 + 8);
  uStack_320 = *(undefined8 *)(param_3 + 10);
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar23 = local_3b8 * (local_248 - fVar48);
  fVar28 = fStack_3b4 * (fStack_244 - fVar49);
  fVar30 = fStack_3b0 * (fStack_240 - fVar50);
  auVar38._0_4_ = (local_248 - fVar48) - local_3b8 * (fVar30 + fVar28 + fVar23);
  auVar38._4_4_ = (fStack_244 - fVar49) - fStack_3b4 * (fVar30 + fVar28 + fVar23);
  auVar38._8_4_ = (fStack_240 - fVar50) - fStack_3b0 * (fVar30 + fVar28 + fVar23);
  auVar38._12_4_ = (fStack_23c - fVar51) - fStack_3ac * (fVar30 + fVar28 + fVar23);
  fVar23 = auVar38._0_4_ * auVar38._0_4_;
  fVar28 = auVar38._4_4_ * auVar38._4_4_;
  fVar30 = auVar38._8_4_ * auVar38._8_4_;
  auVar22._4_4_ = fVar23;
  auVar22._0_4_ = fVar23;
  auVar22._8_4_ = fVar23;
  auVar22._12_4_ = fVar23;
  auVar19._0_4_ = fVar30 + fVar28 + fVar23;
  auVar19._4_4_ = fVar30 + fVar28 + fVar23;
  auVar19._8_4_ = fVar30 + fVar28 + fVar23;
  auVar19._12_4_ = fVar30 + fVar28 + fVar23;
  if (auVar19._0_4_ == 0.0) {
    auVar22 = ZEXT816(0);
  }
  else {
    auVar22 = sqrtps(auVar22,auVar19);
    auVar22 = divps(auVar38,auVar22);
  }
  local_368 = fVar4;
  fStack_364 = fVar5;
  fStack_360 = fVar6;
  fStack_35c = fVar7;
  local_318 = fVar48;
  fStack_314 = fVar49;
  fStack_310 = fVar50;
  fStack_30c = fVar51;
  local_288 = local_328;
  uStack_280 = uStack_320;
  local_218 = local_248;
  fStack_214 = fStack_244;
  fStack_210 = fStack_240;
  fStack_20c = fStack_23c;
  uStack_e4 = local_e8;
  uStack_e0 = local_e8;
  uStack_dc = local_e8;
  iVar10 = FUN_14506f2c0(&local_368,&local_318,&local_3b8,param_2);
  if ((iVar10 != 0) &&
     (iVar10 = FUN_14506f2c0(&local_248,&local_288,&local_3b8,param_2), iVar10 != 0)) {
    FUN_14506fb20(&local_368,&local_318,&local_3b8,local_res10,param_2);
    FUN_14506fb20(&local_288,&local_248,&local_3b8,local_258,param_2);
    fVar41 = auVar22._0_4_;
    fVar42 = auVar22._4_4_;
    fVar43 = auVar22._8_4_;
    fVar45 = auVar22._12_4_;
    fVar28 = (local_368 - (float)local_288) * local_3b8;
    fVar30 = (fStack_364 - local_288._4_4_) * fStack_3b4;
    fVar36 = (fStack_360 - (float)uStack_280) * fStack_3b0;
    fVar23 = -*(float *)(param_1 + 0x30) - fVar33;
    fVar44 = fVar41 * fVar23;
    fVar46 = fVar42 * fVar23;
    fVar47 = fVar43 * fVar23;
    fVar23 = fVar45 * fVar23;
    FUN_145068400(&local_398);
    local_380 = *(longlong *)(param_1 + 0x68);
    local_378 = *(undefined8 *)(param_1 + 0x70);
    local_2d8 = CONCAT44(fStack_3a4,local_3a8);
    uStack_2d0 = CONCAT44(fStack_39c,fStack_3a0);
    iVar10 = 0;
    local_388 = hkaiTraversalAnalysisUtils::TraversalAnalysisMaterialOrFilter::vftable;
    local_2c8 = &local_388;
    local_2f8 = (float *)CONCAT44(fVar53 + fStack_364,fVar52 + local_368);
    uStack_2f0 = (float *)CONCAT44(fVar55 + fStack_35c,fVar54 + fStack_360);
    uStack_2c0 = 0;
    local_2b8 = 0;
    local_2e8 = CONCAT44(fVar53 + fStack_314,fVar52 + local_318);
    uStack_2e0 = CONCAT44(fVar55 + fStack_30c,fVar54 + fStack_310);
    local_2a8 = fVar44;
    fStack_2a4 = fVar46;
    fStack_2a0 = fVar47;
    fStack_29c = fVar23;
    FUN_145062b30(param_2[4],&local_2f8,&local_398);
    FUN_145068580(&local_398,fVar24 / ((fVar29 + fVar24) - fVar31));
    if (local_390 != 0) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_145068400(&local_3d8);
        if (0 < local_390) {
          do {
            lVar13 = FUN_1450686a0(&local_398,iVar10);
            uVar11 = FUN_145063c30(param_2[4],*(undefined4 *)(lVar13 + 0x10));
            cVar9 = (**(code **)(**(longlong **)(param_1 + 0x70) + 8))
                              (*(longlong **)(param_1 + 0x70),uVar11);
            if (cVar9 == '\0') {
              FUN_1450686c0(&local_3d8,lVar13);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_390);
        }
        FUN_1450692c0(&local_398,&local_3d8);
        local_3d0 = 0;
        if ((-1 < (int)local_3cc) && (local_3d8 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_3d8,(ulonglong)(local_3cc & 0x7fffffff) * 0x14);
        }
      }
      FUN_145068400(&local_3c8);
      FUN_145068400(&local_388);
      local_2c8 = *(undefined ****)(param_1 + 0x68);
      uStack_2c0 = 0;
      local_2b8 = 0;
      local_2d8 = CONCAT44(fStack_3b4 * (((fVar36 + fVar30 + fVar28) - fVar16) + fVar15),
                           local_3b8 * (((fVar36 + fVar30 + fVar28) - fVar16) + fVar15));
      uStack_2d0 = CONCAT44(fStack_3ac * (((fVar36 + fVar30 + fVar28) - fVar16) + fVar15),
                            fStack_3b0 * (((fVar36 + fVar30 + fVar28) - fVar16) + fVar15));
      local_2f8 = (float *)CONCAT44((local_288._4_4_ - fVar42 * fVar33) + fStack_3b4 * fVar16,
                                    ((float)local_288 - fVar41 * fVar33) + local_3b8 * fVar16);
      uStack_2f0 = (float *)CONCAT44((uStack_280._4_4_ - fVar45 * fVar33) + fStack_3ac * fVar16,
                                     ((float)uStack_280 - fVar43 * fVar33) + fStack_3b0 * fVar16);
      local_2e8 = CONCAT44((fStack_244 - fVar42 * fVar33) + fStack_3b4 * fVar16,
                           (local_248 - fVar41 * fVar33) + local_3b8 * fVar16);
      uStack_2e0 = CONCAT44((fStack_23c - fVar45 * fVar33) + fStack_3ac * fVar16,
                            (fStack_240 - fVar43 * fVar33) + fStack_3b0 * fVar16);
      local_2a8 = fVar41 * (0.0 - local_108);
      fStack_2a4 = fVar42 * (0.0 - fStack_104);
      fStack_2a0 = fVar43 * (0.0 - fStack_100);
      fStack_29c = fVar45 * (0.0 - fStack_fc);
      FUN_145062b30(param_2[4],&local_2f8,&local_388);
      FUN_145068400(&local_3a8);
      local_2c8 = *(undefined ****)(param_1 + 0x68);
      uStack_2c0 = 0;
      local_2b8 = 0;
      local_2e8 = CONCAT44(fStack_314 - fVar46,local_318 - fVar44);
      uStack_2e0 = CONCAT44(fStack_30c - fVar23,fStack_310 - fVar47);
      local_2f8 = (float *)CONCAT44(fStack_364 - fVar46,local_368 - fVar44);
      uStack_2f0 = (float *)CONCAT44(fStack_35c - fVar23,fStack_360 - fVar47);
      fStack_29c = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x30)) - fVar33;
      local_2d8 = CONCAT44(fStack_3b4 * fVar15,local_3b8 * fVar15);
      uStack_2d0 = CONCAT44(fStack_3ac * fVar15,fStack_3b0 * fVar15);
      local_2a8 = fStack_29c * (0.0 - fVar41);
      fStack_2a4 = fStack_29c * (0.0 - fVar42);
      fStack_2a0 = fStack_29c * (0.0 - fVar43);
      fStack_29c = fStack_29c * (0.0 - fVar45);
      FUN_145062b30(param_2[4],&local_2f8,&local_3a8);
      FUN_145068400(&local_3d8);
      FUN_145068460(&local_3d8);
      if (fVar16 < fVar15) {
        fVar24 = local_3b8 * (fStack_314 - fStack_364) - (local_318 - local_368) * fStack_3b4;
        fVar29 = fStack_3b4 * (fStack_310 - fStack_360) - (fStack_314 - fStack_364) * fStack_3b0;
        fVar31 = fStack_3b0 * (local_318 - local_368) - (fStack_310 - fStack_360) * local_3b8;
        auVar25._12_4_ =
             fStack_3ac * (fStack_30c - fStack_35c) - (fStack_30c - fStack_35c) * fStack_3ac;
        auVar25._4_4_ = fVar31;
        auVar25._0_4_ = fVar29;
        auVar25._8_4_ = fVar24;
        fVar29 = fVar29 * fVar29;
        fVar31 = fVar31 * fVar31;
        fVar24 = fVar24 * fVar24;
        auVar17._4_4_ = fVar29;
        auVar17._0_4_ = fVar29;
        auVar17._8_4_ = fVar29;
        auVar17._12_4_ = fVar29;
        fVar23 = fVar24 + fVar31 + fVar29;
        if (fVar23 == 0.0) {
          auVar19 = ZEXT816(0);
        }
        else {
          auVar3._4_4_ = fVar24 + fVar31 + fVar29;
          auVar3._0_4_ = fVar23;
          auVar3._8_4_ = fVar24 + fVar31 + fVar29;
          auVar3._12_4_ = fVar24 + fVar31 + fVar29;
          auVar19 = sqrtps(auVar17,auVar3);
          auVar19 = divps(auVar25,auVar19);
        }
        local_2c8 = *(undefined ****)(param_1 + 0x68);
        local_2a8 = auVar19._0_4_ * fVar33;
        fStack_2a4 = auVar19._4_4_ * fVar33;
        fStack_2a0 = auVar19._8_4_ * fVar33;
        fStack_29c = auVar19._12_4_ * fVar33;
        uStack_2c0 = 0;
        local_2b8 = 0;
        local_2f8 = (float *)CONCAT44(fStack_3b4 * fVar16 + fStack_364,
                                      local_3b8 * fVar16 + local_368);
        uStack_2f0 = (float *)CONCAT44(fStack_3ac * fVar16 + fStack_35c,
                                       fStack_3b0 * fVar16 + fStack_360);
        local_2e8 = CONCAT44(fStack_3b4 * fVar16 + fStack_314,local_3b8 * fVar16 + local_318);
        uStack_2e0 = CONCAT44(fStack_3ac * fVar16 + fStack_30c,fStack_3b0 * fVar16 + fStack_310);
        local_2d8 = CONCAT44(fStack_3b4 * (fVar15 - fVar16),local_3b8 * (fVar15 - fVar16));
        uStack_2d0 = CONCAT44(fStack_3ac * (fVar15 - fVar16),fStack_3b0 * (fVar15 - fVar16));
        FUN_145062b30(param_2[4],&local_2f8,&local_3d8);
      }
      iVar10 = 0;
      FUN_1450692c0(&local_3c8,&local_398);
      FUN_145068920(&local_3c8,&local_388);
      FUN_145068920(&local_3c8,&local_3a8);
      FUN_145068920(&local_3c8,&local_3d8);
      FUN_14506fc60(&local_3c8,local_res10[0]);
      if (local_3c0 == 0) {
        FUN_144d340d0(&local_3d8);
        FUN_144d340d0(&local_3a8);
        FUN_144d340d0(&local_388);
      }
      else {
        FUN_144d340d0(&local_3d8);
        FUN_144d340d0(&local_3a8);
        FUN_144d340d0(&local_388);
        fVar48 = fVar48 - fVar4;
        fVar49 = fVar49 - fVar5;
        fVar50 = fVar50 - fVar6;
        fVar51 = fVar51 - fVar7;
        fVar24 = *(float *)(*param_2 + 0x18);
        fVar31 = local_3b8 * fVar49 - fVar48 * fStack_3b4;
        fVar29 = fStack_3b4 * fVar50 - fVar49 * fStack_3b0;
        fVar33 = fStack_3b0 * fVar48 - fVar50 * local_3b8;
        auVar32._12_4_ = fStack_3ac * fVar51 - fVar51 * fStack_3ac;
        auVar32._4_4_ = fVar33;
        auVar32._0_4_ = fVar29;
        auVar32._8_4_ = fVar31;
        fVar29 = fVar29 * fVar29;
        fVar33 = fVar33 * fVar33;
        fVar31 = fVar31 * fVar31;
        auVar18._4_4_ = fVar29;
        auVar18._0_4_ = fVar29;
        auVar18._8_4_ = fVar29;
        auVar18._12_4_ = fVar29;
        auVar26._0_4_ = fVar31 + fVar33 + fVar29;
        auVar26._4_4_ = fVar31 + fVar33 + fVar29;
        auVar26._8_4_ = fVar31 + fVar33 + fVar29;
        auVar26._12_4_ = fVar31 + fVar33 + fVar29;
        if (auVar26._0_4_ == 0.0) {
          local_308 = ZEXT816(0);
        }
        else {
          auVar19 = sqrtps(auVar18,auVar26);
          local_308 = divps(auVar32,auVar19);
        }
        local_208 = &local_1f8;
        local_1f8 = -fVar41;
        fStack_1f4 = -fVar42;
        fStack_1f0 = -fVar43;
        fVar29 = local_308._0_4_;
        fVar33 = local_308._4_4_;
        fVar31 = local_308._8_4_;
        fVar15 = local_308._12_4_;
        local_1fc = 0x80000006;
        local_200 = 6;
        fVar52 = local_3b8 * (float)local_228._0_4_;
        fVar53 = fStack_3b4 * (float)local_228._4_4_;
        fVar54 = fStack_3b0 * fStack_220;
        fStack_1ec = 0.0 - (fStack_1f0 * fVar6 + fStack_1f4 * fVar5 + local_1f8 * fVar4);
        local_1e8._0_12_ = auVar22._0_12_;
        local_1e8._12_4_ =
             0.0 - (fVar43 * (float)uStack_320 +
                   fVar42 * local_328._4_4_ + fVar41 * (float)local_328);
        fVar30 = fVar48 * fVar33 - fVar49 * fVar29;
        fVar16 = fVar49 * fVar31 - fVar50 * fVar33;
        fVar28 = fVar50 * fVar29 - fVar48 * fVar31;
        auVar35._12_4_ = fVar51 * fVar15 - fVar51 * fVar15;
        auVar35._4_4_ = fVar28;
        auVar35._0_4_ = fVar16;
        auVar35._8_4_ = fVar30;
        fVar16 = fVar16 * fVar16;
        fVar28 = fVar28 * fVar28;
        fVar30 = fVar30 * fVar30;
        auVar20._4_4_ = fVar16;
        auVar20._0_4_ = fVar16;
        auVar20._8_4_ = fVar16;
        auVar20._12_4_ = fVar16;
        fVar23 = fVar30 + fVar28 + fVar16;
        if (fVar23 == 0.0) {
          auVar34 = SUB1612(ZEXT816(0),0);
        }
        else {
          auVar2._4_4_ = fVar30 + fVar28 + fVar16;
          auVar2._0_4_ = fVar23;
          auVar2._8_4_ = fVar30 + fVar28 + fVar16;
          auVar2._12_4_ = fVar30 + fVar28 + fVar16;
          auVar22 = sqrtps(auVar20,auVar2);
          auVar22 = divps(auVar35,auVar22);
          auVar34 = auVar22._0_12_;
        }
        fStack_220 = -0.0;
        local_228 = (undefined1  [8])0x8000000080000000;
        uStack_21c = 0;
        local_1d8 = -auVar34._0_4_;
        fStack_1d4 = -auVar34._4_4_;
        fStack_1d0 = -auVar34._8_4_;
        fStack_1cc = 0.0 - ((fStack_3b0 * fStack_f0 + fStack_360) * fStack_1d0 +
                           (fStack_3b4 * fStack_f4 + fStack_364) * fStack_1d4 +
                           (local_3b8 * local_f8 + local_368) * local_1d8);
        fVar16 = local_3b8 * fVar48;
        fVar23 = fStack_3b4 * fVar49;
        fVar28 = fStack_3b0 * fVar50;
        local_1c8._12_4_ =
             0.0 - (auVar34._8_4_ * (fVar54 + fStack_360) +
                   auVar34._4_4_ * (fVar53 + fStack_364) + auVar34._0_4_ * (fVar52 + local_368));
        local_1c8._0_12_ = auVar34;
        auVar27._0_4_ = fVar48 - local_3b8 * (fVar28 + fVar23 + fVar16);
        auVar27._4_4_ = fVar49 - fStack_3b4 * (fVar28 + fVar23 + fVar16);
        auVar27._8_4_ = fVar50 - fStack_3b0 * (fVar28 + fVar23 + fVar16);
        auVar27._12_4_ = fVar51 - fStack_3ac * (fVar28 + fVar23 + fVar16);
        fVar16 = auVar27._0_4_ * auVar27._0_4_;
        fVar28 = auVar27._4_4_ * auVar27._4_4_;
        fVar30 = auVar27._8_4_ * auVar27._8_4_;
        auVar21._4_4_ = fVar16;
        auVar21._0_4_ = fVar16;
        auVar21._8_4_ = fVar16;
        auVar21._12_4_ = fVar16;
        fVar23 = fVar30 + fVar28 + fVar16;
        if (fVar23 == 0.0) {
          local_338 = ZEXT816(0);
        }
        else {
          auVar1._4_4_ = fVar30 + fVar28 + fVar16;
          auVar1._0_4_ = fVar23;
          auVar1._8_4_ = fVar30 + fVar28 + fVar16;
          auVar1._12_4_ = fVar30 + fVar28 + fVar16;
          auVar22 = sqrtps(auVar21,auVar1);
          local_338 = divps(auVar27,auVar22);
        }
        fVar16 = local_3b8 * local_358;
        fVar23 = fStack_3b4 * fStack_354;
        fVar28 = fStack_3b0 * fStack_350;
        fVar30 = fStack_3ac * fStack_34c;
        fVar52 = local_338._0_4_ * local_278;
        fVar53 = local_338._4_4_ * fStack_274;
        fVar54 = local_338._8_4_ * fStack_270;
        fVar29 = local_348 * fVar29;
        fVar33 = fStack_344 * fVar33;
        fVar31 = fStack_340 * fVar31;
        fVar15 = fStack_33c * fVar15;
        local_238 = local_238 * local_338._0_4_;
        fStack_234 = fStack_234 * local_338._4_4_;
        fStack_230 = fStack_230 * local_338._8_4_;
        fStack_22c = fStack_22c * local_338._12_4_;
        if (0 < local_3c0) {
          do {
            pfVar14 = (float *)FUN_1450686a0(&local_3c8,iVar10);
            fVar55 = *pfVar14;
            fVar36 = pfVar14[1];
            local_268 = pfVar14[4];
            fVar45 = fVar4 + fVar48 * fVar55;
            fVar44 = fVar5 + fVar49 * fVar55;
            fVar46 = fVar6 + fVar50 * fVar55;
            fStack_34c = fVar7 + fVar51 * fVar55;
            fVar41 = fVar48 * fVar36 + fVar4;
            fVar42 = fVar49 * fVar36 + fVar5;
            fVar43 = fVar50 * fVar36 + fVar6;
            fStack_33c = fVar51 * fVar36 + fVar7;
            local_278 = fVar48 * (fVar36 - fVar55);
            fStack_274 = fVar49 * (fVar36 - fVar55);
            fStack_270 = fVar50 * (fVar36 - fVar55);
            fStack_26c = fVar51 * (fVar36 - fVar55);
            local_358 = fVar45;
            fStack_354 = fVar44;
            fStack_350 = fVar46;
            local_348 = fVar41;
            fStack_344 = fVar42;
            fStack_340 = fVar43;
            if (fVar24 * fVar24 <=
                (fVar46 - fVar43) * (fVar46 - fVar43) +
                (fVar44 - fVar42) * (fVar44 - fVar42) + (fVar45 - fVar41) * (fVar45 - fVar41)) {
              fVar37 = (local_218 - (float)local_328) * fVar36 + (float)local_328;
              fVar39 = (fStack_214 - local_328._4_4_) * fVar36 + local_328._4_4_;
              fVar40 = (fStack_210 - (float)uStack_320) * fVar36 + (float)uStack_320;
              fVar36 = (local_218 - (float)local_328) * fVar55 + (float)local_328;
              fVar47 = (fStack_214 - local_328._4_4_) * fVar55 + local_328._4_4_;
              fVar55 = (fStack_210 - (float)uStack_320) * fVar55 + (float)uStack_320;
              FUN_144c501d0(&local_198);
              local_168 = param_3[0x12];
              local_164 = param_3[0x13];
              local_160 = (uint)param_3[0x10] & 0x3fffff;
              local_198 = local_358;
              fStack_194 = local_348;
              local_15c = (uint)param_3[0x11] & 0x3fffff;
              local_114 = 1;
              local_116 = 0;
              local_188 = fStack_354;
              fStack_184 = fStack_344;
              local_178 = fStack_350;
              fStack_174 = fStack_340;
              local_118 = (undefined2)((uint)(*(float *)(param_1 + 0x28) * 1.0039062) >> 0x10);
              fStack_190 = fVar37;
              fStack_18c = fVar36;
              fStack_180 = fVar39;
              fStack_17c = fVar47;
              fStack_170 = fVar40;
              fStack_16c = fVar55;
              FUN_145070c40(param_4,&local_3a8,&local_198,5,*(undefined8 *)(param_1 + 0x20));
              local_208[0x10] = (float)(local_228._0_4_ ^ local_338._0_4_);
              local_208[0x11] = (float)(local_228._4_4_ ^ local_338._4_4_);
              local_208[0x12] = (float)((uint)fStack_220 ^ local_338._8_4_);
              local_208[0x13] = (float)(uStack_21c ^ local_338._12_4_);
              fVar55 = local_208[0x10];
              fVar36 = local_208[0x11];
              fVar47 = local_208[0x12];
              local_208[0x10] = fVar55;
              local_208[0x11] = fVar36;
              local_208[0x12] = fVar47;
              local_208[0x13] =
                   0.0 - ((fVar46 + fVar54) * fVar47 +
                         (fVar44 + fVar53) * fVar36 + (fVar45 + fVar52) * fVar55);
              *(undefined8 *)(local_208 + 0x14) = local_338._0_8_;
              *(undefined8 *)(local_208 + 0x16) = local_338._8_8_;
              fVar55 = local_208[0x14];
              fVar36 = local_208[0x15];
              fVar45 = local_208[0x16];
              local_208[0x14] = fVar55;
              local_208[0x15] = fVar36;
              local_208[0x16] = fVar45;
              local_208[0x17] =
                   0.0 - ((fVar43 + fStack_230) * fVar45 +
                         (fVar42 + fStack_234) * fVar36 + (fVar41 + local_238) * fVar55);
              FUN_145068400(&local_3d8);
              FUN_145068400(&local_388);
              local_2e8 = CONCAT44(fStack_354,local_358);
              uStack_2e0 = CONCAT44(fStack_34c,fStack_350);
              local_2d8 = CONCAT44(fStack_344,local_348);
              uStack_2d0 = CONCAT44(fStack_33c,fStack_340);
              uStack_2f0 = local_208 + (longlong)local_200 * 4;
              local_2f8 = local_208;
              local_298 = *(undefined8 *)(param_1 + 0x68);
              local_2c8 = (undefined ***)CONCAT44(fVar23 - fVar33,fVar16 - fVar29);
              uStack_2c0 = CONCAT44(fVar30 - fVar15,fVar28 - fVar31);
              local_2b8 = local_308._0_8_;
              uStack_2b0 = local_308._8_8_;
              local_2a8 = local_3b8;
              fStack_2a4 = fStack_3b4;
              fStack_2a0 = fStack_3b0;
              fStack_29c = fStack_3ac;
              FUN_145063550(param_2[4],&local_2f8,&local_3d8,&local_388);
              pfVar14 = &local_3b8;
              FUN_14506fcb0(&local_3d8,&local_388,&local_278,local_308,pfVar14,local_338,&local_e8);
              uVar56 = (ulonglong)pfVar14 & 0xffffffffffffff00;
              FUN_145070bf0(&local_3a8,0,&local_3d8,1,uVar56);
              FUN_145070bf0(&local_3a8,1,&local_388,1,uVar56 & 0xffffffffffffff00);
              FUN_145070c20(&local_3a8,0,&local_358);
              FUN_145070c20(&local_3a8,1,&local_348);
              FUN_145070c20(&local_3a8,2,local_308);
              lVar13 = local_380;
              uVar8 = local_380._4_4_;
              local_380 = (ulonglong)local_380._4_4_ << 0x20;
              if ((-1 < lVar13) && (local_388 != (undefined **)0x0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_388,(ulonglong)(uVar8 & 0x7fffffff) * 0x14);
              }
              local_388 = (undefined **)0x0;
              local_380 = CONCAT44(0x80000000,(undefined4)local_380);
              local_3d0 = 0;
              if ((-1 < (int)local_3cc) && (local_3d8 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_3d8,
                           (ulonglong)(local_3cc & 0x7fffffff) * 0x14);
              }
              local_3d8 = 0;
              local_3cc = 0x80000000;
              local_130 = 0;
              if ((-1 < (int)local_12c) && (local_138 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_138,(ulonglong)(local_12c & 0x7fffffff) << 2
                          );
              }
              local_138 = 0;
              local_12c = 0x80000000;
              local_150 = 0;
              if ((-1 < (int)local_14c) && (local_158 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_158,(ulonglong)(local_14c & 0x7fffffff) << 2
                          );
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_3c0);
        }
        local_200 = 0;
        if ((-1 < (int)local_1fc) && (local_208 != (float *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_208,(ulonglong)(local_1fc & 0x7fffffff) << 4);
        }
        local_208 = (float *)0x0;
        local_1fc = 0x80000000;
      }
      local_3c0 = 0;
      if ((-1 < (int)local_3bc) && (local_3c8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_3c8,(ulonglong)(local_3bc & 0x7fffffff) * 0x14);
      }
      local_3c8 = 0;
      local_3bc = 0x80000000;
    }
    local_390 = 0;
    if ((-1 < (int)local_38c) && (local_398 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_398,(ulonglong)(local_38c & 0x7fffffff) * 0x14);
    }
  }
  return;
}



// FUNCTION 144d35250 FUN_144d35250 body=401 status=ok
// SIG undefined FUN_144d35250(void)

undefined8
FUN_144d35250(longlong param_1,undefined4 *param_2,undefined8 param_3,float *param_4,
             undefined1 (*param_5) [16])

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  float local_54;
  float local_50 [2];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_144d3eab0(param_1,&local_48,*param_2,param_3);
  local_58 = local_48;
  iVar2 = FUN_144d3eaf0(param_1,*param_2,0,&local_58);
  if (iVar2 != 0) {
    local_48 = local_58;
    fStack_44 = local_58;
    fStack_40 = local_58;
    fStack_3c = local_58;
    iVar2 = FUN_144d3eb20(param_1,*param_2,0,local_58,&local_54);
    if (iVar2 != 0) {
      FUN_144d3eb20(param_1,*param_2,1,local_48,local_50);
      FUN_144d3eb50(param_1,*param_2,0,&local_28);
      FUN_144d3eb50(param_1,*param_2,1,&local_38);
      FUN_144d3eb50(param_1,*param_2,2,&local_18);
      fVar4 = *(float *)(param_1 + 0x20);
      fVar7 = *(float *)(param_1 + 0x24);
      fVar8 = *(float *)(param_1 + 0x28);
      fVar1 = *(float *)(param_1 + 0x2c);
      local_38 = local_38 - local_28;
      fStack_34 = fStack_34 - fStack_24;
      fStack_30 = fStack_30 - fStack_20;
      fStack_2c = fStack_2c - fStack_1c;
      *param_4 = local_38 * local_48 + local_28 + local_54 * local_18 + local_50[0] * fVar4;
      param_4[1] = fStack_34 * fStack_44 + fStack_24 + local_54 * fStack_14 + local_50[0] * fVar7;
      param_4[2] = fStack_30 * fStack_40 + fStack_20 + local_54 * fStack_10 + local_50[0] * fVar8;
      param_4[3] = fStack_2c * fStack_3c + fStack_1c + local_54 * fStack_c + local_50[0] * fVar1;
      fVar10 = fStack_34 * fVar4 - fVar7 * local_38;
      fVar11 = fStack_30 * fVar7 - fVar8 * fStack_34;
      fVar12 = local_38 * fVar8 - fVar4 * fStack_30;
      fVar4 = fVar11 * fVar11;
      fVar7 = fVar12 * fVar12;
      fVar8 = fVar10 * fVar10;
      auVar3._4_4_ = fVar4;
      auVar3._0_4_ = fVar4;
      auVar3._8_4_ = fVar4;
      auVar3._12_4_ = fVar4;
      fVar9 = fVar7 + fVar4 + fVar8;
      auVar6 = ZEXT816(0);
      if (fVar9 != 0.0) {
        auVar6._4_4_ = fVar7 + fVar4 + fVar8;
        auVar6._0_4_ = fVar9;
        auVar6._8_4_ = fVar7 + fVar4 + fVar8;
        auVar6._12_4_ = fVar7 + fVar4 + fVar8;
        auVar3 = sqrtps(auVar3,auVar6);
        auVar5._4_4_ = fVar12;
        auVar5._0_4_ = fVar11;
        auVar5._8_4_ = fVar10;
        auVar5._12_4_ = fStack_2c * fVar1 - fVar1 * fStack_2c;
        auVar6 = divps(auVar5,auVar3);
      }
      *param_5 = auVar6;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d35430 FUN_144d35430 body=423 status=ok
// SIG undefined FUN_144d35430(void)

void FUN_144d35430(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 *local_50;
  
  local_c4 = *(undefined4 *)(param_1 + 0x30);
  local_ab = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0x80000000;
  local_c8 = *(undefined4 *)(*param_2 + 0x18);
  local_c0 = *(undefined4 *)(param_1 + 0x34);
  fVar2 = (float)FUN_14506fd10(param_2);
  local_bc = *(float *)(param_1 + 0x38) - fVar2 * 2.0;
  fVar2 = (float)FUN_14506fd10(param_2);
  local_b8 = *(float *)(param_1 + 0x3c) - fVar2 * 2.0;
  local_68 = *(undefined4 *)(param_1 + 0x18);
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_68 = *(undefined4 *)(param_1 + 0x1c);
  local_b4 = *puVar1;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_b0 = *puVar1;
  local_a8 = *(undefined8 *)(param_1 + 0x58);
  local_ac = 1;
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_4;
  FUN_144f50de0(local_58,0,0x18,&LAB_144d365d0,&LAB_144d365f0);
  if (local_50 != (undefined4 *)0x0) {
    *local_50 = (undefined4)local_88;
    local_50[1] = local_88._4_4_;
    local_50[2] = (undefined4)uStack_80;
    local_50[3] = uStack_80._4_4_;
    *(undefined8 *)(local_50 + 4) = local_78;
  }
  FUN_145070490(param_3,&local_c8,local_58);
  FUN_144f50d20(local_58);
  local_98 = 0;
  if ((-1 < (int)local_94) && (local_a0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 5);
  }
  return;
}



// FUNCTION 144d355e0 FUN_144d355e0 body=4076 status=ok
// SIG undefined FUN_144d355e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d355e0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  undefined1 auVar16 [16];
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar40;
  float fVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 local_res8 [2];
  undefined1 local_res10 [16];
  undefined8 *puVar58;
  ulonglong uVar59;
  longlong local_408;
  int local_400;
  uint local_3fc;
  longlong local_3f8;
  undefined4 local_3f0;
  uint local_3ec;
  longlong local_3e8;
  undefined4 local_3e0;
  uint local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  int local_3c0;
  uint local_3bc;
  undefined1 local_3b8 [8];
  float fStack_3b0;
  float fStack_3ac;
  undefined1 local_3a8 [16];
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  longlong local_348;
  undefined4 local_340;
  uint local_33c;
  longlong local_338;
  undefined4 local_330;
  uint local_32c;
  longlong local_328;
  undefined4 local_320;
  uint local_31c;
  longlong local_318;
  undefined4 local_310;
  uint local_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined1 local_2c8 [16];
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float *local_2a8;
  int local_2a0;
  uint local_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined1 local_288 [16];
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined1 local_268 [16];
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [16];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float *local_228;
  float *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  undefined4 local_170;
  uint local_16c;
  longlong local_158;
  undefined4 local_150;
  uint local_14c;
  undefined2 local_138;
  undefined2 local_136;
  undefined1 local_134;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  lVar13 = *(longlong *)
            ((ulonglong)((uint)param_3[0x10] >> 0x16) * 0x120 + *(longlong *)(param_2[2] + 0x38));
  local_3d8 = *(undefined8 *)(lVar13 + 0xc0);
  uStack_3d0 = *(undefined8 *)(lVar13 + 200);
  FUN_145068400(&local_3c8);
  FUN_145068400(&local_318);
  FUN_145068400(&local_328);
  local_3b8._4_4_ = *(undefined4 *)(param_1 + 0x40);
  local_118 = *(undefined4 *)(param_1 + 0x4c);
  fVar22 = *(float *)(*param_2 + 0x18);
  fStack_374 = fVar22 * fVar22;
  fStack_370 = fVar22 * fVar22;
  fStack_36c = fVar22 * fVar22;
  local_3b8._0_4_ = local_3b8._4_4_;
  fStack_3b0 = (float)local_3b8._4_4_;
  fStack_3ac = (float)local_3b8._4_4_;
  local_378 = fVar22 * fVar22;
  uStack_114 = local_118;
  uStack_110 = local_118;
  uStack_10c = local_118;
  FUN_144beacd0(local_3b8,&local_2d8,&local_398);
  fVar57 = local_2d8;
  local_398 = fStack_394;
  fStack_390 = fStack_394;
  fStack_38c = fStack_394;
  FUN_145068400(&local_338);
  FUN_145068400(&local_348);
  fVar21 = param_3[8];
  fVar34 = param_3[9];
  fVar35 = param_3[10];
  fVar41 = param_3[0xb];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_3[4];
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar8 = param_3[7];
  fVar44 = param_3[0xc];
  fVar46 = param_3[0xd];
  fVar45 = param_3[0xe];
  fVar55 = param_3[0xf];
  local_368 = fVar21;
  fStack_364 = fVar34;
  fStack_360 = fVar35;
  fStack_35c = fVar41;
  local_358 = fVar21;
  fStack_354 = fVar34;
  fStack_350 = fVar35;
  fStack_34c = fVar41;
  local_308 = fVar44;
  fStack_304 = fVar46;
  fStack_300 = fVar45;
  fStack_2fc = fVar55;
  local_2f8 = fVar5;
  fStack_2f4 = fVar6;
  fStack_2f0 = fVar7;
  fStack_2ec = fVar8;
  local_2e8 = fVar1;
  fStack_2e4 = fVar2;
  fStack_2e0 = fVar3;
  fStack_2dc = fVar4;
  iVar10 = FUN_14506f2c0(&local_2e8,&local_2f8,&local_3d8,param_2);
  iVar15 = 0;
  if ((iVar10 != 0) &&
     (iVar10 = FUN_14506f2c0(&local_308,&local_358,&local_3d8,param_2), iVar10 != 0)) {
    fVar36 = local_3d8._4_4_ * fStack_2e4 + (float)local_3d8 * local_2e8 +
             (float)uStack_3d0 * fStack_2e0;
    fVar40 = local_3d8._4_4_ * fStack_2f4 + (float)local_3d8 * local_2f8 +
             (float)uStack_3d0 * fStack_2f0;
    auVar37._8_4_ =
         local_3d8._4_4_ * fStack_354 + (float)local_3d8 * local_358 +
         (float)uStack_3d0 * fStack_350;
    fVar42 = local_3d8._4_4_ * fStack_304 + (float)local_3d8 * local_308 +
             (float)uStack_3d0 * fStack_300;
    auVar23._4_4_ = fVar36;
    auVar23._0_4_ = fVar36;
    auVar23._8_4_ = fVar36;
    auVar23._12_4_ = fVar36;
    auVar38._4_4_ = fVar42;
    auVar38._0_4_ = fVar42;
    auVar38._8_4_ = fVar42;
    auVar38._12_4_ = fVar42;
    auVar37._4_4_ = auVar37._8_4_;
    auVar37._0_4_ = auVar37._8_4_;
    auVar37._12_4_ = auVar37._8_4_;
    auVar38 = minps(auVar37,auVar38);
    auVar24._4_4_ = fVar40;
    auVar24._0_4_ = fVar40;
    auVar24._8_4_ = fVar40;
    auVar24._12_4_ = fVar40;
    auVar24 = maxps(auVar23,auVar24);
    if (auVar24._0_4_ < auVar38._0_4_) {
      FUN_14506fb20(&local_2e8,&local_2f8,&local_3d8,local_res8,param_2);
      FUN_14506fb20(&local_358,&local_308,&local_3d8,local_res10,param_2);
      FUN_145068460(&local_3c8);
      local_128 = *(undefined4 *)(param_1 + 0x50);
      uStack_124 = local_128;
      uStack_120 = local_128;
      uStack_11c = local_128;
      FUN_14506f340(&local_2e8,&local_2f8,&local_358,&local_308,&local_3d8,&local_118,&local_128,
                    param_2,&local_3c8,*(undefined8 *)(param_1 + 0x60));
      FUN_14506fc60(&local_3c8,local_res8[0]);
      if (local_3c0 != 0) {
        local_3b8._4_4_ = *(undefined4 *)(param_1 + 0x48);
        local_3b8._0_4_ = local_3b8._4_4_;
        fStack_3b0 = (float)local_3b8._4_4_;
        fStack_3ac = (float)local_3b8._4_4_;
        puVar12 = (undefined4 *)FUN_144beaab0(&local_238,local_3b8);
        fStack_26c = *(float *)(param_1 + 0x44);
        local_e8 = *puVar12;
        local_2a8 = &local_298;
        local_2d8 = fVar44 - fVar21;
        fStack_2d4 = fVar46 - fVar34;
        fStack_2d0 = fVar45 - fVar35;
        fStack_2cc = fVar55 - fVar41;
        local_29c = 0x80000006;
        local_2a0 = 6;
        fVar40 = (float)local_3d8 * fStack_2d4 - local_3d8._4_4_ * local_2d8;
        fVar41 = local_3d8._4_4_ * fStack_2d0 - (float)uStack_3d0 * fStack_2d4;
        fVar36 = (float)uStack_3d0 * local_2d8 - (float)local_3d8 * fStack_2d0;
        auVar39._12_4_ = uStack_3d0._4_4_ * fStack_2cc - uStack_3d0._4_4_ * fStack_2cc;
        auVar39._4_4_ = fVar36;
        auVar39._0_4_ = fVar41;
        auVar39._8_4_ = fVar40;
        fVar41 = fVar41 * fVar41;
        fVar36 = fVar36 * fVar36;
        fVar40 = fVar40 * fVar40;
        auVar16._4_4_ = fVar41;
        auVar16._0_4_ = fVar41;
        auVar16._8_4_ = fVar41;
        auVar16._12_4_ = fVar41;
        auVar25._0_4_ = fVar40 + fVar36 + fVar41;
        auVar25._4_4_ = fVar40 + fVar36 + fVar41;
        auVar25._8_4_ = fVar40 + fVar36 + fVar41;
        auVar25._12_4_ = fVar40 + fVar36 + fVar41;
        if (auVar25._0_4_ == 0.0) {
          auVar24 = ZEXT816(0);
        }
        else {
          auVar24 = sqrtps(auVar16,auVar25);
          auVar24 = divps(auVar39,auVar24);
        }
        local_298 = auVar24._0_4_;
        fStack_294 = auVar24._4_4_;
        fStack_290 = auVar24._8_4_;
        fVar21 = 0.0 - (fStack_290 * fVar35 + fStack_294 * fVar34 + local_298 * fVar21);
        fVar41 = fStack_294 * local_2d8 - local_298 * fStack_2d4;
        fVar34 = fStack_290 * fStack_2d4 - fStack_294 * fStack_2d0;
        fVar35 = local_298 * fStack_2d0 - fStack_290 * local_2d8;
        auVar31._12_4_ = auVar24._12_4_ * fStack_2cc - auVar24._12_4_ * fStack_2cc;
        local_298 = -local_298;
        fStack_294 = -fStack_294;
        fStack_290 = -fStack_290;
        auVar31._4_4_ = fVar35;
        auVar31._0_4_ = fVar34;
        auVar31._8_4_ = fVar41;
        fStack_28c = -fVar21 - fStack_26c;
        fVar34 = fVar34 * fVar34;
        fVar35 = fVar35 * fVar35;
        fVar41 = fVar41 * fVar41;
        local_288._0_12_ = auVar24._0_12_;
        local_288._12_4_ = fVar21 - fStack_26c;
        auVar17._4_4_ = fVar34;
        auVar17._0_4_ = fVar34;
        auVar17._8_4_ = fVar34;
        auVar17._12_4_ = fVar34;
        auVar26._0_4_ = fVar41 + fVar35 + fVar34;
        auVar26._4_4_ = fVar41 + fVar35 + fVar34;
        auVar26._8_4_ = fVar41 + fVar35 + fVar34;
        auVar26._12_4_ = fVar41 + fVar35 + fVar34;
        if (auVar26._0_4_ == 0.0) {
          auVar30 = SUB1612(ZEXT816(0),0);
        }
        else {
          auVar24 = sqrtps(auVar17,auVar26);
          auVar24 = divps(auVar31,auVar24);
          auVar30 = auVar24._0_12_;
        }
        fVar21 = 0.0 - (auVar30._8_4_ * fStack_350 +
                       auVar30._4_4_ * fStack_354 + auVar30._0_4_ * local_358);
        local_278 = -auVar30._0_4_;
        fStack_274 = -auVar30._4_4_;
        fStack_270 = -auVar30._8_4_;
        local_268._12_4_ = fVar21 - fStack_26c;
        local_268._0_12_ = auVar30;
        fStack_26c = -fVar21 - fStack_26c;
        local_108 = (((fVar44 + fVar5) - fVar1) - local_368) * _DAT_14c6dad90;
        fStack_104 = (((fVar46 + fVar6) - fVar2) - fStack_364) * fRam000000014c6dad94;
        fStack_100 = (((fVar45 + fVar7) - fVar3) - fStack_360) * fRam000000014c6dad98;
        fStack_fc = (((fVar55 + fVar8) - fVar4) - fStack_35c) * fRam000000014c6dad9c;
        fVar21 = (float)local_3d8 * local_108;
        fVar35 = local_3d8._4_4_ * fStack_104;
        fVar36 = (float)uStack_3d0 * fStack_100;
        fVar34 = local_108 - (float)local_3d8 * (fVar36 + fVar35 + fVar21);
        fVar41 = fStack_104 - local_3d8._4_4_ * (fVar36 + fVar35 + fVar21);
        local_f8 = CONCAT44(fVar41,fVar34);
        fStack_f0 = fStack_100 - (float)uStack_3d0 * (fVar36 + fVar35 + fVar21);
        fStack_ec = fStack_fc - uStack_3d0._4_4_ * (fVar36 + fVar35 + fVar21);
        fVar34 = fVar34 * fVar34;
        fVar41 = fVar41 * fVar41;
        fVar21 = fStack_f0 * fStack_f0;
        auVar18._4_4_ = fVar34;
        auVar18._0_4_ = fVar34;
        auVar18._8_4_ = fVar34;
        auVar18._12_4_ = fVar34;
        auVar27._0_4_ = fVar21 + fVar41 + fVar34;
        auVar27._4_4_ = fVar21 + fVar41 + fVar34;
        auVar27._8_4_ = fVar21 + fVar41 + fVar34;
        auVar27._12_4_ = fVar21 + fVar41 + fVar34;
        if (auVar27._0_4_ == 0.0) {
          _local_3b8 = ZEXT816(0);
        }
        else {
          auVar24 = sqrtps(auVar18,auVar27);
          auVar43._8_4_ = fStack_f0;
          auVar43._0_8_ = local_f8;
          auVar43._12_4_ = fStack_ec;
          _local_3b8 = divps(auVar43,auVar24);
        }
        fVar41 = local_368 - fVar1;
        fVar36 = fStack_364 - fVar2;
        fVar40 = fStack_360 - fVar3;
        fVar21 = (float)local_3d8 * fVar41;
        fVar34 = local_3d8._4_4_ * fVar36;
        fVar35 = (float)uStack_3d0 * fVar40;
        auVar32._0_4_ = fVar41 - (float)local_3d8 * (fVar35 + fVar34 + fVar21);
        auVar32._4_4_ = fVar36 - local_3d8._4_4_ * (fVar35 + fVar34 + fVar21);
        auVar32._8_4_ = fVar40 - (float)uStack_3d0 * (fVar35 + fVar34 + fVar21);
        auVar32._12_4_ = (fStack_35c - fVar4) - uStack_3d0._4_4_ * (fVar35 + fVar34 + fVar21);
        fVar21 = auVar32._0_4_ * auVar32._0_4_;
        fVar34 = auVar32._4_4_ * auVar32._4_4_;
        fVar35 = auVar32._8_4_ * auVar32._8_4_;
        auVar19._4_4_ = fVar21;
        auVar19._0_4_ = fVar21;
        auVar19._8_4_ = fVar21;
        auVar19._12_4_ = fVar21;
        auVar28._0_4_ = fVar35 + fVar34 + fVar21;
        auVar28._4_4_ = fVar35 + fVar34 + fVar21;
        auVar28._8_4_ = fVar35 + fVar34 + fVar21;
        auVar28._12_4_ = fVar35 + fVar34 + fVar21;
        if (auVar28._0_4_ == 0.0) {
          local_3a8 = ZEXT816(0);
        }
        else {
          auVar24 = sqrtps(auVar19,auVar28);
          local_3a8 = divps(auVar32,auVar24);
        }
        fVar21 = (float)local_3d8 * local_398 + (0.0 - fVar57) * local_3a8._0_4_;
        fVar34 = local_3d8._4_4_ * fStack_394 + (0.0 - fVar57) * local_3a8._4_4_;
        fVar35 = (float)uStack_3d0 * fStack_390 + (0.0 - fVar57) * local_3a8._8_4_;
        fVar57 = uStack_3d0._4_4_ * fStack_38c + (0.0 - fVar57) * local_3a8._12_4_;
        fVar22 = fVar22 * fVar22;
        uStack_e4 = local_e8;
        uStack_e0 = local_e8;
        uStack_dc = local_e8;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          fVar42 = (fStack_35c - fVar4) * fRam000000014c6dad9c;
          fVar47 = fVar1 + fVar41 * _DAT_14c6dad90;
          fVar36 = fVar2 + fVar36 * fRam000000014c6dad94;
          fVar40 = fVar3 + fVar40 * fRam000000014c6dad98;
          local_258 = -local_3b8._0_4_;
          fStack_254 = -local_3b8._4_4_;
          fStack_250 = -local_3b8._8_4_;
          fVar55 = (fVar55 - fVar8) * fRam000000014c6dad9c;
          fVar41 = fVar5 + (fVar44 - fVar5) * _DAT_14c6dad90;
          fVar44 = fVar6 + (fVar46 - fVar6) * fRam000000014c6dad94;
          fVar46 = fVar7 + (fVar45 - fVar7) * fRam000000014c6dad98;
          fVar22 = 0.0 - (local_3b8._8_4_ * fVar46 +
                         local_3b8._4_4_ * fVar44 + local_3b8._0_4_ * fVar41);
          fStack_24c = (0.0 - (fStack_250 * fVar40 + fStack_254 * fVar36 + local_258 * fVar47)) -
                       fRam000000014c6dacac;
          local_248._0_12_ = local_3b8._0_12_;
          local_248._12_4_ = fVar22 - fRam000000014c6dacac;
          FUN_145068400(&local_408,fVar22 - _DAT_14c6daca0);
          FUN_145068400(&local_3e8);
          local_220 = local_2a8 + (longlong)local_2a0 * 4;
          local_228 = local_2a8;
          local_1c8 = *(undefined8 *)(param_1 + 0x68);
          local_218 = CONCAT44(fVar36,fVar47);
          uStack_210 = CONCAT44(fVar4 + fVar42,fVar40);
          local_208 = CONCAT44(fVar44,fVar41);
          uStack_200 = CONCAT44(fVar8 + fVar55,fVar46);
          local_1e8 = local_3a8._0_8_;
          uStack_1e0 = local_3a8._8_8_;
          local_1d8 = (float)local_3d8;
          uStack_1d4 = local_3d8._4_4_;
          uStack_1d0 = (float)uStack_3d0;
          uStack_1cc = uStack_3d0._4_4_;
          local_1f8 = fVar21;
          fStack_1f4 = fVar34;
          fStack_1f0 = fVar35;
          fStack_1ec = fVar57;
          FUN_145063550(param_2[4],&local_228,&local_408,&local_3e8);
          FUN_145068400(&local_3f8);
          iVar10 = iVar15;
          if (0 < local_400) {
            do {
              lVar13 = FUN_1450686a0(&local_408,iVar10);
              uVar11 = FUN_145063c30(param_2[4],*(undefined4 *)(lVar13 + 0x10));
              cVar9 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))
                                (*(longlong **)(param_1 + 0x68),uVar11);
              if (cVar9 != '\0') {
                FUN_1450686c0(&local_3f8,lVar13);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < local_400);
          }
          FUN_145068920(&local_3c8,&local_3f8);
          local_3f0 = 0;
          if ((-1 < (int)local_3ec) && (local_3f8 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_3f8,(ulonglong)(local_3ec & 0x7fffffff) * 0x14);
          }
          local_3f8 = 0;
          local_3ec = 0x80000000;
          local_3e0 = 0;
          if ((-1 < (int)local_3dc) && (local_3e8 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_3e8,(ulonglong)(local_3dc & 0x7fffffff) * 0x14);
          }
          local_3e8 = 0;
          local_3dc = 0x80000000;
          local_400 = 0;
          fVar22 = local_378;
          if ((-1 < (int)local_3fc) && (local_408 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_408,(ulonglong)(local_3fc & 0x7fffffff) * 0x14);
            fVar22 = local_378;
          }
        }
        if (0 < local_3c0) {
          do {
            fVar36 = fStack_35c;
            fVar55 = fStack_360;
            fVar45 = fStack_364;
            fVar46 = local_368;
            pfVar14 = (float *)FUN_1450686a0(&local_3c8,iVar15);
            fVar41 = *pfVar14;
            fVar44 = pfVar14[1];
            fStack_390 = pfVar14[2];
            fStack_38c = pfVar14[3];
            local_388 = pfVar14[4];
            fVar40 = fVar41 * (fVar5 - fVar1) + fVar1;
            fVar42 = fVar41 * (fVar6 - fVar2) + fVar2;
            fVar47 = fVar41 * (fVar7 - fVar3) + fVar3;
            fVar51 = fVar41 * (fVar8 - fVar4) + fVar4;
            fVar52 = fVar44 * (fVar5 - fVar1) + fVar1;
            fVar53 = fVar44 * (fVar6 - fVar2) + fVar2;
            fVar54 = fVar44 * (fVar7 - fVar3) + fVar3;
            fVar56 = fVar44 * (fVar8 - fVar4) + fVar4;
            local_398 = fVar41;
            fStack_394 = fVar44;
            if (fVar22 <= (fVar47 - fVar54) * (fVar47 - fVar54) +
                          (fVar42 - fVar53) * (fVar42 - fVar53) +
                          (fVar40 - fVar52) * (fVar40 - fVar52)) {
              fVar46 = fVar41 * local_2d8 + fVar46;
              fVar45 = fVar41 * fStack_2d4 + fVar45;
              fVar55 = fVar41 * fStack_2d0 + fVar55;
              fVar22 = fVar44 * local_2d8 + local_368;
              fVar48 = fVar44 * fStack_2d4 + fStack_364;
              fVar49 = fVar44 * fStack_2d0 + fStack_360;
              local_2b8 = (fVar46 - fVar40) * _DAT_14c6dad90 + fVar40;
              fStack_2b4 = (fVar45 - fVar42) * fRam000000014c6dad94 + fVar42;
              fStack_2b0 = (fVar55 - fVar47) * fRam000000014c6dad98 + fVar47;
              fStack_2ac = ((fVar41 * fStack_2cc + fVar36) - fVar51) * fRam000000014c6dad9c + fVar51
              ;
              local_398 = fVar52 + (fVar22 - fVar52) * _DAT_14c6dad90;
              fStack_394 = fVar53 + (fVar48 - fVar53) * fRam000000014c6dad94;
              fStack_390 = fVar54 + (fVar49 - fVar54) * fRam000000014c6dad98;
              fStack_38c = fVar56 + ((fVar44 * fStack_2cc + fStack_35c) - fVar56) *
                                    fRam000000014c6dad9c;
              FUN_144c501d0(&local_1b8);
              local_188 = param_3[0x12];
              local_184 = param_3[0x13];
              local_180 = (uint)param_3[0x10] & 0x3fffff;
              local_17c = (uint)param_3[0x11] & 0x3fffff;
              local_134 = 1;
              local_136 = 0;
              local_138 = (undefined2)((uint)(*(float *)(param_1 + 0x28) * 1.0039062) >> 0x10);
              local_1b8 = fVar40;
              fStack_1b4 = fVar52;
              fStack_1b0 = fVar22;
              fStack_1ac = fVar46;
              local_1a8 = fVar42;
              fStack_1a4 = fVar53;
              fStack_1a0 = fVar48;
              fStack_19c = fVar45;
              local_198 = fVar47;
              fStack_194 = fVar54;
              fStack_190 = fVar49;
              fStack_18c = fVar55;
              FUN_145070c40(param_4,&local_3e8,&local_1b8,1,*(undefined8 *)(param_1 + 0x20));
              local_2a8[0x10] = -(float)local_3b8._0_4_;
              local_2a8[0x11] = -(float)local_3b8._4_4_;
              local_2a8[0x12] = -fStack_3b0;
              local_2a8[0x13] = fStack_3ac;
              fVar22 = local_2a8[0x10];
              fVar46 = local_2a8[0x11];
              fVar45 = local_2a8[0x12];
              local_2a8[0x10] = fVar22;
              local_2a8[0x11] = fVar46;
              local_2a8[0x12] = fVar45;
              local_2a8[0x13] =
                   0.0 - (fVar45 * fStack_2b0 + fVar46 * fStack_2b4 + fVar22 * local_2b8);
              local_2a8[0x14] = (float)local_3b8._0_4_;
              local_2a8[0x15] = (float)local_3b8._4_4_;
              local_2a8[0x16] = fStack_3b0;
              local_2a8[0x17] = fStack_3ac;
              auVar24 = *(undefined1 (*) [16])(local_2a8 + 0x14);
              auVar33._0_12_ = auVar24._0_12_;
              auVar33._12_4_ =
                   0.0 - (fStack_390 * auVar24._8_4_ +
                         fStack_394 * auVar24._4_4_ + local_398 * auVar24._0_4_);
              *(undefined1 (*) [16])(local_2a8 + 0x14) = auVar33;
              local_2a8[0x10] = local_2a8[0x10];
              local_2a8[0x11] = local_2a8[0x11];
              local_2a8[0x12] = local_2a8[0x12];
              local_2a8[0x13] = local_2a8[0x13] - fRam000000014c6dacac;
              fVar22 = local_2a8[0x17];
              local_2a8[0x14] = local_2a8[0x14];
              local_2a8[0x15] = local_2a8[0x15];
              local_2a8[0x16] = local_2a8[0x16];
              local_2a8[0x17] = fVar22 - fRam000000014c6dacac;
              FUN_145068400(&local_3f8,fVar22 - _DAT_14c6daca0);
              FUN_145068400(&local_408);
              local_218 = CONCAT44(fStack_2b4,local_2b8);
              uStack_210 = CONCAT44(fStack_2ac,fStack_2b0);
              local_208 = CONCAT44(fStack_394,local_398);
              uStack_200 = CONCAT44(fStack_38c,fStack_390);
              local_220 = local_2a8 + (longlong)local_2a0 * 4;
              local_228 = local_2a8;
              local_1c8 = *(undefined8 *)(param_1 + 0x60);
              local_1e8 = local_3a8._0_8_;
              uStack_1e0 = local_3a8._8_8_;
              local_1d8 = (float)local_3d8;
              uStack_1d4 = local_3d8._4_4_;
              uStack_1d0 = (float)uStack_3d0;
              uStack_1cc = uStack_3d0._4_4_;
              local_1f8 = fVar21;
              fStack_1f4 = fVar34;
              fStack_1f0 = fVar35;
              fStack_1ec = fVar57;
              FUN_145063550(param_2[4],&local_228,&local_3f8,&local_408);
              auVar50._0_4_ = (fVar44 - fVar41) * (float)local_f8._0_4_;
              auVar50._4_4_ = (fVar44 - fVar41) * (float)local_f8._4_4_;
              auVar50._8_4_ = (fVar44 - fVar41) * fStack_f0;
              auVar50._12_4_ = (fVar44 - fVar41) * fStack_ec;
              local_238 = (fVar44 - fVar41) * local_108;
              fStack_234 = (fVar44 - fVar41) * fStack_104;
              fStack_230 = (fVar44 - fVar41) * fStack_100;
              fStack_22c = (fVar44 - fVar41) * fStack_fc;
              fVar22 = auVar50._0_4_ * auVar50._0_4_;
              fVar41 = auVar50._4_4_ * auVar50._4_4_;
              fVar44 = auVar50._8_4_ * auVar50._8_4_;
              auVar20._4_4_ = fVar22;
              auVar20._0_4_ = fVar22;
              auVar20._8_4_ = fVar22;
              auVar20._12_4_ = fVar22;
              auVar29._0_4_ = fVar44 + fVar41 + fVar22;
              auVar29._4_4_ = fVar44 + fVar41 + fVar22;
              auVar29._8_4_ = fVar44 + fVar41 + fVar22;
              auVar29._12_4_ = fVar44 + fVar41 + fVar22;
              if (auVar29._0_4_ == 0.0) {
                local_2c8 = ZEXT816(0);
              }
              else {
                auVar24 = sqrtps(auVar20,auVar29);
                local_2c8 = divps(auVar50,auVar24);
              }
              puVar58 = &local_3d8;
              FUN_14506fcb0(&local_3f8,&local_408,&local_238,local_3a8,puVar58,local_2c8,&local_e8);
              uVar59 = (ulonglong)puVar58 & 0xffffffffffffff00;
              FUN_145070bf0(&local_3e8,0,&local_3f8,1,uVar59);
              FUN_145070bf0(&local_3e8,1,&local_408,1,uVar59 & 0xffffffffffffff00);
              FUN_145070c20(&local_3e8,0,&local_2b8);
              FUN_145070c20(&local_3e8,1,&local_398);
              FUN_145070c20(&local_3e8,2,local_3a8);
              local_400 = 0;
              if ((-1 < (int)local_3fc) && (local_408 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_408,
                           (ulonglong)(local_3fc & 0x7fffffff) * 0x14);
              }
              local_408 = 0;
              local_3fc = 0x80000000;
              local_3f0 = 0;
              if ((-1 < (int)local_3ec) && (local_3f8 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_3f8,
                           (ulonglong)(local_3ec & 0x7fffffff) * 0x14);
              }
              local_3f8 = 0;
              local_3ec = 0x80000000;
              local_150 = 0;
              if ((-1 < (int)local_14c) && (local_158 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_158,(ulonglong)(local_14c & 0x7fffffff) << 2
                          );
              }
              local_158 = 0;
              local_14c = 0x80000000;
              local_170 = 0;
              fVar22 = local_378;
              if ((-1 < (int)local_16c) && (local_178 != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_178,(ulonglong)(local_16c & 0x7fffffff) << 2
                          );
                fVar22 = local_378;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < local_3c0);
        }
        local_2a0 = 0;
        if ((-1 < (int)local_29c) && (local_2a8 != (float *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_2a8,(ulonglong)(local_29c & 0x7fffffff) << 4);
        }
        local_2a8 = (float *)0x0;
        local_29c = 0x80000000;
      }
    }
  }
  local_340 = 0;
  if ((-1 < (int)local_33c) && (local_348 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_348,(ulonglong)(local_33c & 0x7fffffff) * 0x14);
  }
  local_348 = 0;
  local_33c = 0x80000000;
  local_330 = 0;
  if ((-1 < (int)local_32c) && (local_338 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_338,(ulonglong)(local_32c & 0x7fffffff) * 0x14);
  }
  local_338 = 0;
  local_32c = 0x80000000;
  local_320 = 0;
  if ((-1 < (int)local_31c) && (local_328 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_328,(ulonglong)(local_31c & 0x7fffffff) * 0x14);
  }
  local_328 = 0;
  local_31c = 0x80000000;
  local_310 = 0;
  if ((-1 < (int)local_30c) && (local_318 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_318,(ulonglong)(local_30c & 0x7fffffff) * 0x14);
  }
  local_318 = 0;
  local_3c0 = 0;
  local_30c = 0x80000000;
  if ((-1 < (int)local_3bc) && (local_3c8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_3c8,(ulonglong)(local_3bc & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 144d36610 FUN_144d36610 body=435 status=ok
// SIG undefined FUN_144d36610(void)

void FUN_144d36610(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 *local_50;
  
  fVar2 = (float)FUN_14506fd10(param_2);
  local_c4 = *(uint *)(param_1 + 0x34) ^ 0x80000000;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0x80000000;
  local_c8 = *(undefined4 *)(*param_2 + 0x18);
  local_c0 = *(uint *)(param_1 + 0x30) ^ 0x80000000;
  local_68 = *(undefined4 *)(param_1 + 0x18);
  local_bc = *(float *)(param_1 + 0x38) - fVar2 * 2.0;
  local_b8 = *(float *)(param_1 + 0x3c) - fVar2 * 2.0;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_68 = *(undefined4 *)(param_1 + 0x1c);
  local_b4 = *puVar1;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_b0 = *puVar1;
  local_a8 = *(undefined8 *)(param_1 + 0x48);
  local_ab = 1;
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_4;
  FUN_144f50de0(local_58,0,0x18,&LAB_144d36ce0,&LAB_144d36d00);
  if (local_50 != (undefined4 *)0x0) {
    *local_50 = (undefined4)local_88;
    local_50[1] = local_88._4_4_;
    local_50[2] = (undefined4)uStack_80;
    local_50[3] = uStack_80._4_4_;
    *(undefined8 *)(local_50 + 4) = local_78;
  }
  FUN_145070490(param_3,&local_c8,local_58);
  FUN_144f50d20(local_58);
  local_98 = 0;
  if ((-1 < (int)local_94) && (local_a0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 5);
  }
  return;
}



// FUNCTION 144d367d0 FUN_144d367d0 body=1292 status=ok
// SIG undefined FUN_144d367d0(void)

void FUN_144d367d0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_218;
  int local_210;
  uint local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float local_174;
  uint local_170;
  uint local_16c;
  longlong local_168;
  undefined4 local_160;
  uint local_15c;
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined2 local_128;
  undefined2 local_126;
  undefined1 local_124;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_e0 [184];
  
  lVar2 = *(longlong *)
           ((ulonglong)((uint)param_3[0x10] >> 0x16) * 0x120 + *(longlong *)(param_2[2] + 0x38));
  local_208 = *(undefined8 *)(lVar2 + 0xc0);
  uStack_200 = *(undefined8 *)(lVar2 + 200);
  local_108 = *(undefined4 *)(param_1 + 0x40);
  fVar1 = *(float *)(*param_2 + 0x18);
  uStack_104 = local_108;
  uStack_100 = local_108;
  uStack_fc = local_108;
  FUN_145068400(&local_218);
  fVar21 = param_3[0xc];
  fVar22 = param_3[0xd];
  fVar23 = param_3[0xe];
  fStack_1bc = param_3[0xf];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fStack_1ec = param_3[3];
  fVar30 = param_3[4];
  fVar31 = param_3[5];
  fVar32 = param_3[6];
  fStack_1dc = param_3[7];
  fVar6 = param_3[8];
  fVar7 = param_3[9];
  fVar8 = param_3[10];
  fStack_1cc = param_3[0xb];
  local_1f8 = fVar3;
  fStack_1f4 = fVar4;
  fStack_1f0 = fVar5;
  local_1e8 = fVar30;
  fStack_1e4 = fVar31;
  fStack_1e0 = fVar32;
  local_1d8 = fVar6;
  fStack_1d4 = fVar7;
  fStack_1d0 = fVar8;
  local_1c8 = fVar21;
  fStack_1c4 = fVar22;
  fStack_1c0 = fVar23;
  local_1b8 = fVar21;
  fStack_1b4 = fVar22;
  fStack_1b0 = fVar23;
  fStack_1ac = fStack_1bc;
  iVar9 = FUN_14506f2c0(&local_1f8,&local_1e8,&local_208,param_2);
  iVar11 = 0;
  if ((iVar9 != 0) && (iVar9 = FUN_14506f2c0(&local_1c8,&local_1d8,&local_208,param_2), iVar9 != 0))
  {
    fVar17 = fStack_1f4 * local_208._4_4_ + local_1f8 * (float)local_208 +
             fStack_1f0 * (float)uStack_200;
    fVar18 = fStack_1e4 * local_208._4_4_ + local_1e8 * (float)local_208 +
             fStack_1e0 * (float)uStack_200;
    fVar19 = fStack_1d4 * local_208._4_4_ + local_1d8 * (float)local_208 +
             fStack_1d0 * (float)uStack_200;
    fVar20 = fStack_1c4 * local_208._4_4_ + local_1c8 * (float)local_208 +
             fStack_1c0 * (float)uStack_200;
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar17;
    auVar14._8_4_ = fVar17;
    auVar14._12_4_ = fVar17;
    auVar12._4_4_ = fVar19;
    auVar12._0_4_ = fVar19;
    auVar12._8_4_ = fVar19;
    auVar12._12_4_ = fVar19;
    auVar13._4_4_ = fVar20;
    auVar13._0_4_ = fVar20;
    auVar13._8_4_ = fVar20;
    auVar13._12_4_ = fVar20;
    auVar13 = maxps(auVar12,auVar13);
    auVar15._4_4_ = fVar18;
    auVar15._0_4_ = fVar18;
    auVar15._8_4_ = fVar18;
    auVar15._12_4_ = fVar18;
    auVar15 = minps(auVar14,auVar15);
    if (auVar13._0_4_ < auVar15._0_4_) {
      FUN_14506fb20(&local_1f8,&local_1e8,&local_208,local_res8,param_2);
      FUN_14506fb20(&local_1d8,&local_1c8,&local_208,local_res10,param_2);
      FUN_145068460(&local_218);
      local_118 = *(undefined4 *)(param_1 + 0x44);
      uStack_114 = local_118;
      uStack_110 = local_118;
      uStack_10c = local_118;
      FUN_14506f340(&local_1c8,&local_1d8,&local_1e8,&local_1f8,&local_208,&local_108,&local_118,
                    param_2,&local_218,*(undefined8 *)(param_1 + 0x50));
      FUN_145069610(&local_218);
      FUN_14506fc60(&local_218);
      if ((local_210 != 0) && (0 < local_210)) {
        fVar30 = fVar30 - fVar3;
        fVar31 = fVar31 - fVar4;
        fVar32 = fVar32 - fVar5;
        do {
          pfVar10 = (float *)FUN_1450686a0(&local_218,iVar11);
          fVar17 = *pfVar10;
          fVar18 = pfVar10[1];
          fVar24 = fVar3 + fVar30 * fVar17;
          fVar25 = fVar4 + fVar31 * fVar17;
          fVar26 = fVar5 + fVar32 * fVar17;
          fVar27 = fVar3 + fVar30 * fVar18;
          fVar28 = fVar4 + fVar31 * fVar18;
          fVar29 = fVar5 + fVar32 * fVar18;
          fVar19 = fVar24 - fVar27;
          fVar20 = fVar25 - fVar28;
          fVar16 = fVar26 - fVar29;
          if (fVar1 * fVar1 <= fVar16 * fVar16 + fVar20 * fVar20 + fVar19 * fVar19) {
            FUN_144c501d0(&local_1a8);
            local_178 = param_3[0x12];
            local_174 = param_3[0x13];
            local_170 = (uint)param_3[0x10] & 0x3fffff;
            local_16c = (uint)param_3[0x11] & 0x3fffff;
            local_124 = 1;
            local_126 = 0;
            local_128 = (undefined2)((uint)(*(float *)(param_1 + 0x28) * 1.0039062) >> 0x10);
            local_1a8 = fVar24;
            fStack_1a4 = fVar27;
            fStack_1a0 = fVar6 + fVar18 * (fVar21 - fVar6);
            fStack_19c = fVar6 + fVar17 * (fVar21 - fVar6);
            local_198 = fVar25;
            fStack_194 = fVar28;
            fStack_190 = fVar7 + fVar18 * (fVar22 - fVar7);
            fStack_18c = fVar7 + fVar17 * (fVar22 - fVar7);
            local_188 = fVar26;
            fStack_184 = fVar29;
            fStack_180 = fVar8 + fVar18 * (fVar23 - fVar8);
            fStack_17c = fVar8 + fVar17 * (fVar23 - fVar8);
            FUN_145070c40(param_4,local_e0,&local_1a8,4,*(undefined8 *)(param_1 + 0x20));
            local_140 = 0;
            if ((-1 < (int)local_13c) && (local_148 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_148,(ulonglong)(local_13c & 0x7fffffff) << 2);
            }
            local_148 = 0;
            local_13c = 0x80000000;
            local_160 = 0;
            fVar21 = local_1b8;
            fVar22 = fStack_1b4;
            fVar23 = fStack_1b0;
            if ((-1 < (int)local_15c) && (local_168 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_168,(ulonglong)(local_15c & 0x7fffffff) << 2);
              fVar21 = local_1b8;
              fVar22 = fStack_1b4;
              fVar23 = fStack_1b0;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_210);
      }
    }
  }
  local_210 = 0;
  if ((-1 < (int)local_20c) && (local_218 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_218,(ulonglong)(local_20c & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 144d36d20 FUN_144d36d20 body=414 status=ok
// SIG undefined FUN_144d36d20(void)

void FUN_144d36d20(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 *local_50;
  
  local_c0 = *(uint *)(param_1 + 0x3c);
  local_c4 = local_c0 ^ 0x80000000;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0x80000000;
  local_c8 = *(undefined4 *)(*param_2 + 0x18);
  local_bc = *(float *)(param_2 + 1) * 2.0;
  fVar2 = (float)FUN_14506fd10(param_2);
  local_b8 = *(float *)(param_1 + 0x30) - fVar2 * 2.0;
  local_68 = *(undefined4 *)(param_1 + 0x18);
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_68 = *(undefined4 *)(param_1 + 0x1c);
  local_b4 = *puVar1;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_b0 = *puVar1;
  local_a8 = *(undefined8 *)(param_1 + 0x40);
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_4;
  FUN_144f50de0(local_58,0,0x18,&LAB_144d37610,&LAB_144d37630);
  if (local_50 != (undefined4 *)0x0) {
    *local_50 = (undefined4)local_88;
    local_50[1] = local_88._4_4_;
    local_50[2] = (undefined4)uStack_80;
    local_50[3] = uStack_80._4_4_;
    *(undefined8 *)(local_50 + 4) = local_78;
  }
  FUN_145070490(param_3,&local_c8,local_58);
  FUN_144f50d20(local_58);
  local_98 = 0;
  if ((-1 < (int)local_94) && (local_a0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 5);
  }
  return;
}



// FUNCTION 144d36ec0 FUN_144d36ec0 body=1872 status=ok
// SIG undefined FUN_144d36ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d36ec0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
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
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 uVar30;
  ulonglong uVar31;
  longlong local_2e8;
  int local_2e0;
  uint local_2dc;
  longlong local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  longlong local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  longlong local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [16];
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d4;
  uint local_1d0;
  uint local_1cc;
  longlong local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  longlong local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined2 local_188;
  undefined2 local_186;
  undefined1 local_184;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uVar32;
  
  lVar2 = *(longlong *)
           ((ulonglong)((uint)param_3[0x10] >> 0x16) * 0x120 + *(longlong *)(param_2[2] + 0x38));
  local_2b8 = *(float *)(lVar2 + 0xc0);
  fStack_2b4 = *(float *)(lVar2 + 0xc4);
  fStack_2b0 = *(float *)(lVar2 + 200);
  fStack_2ac = *(float *)(lVar2 + 0xcc);
  FUN_145068400(&local_2a8);
  FUN_145068400(&local_2d8);
  FUN_145068400(&local_2e8);
  FUN_145068400(&local_2c8);
  fVar14 = -*(float *)(param_1 + 0x34);
  fVar18 = param_3[8];
  fVar19 = param_3[9];
  fVar20 = param_3[10];
  fStack_28c = param_3[0xb];
  local_278 = param_3[0xc];
  fStack_274 = param_3[0xd];
  fStack_270 = param_3[0xe];
  fStack_26c = param_3[0xf];
  local_178 = *(undefined4 *)(param_1 + 0x38);
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fStack_27c = param_3[3];
  fVar27 = param_3[4];
  fVar28 = param_3[5];
  fVar29 = param_3[6];
  fStack_25c = param_3[7];
  fVar1 = *(float *)(*param_2 + 0x18);
  fVar15 = fVar14 * local_2b8;
  fVar16 = fVar14 * fStack_2b4;
  fVar17 = fVar14 * fStack_2b0;
  fVar14 = fVar14 * fStack_2ac;
  local_298 = fVar18;
  fStack_294 = fVar19;
  fStack_290 = fVar20;
  local_288 = fVar3;
  fStack_284 = fVar4;
  fStack_280 = fVar5;
  local_268 = fVar27;
  fStack_264 = fVar28;
  fStack_260 = fVar29;
  local_228 = fVar18;
  fStack_224 = fVar19;
  fStack_220 = fVar20;
  fStack_21c = fStack_28c;
  uStack_174 = local_178;
  uStack_170 = local_178;
  uStack_16c = local_178;
  local_168 = local_278;
  fStack_164 = fStack_274;
  fStack_160 = fStack_270;
  fStack_15c = fStack_26c;
  iVar8 = FUN_14506f2c0(&local_288,&local_268,&local_2b8,param_2);
  iVar10 = 0;
  if ((iVar8 != 0) && (iVar8 = FUN_14506f2c0(&local_298,&local_278,&local_2b8,param_2), iVar8 != 0))
  {
    FUN_14506f980(&local_288,&local_268,&local_278,&local_298,&local_2b8);
    FUN_14506fb20(&local_288,&local_268,&local_2b8,local_res8,param_2);
    FUN_14506fb20(&local_298,&local_278,&local_2b8,local_res10,param_2);
    local_138 = CONCAT44(fStack_284,local_288);
    uStack_130 = CONCAT44(fStack_27c,fStack_280);
    local_128 = CONCAT44(fStack_264,local_268);
    uStack_120 = CONCAT44(fStack_25c,fStack_260);
    local_f8 = *(undefined8 *)(param_1 + 0x48);
    local_118 = local_298;
    fStack_114 = fStack_294;
    fStack_110 = fStack_290;
    fStack_10c = fStack_28c;
    local_108 = local_278;
    fStack_104 = fStack_274;
    fStack_100 = fStack_270;
    fStack_fc = fStack_26c;
    local_f0 = 0;
    local_e8 = 0;
    local_d8 = fVar15;
    fStack_d4 = fVar16;
    fStack_d0 = fVar17;
    fStack_cc = fVar14;
    FUN_1450630f0(param_2[4],&local_138,&local_2a8);
    iVar8 = FUN_145069320(&local_2a8,0,0x3f800000);
    if (iVar8 == 0) {
      FUN_14506a150(&local_2a8);
      FUN_14506e490(&local_288,&local_268,&local_298,&local_278,&local_2b8,&local_178,&local_2d8,
                    param_2,*(undefined8 *)(param_1 + 0x48));
      FUN_145068580(&local_2d8,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
      FUN_145068920(&local_2d8,&local_2a8);
      FUN_145069e40(&local_2e8,&local_2d8);
      FUN_14506a150(&local_2e8);
      FUN_14506fc60(&local_2e8,local_res8[0]);
      local_158 = (local_278 - local_268) * _DAT_14c6dad90 + local_268;
      fStack_154 = (fStack_274 - fStack_264) * fRam000000014c6dad94 + fStack_264;
      fStack_150 = (fStack_270 - fStack_260) * fRam000000014c6dad98 + fStack_260;
      fStack_14c = (fStack_26c - fStack_25c) * fRam000000014c6dad9c + fStack_25c;
      fVar14 = (local_298 - local_288) * _DAT_14c6dad90 + local_288;
      fVar15 = (fStack_294 - fStack_284) * fRam000000014c6dad94 + fStack_284;
      fVar16 = (fStack_290 - fStack_280) * fRam000000014c6dad98 + fStack_280;
      fVar17 = (fStack_28c - fStack_27c) * fRam000000014c6dad9c + fStack_27c;
      if (0 < local_2e0) {
        fVar27 = fVar27 - fVar3;
        fVar28 = fVar28 - fVar4;
        fVar29 = fVar29 - fVar5;
        do {
          FUN_145068460(&local_2c8);
          pfVar9 = (float *)FUN_1450686a0(&local_2e8,iVar10);
          fVar6 = *pfVar9;
          fVar7 = pfVar9[1];
          fStack_240 = pfVar9[2];
          fStack_23c = pfVar9[3];
          local_238 = pfVar9[4];
          fVar21 = fVar3 + fVar6 * fVar27;
          fVar22 = fVar4 + fVar6 * fVar28;
          fVar23 = fVar5 + fVar6 * fVar29;
          fVar24 = fVar3 + fVar27 * fVar7;
          fVar25 = fVar4 + fVar28 * fVar7;
          fVar26 = fVar5 + fVar29 * fVar7;
          fVar11 = fVar21 - fVar24;
          fVar12 = fVar22 - fVar25;
          fVar13 = fVar23 - fVar26;
          local_248 = fVar6;
          fStack_244 = fVar7;
          if (fVar1 * fVar1 <= fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11) {
            fVar11 = local_168 - fVar18;
            fVar12 = fStack_164 - fVar19;
            fVar13 = fStack_160 - fVar20;
            local_218 = fVar14 + (local_158 - fVar14) * fVar6;
            fStack_214 = fVar15 + (fStack_154 - fVar15) * fVar6;
            fStack_210 = fVar16 + (fStack_150 - fVar16) * fVar6;
            fStack_20c = fVar17 + (fStack_14c - fVar17) * fVar6;
            local_248 = fVar14 + (local_158 - fVar14) * fVar7;
            fStack_244 = fVar15 + (fStack_154 - fVar15) * fVar7;
            fStack_240 = fVar16 + (fStack_150 - fVar16) * fVar7;
            fStack_23c = fVar17 + (fStack_14c - fVar17) * fVar7;
            FUN_144c501d0(&local_208);
            local_1d8 = param_3[0x12];
            local_1d4 = param_3[0x13];
            local_1d0 = (uint)param_3[0x10] & 0x3fffff;
            local_1cc = (uint)param_3[0x11] & 0x3fffff;
            local_184 = 1;
            local_186 = 0;
            local_188 = (undefined2)((uint)(*(float *)(param_1 + 0x28) * 1.0039062) >> 0x10);
            uVar30 = *(undefined8 *)(param_1 + 0x20);
            local_208 = fVar21;
            fStack_204 = fVar24;
            fStack_200 = fVar18 + fVar11 * fVar7;
            fStack_1fc = fVar18 + fVar11 * fVar6;
            local_1f8 = fVar22;
            fStack_1f4 = fVar25;
            fStack_1f0 = fVar19 + fVar12 * fVar7;
            fStack_1ec = fVar19 + fVar12 * fVar6;
            local_1e8 = fVar23;
            fStack_1e4 = fVar26;
            fStack_1e0 = fVar20 + fVar13 * fVar7;
            fStack_1dc = fVar20 + fVar13 * fVar6;
            FUN_145070c40(param_4,local_258,&local_208,3,uVar30);
            uVar32 = (undefined4)((ulonglong)uVar30 >> 0x20);
            FUN_145069eb0(&local_2c8,&local_2d8,fVar6);
            uVar31 = CONCAT44(uVar32,0x3f800000);
            FUN_145069850(&local_2c8,fVar6,fVar7,0,uVar31);
            FUN_145070bf0(local_258,0,&local_2c8,1,uVar31 & 0xffffffffffffff00);
            FUN_14506fab0(&local_218,&local_248,local_148);
            FUN_145070c20(local_258,0,&local_218);
            FUN_145070c20(local_258,1,&local_248);
            FUN_145070c20(local_258,2,local_148);
            local_1a0 = 0;
            if ((-1 < (int)local_19c) && (local_1a8 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_1a8,(ulonglong)(local_19c & 0x7fffffff) << 2);
            }
            local_1a8 = 0;
            local_19c = 0x80000000;
            local_1c0 = 0;
            fVar18 = local_228;
            fVar19 = fStack_224;
            fVar20 = fStack_220;
            if ((-1 < (int)local_1bc) && (local_1c8 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_1c8,(ulonglong)(local_1bc & 0x7fffffff) << 2);
              fVar18 = local_228;
              fVar19 = fStack_224;
              fVar20 = fStack_220;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_2e0);
      }
    }
  }
  local_2c0 = 0;
  if ((-1 < (int)local_2bc) && (local_2c8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2c8,(ulonglong)(local_2bc & 0x7fffffff) * 0x14);
  }
  local_2c8 = 0;
  local_2bc = 0x80000000;
  local_2e0 = 0;
  if ((-1 < (int)local_2dc) && (local_2e8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2e8,(ulonglong)(local_2dc & 0x7fffffff) * 0x14);
  }
  local_2e8 = 0;
  local_2dc = 0x80000000;
  local_2d0 = 0;
  if ((-1 < (int)local_2cc) && (local_2d8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2d8,(ulonglong)(local_2cc & 0x7fffffff) * 0x14);
  }
  local_2d8 = 0;
  local_2a0 = 0;
  local_2cc = 0x80000000;
  if ((-1 < (int)local_29c) && (local_2a8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2a8,(ulonglong)(local_29c & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 144d37650 FUN_144d37650 body=428 status=ok
// SIG undefined FUN_144d37650(void)

void FUN_144d37650(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 *local_50;
  
  local_c4 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0x80000000;
  local_c8 = *(undefined4 *)(*param_2 + 0x18);
  local_c0 = *(undefined4 *)(param_1 + 0x38);
  fVar2 = (float)FUN_14506fd10(param_2);
  local_bc = *(float *)(param_1 + 0x30) - fVar2 * 2.0;
  fVar2 = (float)FUN_14506fd10(param_2);
  local_b8 = *(float *)(param_1 + 0x34) - fVar2 * 2.0;
  local_68 = *(undefined4 *)(param_1 + 0x18);
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_68 = *(undefined4 *)(param_1 + 0x1c);
  local_b4 = *puVar1;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_b0 = *puVar1;
  local_a8 = *(undefined8 *)(param_1 + 0x48);
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_4;
  FUN_144f50de0(local_58,0,0x18,&LAB_144d37f10,&LAB_144d37f30);
  if (local_50 != (undefined4 *)0x0) {
    *local_50 = (undefined4)local_88;
    local_50[1] = local_88._4_4_;
    local_50[2] = (undefined4)uStack_80;
    local_50[3] = uStack_80._4_4_;
    *(undefined8 *)(local_50 + 4) = local_78;
  }
  FUN_145070490(param_3,&local_c8,local_58);
  FUN_144f50d20(local_58);
  local_98 = 0;
  if ((-1 < (int)local_94) && (local_a0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 5);
  }
  return;
}



// FUNCTION 144d37800 FUN_144d37800 body=1797 status=ok
// SIG undefined FUN_144d37800(void)

void FUN_144d37800(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_208;
  int local_200;
  uint local_1fc;
  longlong local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  undefined2 local_128;
  undefined2 local_126;
  undefined1 local_124;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  local_118 = *(float *)(param_3 + 4);
  fStack_114 = *(float *)((longlong)param_3 + 0x24);
  fStack_110 = *(float *)(param_3 + 5);
  fStack_10c = *(float *)((longlong)param_3 + 0x2c);
  local_108 = *(float *)(param_3 + 6);
  fStack_104 = *(float *)((longlong)param_3 + 0x34);
  fStack_100 = *(float *)(param_3 + 7);
  fStack_fc = *(float *)((longlong)param_3 + 0x3c);
  fVar14 = *(float *)(param_1 + 0x40);
  fVar24 = *(float *)(param_3 + 2);
  fVar25 = *(float *)((longlong)param_3 + 0x14);
  fVar26 = *(float *)(param_3 + 3);
  fStack_1ac = *(float *)((longlong)param_3 + 0x1c);
  lVar1 = *(longlong *)
           ((ulonglong)(*(uint *)(param_3 + 8) >> 0x16) * 0x120 + *(longlong *)(param_2[2] + 0x38));
  local_1d8 = *(undefined8 *)(lVar1 + 0xc0);
  uStack_1d0 = *(undefined8 *)(lVar1 + 200);
  lVar1 = *param_2;
  fVar22 = *(float *)(lVar1 + 0x20);
  fVar7 = *(float *)(lVar1 + 0x20) * 0.9;
  fVar12 = *(float *)(lVar1 + 0x24);
  local_1c8 = *param_3;
  uStack_1c0 = param_3[1];
  local_res8[0] = fVar7;
  local_1b8 = fVar24;
  fStack_1b4 = fVar25;
  fStack_1b0 = fVar26;
  local_f8 = local_1c8;
  uStack_f0 = uStack_1c0;
  local_e8 = local_108;
  fStack_e4 = fStack_104;
  fStack_e0 = fStack_100;
  fStack_dc = fStack_fc;
  local_d8 = local_118;
  fStack_d4 = fStack_114;
  fStack_d0 = fStack_110;
  fStack_cc = fStack_10c;
  iVar5 = FUN_14506f2c0(&local_1c8,&local_1b8,&local_1d8,param_2);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = FUN_14506f2c0(&local_108,&local_118,&local_1d8,param_2);
  if (iVar5 == 0) {
    return;
  }
  FUN_14506fb20(&local_1c8,&local_1b8,&local_1d8,local_res8,param_2);
  FUN_14506fb20(&local_118,&local_108,&local_1d8,local_res10,param_2);
  fVar15 = fVar14 * (float)local_1d8;
  fVar17 = fVar14 * local_1d8._4_4_;
  fVar19 = fVar14 * (float)uStack_1d0;
  fVar21 = fVar14 * uStack_1d0._4_4_;
  auVar10 = ZEXT816(0);
  fVar27 = (float)local_1c8 + fVar15;
  fVar28 = local_1c8._4_4_ + fVar17;
  fVar29 = (float)uStack_1c0 + fVar19;
  fVar30 = uStack_1c0._4_4_ + fVar21;
  fVar31 = local_1b8 + fVar15;
  fVar32 = fStack_1b4 + fVar17;
  fVar33 = fStack_1b0 + fVar19;
  fVar34 = fStack_1ac + fVar21;
  fVar35 = local_118 + fVar15;
  fVar36 = fStack_114 + fVar17;
  fVar37 = fStack_110 + fVar19;
  fVar38 = fStack_10c + fVar21;
  fVar15 = local_108 + fVar15;
  fVar17 = fStack_104 + fVar17;
  fVar19 = fStack_100 + fVar19;
  fVar21 = fStack_fc + fVar21;
  fVar16 = (0.0 - fVar22) * (float)local_1d8;
  fVar18 = (0.0 - fVar22) * local_1d8._4_4_;
  fVar20 = (0.0 - fVar22) * (float)uStack_1d0;
  fVar22 = (0.0 - fVar22) * uStack_1d0._4_4_;
  FUN_145068400(&local_208);
  local_168 = *(longlong *)(param_1 + 0x50);
  iVar5 = 0;
  local_160 = 0;
  local_158 = 0;
  local_148 = CONCAT44(fVar18,fVar16);
  local_1a8 = fVar27;
  fStack_1a4 = fVar28;
  fStack_1a0 = fVar29;
  fStack_19c = fVar30;
  local_198 = fVar31;
  fStack_194 = fVar32;
  fStack_190 = fVar33;
  fStack_18c = fVar34;
  local_188 = fVar35;
  fStack_184 = fVar36;
  fStack_180 = fVar37;
  fStack_17c = fVar38;
  local_178 = fVar15;
  fStack_174 = fVar17;
  fStack_170 = fVar19;
  fStack_16c = fVar21;
  fStack_140 = fVar20;
  fStack_13c = fVar22;
  FUN_1450630f0(param_2[4],&local_1a8,&local_208);
  FUN_145069380(&local_208,0,0x3f800000);
  if (local_200 == 0) goto LAB_144d37e6d;
  if (fVar7 < fVar14) {
    FUN_145068400(&local_1f8);
    local_198 = local_1b8 + fVar7 * (float)local_1d8;
    fStack_194 = fStack_1b4 + fVar7 * local_1d8._4_4_;
    fStack_190 = fStack_1b0 + fVar7 * (float)uStack_1d0;
    fStack_18c = fStack_1ac + fVar7 * uStack_1d0._4_4_;
    local_1a8 = fVar7 * (float)local_1d8 + (float)local_1c8;
    fStack_1a4 = fVar7 * local_1d8._4_4_ + local_1c8._4_4_;
    fStack_1a0 = fVar7 * (float)uStack_1d0 + (float)uStack_1c0;
    fStack_19c = fVar7 * uStack_1d0._4_4_ + uStack_1c0._4_4_;
    fVar18 = (fStack_1b4 - local_1c8._4_4_) * (float)local_1d8 -
             (local_1b8 - (float)local_1c8) * local_1d8._4_4_;
    fVar14 = (fStack_1b0 - (float)uStack_1c0) * local_1d8._4_4_ -
             (fStack_1b4 - local_1c8._4_4_) * (float)uStack_1d0;
    fVar16 = (local_1b8 - (float)local_1c8) * (float)uStack_1d0 -
             (fStack_1b0 - (float)uStack_1c0) * (float)local_1d8;
    auVar13._12_4_ =
         (fStack_1ac - uStack_1c0._4_4_) * uStack_1d0._4_4_ -
         (fStack_1ac - uStack_1c0._4_4_) * uStack_1d0._4_4_;
    auVar13._4_4_ = fVar16;
    auVar13._0_4_ = fVar14;
    auVar13._8_4_ = fVar18;
    fVar14 = fVar14 * fVar14;
    fVar16 = fVar16 * fVar16;
    fVar18 = fVar18 * fVar18;
    auVar8._4_4_ = fVar14;
    auVar8._0_4_ = fVar14;
    auVar8._8_4_ = fVar14;
    auVar8._12_4_ = fVar14;
    fVar22 = fVar18 + fVar16 + fVar14;
    if (fVar22 == 0.0) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar3._4_4_ = fVar18 + fVar16 + fVar14;
      auVar3._0_4_ = fVar22;
      auVar3._8_4_ = fVar18 + fVar16 + fVar14;
      auVar3._12_4_ = fVar18 + fVar16 + fVar14;
      auVar8 = sqrtps(auVar8,auVar3);
      auVar8 = divps(auVar13,auVar8);
    }
    local_168 = *(longlong *)(param_1 + 0x50);
    fStack_140 = auVar8._8_4_ * fVar12;
    fStack_13c = auVar8._12_4_ * fVar12;
    local_160 = 0;
    local_158 = 0;
    local_148 = CONCAT44(auVar8._4_4_ * fVar12,auVar8._0_4_ * fVar12);
    local_188 = fVar27;
    fStack_184 = fVar28;
    fStack_180 = fVar29;
    fStack_17c = fVar30;
    local_178 = fVar31;
    fStack_174 = fVar32;
    fStack_170 = fVar33;
    fStack_16c = fVar34;
    FUN_1450630f0(param_2[4],&local_1a8,&local_1f8);
    FUN_145068920(&local_208,&local_1f8);
    local_1f0 = 0;
    if ((-1 < (int)local_1ec) && (local_1f8 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_1f8,(ulonglong)(local_1ec & 0x7fffffff) * 0x14);
    }
    if (local_200 == 0) goto LAB_144d37e6d;
    FUN_145068400(&local_1f8);
    local_1a8 = local_118 + fVar7 * (float)local_1d8;
    fStack_1a4 = fStack_114 + fVar7 * local_1d8._4_4_;
    fStack_1a0 = fStack_110 + fVar7 * (float)uStack_1d0;
    fStack_19c = fStack_10c + fVar7 * uStack_1d0._4_4_;
    local_198 = local_108 + fVar7 * (float)local_1d8;
    fStack_194 = fStack_104 + fVar7 * local_1d8._4_4_;
    fStack_190 = fStack_100 + fVar7 * (float)uStack_1d0;
    fStack_18c = fStack_fc + fVar7 * uStack_1d0._4_4_;
    fVar18 = (local_108 - local_118) * local_1d8._4_4_ -
             (fStack_104 - fStack_114) * (float)local_1d8;
    fVar20 = (fStack_104 - fStack_114) * (float)uStack_1d0 -
             (fStack_100 - fStack_110) * local_1d8._4_4_;
    fVar27 = (fStack_100 - fStack_110) * (float)local_1d8 -
             (local_108 - local_118) * (float)uStack_1d0;
    fVar14 = fVar20 * fVar20;
    fVar7 = fVar27 * fVar27;
    fVar16 = fVar18 * fVar18;
    auVar9._4_4_ = fVar14;
    auVar9._0_4_ = fVar14;
    auVar9._8_4_ = fVar14;
    auVar9._12_4_ = fVar14;
    fVar22 = fVar16 + fVar7 + fVar14;
    if (fVar22 != 0.0) {
      auVar10._4_4_ = fVar16 + fVar7 + fVar14;
      auVar10._0_4_ = fVar22;
      auVar10._8_4_ = fVar16 + fVar7 + fVar14;
      auVar10._12_4_ = fVar16 + fVar7 + fVar14;
      auVar10 = sqrtps(auVar9,auVar10);
      auVar23._4_4_ = fVar27;
      auVar23._0_4_ = fVar20;
      auVar23._8_4_ = fVar18;
      auVar23._12_4_ =
           (fStack_fc - fStack_10c) * uStack_1d0._4_4_ - (fStack_fc - fStack_10c) * uStack_1d0._4_4_
      ;
      auVar10 = divps(auVar23,auVar10);
    }
    local_168 = *(longlong *)(param_1 + 0x50);
    fStack_140 = fVar12 * auVar10._8_4_;
    fStack_13c = fVar12 * auVar10._12_4_;
    local_160 = 0;
    local_158 = 0;
    local_148 = CONCAT44(fVar12 * auVar10._4_4_,fVar12 * auVar10._0_4_);
    local_188 = fVar35;
    fStack_184 = fVar36;
    fStack_180 = fVar37;
    fStack_17c = fVar38;
    local_178 = fVar15;
    fStack_174 = fVar17;
    fStack_170 = fVar19;
    fStack_16c = fVar21;
    FUN_1450630f0(param_2[4],&local_1a8,&local_1f8);
    FUN_145068920(&local_208,&local_1f8);
    local_1f0 = 0;
    if ((-1 < (int)local_1ec) && (local_1f8 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_1f8,(ulonglong)(local_1ec & 0x7fffffff) * 0x14);
    }
    if (local_200 == 0) goto LAB_144d37e6d;
  }
  fVar14 = *(float *)(*param_2 + 0x18);
  fVar22 = ((float)local_1c8 - local_1b8) * ((float)local_1c8 - local_1b8);
  fVar12 = (local_1c8._4_4_ - fStack_1b4) * (local_1c8._4_4_ - fStack_1b4);
  fVar7 = ((float)uStack_1c0 - fStack_1b0) * ((float)uStack_1c0 - fStack_1b0);
  auVar11._4_4_ = fVar22;
  auVar11._0_4_ = fVar22;
  auVar11._8_4_ = fVar22;
  auVar11._12_4_ = fVar22;
  auVar2._4_4_ = fVar7 + fVar12 + fVar22;
  auVar2._0_4_ = fVar7 + fVar12 + fVar22;
  auVar2._8_4_ = fVar7 + fVar12 + fVar22;
  auVar2._12_4_ = fVar7 + fVar12 + fVar22;
  auVar10 = sqrtps(auVar11,auVar2);
  FUN_145069c40(&local_208,0.001 / auVar10._0_4_);
  FUN_14506fc60(&local_208,local_res8[0]);
  fVar7 = fStack_e0;
  fVar12 = fStack_e4;
  fVar22 = local_e8;
  if (0 < local_200) {
    fVar24 = fVar24 - (float)local_f8;
    fVar25 = fVar25 - local_f8._4_4_;
    fVar26 = fVar26 - (float)uStack_f0;
    fVar15 = (float)local_f8;
    fVar16 = local_f8._4_4_;
    fVar17 = (float)uStack_f0;
    do {
      pfVar6 = (float *)FUN_1450686a0(&local_208,iVar5);
      fVar18 = *pfVar6;
      fVar19 = pfVar6[1];
      fVar28 = fVar18 * fVar24 + fVar15;
      fVar29 = fVar18 * fVar25 + fVar16;
      fVar30 = fVar18 * fVar26 + fVar17;
      fVar31 = fVar24 * fVar19 + fVar15;
      fVar32 = fVar25 * fVar19 + fVar16;
      fVar33 = fVar26 * fVar19 + fVar17;
      fVar20 = fVar28 - fVar31;
      fVar21 = fVar29 - fVar32;
      fVar27 = fVar30 - fVar33;
      if (fVar14 * fVar14 <= fVar27 * fVar27 + fVar21 * fVar21 + fVar20 * fVar20) {
        fVar20 = (fVar22 - local_d8) * fVar19 + local_d8;
        fVar21 = (fVar12 - fStack_d4) * fVar19 + fStack_d4;
        fVar19 = (fVar7 - fStack_d0) * fVar19 + fStack_d0;
        fVar15 = (fVar22 - local_d8) * fVar18 + local_d8;
        fVar16 = (fVar12 - fStack_d4) * fVar18 + fStack_d4;
        fVar17 = (fVar7 - fStack_d0) * fVar18 + fStack_d0;
        FUN_144c501d0(&local_1a8);
        local_178 = *(float *)(param_3 + 9);
        fStack_174 = *(float *)((longlong)param_3 + 0x4c);
        fStack_170 = (float)(*(uint *)(param_3 + 8) & 0x3fffff);
        fStack_16c = (float)(*(uint *)((longlong)param_3 + 0x44) & 0x3fffff);
        local_124 = 1;
        local_126 = 0;
        local_128 = (undefined2)((uint)(*(float *)(param_1 + 0x28) * 1.0039062) >> 0x10);
        local_1a8 = fVar28;
        fStack_1a4 = fVar31;
        fStack_1a0 = fVar20;
        fStack_19c = fVar15;
        local_198 = fVar29;
        fStack_194 = fVar32;
        fStack_190 = fVar21;
        fStack_18c = fVar16;
        local_188 = fVar30;
        fStack_184 = fVar33;
        fStack_180 = fVar19;
        fStack_17c = fVar17;
        FUN_145070c40(param_4,&local_e8,&local_1a8,0,*(undefined8 *)(param_1 + 0x20));
        fStack_140 = 0.0;
        if ((-1 < (int)fStack_13c) && (local_148 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_148,(ulonglong)(uint)ABS(fStack_13c) << 2);
        }
        lVar1 = local_160;
        uVar4 = local_160._4_4_;
        local_148 = 0;
        fStack_13c = -0.0;
        local_160 = (ulonglong)local_160._4_4_ << 0x20;
        if ((-1 < lVar1) && (local_168 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_168,(ulonglong)(uVar4 & 0x7fffffff) << 2);
        }
        fVar15 = (float)local_f8;
        fVar16 = local_f8._4_4_;
        fVar17 = (float)uStack_f0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_200);
  }
LAB_144d37e6d:
  local_200 = 0;
  if ((-1 < (int)local_1fc) && (local_208 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_208,(ulonglong)(local_1fc & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 144d37f50 FUN_144d37f50 body=428 status=ok
// SIG undefined FUN_144d37f50(void)

void FUN_144d37f50(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined4 *local_50;
  
  local_c4 = *(uint *)(param_1 + 0x44) ^ 0x80000000;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0x80000000;
  local_c8 = *(undefined4 *)(*param_2 + 0x18);
  local_c0 = *(undefined4 *)(param_1 + 0x40);
  fVar2 = (float)FUN_14506fd10(param_2);
  local_bc = *(float *)(param_1 + 0x30) - fVar2 * 2.0;
  fVar2 = (float)FUN_14506fd10(param_2);
  local_b8 = *(float *)(param_1 + 0x34) - fVar2 * 2.0;
  local_68 = *(undefined4 *)(param_1 + 0x18);
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_68 = *(undefined4 *)(param_1 + 0x1c);
  local_b4 = *puVar1;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  puVar1 = (undefined4 *)FUN_144beaab0(&local_88,&local_68);
  local_b0 = *puVar1;
  local_a8 = *(undefined8 *)(param_1 + 0x60);
  local_88 = param_1;
  uStack_80 = param_2;
  local_78 = param_4;
  FUN_144f50de0(local_58,0,0x18,&LAB_144d39870,&LAB_144d39890);
  if (local_50 != (undefined4 *)0x0) {
    *local_50 = (undefined4)local_88;
    local_50[1] = local_88._4_4_;
    local_50[2] = (undefined4)uStack_80;
    local_50[3] = uStack_80._4_4_;
    *(undefined8 *)(local_50 + 4) = local_78;
  }
  FUN_145070490(param_3,&local_c8,local_58);
  FUN_144f50d20(local_58);
  local_98 = 0;
  if ((-1 < (int)local_94) && (local_a0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 5);
  }
  return;
}



// FUNCTION 144d38100 FUN_144d38100 body=5571 status=ok
// SIG undefined FUN_144d38100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144d38100(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  float *pfVar18;
  float fVar19;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar56 [12];
  float fVar58;
  float fVar59;
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar75 [16];
  undefined4 local_res8 [2];
  float local_res10;
  float local_res18;
  ulonglong uVar79;
  longlong local_718;
  int local_710;
  uint local_70c;
  longlong local_708;
  int local_700;
  uint local_6fc;
  float local_6f8;
  float fStack_6f4;
  float fStack_6f0;
  float fStack_6ec;
  longlong local_6e8;
  int local_6e0;
  uint local_6dc;
  longlong local_6d8;
  undefined4 local_6d0;
  uint local_6cc;
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  longlong local_6b8;
  undefined4 local_6b0;
  uint local_6ac;
  longlong local_6a8;
  undefined4 local_6a0;
  uint local_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  longlong local_688;
  undefined4 local_680;
  uint local_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  undefined8 local_668;
  undefined8 uStack_660;
  float local_658;
  float local_654;
  float local_650;
  float local_64c;
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  float *local_618;
  float **ppfStack_610;
  undefined1 local_608 [20];
  undefined4 local_5f4;
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [24];
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined1 local_578 [8];
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float *local_4f8;
  int local_4f0;
  uint local_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  undefined1 local_4d8 [16];
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  undefined1 local_4b8 [16];
  undefined **local_488;
  undefined8 local_480;
  undefined8 local_478;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float local_434;
  uint local_430;
  uint local_42c;
  longlong local_428;
  undefined4 local_420;
  uint local_41c;
  longlong local_408;
  undefined4 local_400;
  uint local_3fc;
  undefined2 local_3e8;
  undefined2 local_3e6;
  undefined1 local_3e4;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  float local_3a8 [4];
  undefined1 local_398 [4];
  float fStack_394;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float *local_1b8;
  float *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  float *local_110;
  float **ppfStack_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [176];
  
  lVar16 = *(longlong *)
            ((ulonglong)((uint)param_3[0x10] >> 0x16) * 0x120 + *(longlong *)(param_2[2] + 0x38));
  local_6f8 = *(float *)(lVar16 + 0xc0);
  fStack_6f4 = *(float *)(lVar16 + 0xc4);
  fStack_6f0 = *(float *)(lVar16 + 200);
  fStack_6ec = *(float *)(lVar16 + 0xcc);
  local_568 = *(float *)(param_1 + 0x3c);
  fVar19 = local_568 + *(float *)(param_1 + 0x48);
  fStack_33c = -*(float *)(param_1 + 0x48);
  fVar74 = local_568 * local_6f8;
  fVar76 = local_568 * fStack_6f4;
  fVar77 = local_568 * fStack_6f0;
  fVar78 = local_568 * fStack_6ec;
  local_res18 = *(float *)(*param_2 + 0x20) * 0.9;
  local_578._4_4_ = *(float *)(param_1 + 0x38);
  fVar31 = *(float *)(*param_2 + 0x24);
  fStack_57c = (float)local_578._4_4_ - local_568;
  bVar9 = fVar19 <= local_res18;
  local_588 = local_6f8 * fStack_57c;
  fStack_584 = fStack_6f4 * fStack_57c;
  fStack_580 = fStack_6f0 * fStack_57c;
  fStack_57c = fStack_6ec * fStack_57c;
  local_348 = local_6f8 * fStack_33c;
  fStack_344 = fStack_6f4 * fStack_33c;
  fStack_340 = fStack_6f0 * fStack_33c;
  fStack_33c = fStack_6ec * fStack_33c;
  local_578._0_4_ = local_578._4_4_;
  fStack_570 = (float)local_578._4_4_;
  fStack_56c = (float)local_578._4_4_;
  local_3b8 = *(undefined4 *)(param_1 + 0x4c);
  local_res10 = fVar19;
  fStack_564 = local_568;
  fStack_560 = local_568;
  fStack_55c = local_568;
  local_3d8 = fVar19;
  fStack_3d4 = fVar19;
  fStack_3d0 = fVar19;
  fStack_3cc = fVar19;
  local_3c8 = local_res18;
  fStack_3c4 = local_res18;
  fStack_3c0 = local_res18;
  fStack_3bc = local_res18;
  uStack_3b4 = local_3b8;
  uStack_3b0 = local_3b8;
  uStack_3ac = local_3b8;
  local_328 = fVar31;
  fStack_324 = fVar31;
  fStack_320 = fVar31;
  fStack_31c = fVar31;
  FUN_144beacd0(&local_3b8,local_3a8,local_398);
  local_318 = local_3a8[0];
  fStack_314 = local_3a8[0];
  fStack_310 = local_3a8[0];
  fStack_30c = local_3a8[0];
  local_5b8 = fStack_394;
  fStack_5b4 = fStack_394;
  fStack_5b0 = fStack_394;
  fStack_5ac = fStack_394;
  local_558 = *(float *)(param_1 + 0x50);
  local_378 = *(float *)(param_1 + 0x54);
  local_388 = *(undefined4 *)(param_1 + 0x58);
  fStack_554 = local_558;
  fStack_550 = local_558;
  fStack_54c = local_558;
  uStack_384 = local_388;
  uStack_380 = local_388;
  uStack_37c = local_388;
  fStack_374 = local_378;
  fStack_370 = local_378;
  fStack_36c = local_378;
  puVar15 = (undefined4 *)FUN_144beaab0(local_e8,&local_388);
  local_5f4 = *puVar15;
  fVar32 = *param_3;
  fVar28 = param_3[1];
  fVar29 = param_3[2];
  fVar30 = param_3[3];
  local_678 = param_3[8];
  fStack_674 = param_3[9];
  fStack_670 = param_3[10];
  fStack_66c = param_3[0xb];
  local_668 = *(undefined8 *)(param_3 + 0xc);
  uStack_660 = *(undefined8 *)(param_3 + 0xe);
  fVar70 = param_3[4];
  fVar71 = param_3[5];
  fVar72 = param_3[6];
  fVar73 = param_3[7];
  local_6c8 = fVar70;
  fStack_6c4 = fVar71;
  fStack_6c0 = fVar72;
  fStack_6bc = fVar73;
  local_698 = fVar32;
  fStack_694 = fVar28;
  fStack_690 = fVar29;
  fStack_68c = fVar30;
  local_5c8 = local_668;
  uStack_5c0 = uStack_660;
  local_528 = local_678;
  fStack_524 = fStack_674;
  fStack_520 = fStack_670;
  fStack_51c = fStack_66c;
  local_368 = local_5f4;
  uStack_364 = local_5f4;
  uStack_360 = local_5f4;
  uStack_35c = local_5f4;
  local_338 = fVar32;
  fStack_334 = fVar28;
  fStack_330 = fVar29;
  fStack_32c = fVar30;
  iVar13 = FUN_14506f2c0(&local_698,&local_6c8,&local_6f8,param_2);
  if (iVar13 == 0) {
    return;
  }
  iVar13 = FUN_14506f2c0(&local_668,&local_678,&local_6f8,param_2);
  if (iVar13 == 0) {
    return;
  }
  FUN_14506fb20(&local_698,&local_6c8,&local_6f8,local_res8,param_2);
  FUN_14506fb20(&local_678,&local_668,&local_6f8,local_608,param_2);
  FUN_145068400(&local_708);
  fVar50 = local_698 + (local_678 - local_698) * _DAT_14c6dad90;
  fVar53 = fStack_694 + (fStack_674 - fStack_694) * fRam000000014c6dad94;
  fVar54 = fStack_690 + (fStack_670 - fStack_690) * fRam000000014c6dad98;
  fVar33 = local_6f8 * fVar50;
  fVar37 = fStack_6f4 * fVar53;
  fVar41 = fStack_6f0 * fVar54;
  fVar55 = local_6c8 + ((float)local_668 - local_6c8) * _DAT_14c6dad90;
  fVar58 = fStack_6c4 + (local_668._4_4_ - fStack_6c4) * fRam000000014c6dad94;
  fVar59 = fStack_6c0 + ((float)uStack_660 - fStack_6c0) * fRam000000014c6dad98;
  fVar34 = local_6f8 * fVar55;
  fVar38 = fStack_6f4 * fVar58;
  fVar42 = fStack_6f0 * fVar59;
  fVar35 = local_6f8 * fVar32;
  fVar39 = fStack_6f4 * fVar28;
  fVar43 = fStack_6f0 * fVar29;
  fVar36 = local_6f8 * fVar70;
  fVar40 = fStack_6f4 * fVar71;
  fVar44 = fStack_6f0 * fVar72;
  local_148 = (fVar50 - local_6f8 * (fVar41 + fVar37 + fVar33)) +
              local_6f8 * (fVar43 + fVar39 + fVar35);
  fStack_144 = (fVar53 - fStack_6f4 * (fVar41 + fVar37 + fVar33)) +
               fStack_6f4 * (fVar43 + fVar39 + fVar35);
  fStack_140 = (fVar54 - fStack_6f0 * (fVar41 + fVar37 + fVar33)) +
               fStack_6f0 * (fVar43 + fVar39 + fVar35);
  fVar39 = ((fStack_68c + (fStack_66c - fStack_68c) * fRam000000014c6dad9c) -
           fStack_6ec * (fVar41 + fVar37 + fVar33)) + fStack_6ec * (fVar43 + fVar39 + fVar35);
  local_358 = (fVar55 - local_6f8 * (fVar42 + fVar38 + fVar34)) +
              local_6f8 * (fVar44 + fVar40 + fVar36);
  fStack_354 = (fVar58 - fStack_6f4 * (fVar42 + fVar38 + fVar34)) +
               fStack_6f4 * (fVar44 + fVar40 + fVar36);
  fStack_350 = (fVar59 - fStack_6f0 * (fVar42 + fVar38 + fVar34)) +
               fStack_6f0 * (fVar44 + fVar40 + fVar36);
  fStack_34c = ((fStack_6bc + (uStack_660._4_4_ - fStack_6bc) * fRam000000014c6dad9c) -
               fStack_6ec * (fVar42 + fVar38 + fVar34)) + fStack_6ec * (fVar44 + fVar40 + fVar36);
  fVar33 = local_358 - local_148;
  fVar34 = fStack_354 - fStack_144;
  fVar35 = fStack_350 - fStack_140;
  fVar36 = fStack_34c - fVar39;
  fVar37 = local_6f8 * fVar34 - fVar33 * fStack_6f4;
  fVar34 = fStack_6f4 * fVar35 - fVar34 * fStack_6f0;
  fVar35 = fStack_6f0 * fVar33 - fVar35 * local_6f8;
  auVar47._12_4_ = fStack_6ec * fVar36 - fVar36 * fStack_6ec;
  auVar47._4_4_ = fVar35;
  auVar47._0_4_ = fVar34;
  auVar47._8_4_ = fVar37;
  fVar34 = fVar34 * fVar34;
  fVar35 = fVar35 * fVar35;
  fVar37 = fVar37 * fVar37;
  auVar23._4_4_ = fVar34;
  auVar23._0_4_ = fVar34;
  auVar23._8_4_ = fVar34;
  auVar23._12_4_ = fVar34;
  fVar33 = fVar37 + fVar35 + fVar34;
  if (fVar33 == 0.0) {
    auVar23 = ZEXT816(0);
  }
  else {
    auVar61._4_4_ = fVar37 + fVar35 + fVar34;
    auVar61._0_4_ = fVar33;
    auVar61._8_4_ = fVar37 + fVar35 + fVar34;
    auVar61._12_4_ = fVar37 + fVar35 + fVar34;
    auVar23 = sqrtps(auVar23,auVar61);
    auVar23 = divps(auVar47,auVar23);
  }
  local_148 = fVar74 + local_148;
  fStack_144 = fVar76 + fStack_144;
  fStack_140 = fVar77 + fStack_140;
  local_f8 = auVar23._0_4_;
  fVar33 = (local_6c8 - local_148) * local_f8;
  fStack_f4 = auVar23._4_4_;
  fVar34 = (fStack_6c4 - fStack_144) * fStack_f4;
  fStack_f0 = auVar23._8_4_;
  fVar35 = (fStack_6c0 - fStack_140) * fStack_f0;
  fVar43 = (local_698 - local_148) * local_f8;
  fVar44 = (fStack_694 - fStack_144) * fStack_f4;
  fVar50 = (fStack_690 - fStack_140) * fStack_f0;
  fVar40 = ((float)local_668 - local_148) * local_f8;
  fVar41 = (local_668._4_4_ - fStack_144) * fStack_f4;
  fVar42 = ((float)uStack_660 - fStack_140) * fStack_f0;
  fVar36 = (local_678 - local_148) * local_f8;
  fVar37 = (fStack_674 - fStack_144) * fStack_f4;
  fVar38 = (fStack_670 - fStack_140) * fStack_f0;
  auVar60._0_4_ = fVar50 + fVar44 + fVar43;
  auVar60._4_4_ = fVar50 + fVar44 + fVar43;
  auVar60._8_4_ = fVar50 + fVar44 + fVar43;
  auVar60._12_4_ = fVar50 + fVar44 + fVar43;
  auVar1._4_4_ = fVar35 + fVar34 + fVar33;
  auVar1._0_4_ = fVar35 + fVar34 + fVar33;
  auVar1._8_4_ = fVar35 + fVar34 + fVar33;
  auVar1._12_4_ = fVar35 + fVar34 + fVar33;
  auVar61 = minps(auVar60,auVar1);
  auVar51._0_4_ = fVar42 + fVar41 + fVar40;
  auVar51._4_4_ = fVar42 + fVar41 + fVar40;
  auVar51._8_4_ = fVar42 + fVar41 + fVar40;
  auVar51._12_4_ = fVar42 + fVar41 + fVar40;
  auVar46._0_4_ = fVar38 + fVar37 + fVar36;
  auVar46._4_4_ = fVar38 + fVar37 + fVar36;
  auVar46._8_4_ = fVar38 + fVar37 + fVar36;
  auVar46._12_4_ = fVar38 + fVar37 + fVar36;
  fStack_510 = local_6f8 * (fStack_6c4 - fStack_694) - (local_6c8 - local_698) * fStack_6f4;
  local_518 = fStack_6f4 * (fStack_6c0 - fStack_690) - (fStack_6c4 - fStack_694) * fStack_6f0;
  fStack_514 = fStack_6f0 * (local_6c8 - local_698) - (fStack_6c0 - fStack_690) * local_6f8;
  fStack_50c = 0.0 - (fStack_510 * fStack_690 + fStack_514 * fStack_694 + local_518 * local_698);
  fStack_500 = local_6f8 * (fStack_674 - local_668._4_4_) -
               fStack_6f4 * (local_678 - (float)local_668);
  local_508 = fStack_6f4 * (fStack_670 - (float)uStack_660) -
              fStack_6f0 * (fStack_674 - local_668._4_4_);
  fStack_504 = fStack_6f0 * (local_678 - (float)local_668) -
               local_6f8 * (fStack_670 - (float)uStack_660);
  auVar47 = maxps(auVar46,auVar51);
  fStack_4fc = 0.0 - (fStack_500 * fStack_670 + fStack_504 * fStack_674 + local_508 * local_678);
  local_138 = local_f8 * auVar61._0_4_;
  fStack_134 = fStack_f4 * auVar61._4_4_;
  fStack_130 = fStack_f0 * auVar61._8_4_;
  fStack_12c = auVar23._12_4_ * auVar61._12_4_;
  local_480 = *(undefined8 *)(param_1 + 0x68);
  local_478 = *(undefined8 *)(param_1 + 0x70);
  local_148 = local_148 - local_138;
  fStack_144 = fStack_144 - fStack_134;
  fStack_140 = fStack_140 - fStack_130;
  fStack_13c = (fVar78 + fVar39) - fStack_12c;
  local_138 = (fVar74 + local_358) - local_138;
  fStack_134 = (fVar76 + fStack_354) - fStack_134;
  fStack_130 = (fVar77 + fStack_350) - fStack_130;
  fStack_12c = (fVar78 + fStack_34c) - fStack_12c;
  local_128 = CONCAT44(fStack_584,local_588);
  uStack_120 = CONCAT44(fStack_57c,fStack_580);
  local_118 = &local_488;
  local_110 = &local_518;
  ppfStack_108 = &local_4f8;
  ppfStack_610 = ppfStack_108;
  local_618 = local_110;
  local_488 = hkaiTraversalAnalysisUtils::TraversalAnalysisMaterialOrFilter::vftable;
  local_f8 = local_f8 * (auVar47._0_4_ - auVar61._0_4_);
  fStack_f4 = fStack_f4 * (auVar47._4_4_ - auVar61._4_4_);
  fStack_f0 = fStack_f0 * (auVar47._8_4_ - auVar61._8_4_);
  fStack_ec = auVar23._12_4_ * (auVar47._12_4_ - auVar61._12_4_);
  FUN_145062b30(param_2[4],&local_148,
                fStack_500 * fStack_670 + fStack_504 * fStack_674 + local_508 * local_678);
  iVar13 = 0;
  if (local_700 == 0) goto LAB_144d39627;
  FUN_145069ab0(&local_708,0,0x3f800000);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_145068400(local_5f0);
    if (0 < local_700) {
      do {
        lVar16 = FUN_1450686a0(&local_708,iVar13);
        uVar14 = FUN_145063c30(param_2[4],*(undefined4 *)(lVar16 + 0x10));
        cVar12 = (**(code **)(**(longlong **)(param_1 + 0x70) + 8))
                           (*(longlong **)(param_1 + 0x70),uVar14);
        if (cVar12 == '\0') {
          FUN_1450686c0(local_5f0,lVar16);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_700);
    }
    FUN_1450692c0(&local_708,local_5f0);
    FUN_144d340d0(local_5f0);
  }
  iVar13 = 0;
  fVar74 = local_6f8 * local_678;
  fVar77 = fStack_6f4 * fStack_674;
  fVar33 = fStack_6f0 * fStack_670;
  fVar76 = local_6f8 * (float)local_668;
  fVar78 = fStack_6f4 * local_668._4_4_;
  fVar34 = fStack_6f0 * (float)uStack_660;
  fVar39 = local_678 - local_6f8 * (fVar33 + fVar77 + fVar74);
  fVar40 = fStack_674 - fStack_6f4 * (fVar33 + fVar77 + fVar74);
  fVar41 = fStack_670 - fStack_6f0 * (fVar33 + fVar77 + fVar74);
  fVar42 = fStack_66c - fStack_6ec * (fVar33 + fVar77 + fVar74);
  local_588 = (float)local_668 - local_6f8 * (fVar34 + fVar78 + fVar76);
  fStack_584 = local_668._4_4_ - fStack_6f4 * (fVar34 + fVar78 + fVar76);
  fStack_580 = (float)uStack_660 - fStack_6f0 * (fVar34 + fVar78 + fVar76);
  fStack_57c = uStack_660._4_4_ - fStack_6ec * (fVar34 + fVar78 + fVar76);
  FUN_145068400(&local_718);
  FUN_145068400(&local_6e8);
  fVar78 = fStack_57c;
  fVar77 = fStack_580;
  fVar76 = fStack_584;
  fVar74 = local_588;
  fVar33 = fVar31;
  fVar34 = fVar31;
  fVar35 = fVar31;
  fVar36 = fVar19;
  fVar37 = fVar19;
  fVar38 = fVar19;
  if (0 < local_700) {
    uVar10 = CONCAT44(fStack_344,local_348);
    uVar11 = CONCAT44(fStack_33c,fStack_340);
    do {
      uVar17 = FUN_1450686a0(&local_708,iVar13);
      FUN_145068310(uVar17,&local_650);
      FUN_145068330(uVar17,&local_658);
      if (0.01 <= local_658 - local_650) {
        fVar31 = local_64c + 0.01;
        fVar29 = fStack_6ec * fVar31;
        fVar65 = fStack_68c + local_650 * (fStack_6bc - fStack_68c);
        fVar32 = local_654 + 0.01;
        fVar62 = local_698 + local_650 * (local_6c8 - local_698) + local_6f8 * fVar31;
        fVar63 = fStack_694 + local_650 * (fStack_6c4 - fStack_694) + fStack_6f4 * fVar31;
        fVar64 = fStack_690 + local_650 * (fStack_6c0 - fStack_690) + fStack_6f0 * fVar31;
        fVar36 = local_650 * (fVar74 - fVar39);
        fVar38 = local_650 * (fVar76 - fVar40);
        fVar44 = local_650 * (fVar77 - fVar41);
        fVar53 = local_650 * (fVar78 - fVar42);
        fVar69 = fStack_68c + local_658 * (fStack_6bc - fStack_68c);
        fVar30 = fStack_6ec * fVar32;
        fVar19 = local_6f8 * fVar62;
        fVar33 = fStack_6f4 * fVar63;
        fVar34 = fStack_6f0 * fVar64;
        fVar66 = local_698 + local_658 * (local_6c8 - local_698) + local_6f8 * fVar32;
        fVar67 = fStack_694 + local_658 * (fStack_6c4 - fStack_694) + fStack_6f4 * fVar32;
        fVar68 = fStack_690 + local_658 * (fStack_6c0 - fStack_690) + fStack_6f0 * fVar32;
        fVar37 = local_658 * (fVar74 - fVar39);
        fVar43 = local_658 * (fVar76 - fVar40);
        fVar50 = local_658 * (fVar77 - fVar41);
        fVar54 = local_658 * (fVar78 - fVar42);
        fVar31 = local_6f8 * (fVar34 + fVar33 + fVar19);
        fVar32 = fStack_6f4 * (fVar34 + fVar33 + fVar19);
        fVar28 = fStack_6f0 * (fVar34 + fVar33 + fVar19);
        fVar19 = fStack_6ec * (fVar34 + fVar33 + fVar19);
        fVar33 = local_6f8 * fVar66;
        fVar34 = fStack_6f4 * fVar67;
        fVar35 = fStack_6f0 * fVar68;
        fVar55 = local_6f8 * (fVar35 + fVar34 + fVar33);
        fVar58 = fStack_6f4 * (fVar35 + fVar34 + fVar33);
        fVar59 = fStack_6f0 * (fVar35 + fVar34 + fVar33);
        fVar33 = fStack_6ec * (fVar35 + fVar34 + fVar33);
        FUN_145068400(&local_6d8);
        local_2c0 = 0;
        local_2b8 = 0;
        local_2c8 = *(undefined8 *)(param_1 + 0x68);
        local_308 = fVar62;
        fStack_304 = fVar63;
        fStack_300 = fVar64;
        fStack_2fc = fVar65 + fVar29;
        local_2f8 = fVar66;
        fStack_2f4 = fVar67;
        fStack_2f0 = fVar68;
        fStack_2ec = fVar69 + fVar30;
        local_2e8 = fVar39 + fVar36 + fVar31;
        fStack_2e4 = fVar40 + fVar38 + fVar32;
        fStack_2e0 = fVar41 + fVar44 + fVar28;
        fStack_2dc = fVar42 + fVar53 + fVar19;
        local_2d8 = fVar39 + fVar37 + fVar55;
        fStack_2d4 = fVar40 + fVar43 + fVar58;
        fStack_2d0 = fVar41 + fVar50 + fVar59;
        fStack_2cc = fVar42 + fVar54 + fVar33;
        local_2a8 = uVar10;
        uStack_2a0 = uVar11;
        FUN_1450630f0(param_2[4],&local_308,&local_6d8);
        FUN_145069850(&local_6d8,0,0x3f800000);
        if (local_6e0 != 0) {
          uVar14 = FUN_14506d7d0(&local_6e8);
          FUN_145068470(&local_6d8,uVar14,0x3f800000);
        }
        FUN_145068730(&local_6e8,&local_6d8);
        local_6d0 = 0;
        if ((-1 < (int)local_6cc) && (local_6d8 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_6d8,(ulonglong)(local_6cc & 0x7fffffff) * 0x14);
        }
        local_6d8 = 0;
        local_6cc = 0x80000000;
      }
      iVar13 = iVar13 + 1;
      fVar31 = local_328;
      fVar33 = fStack_324;
      fVar34 = fStack_320;
      fVar35 = fStack_31c;
      fVar19 = local_3d8;
      fVar36 = fStack_3d4;
      fVar37 = fStack_3d0;
      fVar38 = fStack_3cc;
      fVar32 = local_338;
      fVar28 = fStack_334;
      fVar29 = fStack_330;
      fVar30 = fStack_32c;
    } while (iVar13 < local_700);
  }
  FUN_145069380(&local_6e8,0,0x3f800000);
  FUN_145068e50(&local_6e8,&local_708);
  FUN_1450692c0(&local_718,&local_6e8);
  local_6e0 = 0;
  if ((-1 < (int)local_6dc) && (local_6e8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_6e8,(ulonglong)(local_6dc & 0x7fffffff) * 0x14);
  }
  local_6e8 = 0;
  local_6dc = 0x80000000;
  if (bVar9) {
LAB_144d38d57:
    iVar13 = 0;
    fVar31 = (local_698 - local_6c8) * (local_698 - local_6c8);
    fVar19 = (fStack_694 - fStack_6c4) * (fStack_694 - fStack_6c4);
    fVar74 = (fStack_690 - fStack_6c0) * (fStack_690 - fStack_6c0);
    auVar22._4_4_ = fVar31;
    auVar22._0_4_ = fVar31;
    auVar22._8_4_ = fVar31;
    auVar22._12_4_ = fVar31;
    auVar2._4_4_ = fVar74 + fVar19 + fVar31;
    auVar2._0_4_ = fVar74 + fVar19 + fVar31;
    auVar2._8_4_ = fVar74 + fVar19 + fVar31;
    auVar2._12_4_ = fVar74 + fVar19 + fVar31;
    auVar23 = sqrtps(auVar22,auVar2);
    FUN_145069c40(&local_718,0.001 / auVar23._0_4_);
    FUN_14506fc60(&local_718,local_res8[0]);
    if (local_710 != 0) {
      fVar70 = fVar70 - fVar32;
      fVar71 = fVar71 - fVar28;
      fVar72 = fVar72 - fVar29;
      fVar73 = fVar73 - fVar30;
      fVar31 = *(float *)(*param_2 + 0x18);
      fVar77 = local_6f8 * fVar71 - fStack_6f4 * fVar70;
      fVar19 = fStack_6f4 * fVar72 - fStack_6f0 * fVar71;
      fVar76 = fStack_6f0 * fVar70 - local_6f8 * fVar72;
      auVar49._12_4_ = fStack_6ec * fVar73 - fStack_6ec * fVar73;
      auVar49._4_4_ = fVar76;
      auVar49._0_4_ = fVar19;
      auVar49._8_4_ = fVar77;
      fVar19 = fVar19 * fVar19;
      fVar76 = fVar76 * fVar76;
      fVar77 = fVar77 * fVar77;
      auVar24._4_4_ = fVar19;
      auVar24._0_4_ = fVar19;
      auVar24._8_4_ = fVar19;
      auVar24._12_4_ = fVar19;
      fVar74 = fVar77 + fVar76 + fVar19;
      if (fVar74 == 0.0) {
        local_638 = ZEXT816(0);
      }
      else {
        auVar6._4_4_ = fVar77 + fVar76 + fVar19;
        auVar6._0_4_ = fVar74;
        auVar6._8_4_ = fVar77 + fVar76 + fVar19;
        auVar6._12_4_ = fVar77 + fVar76 + fVar19;
        auVar23 = sqrtps(auVar24,auVar6);
        local_638 = divps(auVar49,auVar23);
      }
      local_4f8 = &local_4e8;
      fVar78 = local_638._0_4_;
      fVar33 = local_638._4_4_;
      fVar34 = local_638._8_4_;
      fVar35 = local_638._12_4_;
      local_4e8 = -fVar78;
      fStack_4e4 = -fVar33;
      fStack_4e0 = -fVar34;
      local_4ec = 0x80000006;
      local_4f0 = 6;
      fStack_4dc = 0.0 - (fVar29 * fStack_4e0 + fVar28 * fStack_4e4 + fVar32 * local_4e8);
      local_5c8._0_4_ = (float)local_5c8 - local_528;
      local_5c8._4_4_ = local_5c8._4_4_ - fStack_524;
      uStack_5c0._0_4_ = (float)uStack_5c0 - fStack_520;
      uStack_5c0._4_4_ = uStack_5c0._4_4_ - fStack_51c;
      fVar77 = local_6f8 * local_5c8._4_4_ - (float)local_5c8 * fStack_6f4;
      fVar19 = fStack_6f4 * (float)uStack_5c0 - local_5c8._4_4_ * fStack_6f0;
      fVar76 = fStack_6f0 * (float)local_5c8 - (float)uStack_5c0 * local_6f8;
      auVar57._12_4_ = fStack_6ec * uStack_5c0._4_4_ - uStack_5c0._4_4_ * fStack_6ec;
      auVar57._4_4_ = fVar76;
      auVar57._0_4_ = fVar19;
      auVar57._8_4_ = fVar77;
      fVar19 = fVar19 * fVar19;
      fVar76 = fVar76 * fVar76;
      fVar77 = fVar77 * fVar77;
      auVar25._4_4_ = fVar19;
      auVar25._0_4_ = fVar19;
      auVar25._8_4_ = fVar19;
      auVar25._12_4_ = fVar19;
      fVar74 = fVar77 + fVar76 + fVar19;
      if (fVar74 == 0.0) {
        auVar56 = SUB1612(ZEXT816(0),0);
      }
      else {
        auVar5._4_4_ = fVar77 + fVar76 + fVar19;
        auVar5._0_4_ = fVar74;
        auVar5._8_4_ = fVar77 + fVar76 + fVar19;
        auVar5._12_4_ = fVar77 + fVar76 + fVar19;
        auVar23 = sqrtps(auVar25,auVar5);
        auVar23 = divps(auVar57,auVar23);
        auVar56 = auVar23._0_12_;
      }
      fVar19 = local_6f8 * (float)local_578._0_4_;
      fVar74 = fStack_6f4 * (float)local_578._4_4_;
      fVar76 = fStack_6f0 * fStack_570;
      local_4d8._12_4_ =
           0.0 - (fStack_520 * auVar56._8_4_ +
                 fStack_524 * auVar56._4_4_ + local_528 * auVar56._0_4_);
      local_4d8._0_12_ = auVar56;
      local_568 = fVar32 + local_6f8 * local_568;
      fStack_564 = fVar28 + fStack_6f4 * fStack_564;
      fStack_560 = fVar29 + fStack_6f0 * fStack_560;
      fStack_55c = fVar30 + fStack_6ec * fStack_55c;
      fVar38 = fVar33 * fVar70 - fVar78 * fVar71;
      fVar77 = fVar34 * fVar71 - fVar33 * fVar72;
      fVar37 = fVar78 * fVar72 - fVar34 * fVar70;
      auVar52._12_4_ = fVar35 * fVar73 - fVar35 * fVar73;
      auVar52._4_4_ = fVar37;
      auVar52._0_4_ = fVar77;
      auVar52._8_4_ = fVar38;
      fVar77 = fVar77 * fVar77;
      fVar37 = fVar37 * fVar37;
      fVar38 = fVar38 * fVar38;
      auVar26._4_4_ = fVar77;
      auVar26._0_4_ = fVar77;
      auVar26._8_4_ = fVar77;
      auVar26._12_4_ = fVar77;
      fVar36 = fVar38 + fVar37 + fVar77;
      if (fVar36 == 0.0) {
        auVar56 = SUB1612(ZEXT816(0),0);
      }
      else {
        auVar4._4_4_ = fVar38 + fVar37 + fVar77;
        auVar4._0_4_ = fVar36;
        auVar4._8_4_ = fVar38 + fVar37 + fVar77;
        auVar4._12_4_ = fVar38 + fVar37 + fVar77;
        auVar23 = sqrtps(auVar26,auVar4);
        auVar23 = divps(auVar52,auVar23);
        auVar56 = auVar23._0_12_;
      }
      fStack_570 = -0.0;
      local_578 = (undefined1  [8])0x8000000080000000;
      fStack_56c = 0.0;
      local_4c8 = -auVar56._0_4_;
      fStack_4c4 = -auVar56._4_4_;
      fStack_4c0 = -auVar56._8_4_;
      fStack_4bc = 0.0 - (fStack_4c0 * (fVar29 + fVar76) +
                         fStack_4c4 * (fVar28 + fVar74) + local_4c8 * (fVar32 + fVar19));
      fVar19 = local_6f8 * fVar70;
      fVar74 = fStack_6f4 * fVar71;
      fVar76 = fStack_6f0 * fVar72;
      local_4b8._12_4_ =
           0.0 - (auVar56._8_4_ * fStack_560 +
                 auVar56._4_4_ * fStack_564 + auVar56._0_4_ * local_568);
      local_4b8._0_12_ = auVar56;
      auVar75._0_4_ = fVar70 - local_6f8 * (fVar76 + fVar74 + fVar19);
      auVar75._4_4_ = fVar71 - fStack_6f4 * (fVar76 + fVar74 + fVar19);
      auVar75._8_4_ = fVar72 - fStack_6f0 * (fVar76 + fVar74 + fVar19);
      auVar75._12_4_ = fVar73 - fStack_6ec * (fVar76 + fVar74 + fVar19);
      fVar19 = auVar75._0_4_ * auVar75._0_4_;
      fVar76 = auVar75._4_4_ * auVar75._4_4_;
      fVar77 = auVar75._8_4_ * auVar75._8_4_;
      auVar27._4_4_ = fVar19;
      auVar27._0_4_ = fVar19;
      auVar27._8_4_ = fVar19;
      auVar27._12_4_ = fVar19;
      fVar74 = fVar77 + fVar76 + fVar19;
      if (fVar74 == 0.0) {
        local_648 = ZEXT816(0);
      }
      else {
        auVar3._4_4_ = fVar77 + fVar76 + fVar19;
        auVar3._0_4_ = fVar74;
        auVar3._8_4_ = fVar77 + fVar76 + fVar19;
        auVar3._12_4_ = fVar77 + fVar76 + fVar19;
        auVar23 = sqrtps(auVar27,auVar3);
        local_648 = divps(auVar75,auVar23);
      }
      local_5b8 = local_5b8 * local_6f8 - local_318 * fVar78;
      fStack_5b4 = fStack_5b4 * fStack_6f4 - fStack_314 * fVar33;
      fStack_5b0 = fStack_5b0 * fStack_6f0 - fStack_310 * fVar34;
      fStack_5ac = fStack_5ac * fStack_6ec - fStack_30c * fVar35;
      local_558 = local_648._0_4_ * local_558;
      fStack_554 = local_648._4_4_ * fStack_554;
      fStack_550 = local_648._8_4_ * fStack_550;
      fStack_54c = local_648._12_4_ * fStack_54c;
      fVar19 = local_648._0_4_ * local_378;
      fVar74 = local_648._4_4_ * fStack_374;
      fVar76 = local_648._8_4_ * fStack_370;
      if (0 < local_710) {
        do {
          pfVar18 = (float *)FUN_1450686a0(&local_718,iVar13);
          fVar77 = *pfVar18;
          fVar78 = pfVar18[1];
          local_538 = pfVar18[4];
          fVar33 = fVar32 + fVar77 * fVar70;
          fVar34 = fVar28 + fVar77 * fVar71;
          fVar35 = fVar29 + fVar77 * fVar72;
          fStack_59c = fVar30 + fVar77 * fVar73;
          fVar36 = fVar32 + fVar70 * fVar78;
          fVar37 = fVar28 + fVar71 * fVar78;
          fVar38 = fVar29 + fVar72 * fVar78;
          fStack_58c = fVar30 + fVar73 * fVar78;
          local_548 = fVar70 * (fVar78 - fVar77);
          fStack_544 = fVar71 * (fVar78 - fVar77);
          fStack_540 = fVar72 * (fVar78 - fVar77);
          fStack_53c = fVar73 * (fVar78 - fVar77);
          local_5a8 = fVar33;
          fStack_5a4 = fVar34;
          fStack_5a0 = fVar35;
          local_598 = fVar36;
          fStack_594 = fVar37;
          fStack_590 = fVar38;
          if (fVar31 * fVar31 <=
              (fVar35 - fVar38) * (fVar35 - fVar38) +
              (fVar34 - fVar37) * (fVar34 - fVar37) + (fVar33 - fVar36) * (fVar33 - fVar36)) {
            fVar39 = local_528 + (float)local_5c8 * fVar77;
            fVar40 = fStack_524 + local_5c8._4_4_ * fVar77;
            fVar77 = fStack_520 + (float)uStack_5c0 * fVar77;
            fVar41 = local_528 + (float)local_5c8 * fVar78;
            fVar42 = fStack_524 + local_5c8._4_4_ * fVar78;
            fVar78 = fStack_520 + (float)uStack_5c0 * fVar78;
            FUN_144c501d0(&local_468);
            local_468 = local_5a8;
            fStack_464 = local_598;
            local_458 = fStack_5a4;
            fStack_454 = fStack_594;
            local_448 = fStack_5a0;
            fStack_444 = fStack_590;
            local_438 = param_3[0x12];
            local_434 = param_3[0x13];
            local_430 = (uint)param_3[0x10] & 0x3fffff;
            local_42c = (uint)param_3[0x11] & 0x3fffff;
            local_3e4 = 1;
            local_3e6 = 0;
            local_3e8 = (undefined2)((uint)(*(float *)(param_1 + 0x28) * 1.0039062) >> 0x10);
            fStack_460 = fVar41;
            fStack_45c = fVar39;
            fStack_450 = fVar42;
            fStack_44c = fVar40;
            fStack_440 = fVar78;
            fStack_43c = fVar77;
            FUN_145070c40(param_4,local_628,&local_468,2,*(undefined8 *)(param_1 + 0x20));
            local_4f8[0x10] = (float)(local_578._0_4_ ^ local_648._0_4_);
            local_4f8[0x11] = (float)(local_578._4_4_ ^ local_648._4_4_);
            local_4f8[0x12] = (float)((uint)fStack_570 ^ local_648._8_4_);
            local_4f8[0x13] = (float)((uint)fStack_56c ^ local_648._12_4_);
            fVar77 = local_4f8[0x10];
            fVar78 = local_4f8[0x11];
            fVar39 = local_4f8[0x12];
            local_4f8[0x10] = fVar77;
            local_4f8[0x11] = fVar78;
            local_4f8[0x12] = fVar39;
            local_4f8[0x13] =
                 0.0 - ((fStack_550 + fVar35) * fVar39 +
                       (fStack_554 + fVar34) * fVar78 + (local_558 + fVar33) * fVar77);
            *(undefined8 *)(local_4f8 + 0x14) = local_648._0_8_;
            *(undefined8 *)(local_4f8 + 0x16) = local_648._8_8_;
            fVar77 = local_4f8[0x16];
            fVar78 = (fVar19 + fVar36) * local_4f8[0x14];
            fVar33 = (fVar74 + fVar37) * local_4f8[0x15];
            fVar34 = (fVar76 + fVar38) * fVar77;
            local_4f8[0x14] = local_4f8[0x14];
            local_4f8[0x15] = local_4f8[0x15];
            local_4f8[0x16] = fVar77;
            local_4f8[0x17] = 0.0 - (fVar34 + fVar33 + fVar78);
            FUN_145068400(&local_6a8,fVar77,fVar34 + fVar33 + fVar78);
            FUN_145068400(&local_6b8);
            local_1a8 = CONCAT44(fStack_5a4,local_5a8);
            uStack_1a0 = CONCAT44(fStack_59c,fStack_5a0);
            local_198 = CONCAT44(fStack_594,local_598);
            uStack_190 = CONCAT44(fStack_58c,fStack_590);
            local_188 = CONCAT44(fStack_5b4,local_5b8);
            uStack_180 = CONCAT44(fStack_5ac,fStack_5b0);
            local_1b0 = local_4f8 + (longlong)local_4f0 * 4;
            local_178 = local_638._0_8_;
            uStack_170 = local_638._8_8_;
            local_1b8 = local_4f8;
            local_168 = local_6f8;
            fStack_164 = fStack_6f4;
            fStack_160 = fStack_6f0;
            fStack_15c = fStack_6ec;
            local_158 = *(undefined8 *)(param_1 + 0x68);
            FUN_145063550(param_2[4],&local_1b8,&local_6a8,&local_6b8);
            pfVar18 = &local_6f8;
            FUN_14506fcb0(&local_6a8,&local_6b8,&local_548,local_638,pfVar18,local_648,&local_368);
            uVar79 = (ulonglong)pfVar18 & 0xffffffffffffff00;
            FUN_145070bf0(local_628,0,&local_6a8,1,uVar79);
            FUN_145070bf0(local_628,1,&local_6b8,1,uVar79 & 0xffffffffffffff00);
            FUN_145070c20(local_628,0,&local_5a8);
            FUN_145070c20(local_628,1,&local_598);
            FUN_145070c20(local_628,2,local_638);
            local_6b0 = 0;
            if ((-1 < (int)local_6ac) && (local_6b8 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_6b8,(ulonglong)(local_6ac & 0x7fffffff) * 0x14
                        );
            }
            local_6b8 = 0;
            local_6ac = 0x80000000;
            local_6a0 = 0;
            if ((-1 < (int)local_69c) && (local_6a8 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_6a8,(ulonglong)(local_69c & 0x7fffffff) * 0x14
                        );
            }
            local_6a8 = 0;
            local_69c = 0x80000000;
            local_400 = 0;
            if ((-1 < (int)local_3fc) && (local_408 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_408,(ulonglong)(local_3fc & 0x7fffffff) << 2);
            }
            local_408 = 0;
            local_3fc = 0x80000000;
            local_420 = 0;
            if ((-1 < (int)local_41c) && (local_428 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_428,(ulonglong)(local_41c & 0x7fffffff) << 2);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_710);
      }
      local_4f0 = 0;
      if ((-1 < (int)local_4ec) && (local_4f8 != (float *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_4f8,(ulonglong)(local_4ec & 0x7fffffff) << 4);
      }
      local_4f8 = (float *)0x0;
      local_4ec = 0x80000000;
    }
  }
  else {
    FUN_145068400(&local_688);
    fVar78 = fStack_3bc;
    fVar77 = fStack_3c0;
    fVar76 = fStack_3c4;
    fVar74 = local_3c8;
    local_298 = local_698 + local_6f8 * local_3c8;
    fStack_294 = fStack_694 + fStack_6f4 * fStack_3c4;
    fStack_290 = fStack_690 + fStack_6f0 * fStack_3c0;
    fStack_28c = fStack_68c + fStack_6ec * fStack_3bc;
    local_288 = local_6c8 + local_6f8 * local_3c8;
    fStack_284 = fStack_6c4 + fStack_6f4 * fStack_3c4;
    fStack_280 = fStack_6c0 + fStack_6f0 * fStack_3c0;
    fStack_27c = fStack_6bc + fStack_6ec * fStack_3bc;
    local_278 = local_698 + local_6f8 * fVar19;
    fStack_274 = fStack_694 + fStack_6f4 * fVar36;
    fStack_270 = fStack_690 + fStack_6f0 * fVar37;
    fStack_26c = fStack_68c + fStack_6ec * fVar38;
    local_268 = local_6c8 + local_6f8 * fVar19;
    fStack_264 = fStack_6c4 + fStack_6f4 * fVar36;
    fStack_260 = fStack_6c0 + fStack_6f0 * fVar37;
    fStack_25c = fStack_6bc + fStack_6ec * fVar38;
    fVar42 = local_6f8 * (fStack_6c4 - fStack_694) - fStack_6f4 * (local_6c8 - local_698);
    fVar39 = fStack_6f4 * (fStack_6c0 - fStack_690) - fStack_6f0 * (fStack_6c4 - fStack_694);
    fVar41 = fStack_6f0 * (local_6c8 - local_698) - local_6f8 * (fStack_6c0 - fStack_690);
    auVar48._12_4_ = fStack_6ec * (fStack_6bc - fStack_68c) - fStack_6ec * (fStack_6bc - fStack_68c)
    ;
    auVar48._4_4_ = fVar41;
    auVar48._0_4_ = fVar39;
    auVar48._8_4_ = fVar42;
    fVar39 = fVar39 * fVar39;
    fVar41 = fVar41 * fVar41;
    fVar42 = fVar42 * fVar42;
    auVar20._4_4_ = fVar39;
    auVar20._0_4_ = fVar39;
    auVar20._8_4_ = fVar39;
    auVar20._12_4_ = fVar39;
    fVar40 = fVar42 + fVar41 + fVar39;
    if (fVar40 == 0.0) {
      auVar23 = ZEXT816(0);
    }
    else {
      auVar8._4_4_ = fVar42 + fVar41 + fVar39;
      auVar8._0_4_ = fVar40;
      auVar8._8_4_ = fVar42 + fVar41 + fVar39;
      auVar8._12_4_ = fVar42 + fVar41 + fVar39;
      auVar23 = sqrtps(auVar20,auVar8);
      auVar23 = divps(auVar48,auVar23);
    }
    local_250 = 0;
    local_248 = 0;
    local_238 = fVar31 * auVar23._0_4_;
    fStack_234 = fVar33 * auVar23._4_4_;
    fStack_230 = fVar34 * auVar23._8_4_;
    fStack_22c = fVar35 * auVar23._12_4_;
    local_258 = *(undefined8 *)(param_1 + 0x68);
    FUN_1450630f0(param_2[4],&local_298,&local_688);
    FUN_145068920(&local_718,&local_688);
    local_680 = 0;
    if ((-1 < (int)local_67c) && (local_688 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_688,(ulonglong)(local_67c & 0x7fffffff) * 0x14);
    }
    local_688 = 0;
    local_67c = 0x80000000;
    if (local_710 != 0) {
      FUN_145068400(local_5e0);
      local_218 = local_6f8 * fVar74 + (float)local_668;
      fStack_214 = fStack_6f4 * fVar76 + local_668._4_4_;
      fStack_210 = fStack_6f0 * fVar77 + (float)uStack_660;
      fStack_20c = fStack_6ec * fVar78 + uStack_660._4_4_;
      local_228 = local_6f8 * fVar74 + local_678;
      fStack_224 = fStack_6f4 * fVar76 + fStack_674;
      fStack_220 = fStack_6f0 * fVar77 + fStack_670;
      fStack_21c = fStack_6ec * fVar78 + fStack_66c;
      local_1f8 = local_6f8 * fVar19 + (float)local_668;
      fStack_1f4 = fStack_6f4 * fVar36 + local_668._4_4_;
      fStack_1f0 = fStack_6f0 * fVar37 + (float)uStack_660;
      fStack_1ec = fStack_6ec * fVar38 + uStack_660._4_4_;
      local_208 = local_6f8 * fVar19 + local_678;
      fStack_204 = fStack_6f4 * fVar36 + fStack_674;
      fStack_200 = fStack_6f0 * fVar37 + fStack_670;
      fStack_1fc = fStack_6ec * fVar38 + fStack_66c;
      fVar77 = fStack_6f4 * ((float)local_668 - local_678) -
               local_6f8 * (local_668._4_4_ - fStack_674);
      fVar19 = fStack_6f0 * (local_668._4_4_ - fStack_674) -
               fStack_6f4 * ((float)uStack_660 - fStack_670);
      fVar76 = local_6f8 * ((float)uStack_660 - fStack_670) -
               fStack_6f0 * ((float)local_668 - local_678);
      auVar45._12_4_ =
           fStack_6ec * (uStack_660._4_4_ - fStack_66c) -
           fStack_6ec * (uStack_660._4_4_ - fStack_66c);
      auVar45._4_4_ = fVar76;
      auVar45._0_4_ = fVar19;
      auVar45._8_4_ = fVar77;
      fVar19 = fVar19 * fVar19;
      fVar76 = fVar76 * fVar76;
      fVar77 = fVar77 * fVar77;
      auVar21._4_4_ = fVar19;
      auVar21._0_4_ = fVar19;
      auVar21._8_4_ = fVar19;
      auVar21._12_4_ = fVar19;
      fVar74 = fVar77 + fVar76 + fVar19;
      if (fVar74 == 0.0) {
        auVar23 = ZEXT816(0);
      }
      else {
        auVar7._4_4_ = fVar77 + fVar76 + fVar19;
        auVar7._0_4_ = fVar74;
        auVar7._8_4_ = fVar77 + fVar76 + fVar19;
        auVar7._12_4_ = fVar77 + fVar76 + fVar19;
        auVar23 = sqrtps(auVar21,auVar7);
        auVar23 = divps(auVar45,auVar23);
      }
      local_1e0 = 0;
      local_1d8 = 0;
      local_1c8 = fVar31 * auVar23._0_4_;
      fStack_1c4 = fVar33 * auVar23._4_4_;
      fStack_1c0 = fVar34 * auVar23._8_4_;
      fStack_1bc = fVar35 * auVar23._12_4_;
      local_1e8 = *(undefined8 *)(param_1 + 0x68);
      FUN_1450630f0(param_2[4],&local_228,local_5e0);
      FUN_145068920(&local_718,local_5e0);
      FUN_144d340d0(local_5e0);
      if (local_710 != 0) goto LAB_144d38d57;
    }
  }
  local_710 = 0;
  if ((-1 < (int)local_70c) && (local_718 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_718,(ulonglong)(local_70c & 0x7fffffff) * 0x14);
  }
  local_718 = 0;
  local_70c = 0x80000000;
LAB_144d39627:
  local_700 = 0;
  if ((-1 < (int)local_6fc) && (local_708 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_708,(ulonglong)(local_6fc & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 144d396d0 FUN_144d396d0 body=401 status=ok
// SIG undefined FUN_144d396d0(void)

undefined8
FUN_144d396d0(longlong param_1,undefined4 *param_2,undefined8 param_3,float *param_4,
             undefined1 (*param_5) [16])

{
  float fVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  float local_54;
  float local_50 [2];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_144d3eab0(param_1,&local_48,*param_2,param_3);
  local_58 = local_48;
  iVar2 = FUN_144d3eaf0(param_1,*param_2,0,&local_58);
  if (iVar2 != 0) {
    local_48 = local_58;
    fStack_44 = local_58;
    fStack_40 = local_58;
    fStack_3c = local_58;
    iVar2 = FUN_144d3eb20(param_1,*param_2,0,local_58,&local_54);
    if (iVar2 != 0) {
      FUN_144d3eb20(param_1,*param_2,1,local_48,local_50);
      FUN_144d3eb50(param_1,*param_2,0,&local_28);
      FUN_144d3eb50(param_1,*param_2,1,&local_38);
      FUN_144d3eb50(param_1,*param_2,2,&local_18);
      fVar4 = *(float *)(param_1 + 0x20);
      fVar7 = *(float *)(param_1 + 0x24);
      fVar8 = *(float *)(param_1 + 0x28);
      fVar1 = *(float *)(param_1 + 0x2c);
      local_38 = local_38 - local_28;
      fStack_34 = fStack_34 - fStack_24;
      fStack_30 = fStack_30 - fStack_20;
      fStack_2c = fStack_2c - fStack_1c;
      *param_4 = local_38 * local_48 + local_28 + local_54 * local_18 + local_50[0] * fVar4;
      param_4[1] = fStack_34 * fStack_44 + fStack_24 + local_54 * fStack_14 + local_50[0] * fVar7;
      param_4[2] = fStack_30 * fStack_40 + fStack_20 + local_54 * fStack_10 + local_50[0] * fVar8;
      param_4[3] = fStack_2c * fStack_3c + fStack_1c + local_54 * fStack_c + local_50[0] * fVar1;
      fVar10 = fStack_34 * fVar4 - fVar7 * local_38;
      fVar11 = fStack_30 * fVar7 - fVar8 * fStack_34;
      fVar12 = local_38 * fVar8 - fVar4 * fStack_30;
      fVar4 = fVar11 * fVar11;
      fVar7 = fVar12 * fVar12;
      fVar8 = fVar10 * fVar10;
      auVar3._4_4_ = fVar4;
      auVar3._0_4_ = fVar4;
      auVar3._8_4_ = fVar4;
      auVar3._12_4_ = fVar4;
      fVar9 = fVar7 + fVar4 + fVar8;
      auVar6 = ZEXT816(0);
      if (fVar9 != 0.0) {
        auVar6._4_4_ = fVar7 + fVar4 + fVar8;
        auVar6._0_4_ = fVar9;
        auVar6._8_4_ = fVar7 + fVar4 + fVar8;
        auVar6._12_4_ = fVar7 + fVar4 + fVar8;
        auVar3 = sqrtps(auVar3,auVar6);
        auVar5._4_4_ = fVar12;
        auVar5._0_4_ = fVar11;
        auVar5._8_4_ = fVar10;
        auVar5._12_4_ = fStack_2c * fVar1 - fVar1 * fStack_2c;
        auVar6 = divps(auVar5,auVar3);
      }
      *param_5 = auVar6;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144d398b0 FUN_144d398b0 body=63 status=ok
// SIG undefined FUN_144d398b0(void)

void FUN_144d398b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144d398f0 FUN_144d398f0 body=97 status=ok
// SIG undefined FUN_144d398f0(void)

void FUN_144d398f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d39a40 FUN_144d39a40 body=1222 status=ok
// SIG undefined FUN_144d39a40(void)

void FUN_144d39a40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x88);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      puVar1 = puVar2 + -0x11;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-0x10] = 0xffffffff;
        puVar2[-0xf] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + -0xe) = *(undefined4 *)(param_2 + -0x70 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x6c) =
             *(undefined4 *)(param_2 + -0x6c + (longlong)puVar2);
        puVar2[-0xd] = *(undefined8 *)(param_2 + -0x68 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -0xc) = *(undefined4 *)(param_2 + -0x60 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba51b0;
        *(undefined4 *)(puVar2 + -0xb) = *(undefined4 *)(param_2 + -0x58 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x54) =
             *(undefined4 *)(param_2 + -0x54 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -10) = *(undefined4 *)(param_2 + -0x50 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x4c) =
             *(undefined4 *)(param_2 + -0x4c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -9) = *(undefined4 *)(param_2 + -0x48 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x44) =
             *(undefined4 *)(param_2 + -0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -8) = *(undefined4 *)(param_2 + -0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x3c) =
             *(undefined4 *)(param_2 + -0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -7) = *(undefined4 *)(param_2 + -0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x34) =
             *(undefined4 *)(param_2 + -0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -6) = *(undefined4 *)(param_2 + -0x30 + (longlong)puVar2);
        puVar2[-5] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x28);
        puVar2[-4] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x20);
        puVar2[-3] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x18);
      }
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
        *puVar1 = &PTR_LAB_14aba51b0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x20);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)(param_2 + 0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x3c) =
             *(undefined4 *)(param_2 + 0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x44) =
             *(undefined4 *)(param_2 + 0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar2);
        puVar2[10] = *(undefined8 *)(param_2 + 0x50 + (longlong)puVar2);
        puVar2[0xb] = *(undefined8 *)(param_2 + 0x58 + (longlong)puVar2);
        puVar2[0xc] = *(undefined8 *)(param_2 + 0x60 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 0xd;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0xe] = 0xffffffff;
        puVar2[0xf] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x80);
        *(undefined4 *)((longlong)puVar2 + 0x84) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x84);
        puVar2[0x11] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x88);
        *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x90);
        *puVar1 = &PTR_LAB_14aba51b0;
        *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x98);
        *(undefined4 *)((longlong)puVar2 + 0x9c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x9c);
        *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(param_2 + 0xa0 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xa4) =
             *(undefined4 *)(param_2 + 0xa4 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)(param_2 + 0xa8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xac) =
             *(undefined4 *)(param_2 + 0xac + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x16) = *(undefined4 *)(param_2 + 0xb0 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xb4) =
             *(undefined4 *)(param_2 + 0xb4 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x17) = *(undefined4 *)(param_2 + 0xb8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xbc) =
             *(undefined4 *)(param_2 + 0xbc + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)(param_2 + 0xc0 + (longlong)puVar2);
        puVar2[0x19] = *(undefined8 *)(param_2 + 200 + (longlong)puVar2);
        puVar2[0x1a] = *(undefined8 *)(param_2 + 0xd0 + (longlong)puVar2);
        puVar2[0x1b] = *(undefined8 *)(param_2 + 0xd8 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 0x1c;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0x1d] = 0xffffffff;
        puVar2[0x1e] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x1f) = *(undefined4 *)(param_2 + 0xf8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xfc) =
             *(undefined4 *)(param_2 + 0xfc + (longlong)puVar2);
        puVar2[0x20] = *(undefined8 *)(param_2 + 0x100 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x21) = *(undefined4 *)(param_2 + 0x108 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba51b0;
        *(undefined4 *)(puVar2 + 0x22) = *(undefined4 *)(param_2 + 0x110 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x114) =
             *(undefined4 *)(param_2 + 0x114 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x23) = *(undefined4 *)(param_2 + 0x118 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x11c) =
             *(undefined4 *)(param_2 + 0x11c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x120 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x124) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x124);
        *(undefined4 *)(puVar2 + 0x25) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x128);
        *(undefined4 *)((longlong)puVar2 + 300) = *(undefined4 *)((longlong)puVar2 + param_2 + 300);
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x130);
        *(undefined4 *)((longlong)puVar2 + 0x134) =
             *(undefined4 *)(param_2 + 0x134 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x27) = *(undefined4 *)(param_2 + 0x138 + (longlong)puVar2);
        puVar2[0x28] = *(undefined8 *)(param_2 + 0x140 + (longlong)puVar2);
        puVar2[0x29] = *(undefined8 *)(param_2 + 0x148 + (longlong)puVar2);
        puVar2[0x2a] = *(undefined8 *)(param_2 + 0x150 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x3c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    puVar2 = (undefined8 *)(lVar5 * 0x78 + 0x10 + param_1);
    lVar4 = lVar4 - lVar5;
    do {
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar2);
        puVar2[2] = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba51b0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)(param_2 + 0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x3c) =
             *(undefined4 *)(param_2 + 0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x44) =
             *(undefined4 *)(param_2 + 0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar2);
        puVar2[10] = *(undefined8 *)(param_2 + 0x50 + (longlong)puVar2);
        puVar2[0xb] = *(undefined8 *)(param_2 + 0x58 + (longlong)puVar2);
        puVar2[0xc] = *(undefined8 *)(param_2 + 0x60 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0xf;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144d39f10 FUN_144d39f10 body=77 status=ok
// SIG undefined FUN_144d39f10(void)

void FUN_144d39f10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x78 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xf;
      plVar2 = plVar2 + -0xf;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d39f60 FUN_144d39f60 body=55 status=ok
// SIG undefined FUN_144d39f60(void)

void FUN_144d39f60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144d32970(param_1);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d39fa0 FUN_144d39fa0 body=364 status=ok
// SIG undefined FUN_144d39fa0(void)

void FUN_144d39fa0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar4 = (uint *)(param_1 + 0x2c);
    lVar7 = (longlong)param_4;
    do {
      if (puVar4 + -0xb != (uint *)0x0) {
        puVar4[-9] = 0xffffffff;
        puVar4[-8] = 0;
        puVar4[-7] = 1;
        puVar4[-6] = 0;
        *(undefined ***)(puVar4 + -0xb) = hkaiTraversalAnalysis::vftable;
        lVar2 = *(longlong *)((longlong)puVar4 + param_2 + -0x14);
        *(longlong *)(puVar4 + -5) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        puVar4[-3] = 0;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar4);
        uVar5 = (ulonglong)uVar1;
        plVar6 = *(longlong **)(param_2 + -0xc + (longlong)puVar4);
        if (0 < (int)uVar1) {
          plVar3 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(longlong **)(puVar4 + -3) = plVar3;
          puVar4[-1] = uVar1;
          *puVar4 = uVar1;
          do {
            if (plVar3 != (longlong *)0x0) {
              lVar2 = *plVar6;
              *plVar3 = lVar2;
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              plVar6 = plVar6 + 1;
            }
            uVar5 = uVar5 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar5 != 0);
        }
        lVar2 = *(longlong *)(param_2 + 4 + (longlong)puVar4);
        *(longlong *)(puVar4 + 1) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        lVar2 = *(longlong *)(param_2 + 0xc + (longlong)puVar4);
        *(longlong *)(puVar4 + 3) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
      }
      puVar4 = puVar4 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144d3a110 FUN_144d3a110 body=77 status=ok
// SIG undefined FUN_144d3a110(void)

void FUN_144d3a110(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x40 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -8;
      plVar2 = plVar2 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3a160 FUN_144d3a160 body=611 status=ok
// SIG undefined FUN_144d3a160(void)

void FUN_144d3a160(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar6 = (longlong)param_4;
    puVar12 = (uint *)(param_1 + 0x2c);
    do {
      lVar7 = *(longlong *)(param_2 + -0x14 + (longlong)puVar12);
      if (*(longlong *)(puVar12 + -5) != lVar7) {
        if (lVar7 != 0) {
          FUN_144b3d910();
        }
        lVar7 = *(longlong *)(puVar12 + -5);
        *(undefined8 *)(puVar12 + -5) = *(undefined8 *)(param_2 + -0x14 + (longlong)puVar12);
        if (lVar7 != 0) {
          FUN_144b3f230();
        }
      }
      puVar2 = (uint *)(param_2 + -0xc + (longlong)puVar12);
      puVar1 = puVar12 + -3;
      if (puVar2 != puVar1) {
        plVar9 = *(longlong **)puVar2;
        uVar3 = *(uint *)((longlong)puVar12 + param_2 + -4);
        if ((int)(*puVar12 & 0x7fffffff) < (int)uVar3) {
          FUN_144d3e6f0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        if ((int)uVar3 < (int)puVar12[-1]) {
          lVar10 = *(longlong *)puVar1;
          lVar7 = lVar10 + (longlong)(int)puVar12[-1] * 8;
          while (lVar7 != lVar10 + (longlong)(int)uVar3 * 8) {
            plVar8 = (longlong *)(lVar7 + -8);
            lVar7 = lVar7 + -8;
            if (*plVar8 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar8 = *(longlong **)puVar1;
        uVar5 = uVar3;
        if ((int)puVar12[-1] < (int)uVar3) {
          uVar5 = puVar12[-1];
        }
        if ((plVar8 != plVar9) && (lVar7 = (longlong)(int)uVar5, 0 < (int)uVar5)) {
          lVar10 = (longlong)plVar9 - (longlong)plVar8;
          do {
            lVar4 = *(longlong *)(lVar10 + (longlong)plVar8);
            if (*plVar8 != lVar4) {
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              lVar4 = *plVar8;
              *plVar8 = *(longlong *)(lVar10 + (longlong)plVar8);
              if (lVar4 != 0) {
                FUN_144b3f230();
              }
            }
            plVar8 = plVar8 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        plVar9 = plVar9 + (int)uVar5;
        if (0 < (int)(uVar3 - uVar5)) {
          uVar11 = (ulonglong)(uVar3 - uVar5);
          plVar8 = (longlong *)(*(longlong *)puVar1 + (longlong)(int)uVar5 * 8);
          do {
            if (plVar8 != (longlong *)0x0) {
              lVar7 = *plVar9;
              *plVar8 = lVar7;
              if (lVar7 != 0) {
                FUN_144b3d910();
              }
              plVar9 = plVar9 + 1;
            }
            uVar11 = uVar11 - 1;
            plVar8 = plVar8 + 1;
          } while (uVar11 != 0);
        }
        puVar12[-1] = uVar3;
      }
      lVar7 = *(longlong *)(param_2 + 4 + (longlong)puVar12);
      if (*(longlong *)(puVar12 + 1) != lVar7) {
        if (lVar7 != 0) {
          FUN_144b3d910();
        }
        lVar7 = *(longlong *)(puVar12 + 1);
        *(undefined8 *)(puVar12 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar12);
        if (lVar7 != 0) {
          FUN_144b3f230();
        }
      }
      lVar7 = *(longlong *)(param_2 + 0xc + (longlong)puVar12);
      if (*(longlong *)(puVar12 + 3) != lVar7) {
        if (lVar7 != 0) {
          FUN_144b3d910();
        }
        lVar7 = *(longlong *)(puVar12 + 3);
        *(undefined8 *)(puVar12 + 3) = *(undefined8 *)(param_2 + 0xc + (longlong)puVar12);
        if (lVar7 != 0) {
          FUN_144b3f230();
        }
      }
      puVar12 = puVar12 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144d3a570 FUN_144d3a570 body=1113 status=ok
// SIG undefined FUN_144d3a570(void)

void FUN_144d3a570(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x80);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      puVar1 = puVar2 + -0x10;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-0xf] = 0xffffffff;
        puVar2[-0xe] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + -0xd) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x68);
        *(undefined4 *)((longlong)puVar2 + -100) =
             *(undefined4 *)(param_2 + -100 + (longlong)puVar2);
        puVar2[-0xc] = *(undefined8 *)(param_2 + -0x60 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -0xb) = *(undefined4 *)(param_2 + -0x58 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba51f0;
        *(undefined4 *)(puVar2 + -10) = *(undefined4 *)(param_2 + -0x50 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x4c) =
             *(undefined4 *)(param_2 + -0x4c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -9) = *(undefined4 *)(param_2 + -0x48 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x44) =
             *(undefined4 *)(param_2 + -0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -8) = *(undefined4 *)(param_2 + -0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x3c) =
             *(undefined4 *)(param_2 + -0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -7) = *(undefined4 *)(param_2 + -0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x34) =
             *(undefined4 *)(param_2 + -0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -6) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x30);
        puVar2[-5] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x28);
        puVar2[-4] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x20);
        puVar2[-3] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x18);
      }
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
        *puVar1 = &PTR_LAB_14aba51f0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x20);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x24);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x28);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x2c);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x30);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x34);
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x38);
        *(undefined4 *)((longlong)puVar2 + 0x3c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x3c);
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x40);
        puVar2[9] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x48);
        puVar2[10] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x50);
        puVar2[0xb] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x58);
      }
      puVar1 = puVar2 + 0xc;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0xd] = 0xffffffff;
        puVar2[0xe] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x78);
        *(undefined4 *)((longlong)puVar2 + 0x7c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x7c);
        puVar2[0x10] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x80);
        *(undefined4 *)(puVar2 + 0x11) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x88);
        *puVar1 = &PTR_LAB_14aba51f0;
        *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x90);
        *(undefined4 *)((longlong)puVar2 + 0x94) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x94);
        *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x98);
        *(undefined4 *)((longlong)puVar2 + 0x9c) =
             *(undefined4 *)(param_2 + 0x9c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(param_2 + 0xa0 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xa4) =
             *(undefined4 *)(param_2 + 0xa4 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)(param_2 + 0xa8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xac) =
             *(undefined4 *)(param_2 + 0xac + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x16) = *(undefined4 *)(param_2 + 0xb0 + (longlong)puVar2);
        puVar2[0x17] = *(undefined8 *)(param_2 + 0xb8 + (longlong)puVar2);
        puVar2[0x18] = *(undefined8 *)(param_2 + 0xc0 + (longlong)puVar2);
        puVar2[0x19] = *(undefined8 *)(param_2 + 200 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 0x1a;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0x1b] = 0xffffffff;
        puVar2[0x1c] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x1d) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xe8);
        *(undefined4 *)((longlong)puVar2 + 0xec) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0xec);
        puVar2[0x1e] = *(undefined8 *)((longlong)puVar2 + param_2 + 0xf0);
        *(undefined4 *)(puVar2 + 0x1f) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xf8);
        *puVar1 = &PTR_LAB_14aba51f0;
        *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x100);
        *(undefined4 *)((longlong)puVar2 + 0x104) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x104);
        *(undefined4 *)(puVar2 + 0x21) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x108);
        *(undefined4 *)((longlong)puVar2 + 0x10c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x10c);
        *(undefined4 *)(puVar2 + 0x22) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x110);
        *(undefined4 *)((longlong)puVar2 + 0x114) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x114);
        *(undefined4 *)(puVar2 + 0x23) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x118);
        *(undefined4 *)((longlong)puVar2 + 0x11c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x11c);
        *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x120);
        puVar2[0x25] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x128);
        puVar2[0x26] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x130);
        puVar2[0x27] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x138);
      }
      puVar2 = puVar2 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    puVar2 = (undefined8 *)(lVar5 * 0x70 + 0x10 + param_1);
    lVar4 = lVar4 - lVar5;
    do {
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar2);
        puVar2[2] = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba51f0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)(param_2 + 0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x3c) =
             *(undefined4 *)(param_2 + 0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40 + (longlong)puVar2);
        puVar2[9] = *(undefined8 *)(param_2 + 0x48 + (longlong)puVar2);
        puVar2[10] = *(undefined8 *)(param_2 + 0x50 + (longlong)puVar2);
        puVar2[0xb] = *(undefined8 *)(param_2 + 0x58 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0xe;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144d3a9d0 FUN_144d3a9d0 body=77 status=ok
// SIG undefined FUN_144d3a9d0(void)

void FUN_144d3a9d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x70 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xe;
      plVar2 = plVar2 + -0xe;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3aa20 FUN_144d3aa20 body=32 status=ok
// SIG undefined FUN_144d3aa20(void)

undefined8 FUN_144d3aa20(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144d3aad0 FUN_144d3aad0 body=449 status=ok
// SIG undefined FUN_144d3aad0(void)

void FUN_144d3aad0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_4;
  lVar3 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x40);
    lVar1 = (lVar4 - 4U >> 2) + 1;
    lVar3 = lVar1 * 4;
    do {
      if (puVar2 + -8 != (undefined8 *)0x0) {
        puVar2[-7] = 0xffffffff;
        puVar2[-6] = 1;
        puVar2[-8] = &PTR_LAB_14aba2ae0;
        *(undefined4 *)(puVar2 + -5) = *(undefined4 *)(param_2 + -0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x24) =
             *(undefined4 *)(param_2 + -0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -4) = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x1c) =
             *(undefined4 *)(param_2 + -0x1c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -3) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x18);
      }
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = &PTR_LAB_14aba2ae0;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)((longlong)puVar2 + 0x14) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x14);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
      }
      if (puVar2 + 4 != (undefined8 *)0x0) {
        puVar2[5] = 0xffffffff;
        puVar2[6] = 1;
        puVar2[4] = &PTR_LAB_14aba2ae0;
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x3c) =
             *(undefined4 *)(param_2 + 0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x44) =
             *(undefined4 *)(param_2 + 0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar2);
      }
      if (puVar2 + 10 != (undefined8 *)0x0) {
        puVar2[0xb] = 0xffffffff;
        puVar2[0xc] = 1;
        puVar2[10] = &PTR_LAB_14aba2ae0;
        *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(param_2 + 0x68 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x6c) =
             *(undefined4 *)(param_2 + 0x6c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(param_2 + 0x70 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x74) =
             *(undefined4 *)(param_2 + 0x74 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(param_2 + 0x78 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x18;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (lVar3 < lVar4) {
    puVar2 = (undefined8 *)(lVar3 * 0x30 + 0x10 + param_1);
    lVar4 = lVar4 - lVar3;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = &PTR_LAB_14aba2ae0;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)((longlong)puVar2 + 0x14) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x14);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
      }
      puVar2 = puVar2 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144d3aca0 FUN_144d3aca0 body=88 status=ok
// SIG undefined FUN_144d3aca0(void)

void FUN_144d3aca0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x30 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -6;
      plVar2 = plVar2 + -6;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3af20 FUN_144d3af20 body=863 status=ok
// SIG undefined FUN_144d3af20(void)

void FUN_144d3af20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x68);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      puVar1 = puVar2 + -0xd;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-0xc] = 0xffffffff;
        puVar2[-0xb] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + -10) = *(undefined4 *)(param_2 + -0x50 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x4c) =
             *(undefined4 *)(param_2 + -0x4c + (longlong)puVar2);
        puVar2[-9] = *(undefined8 *)(param_2 + -0x48 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -8) = *(undefined4 *)(param_2 + -0x40 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba5230;
        *(undefined4 *)(puVar2 + -7) = *(undefined4 *)(param_2 + -0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x34) =
             *(undefined4 *)(param_2 + -0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -6) = *(undefined4 *)(param_2 + -0x30 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x2c) =
             *(undefined4 *)(param_2 + -0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -5) = *(undefined4 *)(param_2 + -0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x24) =
             *(undefined4 *)(param_2 + -0x24 + (longlong)puVar2);
        puVar2[-4] = *(undefined8 *)(param_2 + -0x20 + (longlong)puVar2);
        puVar2[-3] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x18);
      }
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba5230;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)(param_2 + 0x34 + (longlong)puVar2);
        puVar2[7] = *(undefined8 *)(param_2 + 0x38 + (longlong)puVar2);
        puVar2[8] = *(undefined8 *)(param_2 + 0x40 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 9;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[10] = 0xffffffff;
        puVar2[0xb] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_2 + 0x60 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)(param_2 + 100 + (longlong)puVar2);
        puVar2[0xd] = *(undefined8 *)(param_2 + 0x68 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(param_2 + 0x70 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba5230;
        *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(param_2 + 0x78 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x7c) =
             *(undefined4 *)(param_2 + 0x7c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(param_2 + 0x80 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x84) =
             *(undefined4 *)(param_2 + 0x84 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x11) = *(undefined4 *)(param_2 + 0x88 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x8c) =
             *(undefined4 *)(param_2 + 0x8c + (longlong)puVar2);
        puVar2[0x12] = *(undefined8 *)(param_2 + 0x90 + (longlong)puVar2);
        puVar2[0x13] = *(undefined8 *)(param_2 + 0x98 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 0x14;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0x15] = 0xffffffff;
        puVar2[0x16] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x17) = *(undefined4 *)(param_2 + 0xb8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xbc) =
             *(undefined4 *)(param_2 + 0xbc + (longlong)puVar2);
        puVar2[0x18] = *(undefined8 *)(param_2 + 0xc0 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x19) = *(undefined4 *)(param_2 + 200 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba5230;
        *(undefined4 *)(puVar2 + 0x1a) = *(undefined4 *)(param_2 + 0xd0 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xd4) =
             *(undefined4 *)(param_2 + 0xd4 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(param_2 + 0xd8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xdc) =
             *(undefined4 *)(param_2 + 0xdc + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)(param_2 + 0xe0 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xe4) =
             *(undefined4 *)(param_2 + 0xe4 + (longlong)puVar2);
        puVar2[0x1d] = *(undefined8 *)(param_2 + 0xe8 + (longlong)puVar2);
        puVar2[0x1e] = *(undefined8 *)(param_2 + 0xf0 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x2c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    puVar2 = (undefined8 *)(lVar5 * 0x58 + 0x10 + param_1);
    lVar4 = lVar4 - lVar5;
    do {
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
        *puVar1 = &PTR_LAB_14aba5230;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x20);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x24);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x28);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x2c);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x30);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x34);
        puVar2[7] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x38);
        puVar2[8] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x40);
      }
      puVar2 = puVar2 + 0xb;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144d3b280 FUN_144d3b280 body=77 status=ok
// SIG undefined FUN_144d3b280(void)

void FUN_144d3b280(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x58 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xb;
      plVar2 = plVar2 + -0xb;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3b2d0 FUN_144d3b2d0 body=88 status=ok
// SIG undefined FUN_144d3b2d0(void)

void FUN_144d3b2d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x30 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -6;
      plVar2 = plVar2 + -6;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3b4f0 FUN_144d3b4f0 body=757 status=ok
// SIG undefined FUN_144d3b4f0(void)

void FUN_144d3b4f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x60);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      puVar1 = puVar2 + -0xc;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-0xb] = 0xffffffff;
        puVar2[-10] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + -9) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x48);
        *(undefined4 *)((longlong)puVar2 + -0x44) =
             *(undefined4 *)((longlong)puVar2 + param_2 + -0x44);
        puVar2[-8] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x40);
        *(undefined4 *)(puVar2 + -7) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x38);
        *puVar1 = &PTR_LAB_14aba5270;
        *(undefined4 *)(puVar2 + -6) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x30);
        *(undefined4 *)((longlong)puVar2 + -0x2c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + -0x2c);
        *(undefined4 *)(puVar2 + -5) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x28);
        *(undefined4 *)((longlong)puVar2 + -0x24) =
             *(undefined4 *)((longlong)puVar2 + param_2 + -0x24);
        puVar2[-4] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x20);
        puVar2[-3] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x18);
      }
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
        *puVar1 = &PTR_LAB_14aba5270;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x20);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x24);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x28);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x2c);
        puVar2[6] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x30);
        puVar2[7] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x38);
      }
      puVar1 = puVar2 + 8;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[9] = 0xffffffff;
        puVar2[10] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x58);
        *(undefined4 *)((longlong)puVar2 + 0x5c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x5c);
        puVar2[0xc] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x60);
        *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x68);
        *puVar1 = &PTR_LAB_14aba5270;
        *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x70);
        *(undefined4 *)((longlong)puVar2 + 0x74) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x74);
        *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x78);
        *(undefined4 *)((longlong)puVar2 + 0x7c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x7c);
        puVar2[0x10] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x80);
        puVar2[0x11] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x88);
      }
      puVar1 = puVar2 + 0x12;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0x13] = 0xffffffff;
        puVar2[0x14] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xa8);
        *(undefined4 *)((longlong)puVar2 + 0xac) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0xac);
        puVar2[0x16] = *(undefined8 *)((longlong)puVar2 + param_2 + 0xb0);
        *(undefined4 *)(puVar2 + 0x17) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xb8);
        *puVar1 = &PTR_LAB_14aba5270;
        *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc0);
        *(undefined4 *)((longlong)puVar2 + 0xc4) =
             *(undefined4 *)(param_2 + 0xc4 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x19) = *(undefined4 *)(param_2 + 200 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xcc) =
             *(undefined4 *)(param_2 + 0xcc + (longlong)puVar2);
        puVar2[0x1a] = *(undefined8 *)((longlong)puVar2 + param_2 + 0xd0);
        puVar2[0x1b] = *(undefined8 *)((longlong)puVar2 + param_2 + 0xd8);
      }
      puVar2 = puVar2 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    puVar2 = (undefined8 *)(lVar5 * 0x50 + 0x10 + param_1);
    lVar4 = lVar4 - lVar5;
    do {
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar2);
        puVar2[2] = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba5270;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        puVar2[6] = *(undefined8 *)(param_2 + 0x30 + (longlong)puVar2);
        puVar2[7] = *(undefined8 *)(param_2 + 0x38 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144d3b7f0 FUN_144d3b7f0 body=88 status=ok
// SIG undefined FUN_144d3b7f0(void)

void FUN_144d3b7f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3b910 FUN_144d3b910 body=997 status=ok
// SIG undefined FUN_144d3b910(void)

void FUN_144d3b910(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  int *piVar22;
  longlong lVar23;
  uint *puVar24;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar23 = (longlong)param_4;
    puVar24 = (uint *)(param_1 + 0x6c);
    do {
      if (puVar24 + -0x1b != (uint *)0x0) {
        puVar24[-0x19] = 0xffffffff;
        puVar24[-0x18] = 0;
        puVar24[-0x17] = 1;
        puVar24[-0x16] = 0;
        *(undefined ***)(puVar24 + -0x1b) = hkaiTraversalAnnotationLibrary::vftable;
        puVar4 = (uint *)(param_2 + -0x4c + (longlong)puVar24);
        uVar5 = puVar4[1];
        uVar8 = puVar4[2];
        uVar9 = puVar4[3];
        puVar24[-0x13] = *puVar4;
        puVar24[-0x12] = uVar5;
        puVar24[-0x11] = uVar8;
        puVar24[-0x10] = uVar9;
        FUN_144d324d0(puVar24 + -0xf,param_2 + -0x3c + (longlong)puVar24);
        puVar24[-7] = 0;
        puVar24[-6] = 0;
        puVar24[-5] = 0;
        puVar24[-4] = 0x80000000;
        uVar5 = *(uint *)(param_2 + -0x14 + (longlong)puVar24);
        lVar7 = *(longlong *)((longlong)puVar24 + param_2 + -0x1c);
        if (0 < (int)uVar5) {
          puVar17 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar5 * 0x90);
          *(undefined8 **)(puVar24 + -7) = puVar17;
          uVar18 = (ulonglong)uVar5;
          puVar24[-5] = uVar5;
          piVar22 = (int *)(lVar7 + 0x68);
          puVar24[-4] = uVar5;
          do {
            if (puVar17 != (undefined8 *)0x0) {
              uVar15 = *(undefined8 *)(piVar22 + -0x18);
              plVar1 = puVar17 + 8;
              *puVar17 = *(undefined8 *)(piVar22 + -0x1a);
              puVar17[1] = uVar15;
              iVar6 = piVar22[-0x15];
              iVar10 = piVar22[-0x14];
              iVar11 = piVar22[-0x13];
              *(int *)(puVar17 + 2) = piVar22[-0x16];
              *(int *)((longlong)puVar17 + 0x14) = iVar6;
              *(int *)(puVar17 + 3) = iVar10;
              *(int *)((longlong)puVar17 + 0x1c) = iVar11;
              iVar6 = piVar22[-0x11];
              iVar10 = piVar22[-0x10];
              iVar11 = piVar22[-0xf];
              *(int *)(puVar17 + 4) = piVar22[-0x12];
              *(int *)((longlong)puVar17 + 0x24) = iVar6;
              *(int *)(puVar17 + 5) = iVar10;
              *(int *)((longlong)puVar17 + 0x2c) = iVar11;
              *(int *)(puVar17 + 6) = piVar22[-0xe];
              *(int *)((longlong)puVar17 + 0x34) = piVar22[-0xd];
              *(int *)(puVar17 + 7) = piVar22[-0xc];
              *(int *)((longlong)puVar17 + 0x3c) = piVar22[-0xb];
              *plVar1 = (longlong)(puVar17 + 10);
              *(undefined4 *)(puVar17 + 9) = 0;
              *(undefined4 *)((longlong)puVar17 + 0x4c) = 0x80000004;
              if ((longlong *)(piVar22 + -10) != plVar1) {
                iVar6 = piVar22[-8];
                lVar7 = *(longlong *)(piVar22 + -10);
                if (4 < iVar6) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
                }
                FUN_144b3d470(*plVar1,lVar7,(longlong)iVar6 * 4);
                *(int *)(puVar17 + 9) = iVar6;
              }
              plVar1 = puVar17 + 0xc;
              *(undefined4 *)(puVar17 + 0xd) = 0;
              *plVar1 = (longlong)(puVar17 + 0xe);
              *(undefined4 *)((longlong)puVar17 + 0x6c) = 0x80000004;
              if ((longlong *)(piVar22 + -2) != plVar1) {
                iVar6 = *piVar22;
                lVar7 = *(longlong *)(piVar22 + -2);
                if (4 < iVar6) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
                }
                FUN_144b3d470(*plVar1,lVar7,(longlong)iVar6 * 4);
                *(int *)(puVar17 + 0xd) = iVar6;
              }
              *(short *)(puVar17 + 0x10) = (short)piVar22[6];
              *(undefined2 *)((longlong)puVar17 + 0x82) = *(undefined2 *)((longlong)piVar22 + 0x1a);
              piVar2 = piVar22 + 7;
              piVar22 = piVar22 + 0x24;
              *(char *)((longlong)puVar17 + 0x84) = (char)*piVar2;
            }
            uVar18 = uVar18 - 1;
            puVar17 = puVar17 + 0x12;
          } while (uVar18 != 0);
        }
        puVar24[-3] = 0;
        puVar24[-2] = 0;
        puVar24[-1] = 0;
        *puVar24 = 0x80000000;
        uVar5 = *(uint *)(param_2 + -4 + (longlong)puVar24);
        lVar7 = *(longlong *)(param_2 + -0xc + (longlong)puVar24);
        if (0 < (int)uVar5) {
          puVar19 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar5 * 0x30);
          *(undefined4 **)(puVar24 + -3) = puVar19;
          puVar21 = (undefined4 *)(lVar7 + 0x18);
          puVar24[-1] = uVar5;
          uVar18 = (ulonglong)uVar5;
          *puVar24 = uVar5;
          do {
            if (puVar19 != (undefined4 *)0x0) {
              uVar12 = puVar21[-5];
              uVar13 = puVar21[-4];
              uVar14 = puVar21[-3];
              *puVar19 = puVar21[-6];
              puVar19[1] = uVar12;
              puVar19[2] = uVar13;
              puVar19[3] = uVar14;
              *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(puVar21 + -2);
              puVar19[6] = *puVar21;
              puVar19[7] = puVar21[1];
              *(undefined1 *)(puVar19 + 8) = *(undefined1 *)(puVar21 + 2);
              *(undefined1 *)((longlong)puVar19 + 0x21) = *(undefined1 *)((longlong)puVar21 + 9);
              puVar3 = (undefined1 *)((longlong)puVar21 + 10);
              puVar21 = puVar21 + 0xc;
              *(undefined1 *)((longlong)puVar19 + 0x22) = *puVar3;
            }
            uVar18 = uVar18 - 1;
            puVar19 = puVar19 + 0xc;
          } while (uVar18 != 0);
        }
        puVar24[1] = 0;
        puVar24[2] = 0;
        puVar24[3] = 0;
        puVar24[4] = 0x80000000;
        uVar5 = *(uint *)(param_2 + 0xc + (longlong)puVar24);
        puVar17 = *(undefined8 **)(param_2 + 4 + (longlong)puVar24);
        if (0 < (int)uVar5) {
          puVar20 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar5 << 4);
          *(undefined8 **)(puVar24 + 1) = puVar20;
          uVar18 = (ulonglong)uVar5;
          puVar24[3] = uVar5;
          puVar24[4] = uVar5;
          do {
            if (puVar20 != (undefined8 *)0x0) {
              uVar15 = *puVar17;
              uVar16 = puVar17[1];
              puVar17 = puVar17 + 2;
              *puVar20 = uVar15;
              puVar20[1] = uVar16;
            }
            uVar18 = uVar18 - 1;
            puVar20 = puVar20 + 2;
          } while (uVar18 != 0);
        }
      }
      puVar24 = puVar24 + 0x20;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  return;
}



// FUNCTION 144d3bd00 FUN_144d3bd00 body=77 status=ok
// SIG undefined FUN_144d3bd00(void)

void FUN_144d3bd00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x80 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x10;
      plVar2 = plVar2 + -0x10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3bd50 FUN_144d3bd50 body=70 status=ok
// SIG undefined FUN_144d3bd50(void)

void FUN_144d3bd50(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144d3dbd0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144d3bdd0 FUN_144d3bdd0 body=80 status=ok
// SIG undefined FUN_144d3bdd0(void)

void FUN_144d3bdd0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3be20 FUN_144d3be20 body=63 status=ok
// SIG undefined FUN_144d3be20(void)

void FUN_144d3be20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144d3be60 FUN_144d3be60 body=97 status=ok
// SIG undefined FUN_144d3be60(void)

void FUN_144d3be60(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3bed0 FUN_144d3bed0 body=62 status=ok
// SIG undefined FUN_144d3bed0(void)

undefined8 * FUN_144d3bed0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c703120);
  *param_2 = param_1;
  param_2[1] = &DAT_14c703120;
  return param_2;
}



// FUNCTION 144d3bf10 FUN_144d3bf10 body=71 status=ok
// SIG undefined FUN_144d3bf10(void)

undefined8 * FUN_144d3bf10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144d3bf60 FUN_144d3bf60 body=18 status=ok
// SIG undefined FUN_144d3bf60(void)

undefined8 * FUN_144d3bf60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c703180;
  return param_2;
}



// FUNCTION 144d3c030 FUN_144d3c030 body=816 status=ok
// SIG undefined FUN_144d3c030(void)

void FUN_144d3c030(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x68);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      puVar1 = puVar2 + -0xd;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-0xc] = 0xffffffff;
        puVar2[-0xb] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + -10) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x50);
        *(undefined4 *)((longlong)puVar2 + -0x4c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + -0x4c);
        puVar2[-9] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x48);
        *(undefined4 *)(puVar2 + -8) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x40);
        *puVar1 = &PTR_LAB_14aba52b0;
        *(undefined4 *)(puVar2 + -7) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x38);
        *(undefined4 *)((longlong)puVar2 + -0x34) =
             *(undefined4 *)((longlong)puVar2 + param_2 + -0x34);
        *(undefined4 *)(puVar2 + -6) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x30);
        *(undefined4 *)((longlong)puVar2 + -0x2c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + -0x2c);
        *(undefined4 *)(puVar2 + -5) = *(undefined4 *)((longlong)puVar2 + param_2 + -0x28);
        puVar2[-4] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x20);
        puVar2[-3] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x18);
      }
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
        *puVar1 = &PTR_LAB_14aba52b0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x20);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x24);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x28);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        puVar2[7] = *(undefined8 *)(param_2 + 0x38 + (longlong)puVar2);
        puVar2[8] = *(undefined8 *)(param_2 + 0x40 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 9;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[10] = 0xffffffff;
        puVar2[0xb] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x60);
        *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)((longlong)puVar2 + param_2 + 100);
        puVar2[0xd] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x68);
        *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x70);
        *puVar1 = &PTR_LAB_14aba52b0;
        *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x78);
        *(undefined4 *)((longlong)puVar2 + 0x7c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x7c);
        *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x80);
        *(undefined4 *)((longlong)puVar2 + 0x84) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x84);
        *(undefined4 *)(puVar2 + 0x11) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x88);
        puVar2[0x12] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x90);
        puVar2[0x13] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x98);
      }
      puVar1 = puVar2 + 0x14;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0x15] = 0xffffffff;
        puVar2[0x16] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x17) = *(undefined4 *)(param_2 + 0xb8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xbc) =
             *(undefined4 *)(param_2 + 0xbc + (longlong)puVar2);
        puVar2[0x18] = *(undefined8 *)(param_2 + 0xc0 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x19) = *(undefined4 *)((longlong)puVar2 + param_2 + 200);
        *puVar1 = &PTR_LAB_14aba52b0;
        *(undefined4 *)(puVar2 + 0x1a) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xd0);
        *(undefined4 *)((longlong)puVar2 + 0xd4) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0xd4);
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xd8);
        *(undefined4 *)((longlong)puVar2 + 0xdc) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0xdc);
        *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xe0);
        puVar2[0x1d] = *(undefined8 *)((longlong)puVar2 + param_2 + 0xe8);
        puVar2[0x1e] = *(undefined8 *)((longlong)puVar2 + param_2 + 0xf0);
      }
      puVar2 = puVar2 + 0x2c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    puVar2 = (undefined8 *)(lVar5 * 0x58 + 0x10 + param_1);
    lVar4 = lVar4 - lVar5;
    do {
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar2);
        puVar2[2] = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba52b0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        puVar2[7] = *(undefined8 *)(param_2 + 0x38 + (longlong)puVar2);
        puVar2[8] = *(undefined8 *)(param_2 + 0x40 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0xb;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144d3c360 FUN_144d3c360 body=77 status=ok
// SIG undefined FUN_144d3c360(void)

void FUN_144d3c360(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x58 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xb;
      plVar2 = plVar2 + -0xb;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3c490 FUN_144d3c490 body=18 status=ok
// SIG undefined FUN_144d3c490(void)

undefined8 * FUN_144d3c490(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c7031e0;
  return param_2;
}



// FUNCTION 144d3c4b0 FUN_144d3c4b0 body=1222 status=ok
// SIG undefined FUN_144d3c4b0(void)

void FUN_144d3c4b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar4) {
    puVar2 = (undefined8 *)(param_1 + 0x88);
    lVar3 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      puVar1 = puVar2 + -0x11;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-0x10] = 0xffffffff;
        puVar2[-0xf] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + -0xe) = *(undefined4 *)(param_2 + -0x70 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x6c) =
             *(undefined4 *)(param_2 + -0x6c + (longlong)puVar2);
        puVar2[-0xd] = *(undefined8 *)(param_2 + -0x68 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -0xc) = *(undefined4 *)(param_2 + -0x60 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba52f0;
        *(undefined4 *)(puVar2 + -0xb) = *(undefined4 *)(param_2 + -0x58 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x54) =
             *(undefined4 *)(param_2 + -0x54 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -10) = *(undefined4 *)(param_2 + -0x50 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x4c) =
             *(undefined4 *)(param_2 + -0x4c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -9) = *(undefined4 *)(param_2 + -0x48 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x44) =
             *(undefined4 *)(param_2 + -0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -8) = *(undefined4 *)(param_2 + -0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x3c) =
             *(undefined4 *)(param_2 + -0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -7) = *(undefined4 *)(param_2 + -0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + -0x34) =
             *(undefined4 *)(param_2 + -0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + -6) = *(undefined4 *)(param_2 + -0x30 + (longlong)puVar2);
        puVar2[-5] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x28);
        puVar2[-4] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x20);
        puVar2[-3] = *(undefined8 *)((longlong)puVar2 + param_2 + -0x18);
      }
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)puVar2 + param_2 + 8);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar2 + param_2 + 0xc);
        puVar2[2] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x10);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x18);
        *puVar1 = &PTR_LAB_14aba52f0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x20);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)(param_2 + 0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x3c) =
             *(undefined4 *)(param_2 + 0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x44) =
             *(undefined4 *)(param_2 + 0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar2);
        puVar2[10] = *(undefined8 *)(param_2 + 0x50 + (longlong)puVar2);
        puVar2[0xb] = *(undefined8 *)(param_2 + 0x58 + (longlong)puVar2);
        puVar2[0xc] = *(undefined8 *)(param_2 + 0x60 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 0xd;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0xe] = 0xffffffff;
        puVar2[0xf] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x80);
        *(undefined4 *)((longlong)puVar2 + 0x84) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x84);
        puVar2[0x11] = *(undefined8 *)((longlong)puVar2 + param_2 + 0x88);
        *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x90);
        *puVar1 = &PTR_LAB_14aba52f0;
        *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x98);
        *(undefined4 *)((longlong)puVar2 + 0x9c) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x9c);
        *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(param_2 + 0xa0 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xa4) =
             *(undefined4 *)(param_2 + 0xa4 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)(param_2 + 0xa8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xac) =
             *(undefined4 *)(param_2 + 0xac + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x16) = *(undefined4 *)(param_2 + 0xb0 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xb4) =
             *(undefined4 *)(param_2 + 0xb4 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x17) = *(undefined4 *)(param_2 + 0xb8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xbc) =
             *(undefined4 *)(param_2 + 0xbc + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)(param_2 + 0xc0 + (longlong)puVar2);
        puVar2[0x19] = *(undefined8 *)(param_2 + 200 + (longlong)puVar2);
        puVar2[0x1a] = *(undefined8 *)(param_2 + 0xd0 + (longlong)puVar2);
        puVar2[0x1b] = *(undefined8 *)(param_2 + 0xd8 + (longlong)puVar2);
      }
      puVar1 = puVar2 + 0x1c;
      if (puVar1 != (undefined8 *)0x0) {
        puVar2[0x1d] = 0xffffffff;
        puVar2[0x1e] = 1;
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(puVar2 + 0x1f) = *(undefined4 *)(param_2 + 0xf8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xfc) =
             *(undefined4 *)(param_2 + 0xfc + (longlong)puVar2);
        puVar2[0x20] = *(undefined8 *)(param_2 + 0x100 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x21) = *(undefined4 *)(param_2 + 0x108 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba52f0;
        *(undefined4 *)(puVar2 + 0x22) = *(undefined4 *)(param_2 + 0x110 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x114) =
             *(undefined4 *)(param_2 + 0x114 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x23) = *(undefined4 *)(param_2 + 0x118 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x11c) =
             *(undefined4 *)(param_2 + 0x11c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x120 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x124) =
             *(undefined4 *)((longlong)puVar2 + param_2 + 0x124);
        *(undefined4 *)(puVar2 + 0x25) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x128);
        *(undefined4 *)((longlong)puVar2 + 300) = *(undefined4 *)((longlong)puVar2 + param_2 + 300);
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)((longlong)puVar2 + param_2 + 0x130);
        *(undefined4 *)((longlong)puVar2 + 0x134) =
             *(undefined4 *)(param_2 + 0x134 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 0x27) = *(undefined4 *)(param_2 + 0x138 + (longlong)puVar2);
        puVar2[0x28] = *(undefined8 *)(param_2 + 0x140 + (longlong)puVar2);
        puVar2[0x29] = *(undefined8 *)(param_2 + 0x148 + (longlong)puVar2);
        puVar2[0x2a] = *(undefined8 *)(param_2 + 0x150 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0x3c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar4) {
    puVar2 = (undefined8 *)(lVar5 * 0x78 + 0x10 + param_1);
    lVar4 = lVar4 - lVar5;
    do {
      puVar1 = puVar2 + -2;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar2);
        puVar2[2] = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar2);
        *puVar1 = &PTR_LAB_14aba52f0;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x24) =
             *(undefined4 *)(param_2 + 0x24 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x2c) =
             *(undefined4 *)(param_2 + 0x2c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x34) =
             *(undefined4 *)(param_2 + 0x34 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x3c) =
             *(undefined4 *)(param_2 + 0x3c + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40 + (longlong)puVar2);
        *(undefined4 *)((longlong)puVar2 + 0x44) =
             *(undefined4 *)(param_2 + 0x44 + (longlong)puVar2);
        *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48 + (longlong)puVar2);
        puVar2[10] = *(undefined8 *)(param_2 + 0x50 + (longlong)puVar2);
        puVar2[0xb] = *(undefined8 *)(param_2 + 0x58 + (longlong)puVar2);
        puVar2[0xc] = *(undefined8 *)(param_2 + 0x60 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 0xf;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144d3c980 FUN_144d3c980 body=77 status=ok
// SIG undefined FUN_144d3c980(void)

void FUN_144d3c980(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x78 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xf;
      plVar2 = plVar2 + -0xf;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3ca40 FUN_144d3ca40 body=528 status=ok
// SIG undefined FUN_144d3ca40(void)

void FUN_144d3ca40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    puVar11 = (uint *)(param_1 + 0x34);
    do {
      if (puVar11 + -0xd != (uint *)0x0) {
        puVar11[-0xb] = 0xffffffff;
        puVar11[-10] = 0;
        puVar11[-9] = 1;
        puVar11[-8] = 0;
        *(undefined ***)(puVar11 + -0xd) = &PTR_LAB_14aba2b40;
        puVar11[-7] = 0;
        puVar11[-6] = 0;
        puVar11[-5] = 0;
        puVar11[-4] = 0x80000000;
        uVar2 = *(uint *)(param_2 + -0x14 + (longlong)puVar11);
        lVar3 = *(longlong *)(param_2 + -0x1c + (longlong)puVar11);
        if (0 < (int)uVar2) {
          plVar7 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x60);
          *(longlong **)(puVar11 + -7) = plVar7;
          puVar10 = (undefined4 *)(lVar3 + 0x30);
          puVar11[-5] = uVar2;
          uVar9 = (ulonglong)uVar2;
          puVar11[-4] = uVar2;
          do {
            if (plVar7 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar10 + -0xc);
              *plVar7 = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              *(undefined4 *)(plVar7 + 1) = puVar10[-10];
              lVar3 = *(longlong *)(puVar10 + -6);
              plVar7[2] = *(longlong *)(puVar10 + -8);
              plVar7[3] = lVar3;
              lVar3 = *(longlong *)(puVar10 + -2);
              plVar7[4] = *(longlong *)(puVar10 + -4);
              plVar7[5] = lVar3;
              uVar4 = puVar10[1];
              uVar5 = puVar10[2];
              uVar6 = puVar10[3];
              *(undefined4 *)(plVar7 + 6) = *puVar10;
              *(undefined4 *)((longlong)plVar7 + 0x34) = uVar4;
              *(undefined4 *)(plVar7 + 7) = uVar5;
              *(undefined4 *)((longlong)plVar7 + 0x3c) = uVar6;
              lVar3 = *(longlong *)(puVar10 + 6);
              plVar7[8] = *(longlong *)(puVar10 + 4);
              plVar7[9] = lVar3;
              puVar1 = puVar10 + 8;
              puVar10 = puVar10 + 0x18;
              *(undefined4 *)(plVar7 + 10) = *puVar1;
            }
            uVar9 = uVar9 - 1;
            plVar7 = plVar7 + 0xc;
          } while (uVar9 != 0);
        }
        puVar11[-3] = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        uVar2 = *(uint *)((longlong)puVar11 + param_2 + -4);
        uVar9 = (ulonglong)uVar2;
        plVar7 = *(longlong **)(param_2 + -0xc + (longlong)puVar11);
        if (0 < (int)uVar2) {
          plVar8 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
          *(longlong **)(puVar11 + -3) = plVar8;
          puVar11[-1] = uVar2;
          *puVar11 = uVar2;
          do {
            if (plVar8 != (longlong *)0x0) {
              lVar3 = *plVar7;
              *plVar8 = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              plVar7 = plVar7 + 1;
            }
            uVar9 = uVar9 - 1;
            plVar8 = plVar8 + 1;
          } while (uVar9 != 0);
        }
        lVar3 = *(longlong *)(param_2 + 4 + (longlong)puVar11);
        *(longlong *)(puVar11 + 1) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
      }
      puVar11 = puVar11 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144d3cc50 FUN_144d3cc50 body=77 status=ok
// SIG undefined FUN_144d3cc50(void)

void FUN_144d3cc50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x40 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -8;
      plVar2 = plVar2 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3cca0 FUN_144d3cca0 body=927 status=ok
// SIG undefined FUN_144d3cca0(void)

void FUN_144d3cca0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint *puVar20;
  longlong *plVar21;
  longlong local_50;
  
  local_50 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar20 = (uint *)(param_1 + 0x34);
    do {
      puVar12 = (uint *)(param_2 + -0x1c + (longlong)puVar20);
      puVar1 = puVar20 + -7;
      if (puVar12 != puVar1) {
        lVar15 = *(longlong *)puVar12;
        uVar5 = *(uint *)(param_2 + -0x14 + (longlong)puVar20);
        if ((int)(puVar20[-4] & 0x7fffffff) < (int)uVar5) {
          FUN_144d3e4f0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar5);
        }
        if ((int)uVar5 < (int)puVar20[-5]) {
          lVar19 = *(longlong *)puVar1;
          lVar13 = (longlong)(int)puVar20[-5] * 0x60 + *(longlong *)puVar1;
          while (lVar13 != (longlong)(int)uVar5 * 0x60 + lVar19) {
            plVar21 = (longlong *)(lVar13 + -0x60);
            lVar13 = lVar13 + -0x60;
            if (*plVar21 != 0) {
              FUN_144b3f230();
            }
          }
        }
        lVar19 = *(longlong *)puVar1;
        uVar7 = uVar5;
        if ((int)puVar20[-5] < (int)uVar5) {
          uVar7 = puVar20[-5];
        }
        if ((lVar19 != lVar15) && (lVar13 = (longlong)(int)uVar7, 0 < (int)uVar7)) {
          puVar14 = (undefined8 *)(lVar19 + 0x20);
          lVar19 = lVar15 - lVar19;
          do {
            lVar6 = *(longlong *)(lVar19 + -0x20 + (longlong)puVar14);
            if (puVar14[-4] != lVar6) {
              if (lVar6 != 0) {
                FUN_144b3d910();
              }
              lVar6 = puVar14[-4];
              puVar14[-4] = *(undefined8 *)(lVar19 + -0x20 + (longlong)puVar14);
              if (lVar6 != 0) {
                FUN_144b3f230();
              }
            }
            *(undefined4 *)(puVar14 + -3) = *(undefined4 *)(lVar19 + -0x18 + (longlong)puVar14);
            puVar3 = (undefined8 *)(lVar19 + -0x10 + (longlong)puVar14);
            uVar11 = puVar3[1];
            puVar14[-2] = *puVar3;
            puVar14[-1] = uVar11;
            uVar11 = ((undefined8 *)(lVar19 + (longlong)puVar14))[1];
            *puVar14 = *(undefined8 *)(lVar19 + (longlong)puVar14);
            puVar14[1] = uVar11;
            puVar4 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar14);
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            *(undefined4 *)(puVar14 + 2) = *puVar4;
            *(undefined4 *)((longlong)puVar14 + 0x14) = uVar8;
            *(undefined4 *)(puVar14 + 3) = uVar9;
            *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar10;
            puVar3 = (undefined8 *)(lVar19 + 0x20 + (longlong)puVar14);
            uVar11 = puVar3[1];
            puVar14[4] = *puVar3;
            puVar14[5] = uVar11;
            *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(lVar19 + 0x30 + (longlong)puVar14);
            puVar14 = puVar14 + 0xc;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        plVar21 = (longlong *)(lVar15 + (longlong)(int)uVar7 * 0x60);
        if (0 < (int)(uVar5 - uVar7)) {
          plVar16 = plVar21 + 6;
          uVar17 = (ulonglong)(uVar5 - uVar7);
          plVar18 = (longlong *)(*(longlong *)puVar1 + (longlong)(int)uVar7 * 0x60);
          do {
            if (plVar18 != (longlong *)0x0) {
              lVar15 = *plVar21;
              *plVar18 = lVar15;
              if (lVar15 != 0) {
                FUN_144b3d910();
              }
              plVar21 = plVar21 + 0xc;
              *(int *)(plVar18 + 1) = (int)plVar16[-5];
              lVar15 = plVar16[-3];
              plVar18[2] = plVar16[-4];
              plVar18[3] = lVar15;
              lVar15 = plVar16[-1];
              plVar18[4] = plVar16[-2];
              plVar18[5] = lVar15;
              uVar8 = *(undefined4 *)((longlong)plVar16 + 4);
              lVar15 = plVar16[1];
              uVar9 = *(undefined4 *)((longlong)plVar16 + 0xc);
              *(int *)(plVar18 + 6) = (int)*plVar16;
              *(undefined4 *)((longlong)plVar18 + 0x34) = uVar8;
              *(int *)(plVar18 + 7) = (int)lVar15;
              *(undefined4 *)((longlong)plVar18 + 0x3c) = uVar9;
              lVar15 = plVar16[3];
              plVar18[8] = plVar16[2];
              plVar18[9] = lVar15;
              plVar2 = plVar16 + 4;
              plVar16 = plVar16 + 0xc;
              *(int *)(plVar18 + 10) = (int)*plVar2;
            }
            uVar17 = uVar17 - 1;
            plVar18 = plVar18 + 0xc;
          } while (uVar17 != 0);
        }
        puVar20[-5] = uVar5;
      }
      puVar1 = puVar20 + -3;
      puVar12 = (uint *)(param_2 + -0xc + (longlong)puVar20);
      if (puVar12 != puVar1) {
        plVar21 = *(longlong **)puVar12;
        uVar5 = *(uint *)(param_2 + -4 + (longlong)puVar20);
        if ((int)(*puVar20 & 0x7fffffff) < (int)uVar5) {
          FUN_144d3e610(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar5);
        }
        if ((int)uVar5 < (int)puVar20[-1]) {
          lVar19 = *(longlong *)puVar1;
          lVar15 = lVar19 + (longlong)(int)puVar20[-1] * 8;
          while (lVar15 != lVar19 + (longlong)(int)uVar5 * 8) {
            plVar16 = (longlong *)(lVar15 + -8);
            lVar15 = lVar15 + -8;
            if (*plVar16 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar16 = *(longlong **)puVar1;
        uVar7 = uVar5;
        if ((int)puVar20[-1] < (int)uVar5) {
          uVar7 = puVar20[-1];
        }
        if ((plVar16 != plVar21) && (lVar15 = (longlong)(int)uVar7, 0 < (int)uVar7)) {
          lVar19 = (longlong)plVar21 - (longlong)plVar16;
          do {
            lVar13 = *(longlong *)(lVar19 + (longlong)plVar16);
            if (*plVar16 != lVar13) {
              if (lVar13 != 0) {
                FUN_144b3d910();
              }
              lVar13 = *plVar16;
              *plVar16 = *(longlong *)(lVar19 + (longlong)plVar16);
              if (lVar13 != 0) {
                FUN_144b3f230();
              }
            }
            plVar16 = plVar16 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        plVar21 = plVar21 + (int)uVar7;
        if (0 < (int)(uVar5 - uVar7)) {
          uVar17 = (ulonglong)(uVar5 - uVar7);
          plVar16 = (longlong *)(*(longlong *)puVar1 + (longlong)(int)uVar7 * 8);
          do {
            if (plVar16 != (longlong *)0x0) {
              lVar15 = *plVar21;
              *plVar16 = lVar15;
              if (lVar15 != 0) {
                FUN_144b3d910();
              }
              plVar21 = plVar21 + 1;
            }
            uVar17 = uVar17 - 1;
            plVar16 = plVar16 + 1;
          } while (uVar17 != 0);
        }
        puVar20[-1] = uVar5;
      }
      lVar15 = *(longlong *)(param_2 + 4 + (longlong)puVar20);
      if (*(longlong *)(puVar20 + 1) != lVar15) {
        if (lVar15 != 0) {
          FUN_144b3d910();
        }
        lVar15 = *(longlong *)(puVar20 + 1);
        *(undefined8 *)(puVar20 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar20);
        if (lVar15 != 0) {
          FUN_144b3f230();
        }
      }
      puVar20 = puVar20 + 0x10;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  return;
}



// FUNCTION 144d3d080 FUN_144d3d080 body=91 status=ok
// SIG undefined FUN_144d3d080(void)

void FUN_144d3d080(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144d3d0e0 FUN_144d3d0e0 body=91 status=ok
// SIG undefined FUN_144d3d0e0(void)

void FUN_144d3d0e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144d3d140 FUN_144d3d140 body=561 status=ok
// SIG undefined FUN_144d3d140(void)

void FUN_144d3d140(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong local_38;
  
  local_38 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar13 = (longlong *)(param_1 + 0x10);
    do {
      plVar7 = (longlong *)(param_2 + -0x10 + (longlong)plVar13);
      plVar1 = plVar13 + -2;
      if (plVar1 != plVar7) {
        lVar3 = *plVar7;
        iVar2 = *(int *)((longlong)plVar13 + param_2 + -8);
        if ((int)(*(uint *)((longlong)plVar13 + -4) & 0x7fffffff) < iVar2) {
          FUN_144d3e7d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar13[-1]) {
          lVar4 = *plVar1;
          lVar8 = (longlong)(int)plVar13[-1] * 0x10 + *plVar1;
          while (lVar8 != (longlong)iVar2 * 0x10 + lVar4) {
            plVar7 = (longlong *)(lVar8 + -8);
            lVar8 = lVar8 + -0x10;
            if (*plVar7 != 0) {
              FUN_144b3f230();
            }
          }
        }
        lVar4 = *plVar1;
        iVar6 = iVar2;
        if ((int)plVar13[-1] < iVar2) {
          iVar6 = (int)plVar13[-1];
        }
        if ((lVar4 != lVar3) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
          plVar7 = (longlong *)(lVar3 + 8);
          lVar10 = lVar4 - lVar3;
          do {
            *(int *)(lVar10 + -8 + (longlong)plVar7) = (int)plVar7[-1];
            *(undefined4 *)((longlong)plVar7 + lVar10 + -4) =
                 *(undefined4 *)((longlong)plVar7 + (lVar3 - lVar4) + lVar10 + -4);
            if (*(longlong *)((longlong)plVar7 + lVar10) != *plVar7) {
              if (*plVar7 != 0) {
                FUN_144b3d910();
              }
              lVar5 = *(longlong *)((longlong)plVar7 + lVar10);
              *(longlong *)((longlong)plVar7 + lVar10) = *plVar7;
              if (lVar5 != 0) {
                FUN_144b3f230();
              }
            }
            plVar7 = plVar7 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined4 *)((longlong)iVar6 * 0x10 + lVar3);
        if (0 < iVar2 - iVar6) {
          uVar11 = (ulonglong)(uint)(iVar2 - iVar6);
          puVar12 = (undefined4 *)(*plVar1 + (longlong)iVar6 * 0x10);
          do {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar9;
              puVar12[1] = puVar9[1];
              lVar3 = *(longlong *)(puVar9 + 2);
              *(longlong *)(puVar12 + 2) = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              puVar9 = puVar9 + 4;
            }
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 4;
          } while (uVar11 != 0);
        }
        *(int *)(plVar13 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar13) != plVar13) {
          lVar3 = *plVar13;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar13);
          }
          FUN_140069ea2(plVar13,(longlong *)(param_2 + (longlong)plVar13));
        }
      }
      plVar13 = plVar13 + 4;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  return;
}



// FUNCTION 144d3d3c0 FUN_144d3d3c0 body=80 status=ok
// SIG undefined FUN_144d3d3c0(void)

void FUN_144d3d3c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3d410 FUN_144d3d410 body=63 status=ok
// SIG undefined FUN_144d3d410(void)

void FUN_144d3d410(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144d3d450 FUN_144d3d450 body=97 status=ok
// SIG undefined FUN_144d3d450(void)

void FUN_144d3d450(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3d4f0 FUN_144d3d4f0 body=80 status=ok
// SIG undefined FUN_144d3d4f0(void)

void FUN_144d3d4f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3d540 FUN_144d3d540 body=63 status=ok
// SIG undefined FUN_144d3d540(void)

void FUN_144d3d540(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144d3d580 FUN_144d3d580 body=97 status=ok
// SIG undefined FUN_144d3d580(void)

void FUN_144d3d580(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3d620 FUN_144d3d620 body=80 status=ok
// SIG undefined FUN_144d3d620(void)

void FUN_144d3d620(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3d670 FUN_144d3d670 body=63 status=ok
// SIG undefined FUN_144d3d670(void)

void FUN_144d3d670(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144d3d6b0 FUN_144d3d6b0 body=97 status=ok
// SIG undefined FUN_144d3d6b0(void)

void FUN_144d3d6b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3d780 FUN_144d3d780 body=18 status=ok
// SIG undefined FUN_144d3d780(void)

undefined8 * FUN_144d3d780(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c703380;
  return param_2;
}



// FUNCTION 144d3d7a0 FUN_144d3d7a0 body=140 status=ok
// SIG undefined FUN_144d3d7a0(void)

void FUN_144d3d7a0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x20);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -8) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -6) = 0xffffffff;
        *(undefined8 *)(puVar2 + -4) = 1;
        *(undefined ***)(puVar2 + -8) = hkaiTraversalAnalysisOutput::vftable;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 0xe;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144d3d830 FUN_144d3d830 body=143 status=ok
// SIG undefined FUN_144d3d830(void)

void FUN_144d3d830(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 + 0x18;
    uVar2 = (ulonglong)param_4;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-1] = 0xffffffff;
        *puVar1 = 1;
        puVar1[-2] = hkaiTraversalAnalysisOutput::vftable;
        FUN_144d3e2e0(puVar1 + 1,param_2);
      }
      param_2 = param_2 + 0x38;
      puVar1 = puVar1 + 7;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144d3d8c0 FUN_144d3d8c0 body=77 status=ok
// SIG undefined FUN_144d3d8c0(void)

void FUN_144d3d8c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144d3d910 FUN_144d3d910 body=561 status=ok
// SIG undefined FUN_144d3d910(void)

void FUN_144d3d910(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong local_38;
  
  local_38 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar13 = (longlong *)(param_1 + 0x28);
    do {
      plVar7 = (longlong *)(param_2 + -0x10 + (longlong)plVar13);
      plVar1 = plVar13 + -2;
      if (plVar1 != plVar7) {
        lVar3 = *plVar7;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar13);
        if ((int)(*(uint *)((longlong)plVar13 + -4) & 0x7fffffff) < iVar2) {
          FUN_144d3e7d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar13[-1]) {
          lVar4 = *plVar1;
          lVar8 = (longlong)(int)plVar13[-1] * 0x10 + *plVar1;
          while (lVar8 != (longlong)iVar2 * 0x10 + lVar4) {
            plVar7 = (longlong *)(lVar8 + -8);
            lVar8 = lVar8 + -0x10;
            if (*plVar7 != 0) {
              FUN_144b3f230();
            }
          }
        }
        lVar4 = *plVar1;
        iVar6 = iVar2;
        if ((int)plVar13[-1] < iVar2) {
          iVar6 = (int)plVar13[-1];
        }
        if ((lVar4 != lVar3) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
          plVar7 = (longlong *)(lVar3 + 8);
          lVar10 = lVar4 - lVar3;
          do {
            *(int *)(lVar10 + -8 + (longlong)plVar7) = (int)plVar7[-1];
            *(undefined4 *)((longlong)plVar7 + lVar10 + -4) =
                 *(undefined4 *)((longlong)plVar7 + (lVar3 - lVar4) + lVar10 + -4);
            if (*(longlong *)((longlong)plVar7 + lVar10) != *plVar7) {
              if (*plVar7 != 0) {
                FUN_144b3d910();
              }
              lVar5 = *(longlong *)((longlong)plVar7 + lVar10);
              *(longlong *)((longlong)plVar7 + lVar10) = *plVar7;
              if (lVar5 != 0) {
                FUN_144b3f230();
              }
            }
            plVar7 = plVar7 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined4 *)((longlong)iVar6 * 0x10 + lVar3);
        if (0 < iVar2 - iVar6) {
          uVar11 = (ulonglong)(uint)(iVar2 - iVar6);
          puVar12 = (undefined4 *)(*plVar1 + (longlong)iVar6 * 0x10);
          do {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar9;
              puVar12[1] = puVar9[1];
              lVar3 = *(longlong *)(puVar9 + 2);
              *(longlong *)(puVar12 + 2) = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              puVar9 = puVar9 + 4;
            }
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 4;
          } while (uVar11 != 0);
        }
        *(int *)(plVar13 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar13) != plVar13) {
          lVar3 = *plVar13;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar13);
          }
          FUN_140069ea2(plVar13,(longlong *)(param_2 + (longlong)plVar13));
        }
      }
      plVar13 = plVar13 + 7;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  return;
}



// FUNCTION 144d3db80 FUN_144d3db80 body=80 status=ok
// SIG undefined FUN_144d3db80(void)

void FUN_144d3db80(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144d3dbd0 FUN_144d3dbd0 body=1040 status=ok
// SIG undefined FUN_144d3dbd0(void)

longlong FUN_144d3dbd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  longlong lVar20;
  
  uVar10 = *(undefined4 *)(param_2 + 0x24);
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  uVar12 = *(undefined4 *)(param_2 + 0x2c);
  puVar14 = (undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar10;
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  *(undefined4 *)(param_1 + 0x2c) = uVar12;
  if ((undefined8 *)(param_2 + 0x30) != puVar14) {
    iVar6 = *(int *)(param_2 + 0x38);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar6) {
      FUN_144c31320(puVar14,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    FUN_144b3d470(*puVar14,uVar7,(longlong)iVar6 * 4);
    *(int *)(param_1 + 0x38) = iVar6;
  }
  puVar14 = (undefined8 *)(param_1 + 0x40);
  if ((undefined8 *)(param_2 + 0x40) != puVar14) {
    iVar6 = *(int *)(param_2 + 0x48);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar6) {
      FUN_144d3e3a0(puVar14,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    FUN_144b3d470(*puVar14,uVar7,(longlong)iVar6 * 8);
    *(int *)(param_1 + 0x48) = iVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  if ((longlong *)(param_2 + 0x50) != plVar1) {
    iVar6 = *(int *)(param_2 + 0x58);
    lVar8 = *(longlong *)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar6) {
      FUN_144c4f5e0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    if (iVar6 < *(int *)(param_1 + 0x58)) {
      puVar13 = (uint *)((longlong)*(int *)(param_1 + 0x58) * 0x90 + *plVar1);
      puVar19 = (uint *)((longlong)iVar6 * 0x90 + *plVar1);
      if (puVar13 != puVar19) {
        puVar13 = puVar13 + 0x1b;
        do {
          puVar3 = puVar13 + -0x24;
          puVar13[-0x25] = 0;
          if ((-1 < (int)*puVar3) && (*(longlong *)(puVar13 + -0x27) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar13 + -0x27),
                       (ulonglong)(*puVar3 & 0x7fffffff) << 2);
          }
          puVar13[-0x27] = 0;
          puVar13[-0x26] = 0;
          *puVar3 = 0x80000000;
          puVar13[-0x2d] = 0;
          if ((-1 < (int)puVar13[-0x2c]) && (*(longlong *)(puVar13 + -0x2f) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar13 + -0x2f),
                       (ulonglong)(puVar13[-0x2c] & 0x7fffffff) << 2);
          }
          puVar2 = puVar13 + -0x3f;
          puVar13[-0x2f] = 0;
          puVar13[-0x2e] = 0;
          puVar13[-0x2c] = 0x80000000;
          puVar13 = puVar3;
        } while (puVar2 != puVar19);
      }
    }
    lVar20 = *plVar1;
    iVar9 = iVar6;
    if (*(int *)(param_1 + 0x58) < iVar6) {
      iVar9 = *(int *)(param_1 + 0x58);
    }
    if ((lVar20 != lVar8) && (lVar17 = (longlong)iVar9, 0 < iVar9)) {
      puVar15 = (undefined4 *)(lVar20 + 0x10);
      lVar20 = lVar8 - lVar20;
      do {
        puVar14 = (undefined8 *)(lVar20 + -0x10 + (longlong)puVar15);
        uVar7 = puVar14[1];
        *(undefined8 *)(puVar15 + -4) = *puVar14;
        *(undefined8 *)(puVar15 + -2) = uVar7;
        puVar5 = (undefined4 *)((longlong)puVar15 + lVar20);
        uVar10 = puVar5[1];
        uVar11 = puVar5[2];
        uVar12 = puVar5[3];
        *puVar15 = *puVar5;
        puVar15[1] = uVar10;
        puVar15[2] = uVar11;
        puVar15[3] = uVar12;
        puVar5 = (undefined4 *)(lVar20 + 0x10 + (longlong)puVar15);
        uVar10 = puVar5[1];
        uVar11 = puVar5[2];
        uVar12 = puVar5[3];
        puVar15[4] = *puVar5;
        puVar15[5] = uVar10;
        puVar15[6] = uVar11;
        puVar15[7] = uVar12;
        puVar15[8] = *(undefined4 *)(lVar20 + 0x20 + (longlong)puVar15);
        puVar15[9] = *(undefined4 *)(lVar20 + 0x24 + (longlong)puVar15);
        puVar15[10] = *(undefined4 *)(lVar20 + 0x28 + (longlong)puVar15);
        puVar15[0xb] = *(undefined4 *)(lVar20 + 0x2c + (longlong)puVar15);
        FUN_144c4eb70(puVar15 + 0xc,lVar20 + 0x30 + (longlong)puVar15);
        FUN_144c4eb70(puVar15 + 0x14,lVar20 + 0x50 + (longlong)puVar15);
        *(undefined2 *)(puVar15 + 0x1c) = *(undefined2 *)(lVar20 + 0x70 + (longlong)puVar15);
        *(undefined2 *)((longlong)puVar15 + 0x72) =
             *(undefined2 *)(lVar20 + 0x72 + (longlong)puVar15);
        *(undefined1 *)(puVar15 + 0x1d) = *(undefined1 *)(lVar20 + 0x74 + (longlong)puVar15);
        puVar15 = puVar15 + 0x24;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    puVar14 = (undefined8 *)(lVar8 + (longlong)iVar9 * 0x90);
    if (0 < iVar6 - iVar9) {
      uVar16 = (ulonglong)(uint)(iVar6 - iVar9);
      puVar18 = (undefined8 *)(*plVar1 + (longlong)iVar9 * 0x90);
      do {
        if (puVar18 != (undefined8 *)0x0) {
          uVar7 = puVar14[1];
          *puVar18 = *puVar14;
          puVar18[1] = uVar7;
          uVar10 = *(undefined4 *)((longlong)puVar14 + 0x14);
          uVar11 = *(undefined4 *)(puVar14 + 3);
          uVar12 = *(undefined4 *)((longlong)puVar14 + 0x1c);
          *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(puVar14 + 2);
          *(undefined4 *)((longlong)puVar18 + 0x14) = uVar10;
          *(undefined4 *)(puVar18 + 3) = uVar11;
          *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar12;
          uVar10 = *(undefined4 *)((longlong)puVar14 + 0x24);
          uVar11 = *(undefined4 *)(puVar14 + 5);
          uVar12 = *(undefined4 *)((longlong)puVar14 + 0x2c);
          *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar14 + 4);
          *(undefined4 *)((longlong)puVar18 + 0x24) = uVar10;
          *(undefined4 *)(puVar18 + 5) = uVar11;
          *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar12;
          *(undefined4 *)(puVar18 + 6) = *(undefined4 *)(puVar14 + 6);
          *(undefined4 *)((longlong)puVar18 + 0x34) = *(undefined4 *)((longlong)puVar14 + 0x34);
          *(undefined4 *)(puVar18 + 7) = *(undefined4 *)(puVar14 + 7);
          *(undefined4 *)((longlong)puVar18 + 0x3c) = *(undefined4 *)((longlong)puVar14 + 0x3c);
          puVar18[8] = puVar18 + 10;
          *(undefined4 *)(puVar18 + 9) = 0;
          *(undefined4 *)((longlong)puVar18 + 0x4c) = 0x80000004;
          FUN_144c4eb70(puVar18 + 8,puVar14 + 8);
          *(undefined4 *)(puVar18 + 0xd) = 0;
          puVar18[0xc] = puVar18 + 0xe;
          *(undefined4 *)((longlong)puVar18 + 0x6c) = 0x80000004;
          FUN_144c4eb70(puVar18 + 0xc,puVar14 + 0xc);
          *(undefined2 *)(puVar18 + 0x10) = *(undefined2 *)(puVar14 + 0x10);
          *(undefined2 *)((longlong)puVar18 + 0x82) = *(undefined2 *)((longlong)puVar14 + 0x82);
          puVar4 = (undefined1 *)((longlong)puVar14 + 0x84);
          puVar14 = puVar14 + 0x12;
          *(undefined1 *)((longlong)puVar18 + 0x84) = *puVar4;
        }
        uVar16 = uVar16 - 1;
        puVar18 = puVar18 + 0x12;
      } while (uVar16 != 0);
    }
    *(int *)(param_1 + 0x58) = iVar6;
  }
  puVar14 = (undefined8 *)(param_1 + 0x60);
  if ((undefined8 *)(param_2 + 0x60) != puVar14) {
    iVar6 = *(int *)(param_2 + 0x68);
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar6) {
      FUN_144d3e440(puVar14,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    FUN_144b3d470(*puVar14,uVar7,(longlong)iVar6 * 0x30);
    *(int *)(param_1 + 0x68) = iVar6;
  }
  puVar14 = (undefined8 *)(param_1 + 0x70);
  if ((undefined8 *)(param_2 + 0x70) != puVar14) {
    iVar6 = *(int *)(param_2 + 0x78);
    uVar7 = *(undefined8 *)(param_2 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < iVar6) {
      FUN_140c3e7da(puVar14,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    FUN_144b3d470(*puVar14,uVar7,(longlong)iVar6 << 4);
    *(int *)(param_1 + 0x78) = iVar6;
  }
  return param_1;
}



// FUNCTION 144d3dfe0 FUN_144d3dfe0 body=62 status=ok
// SIG undefined FUN_144d3dfe0(void)

undefined8 * FUN_144d3dfe0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c702ce0);
  *param_2 = param_1;
  param_2[1] = &DAT_14c702ce0;
  return param_2;
}



// FUNCTION 144d3e020 FUN_144d3e020 body=279 status=ok
// SIG undefined FUN_144d3e020(void)

void FUN_144d3e020(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((param_1[2] != 0) && (*(int *)(param_1[2] + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8);
    FUN_144b3ec00(param_1 + 2);
  }
  uVar7 = (longlong)(int)param_1[1] * 3;
  if (((int)param_1[1] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  uVar11 = 0;
  if (0 < (int)param_1[1]) {
    lVar12 = 0;
    do {
      iVar1 = *(int *)(lVar12 + *param_1);
      uVar9 = iVar1 * -0x61c8864f;
      iVar2 = *(int *)(lVar12 + 4 + *param_1);
      uVar10 = iVar2 * -0x61c8864f;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar1 * -0x4f000000;
      uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
               iVar2 * -0x4f000000;
      lVar3 = param_1[2];
      uVar9 = uVar10 + uVar9 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar9;
      uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
      puVar8 = (uint *)(lVar3 + uVar7 * 8);
      if (-1 < *(int *)(lVar3 + 4 + uVar7 * 8)) {
        do {
          uVar7 = ((longlong)puVar8 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar8 = (uint *)(lVar3 + uVar7 * 8);
        } while (-1 < *(int *)(lVar3 + 4 + uVar7 * 8));
      }
      puVar8[1] = uVar11;
      lVar12 = lVar12 + 0x10;
      uVar11 = uVar11 + 1;
      *puVar8 = uVar9;
    } while ((int)uVar11 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144d3e140 FUN_144d3e140 body=201 status=ok
// SIG undefined FUN_144d3e140(void)

void FUN_144d3e140(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4)
    ;
    uVar1 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar1;
    puVar2 = (undefined4 *)*param_1;
    uVar7 = (ulonglong)uVar1;
    puVar4 = puVar3;
    puVar8 = puVar2;
    if (0 < (int)uVar1) {
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar8;
          puVar4[1] = puVar8[1];
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)(puVar8 + 2) = 0;
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar5 != 0);
      plVar6 = (longlong *)(puVar2 + 2);
      do {
        if (*plVar6 != 0) {
          FUN_144b3f230();
        }
        plVar6 = plVar6 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_1 = puVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144d3e210 FUN_144d3e210 body=195 status=ok
// SIG undefined FUN_144d3e210(void)

longlong * FUN_144d3e210(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 144d3e2e0 FUN_144d3e2e0 body=192 status=ok
// SIG undefined FUN_144d3e2e0(void)

undefined8 * FUN_144d3e2e0(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar1;
    plVar4 = (longlong *)(lVar2 + 8);
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = (int)plVar4[-1];
        puVar3[1] = *(undefined4 *)((longlong)plVar4 + -4);
        lVar2 = *plVar4;
        *(longlong *)(puVar3 + 2) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        plVar4 = plVar4 + 2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 4;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 144d3e3a0 FUN_144d3e3a0 body=159 status=ok
// SIG undefined FUN_144d3e3a0(void)

void FUN_144d3e3a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d3e440 FUN_144d3e440 body=163 status=ok
// SIG undefined FUN_144d3e440(void)

void FUN_144d3e440(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x30);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x30);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d3e4f0 FUN_144d3e4f0 body=286 status=ok
// SIG undefined FUN_144d3e4f0(void)

void FUN_144d3e4f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x60);
  uVar1 = *(uint *)(param_1 + 1);
  plVar8 = (longlong *)*param_1;
  uVar9 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar6 = (undefined4 *)(lVar5 + 0x30);
    uVar11 = (ulonglong)uVar1;
    plVar7 = plVar8 + 6;
    plVar10 = plVar8;
    do {
      if ((longlong *)(puVar6 + -0xc) != (longlong *)0x0) {
        *(longlong *)(puVar6 + -0xc) = *plVar10;
        *plVar10 = 0;
        puVar6[-10] = (int)plVar7[-5];
        lVar4 = plVar7[-3];
        *(longlong *)(puVar6 + -8) = plVar7[-4];
        *(longlong *)(puVar6 + -6) = lVar4;
        lVar4 = plVar7[-1];
        *(longlong *)(puVar6 + -4) = plVar7[-2];
        *(longlong *)(puVar6 + -2) = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + 4);
        lVar4 = plVar7[1];
        uVar3 = *(undefined4 *)((longlong)plVar7 + 0xc);
        *puVar6 = (int)*plVar7;
        puVar6[1] = uVar2;
        puVar6[2] = (int)lVar4;
        puVar6[3] = uVar3;
        lVar4 = plVar7[3];
        *(longlong *)(puVar6 + 4) = plVar7[2];
        *(longlong *)(puVar6 + 6) = lVar4;
        puVar6[8] = (int)plVar7[4];
      }
      puVar6 = puVar6 + 0x18;
      plVar10 = plVar10 + 0xc;
      plVar7 = plVar7 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    do {
      if (*plVar8 != 0) {
        FUN_144b3f230();
      }
      plVar8 = plVar8 + 0xc;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144d3e610 FUN_144d3e610 body=221 status=ok
// SIG undefined FUN_144d3e610(void)

void FUN_144d3e610(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d3e6f0 FUN_144d3e6f0 body=221 status=ok
// SIG undefined FUN_144d3e6f0(void)

void FUN_144d3e6f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 144d3e7d0 FUN_144d3e7d0 body=237 status=ok
// SIG undefined FUN_144d3e7d0(void)

void FUN_144d3e7d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined4 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar8 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar8 = puVar8 + 4;
    } while (uVar4 != 0);
    plVar6 = (longlong *)(puVar2 + 2);
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar3;
  return;
}



// FUNCTION 144d3e8c0 FUN_144d3e8c0 body=416 status=ok
// SIG undefined FUN_144d3e8c0(void)

undefined8 FUN_144d3e8c0(undefined4 **param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_28;
  uint local_20;
  uint local_1c;
  
  uVar7 = *(uint *)(param_2 + 1);
  lVar2 = 0;
  if (*param_2 != 0) {
    lVar2 = *param_2;
  }
  if ((int)uVar7 < 1) {
    puVar1 = (undefined4 *)0x0;
    uVar7 = 0;
    local_28 = (undefined4 *)0x0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar6 = 0x80000000;
  }
  else {
    puVar1 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar7 << 4);
    plVar3 = (longlong *)(lVar2 + 8);
    uVar4 = (ulonglong)uVar7;
    puVar5 = puVar1;
    local_28 = puVar1;
    local_20 = uVar7;
    local_1c = uVar7;
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = (int)plVar3[-1];
        puVar5[1] = *(undefined4 *)((longlong)plVar3 + -4);
        lVar2 = *plVar3;
        *(longlong *)(puVar5 + 2) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        plVar3 = plVar3 + 2;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      uVar6 = uVar7;
    } while (uVar4 != 0);
  }
  if ((&local_28 != param_1) && (FUN_144d3e210(param_1,0), param_1 != (undefined4 **)0x0)) {
    *param_1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_144d3e140(&local_28,&PTR_vftable_14c6e47a0);
    puVar1 = (undefined4 *)0x0;
    *param_1 = local_28;
    uVar7 = 0;
    uVar6 = 0;
    *(uint *)(param_1 + 1) = local_20;
    *(uint *)((longlong)param_1 + 0xc) = local_1c;
  }
  FUN_144d3e020(param_1);
  puVar5 = puVar1 + (longlong)(int)uVar7 * 4;
  while (puVar5 != puVar1) {
    plVar3 = (longlong *)(puVar5 + -2);
    puVar5 = puVar5 + -4;
    if (*plVar3 != 0) {
      FUN_144b3f230();
    }
  }
  if ((-1 < (int)uVar6) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar1,(ulonglong)(uVar6 & 0x7fffffff) << 4);
  }
  return 1;
}



// FUNCTION 144d3ea60 FUN_144d3ea60 body=4 status=ok
// SIG undefined FUN_144d3ea60(void)

undefined4 FUN_144d3ea60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 144d3ea70 FUN_144d3ea70 body=16 status=ok
// SIG undefined FUN_144d3ea70(void)

longlong FUN_144d3ea70(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x50);
}



// FUNCTION 144d3ea80 FUN_144d3ea80 body=5 status=ok
// SIG undefined FUN_144d3ea80(void)

longlong FUN_144d3ea80(longlong param_1)

{
  return param_1 + 0x50;
}



// FUNCTION 144d3ea90 FUN_144d3ea90 body=20 status=ok
// SIG undefined FUN_144d3ea90(void)

undefined8 FUN_144d3ea90(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10 + (longlong)param_2 * 0x30);
}



// FUNCTION 144d3eab0 FUN_144d3eab0 body=62 status=ok
// SIG undefined FUN_144d3eab0(void)

float * FUN_144d3eab0(longlong param_1,float *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x60) + (longlong)param_3 * 0x30);
  fVar5 = *(float *)(*(longlong *)(param_1 + 0x60) + (longlong)param_3 * 0x30 + 0xc);
  fVar2 = pfVar1[1] * param_4[1] + *pfVar1 * *param_4;
  fVar3 = *pfVar1 * *param_4 + pfVar1[1] * param_4[1];
  fVar4 = fVar5 + pfVar1[2] * param_4[2];
  fVar5 = pfVar1[2] * param_4[2] + fVar5;
  *param_2 = fVar4 + fVar2;
  param_2[1] = fVar5 + fVar3;
  param_2[2] = fVar2 + fVar4;
  param_2[3] = fVar3 + fVar5;
  return param_2;
}



// FUNCTION 144d3eaf0 FUN_144d3eaf0 body=33 status=ok
// SIG undefined FUN_144d3eaf0(void)

void FUN_144d3eaf0(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  FUN_1450711d0(param_1 + 0x30,
                *(int *)(*(longlong *)(param_1 + 0x60) + 0x18 + (longlong)param_2 * 0x30) + param_3,
                param_4);
  return;
}



// FUNCTION 144d3eb20 FUN_144d3eb20 body=38 status=ok
// SIG undefined FUN_144d3eb20(void)

void FUN_144d3eb20(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  FUN_145071160(param_1 + 0x30,
                *(int *)(*(longlong *)(param_1 + 0x60) + 0x18 + (longlong)param_2 * 0x30) + param_3,
                param_4,param_5);
  return;
}



// FUNCTION 144d3eb50 FUN_144d3eb50 body=41 status=ok
// SIG undefined FUN_144d3eb50(void)

void FUN_144d3eb50(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x70) +
           (longlong)
           (*(int *)(*(longlong *)(param_1 + 0x60) + 0x1c + (longlong)param_2 * 0x30) + param_3) *
           0x10);
  uVar2 = puVar1[1];
  *param_4 = *puVar1;
  param_4[1] = uVar2;
  return;
}



// FUNCTION 144d3eb80 FUN_144d3eb80 body=596 status=ok
// SIG undefined FUN_144d3eb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_144d3eb80(longlong param_1,float *param_2,undefined1 param_3,undefined8 param_4,int param_5
                  ,int param_6)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  uVar2 = *(uint *)(param_1 + 0x68);
  iVar4 = uVar2 + 1;
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar4) {
    FUN_144d3eed0(param_1 + 0x60,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x50);
  *(int *)(param_1 + 0x68) = iVar4;
  pfVar5 = (float *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x60));
  *(undefined8 *)(pfVar5 + 4) = param_4;
  *(undefined1 *)((longlong)pfVar5 + 0x22) = param_3;
  pfVar5[6] = -NAN;
  pfVar5[7] = -NAN;
  *(undefined2 *)(pfVar5 + 8) = 0;
  fVar12 = param_2[1] - *param_2;
  fVar13 = param_2[5] - param_2[4];
  fVar14 = param_2[9] - param_2[8];
  fVar9 = fVar12 * fVar12;
  fVar10 = fVar13 * fVar13;
  fVar11 = fVar14 * fVar14;
  auVar15._4_4_ = fVar10 + fVar9 + fVar11;
  auVar15._0_4_ = fVar10 + fVar9 + fVar11;
  auVar15._8_4_ = fVar10 + fVar9 + fVar11;
  auVar15._12_4_ = fVar10 + fVar9 + fVar11;
  auVar15 = divps(_DAT_14c6daca0,auVar15);
  fVar12 = auVar15._0_4_ * fVar12;
  fVar13 = auVar15._4_4_ * fVar13;
  fVar14 = auVar15._8_4_ * fVar14;
  fVar9 = fVar12 * *param_2;
  fVar10 = fVar13 * param_2[4];
  fVar11 = fVar14 * param_2[8];
  *pfVar5 = fVar12;
  pfVar5[1] = fVar13;
  pfVar5[2] = fVar14;
  pfVar5[3] = 0.0 - (fVar10 + fVar9 + fVar11);
  iVar4 = *(int *)(param_1 + 0x58);
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar4 + 1) {
    FUN_144c523d0(plVar1,0.0 - (fVar10 + fVar9 + fVar11),(longlong)iVar4 + 1);
  }
  lVar6 = (longlong)*(int *)(param_1 + 0x58) * 0x90 + *plVar1;
  if (lVar6 != 0) {
    FUN_141806ca0(lVar6,param_2);
  }
  *(int *)(param_1 + 0x58) = iVar4 + 1;
  lVar6 = (longlong)iVar4 * 0x90 + *plVar1;
  if ((int)(*(uint *)(lVar6 + 0x4c) & 0x7fffffff) < param_5) {
    FUN_141807aa8(lVar6 + 0x40,&PTR_vftable_14c6e47a0,(longlong)param_5);
  }
  iVar4 = *(int *)(lVar6 + 0x48);
  if (iVar4 < param_5) {
    *(int *)(lVar6 + 0x48) = param_5;
    if (0 < param_5 - iVar4) {
      uVar7 = (ulonglong)(uint)(param_5 - iVar4);
      puVar8 = (undefined4 *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 4);
      do {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
        }
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 != 0);
    }
  }
  else if (param_5 < iVar4) {
    *(int *)(lVar6 + 0x48) = param_5;
  }
  **(uint **)(lVar6 + 0x40) = uVar2 | 0x7f900000;
  if ((int)(*(uint *)(lVar6 + 0x6c) & 0x7fffffff) < param_6) {
    FUN_141807aa8(lVar6 + 0x60,&PTR_vftable_14c6e47a0,(longlong)param_6);
  }
  iVar4 = *(int *)(lVar6 + 0x68);
  if (iVar4 < param_6) {
    *(int *)(lVar6 + 0x68) = param_6;
    uVar7 = (ulonglong)(uint)(param_6 - iVar4);
    puVar8 = (undefined4 *)(*(longlong *)(lVar6 + 0x60) + (longlong)iVar4 * 4);
    if (0 < param_6 - iVar4) {
      do {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
        }
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 != 0);
    }
  }
  else if (param_6 < iVar4) {
    *(int *)(lVar6 + 0x68) = param_6;
  }
  *(undefined1 *)(lVar6 + 0x84) = 1;
  return uVar2;
}



// FUNCTION 144d3ede0 FUN_144d3ede0 body=68 status=ok
// SIG undefined FUN_144d3ede0(void)

void FUN_144d3ede0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x68) * 0x30 + *(longlong *)(param_1 + 0x60);
  uVar1 = FUN_145070ed0(param_1 + 0x30,param_4,param_5,param_6);
  if (*(char *)(lVar2 + -0x10) == '\0') {
    *(undefined4 *)(lVar2 + -0x18) = uVar1;
  }
  *(char *)(lVar2 + -0x10) = *(char *)(lVar2 + -0x10) + '\x01';
  return;
}



// FUNCTION 144d3ee30 FUN_144d3ee30 body=152 status=ok
// SIG undefined FUN_144d3ee30(void)

void FUN_144d3ee30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x78) + 1;
  lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x30 + *(longlong *)(param_1 + 0x60);
  if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < iVar4) {
    FUN_144bdedb0((longlong *)(param_1 + 0x70),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x78) * 0x10 + *(longlong *)(param_1 + 0x70))
  ;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = param_4[1];
    *puVar3 = *param_4;
    puVar3[1] = uVar2;
  }
  *(int *)(param_1 + 0x78) = iVar4;
  if (*(char *)(lVar5 + -0xf) == '\0') {
    *(undefined4 *)(lVar5 + -0x14) = uVar1;
  }
  *(char *)(lVar5 + -0xf) = *(char *)(lVar5 + -0xf) + '\x01';
  return;
}



// FUNCTION 144d3eed0 FUN_144d3eed0 body=262 status=ok
// SIG undefined FUN_144d3eed0(void)

ulonglong FUN_144d3eed0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x30,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x30);
  uVar3 = uVar4 * 0x30 + 0x30;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x30;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x30);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144d3efe0 FUN_144d3efe0 body=664 status=ok
// SIG undefined FUN_144d3efe0(void)

int * FUN_144d3efe0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [512];
  undefined1 local_228 [512];
  
  *param_1 = 0;
  if ((int)param_2 < 0x200) {
    if (0x1ff < param_2) {
      param_2 = 0x1ff;
    }
    if ((0x1fff < (int)param_4) &&
       ((DAT_14c783c70 == (longlong *)0x0 ||
        (pcVar1 = (char *)(**(code **)(*DAT_14c783c70 + 0x28))(DAT_14c783c70,local_res10,0x22441300)
        , *pcVar1 != '\0')))) {
      FUN_144bde670(local_448,local_428,0x200);
      FUN_144be6160(local_448,"Id value cannot fit in tag.");
      FUN_144bfc0d0(0x22441300,local_428,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Types/Visualize/hkVdbCmdTag.h"
                    ,0x96);
      if (DAT_14c783c70 != (longlong *)0x0) {
        (**(code **)(*DAT_14c783c70 + 0x20))(DAT_14c783c70,0x22441300,0);
      }
      FUN_144bde6e0(local_448);
    }
    if (0x1fff < param_4) {
      param_4 = 0x1fff;
    }
    if ((0x1ff < (int)param_3) &&
       ((DAT_14c783c70 == (longlong *)0x0 ||
        (pcVar1 = (char *)(**(code **)(*DAT_14c783c70 + 0x28))(DAT_14c783c70,local_res8,0x22441300),
        *pcVar1 != '\0')))) {
      FUN_144bde670(local_438,local_228,0x200);
      FUN_144be6160(local_438,"Id value cannot fit in tag.");
      FUN_144bfc0d0(0x22441300,local_228,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Types/Visualize/hkVdbCmdTag.h"
                    ,0x96);
      if (DAT_14c783c70 != (longlong *)0x0) {
        (**(code **)(*DAT_14c783c70 + 0x20))(DAT_14c783c70,0x22441300,0);
      }
      FUN_144bde6e0(local_438);
    }
    if (0x1ff < param_3) {
      param_3 = 0x1ff;
    }
    *param_1 = ((param_3 & 0x1ff) * 0x2000 + (param_4 & 0x1fff)) * 0x200 + (param_2 & 0x1ff);
    return param_1;
  }
  if ((DAT_14c783c70 == (longlong *)0x0) ||
     (pcVar1 = (char *)(**(code **)(*DAT_14c783c70 + 0x28))(DAT_14c783c70,local_res10,0x22441301),
     *pcVar1 != '\0')) {
    FUN_144bde670(local_448,local_428,0x200);
    FUN_144be6160(local_448,"Id value cannot fit in tag.");
    FUN_144bfc0d0(0x22441301,local_428,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Types/Visualize/hkVdbCmdTag.h"
                  ,0xa0);
    if (DAT_14c783c70 != (longlong *)0x0) {
      (**(code **)(*DAT_14c783c70 + 0x20))(DAT_14c783c70,0x22441301,0);
    }
    FUN_144bde6e0(local_448);
  }
  *param_1 = -0x80000000;
  return param_1;
}



// FUNCTION 144d3f280 FUN_144d3f280 body=87 status=ok
// SIG undefined FUN_144d3f280(void)

undefined8 FUN_144d3f280(undefined8 param_1,ulonglong param_2)

{
  FUN_145071380();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144d3f2e0 FUN_144d3f2e0 body=379 status=ok
// SIG undefined FUN_144d3f2e0(void)

undefined8 * FUN_144d3f2e0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  *param_1 = hkaiViewerContext::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  uVar2 = FUN_144b3d480();
  param_1[0x13] = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar2 = FUN_144b3d480();
  param_1[0x18] = uVar2;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  uVar2 = FUN_144b3d480();
  plVar1 = param_1 + 0x1e;
  param_1[0x1c] = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  local_res8 = 0;
  FUN_144bddc40(plVar1,&PTR_vftable_14c6e47d0,0x100);
  lVar4 = 0x100;
  lVar3 = *plVar1;
  do {
    if (lVar3 != 0) {
      FUN_144be3700(lVar3,&local_res8);
    }
    lVar4 = lVar4 + -1;
    lVar3 = lVar3 + 8;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x1f) = 0x100;
  FUN_144b49dd0(&local_res8);
  return param_1;
}



// FUNCTION 144d3f460 FUN_144d3f460 body=1056 status=ok
// SIG undefined FUN_144d3f460(void)

void FUN_144d3f460(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int local_res8 [2];
  
  *param_1 = hkaiViewerContext::vftable;
  plVar7 = (longlong *)param_1[0xd];
  plVar1 = plVar7 + *(int *)(param_1 + 0xe);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    if (*plVar7 != 0) {
      FUN_144d3f890(param_1);
    }
  }
  plVar1 = param_1 + 0x11;
  lVar8 = *plVar1;
  lVar10 = (longlong)*(int *)(param_1 + 0x12) * 0x10 + lVar8;
  for (; lVar8 != lVar10; lVar8 = lVar8 + 0x10) {
    FUN_144d3faa0(param_1 + 10,lVar8);
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x12) != 0) {
    plVar7 = (longlong *)*plVar1;
    plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x12) * 2;
    while (plVar9 != plVar7) {
      plVar2 = plVar9 + -1;
      plVar9 = plVar9 + -2;
      if (*plVar2 != 0) {
        FUN_144b3f230();
      }
      if (*plVar9 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
    if (((param_1[0x13] != 0) && (*(int *)(param_1[0x13] + 4) != -2)) &&
       (uVar5 = uVar3, 0 < *(int *)(param_1 + 0x14) + 1)) {
      do {
        uVar4 = (int)uVar5 + 1;
        *(undefined4 *)(uVar3 + 4 + param_1[0x13]) = 0xffffffff;
        uVar3 = uVar3 + 8;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(param_1 + 0x14) + 1);
    }
  }
  plVar9 = (longlong *)param_1[0xf];
  plVar7 = plVar9 + *(int *)(param_1 + 0x10);
  do {
    if (plVar9 == plVar7) {
      lVar10 = param_1[0x1e];
      lVar8 = lVar10 + (longlong)*(int *)(param_1 + 0x1f) * 8;
      while (lVar8 != lVar10) {
        lVar8 = lVar8 + -8;
        FUN_144b49dd0(lVar8);
      }
      *(undefined4 *)(param_1 + 0x1f) = 0;
      if ((-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
        (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
                  (&PTR_vftable_14c6e47d0,param_1[0x1e],
                   (ulonglong)(*(uint *)((longlong)param_1 + 0xfc) & 0x7fffffff) << 3);
      }
      param_1[0x1e] = 0;
      *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
      FUN_144d3ff60(param_1 + 0x1a);
      FUN_144d3fdd0(param_1 + 0x16);
      FUN_144d3fbe0(plVar1);
      lVar10 = param_1[0xf];
      lVar8 = lVar10 + (longlong)*(int *)(param_1 + 0x10) * 8;
      while (lVar8 != lVar10) {
        plVar1 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((-1 < (int)*(uint *)((longlong)param_1 + 0x84)) && (param_1[0xf] != 0)) {
        (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
                  (&PTR_vftable_14c6e47d0,param_1[0xf],
                   (ulonglong)(*(uint *)((longlong)param_1 + 0x84) & 0x7fffffff) << 3);
      }
      param_1[0xf] = 0;
      *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
      lVar10 = param_1[0xd];
      lVar8 = lVar10 + (longlong)*(int *)(param_1 + 0xe) * 8;
      while (lVar8 != lVar10) {
        plVar1 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined4 *)(param_1 + 0xe) = 0;
      if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
        (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
                  (&PTR_vftable_14c6e47d0,param_1[0xd],
                   (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) << 3);
      }
      param_1[0xd] = 0;
      *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
      FUN_144bfd1a0(param_1 + 0xc);
      FUN_144bfd1a0(param_1 + 0xb);
      FUN_144bfd1a0(param_1 + 10);
      FUN_144bfd1a0(param_1 + 9);
      FUN_144bfd1a0(param_1 + 8);
      FUN_144bfd1a0(param_1 + 7);
      FUN_145071380(param_1);
      return;
    }
    uVar3 = 0;
    lVar8 = *plVar9;
    if (lVar8 != 0) {
      FUN_144b3d910(lVar8);
      if (0 < *(int *)(param_1 + 0x10)) {
        plVar2 = (longlong *)param_1[0xf];
        uVar5 = uVar3;
        do {
          iVar6 = (int)uVar5;
          if (*plVar2 == lVar8) goto LAB_144d3f5e8;
          uVar5 = (ulonglong)(iVar6 + 1);
          uVar3 = uVar3 + 1;
          plVar2 = plVar2 + 1;
        } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
      }
      iVar6 = -1;
LAB_144d3f5e8:
      local_res8[0] = iVar6;
      FUN_144b3f230(lVar8);
      if (-1 < iVar6) {
        FUN_144d3fb40(param_1 + 0xc,lVar8);
        lVar8 = *(longlong *)(param_1[0xf] + (longlong)iVar6 * 8);
        *(undefined8 *)(param_1[0xf] + (longlong)iVar6 * 8) = 0;
        if (lVar8 != 0) {
          FUN_144b3f230(lVar8);
        }
        plVar2 = param_1 + 0x16;
        lVar8 = FUN_144d40040(plVar2,local_res8);
        if (lVar8 != 0) {
          iVar6 = *(int *)(lVar8 + 4);
          lVar10 = param_1[0x18];
          if (-1 < iVar6) {
            FUN_1450713e0(param_1,*(undefined8 *)((longlong)iVar6 * 0x10 + 8 + *plVar2));
            uVar4 = (uint)(lVar8 - lVar10 >> 3);
            if ((*(uint *)(param_1 + 0x19) < uVar4) ||
               (lVar8 = param_1[0x18] + (longlong)(int)uVar4 * 8,
               *(int *)(param_1[0x18] + 4 + (longlong)(int)uVar4 * 8) != iVar6)) {
              lVar8 = FUN_144d40040(plVar2,*plVar2 + (longlong)iVar6 * 0x10);
            }
            FUN_144d3fca0(plVar2,lVar8);
          }
        }
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 144d3f880 FUN_144d3f880 body=8 status=ok
// SIG undefined FUN_144d3f880(void)

undefined * FUN_144d3f880(void)

{
  return &DAT_1499d09a8;
}



// FUNCTION 144d3f890 FUN_144d3f890 body=364 status=ok
// SIG undefined FUN_144d3f890(void)

void FUN_144d3f890(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    FUN_144b3d910();
  }
  iVar3 = 0;
  iVar4 = -1;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar2 = 0;
    plVar1 = *(longlong **)(param_1 + 0x68);
    do {
      iVar4 = iVar3;
      if (*plVar1 == param_2) break;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 1;
      iVar4 = -1;
    } while (lVar2 < *(int *)(param_1 + 0x70));
  }
  if (param_2 != 0) {
    FUN_144b3f230(param_2);
  }
  if (-1 < iVar4) {
    FUN_144b46620(param_2 + 0x18,param_1);
    FUN_144d3fa00(param_1 + 0x40,param_2);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 8) = 0;
    if (lVar2 != 0) {
      FUN_144b3f230(lVar2);
    }
    iVar3 = *(int *)(param_1 + 0xd8) + -1;
    if (-1 < iVar3) {
      plVar1 = (longlong *)(param_1 + 0xd0);
      do {
        if (*(int *)(*plVar1 + (longlong)iVar3 * 0x10) == iVar4) {
          FUN_1450713e0(param_1,*(undefined8 *)((longlong)iVar3 * 0x10 + 8 + *plVar1));
          if ((*(int *)(param_1 + 0xe8) != -1) ||
             (lVar2 = *(longlong *)(param_1 + 0xe0) + -8,
             *(int *)(*(longlong *)(param_1 + 0xe0) + -4) != iVar3)) {
            lVar2 = FUN_144d400b0(plVar1,*plVar1 + (longlong)iVar3 * 0x10);
          }
          FUN_144d3fe50(plVar1,lVar2);
        }
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  return;
}



// FUNCTION 144d3fa00 FUN_144d3fa00 body=159 status=ok
// SIG undefined FUN_144d3fa00(void)

void FUN_144d3fa00(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144d3faa0 FUN_144d3faa0 body=159 status=ok
// SIG undefined FUN_144d3faa0(void)

void FUN_144d3faa0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144d3fb40 FUN_144d3fb40 body=159 status=ok
// SIG undefined FUN_144d3fb40(void)

void FUN_144d3fb40(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144d3fbe0 FUN_144d3fbe0 body=191 status=ok
// SIG undefined FUN_144d3fbe0(void)

void FUN_144d3fbe0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47d8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3 + (longlong)(int)param_1[1] * 2;
  while (plVar4 != plVar3) {
    plVar1 = plVar4 + -1;
    plVar4 = plVar4 + -2;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
    if (*plVar4 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
              (&PTR_vftable_14c6e47d0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d3fca0 FUN_144d3fca0 body=304 status=ok
// SIG undefined FUN_144d3fca0(void)

void FUN_144d3fca0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar2 = param_2[1];
  if (uVar2 != (int)param_1[1] - 1U) {
    lVar5 = FUN_144d40040(param_1,*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar5 = param_1[1];
  uVar4 = (int)lVar5 - 1;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != uVar2) {
    puVar7 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + *param_1);
    puVar8 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)lVar5 * 0x10);
    if (puVar7 != puVar8) {
      lVar9 = (longlong)puVar8 - (longlong)puVar7;
      lVar5 = 2;
      do {
        *puVar7 = *(undefined8 *)(lVar9 + (longlong)puVar7);
        puVar7 = puVar7 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  lVar5 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & uVar10;
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = lVar5 + ((ulonglong)*puVar1 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & uVar10;
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144d3fdd0 FUN_144d3fdd0 body=123 status=ok
// SIG undefined FUN_144d3fdd0(void)

void FUN_144d3fdd0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47d8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
              (&PTR_vftable_14c6e47d0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d3fe50 FUN_144d3fe50 body=272 status=ok
// SIG undefined FUN_144d3fe50(void)

void FUN_144d3fe50(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  uVar2 = param_2[1];
  if (uVar2 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144d400b0(param_1,*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
    *(uint *)(lVar6 + 4) = uVar2;
  }
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar2) {
    puVar9 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)lVar6 * 0x10);
    puVar7 = (undefined8 *)((longlong)(int)uVar2 * 0x10 + *param_1);
    if ((puVar7 != puVar9) && (puVar7 != (undefined8 *)0x0)) {
      uVar4 = puVar9[1];
      *puVar7 = *puVar9;
      puVar7[1] = uVar4;
    }
  }
  lVar6 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar10;
  puVar1 = (uint *)(lVar6 + uVar8 * 8);
  iVar3 = *(int *)(lVar6 + 4 + uVar8 * 8);
  while (-1 < iVar3) {
    lVar6 = lVar6 + ((ulonglong)*puVar1 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar6 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar1 - lVar6 >> 3) + 1U & uVar10;
    puVar1 = (uint *)(lVar6 + uVar8 * 8);
    iVar3 = *(int *)(lVar6 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144d3ff60 FUN_144d3ff60 body=123 status=ok
// SIG undefined FUN_144d3ff60(void)

void FUN_144d3ff60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47d8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
              (&PTR_vftable_14c6e47d0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144d3ffe0 FUN_144d3ffe0 body=87 status=ok
// SIG undefined FUN_144d3ffe0(void)

undefined8 FUN_144d3ffe0(undefined8 param_1,ulonglong param_2)

{
  FUN_144d3f460();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 144d40040 FUN_144d40040 body=102 status=ok
// SIG undefined FUN_144d40040(void)

uint * FUN_144d40040(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0x10) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144d400b0 FUN_144d400b0 body=145 status=ok
// SIG undefined FUN_144d400b0(void)

uint * FUN_144d400b0(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  uVar8 = iVar1 * -0x61c8864f;
  uVar7 = iVar2 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar2 * -0x4f000000;
  lVar3 = param_1[2];
  uVar8 = uVar7 + uVar8 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar8;
  uVar4 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  uVar7 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar7 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar3 + uVar4 * 8);
    if (((*puVar5 == uVar8) &&
        (piVar6 = (int *)((ulonglong)uVar7 * 0x10 + *param_1), *piVar6 == iVar1)) &&
       (piVar6[1] == iVar2)) break;
    uVar4 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar7 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144d40150 RegisterGlobalAsyncCallback body=330 status=ok
// SIG AKRESULT RegisterGlobalAsyncCallback(_func_Job_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr * param_1, uint param_2, void * param_3, AkPluginType param_4, uint param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterGlobalAsyncCallback(struct AK::JobMgr::Job
   (__cdecl*)(class AK::IAkGlobalPluginContext * __ptr64,enum AkGlobalCallbackLocation,void *
   __ptr64),unsigned int,void * __ptr64,enum AkPluginType,unsigned int,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::RegisterGlobalAsyncCallback
          (_func_Job_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *param_1,
          uint param_2,void *param_3,AkPluginType param_4,uint param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  AKRESULT AVar4;
  ulonglong uVar5;
  undefined1 local_res10 [8];
  
                    /* 0x4d40150  230
                       ?RegisterGlobalAsyncCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6A?AUJob@JobMgr@2@PEAVIAkGlobalPluginContext@2@W4AkGlobalCallbackLocation@@PEAX@ZI2W4AkPluginType@@II@Z
                        */
  FUN_1450719c0(local_res10);
  if ((0x1fff < param_2) ||
     (param_1 == (_func_Job_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)0x0)) {
    FUN_1450719f0(local_res10);
    return 0x1f;
  }
  AVar4 = 1;
  while( true ) {
    if ((param_2 == 0) || (AVar4 != 1)) {
      FUN_1450719f0(local_res10);
      return AVar4;
    }
    uVar2 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar5 = 0x20;
    if (param_2 != 0) {
      uVar5 = (ulonglong)uVar2;
    }
    if ((&DAT_1499d0a30)[uVar5] == '\0') break;
    puVar3 = MemoryMgr::Malloc(0x10,0x20);
    if (puVar3 == (undefined8 *)0x0) {
      AVar4 = 0x34;
    }
    else {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_1499d1268;
      puVar3[2] = param_3;
      piVar1 = &DAT_14c791270 + uVar5 * 6;
      puVar3[3] = 0;
      if ((&DAT_14c791280)[uVar5 * 3] == 0) {
        *piVar1 = *piVar1 + 1;
        (&DAT_14c791280)[uVar5 * 3] = puVar3;
        (&DAT_14c791278)[uVar5 * 3] = puVar3;
      }
      else {
        *(undefined8 **)((&DAT_14c791278)[uVar5 * 3] + 0x18) = puVar3;
        *piVar1 = *piVar1 + 1;
        (&DAT_14c791278)[uVar5 * 3] = puVar3;
      }
    }
    param_2 = param_2 & ~(1 << ((byte)uVar5 & 0x1f));
  }
  FUN_1450719f0(local_res10);
  return 0x1f;
}



// FUNCTION 144d402a0 UnregisterGlobalAsyncCallback body=310 status=ok
// SIG AKRESULT UnregisterGlobalAsyncCallback(_func_Job_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr * param_1, uint param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterGlobalAsyncCallback(struct AK::JobMgr::Job
   (__cdecl*)(class AK::IAkGlobalPluginContext * __ptr64,enum AkGlobalCallbackLocation,void *
   __ptr64),unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::UnregisterGlobalAsyncCallback
          (_func_Job_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *param_1,
          uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  AKRESULT AVar5;
  ulonglong uVar6;
  AKRESULT AVar7;
  undefined1 local_res10 [16];
  
                    /* 0x4d402a0  356
                       ?UnregisterGlobalAsyncCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6A?AUJob@JobMgr@2@PEAVIAkGlobalPluginContext@2@W4AkGlobalCallbackLocation@@PEAX@ZI@Z
                        */
  FUN_1450719c0(local_res10);
  AVar7 = 0x1f;
  if (param_2 < 0x2000) {
    AVar5 = 0x1f;
    AVar7 = 0x1f;
    if (param_2 != 0) {
      do {
        uVar1 = 0;
        if (param_2 != 0) {
          for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        uVar6 = (ulonglong)uVar1;
        AVar7 = 0x1f;
        if ((&DAT_1499d0a30)[uVar6] == '\0') break;
        puVar4 = (undefined8 *)(&DAT_14c791280)[uVar6 * 3];
        puVar3 = (undefined8 *)0x0;
        while (puVar2 = puVar4, puVar2 != (undefined8 *)0x0) {
          if ((_func_Job_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)puVar2[1] ==
              param_1) {
            if (puVar2 == (undefined8 *)(&DAT_14c791280)[uVar6 * 3]) {
              (&DAT_14c791280)[uVar6 * 3] = puVar2[3];
            }
            else {
              puVar3[3] = puVar2[3];
            }
            if (puVar2 == (undefined8 *)(&DAT_14c791278)[uVar6 * 3]) {
              (&DAT_14c791278)[uVar6 * 3] = puVar3;
            }
            (&DAT_14c791270)[uVar6 * 6] = (&DAT_14c791270)[uVar6 * 6] + -1;
            (**(code **)*puVar2)(puVar2,0);
            MemoryMgr::Free(0x10,puVar2);
            AVar5 = 1;
            break;
          }
          puVar3 = puVar2;
          puVar4 = (undefined8 *)puVar2[3];
        }
        param_2 = param_2 & ~(1 << ((byte)uVar1 & 0x1f));
        AVar7 = AVar5;
      } while (param_2 != 0);
    }
  }
  FUN_1450719f0(local_res10);
  return AVar7;
}



// FUNCTION 144d403e0 PostCode body=6 status=ok
// SIG AKRESULT PostCode(ErrorCode param_1, ErrorLevel param_2, uint param_3, __uint64 param_4, uint param_5, bool param_6)

/* enum AKRESULT __cdecl AK::Monitor::PostCode(enum AK::Monitor::ErrorCode,enum
   AK::Monitor::ErrorLevel,unsigned int,unsigned __int64,unsigned int,bool) */

AKRESULT __cdecl
AK::Monitor::PostCode
          (ErrorCode param_1,ErrorLevel param_2,uint param_3,__uint64 param_4,uint param_5,
          bool param_6)

{
                    /* 0x4d403e0  179
                       ?PostCode@Monitor@AK@@YA?AW4AKRESULT@@W4ErrorCode@12@W4ErrorLevel@12@I_KI_N@Z
                        */
  return 4;
}



// FUNCTION 144d403f0 PostCodeVarArg body=11 status=ok
// SIG AKRESULT PostCodeVarArg(ErrorCode param_1, ErrorLevel param_2, MsgContext param_3, ...)

/* enum AKRESULT __cdecl AK::Monitor::PostCodeVarArg(enum AK::Monitor::ErrorCode,enum
   AK::Monitor::ErrorLevel,struct AK::Monitor::MsgContext,...) */

AKRESULT __cdecl AK::Monitor::PostCodeVarArg(void...)

{
                    /* 0x4d403f0  181
                       ?PostCodeVarArg@Monitor@AK@@YA?AW4AKRESULT@@W4ErrorCode@12@W4ErrorLevel@12@UMsgContext@12@ZZ
                        */
  return 4;
}



// FUNCTION 144d40400 PostCodeVaList body=6 status=ok
// SIG AKRESULT PostCodeVaList(ErrorCode param_1, ErrorLevel param_2, MsgContext param_3, char * param_4)

/* enum AKRESULT __cdecl AK::Monitor::PostCodeVaList(enum AK::Monitor::ErrorCode,enum
   AK::Monitor::ErrorLevel,struct AK::Monitor::MsgContext,char * __ptr64) */

AKRESULT __cdecl AK::Monitor::PostCodeVaList(void)

{
                    /* 0x4d40400  180
                       ?PostCodeVaList@Monitor@AK@@YA?AW4AKRESULT@@W4ErrorCode@12@W4ErrorLevel@12@UMsgContext@12@PEAD@Z
                        */
  return 4;
}



// FUNCTION 144d40410 PostString body=6 status=ok
// SIG AKRESULT PostString(wchar_t * param_1, ErrorLevel param_2, uint param_3, __uint64 param_4, uint param_5, bool param_6)

/* enum AKRESULT __cdecl AK::Monitor::PostString(wchar_t const * __ptr64,enum
   AK::Monitor::ErrorLevel,unsigned int,unsigned __int64,unsigned int,bool) */

AKRESULT __cdecl
AK::Monitor::PostString
          (wchar_t *param_1,ErrorLevel param_2,uint param_3,__uint64 param_4,uint param_5,
          bool param_6)

{
                    /* 0x4d40410  187
                       ?PostString@Monitor@AK@@YA?AW4AKRESULT@@PEB_WW4ErrorLevel@12@I_KI_N@Z */
  return 4;
}



// FUNCTION 144d40420 PostString body=6 status=ok
// SIG AKRESULT PostString(char * param_1, ErrorLevel param_2, uint param_3, __uint64 param_4, uint param_5, bool param_6)

/* enum AKRESULT __cdecl AK::Monitor::PostString(char const * __ptr64,enum
   AK::Monitor::ErrorLevel,unsigned int,unsigned __int64,unsigned int,bool) */

AKRESULT __cdecl
AK::Monitor::PostString
          (char *param_1,ErrorLevel param_2,uint param_3,__uint64 param_4,uint param_5,bool param_6)

{
                    /* 0x4d40420  186
                       ?PostString@Monitor@AK@@YA?AW4AKRESULT@@PEBDW4ErrorLevel@12@I_KI_N@Z */
  return 4;
}



// FUNCTION 144d40430 SetLocalOutput body=6 status=ok
// SIG AKRESULT SetLocalOutput(uint param_1, _func_void_ErrorCode_wchar_t_ptr_ErrorLevel_uint___uint64 * param_2)

/* enum AKRESULT __cdecl AK::Monitor::SetLocalOutput(unsigned int,void (__cdecl*)(enum
   AK::Monitor::ErrorCode,wchar_t const * __ptr64,enum AK::Monitor::ErrorLevel,unsigned int,unsigned
   __int64)) */

AKRESULT __cdecl
AK::Monitor::SetLocalOutput
          (uint param_1,_func_void_ErrorCode_wchar_t_ptr_ErrorLevel_uint___uint64 *param_2)

{
                    /* 0x4d40430  289
                       ?SetLocalOutput@Monitor@AK@@YA?AW4AKRESULT@@IP6AXW4ErrorCode@12@PEB_WW4ErrorLevel@12@I_K@Z@Z
                        */
  return 4;
}



// FUNCTION 144d40440 AddTranslator body=6 status=ok
// SIG AKRESULT AddTranslator(AkErrorMessageTranslator * param_1, bool param_2)

/* enum AKRESULT __cdecl AK::Monitor::AddTranslator(class AkErrorMessageTranslator * __ptr64,bool)
    */

AKRESULT __cdecl AK::Monitor::AddTranslator(AkErrorMessageTranslator *param_1,bool param_2)

{
                    /* 0x4d40440  27
                       ?AddTranslator@Monitor@AK@@YA?AW4AKRESULT@@PEAVAkErrorMessageTranslator@@_N@Z
                        */
  return 4;
}



// FUNCTION 144d40450 ResetTranslator body=6 status=ok
// SIG AKRESULT ResetTranslator(void)

/* enum AKRESULT __cdecl AK::Monitor::ResetTranslator(void) */

AKRESULT __cdecl AK::Monitor::ResetTranslator(void)

{
                    /* 0x4d40450  251  ?ResetTranslator@Monitor@AK@@YA?AW4AKRESULT@@XZ */
  return 4;
}



// FUNCTION 144d40460 GetTimeStamp body=3 status=ok
// SIG int GetTimeStamp(void)

/* int __cdecl AK::Monitor::GetTimeStamp(void) */

int __cdecl AK::Monitor::GetTimeStamp(void)

{
                    /* 0x4d40460  134  ?GetTimeStamp@Monitor@AK@@YAHXZ */
  return 0;
}



// FUNCTION 144d40470 MonitorStreamMgrInit body=3 status=ok
// SIG void MonitorStreamMgrInit(AkStreamMgrSettings * param_1)

/* void __cdecl AK::Monitor::MonitorStreamMgrInit(struct AkStreamMgrSettings const & __ptr64) */

void __cdecl AK::Monitor::MonitorStreamMgrInit(AkStreamMgrSettings *param_1)

{
                    /* 0x4d40470  166
                       ?MonitorStreamMgrInit@Monitor@AK@@YAXAEBUAkStreamMgrSettings@@@Z */
  return;
}



// FUNCTION 144d40480 MonitorStreamingDeviceInit body=3 status=ok
// SIG void MonitorStreamingDeviceInit(uint param_1, AkDeviceSettings * param_2)

/* void __cdecl AK::Monitor::MonitorStreamingDeviceInit(unsigned int,struct AkDeviceSettings const &
   __ptr64) */

void __cdecl AK::Monitor::MonitorStreamingDeviceInit(uint param_1,AkDeviceSettings *param_2)

{
                    /* 0x4d40480  169
                       ?MonitorStreamingDeviceInit@Monitor@AK@@YAXIAEBUAkDeviceSettings@@@Z */
  return;
}



// FUNCTION 144d40490 MonitorStreamingDeviceDestroyed body=3 status=ok
// SIG void MonitorStreamingDeviceDestroyed(uint param_1)

/* void __cdecl AK::Monitor::MonitorStreamingDeviceDestroyed(unsigned int) */

void __cdecl AK::Monitor::MonitorStreamingDeviceDestroyed(uint param_1)

{
                    /* 0x4d40490  168  ?MonitorStreamingDeviceDestroyed@Monitor@AK@@YAXI@Z */
  return;
}



// FUNCTION 144d404a0 MonitorStreamMgrTerm body=3 status=ok
// SIG void MonitorStreamMgrTerm(void)

/* void __cdecl AK::Monitor::MonitorStreamMgrTerm(void) */

void __cdecl AK::Monitor::MonitorStreamMgrTerm(void)

{
                    /* 0x4d404a0  167  ?MonitorStreamMgrTerm@Monitor@AK@@YAXXZ */
  return;
}



// FUNCTION 144d404b0 FUN_144d404b0 body=43 status=ok
// SIG undefined FUN_144d404b0(void)

undefined8 * FUN_144d404b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d0f30;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144d40520 FUN_144d40520 body=47 status=ok
// SIG undefined FUN_144d40520(void)

void FUN_144d40520(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_145088d40(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 144d40550 FUN_144d40550 body=54 status=ok
// SIG undefined FUN_144d40550(void)

void FUN_144d40550(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_5;
  local_18 = 0;
  local_10 = 0;
  local_28 = param_4;
  FUN_145088ea0(param_2,param_3,&local_28);
  return;
}



// FUNCTION 144d40590 FUN_144d40590 body=56 status=ok
// SIG undefined FUN_144d40590(void)

AKRESULT FUN_144d40590(undefined8 param_1,byte param_2,uint param_3,uint param_4,
                      _func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr
                      *param_5,uint param_6,void *param_7)

{
  AKRESULT AVar1;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  AVar1 = AK::SoundEngine::RegisterGlobalCallback
                    (param_5,param_6,param_7,(uint)param_2,param_3,param_4);
  return AVar1;
}



// FUNCTION 144d40610 FUN_144d40610 body=70 status=ok
// SIG undefined FUN_144d40610(void)

void FUN_144d40610(undefined8 param_1,uint param_2,__uint64 param_3,byte param_4,uint param_5,
                  uint param_6,void *param_7,uint param_8)

{
  AK::SoundEngine::SendPluginCustomGameData
            (param_2,param_3,(uint)param_4,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 144d40690 FUN_144d40690 body=782 status=ok
// SIG undefined FUN_144d40690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144d40690(undefined8 param_1,longlong param_2,uint param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong uVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined8 auStack_50 [4];
  float fStack_2c;
  
  if ((param_4 & 0xf00) == 0x200) {
    for (iVar13 = 0; iVar13 < 5; iVar13 = iVar13 + 1) {
      if ((param_4 & 0xff) == (iVar13 + 2) * (iVar13 + 2)) {
        uVar9 = (ulonglong)param_3 * 0x10;
        uVar11 = uVar9 + 0xf;
        if (uVar11 <= uVar9) {
          uVar11 = 0xffffffffffffff0;
        }
        auStack_50[0] = 0x144d40714;
        lVar4 = -(uVar11 & 0xfffffffffffffff0);
        uVar14 = 0;
        if (param_3 != 0) {
          pfVar12 = (float *)(param_2 + 8);
          pfVar10 = (float *)(&stack0xffffffffffffffd8 + lVar4);
          do {
            fVar20 = pfVar12[-2];
            fVar19 = fVar20 * fVar20 + pfVar12[-1] * pfVar12[-1] + *pfVar12 * *pfVar12;
            if (fVar19 <= 0.9) {
              return 0x1f;
            }
            if (1.1 <= fVar19) {
              return 0x1f;
            }
            *pfVar10 = fVar20;
            uVar14 = uVar14 + 1;
            pfVar10[1] = pfVar12[-1];
            fVar20 = *pfVar12;
            pfVar12 = pfVar12 + 3;
            pfVar10[2] = fVar20;
            pfVar10[3] = 0.0;
            pfVar10 = pfVar10 + 4;
          } while (uVar14 < param_3);
        }
        param_4 = param_4 & 0xff;
        uVar9 = (ulonglong)(param_4 * param_3) * 4;
        uVar11 = uVar9 + 0xf;
        if (uVar11 <= uVar9) {
          uVar11 = 0xffffffffffffff0;
        }
        *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x144d407bb;
        lVar5 = -(uVar11 & 0xfffffffffffffff0);
        *(undefined8 *)((longlong)auStack_50 + lVar5 + lVar4) = 0x144d407d3;
        FUN_145094ee0(iVar13,&stack0xffffffffffffffd8 + lVar4,param_3,
                      &stack0xffffffffffffffd8 + lVar5 + lVar4);
        *(undefined8 *)((longlong)auStack_50 + lVar5 + lVar4) = 0x144d407da;
        pfVar10 = (float *)FUN_145095070(iVar13);
        uVar14 = 0;
        if (param_4 == 0) {
          return 1;
        }
        do {
          fVar20 = (12.566371 / (float)param_3) * *pfVar10;
          uVar11 = 0;
          puVar17 = (undefined1 *)((ulonglong)((param_3 + 7 & 0xfffffff8) * uVar14) * 4 + param_5);
          puVar2 = &stack0xffffffffffffffd8 + lVar5 + lVar4 + (ulonglong)(uVar14 * param_3) * 4;
          if (param_3 != 0) {
            if ((0xf < param_3) &&
               ((puVar2 + (ulonglong)(param_3 - 1) * 4 < puVar17 ||
                (puVar17 + (ulonglong)(param_3 - 1) * 4 < puVar2)))) {
              uVar18 = 8;
              do {
                pfVar12 = (float *)(puVar2 + uVar11 * 4);
                fVar19 = pfVar12[1];
                fVar6 = pfVar12[2];
                fVar7 = pfVar12[3];
                pfVar3 = (float *)(puVar17 + uVar11 * 4);
                *pfVar3 = *pfVar12 * fVar20;
                pfVar3[1] = fVar19 * fVar20;
                pfVar3[2] = fVar6 * fVar20;
                pfVar3[3] = fVar7 * fVar20;
                uVar15 = (int)uVar11 + 0x10;
                uVar11 = (ulonglong)uVar15;
                pfVar12 = (float *)(puVar2 + (ulonglong)(uVar18 - 4) * 4);
                fVar19 = pfVar12[1];
                fVar6 = pfVar12[2];
                fVar7 = pfVar12[3];
                pfVar3 = (float *)(puVar17 + (ulonglong)(uVar18 - 4) * 4);
                *pfVar3 = *pfVar12 * fVar20;
                pfVar3[1] = fVar19 * fVar20;
                pfVar3[2] = fVar6 * fVar20;
                pfVar3[3] = fVar7 * fVar20;
                pfVar12 = (float *)(puVar2 + (ulonglong)uVar18 * 4);
                fVar19 = pfVar12[1];
                fVar6 = pfVar12[2];
                fVar7 = pfVar12[3];
                pfVar3 = (float *)(puVar17 + (ulonglong)uVar18 * 4);
                *pfVar3 = *pfVar12 * fVar20;
                pfVar3[1] = fVar19 * fVar20;
                pfVar3[2] = fVar6 * fVar20;
                pfVar3[3] = fVar7 * fVar20;
                uVar8 = uVar18 + 4;
                uVar18 = uVar18 + 0x10;
                pfVar12 = (float *)(puVar2 + (ulonglong)uVar8 * 4);
                fVar19 = pfVar12[1];
                fVar6 = pfVar12[2];
                fVar7 = pfVar12[3];
                pfVar3 = (float *)(puVar17 + (ulonglong)uVar8 * 4);
                *pfVar3 = *pfVar12 * fVar20;
                pfVar3[1] = fVar19 * fVar20;
                pfVar3[2] = fVar6 * fVar20;
                pfVar3[3] = fVar7 * fVar20;
              } while (uVar15 < (param_3 & 0xfffffff0));
            }
            uVar18 = (uint)uVar11;
            if (uVar18 < param_3) {
              uVar9 = uVar11;
              if (3 < param_3 - uVar18) {
                lVar1 = uVar11 * 4;
                uVar8 = ((param_3 - uVar18) - 4 >> 2) + 1;
                uVar16 = (ulonglong)uVar8;
                uVar18 = uVar18 + uVar8 * 4;
                uVar9 = (ulonglong)uVar18;
                uVar11 = uVar11 + (ulonglong)uVar8 * 4;
                pfVar12 = (float *)(puVar17 + lVar1 + 4);
                do {
                  pfVar3 = pfVar12 + 4;
                  pfVar12[-1] = fVar20 * *(float *)(puVar2 + (-0x14 - (longlong)puVar17) +
                                                   (longlong)pfVar3);
                  *pfVar12 = fVar20 * *(float *)(puVar2 + (-0x10 - (longlong)puVar17) +
                                                (longlong)pfVar3);
                  pfVar12[1] = fVar20 * *(float *)(puVar2 + (-0xc - (longlong)puVar17) +
                                                  (longlong)pfVar3);
                  pfVar12[2] = fVar20 * *(float *)(puVar2 + (-8 - (longlong)puVar17) +
                                                  (longlong)pfVar3);
                  uVar16 = uVar16 - 1;
                  pfVar12 = pfVar3;
                } while (uVar16 != 0);
                if (param_3 <= uVar18) goto LAB_144d4096b;
              }
              uVar9 = (ulonglong)(param_3 - (int)uVar9);
              pfVar12 = (float *)(puVar17 + uVar11 * 4);
              do {
                *pfVar12 = fVar20 * *(float *)(puVar2 + (-4 - (longlong)puVar17) +
                                              (longlong)(pfVar12 + 1));
                uVar9 = uVar9 - 1;
                pfVar12 = pfVar12 + 1;
              } while (uVar9 != 0);
            }
          }
LAB_144d4096b:
          uVar14 = uVar14 + 1;
          pfVar10 = pfVar10 + 1;
          if (param_4 <= uVar14) {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 0x1f;
}


