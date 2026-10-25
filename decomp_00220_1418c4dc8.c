// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418c4dc8 FUN_1418c4dc8 body=49 status=ok
// SIG undefined FUN_1418c4dc8(void)

longlong FUN_1418c4dc8(void)

{
  if (DAT_14cba40d8 == 0) {
    FUN_14086a14e(&DAT_14cba40d8,&PTR_FUN_14b663390);
  }
  return DAT_14cba40d8;
}



// FUNCTION 1418c4df9 FUN_1418c4df9 body=49 status=ok
// SIG undefined FUN_1418c4df9(void)

longlong FUN_1418c4df9(void)

{
  if (DAT_14cba4168 == 0) {
    FUN_14000fc22(&DAT_14cba4168,&PTR_FUN_14b663b20);
  }
  return DAT_14cba4168;
}



// FUNCTION 1418c4e2a FUN_1418c4e2a body=125 status=ok
// SIG undefined FUN_1418c4e2a(void)

undefined8 * FUN_1418c4e2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b666fe0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c4ea8 FUN_1418c4ea8 body=101 status=ok
// SIG undefined FUN_1418c4ea8(void)

undefined8 * FUN_1418c4ea8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c4f0e FUN_1418c4f0e body=101 status=ok
// SIG undefined FUN_1418c4f0e(void)

undefined8 * FUN_1418c4f0e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c4f74 FUN_1418c4f74 body=164 status=ok
// SIG undefined FUN_1418c4f74(void)

void FUN_1418c4f74(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x4d8);
  FUN_1409e6ae2(param_2);
  *(undefined4 *)(param_2 + 0x8b) = 0x3f800000;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  *(undefined4 *)(param_2 + 0x92) = 0xf00000d0;
  param_2[0x93] = 0;
  *(undefined4 *)(param_2 + 0x94) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x95) = 0x100;
  *param_2 = &PTR_FUN_14b667d70;
  param_2[0x96] = 0x4316000043fa0000;
  param_2[0x97] = 0x4316000043fa0000;
  param_2[0x98] = 0x43fa000044e10000;
  param_2[0x99] = 0x43160000c3c80000;
  *(undefined4 *)(param_2 + 0x9a) = 0x42480000;
  *(undefined1 *)((longlong)param_2 + 0x4d4) = 1;
  return;
}



// FUNCTION 1418c5018 FUN_1418c5018 body=119 status=ok
// SIG undefined FUN_1418c5018(void)

void FUN_1418c5018(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x4b0);
  FUN_1409e6ae2(param_2);
  *(undefined4 *)(param_2 + 0x8b) = 0x3f800000;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  *(undefined4 *)(param_2 + 0x92) = 0xf00000d0;
  param_2[0x93] = 0;
  *(undefined4 *)(param_2 + 0x94) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x95) = 0x100;
  *param_2 = &PTR_FUN_14b668030;
  return;
}



// FUNCTION 1418c50b6 FUN_1418c50b6 body=119 status=ok
// SIG undefined FUN_1418c50b6(void)

void FUN_1418c50b6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x4b0);
  FUN_1409e6ae2(param_2);
  *(undefined4 *)(param_2 + 0x8b) = 0x3f800000;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  *(undefined4 *)(param_2 + 0x92) = 0xf00000d0;
  param_2[0x93] = 0;
  *(undefined4 *)(param_2 + 0x94) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x95) = 0x100;
  *param_2 = &PTR_FUN_14b6682f0;
  return;
}



// FUNCTION 1418c5154 FUN_1418c5154 body=59 status=ok
// SIG undefined FUN_1418c5154(void)

void FUN_1418c5154(undefined8 param_1,longlong param_2)

{
  FUN_140283eaa(param_2 + 0x78,1);
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1405308b6(param_2 + 0x28);
  return;
}



// FUNCTION 1418c5190 FUN_1418c5190 body=774 status=ok
// SIG undefined FUN_1418c5190(void)

undefined8 FUN_1418c5190(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *_Dst;
  ulonglong uVar10;
  longlong lVar11;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    lVar9 = *param_3;
    if (DAT_14c950c29 == 1) {
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar9 = *param_3;
      }
    }
    bVar4 = DAT_14c950c29;
    *param_2 = lVar9;
    param_2[1] = param_3[1];
    lVar9 = param_3[2];
    if ((bVar4 & 1) != 0) {
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar9 = param_3[2];
        bVar4 = DAT_14c950c29;
      }
    }
    param_2[2] = lVar9;
    lVar9 = param_3[3];
    if ((bVar4 & 1) != 0) {
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar9 = param_3[3];
      }
    }
    param_2[3] = lVar9;
    param_2[4] = param_3[4];
    if (param_2 != param_3) {
      iVar1 = (int)param_3[0xe];
      plVar6 = param_2 + 0xd;
      if ((ulonglong)(longlong)iVar1 < 2) {
        if (*plVar6 != 0) {
          FUN_1446efa72(plVar6,0,0,4);
        }
        if (iVar1 != 0) goto LAB_1418c52cc;
      }
      else {
        FUN_1446efa72(plVar6,0,iVar1,4);
LAB_1418c52cc:
        plVar8 = param_2 + 0xc;
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          plVar8 = (longlong *)*plVar6;
        }
        plVar6 = param_3 + 0xc;
        if ((longlong *)param_3[0xd] != (longlong *)0x0) {
          plVar6 = (longlong *)param_3[0xd];
        }
        memcpy(plVar8,plVar6,(longlong)iVar1 << 2);
      }
      plVar6 = param_2 + 5;
      *(int *)(param_2 + 0xe) = iVar1;
      uVar2 = *(uint *)(param_3 + 6);
      FUN_1405308ee(plVar6,(ulonglong)uVar2);
      lVar9 = param_2[6];
      *(uint *)(param_2 + 6) = (int)lVar9 + uVar2;
      if ((uint)(*(int *)((longlong)param_2 + 0x34) - (int)lVar9) < uVar2) {
        FUN_140df211e(plVar6);
      }
      *(int *)(param_2 + 0xb) = (int)param_3[0xb];
      *(undefined4 *)((longlong)param_2 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x5c);
      uVar5 = (int)param_3[10] + 0x1fU & 0xffffffe0;
      *(undefined4 *)(param_2 + 10) = 0;
      if ((*(int *)((longlong)param_2 + 0x54) < (int)uVar5) ||
         (0x80 < *(int *)((longlong)param_2 + 0x54))) {
        uVar7 = 0x80;
        if (0x80 < (int)uVar5) {
          uVar7 = uVar5;
        }
        *(uint *)((longlong)param_2 + 0x54) = uVar7;
        FUN_1446efbd8(param_2 + 7);
      }
      iVar1 = (int)param_3[10];
      *(int *)(param_2 + 10) = iVar1;
      if (iVar1 != 0) {
        plVar8 = (longlong *)param_3[9];
        if ((longlong *)param_3[9] == (longlong *)0x0) {
          plVar8 = param_3 + 7;
        }
        _Dst = param_2 + 7;
        if ((longlong *)param_2[9] != (longlong *)0x0) {
          _Dst = (longlong *)param_2[9];
        }
        memcpy(_Dst,plVar8,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
      }
      if (0 < (int)uVar2) {
        lVar9 = *plVar6;
        lVar3 = param_3[5];
        lVar11 = 0;
        uVar10 = 0;
        do {
          plVar6 = (longlong *)param_3[9];
          if ((longlong *)param_3[9] == (longlong *)0x0) {
            plVar6 = param_3 + 7;
          }
          uVar5 = *(uint *)((longlong)plVar6 + (uVar10 >> 5 & 0x7ffffff) * 4);
          *(undefined4 *)(lVar9 + lVar11) = *(undefined4 *)(lVar3 + lVar11);
          if ((uVar5 >> ((uint)uVar10 & 0x1f) & 1) == 0) {
            *(undefined4 *)(lVar9 + 4 + lVar11) = *(undefined4 *)(lVar3 + 4 + lVar11);
          }
          else {
            FUN_140df1e02(lVar9 + 0x10 + lVar11);
            *(undefined8 *)(lVar9 + 0xd0 + lVar11) = *(undefined8 *)(lVar3 + 0xd0 + lVar11);
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0xe0;
        } while (uVar2 != uVar10);
      }
    }
    param_3 = param_3 + 0x13;
    param_2 = param_2 + 0x13;
    param_4 = param_4 + -1;
  } while( true );
}



// FUNCTION 1418c5496 FUN_1418c5496 body=139 status=ok
// SIG undefined FUN_1418c5496(void)

void FUN_1418c5496(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 1418c5522 FUN_1418c5522 body=29 status=ok
// SIG undefined FUN_1418c5522(void)

undefined8 FUN_1418c5522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c5540 FUN_1418c5540 body=57 status=ok
// SIG undefined FUN_1418c5540(void)

void FUN_1418c5540(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4478 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4478 = FUN_140002ddd(FUN_1465bdab0,uVar1,L"GrenadeBehavior_Delivery");
  }
  return;
}



// FUNCTION 1418c557a FUN_1418c557a body=57 status=ok
// SIG undefined FUN_1418c557a(void)

void FUN_1418c557a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4880 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4880 = FUN_140002ddd(FUN_1465bec16,uVar1,L"HoverDriveAttributeSetDef");
  }
  return;
}



// FUNCTION 1418c55ba FUN_1418c55ba body=117 status=ok
// SIG undefined FUN_1418c55ba(void)

undefined8 * FUN_1418c55ba(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418c562f FUN_1418c562f body=49 status=ok
// SIG undefined FUN_1418c562f(void)

longlong FUN_1418c562f(void)

{
  if (DAT_14cba4940 == 0) {
    FUN_14086a14e(&DAT_14cba4940,&PTR_FUN_14b679bd8);
  }
  return DAT_14cba4940;
}



// FUNCTION 1418c5660 FUN_1418c5660 body=57 status=ok
// SIG undefined FUN_1418c5660(void)

void FUN_1418c5660(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4b78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4b78 = FUN_140002ddd(FUN_1465bfd34,uVar1,L"InventoryAugment");
  }
  return;
}



// FUNCTION 1418c569a FUN_1418c569a body=40 status=ok
// SIG undefined FUN_1418c569a(void)

undefined8 FUN_1418c569a(undefined8 param_1,int param_2)

{
  FUN_140639172();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c5716 FUN_1418c5716 body=43 status=ok
// SIG undefined FUN_1418c5716(void)

void FUN_1418c5716(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458c937c(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 1418c5741 FUN_1418c5741 body=68 status=ok
// SIG undefined FUN_1418c5741(void)

void FUN_1418c5741(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b6971b0;
  puVar1[5] = &PTR_FUN_14b697460;
  puVar1[10] = &PTR_FUN_14b697490;
  puVar1[0xb] = &PTR_FUN_14b6974c0;
  return;
}



// FUNCTION 1418c5786 FUN_1418c5786 body=40 status=ok
// SIG undefined FUN_1418c5786(void)

undefined8 FUN_1418c5786(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c57ae FUN_1418c57ae body=141 status=ok
// SIG undefined FUN_1418c57ae(void)

longlong * FUN_1418c57ae(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b69fbc0;
  uVar4 = FUN_1400b1372();
  FUN_140aed1ce(plVar3 + 2,uVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b979080;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1418c583c FUN_1418c583c body=40 status=ok
// SIG undefined FUN_1418c583c(void)

void FUN_1418c583c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400b1372();
  FUN_140aed1ce(param_2,uVar1);
  *param_2 = &PTR_FUN_14b979080;
  return;
}



// FUNCTION 1418c5874 FUN_1418c5874 body=73 status=ok
// SIG undefined FUN_1418c5874(void)

undefined8 * FUN_1418c5874(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c58be FUN_1418c58be body=111 status=ok
// SIG undefined FUN_1418c58be(void)

undefined8 FUN_1418c58be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined1 *)(param_2 + 0x28 + lVar1) = *(undefined1 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c593c FUN_1418c593c body=160 status=ok
// SIG undefined FUN_1418c593c(void)

undefined8 FUN_1418c593c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar3,param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + 0x18 + lVar3) = *(undefined8 *)(param_3 + 0x18 + lVar3);
      lVar1 = *(longlong *)(param_3 + 0x20 + lVar3);
      if (*(longlong *)(param_2 + 0x20 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + 0x30 + lVar3) = 0;
      }
      *(longlong *)(param_2 + 0x20 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + 0x28 + lVar3) != *(longlong *)(param_3 + 0x28 + lVar3)) {
        *(undefined8 *)(param_2 + 0x30 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + 0x28 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + 0x30 + lVar3) = *(undefined8 *)(param_3 + 0x30 + lVar3);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c59ea FUN_1418c59ea body=111 status=ok
// SIG undefined FUN_1418c59ea(void)

undefined8 FUN_1418c59ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c5a5a FUN_1418c5a5a body=73 status=ok
// SIG undefined FUN_1418c5a5a(void)

undefined8 * FUN_1418c5a5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c5aa4 FUN_1418c5aa4 body=139 status=ok
// SIG undefined FUN_1418c5aa4(void)

void FUN_1418c5aa4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 1418c5b30 FUN_1418c5b30 body=29 status=ok
// SIG undefined FUN_1418c5b30(void)

undefined8 FUN_1418c5b30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c5b88 FUN_1418c5b88 body=79 status=ok
// SIG undefined FUN_1418c5b88(void)

void FUN_1418c5b88(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1100);
  FUN_140c15cec(param_2);
  *param_2 = &PTR_FUN_14b6a95f0;
  *(undefined1 *)(param_2 + 0x219) = 1;
  param_2[0x21a] = 0;
  param_2[0x21b] = 0;
  param_2[0x21c] = 0;
  param_2[0x21d] = 0;
  param_2[0x21e] = 0;
  param_2[0x21f] = 0;
  return;
}



// FUNCTION 1418c5bd8 FUN_1418c5bd8 body=80 status=ok
// SIG undefined FUN_1418c5bd8(void)

void FUN_1418c5bd8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1400d6974(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c5c2a FUN_1418c5c2a body=121 status=ok
// SIG undefined FUN_1418c5c2a(void)

void FUN_1418c5c2a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  }
  FUN_140154c96(local_40,param_2);
  FUN_1448618b0(param_1 + 0x20,local_40,uVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c5ca4 FUN_1418c5ca4 body=49 status=ok
// SIG undefined FUN_1418c5ca4(void)

longlong FUN_1418c5ca4(void)

{
  if (DAT_14cba6660 == 0) {
    FUN_14073dd9a(&DAT_14cba6660,&PTR_LAB_14b6bc060);
  }
  return DAT_14cba6660;
}



// FUNCTION 1418c5cd6 FUN_1418c5cd6 body=225 status=ok
// SIG undefined FUN_1418c5cd6(void)

void FUN_1418c5cd6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_2 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c844848;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}



// FUNCTION 1418c5db8 FUN_1418c5db8 body=899 status=ok
// SIG undefined FUN_1418c5db8(void)

void FUN_1418c5db8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  memset(param_2 + 2,0,0xa0);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b4677d0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  *param_2 = &PTR_FUN_14b6bced0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  iVar3 = DAT_14c844850;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  *(undefined8 *)((longlong)param_2 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_2 + 0x76) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if (iVar1 < iVar3) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_2[0x10] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x11) = 0;
  FUN_1400b22c2(param_2 + 0x12,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x14) = 0;
  local_28 = &DAT_14b6bcef8;
  local_20 = 4;
  local_1c = 0;
  uVar4 = FUN_14001a6c0(&local_28,1);
  *(ulonglong *)((longlong)param_2 + 0xa4) = (ulonglong)uVar4;
  *(undefined2 *)((longlong)param_2 + 0xac) = 1;
  *(undefined1 *)((longlong)param_2 + 0xae) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c613c FUN_1418c613c body=33 status=ok
// SIG undefined FUN_1418c613c(void)

void FUN_1418c613c(undefined8 param_1,longlong param_2)

{
  FUN_140c3ad3e(param_2 + 0xf8);
  FUN_140c3ad3e(param_2);
  return;
}



// FUNCTION 1418c615e FUN_1418c615e body=561 status=ok
// SIG undefined FUN_1418c615e(void)

void FUN_1418c615e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b4677d0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  *param_2 = &PTR_FUN_14b6bd390;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  FUN_140056680(param_2 + 0xc,&DAT_149dfb77a);
  return;
}



// FUNCTION 1418c6390 FUN_1418c6390 body=71 status=ok
// SIG undefined FUN_1418c6390(void)

undefined8 * FUN_1418c6390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418c63d8 FUN_1418c63d8 body=61 status=ok
// SIG undefined FUN_1418c63d8(void)

void FUN_1418c63d8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x198) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c6416 FUN_1418c6416 body=356 status=ok
// SIG undefined FUN_1418c6416(void)

undefined8 FUN_1418c6416(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    puVar9 = (undefined8 *)(param_2 + 0x198);
    do {
      *(undefined4 *)(puVar9 + -0x33) = *(undefined4 *)param_3;
      puVar9[-0x32] = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar4 = *(undefined4 *)(param_3 + 3);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined4 *)(puVar9 + -0x31) = *(undefined4 *)(param_3 + 2);
      *(undefined4 *)((longlong)puVar9 + -0x184) = uVar3;
      *(undefined4 *)(puVar9 + -0x30) = uVar4;
      *(undefined4 *)((longlong)puVar9 + -0x17c) = uVar5;
      if (puVar9 + -0x33 != param_3) {
        iVar1 = *(int *)(param_3 + 5);
        pvVar2 = (void *)param_3[4];
        *(int *)(puVar9 + -0x2e) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar9 + -0x16c) == 0) {
          *(undefined4 *)((longlong)puVar9 + -0x16c) = 0;
        }
        else {
          FUN_1446dd670(puVar9 + -0x2f,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)puVar9[-0x2f],pvVar2,(longlong)iVar1 * 2);
          }
        }
      }
      FUN_1407b25f0(puVar9 + -0x2d,param_3 + 6);
      puVar7 = param_3 + 0x22;
      puVar8 = puVar9 + -0x11;
      for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar9[-3] = param_3[0x30];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x18c);
      uVar4 = *(undefined4 *)(param_3 + 0x32);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x194);
      *(undefined4 *)(puVar9 + -2) = *(undefined4 *)(param_3 + 0x31);
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar3;
      *(undefined4 *)(puVar9 + -1) = uVar4;
      *(undefined4 *)((longlong)puVar9 + -4) = uVar5;
      if (puVar9 + -0x33 != param_3) {
        iVar1 = *(int *)(param_3 + 0x34);
        pvVar2 = (void *)param_3[0x33];
        *(int *)(puVar9 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar9 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar9,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar9,pvVar2,(longlong)iVar1 * 2);
          }
        }
      }
      puVar9 = puVar9 + 0x36;
      param_3 = param_3 + 0x36;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c657a FUN_1418c657a body=61 status=ok
