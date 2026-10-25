// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148e84d1e FUN_148e84d1e body=60 status=ok
// SIG undefined FUN_148e84d1e(void)

longlong FUN_148e84d1e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if ((lVar1 == 0) ||
     (((*(int *)(lVar1 + 0x67c) == -1 && (*(int *)(lVar1 + 0x680) == 0)) &&
      ((*(byte *)(lVar1 + 0x4c7) & 0x20) == 0)))) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x428;
  }
  return lVar1;
}



// FUNCTION 148e84d5a FUN_148e84d5a body=128 status=ok
// SIG undefined FUN_148e84d5a(void)

undefined8 * FUN_148e84d5a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(&local_30,"SetGlyphs",1);
  FUN_14039176c(param_1,param_2,local_30,1);
  *param_1 = &PTR_FUN_14b9c7290;
  *(undefined4 *)(param_1 + 7) = 0x23;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e84ddc FUN_148e84ddc body=201 status=ok
// SIG undefined FUN_148e84ddc(void)

void FUN_148e84ddc(longlong param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1408cbae2();
  lVar3 = *plVar2;
  SRWLock = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *(uint *)(lVar3 + 8);
  ReleaseSRWLockShared(SRWLock);
  if (uVar1 < 2) {
    plVar2 = (longlong *)FUN_148e834c2(param_1);
    lVar3 = *plVar2;
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x1478));
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x1478));
    if ((*(longlong *)(param_1 + 0x288) != 0) && ((longlong)*(int *)(lVar3 + 0x1460) != 0)) {
      plVar2 = *(longlong **)(lVar3 + 0x1458);
      lVar3 = (longlong)*(int *)(lVar3 + 0x1460) * 0x1c;
      do {
        if (*plVar2 == DAT_14cbccb58) {
          if (plVar2 == (longlong *)0x0) {
            return;
          }
          if (*(uint *)((longlong)plVar2 + 0x14) <= param_2) {
            return;
          }
          FUN_148e851be(param_1,param_2 + *(int *)((longlong)plVar2 + 0xc));
          return;
        }
        plVar2 = (longlong *)((longlong)plVar2 + 0x1c);
        lVar3 = lVar3 + -0x1c;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 148e84ea6 FUN_148e84ea6 body=149 status=ok
// SIG undefined FUN_148e84ea6(void)

void FUN_148e84ea6(undefined8 param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_148e84f3c();
  plVar3 = (longlong *)FUN_1408cbae2(param_1);
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  iVar2 = *(int *)(lVar1 + 8);
  ReleaseSRWLockShared(SRWLock);
  if (iVar2 != 1) {
    return;
  }
  plVar3 = (longlong *)FUN_1408cbae2(param_1);
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  *(int *)(lVar1 + 0xa8) = *(int *)(lVar1 + 0xa8) + 1;
  if (*(int *)(lVar1 + 0x10) == 1) {
    if (*(int *)(lVar1 + 0x14) != 0) goto LAB_148e84f2a;
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x14) + 1;
  }
  *(undefined4 *)(lVar1 + 0x10) = 1;
  *(int *)(lVar1 + 0x14) = iVar2;
LAB_148e84f2a:
                    /* WARNING: Could not recover jumptable at 0x000148e84f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  return;
}



// FUNCTION 148e84f3c FUN_148e84f3c body=640 status=ok
// SIG undefined FUN_148e84f3c(void)

void FUN_148e84f3c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar3 == (longlong *)0x0) goto LAB_148e85161;
  iVar2 = (int)param_2[1];
  if (iVar2 == DAT_14cbdc700) {
    if (1 < iVar2) {
      lVar5 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar5);
        uVar6 = (ulonglong)uVar7;
        uVar9 = *(ushort *)(DAT_14cbdc6f8 + lVar5);
        if (uVar7 != uVar9) break;
        if (uVar7 == 0) goto LAB_148e85065;
LAB_148e84fbb:
        lVar5 = lVar5 + 2;
      }
      if ((uVar9 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e84fbb;
      }
      if (uVar7 != uVar9) goto LAB_148e84fe6;
    }
LAB_148e85065:
    *(undefined1 *)(plVar3 + 0x125) = 0;
    (**(code **)(*plVar3 + 0xa0))(plVar3);
    cVar1 = (char)plVar3[0x38];
  }
  else {
    if (DAT_14cbdc700 + iVar2 == 1) goto LAB_148e85065;
LAB_148e84fe6:
    if (iVar2 == DAT_14cbdc6c0) {
      if (1 < iVar2) {
        lVar5 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar5);
          uVar6 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(DAT_14cbdc6b8 + lVar5);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_148e8518e;
LAB_148e85029:
          lVar5 = lVar5 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e85029;
        }
        if (uVar7 != uVar9) goto LAB_148e85161;
      }
    }
    else if (DAT_14cbdc6c0 + iVar2 != 1) goto LAB_148e85161;
LAB_148e8518e:
    *(undefined1 *)(plVar3 + 0x125) = 0;
    (**(code **)(*plVar3 + 0x98))(plVar3);
    cVar1 = (char)plVar3[0x18];
  }
  puVar4 = &DAT_14cbdcc38;
  if (cVar1 != '\0') {
    puVar4 = &DAT_14cbdcc28;
  }
  FUN_140de1078(param_1,puVar4,0,0);
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar5 = param_1[6];
  *puVar4 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_48,"SetVisible",1);
  FUN_14039176c(puVar4,lVar5,local_48,1);
  *puVar4 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar4 + 7) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
  FUN_140391314(param_1,puVar4);
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar5 = param_1[6];
  *puVar4 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_48,"SetVisible",1);
  FUN_14039176c(puVar4,lVar5,local_48,1);
  *puVar4 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar4 + 7) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 1;
  FUN_140391314(param_1,puVar4);
LAB_148e85161:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e851be FUN_148e851be body=543 status=ok
// SIG undefined FUN_148e851be(void)

void FUN_148e851be(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 *local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_148e851e9;
  FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
  *(undefined1 *)(lVar1 + 0x928) = 0;
  *(undefined1 *)(lVar1 + 0xc0) = 0;
  *(undefined1 *)(lVar1 + 0x1c0) = 0;
  plVar5 = (longlong *)FUN_148e834c2(param_1);
  lVar2 = *plVar5;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x1478));
  lVar1 = (longlong)param_2 * 0x68 + lVar2;
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x1478));
  plVar5 = (longlong *)FUN_1408cbae2(param_1);
  lVar3 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xb0));
  *(int *)(lVar3 + 0xa8) = *(int *)(lVar3 + 0xa8) + 1;
  FUN_1449a0272(lVar3 + 0x38,(longlong)param_2 * 0x68 + lVar2 + 0x30);
  FUN_1449a0272(lVar3 + 0x20,lVar1);
  if (*(int *)(lVar3 + 0x18) == param_2) {
    if (*(int *)(lVar3 + 0x1c) == 0) {
      iVar4 = 1;
      goto LAB_148e852c1;
    }
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x1c) + 1;
LAB_148e852c1:
    *(int *)(lVar3 + 0x18) = param_2;
    *(int *)(lVar3 + 0x1c) = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xb0));
  iVar4 = *(int *)(lVar1 + 0x58);
  if (iVar4 != -1) {
    uVar6 = FUN_14001cc68(0x148,0x10);
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
    local_58 = DAT_14c8464f0;
    FUN_1446ddc76(&local_70,"Backpack",1);
    local_88 = iVar4;
    local_80 = &local_68;
    FUN_14664e342(uVar6,*(undefined8 *)(param_1 + 0x30),1,local_70);
    FUN_140391314(param_1,uVar6);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(&local_50,"SetVisible",1);
    FUN_14039176c(puVar7,uVar6,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
    FUN_140391314(param_1,puVar7);
  }
  puVar7 = &DAT_14cbdcc28;
  if (*(char *)(lVar1 + 0x50) != '\0') {
    puVar7 = &DAT_14cbdcbf8;
  }
  FUN_140de1078(param_1,puVar7,0,0);
LAB_148e851e9:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e853de FUN_148e853de body=55 status=ok
// SIG undefined FUN_148e853de(void)

bool FUN_148e853de(void)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1408cbae2();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(lVar2 + 8);
  ReleaseSRWLockShared(SRWLock);
  return iVar1 == 2;
}



// FUNCTION 148e85476 FUN_148e85476 body=194 status=ok
// SIG undefined FUN_148e85476(void)

void FUN_148e85476(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) {
    lVar1 = (**(code **)(*param_1 + 0xc0))();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_1400d6ce6(lVar1);
    }
    lVar2 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((lVar2 != 0 && lVar1 != 0) && ((longlong)*(int *)(lVar2 + 0x3f8) != 0)) {
      lVar5 = (longlong)*(int *)(lVar2 + 0x3f8) * 0x268;
      lVar4 = *(longlong *)(lVar2 + 0x3f0) + 0x254;
      do {
        lVar3 = FUN_148ee540c(lVar2,lVar4);
        if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0x1f8))) {
          FUN_140c3e4c2(lVar1,lVar3 + 0x1f0);
        }
        lVar4 = lVar4 + 0x268;
        lVar5 = lVar5 + -0x268;
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 148e85562 FUN_148e85562 body=264 status=ok
// SIG undefined FUN_148e85562(void)

void FUN_148e85562(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x35] != 0) {
    puVar3 = *(undefined4 **)(param_1[0x35] + 8);
    puVar6 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar6 = puVar3;
    }
    local_38 = 0;
    uStack_30 = 0;
    bVar9 = true;
    FUN_1400b2348(puVar6,&local_38);
    iVar5 = (int)param_2[1];
    if (iVar5 == (int)uStack_30) {
      if (1 < iVar5) {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_2 + lVar7);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_38 + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e855ef;
            }
            iVar5 = uVar4 - uVar8;
            goto LAB_148e85663;
          }
          if (uVar1 == 0) break;
LAB_148e855ef:
          lVar7 = lVar7 + 2;
        }
        iVar5 = 0;
LAB_148e85663:
        bVar9 = iVar5 == 0;
      }
    }
    else {
      bVar9 = (int)uStack_30 + iVar5 == 1;
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (bVar9) {
      (**(code **)(*param_1 + 0x130))(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e85688 FUN_148e85688 body=1284 status=ok
// SIG undefined FUN_148e85688(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148e85688(longlong *param_1)

{
  int iVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  undefined1 local_108 [40];
  longlong local_e0;
  longlong alStack_d8 [2];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)local_108;
  lVar3 = (**(code **)(*param_1 + 0x198))();
  if (lVar3 == 0) goto LAB_148e85802;
  FUN_1400b22c2(local_c8,"weapon_sorts");
  FUN_1400b22c2(local_b8,"shield_sorts");
  FUN_1400b22c2(local_a8,"gadget_sorts");
  FUN_1400b22c2(local_98,"repkit_sorts");
  FUN_1400b22c2(local_88,"enhancement_sorts");
  FUN_1400b22c2(local_78,"classmod_sorts");
  FUN_1400b22c2(local_68,"grenade_sorts");
  FUN_1400b22c2(local_58,"heavy_weapon_sorts");
  FUN_1400b22c2(local_48,"unsorted_sorts");
  lVar10 = 0;
  alStack_d8[1] = lVar3;
  do {
    if ((*(byte *)(param_1 + 0x5b) & 1) == 0) {
      FUN_1442c9b6c(alStack_d8 + 1);
    }
    else {
      FUN_1412fabe8(lVar3 + 0x220,local_c8 + lVar10);
      FUN_1410d0f68(lVar3 + 0x1b0);
    }
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x90);
  puVar2 = *(ushort **)(lVar3 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  *(undefined1 *)((longlong)param_1 + 0x35a) = 0;
  if ((*(byte *)(param_1 + 0x5b) & 1) != 0) {
    iVar1 = (int)param_1[0x5d];
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[0x5c];
    }
    lVar3 = 0;
    while( true ) {
      uVar7 = *(ushort *)((longlong)puVar4 + lVar3);
      uVar6 = (ulonglong)uVar7;
      uVar9 = *(ushort *)((longlong)L"weapon" + lVar3);
      if (uVar7 != uVar9) break;
      if (uVar7 == 0) goto LAB_148e85a85;
LAB_148e8586c:
      lVar3 = lVar3 + 2;
    }
    if ((uVar9 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar8 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e8586c;
    }
    if (uVar7 != uVar9) {
      if (iVar1 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)param_1[0x5c];
      }
      lVar3 = 0;
      goto LAB_148e858b4;
    }
LAB_148e85a85:
    pcVar5 = "weapon_sorts";
    goto LAB_148e85a8c;
  }
  goto LAB_148e857e8;
LAB_148e858b4:
  uVar7 = *(ushort *)((longlong)puVar4 + lVar3);
  uVar6 = (ulonglong)uVar7;
  uVar9 = *(ushort *)((longlong)&DAT_14b9c1f10 + lVar3);
  if (uVar7 == uVar9) {
    if (uVar7 == 0) goto LAB_148e85ac8;
LAB_148e858cd:
    lVar3 = lVar3 + 2;
    goto LAB_148e858b4;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e858cd;
  }
  if (uVar7 != uVar9) {
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[0x5c];
    }
    lVar3 = 0;
    goto LAB_148e85915;
  }
LAB_148e85ac8:
  pcVar5 = "shield_sorts";
  goto LAB_148e85a8c;
LAB_148e85915:
  uVar7 = *(ushort *)((longlong)puVar4 + lVar3);
  uVar6 = (ulonglong)uVar7;
  uVar9 = *(ushort *)((longlong)L"gadget" + lVar3);
  if (uVar7 == uVar9) {
    if (uVar7 == 0) goto LAB_148e85add;
LAB_148e8592e:
    lVar3 = lVar3 + 2;
    goto LAB_148e85915;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e8592e;
  }
  if (uVar7 != uVar9) {
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[0x5c];
    }
    lVar3 = 0;
    goto LAB_148e85976;
  }
LAB_148e85add:
  FUN_1400b22c2(&local_e0,"gadget_sorts");
  FUN_1442c9b6c(alStack_d8 + 1,&local_e0);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_e0,"grenade_sorts");
  FUN_1442c9b6c(alStack_d8 + 1,&local_e0);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  pcVar5 = "heavy_weapons_sorts";
  goto LAB_148e85a8c;
LAB_148e85976:
  uVar7 = *(ushort *)((longlong)puVar4 + lVar3);
  uVar6 = (ulonglong)uVar7;
  uVar9 = *(ushort *)((longlong)&DAT_14b9c1f32 + lVar3);
  if (uVar7 == uVar9) {
    if (uVar7 == 0) goto LAB_148e85b51;
LAB_148e8598f:
    lVar3 = lVar3 + 2;
    goto LAB_148e85976;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e8598f;
  }
  if (uVar7 != uVar9) {
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[0x5c];
    }
    lVar3 = 0;
    goto LAB_148e859d7;
  }
LAB_148e85b51:
  pcVar5 = "repkit_sorts";
  goto LAB_148e85a8c;
LAB_148e859d7:
  uVar7 = *(ushort *)((longlong)puVar4 + lVar3);
  uVar6 = (ulonglong)uVar7;
  uVar9 = *(ushort *)((longlong)L"enhancement" + lVar3);
  if (uVar7 == uVar9) {
    if (uVar7 == 0) goto LAB_148e85b69;
LAB_148e859f0:
    lVar3 = lVar3 + 2;
    goto LAB_148e859d7;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e859f0;
  }
  if (uVar7 != uVar9) {
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[0x5c];
    }
    lVar3 = 0;
    goto LAB_148e85a37;
  }
LAB_148e85b69:
  pcVar5 = "enhancement_sorts";
  goto LAB_148e85a8c;
LAB_148e85a37:
  uVar7 = *(ushort *)((longlong)puVar4 + lVar3);
  uVar6 = (ulonglong)uVar7;
  uVar9 = *(ushort *)((longlong)L"classmod" + lVar3);
  if (uVar7 == uVar9) {
    if (uVar7 == 0) goto LAB_148e85a7c;
LAB_148e85a4c:
    lVar3 = lVar3 + 2;
    goto LAB_148e85a37;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148e85a4c;
  }
  if (uVar7 != uVar9) goto LAB_148e857e8;
LAB_148e85a7c:
  pcVar5 = "classmod_sorts";
LAB_148e85a8c:
  FUN_1400b22c2(&local_e0,pcVar5);
  FUN_1442c9b6c(alStack_d8 + 1,&local_e0);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
LAB_148e857e8:
  lVar3 = 0x90;
  do {
    if (*(longlong *)((longlong)alStack_d8 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
LAB_148e85802:
  if ((local_38 ^ (ulonglong)local_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e85b8e FUN_148e85b8e body=328 status=ok
// SIG undefined FUN_148e85b8e(void)

void FUN_148e85b8e(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)(**(code **)(*param_1 + 400))();
  if (plVar2 == (longlong *)0x0) goto LAB_148e85bb9;
  plVar3 = (longlong *)FUN_148e861a2(param_1);
  lVar4 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar4 + 0x58);
  AcquireSRWLockShared(SRWLock);
  (**(code **)(*plVar2 + 0xa8))(plVar2,local_40);
  lVar4 = FUN_148e1b2aa(lVar4,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  if (lVar4 == 0) {
    if ((int)plVar2[0x6c] < 2) {
LAB_148e85c7a:
      iVar1 = (int)plVar2[0x6a] + -1;
      if ((int)plVar2[0x6a] == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(plVar2 + 0x6b,plVar2[0x69],iVar1);
      *(byte *)((longlong)plVar2 + 0x331) = *(byte *)((longlong)plVar2 + 0x331) | 1;
    }
  }
  else {
    *(byte *)(plVar2 + 0x66) = *(byte *)(plVar2 + 0x66) & 0xfe | *(byte *)(lVar4 + 0x10);
    if ((int)plVar2[0x6c] < 2) {
      if (*(int *)(lVar4 + 8) < 2) goto LAB_148e85c7a;
      FUN_144a787a6(plVar2 + 0x6b,lVar4);
    }
  }
  iVar1 = FUN_145c4ace0(plVar2 + 0x36,plVar2 + 0x6b);
  if (iVar1 != -1) {
    (**(code **)(*plVar2 + 0x80))(plVar2,iVar1);
    *(undefined1 *)(param_1 + 0x6b) = 1;
  }
LAB_148e85bb9:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e85cd8 FUN_148e85cd8 body=648 status=ok
// SIG undefined FUN_148e85cd8(void)

void FUN_148e85cd8(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  ushort *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)(**(code **)(*param_1 + 400))();
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_148e861a2(param_1);
    lVar6 = *plVar5;
    SRWLock = (PSRWLOCK)(lVar6 + 0x58);
    AcquireSRWLockShared(SRWLock);
    (**(code **)(*plVar4 + 0xa8))(plVar4,&local_68);
    lVar6 = FUN_148e1b2aa(lVar6,&local_68);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(SRWLock);
    if (lVar6 == 0) {
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      local_78 = 0;
      iVar1 = *(int *)(lVar6 + 0x30);
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar1);
      if (iVar1 == 0) {
        uStack_70 = 0;
      }
      else {
        FUN_140b856de(&local_78,iVar1,0);
        FUN_140b8566a(local_78,uVar7,iVar1);
      }
    }
    if ((longlong)(int)plVar4[0x22] != 0) {
      lVar6 = plVar4[0x21];
      lVar8 = (longlong)(int)plVar4[0x22] * 0x90;
      do {
        *(byte *)(lVar6 + 0x88) = *(byte *)(lVar6 + 0x88) & 0x7f;
        cVar3 = FUN_144a23846(&local_78,lVar6);
        *(byte *)(lVar6 + 0x88) = *(byte *)(lVar6 + 0x88) & 0xbf | cVar3 << 6;
        lVar6 = lVar6 + 0x90;
        lVar8 = lVar8 + -0x90;
      } while (lVar8 != 0);
    }
    FUN_1400b22c2(&local_68,"action_ui_compare_item");
    if (plVar4 + 0x1d == &local_68) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar4[0x1d] != 0) {
        FUN_1400020a8();
      }
      plVar4[0x1d] = local_68;
      *(undefined4 *)(plVar4 + 0x1e) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)plVar4 + 0xf4) = uStack_60._4_4_;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"ResetFilterLabel",0);
    FUN_1410d1eba(local_88,&local_68);
    uVar7 = FUN_1447a1f4a(local_88);
    FUN_144a787a6(plVar4 + 0x1f,uVar7);
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)((longlong)param_1 + 0x359) = 1;
    puVar2 = (ushort *)plVar4[0x10];
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(plVar4 + 0xf) & 0x3f));
    }
    FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e85fb6 FUN_148e85fb6 body=82 status=ok
// SIG undefined FUN_148e85fb6(void)

void FUN_148e85fb6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1408cbae2();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  *(int *)(lVar1 + 0xa8) = *(int *)(lVar1 + 0xa8) + 1;
  *(int *)(lVar1 + 0xa0) = *(int *)(lVar1 + 0xa0) + -1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  FUN_14586a994(param_1,param_2);
  return;
}



// FUNCTION 148e86008 FUN_148e86008 body=288 status=ok
// SIG undefined FUN_148e86008(void)

void FUN_148e86008(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined ***pppuVar7;
  undefined1 auStack_98 [32];
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x48))(plVar4);
    lVar5 = (**(code **)(*param_1 + 0x198))(param_1);
    if (lVar5 != 0) {
      lVar5 = FUN_148ee5474(lVar5);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_1408cbae2(param_1);
        lVar2 = *plVar6;
        SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
        AcquireSRWLockShared(SRWLock);
        if (*(int *)(lVar2 + 0x60) == -1) {
          iVar1 = *(int *)(lVar2 + 0x68);
          ReleaseSRWLockShared(SRWLock);
          if (iVar1 == 0) goto LAB_148e860a8;
        }
        else {
          ReleaseSRWLockShared(SRWLock);
        }
        cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
        if (cVar3 == '\0') {
          local_68 = (undefined ***)0x0;
          local_58 = &PTR_LAB_14b9c5e70;
          local_78[0] = &LAB_1442da432;
          local_50 = lVar5;
          FUN_1462350d0(plVar4,local_78);
          if (local_78[0] != (undefined1 *)0x0) {
            pppuVar7 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar7 = &local_58;
            }
            (*(code *)(*pppuVar7)[2])();
          }
        }
      }
    }
  }
LAB_148e860a8:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8612a FUN_148e8612a body=118 status=ok
// SIG undefined FUN_148e8612a(void)

longlong FUN_148e8612a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e861a2 FUN_148e861a2 body=121 status=ok
// SIG undefined FUN_148e861a2(void)

longlong FUN_148e861a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8621c FUN_148e8621c body=64 status=ok
// SIG undefined FUN_148e8621c(void)

undefined4 FUN_148e8621c(void)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_148e8625c();
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  uVar2 = FUN_148e1abee(lVar1 + 0x50);
  ReleaseSRWLockShared(SRWLock);
  return uVar2;
}



// FUNCTION 148e8625c FUN_148e8625c body=121 status=ok
// SIG undefined FUN_148e8625c(void)

longlong FUN_148e8625c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e862da FUN_148e862da body=244 status=ok
// SIG undefined FUN_148e862da(void)

void FUN_148e862da(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x35] != 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 400))();
    if (plVar3 != (longlong *)0x0) {
      *(byte *)(plVar3 + 0x66) = *(byte *)(plVar3 + 0x66) ^ 1;
      *(undefined1 *)(plVar3 + 0x18) = 0;
      *(undefined1 *)(plVar3 + 0x38) = 0;
      (**(code **)(*plVar3 + 0x48))(plVar3);
      bVar1 = *(byte *)(plVar3 + 0x66);
      plVar4 = (longlong *)FUN_148e861a2(param_1);
      lVar2 = *plVar4;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
      *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
      (**(code **)(*plVar3 + 0xa8))(plVar3,local_48);
      lVar5 = FUN_148e1b30a(lVar2,local_48);
      *(byte *)(lVar5 + 0x10) = bVar1 & 1;
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
    }
    FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e863d0 FUN_148e863d0 body=104 status=ok
// SIG undefined FUN_148e863d0(void)

undefined4 FUN_148e863d0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar2 = (*pcVar1)(uVar3,param_1);
    if ((char)uVar2 != '\0') {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  }
  return uVar2;
}



// FUNCTION 148e86438 FUN_148e86438 body=369 status=ok
// SIG undefined FUN_148e86438(void)

void FUN_148e86438(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x80))(plVar4,param_2);
    cVar3 = FUN_1442afe02(plVar4 + 0x36,param_2);
    if (cVar3 != '\0') {
      FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
      puVar5 = (undefined8 *)FUN_1442afe10(plVar4 + 0x36,param_2);
      if ((*(byte *)((longlong)puVar5 + 0x89) & 1) == 0) {
        if (*(int *)(puVar5 + 1) == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = (undefined2 *)*puVar5;
        }
        lVar9 = 0;
        do {
          uVar2 = puVar6[lVar9];
          bVar1 = "reset"[lVar9];
          iVar10 = (uint)uVar2 - (uint)bVar1;
          if (iVar10 == 0) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148e86516;
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148e86513;
          }
          lVar9 = lVar9 + 1;
        } while( true );
      }
    }
  }
LAB_148e8651b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000148e86513:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148e86516:
  if (iVar10 != 0) {
    plVar7 = (longlong *)FUN_148e861a2(param_1);
    lVar9 = *plVar7;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x58));
    *(int *)(lVar9 + 0x50) = *(int *)(lVar9 + 0x50) + 1;
    (**(code **)(*plVar4 + 0xa8))(plVar4,local_48);
    uVar8 = FUN_148e1b30a(lVar9,local_48);
    FUN_144a787a6(uVar8,puVar5);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x58));
  }
  goto LAB_148e8651b;
}



// FUNCTION 148e865aa FUN_148e865aa body=98 status=ok
// SIG undefined FUN_148e865aa(void)

void FUN_148e865aa(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x78))(plVar2,param_2);
    cVar1 = FUN_1442afe02(plVar2 + 0x16,param_2);
    if (cVar1 != '\0') {
      FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 148e8660c FUN_148e8660c body=907 status=ok
// SIG undefined FUN_148e8660c(void)

void FUN_148e8660c(longlong *param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  wchar_t *_Str;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_54;
  wchar_t *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (**(code **)(*param_1 + 0x198))();
  if (lVar3 == 0) {
LAB_148e866d5:
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    lVar3 = param_1[6];
    *puVar7 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(&local_50,"SetVisible",1);
    FUN_14039176c(puVar7,lVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
    FUN_140391314(param_1,puVar7);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    lVar3 = param_1[6];
    *puVar7 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(&local_50,"SetVisible",1);
    FUN_14039176c(puVar7,lVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
  }
  else {
    cVar1 = FUN_1442afe02(lVar3 + 0x918,param_2);
    if (cVar1 == '\0') goto LAB_148e866d5;
    uVar4 = FUN_1442afe10(lVar3 + 0x918,param_2);
    cVar1 = FUN_144a791f8(uVar4,L"equip",5,1);
    if (cVar1 == '\0') goto LAB_148e866d5;
    lVar5 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((lVar5 == 0) || (lVar5 = FUN_148ee5474(lVar5), lVar5 == 0)) goto LAB_148e86797;
    FUN_144a49bb4(uVar4,&local_50,5);
    _Str = local_50;
    if (local_48 == 0) {
      _Str = L"";
    }
    iVar2 = _wtoi(_Str);
    if (local_50 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_54 = 0xffffffff;
    plVar6 = (longlong *)FUN_148e834c2(param_1);
    lVar5 = *plVar6;
    SRWLock = (PSRWLOCK)(lVar5 + 0x1478);
    AcquireSRWLockShared(SRWLock);
    lVar5 = FUN_140f99464(lVar5,iVar2);
    ReleaseSRWLockShared(SRWLock);
    if (lVar5 != 0) {
      local_54 = *(undefined4 *)(lVar5 + 0x58);
    }
    lVar3 = FUN_148ee540c(lVar3,&local_54);
    if (lVar3 != 0) {
      uVar4 = FUN_14001cc68(0x148,0x10);
      local_80 = &local_78;
      local_78 = (undefined4)DAT_14c8464e0;
      uStack_74 = DAT_14c8464e0._4_4_;
      uStack_70 = (undefined4)DAT_14c8464e8;
      uStack_6c = DAT_14c8464e8._4_4_;
      local_68 = DAT_14c8464f0;
      local_88 = *(undefined4 *)(lVar3 + 8);
      FUN_14664e342(uVar4,param_1[6],0,*(undefined8 *)(lVar3 + 0x20));
      FUN_140391314(param_1,uVar4);
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    plVar6 = (longlong *)FUN_1408cbae2(param_1);
    lVar3 = *plVar6;
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0xb0));
    if (*(int *)(lVar3 + 0x60) == -1) {
      bVar8 = *(int *)(lVar3 + 0x68) != 0;
    }
    else {
      bVar8 = true;
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0xb0));
    lVar3 = param_1[6];
    *puVar7 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(&local_50,"SetVisible",1);
    FUN_14039176c(puVar7,lVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7210;
    *(bool *)(puVar7 + 7) = bVar8;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
    FUN_140391314(param_1,puVar7);
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    lVar3 = param_1[6];
    *puVar7 = &PTR_FUN_14b9c7290;
    FUN_1446ddc76(&local_50,"SetGlyphs",1);
    FUN_14039176c(puVar7,lVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7290;
    *(undefined4 *)(puVar7 + 7) = 8;
  }
  FUN_140391314(param_1,puVar7);
LAB_148e86797:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e86998 FUN_148e86998 body=142 status=ok
// SIG undefined FUN_148e86998(void)

void FUN_148e86998(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x198))();
  if (lVar2 != 0) {
    cVar1 = FUN_1442afe02(lVar2 + 0x918,param_2);
    if (cVar1 != '\0') {
      uVar3 = FUN_1442afe10(lVar2 + 0x918,param_2);
      cVar1 = FUN_144a791f8(uVar3,L"equip",5,1);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148e86a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1f0))(param_1,param_2);
        return;
      }
      FUN_148e86a26(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148e86a26 FUN_148e86a26 body=1184 status=ok
// SIG undefined FUN_148e86a26(void)

void FUN_148e86a26(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  
  lVar3 = (**(code **)(*param_1 + 0x198))();
  if (lVar3 == 0) {
    return;
  }
  cVar2 = FUN_1442afe02(lVar3 + 0x918,param_2);
  if (cVar2 == '\0') {
    return;
  }
  plVar4 = (longlong *)FUN_1442afe10(lVar3 + 0x918,param_2);
  lVar5 = FUN_148ee5474(lVar3);
  iVar1 = (int)plVar4[1];
  if (iVar1 == DAT_14cbdcaa8) {
    if (1 < iVar1) {
      lVar8 = 0;
      while( true ) {
        uVar10 = *(ushort *)(*plVar4 + lVar8);
        uVar9 = (ulonglong)uVar10;
        uVar12 = *(ushort *)(DAT_14cbdcaa0 + lVar8);
        if (uVar10 != uVar12) break;
        if (uVar10 == 0) goto LAB_148e86bf0;
LAB_148e86ac3:
        lVar8 = lVar8 + 2;
      }
      if ((uVar12 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e86ac3;
      }
      if (uVar10 != uVar12) goto LAB_148e86af3;
    }
LAB_148e86bf0:
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x9c) & 0x20) == 0)) {
      uVar7 = 2;
      puVar6 = &DAT_14cbdccc8;
      goto LAB_148e86c0a;
    }
    uVar7 = 2;
  }
  else {
    if (DAT_14cbdcaa8 + iVar1 == 1) goto LAB_148e86bf0;
LAB_148e86af3:
    if (iVar1 == DAT_14cbdca98) {
      if (1 < iVar1) {
        lVar8 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*plVar4 + lVar8);
          uVar9 = (ulonglong)uVar10;
          uVar12 = *(ushort *)(DAT_14cbdca90 + lVar8);
          if (uVar10 != uVar12) break;
          if (uVar10 == 0) goto LAB_148e86c49;
LAB_148e86b37:
          lVar8 = lVar8 + 2;
        }
        if ((uVar12 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar11 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e86b37;
        }
        if (uVar10 != uVar12) goto LAB_148e86b67;
      }
LAB_148e86c49:
      if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x9c) & 0x10) == 0)) {
        uVar7 = 4;
        puVar6 = &DAT_14cbdccb8;
        goto LAB_148e86c0a;
      }
      uVar7 = 4;
    }
    else {
      if (DAT_14cbdca98 + iVar1 == 1) goto LAB_148e86c49;
LAB_148e86b67:
      if (iVar1 == DAT_14cbdcac8) {
        uVar7 = 0x10;
        puVar6 = &DAT_14cbdcbe8;
        if (1 < iVar1) {
          lVar8 = 0;
          while( true ) {
            uVar10 = *(ushort *)(*plVar4 + lVar8);
            uVar9 = (ulonglong)uVar10;
            uVar12 = *(ushort *)(DAT_14cbdcac0 + lVar8);
            if (uVar10 != uVar12) break;
            if (uVar10 == 0) goto LAB_148e86c0a;
LAB_148e86bb3:
            lVar8 = lVar8 + 2;
          }
          if ((uVar12 | uVar10) < 0x80) {
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar12;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e86bb3;
          }
          if (uVar10 != uVar12) goto LAB_148e86c7a;
        }
        goto LAB_148e86c0a;
      }
      if (DAT_14cbdcac8 + iVar1 == 1) {
        uVar7 = 0x10;
      }
      else {
LAB_148e86c7a:
        if (iVar1 == DAT_14cbdcad8) {
          uVar7 = 0x20;
          puVar6 = &DAT_14cbdcbe8;
          if (1 < iVar1) {
            lVar8 = 0;
            while( true ) {
              uVar10 = *(ushort *)(*plVar4 + lVar8);
              uVar9 = (ulonglong)uVar10;
              uVar12 = *(ushort *)(DAT_14cbdcad0 + lVar8);
              if (uVar10 != uVar12) break;
              if (uVar10 == 0) goto LAB_148e86c0a;
LAB_148e86cc6:
              lVar8 = lVar8 + 2;
            }
            if ((uVar12 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar12;
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e86cc6;
            }
            if (uVar10 != uVar12) goto LAB_148e86d08;
          }
          goto LAB_148e86c0a;
        }
        if (DAT_14cbdcad8 + iVar1 == 1) {
          uVar7 = 0x20;
        }
        else {
LAB_148e86d08:
          if (iVar1 == DAT_14cbdcae8) {
            uVar7 = 0x40;
            puVar6 = &DAT_14cbdcbe8;
            if (1 < iVar1) {
              lVar8 = 0;
              while( true ) {
                uVar10 = *(ushort *)(*plVar4 + lVar8);
                uVar9 = (ulonglong)uVar10;
                uVar12 = *(ushort *)(DAT_14cbdcae0 + lVar8);
                if (uVar10 != uVar12) break;
                if (uVar10 == 0) goto LAB_148e86c0a;
LAB_148e86d54:
                lVar8 = lVar8 + 2;
              }
              if ((uVar12 | uVar10) < 0x80) {
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                uVar11 = (ulonglong)uVar12;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e86d54;
              }
              if (uVar10 != uVar12) goto LAB_148e86d96;
            }
            goto LAB_148e86c0a;
          }
          if (DAT_14cbdcae8 + iVar1 == 1) {
            uVar7 = 0x40;
          }
          else {
LAB_148e86d96:
            if (iVar1 == DAT_14cbdcaf8) {
              uVar7 = 0x80;
              puVar6 = &DAT_14cbdcbe8;
              if (1 < iVar1) {
                lVar8 = 0;
                while( true ) {
                  uVar10 = *(ushort *)(*plVar4 + lVar8);
                  uVar9 = (ulonglong)uVar10;
                  uVar12 = *(ushort *)(DAT_14cbdcaf0 + lVar8);
                  if (uVar10 != uVar12) break;
                  if (uVar10 == 0) goto LAB_148e86c0a;
LAB_148e86de2:
                  lVar8 = lVar8 + 2;
                }
                if ((uVar12 | uVar10) < 0x80) {
                  uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  uVar11 = (ulonglong)uVar12;
                  uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e86de2;
                }
                if (uVar10 != uVar12) goto LAB_148e86e24;
              }
              goto LAB_148e86c0a;
            }
            if (DAT_14cbdcaf8 + iVar1 == 1) {
              uVar7 = 0x80;
            }
            else {
LAB_148e86e24:
              if (iVar1 == DAT_14cbdcab8) {
                if (1 < iVar1) {
                  lVar8 = 0;
                  while( true ) {
                    uVar10 = *(ushort *)(*plVar4 + lVar8);
                    uVar9 = (ulonglong)uVar10;
                    uVar12 = *(ushort *)(DAT_14cbdcab0 + lVar8);
                    if (uVar10 != uVar12) break;
                    if (uVar10 == 0) goto LAB_148e86e9d;
LAB_148e86e5c:
                    lVar8 = lVar8 + 2;
                  }
                  if ((uVar12 | uVar10) < 0x80) {
                    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                    uVar11 = (ulonglong)uVar12;
                    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_148e86e5c;
                  }
                  if (uVar10 != uVar12) {
                    return;
                  }
                }
              }
              else if (DAT_14cbdcab8 + iVar1 != 1) {
                return;
              }
LAB_148e86e9d:
              if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x9c) & 0x40) == 0)) {
                uVar7 = 8;
                puVar6 = &DAT_14cbdcca8;
                goto LAB_148e86c0a;
              }
              uVar7 = 8;
            }
          }
        }
      }
    }
  }
  puVar6 = &DAT_14cbdcbe8;
LAB_148e86c0a:
  FUN_140de1078(param_1,puVar6,0,0);
  FUN_148ee5cde(lVar3,uVar7);
  return;
}



// FUNCTION 148e8718e FUN_148e8718e body=386 status=ok
// SIG undefined FUN_148e8718e(void)

longlong * FUN_148e8718e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148e8729f:
    *puVar5 = &PTR_LAB_14b972ed0;
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
    *puVar5 = &PTR_FUN_14b9c5ed0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e8729f;
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
    *puVar5 = &PTR_LAB_14b972ed0;
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
    *puVar5 = &PTR_FUN_14b9c5ed0;
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



// FUNCTION 148e87310 FUN_148e87310 body=657 status=ok
// SIG undefined FUN_148e87310(void)

void FUN_148e87310(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = (**(code **)(*param_1 + 0x198))();
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0xb00) = *(byte *)(lVar5 + 0xb00) & 0xdf;
    cVar3 = FUN_144709e00(*param_2,"cancel");
    if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    lVar8 = *param_2;
    if (lVar8 == DAT_14cbdcb00) {
      uVar6 = 4;
      puVar7 = &DAT_14cbdccb8;
    }
    else {
      uVar6 = 0x10;
      puVar7 = &DAT_14cbdcbe8;
      if ((((lVar8 != DAT_14cbdcb18) && (uVar6 = 0x20, lVar8 != DAT_14cbdcb20)) &&
          (uVar6 = 0x40, lVar8 != DAT_14cbdcb28)) && (uVar6 = 0x80, lVar8 != DAT_14cbdcb30)) {
        if (lVar8 == DAT_14cbdcb08) {
          uVar6 = 2;
          puVar7 = &DAT_14cbdccc8;
        }
        else {
          if (lVar8 != DAT_14cbdcb10) goto LAB_148e87514;
          uVar6 = 8;
          puVar7 = &DAT_14cbdcca8;
        }
      }
    }
    FUN_140de1078(param_1,puVar7,0,0);
    local_68 = 0;
    uStack_60 = 0;
    if ((longlong)*(int *)(lVar5 + 0x408) != 0) {
      lVar8 = *(longlong *)(lVar5 + 0x400);
      lVar5 = (longlong)*(int *)(lVar5 + 0x408) * 0x268;
      do {
        uVar2 = uStack_60;
        if (((*(byte *)(lVar8 + 0x9c) & 0xf1) == 0) && (-1 < *(char *)(lVar8 + 0x9d))) {
          lVar9 = (longlong)(int)uStack_60;
          uVar4 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
          if (uStack_60._4_4_ < uVar4) {
            FUN_14591741c(&local_68,uVar2 & 0xffffffff);
          }
          FUN_148c6b498(lVar9 * 0x268 + local_68,lVar8);
        }
        lVar9 = local_68;
        lVar8 = lVar8 + 0x268;
        lVar5 = lVar5 + -0x268;
      } while (lVar5 != 0);
      lVar5 = (longlong)(int)uStack_60;
      if (lVar5 != 0) {
        lVar8 = 0;
        do {
          puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
          lVar1 = param_1[6];
          *puVar7 = &PTR_FUN_14b9c7260;
          FUN_1446ddc76(&local_50,"UpdateItemFlags",1);
          FUN_14039176c(puVar7,lVar1,local_50,1);
          *puVar7 = &PTR_FUN_14b9c7260;
          *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(lVar9 + 0x254 + lVar8);
          *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar6;
          *(undefined4 *)(puVar7 + 8) = 0;
          FUN_140391314(param_1,puVar7);
          lVar8 = lVar8 + 0x268;
        } while (lVar5 * 0x268 - lVar8 != 0);
      }
    }
    FUN_140de1078(param_1,&DAT_14cbdcbe8,0,0);
    FUN_1412d6a39(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
LAB_148e87514:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e875c4 FUN_148e875c4 body=140 status=ok
// SIG undefined FUN_148e875c4(void)

undefined8 * FUN_148e875c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9c1440;
  FUN_1446ddc76(&local_38,"NewDialogBox",1);
  FUN_14039176c(param_1,*param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c1440;
  FUN_1459de28a(param_1 + 7,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e87652 FUN_148e87652 body=133 status=ok
// SIG undefined FUN_148e87652(void)

undefined8 * FUN_148e87652(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9c6b40;
  FUN_1446ddc76(&local_38,"Deposit",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c6b40;
  *(undefined4 *)(param_1 + 7) = *param_3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e876d8 FUN_148e876d8 body=420 status=ok
// SIG undefined FUN_148e876d8(void)

void FUN_148e876d8(longlong *param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar3 = &PTR_FUN_14b9c6e60;
    FUN_1446ddc76(&local_38,"InitStandIn",1);
    FUN_14039176c(puVar3,param_1[6],local_38,1);
    *puVar3 = &PTR_FUN_14b9c6e60;
    puVar3[7] = param_1[3];
    puVar3[8] = param_1[0x68];
    FUN_140391314(param_1,puVar3);
    lVar4 = (**(code **)(*param_1 + 400))(param_1);
    if (lVar4 != 0) {
      if (param_1[0x2c] == 0) {
        puVar3 = &DAT_14c9a1308;
      }
      else {
        puVar3 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc818);
      }
      pbVar1 = (byte *)*puVar3;
      pcVar5 = "inactive";
      if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
        pcVar5 = "inactive";
        if (*(char **)(pbVar1 + 8) != (char *)0x0) {
          pcVar5 = *(char **)(pbVar1 + 8);
        }
      }
      FUN_1400b22c2(&local_38,pcVar5);
      if ((longlong *)(lVar4 + 0x380) == &local_38) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar4 + 0x380) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar4 + 0x380) = local_38;
        local_38 = 0;
        *(undefined4 *)(lVar4 + 0x388) = local_30;
        *(undefined4 *)(lVar4 + 0x38c) = local_2c;
      }
      puVar2 = *(ushort **)(lVar4 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8787e FUN_148e8787e body=153 status=ok
// SIG undefined FUN_148e8787e(void)

void FUN_148e8787e(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b9c6e30;
  FUN_1446ddc76(&local_30,"DeinitStandIn",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9c6e30;
  puVar1[7] = *(undefined8 *)(param_1 + 0x18);
  FUN_140391314(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e87918 FUN_148e87918 body=61 status=ok
// SIG undefined FUN_148e87918(void)

void FUN_148e87918(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_140d47191(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_148e9a568(param_1);
  return;
}



// FUNCTION 148e87956 FUN_148e87956 body=78 status=ok
// SIG undefined FUN_148e87956(void)

longlong * FUN_148e87956(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140d47191(*param_1,(int)param_1[1]);
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



// FUNCTION 148e879a4 FUN_148e879a4 body=163 status=ok
// SIG undefined FUN_148e879a4(void)

void FUN_148e879a4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c1410;
  FUN_1446ddc76(&local_38,"RemoveState",1);
  FUN_14039176c(puVar2,uVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9c1410;
  puVar2[7] = DAT_14cbd9320;
  FUN_140391314(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e87a5c FUN_148e87a5c body=411 status=ok
// SIG undefined FUN_148e87a5c(void)

void FUN_148e87a5c(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbdc700) {
    lVar2 = 0x1d8;
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_2 + lVar3);
        uVar6 = (ulonglong)uVar4;
        uVar5 = *(ushort *)(DAT_14cbdc6f8 + lVar3);
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_148e87adc;
LAB_148e87aa3:
        lVar3 = lVar3 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar7 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_148e87aa3;
      }
      if (uVar4 != uVar5) goto LAB_148e87aef;
    }
  }
  else {
    lVar2 = 0x1d8;
    if (DAT_14cbdc700 + iVar1 != 1) {
LAB_148e87aef:
      if (iVar1 == DAT_14cbdc6c0) {
        lVar2 = 0x1e0;
        if (1 < iVar1) {
          lVar3 = 0;
          while( true ) {
            uVar4 = *(ushort *)(*param_2 + lVar3);
            uVar6 = (ulonglong)uVar4;
            uVar5 = *(ushort *)(DAT_14cbdc6b8 + lVar3);
            if (uVar4 != uVar5) break;
            if (uVar4 == 0) goto LAB_148e87adc;
LAB_148e87b2c:
            lVar3 = lVar3 + 2;
          }
          if ((uVar5 | uVar4) < 0x80) {
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar7 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_148e87b2c;
          }
          if (uVar4 != uVar5) goto LAB_148e87b69;
        }
      }
      else {
        lVar2 = 0x1e0;
        if (DAT_14cbdc6c0 + iVar1 != 1) {
LAB_148e87b69:
          if (iVar1 == DAT_14cbdc6f0) {
            lVar2 = 0x1c0;
            if (1 < iVar1) {
              lVar3 = 0;
              while( true ) {
                uVar4 = *(ushort *)(*param_2 + lVar3);
                uVar6 = (ulonglong)uVar4;
                uVar5 = *(ushort *)(DAT_14cbdc6e8 + lVar3);
                if (uVar4 != uVar5) break;
                if (uVar4 == 0) goto LAB_148e87adc;
LAB_148e87bb1:
                lVar3 = lVar3 + 2;
              }
              if ((uVar5 | uVar4) < 0x80) {
                uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                uVar7 = (ulonglong)uVar5;
                uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_148e87bb1;
              }
              if (uVar4 != uVar5) {
                return;
              }
            }
          }
          else {
            lVar2 = 0x1c0;
            if (DAT_14cbdc6f0 + iVar1 != 1) {
              return;
            }
          }
        }
      }
    }
  }
LAB_148e87adc:
                    /* WARNING: Could not recover jumptable at 0x000148e87aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1,param_3);
  return;
}



// FUNCTION 148e87bf8 FUN_148e87bf8 body=121 status=ok
// SIG undefined FUN_148e87bf8(void)

longlong FUN_148e87bf8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e87c72 FUN_148e87c72 body=121 status=ok
// SIG undefined FUN_148e87c72(void)

longlong FUN_148e87c72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e87cec FUN_148e87cec body=121 status=ok
// SIG undefined FUN_148e87cec(void)

longlong FUN_148e87cec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e87d66 FUN_148e87d66 body=55 status=ok
// SIG undefined FUN_148e87d66(void)

void FUN_148e87d66(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    cVar1 = FUN_144709e00(*param_2,"DisplayPlayerStandin");
    if (cVar1 != '\0') {
      FUN_148e876d8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148e87d9e FUN_148e87d9e body=97 status=ok
// SIG undefined FUN_148e87d9e(void)

undefined8 * FUN_148e87d9e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x398);
  memset(_Dst,0,0x398);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9c41d0;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  _Dst[0x6f] = 0;
  _Dst[0x70] = 0;
  _Dst[0x71] = 0;
  *(undefined1 *)(_Dst + 0x72) = 0;
  return _Dst;
}



// FUNCTION 148e87e00 FUN_148e87e00 body=104 status=ok
// SIG undefined FUN_148e87e00(void)

void FUN_148e87e00(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  FUN_1457fc9d2();
  if (*param_2 == 0) {
    plVar3 = &DAT_14c9a1308;
  }
  else {
    plVar3 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cbdd128);
  }
  if (*plVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14000584e(*plVar3,0);
  }
  *(undefined1 *)(param_1 + 0xb50) = uVar2;
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148e87e68 FUN_148e87e68 body=269 status=ok
// SIG undefined FUN_148e87e68(void)

byte FUN_148e87e68(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  bool bVar10;
  
  bVar8 = FUN_14134fe5a();
  if (*(char *)(param_1 + 0xb6c) != '\x01') {
    plVar9 = (longlong *)FUN_141350006(param_1);
    lVar7 = *plVar9;
    AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x1c0));
    ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x1c0));
    bVar10 = *(int *)(param_1 + 0xb88) != *(int *)(lVar7 + 0x48) || *(int *)(param_1 + 0xb88) == 0;
    if (bVar10) {
      *(int *)(param_1 + 0xb88) = *(int *)(lVar7 + 0x48);
      FUN_145916980(param_1 + 0xb78,lVar7 + 0x38);
    }
    iVar1 = *(int *)(param_1 + 0xb58);
    iVar2 = *(int *)(lVar7 + 0xc);
    if (iVar1 != iVar2) {
      *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(lVar7 + 8);
      *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(lVar7 + 0xc);
    }
    iVar3 = *(int *)(param_1 + 0xb60);
    iVar4 = *(int *)(lVar7 + 0x14);
    if (iVar3 != iVar4) {
      *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(lVar7 + 0x10);
      *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(lVar7 + 0x14);
    }
    iVar5 = *(int *)(param_1 + 0xb68);
    iVar6 = *(int *)(lVar7 + 0x1c);
    if (iVar5 != iVar6) {
      *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(lVar7 + 0x18);
      *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(lVar7 + 0x1c);
    }
    bVar8 = bVar8 | iVar5 != iVar6 | ((bVar10 || iVar1 != iVar2) || iVar3 != iVar4);
  }
  return bVar8;
}



// FUNCTION 148e88004 FUN_148e88004 body=148 status=ok
// SIG undefined FUN_148e88004(void)

void FUN_148e88004(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  
  FUN_1413516b8();
  if (*(char *)(param_1 + 0xb6c) != '\x01') {
    uVar1 = *(uint *)(param_1 + 0x3f8);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = 0x9e;
      uVar3 = 0;
      do {
        iVar5 = (int)uVar3;
        if ((*(byte *)(param_1 + 0x8f9) & 1) != 0) {
          iVar5 = *(int *)(param_1 + 0x900) + iVar5;
        }
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x408) <= iVar5)) {
          bVar4 = 0;
        }
        else {
          bVar4 = (*(int *)(param_1 + 0xb5c) <= iVar5) << 6;
        }
        *(byte *)(*(longlong *)(param_1 + 0x3f0) + lVar2) =
             *(byte *)(*(longlong *)(param_1 + 0x3f0) + lVar2) & 0xbf | bVar4;
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x268;
      } while (uVar1 != uVar3);
    }
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x80;
  }
  return;
}



// FUNCTION 148e880b8 FUN_148e880b8 body=3520 status=ok
// SIG undefined FUN_148e880b8(void)

/* WARNING: Removing unreachable block (ram,0x000148e88c07) */
/* WARNING: Removing unreachable block (ram,0x000148e88730) */
/* WARNING: Removing unreachable block (ram,0x000148e8881b) */
/* WARNING: Removing unreachable block (ram,0x000148e888f7) */
/* WARNING: Removing unreachable block (ram,0x000148e88c1d) */
/* WARNING: Removing unreachable block (ram,0x000148e88742) */
/* WARNING: Removing unreachable block (ram,0x000148e8882d) */
/* WARNING: Removing unreachable block (ram,0x000148e88909) */

void FUN_148e880b8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_1e8 [36];
  uint local_1c4;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8 [2];
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178 [2];
  longlong *local_168;
  longlong *plStack_160;
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148 [2];
  longlong *local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar11 = *(int *)(param_1 + 700);
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b8));
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if ((iVar11 < 0) && (*(int *)(param_1 + 700) != 0)) {
    FUN_148e23c9e((longlong *)(param_1 + 0x2b0),0);
  }
  bVar4 = *(byte *)(param_1 + 0x928);
  iVar11 = 0;
  local_1c4 = 0;
  if (bVar4 == 0) {
    if ((((*(byte *)(param_1 + 0x8f8) & 0x10) == 0) ||
        (((*(int *)(param_1 + 0x67c) == -1 && (*(int *)(param_1 + 0x680) == 0)) &&
         ((*(byte *)(param_1 + 0x4c7) & 0x20) == 0)))) ||
       (((*(byte *)(param_1 + 0x4c6) & 0x40) != 0 || ((*(byte *)(param_1 + 0x4c4) & 1) != 0)))) {
      local_1c4 = 0;
    }
    else {
      local_1c4 = (uint)((char)*(byte *)(param_1 + 0x4c6) < '\0' &&
                        (*(byte *)(param_1 + 0x4c7) & 0x20) == 0);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x400);
  lVar9 = (longlong)*(int *)(param_1 + 0x408);
  if (lVar9 != 0) {
    lVar13 = 0;
    iVar11 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x9c + lVar13) & 0xf1) == 0) {
        bVar16 = -1 < *(char *)(lVar6 + 0x9d + lVar13);
      }
      else {
        bVar16 = false;
      }
      iVar11 = iVar11 + (uint)bVar16;
      lVar13 = lVar13 + 0x268;
    } while (lVar9 * 0x268 - lVar13 != 0);
  }
  iVar10 = 0;
  bVar12 = 0;
  if ((*(byte *)(param_1 + 0x8f8) & 0x10) != 0) {
    bVar12 = ~bVar4 & 0 < iVar11;
  }
  bVar14 = 1;
  iVar15 = 0;
  if (*(int *)(param_1 + 0x408) != 0) {
    lVar13 = 0;
    iVar10 = 0;
    do {
      iVar10 = iVar10 + (uint)(-1 < *(char *)(lVar6 + 0x9d + lVar13) &&
                              (*(byte *)(lVar6 + 0x9c + lVar13) & 1) == 0);
      lVar13 = lVar13 + 0x268;
    } while (lVar9 * 0x268 - lVar13 != 0);
    lVar13 = 0;
    iVar15 = 0;
    do {
      iVar15 = iVar15 + (uint)((*(byte *)(lVar6 + 0x9c + lVar13) & 0x41) == 0x40);
      lVar13 = lVar13 + 0x268;
    } while (lVar9 * 0x268 - lVar13 != 0);
    bVar14 = iVar10 < 1 | bVar4;
  }
  cVar5 = *(char *)(param_1 + 0xb6c);
  local_1c0 = (longlong *)(param_1 + 0x2b0);
  plVar7 = (longlong *)FUN_140e82300();
  local_e8 = (longlong *)*plVar7;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 8))();
  }
  local_e0 = (undefined4)plVar7[1];
  if (0 < iVar15 && cVar5 == '\x01') {
    local_118 = (longlong *)0x0;
    plStack_110 = (longlong *)0x0;
    FUN_1413a454c(local_108,iVar15,0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = local_98 & 0xffffffff00000000;
    local_90 = 0;
    uStack_88 = 0;
    FUN_1446ddda2(&local_a8,"BankDepositCountFormatText",0);
    FUN_1410d1eba(&local_138,&local_a8);
    FUN_14023409e(&local_128,&local_138,1);
    local_80[0] = 4;
    FUN_14023423e(local_70,local_108);
    local_c8 = local_80;
    local_c0 = local_60;
    FUN_14010d304(&local_b8);
    local_d8 = local_128;
    local_d0 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_f8,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_120 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_120 + 0x10))(local_120);
        }
      }
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    FUN_140008f88(&local_e8,&local_f8);
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x10))();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_110 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  plVar7 = (longlong *)FUN_140e82300();
  local_f8 = (longlong *)*plVar7;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = (undefined4)plVar7[1];
  if (bVar12 != 0) {
    local_138 = (longlong *)0x0;
    plStack_130 = (longlong *)0x0;
    FUN_1413a454c(local_148,iVar11,0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = local_98 & 0xffffffff00000000;
    local_90 = 0;
    uStack_88 = 0;
    FUN_1446ddda2(&local_a8,"MarkAllFilteredHint",0);
    FUN_1410d1eba(&local_168,&local_a8);
    FUN_14023409e(&local_158,&local_168,1);
    local_80[0] = 4;
    FUN_14023423e(local_70,local_148);
    local_c8 = local_80;
    local_c0 = local_60;
    FUN_14010d304(&local_b8);
    local_d8 = local_158;
    local_d0 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_118,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != (longlong *)0x0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_150 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_150 + 0x10))(local_150);
        }
      }
    }
    if (local_148[0] != (longlong *)0x0) {
      (**(code **)(*local_148[0] + 0x10))();
    }
    FUN_140008f88(&local_f8,&local_118);
    if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 0x10))();
    }
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 0x10))();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_130 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  plVar7 = (longlong *)FUN_140e82300();
  local_118 = (longlong *)*plVar7;
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 8))();
  }
  plVar2 = local_1c0;
  plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,(int)plVar7[1]);
  if (bVar14 == 0) {
    if (*(char *)(param_1 + 0xb6c) == '\x01') {
      local_168 = (longlong *)0x0;
      plStack_160 = (longlong *)0x0;
      FUN_1413a454c(local_1a8,iVar10,0);
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = local_98 & 0xffffffff00000000;
      local_90 = 0;
      uStack_88 = 0;
      FUN_1446ddda2(&local_a8,"DepositAllFilteredHint",0);
      FUN_1410d1eba(local_198,&local_a8);
      FUN_14023409e(&local_1b8,local_198,1);
      local_80[0] = 4;
      FUN_14023423e(local_70,local_1a8);
      local_c8 = local_80;
      local_c0 = local_60;
      FUN_14010d304(&local_b8);
      local_d8 = local_1b8;
      local_d0 = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_138,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,local_b0);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_1b0 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1b0 + 0x10))(local_1b0);
          }
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0xb6c) != '\0') goto LAB_148e88663;
      local_168 = (longlong *)0x0;
      plStack_160 = (longlong *)0x0;
      FUN_1413a454c(local_178,iVar10,0);
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = local_98 & 0xffffffff00000000;
      local_90 = 0;
      uStack_88 = 0;
      FUN_1446ddda2(&local_a8,"WithdrawAllFilteredHint",0);
      FUN_1410d1eba(local_198,&local_a8);
      FUN_14023409e(&local_188,local_198,1);
      local_80[0] = 4;
      FUN_14023423e(local_70,local_178);
      local_c8 = local_80;
      local_c0 = local_60;
      FUN_14010d304(&local_b8);
      local_d8 = local_188;
      local_d0 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_180 + 1) = (int)local_180[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_138,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,local_b0);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      local_1a8[0] = local_178[0];
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_180 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_1a8[0] = local_178[0];
          if (*piVar1 == 0) {
            (**(code **)(*local_180 + 0x10))(local_180);
            local_1a8[0] = local_178[0];
          }
        }
      }
    }
    if (local_1a8[0] != (longlong *)0x0) {
      (**(code **)(*local_1a8[0] + 0x10))();
    }
    FUN_140008f88(&local_118,&local_138);
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x10))();
    }
    if (local_198[0] != (longlong *)0x0) {
      (**(code **)(*local_198[0] + 0x10))();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_160 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
LAB_148e88663:
  if ((char)local_1c4 != '\0') {
    FUN_146637162(&local_a8,&DAT_14cbdc8f0,&DAT_14cbdca00);
    iVar11 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar11 + 1U;
    if (*(uint *)(param_1 + 700) < iVar11 + 1U) {
      FUN_146638242(plVar2,iVar11);
    }
    lVar6 = *plVar2;
    lVar9 = (longlong)iVar11 * 0x20;
    *(undefined8 *)(lVar6 + lVar9) = 0;
    *(undefined8 *)(lVar6 + lVar9) = local_a8;
    *(undefined4 *)(lVar6 + 8 + lVar9) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar6 + 0xc + lVar9) = uStack_a0._4_4_;
    *(undefined8 *)(lVar6 + 0x10 + lVar9) = 0;
    *(ulonglong *)(lVar6 + 0x10 + lVar9) = local_98;
    *(undefined4 *)(lVar6 + 0x18 + lVar9) = (undefined4)local_90;
    *(undefined4 *)(lVar6 + 0x1c + lVar9) = local_90._4_4_;
    local_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
  }
  if (bVar12 != 0) {
    uVar8 = FUN_1447a1f4a(&local_f8);
    FUN_146637162(&local_a8,&DAT_14cbdc8c0,uVar8);
    iVar11 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar11 + 1U;
    if (*(uint *)(param_1 + 700) < iVar11 + 1U) {
      FUN_146638242(plVar2,iVar11);
    }
    lVar6 = *plVar2;
    lVar9 = (longlong)iVar11 * 0x20;
    *(undefined8 *)(lVar6 + lVar9) = 0;
    *(undefined8 *)(lVar6 + lVar9) = local_a8;
    *(undefined4 *)(lVar6 + 8 + lVar9) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar6 + 0xc + lVar9) = uStack_a0._4_4_;
    *(undefined8 *)(lVar6 + 0x10 + lVar9) = 0;
    *(ulonglong *)(lVar6 + 0x10 + lVar9) = local_98;
    *(undefined4 *)(lVar6 + 0x18 + lVar9) = (undefined4)local_90;
    *(undefined4 *)(lVar6 + 0x1c + lVar9) = local_90._4_4_;
    local_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
  }
  if (bVar14 == 0) {
    uVar8 = FUN_1447a1f4a(&local_118);
    FUN_146637162(&local_a8,&DAT_14cbdd1a0,uVar8);
    iVar11 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar11 + 1U;
    if (*(uint *)(param_1 + 700) < iVar11 + 1U) {
      FUN_146638242(plVar2,iVar11);
    }
    lVar6 = *plVar2;
    lVar9 = (longlong)iVar11 * 0x20;
    *(undefined8 *)(lVar6 + lVar9) = 0;
    *(undefined8 *)(lVar6 + lVar9) = local_a8;
    local_a8 = 0;
    *(undefined4 *)(lVar6 + 8 + lVar9) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar6 + 0xc + lVar9) = uStack_a0._4_4_;
    uStack_a0 = 0;
    *(undefined8 *)(lVar6 + 0x10 + lVar9) = 0;
    *(ulonglong *)(lVar6 + 0x10 + lVar9) = local_98;
    local_98 = 0;
    *(undefined4 *)(lVar6 + 0x18 + lVar9) = (undefined4)local_90;
    *(undefined4 *)(lVar6 + 0x1c + lVar9) = local_90._4_4_;
    local_90 = 0;
  }
  FUN_146637162(&local_a8,&DAT_14cbdc8d0,&DAT_14cbdca70);
  iVar11 = *(int *)(param_1 + 0x2b8);
  *(uint *)(param_1 + 0x2b8) = iVar11 + 1U;
  if (*(uint *)(param_1 + 700) < iVar11 + 1U) {
    FUN_146638242(plVar2,iVar11);
  }
  lVar6 = *plVar2;
  lVar9 = (longlong)iVar11 * 0x20;
  *(undefined8 *)(lVar6 + lVar9) = 0;
  *(undefined8 *)(lVar6 + lVar9) = local_a8;
  *(undefined4 *)(lVar6 + 8 + lVar9) = (undefined4)uStack_a0;
  *(undefined4 *)(lVar6 + 0xc + lVar9) = uStack_a0._4_4_;
  *(undefined8 *)(lVar6 + 0x10 + lVar9) = 0;
  *(ulonglong *)(lVar6 + 0x10 + lVar9) = local_98;
  *(undefined4 *)(lVar6 + 0x18 + lVar9) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x1c + lVar9) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  FUN_144315e9e(param_1);
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if ((local_60[0] ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e88e7a FUN_148e88e7a body=433 status=ok
// SIG undefined FUN_148e88e7a(void)

void FUN_148e88e7a(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e82344();
  FUN_148e85b8e(param_1);
  FUN_148e85cd8(param_1);
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) goto LAB_148e88eb8;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd110);
  }
  pbVar1 = (byte *)*puVar3;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  cVar2 = FUN_148e9a638(uVar6);
  if (cVar2 == *(char *)(lVar5 + 0xb6c)) {
    iVar7 = 1;
    if (*(int *)(lVar5 + 0xb70) == 0) goto LAB_148e88f27;
  }
  else {
    iVar7 = *(int *)(lVar5 + 0xb70) + 1;
LAB_148e88f27:
    *(char *)(lVar5 + 0xb6c) = cVar2;
    *(int *)(lVar5 + 0xb70) = iVar7;
  }
  *(undefined4 *)(lVar5 + 0xac0) = 0;
  if (*(char *)(param_1 + 0x390) == '\x01') {
    FUN_1442cc06e(param_1);
    FUN_148e8902c(param_1);
  }
  plVar4 = (longlong *)FUN_148e898f0(param_1);
  lVar5 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x88));
  *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
  *(int *)(lVar5 + 0x78) = *(int *)(lVar5 + 0x78) + 1;
  FUN_148ee6250(lVar5 + 8);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x88));
  lVar5 = FUN_14479d2ce(param_1 + 0x30);
  FUN_1403ca8ec(lVar5 + 0x3c0,&DAT_14cbd93c0);
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c7340;
  FUN_1446ddc76(&local_38,"PlayerController",1);
  FUN_14039176c(puVar3,uVar6,local_38,1);
  *puVar3 = &PTR_FUN_14b9c7340;
  FUN_140391314(param_1,puVar3);
