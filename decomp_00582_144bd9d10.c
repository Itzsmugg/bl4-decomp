// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144bd9d10 FUN_144bd9d10 body=127 status=ok
// SIG undefined FUN_144bd9d10(void)

longlong FUN_144bd9d10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      uint param_5)

{
  longlong local_res8;
  
  local_res8 = 0;
  FUN_144bd9c50(param_3,param_4,
                ((uint)*(byte *)(param_1 + 0xd) + (uint)*(byte *)(param_1 + 0xe)) * param_5,
                *(byte *)(param_1 + 0xe),&local_res8);
  return (longlong)
         (((ulonglong)param_5 - (ulonglong)(*(ushort *)(param_1 + 0x20) >> 1)) *
         *(longlong *)(param_2 + 0x20)) / *(longlong *)(param_2 + 0x28) +
         *(longlong *)(param_2 + 0x38) + *(longlong *)(param_2 + 0x30) + local_res8 <<
         (*(byte *)(param_1 + 0xc) & 0x3f);
}



// FUNCTION 144bd9d90 FUN_144bd9d90 body=732 status=ok
// SIG undefined FUN_144bd9d90(void)

longlong FUN_144bd9d90(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 *param_6,ulonglong *param_7)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  uint local_res20;
  
  if (*(ulonglong *)(param_1 + 0x10) <= param_5) {
    param_5 = *(ulonglong *)(param_1 + 0x10) - 1;
  }
  uVar2 = *(ushort *)(param_1 + 0x20);
  uVar13 = (ulonglong)uVar2;
  iVar11 = 0;
  param_4 = param_4 >> 3;
  if (uVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
    local_res20 = (uint)*(byte *)(param_1 + 0xc);
    do {
      uVar8 = (ulonglong)bVar1;
      iVar12 = (int)uVar13;
      uVar13 = uVar13 >> 1;
      uVar9 = (int)uVar13 + iVar11;
      uVar4 = ((uint)*(byte *)(param_1 + 0xd) + (uint)bVar1) * uVar9;
      uVar5 = (ulonglong)(uVar4 >> 6);
      lVar14 = (ulonglong)uVar4 + uVar5 * -0x40;
      uVar10 = 0;
      if (uVar5 < param_4) {
        uVar16 = 0x40 - lVar14;
        if (uVar8 <= uVar16) {
          uVar16 = uVar8;
        }
        bVar3 = (byte)uVar16;
        uVar15 = (ulonglong)
                 (*(longlong *)(param_3 + uVar5 * 8) << ((0x40 - bVar3) - (char)lVar14 & 0x3f)) >>
                 (0x40 - bVar3 & 0x3f);
        uVar10 = uVar15;
        if ((uVar16 != uVar8) && (uVar10 = 0, uVar5 + 1 < param_4)) {
          bVar7 = (bVar3 - bVar1) + 0x40;
          uVar10 = uVar15 | ((ulonglong)(*(longlong *)(param_3 + (uVar5 + 1) * 8) << (bVar7 & 0x3f))
                            >> (bVar7 & 0x3f)) << (bVar3 & 0x3f);
        }
      }
      if ((longlong)(((ulonglong)uVar9 - (ulonglong)(uVar2 >> 1)) * param_2[4]) / param_2[5] +
          param_2[6] + param_2[7] + uVar10 << (*(byte *)(param_1 + 0xc) & 0x3f) <= param_5) {
        iVar11 = uVar9 + 1;
        uVar13 = (ulonglong)(uint)(iVar12 + (-1 - (int)uVar13));
      }
    } while ((int)uVar13 != 0);
  }
  uVar4 = iVar11 - 1;
  if (iVar11 == 0) {
    uVar4 = 0;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_6 != (undefined8 *)0x0) {
    local_res8 = param_1;
    uVar6 = FUN_144bd9d10(param_1,param_2,param_3,param_4,uVar4);
    *param_6 = uVar6;
  }
  if (param_7 != (ulonglong *)0x0) {
    *param_7 = (ulonglong)*(ushort *)(param_1 + 0x22);
  }
  local_res8 = 0;
  iVar11 = (uint)*(byte *)(param_1 + 0xe) + (uint)*(byte *)(param_1 + 0xd);
  FUN_144bd9c50(param_3,param_4,(ulonglong)(uVar4 * iVar11) + (ulonglong)*(byte *)(param_1 + 0xe),
                *(byte *)(param_1 + 0xd),&local_res8);
  uVar2 = *(ushort *)(param_1 + 0x20);
  uVar9 = *(ushort *)(param_1 + 10) + 0x28;
  if (uVar2 != 0) {
    uVar9 = *(ushort *)(param_1 + 10) + 0x68 + ((uint)uVar2 * iVar11 + 0x3f >> 6) * 8;
  }
  return (ulonglong)uVar9 +
         (longlong)(((ulonglong)uVar4 - (ulonglong)(uVar2 >> 1)) * *param_2) / param_2[1] +
         param_2[3] + param_2[2] + local_res8;
}



// FUNCTION 144bda0a0 FUN_144bda0a0 body=91 status=ok
// SIG undefined FUN_144bda0a0(void)

undefined4
FUN_144bda0a0(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28 = (ulonglong)param_3 + param_2;
  local_48 = *param_4;
  local_40 = param_5;
  local_1c = 0;
  local_38 = param_2;
  local_30 = param_2;
  local_20 = param_3;
  FUN_144f4bcf0(param_1,&local_38,&local_48);
  *param_4 = local_48;
  return local_18;
}



// FUNCTION 144bda110 FUN_144bda110 body=8 status=ok
// SIG undefined FUN_144bda110(void)

undefined ** FUN_144bda110(void)

{
  return &PTR_LAB_14c6da1e0;
}



// FUNCTION 144bda120 FUN_144bda120 body=3 status=ok
// SIG undefined FUN_144bda120(void)

void FUN_144bda120(void)

{
  return;
}



// FUNCTION 144bda130 FUN_144bda130 body=36 status=ok
// SIG undefined FUN_144bda130(void)

undefined8 FUN_144bda130(undefined8 param_1,byte param_2)

{
  if ((param_2 & 5) == 5) {
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144bda160 FUN_144bda160 body=94 status=ok
// SIG undefined FUN_144bda160(void)

undefined1 * FUN_144bda160(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144be36a0(param_1 + 0x20,"Havok Async",0xffffffff);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}



// FUNCTION 144bda1c0 FUN_144bda1c0 body=382 status=ok
// SIG undefined FUN_144bda1c0(void)

undefined8 * FUN_144bda1c0(undefined8 *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  param_1[2] = 1;
  uVar8 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkAsyncThreadPool::vftable;
  iVar4 = *(int *)(param_2 + 4);
  lVar5 = (longlong)iVar4;
  param_1[4] = 0;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (iVar4 < 1) {
    iVar4 = -0x80000000;
    uVar1 = uVar8;
  }
  else {
    uVar1 = (**(code **)(PTR_vftable_14c6e4810 + 8))(&PTR_vftable_14c6e4810,lVar5 << 7);
    iVar7 = iVar4;
  }
  param_1[4] = uVar1;
  *(int *)(param_1 + 5) = iVar7;
  *(int *)((longlong)param_1 + 0x2c) = iVar4;
  lVar6 = param_1[4];
  lVar5 = lVar5 * 0x80 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x80) {
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      FUN_144bdde80(lVar6 + 0x28);
      FUN_144b4a290(lVar6 + 0x58,0,1000,0);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x38);
  param_1[0xc] = 0;
  uVar2 = FUN_144f50f10();
  param_1[7] = uVar2;
  iVar4 = *(int *)(DAT_14c787698 + 0x18);
  uVar1 = uVar8;
  uVar10 = uVar8;
  if (0 < *(int *)(param_2 + 4)) {
    do {
      puVar9 = (undefined8 *)(param_1[4] + uVar10);
      *puVar9 = param_1;
      iVar7 = (int)uVar8;
      *(int *)(puVar9 + 1) = iVar7;
      if (*(int *)(param_2 + 0x10) < 1) {
        *(undefined1 *)((longlong)puVar9 + 0x1c) = 1;
        iVar3 = iVar7 % iVar4;
      }
      else {
        *(undefined1 *)((longlong)puVar9 + 0x1c) = *param_2;
        iVar3 = *(int *)(*(longlong *)(param_2 + 8) + uVar1 * 4);
      }
      *(int *)(puVar9 + 3) = iVar3;
      uVar8 = (ulonglong)(iVar7 + 1U);
      *(undefined1 *)((longlong)puVar9 + 0x1d) =
           *(undefined1 *)(uVar1 + *(longlong *)(param_2 + 0x28));
      uVar1 = uVar1 + 1;
      uVar10 = uVar10 + 0x80;
    } while ((int)(iVar7 + 1U) < *(int *)(param_2 + 4));
  }
  return param_1;
}



// FUNCTION 144bda340 FUN_144bda340 body=299 status=ok
// SIG undefined FUN_144bda340(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144bda340(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  LPCRITICAL_SECTION p_Var5;
  
  lVar1 = param_1[9];
  *param_1 = hkAsyncThreadPool::vftable;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(lVar1 + 0x24)) && (*(longlong *)(lVar1 + 0x18) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(lVar1 + 0x18),
                 (ulonglong)(*(uint *)(lVar1 + 0x24) & 0x7fffffff) << 2);
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x24) = 0x80000000;
    FUN_144b49690(lVar1);
    (*DAT_14c787678)(0,lVar1,0);
  }
  puVar2 = (undefined1 *)param_1[4];
  if (puVar2 + (longlong)*(int *)(param_1 + 5) * 0x80 != puVar2) {
    p_Var5 = (LPCRITICAL_SECTION)(puVar2 + (longlong)*(int *)(param_1 + 5) * 0x80 + 0x28);
    do {
      FUN_144b49690(p_Var5 + 0xfffffffffffffffe);
      DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)(p_Var5 + 0xfffffffffffffffc) + 0x20U));
      puVar3 = *(undefined8 **)((longlong)(p_Var5 + 0xfffffffffffffffc) + 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      uVar4 = p_Var5 + 0xfffffffffffffffb;
      p_Var5 = (LPCRITICAL_SECTION)((longlong)(p_Var5 + 0xfffffffffffffffc) + 0x20U);
    } while ((ULONG_PTR *)(uVar4 + 0x20) != (ULONG_PTR *)puVar2);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e4810 + 0x18))
              (&PTR_vftable_14c6e4810,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 7);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144bda470 FUN_144bda470 body=524 status=ok
// SIG undefined FUN_144bda470(void)

void FUN_144bda470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 *local_res10;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
  uVar2 = 0;
  local_res8 = 0x30;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x28);
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"ToBackgroundQueue");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144f588c0(lVar1,*(undefined4 *)(param_2 + 4));
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(lVar1 + 0x24)) && (*(longlong *)(lVar1 + 0x18) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(lVar1 + 0x18),
                 (ulonglong)(*(uint *)(lVar1 + 0x24) & 0x7fffffff) << 2);
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x24) = 0x80000000;
    FUN_144b49690(lVar1);
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_144bfa1e0(&local_98);
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_98 = *(ulonglong *)(param_2 + 0x20) & 0xfffffffffffffffe;
  local_90 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x80 + lVar1;
  for (; lVar1 != lVar4; lVar1 = lVar1 + 0x80) {
    *(undefined4 *)(lVar1 + 0x20) = 1;
    *(undefined4 *)(lVar1 + 0x24) = 1;
    *(undefined1 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    if (*(char *)(lVar1 + 0x1d) != '\x01') {
      local_88 = 2;
    }
    FUN_144f50de0(local_78,0,8,FUN_144bdb550,&LAB_144bdb680);
    if (local_70 != (longlong *)0x0) {
      *local_70 = lVar1;
    }
    puVar3 = (undefined8 *)FUN_144bfa200(&local_res10,&local_98,local_78);
    uVar2 = *puVar3;
    *puVar3 = 0;
    puVar3 = *(undefined8 **)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (local_res10 != (undefined8 *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
    if (*(char *)(lVar1 + 0x1c) == '\x02') {
      FUN_144bfa170();
    }
    else {
      FUN_144bfa160(*(undefined8 *)(lVar1 + 0x10));
    }
  }
  FUN_144bdb120(param_1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 144bda680 FUN_144bda680 body=529 status=ok
// SIG undefined FUN_144bda680(void)

void FUN_144bda680(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_144f58980(*(undefined8 *)(param_1 + 0x48));
    LOCK();
    UNLOCK();
    iVar7 = *(int *)(param_1 + 0x30);
    if (iVar7 != *(int *)(param_1 + 0x28)) {
      do {
        iVar1 = iVar7 + 1;
        LOCK();
        iVar4 = *(int *)(param_1 + 0x30);
        bVar10 = iVar7 == iVar4;
        if (bVar10) {
          *(int *)(param_1 + 0x30) = iVar1;
          iVar4 = iVar7;
        }
        UNLOCK();
        if (bVar10) {
          lVar9 = (longlong)iVar7 * 0x80 + *(longlong *)(param_1 + 0x20);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
          if (*(int *)(lVar9 + 0x20) == 0) {
            *(undefined4 *)(lVar9 + 0x20) = 1;
            LOCK();
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
            UNLOCK();
            if (*(char *)(lVar9 + 0x1d) == '\x01') {
              FUN_144bfa180(*(undefined8 *)(lVar9 + 0x10),2);
            }
            else if (*(char *)(lVar9 + 0x1d) == '\x02') {
              FUN_144bdf120(lVar9 + 0x58,1);
            }
          }
          else if (*(int *)(lVar9 + 0x20) == 3) {
            *(undefined4 *)(lVar9 + 0x20) = 4;
            if (*(char *)(lVar9 + 0x1d) == '\x01') {
              FUN_144bfa180(*(undefined8 *)(lVar9 + 0x10),2);
            }
          }
          else {
            FUN_144f58a00(*(undefined8 *)(param_1 + 0x48),iVar7);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
          iVar4 = iVar1;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            uVar2 = *(ulonglong *)(param_1 + 0x60);
            uVar5 = FUN_144f50f00();
            do {
              if (uVar5 <= uVar2) break;
              LOCK();
              uVar6 = *(ulonglong *)(param_1 + 0x60);
              bVar10 = uVar2 == uVar6;
              if (bVar10) {
                *(ulonglong *)(param_1 + 0x60) = uVar5;
                uVar6 = uVar2;
              }
              UNLOCK();
              uVar2 = uVar6;
            } while (!bVar10);
          }
        }
        iVar7 = iVar4;
      } while (iVar7 != *(int *)(param_1 + 0x28));
    }
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar8 = (longlong)*(int *)(param_1 + 0x28) * 0x80 + lVar9;
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x80) {
      FUN_144bfa120(*(undefined8 *)(lVar9 + 0x10));
      puVar3 = *(undefined8 **)(lVar9 + 0x10);
      *(undefined8 *)(lVar9 + 0x10) = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + 0x24)) && (*(longlong *)(lVar9 + 0x18) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar9 + 0x18),
                   (ulonglong)(*(uint *)(lVar9 + 0x24) & 0x7fffffff) << 2);
      }
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined4 *)(lVar9 + 0x24) = 0x80000000;
      FUN_144b49690(lVar9);
      (*DAT_14c787678)(0,lVar9,0);
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 144bda8a0 FUN_144bda8a0 body=144 status=ok
// SIG undefined FUN_144bda8a0(void)

void FUN_144bda8a0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144f50f00();
  lVar2 = 0;
  param_2 = (float)*(ulonglong *)(param_1 + 0x38) * param_2;
  if ((9.223372e+18 <= param_2) && (param_2 = param_2 - 9.223372e+18, param_2 < 9.223372e+18)) {
    lVar2 = -0x8000000000000000;
  }
  FUN_144bdada0(param_1,(longlong)param_2 + lVar2 + lVar1);
  return;
}



// FUNCTION 144bda930 FUN_144bda930 body=29 status=ok
// SIG undefined FUN_144bda930(void)

undefined8 FUN_144bda930(void)

{
  return *(undefined8 *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe8);
}



// FUNCTION 144bda950 FUN_144bda950 body=28 status=ok
// SIG undefined FUN_144bda950(void)

undefined4 FUN_144bda950(void)

{
  return *(undefined4 *)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe0);
}



// FUNCTION 144bda970 FUN_144bda970 body=45 status=ok
// SIG undefined FUN_144bda970(void)

