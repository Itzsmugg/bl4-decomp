// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145aa59a8 FUN_145aa59a8 body=91 status=ok
// SIG undefined FUN_145aa59a8(void)

void FUN_145aa59a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14add78a0;
  FUN_145aa5a03(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145aa5a03 FUN_145aa5a03 body=49 status=ok
// SIG undefined FUN_145aa5a03(void)

void FUN_145aa5a03(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aa5a3a FUN_145aa5a3a body=205 status=ok
// SIG undefined FUN_145aa5a3a(void)

void FUN_145aa5a3a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140cc257c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae8e240;
  puVar1[5] = &PTR_FUN_14ae8edc0;
  puVar1[6] = &PTR_LAB_14ae8ee00;
  puVar1[0x55] = &PTR_FUN_14ae8ee50;
  puVar1[0x56] = &PTR_FUN_14ae8eed0;
  puVar1[0x57] = &PTR_FUN_14ae8eee0;
  puVar1[0x336] = 0;
  puVar1[0x337] = 0;
  puVar1[0x338] = 0;
  puVar1[0x339] = 0;
  *(undefined1 *)(puVar1 + 0x341) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x1a0c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1a14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1a1c) = 0;
  puVar1[0x33a] = 0x40e86a0000000000;
  puVar1[0x33b] = 0x40e86a0000000000;
  puVar1[0x33c] = 0x40c3880000000000;
  puVar1[0x33d] = 0x40e9000000000000;
  puVar1[0x33e] = 0x40e9000000000000;
  return;
}



// FUNCTION 145aa5b12 FUN_145aa5b12 body=49 status=ok
// SIG undefined FUN_145aa5b12(void)

undefined8 * FUN_145aa5b12(undefined8 *param_1)

{
  FUN_140e62abe();
  *param_1 = &PTR_FUN_14b0bdae0;
  param_1[0x12] = 0x4874240043fa0000;
  return param_1;
}



// FUNCTION 145aa5b44 FUN_145aa5b44 body=40 status=ok
// SIG undefined FUN_145aa5b44(void)

undefined8 FUN_145aa5b44(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa5b6c thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa5b7a FUN_145aa5b7a body=52 status=ok
// SIG undefined FUN_145aa5b7a(void)

undefined8 * FUN_145aa5b7a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14585a760(param_1,uVar1);
  *param_1 = &PTR_FUN_14b283760;
  uVar1 = FUN_140f17e42();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 145aa5bb6 FUN_145aa5bb6 body=52 status=ok
// SIG undefined FUN_145aa5bb6(void)

undefined8 * FUN_145aa5bb6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14585a760(param_1,uVar1);
  *param_1 = &PTR_FUN_14b283a00;
  uVar1 = FUN_140c602de();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 145aa5bf2 FUN_145aa5bf2 body=52 status=ok
// SIG undefined FUN_145aa5bf2(void)

undefined8 * FUN_145aa5bf2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14585a760(param_1,uVar1);
  *param_1 = &PTR_FUN_14b283ca0;
  uVar1 = FUN_1411a0a54();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 145aa5c2e FUN_145aa5c2e body=52 status=ok
// SIG undefined FUN_145aa5c2e(void)

undefined8 * FUN_145aa5c2e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14585a760(param_1,uVar1);
  *param_1 = &PTR_FUN_14b2834c0;
  uVar1 = FUN_14599724c();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 145aa5c6a FUN_145aa5c6a body=52 status=ok
// SIG undefined FUN_145aa5c6a(void)

undefined8 * FUN_145aa5c6a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14585a760(param_1,uVar1);
  *param_1 = &PTR_FUN_14b283f40;
  uVar1 = FUN_145997338();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 145aa5caa FUN_145aa5caa body=46 status=ok
// SIG undefined FUN_145aa5caa(void)

undefined8 * FUN_145aa5caa(undefined8 *param_1)

{
  FUN_145aa5cd8();
  *param_1 = &PTR_FUN_14b378b70;
  param_1[0x1f] = &PTR_FUN_14b378ee0;
  return param_1;
}



// FUNCTION 145aa5cd8 FUN_145aa5cd8 body=63 status=ok
// SIG undefined FUN_145aa5cd8(void)

undefined8 * FUN_145aa5cd8(undefined8 *param_1)

{
  FUN_1459b7b48();
  *param_1 = &PTR_FUN_14a4a0970;
  param_1[0x1f] = &PTR_FUN_14a4a0ce0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 145aa5d26 FUN_145aa5d26 body=31 status=ok
// SIG undefined FUN_145aa5d26(void)

undefined8 FUN_145aa5d26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa5d54 FUN_145aa5d54 body=31 status=ok
// SIG undefined FUN_145aa5d54(void)

undefined8 FUN_145aa5d54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa5d84 FUN_145aa5d84 body=44 status=ok
// SIG undefined FUN_145aa5d84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aa5d84(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb70a9c = _DAT_14cb70a9c + -1;
  *param_1 = DAT_14cb70a90;
  DAT_14cb70a90 = param_1;
  return;
}



// FUNCTION 145aa5db6 FUN_145aa5db6 body=55 status=ok
// SIG undefined FUN_145aa5db6(void)

void FUN_145aa5db6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60730 = FUN_140002ddd(FUN_1464ed4c4,uVar1,L"GbxMomentNodeState_And");
  }
  return;
}



// FUNCTION 145aa5df4 FUN_145aa5df4 body=55 status=ok
// SIG undefined FUN_145aa5df4(void)

void FUN_145aa5df4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a20 = FUN_140002ddd(FUN_1464ee4a8,uVar1,L"GbxMomentNodeState_LookAt");
  }
  return;
}



// FUNCTION 145aa5e32 FUN_145aa5e32 body=55 status=ok
// SIG undefined FUN_145aa5e32(void)

void FUN_145aa5e32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69130 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69130 = FUN_140002ddd(FUN_14651f186,uVar1,L"GpsGenerator_InteractiveObjects");
  }
  return;
}



// FUNCTION 145aa5e70 FUN_145aa5e70 body=55 status=ok
// SIG undefined FUN_145aa5e70(void)

void FUN_145aa5e70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f968 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f968 = FUN_140002ddd(FUN_146541f45,uVar1,L"UsableConsumerDef");
  }
  return;
}



// FUNCTION 145aa5eb2 FUN_145aa5eb2 body=49 status=ok
// SIG undefined FUN_145aa5eb2(void)

undefined8 * FUN_145aa5eb2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b447dc0;
  memset(param_1 + 5,0,0x90);
  return param_1;
}



// FUNCTION 145aa5ee4 FUN_145aa5ee4 body=40 status=ok
// SIG undefined FUN_145aa5ee4(void)

undefined8 FUN_145aa5ee4(undefined8 param_1,int param_2)