LAB_148e88eb8:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8902c FUN_148e8902c body=2242 status=ok
// SIG undefined FUN_148e8902c(void)

void FUN_148e8902c(longlong param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  void *pvVar16;
  void *_Src;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  void *pvVar21;
  void *pvVar22;
  longlong lVar23;
  void *pvVar24;
  longlong lVar25;
  void *pvVar26;
  float fVar27;
  undefined1 auStack_7e8 [40];
  longlong *local_7c0;
  int local_7b4;
  longlong local_7b0;
  ulonglong local_7a8;
  longlong local_7a0;
  void *local_798;
  void *local_790;
  longlong local_788;
  undefined8 uStack_780;
  longlong local_778;
  longlong local_770;
  undefined4 local_768 [188];
  longlong local_478;
  ulonglong uStack_470;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  plVar9 = (longlong *)FUN_148e8625c();
  lVar25 = *plVar9;
  AcquireSRWLockShared((PSRWLOCK)(lVar25 + 0x1c0));
  iVar17 = *(int *)(lVar25 + 0x10) - *(int *)(lVar25 + 8);
  ReleaseSRWLockShared((PSRWLOCK)(lVar25 + 0x1c0));
  local_7b0 = param_1;
  plVar9 = (longlong *)FUN_148e8625c(param_1);
  lVar25 = *plVar9;
  AcquireSRWLockShared((PSRWLOCK)(lVar25 + 0x1c0));
  local_788 = 0;
  uStack_780 = 0;
  if ((longlong)*(int *)(lVar25 + 0x88) != 0) {
    lVar15 = *(longlong *)(lVar25 + 0x80);
    lVar18 = (longlong)*(int *)(lVar25 + 0x88) * 0x430;
    do {
      uVar19 = uStack_780;
      if ((*(byte *)(lVar15 + 0x18) & 8) != 0) {
        lVar23 = (longlong)(int)uStack_780;
        uVar5 = (int)uStack_780 + 1;
        uStack_780 = CONCAT44(uStack_780._4_4_,uVar5);
        if (uStack_780._4_4_ < uVar5) {
          FUN_145917388(&local_788,uVar19 & 0xffffffff);
        }
        FUN_1413505e4(lVar23 * 0x430 + local_788);
      }
      lVar15 = lVar15 + 0x430;
      lVar18 = lVar18 + -0x430;
    } while (lVar18 != 0);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar25 + 0x1c0));
  lVar25 = local_788;
  iVar6 = (int)uStack_780;
  lVar15 = (longlong)(int)uStack_780;
  local_7b4 = iVar17;
  local_7a0 = lVar15;
  if (1 < lVar15) {
    memset(local_768,0,0x2f0);
    local_778 = lVar25;
    local_770 = lVar15 * 0x430 + lVar25 + -0x430;
    fVar27 = logf((float)iVar6);
    local_768[0] = (int)(longlong)(fVar27 + fVar27);
    plVar9 = &local_778;
    do {
      _Src = (void *)*plVar9;
      pvVar22 = (void *)plVar9[1];
      iVar17 = (int)plVar9[2];
      iVar6 = (int)((ulonglong)((longlong)pvVar22 - (longlong)_Src) >> 4) * 0x7a44c6b;
      uVar5 = iVar6 + 1;
      pvVar26 = _Src;
      pvVar24 = pvVar22;
      local_7c0 = plVar9;
      if (iVar17 != 0) {
LAB_148e891c0:
        if (8 < (int)uVar5) {
          local_7a8 = CONCAT44(local_7a8._4_4_,iVar17);
          pvVar16 = (void *)((ulonglong)(uVar5 >> 1) * 0x430 + (longlong)_Src);
          local_798 = pvVar26;
          local_790 = pvVar24;
          memcpy(&local_478,pvVar16,0x430);
          memcpy(pvVar16,_Src,0x430);
          memcpy(_Src,&local_478,0x430);
          pvVar16 = (void *)((longlong)pvVar22 + 0x430);
          pvVar12 = _Src;
          do {
            pvVar24 = (void *)((longlong)pvVar12 + 0x430);
            pvVar4 = (void *)((longlong)pvVar12 + 0x430);
            do {
              pvVar12 = pvVar4;
              pvVar26 = pvVar24;
              if ((pvVar22 < pvVar12) || ((*(byte *)((longlong)_Src + 0x10) & 1) == 0)) break;
              pvVar24 = (void *)((longlong)pvVar26 + 0x430);
              pvVar4 = (void *)((longlong)pvVar12 + 0x430);
            } while ((*(byte *)((longlong)pvVar12 + 0x10) & 1) == 0);
            pvVar4 = (void *)((longlong)pvVar16 + -0x860);
            do {
              pvVar21 = pvVar16;
              pvVar24 = pvVar4;
              pvVar16 = (void *)((longlong)pvVar21 + -0x430);
              if ((pvVar16 <= _Src) || ((*(byte *)((longlong)pvVar21 + -0x420) & 1) == 0)) break;
              pvVar4 = (void *)((longlong)pvVar24 + -0x430);
            } while ((*(byte *)((longlong)_Src + 0x10) & 1) == 0);
            if (pvVar16 < pvVar12) goto LAB_148e892d7;
            memcpy(&local_478,pvVar12,0x430);
            memcpy(pvVar12,pvVar16,0x430);
            memcpy(pvVar16,&local_478,0x430);
          } while( true );
        }
        for (; plVar9 = local_7c0, pvVar26 = _Src, pvVar24 = _Src, _Src < pvVar22;
            pvVar22 = (void *)((longlong)pvVar22 + -0x430)) {
          while (pvVar16 = (void *)((longlong)pvVar24 + 0x430), pvVar16 <= pvVar22) {
            pvVar12 = pvVar26;
            if ((*(byte *)((longlong)pvVar24 + 0x440) & 1) != 0) {
              pvVar12 = pvVar16;
            }
            pbVar1 = (byte *)((longlong)pvVar26 + 0x10);
            pvVar26 = pvVar16;
            pvVar24 = pvVar16;
            if ((*pbVar1 & 1) != 0) {
              pvVar26 = pvVar12;
            }
          }
          memcpy(&local_478,pvVar26,0x430);
          memcpy(pvVar26,pvVar22,0x430);
          memcpy(pvVar22,&local_478,0x430);
        }
        goto LAB_148e896bd;
      }
LAB_148e893c9:
      plVar9 = local_7c0;
      if (uVar5 != 0) {
        uVar7 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_7a8 = (ulonglong)uVar7;
          uVar19 = local_7a8;
          while (uVar3 = uVar7 * 2 + 1, (int)uVar3 < (int)uVar5) {
            uVar14 = uVar7 * 2 + 2;
            uVar7 = uVar3;
            if ((int)uVar14 < (int)uVar5) {
              if ((*(byte *)((longlong)_Src + (longlong)(int)uVar3 * 0x430 + 0x10) & 1) == 0) {
                uVar7 = uVar14;
              }
              if ((*(byte *)((longlong)_Src + (longlong)(int)uVar14 * 0x430 + 0x10) & 1) == 0) {
                uVar7 = uVar3;
              }
            }
            lVar25 = (longlong)(int)uVar19 * 0x430;
            if (((*(byte *)((longlong)_Src + lVar25 + 0x10) & 1) != 0) &&
               ((*(byte *)((longlong)_Src + (longlong)(int)uVar7 * 0x430 + 0x10) & 1) == 0)) break;
            pvVar26 = (void *)(lVar25 + (longlong)_Src);
            pvVar22 = (void *)((longlong)(int)uVar7 * 0x430 + (longlong)_Src);
            memcpy(&local_478,pvVar26,0x430);
            memcpy(pvVar26,pvVar22,0x430);
            memcpy(pvVar22,&local_478,0x430);
            uVar19 = (ulonglong)uVar7;
          }
          uVar7 = (int)local_7a8 - 1;
        } while ((int)local_7a8 != 0);
        plVar9 = local_7c0;
        if (1 < (int)uVar5) {
          pvVar22 = (void *)(((ulonglong)uVar5 - 1) * 0x430 + (longlong)_Src);
          memcpy(&local_478,_Src,0x430);
          memcpy(_Src,pvVar22,0x430);
          memcpy(pvVar22,&local_478,0x430);
          plVar9 = local_7c0;
          uVar19 = (ulonglong)uVar5 - 1;
          if (uVar5 != 2) {
            do {
              iVar17 = 0;
              iVar8 = 1;
              iVar6 = 0;
              do {
                iVar17 = iVar17 + 2;
                iVar20 = iVar8;
                if ((longlong)iVar17 < (longlong)uVar19) {
                  if ((*(byte *)((longlong)_Src + (longlong)iVar8 * 0x430 + 0x10) & 1) == 0) {
                    iVar20 = iVar17;
                  }
                  if ((*(byte *)((longlong)_Src + (longlong)iVar17 * 0x430 + 0x10) & 1) == 0) {
                    iVar20 = iVar8;
                  }
                }
                if (((*(byte *)((longlong)_Src + (longlong)iVar6 * 0x430 + 0x10) & 1) != 0) &&
                   ((*(byte *)((longlong)_Src + (longlong)iVar20 * 0x430 + 0x10) & 1) == 0)) break;
                pvVar26 = (void *)((longlong)iVar6 * 0x430 + (longlong)_Src);
                pvVar22 = (void *)((longlong)iVar20 * 0x430 + (longlong)_Src);
                memcpy(&local_478,pvVar26,0x430);
                memcpy(pvVar26,pvVar22,0x430);
                memcpy(pvVar22,&local_478,0x430);
                iVar17 = iVar20 * 2;
                iVar8 = iVar20 * 2 + 1;
                iVar6 = iVar20;
              } while ((longlong)iVar8 < (longlong)uVar19);
              pvVar22 = (void *)((uVar19 - 1) * 0x430 + (longlong)_Src);
              memcpy(&local_478,_Src,0x430);
              memcpy(_Src,pvVar22,0x430);
              memcpy(pvVar22,&local_478,0x430);
              bVar2 = 2 < uVar19;
              plVar9 = local_7c0;
              uVar19 = uVar19 - 1;
            } while (bVar2);
          }
        }
      }
LAB_148e896bd:
      plVar9 = plVar9 + -3;
    } while (&local_778 <= plVar9);
    iVar6 = (int)local_7a0;
  }
  if (local_7b4 < iVar6) {
    iVar17 = 0;
    if (0 < local_7b4) {
      iVar17 = local_7b4;
    }
    FUN_148e8aeac(&local_788,iVar17);
  }
  lVar15 = local_788;
  lVar25 = local_7b0;
  lVar18 = (longlong)(int)uStack_780;
  if (lVar18 != 0) {
    lVar13 = lVar18 * 0x430;
    lVar23 = local_788;
    do {
      if ((*(byte *)(lVar23 + 0x10) & 1) != 0) {
        if (lVar23 != 0) {
          local_478 = 0;
          uStack_470 = 0;
          if ((int)uStack_780 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uStack_780 & 0xffffffff);
          }
          FUN_148e9a4d0(&local_478);
          if ((longlong)(int)uStack_780 != 0) {
            lVar15 = (longlong)(int)uStack_780 * 0x430;
            lVar25 = local_788;
            do {
              uVar11 = FUN_141352650(&local_478);
              FUN_141352d9a(uVar11,lVar25);
              lVar25 = lVar25 + 0x430;
              lVar15 = lVar15 + -0x430;
            } while (lVar15 != 0);
          }
          FUN_1442cb552(local_7b0,&local_478);
          FUN_1412d6a39(local_478,uStack_470 & 0xffffffff);
          if (local_478 != 0) {
            FUN_1400020a8();
          }
          goto LAB_148e897da;
        }
        break;
      }
      lVar23 = lVar23 + 0x430;
      lVar13 = lVar13 + -0x430;
    } while (lVar13 != 0);
    lVar23 = 0;
    do {
      puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar11 = *(undefined8 *)(lVar25 + 0x30);
      *puVar10 = &PTR_FUN_14b9c6b40;
      FUN_1446ddc76(&local_478,"Deposit",1);
      FUN_14039176c(puVar10,uVar11,local_478,1);
      *puVar10 = &PTR_FUN_14b9c6b40;
      *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(lVar15 + 8 + lVar23);
      FUN_140391314(lVar25,puVar10);
      lVar23 = lVar23 + 0x430;
    } while (lVar18 * 0x430 - lVar23 != 0);
  }
  lVar25 = local_7b0;
  if (local_7b4 < (int)local_7a0) {
    FUN_140de1078(local_7b0,&DAT_14cbdcbf8,0,0);
    lVar15 = lVar25 + 0x2f8;
  }
  else {
    if ((int)uStack_780 == 0) goto LAB_148e897da;
    lVar15 = local_7b0 + 0x380;
  }
  FUN_1457d7894(lVar25,lVar15);