// SIG undefined FUN_1418c657a(void)

void FUN_1418c657a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c65c0 FUN_1418c65c0 body=118 status=ok
// SIG undefined FUN_1418c65c0(void)

undefined8 FUN_1418c65c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbc5858 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbc5858,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c6638 FUN_1418c6638 body=87 status=ok
// SIG undefined FUN_1418c6638(void)

undefined8 * FUN_1418c6638(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b486310;
  param_1[5] = &PTR_LAB_14b486980;
  param_1[6] = &PTR_LAB_14b4869c0;
  FUN_140485912(param_1 + 0x75);
  FUN_140bcca3c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c6690 FUN_1418c6690 body=140 status=ok
// SIG undefined FUN_1418c6690(void)

void FUN_1418c6690(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_14067009e(*(undefined8 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x98));
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c671c FUN_1418c671c body=620 status=ok
// SIG undefined FUN_1418c671c(void)

undefined8 FUN_1418c671c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      FUN_140311eb6(param_2 + lVar11,param_3 + lVar11);
      FUN_140311eb6(param_2 + lVar11 + 0x10,param_3 + lVar11 + 0x10);
      FUN_140311eb6(param_2 + lVar11 + 0x20,param_3 + lVar11 + 0x20);
      lVar8 = param_3 + lVar11;
      lVar3 = param_2 + lVar11;
      FUN_140311eb6(lVar3 + 0x30,lVar8 + 0x30);
      *(undefined1 *)(lVar3 + 0x40) = *(undefined1 *)(lVar8 + 0x40);
      lVar8 = *(longlong *)(lVar8 + 0x48);
      if (DAT_14c950c29 == 1) {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar8 = *(longlong *)(param_3 + 0x48 + lVar11);
        }
      }
      bVar7 = DAT_14c950c29;
      *(longlong *)(lVar3 + 0x48) = lVar8;
      puVar9 = (undefined8 *)(param_3 + lVar11 + 0x50);
      puVar10 = (undefined8 *)(lVar3 + 0x50);
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      lVar8 = *(longlong *)(param_3 + lVar11 + 0xb0);
      if ((bVar7 & 1) != 0) {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar8 = *(longlong *)(param_3 + 0xb0 + lVar11);
        }
      }
      *(longlong *)(lVar3 + 0xb0) = lVar8;
      *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(param_3 + 0xb8 + lVar11);
      uVar5 = *(undefined8 *)(param_3 + 0xc0 + lVar11);
      lVar8 = *(longlong *)(param_3 + 200 + lVar11);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(lVar3 + 200);
      *(undefined8 *)(lVar3 + 0xc0) = uVar5;
      *(longlong *)(lVar3 + 200) = lVar8;
      if (plVar6 != (longlong *)0x0) {
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
      lVar8 = param_3 + lVar11;
      *(undefined1 *)(param_2 + 0xd0 + lVar11) = *(undefined1 *)(lVar8 + 0xd0);
      FUN_14036fd5a(lVar3 + 0xd8,lVar8 + 0xd8);
      *(undefined1 *)(param_2 + 0x200 + lVar11) = *(undefined1 *)(lVar8 + 0x200);
      FUN_140b177d4(lVar3 + 0x208,param_3 + lVar11 + 0x208);
      if (param_2 + lVar11 != param_3 + lVar11) {
        iVar4 = *(int *)(param_3 + 0x230 + lVar11);
        uVar5 = *(undefined8 *)(param_3 + 0x228 + lVar11);
        *(int *)(param_2 + 0x230 + lVar11) = iVar4;
        if (iVar4 == 0 && *(int *)(param_2 + 0x234 + lVar11) == 0) {
          *(undefined4 *)(param_2 + 0x234 + lVar11) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar11 + 0x228);
          FUN_148bec03c(puVar9,iVar4);
          FUN_148bec09e(*puVar9,uVar5,iVar4);
        }
      }
      *(undefined1 *)(lVar3 + 0x238) = *(undefined1 *)(param_3 + 0x238 + lVar11);
      lVar11 = lVar11 + 0x240;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c6988 FUN_1418c6988 body=944 status=ok
// SIG undefined FUN_1418c6988(void)

undefined8 FUN_1418c6988(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  undefined1 uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  
  if (param_4 != 0) {
    lVar25 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar25) = *(undefined2 *)(param_3 + 0x10 + lVar25);
      *(undefined8 *)(param_2 + 8 + lVar25) = *(undefined8 *)(param_3 + 8 + lVar25);
      *(undefined8 *)(param_2 + 0x38 + lVar25) = *(undefined8 *)(param_3 + 0x38 + lVar25);
      puVar5 = (undefined4 *)(param_3 + 0x18 + lVar25);
      uVar9 = *puVar5;
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      puVar5 = (undefined4 *)(param_3 + 0x28 + lVar25);
      uVar13 = puVar5[1];
      uVar14 = puVar5[2];
      uVar15 = puVar5[3];
      puVar6 = (undefined4 *)(param_2 + 0x28 + lVar25);
      *puVar6 = *puVar5;
      puVar6[1] = uVar13;
      puVar6[2] = uVar14;
      puVar6[3] = uVar15;
      puVar5 = (undefined4 *)(param_2 + 0x18 + lVar25);
      *puVar5 = uVar9;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      *(undefined2 *)(param_2 + 0x48 + lVar25) = *(undefined2 *)(param_3 + 0x48 + lVar25);
      *(undefined8 *)(param_2 + 0x40 + lVar25) = *(undefined8 *)(param_3 + 0x40 + lVar25);
      lVar24 = *(longlong *)(param_3 + 0x50 + lVar25);
      if (DAT_14c950c29 == 1) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar24 = *(longlong *)(param_3 + 0x50 + lVar25);
        }
      }
      bVar22 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x50 + lVar25) = lVar24;
      lVar24 = *(longlong *)(param_3 + 0x58 + lVar25);
      if ((bVar22 & 1) != 0) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar24 = *(longlong *)(param_3 + 0x58 + lVar25);
        }
      }
      lVar3 = param_3 + lVar25;
      lVar4 = param_2 + lVar25;
      *(longlong *)(param_2 + 0x58 + lVar25) = lVar24;
      puVar26 = (undefined8 *)(param_3 + 0x60 + lVar25);
      uVar7 = puVar26[1];
      puVar27 = (undefined8 *)(param_3 + 0x70 + lVar25);
      uVar20 = *puVar27;
      uVar21 = puVar27[1];
      puVar27 = (undefined8 *)(param_2 + 0x60 + lVar25);
      *puVar27 = *puVar26;
      puVar27[1] = uVar7;
      puVar26 = (undefined8 *)(param_2 + 0x70 + lVar25);
      *puVar26 = uVar20;
      puVar26[1] = uVar21;
      *(undefined4 *)(param_2 + 0x80 + lVar25) = *(undefined4 *)(param_3 + 0x80 + lVar25);
      puVar5 = (undefined4 *)(param_3 + 0x88 + lVar25);
      uVar9 = puVar5[1];
      uVar10 = puVar5[2];
      uVar11 = puVar5[3];
      puVar6 = (undefined4 *)(param_3 + 0x98 + lVar25);
      uVar12 = *puVar6;
      uVar13 = puVar6[1];
      uVar14 = puVar6[2];
      uVar15 = puVar6[3];
      puVar6 = (undefined4 *)(param_3 + 0xa8 + lVar25);
      uVar16 = *puVar6;
      uVar17 = puVar6[1];
      uVar18 = puVar6[2];
      uVar19 = puVar6[3];
      puVar6 = (undefined4 *)(param_2 + 0x88 + lVar25);
      *puVar6 = *puVar5;
      puVar6[1] = uVar9;
      puVar6[2] = uVar10;
      puVar6[3] = uVar11;
      puVar5 = (undefined4 *)(param_2 + 0x98 + lVar25);
      *puVar5 = uVar12;
      puVar5[1] = uVar13;
      puVar5[2] = uVar14;
      puVar5[3] = uVar15;
      puVar5 = (undefined4 *)(param_2 + 0xa8 + lVar25);
      *puVar5 = uVar16;
      puVar5[1] = uVar17;
      puVar5[2] = uVar18;
      puVar5[3] = uVar19;
      *(undefined8 *)(param_2 + 0xb8 + lVar25) = *(undefined8 *)(param_3 + 0xb8 + lVar25);
      FUN_140d2c6ac(lVar4 + 0xc0,lVar3 + 0xc0);
      *(undefined1 *)(param_2 + 0xd0 + lVar25) = *(undefined1 *)(param_3 + 0xd0 + lVar25);
      *(undefined8 *)(param_2 + 0xd8 + lVar25) = *(undefined8 *)(param_3 + 0xd8 + lVar25);
      FUN_140e7c22a(lVar4 + 0xe0,lVar3 + 0xe0);
      memcpy((void *)(lVar4 + 0x110),(void *)(lVar3 + 0x110),0x2b4);
      memcpy((void *)(lVar4 + 0x3d0),(void *)(lVar3 + 0x3d0),0x98);
      if (lVar4 == lVar3) {
        memcpy((void *)(lVar4 + 0x4e0),(void *)(lVar3 + 0x4e0),0xab);
        memcpy((void *)(lVar4 + 0x5a0),(void *)(lVar3 + 0x5a0),0x2b4);
        memcpy((void *)(lVar4 + 0x860),(void *)(lVar3 + 0x860),0x98);
      }
      else {
        if (*(char *)(param_3 + 0x4d0 + lVar25) == '\x01') {
          puVar26 = (undefined8 *)(lVar3 + 0x470);
          puVar27 = (undefined8 *)(lVar4 + 0x470);
          for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar27 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar27 = puVar27 + 1;
          }
          uVar23 = 1;
LAB_1418c6b42:
          *(undefined1 *)(param_2 + 0x4d0 + lVar25) = uVar23;
        }
        else if (*(char *)(param_2 + 0x4d0 + lVar25) != '\0') {
          uVar23 = 0;
          goto LAB_1418c6b42;
        }
        memcpy((void *)(lVar4 + 0x4e0),(void *)(lVar3 + 0x4e0),0xab);
        memcpy((void *)(lVar4 + 0x5a0),(void *)(lVar3 + 0x5a0),0x2b4);
        memcpy((void *)(lVar4 + 0x860),(void *)(lVar3 + 0x860),0x98);
        if (*(char *)(param_3 + 0x960 + lVar25) == '\x01') {
          puVar26 = (undefined8 *)(lVar3 + 0x900);
          puVar27 = (undefined8 *)(lVar4 + 0x900);
          for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar27 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar27 = puVar27 + 1;
          }
          *(undefined1 *)(param_2 + 0x960 + lVar25) = 1;
        }
        else if (*(char *)(param_2 + 0x960 + lVar25) == '\x01') {
          *(undefined1 *)(param_2 + 0x960 + lVar25) = 0;
        }
      }
      memcpy((void *)(lVar4 + 0x970),(void *)(lVar3 + 0x970),0xab);
      FUN_140e00d48(lVar4 + 0xa20,lVar3 + 0xa20);
      *(undefined8 *)(param_2 + 0xa30 + lVar25) = *(undefined8 *)(param_3 + 0xa30 + lVar25);
      uVar7 = *(undefined8 *)(param_3 + 0xa38 + lVar25);
      lVar24 = *(longlong *)(param_3 + 0xa40 + lVar25);
      if (lVar24 != 0) {
        LOCK();
        *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
        UNLOCK();
      }
      plVar8 = *(longlong **)(param_2 + 0xa40 + lVar25);
      *(undefined8 *)(param_2 + 0xa38 + lVar25) = uVar7;
      *(longlong *)(param_2 + 0xa40 + lVar25) = lVar24;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar25 = lVar25 + 0xa50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c6d46 FUN_1418c6d46 body=1177 status=ok