{
  FUN_145aa5f0c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa5f0c FUN_145aa5f0c body=141 status=ok
// SIG undefined FUN_145aa5f0c(void)

void FUN_145aa5f0c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4d49a0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145aa5f9a(param_1 + 0xc);
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa5f9a FUN_145aa5f9a body=119 status=ok
// SIG undefined FUN_145aa5f9a(void)

void FUN_145aa5f9a(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145aa6012 FUN_145aa6012 body=43 status=ok
// SIG undefined FUN_145aa6012(void)

int FUN_145aa6012(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14148f09a();
  iVar1 = (iVar1 - (*(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x430))) +
          *(int *)(param_1 + 0x45c);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 145aa604e FUN_145aa604e body=44 status=ok
// SIG undefined FUN_145aa604e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aa604e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc3be4 = _DAT_14cbc3be4 + -1;
  *param_1 = DAT_14cbc3bd8;
  DAT_14cbc3bd8 = param_1;
  return;
}



// FUNCTION 145aa6080 FUN_145aa6080 body=55 status=ok
// SIG undefined FUN_145aa6080(void)

void FUN_145aa6080(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e68 = FUN_140002ddd(FUN_1465ad437,uVar1,L"GbxBrainAspect_UseGadget");
  }
  return;
}



// FUNCTION 145aa60b8 FUN_145aa60b8 body=189 status=ok
// SIG undefined FUN_145aa60b8(void)

void FUN_145aa60b8(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145aa6176();
  uVar5 = FUN_1447210f0(param_1);
  FUN_1410d53f0(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_140457ffc(local_28 + 0x70,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa6176 FUN_145aa6176 body=140 status=ok
// SIG undefined FUN_145aa6176(void)

void FUN_145aa6176(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x458);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x450);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
LAB_145aa61d5:
        FUN_140457ffc(lVar3 + 0x1eb8,param_1);
        bVar4 = DAT_14c950c29;
      }
      else if (lVar3 != 0) goto LAB_145aa61d5;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 145aa6212 FUN_145aa6212 body=44 status=ok
// SIG undefined FUN_145aa6212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aa6212(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbd8f74 = _DAT_14cbd8f74 + -1;
  *param_1 = DAT_14cbd8f68;
  DAT_14cbd8f68 = param_1;
  return;
}



// FUNCTION 145aa623e FUN_145aa623e body=9 status=ok
// SIG undefined FUN_145aa623e(void)

void FUN_145aa623e(longlong param_1)

{
  FUN_145aa6248(param_1 + 0x10);
  return;
}



// FUNCTION 145aa6248 FUN_145aa6248 body=81 status=ok
// SIG undefined FUN_145aa6248(void)

void FUN_145aa6248(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba401e8;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145aa629a FUN_145aa629a body=29 status=ok
// SIG undefined FUN_145aa629a(void)

void FUN_145aa629a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145aa62b8 FUN_145aa62b8 body=61 status=ok
// SIG undefined FUN_145aa62b8(void)

undefined8 * FUN_145aa62b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba40200;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa6302 FUN_145aa6302 body=49 status=ok
// SIG undefined FUN_145aa6302(void)

void FUN_145aa6302(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_14bc1f4c0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 2;
  return;
}



// FUNCTION 145aa6340 FUN_145aa6340 body=49 status=ok
// SIG undefined FUN_145aa6340(void)

void FUN_145aa6340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_14bddfe40;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



// FUNCTION 145aa6372 FUN_145aa6372 body=258 status=ok
// SIG undefined FUN_145aa6372(void)

void FUN_145aa6372(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c9d0) {
    FUN_144b3d300(&DAT_14cc2c9d0);
    if (DAT_14cc2c9d0 == -1) {
      FUN_14148f18c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x5a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2c950,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465da85);
      _Init_thread_footer(&DAT_14cc2c9d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa6476 FUN_145aa6476 body=138 status=ok
// SIG undefined FUN_145aa6476(void)

code * FUN_145aa6476(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_game_motion_vector_field_x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1080000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bd8e;
}



// FUNCTION 145aa6500 FUN_145aa6500 body=138 status=ok
// SIG undefined FUN_145aa6500(void)

code * FUN_145aa6500(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_reconstructed_depth_interpolated_frame";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bea2;
}



// FUNCTION 145aa658a FUN_145aa658a body=138 status=ok
// SIG undefined FUN_145aa658a(void)

code * FUN_145aa658a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15800000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b8b4;
}



// FUNCTION 145aa6614 FUN_145aa6614 body=40 status=ok
// SIG undefined FUN_145aa6614(void)

undefined8 FUN_145aa6614(undefined8 param_1,int param_2)

{
  FUN_145aa663c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa663c FUN_145aa663c body=422 status=ok
// SIG undefined FUN_145aa663c(void)

void FUN_145aa663c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14aaebbf0;
  param_1[5] = &PTR_FUN_14aaebfc0;
  plVar2 = param_1 + 0x28;
  if ((*(int *)(param_1 + 0x29) != 0) &&
     (puVar4 = (undefined8 *)*plVar2, puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x29) = 0;
  }
  lVar5 = FUN_144a82cde();
  if (lVar5 != 0) {
    uVar6 = FUN_144a82cde();
    FUN_145aa67e2(uVar6,param_1 + 5);
  }
  FUN_140457ffc(&DAT_14cb05a48,param_1);
  plVar3 = (longlong *)param_1[0x2c];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(plVar2);
  FUN_14148f26f(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140095656(param_1 + 0x1c);
  FUN_14148f26f(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144a8720c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa67e2 FUN_145aa67e2 body=15 status=ok
// SIG undefined FUN_145aa67e2(void)

void FUN_145aa67e2(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14148f2ac(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 145aa69bc FUN_145aa69bc body=254 status=ok
// SIG undefined FUN_145aa69bc(void)

undefined8
FUN_145aa69bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9785d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ebcfd8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa6abc FUN_145aa6abc body=445 status=ok
// SIG undefined FUN_145aa6abc(void)

void FUN_145aa6abc(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined8 local_b0;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_3c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0xb20) != 0)) &&
     (*(char *)(param_2 + 0x51) == '\x01')) {
    lVar2 = param_2 + 0x20;
    cVar1 = FUN_144a87d38(lVar2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x700))();
      if (cVar1 == '\0') {
        cVar1 = FUN_1456e2be6(lVar2);
        if (cVar1 == '\0') {
          local_e8 = 0;
        }
        else {
          FUN_1438a4f78(lVar2,&local_e8);
        }
        local_b0 = *(undefined8 *)(param_2 + 0x30);
        FUN_1400021e4(&local_b0,local_a8);
        lVar2 = FUN_1456e2bea(*(undefined8 *)(param_1 + 0xb20));
        if (lVar2 != 0) {
          local_108 = 0;
          FUN_145aa6c7a(lVar2,local_a8,local_e8,0);
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
      }
      else if (*(char *)(param_2 + 8) == '\x01') {
        local_100 = local_a8;
        local_a8[0] = 0;
        local_a8[1] = 0;
        local_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0x3ff00000;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_64 = 0x3ff00000;
        uStack_60 = 0;
        uStack_5c = 0x3ff00000;
        local_58 = 0x3ff0000000000000;
        uStack_50 = 0;
        local_48 = 0x3f800000;
        local_40 = 0;
        local_3c = 0;
        local_f8 = 0;
        local_108 = CONCAT71(local_108._1_7_,1);
        FUN_140b3303c(local_c8,*(undefined8 *)(param_1 + 0xb20),lVar2,param_2 + 0xc);
      }
      else {
        local_108 = 0;
        FUN_140b32deb(local_e0,*(undefined8 *)(param_1 + 0xb20),lVar2,
                      *(undefined8 *)(param_2 + 0x14));
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa6c7a FUN_145aa6c7a body=384 status=ok
// SIG undefined FUN_145aa6c7a(void)

void FUN_145aa6c7a(longlong *param_1,undefined8 param_2,longlong param_3,char param_4,
                  longlong param_5)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_2e8 [47];
  byte local_2b9;
  longlong local_2b8;
  undefined1 local_2b0 [312];
  longlong local_178;
  ulonglong *local_170;
  ulonglong local_40;
  
  lVar2 = param_5;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_2b8 = param_3;
  FUN_1413dbc9a(&local_178);
  FUN_140f9916c(param_1,local_2b0,3);
  FUN_140f991ea(&local_178,local_2b0);
  FUN_1449daebe(local_2b0);
  local_2b9 = param_3 != 0;
  if (param_4 != '\0') {
    local_2b9 = local_2b9 | 2;
  }
  if (lVar2 != 0) {
    local_2b9 = local_2b9 | 4;
  }
  pbVar1 = (byte *)*local_170 + 1;
  if ((byte *)local_170[1] < pbVar1) {
    (**(code **)(local_178 + 0x170))(&local_178,&local_2b9,1);
  }
  else {
    local_2b9 = *(byte *)*local_170;
    *local_170 = (ulonglong)pbVar1;
  }
  FUN_14021219d(&local_178,param_2);
  if (param_3 != 0) {
    FUN_1417154a0(&local_178,&local_2b8);
  }
  if (lVar2 != 0) {
    FUN_1417154a0(&local_178,&param_5);
  }
  (**(code **)(*param_1 + 0x308))(param_1,local_2b0,&local_178,0);
  FUN_1449daebe(&local_178);
  if ((local_40 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa6dfc FUN_145aa6dfc body=40 status=ok
// SIG undefined FUN_145aa6dfc(void)

undefined8 FUN_145aa6dfc(undefined8 param_1,int param_2)

{
  FUN_145aa6e24();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa6e24 FUN_145aa6e24 body=254 status=ok
// SIG undefined FUN_145aa6e24(void)

void FUN_145aa6e24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b829f00;
  param_1[6] = &PTR_FUN_14b82a1c0;
  param_1[7] = &PTR_LAB_14b82a250;
  FUN_145aa6f22(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa6f54(param_1 + 0x12);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xe);
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 145aa6f22 FUN_145aa6f22 body=49 status=ok
// SIG undefined FUN_145aa6f22(void)

void FUN_145aa6f22(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aa6f54 FUN_145aa6f54 body=53 status=ok
// SIG undefined FUN_145aa6f54(void)

void FUN_145aa6f54(longlong *param_1)

{
  FUN_14148fa16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa6f8a FUN_145aa6f8a body=382 status=ok
// SIG undefined FUN_145aa6f8a(void)

void FUN_145aa6f8a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145aa710a(plVar2,local_40,local_48);
  *param_3 = uVar1;
  FUN_140ee7917(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa710a FUN_145aa710a body=89 status=ok
// SIG undefined FUN_145aa710a(void)

void FUN_145aa710a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  float local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_145aa7164(param_1,&local_18,&local_20,param_3);
  if (local_14 == '\0') {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar1);
}



// FUNCTION 145aa7164 FUN_145aa7164 body=279 status=ok
// SIG undefined FUN_145aa7164(void)

undefined4 *
FUN_145aa7164(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2) == *param_3) {
        lVar3 = *param_1 - lVar3;
        if (lVar3 != 0) {
          local_80[0] = 0;
          local_58 = 0;
          FUN_1456bb102(local_80,param_4);
          FUN_1447c3578(lVar3 + 8,local_50,local_80);
          uVar5 = FUN_144a7ecd0(local_50);
          *param_2 = uVar5;
          *(undefined1 *)(param_2 + 1) = 1;
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar4 = local_50;
            if (0x18 < local_38) {
              ppppuVar4 = (undefined8 ****)local_50[0];
            }
            (*pcVar1)(ppppuVar4);
          }
          if (0x18 < local_38) {
            FUN_1400020a8(local_50[0]);
          }
          FUN_144a5ac3a(local_80);
          goto LAB_145aa7192;
        }
        break;
      }
      lVar3 = lVar3 + -0x40;
      lVar2 = lVar2 + 0x40;
    } while (-lVar3 != (longlong)(int)param_1[1] * 0x40);
  }
  *(undefined1 *)(param_2 + 1) = 0;
LAB_145aa7192:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145aa727c FUN_145aa727c body=225 status=ok
// SIG undefined FUN_145aa727c(void)

void FUN_145aa727c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x40) != 3) {
    FUN_1446efa72(param_1 + 0x38,0,3,0x10);
    *(undefined4 *)(param_1 + 0x40) = 3;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  *puVar1 = &PTR_LAB_14a5aae40;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5aadd0;
  puVar1[3] = param_1;
  puVar1[4] = &LAB_14782deb2;
  if (*(int *)(param_1 + 0x50) != 3) {
    FUN_1446efa72(param_1 + 0x48,0,3,0x10);
    *(undefined4 *)(param_1 + 0x50) = 3;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  *puVar1 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5aaeb0;
  puVar1[3] = param_1;
  puVar1[4] = &LAB_14782debc;
  FUN_145aa735e(DAT_14cb0d2b0,param_1 + 0x38);
  FUN_145aa7366(DAT_14cb0d2b0,param_1 + 0x48);
  return;
}



// FUNCTION 145aa735e FUN_145aa735e body=8 status=ok
// SIG undefined FUN_145aa735e(void)

void FUN_145aa735e(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe40) = param_2;
  return;
}



// FUNCTION 145aa7366 FUN_145aa7366 body=8 status=ok
// SIG undefined FUN_145aa7366(void)

void FUN_145aa7366(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe48) = param_2;
  return;
}



// FUNCTION 145aa736e FUN_145aa736e body=120 status=ok
// SIG undefined FUN_145aa736e(void)

longlong FUN_145aa736e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145aa73e6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145aa73e6 FUN_145aa73e6 body=121 status=ok
// SIG undefined FUN_145aa73e6(void)

undefined8 * FUN_145aa73e6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14585ee62(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145aa7460 FUN_145aa7460 body=120 status=ok
// SIG undefined FUN_145aa7460(void)

longlong FUN_145aa7460(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145aa74d8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145aa74d8 FUN_145aa74d8 body=121 status=ok
// SIG undefined FUN_145aa74d8(void)

undefined8 * FUN_145aa74d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14585edb0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145aa7552 FUN_145aa7552 body=120 status=ok
// SIG undefined FUN_145aa7552(void)

longlong FUN_145aa7552(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145aa75ca(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145aa75ca FUN_145aa75ca body=121 status=ok
// SIG undefined FUN_145aa75ca(void)

undefined8 * FUN_145aa75ca(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14585ecfe(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145aa7644 FUN_145aa7644 body=120 status=ok
// SIG undefined FUN_145aa7644(void)

longlong FUN_145aa7644(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145aa76bc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145aa76bc FUN_145aa76bc body=121 status=ok
// SIG undefined FUN_145aa76bc(void)

undefined8 * FUN_145aa76bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14585ec4c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145aa7740 FUN_145aa7740 body=76 status=ok
// SIG undefined FUN_145aa7740(void)

void FUN_145aa7740(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_145aa778c(param_1 + 0x48);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145aa778c FUN_145aa778c body=53 status=ok
// SIG undefined FUN_145aa778c(void)

void FUN_145aa778c(longlong *param_1)

{
  FUN_145aa77c2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa77c2 FUN_145aa77c2 body=88 status=ok
// SIG undefined FUN_145aa77c2(void)

void FUN_145aa77c2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145aa7822 FUN_145aa7822 body=173 status=ok
// SIG undefined FUN_145aa7822(void)

undefined8 * FUN_145aa7822(undefined8 *param_1)

{
  FUN_140c444d0();
  *param_1 = &PTR_FUN_14ab1ac10;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 2;
  return param_1;
}



// FUNCTION 145aa78d0 FUN_145aa78d0 body=109 status=ok
// SIG undefined FUN_145aa78d0(void)

undefined8 * FUN_145aa78d0(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 3;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
    }
  }
  return param_1;
}



// FUNCTION 145aa793e FUN_145aa793e body=228 status=ok
// SIG undefined FUN_145aa793e(void)

longlong FUN_145aa793e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb43608 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145869ee2;
    local_38 = &LAB_1481f4775;
    local_40 = FUN_14078c724;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x7c8;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSpriteRendererProperties",&DAT_14cb43608,
                  &DAT_1481f4774);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb43608;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa7a24 FUN_145aa7a24 body=335 status=ok
// SIG undefined FUN_145aa7a24(void)

void FUN_145aa7a24(float *param_1,float param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong *local_20;
  float *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  if ((1e-08 < param_2) || (*(char *)(param_1 + 1) == '\x01')) {
    if (param_1[0x34] != param_1[0x3d]) {
      uVar1 = *param_3;
      uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      pfVar3 = param_1 + 0x3e;
      if (*(float **)(param_1 + 0x42) != (float *)0x0) {
        pfVar3 = *(float **)(param_1 + 0x42);
      }
      fVar4 = pfVar3[(int)param_1[0x44] - 1U & (uVar2 >> 0x10 ^ uVar2)];
      if (fVar4 != -NAN) {
        do {
          pfVar3 = *(float **)(param_1 + 0x32);
          if (*(float **)(param_1 + 0x32) == (float *)0x0) {
            pfVar3 = param_1 + 2;
          }
          pfVar3 = pfVar3 + (longlong)(int)fVar4 * 6;
          if (*(ulonglong *)pfVar3 == uVar1) {
            if (pfVar3 + 2 != (float *)0x0 && pfVar3 != (float *)0x0) {
              fVar4 = *param_1 - pfVar3[2];
              goto LAB_145aa7a60;
            }
            break;
          }
          fVar4 = pfVar3[4];
        } while (fVar4 != -NAN);
      }
    }
    fVar4 = *param_1;
LAB_145aa7a60:
    *param_1 = fVar4 + param_2;
    local_18 = &local_24;
    local_20 = param_3;
    FUN_145aa7b74(param_1 + 2,local_c,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa7b74 FUN_145aa7b74 body=312 status=ok
// SIG undefined FUN_145aa7b74(void)

undefined4 * FUN_145aa7b74(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145aa7db2(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145aa7d12(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    cVar3 = FUN_145aa7cae(param_1,*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec));
    if (cVar3 == '\0') {
      uVar6 = (longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0x108) - 1U;
      iVar5 = (int)uVar6;
      *(int *)((longlong)local_40 + 0x14) = iVar5;
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1 + 0xf0;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1 + 0xf0;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x108) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa7cae FUN_145aa7cae body=99 status=ok
// SIG undefined FUN_145aa7cae(void)

undefined8 FUN_145aa7cae(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar4 = 4;
  }
  if (param_2 < 4) {
    iVar4 = 4;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x108))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x108) = iVar4;
    FUN_145c10020(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 145aa7d12 FUN_145aa7d12 body=159 status=ok
// SIG undefined FUN_145aa7d12(void)

undefined8 FUN_145aa7d12(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec) != 1) &&
     (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xec))) {
    lVar5 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x100);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      while( true ) {
        lVar5 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar5 = param_1;
        }
        plVar1 = (longlong *)(lVar5 + (longlong)iVar6 * 0x18);
        if (*plVar1 == *param_3) break;
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      lVar5 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(int *)plVar1 = (int)lVar5;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
      *(int *)(plVar1 + 1) = (int)lVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      FUN_1488db9a8((int)lVar5,*param_4);
      *param_4 = iVar6;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145aa7db2 FUN_145aa7db2 body=302 status=ok
// SIG undefined FUN_145aa7db2(void)

int * FUN_145aa7db2(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar6 = *(int *)(param_1 + 200);
    *(int *)(param_1 + 200) = iVar6 + 1;
    if (*(int *)(param_1 + 0xcc) == iVar6) {
      FUN_147f53d46(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0xd0,1);
    lVar5 = *(longlong *)(param_1 + 0xd8);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar5 = param_1 + 0xd0;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0xe8);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0xe8) = iVar3;
    iVar4 = *(int *)(param_1 + 0xec) + -1;
    *(int *)(param_1 + 0xec) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 145aa7ee0 FUN_145aa7ee0 body=265 status=ok
// SIG undefined FUN_145aa7ee0(void)

undefined * FUN_145aa7ee0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c9c08) {
    FUN_144b3d300(&DAT_14c9c9c08);
    if (DAT_14c9c9c08 == -1) {
      FUN_145aa7fea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAOParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x52;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c9b88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7616);
      _Init_thread_footer(&DAT_14c9c9c08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c9b88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa7fea FUN_145aa7fea body=226 status=ok
// SIG undefined FUN_145aa7fea(void)

longlong * FUN_145aa7fea(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462be3de;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa80ce FUN_145aa80ce body=138 status=ok
// SIG undefined FUN_145aa80ce(void)

code * FUN_145aa80ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AOStepScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462be466;
}



// FUNCTION 145aa8158 FUN_145aa8158 body=138 status=ok
// SIG undefined FUN_145aa8158(void)

code * FUN_145aa8158(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AOMaxViewDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa81e2;
}



// FUNCTION 145aa81e2 FUN_145aa81e2 body=138 status=ok
// SIG undefined FUN_145aa81e2(void)

code * FUN_145aa81e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AOStepExponentScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa80ce;
}



// FUNCTION 145aa826c FUN_145aa826c body=265 status=ok
// SIG undefined FUN_145aa826c(void)

undefined * FUN_145aa826c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f20c0) {
    FUN_144b3d300(&DAT_14c9f20c0);
    if (DAT_14c9f20c0 == -1) {
      FUN_145aa8376(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenIndirectTracingParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x67;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f2040,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d263c7);
      _Init_thread_footer(&DAT_14c9f20c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f2040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa8376 FUN_145aa8376 body=226 status=ok
// SIG undefined FUN_145aa8376(void)

longlong * FUN_145aa8376(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462da3bc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa845a FUN_145aa845a body=138 status=ok
// SIG undefined FUN_145aa845a(void)

code * FUN_145aa845a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TanDiffuseConeHalfAngle";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e5e82;
}



// FUNCTION 145aa84e4 FUN_145aa84e4 body=138 status=ok
// SIG undefined FUN_145aa84e4(void)

code * FUN_145aa84e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MinTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e5df8;
}



// FUNCTION 145aa856e FUN_145aa856e body=138 status=ok
// SIG undefined FUN_145aa856e(void)

code * FUN_145aa856e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxMeshSDFTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e5d6e;
}



// FUNCTION 145aa8604 FUN_145aa8604 body=59 status=ok
// SIG undefined FUN_145aa8604(void)

undefined8 * FUN_145aa8604(undefined8 *param_1)

{
  FUN_145aa8640();
  *param_1 = &PTR_FUN_14aca4060;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_14020fad6(param_1 + 0xb,L"{world}");
  return param_1;
}



// FUNCTION 145aa8640 FUN_145aa8640 body=51 status=ok
// SIG undefined FUN_145aa8640(void)

undefined8 * FUN_145aa8640(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5847c0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0;
  return param_1;
}



// FUNCTION 145aa8674 FUN_145aa8674 body=40 status=ok
// SIG undefined FUN_145aa8674(void)

undefined8 FUN_145aa8674(undefined8 param_1,int param_2)

{
  FUN_145aa869c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa869c FUN_145aa869c body=81 status=ok
// SIG undefined FUN_145aa869c(void)

void FUN_145aa869c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afdd4c0;
  param_1[0x75] = &PTR_FUN_14afddb00;
  FUN_145a27d20(param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145aa86ee FUN_145aa86ee body=66 status=ok
// SIG undefined FUN_145aa86ee(void)

void FUN_145aa86ee(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1407cbe30();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_145aa8730();
    FUN_144a2e342(lVar1,param_1 + 0x160,uVar2);
    return;
  }
  return;
}



// FUNCTION 145aa8730 FUN_145aa8730 body=55 status=ok
// SIG undefined FUN_145aa8730(void)

void FUN_145aa8730(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8718 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8718 = FUN_140002ddd(FUN_1466041bd,uVar1,L"OakWidgetData_DownState");
  }
  return;
}



// FUNCTION 145aa878a FUN_145aa878a body=156 status=ok
// SIG undefined FUN_145aa878a(void)

void FUN_145aa878a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145aa8826();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc30e08;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0xd0;
  return;
}



// FUNCTION 145aa8826 FUN_145aa8826 body=258 status=ok
// SIG undefined FUN_145aa8826(void)

void FUN_145aa8826(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc30e88) {
    FUN_144b3d300(&DAT_14cc30e88);
    if (DAT_14cc30e88 == -1) {
      FUN_1414919bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x3c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc30e08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144686bbf);
      _Init_thread_footer(&DAT_14cc30e88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa892a FUN_145aa892a body=138 status=ok
// SIG undefined FUN_145aa892a(void)

code * FUN_145aa892a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FrictionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c0038;
}



// FUNCTION 145aa89b4 FUN_145aa89b4 body=138 status=ok
// SIG undefined FUN_145aa89b4(void)

code * FUN_145aa89b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingAccumulatedImpulseBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfe10;
}



// FUNCTION 145aa8a3e FUN_145aa8a3e body=138 status=ok
// SIG undefined FUN_145aa8a3e(void)

code * FUN_145aa8a3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingMass1Buffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfb5e;
}



// FUNCTION 145aa8ac8 FUN_145aa8ac8 body=95 status=ok
// SIG undefined FUN_145aa8ac8(void)

void FUN_145aa8ac8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar2 = FUN_1410cfc16();
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 8) + 0x58;
      cVar1 = FUN_144729dda(lVar2);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FUN_14479d2ce(lVar2);
        lVar2 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
        if (lVar2 != 0) {
          FUN_145aa8b28(lVar2,*(undefined4 *)(param_1 + 0x60));
        }
      }
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 145aa8b28 FUN_145aa8b28 body=315 status=ok
// SIG undefined FUN_145aa8b28(void)

void FUN_145aa8b28(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      do {
        lVar1 = lVar4 + (longlong)iVar2 * 0x20;
        if (*(uint *)(lVar4 + (longlong)iVar2 * 0x20) == param_2) {
          if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0)) {
            (**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
            iVar2 = *(int *)(param_1 + 0x90);
            if ((longlong)iVar2 == 0) goto LAB_145aa8baa;
            lVar4 = 0;
            iVar3 = 0;
            goto LAB_145aa8c21;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  goto LAB_145aa8be6;
  while( true ) {
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 0x10;
    if ((longlong)iVar2 << 4 == lVar4) break;
LAB_145aa8c21:
    if (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + lVar4) + 0x20) == param_2) {
      if (iVar3 < iVar2 && -1 < iVar3) {
        if (iVar3 <= *(int *)(param_1 + 0x80)) {
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        }
        FUN_148839ed2(param_1 + 0x88);
        FUN_148839f48(param_1 + 0x88);
      }
      break;
    }
  }
LAB_145aa8baa:
  FUN_145aa8c7c((longlong *)(param_1 + 0x30),&local_2c);
  if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_145aa8be6:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa8c76 thunk_FUN_145aa8e38 body=5 status=ok
// SIG undefined thunk_FUN_145aa8e38(void)

void thunk_FUN_145aa8e38(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 auStack_68 [32];
  void *pvStack_48;
  int iStack_40;
  void *pvStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    uVar1 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
    lVar3 = FUN_140149a73(uVar1,0);
    if ((lVar3 != 0) && (plVar2 = (longlong *)FUN_1401499e8(lVar3), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x90,*(undefined8 *)(param_1 + 0x100));
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  FUN_140457ffc(&DAT_14cadbeb0,param_1);
  FUN_140457ffc(&DAT_14cadbec8,param_1);
  pvStack_38 = (void *)0x0;
  iStack_30 = *(int *)(param_1 + 0xf8);
  lVar3 = (longlong)iStack_30;
  pvVar4 = *(void **)(param_1 + 0xf0);
  if (lVar3 == 0) {
    uStack_2c = 0;
  }
  else {
    FUN_145835afc(&pvStack_38,iStack_30,0);
    memcpy(pvStack_38,pvVar4,lVar3 << 3);
    if ((longlong)iStack_30 != 0) {
      lVar3 = (longlong)iStack_30 << 3;
      pvVar4 = pvStack_38;
      do {
        uVar1 = FUN_14479d2ce(pvVar4);
        FUN_14588021c(param_1,uVar1);
        pvVar4 = (void *)((longlong)pvVar4 + 8);
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  pvStack_48 = (void *)0x0;
  iStack_40 = *(int *)(param_1 + 0xe8);
  lVar3 = (longlong)iStack_40;
  pvVar4 = *(void **)(param_1 + 0xe0);
  if (lVar3 != 0) {
    FUN_145aa900a(&pvStack_48,iStack_40,0);
    memcpy(pvStack_48,pvVar4,lVar3 << 3);
    if ((longlong)iStack_40 != 0) {
      lVar3 = (longlong)iStack_40 << 3;
      pvVar4 = pvStack_48;
      do {
        uVar1 = FUN_14479d2ce(pvVar4);
        FUN_1411db8ea(param_1,uVar1);
        pvVar4 = (void *)((longlong)pvVar4 + 8);
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    if (pvStack_48 != (void *)0x0) {
      FUN_1400020a8(pvStack_48);
    }
  }
  if (pvStack_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa8c7c FUN_145aa8c7c body=79 status=ok
// SIG undefined FUN_145aa8c7c(void)

void FUN_145aa8c7c(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_145aa8ccc();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145aa8ccc FUN_145aa8ccc body=89 status=ok
// SIG undefined FUN_145aa8ccc(void)

void FUN_145aa8ccc(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145aa8d26();
  return;
}



// FUNCTION 145aa8d26 FUN_145aa8d26 body=80 status=ok
// SIG undefined FUN_145aa8d26(void)

void FUN_145aa8d26(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_145aa8d80(param_1,param_2);
  return;
}



// FUNCTION 145aa8d80 FUN_145aa8d80 body=114 status=ok
// SIG undefined FUN_145aa8d80(void)

void FUN_145aa8d80(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 145aa8df2 FUN_145aa8df2 body=70 status=ok
// SIG undefined FUN_145aa8df2(void)

void FUN_145aa8df2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_145aa8e38();
  uVar1 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
  plVar2 = (longlong *)FUN_140ec3c65(uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
    FUN_140457ffc(uVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 145aa8e38 FUN_145aa8e38 body=464 status=ok
// SIG undefined FUN_145aa8e38(void)

void FUN_145aa8e38(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    uVar1 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
    lVar3 = FUN_140149a73(uVar1,0);
    if ((lVar3 != 0) && (plVar2 = (longlong *)FUN_1401499e8(lVar3), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x90,*(undefined8 *)(param_1 + 0x100));
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  FUN_140457ffc(&DAT_14cadbeb0,param_1);
  FUN_140457ffc(&DAT_14cadbec8,param_1);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0xf8);
  lVar3 = (longlong)local_30;
  pvVar4 = *(void **)(param_1 + 0xf0);
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_145835afc(&local_38,local_30,0);
    memcpy(local_38,pvVar4,lVar3 << 3);
    if ((longlong)local_30 != 0) {
      lVar3 = (longlong)local_30 << 3;
      pvVar4 = local_38;
      do {
        uVar1 = FUN_14479d2ce(pvVar4);
        FUN_14588021c(param_1,uVar1);
        pvVar4 = (void *)((longlong)pvVar4 + 8);
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 0xe8);
  lVar3 = (longlong)local_40;
  pvVar4 = *(void **)(param_1 + 0xe0);
  if (lVar3 != 0) {
    FUN_145aa900a(&local_48,local_40,0);
    memcpy(local_48,pvVar4,lVar3 << 3);
    if ((longlong)local_40 != 0) {
      lVar3 = (longlong)local_40 << 3;
      pvVar4 = local_48;
      do {
        uVar1 = FUN_14479d2ce(pvVar4);
        FUN_1411db8ea(param_1,uVar1);
        pvVar4 = (void *)((longlong)pvVar4 + 8);
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa900a FUN_145aa900a body=98 status=ok
// SIG undefined FUN_145aa900a(void)

void FUN_145aa900a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145aa9078 FUN_145aa9078 body=200 status=ok
// SIG undefined FUN_145aa9078(void)

undefined8 * FUN_145aa9078(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4dd350;
  lVar2 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0x54);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_28,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xea);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_30,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa9142 FUN_145aa9142 body=160 status=ok
// SIG undefined FUN_145aa9142(void)

void FUN_145aa9142(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_145aa91e4(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa91e4 FUN_145aa91e4 body=364 status=ok
// SIG undefined FUN_145aa91e4(void)

void FUN_145aa91e4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[2] < 1) {
    FUN_145aa9352(&local_48,param_2);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14001d63e(param_1,iVar1);
    }
    FUN_14023423e((longlong)iVar1 * 0x10 + *param_1,&local_48);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    goto LAB_145aa924f;
  }
  iVar1 = (int)param_1[2] * 4;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  iVar4 = 0;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  iVar3 = iVar2 + iVar1;
  if (iVar3 == 0 || SCARRY4(iVar2,iVar1) != iVar3 < 0) {
LAB_145aa929d:
    do {
      FUN_1400020e8(&local_48,L"    ",4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[2]);
  }
  else {
    FUN_1446f8c06(&local_48,iVar3 + 1);
    if (0 < (int)param_1[2]) goto LAB_145aa929d;
  }
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,*param_2,iVar1);
  FUN_145aa9352(local_58,&local_48);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14001d63e(param_1,iVar1);
  }
  FUN_14023423e((longlong)iVar1 * 0x10 + *param_1,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_145aa924f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa9352 FUN_145aa9352 body=80 status=ok
// SIG undefined FUN_145aa9352(void)

undefined8 * FUN_145aa9352(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  
  if (*(int *)(param_2 + 8) < 2) {
    FUN_140e82300();
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    puVar2 = &DAT_14c844848;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  else {
    FUN_140009cf2(param_1);
    puVar2 = (uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = *puVar2 | 2;
  return param_1;
}



// FUNCTION 145aa93a2 FUN_145aa93a2 body=40 status=ok
// SIG undefined FUN_145aa93a2(void)

undefined8 FUN_145aa93a2(undefined8 param_1,int param_2)

{
  FUN_145aa93ca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa93ca FUN_145aa93ca body=85 status=ok
// SIG undefined FUN_145aa93ca(void)

void FUN_145aa93ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae6c990;
  FUN_145aa941f(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa941f(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa941f FUN_145aa941f body=38 status=ok
// SIG undefined FUN_145aa941f(void)

void FUN_145aa941f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145aa9446(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 145aa9446 FUN_145aa9446 body=63 status=ok
// SIG undefined FUN_145aa9446(void)

void FUN_145aa9446(longlong param_1)

{
  FUN_145aa9485(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aa9474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145aa9485 FUN_145aa9485 body=77 status=ok
// SIG undefined FUN_145aa9485(void)

void FUN_145aa9485(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aa94dc FUN_145aa94dc body=261 status=ok
// SIG undefined FUN_145aa94dc(void)

void FUN_145aa94dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xe8);
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
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_145aa9608(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  FUN_145aa95e1(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aa95dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145aa95e1 FUN_145aa95e1 body=38 status=ok
// SIG undefined FUN_145aa95e1(void)

void FUN_145aa95e1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145aa9608(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145aa9608 FUN_145aa9608 body=86 status=ok
// SIG undefined FUN_145aa9608(void)

void FUN_145aa9608(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa965e FUN_145aa965e body=420 status=ok
// SIG undefined FUN_145aa965e(void)

void FUN_145aa965e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1457f105e(local_40);
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
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_78 = local_58;
  puVar4 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  uVar2 = FUN_14477b664(uStack_50);
  local_70 = FUN_14477b664(uVar2);
  local_68 = local_48;
  FUN_145aa9804(param_1,puVar4,&local_78,puVar3);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa9804 FUN_145aa9804 body=120 status=ok
// SIG undefined FUN_145aa9804(void)

void FUN_145aa9804(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_38 = FUN_14477b664(uVar2);
  local_30 = param_3[2];
  bVar1 = FUN_145aa987e();
  *param_4 = bVar1 ^ 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa987e FUN_145aa987e body=168 status=ok
// SIG undefined FUN_145aa987e(void)

undefined8 FUN_145aa987e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong *)*param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = *(longlong *)*param_2;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar4 = FUN_14110242a();
    lVar6 = FUN_14477b664(uVar4);
    param_3[1] = lVar6;
  }
  lVar5 = param_3[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar6 == 0)) || (*param_3 == 0)) goto LAB_145aa98e9;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_145aa98ff:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_145aa98ff;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_3);
  }
  param_3[2] = lVar5;
LAB_145aa98e9:
  uVar4 = FUN_141491aa0(lVar1 + 0x48,lVar5);
  return uVar4;
}



// FUNCTION 145aa9926 FUN_145aa9926 body=40 status=ok
// SIG undefined FUN_145aa9926(void)

undefined8 FUN_145aa9926(undefined8 param_1,int param_2)

{
  FUN_145aa994e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa994e FUN_145aa994e body=248 status=ok
// SIG undefined FUN_145aa994e(void)

void FUN_145aa994e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5f1330;
  param_1[0x72] = &PTR_FUN_14b5f1a00;
  param_1[0x73] = &PTR_FUN_14b5f1a80;
  param_1[0x74] = &PTR_FUN_14b5f1af0;
  param_1[0x75] = &PTR_FUN_14b5f1b18;
  param_1[0x76] = &PTR_FUN_14b5f1b30;
  param_1[0xa4] = &PTR_FUN_14b5f1b60;
  param_1[0xa5] = &PTR_FUN_14b5f1bb0;
  param_1[0xa6] = &PTR_FUN_14b5f1be0;
  param_1[0xa7] = &PTR_FUN_14b5f1c10;
  param_1[0xa8] = &PTR_FUN_14b5f1c28;
  param_1[0x118] = &PTR_FUN_14b5f1c40;
  param_1[0x119] = &PTR_FUN_14b5f1c70;
  param_1[0x11a] = &PTR_FUN_14b5f1ca0;
  FUN_140ef6a7a(param_1[0x11b],*(undefined4 *)(param_1 + 0x11c));
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef7316(param_1);
  return;
}



// FUNCTION 145aa9a46 FUN_145aa9a46 body=83 status=ok
// SIG undefined FUN_145aa9a46(void)

void FUN_145aa9a46(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_141030f22();
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x438) + 0x20))(param_1 + 0x438);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aa9a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 145aa9a9a FUN_145aa9a9a body=264 status=ok
// SIG undefined FUN_145aa9a9a(void)

void FUN_145aa9a9a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x43d8) != 0) {
    FUN_145aa9ba2(param_1,0);
    plVar2 = *(longlong **)(param_1 + 0x4208);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_1407ca880();
        plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
        if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
          lVar4 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x48);
          if (lVar4 != 0) {
            uVar1 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x48);
            (**(code **)(*plVar3 + 0x28))(plVar3,uVar1);
          }
          if ((longlong)*(int *)(param_1 + 0x4658) != 0) {
            lVar4 = 0;
            do {
              if ((*(int *)(*(longlong *)(param_1 + 18000) + 8 + lVar4) != 0) &&
                 (*(longlong *)(*(longlong *)(param_1 + 18000) + lVar4) != 0)) {
                FUN_1404f401e(param_1 + 18000,param_1);
                break;
              }
              lVar4 = lVar4 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x4658) * 0x10 != lVar4);
          }
        }
      }
    }
    FUN_14586180c(*(undefined8 *)(param_1 + 0x4208),0,DAT_14cbc5e40,1,0);
  }
  return;
}



// FUNCTION 145aa9ba2 FUN_145aa9ba2 body=313 status=ok
// SIG undefined FUN_145aa9ba2(void)

void FUN_145aa9ba2(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x43d0) == '\0') &&
     ((param_2 != '\0' || (cVar2 = FUN_1412159ee(param_1), cVar2 != '\0')))) {
    *(undefined1 *)(param_1 + 0x43d0) = 1;
    lVar3 = *(longlong *)(param_1 + 0x4208);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
      FUN_1447f69b6(lVar3 + 0x55f8);
      local_b0[0] = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0xffffffff;
      local_34 = 0;
      local_32 = 1;
      local_31 = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x4208);
      lVar3 = FUN_140316ff8();
      uVar4 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x4208));
      local_b8 = local_b0;
      FUN_140bdce7c(uVar4,lVar3 + 0xf0,uVar1,0);
    }
    lVar3 = *(longlong *)(param_1 + 0x43d8);
    if (lVar3 != 0) {
      FUN_145aa9cdc(param_1,*(undefined4 *)(lVar3 + 0x74),*(undefined4 *)(lVar3 + 0x78));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa9cdc FUN_145aa9cdc body=45 status=ok
// SIG undefined FUN_145aa9cdc(void)

void FUN_145aa9cdc(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (1 < *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x178))
     ) {
    *(undefined4 *)(&DAT_00004118 + param_1) = param_2;
    *(undefined1 *)(param_1 + 0x411c) = 1;
    *(undefined4 *)(&DAT_00004120 + param_1) = param_3;
  }
  return;
}



// FUNCTION 145aa9d0a FUN_145aa9d0a body=40 status=ok
// SIG undefined FUN_145aa9d0a(void)

undefined8 FUN_145aa9d0a(undefined8 param_1,int param_2)

{
  FUN_145aa9d32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa9d32 FUN_145aa9d32 body=116 status=ok
// SIG undefined FUN_145aa9d32(void)

void FUN_145aa9d32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa90940;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x18);
  FUN_145aa9da6(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_141491f98(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa9da6 FUN_145aa9da6 body=41 status=ok
// SIG undefined FUN_145aa9da6(void)

void FUN_145aa9da6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145aa9dd0(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 145aa9dd0 FUN_145aa9dd0 body=65 status=ok
// SIG undefined FUN_145aa9dd0(void)

void FUN_145aa9dd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa9e12 FUN_145aa9e12 body=40 status=ok
// SIG undefined FUN_145aa9e12(void)

void FUN_145aa9e12(undefined8 param_1,undefined8 param_2,char *param_3)

{
  if ((byte)(*param_3 - 2U) < 8) {
    FUN_145aa9e3a((&PTR_DAT_14b404128)[(byte)(*param_3 - 2U)],param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145aa9e3a FUN_145aa9e3a body=173 status=ok
// SIG undefined FUN_145aa9e3a(void)

void FUN_145aa9e3a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145aa9ed1;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145aa9ed1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145aa9ef0 FUN_145aa9ef0 body=992 status=ok
// SIG undefined FUN_145aa9ef0(void)

undefined8 * FUN_145aa9ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  undefined1 *local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145aaa338();
  *param_1 = &PTR_FUN_149f8ced0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x41f00000;
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_145aaa2ea(uVar1);
  param_1[0x3d] = uVar1;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f9c210;
  local_60 = &LAB_142a8fc40;
  local_88[0] = &LAB_146f3c9a8;
  FUN_145aaa3d4(param_1 + 0x66,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149f9c230;
  local_a0 = &LAB_142a8fc44;
  local_c8[0] = &LAB_146f3c9b8;
  FUN_145aaa512(param_1 + 0x6e,local_c8);
  if (local_c8[0] != (undefined1 *)0x0) {
    pppuVar2 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar2 = &local_a8;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaa2d2 FUN_145aaa2d2 body=12 status=ok
// SIG undefined FUN_145aaa2d2(void)

void FUN_145aaa2d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145aaa2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145aaa2de FUN_145aaa2de body=12 status=ok
// SIG undefined FUN_145aaa2de(void)

void FUN_145aaa2de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145aaa2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145aaa2ea FUN_145aaa2ea body=13 status=ok
// SIG undefined FUN_145aaa2ea(void)

void FUN_145aaa2ea(void *param_1)

{
  memset(param_1,0,0x128);
  return;
}



// FUNCTION 145aaa2f8 FUN_145aaa2f8 body=31 status=ok
// SIG undefined FUN_145aaa2f8(void)

undefined8 FUN_145aaa2f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aaa318 FUN_145aaa318 body=31 status=ok
// SIG undefined FUN_145aaa318(void)

undefined8 FUN_145aaa318(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aaa338 FUN_145aaa338 body=155 status=ok
// SIG undefined FUN_145aaa338(void)

undefined8 * FUN_145aaa338(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f8f930;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 145aaa3d4 FUN_145aaa3d4 body=292 status=ok
// SIG undefined FUN_145aaa3d4(void)

longlong * FUN_145aaa3d4(longlong *param_1,longlong *param_2)

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



// FUNCTION 145aaa512 FUN_145aaa512 body=292 status=ok
// SIG undefined FUN_145aaa512(void)

longlong * FUN_145aaa512(longlong *param_1,longlong *param_2)

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



// FUNCTION 145aaa650 FUN_145aaa650 body=55 status=ok
// SIG undefined FUN_145aaa650(void)

void FUN_145aaa650(longlong *param_1)

{
  FUN_145aaa688(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aaa688 FUN_145aaa688 body=127 status=ok
// SIG undefined FUN_145aaa688(void)

void FUN_145aaa688(longlong param_1,int param_2)

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
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145aaa708 FUN_145aaa708 body=161 status=ok
// SIG undefined FUN_145aaa708(void)

void FUN_145aaa708(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aaa7aa(&local_38,param_1);
  (**(code **)(param_2 + 0x20))(param_1,param_3);
  if (local_30 != 2) {
    (**(code **)(*local_38 + 0x588))();
  }
  iVar1 = (**(code **)(*DAT_14cab4b98 + 0xb0))();
  if (0 < iVar1) {
    local_38[0x3c] = 0;
    local_38[0x3d] = 0;
    local_38[0x3e] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaa7aa FUN_145aaa7aa body=112 status=ok
// SIG undefined FUN_145aaa7aa(void)

undefined8 * FUN_145aaa7aa(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_144a799b0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *param_1 = param_2;
      bVar1 = *(byte *)((longlong)param_2 + 0x1fb);
      *(uint *)(param_1 + 1) = (uint)bVar1;
      if (bVar1 == 2) {
        return param_1;
      }
      (**(code **)(*param_2 + 0x588))(param_2,2);
      return param_1;
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 2;
  return param_1;
}



// FUNCTION 145aaa822 FUN_145aaa822 body=114 status=ok
// SIG undefined FUN_145aaa822(void)

undefined8 * FUN_145aaa822(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a576c80;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 145aaa8a0 FUN_145aaa8a0 body=50 status=ok
// SIG undefined FUN_145aaa8a0(void)

undefined8 * FUN_145aaa8a0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abc8d30;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145aaa8de FUN_145aaa8de body=50 status=ok
// SIG undefined FUN_145aaa8de(void)

undefined8 * FUN_145aaa8de(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14abc9990;
  *(undefined4 *)(param_1 + 5) = 0xffc0c0c0;
  return param_1;
}



// FUNCTION 145aaa91c FUN_145aaa91c body=50 status=ok
// SIG undefined FUN_145aaa91c(void)

undefined8 * FUN_145aaa91c(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14abca310;
  *(undefined4 *)(param_1 + 5) = 0xff0000ff;
  return param_1;
}



// FUNCTION 145aaa95a FUN_145aaa95a body=50 status=ok
// SIG undefined FUN_145aaa95a(void)

undefined8 * FUN_145aaa95a(undefined8 *param_1)

{
  FUN_145973ff0();
  *param_1 = &PTR_FUN_14ad6bcc0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 145aaa998 FUN_145aaa998 body=50 status=ok
// SIG undefined FUN_145aaa998(void)

undefined8 * FUN_145aaa998(undefined8 *param_1)

{
  FUN_145a22acc();
  *param_1 = &PTR_FUN_14b217220;
  param_1[0x25] = &PTR_FUN_14b217570;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  return param_1;
}



// FUNCTION 145aaa9ca FUN_145aaa9ca body=62 status=ok
// SIG undefined FUN_145aaa9ca(void)

undefined8 * FUN_145aaa9ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b552600;
  FUN_145aaaa08(param_1 + 5);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aaaa08 FUN_145aaaa08 body=60 status=ok
// SIG undefined FUN_145aaaa08(void)

void FUN_145aaaa08(longlong *param_1)

{
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



// FUNCTION 145aaaa44 FUN_145aaaa44 body=38 status=ok
// SIG undefined FUN_145aaaa44(void)

undefined8 FUN_145aaaa44(undefined8 param_1,int param_2)

{
  FUN_145aaaa6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aaaa6a FUN_145aaaa6a body=84 status=ok
// SIG undefined FUN_145aaaa6a(void)

void FUN_145aaaa6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9daa40;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145aaaaca FUN_145aaaaca body=50 status=ok
// SIG undefined FUN_145aaaaca(void)

undefined8 * FUN_145aaaaca(undefined8 *param_1)

{
  FUN_145946620();
  *param_1 = &PTR_FUN_14ba464e0;
  param_1[5] = &PTR_FUN_14ba468e0;
  *(undefined1 *)(param_1 + 0x3cf) = 0;
  return param_1;
}



// FUNCTION 145aaab08 FUN_145aaab08 body=50 status=ok
// SIG undefined FUN_145aaab08(void)

undefined8 * FUN_145aaab08(undefined8 *param_1)

{
  FUN_1459a8e16();
  *param_1 = &PTR_FUN_14ba46910;
  param_1[5] = &PTR_FUN_14ba46de0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  return param_1;
}



// FUNCTION 145aaab46 FUN_145aaab46 body=492 status=ok
// SIG undefined FUN_145aaab46(void)

undefined8 * FUN_145aaab46(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_38,L"Preview",1);
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,0,0);
  FUN_1446f470e(&local_40,L"SpawnComponent",1);
  uVar1 = FUN_145aaad34();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar1,0);
  FUN_140485eae(param_1,param_2);
  *param_1 = &PTR_FUN_14b7d2ea0;
  param_1[0x72] = &PTR_FUN_14b7d34e0;
  param_1[0x73] = &PTR_FUN_14b7d3500;
  param_1[0x78] = &PTR_FUN_14b7d3520;
  param_1[0x79] = &PTR_FUN_14b7d3590;
  param_1[0x7a] = &PTR_FUN_14b7d35c0;
  param_1[0x7b] = &PTR_FUN_14b7d35f0;
  param_1[0x7c] = &PTR_FUN_14b7d3660;
  param_1[0x7d] = &PTR_FUN_14b7d3678;
  param_1[0x7e] = &PTR_FUN_14b7d3690;
  param_1[0x7f] = &PTR_FUN_14b7d36b0;
  param_1[0x109] = 0;
  FUN_1446f470e(&local_48,L"Perch",1);
  uVar1 = FUN_14061d078();
  local_50 = 0;
  local_58 = 1;
  lVar2 = FUN_14048696c(param_1,local_48,uVar1,uVar1);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x109] = lVar2;
    if (lVar2 == 0) goto LAB_145aaacfc;
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[0x109] = lVar2;
  }
  FUN_140486fc4(lVar2,param_1[0x39],0);
LAB_145aaacfc:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaad34 FUN_145aaad34 body=228 status=ok
// SIG undefined FUN_145aaad34(void)

longlong FUN_145aaad34(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbad538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464ba3a0;
    local_38 = &LAB_148c35b31;
    local_40 = FUN_1465e662f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x950;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPerchSpawnPointComponent",&DAT_14cbad538,&DAT_148c35b30);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbad538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaae1a FUN_145aaae1a body=150 status=ok
// SIG undefined FUN_145aaae1a(void)

undefined4 * FUN_145aaae1a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_145aaaf18(param_1,param_3);
  if (lVar1 != 0) {
    FUN_145aaaff8(lVar1,local_40);
    if ((local_28 == '\x01') && (*(longlong *)(param_1 + 0x3c0) != 0)) {
      FUN_145aaaeb2(*(longlong *)(param_1 + 0x3c0),&local_58,local_40);
      if ((local_48 & 1) != 0) {
        *param_2 = local_58;
        param_2[1] = uStack_54;
        param_2[2] = uStack_50;
        param_2[3] = uStack_4c;
        *(undefined1 *)(param_2 + 4) = 1;
        goto LAB_145aaae89;
      }
    }
  }
  *(undefined1 *)(param_2 + 4) = 0;
LAB_145aaae89:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaaeb2 FUN_145aaaeb2 body=100 status=ok
// SIG undefined FUN_145aaaeb2(void)

undefined8 FUN_145aaaeb2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [168];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145aab22c(param_1,local_c8);
  FUN_145aab0fa();
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaaf18 FUN_145aaaf18 body=223 status=ok
// SIG undefined FUN_145aaaf18(void)

longlong FUN_145aaaf18(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if ((longlong)*(int *)(param_1 + 0x9f8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x9f0);
    lVar3 = (longlong)*(int *)(param_1 + 0x9f8) * 0x80 + lVar4;
    lVar1 = *param_2;
    do {
      lVar2 = *(longlong *)(lVar4 + 8);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x80) != *(int *)(lVar2 + 0xac))) {
        lVar6 = lVar2 + 0xb0;
        if (*(longlong *)(lVar2 + 0xb8) != 0) {
          lVar6 = *(longlong *)(lVar2 + 0xb8);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar2 + 0xc0) - 1U &
                                 (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
        if (iVar5 != -1) {
          lVar2 = *(longlong *)(lVar2 + 0x78);
          iVar7 = iVar5;
          do {
            if (*(longlong *)(lVar2 + (longlong)iVar7 * 0x180) == lVar1) goto LAB_145aaafac;
            iVar7 = *(int *)((longlong)iVar7 * 0x180 + lVar2 + 0x170);
          } while (iVar7 != -1);
        }
      }
      lVar4 = lVar4 + 0x80;
    } while (lVar4 != lVar3);
  }
  return 0;
  while (iVar5 = *(int *)(lVar4 + 0x170), iVar5 != -1) {
LAB_145aaafac:
    lVar4 = lVar2 + (longlong)iVar5 * 0x180;
    if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x180) == lVar1) goto LAB_145aaafc1;
  }
  lVar4 = 0;
LAB_145aaafc1:
  return lVar4 + 0x10;
}



// FUNCTION 145aaaff8 FUN_145aaaff8 body=257 status=ok
// SIG undefined FUN_145aaaff8(void)

double * FUN_145aaaff8(longlong param_1,double *param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(char *)(param_1 + 200) == '\x01') {
    dVar6 = *(double *)(param_1 + 0xb0);
    dVar7 = *(double *)(param_1 + 0xb8);
    dVar5 = *(double *)(param_1 + 0xc0);
    if (*(char *)(param_1 + 0x148) == '\x01') {
      dVar6 = dVar6 + *(double *)(param_1 + 0x120);
      dVar7 = dVar7 + *(double *)(param_1 + 0x128);
      dVar5 = dVar5 + *(double *)(param_1 + 0x130);
    }
    *param_2 = dVar6;
    param_2[1] = dVar7;
  }
  else {
    cVar2 = FUN_144729dda(param_1 + 0xdc);
    if (cVar2 == '\0') {
      uVar1 = 0;
      goto LAB_145aab043;
    }
    lVar3 = FUN_14479d2ce(param_1 + 0xdc);
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar3 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      dVar5 = DAT_14c8464f0;
    }
    else {
      pdVar4 = (double *)(lVar3 + 0x260);
      dVar5 = *(double *)(lVar3 + 0x270);
    }
    dVar6 = *pdVar4;
    dVar7 = pdVar4[1];
    if (*(char *)(param_1 + 0x148) == '\x01') {
      dVar6 = *(double *)(param_1 + 0x120) + dVar6;
      dVar7 = dVar7 + *(double *)(param_1 + 0x128);
      dVar5 = dVar5 + *(double *)(param_1 + 0x130);
    }
    *param_2 = dVar6;
    param_2[1] = dVar7;
  }
  param_2[2] = dVar5;
  uVar1 = 1;
LAB_145aab043:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 145aab0fa FUN_145aab0fa body=304 status=ok
// SIG undefined FUN_145aab0fa(void)

double * FUN_145aab0fa(undefined8 param_1,double *param_2,int *param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_3[0x24] == '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    local_48 = *(undefined8 *)param_3;
    local_50 = 0;
    local_58 = 0;
    cVar2 = FUN_1401ca69e(param_4,&local_50,param_3 + 4,&local_40);
    if (cVar2 != '\0') {
      dVar3 = (double)*param_3;
      dVar1 = (double)(~-(ulonglong)(1e-08 < ABS(dVar3)) &
                       -(ulonglong)(dVar3 <= local_40) & 0x3ff0000000000000 |
                      (ulonglong)(local_40 / dVar3) & -(ulonglong)(1e-08 < ABS(dVar3)));
      dVar3 = (double)param_3[1];
      dVar3 = (double)(~-(ulonglong)(1e-08 < ABS(dVar3)) &
                       -(ulonglong)(dVar3 <= local_38) & 0x3ff0000000000000 |
                      (ulonglong)(local_38 / dVar3) & -(ulonglong)(1e-08 < ABS(dVar3)));
      *param_2 = dVar1 + dVar1 + -1.0;
      param_2[1] = 1.0 - (dVar3 + dVar3);
    }
    *(bool *)(param_2 + 2) = cVar2 != '\0';
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145aab22c FUN_145aab22c body=398 status=ok
// SIG undefined FUN_145aab22c(void)

undefined8 * FUN_145aab22c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_ca8 [32];
  undefined8 *local_c88;
  longlong local_c78 [16];
  undefined1 local_bf8;
  undefined8 local_be8 [16];
  undefined1 local_b68 [128];
  undefined1 local_ae8 [128];
  undefined1 local_a68 [2264];
  longlong local_190;
  longlong local_108;
  char local_78;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_ca8;
  *param_2 = DAT_14c967818;
  puVar3 = &DAT_14c846400;
  puVar5 = param_2 + 2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_2 + 0x12) = 0;
  if (param_1[0x75] != 0) {
    FUN_1400e6e60(local_a68);
    (**(code **)(*param_1 + 0x5f8))(param_1,0,local_a68);
    if (*(char *)((longlong)param_1 + 0xc8c) == '\x01') {
      plVar2 = param_1 + 0x192;
      plVar4 = local_c78;
      for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *plVar4 = *plVar2;
        plVar2 = plVar2 + 1;
        plVar4 = plVar4 + 1;
      }
      local_bf8 = 1;
    }
    else {
      local_bf8 = 0;
    }
    local_c88 = local_be8;
    FUN_145aab3bc(local_a68,local_c78,local_ae8,local_b68);
    fVar6 = (float)(**(code **)(*(longlong *)param_1[0x75] + 0x358))();
    fVar7 = (float)(**(code **)(*(longlong *)param_1[0x75] + 0x350))();
    *param_2 = CONCAT44((int)fVar6,(int)fVar7);
    puVar3 = local_be8;
    puVar5 = param_2 + 2;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)(param_2 + 0x12) = 1;
    if (local_78 == '\x01') {
      local_78 = '\0';
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_190 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_ca8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aab3bc FUN_145aab3bc body=1113 status=ok
// SIG undefined FUN_145aab3bc(void)

void FUN_145aab3bc(ulonglong *param_1,longlong param_2,double *param_3,double *param_4,
                  double *param_5)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_378 [40];
  double *local_350;
  undefined1 local_348 [128];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  double local_248 [12];
  undefined1 auStack_1e8 [16];
  ulonglong uStack_1d8;
  undefined8 local_1d0;
  double local_1c8 [33];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_350 = param_4;
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_144a87de4(local_1c8 + 0x10);
    lVar1 = 0x10;
    pdVar2 = local_1c8 + 0x10;
  }
  else {
    FUN_1403f8f3e(param_1,local_1c8,0);
    pdVar2 = local_1c8 + 0x10;
    FUN_144a87de4(pdVar2,local_1c8);
    lVar1 = 0x10;
  }
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    param_4 = param_4 + 1;
  }
  dVar4 = cos(((double)param_1[4] * 3.1415927410125732) / 180.0);
  dVar5 = sin(((double)param_1[4] * 3.1415927410125732) / 180.0);
  dVar6 = sin(((double)param_1[4] * 3.1415927410125732) / 180.0);
  local_1c8[0] = cos(((double)param_1[4] * 3.1415927410125732) / 180.0);
  local_1c8[2] = 0.0;
  local_1c8[3] = 0.0;
  local_1c8[6] = 0.0;
  local_1c8[7] = 0.0;
  local_1c8[8] = 0.0;
  local_1c8[9] = 0.0;
  local_1c8[10] = 1.0;
  local_1c8[0xb] = 0.0;
  local_1c8[0xc] = 0.0;
  local_1c8[0xd] = 0.0;
  local_1c8[0xe] = 0.0;
  local_1c8[0xf] = 1.0;
  local_1c8[1] = -dVar6;
  local_1c8[4] = dVar5;
  local_1c8[5] = dVar4;
  dVar4 = cos(((double)param_1[3] * 3.1415927410125732) / 180.0);
  dVar5 = sin(((double)param_1[3] * 3.1415927410125732) / 180.0);
  dVar6 = sin(((double)param_1[3] * 3.1415927410125732) / 180.0);
  local_248[0] = cos(((double)param_1[3] * 3.1415927410125732) / 180.0);
  local_248[1] = 0.0;
  local_248[3] = 0.0;
  local_248[4] = 0.0;
  local_248[5] = 1.0;
  local_248[6] = 0.0;
  local_248[7] = 0.0;
  local_248[9] = 0.0;
  local_248[0xb] = 0.0;
  auStack_1e8 = ZEXT816(0);
  uStack_1d8 = 0;
  local_1d0 = 0x3ff0000000000000;
  local_248[2] = -dVar6;
  local_248[8] = dVar5;
  local_248[10] = dVar4;
  FUN_1447fea8d(local_1c8 + 0x10,local_1c8,local_248);
  dVar4 = cos(((double)param_1[5] * 3.1415927410125732) / 180.0);
  dVar5 = sin(((double)param_1[5] * 3.1415927410125732) / 180.0);
  dVar6 = sin(((double)param_1[5] * 3.1415927410125732) / 180.0);
  local_2a0 = cos(((double)param_1[5] * 3.1415927410125732) / 180.0);
  local_2c8 = 0x3ff0000000000000;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x3ff0000000000000;
  local_298 = dVar6;
  local_280 = -dVar5;
  local_278 = dVar4;
  FUN_1447fea8d(local_348,local_1c8 + 0x10);
  local_1c8[0] = 0.0;
  local_1c8[1] = 0.0;
  local_1c8[2] = 1.0;
  local_1c8[3] = 0.0;
  local_1c8[4] = 1.0;
  local_1c8[5] = 0.0;
  local_1c8[6] = 0.0;
  local_1c8[7] = 0.0;
  local_1c8[8] = 0.0;
  local_1c8[9] = 1.0;
  local_1c8[10] = 0.0;
  local_1c8[0xb] = 0.0;
  local_1c8[0xc] = 0.0;
  local_1c8[0xd] = 0.0;
  local_1c8[0xe] = 0.0;
  local_1c8[0xf] = 1.0;
  FUN_1447fea8d(local_1c8 + 0x10,local_348,local_1c8);
  uStack_1d8 = param_1[2] ^ 0x8000000000000000;
  local_248[0] = 1.0;
  local_248[1] = 0.0;
  local_248[2] = 0.0;
  local_248[3] = 0.0;
  local_248[4] = 0.0;
  local_248[5] = 1.0;
  local_248[6] = 0.0;
  local_248[7] = 0.0;
  local_248[8] = 0.0;
  local_248[9] = 0.0;
  local_248[10] = 1.0;
  local_248[0xb] = 0.0;
  auStack_1e8._8_4_ = (int)param_1[1];
  auStack_1e8._0_8_ = *param_1 ^ 0x8000000000000000;
  auStack_1e8._12_4_ = (uint)(param_1[1] >> 0x20) ^ 0x80000000;
  local_1d0 = 0x3ff0000000000000;
  FUN_1447fea8d(local_1c8,local_248,local_1c8 + 0x10);
  pdVar2 = local_1c8;
  pdVar3 = param_3;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  FUN_1447fea8d(local_1c8,param_3,local_350);
  pdVar2 = local_1c8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_5 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    param_5 = param_5 + 1;
  }
  if ((local_c0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aab816 FUN_145aab816 body=154 status=ok
// SIG undefined FUN_145aab816(void)

bool FUN_145aab816(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aab8c0 FUN_145aab8c0 body=9 status=ok
// SIG undefined FUN_145aab8c0(void)

void FUN_145aab8c0(longlong param_1)

{
  FUN_145aab8ca(param_1 + 0x10);
  return;
}



// FUNCTION 145aab8ca FUN_145aab8ca body=243 status=ok
// SIG undefined FUN_145aab8ca(void)

void FUN_145aab8ca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b4ef6b0;
  plVar3 = (longlong *)FUN_140a68038(0);
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0xa8))(local_28,param_1 + 0x13);
    }
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 10);
  FUN_145aab9be(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aab9be FUN_145aab9be body=83 status=ok
// SIG undefined FUN_145aab9be(void)

void FUN_145aab9be(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b4ef980;
  if (param_1[5] != 0) {
    FUN_1411ebbe4();
    param_1[5] = 0;
  }
  FUN_1449db362(param_1 + 8);
  FUN_1449db362(param_1 + 6);
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aaba12 FUN_145aaba12 body=207 status=ok
// SIG undefined FUN_145aaba12(void)

void FUN_145aaba12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + -0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0xe68) + 0x10))(lVar2 + 0xe68);
      local_40 = FUN_148e377a6;
      local_38 = 0;
      FUN_145aabae2(lVar2 + 8,local_30,param_1 + -0x30,&local_40);
      local_40 = FUN_148e37902;
      local_38 = 0;
      FUN_145aabce0(lVar2 + 0x20,local_30,param_1 + -0x30,&local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aabae2 FUN_145aabae2 body=254 status=ok
// SIG undefined FUN_145aabae2(void)

undefined8
FUN_145aabae2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9ad630;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ad5c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145aabbe2(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aabbe2 FUN_145aabbe2 body=216 status=ok
// SIG undefined FUN_145aabbe2(void)

undefined8 * FUN_145aabbe2(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aabcc8 FUN_145aabcc8 body=24 status=ok
// SIG undefined FUN_145aabcc8(void)

bool FUN_145aabcc8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145aabce0 FUN_145aabce0 body=254 status=ok
// SIG undefined FUN_145aabce0(void)

undefined8
FUN_145aabce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9ad710;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ad6a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145aabde0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aabde0 FUN_145aabde0 body=216 status=ok
// SIG undefined FUN_145aabde0(void)

undefined8 * FUN_145aabde0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aabec6 FUN_145aabec6 body=24 status=ok
// SIG undefined FUN_145aabec6(void)

bool FUN_145aabec6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145aabede FUN_145aabede body=54 status=ok
// SIG undefined FUN_145aabede(void)

void FUN_145aabede(undefined8 param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 0xb0) = 0;
    FUN_145aabf14(*param_2,1);
  }
  FUN_1407d545c(param_1,param_2);
  return;
}



// FUNCTION 145aabf14 FUN_145aabf14 body=53 status=ok
// SIG undefined FUN_145aabf14(void)

void FUN_145aabf14(longlong *param_1,char param_2)

{
  if ((((*(char *)((longlong)param_1 + 0x114) != param_2) &&
       (*(char *)((longlong)param_1 + 0x114) = param_2, *param_1 != -1)) &&
      (param_1 != (longlong *)0x0)) && (DAT_14cb259f8 != 0)) {
    FUN_1407c31d4(*(undefined8 *)(DAT_14cb259f8 + 0x40),param_1);
    return;
  }
  return;
}



// FUNCTION 145aabf4a FUN_145aabf4a body=40 status=ok
// SIG undefined FUN_145aabf4a(void)

undefined8 FUN_145aabf4a(undefined8 param_1,int param_2)

{
  FUN_145aabf72();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aabf72 FUN_145aabf72 body=220 status=ok
// SIG undefined FUN_145aabf72(void)

void FUN_145aabf72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6c1bf0;
  param_1[5] = &PTR_FUN_14b6c1ef0;
  param_1[6] = &PTR_FUN_14b6c1f20;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c3da(param_1);
  return;
}



// FUNCTION 145aac04e FUN_145aac04e body=146 status=ok
// SIG undefined FUN_145aac04e(void)

longlong FUN_145aac04e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_145aac0e0();
  FUN_145aac13e(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined8 *)(param_1 + 0xae) = *(undefined8 *)(param_2 + 0xae);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    *(undefined8 *)(param_2 + 0xc0) = 0;
  }
  return param_1;
}



// FUNCTION 145aac0e0 FUN_145aac0e0 body=93 status=ok
// SIG undefined FUN_145aac0e0(void)

longlong FUN_145aac0e0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145aac34a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 145aac13e FUN_145aac13e body=93 status=ok
// SIG undefined FUN_145aac13e(void)

longlong FUN_145aac13e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145aac19c(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 145aac19c FUN_145aac19c body=429 status=ok
// SIG undefined FUN_145aac19c(void)

longlong * FUN_145aac19c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_1457586f6((longlong)iVar6 * 0x68 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145aac34a FUN_145aac34a body=461 status=ok
// SIG undefined FUN_145aac34a(void)

longlong * FUN_145aac34a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar8 = 0;
    local_50 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
      iVar8 = (int)param_1[5];
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar7 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar8) || (local_68 = uVar6, local_50 != plVar1)) {
      do {
        local_68 = uVar6;
        plVar2 = (longlong *)(*local_80 + (longlong)iVar7 * 0xb8);
        FUN_140d69dce(plVar2 + 2);
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar7 = local_68._4_4_;
        uVar6 = local_68;
      } while (((local_68._4_4_ != iVar8) || (local_70 != plVar1)) || (local_80 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar5 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145aac518 FUN_145aac518 body=213 status=ok
// SIG undefined FUN_145aac518(void)

bool FUN_145aac518(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aac5fc FUN_145aac5fc body=141 status=ok
// SIG undefined FUN_145aac5fc(void)

void FUN_145aac5fc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_1405a77a8(param_1,local_30);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x688) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aac6e4 FUN_145aac6e4 body=1438 status=ok
// SIG undefined FUN_145aac6e4(void)

void FUN_145aac6e4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  longlong local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined1 local_289;
  undefined8 local_288;
  longlong *local_280;
  longlong local_278;
  longlong *local_270;
  undefined1 *local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined8 local_250;
  longlong *local_248;
  undefined1 local_240 [424];
  longlong local_98;
  longlong *local_90;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(int *)(param_1 + 0x1390) == 0) {
LAB_145aac716:
    bVar8 = DAT_14c86a9e0 == 0;
  }
  else {
    plVar6 = (longlong *)FUN_1477f6670();
    cVar4 = (**(code **)(*plVar6 + 0x70))(plVar6);
    if (cVar4 != '\0') goto LAB_145aac716;
    bVar8 = false;
  }
  FUN_140a504fe(local_240);
  local_2c8 = &local_278;
  FUN_140a536a8(&local_268,"SOverlay",".\\Runtime/Engine/Private/GameEngine.cpp",0xd2);
  FUN_140a4ff16(&local_268,&local_250,local_240);
  plVar6 = (longlong *)CONCAT44(uStack_25c,local_260);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_1415b5e16(local_240);
  FUN_145aad1ac(local_240);
  local_268 = &LAB_1458c5c12;
  local_260 = 0;
  FUN_145aad448(local_240,param_1,&local_268,param_2);
  plVar7 = local_90;
  plVar6 = local_248;
  if (local_248 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_248 + 1) = (int)local_248[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_248 + 1) = (int)local_248[1] + 1;
    UNLOCK();
  }
  local_98 = local_250;
  local_90 = local_248;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_145aad590(&local_268,&local_288);
  FUN_145aacd48(&local_268,&local_278,local_240);
  plVar7 = (longlong *)CONCAT44(uStack_25c,local_260);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_145aacc84(local_240);
  FUN_145aad25c(local_240);
  plVar7 = local_90;
  plVar6 = local_270;
  local_6f = 0;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
  }
  local_98 = local_278;
  local_90 = local_270;
  local_70 = bVar8;
  local_6c = bVar8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_2c8 = (longlong *)&local_289;
  FUN_145aad862(&local_268,"SViewport",".\\Runtime/Engine/Private/GameEngine.cpp",0xe8);
  FUN_145aaccd2(&local_268,&local_288,local_240);
  plVar7 = (longlong *)CONCAT44(uStack_25c,local_260);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_145aad09e(local_240);
  plVar6 = local_280;
  if (local_280 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1380) = local_288;
    plVar7 = *(longlong **)(param_1 + 5000);
    if (plVar7 == (longlong *)0x0) goto LAB_145aac96b;
    *(undefined8 *)(param_1 + 5000) = 0;
LAB_145aacb43:
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_145aac96b;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
    plVar6 = plVar7;
  }
  else {
    LOCK();
    *(int *)(local_280 + 1) = (int)local_280[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1380) = local_288;
    plVar7 = *(longlong **)(param_1 + 5000);
    if (local_280 != plVar7) {
      *(longlong **)(param_1 + 5000) = local_280;
      if (plVar7 == (longlong *)0x0) goto LAB_145aac96b;
      goto LAB_145aacb43;
    }
    LOCK();
    plVar7 = local_280 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_145aac96b;
    (**(code **)*local_280)(local_280);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_145aac96b:
  local_2a0 = local_250;
  local_298 = local_248;
  if (local_248 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_248 + 1) = (int)local_248[1] + 1;
    UNLOCK();
  }
  local_2b0 = 0;
  local_2a8 = *(longlong *)(param_1 + 0x1368);
  if (local_2a8 != 0) {
    iVar5 = *(int *)(local_2a8 + 8);
    do {
      if (iVar5 == 0) {
        local_2a8 = 0;
        goto LAB_145aac9d1;
      }
      LOCK();
      iVar3 = *(int *)(local_2a8 + 8);
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(local_2a8 + 8) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    if (local_2a8 != 0) {
      local_2b0 = *(undefined8 *)(param_1 + 0x1360);
    }
  }
LAB_145aac9d1:
  FUN_145aad34a(param_2,&local_2b0,&local_2a0);
  local_2c0 = local_278 + 0x268;
  if (local_278 == 0) {
    local_2c0 = 0;
  }
  local_2b8 = local_270;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
  }
  FUN_145aad124(param_2,&local_2c0);
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_280 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar2 = (int *)((longlong)local_280 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_280 + 0x10))(local_280);
      }
    }
  }
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_270 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar2 = (int *)((longlong)local_270 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_270 + 0x10))(local_270);
      }
    }
  }
  if (local_248 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_248 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_248)(local_248);
      LOCK();
      piVar2 = (int *)((longlong)local_248 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_248 + 0x10))(local_248);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aacc84 FUN_145aacc84 body=78 status=ok
// SIG undefined FUN_145aacc84(void)

void FUN_145aacc84(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1c8);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145aaccd2 FUN_145aaccd2 body=117 status=ok
// SIG undefined FUN_145aaccd2(void)

longlong * FUN_145aaccd2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145aacdbe(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145aacd48 FUN_145aacd48 body=117 status=ok
// SIG undefined FUN_145aacd48(void)

longlong * FUN_145aacd48(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145aadb16(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145aacdbe FUN_145aacdbe body=248 status=ok
// SIG undefined FUN_145aacdbe(void)

void FUN_145aacdbe(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_145aacfa4(param_1 + 0x298,param_1,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x2c1) = *(undefined1 *)(param_2 + 0x1d1);
  *(undefined1 *)(param_1 + 0x2c2) = *(undefined1 *)(param_2 + 0x1d2);
  *(undefined1 *)(param_1 + 0x2c3) = *(undefined1 *)(param_2 + 0x1d3);
  *(undefined1 *)(param_1 + 0x2c4) = *(undefined1 *)(param_2 + 0x1d4);
  *(undefined1 *)(param_1 + 0x2c5) = *(undefined1 *)(param_2 + 0x1d6);
  *(undefined1 *)(param_1 + 0x2c6) = *(undefined1 *)(param_2 + 0x1d5);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x1d8);
  plVar2 = *(longlong **)(param_2 + 0x1e0);
  plVar3 = *(longlong **)(param_1 + 0x270);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x270);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x270) = plVar2;
  }
  FUN_145aaceb6(param_1 + 0x2a0,param_1,param_2 + 0x1e8);
  FUN_140a58896(param_1 + 0x1e0,param_2 + 0x1a8);
  return;
}



// FUNCTION 145aaceb6 FUN_145aaceb6 body=126 status=ok
// SIG undefined FUN_145aaceb6(void)

void FUN_145aaceb6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146af88dc(param_1,param_2,param_3 + 0x18);
      return;
    }
  }
  if (*(char *)(param_3 + 0x10) == '\x01') {
    uVar2 = FUN_140133f12(param_3);
    FUN_145aacf34(param_1,param_2,uVar2);
    return;
  }
  FUN_1400b73c8(param_2,param_1);
  return;
}



// FUNCTION 145aacf34 FUN_145aacf34 body=112 status=ok
// SIG undefined FUN_145aacf34(void)

ulonglong FUN_145aacf34(double *param_1,undefined8 param_2,double *param_3)

{
  ulonglong uVar1;
  double dVar2;
  
  FUN_1400b73c8(param_2,param_1);
  uVar1 = -(ulonglong)(param_3[1] != param_1[1] || *param_1 != *param_3);
  if ((uVar1 & 1) != 0) {
    dVar2 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = dVar2;
    FUN_14094e0ca(param_2,param_1,0,1);
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 145aacfa4 FUN_145aacfa4 body=176 status=ok
// SIG undefined FUN_145aacfa4(void)

undefined8 FUN_145aacfa4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
    if (cVar1 != '\0') {
      uVar3 = FUN_146ac08ac(param_1,param_2,param_3 + 8);
      return uVar3;
    }
  }
  if (param_3[1] == '\x01') {
    if (*(longlong **)(param_3 + 8) != (longlong *)0x0 && *(int *)(param_3 + 0x10) != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x30))();
      if (cVar1 != '\0') {
        if (*(int *)(param_3 + 0x10) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_3 + 8);
        }
        uVar2 = (**(code **)(*plVar4 + 0x58))();
        *param_3 = uVar2;
      }
    }
    uVar3 = FUN_145aad054(param_1,param_2,param_3);
    return uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  return 0;
}



// FUNCTION 145aad054 FUN_145aad054 body=74 status=ok
// SIG undefined FUN_145aad054(void)

bool FUN_145aad054(char *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_1400b73c8(param_2,param_1);
  cVar1 = *param_1;
  cVar2 = *param_3;
  if (cVar1 != cVar2) {
    *param_1 = cVar2;
    FUN_14094e0ca(param_2,param_1,0,2);
  }
  return cVar1 != cVar2;
}



// FUNCTION 145aad09e FUN_145aad09e body=133 status=ok
// SIG undefined FUN_145aad09e(void)

void FUN_145aad09e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x200);
  plVar3 = *(longlong **)(param_1 + 0x1e0);
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
  FUN_1449db362(param_1 + 0x1c0);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145aad124 FUN_145aad124 body=135 status=ok
// SIG undefined FUN_145aad124(void)

void FUN_145aad124(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x130) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x138);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x138);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x138) = plVar3;
    plVar3 = (longlong *)param_2[1];
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aad1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145aad1ac FUN_145aad1ac body=175 status=ok
// SIG undefined FUN_145aad1ac(void)