LAB_148e897da:
  FUN_141286eab(local_788,uStack_780 & 0xffffffff);
  if (local_788 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_7e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148e892d7:
  memcpy(&local_478,_Src,0x430);
  memcpy(_Src,pvVar16,0x430);
  memcpy(pvVar16,&local_478,0x430);
  iVar17 = (int)local_7a8 + -1;
  pvVar21 = (void *)((longlong)pvVar21 + -0x860);
  if ((longlong)pvVar24 - (longlong)local_798 < (longlong)local_790 - (longlong)pvVar26) {
    plVar9 = local_7c0;
    if (pvVar12 < pvVar22) {
      *local_7c0 = (longlong)pvVar12;
      local_7c0[1] = (longlong)pvVar22;
      *(int *)(local_7c0 + 2) = iVar17;
      plVar9 = local_7c0 + 3;
    }
    pvVar26 = _Src;
    if (pvVar16 <= (void *)((longlong)_Src + 0x430U)) goto LAB_148e896bd;
  }
  else {
    if ((void *)((longlong)_Src + 0x430U) < pvVar16) {
      *local_7c0 = (longlong)_Src;
      local_7c0[1] = (longlong)pvVar21;
      *(int *)(local_7c0 + 2) = iVar17;
      local_7c0 = local_7c0 + 3;
    }
    plVar9 = local_7c0;
    _Src = pvVar12;
    pvVar21 = pvVar22;
    pvVar24 = pvVar22;
    if (pvVar22 <= pvVar12) goto LAB_148e896bd;
  }
  local_7c0 = plVar9;
  iVar6 = (int)((ulonglong)((longlong)pvVar24 - (longlong)pvVar26) >> 4) * 0x7a44c6b;
  uVar5 = iVar6 + 1;
  pvVar22 = pvVar21;
  if (iVar17 == 0) goto LAB_148e893c9;
  goto LAB_148e891c0;
}



// FUNCTION 148e898f0 FUN_148e898f0 body=121 status=ok
// SIG undefined FUN_148e898f0(void)

longlong FUN_148e898f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8996a FUN_148e8996a body=165 status=ok
// SIG undefined FUN_148e8996a(void)

void FUN_148e8996a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e8787e();
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71e0;
  FUN_1446ddc76(&local_38,"ClearPendingThumbnails",1);
  FUN_14039176c(puVar2,uVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9c71e0;
  FUN_140391314(param_1,puVar2);
  FUN_148e82806(param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e89a10 FUN_148e89a10 body=661 status=ok
// SIG undefined FUN_148e89a10(void)

void FUN_148e89a10(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  char *pcVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457fc042();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    bVar9 = false;
    goto LAB_148e89a46;
  }
  *(undefined2 *)(lVar1 + 0x398) = 0x101;
  puVar6 = (undefined8 *)FUN_148e898f0(param_1);
  pcVar2 = (char *)*puVar6;
  SRWLock = (PSRWLOCK)(pcVar2 + 0x88);
  AcquireSRWLockShared(SRWLock);
  cVar7 = *pcVar2;
  ReleaseSRWLockShared(SRWLock);
  bVar9 = *(char *)(lVar1 + 0xb6c) != cVar7;
  if (bVar9) {
    *(char *)(lVar1 + 0xb6c) = cVar7;
    *(int *)(lVar1 + 0xb70) = *(int *)(lVar1 + 0xb70) + 1;
    FUN_14431454e(lVar1);
    cVar7 = *(char *)(lVar1 + 0xb6c);
  }
  *(byte *)(lVar1 + 0x330) = *(byte *)(lVar1 + 0x330) | bVar9 << 7;
  *(byte *)(lVar1 + 0x331) = *(byte *)(lVar1 + 0x331) | bVar9 * '\x02';
  if (cVar7 == '\0') {
    FUN_1400b22c2(local_48,"bankdeposit");
    FUN_1412fabe8(lVar1 + 0xa08,local_48);
    FUN_1410d0f68(lVar1 + 0x998);
LAB_148e89c63:
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (cVar7 == '\x01') {
    FUN_1400b22c2(local_48,"bankdeposit");
    FUN_148e6a174(lVar1 + 0x998,local_48);
    goto LAB_148e89c63;
  }
  *(undefined1 *)(lVar1 + 0x928) = 0;
  *(undefined1 *)(lVar1 + 0xc0) = 0;
  *(undefined1 *)(lVar1 + 0x1c0) = 0;
LAB_148e89a46:
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd148);
  }
  if (*plVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14000584e(*plVar4,0);
  }
  *(undefined1 *)(param_1 + 0x390) = uVar3;
  puVar8 = &DAT_14c9a1308;
  puVar6 = &DAT_14c9a1308;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd130);
  }
  uVar5 = FUN_140625082(puVar6,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,local_48,1);
  *(longlong *)(param_1 + 0x378) = local_48[0];
  puVar6 = &DAT_14c9a1308;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd138);
  }
  uVar5 = FUN_140625082(puVar6,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,local_48,1);
  *(longlong *)(param_1 + 0x380) = local_48[0];
  if (*(longlong *)(param_1 + 0x160) != 0) {
    puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd140);
  }
  uVar5 = FUN_140625082(puVar8,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,local_48,1);
  *(longlong *)(param_1 + 0x388) = local_48[0];
  if (bVar9) {
    FUN_148e85cd8(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e89cac FUN_148e89cac body=226 status=ok
// SIG undefined FUN_148e89cac(void)

void FUN_148e89cac(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e865aa();
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    plVar2 = (longlong *)FUN_148e861a2(param_1);
    lVar1 = *plVar2;
    SRWLock = (PSRWLOCK)(lVar1 + 0x58);
    AcquireSRWLockShared(SRWLock);
    FUN_144313ede(lVar3,local_40);
    lVar3 = FUN_148e1b2aa(lVar1,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(SRWLock);
    if (lVar3 != 0) {
      plVar2 = (longlong *)FUN_148e898f0(param_1);
      lVar1 = *plVar2;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
      *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
      *(int *)(lVar1 + 0x78) = *(int *)(lVar1 + 0x78) + 1;
      FUN_148eddec8(lVar1 + 8,lVar3);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e89d90 FUN_148e89d90 body=503 status=ok
// SIG undefined FUN_148e89d90(void)

void FUN_148e89d90(longlong *param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148e8378e();
  lVar3 = (**(code **)(*param_1 + 400))(param_1);
  if ((((lVar3 != 0) && ((*(char *)(lVar3 + 0x1c0) != '\0' || (*(char *)(lVar3 + 0xc0) != '\0'))))
      || (lVar3 = param_1[0x51], lVar3 == 0)) ||
     ((lVar4 = (**(code **)(*param_1 + 0x198))(param_1), lVar4 == 0 ||
      (*(int *)(lVar4 + 0x67c) == -1)))) goto LAB_148e89f48;
  cVar2 = *(char *)(lVar3 + 0xb6c);
  plVar5 = (longlong *)FUN_148e8625c(param_1);
  lVar3 = *plVar5;
  bVar10 = cVar2 != '\0';
  lVar9 = lVar3 + 8;
  if (!bVar10) {
    lVar9 = lVar3 + 0x50;
  }
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
  cVar2 = FUN_148e1abee(lVar9);
  uVar7 = 1;
  if (cVar2 == '\0') {
    uVar7 = (uint)bVar10 * 0x100 + 0x101;
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x1c0));
  cVar2 = FUN_148e89f88(param_1,lVar4 + 0x428);
  uVar8 = uVar7;
  if ((cVar2 != '\0') && (uVar8 = uVar7 + 0x400, (*(byte *)(lVar4 + 0x4c4) & 2) != 0)) {
    uVar8 = uVar7;
  }
  plVar5 = (longlong *)FUN_1408cbae2(param_1);
  lVar3 = *plVar5;
  SRWLock = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar3 + 0x60) == -1) {
    iVar1 = *(int *)(lVar3 + 0x68);
    ReleaseSRWLockShared(SRWLock);
    if (iVar1 != 0) goto LAB_148e89edf;
    uVar7 = 0x10;
  }
  else {
    ReleaseSRWLockShared(SRWLock);
LAB_148e89edf:
    uVar7 = 0x20;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar3 = param_1[6];
  *puVar6 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(&local_50,"SetGlyphs",1);
  FUN_14039176c(puVar6,lVar3,local_50,1);
  *puVar6 = &PTR_FUN_14b9c7290;
  *(uint *)(puVar6 + 7) = uVar8 | uVar7 | 2;
  FUN_140391314(param_1,puVar6);
LAB_148e89f48:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e89f88 FUN_148e89f88 body=139 status=ok
// SIG undefined FUN_148e89f88(void)

ulonglong FUN_148e89f88(longlong *param_1,undefined8 param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar4 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar4 + 0x110))(plVar4,param_2);
    if ((cVar2 != '\0') && (param_1[0x51] != 0)) {
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (*(char *)(param_1[0x51] + 0xb6c) == '\0') {
        plVar4 = (longlong *)FUN_148e8625c(param_1);
        lVar1 = *plVar4;
        SRWLock = (PSRWLOCK)(lVar1 + 0x1c0);
        AcquireSRWLockShared(SRWLock);
        uVar3 = FUN_148e1abee(lVar1 + 0x50);
        uVar5 = (ulonglong)uVar3 ^ 1;
        ReleaseSRWLockShared(SRWLock);
      }
      goto LAB_148e8a009;
    }
  }
  uVar5 = 0;
LAB_148e8a009:
  return uVar5 & 0xffffffff;
}



// FUNCTION 148e8a014 FUN_148e8a014 body=796 status=ok
// SIG undefined FUN_148e8a014(void)

void FUN_148e8a014(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  ulonglong *local_2e0;
  longlong local_2d8;
  undefined4 local_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0 [77];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar9 = *(longlong *)(param_1 + 0x288);
  if ((((lVar9 == 0) || (lVar5 = FUN_148ee5454(lVar9), lVar5 == 0)) ||
      ((*(int *)(lVar5 + 0x254) == -1 &&
       ((*(int *)(lVar5 + 600) == 0 && ((*(byte *)(lVar5 + 0x9f) & 0x20) == 0)))))) ||
     ((*(byte *)(lVar5 + 0x9c) & 1) != 0)) goto LAB_148e8a155;
  local_2c8 = 0;
  uStack_2c0 = 0;
  if ((longlong)*(int *)(lVar9 + 0x408) != 0) {
    lVar12 = *(longlong *)(lVar9 + 0x400);
    lVar11 = (longlong)*(int *)(lVar9 + 0x408) * 0x268;
    do {
      uVar3 = uStack_2c0;
      if (((*(byte *)(lVar12 + 0x9c) & 1) == 0) && (-1 < *(char *)(lVar12 + 0x9d))) {
        lVar10 = (longlong)(int)uStack_2c0;
        uVar4 = (int)uStack_2c0 + 1;
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar4);
        if (uStack_2c0._4_4_ < uVar4) {
          FUN_14591741c(&local_2c8,uVar3 & 0xffffffff);
        }
        FUN_148c6b498(lVar10 * 0x268 + local_2c8,lVar12);
      }
      lVar12 = lVar12 + 0x268;
      lVar11 = lVar11 + -0x268;
    } while (lVar11 != 0);
  }
  if (*(char *)(lVar9 + 0xb6c) == '\0') {
    lVar12 = 0x50;
LAB_148e8a1ad:
    plVar6 = (longlong *)FUN_148e8625c(param_1);
    lVar11 = *plVar6;
    AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x1c0));
    iVar1 = *(int *)(lVar11 + 8 + lVar12);
    iVar2 = *(int *)(lVar11 + lVar12);
    ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x1c0));
    if (iVar1 <= iVar2) goto LAB_148e8a114;
    FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
    *(undefined1 *)(lVar9 + 0x928) = 0;
    if (*(char *)(lVar9 + 0xb6c) == '\0') {
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c4440;
      FUN_1446ddc76(local_2b0,"Withdraw",1);
      FUN_14039176c(puVar8,uVar7,local_2b0[0],1);
      *puVar8 = &PTR_FUN_14b9c4440;
      *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(lVar5 + 0x254);
      FUN_140391314(param_1,puVar8);
      lVar9 = param_1 + 0x388;
      goto LAB_148e8a130;
    }
    if (*(char *)(lVar9 + 0xb6c) == '\x01') {
      if ((*(byte *)(lVar5 + 0x9c) & 2) == 0) {
        uVar7 = FUN_14001cc68(0x40,0x10);
        FUN_148e87652(uVar7,*(undefined8 *)(param_1 + 0x30),(undefined4 *)(lVar5 + 0x254));
        FUN_140391314(param_1,uVar7);
        lVar9 = param_1 + 0x310;
        goto LAB_148e8a130;
      }
      FUN_148c6b498(local_2b0,lVar5);
      local_2e0 = &local_48;
      local_2e8 = local_2b0;
      FUN_148e8a332(&local_2d8);
      FUN_1442cb552(param_1,&local_2d8);
      FUN_1412d6a39(local_2d8,local_2d0);
      if (local_2d8 != 0) {
        FUN_1400020a8();
      }
      FUN_1412d6a62(local_2b0);
    }
  }
  else {
    if (*(char *)(lVar9 + 0xb6c) == '\x01') {
      lVar12 = 8;
      goto LAB_148e8a1ad;
    }
LAB_148e8a114:
    FUN_140de1078(param_1,&DAT_14cbdcbf8,0,0);
    lVar9 = param_1 + 0x2f8;
LAB_148e8a130:
    FUN_1457d7894(param_1,lVar9);
  }
  FUN_1412d6a39(local_2c8,uStack_2c0 & 0xffffffff);
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
LAB_148e8a155:
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8a332 FUN_148e8a332 body=91 status=ok
// SIG undefined FUN_148e8a332(void)

undefined8 * FUN_148e8a332(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * 0x3f2b3885;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c6b3ea(param_1,iVar2,0);
    FUN_148c6b45c(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 148e8a38e FUN_148e8a38e body=702 status=ok
// SIG undefined FUN_148e8a38e(void)

void FUN_148e8a38e(longlong param_1,undefined4 param_2)

{
  PSRWLOCK pRVar1;
  longlong lVar2;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *_Str;
  undefined1 auStack_78 [32];
  wchar_t **local_58;
  wchar_t *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0xb6c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    cVar4 = FUN_1442afe02(lVar2 + 0x918,param_2);
    if (cVar4 != '\0') {
      uVar6 = FUN_1442afe10(lVar2 + 0x918,param_2);
      FUN_144a49bb4(uVar6,&local_50,5);
      _Str = local_50;
      if (local_48 == 0) {
        _Str = L"";
      }
      iVar5 = _wtoi(_Str);
      if (local_50 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      plVar7 = (longlong *)FUN_148e834c2(param_1);
      lVar8 = *plVar7;
      pRVar1 = (PSRWLOCK)(lVar8 + 0x1478);
      AcquireSRWLockShared(pRVar1);
      lVar8 = FUN_140f99464(lVar8,iVar5);
      ReleaseSRWLockShared(pRVar1);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x50) == '\x01') {
          FUN_140de1078(param_1,&DAT_14cbdcbf8,0,0);
        }
        else {
          if (*(int *)(lVar8 + 0x58) != -1) {
            plVar7 = (longlong *)FUN_148e8625c(param_1);
            lVar8 = *plVar7;
            pRVar1 = (PSRWLOCK)(lVar8 + 0x1c0);
            AcquireSRWLockShared(pRVar1);
            cVar4 = FUN_148e1abee(lVar8 + 0x50);
            ReleaseSRWLockShared(pRVar1);
            if (cVar4 != '\0') {
              FUN_140de1078(param_1,&DAT_14cbdcbf8,0,0);
              FUN_1457d7894(param_1,param_1 + 0x2f8);
              goto LAB_148e8a3da;
            }
          }
          lVar8 = FUN_148ee5474(lVar2);
          if (lVar8 != 0) {
            uVar6 = FUN_14001cc68(0x48,0x10);
            lVar9 = FUN_14011c349();
            local_50 = *(wchar_t **)(lVar9 + 0x60);
            local_58 = &local_50;
            FUN_148e8417c(uVar6,*(undefined8 *)(param_1 + 0x30),iVar5,lVar8 + 0x254);
            FUN_140391314(param_1,uVar6);
            uVar6 = FUN_14001cc68(0x40,0x10);
            FUN_148e83602(uVar6,*(undefined8 *)(param_1 + 0x30),1);
            FUN_140391314(param_1,uVar6);
            uVar6 = FUN_14001cc68(0x40,0x10);
            FUN_148e83602(uVar6,*(undefined8 *)(param_1 + 0x30),0);
            FUN_140391314(param_1,uVar6);
            FUN_148ee407e(lVar8,&local_50);
            FUN_140de1078(param_1,&local_50,0,0);
            if (local_50 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            FUN_1457d7894(param_1,param_1 + 800);
            *(undefined1 *)(lVar2 + 0x928) = 0;
            FUN_148ee2882(lVar2,0xffffffff);
            puVar3 = *(ushort **)(lVar2 + 0x80);
            if (puVar3 != (ushort *)0x0) {
              *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
            }
          }
        }
      }
    }
  }
LAB_148e8a3da:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8a666 FUN_148e8a666 body=273 status=ok
// SIG undefined FUN_148e8a666(void)

void FUN_148e8a666(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1442c8c42();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_148e8a894;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148e8a778(param_1,param_2,&DAT_14cb92b40,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148e8a90e(param_1,param_2,&DAT_14cb92b40,param_1);
      local_48 = FUN_148e8aa8e;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148e8a778(param_1,param_2,&DAT_14cb92b38,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148e8a90e(param_1,param_2,&DAT_14cb92b38,param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8a778 FUN_148e8a778 body=282 status=ok
// SIG undefined FUN_148e8a778(void)

void FUN_148e8a778(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442da71c(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8a894 FUN_148e8a894 body=121 status=ok
// SIG undefined FUN_148e8a894(void)

void FUN_148e8a894(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if ((((lVar1 == 0) ||
       (((*(int *)(lVar1 + 0x67c) == -1 && (*(int *)(lVar1 + 0x680) == 0)) &&
        ((*(byte *)(lVar1 + 0x4c7) & 0x20) == 0)))) || ((*(byte *)(lVar1 + 0x4c4) & 2) == 0)) &&
     (lVar1 = param_1[0x51], lVar1 != 0)) {
    FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
    FUN_148e842a6(param_1,*(undefined4 *)(lVar1 + 0x328));
    return;
  }
  return;
}



// FUNCTION 148e8a90e FUN_148e8a90e body=382 status=ok
// SIG undefined FUN_148e8a90e(void)

void FUN_148e8a90e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442da7a0(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442da7a0(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1442da7a0(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8aa8e FUN_148e8aa8e body=801 status=ok
// SIG undefined FUN_148e8aa8e(void)

void FUN_148e8aa8e(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_148e8aba4;
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)*(int *)(lVar6 + 0x408) != 0) {
    lVar8 = *(longlong *)(lVar6 + 0x400);
    lVar10 = (longlong)*(int *)(lVar6 + 0x408) * 0x268;
    do {
      uVar2 = uStack_60;
      if (((*(byte *)(lVar8 + 0x9c) & 1) == 0) && (-1 < *(char *)(lVar8 + 0x9d))) {
        lVar9 = (longlong)(int)uStack_60;
        uVar3 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        if (uStack_60._4_4_ < uVar3) {
          FUN_14591741c(&local_68,uVar2 & 0xffffffff);
        }
        FUN_148c6b498(lVar9 * 0x268 + local_68,lVar8);
      }
      lVar8 = lVar8 + 0x268;
      lVar10 = lVar10 + -0x268;
    } while (lVar10 != 0);
  }
  if (*(char *)(lVar6 + 0xb6c) == '\x01') {
    lVar8 = 8;
LAB_148e8ad6c:
    plVar5 = (longlong *)FUN_148e8625c(param_1);
    lVar10 = *plVar5;
    AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0x1c0));
    iVar7 = *(int *)(lVar10 + 8 + lVar8) - *(int *)(lVar10 + lVar8);
    ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0x1c0));
  }
  else {
    iVar7 = 0;
    if (*(char *)(lVar6 + 0xb6c) == '\0') {
      lVar8 = 0x50;
      goto LAB_148e8ad6c;
    }
  }
  if (iVar7 < (int)uStack_60) {
    FUN_140de1078(param_1,&DAT_14cbdcbf8,0,0);
    lVar6 = param_1 + 0x2f8;
LAB_148e8ab7f:
    FUN_1457d7894(param_1,lVar6);
  }
  else {
    FUN_140de1078(param_1,&DAT_14cbdcc28,0,0);
    lVar8 = local_68;
    if (*(char *)(lVar6 + 0xb6c) == '\x01') {
      if ((longlong)(int)uStack_60 != 0) {
        lVar9 = (longlong)(int)uStack_60 * 0x268;
        lVar10 = 0;
        do {
          if ((*(byte *)(local_68 + 0x9c + lVar10) & 2) != 0) {
            FUN_1442cb552(param_1,&local_68);
            goto LAB_148e8ab87;
          }
          lVar10 = lVar10 + 0x268;
        } while (lVar9 - lVar10 != 0);
        lVar10 = 0;
        local_70 = lVar6;
        do {
          puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
          uVar1 = *(undefined8 *)(param_1 + 0x30);
          *puVar4 = &PTR_FUN_14b9c6b40;
          FUN_1446ddc76(&local_50,"Deposit",1);
          FUN_14039176c(puVar4,uVar1,local_50,1);
          *puVar4 = &PTR_FUN_14b9c6b40;
          *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(lVar8 + 0x254 + lVar10);
          FUN_140391314(param_1,puVar4);
          lVar10 = lVar10 + 0x268;
        } while (lVar9 - lVar10 != 0);
        goto LAB_148e8ad3d;
      }
    }
    else if ((*(char *)(lVar6 + 0xb6c) == '\0') && (lVar10 = (longlong)(int)uStack_60, lVar10 != 0))
    {
      lVar9 = 0;
      local_70 = lVar6;
      do {
        puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        *puVar4 = &PTR_FUN_14b9c4440;
        FUN_1446ddc76(&local_50,"Withdraw",1);
        FUN_14039176c(puVar4,uVar1,local_50,1);
        *puVar4 = &PTR_FUN_14b9c4440;
        *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(lVar8 + 0x254 + lVar9);
        FUN_140391314(param_1,puVar4);
        lVar9 = lVar9 + 0x268;
      } while (lVar10 * 0x268 - lVar9 != 0);
LAB_148e8ad3d:
      lVar6 = param_1 + 0x300;
      if (*(char *)(local_70 + 0xb6c) == '\0') {
        lVar6 = param_1 + 0x378;
      }
      goto LAB_148e8ab7f;
    }
  }
LAB_148e8ab87:
  FUN_1412d6a39(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_148e8aba4:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8adb0 FUN_148e8adb0 body=250 status=ok
// SIG undefined FUN_148e8adb0(void)

void FUN_148e8adb0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    cVar1 = FUN_144709e00(*param_2,"DisplayPlayerStandin");
    if (cVar1 != '\0') {
      FUN_148e876d8(param_1);
    }
  }
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    FUN_1446ddc76(&local_38,"DisplayPlayerStandin",1);
    if (*param_2 == local_38) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar2 = &PTR_FUN_14b9c6e00;
      FUN_1446ddc76(&local_30,"MenuOpened",1);
      FUN_14039176c(puVar2,*(undefined8 *)(param_1 + 0x30),local_30,1);
      *puVar2 = &PTR_FUN_14b9c6e00;
      puVar2[7] = *(undefined8 *)(param_1 + 0x18);
      FUN_140391314(param_1,puVar2);
      FUN_148e876d8(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8aeac FUN_148e8aeac body=112 status=ok
// SIG undefined FUN_148e8aeac(void)

void FUN_148e8aeac(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145917388(param_1,iVar1);
    }
    FUN_1457a6a0f((longlong)iVar1 * 0x430 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_148e9b2d8(param_1,param_2,iVar1 - param_2);
  FUN_148e9b33a(param_1);
  return;
}



// FUNCTION 148e8af1c FUN_148e8af1c body=86 status=ok
// SIG undefined FUN_148e8af1c(void)

undefined8 * FUN_148e8af1c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2d0);
  memset(_Dst,0,0x2d0);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  *_Dst = &PTR_FUN_14b9c4470;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  return _Dst;
}



// FUNCTION 148e8af72 FUN_148e8af72 body=753 status=ok
// SIG undefined FUN_148e8af72(void)

void FUN_148e8af72(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar9 = FUN_140625082(param_2,&DAT_14c9a12e0);
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  FUN_1400b2348(uVar9,&local_68,1);
  plVar5 = local_68;
  iVar8 = (int)uStack_60;
  uVar7 = (int)uStack_60 - 1;
  if ((int)uStack_60 == 0) {
    uVar7 = 0;
  }
  if (0 < (int)uVar7) {
    uVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)local_68 + uVar11 * 2);
      *(ushort *)((longlong)local_68 + uVar11 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  uVar6 = uStack_60._4_4_;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  if (*param_1 == 0) {
    *param_1 = (longlong)plVar5;
    *(int *)(param_1 + 1) = iVar8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  }
  else {
    FUN_1400020a8();
    *param_1 = (longlong)plVar5;
    *(int *)(param_1 + 1) = iVar8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbdd208);
  }
  pbVar4 = (byte *)*puVar10;
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(pbVar4 + 8);
  }
  FUN_1400b22c2(&local_68,uVar9);
  if ((longlong **)(param_1 + 8) == &local_68) {
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = (longlong)local_68;
    local_68 = (longlong *)0x0;
    *(int *)(param_1 + 9) = (int)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_60._4_4_;
  }
  if (*param_2 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbdd210);
  }
  pbVar4 = (byte *)*puVar10;
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(pbVar4 + 8);
  }
  FUN_1400b22c2(&local_68,uVar9);
  if ((longlong **)(param_1 + 2) == &local_68) {
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = (longlong)local_68;
    local_68 = (longlong *)0x0;
    *(int *)(param_1 + 3) = (int)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  }
  if (*param_2 == 0) {
    puVar10 = &DAT_14c9a1308;
  }
  else {
    puVar10 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbdd1f8);
  }
  iVar8 = FUN_140e1edd4(puVar10,0);
  *(byte *)((longlong)param_1 + 0x54) =
       *(byte *)((longlong)param_1 + 0x54) & 0xf7 | (0 < iVar8) << 3;
  if (0 < iVar8) {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_1413a454c(&local_68,iVar8,0);
    FUN_140008f88(param_1 + 4,&local_68);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    plVar5 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8b264 FUN_148e8b264 body=571 status=ok
// SIG undefined FUN_148e8b264(void)

longlong * FUN_148e8b264(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [40];
  longlong local_b0 [2];
  undefined **local_a0;
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
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = &PTR_FUN_14b895f80;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  iVar1 = (int)param_1[1];
  if (iVar1 == DAT_14cbdd280) {
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_1 + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(DAT_14cbdd278 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) goto LAB_148e8b344;
LAB_148e8b303:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_148e8b303;
      }
      if (uVar4 != uVar6) goto LAB_148e8b32e;
    }
  }
  else if (DAT_14cbdd280 + iVar1 != 1) {
LAB_148e8b32e:
    FUN_148ee4800(&local_a0);
    goto LAB_148e8b3fc;
  }
LAB_148e8b344:
  FUN_1400b22c2(local_b0,"taggroup1");
  FUN_148ee4800(&local_a0,local_b0);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b0,"taggroup2");
  FUN_148ee4800(&local_a0,local_b0);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b0,"taggroup3");
  FUN_148ee4800(&local_a0,local_b0);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_b0,"taggroup4");
  FUN_148ee4800(&local_a0,local_b0);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
LAB_148e8b3fc:
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)(int)param_3[1] != 0) {
    lVar3 = *param_3;
    lVar8 = (longlong)(int)param_3[1] * 0x268;
    do {
      cVar2 = FUN_141352880(&local_a0,lVar3);
      if (cVar2 != '\0') {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14591741c(param_2,iVar1);
        }
        FUN_148c6b498((longlong)iVar1 * 0x268 + *param_2,lVar3);
      }
      lVar3 = lVar3 + 0x268;
      lVar8 = lVar8 + -0x268;
    } while (lVar8 != 0);
  }
  FUN_14591706c(&local_a0);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148e8b4a0 FUN_148e8b4a0 body=512 status=ok
// SIG undefined FUN_148e8b4a0(void)

int FUN_148e8b4a0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = &PTR_FUN_14b895f80;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  iVar2 = (int)param_1[1];
  if (iVar2 == DAT_14cbdd280) {
    if (1 < iVar2) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_1 + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(DAT_14cbdd278 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) goto LAB_148e8b578;
LAB_148e8b537:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_148e8b537;
      }
      if (uVar4 != uVar6) goto LAB_148e8b562;
    }
  }
  else if (DAT_14cbdd280 + iVar2 != 1) {
LAB_148e8b562:
    FUN_148ee4800(&local_98);
    goto LAB_148e8b630;
  }
LAB_148e8b578:
  FUN_1400b22c2(local_a8,"taggroup1");
  FUN_148ee4800(&local_98,local_a8);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_a8,"taggroup2");
  FUN_148ee4800(&local_98,local_a8);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_a8,"taggroup3");
  FUN_148ee4800(&local_98,local_a8);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_a8,"taggroup4");
  FUN_148ee4800(&local_98,local_a8);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
LAB_148e8b630:
  iVar2 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar8 = (longlong)(int)param_2[1] * 0x268;
    iVar2 = 0;
    do {
      bVar1 = (*(code *)*local_98)(&local_98,lVar3);
      iVar2 = iVar2 + (uint)bVar1;
      lVar3 = lVar3 + 0x268;
      lVar8 = lVar8 + -0x268;
    } while (lVar8 != 0);
  }
  FUN_14591706c(&local_98);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8b6a2 FUN_148e8b6a2 body=572 status=ok
// SIG undefined FUN_148e8b6a2(void)

void FUN_148e8b6a2(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbdd1e0);
  }
  pbVar1 = (byte *)*puVar4;
  puVar8 = &DAT_149e02088;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
    puVar8 = &DAT_149e02088;
    if (*(undefined1 **)(pbVar1 + 8) != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(pbVar1 + 8);
    }
  }
  FUN_1400b22c2(&local_40,puVar8);
  if ((longlong *)(param_1 + 0xb0) == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xb0) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0xb8) = local_38;
    *(undefined4 *)(param_1 + 0xbc) = local_34;
  }
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbdd1e8);
  }
  pbVar1 = (byte *)*puVar4;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar1 + 8);
  }
  cVar3 = FUN_148e9a638(uVar6);
  if (cVar3 == *(char *)(param_1 + 0x1c0)) {
    iVar7 = 1;
    if (*(int *)(param_1 + 0x1c4) != 0) goto LAB_148e8b7a4;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1c4) + 1;
  }
  *(char *)(param_1 + 0x1c0) = cVar3;
  *(int *)(param_1 + 0x1c4) = iVar7;