// SIG undefined FUN_1418c6d46(void)

undefined8 FUN_1418c6d46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined1 uVar11;
  longlong lVar12;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    FUN_1404306dc(param_2 + 0x20,param_3 + 0x20);
    uVar7 = *(undefined4 *)(param_3 + 0x34);
    uVar8 = *(undefined4 *)(param_3 + 0x38);
    uVar9 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar7;
    *(undefined4 *)(param_2 + 0x38) = uVar8;
    *(undefined4 *)(param_2 + 0x3c) = uVar9;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    FUN_140430734(param_2 + 0x48,param_3 + 0x48);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
    if (param_3 != param_2) {
      if (*(char *)(param_3 + 100) == '\x01') {
        *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
        uVar11 = 1;
      }
      else {
        if (*(char *)(param_2 + 100) != '\x01') goto LAB_1418c6dcf;
        uVar11 = 0;
      }
      *(undefined1 *)(param_2 + 100) = uVar11;
    }
LAB_1418c6dcf:
    FUN_14043078c(param_2 + 0x68,param_3 + 0x68);
    FUN_1404307f4(param_2 + 0x100,param_3 + 0x100);
    uVar7 = *(undefined4 *)(param_3 + 0x134);
    uVar8 = *(undefined4 *)(param_3 + 0x138);
    uVar9 = *(undefined4 *)(param_3 + 0x13c);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_3 + 0x130);
    *(undefined4 *)(param_2 + 0x134) = uVar7;
    *(undefined4 *)(param_2 + 0x138) = uVar8;
    *(undefined4 *)(param_2 + 0x13c) = uVar9;
    *(undefined1 *)(param_2 + 0x144) = *(undefined1 *)(param_3 + 0x144);
    *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_3 + 0x140);
    lVar12 = *(longlong *)(param_3 + 0x148);
    if (DAT_14c950c29 == 1) {
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar12 = *(longlong *)(param_3 + 0x148);
      }
    }
    bVar10 = DAT_14c950c29;
    *(longlong *)(param_2 + 0x148) = lVar12;
    lVar12 = *(longlong *)(param_3 + 0x150);
    if ((bVar10 & 1) != 0) {
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar12 = *(longlong *)(param_3 + 0x150);
      }
    }
    *(longlong *)(param_2 + 0x150) = lVar12;
    *(undefined1 *)(param_2 + 0x158) = *(undefined1 *)(param_3 + 0x158);
    *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_3 + 0x160);
    *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_3 + 0x168);
    uVar4 = *(undefined8 *)(param_3 + 0x170);
    lVar12 = *(longlong *)(param_3 + 0x178);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x178);
    *(undefined8 *)(param_2 + 0x170) = uVar4;
    *(longlong *)(param_2 + 0x178) = lVar12;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    uVar4 = *(undefined8 *)(param_3 + 0x180);
    lVar12 = *(longlong *)(param_3 + 0x188);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x188);
    *(undefined8 *)(param_2 + 0x180) = uVar4;
    *(longlong *)(param_2 + 0x188) = lVar12;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    uVar4 = *(undefined8 *)(param_3 + 400);
    lVar12 = *(longlong *)(param_3 + 0x198);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x198);
    *(undefined8 *)(param_2 + 400) = uVar4;
    *(longlong *)(param_2 + 0x198) = lVar12;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    uVar7 = *(undefined4 *)(param_3 + 0x1a4);
    uVar8 = *(undefined4 *)(param_3 + 0x1a8);
    uVar9 = *(undefined4 *)(param_3 + 0x1ac);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar7;
    *(undefined4 *)(param_2 + 0x1a8) = uVar8;
    *(undefined4 *)(param_2 + 0x1ac) = uVar9;
    if (param_3 != param_2) {
      FUN_140e292a5(*(undefined8 *)(param_2 + 0x1b0),*(undefined4 *)(param_2 + 0x1b8));
      iVar3 = *(int *)(param_3 + 0x1b8);
      uVar4 = *(undefined8 *)(param_3 + 0x1b0);
      *(int *)(param_2 + 0x1b8) = iVar3;
      if (iVar3 == 0 && *(int *)(param_2 + 0x1bc) == 0) {
        *(undefined4 *)(param_2 + 0x1bc) = 0;
      }
      else {
        FUN_148beeb0e((undefined8 *)(param_2 + 0x1b0),iVar3);
        FUN_148beeb70(*(undefined8 *)(param_2 + 0x1b0),uVar4,iVar3);
      }
    }
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_3 + 0x1c0);
    lVar12 = 0x210;
    do {
      *(undefined2 *)(param_2 + -0x38 + lVar12) = *(undefined2 *)(param_3 + -0x38 + lVar12);
      *(undefined8 *)(param_2 + -0x40 + lVar12) = *(undefined8 *)(param_3 + -0x40 + lVar12);
      uVar4 = *(undefined8 *)(param_3 + -0x30 + lVar12);
      lVar6 = *(longlong *)(param_3 + -0x28 + lVar12);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + -0x28 + lVar12);
      *(undefined8 *)(param_2 + -0x30 + lVar12) = uVar4;
      *(longlong *)(param_2 + -0x28 + lVar12) = lVar6;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      *(undefined4 *)(param_2 + -0x20 + lVar12) = *(undefined4 *)(param_3 + -0x20 + lVar12);
      uVar4 = *(undefined8 *)(param_3 + -0x18 + lVar12);
      lVar6 = *(longlong *)(param_3 + -0x10 + lVar12);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + -0x10 + lVar12);
      *(undefined8 *)(param_2 + -0x18 + lVar12) = uVar4;
      *(longlong *)(param_2 + -0x10 + lVar12) = lVar6;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar4 = *(undefined8 *)(param_3 + -8 + lVar12);
      lVar6 = *(longlong *)(param_3 + lVar12);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + lVar12);
      *(undefined8 *)(param_2 + -8 + lVar12) = uVar4;
      *(longlong *)(param_2 + lVar12) = lVar6;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar12 = lVar12 + 0x50;
    } while (lVar12 != 0x300);
    param_4 = param_4 + -1;
    param_3 = param_3 + 0x2b8;
    param_2 = param_2 + 0x2b8;
  } while( true );
}



// FUNCTION 1418c71df FUN_1418c71df body=92 status=ok
// SIG undefined FUN_1418c71df(void)

void FUN_1418c71df(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  *puVar1 = &PTR_FUN_14b6dd600;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 1418c723b FUN_1418c723b body=49 status=ok
// SIG undefined FUN_1418c723b(void)

longlong FUN_1418c723b(void)

{
  if (DAT_14cba75c0 == 0) {
    FUN_14073dd9a(&DAT_14cba75c0,&PTR_LAB_14b6e1a10);
  }
  return DAT_14cba75c0;
}



// FUNCTION 1418c7296 FUN_1418c7296 body=45 status=ok
// SIG undefined FUN_1418c7296(void)

undefined8 FUN_1418c7296(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1418c72c4 FUN_1418c72c4 body=171 status=ok
// SIG undefined FUN_1418c72c4(void)

undefined8 * FUN_1418c72c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e5120;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1418c7370 FUN_1418c7370 body=171 status=ok
// SIG undefined FUN_1418c7370(void)

undefined8 * FUN_1418c7370(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e45a0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1418c741b FUN_1418c741b body=96 status=ok
// SIG undefined FUN_1418c741b(void)

void FUN_1418c741b(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140c1e210(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14b6e8030;
  puVar1[0x79] = &PTR_FUN_14b6e86a0;
  puVar1[0x7a] = &PTR_FUN_14b6e86c0;
  puVar1[0x7b] = &PTR_FUN_14b6e8760;
  puVar1[0x7c] = &PTR_FUN_14b6e87b0;
  return;
}



// FUNCTION 1418c747b FUN_1418c747b body=123 status=ok
// SIG undefined FUN_1418c747b(void)

void FUN_1418c747b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406046aa(puVar1);
  *puVar1 = &PTR_FUN_14b6eb6a0;
  puVar1[5] = &PTR_LAB_14b6eb9a0;
  puVar1[6] = &PTR_LAB_14b6eb9d0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0x401d;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  return;
}



// FUNCTION 1418c74f6 FUN_1418c74f6 body=49 status=ok
// SIG undefined FUN_1418c74f6(void)

longlong FUN_1418c74f6(void)

{
  if (DAT_14cba8290 == 0) {
    FUN_14073dd9a(&DAT_14cba8290,&PTR_LAB_14b6f9b40);
  }
  return DAT_14cba8290;
}



// FUNCTION 1418c75b2 FUN_1418c75b2 body=1166 status=ok
// SIG undefined FUN_1418c75b2(void)

void FUN_1418c75b2(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_24 = (undefined4)uVar2;
      local_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_24);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (int)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140bc2046(param_1,CONCAT44(uStack_1c,local_20),uStack_24,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c7a42 FUN_1418c7a42 body=556 status=ok
// SIG undefined FUN_1418c7a42(void)

void FUN_1418c7a42(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_28);
            goto LAB_1418c7b53;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if ((puVar6 != &local_28) && ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar1 + 0x100))(plVar1,&local_28,puVar6,(int)plVar1[6]);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar1[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_28,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_28,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
LAB_1418c7b53:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c7c70 FUN_1418c7c70 body=199 status=ok
// SIG undefined FUN_1418c7c70(void)

undefined8 * FUN_1418c7c70(undefined8 *param_1)

{
  FUN_140e51d94();
  *param_1 = &PTR_FUN_14b6ff1b8;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 2;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x311) = 0;
  return param_1;
}



// FUNCTION 1418c7d38 FUN_1418c7d38 body=1193 status=ok
// SIG undefined FUN_1418c7d38(void)

void FUN_1418c7d38(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b6ff2e8;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 100) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xb) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xb) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x4c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 8) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 8) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 5) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 5) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 5) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x1c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 2) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 2) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1418c81e2 FUN_1418c81e2 body=554 status=ok
// SIG undefined FUN_1418c81e2(void)

void FUN_1418c81e2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = DAT_14c9a3d60;
  if ((int)param_1[0x28] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = (int)param_1[0x28] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x134) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x134) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x1b] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1b] + 0x50));
  }
  if ((param_1[0x15] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x15] + 0x50));
  }
  if ((param_1[0xf] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xf] + 0x50));
  }
  if ((param_1[9] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[9] + 0x50));
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c840c FUN_1418c840c body=40 status=ok
// SIG undefined FUN_1418c840c(void)

undefined8 FUN_1418c840c(undefined8 param_1,int param_2)

{
  FUN_140ce0512();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c8434 FUN_1418c8434 body=48 status=ok
// SIG undefined FUN_1418c8434(void)

void FUN_1418c8434(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_140f23ff6(param_2);
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  return;
}



// FUNCTION 1418c8464 FUN_1418c8464 body=40 status=ok
// SIG undefined FUN_1418c8464(void)

void FUN_1418c8464(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_2);
  return;
}



// FUNCTION 1418c848c FUN_1418c848c body=220 status=ok
// SIG undefined FUN_1418c848c(void)

undefined8 FUN_1418c848c(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_2 + 0x110);
    do {
      FUN_140cae46a(puVar6 + -0x22,param_3);
      puVar6[-0x18] = param_3[10];
      FUN_140cae504(puVar6 + -0x17,param_3 + 0xb);
      FUN_140cae59e(puVar6 + -0xd,param_3 + 0x15);
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xfc);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x104);
      *(undefined4 *)(puVar6 + -3) = *(undefined4 *)(param_3 + 0x1f);
      *(undefined4 *)((longlong)puVar6 + -0x14) = uVar3;
      *(undefined4 *)(puVar6 + -2) = uVar4;
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar5;
      *(undefined8 *)((longlong)puVar6 + -0xb) = *(undefined8 *)((longlong)param_3 + 0x105);
      if (puVar6 + -0x22 != param_3) {
        iVar1 = *(int *)(param_3 + 0x23);
        uVar2 = param_3[0x22];
        *(int *)(puVar6 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_148bfd62e(puVar6,iVar1);
          FUN_148bfd6a1(*puVar6,uVar2,iVar1);
        }
      }
      puVar6 = puVar6 + 0x24;
      param_3 = param_3 + 0x24;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c8568 FUN_1418c8568 body=128 status=ok
// SIG undefined FUN_1418c8568(void)