longlong FUN_145aad1ac(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aad25c FUN_145aad25c body=219 status=ok
// SIG undefined FUN_145aad25c(void)

longlong FUN_145aad25c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 0x1b8) = 0x101;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 1;
  *(undefined2 *)(param_1 + 0x1d5) = 0x101;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  FUN_145aad338(&local_38);
  *(double *)(param_1 + 0x1e8) = (double)local_38;
  *(double *)(param_1 + 0x1f0) = (double)local_34;
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aad338 FUN_145aad338 body=17 status=ok
// SIG undefined FUN_145aad338(void)

void FUN_145aad338(undefined8 *param_1)

{
  *param_1 = 0x4370000043a00000;
  return;
}



// FUNCTION 145aad34a FUN_145aad34a body=254 status=ok
// SIG undefined FUN_145aad34a(void)

void FUN_145aad34a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x110) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x118);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x118) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x120) = *param_3;
  plVar2 = (longlong *)param_3[1];
  plVar3 = *(longlong **)(param_1 + 0x128);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x128);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x128) = plVar2;
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aad444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145aad448 FUN_145aad448 body=326 status=ok
// SIG undefined FUN_145aad448(void)

longlong FUN_145aad448(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar3 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_14a8e9a10;
  local_68[1] = param_4;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_68[2] = lVar5;
  *local_68 = &PTR_FUN_14a8e99a0;
  local_68[3] = 0;
  FUN_14485c47a(local_68 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  local_40 = 0;
  FUN_145aafc16(&local_48,&local_68);
  *(undefined1 *)(param_1 + 0x1c0) = local_50;
  *(undefined8 *)(param_1 + 0x1b8) = local_58;
  FUN_144a450dc(param_1 + 0x1c8,&local_48);
  FUN_1449db362(&local_48);
  FUN_1449db362(&local_68);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aad590 FUN_145aad590 body=356 status=ok
// SIG undefined FUN_145aad590(void)

longlong * FUN_145aad590(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x408,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a8e9980;
  plVar4 = plVar3 + 2;
  FUN_145aad798(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_145aad6f6(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145aad61f;
    param_1[1] = 0;
LAB_145aad68e:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145aad61f;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145aad61f;
      goto LAB_145aad68e;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145aad61f;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145aad61f:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x3f8;
  FUN_140a52e78(*param_1,"SGameLayerManager",".\\Runtime/Engine/Private/GameEngine.cpp",0xd4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aad6f6 FUN_145aad6f6 body=162 status=ok
// SIG undefined FUN_145aad6f6(void)

void FUN_145aad6f6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145aad735;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145aad735;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145aad735:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aad794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145aad798 FUN_145aad798 body=202 status=ok
// SIG undefined FUN_145aad798(void)

undefined8 * FUN_145aad798(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14aa95850;
  param_1[0x4d] = &PTR_FUN_14aa95a90;
  FUN_14570e3a0(param_1 + 0x4e);
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  memset(param_1 + 0x61,0,0xc4);
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x42800000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  return param_1;
}



// FUNCTION 145aad862 FUN_145aad862 body=401 status=ok
// SIG undefined FUN_145aad862(void)

longlong *
FUN_145aad862(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5aa920;
  plVar1 = plVar4 + 2;
  FUN_145aad9f4(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_145aada74(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145aad918;
    param_1[1] = 0;
LAB_145aad985:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145aad918;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_145aad918;
      goto LAB_145aad985;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145aad918;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145aad918:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x2c8;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aad9f4 FUN_145aad9f4 body=127 status=ok
// SIG undefined FUN_145aad9f4(void)

undefined8 * FUN_145aad9f4(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f1c2b0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  param_1[0x54] = 0x4074000000000000;
  param_1[0x55] = 0x406e000000000000;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c1) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
  return param_1;
}



// FUNCTION 145aada74 FUN_145aada74 body=162 status=ok
// SIG undefined FUN_145aada74(void)

void FUN_145aada74(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145aadab3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145aadab3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145aadab3:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aadb12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145aadb16 FUN_145aadb16 body=7434 status=ok
// SIG undefined FUN_145aadb16(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145aadb16(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_21a8 [32];
  undefined1 *local_2188;
  undefined1 local_2180;
  undefined8 local_2178;
  longlong local_2170;
  undefined1 local_2168 [16];
  undefined1 local_2158 [16];
  longlong local_2148;
  longlong *local_2140;
  longlong local_2138;
  longlong *local_2130;
  undefined1 local_2121;
  undefined1 local_2120 [8];
  longlong *local_2118;
  undefined1 local_2101;
  undefined8 local_2100;
  longlong *local_20f8;
  undefined1 local_20e1;
  undefined8 local_20e0;
  longlong *local_20d8;
  undefined1 local_20c1;
  undefined8 local_20c0;
  longlong *local_20b8;
  undefined8 local_20a8;
  undefined1 local_20a0;
  undefined8 local_2098;
  undefined4 local_2090;
  undefined8 local_2088;
  longlong *local_2080;
  undefined8 local_2078;
  longlong *local_2070;
  undefined1 local_2061;
  undefined1 local_2060 [8];
  longlong *local_2058;
  undefined1 local_2041;
  undefined8 local_2040;
  longlong *local_2038;
  undefined8 local_2028;
  longlong *local_2020;
  undefined8 local_2018;
  longlong *local_2010;
  undefined8 local_2008;
  longlong *local_2000;
  undefined1 local_1ff1;
  undefined1 local_1ff0 [8];
  longlong *local_1fe8;
  undefined1 local_1fd1;
  undefined8 local_1fd0;
  longlong *local_1fc8;
  undefined1 local_1fb1;
  undefined8 local_1fb0;
  longlong *local_1fa8;
  undefined8 local_1f98;
  longlong *local_1f90;
  undefined8 local_1f88;
  longlong *local_1f80;
  undefined8 local_1f78;
  longlong *local_1f70;
  undefined8 local_1f68;
  longlong *local_1f60;
  undefined8 local_1f58;
  longlong *local_1f50;
  undefined1 local_1f41;
  undefined8 local_1f40;
  longlong *local_1f38;
  undefined8 local_1f28;
  longlong *local_1f20;
  undefined8 local_1f18;
  longlong *local_1f10;
  undefined1 local_1f01;
  undefined8 local_1f00;
  longlong *local_1ef8;
  undefined8 local_1ee8;
  longlong *local_1ee0;
  undefined8 local_1ed8;
  longlong *local_1ed0;
  undefined8 local_1ec8;
  longlong *local_1ec0;
  undefined8 local_1eb8;
  longlong *local_1eb0;
  undefined1 local_1ea1;
  undefined8 local_1ea0;
  longlong *local_1e98;
  undefined1 local_1e81;
  undefined8 local_1e80;
  longlong *local_1e78;
  undefined8 local_1e68;
  longlong *local_1e60;
  undefined8 local_1e58;
  longlong *local_1e50;
  undefined8 local_1e48;
  longlong *local_1e40;
  undefined8 local_1e38;
  longlong *local_1e30;
  code *local_1e28;
  longlong *local_1e20;
  undefined1 local_1e18 [88];
  undefined1 local_1dc0 [88];
  undefined1 local_1d68 [88];
  undefined1 local_1d10 [88];
  undefined1 local_1cb8 [88];
  undefined8 local_1c60;
  longlong *local_1c58;
  undefined8 local_1ab8;
  undefined1 local_1ab0;
  undefined1 local_1aa8 [16];
  undefined1 local_1a98 [440];
  undefined1 local_18e0 [424];
  undefined8 local_1738;
  longlong *local_1730;
  undefined1 local_1728 [680];
  undefined1 local_1480 [8];
  longlong *local_1478;
  undefined8 local_12a8;
  longlong *local_12a0;
  undefined1 local_1288 [192];
  undefined1 local_11c8 [440];
  undefined1 local_1010 [472];
  undefined8 local_e38;
  longlong *local_e30;
  undefined1 local_d68 [440];
  undefined1 local_bb0 [440];
  undefined1 local_9f8 [192];
  code *local_938;
  undefined8 uStack_930;
  undefined1 *local_688;
  undefined4 local_680;
  undefined4 uStack_67c;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined1 local_490 [192];
  undefined8 local_3d0;
  longlong *local_3c8;
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_21a8;
  *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x1b8);
  local_2170 = param_2 + 0x1c8;
  FUN_145aafc16(param_1 + 0x308);
  FUN_145ab0522(&local_218);
  local_938 = FUN_1401e2a2e;
  uStack_930 = (longlong *)((ulonglong)uStack_930._4_4_ << 0x20);
  FUN_145ab05d2(&local_218,param_1);
  FUN_1407679b0(&local_3d0);
  FUN_145aafb3e(local_490);
  uVar9 = FUN_145aaf900(local_490);
  FUN_145aafd54(&local_688);
  FUN_140a53a96(&local_938);
  local_2188 = &local_1e81;
  FUN_140a53d66(&local_1e80,&DAT_149efe19f,".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0x75);
  if (local_1e78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e78 + 1) = (int)local_1e78[1] + 1;
    UNLOCK();
  }
  plVar12 = *(longlong **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x388) = local_1e80;
  *(longlong **)(param_1 + 0x390) = local_1e78;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_140a50bf4(&local_1e80,&local_1e68,&local_938);
  plVar14 = local_4a8;
  plVar12 = local_1e60;
  if (local_1e60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e60 + 1) = (int)local_1e60[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1e60 + 1) = (int)local_1e60[1] + 1;
    UNLOCK();
  }
  local_4b0 = local_1e68;
  local_4a8 = local_1e60;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_2188 = &local_1ea1;
  FUN_145ab0738(&local_1ea0,"SWindowTitleBarArea",
                ".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0x73);
  if (local_1e98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e98 + 1) = (int)local_1e98[1] + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x378) = local_1ea0;
  *(longlong **)(param_1 + 0x380) = local_1e98;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_145aafe02(&local_1ea0,&local_1e58,&local_688);
  local_1e48 = local_1e58;
  local_1e40 = local_1e50;
  if (local_1e50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e50 + 1) = (int)local_1e50[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_145aaf878(uVar9,&local_1e48);
  local_2178 = FUN_145aaf822(&local_3d0,uVar9);
  FUN_145aafb3e(local_9f8);
  FUN_140a504fe(local_bb0);
  FUN_140a4fdf2(local_1cb8,100);
  FUN_145ab037e(local_d68);
  local_2188 = &local_1f01;
  FUN_145ab11ce(&local_1f00,"SCanvas",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0x7f);
  if (local_1ef8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ef8 + 1) = (int)local_1ef8[1] + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x328) = local_1f00;
  *(longlong **)(param_1 + 0x330) = local_1ef8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_145ab01e4(&local_1f00,&local_1ee8,local_d68);
  local_1ed8 = local_1ee8;
  local_1ed0 = local_1ee0;
  if (local_1ee0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ee0 + 1) = (int)local_1ee0[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140a4fd40(local_1cb8,&local_1ed8);
  uVar9 = FUN_140a5058c(local_bb0,uVar9);
  FUN_140a4fdf2(local_1d10,200);
  FUN_140a53a96(local_1010);
  plVar4 = local_e30;
  local_e38 = *(undefined8 *)(param_2 + 0x1a8);
  plVar14 = *(longlong **)(param_2 + 0x1b0);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar14 + 8) = *(int *)((longlong)plVar14 + 8) + 1;
    UNLOCK();
  }
  if (local_e30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_e30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      puVar6 = (undefined8 *)*local_e30;
      local_e30 = plVar14;
      (*(code *)*puVar6)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar14 = local_e30;
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar14 = local_e30;
      }
    }
  }
  local_e30 = plVar14;
  local_2188 = &local_1f41;
  FUN_140a53d66(&local_1f40,&DAT_149efe19f,".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0x84);
  if (local_1f38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f38 + 1) = (int)local_1f38[1] + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x348) = local_1f40;
  *(longlong **)(param_1 + 0x350) = local_1f38;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_140a50bf4(&local_1f40,&local_1f28,local_1010);
  local_1f18 = local_1f28;
  local_1f10 = local_1f20;
  if (local_1f20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f20 + 1) = (int)local_1f20[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(local_1d10,&local_1f18);
  uVar9 = FUN_140a5058c(uVar9,uVar10);
  FUN_140a4fdf2(local_1d68,300);
  FUN_1407679b0(local_11c8);
  FUN_145aafb3e(local_1288);
  uVar10 = FUN_145aaf900(local_1288);
  FUN_145aafd54(local_1480);
  FUN_140a53a96(local_1728);
  local_2188 = &local_1fb1;
  FUN_140a53d66(&local_1fb0,&DAT_149efe19f,".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0x93);
  if (local_1fa8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1fa8 + 1) = (int)local_1fa8[1] + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x398) = local_1fb0;
  *(longlong **)(param_1 + 0x3a0) = local_1fa8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  FUN_140a50bf4(&local_1fb0,&local_1f98,local_1728);
  plVar4 = local_12a0;
  plVar14 = local_1f90;
  if (local_1f90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f90 + 1) = (int)local_1f90[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1f90 + 1) = (int)local_1f90[1] + 1;
    UNLOCK();
  }
  local_12a8 = local_1f98;
  local_12a0 = local_1f90;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_2188 = &local_1fd1;
  FUN_145ab0738(&local_1fd0,"SWindowTitleBarArea",
                ".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0x91);
  if (local_1fc8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1fc8 + 1) = (int)local_1fc8[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = local_1fd0;
  *(longlong **)(param_1 + 0x370) = local_1fc8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_145aafe02(&local_1fd0,&local_1f88,local_1480);
  local_1f78 = local_1f88;
  local_1f70 = local_1f80;
  if (local_1f80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f80 + 1) = (int)local_1f80[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_145aaf878(uVar10,&local_1f78);
  uVar10 = FUN_145aaf822(local_11c8,uVar10);
  local_2188 = &local_1ff1;
  FUN_14076837c(local_1ff0,"SVerticalBox",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0x8c);
  FUN_14076784c(local_1ff0,&local_1f68,uVar10);
  local_1f58 = local_1f68;
  local_1f50 = local_1f60;
  if (local_1f60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f60 + 1) = (int)local_1f60[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(local_1d68,&local_1f58);
  uVar9 = FUN_140a5058c(uVar9,uVar10);
  FUN_140a4fdf2(local_1dc0,400);
  FUN_140763df2(local_18e0);
  FUN_140763e9c(local_1a98);
  local_2188 = &local_2041;
  FUN_140764680(&local_2040,"STooltipPresenter",
                ".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0x9c);
  if (local_2038 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2038 + 1) = (int)local_2038[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x358) = local_2040;
  *(longlong **)(param_1 + 0x360) = local_2038;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_140763cd8(&local_2040,&local_2028,local_1a98);
  plVar5 = local_1730;
  plVar4 = local_2020;
  if (local_2020 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2020 + 1) = (int)local_2020[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_2020 + 1) = (int)local_2020[1] + 1;
    UNLOCK();
  }
  local_1738 = local_2028;
  local_1730 = local_2020;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_2188 = &local_2061;
  FUN_14076492c(local_2060,"SPopup",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0x9a);
  FUN_140763d70(local_2060,&local_2018,local_18e0);
  local_2008 = local_2018;
  local_2000 = local_2010;
  if (local_2010 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2010 + 1) = (int)local_2010[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(local_1dc0,&local_2008);
  uVar9 = FUN_140a5058c(uVar9,uVar10);
  FUN_140a4fdf2(local_1e18,500);
  FUN_145ab03f8(&local_1c60);
  local_20a8 = *(undefined8 *)(param_2 + 0x1b8);
  local_20a0 = *(undefined1 *)(param_2 + 0x1c0);
  local_2098 = 0;
  local_2090 = 0;
  FUN_145aafc16(&local_2098,local_2170);
  local_1ab0 = local_20a0;
  local_1ab8 = local_20a8;
  FUN_144a450dc(local_1aa8,&local_2098);
  FUN_1449db362(&local_2098);
  FUN_145ab0b18(&local_1c60);
  FUN_145ab0bfa(&local_20c0,&local_20c1);
  if (local_20b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20b8 + 1) = (int)local_20b8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x338) = local_20c0;
  *(longlong **)(param_1 + 0x340) = local_20b8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_145ab0484(&local_20c0,&local_2088,&local_1c60);
  local_2078 = local_2088;
  local_2070 = local_2080;
  if (local_2080 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2080 + 1) = (int)local_2080[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fd40(local_1e18,&local_2078);
  uVar9 = FUN_140a5058c(uVar9,uVar10);
  local_2188 = &local_20e1;
  FUN_140a536a8(&local_20e0,"SOverlay",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0x7b)
  ;
  if (local_20d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20d8 + 1) = (int)local_20d8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3a8) = local_20e0;
  *(longlong **)(param_1 + 0x3b0) = local_20d8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_140a4ff16(&local_20e0,&local_1ec8,uVar9);
  local_1eb8 = local_1ec8;
  local_1eb0 = local_1ec0;
  if (local_1ec0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ec0 + 1) = (int)local_1ec0[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_145aaf878(local_9f8,&local_1eb8);
  uVar9 = FUN_145aaf822(local_2178,uVar9);
  local_2188 = &local_2101;
  FUN_14076837c(&local_2100,"SVerticalBox",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0x6e);
  if (local_20f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20f8 + 1) = (int)local_20f8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 800);
  *(undefined8 *)(param_1 + 0x318) = local_2100;
  *(longlong **)(param_1 + 800) = local_20f8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_14076784c(&local_2100,&local_1e38,uVar9);
  plVar2 = local_50;
  plVar5 = local_1e30;
  if (local_1e30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e30 + 1) = (int)local_1e30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1e30 + 1) = (int)local_1e30[1] + 1;
    UNLOCK();
  }
  local_58 = local_1e38;
  local_50 = local_1e30;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_2188 = &local_2121;
  FUN_145ab0e62(local_2120,"SDPIScaler",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0x6a
               );
  FUN_145aaff4c(local_2120,&local_1e28,&local_218);
  if (local_2118 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2118 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2118)(local_2118);
      LOCK();
      piVar1 = (int *)((longlong)local_2118 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2118 + 0x10))(local_2118);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1e30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1e30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1e30)(local_1e30);
      LOCK();
      piVar1 = (int *)((longlong)local_1e30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e30 + 0x10))(local_1e30);
      }
    }
  }
  if (local_20f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20f8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_20f8)(local_20f8);
      LOCK();
      piVar1 = (int *)((longlong)local_20f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20f8 + 0x10))(local_20f8);
      }
    }
  }
  plVar5 = local_1eb0;
  if (local_1eb0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1eb0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1eb0)(local_1eb0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1ec0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1ec0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1ec0)(local_1ec0);
      LOCK();
      piVar1 = (int *)((longlong)local_1ec0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ec0 + 0x10))(local_1ec0);
      }
    }
  }
  if (local_20d8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20d8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_20d8)(local_20d8);
      LOCK();
      piVar1 = (int *)((longlong)local_20d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20d8 + 0x10))(local_20d8);
      }
    }
  }
  plVar5 = local_2070;
  if (local_2070 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2070 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2070)(local_2070);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_2080 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2080 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_2080)(local_2080);
      LOCK();
      piVar1 = (int *)((longlong)local_2080 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2080 + 0x10))(local_2080);
      }
    }
  }
  if (local_20b8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20b8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_20b8)(local_20b8);
      LOCK();
      piVar1 = (int *)((longlong)local_20b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20b8 + 0x10))(local_20b8);
      }
    }
  }
  FUN_1449db362(local_1aa8);
  FUN_140a4ff8c(&local_1c60);
  FUN_1415b5e50(local_1e18);
  plVar5 = local_2000;
  if (local_2000 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2000 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2000)(local_2000);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_2010 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2010 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_2010)(local_2010);
      LOCK();
      piVar1 = (int *)((longlong)local_2010 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2010 + 0x10))(local_2010);
      }
    }
  }
  if (local_2058 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2058 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_2058)(local_2058);
      LOCK();
      piVar1 = (int *)((longlong)local_2058 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2058 + 0x10))(local_2058);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_2020 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2020 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2020)(local_2020);
      LOCK();
      piVar1 = (int *)((longlong)local_2020 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2020 + 0x10))(local_2020);
      }
    }
  }
  if (local_2038 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2038 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2038)(local_2038);
      LOCK();
      piVar1 = (int *)((longlong)local_2038 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2038 + 0x10))(local_2038);
      }
    }
  }
  FUN_141492606(local_1a98);
  FUN_1414925c4(local_18e0);
  FUN_1415b5e50(local_1dc0);
  plVar4 = local_1f50;
  if (local_1f50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1f50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1f50)(local_1f50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_1f60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1f60)(local_1f60);
      LOCK();
      piVar1 = (int *)((longlong)local_1f60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f60 + 0x10))(local_1f60);
      }
    }
  }
  if (local_1fe8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1fe8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1fe8)(local_1fe8);
      LOCK();
      piVar1 = (int *)((longlong)local_1fe8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1fe8 + 0x10))(local_1fe8);
      }
    }
  }
  plVar4 = local_1f70;
  if (local_1f70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1f70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1f70)(local_1f70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_1f80 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f80 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1f80)(local_1f80);
      LOCK();
      piVar1 = (int *)((longlong)local_1f80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f80 + 0x10))(local_1f80);
      }
    }
  }
  if (local_1fc8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1fc8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1fc8)(local_1fc8);
      LOCK();
      piVar1 = (int *)((longlong)local_1fc8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1fc8 + 0x10))(local_1fc8);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_1f90 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1f90 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1f90)(local_1f90);
      LOCK();
      piVar1 = (int *)((longlong)local_1f90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f90 + 0x10))(local_1f90);
      }
    }
  }
  if (local_1fa8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1fa8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1fa8)(local_1fa8);
      LOCK();
      piVar1 = (int *)((longlong)local_1fa8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1fa8 + 0x10))(local_1fa8);
      }
    }
  }
  FUN_140a5660c(local_1728);
  FUN_145aafcfa(local_1480);
  FUN_140767f30(local_1288);
  FUN_14149255e(local_11c8);
  FUN_1415b5e50(local_1d68);
  plVar14 = local_1f10;
  if (local_1f10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1f10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1f10)(local_1f10);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_1f20 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1f20 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1f20)(local_1f20);
      LOCK();
      piVar1 = (int *)((longlong)local_1f20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f20 + 0x10))(local_1f20);
      }
    }
  }
  if (local_1f38 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1f38 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1f38)(local_1f38);
      LOCK();
      piVar1 = (int *)((longlong)local_1f38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f38 + 0x10))(local_1f38);
      }
    }
  }
  FUN_140a5660c(local_1010);
  FUN_1415b5e50(local_1d10);
  plVar14 = local_1ed0;
  if (local_1ed0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1ed0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1ed0)(local_1ed0);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_1ee0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1ee0 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1ee0)(local_1ee0);
      LOCK();
      piVar1 = (int *)((longlong)local_1ee0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ee0 + 0x10))(local_1ee0);
      }
    }
  }
  if (local_1ef8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1ef8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1ef8)(local_1ef8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ef8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ef8 + 0x10))(local_1ef8);
      }
    }
  }
  FUN_145aafdc8(local_d68);
  FUN_1415b5e50(local_1cb8);
  FUN_1415b5e16(local_bb0);
  FUN_140767f30(local_9f8);
  plVar14 = local_1e40;
  if (local_1e40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1e40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_1e40)(local_1e40);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_1e50 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1e50 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1e50)(local_1e50);
      LOCK();
      piVar1 = (int *)((longlong)local_1e50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e50 + 0x10))(local_1e50);
      }
    }
  }
  if (local_1e98 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1e98 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1e98)(local_1e98);
      LOCK();
      piVar1 = (int *)((longlong)local_1e98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e98 + 0x10))(local_1e98);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_1e60 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1e60 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1e60)(local_1e60);
      LOCK();
      piVar1 = (int *)((longlong)local_1e60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e60 + 0x10))(local_1e60);
      }
    }
  }
  if (local_1e78 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1e78 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1e78)(local_1e78);
      LOCK();
      piVar1 = (int *)((longlong)local_1e78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e78 + 0x10))(local_1e78);
      }
    }
  }
  FUN_140a5660c(&local_938);
  FUN_145aafcfa(&local_688);
  FUN_140767f30(local_490);
  FUN_14149255e(&local_3d0);
  FUN_145aafefe(&local_218);
  local_938 = local_1e28;
  uStack_930 = local_1e20;
  if (local_1e20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e20 + 1) = (int)local_1e20[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_938);
  plVar12 = uStack_930;
  if (uStack_930 != (longlong *)0x0) {
    LOCK();
    plVar14 = uStack_930 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*uStack_930)(uStack_930);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  lVar13 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar11 = FUN_1413f862e();
    if (((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) &&
       (plVar12 = *(longlong **)(lVar13 + 0x1368), plVar12 != (longlong *)0x0)) {
      iVar8 = (int)plVar12[1];
      do {
        if (iVar8 == 0) goto LAB_145aaeb76;
        LOCK();
        iVar7 = (int)plVar12[1];
        bVar15 = iVar8 == iVar7;
        if (bVar15) {
          *(int *)(plVar12 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar15);
      lVar13 = *(longlong *)(lVar13 + 0x1360);
      if (lVar13 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x368);
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        local_2138 = lVar13;
        local_2130 = plVar12;
        FUN_145aafe78(uVar9);
        uVar9 = *(undefined8 *)(param_1 + 0x378);
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        local_2148 = lVar13;
        local_2140 = plVar12;
        FUN_145aafe78(uVar9);
      }
      LOCK();
      plVar14 = plVar12 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
LAB_145aaeb76:
  FUN_1407679b0(local_1010);
  FUN_145aafb3e(local_1728);
  uVar9 = FUN_145aaf900(local_1728);
  FUN_140a53a96(&local_938);
  local_688 = &LAB_147d2823a;
  local_680 = 0;
  FUN_145ab0682(&local_938,param_1);
  local_2188 = local_bb0;
  FUN_140a53d66(&local_688,&DAT_149efe19f,".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0xbd);
  FUN_140a50bf4(&local_688,&local_3d0,&local_938);
  local_1c60 = local_3d0;
  local_1c58 = local_3c8;
  if (local_3c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3c8 + 1) = (int)local_3c8[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_145aaf878(uVar9,&local_1c60);
  uVar9 = FUN_145aaf822(local_1010,uVar9);
  local_2188 = local_d68;
  FUN_14076837c(local_1480,"SVerticalBox",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",
                0xb9);
  FUN_14076784c(local_1480,&local_218,uVar9);
  plVar12 = local_210;
  if (local_210 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3d0) = local_218;
    plVar14 = *(longlong **)(param_1 + 0x3d8);
    if (plVar14 == (longlong *)0x0) goto LAB_145aaecd1;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
LAB_145aaf2b7:
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_145aaecd1;
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    UNLOCK();
    plVar12 = plVar14;
  }
  else {
    LOCK();
    *(int *)(local_210 + 1) = (int)local_210[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x3d0) = local_218;
    plVar14 = *(longlong **)(param_1 + 0x3d8);
    if (local_210 != plVar14) {
      *(longlong **)(param_1 + 0x3d8) = local_210;
      if (plVar14 == (longlong *)0x0) goto LAB_145aaecd1;
      goto LAB_145aaf2b7;
    }
    LOCK();
    plVar14 = local_210 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 != 0) goto LAB_145aaecd1;
    (**(code **)*local_210)(local_210);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    UNLOCK();
  }
  if (iVar8 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
LAB_145aaecd1:
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_210 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  if (local_1478 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1478 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1478)(local_1478);
      LOCK();
      piVar1 = (int *)((longlong)local_1478 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1478 + 0x10))(local_1478);
      }
    }
  }
  plVar12 = local_1c58;
  if (local_1c58 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1c58 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1c58)(local_1c58);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_3c8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3c8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_3c8)(local_3c8);
      LOCK();
      piVar1 = (int *)((longlong)local_3c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3c8 + 0x10))(local_3c8);
      }
    }
  }
  plVar12 = (longlong *)CONCAT44(uStack_67c,local_680);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_140a5660c(&local_938);
  FUN_140767f30(local_1728);
  FUN_14149255e(local_1010);
  lVar13 = *(longlong *)(param_1 + 0x368);
  local_938 = FUN_147d2824a;
  uStack_930 = (longlong *)((ulonglong)uStack_930 & 0xffffffff00000000);
  FUN_145ab096c(local_2158,param_1,&local_938);
  FUN_14009d848(lVar13 + 0x240,local_2158);
  FUN_1449db362(local_2158);
  lVar13 = *(longlong *)(param_1 + 0x378);
  local_938 = FUN_147d2824a;
  uStack_930 = (longlong *)((ulonglong)uStack_930 & 0xffffffff00000000);
  FUN_145ab096c(local_2168,param_1,&local_938);
  FUN_14009d848(lVar13 + 0x240,local_2168);
  FUN_1449db362(local_2168);
  local_938 = (code *)0x0;
  uStack_930 = (longlong *)0x0;
  local_2180 = 0;
  local_2188 = (undefined1 *)((ulonglong)local_2188 & 0xffffffffffffff00);
  (**(code **)(*(longlong *)(param_1 + 0x268) + 0x78))(param_1 + 0x268,&local_938,0,0);
  plVar12 = uStack_930;
  if (uStack_930 != (longlong *)0x0) {
    LOCK();
    plVar14 = uStack_930 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*uStack_930)(uStack_930);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)FUN_145a50fcc();
  lVar13 = plVar12[0x22];
  if (lVar13 == 0) {
    (**(code **)(*plVar12 + 1000))(plVar12);
    lVar13 = plVar12[0x22];
  }
  *(undefined1 *)(param_1 + 0x3e4) = *(undefined1 *)(lVar13 + 0xf9);
  if (local_1e20 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1e20 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1e20)(local_1e20);
      LOCK();
      piVar1 = (int *)((longlong)local_1e20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1e20 + 0x10))(local_1e20);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_21a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaf822 FUN_145aaf822 body=85 status=ok