void FUN_144bda970(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe8);
  if (lVar1 != 0) {
    FUN_144bda9a0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 144bda9a0 FUN_144bda9a0 body=395 status=ok
// SIG undefined FUN_144bda9a0(void)

void FUN_144bda9a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  char *local_18;
  char *local_10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xe0);
  lVar5 = (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x20);
  FUN_144bdaff0();
  if ((*(int *)(lVar5 + 0x20) == 1) &&
     (uVar3 = FUN_144f50f00(), *(ulonglong *)(param_1 + 0x40) < uVar3)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
    if (*(int *)(lVar5 + 0x20) == 1) {
      *(undefined4 *)(lVar5 + 0x20) = 2;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      FUN_144f58a00(*(undefined8 *)(param_1 + 0x48),iVar1);
      *(undefined1 *)(lVar5 + 0x50) = 1;
      if (*(char *)(lVar2 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar2 + 0xf0);
      if (lVar4 == 0) {
        if (*(char *)(lVar2 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar4 = FUN_144b3f4a0();
        *(longlong *)(lVar2 + 0xf0) = lVar4;
      }
      if (*(longlong *)(lVar4 + 0x3e0) != 0) {
        local_18 = "TtAsyncThreadSuspended";
        local_10 = "";
        FUN_144b3f370(*(longlong *)(lVar4 + 0x3e0),&local_18);
      }
      FUN_144bdf0d0(lVar5 + 0x58);
      if (*(char *)(lVar2 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar2 + 0xf0);
      if (lVar4 == 0) {
        if (*(char *)(lVar2 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar4 = FUN_144b3f4a0();
        *(longlong *)(lVar2 + 0xf0) = lVar4;
      }
      if (*(longlong *)(lVar4 + 0x3e0) != 0) {
        local_18 = "Et";
        local_10 = "";
        FUN_144b3f260(*(longlong *)(lVar4 + 0x3e0),&local_18);
      }
      *(undefined1 *)(lVar5 + 0x50) = 0;
      if (*(char *)(lVar5 + 0x1d) == '\x02') {
        FUN_144bdaff0(param_1);
      }
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
    }
  }
  return;
}



// FUNCTION 144bdab30 FUN_144bdab30 body=187 status=ok
// SIG undefined FUN_144bdab30(void)

void FUN_144bdab30(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xe0) * 0x80 + *(longlong *)(param_1 + 0x20);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  piVar1 = (int *)(lVar3 + 0x24);
  *piVar1 = *piVar1 + -1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x28);
  if (*piVar1 == 0) {
    if (*(int *)(lVar3 + 0x20) == 0) {
      *(undefined4 *)(lVar3 + 0x20) = 3;
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      *(undefined4 *)(lVar3 + 0x20) = 4;
      LeaveCriticalSection(lpCriticalSection);
      LOCK();
      piVar1 = (int *)(param_1 + 0x50);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FUN_144f58a20(*(undefined8 *)(param_1 + 0x48));
      }
    }
    *(undefined1 *)(lVar3 + 0x50) = 1;
    FUN_144bdf0d0(lVar3 + 0x58);
    *(undefined1 *)(lVar3 + 0x50) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bdabe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144bdabf0 FUN_144bdabf0 body=426 status=ok
// SIG undefined FUN_144bdabf0(void)

void FUN_144bdabf0(longlong param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  LPCRITICAL_SECTION p_Var4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar7 = (longlong)param_2;
  lVar5 = lVar7 * 0x80 + lVar2;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x28);
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xe0);
  lVar3 = (longlong)iVar1;
  if (iVar1 != -1) {
    p_Var4 = (LPCRITICAL_SECTION)(lVar3 * 0x80 + 0x28 + lVar2);
    lVar6 = lVar3;
    if (lpCriticalSection <= p_Var4) {
      lVar6 = lVar7;
    }
    lVar6 = lVar6 * 0x80 + lVar2;
    if (lpCriticalSection <= p_Var4) {
      lVar7 = lVar3;
    }
    lVar2 = lVar7 * 0x80 + lVar2;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
    if (*(int *)(lVar5 + 0x24) == 0) {
      *(undefined4 *)(lVar5 + 0x24) = 1;
      if (*(int *)(lVar5 + 0x20) == 3) {
        *(undefined4 *)(lVar5 + 0x20) = 0;
        if (*(char *)(lVar5 + 0x1d) != '\x02') {
          FUN_144bdf120(lVar5 + 0x58,1);
        }
      }
      else {
        *(undefined4 *)(lVar5 + 0x20) = 1;
        LOCK();
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        UNLOCK();
        FUN_144bdf120(lVar5 + 0x58,1);
      }
    }
    else {
      *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000144bdad93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(lVar5 + 0x24) == 0) {
    *(undefined4 *)(lVar5 + 0x24) = 1;
    if (*(int *)(lVar5 + 0x20) != 3) {
      *(undefined4 *)(lVar5 + 0x20) = 1;
      LOCK();
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      UNLOCK();
      FUN_144bdf120(lVar5 + 0x58,1);
                    /* WARNING: Could not recover jumptable at 0x000144bdac82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *(undefined4 *)(lVar5 + 0x20) = 0;
    if (*(char *)(lVar5 + 0x1d) != '\x02') {
      FUN_144bdf120(lVar5 + 0x58,1);
                    /* WARNING: Could not recover jumptable at 0x000144bdacb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  else {
    *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bdacd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144bdada0 FUN_144bdada0 body=583 status=ok
// SIG undefined FUN_144bdada0(void)

void FUN_144bdada0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *local_e8;
  char *local_e0;
  undefined4 local_d8;
  char *local_c8;
  char *local_c0;
  undefined4 local_b8;
  char *local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_78;
  char *local_68;
  char *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  
  uVar2 = FUN_144f50f00();
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(ulonglong *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_144f58980(*(undefined8 *)(param_1 + 0x48));
  FUN_144bdaff0(param_1);
  FUN_144bdb120(param_1);
  uVar3 = FUN_144f50f00();
  lVar1 = *(longlong *)(param_1 + 0x60);
  lVar7 = lVar1 - *(longlong *)(param_1 + 0x58);
  lVar6 = 0;
  if (param_2 <= uVar3) {
    lVar6 = uVar3 - param_2;
  }
  lVar5 = uVar3 - lVar1;
  if (param_2 <= uVar3) {
    lVar5 = param_2 - lVar1;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar1 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar4;
  }
  lVar1 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar1 != 0) {
    local_68 = "YtprocessForegroundImpl";
    local_60 = "";
    FUN_144be9d00(lVar1,&local_68);
    local_e8 = "YtdriveToForeground";
    local_e0 = "";
    FUN_144be9d00(lVar1,&local_e8);
  }
  local_d8 = 1;
  local_e0 = (char *)lVar7;
  if (lVar1 != 0) {
    local_58 = &DAT_1499817a4;
    local_50 = &DAT_1499817a6;
    FUN_144be9e30(lVar1,&local_58,&local_e8);
    local_c8 = "Ytwaiting";
    local_c0 = "";
    FUN_144be9d00(lVar1,&local_c8);
  }
  local_b8 = 1;
  local_c0 = (char *)lVar5;
  if (lVar1 != 0) {
    local_48 = &DAT_1499817a4;
    local_40 = &DAT_1499817a6;
    FUN_144be9e30(lVar1,&local_48,&local_c8);
    local_a8 = "YtdriveToBackground";
    local_a0 = "";
    FUN_144be9d00(lVar1,&local_a8);
  }
  local_98 = 1;
  local_a0 = (char *)lVar6;
  if (lVar1 != 0) {
    local_88 = &DAT_1499817a4;
    local_80 = &DAT_1499817a6;
    FUN_144be9e30(lVar1,&local_88,&local_a8);
  }
  local_78 = 1;
  if (lVar1 != 0) {
    local_38 = &DAT_1499817a4;
    local_30 = &DAT_1499817a6;
    local_80 = (undefined *)(lVar5 + lVar6 + lVar7);
    FUN_144be9e30(lVar1,&local_38,&local_88);
  }
  return;
}



// FUNCTION 144bdaff0 FUN_144bdaff0 body=298 status=ok
// SIG undefined FUN_144bdaff0(void)

void FUN_144bdaff0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  LOCK();
  UNLOCK();
  iVar6 = *(int *)(param_1 + 0x30);
  if (iVar6 != *(int *)(param_1 + 0x28)) {
    do {
      iVar1 = iVar6 + 1;
      LOCK();
      iVar3 = *(int *)(param_1 + 0x30);
      bVar8 = iVar6 == iVar3;
      if (bVar8) {
        *(int *)(param_1 + 0x30) = iVar1;
        iVar3 = iVar6;
      }
      UNLOCK();
      if (bVar8) {
        lVar7 = (longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 0x20);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
        if (*(int *)(lVar7 + 0x20) == 0) {
          *(undefined4 *)(lVar7 + 0x20) = 1;
          LOCK();
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          UNLOCK();
          if (*(char *)(lVar7 + 0x1d) == '\x01') {
            FUN_144bfa180(*(undefined8 *)(lVar7 + 0x10),2);
          }
          else if (*(char *)(lVar7 + 0x1d) == '\x02') {
            FUN_144bdf120(lVar7 + 0x58,1);
          }
        }
        else if (*(int *)(lVar7 + 0x20) == 3) {
          *(undefined4 *)(lVar7 + 0x20) = 4;
          if (*(char *)(lVar7 + 0x1d) == '\x01') {
            FUN_144bfa180(*(undefined8 *)(lVar7 + 0x10),2);
          }
        }
        else {
          FUN_144f58a00(*(undefined8 *)(param_1 + 0x48),iVar6);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
        iVar3 = iVar1;
        if (*(longlong *)(param_1 + 0x58) != 0) {
          uVar2 = *(ulonglong *)(param_1 + 0x60);
          uVar4 = FUN_144f50f00();
          do {
            if (uVar4 <= uVar2) break;
            LOCK();
            uVar5 = *(ulonglong *)(param_1 + 0x60);
            bVar8 = uVar2 == uVar5;
            if (bVar8) {
              *(ulonglong *)(param_1 + 0x60) = uVar4;
              uVar5 = uVar2;
            }
            UNLOCK();
            uVar2 = uVar5;
          } while (!bVar8);
        }
      }
      iVar6 = iVar3;
    } while (iVar6 != *(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 144bdb120 FUN_144bdb120 body=346 status=ok
// SIG undefined FUN_144bdb120(void)

void FUN_144bdb120(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  iVar5 = 0;
  if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    FUN_144f58a20(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      FUN_144f58a30(*(undefined8 *)(param_1 + 0x48),local_res8);
      if (local_res8[0] == -1) {
        lVar3 = *(longlong *)(param_1 + 0x20);
        lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x80 + lVar3;
        for (; lVar3 != lVar4; lVar3 = lVar3 + 0x80) {
          if (*(int *)(lVar3 + 0x20) == 4) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
            if (*(int *)(lVar3 + 0x20) == 4) {
              if (*(char *)(lVar3 + 0x1d) == '\x01') {
                FUN_144bfa180(*(undefined8 *)(lVar3 + 0x10),0);
              }
              *(undefined4 *)(lVar3 + 0x20) = 3;
              iVar5 = iVar5 + 1;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
          }
        }
      }
      else {
        lVar3 = (longlong)local_res8[0] * 0x80 + *(longlong *)(param_1 + 0x20);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
        if (*(int *)(lVar3 + 0x20) == 2) {
          *(undefined4 *)(lVar3 + 0x20) = 0;
          if (*(char *)(lVar3 + 0x1d) == '\0') {
LAB_144bdb21e:
            FUN_144bdf120(lVar3 + 0x58,1);
          }
          else if (*(char *)(lVar3 + 0x1d) == '\x01') {
            FUN_144bfa180(*(undefined8 *)(lVar3 + 0x10),0);
            goto LAB_144bdb21e;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
          LOCK();
          piVar1 = (int *)(param_1 + 0x50);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar5 = iVar5 + 1;
          if (iVar2 == 1) {
            if (iVar5 == *(int *)(param_1 + 0x28)) {
              return;
            }
            FUN_144f58a20(*(undefined8 *)(param_1 + 0x48));
          }
        }
        else {
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
          iVar5 = iVar5 + 1;
        }
      }
    } while (iVar5 != *(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 144bdb280 FUN_144bdb280 body=87 status=ok
// SIG undefined FUN_144bdb280(void)

undefined8 FUN_144bdb280(undefined8 param_1,ulonglong param_2)

{
  FUN_144bda340();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 144bdb2e0 FUN_144bdb2e0 body=219 status=ok
// SIG undefined FUN_144bdb2e0(void)

undefined8 * FUN_144bdb2e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  FUN_144bda1c0();
  local_24 = 1000;
  *param_1 = hkAsyncTaskQueueThreadPool::vftable;
  lVar2 = 0;
  local_28 = 2;
  param_1[0xd] = 0;
  local_20 = *(undefined4 *)(param_2 + 4);
  local_res8 = 0x390;
  local_18 = param_1;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkDefaultTaskQueue");
  }
  if (lVar1 != 0) {
    lVar2 = FUN_144f510a0(lVar1,&local_28);
  }
  lVar1 = param_1[0xd];
  if ((lVar2 != lVar1) && (param_1[0xd] = lVar2, lVar1 != 0)) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1[0xd] + 0x380) = *(undefined4 *)(param_2 + 4);
  FUN_144bda470(param_1,param_2);
  return param_1;
}



// FUNCTION 144bdb3c0 FUN_144bdb3c0 body=68 status=ok
// SIG undefined FUN_144bdb3c0(void)

void FUN_144bdb3c0(undefined8 *param_1)

{
  *param_1 = hkAsyncTaskQueueThreadPool::vftable;
  (**(code **)(*(longlong *)(param_1[0xd] + 0x18) + 0x58))();
  FUN_144bda680(param_1);
  if (param_1[0xd] != 0) {
    FUN_144b3f230();
  }
  FUN_144bda340(param_1);
  return;
}



// FUNCTION 144bdb410 FUN_144bdb410 body=36 status=ok
// SIG undefined FUN_144bdb410(void)

void FUN_144bdb410(longlong param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) + 0x58))();
  FUN_144bda680(param_1);
  return;
}



// FUNCTION 144bdb440 FUN_144bdb440 body=18 status=ok
// SIG undefined FUN_144bdb440(void)

longlong FUN_144bdb440(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68) + 0x18;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144bdb460 FUN_144bdb460 body=64 status=ok
// SIG undefined FUN_144bdb460(void)

void FUN_144bdb460(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_144bdada0(param_1,0xffffffffffffffff);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x68) + 0x18);
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 144bdb4a0 FUN_144bdb4a0 body=11 status=ok
// SIG undefined FUN_144bdb4a0(void)

void FUN_144bdb4a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144bdb4a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))();
  return;
}



// FUNCTION 144bdb4b0 FUN_144bdb4b0 body=15 status=ok
// SIG undefined FUN_144bdb4b0(void)

void FUN_144bdb4b0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144bdb4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) + 0x70))();
  return;
}



// FUNCTION 144bdb4c0 FUN_144bdb4c0 body=136 status=ok
// SIG undefined FUN_144bdb4c0(void)

undefined8 * FUN_144bdb4c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkAsyncTaskQueueThreadPool::vftable;
  (**(code **)(*(longlong *)(param_1[0xd] + 0x18) + 0x58))();
  FUN_144bda680(param_1);
  if (param_1[0xd] != 0) {
    FUN_144b3f230();
  }
  FUN_144bda340(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 144bdb550 FUN_144bdb550 body=294 status=ok
// SIG undefined FUN_144bdb550(void)

void FUN_144bdb550(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = (int)((longlong *)*param_1)[1];
  plVar4 = *(longlong **)*param_1;
  lVar7 = (longlong)iVar2 * 0x80 + plVar4[4];
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar5 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar5 + 0xf0) = lVar6;
  }
  lVar6 = *(longlong *)(lVar6 + 0x3e0);
  if ((lVar6 != 0) && (0 < *(int *)((longlong)plVar4 + 0x54))) {
    FUN_144bea050(lVar6,(longlong)*(int *)((longlong)plVar4 + 0x54));
  }
  *(longlong *)(lVar7 + 0x68) = lVar6;
  *(int *)(lVar5 + 0xe0) = iVar2;
  *(longlong **)(lVar5 + 0xe8) = plVar4;
  FUN_144bda9a0(plVar4,0xb90a045c);
  (**(code **)(*plVar4 + 0x20))(plVar4,iVar2);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
  iVar3 = *(int *)(lVar7 + 0x20);
  *(undefined4 *)(lVar7 + 0x20) = 5;
  if (iVar3 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
    LOCK();
    plVar1 = plVar4 + 10;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      FUN_144f58a20(plVar4[9]);
    }
    FUN_144f58a00(plVar4[9],iVar2);
  }
  return;
}



// FUNCTION 144bdb6a0 FUN_144bdb6a0 body=137 status=ok
// SIG undefined FUN_144bdb6a0(void)

void FUN_144bdb6a0(int param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
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
  *(undefined8 *)(lVar2 + 1000 + (longlong)param_1 * 8) = param_2;
  return;
}



// FUNCTION 144bdb730 FUN_144bdb730 body=123 status=ok
// SIG undefined FUN_144bdb730(void)

undefined8 FUN_144bdb730(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
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
  return *(undefined8 *)(lVar2 + 1000 + (longlong)param_1 * 8);
}



// FUNCTION 144bdb7b0 FUN_144bdb7b0 body=3 status=ok
// SIG undefined FUN_144bdb7b0(void)

void FUN_144bdb7b0(void)

{
  return;
}



// FUNCTION 144bdb7c0 FUN_144bdb7c0 body=71 status=ok
// SIG undefined FUN_144bdb7c0(void)

undefined8 * FUN_144bdb7c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144bdb810 FUN_144bdb810 body=159 status=ok
// SIG undefined FUN_144bdb810(void)

void FUN_144bdb810(ulonglong *param_1,undefined8 param_2)

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



// FUNCTION 144bdb8b0 FUN_144bdb8b0 body=160 status=ok
// SIG undefined FUN_144bdb8b0(void)

void FUN_144bdb8b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  if (DAT_14c783b00 != 0) {
    iVar5 = -1;
    plVar6 = (longlong *)0x0;
    lVar3 = DAT_14c783b00;
LAB_144bdb8e0:
    lVar2 = (longlong)iVar5;
    if ((plVar6 != (longlong *)0x0) &&
       (plVar6 = (longlong *)plVar6[0x1e], plVar6 != (longlong *)0x0)) goto LAB_144bdb90f;
    iVar5 = iVar5 + 1;
    if (iVar5 < *(int *)(lVar3 + 0x40)) goto code_r0x000144bdb8fe;
  }
  return;
code_r0x000144bdb8fe:
  plVar6 = (longlong *)**(longlong **)(*(longlong *)(lVar3 + 0x38) + 8 + lVar2 * 8);
  if (plVar6 != (longlong *)0x0) {
LAB_144bdb90f:
    iVar4 = (int)plVar6[1];
    while (iVar4 = iVar4 + -1, lVar3 = DAT_14c783b00, iVar4 != -1) {
      plVar1 = *(longlong **)(*plVar6 + (longlong)iVar4 * 0x10);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
    }
  }
  goto LAB_144bdb8e0;
}



// FUNCTION 144bdb950 FUN_144bdb950 body=1332 status=ok
// SIG undefined FUN_144bdb950(void)

void FUN_144bdb950(longlong param_1,ulonglong *param_2,int param_3,char param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  void *pvVar7;
  undefined2 *puVar8;
  char *pcVar9;
  size_t sVar10;
  size_t sVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined1 local_res18 [16];
  undefined1 local_38 [16];
  
  puVar1 = param_2 + 1;
  if (0 < param_3) {
    iVar6 = 0x4d;
    if (param_3 < 0x4e) {
      iVar6 = param_3;
    }
    sVar11 = (size_t)iVar6;
    pvVar7 = (void *)*param_2;
    if (*puVar1 < (longlong)pvVar7 + sVar11) {
      pvVar7 = (void *)FUN_144beb270(param_2,sVar11);
    }
    else {
      *param_2 = (longlong)pvVar7 + sVar11;
    }
    if (pvVar7 == (void *)0x0) {
      uVar4 = *param_2;
      local_res18[0] = 0;
      if (uVar4 + 1 <= *puVar1) {
        FUN_144b3d470();
        *param_2 = uVar4 + 1;
        return;
      }
      FUN_144beb1c0(param_2,local_res18,1);
      return;
    }
    memset(pvVar7,0x20,sVar11);
  }
  lVar12 = -1;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    sVar11 = 0xffffffffffffffff;
    do {
      sVar11 = sVar11 + 1;
    } while (*(char *)(*(longlong *)(param_1 + 0x38) + sVar11) != '\0');
    pvVar7 = (void *)*param_2;
    if (*puVar1 < (longlong)pvVar7 + sVar11) {
      pvVar7 = (void *)FUN_144beb270(param_2,sVar11);
    }
    else {
      *param_2 = (longlong)pvVar7 + sVar11;
    }
    if (pvVar7 != (void *)0x0) {
      memcpy(pvVar7,*(void **)(param_1 + 0x38),sVar11);
    }
    puVar14 = param_2 + 1;
    iVar6 = FUN_144bfb980(local_38,0x10," (%d)",*(undefined4 *)(param_1 + 0x40));
    sVar11 = (size_t)iVar6;
    pvVar7 = (void *)*param_2;
    if (*puVar1 < (longlong)pvVar7 + sVar11) {
      pvVar7 = (void *)FUN_144beb270(param_2,sVar11);
    }
    else {
      *param_2 = (longlong)pvVar7 + sVar11;
    }
    if (pvVar7 == (void *)0x0) {
      local_res18[0] = 0;
      uVar4 = *param_2 + 1;
      if (uVar4 <= *puVar14) {
        FUN_144b3d470(*param_2,local_res18,1);
        *param_2 = uVar4;
        return;
      }
      goto LAB_144bdbe66;
    }
    memcpy(pvVar7,local_38,sVar11);
    uVar4 = *param_2;
    local_res18[0] = 0x3a;
    if (*puVar14 < uVar4 + 1) {
      FUN_144beb1c0(param_2,local_res18,1);
    }
    else {
      FUN_144b3d470();
      *param_2 = uVar4 + 1;
    }
    uVar4 = *param_2;
    local_res18[0] = 0x20;
    if (*puVar14 < uVar4 + 1) {
      FUN_144beb1c0(param_2,local_res18,1);
    }
    else {
      FUN_144b3d470();
      *param_2 = uVar4 + 1;
    }
  }
  cVar2 = *(char *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    pcVar9 = "Disabled";
  }
  else if (cVar2 == '\x01') {
    pcVar9 = "Error";
  }
  else if (cVar2 == '\x02') {
    pcVar9 = "Warning";
  }
  else if (cVar2 == '\x03') {
    pcVar9 = "Info";
  }
  else if (cVar2 == '\x04') {
    pcVar9 = "Debug";
  }
  else {
    pcVar9 = "Unknown";
    if (cVar2 == '\x05') {
      pcVar9 = "MaxLevel";
    }
  }
  sVar11 = 0xffffffffffffffff;
  do {
    sVar10 = sVar11;
    sVar11 = sVar10 + 1;
  } while (pcVar9[sVar11] != '\0');
  pvVar7 = (void *)*param_2;
  uVar4 = (longlong)pvVar7 + sVar10 + 3;
  if (param_2[1] < uVar4) {
    pvVar7 = (void *)FUN_144beb270(param_2);
  }
  else {
    *param_2 = uVar4;
  }
  if (pvVar7 != (void *)0x0) {
    memcpy(pvVar7,pcVar9,sVar11);
    *(undefined2 *)((longlong)pvVar7 + sVar11) = 0x203a;
    pcVar9 = (char *)(*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe);
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
      lVar13 = 0xc;
      pcVar9 = "<empty text>";
    }
    else {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (pcVar9[lVar13] != '\0');
    }
    FUN_144bdce20(param_2,pcVar9,lVar13);
    if (*(int *)(param_1 + 0x1c) != 0) {
      puVar8 = (undefined2 *)*param_2;
      if (param_2[1] < (longlong)puVar8 + 0xbU) {
        puVar8 = (undefined2 *)FUN_144beb270(param_2,0xb);
      }
      else {
        *param_2 = (longlong)puVar8 + 0xbU;
      }
      if (puVar8 == (undefined2 *)0x0) {
        FUN_144bdce80(param_2,0);
        return;
      }
      uVar3 = *(uint *)(param_1 + 0x1c);
      *puVar8 = 0x5b20;
      *(undefined1 *)(puVar8 + 5) = 0x5d;
      *(char *)(puVar8 + 1) = "0123456789ABCDEFhkLog_threadLocalOutput"[uVar3 >> 0x1c];
      *(char *)((longlong)puVar8 + 3) =
           "0123456789ABCDEFhkLog_threadLocalOutput"[uVar3 >> 0x18 & 0xf];
      *(char *)(puVar8 + 2) = "0123456789ABCDEFhkLog_threadLocalOutput"[uVar3 >> 0x14 & 0xf];
      *(char *)((longlong)puVar8 + 5) =
           "0123456789ABCDEFhkLog_threadLocalOutput"[uVar3 >> 0x10 & 0xf];
      *(char *)(puVar8 + 3) = "0123456789ABCDEFhkLog_threadLocalOutput"[uVar3 >> 0xc & 0xf];
      *(char *)((longlong)puVar8 + 7) = "0123456789ABCDEFhkLog_threadLocalOutput"[uVar3 >> 8 & 0xf];
      *(char *)(puVar8 + 4) = "0123456789ABCDEFhkLog_threadLocalOutput"[uVar3 >> 4 & 0xf];
      *(undefined1 *)((longlong)puVar8 + 9) =
           *(undefined1 *)((ulonglong)(uVar3 & 0xf) + 0x1499817f0);
    }
    lVar13 = *(longlong *)(param_1 + 0x10);
    if ((*(byte *)(lVar13 + 0x52) & 1) == 0) {
      lVar13 = *(longlong *)(lVar13 + 0x58);
    }
    lVar13 = *(longlong *)(lVar13 + 0x58);
    if (lVar13 != 0) {
      FUN_144bdce80(param_2,0x20);
      FUN_144bdce80(param_2,0x5b);
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(lVar13 + lVar12) != '\0');
      uVar4 = *param_2;
      if (param_2[1] < uVar4 + lVar12) {
        FUN_144beb1c0(param_2,lVar13,lVar12);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar4 + lVar12;
      }
      FUN_144bdce80(param_2,0x5d);
    }
    uVar4 = *param_2;
    local_res18[0] = 10;
    if (param_2[1] < uVar4 + 1) {
      FUN_144beb1c0(param_2,local_res18,1);
    }
    else {
      FUN_144b3d470();
      *param_2 = uVar4 + 1;
    }
    if ((param_4 != '\0') && (plVar5 = *(longlong **)(param_1 + 0x48), plVar5 != (longlong *)0x0)) {
      uVar4 = *param_2;
      if (param_2[1] < uVar4 + 0x10) {
        FUN_144beb1c0(param_2,"Stack trace is:\n",0x10);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar4 + 0x10;
      }
      FUN_144f59b60(plVar5[2],*plVar5,plVar5[1] - *plVar5 >> 3,FUN_144bdced0,param_2);
      uVar4 = *param_2;
      if (param_2[1] < uVar4 + 0x10) {
        FUN_144beb1c0(param_2,"Stack trace end\n",0x10);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar4 + 0x10;
      }
    }
  }
  uVar4 = *param_2;
  local_res18[0] = 0;
  if (uVar4 + 1 <= param_2[1]) {
    FUN_144b3d470();
    *param_2 = uVar4 + 1;
    return;
  }
LAB_144bdbe66:
  local_res18[0] = 0;
  FUN_144beb1c0(param_2,local_res18,1);
  return;
}



// FUNCTION 144bdbe90 FUN_144bdbe90 body=223 status=ok
// SIG undefined FUN_144bdbe90(void)

void FUN_144bdbe90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong local_68 [4];
  undefined1 local_48 [64];
  
  lVar1 = FUN_144be1630(param_2);
  if ((*(int *)(lVar1 + 8) < 0) || (0 < *(int *)(lVar1 + 8))) {
    *(undefined4 *)(lVar1 + 8) = 0;
  }
  local_68[0] = 0;
  lVar1 = FUN_144beaf60(lVar1,&PTR_vftable_14c6e47c0);
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  bVar2 = local_68[0] != 0;
  local_68[0] = lVar1;
  if (bVar2) {
    FUN_144b3f230();
  }
  local_68[3] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  FUN_144beb000(local_48,local_68);
  if (local_68[0] != 0) {
    FUN_144b3f230();
  }
  FUN_144bdb950(param_1,local_48,param_3,param_4);
  FUN_144beb0a0(local_48);
  return;
}



// FUNCTION 144bdbf70 FUN_144bdbf70 body=7 status=ok
// SIG undefined FUN_144bdbf70(void)

void FUN_144bdbf70(undefined1 param_1)

{
  DAT_14c6da228 = param_1;
  return;
}



// FUNCTION 144bdbf80 FUN_144bdbf80 body=8 status=ok
// SIG undefined FUN_144bdbf80(void)

undefined1 FUN_144bdbf80(void)

{
  return DAT_14c6da228;
}



// FUNCTION 144bdbf90 FUN_144bdbf90 body=146 status=ok
// SIG undefined FUN_144bdbf90(void)

void FUN_144bdbf90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -0x10);
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



// FUNCTION 144bdc030 FUN_144bdc030 body=358 status=ok
// SIG undefined FUN_144bdc030(void)

void FUN_144bdc030(longlong *param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  ulonglong uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c783ac8);
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  iVar4 = (int)param_1[1] + -1;
  if (-1 < iVar4) {
    lVar3 = (longlong)iVar4;
    plVar2 = (longlong *)(lVar3 * 0x10 + *param_1);
    do {
      if (param_2 == *plVar2) {
        if (-1 < iVar4) {
          *(byte *)(*param_1 + 8 + (longlong)iVar4 * 0x10) = param_3;
          *(undefined1 *)(param_1 + 10) = 0;
          if (0 < (int)*(uint *)(param_1 + 1)) {
            bVar5 = 0;
            pbVar6 = (byte *)(*param_1 + 8);
            uVar7 = (ulonglong)*(uint *)(param_1 + 1);
            do {
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 0x10;
              if (bVar1 < bVar5) {
                bVar1 = bVar5;
              }
              bVar5 = bVar1;
              *(byte *)(param_1 + 10) = bVar5;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          goto LAB_144bdc0fe;
        }
        break;
      }
      iVar4 = iVar4 + -1;
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar4 = (int)param_1[1] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_144bdd9a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  plVar2 = (longlong *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    if (param_2 != 0) {
      FUN_144b3d910(param_2);
    }
    *(byte *)(plVar2 + 1) = param_3;
  }
  *(int *)(param_1 + 1) = iVar4;
  if (param_3 < *(byte *)(param_1 + 10)) {
    param_3 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = param_3;
LAB_144bdc0fe:
  if (param_2 != 0) {
    FUN_144b3f230(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000144bdc12b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c783ac8);
  return;
}



// FUNCTION 144bdc1a0 FUN_144bdc1a0 body=353 status=ok
// SIG undefined FUN_144bdc1a0(void)

void FUN_144bdc1a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c783ac8);
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  iVar6 = (int)param_1[1] + -1;
  if (-1 < iVar6) {
    lVar5 = (longlong)iVar6;
    plVar3 = (longlong *)(lVar5 * 0x10 + *param_1);
    do {
      if (param_2 == *plVar3) goto LAB_144bdc1fa;
      iVar6 = iVar6 + -1;
      plVar3 = plVar3 + -2;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar6 = -1;
LAB_144bdc1fa:
  if (param_2 != 0) {
    FUN_144b3f230(param_2);
  }
  if (-1 < iVar6) {
    lVar5 = (longlong)iVar6;
    cVar2 = *(char *)(*param_1 + 8 + lVar5 * 0x10);
    if (*(longlong *)(*param_1 + lVar5 * 0x10) != 0) {
      FUN_144b3f230();
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    uVar4 = (int)param_1[1] - iVar6;
    plVar3 = (longlong *)(*param_1 + lVar5 * 0x10);
    if (((uVar4 != 0) && (plVar3 != plVar3 + 2)) && (0 < (int)uVar4)) {
      uVar8 = (ulonglong)uVar4;
      plVar7 = plVar3;
      do {
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = plVar7[2];
          if (plVar7[2] != 0) {
            FUN_144b3d910();
          }
          *(char *)((longlong)plVar7 + (longlong)plVar3 + (0x18 - (longlong)(plVar3 + 2))) =
               (char)plVar7[3];
        }
        plVar1 = plVar7 + 2;
        plVar7 = plVar7 + 2;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (cVar2 == (char)param_1[10]) {
      *(undefined1 *)(param_1 + 10) = 0;
      lVar5 = *param_1;
      lVar11 = (longlong)(int)param_1[1] * 0x10 + lVar5;
      if (lVar5 != lVar11) {
        bVar10 = 0;
        do {
          bVar9 = *(byte *)(lVar5 + 8);
          if (*(byte *)(lVar5 + 8) < bVar10) {
            bVar9 = bVar10;
          }
          lVar5 = lVar5 + 0x10;
          *(byte *)(param_1 + 10) = bVar9;
          bVar10 = bVar9;
        } while (lVar5 != lVar11);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144bdc2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c783ac8);
  return;
}



// FUNCTION 144bdc310 FUN_144bdc310 body=134 status=ok
// SIG undefined FUN_144bdc310(void)

void FUN_144bdc310(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (((longlong *)*param_1 != param_1 + 2) && (-1 < *(int *)((longlong)param_1 + 0xc))) {
    FUN_144bdd5e0(&PTR_vftable_14c6e47a0,param_1,param_1 + 2,4);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 144bdc3a0 FUN_144bdc3a0 body=80 status=ok
// SIG undefined FUN_144bdc3a0(void)

undefined8 * FUN_144bdc3a0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  param_1[2] = param_2;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 3) = param_3;
  uVar1 = FUN_144b46fa0();
  param_1[4] = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 144bdc3f0 FUN_144bdc3f0 body=9 status=ok
// SIG undefined FUN_144bdc3f0(void)

void FUN_144bdc3f0(longlong param_1)

{
  FUN_144b49dd0(param_1 + 0x28);
  return;
}



// FUNCTION 144bdc400 FUN_144bdc400 body=124 status=ok
// SIG undefined FUN_144bdc400(void)

longlong * FUN_144bdc400(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar2 = *(int *)((longlong)param_1 + 0xc) + -1;
    iVar1 = FUN_144bfbbb0(param_2);
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    FUN_144bfbed0(*param_1,param_2,(longlong)iVar2);
    *(undefined1 *)((longlong)iVar2 + *param_1) = 0;
    *(int *)(param_1 + 1) = iVar2;
    return param_1;
  }
  FUN_144be3730(param_1 + 5);
  return param_1;
}



// FUNCTION 144bdc480 FUN_144bdc480 body=272 status=ok
// SIG undefined FUN_144bdc480(void)

longlong * FUN_144bdc480(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_b8 [8];
  int local_b0;
  undefined4 local_28;
  
  if (*param_1 == 0) {
    FUN_144bdf360(local_b8);
    uVar1 = param_1[5];
    uVar2 = FUN_144be3870(param_1 + 5);
    FUN_144be0720(local_b8,uVar1 & 0xfffffffffffffffe,uVar2);
    FUN_144be1a50(local_b8,local_res8,param_2,param_3,param_4);
    FUN_144be3790(param_1 + 5,local_b8);
    FUN_144bdf2f0(local_b8);
  }
  else {
    FUN_144bdf620(local_b8,(ulonglong)*(uint *)(param_1 + 1) + *param_1,*(uint *)(param_1 + 1) + 1,
                  *(undefined4 *)((longlong)param_1 + 0xc));
    local_28 = 0;
    FUN_144be19c0(local_b8,local_res8,param_2,param_3,param_4);
    *(int *)(param_1 + 1) = local_b0 + -1;
    FUN_144bdf2f0(local_b8);
  }
  return param_1;
}



// FUNCTION 144bdc590 FUN_144bdc590 body=176 status=ok
// SIG undefined FUN_144bdc590(void)

longlong * FUN_144bdc590(longlong *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000004;
  *(undefined2 *)((longlong)param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_144bdf390(param_1 + 0xb);
  param_1[0x1e] = (longlong)DAT_14c783a98;
  FUN_144be1260(param_1 + 0xb,0x5f,0x2e,1);
  if ((byte)(*(char *)((longlong)(int)param_1[0xc] + -2 + param_1[0xb]) - 0x30U) < 10) {
    uVar1 = FUN_144bdfe30(param_1 + 0xb,CONCAT71((int7)(int3)((uint)(int)param_1[0xc] >> 8),0x2e),0,
                          0x7fffffff);
    FUN_144be0670(param_1 + 0xb,0,uVar1);
  }
  DAT_14c783a98 = param_1;
  return param_1;
}



// FUNCTION 144bdc640 FUN_144bdc640 body=80 status=ok
// SIG undefined FUN_144bdc640(void)

undefined8 * FUN_144bdc640(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  param_1[2] = param_2;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 3) = param_3;
  uVar1 = FUN_144b46fa0();
  param_1[4] = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 144bdc690 FUN_144bdc690 body=379 status=ok
// SIG undefined FUN_144bdc690(void)

void FUN_144bdc690(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 *local_438;
  undefined1 *puStack_430;
  undefined1 *local_428;
  undefined1 local_418 [1024];
  
  lVar4 = FUN_144bdb730(DAT_14c783b30);
  plVar5 = (longlong *)FUN_144bdb730(DAT_14c783af0);
  if (((*(int *)(param_1 + 0x1c) != 0) &&
      (lVar6 = FUN_144bdd570(&DAT_14c6da208,param_1 + 0x1c), lVar6 != 0)) &&
     (-1 < *(int *)(lVar6 + 4))) goto LAB_144bdc7f8;
  FUN_144f59b40(local_res8);
  local_438 = (undefined1 *)0x0;
  puStack_430 = (undefined1 *)0x0;
  local_428 = (undefined1 *)0x0;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    iVar2 = FUN_144f59d70(local_res8,local_418,0x80,1,0);
    puStack_430 = local_418 + (longlong)iVar2 * 8;
    local_438 = local_418;
    local_428 = local_res8;
    *(undefined1 ***)(param_1 + 0x48) = &local_438;
  }
  if (plVar5 == (longlong *)0x0) {
LAB_144bdc77d:
    plVar5 = *(longlong **)(param_1 + 0x10);
    iVar2 = (int)plVar5[1];
    do {
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 == -1) goto LAB_144bdc7eb;
        lVar6 = *plVar5;
        plVar1 = *(longlong **)(lVar6 + (longlong)iVar2 * 0x10);
      } while ((plVar1 == (longlong *)0x0) ||
              (*(byte *)(lVar6 + 8 + (longlong)iVar2 * 0x10) < *(byte *)(param_1 + 0x18)));
      if (lVar4 != 0) {
        FUN_144bdcc20(lVar4,plVar1);
      }
      iVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    } while (iVar3 != 1);
  }
  else {
    if (lVar4 != 0) {
      FUN_144bdcc20(lVar4,plVar5,*(undefined1 *)(param_1 + 0x18));
    }
    iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,param_1);
    if (iVar2 != 1) goto LAB_144bdc77d;
  }
LAB_144bdc7eb:
  FUN_144f59b50(local_res8);
LAB_144bdc7f8:
  FUN_144b49dd0(param_1 + 0x28);
  return;
}



// FUNCTION 144bdc810 FUN_144bdc810 body=134 status=ok
// SIG undefined FUN_144bdc810(void)

undefined8 * FUN_144bdc810(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[2] = param_2;
  *param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  uVar2 = FUN_144b46fa0();
  puVar1 = param_1 + 10;
  param_1[5] = 0;
  *(undefined1 *)puVar1 = 0;
  param_1[4] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = puVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
    FUN_144be38f0(param_1 + 5);
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 144bdc8a0 FUN_144bdc8a0 body=89 status=ok
// SIG undefined FUN_144bdc8a0(void)

void FUN_144bdc8a0(longlong param_1)

{
  int iVar1;
  
  if ((PTR_FUN_14c6da200 != (undefined *)0x0) && (*(char *)(param_1 + 0x50) != '\0')) {
    iVar1 = FUN_144bfbbb0(param_1 + 0x50);
    *(undefined2 *)((longlong)(int)(iVar1 - (uint)(iVar1 == 0xff)) + 0x50 + param_1) = 10;
    (*(code *)PTR_FUN_14c6da200)(param_1 + 0x50);
  }
  FUN_144b49dd0(param_1 + 0x28);
  return;
}



// FUNCTION 144bdc900 FUN_144bdc900 body=8 status=ok
// SIG undefined FUN_144bdc900(void)

undefined * FUN_144bdc900(void)

{
  return &DAT_14c783b08;
}



// FUNCTION 144bdc910 FUN_144bdc910 body=56 status=ok
// SIG undefined FUN_144bdc910(void)

undefined4 * FUN_144bdc910(undefined4 *param_1)

{
  if (DAT_14c783b00 != 0) {
    FUN_144bdcf30();
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 144bdc950 FUN_144bdc950 body=271 status=ok
// SIG undefined FUN_144bdc950(void)

undefined4 * FUN_144bdc950(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  lVar4 = DAT_14c783b00;
  if (DAT_14c783b00 == 0) {
    *param_1 = 0x80040200;
    return param_1;
  }
  iVar8 = 0;
  if (0 < *(int *)(DAT_14c783b00 + 0x40)) {
    lVar7 = 0;
    plVar6 = *(longlong **)(DAT_14c783b00 + 0x38);
    while ((longlong *)*plVar6 != param_2) {
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
      if (*(int *)(DAT_14c783b00 + 0x40) <= lVar7) {
        *param_1 = 0;
        return param_1;
      }
    }
    if (-1 < iVar8) {
      for (lVar7 = *param_2; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0xf0)) {
        FUN_144bdc310(lVar7);
      }
      FUN_144bdb810(lVar4 + 0x50,*param_2);
      iVar3 = *(int *)(lVar4 + 0x40);
      iVar5 = iVar3 + -1;
      *(int *)(lVar4 + 0x40) = iVar5;
      if (iVar5 != iVar8) {
        puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + ((longlong)iVar3 + -1) * 8);
        puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + (longlong)iVar8 * 8);
        if (puVar2 != puVar1) {
          *puVar2 = *puVar1;
        }
      }
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bdca60 FUN_144bdca60 body=17 status=ok
// SIG undefined FUN_144bdca60(void)

undefined8 * FUN_144bdca60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 144bdca80 FUN_144bdca80 body=107 status=ok
// SIG undefined FUN_144bdca80(void)

undefined8 *
FUN_144bdca80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,char param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_7;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_4;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  if (param_6 != '\0') {
    uVar1 = FUN_144bdb730(DAT_14c783b30);
    param_1[2] = uVar1;
    FUN_144bdb6a0(DAT_14c783b30,param_1);
    return param_1;
  }
  param_1[2] = param_1;
  return param_1;
}



// FUNCTION 144bdcaf0 FUN_144bdcaf0 body=296 status=ok
// SIG undefined FUN_144bdcaf0(void)

void FUN_144bdcaf0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((undefined8 *)param_1[2] != param_1) {
    local_48 = *param_1;
    local_58[0] = 0;
    local_40 = 5;
    local_3e = 0;
    local_3c = 0;
    local_38 = FUN_144b46fa0();
    plVar4 = (longlong *)param_1[5];
    local_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    plVar1 = plVar4 + *(int *)(param_1 + 6);
    local_10 = 0;
    local_3f = 0xff;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_58);
      }
    }
    FUN_144bdb6a0(DAT_14c783b30,param_1[2]);
    FUN_144b49dd0(&local_30);
  }
  lVar3 = param_1[5];
  lVar5 = lVar3 + (longlong)*(int *)(param_1 + 6) * 8;
  while (lVar5 != lVar3) {
    plVar1 = (longlong *)(lVar5 + -8);
    lVar5 = lVar5 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  return;
}



// FUNCTION 144bdcc20 FUN_144bdcc20 body=500 status=ok
// SIG undefined FUN_144bdcc20(void)

void FUN_144bdcc20(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong local_118;
  uint local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined2 local_fe;
  int local_fc;
  undefined8 local_f8;
  ulonglong local_f0 [3];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  int local_c0;
  undefined4 local_38;
  
  plVar8 = (longlong *)param_1[5];
  plVar1 = plVar8 + *(int *)(param_1 + 6);
  while( true ) {
    if (plVar8 == plVar1) {
      if (param_1[2] != 0) {
        FUN_144bdcc20(param_1[2],param_2);
      }
      local_108 = *param_1;
      local_118 = 0;
      local_fe = 0;
      local_fc = 0;
      local_100 = param_3;
      local_f8 = FUN_144b46fa0();
      lVar3 = param_1[1];
      local_f0[2] = param_1[3];
      local_d8 = *(undefined4 *)(param_1 + 4);
      if (*(int *)((longlong)param_1 + 0x24) != 0) {
        local_fc = *(int *)((longlong)param_1 + 0x24);
      }
      local_f0[0] = 0;
      local_f0[1] = 0;
      local_d0 = 0;
      local_ff = 1;
      local_d4 = 0;
      uVar4 = **(undefined8 **)(lVar3 + 0x10);
      if (local_118 == 0) {
        FUN_144bdf360(local_c8);
        uVar7 = local_f0[0] & 0xfffffffffffffffe;
        uVar5 = FUN_144be3870(local_f0);
        FUN_144be0720(local_c8,uVar7,uVar5);
        FUN_144be1a50(local_c8,local_res8,uVar4,lVar3,1);
        FUN_144be3790(local_f0,local_c8);
      }
      else {
        FUN_144bdf620(local_c8,local_118 + (ulonglong)local_110,local_110 + 1,local_10c);
        local_38 = 0;
        FUN_144be19c0(local_c8,local_res8,uVar4,lVar3,1);
        local_110 = local_c0 - 1;
      }
      FUN_144bdf2f0(local_c8);
      (**(code **)(*param_2 + 0x18))(param_2,&local_118);
      iVar6 = *(int *)(param_1 + 6) + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < iVar6) {
        FUN_144bddb00(param_1 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      puVar2 = (undefined8 *)(param_1[5] + (longlong)*(int *)(param_1 + 6) * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = param_2;
        FUN_144b3d910(param_2);
      }
      *(int *)(param_1 + 6) = iVar6;
      FUN_144b49dd0(local_f0);
      return;
    }
    if ((longlong *)*plVar8 == param_2) break;
    plVar8 = plVar8 + 1;
  }
  return;
}



// FUNCTION 144bdce20 FUN_144bdce20 body=84 status=ok
// SIG undefined FUN_144bdce20(void)

longlong FUN_144bdce20(ulonglong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = *param_1;
  if (uVar1 + param_3 <= param_1[1]) {
    FUN_144b3d470();
    *param_1 = uVar1 + param_3;
    return param_3;
  }
  lVar2 = FUN_144beb1c0(param_1);
  return lVar2;
}



// FUNCTION 144bdce80 FUN_144bdce80 body=79 status=ok
// SIG undefined FUN_144bdce80(void)

void FUN_144bdce80(ulonglong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  undefined1 local_res10 [24];
  
  uVar1 = *param_1;
  local_res10[0] = param_2;
  if (uVar1 + 1 <= param_1[1]) {
    FUN_144b3d470();
    *param_1 = uVar1 + 1;
    return;
  }
  FUN_144beb1c0(param_1,local_res10,1);
  return;
}



// FUNCTION 144bdced0 FUN_144bdced0 body=86 status=ok
// SIG undefined FUN_144bdced0(void)

void FUN_144bdced0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  uVar1 = *param_2 + lVar2;
  if (uVar1 <= param_2[1]) {
    FUN_144b3d470(*param_2);
    *param_2 = uVar1;
    return;
  }
  FUN_144beb1c0(param_2,param_1);
  return;
}



// FUNCTION 144bdcf30 FUN_144bdcf30 body=267 status=ok
// SIG undefined FUN_144bdcf30(void)

void FUN_144bdcf30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar6 = (longlong)iVar1;
  uVar4 = 0;
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    uVar5 = uVar4;
    do {
      if (*plVar2 == param_2) {
        if (-1 < (int)uVar5) {
          return;
        }
        break;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar4 < lVar6);
  }
  if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar1 + 1) {
    FUN_144bdd8b0(param_1 + 0x38,&PTR_vftable_14c6e47a0,lVar6 + 1);
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
  }
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  for (lVar6 = **(longlong **)(*(longlong *)(param_1 + 0x38) + lVar6 * 8); lVar6 != 0;
      lVar6 = *(longlong *)(lVar6 + 0xf0)) {
    uVar3 = FUN_144bfab50();
    FUN_144bdc030(lVar6,uVar3,3);
  }
  FUN_144bdb810(param_1 + 0x48,
                **(undefined8 **)
                  (*(longlong *)(param_1 + 0x38) + -8 + (longlong)*(int *)(param_1 + 0x40) * 8));
  return;
}



// FUNCTION 144bdd040 FUN_144bdd040 body=199 status=ok
// SIG undefined FUN_144bdd040(void)

void FUN_144bdd040(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = puVar6 + *(int *)(param_1 + 0x40);
  for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    for (plVar3 = *(longlong **)*puVar6; plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)plVar3[0x1e]) {
      lVar4 = *plVar3;
      lVar5 = (longlong)(int)plVar3[1] * 0x10 + lVar4;
      while (lVar5 != lVar4) {
        plVar1 = (longlong *)(lVar5 + -0x10);
        lVar5 = lVar5 + -0x10;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined4 *)(plVar3 + 1) = 0;
      if (((longlong *)*plVar3 != plVar3 + 2) && (-1 < *(int *)((longlong)plVar3 + 0xc))) {
        FUN_144bdd5e0(&PTR_vftable_14c6e47a0,plVar3,plVar3 + 2,4);
      }
      *(undefined1 *)(plVar3 + 10) = 0;
    }
  }
  return;
}



// FUNCTION 144bdd110 FUN_144bdd110 body=186 status=ok
// SIG undefined FUN_144bdd110(void)

void FUN_144bdd110(longlong *param_1)

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
    FUN_144b49dd0(lVar3);
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



// FUNCTION 144bdd1d0 FUN_144bdd1d0 body=322 status=ok
// SIG undefined FUN_144bdd1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144bdd1d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkLogUtilities::Registry::vftable;
  FUN_144bdd040();
  _DAT_14c6da210 = 0;
  if ((-1 < (int)DAT_14c6da214) && (DAT_14c6da208 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,DAT_14c6da208,(ulonglong)(DAT_14c6da214 & 0x7fffffff) << 2);
  }
  DAT_14c6da208 = 0;
  DAT_14c6da214 = 0x80000000;
  if ((DAT_14c6da218 != 0) && (*(int *)(DAT_14c6da218 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,DAT_14c6da218,0);
    FUN_144b3ec00(&DAT_14c6da218);
  }
  FUN_144bfd1a0(param_1 + 10);
  FUN_144bfd1a0(param_1 + 9);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 3);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  FUN_144bdd110(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 144bdd320 FUN_144bdd320 body=145 status=ok
// SIG undefined FUN_144bdd320(void)

undefined4 * FUN_144bdd320(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_144be8020(*param_2);
  if (lVar3 == 1) {
    iVar2 = FUN_144bfd0e0(*param_2 + 0x48);
    if (0 < iVar2) {
      *param_1 = 0x80040200;
      return param_1;
    }
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_144b3d910(lVar3);
  }
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  if (lVar3 != 0) {
    FUN_144b3f230(lVar3);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bdd3c0 FUN_144bdd3c0 body=263 status=ok
// SIG undefined FUN_144bdd3c0(void)

undefined4 * FUN_144bdd3c0(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  if (*param_2 != 0) {
    *param_1 = 0;
    return param_1;
  }
  local_res8 = 0x58;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"Registry");
  }
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 1;
    puVar1[1] = 0xffffffff;
    *puVar1 = hkLogUtilities::Registry::vftable;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80000000;
    uVar2 = FUN_144b3d480();
    puVar1[5] = uVar2;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x80000000;
    puVar1[9] = 0;
    puVar1[10] = 0;
    FUN_144bdcf30(puVar1,&DAT_14c783a98);
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)*param_2;
  if ((puVar3 != puVar1) && (*param_2 = (longlong)puVar3, puVar1 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bdd4d0 FUN_144bdd4d0 body=148 status=ok
// SIG undefined FUN_144bdd4d0(void)

longlong * FUN_144bdd4d0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144bdd7b0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_140163394(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 4;
  return param_2;
}



// FUNCTION 144bdd570 FUN_144bdd570 body=99 status=ok
// SIG undefined FUN_144bdd570(void)

uint * FUN_144bdd570(longlong *param_1,int *param_2)

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
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 4) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144bdd5e0 FUN_144bdd5e0 body=450 status=ok
// SIG undefined FUN_144bdd5e0(void)

void FUN_144bdd5e0(longlong *param_1,undefined8 *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  FUN_144be9620(param_2,param_4);
  if ((param_3 == (longlong *)0x0) || (uVar3 = *(uint *)(param_2 + 1), (int)param_4 <= (int)uVar3))
  {
    uVar3 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    if ((int)param_4 < (int)uVar3) {
      uVar3 = param_4;
    }
    uVar2 = *(uint *)(param_2 + 1);
    if ((int)uVar3 < (int)*(uint *)(param_2 + 1)) {
      uVar2 = uVar3;
    }
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,(longlong)(int)param_4 << 4);
    plVar9 = (longlong *)*param_2;
    iVar8 = 0;
    iVar6 = 0;
    plVar5 = plVar4;
    plVar10 = plVar9;
    if (0 < (int)uVar2) {
      do {
        if (plVar5 != (longlong *)0x0) {
          lVar1 = *plVar10;
          *plVar5 = lVar1;
          if (lVar1 != 0) {
            FUN_144b3d910();
          }
          *(char *)(plVar5 + 1) = (char)plVar10[1];
        }
        iVar6 = iVar6 + 1;
        plVar5 = plVar5 + 2;
        plVar10 = plVar10 + 2;
      } while (iVar6 < (int)uVar2);
      do {
        if (*plVar9 != 0) {
          FUN_144b3f230();
        }
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 2;
      } while (iVar8 < (int)uVar2);
    }
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 4);
    *param_2 = plVar4;
    uVar3 = 0x7fffffff;
    if (param_4 < 0x7fffffff) {
      uVar3 = param_4;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar3;
  }
  else {
    plVar9 = (longlong *)*param_2;
    uVar7 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      uVar11 = (ulonglong)uVar3;
      plVar5 = param_3;
      plVar10 = plVar9;
      do {
        if (plVar5 != (longlong *)0x0) {
          lVar1 = *plVar10;
          *plVar5 = lVar1;
          if (lVar1 != 0) {
            FUN_144b3d910();
          }
          *(char *)(plVar5 + 1) = (char)plVar10[1];
        }
        plVar5 = plVar5 + 2;
        plVar10 = plVar10 + 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      do {
        if (*plVar9 != 0) {
          FUN_144b3f230();
        }
        plVar9 = plVar9 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 4);
    *param_2 = param_3;
    *(uint *)((longlong)param_2 + 0xc) = param_4 | 0x80000000;
  }
  return;
}



// FUNCTION 144bdd7b0 FUN_144bdd7b0 body=253 status=ok
// SIG undefined FUN_144bdd7b0(void)

uint * FUN_144bdd7b0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144bdd885:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 4) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144bdd885;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144bdd8b0 FUN_144bdd8b0 body=235 status=ok
// SIG undefined FUN_144bdd8b0(void)

void FUN_144bdd8b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144bdd9a0 FUN_144bdd9a0 body=337 status=ok
// SIG undefined FUN_144bdd9a0(void)

void FUN_144bdd9a0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  
  uVar4 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar4) {
    uVar7 = uVar4;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  plVar3 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  plVar5 = (longlong *)*param_1;
  uVar4 = (ulonglong)uVar1;
  local_res18 = plVar3;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    plVar6 = plVar5;
    do {
      if (plVar3 != (longlong *)0x0) {
        lVar2 = *plVar6;
        *plVar3 = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        *(char *)(plVar3 + 1) = (char)plVar6[1];
      }
      plVar3 = plVar3 + 2;
      plVar6 = plVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  plVar5 = local_res18;
  uVar4 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(local_res10 + 8),*param_1,0);
  }
  *param_1 = plVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144bddb00 FUN_144bddb00 body=319 status=ok
// SIG undefined FUN_144bddb00(void)

void FUN_144bddb00(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144bddc40 FUN_144bddc40 body=314 status=ok
// SIG undefined FUN_144bddc40(void)

void FUN_144bddc40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar7 = param_3;
  if (param_3 < uVar3) {
    uVar7 = uVar3;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  puVar4 = puVar2;
  puVar8 = puVar5;
  if (0 < (int)uVar1) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *puVar8;
        *puVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar3 != 0);
    do {
      FUN_144b49dd0(puVar5);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar3 = uVar7 * 8 + 8;
  uVar6 = uVar7;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar6 = uVar7 + 1;
    if (uVar3 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar7 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 144bddd80 FUN_144bddd80 body=32 status=ok
// SIG undefined FUN_144bddd80(void)

undefined8 FUN_144bddd80(undefined8 param_1,undefined8 param_2)

{
  FUN_144be1cd0(param_2,param_1);
  return param_1;
}



// FUNCTION 144bddda0 FUN_144bddda0 body=13 status=ok
// SIG undefined FUN_144bddda0(void)

void FUN_144bddda0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 144bdddb0 FUN_144bdddb0 body=111 status=ok
// SIG undefined FUN_144bdddb0(void)

undefined4 * FUN_144bdddb0(undefined4 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_18 [16];
  
  lVar1 = FUN_144beec00();
  if (lVar1 != 0) {
    DAT_14c783b48 = 1;
    uVar2 = DAT_14c783b40 & 0xfffffffffffffffc;
    if (uVar2 != 0) {
      FUN_144f5a1e0(local_18,&DAT_14996de1b);
      FUN_144f5d800(DAT_14c797f68,uVar2);
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 144bdde20 FUN_144bdde20 body=66 status=ok
// SIG undefined FUN_144bdde20(void)

undefined4 * FUN_144bdde20(undefined4 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144beec00();
  if (lVar1 != 0) {
    DAT_14c783b48 = 1;
    if ((DAT_14c783b40 & 0xfffffffffffffffc) != 0) {
      FUN_144f5d9d0(DAT_14c797f68);
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bdde70 FUN_144bdde70 body=8 status=ok
// SIG undefined FUN_144bdde70(void)

undefined * FUN_144bdde70(void)

{
  return &DAT_14c783b50;
}



// FUNCTION 144bdde80 FUN_144bdde80 body=57 status=ok
// SIG undefined FUN_144bdde80(void)

LPCRITICAL_SECTION FUN_144bdde80(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  
  if (DAT_14c787698 == 0) {
    iVar1 = FUN_144bfce90(0);
  }
  else {
    iVar1 = *(int *)(DAT_14c787698 + 0x18);
  }
  InitializeCriticalSectionAndSpinCount(param_1,iVar1 * 1000);
  return param_1;
}



// FUNCTION 144bddec0 FUN_144bddec0 body=108 status=ok
// SIG undefined FUN_144bddec0(void)

undefined8 * FUN_144bddec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144bde510();
  *param_1 = hkDefaultError::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = param_2;
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_144bdde80(param_1 + 10);
  return param_1;
}



// FUNCTION 144bddf30 FUN_144bddf30 body=129 status=ok
// SIG undefined FUN_144bddf30(void)

void FUN_144bddf30(longlong param_1,int param_2,char param_3)

{
  longlong local_res8;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (param_3 == '\0') {
    if (param_2 != 0) {
      local_res8 = 1;
      local_res20 = (longlong)param_2;
      FUN_144f5fe30(param_1 + 0x18,&PTR_vftable_14c6e47a0,&local_res20,&local_res8);
    }
  }
  else {
    local_res8 = (longlong)param_2;
    FUN_144f61f00(param_1 + 0x18,local_res18,&local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x000144bddfaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 144bddfc0 FUN_144bddfc0 body=101 status=ok
// SIG undefined FUN_144bddfc0(void)

undefined8 FUN_144bddfc0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined8 local_res8;
  longlong local_res10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  local_res8 = 0;
  local_res10 = (longlong)param_3;
  piVar1 = (int *)FUN_144f5fe90(param_1 + 0x18,&local_res10,&local_res8);
  *(bool *)param_2 = *piVar1 == 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return param_2;
}



// FUNCTION 144bde030 FUN_144bde030 body=53 status=ok
// SIG undefined FUN_144bde030(void)

void FUN_144bde030(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  FUN_144f5ff20(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000144bde05e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 144bde070 FUN_144bde070 body=4 status=ok
// SIG undefined FUN_144bde070(void)

void FUN_144bde070(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 144bde080 FUN_144bde080 body=4 status=ok
// SIG undefined FUN_144bde080(void)

undefined4 FUN_144bde080(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// FUNCTION 144bde090 FUN_144bde090 body=182 status=ok
// SIG undefined FUN_144bde090(void)

bool FUN_144bde090(longlong *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if ((param_3 == -1) && ((int)param_1[6] != 0)) {
    param_3 = *(int *)(param_1[5] + -4 + (longlong)(int)param_1[6] * 4);
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar1 <= param_2) {
    pcVar2 = (char *)(**(code **)(*param_1 + 0x28))(param_1,local_res10,param_3);
    if (*pcVar2 != '\0') {
      (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_4,param_5,param_6);
      bVar3 = param_2 - 2U < 2;
      goto LAB_144bde128;
    }
  }
  bVar3 = false;
LAB_144bde128:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return bVar3;
}



// FUNCTION 144bde150 FUN_144bde150 body=124 status=ok
// SIG undefined FUN_144bde150(void)

void FUN_144bde150(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  iVar2 = *(int *)(param_1 + 0x30) + 1;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar2) {
    FUN_1401f86b2(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000144bde1c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 144bde1d0 FUN_144bde1d0 body=47 status=ok
// SIG undefined FUN_144bde1d0(void)

void FUN_144bde1d0(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
                    /* WARNING: Could not recover jumptable at 0x000144bde1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 144bde200 FUN_144bde200 body=347 status=ok
// SIG undefined FUN_144bde200(void)

void FUN_144bde200(longlong *param_1,int param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 **ppuVar4;
  undefined1 uVar5;
  undefined1 local_res8 [8];
  undefined1 *local_488;
  undefined1 *local_480;
  undefined1 *local_478;
  undefined1 local_468 [72];
  undefined1 **local_420;
  undefined1 local_418 [1024];
  
  if (param_1[7] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x70))();
    FUN_144f59b40(local_res8);
    FUN_144bdca60(&local_488);
    if (cVar1 != '\0') {
      iVar2 = FUN_144f59d70(local_res8,local_418,0x80,1,0);
      local_480 = local_418 + (longlong)iVar2 * 8;
      local_488 = local_418;
      local_478 = local_res8;
    }
    if (param_2 == 0) {
      uVar5 = 3;
    }
    else if (param_2 == 1) {
      uVar5 = 2;
    }
    else {
      uVar5 = param_2 - 2U < 3;
    }
    FUN_144bdc3a0(local_468,&DAT_14c783b78,uVar5);
    lVar3 = FUN_144bdc400(local_468,param_4);
    *(undefined8 *)(lVar3 + 0x38) = param_5;
    *(undefined4 *)(lVar3 + 0x40) = param_6;
    *(undefined4 *)(lVar3 + 0x44) = 0;
    *(undefined4 *)(lVar3 + 0x1c) = param_3;
    ppuVar4 = &local_488;
    if (cVar1 == '\0') {
      ppuVar4 = local_420;
    }
    local_420 = ppuVar4;
    (*(code *)param_1[7])(local_468,0);
    FUN_144bdc3f0(local_468);
    FUN_144f59b50(local_res8);
  }
  return;
}



// FUNCTION 144bde360 FUN_144bde360 body=198 status=ok
// SIG undefined FUN_144bde360(void)

void FUN_144bde360(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar1;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_res8 = &DAT_14996de1b;
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_res8);
  if (param_3 == 0) {
    if (param_5 == 0) {
      FUN_144bdff50(param_7,&DAT_149972340,param_4);
      return;
    }
  }
  else if (param_3 != -1) {
    FUN_144bdff50(param_7,"%s(%d): [0x%08X] %s: %s\n",param_5,param_6,CONCAT44(uVar1,param_3),
                  local_res8,param_4);
    return;
  }
  FUN_144bdff50(param_7,"%s(%d): %s: %s\n",param_5,param_6,local_res8,param_4);
  return;
}



// FUNCTION 144bde430 FUN_144bde430 body=83 status=ok
// SIG undefined FUN_144bde430(void)

void FUN_144bde430(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  code *pcVar1;
  
  switch(param_2) {
  case 0:
    *param_3 = "Report";
    return;
  case 1:
    *param_3 = "Warning";
    return;
  case 2:
    *param_3 = "Assert";
    return;
  case 3:
    *param_3 = "Error";
    return;
  case 4:
    *param_3 = "Fatal Error";
    return;
  default:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



// FUNCTION 144bde4a0 FUN_144bde4a0 body=16 status=ok
// SIG undefined FUN_144bde4a0(void)

undefined1 FUN_144bde4a0(undefined8 param_1,int param_2)

{
  if ((param_2 != 2) && (param_2 != 3)) {
    return 0;
  }
  return 1;
}



// FUNCTION 144bde4b0 FUN_144bde4b0 body=87 status=ok
// SIG undefined FUN_144bde4b0(void)

undefined8 FUN_144bde4b0(undefined8 param_1,ulonglong param_2)

{
  FUN_144b4ad80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 144bde510 FUN_144bde510 body=31 status=ok
// SIG undefined FUN_144bde510(void)

undefined8 * FUN_144bde510(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkError::vftable;
  return param_1;
}



// FUNCTION 144bde530 FUN_144bde530 body=11 status=ok
// SIG undefined FUN_144bde530(void)

void FUN_144bde530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144bde540 FUN_144bde540 body=3 status=ok
// SIG undefined FUN_144bde540(void)

void FUN_144bde540(void)

{
  return;
}



// FUNCTION 144bde550 FUN_144bde550 body=3 status=ok
// SIG undefined FUN_144bde550(void)

undefined8 FUN_144bde550(void)

{
  return 0;
}



// FUNCTION 144bde560 FUN_144bde560 body=3 status=ok
// SIG undefined FUN_144bde560(void)

void FUN_144bde560(void)

{
  return;
}



// FUNCTION 144bde570 FUN_144bde570 body=3 status=ok
// SIG undefined FUN_144bde570(void)

void FUN_144bde570(void)

{
  return;
}



// FUNCTION 144bde580 FUN_144bde580 body=71 status=ok
// SIG undefined FUN_144bde580(void)

undefined8 * FUN_144bde580(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144bde5d0 FUN_144bde5d0 body=118 status=ok
// SIG undefined FUN_144bde5d0(void)

undefined4 * FUN_144bde5d0(undefined4 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  plVar1 = DAT_14c783c70;
  if (DAT_14c783c70 != (longlong *)0x0) {
    *param_1 = param_2;
    pcVar2 = (char *)(**(code **)(*plVar1 + 0x28))(plVar1,local_res8,param_2);
    *(bool *)(param_1 + 1) = *pcVar2 != '\0';
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2,0);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bde650 FUN_144bde650 body=30 status=ok
// SIG undefined FUN_144bde650(void)

void FUN_144bde650(undefined4 *param_1)

{
  if (DAT_14c783c70 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bde669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c783c70 + 0x20))(DAT_14c783c70,*param_1,*(undefined1 *)(param_1 + 1));
    return;
  }
  return;
}



// FUNCTION 144bde670 FUN_144bde670 body=111 status=ok
// SIG undefined FUN_144bde670(void)

undefined8 * FUN_144bde670(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144be5fc0(param_1,0);
  *param_1 = hkErrStream::vftable;
  lVar2 = param_2 + -0x40 + (longlong)param_3;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_144f62110(lVar2,param_2,param_3 + -0x40,1);
  }
  lVar1 = param_1[1];
  if ((lVar2 != lVar1) && (param_1[1] = lVar2, lVar1 != 0)) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144bde6e0 FUN_144bde6e0 body=23 status=ok
// SIG undefined FUN_144bde6e0(void)

void FUN_144bde6e0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkErrStream::vftable;
  FUN_144be6100();
  return;
}



// FUNCTION 144bde700 FUN_144bde700 body=105 status=ok
// SIG undefined FUN_144bde700(void)

undefined8 * FUN_144bde700(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = 0;
  *param_1 = hkErrStream::vftable;
  FUN_144be6100();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bde770 FUN_144bde770 body=176 status=ok
// SIG undefined FUN_144bde770(void)

undefined4 * FUN_144bde770(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x78;
    lVar2 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar2,"hkDefaultError");
    }
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144bddec0(lVar2,&LAB_144bfab30,0);
    }
    lVar1 = *param_2;
    if ((lVar2 != lVar1) && (*param_2 = lVar2, lVar1 != 0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bde820 FUN_144bde820 body=95 status=ok
// SIG undefined FUN_144bde820(void)

undefined4 * FUN_144bde820(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bde880 FUN_144bde880 body=282 status=ok
// SIG undefined FUN_144bde880(void)

undefined8 * FUN_144bde880(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkGeometry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x20);
  puVar11 = *(undefined4 **)(param_2 + 0x18);
  if (0 < (int)uVar1) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    param_1[3] = uVar7;
    uVar10 = (ulonglong)uVar1;
    *(uint *)(param_1 + 4) = uVar1;
    *(uint *)((longlong)param_1 + 0x24) = uVar1;
    puVar9 = (undefined4 *)param_1[3];
    do {
      if (puVar9 != (undefined4 *)0x0) {
        uVar2 = *puVar11;
        uVar3 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        puVar11 = puVar11 + 4;
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
      }
      uVar10 = uVar10 - 1;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x30);
  puVar12 = *(undefined8 **)(param_2 + 0x28);
  if (0 < (int)uVar1) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    param_1[5] = uVar7;
    uVar10 = (ulonglong)uVar1;
    *(uint *)(param_1 + 6) = uVar1;
    *(uint *)((longlong)param_1 + 0x34) = uVar1;
    puVar8 = (undefined8 *)param_1[5];
    do {
      if (puVar8 != (undefined8 *)0x0) {
        uVar7 = *puVar12;
        uVar6 = puVar12[1];
        puVar12 = puVar12 + 2;
        *puVar8 = uVar7;
        puVar8[1] = uVar6;
      }
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 2;
    } while (uVar10 != 0);
  }
  return param_1;
}



// FUNCTION 144bde9a0 FUN_144bde9a0 body=204 status=ok
// SIG undefined FUN_144bde9a0(void)

longlong FUN_144bde9a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  if ((undefined8 *)(param_2 + 0x18) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_1 + 0x20) = iVar2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if ((undefined8 *)(param_2 + 0x28) != puVar1) {
    iVar2 = *(int *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar2) {
      FUN_144bdeea0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_1 + 0x30) = iVar2;
  }
  return param_1;
}



// FUNCTION 144bdea70 FUN_144bdea70 body=581 status=ok
// SIG undefined FUN_144bdea70(void)

undefined4 * FUN_144bdea70(longlong param_1,undefined4 *param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined8 uVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  uVar29 = (ulonglong)iVar4;
  iVar23 = *(int *)(param_3 + 0x20) + iVar3;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar23) {
    FUN_144bdedb0(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar23);
  }
  iVar23 = *(int *)(param_3 + 0x30) + iVar4;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar23) {
    FUN_141805828(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar23);
  }
  iVar23 = *(int *)(param_1 + 0x20);
  puVar26 = *(undefined4 **)(param_3 + 0x18);
  puVar30 = puVar26 + (longlong)*(int *)(param_3 + 0x20) * 4;
  iVar25 = *(int *)(param_3 + 0x20) + iVar23;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar25) {
    FUN_1418055da(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar25);
  }
  puVar21 = (undefined4 *)((longlong)iVar23 * 0x10 + *(longlong *)(param_1 + 0x18));
  for (; puVar26 != puVar30; puVar26 = puVar26 + 4) {
    if (puVar21 != (undefined4 *)0x0) {
      uVar5 = puVar26[1];
      uVar6 = puVar26[2];
      uVar7 = puVar26[3];
      *puVar21 = *puVar26;
      puVar21[1] = uVar5;
      puVar21[2] = uVar6;
      puVar21[3] = uVar7;
    }
    puVar21 = puVar21 + 4;
  }
  *(int *)(param_1 + 0x20) = iVar25;
  iVar23 = *(int *)(param_1 + 0x30);
  puVar27 = *(undefined8 **)(param_3 + 0x28);
  puVar31 = puVar27 + (longlong)*(int *)(param_3 + 0x30) * 2;
  iVar25 = *(int *)(param_3 + 0x30) + iVar23;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar25) {
    FUN_141805702(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar25);
  }
  puVar22 = (undefined8 *)((longlong)iVar23 * 0x10 + *(longlong *)(param_1 + 0x28));
  for (; puVar27 != puVar31; puVar27 = puVar27 + 2) {
    if (puVar22 != (undefined8 *)0x0) {
      uVar20 = puVar27[1];
      *puVar22 = *puVar27;
      puVar22[1] = uVar20;
    }
    puVar22 = puVar22 + 2;
  }
  *(int *)(param_1 + 0x30) = iVar25;
  if ((param_4 != (float *)0x0) && (iVar3 < *(int *)(param_1 + 0x20))) {
    lVar24 = (longlong)iVar3 << 4;
    iVar23 = iVar3;
    do {
      iVar23 = iVar23 + 1;
      pfVar1 = (float *)(lVar24 + *(longlong *)(param_1 + 0x18));
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      fVar12 = param_4[1];
      fVar13 = param_4[2];
      fVar14 = param_4[5];
      fVar15 = param_4[6];
      fVar16 = param_4[0xd];
      fVar17 = param_4[0xe];
      fVar18 = param_4[9];
      fVar19 = param_4[10];
      pfVar1 = (float *)(lVar24 + *(longlong *)(param_1 + 0x18));
      *pfVar1 = fVar8 * *param_4 + param_4[0xc] + fVar9 * param_4[4] + fVar10 * param_4[8];
      pfVar1[1] = fVar8 * fVar12 + fVar16 + fVar9 * fVar14 + fVar10 * fVar18;
      pfVar1[2] = fVar8 * fVar13 + fVar17 + fVar9 * fVar15 + fVar10 * fVar19;
      pfVar1[3] = fVar11;
      lVar24 = lVar24 + 0x10;
    } while (iVar23 < *(int *)(param_1 + 0x20));
  }
  if ((0 < iVar3) && (iVar4 < *(int *)(param_1 + 0x30))) {
    lVar24 = uVar29 << 4;
    do {
      uVar28 = (int)uVar29 + 1;
      uVar29 = (ulonglong)uVar28;
      piVar2 = (int *)(lVar24 + *(longlong *)(param_1 + 0x28));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = (int *)(lVar24 + 4 + *(longlong *)(param_1 + 0x28));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = (int *)(lVar24 + 8 + *(longlong *)(param_1 + 0x28));
      *piVar2 = *piVar2 + iVar3;
      lVar24 = lVar24 + 0x10;
    } while ((int)uVar28 < *(int *)(param_1 + 0x30));
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bdecc0 FUN_144bdecc0 body=237 status=ok
// SIG undefined FUN_144bdecc0(void)

undefined8 * FUN_144bdecc0(undefined8 *param_1,uint param_2)

{
  *param_1 = hkGeometry::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 4);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
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



// FUNCTION 144bdedb0 FUN_144bdedb0 body=236 status=ok
// SIG undefined FUN_144bdedb0(void)

void FUN_144bdedb0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 0x10;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144bdeea0 FUN_144bdeea0 body=158 status=ok
// SIG undefined FUN_144bdeea0(void)

void FUN_144bdeea0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144bdef40 FUN_144bdef40 body=32 status=ok
// SIG undefined FUN_144bdef40(void)

undefined8 FUN_144bdef40(undefined8 param_1,undefined8 param_2)

{
  FUN_144f62690(param_2,param_1);
  return param_1;
}



// FUNCTION 144bdef60 FUN_144bdef60 body=69 status=ok
// SIG undefined FUN_144bdef60(void)

longlong FUN_144bdef60(longlong param_1)

{
  FUN_144b4a250(param_1,1000);
  FUN_144b4a250(param_1 + 0x28,1000);
  FUN_144b4a290(param_1 + 0x50,0,1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  return param_1;
}



// FUNCTION 144bdefb0 FUN_144bdefb0 body=40 status=ok
// SIG undefined FUN_144bdefb0(void)

void FUN_144bdefb0(LPCRITICAL_SECTION param_1)

{
  FUN_144b49690(param_1 + 2);
  DeleteCriticalSection(param_1 + 1);
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 144bdefe0 FUN_144bdefe0 body=33 status=ok
// SIG undefined FUN_144bdefe0(void)

void FUN_144bdefe0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  *(int *)&param_1[2].OwningThread = *(int *)&param_1[2].OwningThread + 1;
                    /* WARNING: Could not recover jumptable at 0x000144bdeffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 144bdf010 FUN_144bdf010 body=77 status=ok
// SIG undefined FUN_144bdf010(void)

void FUN_144bdf010(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 100) + 1;
  *(int *)(param_1 + 100) = iVar1;
  if ((*(char *)(param_1 + 0x68) != '\0') && (*(int *)(param_1 + 0x60) == iVar1)) {
    FUN_144bdf120(param_1 + 0x50,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000144bdf056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 144bdf060 FUN_144bdf060 body=92 status=ok
// SIG undefined FUN_144bdf060(void)

void FUN_144bdf060(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  EnterCriticalSection(param_1 + 1);
  if (*(int *)&param_1[2].OwningThread == *(int *)((longlong)&param_1[2].OwningThread + 4)) {
                    /* WARNING: Could not recover jumptable at 0x000144bdf093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1 + 1);
    return;
  }
  *(undefined1 *)&param_1[2].LockSemaphore = 1;
  LeaveCriticalSection(param_1 + 1);
  FUN_144bdf0d0(param_1 + 2);
  *(undefined1 *)&param_1[2].LockSemaphore = 0;
  return;
}



// FUNCTION 144bdf0c0 LeaveCriticalSection body=7 status=ok
// SIG void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000144bdf0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144bdf0d0 FUN_144bdf0d0 body=67 status=ok
// SIG undefined FUN_144bdf0d0(void)

void FUN_144bdf0d0(undefined8 *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  while( true ) {
    if (iVar2 == 0) {
      WaitForSingleObject((HANDLE)*param_1,0xffffffff);
      return;
    }
    DVar1 = WaitForSingleObject((HANDLE)*param_1,0);
    if (DVar1 == 0) break;
    iVar2 = iVar2 + -1;
  }
  return;
}



// FUNCTION 144bdf120 FUN_144bdf120 body=13 status=ok
// SIG undefined FUN_144bdf120(void)

void FUN_144bdf120(undefined8 *param_1,LONG param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144bdf126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSemaphore((HANDLE)*param_1,param_2,(LPLONG)0x0);
  return;
}



// FUNCTION 144bdf130 FUN_144bdf130 body=31 status=ok
// SIG undefined FUN_144bdf130(void)

undefined8 * FUN_144bdf130(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkStreamWriter::vftable;
  return param_1;
}



// FUNCTION 144bdf150 FUN_144bdf150 body=11 status=ok
// SIG undefined FUN_144bdf150(void)

void FUN_144bdf150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144bdf160 FUN_144bdf160 body=7 status=ok
// SIG undefined FUN_144bdf160(void)

undefined1 * FUN_144bdf160(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bdf170 FUN_144bdf170 body=10 status=ok
// SIG undefined FUN_144bdf170(void)

undefined4 * FUN_144bdf170(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bdf180 FUN_144bdf180 body=8 status=ok
// SIG undefined FUN_144bdf180(void)

undefined8 FUN_144bdf180(void)

{
  return 0xffffffffffffffff;
}



// FUNCTION 144bdf190 FUN_144bdf190 body=7 status=ok
// SIG undefined FUN_144bdf190(void)

undefined1 * FUN_144bdf190(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bdf1a0 FUN_144bdf1a0 body=71 status=ok
// SIG undefined FUN_144bdf1a0(void)

undefined8 * FUN_144bdf1a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144bdf1f0 FUN_144bdf1f0 body=3 status=ok
// SIG undefined FUN_144bdf1f0(void)

undefined1 FUN_144bdf1f0(void)

{
  return 0;
}



// FUNCTION 144bdf200 FUN_144bdf200 body=97 status=ok
// SIG undefined FUN_144bdf200(void)

undefined4 *
FUN_144bdf200(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5)

{
  undefined4 uVar1;
  
  if (param_5 == 0) {
    FUN_144bdfcf0(param_3,0);
  }
  else {
    uVar1 = FUN_144bfbbb0(param_5);
    FUN_144bdfcf0(param_3,uVar1);
    FUN_144bfbee0(*param_3,param_5,(longlong)(*(int *)(param_3 + 1) + -1));
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bdf270 FUN_144bdf270 body=21 status=ok
// SIG undefined FUN_144bdf270(void)

undefined4 *
FUN_144bdf270(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 144bdf290 FUN_144bdf290 body=87 status=ok
// SIG undefined FUN_144bdf290(void)

undefined8 FUN_144bdf290(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bdf2f0 FUN_144bdf2f0 body=100 status=ok
// SIG undefined FUN_144bdf2f0(void)

void FUN_144bdf2f0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*param_1,*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144bdf360 FUN_144bdf360 body=38 status=ok
// SIG undefined FUN_144bdf360(void)

undefined8 * FUN_144bdf360(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  *param_1 = param_1 + 2;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 144bdf390 FUN_144bdf390 body=237 status=ok
// SIG undefined FUN_144bdf390(void)

longlong * FUN_144bdf390(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  *(undefined4 *)(param_1 + 0x12) = 1;
  if (param_2 == 0) {
    if ((int)param_1[1] != 1) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    return param_1;
  }
  iVar1 = FUN_144bfbbb0(param_2);
  iVar2 = iVar1;
  if (((int)param_1[0x12] == 0) &&
     (iVar2 = (*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) - 1, iVar1 < iVar2)) {
    iVar2 = iVar1;
  }
  iVar1 = iVar2 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar1);
  }
  if (((int)param_1[1] < iVar1) || (iVar1 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined1 *)((longlong)iVar2 + *param_1) = 0;
  FUN_144bfbee0(*param_1,param_2,(longlong)((int)param_1[1] + -1));
  return param_1;
}



// FUNCTION 144bdf480 FUN_144bdf480 body=154 status=ok
// SIG undefined FUN_144bdf480(void)

undefined8 *
FUN_144bdf480(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puStack_40 = &stack0xfffffffffffffff8;
  puVar1 = param_1 + 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  *param_1 = puVar1;
  *(undefined4 *)(param_1 + 0x12) = 1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)puVar1 = 0;
  }
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_48 = &local_38;
  *(undefined4 *)(param_1 + 1) = 1;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  FUN_144be0220(local_48._0_4_,0,&local_48);
  return param_1;
}



// FUNCTION 144bdf520 FUN_144bdf520 body=248 status=ok
// SIG undefined FUN_144bdf520(void)

undefined8 * FUN_144bdf520(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar4 = param_1 + 2;
  uVar2 = 0x80000080;
  *param_1 = puVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  *(undefined4 *)(param_1 + 0x12) = 1;
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    *(undefined1 *)puVar4 = 0;
    return param_1;
  }
  if (param_3 < 0) {
    param_3 = FUN_144bfbbb0(param_2);
    puVar4 = (undefined8 *)*param_1;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar3 = param_3;
  if (*(int *)(param_1 + 0x12) == 0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    iVar3 = (uVar2 & 0x7fffffff) - 1;
    if (param_3 < iVar3) {
      iVar3 = param_3;
    }
  }
  iVar1 = iVar3 + 1;
  if ((int)(uVar2 & 0x7fffffff) < iVar1) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar1);
    puVar4 = (undefined8 *)*param_1;
  }
  if ((*(int *)(param_1 + 1) < iVar1) || (iVar1 < *(int *)(param_1 + 1))) {
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined1 *)((longlong)iVar3 + (longlong)puVar4) = 0;
  FUN_144bfbee0(*param_1,param_2,(longlong)(*(int *)(param_1 + 1) + -1));
  return param_1;
}



// FUNCTION 144bdf620 FUN_144bdf620 body=81 status=ok
// SIG undefined FUN_144bdf620(void)

longlong * FUN_144bdf620(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x12) = 1;
  uVar1 = param_3;
  if ((int)param_3 < 1) {
    uVar1 = (uint)(0 < (int)param_4);
  }
  *param_1 = param_2;
  uVar2 = 1;
  if (param_3 != 0) {
    uVar2 = param_3;
  }
  *(uint *)(param_1 + 1) = uVar2;
  *(uint *)((longlong)param_1 + 0xc) = param_4 | 0x80000000;
  if ((-1 < (int)(uVar1 - 1)) && ((int)(uVar1 - 1) < (int)uVar2)) {
    *(undefined1 *)((longlong)(int)uVar1 + -1 + param_2) = 0;
  }
  return param_1;
}



// FUNCTION 144bdf680 FUN_144bdf680 body=1096 status=ok
// SIG undefined FUN_144bdf680(void)

undefined8 * FUN_144bdf680(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 2;
  *param_1 = puVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  if (param_2 != param_1) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    puVar2 = param_2 + 2;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    if ((undefined8 *)*param_2 == puVar2) {
      *param_1 = puVar1;
      if (puVar1 != puVar2) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
        *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
        *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
        *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)((longlong)param_2 + 0x13);
        *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
        *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x15);
        *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
        *(undefined1 *)((longlong)param_1 + 0x17) = *(undefined1 *)((longlong)param_2 + 0x17);
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
        *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
        *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
        *(undefined1 *)((longlong)param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x1b);
        *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
        *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
        *(undefined1 *)((longlong)param_1 + 0x1f) = *(undefined1 *)((longlong)param_2 + 0x1f);
        *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
        *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
        *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
        *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
        *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
        *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
        *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
        *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)param_2 + 0x27);
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
        *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
        *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
        *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
        *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
        *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
        *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
        *(undefined1 *)((longlong)param_1 + 0x2f) = *(undefined1 *)((longlong)param_2 + 0x2f);
        *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
        *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x31);
        *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)((longlong)param_2 + 0x32);
        *(undefined1 *)((longlong)param_1 + 0x33) = *(undefined1 *)((longlong)param_2 + 0x33);
        *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
        *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
        *(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)((longlong)param_2 + 0x36);
        *(undefined1 *)((longlong)param_1 + 0x37) = *(undefined1 *)((longlong)param_2 + 0x37);
        *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
        *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
        *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
        *(undefined1 *)((longlong)param_1 + 0x3b) = *(undefined1 *)((longlong)param_2 + 0x3b);
        *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
        *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
        *(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)((longlong)param_2 + 0x3e);
        *(undefined1 *)((longlong)param_1 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x3f);
        *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
        *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
        *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
        *(undefined1 *)((longlong)param_1 + 0x43) = *(undefined1 *)((longlong)param_2 + 0x43);
        *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
        *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x45);
        *(undefined1 *)((longlong)param_1 + 0x46) = *(undefined1 *)((longlong)param_2 + 0x46);
        *(undefined1 *)((longlong)param_1 + 0x47) = *(undefined1 *)((longlong)param_2 + 0x47);
        *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
        *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
        *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_2 + 0x4a);
        *(undefined1 *)((longlong)param_1 + 0x4b) = *(undefined1 *)((longlong)param_2 + 0x4b);
        *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
        *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_2 + 0x4d);
        *(undefined1 *)((longlong)param_1 + 0x4e) = *(undefined1 *)((longlong)param_2 + 0x4e);
        *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
        *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
        *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x52);
        *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x53);
        *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x54);
        *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x55);
        *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x56);
        *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x57);
        *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
        *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
        *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
        *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x5b);
        *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
        *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
        *(undefined1 *)((longlong)param_1 + 0x5e) = *(undefined1 *)((longlong)param_2 + 0x5e);
        *(undefined1 *)((longlong)param_1 + 0x5f) = *(undefined1 *)((longlong)param_2 + 0x5f);
        *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
        *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
        *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
        *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)((longlong)param_2 + 99);
        *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)((longlong)param_2 + 100);
        *(undefined1 *)((longlong)param_1 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x65);
        *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x66);
        *(undefined1 *)((longlong)param_1 + 0x67) = *(undefined1 *)((longlong)param_2 + 0x67);
        *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
        *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x69);
        *(undefined1 *)((longlong)param_1 + 0x6a) = *(undefined1 *)((longlong)param_2 + 0x6a);
        *(undefined1 *)((longlong)param_1 + 0x6b) = *(undefined1 *)((longlong)param_2 + 0x6b);
        *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)((longlong)param_2 + 0x6c);
        *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)((longlong)param_2 + 0x6d);
        *(undefined1 *)((longlong)param_1 + 0x6e) = *(undefined1 *)((longlong)param_2 + 0x6e);
        *(undefined1 *)((longlong)param_1 + 0x6f) = *(undefined1 *)((longlong)param_2 + 0x6f);
        *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
        *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
        *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
        *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x73);
        *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0x74);
        *(undefined1 *)((longlong)param_1 + 0x75) = *(undefined1 *)((longlong)param_2 + 0x75);
        *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)((longlong)param_2 + 0x76);
        *(undefined1 *)((longlong)param_1 + 0x77) = *(undefined1 *)((longlong)param_2 + 0x77);
        *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
        *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
        *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
        *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
        *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x7c);
        *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
        *(undefined1 *)((longlong)param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x7e);
        *(undefined1 *)((longlong)param_1 + 0x7f) = *(undefined1 *)((longlong)param_2 + 0x7f);
        *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
        *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
        *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
        *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x83);
        *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
        *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x85);
        *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x86);
        *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x87);
        *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
        *(undefined1 *)((longlong)param_1 + 0x89) = *(undefined1 *)((longlong)param_2 + 0x89);
        *(undefined1 *)((longlong)param_1 + 0x8a) = *(undefined1 *)((longlong)param_2 + 0x8a);
        *(undefined1 *)((longlong)param_1 + 0x8b) = *(undefined1 *)((longlong)param_2 + 0x8b);
        *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)((longlong)param_2 + 0x8c);
        *(undefined1 *)((longlong)param_1 + 0x8d) = *(undefined1 *)((longlong)param_2 + 0x8d);
        *(undefined1 *)((longlong)param_1 + 0x8e) = *(undefined1 *)((longlong)param_2 + 0x8e);
        *(undefined1 *)((longlong)param_1 + 0x8f) = *(undefined1 *)((longlong)param_2 + 0x8f);
      }
    }
    else {
      *param_1 = (undefined8 *)*param_2;
      *param_2 = puVar2;
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000080;
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 0x12) = 1;
  if ((*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) == 0) {
    FUN_14039ab22(param_2,&PTR_vftable_14c6e47c0,1);
  }
  if ((*(int *)(param_2 + 1) < 1) || (1 < *(int *)(param_2 + 1))) {
    *(undefined4 *)(param_2 + 1) = 1;
  }
  *(undefined1 *)*param_2 = 0;
  return param_1;
}



// FUNCTION 144bdfad0 FUN_144bdfad0 body=145 status=ok
// SIG undefined FUN_144bdfad0(void)

longlong * FUN_144bdfad0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  if (param_2 != param_1) {
    iVar1 = (int)param_2[1];
    lVar2 = *param_2;
    if (0x80 < iVar1) {
      FUN_144be3270(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,lVar2,(longlong)iVar1);
    *(int *)(param_1 + 1) = iVar1;
  }
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  return param_1;
}



// FUNCTION 144bdfb70 FUN_144bdfb70 body=127 status=ok
// SIG undefined FUN_144bdfb70(void)

undefined8 * FUN_144bdfb70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_144be3270(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1);
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 144bdfbf0 FUN_144bdfbf0 body=250 status=ok
// SIG undefined FUN_144bdfbf0(void)

undefined8 * FUN_144bdfbf0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar5 = param_1 + 2;
  *param_1 = puVar5;
  uVar2 = 0x80000080;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  *(undefined4 *)(param_1 + 0x12) = 1;
  iVar4 = (int)param_2[1] - (int)*param_2;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    *(undefined1 *)puVar5 = 0;
    return param_1;
  }
  if (iVar4 < 0) {
    iVar4 = FUN_144bfbbb0(lVar1);
    puVar5 = (undefined8 *)*param_1;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar3 = iVar4;
  if (*(int *)(param_1 + 0x12) == 0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    iVar3 = (uVar2 & 0x7fffffff) - 1;
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
  }
  iVar4 = iVar3 + 1;
  if ((int)(uVar2 & 0x7fffffff) < iVar4) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar4);
    puVar5 = (undefined8 *)*param_1;
  }
  if ((*(int *)(param_1 + 1) < iVar4) || (iVar4 < *(int *)(param_1 + 1))) {
    *(int *)(param_1 + 1) = iVar4;
  }
  *(undefined1 *)((longlong)iVar3 + (longlong)puVar5) = 0;
  FUN_144bfbee0(*param_1,lVar1,(longlong)(*(int *)(param_1 + 1) + -1));
  return param_1;
}



// FUNCTION 144bdfcf0 FUN_144bdfcf0 body=110 status=ok
// SIG undefined FUN_144bdfcf0(void)

void FUN_144bdfcf0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (((int)param_1[0x12] == 0) &&
     (iVar1 = (*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) - 1, param_2 < iVar1)) {
    iVar1 = param_2;
  }
  iVar2 = iVar1 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar2);
  }
  if (((int)param_1[1] < iVar2) || (iVar2 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar2;
  }
  *(undefined1 *)((longlong)iVar1 + *param_1) = 0;
  return;
}



// FUNCTION 144bdfd60 FUN_144bdfd60 body=199 status=ok
// SIG undefined FUN_144bdfd60(void)

int FUN_144bdfd60(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  
  pcVar6 = (char *)*param_1;
  iVar5 = 0;
  if (*pcVar6 != '\0') {
    do {
      lVar4 = 0;
      if (*param_2 != '\0') {
        pcVar2 = param_2;
        cVar1 = *param_2;
        do {
          cVar3 = pcVar2[(longlong)pcVar6 - (longlong)param_2];
          cVar7 = cVar3 + ' ';
          if (0x19 < (byte)(cVar3 + 0xbfU)) {
            cVar7 = cVar3;
          }
          cVar3 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar3 = cVar1;
          }
          if (cVar7 != cVar3) break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          lVar4 = lVar4 + 1;
        } while (cVar1 != '\0');
      }
      if (param_2[lVar4] == '\0') {
        return iVar5;
      }
      pcVar6 = pcVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (*pcVar6 != '\0');
  }
  return -1;
}



// FUNCTION 144bdfe30 FUN_144bdfe30 body=60 status=ok
// SIG undefined FUN_144bdfe30(void)

int FUN_144bdfe30(longlong *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1] + -1;
  if (iVar1 < param_4) {
    param_4 = iVar1;
  }
  param_4 = param_4 + -1;
  if (param_3 <= param_4) {
    lVar2 = (longlong)param_4;
    do {
      if (*(char *)(*param_1 + lVar2) == param_2) {
        return param_4;
      }
      param_4 = param_4 + -1;
      lVar2 = lVar2 + -1;
    } while (param_3 <= lVar2);
  }
  return -1;
}



// FUNCTION 144bdfe70 FUN_144bdfe70 body=103 status=ok
// SIG undefined FUN_144bdfe70(void)

int FUN_144bdfe70(int *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = strstr(*(char **)param_1,param_2);
  if (pcVar2 == (char *)0x0) {
    return -1;
  }
  do {
    iVar1 = *param_1;
    iVar3 = (int)pcVar2;
    pcVar2 = strstr(pcVar2 + 1,param_2);
  } while (pcVar2 != (char *)0x0);
  return iVar3 - iVar1;
}



// FUNCTION 144bdfee0 FUN_144bdfee0 body=8 status=ok
// SIG undefined FUN_144bdfee0(void)

void FUN_144bdfee0(undefined8 *param_1)

{
  FUN_144bfbc60(*param_1);
  return;
}



// FUNCTION 144bdfef0 FUN_144bdfef0 body=8 status=ok
// SIG undefined FUN_144bdfef0(void)

void FUN_144bdfef0(undefined8 *param_1)

{
  FUN_144bfbc90(*param_1);
  return;
}



// FUNCTION 144bdff00 FUN_144bdff00 body=66 status=ok
// SIG undefined FUN_144bdff00(void)

void FUN_144bdff00(undefined8 *param_1)

{
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,1);
  }
  if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  return;
}



// FUNCTION 144bdff50 FUN_144bdff50 body=42 status=ok
// SIG undefined FUN_144bdff50(void)

undefined8
FUN_144bdff50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144be0070(param_1,param_2,&local_res18);
  return param_1;
}



// FUNCTION 144bdff80 FUN_144bdff80 body=239 status=ok
// SIG undefined FUN_144bdff80(void)

longlong * FUN_144bdff80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 *local_b8;
  int local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  undefined4 local_28;
  
  local_b8 = local_a8;
  local_ac = 0x80000080;
  local_28 = (undefined4)param_1[0x12];
  local_b0 = 1;
  local_a8[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144be0070(&local_b8,param_2,&local_res18);
  puVar1 = local_b8;
  iVar2 = local_b0 + -1;
  if (local_b8 != (undefined1 *)0x0) {
    if (iVar2 < 0) {
      iVar2 = FUN_144bfbbb0(local_b8);
    }
    iVar3 = (int)param_1[1] + -1;
    FUN_144bdfcf0(param_1,iVar3 + iVar2);
    FUN_144bfbee0((longlong)iVar3 + *param_1,puVar1,(longlong)(((int)param_1[1] - iVar3) + -1));
  }
  local_b0 = 0;
  if ((-1 < (int)local_ac) && (local_b8 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_b8,local_ac & 0x7fffffff);
  }
  return param_1;
}



// FUNCTION 144be0070 FUN_144be0070 body=384 status=ok
// SIG undefined FUN_144be0070(void)

longlong * FUN_144be0070(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  while( true ) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    uVar4 = uVar1 & 0x7fffffff;
    iVar2 = FUN_144bfba60(*param_1,uVar4,uVar4 - 1,param_2,param_3);
    if ((-1 < iVar2) && (iVar2 < (int)uVar4)) break;
    if ((int)param_1[0x12] == 0) {
      uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
      uVar1 = uVar3;
      if ((int)(uVar4 - 1) < (int)(uVar3 - 1)) {
        uVar1 = uVar4;
      }
      if (uVar3 < uVar1) {
        FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,uVar1);
      }
      if (((int)param_1[1] < (int)uVar1) || ((int)uVar1 < (int)param_1[1])) {
        *(uint *)(param_1 + 1) = uVar1;
      }
      *(undefined1 *)(((ulonglong)uVar1 - 1) + *param_1) = 0;
      return param_1;
    }
    if (iVar2 < 0) {
      iVar2 = uVar1 * 2;
      iVar5 = 0xff;
      if (0xff < iVar2) {
        iVar5 = iVar2;
      }
      iVar2 = iVar5 + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
        FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar2);
      }
      if (((int)param_1[1] < iVar2) || (iVar2 < (int)param_1[1])) {
        *(int *)(param_1 + 1) = iVar2;
      }
      *(undefined1 *)((longlong)iVar5 + *param_1) = 0;
    }
    else {
      iVar5 = iVar2 + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
        FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar5);
      }
      if (((int)param_1[1] < iVar5) || (iVar5 < (int)param_1[1])) {
        *(int *)(param_1 + 1) = iVar5;
      }
      *(undefined1 *)((longlong)iVar2 + *param_1) = 0;
    }
  }
  iVar5 = iVar2;
  if (((int)param_1[0x12] == 0) &&
     (iVar5 = (*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) - 1, iVar2 < iVar5)) {
    iVar5 = iVar2;
  }
  iVar2 = iVar5 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar2);
  }
  if (((int)param_1[1] < iVar2) || (iVar2 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar2;
  }
  *(undefined1 *)((longlong)iVar5 + *param_1) = 0;
  return param_1;
}



// FUNCTION 144be01f0 FUN_144be01f0 body=42 status=ok
// SIG undefined FUN_144be01f0(void)

longlong FUN_144be01f0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_144be0870(param_1,*(int *)(param_1 + 8) + -1,param_2,0xffffffff);
  }
  return param_1;
}



// FUNCTION 144be0220 FUN_144be0220 body=627 status=ok
// SIG undefined FUN_144be0220(void)

longlong * FUN_144be0220(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int local_res8;
  undefined1 *local_98;
  int local_90;
  uint local_8c;
  undefined1 local_88 [72];
  
  lVar1 = param_3[1];
  local_98 = local_88;
  param_3 = (longlong *)*param_3;
  local_90 = 0;
  local_8c = 0x80000010;
  iVar4 = (int)(lVar1 - (longlong)param_3 >> 3);
  if (0x10 < iVar4) {
    FUN_141807aa8(&local_98,&PTR_vftable_14c6e47c0,(longlong)iVar4);
  }
  if ((local_90 < iVar4) || (iVar4 < local_90)) {
    local_90 = iVar4;
  }
  if (param_2 == 0) {
    local_res8 = 0;
  }
  else {
    local_res8 = FUN_144bfbbb0(param_2);
  }
  iVar6 = 0;
  iVar8 = (int)param_1[1] + -1;
  iVar9 = iVar8;
  if (0 < iVar4) {
    lVar5 = 0;
    plVar7 = param_3;
    do {
      puVar2 = local_98;
      if (*plVar7 == 0) {
        *(undefined4 *)(local_98 + lVar5) = 0;
      }
      else {
        uVar3 = FUN_144bfbbb0();
        *(undefined4 *)(puVar2 + lVar5) = uVar3;
        iVar9 = iVar9 + *(int *)(local_98 + lVar5);
      }
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
      lVar5 = lVar5 + 4;
    } while (iVar6 < iVar4);
  }
  iVar9 = (iVar4 + -1) * local_res8 + iVar9;
  iVar4 = iVar9;
  if (((int)param_1[0x12] == 0) &&
     (iVar4 = (*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) - 1, iVar9 < iVar4)) {
    iVar4 = iVar9;
  }
  iVar9 = iVar4 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar9);
  }
  if (((int)param_1[1] < iVar9) || (iVar9 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar9;
  }
  iVar9 = 0;
  *(undefined1 *)((longlong)iVar4 + *param_1) = 0;
  iVar4 = (int)param_1[1] + -1;
  if (0 < (int)(lVar1 - (longlong)param_3 >> 3)) {
    lVar5 = 0;
    plVar7 = param_3;
    do {
      iVar6 = iVar8;
      if (*plVar7 != 0) {
        iVar6 = iVar4;
        if (*(int *)(local_98 + lVar5) + iVar8 < iVar4) {
          iVar6 = *(int *)(local_98 + lVar5) + iVar8;
        }
        FUN_144bfbed0((longlong)iVar8 + *param_1,*plVar7,(longlong)(iVar6 - iVar8));
        if (iVar6 == iVar4) break;
      }
      iVar8 = iVar6;
      if ((param_2 != 0) && (iVar9 < (int)(lVar1 - (longlong)param_3 >> 3) + -1)) {
        iVar8 = iVar4;
        if (local_res8 + iVar6 < iVar4) {
          iVar8 = local_res8 + iVar6;
        }
        FUN_144bfbed0((longlong)iVar6 + *param_1,param_2,(longlong)(iVar8 - iVar6));
        if (iVar8 == iVar4) break;
      }
      iVar9 = iVar9 + 1;
      lVar5 = lVar5 + 4;
      plVar7 = plVar7 + 1;
    } while (iVar9 < (int)(lVar1 - (longlong)param_3 >> 3));
  }
  local_90 = 0;
  if ((-1 < (int)local_8c) && (local_98 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 2);
  }
  return param_1;
}



// FUNCTION 144be04a0 FUN_144be04a0 body=207 status=ok
// SIG undefined FUN_144be04a0(void)

void FUN_144be04a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,1);
  }
  if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_48 = &local_38;
  puStack_40 = &stack0xfffffffffffffff8;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  FUN_144be0220(param_1,0,&local_48);
  return;
}



// FUNCTION 144be0570 FUN_144be0570 body=115 status=ok
// SIG undefined FUN_144be0570(void)

void FUN_144be0570(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,1);
  }
  if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  *(undefined1 *)*param_1 = 0;
  FUN_144be0220(param_1,param_2,&local_18);
  return;
}



// FUNCTION 144be05f0 FUN_144be05f0 body=69 status=ok
// SIG undefined FUN_144be05f0(void)

undefined8 * FUN_144be05f0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 1) + -1;
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  if (0 < iVar1) {
    iVar3 = *(int *)(param_1 + 1) - iVar1;
    *(int *)(param_1 + 1) = iVar3;
    puVar2 = (undefined1 *)*param_1;
    if (((iVar3 != 0) && (puVar2 != puVar2 + iVar1)) && (lVar4 = (longlong)iVar3, iVar3 != 0)) {
      do {
        *puVar2 = puVar2[iVar1];
        puVar2 = puVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return param_1;
}



// FUNCTION 144be0640 FUN_144be0640 body=45 status=ok
// SIG undefined FUN_144be0640(void)

longlong FUN_144be0640(longlong param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = (*(int *)(param_1 + 8) - param_2) + -1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    FUN_144bdfcf0(param_1,iVar1);
  }
  return param_1;
}



// FUNCTION 144be0670 FUN_144be0670 body=61 status=ok
// SIG undefined FUN_144be0670(void)

longlong * FUN_144be0670(longlong *param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    FUN_144bfb3c0(*param_1,(longlong)param_2 + *param_1,(longlong)param_3);
  }
  FUN_144bdfcf0(param_1,param_3);
  return param_1;
}



// FUNCTION 144be06b0 FUN_144be06b0 body=98 status=ok
// SIG undefined FUN_144be06b0(void)

undefined8 * FUN_144be06b0(undefined8 *param_1,longlong param_2,int param_3)

{
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = FUN_144bfbbb0(param_2);
    }
    FUN_144bdfcf0(param_1,param_3);
    FUN_144bfbee0(*param_1,param_2,(longlong)(*(int *)(param_1 + 1) + -1));
    return param_1;
  }
  FUN_144bdfcf0();
  return param_1;
}



// FUNCTION 144be0720 FUN_144be0720 body=100 status=ok
// SIG undefined FUN_144be0720(void)

longlong * FUN_144be0720(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = FUN_144bfbbb0(param_2);
    }
    iVar1 = (int)param_1[1] + -1;
    FUN_144bdfcf0(param_1,iVar1 + param_3);
    FUN_144bfbee0((longlong)iVar1 + *param_1,param_2,(longlong)(((int)param_1[1] - iVar1) + -1));
  }
  return param_1;
}



// FUNCTION 144be0790 FUN_144be0790 body=215 status=ok
// SIG undefined FUN_144be0790(void)

longlong * FUN_144be0790(longlong *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  if (0 < param_2) {
    *(undefined1 *)((longlong)(int)param_1[1] + -1 + *param_1) = param_3;
    param_2 = (int)param_1[1] + param_2;
    iVar2 = param_2;
    if (((int)param_1[0x12] == 0) &&
       (iVar2 = (*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) - 1, param_2 < iVar2)) {
      iVar2 = param_2;
    }
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar2);
    }
    iVar1 = (int)param_1[1];
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 1) = iVar2;
      iVar3 = iVar2;
      if (0 < iVar2 - iVar1) {
        uVar5 = (ulonglong)(uint)(iVar2 - iVar1);
        puVar4 = (undefined1 *)((longlong)iVar1 + *param_1);
        do {
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = param_3;
          }
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 1;
        } while (uVar5 != 0);
        iVar3 = (int)param_1[1];
      }
    }
    else {
      iVar3 = iVar1;
      if (iVar2 < iVar1) {
        *(int *)(param_1 + 1) = iVar2;
        iVar3 = iVar2;
      }
    }
    *(undefined1 *)((longlong)iVar3 + -1 + *param_1) = 0;
  }
  return param_1;
}



// FUNCTION 144be0870 FUN_144be0870 body=425 status=ok
// SIG undefined FUN_144be0870(void)

longlong * FUN_144be0870(longlong *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  if (param_3 != (undefined1 *)0x0) {
    if ((int)param_4 < 0) {
      param_4 = FUN_144bfbbb0(param_3);
    }
    uVar5 = (ulonglong)param_4;
    if ((int)param_1[0x12] == 0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
      iVar10 = uVar2 - 2;
      if ((int)(param_2 + param_4) < iVar10) {
        iVar10 = param_2 + param_4;
      }
      if (iVar10 <= param_2) {
        return param_1;
      }
      uVar6 = iVar10 - param_2;
      if ((int)uVar6 < 1) {
        return param_1;
      }
      iVar10 = (int)param_1[1] + uVar6;
      iVar9 = (int)param_1[1] - param_2;
      if ((int)uVar2 < iVar10) {
        FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar10);
      }
      puVar7 = (undefined1 *)((longlong)param_2 + *param_1);
      if (0 < iVar9) {
        puVar3 = puVar7 + (int)uVar6;
        if (puVar3 < puVar7) {
          lVar4 = (longlong)iVar9;
          if (iVar9 != 0) {
            lVar8 = (longlong)puVar7 - (longlong)puVar3;
            do {
              *puVar3 = puVar3[lVar8];
              puVar3 = puVar3 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
        }
        else if (puVar3 != puVar7) {
          FUN_144bfb260(puVar3,puVar7,(longlong)iVar9);
        }
      }
      uVar5 = (ulonglong)uVar6;
      do {
        if (puVar7 != (undefined1 *)0x0) {
          uVar1 = *param_3;
          param_3 = param_3 + 1;
          *puVar7 = uVar1;
        }
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      if ((int)param_4 < 1) {
        return param_1;
      }
      iVar10 = (int)param_1[1] + param_4;
      iVar9 = (int)param_1[1] - param_2;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar10) {
        FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar10);
      }
      puVar7 = (undefined1 *)((longlong)param_2 + *param_1);
      if (0 < iVar9) {
        puVar3 = puVar7 + (int)param_4;
        if (puVar3 < puVar7) {
          lVar4 = (longlong)iVar9;
          if (iVar9 != 0) {
            lVar8 = (longlong)puVar7 - (longlong)puVar3;
            do {
              *puVar3 = puVar3[lVar8];
              puVar3 = puVar3 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
        }
        else if (puVar3 != puVar7) {
          FUN_144bfb260(puVar3,puVar7,(longlong)iVar9);
        }
      }
      do {
        if (puVar7 != (undefined1 *)0x0) {
          uVar1 = *param_3;
          param_3 = param_3 + 1;
          *puVar7 = uVar1;
        }
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    *(int *)(param_1 + 1) = iVar10;
  }
  return param_1;
}



// FUNCTION 144be0a20 FUN_144be0a20 body=190 status=ok
// SIG undefined FUN_144be0a20(void)

longlong * FUN_144be0a20(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1] + -1;
  iVar3 = 0x7fffffff;
  if (iVar4 < 0x7fffffff) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3;
    do {
      if (*(char *)(*param_1 + lVar2) == '/') goto LAB_144be0a5a;
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  iVar3 = -1;
LAB_144be0a5a:
  iVar1 = 0x7fffffff;
  if (iVar4 < 0x7fffffff) {
    iVar1 = iVar4;
  }
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    do {
      if (*(char *)(*param_1 + lVar2) == '\\') goto LAB_144be0a85;
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  iVar1 = -1;
LAB_144be0a85:
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  if (-1 < iVar3) {
    FUN_144bdfcf0(param_1);
    return param_1;
  }
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,1);
  }
  if (((int)param_1[1] < 1) || (1 < (int)param_1[1])) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  return param_1;
}



// FUNCTION 144be0ae0 FUN_144be0ae0 body=1000 status=ok
// SIG undefined FUN_144be0ae0(void)

undefined1 ** FUN_144be0ae0(undefined1 **param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *local_res18;
  undefined1 *local_1f8;
  int local_1f0;
  uint local_1ec;
  undefined1 local_1e8 [128];
  undefined1 **local_168;
  int local_160;
  uint local_15c;
  undefined1 *local_158 [16];
  undefined1 *local_d8;
  uint local_d0;
  uint local_cc;
  undefined1 local_c8 [128];
  undefined4 local_48;
  
  local_cc = 0x80000080;
  uVar9 = 0;
  local_d0 = 0;
  local_d8 = local_c8;
  if (param_1 != &local_d8) {
    uVar13 = *(uint *)(param_1 + 1);
    uVar9 = (ulonglong)(int)uVar13;
    if (0x80 < (int)uVar13) {
      FUN_144be3270(&local_d8,&PTR_vftable_14c6e47c0,uVar9);
    }
    FUN_144b3d470(local_d8);
    local_d0 = uVar13;
  }
  iVar12 = 0;
  local_48 = *(undefined4 *)(param_1 + 0x12);
  if (0 < (int)uVar9 + -1) {
    lVar7 = 0;
    do {
      if (local_d8[lVar7] == '\\') {
        local_d8[lVar7] = 0x2f;
        uVar9 = (ulonglong)local_d0;
      }
      iVar12 = iVar12 + 1;
      lVar7 = lVar7 + 1;
    } while (iVar12 < (int)uVar9 + -1);
  }
  local_res18 = &DAT_149981d1c;
  cVar3 = FUN_144bfbc60(local_d8,&DAT_149981d1c);
  if (cVar3 == '\0') {
    cVar3 = FUN_144bfbc60(local_d8,&DAT_149981d20);
    local_res18 = &DAT_14996de1b;
    if (cVar3 != '\0') {
      local_res18 = &DAT_149981d20;
    }
  }
  local_168 = local_158;
  iVar12 = 0;
  local_158[0] = local_d8;
  lVar7 = 0;
  local_15c = 0x80000010;
  iVar8 = 1;
  while ((puVar1 = local_d8, local_160 = iVar8,
         pvVar6 = memchr(local_d8 + lVar7,0x2f,(longlong)(int)((local_d0 - iVar12) + -1)),
         pvVar6 != (void *)0x0 && (iVar4 = (int)pvVar6 - (int)puVar1, -1 < iVar4))) {
    iVar12 = iVar4 + 1;
    lVar7 = (longlong)iVar12;
    puVar1[iVar4] = 0;
    iVar8 = local_160 + 1;
    puVar1 = local_d8 + lVar7;
    if ((int)(local_15c & 0x7fffffff) < iVar8) {
      FUN_144be3180(&local_168,&PTR_vftable_14c6e47c0,(longlong)iVar8);
    }
    if (local_168 + local_160 != (undefined1 **)0x0) {
      local_168[local_160] = puVar1;
    }
  }
  uVar9 = 0;
  local_1ec = 0x80000010;
  local_1f0 = 0;
  local_1f8 = local_1e8;
  if (0x10 < iVar8) {
    FUN_144be3180(&local_1f8,&PTR_vftable_14c6e47c0,(longlong)iVar8);
    iVar8 = local_160;
  }
  uVar10 = uVar9;
  uVar11 = uVar9;
  uVar14 = uVar9;
  if (0 < iVar8) {
    do {
      iVar12 = FUN_144bfb930(&DAT_149981d24,*(undefined8 *)(uVar10 + (longlong)local_168));
      iVar8 = (int)uVar11;
      if (iVar12 == 0) {
        if (iVar8 == 0) {
LAB_144be0d46:
          ppuVar2 = local_168;
          iVar12 = local_1f0 + 1;
          if ((int)(local_1ec & 0x7fffffff) < iVar12) {
            FUN_144be3180(&local_1f8,&PTR_vftable_14c6e47c0,(longlong)iVar12);
          }
          lVar7 = (longlong)local_1f0;
          local_1f0 = iVar12;
          if ((undefined8 *)(local_1f8 + lVar7 * 8) != (undefined8 *)0x0) {
            *(undefined8 *)(local_1f8 + lVar7 * 8) = *(undefined8 *)((longlong)ppuVar2 + uVar10);
          }
        }
        else {
          uVar11 = (ulonglong)(iVar8 - 1);
          local_1f0 = local_1f0 + -1;
        }
      }
      else {
        iVar12 = FUN_144bfb930(&DAT_149971530,*(undefined8 *)(uVar10 + (longlong)local_168));
        if ((iVar12 != 0) &&
           (iVar12 = FUN_144bfb930(*(undefined8 *)(uVar10 + (longlong)local_168),&DAT_14996de1b),
           iVar12 != 0)) {
          uVar11 = (ulonglong)(iVar8 + 1);
          goto LAB_144be0d46;
        }
      }
      uVar13 = (int)uVar14 + 1;
      uVar10 = uVar10 + 8;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < local_160);
  }
  uVar5 = FUN_144bfbbb0(local_res18);
  FUN_144bdfcf0(param_1,uVar5);
  FUN_144bfbee0(*param_1,local_res18,(longlong)(*(int *)(param_1 + 1) + -1));
  uVar10 = uVar9;
  if (0 < local_1f0) {
    do {
      FUN_144be0ed0(param_1,*(undefined8 *)(local_1f8 + uVar9),0,0);
      uVar13 = (int)uVar10 + 1;
      uVar9 = uVar9 + 8;
      uVar10 = (ulonglong)uVar13;
    } while ((int)uVar13 < local_1f0);
  }
  local_1f0 = 0;
  if ((-1 < (int)local_1ec) && (local_1f8 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_1f8,(ulonglong)(local_1ec & 0x7fffffff) << 3);
  }
  local_1f8 = (undefined1 *)0x0;
  local_1ec = 0x80000000;
  local_160 = 0;
  if ((-1 < (int)local_15c) && (local_168 != (undefined1 **)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_168,(ulonglong)(local_15c & 0x7fffffff) << 3);
  }
  local_168 = (undefined1 **)0x0;
  local_15c = 0x80000000;
  local_d0 = 0;
  if ((-1 < (int)local_cc) && (local_d8 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_d8,local_cc & 0x7fffffff);
  }
  return param_1;
}



// FUNCTION 144be0ed0 FUN_144be0ed0 body=492 status=ok
// SIG undefined FUN_144be0ed0(void)

longlong * FUN_144be0ed0(longlong *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_30 [3];
  
  if (*(char *)*param_1 == '\0') {
    if (param_2 == (char *)0x0) {
      FUN_144bdfcf0(param_1);
    }
    else {
      uVar5 = FUN_144bfbbb0(param_2);
      FUN_144bdfcf0(param_1,uVar5);
      FUN_144bfbee0(*param_1,param_2,(longlong)((int)param_1[1] + -1));
    }
    if (param_3 != 0) {
      FUN_144be0ed0(param_1,param_3,param_4,0);
      return param_1;
    }
  }
  else {
    lVar4 = param_1[1];
    lVar11 = 0;
    iVar6 = (int)lVar4 + -1;
    local_30[0] = param_3;
    local_30[1] = param_4;
    local_30[2] = 0;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) || (((char *)*param_1)[(longlong)(int)lVar4 + -2] == '/')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while (param_2 != (char *)0x0) {
      cVar2 = *param_2;
      if (cVar2 != '\0') {
        while (cVar2 == '/') {
          param_2 = param_2 + 1;
          cVar2 = *param_2;
        }
        iVar6 = FUN_144bfbbb0(param_2);
        uVar9 = (ulonglong)iVar6;
        uVar10 = uVar9;
        if (iVar6 != 0) {
          do {
            if (param_2[uVar9 - 1] != '/') break;
            uVar10 = (ulonglong)((int)uVar10 - 1);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (((int)uVar10 != 0) && (bVar3)) {
            iVar6 = (int)param_1[1] + 1;
            if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
              FUN_144be3310(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar6);
            }
            puVar7 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
            if (puVar7 != (undefined1 *)0x0) {
              *puVar7 = 0x2f;
            }
            *(int *)(param_1 + 1) = iVar6;
            uVar10 = uVar10 & 0xffffffff;
          }
          lVar4 = param_1[1];
          iVar6 = (int)lVar4 + (int)uVar10;
          if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
            FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar6);
          }
          if (0 < (int)uVar10) {
            uVar10 = uVar10 & 0xffffffff;
            pcVar8 = (char *)((longlong)(int)lVar4 + *param_1);
            do {
              if (pcVar8 != (char *)0x0) {
                cVar2 = *param_2;
                param_2 = param_2 + 1;
                *pcVar8 = cVar2;
              }
              uVar10 = uVar10 - 1;
              pcVar8 = pcVar8 + 1;
            } while (uVar10 != 0);
          }
          *(int *)(param_1 + 1) = iVar6;
        }
        bVar3 = true;
      }
      plVar1 = local_30 + lVar11;
      lVar11 = lVar11 + 1;
      param_2 = (char *)*plVar1;
    }
    iVar6 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_144be3310(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar6);
    }
    puVar7 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
    }
    *(int *)(param_1 + 1) = iVar6;
  }
  return param_1;
}



// FUNCTION 144be10c0 FUN_144be10c0 body=404 status=ok
// SIG undefined FUN_144be10c0(void)

longlong * FUN_144be10c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *local_18;
  undefined1 *local_10;
  
  if (*(char *)*param_1 != '\0') {
    FUN_144f5a2b0(param_2,&local_18,0x2f);
    if (local_18 != local_10) {
      iVar2 = (int)param_1[1];
      iVar4 = iVar2 + -1;
      *(int *)(param_1 + 1) = iVar4;
      if ((iVar4 != 0) && (*(char *)((longlong)(iVar2 + -2) + *param_1) != '/')) {
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
          FUN_144be3310(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar2);
        }
        puVar3 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0x2f;
        }
        *(int *)(param_1 + 1) = iVar2;
        iVar4 = iVar2;
      }
      iVar2 = (iVar4 - (int)local_18) + (int)local_10;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
        FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar2);
      }
      puVar3 = (undefined1 *)((longlong)iVar4 + *param_1);
      for (; local_18 != local_10; local_18 = local_18 + 1) {
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *local_18;
        }
        puVar3 = puVar3 + 1;
      }
      iVar4 = iVar2 + 1;
      *(int *)(param_1 + 1) = iVar2;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
        FUN_144be3310(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar4);
      }
      puVar3 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      *(int *)(param_1 + 1) = iVar4;
    }
    return param_1;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar2 = (int)param_2[1] - (int)lVar1;
    if (iVar2 < 0) {
      iVar2 = FUN_144bfbbb0(lVar1);
    }
    FUN_144bdfcf0(param_1,iVar2);
    FUN_144bfbee0(*param_1,lVar1,(longlong)((int)param_1[1] + -1));
    return param_1;
  }
  FUN_144bdfcf0(param_1,0);
  return param_1;
}



// FUNCTION 144be1260 FUN_144be1260 body=78 status=ok
// SIG undefined FUN_144be1260(void)

undefined1 FUN_144be1260(longlong *param_1,char param_2,undefined1 param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  uVar1 = 0;
  uVar3 = uVar1;
  if (0 < (int)param_1[1] + -1) {
    do {
      if (*(char *)(*param_1 + uVar1) == param_2) {
        *(undefined1 *)(*param_1 + uVar1) = param_3;
        uVar4 = 1;
        if (param_4 == 0) {
          return 1;
        }
      }
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)param_1[1] + -1);
  }
  return uVar4;
}



// FUNCTION 144be12b0 FUN_144be12b0 body=894 status=ok
// SIG undefined FUN_144be12b0(void)

ulonglong FUN_144be12b0(longlong *param_1,char *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong in_RAX;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  byte local_e8;
  int local_d8;
  undefined4 uStack_d4;
  int local_d0;
  uint local_cc;
  
  if (param_2 != (char *)0x0) {
    in_RAX = FUN_144bfbbb0(param_2);
    iVar3 = (int)in_RAX;
    if (iVar3 != 0) {
      puVar7 = &DAT_14996de1b;
      if (param_3 != (undefined1 *)0x0) {
        puVar7 = param_3;
      }
      iVar1 = FUN_144bfbbb0(puVar7);
      uVar10 = 0;
      local_e8 = 0;
      if (iVar3 < iVar1) {
        FUN_144bdfad0(&local_d8,param_1);
        FUN_144bdff00(param_1);
        iVar8 = 0;
        while (iVar8 < local_d0) {
          pcVar4 = strstr((char *)(CONCAT44(uStack_d4,local_d8) + (longlong)iVar8),param_2);
          if ((pcVar4 == (char *)0x0) || (iVar12 = (int)pcVar4 - local_d8, iVar12 < 0)) break;
          uVar10 = 1;
          iVar2 = iVar12 - iVar8;
          lVar11 = (longlong)iVar8 + CONCAT44(uStack_d4,local_d8);
          if (lVar11 != 0) {
            if (iVar2 < 0) {
              iVar2 = FUN_144bfbbb0(lVar11);
            }
            iVar8 = (int)param_1[1] + -1;
            FUN_144bdfcf0(param_1,iVar8 + iVar2);
            FUN_144bfbee0((longlong)iVar8 + *param_1,lVar11,
                          (longlong)(((int)param_1[1] - iVar8) + -1));
          }
          if (puVar7 != (undefined1 *)0x0) {
            iVar8 = iVar1;
            if (iVar1 < 0) {
              iVar8 = FUN_144bfbbb0(puVar7);
            }
            iVar2 = (int)param_1[1] + -1;
            FUN_144bdfcf0(param_1,iVar2 + iVar8);
            FUN_144bfbee0((longlong)iVar2 + *param_1,puVar7,
                          (longlong)(((int)param_1[1] - iVar2) + -1));
          }
          iVar8 = iVar12 + iVar3;
          if (param_4 == 0) break;
        }
        iVar3 = (local_d0 - iVar8) + -1;
        lVar11 = (longlong)iVar8 + CONCAT44(uStack_d4,local_d8);
        if (lVar11 != 0) {
          if (iVar3 < 0) {
            iVar3 = FUN_144bfbbb0(lVar11);
          }
          iVar1 = (int)param_1[1] + -1;
          FUN_144bdfcf0(param_1,iVar1 + iVar3);
          FUN_144bfbee0((longlong)iVar1 + *param_1,lVar11,(longlong)(((int)param_1[1] - iVar1) + -1)
                       );
        }
        local_d0 = 0;
        if ((-1 < (int)local_cc) && (CONCAT44(uStack_d4,local_d8) != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,CONCAT44(uStack_d4,local_d8),local_cc & 0x7fffffff);
        }
      }
      else {
        lVar11 = *param_1;
        iVar2 = 0;
        iVar8 = 0;
        iVar12 = 0;
        lVar13 = 0;
        lVar9 = 0;
        do {
          if ((((int)param_1[1] <= iVar8) ||
              (pcVar4 = strstr((char *)((longlong)iVar8 + *param_1),param_2), pcVar4 == (char *)0x0)
              ) || (iVar8 = (int)pcVar4 - (int)*param_1, iVar8 == -1)) break;
          if (lVar13 < iVar8) {
            iVar5 = iVar8 - (int)lVar13;
            iVar2 = iVar2 + iVar5;
            iVar12 = iVar12 + iVar5;
            do {
              puVar14 = (undefined1 *)(lVar13 + lVar11);
              lVar13 = lVar13 + 1;
              *(undefined1 *)(lVar9 + lVar11) = *puVar14;
              lVar9 = lVar9 + 1;
            } while (lVar13 < iVar8);
          }
          lVar6 = 0;
          if (0 < (longlong)iVar1) {
            iVar12 = iVar12 + iVar1;
            do {
              puVar14 = puVar7 + lVar6;
              lVar6 = lVar6 + 1;
              *(undefined1 *)(lVar9 + lVar11) = *puVar14;
              lVar9 = lVar9 + 1;
            } while (lVar6 < iVar1);
          }
          iVar2 = iVar2 + iVar3;
          local_e8 = 1;
          lVar13 = lVar13 + iVar3;
          iVar8 = iVar3 + iVar8;
        } while (param_4 != 0);
        if (iVar2 < (int)param_1[1] + -1) {
          puVar7 = (undefined1 *)(iVar12 + lVar11);
          puVar14 = (undefined1 *)(iVar2 + lVar11);
          do {
            iVar12 = iVar12 + 1;
            *puVar7 = *puVar14;
            puVar7 = puVar7 + 1;
            puVar14 = puVar14 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)param_1[1] + -1);
        }
        *(undefined1 *)(iVar12 + lVar11) = 0;
        iVar3 = iVar12;
        if (((int)param_1[0x12] == 0) &&
           (iVar3 = (*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) - 1, iVar12 < iVar3)) {
          iVar3 = iVar12;
        }
        iVar1 = iVar3 + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
          FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar1);
        }
        if (((int)param_1[1] < iVar1) || (iVar1 < (int)param_1[1])) {
          *(int *)(param_1 + 1) = iVar1;
        }
        uVar10 = (ulonglong)local_e8;
        *(undefined1 *)((longlong)iVar3 + *param_1) = 0;
      }
      return uVar10;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144be1630 FUN_144be1630 body=4 status=ok
// SIG undefined FUN_144be1630(void)

undefined8 FUN_144be1630(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144be1640 FUN_144be1640 body=155 status=ok
// SIG undefined FUN_144be1640(void)

undefined8 FUN_144be1640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong local_128;
  int *local_120;
  undefined1 local_118 [256];
  
  iVar1 = *param_4;
  if (0x20 < *param_4) {
    iVar1 = 0x20;
  }
  local_128 = (longlong)iVar1;
  local_120 = param_4;
  FUN_144f62880(local_118,local_128,&stack0x00000028);
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,1);
  }
  if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  FUN_144be1750(param_1,param_2,param_3,&local_128);
  return param_2;
}



// FUNCTION 144be16e0 FUN_144be16e0 body=101 status=ok
// SIG undefined FUN_144be16e0(void)

undefined8 FUN_144be16e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong local_128;
  int *local_120;
  undefined1 local_118 [256];
  
  iVar1 = *param_4;
  if (0x20 < *param_4) {
    iVar1 = 0x20;
  }
  local_128 = (longlong)iVar1;
  local_120 = param_4;
  FUN_144f62880(local_118,local_128,&stack0x00000028);
  FUN_144be1750(param_1,param_2,param_3,&local_128);
  return param_2;
}



// FUNCTION 144be1750 FUN_144be1750 body=610 status=ok
// SIG undefined FUN_144be1750(void)

uint * FUN_144be1750(longlong *param_1,uint *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int local_res18 [2];
  undefined1 local_88 [4];
  undefined1 local_84 [12];
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  int local_60;
  uint local_5c;
  undefined1 local_58 [16];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  
  if (param_3 == 0) {
    *param_2 = -(uint)(*param_4 != 0) & 0x80040257;
    return param_2;
  }
  local_68 = local_58;
  iVar3 = (int)*param_4;
  uVar7 = 0;
  local_60 = 0;
  local_5c = 0x8000000a;
  iVar9 = iVar3;
  if (((int)param_1[0x12] == 0) && (iVar9 = 10, iVar3 < 10)) {
    iVar9 = iVar3;
  }
  iVar3 = 0;
  if (10 < iVar9) {
    FUN_14180788c(&local_68,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    iVar3 = local_60;
  }
  local_60 = iVar9;
  if (iVar3 < iVar9) {
    puVar5 = local_68 + iVar3;
    uVar8 = (ulonglong)(uint)(iVar9 - iVar3);
    if (0 < iVar9 - iVar3) {
      do {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar8 != 0);
    }
  }
  else {
    local_60 = iVar3;
    if (iVar9 < iVar3) {
      local_60 = iVar9;
    }
  }
  local_40 = 0;
  uStack_38 = 0;
  local_30 = param_3;
  puVar6 = (uint *)FUN_144be2e70(local_48,local_88);
  uVar4 = *puVar6;
  uVar8 = uVar7;
  lVar1 = local_40;
  uVar2 = uStack_38;
  while (local_40 = lVar1, uStack_38 = uVar2, -1 < (int)uVar4) {
    if (local_48[0] == 0) {
      uVar8 = uVar7;
      if (local_60 < 1) goto LAB_144be1990;
      goto LAB_144be1980;
    }
    uStack_38._0_4_ = (int)uVar2;
    local_40._0_4_ = (int)lVar1;
    if (local_48[0] == 1) {
      iVar3 = (int)uStack_38 - (int)local_40;
      if (lVar1 != 0) {
        if (iVar3 < 0) {
          iVar3 = FUN_144bfbbb0(lVar1);
        }
        iVar9 = (int)param_1[1] + -1;
        FUN_144bdfcf0(param_1,iVar9 + iVar3);
        FUN_144bfbee0((longlong)iVar9 + *param_1,lVar1,(longlong)(((int)param_1[1] - iVar9) + -1));
        lVar1 = local_40;
        uVar2 = uStack_38;
      }
    }
    else if (local_48[0] == 2) {
      local_40._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
      uStack_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_78 = (int)local_40;
      uStack_74 = local_40._4_4_;
      iStack_70 = (int)uStack_38;
      uStack_6c = uStack_38._4_4_;
      puVar6 = (uint *)FUN_144be2250(local_84,&local_78,param_4,uVar8,param_1,local_res18);
      uVar4 = *puVar6;
      if ((int)uVar4 < 0) break;
      if ((-1 < local_res18[0]) && (local_res18[0] < local_60)) {
        local_68[local_res18[0]] = 1;
      }
      uVar8 = (ulonglong)(local_res18[0] + 1);
      lVar1 = local_40;
      uVar2 = uStack_38;
    }
    uStack_38 = uVar2;
    local_40 = lVar1;
    puVar6 = (uint *)FUN_144be2e70(local_48,local_88);
    lVar1 = local_40;
    uVar2 = uStack_38;
    uVar4 = *puVar6;
  }
  *param_2 = uVar4;
  goto joined_r0x000144be19ab;
  while( true ) {
    uVar7 = uVar7 + 1;
    uVar8 = (ulonglong)((int)uVar8 + 1);
    if ((longlong)local_60 <= (longlong)uVar7) break;
LAB_144be1980:
    if (local_68[uVar7] == '\0') {
      if (-1 < (int)uVar8) {
        *param_2 = 0x80048005;
        goto joined_r0x000144be19ab;
      }
      break;
    }
  }
LAB_144be1990:
  *param_2 = 0;
joined_r0x000144be19ab:
  if ((-1 < (int)local_5c) && (local_60 = 0, local_68 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,local_5c & 0x7fffffff);
  }
  return param_2;
}



// FUNCTION 144be19c0 FUN_144be19c0 body=132 status=ok
// SIG undefined FUN_144be19c0(void)

undefined8
FUN_144be19c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_14039ab22(param_1,&PTR_vftable_14c6e47c0,1);
  }
  if ((*(int *)(param_1 + 1) < 1) || (1 < *(int *)(param_1 + 1))) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  FUN_144be1a50(param_1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 144be1a50 FUN_144be1a50 body=635 status=ok
// SIG undefined FUN_144be1a50(void)

uint * FUN_144be1a50(longlong *param_1,uint *param_2,longlong param_3,longlong *param_4,
                    undefined4 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint local_res18 [2];
  uint local_88;
  int local_84 [3];
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  int local_60;
  uint local_5c;
  undefined1 local_58 [16];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  
  if (param_3 == 0) {
    *param_2 = -(uint)(*param_4 != 0) & 0x80040257;
    return param_2;
  }
  local_68 = local_58;
  iVar9 = (int)*param_4;
  local_60 = 0;
  local_5c = 0x8000000a;
  iVar4 = iVar9;
  if (((int)param_1[0x12] == 0) && (iVar4 = 10, iVar9 < 10)) {
    iVar4 = iVar9;
  }
  iVar9 = 0;
  if (10 < iVar4) {
    FUN_14180788c(&local_68,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    iVar9 = local_60;
  }
  local_60 = iVar4;
  if (iVar9 < iVar4) {
    puVar5 = local_68 + iVar9;
    uVar7 = (ulonglong)(uint)(iVar4 - iVar9);
    if (0 < iVar4 - iVar9) {
      do {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
    }
  }
  else {
    local_60 = iVar9;
    if (iVar4 < iVar9) {
      local_60 = iVar4;
    }
  }
  iVar9 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = param_3;
  FUN_144be2e70(local_48,local_res18);
  uVar3 = local_res18[0];
  uVar1 = local_88;
  lVar6 = local_40;
  uVar2 = uStack_38;
  while (local_88 = uVar3, local_40 = lVar6, uStack_38 = uVar2, -1 < (int)local_88) {
    if (local_48[0] == 0) {
      iVar9 = 0;
      if (local_60 < 1) goto LAB_144be1c92;
      lVar6 = 0;
      goto LAB_144be1c82;
    }
    uStack_38._0_4_ = (int)uVar2;
    local_40._0_4_ = (int)lVar6;
    local_res18[0] = local_88;
    local_88 = uVar1;
    if (local_48[0] == 1) {
      iVar4 = (int)uStack_38 - (int)local_40;
      if (lVar6 != 0) {
        if (iVar4 < 0) {
          iVar4 = FUN_144bfbbb0(lVar6);
          uVar1 = local_88;
        }
        local_88 = uVar1;
        iVar8 = (int)param_1[1] + -1;
        FUN_144bdfcf0(param_1,iVar8 + iVar4);
        FUN_144bfbee0((longlong)iVar8 + *param_1,lVar6,(longlong)(((int)param_1[1] - iVar8) + -1));
        uVar1 = local_88;
        lVar6 = local_40;
        uVar2 = uStack_38;
      }
    }
    else if (local_48[0] == 2) {
      local_40._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      uStack_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_78 = (int)local_40;
      uStack_74 = local_40._4_4_;
      iStack_70 = (int)uStack_38;
      uStack_6c = uStack_38._4_4_;
      FUN_144be2880(&local_88,&local_78,param_4,iVar9,param_1,local_84,param_5);
      if ((int)local_88 < 0) break;
      if ((-1 < local_84[0]) && (local_84[0] < local_60)) {
        local_68[local_84[0]] = 1;
      }
      iVar9 = local_84[0] + 1;
      uVar1 = local_88;
      lVar6 = local_40;
      uVar2 = uStack_38;
    }
    uStack_38 = uVar2;
    local_40 = lVar6;
    local_88 = uVar1;
    FUN_144be2e70(local_48,local_res18);
    uVar3 = local_res18[0];
    uVar1 = local_88;
    lVar6 = local_40;
    uVar2 = uStack_38;
  }
  *param_2 = local_88;
  goto joined_r0x000144be1cc4;
  while( true ) {
    iVar9 = iVar9 + 1;
    lVar6 = lVar6 + 1;
    if (local_60 <= lVar6) break;
LAB_144be1c82:
    if (local_68[lVar6] == '\0') {
      if (-1 < iVar9) {
        *param_2 = 0x80048005;
        goto joined_r0x000144be1cc4;
      }
      break;
    }
  }
LAB_144be1c92:
  *param_2 = 0;
joined_r0x000144be1cc4:
  if ((-1 < (int)local_5c) && (local_60 = 0, local_68 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,local_5c & 0x7fffffff);
  }
  return param_2;
}



// FUNCTION 144be1cd0 FUN_144be1cd0 body=146 status=ok
// SIG undefined FUN_144be1cd0(void)

undefined4 *
FUN_144be1cd0(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar2 = (int)param_1[1] + -1;
    if (iVar2 < 0) {
      iVar2 = FUN_144bfbbb0(lVar1);
    }
    iVar3 = (int)param_4[1] + -1;
    FUN_144bdfcf0(param_4,iVar3 + iVar2);
    FUN_144bfbee0((longlong)iVar3 + *param_4,lVar1,(longlong)(((int)param_4[1] - iVar3) + -1));
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144be1d70 FUN_144be1d70 body=533 status=ok
// SIG undefined FUN_144be1d70(void)

undefined4 * FUN_144be1d70(undefined4 *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_98;
  code *local_90;
  char *local_88;
  code *local_80;
  undefined8 *local_78;
  undefined1 local_70 [88];
  
  pcVar6 = (char *)*param_2;
  uVar2 = 0x80040257;
  local_res10[0]._0_4_ = 0x80040257;
  if (pcVar6 == (char *)param_2[1]) {
    if (DAT_14c783cf0 != '\0') {
      lVar3 = FUN_144bdc640(local_70,&DAT_14c783ca0,1);
      *(char **)(lVar3 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      local_90 = FUN_144be33f0;
      local_88 = "s.isEmpty()";
      *(undefined8 *)(lVar3 + 0x40) = 0x3c;
LAB_144be1de9:
      local_98 = 2;
      local_80 = FUN_144bdef40;
      local_78 = local_res10;
      uVar4 = FUN_144bdc480(lVar3,"HK_RETURN_RES_IF({}) returning {}. ",&local_98,0);
      local_res20 = 0;
      FUN_144bdc480(uVar4,&DAT_14996de1b,&local_res20,0);
      FUN_144bdc690(local_70);
      uVar2 = (undefined4)local_res10[0];
    }
LAB_144be1f6d:
    *param_1 = uVar2;
  }
  else {
    local_res20 = CONCAT44(local_res20._4_4_,0x80040257);
    uVar5 = 0;
    do {
      local_res10[0]._0_4_ = 0x80040257;
      if (9 < (byte)(*pcVar6 - 0x30U)) {
        if (DAT_14c783cf0 != '\0') {
          lVar3 = FUN_144bdc640(local_70,&DAT_14c783ca0,1);
          local_98 = 2;
          *(char **)(lVar3 + 0x38) = "Container\\String\\hkStringBuf.cpp";
          local_90 = FUN_144be3410;
          local_88 = "isDigit(c) == false";
          local_80 = FUN_144bdef40;
          local_78 = &local_res20;
          *(undefined8 *)(lVar3 + 0x40) = 0x40;
          uVar4 = FUN_144bdc480(lVar3,"HK_RETURN_RES_IF({}) returning {}. ",&local_98,0);
          local_res10[0] = 0;
          FUN_144bdc480(uVar4,&DAT_14996de1b,local_res10,0);
          FUN_144bdc690(local_70);
          uVar2 = (undefined4)local_res20;
        }
        goto LAB_144be1f6d;
      }
      local_res10[0]._0_4_ = 0x80040257;
      uVar1 = (int)*pcVar6 + ((uint)uVar5 * 5 + -0x18) * 2;
      if (uVar1 < (uint)uVar5) {
        if (DAT_14c783cf0 == '\0') goto LAB_144be1f6d;
        lVar3 = FUN_144bdc640(local_70,&DAT_14c783ca0,CONCAT71((int7)(uVar5 >> 8),1));
        *(char **)(lVar3 + 0x38) = "Container\\String\\hkStringBuf.cpp";
        local_90 = FUN_144be3430;
        local_88 = "cur < prev";
        *(undefined8 *)(lVar3 + 0x40) = 0x44;
        goto LAB_144be1de9;
      }
      pcVar6 = pcVar6 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (pcVar6 != (char *)param_2[1]);
    *param_3 = uVar1;
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 144be1f90 FUN_144be1f90 body=695 status=ok
// SIG undefined FUN_144be1f90(void)

int * FUN_144be1f90(int *param_1,undefined8 *param_2,uint *param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_a8;
  code *local_a0;
  char *local_98;
  code *local_90;
  int *local_88;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [80];
  
  pcVar1 = (char *)*param_2;
  local_res10[0] = -0x7ffbfda9;
  if (pcVar1 == (char *)param_2[1]) {
    iVar5 = -0x7ffbfda9;
    if (DAT_14c783cf0 != '\0') {
      lVar2 = FUN_144bdc640(local_68,&DAT_14c783ca0,1);
      local_a8 = 2;
      *(char **)(lVar2 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      local_a0 = FUN_144be33f0;
      local_98 = "s.isEmpty()";
      local_90 = FUN_144bdef40;
      local_88 = local_res10;
      *(undefined8 *)(lVar2 + 0x40) = 0x4e;
      uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_RES_IF({}) returning {}. ",&local_a8,0);
      local_res20 = 0;
      FUN_144bdc480(uVar3,&DAT_14996de1b,&local_res20,0);
      FUN_144bdc690(local_68);
      iVar5 = local_res10[0];
    }
    *param_1 = iVar5;
    return param_1;
  }
  iVar5 = 0;
  if (*pcVar1 != '+') {
    if (*pcVar1 != '-') goto LAB_144be2091;
    iVar5 = 1;
  }
  param_2[1] = (char *)param_2[1];
  *param_2 = pcVar1 + 1;
LAB_144be2091:
  local_78 = *(undefined4 *)param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  piVar4 = (int *)FUN_144be1d70(local_80,&local_78,&local_res20);
  local_res10[0] = *piVar4;
  if (local_res10[0] < 0) {
    if (DAT_14c783cf0 != '\0') {
      lVar2 = FUN_144bdc640(local_68,&DAT_14c783ca0,1);
      local_a8 = 2;
      *(char **)(lVar2 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      local_a0 = FUN_144be3450;
      local_98 = "parseUnsignedDecimal(s, &num)";
      local_90 = FUN_144bdef40;
      local_88 = local_res10;
      *(undefined8 *)(lVar2 + 0x40) = 0x59;
      uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_a8,0);
      local_res20 = 0;
      FUN_144bdc480(uVar3,&DAT_14996de1b,&local_res20,0);
      FUN_144bdc690(local_68);
    }
    *param_1 = local_res10[0];
  }
  else {
    local_res10[0] = -0x7ffbfda9;
    if (iVar5 + 0x7fffffffU < (uint)local_res20) {
      iVar5 = -0x7ffbfda9;
      if (DAT_14c783cf0 != '\0') {
        lVar2 = FUN_144bdc640(local_68,&DAT_14c783ca0,1);
        local_a8 = 2;
        *(char **)(lVar2 + 0x38) = "Container\\String\\hkStringBuf.cpp";
        local_a0 = FUN_144be33f0;
        local_98 = "num > limit";
        local_90 = FUN_144bdef40;
        local_88 = local_res10;
        *(undefined8 *)(lVar2 + 0x40) = 0x5c;
        uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_RES_IF({}) returning {}. ",&local_a8,0);
        local_res20 = 0;
        FUN_144bdc480(uVar3,&DAT_14996de1b,&local_res20,0);
        FUN_144bdc690(local_68);
        iVar5 = local_res10[0];
      }
    }
    else {
      if ((char)iVar5 != '\0') {
        local_res20._0_4_ = -(uint)local_res20;
      }
      *param_3 = (uint)local_res20;
      iVar5 = 0;
    }
    *param_1 = iVar5;
  }
  return param_1;
}



// FUNCTION 144be2250 FUN_144be2250 body=1577 status=ok
// SIG undefined FUN_144be2250(void)

int * FUN_144be2250(int *param_1,ulonglong *param_2,ulonglong *param_3,uint param_4,
                   longlong *param_5,uint *param_6)

{
  ulonglong uVar1;
  char *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_res10 [2];
  uint local_1e8 [2];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  char *local_1c8;
  code *pcStack_1c0;
  int *local_1b8;
  undefined8 local_1b0;
  code *pcStack_1a8;
  char *local_1a0;
  code *pcStack_198;
  int *local_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  code *pcStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *local_158;
  undefined1 *local_128;
  int local_120;
  uint local_11c;
  undefined1 local_118 [128];
  undefined4 local_98;
  undefined1 local_88 [96];
  
  lVar6 = FUN_144f5a430(param_2,0x3a);
  if (lVar6 == 0) {
    uVar13 = (undefined4)*param_2;
    uVar14 = *(undefined4 *)((longlong)param_2 + 4);
    uVar15 = (undefined4)param_2[1];
    uVar16 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_1c8 = (char *)0x0;
    pcStack_1c0 = (code *)0x0;
  }
  else {
    uVar1 = *param_2;
    pcStack_1c0 = (code *)param_2[1];
    local_1c8 = (char *)(lVar6 + 1);
    local_1d8._0_4_ = (undefined4)uVar1;
    local_1d8._4_4_ = (undefined4)(uVar1 >> 0x20);
    uStack_1d0._0_4_ = (undefined4)lVar6;
    uStack_1d0._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
    uVar13 = (undefined4)local_1d8;
    uVar14 = local_1d8._4_4_;
    uVar15 = (undefined4)uStack_1d0;
    uVar16 = uStack_1d0._4_4_;
    local_1d8 = uVar1;
    uStack_1d0 = (code *)lVar6;
  }
  pcVar3 = pcStack_1c0;
  pcVar2 = local_1c8;
  local_1e8[0] = 0;
  *(undefined4 *)param_2 = uVar13;
  *(undefined4 *)((longlong)param_2 + 4) = uVar14;
  *(undefined4 *)(param_2 + 1) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar16;
  lVar6 = FUN_144f5a430(param_2,0x2c);
  uVar12 = 0;
  iVar5 = -0x7ffbfda9;
  if (lVar6 != 0) {
    local_1d8 = *param_2;
    local_1c8 = (char *)(lVar6 + 1);
    pcStack_1c0 = (code *)param_2[1];
    uVar12 = 0;
    uStack_1d0 = (code *)lVar6;
    if (local_1c8 == (char *)0x0) goto LAB_144be2519;
    local_188 = (ulonglong)local_1c8;
    uStack_180 = (ulonglong)pcStack_1c0;
    piVar7 = (int *)FUN_144be1f90(&local_1e0,&local_188,local_1e8);
    local_res10[0] = *piVar7;
    if (-1 < local_res10[0]) {
      local_res10[0] = -0x7ffbfda9;
      uVar12 = -local_1e8[0];
      if ((int)-local_1e8[0] < 0) {
        uVar12 = local_1e8[0];
      }
      if (0x100 < (int)uVar12) {
        if (DAT_14c783cf0 != '\0') {
          lVar6 = FUN_144bdc640(&local_178,&DAT_14c783ca0,1);
          local_1d8 = 2;
          *(char **)(lVar6 + 0x38) = "Container\\String\\hkStringBuf.cpp";
          uStack_1d0 = FUN_144be3490;
          local_1c8 = "hkMath::abs(width) > 256";
          pcStack_1c0 = FUN_144bdef40;
          local_1b8 = local_res10;
          local_1b0 = 2;
          pcStack_1a8 = FUN_144be3490;
          *(undefined8 *)(lVar6 + 0x40) = 0x498;
          local_1a0 = "hkMath::abs(width) > 256";
          pcStack_198 = FUN_144bdef40;
          local_190 = local_1b8;
          uVar8 = FUN_144bdc480(lVar6,"HK_RETURN_RES_IF({}) returning {}. ",&local_1b0,0);
          local_1e0 = 0;
          FUN_144bdc480(uVar8,"Width field too large",&local_1e0,0);
          FUN_144bdc690(&local_178);
          iVar5 = local_res10[0];
        }
        goto LAB_144be27fe;
      }
      *(undefined4 *)param_2 = (undefined4)local_1d8;
      *(undefined4 *)((longlong)param_2 + 4) = local_1d8._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_1d0;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1d0._4_4_;
      uVar12 = local_1e8[0];
      goto LAB_144be2519;
    }
    if (DAT_14c783cf0 == '\0') goto LAB_144be2415;
    lVar6 = FUN_144bdc640(&local_178,&DAT_14c783ca0,1);
    *(char **)(lVar6 + 0x38) = "Container\\String\\hkStringBuf.cpp";
    uStack_1d0 = FUN_144be3470;
    local_1c8 = "parseSignedDecimal(numAndWidth.right, &width)";
    *(undefined8 *)(lVar6 + 0x40) = 0x497;
LAB_144be238b:
    local_1d8 = 2;
    pcStack_1c0 = FUN_144bdef40;
    local_1b8 = local_res10;
    local_1b0 = 2;
    pcStack_1a8 = uStack_1d0;
    pcStack_198 = FUN_144bdef40;
    local_1a0 = local_1c8;
    local_190 = local_1b8;
    uVar8 = FUN_144bdc480(lVar6,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_1b0,0);
    local_1e0 = 0;
    FUN_144bdc480(uVar8,&DAT_14996de1b,&local_1e0,0);
    FUN_144bdc690(&local_178);
LAB_144be2415:
    *param_1 = local_res10[0];
    return param_1;
  }
LAB_144be2519:
  local_1e8[0] = param_4;
  if (*param_2 != param_2[1]) {
    local_188 = *param_2;
    uStack_180 = param_2[1];
    piVar7 = (int *)FUN_144be1d70(&local_1e0,&local_188,local_1e8);
    local_res10[0] = *piVar7;
    if (local_res10[0] < 0) {
      if (DAT_14c783cf0 == '\0') goto LAB_144be2415;
      lVar6 = FUN_144bdc640(&local_178,&DAT_14c783ca0,1);
      *(char **)(lVar6 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      uStack_1d0 = FUN_144be34b0;
      local_1c8 = "parseUnsignedDecimal(spec, &num)";
      *(undefined8 *)(lVar6 + 0x40) = 0x4a0;
      goto LAB_144be238b;
    }
  }
  local_res10[0] = -0x7ffbfda9;
  *param_6 = local_1e8[0];
  if (*param_3 <= (ulonglong)local_1e8[0]) {
    if (DAT_14c783cf0 != '\0') {
      lVar6 = FUN_144bdc640(local_88,&DAT_14c783ca0,CONCAT71((uint7)(uint3)(local_1e8[0] >> 8),1));
      local_1b0 = 2;
      *(char **)(lVar6 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      pcStack_1a8 = FUN_144be34d0;
      local_1a0 = "num >= args.getSize()";
      pcStack_198 = FUN_144bdef40;
      local_190 = local_res10;
      local_178 = 2;
      pcStack_170 = FUN_144be34d0;
      *(undefined8 *)(lVar6 + 0x40) = 0x4a6;
      local_168 = 0x49981dc0;
      uStack_164 = 1;
      uStack_160 = 0x44bdef40;
      uStack_15c = 1;
      local_158 = local_190;
      uVar8 = FUN_144bdc480(lVar6,"HK_RETURN_RES_IF({}) returning {}. ",&local_178,0);
      local_1e0 = 0;
      FUN_144bdc480(uVar8,&DAT_14996de1b,&local_1e0,0);
      FUN_144bdc690(local_88);
      iVar5 = local_res10[0];
    }
    goto LAB_144be27fe;
  }
  FUN_144f62830(param_3,&local_1d8);
  if (local_1d8 == 0) {
    iVar5 = FUN_144bfbbb0("(NullVar)");
    iVar10 = (int)param_5[1] + -1;
    FUN_144bdfcf0(param_5,iVar5 + iVar10);
    FUN_144bfbee0((longlong)iVar10 + *param_5,"(NullVar)",
                  (longlong)(((int)param_5[1] - iVar10) + -1));
    *param_1 = -0x7ffbfda9;
    if (((ulonglong)local_1c8 & 1) == 0) {
      return param_1;
    }
    FUN_144be6b30((ulonglong)local_1c8 & 0xfffffffffffffffe);
    return param_1;
  }
  local_128 = local_118;
  local_11c = 0x80000080;
  local_120 = 1;
  local_98 = (undefined4)param_5[0x12];
  local_118[0] = 0;
  local_188 = (ulonglong)pcVar2;
  uStack_180 = (ulonglong)pcVar3;
  FUN_144bec240(&local_1d8,&local_128,&local_188);
  puVar4 = local_128;
  iVar5 = local_120 + -1;
  uVar11 = -uVar12;
  if ((int)-uVar12 < 0) {
    uVar11 = uVar12;
  }
  iVar10 = uVar11 - iVar5;
  if (iVar10 < 1) {
LAB_144be2773:
    puVar4 = local_128;
    if (local_128 != (undefined1 *)0x0) {
      if (iVar5 < 0) {
        iVar5 = FUN_144bfbbb0(local_128);
      }
      iVar10 = (int)param_5[1] + -1;
      FUN_144bdfcf0(param_5,iVar10 + iVar5);
      FUN_144bfbee0((longlong)iVar10 + *param_5,puVar4,(longlong)(((int)param_5[1] - iVar10) + -1));
    }
  }
  else {
    if (0 < (int)uVar12) {
      FUN_144be0790(param_5,iVar10,0x20);
      iVar5 = local_120 + -1;
      goto LAB_144be2773;
    }
    if (local_128 != (undefined1 *)0x0) {
      if (iVar5 < 0) {
        iVar5 = FUN_144bfbbb0(local_128);
      }
      iVar9 = (int)param_5[1] + -1;
      FUN_144bdfcf0(param_5,iVar9 + iVar5);
      FUN_144bfbee0((longlong)iVar9 + *param_5,puVar4,(longlong)(((int)param_5[1] - iVar9) + -1));
    }
    FUN_144be0790(param_5,iVar10,0x20);
  }
  local_120 = 0;
  if ((-1 < (int)local_11c) && (local_128 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_128,local_11c & 0x7fffffff);
  }
  local_128 = (undefined1 *)0x0;
  local_11c = 0x80000000;
  iVar5 = 0;
  if (((ulonglong)local_1c8 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_1c8 & 0xfffffffffffffffe);
    iVar5 = 0;
  }
LAB_144be27fe:
  *param_1 = iVar5;
  return param_1;
}



// FUNCTION 144be2880 FUN_144be2880 body=1510 status=ok
// SIG undefined FUN_144be2880(void)

int * FUN_144be2880(int *param_1,longlong *param_2,ulonglong *param_3,int param_4,longlong *param_5,
                   int *param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int local_res10 [2];
  int local_1a8 [2];
  undefined8 local_1a0;
  longlong local_198;
  code *pcStack_190;
  undefined8 local_188;
  code *pcStack_180;
  int *local_178;
  undefined8 local_170;
  code *pcStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  undefined1 *local_118;
  int local_110;
  uint local_10c;
  undefined1 local_108 [128];
  undefined4 local_88;
  undefined1 local_78 [80];
  
  lVar3 = FUN_144f5a430(param_2,0x3a);
  if (lVar3 == 0) {
    local_148._0_4_ = (undefined4)*param_2;
    local_148._4_4_ = *(undefined4 *)((longlong)param_2 + 4);
    uStack_140._0_4_ = (undefined4)param_2[1];
    uStack_140._4_4_ = *(undefined4 *)((longlong)param_2 + 0xc);
    local_138 = 0;
    lStack_130 = 0;
  }
  else {
    lStack_130 = param_2[1];
    local_138 = lVar3 + 1;
    local_148._0_4_ = (undefined4)*param_2;
    local_148._4_4_ = (undefined4)((ulonglong)*param_2 >> 0x20);
    uStack_140._0_4_ = (undefined4)lVar3;
    uStack_140._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  }
  local_1a8[0] = 0;
  *(undefined4 *)param_2 = (undefined4)local_148;
  *(undefined4 *)((longlong)param_2 + 4) = local_148._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_140._4_4_;
  local_148 = local_138;
  uStack_140 = lStack_130;
  lVar3 = FUN_144f5a430(param_2,0x2c);
  iVar7 = 0;
  iVar8 = -0x7ffbfda9;
  if (lVar3 != 0) {
    local_198 = *param_2;
    local_188 = (char *)(lVar3 + 1);
    pcStack_180 = (code *)param_2[1];
    iVar7 = 0;
    pcStack_190 = (code *)lVar3;
    if (local_188 == (char *)0x0) goto LAB_144be2b3f;
    local_128 = (longlong)local_188;
    lStack_120 = (longlong)pcStack_180;
    piVar4 = (int *)FUN_144be1f90(&local_1a0,&local_128,local_1a8);
    local_res10[0] = *piVar4;
    if (-1 < local_res10[0]) {
      local_res10[0] = -0x7ffbfda9;
      iVar7 = -local_1a8[0];
      if (-local_1a8[0] < 0) {
        iVar7 = local_1a8[0];
      }
      if (0x100 < iVar7) {
        if (DAT_14c783cf0 != '\0') {
          lVar3 = FUN_144bdc640(local_78,&DAT_14c783ca0,1);
          local_198 = 2;
          *(char **)(lVar3 + 0x38) = "Container\\String\\hkStringBuf.cpp";
          pcStack_190 = FUN_144be3490;
          local_188 = "hkMath::abs(width) > 256";
          pcStack_180 = FUN_144bdef40;
          local_178 = local_res10;
          local_170 = 2;
          pcStack_168 = FUN_144be3490;
          *(undefined8 *)(lVar3 + 0x40) = 0x4de;
          local_160 = 0x49981d60;
          uStack_15c = 1;
          uStack_158 = 0x44bdef40;
          uStack_154 = 1;
          local_150 = local_178;
          uVar5 = FUN_144bdc480(lVar3,"HK_RETURN_RES_IF({}) returning {}. ",&local_170,0);
          local_1a0 = 0;
          FUN_144bdc480(uVar5,"Width field too large",&local_1a0,0);
          FUN_144bdc690(local_78);
          iVar8 = local_res10[0];
        }
        goto LAB_144be2def;
      }
      *param_2 = local_198;
      param_2[1] = (longlong)pcStack_190;
      iVar7 = local_1a8[0];
      goto LAB_144be2b3f;
    }
    if (DAT_14c783cf0 == '\0') goto LAB_144be2a3c;
    lVar3 = FUN_144bdc640(local_78,&DAT_14c783ca0,1);
    *(char **)(lVar3 + 0x38) = "Container\\String\\hkStringBuf.cpp";
    pcStack_190 = FUN_144be3470;
    pcVar6 = "parseSignedDecimal(numAndWidth.right, &width)";
    *(undefined8 *)(lVar3 + 0x40) = 0x4dd;
LAB_144be29b2:
    local_198 = 2;
    pcStack_180 = FUN_144bdef40;
    local_188._0_4_ = SUB84(pcVar6,0);
    local_188._4_4_ = (undefined4)((ulonglong)pcVar6 >> 0x20);
    local_178 = local_res10;
    local_170 = 2;
    pcStack_168 = pcStack_190;
    local_160 = (undefined4)local_188;
    uStack_15c = local_188._4_4_;
    uStack_158 = 0x44bdef40;
    uStack_154 = 1;
    local_188 = pcVar6;
    local_150 = local_178;
    uVar5 = FUN_144bdc480(lVar3,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_170,0);
    local_1a0 = 0;
    FUN_144bdc480(uVar5,&DAT_14996de1b,&local_1a0,0);
    FUN_144bdc690(local_78);
LAB_144be2a3c:
    *param_1 = local_res10[0];
    return param_1;
  }
LAB_144be2b3f:
  local_1a8[0] = param_4;
  if (*param_2 != param_2[1]) {
    local_128 = *param_2;
    lStack_120 = param_2[1];
    piVar4 = (int *)FUN_144be1d70(&local_1a0,&local_128,local_1a8);
    local_res10[0] = *piVar4;
    if (local_res10[0] < 0) {
      if (DAT_14c783cf0 == '\0') goto LAB_144be2a3c;
      lVar3 = FUN_144bdc640(local_78,&DAT_14c783ca0,1);
      *(char **)(lVar3 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      pcStack_190 = FUN_144be34b0;
      pcVar6 = "parseUnsignedDecimal(spec, &num)";
      *(undefined8 *)(lVar3 + 0x40) = 0x4e6;
      goto LAB_144be29b2;
    }
  }
  local_res10[0] = -0x7ffbfda9;
  *param_6 = local_1a8[0];
  if (*param_3 <= (ulonglong)(uint)(param_7 + local_1a8[0])) {
    if (DAT_14c783cf0 != '\0') {
      lVar3 = FUN_144bdc640(local_78,&DAT_14c783ca0,1);
      local_198 = 2;
      *(char **)(lVar3 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      pcStack_190 = FUN_144be34f0;
      local_188 = "num + skipArg >= args.getSize()";
      pcStack_180 = FUN_144bdef40;
      local_178 = local_res10;
      local_170 = 2;
      pcStack_168 = FUN_144be34f0;
      *(undefined8 *)(lVar3 + 0x40) = 0x4ec;
      local_160 = 0x49981de8;
      uStack_15c = 1;
      uStack_158 = 0x44bdef40;
      uStack_154 = 1;
      local_150 = local_178;
      uVar5 = FUN_144bdc480(lVar3,"HK_RETURN_RES_IF({}) returning {}. ",&local_170,0);
      local_1a0 = 0;
      FUN_144bdc480(uVar5,&DAT_14996de1b,&local_1a0,0);
      FUN_144bdc690(local_78);
      iVar8 = local_res10[0];
    }
    goto LAB_144be2def;
  }
  local_118 = local_108;
  iVar8 = (param_7 + local_1a8[0]) * 2;
  local_10c = 0x80000080;
  local_110 = 1;
  local_88 = (undefined4)param_5[0x12];
  local_108[0] = 0;
  piVar4 = (int *)(*(code *)param_3[(longlong)iVar8 + 1])
                            (local_res10,param_3[iVar8 + 2],&local_148,&local_118);
  puVar1 = local_118;
  if (*piVar4 < 0) {
    *param_1 = *piVar4;
    local_110 = 0;
    if ((int)local_10c < 0) {
      return param_1;
    }
    if (local_118 == (undefined1 *)0x0) {
      return param_1;
    }
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_118,local_10c & 0x7fffffff);
    return param_1;
  }
  iVar2 = local_110 + -1;
  iVar8 = -iVar7;
  if (-iVar7 < 0) {
    iVar8 = iVar7;
  }
  iVar8 = iVar8 - iVar2;
  if (iVar8 < 1) {
LAB_144be2d80:
    puVar1 = local_118;
    if (local_118 != (undefined1 *)0x0) {
      if (iVar2 < 0) {
        iVar2 = FUN_144bfbbb0(local_118);
      }
      iVar7 = (int)param_5[1] + -1;
      FUN_144bdfcf0(param_5,iVar7 + iVar2);
      FUN_144bfbee0((longlong)iVar7 + *param_5,puVar1,(longlong)(((int)param_5[1] - iVar7) + -1));
    }
  }
  else {
    if (0 < iVar7) {
      FUN_144be0790(param_5,iVar8,0x20);
      iVar2 = local_110 + -1;
      goto LAB_144be2d80;
    }
    if (local_118 != (undefined1 *)0x0) {
      if (iVar2 < 0) {
        iVar2 = FUN_144bfbbb0(local_118);
      }
      iVar7 = (int)param_5[1] + -1;
      FUN_144bdfcf0(param_5,iVar7 + iVar2);
      FUN_144bfbee0((longlong)iVar7 + *param_5,puVar1,(longlong)(((int)param_5[1] - iVar7) + -1));
    }
    FUN_144be0790(param_5,iVar8,0x20);
  }
  iVar8 = 0;
  local_110 = 0;
  if ((-1 < (int)local_10c) && (local_118 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_118,local_10c & 0x7fffffff);
  }
LAB_144be2def:
  *param_1 = iVar8;
  return param_1;
}



// FUNCTION 144be2e70 FUN_144be2e70 body=772 status=ok
// SIG undefined FUN_144be2e70(void)

undefined4 * FUN_144be2e70(uint *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined7 uVar8;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  undefined8 local_88;
  code *local_80;
  char *local_78;
  code *local_70;
  undefined4 *local_68;
  undefined1 local_60 [88];
  
  pcVar7 = *(char **)(param_1 + 6);
  cVar3 = *pcVar7;
  pcVar2 = pcVar7;
  while (cVar3 != '\0') {
    pcVar1 = pcVar2 + 1;
    uVar8 = (undefined7)((ulonglong)pcVar1 >> 8);
    if (cVar3 == '{') {
      if (*pcVar1 == '{') {
LAB_144be2faa:
        *(char **)(param_1 + 2) = pcVar7;
        *(char **)(param_1 + 4) = pcVar1;
        *(char **)(param_1 + 6) = pcVar2 + 2;
        *param_1 = 1;
        goto LAB_144be2ed5;
      }
      if (pcVar7 != pcVar2) {
        *(char **)(param_1 + 2) = pcVar7;
        *(char **)(param_1 + 4) = pcVar2;
        *param_1 = 1;
        goto LAB_144be2ed5;
      }
      *(char **)(param_1 + 6) = pcVar1;
      cVar3 = *pcVar1;
      pcVar7 = pcVar1;
      goto joined_r0x000144be2ff1;
    }
    if (cVar3 == '}') {
      local_res8[0] = 0x8004ffff;
      if (*pcVar1 == '}') goto LAB_144be2faa;
      uVar4 = 0x8004ffff;
      if (DAT_14c783cf0 != '\0') {
        lVar5 = FUN_144bdc640(local_60,&DAT_14c783ca0,CONCAT71(uVar8,1));
        local_88 = 2;
        *(char **)(lVar5 + 0x38) = "Container\\String\\hkStringBuf.cpp";
        local_80 = FUN_144be3510;
        local_78 = "m_fmt[1] != \'}\'";
        local_70 = FUN_144bdef40;
        local_68 = local_res8;
        *(undefined8 *)(lVar5 + 0x40) = 0x53c;
        uVar6 = FUN_144bdc480(lVar5,"HK_RETURN_RES_IF({}) returning {}. ",&local_88,0);
        local_res18 = 0;
        FUN_144bdc480(uVar6,"Unescaped right curly brace",&local_res18,0);
        FUN_144bdc690(local_60);
        uVar4 = local_res8[0];
      }
      goto LAB_144be2fa3;
    }
    *(char **)(param_1 + 6) = pcVar1;
    pcVar2 = pcVar1;
    cVar3 = *pcVar1;
  }
  *(char **)(param_1 + 2) = pcVar7;
  *(char **)(param_1 + 4) = pcVar2;
  *param_1 = (uint)(pcVar7 != pcVar2);
LAB_144be2ed5:
  *param_2 = 0;
  return param_2;
joined_r0x000144be2ff1:
  if (cVar3 == '\0') {
    uVar4 = 0x8004ffff;
    local_res8[0] = 0x8004ffff;
    if (DAT_14c783cf0 == '\0') {
LAB_144be2fa3:
      *param_2 = uVar4;
    }
    else {
      lVar5 = FUN_144bdc640(local_60,&DAT_14c783ca0,CONCAT71(uVar8,1));
      local_88 = 2;
      *(char **)(lVar5 + 0x38) = "Container\\String\\hkStringBuf.cpp";
      local_80 = FUN_144be3530;
      local_78 = "true";
      local_70 = FUN_144bdef40;
      local_68 = local_res8;
      *(undefined8 *)(lVar5 + 0x40) = 0x56c;
      uVar6 = FUN_144bdc480(lVar5,"HK_RETURN_RES_IF({}) returning {}. ",&local_88,0);
      pcVar7 = "Truncated placeholder string";
LAB_144be30a5:
      local_res18 = 0;
      FUN_144bdc480(uVar6,pcVar7,&local_res18,0);
      FUN_144bdc690(local_60);
      *param_2 = local_res8[0];
    }
    return param_2;
  }
  if (cVar3 == '{') {
    uVar4 = 0x8004ffff;
    local_res8[0] = 0x8004ffff;
    if (DAT_14c783cf0 == '\0') goto LAB_144be2fa3;
    lVar5 = FUN_144bdc640(local_60,&DAT_14c783ca0,CONCAT71(uVar8,1));
    local_88 = 2;
    *(char **)(lVar5 + 0x38) = "Container\\String\\hkStringBuf.cpp";
    local_80 = FUN_144be3530;
    local_78 = "true";
    local_70 = FUN_144bdef40;
    local_68 = local_res8;
    *(undefined8 *)(lVar5 + 0x40) = 0x568;
    uVar6 = FUN_144bdc480(lVar5,"HK_RETURN_RES_IF({}) returning {}. ",&local_88,0);
    pcVar7 = "Left curly brace within placeholder";
    goto LAB_144be30a5;
  }
  pcVar2 = pcVar7 + 1;
  if (cVar3 == '}') {
    *param_1 = 2;
    *(char **)(param_1 + 2) = pcVar1;
    *(char **)(param_1 + 4) = pcVar7;
    *(char **)(param_1 + 6) = pcVar2;
    goto LAB_144be2ed5;
  }
  *(char **)(param_1 + 6) = pcVar2;
  cVar3 = *pcVar2;
  pcVar7 = pcVar2;
  goto joined_r0x000144be2ff1;
}



// FUNCTION 144be3180 FUN_144be3180 body=235 status=ok
// SIG undefined FUN_144be3180(void)

void FUN_144be3180(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144be3270 FUN_144be3270 body=150 status=ok
// SIG undefined FUN_144be3270(void)

void FUN_144be3270(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144be3310 FUN_144be3310 body=221 status=ok
// SIG undefined FUN_144be3310(void)

void FUN_144be3310(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1));
  uVar1 = uVar3 + 1;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 1;
    uVar4 = uVar1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar1 + (local_res8 - uVar3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144be33f0 FUN_144be33f0 body=32 status=ok
// SIG undefined FUN_144be33f0(void)

undefined8 FUN_144be33f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3410 FUN_144be3410 body=32 status=ok
// SIG undefined FUN_144be3410(void)

undefined8 FUN_144be3410(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3430 FUN_144be3430 body=32 status=ok
// SIG undefined FUN_144be3430(void)

undefined8 FUN_144be3430(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3450 FUN_144be3450 body=32 status=ok
// SIG undefined FUN_144be3450(void)

undefined8 FUN_144be3450(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3470 FUN_144be3470 body=32 status=ok
// SIG undefined FUN_144be3470(void)

undefined8 FUN_144be3470(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3490 FUN_144be3490 body=32 status=ok
// SIG undefined FUN_144be3490(void)

undefined8 FUN_144be3490(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be34b0 FUN_144be34b0 body=32 status=ok
// SIG undefined FUN_144be34b0(void)

undefined8 FUN_144be34b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be34d0 FUN_144be34d0 body=32 status=ok
// SIG undefined FUN_144be34d0(void)

undefined8 FUN_144be34d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be34f0 FUN_144be34f0 body=32 status=ok
// SIG undefined FUN_144be34f0(void)

undefined8 FUN_144be34f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3510 FUN_144be3510 body=32 status=ok
// SIG undefined FUN_144be3510(void)

undefined8 FUN_144be3510(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3530 FUN_144be3530 body=32 status=ok
// SIG undefined FUN_144be3530(void)

undefined8 FUN_144be3530(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144be3550 FUN_144be3550 body=136 status=ok
// SIG undefined FUN_144be3550(void)

undefined4 *
FUN_144be3550(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_3;
  if ((uVar1 & 0xfffffffffffffffe) != param_5) {
    if (param_5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_144bfbdc0();
      uVar2 = uVar2 | 1;
    }
    *param_3 = uVar2;
    if ((uVar1 & 1) != 0) {
      (*DAT_14c787678)(0,uVar1 - 1,0);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144be35e0 FUN_144be35e0 body=25 status=ok
// SIG undefined FUN_144be35e0(void)

undefined4 *
FUN_144be35e0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1 & 0xfffffffffffffffe;
  return param_2;
}



// FUNCTION 144be3600 FUN_144be3600 body=18 status=ok
// SIG undefined FUN_144be3600(void)

undefined4 *
FUN_144be3600(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144be3620 FUN_144be3620 body=24 status=ok
// SIG undefined FUN_144be3620(void)

void FUN_144be3620(undefined8 param_1,ulonglong *param_2)

{
  if ((*param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144be3630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c787678)(0,*param_2 - 1,0);
    return;
  }
  return;
}



// FUNCTION 144be3640 FUN_144be3640 body=87 status=ok
// SIG undefined FUN_144be3640(void)

undefined8 FUN_144be3640(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144be36a0 FUN_144be36a0 body=88 status=ok
// SIG undefined FUN_144be36a0(void)

ulonglong * FUN_144be36a0(ulonglong *param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  if (((param_2 != 0) || (param_3 != -1)) && (param_2 != 0)) {
    if (param_3 < 0) {
      uVar1 = FUN_144bfbdc0();
      *param_1 = uVar1 | 1;
      return param_1;
    }
    uVar1 = FUN_144bfbe30(param_2,param_3);
    *param_1 = uVar1 | 1;
  }
  return param_1;
}



// FUNCTION 144be3700 FUN_144be3700 body=46 status=ok
// SIG undefined FUN_144be3700(void)

ulonglong * FUN_144be3700(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  if ((*param_2 & 0xfffffffffffffffe) != 0) {
    uVar1 = FUN_144bfbdc0();
    *param_1 = uVar1 | 1;
  }
  return param_1;
}



// FUNCTION 144be3730 FUN_144be3730 body=87 status=ok
// SIG undefined FUN_144be3730(void)

ulonglong * FUN_144be3730(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffffffffffe) != param_2) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_144bfbdc0(param_2);
      uVar2 = uVar2 | 1;
    }
    *param_1 = uVar2;
    if ((uVar1 & 1) != 0) {
      (*DAT_14c787678)(0,uVar1 - 1,0);
    }
  }
  return param_1;
}



// FUNCTION 144be3790 FUN_144be3790 body=120 status=ok
// SIG undefined FUN_144be3790(void)

ulonglong * FUN_144be3790(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  iVar3 = (int)param_2[1] + -1;
  uVar1 = *param_1;
  if (((uVar1 & 0xfffffffffffffffe) != uVar2) || (iVar3 != -1)) {
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else if (iVar3 < 0) {
      uVar2 = FUN_144bfbdc0(uVar2);
      uVar2 = uVar2 | 1;
    }
    else {
      uVar2 = FUN_144bfbe30(uVar2,iVar3);
      uVar2 = uVar2 | 1;
    }
    *param_1 = uVar2;
    if ((uVar1 & 1) != 0) {
      (*DAT_14c787678)(0,uVar1 - 1,0);
    }
  }
  return param_1;
}



// FUNCTION 144be3810 FUN_144be3810 body=91 status=ok
// SIG undefined FUN_144be3810(void)

ulonglong * FUN_144be3810(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffffffffffe) != (*param_2 & 0xfffffffffffffffe)) {
    if ((*param_2 & 0xfffffffffffffffe) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_144bfbdc0();
      uVar2 = uVar2 | 1;
    }
    *param_1 = uVar2;
    if ((uVar1 & 1) != 0) {
      (*DAT_14c787678)(0,uVar1 - 1,0);
    }
  }
  return param_1;
}



// FUNCTION 144be3870 FUN_144be3870 body=16 status=ok
// SIG undefined FUN_144be3870(void)

longlong FUN_144be3870(ulonglong *param_1)

{
  longlong lVar1;
  
  if ((*param_1 & 0xfffffffffffffffe) == 0) {
    return 0;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)((*param_1 & 0xfffffffffffffffe) + lVar1) != '\0');
  return lVar1;
}



// FUNCTION 144be3880 FUN_144be3880 body=111 status=ok
// SIG undefined FUN_144be3880(void)

void FUN_144be3880(ulonglong *param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 & 0xfffffffffffffffe) != param_2) || (param_3 != -1)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else if (param_3 < 0) {
      uVar2 = FUN_144bfbdc0();
      uVar2 = uVar2 | 1;
    }
    else {
      uVar2 = FUN_144bfbe30(param_2,param_3);
      uVar2 = uVar2 | 1;
    }
    *param_1 = uVar2;
    if ((uVar1 & 1) != 0) {
      (*DAT_14c787678)(0,uVar1 - 1,0);
    }
  }
  return;
}



// FUNCTION 144be38f0 FUN_144be38f0 body=64 status=ok
// SIG undefined FUN_144be38f0(void)

void FUN_144be38f0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffffffffffe) != param_2) {
    if ((uVar1 & 1) != 0) {
      (*DAT_14c787678)(0,uVar1 - 1,0);
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 144be3930 FUN_144be3930 body=111 status=ok
// SIG undefined FUN_144be3930(void)

undefined8 * FUN_144be3930(undefined8 *param_1)

{
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkTaskGraph::vftable;
  param_1[3] = param_1 + 5;
  param_1[0x65] = param_1 + 0x67;
  param_1[0x77] = param_1 + 0x79;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000020;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x80000020;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x80000020;
  return param_1;
}



// FUNCTION 144be39a0 FUN_144be39a0 body=313 status=ok
// SIG undefined FUN_144be39a0(void)

void FUN_144be39a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkTaskGraph::vftable;
  lVar2 = param_1[0x77];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x78) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c4)) && (param_1[0x77] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x77],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c4) & 0x7fffffff) << 3);
  }
  param_1[0x77] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x66) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x334)) && (param_1[0x65] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x65],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x334) & 0x7fffffff) << 2);
  }
  param_1[0x65] = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144be3ae0 FUN_144be3ae0 body=142 status=ok
// SIG undefined FUN_144be3ae0(void)

undefined2 *
FUN_144be3ae0(longlong param_1,undefined2 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  *param_2 = *(undefined2 *)(param_1 + 0x20);
  iVar3 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar3) {
    FUN_144be4470((longlong *)(param_1 + 0x18),&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar3;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 8 + lVar2 * 0x18) = param_4;
  *(undefined8 *)(lVar1 + lVar2 * 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x10 + lVar2 * 0x18) = 0;
  return param_2;
}



// FUNCTION 144be3b70 FUN_144be3b70 body=185 status=ok
// SIG undefined FUN_144be3b70(void)

undefined8 FUN_144be3b70(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  iVar2 = *(int *)(param_1 + 0x3c0) + 1;
  if ((int)(*(uint *)(param_1 + 0x3c4) & 0x7fffffff) < iVar2) {
    FUN_144be4330((longlong *)(param_1 + 0x3b8),&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x3b8) + (longlong)*(int *)(param_1 + 0x3c0) * 8);
  if (plVar1 == (longlong *)0x0) {
    *(int *)(param_1 + 0x3c0) = iVar2;
    if (param_3 != 0) {
      FUN_144b3f230(param_3);
    }
  }
  else {
    *plVar1 = param_3;
    *(int *)(param_1 + 0x3c0) = iVar2;
  }
  lVar3 = param_3 + 0x20;
  if (param_3 == 0) {
    lVar3 = 0;
  }
  FUN_144be3ae0(param_1,param_2,lVar3,param_4);
  return param_2;
}



// FUNCTION 144be3c30 FUN_144be3c30 body=122 status=ok
// SIG undefined FUN_144be3c30(void)

void FUN_144be3c30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x3b8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x3c0) * 8;
  if (lVar3 == lVar2) {
    *(undefined4 *)(param_1 + 0x3c0) = 0;
  }
  else {
    do {
      plVar1 = (longlong *)(lVar3 + -8);
      lVar3 = lVar3 + -8;
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    } while (lVar3 != lVar2);
    *(undefined4 *)(param_1 + 0x3c0) = 0;
  }
  return;
}



// FUNCTION 144be3cb0 FUN_144be3cb0 body=775 status=ok
// SIG undefined FUN_144be3cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144be3cb0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *local_1038;
  int local_1030;
  uint local_102c;
  undefined1 local_1028 [4088];
  undefined8 uStack_30;
  
  uStack_30 = 0x144be3cda;
  FUN_144be90e0(0x86810496);
  iVar5 = FUN_144be40a0(param_1);
  FUN_144be90e0(0xf8fc114d);
  lVar10 = (longlong)*(int *)(param_1 + 0x20);
  iVar9 = 0;
  iVar3 = *(int *)(param_1 + 0x330);
  if (lVar10 < 1) {
    local_1038 = local_1028;
    local_102c = 0x80000100;
  }
  else {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    lVar7 = lVar10;
    do {
      iVar4 = iVar9 + 1;
      if (*plVar6 != 0) {
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      lVar7 = lVar7 + -1;
      plVar6 = plVar6 + 3;
    } while (lVar7 != 0);
    local_1030 = 0;
    local_1038 = local_1028;
    local_102c = 0x80000100;
    if (0x100 < iVar9) {
      FUN_144be4670(&local_1038,&PTR_vftable_14c6e47c0,(longlong)iVar9);
    }
  }
  local_1030 = iVar9;
  (**(code **)(*param_2 + 0x10))(param_2,local_1038,iVar9);
  if (0 < lVar10) {
    lVar8 = 0;
    lVar11 = 0;
    lVar7 = lVar10;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar8) == 0) {
        puVar1 = (undefined8 *)(local_1038 + lVar11);
        lVar11 = lVar11 + 8;
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar8) = *puVar1;
      }
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  local_1030 = 0;
  if ((-1 < (int)local_102c) && (local_1038 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0);
  }
  FUN_144be90e0(0x87a134ac);
  if (0 < lVar10) {
    lVar7 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x18);
      (**(code **)(*param_2 + 0x20))
                (param_2,*(undefined8 *)(lVar7 + 0x10 + lVar8),*(undefined8 *)(lVar7 + lVar8),
                 *(undefined1 *)(lVar7 + 8 + lVar8));
      lVar7 = lVar7 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  FUN_144be90e0(0x24526dfc);
  if (0 < iVar3) {
    local_1038 = local_1028;
    local_102c = 0x80000100;
    local_1030 = 0;
    if (0x100 < iVar3) {
      FUN_144be4770(&local_1038,&PTR_vftable_14c6e47c0);
    }
    if ((local_1030 < iVar3) || (iVar3 < local_1030)) {
      local_1030 = iVar3;
    }
    lVar10 = 0;
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        puVar2 = (ushort *)(*(longlong *)(param_1 + 0x328) + lVar10 * 4);
        lVar10 = lVar10 + 1;
        *(undefined8 *)(local_1038 + lVar7) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + (ulonglong)*puVar2 * 0x18);
        *(undefined8 *)(local_1038 + lVar7 + 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + (ulonglong)puVar2[1] * 0x18);
        lVar7 = lVar7 + 0x10;
      } while (lVar10 < iVar3);
    }
    (**(code **)(*param_2 + 0x30))(param_2,local_1038,iVar3);
    local_1030 = 0;
    if ((-1 < (int)local_102c) && (local_1038 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_1038,(ulonglong)(local_102c & 0x7fffffff) << 4);
    }
  }
  FUN_144be90e0(0xeb30a1da);
  (**(code **)(*param_2 + 0x38))
            (param_2,*(longlong *)(param_1 + 0x18) + 0x10,*(undefined4 *)(param_1 + 0x20),param_3,
             0x18);
  FUN_144be90e0(0x5707b48f);
  return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)iVar5 * 0x18);
}



// FUNCTION 144be3fc0 FUN_144be3fc0 body=120 status=ok
// SIG undefined FUN_144be3fc0(void)

void FUN_144be3fc0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = FUN_144be3cb0();
  (**(code **)(*param_2 + 0x50))(param_2,uVar1);
  if ((int)param_1[4] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,param_1[3] + 0x10,(int)param_1[4],0x18);
    uVar2 = 0;
    uVar4 = uVar2;
    if (0 < (int)param_1[4]) {
      do {
        uVar2 = uVar2 + 0x18;
        uVar3 = (int)uVar4 + 1;
        *(undefined8 *)(param_1[3] + -8 + uVar2) = 0;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)param_1[4]);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144be4034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 144be4040 FUN_144be4040 body=87 status=ok
// SIG undefined FUN_144be4040(void)

undefined8 FUN_144be4040(undefined8 param_1,ulonglong param_2)

{
  FUN_144be39a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 144be40a0 FUN_144be40a0 body=642 status=ok
// SIG undefined FUN_144be40a0(void)

uint FUN_144be40a0(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  undefined1 *local_428;
  int local_420;
  uint local_41c;
  undefined1 local_418 [1024];
  
  iVar8 = *(int *)(param_1 + 0x20);
  local_428 = local_418;
  local_420 = 0;
  local_41c = 0x80000400;
  iVar10 = 0;
  if (0x400 < iVar8) {
    FUN_144be4580(&local_428,&PTR_vftable_14c6e47a0);
    iVar10 = local_420;
  }
  local_420 = iVar8;
  if (iVar10 < iVar8) {
    puVar4 = local_428 + iVar10;
    uVar7 = (ulonglong)(uint)(iVar8 - iVar10);
    if (0 < iVar8 - iVar10) {
      do {
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 1;
        }
        uVar7 = uVar7 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar7 != 0);
    }
  }
  else {
    local_420 = iVar10;
    if (iVar8 < iVar10) {
      local_420 = iVar8;
    }
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x330)) {
    lVar5 = 0;
    do {
      iVar10 = iVar10 + 1;
      uVar1 = *(ushort *)(lVar5 + *(longlong *)(param_1 + 0x328));
      bVar12 = local_428[uVar1];
      local_428[uVar1] = 0;
      iVar8 = iVar8 - (uint)bVar12;
      lVar5 = lVar5 + 4;
    } while (iVar10 < *(int *)(param_1 + 0x330));
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (iVar8 == 1) {
    uVar9 = 0;
    lVar5 = 0;
    if (0 < (int)uVar2) {
      do {
        if (local_428[lVar5] != '\0') goto LAB_144be42d9;
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uVar2);
    }
    uVar9 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x20) + 1;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar8) {
      FUN_144be4470(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    lVar6 = (longlong)*(int *)(param_1 + 0x20);
    bVar11 = 0;
    *(int *)(param_1 + 0x20) = iVar8;
    iVar8 = 0;
    lVar5 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(lVar5 + lVar6 * 0x18) = 0;
    *(undefined1 *)(lVar5 + 8 + lVar6 * 0x18) = 0x40;
    *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x18) = 0;
    bVar12 = bVar11;
    if (0 < *(int *)(param_1 + 0x20) + -1) {
      do {
        bVar12 = *(byte *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar8 * 0x18);
        if (bVar12 < bVar11) {
          bVar12 = bVar11;
        }
        if (local_428[iVar8] != '\0') {
          iVar10 = *(int *)(param_1 + 0x330) + 1;
          if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) < iVar10) {
            FUN_141807bca((longlong *)(param_1 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar10);
          }
          iVar3 = *(int *)(param_1 + 0x330);
          lVar5 = *(longlong *)(param_1 + 0x328);
          *(int *)(param_1 + 0x330) = iVar10;
          *(short *)(lVar5 + (longlong)iVar3 * 4) = (short)iVar8;
          *(short *)(lVar5 + 2 + (longlong)iVar3 * 4) = (short)uVar2;
        }
        iVar8 = iVar8 + 1;
        bVar11 = bVar12;
      } while (iVar8 < *(int *)(param_1 + 0x20) + -1);
    }
    uVar9 = uVar2 & 0xffff;
    *(byte *)(*(longlong *)(param_1 + 0x18) + 8 + (ulonglong)(uVar2 & 0xffff) * 0x18) = bVar12;
  }
LAB_144be42d9:
  local_420 = 0;
  if ((-1 < (int)local_41c) && (local_428 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_428,local_41c & 0x7fffffff);
  }
  return uVar9;
}



// FUNCTION 144be4330 FUN_144be4330 body=310 status=ok
// SIG undefined FUN_144be4330(void)

void FUN_144be4330(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144be4470 FUN_144be4470 body=262 status=ok
// SIG undefined FUN_144be4470(void)

ulonglong FUN_144be4470(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x18,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x18);
  uVar3 = uVar4 * 0x18 + 0x18;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x18);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144be4580 FUN_144be4580 body=228 status=ok
// SIG undefined FUN_144be4580(void)

void FUN_144be4580(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1));
  uVar1 = uVar3 + 1;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 1;
    uVar4 = uVar1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar1 + (local_res8 - uVar3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144be4670 FUN_144be4670 body=247 status=ok
// SIG undefined FUN_144be4670(void)

void FUN_144be4670(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144be4770 FUN_144be4770 body=266 status=ok
// SIG undefined FUN_144be4770(void)

void FUN_144be4770(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144be4880 FUN_144be4880 body=305 status=ok
// SIG undefined FUN_144be4880(void)

void FUN_144be4880(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar3) {
    uVar7 = uVar3;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar7 * 8;
  puVar2 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  puVar4 = puVar2;
  puVar8 = puVar5;
  if (0 < (int)uVar1) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *puVar8;
        *puVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar3 != 0);
    do {
      FUN_144b49dd0(puVar5);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar3 = uVar7 * 8 + 8;
  uVar6 = uVar7;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar6 = uVar7 + 1;
    if (uVar3 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar7 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 144be49c0 FUN_144be49c0 body=3 status=ok
// SIG undefined FUN_144be49c0(void)

void FUN_144be49c0(void)

{
  return;
}



// FUNCTION 144be49d0 FUN_144be49d0 body=33 status=ok
// SIG undefined FUN_144be49d0(void)

void FUN_144be49d0(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_144f634e0(&DAT_149981fd8,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144be4a00 FUN_144be4a00 body=33 status=ok
// SIG undefined FUN_144be4a00(void)

void FUN_144be4a00(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_144f634e0(&DAT_1499820b0,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144be4a30 FUN_144be4a30 body=71 status=ok
// SIG undefined FUN_144be4a30(void)

undefined8 * FUN_144be4a30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTaskQueue::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144be4a80 FUN_144be4a80 body=30 status=ok
// SIG undefined FUN_144be4a80(void)

undefined8 * FUN_144be4a80(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = hkTrivialTaskQueue::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 144be4aa0 FUN_144be4aa0 body=102 status=ok
// SIG undefined FUN_144be4aa0(void)

void FUN_144be4aa0(undefined8 *param_1)

{
  *param_1 = hkTrivialTaskQueue::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 3);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = hkTaskQueue::vftable;
  return;
}



// FUNCTION 144be4b10 FUN_144be4b10 body=189 status=ok
// SIG undefined FUN_144be4b10(void)

void FUN_144be4b10(undefined8 param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_18 [2];
  
  if (0 < (int)param_3) {
    uVar3 = (ulonglong)param_3;
    do {
      local_18[0] = 0x38;
      puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_18,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar1,"HandleImpl");
      }
      puVar2 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[3] = puVar1 + 5;
        *(undefined1 *)(puVar1 + 1) = 0x40;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        *(undefined4 *)(puVar1 + 2) = 1;
        *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
        *(undefined4 *)(puVar1 + 4) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80000002;
        puVar2 = puVar1;
      }
      *param_2 = puVar2;
      param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 144be4bd0 FUN_144be4bd0 body=168 status=ok
// SIG undefined FUN_144be4bd0(void)

void FUN_144be4bd0(undefined8 param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3;
    do {
      lVar1 = *param_2;
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + 0x24)) && (*(longlong *)(lVar1 + 0x18) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(lVar1 + 0x18),
                     (ulonglong)(*(uint *)(lVar1 + 0x24) & 0x7fffffff) << 3);
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined4 *)(lVar1 + 0x24) = 0x80000000;
        (*DAT_14c787678)(0,lVar1,0);
      }
      *param_2 = 0;
      param_2 = (longlong *)((longlong)param_2 + (longlong)param_4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144be4c80 FUN_144be4c80 body=8 status=ok
// SIG undefined FUN_144be4c80(void)

void FUN_144be4c80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = param_4;
  return;
}



// FUNCTION 144be4c90 FUN_144be4c90 body=97 status=ok
// SIG undefined FUN_144be4c90(void)

void FUN_144be4c90(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x20) + 1;
  if ((int)(*(uint *)(param_2 + 0x24) & 0x7fffffff) < iVar2) {
    FUN_144be5490((longlong *)(param_2 + 0x18),&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_2 + 0x20) * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_3;
  }
  *(int *)(param_2 + 0x20) = iVar2;
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
  return;
}



// FUNCTION 144be4d00 FUN_144be4d00 body=141 status=ok
// SIG undefined FUN_144be4d00(void)

void FUN_144be4d00(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = iVar1 + param_3;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar5) {
    FUN_144be5390((longlong *)(param_1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(int *)(param_1 + 0x10) = iVar5;
  if (0 < param_3) {
    lVar4 = 0;
    do {
      uVar3 = *param_2;
      param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_5);
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 8 + lVar4 * 8) = uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_3);
  }
  return;
}



// FUNCTION 144be4d90 FUN_144be4d90 body=666 status=ok
// SIG undefined FUN_144be4d90(void)

void FUN_144be4d90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 local_res18;
  int local_res1c;
  longlong local_res20;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  
  plVar13 = (longlong *)0x0;
  iVar7 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_6c = 0x80000000;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar8 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar8 + *(longlong *)(param_1 + 8)) + 0xc) == 0) {
        FUN_144be5180();
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
      plVar13 = local_78;
      uVar9 = local_70;
    } while (iVar7 < *(int *)(param_1 + 0x10));
    do {
      if (uVar9 == 0) break;
      plVar11 = (longlong *)*plVar13;
      FUN_144be5250(&local_78);
      if (*plVar11 != 0) {
        iVar7 = 0;
        local_50 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_68 = param_1;
        if (0 < (int)plVar11[2]) {
          do {
            local_50 = iVar7;
            (**(code **)(*(longlong *)*plVar11 + 0x18))();
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)plVar11[2]);
        }
      }
      iVar7 = 0;
      *(undefined1 *)((longlong)plVar11 + 0x14) = 1;
      plVar13 = local_78;
      uVar9 = local_70;
      if (0 < (int)plVar11[4]) {
        local_res20 = 0;
        do {
          plVar3 = *(longlong **)(local_res20 + plVar11[3]);
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            if (((longlong *)*plVar3 != (longlong *)0x0) &&
               ((**(code **)(*(longlong *)*plVar3 + 0x10))(), local_res1c == 0)) {
              *(undefined4 *)(plVar3 + 2) = local_res18;
            }
            uVar2 = uVar9 + 1;
            uVar12 = uVar9;
            if ((int)(local_6c & 0x7fffffff) < (int)uVar2) {
              FUN_144be5490(&local_78,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
              plVar13 = local_78;
              uVar12 = local_70;
            }
            uVar4 = uVar9;
            if (plVar13 + (int)uVar12 != (longlong *)0x0) {
              plVar13[(int)uVar12] = (longlong)plVar3;
            }
            while (uVar12 = (int)(uVar4 - 1) >> 1, uVar9 = uVar2, local_70 = uVar2, -1 < (int)uVar12
                  ) {
              lVar8 = plVar13[(int)uVar4];
              if (*(byte *)(plVar13[uVar12] + 8) < *(byte *)(lVar8 + 8)) break;
              plVar13[(int)uVar4] = plVar13[uVar12];
              plVar13[uVar12] = lVar8;
              uVar4 = uVar12;
            }
          }
          iVar7 = iVar7 + 1;
          local_res20 = local_res20 + 8;
        } while (iVar7 < (int)plVar11[4]);
      }
    } while (plVar11 != param_2);
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar10 = (ulonglong)(int)uVar9;
  plVar11 = *(longlong **)(param_1 + 8);
  iVar7 = 0;
  plVar5 = plVar11 + (uVar10 - 1);
  plVar3 = (longlong *)0x0;
  while (plVar6 = plVar5, uVar9 != 0) {
    if (*(char *)(*plVar6 + 0x14) == '\0') {
      plVar5 = plVar11;
      if (plVar3 != (longlong *)0x0) {
        plVar5 = plVar6 + 1;
        plVar6 = plVar3;
      }
    }
    else {
      iVar7 = iVar7 + 1;
      if (plVar3 == (longlong *)0x0) {
        plVar5 = plVar6 + -1;
        plVar6 = plVar3;
      }
      else {
        if (plVar6 != plVar3) {
          *plVar6 = *plVar3;
        }
        plVar11 = plVar6 + 1;
        plVar5 = plVar3 + -1;
        plVar6 = (longlong *)0x0;
      }
    }
    uVar9 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar9;
    plVar3 = plVar6;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar7;
  if ((-1 < (int)local_6c) && (plVar13 != (longlong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,plVar13,(ulonglong)(local_6c & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 144be5030 FUN_144be5030 body=35 status=ok
// SIG undefined FUN_144be5030(void)

undefined1 FUN_144be5030(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = FUN_144f634e0(&DAT_1499821a0,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 1;
}



// FUNCTION 144be5060 FUN_144be5060 body=33 status=ok
// SIG undefined FUN_144be5060(void)

void FUN_144be5060(void)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_144f634e0(".8F\"*","Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144be5090 FUN_144be5090 body=8 status=ok
// SIG undefined FUN_144be5090(void)

bool FUN_144be5090(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0x14) != '\0';
}



// FUNCTION 144be50a0 FUN_144be50a0 body=121 status=ok
// SIG undefined FUN_144be50a0(void)

void FUN_144be50a0(undefined8 param_1,undefined8 param_2)

{
  undefined **local_28;
  longlong local_20;
  undefined4 local_18;
  uint local_14;
  
  local_20 = 0;
  local_18 = 0;
  local_28 = hkTrivialTaskQueue::vftable;
  local_14 = 0x80000000;
  FUN_144be3fc0(param_2,&local_28);
  local_28 = hkTrivialTaskQueue::vftable;
  local_18 = 0;
  if ((-1 < (int)local_14) && (local_20 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_20,(ulonglong)(local_14 & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 144be5120 FUN_144be5120 body=87 status=ok
// SIG undefined FUN_144be5120(void)

undefined8 FUN_144be5120(undefined8 param_1,ulonglong param_2)

{
  FUN_144be4aa0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144be5180 FUN_144be5180 body=195 status=ok
// SIG undefined FUN_144be5180(void)

void FUN_144be5180(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_res8;
  int local_resc;
  
  plVar4 = (longlong *)*param_1;
  if ((plVar4 != (longlong *)0x0) &&
     ((**(code **)(*plVar4 + 0x10))(plVar4,&local_res8), local_resc == 0)) {
    *(undefined4 *)(param_1 + 2) = local_res8;
  }
  uVar3 = *(uint *)(param_2 + 1);
  iVar1 = uVar3 + 1;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_144be5490(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  puVar2 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1;
  }
  *(int *)(param_2 + 1) = iVar1;
  while( true ) {
    uVar8 = (int)(uVar3 - 1) >> 1;
    if ((int)uVar8 < 0) {
      return;
    }
    lVar5 = *param_2;
    lVar6 = *(longlong *)(lVar5 + (longlong)(int)uVar3 * 8);
    lVar7 = *(longlong *)(lVar5 + (ulonglong)uVar8 * 8);
    if (*(byte *)(lVar7 + 8) < *(byte *)(lVar6 + 8)) break;
    *(longlong *)(lVar5 + (longlong)(int)uVar3 * 8) = lVar7;
    *(longlong *)(lVar5 + (ulonglong)uVar8 * 8) = lVar6;
    uVar3 = uVar8;
  }
  return;
}



// FUNCTION 144be5250 FUN_144be5250 body=319 status=ok
// SIG undefined FUN_144be5250(void)

void FUN_144be5250(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)param_2;
  iVar7 = (int)param_1[1] + -1;
  if (param_2 == iVar7) {
    *(int *)(param_1 + 1) = iVar7;
    return;
  }
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + -8 + (longlong)(int)param_1[1] * 8);
  bVar1 = *(byte *)(*(longlong *)(lVar3 + uVar10 * 8) + 8);
  bVar2 = *(byte *)(lVar4 + 8);
  *(longlong *)(lVar3 + uVar10 * 8) = lVar4;
  iVar7 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar7;
  if (bVar2 < bVar1) {
    uVar9 = param_2 + -1 >> 1;
    if (-1 < (int)uVar9) {
      while( true ) {
        uVar8 = (ulonglong)uVar9;
        lVar3 = *param_1;
        lVar4 = *(longlong *)(lVar3 + uVar8 * 8);
        lVar5 = *(longlong *)(lVar3 + (longlong)(int)uVar10 * 8);
        if (*(byte *)(lVar4 + 8) < *(byte *)(lVar5 + 8)) break;
        *(longlong *)(lVar3 + (longlong)(int)uVar10 * 8) = lVar4;
        *(longlong *)(lVar3 + uVar8 * 8) = lVar5;
        uVar9 = (int)(uVar9 - 1) >> 1;
        uVar10 = uVar8;
        if ((int)uVar9 < 0) {
          return;
        }
      }
    }
  }
  else {
    param_2 = param_2 * 2;
    uVar9 = param_2 + 1;
    if (param_2 + 2 < iVar7) {
      uVar9 = (2 - (uint)(*(byte *)(*(longlong *)(*param_1 + (longlong)(int)uVar9 * 8) + 8) <
                         *(byte *)(*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 8) + 8))) +
              param_2;
    }
    while ((int)uVar9 < iVar7) {
      uVar8 = (ulonglong)uVar9;
      lVar3 = *param_1;
      lVar4 = *(longlong *)(lVar3 + (longlong)(int)uVar9 * 8);
      lVar5 = *(longlong *)(lVar3 + (longlong)(int)uVar10 * 8);
      if (*(byte *)(lVar5 + 8) <= *(byte *)(lVar4 + 8)) {
        return;
      }
      *(longlong *)(lVar3 + (longlong)(int)uVar10 * 8) = lVar4;
      iVar6 = uVar9 * 2;
      *(longlong *)(lVar3 + (longlong)(int)uVar9 * 8) = lVar5;
      uVar9 = iVar6 + 1;
      uVar10 = uVar8;
      if (iVar6 + 2 < (int)param_1[1]) {
        uVar9 = (2 - (uint)(*(byte *)(*(longlong *)(*param_1 + (longlong)(int)uVar9 * 8) + 8) <
                           *(byte *)(*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 8) + 8))) +
                iVar6;
      }
    }
  }
  return;
}



// FUNCTION 144be5390 FUN_144be5390 body=247 status=ok
// SIG undefined FUN_144be5390(void)

void FUN_144be5390(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144be5490 FUN_144be5490 body=235 status=ok
// SIG undefined FUN_144be5490(void)

void FUN_144be5490(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}