undefined8 FUN_1418c8568(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_3 + lVar3);
      if (*(longlong *)(param_2 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + 0x10 + lVar3) = 0;
      }
      *(longlong *)(param_2 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + 8 + lVar3) != *(longlong *)(param_3 + 8 + lVar3)) {
        *(undefined8 *)(param_2 + 0x10 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + 8 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + 0x10 + lVar3) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      *(undefined4 *)(param_2 + 0x18 + lVar3) = *(undefined4 *)(param_3 + 0x18 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c85f6 FUN_1418c85f6 body=639 status=ok
// SIG undefined FUN_1418c85f6(void)

void FUN_1418c85f6(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar13 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_1418c862b;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *param_1 + (longlong)iVar6 * 0x80;
      *(undefined2 **)(lVar12 + 0x50) = &DAT_14a171d50;
      *(undefined4 *)(lVar12 + 0x68) = 0;
      if (*(int *)(lVar12 + 0x6c) != 0) {
        FUN_140115c12(lVar12 + 0x60,0);
      }
      *(undefined8 *)(lVar12 + 0x58) = 0;
      if (*(longlong *)(lVar12 + 0x60) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1418c862b;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1418c862b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14095c99c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1418c8875 FUN_1418c8875 body=47 status=ok
// SIG undefined FUN_1418c8875(void)

void FUN_1418c8875(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418c88b5 FUN_1418c88b5 body=49 status=ok
// SIG undefined FUN_1418c88b5(void)

void FUN_1418c88b5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418c88e6 FUN_1418c88e6 body=393 status=ok
// SIG undefined FUN_1418c88e6(void)

undefined8 * FUN_1418c88e6(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_140b1ac70();
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb1c) = 0;
  param_1[0x165] = 0;
  *(undefined4 *)(param_1 + 0x166) = 0;
  param_1[0x168] = 0;
  *(undefined1 *)(param_1 + 0x176) = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  *param_1 = &PTR_FUN_14b706ef0;
  param_1[0x17f] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x180;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[400] = 0;
  *(undefined4 *)(param_1 + 0x191) = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc94) = 0;
  param_1[0x194] = 0;
  *(undefined4 *)(param_1 + 0x195) = 0;
  *(undefined1 *)(param_1 + 0x196) = 0;
  *(byte *)(param_1 + 0x198) = *(byte *)(param_1 + 0x198) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0xcc4) = 0xffffffffffffffff;
  uVar1 = DAT_14c8464e8;
  param_1[0x19a] = DAT_14c8464e0;
  param_1[0x19b] = uVar1;
  param_1[0x19c] = DAT_14c8464f0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x19f) = 0xffffffff;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x1a0;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x1ac;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x1ba] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xc0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1bd] = DAT_14c8464e0;
  param_1[0x1be] = uVar1;
  param_1[0x1bf] = DAT_14c8464f0;
  return param_1;
}



// FUNCTION 1418c8a6f FUN_1418c8a6f body=68 status=ok
// SIG undefined FUN_1418c8a6f(void)

void FUN_1418c8a6f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b701d90;
  puVar1[5] = &PTR_FUN_14b702040;
  puVar1[10] = &PTR_FUN_14b702070;
  puVar1[0xb] = &PTR_FUN_14b7020a0;
  return;
}



// FUNCTION 1418c8ab4 FUN_1418c8ab4 body=1538 status=ok
// SIG undefined FUN_1418c8ab4(void)

void FUN_1418c8ab4(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  iVar4 = local_24;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (undefined4)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407aedfe(CONCAT44(uStack_1c,uStack_20),iVar4 != 0,&uStack_38,local_3c);
  if (CONCAT44(uStack_34,uStack_38) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c90b8 FUN_1418c90b8 body=40 status=ok
// SIG undefined FUN_1418c90b8(void)

undefined8 FUN_1418c90b8(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c90ea FUN_1418c90ea body=736 status=ok
// SIG undefined FUN_1418c90ea(void)

void FUN_1418c90ea(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = DAT_14c9a3d60;
  if (param_1[0xc] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = param_1[0xc] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    param_1[0xc] = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (param_1[9] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = param_1[9] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    param_1[9] = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (param_1[6] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = param_1[6] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    param_1[6] = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (param_1[3] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = param_1[3] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    param_1[3] = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*param_1 != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *param_1 + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1418c93ca FUN_1418c93ca body=139 status=ok
// SIG undefined FUN_1418c93ca(void)

void FUN_1418c93ca(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 1418c9456 FUN_1418c9456 body=29 status=ok
// SIG undefined FUN_1418c9456(void)

undefined8 FUN_1418c9456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c947c FUN_1418c947c body=91 status=ok
// SIG undefined FUN_1418c947c(void)

void FUN_1418c947c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0xa8) = 0;
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_2 + 0x10);
  return;
}



// FUNCTION 1418c94d8 FUN_1418c94d8 body=121 status=ok
// SIG undefined FUN_1418c94d8(void)

undefined1 FUN_1418c94d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_140816cc4();
      FUN_140816cc4(param_2 + lVar6 + 0x60,param_3 + lVar6 + 0x60);
      *(undefined1 *)(param_2 + lVar6 + 0xb0) = *(undefined1 *)(param_3 + lVar6 + 0xb0);
      lVar6 = lVar6 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c9552 FUN_1418c9552 body=91 status=ok
// SIG undefined FUN_1418c9552(void)

void FUN_1418c9552(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x10);
  return;
}



// FUNCTION 1418c95ae FUN_1418c95ae body=29 status=ok
// SIG undefined FUN_1418c95ae(void)

undefined8 FUN_1418c95ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c95cc FUN_1418c95cc body=648 status=ok
// SIG undefined FUN_1418c95cc(void)

void FUN_1418c95cc(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  memset(param_2 + 1,0,0x270);
  *param_2 = &PTR_FUN_14ab51200;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x44610000;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x26) = 1;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_2 + 5,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_2 + 0x4b) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xaaad1010;
  param_2[0x24] = 0;
  *(undefined4 *)(param_2 + 0x25) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0;
  *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x134) = 0;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x29) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *param_2 = &PTR_FUN_14b71b000;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x194) = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  *(undefined1 *)(param_2 + 0x36) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  *(undefined2 *)(param_2 + 0x3b) = 1;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  param_2[0x44] = 0;
  *(undefined4 *)(param_2 + 0x45) = 0;
  param_2[0x4e] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c9856 FUN_1418c9856 body=71 status=ok
// SIG undefined FUN_1418c9856(void)

undefined8 * FUN_1418c9856(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418c989d FUN_1418c989d body=97 status=ok
// SIG undefined FUN_1418c989d(void)

void FUN_1418c989d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  puVar1[6] = 0x41f0000000000000;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_14b723680;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 1418c98fe FUN_1418c98fe body=57 status=ok
// SIG undefined FUN_1418c98fe(void)

void FUN_1418c98fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba96a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba96a0 = FUN_140002ddd(FUN_1465d424d,uVar1,L"OakHealthTypeBalanceData");
  }
  return;
}



// FUNCTION 1418c9938 FUN_1418c9938 body=158 status=ok
// SIG undefined FUN_1418c9938(void)

longlong * FUN_1418c9938(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if (param_1[1] != lVar2) {
    param_1[3] = 0;
  }
  param_1[1] = lVar2;
  if (param_1[2] != param_2[2]) {
    param_1[3] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[2] = lVar2;
  param_1[3] = param_2[3];
  lVar2 = param_2[4];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
    }
  }
  param_1[4] = lVar2;
  return param_1;
}



// FUNCTION 1418c99d6 FUN_1418c99d6 body=117 status=ok
// SIG undefined FUN_1418c99d6(void)

undefined8 * FUN_1418c99d6(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418c9a4c FUN_1418c9a4c body=117 status=ok
// SIG undefined FUN_1418c9a4c(void)

undefined8 * FUN_1418c9a4c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418c9ac2 FUN_1418c9ac2 body=317 status=ok
// SIG undefined FUN_1418c9ac2(void)

void FUN_1418c9ac2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,400);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b02dd20;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x29) = 0;
  *(undefined8 *)((longlong)param_2 + 0x31) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  FUN_1405c5fa2();
  param_2[0xd] = &DAT_14cb769e8;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = &PTR_FUN_14b0394b0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0xf00000d0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf00000d0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0xf00000d0;
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x22) = 0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  *(undefined8 *)((longlong)param_2 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x154) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *param_2 = &PTR_FUN_14b729490;
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined1 *)((longlong)param_2 + 0x184) = 0;
  *(undefined4 *)(param_2 + 0x32) = 0x1001;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 1418c9c00 FUN_1418c9c00 body=57 status=ok
// SIG undefined FUN_1418c9c00(void)

void FUN_1418c9c00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba96c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba96c0 = FUN_140002ddd(FUN_1465d4653,uVar1,L"OakDamageSourceDef");
  }
  return;
}



// FUNCTION 1418c9c39 FUN_1418c9c39 body=49 status=ok
// SIG undefined FUN_1418c9c39(void)

longlong FUN_1418c9c39(void)

{
  if (DAT_14cba9778 == 0) {
    FUN_1409ce572(&DAT_14cba9778,&PTR_FUN_14b72fb20);
  }
  return DAT_14cba9778;
}



// FUNCTION 1418c9c6a FUN_1418c9c6a body=170 status=ok
// SIG undefined FUN_1418c9c6a(void)

void FUN_1418c9c6a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *(undefined4 *)(puVar1 + 0x27) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x22] = 0;
  *(undefined2 *)(puVar1 + 0x23) = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  *puVar1 = &PTR_FUN_14b7316c0;
  puVar1[5] = &PTR_FUN_14b731b50;
  puVar1[6] = &PTR_LAB_14b731b90;
  *(undefined2 *)(puVar1 + 0x2f) = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = &DAT_3f8000003f800000;
  puVar1[0x37] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1418c9d14 FUN_1418c9d14 body=57 status=ok
// SIG undefined FUN_1418c9d14(void)

void FUN_1418c9d14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9940 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9940 = FUN_140002ddd(FUN_1465d4f72,uVar1,L"OakDiscoveryCategoryDef");
  }
  return;
}



// FUNCTION 1418c9d4d FUN_1418c9d4d body=280 status=ok
// SIG undefined FUN_1418c9d4d(void)

void FUN_1418c9d4d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b121200;
  puVar1[5] = &PTR_FUN_14b121680;
  puVar1[6] = &PTR_LAB_14b1216c0;
  puVar1[0x22] = &PTR_FUN_14b121710;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  FUN_1406516ce(puVar1 + 0x27);
  puVar1[0xa6] = 0;
  puVar1[0xa7] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xaa] = 0;
  *puVar1 = &PTR_FUN_14b7347d0;
  puVar1[5] = &PTR_FUN_14b734c50;
  puVar1[6] = &PTR_LAB_14b734c90;
  puVar1[0x22] = &PTR_FUN_14b734ce0;
  FUN_1406516ce(puVar1 + 0xab);
  puVar1[0xab] = &PTR_FUN_14b739090;
  *(undefined8 *)((longlong)puVar1 + 0x99c) = 0;
  puVar1[0x135] = 0;
  puVar1[0x136] = 0;
  *(undefined4 *)(puVar1 + 0x137) = 0;
  puVar1[0x12a] = 0;
  puVar1[299] = 0;
  puVar1[300] = 0;
  puVar1[0x12d] = 0;
  puVar1[0x12e] = 0;
  puVar1[0x12f] = 0;
  puVar1[0x130] = 0;
  puVar1[0x131] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x98a) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x992) = 0;
  puVar1[0x138] = 0;
  puVar1[0x139] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9cd) = 0;
  return;
}



// FUNCTION 1418c9e66 FUN_1418c9e66 body=57 status=ok
// SIG undefined FUN_1418c9e66(void)

void FUN_1418c9e66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa0f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa0f0 = FUN_140002ddd(FUN_1465d6a46,uVar1,L"OakEchoLogCategoryDef");
  }
  return;
}



// FUNCTION 1418c9ea0 FUN_1418c9ea0 body=99 status=ok
// SIG undefined FUN_1418c9ea0(void)

void FUN_1418c9ea0(longlong *param_1)

{
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c9f04 FUN_1418c9f04 body=118 status=ok
// SIG undefined FUN_1418c9f04(void)

undefined8 FUN_1418c9f04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbc8c68 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cbc8c68,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c9f7c FUN_1418c9f7c body=802 status=ok
// SIG undefined FUN_1418c9f7c(void)

void FUN_1418c9f7c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2 + 2,0,0xe0);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b746c80;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0x401d;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0xd] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0xe) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0xf] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x17] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 0x18) = DAT_14c844848;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0x646c63;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 1418ca29e FUN_1418ca29e body=117 status=ok
// SIG undefined FUN_1418ca29e(void)

undefined8 * FUN_1418ca29e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418ca325 FUN_1418ca325 body=35 status=ok
// SIG undefined FUN_1418ca325(void)

void FUN_1418ca325(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409915e6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b74d530;
  return;
}



// FUNCTION 1418ca348 FUN_1418ca348 body=35 status=ok
// SIG undefined FUN_1418ca348(void)

void FUN_1418ca348(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f5086a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b74ec10;
  return;
}



// FUNCTION 1418ca36c FUN_1418ca36c body=40 status=ok
// SIG undefined FUN_1418ca36c(void)

undefined8 FUN_1418ca36c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ca394 FUN_1418ca394 body=40 status=ok
// SIG undefined FUN_1418ca394(void)

undefined8 FUN_1418ca394(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ca3bc FUN_1418ca3bc body=40 status=ok
// SIG undefined FUN_1418ca3bc(void)

undefined8 FUN_1418ca3bc(undefined8 param_1,int param_2)

{
  FUN_140c2c082();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ca3e4 FUN_1418ca3e4 body=354 status=ok
// SIG undefined FUN_1418ca3e4(void)

longlong * FUN_1418ca3e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (lVar5 == 0) {
    uVar4 = FUN_14036a63e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x48) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar6 = *(longlong *)(param_1 + 0x50);
  if (lVar6 != 0) {
LAB_1418ca40d:
    if (lVar5 == 0) {
      uVar4 = FUN_14036a63e();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x48) = lVar5;
      lVar6 = *(longlong *)(param_1 + 0x50);
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_1 + 0x50) = lVar6;
      }
    }
    plVar1 = *(longlong **)(lVar6 + 0x18);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x20);
    return param_2;
  }
  if ((lVar5 != 0) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0x50) = lVar6;
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x48);
        goto LAB_1418ca40d;
      }
    }
  }
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1418ca558 FUN_1418ca558 body=57 status=ok
// SIG undefined FUN_1418ca558(void)

void FUN_1418ca558(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaade8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaade8 = FUN_140002ddd(FUN_1465da872,uVar1,L"OakPlayerDifficultyElementBalanceData");
  }
  return;
}



// FUNCTION 1418ca592 FUN_1418ca592 body=330 status=ok
// SIG undefined FUN_1418ca592(void)

void FUN_1418ca592(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418ca600;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1418ca600:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418ca6dc FUN_1418ca6dc body=309 status=ok
// SIG undefined FUN_1418ca6dc(void)

void FUN_1418ca6dc(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1418ca746;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = DAT_14c841df8;
          }
          uVar3 = -uVar6 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
      }
    }
