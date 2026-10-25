// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c8129a FUN_147c8129a body=48 status=ok
// SIG undefined FUN_147c8129a(void)

void FUN_147c8129a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 147c812ca FUN_147c812ca body=273 status=ok
// SIG undefined FUN_147c812ca(void)

ulonglong FUN_147c812ca(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  PSRWLOCK SRWLock;
  ulonglong *puVar8;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0x280);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockShared(SRWLock);
  }
  if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x2e0;
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x2e8);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x2f0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      uVar7 = 0;
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          puVar8 = puVar1 + 1;
          if ((puVar8 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) || (*puVar8 == 0))
          goto LAB_147c81309;
          uVar5 = FUN_144a7b636();
          cVar2 = FUN_144a7ca96(puVar8,uVar5);
          if (cVar2 == '\0') goto LAB_147c81309;
          uVar7 = *puVar8;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
      goto LAB_147c8130b;
    }
  }
LAB_147c81309:
  uVar7 = 0;
LAB_147c8130b:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return uVar7;
}



// FUNCTION 147c813dc FUN_147c813dc body=172 status=ok
// SIG undefined FUN_147c813dc(void)

void FUN_147c813dc(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_3 != (longlong *)0x0) && (lVar3 = param_2[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar4);
      FUN_140759d40(param_1,local_80,uVar2);
      FUN_14075995e(param_1,&local_82,uVar2);
      (**(code **)(*param_3 + 0x80))(param_3,local_80,local_82);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8148a FUN_147c8148a body=146 status=ok
// SIG undefined FUN_147c8148a(void)

undefined8 * FUN_147c8148a(undefined8 *param_1)

{
  FUN_147c8151c();
  *param_1 = &PTR_FUN_14aa2a900;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 147c8151c FUN_147c8151c body=166 status=ok
// SIG undefined FUN_147c8151c(void)

undefined8 * FUN_147c8151c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0x101;
  *param_1 = &PTR_FUN_14aa2a9d0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 147c815c2 FUN_147c815c2 body=38 status=ok
// SIG undefined FUN_147c815c2(void)

undefined8 FUN_147c815c2(undefined8 param_1,int param_2)

{
  FUN_147c81846();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c815e8 FUN_147c815e8 body=64 status=ok
// SIG undefined FUN_147c815e8(void)

void FUN_147c815e8(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 147c81628 FUN_147c81628 body=64 status=ok
// SIG undefined FUN_147c81628(void)

void FUN_147c81628(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 147c81668 FUN_147c81668 body=145 status=ok
// SIG undefined FUN_147c81668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147c81668(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf7c68) {
    FUN_144b3d300(&DAT_14caf7c68);
    if (DAT_14caf7c68 == -1) {
      _DAT_14caf7c58 = 0x800000014aa2aaa0;
      _DAT_14caf7c60 = FUN_145af9a3a("FAsyncPhysicsTickCallback",0x19);
      DAT_14caf7c64 = 0;
      _Init_thread_footer(&DAT_14caf7c68);
    }
  }
  FUN_1446f57c6(&DAT_14caf7c58,param_2);
  return param_2;
}



// FUNCTION 147c81708 FUN_147c81708 body=70 status=ok
// SIG undefined FUN_147c81708(void)

void FUN_147c81708(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 147c8174e FUN_147c8174e body=38 status=ok
// SIG undefined FUN_147c8174e(void)

undefined8 FUN_147c8174e(undefined8 param_1,int param_2)

{
  FUN_147c81774();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c81774 FUN_147c81774 body=157 status=ok
// SIG undefined FUN_147c81774(void)

void FUN_147c81774(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa2a9d0;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_145805506(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) goto LAB_147c817d1;
  while ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    param_1[0xf] = *(undefined8 *)param_1[0xf];
LAB_147c817d1:
    FUN_1400020a8();
  }
  FUN_147c81811(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_147c817fd;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_147c817fd:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 147c81811 FUN_147c81811 body=53 status=ok
// SIG undefined FUN_147c81811(void)

void FUN_147c81811(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 147c81846 FUN_147c81846 body=149 status=ok
// SIG undefined FUN_147c81846(void)

void FUN_147c81846(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa2a900;
  FUN_147c818db(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140d0a7fc(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1403cd038(param_1 + 0x15);
  FUN_147c81774(param_1);
  return;
}



// FUNCTION 147c818db FUN_147c818db body=58 status=ok
// SIG undefined FUN_147c818db(void)

void FUN_147c818db(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147c81916 FUN_147c81916 body=147 status=ok
// SIG undefined FUN_147c81916(void)

undefined8 FUN_147c81916(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = **(longlong **)(param_2 + 8);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar4 = 0;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_14aa2aac0;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_147c819aa(param_1,iVar1);
    }
    *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar4;
    uVar5 = *(undefined8 *)(*param_1 + (longlong)((int)param_1[1] + -1) * 8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  return uVar5;
}



// FUNCTION 147c819aa FUN_147c819aa body=132 status=ok
// SIG undefined FUN_147c819aa(void)

void FUN_147c819aa(longlong param_1,int param_2)

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



// FUNCTION 147c81a30 FUN_147c81a30 body=29 status=ok
// SIG undefined FUN_147c81a30(void)

undefined8 FUN_147c81a30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c81a4d FUN_147c81a4d body=633 status=ok
// SIG undefined FUN_147c81a4d(void)

void FUN_147c81a4d(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar24 = (int)param_2[1];
  if (iVar24 != 0) {
    uVar23 = *(uint *)*param_2;
    uVar22 = 1;
    if (1 < iVar24) {
      lVar26 = 1;
      do {
        uVar4 = *(uint *)(*param_2 + lVar26 * 4);
        if (uVar4 != uVar23) {
          if ((0 < (int)uVar22) && ((int)(uVar23 + 1) < (int)uVar4)) {
            iVar24 = ~uVar23 + uVar4;
            lVar27 = (ulonglong)uVar22 * -0x60;
            lVar25 = (longlong)(int)(uVar23 + 1) * 0x60;
            do {
              lVar5 = *param_1;
              lVar6 = lVar5 + lVar25;
              *(undefined4 *)(lVar27 + lVar6) = *(undefined4 *)(lVar5 + lVar25);
              *(undefined8 *)(lVar27 + 4 + lVar6) = *(undefined8 *)(lVar5 + 4 + lVar25);
              puVar1 = (undefined8 *)(lVar27 + 0x10 + lVar6);
              uVar7 = *puVar1;
              uVar8 = puVar1[1];
              puVar1 = (undefined8 *)(lVar27 + 0x20 + lVar6);
              uVar9 = *puVar1;
              uVar10 = puVar1[1];
              puVar1 = (undefined8 *)(lVar27 + 0x30 + lVar6);
              uVar11 = *puVar1;
              uVar12 = puVar1[1];
              puVar1 = (undefined8 *)(lVar27 + 0x40 + lVar6);
              uVar13 = *puVar1;
              uVar14 = puVar1[1];
              puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar25);
              uVar15 = *puVar1;
              uVar16 = puVar1[1];
              puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar25);
              uVar17 = *puVar1;
              uVar18 = puVar1[1];
              puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar25);
              uVar19 = *puVar1;
              uVar20 = puVar1[1];
              puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar25);
              uVar21 = puVar1[1];
              puVar2 = (undefined8 *)(lVar27 + 0x40 + lVar6);
              *puVar2 = *puVar1;
              puVar2[1] = uVar21;
              puVar1 = (undefined8 *)(lVar27 + 0x30 + lVar6);
              *puVar1 = uVar19;
              puVar1[1] = uVar20;
              puVar1 = (undefined8 *)(lVar27 + 0x20 + lVar6);
              *puVar1 = uVar17;
              puVar1[1] = uVar18;
              puVar1 = (undefined8 *)(lVar27 + 0x10 + lVar6);
              *puVar1 = uVar15;
              puVar1[1] = uVar16;
              local_78._0_4_ = (undefined4)uVar7;
              local_78._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
              uStack_70._0_4_ = (undefined4)uVar8;
              uStack_70._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
              local_68._0_4_ = (undefined4)uVar9;
              local_68._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
              uStack_60._0_4_ = (undefined4)uVar10;
              uStack_60._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
              local_58._0_4_ = (undefined4)uVar11;
              local_58._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
              uStack_50._0_4_ = (undefined4)uVar12;
              uStack_50._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
              local_48._0_4_ = (undefined4)uVar13;
              local_48._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
              uStack_40._0_4_ = (undefined4)uVar14;
              uStack_40._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
              puVar3 = (undefined4 *)(lVar5 + 0x40 + lVar25);
              *puVar3 = (undefined4)local_48;
              puVar3[1] = local_48._4_4_;
              puVar3[2] = (undefined4)uStack_40;
              puVar3[3] = uStack_40._4_4_;
              puVar3 = (undefined4 *)(lVar5 + 0x30 + lVar25);
              *puVar3 = (undefined4)local_58;
              puVar3[1] = local_58._4_4_;
              puVar3[2] = (undefined4)uStack_50;
              puVar3[3] = uStack_50._4_4_;
              puVar3 = (undefined4 *)(lVar5 + 0x20 + lVar25);
              *puVar3 = (undefined4)local_68;
              puVar3[1] = local_68._4_4_;
              puVar3[2] = (undefined4)uStack_60;
              puVar3[3] = uStack_60._4_4_;
              puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar25);
              *puVar3 = (undefined4)local_78;
              puVar3[1] = local_78._4_4_;
              puVar3[2] = (undefined4)uStack_70;
              puVar3[3] = uStack_70._4_4_;
              *(undefined1 *)(lVar27 + 0x50 + lVar6) = *(undefined1 *)(lVar5 + 0x50 + lVar25);
              lVar25 = lVar25 + 0x60;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
            iVar24 = (int)param_2[1];
            local_78 = uVar7;
            uStack_70 = uVar8;
            local_68 = uVar9;
            uStack_60 = uVar10;
            local_58 = uVar11;
            uStack_50 = uVar12;
            local_48 = uVar13;
            uStack_40 = uVar14;
          }
          uVar22 = uVar22 + 1;
          uVar23 = uVar4;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar24);
    }
    if ((0 < (int)uVar22) && ((int)(uVar23 + 1) < (int)param_1[1])) {
      iVar24 = ~uVar23 + (int)param_1[1];
      lVar25 = (ulonglong)uVar22 * -0x60;
      lVar26 = (longlong)(int)(uVar23 + 1) * 0x60;
      do {
        lVar6 = *param_1;
        lVar27 = lVar6 + lVar26;
        *(undefined4 *)(lVar25 + lVar27) = *(undefined4 *)(lVar6 + lVar26);
        *(undefined8 *)(lVar25 + 4 + lVar27) = *(undefined8 *)(lVar6 + 4 + lVar26);
        puVar1 = (undefined8 *)(lVar25 + 0x10 + lVar27);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        puVar1 = (undefined8 *)(lVar25 + 0x20 + lVar27);
        uVar9 = *puVar1;
        uVar10 = puVar1[1];
        puVar1 = (undefined8 *)(lVar25 + 0x30 + lVar27);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        puVar1 = (undefined8 *)(lVar25 + 0x40 + lVar27);
        uVar13 = *puVar1;
        uVar14 = puVar1[1];
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar26);
        uVar15 = *puVar1;
        uVar16 = puVar1[1];
        puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar26);
        uVar17 = *puVar1;
        uVar18 = puVar1[1];
        puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar26);
        uVar19 = *puVar1;
        uVar20 = puVar1[1];
        puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar26);
        uVar21 = puVar1[1];
        puVar2 = (undefined8 *)(lVar25 + 0x40 + lVar27);
        *puVar2 = *puVar1;
        puVar2[1] = uVar21;
        puVar1 = (undefined8 *)(lVar25 + 0x30 + lVar27);
        *puVar1 = uVar19;
        puVar1[1] = uVar20;
        puVar1 = (undefined8 *)(lVar25 + 0x20 + lVar27);
        *puVar1 = uVar17;
        puVar1[1] = uVar18;
        puVar1 = (undefined8 *)(lVar25 + 0x10 + lVar27);
        *puVar1 = uVar15;
        puVar1[1] = uVar16;
        local_78._0_4_ = (undefined4)uVar7;
        local_78._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_70._0_4_ = (undefined4)uVar8;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_68._0_4_ = (undefined4)uVar9;
        local_68._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar10;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_58._0_4_ = (undefined4)uVar11;
        local_58._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar12;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_48._0_4_ = (undefined4)uVar13;
        local_48._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_40._0_4_ = (undefined4)uVar14;
        uStack_40._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
        puVar3 = (undefined4 *)(lVar6 + 0x40 + lVar26);
        *puVar3 = (undefined4)local_48;
        puVar3[1] = local_48._4_4_;
        puVar3[2] = (undefined4)uStack_40;
        puVar3[3] = uStack_40._4_4_;
        puVar3 = (undefined4 *)(lVar6 + 0x30 + lVar26);
        *puVar3 = (undefined4)local_58;
        puVar3[1] = local_58._4_4_;
        puVar3[2] = (undefined4)uStack_50;
        puVar3[3] = uStack_50._4_4_;
        puVar3 = (undefined4 *)(lVar6 + 0x20 + lVar26);
        *puVar3 = (undefined4)local_68;
        puVar3[1] = local_68._4_4_;
        puVar3[2] = (undefined4)uStack_60;
        puVar3[3] = uStack_60._4_4_;
        puVar3 = (undefined4 *)(lVar6 + 0x10 + lVar26);
        *puVar3 = (undefined4)local_78;
        puVar3[1] = local_78._4_4_;
        puVar3[2] = (undefined4)uStack_70;
        puVar3[3] = uStack_70._4_4_;
        *(undefined1 *)(lVar25 + 0x50 + lVar27) = *(undefined1 *)(lVar6 + 0x50 + lVar26);
        lVar26 = lVar26 + 0x60;
        iVar24 = iVar24 + -1;
        local_78 = uVar7;
        uStack_70 = uVar8;
        local_68 = uVar9;
        uStack_60 = uVar10;
        local_58 = uVar11;
        uStack_50 = uVar12;
        local_48 = uVar13;
        uStack_40 = uVar14;
      } while (iVar24 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c81d72 FUN_147c81d72 body=147 status=ok
// SIG undefined FUN_147c81d72(void)

void FUN_147c81d72(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c81e6c FUN_147c81e6c body=96 status=ok
// SIG undefined FUN_147c81e6c(void)

void FUN_147c81e6c(longlong *param_1,int param_2)

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
  FUN_140d0b5ec(param_1,param_2,1);
  return;
}



// FUNCTION 147c81ecc FUN_147c81ecc body=132 status=ok
// SIG undefined FUN_147c81ecc(void)

void FUN_147c81ecc(longlong param_1,int param_2)

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



// FUNCTION 147c81f52 FUN_147c81f52 body=300 status=ok
// SIG undefined FUN_147c81f52(void)

undefined8 * FUN_147c81f52(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x404;
  *param_1 = &PTR_FUN_14aa2aae0;
  param_1[4] = *param_2;
  *param_2 = 0;
  puVar2 = param_3;
  puVar3 = param_1 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x12] = 0x7fefffffffffffff;
  param_1[0x13] = 0x7fefffffffffffff;
  param_1[0x14] = 0x7fefffffffffffff;
  param_1[0x15] = 0xffefffffffffffff;
  param_1[0x16] = 0xffefffffffffffff;
  param_1[0x17] = 0xffefffffffffffff;
  (**(code **)(*(longlong *)param_1[4] + 0x80))((longlong *)param_1[4],local_88);
  FUN_1400c6592(local_88,&local_58,param_3);
  param_1[0x14] = local_48;
  param_1[0x12] = local_58;
  param_1[0x13] = uStack_50;
  *(undefined4 *)(param_1 + 0x15) = local_40;
  *(undefined4 *)((longlong)param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0x16) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_34;
  param_1[0x17] = local_30;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[4] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[4] + 0x19);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c82080 FUN_147c82080 body=38 status=ok
// SIG undefined FUN_147c82080(void)

undefined8 FUN_147c82080(undefined8 param_1,int param_2)

{
  FUN_147c83fc8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c820b2 FUN_147c820b2 body=43 status=ok
// SIG undefined FUN_147c820b2(void)

undefined8 FUN_147c820b2(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  uVar2 = 0;
  if (0.0 < dVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 147c820de FUN_147c820de body=43 status=ok
// SIG undefined FUN_147c820de(void)

undefined8 FUN_147c820de(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  uVar2 = 0;
  if (dVar1 <= 0.0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 147c8211a FUN_147c8211a body=248 status=ok
// SIG undefined FUN_147c8211a(void)

longlong * FUN_147c8211a(longlong param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88 [4];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    puVar5 = local_88;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_68 = *param_3 * local_68;
    dStack_60 = param_3[1] * dStack_60;
    local_58 = param_3[2] * local_58;
    dStack_50 = dStack_50 * 0.0;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_90);
    lVar3 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar3,&local_90,local_88);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_90 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_90 + 0xc) == 0)) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c82214 FUN_147c82214 body=177 status=ok
// SIG undefined FUN_147c82214(void)

longlong * FUN_147c82214(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
    lVar3 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar3,&local_30,param_1 + 0x30);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_30 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_30 + 0xc) == 0)) {
        (**(code **)*local_30)(local_30,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c822c6 FUN_147c822c6 body=248 status=ok
// SIG undefined FUN_147c822c6(void)

longlong * FUN_147c822c6(longlong param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88 [4];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    puVar5 = local_88;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_68 = *param_3 * local_68;
    dStack_60 = param_3[1] * dStack_60;
    local_58 = param_3[2] * local_58;
    dStack_50 = dStack_50 * 0.0;
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_90);
    lVar3 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar3,&local_90,local_88);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_90 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_90 + 0xc) == 0)) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c823c0 FUN_147c823c0 body=673 status=ok
// SIG undefined FUN_147c823c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c823c0(longlong param_1,double *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar9 = *param_2 - *(double *)(param_1 + 0x50);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar3 = param_2[2] - *(double *)(param_1 + 0x60);
  dVar10 = -*(double *)(param_1 + 0x30);
  dVar12 = -*(double *)(param_1 + 0x38);
  dVar7 = *(double *)(param_1 + 0x40) * -1.0;
  dVar8 = *(double *)(param_1 + 0x48) * 1.0;
  dVar5 = dVar9 * dVar7 - dVar10 * dVar3;
  dVar2 = dVar11 * dVar10 - dVar9 * dVar12;
  dVar6 = dVar3 * dVar12 - dVar11 * dVar7;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  dVar2 = dVar2 + dVar2;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar4 = divpd(_DAT_149934d80,auVar1);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar4._0_8_) *
             ((dVar2 * dVar12 - dVar5 * dVar7) + dVar8 * dVar6 + dVar9);
  dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar4._8_8_) *
              (*(double *)(param_1 + 0x30) * dVar2 + dVar7 * dVar6 + dVar8 * dVar5 + dVar11);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
             (dVar8 * dVar2 + dVar3 + (dVar5 * dVar10 - dVar6 * dVar12));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))();
  dVar9 = *(double *)*param_3 * *(double *)(param_1 + 0x70);
  dVar6 = *(double *)(*param_3 + 8) * *(double *)(param_1 + 0x78);
  dVar8 = *(double *)param_3[1] * *(double *)(param_1 + 0x80);
  dVar5 = *(double *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar7 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar10 = dVar6 * dVar5 - dVar9 * dVar3;
  dVar11 = dVar8 * dVar3 - dVar6 * dVar7;
  dVar12 = dVar9 * dVar7 - dVar5 * dVar8;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar6 = (dVar7 * dVar11 - dVar5 * dVar10) + *(double *)(param_1 + 0x48) * dVar12 + dVar6;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = (dVar10 * dVar3 - dVar12 * dVar7) + dVar2 * dVar11 + dVar9;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_3 = auVar1;
  *(double *)param_3[1] = dVar10 * dVar2 + dVar8 + (dVar12 * dVar5 - dVar11 * dVar3);
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c82692 FUN_147c82692 body=109 status=ok
// SIG undefined FUN_147c82692(void)

undefined8 FUN_147c82692(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_1 + 0x20);
  FUN_144b0709c(local_88,param_1 + 0x30);
  (**(code **)(*plVar1 + 0x88))(plVar1,param_2,local_88);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c82700 FUN_147c82700 body=1345 status=ok
// SIG undefined FUN_147c82700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c82700(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5,double *param_6,undefined1 (*param_7) [16],
                  undefined1 (*param_8) [16],undefined8 param_9)