// SIG undefined FUN_145aaf822(void)

longlong FUN_145aaf822(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar1 + 1U) {
    FUN_145aaf96e(param_1 + 0x1a8,iVar1);
  }
  FUN_145aafa02((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0x1a8),param_2);
  return param_1;
}



// FUNCTION 145aaf878 FUN_145aaf878 body=136 status=ok
// SIG undefined FUN_145aaf878(void)

longlong FUN_145aaf878(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000145aaf8da;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000145aaf8da:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 145aaf900 FUN_145aaf900 body=108 status=ok
// SIG undefined FUN_145aaf900(void)

longlong FUN_145aaf900(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a529f8(local_50);
  if (local_50 != (undefined1 *)(param_1 + 0x50)) {
    FUN_140a52676((undefined1 *)(param_1 + 0x50),local_50);
  }
  FUN_1449db362(local_28);
  FUN_1449db362(local_40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aaf96e FUN_145aaf96e body=147 status=ok
// SIG undefined FUN_145aaf96e(void)

void FUN_145aaf96e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145aafa02 FUN_145aafa02 body=194 status=ok
// SIG undefined FUN_145aafa02(void)

longlong FUN_145aafa02(longlong param_1,longlong param_2)

{
  FUN_145aafac4();
  FUN_140a5250a(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_2 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0xb8) = 0;
  return param_1;
}



// FUNCTION 145aafac4 FUN_145aafac4 body=122 status=ok
// SIG undefined FUN_145aafac4(void)

void FUN_145aafac4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_2 + 7) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x44);
  *(char *)((longlong)param_1 + 0x44) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x4c);
  *(char *)((longlong)param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  }
  return;
}