LAB_1418ca746:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar6) {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
    param_3 = uVar6;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418ca812 FUN_1418ca812 body=334 status=ok
// SIG undefined FUN_1418ca812(void)

void FUN_1418ca812(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418ca884;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1418ca884:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418ca960 FUN_1418ca960 body=112 status=ok
// SIG undefined FUN_1418ca960(void)

void FUN_1418ca960(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1418ca9d0 FUN_1418ca9d0 body=71 status=ok
// SIG undefined FUN_1418ca9d0(void)

undefined8 * FUN_1418ca9d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418caa18 FUN_1418caa18 body=57 status=ok
// SIG undefined FUN_1418caa18(void)

void FUN_1418caa18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab560 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab560 = FUN_140002ddd(FUN_1465dd290,uVar1,L"HeavyWeaponNamingRow");
  }
  return;
}



// FUNCTION 1418caa51 FUN_1418caa51 body=49 status=ok
// SIG undefined FUN_1418caa51(void)

longlong FUN_1418caa51(void)

{
  if (DAT_14cbab858 == 0) {
    FUN_14073dd9a(&DAT_14cbab858,&PTR_LAB_14b77ef70);
  }
  return DAT_14cbab858;
}



// FUNCTION 1418caa82 FUN_1418caa82 body=32 status=ok
// SIG undefined FUN_1418caa82(void)

void FUN_1418caa82(undefined8 param_1,undefined8 *param_2)

{
  FUN_140cc2f8a(param_2);
  *param_2 = &PTR_FUN_14b973bb0;
  return;
}



// FUNCTION 1418caaa2 FUN_1418caaa2 body=118 status=ok
// SIG undefined FUN_1418caaa2(void)

undefined8 FUN_1418caaa2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbcb508 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbcb508,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cab1a FUN_1418cab1a body=204 status=ok
// SIG undefined FUN_1418cab1a(void)

undefined8 FUN_1418cab1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  longlong lVar12;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x50);
      uVar2 = *(undefined4 *)(param_3 + -0x4c);
      uVar3 = *(undefined4 *)(param_3 + -0x48);
      uVar4 = *(undefined4 *)(param_3 + -0x44);
      uVar5 = *(undefined4 *)(param_3 + -0x40);
      uVar6 = *(undefined4 *)(param_3 + -0x3c);
      uVar7 = *(undefined4 *)(param_3 + -0x38);
      uVar8 = *(undefined4 *)(param_3 + -0x34);
      uVar9 = *(undefined4 *)(param_3 + -0x30);
      uVar10 = *(undefined4 *)(param_3 + -0x2c);
      uVar11 = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x34) = *(undefined4 *)(param_3 + -0x34);
      *(undefined4 *)(param_2 + -0x30) = uVar9;
      *(undefined4 *)(param_2 + -0x2c) = uVar10;
      *(undefined4 *)(param_2 + -0x28) = uVar11;
      *(undefined4 *)(param_2 + -0x40) = uVar5;
      *(undefined4 *)(param_2 + -0x3c) = uVar6;
      *(undefined4 *)(param_2 + -0x38) = uVar7;
      *(undefined4 *)(param_2 + -0x34) = uVar8;
      *(undefined4 *)(param_2 + -0x50) = uVar1;
      *(undefined4 *)(param_2 + -0x4c) = uVar2;
      *(undefined4 *)(param_2 + -0x48) = uVar3;
      *(undefined4 *)(param_2 + -0x44) = uVar4;
      lVar12 = *(longlong *)(param_3 + -0x20);
      if (DAT_14c950c29 == '\x01') {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + -0x20);
        }
      }
      *(longlong *)(param_2 + -0x20) = lVar12;
      if ((*(longlong *)(param_2 + -0x18) != *(longlong *)(param_3 + -0x18)) ||
         (*(int *)(param_2 + -0x10) != *(int *)(param_3 + -0x10))) {
        *(longlong *)(param_2 + -0x18) = *(longlong *)(param_3 + -0x18);
        *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
        *(undefined8 *)(param_2 + -8) = 0;
      }
      if (param_2 + -0x50 != param_3 + -0x50) {
        lVar12 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar12 = param_3;
        }
        FUN_1400709d4(param_2,lVar12,*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_2 + 0x3c)
                     );
      }
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418cabe6 FUN_1418cabe6 body=68 status=ok
// SIG undefined FUN_1418cabe6(void)

void FUN_1418cabe6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b782a90;
  puVar1[5] = &PTR_FUN_14b782d40;
  puVar1[10] = &PTR_FUN_14b782d70;
  puVar1[0xb] = &PTR_FUN_14b782da0;
  return;
}



// FUNCTION 1418cac2a FUN_1418cac2a body=49 status=ok
// SIG undefined FUN_1418cac2a(void)

longlong FUN_1418cac2a(void)

{
  if (DAT_14cbab8e0 == 0) {
    FUN_14086a14e(&DAT_14cbab8e0,&PTR_FUN_14b783658);
  }
  return DAT_14cbab8e0;
}



// FUNCTION 1418cac5c FUN_1418cac5c body=491 status=ok
// SIG undefined FUN_1418cac5c(void)

void FUN_1418cac5c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_38 = FUN_1446ddbd2();
    local_30 = FUN_1468d96f0;
    local_40 = 0;
    local_48 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_28);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_28);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = FUN_140ca96da(local_28);
  lVar7 = FUN_1405831b2();
  lVar5 = *(longlong *)(lVar7 + 0xd18 + ((ulonglong)uVar6 & 0xff) * 0x18);
  iVar1 = *(int *)(lVar7 + 0xd20 + ((ulonglong)uVar6 & 0xff) * 0x18);
  if ((*param_3 != lVar5) || ((int)param_3[1] != iVar1)) {
    *param_3 = lVar5;
    *(int *)(param_3 + 1) = iVar1;
    param_3[2] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418cae48 FUN_1418cae48 body=49 status=ok
// SIG undefined FUN_1418cae48(void)

longlong FUN_1418cae48(void)

{
  if (DAT_14cbabd70 == 0) {
    FUN_14073dd9a(&DAT_14cbabd70,&PTR_LAB_14b7898a0);
  }
  return DAT_14cbabd70;
}



// FUNCTION 1418cae7a FUN_1418cae7a body=40 status=ok
// SIG undefined FUN_1418cae7a(void)

undefined8 FUN_1418cae7a(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418caea2 FUN_1418caea2 body=141 status=ok
// SIG undefined FUN_1418caea2(void)

longlong * FUN_1418caea2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b669dd0;
  uVar4 = FUN_140aed286();
  FUN_140aed22a(plVar3 + 2,uVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b95e170;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1418caf30 FUN_1418caf30 body=40 status=ok
// SIG undefined FUN_1418caf30(void)

void FUN_1418caf30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140aed286();
  FUN_140aed22a(param_2,uVar1);
  *param_2 = &PTR_FUN_14b95e170;
  return;
}



// FUNCTION 1418caf58 FUN_1418caf58 body=72 status=ok
// SIG undefined FUN_1418caf58(void)

void FUN_1418caf58(longlong *param_1)

{
  if ((char)param_1[10] == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418cafa0 FUN_1418cafa0 body=111 status=ok
// SIG undefined FUN_1418cafa0(void)

undefined8 FUN_1418cafa0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_144837462(DAT_14cbe73d8,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cb010 FUN_1418cb010 body=229 status=ok
// SIG undefined FUN_1418cb010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418cb010(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bb8f84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b193cc0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  uVar2 = uRam000000014c964bc8;
  puVar1[0x1e] = _DAT_14c964bc0;
  puVar1[0x1f] = uVar2;
  uVar2 = uRam000000014c964bd8;
  puVar1[0x20] = _DAT_14c964bd0;
  puVar1[0x21] = uVar2;
  uVar2 = uRam000000014c964be8;
  puVar1[0x22] = _DAT_14c964be0;
  puVar1[0x23] = uVar2;
  uVar2 = uRam000000014c964bf8;
  puVar1[0x24] = _DAT_14c964bf0;
  puVar1[0x25] = uVar2;
  puVar1[0x2d] = 0;
  *(undefined4 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2a] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
  puVar1[0x31] = 0;
  *(undefined4 *)(puVar1 + 0x32) = 0;
  *puVar1 = &PTR_FUN_14b78c320;
  puVar1[0xd] = &PTR_FUN_14b78c6a0;
  puVar1[0x16] = &PTR_FUN_14b78c6e0;
  return;
}



// FUNCTION 1418cb0f5 FUN_1418cb0f5 body=49 status=ok
// SIG undefined FUN_1418cb0f5(void)

longlong FUN_1418cb0f5(void)

{
  if (DAT_14cbac710 == 0) {
    FUN_14073dd9a(&DAT_14cbac710,&PTR_LAB_14b79a2f0);
  }
  return DAT_14cbac710;
}



// FUNCTION 1418cb126 FUN_1418cb126 body=140 status=ok
// SIG undefined FUN_1418cb126(void)

void FUN_1418cb126(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ee02c(puVar1);
  *puVar1 = &PTR_FUN_14b7ab1f0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  *(undefined4 *)(puVar1 + 0x75) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x3ac) = 0;
  puVar1[0x76] = 0;
  puVar1[0x77] = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[0x78] = DAT_14c8464e0;
  puVar1[0x79] = uVar2;
  puVar1[0x7a] = DAT_14c8464f0;
  puVar1[0x7b] = 0;
  puVar1[0x7c] = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[0x7d] = DAT_14c8464e0;
  puVar1[0x7e] = uVar2;
  puVar1[0x7f] = DAT_14c8464f0;
  return;
}



// FUNCTION 1418cb1b2 FUN_1418cb1b2 body=40 status=ok
// SIG undefined FUN_1418cb1b2(void)

undefined8 FUN_1418cb1b2(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418cb1da FUN_1418cb1da body=334 status=ok
// SIG undefined FUN_1418cb1da(void)

void FUN_1418cb1da(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418cb24c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1418cb24c:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418cb328 FUN_1418cb328 body=112 status=ok
// SIG undefined FUN_1418cb328(void)

void FUN_1418cb328(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1418cb3a0 FUN_1418cb3a0 body=203 status=ok
// SIG undefined FUN_1418cb3a0(void)

void FUN_1418cb3a0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x10) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a177080;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_14472eb64((longlong *)(param_2 + 0x18),0);
  }
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (0x80 < *(uint *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0x80;
    FUN_1446efbd8(param_2 + 0x28,0);
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418cb46c FUN_1418cb46c body=57 status=ok
// SIG undefined FUN_1418cb46c(void)

void FUN_1418cb46c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbace38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbace38 = FUN_140002ddd(FUN_1465e4832,uVar1,L"OakMissionObjectiveDef");
  }
  return;
}



// FUNCTION 1418cb4a5 FUN_1418cb4a5 body=168 status=ok
// SIG undefined FUN_1418cb4a5(void)

void FUN_1418cb4a5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140be5df0(puVar1,param_1);
  *(undefined1 *)(puVar1 + 0xd8) = 0;
  puVar1[199] = 0;
  puVar1[200] = 0;
  puVar1[0xca] = 0;
  puVar1[0xcb] = 0;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  puVar1[0xce] = 0;
  puVar1[0xcf] = 0;
  puVar1[0xd0] = 0;
  puVar1[0xd1] = 0;
  *(undefined4 *)(puVar1 + 0xd2) = 0;
  puVar1[0xda] = 0;
  puVar1[0xdb] = 0;
  puVar1[0xdc] = 0;
  puVar1[0xdd] = 0;
  *puVar1 = &PTR_FUN_14b7bc160;
  puVar1[5] = &PTR_FUN_14b7bcb90;
  puVar1[6] = &PTR_LAB_14b7bcbd0;
  puVar1[0x55] = &PTR_FUN_14b7bcc20;
  puVar1[0x56] = &PTR_FUN_14b7bcca0;
  puVar1[0x57] = &PTR_FUN_14b7bccb0;
  return;
}



// FUNCTION 1418cb54e FUN_1418cb54e body=211 status=ok
// SIG undefined FUN_1418cb54e(void)

undefined8 * FUN_1418cb54e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7bafd0;
  param_1[0x72] = &PTR_LAB_14b7bb608;
  param_1[0x73] = &PTR_LAB_14b7bb620;
  param_1[0x74] = &PTR_LAB_14b7bb6c0;
  FUN_1404d595a(param_1 + 0x98,1);
  param_1[0x92] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x95) = 0;
  if (*(int *)((longlong)param_1 + 0x4ac) != 0) {
    FUN_140115c12(param_1 + 0x94,0);
  }
  param_1[0x93] = 0;
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  param_1[0x91] = 0;
  FUN_14028f4a8(param_1 + 0x76);
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418cb622 FUN_1418cb622 body=40 status=ok
// SIG undefined FUN_1418cb622(void)

undefined8 FUN_1418cb622(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418cb64a FUN_1418cb64a body=40 status=ok
// SIG undefined FUN_1418cb64a(void)

undefined8 FUN_1418cb64a(undefined8 param_1,int param_2)

{
  FUN_140d4f690();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418cb672 FUN_1418cb672 body=40 status=ok
// SIG undefined FUN_1418cb672(void)

undefined8 FUN_1418cb672(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418cb69a FUN_1418cb69a body=91 status=ok
// SIG undefined FUN_1418cb69a(void)

void FUN_1418cb69a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0x20);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x40) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x38) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 1418cb6f6 FUN_1418cb6f6 body=312 status=ok
// SIG undefined FUN_1418cb6f6(void)

void FUN_1418cb6f6(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStack_68 [40];
  undefined8 ***local_40 [3];
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 1,0,0x408);
  *param_2 = &PTR_FUN_14b7b80f0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  param_2[8] = &PTR_FUN_14b099c30;
  *(undefined1 *)((longlong)param_2 + 0x59) = 0;
  local_28 = 8;
  local_40[0] = (undefined8 ****)0x4170000042700000;
  local_20 = 0xb;
  param_2[0xc] = 0;
  *(undefined2 *)(param_2 + 0x10) = 8;
  pcVar1 = DAT_14c9a9218;
  if ((DAT_14c9a9218 == (code *)0x0) && (pcVar1 = DAT_14c9a9210, DAT_14c9a9210 == (code *)0x0)) {
    memcpy(param_2 + 0xd,local_40,(longlong)DAT_14c9a9170);
  }
  else {
    (*pcVar1)(param_2 + 0xd,local_40);
  }
  *(undefined1 *)(param_2 + 0x11) = local_20;
  local_20 = 0;
  *(undefined1 *)(param_2 + 0x12) = 3;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_40[0];
    if (local_28 < 0x19) {
      ppppuVar2 = local_40;
    }
    (*DAT_14c9a85d0)(ppppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  FUN_140803772(param_2 + 0x13);
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418cb830 FUN_1418cb830 body=152 status=ok
// SIG undefined FUN_1418cb830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418cb830(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_2 + 0x38) = &PTR_FUN_14b7bd2a0;
  FUN_14104d982(*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x58));
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x38) = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_2 + 0x48) != '\0') &&
     (puVar1 = *(undefined8 **)(param_2 + 0x40), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001418cb8ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1418cb8d0 FUN_1418cb8d0 body=49 status=ok
// SIG undefined FUN_1418cb8d0(void)

longlong FUN_1418cb8d0(void)

{
  if (DAT_14cbadd98 == 0) {
    FUN_14073dd9a(&DAT_14cbadd98,&PTR_FUN_14b7cf5b0);
  }
  return DAT_14cbadd98;
}



// FUNCTION 1418cb902 FUN_1418cb902 body=229 status=ok
// SIG undefined FUN_1418cb902(void)

void FUN_1418cb902(longlong *param_1,undefined1 param_2,longlong *param_3,undefined4 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_58 = 0x6000;
  local_50 = 0;
  if (*param_3 != 0 || (int)param_3[1] != 0x6000) {
    local_60 = *param_3;
    local_58 = (int)param_3[1];
  }
  local_38 = *(undefined8 *)(param_4 + 4);
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_30 = param_5;
  local_2f = param_6;
  local_2e = param_7;
  local_2d = param_8;
  local_2c = param_9;
  local_68[0] = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad890);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cb9e8 FUN_1418cb9e8 body=4583 status=ok
// SIG undefined FUN_1418cb9e8(void)

void FUN_1418cb9e8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined1 *_Src;
  undefined8 *puVar10;
  undefined4 *_Src_00;
  int *piVar11;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_49 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_d0 = FUN_1409f1a5c;
      local_d8 = &DAT_14c9520b8;
      local_e0 = 0;
      local_e8 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_49);
            goto LAB_1418cbae5;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_49) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_49,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_49,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_49,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_49,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