{
  undefined1 auVar1 [16];
  double dVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  double *local_150;
  double *local_148;
  double *local_140;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar13 = *param_2 - *(double *)(param_1 + 0x50);
  dVar8 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar11 = param_2[2] - *(double *)(param_1 + 0x60);
  dVar2 = *(double *)(param_1 + 0x30);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar9 = -dVar2;
  dVar10 = -*(double *)(param_1 + 0x38);
  dVar6 = *(double *)(param_1 + 0x40) * -1.0;
  dVar7 = *(double *)(param_1 + 0x48) * 1.0;
  dVar15 = dVar8 * dVar9 - dVar13 * dVar10;
  dVar16 = dVar11 * dVar10 - dVar8 * dVar6;
  dVar14 = dVar13 * dVar6 - dVar11 * dVar9;
  dVar16 = dVar16 + dVar16;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  auVar12 = divpd(_DAT_149934d80,auVar1);
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar12._0_8_);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar12._8_8_);
  dVar8 = (dVar2 * dVar15 + dVar6 * dVar16 + dVar7 * dVar14 + dVar8) * dVar5;
  local_d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80)));
  local_b8 = (dVar15 * dVar7 + dVar11 + (dVar14 * dVar9 - dVar16 * dVar10)) * local_d8;
  local_c8._8_4_ = SUB84(dVar8,0);
  local_c8._0_8_ = ((dVar15 * dVar10 - dVar14 * dVar6) + dVar7 * dVar16 + dVar13) * dVar4;
  local_c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar8 = *param_3;
  dVar11 = param_3[1];
  dVar13 = dVar11 * dVar9 - dVar10 * dVar8;
  dVar15 = param_3[2] * dVar10 - dVar6 * dVar11;
  dVar14 = dVar8 * dVar6 - dVar9 * param_3[2];
  dVar15 = dVar15 + dVar15;
  dVar14 = dVar14 + dVar14;
  dVar13 = dVar13 + dVar13;
  dVar5 = (dVar2 * dVar13 + dVar6 * dVar15 + dVar7 * dVar14 + dVar11) * dVar5;
  local_d8 = (dVar13 * dVar7 + param_3[2] + (dVar14 * dVar9 - dVar15 * dVar10)) * local_d8;
  local_e8._8_4_ = SUB84(dVar5,0);
  local_e8._0_8_ = ((dVar13 * dVar10 - dVar14 * dVar6) + dVar7 * dVar15 + dVar8) * dVar4;
  local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_138 = param_9;
  local_140 = &local_128;
  local_148 = &local_108;
  local_150 = param_6;
  local_158 = param_5;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  if (cVar3 != '\0') {
    if ((*param_6 != 0.0) || (NAN(*param_6))) {
      local_108 = local_108 * *(double *)(param_1 + 0x70);
      dStack_100 = dStack_100 * *(double *)(param_1 + 0x78);
      local_f8 = local_f8 * *(double *)(param_1 + 0x80);
      dVar11 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x38);
      dVar6 = *(double *)(param_1 + 0x40);
      dVar13 = *(double *)(param_1 + 0x48);
      dVar7 = dStack_100 * dVar11 - local_108 * dVar4;
      dVar9 = local_f8 * dVar4 - dStack_100 * dVar6;
      dVar5 = local_108 * dVar6 - dVar11 * local_f8;
      dVar9 = dVar9 + dVar9;
      dVar5 = dVar5 + dVar5;
      dVar7 = dVar7 + dVar7;
      dVar2 = (dVar6 * dVar9 - dVar11 * dVar7) + *(double *)(param_1 + 0x48) * dVar5 + dStack_100 +
              *(double *)(param_1 + 0x58);
      dVar8 = *(double *)(param_1 + 0x60);
      auVar1._8_4_ = SUB84(dVar2,0);
      auVar1._0_8_ = (dVar7 * dVar4 - dVar5 * dVar6) + dVar13 * dVar9 + local_108 +
                     *(double *)(param_1 + 0x50);
      auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *param_7 = auVar1;
      *(double *)param_7[1] = dVar7 * dVar13 + local_f8 + (dVar5 * dVar11 - dVar9 * dVar4) + dVar8;
      local_128 = local_128 * *(double *)(param_1 + 0x70);
      dStack_120 = dStack_120 * *(double *)(param_1 + 0x78);
      local_118 = local_118 * *(double *)(param_1 + 0x80);
      dVar2 = *(double *)(param_1 + 0x30);
      dVar11 = *(double *)(param_1 + 0x38);
      dVar4 = *(double *)(param_1 + 0x40);
      dVar13 = *(double *)(param_1 + 0x48);
      dVar6 = dStack_120 * dVar2 - local_128 * dVar11;
      dVar7 = local_118 * dVar11 - dStack_120 * dVar4;
      dVar8 = local_128 * dVar4 - dVar2 * local_118;
      dVar7 = dVar7 + dVar7;
      dVar8 = dVar8 + dVar8;
      dVar6 = dVar6 + dVar6;
      dVar5 = (dVar4 * dVar7 - dVar2 * dVar6) + *(double *)(param_1 + 0x48) * dVar8 + dStack_120;
      auVar12._8_4_ = SUB84(dVar5,0);
      auVar12._0_8_ = (dVar6 * dVar11 - dVar8 * dVar4) + dVar13 * dVar7 + local_128;
      auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *param_8 = auVar12;
      *(double *)param_8[1] = dVar6 * dVar13 + local_118 + (dVar8 * dVar2 - dVar7 * dVar11);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c82c42 FUN_147c82c42 body=632 status=ok
// SIG undefined FUN_147c82c42(void)

void FUN_147c82c42(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar7 = *param_2 - *(double *)(param_1 + 0x50);
  dVar8 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar6 = param_2[2] - *(double *)(param_1 + 0x60);
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x40) * -1.0;
  dVar3 = *(double *)(param_1 + 0x48) * 1.0;
  dVar4 = -dVar1;
  dVar5 = -*(double *)(param_1 + 0x38);
  dVar9 = dVar8 * dVar4 - dVar7 * dVar5;
  dVar10 = dVar6 * dVar5 - dVar8 * dVar2;
  dVar11 = dVar7 * dVar2 - dVar6 * dVar4;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  local_88 = dVar9 * dVar3 + dVar6 + (dVar11 * dVar4 - dVar10 * dVar5);
  local_98 = (dVar9 * dVar5 - dVar11 * dVar2) + dVar3 * dVar10 + dVar7;
  dStack_90 = dVar1 * dVar9 + dVar2 * dVar10 + dVar3 * dVar11 + dVar8;
  dVar6 = *param_3;
  dVar7 = param_3[1];
  dVar9 = dVar7 * dVar4 - dVar5 * dVar6;
  dVar8 = param_3[2] * dVar5 - dVar2 * dVar7;
  dVar10 = dVar6 * dVar2 - dVar4 * param_3[2];
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar9 + dVar9;
  local_a8 = dVar9 * dVar3 + param_3[2] + (dVar10 * dVar4 - dVar8 * dVar5);
  dVar1 = dVar1 * dVar9 + dVar2 * dVar8 + dVar3 * dVar10 + dVar7;
  local_b8._8_4_ = SUB84(dVar1,0);
  local_b8._0_8_ = (dVar9 * dVar5 - dVar10 * dVar2) + dVar3 * dVar8 + dVar6;
  local_b8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_c8 = param_5;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa8))();
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c82ebc FUN_147c82ebc body=754 status=ok
// SIG undefined FUN_147c82ebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c82ebc(longlong param_1,double *param_2,longlong *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar3 = *param_2 - *(double *)(param_1 + 0x50);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar9 = param_2[2] - *(double *)(param_1 + 0x60);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar14 = *(double *)(param_1 + 0x40) * -1.0;
  dVar15 = *(double *)(param_1 + 0x48) * 1.0;
  dVar4 = -*(double *)(param_1 + 0x30);
  dVar5 = -*(double *)(param_1 + 0x38);
  dVar16 = dVar3 * dVar14 - dVar4 * dVar9;
  dVar13 = dVar11 * dVar4 - dVar3 * dVar5;
  dVar6 = dVar9 * dVar5 - dVar11 * dVar14;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  auVar10 = divpd(_DAT_149934d80,auVar2);
  local_98 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar10._0_8_) *
             ((dVar13 * dVar5 - dVar16 * dVar14) + dVar15 * dVar6 + dVar3);
  dStack_90 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar10._8_8_) *
              (*(double *)(param_1 + 0x30) * dVar13 + dVar14 * dVar6 + dVar15 * dVar16 + dVar11);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
             (dVar15 * dVar13 + dVar9 + (dVar16 * dVar4 - dVar6 * dVar5));
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb8))();
  if ((iVar7 != -1) && ((longlong)(int)param_3[1] != 0)) {
    pauVar8 = (undefined1 (*) [16])*param_3;
    pauVar1 = (undefined1 (*) [16])((longlong)pauVar8 + (longlong)(int)param_3[1] * 0x18);
    do {
      dVar14 = *(double *)*pauVar8 * *(double *)(param_1 + 0x70);
      dVar11 = *(double *)(*pauVar8 + 8) * *(double *)(param_1 + 0x78);
      dVar9 = *(double *)pauVar8[1] * *(double *)(param_1 + 0x80);
      dVar5 = *(double *)(param_1 + 0x30);
      dVar6 = *(double *)(param_1 + 0x38);
      dVar16 = *(double *)(param_1 + 0x40);
      dVar3 = *(double *)(param_1 + 0x48);
      dVar15 = dVar11 * dVar5 - dVar14 * dVar6;
      dVar12 = dVar9 * dVar6 - dVar11 * dVar16;
      dVar13 = dVar14 * dVar16 - dVar5 * dVar9;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar15 = dVar15 + dVar15;
      dVar4 = (dVar16 * dVar12 - dVar5 * dVar15) + *(double *)(param_1 + 0x48) * dVar13 + dVar11 +
              *(double *)(param_1 + 0x58);
      dVar11 = *(double *)(param_1 + 0x60);
      auVar2._8_4_ = SUB84(dVar4,0);
      auVar2._0_8_ = (dVar15 * dVar6 - dVar13 * dVar16) + dVar3 * dVar12 + dVar14 +
                     *(double *)(param_1 + 0x50);
      auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *pauVar8 = auVar2;
      *(double *)pauVar8[1] = dVar15 * dVar3 + dVar9 + (dVar13 * dVar5 - dVar12 * dVar6) + dVar11;
      pauVar8 = (undefined1 (*) [16])(pauVar8[1] + 8);
    } while (pauVar8 != pauVar1);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c831b0 FUN_147c831b0 body=787 status=ok
// SIG undefined FUN_147c831b0(void)

double * FUN_147c831b0(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                      double *param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  double dVar2;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar2 = *param_3;
  dVar1 = param_3[1];
  dVar3 = *(double *)(param_1 + 0x30);
  dVar6 = -dVar3;
  dVar7 = -*(double *)(param_1 + 0x38);
  dVar4 = *(double *)(param_1 + 0x40) * -1.0;
  dVar5 = *(double *)(param_1 + 0x48) * 1.0;
  dVar8 = dVar1 * dVar6 - dVar2 * dVar7;
  dVar9 = param_3[2] * dVar7 - dVar1 * dVar4;
  dVar10 = dVar2 * dVar4 - param_3[2] * dVar6;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  local_78 = dVar8 * dVar5 + param_3[2] + (dVar10 * dVar6 - dVar9 * dVar7);
  local_88 = (dVar8 * dVar7 - dVar10 * dVar4) + dVar5 * dVar9 + dVar2;
  dStack_80 = dVar3 * dVar8 + dVar4 * dVar9 + dVar5 * dVar10 + dVar1;
  dVar2 = *param_5;
  dVar1 = param_5[1];
  dVar8 = dVar1 * dVar6 - dVar7 * dVar2;
  dVar9 = param_5[2] * dVar7 - dVar4 * dVar1;
  dVar10 = dVar2 * dVar4 - dVar6 * param_5[2];
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  local_98 = dVar8 * dVar5 + param_5[2] + (dVar10 * dVar6 - dVar9 * dVar7);
  local_a8 = (dVar8 * dVar7 - dVar10 * dVar4) + dVar5 * dVar9 + dVar2;
  dStack_a0 = dVar3 * dVar8 + dVar4 * dVar9 + dVar5 * dVar10 + dVar1;
  local_d8 = &local_a8;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xc0))(*(longlong **)(param_1 + 0x20),&local_c8);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = *(double *)(param_1 + 0x40);
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar6 = dStack_c0 * dVar3 - local_c8 * dVar4;
  dVar7 = local_b8 * dVar4 - dStack_c0 * dVar5;
  dVar8 = local_c8 * dVar5 - dVar3 * local_b8;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  *param_2 = (dVar6 * dVar4 - dVar8 * dVar5) + dVar1 * dVar7 + local_c8;
  param_2[1] = (dVar5 * dVar7 - dVar3 * dVar6) + dVar2 * dVar8 + dStack_c0;
  param_2[2] = dVar6 * dVar1 + local_b8 + (dVar8 * dVar3 - dVar7 * dVar4);
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c834c4 FUN_147c834c4 body=479 status=ok
// SIG undefined FUN_147c834c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c834c4(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar2 = *param_2 - *(double *)(param_1 + 0x50);
  dVar3 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar8 = param_2[2] - *(double *)(param_1 + 0x60);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar10 = *(double *)(param_1 + 0x40) * -1.0;
  dVar11 = *(double *)(param_1 + 0x48) * 1.0;
  dVar4 = -*(double *)(param_1 + 0x30);
  dVar5 = -*(double *)(param_1 + 0x38);
  dVar12 = dVar2 * dVar10 - dVar4 * dVar8;
  dVar6 = dVar3 * dVar4 - dVar2 * dVar5;
  dVar7 = dVar8 * dVar5 - dVar3 * dVar10;
  dVar7 = dVar7 + dVar7;
  dVar12 = dVar12 + dVar12;
  dVar6 = dVar6 + dVar6;
  auVar9 = divpd(_DAT_149934d80,auVar1);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar9._0_8_) *
             ((dVar6 * dVar5 - dVar12 * dVar10) + dVar11 * dVar7 + dVar2);
  dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar9._8_8_) *
              (*(double *)(param_1 + 0x30) * dVar6 + dVar10 * dVar7 + dVar11 * dVar12 + dVar3);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
             (dVar11 * dVar6 + dVar8 + (dVar12 * dVar4 - dVar7 * dVar5));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))();
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c836a4 FUN_147c836a4 body=106 status=ok
// SIG undefined FUN_147c836a4(void)

void FUN_147c836a4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1447dc19e(param_1 + 0x30,local_88);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd0))
            (*(longlong **)(param_1 + 0x20),param_2,local_88);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c83710 FUN_147c83710 body=208 status=ok
// SIG undefined FUN_147c83710(void)

void FUN_147c83710(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [12];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14299547a(param_1 + 0x30,local_c8);
  FUN_1400c6592(param_3,local_68,local_c8);
  lVar1 = param_2[1];
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xe0))
            (*(longlong **)(param_1 + 0x20),param_2,local_68);
  if ((int)lVar1 < (int)param_2[1]) {
    lVar4 = (longlong)(int)lVar1 * 0x70;
    FUN_1447dc19e(*param_2 + lVar4 + 0x10,local_c8,param_1 + 0x30);
    puVar2 = local_c8;
    puVar3 = (undefined8 *)(*param_2 + lVar4 + 0x10);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c837e2 FUN_147c837e2 body=165 status=ok
// SIG undefined FUN_147c837e2(void)

void FUN_147c837e2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_20,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_140a2844e(param_2,param_1 + 0x20);
  FUN_1400f4f7e(param_2,param_1 + 0x30);
  FUN_14480c34d(param_2,param_1 + 0x50);
  FUN_14480c34d(param_2,param_1 + 0x70);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN_140d03e72(param_2,param_1 + 0x90);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c83888 FUN_147c83888 body=48 status=ok
// SIG undefined FUN_147c83888(void)

void FUN_147c83888(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_146ce8424(param_1 + 0x30);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x100))();
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 147c838ca FUN_147c838ca body=24 status=ok
// SIG undefined FUN_147c838ca(void)

int FUN_147c838ca(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x118))();
  return iVar1 + 1;
}



// FUNCTION 147c838f0 FUN_147c838f0 body=205 status=ok
// SIG undefined FUN_147c838f0(void)

void FUN_147c838f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  int *param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8 [104];
  undefined1 local_80 [48];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_5 = *param_5 + 1;
  FUN_1449c5bc8(param_2,local_80,param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x20);
  FUN_1447dc19e(param_1 + 0x30,local_e8,param_3);
  local_100 = param_6;
  uStack_f8 = param_7;
  local_108 = param_5;
  (**(code **)(*plVar1 + 0x128))(plVar1,local_80,local_e8,param_4);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c839be FUN_147c839be body=151 status=ok
// SIG undefined FUN_147c839be(void)

void FUN_147c839be(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = *param_4 + 1;
  plVar1 = *(longlong **)(param_1 + 0x20);
  FUN_1447dc19e(param_1 + 0x30,local_a8,param_2);
  local_b8 = param_5;
  uStack_b0 = param_6;
  (**(code **)(*plVar1 + 0x130))(plVar1,local_a8,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c83a56 FUN_147c83a56 body=247 status=ok
// SIG undefined FUN_147c83a56(void)

undefined8
FUN_147c83a56(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,int *param_5,
             undefined8 *param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  int *local_c8;
  undefined8 *local_c0;
  longlong local_b8 [12];
  undefined4 local_54;
  int local_50;
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = *param_4;
  local_c0 = (undefined8 *)local_4c;
  local_4c._0_4_ = 0xffffffff;
  local_c8 = &local_50;
  local_b8[0] = param_1;
  local_54 = param_3;
  cVar2 = (*(code *)*param_6)(param_6[1],local_b8,param_2);
  *param_4 = *param_4 + 1;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x20);
    FUN_1447dc19e(param_1 + 0x30,local_b8,param_2);
    local_c0 = param_6;
    local_c8 = param_5;
    uVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,local_b8,param_3,param_4);
  }
  if ((local_4c._4_8_ ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c83b4e FUN_147c83b4e body=89 status=ok
// SIG undefined FUN_147c83b4e(void)

void FUN_147c83b4e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449c5bc8(param_2,local_48,param_1 + 0x30);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x140))(*(longlong **)(param_1 + 0x20),local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c83ba8 FUN_147c83ba8 body=1055 status=ok
// SIG undefined FUN_147c83ba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147c83ba8(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  undefined1 auVar1 [16];
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
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar5 = *param_3 - *(double *)(param_1 + 0x50);
  dVar14 = param_3[1] - *(double *)(param_1 + 0x58);
  dVar4 = param_3[2] - *(double *)(param_1 + 0x60);
  dVar15 = *(double *)(param_1 + 0x30);
  dVar10 = -dVar15;
  dVar11 = -*(double *)(param_1 + 0x38);
  dVar8 = *(double *)(param_1 + 0x40) * -1.0;
  dVar9 = *(double *)(param_1 + 0x48) * 1.0;
  dVar13 = dVar14 * dVar10 - dVar5 * dVar11;
  dVar6 = dVar4 * dVar11 - dVar14 * dVar8;
  dVar16 = dVar5 * dVar8 - dVar4 * dVar10;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar21 = divpd(_DAT_149934d80,auVar1);
  auVar18 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_1 + 0x80));
  dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar21._0_8_);
  dStack_c0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar21._8_8_);
  local_b8 = (double)(-(ulonglong)
                       (9.99999993922529e-09 < ABS(SUB168(*(undefined1 (*) [16])(param_1 + 0x80),0))
                       ) & auVar18._0_8_);
  dVar17 = *param_4 - *(double *)(param_1 + 0x50);
  dVar19 = param_4[1] - *(double *)(param_1 + 0x58);
  dVar12 = param_4[2] - *(double *)(param_1 + 0x60);
  dVar2 = dVar19 * dVar10 - dVar11 * dVar17;
  dVar3 = dVar12 * dVar11 - dVar8 * dVar19;
  dVar20 = dVar17 * dVar8 - dVar12 * dVar10;
  dVar3 = dVar3 + dVar3;
  dVar20 = dVar20 + dVar20;
  dVar2 = dVar2 + dVar2;
  dVar14 = (dVar15 * dVar13 + dVar8 * dVar6 + dVar9 * dVar16 + dVar14) * dStack_c0;
  local_c8 = ((dVar2 * dVar11 - dVar20 * dVar8) + dVar9 * dVar3 + dVar17) * dVar7;
  dStack_c0 = (dVar15 * dVar2 + dVar8 * dVar3 + dVar9 * dVar20 + dVar19) * dStack_c0;
  local_d8 = (dVar13 * dVar9 + dVar4 + (dVar16 * dVar10 - dVar6 * dVar11)) * local_b8;
  local_b8 = (dVar2 * dVar9 + dVar12 + (dVar20 * dVar10 - dVar3 * dVar11)) * local_b8;
  local_e8._8_4_ = SUB84(dVar14,0);
  local_e8._0_8_ = ((dVar13 * dVar11 - dVar16 * dVar8) + dVar9 * dVar6 + dVar5) * dVar7;
  local_e8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_f8 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar16 = *param_2 * *(double *)(param_1 + 0x70);
    dVar12 = param_2[1] * *(double *)(param_1 + 0x78);
    dVar7 = param_2[2] * *(double *)(param_1 + 0x80);
    dVar5 = *(double *)(param_1 + 0x30);
    dVar13 = *(double *)(param_1 + 0x38);
    dVar6 = *(double *)(param_1 + 0x40);
    dVar3 = *(double *)(param_1 + 0x48);
    dVar2 = *(double *)(param_1 + 0x48);
    dVar14 = dVar12 * dVar5 - dVar16 * dVar13;
    dVar15 = dVar7 * dVar13 - dVar12 * dVar6;
    dVar8 = dVar16 * dVar6 - dVar5 * dVar7;
    dVar15 = dVar15 + dVar15;
    dVar8 = dVar8 + dVar8;
    dVar14 = dVar14 + dVar14;
    dVar4 = *(double *)(param_1 + 0x58);
    dVar20 = *(double *)(param_1 + 0x60);
    *param_2 = (dVar14 * dVar13 - dVar8 * dVar6) + dVar3 * dVar15 + dVar16 +
               *(double *)(param_1 + 0x50);
    param_2[1] = (dVar6 * dVar15 - dVar5 * dVar14) + dVar2 * dVar8 + dVar12 + dVar4;
    param_2[2] = dVar14 * dVar3 + dVar7 + (dVar8 * dVar5 - dVar15 * dVar13) + dVar20;
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c83fc8 FUN_147c83fc8 body=58 status=ok
// SIG undefined FUN_147c83fc8(void)

undefined4 FUN_147c83fc8(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 147c84002 FUN_147c84002 body=307 status=ok
// SIG undefined FUN_147c84002(void)

void FUN_147c84002(longlong *param_1)

{
  if (param_1[0x1ab] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1aa) = 0;
  if (param_1[0x1a9] != 0) {
    FUN_1400020a8();
  }
  FUN_147c84136(param_1 + 0x1a1);
  if (param_1[0x19f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19c] != 0) {
    FUN_1400020a8();
  }
  FUN_146d8d2dc(param_1 + 0x156);
  FUN_1457a7884(param_1 + 0x128);
  FUN_1457a79ee(param_1 + 0xfa);
  FUN_1458475b2(param_1 + 0x17);
  param_1[0x13] = (longlong)&PTR_FUN_14aa2ac30;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14006f3bd(param_1[0xb],(int)param_1[0xc]);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c84136 FUN_147c84136 body=52 status=ok
// SIG undefined FUN_147c84136(void)

void FUN_147c84136(longlong *param_1)

{
  FUN_147c8416a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c8416a FUN_147c8416a body=349 status=ok
// SIG undefined FUN_147c8416a(void)

void FUN_147c8416a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_146e1c578(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c842c8 FUN_147c842c8 body=57 status=ok
// SIG undefined FUN_147c842c8(void)

undefined8 * FUN_147c842c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa2ac30;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c84302 FUN_147c84302 body=67 status=ok
// SIG undefined FUN_147c84302(void)

int * FUN_147c84302(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + 1;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x18) = iVar1 + -1;
    FUN_14479f406(param_1 + 0x10);
  }
  *param_2 = iVar2;
  return param_2;
}



// FUNCTION 147c84346 FUN_147c84346 body=52 status=ok
// SIG undefined FUN_147c84346(void)

void FUN_147c84346(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 147c8437a FUN_147c8437a body=734 status=ok
// SIG undefined FUN_147c8437a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147c8437a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f51ec0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = &PTR_LAB_149f5afb0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &PTR_LAB_149f5aff0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = &PTR_LAB_149f48c00;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = &PTR_LAB_149f51e80;
  param_1[0x13] = &PTR_FUN_14aa2ac30;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar1 = param_1 + 0x17;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_145838300(puVar1,param_1 + 0x13);
  FUN_1457cf06e();
  puVar2 = param_1 + 0x128;
  FUN_1457cf764(puVar2,puVar1,param_1 + 4,param_1 + 7,param_1 + 10,0,DAT_14c761750,
                0x409f400000000000);
  param_1[0x150] = param_1;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x154] = puVar2;
  param_1[0x153] = &PTR_FUN_14aa2ac48;
  param_1[0x155] = param_1 + 0x150;
  puVar3 = param_1 + 0x156;
  FUN_146d8d1ac(puVar3,puVar1,param_1 + 0xd,param_1 + 0x10,param_1 + 0x153);
  param_1[0x1a5] = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  *(undefined4 *)(param_1 + 0x19e) = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd3c) = 0;
  param_1[0x1a9] = 0;
  *(undefined4 *)(param_1 + 0x1aa) = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd84) = 0;
  *(undefined4 *)(param_1 + 0x1b1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8c) = 0x3ff00000;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdb4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1b7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdbc) = 0x3ff00000;
  param_1[0x1b8] = 0x3ff0000000000000;
  param_1[0x1b9] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1c7] = (double)_DAT_14c761738;
  *(undefined4 *)(param_1 + 0x1c8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xe44) = DAT_14c76173c;
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  puVar1 = param_1 + 0xf1;
  FUN_14062dc0c(puVar1,param_1 + 4);
  FUN_14062dc0c(puVar1,param_1 + 7);
  FUN_14062dc0c(puVar1,param_1 + 10);
  FUN_14062dc0c(puVar1,param_1 + 0xd);
  FUN_14062dc0c(puVar1,param_1 + 0x10);
  FUN_146d8d308(puVar3,puVar2,DAT_14c761770);
  FUN_146d8d308(puVar3,param_1 + 0xfa,0);
  return param_1;
}



// FUNCTION 147c84658 FUN_147c84658 body=29 status=ok
// SIG undefined FUN_147c84658(void)

undefined8 FUN_147c84658(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c84676 FUN_147c84676 body=251 status=ok
// SIG undefined FUN_147c84676(void)

void FUN_147c84676(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(*(longlong *)(*param_3 + 0xe0) + (longlong)(int)param_3[1]) == '\x01') {
    if (*(char *)(*(longlong *)(*param_4 + 0xe0) + (longlong)(int)param_4[1]) == '\x01') {
      lVar4 = (longlong)(int)param_3[1] * 0x30 + *(longlong *)(*param_3 + 0x140);
      lVar5 = (longlong)(int)param_4[1] * 0x30 + *(longlong *)(*param_4 + 0x140);
      lVar6 = -3;
      while( true ) {
        dVar2 = *(double *)(lVar4 + 0x18 + lVar6 * 8);
        pdVar1 = (double *)(lVar5 + 0x30 + lVar6 * 8);
        if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
          return;
        }
        dVar2 = *(double *)(lVar5 + 0x18 + lVar6 * 8);
        pdVar1 = (double *)(lVar4 + 0x30 + lVar6 * 8);
        if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) break;
        lVar6 = lVar6 + 1;
        if (lVar6 == 0) {
          uVar3 = param_2[1];
          lVar4 = FUN_144b06e76(uVar3,param_3,param_4,param_5);
          if ((lVar4 == 0) && (lVar4 = FUN_146e18234(uVar3,param_3,param_4,param_2), lVar4 == 0)) {
            return;
          }
          FUN_1447d7148(lVar4,*(undefined8 *)*param_2,param_1,param_2);
          return;
        }
      }
      return;
    }
  }
  return;
}