LAB_148e8b7a4:
  iVar7 = *(int *)(param_1 + 0xcc);
  FUN_148c6c424(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if ((iVar7 < 0) && (*(int *)(param_1 + 0xcc) != 0)) {
    FUN_148e9b3e6(param_1 + 0xc0);
  }
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbdd200);
  }
  plVar5 = (longlong *)FUN_1407cbaec(puVar4);
  if ((longlong)(int)plVar5[2] != 0) {
    lVar9 = *plVar5;
    lVar10 = (longlong)(int)plVar5[2] << 4;
    do {
      uVar6 = FUN_148e8b8e0(param_1 + 0xc0);
      FUN_148e8af72(uVar6,lVar9);
      lVar9 = lVar9 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  puVar2 = *(ushort **)(param_1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8b8e0 FUN_148e8b8e0 body=59 status=ok
// SIG undefined FUN_148e8b8e0(void)

longlong FUN_148e8b8e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e9b41c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  thunk_FUN_148c6bd68(lVar2);
  return lVar2;
}



// FUNCTION 148e8b91c FUN_148e8b91c body=635 status=ok
// SIG undefined FUN_148e8b91c(void)

ulonglong FUN_148e8b91c(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 unaff_RBP;
  uint7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  plVar6 = (longlong *)FUN_148e8bb98();
  lVar5 = *plVar6;
  AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x1c0));
  if (*(int *)(param_1 + 0xd0) == *(int *)(lVar5 + 0x1b8)) {
    uVar8 = 0;
  }
  else {
    *(int *)(param_1 + 0xd0) = *(int *)(lVar5 + 0x1b8);
    iVar1 = *(int *)(param_1 + 0x114);
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar1 != iVar2) {
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar5 + 8);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar5 + 0xc);
    }
    iVar3 = *(int *)(param_1 + 0x11c);
    iVar4 = *(int *)(lVar5 + 0x14);
    if (iVar3 != iVar4) {
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lVar5 + 0x10);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(lVar5 + 0x14);
    }
    bVar12 = iVar1 != iVar2 || iVar3 != iVar4;
    uVar9 = (uint7)((ulonglong)unaff_RBP >> 8);
    if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x130) != *(int *)(lVar5 + 0x48))) {
      *(int *)(param_1 + 0x130) = *(int *)(lVar5 + 0x48);
      FUN_145916980(param_1 + 0x120,lVar5 + 0x38);
      iVar1 = *(int *)(param_1 + 0x144);
      FUN_1412d6a39(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
      *(undefined4 *)(param_1 + 0x140) = 0;
      if ((iVar1 < 0) && (*(int *)(param_1 + 0x144) != 0)) {
        FUN_148e9a4d0(param_1 + 0x138,0);
      }
      uVar9 = (uint7)(uint3)((uint)iVar1 >> 8);
      bVar12 = true;
      if ((longlong)*(int *)(param_1 + 0x128) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x120);
        lVar11 = (longlong)*(int *)(param_1 + 0x128) * 0x430;
        do {
          uVar7 = FUN_141352650(param_1 + 0x138);
          FUN_141352d9a(uVar7,lVar10);
          lVar10 = lVar10 + 0x430;
          lVar11 = lVar11 + -0x430;
        } while (lVar11 != 0);
      }
    }
    iVar1 = *(int *)(param_1 + 0xdc);
    iVar2 = *(int *)(lVar5 + 0x54);
    if (iVar1 != iVar2) {
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar5 + 0x50);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(lVar5 + 0x54);
    }
    iVar3 = *(int *)(param_1 + 0xe4);
    iVar4 = *(int *)(lVar5 + 0x5c);
    if (iVar3 != iVar4) {
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(lVar5 + 0x58);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(lVar5 + 0x5c);
    }
    if ((*(int *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf8) != *(int *)(lVar5 + 0x90))) {
      *(int *)(param_1 + 0xf8) = *(int *)(lVar5 + 0x90);
      FUN_145916980(param_1 + 0xe8,lVar5 + 0x80);
      iVar1 = *(int *)(param_1 + 0x10c);
      FUN_1412d6a39(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
      *(undefined4 *)(param_1 + 0x108) = 0;
      if ((iVar1 < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
        FUN_148e9a4d0(param_1 + 0x100,0);
      }
      uVar8 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
        lVar10 = *(longlong *)(param_1 + 0xe8);
        lVar11 = (longlong)*(int *)(param_1 + 0xf0) * 0x430;
        do {
          uVar7 = FUN_141352650(param_1 + 0x100);
          FUN_141352d9a(uVar7,lVar10);
          lVar10 = lVar10 + 0x430;
          lVar11 = lVar11 + -0x430;
        } while (lVar11 != 0);
      }
    }
    else {
      uVar8 = CONCAT71(uVar9,bVar12 | iVar1 != iVar2 | iVar3 != iVar4);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x1c0));
  return uVar8 & 0xffffffff;
}



// FUNCTION 148e8bb98 FUN_148e8bb98 body=118 status=ok
// SIG undefined FUN_148e8bb98(void)

longlong FUN_148e8bb98(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8bc10 FUN_148e8bc10 body=166 status=ok
// SIG undefined FUN_148e8bc10(void)

ulonglong FUN_148e8bc10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  puVar6 = (undefined8 *)FUN_148e8bcb6();
  puVar5 = (undefined1 *)*puVar6;
  AcquireSRWLockShared((PSRWLOCK)(puVar5 + 0x88));
  if (*(int *)(param_1 + 0xd4) == *(int *)(puVar5 + 0x80)) {
    uVar7 = 0;
  }
  else {
    *(int *)(param_1 + 0xd4) = *(int *)(puVar5 + 0x80);
    iVar1 = *(int *)(param_1 + 0x1b8);
    iVar2 = *(int *)(puVar5 + 0x78);
    if (iVar1 != iVar2) {
      FUN_148c6c7b2(param_1 + 0x148,puVar5 + 8);
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(puVar5 + 0x78);
    }
    iVar3 = *(int *)(param_1 + 0x1c4);
    iVar4 = *(int *)(puVar5 + 4);
    if (iVar3 != iVar4) {
      *(undefined1 *)(param_1 + 0x1c0) = *puVar5;
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(puVar5 + 4);
    }
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar1 != iVar2 || iVar3 != iVar4);
  }
  ReleaseSRWLockShared((PSRWLOCK)(puVar5 + 0x88));
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e8bcb6 FUN_148e8bcb6 body=118 status=ok
// SIG undefined FUN_148e8bcb6(void)

longlong FUN_148e8bcb6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8bd2e FUN_148e8bd2e body=63 status=ok
// SIG undefined FUN_148e8bd2e(void)

void FUN_148e8bd2e(longlong param_1)

{
  FUN_14588cd9e();
  if (*(longlong *)(param_1 + 0x288) == 0) {
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0xd0) = 0;
  FUN_148e8bd6e(param_1);
  FUN_148e8bdb6(param_1);
  return;
}



// FUNCTION 148e8bd6e FUN_148e8bd6e body=71 status=ok
// SIG undefined FUN_148e8bd6e(void)

void FUN_148e8bd6e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    cVar2 = FUN_148e8bc10(lVar1);
    cVar3 = FUN_148e8b91c(lVar1);
    if ((cVar2 != '\0') || (cVar3 != '\0')) {
      FUN_148e8bf34(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148e8bdb6 FUN_148e8bdb6 body=381 status=ok
// SIG undefined FUN_148e8bdb6(void)

void FUN_148e8bdb6(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407cbc56();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    FUN_148e8b6a2(lVar2,param_1 + 0x160);
    puVar7 = (undefined8 *)FUN_148e8c78e(param_1);
    pcVar3 = (char *)*puVar7;
    SRWLock = (PSRWLOCK)(pcVar3 + 0x88);
    AcquireSRWLockShared(SRWLock);
    cVar1 = *pcVar3;
    ReleaseSRWLockShared(SRWLock);
    if (*(char *)(lVar2 + 0x1c0) != cVar1) {
      plVar6 = (longlong *)FUN_148e8c78e(param_1);
      lVar4 = *plVar6;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x88));
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      FUN_148ee6250(lVar4 + 8);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x88));
      *(undefined8 *)(lVar2 + 0xd0) = 0;
    }
  }
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
  puVar8 = &DAT_14c9a1308;
  puVar7 = &DAT_14c9a1308;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    puVar7 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd218);
  }
  uVar5 = FUN_140625082(puVar7,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x2c0) = local_38;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    puVar8 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd220);
  }
  uVar5 = FUN_140625082(puVar8,&DAT_14c9a12e0);
  FUN_1447325ac(uVar5,&local_38,1);
  *(undefined8 *)(param_1 + 0x2c8) = local_38;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8bf34 FUN_148e8bf34 body=1128 status=ok
// SIG undefined FUN_148e8bf34(void)

void FUN_148e8bf34(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_138 [36];
  int local_114;
  longlong local_110;
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8 [2];
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 *local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_148e8c1ac;
  local_d8 = 0;
  uStack_d0 = 0;
  if (*(char *)(lVar3 + 0x1c0) == '\x01') {
    local_114 = *(int *)(lVar3 + 0x118) - *(int *)(lVar3 + 0x110);
    local_98 = 0;
    uStack_90 = 0;
    if ((longlong)*(int *)(lVar3 + 0x108) != 0) {
      lVar10 = *(longlong *)(lVar3 + 0x100);
      lVar12 = (longlong)*(int *)(lVar3 + 0x108) * 0x268;
      do {
        cVar7 = FUN_141352880(lVar3 + 0x148,lVar10);
        uVar6 = uStack_90;
        if (cVar7 != '\0') {
          lVar11 = (longlong)(int)uStack_90;
          uVar9 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
          if (uStack_90._4_4_ < uVar9) {
            FUN_14591741c(&local_98,uVar6 & 0xffffffff);
          }
          FUN_148c6b498(lVar11 * 0x268 + local_98,lVar10);
        }
        lVar10 = lVar10 + 0x268;
        lVar12 = lVar12 + -0x268;
      } while (lVar12 != 0);
    }
LAB_148e8c2ae:
    FUN_148e8c808(&local_d8,&local_98);
    FUN_1412d6a39(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)uStack_d0 != 0) {
      lVar12 = (longlong)(int)uStack_d0 * 0x268;
      lVar10 = local_d8;
      do {
        FUN_148ee6222(lVar3 + 0x148,lVar10);
        lVar10 = lVar10 + 0x268;
        lVar12 = lVar12 + -0x268;
      } while (lVar12 != 0);
    }
  }
  else {
    local_114 = 0;
    if (*(char *)(lVar3 + 0x1c0) == '\0') {
      local_114 = *(int *)(lVar3 + 0xe0) - *(int *)(lVar3 + 0xd8);
      local_98 = 0;
      uStack_90 = 0;
      if ((longlong)*(int *)(lVar3 + 0x140) != 0) {
        lVar10 = *(longlong *)(lVar3 + 0x138);
        lVar12 = (longlong)*(int *)(lVar3 + 0x140) * 0x268;
        do {
          cVar7 = FUN_141352880(lVar3 + 0x148,lVar10);
          uVar6 = uStack_90;
          if (cVar7 != '\0') {
            lVar11 = (longlong)(int)uStack_90;
            uVar9 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
            if (uStack_90._4_4_ < uVar9) {
              FUN_14591741c(&local_98,uVar6 & 0xffffffff);
            }
            FUN_148c6b498(lVar11 * 0x268 + local_98,lVar10);
          }
          lVar10 = lVar10 + 0x268;
          lVar12 = lVar12 + -0x268;
        } while (lVar12 != 0);
      }
      goto LAB_148e8c2ae;
    }
  }
  if ((longlong)*(int *)(lVar3 + 200) != 0) {
    lVar10 = *(longlong *)(lVar3 + 0xc0);
    local_110 = (longlong)*(int *)(lVar3 + 200) * 0x58 + lVar10;
    do {
      iVar8 = FUN_148e8b4a0(lVar10,&local_d8);
      *(int *)(lVar10 + 0x50) = iVar8;
      FUN_14000bbd8(&local_98,lVar10 + 0x40,0);
      FUN_1410d1eba(local_108,&local_98);
      FUN_14023409e(&local_f8,local_108,1);
      local_68[0] = 0;
      local_58 = (longlong *)0x0;
      local_50 = 0;
      local_60 = (longlong)iVar8;
      local_b8 = local_68;
      local_b0 = &local_48;
      FUN_14010d304(&local_a8,&local_b8);
      local_c8 = local_f8;
      local_c0 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e8,&local_c8,&local_a8);
      FUN_14007f2db(local_a8,local_a0);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      plVar5 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      FUN_140008f88(lVar10 + 0x30,local_e8);
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      iVar8 = *(int *)(lVar10 + 0x50);
      *(byte *)(lVar10 + 0x54) =
           *(byte *)(lVar10 + 0x54) & 0xf8 | local_114 < iVar8 | iVar8 == 0 | (iVar8 == 0) * '\x02'
           | (local_114 < iVar8) << 2;
      lVar10 = lVar10 + 0x58;
    } while (lVar10 != local_110);
  }
  puVar4 = *(ushort **)(lVar3 + 0x80);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  FUN_1412d6a39(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_148e8c1ac:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8c39e FUN_148e8c39e body=87 status=ok
// SIG undefined FUN_148e8c39e(void)

void FUN_148e8c39e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c6040;
  puVar1[2] = FUN_148e8c3f6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"OnQuickTransferButtonClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2b8) = uVar2;
  return;
}



// FUNCTION 148e8c3f6 FUN_148e8c3f6 body=913 status=ok
// SIG undefined FUN_148e8c3f6(void)

void FUN_148e8c3f6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1[0x51];
  if (((lVar5 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar5 + 200) <= (int)param_2))
  goto LAB_148e8c442;
  lVar1 = *(longlong *)(lVar5 + 0xc0);
  if ((*(byte *)(lVar1 + 0x54 + (ulonglong)param_2 * 0x58) & 1) != 0) goto LAB_148e8c442;
  local_58 = 0;
  uStack_50 = 0;
  if (*(char *)(lVar5 + 0x1c0) == '\x01') {
    local_68 = 0;
    uStack_60 = 0;
    if ((longlong)*(int *)(lVar5 + 0x108) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x100);
      lVar8 = (longlong)*(int *)(lVar5 + 0x108) * 0x268;
      do {
        cVar3 = FUN_141352880(lVar5 + 0x148,lVar7);
        uVar2 = uStack_60;
        if (cVar3 != '\0') {
          lVar9 = (longlong)(int)uStack_60;
          uVar4 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
          if (uStack_60._4_4_ < uVar4) {
            FUN_14591741c(&local_68,uVar2 & 0xffffffff);
          }
          FUN_148c6b498(lVar9 * 0x268 + local_68,lVar7);
        }
        lVar7 = lVar7 + 0x268;
        lVar8 = lVar8 + -0x268;
      } while (lVar8 != 0);
    }
LAB_148e8c52b:
    FUN_148e8c808(&local_58,&local_68);
    FUN_1412d6a39(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else if (*(char *)(lVar5 + 0x1c0) == '\0') {
    local_68 = 0;
    uStack_60 = 0;
    if ((longlong)*(int *)(lVar5 + 0x140) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x138);
      lVar8 = (longlong)*(int *)(lVar5 + 0x140) * 0x268;
      do {
        cVar3 = FUN_141352880(lVar5 + 0x148,lVar7);
        uVar2 = uStack_60;
        if (cVar3 != '\0') {
          lVar9 = (longlong)(int)uStack_60;
          uVar4 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
          if (uStack_60._4_4_ < uVar4) {
            FUN_14591741c(&local_68,uVar2 & 0xffffffff);
          }
          FUN_148c6b498(lVar9 * 0x268 + local_68,lVar7);
        }
        lVar7 = lVar7 + 0x268;
        lVar8 = lVar8 + -0x268;
      } while (lVar8 != 0);
    }
    goto LAB_148e8c52b;
  }
  FUN_148e8b264(lVar1 + (ulonglong)param_2 * 0x58,&local_68,&local_58);
  FUN_148e8c808(&local_58,&local_68);
  FUN_1412d6a39(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  lVar1 = local_58;
  if (*(char *)(lVar5 + 0x1c0) == '\x01') {
    lVar5 = (longlong)(int)uStack_50;
    lVar7 = 0x2c8;
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        lVar8 = param_1[6];
        *puVar6 = &PTR_FUN_14b9c6b40;
        FUN_1446ddc76(&local_68,"Deposit",1);
        FUN_14039176c(puVar6,lVar8,local_68,1);
        *puVar6 = &PTR_FUN_14b9c6b40;
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar1 + 0x254 + lVar7);
        FUN_140391314(param_1,puVar6);
        lVar7 = lVar7 + 0x268;
      } while (lVar5 * 0x268 - lVar7 != 0);
      lVar7 = 0x2c8;
    }
LAB_148e8c6e0:
    (**(code **)(*param_1 + 0x178))(param_1,lVar7 + (longlong)param_1);
  }
  else if (*(char *)(lVar5 + 0x1c0) == '\0') {
    lVar5 = (longlong)(int)uStack_50;
    lVar7 = 0x2c0;
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        lVar8 = param_1[6];
        *puVar6 = &PTR_FUN_14b9c4440;
        FUN_1446ddc76(&local_68,"Withdraw",1);
        FUN_14039176c(puVar6,lVar8,local_68,1);
        *puVar6 = &PTR_FUN_14b9c4440;
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar1 + 0x254 + lVar7);
        FUN_140391314(param_1,puVar6);
        lVar7 = lVar7 + 0x268;
      } while (lVar5 * 0x268 - lVar7 != 0);
      lVar7 = 0x2c0;
    }
    goto LAB_148e8c6e0;
  }
  FUN_1412d6a39(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_148e8c442:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8c78e FUN_148e8c78e body=121 status=ok
// SIG undefined FUN_148e8c78e(void)

longlong FUN_148e8c78e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8c808 FUN_148e8c808 body=78 status=ok
// SIG undefined FUN_148e8c808(void)

longlong * FUN_148e8c808(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1412d6a39(*param_1,(int)param_1[1]);
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



// FUNCTION 148e8c856 FUN_148e8c856 body=264 status=ok
// SIG undefined FUN_148e8c856(void)

/* WARNING: Removing unreachable block (ram,0x000148e8c94c) */
/* WARNING: Removing unreachable block (ram,0x000148e8c954) */

void FUN_148e8c856(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (((*(char *)((longlong)param_1 + 0x2cb) == '\x01') && (lVar2 = param_1[0x51], lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x408) == '\0')) {
    if ((char)param_1[0x59] == '\x01') {
      (**(code **)(*param_1 + 0x130))(param_1);
    }
    if (*(char *)(lVar2 + 0x360) == '\x01') {
      *(undefined1 *)(lVar2 + 0x360) = 0;
      *(int *)(lVar2 + 0x364) = *(int *)(lVar2 + 0x364) + 1;
    }
    *(undefined1 *)(lVar2 + 0x408) = 1;
    FUN_143eb4eb0(param_1,param_1 + 0x5f);
    uVar4 = FUN_14479d2ce(param_1 + 6);
    lVar5 = FUN_140391a3c(uVar4);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar1 = *(undefined1 *)(lVar2 + 0x408);
      *puVar6 = &PTR_FUN_14b9c47a8;
      *(undefined1 *)(puVar6 + 1) = uVar1;
      FUN_14039144e(lVar5,puVar6);
      FUN_14664eaf2(param_1,1);
      puVar3 = *(ushort **)(lVar2 + 0x80);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      }
    }
  }
  return;
}



// FUNCTION 148e8c95e FUN_148e8c95e body=148 status=ok
// SIG undefined FUN_148e8c95e(void)

void FUN_148e8c95e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x408) == '\0')) && (*(char *)(lVar2 + 0x4c8) == '\0'))
     && ((*(char *)(param_2 + 0x13) == '\x10' || (*(char *)(param_2 + 0x13) == '\x01')))) {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    lVar2 = FUN_140391a3c(uVar1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar3 = &PTR_FUN_14b9c47d8;
      FUN_14039144e(lVar2,puVar3);
      FUN_140de1078(param_1,&DAT_14cbdd3e8,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 148e8c9f2 FUN_148e8c9f2 body=1074 status=ok
// SIG undefined FUN_148e8c9f2(void)

void FUN_148e8c9f2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  PSRWLOCK SRWLock;
  longlong lVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_248 [47];
  undefined1 local_219;
  undefined1 local_218 [40];
  longlong *local_1f0;
  longlong *local_1e8;
  undefined1 *local_1e0;
  char local_1d8;
  longlong local_1d0 [32];
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0x408) != '\0')) goto LAB_148e8ca2c;
  lVar1 = param_1 + 0x30;
  cVar8 = FUN_14664eae2(lVar1,0);
  if ((cVar8 != '\0') || (lVar4 = *(longlong *)(param_1 + 0x288), lVar4 == 0)) goto LAB_148e8ca2c;
  uVar10 = FUN_14479d2ce(lVar1);
  lVar11 = FUN_140391a3c(uVar10);
  if (lVar11 == 0) goto LAB_148e8ca2c;
  if (*(char *)(param_1 + 0x2c8) != '\x01') {
    FUN_1448d5e3c(&local_1f0,param_1 + 0x208);
    lVar4 = local_1f0[0x82];
    SRWLock = (PSRWLOCK)(lVar4 + 0x1b0);
    AcquireSRWLockExclusive(SRWLock);
    plVar7 = local_1e8;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1e8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (*(longlong *)(lVar4 + 0x60) != 0) {
      puVar6 = *(undefined4 **)(*(longlong *)(lVar4 + 0x60) + 8);
      puVar15 = &DAT_14c9485f0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar15 = puVar6;
      }
      FUN_1447a97f4(local_218,puVar15);
      cVar8 = FUN_148e8e2e0(param_1,local_218);
      if (cVar8 != '\0') {
        uVar10 = *(undefined8 *)(lVar4 + 0x60);
        *(undefined8 *)(lVar4 + 0x130) = uVar10;
        *(int *)(lVar4 + 0x1a8) = *(int *)(lVar4 + 0x1a8) + 1;
        puVar14 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar14 = &PTR_FUN_14b9c47b8;
        puVar14[1] = uVar10;
        FUN_14039144e(lVar11,puVar14);
        ReleaseSRWLockExclusive(SRWLock);
        FUN_148e8e35e(param_1);
        FUN_143eb4db6(param_1,param_1 + 0x308,*(undefined4 *)(param_1 + 800));
        uVar10 = FUN_14479d2ce(lVar1);
        local_219 = 1;
        local_1f0 = local_1d0;
        local_1d8 = '\0';
        local_1e0 = local_d0;
        local_1e8 = local_1f0;
        pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"OnToggleExploreMode",&local_1f0);
        local_50 = 0;
        if (pwVar12 == (wchar_t *)0x0) {
          local_48 = 0;
          local_40 = 0;
        }
        else {
          sVar13 = wcslen(pwVar12);
          FUN_1446fe5a4(local_d0,pwVar12,sVar13 & 0xffffffff,1);
        }
        FUN_140755a72(uVar10,local_48,&local_219);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (local_1d8 == '\x01') {
          FUN_1400020a8(local_1f0);
        }
        *(undefined1 *)(param_1 + 0x2c8) = 1;
        FUN_140de1078(param_1,&DAT_14cbdd398,0,0);
        goto LAB_148e8ca2c;
      }
    }
    ReleaseSRWLockExclusive(SRWLock);
    goto LAB_148e8ca2c;
  }
  uVar10 = FUN_14479d2ce(lVar1);
  local_219 = 0;
  local_1f0 = local_1d0;
  local_1d8 = '\0';
  local_1e0 = local_d0;
  local_1e8 = local_1f0;
  pwVar12 = (wchar_t *)FUN_140c7f682(param_1,L"OnToggleExploreMode",&local_1f0);
  local_50 = 0;
  if (pwVar12 == (wchar_t *)0x0) {
    local_48 = 0;
    local_40 = 0;
  }
  else {
    sVar13 = wcslen(pwVar12);
    FUN_1446fe5a4(local_d0,pwVar12,sVar13 & 0xffffffff,1);
  }
  FUN_140755a72(uVar10,local_48,&local_219);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 == '\x01') {
    FUN_1400020a8(local_1f0);
  }
  if (*(char *)(lVar4 + 0x360) == '\0') {
    if (*(int *)(lVar4 + 0x364) == 0) {
      iVar9 = 1;
      goto LAB_148e8cb62;
    }
  }
  else {
    iVar9 = *(int *)(lVar4 + 0x364) + 1;
LAB_148e8cb62:
    *(undefined1 *)(lVar4 + 0x360) = 0;
    *(int *)(lVar4 + 0x364) = iVar9;
  }
  *(undefined2 *)(param_1 + 0x2c8) = 0;
  FUN_143eb4eb0(param_1,param_1 + 0x308);
  puVar14 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar14 = &PTR_FUN_14b9c47b8;
  puVar14[1] = 0;
  FUN_14039144e(lVar11,puVar14);
  FUN_140de1078(param_1,&DAT_14cbdd3a8,0,0);
  puVar5 = *(ushort **)(lVar4 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
LAB_148e8ca2c:
  if ((local_38 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8ce26 FUN_148e8ce26 body=126 status=ok
// SIG undefined FUN_148e8ce26(void)

void FUN_148e8ce26(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0x288) == 0) ||
      (*(char *)(*(longlong *)(param_1 + 0x288) + 0x408) == '\0')) &&
     (*(char *)(param_2 + 0x13) == '\x10')) {
    uVar1 = FUN_14001cc68(0x28,0x10);
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    FUN_148e8ff1a(uVar1,param_1,lVar2 + 0x3c0);
    FUN_140391314(param_1,uVar1);
    FUN_140de1078(param_1,&DAT_14cbdd3d8,0,0);
    return;
  }
  return;
}



// FUNCTION 148e8cea4 FUN_148e8cea4 body=851 status=ok
// SIG undefined FUN_148e8cea4(void)

void FUN_148e8cea4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = param_1[0x51];
  if ((((lVar8 == 0) || (*(char *)(lVar8 + 0x408) == '\0')) &&
      ((*(char *)(param_2 + 0x13) == '\x10' || (*(char *)(param_2 + 0x13) == '\x01')))) &&
     (lVar8 != 0)) {
    uVar4 = FUN_14479d2ce(param_1 + 6);
    lVar5 = FUN_140391a3c(uVar4);
    if ((lVar5 != 0) && (plVar1 = *(longlong **)(lVar8 + 0x328), plVar1 != (longlong *)0x0)) {
      if (*(char *)(lVar8 + 0x208) == '\x01') {
LAB_148e8cf38:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
      lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar7 = FUN_1465d5c68();
      if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) {
        plVar1 = *(longlong **)(lVar8 + 0x328);
        if (plVar1 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar7 = FUN_1465d597a();
          if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
              lVar7 + 0x30)) {
            plVar1 = *(longlong **)(lVar8 + 0x328);
            if (plVar1 != (longlong *)0x0) {
              lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
              lVar7 = FUN_1465d5cfe();
              if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
                 (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                  != lVar7 + 0x30)) {
                if (*(longlong **)(lVar8 + 0x328) != (longlong *)0x0) {
                  lVar5 = (**(code **)(**(longlong **)(lVar8 + 0x328) + 8))();
                  lVar6 = FUN_1465d5a10();
                  if ((((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
                      (*(longlong *)
                        (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                       lVar6 + 0x30)) &&
                     (plVar1 = *(longlong **)(lVar8 + 0x328), plVar1 != (longlong *)0x0)) {
                    lVar8 = (**(code **)(*plVar1 + 8))(plVar1);
                    lVar5 = FUN_1465d5b3c();
                    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                        lVar5 + 0x30)) {
                      puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
                      *puVar9 = &PTR_FUN_14b9c4828;
                      puVar9[1] = plVar1[5];
                      *(int *)(puVar9 + 2) = (int)plVar1[6];
                    /* WARNING: Subroutine does not return */
                      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
                    }
                  }
                }
              }
              else if ((param_1[0x51] == 0) || (*(char *)(param_1[0x51] + 0x408) == '\0')) {
                if ((char)param_1[0x59] == '\x01') {
                  (**(code **)(*param_1 + 0x130))(param_1);
                }
                FUN_1442ccee6(lVar8);
                puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
                lVar8 = plVar1[5];
                uVar2 = *(undefined4 *)((longlong)plVar1 + 0x2c);
                lVar6 = plVar1[6];
                uVar3 = *(undefined4 *)((longlong)plVar1 + 0x34);
                *puVar9 = &PTR_FUN_14b9c47c8;
                *(int *)(puVar9 + 1) = (int)lVar8;
                *(undefined4 *)((longlong)puVar9 + 0xc) = uVar2;
                *(int *)(puVar9 + 2) = (int)lVar6;
                *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
                FUN_14039144e(lVar5,puVar9);
                goto LAB_148e8cf38;
              }
            }
          }
          else if (*(int *)(lVar8 + 0x1c8) == (int)param_1[0x7c]) {
            puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
            lVar8 = plVar1[5];
            *puVar9 = &PTR_FUN_14b9c4818;
            puVar9[1] = lVar8;
            FUN_14039144e(lVar5,puVar9);
            (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
            *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
          }
        }
      }
      else {
        puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        uStack_38 = 0;
        uStack_34 = 0;
        FUN_14052b5e0(&local_3c,"trait_mission_start_db",0);
        *puVar9 = &PTR_FUN_14b9c4808;
        puVar9[1] = plVar1[5];
        *(int *)(puVar9 + 2) = (int)plVar1[6];
        *(ulonglong *)((longlong)puVar9 + 0x14) = CONCAT44(uStack_38,local_3c);
        *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_34;
        FUN_14039144e(lVar5,puVar9);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8d268 FUN_148e8d268 body=72 status=ok
// SIG undefined FUN_148e8d268(void)

void FUN_148e8d268(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x408) == '\0')) {
    FUN_148e8e35e();
    *(undefined1 *)(lVar1 + 0x3f0) = 0;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148e8d332 FUN_148e8d332 body=270 status=ok
// SIG undefined FUN_148e8d332(void)

void FUN_148e8d332(longlong param_1,int param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  FUN_1448d5e3c(&local_48,param_1 + 0x208);
  lVar4 = *(longlong *)(local_48 + 0x410);
  SRWLock = (PSRWLOCK)(lVar4 + 0x1b0);
  AcquireSRWLockShared(SRWLock);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  bVar7 = -1 < param_2;
  *(bool *)(param_1 + 0x2c9) = bVar7;
  if ((bool)*(char *)(lVar3 + 0x360) == bVar7) {
    iVar6 = 1;
    if (*(int *)(lVar3 + 0x364) != 0) goto LAB_148e8d3eb;
  }
  else {
    iVar6 = *(int *)(lVar3 + 0x364) + 1;
  }
  *(bool *)(lVar3 + 0x360) = bVar7;
  *(int *)(lVar3 + 0x364) = iVar6;
LAB_148e8d3eb:
  *(int *)(lVar3 + 0x368) = param_2;
  *(undefined1 *)(param_1 + 0x2ca) = 0;
  uVar5 = FUN_14626750a(lVar4,param_2);
  FUN_1462653da(param_1,uVar5,lVar3,param_2);
  ReleaseSRWLockShared(SRWLock);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8d4b8 FUN_148e8d4b8 body=557 status=ok
// SIG undefined FUN_148e8d4b8(void)

void FUN_148e8d4b8(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  plVar2 = *(longlong **)(local_40 + 0x410);
  AcquireSRWLockShared((PSRWLOCK)(plVar2 + 0x36));
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_38 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (plVar2[0x26] != 0) {
    puVar3 = *(undefined4 **)(plVar2[0x26] + 8);
    puVar9 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar9 = puVar3;
    }
    FUN_1447325ac(puVar9,&local_40,1);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      uVar4 = (uint)((ulonglong)local_40 >> 0x10);
      uVar11 = (uint)local_40 & 0xffff;
      plVar10 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar2[8];
      }
      iVar8 = *(int *)((longlong)plVar10 +
                      (ulonglong)
                      ((int)plVar2[9] - 1U &
                      (int)((ulonglong)local_40 >> 0x20) + ((uint)local_40 << 0x10 | uVar11) +
                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar6 = *plVar2 + (longlong)iVar8 * 0x60;
          if (*(longlong *)(*plVar2 + (longlong)iVar8 * 0x60) == local_40) {
            if (((longlong *)(lVar6 + 8) != (longlong *)0x0 && lVar6 != 0) &&
               (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c))) {
              lVar12 = lVar6 + 0x40;
              if (*(longlong *)(lVar6 + 0x48) != 0) {
                lVar12 = *(longlong *)(lVar6 + 0x48);
              }
              iVar8 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar6 + 0x50) - 1U & param_2) * 4);
              if (iVar8 != -1) {
                lVar6 = *(longlong *)(lVar6 + 8);
                goto LAB_148e8d64f;
              }
            }
            break;
          }
          iVar8 = *(int *)(lVar6 + 0x58);
        } while (iVar8 != -1);
      }
    }
  }
  goto LAB_148e8d562;
  while (iVar8 = *(int *)(lVar12 + 0x158), iVar8 != -1) {
LAB_148e8d64f:
    lVar12 = lVar6 + (longlong)iVar8 * 0x160;
    if (*(uint *)(lVar6 + (longlong)iVar8 * 0x160) == param_2) {
      if ((lVar12 + 8U & 0xfffffffffffffff7) != 0) {
        uVar5 = FUN_14479d2ce(param_1 + 0x30);
        lVar6 = FUN_140391a3c(uVar5);
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          uVar5 = *(undefined8 *)(lVar12 + 0x48);
          *puVar7 = &PTR_FUN_14b9c4888;
          puVar7[1] = uVar5;
          FUN_14039144e(lVar6,puVar7);
          FUN_140de1078(param_1,&DAT_14cbdd388,0,0);
        }
      }
      break;
    }
  }
LAB_148e8d562:
  ReleaseSRWLockShared((PSRWLOCK)(plVar2 + 0x36));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8d6e6 FUN_148e8d6e6 body=1093 status=ok
// SIG undefined FUN_148e8d6e6(void)

void FUN_148e8d6e6(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [47];
  byte local_a9;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = FUN_14479d2ce(param_1 + 0x30);
  lVar7 = FUN_140391a3c(uVar6);
  if ((lVar7 == 0) || (lVar12 = *(longlong *)(param_1 + 0x288), lVar12 == 0)) goto LAB_148e8daf1;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_a8 = lVar12;
  local_98 = lVar7;
  local_90 = param_1;
  if ((longlong)*(int *)(lVar12 + 0x450) == 0) {
    local_a9 = 1;
  }
  else {
    lVar7 = *(longlong *)(lVar12 + 0x448);
    local_a0 = (longlong)*(int *)(lVar12 + 0x450) * 0x88 + lVar7;
    local_a9 = 1;
    do {
      lVar12 = *(longlong *)(lVar7 + 0x68);
      *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + 2;
      iVar9 = *(int *)(lVar7 + 0x70);
      if ((longlong)iVar9 != 0) {
        lVar10 = 0;
        do {
          local_78 = (void *)0x0;
          local_70 = (int)param_2[1];
          lVar11 = (longlong)local_70;
          pvVar1 = (void *)*param_2;
          if (lVar11 == 0) {
            local_6c = 0;
            iVar4 = 0;
          }
          else {
            FUN_1446dd670(&local_78,local_70,0);
            memcpy(local_78,pvVar1,lVar11 * 2);
            iVar4 = local_70;
          }
          local_50 = iVar4 + -1;
          if (iVar4 == 0) {
            local_50 = 0;
          }
          local_58 = local_78;
          cVar3 = FUN_1412c97f8(*(undefined8 *)(lVar12 + lVar10));
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (cVar3 != '\0') {
            local_a9 = *(byte *)(lVar12 + 0x18 + lVar10) ^ 1;
            *(byte *)(lVar12 + 0x18 + lVar10) = local_a9;
            FUN_1446f470e(&local_58);
            lVar12 = (longlong)(int)uStack_60;
            uVar5 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
            if (uStack_60._4_4_ < uVar5) {
              FUN_1446f84a2(&local_68);
            }
            *(void **)((longlong)local_68 + lVar12 * 8) = local_58;
            break;
          }
          lVar10 = lVar10 + 0x60;
        } while ((longlong)iVar9 * 0x60 != lVar10);
      }
      iVar9 = (int)uStack_60;
      if ((int)uStack_60 != 0) goto LAB_148e8da47;
      lVar7 = lVar7 + 0x88;
    } while (lVar7 != local_a0);
  }
  if ((longlong)*(int *)(local_a8 + 0x468) != 0) {
    lVar7 = *(longlong *)(local_a8 + 0x460);
    local_a0 = (longlong)*(int *)(local_a8 + 0x468) * 0x88 + lVar7;
    do {
      lVar12 = *(longlong *)(lVar7 + 0x68);
      *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + 2;
      iVar9 = *(int *)(lVar7 + 0x70);
      if ((longlong)iVar9 != 0) {
        lVar10 = 0;
        do {
          local_88 = (void *)0x0;
          local_80 = (int)param_2[1];
          lVar11 = (longlong)local_80;
          pvVar1 = (void *)*param_2;
          if (lVar11 == 0) {
            local_7c = 0;
            iVar4 = 0;
          }
          else {
            FUN_1446dd670(&local_88,local_80,0);
            memcpy(local_88,pvVar1,lVar11 * 2);
            iVar4 = local_80;
          }
          local_50 = iVar4 + -1;
          if (iVar4 == 0) {
            local_50 = 0;
          }
          local_58 = local_88;
          cVar3 = FUN_1412c97f8(*(undefined8 *)(lVar12 + lVar10));
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (cVar3 != '\0') {
            local_a9 = *(byte *)(lVar12 + 0x18 + lVar10) ^ 1;
            *(byte *)(lVar12 + 0x18 + lVar10) = local_a9;
            FUN_1446f470e(&local_58);
            lVar12 = (longlong)(int)uStack_60;
            uVar5 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
            if (uStack_60._4_4_ < uVar5) {
              FUN_1446f84a2(&local_68);
            }
            *(void **)((longlong)local_68 + lVar12 * 8) = local_58;
            break;
          }
          lVar10 = lVar10 + 0x60;
        } while ((longlong)iVar9 * 0x60 != lVar10);
      }
      iVar9 = (int)uStack_60;
      if ((int)uStack_60 != 0) goto LAB_148e8da47;
      lVar7 = lVar7 + 0x88;
    } while (lVar7 != local_a0);
  }
  goto LAB_148e8dae2;
LAB_148e8da47:
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  pvVar1 = local_68;
  *puVar8 = &PTR_FUN_14b9c4858;
  puVar8[1] = 0;
  *(int *)(puVar8 + 2) = iVar9;
  FUN_1401b309e(puVar8 + 1,iVar9,0);
  memcpy((void *)puVar8[1],pvVar1,(longlong)iVar9 << 3);
  *(byte *)(puVar8 + 3) = local_a9 & 1;
  FUN_14039144e(local_98,puVar8);
  puVar2 = *(ushort **)(local_a8 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(local_a8 + 0x78) & 0x3f));
  }
  FUN_140de1078(local_90,&DAT_14cbdd3f8,0,0);