LAB_1418cbae5:
  local_68 = 0;
  local_60 = 0x6000;
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_14170fd90;
      local_e0 = 0x8000000000000000;
      local_e8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_68);
            goto LAB_1418cbbcc;
          }
        }
        puVar10 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar10 != &local_68) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_68,puVar10,(int)plVar1[6]);
          }
          else {
            memcpy(&local_68,puVar10,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_68,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_68,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
LAB_1418cbbcc:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_80);
            goto LAB_1418cbc96;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_80) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_80,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_80,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_80,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_80,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
LAB_1418cbc96:
  local_84 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_14067a048;
      local_e0 = 0;
      local_e8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_84);
            goto LAB_1418cbd6b;
          }
        }
        piVar11 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar11 != &local_84) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_84,piVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_84,piVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_84,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_84,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
LAB_1418cbd6b:
  iVar8 = local_84;
  local_88 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_14067a048;
      local_e0 = 0;
      local_e8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_88);
            goto LAB_1418cbe47;
          }
        }
        piVar11 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar11 != &local_88) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_88,piVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_88,piVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_88,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_88,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
LAB_1418cbe47:
  iVar7 = local_88;
  local_8c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_14067a048;
      local_e0 = 0;
      local_e8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_8c);
            goto LAB_1418cbf1b;
          }
        }
        piVar11 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar11 != &local_8c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_8c,piVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_8c,piVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_8c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_8c,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
LAB_1418cbf1b:
  iVar6 = local_8c;
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_14067a048;
      local_e0 = 0;
      local_e8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_90);
            goto LAB_1418cbfec;
          }
        }
        piVar11 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar11 != &local_90) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_90,piVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_90,piVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_90,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_90,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
LAB_1418cbfec:
  iVar5 = local_90;
  local_94 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_14067a048;
      local_e0 = 0;
      local_e8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar1);
          if (cVar9 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_94);
            goto LAB_1418cc0bd;
          }
        }
        piVar11 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar11 != &local_94) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_94,piVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_94,piVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar1[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_94,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_94,lVar2);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar10;
        puVar10 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
LAB_1418cc0bd:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_70;
  local_b8 = local_80;
  uStack_b4 = uStack_7c;
  uStack_b0 = uStack_78;
  uStack_ac = uStack_74;
  local_c8 = local_94 != 0;
  local_e0 = CONCAT71(local_e0._1_7_,iVar7 != 0);
  local_d8 = (undefined *)CONCAT71(local_d8._1_7_,iVar6 != 0);
  local_d0 = (code *)CONCAT71(local_d0._1_7_,iVar5 != 0);
  local_e8 = CONCAT71(local_e8._1_7_,iVar8 != 0);
  (**(code **)(*param_1 + 0x1328))(param_1,local_49,&local_68);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ccbf6 FUN_1418ccbf6 body=620 status=ok
// SIG undefined FUN_1418ccbf6(void)

void FUN_1418ccbf6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1418ccce0;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_1418ccce0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1260))(param_1,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cce64 FUN_1418cce64 body=1211 status=ok
// SIG undefined FUN_1418cce64(void)

void FUN_1418cce64(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1418ccf4f;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1418ccf4f:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952318) {
    FUN_144b3d300(&DAT_14c952318);
    if (DAT_14c952318 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1468e122c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_34);
            goto LAB_1418cd01b;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_34,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_34,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_34,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
LAB_1418cd01b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = (**(code **)(*param_1 + 0x11d8))(param_1,local_30,local_34);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerSetBestGrappleable_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x11e0))(param_1,local_30,local_34);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cd320 FUN_1418cd320 body=666 status=ok
// SIG undefined FUN_1418cd320(void)

void FUN_1418cd320(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1418cd40b;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1418cd40b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = (**(code **)(*param_1 + 0x11f8))(param_1,local_30);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerSetBestTarget_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1200))(param_1,local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cd5bc FUN_1418cd5bc body=669 status=ok
// SIG undefined FUN_1418cd5bc(void)

void FUN_1418cd5bc(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1418cd6a6;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_1418cd6a6:
  iVar5 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar6 = (**(code **)(*param_1 + 0x11e8))(param_1,local_2c != 0);
  if (cVar6 == '\0') {
    FUN_1468998ea(L"ServerSetFullyAimingAtTarget_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x11f0))(param_1,iVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cd85a FUN_1418cd85a body=669 status=ok
// SIG undefined FUN_1418cd85a(void)

void FUN_1418cd85a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1418cd944;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_1418cd944:
  iVar5 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar6 = (**(code **)(*param_1 + 0x12f0))(param_1,local_2c != 0);
  if (cVar6 == '\0') {
    FUN_1468998ea(L"ServerSetRemoteCameraInfo_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x12f8))(param_1,iVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cdaf8 FUN_1418cdaf8 body=1886 status=ok
// SIG undefined FUN_1418cdaf8(void)

void FUN_1418cdaf8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1418cdbe6;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar1[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1418cdbe6:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1405ebbb2;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_1418cdcbb;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar1[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_1418cdcbb:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952318) {
    FUN_144b3d300(&DAT_14c952318);
    if (DAT_14c952318 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1468e122c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_1418cdd90;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar1[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_1418cdd90:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  cVar5 = (**(code **)(*param_1 + 0x1300))(param_1,&local_68,local_44,local_48);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerUpdateOakCamera_Validate");
  }
  else {
    local_88 = local_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    local_78 = local_30;
    (**(code **)(*param_1 + 0x1308))(param_1,&local_88,local_44,local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ce258 FUN_1418ce258 body=101 status=ok
// SIG undefined FUN_1418ce258(void)

void FUN_1418ce258(longlong *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_1c = param_3;
  local_1b = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadd48);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ce2be FUN_1418ce2be body=1755 status=ok
// SIG undefined FUN_1418ce2be(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1418ce2be(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_3c;
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_38 + 1);
            goto LAB_1418ce3a9;
          }
        }
        piVar9 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar9 != local_38 + 1) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_38 + 1,piVar9,(int)plVar1[6]);
          }
          else {
            memcpy(local_38 + 1,piVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_38 + 1,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_38 + 1,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 1);
  }
LAB_1418ce3a9:
  local_38[0] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_38);
            goto LAB_1418ce475;
          }
        }
        piVar9 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar9 != local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_38,piVar9,(int)plVar1[6]);
          }
          else {
            memcpy(local_38,piVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_38,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
LAB_1418ce475:
  iVar6 = local_38[0];
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_3c);
            goto LAB_1418ce545;
          }
        }
        piVar9 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar9 != &local_3c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_3c,piVar9,(int)plVar1[6]);
          }
          else {
            memcpy(&local_3c,piVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_3c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_3c,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
LAB_1418ce545:
  iVar5 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar7 = (**(code **)(*param_1 + 0x1448))(param_1,local_38 + 1,iVar6 != 0,local_3c != 0);
  if (cVar7 == '\0') {
    FUN_1468998ea(L"ServerUseJunkObject_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1450))(param_1,local_38 + 1,iVar6 != 0,iVar5 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ce99a FUN_1418ce99a body=93 status=ok
// SIG undefined FUN_1418ce99a(void)

undefined8 * FUN_1418ce99a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3a4ae0;
  param_1[0x72] = &PTR_LAB_14b3a5120;
  param_1[0x73] = &PTR_LAB_14b3a5140;
  FUN_14028f4a8(param_1 + 0x74);
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ce9f8 FUN_1418ce9f8 body=88 status=ok
// SIG undefined FUN_1418ce9f8(void)

longlong * FUN_1418ce9f8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418cea50 FUN_1418cea50 body=397 status=ok
// SIG undefined FUN_1418cea50(void)

void FUN_1418cea50(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  memset(param_2 + 1,0,0xd0);
  *param_2 = &PTR_FUN_14ab51200;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x44610000;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x26) = 1;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_2 + 5,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_2 + 0x4b) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  *(undefined2 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *param_2 = &PTR_FUN_14b7d0b30;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cebf4 FUN_1418cebf4 body=49 status=ok
// SIG undefined FUN_1418cebf4(void)

longlong FUN_1418cebf4(void)

{
  if (DAT_14cbae3e0 == 0) {
    FUN_14073dd9a(&DAT_14cbae3e0,&PTR_LAB_14b7d9c40);
  }
  return DAT_14cbae3e0;
}



// FUNCTION 1418cec34 FUN_1418cec34 body=116 status=ok
// SIG undefined FUN_1418cec34(void)

undefined8 FUN_1418cec34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar11);
      lVar2 = param_2 + 0x28 + lVar11;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 8);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[4];
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_1447715ec(lVar2,puVar1 + 10);
      uVar10 = *(undefined8 *)(puVar1 + 0x16);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(puVar1 + 0x14);
      *(undefined8 *)(lVar2 + 0x30) = uVar10;
      lVar11 = lVar11 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418cecba FUN_1418cecba body=57 status=ok
// SIG undefined FUN_1418cecba(void)

void FUN_1418cecba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae870 = FUN_140002ddd(FUN_1465ebf78,uVar1,L"ShieldNamingRow");
  }
  return;
}



// FUNCTION 1418cecf4 FUN_1418cecf4 body=3309 status=ok
// SIG undefined FUN_1418cecf4(void)

void FUN_1418cecf4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1418cedf1;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1418cedf1:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_1418ceec7;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_1418ceec7:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_1418cef9d;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_1418cef9d:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_1418cf072;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_1418cf072:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_1418cf145;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_1418cf145:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_1418cf21c;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_1418cf21c:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  FUN_140e25434(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cf9e2 FUN_1418cf9e2 body=57 status=ok
// SIG undefined FUN_1418cf9e2(void)

void FUN_1418cf9e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae9f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae9f0 = FUN_140002ddd(FUN_1465ec5dc,uVar1,L"OakSingularityDef");
  }
  return;
}



// FUNCTION 1418cfa1c FUN_1418cfa1c body=334 status=ok
// SIG undefined FUN_1418cfa1c(void)

void FUN_1418cfa1c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418cfa8e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1418cfa8e:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418cfb6a FUN_1418cfb6a body=112 status=ok
// SIG undefined FUN_1418cfb6a(void)

void FUN_1418cfb6a(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1418cfbda FUN_1418cfbda body=78 status=ok
// SIG undefined FUN_1418cfbda(void)

void FUN_1418cfbda(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined4 *)((longlong)param_2 + 0x18) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 100) = 2;
  FUN_1405c5fa2();
  *(undefined **)((longlong)param_2 + 0x70) = &DAT_14cb769e8;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined ***)((longlong)param_2 + 0x68) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1418cfc28 FUN_1418cfc28 body=100 status=ok
// SIG undefined FUN_1418cfc28(void)

void FUN_1418cfc28(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0x68) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x80) = 0;
  if (*(int *)(param_2 + 0x84) != 0) {
    FUN_140115c12(param_2 + 0x78,0);
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418cfc8c FUN_1418cfc8c body=68 status=ok
// SIG undefined FUN_1418cfc8c(void)

void FUN_1418cfc8c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a0da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7f5630;
  puVar1[5] = &PTR_FUN_14b7f58e0;
  puVar1[10] = &PTR_FUN_14b7f5910;
  puVar1[0xb] = &PTR_FUN_14b7f5940;
  return;
}



// FUNCTION 1418cfcd0 FUN_1418cfcd0 body=40 status=ok
// SIG undefined FUN_1418cfcd0(void)

undefined8 FUN_1418cfcd0(undefined8 param_1,int param_2)

{
  FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418cfcf8 FUN_1418cfcf8 body=141 status=ok
// SIG undefined FUN_1418cfcf8(void)

longlong * FUN_1418cfcf8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b8009e0;
  uVar4 = FUN_140d8d5f0();
  FUN_140d8d594(plVar3 + 2,uVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b9a0c80;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1418cfd86 FUN_1418cfd86 body=40 status=ok
// SIG undefined FUN_1418cfd86(void)

void FUN_1418cfd86(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d8d5f0();
  FUN_140d8d594(param_2,uVar1);
  *param_2 = &PTR_FUN_14b9a0c80;
  return;
}



// FUNCTION 1418cfdae FUN_1418cfdae body=384 status=ok
// SIG undefined FUN_1418cfdae(void)

void FUN_1418cfdae(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 1,0,0xd8);
  *param_2 = &PTR_FUN_14ab51200;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x44610000;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x26) = 1;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_2 + 5,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_2 + 0x4b) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0xaaad1010;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b7fde70;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418cff5c FUN_1418cff5c body=72 status=ok
// SIG undefined FUN_1418cff5c(void)

void FUN_1418cff5c(undefined8 param_1,longlong param_2)

{
  FUN_140d4df51(*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x48));
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4df51(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418cffa4 FUN_1418cffa4 body=112 status=ok
// SIG undefined FUN_1418cffa4(void)

longlong FUN_1418cffa4(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x14);
  FUN_14020a6cc(param_1 + 0x10,1);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
  FUN_14020a6cc(param_1 + 0x1c,1);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2c);
  FUN_14020a6cc(param_1 + 0x28,1);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x38);
  FUN_14020a6cc(param_1 + 0x34,1);
  return param_1;
}



// FUNCTION 1418d0014 FUN_1418d0014 body=952 status=ok
// SIG undefined FUN_1418d0014(void)