// FUNCTION 145aafb3e FUN_145aafb3e body=215 status=ok
// SIG undefined FUN_145aafb3e(void)

undefined8 * FUN_145aafb3e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 8) = 1;
  *(undefined1 **)((longlong)puVar3 + 0x44) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
  *puVar3 = &PTR_FUN_149ef1b48;
  puVar3[4] = &PTR_LAB_149ef1b50;
  *param_1 = puVar3;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145aafc16 FUN_145aafc16 body=124 status=ok
// SIG undefined FUN_145aafc16(void)

void FUN_145aafc16(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aafc94 FUN_145aafc94 body=101 status=ok
// SIG undefined FUN_145aafc94(void)

void FUN_145aafc94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9a10;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a8e99a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 145aafcfa FUN_145aafcfa body=90 status=ok
// SIG undefined FUN_145aafcfa(void)

void FUN_145aafcfa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1e8);
  plVar3 = *(longlong **)(param_1 + 0x1e0);
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
  FUN_1449db362(param_1 + 0x1c8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145aafd54 FUN_145aafd54 body=115 status=ok
// SIG undefined FUN_145aafd54(void)

longlong FUN_145aafd54(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1e0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  return param_1;
}



// FUNCTION 145aafdc8 FUN_145aafdc8 body=58 status=ok
// SIG undefined FUN_145aafdc8(void)

void FUN_145aafdc8(longlong param_1)

{
  FUN_145ab0355(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145aafe02 FUN_145aafe02 body=117 status=ok
// SIG undefined FUN_145aafe02(void)

longlong * FUN_145aafe02(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ab1804(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145aafe78 FUN_145aafe78 body=134 status=ok
// SIG undefined FUN_145aafe78(void)

void FUN_145aafe78(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  *(longlong *)(param_1 + 0x238) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145aafefa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145aafefe FUN_145aafefe body=78 status=ok
// SIG undefined FUN_145aafefe(void)

void FUN_145aafefe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1c8);
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
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 145aaff4c FUN_145aaff4c body=117 status=ok
// SIG undefined FUN_145aaff4c(void)

longlong * FUN_145aaff4c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145aaffc2(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145aaffc2 FUN_145aaffc2 body=196 status=ok
// SIG undefined FUN_145aaffc2(void)

void FUN_145aaffc2(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined4 *)(param_2 + 0x1a8);
  local_44 = *(undefined1 *)(param_2 + 0x1ac);
  local_40 = 0;
  local_38 = 0;
  FUN_140a52b3c(&local_40,param_2 + 0x1b0);
  local_2c = 0x3f800000;
  FUN_140a5d1dc(param_1 + 0x230,param_1,&local_48);
  FUN_145ab0088(param_1 + 0x230,param_1,0);
  FUN_1449db362(&local_40);
  FUN_140a58896(param_1 + 0x1e0,param_2 + 0x1c0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab0088 FUN_145ab0088 body=14 status=ok
// SIG undefined FUN_145ab0088(void)

void FUN_145ab0088(undefined8 param_1,undefined8 param_2)

{
  FUN_145ab0096(param_2,param_1);
  return;
}



// FUNCTION 145ab0096 FUN_145ab0096 body=332 status=ok
// SIG undefined FUN_145ab0096(void)

void FUN_145ab0096(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [38];
  undefined1 local_32;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1[0x31] & 1) != 0) && (lVar1 = **(longlong **)(param_1 + 0x1b0), lVar1 != 0)) {
    lVar8 = lVar1 + 8;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0x88);
    }
    if ((longlong)*(int *)(lVar1 + 0x90) != 0) {
      uVar5 = 0;
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar8 + uVar5) == param_2) {
          if ((int)(~uVar5 >> 5) != 0) {
            lVar9 = (lVar9 >> 0x20) * 0x20;
            puVar2 = *(undefined8 **)(lVar8 + 8 + lVar9);
            puVar7 = &local_32;
            (**(code **)*puVar2)(puVar2,puVar7,param_1);
            if ((local_31 == '\x01') && ((param_1[0x31] & 4) != 0)) {
              lVar8 = lVar8 + lVar9;
              lVar9 = *(longlong *)(lVar8 + 0x10);
              if (lVar9 == 0) {
                uVar5 = CONCAT71((int7)((ulonglong)puVar7 >> 8),local_32);
              }
              else {
                if ((*(int *)(lVar9 + 0x48) != 0) &&
                   (plVar6 = *(longlong **)(lVar9 + 0x40), plVar6 != (longlong *)0x0)) {
                  puVar7 = param_1;
                  (**(code **)(*plVar6 + 0x60))(plVar6,param_1);
                  lVar9 = *(longlong *)(lVar8 + 0x10);
                }
                if (((*(int *)(lVar9 + 0x38) == 0) ||
                    (*(longlong **)(lVar9 + 0x30) == (longlong *)0x0)) ||
                   (cVar3 = (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x30))(), cVar3 == '\0')) {
                  uVar5 = CONCAT71((int7)((ulonglong)puVar7 >> 8),*(undefined1 *)(lVar9 + 0x28));
                }
                else {
                  if (*(int *)(lVar9 + 0x38) == 0) {
                    plVar6 = (longlong *)0x0;
                  }
                  else {
                    plVar6 = *(longlong **)(lVar9 + 0x30);
                  }
                  uVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,param_1);
                  uVar5 = (ulonglong)uVar4;
                }
              }
              FUN_140163244(param_1,CONCAT71((int7)(uVar5 >> 8),
                                             (byte)uVar5 | *(byte *)(lVar1 + 0x98)));
              *(undefined1 *)(lVar1 + 0x98) = 0;
            }
          }
          break;
        }
        lVar9 = lVar9 + 0x100000000;
        uVar5 = uVar5 + 0x20;
      } while ((longlong)*(int *)(lVar1 + 0x90) * 0x20 != uVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ab01e4 FUN_145ab01e4 body=117 status=ok
// SIG undefined FUN_145ab01e4(void)

longlong * FUN_145ab01e4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_145ab025a(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ab025a FUN_145ab025a body=115 status=ok
// SIG undefined FUN_145ab025a(void)

void FUN_145ab025a(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_10 = *(undefined4 *)(param_2 + 0x1b0);
  local_c = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_145ab02ce(param_1 + 0x1e0,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab02ce FUN_145ab02ce body=135 status=ok
// SIG undefined FUN_145ab02ce(void)

void FUN_145ab02ce(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146af84c0(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0x78;
    do {
      FUN_145717460(param_1,lVar4);
      lVar4 = lVar4 + 0x78;
      lVar5 = lVar5 + -0x78;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_145ab0355(lVar4,uVar3);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ab0355 FUN_145ab0355 body=40 status=ok
// SIG undefined FUN_145ab0355(void)

void FUN_145ab0355(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457173d0(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 145ab037e FUN_145ab037e body=120 status=ok
// SIG undefined FUN_145ab037e(void)

longlong FUN_145ab037e(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab03f8 FUN_145ab03f8 body=138 status=ok
// SIG undefined FUN_145ab03f8(void)

longlong FUN_145ab03f8(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23a);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab0484 FUN_145ab0484 body=157 status=ok
// SIG undefined FUN_145ab0484(void)

longlong * FUN_145ab0484(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x1e8) = *(undefined1 *)(param_3 + 0x1b0);
  *(undefined8 *)(lVar1 + 0x1e0) = *(undefined8 *)(param_3 + 0x1a8);
  FUN_145aafc16(lVar1 + 0x1f0,param_3 + 0x1b8);
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  else {
    bVar4 = 0x20;
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145ab0522 FUN_145ab0522 body=174 status=ok
// SIG undefined FUN_145ab0522(void)

longlong FUN_145ab0522(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1c8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab05d2 FUN_145ab05d2 body=175 status=ok
// SIG undefined FUN_145ab05d2(void)

longlong FUN_145ab05d2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_145ab14ac(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x1ac) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x1a8) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x1b0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab0682 FUN_145ab0682 body=181 status=ok
// SIG undefined FUN_145ab0682(void)

longlong FUN_145ab0682(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_145ab1658(local_48,param_2,&local_38);
  local_38 = CONCAT35(local_38._5_3_,0x1bf800000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a58922(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x204) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x200) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x208,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab0738 FUN_145ab0738 body=401 status=ok
// SIG undefined FUN_145ab0738(void)

longlong *
FUN_145ab0738(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x2a8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a55ec30;
  plVar1 = plVar4 + 2;
  FUN_145ab4f42(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_145ab08ca(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ab07ee;
    param_1[1] = 0;
LAB_145ab085b:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145ab07ee;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_145ab07ee;
      goto LAB_145ab085b;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ab07ee;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145ab07ee:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x298;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab08ca FUN_145ab08ca body=162 status=ok
// SIG undefined FUN_145ab08ca(void)

void FUN_145ab08ca(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ab0909;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ab0909;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ab0909:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ab0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ab096c FUN_145ab096c body=428 status=ok
// SIG undefined FUN_145ab096c(void)

longlong * FUN_145ab096c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145ab0a4c:
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
    *puVar5 = &PTR_FUN_14aa99410;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ab0a4c;
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
    *puVar5 = &PTR_FUN_14aa99410;
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



// FUNCTION 145ab0b18 FUN_145ab0b18 body=225 status=ok
// SIG undefined FUN_145ab0b18(void)

longlong FUN_145ab0b18(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14aa99380;
  plVar5[2] = (longlong)&PTR_FUN_14aa98190;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x198),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x198);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 145ab0bfa FUN_145ab0bfa body=356 status=ok
// SIG undefined FUN_145ab0bfa(void)

longlong * FUN_145ab0bfa(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x210,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aa99360;
  plVar4 = plVar3 + 2;
  FUN_145ab0d60(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_145ab0dc0(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ab0c89;
    param_1[1] = 0;
LAB_145ab0cf8:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145ab0c89;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145ab0c89;
      goto LAB_145ab0cf8;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ab0c89;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145ab0c89:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x200;
  FUN_140a52e78(*param_1,"SDebugCanvas",".\\Runtime/Engine/Private/Slate/SGameLayerManager.cpp",0xa1
               );
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab0d60 FUN_145ab0d60 body=95 status=ok
// SIG undefined FUN_145ab0d60(void)

undefined8 * FUN_145ab0d60(undefined8 *param_1)

{
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_14aa95080;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 145ab0dc0 FUN_145ab0dc0 body=162 status=ok
// SIG undefined FUN_145ab0dc0(void)

void FUN_145ab0dc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145ab0dff;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145ab0dff;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ab0dff:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ab0e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ab0e62 FUN_145ab0e62 body=401 status=ok
// SIG undefined FUN_145ab0e62(void)

longlong *
FUN_145ab0e62(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x248,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a356530;
  plVar1 = plVar4 + 2;
  FUN_145ab0ff4(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_145ab107c(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145ab0f18;
    param_1[1] = 0;
LAB_145ab0f85:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145ab0f18;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_145ab0f18;
      goto LAB_145ab0f85;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145ab0f18;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145ab0f18:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x238;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ab0ff4 FUN_145ab0ff4 body=135 status=ok
// SIG undefined FUN_145ab0ff4(void)

undefined8 * FUN_145ab0ff4(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f149b0;
  FUN_145ab111e(param_1 + 0x3c,param_1);
  param_1[0x3c] = &PTR_LAB_149f17140;
  param_1[0x3f] = &PTR_FUN_149f17188;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  FUN_140a5808e(param_1 + 0x46,param_1);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 1;
  return param_1;
}