LAB_148e8dae2:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148e8daf1:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8db2c FUN_148e8db2c body=1191 status=ok
// SIG undefined FUN_148e8db2c(void)

void FUN_148e8db2c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  ushort *puVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_1;
  uVar9 = FUN_14479d2ce(param_1 + 0x30);
  local_a0 = FUN_140391a3c(uVar9);
  if ((local_a0 != 0) && (local_b8 = *(longlong *)(local_a8 + 0x288), local_b8 != 0)) {
    if ((longlong)*(int *)(local_b8 + 0x450) != 0) {
      lVar14 = *(longlong *)(local_b8 + 0x448);
      lVar11 = (longlong)*(int *)(local_b8 + 0x450) * 0x88 + lVar14;
      local_b0 = lVar11;
      do {
        local_88 = (void *)0x0;
        local_80 = (int)param_2[1];
        lVar12 = (longlong)local_80;
        pvVar2 = (void *)*param_2;
        if (lVar12 == 0) {
          local_7c = 0;
          iVar6 = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,pvVar2,lVar12 * 2);
          iVar6 = local_80;
        }
        iVar7 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar7 = 0;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
        local_78 = local_88;
        cVar5 = FUN_1412c97f8(*(undefined8 *)(lVar14 + 0x60));
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((cVar5 != '\0') && (iVar6 = *(int *)(lVar14 + 0x70), (longlong)iVar6 != 0)) {
          local_78 = (void *)0x0;
          uStack_70 = 0;
          lVar11 = *(longlong *)(lVar14 + 0x68);
          *(int *)(lVar14 + 0x78) = *(int *)(lVar14 + 0x78) + 2;
          lVar12 = 0;
          do {
            uVar4 = uStack_70;
            *(byte *)(lVar11 + 0x18 + lVar12) = *(byte *)(lVar14 + 0x18) ^ 1;
            lVar13 = (longlong)(int)uStack_70;
            uVar8 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
            if (uStack_70._4_4_ < uVar8) {
              FUN_1446f84a2(&local_78,uVar4 & 0xffffffff);
            }
            uVar4 = uStack_70;
            pvVar2 = local_78;
            *(undefined8 *)((longlong)local_78 + lVar13 * 8) = *(undefined8 *)(lVar11 + lVar12);
            lVar12 = lVar12 + 0x60;
          } while ((longlong)iVar6 * 0x60 != lVar12);
          iVar6 = (int)uStack_70;
          lVar11 = (longlong)(int)uStack_70;
          *(byte *)(lVar14 + 0x18) = *(byte *)(lVar14 + 0x18) ^ 1;
          puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          uVar1 = *(undefined1 *)(lVar14 + 0x18);
          *puVar10 = &PTR_FUN_14b9c4858;
          puVar10[1] = 0;
          *(int *)(puVar10 + 2) = iVar6;
          if (lVar11 == 0) {
            *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
          }
          else {
            FUN_1401b309e(puVar10 + 1,uVar4 & 0xffffffff,0);
            memcpy((void *)puVar10[1],pvVar2,lVar11 << 3);
          }
          lVar11 = local_b0;
          *(undefined1 *)(puVar10 + 3) = uVar1;
          FUN_14039144e(local_a0);
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar14 = lVar14 + 0x88;
      } while (lVar14 != lVar11);
    }
    if ((longlong)*(int *)(local_b8 + 0x468) != 0) {
      lVar14 = *(longlong *)(local_b8 + 0x460);
      lVar11 = (longlong)*(int *)(local_b8 + 0x468) * 0x88 + lVar14;
      local_b0 = lVar11;
      do {
        local_98 = (void *)0x0;
        local_90 = (int)param_2[1];
        lVar12 = (longlong)local_90;
        pvVar2 = (void *)*param_2;
        if (lVar12 == 0) {
          local_8c = 0;
          iVar6 = 0;
        }
        else {
          FUN_1446dd670(&local_98,local_90,0);
          memcpy(local_98,pvVar2,lVar12 * 2);
          iVar6 = local_90;
        }
        iVar7 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar7 = 0;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar7);
        local_78 = local_98;
        cVar5 = FUN_1412c97f8(*(undefined8 *)(lVar14 + 0x60));
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar5 != '\0') {
          iVar6 = *(int *)(lVar14 + 0x70);
          if ((longlong)iVar6 == 0) goto LAB_148e8df94;
          local_78 = (void *)0x0;
          uStack_70 = 0;
          lVar11 = *(longlong *)(lVar14 + 0x68);
          *(int *)(lVar14 + 0x78) = *(int *)(lVar14 + 0x78) + 2;
          lVar12 = 0;
          do {
            uVar4 = uStack_70;
            *(byte *)(lVar11 + 0x18 + lVar12) = *(byte *)(lVar14 + 0x18) ^ 1;
            lVar13 = (longlong)(int)uStack_70;
            uVar8 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
            if (uStack_70._4_4_ < uVar8) {
              FUN_1446f84a2(&local_78,uVar4 & 0xffffffff);
            }
            uVar4 = uStack_70;
            pvVar2 = local_78;
            *(undefined8 *)((longlong)local_78 + lVar13 * 8) = *(undefined8 *)(lVar11 + lVar12);
            lVar12 = lVar12 + 0x60;
          } while ((longlong)iVar6 * 0x60 != lVar12);
          iVar6 = (int)uStack_70;
          lVar11 = (longlong)(int)uStack_70;
          *(byte *)(lVar14 + 0x18) = *(byte *)(lVar14 + 0x18) ^ 1;
          puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          uVar1 = *(undefined1 *)(lVar14 + 0x18);
          *puVar10 = &PTR_FUN_14b9c4858;
          puVar10[1] = 0;
          *(int *)(puVar10 + 2) = iVar6;
          if (lVar11 == 0) {
            *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
          }
          else {
            FUN_1401b309e(puVar10 + 1,uVar4 & 0xffffffff,0);
            memcpy((void *)puVar10[1],pvVar2,lVar11 << 3);
          }
          lVar11 = local_b0;
          *(undefined1 *)(puVar10 + 3) = uVar1;
          FUN_14039144e(local_a0);
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar14 = lVar14 + 0x88;
      } while (lVar14 != lVar11);
    }
    FUN_140de1078(local_a8,&DAT_14cbdd3f8,0,0);
    puVar3 = *(ushort **)(local_b8 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(local_b8 + 0x78) & 0x3f));
    }
  }
LAB_148e8df94:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8dfd4 FUN_148e8dfd4 body=572 status=ok
// SIG undefined FUN_148e8dfd4(void)

void FUN_148e8dfd4(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  void *_Src;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = FUN_14479d2ce(param_1 + 0x30);
  lVar6 = FUN_140391a3c(uVar5);
  if ((lVar6 != 0) && (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 != 0)) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_60 = lVar6;
    if ((longlong)*(int *)(lVar1 + 0x450) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x448);
      lVar9 = (longlong)*(int *)(lVar1 + 0x450) * 0x88 + lVar6;
      do {
        *(undefined1 *)(lVar6 + 0x18) = param_2;
        puVar7 = *(undefined8 **)(lVar6 + 0x68);
        *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 2;
        if ((longlong)*(int *)(lVar6 + 0x70) != 0) {
          puVar8 = puVar7 + (longlong)*(int *)(lVar6 + 0x70) * 0xc;
          do {
            uVar3 = uStack_50;
            lVar10 = (longlong)(int)uStack_50;
            uVar4 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
            if (uStack_50._4_4_ < uVar4) {
              FUN_1446f84a2(&local_58,uVar3 & 0xffffffff);
            }
            *(undefined8 *)((longlong)local_58 + lVar10 * 8) = *puVar7;
            *(undefined1 *)(puVar7 + 3) = param_2;
            puVar7 = puVar7 + 0xc;
          } while (puVar7 != puVar8);
        }
        lVar6 = lVar6 + 0x88;
      } while (lVar6 != lVar9);
    }
    if ((longlong)*(int *)(lVar1 + 0x468) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x460);
      lVar9 = (longlong)*(int *)(lVar1 + 0x468) * 0x88 + lVar6;
      do {
        *(undefined1 *)(lVar6 + 0x18) = param_2;
        puVar7 = *(undefined8 **)(lVar6 + 0x68);
        *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 2;
        if ((longlong)*(int *)(lVar6 + 0x70) != 0) {
          puVar8 = puVar7 + (longlong)*(int *)(lVar6 + 0x70) * 0xc;
          do {
            uVar3 = uStack_50;
            lVar10 = (longlong)(int)uStack_50;
            uVar4 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
            if (uStack_50._4_4_ < uVar4) {
              FUN_1446f84a2(&local_58,uVar3 & 0xffffffff);
            }
            *(undefined8 *)((longlong)local_58 + lVar10 * 8) = *puVar7;
            *(undefined1 *)(puVar7 + 3) = param_2;
            puVar7 = puVar7 + 0xc;
          } while (puVar7 != puVar8);
        }
        lVar6 = lVar6 + 0x88;
      } while (lVar6 != lVar9);
    }
    puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    _Src = local_58;
    *puVar7 = &PTR_FUN_14b9c4858;
    puVar7[1] = 0;
    lVar6 = (longlong)(int)uStack_50;
    *(int *)(puVar7 + 2) = (int)uStack_50;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
    }
    else {
      FUN_1401b309e(puVar7 + 1,uStack_50 & 0xffffffff,0);
      memcpy((void *)puVar7[1],_Src,lVar6 << 3);
    }
    *(undefined1 *)(puVar7 + 3) = param_2;
    FUN_14039144e(local_60,puVar7);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8e212 FUN_148e8e212 body=205 status=ok
// SIG undefined FUN_148e8e212(void)