void FUN_1418d0014(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b8028e0;
  plVar4 = (longlong *)param_1[0xc];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x4c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 8) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 8) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 5) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 5) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 5) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x1c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 2) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 2) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1418d03cc FUN_1418d03cc body=123 status=ok
// SIG undefined FUN_1418d03cc(void)

void FUN_1418d03cc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_14044066a((longlong)param_2 + 0x10,10,1);
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined2 *)((longlong)param_2 + 0x68) = 4;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x70) = 3;
  *(char *)((longlong)param_2 + 0x78) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined1 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  return;
}



// FUNCTION 1418d0448 FUN_1418d0448 body=139 status=ok
// SIG undefined FUN_1418d0448(void)

void FUN_1418d0448(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  return;
}



// FUNCTION 1418d04d4 FUN_1418d04d4 body=29 status=ok
// SIG undefined FUN_1418d04d4(void)

undefined8 FUN_1418d04d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d04f1 FUN_1418d04f1 body=49 status=ok
// SIG undefined FUN_1418d04f1(void)

longlong FUN_1418d04f1(void)

{
  if (DAT_14cbafac8 == 0) {
    FUN_14073dd9a(&DAT_14cbafac8,&PTR_LAB_14b80ba18);
  }
  return DAT_14cbafac8;
}



// FUNCTION 1418d0522 FUN_1418d0522 body=49 status=ok
// SIG undefined FUN_1418d0522(void)

longlong FUN_1418d0522(void)

{
  if (DAT_14cbafae0 == 0) {
    FUN_14073dd9a(&DAT_14cbafae0,&PTR_LAB_14b80bea8);
  }
  return DAT_14cbafae0;
}



// FUNCTION 1418d0554 FUN_1418d0554 body=40 status=ok
// SIG undefined FUN_1418d0554(void)

undefined8 FUN_1418d0554(undefined8 param_1,int param_2)

{
  FUN_140ef12ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d057c FUN_1418d057c body=45 status=ok
// SIG undefined FUN_1418d057c(void)

void FUN_1418d057c(undefined8 param_1,longlong param_2)

{
  FUN_140368c45(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d05aa FUN_1418d05aa body=71 status=ok
// SIG undefined FUN_1418d05aa(void)

void FUN_1418d05aa(undefined8 param_1,longlong *param_2)

{
  FUN_140e2ab07(param_2[4],(int)param_2[5]);
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d05f2 FUN_1418d05f2 body=71 status=ok
// SIG undefined FUN_1418d05f2(void)

void FUN_1418d05f2(longlong *param_1)

{
  FUN_140e2ab07(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d063a FUN_1418d063a body=117 status=ok
// SIG undefined FUN_1418d063a(void)

undefined8 * FUN_1418d063a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418d06b0 FUN_1418d06b0 body=143 status=ok
// SIG undefined FUN_1418d06b0(void)

void FUN_1418d06b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
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
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d0740 FUN_1418d0740 body=83 status=ok
// SIG undefined FUN_1418d0740(void)

undefined8 * FUN_1418d0740(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1400b22c2(param_1 + 1,&DAT_149e02088);
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1400b22c2(param_1 + 9,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1418d0794 FUN_1418d0794 body=65 status=ok
// SIG undefined FUN_1418d0794(void)

void FUN_1418d0794(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418d07d6 FUN_1418d07d6 body=189 status=ok
// SIG undefined FUN_1418d07d6(void)

undefined4 * FUN_1418d07d6(undefined4 *param_1)

{
  *param_1 = 0x1000000;
  FUN_1400b22c2(param_1 + 2,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 6,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 10,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_1400b22c2(param_1 + 0x14,&DAT_149e02088);
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  FUN_1400b22c2(param_1 + 0x3e,&DAT_149e02088);
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 1418d0894 FUN_1418d0894 body=144 status=ok
// SIG undefined FUN_1418d0894(void)

undefined8 * FUN_1418d0894(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b81be08;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 9;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xd) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xc)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xc)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d0924 FUN_1418d0924 body=142 status=ok
// SIG undefined FUN_1418d0924(void)

void FUN_1418d0924(longlong *param_1)

{
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418d09b2 FUN_1418d09b2 body=59 status=ok
// SIG undefined FUN_1418d09b2(void)

undefined8 * FUN_1418d09b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8194d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d09ee FUN_1418d09ee body=301 status=ok
// SIG undefined FUN_1418d09ee(void)

void FUN_1418d09ee(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_2 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c844848;
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  FUN_140056680(param_2 + 6,&DAT_149dfb77a);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 1418d0b1c FUN_1418d0b1c body=92 status=ok
// SIG undefined FUN_1418d0b1c(void)

void FUN_1418d0b1c(undefined8 param_1,longlong *param_2)

{
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d0b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1418d0b78 FUN_1418d0b78 body=79 status=ok
// SIG undefined FUN_1418d0b78(void)

void FUN_1418d0b78(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418d0bc7 FUN_1418d0bc7 body=281 status=ok
// SIG undefined FUN_1418d0bc7(void)

void FUN_1418d0bc7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b713650;
  puVar1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(puVar1 + 7);
  *(undefined1 *)(puVar1 + 8) = 0;
  *puVar1 = &PTR_FUN_14b827f20;
  puVar1[6] = &PTR_FUN_14b8281e0;
  puVar1[7] = &PTR_LAB_14b828270;
  puVar1[9] = &PTR_FUN_14b8282c0;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x74) = 0xff;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xac) = 0xff;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xe4) = 0xff;
  *(undefined8 *)((longlong)puVar1 + 0x132) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x13a) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x144) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)puVar1 + 0x17d) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x185) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x19d) = 0;
  return;
}



// FUNCTION 1418d0ce0 FUN_1418d0ce0 body=114 status=ok
// SIG undefined FUN_1418d0ce0(void)

void FUN_1418d0ce0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b73b790;
  puVar1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(puVar1 + 7);
  *(undefined1 *)(puVar1 + 8) = 0;
  *puVar1 = &PTR_FUN_14b82bdf0;
  puVar1[6] = &PTR_FUN_14b82c0b0;
  puVar1[7] = &PTR_LAB_14b82c140;
  puVar1[9] = &PTR_FUN_14b82c190;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1418d0d52 FUN_1418d0d52 body=52 status=ok
// SIG undefined FUN_1418d0d52(void)

longlong FUN_1418d0d52(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d0d86 FUN_1418d0d86 body=112 status=ok
// SIG undefined FUN_1418d0d86(void)

void FUN_1418d0d86(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b713650;
  puVar1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(puVar1 + 7);
  *(undefined1 *)(puVar1 + 8) = 0;
  *puVar1 = &PTR_FUN_14b8380c0;
  puVar1[6] = &PTR_FUN_14b838380;
  puVar1[7] = &PTR_FUN_14b838410;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4b) = 0;
  memset(puVar1 + 10,0,0x82);
  return;
}



// FUNCTION 1418d0df6 FUN_1418d0df6 body=114 status=ok
// SIG undefined FUN_1418d0df6(void)

void FUN_1418d0df6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b7e2970;
  puVar1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(puVar1 + 7);
  *(undefined1 *)(puVar1 + 8) = 0;
  *puVar1 = &PTR_FUN_14b83bb50;
  puVar1[6] = &PTR_FUN_14b83be10;
  puVar1[7] = &PTR_LAB_14b83bea0;
  puVar1[9] = &PTR_FUN_14b83bef0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1418d0e68 FUN_1418d0e68 body=57 status=ok
// SIG undefined FUN_1418d0e68(void)

void FUN_1418d0e68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3830 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3830 = FUN_140002ddd(FUN_1465f8a81,uVar1,L"OakUITooltipDataDef");
  }
  return;
}



// FUNCTION 1418d0ea2 FUN_1418d0ea2 body=57 status=ok
// SIG undefined FUN_1418d0ea2(void)

void FUN_1418d0ea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3938 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3938 = FUN_140002ddd(FUN_1465f9020,uVar1,L"OakUIDisplayDataDef_GraphDisplayData");
  }
  return;
}



// FUNCTION 1418d0edc FUN_1418d0edc body=118 status=ok
// SIG undefined FUN_1418d0edc(void)

undefined8 FUN_1418d0edc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb93020 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb93020,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d0f54 FUN_1418d0f54 body=108 status=ok
// SIG undefined FUN_1418d0f54(void)

void FUN_1418d0f54(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = param_2 + 3;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 7) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 6)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_2 + 6)) {
    FUN_1400020a8(*plVar1);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d0f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1418d0fc0 FUN_1418d0fc0 body=690 status=ok
// SIG undefined FUN_1418d0fc0(void)

void FUN_1418d0fc0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[10] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b84c530;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 6) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[7] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 8) = DAT_14c844848;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 1418d1272 FUN_1418d1272 body=80 status=ok
// SIG undefined FUN_1418d1272(void)

void FUN_1418d1272(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d60d3d(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d12c2 FUN_1418d12c2 body=70 status=ok
// SIG undefined FUN_1418d12c2(void)

void FUN_1418d12c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e2f36c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b84fc40;
  puVar1[5] = &PTR_FUN_14b8500e0;
  puVar1[0x2d] = &PTR_FUN_14b850120;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  return;
}



// FUNCTION 1418d1308 FUN_1418d1308 body=49 status=ok
// SIG undefined FUN_1418d1308(void)

longlong FUN_1418d1308(void)

{
  if (DAT_14cbb41b8 == 0) {
    FUN_14086a14e(&DAT_14cbb41b8,&PTR_FUN_14b852660);
  }
  return DAT_14cbb41b8;
}



// FUNCTION 1418d1339 FUN_1418d1339 body=49 status=ok
// SIG undefined FUN_1418d1339(void)

longlong FUN_1418d1339(void)

{
  if (DAT_14cbb4678 == 0) {
    FUN_14073dd9a(&DAT_14cbb4678,&PTR_LAB_14b857b70);
  }
  return DAT_14cbb4678;
}



// FUNCTION 1418d136a FUN_1418d136a body=40 status=ok
// SIG undefined FUN_1418d136a(void)

undefined8 FUN_1418d136a(undefined8 param_1,int param_2)

{
  FUN_140cdcea6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d1392 FUN_1418d1392 body=94 status=ok
// SIG undefined FUN_1418d1392(void)

undefined8 * FUN_1418d1392(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1400b22c2(param_1 + 0xe,&DAT_149e02088);
  return param_1;
}



// FUNCTION 1418d13f0 FUN_1418d13f0 body=89 status=ok
// SIG undefined FUN_1418d13f0(void)

void FUN_1418d13f0(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418d144a FUN_1418d144a body=91 status=ok
// SIG undefined FUN_1418d144a(void)

void FUN_1418d144a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0x20);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x40) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x38) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 1418d14a5 FUN_1418d14a5 body=49 status=ok
// SIG undefined FUN_1418d14a5(void)

longlong FUN_1418d14a5(void)

{
  if (DAT_14cbb47e8 == 0) {
    FUN_14073dd9a(&DAT_14cbb47e8,&PTR_LAB_14b85d880);
  }
  return DAT_14cbb47e8;
}



// FUNCTION 1418d14d6 FUN_1418d14d6 body=49 status=ok
// SIG undefined FUN_1418d14d6(void)

longlong FUN_1418d14d6(void)

{
  if (DAT_14cbb4950 == 0) {
    FUN_14073dd9a(&DAT_14cbb4950,&PTR_LAB_14b85f960);
  }
  return DAT_14cbb4950;
}



// FUNCTION 1418d1507 FUN_1418d1507 body=49 status=ok
// SIG undefined FUN_1418d1507(void)

longlong FUN_1418d1507(void)

{
  if (DAT_14cbb4da8 == 0) {
    FUN_14073dd9a(&DAT_14cbb4da8,&PTR_LAB_14b865e90);
  }
  return DAT_14cbb4da8;
}



// FUNCTION 1418d1538 FUN_1418d1538 body=49 status=ok
// SIG undefined FUN_1418d1538(void)

longlong FUN_1418d1538(void)

{
  if (DAT_14cbb5570 == 0) {
    FUN_14073dd9a(&DAT_14cbb5570,&PTR_LAB_14b871760);
  }
  return DAT_14cbb5570;
}



// FUNCTION 1418d1569 FUN_1418d1569 body=49 status=ok
// SIG undefined FUN_1418d1569(void)

longlong FUN_1418d1569(void)

{
  if (DAT_14cbb58f0 == 0) {
    FUN_14073dd9a(&DAT_14cbb58f0,&PTR_LAB_14b8765d0);
  }
  return DAT_14cbb58f0;
}



// FUNCTION 1418d159a FUN_1418d159a body=58 status=ok
// SIG undefined FUN_1418d159a(void)

void FUN_1418d159a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *(undefined1 *)(puVar1 + 6) = 1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_FUN_14b877b90;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  return;
}



// FUNCTION 1418d15d4 FUN_1418d15d4 body=143 status=ok
// SIG undefined FUN_1418d15d4(void)

undefined8 * FUN_1418d15d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b87caf0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b46fec0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d1663 FUN_1418d1663 body=118 status=ok
// SIG undefined FUN_1418d1663(void)

void FUN_1418d1663(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xe0);
    do {
      FUN_14107a460(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0xc) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x2a) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong **)(puVar1 + -0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -0x38) + 0x10))();
      }
      puVar1 = puVar1 + 0x3a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418d16da FUN_1418d16da body=68 status=ok
// SIG undefined FUN_1418d16da(void)

void FUN_1418d16da(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 6,&DAT_149dfb77a);
  FUN_140056680(param_2 + 8,&DAT_149dfb77a);
  return;
}



// FUNCTION 1418d171e FUN_1418d171e body=128 status=ok
// SIG undefined FUN_1418d171e(void)

void FUN_1418d171e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_2 + 0x20);
  if (plVar3 != (longlong *)0x0) {
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
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001418d1792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418d179e FUN_1418d179e body=71 status=ok
// SIG undefined FUN_1418d179e(void)

undefined8 * FUN_1418d179e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418d17e6 FUN_1418d17e6 body=158 status=ok
// SIG undefined FUN_1418d17e6(void)

void FUN_1418d17e6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8a2700;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d1884 FUN_1418d1884 body=49 status=ok
// SIG undefined FUN_1418d1884(void)

longlong FUN_1418d1884(void)

{
  if (DAT_14cbbafd8 == 0) {
    FUN_14086a14e(&DAT_14cbbafd8,&PTR_FUN_14b8bc7a0);
  }
  return DAT_14cbbafd8;
}



// FUNCTION 1418d18b6 FUN_1418d18b6 body=118 status=ok
// SIG undefined FUN_1418d18b6(void)

void FUN_1418d18b6(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  param_2[6] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x25) = 0;
  param_2[7] = 0x242c80000;
  *(undefined4 *)(param_2 + 8) = 0x3f800000;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  return;
}