// FUNCTION 147c84772 FUN_147c84772 body=96 status=ok
// SIG undefined FUN_147c84772(void)

void FUN_147c84772(longlong param_1,int param_2)

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



// FUNCTION 147c847d2 FUN_147c847d2 body=132 status=ok
// SIG undefined FUN_147c847d2(void)

void FUN_147c847d2(longlong param_1,int param_2)

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



// FUNCTION 147c84858 FUN_147c84858 body=201 status=ok
// SIG undefined FUN_147c84858(void)

void FUN_147c84858(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 147c84922 FUN_147c84922 body=201 status=ok
// SIG undefined FUN_147c84922(void)

void FUN_147c84922(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147c849ec FUN_147c849ec body=326 status=ok
// SIG undefined FUN_147c849ec(void)

void FUN_147c849ec(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 147c84b34 FUN_147c84b34 body=319 status=ok
// SIG undefined FUN_147c84b34(void)

void FUN_147c84b34(longlong *param_1)

{
  longlong lVar1;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_146e1c578(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c84c74 FUN_147c84c74 body=188 status=ok
// SIG undefined FUN_147c84c74(void)

longlong FUN_147c84c74(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_147c84d13;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147c84d32(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_147c84d13:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147c84d32 FUN_147c84d32 body=272 status=ok
// SIG undefined FUN_147c84d32(void)

undefined4 * FUN_147c84d32(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147c84e44(param_1,local_48);
  FUN_147c84fea(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_147c84f32(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_147c85210(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c84e44 FUN_147c84e44 body=238 status=ok
// SIG undefined FUN_147c84e44(void)

int * FUN_147c84e44(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 147c84f32 FUN_147c84f32 body=184 status=ok
// SIG undefined FUN_147c84f32(void)

undefined8 FUN_147c84f32(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_146e1c578((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147c85196(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147c84fea FUN_147c84fea body=156 status=ok
// SIG undefined FUN_147c84fea(void)

undefined8 * FUN_147c84fea(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_147c85088(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_146e1c578(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c85088 FUN_147c85088 body=123 status=ok
// SIG undefined FUN_147c85088(void)

undefined8 * FUN_147c85088(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147c85104();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147c85104 FUN_147c85104 body=146 status=ok
// SIG undefined FUN_147c85104(void)

longlong * FUN_147c85104(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147c85196 FUN_147c85196 body=122 status=ok
// SIG undefined FUN_147c85196(void)

void FUN_147c85196(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 147c85210 FUN_147c85210 body=478 status=ok
// SIG undefined FUN_147c85210(void)

void FUN_147c85210(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x60;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x5c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x58 + lVar6) =
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



// FUNCTION 147c853f0 FUN_147c853f0 body=327 status=ok
// SIG undefined FUN_147c853f0(void)

undefined4 * FUN_147c853f0(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_146e1c378(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_146e1c45e(param_1,uVar2,local_40);
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
      FUN_146e1c052(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c85538 FUN_147c85538 body=31 status=ok
// SIG undefined FUN_147c85538(void)

undefined8 FUN_147c85538(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c85572 FUN_147c85572 body=93 status=ok
// SIG undefined FUN_147c85572(void)

void FUN_147c85572(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2ace0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c855d0 FUN_147c855d0 body=93 status=ok
// SIG undefined FUN_147c855d0(void)

void FUN_147c855d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2ace0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c8562e FUN_147c8562e body=126 status=ok
// SIG undefined FUN_147c8562e(void)

void FUN_147c8562e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa2ace0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c8569d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147c856ac FUN_147c856ac body=135 status=ok
// SIG undefined FUN_147c856ac(void)

void FUN_147c856ac(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_38[0] = *param_3;
  local_30 = *(longlong *)(param_3 + 4);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(uVar2,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c85734 FUN_147c85734 body=132 status=ok
// SIG undefined FUN_147c85734(void)

void FUN_147c85734(longlong param_1,int param_2)

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



// FUNCTION 147c857ba FUN_147c857ba body=38 status=ok
// SIG undefined FUN_147c857ba(void)

undefined8 FUN_147c857ba(undefined8 param_1,int param_2)

{
  FUN_1410ea8ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c857e0 FUN_147c857e0 body=31 status=ok
// SIG undefined FUN_147c857e0(void)

undefined8 FUN_147c857e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c85818 FUN_147c85818 body=93 status=ok
// SIG undefined FUN_147c85818(void)

void FUN_147c85818(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2aec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c85876 FUN_147c85876 body=93 status=ok
// SIG undefined FUN_147c85876(void)

void FUN_147c85876(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2aec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c858d4 FUN_147c858d4 body=126 status=ok
// SIG undefined FUN_147c858d4(void)

void FUN_147c858d4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa2aec0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c85943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147c85978 FUN_147c85978 body=93 status=ok
// SIG undefined FUN_147c85978(void)

void FUN_147c85978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2af30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c859d6 FUN_147c859d6 body=126 status=ok
// SIG undefined FUN_147c859d6(void)

void FUN_147c859d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa2af30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c85a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147c85a60 FUN_147c85a60 body=21 status=ok
// SIG undefined FUN_147c85a60(void)

undefined8 FUN_147c85a60(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147c85a76 FUN_147c85a76 body=166 status=ok
// SIG undefined FUN_147c85a76(void)

undefined8 * FUN_147c85a76(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *param_1 = &PTR_FUN_14aa2b090;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 147c85b1c FUN_147c85b1c body=38 status=ok
// SIG undefined FUN_147c85b1c(void)

undefined8 FUN_147c85b1c(undefined8 param_1,int param_2)

{
  FUN_147c85cd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c85b42 FUN_147c85b42 body=64 status=ok
// SIG undefined FUN_147c85b42(void)

void FUN_147c85b42(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 147c85b82 FUN_147c85b82 body=162 status=ok
// SIG undefined FUN_147c85b82(void)

void FUN_147c85b82(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_198 [40];
  undefined1 local_170 [336];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  memset(local_170,0,0x150);
  FUN_1458e258c(local_170);
  memcpy((void *)(param_2 + 0x18),local_170,0x150);
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c85c36 FUN_147c85c36 body=70 status=ok
// SIG undefined FUN_147c85c36(void)

void FUN_147c85c36(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 147c85c7c FUN_147c85c7c body=38 status=ok
// SIG undefined FUN_147c85c7c(void)

undefined8 FUN_147c85c7c(undefined8 param_1,int param_2)

{
  FUN_147c85cd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c85ca2 FUN_147c85ca2 body=53 status=ok
// SIG undefined FUN_147c85ca2(void)

void FUN_147c85ca2(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 147c85cd8 FUN_147c85cd8 body=157 status=ok
// SIG undefined FUN_147c85cd8(void)

void FUN_147c85cd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa2b090;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_145805506(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) goto LAB_147c85d35;
  while ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    param_1[0xf] = *(undefined8 *)param_1[0xf];
LAB_147c85d35:
    FUN_1400020a8();
  }
  FUN_147c85ca2(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_147c85d61;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_147c85d61:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 147c85d76 FUN_147c85d76 body=169 status=ok
// SIG undefined FUN_147c85d76(void)

undefined8 FUN_147c85d76(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *_Dst;
  undefined8 uVar4;
  
  lVar2 = **(longlong **)(param_2 + 8);
  if (lVar2 == 0) {
    _Dst = (undefined8 *)FUN_14001cc68(0x168);
    memset(_Dst,0,0x168);
    *_Dst = &PTR_LAB_14aa2b160;
    FUN_1458e258c(_Dst + 3);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_147c85e20(param_1,iVar1);
    }
    *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
    uVar4 = *(undefined8 *)(*param_1 + (longlong)((int)param_1[1] + -1) * 8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  return uVar4;
}



// FUNCTION 147c85e20 FUN_147c85e20 body=132 status=ok
// SIG undefined FUN_147c85e20(void)

void FUN_147c85e20(longlong param_1,int param_2)

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



// FUNCTION 147c85ea6 FUN_147c85ea6 body=29 status=ok
// SIG undefined FUN_147c85ea6(void)

undefined8 FUN_147c85ea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c85ec4 FUN_147c85ec4 body=338 status=ok
// SIG undefined FUN_147c85ec4(void)

undefined4 * FUN_147c85ec4(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147c86018(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar8 = *(ulonglong *)*param_2;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_147c86126(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14caf7940 - DAT_14caf796c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14caf7980)) {
      uVar5 = DAT_14caf7980 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x14) = uVar5;
      puVar7 = DAT_14caf7978;
      if (DAT_14caf7978 == (undefined *)0x0) {
        puVar7 = &DAT_14caf7970;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14caf7980 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14caf7978;
      if (DAT_14caf7978 == (undefined *)0x0) {
        puVar7 = &DAT_14caf7970;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14caf7980 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14caf7980 = iVar9;
      FUN_147c86236();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c86018 FUN_147c86018 body=270 status=ok
// SIG undefined FUN_147c86018(void)

int * FUN_147c86018(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14caf7968;
  iVar4 = DAT_14caf7940;
  if (DAT_14caf796c == 0) {
    iVar2 = DAT_14caf7940 + 1;
    bVar7 = DAT_14caf7944 == DAT_14caf7940;
    DAT_14caf7940 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14caf7938,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14caf7948,1);
    puVar3 = DAT_14caf7958;
    if (DAT_14caf7958 == (undefined *)0x0) {
      puVar3 = &DAT_14caf7948;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14caf7968;
    DAT_14caf7968 = *(int *)(DAT_14caf7938 + 4 + lVar6 * 0x18);
    DAT_14caf796c = DAT_14caf796c + -1;
    iVar4 = iVar2;
    if (DAT_14caf796c != 0) {
      *(undefined4 *)(DAT_14caf7938 + (longlong)DAT_14caf7968 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14caf7948;
  if (DAT_14caf7958 != (undefined *)0x0) {
    puVar3 = DAT_14caf7958;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14caf7938;
  return param_1;
}



// FUNCTION 147c86126 FUN_147c86126 body=143 status=ok
// SIG undefined FUN_147c86126(void)

undefined8 FUN_147c86126(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14caf7940 - DAT_14caf796c != 1) && (DAT_14caf7940 != DAT_14caf796c)) {
    puVar6 = &DAT_14caf7970;
    if (DAT_14caf7978 != (undefined *)0x0) {
      puVar6 = DAT_14caf7978;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14caf7980 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14caf7938 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_147c861b6(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 147c861b6 FUN_147c861b6 body=128 status=ok
// SIG undefined FUN_147c861b6(void)

void FUN_147c861b6(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caf7938;
  if (DAT_14caf796c != 0) {
    *(int *)(DAT_14caf7938 + (longlong)DAT_14caf7968 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caf796c) {
    iVar4 = DAT_14caf7968;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14caf796c = DAT_14caf796c + 1;
  puVar3 = &DAT_14caf7948;
  if (DAT_14caf7958 != (undefined *)0x0) {
    puVar3 = DAT_14caf7958;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caf7968 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147c86236 FUN_147c86236 body=515 status=ok
// SIG undefined FUN_147c86236(void)

void FUN_147c86236(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf7978 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caf7978,0,0,4);
  }
  uVar7 = DAT_14caf7980;
  uVar2 = local_50;
  if (DAT_14caf7980 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14caf7970,0,DAT_14caf7980,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14caf7978;
        if (DAT_14caf7978 == (undefined *)0x0) {
          puVar5 = &DAT_14caf7970;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14caf7980 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14caf7948;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14caf7960 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14caf7938;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14caf7980 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14caf7978;
        if (DAT_14caf7978 == (undefined *)0x0) {
          puVar5 = &DAT_14caf7970;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14caf7980 - 1U & uVar9) * 4);
        puVar5 = DAT_14caf7978;
        if (DAT_14caf7978 == (undefined *)0x0) {
          puVar5 = &DAT_14caf7970;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14caf7980 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c8643a FUN_147c8643a body=233 status=ok
// SIG undefined FUN_147c8643a(void)

void FUN_147c8643a(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  
  if (DAT_14caf7940 != DAT_14caf796c) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar6 = &DAT_14caf7970;
    if (DAT_14caf7978 != (undefined *)0x0) {
      puVar6 = DAT_14caf7978;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14caf7980 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14caf7938 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14caf7938 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14caf7970;
        if (DAT_14caf7978 != (undefined *)0x0) {
          puVar6 = DAT_14caf7978;
        }
        lVar1 = DAT_14caf7938 + (longlong)iVar2 * 0x18;
        lVar7 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar7 * 4);
        if (iVar5 == iVar2) {
          puVar4 = (undefined4 *)(puVar6 + lVar7 * 4);
        }
        else {
          do {
            lVar7 = (longlong)iVar5;
            iVar5 = *(int *)(DAT_14caf7938 + 0x10 + lVar7 * 0x18);
          } while (iVar5 != iVar2);
          puVar4 = (undefined4 *)(DAT_14caf7938 + lVar7 * 0x18 + 0x10);
        }
        *puVar4 = *(undefined4 *)(lVar1 + 0x10);
        FUN_147c861b6();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c86524 FUN_147c86524 body=96 status=ok
// SIG undefined FUN_147c86524(void)

void FUN_147c86524(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 147c86584 FUN_147c86584 body=29 status=ok
// SIG undefined FUN_147c86584(void)

undefined8 FUN_147c86584(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c865bc FUN_147c865bc body=29 status=ok
// SIG undefined FUN_147c865bc(void)

bool FUN_147c865bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147c865da FUN_147c865da body=26 status=ok
// SIG undefined FUN_147c865da(void)

bool FUN_147c865da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147c865f4 FUN_147c865f4 body=24 status=ok
// SIG undefined FUN_147c865f4(void)

bool FUN_147c865f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147c8660c FUN_147c8660c body=101 status=ok
// SIG undefined FUN_147c8660c(void)

void FUN_147c8660c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2b210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147c86672 FUN_147c86672 body=101 status=ok
// SIG undefined FUN_147c86672(void)

void FUN_147c86672(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2b210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147c866d8 FUN_147c866d8 body=134 status=ok
// SIG undefined FUN_147c866d8(void)

void FUN_147c866d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa2b210;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c8674f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147c8675e FUN_147c8675e body=39 status=ok
// SIG undefined FUN_147c8675e(void)

void FUN_147c8675e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147c86781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147c86786 FUN_147c86786 body=134 status=ok
// SIG undefined FUN_147c86786(void)

bool FUN_147c86786(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8680e FUN_147c8680e body=48 status=ok
// SIG undefined FUN_147c8680e(void)

void FUN_147c8680e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x24,4);
  }
  return;
}



// FUNCTION 147c8683e FUN_147c8683e body=147 status=ok
// SIG undefined FUN_147c8683e(void)

void FUN_147c8683e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c868d2 FUN_147c868d2 body=132 status=ok
// SIG undefined FUN_147c868d2(void)

void FUN_147c868d2(longlong param_1,int param_2)

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



// FUNCTION 147c86958 FUN_147c86958 body=48 status=ok
// SIG undefined FUN_147c86958(void)

void FUN_147c86958(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147c86988 FUN_147c86988 body=96 status=ok
// SIG undefined FUN_147c86988(void)

void FUN_147c86988(longlong param_1,int param_2)

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



// FUNCTION 147c869e8 FUN_147c869e8 body=114 status=ok
// SIG undefined FUN_147c869e8(void)

void FUN_147c869e8(longlong *param_1,int param_2)

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



// FUNCTION 147c86a5a FUN_147c86a5a body=311 status=ok
// SIG undefined FUN_147c86a5a(void)

undefined4 *
FUN_147c86a5a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140405df8(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar4 = FUN_147c86b92(param_1,uVar9,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_48 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1404060c4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c86b92 FUN_147c86b92 body=156 status=ok
// SIG undefined FUN_147c86b92(void)

void FUN_147c86b92(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

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
          FUN_147c869e8(param_1,*param_4);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_147c86c04;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_147c86c04:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 147c86c2e FUN_147c86c2e body=48 status=ok
// SIG undefined FUN_147c86c2e(void)

void FUN_147c86c2e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c86c5e FUN_147c86c5e body=48 status=ok
// SIG undefined FUN_147c86c5e(void)

void FUN_147c86c5e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c86c8e FUN_147c86c8e body=48 status=ok
// SIG undefined FUN_147c86c8e(void)

void FUN_147c86c8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c86cce FUN_147c86cce body=223 status=ok
// SIG undefined FUN_147c86cce(void)

void FUN_147c86cce(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b2056();
  FUN_144842a8a(param_1,local_20);
  if ((local_20[0] < 0xf6) && (lVar1 = *(longlong *)(param_1 + 0x390), lVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x398);
    if (DAT_14c950c29 == 1) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(param_1 + 0x398);
      }
    }
    bVar2 = DAT_14c950c29;
    *(longlong *)(lVar1 + 0x2a8) = lVar3;
    lVar1 = *(longlong *)(param_1 + 0x390);
    lVar3 = *(longlong *)(param_1 + 0x3a0);
    if ((bVar2 & 1) != 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(param_1 + 0x3a0);
      }
    }
    *(longlong *)(lVar1 + 0x2b8) = lVar3;
    *(byte *)(*(longlong *)(param_1 + 0x390) + 0x498) =
         *(byte *)(*(longlong *)(param_1 + 0x390) + 0x498) & 0xfe | *(byte *)(param_1 + 0x3a8) & 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c86dca FUN_147c86dca body=546 status=ok
// SIG undefined FUN_147c86dca(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147c86dca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [4];
  
  local_50[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[2] = 0;
  puVar4 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50 + 2);
  }
  plVar2 = local_50 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_50[1] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50 + 1);
  }
  plVar3 = local_50 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_50[0] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  plVar5 = local_50;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_58 = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147c89676(param_1,0);
  *plVar2 = lVar1;
  *plVar3 = *(longlong *)(param_1 + 0x350);
  lVar1 = FUN_147c89676(param_1,1);
  *plVar5 = lVar1;
  *puVar4 = *(undefined8 *)(param_1 + 0x358);
  if ((DAT_14c950c29 == 1) && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_50[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c86fee FUN_147c86fee body=108 status=ok
// SIG undefined FUN_147c86fee(void)

void FUN_147c86fee(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  FUN_14485c47a(&local_20,param_1);
  *param_3 = local_20;
  *(undefined4 *)(param_3 + 1) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8705c FUN_147c8705c body=271 status=ok
// SIG undefined FUN_147c8705c(void)

void FUN_147c8705c(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54136(param_1 + 0x300,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8716c FUN_147c8716c body=54 status=ok
// SIG undefined FUN_147c8716c(void)

void FUN_147c8716c(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = (float)FUN_147c54708(param_1 + 0x300);
  *param_3 = fVar1 * 57.295776;
  return;
}



// FUNCTION 147c871a2 FUN_147c871a2 body=54 status=ok
// SIG undefined FUN_147c871a2(void)

void FUN_147c871a2(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = (float)FUN_147c54712(param_1 + 0x300);
  *param_3 = fVar1 * 57.295776;
  return;
}



// FUNCTION 147c871d8 FUN_147c871d8 body=54 status=ok
// SIG undefined FUN_147c871d8(void)

void FUN_147c871d8(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = (float)FUN_147c5471c(param_1 + 0x300);
  *param_3 = fVar1 * 57.295776;
  return;
}



// FUNCTION 147c87212 FUN_147c87212 body=44 status=ok
// SIG undefined FUN_147c87212(void)

void FUN_147c87212(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147c5416a(param_1 + 0x300);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c87266 FUN_147c87266 body=283 status=ok
// SIG undefined FUN_147c87266(void)

void FUN_147c87266(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) & 0xdf | (iVar1 != 0) << 5;
  *(undefined4 *)(param_1 + 0x434) = local_28;
  FUN_147c5388e(param_1 + 0x300);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87386 FUN_147c87386 body=165 status=ok
// SIG undefined FUN_147c87386(void)

void FUN_147c87386(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54882(param_1 + 0x300,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8742c FUN_147c8742c body=159 status=ok
// SIG undefined FUN_147c8742c(void)

void FUN_147c8742c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54450(param_1 + 0x300,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c874cc FUN_147c874cc body=336 status=ok
// SIG undefined FUN_147c874cc(void)

void FUN_147c874cc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c547e6(param_1 + 0x300,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87628 FUN_147c87628 body=261 status=ok
// SIG undefined FUN_147c87628(void)

void FUN_147c87628(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54290(param_1 + 0x300,local_28 != 0,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8772e FUN_147c8772e body=183 status=ok
// SIG undefined FUN_147c8772e(void)

void FUN_147c8772e(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a7484c(puVar1,local_38);
  FUN_147c54644(param_1 + 0x300,local_38);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c877ea FUN_147c877ea body=283 status=ok
// SIG undefined FUN_147c877ea(void)

void FUN_147c877ea(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) & 0xbf | (iVar1 != 0) << 6;
  *(undefined4 *)(param_1 + 0x438) = local_28;
  FUN_147c538e2(param_1 + 0x300);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87906 FUN_147c87906 body=259 status=ok
// SIG undefined FUN_147c87906(void)

void FUN_147c87906(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x478) = local_19;
  *(undefined4 *)(param_1 + 0x470) = local_20;
  FUN_147c5383a(param_1 + 0x300);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87a0a FUN_147c87a0a body=259 status=ok
// SIG undefined FUN_147c87a0a(void)

void FUN_147c87a0a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x479) = local_19;
  *(undefined4 *)(param_1 + 0x474) = local_20;
  FUN_147c5383a(param_1 + 0x300);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87b0e FUN_147c87b0e body=259 status=ok
// SIG undefined FUN_147c87b0e(void)

void FUN_147c87b0e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x494) = local_19;
  *(undefined4 *)(param_1 + 0x490) = local_20;
  FUN_147c5383a(param_1 + 0x300);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87c1c FUN_147c87c1c body=261 status=ok
// SIG undefined FUN_147c87c1c(void)

void FUN_147c87c1c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5436c(param_1 + 0x300,local_28 != 0,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87d26 FUN_147c87d26 body=165 status=ok
// SIG undefined FUN_147c87d26(void)

void FUN_147c87d26(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c543ea(param_1 + 0x300,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87dd6 FUN_147c87dd6 body=261 status=ok
// SIG undefined FUN_147c87dd6(void)

void FUN_147c87dd6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5436c(param_1 + 0x300,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87edc FUN_147c87edc body=167 status=ok
// SIG undefined FUN_147c87edc(void)

void FUN_147c87edc(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54726(param_1 + 0x300,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c87f84 FUN_147c87f84 body=389 status=ok
// SIG undefined FUN_147c87f84(void)

void FUN_147c87f84(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  FUN_147c8810a(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8810a FUN_147c8810a body=113 status=ok
// SIG undefined FUN_147c8810a(void)

void FUN_147c8810a(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x18);
    FUN_14485c47a(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x350) = param_3;
  }
  if (param_4 != 0) {
    *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_4 + 0x18);
    FUN_14485c47a(param_1 + 0x2d0,param_4);
    *(undefined8 *)(param_1 + 0x358) = param_5;
  }
  FUN_147c89a7a(param_1);
  return;
}



// FUNCTION 147c8817c FUN_147c8817c body=332 status=ok
// SIG undefined FUN_147c8817c(void)

void FUN_147c8817c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c53d52(param_1 + 0x300,local_19,puVar1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c882ca FUN_147c882ca body=350 status=ok
// SIG undefined FUN_147c882ca(void)

void FUN_147c882ca(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  undefined1 local_48 [31];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5405e(param_1 + 0x300,local_29,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8842a FUN_147c8842a body=253 status=ok
// SIG undefined FUN_147c8842a(void)

void FUN_147c8842a(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [31];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c53fde(param_1 + 0x300,local_19,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88528 FUN_147c88528 body=171 status=ok
// SIG undefined FUN_147c88528(void)

void FUN_147c88528(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x43c) = local_1c;
  FUN_147c53936(param_1 + 0x300);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c885d8 FUN_147c885d8 body=165 status=ok
// SIG undefined FUN_147c885d8(void)

void FUN_147c885d8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c53998(param_1 + 0x300,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88682 FUN_147c88682 body=283 status=ok
// SIG undefined FUN_147c88682(void)

void FUN_147c88682(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) & 0x7f | (iVar1 != 0) << 7;
  *(undefined4 *)(param_1 + 0x42c) = local_28;
  FUN_147c5388e(param_1 + 0x300);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c887a2 FUN_147c887a2 body=165 status=ok
// SIG undefined FUN_147c887a2(void)

void FUN_147c887a2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c545ea(param_1 + 0x300,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88848 FUN_147c88848 body=336 status=ok
// SIG undefined FUN_147c88848(void)

void FUN_147c88848(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5454e(param_1 + 0x300,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8899e FUN_147c8899e body=368 status=ok
// SIG undefined FUN_147c8899e(void)

void FUN_147c8899e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x499) = *(byte *)(param_1 + 0x499) & 0xfe | iVar1 != 0;
  *(undefined4 *)(param_1 + 0x430) = local_28;
  *(undefined1 *)(param_1 + 0x570) = local_29;
  FUN_147c538e2(param_1 + 0x300);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88b20 FUN_147c88b20 body=350 status=ok
// SIG undefined FUN_147c88b20(void)

void FUN_147c88b20(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54174(param_1 + 0x300,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88c80 FUN_147c88c80 body=167 status=ok
// SIG undefined FUN_147c88c80(void)

void FUN_147c88c80(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c544aa(param_1 + 0x300,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88d38 FUN_147c88d38 body=350 status=ok
// SIG undefined FUN_147c88d38(void)

void FUN_147c88d38(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c541fe(param_1 + 0x300,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88e98 FUN_147c88e98 body=167 status=ok
// SIG undefined FUN_147c88e98(void)

void FUN_147c88e98(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c544fc(param_1 + 0x300,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c88f40 FUN_147c88f40 body=259 status=ok
// SIG undefined FUN_147c88f40(void)

void FUN_147c88f40(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x458) = local_19;
  *(undefined4 *)(param_1 + 0x454) = local_20;
  FUN_147c537e6(param_1 + 0x300);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c89044 FUN_147c89044 body=259 status=ok
// SIG undefined FUN_147c89044(void)

void FUN_147c89044(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x459) = local_19;
  *(undefined4 *)(param_1 + 0x454) = local_20;
  FUN_147c537e6(param_1 + 0x300);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c89148 FUN_147c89148 body=259 status=ok
// SIG undefined FUN_147c89148(void)

void FUN_147c89148(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x45a) = local_19;
  *(undefined4 *)(param_1 + 0x454) = local_20;
  FUN_147c537e6(param_1 + 0x300);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c89250 FUN_147c89250 body=165 status=ok
// SIG undefined FUN_147c89250(void)

void FUN_147c89250(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54308(param_1 + 0x300,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c89300 FUN_147c89300 body=261 status=ok
// SIG undefined FUN_147c89300(void)

void FUN_147c89300(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54290(param_1 + 0x300,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8940a FUN_147c8940a body=171 status=ok
// SIG undefined FUN_147c8940a(void)

void FUN_147c8940a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_1c == 0) {
    FUN_147c549ea(param_1 + 0x300);
  }
  else {
    FUN_147c549ac();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c894b6 FUN_147c894b6 body=443 status=ok
// SIG undefined FUN_147c894b6(void)

void FUN_147c894b6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    puVar2 = &local_28;
    FUN_144a5ded6(param_2,puVar2);
  }
  else {
    puVar2 = *(undefined4 **)(param_2 + 0x18);
    FUN_14470e992(param_2,puVar2,&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = CONCAT71((int7)((ulonglong)puVar2 >> 8),*(undefined1 *)(param_1 + 0x498)) &
          0xffffffffffffff08;
  local_30 = local_28;
  local_38 = local_24;
  FUN_147c548dc(param_1 + 0x300,CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 3),local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c89676 FUN_147c89676 body=550 status=ok
// SIG undefined FUN_147c89676(void)

longlong * FUN_147c89676(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    cVar4 = FUN_144729dda(param_1 + 0x2c8);
    if (cVar4 != '\0') goto LAB_147c896ab;
    lVar6 = 0x2a8;
    lVar7 = 0x2b0;
  }
  else {
    cVar4 = FUN_144729dda(param_1 + 0x2d0);
    if (cVar4 != '\0') {
LAB_147c896ab:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
    }
    lVar6 = 0x2b8;
    lVar7 = 0x2c0;
  }
  lVar6 = *(longlong *)(param_1 + lVar6);
  lVar7 = *(longlong *)(param_1 + lVar7);
  if (lVar6 == 0) {
    uVar3 = local_68;
    if ((lVar7 != 0) && (lVar6 = *(longlong *)(param_1 + 0xa8), lVar6 != 0)) goto LAB_147c8970f;
  }
  else if (lVar7 == 0) {
    plVar9 = *(longlong **)(lVar6 + 0x1c8);
LAB_147c8982a:
    uVar3 = local_68;
    if (plVar9 != (longlong *)0x0) {
LAB_147c89833:
      lVar6 = FUN_144a3a302();
      uVar3 = local_68;
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) goto LAB_147c8978a;
    }
  }
  else {
LAB_147c8970f:
    plVar1 = (longlong *)(lVar6 + 0x240);
    lVar2 = lVar6 + 0x250;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(lVar6 + 0x268) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar8 = *(int *)(lVar6 + 0x268);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar8) || (uStack_50 != lVar2)) {
      iVar5 = local_68._4_4_;
      local_68 = uVar3;
      do {
        plVar9 = *(longlong **)(*local_80 + (longlong)iVar5 * 0x10);
        if (plVar9[3] == lVar7) {
          uVar3 = local_68;
          if (plVar9 != (longlong *)0x0) {
            lVar6 = FUN_140e1d66a();
            if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                lVar6 + 0x30)) goto LAB_147c89833;
            lVar6 = (**(code **)(*plVar9 + 0x5d8))(plVar9);
            uVar3 = local_68;
            if (lVar6 != 0) {
              plVar9 = *(longlong **)(lVar6 + 0x1c8);
              goto LAB_147c8982a;
            }
          }
          break;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar8));
    }
  }
  local_68 = uVar3;
  plVar9 = (longlong *)0x0;
LAB_147c8978a:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 147c898b1 FUN_147c898b1 body=97 status=ok
// SIG undefined FUN_147c898b1(void)

void FUN_147c898b1(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0xb98))(param_2);
  if (lVar2 != 0 && param_1 == 0) {
    uVar1 = FUN_1417eeeca(param_2);
    if (((int)uVar1 < 0) || (*(int *)(lVar2 + 0x48) <= (int)uVar1)) {
      param_1 = 0;
    }
    else {
      param_1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x40) + (ulonglong)uVar1 * 8) + 0x28);
    }
  }
  FUN_144909502(param_2,param_1);
  return;
}



// FUNCTION 147c89912 FUN_147c89912 body=345 status=ok
// SIG undefined FUN_147c89912(void)

undefined8 *
FUN_147c89912(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_4;
  lVar2 = FUN_147c89676(param_1,param_3);
  puVar5 = &DAT_14c846480;
  puVar6 = param_2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (lVar2 != 0) {
    lVar4 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) {
      local_70 = (**(code **)(*(longlong *)(lVar2 + 0x2b8) + 0x18))(lVar2 + 0x2b8,&local_68);
      if (local_70 == 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x240);
        puVar6 = param_2;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        local_60 = &local_70;
        local_58 = 1;
        uVar3 = FUN_144b07666();
        FUN_144a78570(local_50,uVar3,0);
        lVar4 = FUN_146e1fbd2(local_38,local_70);
        lVar2 = local_70;
        if (lVar4 != 0) {
          lVar2 = lVar4;
        }
        FUN_146e1fc90(local_38,param_2,lVar2);
        FUN_1448635f4(local_50);
      }
    }
    else {
      iVar1 = FUN_147c898b1(param_4,lVar2);
      if (iVar1 != -1) {
        FUN_144ae2166(lVar2,param_2,iVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147c89a7a FUN_147c89a7a body=656 status=ok
// SIG undefined FUN_147c89a7a(void)

void FUN_147c89a7a(longlong param_1)

{
  double dVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 **local_80;
  undefined8 *local_78;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147c89d0c();
  lVar4 = 0;
  plVar3 = (longlong *)FUN_147c89676(param_1,0);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x7b8))(plVar3,*(undefined8 *)(param_1 + 0x350),1,0xffffffff);
  }
  plVar3 = (longlong *)FUN_147c89676(param_1,1);
  if (plVar3 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar3 + 0x7b8))(plVar3,*(undefined8 *)(param_1 + 0x358),1,0xffffffff);
  }
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x138) == 0)) {
    lVar4 = 0;
    lVar6 = FUN_147c89676(param_1,0);
    if (lVar6 != 0) {
      local_40 = *(undefined8 *)(param_1 + 0x350);
      lVar4 = (**(code **)(*(longlong *)(lVar6 + 0x2b8) + 0x18))(lVar6 + 0x2b8);
    }
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x138) + 0x50);
  }
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x138) == 0)) {
    lVar5 = FUN_147c89676(param_1,1);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      local_40 = *(undefined8 *)(param_1 + 0x358);
      lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x2b8) + 0x18))(lVar5 + 0x2b8);
    }
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x138) + 0x50);
  }
  if (lVar4 != 0 || lVar5 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar2 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_149e35290;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_68[2] = lVar7;
    *local_68 = &PTR_FUN_14aa4cc60;
    local_68[3] = 0;
    FUN_14485c47a(local_68 + 3,param_1);
    puVar2[4] = &LAB_147c89a6e;
    *(undefined4 *)(puVar2 + 5) = 0;
    dVar1 = ABS(*(double *)(param_1 + 0x280));
    if (ABS(*(double *)(param_1 + 0x288)) <= ABS(*(double *)(param_1 + 0x280))) {
      dVar1 = ABS(*(double *)(param_1 + 0x288));
    }
    if (ABS(*(double *)(param_1 + 0x290)) <= dVar1) {
      dVar1 = ABS(*(double *)(param_1 + 0x290));
    }
    local_78 = &local_58;
    local_88 = param_1;
    local_80 = &local_68;
    FUN_140aa2f88(param_1 + 0x300,lVar4,lVar5,(float)dVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c89d0c FUN_147c89d0c body=2975 status=ok
// SIG undefined FUN_147c89d0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c89d0c(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  float fVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auStack_268 [32];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_147c89912(param_1,&local_148,0,*(undefined8 *)(param_1 + 0x350));
  auVar1 = _DAT_149934d80;
  dVar9 = local_138 * local_138 + local_148 * local_148;
  dVar13 = dStack_130 * dStack_130 + dStack_140 * dStack_140;
  dVar10 = dVar9 + dVar13;
  dVar9 = dVar9 + dVar13;
  local_248._8_8_ = -(ulonglong)(1e-08 <= dVar9);
  local_248._0_8_ = -(ulonglong)(1e-08 <= dVar10);
  auVar7._8_8_ = dVar9;
  auVar7._0_8_ = dVar10;
  auVar7 = sqrtpd(local_248,auVar7);
  auVar27 = divpd(_DAT_149934d80,auVar7);
  FUN_147c89912(param_1,&local_1a8,1,*(undefined8 *)(param_1 + 0x358));
  auVar16._0_8_ = local_1a8 * local_1a8;
  auVar16._8_8_ = dStack_1a0 * dStack_1a0;
  dVar9 = (double)local_198._0_8_ * (double)local_198._0_8_ + auVar16._0_8_;
  dVar13 = (double)local_198._8_8_ * (double)local_198._8_8_ + auVar16._8_8_;
  dVar10 = dVar9 + dVar13;
  dVar9 = dVar9 + dVar13;
  uVar5 = -(ulonglong)(1e-08 <= dVar10);
  uVar6 = -(ulonglong)(1e-08 <= dVar9);
  auVar28._8_8_ = dVar9;
  auVar28._0_8_ = dVar10;
  auVar7 = sqrtpd(auVar16,auVar28);
  auVar7 = divpd(auVar1,auVar7);
  auVar24._0_8_ = auVar7._0_8_ * (double)local_198._0_8_;
  auVar24._8_8_ = auVar7._8_8_ * (double)local_198._8_8_;
  local_1a8 = (double)((ulonglong)(local_1a8 * auVar7._0_8_) & uVar5);
  dStack_1a0 = (double)((ulonglong)(dStack_1a0 * auVar7._8_8_) & uVar6);
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5;
  local_198 = blendvpd(_DAT_149935300,auVar24,auVar8);
  dVar26 = *(double *)(param_1 + 0x240);
  dVar21 = *(double *)(param_1 + 0x248);
  dVar20 = *(double *)(param_1 + 0x250);
  dVar10 = *(double *)(param_1 + 600);
  dVar9 = *(double *)(param_1 + 600);
  dVar11 = dVar26 * 0.0 - dVar21 * 1.0;
  dVar14 = dVar21 * 0.0 - dVar20 * 0.0;
  dVar22 = dVar20 * 1.0 - dVar26 * 0.0;
  dVar14 = dVar14 + dVar14;
  dVar22 = dVar22 + dVar22;
  dVar11 = dVar11 + dVar11;
  dVar17 = dVar11 * dVar10 + 0.0 + (dVar22 * dVar26 - dVar14 * dVar21);
  dVar13 = (dVar11 * dVar21 - dVar22 * dVar20) + dVar10 * dVar14 + 1.0;
  dVar11 = (dVar20 * dVar14 - dVar26 * dVar11) + dVar9 * dVar22 + 0.0;
  dVar14 = dVar26 * 1.0 - dVar21 * 0.0;
  dVar22 = dVar21 * 0.0 - dVar20 * 1.0;
  dVar12 = dVar20 * 0.0 - dVar26 * 0.0;
  dVar22 = dVar22 + dVar22;
  dVar12 = dVar12 + dVar12;
  dVar14 = dVar14 + dVar14;
  dVar23 = *(double *)(param_1 + 0x260);
  dVar25 = *(double *)(param_1 + 0x268);
  local_238 = *(double *)(param_1 + 0x270);
  dStack_230 = *(double *)(param_1 + 0x278);
  dVar15 = dVar14 * dVar10 + 0.0 + (dVar12 * dVar26 - dVar22 * dVar21);
  dVar21 = (dVar14 * dVar21 - dVar12 * dVar20) + dVar10 * dVar22 + 0.0;
  dVar22 = (dVar20 * dVar22 - dVar26 * dVar14) + dVar9 * dVar12 + 1.0;
  local_128 = dVar23 - local_128;
  dStack_120 = dVar25 - dStack_120;
  local_118 = local_238 - local_118;
  dVar9 = (double)((ulonglong)dStack_140 ^ DAT_149931e80._8_8_) * auVar27._8_8_;
  auVar2._8_4_ = SUB84(dVar9,0);
  auVar2._0_8_ = (double)((ulonglong)local_148 ^ DAT_149931e80) * auVar27._0_8_;
  auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar28 = blendvpd(_DAT_149931e80,auVar2,local_248);
  auVar19._0_8_ = local_138 * auVar27._0_8_ * -1.0;
  auVar19._8_8_ = dStack_130 * auVar27._8_8_ * 1.0;
  auVar7 = blendvpd(_DAT_149f4cb90,auVar19,local_248);
  dVar20 = auVar28._0_8_;
  dVar29 = auVar28._8_8_;
  dVar12 = auVar7._0_8_;
  dVar26 = auVar7._8_8_;
  dVar9 = dStack_120 * dVar20 - local_128 * dVar29;
  dVar10 = local_118 * dVar29 - dStack_120 * dVar12;
  dVar14 = local_128 * dVar12 - local_118 * dVar20;
  dVar10 = dVar10 + dVar10;
  dVar14 = dVar14 + dVar14;
  dVar9 = dVar9 + dVar9;
  *(double *)(param_1 + 0x368) = (dVar9 * dVar29 - dVar14 * dVar12) + dVar26 * dVar10 + local_128;
  *(double *)(param_1 + 0x370) = (dVar12 * dVar10 - dVar20 * dVar9) + dVar26 * dVar14 + dStack_120;
  *(double *)(param_1 + 0x378) = dVar9 * dVar26 + local_118 + (dVar14 * dVar20 - dVar10 * dVar29);
  dVar9 = dVar11 * dVar20 - dVar29 * dVar13;
  dVar14 = dVar17 * dVar29 - dVar12 * dVar11;
  dVar10 = dVar13 * dVar12 - dVar17 * dVar20;
  dVar14 = dVar14 + dVar14;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar9 + dVar9;
  *(double *)(param_1 + 0x380) = (dVar9 * dVar29 - dVar10 * dVar12) + dVar26 * dVar14 + dVar13;
  *(double *)(param_1 + 0x388) = (dVar12 * dVar14 - dVar20 * dVar9) + dVar26 * dVar10 + dVar11;
  *(double *)(param_1 + 0x390) = dVar9 * dVar26 + dVar17 + (dVar10 * dVar20 - dVar14 * dVar29);
  dVar9 = dVar22 * dVar20 - dVar29 * dVar21;
  dVar10 = dVar15 * dVar29 - dVar12 * dVar22;
  dVar13 = dVar21 * dVar12 - dVar15 * dVar20;
  dVar10 = dVar10 + dVar10;
  dVar13 = dVar13 + dVar13;
  dVar9 = dVar9 + dVar9;
  *(double *)(param_1 + 0x398) = (dVar9 * dVar29 - dVar13 * dVar12) + dVar26 * dVar10 + dVar21;
  *(double *)(param_1 + 0x3a0) = (dVar12 * dVar10 - dVar20 * dVar9) + dVar26 * dVar13 + dVar22;
  *(double *)(param_1 + 0x3a8) = dVar9 * dVar26 + dVar15 + (dVar13 * dVar20 - dVar10 * dVar29);
  local_1e8 = 1.0;
  dStack_1e0 = 0.0;
  dStack_1d8 = 0.0;
  FUN_1401c9a0e(param_1 + 0x3f8,&local_1c8);
  local_200 = 0;
  local_1f8 = 0x3ff0000000000000;
  local_1f0 = 0;
  FUN_1401c9a0e(param_1 + 0x3f8,&local_1e8);
  dVar22 = *(double *)(param_1 + 0x240);
  dVar12 = *(double *)(param_1 + 0x248);
  dVar26 = *(double *)(param_1 + 0x250);
  dVar10 = *(double *)(param_1 + 600);
  dVar9 = *(double *)(param_1 + 600);
  dVar21 = dStack_1c0 * dVar22 - local_1c8 * dVar12;
  dVar17 = local_1b8 * dVar12 - dStack_1c0 * dVar26;
  dVar15 = local_1c8 * dVar26 - local_1b8 * dVar22;
  dVar20 = *(double *)(param_1 + 600) * 0.0 - *(double *)(param_1 + 600) * 0.0;
  dVar17 = dVar17 + dVar17;
  dVar15 = dVar15 + dVar15;
  dVar21 = dVar21 + dVar21;
  dVar13 = dStack_1e0 * dVar22 - dVar12 * local_1e8;
  dVar11 = dStack_1d8 * dVar12 - dVar26 * dStack_1e0;
  dVar14 = local_1e8 * dVar26 - dVar22 * dStack_1d8;
  dVar11 = dVar11 + dVar11;
  dVar14 = dVar14 + dVar14;
  dVar13 = dVar13 + dVar13;
  local_248._0_8_ = dVar21 * dVar10 + local_1b8 + (dVar15 * dVar22 - dVar17 * dVar12);
  local_248._8_8_ = dVar20 + dVar20;
  dVar20 = (dVar21 * dVar12 - dVar15 * dVar26) + dVar10 * dVar17 + local_1c8;
  dVar15 = (dVar26 * dVar17 - dVar22 * dVar21) + dVar9 * dVar15 + dStack_1c0;
  dVar21 = dVar13 * dVar10 + dStack_1d8 + (dVar14 * dVar22 - dVar11 * dVar12);
  local_218 = (dVar13 * dVar12 - dVar14 * dVar26) + dVar10 * dVar11 + local_1e8;
  dStack_210 = (dVar26 * dVar11 - dVar22 * dVar13) + dVar9 * dVar14 + dStack_1e0;
  dVar23 = dVar23 - local_188;
  dVar25 = dVar25 - dStack_180;
  local_178 = local_238 - local_178;
  dVar14 = (double)local_198._0_8_ * -1.0;
  dVar22 = (double)local_198._8_8_ * 1.0;
  local_228 = -local_1a8;
  dStack_220 = -dStack_1a0;
  dVar26 = dVar25 * local_228 - dVar23 * dStack_220;
  dVar17 = local_178 * dStack_220 - dVar25 * dVar14;
  dVar12 = dVar23 * dVar14 - local_178 * local_228;
  dVar17 = dVar17 + dVar17;
  dVar12 = dVar12 + dVar12;
  dVar26 = dVar26 + dVar26;
  local_238 = local_1a8;
  dStack_230 = dStack_1a0;
  dVar9 = local_1a8 * dVar26 + dVar14 * dVar17 + dVar22 * dVar12 + dVar25;
  auVar27._8_4_ = SUB84(dVar9,0);
  auVar27._0_8_ = (dVar26 * dStack_220 - dVar12 * dVar14) + dVar22 * dVar17 + dVar23;
  auVar27._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3b0) = auVar27;
  dVar10 = dVar15 * local_228 - dStack_220 * dVar20;
  dVar13 = (double)local_248._0_8_ * dStack_220 - dVar14 * dVar15;
  dVar11 = dVar20 * dVar14 - (double)local_248._0_8_ * local_228;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar10 = dVar10 + dVar10;
  *(double *)(param_1 + 0x3c0) =
       dVar26 * dVar22 + local_178 + (dVar12 * local_228 - dVar17 * dStack_220);
  dVar12 = dStack_210 * local_228 - dStack_220 * local_218;
  dVar26 = dVar21 * dStack_220 - dVar14 * dStack_210;
  dVar23 = local_218 * dVar14 - dVar21 * local_228;
  dVar26 = dVar26 + dVar26;
  dVar23 = dVar23 + dVar23;
  dVar12 = dVar12 + dVar12;
  dVar9 = local_1a8 * dVar10 + dVar14 * dVar13 + dVar22 * dVar11 + dVar15;
  auVar1._8_4_ = SUB84(dVar9,0);
  auVar1._0_8_ = (dVar10 * dStack_220 - dVar11 * dVar14) + dVar22 * dVar13 + dVar20;
  auVar1._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3c8) = auVar1;
  *(double *)(param_1 + 0x3d8) =
       dVar10 * dVar22 + (double)local_248._0_8_ + (dVar11 * local_228 - dVar13 * dStack_220);
  dVar9 = local_1a8 * dVar12 + dVar14 * dVar26 + dVar22 * dVar23 + dStack_210;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = (dVar12 * dStack_220 - dVar23 * dVar14) + dVar22 * dVar26 + local_218;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3e0) = auVar3;
  *(double *)(param_1 + 0x3f0) =
       dVar12 * dVar22 + dVar21 + (dVar23 * local_228 - dVar26 * dStack_220);
  dVar9 = ABS(*(double *)(param_1 + 0x280));
  if (ABS(*(double *)(param_1 + 0x288)) <= ABS(*(double *)(param_1 + 0x280))) {
    dVar9 = ABS(*(double *)(param_1 + 0x288));
  }
  if (ABS(*(double *)(param_1 + 0x290)) <= dVar9) {
    dVar9 = ABS(*(double *)(param_1 + 0x290));
  }
  fVar18 = (float)dVar9;
  if (fVar18 <= 0.01) {
    fVar18 = 0.01;
  }
  lVar4 = FUN_147c89676(param_1,0);
  if (lVar4 != 0) {
    local_200 = *(undefined8 *)(param_1 + 0x350);
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x2b8) + 0x18))(lVar4 + 0x2b8);
    if (lVar4 != 0) {
      dVar9 = 1.0 / (double)fVar18;
      *(double *)(param_1 + 0x368) = *(double *)(param_1 + 0x368) * dVar9;
      *(double *)(param_1 + 0x370) = *(double *)(param_1 + 0x370) * dVar9;
      *(double *)(param_1 + 0x378) = dVar9 * *(double *)(param_1 + 0x378);
    }
  }
  lVar4 = FUN_147c89676(param_1,1);
  if (lVar4 != 0) {
    local_200 = *(undefined8 *)(param_1 + 0x358);
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x2b8) + 0x18))(lVar4 + 0x2b8);
    if (lVar4 != 0) {
      dVar9 = 1.0 / (double)fVar18;
      *(double *)(param_1 + 0x3b0) = *(double *)(param_1 + 0x3b0) * dVar9;
      *(double *)(param_1 + 0x3b8) = *(double *)(param_1 + 0x3b8) * dVar9;
      *(double *)(param_1 + 0x3c0) = dVar9 * *(double *)(param_1 + 0x3c0);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8a8ac FUN_147c8a8ac body=34 status=ok
// SIG undefined FUN_147c8a8ac(void)

void FUN_147c8a8ac(longlong param_1)

{
  FUN_14134c582();
  FUN_147c89a7a(param_1);
  *(undefined1 *)(param_1 + 0x588) = 1;
  return;
}



// FUNCTION 147c8a8ce FUN_147c8a8ce body=41 status=ok
// SIG undefined FUN_147c8a8ce(void)

void FUN_147c8a8ce(longlong param_1)

{
  FUN_1401a0912();
  if (*(char *)(param_1 + 0x588) != '\x01') {
    return;
  }
  FUN_147c89a7a(param_1);
  return;
}



// FUNCTION 147c8a8f8 FUN_147c8a8f8 body=33 status=ok
// SIG undefined FUN_147c8a8f8(void)

void FUN_147c8a8f8(longlong param_1)

{
  FUN_1448c4a0e();
  FUN_1407a4724(param_1 + 0x300);
  return;
}



// FUNCTION 147c8a91a FUN_147c8a91a body=33 status=ok
// SIG undefined FUN_147c8a91a(void)

void FUN_147c8a91a(longlong param_1)

{
  FUN_1412a62ac();
  FUN_1407a4724(param_1 + 0x300);
  return;
}



// FUNCTION 147c8a93c FUN_147c8a93c body=244 status=ok
// SIG undefined FUN_147c8a93c(void)

void FUN_147c8a93c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140136774();
  FUN_144842a8a(param_1,local_28);
  if ((local_28[0] < 0xf6) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
    FUN_140aa2b36(param_1 + 0x300,*(longlong *)(param_1 + 0x2d8) + 0x28);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  FUN_144842a8a(param_1,local_28);
  if (local_28[0] < 0x15d) {
    plVar1 = (longlong *)FUN_147c89676(param_1,0);
    plVar2 = (longlong *)FUN_147c89676(param_1,1);
    if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x83) & 1) != 0)) {
      (**(code **)(*plVar1 + 0x8f0))(plVar1,*(undefined8 *)(param_1 + 0x350));
    }
    if ((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0x83) & 1) != 0)) {
      (**(code **)(*plVar2 + 0x8f0))(plVar2,*(undefined8 *)(param_1 + 0x358));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8aa36 FUN_147c8aa36 body=144 status=ok
// SIG undefined FUN_147c8aa36(void)

void FUN_147c8aa36(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(*param_2 + 8);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = lVar1;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    memcpy((void *)(param_1 + 0x2c0),(void *)(param_1 + 0x140),0x160);
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8aae4 FUN_147c8aae4 body=346 status=ok
// SIG undefined FUN_147c8aae4(void)

void FUN_147c8aae4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90 [3];
  undefined4 local_78 [6];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  puVar7 = local_78;
  if (puVar2 != (undefined4 *)0x0) {
    puVar7 = puVar2;
  }
  puVar6 = local_90;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *(undefined8 *)(param_1 + 0x140);
  uStack_40 = *(undefined8 *)(param_1 + 0x148);
  local_38 = *(undefined4 *)(param_1 + 0x150);
  uStack_34 = *(undefined4 *)(param_1 + 0x154);
  uStack_30 = *(undefined4 *)(param_1 + 0x158);
  uStack_2c = *(undefined4 *)(param_1 + 0x15c);
  FUN_1448052ee(&local_48,&local_60);
  puVar6[2] = local_50;
  *puVar6 = local_60;
  puVar6[1] = uStack_58;
  uVar3 = *(undefined4 *)(param_1 + 0x164);
  uVar4 = *(undefined4 *)(param_1 + 0x168);
  uVar5 = *(undefined4 *)(param_1 + 0x16c);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  *puVar7 = *(undefined4 *)(param_1 + 0x160);
  puVar7[1] = uVar3;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  *(undefined8 *)(puVar7 + 4) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8ac46 FUN_147c8ac46 body=443 status=ok
// SIG undefined FUN_147c8ac46(void)

void FUN_147c8ac46(longlong *param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_78 = local_44 != 0;
  (**(code **)(*param_1 + 0x478))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8ae02 FUN_147c8ae02 body=359 status=ok
// SIG undefined FUN_147c8ae02(void)

void FUN_147c8ae02(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  local_68 = &DAT_14c8464f8;
  local_60 = 0;
  (**(code **)(*param_1 + 0x498))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8af6a FUN_147c8af6a body=494 status=ok
// SIG undefined FUN_147c8af6a(void)

void FUN_147c8af6a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = &local_78;
  local_68 = local_48;
  local_78 = local_58;
  uStack_70 = uStack_50;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  uStack_90 = uStack_38;
  uStack_8c = uStack_34;
  local_88 = local_30;
  local_a0 = 1;
  (**(code **)(*param_1 + 0x498))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b174 FUN_147c8b174 body=168 status=ok
// SIG undefined FUN_147c8b174(void)

void FUN_147c8b174(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)((longlong)param_1 + 300) = local_1c;
  (**(code **)(*param_1 + 0x490))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b21e FUN_147c8b21e body=168 status=ok
// SIG undefined FUN_147c8b21e(void)

void FUN_147c8b21e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x26) = local_1c;
  (**(code **)(*param_1 + 0x490))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b2c8 FUN_147c8b2c8 body=156 status=ok
// SIG undefined FUN_147c8b2c8(void)

void FUN_147c8b2c8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x200) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b366 FUN_147c8b366 body=168 status=ok
// SIG undefined FUN_147c8b366(void)

void FUN_147c8b366(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)((longlong)param_1 + 0x124) = local_1c;
  (**(code **)(*param_1 + 0x490))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b410 FUN_147c8b410 body=168 status=ok
// SIG undefined FUN_147c8b410(void)

void FUN_147c8b410(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x25) = local_1c;
  (**(code **)(*param_1 + 0x490))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b4ba FUN_147c8b4ba body=159 status=ok
// SIG undefined FUN_147c8b4ba(void)

void FUN_147c8b4ba(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x160) = local_38;
  *(undefined4 *)(param_1 + 0x164) = uStack_34;
  *(undefined4 *)(param_1 + 0x168) = uStack_30;
  *(undefined4 *)(param_1 + 0x16c) = uStack_2c;
  *(undefined8 *)(param_1 + 0x170) = local_28;
  *(undefined8 *)(param_1 + 0x178) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b55a FUN_147c8b55a body=364 status=ok
// SIG undefined FUN_147c8b55a(void)

void FUN_147c8b55a(longlong param_1,longlong param_2)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_90;
  local_b8 = local_a0;
  uStack_b4 = uStack_9c;
  uStack_b0 = uStack_98;
  uStack_ac = uStack_94;
  FUN_144a7484c(&local_b8,&local_68);
  *(undefined8 *)(param_1 + 0x140) = local_68;
  *(undefined8 *)(param_1 + 0x148) = uStack_60;
  *(undefined4 *)(param_1 + 0x150) = local_58;
  *(undefined4 *)(param_1 + 0x154) = uStack_54;
  *(undefined4 *)(param_1 + 0x158) = uStack_50;
  *(undefined4 *)(param_1 + 0x15c) = uStack_4c;
  *(undefined8 *)(param_1 + 0x160) = local_88;
  *(undefined8 *)(param_1 + 0x168) = uStack_80;
  *(undefined8 *)(param_1 + 0x170) = local_78;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x188) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 400) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x198) = 0;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b6c8 FUN_147c8b6c8 body=193 status=ok
// SIG undefined FUN_147c8b6c8(void)

void FUN_147c8b6c8(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  FUN_144a7484c(&local_68,&local_38);
  *(undefined4 *)(param_1 + 0x140) = local_38;
  *(undefined4 *)(param_1 + 0x144) = uStack_34;
  *(undefined4 *)(param_1 + 0x148) = uStack_30;
  *(undefined4 *)(param_1 + 0x14c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x150) = local_28;
  *(undefined4 *)(param_1 + 0x154) = uStack_24;
  *(undefined4 *)(param_1 + 0x158) = uStack_20;
  *(undefined4 *)(param_1 + 0x15c) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b7a6 FUN_147c8b7a6 body=43 status=ok
// SIG undefined FUN_147c8b7a6(void)

void FUN_147c8b7a6(longlong *param_1)

{
  if (param_1[0x22] != 0) {
    (**(code **)(*param_1 + 0x480))(param_1);
  }
  FUN_1448b6576(param_1);
  return;
}



// FUNCTION 147c8b7d2 FUN_147c8b7d2 body=232 status=ok
// SIG undefined FUN_147c8b7d2(void)

void FUN_147c8b7d2(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined1 local_70;
  undefined4 *local_60;
  code *local_58;
  undefined4 **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x7b8))(param_2,param_3,1,0xffffffff);
    if (lVar1 != 0) {
      local_38 = DAT_14c846508;
      local_48 = (undefined4)DAT_14c8464f8;
      uStack_44 = DAT_14c8464f8._4_4_;
      uStack_40 = (undefined4)DAT_14c846500;
      uStack_3c = DAT_14c846500._4_4_;
      if (*(longlong *)(lVar1 + 0x138) != 0) {
        local_60 = &local_48;
        local_50 = &local_60;
        local_58 = FUN_143650820;
        FUN_1448e6002(lVar1 + 0x138);
      }
      local_70 = param_5;
      local_78 = &local_48;
      (**(code **)(*param_1 + 0x498))(param_1,param_2,param_3,param_4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8b8bc FUN_147c8b8bc body=1484 status=ok
// SIG undefined FUN_147c8b8bc(void)

void FUN_147c8b8bc(longlong *param_1,longlong *param_2,longlong param_3,undefined1 (*param_4) [12],
                  undefined8 param_5,byte param_6)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int *piVar18;
  longlong *plVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  double dVar24;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [12];
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
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
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_1[0x22] != 0) {
    (**(code **)(*param_1 + 0x480))(param_1);
  }
  if (param_2 != (longlong *)0x0) {
    lVar15 = (**(code **)(*param_2 + 0x7b8))(param_2,param_3,1,0xffffffff);
    if (lVar15 != 0) {
      lVar20 = *(longlong *)(lVar15 + 0x108);
      if (*(longlong *)(lVar15 + 0x108) == 0) {
        lVar20 = lVar15;
      }
      if (*(longlong *)(lVar20 + 0x138) != 0) {
        local_160 = param_3;
        if (param_1[0xa3] == 0) {
          plVar17 = param_1 + 0xa3;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = stack0xfffffffffffffed0;
          _local_138 = auVar12 << 0x40;
          local_c8 = 0;
          local_c4 = 0x100;
          local_c0 = 0;
          FUN_144a7484c(param_5,&local_158);
          local_128._12_4_ = uStack_14c;
          local_128._8_4_ = uStack_150;
          local_108 = *(undefined4 *)*param_4;
          uStack_104 = *(undefined4 *)(*param_4 + 4);
          uStack_100 = (undefined4)*(undefined8 *)(*param_4 + 8);
          uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(*param_4 + 8) >> 0x20);
          local_f8 = *(undefined8 *)(param_4[1] + 4);
          local_128._0_8_ = local_158;
          local_118 = local_148;
          fStack_114 = fStack_144;
          fStack_110 = fStack_140;
          fStack_10c = fStack_13c;
          uStack_f0 = 0;
          local_e8 = 0x3ff0000000000000;
          uStack_e0 = 0x3ff0000000000000;
          local_d8 = 0x3ff0000000000000;
          uStack_d0 = 0;
          FUN_1407125d4(local_138,plVar17);
          lVar15 = *plVar17;
          local_168 = plVar17;
          puVar16 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          puVar16[1] = 0;
          *(undefined2 *)(puVar16 + 3) = 0x101;
          *(undefined1 *)((longlong)puVar16 + 0x1a) = 1;
          *(undefined2 *)((longlong)puVar16 + 0x1c) = 0;
          *puVar16 = &PTR_FUN_149f48e60;
          puVar16[4] = 0;
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[2] = 0x408f400000000000;
          if (puVar16 == (undefined8 *)0x0) {
            local_158 = (undefined8 *)0x0;
            FUN_1406188f0(*(undefined8 *)(lVar15 + 0x40));
          }
          else {
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            piVar18 = (int *)(puVar16 + 1);
            uVar1 = *(undefined8 *)(lVar15 + 0x40);
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            local_158 = puVar16;
            FUN_1406188f0(uVar1);
            LOCK();
            *piVar18 = *piVar18 + -1;
            UNLOCK();
            if ((*piVar18 == 0) && (*(int *)((longlong)puVar16 + 0xc) == 0)) {
              (**(code **)*puVar16)(puVar16,1);
            }
          }
          plVar17 = local_168;
          FUN_140cd4f30(*local_168,2,0,1);
          lVar15 = FUN_145bdc386(lVar20);
          if (lVar15 != 0) {
            FUN_146ef1486(plVar17,*(undefined8 *)(lVar15 + 0x38));
            param_1[0x53] = lVar15;
          }
        }
        FUN_144a7484c(param_5,local_138);
        fStack_10c = (float)(double)local_128._8_8_;
        uVar14 = local_138._0_8_;
        fStack_114 = (float)stack0xfffffffffffffed0;
        uVar10 = *(undefined4 *)*param_4;
        uVar11 = *(undefined4 *)(*param_4 + 4);
        uVar1 = *(undefined8 *)(*param_4 + 8);
        auVar13 = *param_4;
        uVar23 = (undefined4)((ulonglong)uVar1 >> 0x20);
        dVar2 = *(double *)(param_4[1] + 4);
        lVar15 = *(longlong *)(param_4[1] + 4);
        param_1[0x34] = local_138._0_8_;
        param_1[0x35] = (longlong)stack0xfffffffffffffed0;
        *(undefined1 (*) [16])(param_1 + 0x36) = local_128;
        *(undefined4 *)(param_1 + 0x38) = uVar10;
        *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar11;
        *(int *)(param_1 + 0x39) = (int)uVar1;
        *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar23;
        param_1[0x3a] = lVar15;
        param_1[0x3b] = 0;
        param_1[0x3c] = 0x3ff0000000000000;
        param_1[0x3d] = 0x3ff0000000000000;
        param_1[0x3e] = 0x3ff0000000000000;
        param_1[0x3f] = 0;
        plVar17 = param_1 + 0x34;
        plVar19 = param_1 + 0x28;
        for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
          *plVar19 = *plVar17;
          plVar17 = plVar17 + 1;
          plVar19 = plVar19 + 1;
        }
        uStack_12c = uVar23;
        local_138 = auVar13;
        fStack_110 = (float)local_128._0_8_;
        local_118 = (float)(double)uVar14;
        local_108 = 2;
        uStack_150 = CONCAT31(uStack_150._1_3_,1);
        local_158 = (undefined8 *)local_138;
        local_128._0_8_ = dVar2;
        FUN_144a678a8(&local_158,*(undefined8 *)(param_1[0xa3] + 0x40));
        lVar15 = *(longlong *)(*(longlong *)(lVar20 + 0x138) + 0x40);
        dVar9 = (double)*(float *)(lVar15 + 0x44);
        dVar8 = (double)*(float *)(lVar15 + 0x40);
        dVar2 = *(double *)(param_4[1] + 4) - *(double *)(lVar15 + 0x30);
        dVar4 = *(double *)*param_4 - *(double *)(lVar15 + 0x20);
        dVar5 = *(double *)(*param_4 + 8) - *(double *)(lVar15 + 0x28);
        dVar6 = (double)*(float *)(lVar15 + 0x48) * -1.0;
        dVar7 = (double)*(float *)(lVar15 + 0x4c) * 1.0;
        dVar24 = dVar4 * dVar6 - -dVar8 * dVar2;
        dVar21 = dVar5 * -dVar8 - -dVar9 * dVar4;
        dVar22 = dVar2 * -dVar9 - dVar6 * dVar5;
        dVar22 = dVar22 + dVar22;
        dVar24 = dVar24 + dVar24;
        dVar21 = dVar21 + dVar21;
        dVar5 = dVar8 * dVar21 + dVar6 * dVar22 + dVar7 * dVar24 + dVar5;
        auVar3._8_4_ = SUB84(dVar5,0);
        auVar3._0_8_ = (dVar21 * -dVar9 - dVar24 * dVar6) + dVar7 * dVar22 + dVar4;
        auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0xa5) = auVar3;
        param_1[0xa7] = (longlong)(dVar21 * dVar7 + dVar2 + (dVar24 * -dVar8 - dVar22 * -dVar9));
        FUN_144a7484c(param_5,local_138);
        dVar22 = dVar9 * (double)local_138._0_8_;
        dVar24 = dVar8 * stack0xfffffffffffffed0;
        dVar5 = stack0xfffffffffffffed0 * dVar6;
        dVar2 = (double)local_128._8_8_ * dVar6;
        dVar21 = (double)local_138._0_8_ * dVar6 * 1.0 +
                 ((dVar7 * stack0xfffffffffffffed0 - dVar8 * (double)local_128._0_8_ * -1.0) -
                 (double)local_128._8_8_ * dVar9);
        dVar4 = (double)local_128._0_8_ * dVar6 * -1.0 +
                dVar9 * stack0xfffffffffffffed0 +
                (dVar7 * (double)local_128._8_8_ - dVar8 * (double)local_138._0_8_ * -1.0);
        local_138._8_4_ = SUB84(dVar21,0);
        local_138._0_8_ =
             dVar5 * -1.0 +
             ((dVar7 * (double)local_138._0_8_ - dVar8 * (double)local_128._8_8_ * 1.0) -
             (double)local_128._0_8_ * dVar9);
        uStack_12c = (int)((ulonglong)dVar21 >> 0x20);
        local_128._8_4_ = SUB84(dVar4,0);
        local_128._0_8_ = dVar2 * 1.0 + dVar22 + (dVar7 * (double)local_128._0_8_ - dVar24 * 1.0);
        local_128._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        FUN_141706cfc(&local_158,local_138);
        *(undefined4 *)(param_1 + 0xa8) = (undefined4)local_158;
        *(undefined4 *)((longlong)param_1 + 0x544) = local_158._4_4_;
        *(undefined4 *)(param_1 + 0xa9) = uStack_150;
        *(undefined4 *)((longlong)param_1 + 0x54c) = uStack_14c;
        param_1[0xaa] = CONCAT44(fStack_144,local_148);
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe | (uint)param_6;
        param_1[0xa2] = *(longlong *)(lVar20 + 0x138);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        param_1[0x22] = (longlong)param_2;
        param_1[0x23] = local_160;
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c8be8a FUN_147c8be8a body=116 status=ok
// SIG undefined FUN_147c8be8a(void)

void FUN_147c8be8a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x520);
  cVar2 = FUN_142a2db56(plVar1);
  if ((cVar2 != '\0') && (*(int *)(*plVar1 + 8) == 1)) {
    local_20 = &local_30;
    local_28 = FUN_1436508a4;
    local_30 = param_1;
    FUN_1407a478e(plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8bf00 FUN_147c8bf00 body=143 status=ok
// SIG undefined FUN_147c8bf00(void)

void FUN_147c8bf00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_142a2db56(param_1 + 0x520);
  if (cVar2 != '\0') {
    FUN_140b0bf98(param_1 + 0x520);
    *(undefined1 *)(param_1 + 0x270) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x710))(plVar1,0);
    *(undefined8 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FUN_142a2e46a(param_1 + 0x518,*(undefined8 *)(param_1 + 0x298),0);
  }
  FUN_147c5398a(param_1 + 0x288);
  return;
}



// FUNCTION 147c8bf90 FUN_147c8bf90 body=458 status=ok
// SIG undefined FUN_147c8bf90(void)

void FUN_147c8bf90(longlong param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  code *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  auVar5._8_8_ = -(ulonglong)
                  (9.999999747378752e-05 <
                  ABS(*(double *)(param_1 + 0x1c8) - *(double *)(param_1 + 0x238)));
  auVar5._0_8_ = -(ulonglong)
                  (9.999999747378752e-05 <
                  ABS(*(double *)(param_1 + 0x1c0) - *(double *)(param_1 + 0x230)));
  iVar9 = movmskpd((int)local_50,auVar5);
  auVar3._8_8_ = -(ulonglong)
                  (9.999999747378752e-05 <
                  ABS(*(double *)(param_1 + 0x1d8) - *(double *)(param_1 + 0x248)));
  auVar3._0_8_ = -(ulonglong)
                  (9.999999747378752e-05 <
                  ABS(*(double *)(param_1 + 0x1d0) - *(double *)(param_1 + 0x240)));
  uVar11 = movmskpd(param_2,auVar3);
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    lVar10 = -(ulonglong)
              (9.999999747378752e-05 <
              ABS(*(double *)(param_1 + 0x1a8) - *(double *)(param_1 + 0x218)));
    auVar8._8_4_ = (int)lVar10;
    auVar8._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x1a0) - *(double *)(param_1 + 0x210)));
    auVar8._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar11 = movmskpd(iVar9,auVar8);
    lVar10 = -(ulonglong)
              (9.999999747378752e-05 <
              ABS(*(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x228)));
    auVar7._8_4_ = (int)lVar10;
    auVar7._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x1b0) - *(double *)(param_1 + 0x220)));
    auVar7._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar9 = movmskpd(0,auVar7);
    uVar12 = iVar9 << 2 | uVar11;
    if (uVar12 != 0) {
      auVar6._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x1a8) + *(double *)(param_1 + 0x218)));
      auVar6._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x1a0) + *(double *)(param_1 + 0x210)));
      uVar11 = movmskpd(uVar11,auVar6);
      auVar4._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x1b8) + *(double *)(param_1 + 0x228)));
      auVar4._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x1b0) + *(double *)(param_1 + 0x220)));
      uVar12 = movmskpd(uVar12,auVar4);
      if ((uVar12 & 0x3fffffff) != 0 || uVar11 != 0) goto LAB_147c8c011;
    }
    auVar2._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x1e8) - *(double *)(param_1 + 600)));
    auVar2._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x1e0) - *(double *)(param_1 + 0x250)));
    iVar9 = movmskpd(uVar11,auVar2);
    auVar1._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x1f8) - *(double *)(param_1 + 0x268)));
    auVar1._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 <
                    ABS(*(double *)(param_1 + 0x1f0) - *(double *)(param_1 + 0x260)));
    uVar11 = movmskpd(0,auVar1);
    if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) goto LAB_147c8c04e;
  }
LAB_147c8c011:
  local_58 = &local_68;
  local_60 = FUN_143651e52;
  local_68 = param_1;
  FUN_144966906(param_1 + 0x518);
  puVar13 = (undefined8 *)(param_1 + 0x1a0);
  puVar14 = (undefined8 *)(param_1 + 0x210);
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
LAB_147c8c04e:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c8c15c FUN_147c8c15c body=1240 status=ok
// SIG undefined FUN_147c8c15c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c8c15c(longlong *param_1,float param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144a7e84a();
  if ((char)param_1[0x4e] == '\x01') {
    cVar2 = FUN_142a2db56(param_1 + 0xa4);
    if (cVar2 == '\0') goto LAB_147c8c351;
    *(undefined1 *)(param_1 + 0x4e) = 0;
  }
  plVar4 = param_1 + 0xa4;
  cVar2 = FUN_142a2db56(plVar4);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 0x24) & 8) == 0) {
      plVar4 = param_1 + 0x28;
      plVar5 = param_1 + 0x34;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *plVar5 = *plVar4;
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
      }
    }
    else {
      dVar15 = (double)param_1[0x34];
      dVar27 = (double)param_1[0x35];
      dVar21 = (double)param_1[0x36];
      dVar25 = (double)param_1[0x37];
      dVar10 = dVar21 * dVar21 + dVar15 * dVar15;
      dVar14 = dVar25 * dVar25 + dVar27 * dVar27;
      auVar11._0_8_ = dVar10 + dVar14;
      auVar11._8_8_ = dVar10 + dVar14;
      dVar14 = (double)param_1[0x28];
      dVar17 = (double)param_1[0x29];
      dVar20 = (double)param_1[0x2a];
      dVar10 = (double)param_1[0x2b];
      auVar12 = sqrtpd(auVar11,auVar11);
      auVar22 = divpd(_DAT_149934d80,auVar12);
      auVar23._0_8_ = auVar22._0_8_ * dVar21;
      auVar23._8_8_ = auVar22._8_8_ * dVar25;
      auVar26._8_8_ = -(ulonglong)(1e-08 <= auVar11._8_8_);
      auVar26._0_8_ = -(ulonglong)(1e-08 <= auVar11._0_8_);
      auVar26 = blendvpd(_DAT_149935300,auVar23,auVar26);
      auVar31._0_8_ = dVar14 * dVar14;
      auVar31._8_8_ = dVar17 * dVar17;
      dVar21 = dVar20 * dVar20 + auVar31._0_8_;
      dVar25 = dVar10 * dVar10 + auVar31._8_8_;
      auVar24._0_8_ = dVar21 + dVar25;
      auVar24._8_8_ = dVar21 + dVar25;
      auVar12 = sqrtpd(auVar31,auVar24);
      auVar31 = divpd(_DAT_149934d80,auVar12);
      dVar10 = dVar10 * auVar31._8_8_;
      auVar6._8_8_ = -(ulonglong)(1e-08 <= auVar24._8_8_);
      auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar24._0_8_);
      auVar12._8_4_ = SUB84(dVar10,0);
      auVar12._0_8_ = dVar20 * auVar31._0_8_;
      auVar12._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar12 = blendvpd(_DAT_149935300,auVar12,auVar6);
      param_2 = param_2 * *(float *)(param_1 + 0x40);
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      auVar18._0_8_ =
           (double)((ulonglong)(dVar15 * auVar22._0_8_) & -(ulonglong)(1e-08 <= auVar11._0_8_));
      auVar18._8_8_ =
           (double)((ulonglong)(dVar27 * auVar22._8_8_) & -(ulonglong)(1e-08 <= auVar11._8_8_));
      if (param_2 <= 1e-05) {
        *(undefined1 (*) [16])(param_1 + 0x34) = auVar18;
        *(undefined1 (*) [16])(param_1 + 0x36) = auVar26;
      }
      else {
        dVar10 = (double)(-(ulonglong)(1e-08 <= auVar24._0_8_) & (ulonglong)(dVar14 * auVar31._0_8_)
                         );
        dVar15 = (double)(-(ulonglong)(1e-08 <= auVar24._8_8_) & (ulonglong)(dVar17 * auVar31._8_8_)
                         );
        if (ABS(param_2 + -1.0) <= 1e-05) {
          param_1[0x34] = (longlong)dVar10;
          param_1[0x35] = (longlong)dVar15;
          *(undefined1 (*) [16])(param_1 + 0x36) = auVar12;
          param_1[0x38] = param_1[0x2c];
          param_1[0x39] = param_1[0x2d];
          param_1[0x3a] = param_1[0x2e];
          param_1[0x3b] = param_1[0x2f];
          param_1[0x3c] = param_1[0x30];
          param_1[0x3d] = param_1[0x31];
          param_1[0x3e] = param_1[0x32];
          param_1[0x3f] = param_1[0x33];
        }
        else {
          dVar27 = auVar26._0_8_ * auVar12._0_8_ + auVar18._0_8_ * dVar10;
          dVar21 = auVar26._8_8_ * auVar12._8_8_ + auVar18._8_8_ * dVar15;
          auVar7._8_8_ = -(ulonglong)(0.0 <= dVar27 + dVar21);
          auVar7._0_8_ = -(ulonglong)(0.0 <= dVar27 + dVar21);
          auVar29._0_8_ = 0.0 - auVar18._0_8_;
          auVar29._8_8_ = 0.0 - auVar18._8_8_;
          auVar31 = blendvpd(auVar29,auVar18,auVar7);
          auVar19._0_8_ = 0.0 - auVar26._0_8_;
          auVar19._8_8_ = 0.0 - auVar26._8_8_;
          auVar26 = blendvpd(auVar19,auVar26,auVar7);
          dVar25 = (double)param_2;
          dVar14 = (double)param_2;
          dVar27 = (double)DAT_149934d80 - dVar25;
          dVar21 = DAT_149934d80._8_8_ - dVar14;
          dVar28 = auVar31._0_8_ * dVar27 + dVar10 * dVar25;
          dVar30 = auVar31._8_8_ * dVar21 + dVar15 * dVar14;
          dVar17 = auVar26._0_8_ * dVar27 + dVar25 * auVar12._0_8_;
          dVar20 = auVar26._8_8_ * dVar21 + dVar14 * auVar12._8_8_;
          auVar8._0_8_ = dVar28 * dVar28;
          auVar8._8_8_ = dVar30 * dVar30;
          dVar10 = dVar17 * dVar17 + auVar8._0_8_;
          dVar15 = dVar20 * dVar20 + auVar8._8_8_;
          auVar13._0_8_ = dVar10 + dVar15;
          auVar13._8_8_ = dVar10 + dVar15;
          auVar12 = sqrtpd(auVar8,auVar13);
          auVar26 = divpd(_DAT_149934d80,auVar12);
          auVar16._0_8_ = auVar26._0_8_ * dVar17;
          auVar16._8_8_ = auVar26._8_8_ * dVar20;
          auVar9._8_8_ = -(ulonglong)(1e-08 <= auVar13._8_8_);
          auVar9._0_8_ = -(ulonglong)(1e-08 <= auVar13._0_8_);
          auVar12 = blendvpd(_DAT_149935300,auVar16,auVar9);
          dVar10 = (double)param_1[0x2d] * dVar14 + (double)param_1[0x39] * dVar21;
          auVar1._8_4_ = SUB84(dVar10,0);
          auVar1._0_8_ = (double)param_1[0x2c] * dVar25 + (double)param_1[0x38] * dVar27;
          auVar1._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0x38) = auVar1;
          param_1[0x3a] =
               (longlong)((double)param_1[0x2e] * dVar25 + (double)param_1[0x3a] * dVar27);
          param_1[0x3b] =
               (longlong)((double)param_1[0x2f] * dVar14 + (double)param_1[0x3b] * dVar21);
          dVar10 = (double)param_1[0x31] * dVar14 + (double)param_1[0x3d] * dVar21;
          auVar22._8_4_ = SUB84(dVar10,0);
          auVar22._0_8_ = (double)param_1[0x30] * dVar25 + (double)param_1[0x3c] * dVar27;
          auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0x3c) = auVar22;
          param_1[0x3e] =
               (longlong)((double)param_1[0x32] * dVar25 + (double)param_1[0x3e] * dVar27);
          param_1[0x3f] =
               (longlong)((double)param_1[0x33] * dVar14 + (double)param_1[0x3f] * dVar21);
          param_1[0x34] = (ulonglong)(dVar28 * auVar26._0_8_) & -(ulonglong)(1e-08 <= auVar13._0_8_)
          ;
          param_1[0x35] = (ulonglong)(dVar30 * auVar26._8_8_) & -(ulonglong)(1e-08 <= auVar13._8_8_)
          ;
          *(undefined1 (*) [16])(param_1 + 0x36) = auVar12;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_e8);
  }
  if ((param_1[0xa3] != 0) && (param_1[0xa2] != 0)) {
    local_c8 = &DAT_14c846480;
    FUN_146ef285c(&local_b8,param_1 + 0xa3,param_1 + 0xa2);
    *plVar4 = local_b8;
    cVar2 = FUN_142a2db56(plVar4);
    if ((cVar2 != '\0') && ((lVar3 = *plVar4, lVar3 != 0 && (*(int *)(lVar3 + 8) == 1)))) {
      *(longlong **)(lVar3 + 0x348) = param_1 + 0x4f;
      *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | 0x80;
      if ((*(longlong *)(lVar3 + 0x10) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8), lVar3 != 0)) {
        FUN_144a78688(lVar3 + 0x70);
      }
      param_1[0x52] = param_1[0xa4];
      (**(code **)(*param_1 + 0x490))(param_1);
    }
    *(undefined1 *)(param_1 + 0x4e) = 1;
  }
LAB_147c8c351:
  if ((local_b0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8c68e FUN_147c8c68e body=469 status=ok
// SIG undefined FUN_147c8c68e(void)

undefined8 * FUN_147c8c68e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  (**(code **)(*(longlong *)(param_2 + 0x2b8) + 0x20))(param_2 + 0x2b8,&local_90);
  local_80 = local_90;
  local_78 = local_88;
  uVar5 = FUN_144b07666();
  FUN_144a78570(local_68,uVar5,0);
  puVar2 = local_90;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  if ((longlong)local_88 != 0) {
    lVar6 = 0;
    local_c8 = param_3;
    local_c0 = param_1;
    do {
      local_70 = *(undefined8 *)((longlong)puVar2 + lVar6);
      local_78 = 1;
      local_80 = &local_70;
      cVar3 = FUN_144b06fd6(local_50,&local_80);
      uVar1 = uStack_a0;
      if (cVar3 == '\0') {
        lVar7 = (longlong)(int)uStack_a0;
        uVar4 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
        if (uStack_a0._4_4_ < uVar4) {
          FUN_14075a758(&local_a8,uVar1 & 0xffffffff);
        }
        local_a8[lVar7] = *(undefined8 *)((longlong)puVar2 + lVar6);
      }
      lVar6 = lVar6 + 8;
      param_1 = local_c0;
      param_3 = local_c8;
    } while ((longlong)local_88 * 8 != lVar6);
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8(local_90);
  }
  local_90 = local_a8;
  local_88 = (int)uStack_a0;
  local_84 = uStack_a0._4_4_;
  local_b8 = local_a8;
  local_b0 = (int)uStack_a0;
  FUN_146e20610(local_50,param_1,&local_b8,param_3);
  FUN_1448635f4(local_68);
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8c864 FUN_147c8c864 body=88 status=ok
// SIG undefined FUN_147c8c864(void)

bool FUN_147c8c864(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_146e1fbba(param_1,&local_28);
    *param_2 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8c8be FUN_147c8c8be body=234 status=ok
// SIG undefined FUN_147c8c8be(void)

undefined8 * FUN_147c8c8be(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_3;
  if (param_2 == 0) {
    puVar3 = &DAT_14c846480;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  local_60 = (**(code **)(*(longlong *)(param_2 + 0x2b8) + 0x18))(param_2 + 0x2b8,&local_58);
  if (local_60 == 0) {
    puVar3 = &DAT_14c846480;
    puVar4 = param_1;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    local_50 = &local_60;
    local_48 = 1;
    uVar1 = FUN_144b07666();
    FUN_144a78570(local_40,uVar1,0);
    FUN_146e1fc90(local_28,param_1,local_60);
    FUN_1448635f4(local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8c9aa FUN_147c8c9aa body=479 status=ok
// SIG undefined FUN_147c8c9aa(void)

void FUN_147c8c9aa(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0 [3];
  undefined1 local_98 [8];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_1 != 0) {
    local_b0[0] = 0;
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x18))(param_1 + 0x2b8);
    if (lVar1 != 0) {
      local_d8 = (longlong *)0x0;
      uStack_d0 = 1;
      FUN_14075a758(&local_d8,0);
      *local_d8 = lVar1;
      local_c0 = local_d8;
      local_b8 = (undefined4)uStack_d0;
      uVar2 = FUN_144b07666();
      FUN_144a78570(local_b0,uVar2,1);
      local_f8 = *param_2;
      uStack_f4 = param_2[1];
      uStack_f0 = param_2[2];
      uStack_ec = param_2[3];
      local_e8 = *(undefined8 *)(param_2 + 4);
      local_108 = local_d8;
      local_100 = (undefined4)uStack_d0;
      local_110 = param_10;
      local_118 = param_9;
      local_120 = param_8;
      local_130 = param_7;
      local_138 = param_6;
      local_140 = param_5;
      local_128 = 1;
      local_148 = param_4;
      FUN_146e21388(local_98,&local_108,&local_f8,param_3);
      FUN_1448635f4(local_b0);
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8cb8a FUN_147c8cb8a body=25 status=ok
// SIG undefined FUN_147c8cb8a(void)

undefined8 FUN_147c8cb8a(undefined8 param_1,undefined8 param_2)

{
  FUN_144a78570(param_1,param_2,1);
  return param_1;
}



// FUNCTION 147c8cba4 FUN_147c8cba4 body=134 status=ok
// SIG undefined FUN_147c8cba4(void)

void FUN_147c8cba4(longlong param_1,ulonglong param_2,void *param_3)

{
  uint uVar1;
  void *_Dst;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (param_2 != 0) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    _Dst = (void *)FUN_147ca4cba(param_1 + 0x3d0,uVar1 >> 0x10 ^ uVar1,&local_18);
    memcpy(_Dst,param_3,0x150);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8cc3e FUN_147c8cc3e body=145 status=ok
// SIG undefined FUN_147c8cc3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147c8cc3e(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf8420) {
    FUN_144b3d300(&DAT_14caf8420);
    if (DAT_14caf8420 == -1) {
      _DAT_14caf8410 = 0x800000014aa35b30;
      _DAT_14caf8418 = FUN_145af9a3a("FPhysicsReplicationAsyncCallback",0x20);
      DAT_14caf841c = 0;
      _Init_thread_footer(&DAT_14caf8420);
    }
  }
  FUN_1446f57c6(&DAT_14caf8410,param_2);
  return param_2;
}



// FUNCTION 147c8cd98 FUN_147c8cd98 body=248 status=ok
// SIG undefined FUN_147c8cd98(void)

undefined1 (*) [16] FUN_147c8cd98(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar7 = dVar4 * 0.0 - dVar5 * 1.0;
  dVar8 = dVar5 * 0.0 - dVar6 * 0.0;
  dVar9 = dVar6 * 1.0 - dVar4 * 0.0;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  dVar3 = (dVar6 * dVar8 - dVar4 * dVar7) + *(double *)(param_1 + 600) * dVar9 + 0.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar7 * dVar5 - dVar9 * dVar6) + dVar1 * dVar8 + 1.0;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar7 * dVar1 + 0.0 + (dVar9 * dVar4 - dVar8 * dVar5);
  return param_2;
}



// FUNCTION 147c8ce90 FUN_147c8ce90 body=32 status=ok
// SIG undefined FUN_147c8ce90(void)

float FUN_147c8ce90(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 700) / *(float *)(param_1 + 0x2b0);
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 147c8ceb0 FUN_147c8ceb0 body=360 status=ok
// SIG undefined FUN_147c8ceb0(void)

void FUN_147c8ceb0(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar2;
  
  if ((*(float *)(param_1 + 700) != 0.0) || (NAN(*(float *)(param_1 + 700)))) {
    param_2[2] = *(double *)(param_1 + 0x2d0);
    dVar1 = *(double *)(param_1 + 0x2c8);
    *param_2 = *(double *)(param_1 + 0x2c0);
    param_2[1] = dVar1;
  }
  else {
    dVar6 = *(double *)(param_1 + 0x240);
    dVar7 = *(double *)(param_1 + 0x248);
    dVar8 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar2 = *(double *)(param_1 + 600);
    dVar9 = dVar6 * 0.0 - dVar7 * 1.0;
    dVar10 = dVar7 * 0.0 - dVar8 * 0.0;
    dVar11 = dVar8 * 1.0 - dVar6 * 0.0;
    dVar10 = dVar10 + dVar10;
    dVar11 = dVar11 + dVar11;
    dVar9 = dVar9 + dVar9;
    dVar5 = (double)*(float *)(param_1 + 0x2b0);
    dVar3 = *(double *)(param_1 + 0x270);
    dVar4 = *(double *)(param_1 + 0x268);
    *param_2 = ((dVar9 * dVar7 - dVar11 * dVar8) + dVar1 * dVar10 + 1.0) * dVar5 +
               *(double *)(param_1 + 0x260);
    param_2[1] = ((dVar8 * dVar10 - dVar6 * dVar9) + dVar2 * dVar11 + 0.0) * dVar5 + dVar4;
    param_2[2] = (dVar9 * dVar1 + 0.0 + (dVar11 * dVar6 - dVar10 * dVar7)) * dVar5 + dVar3;
  }
  return;
}



// FUNCTION 147c8d018 FUN_147c8d018 body=308 status=ok
// SIG undefined FUN_147c8d018(void)

double * FUN_147c8d018(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar2;
  
  dVar5 = *(double *)(param_1 + 0x240);
  dVar6 = *(double *)(param_1 + 0x248);
  dVar7 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar2 = *(double *)(param_1 + 600);
  dVar9 = dVar5 * 0.0 - dVar6 * 1.0;
  dVar10 = dVar6 * 0.0 - dVar7 * 0.0;
  dVar11 = dVar7 * 1.0 - dVar5 * 0.0;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar8 = (double)*(float *)(param_1 + 0x2b0);
  dVar3 = *(double *)(param_1 + 0x270);
  dVar4 = *(double *)(param_1 + 0x268);
  *param_2 = ((dVar9 * dVar6 - dVar11 * dVar7) + dVar1 * dVar10 + 1.0) * dVar8 +
             *(double *)(param_1 + 0x260);
  param_2[1] = ((dVar7 * dVar10 - dVar5 * dVar9) + dVar2 * dVar11 + 0.0) * dVar8 + dVar4;
  param_2[2] = (dVar9 * dVar1 + 0.0 + (dVar11 * dVar5 - dVar10 * dVar6)) * dVar8 + dVar3;
  return param_2;
}



// FUNCTION 147c8d14c FUN_147c8d14c body=472 status=ok
// SIG undefined FUN_147c8d14c(void)

void FUN_147c8d14c(longlong param_1,double *param_2,double *param_3,float param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar8 = *(double *)(param_1 + 0x240);
  dVar3 = *(double *)(param_1 + 0x248);
  dVar1 = *(double *)(param_1 + 0x250);
  dVar4 = *(double *)(param_1 + 600);
  dVar6 = dVar8 * 0.0 - dVar3 * 1.0;
  dVar9 = dVar3 * 0.0 - dVar1 * 0.0;
  dVar10 = dVar1 * 1.0 - dVar8 * 0.0;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar6 = dVar6 + dVar6;
  dVar2 = dVar6 * dVar4 + 0.0 + (dVar10 * dVar8 - dVar9 * dVar3);
  dVar7 = (double)*(float *)(param_1 + 0x2b0);
  dVar3 = (dVar6 * dVar3 - dVar10 * dVar1) + dVar4 * dVar9 + 1.0;
  dVar6 = (dVar1 * dVar9 - dVar8 * dVar6) + *(double *)(param_1 + 600) * dVar10 + 0.0;
  dVar4 = param_3[2] - (dVar2 * dVar7 + *(double *)(param_1 + 0x270));
  dVar10 = *param_3 - (dVar7 * dVar3 + *(double *)(param_1 + 0x260));
  dVar8 = param_3[1] - (dVar6 * dVar7 + *(double *)(param_1 + 0x268));
  fVar5 = (float)SQRT(dVar4 * dVar4 + dVar10 * dVar10 + dVar8 * dVar8);
  *param_5 = fVar5;
  dVar4 = (double)(-*(float *)(param_1 + 0x2a8) * fVar5 -
                  ((fVar5 - *(float *)(param_1 + 700)) / param_4) * *(float *)(param_1 + 0x2ac));
  *param_2 = dVar3 * dVar4;
  param_2[1] = dVar6 * dVar4;
  param_2[2] = dVar2 * dVar4;
  return;
}



// FUNCTION 147c8d324 FUN_147c8d324 body=505 status=ok
// SIG undefined FUN_147c8d324(void)

void FUN_147c8d324(longlong param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(float *)(param_1 + 700) != 0.0) || (NAN(*(float *)(param_1 + 700)))) {
    dVar1 = *(double *)(param_1 + 0x2c0);
    dVar5 = *(double *)(param_1 + 0x2c8);
    dVar4 = *(double *)(param_1 + 0x2d0);
  }
  else {
    dVar5 = *(double *)(param_1 + 0x240);
    dVar6 = *(double *)(param_1 + 0x248);
    dVar7 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar10 = dVar5 * 0.0 - dVar6 * 1.0;
    dVar11 = dVar6 * 0.0 - dVar7 * 0.0;
    dVar12 = dVar7 * 1.0 - dVar5 * 0.0;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar9 = (double)*(float *)(param_1 + 0x2b0);
    dVar4 = (dVar10 * dVar1 + 0.0 + (dVar12 * dVar5 - dVar11 * dVar6)) * dVar9 +
            *(double *)(param_1 + 0x270);
    dVar5 = ((dVar7 * dVar11 - dVar5 * dVar10) + *(double *)(param_1 + 600) * dVar12 + 0.0) * dVar9
            + *(double *)(param_1 + 0x268);
    dVar1 = ((dVar10 * dVar6 - dVar12 * dVar7) + dVar1 * dVar11 + 1.0) * dVar9 +
            *(double *)(param_1 + 0x260);
  }
  iVar2 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x138);
    lVar8 = 0;
    do {
      local_98 = 0;
      local_88 = dVar1;
      local_80 = dVar5;
      local_78 = dVar4;
      FUN_140d93b16(*(undefined8 *)(lVar3 + lVar8),&local_88,0,0);
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8d51e FUN_147c8d51e body=898 status=ok
// SIG undefined FUN_147c8d51e(void)

void FUN_147c8d51e(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8;
  float local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144a7e84a();
  plVar4 = *(longlong **)(param_1 + 0x120);
  if (plVar4 != (longlong *)0x0) {
    lVar11 = FUN_144a3a302();
    if (((*(int *)(lVar11 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
         lVar11 + 0x30)) && ((*(byte *)(param_1 + 0x9e) & 0x10) != 0)) {
      dVar8 = *(double *)(param_1 + 0x260);
      uStack_c0 = *(undefined8 *)(param_1 + 0x268);
      dVar1 = *(double *)(param_1 + 0x268);
      dVar2 = *(double *)(param_1 + 0x270);
      dVar7 = *(double *)(param_1 + 0x240);
      dVar9 = *(double *)(param_1 + 0x248);
      dVar10 = *(double *)(param_1 + 0x250);
      dVar3 = *(double *)(param_1 + 600);
      dVar13 = dVar7 * 0.0 - dVar9 * 1.0;
      dVar14 = dVar9 * 0.0 - dVar10 * 0.0;
      dVar15 = dVar10 * 1.0 - dVar7 * 0.0;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      dVar5 = (double)*(float *)(param_1 + 0x2b0);
      dVar6 = (dVar13 * dVar3 + 0.0 + (dVar15 * dVar7 - dVar14 * dVar9)) * dVar5 + dVar2;
      dVar7 = ((dVar10 * dVar14 - dVar7 * dVar13) + *(double *)(param_1 + 600) * dVar15 + 0.0) *
              dVar5 + dVar1;
      dVar5 = ((dVar13 * dVar9 - dVar15 * dVar10) + dVar3 * dVar14 + 1.0) * dVar5 + dVar8;
      local_e4 = 1.0;
      local_e0 = dVar5;
      local_d8 = dVar7;
      local_d0 = dVar6;
      local_c8 = dVar8;
      local_b8 = dVar2;
      lVar11 = FUN_143644976(param_1,&local_c8,&local_e0,&local_e4);
      dVar3 = (double)local_e4;
      *(double *)(param_1 + 0x2c0) = (dVar5 - dVar8) * dVar3 + dVar8;
      *(double *)(param_1 + 0x2c8) = (dVar7 - dVar1) * dVar3 + dVar1;
      *(double *)(param_1 + 0x2d0) = (dVar6 - dVar2) * dVar3 + dVar2;
      if (lVar11 != 0) {
        fVar12 = (float)(**(code **)(*plVar4 + 0x8d8))(plVar4);
        local_138 = &local_e8;
        FUN_147c8d14c(param_1,&local_100,param_1 + 0x2c0,param_2);
        local_108 = local_b8;
        local_118 = local_c8;
        uStack_110 = uStack_c0;
        local_130 = (double)fVar12;
        local_120 = local_f0 * local_130;
        local_128 = local_f8 * local_130;
        local_130 = local_130 * local_100;
        (**(code **)(*plVar4 + 0x6d8))
                  (plVar4,&local_130,&local_118,*(undefined8 *)(param_1 + 0x128));
        *(undefined4 *)(param_1 + 700) = local_e8;
      }
      FUN_147c8d324(param_1);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8d8a6 FUN_147c8d8a6 body=500 status=ok
// SIG undefined FUN_147c8d8a6(void)

void FUN_147c8d8a6(longlong param_1)

{
  double dVar1;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  double dVar2;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144a7e84a();
  if (((*(byte *)(param_1 + 0x9e) & 0x10) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x120), plVar3 != (longlong *)0x0)) {
    dVar5 = *(double *)(param_1 + 0x240);
    dVar6 = *(double *)(param_1 + 0x248);
    dVar7 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar2 = *(double *)(param_1 + 600);
    dVar4 = (double)*(float *)(param_1 + 0x2a8);
    lVar8 = FUN_144a3a302();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      dVar9 = dVar5 * 0.0 - dVar6 * -1.0;
      dVar10 = dVar6 * 0.0 - dVar7 * 0.0;
      dVar11 = dVar7 * -1.0 - dVar5 * 0.0;
      dVar10 = dVar10 + dVar10;
      dVar11 = dVar11 + dVar11;
      dVar9 = dVar9 + dVar9;
      local_90 = (dVar9 * dVar1 + 0.0 + (dVar11 * dVar5 - dVar10 * dVar6)) * dVar4;
      local_98 = ((dVar7 * dVar10 - dVar5 * dVar9) + dVar2 * dVar11 + 0.0) * dVar4;
      local_a0 = ((dVar9 * dVar6 - dVar11 * dVar7) + dVar1 * dVar10 + -1.0) * dVar4;
      local_88 = *(undefined8 *)(param_1 + 0x260);
      uStack_80 = *(undefined8 *)(param_1 + 0x268);
      local_78 = *(undefined8 *)(param_1 + 0x270);
      (**(code **)(*plVar3 + 0x6d8))(plVar3,&local_a0,&local_88,0);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8da9c FUN_147c8da9c body=32 status=ok
// SIG undefined FUN_147c8da9c(void)

undefined8 FUN_147c8da9c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStartPhysicsTickFunction");
  return param_2;
}



// FUNCTION 147c8dabc FUN_147c8dabc body=38 status=ok
// SIG undefined FUN_147c8dabc(void)

undefined8 FUN_147c8dabc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"StartPhysicsTick",1);
  return param_2;
}



// FUNCTION 147c8dae2 FUN_147c8dae2 body=32 status=ok
// SIG undefined FUN_147c8dae2(void)

undefined8 FUN_147c8dae2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FEndPhysicsTickFunction");
  return param_2;
}



// FUNCTION 147c8db02 FUN_147c8db02 body=38 status=ok
// SIG undefined FUN_147c8db02(void)

undefined8 FUN_147c8db02(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"EndPhysicsTick",1);
  return param_2;
}



// FUNCTION 147c8db28 FUN_147c8db28 body=155 status=ok
// SIG undefined FUN_147c8db28(void)

void FUN_147c8db28(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5e0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8dbde FUN_147c8dbde body=155 status=ok
// SIG undefined FUN_147c8dbde(void)

void FUN_147c8dbde(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5e8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8dc8e FUN_147c8dc8e body=49 status=ok
// SIG undefined FUN_147c8dc8e(void)

void FUN_147c8dc8e(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_141302b5a(param_2);
  if (iVar1 == 0x20) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c8dcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5e0))(param_1,iVar1,*(code **)(*param_1 + 0x5e0));
  return;
}



// FUNCTION 147c8dcc0 FUN_147c8dcc0 body=131 status=ok
// SIG undefined FUN_147c8dcc0(void)

void FUN_147c8dcc0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_147ca593e(param_2);
  }
  local_20 = FUN_1406c4844();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_147ca585c(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8dd44 FUN_147c8dd44 body=75 status=ok
// SIG undefined FUN_147c8dd44(void)

void FUN_147c8dd44(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1401c3ca6();
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c8)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_141302a0a(*(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + lVar2));
      uVar1 = (uint)uVar3 | 1 << (uVar1 & 0x1f);
      uVar3 = (ulonglong)uVar1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x2c8));
    uVar3 = (ulonglong)uVar1;
  }
  *(ulonglong *)(param_1 + 0x2d0) = uVar3;
  return;
}



// FUNCTION 147c8dd90 FUN_147c8dd90 body=75 status=ok
// SIG undefined FUN_147c8dd90(void)

void FUN_147c8dd90(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_140136774();
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c8)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_141302a0a(*(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + lVar2));
      uVar1 = (uint)uVar3 | 1 << (uVar1 & 0x1f);
      uVar3 = (ulonglong)uVar1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x2c8));
    uVar3 = (ulonglong)uVar1;
  }
  *(ulonglong *)(param_1 + 0x2d0) = uVar3;
  return;
}



// FUNCTION 147c8dddc FUN_147c8dddc body=134 status=ok
// SIG undefined FUN_147c8dddc(void)

void FUN_147c8dddc(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_29;
  local_29 = param_2;
  FUN_147ca5dc2(param_1 + 0x2c0);
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c8)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_141302a0a(*(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + lVar2));
      uVar1 = (uint)uVar3 | 1 << (uVar1 & 0x1f);
      uVar3 = (ulonglong)uVar1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x2c8));
    uVar3 = (ulonglong)uVar1;
  }
  *(ulonglong *)(param_1 + 0x2d0) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8dec8 FUN_147c8dec8 body=306 status=ok
// SIG undefined FUN_147c8dec8(void)

void FUN_147c8dec8(double param_1,double param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar2 = param_1 * (double)param_3 - param_2 * param_2;
  FUN_140056680(local_80,
                L"Spring configuration is invalid! Please make sure no two springs are at the same location."
               );
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (1e-10 < ABS(dVar2)) {
    dVar1 = *param_4;
    dVar2 = 1.0 / dVar2;
    *param_4 = (double)param_3 * dVar2 * dVar1 + -param_2 * dVar2 * param_4[1];
    param_4[1] = -param_2 * dVar2 * dVar1 + dVar2 * param_1 * param_4[1];
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8dffc FUN_147c8dffc body=2439 status=ok
// SIG undefined FUN_147c8dffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147c8dffc(longlong *param_1,float param_2,longlong *param_3,void **param_4)

{
  float fVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  void *pvVar10;
  void *pvVar11;
  void *_Src;
  int iVar12;
  bool bVar13;
  ulonglong unaff_RBP;
  undefined7 uVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_198 [40];
  longlong *local_170;
  void *local_168;
  void *local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  void *local_118;
  int local_110;
  void *local_108;
  double local_100;
  undefined1 *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar3 = (int)param_1[1];
  local_170 = param_1;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
    FUN_14482f6fa(param_3,iVar3);
  }
  FUN_140056680(&local_108,L"Must have at least one spring to compute sprung masses.");
  pvVar10 = local_108;
  if (((param_4 != (void **)0x0) && (&local_108 != param_4)) && (iVar3 == 0)) {
    iVar15 = local_100._0_4_;
    lVar16 = (longlong)local_100._0_4_;
    *(int *)(param_4 + 1) = local_100._0_4_;
    if (local_100._0_4_ == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_4,(ulonglong)local_100 & 0xffffffff);
      if (iVar15 != 0) {
        memcpy(*param_4,pvVar10,lVar16 * 2);
      }
    }
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (iVar3 != 0) {
    FUN_140056680(&local_108,L"Total mass must be greater than zero to compute sprung masses.");
    pvVar10 = local_108;
    if (((param_4 != (void **)0x0) && (param_2 <= 1e-08)) && (&local_108 != param_4)) {
      iVar15 = local_100._0_4_;
      lVar16 = (longlong)local_100._0_4_;
      *(int *)(param_4 + 1) = local_100._0_4_;
      if (local_100._0_4_ == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_4,(ulonglong)local_100 & 0xffffffff);
        if (iVar15 != 0) {
          memcpy(*param_4,pvVar10,lVar16 * 2);
        }
      }
    }
    if (local_108 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (1e-08 < param_2) {
      uVar14 = (undefined7)(unaff_RBP >> 8);
      if (iVar3 == 2) {
        pdVar4 = (double *)*local_170;
        dVar6 = pdVar4[3] - *pdVar4;
        dVar19 = pdVar4[4] - pdVar4[1];
        dVar21 = SQRT(dVar6 * dVar6 + dVar19 * dVar19);
        if (9.99999993922529e-09 < dVar21) {
          dVar21 = 1.0 / dVar21;
          *(float *)*param_3 =
               (float)((double)-param_2 * (dVar6 * dVar21 * *pdVar4 + pdVar4[1] * dVar19 * dVar21) *
                      dVar21);
          ((float *)*param_3)[1] = param_2 - *(float *)*param_3;
          FUN_140056680(&local_108,
                        L"Spring configuration is invalid! Please make sure the center of mass is located between the springs."
                       );
          pvVar10 = local_108;
          fVar1 = *(float *)*param_3;
          if (((param_4 != (void **)0x0) && (&local_108 != param_4)) && (fVar1 < 0.0)) {
            iVar3 = local_100._0_4_;
            lVar16 = (longlong)local_100._0_4_;
            *(int *)(param_4 + 1) = local_100._0_4_;
            if (local_100._0_4_ == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
              *(undefined4 *)((longlong)param_4 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(param_4,(ulonglong)local_100 & 0xffffffff);
              if (iVar3 != 0) {
                memcpy(*param_4,pvVar10,lVar16 * 2);
              }
            }
          }
          if (fVar1 < 0.0) {
            unaff_RBP = 0;
          }
          else {
            FUN_140056680(&local_118,
                          L"Spring configuration is invalid! Please make sure the center of mass is located between the springs."
                         );
            pvVar10 = local_118;
            bVar17 = 0.0 <= *(float *)(*param_3 + 4);
            unaff_RBP = CONCAT71(uVar14,bVar17);
            if ((&local_118 != param_4 && param_4 != (void **)0x0) && !bVar17) {
              *(int *)(param_4 + 1) = local_110;
              if (local_110 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
                *(undefined4 *)((longlong)param_4 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(param_4,local_110);
                if (local_110 != 0) {
                  memcpy(*param_4,pvVar10,(longlong)local_110 * 2);
                }
              }
              unaff_RBP = 0;
            }
            if (local_118 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          if (local_108 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_147c8e811;
        }
        param_2 = param_2 * 0.5;
        *(float *)(*param_3 + 4) = param_2;
      }
      else if (iVar3 != 1) {
        dVar9 = (double)iVar3;
        pdVar4 = (double *)*local_170;
        iVar15 = 0;
        bVar17 = true;
        dVar6 = 0.0;
        dVar19 = 0.0;
        dVar21 = 0.0;
        dVar7 = 0.0;
        dVar8 = 0.0;
        bVar13 = true;
        do {
          dVar20 = pdVar4[(longlong)iVar15 * 3];
          dVar2 = pdVar4[(longlong)iVar15 * 3 + 1];
          dVar6 = dVar6 + dVar20;
          dVar19 = dVar19 + dVar2;
          dVar21 = dVar21 + dVar20 * dVar20;
          dVar7 = dVar7 + dVar2 * dVar2;
          dVar8 = dVar8 + dVar20 * dVar2;
          bVar17 = (bool)(bVar17 & ABS(dVar20 - *pdVar4) <= 0.1);
          bVar13 = (bool)(bVar13 & ABS(dVar2 - pdVar4[1]) <= 0.1);
          iVar15 = iVar15 + 1;
        } while (iVar3 != iVar15);
        dVar2 = (1.0 / dVar9) * (double)param_2;
        dVar18 = dVar2 + dVar2;
        dVar20 = dVar18 * dVar9 - (double)(param_2 + param_2);
        if (bVar13) {
          local_f8 = &DAT_200000002;
          local_108 = (void *)(dVar18 * dVar6);
          local_100 = dVar20;
          FUN_147c8dec8(SUB84(dVar21,0),SUB84(dVar6,0),iVar3,&local_108);
          pvVar11 = (void *)0x0;
          pvVar10 = local_108;
          dVar6 = local_100;
        }
        else if (bVar17) {
          local_f8 = &DAT_200000002;
          local_108 = (void *)(dVar18 * dVar19);
          local_100 = dVar20;
          FUN_147c8dec8(SUB84(dVar7,0),SUB84(dVar19,0),iVar3,&local_108);
          pvVar10 = (void *)0x0;
          pvVar11 = local_108;
          dVar6 = local_100;
        }
        else {
          local_168 = (void *)(dVar18 * dVar6);
          local_160 = (void *)(dVar18 * dVar19);
          local_158 = dVar20;
          FUN_140056680(&local_108,
                        L"Spring configuration is invalid! Please make sure no two springs are at the same location."
                       );
          pvVar10 = local_108;
          uVar5 = DAT_149931e80;
          dVar20 = (double)((ulonglong)dVar7 ^ uVar5) * dVar6;
          local_138._8_4_ = DAT_149931e80._8_4_;
          local_138._0_8_ = dVar20;
          local_138._12_4_ = DAT_149931e80._12_4_;
          dVar18 = (double)((ulonglong)dVar21 ^ uVar5) * dVar19;
          local_128._8_4_ = DAT_149931e80._8_4_;
          local_128._0_8_ = dVar18;
          local_128._12_4_ = DAT_149931e80._12_4_;
          local_148 = dVar8 * (double)(uVar5 ^ (ulonglong)dVar8);
          uStack_140 = 0;
          dVar20 = local_148 * dVar9 +
                   dVar18 * dVar19 +
                   dVar20 * dVar6 + dVar21 * dVar7 * dVar9 + (dVar8 + dVar8) * dVar6 * dVar19;
          dVar18 = ABS(dVar20);
          local_150 = dVar9;
          if (((param_4 != (void **)0x0) && (&local_108 != param_4)) && (dVar18 <= 1e-10)) {
            iVar15 = local_100._0_4_;
            lVar16 = (longlong)local_100._0_4_;
            *(int *)(param_4 + 1) = local_100._0_4_;
            if (local_100._0_4_ == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
              *(undefined4 *)((longlong)param_4 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(param_4,(ulonglong)local_100 & 0xffffffff);
              if (iVar15 != 0) {
                memcpy(*param_4,pvVar10,lVar16 * 2);
              }
            }
          }
          if (local_108 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (dVar18 <= 1e-10) goto LAB_147c8e80f;
          dVar20 = 1.0 / dVar20;
          dVar9 = (dVar6 * dVar19 + (double)(uVar5 ^ (ulonglong)dVar8) * local_150) * dVar20;
          dVar18 = (dVar19 * dVar8 + (double)local_138._0_8_) * dVar20;
          dVar8 = (dVar6 * dVar8 + (double)local_128._0_8_) * dVar20;
          pvVar10 = (void *)(dVar18 * local_158 +
                            (dVar7 * local_150 - dVar19 * dVar19) * dVar20 * (double)local_168 +
                            (double)local_160 * dVar9);
          pvVar11 = (void *)(dVar8 * local_158 +
                            dVar9 * (double)local_168 +
                            (dVar21 * local_150 - dVar6 * dVar6) * dVar20 * (double)local_160);
          dVar6 = (dVar21 * dVar7 + local_148) * dVar20 * local_158 +
                  dVar18 * (double)local_168 + (double)local_160 * dVar8;
        }
        iVar15 = 0;
        do {
          lVar16 = (longlong)iVar15;
          *(float *)(*param_3 + lVar16 * 4) =
               (float)((*(double *)(*local_170 + lVar16 * 0x18) * (double)pvVar10 +
                        *(double *)(*local_170 + 8 + lVar16 * 0x18) * (double)pvVar11 + dVar6) *
                       -0.5 + dVar2);
          FUN_140056680(&local_108,
                        L"Spring configuration is invalid! Please make sure the center of mass is located inside the area covered by the springs."
                       );
          _Src = local_108;
          fVar1 = *(float *)(*param_3 + lVar16 * 4);
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),0.0 <= fVar1);
          if (((param_4 != (void **)0x0) && (&local_108 != param_4)) && (fVar1 < 0.0)) {
            iVar12 = local_100._0_4_;
            lVar16 = (longlong)local_100._0_4_;
            *(int *)(param_4 + 1) = local_100._0_4_;
            if (local_100._0_4_ == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
              *(undefined4 *)((longlong)param_4 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(param_4,(ulonglong)local_100 & 0xffffffff);
              if (iVar12 != 0) {
                memcpy(*param_4,_Src,lVar16 * 2);
              }
            }
          }
          if (local_108 != (void *)0x0) {
            FUN_1400020a8();
          }
        } while ((0.0 <= fVar1) && (bVar17 = iVar3 + -1 != iVar15, iVar15 = iVar15 + 1, bVar17));
        goto LAB_147c8e811;
      }
      *(float *)*param_3 = param_2;
      unaff_RBP = CONCAT71(uVar14,1);
      goto LAB_147c8e811;
    }
  }
LAB_147c8e80f:
  unaff_RBP = 0;
LAB_147c8e811:
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147c8e986 FUN_147c8e986 body=239 status=ok
// SIG undefined FUN_147c8e986(void)

undefined4
FUN_147c8e986(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = (int)param_1[1];
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_14051b394(local_58,iVar5,1);
  if (0 < (longlong)iVar5) {
    lVar8 = 0;
    do {
      lVar6 = *param_1;
      dVar1 = *(double *)(lVar6 + 0x10 + lVar8);
      dVar2 = param_2[2];
      dVar3 = *(double *)(lVar6 + 8 + lVar8);
      dVar4 = param_2[1];
      *(double *)(local_58[0] + lVar8) = *(double *)(lVar6 + lVar8) - *param_2;
      *(double *)(local_58[0] + 8 + lVar8) = dVar3 - dVar4;
      *(double *)(local_58[0] + 0x10 + lVar8) = dVar1 - dVar2;
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar5 * 0x18 != lVar8);
  }
  uVar7 = FUN_147c8dffc(local_58,param_3,param_4,param_5);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8ea7a FUN_147c8ea7a body=310 status=ok
// SIG undefined FUN_147c8ea7a(void)

void FUN_147c8ea7a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147c8ebb2(local_28,puVar3,local_41);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8ebb2 FUN_147c8ebb2 body=535 status=ok
// SIG undefined FUN_147c8ebb2(void)

undefined4 FUN_147c8ebb2(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_288 [32];
  undefined4 **local_268;
  undefined4 *local_258;
  undefined8 uStack_250;
  longlong local_248 [11];
  ulonglong local_1f0 [20];
  undefined1 local_150 [16];
  undefined1 local_140 [176];
  undefined1 local_90 [64];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  uVar3 = 0;
  if (lVar2 != 0) {
    memset(local_150,0,0x100);
    FUN_1447a8a24(local_150,param_2,1);
    local_1f0[0] = 0;
    FUN_147c911de(local_140,local_1f0);
    local_1f0[0] = local_1f0[0] & 0xffffffff00000000;
    FUN_1448156a8(local_90,local_1f0,1);
    local_258 = (undefined4 *)0x0;
    uStack_250 = 0;
    local_1f0[0] = local_1f0[0] & 0xffffffff00000000;
    FUN_1448156a8(&local_258,local_1f0,1);
    local_248[4] = 0;
    local_248[7] = 0;
    local_248[8] = 0;
    local_248[9] = 0;
    local_248[2] = 0;
    local_248[3] = 0;
    local_248[0] = 0;
    local_248[1] = 0;
    local_248[5] = 0x8000000000;
    local_248[6] = 0xffffffff;
    FUN_1407225a4(local_1f0,local_150,local_248,*(undefined8 *)(lVar2 + 0x6d0));
    local_248[9] = local_248[9] & 0xffffffff00000000;
    if (local_248[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_248);
    FUN_147c9022d(local_248,1);
    uVar1 = *(undefined4 *)(local_248[0] + (ulonglong)param_3 * 4);
    if (local_248[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
    if ((*(longlong *)(lVar2 + 0x288) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x288) + 0x368), lVar2 != 0)) {
      local_268 = &local_258;
      FUN_14364b2c3(lVar2 + 0xf0,uVar1,local_1f0,local_90);
      uVar3 = *local_258;
    }
    FUN_1402a0358(local_1f0);
    if (local_258 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1408bc892(local_150);
  }
  if ((local_50 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8edca FUN_147c8edca body=312 status=ok
// SIG undefined FUN_147c8edca(void)

void FUN_147c8edca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147c8ef04(local_28,puVar2,local_41);
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8ef04 FUN_147c8ef04 body=540 status=ok
// SIG undefined FUN_147c8ef04(void)

undefined4 FUN_147c8ef04(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_288 [32];
  undefined4 **local_268;
  undefined4 *local_258;
  undefined8 uStack_250;
  longlong local_248 [11];
  ulonglong local_1f0 [20];
  undefined1 local_150 [16];
  undefined1 local_140 [144];
  undefined1 local_b0 [96];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  uVar3 = 0;
  if (lVar2 != 0) {
    memset(local_150,0,0x100);
    FUN_1447a8a24(local_150,param_2,1);
    local_1f0[0] = 0;
    FUN_147c911de(local_140,local_1f0);
    local_1f0[0] = local_1f0[0] & 0xffffffff00000000;
    FUN_1448158c6(local_b0,local_1f0,1);
    local_258 = (undefined4 *)0x0;
    uStack_250 = 0;
    local_1f0[0] = local_1f0[0] & 0xffffffff00000000;
    FUN_1448158c6(&local_258,local_1f0,1);
    local_248[4] = 0;
    local_248[7] = 0;
    local_248[8] = 0;
    local_248[9] = 0;
    local_248[2] = 0;
    local_248[3] = 0;
    local_248[0] = 0;
    local_248[1] = 0;
    local_248[5] = 0x8000000000;
    local_248[6] = 0xffffffff;
    FUN_1407225a4(local_1f0,local_150,local_248,*(undefined8 *)(lVar2 + 0x6d0));
    local_248[9] = local_248[9] & 0xffffffff00000000;
    if (local_248[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_248);
    FUN_147c9022d(local_248,1);
    uVar1 = *(undefined4 *)(local_248[0] + (ulonglong)param_3 * 4);
    if (local_248[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
    if ((*(longlong *)(lVar2 + 0x288) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x288) + 0x368), lVar2 != 0)) {
      local_268 = &local_258;
      FUN_14364b13d(lVar2 + 0xf0,uVar1,local_1f0,local_b0);
      uVar3 = *local_258;
    }
    FUN_1402a0358(local_1f0);
    if (local_258 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1408bc892(local_150);
  }
  if ((local_50 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8f122 FUN_147c8f122 body=330 status=ok
// SIG undefined FUN_147c8f122(void)

void FUN_147c8f122(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c8f26e(&local_60,local_28,puVar2,local_41);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8f26e FUN_147c8f26e body=587 status=ok
// SIG undefined FUN_147c8f26e(void)

undefined4 *
FUN_147c8f26e(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_288 [32];
  undefined4 **local_268;
  undefined4 *local_258;
  undefined8 uStack_250;
  longlong local_248 [11];
  undefined8 local_1f0 [20];
  undefined1 local_150 [16];
  undefined1 local_140 [112];
  undefined1 local_d0 [128];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar4 != 0) {
    memset(local_150,0,0x100);
    FUN_1447a8a24(local_150,param_3,1);
    local_1f0[0] = 0;
    FUN_147c911de(local_140);
    FUN_1447a8a24(local_d0,&DAT_14c8464e0,1);
    local_258 = (undefined4 *)0x0;
    uStack_250 = 0;
    FUN_1447a8a24(&local_258,&DAT_14c8464e0,1);
    local_248[4] = 0;
    local_248[7] = 0;
    local_248[8] = 0;
    local_248[9] = 0;
    local_248[2] = 0;
    local_248[3] = 0;
    local_248[0] = 0;
    local_248[1] = 0;
    local_248[5] = 0x8000000000;
    local_248[6] = 0xffffffff;
    FUN_1407225a4(local_1f0,local_150,local_248,*(undefined8 *)(lVar4 + 0x6d0));
    local_248[9] = local_248[9] & 0xffffffff00000000;
    if (local_248[8] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_248);
    FUN_147c9022d(local_248,0);
    uVar1 = *(undefined4 *)(local_248[0] + (param_4 & 0xffffffff) * 4);
    if (local_248[0] != 0) {
      FUN_1400020a8();
    }
    if ((*(longlong *)(lVar4 + 0x288) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x288) + 0x368), lVar4 != 0)) {
      local_268 = &local_258;
      FUN_14364af3c(lVar4 + 0xf0,uVar1,local_1f0,local_d0);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(local_258 + 4);
      uVar1 = local_258[1];
      uVar2 = local_258[2];
      uVar3 = local_258[3];
      *param_1 = *local_258;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      FUN_1402a0358(local_1f0);
      if (local_258 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1408bc892(local_150);
      goto LAB_147c8f2cf;
    }
    FUN_1402a0358(local_1f0);
    if (local_258 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1408bc892(local_150);
  }
  *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_1 = (undefined4)DAT_14c8464e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
LAB_147c8f2cf:
  if ((local_50 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8f4be FUN_147c8f4be body=42 status=ok
// SIG undefined FUN_147c8f4be(void)

void FUN_147c8f4be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x140);
  return;
}



// FUNCTION 147c8f508 FUN_147c8f508 body=39 status=ok
// SIG undefined FUN_147c8f508(void)

void FUN_147c8f508(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x140,0x10);
  FUN_147ca388c(uVar1,param_1);
  return;
}



// FUNCTION 147c8f530 FUN_147c8f530 body=85 status=ok
// SIG undefined FUN_147c8f530(void)

longlong FUN_147c8f530(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x140,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x12e) = 0;
  *(undefined8 *)(lVar1 + 0x136) = 0;
  return lVar1;
}



// FUNCTION 147c8f586 FUN_147c8f586 body=42 status=ok
// SIG undefined FUN_147c8f586(void)

void FUN_147c8f586(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 147c8f5d0 FUN_147c8f5d0 body=39 status=ok
// SIG undefined FUN_147c8f5d0(void)

void FUN_147c8f5d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147ca3b3c(uVar1,param_1);
  return;
}



// FUNCTION 147c8f5f8 FUN_147c8f5f8 body=71 status=ok
// SIG undefined FUN_147c8f5f8(void)

longlong FUN_147c8f5f8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x10a) = 0;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  return lVar1;
}



// FUNCTION 147c8f640 FUN_147c8f640 body=760 status=ok
// SIG undefined FUN_147c8f640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_147c8f640(undefined8 *param_1,undefined4 param_2,undefined8 param_3,void *param_4,void *param_5,
             void *param_6,void *param_7,void *param_8,undefined1 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a7f8ec();
  *param_1 = &PTR_FUN_14aa3a5a0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x1be] = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1bc] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1bd] = uVar3;
  param_1[0x1bf] = 0x461c4000;
  param_1[0x1c0] = 0x200000004;
  *(undefined4 *)(param_1 + 0x1c1) = 0x40;
  param_1[0x1c4] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1c2) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xe14) = uVar1;
  *(undefined4 *)(param_1 + 0x1c3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xe1c) = uVar6;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  FUN_147c8f93a(param_1 + 0x39,param_3);
  memcpy(param_1 + 0x3c,param_4,0x200);
  memcpy(param_1 + 0x7c,param_5,0x200);
  memcpy(param_1 + 0xbc,param_6,0x200);
  memcpy(param_1 + 0xfc,param_7,0x200);
  memcpy(param_1 + 0x17c,param_8,0x200);
  *(undefined1 *)((longlong)param_1 + 0x1064) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x1065) = 0;
  *(int *)((longlong)param_1 + 0xe04) = (int)_DAT_14c7618b4;
  iVar4 = DAT_14c7618b0;
  *(int *)(param_1 + 0x1c0) = DAT_14c7618b0;
  *(undefined4 *)(param_1 + 0x1bf) = DAT_14c7618ac;
  *(undefined4 *)(param_1 + 0x1c1) = DAT_14c7618b8;
  iVar2 = iVar4 * 0x14;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_1448156a8(param_1 + 0x1c5,&local_78,iVar4 * 0x14 + 1);
  local_78 = 0;
  uStack_70 = 0;
  FUN_147c8f992(param_1 + 0x1c7,&local_78,iVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x1c1);
  local_78 = CONCAT44(uVar1,uVar1);
  uStack_70 = CONCAT44(uVar1,uVar1);
  FUN_147c8f992(param_1 + 0x1c9,&local_78,iVar2);
  lVar7 = 0xe60;
  do {
    *(undefined4 *)((longlong)param_1 + lVar7) = 0;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x1060);
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c8f93a FUN_147c8f93a body=88 status=ok
// SIG undefined FUN_147c8f93a(void)

undefined8 * FUN_147c8f93a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474ab05a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147c8f992 FUN_147c8f992 body=118 status=ok
// SIG undefined FUN_147c8f992(void)

void FUN_147c8f992(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_146eb4232(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_146bfaaf6(param_1,iVar2);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
  }
  return;
}



// FUNCTION 147c8fa0a FUN_147c8fa0a body=131 status=ok
// SIG undefined FUN_147c8fa0a(void)

void FUN_147c8fa0a(longlong param_1)

{
  FUN_1407f1458(param_1 + 0x40);
  FUN_1407f1458(param_1 + 0x70);
  FUN_1407f1458(param_1 + 0xa0);
  FUN_1407f1458(param_1 + 0x160);
  FUN_1407f1458(param_1 + 400);
  if (*(char *)(param_1 + 0x1064) == '\x01') {
    FUN_1407f1458(param_1 + 0x10);
    FUN_1407f1458(param_1 + 0xd0);
    FUN_1407f1458(param_1 + 0x100);
    FUN_1407f1458(param_1 + 0x130);
    return;
  }
  return;
}



// FUNCTION 147c8fa8e FUN_147c8fa8e body=1406 status=ok
// SIG undefined FUN_147c8fa8e(void)

void FUN_147c8fa8e(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  double dVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  uint *puVar21;
  longlong lVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_148 [36];
  uint local_124;
  ulonglong local_120;
  uint *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar13 = *(uint *)(param_1 + 0xe00);
  local_120 = (ulonglong)uVar13;
  local_124 = uVar13 * 0x14 + 1;
  local_108 = local_108 & 0xffffffff00000000;
  FUN_1448156a8((longlong *)(param_1 + 0xe28),&local_108);
  local_108 = 0;
  uStack_100 = 0;
  FUN_147c8f992(param_1 + 0xe38,&local_108,uVar13 * 0x14);
  uVar7 = *(undefined4 *)(param_1 + 0xe08);
  local_108 = CONCAT44(uVar7,uVar7);
  uStack_100 = CONCAT44(uVar7,uVar7);
  fVar23 = (float)FUN_147c8f992(param_1 + 0xe48,&local_108,uVar13 * 0x14);
  if (DAT_14c7618bc == 1) {
    *(undefined4 *)(param_1 + 0xdfc) = 0;
    if ((longlong)*(int *)(param_1 + 0x1d0) != 0) {
      puVar21 = *(uint **)(param_1 + 0x1c8);
      puVar20 = puVar21 + *(int *)(param_1 + 0x1d0);
      local_110 = param_1 + 0x9e0;
      uVar13 = 0;
      local_118 = puVar20;
      do {
        uVar15 = *puVar21;
        if (*(int *)(param_4 + (ulonglong)uVar15 * 4) <
            *(int *)(param_4 + (ulonglong)(uVar15 + 1) * 4)) {
          iVar8 = *(int *)(param_1 + 0xe00);
          if (0 < iVar8) {
            lVar22 = 0;
            do {
              fVar3 = *(float *)(param_1 + 0xdf8);
              fVar23 = powf((float)*(int *)(param_1 + 0xe04),(float)(((int)lVar22 - iVar8) + 1));
              iVar8 = *(int *)(param_1 + 0xe08);
              dVar26 = *(double *)(param_1 + 0xdf0);
              dVar24 = *(double *)(param_1 + 0xde0);
              dVar25 = *(double *)(param_1 + 0xde8);
              lVar17 = *param_2;
              lVar11 = (longlong)(int)*puVar21 * 0x18;
              lVar19 = *param_3;
              lVar14 = (longlong)*(int *)(param_1 + 0xe00) * (longlong)*(int *)(param_1 + 0xdfc) +
                       lVar22;
              lVar16 = lVar14 * 0x10;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xe38) + lVar16);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xe48) + lVar16);
              *puVar1 = 0;
              puVar1[1] = 0;
              dVar4 = *(double *)(lVar19 + lVar11);
              dVar27 = *(double *)(lVar17 + lVar11);
              if (dVar27 < dVar4) {
                lVar17 = lVar17 + lVar11;
                lVar19 = lVar19 + lVar11;
                dVar5 = *(double *)(lVar19 + 8);
                dVar6 = *(double *)(lVar17 + 8);
                if (dVar6 < dVar5) {
                  dVar28 = *(double *)(lVar19 + 0x10);
                  dVar29 = *(double *)(lVar17 + 0x10);
                  if (dVar29 < dVar28) {
                    dVar10 = (double)(fVar3 * fVar23);
                    dVar9 = dVar24 - dVar10;
                    fVar23 = SUB84(dVar9,0);
                    dVar24 = dVar24 + dVar10;
                    dVar12 = dVar9;
                    if (dVar9 <= dVar27) {
                      dVar12 = dVar27;
                    }
                    if (dVar4 <= dVar24) {
                      dVar24 = dVar4;
                    }
                    if (dVar12 - dVar9 < dVar24 - dVar9) {
                      dVar4 = dVar25 - dVar10;
                      fVar23 = SUB84(dVar4,0);
                      dVar25 = dVar25 + dVar10;
                      dVar27 = dVar4;
                      if (dVar4 <= dVar6) {
                        dVar27 = dVar6;
                      }
                      if (dVar5 <= dVar25) {
                        dVar25 = dVar5;
                      }
                      if (dVar27 - dVar4 < dVar25 - dVar4) {
                        dVar5 = dVar26 - dVar10;
                        fVar23 = SUB84(dVar5,0);
                        dVar26 = dVar26 + dVar10;
                        dVar6 = dVar5;
                        if (dVar5 <= dVar29) {
                          dVar6 = dVar29;
                        }
                        if (dVar28 <= dVar26) {
                          dVar26 = dVar28;
                        }
                        if (dVar6 - dVar5 < dVar26 - dVar5) {
                          dVar28 = (double)(float)((dVar10 + dVar10) / ((double)iVar8 + -1.0));
                          dVar6 = (dVar6 - dVar5) / dVar28 + -9.999999747378752e-05;
                          dVar29 = (dVar27 - dVar4) / dVar28 + -9.999999747378752e-05;
                          dVar27 = (dVar12 - dVar9) / dVar28 + -9.999999747378752e-05;
                          lVar17 = *(longlong *)(param_1 + 0xe38);
                          *(int *)(lVar17 + lVar16) =
                               -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar27 + dVar27)) >> 1);
                          *(int *)(lVar17 + 4 + lVar16) =
                               -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar29 + dVar29)) >> 1);
                          *(int *)(lVar17 + 8 + lVar16) =
                               -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar6 + dVar6)) >> 1);
                          *(undefined4 *)(lVar17 + 0xc + lVar16) = 0;
                          dVar27 = (dVar26 - dVar5) / dVar28 + 9.999999747378752e-05;
                          dVar25 = (dVar25 - dVar4) / dVar28 + 9.999999747378752e-05;
                          dVar26 = (dVar24 - dVar9) / dVar28 + 9.999999747378752e-05;
                          lVar17 = *(longlong *)(param_1 + 0xe48);
                          *(int *)(lVar17 + lVar16) =
                               -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar26 + dVar26)) >> 1);
                          *(int *)(lVar17 + 4 + lVar16) =
                               -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar25 + dVar25)) >> 1);
                          *(int *)(lVar17 + 8 + lVar16) =
                               -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar27 + dVar27)) >> 1);
                          *(undefined4 *)(lVar17 + 0xc + lVar16) = 0;
                          lVar17 = *(longlong *)(param_1 + 0xe48);
                          lVar19 = *(longlong *)(param_1 + 0xe38);
                          *(int *)(*(longlong *)(param_1 + 0xe28) + 4 + lVar14 * 4) =
                               (*(int *)(lVar17 + 8 + lVar16) - *(int *)(lVar19 + 8 + lVar16)) *
                               (*(int *)(lVar17 + 4 + lVar16) - *(int *)(lVar19 + 4 + lVar16)) *
                               (*(int *)(lVar17 + lVar16) - *(int *)(lVar19 + lVar16));
                          dVar26 = pow((double)*(int *)(param_1 + 0xe08),3.0);
                          fVar23 = SUB84(dVar26,0);
                        }
                      }
                    }
                  }
                }
              }
              iVar8 = *(int *)(param_1 + 0xe00);
              lVar22 = lVar22 + 1;
            } while ((int)lVar22 < iVar8);
            uVar15 = *puVar21;
            uVar13 = *(uint *)(param_1 + 0xdfc);
            puVar20 = local_118;
          }
          uVar18 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          *(uint *)(param_1 + 0xdfc) = uVar13;
          *(uint *)(local_110 + uVar18 * 0x10) = uVar15;
        }
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar20);
    }
  }
  if ((int)local_120 != 0) {
    uVar13 = 2;
    if (2 < local_124) {
      uVar13 = local_124;
    }
    uVar15 = 1;
    do {
      lVar22 = *(longlong *)(param_1 + 0xe28);
      piVar2 = (int *)(lVar22 + (longlong)(int)uVar15 * 4);
      *piVar2 = *piVar2 + *(int *)(lVar22 + (longlong)(int)(uVar15 - 1) * 4);
      uVar15 = uVar15 + 1;
    } while (uVar13 != uVar15);
  }
  if ((local_f0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar23);
}



// FUNCTION 147c9000d FUN_147c9000d body=244 status=ok
// SIG undefined FUN_147c9000d(void)

longlong * FUN_147c9000d(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = (int)param_2[1];
  if (-1 < iVar5) {
    if (iVar5 != 0) {
      FUN_14499148c(param_1);
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar6 = *param_2;
        lVar10 = 0;
        do {
          dVar1 = *(double *)(lVar6 + 0x18 + lVar10);
          dVar2 = *(double *)(lVar6 + 0x10 + lVar10);
          dVar3 = *(double *)(lVar6 + 8 + lVar10);
          dVar4 = *(double *)(lVar6 + lVar10);
          iVar5 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
            FUN_1449e2712(param_1,iVar5);
          }
          lVar7 = *param_1;
          lVar9 = (longlong)iVar5 * 0x10;
          *(float *)(lVar7 + lVar9) = (float)dVar4;
          *(float *)(lVar7 + 4 + lVar9) = (float)dVar3;
          *(float *)(lVar7 + 8 + lVar9) = (float)dVar2;
          *(float *)(lVar7 + 0xc + lVar9) = (float)dVar1;
          lVar10 = lVar10 + 0x20;
        } while ((longlong)(int)lVar8 * 0x20 != lVar10);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 147c90102 FUN_147c90102 body=299 status=ok
// SIG undefined FUN_147c90102(void)

undefined8 * FUN_147c90102(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar1;
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  uVar1 = param_2[1];
  param_1[6] = *param_2;
  param_1[7] = uVar1;
  uVar1 = param_2[1];
  param_1[8] = *param_2;
  param_1[9] = uVar1;
  uVar1 = param_2[1];
  param_1[10] = *param_2;
  param_1[0xb] = uVar1;
  uVar1 = param_2[1];
  param_1[0xc] = *param_2;
  param_1[0xd] = uVar1;
  uVar1 = param_2[1];
  param_1[0xe] = *param_2;
  param_1[0xf] = uVar1;
  uVar1 = param_2[1];
  param_1[0x10] = *param_2;
  param_1[0x11] = uVar1;
  uVar1 = param_2[1];
  param_1[0x12] = *param_2;
  param_1[0x13] = uVar1;
  uVar1 = param_2[1];
  param_1[0x14] = *param_2;
  param_1[0x15] = uVar1;
  uVar1 = param_2[1];
  param_1[0x16] = *param_2;
  param_1[0x17] = uVar1;
  uVar1 = param_2[1];
  param_1[0x18] = *param_2;
  param_1[0x19] = uVar1;
  uVar1 = param_2[1];
  param_1[0x1a] = *param_2;
  param_1[0x1b] = uVar1;
  uVar1 = param_2[1];
  param_1[0x1c] = *param_2;
  param_1[0x1d] = uVar1;
  uVar1 = param_2[1];
  param_1[0x1e] = *param_2;
  param_1[0x1f] = uVar1;
  uVar1 = param_2[1];
  param_1[0x20] = *param_2;
  param_1[0x21] = uVar1;
  uVar1 = param_2[1];
  param_1[0x22] = *param_2;
  param_1[0x23] = uVar1;
  uVar1 = param_2[1];
  param_1[0x24] = *param_2;
  param_1[0x25] = uVar1;
  uVar1 = param_2[1];
  param_1[0x26] = *param_2;
  param_1[0x27] = uVar1;
  uVar1 = param_2[1];
  param_1[0x28] = *param_2;
  param_1[0x29] = uVar1;
  uVar1 = param_2[1];
  param_1[0x2a] = *param_2;
  param_1[0x2b] = uVar1;
  uVar1 = param_2[1];
  param_1[0x2c] = *param_2;
  param_1[0x2d] = uVar1;
  uVar1 = param_2[1];
  param_1[0x2e] = *param_2;
  param_1[0x2f] = uVar1;
  uVar1 = param_2[1];
  param_1[0x30] = *param_2;
  param_1[0x31] = uVar1;
  uVar1 = param_2[1];
  param_1[0x32] = *param_2;
  param_1[0x33] = uVar1;
  uVar1 = param_2[1];
  param_1[0x34] = *param_2;
  param_1[0x35] = uVar1;
  uVar1 = param_2[1];
  param_1[0x36] = *param_2;
  param_1[0x37] = uVar1;
  uVar1 = param_2[1];
  param_1[0x38] = *param_2;
  param_1[0x39] = uVar1;
  uVar1 = param_2[1];
  param_1[0x3a] = *param_2;
  param_1[0x3b] = uVar1;
  uVar1 = param_2[1];
  param_1[0x3c] = *param_2;
  param_1[0x3d] = uVar1;
  uVar1 = param_2[1];
  param_1[0x3e] = *param_2;
  param_1[0x3f] = uVar1;
  return param_1;
}



// FUNCTION 147c9022d FUN_147c9022d body=256 status=ok
// SIG undefined FUN_147c9022d(void)

undefined8 * FUN_147c9022d(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 **ppuVar2;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 *apuStack_70 [6];
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  apuStack_70[5] = (undefined4 *)0x0;
  uStack_40 = 0;
  if (param_2 == 2) {
    local_78 = &local_38;
    local_38 = 1;
    uStack_34 = 0x10;
    uStack_30 = 0xf;
    uStack_2c = 0xc;
    local_28._0_4_ = 0xb;
    ppuVar2 = &local_78;
    puVar1 = (undefined8 *)(local_28 + 4);
  }
  else if (param_2 == 1) {
    apuStack_70[1] = &local_38;
    local_38 = 3;
    uStack_34 = 4;
    uStack_30 = 9;
    uStack_2c = 10;
    local_28 = (undefined1  [8])0xe00000008;
    ppuVar2 = apuStack_70 + 1;
    puVar1 = &uStack_20;
  }
  else {
    if (param_2 != 0) goto LAB_147c90264;
    apuStack_70[3] = &local_38;
    local_28 = (undefined1  [8])0x110000000d;
    uStack_20 = 0x1300000012;
    local_38 = 2;
    uStack_34 = 5;
    uStack_30 = 6;
    uStack_2c = 7;
    ppuVar2 = apuStack_70 + 3;
    puVar1 = &local_18;
  }
  ppuVar2[1] = (undefined4 *)puVar1;
  FUN_147ca3ce2(apuStack_70 + 5);
LAB_147c90264:
  *param_1 = apuStack_70[5];
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9032e FUN_147c9032e body=173 status=ok
// SIG undefined FUN_147c9032e(void)

undefined8
FUN_147c9032e(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,int *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = (longlong)(int)param_1[1] << 2;
    lVar2 = 0;
    do {
      if (*(int *)(*param_1 + lVar2 * 4) == param_4) {
        *param_5 = (int)lVar2;
        if ((int)lVar2 != -1) {
          return 0;
        }
        goto LAB_147c9035b;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
  *param_5 = -1;
LAB_147c9035b:
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = (longlong)(int)param_2[1] << 2;
    lVar2 = 0;
    do {
      if (*(int *)(*param_2 + lVar2 * 4) == param_4) {
        *param_5 = (int)lVar2;
        if ((int)lVar2 != -1) {
          return 1;
        }
        goto LAB_147c90383;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
  *param_5 = -1;
LAB_147c90383:
  if ((longlong)(int)param_3[1] != 0) {
    lVar1 = (longlong)(int)param_3[1] << 2;
    lVar2 = 0;
    do {
      if (*(int *)(*param_3 + lVar2 * 4) == param_4) {
        *param_5 = (int)lVar2;
        if ((int)lVar2 == -1) {
          return 3;
        }
        return 2;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
  *param_5 = -1;
  return 3;
}



// FUNCTION 147c903db FUN_147c903db body=410 status=ok
// SIG undefined FUN_147c903db(void)

void FUN_147c903db(undefined4 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa448) {
    FUN_144b3d300(&DAT_14cafa448);
    if (DAT_14cafa448 == -1) {
      FUN_147c9022d(&DAT_14cafa438,0);
      atexit((_func_5014 *)&LAB_1436507a5);
      _Init_thread_footer(&DAT_14cafa448);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa460) {
    FUN_144b3d300(&DAT_14cafa460);
    if (DAT_14cafa460 == -1) {
      FUN_147c9022d(&DAT_14cafa450,1);
      atexit((_func_5014 *)&LAB_1436507b6);
      _Init_thread_footer(&DAT_14cafa460);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa478) {
    FUN_144b3d300(&DAT_14cafa478);
    if (DAT_14cafa478 == -1) {
      FUN_147c9022d(&DAT_14cafa468,2);
      atexit((_func_5014 *)&LAB_1436507c7);
      _Init_thread_footer(&DAT_14cafa478);
    }
  }
  local_28 = local_14;
  FUN_147c9032e(&DAT_14cafa438,&DAT_14cafa450,&DAT_14cafa468,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c90576 FUN_147c90576 body=302 status=ok
// SIG undefined FUN_147c90576(void)

void FUN_147c90576(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_2[1];
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(int *)(*param_1 + (longlong)iVar1 * 4) = (int)lVar2;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x40800000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x41400000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x3f800000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x3f800000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x3f800000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x40000000;
  return;
}