void FUN_148e8e212(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14479d2ce(param_1 + 0x30);
  lVar2 = FUN_140391a3c(uVar1);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    FUN_14000bbd8(local_58,param_2,0);
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    *puVar3 = &PTR_FUN_14b9c6d80;
    FUN_1447a97f4(puVar3 + 4,local_58);
    FUN_14039144e(lVar2,puVar3);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8e2e0 FUN_148e8e2e0 body=126 status=ok
// SIG undefined FUN_148e8e2e0(void)

ulonglong FUN_148e8e2e0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x288) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *param_2;
    if ((longlong)*(int *)(param_1 + 0x348) != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x340) + lVar3) == iVar1) goto LAB_148e8e34f;
        lVar3 = lVar3 + 0x28;
      } while ((longlong)*(int *)(param_1 + 0x348) * 0x28 != lVar3);
    }
    if ((iVar1 == 0) || (param_2[1] == 0)) {
LAB_148e8e34f:
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar1 != DAT_14c948000);
    }
    *(char *)(*(longlong *)(param_1 + 0x288) + 0x3f1) = (char)uVar2;
  }
  if (*(longlong *)(param_2 + 6) != 0) {
    FUN_1400020a8();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148e8e35e FUN_148e8e35e body=7098 status=ok
// SIG undefined FUN_148e8e35e(void)

void FUN_148e8e35e(longlong param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  ushort *puVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined **ppuVar20;
  longlong *plVar21;
  int iVar22;
  byte bVar27;
  uint uVar23;
  undefined4 *puVar24;
  undefined2 *puVar25;
  char *pcVar26;
  PSRWLOCK SRWLock;
  undefined **ppuVar28;
  ulonglong uVar29;
  void *_Src;
  int iVar30;
  undefined **ppuVar31;
  undefined2 *puVar32;
  undefined7 uVar33;
  longlong lVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined4 *puVar37;
  bool bVar38;
  float fVar39;
  undefined1 auStack_698 [32];
  undefined8 *local_678;
  longlong local_670;
  longlong *local_668;
  undefined **local_660;
  longlong *local_658;
  PSRWLOCK local_650;
  longlong local_648;
  longlong local_640;
  longlong local_638;
  longlong *local_630;
  undefined1 local_628 [224];
  undefined1 local_548 [24];
  undefined8 local_530;
  longlong *local_528;
  longlong local_520 [2];
  longlong *local_510 [2];
  longlong *local_500 [2];
  longlong *local_4f0;
  undefined8 local_4e8;
  undefined **local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  longlong local_490;
  undefined4 local_488;
  undefined1 local_480 [40];
  undefined8 local_458;
  undefined **local_450;
  undefined8 local_448;
  uint local_440;
  undefined4 local_43c;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  int iStack_388;
  undefined4 uStack_384;
  undefined1 local_380;
  longlong *local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_698;
  lVar34 = *(longlong *)(param_1 + 0x288);
  if (lVar34 == 0) goto LAB_148e8e405;
  FUN_1448d5e3c(&local_458,param_1 + 0x208);
  plVar14 = (longlong *)local_458[0x82];
  SRWLock = (PSRWLOCK)(plVar14 + 0x36);
  AcquireSRWLockShared(SRWLock);
  ppuVar36 = local_450;
  if (local_450 != (undefined **)0x0) {
    LOCK();
    ppuVar28 = local_450 + 1;
    *(int *)ppuVar28 = *(int *)ppuVar28 + -1;
    UNLOCK();
    if (*(int *)ppuVar28 == 0) {
      (**(code **)*local_450)(local_450);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar36 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppuVar36 + 0x10))(ppuVar36);
      }
    }
  }
  if (plVar14[0xc] != 0) {
    puVar24 = *(undefined4 **)(plVar14[0xc] + 8);
    if (puVar24 == (undefined4 *)0x0) {
      puVar24 = &DAT_14c9485f0;
    }
    FUN_1447a97f4(local_480,puVar24);
    cVar8 = FUN_148e8e2e0(param_1,local_480);
    if (cVar8 != '\0') {
      plVar21 = (longlong *)(lVar34 + 0x388);
      iVar22 = *(int *)(lVar34 + 0x394);
      FUN_148c6ee1a(*(undefined8 *)(lVar34 + 0x388),*(undefined4 *)(lVar34 + 0x390));
      *(undefined4 *)(lVar34 + 0x390) = 0;
      if ((iVar22 < 0) && (*(int *)(lVar34 + 0x394) != 0)) {
        FUN_148e9b588(plVar21);
      }
      uVar29 = plVar14[0x26];
      if (uVar29 != 0) {
        uVar11 = FUN_14086ad12();
        cVar8 = FUN_1448093f4(uVar29,uVar11);
        if (cVar8 != '\0') {
          local_4c0 = 0;
          local_4c8 = *(longlong *)(uVar29 + 0x170);
          local_4b8 = 0;
          local_638 = param_1;
          uVar11 = FUN_14477b664(*(undefined8 *)(uVar29 + 0x178));
          local_4c0 = FUN_14477b664(uVar11);
          local_4b8 = *(longlong *)(uVar29 + 0x180);
          if (local_4c0 == 0) {
            uVar11 = FUN_1465d584e();
            local_4c0 = FUN_14477b664(uVar11);
          }
          if (local_4b8 != 0) {
LAB_148e8e5f5:
            local_650 = SRWLock;
            lVar12 = local_4b8;
            if (local_4c0 == 0) {
              uVar11 = FUN_1465d584e();
              local_4c0 = FUN_14477b664(uVar11);
              lVar12 = local_4b8;
              if (((local_4b8 == 0) && (lVar12 = 0, local_4c0 != 0)) && (local_4c8 != 0)) {
                plVar15 = *(longlong **)(local_4c0 + 0xb8);
                if ((plVar15 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar8 == '\0')) {
                  lVar12 = 0;
                  local_4b8 = lVar12;
                }
                else {
                  uVar11 = (**(code **)(*plVar15 + 0x110))(plVar15);
                  lVar12 = FUN_144aff482(uVar11,&local_4c8);
                  local_4b8 = lVar12;
                }
              }
            }
            plVar15 = *(longlong **)(lVar12 + 0x18);
            plVar5 = *(longlong **)(lVar34 + 0x398);
            if (plVar5 != plVar15) {
              *(longlong **)(lVar34 + 0x398) = plVar15;
              if (plVar15 != (longlong *)0x0) {
                (**(code **)(*plVar15 + 8))();
              }
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
            *(undefined4 *)(lVar34 + 0x3a0) = *(undefined4 *)(lVar12 + 0x20);
            iVar22 = *(int *)(lVar34 + 0x3b4);
            FUN_145bfad56(*(undefined8 *)(lVar34 + 0x3a8),*(undefined4 *)(lVar34 + 0x3b0));
            *(undefined4 *)(lVar34 + 0x3b0) = 0;
            if ((iVar22 < 0) && (*(int *)(lVar34 + 0x3b4) != 0)) {
              FUN_148e9c568(lVar34 + 0x3a8);
            }
            iVar22 = *(int *)(lVar34 + 0x3c4);
            FUN_145bfad2e(*(undefined8 *)(lVar34 + 0x3b8),*(undefined4 *)(lVar34 + 0x3c0));
            *(undefined4 *)(lVar34 + 0x3c0) = 0;
            local_670 = lVar34;
            if ((iVar22 < 0) && (*(int *)(lVar34 + 0x3c4) != 0)) {
              FUN_148e9c598(lVar34 + 0x3b8);
            }
            if ((int)plVar14[0x19] != *(int *)((longlong)plVar14 + 0xf4)) {
              uVar10 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              plVar15 = plVar14 + 0x1f;
              if ((longlong *)plVar14[0x20] != (longlong *)0x0) {
                plVar15 = (longlong *)plVar14[0x20];
              }
              iVar22 = *(int *)((longlong)plVar15 +
                               (ulonglong)((int)plVar14[0x21] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4)
              ;
              if (iVar22 != -1) {
                do {
                  lVar12 = plVar14[0x18] + (longlong)iVar22 * 0x60;
                  if (*(ulonglong *)(plVar14[0x18] + (longlong)iVar22 * 0x60) == uVar29)
                  goto LAB_148e8e731;
                  iVar22 = *(int *)(lVar12 + 0x58);
                } while (iVar22 != -1);
              }
            }
            lVar12 = 0;
LAB_148e8e731:
            lVar19 = lVar12 + 8;
            if (lVar12 == 0) {
              lVar19 = 0;
            }
            FUN_1442d08ce(lVar19,lVar34 + 0x3b8);
            if (plVar14[0x26] == 0) {
              local_458 = (undefined **)0x0;
            }
            else {
              puVar24 = *(undefined4 **)(plVar14[0x26] + 8);
              puVar37 = &DAT_14c9485f0;
              if (puVar24 != (undefined4 *)0x0) {
                puVar37 = puVar24;
              }
              FUN_1447325ac(puVar37,&local_458,1);
            }
            if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
              uVar10 = (uint)((ulonglong)local_458 >> 0x10);
              uVar23 = (uint)local_458 & 0xffff;
              plVar15 = plVar14 + 7;
              if ((longlong *)plVar14[8] != (longlong *)0x0) {
                plVar15 = (longlong *)plVar14[8];
              }
              iVar22 = *(int *)((longlong)plVar15 +
                               (ulonglong)
                               ((int)plVar14[9] - 1U &
                               (int)((ulonglong)local_458 >> 0x20) +
                               ((uint)local_458 << 0x10 | uVar23) +
                               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar23 >> 4)) * 4);
              if (iVar22 != -1) {
                do {
                  lVar34 = *plVar14 + (longlong)iVar22 * 0x60;
                  if (*(undefined ***)(*plVar14 + (longlong)iVar22 * 0x60) == local_458) {
                    local_668 = (longlong *)(lVar34 + 8);
                    if (local_668 != (longlong *)0x0 && lVar34 != 0) {
                      local_660 = (undefined **)(lVar34 + 0x18);
                      local_458 = (undefined **)0x100000000;
                      local_448 = 0xffffffff;
                      local_440 = 0;
                      local_450 = local_660;
                      if (*(int *)(lVar34 + 0x30) != 0) {
                        FUN_1449c0562(&local_458);
                      }
                      local_4d8 = local_448;
                      local_4d0 = local_440;
                      local_4cc = local_43c;
                      local_4e8 = local_458;
                      local_4e0 = local_450;
                      local_4f0 = local_668;
                      uVar10 = *(uint *)(lVar34 + 0x30);
                      local_458 = (undefined **)
                                  CONCAT44(1 << ((byte)uVar10 & 0x1f),(int)uVar10 >> 5);
                      local_450 = local_660;
                      local_448 = CONCAT44(uVar10,-1 << ((byte)uVar10 & 0x1f));
                      local_440 = uVar10 & 0xffffffe0;
                      local_658 = (longlong *)CONCAT44(local_658._4_4_,uVar10);
                      if (*(uint *)(lVar34 + 0x30) != uVar10) {
                        FUN_1449c0562(&local_458);
                        local_658 = (longlong *)CONCAT44(local_658._4_4_,local_448._4_4_);
                      }
                      uVar33 = (undefined7)((ulonglong)local_450 >> 8);
                      local_660 = local_450;
                      if ((local_4f0 != local_668 || local_4e0 != local_450) ||
                          local_4d8._4_4_ != (int)local_658) {
                        goto LAB_148e8f45a;
                      }
                    }
                    break;
                  }
                  iVar22 = *(int *)(lVar34 + 0x58);
                } while (iVar22 != -1);
              }
            }
            goto LAB_148e8e785;
          }
          local_4b8 = 0;
          if ((((local_4c0 != 0) && (local_4c8 != 0)) &&
              (plVar15 = *(longlong **)(local_4c0 + 0xb8), plVar15 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar8 != '\0')) {
            uVar11 = (**(code **)(*plVar15 + 0x110))(plVar15);
            local_650 = SRWLock;
            local_4b8 = FUN_144aff482(uVar11,&local_4c8);
            SRWLock = local_650;
            if (local_4b8 != 0) goto LAB_148e8e5f5;
          }
        }
      }
    }
  }
  goto LAB_148e8e3fc;
LAB_148e8ea9d:
  memcpy(&local_158,ppuVar28,0xf8);
  memcpy(ppuVar28,ppuVar13,0xf8);
  memcpy(ppuVar13,&local_158,0xf8);
  iVar22 = (int)local_668 + -1;
  ppuVar31 = ppuVar31 + -0x3e;
  if ((longlong)ppuVar31 - (longlong)ppuVar28 < (longlong)local_660 - (longlong)ppuVar20) {
    if (ppuVar20 < ppuVar36) {
      *local_678 = ppuVar20;
      local_678[1] = ppuVar36;
      *(int *)(local_678 + 2) = iVar22;
      local_678 = local_678 + 3;
    }
    puVar16 = local_678;
    if (ppuVar13 <= ppuVar28 + 0x1f) goto LAB_148e8f105;
  }
  else {
    puVar16 = local_678;
    if (ppuVar28 + 0x1f < ppuVar13) {
      *local_678 = ppuVar28;
      local_678[1] = ppuVar31;
      *(int *)(local_678 + 2) = iVar22;
      puVar16 = local_678 + 3;
    }
    ppuVar28 = ppuVar20;
    ppuVar31 = ppuVar36;
    if (ppuVar36 <= ppuVar20) goto LAB_148e8f105;
  }
  local_678 = puVar16;
  iVar9 = (int)((ulonglong)((longlong)ppuVar31 - (longlong)ppuVar28) >> 3) * -0x42108421;
  plVar14 = (longlong *)(ulonglong)(iVar9 + 1);
  ppuVar36 = ppuVar31;
  if (iVar22 == 0) goto LAB_148e8eb84;
  goto LAB_148e8e8a0;
LAB_148e8ed6e:
  if (-1 < (int)(uVar23 - uVar10)) goto LAB_148e8ed63;
LAB_148e8ed0c:
  memcpy(&local_158,ppuVar36,0xf8);
  memcpy(ppuVar36,ppuVar13,0xf8);
  plVar14 = local_668;
  memcpy(ppuVar13,&local_158,0xf8);
  iVar9 = iVar30 * 2 + 1;
  iVar18 = iVar30;
  if ((int)plVar14 <= iVar9) goto LAB_148e8ed63;
  goto LAB_148e8ebb7;
LAB_148e8efda:
  if (-1 < (int)(uVar10 - uVar23)) goto LAB_148e8ef87;
LAB_148e8ef3c:
  memcpy(&local_158,ppuVar36,0xf8);
  memcpy(ppuVar36,ppuVar13,0xf8);
  memcpy(ppuVar13,&local_158,0xf8);
  iVar22 = iVar30 * 2;
  iVar18 = iVar30 * 2 + 1;
  iVar9 = iVar30;
  if ((longlong)uVar29 <= (longlong)iVar18) goto LAB_148e8ef87;
  goto LAB_148e8ede5;
LAB_148e8ef87:
  memcpy(&local_158,ppuVar28,0xf8);
  memcpy(ppuVar28,ppuVar28 + (uVar29 - 1) * 0x1f,0xf8);
  memcpy(ppuVar28 + (uVar29 - 1) * 0x1f,&local_158,0xf8);
  bVar38 = uVar29 < 3;
  puVar16 = local_678;
  uVar29 = uVar29 - 1;
  if (bVar38) goto LAB_148e8f105;
  goto LAB_148e8eddc;
LAB_148e8f45a:
  do {
    lVar34 = *local_4f0;
    lVar12 = (longlong)local_4d8._4_4_ * 0x160;
    FUN_1408f3f9e(&local_458);
    local_458 = &PTR_FUN_14b8963e0;
    local_3a8 = 0;
    local_3a0 = 0;
    uStack_398 = 0;
    FUN_1400b22c2(&local_390,&DAT_149e02088);
    local_380 = 0;
    FUN_144a5dc74(&local_378);
    local_368 = 0;
    local_3a8 = *(undefined4 *)(lVar34 + lVar12);
    local_678 = *(undefined8 **)(lVar34 + 8 + lVar12);
    if (local_678 != (undefined8 *)0x0) {
      uVar11 = FUN_140390f40();
      cVar8 = FUN_1448093f4(local_678,uVar11);
      if ((cVar8 != '\0') && (*(char *)(local_678 + 0x2c) != '\n')) {
        lVar34 = lVar34 + lVar12;
        local_368 = *(undefined4 *)(local_678 + 0x30);
        lVar12 = *(longlong *)(lVar34 + 0x10);
        if (lVar12 == 0) {
LAB_148e8f54d:
          lVar19 = *(longlong *)(lVar34 + 0x18);
        }
        else {
          uVar11 = FUN_14125b292();
          cVar8 = FUN_1448093f4(lVar12,uVar11);
          if (cVar8 == '\0') goto LAB_148e8f54d;
          lVar19 = *(longlong *)(lVar34 + 0x18);
          FUN_1400b22c2(local_520,&DAT_149e02088);
          FUN_140233b1a(local_510,local_520);
          FUN_14023409e(&local_530,lVar12 + 0x18,CONCAT71(uVar33,1));
          local_158 = (void *)CONCAT44(local_158._4_4_,4);
          FUN_14023423e(&local_148,local_510);
          local_4a0 = &local_158;
          local_498 = &uStack_138;
          FUN_14010d304(&local_490,&local_4a0);
          local_4b0 = local_530;
          local_4a8 = local_528;
          if (local_528 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_528 + 1) = (int)local_528[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_500,&local_4b0,&local_490);
          FUN_14007f2db(local_490,local_488);
          if (local_490 != 0) {
            FUN_1400020a8();
          }
          if (local_148 != (longlong *)0x0) {
            (**(code **)(*local_148 + 0x10))();
          }
          plVar14 = local_528;
          if (local_528 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_528 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_528)(local_528);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
          if (local_510[0] != (longlong *)0x0) {
            (**(code **)(*local_510[0] + 0x10))();
          }
          uVar11 = FUN_1447a1f4a(local_500);
          FUN_144a787a6(&local_390,uVar11);
          if (local_500[0] != (longlong *)0x0) {
            (**(code **)(*local_500[0] + 0x10))();
          }
          if (local_520[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (iStack_388 < 2 && lVar19 != 0) {
          uVar11 = FUN_1447a1f4a(lVar19 + 0x18);
          FUN_144a787a6(&local_390,uVar11);
        }
        else if (iStack_388 < 2) {
          FUN_1400b22c2(&local_158,"Designer: Set my location name");
          if (CONCAT44(uStack_38c,local_390) != 0) {
            FUN_1400020a8();
          }
          local_390 = (undefined4)local_158;
          uStack_38c = local_158._4_4_;
          iStack_388 = (int)uStack_150;
          uStack_384 = uStack_150._4_4_;
        }
        plVar14 = local_378;
        lVar12 = *(longlong *)(lVar34 + 0x28);
        if (lVar12 == 0) {
          local_158 = (void *)0x0;
          uStack_150 = 0;
          local_148 = (longlong *)((ulonglong)local_148 & 0xffffffff00000000);
          uStack_140 = 0;
          uStack_138 = 0;
          FUN_1446ddda2(&local_158,"BigMap_Zone_Anywhere",0);
          FUN_140ac6c96(&local_158,&local_378);
          if (uStack_140 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          plVar15 = *(longlong **)(lVar12 + 0x18);
          if (local_378 != plVar15) {
            local_378 = plVar15;
            if (plVar15 != (longlong *)0x0) {
              (**(code **)(*plVar15 + 8))();
            }
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          local_370 = *(undefined4 *)(lVar12 + 0x20);
        }
        if (*(char *)(lVar34 + 0x8c) == '\x01') {
          cVar8 = FUN_144a7c5f6(lVar34 + 0xd0);
          if (cVar8 == '\0') {
            puVar16 = (undefined8 *)FUN_1447a1f4a(lVar34 + 0xd0);
            uVar10 = *(uint *)(puVar16 + 1);
            _Src = (void *)*puVar16;
LAB_148e8fd20:
            local_158 = (void *)0x0;
            uStack_150 = CONCAT44(uStack_150._4_4_,uVar10);
            if ((longlong)(int)uVar10 == 0) {
              uStack_150 = (ulonglong)uVar10;
            }
            else {
              FUN_1446dd670(&local_158,uVar10,0);
              memcpy(local_158,_Src,(longlong)(int)uVar10 * 2);
            }
          }
          else {
            pcVar26 = "NO MISSION TITLE SET";
LAB_148e8fcfb:
            FUN_1400b22c2(&local_158,pcVar26);
          }
          iVar22 = (int)uStack_150 + -1;
          if ((int)uStack_150 == 0) {
            iVar22 = 0;
          }
          FUN_1402980a2(&local_390,local_158,iVar22);
          if (local_158 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (*(char *)(lVar34 + 0x60) == '\x01') {
          if (1 < *(int *)(lVar34 + 0x80)) {
            uVar10 = *(uint *)(lVar34 + 0x80);
            _Src = *(void **)(lVar34 + 0x78);
            goto LAB_148e8fd20;
          }
          pcVar26 = "No Player Name Set";
          goto LAB_148e8fcfb;
        }
        FUN_140390f7a(local_678 + 3,&local_3a0);
        local_380 = *(undefined1 *)(lVar34 + 0x8d);
        FUN_148c6d2fc(local_628,&local_458);
        if ((longlong)*(int *)(local_670 + 0x390) != 0) {
          puVar16 = *(undefined8 **)(local_670 + 0x388);
          lVar34 = (longlong)*(int *)(local_670 + 0x390) * 0x30;
          do {
            cVar8 = FUN_144722c14(puVar16,local_548,0);
            if (cVar8 != '\0') {
              FUN_148c6cee4(local_628);
              if (puVar16 != (undefined8 *)0x0) goto LAB_148e8f7f6;
              goto LAB_148e8f6df;
            }
            puVar16 = puVar16 + 6;
            lVar34 = lVar34 + -0x30;
          } while (lVar34 != 0);
        }
        FUN_148c6cee4(local_628);
LAB_148e8f6df:
        uStack_138 = 0;
        uStack_130 = 0;
        local_148 = (longlong *)0x0;
        uStack_140 = 0;
        local_158 = (void *)0x0;
        uStack_150 = 0;
        FUN_144a5dc74(&local_158);
        local_148 = (longlong *)0x0;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        iVar22 = *(int *)(local_670 + 0x390);
        *(uint *)(local_670 + 0x390) = iVar22 + 1U;
        if (*(uint *)(local_670 + 0x394) < iVar22 + 1U) {
          FUN_148e9c5c8(plVar21,iVar22);
        }
        lVar34 = *plVar21;
        lVar12 = (longlong)iVar22 * 0x30;
        puVar16 = (undefined8 *)(lVar34 + lVar12);
        FUN_14023423e(puVar16,&local_158);
        *(undefined8 *)(lVar34 + 0x10 + lVar12) = 0;
        *(longlong **)(lVar34 + 0x10 + lVar12) = local_148;
        local_148 = (longlong *)0x0;
        *(undefined4 *)(lVar34 + 0x18 + lVar12) = (undefined4)uStack_140;
        *(undefined4 *)(lVar34 + 0x1c + lVar12) = uStack_140._4_4_;
        uStack_140 = 0;
        *(undefined8 *)(lVar34 + 0x20 + lVar12) = 0;
        *(undefined8 *)(lVar34 + 0x20 + lVar12) = uStack_138;
        uStack_138 = 0;
        *(undefined4 *)(lVar34 + 0x28 + lVar12) = (undefined4)uStack_130;
        *(undefined4 *)(lVar34 + 0x2c + lVar12) = uStack_130._4_4_;
        uStack_130 = 0;
        FUN_145bfacd4(&local_158);
        plVar14 = *(longlong **)(lVar34 + lVar12);
        if (plVar14 != local_378) {
          *puVar16 = local_378;
          if (local_378 != (longlong *)0x0) {
            (**(code **)(*local_378 + 8))();
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        *(undefined4 *)(puVar16 + 1) = local_370;
LAB_148e8f7f6:
        if ((longlong)*(int *)(puVar16 + 3) != 0) {
          plVar14 = (longlong *)puVar16[2];
          lVar34 = (longlong)*(int *)(puVar16 + 3) * 0x28;
          do {
            FUN_148c6de8e(&local_158,plVar14);
            cVar7 = (char)uStack_138;
            cVar8 = *(char *)(local_678 + 0x2c);
            FUN_148c6d186(&local_158);
            if (cVar7 == cVar8) {
              if (plVar14 != (longlong *)0x0) goto LAB_148e8f8fe;
              break;
            }
            plVar14 = plVar14 + 5;
            lVar34 = lVar34 + -0x28;
          } while (lVar34 != 0);
        }
        local_148 = (longlong *)0x0;
        uStack_140 = 0;
        local_158 = (void *)0x0;
        uStack_150 = 0;
        uStack_138 = 0;
        FUN_1400b22c2(&local_148,&DAT_149e02088);
        uStack_138 = CONCAT71(uStack_138._1_7_,10);
        iVar22 = *(int *)(puVar16 + 3);
        *(uint *)(puVar16 + 3) = iVar22 + 1U;
        if (*(uint *)((longlong)puVar16 + 0x1c) < iVar22 + 1U) {
          FUN_148e9c65c(puVar16 + 2,iVar22);
        }
        plVar14 = (longlong *)(puVar16[2] + (longlong)iVar22 * 0x28);
        *plVar14 = 0;
        *plVar14 = (longlong)local_158;
        local_158 = (void *)0x0;
        *(int *)(plVar14 + 1) = (int)uStack_150;
        *(undefined4 *)((longlong)plVar14 + 0xc) = uStack_150._4_4_;
        uStack_150 = 0;
        plVar14[2] = 0;
        plVar14[2] = (longlong)local_148;
        local_148 = (longlong *)0x0;
        *(undefined4 *)(plVar14 + 3) = (undefined4)uStack_140;
        *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_140._4_4_;
        uStack_140 = 0;
        *(char *)(plVar14 + 4) = (char)uStack_138;
        FUN_148c6d186(&local_158);
        *(undefined1 *)(plVar14 + 4) = *(undefined1 *)(local_678 + 0x2c);
LAB_148e8f8fe:
        if ((int)plVar14[3] < 2) {
          lVar34 = local_678[0x2e];
          if (lVar34 == 0) {
            uVar11 = FUN_1465d559e();
            lVar34 = FUN_14477b664(uVar11);
            local_678[0x2e] = lVar34;
          }
          plVar15 = local_678 + 0x2d;
          lVar12 = local_678[0x2f];
          if (lVar12 == 0) {
            if ((lVar34 != 0) && (*plVar15 != 0)) {
              plVar5 = *(longlong **)(lVar34 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar8 == '\0')) {
                local_678[0x2f] = 0;
              }
              else {
                uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar12 = FUN_144aff482(uVar11,plVar15);
                local_678[0x2f] = lVar12;
                if (lVar12 != 0) {
                  lVar34 = local_678[0x2e];
                  goto LAB_148e8fdf1;
                }
              }
            }
          }
          else {
LAB_148e8fdf1:
            if (lVar34 == 0) {
              uVar11 = FUN_1465d559e();
              lVar34 = FUN_14477b664(uVar11);
              local_678[0x2e] = lVar34;
              lVar12 = local_678[0x2f];
              if (lVar12 == 0) {
                if (lVar34 == 0) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = 0;
                  if (*plVar15 != 0) {
                    plVar5 = *(longlong **)(lVar34 + 0xb8);
                    if ((plVar5 == (longlong *)0x0) ||
                       (cVar8 = (**(code **)(*plVar5 + 0x108))(), cVar8 == '\0')) {
                      lVar12 = 0;
                    }
                    else {
                      uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
                      lVar12 = FUN_144aff482(uVar11,plVar15);
                    }
                    local_678[0x2f] = lVar12;
                  }
                }
              }
            }
            uVar11 = FUN_1447a1f4a(lVar12 + 0x18);
            FUN_144a787a6(plVar14 + 2,uVar11);
          }
        }
        iVar22 = (int)plVar14[1];
        *(uint *)(plVar14 + 1) = iVar22 + 1U;
        if (*(uint *)((longlong)plVar14 + 0xc) < iVar22 + 1U) {
          FUN_148e9c6f0(plVar14,iVar22);
        }
        FUN_148c6d2fc((longlong)iVar22 * 0xf8 + *plVar14,&local_458);
      }
    }
    FUN_148c6cee4(&local_458);
    local_4d8 = CONCAT44(local_4d8._4_4_,(uint)local_4d8 & ~local_4e8._4_4_);
    FUN_1449c0562(&local_4e8);
    uVar33 = (undefined7)((ulonglong)local_660 >> 8);
  } while (local_4f0 != local_668 || (local_4e0 != local_660 || local_4d8._4_4_ != (int)local_658));
LAB_148e8e785:
  if ((longlong)*(int *)(local_670 + 0x390) != 0) {
    lVar34 = *(longlong *)(local_670 + 0x388);
    local_640 = (longlong)*(int *)(local_670 + 0x390) * 0x30 + lVar34;
    do {
      FUN_148e9c787(*(undefined8 *)(lVar34 + 0x10));
      local_648 = lVar34;
      if ((longlong)*(int *)(lVar34 + 0x18) != 0) {
        plVar21 = *(longlong **)(lVar34 + 0x10);
        plVar14 = plVar21 + (longlong)*(int *)(lVar34 + 0x18) * 5;
        local_630 = plVar14;
        do {
          iVar22 = (int)plVar21[1];
          if (1 < (longlong)iVar22) {
            ppuVar36 = (undefined **)*plVar21;
            local_658 = plVar21;
            memset(&local_448,0,0x2f0);
            local_450 = ppuVar36 + (longlong)iVar22 * 0x1f + -0x1f;
            local_458 = ppuVar36;
            fVar39 = logf((float)iVar22);
            local_448 = CONCAT44(local_448._4_4_,(int)(longlong)(fVar39 + fVar39));
            puVar16 = &local_458;
            do {
              ppuVar28 = (undefined **)*puVar16;
              ppuVar36 = (undefined **)puVar16[1];
              iVar22 = *(int *)(puVar16 + 2);
              iVar9 = (int)((ulonglong)((longlong)ppuVar36 - (longlong)ppuVar28) >> 3) * -0x42108421
              ;
              plVar14 = (longlong *)(ulonglong)(iVar9 + 1);
              local_678 = puVar16;
              if (iVar22 != 0) {
LAB_148e8e8a0:
                if (8 < (int)(uint)plVar14) {
                  local_668 = (longlong *)CONCAT44(local_668._4_4_,iVar22);
                  local_660 = ppuVar36;
                  memcpy(&local_158,ppuVar28 + (ulonglong)((uint)plVar14 >> 1) * 0x1f,0xf8);
                  memcpy(ppuVar28 + (ulonglong)((uint)plVar14 >> 1) * 0x1f,ppuVar28,0xf8);
                  memcpy(ppuVar28,&local_158,0xf8);
                  ppuVar13 = ppuVar36 + 0x1f;
                  ppuVar20 = ppuVar28;
                  do {
                    ppuVar35 = ppuVar20 + 0x1f;
                    if (ppuVar35 <= ppuVar36) {
                      do {
                        if (*(int *)(ppuVar28 + 0x1e) == *(int *)(ppuVar20 + 0x3d)) {
                          puVar25 = &DAT_149dfb77a;
                          if (*(int *)(ppuVar20 + 0x39) != 0) {
                            puVar25 = (undefined2 *)ppuVar20[0x38];
                          }
                          puVar32 = &DAT_149dfb77a;
                          if (*(int *)(ppuVar28 + 0x1a) != 0) {
                            puVar32 = (undefined2 *)ppuVar28[0x19];
                          }
                          lVar34 = 0;
                          while( true ) {
                            uVar3 = *(ushort *)((longlong)puVar32 + lVar34);
                            uVar23 = (uint)uVar3;
                            uVar4 = *(ushort *)((longlong)puVar25 + lVar34);
                            uVar10 = (uint)uVar4;
                            if (uVar3 != uVar4) break;
                            if (uVar3 == 0) goto LAB_148e8ea35;
LAB_148e8ea07:
                            lVar34 = lVar34 + 2;
                          }
                          if ((uVar4 | uVar3) < 0x80) {
                            uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                            goto LAB_148e8ea07;
                          }
                          if ((int)(uVar23 - uVar10) < 0) break;
                        }
                        else if (*(int *)(ppuVar28 + 0x1e) < *(int *)(ppuVar20 + 0x3d)) break;
LAB_148e8ea35:
                        ppuVar31 = ppuVar35 + 0x1f;
                        ppuVar20 = ppuVar35;
                        ppuVar35 = ppuVar31;
                      } while (ppuVar31 <= ppuVar36);
                    }
                    ppuVar20 = ppuVar35;
                    ppuVar35 = ppuVar13 + -0x1f;
                    ppuVar31 = ppuVar13;
                    if (ppuVar28 < ppuVar35) {
                      do {
                        ppuVar31 = ppuVar13;
                        if (*(int *)(ppuVar13 + -1) == *(int *)(ppuVar28 + 0x1e)) {
                          puVar25 = &DAT_149dfb77a;
                          if (*(int *)(ppuVar28 + 0x1a) != 0) {
                            puVar25 = (undefined2 *)ppuVar28[0x19];
                          }
                          puVar32 = &DAT_149dfb77a;
                          if (*(int *)(ppuVar13 + -5) != 0) {
                            puVar32 = (undefined2 *)ppuVar13[-6];
                          }
                          lVar34 = 0;
                          while( true ) {
                            uVar3 = *(ushort *)((longlong)puVar32 + lVar34);
                            uVar10 = (uint)uVar3;
                            uVar4 = *(ushort *)((longlong)puVar25 + lVar34);
                            uVar23 = (uint)uVar4;
                            if (uVar3 != uVar4) break;
                            if (uVar3 == 0) goto LAB_148e8e99b;
LAB_148e8e964:
                            lVar34 = lVar34 + 2;
                          }
                          if ((uVar4 | uVar3) < 0x80) {
                            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                            uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                            goto LAB_148e8e964;
                          }
                          if ((int)(uVar10 - uVar23) < 0) break;
                        }
                        else if (*(int *)(ppuVar13 + -1) < *(int *)(ppuVar28 + 0x1e)) break;
LAB_148e8e99b:
                        ppuVar2 = ppuVar35 + -0x1f;
                        ppuVar13 = ppuVar35;
                        ppuVar31 = ppuVar35;
                        ppuVar35 = ppuVar2;
                      } while (ppuVar28 < ppuVar2);
                    }
                    ppuVar13 = ppuVar35;
                    if (ppuVar13 < ppuVar20) goto LAB_148e8ea9d;
                    memcpy(&local_158,ppuVar20,0xf8);
                    memcpy(ppuVar20,ppuVar13,0xf8);
                    memcpy(ppuVar13,&local_158,0xf8);
                  } while( true );
                }
                for (; puVar16 = local_678, ppuVar13 = ppuVar28, ppuVar20 = ppuVar28,
                    ppuVar28 < ppuVar36; ppuVar36 = ppuVar36 + -0x1f) {
                  while (ppuVar35 = ppuVar13 + 0x1f, ppuVar35 <= ppuVar36) {
                    if (*(int *)(ppuVar20 + 0x1e) == *(int *)(ppuVar13 + 0x3d)) {
                      puVar25 = &DAT_149dfb77a;
                      if (*(int *)(ppuVar13 + 0x39) != 0) {
                        puVar25 = (undefined2 *)ppuVar13[0x38];
                      }
                      puVar32 = &DAT_149dfb77a;
                      if (*(int *)(ppuVar20 + 0x1a) != 0) {
                        puVar32 = (undefined2 *)ppuVar20[0x19];
                      }
                      lVar34 = 0;
                      while( true ) {
                        uVar3 = *(ushort *)((longlong)puVar32 + lVar34);
                        uVar10 = (uint)uVar3;
                        uVar4 = *(ushort *)((longlong)puVar25 + lVar34);
                        uVar23 = (uint)uVar4;
                        if (uVar3 != uVar4) {
                          if ((uVar4 | uVar3) < 0x80) {
                            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                            uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                            goto LAB_148e8f067;
                          }
                          bVar27 = (byte)(uVar10 - uVar23 >> 0x18);
                          goto LAB_148e8f096;
                        }
                        if (uVar3 == 0) break;
LAB_148e8f067:
                        lVar34 = lVar34 + 2;
                      }
                      bVar27 = 0;
LAB_148e8f096:
                      bVar38 = (bool)(bVar27 >> 7);
                    }
                    else {
                      bVar38 = *(int *)(ppuVar20 + 0x1e) < *(int *)(ppuVar13 + 0x3d);
                    }
                    ppuVar13 = ppuVar35;
                    if (bVar38 != false) {
                      ppuVar20 = ppuVar35;
                    }
                  }
                  memcpy(&local_158,ppuVar20,0xf8);
                  memcpy(ppuVar20,ppuVar36,0xf8);
                  memcpy(ppuVar36,&local_158,0xf8);
                }
                goto LAB_148e8f105;
              }
LAB_148e8eb84:
              puVar16 = local_678;
              if ((int)plVar14 != 0) {
                iVar22 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
                local_668 = plVar14;
                do {
                  iVar9 = iVar22 * 2 + 1;
                  iVar18 = iVar22;
                  if (iVar9 < (int)plVar14) {
LAB_148e8ebb7:
                    iVar17 = iVar18 * 2 + 2;
                    iVar30 = iVar9;
                    if (iVar17 < (int)plVar14) {
                      lVar34 = (longlong)iVar17;
                      lVar12 = (longlong)iVar9;
                      if (*(int *)(ppuVar28 + lVar34 * 0x1f + 0x1e) ==
                          *(int *)(ppuVar28 + lVar12 * 0x1f + 0x1e)) {
                        puVar25 = &DAT_149dfb77a;
                        if (*(int *)(ppuVar28 + lVar12 * 0x1f + 0x1a) != 0) {
                          puVar25 = (undefined2 *)ppuVar28[lVar12 * 0x1f + 0x19];
                        }
                        puVar32 = &DAT_149dfb77a;
                        if (*(int *)(ppuVar28 + lVar34 * 0x1f + 0x1a) != 0) {
                          puVar32 = (undefined2 *)ppuVar28[lVar34 * 0x1f + 0x19];
                        }
                        lVar34 = 0;
                        while( true ) {
                          uVar3 = *(ushort *)((longlong)puVar32 + lVar34);
                          uVar10 = (uint)uVar3;
                          uVar4 = *(ushort *)((longlong)puVar25 + lVar34);
                          uVar23 = (uint)uVar4;
                          if (uVar3 != uVar4) {
                            if ((uVar4 | uVar3) < 0x80) {
                              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                              uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                              goto LAB_148e8ec2e;
                            }
                            bVar27 = (byte)(uVar10 - uVar23 >> 0x18);
                            goto LAB_148e8ec69;
                          }
                          if (uVar3 == 0) break;
LAB_148e8ec2e:
                          lVar34 = lVar34 + 2;
                        }
                        bVar27 = 0;
LAB_148e8ec69:
                        bVar38 = (bool)(bVar27 >> 7);
                      }
                      else {
                        bVar38 = *(int *)(ppuVar28 + lVar34 * 0x1f + 0x1e) <
                                 *(int *)(ppuVar28 + lVar12 * 0x1f + 0x1e);
                      }
                      iVar30 = iVar17;
                      if (bVar38 != false) {
                        iVar30 = iVar9;
                      }
                    }
                    ppuVar36 = ppuVar28 + (longlong)iVar18 * 0x1f;
                    ppuVar13 = ppuVar28 + (longlong)iVar30 * 0x1f;
                    if (*(int *)(ppuVar28 + (longlong)iVar18 * 0x1f + 0x1e) ==
                        *(int *)(ppuVar28 + (longlong)iVar30 * 0x1f + 0x1e)) {
                      puVar25 = &DAT_149dfb77a;
                      if (*(int *)(ppuVar13 + 0x1a) != 0) {
                        puVar25 = (undefined2 *)ppuVar13[0x19];
                      }
                      puVar32 = &DAT_149dfb77a;
                      if (*(int *)(ppuVar36 + 0x1a) != 0) {
                        puVar32 = (undefined2 *)ppuVar36[0x19];
                      }
                      lVar34 = 0;
                      do {
                        uVar3 = *(ushort *)((longlong)puVar32 + lVar34);
                        uVar23 = (uint)uVar3;
                        uVar4 = *(ushort *)((longlong)puVar25 + lVar34);
                        uVar10 = (uint)uVar4;
                        if (uVar3 == uVar4) {
                          if (uVar3 == 0) goto LAB_148e8ed63;
                        }
                        else {
                          if (0x7f < (uVar4 | uVar3)) goto LAB_148e8ed6e;
                          uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar4])
                          goto LAB_148e8ed6e;
                        }
                        lVar34 = lVar34 + 2;
                      } while( true );
                    }
                    if (*(int *)(ppuVar28 + (longlong)iVar18 * 0x1f + 0x1e) <
                        *(int *)(ppuVar28 + (longlong)iVar30 * 0x1f + 0x1e)) goto LAB_148e8ed0c;
                  }
LAB_148e8ed63:
                  bVar38 = iVar22 != 0;
                  iVar22 = iVar22 + -1;
                } while (bVar38);
                puVar16 = local_678;
                if (1 < (int)plVar14) {
                  uVar29 = ((ulonglong)plVar14 & 0xffffffff) - 1;
                  memcpy(&local_158,ppuVar28,0xf8);
                  memcpy(ppuVar28,ppuVar28 + uVar29 * 0x1f,0xf8);
                  memcpy(ppuVar28 + uVar29 * 0x1f,&local_158,0xf8);
                  puVar16 = local_678;
                  if ((int)plVar14 != 2) {
LAB_148e8eddc:
                    iVar22 = 0;
                    iVar18 = 1;
                    iVar9 = 0;
LAB_148e8ede5:
                    lVar34 = (longlong)(iVar22 + 2);
                    iVar30 = iVar18;
                    if (lVar34 < (longlong)uVar29) {
                      lVar12 = (longlong)iVar18;
                      if (*(int *)(ppuVar28 + lVar34 * 0x1f + 0x1e) ==
                          *(int *)(ppuVar28 + lVar12 * 0x1f + 0x1e)) {
                        puVar25 = &DAT_149dfb77a;
                        if (*(int *)(ppuVar28 + lVar12 * 0x1f + 0x1a) != 0) {
                          puVar25 = (undefined2 *)ppuVar28[lVar12 * 0x1f + 0x19];
                        }
                        puVar32 = &DAT_149dfb77a;
                        if (*(int *)(ppuVar28 + lVar34 * 0x1f + 0x1a) != 0) {
                          puVar32 = (undefined2 *)ppuVar28[lVar34 * 0x1f + 0x19];
                        }
                        lVar34 = 0;
                        while( true ) {
                          uVar3 = *(ushort *)((longlong)puVar32 + lVar34);
                          uVar23 = (uint)uVar3;
                          uVar4 = *(ushort *)((longlong)puVar25 + lVar34);
                          uVar10 = (uint)uVar4;
                          if (uVar3 != uVar4) {
                            if ((uVar4 | uVar3) < 0x80) {
                              uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                              goto LAB_148e8ee5d;
                            }
                            bVar27 = (byte)(uVar23 - uVar10 >> 0x18);
                            goto LAB_148e8ee95;
                          }
                          if (uVar3 == 0) break;
LAB_148e8ee5d:
                          lVar34 = lVar34 + 2;
                        }
                        bVar27 = 0;
LAB_148e8ee95:
                        bVar38 = (bool)(bVar27 >> 7);
                      }
                      else {
                        bVar38 = *(int *)(ppuVar28 + lVar34 * 0x1f + 0x1e) <
                                 *(int *)(ppuVar28 + lVar12 * 0x1f + 0x1e);
                      }
                      iVar30 = iVar22 + 2;
                      if (bVar38 != false) {
                        iVar30 = iVar18;
                      }
                    }
                    ppuVar36 = ppuVar28 + (longlong)iVar9 * 0x1f;
                    ppuVar13 = ppuVar28 + (longlong)iVar30 * 0x1f;
                    if (*(int *)(ppuVar28 + (longlong)iVar9 * 0x1f + 0x1e) ==
                        *(int *)(ppuVar28 + (longlong)iVar30 * 0x1f + 0x1e)) {
                      puVar25 = &DAT_149dfb77a;
                      if (*(int *)(ppuVar13 + 0x1a) != 0) {
                        puVar25 = (undefined2 *)ppuVar13[0x19];
                      }
                      puVar32 = &DAT_149dfb77a;
                      if (*(int *)(ppuVar36 + 0x1a) != 0) {
                        puVar32 = (undefined2 *)ppuVar36[0x19];
                      }
                      lVar34 = 0;
                      do {
                        uVar3 = *(ushort *)((longlong)puVar32 + lVar34);
                        uVar10 = (uint)uVar3;
                        uVar4 = *(ushort *)((longlong)puVar25 + lVar34);
                        uVar23 = (uint)uVar4;
                        if (uVar3 == uVar4) {
                          if (uVar3 == 0) goto LAB_148e8ef87;
                        }
                        else {
                          if (0x7f < (uVar4 | uVar3)) goto LAB_148e8efda;
                          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                          uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar4])
                          goto LAB_148e8efda;
                        }
                        lVar34 = lVar34 + 2;
                      } while( true );
                    }
                    if (*(int *)(ppuVar28 + (longlong)iVar9 * 0x1f + 0x1e) <
                        *(int *)(ppuVar28 + (longlong)iVar30 * 0x1f + 0x1e)) goto LAB_148e8ef3c;
                    goto LAB_148e8ef87;
                  }
                }
              }
LAB_148e8f105:
              puVar16 = puVar16 + -3;
              plVar14 = local_630;
              plVar21 = local_658;
            } while (&local_458 <= puVar16);
          }
          plVar21 = plVar21 + 5;
        } while (plVar21 != plVar14);
      }
      lVar34 = local_648 + 0x30;
    } while (lVar34 != local_640);
  }
  uVar11 = FUN_14479d2ce(local_638 + 0x30);
  lVar34 = FUN_140391a3c(uVar11);
  SRWLock = local_650;
  if ((lVar34 != 0) && (puVar6 = *(ushort **)(local_670 + 0x80), puVar6 != (ushort *)0x0)) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(local_670 + 0x78) & 0x3f));
  }
LAB_148e8e3fc:
  ReleaseSRWLockShared(SRWLock);
LAB_148e8e405:
  if ((local_60 ^ (ulonglong)auStack_698) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e8ff1a FUN_148e8ff1a body=131 status=ok
// SIG undefined FUN_148e8ff1a(void)

undefined8 * FUN_148e8ff1a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = *param_3;
  local_20 = *(longlong *)(param_3 + 2);
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14617404a(param_1,param_2,local_28);
  *param_1 = &PTR_FUN_14b9c47e8;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e8ff9e FUN_148e8ff9e body=135 status=ok
// SIG undefined FUN_148e8ff9e(void)

undefined8 * FUN_148e8ff9e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = *param_3;
  local_20 = *(longlong *)(param_3 + 2);
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14617404a(param_1,param_2,local_28);
  *param_1 = &PTR_FUN_14b9c47f8;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90026 FUN_148e90026 body=201 status=ok
// SIG undefined FUN_148e90026(void)

undefined8 * FUN_148e90026(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = (int)param_3[1];
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148e900f0 FUN_148e900f0 body=306 status=ok
// SIG undefined FUN_148e900f0(void)

void FUN_148e900f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      lVar4 = FUN_1407f492e(uVar3);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x398) != 0)) {
        lVar5 = FUN_144a7b4ca();
        if (((*(longlong *)(lVar4 + 0x398) != 0) &&
            (((lVar5 != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x398) + 0x10), lVar4 != 0)) &&
             (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          lVar4 = FUN_14129b2e6();
          if (lVar4 != 0) {
            local_a8[0] = 0;
            uStack_70 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            local_74 = 0;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_40 = 0;
            uStack_38 = 0;
            local_30 = 0xffffffff;
            local_2c = 0;
            local_2a = 1;
            local_29 = 0;
            uStack_6c = 0x10000000000;
            lVar5 = FUN_1402735c8();
            local_b8 = local_a8;
            FUN_140bdce7c(lVar2,lVar5 + 0x530,lVar4,0);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90224 FUN_148e90224 body=397 status=ok
// SIG undefined FUN_148e90224(void)

void FUN_148e90224(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14588cd9e();
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    lVar2 = FUN_140391552(param_1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar1 = *(undefined8 *)(param_1 + 0x2b0);
      *puVar3 = &PTR_FUN_14b9c4898;
      puVar3[1] = uVar1;
      FUN_14039144e(lVar2,puVar3);
    }
  }
  lVar2 = FUN_140391552(param_1);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x2c8) == 0) {
      local_38 = FUN_148e903b2;
      local_30 = 0;
      FUN_145c5bc50(local_48,param_1);
      FUN_1446ddc76(&local_50,"Option_GameSettings_SliderUpdate",1);
      FUN_140391af6(lVar2,&local_38,local_50,local_48);
      *(code **)(param_1 + 0x2c8) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      local_38 = FUN_148e90420;
      local_30 = 0;
      FUN_145c5bc50(local_48,param_1);
      FUN_1446ddc76(&local_58,"Option_GameSettings_SettingEnabledChanged",1);
      FUN_140391af6(lVar2,&local_38,local_58,local_48);
      *(code **)(param_1 + 0x2d0) = local_38;
      FUN_1449db362(local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e903b2 FUN_148e903b2 body=110 status=ok
// SIG undefined FUN_148e903b2(void)

void FUN_148e903b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 != 0)) &&
     (lVar3 = (longlong)*(int *)(lVar1 + 0xd8), 0 < lVar3)) {
    lVar4 = *(longlong *)(lVar1 + 0xd0) + 0x70;
    do {
      if (*(longlong *)(lVar4 + -0x28) == *(longlong *)(param_2 + 8)) {
        FUN_1456bab4c(lVar4,param_2 + 0x10);
        puVar2 = *(ushort **)(lVar1 + 0x80);
        if (puVar2 == (ushort *)0x0) {
          return;
        }
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
        return;
      }
      lVar4 = lVar4 + 0x1e8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148e90420 FUN_148e90420 body=123 status=ok
// SIG undefined FUN_148e90420(void)

void FUN_148e90420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 != 0)) &&
     (lVar3 = (longlong)*(int *)(lVar1 + 0xd8), 0 < lVar3)) {
    lVar4 = *(longlong *)(lVar1 + 0xd0);
    do {
      if (*(longlong *)(lVar4 + 0x1dc) == *(longlong *)(param_2 + 8)) {
        *(undefined1 *)(lVar4 + 0x1d8) = *(undefined1 *)(param_2 + 0x10);
        *(undefined1 *)(lVar4 + 0x1d9) = *(undefined1 *)(param_2 + 0x11);
        FUN_1461c7112();
        puVar2 = *(ushort **)(lVar1 + 0x80);
        if (puVar2 == (ushort *)0x0) {
          return;
        }
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
        return;
      }
      lVar4 = lVar4 + 0x1e8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148e9049c FUN_148e9049c body=194 status=ok
// SIG undefined FUN_148e9049c(void)

void FUN_148e9049c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      FUN_1446ddc76(&local_30,"Option_GameSettings_SliderUpdate",1);
      FUN_1401cd85c(lVar1,local_30,param_1 + 0x2c8);
    }
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      FUN_1446ddc76(&local_38,"Option_GameSettings_SettingEnabledChanged",1);
      FUN_1401cd85c(lVar1,local_38,param_1 + 0x2d0);
    }
  }
  FUN_1459249be(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90560 FUN_148e90560 body=221 status=ok
// SIG undefined FUN_148e90560(void)

void FUN_148e90560(undefined8 param_1,undefined8 *param_2,float param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = 1;
  lVar2 = FUN_148e90dca();
  if (lVar2 != 0) {
    lVar2 = FUN_140391552(param_1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      *puVar3 = &PTR_FUN_14b9c6ed8;
      puVar3[1] = *param_2;
      lVar2 = 0x14;
      do {
        *(undefined1 *)((longlong)puVar3 + lVar2 + -4) = 0;
        *(undefined8 *)((longlong)puVar3 + lVar2) = 0;
        ((undefined8 *)((longlong)puVar3 + lVar2))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar2 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar2 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar3 + lVar2 + 0x30) = 0;
        lVar2 = lVar2 + 0x38;
      } while (lVar2 != 0xbc);
      puVar3[3] = (double)param_3;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90664 FUN_148e90664 body=223 status=ok
// SIG undefined FUN_148e90664(void)

void FUN_148e90664(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcdd4(local_48);
  local_49 = 3;
  lVar2 = FUN_148e90dca(param_1,param_2);
  if (lVar2 != 0) {
    lVar2 = FUN_140391552(param_1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      *puVar3 = &PTR_FUN_14b9c6ed8;
      puVar3[1] = *param_2;
      lVar4 = 0x14;
      do {
        *(undefined1 *)((longlong)puVar3 + lVar4 + -4) = 0;
        *(undefined8 *)((longlong)puVar3 + lVar4) = 0;
        ((undefined8 *)((longlong)puVar3 + lVar4))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar3 + lVar4 + 0x30) = 0;
        lVar4 = lVar4 + 0x38;
      } while (lVar4 != 0xbc);
      *(undefined4 *)((longlong)puVar3 + 0x14) = param_3;
      FUN_14039144e(lVar2,puVar3);
    }
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90744 FUN_148e90744 body=293 status=ok
// SIG undefined FUN_148e90744(void)

void FUN_148e90744(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    FUN_1446dcdd4(local_50);
    local_51 = 4;
    lVar3 = FUN_148e90dca(param_1,param_2);
    if (lVar3 != 0) {
      FUN_14148d276(lVar3 + 0xd0,param_3);
      puVar2 = *(ushort **)(lVar4 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
      lVar4 = FUN_140391552(param_1);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
        *puVar5 = &PTR_FUN_14b9c6ed8;
        puVar5[1] = *param_2;
        lVar3 = 0x14;
        do {
          *(undefined1 *)((longlong)puVar5 + lVar3 + -4) = 0;
          *(undefined8 *)((longlong)puVar5 + lVar3) = 0;
          ((undefined8 *)((longlong)puVar5 + lVar3))[1] = 0;
          puVar1 = (undefined8 *)((longlong)puVar5 + lVar3 + 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)((longlong)puVar5 + lVar3 + 0x20);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)((longlong)puVar5 + lVar3 + 0x30) = 0;
          lVar3 = lVar3 + 0x38;
        } while (lVar3 != 0xbc);
        *(undefined4 *)((longlong)puVar5 + 0x14) = param_3;
        FUN_14039144e(lVar4,puVar5);
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90878 FUN_148e90878 body=169 status=ok
// SIG undefined FUN_148e90878(void)

void FUN_148e90878(longlong param_1,uint param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (((int)param_2 < 0) || (*(int *)(lVar1 + 0xd8) <= (int)param_2)) {
      puVar4 = (undefined8 *)FUN_140e82300();
      plVar3 = (longlong *)*puVar4;
      plVar5 = *(longlong **)(lVar1 + 0xc0);
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 0xc0);
      puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0xd0) + (ulonglong)param_2 * 0x1e8 + 0x18);
      plVar3 = (longlong *)*puVar4;
    }
    if (plVar5 != plVar3) {
      *(longlong **)(lVar1 + 0xc0) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *(undefined4 *)(lVar1 + 200) = *(undefined4 *)(puVar4 + 1);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148e90922 FUN_148e90922 body=283 status=ok
// SIG undefined FUN_148e90922(void)

void FUN_148e90922(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SetWantSettingsRefresh",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90a3e FUN_148e90a3e body=679 status=ok
// SIG undefined FUN_148e90a3e(void)

void FUN_148e90a3e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  wchar_t *_Str;
  size_t sVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auStack_238 [40];
  longlong *local_210;
  longlong *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  undefined1 local_1e0 [256];
  undefined1 local_e0 [128];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_148e90c7a;
  local_208 = (longlong *)(lVar2 + 0xd0);
  if (*(int *)(lVar2 + 0xd8) == (int)param_2[1]) {
    if (0 < *(int *)(lVar2 + 0xd8)) {
      lVar12 = 0;
      lVar10 = 0;
      lVar11 = 0;
      bVar13 = 0;
      local_210 = param_2;
      do {
        lVar3 = *(longlong *)(*local_210 + lVar10);
        lVar4 = *(longlong *)(*local_208 + 0x1dc + lVar12);
        if (lVar4 != lVar3) break;
        bVar6 = FUN_14148c6ea(*local_208 + lVar12,*local_210 + lVar10);
        bVar13 = bVar13 | bVar6;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x168;
        lVar12 = lVar12 + 0x1e8;
      } while (lVar11 < *(int *)(lVar2 + 0xd8));
      param_2 = local_210;
      if ((bVar13 & 1) != 0) {
        cVar7 = FUN_144729dda(param_1 + 0x30);
        param_2 = local_210;
        if (cVar7 != '\0') {
          uVar8 = FUN_14479d2ce(param_1 + 0x30);
          local_200 = local_1e0;
          local_1e8 = '\0';
          local_1f0 = local_e0;
          local_1f8 = local_200;
          _Str = (wchar_t *)FUN_140c7f682(param_1,L"SetWantSettingsRefresh",&local_200);
          param_2 = local_210;
          local_60 = 0;
          if (_Str == (wchar_t *)0x0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            sVar9 = wcslen(_Str);
            FUN_1446fe5a4(local_e0,_Str,sVar9 & 0xffffffff,1);
          }
          FUN_1412a486e(uVar8,local_58);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_1e8 == '\x01') {
            FUN_1400020a8(local_200);
          }
        }
      }
      if (lVar4 != lVar3) goto LAB_148e90bd8;
    }
  }
  else {
LAB_148e90bd8:
    iVar1 = *(int *)(lVar2 + 0xdc);
    FUN_140d46fcd(*(undefined8 *)(lVar2 + 0xd0),*(undefined4 *)(lVar2 + 0xd8));
    *(undefined4 *)(lVar2 + 0xd8) = 0;
    if ((iVar1 < 0) && (*(int *)(lVar2 + 0xdc) != 0)) {
      FUN_148e9d97e(local_208,0);
    }
    if ((longlong)(int)param_2[1] != 0) {
      lVar10 = *param_2;
      lVar11 = (longlong)(int)param_2[1] * 0x168;
      do {
        if (*(longlong *)(param_1 + 0x288) != 0) {
          lVar12 = FUN_14148c67c(*(longlong *)(param_1 + 0x288) + 0xd0);
          if (*(char *)(lVar10 + 0xc) == '\x01') {
            *(undefined1 *)(lVar12 + 0x6c) = 1;
          }
          FUN_14148c6ea(lVar12,lVar10);
        }
        lVar10 = lVar10 + 0x168;
        lVar11 = lVar11 + -0x168;
      } while (lVar11 != 0);
    }
  }
  puVar5 = *(ushort **)(lVar2 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
LAB_148e90c7a:
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e90ce6 FUN_148e90ce6 body=226 status=ok
// SIG undefined FUN_148e90ce6(void)

void FUN_148e90ce6(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcdd4(local_48);
  local_49 = 2;
  lVar2 = FUN_148e90dca(param_1,param_2);
  if (lVar2 != 0) {
    lVar2 = FUN_140391552(param_1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      *puVar3 = &PTR_FUN_14b9c6ed8;
      puVar3[1] = *param_2;
      lVar4 = 0x14;
      do {
        *(undefined1 *)((longlong)puVar3 + lVar4 + -4) = 0;
        *(undefined8 *)((longlong)puVar3 + lVar4) = 0;
        ((undefined8 *)((longlong)puVar3 + lVar4))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar3 + lVar4 + 0x30) = 0;
        lVar4 = lVar4 + 0x38;
      } while (lVar4 != 0xbc);
      *(uint *)((longlong)puVar3 + 0x14) = param_3 & 0xff;
      FUN_14039144e(lVar2,puVar3);
    }
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90dca FUN_148e90dca body=126 status=ok
// SIG undefined FUN_148e90dca(void)

longlong FUN_148e90dca(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0xd8) != 0)) {
    lVar2 = *(longlong *)(lVar3 + 0xd0);
    lVar3 = (longlong)*(int *)(lVar3 + 0xd8) * 0x1e8;
    do {
      switch(*param_3) {
      case 1:
        lVar1 = *(longlong *)(lVar2 + 0x48);
        break;
      case 2:
        lVar1 = *(longlong *)(lVar2 + 0x150);
        goto joined_r0x000148e90e29;
      case 3:
        lVar1 = *(longlong *)(lVar2 + 0x88);
        break;
      case 4:
        lVar1 = *(longlong *)(lVar2 + 0xd0);
joined_r0x000148e90e29:
        if (lVar1 == *param_2) {
          return lVar2;
        }
      default:
        goto switchD_148e90e0c_default;
      }
      if (lVar1 == *param_2) {
        return lVar2;
      }
switchD_148e90e0c_default:
      lVar2 = lVar2 + 0x1e8;
      lVar3 = lVar3 + -0x1e8;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 148e90e48 FUN_148e90e48 body=270 status=ok
// SIG undefined FUN_148e90e48(void)

void FUN_148e90e48(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 **local_48;
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = &LAB_148e91074;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e90f58(param_1,param_2,&DAT_14cb92c30,param_1);
      local_38 = &LAB_148e91082;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e90f58(param_1,param_2,&DAT_14cb92c38,param_1);
      local_38 = &LAB_148e91090;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e90f58(param_1,param_2,&DAT_14cb92bc0,param_1);
      local_38 = &LAB_148e9109e;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e90f58(param_1,param_2,&DAT_14cb92bc8,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e90f58 FUN_148e90f58 body=282 status=ok
// SIG undefined FUN_148e90f58(void)

void FUN_148e90f58(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442da8ba(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e910ae FUN_148e910ae body=87 status=ok
// SIG undefined FUN_148e910ae(void)

void FUN_148e910ae(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xe0) == '\x01')) {
    lVar1 = FUN_140391552();
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9c6dd8;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148e91106 FUN_148e91106 body=283 status=ok
// SIG undefined FUN_148e91106(void)

void FUN_148e91106(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsLeftInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e91222 FUN_148e91222 body=283 status=ok
// SIG undefined FUN_148e91222(void)

void FUN_148e91222(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsRightInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e9133e FUN_148e9133e body=244 status=ok
// SIG undefined FUN_148e9133e(void)

void FUN_148e9133e(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = FUN_140391552();
  if (lVar4 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2b0);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar1 = *(undefined1 *)(lVar2 + 0xe9);
      *puVar5 = &PTR_FUN_14b9c48a8;
      puVar5[1] = lVar3;
      *(undefined1 *)(puVar5 + 2) = uVar1;
      FUN_14039144e(lVar4,puVar5);
    }
    if (*(char *)(lVar2 + 0xe8) == '\x01') {
      if (*(longlong *)(param_1 + 0x2b0) != DAT_14cbdd4b0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar5 = &PTR_FUN_14b9c6da0;
        *(undefined1 *)(puVar5 + 1) = 0;
        FUN_14039144e(lVar4,puVar5);
        return;
      }
      puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar5 = &PTR_FUN_14b9c48b8;
      FUN_14039144e(lVar4,puVar5);
    }
  }
  FUN_1458343da(param_1);
  return;
}



// FUNCTION 148e91432 FUN_148e91432 body=81 status=ok
// SIG undefined FUN_148e91432(void)

undefined8 * FUN_148e91432(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2d8,0x10);
  FUN_140e8cfb8(puVar1);
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  *puVar1 = &PTR_FUN_14b9c27a0;
  puVar1[0x56] = DAT_14cbdd4b8;
  return puVar1;
}



// FUNCTION 148e91484 FUN_148e91484 body=196 status=ok
// SIG undefined FUN_148e91484(void)

void FUN_148e91484(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402e0ee2();
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar3 = *(longlong *)(local_38 + 800);
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x28));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (*(int *)(param_1 + 0x2b8) != *(int *)(lVar3 + 0x20)) {
      *(int *)(param_1 + 0x2b8) = *(int *)(lVar3 + 0x20);
      FUN_148e90a3e(param_1,lVar3);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x28));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e9154a FUN_148e9154a body=81 status=ok
// SIG undefined FUN_148e9154a(void)

undefined8 * FUN_148e9154a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2d8,0x10);
  FUN_140e8cfb8(puVar1);
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  *puVar1 = &PTR_FUN_14b9c2960;
  puVar1[0x56] = DAT_14cbdd498;
  return puVar1;
}



// FUNCTION 148e9159c FUN_148e9159c body=196 status=ok
// SIG undefined FUN_148e9159c(void)

void FUN_148e9159c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402e0ee2();
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar3 = *(longlong *)(local_38 + 0x330);
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x28));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (*(int *)(param_1 + 0x2b8) != *(int *)(lVar3 + 0x20)) {
      *(int *)(param_1 + 0x2b8) = *(int *)(lVar3 + 0x20);
      FUN_148e90a3e(param_1,lVar3);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x28));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e91662 FUN_148e91662 body=79 status=ok
// SIG undefined FUN_148e91662(void)

void FUN_148e91662(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  FUN_148e90224();
  cVar3 = FUN_144729dda(param_1 + 0x30);
  if (cVar3 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    lVar2 = FUN_14101baae(uVar1);
    if (lVar2 != 0) {
      uVar4 = FUN_148e916b2();
      FUN_145ac38b0(param_1,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 148e916b2 FUN_148e916b2 body=68 status=ok
// SIG undefined FUN_148e916b2(void)

undefined8 FUN_148e916b2(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (DAT_14cb0d2b0 != 0) {
    plVar2 = (longlong *)FUN_141283ace();
    if (plVar2 != (longlong *)0x0) {
      cVar1 = FUN_145bce25e(plVar2);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148e916e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x330))(plVar2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 148e916f6 FUN_148e916f6 body=28 status=ok
// SIG undefined FUN_148e916f6(void)

void FUN_148e916f6(undefined8 param_1)

{
  FUN_145ac38b0(param_1,0);
  FUN_148e9049c(param_1);
  return;
}



// FUNCTION 148e9171c FUN_148e9171c body=161 status=ok
// SIG undefined FUN_148e9171c(void)

void FUN_148e9171c(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) == '\x01')) {
    lVar4 = FUN_140391552();
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x2b0);
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar1 = *(undefined1 *)(lVar2 + 0xe9);
        *puVar5 = &PTR_FUN_14b9c48a8;
        puVar5[1] = lVar3;
        *(undefined1 *)(puVar5 + 2) = uVar1;
        FUN_14039144e(lVar4,puVar5);
      }
      puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar5 = &PTR_FUN_14b9c48b8;
      FUN_14039144e(lVar4,puVar5);
      return;
    }
  }
  return;
}



// FUNCTION 148e917c0 FUN_148e917c0 body=58 status=ok
// SIG undefined FUN_148e917c0(void)

void FUN_148e917c0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  FUN_148e90ce6();
  if (*param_2 != DAT_14cbdd588) {
    return;
  }
  FUN_145ac38b0(param_1,param_3);
  return;
}



// FUNCTION 148e917fa FUN_148e917fa body=76 status=ok
// SIG undefined FUN_148e917fa(void)

void FUN_148e917fa(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_148e90224();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_14020fad6(lVar1 + 0xf8,L"FTCScreenBoundariesHelper");
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148e91846 FUN_148e91846 body=189 status=ok
// SIG undefined FUN_148e91846(void)

void FUN_148e91846(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e90e48();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148e91a20;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e91904(param_1,param_2,&DAT_14cb92bd0,param_1);
      local_38 = FUN_148e91b74;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148e91904(param_1,param_2,&DAT_14cb92bd8,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e91904 FUN_148e91904 body=282 status=ok
// SIG undefined FUN_148e91904(void)

void FUN_148e91904(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442da9f8(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e91a20 FUN_148e91a20 body=339 status=ok
// SIG undefined FUN_148e91a20(void)

void FUN_148e91a20(longlong param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_140391552();
  if (lVar3 != 0) {
    local_1c = 0x3f800000;
    fVar6 = (float)FUN_148e920ba(param_1,*(float *)(param_1 + 0x6ac) - *(float *)(param_1 + 0x528));
    if (1e-08 < ABS(*(float *)(param_1 + 0x6ac) - fVar6)) {
      *(float *)(param_1 + 0x6ac) = fVar6;
      FUN_140de1078(param_1,&DAT_14cbdd5d0,0,0);
      puVar4 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      *puVar4 = &PTR_FUN_14b9c6ed8;
      puVar4[1] = DAT_14cbdd5b8;
      lVar5 = 0x14;
      do {
        *(undefined1 *)((longlong)puVar4 + lVar5 + -4) = 0;
        *(undefined8 *)((longlong)puVar4 + lVar5) = 0;
        ((undefined8 *)((longlong)puVar4 + lVar5))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar4 + lVar5 + 0x30) = 0;
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != 0xbc);
      puVar4[3] = (double)*(float *)(param_1 + 0x6ac);
      FUN_14039144e(lVar3,puVar4);
      lVar3 = *(longlong *)(param_1 + 0x288);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xf4) = local_1c;
        puVar2 = *(ushort **)(lVar3 + 0x80);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e91b74 FUN_148e91b74 body=339 status=ok
// SIG undefined FUN_148e91b74(void)

void FUN_148e91b74(longlong param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_140391552();
  if (lVar3 != 0) {
    local_1c = 0x3f800000;
    fVar6 = (float)FUN_148e920ba(param_1,*(float *)(param_1 + 0x6ac) + *(float *)(param_1 + 0x528));
    if (1e-08 < ABS(*(float *)(param_1 + 0x6ac) - fVar6)) {
      *(float *)(param_1 + 0x6ac) = fVar6;
      FUN_140de1078(param_1,&DAT_14cbdd5c0,0,0);
      puVar4 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      *puVar4 = &PTR_FUN_14b9c6ed8;
      puVar4[1] = DAT_14cbdd5b8;
      lVar5 = 0x14;
      do {
        *(undefined1 *)((longlong)puVar4 + lVar5 + -4) = 0;
        *(undefined8 *)((longlong)puVar4 + lVar5) = 0;
        ((undefined8 *)((longlong)puVar4 + lVar5))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar4 + lVar5 + 0x30) = 0;
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != 0xbc);
      puVar4[3] = (double)*(float *)(param_1 + 0x6ac);
      FUN_14039144e(lVar3,puVar4);
      lVar3 = *(longlong *)(param_1 + 0x288);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xf4) = local_1c;
        puVar2 = *(ushort **)(lVar3 + 0x80);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e91ce4 FUN_148e91ce4 body=92 status=ok
// SIG undefined FUN_148e91ce4(void)

void FUN_148e91ce4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    lVar1 = param_1[0x56];
    *puVar3 = &PTR_FUN_14b9c48a8;
    puVar3[1] = lVar1;
    *(undefined1 *)(puVar3 + 2) = 1;
    FUN_14039144e(lVar2,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148e91d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1);
  return;
}



// FUNCTION 148e91d40 FUN_148e91d40 body=66 status=ok
// SIG undefined FUN_148e91d40(void)

void FUN_148e91d40(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar2 = &PTR_FUN_14b9c6dd8;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 148e91d88 FUN_148e91d88 body=339 status=ok
// SIG undefined FUN_148e91d88(void)

void FUN_148e91d88(longlong param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_140391552();
  if (lVar3 != 0) {
    local_1c = 0x3f800000;
    fVar6 = (float)FUN_148e92036(param_1,*(float *)(param_1 + 0x6a8) + *(float *)(param_1 + 0x340));
    if (1e-08 < ABS(*(float *)(param_1 + 0x6a8) - fVar6)) {
      *(float *)(param_1 + 0x6a8) = fVar6;
      FUN_140de1078(param_1,&DAT_14cbdd5c0,0,0);
      puVar4 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      *puVar4 = &PTR_FUN_14b9c6ed8;
      puVar4[1] = DAT_14cbdd5b0;
      lVar5 = 0x14;
      do {
        *(undefined1 *)((longlong)puVar4 + lVar5 + -4) = 0;
        *(undefined8 *)((longlong)puVar4 + lVar5) = 0;
        ((undefined8 *)((longlong)puVar4 + lVar5))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar4 + lVar5 + 0x30) = 0;
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != 0xbc);
      puVar4[3] = (double)*(float *)(param_1 + 0x6a8);
      FUN_14039144e(lVar3,puVar4);
      lVar3 = *(longlong *)(param_1 + 0x288);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xf0) = local_1c;
        puVar2 = *(ushort **)(lVar3 + 0x80);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e91ee2 FUN_148e91ee2 body=339 status=ok
// SIG undefined FUN_148e91ee2(void)

void FUN_148e91ee2(longlong param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_140391552();
  if (lVar3 != 0) {
    local_1c = 0x3f800000;
    fVar6 = (float)FUN_148e92036(param_1,*(float *)(param_1 + 0x6a8) - *(float *)(param_1 + 0x340));
    if (1e-08 < ABS(*(float *)(param_1 + 0x6a8) - fVar6)) {
      *(float *)(param_1 + 0x6a8) = fVar6;
      FUN_140de1078(param_1,&DAT_14cbdd5d0,0,0);
      puVar4 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      *puVar4 = &PTR_FUN_14b9c6ed8;
      puVar4[1] = DAT_14cbdd5b0;
      lVar5 = 0x14;
      do {
        *(undefined1 *)((longlong)puVar4 + lVar5 + -4) = 0;
        *(undefined8 *)((longlong)puVar4 + lVar5) = 0;
        ((undefined8 *)((longlong)puVar4 + lVar5))[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((longlong)puVar4 + lVar5 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar4 + lVar5 + 0x30) = 0;
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != 0xbc);
      puVar4[3] = (double)*(float *)(param_1 + 0x6a8);
      FUN_14039144e(lVar3,puVar4);
      lVar3 = *(longlong *)(param_1 + 0x288);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xf0) = local_1c;
        puVar2 = *(ushort **)(lVar3 + 0x80);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e92036 FUN_148e92036 body=132 status=ok
// SIG undefined FUN_148e92036(void)

undefined8 FUN_148e92036(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar2 = (float)param_2;
  if (*(float *)(param_1 + 0x33c) <= (float)param_2) {
    fVar2 = *(float *)(param_1 + 0x33c);
  }
  if (fVar2 <= *(float *)(param_1 + 0x338)) {
    fVar2 = *(float *)(param_1 + 0x338);
  }
  fVar4 = fVar2 * 0.25 + 0.0;
  *param_3 = fVar4;
  lVar1 = FUN_1402735c8();
  if (*(float *)(lVar1 + 0xd08) <= fVar4 && fVar4 != *(float *)(lVar1 + 0xd08)) {
    lVar1 = FUN_1402735c8();
    uVar3 = 0;
    fVar2 = *(float *)(lVar1 + 0xd08) * 4.0;
    lVar1 = FUN_1402735c8();
    *param_3 = *(float *)(lVar1 + 0xd08);
  }
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 148e920ba FUN_148e920ba body=132 status=ok
// SIG undefined FUN_148e920ba(void)

undefined8 FUN_148e920ba(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar2 = (float)param_2;
  if (*(float *)(param_1 + 0x33c) <= (float)param_2) {
    fVar2 = *(float *)(param_1 + 0x33c);
  }
  if (fVar2 <= *(float *)(param_1 + 0x520)) {
    fVar2 = *(float *)(param_1 + 0x520);
  }
  fVar4 = fVar2 * 0.25 + 0.0;
  *param_3 = fVar4;
  lVar1 = FUN_1402735c8();
  if (*(float *)(lVar1 + 0xd0c) <= fVar4 && fVar4 != *(float *)(lVar1 + 0xd0c)) {
    lVar1 = FUN_1402735c8();
    uVar3 = 0;
    fVar2 = *(float *)(lVar1 + 0xd0c) * 4.0;
    lVar1 = FUN_1402735c8();
    *param_3 = *(float *)(lVar1 + 0xd0c);
  }
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 148e9213e FUN_148e9213e body=207 status=ok
// SIG undefined FUN_148e9213e(void)

void FUN_148e9213e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146245af8();
  plVar6 = (longlong *)FUN_145ea8bd8(param_1);
  lVar3 = *plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x220));
  *(int *)(lVar3 + 0x218) = *(int *)(lVar3 + 0x218) + 1;
  local_28 = *(longlong **)(param_1 + 0x10);
  if (local_28 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_30 = 0;
  }
  else {
    iVar5 = (int)local_28[1];
    local_30 = 0;
    do {
      if (iVar5 == 0) {
        local_28 = (longlong *)0x0;
        goto LAB_148e921a5;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    local_30 = *(undefined8 *)(param_1 + 8);
  }
LAB_148e921a5:
  FUN_14424371c(lVar3,&local_30);
  plVar6 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x220));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e9220e FUN_148e9220e body=218 status=ok
// SIG undefined FUN_148e9220e(void)

void FUN_148e9220e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)FUN_145ea8bd8();
  plVar6 = (longlong *)*plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 0x44));
  *(int *)(plVar6 + 0x43) = (int)plVar6[0x43] + 1;
  local_30 = *(longlong **)(param_1 + 0x10);
  if (local_30 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    local_38 = 0;
  }
  else {
    iVar5 = (int)local_30[1];
    local_38 = 0;
    do {
      if (iVar5 == 0) {
        local_30 = (longlong *)0x0;
        goto LAB_148e92254;
      }
      LOCK();
      iVar4 = (int)local_30[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(local_30 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    local_38 = *(undefined8 *)(param_1 + 8);
  }
LAB_148e92254:
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_38);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 0x44));
  FUN_145eea794(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e922ea FUN_148e922ea body=66 status=ok
// SIG undefined FUN_148e922ea(void)

void FUN_148e922ea(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_145ea8bd8();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  *(int *)(lVar1 + 0x218) = *(int *)(lVar1 + 0x218) + 1;
  FUN_148e1bef2(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000148e92325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  return;
}



// FUNCTION 148e9232c FUN_148e9232c body=228 status=ok
// SIG undefined FUN_148e9232c(void)

void FUN_148e9232c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_145ea8bd8();
  lVar1 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  *(int *)(lVar1 + 0x218) = *(int *)(lVar1 + 0x218) + 1;
  puVar5 = (undefined8 *)FUN_148e1c85a(lVar1,param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  if ((puVar5 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar5 + 0x62) & 0x10) != 0)) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *puVar5;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar6 = &PTR_FUN_14b9c4a70;
    FUN_1446ddc76(&local_40,"MarkAsSeen",1);
    FUN_14039176c(puVar6,uVar3,local_40,1);
    *puVar6 = &PTR_FUN_14b9c4a70;
    puVar6[7] = uVar2;
    FUN_140391314(param_1,puVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e92412 FUN_148e92412 body=173 status=ok
// SIG undefined FUN_148e92412(void)

void FUN_148e92412(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148e925ce;
      local_30 = 0;
      FUN_148e924c0(param_1,param_2,param_1,&local_38);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_148e92726(param_1,param_2,param_1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e924c0 FUN_148e924c0 body=269 status=ok
// SIG undefined FUN_148e924c0(void)

void FUN_148e924c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442daa88(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cb92b68;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e925ce FUN_148e925ce body=343 status=ok
// SIG undefined FUN_148e925ce(void)

void FUN_148e925ce(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_145ea8bd8();
  lVar1 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar1 + 0x220);
  AcquireSRWLockShared(SRWLock);
  cVar3 = FUN_148e1c84c(lVar1);
  ReleaseSRWLockShared(SRWLock);
  if (cVar3 == '\0') goto LAB_148e92617;
  puVar5 = (undefined8 *)FUN_148e92870(param_1);
  piVar2 = (int *)*puVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(piVar2 + 0x2c));
  piVar2[0x2a] = piVar2[0x2a] + 1;
  if (*piVar2 == 5) {
    iVar7 = 1;
    if (piVar2[1] == 0) goto LAB_148e9266e;
  }
  else {
    iVar7 = piVar2[1] + 1;
LAB_148e9266e:
    *piVar2 = 5;
    piVar2[1] = iVar7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(piVar2 + 0x2c));
  uVar6 = FUN_14001cc68(0x40,0x10);
  FUN_140056680(local_30,L"UI.State.MENU_CHALLENGES");
  FUN_148e928ea(uVar6,*(undefined8 *)(param_1 + 0x30),local_30);
  FUN_140391314(param_1,uVar6);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  uVar6 = FUN_14001cc68(0x48,0x10);
  FUN_140056680(local_30,L"UI.State.MENU_INVENTORY");
  FUN_148e9299e(uVar6,*(undefined8 *)(param_1 + 0x30),local_30,0);
  FUN_140391314(param_1,uVar6);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_148e92617:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e92726 FUN_148e92726 body=329 status=ok
// SIG undefined FUN_148e92726(void)

void FUN_148e92726(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442dab10(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442dab10(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1442dab10(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e92870 FUN_148e92870 body=121 status=ok
// SIG undefined FUN_148e92870(void)

longlong FUN_148e92870(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e928ea FUN_148e928ea body=179 status=ok
// SIG undefined FUN_148e928ea(void)

undefined8 * FUN_148e928ea(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c1410;
  FUN_1446ddc76(&local_38,"RemoveState",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c1410;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_40,iVar1,*param_3,1);
  FUN_1447683ea(param_1 + 7,local_40,1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e9299e FUN_148e9299e body=189 status=ok
// SIG undefined FUN_148e9299e(void)

undefined8 *
FUN_148e9299e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9c13e0;
  FUN_1446ddc76(&local_40,"AddState",1);
  FUN_14039176c(param_1,param_2,local_40,1);
  *param_1 = &PTR_FUN_14b9c13e0;
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_48,iVar1,*param_3,1);
  FUN_1447683ea(param_1 + 7,local_48,1);
  *(undefined1 *)(param_1 + 8) = param_4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e92a6c FUN_148e92a6c body=100 status=ok
// SIG undefined FUN_148e92a6c(void)

undefined8 * FUN_148e92a6c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2f0);
  memset(_Dst,0,0x2f0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9c4c10;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0x400000003f000000;
  return _Dst;
}



// FUNCTION 148e92ad0 FUN_148e92ad0 body=114 status=ok
// SIG undefined FUN_148e92ad0(void)

void FUN_148e92ad0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = FUN_140391a3c(uVar1);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar4 = &PTR_FUN_14b9c6d90;
      *(undefined1 *)(puVar4 + 1) = 1;
      *(undefined8 *)((longlong)puVar4 + 0xc) = DAT_14caa8578;
      FUN_14039144e(lVar3,puVar4);
    }
  }
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148e92b42 FUN_148e92b42 body=409 status=ok
// SIG undefined FUN_148e92b42(void)

void FUN_148e92b42(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar5 = &DAT_14c9a1308;
  }
  else {
    puVar5 = (undefined8 *)FUN_1408db3b0(*(longlong *)(param_1 + 0x160),"gbx_sections");
  }
  plVar6 = (longlong *)FUN_1415a93e0(*puVar5);
  plVar1 = plVar6 + 3;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)plVar6[6] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = (int)plVar6[6];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar6;
  if ((iStack_54 != iVar7) || (uStack_60 != plVar1)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74;
      cVar4 = FUN_144a7c06e(lVar3 + lVar8 * 0x40 + 0x28);
      if (cVar4 != '\0') {
        FUN_1447325ac(lVar3 + lVar8 * 0x40,&local_68,1);
        iVar2 = *(int *)(param_1 + 0x2b8);
        *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
        if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
          FUN_1446f84a2((longlong *)(param_1 + 0x2b0),iVar2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar2 * 8) = local_68;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar6 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e92cdc FUN_148e92cdc body=409 status=ok
// SIG undefined FUN_148e92cdc(void)

void FUN_148e92cdc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar5 = &DAT_14c9a1308;
  }
  else {
    puVar5 = (undefined8 *)FUN_1408db3b0(*(longlong *)(param_1 + 0x160),"sections");
  }
  plVar6 = (longlong *)FUN_1415a93e0(*puVar5);
  plVar1 = plVar6 + 3;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)plVar6[6] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = (int)plVar6[6];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar6;
  if ((iStack_54 != iVar7) || (uStack_60 != plVar1)) {
    do {
      lVar3 = *local_90;
      lVar8 = (longlong)iStack_74;
      cVar4 = FUN_144a7c06e(lVar3 + lVar8 * 0x40 + 0x28);
      if (cVar4 != '\0') {
        FUN_1447325ac(lVar3 + lVar8 * 0x40,&local_68,1);
        iVar2 = *(int *)(param_1 + 0x2c8);
        *(uint *)(param_1 + 0x2c8) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x2cc) < iVar2 + 1U) {
          FUN_1446f84a2((longlong *)(param_1 + 0x2c0),iVar2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar2 * 8) = local_68;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar6 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e92e76 FUN_148e92e76 body=561 status=ok
// SIG undefined FUN_148e92e76(void)

void FUN_148e92e76(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar4 = FUN_1407f4df8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      local_50 = (code *)&LAB_148e931c6;
      local_48 = 0;
      FUN_148e930a8(param_1,param_2,param_1,&local_50);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      FUN_148e931cc(param_1,param_2,param_1,&local_50);
      plVar1 = (longlong *)(param_1 + 0x138);
      local_50 = (code *)&LAB_148e93316;
      local_48 = 0;
      local_58 = &local_50;
      uVar3 = FUN_1442d35de(param_2,&DAT_14cb92c08,2,param_1);
      iVar2 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
        FUN_1447808da(plVar1,iVar2);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar3;
      local_50 = (code *)&LAB_148e93354;
      local_48 = 0;
      local_58 = &local_50;
      uVar3 = FUN_1442d35de(param_2,&DAT_14cb92c08,8,param_1);
      iVar2 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
        FUN_1447808da(plVar1,iVar2);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar3;
      local_50 = (code *)&LAB_148e93354;
      local_48 = 0;
      local_58 = &local_50;
      uVar3 = FUN_1442d35de(param_2,&DAT_14cb92c08,0x10,param_1);
      iVar2 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
        FUN_1447808da(plVar1,iVar2);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar3;
      local_50 = (code *)&LAB_148e93392;
      local_48 = 0;
      local_58 = &local_50;
      uVar3 = FUN_1442d35de(param_2,&DAT_14cb92c10,0x10,param_1);
      iVar2 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
        FUN_1447808da(plVar1,iVar2);
      }
      *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e930a8 FUN_148e930a8 body=284 status=ok
// SIG undefined FUN_148e930a8(void)

void FUN_148e930a8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  local_48 = &local_40;
  uVar3 = FUN_1442d35de(param_2,&DAT_14cb92c00,CONCAT71((int7)((ulonglong)local_48 >> 8),1),param_3)
  ;
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cb92c00;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e931cc FUN_148e931cc body=329 status=ok
// SIG undefined FUN_148e931cc(void)

void FUN_148e931cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442dabb2(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442dabb2(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1442dabb2(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e933e6 FUN_148e933e6 body=200 status=ok
// SIG undefined FUN_148e933e6(void)

void FUN_148e933e6(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c67f0;
  puVar1[2] = FUN_1442d252e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"LoadNextSection",puVar1);
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c67f0;
  puVar1[2] = FUN_148e934ae;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"StartNonGbxCredits",puVar1);
  *(undefined8 *)(param_1 + 0x2e0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9c67f0;
  puVar1[2] = FUN_148e9353e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"CloseCredits",puVar1);
  *(undefined8 *)(param_1 + 0x2e8) = uVar2;
  return;
}



// FUNCTION 148e934ae FUN_148e934ae body=144 status=ok
// SIG undefined FUN_148e934ae(void)

void FUN_148e934ae(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x138) = 0;
    FUN_148c74110(*(undefined8 *)(lVar1 + 0x128),*(undefined4 *)(lVar1 + 0x130));
    *(undefined4 *)(lVar1 + 0x130) = 0;
    if (*(int *)(lVar1 + 0x134) != 0) {
      FUN_148ea0594(lVar1 + 0x128);
    }
    *(undefined4 *)(lVar1 + 0x13c) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined4 *)(lVar1 + 0x144) = 0;
    FUN_1442d252e(param_1);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148e9353e FUN_148e9353e body=50 status=ok
// SIG undefined FUN_148e9353e(void)

void FUN_148e9353e(longlong *param_1)

{
  if (DAT_14c9a16c8 != 0) {
    FUN_14709d45a();
  }
  *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 1;
                    /* WARNING: Could not recover jumptable at 0x000148e93569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1);
  return;
}



// FUNCTION 148e93570 FUN_148e93570 body=107 status=ok
// SIG undefined FUN_148e93570(void)

void FUN_148e93570(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x2e0);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2d8);
  FUN_141346d9a(param_1,&local_20);
  FUN_141346e22(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e935dc FUN_148e935dc body=63 status=ok
// SIG undefined FUN_148e935dc(void)

longlong FUN_148e935dc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14709f52a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_148ea04f1(lVar2);
  return lVar2;
}



// FUNCTION 148e9361c FUN_148e9361c body=304 status=ok
// SIG undefined FUN_148e9361c(void)

void FUN_148e9361c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = *(char *)(param_1 + 0x3d5);
  lVar1 = param_1 + 0x30;
  lVar3 = FUN_14479d2ce(lVar1);
  if (cVar2 == '\x01') {
    cVar2 = FUN_144729dda(lVar3 + 900);
    if (cVar2 != '\0') {
      local_48 = 0;
      uStack_40 = 0;
      lVar3 = FUN_14479d2ce(lVar1);
      uVar4 = FUN_14479d2ce(lVar3 + 900);
      FUN_1405b0040(uVar4,&local_48);
      lVar3 = local_48;
      lVar6 = (longlong)(int)uStack_40;
      if (lVar6 != 0) {
        lVar5 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar3 + lVar5);
          cVar2 = FUN_148e94cd6(lVar1,uVar4);
          if (cVar2 == '\0') {
            FUN_148a008f8(uVar4,1);
          }
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
      }
      *(undefined1 *)(param_1 + 0x3d5) = 0;
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
    }
  }
  else {
    FUN_148a008f8(lVar3,1);
    *(undefined1 *)(param_1 + 0x3d4) = 0;
    FUN_148ec94a8(param_1);
    FUN_143eb4eb0(param_1,param_1 + 0x3e0);
  }
  FUN_140de1078(param_1,&DAT_14cbdd8c8,0,0);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e9374e FUN_148e9374e body=933 status=ok
// SIG undefined FUN_148e9374e(void)

void FUN_148e9374e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  void *_Src;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_148e94a90(&local_78);
    *(undefined2 **)(lVar1 + 0x1e0) = local_78;
    FUN_148ec95d4(param_1,param_2);
    FUN_148ec967a(param_1,lVar1 + 0x1e0);
    iVar7 = *(int *)(lVar1 + 0xe4);
    FUN_145da3f75(*(undefined8 *)(lVar1 + 0xd8),*(undefined4 *)(lVar1 + 0xe0));
    *(undefined4 *)(lVar1 + 0xe0) = 0;
    if ((iVar7 < 0) && (*(int *)(lVar1 + 0xe4) != 0)) {
      FUN_148ea05c4(lVar1 + 0xd8);
    }
    iVar7 = *(int *)(lVar1 + 0xf4);
    FUN_145da3f4a(*(undefined8 *)(lVar1 + 0xe8),*(undefined4 *)(lVar1 + 0xf0));
    *(undefined4 *)(lVar1 + 0xf0) = 0;
    if ((iVar7 < 0) && (*(int *)(lVar1 + 0xf4) != 0)) {
      FUN_148ea05f4(lVar1 + 0xe8);
    }
    FUN_1407b2728(param_1 + 0x2d8,param_2 + 0x20);
    local_60 = 0;
    iVar7 = *(int *)(*(longlong *)(lVar1 + 0xb0) + 0x50);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + 0x48);
    local_58 = iVar7;
    if (iVar7 == 0) {
      local_54 = 0;
    }
    else {
      FUN_145b2a9a0(&local_60,iVar7,0);
      FUN_1414c8b3b(local_60,uVar2,iVar7);
    }
    FUN_1442d712c(param_1,&local_60);
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    FUN_1400b2348(*(longlong *)(lVar1 + 0xb0) + 0x20,&local_78,1);
    puVar10 = local_78;
    iVar7 = (int)uStack_70;
    uVar5 = (int)uStack_70 - 1;
    if ((int)uStack_70 == 0) {
      uVar5 = 0;
    }
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        local_78[uVar8] = (ushort)((ushort)local_78[uVar8] - 0x41 < 0x1a) * 0x20 + local_78[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    uVar6 = uStack_70._4_4_;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    if (*(longlong *)(lVar1 + 0x1e8) == 0) {
      *(undefined2 **)(lVar1 + 0x1e8) = puVar10;
      *(int *)(lVar1 + 0x1f0) = iVar7;
      *(undefined4 *)(lVar1 + 500) = uVar6;
    }
    else {
      FUN_1400020a8();
      *(undefined2 **)(lVar1 + 0x1e8) = puVar10;
      *(int *)(lVar1 + 0x1f0) = iVar7;
      *(undefined4 *)(lVar1 + 500) = uVar6;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar7 = *(int *)(*(undefined8 **)(lVar1 + 0xb0) + 1);
    uVar8 = 0;
    iVar4 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(lVar1 + 200,**(undefined8 **)(lVar1 + 0xb0),iVar4);
    *(undefined4 *)(lVar1 + 0xc0) = 0;
    FUN_1400b22c2(&local_78,"weaponskin");
    puVar10 = local_78;
    if ((int)uStack_70 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    uVar9 = (ulonglong)((int)uStack_70 - 1);
    if ((int)uStack_70 == 0) {
      uVar9 = uVar8;
    }
    uVar6 = FUN_144a49b4a(uVar9,puVar10);
    iVar7 = FUN_1457511aa((longlong *)(param_1 + 0x460),uVar6,&local_78);
    if (iVar7 != -1) {
      uVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x460);
    }
    puVar11 = (undefined8 *)(uVar8 + 0x10);
    if (uVar8 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar11 == (undefined8 *)0x0) {
      FUN_1400b22c2(&local_78,&DAT_149e02088);
    }
    else {
      local_78 = (undefined2 *)0x0;
      uVar5 = *(uint *)(puVar11 + 1);
      _Src = (void *)*puVar11;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        uStack_70 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&local_78,uVar5,0);
        memcpy(local_78,_Src,(longlong)(int)uVar5 * 2);
      }
    }
    iVar7 = (int)uStack_70 + -1;
    if ((int)uStack_70 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(lVar1 + 0x200,local_78,iVar7);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar3 = *(ushort **)(lVar1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e93b2a FUN_148e93b2a body=836 status=ok
// SIG undefined FUN_148e93b2a(void)

void FUN_148e93b2a(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    FUN_1408226d0(&DAT_14cbdd818,&local_38);
    lVar9 = local_38;
    iVar4 = (int)uStack_30;
    uVar7 = (int)uStack_30 - 1;
    if ((int)uStack_30 == 0) {
      uVar7 = 0;
    }
    if (0 < (int)uVar7) {
      uVar8 = 0;
      do {
        uVar1 = *(ushort *)(local_38 + uVar8 * 2);
        *(ushort *)(local_38 + uVar8 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
    local_38 = 0;
    uStack_30 = 0;
    if (*(int *)(lVar5 + 0x1f0) == iVar4) {
      bVar12 = true;
      if (1 < iVar4) {
        lVar10 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x1e8) + lVar10);
          uVar7 = (uint)uVar1;
          uVar2 = *(ushort *)(lVar9 + lVar10);
          uVar11 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e93bf6;
            }
            iVar4 = uVar7 - uVar11;
            goto LAB_148e93e18;
          }
          if (uVar1 == 0) break;
LAB_148e93bf6:
          lVar10 = lVar10 + 2;
        }
        iVar4 = 0;
LAB_148e93e18:
        bVar12 = iVar4 == 0;
      }
    }
    else {
      bVar12 = *(int *)(lVar5 + 0x1f0) + iVar4 == 1;
    }
    if ((lVar9 != 0) && (FUN_1400020a8(), local_38 != 0)) {
      FUN_1400020a8();
    }
    if (!bVar12) {
      FUN_1408226d0(&DAT_14cbdd7d0,&local_38);
      lVar9 = local_38;
      iVar4 = (int)uStack_30;
      uVar7 = (int)uStack_30 - 1;
      if ((int)uStack_30 == 0) {
        uVar7 = 0;
      }
      if (0 < (int)uVar7) {
        uVar8 = 0;
        do {
          uVar1 = *(ushort *)(local_38 + uVar8 * 2);
          *(ushort *)(local_38 + uVar8 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      local_38 = 0;
      uStack_30 = 0;
      if (*(int *)(lVar5 + 0x1f0) == iVar4) {
        bVar12 = true;
        if (1 < iVar4) {
          lVar10 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x1e8) + lVar10);
            uVar7 = (uint)uVar1;
            uVar2 = *(ushort *)(lVar9 + lVar10);
            uVar11 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148e93d0b;
              }
              iVar4 = uVar7 - uVar11;
              goto LAB_148e93e68;
            }
            if (uVar1 == 0) break;
LAB_148e93d0b:
            lVar10 = lVar10 + 2;
          }
          iVar4 = 0;
LAB_148e93e68:
          bVar12 = iVar4 == 0;
        }
      }
      else {
        bVar12 = *(int *)(lVar5 + 0x1f0) + iVar4 == 1;
      }
      if ((lVar9 != 0) && (FUN_1400020a8(), local_38 != 0)) {
        FUN_1400020a8();
      }
      if (!bVar12) {
        FUN_140de1078(param_1,&DAT_14cbdd8b8,0,0);
        if (*(char *)(param_1 + 0x3d4) == '\0') {
          FUN_143eb4db6(param_1,param_1 + 0x3e0,10);
          *(undefined1 *)(param_1 + 0x3d4) = 1;
          FUN_148ec94a8(param_1);
          FUN_148ec9542(param_1);
          uVar6 = FUN_14479d2ce(param_1 + 0x30);
          FUN_148a008f8(uVar6,0);
        }
        else {
          lVar5 = FUN_14479d2ce(param_1 + 0x30);
          cVar3 = FUN_144729dda(lVar5 + 900);
          if (cVar3 != '\0') {
            local_38 = 0;
            uStack_30 = 0;
            lVar5 = FUN_14479d2ce(param_1 + 0x30);
            uVar6 = FUN_14479d2ce(lVar5 + 900);
            FUN_1405b0040(uVar6,&local_38);
            lVar5 = local_38;
            *(undefined1 *)(param_1 + 0x3d5) = 1;
            lVar9 = (longlong)(int)uStack_30;
            if (lVar9 != 0) {
              lVar10 = 0;
              do {
                FUN_148a008f8(*(undefined8 *)(lVar5 + lVar10),0);
                lVar10 = lVar10 + 8;
              } while (lVar9 * 8 != lVar10);
            }
            if (local_38 != 0) {
              FUN_1400020a8(local_38);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148e93e70 FUN_148e93e70 body=170 status=ok
// SIG undefined FUN_148e93e70(void)

void FUN_148e93e70(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x3d4) == '\0') {
    cVar1 = FUN_14021d296(param_1 + 0x170,&DAT_14cbd9498);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_14b9c5018;
      puVar2[4] = *(undefined8 *)(param_1 + 0x170);
      *(undefined1 *)(puVar2 + 5) = 0;
      FUN_140391314(param_1,puVar2);
      puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_14b9c5028;
      FUN_140391314(param_1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148e93f1a FUN_148e93f1a body=931 status=ok
// SIG undefined FUN_148e93f1a(void)

void FUN_148e93f1a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort *puVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(char *)(param_1 + 0x3d4) != '\0') || (lVar3 = *(longlong *)(param_1 + 0x288), lVar3 == 0)
       ) || ((int)param_2 < 0)) || (*(int *)(lVar3 + 0xb8) <= (int)param_2)) goto LAB_148e93f45;
  iVar10 = *(int *)(lVar3 + 0xe4);
  FUN_145da3f75(*(undefined8 *)(lVar3 + 0xd8),*(undefined4 *)(lVar3 + 0xe0));
  *(undefined4 *)(lVar3 + 0xe0) = 0;
  if ((iVar10 < 0) && (*(int *)(lVar3 + 0xe4) != 0)) {
    FUN_148ea05c4(lVar3 + 0xd8);
  }
  iVar10 = *(int *)(lVar3 + 0xf4);
  FUN_145da3f4a(*(undefined8 *)(lVar3 + 0xe8),*(undefined4 *)(lVar3 + 0xf0));
  *(undefined4 *)(lVar3 + 0xf0) = 0;
  if ((iVar10 < 0) && (*(int *)(lVar3 + 0xf4) != 0)) {
    FUN_148ea05f4(lVar3 + 0xe8);
  }
  *(uint *)(lVar3 + 0xc0) = param_2;
  lVar14 = (ulonglong)param_2 * 0xb0;
  local_60 = 0;
  iVar10 = *(int *)(*(longlong *)(lVar3 + 0xb0) + 0x50 + lVar14);
  uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + 0x48 + lVar14);
  local_58 = iVar10;
  if (iVar10 == 0) {
    local_54 = 0;
  }
  else {
    FUN_145b2a9a0(&local_60,iVar10,0);
    FUN_1414c8b3b(local_60,uVar4,iVar10);
  }
  FUN_1442d712c(param_1,&local_60);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  FUN_1400b2348(*(longlong *)(lVar3 + 0xb0) + lVar14 + 0x20,&local_78,1);
  pvVar6 = local_78;
  iVar10 = (int)uStack_70;
  uVar8 = (int)uStack_70 - 1;
  if ((int)uStack_70 == 0) {
    uVar8 = 0;
  }
  if (0 < (int)uVar8) {
    uVar11 = 0;
    do {
      uVar2 = *(ushort *)((longlong)local_78 + uVar11 * 2);
      *(ushort *)((longlong)local_78 + uVar11 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
      uVar11 = uVar11 + 1;
    } while (uVar8 != uVar11);
  }
  uVar9 = uStack_70._4_4_;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (*(longlong *)(lVar3 + 0x1e8) == 0) {
    *(void **)(lVar3 + 0x1e8) = pvVar6;
    *(int *)(lVar3 + 0x1f0) = iVar10;
    *(undefined4 *)(lVar3 + 500) = uVar9;
  }
  else {
    FUN_1400020a8();
    *(void **)(lVar3 + 0x1e8) = pvVar6;
    *(int *)(lVar3 + 0x1f0) = iVar10;
    *(undefined4 *)(lVar3 + 500) = uVar9;
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar10 = *(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + lVar14);
  iVar13 = 0;
  iVar7 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar7 = iVar13;
  }
  FUN_1402980a2(lVar3 + 200,*(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + lVar14),iVar7);
  lVar1 = *(longlong *)(lVar3 + 0xb0) + lVar14;
  *(undefined8 *)(lVar3 + 0x1e0) = *(undefined8 *)(lVar1 + 0x70);
  if (*(int *)(lVar1 + 0xa8) == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = *(undefined2 **)(*(longlong *)(lVar3 + 0xb0) + 0xa0 + lVar14);
    iVar13 = *(int *)(lVar1 + 0xa8) + -1;
  }
  uVar9 = FUN_144a49b4a(iVar13,puVar12);
  iVar10 = FUN_1457511aa((longlong *)(param_1 + 0x460),uVar9,lVar1 + 0xa0);
  if (iVar10 == -1) {
LAB_148e941db:
    FUN_1400b22c2(&local_78,&DAT_149e02088);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x460);
    if ((lVar1 + (longlong)iVar10 * 0x28 + 0x10U & 0xffffffffffffffef) == 0) goto LAB_148e941db;
    lVar1 = lVar1 + (longlong)iVar10 * 0x28;
    local_78 = (void *)0x0;
    uVar8 = *(uint *)(lVar1 + 0x18);
    pvVar6 = *(void **)(lVar1 + 0x10);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
    if ((longlong)(int)uVar8 == 0) {
      uStack_70 = (ulonglong)uVar8;
    }
    else {
      FUN_1446dd670(&local_78,uVar8,0);
      memcpy(local_78,pvVar6,(longlong)(int)uVar8 * 2);
    }
  }
  iVar10 = (int)uStack_70 + -1;
  if ((int)uStack_70 == 0) {
    iVar10 = 0;
  }
  FUN_1402980a2(lVar3 + 0x200,local_78,iVar10);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_148ec967a(param_1,*(longlong *)(lVar3 + 0xb0) + lVar14 + 0x70);
  FUN_140de1078(param_1,&DAT_14cbdd8a8,0,0);
  puVar5 = *(ushort **)(lVar3 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
LAB_148e93f45:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e942be FUN_148e942be body=582 status=ok
// SIG undefined FUN_148e942be(void)

void FUN_148e942be(longlong param_1,char param_2,uint param_3)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  PSRWLOCK SRWLock_00;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((*(char *)(param_1 + 0x3d4) != '\0') ||
       ((((param_2 != '\x04' && (param_2 != '\x01')) || ((int)param_3 < 0)) ||
        ((*(int *)(*(longlong *)(param_1 + 0x288) + 0xe0) <= (int)param_3 ||
         (lVar10 = (ulonglong)param_3 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x288) + 0xd8)
         , lVar10 == 0)))))) || (*(int *)(lVar10 + 0xd0) == 0)) ||
     ((*(int *)(lVar10 + 0xd4) == 0 || (*(int *)(lVar10 + 0xd0) == DAT_14c948000))))
  goto LAB_148e942f0;
  FUN_1448d5e3c(&local_60,param_1 + 0x208);
  lVar4 = *(longlong *)(local_60 + 0x640);
  SRWLock = (PSRWLOCK)(lVar4 + 0x28);
  AcquireSRWLockShared(SRWLock);
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar10 = lVar10 + 0xd0;
  FUN_1448d5e3c(&local_60,param_1 + 0x208);
  lVar5 = *(longlong *)(local_60 + 0x630);
  SRWLock_00 = (PSRWLOCK)(lVar5 + 0x28);
  AcquireSRWLockShared(SRWLock_00);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)local_58 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_1400b2348(lVar10,&local_78,1);
  cVar6 = FUN_140f8baa4(lVar4,&local_78);
  if (cVar6 == '\0') {
    local_98 = 0;
    uStack_90 = 0;
    FUN_1400b2348(lVar10,&local_98,1);
    cVar6 = FUN_140f8baa4(lVar5,&local_98);
    if (cVar6 != '\0') {
      uVar8 = FUN_14001cc68(0x48,0x10);
      local_a8[0] = DAT_14cbdc558;
      puVar9 = local_a8;
      uVar7 = DAT_14cbdc560;
      goto LAB_148e944c1;
    }
  }
  else {
    uVar8 = FUN_14001cc68(0x48,0x10);
    puVar9 = local_88;
    local_88[0] = DAT_14cbdc564;
    uVar7 = DAT_14cbdc56c;
LAB_148e944c1:
    *(undefined4 *)(puVar9 + 1) = uVar7;
    FUN_148e949f4(uVar8,puVar9,lVar10);
    FUN_140391314(param_1,uVar8);
  }
  ReleaseSRWLockShared(SRWLock_00);
  ReleaseSRWLockShared(SRWLock);
LAB_148e942f0:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e94518 FUN_148e94518 body=1243 status=ok
// SIG undefined FUN_148e94518(void)

void FUN_148e94518(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  longlong local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined1 local_170 [8];
  longlong local_168;
  undefined4 local_160;
  longlong local_158 [3];
  ulonglong uStack_140;
  longlong local_138 [5];
  longlong *local_110;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_148e94588;
  uVar7 = FUN_14479d2ce(param_1 + 0x30);
  lVar8 = FUN_1407f492e(uVar7);
  if (lVar8 == 0) goto LAB_148e94588;
  lVar9 = FUN_144a5dd5e();
  if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
       != lVar9 + 0x30)) || (*(longlong *)(lVar8 + 0x398) == 0)) goto LAB_148e94588;
  lVar9 = FUN_144a7b4ca();
  lVar8 = *(longlong *)(lVar8 + 0x398);
  if (((lVar8 == 0) || (lVar9 == 0)) ||
     ((lVar4 = *(longlong *)(lVar8 + 0x10), lVar4 == 0 ||
      ((*(int *)(lVar4 + 0x38) < *(int *)(lVar9 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)))))) goto LAB_148e94588;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[0] = 0;
  local_138[1] = 0;
  FUN_140608954(local_138,&DAT_14cbd9498);
  FUN_140608954(local_138,&DAT_14cbd94a0);
  FUN_140608954(local_138,&DAT_14cbd94a8);
  lVar9 = param_1 + 0x170;
  cVar6 = FUN_1410a8654(lVar9,local_138);
  if (cVar6 == '\0') {
    cVar6 = FUN_14021d296(lVar9);
    if (cVar6 != '\0') {
      plVar1 = local_138 + 4;
      memset(plVar1,0,0xd8);
      local_ac = 0x80;
      local_a8 = 0xffffffff;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0xf;
      local_58 = 1;
      local_54 = 0;
      uStack_4c = 0;
      FUN_148ec95d4(param_1,plVar1);
      FUN_140368b56(plVar1);
      FUN_1448d5e3c(local_138 + 4,param_1 + 0x208);
      lVar8 = *(longlong *)(local_138[4] + 0x4d0);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
      *(int *)(lVar8 + 0x160) = *(int *)(lVar8 + 0x160) + 1;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_110 + 0x10))(local_110);
          }
        }
      }
      FUN_140b96410(lVar8 + 0x80);
      *(undefined4 *)(lVar8 + 0x158) = 0xffffffff;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
    }
  }
  else {
    local_158[2] = 0;
    uStack_140 = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    cVar6 = FUN_14021d296(lVar9,&DAT_14cbd9498);
    if (cVar6 == '\0') {
      cVar6 = FUN_14021d296(lVar9,&DAT_14cbd94a0);
      if (cVar6 != '\0') {
        FUN_141172736(lVar8 + 0xd50,&DAT_14cbcfbe0,local_158 + 2,0);
        local_188 = local_158[2];
        local_180 = (undefined4)uStack_140;
        FUN_1409e3b90(local_138 + 4);
        FUN_1409e3c80(local_138 + 4,local_158,0);
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        pcVar10 = "StandIn.Echo4";
        puVar11 = &local_190;
        goto LAB_148e947c0;
      }
      cVar6 = FUN_14021d296(lVar9,&DAT_14cbd94a8);
      if (cVar6 != '\0') {
        FUN_141172736(lVar8 + 0xd50,&DAT_14cbcfbe8,local_158 + 2,0);
        local_1a0 = local_158[2];
        local_198 = (undefined4)uStack_140;
        FUN_1409e3b90(local_138 + 4);
        FUN_1409e3c80(local_138 + 4,local_158,0);
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        pcVar10 = "StandIn.Vehicle";
        puVar11 = &local_1a8;
        goto LAB_148e947c0;
      }
    }
    else {
      FUN_141172736(lVar8 + 0xd50,&DAT_14cbcfbd8,local_158 + 2,0);
      local_168 = local_158[2];
      local_160 = (undefined4)uStack_140;
      FUN_1409e3b90(local_138 + 4);
      FUN_1409e3c80(local_138 + 4,local_158,0);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      pcVar10 = "StandIn.PlayerCharacter";
      puVar11 = &local_178;
LAB_148e947c0:
      lVar8 = DAT_14caa8580;
      FUN_1446ddc76(puVar11,pcVar10,1);
      FUN_1400702d4(lVar8,local_170,*puVar11,0);
      FUN_148ec917e(param_1,local_170,local_158);
      FUN_141022a1a(local_138 + 4);
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14028f404(local_158[2],uStack_140 & 0xffffffff);
    if (local_158[2] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(lVar3 + 0x170) = 0xffffffff;
  puVar5 = *(ushort **)(lVar3 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  if (local_138[2] != 0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
LAB_148e94588:
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e949f4 FUN_148e949f4 body=155 status=ok
// SIG undefined FUN_148e949f4(void)

undefined8 * FUN_148e949f4(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9c6d80;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_144928d62(param_1 + 4,0,param_2);
  uVar3 = (ulonglong)*(int *)(param_3 + 4);
  lVar1 = param_3 + 8;
  if (1 < (longlong)uVar3) {
    lVar1 = *(longlong *)(param_3 + 0x18);
  }
  if (0 < *(int *)(param_3 + 0x24)) {
    lVar1 = *(longlong *)(param_3 + 0x18);
  }
  if (0 < (longlong)uVar3) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      FUN_144928d62(param_1 + 4,uVar2 & 0xffffffff,lVar1);
      lVar1 = lVar1 + 0xc;
    } while (uVar3 != uVar2);
  }
  return param_1;
}



// FUNCTION 148e94a90 FUN_148e94a90 body=580 status=ok
// SIG undefined FUN_148e94a90(void)

undefined8 FUN_148e94a90(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_50,L"Unknown");
  FUN_140056680(&local_60,L"Unknown");
  lVar8 = *param_2;
  if (lVar8 != 0) {
    lVar4 = FUN_14001d26e(lVar8);
    if (lVar4 != 0) {
      lVar4 = FUN_14001d26e(lVar8);
      puVar6 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(lVar4 + 8);
      }
      local_78 = 0;
      uStack_70 = 0;
      FUN_1400b2348(puVar6,&local_78,1);
      lVar4 = local_78;
      local_48 = (int)uStack_70;
      uVar3 = (int)uStack_70 - 1;
      if ((int)uStack_70 == 0) {
        uVar3 = 0;
      }
      if (0 < (int)uVar3) {
        uVar7 = 0;
        do {
          uVar1 = *(ushort *)(local_78 + uVar7 * 2);
          *(ushort *)(local_78 + uVar7 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar7 = uVar7 + 1;
        } while (uVar3 != uVar7);
      }
      uVar2 = uStack_70._4_4_;
      local_44 = uStack_70._4_4_;
      local_78 = 0;
      uStack_70 = 0;
      bVar9 = local_50 != 0;
      local_50 = lVar4;
      if (bVar9) {
        FUN_1400020a8();
        local_50 = lVar4;
        local_44 = uVar2;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1441822a7(local_80,lVar8,1);
    FUN_1400021e4(local_80,&local_78);
    lVar8 = local_78;
    local_58 = (int)uStack_70;
    uVar3 = (int)uStack_70 - 1;
    if ((int)uStack_70 == 0) {
      uVar3 = 0;
    }
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        uVar1 = *(ushort *)(local_78 + uVar7 * 2);
        *(ushort *)(local_78 + uVar7 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    uVar2 = uStack_70._4_4_;
    local_54 = uStack_70._4_4_;
    local_78 = 0;
    uStack_70 = 0;
    bVar9 = local_60 != 0;
    local_60 = lVar8;
    if (bVar9) {
      FUN_1400020a8();
      local_60 = lVar8;
      local_54 = uVar2;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar5 = FUN_1402735c8();
  FUN_148eea4d8(uVar5,param_1,&local_50,&local_60);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148e94cd6 FUN_148e94cd6 body=118 status=ok
// SIG undefined FUN_148e94cd6(void)

ulonglong FUN_148e94cd6(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e94d4e FUN_148e94d4e body=373 status=ok
// SIG undefined FUN_148e94d4e(void)

void FUN_148e94d4e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_14664eae2(param_1 + 0x30,0);
  if ((cVar2 != '\0') || (*(longlong *)(param_1 + 0x288) == 0)) goto LAB_148e94d79;
  uVar3 = FUN_14479d2ce(param_1 + 0x30);
  lVar4 = FUN_1407f492e(uVar3);
  if (lVar4 == 0) goto LAB_148e94d79;
  lVar5 = FUN_144a5dd5e();
  if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
       != lVar5 + 0x30)) || (*(longlong *)(lVar4 + 0x398) == 0)) goto LAB_148e94d79;
  lVar5 = FUN_144a7b4ca();
  lVar4 = *(longlong *)(lVar4 + 0x398);
  if (((lVar4 == 0) || (lVar5 == 0)) ||
     ((lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0 ||
      ((*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)))))) goto LAB_148e94d79;
  FUN_145a14650(lVar4,local_38);
  lVar5 = param_1 + 0x170;
  cVar2 = FUN_14021d296(lVar5,&DAT_14cbd9498);
  if (cVar2 == '\0') {
    cVar2 = FUN_14021d296(lVar5,&DAT_14cbd94a0);
    if (cVar2 != '\0') {
      puVar6 = &DAT_14cbcfbe0;
      goto LAB_148e94e52;
    }
    cVar2 = FUN_14021d296(lVar5,&DAT_14cbd94a8);
    if (cVar2 != '\0') {
      puVar6 = &DAT_14cbcfbe8;
      goto LAB_148e94e52;
    }
  }
  else {
    puVar6 = &DAT_14cbcfbd8;
LAB_148e94e52:
    FUN_141172736(lVar4 + 0xd50,puVar6,param_1 + 0x2c8,0);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_148e94d79:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e94ec4 FUN_148e94ec4 body=121 status=ok
// SIG undefined FUN_148e94ec4(void)

longlong FUN_148e94ec4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e94f3e FUN_148e94f3e body=519 status=ok
// SIG undefined FUN_148e94f3e(void)

void FUN_148e94f3e(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e82344();
  plVar4 = (longlong *)FUN_148e94ec4(param_1);
  lVar2 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar2 + 0x168);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(lVar2 + 0x18);
  ReleaseSRWLockShared(SRWLock);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  plVar4 = (longlong *)FUN_1408cbae2(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xb0));
  *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + 1;
  FUN_1449a0272(lVar2 + 0x38,&DAT_14cbdce58);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xb0));
  plVar4 = (longlong *)FUN_148e94ec4(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  *(int *)(lVar2 + 0x160) = *(int *)(lVar2 + 0x160) + 1;
  FUN_140b96410(lVar2 + 0x80);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  plVar4 = (longlong *)FUN_148e94ec4(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  *(int *)(lVar2 + 0x160) = *(int *)(lVar2 + 0x160) + 1;
  *(undefined4 *)(lVar2 + 0x158) = 0xffffffff;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  plVar4 = (longlong *)FUN_148e94ec4(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  *(int *)(lVar2 + 0x160) = *(int *)(lVar2 + 0x160) + 1;
  *(undefined1 *)(lVar2 + 0x15c) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x168));
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar5 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(&local_40,"ClearItem",1);
  FUN_14039176c(puVar5,uVar3,local_40,1);
  *puVar5 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar5 + 7) = 0;
  FUN_140391314(param_1,puVar5);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar5 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(&local_40,"ClearItem",1);
  FUN_14039176c(puVar5,uVar3,local_40,1);
  *puVar5 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar5 + 7) = 1;
  FUN_140391314(param_1,puVar5);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e9515c FUN_148e9515c body=142 status=ok
// SIG undefined FUN_148e9515c(void)

void FUN_148e9515c(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1408cbae2();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  *(int *)(lVar1 + 0xa8) = *(int *)(lVar1 + 0xa8) + 1;
  FUN_140bad112(lVar1 + 0x38,&DAT_149dfb77a);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xb0));
  plVar2 = (longlong *)FUN_148e94ec4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x168));
  *(int *)(lVar1 + 0x160) = *(int *)(lVar1 + 0x160) + 1;
  *(undefined1 *)(lVar1 + 0x15c) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x168));
  FUN_148e82806(param_1);
  return;
}



// FUNCTION 148e951ea FUN_148e951ea body=111 status=ok
// SIG undefined FUN_148e951ea(void)

void FUN_148e951ea(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = FUN_1457fc870();
  if (lVar2 == 0) {
LAB_148e9523a:
    FUN_14129c41e(param_1,&DAT_14cbd94b0,1);
    *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) | 0x40;
  }
  else {
    if (*(char *)(lVar2 + 0x1c0) == '\x01') {
      *(undefined1 *)(lVar2 + 0x1c0) = 0;
    }
    else {
      if (*(char *)(lVar2 + 0xc0) != '\x01') goto LAB_148e9523a;
      *(undefined1 *)(lVar2 + 0xc0) = 0;
    }
    puVar1 = *(ushort **)(lVar2 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148e9525a FUN_148e9525a body=198 status=ok
// SIG undefined FUN_148e9525a(void)

void FUN_148e9525a(undefined8 param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)FUN_1457fc8fc();
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_148e861a2(param_1);
    lVar3 = *plVar2;
    SRWLock = (PSRWLOCK)(lVar3 + 0x58);
    AcquireSRWLockShared(SRWLock);
    (**(code **)(*plVar1 + 0xa8))(plVar1,local_40);
    lVar3 = FUN_148e1b2aa(lVar3,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(SRWLock);
    if (((lVar3 != 0) && ((char)plVar1[0x18] != '\0')) && (*(int *)(lVar3 + 0x30) != 0)) {
      FUN_148e84c06(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e95322 FUN_148e95322 body=500 status=ok
// SIG undefined FUN_148e95322(void)

void FUN_148e95322(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [40];
  longlong local_80;
  PSRWLOCK local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1413516b8();
  uVar6 = FUN_145916f56(param_1);
  plVar8 = (longlong *)FUN_148e95518(param_1);
  lVar4 = *plVar8;
  local_78 = (PSRWLOCK)(lVar4 + 0x168);
  AcquireSRWLockShared(local_78);
  if (uVar6 == 0) {
LAB_148e954e4:
    ReleaseSRWLockShared(local_78);
    if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_68 = lVar4 + 0x68;
  uVar12 = 0;
  local_60 = param_1 + 0x310;
LAB_148e95392:
  iVar7 = (int)uVar12;
  if ((*(byte *)(param_1 + 0x8f9) & 1) != 0) {
    iVar7 = *(int *)(param_1 + 0x900) + iVar7;
  }
  if (((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x408))) &&
     (*(int *)(lVar4 + 0x38) != *(int *)(lVar4 + 100))) {
    local_70 = uVar12 * 0x268;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x3f0) + 0x254 + local_70);
    lVar9 = *(longlong *)(lVar4 + 0x70);
    if (*(longlong *)(lVar4 + 0x70) == 0) {
      lVar9 = local_68;
    }
    iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar4 + 0x78) - 1U & uVar2) * 4);
    if (iVar7 != -1) {
      do {
        lVar9 = *(longlong *)(lVar4 + 0x30) + (longlong)iVar7 * 0x20;
        if (*(uint *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar7 * 0x20) == uVar2) {
          if (((lVar9 + 8U & 0xfffffffffffffff7) != 0) &&
             (iVar7 = *(int *)(lVar9 + 0x10), (longlong)iVar7 != 0)) {
            lVar9 = *(longlong *)(lVar9 + 8);
            local_80 = lVar9 + 8;
            lVar11 = 0;
            goto LAB_148e9544d;
          }
          break;
        }
        iVar7 = *(int *)(lVar9 + 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_148e953bd;
  while( true ) {
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    lVar11 = lVar11 + 0x28;
    if ((longlong)iVar7 * 0x28 == lVar11) break;
LAB_148e9544d:
    iVar3 = *(int *)(lVar9 + 4 + lVar11);
    if ((*(int *)(lVar9 + 0x24 + lVar11) < 1) && (iVar3 < 2)) {
      lVar10 = local_80 + lVar11;
    }
    else {
      lVar10 = *(longlong *)(lVar9 + 0x18 + lVar11);
    }
    FUN_1408226d0(lVar10 + (longlong)(iVar3 + -1) * 0xc,local_58,1);
    cVar5 = FUN_144a23846(local_60,local_58);
    if (cVar5 != '\0') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3f0) + 0x9d + local_70);
      *pbVar1 = *pbVar1 | 1;
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      break;
    }
  }
LAB_148e953bd:
  uVar12 = uVar12 + 1;
  if (uVar12 == uVar6) goto LAB_148e954e4;
  goto LAB_148e95392;
}



// FUNCTION 148e95518 FUN_148e95518 body=118 status=ok
// SIG undefined FUN_148e95518(void)

longlong FUN_148e95518(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x70);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e95590 FUN_148e95590 body=78 status=ok
// SIG undefined FUN_148e95590(void)

void FUN_148e95590(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_1459b6156(_Dst);
  *_Dst = &PTR_FUN_14b89fd30;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148e955de FUN_148e955de body=78 status=ok
// SIG undefined FUN_148e955de(void)

void FUN_148e955de(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_1459b6156(_Dst);
  *_Dst = &PTR_FUN_14b89fec0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148e9562c FUN_148e9562c body=183 status=ok
// SIG undefined FUN_148e9562c(void)

longlong * FUN_148e9562c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149f201b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_14b9c3da0;
  puVar1[4] = *param_2;
  puVar1[6] = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  puVar1[10] = param_2[6];
  puVar1[0xb] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  if (puVar1[4] != 0) {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 148e956e4 FUN_148e956e4 body=71 status=ok
// SIG undefined FUN_148e956e4(void)

undefined8 * FUN_148e956e4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b9c3da0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e95740 FUN_148e95740 body=144 status=ok
// SIG undefined FUN_148e95740(void)

void FUN_148e95740(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c3da0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148e957c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148e957d0 FUN_148e957d0 body=144 status=ok
// SIG undefined FUN_148e957d0(void)

void FUN_148e957d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c3da0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148e95855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148e95860 FUN_148e95860 body=171 status=ok
// SIG undefined FUN_148e95860(void)

void FUN_148e95860(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f201b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c3da0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e958fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9590c FUN_148e9590c body=52 status=ok
// SIG undefined FUN_148e9590c(void)

undefined8 FUN_148e9590c(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_2,uVar2);
  return param_2;
}



// FUNCTION 148e95940 FUN_148e95940 body=85 status=ok
// SIG undefined FUN_148e95940(void)

undefined8 FUN_148e95940(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(local_14,uVar2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e95996 FUN_148e95996 body=183 status=ok
// SIG undefined FUN_148e95996(void)

longlong * FUN_148e95996(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149f11c70;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_14b9c3e10;
  puVar1[4] = *param_2;
  puVar1[6] = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  puVar1[10] = param_2[6];
  puVar1[0xb] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  if (puVar1[4] != 0) {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 148e95a4e FUN_148e95a4e body=71 status=ok
// SIG undefined FUN_148e95a4e(void)

undefined8 * FUN_148e95a4e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b9c3e10;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e95aaa FUN_148e95aaa body=144 status=ok
// SIG undefined FUN_148e95aaa(void)

void FUN_148e95aaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f11c70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c3e10;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148e95b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148e95b3a FUN_148e95b3a body=144 status=ok
// SIG undefined FUN_148e95b3a(void)

void FUN_148e95b3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f11c70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c3e10;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148e95bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148e95bca FUN_148e95bca body=171 status=ok
// SIG undefined FUN_148e95bca(void)

void FUN_148e95bca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f11c70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c3e10;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e95c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e95c76 FUN_148e95c76 body=52 status=ok
// SIG undefined FUN_148e95c76(void)

undefined8 FUN_148e95c76(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_2,uVar2);
  return param_2;
}



// FUNCTION 148e95caa FUN_148e95caa body=85 status=ok
// SIG undefined FUN_148e95caa(void)

undefined8 FUN_148e95caa(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(local_28,uVar2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e95d02 FUN_148e95d02 body=38 status=ok
// SIG undefined FUN_148e95d02(void)

undefined8 FUN_148e95d02(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e95d2c FUN_148e95d2c body=38 status=ok
// SIG undefined FUN_148e95d2c(void)

undefined8 FUN_148e95d2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"EquipItem",1);
  return param_2;
}



// FUNCTION 148e95d52 FUN_148e95d52 body=29 status=ok
// SIG undefined FUN_148e95d52(void)

undefined8 FUN_148e95d52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e95d70 FUN_148e95d70 body=282 status=ok
// SIG undefined FUN_148e95d70(void)

void FUN_148e95d70(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442d86ee(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e95e8c FUN_148e95e8c body=244 status=ok
// SIG undefined FUN_148e95e8c(void)

undefined8 *
FUN_148e95e8c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148e95f82(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e95f82 FUN_148e95f82 body=384 status=ok
// SIG undefined FUN_148e95f82(void)

void FUN_148e95f82(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148e96095:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9c40f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e96095;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9c40f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148e96091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e96102 FUN_148e96102 body=64 status=ok
// SIG undefined FUN_148e96102(void)

undefined8 * FUN_148e96102(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c40f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96146 FUN_148e96146 body=81 status=ok
// SIG undefined FUN_148e96146(void)

undefined8 FUN_148e96146(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e9619e FUN_148e9619e body=89 status=ok
// SIG undefined FUN_148e9619e(void)

bool FUN_148e9619e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e961e9;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e961e9:
  return lVar6 == param_2;
}



// FUNCTION 148e96214 FUN_148e96214 body=118 status=ok
// SIG undefined FUN_148e96214(void)

void FUN_148e96214(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c40f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e9628a FUN_148e9628a body=118 status=ok
// SIG undefined FUN_148e9628a(void)

void FUN_148e9628a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c40f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e96300 FUN_148e96300 body=156 status=ok
// SIG undefined FUN_148e96300(void)

void FUN_148e96300(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c40f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e9638c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e9639c FUN_148e9639c body=100 status=ok
// SIG undefined FUN_148e9639c(void)

void FUN_148e9639c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148e963e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e963f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e96400 FUN_148e96400 body=100 status=ok
// SIG undefined FUN_148e96400(void)

ulonglong FUN_148e96400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e96459:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e96459;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e96464 FUN_148e96464 body=382 status=ok
// SIG undefined FUN_148e96464(void)

void FUN_148e96464(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442d8772(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1442d8772(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1442d8772(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e965e4 FUN_148e965e4 body=259 status=ok
// SIG undefined FUN_148e965e4(void)

undefined8 *
FUN_148e965e4(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_148e966e8(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148e966e8 FUN_148e966e8 body=384 status=ok
// SIG undefined FUN_148e966e8(void)

void FUN_148e966e8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148e967fb:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c4160;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148e967fb;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9c4160;
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
                    /* WARNING: Could not recover jumptable at 0x000148e967f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148e96868 FUN_148e96868 body=64 status=ok
// SIG undefined FUN_148e96868(void)

undefined8 * FUN_148e96868(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9c4160;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e968ac FUN_148e968ac body=81 status=ok
// SIG undefined FUN_148e968ac(void)

undefined8 FUN_148e968ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148e96904 FUN_148e96904 body=89 status=ok
// SIG undefined FUN_148e96904(void)

bool FUN_148e96904(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148e9694f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148e9694f:
  return lVar6 == param_2;
}



// FUNCTION 148e9697a FUN_148e9697a body=118 status=ok
// SIG undefined FUN_148e9697a(void)

void FUN_148e9697a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c4160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e969f0 FUN_148e969f0 body=118 status=ok
// SIG undefined FUN_148e969f0(void)

void FUN_148e969f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9c4160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148e96a66 FUN_148e96a66 body=156 status=ok
// SIG undefined FUN_148e96a66(void)

void FUN_148e96a66(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9c4160;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e96af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148e96b02 FUN_148e96b02 body=104 status=ok
// SIG undefined FUN_148e96b02(void)

void FUN_148e96b02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148e96b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148e96b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148e96b6a FUN_148e96b6a body=101 status=ok
// SIG undefined FUN_148e96b6a(void)

ulonglong FUN_148e96b6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148e96bc4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148e96bc4;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148e96bd0 FUN_148e96bd0 body=38 status=ok
// SIG undefined FUN_148e96bd0(void)

undefined8 FUN_148e96bd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Deposit",1);
  return param_2;
}



// FUNCTION 148e96bf6 FUN_148e96bf6 body=29 status=ok
// SIG undefined FUN_148e96bf6(void)

undefined8 FUN_148e96bf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96c14 FUN_148e96c14 body=38 status=ok
// SIG undefined FUN_148e96c14(void)

undefined8 FUN_148e96c14(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"DropItem",1);
  return param_2;
}



// FUNCTION 148e96c3a FUN_148e96c3a body=29 status=ok
// SIG undefined FUN_148e96c3a(void)

undefined8 FUN_148e96c3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96c58 FUN_148e96c58 body=38 status=ok
// SIG undefined FUN_148e96c58(void)

undefined8 FUN_148e96c58(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"InitStandIn",1);
  return param_2;
}



// FUNCTION 148e96c7e FUN_148e96c7e body=29 status=ok
// SIG undefined FUN_148e96c7e(void)

undefined8 FUN_148e96c7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96c9c FUN_148e96c9c body=38 status=ok
// SIG undefined FUN_148e96c9c(void)

undefined8 FUN_148e96c9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UnequipItem",1);
  return param_2;
}



// FUNCTION 148e96cc2 FUN_148e96cc2 body=29 status=ok
// SIG undefined FUN_148e96cc2(void)

undefined8 FUN_148e96cc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96ce0 FUN_148e96ce0 body=136 status=ok
// SIG undefined FUN_148e96ce0(void)

void FUN_148e96ce0(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb90);
  memset(_Dst,0,0xb90);
  FUN_145854e74(_Dst);
  *_Dst = &PTR_FUN_14b895980;
  *(undefined1 *)(_Dst + 0x16a) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb54) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb5c) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb64) = 0;
  *(undefined1 *)((longlong)_Dst + 0xb6c) = 2;
  *(undefined4 *)(_Dst + 0x16e) = 0;
  _Dst[0x16f] = 0;
  _Dst[0x170] = 0;
  *(undefined4 *)(_Dst + 0x171) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148e96d68 FUN_148e96d68 body=38 status=ok
// SIG undefined FUN_148e96d68(void)

undefined8 FUN_148e96d68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Withdraw",1);
  return param_2;
}



// FUNCTION 148e96d8e FUN_148e96d8e body=29 status=ok
// SIG undefined FUN_148e96d8e(void)

undefined8 FUN_148e96d8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96dac FUN_148e96dac body=52 status=ok
// SIG undefined FUN_148e96dac(void)

void FUN_148e96dac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1c8,0x10);
  FUN_148c6c050(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 148e96de0 FUN_148e96de0 body=29 status=ok
// SIG undefined FUN_148e96de0(void)

undefined8 FUN_148e96de0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96dfe FUN_148e96dfe body=38 status=ok
// SIG undefined FUN_148e96dfe(void)

undefined8 FUN_148e96dfe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_RefreshExplore",1);
  return param_2;
}



// FUNCTION 148e96e24 FUN_148e96e24 body=29 status=ok
// SIG undefined FUN_148e96e24(void)

undefined8 FUN_148e96e24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96e42 FUN_148e96e42 body=38 status=ok
// SIG undefined FUN_148e96e42(void)

undefined8 FUN_148e96e42(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_SwitchMaps",1);
  return param_2;
}



// FUNCTION 148e96e68 FUN_148e96e68 body=29 status=ok
// SIG undefined FUN_148e96e68(void)

undefined8 FUN_148e96e68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96e86 FUN_148e96e86 body=38 status=ok
// SIG undefined FUN_148e96e86(void)

undefined8 FUN_148e96e86(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_Center",1);
  return param_2;
}



// FUNCTION 148e96eac FUN_148e96eac body=29 status=ok
// SIG undefined FUN_148e96eac(void)

undefined8 FUN_148e96eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96eca FUN_148e96eca body=38 status=ok
// SIG undefined FUN_148e96eca(void)

undefined8 FUN_148e96eca(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_RemoveMarker",1);
  return param_2;
}



// FUNCTION 148e96ef0 FUN_148e96ef0 body=29 status=ok
// SIG undefined FUN_148e96ef0(void)

undefined8 FUN_148e96ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96f0e FUN_148e96f0e body=38 status=ok
// SIG undefined FUN_148e96f0e(void)

undefined8 FUN_148e96f0e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_SetMarker",1);
  return param_2;
}



// FUNCTION 148e96f34 FUN_148e96f34 body=29 status=ok
// SIG undefined FUN_148e96f34(void)

undefined8 FUN_148e96f34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96f52 FUN_148e96f52 body=38 status=ok
// SIG undefined FUN_148e96f52(void)

undefined8 FUN_148e96f52(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_TraitMission",1);
  return param_2;
}



// FUNCTION 148e96f78 FUN_148e96f78 body=29 status=ok
// SIG undefined FUN_148e96f78(void)

undefined8 FUN_148e96f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96f96 FUN_148e96f96 body=38 status=ok
// SIG undefined FUN_148e96f96(void)

undefined8 FUN_148e96f96(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_FastTravel",1);
  return param_2;
}



// FUNCTION 148e96fbc FUN_148e96fbc body=29 status=ok
// SIG undefined FUN_148e96fbc(void)

undefined8 FUN_148e96fbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e96fda FUN_148e96fda body=38 status=ok
// SIG undefined FUN_148e96fda(void)

undefined8 FUN_148e96fda(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_TrackMission",1);
  return param_2;
}



// FUNCTION 148e97000 FUN_148e97000 body=29 status=ok
// SIG undefined FUN_148e97000(void)

undefined8 FUN_148e97000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e9701e FUN_148e9701e body=38 status=ok
// SIG undefined FUN_148e9701e(void)

undefined8 FUN_148e9701e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_ViewInLog",1);
  return param_2;
}



// FUNCTION 148e97044 FUN_148e97044 body=47 status=ok
// SIG undefined FUN_148e97044(void)

longlong FUN_148e97044(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148e97074 FUN_148e97074 body=38 status=ok
// SIG undefined FUN_148e97074(void)

undefined8 FUN_148e97074(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_SetFilterVisibility",1);
  return param_2;
}