// FUNCTION 1418d192c FUN_1418d192c body=64 status=ok
// SIG undefined FUN_1418d192c(void)

void FUN_1418d192c(undefined8 param_1,longlong *param_2)

{
  if (param_2[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2[9] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d196c FUN_1418d196c body=60 status=ok
// SIG undefined FUN_1418d196c(void)

void FUN_1418d196c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c2a60;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d199d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1418d19a8 FUN_1418d19a8 body=219 status=ok
// SIG undefined FUN_1418d19a8(void)

longlong FUN_1418d19a8(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x10) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = DAT_14c844848;
  return param_1;
}



// FUNCTION 1418d1a88 FUN_1418d1a88 body=49 status=ok
// SIG undefined FUN_1418d1a88(void)

longlong FUN_1418d1a88(void)

{
  if (DAT_14cbbcc40 == 0) {
    FUN_14073dd9a(&DAT_14cbbcc40,&PTR_LAB_14b8d5f30);
  }
  return DAT_14cbbcc40;
}



// FUNCTION 1418d1acc FUN_1418d1acc body=79 status=ok
// SIG undefined FUN_1418d1acc(void)

undefined8 * FUN_1418d1acc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8e3210;
  param_1[0x79] = &PTR_LAB_14b8e3880;
  FUN_14028f4a8(param_1 + 0x85);
  FUN_1402d9b92(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d1b1c FUN_1418d1b1c body=496 status=ok
// SIG undefined FUN_1418d1b1c(void)

void FUN_1418d1b1c(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
    plVar13 = local_60;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    plVar13 = local_70;
  }
  plVar4 = local_60;
  iVar14 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      FUN_140bb60bc((longlong)iVar6 * 0xe0 + *param_1 + 8);
      uVar11 = ~(uint)uVar12 & uVar11;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar10 == lVar8) goto LAB_1418d1c6e;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1418d1c6e:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140442250(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar5 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d1d0e FUN_1418d1d0e body=41 status=ok
// SIG undefined FUN_1418d1d0e(void)

void FUN_1418d1d0e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140f15312(param_1);
    param_1 = param_1 + 0x188;
  }
  return;
}



// FUNCTION 1418d1d37 FUN_1418d1d37 body=340 status=ok
// SIG undefined FUN_1418d1d37(void)

void FUN_1418d1d37(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e5143e(puVar1);
  *puVar1 = &PTR_FUN_14b8e62e0;
  puVar1[0x72] = &PTR_FUN_14b8e6c70;
  puVar1[0x73] = &PTR_FUN_14b8e6cf0;
  puVar1[0x74] = &PTR_FUN_14b8e6d60;
  puVar1[0x75] = &PTR_FUN_14b8e6d88;
  puVar1[0x76] = &PTR_FUN_14b8e6da0;
  puVar1[0xa4] = &PTR_FUN_14b8e6dd0;
  puVar1[0xa5] = &PTR_FUN_14b8e6e20;
  puVar1[0xa6] = &PTR_FUN_14b8e6e50;
  puVar1[0xa7] = &PTR_FUN_14b8e6e80;
  puVar1[0xa8] = &PTR_FUN_14b8e6e98;
  puVar1[0x118] = &PTR_FUN_14b8e6eb0;
  puVar1[0x119] = &PTR_FUN_14b8e6fa0;
  puVar1[0x11a] = &PTR_FUN_14b8e6fd0;
  puVar1[0x11b] = &PTR_FUN_14b8e6ff0;
  puVar1[0x11c] = &PTR_FUN_14b8e7010;
  puVar1[0x11d] = &PTR_FUN_14b8e7080;
  puVar1[0x1bb] = &PTR_FUN_14b8e70a0;
  puVar1[0x1bc] = &PTR_FUN_14b8e70d0;
  puVar1[0x1bd] = &PTR_FUN_14b8e7100;
  puVar1[0x1be] = &PTR_FUN_14b8e7120;
  puVar1[0x1bf] = &PTR_FUN_14b8e7190;
  puVar1[0x1c0] = &PTR_FUN_14b8e71d0;
  return;
}



// FUNCTION 1418d1e8b FUN_1418d1e8b body=64 status=ok
// SIG undefined FUN_1418d1e8b(void)

void FUN_1418d1e8b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14097c306(puVar1);
  puVar1[0xc6] = 0;
  *puVar1 = &PTR_FUN_14b8eeba0;
  puVar1[0xad] = &PTR_FUN_14b8eef48;
  *(undefined1 *)(puVar1 + 199) = 0;
  return;
}



// FUNCTION 1418d1ed0 FUN_1418d1ed0 body=65 status=ok
// SIG undefined FUN_1418d1ed0(void)

void FUN_1418d1ed0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[1] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1418d1f12 FUN_1418d1f12 body=40 status=ok
// SIG undefined FUN_1418d1f12(void)

undefined8 FUN_1418d1f12(undefined8 param_1,int param_2)

{
  FUN_140ef64b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d1f3a FUN_1418d1f3a body=40 status=ok
// SIG undefined FUN_1418d1f3a(void)

undefined8 FUN_1418d1f3a(undefined8 param_1,int param_2)

{
  FUN_140945f4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d1f62 FUN_1418d1f62 body=57 status=ok
// SIG undefined FUN_1418d1f62(void)

void FUN_1418d1f62(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0xe0) = 0;
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb61f0(param_2 + 0x98);
  return;
}



// FUNCTION 1418d1f9c FUN_1418d1f9c body=38 status=ok
// SIG undefined FUN_1418d1f9c(void)

undefined8 FUN_1418d1f9c(undefined8 param_1,int param_2)

{
  FUN_140998e52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d1fc2 FUN_1418d1fc2 body=60 status=ok
// SIG undefined FUN_1418d1fc2(void)

void FUN_1418d1fc2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418d1ffe FUN_1418d1ffe body=51 status=ok
// SIG undefined FUN_1418d1ffe(void)

undefined8 * FUN_1418d1ffe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8f1450;
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d2031 FUN_1418d2031 body=42 status=ok
// SIG undefined FUN_1418d2031(void)

void FUN_1418d2031(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8f3a90;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1418d205c FUN_1418d205c body=4428 status=ok
// SIG undefined FUN_1418d205c(void)

void FUN_1418d205c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8 [15];
  
  local_b8[0xe] = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
LAB_1418d213a:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar11 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_b8);
      goto LAB_1418d213a;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_b8);
      goto LAB_1418d213a;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_b8);
      goto LAB_1418d213a;
    }
    local_b8[0] = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar11 = (longlong *)0x0;
  }
  plVar12 = plVar11;
  if (plVar11 == (longlong *)0x0) {
    plVar12 = local_b8;
  }
  local_c0 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
LAB_1418d21d6:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_c0);
      goto LAB_1418d21d6;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_c0);
      goto LAB_1418d21d6;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_c0);
      goto LAB_1418d21d6;
    }
    local_c0 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_130 = &local_c0;
  if (plVar9 != (longlong *)0x0) {
    local_130 = plVar9;
  }
  local_c8 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
LAB_1418d2274:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_c8);
      goto LAB_1418d2274;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_c8);
      goto LAB_1418d2274;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_c8);
      goto LAB_1418d2274;
    }
    local_c8 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_138 = &local_c8;
  if (plVar9 != (longlong *)0x0) {
    local_138 = plVar9;
  }
  local_d0 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
LAB_1418d2312:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_d0);
      goto LAB_1418d2312;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_d0);
      goto LAB_1418d2312;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_d0);
      goto LAB_1418d2312;
    }
    local_d0 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_150 = &local_d0;
  if (plVar9 != (longlong *)0x0) {
    local_150 = plVar9;
  }
  local_d8 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
LAB_1418d23b0:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_d8);
      goto LAB_1418d23b0;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_d8);
      goto LAB_1418d23b0;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_d8);
      goto LAB_1418d23b0;
    }
    local_d8 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_140 = &local_d8;
  if (plVar9 != (longlong *)0x0) {
    local_140 = plVar9;
  }
  local_e0 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
LAB_1418d244e:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_e0);
      goto LAB_1418d244e;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_e0);
      goto LAB_1418d244e;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_e0);
      goto LAB_1418d244e;
    }
    local_e0 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  plVar13 = &local_e0;
  if (plVar9 != (longlong *)0x0) {
    plVar13 = plVar9;
  }
  local_e8 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
LAB_1418d24e7:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_e8);
      goto LAB_1418d24e7;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_e8);
      goto LAB_1418d24e7;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_e8);
      goto LAB_1418d24e7;
    }
    local_e8 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_148 = &local_e8;
  if (plVar9 != (longlong *)0x0) {
    local_148 = plVar9;
  }
  local_f0 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
LAB_1418d2585:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_f0);
      goto LAB_1418d2585;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_f0);
      goto LAB_1418d2585;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_f0);
      goto LAB_1418d2585;
    }
    local_f0 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_158 = &local_f0;
  if (plVar9 != (longlong *)0x0) {
    local_158 = plVar9;
  }
  local_f8 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
LAB_1418d2623:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_f8);
      goto LAB_1418d2623;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_f8);
      goto LAB_1418d2623;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_f8);
      goto LAB_1418d2623;
    }
    local_f8 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_160 = &local_f8;
  if (plVar9 != (longlong *)0x0) {
    local_160 = plVar9;
  }
  local_100 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
LAB_1418d26c1:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_100);
      goto LAB_1418d26c1;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_100);
      goto LAB_1418d26c1;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_100);
      goto LAB_1418d26c1;
    }
    local_100 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_168 = &local_100;
  if (plVar9 != (longlong *)0x0) {
    local_168 = plVar9;
  }
  local_108 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
LAB_1418d275f:
    pbVar8 = *(byte **)(param_2 + 0x20);
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_108);
      goto LAB_1418d275f;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_108);
      goto LAB_1418d275f;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_108);
      goto LAB_1418d275f;
    }
    local_108 = *(longlong *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    plVar9 = (longlong *)0x0;
  }
  local_170 = &local_108;
  if (plVar9 != (longlong *)0x0) {
    local_170 = plVar9;
  }
  local_110 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_110);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_110);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        local_110 = *(longlong *)(pbVar8 + 1);
        pbVar8 = pbVar8 + 9;
        *(byte **)(param_2 + 0x20) = pbVar8;
        plVar9 = (longlong *)0x0;
        goto LAB_1418d2805;
      }
      (*pcVar3)(uVar2,param_2,&local_110);
    }
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  plVar9 = *(longlong **)(param_2 + 0x38);
LAB_1418d2805:
  local_178 = &local_110;
  if (plVar9 != (longlong *)0x0) {
    local_178 = plVar9;
  }
  local_118 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_118);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_118 = *(longlong *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_118);
    }
  }
  plVar9 = &local_118;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_120 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_120);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_120);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_120 = *(longlong *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_120);
    }
  }
  plVar14 = local_150;
  plVar10 = &local_120;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x38);
  }
  local_128 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
    plVar14 = local_150;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_128);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_128);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_128 = *(longlong *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_128);
    }
  }
  plVar6 = local_138;
  plVar5 = local_140;
  plVar4 = local_148;
  plVar7 = &local_128;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *local_130 = *plVar12;
  plVar12 = local_b8;
  if (plVar11 != (longlong *)0x0) {
    plVar12 = plVar11;
  }
  *local_138 = plVar12[1];
  *plVar14 = plVar12[2];
  *local_140 = plVar12[3];
  *plVar13 = plVar12[4];
  *local_148 = plVar12[5];
  *local_158 = plVar12[6];
  *local_160 = plVar12[7];
  *local_168 = plVar12[8];
  *local_170 = plVar12[9];
  *local_178 = plVar12[10];
  *plVar9 = plVar12[0xb];
  *plVar10 = plVar12[0xc];
  *plVar7 = plVar12[0xd];
  if ((DAT_14c950c29 == 1) && (*local_130 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar6 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar14 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar5 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar13 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar4 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*local_158 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*local_160 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*local_168 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*local_170 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*local_178 != 0)) {
    FUN_14689c22e();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar9 != 0)) {
    FUN_14689c22e();
  }
  if ((local_b8[0xe] ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d31aa FUN_1418d31aa body=57 status=ok
// SIG undefined FUN_1418d31aa(void)

void FUN_1418d31aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd7d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd7d8 = FUN_140002ddd(FUN_14660fe48,uVar1,L"NetworkOakVehicleInputs");
  }
  return;
}



// FUNCTION 1418d31e4 FUN_1418d31e4 body=57 status=ok
// SIG undefined FUN_1418d31e4(void)

void FUN_1418d31e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd7f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd7f0 = FUN_140002ddd(FUN_14660fea8,uVar1,L"NetworkOakVehicleStates");
  }
  return;
}



// FUNCTION 1418d321d FUN_1418d321d body=49 status=ok
// SIG undefined FUN_1418d321d(void)

longlong FUN_1418d321d(void)

{
  if (DAT_14cbbe2f0 == 0) {
    FUN_14086a14e(&DAT_14cbbe2f0,&PTR_FUN_14b8f8a58);
  }
  return DAT_14cbbe2f0;
}



// FUNCTION 1418d324e FUN_1418d324e body=67 status=ok
// SIG undefined FUN_1418d324e(void)

undefined8 * FUN_1418d324e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8f3a90;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d3292 FUN_1418d3292 body=29 status=ok
// SIG undefined FUN_1418d3292(void)

undefined8 FUN_1418d3292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d32af FUN_1418d32af body=49 status=ok
// SIG undefined FUN_1418d32af(void)

longlong FUN_1418d32af(void)

{
  if (DAT_14cbbe518 == 0) {
    FUN_14086a14e(&DAT_14cbbe518,&PTR_FUN_14b8fd148);
  }
  return DAT_14cbbe518;
}



// FUNCTION 1418d32e0 FUN_1418d32e0 body=49 status=ok
// SIG undefined FUN_1418d32e0(void)

longlong FUN_1418d32e0(void)

{
  if (DAT_14cbbf128 == 0) {
    FUN_14086a14e(&DAT_14cbbf128,&PTR_FUN_14b9006f0);
  }
  return DAT_14cbbf128;
}



// FUNCTION 1418d3311 FUN_1418d3311 body=163 status=ok
// SIG undefined FUN_1418d3311(void)

void FUN_1418d3311(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[0x14] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x11] != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    }
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[8] + 0x10))();
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[5] + 0x10))();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x22;
  }
  return;
}



// FUNCTION 1418d33b4 FUN_1418d33b4 body=122 status=ok
// SIG undefined FUN_1418d33b4(void)

void FUN_1418d33b4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


