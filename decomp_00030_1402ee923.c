// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402ee923 FUN_1402ee923 body=118 status=ok
// SIG undefined FUN_1402ee923(void)

undefined8 FUN_1402ee923(longlong param_1,char param_2)

{
  ushort uVar1;
  
  if (((byte)(param_2 - 1U) < 2) && (DAT_14ca84f63 != '\x01')) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x30);
  if ((((uVar1 & 1) != 0) && (3 < (byte)(param_2 - 6U))) && (DAT_14ca84f10 == '\0')) {
    return 0;
  }
  if ((uVar1 & 0x60) != 0) {
    if (DAT_14ca85065 == '\0') {
      return 0;
    }
    if (DAT_14ca85065 == '\x01') {
      if (3 < (byte)(param_2 - 6U)) {
        return 0;
      }
      goto LAB_1402ee984;
    }
  }
  if (((char)uVar1 < '\0' && param_2 == '\x03') && (DAT_14ca84f5b != '\x01')) {
    return 0;
  }
LAB_1402ee984:
  if (((uVar1 >> 8 & 1) != 0) && (DAT_14ca8507c != '\x01')) {
    return 0;
  }
  return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
}



// FUNCTION 1402ee999 FUN_1402ee999 body=168 status=ok
// SIG undefined FUN_1402ee999(void)

longlong * FUN_1402ee999(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1447a84cc(param_1,param_2 + 2);
  FUN_1447a84cc(param_1,param_2 + 6);
  FUN_1447a84cc(param_1,param_2 + 10);
  FUN_1447a84cc(param_1,param_2 + 0xe);
  FUN_1447a84cc(param_1,param_2 + 0x12);
  FUN_1447a84cc(param_1,param_2 + 0x16);
  return param_1;
}



// FUNCTION 1402eea41 FUN_1402eea41 body=196 status=ok
// SIG undefined FUN_1402eea41(void)

void FUN_1402eea41(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  plVar1 = (longlong *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x74) < iVar5) {
    FUN_144893a1c(plVar1);
    iVar5 = *(int *)(param_1 + 0x40);
  }
  if (iVar5 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      lVar4 = FUN_144948f1d(*(undefined4 *)(lVar3 + lVar6));
      if (lVar4 == 0) {
        iVar2 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
          FUN_1447403be(plVar1,iVar2);
        }
        *(undefined1 *)(*plVar1 + (longlong)iVar2) = 0xff;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x48);
        iVar2 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
          FUN_1447403be(plVar1,iVar2);
        }
        *(undefined1 *)(*plVar1 + (longlong)iVar2) = *(undefined1 *)(lVar4 + 0x8a);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar5 * 4 != lVar6);
  }
  return;
}



// FUNCTION 1402eeb06 FUN_1402eeb06 body=157 status=ok
// SIG undefined FUN_1402eeb06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1402eeb06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9edc8) {
    FUN_144b3d300(&DAT_14ca9edc8);
    if (DAT_14ca9edc8 == -1) {
      DAT_14ca9ed98 = 0;
      DAT_14ca9eda0 = 0;
      DAT_14ca9ed78 = 0;
      _DAT_14ca9ed80 = 0;
      _DAT_14ca9eda4 = 0xffffffff00000080;
      DAT_14ca9edac = 0;
      DAT_14ca9edb8 = 0;
      DAT_14ca9edc0 = 0;
      atexit(FUN_1432348a7);
      _Init_thread_footer(&DAT_14ca9edc8);
    }
  }
  return &DAT_14ca9ed78;
}



// FUNCTION 1402eeba3 FUN_1402eeba3 body=348 status=ok
// SIG undefined FUN_1402eeba3(void)

void FUN_1402eeba3(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_108 [32];
  longlong local_e8;
  ulonglong uStack_e0;
  undefined2 local_d8;
  undefined **local_d0 [18];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 != 0) {
    lVar5 = *param_2 + (longlong)(int)param_2[1];
    if ((ulonglong)(longlong)(int)param_2[1] < 4) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar2 = -lVar2;
    do {
      lVar3 = lVar2;
      if (-5 < lVar3) goto LAB_1402eec09;
      uVar1 = *(uint *)(lVar5 + 1 + lVar3);
      bVar6 = *(char *)(lVar5 + lVar3) != 'D';
      uVar4 = (ulonglong)uVar1;
      if (!bVar6) {
        uVar4 = 0;
      }
      lVar2 = uVar4 + 5 + lVar3;
    } while (bVar6);
    lVar5 = lVar5 + lVar3 + 5;
    if ((lVar5 != 0) && (0 < (int)uVar1)) {
      FUN_144869430(local_d0);
      local_d0[0] = &PTR__purecall_149e30ac0;
      local_38 = 0;
      local_28 = '\0';
      local_40 = lVar5;
      local_30 = (ulonglong)uVar1;
      FUN_140996f94(local_d0,1);
      (*(code *)local_d0[0][0x1e])(local_d0,0);
      local_d0[0] = &PTR_FUN_149e447c0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_147124dc5(local_d0,&local_e8);
      FUN_147124e2e(&DAT_14c9ac120,&local_e8);
      FUN_147126694(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if (local_28 == '\x01') {
        FUN_1400020a8(local_40);
        local_40 = 0;
      }
      FUN_144a7fc42(local_d0);
    }
  }
LAB_1402eec09:
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402eed00 FUN_1402eed00 body=235 status=ok
// SIG undefined FUN_1402eed00(void)

undefined8 FUN_1402eed00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 local_110 [2];
  undefined4 auStack_100 [48];
  undefined8 uStack_40;
  undefined5 uStack_38;
  undefined3 local_33;
  undefined5 uStack_30;
  undefined8 uStack_2b;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(local_110,0,0xd0);
  lVar1 = 0x10;
  do {
    *(undefined8 *)((longlong)local_110 + lVar1) = 0;
    *(undefined8 *)((longlong)local_110 + lVar1 + 8) = 0;
    *(undefined4 *)((longlong)auStack_100 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd0);
  uStack_30 = 0;
  uStack_2b = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_33 = 0;
  lVar1 = param_2 + 0xa8;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  local_118[0] = 1;
  FUN_1406bf9cf(local_110,lVar1,*(undefined4 *)(param_1 + 0x214),5);
  uVar2 = FUN_1406bfa6a(param_1 + 0x238,local_110);
  lVar1 = 0xc0;
  do {
    if (*(longlong *)(local_118 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402eedf4 FUN_1402eedf4 body=212 status=ok
// SIG undefined FUN_1402eedf4(void)

void FUN_1402eedf4(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(byte *)(param_2 + 0x28) & 1) != 0) && (0 < *(int *)(param_1 + 8))) &&
     (*(int *)(param_1 + 400) != 0)) {
    lVar2 = FUN_144a7eae6();
    lVar3 = *(longlong *)(lVar2 + 0x110);
    if (lVar3 == 0) {
      FUN_140aa6c08(lVar2);
      lVar3 = *(longlong *)(lVar2 + 0x110);
    }
    bVar1 = *(char *)(lVar3 + 0x7c) == '\x01';
    if (DAT_14cb430b0 != 0) {
      bVar1 = 0 < DAT_14cb430b0;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 8) = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_144893a1c(param_1,0);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    else {
      bVar1 = DAT_14cb430b0 < 0;
      if (DAT_14cb430b0 == 0) {
        bVar1 = *(char *)(lVar3 + 0x7c) == '\x02';
      }
      if ((bVar1) && (*(undefined4 *)(param_1 + 400) = 0, *(int *)(param_1 + 0x194) != 0)) {
        FUN_144893a1c(param_1 + 0x188,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1402eeec8 FUN_1402eeec8 body=222 status=ok
// SIG undefined FUN_1402eeec8(void)

undefined8 FUN_1402eeec8(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0575c) {
    FUN_144b3d300(&DAT_14cb0575c);
    if (DAT_14cb0575c == -1) {
      uVar6 = FUN_14118da1c();
      DAT_14cb05758 = FUN_14054d46e(uVar6,L"DisableShaderJobCache");
      _Init_thread_footer(&DAT_14cb0575c);
    }
  }
  lVar2 = DAT_14cb056c8;
  uVar6 = 0;
  if ((DAT_14cb05758 == '\0') && (DAT_14c761b1c != 0)) {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if ((uVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (uVar1 == 2)))) {
      uVar7 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar7 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar7 = 1;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar7));
  }
  return uVar6;
}



// FUNCTION 1402eefa6 FUN_1402eefa6 body=180 status=ok
// SIG undefined FUN_1402eefa6(void)

void FUN_1402eefa6(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x4d0))();
  if (param_1[0x3e] != 0) {
    local_38 = param_4[2];
    local_48 = *param_4;
    uStack_40 = param_4[1];
    local_60 = *param_3;
    uStack_5c = param_3[1];
    uStack_58 = param_3[2];
    uStack_54 = param_3[3];
    local_50 = *(undefined8 *)(param_3 + 4);
    local_68 = param_2;
    FUN_1447cd2ec(param_1[0x3e] + 0x5a8);
  }
  if ((param_1[0x39d] != 0) && (1 < *(byte *)(param_1[0x39d] + 0x178))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ef0c8 FUN_1402ef0c8 body=604 status=ok
// SIG undefined FUN_1402ef0c8(void)

void FUN_1402ef0c8(longlong *param_1,void *param_2,float param_3,char param_4,longlong param_5)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  char *pcVar9;
  float fVar10;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined1 local_170 [24];
  longlong local_158;
  float local_70;
  char local_6c;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = param_5;
  if (param_5 == 0) {
    if (param_1[0x27f] == 0) {
      local_178 = 0;
    }
    else {
      local_178 = *(longlong *)(param_1[0x27f] + 0x388);
    }
  }
  FUN_1446dcdd4(local_170);
  if (DAT_14cb78ee8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_144815d88(DAT_14cb78ee8,local_170);
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((lVar3 != 0) && (lVar4 = (longlong)*(int *)(lVar3 + 0x20), 0 < lVar4)) {
    pcVar8 = *(char **)(lVar3 + 0x18);
    fVar10 = 0.0;
    pcVar9 = (char *)0x0;
    do {
      fVar1 = *(float *)(pcVar8 + 4);
      if (((fVar1 < param_3) || ((param_4 != '\0' && (*pcVar8 == '\x01')))) && (fVar10 < fVar1)) {
        pcVar9 = pcVar8;
        fVar10 = fVar1;
      }
      pcVar8 = pcVar8 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (pcVar9 != (char *)0x0) {
      lVar3 = FUN_140963a30(pcVar9 + 0x10);
      if ((lVar3 != 0) && (param_1 != (longlong *)0x0)) {
        uVar5 = FUN_1407ca880();
        plVar6 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_1407ca880();
          plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
          if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
            uVar5 = FUN_140963a30(pcVar9 + 0x10);
            (**(code **)(*plVar7 + 0x38))(plVar7,uVar5);
          }
        }
      }
      FUN_140aec192(param_1,*(undefined8 *)(pcVar9 + 8),param_3);
      if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      iVar2 = FUN_14487fd02(param_1);
      if (iVar2 != 3) {
        memcpy(local_170,param_2,0x100);
        local_68 = param_5;
        local_70 = param_3;
        local_6c = param_4;
        uVar5 = FUN_14477b072(param_1,DAT_14cb5b308);
        (**(code **)(*param_1 + 0x248))(param_1,uVar5,local_170);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402ef326 FUN_1402ef326 body=208 status=ok
// SIG undefined FUN_1402ef326(void)

void FUN_1402ef326(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7bbd(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14018429c(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef3f6(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7bea(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef436(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402ef3f6 FUN_1402ef3f6 body=64 status=ok
// SIG undefined FUN_1402ef3f6(void)

void FUN_1402ef3f6(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 1402ef436 FUN_1402ef436 body=77 status=ok
// SIG undefined FUN_1402ef436(void)

void FUN_1402ef436(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402ef484 FUN_1402ef484 body=40 status=ok
// SIG undefined FUN_1402ef484(void)

undefined8 FUN_1402ef484(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402ef4ac FUN_1402ef4ac body=679 status=ok
// SIG undefined FUN_1402ef4ac(void)

void FUN_1402ef4ac(undefined8 *param_1)

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



// FUNCTION 1402ef754 FUN_1402ef754 body=67 status=ok
// SIG undefined FUN_1402ef754(void)

longlong FUN_1402ef754(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14477bcf0();
  if ((int)(param_2 & 0x1f) < *(int *)(lVar1 + 0x78)) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + (ulonglong)(param_2 & 0x1f) * 8);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1402ef798 FUN_1402ef798 body=1889 status=ok
// SIG undefined FUN_1402ef798(void)

void FUN_1402ef798(double *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  double local_f8;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  double local_98;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    dVar9 = param_1[0x8b];
  }
  else {
    dVar9 = param_1[2] - (double)*(float *)((longlong)param_1 + 0x4c);
    param_1[0x89] = *param_1;
    param_1[0x8a] = param_1[1];
    param_1[0x8b] = dVar9;
  }
  fVar11 = (float)dVar9;
  local_e8 = *param_1;
  dStack_e0 = param_1[1];
  local_d8 = param_1[2];
  uStack_d0 = param_1[3];
  local_c8 = param_1[4];
  uStack_c0 = param_1[5];
  local_b8 = param_1[6];
  local_b0 = (longlong *)param_1[7];
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  local_a8 = *(undefined4 *)(param_1 + 8);
  uStack_a0 = param_1[9];
  if ((fVar11 != 3.4028235e+38) || (NAN(fVar11))) {
    FUN_144948f94(&local_e8,fVar11 + (float)((ulonglong)uStack_a0 >> 0x20));
  }
  if (((9.999999747378752e-05 < ABS(param_1[0x35])) || (9.999999747378752e-05 < ABS(param_1[0x36])))
     || (9.999999747378752e-05 < ABS(param_1[0x37]))) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      local_f8 = param_1[0x37];
      local_108 = *(undefined1 (*) [16])(param_1 + 0x35);
    }
    else {
      dVar4 = param_1[0x35] * param_1[0x24];
      dVar12 = param_1[0x36] * param_1[0x25];
      dVar10 = param_1[0x37] * param_1[0x26];
      dVar14 = param_1[0x1c];
      dVar7 = param_1[0x1d];
      dVar8 = param_1[0x1e];
      dVar9 = param_1[0x1f];
      dVar16 = dVar12 * dVar14 - dVar4 * dVar7;
      dVar13 = dVar10 * dVar7 - dVar12 * dVar8;
      dVar15 = dVar4 * dVar8 - dVar14 * dVar10;
      dVar13 = dVar13 + dVar13;
      dVar15 = dVar15 + dVar15;
      dVar16 = dVar16 + dVar16;
      local_f8 = dVar16 * dVar9 + dVar10 + (dVar15 * dVar14 - dVar13 * dVar7);
      dVar12 = (dVar8 * dVar13 - dVar14 * dVar16) + param_1[0x1f] * dVar15 + dVar12;
      local_108._8_4_ = SUB84(dVar12,0);
      local_108._0_8_ = (dVar16 * dVar7 - dVar15 * dVar8) + dVar9 * dVar13 + dVar4;
      local_108._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    }
    FUN_1402f0636(&local_e8,local_108);
  }
  if (*(char *)((longlong)param_1 + 0x1a5) == '\x01') {
    FUN_1402f021a(&local_e8);
  }
  if (*(char *)((longlong)param_1 + 0x1a3) == '\0') {
    uStack_a0 = (double)((ulonglong)uStack_a0 & 0xffffffff00000000);
  }
  if (*(char *)((longlong)param_1 + 0x1a4) == '\0') {
    fVar11 = 0.0;
  }
  else {
    fVar11 = uStack_a0._4_4_;
  }
  if (*(char *)((longlong)param_1 + 0x1a1) != '\0') {
    uStack_a0._0_4_ = (float)uStack_a0 + *(float *)(param_1 + 0x43);
  }
  if (*(char *)((longlong)param_1 + 0x1a2) != '\0') {
    fVar11 = fVar11 + *(float *)((longlong)param_1 + 0x21c);
  }
  uStack_a0._0_4_ = (float)uStack_a0 + *(float *)(param_1 + 0x33);
  uStack_a0._4_4_ = fVar11 + *(float *)((longlong)param_1 + 0x19c);
  if ((*(uint *)(param_1 + 0x44) < 0x15) &&
     (fVar11 = (float)FUN_1402efefa(*(uint *)(param_1 + 0x44),0), uStack_a0._4_4_ <= fVar11)) {
    uStack_a0._4_4_ = fVar11;
  }
  plVar1 = local_b0;
  if ((float)uStack_a0 <= 15.0) {
    uStack_a0._0_4_ = 15.0;
  }
  if (uStack_a0._4_4_ <= 15.0) {
    uStack_a0._4_4_ = 15.0;
  }
  *(undefined4 *)(param_1 + 0x83) = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_1 + 0x41c) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 0x84) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0x424) = uStack_c0._4_4_;
  *(undefined4 *)(param_1 + 0x81) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_1 + 0x40c) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 0x82) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_1 + 0x414) = uStack_d0._4_4_;
  param_1[0x7f] = local_e8;
  param_1[0x80] = dStack_e0;
  if (param_1 + 0x85 != &local_b8) {
    param_1[0x85] = local_b8;
    local_b8 = 0.0;
    plVar3 = (longlong *)param_1[0x86];
    if (local_b0 != plVar3) {
      local_b0 = (longlong *)0x0;
      param_1[0x86] = (double)plVar1;
      if (plVar3 == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0x87) = local_a8;
        param_1[0x88] = uStack_a0;
        goto LAB_1402efa37;
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
  }
  plVar1 = local_b0;
  *(undefined4 *)(param_1 + 0x87) = local_a8;
  param_1[0x88] = uStack_a0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_1402efa37:
  local_e8 = param_1[0x1c];
  dStack_e0 = param_1[0x1d];
  local_d8 = param_1[0x1e];
  uStack_d0 = param_1[0x1f];
  FUN_1448052ee(&local_e8,local_108);
  *(float *)((longlong)param_1 + 0x464) = (float)(double)local_108._8_8_;
  if ((param_1[0x7b] != 0.0) &&
     (FUN_147e49f8e(*(undefined8 *)((longlong)param_1[0x7b] + 0x598),&local_e8,
                    *(undefined4 *)(param_1 + 0x7d)), (local_88 & 1) != 0)) {
    dVar9 = param_1[0x78] * (double)CONCAT44(uStack_a4,local_a8);
    dVar4 = param_1[0x79] * uStack_a0;
    dVar15 = param_1[0x7a] * local_98;
    dVar12 = dVar4 * local_e8 - dVar9 * dStack_e0;
    dVar14 = dVar15 * dStack_e0 - dVar4 * local_d8;
    dVar16 = dVar9 * local_d8 - local_e8 * dVar15;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar12 = dVar12 + dVar12;
    dVar4 = (local_d8 * dVar14 - local_e8 * dVar12) + uStack_d0 * dVar16 + dVar4 + uStack_c0;
    auVar6._8_4_ = SUB84(dVar4,0);
    auVar6._0_8_ = (dVar12 * dStack_e0 - dVar16 * local_d8) + uStack_d0 * dVar14 + dVar9 + local_c8;
    auVar6._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x75) = auVar6;
    param_1[0x77] =
         dVar12 * uStack_d0 + dVar15 + (dVar16 * local_e8 - dVar14 * dStack_e0) + local_b8;
  }
  if ((param_1[0x72] != 0.0) &&
     (FUN_147e49f8e(*(undefined8 *)((longlong)param_1[0x72] + 0x598),&local_e8,
                    *(undefined4 *)(param_1 + 0x74)), (local_88 & 1) != 0)) {
    dVar9 = param_1[0x6f] * (double)CONCAT44(uStack_a4,local_a8);
    dVar4 = param_1[0x70] * uStack_a0;
    local_98 = param_1[0x71] * local_98;
    dVar12 = dVar4 * local_e8 - dVar9 * dStack_e0;
    dVar15 = local_98 * dStack_e0 - dVar4 * local_d8;
    dVar16 = dVar9 * local_d8 - local_e8 * local_98;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar12 = dVar12 + dVar12;
    dVar4 = (local_d8 * dVar15 - local_e8 * dVar12) + uStack_d0 * dVar16 + dVar4 + uStack_c0;
    auVar5._8_4_ = SUB84(dVar4,0);
    auVar5._0_8_ = (dVar12 * dStack_e0 - dVar16 * local_d8) + uStack_d0 * dVar15 + dVar9 + local_c8;
    auVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x6c) = auVar5;
    param_1[0x6e] =
         dVar12 * uStack_d0 + local_98 + (dVar16 * local_e8 - dVar15 * dStack_e0) + local_b8;
  }
  FUN_1402eff60(param_1 + 0x7f,param_1 + 0x7b);
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402efefa FUN_1402efefa body=101 status=ok
// SIG undefined FUN_1402efefa(void)

undefined8 FUN_1402efefa(uint param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  if (param_1 == 0xffffffff) goto LAB_1402eff39;
  if (param_1 - 0x15 < 10) {
    lVar1 = FUN_14477bcf0();
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + -0xa8 + (ulonglong)param_1 * 8);
  }
  else {
    if (0x14 < param_1) goto LAB_1402eff39;
    lVar1 = FUN_14477bcf0();
    if (*(int *)(lVar1 + 0x40) <= (int)param_1) goto LAB_1402eff39;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + (ulonglong)param_1 * 8);
  }
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x30);
    uVar3 = 0;
  }
LAB_1402eff39:
  return CONCAT44(uVar3,uVar2);
}



// FUNCTION 1402eff60 FUN_1402eff60 body=638 status=ok
// SIG undefined FUN_1402eff60(void)

void FUN_1402eff60(double *param_1,double *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  byte local_88;
  ulonglong local_70;
  
  dVar10 = DAT_14cb1c870;
  dVar8 = DAT_14cb1c868;
  dVar7 = DAT_14cb1c860;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = param_1[2];
  local_108 = *(undefined4 *)param_1;
  uStack_104 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_100 = *(undefined4 *)(param_1 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_1 + 0xc);
  dVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_2 + 2);
  if (dVar3 != 0.0) {
    FUN_147e49f8e(*(undefined8 *)((longlong)dVar3 + 0x598),&local_e8,uVar2);
    if ((local_88 & 1) != 0) {
      local_c8 = *param_1 - local_c8;
      dStack_c0 = param_1[1] - dStack_c0;
      local_b8 = param_1[2] - local_b8;
      dVar7 = -local_e8;
      dStack_e0 = -dStack_e0;
      local_d8 = local_d8 * -1.0;
      dStack_d0 = dStack_d0 * 1.0;
      dVar11 = local_c8 * local_d8 - dVar7 * local_b8;
      dVar8 = dStack_c0 * dVar7 - local_c8 * dStack_e0;
      dVar9 = local_b8 * dStack_e0 - dStack_c0 * local_d8;
      dVar9 = dVar9 + dVar9;
      dVar11 = dVar11 + dVar11;
      dVar8 = dVar8 + dVar8;
      dVar10 = dStack_d0 * dVar8 + local_b8 + (dVar11 * dVar7 - dVar9 * dStack_e0);
      dVar7 = (dVar8 * dStack_e0 - dVar11 * local_d8) + dStack_d0 * dVar9 + local_c8;
      dVar8 = local_e8 * dVar8 + local_d8 * dVar9 + dStack_d0 * dVar11 + dStack_c0;
    }
  }
  param_1[2] = local_f8;
  *(undefined4 *)param_1 = local_108;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_104;
  *(undefined4 *)(param_1 + 1) = uStack_100;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_fc;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 3) = auVar6;
  param_1[5] = dVar10;
  param_1[6] = dVar3;
  plVar5 = (longlong *)param_1[7];
  if (plVar4 == plVar5) {
    *(undefined4 *)(param_1 + 8) = uVar2;
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_128);
        }
      }
    }
  }
  else {
    param_1[7] = (double)plVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402f021a FUN_1402f021a body=974 status=ok
// SIG undefined FUN_1402f021a(void)

void FUN_1402f021a(undefined1 (*param_1) [16],float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  byte local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)param_1[3] != 0) {
    FUN_147e49f8e(*(undefined8 *)(*(longlong *)param_1[3] + 0x598),&local_108,
                  *(undefined4 *)param_1[4]);
    if ((local_a8 & 1) != 0) {
      local_c8 = *(double *)(param_1[1] + 8) * local_c8;
      dStack_c0 = *(double *)param_1[2] * dStack_c0;
      local_b8 = *(double *)(param_1[2] + 8) * local_b8;
      dVar12 = dStack_c0 * local_108 - local_c8 * dStack_100;
      dVar10 = local_b8 * dStack_100 - dStack_c0 * local_f8;
      dVar11 = local_c8 * local_f8 - local_108 * local_b8;
      dVar10 = dVar10 + dVar10;
      dVar11 = dVar11 + dVar11;
      dVar12 = dVar12 + dVar12;
      dVar9 = (local_f8 * dVar10 - local_108 * dVar12) + dStack_f0 * dVar11 + dStack_c0 + dStack_e0;
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = (dVar12 * dStack_100 - dVar11 * local_f8) + dStack_f0 * dVar10 + local_c8 +
                     local_e8;
      auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *param_1 = auVar7;
      *(double *)param_1[1] =
           dVar12 * dStack_f0 + local_b8 + (dVar11 * local_108 - dVar10 * dStack_100) + local_d8;
    }
  }
  dVar14 = DAT_14cb1c870;
  dVar12 = DAT_14cb1c868;
  dVar9 = DAT_14cb1c860;
  dVar11 = (double)param_2 + *(double *)param_1[1];
  dVar10 = *(double *)*param_1;
  dVar8 = *(double *)(*param_1 + 8);
  lVar3 = *(longlong *)param_1[3];
  plVar4 = *(longlong **)(param_1[3] + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)param_1[4];
  if (lVar3 != 0) {
    FUN_147e49f8e(*(undefined8 *)(lVar3 + 0x598),&local_108,uVar2);
    if ((local_a8 & 1) != 0) {
      local_e8 = dVar10 - local_e8;
      dStack_e0 = dVar8 - dStack_e0;
      local_d8 = dVar11 - local_d8;
      dVar9 = -local_108;
      dStack_100 = -dStack_100;
      local_f8 = local_f8 * -1.0;
      dStack_f0 = dStack_f0 * 1.0;
      dVar15 = local_e8 * local_f8 - dVar9 * local_d8;
      dVar12 = dStack_e0 * dVar9 - local_e8 * dStack_100;
      dVar13 = local_d8 * dStack_100 - dStack_e0 * local_f8;
      dVar13 = dVar13 + dVar13;
      dVar15 = dVar15 + dVar15;
      dVar12 = dVar12 + dVar12;
      dVar14 = dStack_f0 * dVar12 + local_d8 + (dVar15 * dVar9 - dVar13 * dStack_100);
      dVar9 = (dVar12 * dStack_100 - dVar15 * local_f8) + dStack_f0 * dVar13 + local_e8;
      dVar12 = local_108 * dVar12 + local_f8 * dVar13 + dStack_f0 * dVar15 + dStack_e0;
    }
  }
  *(double *)*param_1 = dVar10;
  *(double *)(*param_1 + 8) = dVar8;
  *(double *)param_1[1] = dVar11;
  auVar6._8_4_ = SUB84(dVar12,0);
  auVar6._0_8_ = dVar9;
  auVar6._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_1[1] + 8) = auVar6;
  *(double *)(param_1[2] + 8) = dVar14;
  *(longlong *)param_1[3] = lVar3;
  plVar5 = *(longlong **)(param_1[3] + 8);
  if (plVar4 == plVar5) {
    *(undefined4 *)param_1[4] = uVar2;
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_128);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1[3] + 8) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined4 *)param_1[4] = uVar2;
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402f0636 FUN_1402f0636 body=981 status=ok
// SIG undefined FUN_1402f0636(void)

undefined1 (*) [16] FUN_1402f0636(undefined1 (*param_1) [16],double *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  byte local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)param_1[3] != 0) {
    FUN_147e49f8e(*(undefined8 *)(*(longlong *)param_1[3] + 0x598),&local_108,
                  *(undefined4 *)param_1[4]);
    if ((local_a8 & 1) != 0) {
      local_c8 = *(double *)(param_1[1] + 8) * local_c8;
      dStack_c0 = *(double *)param_1[2] * dStack_c0;
      local_b8 = *(double *)(param_1[2] + 8) * local_b8;
      dVar9 = dStack_c0 * local_108 - local_c8 * dStack_100;
      dVar11 = local_b8 * dStack_100 - dStack_c0 * local_f8;
      dVar10 = local_c8 * local_f8 - local_108 * local_b8;
      dVar11 = dVar11 + dVar11;
      dVar10 = dVar10 + dVar10;
      dVar9 = dVar9 + dVar9;
      *(double *)*param_1 =
           (dVar9 * dStack_100 - dVar10 * local_f8) + dStack_f0 * dVar11 + local_c8 + local_e8;
      *(double *)(*param_1 + 8) =
           (local_f8 * dVar11 - local_108 * dVar9) + dStack_f0 * dVar10 + dStack_c0 + dStack_e0;
      *(double *)param_1[1] =
           dVar9 * dStack_f0 + local_b8 + (dVar10 * local_108 - dVar11 * dStack_100) + local_d8;
    }
  }
  dVar14 = DAT_14cb1c870;
  dVar12 = DAT_14cb1c868;
  dVar10 = DAT_14cb1c860;
  dVar9 = *(double *)param_1[1] + param_2[2];
  dVar8 = *(double *)(*param_1 + 8) + param_2[1];
  dVar11 = *(double *)*param_1 + *param_2;
  lVar3 = *(longlong *)param_1[3];
  plVar4 = *(longlong **)(param_1[3] + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)param_1[4];
  if (lVar3 != 0) {
    FUN_147e49f8e(*(undefined8 *)(lVar3 + 0x598),&local_108,uVar2);
    if ((local_a8 & 1) != 0) {
      local_e8 = dVar11 - local_e8;
      dStack_e0 = dVar8 - dStack_e0;
      local_d8 = dVar9 - local_d8;
      dVar10 = -local_108;
      dStack_100 = -dStack_100;
      local_f8 = local_f8 * -1.0;
      dStack_f0 = dStack_f0 * 1.0;
      dVar15 = local_e8 * local_f8 - dVar10 * local_d8;
      dVar12 = dStack_e0 * dVar10 - local_e8 * dStack_100;
      dVar13 = local_d8 * dStack_100 - dStack_e0 * local_f8;
      dVar13 = dVar13 + dVar13;
      dVar15 = dVar15 + dVar15;
      dVar12 = dVar12 + dVar12;
      dVar14 = dStack_f0 * dVar12 + local_d8 + (dVar15 * dVar10 - dVar13 * dStack_100);
      dVar10 = (dVar12 * dStack_100 - dVar15 * local_f8) + dStack_f0 * dVar13 + local_e8;
      dVar12 = local_108 * dVar12 + local_f8 * dVar13 + dStack_f0 * dVar15 + dStack_e0;
    }
  }
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar11;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *param_1 = auVar6;
  *(double *)param_1[1] = dVar9;
  auVar7._8_4_ = SUB84(dVar12,0);
  auVar7._0_8_ = dVar10;
  auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_1[1] + 8) = auVar7;
  *(double *)(param_1[2] + 8) = dVar14;
  *(longlong *)param_1[3] = lVar3;
  plVar5 = *(longlong **)(param_1[3] + 8);
  if (plVar4 == plVar5) {
    *(undefined4 *)param_1[4] = uVar2;
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
  }
  else {
    *(longlong **)(param_1[3] + 8) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    *(undefined4 *)param_1[4] = uVar2;
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402f0a0c FUN_1402f0a0c body=61 status=ok
// SIG undefined FUN_1402f0a0c(void)

ulonglong FUN_1402f0a0c(undefined8 param_1,int param_2,undefined8 param_3)

{
  BOOL BVar1;
  HRGN hrgn;
  
  hrgn = (HRGN)FUN_1402f0a4a(param_1,0);
  BVar1 = PtInRegion(hrgn,param_2,(int)param_3);
  DeleteObject(hrgn);
  return CONCAT71((int7)((ulonglong)param_3 >> 8),BVar1 != 0) & 0xffffffff;
}



// FUNCTION 1402f0a4a FUN_1402f0a4a body=395 status=ok
// SIG undefined FUN_1402f0a4a(void)

void FUN_1402f0a4a(longlong *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  UINT x1;
  byte bVar4;
  int iVar5;
  int y2;
  undefined1 auStackY_98 [32];
  tagWINDOWINFO local_5c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  if (((int)param_1[6] != -1) && (*(int *)((longlong)param_1 + 0x34) != -1)) {
    piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(param_1);
    if (*piVar2 == 5) {
      lVar3 = (**(code **)(*param_1 + 0xe0))();
      bVar4 = *(byte *)(lVar3 + 0x18);
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
      if (cVar1 != '\0') {
        if (bVar4 != 0) goto LAB_1402f0b4a;
        local_5c.dwStyle = 0;
        local_5c.dwExStyle = 0;
        local_5c.dwWindowStatus = 0;
        local_5c.cxWindowBorders = 0;
        local_5c.rcClient.left = 0;
        local_5c.rcClient.top = 0;
        local_5c.rcClient.right = 0;
        local_5c.rcClient.bottom = 0;
        local_5c.rcWindow.left = 0;
        local_5c.rcWindow.top = 0;
        local_5c.rcWindow.right = 0;
        local_5c.rcWindow.bottom = 0;
        local_5c.cyWindowBorders = 0;
        local_5c.atomWindowType = 0;
        local_5c.wCreatorVersion = 0;
        local_5c.cbSize = 0x3c;
        GetWindowInfo((HWND)param_1[5],&local_5c);
        x1 = 0;
        if (param_2 != '\0') {
          x1 = local_5c.cxWindowBorders;
        }
        y2 = *(int *)((longlong)param_1 + 0x34) + x1;
        iVar5 = (int)param_1[6] + x1;
        goto LAB_1402f0a91;
      }
      bVar4 = bVar4 ^ 1;
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
      if (cVar1 != '\0') {
LAB_1402f0b4a:
        if (param_2 != '\0') {
          (**(code **)(*param_1 + 0xb0))(param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStackY_98);
      }
      bVar4 = 0;
    }
    if ((((int)param_1[7] == 2) && (bVar4 == 0)) && (iVar5 = *(int *)(param_1[1] + 0x4c), 0 < iVar5)
       ) {
      CreateRoundRectRgn(0,0,(int)param_1[6] + 1,*(int *)((longlong)param_1 + 0x34) + 1,iVar5,iVar5)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStackY_98);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStackY_98);
  }
  GetWindowRect((HWND)param_1[5],(LPRECT)&local_5c);
  y2 = local_5c.rcWindow.right - local_5c.rcWindow.left;
  iVar5 = local_5c.rcWindow.top - local_5c.cbSize;
  x1 = 0;
LAB_1402f0a91:
  CreateRectRgn(x1,x1,iVar5,y2);
  if ((local_20 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402f0c06 FUN_1402f0c06 body=5320 status=ok
// SIG undefined FUN_1402f0c06(void)

ulonglong FUN_1402f0c06(longlong *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  longlong *plVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined7 uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  float fVar34;
  double dVar35;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined4 local_220;
  code **local_218;
  undefined1 *local_210;
  wchar_t *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  code **local_1f0;
  code *local_1e8;
  code *local_1e0;
  int local_1d4;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  wchar_t *local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  longlong local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong *local_100;
  undefined8 *local_f8;
  code *local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((*(float *)(param_1 + 0xc) <= 0.0) || (param_1[5] == 0)) {
    uVar23 = 0;
    goto LAB_1402f0d47;
  }
  FUN_1402f20d0(param_1[5] + 0xda8);
  if (((((local_108 == 0) ||
        (lVar11 = (**(code **)(*(longlong *)param_1[5] + 0x5e0))(), lVar11 == 0)) ||
       (lVar12 = (**(code **)(*param_1 + 0x180))(param_1), lVar12 == 0)) ||
      (((*(longlong *)(lVar12 + 0x30) != 0 &&
        (lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x2b0), lVar14 != 0)) &&
       ((*(longlong *)(lVar14 + 0x588) != 0 &&
        (*(double *)(lVar12 + 0x708) <= *(double *)(lVar12 + 0x6d0))))))) ||
     (((*(byte *)(lVar12 + 0x154) & 0x40) != 0 && (iVar31 = FUN_14490d72a(lVar12), iVar31 == 3)))) {
LAB_1402f0d2e:
    uVar23 = 0;
  }
  else {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar14 = 0;
      do {
        lVar26 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar14);
        if (*(longlong *)(lVar26 + 0x360) == lVar12) {
          if ((lVar26 != 0) && ((*(byte *)(lVar26 + 0x278) & 1) != 0)) goto LAB_1402f0d2e;
          break;
        }
        lVar14 = lVar14 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar14);
    }
    cVar9 = FUN_144a80e00(lVar12);
    if ((cVar9 != '\0') && (*(char *)(lVar12 + 0x155) < '\0')) goto LAB_1402f0d2e;
    local_118 = (longlong *)0x0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    pdVar13 = (double *)&DAT_14c8464e0;
    if (*(longlong *)(lVar11 + 0x1c8) != 0) {
      pdVar13 = (double *)(*(longlong *)(lVar11 + 0x1c8) + 0x260);
    }
    dVar35 = (double)*(float *)(param_1 + 0xc);
    local_d8 = pdVar13[1] + dVar35;
    local_e0 = *pdVar13 + dVar35;
    dStack_e8 = pdVar13[1] - dVar35;
    local_f0 = (code *)(*pdVar13 - dVar35);
    local_d0 = 1;
    FUN_14475eac4(*(undefined8 *)(local_108 + 0x1ac0),&local_f0,&local_128);
    lVar14 = local_128;
    lVar26 = (longlong)(int)uStack_120;
    if (lVar26 != 0) {
      lVar32 = 0;
      do {
        plVar17 = *(longlong **)(lVar14 + lVar32);
        if (plVar17 != (longlong *)0x0) {
          pcVar4 = *(code **)(*plVar17 + 8);
          if (pcVar4 == (code *)&LAB_1447f9a40) {
LAB_1402f0e67:
            plVar18 = plVar17 + -0x78;
          }
          else if (pcVar4 == (code *)&LAB_1449493aa) {
            plVar18 = plVar17 + -0xa6;
          }
          else {
            if (pcVar4 == (code *)&LAB_140931e34) goto LAB_1402f0e67;
            plVar18 = (longlong *)(*pcVar4)(plVar17);
          }
          if (plVar18 != (longlong *)0x0) {
            if (DAT_14cb6a468 == 0) {
              local_f0 = FUN_140940a0a;
              local_1e0 = FUN_14081d0ea;
              local_1e8 = (code *)&LAB_146522c10;
              local_1f0 = &local_f0;
              local_1f8 = &LAB_14876160d;
              local_200 = &LAB_140e30382;
              local_208 = L"Engine";
              local_210 = (undefined1 *)0x0;
              local_218 = (code **)CONCAT44(local_218._4_4_,0x10000004);
              local_220 = 0x10;
              local_228 = (undefined8 *)CONCAT44(local_228._4_4_,0x9c0);
              FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
            }
            if (((*(int *)(DAT_14cb6a468 + 0x38) <= *(int *)(plVar18[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cb6a468 + 0x38) * 8)
                 == DAT_14cb6a468 + 0x30)) &&
               (lVar15 = (**(code **)(plVar18[0xa6] + 0x40))(plVar18 + 0xa6), uVar23 = uStack_110,
               *(char *)(lVar15 + 0x70) == '\0')) {
              lVar15 = (longlong)(int)uStack_110;
              uVar24 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar24);
              if (uStack_110._4_4_ < uVar24) {
                FUN_1409b6400(&local_118,uVar23 & 0xffffffff);
              }
              local_118[lVar15] = (longlong)plVar17;
            }
          }
        }
        lVar32 = lVar32 + 8;
      } while (lVar26 * 8 != lVar32);
    }
    (**(code **)(*(longlong *)param_1[5] + 0x718))((longlong *)param_1[5],local_140,local_158);
    if ((longlong)(int)uStack_110 != 0) {
      local_1b8 = local_118;
      local_190 = local_118 + (int)uStack_110;
      local_1c0 = param_1 + 0x18;
      local_1a8 = param_1 + 0x1f;
      local_198 = (wchar_t *)(param_1 + 0x22);
      local_1d0 = param_1 + 0xe;
      local_1c8 = param_1 + 0x10;
      local_1b0 = param_1 + 0x15;
LAB_1402f0ff5:
      plVar17 = (longlong *)*local_1b8;
      if (*(code **)(*plVar17 + 8) == (code *)&LAB_1449493aa) {
        plVar18 = plVar17 + -0xa6;
      }
      else {
        plVar18 = (longlong *)(**(code **)(*plVar17 + 8))();
      }
      if (plVar18 != (longlong *)0x0) {
        if (DAT_14cac9ca8 == 0) {
          local_f0 = FUN_141030f22;
          local_1e0 = FUN_14081d0ea;
          local_1e8 = FUN_14081d0ea;
          local_1f0 = &local_f0;
          local_1f8 = &LAB_1478c0a72;
          local_200 = &LAB_1417b2375;
          local_208 = L"Engine";
          local_210 = (undefined1 *)0x1000000000;
          local_218 = (code **)CONCAT44(local_218._4_4_,0x10000004);
          local_220 = 8;
          local_228 = (undefined8 *)CONCAT44(local_228._4_4_,0x390);
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(plVar18[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
            DAT_14cac9ca8 + 0x30)) goto LAB_1402f1682;
        local_cc = 0;
        local_c8 = 0x101;
        local_a0 = 0;
        local_98 = 0x800000000;
        local_80 = 0;
        uVar23 = (ulonglong)local_d8 >> 8;
        local_f0 = (code *)0x0;
        dStack_e8 = 0.0;
        local_d0 = 0;
        local_e0 = 7.291122019556812e-304;
        local_d8 = (double)CONCAT71((uint7)uVar23 & 0xffffff,1);
        local_90 = *(undefined4 *)(lVar11 + 0xc);
        local_78 = 0x400000001;
        if ((plVar18[0x39] != 0) &&
           ((lVar14 = *(longlong *)(plVar18[0x39] + 0x120), lVar14 != 0 &&
            (lVar14 = *(longlong *)(lVar14 + 0xa8), lVar14 != 0)))) {
          local_8c = *(undefined4 *)(lVar14 + 0xc);
          local_78 = 0x400000002;
        }
        (**(code **)(*plVar18 + 0x328))(plVar18,&local_170);
        if ((double)*(float *)(param_1 + 0xd) < ABS(local_160)) {
          bVar33 = true;
        }
        else {
          fVar34 = (float)SQRT(local_170 * local_170 + local_168 * local_168);
          bVar33 = *(float *)((longlong)param_1 + 100) <= fVar34 &&
                   fVar34 != *(float *)((longlong)param_1 + 100);
        }
        if ((plVar18[0x39] == 0) || (lVar14 = *(longlong *)(plVar18[0x39] + 0x120), lVar14 == 0)) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar14 + 0xa8);
        }
        if (!(bool)(lVar14 == 0 & bVar33)) {
          local_188 = 0;
          uStack_180 = (longlong *)0x0;
          if ((plVar17 == (longlong *)0x0) ||
             (lVar14 = (**(code **)(*plVar17 + 8))(plVar17), lVar14 == 0)) {
            local_188 = 0;
            uVar24 = 0;
          }
          else {
            uVar24 = *(uint *)(lVar14 + 0xc);
            local_188 = CONCAT44(local_188._4_4_,uVar24);
            if ((int)uVar24 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            uVar24 = *(uint *)(lVar14 + 0x10);
            if (*(uint *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar31 = DAT_14c964868 + 1;
              UNLOCK();
              uVar29 = DAT_14c964868 + 1;
              bVar33 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar31;
              if (bVar33) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar29);
              }
              LOCK();
              uVar24 = *(uint *)(lVar14 + 0x10);
              bVar33 = uVar24 == 0;
              if (bVar33) {
                *(uint *)(lVar14 + 0x10) = uVar29;
                uVar24 = 0;
              }
              UNLOCK();
              if (bVar33) {
                uVar24 = uVar29;
              }
            }
          }
          local_188._4_4_ = uVar24;
          cVar9 = FUN_14493c216(&local_188,0);
          if (cVar9 == '\0') {
            uStack_180 = plVar17;
          }
          if ((int)param_1[0x19] != *(int *)((longlong)param_1 + 0xf4)) {
            plVar22 = (longlong *)param_1[0x20];
            if ((longlong *)param_1[0x20] == (longlong *)0x0) {
              plVar22 = local_1a8;
            }
            iVar31 = *(int *)((longlong)plVar22 +
                             (ulonglong)
                             ((int)param_1[0x21] - 1U & (local_188._4_4_ ^ (uint)local_188)) * 4);
            if (iVar31 != -1) {
              do {
                lVar14 = (longlong)iVar31 * 0x20 + *local_1c0;
                if (*(longlong **)((longlong)iVar31 * 0x20 + *local_1c0 + 8) == uStack_180) {
                  if ((lVar14 != 0) && ((char *)(lVar14 + 0x10) != (char *)0x0)) {
                    cVar9 = *(char *)(lVar14 + 0x10);
                    local_188 = 0;
                    uStack_180 = (longlong *)0x0;
                    if ((plVar17 == (longlong *)0x0) ||
                       (lVar14 = (**(code **)(*plVar17 + 8))(plVar17), lVar14 == 0)) {
                      local_188 = 0;
                      iVar31 = 0;
                    }
                    else {
                      uVar24 = *(uint *)(lVar14 + 0xc);
                      local_188 = CONCAT44(local_188._4_4_,uVar24);
                      if ((int)uVar24 < DAT_14c9647dc) {
                        lVar14 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
                      }
                      else {
                        lVar14 = 0;
                      }
                      iVar31 = *(int *)(lVar14 + 0x10);
                      if (*(int *)(lVar14 + 0x10) == 0) {
                        LOCK();
                        iVar31 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar30 = DAT_14c964868 + 1;
                        bVar33 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar31;
                        if (bVar33) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar30);
                        }
                        LOCK();
                        iVar31 = *(int *)(lVar14 + 0x10);
                        bVar33 = iVar31 == 0;
                        if (bVar33) {
                          *(int *)(lVar14 + 0x10) = iVar30;
                          iVar31 = 0;
                        }
                        UNLOCK();
                        if (bVar33) {
                          iVar31 = iVar30;
                        }
                      }
                    }
                    local_188 = CONCAT44(iVar31,(uint)local_188);
                    cVar10 = FUN_14493c216(&local_188,0);
                    if (cVar10 == '\0') {
                      uStack_180 = plVar17;
                    }
                    if ((int)param_1[0x19] == *(int *)((longlong)param_1 + 0xf4))
                    goto LAB_1402f165b;
                    plVar18 = (longlong *)param_1[0x20];
                    if ((longlong *)param_1[0x20] == (longlong *)0x0) {
                      plVar18 = local_1a8;
                    }
                    iVar31 = *(int *)((longlong)plVar18 +
                                     ((longlong)(int)(local_188._4_4_ ^ (uint)local_188) &
                                     (longlong)(int)param_1[0x21] - 1U) * 4);
                    if (iVar31 == -1) goto LAB_1402f165b;
                    lVar14 = *local_1c0;
                    goto LAB_1402f161d;
                  }
                  break;
                }
                iVar31 = *(int *)(lVar14 + 0x18);
              } while (iVar31 != -1);
            }
          }
          lVar14 = plVar18[0x39];
          if (lVar14 == 0) {
            local_178 = DAT_14c8464f0;
            local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_180 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_188 = *(undefined8 *)(lVar14 + 0x260);
            uStack_180 = *(longlong **)(lVar14 + 0x268);
            local_178 = *(undefined8 *)(lVar14 + 0x270);
          }
          local_208 = local_198;
          local_210 = &DAT_14cad0f10;
          local_218 = &local_f0;
          local_228 = &local_188;
          local_200 = (undefined1 *)((ulonglong)local_200 & 0xffffffff00000000);
          local_220 = 4;
          FUN_1447de878(lVar12,&local_f8,1,local_140);
          local_188 = 0;
          uStack_180 = (longlong *)0x0;
          if ((plVar17 == (longlong *)0x0) ||
             (lVar14 = (**(code **)(*plVar17 + 8))(plVar17), lVar14 == 0)) {
            local_188 = 0;
            iVar31 = 0;
          }
          else {
            uVar24 = *(uint *)(lVar14 + 0xc);
            local_188 = CONCAT44(local_188._4_4_,uVar24);
            if ((int)uVar24 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            iVar31 = *(int *)(lVar14 + 0x10);
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar31 = DAT_14c964868 + 1;
              UNLOCK();
              iVar30 = DAT_14c964868 + 1;
              bVar33 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar31;
              if (bVar33) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar30);
              }
              LOCK();
              iVar31 = *(int *)(lVar14 + 0x10);
              bVar33 = iVar31 == 0;
              if (bVar33) {
                *(int *)(lVar14 + 0x10) = iVar30;
                iVar31 = 0;
              }
              UNLOCK();
              if (bVar33) {
                iVar31 = iVar30;
              }
            }
          }
          local_188 = CONCAT44(iVar31,(uint)local_188);
          cVar9 = FUN_14493c216(&local_188,0);
          if (cVar9 == '\0') {
            uStack_180 = plVar17;
          }
          if (*(int *)((longlong)param_1 + 0xa4) == 0) {
            iVar31 = (int)param_1[0xf];
            *(int *)(param_1 + 0xf) = iVar31 + 1;
            if (*(int *)((longlong)param_1 + 0x7c) == iVar31) {
              FUN_1447711aa(local_1d0,iVar31);
            }
            iVar30 = (int)param_1[0x13];
            if (iVar30 == 0) {
              iVar20 = -1;
            }
            else {
              iVar20 = iVar30 + 0x1e;
              if (-1 < iVar30 + -1) {
                iVar20 = iVar30 + -1;
              }
              iVar20 = iVar20 >> 5;
            }
            iVar21 = iVar30 + 1;
            iVar25 = iVar30 + 0x1f;
            if (-1 < iVar30) {
              iVar25 = iVar30;
            }
            if (iVar25 >> 5 == iVar20) {
              *(int *)(param_1 + 0x13) = iVar21;
            }
            else {
              if (*(int *)((longlong)param_1 + 0x9c) <= iVar30) {
                if (iVar30 + 0x20U < 0xa0) {
                  iVar21 = 0x80;
                  iVar20 = iVar30;
                }
                else {
                  uVar24 = iVar30 + 0x20U >> 5;
                  if (*(int *)((longlong)param_1 + 0x9c) + 0x1fU < 0xa0) {
                    uVar29 = 4;
                    if (4 < uVar24) {
                      uVar29 = uVar24;
                    }
                  }
                  else {
                    uVar29 = (uVar24 * 3 >> 3) + uVar24 + 0x10;
                  }
                  uVar23 = FUN_144a3809e(uVar29 << 2,0);
                  iVar20 = (int)(uVar23 >> 2);
                  iVar21 = -0x20;
                  if ((int)uVar24 <= iVar20) {
                    iVar21 = iVar20 << 5;
                  }
                  iVar20 = (int)param_1[0x13];
                }
                *(int *)((longlong)param_1 + 0x9c) = iVar21;
                FUN_1446efbd8(local_1c8,iVar20);
                iVar21 = (int)param_1[0x13] + 1;
              }
              iVar20 = iVar21 + 0x1f;
              if (-1 < iVar21) {
                iVar20 = iVar21;
              }
              *(int *)(param_1 + 0x13) = iVar21;
              if (iVar21 % 0x20 != 0) {
                plVar17 = (longlong *)param_1[0x12];
                if ((longlong *)param_1[0x12] == (longlong *)0x0) {
                  plVar17 = local_1c8;
                }
                bVar19 = -(char)(iVar21 % 0x20);
                *(uint *)((longlong)plVar17 + (longlong)(iVar20 >> 5) * 4) =
                     (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar20 >> 5) * 4) <<
                           (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
              }
            }
            lVar14 = (longlong)iVar31;
            plVar17 = (longlong *)param_1[0x12];
            if ((longlong *)param_1[0x12] == (longlong *)0x0) {
              plVar17 = local_1c8;
            }
            bVar19 = (byte)iVar30 & 0x1f;
            puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar25 >> 5) * 4);
            *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
          }
          else {
            iVar31 = (int)param_1[0x14];
            lVar14 = (longlong)iVar31;
            iVar30 = *(int *)(param_1[0xe] + 4 + lVar14 * 0x20);
            *(int *)(param_1 + 0x14) = iVar30;
            iVar20 = *(int *)((longlong)param_1 + 0xa4) + -1;
            *(int *)((longlong)param_1 + 0xa4) = iVar20;
            if (iVar20 != 0) {
              *(undefined4 *)(param_1[0xe] + (longlong)iVar30 * 0x20) = 0xffffffff;
            }
          }
          plVar17 = (longlong *)param_1[0x12];
          if ((longlong *)param_1[0x12] == (longlong *)0x0) {
            plVar17 = local_1c8;
          }
          iVar30 = iVar31 + 0x1f;
          if (-1 < iVar31) {
            iVar30 = iVar31;
          }
          puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar30 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar31 & 0x1f);
          lVar26 = param_1[0xe];
          lVar14 = lVar14 * 0x20;
          puVar2 = (undefined4 *)(lVar26 + lVar14);
          *(undefined8 **)(lVar26 + lVar14) = local_f8;
          puVar3 = (undefined4 *)(lVar26 + 8 + lVar14);
          *puVar3 = (uint)local_188;
          puVar3[1] = local_188._4_4_;
          puVar3[2] = (undefined4)uStack_180;
          puVar3[3] = uStack_180._4_4_;
          *(undefined4 *)(lVar26 + 0x18 + lVar14) = 0xffffffff;
          uVar24 = (int)((ulonglong)local_f8 >> 0x20) * 0x17 + (int)local_f8;
          uVar29 = (int)param_1[0xf] - *(int *)((longlong)param_1 + 0xa4);
          if ((uVar29 != 0) && (uVar29 != 1)) {
            plVar17 = (longlong *)param_1[0x16];
            if ((longlong *)param_1[0x16] == (longlong *)0x0) {
              plVar17 = local_1b0;
            }
            iVar30 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[0x17] - 1U & uVar24) * 4)
            ;
            while (iVar30 != -1) {
              puVar3 = (undefined4 *)(*local_1d0 + (longlong)iVar30 * 0x20);
              if (local_f8 == *(undefined8 **)(*local_1d0 + (longlong)iVar30 * 0x20)) {
                uVar5 = *puVar2;
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
                *puVar3 = uVar5;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                FUN_14059d308(local_1d0,iVar31);
                goto LAB_1402f1660;
              }
              iVar30 = puVar3[6];
            }
          }
          if (uVar29 < 4) {
            iVar30 = 1;
          }
          else {
            uVar23 = (ulonglong)(uVar29 & 0xfffffffe) + 0xf;
            lVar14 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar30 = 1 << ((byte)lVar14 & 0x1f);
          }
          if (((int)uVar29 < 1) || (iVar30 <= (int)param_1[0x17])) {
            uVar24 = (int)param_1[0x17] - 1U & uVar24;
            puVar2[7] = uVar24;
            plVar17 = (longlong *)param_1[0x16];
            if ((longlong *)param_1[0x16] == (longlong *)0x0) {
              plVar17 = local_1b0;
            }
            puVar2[6] = *(undefined4 *)
                         ((longlong)plVar17 +
                         ((longlong)(int)param_1[0x17] - 1U & (longlong)(int)uVar24) * 4);
            plVar17 = (longlong *)param_1[0x16];
            if ((longlong *)param_1[0x16] == (longlong *)0x0) {
              plVar17 = local_1b0;
            }
            *(int *)((longlong)plVar17 +
                    ((longlong)(int)param_1[0x17] - 1U & (longlong)(int)uVar24) * 4) = iVar31;
          }
          else {
            *(int *)(param_1 + 0x17) = iVar30;
            FUN_1418ed61c(local_1d0);
          }
        }
        goto LAB_1402f1660;
      }
      goto LAB_1402f1682;
    }
LAB_1402f177e:
    uVar23 = (ulonglong)(int)param_1[7];
    if (0 < (longlong)uVar23) {
      iVar31 = -(int)param_1[7];
      lVar11 = uVar23 << 4;
      uVar27 = uVar23;
      do {
        lVar12 = param_1[6];
        plVar17 = *(longlong **)(lVar12 + -8 + lVar11);
        if (((((plVar17 == (longlong *)0x0) ||
              (iVar30 = *(int *)(lVar12 + -0xc + lVar11), iVar30 == 0)) ||
             (uVar24 = *(uint *)(lVar12 + -0x10 + lVar11), (int)uVar24 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar24 ||
             (lVar14 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8), lVar14 == 0))
            )) || ((*(int *)(lVar14 + 0x10) != iVar30 || ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)
                   ))) {
          uVar24 = *(uint *)(param_1 + 7);
          if (uVar27 != uVar24) {
LAB_1402f1882:
            iVar30 = uVar24 + iVar31;
            if (0 < (int)(uVar24 + iVar31)) {
              iVar30 = 1;
            }
            memmove((void *)(lVar12 + lVar11 + -0x10),
                    (void *)((longlong)(int)(uVar24 - iVar30) * 0x10 + lVar12),(longlong)iVar30 << 4
                   );
            uVar24 = *(uint *)(param_1 + 7);
          }
LAB_1402f18b1:
          *(uint *)(param_1 + 7) = uVar24 - 1;
          FUN_1418ed85e();
        }
        else {
          if (*(code **)(*plVar17 + 8) == (code *)&LAB_1449493aa) {
            plVar17 = plVar17 + -0xa6;
          }
          else {
            plVar17 = (longlong *)(**(code **)(*plVar17 + 8))(plVar17);
          }
          if (plVar17 == (longlong *)0x0) {
LAB_1402f2002:
            uVar24 = *(uint *)(param_1 + 7);
            if (uVar27 != uVar24) {
              lVar12 = param_1[6];
              goto LAB_1402f1882;
            }
            goto LAB_1402f18b1;
          }
          if (DAT_14cac9ca8 == 0) {
            local_f0 = FUN_141030f22;
            local_1e0 = FUN_14081d0ea;
            local_1e8 = FUN_14081d0ea;
            local_1f0 = &local_f0;
            local_1f8 = &LAB_1478c0a72;
            local_200 = &LAB_1417b2375;
            local_208 = L"Engine";
            local_210 = (undefined1 *)0x1000000000;
            local_218 = (code **)CONCAT44(local_218._4_4_,0x10000004);
            local_220 = 8;
            local_228 = (undefined8 *)CONCAT44(local_228._4_4_,0x390);
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if ((*(int *)(plVar17[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
              DAT_14cac9ca8 + 0x30)) goto LAB_1402f2002;
        }
        uVar23 = uVar27 - 1;
        iVar31 = iVar31 + 1;
        lVar11 = lVar11 + -0x10;
        bVar33 = 1 < uVar27;
        uVar27 = uVar23;
      } while (bVar33);
    }
    if ((*(char *)((longlong)param_1 + 0x129) != '\0') &&
       ((((param_1[0xb] == 0 || (*(int *)((longlong)param_1 + 0x54) == 0)) ||
         (uVar24 = *(uint *)(param_1 + 10), (int)uVar24 < 0)) ||
        (((DAT_14c9647dc <= (int)uVar24 ||
          (lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8), lVar11 == 0)) ||
         ((*(int *)(lVar11 + 0x10) != *(int *)((longlong)param_1 + 0x54) ||
          ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))))))) {
      FUN_140b75e76(param_1[5] + 0x3d88,0);
    }
    uVar28 = (undefined7)(uVar23 >> 8);
    if ((param_1[0xb] == 0) || (iVar31 = *(int *)((longlong)param_1 + 0x54), iVar31 == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x129) = 0;
      uVar23 = CONCAT71(uVar28,(int)param_1[7] != 0);
    }
    else {
      uVar24 = *(uint *)(param_1 + 10);
      bVar33 = false;
      if ((-1 < (int)uVar24) && (bVar33 = false, (int)uVar24 < DAT_14c9647dc)) {
        lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != iVar31)) {
          bVar33 = false;
        }
        else {
          bVar33 = (*(uint *)(lVar11 + 8) & 0x10200000) == 0;
        }
      }
      *(bool *)((longlong)param_1 + 0x129) = bVar33;
      bVar33 = (int)param_1[7] != 0;
      uVar23 = CONCAT71(uVar28,bVar33);
      if (iVar31 != 0 && !bVar33) {
        uVar24 = *(uint *)(param_1 + 10);
        uVar23 = 0;
        if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
          lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != iVar31)) {
            uVar23 = 0;
          }
          else {
            uVar23 = (ulonglong)((*(uint *)(lVar11 + 8) & 0x10200000) == 0);
          }
        }
      }
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_118 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_100 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar16 = (int *)((longlong)local_100 + 0xc);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
LAB_1402f0d47:
  if ((local_70 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
LAB_1402f161d:
  lVar26 = lVar14 + (longlong)iVar31 * 0x20;
  if (*(longlong **)(lVar14 + 8 + (longlong)iVar31 * 0x20) != uStack_180) goto LAB_1402f1997;
  iVar30 = *(int *)((longlong)plVar18 + (longlong)*(int *)(lVar26 + 0x1c) * 4);
  if (iVar30 == iVar31) {
    piVar16 = (int *)((longlong)plVar18 + (longlong)*(int *)(lVar26 + 0x1c) * 4);
  }
  else {
    do {
      piVar16 = (int *)((longlong)iVar30 * 0x20 + lVar14 + 0x18);
      iVar30 = *piVar16;
    } while (iVar30 != iVar31);
  }
  *piVar16 = *(int *)(lVar26 + 0x18);
  FUN_1441e8288(local_1c0);
LAB_1402f165b:
  if ((cVar9 != '\0') && (lVar14 = param_1[7], (longlong)(int)lVar14 != 0)) {
    local_1a0 = param_1 + 6;
    lVar26 = param_1[6];
    lVar32 = 0;
    while( true ) {
      local_188 = 0;
      uStack_180 = (longlong *)0x0;
      if ((plVar17 == (longlong *)0x0) ||
         (lVar15 = (**(code **)(*plVar17 + 8))(plVar17), lVar15 == 0)) {
        local_188 = 0;
        iVar31 = 0;
      }
      else {
        uVar24 = *(uint *)(lVar15 + 0xc);
        local_188 = CONCAT44(local_188._4_4_,uVar24);
        if ((int)uVar24 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar31 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar31 = DAT_14c964868 + 1;
          UNLOCK();
          local_1d4 = DAT_14c964868 + 1;
          bVar33 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar31;
          if (bVar33) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,local_1d4);
          }
          LOCK();
          iVar31 = *(int *)(lVar15 + 0x10);
          bVar33 = iVar31 == 0;
          if (bVar33) {
            *(int *)(lVar15 + 0x10) = local_1d4;
            iVar31 = 0;
          }
          UNLOCK();
          if (bVar33) {
            iVar31 = local_1d4;
          }
        }
      }
      local_188 = CONCAT44(iVar31,(uint)local_188);
      cVar9 = FUN_14493c216(&local_188,0);
      if (cVar9 == '\0') {
        uStack_180 = plVar17;
      }
      if (*(longlong **)(lVar26 + 8 + lVar32) == uStack_180) break;
      lVar32 = lVar32 + 0x10;
      if ((longlong)(int)lVar14 * 0x10 == lVar32) goto LAB_1402f1660;
    }
    FUN_144a44f9a(&local_188,plVar17);
    local_f8 = &local_188;
    FUN_14059d37a(local_1a0);
  }
LAB_1402f1660:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_1402f1682:
  local_1b8 = local_1b8 + 1;
  if (local_1b8 == local_190) goto LAB_1402f177e;
  goto LAB_1402f0ff5;
LAB_1402f1997:
  iVar31 = *(int *)(lVar26 + 0x18);
  if (iVar31 == -1) goto LAB_1402f165b;
  goto LAB_1402f161d;
}



// FUNCTION 1402f20d0 FUN_1402f20d0 body=109 status=ok
// SIG undefined FUN_1402f20d0(void)

undefined8 * FUN_1402f20d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    *param_2 = 0;
    param_2[1] = plVar2;
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) {
        param_2[1] = 0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (param_2[1] != 0) {
      *param_2 = uVar3;
    }
  }
  return param_2;
}



// FUNCTION 1402f213e FUN_1402f213e body=10832 status=ok
// SIG undefined FUN_1402f213e(void)

/* WARNING: Removing unreachable block (ram,0x0001402f451b) */
/* WARNING: Removing unreachable block (ram,0x0001402f4401) */
/* WARNING: Removing unreachable block (ram,0x0001402f440b) */
/* WARNING: Removing unreachable block (ram,0x0001402f4a91) */
/* WARNING: Removing unreachable block (ram,0x0001402f4a9b) */
/* WARNING: Removing unreachable block (ram,0x0001402f485d) */
/* WARNING: Removing unreachable block (ram,0x0001402f4867) */
/* WARNING: Removing unreachable block (ram,0x0001402f4880) */
/* WARNING: Removing unreachable block (ram,0x0001402f488b) */
/* WARNING: Removing unreachable block (ram,0x0001402f48a4) */
/* WARNING: Removing unreachable block (ram,0x0001402f48c1) */
/* WARNING: Removing unreachable block (ram,0x0001402f48cc) */
/* WARNING: Removing unreachable block (ram,0x0001402f48e0) */
/* WARNING: Removing unreachable block (ram,0x0001402f48f8) */
/* WARNING: Removing unreachable block (ram,0x0001402f4903) */
/* WARNING: Removing unreachable block (ram,0x0001402f4917) */

void FUN_1402f213e(longlong param_1,ulonglong *param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  double *pdVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  double *pdVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  undefined7 uVar33;
  longlong **pplVar31;
  double *pdVar32;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_ba8 [32];
  longlong local_b88;
  undefined4 local_b80;
  longlong local_b70;
  double *local_b68;
  double *local_b60;
  double *local_b58;
  undefined8 *local_b50;
  double local_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  longlong *plStack_b30;
  longlong *plStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  longlong *local_b00;
  double *pdStack_af8;
  undefined8 uStack_af0;
  double local_ae8;
  double dStack_ae0;
  longlong *local_ad8;
  longlong *local_ac8;
  longlong *plStack_ac0;
  longlong *local_ab8;
  longlong *plStack_ab0;
  double dStack_aa8;
  double dStack_aa0;
  undefined8 uStack_a98;
  double *pdStack_a90;
  double local_a88;
  double dStack_a80;
  longlong *plStack_a78;
  undefined8 uStack_a70;
  double dStack_a68;
  undefined4 local_a60;
  double local_a58;
  double dStack_a50;
  double local_a48;
  double dStack_a40;
  double dStack_a38;
  double dStack_a30;
  undefined8 local_a28;
  longlong *plStack_a20;
  undefined4 local_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  longlong *plStack_9d8;
  undefined4 local_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined4 local_9b8;
  undefined8 local_9b0;
  longlong *plStack_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined4 local_990;
  char local_98c;
  longlong local_988;
  undefined4 local_980;
  char local_978;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined1 local_8d8 [56];
  longlong *local_8a0;
  char local_888;
  longlong local_880;
  undefined4 local_878;
  char local_870;
  undefined1 local_7a0;
  undefined1 local_798;
  byte local_790;
  undefined1 local_788 [784];
  longlong local_478;
  undefined4 local_470;
  undefined1 local_468;
  char local_460;
  undefined1 local_458;
  byte local_450;
  undefined8 local_448;
  longlong *plStack_440;
  longlong *local_438 [2];
  longlong *local_428;
  longlong *plStack_420;
  longlong *local_418;
  longlong *plStack_410;
  longlong *local_408;
  double *pdStack_400;
  int local_3f8;
  double local_3d8;
  longlong *local_3d0;
  undefined4 local_3c8;
  double local_3c0 [12];
  double local_360;
  longlong *local_358;
  undefined4 local_350;
  double local_348;
  undefined5 uStack_340;
  undefined4 uStack_33b;
  undefined4 uStack_337;
  undefined4 uStack_333;
  undefined4 uStack_32f;
  undefined1 local_258 [88];
  undefined1 local_200 [224];
  char local_120;
  undefined1 local_118;
  undefined4 local_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined5 uStack_ed;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  double *pdStack_c0;
  int local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_ba8;
  local_450 = 0;
  if ((*(char *)(param_1 + 0x678) == '\x02') && (*(char *)(param_2[2] + 1) == '\x01')) {
    FUN_1402f4ca6(param_2,local_788,param_1 + 0x1270);
    goto LAB_1402f2aa0;
  }
  if (*(char *)(param_3 + 0x25) == '\x01') {
    if (*(char *)(param_3 + 0x24) == '\x01') {
      if ((*(longlong *)(param_1 + 0x720) != 0) &&
         (FUN_147e49f8e(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x598),&local_ac8,
                        *(undefined4 *)(param_1 + 0x730)), ((ulonglong)dStack_a68 & 1) != 0)) {
        dVar39 = *(double *)(param_1 + 0x708) * local_a88;
        dVar38 = *(double *)(param_1 + 0x710) * dStack_a80;
        dVar42 = *(double *)(param_1 + 0x718) * (double)plStack_a78;
        dVar40 = dVar38 * (double)local_ac8 - dVar39 * (double)plStack_ac0;
        dVar43 = dVar42 * (double)plStack_ac0 - dVar38 * (double)local_ab8;
        dVar41 = dVar39 * (double)local_ab8 - (double)local_ac8 * dVar42;
        dVar43 = dVar43 + dVar43;
        dVar41 = dVar41 + dVar41;
        dVar40 = dVar40 + dVar40;
        dVar38 = ((double)local_ab8 * dVar43 - (double)local_ac8 * dVar40) +
                 (double)plStack_ab0 * dVar41 + dVar38 + dStack_aa0;
        auVar9._8_4_ = SUB84(dVar38,0);
        auVar9._0_8_ = (dVar40 * (double)plStack_ac0 - dVar41 * (double)local_ab8) +
                       (double)plStack_ab0 * dVar43 + dVar39 + dStack_aa8;
        auVar9._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x6f0) = auVar9;
        *(double *)(param_1 + 0x700) =
             dVar40 * (double)plStack_ab0 + dVar42 +
             (dVar41 * (double)local_ac8 - dVar43 * (double)plStack_ac0) + (double)uStack_a98;
      }
      lVar26 = param_1 + 0x1278;
      puVar4 = (undefined8 *)(param_1 + 0x690);
      if ((*param_3 == 0.0) || (cVar19 = FUN_1402f4be8(), cVar19 == '\0')) {
LAB_1402f28c4:
        local_b38 = 0;
        local_b40 = (longlong *)0xffffffffffffffff;
        plStack_b30 = DAT_14cb1d020;
        plStack_b28 = DAT_14cb1d028;
        uStack_b20 = DAT_14cb1d030;
        uStack_b18 = DAT_14cb1d020;
        local_b10 = DAT_14cb1d028;
        uStack_b08 = DAT_14cb1d030;
        local_b00 = (longlong *)0x0;
        pdStack_af8 = (double *)0x0;
        uStack_af0 = 0xffffffff;
LAB_1402f2945:
        uVar28 = 0xe;
LAB_1402f294d:
        FUN_1402f542c(lVar26,uVar28);
        FUN_1402f511c(puVar4);
        local_790 = 0;
      }
      else {
        dVar39 = *param_3;
        cVar19 = FUN_1402f52f6((longlong)dVar39 + 0x350);
        if (cVar19 == '\0') goto LAB_1402f28c4;
        if (*(int *)((longlong)dVar39 + 0x358) == 1) {
          local_ac8 = *(longlong **)((longlong)dVar39 + 0x350);
          cVar19 = FUN_1402f5ca6(param_2[1]);
          if (cVar19 == '\0') goto LAB_1402f28c4;
        }
        FUN_1402fa1c0(&local_b40,(longlong)dVar39 + 0x360,(longlong)dVar39 + 0x350,param_2[1]);
        if (1 < (int)local_b38 - 1U) {
          if ((int)local_b38 == 3) goto LAB_1402f229e;
          goto LAB_1402f2945;
        }
        if (((int)local_b40 == -1) || (local_b40._4_4_ == -1)) goto LAB_1402f2945;
LAB_1402f229e:
        if ((((double)plStack_b30 <= -(double)DAT_14cb1d020) ||
            ((((double)DAT_14cb1d020 <= (double)plStack_b30 ||
              ((double)plStack_b28 <= -(double)DAT_14cb1d028)) ||
             ((double)DAT_14cb1d028 <= (double)plStack_b28)))) ||
           (((((double)uStack_b20 <= -(double)DAT_14cb1d030 ||
              ((double)DAT_14cb1d030 <= (double)uStack_b20)) ||
             (iVar20 = _finite((double)plStack_b30), iVar20 == 0)) ||
            ((iVar20 = _finite((double)plStack_b28), iVar20 == 0 ||
             (iVar20 = _finite((double)uStack_b20), iVar20 == 0)))))) goto LAB_1402f2945;
        local_b60 = (double *)(param_1 + 0x6e0);
        local_b68 = (double *)(param_1 + 0x6f0);
        local_b48 = *param_3;
        local_b50 = (undefined8 *)((longlong)local_b48 + 0x3f8);
        local_b70 = lVar26;
        if (local_b48 == 0.0) {
LAB_1402f2494:
          pdVar27 = (double *)(param_1 + 0x738);
          uVar33 = (undefined7)((ulonglong)puVar4 >> 8);
          if ((*(longlong **)(param_1 + 0x738) == (longlong *)0x0) ||
             (lVar26 = *(longlong *)(param_2[2] + 0x48),
             lVar24 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x30))(),
             lVar26 == *(longlong *)(lVar24 + 0x128))) {
            iVar20 = (int)local_b40;
            iVar23 = local_b40._4_4_;
            iVar18 = (int)local_b38;
            if (pdStack_af8 != (double *)0x0) {
              LOCK();
              *(int *)(pdStack_af8 + 1) = *(int *)(pdStack_af8 + 1) + 1;
              UNLOCK();
            }
            local_b58 = pdStack_af8;
            if (*pdVar27 == 0.0) {
LAB_1402f43c7:
              pdVar32 = (double *)CONCAT71(uVar33,1);
              lVar26 = local_b70;
            }
            else {
              if (1 < *(int *)(param_1 + 0x6e8) - 1U) {
                if (*(int *)(param_1 + 0x6e8) == 3) goto LAB_1402f2522;
                goto LAB_1402f43c7;
              }
              if ((*(int *)(param_1 + 0x6e0) == -1) || (*(int *)(param_1 + 0x6e4) == -1))
              goto LAB_1402f43c7;
LAB_1402f2522:
              dVar39 = *local_b68;
              if ((((dVar39 <= -(double)DAT_14cb1d020) ||
                   (((((double)DAT_14cb1d020 <= dVar39 ||
                      (*(double *)(param_1 + 0x6f8) <= -(double)DAT_14cb1d028)) ||
                     ((double)DAT_14cb1d028 <= *(double *)(param_1 + 0x6f8))) ||
                    ((*(double *)(param_1 + 0x700) <= -(double)DAT_14cb1d030 ||
                     ((double)DAT_14cb1d030 <= *(double *)(param_1 + 0x700))))))) ||
                  (iVar21 = _finite(dVar39), iVar21 == 0)) ||
                 (((iVar21 = _finite(*(double *)(param_1 + 0x6f8)), iVar21 == 0 ||
                   (iVar21 = _finite(*(double *)(param_1 + 0x700)), lVar26 = local_b70, iVar21 == 0)
                   ) || ((*(int *)(param_1 + 0x6e0) != iVar20 ||
                         (*(int *)(param_1 + 0x6e4) != iVar23)))))) goto LAB_1402f43c7;
              pdVar32 = (double *)CONCAT71(uVar33,1);
              if (*(int *)(param_1 + 0x6e8) == iVar18) {
                lVar24 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x30))();
                dVar39 = *(double *)(param_1 + 0x690);
                if (((((-(double)DAT_14cb1d020 < dVar39) && (dVar39 < (double)DAT_14cb1d020)) &&
                     (dVar38 = *(double *)(param_1 + 0x698), -(double)DAT_14cb1d028 < dVar38)) &&
                    (((dVar38 < (double)DAT_14cb1d028 &&
                      (dVar40 = *(double *)(param_1 + 0x6a0), -(double)DAT_14cb1d030 < dVar40)) &&
                     ((dVar40 < (double)DAT_14cb1d030 &&
                      ((iVar20 = _finite(dVar39), iVar20 != 0 &&
                       (iVar20 = _finite(dVar38), iVar20 != 0)))))))) &&
                   ((iVar20 = _finite(dVar40), iVar20 != 0 &&
                    (((dVar39 = *(double *)(lVar24 + 0x78) - *(double *)(param_1 + 0x698),
                      dVar38 = *(double *)(lVar24 + 0x70) - *(double *)(param_1 + 0x690),
                      (float)(dVar38 * dVar38 + dVar39 * dVar39) <=
                      *(float *)(param_1 + 0x6d8) * *(float *)(param_1 + 0x6d8) + 0.01 &&
                      (ABS((float)((double)(float)*(double *)(lVar24 + 0x80) -
                                  *(double *)(param_1 + 0x6a0))) <=
                       *(float *)(param_1 + 0x6dc) + 0.01)) &&
                     (cVar19 = FUN_1401bec20(puVar4,local_b50,0x3f800000), cVar19 != '\0')))))) {
                  uVar22 = (**(code **)(*(longlong *)*pdVar27 + 0x28))();
                  pdVar32 = (double *)(ulonglong)uVar22;
                }
              }
            }
            pdVar17 = local_b58;
            if (local_b58 != (double *)0x0) {
              LOCK();
              pdVar3 = local_b58 + 1;
              *(int *)pdVar3 = *(int *)pdVar3 + -1;
              UNLOCK();
              if (*(int *)pdVar3 == 0) {
                (**(code **)*local_b58)();
                LOCK();
                piVar2 = (int *)((longlong)pdVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)((longlong)*pdVar17 + 0x10))(pdVar17);
                }
              }
            }
            if (((char)pdVar32 != '\0') ||
               (plVar7 = (longlong *)*pdVar27, plVar7 == (longlong *)0x0)) goto LAB_1402f3719;
            (**(code **)(*plVar7 + 0x10))(plVar7,*param_2 + 0x1a98);
            if (((longlong *)*pdVar27 == (longlong *)0x0) ||
               (cVar19 = (**(code **)(*(longlong *)*pdVar27 + 8))(), cVar19 != '\0'))
            goto LAB_1402f3719;
          }
          else {
LAB_1402f3719:
            FUN_1402f511c(puVar4);
            dVar39 = local_b48;
            *(int *)(local_b60 + 1) = (int)local_b38;
            *local_b60 = (double)local_b40;
            *(undefined4 *)(local_b68 + 4) = (undefined4)local_b10;
            *(undefined4 *)((longlong)local_b68 + 0x24) = local_b10._4_4_;
            *(undefined4 *)(local_b68 + 5) = (undefined4)uStack_b08;
            *(undefined4 *)((longlong)local_b68 + 0x2c) = uStack_b08._4_4_;
            *(undefined4 *)(local_b68 + 2) = (undefined4)uStack_b20;
            *(undefined4 *)((longlong)local_b68 + 0x14) = uStack_b20._4_4_;
            *(undefined4 *)(local_b68 + 3) = (undefined4)uStack_b18;
            *(undefined4 *)((longlong)local_b68 + 0x1c) = uStack_b18._4_4_;
            *local_b68 = (double)plStack_b30;
            local_b68[1] = (double)plStack_b28;
            if (pdStack_af8 != (double *)0x0) {
              LOCK();
              *(int *)(pdStack_af8 + 1) = *(int *)(pdStack_af8 + 1) + 1;
              UNLOCK();
            }
            plVar7 = *(longlong **)(param_1 + 0x728);
            *(longlong **)(param_1 + 0x720) = local_b00;
            *(double **)(param_1 + 0x728) = pdStack_af8;
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
            *(undefined4 *)(param_1 + 0x730) = (undefined4)uStack_af0;
            uVar28 = *local_b50;
            uVar16 = local_b50[1];
            uVar29 = *(undefined4 *)(local_b50 + 2);
            uVar10 = *(undefined4 *)((longlong)local_b50 + 0x14);
            uVar11 = *(undefined4 *)(local_b50 + 3);
            uVar12 = *(undefined4 *)((longlong)local_b50 + 0x1c);
            uVar13 = *(undefined4 *)((longlong)local_b50 + 0x24);
            uVar14 = *(undefined4 *)(local_b50 + 5);
            uVar15 = *(undefined4 *)((longlong)local_b50 + 0x2c);
            *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(local_b50 + 4);
            *(undefined4 *)(param_1 + 0x6b4) = uVar13;
            *(undefined4 *)(param_1 + 0x6b8) = uVar14;
            *(undefined4 *)(param_1 + 0x6bc) = uVar15;
            *(undefined4 *)(param_1 + 0x6a0) = uVar29;
            *(undefined4 *)(param_1 + 0x6a4) = uVar10;
            *(undefined4 *)(param_1 + 0x6a8) = uVar11;
            *(undefined4 *)(param_1 + 0x6ac) = uVar12;
            *puVar4 = uVar28;
            *(undefined8 *)(param_1 + 0x698) = uVar16;
            uVar28 = *(undefined8 *)((longlong)dVar39 + 0x428);
            lVar26 = *(longlong *)((longlong)dVar39 + 0x430);
            if (lVar26 != 0) {
              LOCK();
              *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
              UNLOCK();
            }
            plVar7 = *(longlong **)(param_1 + 0x6c8);
            *(undefined8 *)(param_1 + 0x6c0) = uVar28;
            *(longlong *)(param_1 + 0x6c8) = lVar26;
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
            *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)((longlong)dVar39 + 0x438);
            *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)((longlong)dVar39 + 0x440);
            plVar7 = (longlong *)*param_2;
            local_ac8 = (longlong *)param_2[1];
            local_9b8 = (undefined4)plVar7[1];
            uVar34 = param_2[3];
            local_9b0 = *(undefined8 *)(param_2[2] + 0x28);
            plStack_9a8 = *(longlong **)(param_2[2] + 0x30);
            if (plStack_9a8 == (longlong *)0x0) {
              plStack_9a8 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)plStack_9a8 + 0xc) = *(int *)((longlong)plStack_9a8 + 0xc) + 1;
              UNLOCK();
            }
            uStack_9c0 = *(undefined8 *)(uVar34 + 0x118);
            local_9a0 = *(undefined8 *)(param_2[2] + 0x48);
            local_998 = *(undefined8 *)(param_2[3] + 0x50);
            uVar34 = *param_2;
            local_ab8 = (longlong *)
                        CONCAT44((int)((ulonglong)local_ab8 >> 0x20),
                                 *(undefined4 *)(uVar34 + 0x1aa0));
            plStack_ac0 = *(longlong **)(uVar34 + 0x1a98);
            plStack_ab0 = *(longlong **)(uVar34 + 0x1aa8);
            dStack_aa8 = *(double *)(uVar34 + 0x1ab0);
            dStack_aa0 = *(double *)(uVar34 + 0x1ab8);
            uStack_a98 = *(longlong **)(uVar34 + 0x1ac0);
            pdStack_a90 = *(double **)(uVar34 + 0x1ac8);
            local_a88 = *(double *)(uVar34 + 0x1ad0);
            dStack_a80 = *(double *)(uVar34 + 0x1ad8);
            plStack_a78 = *(longlong **)(uVar34 + 0x1ae0);
            if (plStack_a78 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_a78 + 1) = (int)plStack_a78[1] + 1;
              UNLOCK();
            }
            uStack_a70 = CONCAT44(uStack_a70._4_4_,*(undefined4 *)(uVar34 + 0x1ae8));
            local_a60 = *(undefined4 *)(local_b60 + 1);
            dStack_a68 = *local_b60;
            local_a58 = *local_b68;
            dStack_a50 = local_b68[1];
            local_a48 = local_b68[2];
            dStack_a40 = local_b68[3];
            dStack_a38 = local_b68[4];
            dStack_a30 = local_b68[5];
            local_a28 = *(undefined8 *)(param_1 + 0x720);
            plStack_a20 = *(longlong **)(param_1 + 0x728);
            if (plStack_a20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_a20 + 1) = (int)plStack_a20[1] + 1;
              UNLOCK();
            }
            local_a18 = *(undefined4 *)(param_1 + 0x730);
            dVar39 = *param_3;
            local_a10 = *(undefined8 *)((longlong)dVar39 + 0x3f8);
            uStack_a08 = *(undefined8 *)((longlong)dVar39 + 0x400);
            local_a00 = *(undefined8 *)((longlong)dVar39 + 0x408);
            uStack_9f8 = *(undefined8 *)((longlong)dVar39 + 0x410);
            uStack_9f0 = *(undefined8 *)((longlong)dVar39 + 0x418);
            uStack_9e8 = *(undefined8 *)((longlong)dVar39 + 0x420);
            local_9e0 = *(undefined8 *)((longlong)dVar39 + 0x428);
            plStack_9d8 = *(longlong **)((longlong)dVar39 + 0x430);
            if (plStack_9d8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_9d8 + 1) = (int)plStack_9d8[1] + 1;
              UNLOCK();
            }
            local_978 = '\0';
            local_98c = '\0';
            local_9d0 = *(undefined4 *)((longlong)dVar39 + 0x438);
            local_9c8 = *(undefined8 *)((longlong)dVar39 + 0x440);
            dVar39 = *param_3;
            if ((*(char *)((longlong)dVar39 + 0x81) == '\x01') &&
               ((undefined4 *)((longlong)dVar39 + 0x464) != &local_990)) {
              local_990 = *(undefined4 *)((longlong)dVar39 + 0x464);
              local_98c = '\x01';
            }
            lVar26 = *(longlong *)((longlong)dVar39 + 200);
            local_b58 = pdVar27;
            if ((lVar26 != 0) && ((longlong *)((longlong)dVar39 + 200) != &local_988)) {
              local_988 = lVar26;
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c();
              }
              local_980 = *(undefined4 *)((longlong)dVar39 + 0xd0);
              local_978 = '\x01';
            }
            pdVar27 = local_b58;
            pdVar32 = (double *)&local_448;
            (**(code **)(*plVar7 + 0x20))(plVar7,pdVar32,&local_ac8);
            if (pdVar27 == pdVar32) {
LAB_1402f4980:
              lVar26 = local_b70;
              if (local_448 != (longlong *)0x0) {
                (**(code **)*local_448)(local_448,1);
              }
            }
            else {
              puVar8 = (undefined8 *)*pdVar27;
              *pdVar27 = (double)local_448;
              local_448 = (longlong *)0x0;
              lVar26 = local_b70;
              if (puVar8 != (undefined8 *)0x0) {
                (**(code **)*puVar8)(puVar8,1);
                goto LAB_1402f4980;
              }
            }
            if (local_978 == '\x01') {
              local_978 = '\0';
            }
            if (local_98c == '\x01') {
              local_98c = '\0';
            }
            if (plStack_9a8 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)plStack_9a8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plStack_9a8 + 0x10))();
              }
            }
            plVar7 = plStack_9d8;
            if (plStack_9d8 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_9d8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_9d8)(plStack_9d8);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            plVar7 = plStack_a20;
            if (plStack_a20 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_a20 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_a20)(plStack_a20);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            plVar7 = plStack_a78;
            if (plStack_a78 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_a78 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_a78)(plStack_a78);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            FUN_1402f542c(lVar26,7);
          }
          if (((longlong *)*pdVar27 != (longlong *)0x0) &&
             (cVar19 = (**(code **)(*(longlong *)*pdVar27 + 8))(), cVar19 == '\0')) {
            uVar34 = param_2[3];
            bVar35 = 0x14 < *(uint *)(*param_2 + 8);
            uVar6 = *(undefined1 *)((longlong)*param_3 + 0xc1);
            uVar30 = CONCAT71(uVar33,uVar6);
            uVar29 = (undefined4)uVar30;
            *(bool *)(param_1 + 0x1928) = bVar35;
            uVar25 = CONCAT71((int7)((ulonglong)pdVar32 >> 8),bVar35);
            cVar19 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x18))();
            if (cVar19 != '\0') {
              FUN_1402f542c(lVar26,1);
              local_b88 = *param_2 + 0x1ad8;
              local_b80 = 4;
              (**(code **)(*(longlong *)*pdVar27 + 0x20))
                        ((longlong *)*pdVar27,&local_448,uVar34 + 0xd0,uVar30 & 0xffffffff);
              goto LAB_1402f2891;
            }
            bVar35 = true;
            uVar28 = 7;
            local_b68 = (double *)CONCAT71(local_b68._1_7_,uVar6);
            local_b58 = pdVar27;
            if (*(char *)(param_1 + 0x1790) == '\x01') {
              if (*(char *)(param_1 + 0x1731) != '\0') {
                uVar6 = *(undefined1 *)(param_1 + 0x1928);
                uVar30 = uVar25 & 0xffffffff;
                if (*(longlong *)(param_2[2] + 0x58) == 0) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = FUN_1449c239e(*(longlong *)(param_2[2] + 0x58),
                                         *(undefined8 *)(param_2[3] + 0x68));
                }
                bVar35 = true;
                if ((*(int *)(param_1 + 0x1708) != 5) ||
                   ((uVar28 = 0x11, (byte)uVar22 < 4 && ((uVar22 & 0xff) != 1)))) {
                  local_b50 = (undefined8 *)CONCAT44(local_b50._4_4_,uVar22);
                  lVar24 = param_1 + 0x1638;
                  fVar37 = (float)FUN_14022d910(lVar24);
                  uVar28 = 0;
                  if (fVar37 <= 4.712389) {
                    local_b60 = (double *)CONCAT71(local_b60._1_7_,uVar6);
                    uVar25 = param_2[3];
                    local_448 = *(longlong **)(uVar25 + 0xd0);
                    plStack_440 = *(longlong **)(uVar25 + 0xd8);
                    local_438[0] = (longlong *)
                                   (*(double *)(uVar25 + 0xe0) - (double)*(float *)(uVar25 + 0x11c))
                    ;
                    FUN_144912966(lVar24,&local_ac8);
                    uVar33 = (undefined7)(uVar30 >> 8);
                    lVar26 = local_b70;
                    uVar25 = uVar30;
                    bVar35 = true;
                    if ((int)uStack_a98 == 1) {
                      bVar36 = false;
                      if ((char)local_b60 == '\0') {
                        uVar30 = param_2[3];
                        cVar19 = FUN_14025bce8(lVar24,&local_ac8,uVar30 + 0xd0);
                        bVar36 = false;
                        if (cVar19 == '\0') {
                          if (*(longlong *)(param_2[2] + 0x58) == 0) {
                            bVar35 = false;
                          }
                          else {
                            bVar35 = (byte)local_b50 != 8 && 2 < (byte)local_b50;
                          }
                          uVar29 = (undefined4)CONCAT71(uVar33,local_b68._0_1_);
                          dVar39 = (double)FUN_144719204(*(undefined8 *)(uVar30 + 0x30),0);
                          dVar38 = (double)FUN_144719204(*(undefined8 *)(uVar30 + 0x38),0);
                          dVar40 = sin(dVar39 * 0.017453292519943295);
                          dVar39 = cos(dVar39 * 0.017453292519943295);
                          dVar41 = sin(dVar38 * 0.017453292519943295);
                          dVar38 = cos(dVar38 * 0.017453292519943295);
                          lVar26 = local_b70;
                          if (bVar35) {
                            uVar28 = 0;
                            bVar36 = false;
                            bVar35 = true;
                          }
                          else {
                            bVar36 = false;
                            bVar35 = true;
                            if (DAT_14cb1d0f8 <=
                                (float)(dVar40 * dStack_aa0 +
                                       dVar38 * dVar39 * (double)plStack_ab0 +
                                       dVar41 * dVar39 * dStack_aa8)) {
                              uVar28 = 0;
                            }
                            else {
                              bVar36 = false;
                              uVar28 = 0;
                              if (*(float *)(param_2[3] + 0x118) * 0.25 < uStack_a98._4_4_) {
                                uVar28 = 5;
                                bVar36 = false;
                                bVar35 = false;
                              }
                            }
                          }
                        }
                        else {
                          uVar28 = 0;
                          uVar29 = (undefined4)CONCAT71(uVar33,local_b68._0_1_);
                          lVar26 = local_b70;
                          bVar35 = true;
                        }
                      }
                      else {
                        uVar28 = 0;
                        uVar29 = (undefined4)CONCAT71(uVar33,local_b68._0_1_);
                      }
                    }
                    else {
                      bVar36 = false;
                      uVar29 = (undefined4)CONCAT71(uVar33,local_b68._0_1_);
                      if ((int)uStack_a98 == 3) {
                        bVar36 = *(int *)(param_1 + 0x1708) == 5;
                        uVar28 = 4;
                        bVar35 = bVar36;
                      }
                    }
                    goto LAB_1402f2d7d;
                  }
                  uVar28 = 0x10;
                  goto LAB_1402f2be7;
                }
                goto LAB_1402f2c49;
              }
              if (*(int *)(param_1 + 0x1708) == 1) {
                uVar28 = 2;
LAB_1402f2be7:
                uVar30 = uVar25 & 0xffffffff;
                bVar35 = false;
                goto LAB_1402f2c49;
              }
              if (*(int *)(param_1 + 0x1708) != 6) {
                bVar36 = *(int *)(param_1 + 0x1460) == 1;
                uVar28 = 3;
                bVar35 = bVar36;
LAB_1402f2d7d:
                if (bVar35 != true || bVar36 != false) {
                  uVar30 = uVar25 & 0xffffffff;
                  bVar35 = (bool)(bVar35 | bVar36);
                  goto LAB_1402f2c49;
                }
              }
            }
            else {
              uVar30 = uVar25 & 0xffffffff;
LAB_1402f2c49:
              local_b88 = *param_2 + 0x1ad8;
              local_b80 = 4;
              (**(code **)(*(longlong *)*local_b58 + 0x20))
                        ((longlong *)*local_b58,&local_448,uVar34 + 0xd0,(ulonglong)local_b68 & 0xff
                        );
              lVar26 = local_b70;
              if (local_120 != '\x01') {
                FUN_1402f542c(local_b70,8);
                *(char *)(param_1 + 0x1928) = (char)uVar30;
                goto LAB_1402f2891;
              }
              if ((bVar35) || (cVar19 = FUN_1402f8346(local_b70,&local_448), cVar19 == '\0')) {
                FUN_1402f542c(lVar26,uVar28);
                FUN_1402f5dea(lVar26,&local_448);
                FUN_1402faef2(param_1 + 0x1468,local_258);
                FUN_1402f53d2(param_1 + 0x14c0,local_200);
                *(char *)(param_1 + 0x1928) = (char)uVar30;
                FUN_1402fd97c(lVar26,param_2,lVar26);
              }
              FUN_1449493b2(&local_448);
              uVar29 = (undefined4)CONCAT71((int7)(uVar30 >> 8),local_b68._0_1_);
            }
            FUN_1402fb194(lVar26,param_2);
            FUN_1402fa97a(lVar26,&local_448,uVar29);
            goto LAB_1402f2891;
          }
          uVar28 = 0xf;
          goto LAB_1402f294d;
        }
        if (1 < (int)local_b38 - 1U) {
          if ((int)local_b38 == 3) goto LAB_1402f23ca;
          goto LAB_1402f2494;
        }
        if (((int)local_b40 == -1) || (local_b40._4_4_ == -1)) goto LAB_1402f2494;
LAB_1402f23ca:
        if ((((((double)plStack_b30 <= -(double)DAT_14cb1d020) ||
              ((((double)DAT_14cb1d020 <= (double)plStack_b30 ||
                ((double)plStack_b28 <= -(double)DAT_14cb1d028)) ||
               ((double)DAT_14cb1d028 <= (double)plStack_b28)))) ||
             ((((double)uStack_b20 <= -(double)DAT_14cb1d030 ||
               ((double)DAT_14cb1d030 <= (double)uStack_b20)) ||
              (iVar20 = _finite((double)plStack_b30), iVar20 == 0)))) ||
            ((iVar20 = _finite((double)plStack_b28), iVar20 == 0 ||
             (iVar20 = _finite((double)uStack_b20), iVar20 == 0)))) ||
           ((dVar39 = *param_3, *(char *)((longlong)dVar39 + 0x81) != '\0' ||
            (*(char *)((longlong)dVar39 + 0x50) != '\x01')))) goto LAB_1402f2494;
        uVar34 = *param_2;
        iVar20 = *(int *)(uVar34 + 0x1aa0);
        if (iVar20 == 1) {
          uVar25 = param_2[3];
          dVar38 = *(double *)(uVar25 + 0xd8);
          dVar40 = *(double *)(uVar25 + 0xd0) - *(double *)(uVar34 + 0x1aa8);
          dVar40 = dVar40 * dVar40;
          lVar26 = 0x1ab0;
LAB_1402f2dca:
          dVar38 = dVar38 - *(double *)(uVar34 + lVar26);
          if (1.0 <= dVar38 * dVar38 + dVar40) goto LAB_1402f2494;
        }
        else {
          if (iVar20 == 2) {
            uVar25 = param_2[3];
            dVar38 = *(double *)(uVar25 + 0xe0) - (double)*(float *)(uVar25 + 0x11c);
            dVar41 = *(double *)(uVar25 + 0xd0) - *(double *)(uVar34 + 0x1aa8);
            dVar40 = *(double *)(uVar25 + 0xd8) - *(double *)(uVar34 + 0x1ab0);
            dVar40 = dVar40 * dVar40 + dVar41 * dVar41;
            lVar26 = 0x1ab8;
            goto LAB_1402f2dca;
          }
          if (iVar20 != 3) goto LAB_1402f2494;
          uVar25 = param_2[3];
        }
        dVar38 = *(double *)((longlong)dVar39 + 0x3f8);
        if (((((dVar38 <= -(double)DAT_14cb1d020) || ((double)DAT_14cb1d020 <= dVar38)) ||
             (dVar40 = *(double *)((longlong)dVar39 + 0x400), dVar40 <= -(double)DAT_14cb1d028)) ||
            (((double)DAT_14cb1d028 <= dVar40 ||
             (dVar41 = *(double *)((longlong)dVar39 + 0x408), dVar41 <= -(double)DAT_14cb1d030))))
           || ((double)DAT_14cb1d030 <= dVar41)) {
LAB_1402f2f5e:
          dVar38 = *param_3;
          local_ad8 = *(longlong **)((longlong)dVar38 + 0x370);
          local_ae8 = *(double *)((longlong)dVar38 + 0x360);
          dStack_ae0 = *(double *)((longlong)dVar38 + 0x368);
          if (iVar20 == 1) {
            dStack_a68 = -NAN;
            dStack_aa8 = (double)param_2[1];
            uVar25 = param_2[3];
            uVar29 = *(undefined4 *)(*param_2 + 8);
            local_ab8 = *(longlong **)(param_2[2] + 0x28);
            plStack_ab0 = *(longlong **)(param_2[2] + 0x30);
            if (plStack_ab0 == (longlong *)0x0) {
              plStack_ab0 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)plStack_ab0 + 0xc) = *(int *)((longlong)plStack_ab0 + 0xc) + 1;
              UNLOCK();
            }
            plStack_ac0 = (longlong *)CONCAT44(plStack_ac0._4_4_,uVar29);
            local_ac8 = *(longlong **)(uVar25 + 0x118);
            pdStack_a90 = *(double **)(uVar34 + 0x1ab8);
            dStack_aa0 = *(double *)(uVar34 + 0x1aa8);
            uStack_a98 = *(longlong **)(uVar34 + 0x1ab0);
            if (*(int *)(uVar34 + 0x1aa0) == 1) {
              uStack_a70 = *(ulonglong *)(uVar34 + 0x1a98);
            }
            else {
              uStack_a70 = 0xffffffffffffffff;
            }
            dVar38 = *param_3;
            plStack_440 = (longlong *)
                          CONCAT44(plStack_440._4_4_,*(undefined4 *)((longlong)dVar38 + 0x358));
            local_448 = *(longlong **)((longlong)dVar38 + 0x350);
            local_438[0] = *(longlong **)((longlong)dVar38 + 0x360);
            local_438[1] = *(longlong **)((longlong)dVar38 + 0x368);
            local_428 = *(longlong **)((longlong)dVar38 + 0x370);
            plStack_420 = *(longlong **)((longlong)dVar38 + 0x378);
            local_418 = *(longlong **)((longlong)dVar38 + 0x380);
            plStack_410 = *(longlong **)((longlong)dVar38 + 0x388);
            local_408 = *(longlong **)((longlong)dVar38 + 0x390);
            pdStack_400 = *(double **)((longlong)dVar38 + 0x398);
            if (pdStack_400 != (double *)0x0) {
              LOCK();
              *(int *)(pdStack_400 + 1) = *(int *)(pdStack_400 + 1) + 1;
              UNLOCK();
            }
            iVar20 = *(int *)((longlong)dVar38 + 0x3a0);
            local_108 = -1;
            iStack_104 = -1;
            uStack_100 = 0;
            uStack_f8 = SUB83(DAT_14cb1d020,0);
            uStack_f5 = (undefined4)((ulonglong)DAT_14cb1d020 >> 0x18);
            uStack_f1._0_1_ = (undefined1)((ulonglong)DAT_14cb1d020 >> 0x38);
            uStack_f1._1_3_ = SUB83(DAT_14cb1d028,0);
            uStack_ed = (undefined5)((ulonglong)DAT_14cb1d028 >> 0x18);
            local_e8 = DAT_14cb1d030;
            plStack_e0 = DAT_14cb1d020;
            plStack_d8 = DAT_14cb1d028;
            plStack_d0 = DAT_14cb1d030;
            local_c8 = (longlong *)0x0;
            pdStack_c0 = (double *)0x0;
            local_b8 = -1;
            local_a88 = local_ae8;
            dStack_a80 = dStack_ae0;
            plStack_a78 = local_ad8;
            local_3f8 = iVar20;
            cVar19 = FUN_14038bf6e(&local_ac8);
            if (cVar19 != '\0') {
              if (((((int)local_448 == local_108) && (local_448._4_4_ == iStack_104)) &&
                  ((int)plStack_440 == uStack_100)) &&
                 ((local_408 == local_c8 && (iVar20 == local_b8)))) {
                if (local_408 != (longlong *)0x0) {
                  if (ABS((double)plStack_420 - (double)plStack_e0) < 1.0) {
                    dVar38 = (double)local_418 - (double)plStack_d8;
                    lVar26 = 0x28;
                    goto LAB_1402f3229;
                  }
                  goto LAB_1402f4632;
                }
                if (1.0 <= ABS((double)local_438[0] -
                               (double)CONCAT17((undefined1)uStack_f1,CONCAT43(uStack_f5,uStack_f8))
                              )) goto LAB_1402f4632;
                dVar38 = (double)local_438[1] - (double)CONCAT53(uStack_ed,uStack_f1._1_3_);
                lVar26 = 0x10;
LAB_1402f3229:
                if ((1.0 <= ABS(dVar38)) ||
                   (1.0 <= ABS(*(double *)((longlong)local_438 + lVar26) -
                               *(double *)((longlong)&uStack_f8 + lVar26)))) goto LAB_1402f4632;
LAB_1402f325f:
                pdVar27 = pdStack_af8;
                local_b38 = CONCAT44(local_b38._4_4_,uStack_100);
                local_b40 = (longlong *)CONCAT44(iStack_104,local_108);
                plStack_b30 = (longlong *)
                              CONCAT17((undefined1)uStack_f1,CONCAT43(uStack_f5,uStack_f8));
                plStack_b28 = (longlong *)CONCAT53(uStack_ed,uStack_f1._1_3_);
                local_b10 = plStack_d8;
                uStack_b08 = plStack_d0;
                uStack_b20 = local_e8;
                uStack_b18 = plStack_e0;
                if (pdStack_c0 != (double *)0x0) {
                  LOCK();
                  *(int *)(pdStack_c0 + 1) = *(int *)(pdStack_c0 + 1) + 1;
                  UNLOCK();
                }
                local_b00 = local_c8;
                pdStack_af8 = pdStack_c0;
                if (pdVar27 != (double *)0x0) {
                  LOCK();
                  pdVar32 = pdVar27 + 1;
                  *(int *)pdVar32 = *(int *)pdVar32 + -1;
                  UNLOCK();
                  if (*(int *)pdVar32 == 0) {
                    (**(code **)*pdVar27)(pdVar27);
                    LOCK();
                    piVar2 = (int *)((longlong)pdVar27 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)((longlong)*pdVar27 + 0x10))(pdVar27);
                    }
                  }
                }
                uStack_af0 = CONCAT44(uStack_af0._4_4_,local_b8);
                uVar34 = 1;
              }
              else {
LAB_1402f4632:
                dVar38 = *(double *)((longlong)dVar39 + 0x3f8);
                uVar34 = 0;
                if ((-(double)DAT_14cb1d020 < dVar38) && (dVar38 < (double)DAT_14cb1d020)) {
                  dVar40 = *(double *)((longlong)dVar39 + 0x400);
                  uVar34 = 0;
                  if ((-(double)DAT_14cb1d028 < dVar40) &&
                     (uVar34 = 0, dVar40 < (double)DAT_14cb1d028)) {
                    dVar41 = *(double *)((longlong)dVar39 + 0x408);
                    uVar34 = 0;
                    if ((-(double)DAT_14cb1d030 < dVar41) && (dVar41 < (double)DAT_14cb1d030)) {
                      iVar20 = _finite(dVar38);
                      if (((iVar20 != 0) && (iVar20 = _finite(dVar40), iVar20 != 0)) &&
                         (iVar20 = _finite(dVar41), iVar20 != 0)) {
                        dVar38 = (double)CONCAT53(uStack_ed,uStack_f1._1_3_) -
                                 *(double *)((longlong)dVar39 + 0x400);
                        dVar40 = (double)CONCAT17((undefined1)uStack_f1,
                                                  CONCAT43(uStack_f5,uStack_f8)) -
                                 *(double *)((longlong)dVar39 + 0x3f8);
                        if (((float)(dVar40 * dVar40 + dVar38 * dVar38) <=
                             *(float *)((longlong)dVar39 + 0x440) *
                             *(float *)((longlong)dVar39 + 0x440) + 0.01) &&
                           (ABS((float)((double)(float)(double)local_e8 -
                                       *(double *)((longlong)dVar39 + 0x408))) <=
                            *(float *)((longlong)dVar39 + 0x444) + 0.01)) goto LAB_1402f325f;
                      }
                      uVar34 = 0;
                    }
                  }
                }
              }
            }
            pdVar27 = pdStack_c0;
            if (pdStack_c0 != (double *)0x0) {
              LOCK();
              pdVar32 = pdStack_c0 + 1;
              *(int *)pdVar32 = *(int *)pdVar32 + -1;
              UNLOCK();
              if (*(int *)pdVar32 == 0) {
                (**(code **)*pdStack_c0)(pdStack_c0);
                LOCK();
                piVar2 = (int *)((longlong)pdVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)((longlong)*pdVar27 + 0x10))(pdVar27);
                }
              }
            }
            pdVar27 = pdStack_400;
            if (pdStack_400 != (double *)0x0) {
              LOCK();
              pdVar32 = pdStack_400 + 1;
              *(int *)pdVar32 = *(int *)pdVar32 + -1;
              UNLOCK();
              if (*(int *)pdVar32 == 0) {
                (**(code **)*pdStack_400)(pdStack_400);
                LOCK();
                piVar2 = (int *)((longlong)pdVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)((longlong)*pdVar27 + 0x10))(pdVar27);
                }
              }
            }
            if (plStack_ab0 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)plStack_ab0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plStack_ab0 + 0x10))();
              }
            }
            if ((cVar19 == '\0') || ((uVar34 & 1) == 0)) goto LAB_1402f2494;
          }
          else if (iVar20 == 2) {
            plStack_ab0._0_5_ = (uint5)(uint)plStack_ab0;
            uStack_a70 = param_2[1];
            uVar25 = param_2[3];
            uVar29 = *(undefined4 *)(*param_2 + 8);
            dStack_a80 = *(double *)(param_2[2] + 0x28);
            plStack_a78 = *(longlong **)(param_2[2] + 0x30);
            if (plStack_a78 == (longlong *)0x0) {
              plStack_a78 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)plStack_a78 + 0xc) = *(int *)((longlong)plStack_a78 + 0xc) + 1;
              UNLOCK();
            }
            local_a88 = (double)CONCAT44(local_a88._4_4_,uVar29);
            pdStack_a90 = *(double **)(uVar25 + 0x118);
            local_ab8 = *(longlong **)(uVar34 + 0x1ab8);
            local_ac8 = *(longlong **)(uVar34 + 0x1aa8);
            plStack_ac0 = *(longlong **)(uVar34 + 0x1ab0);
            local_448 = (longlong *)0xffffffffffffffff;
            plStack_440 = (longlong *)((ulonglong)plStack_440 & 0xffffffff00000000);
            local_438[0] = DAT_14cb1d020;
            local_438[1] = DAT_14cb1d028;
            local_428 = DAT_14cb1d030;
            plStack_420 = DAT_14cb1d020;
            local_418 = DAT_14cb1d028;
            plStack_410 = DAT_14cb1d030;
            local_408 = (longlong *)0x0;
            pdStack_400 = (double *)0x0;
            local_3f8 = -1;
            dStack_aa8 = local_ae8;
            dStack_aa0 = dStack_ae0;
            uStack_a98 = local_ad8;
            iVar20 = FUN_140855e2d(&local_ac8,&local_448,0);
            pdVar32 = pdStack_400;
            pdVar27 = pdStack_af8;
            if (iVar20 != 0) {
              if (pdStack_400 != (double *)0x0) {
                LOCK();
                pdVar27 = pdStack_400 + 1;
                *(int *)pdVar27 = *(int *)pdVar27 + -1;
                UNLOCK();
                if (*(int *)pdVar27 == 0) {
                  (**(code **)*pdStack_400)(pdStack_400);
                  LOCK();
                  piVar2 = (int *)((longlong)pdVar32 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)((longlong)*pdVar32 + 0x10))(pdVar32);
                  }
                }
              }
              if (plStack_a78 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)plStack_a78 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plStack_a78 + 0x10))();
                }
              }
              goto LAB_1402f2494;
            }
            local_b38 = CONCAT44(local_b38._4_4_,(int)plStack_440);
            local_b40 = local_448;
            local_b10 = local_418;
            uStack_b08 = plStack_410;
            uStack_b20 = local_428;
            uStack_b18 = plStack_420;
            plStack_b30 = local_438[0];
            plStack_b28 = local_438[1];
            if (pdStack_400 != (double *)0x0) {
              LOCK();
              *(int *)(pdStack_400 + 1) = *(int *)(pdStack_400 + 1) + 1;
              UNLOCK();
            }
            local_b00 = local_408;
            pdStack_af8 = pdStack_400;
            if (pdVar27 != (double *)0x0) {
              LOCK();
              pdVar32 = pdVar27 + 1;
              *(int *)pdVar32 = *(int *)pdVar32 + -1;
              UNLOCK();
              if (*(int *)pdVar32 == 0) {
                (**(code **)*pdVar27)(pdVar27);
                LOCK();
                piVar2 = (int *)((longlong)pdVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)((longlong)*pdVar27 + 0x10))(pdVar27);
                }
              }
            }
            pdVar27 = pdStack_400;
            uStack_af0 = CONCAT44(uStack_af0._4_4_,local_3f8);
            if (pdStack_400 != (double *)0x0) {
              LOCK();
              pdVar32 = pdStack_400 + 1;
              *(int *)pdVar32 = *(int *)pdVar32 + -1;
              UNLOCK();
              if (*(int *)pdVar32 == 0) {
                (**(code **)*pdStack_400)(pdStack_400);
                LOCK();
                piVar2 = (int *)((longlong)pdVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)((longlong)*pdVar27 + 0x10))(pdVar27);
                }
              }
            }
            if (plStack_a78 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)plStack_a78 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plStack_a78 + 0x10))();
              }
            }
          }
        }
        else {
          dVar42 = *(double *)(uVar25 + 0xd0);
          dVar43 = *(double *)(uVar25 + 0xd8);
          dVar5 = *(double *)(uVar25 + 0xe0);
          fVar37 = *(float *)(uVar25 + 0x11c);
          iVar23 = _finite(dVar38);
          if (((iVar23 == 0) || (iVar23 = _finite(dVar40), iVar23 == 0)) ||
             ((iVar23 = _finite(dVar41), iVar23 == 0 ||
              ((dVar43 = dVar43 - *(double *)((longlong)dVar39 + 0x400),
               dVar42 = dVar42 - *(double *)((longlong)dVar39 + 0x3f8),
               *(float *)((longlong)dVar39 + 0x440) * *(float *)((longlong)dVar39 + 0x440) + 0.01 <
               (float)(dVar42 * dVar42 + dVar43 * dVar43) ||
               (*(float *)((longlong)dVar39 + 0x444) + 0.01 <
                ABS((float)((double)(float)(dVar5 - (double)fVar37) -
                           *(double *)((longlong)dVar39 + 0x408))))))))) goto LAB_1402f2f5e;
        }
        FUN_1402f511c(puVar4);
        dVar39 = local_b48;
        *(int *)(local_b60 + 1) = (int)local_b38;
        *local_b60 = (double)local_b40;
        *(undefined4 *)(local_b68 + 4) = (undefined4)local_b10;
        *(undefined4 *)((longlong)local_b68 + 0x24) = local_b10._4_4_;
        *(undefined4 *)(local_b68 + 5) = (undefined4)uStack_b08;
        *(undefined4 *)((longlong)local_b68 + 0x2c) = uStack_b08._4_4_;
        *(undefined4 *)(local_b68 + 2) = (undefined4)uStack_b20;
        *(undefined4 *)((longlong)local_b68 + 0x14) = uStack_b20._4_4_;
        *(undefined4 *)(local_b68 + 3) = (undefined4)uStack_b18;
        *(undefined4 *)((longlong)local_b68 + 0x1c) = uStack_b18._4_4_;
        *local_b68 = (double)plStack_b30;
        local_b68[1] = (double)plStack_b28;
        if (pdStack_af8 != (double *)0x0) {
          LOCK();
          *(int *)(pdStack_af8 + 1) = *(int *)(pdStack_af8 + 1) + 1;
          UNLOCK();
        }
        plVar7 = *(longlong **)(param_1 + 0x728);
        *(longlong **)(param_1 + 0x720) = local_b00;
        *(double **)(param_1 + 0x728) = pdStack_af8;
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
        *(undefined4 *)(param_1 + 0x730) = (undefined4)uStack_af0;
        uVar28 = *local_b50;
        uVar16 = local_b50[1];
        uVar29 = *(undefined4 *)(local_b50 + 2);
        uVar10 = *(undefined4 *)((longlong)local_b50 + 0x14);
        uVar11 = *(undefined4 *)(local_b50 + 3);
        uVar12 = *(undefined4 *)((longlong)local_b50 + 0x1c);
        uVar13 = *(undefined4 *)((longlong)local_b50 + 0x24);
        uVar14 = *(undefined4 *)(local_b50 + 5);
        uVar15 = *(undefined4 *)((longlong)local_b50 + 0x2c);
        *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(local_b50 + 4);
        *(undefined4 *)(param_1 + 0x6b4) = uVar13;
        *(undefined4 *)(param_1 + 0x6b8) = uVar14;
        *(undefined4 *)(param_1 + 0x6bc) = uVar15;
        *(undefined4 *)(param_1 + 0x6a0) = uVar29;
        *(undefined4 *)(param_1 + 0x6a4) = uVar10;
        *(undefined4 *)(param_1 + 0x6a8) = uVar11;
        *(undefined4 *)(param_1 + 0x6ac) = uVar12;
        *puVar4 = uVar28;
        *(undefined8 *)(param_1 + 0x698) = uVar16;
        uVar28 = *(undefined8 *)((longlong)dVar39 + 0x428);
        lVar26 = *(longlong *)((longlong)dVar39 + 0x430);
        if (lVar26 != 0) {
          LOCK();
          *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
          UNLOCK();
        }
        plVar7 = *(longlong **)(param_1 + 0x6c8);
        *(undefined8 *)(param_1 + 0x6c0) = uVar28;
        *(longlong *)(param_1 + 0x6c8) = lVar26;
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
        *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)((longlong)dVar39 + 0x438);
        *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)((longlong)dVar39 + 0x440);
        uVar22 = *(uint *)(*param_2 + 8);
        if (pdStack_af8 != (double *)0x0) {
          LOCK();
          *(int *)(pdStack_af8 + 1) = *(int *)(pdStack_af8 + 1) + 1;
          UNLOCK();
        }
        local_108._3_1_ = (undefined1)DAT_14c8464e0;
        iStack_104 = (int)((ulonglong)DAT_14c8464e0 >> 8);
        uStack_100._0_3_ = (undefined3)((ulonglong)DAT_14c8464e0 >> 0x28);
        uStack_100._3_1_ = (undefined1)DAT_14c8464e8;
        uStack_fc = (undefined4)((ulonglong)DAT_14c8464e8 >> 8);
        uStack_f8 = (undefined3)((ulonglong)DAT_14c8464e8 >> 0x28);
        uStack_f5 = (undefined4)DAT_14c8464f0;
        uStack_f1 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        plStack_420 = uStack_b08;
        plVar1 = plStack_420;
        local_428 = local_b10;
        plVar7 = local_428;
        local_438[1] = uStack_b18;
        local_438[0] = uStack_b20;
        plStack_440 = plStack_b28;
        local_448 = plStack_b30;
        local_870 = '\0';
        local_888 = '\0';
        local_8e0 = 0x400000001;
        local_8e8 = 0;
        local_428._0_4_ = SUB84(local_b10,0);
        plStack_420._0_4_ = SUB84(uStack_b08,0);
                    /* WARNING: Ignoring partial resolution of indirect */
        dStack_aa8._0_4_ = local_428._0_4_;
        dStack_aa0._0_4_ = plStack_420._0_4_;
        local_ab8 = uStack_b20;
        plStack_ab0 = uStack_b18;
        local_ac8 = plStack_b30;
        plStack_ac0 = plStack_b28;
        uStack_a98 = local_b00;
        pdStack_a90 = pdStack_af8;
                    /* WARNING: Ignoring partial resolution of indirect */
        local_a88._0_4_ = (undefined4)uStack_af0;
        dStack_a80 = -NAN;
                    /* WARNING: Ignoring partial resolution of indirect */
        plStack_a78._0_4_ = 0xffffffff;
        local_a60 = (undefined4)DAT_14c8464e8;
                    /* WARNING: Ignoring partial resolution of indirect */
        local_a58._0_4_ = uStack_f5;
        dVar39 = *param_3;
        local_428 = plVar7;
        plStack_420 = plVar1;
        if ((undefined1 *)((longlong)dVar39 + 0x3f8) != local_8d8) {
          FUN_1402faf4a(local_8d8);
          dVar39 = *param_3;
        }
        uVar6 = *(undefined1 *)((longlong)dVar39 + 0xc1);
        lVar26 = *(longlong *)((longlong)dVar39 + 200);
        if ((lVar26 != 0) && ((longlong *)((longlong)dVar39 + 200) != &local_880)) {
          local_880 = lVar26;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c();
          }
          local_878 = *(undefined4 *)((longlong)dVar39 + 0xd0);
          local_870 = '\x01';
        }
        lVar26 = local_b70;
        cVar19 = FUN_1402f8346(local_b70,&local_ac8);
        if (cVar19 == '\0') {
          FUN_1402f542c(lVar26,9);
          FUN_1402f5dea(lVar26,&local_ac8);
          FUN_1402faef2(param_1 + 0x1468,local_8d8);
          FUN_1402f53d2(param_1 + 0x14c0,&local_880);
          *(bool *)(param_1 + 0x1928) = 0x14 < uVar22;
          FUN_1402fd97c(lVar26,param_2,lVar26);
        }
        FUN_1402fb194(lVar26,param_2);
        FUN_1402fa97a(lVar26,&local_448,uVar6);
        if (local_870 == '\x01') {
          local_870 = '\0';
        }
        if (local_888 == '\x01') {
          if (local_8a0 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_8a0 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_8a0)(local_8a0);
              LOCK();
              piVar2 = (int *)((longlong)local_8a0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_8a0 + 0x10))(local_8a0);
              }
            }
          }
          local_888 = '\0';
        }
        FUN_1402f4baa(&local_ac8);
LAB_1402f2891:
        local_7a0 = 0xff;
        FUN_1449496c6(&local_ac8,&local_448);
        local_798 = local_118;
        local_790 = 1;
        FUN_1449493b2(&local_448);
      }
      pdVar27 = pdStack_af8;
      if (pdStack_af8 != (double *)0x0) {
        LOCK();
        pdVar32 = pdStack_af8 + 1;
        *(int *)pdVar32 = *(int *)pdVar32 + -1;
        UNLOCK();
        if (*(int *)pdVar32 == 0) {
          (**(code **)*pdStack_af8)(pdStack_af8);
          LOCK();
          piVar2 = (int *)((longlong)pdVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)((longlong)*pdVar27 + 0x10))(pdVar27);
          }
        }
      }
      if (local_790 == 1) {
        if (local_450 != 0) {
          FUN_1449493b2(local_788);
        }
        local_460 = -1;
        FUN_1449496c6(local_788,&local_ac8);
        local_458 = local_798;
        local_450 = 1;
      }
      else if (local_450 != 0) {
        FUN_1449493b2(local_788);
        local_450 = 0;
      }
      if ((local_790 & 1) != 0) {
        FUN_1449493b2(&local_ac8);
      }
      if (((((local_450 & 1) != 0) && (local_460 == '\x03')) && (dVar39 = *param_3, dVar39 != 0.0))
         && ((longlong *)((longlong)dVar39 + 200) != &local_478)) {
        local_478 = *(longlong *)((longlong)dVar39 + 200);
        if ((local_478 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_470 = *(undefined4 *)((longlong)dVar39 + 0xd0);
        local_468 = 1;
      }
    }
    else if (*(char *)(param_3 + 0x24) == '\x02') {
      uVar34 = *param_2;
      local_448 = (longlong *)*param_3;
      plStack_440 = (longlong *)param_3[1];
      pdVar27 = param_3 + 2;
      pplVar31 = local_438;
      for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
        *pplVar31 = (longlong *)*pdVar27;
        pdVar27 = pdVar27 + 1;
        pplVar31 = pplVar31 + 1;
      }
      local_3d8 = param_3[0xe];
      local_3d0 = (longlong *)param_3[0xf];
      if (local_3d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3d0 + 1) = (int)local_3d0[1] + 1;
        UNLOCK();
      }
      local_3c8 = *(undefined4 *)(param_3 + 0x10);
      pdVar27 = param_3 + 0x11;
      pdVar32 = local_3c0;
      for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
        *pdVar32 = *pdVar27;
        pdVar27 = pdVar27 + 1;
        pdVar32 = pdVar32 + 1;
      }
      local_360 = param_3[0x1d];
      local_358 = (longlong *)param_3[0x1e];
      if (local_358 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_358 + 1) = (int)local_358[1] + 1;
        UNLOCK();
      }
      local_350 = *(undefined4 *)(param_3 + 0x1f);
      local_348 = param_3[0x20];
      uStack_33b = *(undefined4 *)((longlong)param_3 + 0x10d);
      uStack_337 = *(undefined4 *)((longlong)param_3 + 0x111);
      uStack_333 = *(undefined4 *)((longlong)param_3 + 0x115);
      uStack_32f = *(undefined4 *)((longlong)param_3 + 0x119);
      uStack_340 = SUB85(param_3[0x21],0);
      FUN_1402fd00a(local_438,uVar34 + 0x1ad8);
      FUN_1402fd00a(local_3c0,uVar34 + 0x1ad8);
      local_7a0 = 0xff;
      FUN_1402fa56e(&local_ac8,&local_448);
      local_798 = 0;
      FUN_1402f4fc8(local_788,&local_ac8);
      FUN_1449493b2(&local_ac8);
      plVar7 = local_358;
      if (local_358 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_358 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_358)(local_358);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = local_3d0;
      if (local_3d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_3d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_3d0)(local_3d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      local_7a0 = 0xff;
      FUN_1449493b2(&local_ac8);
      local_ac8 = (longlong *)*param_3;
      plStack_ac0 = (longlong *)param_3[1];
      local_ab8 = (longlong *)param_3[2];
      plStack_ab0 = (longlong *)param_3[3];
      local_7a0 = 0;
      local_798 = 0;
      FUN_1402f4fc8(local_788,&local_ac8);
      FUN_1449493b2(&local_ac8);
    }
  }
  FUN_1402f4ca6(param_2,local_788,param_1 + 0x1270);
  FUN_1449496c6(param_1 + 0x350,local_788);
  *(undefined1 *)(param_1 + 0x680) = local_458;
  FUN_144949ce0(param_1 + 0x740,param_2,param_1 + 0x350,*(undefined1 *)(param_1 + 0x1275));
LAB_1402f2aa0:
  if (local_450 == 1) {
    FUN_1449493b2(local_788);
  }
  if ((local_b0 ^ (ulonglong)auStack_ba8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402f4baa FUN_1402f4baa body=61 status=ok
// SIG undefined FUN_1402f4baa(void)

void FUN_1402f4baa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    lVar1 = param_1;
  }
  FUN_14494a737(lVar1,*(undefined4 *)(param_1 + 0x1e8));
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402f4be8 FUN_1402f4be8 body=190 status=ok
// SIG undefined FUN_1402f4be8(void)

undefined8 FUN_1402f4be8(double *param_1)

{
  double _X;
  double _X_00;
  double _X_01;
  int iVar1;
  undefined4 extraout_var;
  
  _X = *param_1;
  if (((((-DAT_14cb1c860 < _X) && (_X < DAT_14cb1c860)) &&
       (_X_00 = param_1[1], -DAT_14cb1c868 < _X_00)) &&
      ((_X_00 < DAT_14cb1c868 && (_X_01 = param_1[2], -DAT_14cb1c870 < _X_01)))) &&
     ((_X_01 < DAT_14cb1c870 &&
      ((iVar1 = _finite(_X), iVar1 != 0 && (iVar1 = _finite(_X_00), iVar1 != 0)))))) {
    iVar1 = _finite(_X_01);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != 0);
  }
  return 0;
}



// FUNCTION 1402f4ca6 FUN_1402f4ca6 body=801 status=ok
// SIG undefined FUN_1402f4ca6(void)

void FUN_1402f4ca6(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_3d8 [32];
  double local_3b8;
  double local_3b0;
  double local_3a8;
  undefined4 local_3a0;
  undefined1 local_90;
  char local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *(undefined1 *)((longlong)param_3 + 5) = 0;
  if (*(char *)(param_2 + 0x338) == '\x01') {
    *param_3 = 3.4028235e+38;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 0x330);
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 1) == '\0') {
      *param_3 = 3.4028235e+38;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar3 = *(longlong *)(param_1 + 0x18);
      dVar5 = (double)FUN_144719204(*(undefined8 *)(lVar3 + 0x30),0);
      dVar6 = (double)FUN_144719204(*(undefined8 *)(lVar3 + 0x38),0);
      dVar7 = sin(dVar5 * 0.017453292519943295);
      dVar5 = cos(dVar5 * 0.017453292519943295);
      dVar8 = sin(dVar6 * 0.017453292519943295);
      dVar6 = cos(dVar6 * 0.017453292519943295);
      local_90 = 0xff;
      FUN_1449493b2(&local_3b8);
      local_3a0 = 0;
      local_88 = '\x01';
      local_3b8 = dVar6 * dVar5;
      local_3b0 = dVar8 * dVar5;
      local_3a8 = dVar7;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x2c);
      fVar9 = *param_3;
      if ((fVar9 == 3.4028235e+38) && (!NAN(fVar9))) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
        if (lVar3 == 0) {
          fVar9 = 100.0;
        }
        else {
          fVar9 = *(float *)(lVar3 + 0x60);
        }
        *(bool *)((longlong)param_3 + 6) = fVar9 < *(float *)(*(longlong *)(param_1 + 0x18) + 0x48);
        *param_3 = fVar1;
        fVar9 = fVar1;
      }
      cVar2 = *(char *)(param_3 + 1);
      if ((cVar2 == '\0') && (*(char *)((longlong)param_3 + 6) == '\x01')) {
        bVar4 = false;
        if ((**(char **)(param_1 + 0x10) == '\0') && (0.0 < fVar9)) {
          bVar4 = fVar1 - fVar9 < 0.5;
        }
      }
      else {
        bVar4 = false;
      }
      *(bool *)((longlong)param_3 + 5) = bVar4;
      lVar3 = *(longlong *)(param_1 + 0x18);
      dVar5 = (double)FUN_144719204(*(undefined8 *)(lVar3 + 0x30),0);
      dVar6 = (double)FUN_144719204(*(undefined8 *)(lVar3 + 0x38),0);
      dVar7 = sin(dVar5 * 0.017453292519943295);
      dVar5 = cos(dVar5 * 0.017453292519943295);
      dVar8 = sin(dVar6 * 0.017453292519943295);
      dVar6 = cos(dVar6 * 0.017453292519943295);
      if (bVar4 == false) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x3f800000;
      }
      local_90 = 0xff;
      FUN_1449493b2(&local_3b8);
      local_3b8 = dVar6 * dVar5;
      local_3b0 = dVar8 * dVar5;
      local_3a8 = dVar7;
      local_3a0 = uVar10;
      local_88 = cVar2;
    }
    local_90 = 0;
    FUN_1402f4fc8(param_2,&local_3b8);
    FUN_1449493b2(&local_3b8);
  }
  if ((local_80 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402f4fc8 FUN_1402f4fc8 body=83 status=ok
// SIG undefined FUN_1402f4fc8(void)

longlong FUN_1402f4fc8(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x338) == '\x01') {
      FUN_1449493b2(param_1);
    }
    *(undefined1 *)(param_1 + 0x328) = 0xff;
    FUN_1449496c6(param_1,param_2);
    *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x330);
    *(undefined1 *)(param_1 + 0x338) = 1;
  }
  return param_1;
}



// FUNCTION 1402f501c FUN_1402f501c body=256 status=ok
// SIG undefined FUN_1402f501c(void)

ulonglong FUN_1402f501c(longlong param_1)

{
  double _X;
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x170) - 1U < 2) {
      if ((*(int *)(param_1 + 0x168) == -1) || (*(int *)(param_1 + 0x16c) == -1))
      goto LAB_1402f5109;
    }
    else if (*(int *)(param_1 + 0x170) != 3) goto LAB_1402f5109;
    _X = *(double *)(param_1 + 0x178);
    if ((((-DAT_14cb1d020 < _X) &&
         (((_X < DAT_14cb1d020 && (-DAT_14cb1d028 < *(double *)(param_1 + 0x180))) &&
          (*(double *)(param_1 + 0x180) < DAT_14cb1d028)))) &&
        (((-DAT_14cb1d030 < *(double *)(param_1 + 0x188) &&
          (*(double *)(param_1 + 0x188) < DAT_14cb1d030)) && (iVar1 = _finite(_X), iVar1 != 0)))) &&
       (iVar1 = _finite(*(double *)(param_1 + 0x180)), iVar1 != 0)) {
      iVar1 = _finite(*(double *)(param_1 + 0x188));
      uVar2 = CONCAT71(uVar3,iVar1 == 0);
    }
  }
LAB_1402f5109:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1402f511c FUN_1402f511c body=452 status=ok
// SIG undefined FUN_1402f511c(void)

void FUN_1402f511c(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar9 = DAT_14cb1d030;
  uVar7 = DAT_14cb1d028._4_4_;
  uVar6 = (undefined4)DAT_14cb1d028;
  uVar5 = DAT_14cb1d020._4_4_;
  uVar4 = DAT_14cb1c870;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14cb1d030;
  local_48 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  uStack_40 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  local_20 = DAT_14cb1c870;
  local_30 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  uStack_28 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  *param_1 = (undefined4)DAT_14cb1d020;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *(undefined8 *)(param_1 + 8) = uStack_28;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar9;
  *(undefined8 *)(param_1 + 6) = local_30;
  *(undefined8 *)(param_1 + 0xc) = 0;
  plVar3 = *(longlong **)(param_1 + 0xe);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe) = 0;
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
  param_1[0x10] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar4 = DAT_14cb1d030;
  uVar8 = DAT_14cb1d028._4_4_;
  uVar7 = (undefined4)DAT_14cb1d028;
  uVar6 = DAT_14cb1d020._4_4_;
  uVar5 = (undefined4)DAT_14cb1d020;
  plVar3 = *(longlong **)(param_1 + 0x26);
  local_38 = DAT_14cb1d030;
  local_48 = CONCAT44(DAT_14cb1d020._4_4_,(undefined4)DAT_14cb1d020);
  uStack_40 = CONCAT44(DAT_14cb1d028._4_4_,(undefined4)DAT_14cb1d028);
  local_20 = DAT_14cb1d030;
  *(undefined8 *)(param_1 + 0x14) = 0xffffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  param_1[0x1a] = uVar7;
  param_1[0x1b] = uVar8;
  *(undefined8 *)(param_1 + 0x1c) = uVar4;
  *(undefined8 *)(param_1 + 0x1e) = local_48;
  *(undefined8 *)(param_1 + 0x20) = uStack_40;
  *(undefined8 *)(param_1 + 0x22) = uVar4;
  *(undefined8 *)(param_1 + 0x24) = 0;
  local_30 = local_48;
  uStack_28 = uStack_40;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x26) = 0;
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
  param_1[0x28] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x2a) == 0) {
    if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *(undefined8 *)(param_1 + 0x2a) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 1402f52f6 FUN_1402f52f6 body=213 status=ok
// SIG undefined FUN_1402f52f6(void)

undefined8 FUN_1402f52f6(longlong param_1)

{
  double _X;
  double _X_00;
  double _X_01;
  int iVar1;
  undefined4 extraout_var;
  
  _X = *(double *)(param_1 + 0x58);
  if (((((-DAT_14cb1c860 < _X) && (_X < DAT_14cb1c860)) &&
       (_X_00 = *(double *)(param_1 + 0x60), -DAT_14cb1c868 < _X_00)) &&
      ((_X_00 < DAT_14cb1c868 && (_X_01 = *(double *)(param_1 + 0x68), -DAT_14cb1c870 < _X_01)))) &&
     ((_X_01 < DAT_14cb1c870 &&
      ((iVar1 = _finite(_X), iVar1 != 0 && (iVar1 = _finite(_X_00), iVar1 != 0)))))) {
    iVar1 = _finite(_X_01);
    if (iVar1 != 0) {
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),*(int *)(param_1 + 0x110) != -1);
    }
  }
  return 0;
}



// FUNCTION 1402f53d2 FUN_1402f53d2 body=90 status=ok
// SIG undefined FUN_1402f53d2(void)

longlong * FUN_1402f53d2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1) {
    if ((char)param_2[2] == '\x01') {
      lVar1 = *param_2;
      *param_1 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else if ((char)param_1[2] == '\x01') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1402f542c FUN_1402f542c body=515 status=ok
// SIG undefined FUN_1402f542c(void)

void FUN_1402f542c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x6b4) = param_2;
  if (*(int *)(param_1 + 0x1ec) < 0) {
    FUN_147e6bc96(param_1,0);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1e0);
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar5 = param_1;
    }
    FUN_14494a737(lVar5,*(undefined4 *)(param_1 + 0x1e8));
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if (*(char *)(param_1 + 0x240) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x228);
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
    *(undefined1 *)(param_1 + 0x240) = 0;
  }
  if (*(char *)(param_1 + 600) == '\x01') {
    *(undefined1 *)(param_1 + 600) = 0;
  }
  bVar4 = *(byte *)(param_1 + 0x518);
  if ((bVar4 == 1) && (*(int *)(param_1 + 0x490) == 5)) {
    FUN_1402f5630(param_1 + 0x260,param_1 + 0x3c0);
    bVar4 = *(byte *)(param_1 + 0x518);
  }
  if ((bVar4 & 1) != 0) {
    if (*(char *)(param_1 + 0x510) == '\x01') {
      *(undefined1 *)(param_1 + 0x510) = 0;
    }
    plVar3 = *(longlong **)(param_1 + 0x470);
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
    *(undefined1 *)(param_1 + 0x518) = 0;
  }
  if (*(char *)(param_1 + 0x678) == '\x01') {
    if (*(char *)(param_1 + 0x670) == '\x01') {
      *(undefined1 *)(param_1 + 0x670) = 0;
    }
    plVar3 = *(longlong **)(param_1 + 0x5d0);
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
    *(undefined1 *)(param_1 + 0x678) = 0;
  }
  if (*(char *)(param_1 + 0x6a4) == '\x01') {
    *(undefined1 *)(param_1 + 0x6a4) = 0;
  }
  *(undefined8 *)(param_1 + 0x6a8) = 0xbf800000bf800000;
  *(undefined2 *)(param_1 + 0x6b0) = 0;
  if (*(char *)(param_1 + 0x698) == '\x01') {
    *(undefined1 *)(param_1 + 0x698) = 0;
  }
  return;
}



// FUNCTION 1402f5630 FUN_1402f5630 body=415 status=ok
// SIG undefined FUN_1402f5630(void)

undefined8 * FUN_1402f5630(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (*(char *)(param_1 + 0x2b) == '\x01') {
    if (*(char *)(param_1 + 0x2a) == '\x01') {
      *(undefined1 *)(param_1 + 0x2a) = 0;
    }
    plVar4 = (longlong *)param_1[0x16];
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
  }
  puVar11 = param_2;
  puVar12 = param_1;
  for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  uVar5 = param_2[0xf];
  uVar6 = param_2[0x10];
  uVar7 = param_2[0x11];
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar9;
  param_1[0x11] = uVar7;
  param_1[0x12] = uVar8;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar6;
  param_1[0x15] = param_2[0x15];
  lVar10 = param_2[0x16];
  param_1[0x16] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  uVar5 = param_2[0x18];
  uVar6 = param_2[0x19];
  uVar7 = param_2[0x1a];
  uVar8 = param_2[0x1b];
  uVar9 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar9;
  param_1[0x1a] = uVar7;
  param_1[0x1b] = uVar8;
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xf7);
  param_1[0x1e] = param_2[0x1e];
  uVar5 = param_2[0x20];
  uVar6 = param_2[0x21];
  uVar7 = param_2[0x22];
  uVar8 = param_2[0x23];
  uVar9 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar9;
  param_1[0x20] = uVar5;
  param_1[0x21] = uVar6;
  param_1[0x22] = uVar7;
  param_1[0x23] = uVar8;
  param_1[0x26] = param_2[0x26];
  cVar3 = *(char *)(param_2 + 0x2a);
  *(char *)(param_1 + 0x2a) = cVar3;
  if (cVar3 == '\x01') {
    param_1[0x29] = param_2[0x29];
    uVar5 = param_2[0x28];
    param_1[0x27] = param_2[0x27];
    param_1[0x28] = uVar5;
  }
  *(undefined1 *)(param_1 + 0x2b) = 1;
  return param_1;
}



// FUNCTION 1402f57d0 FUN_1402f57d0 body=517 status=ok
// SIG undefined FUN_1402f57d0(void)

bool FUN_1402f57d0(longlong param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar2 = DAT_14cb1d110;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
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
  if (((*(int *)(lVar2 + uVar5 * 4) == 1) && (*(char *)((longlong)param_2 + 0xfa) == '\x01')) &&
     ((*(char *)((longlong)param_2 + 0xf9) == '\x01' && (2 < *(int *)(param_2 + 0x1a) - 4U)))) {
    dVar9 = param_2[0xb] - param_2[0x11];
    dVar11 = param_2[0x11] - param_2[2];
    dVar10 = param_2[10] - param_2[0x10];
    dVar12 = param_2[0x10] - param_2[1];
    dVar13 = param_2[9] - param_2[0xf];
    dVar6 = param_2[0xf] - *param_2;
    dVar8 = 1.0 / SQRT(dVar11 * dVar11 + dVar6 * dVar6 + dVar12 * dVar12);
    dVar7 = 1.0 / SQRT(dVar9 * dVar9 + dVar13 * dVar13 + dVar10 * dVar10);
    dVar6 = dVar7 * dVar13 * dVar8 * dVar6 + dVar10 * dVar7 * dVar12 * dVar8 +
            dVar9 * dVar7 * dVar11 * dVar8;
    dVar8 = dVar6;
    if (1.0 <= dVar6) {
      dVar8 = 1.0;
    }
    dVar8 = acos((double)(-(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar8));
    if ((float)dVar8 * 57.295776 < 90.0) {
      return 5.0 <= ABS(*(float *)(param_1 + 0x34) - *(float *)((longlong)param_2 + 0xcc));
    }
  }
  return false;
}



// FUNCTION 1402f59d6 FUN_1402f59d6 body=720 status=ok
// SIG undefined FUN_1402f59d6(void)

void FUN_1402f59d6(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (param_2[2] - 1U < 2) {
    if ((*param_2 == -1) || (param_2[1] == -1)) goto LAB_1402f5c82;
  }
  else if (param_2[2] != 3) goto LAB_1402f5c82;
  dVar10 = *(double *)(param_2 + 4);
  if ((-DAT_14cb1d020 < dVar10) && (dVar10 < DAT_14cb1d020)) {
    if ((-DAT_14cb1d028 < *(double *)(param_2 + 6)) && (*(double *)(param_2 + 6) < DAT_14cb1d028)) {
      if ((-DAT_14cb1d030 < *(double *)(param_2 + 8)) && (*(double *)(param_2 + 8) < DAT_14cb1d030))
      {
        iVar7 = _finite(dVar10);
        if (iVar7 != 0) {
          iVar7 = _finite(*(double *)(param_2 + 6));
          if (iVar7 != 0) {
            iVar7 = _finite(*(double *)(param_2 + 8));
            if (iVar7 != 0) {
              iVar7 = *(int *)(param_1 + 0x228);
              if (iVar7 < *(int *)(param_1 + 0x218) + -1) {
                lVar2 = *(longlong *)(param_1 + 0x210);
                lVar8 = (longlong)iVar7 * 0x78;
                lVar1 = lVar2 + lVar8;
                dVar10 = *(double *)(lVar2 + 0x10 + lVar8) - *(double *)(param_2 + 8);
                dVar12 = *(double *)(lVar2 + 8 + lVar8) - *(double *)(param_2 + 6);
                dVar11 = *(double *)(lVar2 + lVar8) - *(double *)(param_2 + 4);
                dVar13 = dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12;
                if (9.99999993922529e-09 < dVar13) {
                  dVar4 = 1.0 / SQRT(dVar13);
                  dVar11 = dVar11 * dVar4;
                  dVar12 = dVar12 * dVar4;
                  dVar10 = dVar10 * dVar4;
                }
                dVar4 = *(double *)(lVar1 + 0x88) - *(double *)(param_2 + 8);
                dVar5 = *(double *)(lVar1 + 0x80) - *(double *)(param_2 + 6);
                dVar3 = *(double *)(lVar1 + 0x78) - *(double *)(param_2 + 4);
                dVar14 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
                if (9.99999993922529e-09 < dVar14) {
                  dVar6 = 1.0 / SQRT(dVar14);
                  dVar3 = dVar3 * dVar6;
                  dVar5 = dVar5 * dVar6;
                  dVar4 = dVar4 * dVar6;
                }
                if (((((float)dVar14 < (float)dVar13) ||
                     (dVar10 * dVar4 + dVar11 * dVar3 + dVar12 * dVar5 < 0.0)) ||
                    ((*(float *)(lVar1 + 0x54) <= 0.1 && *(float *)(lVar1 + 0x54) != 0.1 &&
                     (fVar9 = *(float *)(param_1 + 0x118) * 0.5, (float)dVar13 < fVar9 * fVar9))))
                   && (*(int *)(param_1 + 0x228) = iVar7 + 1, *(char *)(param_1 + 0x260) == '\x01'))
                {
                  *(undefined1 *)(param_1 + 0x260) = 0;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_1402f5c82:
  FUN_1402fa886(param_1);
  return;
}



// FUNCTION 1402f5ca6 FUN_1402f5ca6 body=323 status=ok
// SIG undefined FUN_1402f5ca6(void)

bool FUN_1402f5ca6(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  LPVOID pvVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = *(longlong *)(param_1 + 0x598);
  if (DAT_14cb1d000 == 0) {
LAB_1402f5dda:
    bVar5 = false;
  }
  else {
    pvVar6 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar6 + 1));
    if ((int)pvVar6 != 0) goto LAB_1402f5dda;
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x250));
    bVar5 = true;
  }
  bVar7 = false;
  if (*(longlong *)(lVar3 + 0x78) != 0) {
    uVar1 = *param_2;
    if (-1 < (int)uVar1) {
      uVar2 = param_2[1];
      if (-1 < (int)uVar2) {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x78) + 0x140);
        if (((lVar4 != 0) && ((int)uVar1 < *(int *)(lVar4 + 0x40))) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + (ulonglong)uVar1 * 0x120),
           lVar4 != 0)) {
          lVar4 = *(longlong *)(lVar4 + 0x20);
          bVar7 = false;
          if ((lVar4 == 0) || (*(int *)(lVar4 + 0xd8) + *(int *)(lVar4 + 0x20) <= (int)uVar2))
          goto LAB_1402f5d9b;
          if (((int)uVar2 < *(int *)(lVar4 + 0x170)) &&
             ((*(int *)(lVar4 + 0x108) == 0 ||
              ((*(byte *)(*(longlong *)(lVar4 + 0x100) + (ulonglong)uVar2) & 1) == 0)))) {
            bVar7 = *(int *)(*(longlong *)(lVar4 + 0x168) + (ulonglong)uVar2 * 4) != -3;
            goto LAB_1402f5d9b;
          }
        }
        bVar7 = false;
      }
    }
  }
LAB_1402f5d9b:
  if (bVar5) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar6 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar6 + -1));
  }
  return bVar7;
}



// FUNCTION 1402f5dea FUN_1402f5dea body=88 status=ok
// SIG undefined FUN_1402f5dea(void)

longlong FUN_1402f5dea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar1 = param_1;
    }
    FUN_14494a737(lVar1,*(undefined4 *)(param_1 + 0x1e8));
    lVar1 = *(longlong *)(param_2 + 0x1e0);
    if (*(longlong *)(param_2 + 0x1e0) == 0) {
      lVar1 = param_2;
    }
    FUN_140105d28(param_1,lVar1,*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec));
  }
  return param_1;
}



// FUNCTION 1402f5e42 FUN_1402f5e42 body=9474 status=ok
// SIG undefined FUN_1402f5e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f5e42(longlong param_1,longlong *param_2,double *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  double *pdVar9;
  ulonglong uVar10;
  double *pdVar11;
  int iVar12;
  longlong *plVar13;
  undefined7 uVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  undefined1 local_480;
  undefined1 local_478;
  undefined4 *local_470;
  uint local_45c;
  double local_458;
  float local_44c;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  undefined4 *local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  longlong *local_3e0;
  float local_3d8;
  float local_3d4;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  float *local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  undefined1 *local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  undefined1 local_2e8 [24];
  int local_2d0;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  float local_28c;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  char local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  longlong *local_1d0;
  longlong *local_158;
  char local_128;
  double local_118;
  double dStack_110;
  double local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (*(char *)(param_1 + 0x518) != '\x01') goto LAB_1402f716d;
  if (*(char *)(param_1 + 0x698) == '\x01') {
    *(undefined1 *)(param_1 + 0x698) = 0;
  }
  if (*(int *)(param_1 + 0x490) == 5) {
    if (*(char *)(param_1 + 0x4b9) == '\x01') {
      uVar8 = *(undefined1 *)(param_1 + 0x4b8);
    }
    else {
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x6b1) = uVar8;
    *(undefined8 *)(param_1 + 0x6a8) = 0xbf800000bf800000;
    local_410 = (undefined4 *)(param_1 + 0x6ac);
    lVar7 = param_2[3];
    dVar19 = (double)*(float *)(lVar7 + 0x11c);
    if (((*(byte *)(param_1 + 0x4b9) & *(byte *)(param_1 + 0x4b8)) != 0) ||
       (plVar13 = param_2 + 3,
       *(float *)(param_1 + 0x48c) <= 1.0 && *(float *)(param_1 + 0x48c) != 1.0)) {
      dVar22 = *(double *)(param_1 + 0x410) - *(double *)(lVar7 + 0xd8);
      dVar21 = *(double *)(param_1 + 0x408) - *(double *)(lVar7 + 0xd0);
      dVar20 = dVar21 * dVar21 + dVar22 * dVar22;
      if ((dVar20 != 1.0) || (NAN(dVar20))) {
        if (dVar20 < 9.99999993922529e-09) goto LAB_1402f7fb2;
LAB_1402f6c1a:
        uVar18 = 0;
        uVar31 = 0;
        dVar22 = dVar22 * (1.0 / SQRT(dVar20));
        dVar21 = dVar21 * (1.0 / SQRT(dVar20));
      }
      else {
        dVar19 = *(double *)(lVar7 + 0xe0) - dVar19;
        dVar20 = *(double *)(param_1 + 0x418);
LAB_1402f7fde:
        uVar16 = -(ulonglong)(dVar20 - dVar19 == 0.0) & (ulonglong)(dVar20 - dVar19);
        uVar18 = (undefined4)uVar16;
        uVar31 = (undefined4)(uVar16 >> 0x20);
      }
LAB_1402f6c35:
      local_410 = (undefined4 *)(param_1 + 0x6ac);
      plVar13 = param_2 + 3;
      dVar19 = (double)FUN_144719204(*(undefined8 *)(lVar7 + 0x18),0x4076800000000000);
      dVar20 = (double)FUN_144719204(*(undefined8 *)(lVar7 + 0x20),0x4076800000000000);
      dVar23 = sin(dVar19 * 0.017453292519943295);
      dVar19 = cos(dVar19 * 0.017453292519943295);
      dVar33 = sin(dVar20 * 0.017453292519943295);
      dVar20 = cos(dVar20 * 0.017453292519943295);
      if (((char)param_2[4] != '\x01') ||
         (dVar23 * (double)CONCAT44(uVar31,uVar18) +
          dVar20 * dVar19 * dVar21 + dVar33 * dVar19 * dVar22 < (double)_DAT_14cb1d0fc)) {
        *param_3 = dVar21;
        param_3[1] = dVar22;
        param_3[2] = (double)CONCAT44(uVar31,uVar18);
        *(undefined4 *)(param_3 + 3) = 0;
        goto LAB_1402f716d;
      }
      local_3e0 = plVar13;
      if (*(char *)(param_1 + 0x678) == '\x01') {
        if (*(char *)(param_1 + 0x670) == '\x01') {
          *(undefined1 *)(param_1 + 0x670) = 0;
        }
        plVar13 = *(longlong **)(param_1 + 0x5d0);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x678) = 0;
      }
      FUN_1402fd97c(param_1,param_2,param_1);
      lVar7 = param_2[3];
      dVar19 = (double)*(float *)(lVar7 + 0x11c);
      plVar13 = local_3e0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x6b1) = 0;
    *(undefined8 *)(param_1 + 0x6a8) = 0xbf800000bf800000;
    local_410 = (undefined4 *)(param_1 + 0x6ac);
    plVar13 = param_2 + 3;
    lVar7 = param_2[3];
    dVar19 = (double)*(float *)(lVar7 + 0x11c);
    if (*(int *)(param_1 + 0x490) == 6) {
      dVar22 = *(double *)(param_1 + 0x3e0) - *(double *)(lVar7 + 0xd8);
      dVar21 = *(double *)(param_1 + 0x3d8) - *(double *)(lVar7 + 0xd0);
      dVar20 = dVar21 * dVar21 + dVar22 * dVar22;
      if ((dVar20 == 1.0) && (!NAN(dVar20))) {
        dVar19 = *(double *)(lVar7 + 0xe0) - dVar19;
        dVar20 = *(double *)(param_1 + 1000);
        goto LAB_1402f7fde;
      }
      if (9.99999993922529e-09 <= dVar20) goto LAB_1402f6c1a;
LAB_1402f7fb2:
      uVar18 = SUB84(DAT_14c8464f0,0);
      uVar31 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar22 = DAT_14c8464e8;
      dVar21 = DAT_14c8464e0;
      goto LAB_1402f6c35;
    }
  }
  local_2a8 = *(double *)(lVar7 + 0xd0);
  dStack_2a0 = *(double *)(lVar7 + 0xd8);
  dVar19 = *(double *)(lVar7 + 0xe0) - dVar19;
  local_298 = dVar19;
  dVar20 = (double)FUN_144719204(*(undefined8 *)(lVar7 + 0x30));
  dVar21 = (double)FUN_144719204(*(undefined8 *)(lVar7 + 0x38));
  dVar22 = sin(dVar20 * 0.017453292519943295);
  dVar20 = cos(dVar20 * 0.017453292519943295);
  dVar23 = sin(dVar21 * 0.017453292519943295);
  dVar21 = cos(dVar21 * 0.017453292519943295);
  fVar17 = (float)*(double *)(*plVar13 + 0x20) * 0.017453292;
  fVar17 = (float)(longlong)
                  (fVar17 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar17 < 0.0) * 4))
           * -6.2831855 + fVar17;
  if (1.5707964 < fVar17) {
    fVar41 = 3.1415927;
LAB_1402f6192:
    fVar17 = fVar41 - fVar17;
    fVar41 = -1.0;
  }
  else {
    if (fVar17 < -1.5707964) {
      fVar41 = -3.1415927;
      goto LAB_1402f6192;
    }
    fVar41 = 1.0;
  }
  cVar5 = *(char *)(*(longlong *)(param_2[2] + 0x48) + 0x54);
  uVar14 = (undefined7)((ulonglong)plVar13 >> 8);
  if (cVar5 == '\0') {
    uVar16 = CONCAT71(uVar14,1);
  }
  else if (cVar5 == '\x01') {
    uVar16 = CONCAT71(uVar14,*(undefined1 *)(param_2[2] + 0x51)) ^ 1;
  }
  else {
    uVar16 = 0;
  }
  if (*(int *)(param_1 + 0x490) == 5) {
    lVar6 = 0x18;
    if (*(char *)(param_1 + 0x4b9) != '\0') {
      lVar6 = 0x48;
    }
    dVar27 = *(double *)(param_1 + 0x3c8 + lVar6) - dStack_2a0;
    dVar24 = *(double *)(param_1 + 0x3c0 + lVar6) - local_2a8;
    dVar33 = dVar24 * dVar24 + dVar27 * dVar27;
    if ((dVar33 != 1.0) || (NAN(dVar33))) {
      dVar38 = DAT_14c8464e0;
      dVar34 = DAT_14c8464f0;
      dVar35 = DAT_14c8464e8;
      if (9.99999993922529e-09 <= dVar33) {
        dVar38 = dVar24 * (1.0 / SQRT(dVar33));
        dVar34 = 0.0;
        dVar35 = dVar27 * (1.0 / SQRT(dVar33));
      }
    }
    else {
      dVar33 = *(double *)(param_1 + 0x3d0 + lVar6) - dVar19;
      dVar38 = dVar24;
      dVar34 = 0.0;
      dVar35 = dVar27;
      if ((dVar33 == 0.0) && (dVar34 = 0.0, !NAN(dVar33))) {
        dVar34 = dVar33;
      }
    }
    *(double *)(param_1 + 0x680) = dVar38;
    *(double *)(param_1 + 0x688) = dVar35;
    *(double *)(param_1 + 0x690) = dVar34;
    *(undefined1 *)(param_1 + 0x698) = 1;
  }
  pdVar9 = &local_300;
  local_3e0 = plVar13;
  local_3a8 = (float *)(param_1 + 0x6a8);
  local_340 = (undefined1 *)(param_1 + 0x6b1);
  local_2c0 = dVar21 * dVar20;
  dStack_2b8 = dVar23 * dVar20;
  local_2b0 = dVar22;
  FUN_144912966(param_1 + 0x3c0,pdVar9,&local_2a8);
  lVar6 = 0x3c0;
  uVar10 = CONCAT71((int7)((ulonglong)pdVar9 >> 8),1);
  iVar12 = local_2d0;
  if ((local_2d0 == 3) && (iVar12 = 3, *(char *)(param_1 + 0x678) == '\x01')) {
    FUN_144912966(param_1 + 0x520,&local_300,&local_2a8);
    lVar6 = 0x520;
    uVar10 = 0;
    iVar12 = local_2d0;
  }
  dVar24 = dStack_2a0;
  dVar33 = local_2a8;
  pdVar9 = (double *)(param_1 + lVar6);
  local_328 = local_2b0;
  local_338 = local_2c0;
  dStack_330 = dStack_2b8;
  if (*(char *)(param_1 + 0x130 + lVar6) == '\x01') {
    local_45c = (uint)uVar10;
    cVar5 = FUN_1402f57d0(param_1 + lVar6 + 0x100,pdVar9);
    uVar10 = (ulonglong)local_45c;
    if (cVar5 == '\0') goto LAB_1402f6378;
    local_388 = pdVar9[5];
    local_418 = pdVar9[2];
    local_238 = local_388 - local_418;
    local_390 = pdVar9[4];
    local_420 = *pdVar9;
    local_428 = pdVar9[1];
    dStack_240 = local_390 - local_428;
    local_398 = pdVar9[3];
    local_248 = local_398 - local_420;
    local_3a0 = local_238 * local_238 + local_248 * local_248 + dStack_240 * dStack_240;
    local_3d4 = (float)SQRT(local_3a0);
    if (local_3d4 <= 1e-08) {
      local_238 = DAT_14c8464f0;
      local_248 = DAT_14c8464e0;
      dStack_240 = DAT_14c8464e8;
    }
    else {
      dVar27 = (double)(1.0 / local_3d4);
      local_238 = local_238 * dVar27;
      dStack_240 = dStack_240 * dVar27;
      local_248 = local_248 * dVar27;
    }
    dVar27 = pdVar9[0xb];
    local_278 = dVar27 - pdVar9[8];
    dVar34 = pdVar9[10];
    dStack_280 = dVar34 - pdVar9[7];
    dVar38 = pdVar9[9];
    local_288 = dVar38 - pdVar9[6];
    local_3d8 = (float)SQRT(local_278 * local_278 + local_288 * local_288 + dStack_280 * dStack_280)
    ;
    if (local_3d8 <= 1e-08) {
      local_278 = DAT_14c8464f0;
      local_288 = DAT_14c8464e0;
      dStack_280 = DAT_14c8464e8;
    }
    else {
      dVar35 = (double)(1.0 / local_3d8);
      local_278 = local_278 * dVar35;
      dStack_280 = dStack_280 * dVar35;
      local_288 = local_288 * dVar35;
    }
    local_440 = pdVar9[0x22];
    dVar28 = local_440 - local_418;
    local_458 = pdVar9[0x20];
    local_448 = pdVar9[0x21];
    dVar35 = local_448 - local_428;
    dVar36 = local_458 - local_420;
    dVar39 = (dVar19 - local_418) * dVar28 +
             (dVar33 - local_420) * dVar36 + (dVar24 - local_428) * dVar35;
    local_3c0 = dVar35 * dVar35;
    local_3c8 = dVar36 * dVar36;
    local_3d0 = dVar28 * dVar28;
    local_3b8 = local_428;
    local_348 = local_420;
    local_3b0 = local_418;
    if ((0.0 < dVar39) &&
       (dVar37 = local_3c8 + local_3c0 + local_3d0, local_3b8 = local_448, local_348 = local_458,
       local_3b0 = local_440, dVar39 < dVar37)) {
      dVar39 = dVar39 / dVar37;
      local_3b0 = dVar28 * dVar39 + local_418;
      local_3b8 = dVar35 * dVar39 + local_428;
      local_348 = dVar36 * dVar39 + local_420;
    }
    dVar35 = pdVar9[0x25];
    dVar39 = dVar27 - dVar35;
    dVar28 = pdVar9[0x23];
    local_370 = pdVar9[0x24];
    dVar37 = dVar34 - local_370;
    dVar36 = dVar38 - dVar28;
    local_360 = dVar24 - local_370;
    local_368 = dVar33 - dVar28;
    dVar40 = (dVar19 - dVar35) * dVar39 + local_368 * dVar36 + dVar37 * local_360;
    local_358 = dVar28;
    local_3f0 = dVar35;
    local_350 = local_370;
    if ((0.0 < dVar40) &&
       (dVar25 = dVar39 * dVar39 + dVar36 * dVar36 + dVar37 * dVar37, local_358 = dVar38,
       local_3f0 = dVar27, local_350 = dVar34, dVar40 < dVar25)) {
      dVar40 = dVar40 / dVar25;
      local_3f0 = dVar39 * dVar40 + dVar35;
      local_350 = dVar37 * dVar40 + local_370;
      local_358 = dVar36 * dVar40 + dVar28;
    }
    local_378 = dVar35 - local_440;
    local_380 = local_370 - local_448;
    dVar39 = dVar28 - local_458;
    dVar36 = (dVar19 - local_440) * local_378 +
             (dVar33 - local_458) * dVar39 + (dVar24 - local_448) * local_380;
    local_3f8 = local_380 * local_380;
    local_400 = dVar39 * dVar39;
    local_408 = local_378 * local_378;
    dVar34 = dVar19 - local_440;
    dVar27 = dVar33 - local_458;
    local_430 = local_440;
    local_3e8 = local_448;
    local_438 = local_458;
    dVar38 = dVar24 - local_448;
    if ((0.0 < dVar36) &&
       (dVar37 = local_400 + local_3f8 + local_408, dVar34 = dVar19 - dVar35, dVar27 = local_368,
       local_430 = dVar35, local_3e8 = local_370, local_438 = dVar28, dVar38 = local_360,
       dVar36 < dVar37)) {
      dVar36 = dVar36 / dVar37;
      local_430 = local_378 * dVar36 + local_440;
      local_3e8 = local_380 * dVar36 + local_448;
      local_438 = dVar39 * dVar36 + local_458;
      dVar34 = dVar19 - local_430;
      dVar38 = dVar24 - local_3e8;
      dVar27 = dVar33 - local_438;
    }
    local_44c = fVar41;
    if (local_3d4 <= 5.0) {
      if ((local_3d8 != 0.0) || (NAN(local_3d8))) {
        local_108 = local_278;
        local_118 = local_288;
        dStack_110 = dStack_280;
        local_100 = '\x01';
      }
      else {
        local_100 = '\0';
      }
LAB_1402f7c1d:
      uVar10 = (ulonglong)local_45c;
    }
    else {
      fVar30 = (float)((dVar19 - local_3b0) * (dVar19 - local_3b0) +
                      (dVar33 - local_348) * (dVar33 - local_348) +
                      (dVar24 - local_3b8) * (dVar24 - local_3b8));
      fVar32 = (float)((dVar19 - local_3f0) * (dVar19 - local_3f0) +
                      (dVar33 - local_358) * (dVar33 - local_358) +
                      (dVar24 - local_350) * (dVar24 - local_350));
      fVar26 = (float)(dVar34 * dVar34 + dVar27 * dVar27 + dVar38 * dVar38);
      if ((fVar32 < fVar30) || (fVar26 < fVar30)) {
        if ((fVar30 < fVar26) || (fVar32 < fVar26)) {
          local_108 = local_278;
          local_118 = local_288;
          dStack_110 = dStack_280;
          local_100 = '\x01';
        }
        else {
          fVar32 = (float)(local_408 + local_400 + local_3f8);
          uVar15 = -(uint)(0.0 < fVar32);
          local_28c = (float)(~uVar15 & 0x3f800000 |
                             (uint)((float)((local_430 - local_440) * (local_430 - local_440) +
                                           (local_438 - local_458) * (local_438 - local_458) +
                                           (local_3e8 - local_448) * (local_3e8 - local_448)) /
                                   fVar32) & uVar15);
          if (1.0 <= local_28c) {
            local_28c = 1.0;
          }
          if (local_28c <= 0.0) {
            local_28c = 0.0;
          }
          FUN_14382f61c(&local_118,&local_248,&local_288);
          local_100 = '\x01';
        }
        goto LAB_1402f7c1d;
      }
      fVar32 = (float)(local_3d0 + local_3c8 + local_3c0);
      uVar15 = -(uint)(0.0 < fVar32);
      fVar32 = (float)(~uVar15 & 0x3f800000 |
                      (uint)((float)((local_3b0 - local_418) * (local_3b0 - local_418) +
                                    (local_348 - local_420) * (local_348 - local_420) +
                                    (local_3b8 - local_428) * (local_3b8 - local_428)) / fVar32) &
                      uVar15);
      auVar29 = ZEXT416((uint)fVar32);
      if (1.0 <= fVar32) {
        auVar29 = ZEXT416(0x3f800000);
      }
      if (auVar29._0_4_ <= 0.0) {
        auVar4._12_4_ = 0;
        auVar4._0_12_ = auVar29._4_12_;
        auVar29 = auVar4 << 0x20;
      }
      local_28c = auVar29._0_4_;
      if ((local_28c != 0.0) || (NAN(local_28c))) {
        if (0.5 <= local_28c) {
          local_108 = local_238;
          local_118 = local_248;
          dStack_110 = dStack_240;
          local_100 = '\x01';
        }
        else {
          if (*(char *)(pdVar9 + 0x2a) == '\x01') {
            local_440 = pdVar9[0x27];
            local_448 = pdVar9[0x28];
            local_458 = pdVar9[0x29];
            if ((local_388 - local_458) * (local_388 - local_458) +
                (local_390 - local_448) * (local_390 - local_448) +
                (local_398 - local_440) * (local_398 - local_440) < local_3a0) {
              local_430 = local_418 - local_458;
              local_438 = local_428 - local_448;
              dVar28 = local_420 - local_440;
              dVar34 = (dVar19 - local_458) * local_430 +
                       (dVar33 - local_440) * dVar28 + (dVar24 - local_448) * local_438;
              dVar38 = local_448;
              dVar27 = local_458;
              dVar35 = local_440;
              if ((0.0 < dVar34) &&
                 (dVar36 = local_430 * local_430 + dVar28 * dVar28 + local_438 * local_438,
                 dVar38 = local_428, dVar27 = local_418, dVar35 = local_420, dVar34 < dVar36)) {
                dVar34 = dVar34 / dVar36;
                dVar27 = local_430 * dVar34 + local_458;
                dVar38 = local_438 * dVar34 + local_448;
                dVar35 = dVar28 * dVar34 + local_440;
              }
              if ((dVar35 == local_440) && (!NAN(dVar35) && !NAN(local_440))) {
                if ((dVar38 == local_448) && (!NAN(dVar38) && !NAN(local_448))) {
                  if ((dVar27 == local_458) && (!NAN(dVar27) && !NAN(local_458)))
                  goto LAB_1402f7b10;
                }
              }
              fVar32 = (float)((local_458 - local_418) * (local_458 - local_418) +
                              (local_440 - local_420) * (local_440 - local_420) +
                              (local_448 - local_428) * (local_448 - local_428));
              uVar15 = -(uint)(0.0 < fVar32);
              fVar32 = (float)(~uVar15 & 0x3f800000 |
                              (uint)((float)((dVar27 - local_418) * (dVar27 - local_418) +
                                            (dVar35 - local_420) * (dVar35 - local_420) +
                                            (dVar38 - local_428) * (dVar38 - local_428)) / fVar32) &
                              uVar15);
              auVar29 = ZEXT416((uint)fVar32);
              if (1.0 <= fVar32) {
                auVar29 = ZEXT416(0x3f800000);
              }
              if (auVar29._0_4_ <= 0.0) {
                auVar3._12_4_ = 0;
                auVar3._0_12_ = auVar29._4_12_;
                auVar29 = auVar3 << 0x20;
              }
              local_28c = auVar29._0_4_;
            }
          }
LAB_1402f7b10:
          FUN_14382f61c(&local_118,&local_338,&local_248,&local_28c);
          local_100 = '\x01';
          uVar10 = (ulonglong)local_45c;
        }
      }
      else {
        local_100 = '\0';
      }
    }
  }
  else {
LAB_1402f6378:
    local_100 = '\0';
  }
  if (3 < iVar12 - 1U) goto LAB_1402f6f3f;
  local_458 = (double)CONCAT44(local_458._4_4_,(int)uVar16);
  uVar8 = *(undefined1 *)(*param_2 + 0x1988);
  switch(iVar12) {
  case 1:
    local_488 = CONCAT31(local_488._1_3_,*(undefined1 *)(param_1 + 0x6b0));
    local_45c = (uint)uVar10;
    FUN_140436ed7(&local_288,&local_300,pdVar9,&local_2a8);
    if (local_258 == '\x01') {
      uVar18 = FUN_14382f380(&local_288,&local_2c0,*(undefined4 *)(lVar7 + 0x118),
                             *(undefined1 *)(param_1 + 0x6b0));
      *(undefined4 *)(param_1 + 0x6a8) = uVar18;
      local_228 = dStack_268;
      dStack_220 = dStack_260;
      local_238 = local_278;
      dStack_230 = dStack_270;
      local_248 = local_288;
      dStack_240 = dStack_280;
      local_128 = '\x01';
      iVar12 = *(int *)(param_4 + 0x948);
      *(uint *)(param_4 + 0x948) = iVar12 + 1U;
      if (*(uint *)(param_4 + 0x94c) < iVar12 + 1U) {
        FUN_14022ddbe(param_4,iVar12);
      }
      lVar6 = *(longlong *)(param_4 + 0x940);
      if (*(longlong *)(param_4 + 0x940) == 0) {
        lVar6 = param_4;
      }
      *(undefined1 *)(lVar6 + 0x120 + (longlong)iVar12 * 0x128) = 0xff;
      FUN_144906012(lVar6 + (longlong)iVar12 * 0x128,&local_248);
      if (local_128 == '\x02') {
        local_128 = -1;
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_158 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar2 = (int *)((longlong)local_158 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_158 + 0x10))(local_158);
            }
          }
        }
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_1d0 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar2 = (int *)((longlong)local_1d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_1d0 + 0x10))(local_1d0);
            }
          }
        }
      }
      pdVar11 = &dStack_270;
    }
    else {
      local_238 = local_298;
      local_248 = local_2a8;
      dStack_240 = dStack_2a0;
      dStack_270 = pdVar9[3];
      dStack_268 = pdVar9[4];
      dStack_260 = pdVar9[5];
      local_288 = local_2a8;
      dStack_280 = dStack_2a0;
      local_278 = local_298;
      local_258 = '\x01';
      dStack_230 = dStack_270;
      local_228 = dStack_268;
      dStack_220 = dStack_260;
      uVar18 = FUN_14382f380(&local_288,&local_2c0,*(undefined4 *)(lVar7 + 0x118),
                             *(undefined1 *)(param_1 + 0x6b0));
      *(undefined4 *)(param_1 + 0x6a8) = uVar18;
      local_228 = dStack_268;
      dStack_220 = dStack_260;
      local_238 = local_278;
      dStack_230 = dStack_270;
      local_248 = local_288;
      dStack_240 = dStack_280;
      local_128 = '\x01';
      iVar12 = *(int *)(param_4 + 0x948);
      *(uint *)(param_4 + 0x948) = iVar12 + 1U;
      if (*(uint *)(param_4 + 0x94c) < iVar12 + 1U) {
        FUN_14022ddbe(param_4,iVar12);
      }
      lVar6 = *(longlong *)(param_4 + 0x940);
      if (*(longlong *)(param_4 + 0x940) == 0) {
        lVar6 = param_4;
      }
      pdVar11 = pdVar9 + 3;
      *(undefined1 *)(lVar6 + 0x120 + (longlong)iVar12 * 0x128) = 0xff;
      FUN_144906012(lVar6 + (longlong)iVar12 * 0x128,&local_248);
      if (local_128 == '\x02') {
        local_128 = -1;
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_158 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar2 = (int *)((longlong)local_158 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_158 + 0x10))(local_158);
            }
          }
        }
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_1d0 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar2 = (int *)((longlong)local_1d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_1d0 + 0x10))(local_1d0);
            }
          }
        }
      }
    }
    FUN_14022cddc(param_4,pdVar11,pdVar9);
    local_480 = *(undefined1 *)(param_1 + 0x6b0);
    local_488 = *(undefined4 *)(lVar7 + 0x118);
    local_470 = local_410;
    local_478 = uVar8;
    FUN_140258ddd(&local_248,&local_300,&local_288,&local_2a8);
    param_3[2] = local_238;
    *param_3 = local_248;
    param_3[1] = dStack_240;
    uVar15 = local_458._0_4_;
    break;
  case 2:
    if (1.0 < *(float *)((longlong)pdVar9 + 0xcc)) {
      *local_3a8 = *(float *)((longlong)pdVar9 + 0xcc);
    }
    local_488 = CONCAT31(local_488._1_3_,*(undefined1 *)(param_1 + 0x6b0));
    local_45c = (uint)uVar10;
    FUN_140436ed7(&local_288,&local_300,pdVar9,&local_2a8);
    if (local_258 == '\x01') {
      local_480 = *(undefined1 *)(param_1 + 0x6b0);
      local_488 = *(undefined4 *)(lVar7 + 0x118);
      local_470 = local_410;
      local_478 = uVar8;
      FUN_140258ddd(&local_248,&local_300,&local_288,&local_2a8);
      param_3[2] = local_238;
      *param_3 = local_248;
      param_3[1] = dStack_240;
      local_228 = dStack_268;
      dStack_220 = dStack_260;
      local_238 = local_278;
      dStack_230 = dStack_270;
      local_248 = local_288;
      dStack_240 = dStack_280;
      local_128 = '\x01';
      iVar12 = *(int *)(param_4 + 0x948);
      *(uint *)(param_4 + 0x948) = iVar12 + 1U;
      if (*(uint *)(param_4 + 0x94c) < iVar12 + 1U) {
        FUN_14022ddbe(param_4,iVar12);
      }
      lVar7 = *(longlong *)(param_4 + 0x940);
      if (*(longlong *)(param_4 + 0x940) == 0) {
        lVar7 = param_4;
      }
      *(undefined1 *)(lVar7 + 0x120 + (longlong)iVar12 * 0x128) = 0xff;
      FUN_144906012(lVar7 + (longlong)iVar12 * 0x128,&local_248);
      uVar15 = local_458._0_4_;
      if (local_128 == '\x02') {
        local_128 = -1;
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_158 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar2 = (int *)((longlong)local_158 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_158 + 0x10))(local_158);
            }
          }
        }
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_1d0 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar2 = (int *)((longlong)local_1d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_1d0 + 0x10))(local_1d0);
            }
          }
        }
      }
      pdVar11 = &dStack_270;
    }
    else {
      local_480 = *(undefined1 *)(param_1 + 0x6b0);
      local_488 = *(undefined4 *)(lVar7 + 0x118);
      local_470 = local_410;
      local_478 = uVar8;
      FUN_140258fbb(&local_248,&local_300,local_2e8,&local_2a8);
      param_3[2] = local_238;
      *param_3 = local_248;
      param_3[1] = dStack_240;
      local_328 = local_298;
      local_338 = local_2a8;
      dStack_330 = dStack_2a0;
      local_320 = local_300;
      dStack_318 = dStack_2f8;
      local_310 = local_2f0;
      local_248 = local_2a8;
      dStack_240 = dStack_2a0;
      local_238 = local_298;
      dStack_230 = local_300;
      local_228 = dStack_2f8;
      dStack_220 = local_2f0;
      local_128 = '\x01';
      iVar12 = *(int *)(param_4 + 0x948);
      *(uint *)(param_4 + 0x948) = iVar12 + 1U;
      if (*(uint *)(param_4 + 0x94c) < iVar12 + 1U) {
        FUN_14022ddbe(param_4,iVar12);
      }
      lVar7 = *(longlong *)(param_4 + 0x940);
      if (*(longlong *)(param_4 + 0x940) == 0) {
        lVar7 = param_4;
      }
      *(undefined1 *)(lVar7 + 0x120 + (longlong)iVar12 * 0x128) = 0xff;
      FUN_144906012(lVar7 + (longlong)iVar12 * 0x128,&local_248);
      uVar15 = local_458._0_4_;
      if (local_128 == '\x02') {
        local_128 = -1;
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_158 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar2 = (int *)((longlong)local_158 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_158 + 0x10))(local_158);
            }
          }
        }
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_1d0 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar2 = (int *)((longlong)local_1d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_1d0 + 0x10))(local_1d0);
            }
          }
        }
      }
      pdVar11 = &local_300;
    }
    FUN_14022cddc(param_4,pdVar11,pdVar9);
    break;
  case 3:
    dStack_230 = pdVar9[9];
    local_228 = pdVar9[10];
    dStack_220 = pdVar9[0xb];
    if (*(char *)(param_1 + 0x6b0) == '\x01') {
      dVar38 = dStack_220 - dVar19;
      dVar21 = local_228 - dVar24;
      dVar22 = dStack_230 - dVar33;
      dVar20 = dVar38 * dVar38 + dVar22 * dVar22 + dVar21 * dVar21;
      if (((dVar20 != 1.0) || (dVar23 = dVar38, dVar27 = dVar21, dVar34 = dVar22, NAN(dVar20))) &&
         (dVar23 = DAT_14c8464f0, dVar27 = DAT_14c8464e8, dVar34 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar20)) {
        dVar20 = 1.0 / SQRT(dVar20);
        dVar23 = dVar38 * dVar20;
        dVar27 = dVar21 * dVar20;
        dVar34 = dVar22 * dVar20;
      }
    }
    else {
      dVar20 = local_228 - dVar24;
      dVar21 = dStack_230 - dVar33;
      dVar22 = dVar21 * dVar21 + dVar20 * dVar20;
      if ((dVar22 != 1.0) || (NAN(dVar22))) {
        dVar23 = DAT_14c8464f0;
        dVar27 = DAT_14c8464e8;
        dVar34 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar22) {
          dVar23 = 0.0;
          dVar27 = dVar20 * (1.0 / SQRT(dVar22));
          dVar34 = dVar21 * (1.0 / SQRT(dVar22));
        }
      }
      else {
        dVar23 = (double)(-(ulonglong)(dStack_220 - dVar19 == 0.0) &
                         (ulonglong)(dStack_220 - dVar19));
        dVar27 = dVar20;
        dVar34 = dVar21;
      }
    }
    uVar16 = uVar16 & 0xffffffff;
    *param_3 = dVar34;
    param_3[1] = dVar27;
    param_3[2] = dVar23;
    local_248 = dVar33;
    dStack_240 = dVar24;
    local_238 = dVar19;
    goto LAB_1402f6eab;
  case 4:
    local_278 = local_298;
    local_288 = local_2a8;
    dStack_280 = dStack_2a0;
    dStack_270 = pdVar9[3];
    dStack_268 = pdVar9[4];
    dStack_260 = pdVar9[5];
    local_480 = *(undefined1 *)(param_1 + 0x6b0);
    local_488 = *(undefined4 *)(lVar7 + 0x118);
    local_470 = local_410;
    local_478 = uVar8;
    FUN_140258ddd(&local_248,&local_300);
    param_3[2] = local_238;
    *param_3 = local_248;
    param_3[1] = dStack_240;
    if ((*(int *)(pdVar9 + 0x1a) == 3) && (*(char *)(param_1 + 0x6b0) != '\x01')) {
      lVar7 = *local_3e0;
      dVar19 = *(double *)(lVar7 + 0x20) * 0.017453292519943295;
      dVar33 = sin(dVar19);
      dVar24 = cos(dVar19);
      dVar27 = pdVar9[4] - *(double *)(lVar7 + 0xd8);
      dVar19 = pdVar9[3] - *(double *)(lVar7 + 0xd0);
      fVar32 = (float)(dVar24 * dVar27 - dVar19 * dVar33);
      fVar26 = (float)(dVar19 * dVar24 + dVar27 * dVar33);
      *local_3a8 = (fVar26 * fVar26 + fVar32 * fVar32) / (ABS(fVar32) + ABS(fVar32));
      uVar16 = (ulonglong)local_458 & 0xffffffff;
      if (SUB81(local_458,0) != '\0') {
LAB_1402f6db0:
        if (dVar22 * param_3[2] + dVar21 * dVar20 * *param_3 + dVar23 * dVar20 * param_3[1] <
            0.9659258127212524) {
          *local_340 = 1;
        }
      }
    }
    else {
      uVar16 = (ulonglong)local_458 & 0xffffffff;
      if (SUB81(local_458,0) != '\0') {
        uVar18 = FUN_14382f380(&local_288,&local_2c0,*(undefined4 *)(lVar7 + 0x118),
                               *(undefined1 *)(param_1 + 0x6b0));
        *(undefined4 *)(param_1 + 0x6a8) = uVar18;
        goto LAB_1402f6db0;
      }
    }
    local_228 = dStack_268;
    dStack_220 = dStack_260;
    local_238 = local_278;
    dStack_230 = dStack_270;
    local_248 = local_288;
    dStack_240 = dStack_280;
LAB_1402f6eab:
    uVar10 = uVar10 & 0xffffffff;
    local_128 = '\x01';
    iVar12 = *(int *)(param_4 + 0x948);
    *(uint *)(param_4 + 0x948) = iVar12 + 1U;
    if (*(uint *)(param_4 + 0x94c) < iVar12 + 1U) {
      FUN_14022ddbe(param_4,iVar12);
    }
    lVar7 = *(longlong *)(param_4 + 0x940);
    if (*(longlong *)(param_4 + 0x940) == 0) {
      lVar7 = param_4;
    }
    *(undefined1 *)(lVar7 + 0x120 + (longlong)iVar12 * 0x128) = 0xff;
    FUN_144906012(lVar7 + (longlong)iVar12 * 0x128,&local_248);
    if (local_128 == '\x02') {
      local_128 = -1;
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_158 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar2 = (int *)((longlong)local_158 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_158 + 0x10))(local_158);
          }
        }
      }
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_1d0 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar2 = (int *)((longlong)local_1d0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1d0 + 0x10))(local_1d0);
          }
        }
      }
    }
    goto LAB_1402f6f3f;
  }
  uVar16 = (ulonglong)uVar15;
  uVar10 = (ulonglong)local_45c;
LAB_1402f6f3f:
  if ((local_2d0 - 1U < 3) && (local_100 == '\x01')) {
    param_3[2] = local_108;
    *param_3 = local_118;
    param_3[1] = dStack_110;
  }
  if (*(int *)(pdVar9 + 0x1a) == 5) {
    *local_410 = 0xbf800000;
  }
  if (((byte)uVar10 & *(byte *)(param_1 + 0x678)) == 1) {
    FUN_14022cddc(param_4,param_1 + 0x538,param_1 + 0x520);
  }
  fVar32 = 1.0;
  if (((((byte)uVar16 & *(byte *)(param_1 + 0x6b0)) == 1) && (ABS(param_3[2]) < 0.5)) &&
     (ABS(local_2b0) < 0.5)) {
    fVar32 = fVar17 * fVar17;
    dVar19 = 1.0 / SQRT(local_2c0 * local_2c0 + dStack_2b8 * dStack_2b8);
    dVar20 = dVar19 * local_2c0 *
             (double)(fVar41 * (((((fVar32 * -2.6051615e-07 + 2.4760495e-05) * fVar32 +
                                  -0.0013888378) * fVar32 + 0.041666638) * fVar32 + -0.5) * fVar32 +
                               1.0)) +
             dStack_2b8 * dVar19 *
             (double)((((((fVar32 * -2.3889859e-08 + 2.7525562e-06) * fVar32 + -0.00019840874) *
                         fVar32 + 0.008333331) * fVar32 + -0.16666667) * fVar32 + 1.0) * fVar17);
    dVar19 = dVar20 + 0.0;
    if (1.0 <= dVar19) {
      dVar19 = 1.0;
    }
    uVar16 = -(ulonglong)(dVar20 < -1.0);
    dVar19 = acos((double)(uVar16 & 0xbff0000000000000 | ~uVar16 & (ulonglong)dVar19));
    dVar19 = (double)ABS((float)dVar19) / 0.7853981852531433;
    if (1.0 <= dVar19) {
      dVar19 = 1.0;
    }
    if (dVar19 <= 0.0) {
      dVar19 = 0.0;
    }
    fVar32 = (float)(1.0 - dVar19);
  }
  *(float *)(param_3 + 3) = fVar32;
  if ((((*(char *)(param_1 + 0x6b0) == '\x01') && (*(char *)(param_1 + 0x678) == '\x01')) &&
      (ABS(*param_3) < 0.009999999776482582)) && (ABS(param_3[1]) < 0.009999999776482582)) {
    dVar21 = *(double *)(param_1 + 0x548) - *(double *)(param_1 + 0x530);
    dVar19 = *(double *)(param_1 + 0x540) - *(double *)(param_1 + 0x528);
    dVar20 = *(double *)(param_1 + 0x538) - *(double *)(param_1 + 0x520);
    dVar21 = dVar21 * dVar21 + dVar20 * dVar20 + dVar19 * dVar19;
    if (((dVar21 != 1.0) || (dVar22 = dVar20, dVar23 = dVar19, NAN(dVar21))) &&
       (dVar22 = DAT_14c8464e0, dVar23 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar21)) {
      dVar22 = dVar20 * (1.0 / SQRT(dVar21));
      dVar23 = dVar19 * (1.0 / SQRT(dVar21));
    }
    if ((0.009999999776482582 <= ABS(dVar22)) || (0.009999999776482582 <= ABS(dVar23))) {
      if ((dVar22 != 0.0) || (dVar19 = dVar23, NAN(dVar22))) {
LAB_1402f72ef:
        dVar19 = atan2(dVar23,dVar22);
        uVar18 = SUB84(dVar19,0);
        uVar31 = (undefined4)((ulonglong)dVar19 >> 0x20);
      }
      else {
LAB_1402f72eb:
        uVar31 = 0;
        uVar18 = 0;
        if ((dVar19 != 0.0) || (NAN(dVar19))) goto LAB_1402f72ef;
      }
      *(float *)(param_1 + 0x6a0) = (float)((double)CONCAT44(uVar31,uVar18) * 57.29577951308232);
      *(undefined1 *)(param_1 + 0x6a4) = 1;
      goto LAB_1402f716d;
    }
    if (*(char *)(param_1 + 0x619) == '\x01') {
      dVar21 = *(double *)(param_1 + 0x578) - *(double *)(param_1 + 0x560);
      dVar19 = *(double *)(param_1 + 0x570) - *(double *)(param_1 + 0x558);
      dVar20 = *(double *)(param_1 + 0x568) - *(double *)(param_1 + 0x550);
      dVar21 = dVar21 * dVar21 + dVar20 * dVar20 + dVar19 * dVar19;
      if (((dVar21 != 1.0) || (dVar22 = dVar20, dVar23 = dVar19, NAN(dVar21))) &&
         (dVar22 = DAT_14c8464e0, dVar23 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar21)) {
        dVar22 = dVar20 * (1.0 / SQRT(dVar21));
        dVar23 = dVar19 * (1.0 / SQRT(dVar21));
      }
      if ((0.009999999776482582 <= ABS(dVar22)) || (0.009999999776482582 <= ABS(dVar23))) {
        if ((dVar23 == 0.0) && (dVar19 = dVar22, !NAN(dVar23))) goto LAB_1402f72eb;
        goto LAB_1402f72ef;
      }
    }
  }
  if (*(char *)(param_1 + 0x6a4) == '\x01') {
    *(undefined1 *)(param_1 + 0x6a4) = 0;
  }
LAB_1402f716d:
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402f8346 FUN_1402f8346 body=96 status=ok
// SIG undefined FUN_1402f8346(void)

undefined8 FUN_1402f8346(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_1402be6b1(param_1 + 0x1f0,param_2 + 0x1f0);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x1e8) == *(int *)(param_2 + 0x1e8))) {
    lVar4 = *(longlong *)(param_2 + 0x1e0);
    if (*(longlong *)(param_2 + 0x1e0) == 0) {
      lVar4 = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x1e0);
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      lVar3 = param_1;
    }
    uVar2 = FUN_1402f83a6(lVar3,lVar4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1402f83a6 FUN_1402f83a6 body=68 status=ok
// SIG undefined FUN_1402f83a6(void)

char FUN_1402f83a6(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_1402f83ea(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x78;
      param_2 = param_2 + 0x78;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 1402f83ea FUN_1402f83ea body=360 status=ok
// SIG undefined FUN_1402f83ea(void)

bool FUN_1402f83ea(double *param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  
  if (((((*(char *)((longlong)param_1 + 0x5c) == *(char *)((longlong)param_2 + 0x5c)) &&
        (*(int *)(param_1 + 0xb) == *(int *)(param_2 + 0xb))) &&
       (ABS(*(float *)((longlong)param_1 + 0x54) - *(float *)((longlong)param_2 + 0x54)) <= 1.0)) &&
      ((*(int *)(param_1 + 9) == *(int *)(param_2 + 9) &&
       (*(int *)((longlong)param_1 + 0x4c) == *(int *)((longlong)param_2 + 0x4c))))) &&
     ((param_1[6] == param_2[6] && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))))) {
    if (param_1[6] == 0.0) {
      if (1.0 <= ABS(*param_1 - *param_2)) {
        return false;
      }
      dVar2 = param_1[1] - param_2[1];
      lVar1 = 0x10;
    }
    else {
      if (1.0 <= ABS(param_1[3] - param_2[3])) {
        return false;
      }
      dVar2 = param_1[4] - param_2[4];
      lVar1 = 0x28;
    }
    if (((ABS(dVar2) < 1.0) &&
        (ABS(*(double *)((longlong)param_1 + lVar1) - *(double *)((longlong)param_2 + lVar1)) < 1.0)
        ) && ((ABS(param_1[0xc] - param_2[0xc]) <= 1.0 && (ABS(param_1[0xd] - param_2[0xd]) <= 1.0))
             )) {
      return ABS(param_1[0xe] - param_2[0xe]) <= 1.0;
    }
  }
  return false;
}



// FUNCTION 1402f8552 FUN_1402f8552 body=6070 status=ok
// SIG undefined FUN_1402f8552(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f8552(longlong *param_1,double *param_2)

{
  double *pdVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  LPVOID pvVar22;
  double *pdVar23;
  longlong lVar24;
  uint uVar25;
  undefined4 uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  int iVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  ulonglong uVar33;
  uint uVar34;
  float fVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  double dVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  double dVar65;
  double dVar66;
  float fVar68;
  undefined1 auVar67 [16];
  undefined1 auStack_1108 [32];
  longlong *local_10e8;
  double *local_10e0;
  undefined8 *local_10d8;
  longlong local_10d0;
  undefined1 local_10c8;
  longlong local_10b8;
  longlong *local_10b0;
  longlong *local_10a8;
  int local_109c;
  double *local_1098;
  uint local_108c;
  undefined8 local_1088;
  longlong local_1080;
  undefined8 local_1078;
  longlong *plStack_1070;
  double local_1068;
  double dStack_1060;
  double dStack_1058;
  double local_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined4 local_1008;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined1 local_fe0 [80];
  longlong *local_f90;
  double local_f78;
  longlong *plStack_f70;
  double local_f68;
  double dStack_f60;
  double dStack_f58;
  double dStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  double local_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined4 *local_f18;
  undefined8 uStack_f10;
  double local_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 local_ef0;
  undefined8 local_ee8;
  longlong *plStack_ee0;
  undefined4 local_ed8;
  undefined1 local_ed0 [8];
  longlong *local_ec8;
  double local_eb8;
  double local_eb0;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  longlong local_e78;
  double dStack_e70;
  double local_e68;
  longlong lStack_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  longlong local_e48;
  longlong *local_e40;
  double local_e38;
  undefined8 local_e28;
  longlong *local_e20;
  longlong local_e18;
  longlong *plStack_e10;
  undefined4 local_e08;
  longlong local_e00 [12];
  longlong local_da0;
  longlong *plStack_d98;
  undefined4 local_d90;
  longlong local_d88;
  undefined5 uStack_d80;
  undefined3 uStack_d7b;
  undefined5 uStack_d78;
  undefined8 uStack_d73;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_108;
  longlong *local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1402f8568;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1108;
  cVar14 = (**(code **)(*param_1 + 8))();
  if (cVar14 != '\0') goto LAB_1402f8fe0;
  FUN_1402f9d0a(&local_1080,param_1[2]);
  local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168);
  uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160);
  if ((*(longlong *)(local_1080 + 0x78) == 0) ||
     (plVar7 = *(longlong **)(*(longlong *)(local_1080 + 0x78) + 0x140),
     local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168),
     uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160), plVar7 == (longlong *)0x0))
  {
LAB_1402f9b06:
    FUN_1402fd888(param_1);
  }
  else {
    local_1088 = param_1[0x5d];
    local_ff8 = CONCAT44((float)param_2[1] * 0.01,(float)*param_2 * 0.01);
    uStack_ff0 = (double)CONCAT44((float)param_2[2] * 0.01,(float)param_2[2] * 0.01);
    uVar28 = 0;
    if (0 < (int)local_1088) {
      uVar28 = local_1088 & 0xffffffff;
    }
    local_1098 = param_2;
    uVar15 = FUN_144b3fa10(param_1[0x6c]);
    local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168);
    uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160);
    if ((int)uVar15 <= (int)uVar28) goto LAB_1402f9b06;
    local_10a8 = param_1 + 2;
    local_10b0 = param_1 + 0x6f;
    fVar57 = 0.0;
    fVar58 = 0.0;
    fVar59 = 0.0;
    fVar60 = 0.0;
    uVar33 = 0xffffffff;
    fVar64 = 0.0625;
    do {
      iVar19 = (int)uVar28;
      lVar20 = FUN_144b3f860(param_1[0x6c],uVar28);
      uVar25 = *(uint *)(lVar20 + 0x70) >> 0x16;
      local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168);
      uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160);
      if (((((int)plVar7[8] <= (int)uVar25) ||
           (lVar8 = *(longlong *)(plVar7[7] + (ulonglong)(uVar25 * 0x120)),
           local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168),
           uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160), lVar8 == 0)) ||
          (local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168),
          uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160),
          *(longlong *)(lVar8 + 0x20) == 0)) ||
         (local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168),
         uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160),
         *(int *)(*(longlong *)(lVar8 + 0x20) + 0x170) <= (int)(*(uint *)(lVar20 + 0x70) & 0x3fffff)
         )) goto LAB_1402f9b06;
      local_e88 = (double)CONCAT44(local_e88._4_4_,0xffffffff);
      FUN_144b3f870(lVar20 + 0x70,&local_168,plVar7,&local_e88);
      uVar34 = (uint)(float)local_e88;
      uVar25 = (uint)(float)local_e88;
      if (iVar19 - uVar15 != -1) {
        local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168);
        uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160);
        if (((float)local_168 == -NAN) ||
           (local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168),
           uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160),
           (float)local_e88 == -NAN)) goto LAB_1402f9b06;
        uVar16 = (uint)(float)local_168 & 0x3fffff;
        lVar20 = *(longlong *)
                  (*(longlong *)(plVar7[7] + (ulonglong)(((uint)(float)local_168 >> 0x16) * 0x120))
                  + 0x20);
        if ((int)uVar16 < *(int *)(lVar20 + 0x30)) {
          plVar27 = (longlong *)(lVar20 + 0xc0);
          uVar25 = uVar16;
          if ((*(int *)(lVar20 + 0x78) == 0) ||
             (uVar25 = *(uint *)(*(longlong *)(lVar20 + 0x70) + (ulonglong)uVar16 * 4),
             uVar25 != 0xffffffff)) goto LAB_1402f9084;
          lVar24 = *(longlong *)(lVar20 + 0x28);
        }
        else {
          plVar27 = (longlong *)(lVar20 + 0xe0);
          uVar25 = uVar16 - *(int *)(lVar20 + 0x30);
LAB_1402f9084:
          uVar16 = uVar25;
          lVar24 = *plVar27;
        }
        uVar6 = *(uint *)(lVar24 + 0xc + (longlong)(int)uVar16 * 0x14);
        uVar25 = *(int *)(lVar20 + 0x17c) << 0x16 | uVar6 & 0x3fffff;
        if ((*(byte *)(lVar24 + 0x10 + (longlong)(int)uVar16 * 0x14) & 0x40) != 0) {
          uVar25 = uVar6;
        }
        if (uVar6 == 0xffffffff) {
          uVar25 = uVar6;
        }
      }
      if (uVar25 == 0xffffffff) goto LAB_1402f9b06;
      local_f48 = (undefined4 *)(CONCAT44(local_f48._4_4_,(float)local_e88) & 0xffffffff003fffff);
      fVar35 = (float)FUN_144b3dde0(lVar8,&local_f48,&local_ff8,&local_e88);
      if (fVar35 < fVar64) {
        local_1078 = (double)(CONCAT44(local_1078._4_4_,uVar34) & 0xffffffff003fffff);
        FUN_144b3dd40(lVar8,&local_1078,&local_168);
        auVar62._4_4_ = local_168._4_4_;
        auVar62._0_4_ = (float)local_168;
        auVar62._8_4_ = (float)uStack_160;
        auVar62._12_4_ = uStack_160._4_4_;
        auVar39._0_4_ = (float)local_e88 * (float)local_168;
        auVar39._4_4_ = local_e88._4_4_ * local_168._4_4_;
        auVar39._8_4_ = (float)uStack_e80 * (float)uStack_160;
        auVar39._12_4_ = uStack_e80._4_4_ * uStack_160._4_4_;
        auVar40 = blendps(auVar39,auVar62,8);
        fVar42 = auVar40._4_4_ + auVar40._0_4_;
        fVar44 = auVar40._0_4_ + auVar40._4_4_;
        fVar46 = auVar40._12_4_ + auVar40._8_4_;
        fVar48 = auVar40._8_4_ + auVar40._12_4_;
        auVar41._0_4_ = 0.0 - (fVar46 + fVar42);
        auVar41._4_4_ = 0.0 - (fVar48 + fVar44);
        auVar41._8_4_ = 0.0 - (fVar42 + fVar46);
        auVar41._12_4_ = 0.0 - (fVar44 + fVar48);
        fVar42 = (float)local_168 * *(float *)(lVar8 + 0xc0);
        fVar44 = local_168._4_4_ * *(float *)(lVar8 + 0xc4);
        fVar46 = (float)uStack_160 * *(float *)(lVar8 + 200);
        fVar48 = fVar42 + fVar44;
        fVar42 = fVar42 + fVar44;
        auVar40._4_4_ = fVar46 + fVar48;
        auVar40._0_4_ = fVar46 + fVar48;
        auVar40._8_4_ = fVar46 + fVar42;
        auVar40._12_4_ = fVar46 + fVar42;
        auVar40 = divps(auVar41,auVar40);
        if (ABS(auVar40._0_4_) < 1.0) {
          fVar57 = (float)local_e88 + *(float *)(lVar8 + 0xc0) * auVar40._0_4_;
          fVar58 = local_e88._4_4_ + *(float *)(lVar8 + 0xc4) * auVar40._4_4_;
          fVar59 = (float)uStack_e80 + *(float *)(lVar8 + 200) * auVar40._8_4_;
          fVar60 = uStack_e80._4_4_ + *(float *)(lVar8 + 0xcc) * auVar40._12_4_;
          uVar33 = uVar28;
          fVar64 = fVar35;
          if ((fVar35 == 0.0) && (iVar30 = iVar19, !NAN(fVar35))) break;
        }
      }
      iVar30 = (int)uVar33;
      uVar28 = (ulonglong)(iVar19 + 1U);
    } while (iVar19 + 1U != uVar15);
    if (iVar30 < 0) goto LAB_1402f9b06;
    iVar19 = iVar30;
    if ((char)param_1[0x83] == '\x01') {
      local_109c = FUN_144b3fa10(param_1[0x6c]);
      if (iVar30 < local_109c) {
        iVar17 = iVar30;
        do {
          lVar24 = FUN_144b3f860(param_1[0x6c],iVar17);
          lVar20 = param_1[0x81];
          lVar8 = param_1[0x82];
          uVar15 = *(uint *)((longlong)param_1 + 0x40c);
          local_10b8 = CONCAT44(local_10b8._4_4_,*(undefined4 *)((longlong)param_1 + 0x414));
          FUN_144b3f870(lVar24 + 0x70,&local_168,plVar7,&local_e88);
          if (((((float)local_168 != -NAN) &&
               ((float)local_168 == (float)((int)lVar20 << 0x16 | uVar15))) &&
              ((float)local_e88 != -NAN)) &&
             (iVar19 = iVar17, (float)local_e88 == (float)((int)lVar8 << 0x16 | (uint)local_10b8)))
          break;
          iVar17 = iVar17 + 1;
          iVar19 = iVar30;
        } while (local_109c != iVar17);
      }
      bVar9 = iVar30 < iVar19;
    }
    else {
      bVar9 = false;
    }
    FUN_144b3fa20(param_1[0x6c],&local_1078,plVar7,iVar19);
    if ((uint)local_1078 == 0xffffffff) goto LAB_1402f9b06;
    uVar15 = (uint)local_1078 >> 0x16;
    FUN_144b3fa50(&local_168,*(longlong *)(plVar7[7] + (ulonglong)(uVar15 * 0x120)) + 0x60,
                  &local_ff8);
    if (iVar19 < 0) goto LAB_1402f9b06;
    iVar17 = FUN_144b3fa10(param_1[0x6c]);
    if (iVar17 <= iVar19) goto LAB_1402f9b06;
    lVar20 = FUN_144b3f860(param_1[0x6c],iVar19);
    if (((*(byte *)(lVar20 + 0x80) & 0x10) != 0) && (uVar15 == *(uint *)(lVar20 + 0x70) >> 0x16)) {
      FUN_144b3fc20(param_1[0x6c],&local_f48,iVar19);
      local_10e8 = (longlong *)CONCAT44(local_10e8._4_4_,*local_f48);
      FUN_1407d3844(&local_e88,local_10a8,plVar7,lVar20 + 0x70);
      memcpy(local_10b0,&local_e88,0xa0);
      *(undefined1 *)(param_1 + 0x83) = 1;
      if (((int)param_1[0x6f] == -1) || ((param_1[0x71] == 0 || (param_1[0x72] == 0)))) {
        *(undefined1 *)(param_1 + 0x83) = 0;
        goto LAB_1402f9b06;
      }
      dVar36 = (double)param_1[0x75];
      dVar3 = (double)param_1[0x76];
      dVar4 = (double)param_1[0x79];
      dVar49 = dVar3 - dVar4;
      dVar5 = (double)param_1[0x78];
      dVar61 = dVar36 - dVar5;
      dVar65 = dVar61 * dVar61 + dVar49 * dVar49;
      if (((dVar65 != 1.0) || (dVar50 = dVar49, dVar11 = dVar61, NAN(dVar65))) &&
         (dVar50 = DAT_14c8464e8, dVar11 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar65)) {
        dVar50 = dVar49 * (1.0 / SQRT(dVar65));
        dVar11 = dVar61 * (1.0 / SQRT(dVar65));
      }
      dVar66 = (double)((*(float *)(param_1 + 0x73) - *(float *)(param_1 + 0x74)) +
                       *(float *)((longlong)param_1 + 0x3a4));
      dVar65 = dVar11 * dVar66;
      dVar66 = dVar66 * -dVar50;
      dVar49 = (double)*(float *)((longlong)param_1 + 0x3a4);
      dVar51 = dVar50 * dVar49;
      dVar49 = dVar49 * dVar11;
      pdVar23 = (double *)&uStack_e80;
      local_e88 = (dVar36 - dVar66) + dVar49;
      uStack_e80 = (dVar3 - dVar65) + dVar51;
      dVar61 = (double)*(float *)(param_1 + 0x74);
      dVar11 = dVar11 * dVar61;
      dVar61 = -dVar50 * dVar61;
      dStack_e70 = dVar36 + dVar61 + dVar49;
      local_e68 = dVar3 + dVar11 + dVar51;
      local_e58 = (dVar61 + dVar5) - dVar49;
      uStack_e50 = (dVar11 + dVar4) - dVar51;
      local_e40 = (longlong *)((dVar5 - dVar66) - dVar49);
      local_e38 = (dVar4 - dVar65) - dVar51;
      lVar20 = 1;
      do {
        if (lVar20 == 5) {
          iVar19 = iVar19 + 1;
          iVar17 = FUN_144b3fa10(param_1[0x6c]);
          bVar9 = true;
          fVar64 = (float)local_168;
          fVar35 = local_168._4_4_;
          fVar42 = (float)uStack_160;
          iVar30 = iVar19;
          auVar40 = _DAT_1499314a0;
          if (iVar17 <= iVar19) goto LAB_1402f9b06;
          goto LAB_1402f89a0;
        }
        pdVar1 = pdVar23 + -1;
        dVar36 = *pdVar23;
        uVar28 = (ulonglong)((uint)lVar20 & 3);
        lVar20 = lVar20 + 1;
        pdVar23 = pdVar23 + 3;
      } while (0.0 <= (float)(((double)(&local_e88)[uVar28 * 3] - *pdVar1) *
                              ((double)local_ff8._4_4_ * 100.0 - dVar36) -
                             ((double)(&uStack_e80)[uVar28 * 3] - dVar36) *
                             ((double)(float)local_ff8 * 100.0 - *pdVar1)));
    }
    if (bVar9) {
      iVar19 = iVar30;
    }
    bVar9 = false;
    fVar64 = (float)local_168;
    fVar35 = local_168._4_4_;
    fVar42 = (float)uStack_160;
    iVar30 = iVar19;
    auVar40 = _DAT_1499314a0;
LAB_1402f89a0:
    do {
      iVar17 = iVar30;
      if (iVar17 < 1) break;
      iVar30 = iVar17 + -1;
      lVar20 = FUN_144b3f860(param_1[0x6c],iVar30);
      if ((*(byte *)(lVar20 + 0x80) & 0x10) != 0) break;
      pfVar21 = (float *)FUN_144b3f860(param_1[0x6c],iVar30);
      fVar55 = fVar42 * pfVar21[0x14] +
               fVar35 * pfVar21[0x10] + fVar64 * pfVar21[0xc] + pfVar21[0x18];
      fVar56 = fVar42 * pfVar21[0x15] +
               fVar35 * pfVar21[0x11] + fVar64 * pfVar21[0xd] + pfVar21[0x19];
      fVar42 = fVar42 * pfVar21[0x16] +
               fVar35 * pfVar21[0x12] + fVar64 * pfVar21[0xe] + pfVar21[0x1a];
      fVar64 = *pfVar21;
      fVar35 = pfVar21[1];
      fVar44 = pfVar21[2];
      fVar46 = pfVar21[8];
      fVar48 = pfVar21[9];
      fVar13 = pfVar21[10];
      fVar43 = pfVar21[4] - fVar55;
      fVar45 = pfVar21[5] - fVar56;
      fVar47 = pfVar21[6] - fVar42;
      if (0.0 < ((fVar35 - fVar56) * fVar43 - fVar45 * (fVar64 - fVar55)) * fVar13 +
                ((fVar44 - fVar42) * fVar45 - fVar47 * (fVar35 - fVar56)) * fVar46 +
                ((fVar64 - fVar55) * fVar47 - fVar43 * (fVar44 - fVar42)) * fVar48) break;
      fVar43 = pfVar21[4] - fVar64;
      fVar45 = pfVar21[5] - fVar35;
      fVar47 = pfVar21[6] - fVar44;
      fVar52 = fVar46 * fVar43;
      fVar53 = fVar48 * fVar45;
      fVar54 = fVar13 * fVar47;
      fVar63 = fVar52 + fVar53;
      fVar43 = fVar43 - (fVar54 + fVar63) * fVar46;
      fVar45 = fVar45 - (fVar54 + fVar63) * fVar48;
      fVar47 = fVar47 - (fVar54 + fVar52 + fVar53) * fVar13;
      fVar52 = fVar47 * fVar47;
      fVar53 = fVar43 * fVar43 + fVar45 * fVar45;
      fVar54 = fVar43 * fVar43 + fVar45 * fVar45;
      auVar10._4_4_ = fVar52 + fVar53;
      auVar10._0_4_ = fVar52 + fVar53;
      auVar10._8_4_ = fVar52 + fVar54;
      auVar10._12_4_ = fVar52 + fVar54;
      auVar62 = divps(_DAT_14c6daca0,auVar10);
      fVar54 = fVar46 * (fVar55 - fVar64);
      fVar63 = fVar48 * (fVar56 - fVar35);
      fVar68 = fVar13 * (fVar42 - fVar44);
      fVar53 = fVar54 + fVar63;
      fVar52 = (fVar55 - fVar64) - (fVar68 + fVar53) * fVar46;
      fVar53 = (fVar56 - fVar35) - (fVar68 + fVar53) * fVar48;
      fVar54 = (fVar42 - fVar44) - (fVar68 + fVar54 + fVar63) * fVar13;
      fVar64 = fVar43 * fVar52;
      fVar35 = fVar45 * fVar53;
      fVar44 = fVar47 * fVar54;
      fVar63 = fVar64 + fVar35;
      fVar64 = fVar64 + fVar35;
      auVar67._0_4_ = (fVar44 + fVar63) * auVar62._0_4_;
      auVar67._4_4_ = (fVar44 + fVar63) * auVar62._4_4_;
      auVar67._8_4_ = (fVar44 + fVar64) * auVar62._8_4_;
      auVar67._12_4_ = (fVar44 + fVar64) * auVar62._12_4_;
      auVar62 = minps(auVar67,auVar40);
      auVar62 = maxps(auVar62,ZEXT816(0));
      fVar52 = fVar52 - auVar62._0_4_ * fVar43;
      fVar53 = fVar53 - auVar62._4_4_ * fVar45;
      fVar54 = fVar54 - auVar62._8_4_ * fVar47;
      fVar64 = fVar46 * fVar52;
      fVar35 = fVar48 * fVar53;
      fVar44 = fVar13 * fVar54;
      fVar45 = fVar64 + fVar35;
      fVar43 = ((0.0 - pfVar21[7]) - pfVar21[3]) * auVar62._0_4_ + pfVar21[3];
      fVar52 = fVar52 - (fVar44 + fVar45) * fVar46;
      fVar53 = fVar53 - (fVar44 + fVar45) * fVar48;
      fVar54 = fVar54 - (fVar44 + fVar64 + fVar35) * fVar13;
      fVar64 = fVar55;
      fVar35 = fVar56;
    } while (fVar54 * fVar54 + fVar52 * fVar52 + fVar53 * fVar53 < fVar43 * fVar43);
    local_1088 = CONCAT44(iVar17,iVar19);
    if ((!bVar9) && ((char)param_1[0x83] == '\x01')) {
      *(undefined1 *)(param_1 + 0x83) = 0;
    }
    uVar34 = (uint)local_1078 >> 0x16;
    uVar15 = (uint)local_1078 & 0x3fffff;
    uVar25 = uVar34;
    if ((uint)local_1078 == 0xffffffff) {
      uVar15 = 0xffffffff;
      uVar25 = 0xffffffff;
    }
    local_f48 = (undefined4 *)CONCAT44(uVar15,uVar25);
    uStack_f40 = CONCAT44(uStack_f40._4_4_,1);
    local_168 = (double)fVar57 * 100.0;
    uStack_160 = (double)fVar58 * 100.0;
    local_158 = (double)fVar59 * 100.0;
    FUN_1402fa1c0(&local_e88,&local_168,&local_f48,param_1[2]);
    plVar27 = local_e40;
    param_1[0x2d] = (longlong)local_e88;
    *(float *)(param_1 + 0x2e) = (float)uStack_e80;
    param_1[0x2f] = local_e78;
    param_1[0x30] = (longlong)dStack_e70;
    param_1[0x31] = (longlong)local_e68;
    param_1[0x32] = lStack_e60;
    *(undefined4 *)(param_1 + 0x33) = (undefined4)local_e58;
    *(undefined4 *)((longlong)param_1 + 0x19c) = local_e58._4_4_;
    *(undefined4 *)(param_1 + 0x34) = (undefined4)uStack_e50;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_e50._4_4_;
    if (param_1 + 0x35 != &local_e48) {
      param_1[0x35] = local_e48;
      local_e48 = 0;
      plVar32 = (longlong *)param_1[0x36];
      if (local_e40 != plVar32) {
        local_e40 = (longlong *)0x0;
        param_1[0x36] = (longlong)plVar27;
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          plVar27 = plVar32 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*plVar32)(plVar32);
            LOCK();
            piVar2 = (int *)((longlong)plVar32 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
            }
          }
        }
      }
    }
    plVar27 = local_e40;
    *(undefined4 *)(param_1 + 0x37) = local_e38._0_4_;
    if (local_e40 != (longlong *)0x0) {
      LOCK();
      plVar32 = local_e40 + 1;
      *(int *)plVar32 = (int)*plVar32 + -1;
      UNLOCK();
      if ((int)*plVar32 == 0) {
        (**(code **)*local_e40)(local_e40);
        LOCK();
        piVar2 = (int *)((longlong)plVar27 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    pdVar23 = (double *)(param_1 + 0x38);
    if ((char)param_1[0x5c] == '\x01') {
      FUN_140302978(pdVar23);
      *(undefined1 *)(param_1 + 0x5c) = 0;
    }
    if ((char)param_1[0x83] == '\x01') {
      local_158 = DAT_14cb1d018;
      local_168._0_4_ = SUB84(_DAT_14cb1d008,0);
      local_168._4_4_ = (float)((ulonglong)_DAT_14cb1d008 >> 0x20);
      uStack_160._0_4_ = (float)_DAT_14cb1d010;
      uStack_160._4_4_ = (float)((ulonglong)_DAT_14cb1d010 >> 0x20);
      uStack_150 = DAT_14cb1d020;
      local_148 = DAT_14cb1d028;
      uStack_140 = DAT_14cb1d030;
      local_138 = _DAT_14cb1d008;
      uStack_130 = _DAT_14cb1d010;
      local_128 = DAT_14cb1d018;
      local_100 = (longlong *)0x0;
      local_f8 = 0xffffffff;
      local_f38 = DAT_14cb1d018;
      local_f48 = _DAT_14cb1d008;
      uStack_f40 = _DAT_14cb1d010;
      local_f30 = DAT_14cb1d020;
      uStack_f28 = DAT_14cb1d028;
      local_f20 = DAT_14cb1d030;
      local_f18 = _DAT_14cb1d008;
      uStack_f10 = _DAT_14cb1d010;
      local_f08 = DAT_14cb1d018;
      local_f00 = DAT_14cb1d020;
      uStack_ef8 = DAT_14cb1d028;
      local_ef0 = DAT_14cb1d030;
      local_ee8 = 0;
      plStack_ee0 = (longlong *)0x0;
      local_ed8 = 0xffffffff;
      lVar20 = *local_10a8;
      local_10e0 = &local_eb8;
      local_10e8 = &local_ea0;
      local_10d8 = (undefined8 *)((ulonglong)local_10d8 & 0xffffffff00000000);
      FUN_1407d44e4(local_10b0,local_1098,local_fe0,&local_f78);
      dVar36 = 0.0;
      if (((local_f78 != 0.0) || (NAN(local_f78))) ||
         (((double)plStack_f70 != 0.0 || (NAN((double)plStack_f70))))) {
        dVar36 = atan2((double)plStack_f70,local_f78);
        dVar36 = (double)(float)(dVar36 * 57.29577951308232);
      }
      local_ff8 = 0;
      local_fe8 = 0;
      local_10b8 = lVar20;
      uStack_ff0 = dVar36;
      FUN_14494abfa(&local_1078,lVar20,(int)param_1[0x81]);
      FUN_140183318(&local_e88,&local_ff8,&local_1078);
      puVar29 = &local_e88;
      puVar31 = &local_168;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar31 = *puVar29;
        puVar29 = puVar29 + 1;
        puVar31 = puVar31 + 1;
      }
      plVar27 = local_e20;
      local_108 = local_e28;
      local_e28 = 0;
      if (local_e20 != (longlong *)0x0) {
        local_e20 = (longlong *)0x0;
        local_100 = plVar27;
      }
      local_f8 = (undefined4)local_e18;
      if (plStack_1070 != (longlong *)0x0) {
        LOCK();
        plVar27 = plStack_1070 + 1;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)*plVar27 == 0) {
          (**(code **)*plStack_1070)(plStack_1070);
          LOCK();
          piVar2 = (int *)((longlong)plStack_1070 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plStack_1070 + 0x10))(plStack_1070);
          }
        }
      }
      lVar20 = local_10b8;
      plStack_1070 = (longlong *)0x0;
      if ((((local_eb8 != 0.0) || (NAN(local_eb8))) || (local_eb0 != 0.0)) || (NAN(local_eb0))) {
        dVar36 = atan2(local_eb0,local_eb8);
        plStack_1070 = (longlong *)(double)(float)(dVar36 * 57.29577951308232);
      }
      local_1078 = 0.0;
      local_1068 = 0.0;
      dStack_1060 = (double)local_ea0;
      dStack_1058 = (double)uStack_e98;
      local_1050 = (double)local_e90;
      FUN_14494abfa(local_ed0,lVar20,(int)param_1[0x81]);
      FUN_140183318(&local_e88,&local_1078,local_ed0);
      puVar29 = &local_e88;
      puVar31 = &local_f48;
      for (lVar20 = 0xc; plVar32 = local_e20, plVar27 = plStack_ee0, lVar20 != 0;
          lVar20 = lVar20 + -1) {
        *puVar31 = *puVar29;
        puVar29 = puVar29 + 1;
        puVar31 = puVar31 + 1;
      }
      local_ee8 = local_e28;
      local_e28 = 0;
      if (local_e20 == plStack_ee0) {
LAB_1402f97a0:
        plVar27 = local_e20;
        local_ed8 = (undefined4)local_e18;
        if (local_e20 != (longlong *)0x0) {
          LOCK();
          plVar32 = local_e20 + 1;
          *(int *)plVar32 = (int)*plVar32 + -1;
          UNLOCK();
          if ((int)*plVar32 == 0) {
            (**(code **)*local_e20)(local_e20);
            LOCK();
            piVar2 = (int *)((longlong)plVar27 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
            }
          }
        }
      }
      else {
        local_e20 = (longlong *)0x0;
        plStack_ee0 = plVar32;
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          plVar32 = plVar27 + 1;
          *(int *)plVar32 = (int)*plVar32 + -1;
          UNLOCK();
          if ((int)*plVar32 == 0) {
            (**(code **)*plVar27)(plVar27);
            LOCK();
            piVar2 = (int *)((longlong)plVar27 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
            }
          }
          goto LAB_1402f97a0;
        }
        local_ed8 = (undefined4)local_e18;
        plStack_ee0 = plVar32;
      }
      if (local_ec8 != (longlong *)0x0) {
        LOCK();
        plVar27 = local_ec8 + 1;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)*plVar27 == 0) {
          (**(code **)*local_ec8)(local_ec8);
          LOCK();
          piVar2 = (int *)((longlong)local_ec8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_ec8 + 0x10))(local_ec8);
          }
        }
      }
      local_f68 = local_158;
      local_f78 = (double)CONCAT44(local_168._4_4_,(float)local_168);
      plStack_f70 = (longlong *)CONCAT44(uStack_160._4_4_,(float)uStack_160);
      dStack_f60 = *local_1098;
      dStack_f58 = local_1098[1];
      dStack_f50 = local_1098[2];
      FUN_140183318(&local_ff8,&local_f78,&local_108);
      local_10d0 = param_1[0x27];
      local_10e8 = param_1 + 0x28;
      dStack_1058 = dStack_f58;
      local_1050 = dStack_f50;
      local_1068 = local_f68;
      dStack_1060 = dStack_f60;
      local_1078 = local_f78;
      plStack_1070 = plStack_f70;
      local_1048 = _DAT_14cb1c848;
      uStack_1040 = _DAT_14cb1c850;
      local_1038 = DAT_14cb1c858;
      local_1030 = DAT_14cb1c860;
      uStack_1028 = DAT_14cb1c868;
      local_1020 = DAT_14cb1c870;
      local_1018 = 0;
      uStack_1010 = 0;
      local_1008 = 0xffffffff;
      local_10d8 = (undefined8 *)
                   CONCAT44(local_10d8._4_4_,
                            (float)(*(uint *)(param_1 + 0x6f) >> 5 & 0x1ffffff) * 2.9802322e-08 *
                            *(float *)(&DAT_14ab9fa70 +
                                      (ulonglong)(*(char *)(param_1[0x71] + 0x3c) == '\x03') * 4));
      local_10e0 = (double *)local_10b0;
      local_10c8 = 0;
      FUN_140f30c7e(&local_e88,param_1[0x72],&local_1078,&local_f48);
      if (local_f90 != (longlong *)0x0) {
        LOCK();
        plVar27 = local_f90 + 1;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)*plVar27 == 0) {
          (**(code **)*local_f90)(local_f90);
          LOCK();
          piVar2 = (int *)((longlong)local_f90 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_f90 + 0x10))(local_f90);
          }
        }
      }
      plVar27 = plStack_ee0;
      if (plStack_ee0 != (longlong *)0x0) {
        LOCK();
        plVar32 = plStack_ee0 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*plStack_ee0)(plStack_ee0);
          LOCK();
          piVar2 = (int *)((longlong)plVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      plVar27 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar32 = local_100 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)plVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      plVar27 = plStack_d98;
      if ((double *)&local_e88 == pdVar23) {
        if (plStack_d98 != (longlong *)0x0) {
          LOCK();
          plVar32 = plStack_d98 + 1;
          *(int *)plVar32 = (int)*plVar32 + -1;
          UNLOCK();
          if ((int)*plVar32 == 0) {
            (**(code **)*plStack_d98)(plStack_d98);
            LOCK();
            piVar2 = (int *)((longlong)plVar27 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
            }
          }
        }
      }
      else {
        if ((char)param_1[0x5c] == '\x01') {
          FUN_140302978(pdVar23);
        }
        *pdVar23 = local_e88;
        param_1[0x39] = (longlong)uStack_e80;
        plVar27 = &local_e78;
        plVar32 = param_1 + 0x3a;
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *plVar32 = *plVar27;
          plVar27 = plVar27 + 1;
          plVar32 = plVar32 + 1;
        }
        param_1[0x46] = local_e18;
        param_1[0x47] = (longlong)plStack_e10;
        local_e18 = 0;
        plStack_e10 = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0x48) = local_e08;
        plVar27 = local_e00;
        plVar32 = param_1 + 0x49;
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *plVar32 = *plVar27;
          plVar27 = plVar27 + 1;
          plVar32 = plVar32 + 1;
        }
        param_1[0x55] = local_da0;
        param_1[0x56] = (longlong)plStack_d98;
        local_da0 = 0;
        plStack_d98 = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0x57) = local_d90;
        param_1[0x58] = local_d88;
        param_1[0x59] = CONCAT35(uStack_d7b,uStack_d80);
        *(ulonglong *)((longlong)param_1 + 0x2cd) = CONCAT53(uStack_d78,uStack_d7b);
        *(undefined8 *)((longlong)param_1 + 0x2d5) = uStack_d73;
        *(undefined1 *)(param_1 + 0x5c) = 1;
      }
      plVar27 = plStack_e10;
      if (plStack_e10 != (longlong *)0x0) {
        LOCK();
        plVar32 = plStack_e10 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*plStack_e10)(plStack_e10);
          LOCK();
          piVar2 = (int *)((longlong)plVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168);
      uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160);
      if ((char)param_1[0x83] == '\x01') {
        *(undefined1 *)(param_1 + 0x83) = 0;
        local_168 = (double)CONCAT44(local_168._4_4_,(float)local_168);
        uStack_160 = (double)CONCAT44(uStack_160._4_4_,(float)uStack_160);
      }
    }
    if ((char)param_1[0x5c] == '\0') {
      local_138 = (undefined4 *)CONCAT44(local_138._4_4_,0xfffffc00);
      lVar20 = *(longlong *)(plVar7[7] + (ulonglong)(uVar34 * 0x120));
      fVar57 = fVar57 - *(float *)(lVar20 + 0x90);
      fVar58 = fVar58 - *(float *)(lVar20 + 0x94);
      fVar59 = fVar59 - *(float *)(lVar20 + 0x98);
      fVar60 = fVar60 - *(float *)(lVar20 + 0x9c);
      fVar64 = fVar57 * *(float *)(lVar20 + 0x80);
      fVar35 = fVar58 * *(float *)(lVar20 + 0x84);
      fVar42 = fVar60 * *(float *)(lVar20 + 0x8c);
      auVar37._4_4_ = *(float *)(lVar20 + 0x78) * fVar59;
      auVar37._0_4_ = *(float *)(lVar20 + 0x68) * fVar59;
      auVar37._8_4_ = *(float *)(lVar20 + 0x6c) * fVar60;
      auVar37._12_4_ = *(float *)(lVar20 + 0x7c) * fVar60;
      auVar12._4_4_ = fVar35;
      auVar12._0_4_ = fVar64;
      auVar12._8_4_ = fVar59 * *(float *)(lVar20 + 0x88);
      auVar12._12_4_ = fVar42;
      auVar40 = blendps(auVar37,auVar12,0xc);
      local_f48 = (undefined4 *)
                  CONCAT44(*(float *)(lVar20 + 0x74) * fVar58 + *(float *)(lVar20 + 0x70) * fVar57 +
                           auVar40._4_4_,
                           *(float *)(lVar20 + 100) * fVar58 + *(float *)(lVar20 + 0x60) * fVar57 +
                           auVar40._0_4_);
      uStack_f40 = CONCAT44(fVar42 + fVar35 + auVar40._12_4_,fVar35 + fVar64 + auVar40._8_4_);
      uVar15 = 0xffffffff;
      uVar18 = 0xffffffff;
      uVar26 = 0xffffffff;
      if ((int)param_1[0x2e] == 1) {
        uVar18 = (undefined4)param_1[0x2d];
        uVar26 = *(undefined4 *)((longlong)param_1 + 0x16c);
      }
      local_e88 = (double)CONCAT44(uVar26,uVar18);
      FUN_1402f9d58(*(undefined8 *)(param_1[2] + 0x598),&local_1078,&local_e88);
      FUN_1402f9e06(&local_e88,local_10a8,*(undefined8 *)(local_1080 + 0x78),&local_1078);
      while( true ) {
        local_10e0 = (double *)&local_168;
        local_10e8 = plVar7;
        local_108c = uVar34;
        iVar19 = FUN_144b3fc50(param_1[0x6c],local_1088._4_4_,&local_f48,&local_108c);
        if (iVar19 != 0) break;
        uVar15 = uVar15 + 1;
        if (3 < uVar15) goto LAB_1402f8e6c;
        if ((((local_138._4_4_ != 0.0) || (NAN(local_138._4_4_))) &&
            ((local_138._4_4_ != 1.0 || (NAN(local_138._4_4_))))) || (uStack_140._4_4_ != 0.0))
        goto LAB_1402f8e6c;
        lVar20 = param_1[0x6c];
        pfVar21 = (float *)FUN_144b3f860(lVar20,(ulonglong)local_138 & 0xffffffff);
        auVar38._4_4_ = -(uint)(pfVar21[5] != pfVar21[1]);
        auVar38._0_4_ = -(uint)(pfVar21[4] != *pfVar21);
        auVar38._8_4_ = -(uint)(pfVar21[6] != pfVar21[2]);
        auVar38._12_4_ = -(uint)(pfVar21[7] != pfVar21[3]);
        iVar19 = movmskps((int)lVar20,auVar38);
        if (iVar19 == 0) goto LAB_1402f8e6c;
        if (((uint)pfVar21[0x20] & 0x10) != 0) {
          FUN_144b40820(&local_f78,pfVar21,plVar7,&local_ff8);
          if (local_f78._0_4_ == -1) goto LAB_1402f9a6d;
        }
        local_ff8 = 0x3a83126f3a83126f;
        uStack_ff0 = 7.703123377519368e-27;
        local_10d8 = &local_ff8;
        local_10e8 = plVar7;
        local_10e0 = (double *)&local_e88;
        iVar19 = FUN_144b3fbe0(param_1[0x6c],(ulonglong)local_138 & 0xffffffff,
                               -(local_138._4_4_ == 0.0) & 1,&local_1088);
        if (iVar19 != 0) goto LAB_1402f8e6c;
      }
      if (iVar19 - 2U < 3) {
LAB_1402f9a6d:
        FUN_1402fd888(param_1);
        FUN_144b3fa90(&local_e88);
        goto LAB_1402f8fac;
      }
LAB_1402f8e6c:
      FUN_144b3fa90(&local_e88);
      if ((int)local_138 == -0x400) goto LAB_1402f9b06;
      param_1[0x5d] = local_1088;
      param_1[0x5e] = (longlong)((double)(float)local_168 * 100.0);
      param_1[0x5f] = (longlong)((double)local_168._4_4_ * 100.0);
      param_1[0x60] = (longlong)((double)(float)uStack_160 * 100.0);
      param_1[0x61] = 0x3ff0000000000000;
      param_1[0x62] = (longlong)(double)(float)local_158;
      param_1[99] = (longlong)(double)local_158._4_4_;
      param_1[100] = (longlong)(double)(float)uStack_150;
      param_1[0x65] = 0x3ff0000000000000;
      param_1[0x66] = (longlong)((double)(float)local_148 * 100.0);
      param_1[0x67] = (longlong)((double)local_148._4_4_ * 100.0);
      param_1[0x68] = (longlong)((double)(float)uStack_140 * 100.0);
      param_1[0x69] = 0x3ff0000000000000;
      *(int *)(param_1 + 0x6a) = (int)local_138;
      *(float *)((longlong)param_1 + 0x354) = local_138._4_4_;
    }
    FUN_1402f9fda(param_1 + 0x19,&local_e88);
  }
LAB_1402f8fac:
  if (DAT_14cb1d000 != 0) {
    pvVar22 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar22 + -1));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(local_1080 + 0x250));
LAB_1402f8fe0:
  if ((local_f0 ^ (ulonglong)auStack_1108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402f9d0a FUN_1402f9d0a body=78 status=ok
// SIG undefined FUN_1402f9d0a(void)

longlong * FUN_1402f9d0a(longlong *param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x598);
  *param_1 = lVar2;
  if (DAT_14cb1d000 != 0) {
    pvVar1 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar1 + 1));
    lVar2 = *param_1;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x250));
  return param_1;
}



// FUNCTION 1402f9d58 FUN_1402f9d58 body=174 status=ok
// SIG undefined FUN_1402f9d58(void)

void FUN_1402f9d58(longlong param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = -1;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar1 = *param_3;
    if ((((-1 < (int)uVar1) && (-1 < (int)param_3[1])) &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x140), lVar4 != 0)) &&
       ((((int)uVar1 < *(int *)(lVar4 + 0x40) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + (ulonglong)uVar1 * 0x120), lVar4 != 0)
         ) && (lVar4 = *(longlong *)(lVar4 + 0x20),
              (int)param_3[1] < *(int *)(lVar4 + 0xd8) + *(int *)(lVar4 + 0x20))))) {
      iVar3 = *(int *)(lVar4 + 0x180);
    }
  }
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    piVar2 = *(int **)(param_1 + 0x188);
    lVar4 = (longlong)*(int *)(param_1 + 400) * 0xc;
    do {
      if (*piVar2 == iVar3) {
        if (piVar2 != (int *)0x0) {
          *(int *)(param_2 + 1) = piVar2[2];
          *param_2 = *(undefined8 *)piVar2;
          return;
        }
        break;
      }
      piVar2 = piVar2 + 3;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  *param_2 = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return;
}



// FUNCTION 1402f9e06 FUN_1402f9e06 body=376 status=ok
// SIG undefined FUN_1402f9e06(void)

/* WARNING: Removing unreachable block (ram,0x0001402f9f62) */
/* WARNING: Removing unreachable block (ram,0x0001402f9f6c) */

longlong FUN_1402f9e06(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 0x22);
  local_58 = param_2[0x21];
  local_48 = param_2[0x23];
  plStack_40 = (longlong *)param_2[0x24];
  if (plStack_40 == (longlong *)0x0) {
    plStack_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0x3a83126f;
  local_98 = *(undefined8 *)(param_3 + 0x140);
  local_90 = *(undefined4 *)(param_2 + 0x22);
  local_8c = *(float *)(param_2 + 0x21) * 0.01;
  uStack_70 = FUN_1402f9f7f(&local_58);
  local_84 = *(undefined8 *)(param_4 + 1);
  local_88 = *param_4;
  FUN_144b3fb20(param_1,&local_98);
  *(undefined4 *)(param_1 + 0xd08) = local_88;
  *(undefined8 *)(param_1 + 0xd0c) = local_84;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1402f9f7f FUN_1402f9f7f body=90 status=ok
// SIG undefined FUN_1402f9f7f(void)

undefined8 FUN_1402f9f7f(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) {
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
    uVar6 = *(undefined8 *)(param_1 + 0x10);
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



// FUNCTION 1402f9fda FUN_1402f9fda body=484 status=ok
// SIG undefined FUN_1402f9fda(void)

double * FUN_1402f9fda(undefined1 (*param_1) [16],double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_2[2] = DAT_14c8464f0;
  dVar4 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar4;
  if (*(longlong *)param_1[3] != 0) {
    FUN_147e49f8e(*(undefined8 *)(*(longlong *)param_1[3] + 0x598),&local_d8,
                  *(undefined4 *)param_1[4]);
    if ((local_78 & 1) != 0) {
      local_98 = *(double *)(param_1[1] + 8) * local_98;
      dStack_90 = *(double *)param_1[2] * dStack_90;
      local_88 = *(double *)(param_1[2] + 8) * local_88;
      dVar2 = dStack_90 * local_d8 - local_98 * dStack_d0;
      dVar3 = local_88 * dStack_d0 - dStack_90 * local_c8;
      dVar4 = local_98 * local_c8 - local_d8 * local_88;
      dVar3 = dVar3 + dVar3;
      dVar4 = dVar4 + dVar4;
      dVar2 = dVar2 + dVar2;
      local_b8 = (dVar2 * dStack_d0 - dVar4 * local_c8) + dStack_c0 * dVar3 + local_98 + local_b8;
      dStack_b0 = (local_c8 * dVar3 - local_d8 * dVar2) + dStack_c0 * dVar4 + dStack_90 + dStack_b0;
      local_a8 = dVar2 * dStack_c0 + local_88 + (dVar4 * local_d8 - dVar3 * dStack_d0) + local_a8;
      dVar4 = *(double *)(*param_1 + 8);
      auVar1._8_4_ = SUB84(dStack_b0,0);
      auVar1._0_8_ = local_b8;
      auVar1._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
      *param_1 = auVar1;
      dVar2 = *(double *)param_1[1];
      *(double *)param_1[1] = local_a8;
      *param_2 = local_b8 - *(double *)*param_1;
      param_2[1] = dStack_b0 - dVar4;
      param_2[2] = local_a8 - dVar2;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fa1c0 FUN_1402fa1c0 body=941 status=ok
// SIG undefined FUN_1402fa1c0(void)

undefined8 *
FUN_1402fa1c0(undefined8 *param_1,double *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  uVar5 = DAT_14cb1cdb0;
  param_1[2] = DAT_14cb1cda8;
  param_1[3] = uVar5;
  param_1[4] = DAT_14cb1cdb8;
  uVar5 = DAT_14cb1cdb0;
  param_1[5] = DAT_14cb1cda8;
  param_1[6] = uVar5;
  param_1[7] = DAT_14cb1cdb8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  dVar10 = DAT_14cb1c870;
  dVar12 = DAT_14cb1c868;
  dVar8 = DAT_14cb1c860;
  if (*(int *)(param_3 + 1) == 1) {
    FUN_14494abfa(&local_130,param_4,*(undefined4 *)param_3);
    plVar1 = local_128;
    dVar10 = DAT_14cb1c870;
    dVar12 = DAT_14cb1c868;
    dVar8 = DAT_14cb1c860;
    local_118 = *(undefined4 *)param_2;
    uStack_114 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_110 = *(undefined4 *)(param_2 + 1);
    uStack_10c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_108 = param_2[2];
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    if (local_130 != 0) {
      FUN_147e49f8e(*(undefined8 *)(local_130 + 0x598),&local_f8,local_120);
      if ((local_98 & 1) != 0) {
        dVar8 = *param_2 - local_d8;
        dVar9 = param_2[1] - dStack_d0;
        local_c8 = param_2[2] - local_c8;
        dVar10 = -(double)CONCAT44(uStack_f4,local_f8);
        dVar11 = -(double)CONCAT44(uStack_ec,uStack_f0);
        dVar6 = local_e8 * -1.0;
        dVar7 = dStack_e0 * 1.0;
        dVar14 = dVar8 * dVar6 - dVar10 * local_c8;
        dVar12 = dVar9 * dVar10 - dVar8 * dVar11;
        dVar13 = local_c8 * dVar11 - dVar9 * dVar6;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar14 + dVar14;
        dVar12 = dVar12 + dVar12;
        dVar10 = dVar7 * dVar12 + local_c8 + (dVar14 * dVar10 - dVar13 * dVar11);
        dVar8 = (dVar12 * dVar11 - dVar14 * dVar6) + dVar7 * dVar13 + dVar8;
        dVar12 = (double)CONCAT44(uStack_f4,local_f8) * dVar12 + dVar6 * dVar13 +
                 dVar7 * dVar14 + dVar9;
      }
    }
    param_1[4] = local_108;
    *(undefined4 *)(param_1 + 2) = local_118;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_114;
    *(undefined4 *)(param_1 + 3) = uStack_110;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_10c;
    auVar4._8_4_ = SUB84(dVar12,0);
    auVar4._0_8_ = dVar8;
    auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 5) = auVar4;
    param_1[7] = dVar10;
    param_1[8] = local_130;
    plVar3 = (longlong *)param_1[9];
    if (plVar1 == plVar3) {
      *(undefined4 *)(param_1 + 10) = local_120;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    else {
      param_1[9] = plVar1;
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
      *(undefined4 *)(param_1 + 10) = local_120;
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_128 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
  }
  else {
    local_e8 = param_2[2];
    local_f8 = *(undefined4 *)param_2;
    uStack_f4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_f0 = *(undefined4 *)(param_2 + 1);
    uStack_ec = *(undefined4 *)((longlong)param_2 + 0xc);
    dStack_d0 = DAT_14cb1c870;
    dStack_e0 = DAT_14cb1c860;
    local_d8 = DAT_14cb1c868;
    *(undefined4 *)(param_1 + 2) = local_f8;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_f4;
    *(undefined4 *)(param_1 + 3) = uStack_f0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_ec;
    param_1[4] = local_e8;
    param_1[5] = dVar8;
    param_1[6] = dVar12;
    param_1[7] = dVar10;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
  }
  if ((local_80 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fa56e FUN_1402fa56e body=212 status=ok
// SIG undefined FUN_1402fa56e(void)

undefined8 * FUN_1402fa56e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1449493b2();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  puVar5 = param_2 + 2;
  puVar6 = param_1 + 2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xe] = param_2[0xe];
  lVar4 = param_2[0xf];
  param_1[0xf] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar5 = param_2 + 0x11;
  puVar6 = param_1 + 0x11;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x1d] = param_2[0x1d];
  lVar4 = param_2[0x1e];
  param_1[0x1e] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  uVar1 = param_2[0x21];
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x10d);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x115);
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10d) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x115) = uVar3;
  *(undefined1 *)(param_1 + 0x65) = 2;
  return param_1;
}



// FUNCTION 1402fa642 FUN_1402fa642 body=482 status=ok
// SIG undefined FUN_1402fa642(void)

undefined8 * FUN_1402fa642(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aba5570;
  if (*(char *)(param_1 + 0x83) == '\x01') {
    *(undefined1 *)(param_1 + 0x83) = 0;
  }
  FUN_1402fa824(param_1 + 0x6c);
  plVar3 = (longlong *)param_1[0x6e];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    FUN_140302978(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  plVar3 = (longlong *)param_1[0x36];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  }
  plVar3 = (longlong *)param_1[0x26];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x20];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x17];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0xc];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402fa824 FUN_1402fa824 body=97 status=ok
// SIG undefined FUN_1402fa824(void)

void FUN_1402fa824(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001402fa881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1402fa886 FUN_1402fa886 body=243 status=ok
// SIG undefined FUN_1402fa886(void)

void FUN_1402fa886(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar6 = DAT_14cb1d030;
  uVar5 = DAT_14cb1d028;
  uVar4 = DAT_14cb1d020;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14cb1d030;
  local_48 = DAT_14cb1d020;
  uStack_40 = DAT_14cb1d028;
  local_20 = DAT_14cb1d030;
  local_30 = DAT_14cb1d020;
  uStack_28 = DAT_14cb1d028;
  *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0;
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar5;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 0x178) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x17c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x180) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x184) = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0x188) = uVar6;
  *(undefined8 *)(param_1 + 400) = uVar4;
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1b0);
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
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
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fa97a FUN_1402fa97a body=1398 status=ok
// SIG undefined FUN_1402fa97a(void)

undefined8 * FUN_1402fa97a(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  double _X;
  double _X_00;
  double _X_01;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  int iVar24;
  double *pdVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined1 auStack_e8 [44];
  undefined2 local_bc;
  undefined1 uStack_ba;
  undefined4 uStack_b9;
  undefined4 uStack_b5;
  undefined4 uStack_b1;
  undefined4 uStack_ad;
  undefined8 uStack_a9;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_ba = 0;
  local_bc = 0;
  uStack_b9 = (undefined4)DAT_14c8464e0;
  uStack_b5 = DAT_14c8464e0._4_4_;
  uStack_b1 = (undefined4)DAT_14c8464e8;
  uStack_ad = DAT_14c8464e8._4_4_;
  uStack_a9 = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x65) = 0xff;
  FUN_1449493b2(param_2);
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0xffffffff;
  param_2[0x18] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x19) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(ulonglong *)((longlong)param_2 + 0xd5) =
       CONCAT17((undefined1)uStack_b5,CONCAT43(uStack_b9,CONCAT12(uStack_ba,local_bc)));
  *(ulonglong *)((longlong)param_2 + 0xdd) =
       CONCAT17((undefined1)uStack_ad,CONCAT43(uStack_b1,uStack_b5._1_3_));
  param_2[0x1c] = CONCAT44(uStack_ad,uStack_b1);
  param_2[0x1d] = uStack_a9;
  param_2[0x1e] = 0xbf80000000000001;
  *(undefined2 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_2 + 0xfa) = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined1 *)(param_2 + 0x26) = 0;
  *(undefined4 *)((longlong)param_2 + 0x134) = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 0x56) = 0;
  *(undefined1 *)(param_2 + 0x61) = 0;
  *(undefined1 *)(param_2 + 100) = 0;
  *(undefined1 *)(param_2 + 0x65) = 3;
  *(undefined1 *)(param_2 + 0x66) = param_3;
  puVar29 = (undefined8 *)(param_1 + 0x3c0);
  puVar27 = puVar29;
  puVar28 = param_2;
  for (lVar26 = 0xf; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar28 = *puVar27;
    puVar27 = puVar27 + 1;
    puVar28 = puVar28 + 1;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x438);
  uVar9 = *(undefined4 *)(param_1 + 0x43c);
  uVar10 = *(undefined4 *)(param_1 + 0x440);
  uVar11 = *(undefined4 *)(param_1 + 0x444);
  uVar12 = *(undefined4 *)(param_1 + 0x448);
  uVar13 = *(undefined4 *)(param_1 + 0x44c);
  uVar14 = *(undefined4 *)(param_1 + 0x450);
  uVar15 = *(undefined4 *)(param_1 + 0x454);
  uVar16 = *(undefined4 *)(param_1 + 0x45c);
  uVar17 = *(undefined4 *)(param_1 + 0x460);
  uVar18 = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)((longlong)param_2 + 0x9c) = uVar16;
  *(undefined4 *)(param_2 + 0x14) = uVar17;
  *(undefined4 *)((longlong)param_2 + 0xa4) = uVar18;
  *(undefined4 *)(param_2 + 0x11) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0x8c) = uVar13;
  *(undefined4 *)(param_2 + 0x12) = uVar14;
  *(undefined4 *)((longlong)param_2 + 0x94) = uVar15;
  *(undefined4 *)(param_2 + 0xf) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x7c) = uVar9;
  *(undefined4 *)(param_2 + 0x10) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x84) = uVar11;
  uVar6 = *(undefined8 *)(param_1 + 0x468);
  lVar26 = *(longlong *)(param_1 + 0x470);
  if (lVar26 == 0) {
    param_2[0x15] = uVar6;
    param_2[0x16] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
    UNLOCK();
    plVar7 = (longlong *)param_2[0x16];
    param_2[0x15] = uVar6;
    param_2[0x16] = lVar26;
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
  }
  *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(param_1 + 0x478);
  uVar6 = *(undefined8 *)(param_1 + 0x480);
  uVar19 = *(undefined8 *)(param_1 + 0x488);
  uVar20 = *(undefined8 *)(param_1 + 0x490);
  uVar21 = *(undefined8 *)(param_1 + 0x498);
  uVar22 = *(undefined8 *)(param_1 + 0x4a8);
  param_2[0x1c] = *(undefined8 *)(param_1 + 0x4a0);
  param_2[0x1d] = uVar22;
  param_2[0x1a] = uVar20;
  param_2[0x1b] = uVar21;
  param_2[0x18] = uVar6;
  param_2[0x19] = uVar19;
  *(undefined4 *)((longlong)param_2 + 0xf7) = *(undefined4 *)(param_1 + 0x4b7);
  param_2[0x1e] = *(undefined8 *)(param_1 + 0x4b0);
  param_2[0x26] = *(undefined8 *)(param_1 + 0x4f0);
  uVar8 = *(undefined4 *)(param_1 + 0x4c0);
  uVar9 = *(undefined4 *)(param_1 + 0x4c4);
  uVar10 = *(undefined4 *)(param_1 + 0x4c8);
  uVar11 = *(undefined4 *)(param_1 + 0x4cc);
  uVar12 = *(undefined4 *)(param_1 + 0x4d0);
  uVar13 = *(undefined4 *)(param_1 + 0x4d4);
  uVar14 = *(undefined4 *)(param_1 + 0x4d8);
  uVar15 = *(undefined4 *)(param_1 + 0x4dc);
  uVar16 = *(undefined4 *)(param_1 + 0x4e4);
  uVar17 = *(undefined4 *)(param_1 + 0x4e8);
  uVar18 = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)((longlong)param_2 + 0x124) = uVar16;
  *(undefined4 *)(param_2 + 0x25) = uVar17;
  *(undefined4 *)((longlong)param_2 + 300) = uVar18;
  *(undefined4 *)(param_2 + 0x22) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0x114) = uVar13;
  *(undefined4 *)(param_2 + 0x23) = uVar14;
  *(undefined4 *)((longlong)param_2 + 0x11c) = uVar15;
  *(undefined4 *)(param_2 + 0x20) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x104) = uVar9;
  *(undefined4 *)(param_2 + 0x21) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x10c) = uVar11;
  if (puVar29 != param_2) {
    if (*(char *)(param_1 + 0x510) == '\x01') {
      param_2[0x29] = *(undefined8 *)(param_1 + 0x508);
      uVar8 = *(undefined4 *)(param_1 + 0x4fc);
      uVar9 = *(undefined4 *)(param_1 + 0x500);
      uVar10 = *(undefined4 *)(param_1 + 0x504);
      *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(param_1 + 0x4f8);
      *(undefined4 *)((longlong)param_2 + 0x13c) = uVar8;
      *(undefined4 *)(param_2 + 0x28) = uVar9;
      *(undefined4 *)((longlong)param_2 + 0x144) = uVar10;
      uVar23 = 1;
    }
    else {
      if (*(char *)(param_2 + 0x2a) != '\x01') goto LAB_1402fabd9;
      uVar23 = 0;
    }
    *(undefined1 *)(param_2 + 0x2a) = uVar23;
  }
LAB_1402fabd9:
  puVar27 = (undefined8 *)(param_1 + 0x520);
  if (puVar27 != param_2 + 0x2b) {
    if (*(char *)(param_1 + 0x678) == '\x01') {
      FUN_1402f5630(param_2 + 0x2b,puVar27);
    }
    else if (*(char *)(param_2 + 0x56) == '\x01') {
      if (*(char *)(param_2 + 0x55) == '\x01') {
        *(undefined1 *)(param_2 + 0x55) = 0;
      }
      plVar7 = (longlong *)param_2[0x41];
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
      *(undefined1 *)(param_2 + 0x56) = 0;
    }
  }
  if (*(char *)(param_1 + 0x240) == '\x01') {
    if (*(char *)(param_1 + 0x678) != '\0') {
      puVar29 = puVar27;
    }
    pdVar25 = (double *)(puVar29 + 3);
    if (*(char *)((longlong)puVar29 + 0xf9) != '\0') {
      pdVar25 = (double *)(puVar29 + 9);
    }
    _X = *(double *)(param_1 + 0x1f0);
    if ((-DAT_14cb1d020 < _X) && (_X < DAT_14cb1d020)) {
      _X_00 = *(double *)(param_1 + 0x1f8);
      if ((-DAT_14cb1d028 < _X_00) && (_X_00 < DAT_14cb1d028)) {
        _X_01 = *(double *)(param_1 + 0x200);
        if ((-DAT_14cb1d030 < _X_01) && (_X_01 < DAT_14cb1d030)) {
          dVar3 = *pdVar25;
          dVar4 = pdVar25[1];
          dVar5 = pdVar25[2];
          iVar24 = _finite(_X);
          if (iVar24 != 0) {
            iVar24 = _finite(_X_00);
            if (iVar24 != 0) {
              iVar24 = _finite(_X_01);
              if ((iVar24 != 0) &&
                 (dVar4 = dVar4 - *(double *)(param_1 + 0x1f8),
                 dVar3 = dVar3 - *(double *)(param_1 + 0x1f0),
                 (float)(dVar3 * dVar3 + dVar4 * dVar4) <=
                 *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x238) + 0.01)) {
                if (ABS((float)((double)(float)dVar5 - *(double *)(param_1 + 0x200))) <=
                    *(float *)(param_1 + 0x23c) + 0.01) {
                  FUN_1402faef2(param_2 + 0x57,param_1 + 0x1f0);
                  FUN_1402f53d2(param_2 + 0x62,param_1 + 0x248);
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_e8);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1402faef2 FUN_1402faef2 body=88 status=ok
// SIG undefined FUN_1402faef2(void)

longlong FUN_1402faef2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x50) == '\x01') {
      FUN_1402faf4a(param_1);
    }
    else if (*(char *)(param_1 + 0x50) == '\x01') {
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
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1402faf4a FUN_1402faf4a body=137 status=ok
// SIG undefined FUN_1402faf4a(void)

undefined8 * FUN_1402faf4a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((*(char *)(param_1 + 10) == '\x01') &&
     (plVar4 = (longlong *)param_1[7], plVar4 != (longlong *)0x0)) {
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
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[6] = param_2[6];
  lVar3 = param_2[7];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 1402fafd4 FUN_1402fafd4 body=448 status=ok
// SIG undefined FUN_1402fafd4(void)

undefined8 * FUN_1402fafd4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aba54f0;
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  FUN_14494a737(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x38);
  plVar3 = (longlong *)param_1[0x36];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  }
  plVar3 = (longlong *)param_1[0x26];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x20];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x17];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0xc];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402fb194 FUN_1402fb194 body=3523 status=ok
// SIG undefined FUN_1402fb194(void)

void FUN_1402fb194(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  undefined1 local_3b8 [25];
  char local_39f;
  undefined4 local_398;
  float local_394;
  undefined4 local_390;
  undefined8 local_388;
  longlong *local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  double local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  double local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined8 local_280;
  longlong *plStack_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined1 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined1 local_22e;
  undefined1 local_1f8;
  undefined4 local_1f4;
  uint local_1d8;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  longlong *plStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined7 local_d8;
  undefined1 uStack_d1;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (((*(char *)(param_1 + 0x518) != '\x01') || (*(char *)(param_1 + 0x4b9) != '\x01')) ||
     (*(char *)(param_1 + 0x4b8) != '\x01')) goto LAB_1402fb2e5;
  puVar3 = (undefined8 *)(param_1 + 0x3c0);
  lVar9 = param_2[3];
  local_378 = *(double *)(lVar9 + 0xd0);
  uStack_370 = *(double *)(lVar9 + 0xd8);
  local_394 = *(float *)(lVar9 + 0x11c);
  local_368 = *(double *)(lVar9 + 0xe0) - (double)local_394;
  lVar4 = param_2[2];
  lVar5 = *(longlong *)(lVar4 + 0x48);
  fVar20 = *(float *)(lVar5 + 0x38);
  fVar15 = *(float *)(lVar5 + 0x3c);
  local_390 = *(undefined4 *)(*param_2 + 8);
  local_398 = *(undefined4 *)(lVar9 + 0x118);
  local_388 = *(undefined8 *)(lVar4 + 0x28);
  local_380 = *(longlong **)(lVar4 + 0x30);
  if (local_380 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_380 + 0xc) = *(int *)((longlong)local_380 + 0xc) + 1;
    UNLOCK();
  }
  fVar14 = *(float *)(param_1 + 0x48c);
  fVar12 = (float)FUN_14022d910(puVar3);
  fVar13 = *(float *)(lVar9 + 0x118);
  if (fVar13 * 0.25 <= fVar12 * fVar14) {
    fVar20 = fVar20 / (fVar15 * 0.017453292);
    if (*(int *)(param_1 + 0x490) == 4) {
      dVar16 = local_378 - *(double *)(param_1 + 0x438);
      dVar19 = uStack_370 - *(double *)(param_1 + 0x440);
      dVar17 = local_368 - *(double *)(param_1 + 0x448);
      if ((float)SQRT(dVar17 * dVar17 + dVar19 * dVar19 + dVar16 * dVar16) <= fVar20 * 3.0) {
        if (*(float *)(param_1 + 0x4b4) < 0.0) {
          local_318 = *(double *)(param_1 + 0x448);
          local_328 = *(undefined4 *)(param_1 + 0x438);
          uStack_324 = *(undefined4 *)(param_1 + 0x43c);
          uStack_320 = *(undefined4 *)(param_1 + 0x440);
          uStack_31c = *(undefined4 *)(param_1 + 0x444);
          FUN_1467f6c98(&local_1c8,param_1 + 0x3f0,&local_328,&local_378);
          dVar16 = (double)CONCAT44(local_1c8._4_4_,(undefined4)local_1c8) -
                   *(double *)(param_1 + 0x3f0);
          dVar19 = (double)CONCAT44(uStack_1bc,uStack_1c0) - *(double *)(param_1 + 0x3f8);
          dVar17 = local_1b8 - *(double *)(param_1 + 0x400);
          dVar16 = SQRT(dVar17 * dVar17 + dVar19 * dVar19 + dVar16 * dVar16) * 0.5;
          if (dVar16 < (double)fVar20) {
            fVar20 = (float)dVar16;
          }
        }
        else {
          fVar20 = *(float *)(param_1 + 0x4b4) * 0.5;
        }
        *(float *)(param_1 + 0x4b4) = fVar20;
        fVar15 = *(float *)(lVar9 + 0x118);
        if (*(float *)(lVar9 + 0x118) <= *(float *)(param_1 + 0x48c)) {
          fVar15 = *(float *)(param_1 + 0x48c);
        }
        if (fVar20 < fVar15) {
          cVar8 = FUN_14642286b(param_2,puVar3);
          if (cVar8 == '\0') {
            local_188 = DAT_14cb1d030;
            local_198 = DAT_14cb1d020;
            dStack_190 = DAT_14cb1d028;
            local_180 = DAT_14cb1d020;
            dStack_178 = DAT_14cb1d028;
            local_170 = DAT_14cb1d030;
            local_168 = DAT_14c8463b8;
            uStack_160 = DAT_14c8463c0;
            local_158 = DAT_14c8463c8;
            local_150 = DAT_14cb1d020;
            dStack_148 = DAT_14cb1d028;
            local_140 = DAT_14cb1d030;
            dStack_128 = DAT_14cb1d030;
            dStack_138 = DAT_14cb1d020;
            local_130 = DAT_14cb1d028;
            local_120 = 0;
            plStack_118 = (longlong *)0x0;
            local_110 = 0xffffffff;
            local_108 = 0xffffffffffffffff;
            uStack_100 = 0xffffffff;
            uStack_f4 = uStack_f4 & 0xffffff00;
            uStack_fc = 0;
            uStack_f8 = 0;
            uStack_f0 = DAT_14c8464e0;
            local_e8 = DAT_14c8464e8;
            uStack_e0 = DAT_14c8464f0;
            local_d8 = 0x80000000000001;
            uStack_d1 = 0xbf;
            uStack_d0 = 0;
            uStack_ce = 0;
            local_98 = (local_98 >> 8 & 0xffffff) << 8;
            local_78 = local_78 & 0xffffff00;
            local_318 = local_368;
            local_328 = (undefined4)local_378;
            uStack_324 = local_378._4_4_;
            uStack_320 = (undefined4)uStack_370;
            uStack_31c = uStack_370._4_4_;
            local_310 = *(undefined8 *)(param_1 + 0x408);
            uStack_308 = *(undefined8 *)(param_1 + 0x410);
            local_300 = *(undefined8 *)(param_1 + 0x418);
            local_1c8._0_4_ = (undefined4)local_378;
            local_1c8._4_4_ = local_378._4_4_;
            uStack_1c0 = (undefined4)uStack_370;
            uStack_1bc = uStack_370._4_4_;
            local_1b8 = local_368;
            local_1b0 = local_310;
            local_1a8 = uStack_308;
            local_1a0 = local_300;
            FUN_14030050a(puVar3,&local_1c8);
            plVar6 = plStack_118;
            uVar7 = (undefined1)local_78;
            if ((local_78 & 1) != 0) {
              uVar7 = 0;
            }
            local_78 = CONCAT31(local_78._1_3_,uVar7);
            if (plStack_118 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_118 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_118)(plStack_118);
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
          goto LAB_1402fb2c8;
        }
        FUN_14180a0ac(puVar3,&local_1c8,param_1 + 0x3f0,fVar20);
        local_3c8 = *(undefined1 *)(param_1 + 0x6b0);
        FUN_14085550e(local_3b8,&local_1c8,param_2[1],&local_398);
        plVar6 = plStack_118;
        if (local_39f == '\x01') {
          if (&local_1c8 != puVar3) {
            FUN_1402f5630(puVar3,&local_1c8);
          }
          cVar8 = FUN_14642286b(param_2,puVar3);
          if (cVar8 == '\0') {
            local_2e8 = DAT_14cb1d030;
            local_2f8 = DAT_14cb1d020;
            dStack_2f0 = DAT_14cb1d028;
            local_2e0 = DAT_14cb1d020;
            dStack_2d8 = DAT_14cb1d028;
            local_2d0 = DAT_14cb1d030;
            local_2c8 = DAT_14c8463b8;
            uStack_2c0 = DAT_14c8463c0;
            local_2b8 = DAT_14c8463c8;
            local_2b0 = DAT_14cb1d020;
            dStack_2a8 = DAT_14cb1d028;
            local_2a0 = DAT_14cb1d030;
            local_288 = DAT_14cb1d030;
            local_298 = DAT_14cb1d020;
            dStack_290 = DAT_14cb1d028;
            local_280 = 0;
            plStack_278 = (longlong *)0x0;
            local_270 = 0xffffffff;
            local_268 = 0xffffffffffffffff;
            local_260 = 0xffffffff;
            local_254 = 0;
            local_25c = 0;
            local_250 = DAT_14c8464e0;
            uStack_248 = DAT_14c8464e8;
            local_240 = DAT_14c8464f0;
            local_238 = 0xbf80000000000001;
            local_230 = 0;
            local_22e = 0;
            local_1f8 = 0;
            local_1f4 = 0;
            local_1d8 = local_1d8 & 0xffffff00;
            local_348 = local_368;
            local_358 = (undefined4)local_378;
            uStack_354 = local_378._4_4_;
            uStack_350 = (undefined4)uStack_370;
            uStack_34c = uStack_370._4_4_;
            local_340 = *(undefined4 *)(param_1 + 0x408);
            uStack_33c = *(undefined4 *)(param_1 + 0x40c);
            local_310 = *(undefined8 *)(param_1 + 0x408);
            uStack_338 = *(undefined4 *)(param_1 + 0x410);
            uStack_334 = *(undefined4 *)(param_1 + 0x414);
            uStack_308 = *(undefined8 *)(param_1 + 0x410);
            local_330 = *(undefined8 *)(param_1 + 0x418);
            local_328 = (undefined4)local_378;
            uStack_324 = local_378._4_4_;
            uStack_320 = (undefined4)uStack_370;
            uStack_31c = uStack_370._4_4_;
            local_318 = local_368;
            local_300 = local_330;
            FUN_14030050a(puVar3,&local_328);
            plVar6 = plStack_278;
            uVar7 = (undefined1)local_1d8;
            if ((local_1d8 & 1) != 0) {
              uVar7 = 0;
            }
            local_1d8 = CONCAT31(local_1d8._1_3_,uVar7);
            if (plStack_278 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_278 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_278)(plStack_278);
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
          *(undefined1 *)(param_1 + 0x4b8) = 0;
          goto LAB_1402fb7bd;
        }
        if ((char)local_78 == '\x01') {
          local_78 = local_78 & 0xffffff00;
        }
        if (plStack_118 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_118 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_118)(plStack_118);
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
    }
    else if (*(int *)(param_1 + 0x490) == 5) {
      local_3c8 = *(undefined1 *)(param_1 + 0x6b0);
      FUN_14085550e(&local_328,puVar3,param_2[1],&local_398);
      if (local_310._1_1_ == '\0') {
        fVar15 = *(float *)(param_1 + 0x48c) * 0.5;
        fVar20 = fVar15;
        if ((char)local_310 == '\x01') {
          dVar16 = (double)CONCAT44(uStack_324,local_328) - local_378;
          dVar17 = (double)CONCAT44(uStack_31c,uStack_320) - uStack_370;
          fVar20 = (float)SQRT((local_318 - local_368) * (local_318 - local_368) +
                               dVar17 * dVar17 + dVar16 * dVar16) + -1.0;
          if (fVar20 <= 0.0) {
            fVar20 = 0.0;
          }
          if (fVar15 <= fVar20) {
            fVar20 = fVar15;
          }
        }
        if (*(float *)(lVar9 + 0x118) + *(float *)(lVar9 + 0x118) <= fVar20) {
          FUN_14180a0ac(puVar3,&local_1c8,&local_378);
          if (&local_1c8 != puVar3) {
            FUN_14030050a(puVar3,&local_1c8);
          }
LAB_1402fb7bd:
          plVar6 = plStack_118;
          if ((char)local_78 == '\x01') {
            local_78 = local_78 & 0xffffff00;
          }
          if (plStack_118 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_118 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_118)(plStack_118);
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
        else {
          FUN_14180a0ac(puVar3,&local_1c8,&local_378,0);
          if (&local_1c8 != puVar3) {
            FUN_14030050a(puVar3,&local_1c8);
          }
          plVar6 = plStack_118;
          if ((char)local_78 == '\x01') {
            local_78 = local_78 & 0xffffff00;
          }
          if (plStack_118 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_118 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_118)(plStack_118);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          *(undefined1 *)(param_1 + 0x4b8) = 0;
          if (*(char *)(param_1 + 0x678) == '\x01') {
            if (*(char *)(param_1 + 0x670) == '\x01') {
              *(undefined1 *)(param_1 + 0x670) = 0;
            }
            plVar6 = *(longlong **)(param_1 + 0x5d0);
            if (plVar6 != (longlong *)0x0) {
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
            *(undefined1 *)(param_1 + 0x678) = 0;
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x4b8) = 0;
      }
LAB_1402fbaa7:
      if (*(char *)(param_1 + 0x678) == '\x01') {
        FUN_140301e14(puVar3,param_1 + 0x520,*(undefined1 *)(param_1 + 0x6b0));
      }
    }
    else {
      dVar16 = local_378 - *(double *)(param_1 + 0x438);
      dVar19 = uStack_370 - *(double *)(param_1 + 0x440);
      dVar17 = local_368 - *(double *)(param_1 + 0x448);
      fVar15 = (float)SQRT(dVar17 * dVar17 + dVar19 * dVar19 + dVar16 * dVar16);
      if (fVar15 <= fVar20 * 3.0) {
        fVar20 = *(float *)(param_1 + 0x4b4);
        if (0.0 <= fVar20) {
          fVar14 = *(float *)(param_1 + 0x48c);
        }
        else {
          fVar20 = *(float *)(lVar5 + 0x3c) * 0.25;
          if (15.0 <= fVar20) {
            fVar20 = 15.0;
          }
          if (90.0 <= fVar20) {
            fVar13 = 1.0;
          }
          else {
            fVar13 = sinf(fVar20 * 0.017453292);
          }
          fVar20 = (float)FUN_14022d910(puVar3);
          dVar16 = *(double *)(param_1 + 0x408) - *(double *)(param_1 + 0x438);
          dVar19 = *(double *)(param_1 + 0x410) - *(double *)(param_1 + 0x440);
          dVar17 = *(double *)(param_1 + 0x418) - *(double *)(param_1 + 0x448);
          dVar18 = dVar17 * dVar17 + dVar19 * dVar19 + dVar16 * dVar16;
          dVar19 = *(double *)(param_1 + 0x438) - *(double *)(param_1 + 0x3c0);
          dVar17 = *(double *)(param_1 + 0x440) - *(double *)(param_1 + 0x3c8);
          dVar16 = *(double *)(param_1 + 0x448) - *(double *)(param_1 + 0x3d0);
          dVar16 = dVar16 * dVar16 + dVar17 * dVar17 + dVar19 * dVar19;
          if (dVar18 <= dVar16) {
            dVar16 = dVar18;
          }
          dVar17 = (double)fVar20 / 0.5235987901687622;
          if (1.0 <= dVar17) {
            dVar17 = 1.0;
          }
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          fVar14 = *(float *)(param_1 + 0x48c);
          fVar12 = (float)(dVar17 * 0.75 + 0.25) * (float)SQRT(dVar16);
          fVar20 = fVar14;
          if (fVar14 <= fVar12) {
            fVar20 = fVar12;
          }
          fVar13 = fVar13 * fVar15;
          if (fVar13 <= fVar20) {
            fVar20 = fVar13;
          }
          *(float *)(param_1 + 0x4b4) = fVar20;
          fVar13 = *(float *)(lVar9 + 0x118);
        }
        if (fVar13 <= fVar14) {
          fVar13 = fVar14;
        }
        if (fVar20 < fVar13) goto LAB_1402fb2c8;
        puVar10 = puVar3;
        puVar11 = &local_1c8;
        for (lVar9 = 0xf; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        local_150 = *(double *)(param_1 + 0x438);
        dStack_148 = *(double *)(param_1 + 0x440);
        local_140 = *(double *)(param_1 + 0x448);
        dStack_138 = *(double *)(param_1 + 0x450);
        local_130 = *(double *)(param_1 + 0x458);
        dStack_128 = *(double *)(param_1 + 0x460);
        local_120 = *(undefined8 *)(param_1 + 0x468);
        plStack_118 = *(longlong **)(param_1 + 0x470);
        if (plStack_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_118 + 1) = (int)plStack_118[1] + 1;
          UNLOCK();
        }
        local_110 = *(undefined4 *)(param_1 + 0x478);
        local_108 = *(undefined8 *)(param_1 + 0x480);
        uStack_f0 = *(undefined8 *)(param_1 + 0x498);
        local_e8 = *(undefined8 *)(param_1 + 0x4a0);
        uStack_e0 = *(undefined8 *)(param_1 + 0x4a8);
        uStack_f8 = (undefined4)*(undefined8 *)(param_1 + 0x490);
        uStack_f4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x490) >> 0x20);
        uStack_100 = (undefined4)*(undefined8 *)(param_1 + 0x488);
        uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x488) >> 0x20);
        uStack_d0 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x4b7) >> 8);
        uStack_ce = (undefined1)((uint)*(undefined4 *)(param_1 + 0x4b7) >> 0x18);
        local_d8 = (undefined7)*(undefined8 *)(param_1 + 0x4b0);
        uStack_d1 = (undefined1)((ulonglong)*(undefined8 *)(param_1 + 0x4b0) >> 0x38);
        local_c8 = *(undefined8 *)(param_1 + 0x4c0);
        uStack_c0 = *(undefined8 *)(param_1 + 0x4c8);
        local_b8 = *(undefined8 *)(param_1 + 0x4d0);
        uStack_b0 = *(undefined8 *)(param_1 + 0x4d8);
        local_a8 = *(undefined4 *)(param_1 + 0x4e0);
        uStack_a4 = *(undefined4 *)(param_1 + 0x4e4);
        uStack_a0 = *(undefined4 *)(param_1 + 0x4e8);
        uStack_9c = *(undefined4 *)(param_1 + 0x4ec);
        local_98 = *(ulonglong *)(param_1 + 0x4f0);
        local_78 = CONCAT31(local_78._1_3_,*(char *)(param_1 + 0x510));
        if (*(char *)(param_1 + 0x510) == '\x01') {
          local_80 = *(undefined8 *)(param_1 + 0x508);
          local_90 = *(undefined8 *)(param_1 + 0x4f8);
          uStack_88 = *(undefined8 *)(param_1 + 0x500);
        }
        local_318 = local_368;
        local_328 = (undefined4)local_378;
        uStack_324 = local_378._4_4_;
        uStack_320 = (undefined4)uStack_370;
        uStack_31c = uStack_370._4_4_;
        local_310 = *(undefined8 *)(param_1 + 0x3d8);
        uStack_308 = *(undefined8 *)(param_1 + 0x3e0);
        local_300 = *(undefined8 *)(param_1 + 1000);
        local_1c8._0_4_ = (undefined4)local_378;
        local_1c8._4_4_ = local_378._4_4_;
        uStack_1c0 = (undefined4)uStack_370;
        uStack_1bc = uStack_370._4_4_;
        local_1b8 = local_368;
        local_1b0 = local_310;
        local_1a8 = uStack_308;
        local_1a0 = local_300;
        FUN_140801b3e(&local_1c8);
        local_3c8 = *(undefined1 *)(param_1 + 0x6b0);
        FUN_14085550e(&local_328,&local_1c8,param_2[1],&local_398);
        cVar8 = local_310._1_1_;
        if (local_310._1_1_ == '\0') {
          fVar15 = *(float *)(param_1 + 0x4b4) * 0.5;
          fVar20 = fVar15;
          if ((char)local_310 == '\x01') {
            dVar16 = (double)CONCAT44(uStack_324,local_328) - local_150;
            dVar17 = (double)CONCAT44(uStack_31c,uStack_320) - dStack_148;
            fVar20 = (float)SQRT((local_318 - local_140) * (local_318 - local_140) +
                                 dVar17 * dVar17 + dVar16 * dVar16) + -1.0;
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
            if (fVar15 <= fVar20) {
              fVar20 = fVar15;
            }
          }
          *(float *)(param_1 + 0x4b4) = fVar20;
        }
        else {
          if (&local_1c8 != puVar3) {
            FUN_1402f5630(puVar3,&local_1c8);
          }
          *(undefined1 *)(param_1 + 0x4b8) = 0;
        }
        plVar6 = plStack_118;
        if ((char)local_78 == '\x01') {
          local_78 = local_78 & 0xffffff00;
        }
        if (plStack_118 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_118 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_118)(plStack_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (cVar8 != '\0') goto LAB_1402fbaa7;
      }
    }
  }
  else {
LAB_1402fb2c8:
    *(undefined1 *)(param_1 + 0x4b8) = 0;
  }
  if (local_380 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_380 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_380 + 0x10))();
    }
  }
LAB_1402fb2e5:
  if ((local_70 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402fbf58 FUN_1402fbf58 body=3127 status=ok
// SIG undefined FUN_1402fbf58(void)

/* WARNING: Removing unreachable block (ram,0x0001402fcb19) */
/* WARNING: Removing unreachable block (ram,0x0001402fcb23) */

undefined8 * FUN_1402fbf58(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double _X;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  DWORD DVar17;
  DWORD DVar18;
  LPVOID pvVar19;
  int *piVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  char cVar26;
  undefined8 uVar27;
  undefined8 *_Dst;
  PSRWLOCK SRWLock;
  bool bVar28;
  undefined1 auStack_1018 [32];
  float local_ff8;
  float local_ff0;
  longlong local_fe8;
  undefined8 *local_fe0;
  longlong *local_fd0;
  longlong local_fc8;
  undefined8 local_fc0;
  longlong local_fb8;
  PSRWLOCK local_fb0;
  undefined8 *local_fa8;
  longlong *local_fa0;
  float local_f98;
  float fStack_f94;
  float fStack_f90;
  float fStack_f8c;
  longlong local_f80;
  undefined4 local_f78;
  longlong local_f70;
  longlong *plStack_f68;
  longlong local_f60;
  undefined4 local_f58;
  undefined4 uStack_f54;
  int local_f50;
  undefined8 local_f48;
  float fStack_f40;
  float fStack_f3c;
  undefined4 local_f38;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined1 local_f18;
  undefined1 local_228 [32];
  undefined8 local_208;
  undefined4 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined4 local_1b0;
  float local_1a8;
  int local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined1 local_166;
  undefined1 local_108 [120];
  float local_90;
  char local_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1018;
  if (1 < (int)param_3[2] - 1U) {
    if ((int)param_3[2] == 3) goto LAB_1402fbfbc;
    goto LAB_1402fcaed;
  }
  _Dst = (undefined8 *)0x0;
  if (((int)param_3[1] != -1) && (*(int *)((longlong)param_3 + 0xc) != -1)) {
LAB_1402fbfbc:
    dVar2 = (double)param_3[3];
    _Dst = (undefined8 *)0x0;
    if ((-DAT_14cb1d020 < dVar2) && (_Dst = (undefined8 *)0x0, dVar2 < DAT_14cb1d020)) {
      _Dst = (undefined8 *)0x0;
      if ((-DAT_14cb1d028 < (double)param_3[4]) && ((double)param_3[4] < DAT_14cb1d028)) {
        _Dst = (undefined8 *)0x0;
        if ((-DAT_14cb1d030 < (double)param_3[5]) && ((double)param_3[5] < DAT_14cb1d030)) {
          iVar15 = _finite(dVar2);
          if (iVar15 != 0) {
            iVar15 = _finite((double)param_3[4]);
            if (iVar15 != 0) {
              iVar15 = _finite((double)param_3[5]);
              if (iVar15 != 0) {
                if ((int)param_3[0xd] - 1U < 2) {
                  _Dst = (undefined8 *)0x0;
                  if (((int)param_3[0xc] == -1) || (*(int *)((longlong)param_3 + 100) == -1))
                  goto LAB_1402fca41;
                }
                else if ((int)param_3[0xd] != 3) goto LAB_1402fcaed;
                dVar2 = (double)param_3[0xe];
                _Dst = (undefined8 *)0x0;
                if ((-DAT_14cb1d020 < dVar2) && (dVar2 < DAT_14cb1d020)) {
                  _Dst = (undefined8 *)0x0;
                  if ((-DAT_14cb1d028 < (double)param_3[0xf]) &&
                     ((double)param_3[0xf] < DAT_14cb1d028)) {
                    _Dst = (undefined8 *)0x0;
                    if ((-DAT_14cb1d030 < (double)param_3[0x10]) &&
                       ((double)param_3[0x10] < DAT_14cb1d030)) {
                      iVar15 = _finite(dVar2);
                      if (iVar15 != 0) {
                        iVar15 = _finite((double)param_3[0xf]);
                        if (iVar15 != 0) {
                          iVar15 = _finite((double)param_3[0x10]);
                          if (iVar15 != 0) {
                            dVar2 = (double)param_3[0x17];
                            _Dst = (undefined8 *)0x0;
                            if ((-DAT_14cb1d020 < dVar2) && (dVar2 < DAT_14cb1d020)) {
                              dVar3 = (double)param_3[0x18];
                              _Dst = (undefined8 *)0x0;
                              if ((-DAT_14cb1d028 < dVar3) && (dVar3 < DAT_14cb1d028)) {
                                _X = (double)param_3[0x19];
                                _Dst = (undefined8 *)0x0;
                                if ((-DAT_14cb1d030 < _X) && (_X < DAT_14cb1d030)) {
                                  iVar15 = _finite(dVar2);
                                  if (iVar15 != 0) {
                                    iVar15 = _finite(dVar3);
                                    if (iVar15 != 0) {
                                      iVar15 = _finite(_X);
                                      if (((iVar15 != 0) &&
                                          ((float)(((double)param_3[0xe] - (double)param_3[0x17]) *
                                                   ((double)param_3[0xe] - (double)param_3[0x17]) +
                                                  ((double)param_3[0xf] - (double)param_3[0x18]) *
                                                  ((double)param_3[0xf] - (double)param_3[0x18])) <=
                                           *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x20) +
                                           0.01)) &&
                                         (ABS((float)((double)(float)(double)param_3[0x10] -
                                                     (double)param_3[0x19])) <=
                                          *(float *)((longlong)param_3 + 0x104) + 0.01)) {
                                        lVar5 = *(longlong *)(*param_3 + 0x598);
                                        if (DAT_14cb1d000 != 0) {
                                          pvVar19 = TlsGetValue(DAT_14cb1d000);
                                          TlsSetValue(DAT_14cb1d000,
                                                      (LPVOID)(((longlong)pvVar19 << 0x20) +
                                                               0x100000000 >> 0x20));
                                        }
                                        plVar25 = param_3 + 3;
                                        SRWLock = (PSRWLOCK)(lVar5 + 0x250);
                                        AcquireSRWLockExclusive(SRWLock);
                                        if ((*(longlong *)(lVar5 + 0x78) == 0) ||
                                           (local_fc8 = *(longlong *)
                                                         (*(longlong *)(lVar5 + 0x78) + 0x140),
                                           local_fc8 == 0)) {
                                          *param_2 = 0;
                                          cVar26 = '\0';
                                          _Dst = (undefined8 *)0x0;
                                        }
                                        else {
                                          local_fa0 = param_3 + 1;
                                          iVar15 = FUN_1402fcbf6(*param_3);
                                          FUN_144b40a10(local_108);
                                          FUN_144b40b30(local_228);
                                          if ((longlong)*(int *)(lVar5 + 400) != 0) {
                                            piVar20 = *(int **)(lVar5 + 0x188);
                                            lVar23 = (longlong)*(int *)(lVar5 + 400) * 0xc;
                                            do {
                                              if (*piVar20 == iVar15) {
                                                if (piVar20 != (int *)0x0) {
                                                  local_f50 = piVar20[2];
                                                  local_f58 = (undefined4)*(undefined8 *)piVar20;
                                                  uStack_f54 = (undefined4)
                                                               ((ulonglong)*(undefined8 *)piVar20 >>
                                                               0x20);
                                                  goto LAB_1402fc3ae;
                                                }
                                                break;
                                              }
                                              piVar20 = piVar20 + 3;
                                              lVar23 = lVar23 + -0xc;
                                            } while (lVar23 != 0);
                                          }
                                          local_f58 = 0xffffffff;
                                          uStack_f54 = 0xffffffff;
                                          local_f50 = -1;
LAB_1402fc3ae:
                                          local_f60 = *param_3;
                                          local_f78 = (undefined4)param_3[0x22];
                                          local_f80 = param_3[0x21];
                                          local_f70 = param_3[0x23];
                                          plStack_f68 = (longlong *)param_3[0x24];
                                          if (plStack_f68 == (longlong *)0x0) {
                                            plStack_f68 = (longlong *)0x0;
                                          }
                                          else {
                                            LOCK();
                                            *(int *)((longlong)plStack_f68 + 0xc) =
                                                 *(int *)((longlong)plStack_f68 + 0xc) + 1;
                                            UNLOCK();
                                          }
                                          uVar16 = 0xffffffff;
                                          uVar22 = 0xffffffff;
                                          if ((int)param_3[2] == 1) {
                                            uVar16 = *(uint *)(param_3 + 1);
                                            uVar22 = *(uint *)((longlong)param_3 + 0xc);
                                          }
                                          uVar7 = uVar16 << 0x16 | uVar22;
                                          if ((int)(uVar16 | uVar22) < 0) {
                                            uVar7 = 0xffffffff;
                                          }
                                          local_f98 = (float)(double)param_3[3] * 0.01;
                                          fStack_f94 = (float)(double)param_3[4] * 0.01;
                                          fStack_f90 = (float)(double)param_3[5] * 0.01;
                                          fStack_f8c = (float)(double)param_3[5] * 0.01;
                                          local_fd0 = plVar25;
                                          FUN_144b40980(&local_f48,&local_f98,uVar7);
                                          local_208 = local_f48;
                                          local_1f8 = local_f38;
                                          local_1e8 = local_f28;
                                          uStack_1e0 = uStack_f20;
                                          local_1d8 = local_f18;
                                          bVar28 = (int)param_3[0xd] != 1;
                                          uVar16 = *(uint *)((longlong)param_3 + 100);
                                          if (bVar28) {
                                            uVar16 = 0xffffffff;
                                          }
                                          uVar22 = *(uint *)(param_3 + 0xc);
                                          if (bVar28) {
                                            uVar22 = 0xffffffff;
                                          }
                                          uVar7 = uVar22 << 0x16 | uVar16;
                                          if ((int)(uVar22 | uVar16) < 0) {
                                            uVar7 = 0xffffffff;
                                          }
                                          fStack_f40 = (float)(double)param_3[0x10] * 0.01;
                                          fStack_f3c = (float)(double)param_3[0x10] * 0.01;
                                          local_f48 = CONCAT44((float)(double)param_3[0xf] * 0.01,
                                                               (float)(double)param_3[0xe] * 0.01);
                                          FUN_144b40aa0(local_228,&local_f48,uVar7);
                                          local_1a8 = *(float *)(param_3 + 0x21) * 0.02;
                                          local_188 = FUN_1402f9f7f(&local_f80);
                                          local_190 = FUN_1402fcb90(&local_f80);
                                          lVar23 = DAT_14cb1d210;
                                          local_166 = 0;
                                          local_17c = CONCAT44(local_f50,uStack_f54);
                                          local_180 = local_f58;
                                          iVar4 = *(int *)(*(longlong *)
                                                            ((longlong)ThreadLocalStoragePointer +
                                                            (ulonglong)_tls_index * 8) + 0xc60);
                                          local_198 = iVar15;
                                          if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01'))
                                             || (iVar4 == 2)) {
                                            uVar24 = 0;
                                          }
                                          else if (iVar4 == 1) {
                                            DVar17 = FUN_140ad26c0();
                                            DVar18 = GetCurrentThreadId();
                                            uVar24 = (ulonglong)(DVar17 != DVar18);
                                          }
                                          else {
                                            uVar24 = 1;
                                          }
                                          local_1b0 = *(undefined4 *)(lVar23 + uVar24 * 4);
                                          FUN_144b41050(local_fc8,local_228,local_108);
                                          plVar25 = local_fd0;
                                          uVar27 = CONCAT71((int7)((ulonglong)local_108 >> 8),
                                                            local_8c == '\x01');
                                          if (local_8c == '\x01') {
                                            local_fc0 = uVar27;
                                            local_fb8 = lVar5;
                                            local_fb0 = SRWLock;
                                            local_fa8 = param_2;
                                            if (plStack_f68 != (longlong *)0x0) {
                                              LOCK();
                                              piVar20 = (int *)((longlong)plStack_f68 + 0xc);
                                              *piVar20 = *piVar20 + -1;
                                              UNLOCK();
                                              if (*piVar20 == 0) {
                                                (**(code **)(*plStack_f68 + 0x10))();
                                              }
                                            }
                                            _Dst = (undefined8 *)FUN_14001cc68(0x420);
                                            memset(_Dst,0,0x420);
                                            *_Dst = &PTR_FUN_14aba5570;
                                            _Dst[3] = 0xffffffffffffffff;
                                            dVar2 = DAT_14cb1d028;
                                            _Dst[5] = DAT_14cb1d020;
                                            _Dst[6] = dVar2;
                                            _Dst[7] = DAT_14cb1d030;
                                            _Dst[10] = DAT_14cb1d030;
                                            dVar2 = DAT_14cb1d028;
                                            _Dst[8] = DAT_14cb1d020;
                                            _Dst[9] = dVar2;
                                            _Dst[0xb] = 0;
                                            _Dst[0xc] = 0;
                                            *(undefined4 *)(_Dst + 0xd) = 0xffffffff;
                                            _Dst[0xe] = 0xffffffffffffffff;
                                            _Dst[0x12] = DAT_14cb1d030;
                                            dVar2 = DAT_14cb1d028;
                                            _Dst[0x10] = DAT_14cb1d020;
                                            _Dst[0x11] = dVar2;
                                            dVar2 = DAT_14cb1d028;
                                            _Dst[0x13] = DAT_14cb1d020;
                                            _Dst[0x14] = dVar2;
                                            _Dst[0x15] = DAT_14cb1d030;
                                            _Dst[0x16] = 0;
                                            _Dst[0x17] = 0;
                                            *(undefined4 *)(_Dst + 0x18) = 0xffffffff;
                                            _Dst[0x1b] = DAT_14cb1d030;
                                            dVar2 = DAT_14cb1d028;
                                            _Dst[0x19] = DAT_14cb1d020;
                                            _Dst[0x1a] = dVar2;
                                            uVar27 = DAT_14cb1c868;
                                            _Dst[0x1c] = DAT_14cb1c860;
                                            _Dst[0x1d] = uVar27;
                                            _Dst[0x1e] = DAT_14cb1c870;
                                            _Dst[0x1f] = 0;
                                            _Dst[0x20] = 0;
                                            *(undefined4 *)(_Dst + 0x21) = 0xffffffff;
                                            _Dst[0x22] = 0;
                                            _Dst[0x23] = 0;
                                            *(undefined4 *)(_Dst + 0x24) = 0xffffffff;
                                            _Dst[0x25] = 0;
                                            _Dst[0x26] = 0;
                                            _Dst[0x27] = 0;
                                            *(undefined4 *)(_Dst + 0x28) = 0x3f800000;
                                            _Dst[0x2d] = 0xffffffffffffffff;
                                            _Dst[0x31] = DAT_14cb1d030;
                                            dVar2 = DAT_14cb1d028;
                                            _Dst[0x2f] = DAT_14cb1d020;
                                            _Dst[0x30] = dVar2;
                                            dVar2 = DAT_14cb1d028;
                                            _Dst[0x32] = DAT_14cb1d020;
                                            _Dst[0x33] = dVar2;
                                            _Dst[0x34] = DAT_14cb1d030;
                                            _Dst[0x35] = 0;
                                            _Dst[0x36] = 0;
                                            *(undefined4 *)(_Dst + 0x37) = 0xffffffff;
                                            _Dst[0x60] = 0;
                                            _Dst[0x5e] = 0;
                                            _Dst[0x5f] = 0;
                                            _Dst[0x61] = 0x3ff0000000000000;
                                            _Dst[0x62] = 0;
                                            _Dst[99] = 0;
                                            _Dst[100] = 0;
                                            _Dst[0x65] = 0x3ff0000000000000;
                                            _Dst[0x66] = 0;
                                            _Dst[0x67] = 0;
                                            _Dst[0x68] = 0;
                                            _Dst[0x69] = 0x3ff0000000000000;
                                            _Dst[0x6e] = 0;
                                            _Dst[0x6c] = 0;
                                            _Dst[0x6d] = 0;
                                            local_f48 = 0x48;
                                            puVar21 = (undefined8 *)(*DAT_14c787670)(0,&local_f48,0)
                                            ;
                                            if (DAT_14c787680 != (code *)0x0) {
                                              (*DAT_14c787680)(puVar21,"hkaiEdgePath");
                                            }
                                            puVar21[1] = 0xffffffff;
                                            puVar21[2] = 1;
                                            *puVar21 = &PTR_LAB_14aba55c0;
                                            puVar21[3] = 0;
                                            puVar21[4] = 0x8000000000000000;
                                            puVar21[5] = 0;
                                            puVar21[6] = 0x8000000000000000;
                                            puVar21[7] = 0;
                                            puVar21[8] = 0;
                                            FUN_1402fa824(_Dst + 0x6c);
                                            _Dst[0x6c] = puVar21;
                                            FUN_1402fcd52(_Dst + 2,param_3);
                                            param_2 = local_fa8;
                                            SRWLock = local_fb0;
                                            plVar25 = local_fd0;
                                            *(int *)(_Dst + 0x2e) = (int)local_fa0[1];
                                            _Dst[0x2d] = *local_fa0;
                                            lVar23 = *local_fd0;
                                            uVar8 = *(undefined4 *)((longlong)local_fd0 + 4);
                                            lVar12 = local_fd0[1];
                                            uVar9 = *(undefined4 *)((longlong)local_fd0 + 0xc);
                                            lVar13 = local_fd0[2];
                                            uVar10 = *(undefined4 *)((longlong)local_fd0 + 0x14);
                                            lVar14 = local_fd0[3];
                                            uVar11 = *(undefined4 *)((longlong)local_fd0 + 0x1c);
                                            lVar5 = local_fd0[5];
                                            _Dst[0x33] = local_fd0[4];
                                            _Dst[0x34] = lVar5;
                                            *(int *)(_Dst + 0x31) = (int)lVar13;
                                            *(undefined4 *)((longlong)_Dst + 0x18c) = uVar10;
                                            *(int *)(_Dst + 0x32) = (int)lVar14;
                                            *(undefined4 *)((longlong)_Dst + 0x194) = uVar11;
                                            *(int *)(_Dst + 0x2f) = (int)lVar23;
                                            *(undefined4 *)((longlong)_Dst + 0x17c) = uVar8;
                                            *(int *)(_Dst + 0x30) = (int)lVar12;
                                            *(undefined4 *)((longlong)_Dst + 0x184) = uVar9;
                                            lVar5 = param_3[9];
                                            lVar23 = param_3[10];
                                            if (lVar23 != 0) {
                                              LOCK();
                                              *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
                                              UNLOCK();
                                            }
                                            plVar6 = (longlong *)_Dst[0x36];
                                            _Dst[0x35] = lVar5;
                                            _Dst[0x36] = lVar23;
                                            if (plVar6 != (longlong *)0x0) {
                                              LOCK();
                                              plVar1 = plVar6 + 1;
                                              *(int *)plVar1 = (int)*plVar1 + -1;
                                              UNLOCK();
                                              if ((int)*plVar1 == 0) {
                                                (**(code **)*plVar6)(plVar6);
                                                LOCK();
                                                piVar20 = (int *)((longlong)plVar6 + 0xc);
                                                *piVar20 = *piVar20 + -1;
                                                UNLOCK();
                                                if (*piVar20 == 0) {
                                                  (**(code **)(*plVar6 + 0x10))(plVar6);
                                                }
                                              }
                                            }
                                            *(int *)(_Dst + 0x37) = (int)param_3[0xb];
                                            *(float *)(_Dst + 1) = local_90 * 100.0;
                                            FUN_1402f9e06(&local_f48,param_3,
                                                          *(undefined8 *)(local_fb8 + 0x78),
                                                          &local_f58);
                                            local_ff8 = *(float *)(param_3 + 0x21) * 0.01;
                                            local_fe8 = local_fc8;
                                            local_ff0 = local_ff8;
                                            local_fe0 = &local_f48;
                                            FUN_144b40d70(_Dst[0x6c],local_228,local_108);
                                            FUN_144b40970(_Dst[0x6c],&local_f80);
                                            _Dst[0x5d] = local_f80;
                                            FUN_144b3fa90(&local_f48);
                                            uVar27 = local_fc0;
                                          }
                                          else {
                                            *param_2 = 0;
                                            if (plStack_f68 != (longlong *)0x0) {
                                              LOCK();
                                              piVar20 = (int *)((longlong)plStack_f68 + 0xc);
                                              *piVar20 = *piVar20 + -1;
                                              UNLOCK();
                                              if (*piVar20 == 0) {
                                                (**(code **)(*plStack_f68 + 0x10))();
                                              }
                                            }
                                            _Dst = (undefined8 *)0x0;
                                          }
                                          cVar26 = (char)uVar27;
                                          FUN_144b409a0(local_228);
                                          FUN_144b40c40(local_108);
                                        }
                                        if (DAT_14cb1d000 != 0) {
                                          pvVar19 = TlsGetValue(DAT_14cb1d000);
                                          TlsSetValue(DAT_14cb1d000,
                                                      (LPVOID)(longlong)((int)pvVar19 + -1));
                                        }
                                        ReleaseSRWLockExclusive(SRWLock);
                                        dVar2 = DAT_14cb1d020;
                                        dVar3 = DAT_14cb1d028;
                                        if (cVar26 == '\0') goto LAB_1402fca44;
                                        FUN_1402f8552(_Dst,plVar25);
                                        goto LAB_1402fca41;
                                      }
                                    }
                                  }
                                  goto LAB_1402fcaed;
                                }
                              }
                            }
                            goto LAB_1402fca41;
                          }
                        }
                      }
                      goto LAB_1402fcaed;
                    }
                  }
                }
                goto LAB_1402fca41;
              }
            }
          }
LAB_1402fcaed:
          _Dst = (undefined8 *)0x0;
        }
      }
    }
  }
LAB_1402fca41:
  *param_2 = _Dst;
  dVar2 = DAT_14cb1d020;
  dVar3 = DAT_14cb1d028;
LAB_1402fca44:
  DAT_14cb1d028._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
  DAT_14cb1d028._0_4_ = SUB84(dVar3,0);
  DAT_14cb1d020._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
  DAT_14cb1d020._0_4_ = SUB84(dVar2,0);
  if ((local_70 ^ (ulonglong)auStack_1018) == DAT_14c707940) {
    return param_2;
  }
  DAT_14cb1d020 = dVar2;
  DAT_14cb1d028 = dVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fcb90 FUN_1402fcb90 body=102 status=ok
// SIG undefined FUN_1402fcb90(void)

longlong FUN_1402fcb90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar6 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      iVar5 = (int)plVar3[1];
      lVar7 = 0;
      do {
        if (iVar5 == 0) goto LAB_1402fcbc3;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar8);
      lVar7 = *(longlong *)(param_1 + 0x10);
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
LAB_1402fcbc3:
    lVar6 = lVar7 + 0x40;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
  }
  return lVar6;
}



// FUNCTION 1402fcbf6 FUN_1402fcbf6 body=256 status=ok
// SIG undefined FUN_1402fcbf6(void)

undefined4 FUN_1402fcbf6(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0xffffffff;
  if ((param_1 == 0) || (param_2[2] != 1)) goto LAB_1402fccbf;
  lVar1 = *(longlong *)(param_1 + 0x598);
  if (DAT_14cb1d000 == 0) {
LAB_1402fcce1:
    bVar2 = false;
  }
  else {
    pvVar4 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar4 + 1));
    if ((int)pvVar4 != 0) goto LAB_1402fcce1;
    AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x250));
    bVar2 = true;
  }
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  if (param_2[2] == 1) {
    local_30 = *param_2;
    local_2c = param_2[1];
  }
  uVar3 = FUN_1402fccf7(*(undefined8 *)(lVar1 + 0x78));
  if (bVar2) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar4 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar4 + -1));
  }
LAB_1402fccbf:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fccf7 FUN_1402fccf7 body=91 status=ok
// SIG undefined FUN_1402fccf7(void)

undefined4 FUN_1402fccf7(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (param_1 != 0) {
    uVar1 = *param_2;
    if ((((-1 < (int)uVar1) && (-1 < (int)param_2[1])) &&
        (lVar2 = *(longlong *)(param_1 + 0x140), lVar2 != 0)) &&
       ((((int)uVar1 < *(int *)(lVar2 + 0x40) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + (ulonglong)uVar1 * 0x120), lVar2 != 0)
         ) && (lVar2 = *(longlong *)(lVar2 + 0x20),
              (int)param_2[1] < *(int *)(lVar2 + 0xd8) + *(int *)(lVar2 + 0x20))))) {
      uVar3 = *(undefined4 *)(lVar2 + 0x180);
    }
  }
  return uVar3;
}



// FUNCTION 1402fcd52 FUN_1402fcd52 body=695 status=ok
// SIG undefined FUN_1402fcd52(void)

undefined8 * FUN_1402fcd52(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
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
  undefined1 uVar17;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = param_2[1];
  uVar6 = *(undefined4 *)(param_2 + 3);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar10 = *(undefined4 *)(param_2 + 5);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar12 = *(undefined4 *)(param_2 + 6);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar15 = *(undefined4 *)(param_2 + 8);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar14;
  *(undefined4 *)(param_1 + 8) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar16;
  *(undefined4 *)(param_1 + 5) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar11;
  *(undefined4 *)(param_1 + 6) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar13;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
  uVar3 = param_2[9];
  lVar4 = param_2[10];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[10];
  param_1[9] = uVar3;
  param_1[10] = lVar4;
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
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xc] = param_2[0xc];
  uVar6 = *(undefined4 *)(param_2 + 0xe);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0xf);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar10 = *(undefined4 *)(param_2 + 0x10);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar12 = *(undefined4 *)(param_2 + 0x11);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar15 = *(undefined4 *)(param_2 + 0x13);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar14;
  *(undefined4 *)(param_1 + 0x13) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar16;
  *(undefined4 *)(param_1 + 0x10) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar11;
  *(undefined4 *)(param_1 + 0x11) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar13;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0xf) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar9;
  uVar3 = param_2[0x14];
  lVar4 = param_2[0x15];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x15];
  param_1[0x14] = uVar3;
  param_1[0x15] = lVar4;
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
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  uVar6 = *(undefined4 *)(param_2 + 0x17);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar10 = *(undefined4 *)(param_2 + 0x19);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar12 = *(undefined4 *)(param_2 + 0x1a);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uVar15 = *(undefined4 *)(param_2 + 0x1c);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar14;
  *(undefined4 *)(param_1 + 0x1c) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar16;
  *(undefined4 *)(param_1 + 0x19) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar11;
  *(undefined4 *)(param_1 + 0x1a) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar13;
  *(undefined4 *)(param_1 + 0x17) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar9;
  uVar3 = param_2[0x1d];
  lVar4 = param_2[0x1e];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x1e];
  param_1[0x1d] = uVar3;
  param_1[0x1e] = lVar4;
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
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  param_1[0x21] = param_2[0x21];
  uVar3 = param_2[0x23];
  lVar4 = param_2[0x24];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x24];
  param_1[0x23] = uVar3;
  param_1[0x24] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar6 = *(undefined4 *)((longlong)param_2 + 300);
  uVar7 = *(undefined4 *)(param_2 + 0x26);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar6;
  *(undefined4 *)(param_1 + 0x26) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar8;
  if (param_2 != param_1) {
    if (*(char *)((longlong)param_2 + 0x13c) == '\x01') {
      *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
      uVar17 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x13c) != '\x01') goto LAB_1402fcf1b;
      uVar17 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x13c) = uVar17;
  }
LAB_1402fcf1b:
  FUN_1402f53d2(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 1402fd00a FUN_1402fd00a body=263 status=ok
// SIG undefined FUN_1402fd00a(void)

void FUN_1402fd00a(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0 [12];
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140183318(local_a0,param_1,param_2);
  plVar2 = local_38;
  puVar5 = local_a0;
  puVar6 = param_1;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (local_a0 != param_1) {
    param_1[0xc] = local_40;
    local_40 = 0;
    plVar3 = (longlong *)param_1[0xd];
    if (local_38 != plVar3) {
      local_38 = (longlong *)0x0;
      param_1[0xd] = plVar2;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  plVar2 = local_38;
  *(undefined4 *)(param_1 + 0xe) = local_30;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fd112 FUN_1402fd112 body=1909 status=ok
// SIG undefined FUN_1402fd112(void)

/* WARNING: Removing unreachable block (ram,0x0001402fd512) */
/* WARNING: Removing unreachable block (ram,0x0001402fd518) */

undefined8 * FUN_1402fd112(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double _X;
  double _X_00;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_3 + 2) - 1U < 2) {
    if ((*(int *)(param_3 + 1) != -1) && (*(int *)((longlong)param_3 + 0xc) != -1)) {
LAB_1402fd179:
      dVar3 = (double)param_3[3];
      if (((-DAT_14cb1d020 < dVar3) &&
          (((((dVar3 < DAT_14cb1d020 && (-DAT_14cb1d028 < (double)param_3[4])) &&
             ((double)param_3[4] < DAT_14cb1d028)) &&
            ((-DAT_14cb1d030 < (double)param_3[5] && ((double)param_3[5] < DAT_14cb1d030)))) &&
           (iVar14 = _finite(dVar3), iVar14 != 0)))) &&
         ((iVar14 = _finite((double)param_3[4]), iVar14 != 0 &&
          (iVar14 = _finite((double)param_3[5]), iVar14 != 0)))) {
        if (*(int *)(param_3 + 0xd) - 1U < 2) {
          if ((*(int *)(param_3 + 0xc) != -1) && (*(int *)((longlong)param_3 + 100) != -1)) {
LAB_1402fd25d:
            dVar3 = (double)param_3[0xe];
            if ((-(double)CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_) < dVar3) &&
               (dVar3 < (double)CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_))) {
              if (((((-(double)CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_) <
                      (double)param_3[0xf]) &&
                    ((double)param_3[0xf] <
                     (double)CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_))) &&
                   (-DAT_14cb1d030 < (double)param_3[0x10])) &&
                  ((((double)param_3[0x10] < DAT_14cb1d030 && (iVar14 = _finite(dVar3), iVar14 != 0)
                    ) && (iVar14 = _finite((double)param_3[0xf]), iVar14 != 0)))) &&
                 (iVar14 = _finite((double)param_3[0x10]), iVar14 != 0)) {
                dVar3 = (double)param_3[0x17];
                if ((-(double)CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_) < dVar3) &&
                   (dVar3 < (double)CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_))) {
                  _X = (double)param_3[0x18];
                  if ((((-(double)CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_) < _X) &&
                       (((_X < (double)CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_) &&
                         (_X_00 = (double)param_3[0x19], -DAT_14cb1d030 < _X_00)) &&
                        (_X_00 < DAT_14cb1d030)))) &&
                      ((iVar14 = _finite(dVar3), iVar14 != 0 && (iVar14 = _finite(_X), iVar14 != 0))
                      )) && ((iVar14 = _finite(_X_00), iVar14 != 0 &&
                             (((float)(((double)param_3[0xe] - (double)param_3[0x17]) *
                                       ((double)param_3[0xe] - (double)param_3[0x17]) +
                                      ((double)param_3[0xf] - (double)param_3[0x18]) *
                                      ((double)param_3[0xf] - (double)param_3[0x18])) <=
                               *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x20) + 0.01 &&
                              (ABS((float)((double)(float)(double)param_3[0x10] -
                                          (double)param_3[0x19])) <=
                               *(float *)((longlong)param_3 + 0x104) + 0.01)))))) {
                    local_a8 = 0x44fa0000;
                    local_98 = *(undefined4 *)(param_3 + 0x22);
                    local_a0 = param_3[0x21];
                    local_90 = *(undefined1 (*) [16])(param_3 + 0x23);
                    if (param_3[0x24] == 0) {
                      local_90._8_8_ = 0;
                      local_90._0_8_ = *(ulonglong *)*(undefined1 (*) [16])(param_3 + 0x23);
                    }
                    else {
                      LOCK();
                      piVar1 = (int *)(param_3[0x24] + 0xc);
                      *piVar1 = *piVar1 + 1;
                      UNLOCK();
                    }
                    local_e8 = param_3[3];
                    uStack_e0 = param_3[4];
                    local_d8 = param_3[5];
                    uVar15 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
                    if (*(int *)(param_3 + 2) != 2) {
                      uVar15 = 0xffffffff;
                    }
                    uVar7 = *(uint *)(param_3 + 1);
                    if (*(int *)(param_3 + 2) != 2) {
                      uVar7 = 0xffffffff;
                    }
                    local_b8 = (ulonglong)uVar7 | uVar15 << 0x20;
                    local_d0 = param_3[0xe];
                    uStack_c8 = param_3[0xf];
                    local_c0 = param_3[0x10];
                    uVar15 = (ulonglong)*(uint *)((longlong)param_3 + 100);
                    if (*(int *)(param_3 + 0xd) != 2) {
                      uVar15 = 0xffffffff;
                    }
                    uVar7 = *(uint *)(param_3 + 0xc);
                    if (*(int *)(param_3 + 0xd) != 2) {
                      uVar7 = 0xffffffff;
                    }
                    uStack_b0 = (ulonglong)uVar7 | uVar15 << 0x20;
                    uStack_78 = param_3[0x25];
                    local_80 = *param_3;
                    puVar16 = (undefined8 *)FUN_14001cc68(0x268,0x10);
                    *(undefined4 *)(puVar16 + 1) = 0;
                    *puVar16 = &PTR_FUN_14aba54f0;
                    puVar16[2] = 0;
                    puVar16[3] = 0xffffffffffffffff;
                    *(undefined4 *)(puVar16 + 4) = 0;
                    uVar4 = CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_);
                    puVar16[5] = CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_);
                    puVar16[6] = uVar4;
                    puVar16[7] = DAT_14cb1d030;
                    puVar16[10] = DAT_14cb1d030;
                    uVar4 = CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_);
                    puVar16[8] = CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_);
                    puVar16[9] = uVar4;
                    puVar16[0xb] = 0;
                    puVar16[0xc] = 0;
                    *(undefined4 *)(puVar16 + 0xd) = 0xffffffff;
                    puVar16[0xe] = 0xffffffffffffffff;
                    *(undefined4 *)(puVar16 + 0xf) = 0;
                    puVar16[0x12] = DAT_14cb1d030;
                    uVar4 = CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_);
                    puVar16[0x10] = CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_);
                    puVar16[0x11] = uVar4;
                    uVar4 = CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_);
                    puVar16[0x13] = CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_);
                    puVar16[0x14] = uVar4;
                    puVar16[0x15] = DAT_14cb1d030;
                    puVar16[0x16] = 0;
                    puVar16[0x17] = 0;
                    *(undefined4 *)(puVar16 + 0x18) = 0xffffffff;
                    puVar16[0x1b] = DAT_14cb1d030;
                    uVar4 = CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_);
                    puVar16[0x19] = CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_);
                    puVar16[0x1a] = uVar4;
                    uVar4 = DAT_14cb1c868;
                    puVar16[0x1c] = DAT_14cb1c860;
                    puVar16[0x1d] = uVar4;
                    puVar16[0x1e] = DAT_14cb1c870;
                    puVar16[0x1f] = 0;
                    puVar16[0x20] = 0;
                    *(undefined4 *)(puVar16 + 0x21) = 0xffffffff;
                    puVar16[0x22] = 0;
                    puVar16[0x23] = 0;
                    *(undefined4 *)(puVar16 + 0x24) = 0xffffffff;
                    puVar16[0x25] = 0;
                    puVar16[0x26] = 0;
                    puVar16[0x27] = 0;
                    puVar16[0x28] = 0x3f800000;
                    *(undefined1 *)((longlong)puVar16 + 0x14c) = 0;
                    *(undefined1 *)(puVar16 + 0x2c) = 0;
                    puVar16[0x2d] = 0xffffffffffffffff;
                    *(undefined4 *)(puVar16 + 0x2e) = 0;
                    puVar16[0x31] = DAT_14cb1d030;
                    uVar4 = CONCAT44(DAT_14cb1d028._4_4_,DAT_14cb1d028._0_4_);
                    puVar16[0x2f] = CONCAT44(DAT_14cb1d020._4_4_,DAT_14cb1d020._0_4_);
                    puVar16[0x30] = uVar4;
                    puVar16[0x34] = DAT_14cb1d030;
                    uVar11 = DAT_14cb1d028._4_4_;
                    uVar10 = DAT_14cb1d028._0_4_;
                    uVar9 = DAT_14cb1d020._4_4_;
                    *(undefined4 *)(puVar16 + 0x32) = DAT_14cb1d020._0_4_;
                    *(undefined4 *)((longlong)puVar16 + 0x194) = uVar9;
                    *(undefined4 *)(puVar16 + 0x33) = uVar10;
                    *(undefined4 *)((longlong)puVar16 + 0x19c) = uVar11;
                    puVar16[0x35] = 0;
                    puVar16[0x36] = 0;
                    *(undefined4 *)(puVar16 + 0x37) = 0xffffffff;
                    puVar16[0x3c] = 0;
                    *(undefined4 *)(puVar16 + 0x3d) = 0;
                    puVar16[0x38] = 0;
                    puVar16[0x39] = 0;
                    *(undefined8 *)((longlong)puVar16 + 0x1ec) = 0xffffffff00000080;
                    *(undefined4 *)((longlong)puVar16 + 500) = 0;
                    puVar16[0x40] = 0;
                    *(undefined4 *)(puVar16 + 0x41) = 0;
                    *(undefined1 *)(puVar16 + 0x4c) = 0;
                    *(undefined4 *)(puVar16 + 0x44) = 0;
                    puVar16[0x42] = 0;
                    puVar16[0x43] = 0;
                    iVar14 = FUN_140302a3f(&local_e8,puVar16 + 0x38);
                    if (iVar14 == 0) {
                      FUN_1402fcd52(puVar16 + 2,param_3);
                      *(undefined4 *)(puVar16 + 0x2e) = *(undefined4 *)(param_3 + 2);
                      puVar16[0x2d] = param_3[1];
                      uVar4 = param_3[3];
                      uVar8 = param_3[4];
                      uVar9 = *(undefined4 *)(param_3 + 5);
                      uVar10 = *(undefined4 *)((longlong)param_3 + 0x2c);
                      uVar11 = *(undefined4 *)(param_3 + 6);
                      uVar12 = *(undefined4 *)((longlong)param_3 + 0x34);
                      uVar13 = param_3[8];
                      puVar16[0x33] = param_3[7];
                      puVar16[0x34] = uVar13;
                      *(undefined4 *)(puVar16 + 0x31) = uVar9;
                      *(undefined4 *)((longlong)puVar16 + 0x18c) = uVar10;
                      *(undefined4 *)(puVar16 + 0x32) = uVar11;
                      *(undefined4 *)((longlong)puVar16 + 0x194) = uVar12;
                      puVar16[0x2f] = uVar4;
                      puVar16[0x30] = uVar8;
                      uVar4 = param_3[9];
                      lVar5 = param_3[10];
                      if (lVar5 != 0) {
                        LOCK();
                        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
                        UNLOCK();
                      }
                      plVar6 = (longlong *)puVar16[0x36];
                      puVar16[0x35] = uVar4;
                      puVar16[0x36] = lVar5;
                      if (plVar6 != (longlong *)0x0) {
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
                      *(undefined4 *)(puVar16 + 0x37) = *(undefined4 *)(param_3 + 0xb);
                      *(undefined4 *)(puVar16 + 0x45) = 0;
                      *param_2 = puVar16;
                    }
                    else {
                      *param_2 = 0;
                      if (puVar16 != (undefined8 *)0x0) {
                        (**(code **)*puVar16)(puVar16,1);
                      }
                    }
                    if ((longlong *)local_90._8_8_ != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)(local_90._8_8_ + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*(longlong *)local_90._8_8_ + 0x10))();
                      }
                    }
                    goto LAB_1402fd45d;
                  }
                }
              }
            }
          }
        }
        else if (*(int *)(param_3 + 0xd) == 3) goto LAB_1402fd25d;
      }
    }
  }
  else if (*(int *)(param_3 + 2) == 3) goto LAB_1402fd179;
  *param_2 = 0;
LAB_1402fd45d:
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fd888 FUN_1402fd888 body=243 status=ok
// SIG undefined FUN_1402fd888(void)

void FUN_1402fd888(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar6 = DAT_14cb1d030;
  uVar5 = DAT_14cb1d028;
  uVar4 = DAT_14cb1d020;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14cb1d030;
  local_48 = DAT_14cb1d020;
  uStack_40 = DAT_14cb1d028;
  local_20 = DAT_14cb1d030;
  local_30 = DAT_14cb1d020;
  uStack_28 = DAT_14cb1d028;
  *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0;
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar5;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 0x178) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x17c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x180) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x184) = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0x188) = uVar6;
  *(undefined8 *)(param_1 + 400) = uVar4;
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1b0);
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
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
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402fd97c FUN_1402fd97c body=11148 status=ok
// SIG undefined FUN_1402fd97c(void)

/* WARNING: Removing unreachable block (ram,0x0001402fe356) */
/* WARNING: Removing unreachable block (ram,0x0001402fe360) */
/* WARNING: Removing unreachable block (ram,0x0001402fe50d) */
/* WARNING: Removing unreachable block (ram,0x0001402fe517) */

void FUN_1402fd97c(longlong param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  double dVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  double *pdVar17;
  longlong lVar18;
  longlong **pplVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  longlong **pplVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
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
  float fVar43;
  float fVar44;
  undefined1 auStack_648 [32];
  double *local_628;
  undefined8 *local_620;
  double local_618;
  float local_60c;
  longlong *local_608;
  longlong *plStack_600;
  longlong *local_5f8;
  double local_5f0;
  double local_5e8;
  double local_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  longlong *local_5b0;
  undefined8 local_5a8;
  longlong *plStack_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined4 local_588;
  undefined8 local_584;
  undefined1 local_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  double local_568;
  double local_558;
  double dStack_550;
  double local_548;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  longlong *local_528;
  longlong *plStack_520;
  longlong *local_518;
  longlong *plStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  longlong *local_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  longlong *plStack_4e0;
  longlong *plStack_4d8;
  longlong *plStack_4d0;
  longlong *local_4c8;
  longlong *plStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  uint uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  double local_498;
  longlong *local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  longlong *plStack_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined7 local_418;
  undefined4 uStack_411;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3d8;
  byte local_3b8;
  byte local_3b0;
  longlong *local_3a8 [4];
  longlong *plStack_388;
  longlong *local_380;
  longlong *local_378;
  longlong *plStack_370;
  longlong *local_368;
  longlong *plStack_360;
  longlong *plStack_358;
  longlong *plStack_350;
  double local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  longlong *local_330;
  longlong *plStack_328;
  longlong *local_320;
  longlong *plStack_318;
  longlong *plStack_310;
  longlong *local_308;
  undefined8 local_300;
  longlong *plStack_2f8;
  undefined4 local_2f0;
  double local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  uint uStack_2d4;
  undefined1 uStack_2d0;
  undefined4 uStack_2cf;
  undefined4 uStack_2cb;
  undefined4 uStack_2c7;
  undefined3 uStack_2c3;
  double local_2c0;
  int local_2b8;
  undefined4 uStack_2b4;
  undefined1 uStack_2b0;
  char cStack_2af;
  char cStack_2ae;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulonglong local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  byte local_258;
  char local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined3 uStack_238;
  undefined5 uStack_235;
  undefined3 uStack_230;
  undefined5 uStack_22d;
  longlong *local_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  longlong *local_208;
  longlong *plStack_200;
  longlong *local_1f8;
  longlong *plStack_1f0;
  double local_1e8 [3];
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  longlong *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  longlong *plStack_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_158;
  undefined4 uStack_154;
  undefined1 uStack_150;
  char cStack_14f;
  char cStack_14e;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_648;
  lVar18 = param_2[3];
  local_608 = *(longlong **)(lVar18 + 0xd0);
  plStack_600 = *(longlong **)(lVar18 + 0xd8);
  local_5f8 = (longlong *)(*(double *)(lVar18 + 0xe0) - (double)*(float *)(lVar18 + 0x11c));
  lVar18 = *(longlong *)(param_2[2] + 0x48);
  if (lVar18 == 0) {
    fVar44 = 0.0;
  }
  else {
    fVar44 = *(float *)(lVar18 + 0x38) / (*(float *)(lVar18 + 0x3c) * 0.017453292);
  }
  if (*(int *)(param_3 + 0x3d) == 1) {
    pdVar17 = (double *)param_3[0x3c];
    if ((double *)param_3[0x3c] == (double *)0x0) {
      pdVar17 = param_3;
    }
    local_368 = DAT_14cb1d030;
    local_378 = DAT_14cb1d020;
    plStack_370 = DAT_14cb1d028;
    plStack_360 = DAT_14cb1d020;
    plStack_358 = DAT_14cb1d028;
    plStack_350 = DAT_14cb1d030;
    local_348 = DAT_14c8463b8;
    uStack_340 = DAT_14c8463c0;
    local_338 = DAT_14c8463c8;
    local_330 = DAT_14cb1d020;
    plStack_328 = DAT_14cb1d028;
    local_320 = DAT_14cb1d030;
    local_308 = DAT_14cb1d030;
    plStack_318 = DAT_14cb1d020;
    plStack_310 = DAT_14cb1d028;
    local_300 = 0;
    plStack_2f8 = (longlong *)0x0;
    local_2f0 = 0xffffffff;
    local_2e8 = -NAN;
    uStack_2e0 = 0xffffffff;
    uStack_2d4 = uStack_2d4 & 0xffffff00;
    uStack_2dc = 0;
    uStack_2d0 = (undefined1)(undefined4)DAT_14c8464e0;
    uStack_2cf = (undefined4)(CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0) >> 8);
    uStack_2cb._3_1_ = (undefined1)(undefined4)DAT_14c8464e8;
    uStack_2cb = CONCAT13(uStack_2cb._3_1_,(int3)((uint)DAT_14c8464e0._4_4_ >> 8));
    uStack_2c7 = (undefined4)(CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8) >> 8);
    uStack_2c3 = (undefined3)((uint)DAT_14c8464e8._4_4_ >> 8);
    local_2c0 = DAT_14c8464f0;
    local_2b8 = 1;
    uStack_2b4 = 0xbf800000;
    uStack_2b0 = 0;
    cStack_2af = '\0';
    cStack_2ae = '\0';
    local_278 = (local_278 >> 8 & 0xffffff) << 8;
    local_258 = 0;
    plStack_4e0 = (longlong *)pdVar17[2];
    uStack_4f0 = (longlong *)*pdVar17;
    uStack_4e8 = (longlong *)pdVar17[1];
    iStack_2d8 = *(int *)(pdVar17 + 0xb);
    if (iStack_2d8 == 1) {
      uStack_2e0 = *(undefined4 *)(pdVar17 + 10);
      local_2e8 = pdVar17[9];
    }
    local_508 = local_608;
    uStack_500 = plStack_600;
    local_4f8 = local_5f8;
    local_3a8[0] = local_608;
    local_3a8[1] = plStack_600;
    local_3a8[2] = local_5f8;
    local_3a8[3] = uStack_4f0;
    plStack_388 = uStack_4e8;
    local_380 = plStack_4e0;
    FUN_14030050a(param_1 + 0x3c0,local_3a8);
    plVar5 = plStack_2f8;
    if ((local_258 & 1) != 0) {
      local_258 = 0;
    }
    if (plStack_2f8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_2f8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_2f8)(plStack_2f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    pdVar17 = (double *)param_3[0x3c];
    if ((double *)param_3[0x3c] == (double *)0x0) {
      pdVar17 = param_3;
    }
    local_628 = (double *)CONCAT71(local_628._1_7_,*(undefined1 *)(param_1 + 0x6b0));
    FUN_1403008f2(local_3a8,&local_608,pdVar17,pdVar17 + 0xf);
    pplVar22 = (longlong **)(param_1 + 0x3c0);
    if (local_3a8 != pplVar22) {
      FUN_14030050a(pplVar22,local_3a8);
    }
    plVar5 = plStack_2f8;
    if (local_258 == 1) {
      local_258 = 0;
    }
    if (plStack_2f8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_2f8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_2f8)(plStack_2f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x4b8) = *(undefined1 *)(param_1 + 0x4b9);
    *(float *)(param_1 + 0x4f4) = fVar44;
    cVar15 = FUN_1402f57d0(param_1 + 0x4c0,pplVar22);
    if (cVar15 == '\0') {
      *(undefined1 *)(param_1 + 0x4f0) = 0;
      *(undefined4 *)(param_1 + 0x4f4) = 0;
    }
    else {
      FUN_1403026fa(param_1 + 0x4c0,pplVar22);
    }
  }
  dVar28 = *(double *)(param_1 + 0x3e0) - *(double *)(param_1 + 0x3c8);
  dVar30 = *(double *)(param_1 + 0x3d8) - *(double *)(param_1 + 0x3c0);
  dVar27 = dVar30 * dVar30 + dVar28 * dVar28;
  if ((dVar27 != 1.0) || (NAN(dVar27))) {
    if (dVar27 < 9.99999993922529e-09) {
      dVar30 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dVar28 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      uVar39 = SUB84(DAT_14c8464f0,0);
      dVar27 = (double)((ulonglong)DAT_14c8464f0 & 0xffffffff00000000);
    }
    else {
      dVar28 = dVar28 * (1.0 / SQRT(dVar27));
      dVar30 = dVar30 * (1.0 / SQRT(dVar27));
      uVar39 = 0;
      dVar27 = 0.0;
    }
  }
  else {
    dVar37 = *(double *)(param_1 + 1000) - *(double *)(param_1 + 0x3d0);
    uVar39 = 0;
    dVar27 = 0.0;
    if ((dVar37 == 0.0) && (dVar27 = 0.0, !NAN(dVar37))) {
      uVar39 = SUB84(dVar37,0);
      dVar27 = dVar37;
    }
  }
  uVar40 = (undefined4)((ulonglong)dVar27 >> 0x20);
  lVar18 = *(longlong *)(param_2[2] + 0x48);
  if (lVar18 == 0) {
LAB_1402fdfa1:
    local_250 = '\0';
    cVar15 = *(char *)(param_1 + 0x6b0);
    lVar18 = param_2[2];
    cVar14 = *(char *)(*(longlong *)(lVar18 + 0x48) + 0x54);
    if ((cVar14 == '\0') ||
       ((local_248 = (longlong *)CONCAT44(local_248._4_4_,(int)local_248),
        uStack_240 = (longlong *)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240), cVar14 == '\x01'
        && (local_248 = (longlong *)CONCAT44(local_248._4_4_,(int)local_248),
           uStack_240 = (longlong *)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240),
           *(char *)(lVar18 + 0x51) == '\0')))) {
      if (*(longlong *)(lVar18 + 0x58) != 0) {
        cVar14 = FUN_1449c239e(*(longlong *)(lVar18 + 0x58),*(undefined8 *)(param_2[3] + 0x68));
        uStack_4b8 = (longlong *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
        if (cVar14 == '\x01') {
          dVar28 = *(double *)(param_1 + 0x3e0) - *(double *)(param_1 + 0x3c8);
          dVar30 = *(double *)(param_1 + 0x3d8) - *(double *)(param_1 + 0x3c0);
          dVar27 = dVar30 * dVar30 + dVar28 * dVar28;
          if ((dVar27 != 1.0) || (NAN(dVar27))) {
            if (9.99999993922529e-09 <= dVar27) {
              dVar28 = dVar28 * (1.0 / SQRT(dVar27));
              dVar30 = dVar30 * (1.0 / SQRT(dVar27));
              uVar39 = 0;
              dVar27 = 0.0;
            }
            else {
              dVar30 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar28 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              uVar39 = SUB84(DAT_14c8464f0,0);
              dVar27 = (double)((ulonglong)DAT_14c8464f0 & 0xffffffff00000000);
            }
          }
          else {
            dVar37 = *(double *)(param_1 + 1000) - *(double *)(param_1 + 0x3d0);
            uVar39 = 0;
            dVar27 = 0.0;
            if ((dVar37 == 0.0) && (dVar27 = 0.0, !NAN(dVar37))) {
              uVar39 = SUB84(dVar37,0);
              dVar27 = dVar37;
            }
          }
          uVar40 = (undefined4)((ulonglong)dVar27 >> 0x20);
          uStack_4b8 = (longlong *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
          if (*(longlong *)(param_2[2] + 0x58) != 0) {
            uVar41 = 0;
            uVar42 = 0;
            if ((((dVar28 != 0.0) || (NAN(dVar28))) || (dVar30 != 0.0)) || (NAN(dVar30))) {
              dVar27 = atan2(dVar28,dVar30);
              uVar41 = SUB84(dVar27,0);
              uVar42 = (undefined4)((ulonglong)dVar27 >> 0x20);
            }
            dVar27 = SQRT(dVar30 * dVar30 + dVar28 * dVar28);
            if ((((double)CONCAT44(uVar40,uVar39) != 0.0) || (NAN((double)CONCAT44(uVar40,uVar39))))
               || ((dVar27 != 0.0 || (NAN(dVar27))))) {
              atan2((double)CONCAT44(uVar40,uVar39),dVar27);
            }
            dVar27 = (double)FUN_144719204(SUB84((double)CONCAT44(uVar42,uVar41) * 57.29577951308232
                                                 - *(double *)(param_2[3] + 0x20),0));
            dVar27 = (double)(~-(ulonglong)(dVar27 < 0.0) & (ulonglong)dVar27 |
                             (ulonglong)(dVar27 + 360.0) & -(ulonglong)(dVar27 < 0.0));
            fVar25 = (float)(double)(~-(ulonglong)(180.0 < dVar27) & (ulonglong)dVar27 |
                                    (ulonglong)(dVar27 + -360.0) & -(ulonglong)(180.0 < dVar27));
            lVar18 = *(longlong *)(param_2[2] + 0x48);
            if (lVar18 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = *(undefined1 *)(lVar18 + 0x57);
            }
            local_628 = (double *)(param_2[3] + 0x50);
            local_620 = (undefined8 *)CONCAT71(local_620._1_7_,uVar21);
            lVar18 = FUN_1403006a2(*(undefined8 *)(param_2[2] + 0x58),uVar21,local_628,fVar25);
            if (lVar18 != 0) {
              if (ABS(fVar25) < 90.0) goto LAB_1402fe87c;
              lVar18 = param_2[3];
              dVar30 = (double)FUN_144719204((int)*(undefined8 *)(lVar18 + 0x18));
              dVar37 = (double)FUN_144719204((int)*(undefined8 *)(lVar18 + 0x20));
              dVar27 = sin(dVar30 * 0.017453292519943295);
              dVar30 = cos(dVar30 * 0.017453292519943295);
              dVar28 = sin(dVar37 * 0.017453292519943295);
              dVar37 = cos(dVar37 * 0.017453292519943295);
              lVar18 = param_2[3];
              pfVar3 = (float *)(lVar18 + 0x118);
              plStack_4e0 = *(longlong **)(lVar18 + 0xd0);
              plStack_4d8 = *(longlong **)(lVar18 + 0xd8);
              local_508 = *(longlong **)pfVar3;
              plVar9 = *(longlong **)pfVar3;
              plStack_4d0 = (longlong *)
                            (*(double *)(lVar18 + 0xe0) - (double)*(float *)(lVar18 + 0x11c));
              dVar31 = (double)(*pfVar3 + *pfVar3);
              uVar39 = *(undefined4 *)(*param_2 + 8);
              local_4f8 = *(longlong **)(param_2[2] + 0x28);
              plVar5 = *(longlong **)(param_2[2] + 0x30);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
                UNLOCK();
              }
              plVar6 = (longlong *)(dVar27 * dVar31 + (double)plStack_4d0);
              plStack_4c0 = (longlong *)(dVar28 * dVar30 * dVar31 + (double)plStack_4d8);
              plVar7 = (longlong *)(dVar37 * dVar30 * dVar31 + (double)plStack_4e0);
              if (cVar15 == '\0') {
                uStack_4b0 = 0xffffffff;
                uStack_4ac = 0xffffffff;
                uStack_4a8 = 0xffffffff;
                uStack_4a4 = 0xffffffff;
                uStack_4e8 = (longlong *)param_2[1];
                uStack_500 = (longlong *)CONCAT44(uStack_500._4_4_,uVar39);
                if (plVar5 == (longlong *)0x0) {
                  uStack_4f0 = (longlong *)0x0;
                }
                else {
                  LOCK();
                  *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
                  UNLOCK();
                  uStack_4f0 = plVar5;
                }
                local_4c8 = plVar7;
                uStack_4b8 = plVar6;
                cVar15 = FUN_14038d3af(&local_508,0,0);
                if (uStack_4f0 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)uStack_4f0 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*uStack_4f0 + 0x10))();
                  }
                }
                if (cVar15 != '\0') goto LAB_1402ff911;
LAB_1402fe728:
                bVar11 = false;
              }
              else {
                uStack_4f0._0_5_ = (uint5)(uint)uStack_4f0;
                uStack_4b0 = (undefined4)param_2[1];
                uStack_4ac = (uint)((ulonglong)param_2[1] >> 0x20);
                local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,uVar39);
                if (plVar5 == (longlong *)0x0) {
                  uStack_4b8._0_4_ = 0;
                  uStack_4b8._4_4_ = 0;
                }
                else {
                  LOCK();
                  *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
                  UNLOCK();
                  uStack_4b8._0_4_ = SUB84(plVar5,0);
                  uStack_4b8._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
                }
                local_248._0_4_ = -1;
                local_248._4_4_ = 0xffffffff;
                uStack_240._0_4_ = 0;
                uStack_238 = SUB83(DAT_14cb1d020,0);
                uStack_235 = (undefined5)((ulonglong)DAT_14cb1d020 >> 0x18);
                uStack_230 = SUB83(DAT_14cb1d028,0);
                uStack_22d = (undefined5)((ulonglong)DAT_14cb1d028 >> 0x18);
                local_228 = DAT_14cb1d030;
                plStack_220 = DAT_14cb1d020;
                uStack_218 = DAT_14cb1d028;
                uStack_210 = DAT_14cb1d030;
                local_208 = (longlong *)0x0;
                plStack_200 = (longlong *)0x0;
                local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,0xffffffff);
                local_508 = plStack_4e0;
                uStack_500 = plStack_4d8;
                plVar4 = local_4f8;
                local_4f8 = plStack_4d0;
                uStack_4e8 = plVar7;
                plStack_4e0 = plStack_4c0;
                plStack_4d8 = plVar6;
                plStack_4d0 = plVar9;
                plStack_4c0 = plVar4;
                iVar16 = FUN_140855e2d(&local_508,&local_248,0);
                plVar9 = plStack_200;
                if (plStack_200 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plStack_200 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
                    (**(code **)*plStack_200)(plStack_200);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                plVar9 = (longlong *)CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar9 + 0x10))();
                  }
                }
                if (iVar16 != 0) goto LAB_1402fe728;
LAB_1402ff911:
                bVar11 = true;
              }
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
              if (bVar11) goto LAB_1402fe87c;
            }
          }
        }
      }
      cVar15 = *(char *)(param_1 + 0x6b0);
      lVar18 = param_2[3];
      if (*(longlong *)(param_2[2] + 0x58) == 0) {
LAB_1402fe774:
        local_558 = *(double *)(lVar18 + 0xd0);
        dStack_550 = *(double *)(lVar18 + 0xd8);
        dVar27 = *(double *)(lVar18 + 0xe0) - (double)*(float *)(lVar18 + 0x11c);
        local_548 = dVar27;
        if (*(char *)(param_1 + 0x4b9) == '\x01') {
          dVar30 = *(double *)(param_1 + 0x438) - local_558;
          dVar28 = *(double *)(param_1 + 0x440) - dStack_550;
          dVar37 = *(double *)(param_1 + 0x448) - dVar27;
          fVar25 = (float)SQRT(dVar37 * dVar37 + dVar28 * dVar28 + dVar30 * dVar30);
          if (fVar25 <= *(float *)(param_1 + 0x48c)) goto LAB_1402fe84a;
          fVar25 = fVar25 - *(float *)(param_1 + 0x48c);
        }
        else {
          dVar28 = *(double *)(param_1 + 0x3c0) - *(double *)(param_1 + 0x3d8);
          dVar30 = *(double *)(param_1 + 0x3c8) - *(double *)(param_1 + 0x3e0);
          dVar30 = dVar30 * dVar30 + dVar28 * dVar28;
          if (cVar15 != '\0') {
            dVar28 = *(double *)(param_1 + 0x3d0) - *(double *)(param_1 + 1000);
            dVar30 = dVar30 + dVar28 * dVar28;
          }
          fVar25 = (float)SQRT(dVar30);
        }
        fVar26 = *(float *)(*(longlong *)(param_2[2] + 0x48) + 0x38) /
                 (*(float *)(*(longlong *)(param_2[2] + 0x48) + 0x3c) * 0.017453292);
        fVar43 = fVar25 * 0.25;
        if (fVar26 <= fVar25 * 0.25) {
          fVar43 = fVar26;
        }
        if (fVar43 < *(float *)(lVar18 + 0x118) + *(float *)(lVar18 + 0x118)) goto LAB_1402fe84a;
        dVar31 = *(double *)(param_1 + 1000) - *(double *)(param_1 + 0x3d0);
        dVar28 = *(double *)(param_1 + 0x3e0) - *(double *)(param_1 + 0x3c8);
        dVar37 = *(double *)(param_1 + 0x3d8) - *(double *)(param_1 + 0x3c0);
        dVar30 = dVar31 * dVar31 + dVar37 * dVar37 + dVar28 * dVar28;
        if ((dVar30 != 1.0) || (NAN(dVar30))) {
          if (dVar30 < 9.99999993922529e-09) {
            dVar37 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dVar28 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dVar31 = DAT_14c8464f0;
          }
          else {
            dVar30 = 1.0 / SQRT(dVar30);
            dVar28 = dVar28 * dVar30;
            dVar37 = dVar37 * dVar30;
            dVar31 = dVar31 * dVar30;
          }
        }
        if ((cVar15 != '\0') && (0.5 < ABS(dVar31))) goto LAB_1402fe84a;
        dVar30 = (double)FUN_144719204((int)*(undefined8 *)(lVar18 + 0x18));
        dVar38 = (double)FUN_144719204((int)*(undefined8 *)(lVar18 + 0x20));
        local_618 = sin(dVar30 * 0.017453292519943295);
        dVar30 = cos(dVar30 * 0.017453292519943295);
        dVar35 = sin(dVar38 * 0.017453292519943295);
        dVar38 = cos(dVar38 * 0.017453292519943295);
        dVar13 = dStack_550;
        dVar12 = local_558;
        dVar35 = dVar35 * dVar30;
        dVar38 = dVar38 * dVar30;
        dVar8 = 1.0 / SQRT(dVar38 * dVar38 + dVar35 * dVar35);
        dVar30 = dVar35 * dVar8;
        dVar8 = dVar8 * dVar38;
        dVar34 = 1.0 / SQRT(dVar37 * dVar37 + dVar28 * dVar28);
        dVar36 = dVar28 * dVar34;
        dVar34 = dVar34 * dVar37;
        fVar25 = (float)(dVar34 * dVar8 + dVar36 * dVar30 + 0.0);
        if (DAT_14cb1d0f8 < fVar25) goto LAB_1402fe84a;
        if (cVar15 == '\0') {
          dVar32 = -dVar30;
          dVar28 = dVar30 * dVar30 + dVar8 * dVar8;
          if (dVar28 <= 9.99999993922529e-09) {
            dVar33 = 0.0;
            dVar29 = dVar8;
          }
          else {
            dVar28 = 1.0 / SQRT(dVar28);
            dVar32 = dVar32 * dVar28;
            dVar33 = dVar28 * 0.0;
            dVar29 = dVar8 * dVar28;
          }
          if (0.0 <= dVar33 * 0.0 + dVar34 * dVar32 + dVar36 * dVar29) {
            uVar21 = 1;
          }
          else {
            dVar33 = -dVar33;
            dVar29 = -dVar29;
            dVar32 = -dVar32;
            uVar21 = 0;
          }
        }
        else {
          dVar36 = dVar38 * dVar28 - dVar37 * dVar35;
          dVar34 = local_618 * dVar37 - dVar31 * dVar38;
          dVar32 = dVar35 * dVar31 - dVar28 * local_618;
          dVar33 = dVar32 * dVar35 - dVar38 * dVar34;
          dVar29 = dVar36 * dVar38 - local_618 * dVar32;
          dVar32 = dVar34 * local_618 - dVar35 * dVar36;
          dVar34 = dVar33 * dVar33 + dVar32 * dVar32 + dVar29 * dVar29;
          if (9.99999993922529e-09 < dVar34) {
            dVar34 = 1.0 / SQRT(dVar34);
            dVar32 = dVar32 * dVar34;
            dVar29 = dVar29 * dVar34;
            dVar33 = dVar33 * dVar34;
          }
          uVar21 = 1;
          if (dVar31 * dVar33 + dVar37 * dVar32 + dVar28 * dVar29 < 0.0) {
            dVar33 = -dVar33;
            dVar29 = -dVar29;
            dVar32 = -dVar32;
          }
        }
        local_590 = 0xffffffffffffffff;
        local_588 = 0xffffffff;
        local_584 = 0;
        local_57c = 0;
        local_578 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_570 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_568 = DAT_14c8464f0;
        dVar28 = (double)fVar43;
        local_5c8 = dVar33 * dVar28 + dVar27;
        dStack_5d0 = dVar29 * dVar28 + dStack_550;
        local_5d8 = dVar32 * dVar28 + local_558;
        local_5c0 = (undefined4)DAT_14cb1c860;
        uStack_5bc = DAT_14cb1c860._4_4_;
        uStack_5b8 = (undefined4)DAT_14cb1c868;
        uStack_5b4 = DAT_14cb1c868._4_4_;
        local_5b0 = DAT_14cb1c870;
        local_5a8 = 0;
        plStack_5a0 = (longlong *)0x0;
        local_598 = 0xffffffff;
        local_60c = fVar25;
        if (*(longlong *)(param_2[2] + 0x58) != 0) {
          fVar25 = cosf(*(float *)(*(longlong *)(param_2[2] + 0x58) + 0x134) * 0.017453292);
          if (local_60c < fVar25) {
            dVar28 = (double)*(float *)(param_2[3] + 0x118);
            local_4f8 = (longlong *)(dVar28 * 0.0);
            uStack_500 = (longlong *)(dVar30 * dVar28);
            local_508 = (longlong *)(dVar28 * dVar8);
            FUN_1402f0636(&local_5d8);
          }
        }
        local_584 = CONCAT44(5,fVar43);
        if (*(char *)(param_1 + 0x4b9) == '\x01') {
          puVar23 = (undefined8 *)(param_1 + 0x438);
        }
        else {
          local_4f8 = *(longlong **)(param_1 + 1000);
          puVar23 = &local_508;
          local_508 = *(longlong **)(param_1 + 0x3d8);
          uStack_500 = *(longlong **)(param_1 + 0x3e0);
          uStack_4f0 = (longlong *)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
          uStack_4e8 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
          plStack_4e0 = DAT_14cb1c870;
          plStack_4d8 = (longlong *)0x0;
          plStack_4d0 = (longlong *)0x0;
          local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,0xffffffff);
          plStack_4c0 = (longlong *)0xffffffffffffffff;
          uStack_4b8 = (longlong *)&DAT_ffffffff;
          uStack_4b0 = 0;
          uStack_4ac = uStack_4ac & 0xffffff00;
          uStack_4a8 = (undefined4)DAT_14c8464e0;
          uStack_4a4 = DAT_14c8464e0._4_4_;
          uStack_4a0 = (undefined4)DAT_14c8464e8;
          uStack_49c = DAT_14c8464e8._4_4_;
          local_498 = DAT_14c8464f0;
        }
        local_628 = (double *)CONCAT71(local_628._1_7_,cVar15);
        local_57c = uVar21;
        FUN_1403008f2(&local_248,&local_558,&local_5d8,puVar23);
        if (cStack_14f == '\0') {
          local_3b0 = 0;
        }
        else {
          dVar27 = dVar27 - local_618 * 50.0;
          plVar5 = (longlong *)(dVar13 - dVar35 * 50.0);
          plVar9 = (longlong *)(dVar12 - dVar38 * 50.0);
          local_248._0_4_ = (int)plVar9;
          local_248._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
          uStack_240._0_4_ = SUB84(plVar5,0);
          uStack_240._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
          uStack_238 = SUB83(dVar27,0);
          uStack_235 = (undefined5)((ulonglong)dVar27 >> 0x18);
          local_248 = plVar9;
          uStack_240 = plVar5;
          if (cVar15 != '\0') {
            local_620 = &uStack_218;
            local_4f8 = local_1c0;
            local_508 = (longlong *)CONCAT44(uStack_1cc,local_1d0);
            uStack_500 = (longlong *)CONCAT44(uStack_1c4,uStack_1c8);
            local_628 = (double *)&local_248;
            FUN_14025c644(&local_5f0,&uStack_230,local_1e8);
            dVar27 = local_5e0 * 0.0 + dVar8 * local_5f0 + dVar30 * local_5e8;
            if (dVar27 < 0.0) {
              if (local_158 == 0) {
                iVar16 = 1;
              }
              else {
                iVar16 = 0;
                if (local_158 != 1) goto LAB_1402ff747;
              }
              local_618 = (double)CONCAT44(local_618._4_4_,local_158);
              local_508 = local_248;
              uStack_500 = uStack_240;
              local_158 = iVar16;
              if (cStack_14e == '\x01') {
                local_4f8 = (longlong *)CONCAT53(uStack_235,uStack_238);
                uStack_4f0 = (longlong *)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
                uStack_4e8 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
                plStack_4e0 = DAT_14cb1c870;
                plStack_4d8 = (longlong *)0x0;
                plStack_4d0 = (longlong *)0x0;
                local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,0xffffffff);
                plStack_4c0 = (longlong *)0xffffffffffffffff;
                uStack_4b8._0_4_ = 0xffffffff;
                uStack_4b8._4_4_ = 0;
                uStack_4b0 = 0;
                uStack_4ac = (uint)uStack_4ac._1_3_ << 8;
                uStack_4a8 = (undefined4)DAT_14c8464e0;
                uStack_4a4 = DAT_14c8464e0._4_4_;
                uStack_4a0 = (undefined4)DAT_14c8464e8;
                uStack_49c = DAT_14c8464e8._4_4_;
                local_498 = DAT_14c8464f0;
                local_628 = local_1e8;
                FUN_140437443(&local_538,dVar27,&local_508,&local_1d0);
                plVar5 = plStack_4d0;
                local_228 = local_518;
                plStack_220 = plStack_510;
                uStack_238 = SUB83(local_528,0);
                uStack_235 = (undefined5)((ulonglong)local_528 >> 0x18);
                uStack_230 = SUB83(plStack_520,0);
                uStack_22d = (undefined5)((ulonglong)plStack_520 >> 0x18);
                local_248._0_4_ = local_538;
                local_248._4_4_ = uStack_534;
                uStack_240._0_4_ = uStack_530;
                uStack_240._4_4_ = uStack_52c;
                if (plStack_4d0 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = plStack_4d0 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*plStack_4d0)(plStack_4d0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar5 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
                local_4f8 = plStack_1f0;
                local_508 = plStack_200;
                uStack_500 = local_1f8;
                uStack_4f0 = (longlong *)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
                uStack_4e8 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
                plStack_4e0 = DAT_14cb1c870;
                plStack_4d8 = (longlong *)0x0;
                plStack_4d0 = (longlong *)0x0;
                local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,0xffffffff);
                plStack_4c0 = (longlong *)0xffffffffffffffff;
                uStack_4b8._0_4_ = 0xffffffff;
                uStack_4b8._4_4_ = 0;
                uStack_4b0 = 0;
                uStack_4ac = uStack_4ac & 0xffffff00;
                uStack_4a8 = (undefined4)DAT_14c8464e0;
                uStack_4a4 = DAT_14c8464e0._4_4_;
                uStack_4a0 = (undefined4)DAT_14c8464e8;
                uStack_49c = DAT_14c8464e8._4_4_;
                local_498 = DAT_14c8464f0;
                local_628 = local_1e8;
                FUN_140437443(&local_538,(ulonglong)local_618 & 0xffffffff,&local_508,&local_1d0);
                plVar5 = plStack_4d0;
                local_1f8 = local_518;
                plStack_1f0 = plStack_510;
                local_208 = local_528;
                plStack_200 = plStack_520;
                uStack_218 = (longlong *)CONCAT44(uStack_534,local_538);
                uStack_210 = (longlong *)CONCAT44(uStack_52c,uStack_530);
                if (plStack_4d0 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = plStack_4d0 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*plStack_4d0)(plStack_4d0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar5 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
              }
              else {
                local_4f8 = (longlong *)CONCAT53(uStack_235,uStack_238);
                uStack_4f0 = (longlong *)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
                uStack_4e8 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
                plStack_4e0 = DAT_14cb1c870;
                plStack_4d8 = (longlong *)0x0;
                plStack_4d0 = (longlong *)0x0;
                local_4c8._0_4_ = 0xffffffff;
                plStack_4c0 = (longlong *)0xffffffffffffffff;
                uStack_4b8._0_4_ = 0xffffffff;
                uStack_4b8._4_4_ = 0;
                uStack_4b0 = 0;
                uStack_4ac = (uint)uStack_4ac._1_3_ << 8;
                uStack_4a8 = (undefined4)DAT_14c8464e0;
                uStack_4a4 = DAT_14c8464e0._4_4_;
                uStack_4a0 = (undefined4)DAT_14c8464e8;
                uStack_49c = DAT_14c8464e8._4_4_;
                local_498 = DAT_14c8464f0;
                FUN_140437364(&local_538,dVar27,&local_508,&local_1d0);
                local_228 = local_518;
                plStack_220 = plStack_510;
                uStack_238 = SUB83(local_528,0);
                uStack_235 = (undefined5)((ulonglong)local_528 >> 0x18);
                uStack_230 = SUB83(plStack_520,0);
                uStack_22d = (undefined5)((ulonglong)plStack_520 >> 0x18);
                local_248._0_4_ = local_538;
                local_248._4_4_ = uStack_534;
                uStack_240._0_4_ = uStack_530;
                uStack_240._4_4_ = uStack_52c;
                local_4f8 = plStack_1f0;
                local_508 = plStack_200;
                uStack_500 = local_1f8;
                uStack_4f0 = (longlong *)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
                uStack_4e8 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
                plStack_4e0 = DAT_14cb1c870;
                plStack_4d8 = (longlong *)0x0;
                plStack_4d0 = (longlong *)0x0;
                local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,0xffffffff);
                plStack_4c0 = (longlong *)0xffffffffffffffff;
                uStack_4b8._0_4_ = 0xffffffff;
                uStack_4b8._4_4_ = 0;
                uStack_4b0 = 0;
                uStack_4ac = uStack_4ac & 0xffffff00;
                uStack_4a8 = (undefined4)DAT_14c8464e0;
                uStack_4a4 = DAT_14c8464e0._4_4_;
                uStack_4a0 = (undefined4)DAT_14c8464e8;
                uStack_49c = DAT_14c8464e8._4_4_;
                local_498 = DAT_14c8464f0;
                FUN_140437364(&local_538,(ulonglong)local_618 & 0xffffffff,&local_508,&local_1d0);
                uStack_218 = (longlong *)CONCAT44(uStack_534,local_538);
                uStack_210 = (longlong *)CONCAT44(uStack_52c,uStack_530);
                local_208 = local_528;
                plStack_200 = plStack_520;
                local_1f8 = local_518;
                plStack_1f0 = plStack_510;
              }
              plVar6 = local_208;
              plVar9 = uStack_210;
              plVar5 = uStack_218;
              local_4f8 = local_208;
              local_508 = uStack_218;
              uStack_500 = uStack_210;
              local_208 = plStack_1f0;
              uStack_218 = plStack_200;
              uStack_210 = local_1f8;
              plStack_1f0 = plVar6;
              plStack_200 = plVar5;
              local_1f8 = plVar9;
              FUN_1403026fa(local_148,&local_248);
            }
          }
LAB_1402ff747:
          uStack_150 = 1;
          puVar23 = &local_248;
          puVar24 = &local_508;
          for (lVar18 = 0xf; lVar18 != 0; lVar18 = lVar18 + -1) {
            *puVar24 = *puVar23;
            puVar23 = puVar23 + 1;
            puVar24 = puVar24 + 1;
          }
          local_470 = local_1b0;
          uStack_468 = uStack_1a8;
          local_480 = local_1c0;
          uStack_478 = uStack_1b8;
          local_460 = local_1a0;
          plStack_458 = plStack_198;
          local_1a0 = 0;
          plStack_198 = (longlong *)0x0;
          local_450 = local_190;
          local_448 = local_188;
          uStack_440 = uStack_180;
          local_438 = local_178;
          uStack_430 = uStack_170;
          local_428 = local_168;
          uStack_420 = uStack_160;
          local_418 = (undefined7)CONCAT44(uStack_154,local_158);
          uStack_411 = CONCAT13(cStack_14e,
                                CONCAT12(cStack_14f,CONCAT11(uStack_150,uStack_154._3_1_)));
          local_3d8 = local_118;
          local_3f8 = local_138;
          uStack_3f0 = uStack_130;
          local_3b8 = local_f8;
          local_3b0 = 1;
        }
        plVar5 = plStack_198;
        if ((local_f8 & 1) != 0) {
          local_f8 = 0;
        }
        if (plStack_198 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_198 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plStack_198)(plStack_198);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        plVar5 = plStack_5a0;
        if (plStack_5a0 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_5a0 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plStack_5a0)(plStack_5a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if ((local_3b0 & 1) == 0) goto LAB_1402fe852;
        FUN_14030050a(local_3a8,&local_508);
      }
      else {
        cVar14 = FUN_14494aec6(*(longlong *)(param_2[2] + 0x58),*(undefined8 *)(lVar18 + 0x68));
        if (cVar14 == '\0') {
          lVar18 = param_2[3];
          goto LAB_1402fe774;
        }
LAB_1402fe84a:
        local_3b0 = 0;
LAB_1402fe852:
        plVar5 = plStack_2f8;
        if (local_250 == '\x01') {
          if (local_258 == 1) {
            local_258 = 0;
          }
          if (plStack_2f8 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_2f8 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plStack_2f8)(plStack_2f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          local_250 = '\0';
        }
      }
      plVar5 = plStack_458;
      if (local_3b0 == 1) {
        if (local_3b8 == 1) {
          local_3b8 = 0;
        }
        if (plStack_458 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_458 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plStack_458)(plStack_458);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      plVar6 = plStack_350;
      plVar9 = plStack_358;
      plVar5 = plStack_360;
      if ((((local_250 == '\x01') && (*(char *)(param_1 + 0x3b8) == '\x01')) &&
          (local_2b8 == *(int *)(param_1 + 0x350))) &&
         (dVar27 = *(double *)(param_1 + 0x2d8) - (double)plStack_360,
         dVar30 = *(double *)(param_1 + 0x2e0) - (double)plStack_358,
         dVar28 = *(double *)(param_1 + 0x2e8) - (double)plStack_350,
         *(float *)(param_1 + 0x32c) <=
         (float)SQRT(dVar28 * dVar28 + dVar30 * dVar30 + dVar27 * dVar27))) {
        if (*(char *)(param_1 + 0x6b0) == '\0') {
          dVar27 = *(double *)(param_1 + 0x2b0) - *(double *)(param_1 + 0x298);
          dVar30 = *(double *)(param_1 + 0x2a8) - *(double *)(param_1 + 0x290);
          dVar28 = dVar30 * dVar30 + dVar27 * dVar27;
          if ((dVar28 != 1.0) || (NAN(dVar28))) {
            if (dVar28 < 9.99999993922529e-09) {
              dVar30 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar27 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              dVar28 = DAT_14c8464f0;
            }
            else {
              dVar27 = dVar27 * (1.0 / SQRT(dVar28));
              dVar30 = dVar30 * (1.0 / SQRT(dVar28));
              dVar28 = 0.0;
            }
          }
          else {
            dVar28 = *(double *)(param_1 + 0x2b8) - *(double *)(param_1 + 0x2a0);
            dVar28 = (double)(-(ulonglong)(dVar28 == 0.0) & (ulonglong)dVar28);
          }
          dVar37 = (double)plStack_358 - *(double *)(param_1 + 0x298);
          dVar31 = (double)plStack_360 - *(double *)(param_1 + 0x290);
          dVar35 = dVar31 * dVar31 + dVar37 * dVar37;
          if ((dVar35 != 1.0) || (NAN(dVar35))) {
            if (dVar35 < 9.99999993922529e-09) {
              dVar31 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar37 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              dVar35 = DAT_14c8464f0;
            }
            else {
              dVar37 = dVar37 * (1.0 / SQRT(dVar35));
              dVar31 = dVar31 * (1.0 / SQRT(dVar35));
              dVar35 = 0.0;
            }
          }
          else {
            dVar35 = (double)plStack_350 - *(double *)(param_1 + 0x2a0);
            dVar35 = (double)(-(ulonglong)(dVar35 == 0.0) & (ulonglong)dVar35);
          }
        }
        else {
          dVar28 = *(double *)(param_1 + 0x2b8) - *(double *)(param_1 + 0x2a0);
          dVar27 = *(double *)(param_1 + 0x2b0) - *(double *)(param_1 + 0x298);
          dVar30 = *(double *)(param_1 + 0x2a8) - *(double *)(param_1 + 0x290);
          dVar37 = dVar28 * dVar28 + dVar30 * dVar30 + dVar27 * dVar27;
          if ((dVar37 != 1.0) || (NAN(dVar37))) {
            if (dVar37 < 9.99999993922529e-09) {
              dVar30 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar27 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              dVar28 = DAT_14c8464f0;
            }
            else {
              dVar37 = 1.0 / SQRT(dVar37);
              dVar27 = dVar27 * dVar37;
              dVar30 = dVar30 * dVar37;
              dVar28 = dVar28 * dVar37;
            }
          }
          dVar38 = (double)plStack_350 - *(double *)(param_1 + 0x2a0);
          dVar37 = (double)plStack_358 - *(double *)(param_1 + 0x298);
          dVar31 = (double)plStack_360 - *(double *)(param_1 + 0x290);
          dVar35 = 1.0 / SQRT(dVar38 * dVar38 + dVar31 * dVar31 + dVar37 * dVar37);
          dVar37 = dVar37 * dVar35;
          dVar31 = dVar35 * dVar31;
          dVar35 = dVar38 * dVar35;
        }
        if (0.8500000238418579 <= dVar27 * dVar37 + dVar30 * dVar31 + dVar28 * dVar35) {
          pplVar22 = (longlong **)(param_1 + 0x260);
          pplVar19 = local_3a8;
          for (lVar18 = 0xf; plVar7 = plStack_2f8, lVar18 != 0; lVar18 = lVar18 + -1) {
            *pplVar19 = *pplVar22;
            pplVar22 = pplVar22 + 1;
            pplVar19 = pplVar19 + 1;
          }
          local_330 = *(longlong **)(param_1 + 0x2d8);
          plStack_328 = *(longlong **)(param_1 + 0x2e0);
          local_320 = *(longlong **)(param_1 + 0x2e8);
          plStack_318 = *(longlong **)(param_1 + 0x2f0);
          plStack_310 = *(longlong **)(param_1 + 0x2f8);
          local_308 = *(longlong **)(param_1 + 0x300);
          local_300 = *(undefined8 *)(param_1 + 0x308);
          plVar4 = *(longlong **)(param_1 + 0x310);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (plStack_2f8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_2f8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar23 = (undefined8 *)*plStack_2f8;
              plStack_2f8 = plVar4;
              (*(code *)*puVar23)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar4 = plStack_2f8;
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                plVar4 = plStack_2f8;
              }
            }
          }
          plStack_2f8 = plVar4;
          local_2f0 = *(undefined4 *)(param_1 + 0x318);
          local_2e8 = *(double *)(param_1 + 800);
          uVar20 = *(undefined8 *)(param_1 + 0x338);
          uVar10 = *(undefined8 *)(param_1 + 0x340);
          local_2c0 = *(double *)(param_1 + 0x348);
          uStack_2cb._3_1_ = (undefined1)uVar10;
          uStack_2c7 = (undefined4)((ulonglong)uVar10 >> 8);
          uStack_2c3 = (undefined3)((ulonglong)uVar10 >> 0x28);
          iStack_2d8 = (int)*(undefined8 *)(param_1 + 0x330);
          uStack_2d4 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x330) >> 0x20);
          uStack_2d0 = (undefined1)uVar20;
          uStack_2cf = (undefined4)((ulonglong)uVar20 >> 8);
          uStack_2cb._0_3_ = (undefined3)((ulonglong)uVar20 >> 0x28);
          uStack_2e0 = (undefined4)*(undefined8 *)(param_1 + 0x328);
          uStack_2dc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x328) >> 0x20);
          uVar39 = *(undefined4 *)(param_1 + 0x357);
          uStack_2b0 = (undefined1)((uint)uVar39 >> 8);
          cStack_2af = (char)((uint)uVar39 >> 0x10);
          cStack_2ae = (char)((uint)uVar39 >> 0x18);
          local_2b8 = (int)*(undefined8 *)(param_1 + 0x350);
          uStack_2b4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x350) >> 0x20);
          local_2a8 = *(undefined4 *)(param_1 + 0x360);
          uStack_2a4 = *(undefined4 *)(param_1 + 0x364);
          uStack_2a0 = *(undefined4 *)(param_1 + 0x368);
          uStack_29c = *(undefined4 *)(param_1 + 0x36c);
          local_298 = *(undefined8 *)(param_1 + 0x370);
          uStack_290 = *(undefined8 *)(param_1 + 0x378);
          local_288 = *(undefined8 *)(param_1 + 0x380);
          uStack_280 = *(undefined8 *)(param_1 + 0x388);
          local_278 = *(ulonglong *)(param_1 + 0x390);
          if ((longlong **)(param_1 + 0x260) != local_3a8) {
            if (*(char *)(param_1 + 0x3b0) == '\x01') {
              local_260 = *(undefined8 *)(param_1 + 0x3a8);
              local_270 = *(undefined4 *)(param_1 + 0x398);
              uStack_26c = *(undefined4 *)(param_1 + 0x39c);
              uStack_268 = *(undefined4 *)(param_1 + 0x3a0);
              uStack_264 = *(undefined4 *)(param_1 + 0x3a4);
              local_258 = 1;
            }
            else if (local_258 == 1) {
              local_258 = 0;
            }
          }
          if (local_2b8 == 0) {
            if (cStack_2ae == '\0') {
              uVar20 = 1;
LAB_1402ffb8e:
              uStack_4b0 = 0;
              uStack_4b8._4_4_ = 0;
              uStack_4e8 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
              uStack_4f0 = (longlong *)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
              local_498 = DAT_14c8464f0;
              uStack_49c = DAT_14c8464e8._4_4_;
              uStack_4a0 = (undefined4)DAT_14c8464e8;
              uStack_4a4 = DAT_14c8464e0._4_4_;
              uStack_4a8 = (undefined4)DAT_14c8464e0;
              uStack_4ac = (uint)uStack_4ac._1_3_ << 8;
              local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,0xffffffff);
              plStack_4e0 = DAT_14cb1c870;
              local_4f8 = plVar6;
              uStack_500 = plVar9;
              local_508 = plVar5;
              uStack_4b8._0_4_ = 0xffffffff;
              plStack_4c0 = (longlong *)0xffffffffffffffff;
              plStack_4d0 = (longlong *)0x0;
              plStack_4d8 = (longlong *)0x0;
              FUN_140437364(&local_248,uVar20);
              local_368 = (longlong *)CONCAT53(uStack_235,uStack_238);
              plStack_360 = (longlong *)CONCAT53(uStack_22d,uStack_230);
              plStack_358 = local_228;
              plStack_350 = plStack_220;
              plVar5 = local_248;
              plVar9 = uStack_240;
            }
            else {
              uVar20 = 1;
LAB_1402ff3d5:
              uStack_4b0 = 0;
              uStack_4b8._4_4_ = 0;
              uStack_4e8 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
              uStack_4f0 = (longlong *)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
              local_628 = &local_348;
              local_498 = DAT_14c8464f0;
              uStack_49c = DAT_14c8464e8._4_4_;
              uStack_4a0 = (undefined4)DAT_14c8464e8;
              uStack_4a4 = DAT_14c8464e0._4_4_;
              uStack_4a8 = (undefined4)DAT_14c8464e0;
              uStack_4ac = (uint)uStack_4ac._1_3_ << 8;
              local_4c8 = (longlong *)CONCAT44(local_4c8._4_4_,0xffffffff);
              plStack_4e0 = DAT_14cb1c870;
              local_4f8 = plVar6;
              uStack_500 = plVar9;
              local_508 = plVar5;
              uStack_4b8._0_4_ = 0xffffffff;
              plStack_4c0 = (longlong *)0xffffffffffffffff;
              plStack_4d0 = (longlong *)0x0;
              plStack_4d8 = (longlong *)0x0;
              FUN_140437443(&local_248,uVar20,&local_508);
              plVar6 = plStack_4d0;
              local_368 = (longlong *)CONCAT53(uStack_235,uStack_238);
              plStack_360 = (longlong *)CONCAT53(uStack_22d,uStack_230);
              plStack_358 = local_228;
              plStack_350 = plStack_220;
              plVar5 = local_248;
              plVar9 = uStack_240;
              if (plStack_4d0 != (longlong *)0x0) {
                LOCK();
                plVar7 = plStack_4d0 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                plVar5 = local_248;
                plVar9 = uStack_240;
                if ((int)*plVar7 == 0) {
                  local_378 = local_248;
                  plStack_370 = uStack_240;
                  (**(code **)*plStack_4d0)(plStack_4d0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar5 = local_378;
                  plVar9 = plStack_370;
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                    plVar5 = local_378;
                    plVar9 = plStack_370;
                  }
                }
              }
            }
            uStack_500 = plVar9;
            local_508 = plVar5;
            plVar5 = local_368;
            local_4f8 = local_368;
            local_368 = plStack_350;
            local_378 = plStack_360;
            plStack_370 = plStack_358;
            plStack_350 = plVar5;
            plStack_360 = local_508;
            plStack_358 = uStack_500;
          }
          else if (local_2b8 == 1) {
            if (cStack_2ae == '\0') {
              uVar20 = 0;
              goto LAB_1402ffb8e;
            }
            uVar20 = 0;
            goto LAB_1402ff3d5;
          }
          uStack_2b0 = 1;
        }
      }
    }
  }
  else {
    if (*(char *)(lVar18 + 0x58) == '\0') {
      if (((*(char *)(lVar18 + 0x57) == '\x01') &&
          (lVar18 = *(longlong *)(param_2[2] + 0x58), lVar18 != 0)) &&
         (cVar15 = FUN_1449c239e(lVar18,*(undefined8 *)(param_2[3] + 0x68)), cVar15 == '\x01')) {
        lVar18 = param_2[2];
        cVar15 = *(char *)(*(longlong *)(lVar18 + 0x48) + 0x54);
        if ((cVar15 != '\0') && ((cVar15 != '\x01' || (*(char *)(lVar18 + 0x51) == '\x01')))) {
          dVar27 = 0.0;
          if ((dVar30 != 0.0) || (((NAN(dVar30) || (dVar28 != 0.0)) || (NAN(dVar28))))) {
            dVar27 = atan2(dVar28,dVar30);
            dVar27 = dVar27 * 57.29577951308232;
          }
          dVar37 = SQRT(dVar30 * dVar30 + dVar28 * dVar28);
          if (((((double)CONCAT44(uVar40,uVar39) != 0.0) || (NAN((double)CONCAT44(uVar40,uVar39))))
              || (dVar37 != 0.0)) || (NAN(dVar37))) {
            atan2((double)CONCAT44(uVar40,uVar39),dVar37);
          }
          FUN_144719204(SUB84(dVar27 - *(double *)(param_2[3] + 0x20),0),0x4076800000000000);
          lVar18 = param_2[2];
        }
        local_628 = (double *)CONCAT71(local_628._1_7_,1);
        cVar15 = FUN_1456fab6a(*(undefined8 *)(lVar18 + 0x58));
        if (cVar15 == '\0') goto LAB_1402fdce2;
      }
      goto LAB_1402fdfa1;
    }
LAB_1402fdce2:
    lVar18 = param_2[3];
    dVar37 = (double)FUN_144719204((int)*(undefined8 *)(lVar18 + 0x18),0x4076800000000000);
    dVar35 = (double)FUN_144719204((int)*(undefined8 *)(lVar18 + 0x20),0x4076800000000000);
    dVar27 = sin(dVar37 * 0.017453292519943295);
    dVar37 = cos(dVar37 * 0.017453292519943295);
    dVar31 = sin(dVar35 * 0.017453292519943295);
    dVar35 = cos(dVar35 * 0.017453292519943295);
    fVar25 = cosf(*(float *)(*(longlong *)(param_2[2] + 0x48) + 0x5c) * 0.017453292);
    iVar16 = (int)local_248;
    if ((double)fVar25 <
        dVar27 * (double)CONCAT44(uVar40,uVar39) +
        dVar35 * dVar37 * dVar30 + dVar28 * dVar31 * dVar37) goto LAB_1402fdfa1;
    lVar18 = param_2[3];
    local_3a8[2] = (longlong *)(*(double *)(lVar18 + 0xe0) - (double)*(float *)(lVar18 + 0x11c));
    local_368 = DAT_14cb1d030;
    local_378 = DAT_14cb1d020;
    plStack_370 = DAT_14cb1d028;
    plStack_360 = DAT_14cb1d020;
    plStack_358 = DAT_14cb1d028;
    plStack_350 = DAT_14cb1d030;
    local_348 = DAT_14c8463b8;
    uStack_340 = DAT_14c8463c0;
    local_338 = DAT_14c8463c8;
    local_508 = DAT_14cb1d020;
    uStack_500 = DAT_14cb1d028;
    local_4f8 = DAT_14cb1d030;
    uStack_4f0 = DAT_14cb1d020;
    uStack_4e8 = DAT_14cb1d028;
    plStack_4e0 = DAT_14cb1d030;
    uStack_235 = SUB85(DAT_14c8464f0,0);
    uStack_230 = (undefined3)((ulonglong)DAT_14c8464f0 >> 0x28);
    local_248._3_1_ = (undefined1)(undefined4)DAT_14c8464e0;
    local_248._4_4_ = (undefined4)(CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0) >> 8);
    uStack_240._3_1_ = (undefined1)(undefined4)DAT_14c8464e8;
    uStack_2cb = CONCAT13(uStack_240._3_1_,(int3)((uint)DAT_14c8464e0._4_4_ >> 8));
    uStack_240._4_4_ = (undefined4)(CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8) >> 8);
    uStack_238 = (undefined3)((uint)DAT_14c8464e8._4_4_ >> 8);
    local_3a8[0] = *(longlong **)(lVar18 + 0xd0);
    local_3a8[1] = *(longlong **)(lVar18 + 0xd8);
    local_380 = *(longlong **)(param_1 + 1000);
    local_3a8[3] = *(longlong **)(param_1 + 0x3d8);
    plStack_388 = *(longlong **)(param_1 + 0x3e0);
    plStack_310 = DAT_14cb1d028;
    local_308 = DAT_14cb1d030;
    local_320 = DAT_14cb1d030;
    plStack_318 = DAT_14cb1d020;
    local_330 = DAT_14cb1d020;
    plStack_328 = DAT_14cb1d028;
    local_300 = 0;
    plStack_2f8 = (longlong *)0x0;
    local_2f0 = 0xffffffff;
    local_2e8 = -NAN;
    uStack_2e0 = 0xffffffff;
    uStack_2dc = 0;
    iStack_2d8 = 6;
    local_2c0 = DAT_14c8464f0;
    uStack_2c3 = uStack_238;
    uStack_2d4 = iVar16 << 8;
    uStack_2d0 = local_248._3_1_;
    uStack_2cf = local_248._4_4_;
    uStack_2c7 = uStack_240._4_4_;
    local_2b8 = 1;
    uStack_2b4 = 0xbf800000;
    uStack_2b0 = 0;
    cStack_2af = '\0';
    cStack_2ae = '\0';
    local_278 = (local_278 >> 8 & 0xffffff) << 8;
    local_258 = 0;
    local_250 = '\x01';
    local_248 = (longlong *)CONCAT44(local_248._4_4_,(int)local_248);
    uStack_240 = (longlong *)CONCAT44(uStack_240._4_4_,uStack_2cb);
  }
LAB_1402fe87c:
  if (*(char *)(param_1 + 0x3b8) == '\x01') {
    if (*(char *)(param_1 + 0x3b0) == '\x01') {
      *(undefined1 *)(param_1 + 0x3b0) = 0;
    }
    plVar5 = *(longlong **)(param_1 + 0x310);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    *(undefined1 *)(param_1 + 0x3b8) = 0;
  }
  pplVar22 = (longlong **)(param_1 + 0x3c0);
  if (local_250 != '\x01') {
    if ((2 < *(int *)(param_3 + 0x3d)) && (*(char *)(param_1 + 0x4b9) == '\x01')) {
      pdVar17 = (double *)param_3[0x3c];
      if ((double *)param_3[0x3c] == (double *)0x0) {
        pdVar17 = param_3;
      }
      local_5c8 = pdVar17[2];
      local_5d8 = *pdVar17;
      dStack_5d0 = pdVar17[1];
      local_628 = (double *)CONCAT71(local_628._1_7_,*(undefined1 *)(param_1 + 0x6b0));
      FUN_1403008f2(&local_248,&local_5d8,pdVar17 + 0xf,pdVar17 + 0x1e);
      if (cStack_14f == '\x01') {
        puVar23 = &local_248;
        puVar24 = &local_508;
        for (lVar18 = 0xf; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar24 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar24 = puVar24 + 1;
        }
        local_470 = local_1b0;
        uStack_468 = uStack_1a8;
        local_480 = local_1c0;
        uStack_478 = uStack_1b8;
        local_460 = local_1a0;
        plStack_458 = plStack_198;
        if (plStack_198 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_198 + 1) = (int)plStack_198[1] + 1;
          UNLOCK();
        }
        local_450 = local_190;
        local_448 = local_188;
        uStack_440 = uStack_180;
        local_438 = local_178;
        uStack_430 = uStack_170;
        local_428 = local_168;
        uStack_420 = uStack_160;
        local_418 = (undefined7)CONCAT44(uStack_154,local_158);
        uStack_411 = CONCAT13(cStack_14e,CONCAT12(cStack_14f,CONCAT11(uStack_150,uStack_154._3_1_)))
        ;
        local_3f8 = local_138;
        uStack_3f0 = uStack_130;
        local_3d8 = local_118;
        local_3b8 = local_f8;
        local_3b0 = 1;
      }
      else {
        local_3b0 = 0;
      }
      plVar5 = plStack_198;
      if ((local_f8 & 1) != 0) {
        local_f8 = 0;
      }
      if (plStack_198 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_198 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plStack_198)(plStack_198);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (local_3b0 == 1) {
        FUN_14030050a(param_1 + 0x520,&local_508);
      }
      else if (*(char *)(param_1 + 0x678) == '\x01') {
        if (*(char *)(param_1 + 0x670) == '\x01') {
          *(undefined1 *)(param_1 + 0x670) = 0;
        }
        plVar5 = *(longlong **)(param_1 + 0x5d0);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar5 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        *(undefined1 *)(param_1 + 0x678) = 0;
      }
      plVar5 = plStack_458;
      if (local_3b0 == 1) {
        if (local_3b8 == 1) {
          local_3b8 = 0;
        }
        if (plStack_458 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_458 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plStack_458)(plStack_458);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
    }
    goto LAB_1402fe8ac;
  }
  pplVar19 = pplVar22;
  if (cStack_2af == '\0') {
LAB_1402fff62:
    FUN_1403029e0(pplVar19);
  }
  else if (*(char *)(param_1 + 0x4b9) == '\x01') {
    pplVar19 = (longlong **)(param_1 + 0x520);
    if (*(char *)(param_1 + 0x518) != '\x01') goto LAB_1402fff62;
    FUN_1402f5630((longlong **)(param_1 + 0x520),pplVar22);
  }
  if (local_3a8 != pplVar22) {
    if (local_250 == '\x01') {
      FUN_1402f5630(pplVar22,local_3a8);
    }
    else {
      FUN_1403029e0(pplVar22);
    }
  }
LAB_1402fe8ac:
  if (*(char *)(param_1 + 0x678) == '\x01') {
    lVar18 = param_1 + 0x520;
    *(float *)(param_1 + 0x654) = fVar44;
    cVar15 = FUN_1402f57d0(param_1 + 0x620,lVar18);
    if (cVar15 == '\0') {
      *(undefined1 *)(param_1 + 0x650) = 0;
      *(undefined4 *)(param_1 + 0x654) = 0;
    }
    else {
      FUN_1403026fa(param_1 + 0x620,lVar18);
    }
    FUN_140301e14(pplVar22,lVar18,*(undefined1 *)(param_1 + 0x6b0));
  }
  plVar5 = plStack_2f8;
  if (local_250 == '\x01') {
    if (local_258 == 1) {
      local_258 = 0;
    }
    if (plStack_2f8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_2f8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_2f8)(plStack_2f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_648) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030050a FUN_14030050a body=408 status=ok
// SIG undefined FUN_14030050a(void)

undefined8 * FUN_14030050a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (*(char *)(param_1 + 0x2b) == '\x01') {
    if (*(char *)(param_1 + 0x2a) == '\x01') {
      *(undefined1 *)(param_1 + 0x2a) = 0;
    }
    plVar4 = (longlong *)param_1[0x16];
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
  }
  puVar11 = param_2;
  puVar12 = param_1;
  for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  uVar5 = param_2[0xf];
  uVar6 = param_2[0x10];
  uVar7 = param_2[0x11];
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar9;
  param_1[0x11] = uVar7;
  param_1[0x12] = uVar8;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar6;
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  uVar5 = param_2[0x18];
  uVar6 = param_2[0x19];
  uVar7 = param_2[0x1a];
  uVar8 = param_2[0x1b];
  uVar9 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar9;
  param_1[0x1a] = uVar7;
  param_1[0x1b] = uVar8;
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xf7);
  param_1[0x1e] = param_2[0x1e];
  uVar5 = param_2[0x20];
  uVar6 = param_2[0x21];
  uVar7 = param_2[0x22];
  uVar8 = param_2[0x23];
  uVar9 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar9;
  param_1[0x20] = uVar5;
  param_1[0x21] = uVar6;
  param_1[0x22] = uVar7;
  param_1[0x23] = uVar8;
  param_1[0x26] = param_2[0x26];
  cVar3 = *(char *)(param_2 + 0x2a);
  *(char *)(param_1 + 0x2a) = cVar3;
  if (cVar3 == '\x01') {
    param_1[0x29] = param_2[0x29];
    uVar5 = param_2[0x28];
    param_1[0x27] = param_2[0x27];
    param_1[0x28] = uVar5;
  }
  *(undefined1 *)(param_1 + 0x2b) = 1;
  return param_1;
}



// FUNCTION 1403006a2 FUN_1403006a2 body=215 status=ok
// SIG undefined FUN_1403006a2(void)

longlong FUN_1403006a2(undefined8 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                      undefined8 param_5,char param_6)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = FUN_14022af78(param_1,param_3);
  if ((lVar3 != 0) && (uVar2 = FUN_140159b42(lVar3,param_2,param_5,0xffffffff), -1 < (int)uVar2)) {
    lVar6 = (ulonglong)uVar2 * 0x98;
    lVar5 = (ulonglong)uVar2 + 1;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if ((((0 < *(int *)(lVar4 + 0x68 + lVar6)) && (lVar4 + lVar6 != 0)) &&
          (0 < *(int *)(lVar4 + 0x78 + lVar6))) &&
         (lVar4 = FUN_140300779(lVar4 + ((ulonglong)(0.0 <= param_4) << 4 | 0x60) + lVar6,param_4),
         lVar4 != 0 || param_6 != '\x01')) {
        return lVar4;
      }
      lVar6 = lVar6 + -0x98;
      lVar4 = lVar5 + -1;
      bVar1 = 0 < lVar5;
      lVar5 = lVar4;
    } while (lVar4 != 0 && bVar1);
  }
  return 0;
}



// FUNCTION 140300779 FUN_140300779 body=376 status=ok
// SIG undefined FUN_140300779(void)

longlong FUN_140300779(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    fVar8 = 3.4028235e+38;
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      dVar7 = (double)FUN_144719204(SUB84((double)(param_2 - *(float *)(lVar2 + 0x210)),0),
                                    0x4076800000000000);
      dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                      (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      fVar6 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                                 (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7)));
      if (fVar6 < fVar8 && fVar6 < 60.0) {
        fVar8 = fVar6;
        lVar4 = lVar2;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return lVar4;
}



// FUNCTION 1403008f2 FUN_1403008f2 body=5403 status=ok
// SIG undefined FUN_1403008f2(void)

/* WARNING: Removing unreachable block (ram,0x000140301bff) */
/* WARNING: Removing unreachable block (ram,0x000140301c0a) */
/* WARNING: Removing unreachable block (ram,0x000140301c1d) */

undefined8 *
FUN_1403008f2(undefined8 *param_1,double *param_2,double *param_3,double *param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 auStack_318 [32];
  double *local_2f8;
  double *local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double local_2b8;
  longlong *plStack_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined1 local_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  double local_190;
  longlong *plStack_188;
  undefined4 local_180;
  double local_178;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  char local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  uVar3 = *(uint *)(param_3 + 0xb);
  if ((uVar3 | 2) == 3) {
    param_1[8] = DAT_14cb1d030;
    uVar9 = DAT_14cb1d028;
    param_1[6] = DAT_14cb1d020;
    param_1[7] = uVar9;
    param_1[0xb] = DAT_14cb1d030;
    uVar9 = DAT_14cb1d028;
    param_1[9] = DAT_14cb1d020;
    param_1[10] = uVar9;
    param_1[0xe] = DAT_14c8463c8;
    dVar13 = DAT_14c8463c0;
    param_1[0xc] = DAT_14c8463b8;
    param_1[0xd] = dVar13;
    param_1[0x11] = DAT_14cb1d030;
    uVar9 = DAT_14cb1d028;
    param_1[0xf] = DAT_14cb1d020;
    param_1[0x10] = uVar9;
    uVar9 = DAT_14cb1d028;
    param_1[0x12] = DAT_14cb1d020;
    param_1[0x13] = uVar9;
    param_1[0x14] = DAT_14cb1d030;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
    param_1[0x18] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    param_1[0x1d] = DAT_14c8464f0;
    uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    param_1[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_1[0x1c] = uVar9;
    param_1[0x1e] = 0xbf80000000000001;
    *(undefined2 *)(param_1 + 0x1f) = 0;
    *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
    uStack_210 = param_3[2];
    uStack_220 = *param_3;
    uStack_218 = param_3[1];
    local_228 = param_2[2];
    uVar20 = *(undefined4 *)param_2;
    uVar22 = *(undefined4 *)((longlong)param_2 + 4);
    local_238 = *param_2;
    uVar23 = *(undefined4 *)(param_2 + 1);
    uVar24 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_230 = param_2[1];
    param_1[4] = uStack_218;
    param_1[5] = uStack_210;
    *(undefined4 *)param_1 = uVar20;
    *(undefined4 *)((longlong)param_1 + 4) = uVar22;
    *(undefined4 *)(param_1 + 1) = uVar23;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar24;
    param_1[2] = local_228;
    param_1[3] = uStack_220;
    *(uint *)(param_1 + 0x1a) = uVar3;
    if (uVar3 == 1) {
      *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_3 + 10);
      param_1[0x18] = param_3[9];
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_318);
    }
  }
  else {
    local_228 = (double)DAT_14cb1d030;
    local_238 = (double)DAT_14cb1d020;
    uStack_230 = (double)DAT_14cb1d028;
    uStack_220 = (double)DAT_14cb1d020;
    uStack_218 = (double)DAT_14cb1d028;
    uStack_210 = (double)DAT_14cb1d030;
    local_208 = (double)DAT_14cb1d020;
    uStack_200 = (double)DAT_14cb1d028;
    local_1f8 = (double)DAT_14cb1d030;
    uStack_1f0 = (double)DAT_14cb1d020;
    uStack_1e8 = (double)DAT_14cb1d028;
    uStack_1e0 = (double)DAT_14cb1d030;
    local_148 = 1;
    uStack_144 = 0xbf800000;
    uStack_140 = 0;
    local_108 = local_108 & 0xffffff00;
    uStack_104 = 0;
    local_e8 = '\0';
    uStack_13f = 1;
    uStack_13e = 0;
    local_1c0 = *(undefined4 *)param_3;
    uStack_1bc = *(undefined4 *)((longlong)param_3 + 4);
    uStack_1b8 = *(undefined4 *)(param_3 + 1);
    uStack_1b4 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_1b0 = *(undefined4 *)(param_3 + 2);
    uStack_1ac = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_1a8 = *(undefined4 *)(param_3 + 3);
    uStack_1a4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_1a0 = *(undefined4 *)(param_3 + 4);
    uStack_19c = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_198 = *(undefined4 *)(param_3 + 5);
    uStack_194 = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_190 = param_3[6];
    plStack_188 = (longlong *)param_3[7];
    if (plStack_188 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_188 + 1) = (int)plStack_188[1] + 1;
      UNLOCK();
    }
    local_180 = *(undefined4 *)(param_3 + 8);
    local_178 = param_3[9];
    uStack_168 = *(undefined4 *)(param_3 + 0xb);
    uStack_164 = *(undefined4 *)((longlong)param_3 + 0x5c);
    dStack_160 = param_3[0xc];
    dStack_158 = param_3[0xd];
    dStack_150 = param_3[0xe];
    uStack_170 = SUB84(param_3[10],0);
    fStack_16c = (float)((ulonglong)param_3[10] >> 0x20);
    if (param_5 == '\0') {
      local_1c8 = DAT_14c8463c8;
      local_1d8 = DAT_14c8463b8;
      dStack_1d0 = DAT_14c8463c0;
      if (*(char *)((longlong)param_3 + 0x5c) == '\x01') {
        local_148 = 1;
        local_2d8 = param_2[2];
        local_2e8 = *param_2;
        dStack_2e0 = param_2[1];
        dStack_2d0 = DAT_14cb1c860;
        dStack_2c8 = DAT_14cb1c868;
        dStack_2c0 = DAT_14cb1c870;
        local_2b8 = 0.0;
        plStack_2b0 = (longlong *)0x0;
        local_2a8 = 0xffffffff;
        local_2a0 = 0xffffffffffffffff;
        local_298 = 0xffffffff;
        local_294 = 0;
        local_28c = 0;
        local_288 = (undefined4)DAT_14c8464e0;
        uStack_284 = DAT_14c8464e0._4_4_;
        uStack_280 = (undefined4)DAT_14c8464e8;
        uStack_27c = DAT_14c8464e8._4_4_;
        local_278 = DAT_14c8464f0;
        FUN_140437364(&local_268,1,&local_2e8);
        local_238 = (double)CONCAT44(uStack_264,local_268);
        uStack_230 = (double)CONCAT44(uStack_25c,uStack_260);
        local_228 = (double)CONCAT44(uStack_254,local_258);
        uStack_220 = (double)CONCAT44(uStack_24c,uStack_250);
        uStack_218 = (double)CONCAT44(uStack_244,local_248);
        uStack_210 = (double)CONCAT44(uStack_23c,uStack_240);
        local_2b8 = param_4[6];
        plStack_2b0 = (longlong *)param_4[7];
        local_2e8 = *param_4;
        dStack_2e0 = param_4[1];
        local_2d8 = param_4[2];
        dStack_2d0 = param_4[3];
        dStack_2c8 = param_4[4];
        dStack_2c0 = param_4[5];
        if (plStack_2b0 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plStack_2b0 + 1) = (int)plStack_2b0[1] + 1;
          UNLOCK();
          plVar12 = plStack_2b0;
        }
        local_2a8 = *(undefined4 *)(param_4 + 8);
        local_2a0 = 0xffffffffffffffff;
        local_298 = 0xffffffff;
        local_294 = 0;
        local_28c = 0;
        local_288 = (undefined4)DAT_14c8464e0;
        uStack_284 = DAT_14c8464e0._4_4_;
        uStack_280 = (undefined4)DAT_14c8464e8;
        uStack_27c = DAT_14c8464e8._4_4_;
        local_278 = DAT_14c8464f0;
        FUN_140437364(&local_268,0,&local_2e8,&local_1c0);
        uStack_1e8 = (double)CONCAT44(uStack_244,local_248);
        uStack_1e0 = (double)CONCAT44(uStack_23c,uStack_240);
        local_1f8 = (double)CONCAT44(uStack_254,local_258);
        uStack_1f0 = (double)CONCAT44(uStack_24c,uStack_250);
        local_208 = (double)CONCAT44(uStack_264,local_268);
        uStack_200 = (double)CONCAT44(uStack_25c,uStack_260);
      }
      else {
        local_148 = 0;
        local_2d8 = param_2[2];
        local_2e8 = *param_2;
        dStack_2e0 = param_2[1];
        dStack_2d0 = DAT_14cb1c860;
        dStack_2c8 = DAT_14cb1c868;
        dStack_2c0 = DAT_14cb1c870;
        local_2b8 = 0.0;
        plStack_2b0 = (longlong *)0x0;
        local_2a8 = 0xffffffff;
        local_2a0 = 0xffffffffffffffff;
        local_298 = 0xffffffff;
        local_294 = 0;
        local_28c = 0;
        local_288 = (undefined4)DAT_14c8464e0;
        uStack_284 = DAT_14c8464e0._4_4_;
        uStack_280 = (undefined4)DAT_14c8464e8;
        uStack_27c = DAT_14c8464e8._4_4_;
        local_278 = DAT_14c8464f0;
        FUN_140437364(&local_268,0,&local_2e8);
        local_238 = (double)CONCAT44(uStack_264,local_268);
        uStack_230 = (double)CONCAT44(uStack_25c,uStack_260);
        local_228 = (double)CONCAT44(uStack_254,local_258);
        uStack_220 = (double)CONCAT44(uStack_24c,uStack_250);
        uStack_218 = (double)CONCAT44(uStack_244,local_248);
        uStack_210 = (double)CONCAT44(uStack_23c,uStack_240);
        local_2b8 = param_4[6];
        plStack_2b0 = (longlong *)param_4[7];
        local_2e8 = *param_4;
        dStack_2e0 = param_4[1];
        local_2d8 = param_4[2];
        dStack_2d0 = param_4[3];
        dStack_2c8 = param_4[4];
        dStack_2c0 = param_4[5];
        plVar12 = (longlong *)0x0;
        if (plStack_2b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_2b0 + 1) = (int)plStack_2b0[1] + 1;
          UNLOCK();
          plVar12 = plStack_2b0;
        }
        local_2a8 = *(undefined4 *)(param_4 + 8);
        local_2a0 = 0xffffffffffffffff;
        local_298 = 0xffffffff;
        local_294 = 0;
        local_28c = 0;
        local_288 = (undefined4)DAT_14c8464e0;
        uStack_284 = DAT_14c8464e0._4_4_;
        uStack_280 = (undefined4)DAT_14c8464e8;
        uStack_27c = DAT_14c8464e8._4_4_;
        local_278 = DAT_14c8464f0;
        FUN_140437364(&local_268,1,&local_2e8,&local_1c0);
        uStack_1e8 = (double)CONCAT44(uStack_244,local_248);
        uStack_1e0 = (double)CONCAT44(uStack_23c,uStack_240);
        local_1f8 = (double)CONCAT44(uStack_254,local_258);
        uStack_1f0 = (double)CONCAT44(uStack_24c,uStack_250);
        local_208 = (double)CONCAT44(uStack_264,local_268);
        uStack_200 = (double)CONCAT44(uStack_25c,uStack_260);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    else {
      uStack_13e = 1;
      dVar13 = param_3[2] - param_2[2];
      dVar6 = param_3[1] - param_2[1];
      dVar7 = *param_3 - *param_2;
      fVar21 = (float)SQRT(dVar13 * dVar13 + dVar7 * dVar7 + dVar6 * dVar6);
      if (fVar21 <= 1e-08) {
        dVar7 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar6 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar13 = DAT_14c8464f0;
      }
      else {
        dVar15 = (double)(1.0 / fVar21);
        dVar6 = dVar6 * dVar15;
        dVar7 = dVar7 * dVar15;
        dVar13 = dVar13 * dVar15;
      }
      dVar16 = param_4[2] - param_3[2];
      dVar18 = param_4[1] - param_3[1];
      dVar15 = *param_4 - *param_3;
      fVar27 = (float)SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar18 * dVar18);
      if (fVar27 <= 1e-08) {
        dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar18 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar16 = DAT_14c8464f0;
      }
      else {
        dVar17 = (double)(1.0 / fVar27);
        dVar18 = dVar18 * dVar17;
        dVar15 = dVar15 * dVar17;
        dVar16 = dVar16 * dVar17;
      }
      if (fVar21 <= fStack_16c) {
        fStack_16c = fVar21;
      }
      if (fVar27 <= fStack_16c) {
        fStack_16c = fVar27;
      }
      uVar25 = SUB84(dVar16,0);
      uVar26 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar23 = SUB84(dVar18,0);
      uVar24 = (undefined4)((ulonglong)dVar18 >> 0x20);
      uVar20 = SUB84(dVar15,0);
      uVar22 = (undefined4)((ulonglong)dVar15 >> 0x20);
      if (0.9900000095367432 <= ABS(dVar13 * dVar16 + dVar7 * dVar15 + dVar6 * dVar18)) {
        if (0.9900000095367432 <= ABS(dVar7)) {
          if (0.9900000095367432 <= ABS(dVar6)) {
            uVar20 = SUB84(DAT_14c8463b8,0);
            uVar22 = (undefined4)((ulonglong)DAT_14c8463b8 >> 0x20);
            uVar23 = SUB84(DAT_14c8463c0,0);
            uVar24 = (undefined4)((ulonglong)DAT_14c8463c0 >> 0x20);
            uVar25 = SUB84(DAT_14c8463c8,0);
            uVar26 = (undefined4)((ulonglong)DAT_14c8463c8 >> 0x20);
          }
          else {
            uVar20 = (undefined4)DAT_14c846388;
            uVar22 = (undefined4)((ulonglong)DAT_14c846388 >> 0x20);
            uVar23 = (undefined4)DAT_14c846390;
            uVar24 = (undefined4)((ulonglong)DAT_14c846390 >> 0x20);
            uVar25 = (undefined4)DAT_14c846398;
            uVar26 = (undefined4)((ulonglong)DAT_14c846398 >> 0x20);
          }
        }
        else {
          uVar20 = (undefined4)DAT_14c8463a0;
          uVar22 = (undefined4)((ulonglong)DAT_14c8463a0 >> 0x20);
          uVar23 = (undefined4)DAT_14c8463a8;
          uVar24 = (undefined4)((ulonglong)DAT_14c8463a8 >> 0x20);
          uVar25 = (undefined4)DAT_14c8463b0;
          uVar26 = (undefined4)((ulonglong)DAT_14c8463b0 >> 0x20);
        }
      }
      local_1c8 = dVar7 * (double)CONCAT44(uVar24,uVar23) - (double)CONCAT44(uVar22,uVar20) * dVar6;
      dStack_1d0 = dVar13 * (double)CONCAT44(uVar22,uVar20) -
                   (double)CONCAT44(uVar26,uVar25) * dVar7;
      local_1d8 = dVar6 * (double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar24,uVar23) * dVar13
      ;
      dVar17 = local_1c8 * local_1c8 + local_1d8 * local_1d8 + dStack_1d0 * dStack_1d0;
      if ((dVar17 != 1.0) || (NAN(dVar17))) {
        if (dVar17 < 9.99999993922529e-09) {
          local_1d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dStack_1d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_1c8 = DAT_14c8464f0;
        }
        else {
          dVar17 = 1.0 / SQRT(dVar17);
          dStack_1d0 = dStack_1d0 * dVar17;
          local_1d8 = local_1d8 * dVar17;
          local_1c8 = local_1c8 * dVar17;
        }
      }
      if (((((dStack_160 == 0.0) && (!NAN(dStack_160))) && (dStack_158 == 0.0)) &&
          ((!NAN(dStack_158) && (dStack_150 == 0.0)))) && (!NAN(dStack_150))) {
        dStack_150 = dVar13 - dVar16;
        dStack_158 = dVar6 - dVar18;
        dStack_160 = dVar7 - dVar15;
        dVar13 = dStack_150 * dStack_150 + dStack_160 * dStack_160 + dStack_158 * dStack_158;
        if ((dVar13 != 1.0) || (NAN(dVar13))) {
          if (dVar13 < 9.99999993922529e-09) {
            dStack_160 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dStack_158 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dStack_150 = DAT_14c8464f0;
          }
          else {
            dVar13 = 1.0 / SQRT(dVar13);
            dStack_150 = dStack_150 * dVar13;
            dStack_158 = dStack_158 * dVar13;
            dStack_160 = dStack_160 * dVar13;
          }
        }
      }
      local_2d8 = param_2[2];
      local_2e8 = *param_2;
      dStack_2e0 = param_2[1];
      dStack_2d0 = DAT_14cb1c860;
      dStack_2c8 = DAT_14cb1c868;
      dStack_2c0 = DAT_14cb1c870;
      local_2b8 = 0.0;
      plStack_2b0 = (longlong *)0x0;
      local_2a8 = 0xffffffff;
      local_2a0 = 0xffffffffffffffff;
      local_298 = 0xffffffff;
      local_294 = 0;
      local_28c = 0;
      local_288 = (undefined4)DAT_14c8464e0;
      uStack_284 = DAT_14c8464e0._4_4_;
      uStack_280 = (undefined4)DAT_14c8464e8;
      uStack_27c = DAT_14c8464e8._4_4_;
      local_278 = DAT_14c8464f0;
      local_2f8 = &local_1d8;
      FUN_140437443(&local_268,1,&local_2e8);
      plVar12 = plStack_2b0;
      uStack_218 = (double)CONCAT44(uStack_244,local_248);
      uStack_210 = (double)CONCAT44(uStack_23c,uStack_240);
      local_228 = (double)CONCAT44(uStack_254,local_258);
      uStack_220 = (double)CONCAT44(uStack_24c,uStack_250);
      local_238 = (double)CONCAT44(uStack_264,local_268);
      uStack_230 = (double)CONCAT44(uStack_25c,uStack_260);
      if (plStack_2b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_2b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_2b0)(plStack_2b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      dVar13 = uStack_210 - local_228;
      dVar7 = uStack_218 - uStack_230;
      dVar6 = uStack_220 - local_238;
      dVar15 = dVar13 * dVar13 + dVar6 * dVar6 + dVar7 * dVar7;
      if ((dVar15 != 1.0) || (NAN(dVar15))) {
        if (dVar15 < 9.99999993922529e-09) {
          dVar6 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar7 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar13 = DAT_14c8464f0;
        }
        else {
          dVar15 = 1.0 / SQRT(dVar15);
          dVar7 = dVar7 * dVar15;
          dVar6 = dVar6 * dVar15;
          dVar13 = dVar13 * dVar15;
        }
      }
      local_2f0 = param_2;
      if (0.0 < dVar13 * dStack_150 + dVar6 * dStack_160 + dVar7 * dStack_158) {
        local_148 = 1;
        local_2d8 = param_4[2];
        local_2e8 = *param_4;
        dStack_2e0 = param_4[1];
        uVar9 = 0;
      }
      else {
        local_148 = 0;
        local_2d8 = param_2[2];
        local_2e8 = *param_2;
        dStack_2e0 = param_2[1];
        dStack_2d0 = DAT_14cb1c860;
        dStack_2c8 = DAT_14cb1c868;
        dStack_2c0 = DAT_14cb1c870;
        local_2b8 = 0.0;
        plStack_2b0 = (longlong *)0x0;
        local_2a8 = 0xffffffff;
        local_2a0 = 0xffffffffffffffff;
        local_298 = 0xffffffff;
        local_294 = 0;
        local_28c = 0;
        local_288 = (undefined4)DAT_14c8464e0;
        uStack_284 = DAT_14c8464e0._4_4_;
        uStack_280 = (undefined4)DAT_14c8464e8;
        uStack_27c = DAT_14c8464e8._4_4_;
        local_278 = DAT_14c8464f0;
        local_2f8 = &local_1d8;
        FUN_140437443(&local_268,0,&local_2e8,&local_1c0);
        plVar12 = plStack_2b0;
        uStack_218 = (double)CONCAT44(uStack_244,local_248);
        uStack_210 = (double)CONCAT44(uStack_23c,uStack_240);
        local_228 = (double)CONCAT44(uStack_254,local_258);
        uStack_220 = (double)CONCAT44(uStack_24c,uStack_250);
        local_238 = (double)CONCAT44(uStack_264,local_268);
        uStack_230 = (double)CONCAT44(uStack_25c,uStack_260);
        if (plStack_2b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_2b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_2b0)(plStack_2b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        local_2d8 = param_4[2];
        local_2e8 = *param_4;
        dStack_2e0 = param_4[1];
        uVar9 = 1;
      }
      local_2f8 = &local_1d8;
      local_28c = 0;
      local_294 = 0;
      local_298 = 0xffffffff;
      local_2a0 = 0xffffffffffffffff;
      local_2a8 = 0xffffffff;
      plStack_2b0 = (longlong *)0x0;
      local_2b8 = 0.0;
      dStack_2d0 = DAT_14cb1c860;
      dStack_2c8 = DAT_14cb1c868;
      dStack_2c0 = DAT_14cb1c870;
      local_288 = (undefined4)DAT_14c8464e0;
      uStack_284 = DAT_14c8464e0._4_4_;
      uStack_280 = (undefined4)DAT_14c8464e8;
      uStack_27c = DAT_14c8464e8._4_4_;
      local_278 = DAT_14c8464f0;
      FUN_140437443(&local_268,uVar9,&local_2e8,&local_1c0);
      plVar12 = plStack_2b0;
      uStack_1e8 = (double)CONCAT44(uStack_244,local_248);
      uStack_1e0 = (double)CONCAT44(uStack_23c,uStack_240);
      local_1f8 = (double)CONCAT44(uStack_254,local_258);
      uStack_1f0 = (double)CONCAT44(uStack_24c,uStack_250);
      local_208 = (double)CONCAT44(uStack_264,local_268);
      uStack_200 = (double)CONCAT44(uStack_25c,uStack_260);
      param_2 = local_2f0;
      if (plStack_2b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_2b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_2b0)(plStack_2b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          param_2 = local_2f0;
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            param_2 = local_2f0;
          }
        }
      }
    }
    dVar13 = uStack_1e0;
    dVar6 = uStack_1e8;
    dVar7 = uStack_1f0;
    dVar15 = local_1f8;
    dVar18 = uStack_200;
    dVar16 = local_208;
    local_2d8 = local_1f8;
    local_2e8 = local_208;
    dStack_2e0 = uStack_200;
    local_1f8 = uStack_1e0;
    local_208 = uStack_1f0;
    uStack_200 = uStack_1e8;
    uStack_1e0 = dVar15;
    uStack_1f0 = dVar16;
    uStack_1e8 = dVar18;
    dVar14 = uStack_210 - local_228;
    dVar19 = uStack_218 - uStack_230;
    dVar17 = uStack_220 - local_238;
    fVar21 = (float)SQRT(dVar14 * dVar14 + dVar17 * dVar17 + dVar19 * dVar19);
    if (fVar21 <= 1e-08) {
      dVar17 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dVar19 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      dVar14 = DAT_14c8464f0;
    }
    else {
      dVar5 = (double)(1.0 / fVar21);
      dVar19 = dVar19 * dVar5;
      dVar17 = dVar17 * dVar5;
      dVar14 = dVar14 * dVar5;
    }
    dVar15 = dVar15 - dVar13;
    dVar18 = dVar18 - dVar6;
    dVar16 = dVar16 - dVar7;
    fVar27 = (float)SQRT(dVar15 * dVar15 + dVar16 * dVar16 + dVar18 * dVar18);
    if (fVar27 <= 1e-08) {
      dVar16 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dVar18 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      dVar15 = DAT_14c8464f0;
    }
    else {
      dVar5 = (double)(1.0 / fVar27);
      dVar18 = dVar18 * dVar5;
      dVar16 = dVar16 * dVar5;
      dVar15 = dVar15 * dVar5;
    }
    if (((fVar21 <= 1.0) || (fVar27 <= 1.0)) ||
       ((dVar14 * dVar15 + dVar17 * dVar16 + dVar19 * dVar18 <= 0.9900000095367432 &&
        (dVar7 = dVar7 - uStack_220, dVar6 = dVar6 - uStack_218, dVar13 = dVar13 - uStack_210,
        1.0 <= dVar13 * dVar13 + dVar6 * dVar6 + dVar7 * dVar7)))) {
      puVar10 = &local_238;
      puVar11 = param_1;
      for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      param_1[0x13] = CONCAT44(uStack_19c,local_1a0);
      param_1[0x14] = CONCAT44(uStack_194,uStack_198);
      param_1[0x11] = CONCAT44(uStack_1ac,local_1b0);
      param_1[0x12] = CONCAT44(uStack_1a4,uStack_1a8);
      param_1[0xf] = CONCAT44(uStack_1bc,local_1c0);
      param_1[0x10] = CONCAT44(uStack_1b4,uStack_1b8);
      param_1[0x15] = local_190;
      param_1[0x16] = plStack_188;
      local_190 = 0.0;
      plStack_188 = (longlong *)0x0;
      *(undefined4 *)(param_1 + 0x17) = local_180;
      param_1[0x1c] = dStack_158;
      param_1[0x1d] = dStack_150;
      param_1[0x1a] = CONCAT44(uStack_164,uStack_168);
      param_1[0x1b] = dStack_160;
      param_1[0x18] = local_178;
      param_1[0x19] = CONCAT44(fStack_16c,uStack_170);
      *(uint *)((longlong)param_1 + 0xf7) =
           CONCAT13(uStack_13e,CONCAT12(uStack_13f,CONCAT11(uStack_140,uStack_144._3_1_)));
      param_1[0x1e] = CONCAT44(uStack_144,local_148);
      *(undefined4 *)(param_1 + 0x24) = local_118;
      *(undefined4 *)((longlong)param_1 + 0x124) = uStack_114;
      *(undefined4 *)(param_1 + 0x25) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 300) = uStack_10c;
      *(undefined4 *)(param_1 + 0x20) = local_138;
      *(undefined4 *)((longlong)param_1 + 0x104) = uStack_134;
      *(undefined4 *)(param_1 + 0x21) = uStack_130;
      *(undefined4 *)((longlong)param_1 + 0x10c) = uStack_12c;
      *(undefined4 *)(param_1 + 0x22) = local_128;
      *(undefined4 *)((longlong)param_1 + 0x114) = uStack_124;
      *(undefined4 *)(param_1 + 0x23) = uStack_120;
      *(undefined4 *)((longlong)param_1 + 0x11c) = uStack_11c;
      param_1[0x26] = CONCAT44(uStack_104,local_108);
      *(char *)(param_1 + 0x2a) = local_e8;
      if (local_e8 == '\x01') {
        param_1[0x29] = local_f0;
        *(undefined4 *)(param_1 + 0x27) = local_100;
        *(undefined4 *)((longlong)param_1 + 0x13c) = uStack_fc;
        *(undefined4 *)(param_1 + 0x28) = uStack_f8;
        *(undefined4 *)((longlong)param_1 + 0x144) = uStack_f4;
      }
    }
    else {
      param_1[8] = DAT_14cb1d030;
      uVar9 = DAT_14cb1d028;
      param_1[6] = DAT_14cb1d020;
      param_1[7] = uVar9;
      param_1[0xb] = DAT_14cb1d030;
      uVar9 = DAT_14cb1d028;
      param_1[9] = DAT_14cb1d020;
      param_1[10] = uVar9;
      param_1[0xe] = DAT_14c8463c8;
      dVar13 = DAT_14c8463c0;
      param_1[0xc] = DAT_14c8463b8;
      param_1[0xd] = dVar13;
      param_1[0x11] = DAT_14cb1d030;
      uVar9 = DAT_14cb1d028;
      param_1[0xf] = DAT_14cb1d020;
      param_1[0x10] = uVar9;
      uVar9 = DAT_14cb1d028;
      param_1[0x12] = DAT_14cb1d020;
      param_1[0x13] = uVar9;
      param_1[0x14] = DAT_14cb1d030;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
      param_1[0x18] = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
      *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
      param_1[0x1d] = DAT_14c8464f0;
      uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      param_1[0x1b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      param_1[0x1c] = uVar9;
      param_1[0x1e] = 0xbf80000000000001;
      *(undefined2 *)(param_1 + 0x1f) = 0;
      *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
      *(undefined1 *)(param_1 + 0x26) = 0;
      *(undefined4 *)((longlong)param_1 + 0x134) = 0;
      *(undefined1 *)(param_1 + 0x2a) = 0;
      dStack_2c0 = param_4[2];
      dStack_2d0 = *param_4;
      dStack_2c8 = param_4[1];
      local_2d8 = param_2[2];
      uVar20 = *(undefined4 *)param_2;
      uVar22 = *(undefined4 *)((longlong)param_2 + 4);
      local_2e8 = *param_2;
      uVar23 = *(undefined4 *)(param_2 + 1);
      uVar24 = *(undefined4 *)((longlong)param_2 + 0xc);
      dStack_2e0 = param_2[1];
      param_1[4] = dStack_2c8;
      param_1[5] = dStack_2c0;
      *(undefined4 *)param_1 = uVar20;
      *(undefined4 *)((longlong)param_1 + 4) = uVar22;
      *(undefined4 *)(param_1 + 1) = uVar23;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar24;
      param_1[2] = local_2d8;
      param_1[3] = dStack_2d0;
      iVar4 = *(int *)(param_4 + 0xb);
      *(int *)(param_1 + 0x1a) = iVar4;
      if (iVar4 == 1) {
        *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_4 + 10);
        param_1[0x18] = param_4[9];
      }
    }
    plVar12 = plStack_188;
    if (local_e8 == '\x01') {
      local_e8 = '\0';
    }
    if (plStack_188 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_188 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_188)(plStack_188);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140301e14 FUN_140301e14 body=2276 status=ok
// SIG undefined FUN_140301e14(void)

void FUN_140301e14(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined1 auStack_178 [32];
  longlong local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(char *)(param_1 + 0xf9) == '\x01') && (*(char *)((longlong)param_2 + 0xf9) == '\x01')) {
    if (param_3 == '\0') {
      cVar8 = (*(byte *)((longlong)param_2 + 0xd4) & 1) * '\x02';
      if (*(char *)(param_1 + 0xd4) != '\0') {
        cVar8 = (~*(byte *)((longlong)param_2 + 0xd4) & 1) * '\x02' + '\x01';
      }
      FUN_140437364(&local_118,cVar8,param_1 + 0x78,param_2 + 0xf);
      dVar15 = (double)CONCAT44(uStack_10c,uStack_110);
    }
    else {
      lVar1 = param_1 + 0x78;
      local_108 = *(double *)(param_1 + 0x88);
      local_118 = *(undefined4 *)(param_1 + 0x78);
      uStack_114 = *(undefined4 *)(param_1 + 0x7c);
      uStack_110 = *(undefined4 *)(param_1 + 0x80);
      uStack_10c = *(undefined4 *)(param_1 + 0x84);
      FUN_14025c1eb(&local_130,&local_118,param_1,param_1 + 0x30);
      puVar2 = param_2 + 0xf;
      local_108 = (double)param_2[0x11];
      local_118 = *(undefined4 *)(param_2 + 0xf);
      uStack_114 = *(undefined4 *)((longlong)param_2 + 0x7c);
      uStack_110 = *(undefined4 *)(param_2 + 0x10);
      uStack_10c = *(undefined4 *)((longlong)param_2 + 0x84);
      FUN_14025c1eb(&local_148,&local_118,param_2,param_2 + 6);
      lVar3 = param_1 + 0x60;
      local_158 = lVar3;
      FUN_140437443(&local_118,0,lVar1,puVar2);
      dVar15 = (double)CONCAT44(uStack_10c,uStack_110);
      dVar7 = local_f0 - local_108;
      dVar5 = local_f8 - dVar15;
      dVar6 = local_100 - (double)CONCAT44(uStack_114,local_118);
      dVar4 = dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5;
      if (((dVar4 != 1.0) || (dVar9 = dVar7, dVar10 = dVar5, dVar11 = dVar6, NAN(dVar4))) &&
         (dVar9 = DAT_14c8464f0, dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar4)) {
        dVar4 = 1.0 / SQRT(dVar4);
        dVar9 = dVar7 * dVar4;
        dVar10 = dVar5 * dVar4;
        dVar11 = dVar6 * dVar4;
      }
      dVar4 = local_108 - *(double *)(param_1 + 0x88);
      dVar5 = dVar15 - *(double *)(param_1 + 0x80);
      dVar6 = (double)CONCAT44(uStack_114,local_118) - *(double *)(param_1 + 0x78);
      local_150 = local_130;
      if (((dVar6 * dVar10 - dVar11 * dVar5) * local_120 +
           (dVar5 * dVar9 - dVar10 * dVar4) * local_130 +
           (dVar4 * dVar11 - dVar9 * dVar6) * local_128 <= 0.0) ||
         (((local_100 - (double)param_2[0xf]) * dVar10 - (local_f8 - (double)param_2[0x10]) * dVar11
          ) * local_138 +
          ((local_f8 - (double)param_2[0x10]) * dVar9 - dVar10 * (local_f0 - (double)param_2[0x11]))
          * local_148 +
          ((local_f0 - (double)param_2[0x11]) * dVar11 - dVar9 * (local_100 - (double)param_2[0xf]))
          * local_140 <= 0.0)) {
        local_158 = lVar3;
        FUN_140437443(&local_118,1,lVar1,puVar2);
        dVar15 = (double)CONCAT44(uStack_10c,uStack_110);
        dVar6 = local_f0 - local_108;
        dVar4 = local_f8 - dVar15;
        dVar5 = local_100 - (double)CONCAT44(uStack_114,local_118);
        dVar7 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
        if (((dVar7 != 1.0) || (dVar9 = dVar6, dVar10 = dVar4, dVar11 = dVar5, NAN(dVar7))) &&
           (dVar9 = DAT_14c8464f0, dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar7)) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar9 = dVar6 * dVar7;
          dVar10 = dVar4 * dVar7;
          dVar11 = dVar5 * dVar7;
        }
        dVar4 = local_108 - *(double *)(param_1 + 0x88);
        dVar5 = dVar15 - *(double *)(param_1 + 0x80);
        dVar6 = (double)CONCAT44(uStack_114,local_118) - *(double *)(param_1 + 0x78);
        if (((dVar6 * dVar10 - dVar11 * dVar5) * local_120 +
             (dVar5 * dVar9 - dVar10 * dVar4) * local_150 +
             (dVar4 * dVar11 - dVar9 * dVar6) * local_128 <= 0.0) ||
           (((local_100 - (double)param_2[0xf]) * dVar10 -
            (local_f8 - (double)param_2[0x10]) * dVar11) * local_138 +
            ((local_f8 - (double)param_2[0x10]) * dVar9 -
            dVar10 * (local_f0 - (double)param_2[0x11])) * local_148 +
            ((local_f0 - (double)param_2[0x11]) * dVar11 -
            dVar9 * (local_100 - (double)param_2[0xf])) * local_140 <= 0.0)) {
          local_158 = lVar3;
          FUN_140437443(&local_118,2,lVar1,puVar2);
          dVar15 = (double)CONCAT44(uStack_10c,uStack_110);
          dVar6 = local_f0 - local_108;
          dVar4 = local_f8 - dVar15;
          dVar5 = local_100 - (double)CONCAT44(uStack_114,local_118);
          dVar7 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
          if (((dVar7 != 1.0) || (dVar9 = dVar6, dVar10 = dVar4, dVar11 = dVar5, NAN(dVar7))) &&
             (dVar9 = DAT_14c8464f0, dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar7)) {
            dVar7 = 1.0 / SQRT(dVar7);
            dVar9 = dVar6 * dVar7;
            dVar10 = dVar4 * dVar7;
            dVar11 = dVar5 * dVar7;
          }
          dVar4 = local_108 - *(double *)(param_1 + 0x88);
          dVar5 = dVar15 - *(double *)(param_1 + 0x80);
          dVar6 = (double)CONCAT44(uStack_114,local_118) - *(double *)(param_1 + 0x78);
          if (((dVar6 * dVar10 - dVar11 * dVar5) * local_120 +
               (dVar5 * dVar9 - dVar10 * dVar4) * local_150 +
               local_128 * (dVar4 * dVar11 - dVar9 * dVar6) <= 0.0) ||
             (((local_100 - (double)param_2[0xf]) * dVar10 -
              (local_f8 - (double)param_2[0x10]) * dVar11) * local_138 +
              ((local_f8 - (double)param_2[0x10]) * dVar9 -
              dVar10 * (local_f0 - (double)param_2[0x11])) * local_148 +
              ((local_f0 - (double)param_2[0x11]) * dVar11 -
              dVar9 * (local_100 - (double)param_2[0xf])) * local_140 <= 0.0)) {
            local_158 = lVar3;
            FUN_140437443(&local_118,3,lVar1,puVar2);
            dVar15 = (double)CONCAT44(uStack_10c,uStack_110);
          }
        }
      }
    }
    *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_114,local_118);
    *(double *)(param_1 + 0x38) = dVar15;
    *(double *)(param_1 + 0x40) = local_108;
    *(double *)(param_1 + 0x48) = local_100;
    *(double *)(param_1 + 0x50) = local_f8;
    *(double *)(param_1 + 0x58) = local_f0;
    *param_2 = CONCAT44(uStack_114,local_118);
    param_2[1] = dVar15;
    param_2[2] = local_108;
    param_2[3] = local_100;
    param_2[4] = local_f8;
    param_2[5] = local_f0;
    FUN_1403026fa(param_1 + 0x100,param_1);
    FUN_1403026fa(param_2 + 0x20,param_2);
    if (*(char *)(param_1 + 0x130) == '\x01') {
      if ((undefined8 *)(param_1 + 0x118) != param_2 + 0x27) {
        param_2[0x29] = *(undefined8 *)(param_1 + 0x128);
        uVar12 = *(undefined4 *)(param_1 + 0x11c);
        uVar13 = *(undefined4 *)(param_1 + 0x120);
        uVar14 = *(undefined4 *)(param_1 + 0x124);
        *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(param_1 + 0x118);
        *(undefined4 *)((longlong)param_2 + 0x13c) = uVar12;
        *(undefined4 *)(param_2 + 0x28) = uVar13;
        *(undefined4 *)((longlong)param_2 + 0x144) = uVar14;
        *(undefined1 *)(param_2 + 0x2a) = 1;
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403026fa FUN_1403026fa body=637 status=ok
// SIG undefined FUN_1403026fa(void)

void FUN_1403026fa(double *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  
  cVar6 = FUN_1402f57d0();
  if (cVar6 != '\0') {
    dVar2 = param_2[3];
    dVar7 = dVar2 - *param_2;
    dVar3 = param_2[4];
    dVar11 = dVar3 - param_2[1];
    dVar4 = param_2[5];
    dVar5 = dVar4 - param_2[2];
    fVar12 = (float)(SQRT(dVar5 * dVar5 + dVar11 * dVar11 + dVar7 * dVar7) * 0.5);
    fVar10 = (float)(SQRT((param_2[0xb] - param_2[8]) * (param_2[0xb] - param_2[8]) +
                          (param_2[10] - param_2[7]) * (param_2[10] - param_2[7]) +
                          (param_2[9] - param_2[6]) * (param_2[9] - param_2[6])) * 0.5);
    fVar1 = *(float *)((longlong)param_1 + 0x34);
    if (fVar1 <= fVar12) {
      fVar12 = fVar1;
    }
    if (fVar1 <= fVar10) {
      fVar10 = fVar1;
    }
    dVar11 = param_2[2] - dVar4;
    dVar7 = param_2[1] - dVar3;
    dVar8 = *param_2 - dVar2;
    dVar5 = 1.0 / SQRT(dVar11 * dVar11 + dVar8 * dVar8 + dVar7 * dVar7);
    dVar9 = (double)fVar12;
    *param_1 = dVar5 * dVar8 * dVar9 + dVar2;
    param_1[1] = dVar7 * dVar5 * dVar9 + dVar3;
    param_1[2] = dVar11 * dVar5 * dVar9 + dVar4;
    dVar2 = param_2[8];
    dVar7 = param_2[0xb] - dVar2;
    dVar3 = param_2[7];
    dVar11 = param_2[10] - dVar3;
    dVar4 = param_2[9] - param_2[6];
    dVar5 = 1.0 / SQRT(dVar7 * dVar7 + dVar4 * dVar4 + dVar11 * dVar11);
    dVar8 = (double)fVar10;
    param_1[3] = dVar5 * dVar4 * dVar8 + param_2[6];
    param_1[4] = dVar11 * dVar5 * dVar8 + dVar3;
    param_1[5] = dVar7 * dVar5 * dVar8 + dVar2;
    if (10000.0 <=
        (param_2[5] - param_2[2]) * (param_2[5] - param_2[2]) +
        (param_2[4] - param_2[1]) * (param_2[4] - param_2[1]) +
        (param_2[3] - *param_2) * (param_2[3] - *param_2)) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 140302978 FUN_140302978 body=104 status=ok
// SIG undefined FUN_140302978(void)

void FUN_140302978(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xf0);
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
  plVar3 = *(longlong **)(param_1 + 0x78);
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
                    /* WARNING: Could not recover jumptable at 0x0001403029dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1403029e0 FUN_1403029e0 body=95 status=ok
// SIG undefined FUN_1403029e0(void)

void FUN_1403029e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x158) == '\x01') {
    if (*(char *)(param_1 + 0x150) == '\x01') {
      *(undefined1 *)(param_1 + 0x150) = 0;
    }
    plVar3 = *(longlong **)(param_1 + 0xb0);
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
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  return;
}



// FUNCTION 140302a3f FUN_140302a3f body=7619 status=ok
// SIG undefined FUN_140302a3f(void)

/* WARNING: Removing unreachable block (ram,0x000140304441) */
/* WARNING: Removing unreachable block (ram,0x00014030444b) */
/* WARNING: Removing unreachable block (ram,0x000140304378) */
/* WARNING: Removing unreachable block (ram,0x000140304382) */
/* WARNING: Removing unreachable block (ram,0x0001403044e2) */
/* WARNING: Removing unreachable block (ram,0x0001403044e8) */
/* WARNING: Removing unreachable block (ram,0x0001403044ee) */

int FUN_140302a3f(double *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  byte bVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char cVar27;
  short sVar28;
  int iVar29;
  uint uVar30;
  DWORD DVar31;
  DWORD DVar32;
  LPVOID pvVar33;
  undefined8 *puVar34;
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong *plVar43;
  undefined8 **ppuVar44;
  int iVar45;
  longlong lVar46;
  uint *puVar47;
  undefined8 unaff_R15;
  bool bVar48;
  float fVar49;
  float fVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStack_358 [32];
  double local_338;
  longlong local_330;
  undefined8 **local_328;
  ulonglong local_320;
  double *local_318;
  uint local_30c;
  uint *local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  undefined8 local_2a8;
  longlong *plStack_2a0;
  undefined4 local_298;
  undefined8 *local_288;
  undefined8 uStack_280;
  undefined8 *local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  int local_258;
  undefined1 local_248 [24];
  uint *local_230;
  int local_228;
  int local_208;
  char local_1ec;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  longlong *plStack_1d0;
  double local_1c8;
  undefined4 local_1c0;
  double local_1b8;
  longlong *plStack_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined3 uStack_178;
  undefined4 uStack_175;
  undefined4 uStack_171;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float *local_158;
  uint local_148;
  uint *local_140;
  undefined4 local_130;
  float local_128;
  undefined8 local_118;
  undefined8 local_110;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  *(undefined4 *)(param_2 + 0x60) = 2;
  local_330 = param_2;
  if (param_1[0xd] == 0.0) {
    iVar45 = 4;
    goto LAB_14030418a;
  }
  lVar38 = *(longlong *)((longlong)param_1[0xd] + 0x598);
  if (DAT_14cb1d000 == 0) {
LAB_140304200:
    uVar40 = 0;
  }
  else {
    pvVar33 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(((longlong)pvVar33 << 0x20) + 0x100000000 >> 0x20));
    if ((int)pvVar33 != 0) goto LAB_140304200;
    AcquireSRWLockShared((PSRWLOCK)(lVar38 + 0x250));
    uVar40 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  }
  iVar45 = 5;
  if ((*(longlong *)(lVar38 + 0x78) != 0) &&
     (local_2f0 = *(longlong *)(*(longlong *)(lVar38 + 0x78) + 0x140), local_2f0 != 0)) {
    local_278 = (undefined8 *)0x0;
    FUN_144c31c10(local_248);
    if (param_1[0xd] == 0.0) {
      iVar45 = 4;
    }
    else {
      puVar47 = *(uint **)((longlong)param_1[0xd] + 0x598);
      if (DAT_14cb1d000 == 0) {
LAB_1403042ab:
        uVar37 = 0;
      }
      else {
        pvVar33 = TlsGetValue(DAT_14cb1d000);
        TlsSetValue(DAT_14cb1d000,(LPVOID)(((longlong)pvVar33 << 0x20) + 0x100000000 >> 0x20));
        if ((int)pvVar33 != 0) goto LAB_1403042ab;
        AcquireSRWLockShared((PSRWLOCK)(puVar47 + 0x94));
        uVar37 = CONCAT71((int7)((ulonglong)pvVar33 >> 8),1);
      }
      iVar45 = 5;
      local_308 = puVar47;
      if ((*(longlong *)(puVar47 + 0x1e) != 0) &&
         (local_328 = *(undefined8 ***)(*(longlong *)(puVar47 + 0x1e) + 0x140),
         local_328 != (undefined8 **)0x0)) {
        FUN_144c31710(&local_188,1);
        dVar7 = *param_1;
        iVar45 = 9;
        local_320 = CONCAT44(local_320._4_4_,(int)uVar37);
        if ((((-DAT_14cb1c738 < dVar7) &&
             (((((dVar7 < DAT_14cb1c738 && (-DAT_14cb1c740 < param_1[1])) &&
                (param_1[1] < DAT_14cb1c740)) &&
               ((-DAT_14cb1c748 < param_1[2] && (param_1[2] < DAT_14cb1c748)))) &&
              (iVar29 = _finite(dVar7), iVar29 != 0)))) &&
            ((((iVar29 = _finite(param_1[1]), iVar29 != 0 &&
               (iVar29 = _finite(param_1[2]), iVar29 != 0)) &&
              (dVar7 = param_1[3], -DAT_14cb1c738 < dVar7)) &&
             ((((dVar7 < DAT_14cb1c738 && (-DAT_14cb1c740 < param_1[4])) &&
               (param_1[4] < DAT_14cb1c740)) &&
              ((-DAT_14cb1c748 < param_1[5] && (param_1[5] < DAT_14cb1c748)))))))) &&
           ((iVar29 = _finite(dVar7), iVar29 != 0 &&
            ((iVar29 = _finite(param_1[4]), iVar29 != 0 &&
             (iVar29 = _finite(param_1[5]), iVar29 != 0)))))) {
          local_318 = param_1;
          if ((*(int *)(param_1 + 6) < 0) || (*(int *)((longlong)param_1 + 0x34) < 0)) {
            local_1a0 = 0xffffffffffffffff;
            local_198 = 0;
            local_194 = 0xffffffff;
            local_1e8 = *param_1;
            dStack_1e0 = param_1[1];
            local_1d8 = param_1[2];
            plStack_1d0 = (longlong *)CONCAT44(plStack_1d0._4_4_,*(undefined4 *)(param_1 + 8));
            local_1a8 = param_1[0xd];
            local_1c0 = *(undefined4 *)(param_1 + 10);
            local_1c8 = param_1[9];
            local_1b8 = param_1[0xb];
            plStack_1b0 = (longlong *)param_1[0xc];
            if (plStack_1b0 == (longlong *)0x0) {
              plStack_1b0 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)plStack_1b0 + 0xc) = *(int *)((longlong)plStack_1b0 + 0xc) + 1;
              UNLOCK();
            }
            local_2e8 = 0xffffffffffffffff;
            iStack_2e0 = 0;
            local_2d8 = DAT_14cb1c738;
            dStack_2d0 = DAT_14cb1c740;
            local_2c8 = DAT_14cb1c748;
            local_2c0 = DAT_14cb1c738;
            dStack_2b8 = DAT_14cb1c740;
            local_2b0 = DAT_14cb1c748;
            local_2a8 = 0;
            plStack_2a0 = (longlong *)0x0;
            local_298 = 0xffffffff;
            iVar29 = FUN_14022b9ff(local_328,&local_1e8);
            plVar43 = plStack_2a0;
            if (iVar29 == 0) {
              uVar55 = (undefined4)local_2e8;
              if (iStack_2e0 != 2) {
                uVar55 = 0xffffffff;
              }
              uVar56 = 0xffffffff;
              if (iStack_2e0 == 2) {
                uVar56 = local_2e8._4_4_;
              }
              local_318[6] = (double)CONCAT44(uVar56,uVar55);
            }
            if (plStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_2a0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_2a0)(plStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar43 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar43 + 0x10))(plVar43);
                }
              }
            }
            if (plStack_1b0 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_1b0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_1b0 + 0x10))();
              }
            }
            iVar45 = 1;
            param_1 = local_318;
            if (iVar29 != 0) goto LAB_1403030e9;
          }
          if ((*(int *)(local_318 + 7) < 0) || (*(int *)((longlong)local_318 + 0x3c) < 0)) {
            local_1a0 = 0xffffffffffffffff;
            local_198 = 0;
            local_194 = 0xffffffff;
            local_1e8 = local_318[3];
            dStack_1e0 = local_318[4];
            local_1d8 = local_318[5];
            plStack_1d0 = (longlong *)CONCAT44(plStack_1d0._4_4_,*(undefined4 *)(local_318 + 8));
            local_1a8 = local_318[0xd];
            local_1c0 = *(undefined4 *)(local_318 + 10);
            local_1c8 = local_318[9];
            local_1b8 = local_318[0xb];
            plStack_1b0 = (longlong *)local_318[0xc];
            if (plStack_1b0 == (longlong *)0x0) {
              plStack_1b0 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)((longlong)plStack_1b0 + 0xc) = *(int *)((longlong)plStack_1b0 + 0xc) + 1;
              UNLOCK();
            }
            local_2e8 = 0xffffffffffffffff;
            iStack_2e0 = 0;
            local_2d8 = DAT_14cb1c738;
            dStack_2d0 = DAT_14cb1c740;
            local_2c8 = DAT_14cb1c748;
            local_2c0 = DAT_14cb1c738;
            dStack_2b8 = DAT_14cb1c740;
            local_2b0 = DAT_14cb1c748;
            local_2a8 = 0;
            plStack_2a0 = (longlong *)0x0;
            local_298 = 0xffffffff;
            iVar29 = FUN_14022b9ff(local_328,&local_1e8);
            plVar43 = plStack_2a0;
            iVar45 = 10;
            if (iVar29 == 0) {
              uVar55 = local_2e8._4_4_;
              if (iStack_2e0 != 2) {
                uVar55 = 0xffffffff;
              }
              uVar56 = 0xffffffff;
              if (iStack_2e0 == 2) {
                uVar56 = (undefined4)local_2e8;
              }
              local_318[7] = (double)CONCAT44(uVar55,uVar56);
              iVar45 = 1;
            }
            if (plStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_2a0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_2a0)(plStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar43 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar43 + 0x10))(plVar43);
                }
              }
            }
            if (plStack_1b0 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_1b0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_1b0 + 0x10))();
              }
            }
            param_1 = local_318;
            if (iVar29 != 0) goto LAB_1403030e9;
          }
          local_168 = (float)*local_318 * 0.01;
          fStack_164 = (float)local_318[1] * 0.01;
          fStack_160 = (float)local_318[2] * 0.01;
          fStack_15c = (float)local_318[2] * 0.01;
          local_148 = *(uint *)(local_318 + 6) << 0x16 | *(uint *)((longlong)local_318 + 0x34);
          if ((int)(*(uint *)(local_318 + 6) | *(uint *)((longlong)local_318 + 0x34)) < 0) {
            local_148 = 0xffffffff;
          }
          dVar51 = local_318[4];
          dVar7 = local_318[5];
          dVar8 = local_318[5];
          *local_158 = (float)local_318[3] * 0.01;
          local_158[1] = (float)dVar51 * 0.01;
          local_158[2] = (float)dVar7 * 0.01;
          local_158[3] = (float)dVar8 * 0.01;
          uVar30 = *(uint *)(local_318 + 7) << 0x16 | *(uint *)((longlong)local_318 + 0x3c);
          if ((int)(*(uint *)(local_318 + 7) | *(uint *)((longlong)local_318 + 0x3c)) < 0) {
            uVar30 = 0xffffffff;
          }
          *local_140 = uVar30;
          local_128 = *(float *)(local_318 + 9) * 0.02;
          local_1c8 = local_318[0xd];
          dStack_1e0 = (double)CONCAT44(dStack_1e0._4_4_,*(undefined4 *)(local_318 + 10));
          local_1e8 = local_318[9];
          local_1d8 = local_318[0xb];
          plStack_1d0 = (longlong *)local_318[0xc];
          if (plStack_1d0 == (longlong *)0x0) {
            plStack_1d0 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)((longlong)plStack_1d0 + 0xc) = *(int *)((longlong)plStack_1d0 + 0xc) + 1;
            UNLOCK();
          }
          plVar43 = plStack_1d0;
          local_110 = FUN_1402f9f7f(&local_1e8);
          local_118 = FUN_1402fcb90(&local_1e8);
          if (plVar43 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar43 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar43 + 0x10))(plVar43);
            }
          }
          lVar35 = DAT_14cb1d210;
          iVar45 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
          if (((iVar45 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar45 == 2)) {
            uVar37 = 0;
          }
          else if (iVar45 == 1) {
            DVar31 = FUN_140ad26c0();
            DVar32 = GetCurrentThreadId();
            uVar37 = (ulonglong)(DVar31 != DVar32);
          }
          else {
            uVar37 = 1;
          }
          local_130 = *(undefined4 *)(lVar35 + uVar37 * 4);
          FUN_144c31c10(&local_1e8);
          FUN_144c31e20(local_248,&local_1e8);
          FUN_144c321a0(&local_1e8);
          FUN_144c32440(local_328,&local_188,local_248);
          param_1 = local_318;
          iVar45 = 10;
          if (local_1ec == '\x01') {
            local_1e8 = 2.37151510003798e-322;
            puVar34 = (undefined8 *)(*DAT_14c787670)(0,&local_1e8,0);
            if (DAT_14c787680 != (code *)0x0) {
              (*DAT_14c787680)(puVar34,"hkaiGatePath");
            }
            puVar34[1] = 0xffffffff;
            puVar34[2] = 1;
            *puVar34 = &PTR_LAB_14ab9f090;
            puVar34[3] = 0;
            puVar34[4] = 0x8000000000000000;
            *(undefined4 *)(puVar34 + 5) = 0;
            bVar48 = local_278 != (undefined8 *)0x0;
            local_278 = puVar34;
            if (bVar48) {
              FUN_144b3f230();
            }
            FUN_144c6e150(local_278,&local_188,local_248,local_328);
            if (local_208 != 0) {
              local_268 = CONCAT44(fStack_164,local_168);
              uStack_260 = CONCAT44(fStack_15c,fStack_160);
              local_258 = 0;
              local_1e8 = 6.79038653148412e-313;
              local_1d8 = 2.910383696194674e-11;
              dStack_1e0 = 6.79038653148412e-313;
              FUN_144c6ea00(local_278);
            }
            local_268 = CONCAT44(fStack_164,local_168);
            uStack_260 = CONCAT44(fStack_15c,fStack_160);
            local_258 = 0;
            iVar45 = 0;
          }
        }
LAB_1403030e9:
        FUN_144b4a050(&local_188);
        uVar37 = local_320 & 0xffffffff;
      }
      if ((char)uVar37 != '\0') {
        ReleaseSRWLockShared((PSRWLOCK)(local_308 + 0x94));
      }
      if (DAT_14cb1d000 != 0) {
        pvVar33 = TlsGetValue(DAT_14cb1d000);
        TlsSetValue(DAT_14cb1d000,(LPVOID)(((longlong)pvVar33 << 0x20) + -0x100000000 >> 0x20));
      }
      lVar35 = local_330;
      if (iVar45 == 0) {
        fVar50 = (float)local_268;
        fVar54 = local_268._4_4_;
        fVar49 = (float)uStack_260;
        ppuVar44 = (undefined8 **)(local_330 + 0x50);
        FUN_14494a737(*(undefined8 *)(local_330 + 0x50),*(undefined4 *)(local_330 + 0x58));
        *(undefined4 *)(lVar35 + 0x58) = 0;
        if (*(int *)(lVar35 + 0x5c) != 0) {
          FUN_141803f08(ppuVar44,0);
        }
        puVar34 = local_278;
        local_328 = ppuVar44;
        if (local_258 == -1) {
          local_320 = 0x80000000;
          lVar35 = 0;
          iVar45 = 0;
        }
        else {
          uVar30 = FUN_144c6ec10(local_278);
          iVar45 = 0;
          if ((int)uVar30 < 1) {
            local_320 = 0x80000000;
            lVar35 = 0;
          }
          else {
            if (uVar30 == 0x7fffffff) {
              FUN_144bfc170(0x4648a379,
                            "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                            ,0x90,"Invalid requestedCapacity");
              uVar37 = 0x7ffffffe;
            }
            else {
              uVar37 = (ulonglong)uVar30;
            }
            local_320 = uVar37;
            local_188 = uVar37 * 0x10;
            lVar35 = (*DAT_14c787670)(DAT_14c6e47a8,&local_188,DAT_14c6e47ac);
            FUN_144b3d470(lVar35,0,0);
            uVar2 = uVar37 * 0x10 + 0x10;
            ppuVar44 = local_328;
            if (uVar2 <= local_188) {
              local_320 = local_320 + 1;
              if (uVar2 <= local_188 - 0x10) {
                local_320 = local_320 + ((local_188 - 0x10) + uVar37 * -0x10 >> 4);
              }
            }
          }
          iVar29 = *(int *)(puVar34 + 4);
          if (local_258 < iVar29) {
            lVar42 = 0;
            lVar46 = 0;
            do {
              puVar4 = (undefined8 *)(puVar34[3] + (longlong)local_258 * 0x40 + lVar42 * 4);
              uVar13 = puVar4[1];
              *(undefined8 *)(lVar35 + lVar42) = *puVar4;
              ((undefined8 *)(lVar35 + lVar42))[1] = uVar13;
              lVar46 = lVar46 + -1;
              lVar42 = lVar42 + 0x10;
            } while ((longlong)local_258 - (longlong)iVar29 != lVar46);
            iVar45 = -(int)lVar46;
          }
        }
        local_30c = (uint)uVar40;
        local_1e8 = DAT_14cb1c860;
        dStack_1e0 = DAT_14cb1c868;
        local_1d8 = DAT_14cb1c870;
        local_188._3_1_ = (undefined1)(undefined4)DAT_14c8464e0;
        local_188._7_1_ = (undefined1)DAT_14c8464e0._4_4_;
        local_188._4_4_ = CONCAT13(local_188._7_1_,(int3)((uint)(undefined4)DAT_14c8464e0 >> 8));
        uStack_180._3_1_ = (undefined1)(undefined4)DAT_14c8464e8;
        uStack_180 = CONCAT13(uStack_180._3_1_,(int3)((uint)DAT_14c8464e0._4_4_ >> 8));
        uStack_17c._3_1_ = (undefined1)DAT_14c8464e8._4_4_;
        uStack_17c = CONCAT13(uStack_17c._3_1_,(int3)((uint)(undefined4)DAT_14c8464e8 >> 8));
        uStack_178 = (undefined3)((uint)DAT_14c8464e8._4_4_ >> 8);
        uStack_175 = SUB84(DAT_14c8464f0,0);
        uStack_171 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        iVar29 = *(int *)(local_330 + 0x58);
        lVar42 = (longlong)iVar29;
        *(uint *)(local_330 + 0x58) = iVar29 + 1U;
        local_2f8 = lVar38;
        if (*(uint *)(local_330 + 0x5c) < iVar29 + 1U) {
          FUN_141804056(ppuVar44,iVar29);
        }
        puVar34 = *ppuVar44;
        lVar38 = lVar42 * 0x78;
        puVar34[lVar42 * 0xf] = (double)fVar50 * 100.0;
        puVar34[lVar42 * 0xf + 1] = (double)fVar54 * 100.0;
        puVar34[lVar42 * 0xf + 2] = (double)fVar49 * 100.0;
        puVar34[lVar42 * 0xf + 3] = local_1e8;
        (puVar34 + lVar42 * 0xf + 3)[1] = dStack_1e0;
        puVar34[lVar42 * 0xf + 5] = local_1d8;
        puVar34[lVar42 * 0xf + 6] = 0;
        (puVar34 + lVar42 * 0xf + 6)[1] = 0;
        *(undefined4 *)(puVar34 + lVar42 * 0xf + 8) = 0xffffffff;
        puVar34[lVar42 * 0xf + 9] = 0xffffffffffffffff;
        *(undefined4 *)(puVar34 + lVar42 * 0xf + 10) = 0xffffffff;
        *(undefined8 *)((longlong)puVar34 + lVar38 + 0x54) = 0;
        *(undefined1 *)((longlong)puVar34 + lVar38 + 0x5c) = 0;
        puVar5 = (undefined4 *)((longlong)puVar34 + lVar38 + 0x5d);
        *puVar5 = (undefined4)local_188;
        puVar5[1] = local_188._4_4_;
        puVar5[2] = uStack_180;
        puVar5[3] = uStack_17c;
        puVar34 = puVar34 + lVar42 * 0xf + 0xd;
        *(uint *)puVar34 = CONCAT31((undefined3)uStack_17c,uStack_180._3_1_);
        *(uint *)((longlong)puVar34 + 4) = CONCAT31(uStack_178,uStack_17c._3_1_);
        *(undefined4 *)(puVar34 + 1) = uStack_175;
        *(undefined4 *)((longlong)puVar34 + 0xc) = uStack_171;
        local_318 = param_1;
        if (iVar45 != 0) {
          lVar38 = 0;
          do {
            fVar54 = *(float *)(lVar35 + lVar38);
            fVar49 = ((float *)(lVar35 + lVar38))[1];
            fVar50 = *(float *)(lVar35 + 8 + lVar38);
            local_1d8 = DAT_14cb1c870;
            local_1e8 = DAT_14cb1c860;
            dStack_1e0 = DAT_14cb1c868;
            uStack_175 = SUB84(DAT_14c8464f0,0);
            uStack_171 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            local_188._3_1_ = (undefined1)(undefined4)DAT_14c8464e0;
            local_188._7_1_ = (undefined1)DAT_14c8464e0._4_4_;
            local_188._4_4_ = CONCAT13(local_188._7_1_,(int3)((uint)(undefined4)DAT_14c8464e0 >> 8))
            ;
            uStack_180._3_1_ = (undefined1)(undefined4)DAT_14c8464e8;
            uStack_180 = CONCAT13(uStack_180._3_1_,(int3)((uint)DAT_14c8464e0._4_4_ >> 8));
            uStack_17c._3_1_ = (undefined1)DAT_14c8464e8._4_4_;
            uStack_17c = CONCAT13(uStack_17c._3_1_,(int3)((uint)(undefined4)DAT_14c8464e8 >> 8));
            uStack_178 = (undefined3)((uint)DAT_14c8464e8._4_4_ >> 8);
            iVar29 = *(int *)(local_330 + 0x58);
            lVar42 = (longlong)iVar29;
            *(uint *)(local_330 + 0x58) = iVar29 + 1U;
            if (*(uint *)(local_330 + 0x5c) < iVar29 + 1U) {
              FUN_141804056(ppuVar44,iVar29);
            }
            puVar34 = *ppuVar44;
            lVar46 = lVar42 * 0x78;
            puVar34[lVar42 * 0xf] = (double)fVar54 * 100.0;
            puVar34[lVar42 * 0xf + 1] = (double)fVar49 * 100.0;
            puVar34[lVar42 * 0xf + 2] = (double)fVar50 * 100.0;
            puVar34[lVar42 * 0xf + 3] = local_1e8;
            (puVar34 + lVar42 * 0xf + 3)[1] = dStack_1e0;
            puVar34[lVar42 * 0xf + 5] = local_1d8;
            puVar34[lVar42 * 0xf + 6] = 0;
            (puVar34 + lVar42 * 0xf + 6)[1] = 0;
            *(undefined4 *)(puVar34 + lVar42 * 0xf + 8) = 0xffffffff;
            puVar34[lVar42 * 0xf + 9] = 0xffffffffffffffff;
            *(undefined4 *)(puVar34 + lVar42 * 0xf + 10) = 0xffffffff;
            *(undefined8 *)((longlong)puVar34 + lVar46 + 0x54) = 0;
            *(undefined1 *)((longlong)puVar34 + lVar46 + 0x5c) = 0;
            puVar5 = (undefined4 *)((longlong)puVar34 + lVar46 + 0x5d);
            *puVar5 = (undefined4)local_188;
            puVar5[1] = local_188._4_4_;
            puVar5[2] = uStack_180;
            puVar5[3] = uStack_17c;
            puVar34 = puVar34 + lVar42 * 0xf + 0xd;
            *(uint *)puVar34 = CONCAT31((undefined3)uStack_17c,uStack_180._3_1_);
            *(uint *)((longlong)puVar34 + 4) = CONCAT31(uStack_178,uStack_17c._3_1_);
            *(undefined4 *)(puVar34 + 1) = uStack_175;
            *(undefined4 *)((longlong)puVar34 + 0xc) = uStack_171;
            lVar38 = lVar38 + 0x10;
          } while ((longlong)iVar45 * 0x10 != lVar38);
        }
        local_300 = lVar35;
        if ((longlong)local_228 != 0) {
          local_308 = local_230 + local_228;
          puVar47 = local_230;
          do {
            uVar30 = *puVar47;
            uVar36 = uVar30 >> 0x16;
            if (uVar30 == 0xffffffff) {
              uVar36 = 0xffffffff;
            }
            lVar38 = *(longlong *)
                      (*(longlong *)(local_2f0 + 0x38) + 8 + (longlong)(int)uVar36 * 0x120);
            if (lVar38 != 0) {
              uVar36 = uVar30 & 0x3fffff;
              if (uVar30 == 0xffffffff) {
                uVar36 = 0xffffffff;
              }
              lVar35 = *(longlong *)(lVar38 + 0x20);
              lVar42 = (longlong)(int)uVar36;
              sVar28 = *(short *)(*(longlong *)(lVar35 + 0x18) + 6 + lVar42 * 0x18);
              if (0 < sVar28) {
                lVar35 = *(longlong *)(lVar35 + 0x18) + lVar42 * 0x18;
                lVar46 = 0;
                do {
                  iVar45 = *(int *)(lVar35 + 0x10);
                  lVar41 = *(longlong *)(lVar38 + 0x20);
                  plVar43 = (longlong *)(lVar41 + 0x28);
                  iVar29 = 0;
                  if (*(int *)(lVar41 + 0x30) <= iVar45 + (int)lVar46) {
                    plVar43 = (longlong *)(lVar41 + 0x60);
                    iVar29 = *(int *)(lVar41 + 0x30);
                  }
                  lVar39 = ((longlong)iVar45 - (longlong)iVar29) + lVar46;
                  bVar12 = *(byte *)(*plVar43 + 2 + lVar39 * 8);
                  if ((bVar12 & 0x10) == 0) {
                    uVar30 = *(uint *)(*plVar43 + 4 + lVar39 * 8);
                    uVar36 = *(int *)(lVar41 + 0x94) << 0x16 | uVar30 & 0x3fffff;
                    if (uVar30 == 0xffffffff) {
                      uVar36 = uVar30;
                    }
                    if ((bVar12 & 0x40) != 0) {
                      uVar36 = uVar30;
                    }
                    if (uVar36 != 0xffffffff) {
                      uVar40 = CONCAT44(uVar36 >> 0x16,uVar36) & 0xffffffff003fffff;
                      local_188._0_4_ = (undefined4)uVar40;
                      local_188._4_4_ = (undefined4)(uVar40 >> 0x20);
                      FUN_1403458a2(local_330,&local_1e8,&local_188,0);
                      sVar28 = *(short *)(lVar35 + 6);
                    }
                  }
                  lVar46 = lVar46 + 1;
                } while ((int)lVar46 < (int)sVar28);
                lVar35 = *(longlong *)(lVar38 + 0x20);
              }
              if ((*(int *)(lVar35 + 0x48) != 0) &&
                 (lVar42 = (longlong)*(int *)(*(longlong *)(lVar35 + 0x40) + lVar42 * 4),
                 lVar42 != -1)) {
                uVar40 = *(ulonglong *)(*(longlong *)(lVar35 + 0x50) + lVar42 * 8);
                uVar37 = uVar40 >> 0x20;
                if (0 < (int)(uVar40 >> 0x20)) {
                  lVar35 = (longlong)(int)uVar40;
                  do {
                    lVar42 = *(longlong *)(lVar38 + 0x20);
                    lVar46 = (longlong)*(int *)(lVar42 + 0x30);
                    plVar43 = (longlong *)(lVar42 + 0x60);
                    if (lVar35 < lVar46) {
                      plVar43 = (longlong *)(lVar42 + 0x28);
                      lVar46 = 0;
                    }
                    lVar46 = *plVar43 + lVar46 * -8;
                    bVar12 = *(byte *)(lVar46 + 2 + lVar35 * 8);
                    if ((bVar12 & 0x10) == 0) {
                      uVar30 = *(uint *)(lVar46 + 4 + lVar35 * 8);
                      uVar36 = *(int *)(lVar42 + 0x94) << 0x16 | uVar30 & 0x3fffff;
                      if (uVar30 == 0xffffffff) {
                        uVar36 = uVar30;
                      }
                      if ((bVar12 & 0x40) != 0) {
                        uVar36 = uVar30;
                      }
                      if (uVar36 != 0xffffffff) {
                        uVar40 = CONCAT44(uVar36 >> 0x16,uVar36) & 0xffffffff003fffff;
                        local_188._0_4_ = (undefined4)uVar40;
                        local_188._4_4_ = (undefined4)(uVar40 >> 0x20);
                        FUN_1403458a2(local_330,&local_1e8,&local_188,0);
                      }
                    }
                    lVar35 = lVar35 + 1;
                    uVar37 = uVar37 - 1;
                  } while (uVar37 != 0);
                }
              }
            }
            puVar47 = puVar47 + 1;
          } while (puVar47 != local_308);
        }
        lVar35 = local_300;
        ppuVar44 = local_328;
        if (*(int *)(local_330 + 0x58) < 3) {
          FUN_1437f9f9e(local_328,0);
          FUN_141803e76(ppuVar44);
          uVar30 = (uint)local_320;
          lVar35 = local_300;
        }
        else {
          dVar7 = local_318[0xe];
          iVar45 = *(int *)(local_318 + 10);
          fVar50 = *(float *)(local_318 + 9);
          fVar54 = fVar50;
          if (iVar45 == -1) {
LAB_140303728:
            uStack_280 = 0;
            local_288 = (undefined8 *)0x0;
            FUN_141803f08(&local_288);
            iVar45 = (int)uStack_280;
            uVar30 = uStack_280._4_4_;
          }
          else {
            lVar38 = FUN_14477bcf0();
            lVar38 = *(longlong *)(*(longlong *)(lVar38 + 0xb8) + -0xa8 + (longlong)iVar45 * 8);
            if ((lVar38 != 0) && (fVar49 = *(float *)(lVar38 + 0x34) * 0.6666667, fVar49 <= fVar50))
            {
              fVar54 = fVar49;
            }
            iVar45 = *(int *)(local_330 + 0x58);
            local_288 = (undefined8 *)0x0;
            uStack_280 = 0;
            if (iVar45 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar45);
            }
            if (iVar45 != 0) goto LAB_140303728;
            uVar30 = 0;
            iVar45 = 0;
          }
          puVar34 = *ppuVar44;
          uStack_280 = CONCAT44(uStack_280._4_4_,iVar45 + 1U);
          if (uVar30 < iVar45 + 1U) {
            FUN_141804056(&local_288,iVar45);
          }
          lVar42 = (longlong)iVar45;
          lVar46 = lVar42 * 0x78;
          uVar13 = *puVar34;
          uVar9 = puVar34[1];
          uVar23 = puVar34[2];
          uVar24 = puVar34[3];
          uVar25 = puVar34[5];
          local_288[lVar42 * 0xf + 4] = puVar34[4];
          (local_288 + lVar42 * 0xf + 4)[1] = uVar25;
          local_288[lVar42 * 0xf + 2] = uVar23;
          (local_288 + lVar42 * 0xf + 2)[1] = uVar24;
          local_288[lVar42 * 0xf] = uVar13;
          (local_288 + lVar42 * 0xf)[1] = uVar9;
          local_288[lVar42 * 0xf + 6] = puVar34[6];
          lVar38 = puVar34[7];
          local_288[lVar42 * 0xf + 7] = lVar38;
          if (lVar38 != 0) {
            LOCK();
            *(int *)(lVar38 + 8) = *(int *)(lVar38 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 *)(local_288 + lVar42 * 0xf + 8) = *(undefined4 *)(puVar34 + 8);
          uVar55 = *(undefined4 *)(puVar34 + 9);
          uVar56 = *(undefined4 *)((longlong)puVar34 + 0x4c);
          uVar57 = *(undefined4 *)(puVar34 + 10);
          uVar58 = *(undefined4 *)((longlong)puVar34 + 0x54);
          uVar16 = *(undefined4 *)(puVar34 + 0xb);
          uVar17 = *(undefined4 *)((longlong)puVar34 + 0x5c);
          uVar18 = *(undefined4 *)(puVar34 + 0xc);
          uVar19 = *(undefined4 *)((longlong)puVar34 + 100);
          uVar20 = *(undefined4 *)((longlong)puVar34 + 0x6c);
          uVar21 = *(undefined4 *)(puVar34 + 0xe);
          uVar22 = *(undefined4 *)((longlong)puVar34 + 0x74);
          *(undefined4 *)(local_288 + lVar42 * 0xf + 0xd) = *(undefined4 *)(puVar34 + 0xd);
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x6c) = uVar20;
          *(undefined4 *)(local_288 + lVar42 * 0xf + 0xe) = uVar21;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x74) = uVar22;
          *(undefined4 *)(local_288 + lVar42 * 0xf + 0xb) = uVar16;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x5c) = uVar17;
          *(undefined4 *)(local_288 + lVar42 * 0xf + 0xc) = uVar18;
          *(undefined4 *)((longlong)local_288 + lVar46 + 100) = uVar19;
          *(undefined4 *)(local_288 + lVar42 * 0xf + 9) = uVar55;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x4c) = uVar56;
          *(undefined4 *)(local_288 + lVar42 * 0xf + 10) = uVar57;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x54) = uVar58;
          uVar30 = *(int *)(local_330 + 0x58) - 1;
          if (2 < *(int *)(local_330 + 0x58)) {
            lVar38 = 0x78;
            do {
              uVar40 = uStack_280;
              lVar46 = (longlong)(int)uStack_280;
              lVar42 = (longlong)((int)uStack_280 + -1);
              puVar34 = *ppuVar44;
              dVar8 = *(double *)((longlong)puVar34 + lVar38) - (double)local_288[lVar42 * 0xf];
              dVar52 = *(double *)((longlong)puVar34 + lVar38 + 8) -
                       (double)local_288[lVar42 * 0xf + 1];
              dVar51 = *(double *)((longlong)puVar34 + lVar38 + 0x10) -
                       (double)local_288[lVar42 * 0xf + 2];
              if (100.0 < dVar51 * dVar51 + dVar52 * dVar52 + dVar8 * dVar8) {
                uVar36 = (int)uStack_280 + 1;
                uStack_280 = CONCAT44(uStack_280._4_4_,uVar36);
                if (uStack_280._4_4_ < uVar36) {
                  FUN_141804056(&local_288,uVar40 & 0xffffffff);
                }
                puVar4 = (undefined8 *)((longlong)puVar34 + lVar38);
                lVar41 = lVar46 * 0x78;
                uVar13 = *puVar4;
                uVar9 = puVar4[1];
                uVar23 = puVar4[2];
                uVar24 = puVar4[3];
                uVar25 = puVar4[5];
                local_288[lVar46 * 0xf + 4] = puVar4[4];
                (local_288 + lVar46 * 0xf + 4)[1] = uVar25;
                local_288[lVar46 * 0xf + 2] = uVar23;
                (local_288 + lVar46 * 0xf + 2)[1] = uVar24;
                local_288[lVar46 * 0xf] = uVar13;
                (local_288 + lVar46 * 0xf)[1] = uVar9;
                local_288[lVar46 * 0xf + 6] = *(undefined8 *)((longlong)puVar34 + lVar38 + 0x30);
                lVar42 = *(longlong *)((longlong)puVar34 + lVar38 + 0x38);
                local_288[lVar46 * 0xf + 7] = lVar42;
                if (lVar42 != 0) {
                  LOCK();
                  *(int *)(lVar42 + 8) = *(int *)(lVar42 + 8) + 1;
                  UNLOCK();
                }
                *(undefined4 *)(local_288 + lVar46 * 0xf + 8) =
                     *(undefined4 *)((longlong)puVar34 + lVar38 + 0x40);
                puVar5 = (undefined4 *)((longlong)puVar34 + lVar38 + 0x48);
                uVar55 = puVar5[1];
                uVar56 = puVar5[2];
                uVar57 = puVar5[3];
                puVar6 = (undefined4 *)((longlong)puVar34 + lVar38 + 0x58);
                uVar58 = *puVar6;
                uVar16 = puVar6[1];
                uVar17 = puVar6[2];
                uVar18 = puVar6[3];
                puVar6 = (undefined4 *)((longlong)puVar34 + lVar38 + 0x68);
                uVar19 = *puVar6;
                uVar20 = puVar6[1];
                uVar21 = puVar6[2];
                uVar22 = puVar6[3];
                *(undefined4 *)(local_288 + lVar46 * 0xf + 9) = *puVar5;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x4c) = uVar55;
                *(undefined4 *)(local_288 + lVar46 * 0xf + 10) = uVar56;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x54) = uVar57;
                *(undefined4 *)(local_288 + lVar46 * 0xf + 0xb) = uVar58;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x5c) = uVar16;
                *(undefined4 *)(local_288 + lVar46 * 0xf + 0xc) = uVar17;
                *(undefined4 *)((longlong)local_288 + lVar41 + 100) = uVar18;
                *(undefined4 *)(local_288 + lVar46 * 0xf + 0xd) = uVar19;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x6c) = uVar20;
                *(undefined4 *)(local_288 + lVar46 * 0xf + 0xe) = uVar21;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x74) = uVar22;
              }
              lVar38 = lVar38 + 0x78;
            } while ((ulonglong)uVar30 * 0x78 - lVar38 != 0);
            uVar30 = *(int *)(local_330 + 0x58) - 1;
          }
          uVar40 = uStack_280;
          puVar34 = *ppuVar44 + (longlong)(int)uVar30 * 0xf;
          lVar38 = (longlong)(int)uStack_280;
          uVar30 = (int)uStack_280 + 1;
          uStack_280 = CONCAT44(uStack_280._4_4_,uVar30);
          if (uStack_280._4_4_ < uVar30) {
            FUN_141804056(&local_288,uVar40 & 0xffffffff);
          }
          lVar46 = local_330;
          lVar41 = lVar38 * 0x78;
          uVar13 = *puVar34;
          uVar9 = puVar34[1];
          uVar23 = puVar34[2];
          uVar24 = puVar34[3];
          uVar25 = puVar34[5];
          local_288[lVar38 * 0xf + 4] = puVar34[4];
          (local_288 + lVar38 * 0xf + 4)[1] = uVar25;
          local_288[lVar38 * 0xf + 2] = uVar23;
          (local_288 + lVar38 * 0xf + 2)[1] = uVar24;
          local_288[lVar38 * 0xf] = uVar13;
          (local_288 + lVar38 * 0xf)[1] = uVar9;
          local_288[lVar38 * 0xf + 6] = puVar34[6];
          lVar42 = puVar34[7];
          local_288[lVar38 * 0xf + 7] = lVar42;
          if (lVar42 != 0) {
            LOCK();
            *(int *)(lVar42 + 8) = *(int *)(lVar42 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 *)(local_288 + lVar38 * 0xf + 8) = *(undefined4 *)(puVar34 + 8);
          uVar55 = *(undefined4 *)((longlong)puVar34 + 0x4c);
          uVar56 = *(undefined4 *)(puVar34 + 10);
          uVar57 = *(undefined4 *)((longlong)puVar34 + 0x54);
          uVar58 = *(undefined4 *)(puVar34 + 0xb);
          uVar16 = *(undefined4 *)((longlong)puVar34 + 0x5c);
          uVar17 = *(undefined4 *)(puVar34 + 0xc);
          uVar18 = *(undefined4 *)((longlong)puVar34 + 100);
          uVar19 = *(undefined4 *)(puVar34 + 0xd);
          uVar20 = *(undefined4 *)((longlong)puVar34 + 0x6c);
          uVar21 = *(undefined4 *)(puVar34 + 0xe);
          uVar22 = *(undefined4 *)((longlong)puVar34 + 0x74);
          *(undefined4 *)(local_288 + lVar38 * 0xf + 9) = *(undefined4 *)(puVar34 + 9);
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x4c) = uVar55;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 10) = uVar56;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x54) = uVar57;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xb) = uVar58;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x5c) = uVar16;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xc) = uVar17;
          *(undefined4 *)((longlong)local_288 + lVar41 + 100) = uVar18;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xd) = uVar19;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x6c) = uVar20;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xe) = uVar21;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x74) = uVar22;
          if (&local_288 != ppuVar44) {
            FUN_14494a737(*(undefined8 *)(local_330 + 0x50),*(undefined4 *)(local_330 + 0x58));
            uVar40 = uStack_280;
            puVar34 = local_288;
            *(int *)(lVar46 + 0x58) = (int)uStack_280;
            if ((int)uStack_280 == 0 && *(int *)(lVar46 + 0x5c) == 0) {
              *(undefined4 *)(local_330 + 0x5c) = 0;
            }
            else {
              FUN_1437fa016(ppuVar44,uStack_280 & 0xffffffff);
              FUN_140105d87(*ppuVar44,puVar34,uVar40 & 0xffffffff);
            }
          }
          uVar37 = uStack_280;
          FUN_14494a737(local_288,uStack_280 & 0xffffffff);
          uVar40 = uStack_280 >> 0x20;
          uStack_280 = uStack_280 & 0xffffffff00000000;
          if (((longlong)uVar37 < 0) && ((int)uVar40 != 0)) {
            FUN_141803f08(&local_288,0);
          }
          iVar45 = *(int *)(local_330 + 0x58);
          if (2 < iVar45) {
            lVar38 = 0x78;
            do {
              puVar4 = *local_328;
              uVar13 = *(undefined8 *)((longlong)puVar4 + lVar38 + 0x88);
              uStack_178 = (undefined3)uVar13;
              uStack_175 = (undefined4)((ulonglong)uVar13 >> 0x18);
              uStack_171._0_1_ = (undefined1)((ulonglong)uVar13 >> 0x38);
              puVar34 = (undefined8 *)((longlong)puVar4 + lVar38 + 0x78);
              uVar13 = *puVar34;
              uVar9 = puVar34[1];
              local_188._0_4_ = (undefined4)uVar13;
              local_188._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
              uStack_180 = (undefined4)uVar9;
              uStack_17c = (undefined4)((ulonglong)uVar9 >> 0x20);
              local_1d8 = *(double *)((longlong)puVar4 + lVar38 + 0x10);
              local_1e8 = *(double *)((longlong)puVar4 + lVar38);
              dStack_1e0 = ((double *)((longlong)puVar4 + lVar38))[1];
              local_2d8 = *(double *)((longlong)puVar4 + lVar38 + -0x68);
              puVar34 = (undefined8 *)((longlong)puVar4 + lVar38 + -0x78);
              local_2e8 = *puVar34;
              iStack_2e0 = *(int *)(puVar34 + 1);
              uStack_2dc = *(undefined4 *)((longlong)puVar34 + 0xc);
              local_338 = dVar7;
              cVar27 = FUN_14382d73c(&local_2e8,&local_1e8,&local_188,fVar50);
              fVar49 = 0.0;
              if (cVar27 == '\0') {
                fVar49 = fVar54;
              }
              *(float *)((longlong)puVar4 + lVar38 + 0x54) = fVar49;
              lVar38 = lVar38 + 0x78;
            } while ((ulonglong)(iVar45 - 1) * 0x78 - lVar38 != 0);
          }
          uVar40 = uStack_280;
          ppuVar44 = local_328;
          puVar34 = *local_328;
          lVar38 = (longlong)(int)uStack_280;
          uVar30 = (int)uStack_280 + 1;
          uStack_280 = CONCAT44(uStack_280._4_4_,uVar30);
          if (uStack_280._4_4_ < uVar30) {
            FUN_141804056(&local_288,uVar40 & 0xffffffff);
          }
          lVar46 = lVar38 * 0x78;
          uVar13 = *puVar34;
          uVar9 = puVar34[1];
          uVar23 = puVar34[2];
          uVar24 = puVar34[3];
          uVar25 = puVar34[5];
          local_288[lVar38 * 0xf + 4] = puVar34[4];
          (local_288 + lVar38 * 0xf + 4)[1] = uVar25;
          local_288[lVar38 * 0xf + 2] = uVar23;
          (local_288 + lVar38 * 0xf + 2)[1] = uVar24;
          local_288[lVar38 * 0xf] = uVar13;
          (local_288 + lVar38 * 0xf)[1] = uVar9;
          local_288[lVar38 * 0xf + 6] = puVar34[6];
          lVar42 = puVar34[7];
          local_288[lVar38 * 0xf + 7] = lVar42;
          if (lVar42 != 0) {
            LOCK();
            *(int *)(lVar42 + 8) = *(int *)(lVar42 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 *)(local_288 + lVar38 * 0xf + 8) = *(undefined4 *)(puVar34 + 8);
          uVar55 = *(undefined4 *)(puVar34 + 9);
          uVar56 = *(undefined4 *)((longlong)puVar34 + 0x4c);
          uVar57 = *(undefined4 *)(puVar34 + 10);
          uVar58 = *(undefined4 *)((longlong)puVar34 + 0x54);
          uVar16 = *(undefined4 *)(puVar34 + 0xb);
          uVar17 = *(undefined4 *)((longlong)puVar34 + 0x5c);
          uVar18 = *(undefined4 *)(puVar34 + 0xc);
          uVar19 = *(undefined4 *)((longlong)puVar34 + 100);
          uVar20 = *(undefined4 *)((longlong)puVar34 + 0x6c);
          uVar21 = *(undefined4 *)(puVar34 + 0xe);
          uVar22 = *(undefined4 *)((longlong)puVar34 + 0x74);
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xd) = *(undefined4 *)(puVar34 + 0xd);
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x6c) = uVar20;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xe) = uVar21;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x74) = uVar22;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xb) = uVar16;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x5c) = uVar17;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xc) = uVar18;
          *(undefined4 *)((longlong)local_288 + lVar46 + 100) = uVar19;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 9) = uVar55;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x4c) = uVar56;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 10) = uVar57;
          *(undefined4 *)((longlong)local_288 + lVar46 + 0x54) = uVar58;
          iVar45 = *(int *)(local_330 + 0x58);
          if (2 < iVar45) {
            lVar38 = 0x78;
            do {
              uVar40 = uStack_280;
              lVar42 = (longlong)(int)uStack_280;
              puVar34 = *ppuVar44;
              fVar50 = *(float *)((longlong)puVar34 + lVar38 + 0x54);
              if ((0.1 <= fVar50) ||
                 (lVar46 = (longlong)((int)uStack_280 + -1),
                 dVar7 = (double)local_288[lVar46 * 0xf] - *(double *)((longlong)puVar34 + lVar38),
                 dVar8 = (double)local_288[lVar46 * 0xf + 1] -
                         *(double *)((longlong)puVar34 + lVar38 + 8),
                 dVar51 = (double)local_288[lVar46 * 0xf + 2] -
                          *(double *)((longlong)puVar34 + lVar38 + 0x10),
                 fVar50 = fVar50 + *(float *)((longlong)local_288 + lVar46 * 0x78 + 0x54),
                 fVar50 * fVar50 < (float)(dVar51 * dVar51 + dVar8 * dVar8 + dVar7 * dVar7))) {
                uVar30 = (int)uStack_280 + 1;
                uStack_280 = CONCAT44(uStack_280._4_4_,uVar30);
                if (uStack_280._4_4_ < uVar30) {
                  FUN_141804056(&local_288,uVar40 & 0xffffffff);
                }
                puVar4 = (undefined8 *)((longlong)puVar34 + lVar38);
                lVar41 = lVar42 * 0x78;
                uVar13 = *puVar4;
                uVar9 = puVar4[1];
                uVar23 = puVar4[2];
                uVar24 = puVar4[3];
                uVar25 = puVar4[5];
                local_288[lVar42 * 0xf + 4] = puVar4[4];
                (local_288 + lVar42 * 0xf + 4)[1] = uVar25;
                local_288[lVar42 * 0xf + 2] = uVar23;
                (local_288 + lVar42 * 0xf + 2)[1] = uVar24;
                local_288[lVar42 * 0xf] = uVar13;
                (local_288 + lVar42 * 0xf)[1] = uVar9;
                local_288[lVar42 * 0xf + 6] = *(undefined8 *)((longlong)puVar34 + lVar38 + 0x30);
                lVar46 = *(longlong *)((longlong)puVar34 + lVar38 + 0x38);
                local_288[lVar42 * 0xf + 7] = lVar46;
                if (lVar46 != 0) {
                  LOCK();
                  *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
                  UNLOCK();
                }
                *(undefined4 *)(local_288 + lVar42 * 0xf + 8) =
                     *(undefined4 *)((longlong)puVar34 + lVar38 + 0x40);
                puVar5 = (undefined4 *)((longlong)puVar34 + lVar38 + 0x48);
                uVar55 = puVar5[1];
                uVar56 = puVar5[2];
                uVar57 = puVar5[3];
                puVar6 = (undefined4 *)((longlong)puVar34 + lVar38 + 0x58);
                uVar58 = *puVar6;
                uVar16 = puVar6[1];
                uVar17 = puVar6[2];
                uVar18 = puVar6[3];
                puVar6 = (undefined4 *)((longlong)puVar34 + lVar38 + 0x68);
                uVar19 = *puVar6;
                uVar20 = puVar6[1];
                uVar21 = puVar6[2];
                uVar22 = puVar6[3];
                *(undefined4 *)(local_288 + lVar42 * 0xf + 9) = *puVar5;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x4c) = uVar55;
                *(undefined4 *)(local_288 + lVar42 * 0xf + 10) = uVar56;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x54) = uVar57;
                *(undefined4 *)(local_288 + lVar42 * 0xf + 0xb) = uVar58;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x5c) = uVar16;
                *(undefined4 *)(local_288 + lVar42 * 0xf + 0xc) = uVar17;
                *(undefined4 *)((longlong)local_288 + lVar41 + 100) = uVar18;
                *(undefined4 *)(local_288 + lVar42 * 0xf + 0xd) = uVar19;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x6c) = uVar20;
                *(undefined4 *)(local_288 + lVar42 * 0xf + 0xe) = uVar21;
                *(undefined4 *)((longlong)local_288 + lVar41 + 0x74) = uVar22;
              }
              lVar38 = lVar38 + 0x78;
            } while ((ulonglong)(iVar45 - 1) * 0x78 - lVar38 != 0);
          }
          lVar38 = (longlong)(int)uStack_280;
          if (1 < lVar38) {
            lVar42 = (longlong)(*(int *)(local_330 + 0x58) + -1) * 0x78;
            if (ABS((double)local_288[lVar38 * 0xf + -0xf] -
                    *(double *)(*(longlong *)(local_330 + 0x50) + lVar42)) <= 1.0) {
              lVar42 = *(longlong *)(local_330 + 0x50) + lVar42;
              if ((ABS((double)local_288[lVar38 * 0xf + -0xe] - *(double *)(lVar42 + 8)) <= 1.0) &&
                 (ABS((double)local_288[lVar38 * 0xf + -0xd] - *(double *)(lVar42 + 0x10)) <= 1.0))
              {
                plVar43 = (longlong *)local_288[lVar38 * 0xf + -8];
                local_288[lVar38 * 0xf + -9] = 0;
                local_288[lVar38 * 0xf + -8] = 0;
                FUN_1437f9f9e(&local_288,(int)uStack_280 + -1);
                FUN_141803e76(&local_288);
                if (plVar43 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar43 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*plVar43)(plVar43);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar43 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar43 + 0x10))(plVar43);
                    }
                  }
                }
              }
            }
          }
          uVar13 = *local_288;
          dVar7 = (double)local_288[1];
          dVar8 = (double)local_288[2];
          plVar43 = (longlong *)local_288[7];
          if (plVar43 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar43 + 1) = (int)plVar43[1] + 1;
            UNLOCK();
          }
          FUN_1437f9f9e(&local_288,0);
          FUN_141803e76(&local_288);
          uVar40 = uStack_280;
          puVar34 = (undefined8 *)
                    ((longlong)(*(int *)(local_330 + 0x58) + -1) * 0x78 +
                    *(longlong *)(local_330 + 0x50));
          lVar38 = (longlong)(int)uStack_280;
          uVar30 = (int)uStack_280 + 1;
          uStack_280 = CONCAT44(uStack_280._4_4_,uVar30);
          if (uStack_280._4_4_ < uVar30) {
            FUN_141804056(&local_288,uVar40 & 0xffffffff);
          }
          lVar46 = local_330;
          lVar41 = lVar38 * 0x78;
          uVar9 = *puVar34;
          uVar23 = puVar34[1];
          uVar24 = puVar34[2];
          uVar25 = puVar34[3];
          uVar26 = puVar34[5];
          local_288[lVar38 * 0xf + 4] = puVar34[4];
          (local_288 + lVar38 * 0xf + 4)[1] = uVar26;
          local_288[lVar38 * 0xf + 2] = uVar24;
          (local_288 + lVar38 * 0xf + 2)[1] = uVar25;
          local_288[lVar38 * 0xf] = uVar9;
          (local_288 + lVar38 * 0xf)[1] = uVar23;
          local_288[lVar38 * 0xf + 6] = puVar34[6];
          lVar42 = puVar34[7];
          local_288[lVar38 * 0xf + 7] = lVar42;
          if (lVar42 != 0) {
            LOCK();
            *(int *)(lVar42 + 8) = *(int *)(lVar42 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 *)(local_288 + lVar38 * 0xf + 8) = *(undefined4 *)(puVar34 + 8);
          uVar55 = *(undefined4 *)(puVar34 + 9);
          uVar56 = *(undefined4 *)((longlong)puVar34 + 0x4c);
          uVar57 = *(undefined4 *)(puVar34 + 10);
          uVar58 = *(undefined4 *)((longlong)puVar34 + 0x54);
          uVar16 = *(undefined4 *)(puVar34 + 0xb);
          uVar17 = *(undefined4 *)((longlong)puVar34 + 0x5c);
          uVar18 = *(undefined4 *)(puVar34 + 0xc);
          uVar19 = *(undefined4 *)((longlong)puVar34 + 100);
          uVar20 = *(undefined4 *)((longlong)puVar34 + 0x6c);
          uVar21 = *(undefined4 *)(puVar34 + 0xe);
          uVar22 = *(undefined4 *)((longlong)puVar34 + 0x74);
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xd) = *(undefined4 *)(puVar34 + 0xd);
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x6c) = uVar20;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xe) = uVar21;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x74) = uVar22;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xb) = uVar16;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x5c) = uVar17;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 0xc) = uVar18;
          *(undefined4 *)((longlong)local_288 + lVar41 + 100) = uVar19;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 9) = uVar55;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x4c) = uVar56;
          *(undefined4 *)(local_288 + lVar38 * 0xf + 10) = uVar57;
          *(undefined4 *)((longlong)local_288 + lVar41 + 0x54) = uVar58;
          if (1 < (int)uStack_280) {
            lVar38 = 0x88;
            lVar42 = 0;
            do {
              if (lVar42 == 0) {
                dVar51 = *(double *)((longlong)local_288 + lVar38 + -0x80);
                uVar55 = SUB84(dVar51,0);
                uVar56 = (undefined4)((ulonglong)dVar51 >> 0x20);
                dVar51 = dVar51 - dVar7;
                uVar57 = (undefined4)uVar13;
                uVar58 = (undefined4)((ulonglong)uVar13 >> 0x20);
                dVar52 = dVar8;
              }
              else {
                uVar9 = *(undefined8 *)((longlong)local_288 + lVar38 + -0x100);
                uVar57 = (undefined4)uVar9;
                uVar58 = (undefined4)((ulonglong)uVar9 >> 0x20);
                dVar51 = *(double *)((longlong)local_288 + lVar38 + -0x80);
                uVar55 = SUB84(dVar51,0);
                uVar56 = (undefined4)((ulonglong)dVar51 >> 0x20);
                dVar51 = dVar51 - *(double *)((longlong)local_288 + lVar38 + -0xf8);
                dVar52 = *(double *)((longlong)local_288 + lVar38 + -0xf0);
              }
              dVar10 = *(double *)((longlong)local_288 + lVar38 + -0x78);
              dVar52 = dVar10 - dVar52;
              dVar11 = *(double *)((longlong)local_288 + lVar38 + -0x88);
              dVar53 = dVar11 - (double)CONCAT44(uVar58,uVar57);
              fVar50 = (float)SQRT(dVar52 * dVar52 + dVar53 * dVar53 + dVar51 * dVar51);
              if (fVar50 <= 1e-08) {
                dVar53 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dVar51 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                dVar52 = DAT_14c8464f0;
              }
              else {
                dVar15 = (double)(1.0 / fVar50);
                dVar51 = dVar51 * dVar15;
                dVar53 = dVar53 * dVar15;
                dVar52 = dVar52 * dVar15;
              }
              dVar10 = *(double *)((longlong)local_288 + lVar38) - dVar10;
              dVar15 = *(double *)((longlong)local_288 + lVar38 + -8) -
                       (double)CONCAT44(uVar56,uVar55);
              dVar11 = *(double *)((longlong)local_288 + lVar38 + -0x10) - dVar11;
              fVar50 = (float)SQRT(dVar10 * dVar10 + dVar11 * dVar11 + dVar15 * dVar15);
              if (fVar50 <= 1e-08) {
                dVar11 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                dVar10 = DAT_14c8464f0;
              }
              else {
                dVar14 = (double)(1.0 / fVar50);
                dVar15 = dVar15 * dVar14;
                dVar11 = dVar11 * dVar14;
                dVar10 = dVar10 * dVar14;
              }
              dVar53 = dVar53 - dVar11;
              dVar51 = dVar51 - dVar15;
              dVar52 = dVar52 - dVar10;
              lVar42 = lVar42 + 1;
              dVar10 = 1.0 / SQRT(dVar52 * dVar52 + dVar53 * dVar53 + dVar51 * dVar51);
              *(double *)((longlong)local_288 + lVar38 + -0x28) = dVar10 * dVar53;
              *(double *)((longlong)local_288 + lVar38 + -0x20) = dVar51 * dVar10;
              *(double *)((longlong)local_288 + lVar38 + -0x18) = dVar52 * dVar10;
              lVar38 = lVar38 + 0x78;
            } while (lVar42 < (longlong)(int)uStack_280 + -1);
          }
          if (&local_288 != local_328) {
            FUN_14494a737(*(undefined8 *)(local_330 + 0x50),*(undefined4 *)(local_330 + 0x58));
            if (*(longlong *)(lVar46 + 0x50) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 **)(local_330 + 0x50) = local_288;
            local_288 = (undefined8 *)0x0;
            *(int *)(local_330 + 0x58) = (int)uStack_280;
            *(uint *)(local_330 + 0x5c) = uStack_280._4_4_;
            uStack_280 = 0;
          }
          if (plVar43 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar43 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar43)(plVar43);
              LOCK();
              piVar1 = (int *)((longlong)plVar43 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar43 + 0x10))(plVar43);
              }
            }
          }
          FUN_14494a737(local_288,uStack_280 & 0xffffffff);
          if (local_288 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          uVar30 = (uint)local_320;
        }
        lVar38 = local_2f8;
        uVar40 = (ulonglong)local_30c;
        iVar45 = 0;
        if ((lVar35 != 0) && (-1 < (int)uVar30)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,lVar35,(ulonglong)uVar30 << 4);
        }
      }
    }
    FUN_144c321a0(local_248);
    if (local_278 != (undefined8 *)0x0) {
      FUN_144b3f230();
    }
  }
  if ((char)uVar40 != '\0') {
    ReleaseSRWLockShared((PSRWLOCK)(lVar38 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar33 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(((longlong)pvVar33 << 0x20) + -0x100000000 >> 0x20));
  }
LAB_14030418a:
  if ((local_d0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar45;
}



// FUNCTION 140304803 FUN_140304803 body=1317 status=ok
// SIG undefined FUN_140304803(void)

ulonglong *
FUN_140304803(ulonglong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  short sVar13;
  undefined *puVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined8 local_148;
  byte local_13e;
  byte local_13d;
  undefined4 local_13c;
  ulonglong local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [96];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  byte *local_80;
  byte *local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  ulonglong local_60;
  
  uVar5 = param_8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *param_1 = 0;
  FUN_14494b062(local_128,param_2,param_5);
  puVar14 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(param_4 + 8) + 0xd0) != '\0') {
    puVar14 = (undefined *)(*(longlong *)(param_4 + 8) + 0x1b8);
  }
  FUN_140304d29(local_130,param_4,puVar14 + 0x10);
  lVar3 = DAT_14ca97170;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xc60);
  local_148 = param_3;
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar11 = 0;
  }
  else if (iVar1 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar11 = 1;
  }
  sVar13 = 1;
  if (0 < *(int *)(lVar3 + uVar11 * 4)) {
    if (*(int *)(DAT_14ca5dc68 + 4) < 1) {
      uVar9 = FUN_147430fbd(*(undefined2 *)
                             (&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2));
    }
    else {
      puVar12 = (uint *)(*(longlong *)(param_4 + 0x118c8) + 0x18);
      if (*(longlong *)(param_4 + 0x118c8) == 0) {
        puVar12 = (uint *)(param_4 + 0x11828);
      }
      uVar9 = *puVar12;
    }
    uVar10 = 8;
    if (uVar9 < 8) {
      uVar10 = uVar9;
    }
    sVar13 = (short)uVar10 + (ushort)(uVar10 == 0);
  }
  local_c0 = (ulonglong *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_b8 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  local_c8 = &DAT_00020008;
  uVar9 = DAT_14ca84e40;
  if ((int)local_130._0_4_ < (int)DAT_14ca84e40) {
    uVar9 = local_130._0_4_;
  }
  local_a0 = (undefined4 *)CONCAT26(sVar13,0x100000000);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  uVar10 = DAT_14ca84e40;
  if ((int)local_130._4_4_ < (int)DAT_14ca84e40) {
    uVar10 = local_130._4_4_;
  }
  local_98 = (undefined1 *)CONCAT26(local_98._6_2_,0xff0012010101);
  local_b0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  local_a8 = (undefined1 *)((ulonglong)uVar9 << 0x20);
  local_a0 = (undefined4 *)CONCAT44(local_a0._4_4_,uVar10);
  uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar15 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
    FUN_140023dd8(param_2 + 0x70,0x128);
    uVar15 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar15 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar15,L"Lumen.ScreenProbeGather.ScreenBentNormal",&local_c8,0);
  iVar1 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar1 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar1);
  }
  uVar4 = param_7;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar1 * 8) = uVar15;
  *(int *)(uVar15 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_13c = 4;
  if (6.0 <= *(float *)(param_4 + 0x2910)) {
    local_13c = 0x10;
    uVar16 = 0x10;
  }
  else {
    uVar16 = 4;
    if (2.0 <= *(float *)(param_4 + 0x2910)) {
      local_13c = 8;
      uVar16 = 8;
    }
  }
  local_138 = uVar15;
  cVar6 = FUN_140304d80();
  if (cVar6 == '\0') {
    bVar17 = false;
    if (((*(byte *)(param_4 + 0x11a08) == 1) && (*(longlong *)(param_4 + 0x11c90) != 0)) &&
       (bVar17 = false, *(longlong *)(param_4 + 0x11c98) != 0)) {
      bVar17 = *(longlong *)(param_4 + 0x11ca8) != 0;
    }
    local_13d = 0 < DAT_14c7607a4 & bVar17;
    local_78 = &local_13d;
    local_13e = *(byte *)(param_4 + 0x11a08) & 0 < DAT_14ca01b08;
    local_80 = &local_13e;
    local_c0 = &local_138;
    uStack_b8 = param_5;
    local_a0 = &param_8;
    local_98 = &stack0x00000048;
    local_90 = (undefined1 *)&param_6;
    local_88 = uVar4;
    local_70 = &local_13c;
    local_68 = &stack0x00000050;
    uVar11 = 0;
    local_c8 = param_2;
    local_b0 = param_4;
    local_a8 = local_128;
    FUN_140304ef2(&local_c8,0);
    lVar3 = DAT_14ca97170;
    iVar1 = *(int *)(lVar2 + 0xc60);
    if (iVar1 != 0x40000002) {
      if ((DAT_14c86a9f8 == '\x01') && (iVar1 != 2)) {
        if (iVar1 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          uVar11 = (ulonglong)(DVar7 != DVar8);
        }
        else {
          uVar11 = 1;
        }
      }
      else {
        uVar11 = 0;
      }
    }
    uVar15 = local_138;
    if (0 < *(int *)(lVar3 + uVar11 * 4)) {
      FUN_140304ef2(&local_c8,1);
      uVar15 = local_138;
    }
  }
  else {
    local_168 = uVar5;
    local_160 = param_4;
    local_158 = uVar15;
    local_150 = uVar16;
    FUN_142db4c3f(param_2,local_148,local_128,uVar4);
  }
  *param_1 = uVar15;
  *(undefined4 *)(param_1 + 1) = 1;
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140304d29 FUN_140304d29 body=87 status=ok
// SIG undefined FUN_140304d29(void)

undefined8 * FUN_140304d29(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  *param_1 = *param_3;
  return param_1;
}



// FUNCTION 140304d80 FUN_140304d80 body=370 status=ok
// SIG undefined FUN_140304d80(void)

bool FUN_140304d80(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar6 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar6 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  bVar7 = false;
  if ((bVar6) && (cVar2 != '\0')) {
    cVar2 = FUN_141767a62(param_1);
    lVar1 = DAT_14ca01c58;
    if (cVar2 == '\0') {
      bVar7 = false;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar3 ^ 1);
      }
      bVar7 = *(int *)(lVar1 + uVar5 * 4) != 0;
    }
  }
  return bVar7;
}



// FUNCTION 140304ef2 FUN_140304ef2 body=2413 status=ok
// SIG undefined FUN_140304ef2(void)

void FUN_140304ef2(longlong *param_1,byte param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  ushort uVar17;
  int iVar18;
  undefined8 *puVar19;
  byte bVar20;
  int iVar21;
  undefined8 *puVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  longlong lStack_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar10 = *param_1;
  puVar19 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar19 + 0x26;
  if (*(undefined8 **)(lVar10 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(lVar10 + 0x70),0x140);
    puVar19 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar19 + 0x26;
  }
  *(undefined8 **)(lVar10 + 0x70) = puVar9;
  *puVar19 = &PTR_FUN_14a286c20;
  puVar19[2] = 0;
  puVar19[4] = 0;
  *(undefined1 *)(puVar19 + 5) = 1;
  puVar19[6] = 0;
  *(undefined1 *)(puVar19 + 7) = 1;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[10] = 0;
  puVar19[0xb] = 0;
  puVar19[0xc] = 0;
  puVar19[0xd] = 0;
  puVar19[0xe] = 0;
  puVar19[0xf] = 0;
  puVar19[0x10] = 0;
  puVar19[0x11] = 0;
  puVar19[0x12] = 0;
  puVar19[0x13] = 0;
  puVar19[0x14] = 0;
  *(undefined1 *)(puVar19 + 0x15) = 1;
  puVar19[0x16] = 0;
  puVar19[0x18] = 0;
  *(undefined1 *)(puVar19 + 0x19) = 1;
  *(undefined4 *)(puVar19 + 0x1a) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xd4) = 0;
  *(undefined4 *)(puVar19 + 0x1b) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xdc) = 0x3f800000;
  puVar19[0x1e] = 0;
  puVar19[0x1f] = 0;
  puVar19[0x20] = 0;
  *(undefined1 *)(puVar19 + 0x21) = 1;
  puVar19[0x22] = 0;
  *(undefined1 *)(puVar19 + 0x23) = 1;
  puVar19[0x24] = 0;
  *(undefined4 *)(puVar19 + 0x25) = 4;
  iVar5 = *(int *)(lVar10 + 0xa0);
  *(uint *)(lVar10 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(lVar10 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8((longlong *)(lVar10 + 0x98),iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar5 * 8) = puVar19;
  lVar10 = *param_1;
  lVar12 = *(longlong *)param_1[1];
  uVar3 = *(undefined1 *)(lVar12 + 0x94);
  puVar22 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar22 + 9;
  if (*(undefined8 **)(lVar10 + 0x78) < puVar9) {
    FUN_140023dd8((longlong *)(lVar10 + 0x70),0x50);
    puVar22 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar22 + 9;
  }
  *(undefined8 **)(lVar10 + 0x70) = puVar9;
  puVar22[1] = *(undefined8 *)(lVar12 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 0;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar22 + 5) = 0;
  *puVar22 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar22 + 6) = uVar3;
  *(undefined1 *)(puVar22 + 7) = 0;
  *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
  puVar22[8] = lVar12;
  iVar5 = *(int *)(lVar10 + 0x1a0);
  *(uint *)(lVar10 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(lVar10 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(lVar10 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar10 + 0x198) + (longlong)iVar5 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(lVar10 + 0x1a0) + -1;
  puVar19[2] = puVar22;
  uVar11 = *(undefined8 *)(param_1[2] + 0x198);
  lVar10 = FUN_14482e3b2();
  cVar7 = *(char *)(lVar10 + 0x41);
  if (*(char *)(lVar10 + 0x41) == '\x03') {
    cVar7 = '\x02';
  }
  puVar19[4] = uVar11;
  *(char *)(puVar19 + 5) = cVar7;
  uVar11 = *(undefined8 *)(param_1[3] + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar7 = *(char *)(lVar10 + 0x41);
  if (cVar7 == '\x03') {
    cVar7 = '\x02';
  }
  puVar19[6] = uVar11;
  *(char *)(puVar19 + 7) = cVar7;
  puVar9 = (undefined8 *)param_1[4];
  puVar22 = puVar19 + 8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar22 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar22 = puVar22 + 1;
  }
  if (puVar19[0x13] == 0) {
    uVar11 = FUN_14476842e(*param_1,&DAT_14ca63b28,L"BlackDummy",2);
    puVar19[0x13] = uVar11;
  }
  *(undefined4 *)((longlong)puVar19 + 0xe4) = *(undefined4 *)param_1[5];
  *(undefined4 *)(puVar19 + 0x1d) = *(undefined4 *)param_1[6];
  lVar10 = param_1[3];
  lVar12 = FUN_1447e4f80();
  cVar7 = *(char *)(lVar12 + 0x41);
  if (cVar7 == '\x03') {
    cVar7 = '\x02';
  }
  puVar19[0x14] = *(undefined8 *)(lVar10 + 0x18);
  *(char *)(puVar19 + 0x15) = cVar7;
  puVar19[0x16] = *(undefined8 *)param_1[7];
  FUN_14019e00e(&local_88,param_1[8],0,1);
  lVar10 = FUN_1448a8484();
  puVar9 = local_88;
  cVar7 = *(char *)(lVar10 + 0x41);
  if (cVar7 == '\x03') {
    cVar7 = '\x02';
  }
  puVar19[0x18] = local_88;
  *(char *)(puVar19 + 0x19) = cVar7;
  if (local_88 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_88 + 1);
    uVar16 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar16 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_88 + 1);
      LOCK();
      uVar16 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar16 >> 0x1e & 1) == 0) {
        bVar20 = *(byte *)((longlong)local_88 + 0xd);
        plVar13 = (longlong *)FUN_14001cc68(0x10,8);
        plVar13[1] = (longlong)puVar9;
        plVar15 = DAT_14ca843c0;
        plVar14 = DAT_14ca843c8;
        if ((bVar20 & 2) == 0) {
          do {
            *plVar13 = (longlong)plVar15;
            LOCK();
            bVar23 = plVar15 != DAT_14ca843c0;
            plVar14 = plVar13;
            if (bVar23) {
              plVar15 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar14;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar13 = (longlong)plVar14;
            LOCK();
            bVar23 = plVar14 != DAT_14ca843c8;
            plVar15 = plVar13;
            if (bVar23) {
              plVar14 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  lVar10 = param_1[3];
  fVar24 = (float)(*(int *)(lVar10 + 0x3104) - *(int *)(lVar10 + 0x30fc)) /
           (float)(*(int *)(lVar10 + 0x137cc) * 2);
  fVar25 = (float)(*(int *)(lVar10 + 0x3100) - *(int *)(lVar10 + 0x30f8)) /
           (float)(*(int *)(lVar10 + 0x137c8) * 2);
  *(float *)(puVar19 + 0x1a) = fVar25;
  *(float *)((longlong)puVar19 + 0xd4) = fVar24;
  *(float *)(puVar19 + 0x1b) = 1.0 / fVar25;
  *(float *)((longlong)puVar19 + 0xdc) = 1.0 / fVar24;
  puVar19[0x1e] = *(undefined8 *)(param_1[3] + 0x136f0);
  puVar19[0x1f] = DAT_14c9c0d80;
  *(undefined4 *)(puVar19 + 0x1c) = DAT_14c7607a0;
  if (*(char *)param_1[9] == '\x01') {
    uVar11 = *(undefined8 *)(param_1[3] + 0x11a00);
    lVar10 = FUN_144a81af4();
    cVar7 = '\x02';
    if (*(char *)(lVar10 + 0x41) != '\x03') {
      cVar7 = *(char *)(lVar10 + 0x41);
    }
    puVar19[0x20] = uVar11;
    *(char *)(puVar19 + 0x21) = cVar7;
  }
  cVar7 = *(char *)param_1[10];
  if (cVar7 == '\x01') {
    uVar11 = *(undefined8 *)(param_1[3] + 0x11c90);
    lVar10 = FUN_1414708b2();
    cVar7 = '\x02';
    if (*(char *)(lVar10 + 0x41) != '\x03') {
      cVar7 = *(char *)(lVar10 + 0x41);
    }
    puVar19[0x22] = uVar11;
    *(char *)(puVar19 + 0x23) = cVar7;
    cVar7 = *(char *)param_1[10];
  }
  puVar9 = puVar19 + 2;
  iVar5 = *(int *)param_1[0xb];
  cVar4 = *(char *)param_1[9];
  cVar8 = FUN_144ab4f03();
  uVar11 = *(undefined8 *)(param_1[3] + 0x13818);
  uVar16 = 2;
  if (iVar5 != 4) {
    uVar16 = (uint)(iVar5 == 8);
  }
  bVar20 = cVar4 * '\x02' | param_2 | cVar7 << 2 | cVar8 << 3;
  FUN_141591d88();
  FUN_1448e935e(uVar11,&local_88,&DAT_14ca01b88,((uint)bVar20 + (uint)bVar20 * 2 & 0xff) + uVar16);
  FUN_141591d88();
  puVar22 = local_88;
  local_a8 = local_88;
  uStack_a0 = lStack_80;
  lVar10 = param_1[3];
  if (param_2 == 0) {
    iVar18 = *(int *)(lVar10 + 0x3104) - *(int *)(lVar10 + 0x30fc);
    iVar5 = iVar18 + 7;
    iVar18 = iVar18 + 0xe;
    if (-1 < iVar5) {
      iVar18 = iVar5;
    }
    iVar21 = *(int *)(lVar10 + 0x3100) - *(int *)(lVar10 + 0x30f8);
    iVar5 = iVar21 + 7;
    iVar21 = iVar21 + 0xe;
    if (-1 < iVar5) {
      iVar21 = iVar5;
    }
    uVar17 = *(ushort *)param_1[0xc];
    lVar10 = *param_1;
    FUN_141591eaa();
    local_88 = (undefined8 *)0x0;
    lStack_80 = 0;
    FUN_1448f70da(puVar22,&DAT_14ca05f88,puVar9);
    local_98 = (undefined4)local_a8;
    uStack_94 = local_a8._4_4_;
    uStack_90 = (undefined4)uStack_a0;
    uStack_8c = uStack_a0._4_4_;
    FUN_140069376(lVar10);
    puVar2 = (ulonglong *)(lVar10 + 0x70);
    if ((uVar17 & 4) == 0) {
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
         (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (uVar17 & 2) != 0)))) {
        uVar17 = uVar17 & 0xfff9 | 4;
      }
      puVar22 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar22 + 0x3d;
      if (*(undefined8 **)(lVar10 + 0x78) < puVar19) {
        FUN_140023dd8(puVar2,0x1f0);
        puVar22 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar22 + 0x3d;
      }
      *puVar2 = (ulonglong)puVar19;
      lStack_80 = DAT_14ca05fd0;
      if (DAT_14ca05fd0 != 0) {
        LOCK();
        *(int *)(DAT_14ca05fd0 + 8) = *(int *)(DAT_14ca05fd0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (longlong *)&DAT_14ca05f88;
      local_c8 = (undefined8 *)CONCAT71(local_c8._1_7_,2);
      local_88 = puVar9;
      FUN_140068f1a(puVar22,&local_a9,&local_88,uVar17);
      *puVar22 = &PTR_FUN_14a286c90;
      puVar22[0x37] = &DAT_14ca05f88;
      puVar22[0x38] = puVar9;
      *(undefined4 *)(puVar22 + 0x39) = local_98;
      *(undefined4 *)((longlong)puVar22 + 0x1cc) = uStack_94;
      *(undefined4 *)(puVar22 + 0x3a) = uStack_90;
      *(undefined4 *)((longlong)puVar22 + 0x1d4) = uStack_8c;
      *(int *)(puVar22 + 0x3b) = iVar21 >> 3;
      *(int *)((longlong)puVar22 + 0x1dc) = iVar18 >> 3;
      *(undefined4 *)(puVar22 + 0x3c) = 1;
    }
    else {
      if (((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) ||
         ((DAT_14ca84e6a != '\x01' || ((DAT_14ca84e99 & 1) != 0)))) {
        uVar17 = uVar17 & 0xfff9 | 2;
      }
      else if (DAT_14c760ddc == 2 && (uVar17 & 2) != 0) {
        uVar17 = uVar17 & 0xfffd;
      }
      puVar22 = (undefined8 *)(*(longlong *)(lVar10 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar22 + 0x3e;
      if (*(undefined8 **)(lVar10 + 0x78) < puVar19) {
        FUN_140023dd8(puVar2,0x1f8);
        puVar22 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar22 + 0x3e;
      }
      *(undefined8 **)(lVar10 + 0x70) = puVar19;
      uVar6 = *(undefined4 *)(lVar10 + 0x660);
      lStack_80 = DAT_14ca05fd0;
      if (DAT_14ca05fd0 != 0) {
        LOCK();
        *(int *)(DAT_14ca05fd0 + 8) = *(int *)(DAT_14ca05fd0 + 8) + 1;
        UNLOCK();
      }
      local_78 = (longlong *)&DAT_14ca05f88;
      local_c8 = (undefined8 *)CONCAT71(local_c8._1_7_,2);
      local_88 = puVar9;
      FUN_140068f1a(puVar22,&local_a9,&local_88,uVar17);
      puVar22[0x37] = &DAT_14ca05f88;
      puVar22[0x38] = puVar9;
      *(undefined4 *)(puVar22 + 0x39) = local_98;
      *(undefined4 *)((longlong)puVar22 + 0x1cc) = uStack_94;
      *(undefined4 *)(puVar22 + 0x3a) = uStack_90;
      *(undefined4 *)((longlong)puVar22 + 0x1d4) = uStack_8c;
      *(int *)(puVar22 + 0x3b) = iVar21 >> 3;
      *(int *)((longlong)puVar22 + 0x1dc) = iVar18 >> 3;
      *(undefined4 *)(puVar22 + 0x3c) = 1;
      *puVar22 = &PTR_FUN_14a286c70;
      *(undefined4 *)(puVar22 + 0x3d) = uVar6;
    }
    iVar5 = *(int *)(lVar10 + 0x170);
    *(uint *)(lVar10 + 0x170) = iVar5 + 1U;
    if (*(uint *)(lVar10 + 0x174) < iVar5 + 1U) {
      FUN_14470e57a(lVar10 + 0x168,iVar5);
    }
    *(undefined8 **)(*(longlong *)(lVar10 + 0x168) + (longlong)iVar5 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x2c) = *(int *)(lVar10 + 0x170) + -1;
    FUN_140069100(lVar10,puVar22);
  }
  else {
    puVar19[0x24] = *(undefined8 *)(lVar10 + 0x118b8);
    *(undefined4 *)(puVar19 + 0x25) = 4;
    local_88 = (undefined8 *)0x0;
    local_78 = (longlong *)0x0;
    local_c0 = *(undefined8 *)(param_1[3] + 0x118b8);
    local_c8 = puVar9;
    local_b8 = &local_88;
    FUN_14722a3c5(*param_1,&local_98,*(undefined2 *)param_1[0xc],&local_a8);
    if (local_88 != (undefined8 *)0x0) {
      plVar15 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar15 = local_68;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140305860 FUN_140305860 body=21 status=ok
// SIG undefined FUN_140305860(void)

undefined8 FUN_140305860(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140305878 FUN_140305878 body=1378 status=ok
// SIG undefined FUN_140305878(void)

void FUN_140305878(longlong *param_1,float param_2)

{
  void **ppvVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  void *local_128;
  ulonglong uStack_120;
  undefined1 local_110 [4];
  undefined1 local_10c;
  code *local_108 [4];
  double local_e8;
  double local_d0;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  local_128 = (void *)0x0;
  uStack_120 = 0;
  (**(code **)(*param_1 + 0x90))(0,&local_128);
  _Src = local_128;
  ppvVar1 = (void **)(param_1 + 0x1d);
  if (ppvVar1 != &local_128) {
    iVar6 = (int)uStack_120;
    lVar9 = (longlong)(int)uStack_120;
    *(int *)(param_1 + 0x1e) = (int)uStack_120;
    if ((int)uStack_120 == 0 && *(int *)((longlong)param_1 + 0xf4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
    }
    else {
      FUN_140306928(ppvVar1,uStack_120 & 0xffffffff);
      if (iVar6 != 0) {
        memcpy(*ppvVar1,_Src,lVar9 << 3);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  FUN_1403062bc(param_1,ppvVar1);
  iVar6 = (int)param_1[0x1e];
  if (1 < iVar6) {
    *(undefined4 *)(param_1 + 0x1e) = 1;
    FUN_147ca8392(ppvVar1);
    iVar6 = (int)param_1[0x1e];
  }
  if (iVar6 < 1) {
LAB_14030592c:
    lVar9 = 0;
  }
  else {
    uVar3 = *(uint *)((longlong)*ppvVar1 + 4);
    if (uVar3 == 0) goto LAB_14030592c;
    uVar4 = *(uint *)*ppvVar1;
    lVar9 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar7 != (longlong *)0x0) &&
         ((*(uint *)(plVar7 + 2) == uVar3 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar9 = *plVar7;
        }
        else {
          lVar9 = 0;
        }
        lVar9 = *(longlong *)(lVar9 + 0xa8);
        if (lVar9 != 0) {
          if (DAT_14cb46ec8 == 0) {
            local_160 = local_108;
            local_108[0] = FUN_141030f22;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_142b4754c;
            local_168 = &LAB_1483e40eb;
            local_170 = &LAB_146486986;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = (undefined1 *)CONCAT44(local_190._4_4_,8);
            local_198 = 0x420;
            FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
          }
          if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30))
          goto LAB_14030592f;
        }
      }
      goto LAB_14030592c;
    }
  }
LAB_14030592f:
  puVar2 = (uint *)((longlong)param_1 + 0xfc);
  iVar6 = (int)param_1[0x20];
  lVar8 = lVar9;
  if (((iVar6 == 0) || (uVar3 = *puVar2, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) {
    if (lVar9 != 0) {
LAB_140305c03:
      lVar11 = *(longlong *)(param_1[0x1c] + 0x110);
      if (lVar11 == 0) {
        local_148 = 0x47efffffe0000000;
        uStack_140 = 0x47efffffe0000000;
        local_138 = 0x47efffffe0000000;
      }
      else {
        local_148 = *(undefined8 *)(lVar11 + 0x260);
        uStack_140 = *(undefined8 *)(lVar11 + 0x268);
        local_138 = *(undefined8 *)(lVar11 + 0x270);
      }
      if (*(longlong *)(lVar8 + 0x3a8) != 0) {
        local_190 = local_110;
        local_10c = 0;
        local_198 = 3;
        FUN_140b9461a(param_1,local_108,*(longlong *)(lVar8 + 0x3a8),&local_148);
        if (local_48 == '\0') {
          *(float *)(param_1 + 0x21) =
               ((float)local_e8 - (float)local_d0) * *(float *)((longlong)param_1 + 0x104) +
               (float)local_d0;
        }
      }
      goto LAB_140305caa;
    }
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar6)) ||
       ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar7;
    }
    if (lVar9 != lVar11) {
      if ((((int)uVar3 < DAT_14c9647dc) &&
          (lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 != 0)) &&
         ((*(int *)(lVar11 + 0x10) == iVar6 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
        lVar8 = FUN_14479d2ce(puVar2);
      }
      if (lVar8 != 0) goto LAB_140305c03;
LAB_140305caa:
      cVar5 = FUN_140306a5e(puVar2);
      uVar13 = 0;
      if (cVar5 == '\0') {
        uVar13 = 0x3f800000;
      }
      *(undefined4 *)((longlong)param_1 + 0x104) = uVar13;
      goto LAB_1403059e2;
    }
  }
  lVar8 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
  if (lVar8 == 0) {
    param_2 = 1.0;
  }
  else {
    lVar8 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
    param_2 = param_2 / *(float *)(lVar8 + 0x28);
  }
  param_2 = *(float *)((longlong)param_1 + 0x104) - param_2;
  fVar14 = 0.0;
  if (0.0 <= param_2) {
    fVar14 = param_2;
  }
  *(float *)((longlong)param_1 + 0x104) = fVar14;
LAB_1403059e2:
  if (lVar9 == 0) {
    *puVar2 = 0;
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar9 + 0xc);
    *puVar2 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(lVar9 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar6 = iVar10;
      }
    }
  }
  *(int *)(param_1 + 0x20) = iVar6;
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140305dfe FUN_140305dfe body=88 status=ok
// SIG undefined FUN_140305dfe(void)

undefined8 * FUN_140305dfe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140306928(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140305e56 FUN_140305e56 body=1125 status=ok
// SIG undefined FUN_140305e56(void)

longlong FUN_140305e56(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong local_88;
  uint *local_80;
  longlong local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  lVar3 = DAT_14cb8ca10;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = *(longlong *)(param_1 + 0x1ea0);
  lVar6 = lVar9;
  if (((DAT_14cb8ca10 != 0) && (*(longlong *)(param_1 + 0x4210) != 0)) &&
     (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xb0))();
    if (cVar4 == '\x02') {
      local_78 = *(longlong *)(*(longlong *)(param_1 + 0x4210) + 0x668);
      FUN_1446dcdd4(local_70);
      lVar6 = FUN_144815d88(lVar3,local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar6 != 0) goto LAB_140306083;
    }
    if ((*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xb0))(), cVar4 == '\x04')) {
      local_78 = *(longlong *)(*(longlong *)(param_1 + 0x4210) + 0x650);
      FUN_1446dcdd4(local_70);
      lVar6 = FUN_144815d88(lVar3,local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar6 != 0) goto LAB_140306083;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x4210) + 0x6b4) <
        *(int *)(*(longlong *)(param_1 + 0x4210) + 0x688)) {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xd0))();
      uVar5 = *(uint *)(plVar7 + 5);
      uVar19 = (ulonglong)uVar5;
      local_80 = (uint *)(plVar7 + 2);
      if (uVar5 == 0) {
        uVar20 = 1;
        uVar15 = 0;
        iVar21 = 0;
        uVar10 = 0;
      }
      else {
        puVar8 = (uint *)plVar7[4];
        if ((uint *)plVar7[4] == (uint *)0x0) {
          puVar8 = local_80;
        }
        uVar10 = *puVar8;
        if (uVar10 == 0) {
          iVar21 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar21 = uVar5 - 1;
          }
          uVar15 = 0;
          uVar20 = (ulonglong)(uint)(iVar21 >> 5);
          if (iVar21 >> 5 < 1) {
            uVar20 = uVar15;
          }
          iVar21 = 0;
          do {
            if (uVar20 == uVar15) goto LAB_140306024;
            iVar21 = iVar21 + 0x20;
            uVar10 = puVar8[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar15 = 0;
          iVar21 = 0;
        }
        uVar20 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar20 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        uVar10 = (iVar21 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar10) {
          uVar10 = uVar5;
        }
      }
      if (uVar10 != uVar5) {
        uVar13 = 0xffffffff;
        local_90 = uVar19;
        local_88 = lVar9;
        do {
          lVar6 = *(longlong *)(param_1 + 0x4210);
          if (*(int *)(lVar6 + 0x688) != *(int *)(lVar6 + 0x6b4)) {
            lVar17 = *(longlong *)(*plVar7 + (longlong)(int)uVar10 * 0x10);
            uVar10 = (uint)((ulonglong)lVar17 >> 0x10);
            uVar18 = (uint)lVar17 & 0xffff;
            lVar16 = lVar6 + 0x6b8;
            if (*(longlong *)(lVar6 + 0x6c0) != 0) {
              lVar16 = *(longlong *)(lVar6 + 0x6c0);
            }
            iVar14 = *(int *)(lVar16 + (ulonglong)
                                       (*(int *)(lVar6 + 0x6c8) - 1U &
                                       (int)((ulonglong)lVar17 >> 0x20) +
                                       ((uint)lVar17 << 0x10 | uVar18) +
                                       (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar18 >> 4)) * 4);
            uVar19 = local_90;
            if (iVar14 != -1) {
              do {
                plVar1 = (longlong *)(*(longlong *)(lVar6 + 0x680) + (longlong)iVar14 * 0x28);
                if (*plVar1 == lVar17) {
                  if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                    local_78 = plVar1[1];
                    FUN_1446dcdd4(local_70,&local_78);
                    lVar6 = FUN_144815d88(lVar3,local_70);
                    if (local_58 != 0) {
                      FUN_1400020a8();
                    }
                    if (lVar6 != 0) goto LAB_140306083;
                    uVar5 = *(uint *)(plVar7 + 5);
                    uVar19 = local_90;
                    lVar9 = local_88;
                  }
                  break;
                }
                iVar14 = (int)plVar1[4];
              } while (iVar14 != -1);
            }
          }
          uVar13 = uVar13 & ~(uint)uVar20;
          puVar8 = (uint *)plVar7[4];
          if ((uint *)plVar7[4] == (uint *)0x0) {
            puVar8 = local_80;
          }
          iVar14 = (int)uVar15;
          lVar6 = (longlong)iVar14;
          uVar10 = puVar8[lVar6] & uVar13;
          if (uVar10 == 0) {
            iVar11 = uVar5 + 0x1e;
            if (-1 < (int)(uVar5 - 1)) {
              iVar11 = uVar5 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar21 = iVar21 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar14) {
              iVar12 = iVar14;
            }
            if (iVar14 < iVar11) {
              lVar17 = 0;
              do {
                uVar10 = puVar8[lVar6 + lVar17 + 1];
                if (uVar10 != 0) {
                  uVar15 = (ulonglong)(iVar14 + (int)lVar17 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_140306246;
                }
                iVar21 = iVar21 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar12 - lVar6 != lVar17);
              uVar13 = 0xffffffff;
              iVar14 = iVar12;
            }
            uVar15 = (ulonglong)(iVar14 + 1);
            uVar19 = local_90;
            uVar10 = uVar5;
          }
          else {
LAB_140306246:
            uVar20 = (ulonglong)(-uVar10 & uVar10);
            uVar2 = uVar20 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            uVar10 = (iVar21 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if ((int)uVar5 <= (int)uVar10) {
              uVar10 = uVar5;
            }
          }
        } while (uVar10 != (uint)uVar19);
      }
    }
LAB_140306024:
    lVar6 = lVar9;
    if ((*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xb0))(), cVar4 == '\x03')) {
      local_78 = *(longlong *)(*(longlong *)(param_1 + 0x4210) + 0x638);
      FUN_1446dcdd4(local_70);
      lVar9 = FUN_144815d88(lVar3,local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar9 != 0) {
        lVar6 = lVar9;
      }
    }
  }
LAB_140306083:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1403062bc FUN_1403062bc body=1643 status=ok
// SIG undefined FUN_1403062bc(void)

void FUN_1403062bc(longlong *param_1,longlong *param_2)

{
  longlong **pplVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_498 [32];
  undefined8 *local_478;
  undefined4 *local_470;
  undefined1 local_468;
  int local_454;
  longlong *local_450;
  undefined8 *local_448;
  undefined8 *local_440;
  longlong *local_438;
  longlong *local_430;
  double *local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  undefined4 local_3f0 [4];
  double local_3e0;
  double local_3d8;
  double local_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  longlong **local_3b0;
  undefined4 local_3a8 [37];
  undefined4 local_314;
  undefined4 local_2e8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if ((1 < (int)param_2[1]) &&
     (lVar5 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))(), lVar5 != 0)) {
    local_3c8 = 0;
    uStack_3c0 = 0;
    FUN_1489a0214(param_1);
    local_3f0[0] = 0;
    lVar5 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
    if ((longlong)(int)param_2[1] != 0) {
      fVar23 = *(float *)(lVar5 + 0x20);
      lVar5 = *param_2;
      lVar18 = (longlong)(int)param_2[1] << 3;
      do {
        plVar6 = (longlong *)FUN_14479d2ce(lVar5);
        local_438 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          memset(&local_3b8,0,0x100);
          local_2e8 = 0xffffffff;
          local_314 = 0xffffffff;
          local_3b8 = (longlong **)CONCAT44(0x3f800000,(undefined4)local_3b8);
          local_408 = local_3e0;
          local_400 = local_3d8;
          local_470 = local_3f0;
          local_478 = &DAT_14c8463d0;
          local_468 = 0;
          local_420 = local_3e0 + 0.0;
          local_418 = local_3d8 + 0.0;
          local_410 = local_3d0 + (double)fVar23;
          local_3f8 = local_3d0 - (double)fVar23;
          cVar4 = (**(code **)(*plVar6 + 0x988))(plVar6,&local_3b8,&local_420,&local_408);
          if (cVar4 != '\0') {
            FUN_1404df044(&local_3c8);
          }
        }
        lVar5 = lVar5 + 8;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
    }
    local_3b8 = &local_438;
    local_438 = (longlong *)0x0;
    FUN_141086cf2(param_2);
    local_430 = &local_3c8;
    local_428 = &local_3e0;
    iVar13 = (int)param_2[1];
    local_438 = param_1;
    if (1 < (longlong)iVar13) {
      pplVar1 = (longlong **)*param_2;
      memset(local_3a8,0,0x2f0);
      local_3b0 = pplVar1 + (longlong)iVar13 + -1;
      local_3b8 = pplVar1;
      fVar23 = logf((float)iVar13);
      local_3a8[0] = (undefined4)(longlong)(fVar23 + fVar23);
      local_450 = &local_3b8;
      do {
        puVar8 = (undefined8 *)*local_450;
        puVar14 = (undefined8 *)local_450[1];
        local_454 = (int)local_450[2];
        iVar13 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar8) >> 3);
        uVar10 = iVar13 + 1;
        puVar19 = puVar8;
        puVar9 = puVar14;
        if (local_454 != 0) {
LAB_1403065e7:
          local_440 = puVar9;
          local_448 = puVar19;
          if (8 < (int)uVar10) {
            uVar2 = puVar8[uVar10 >> 1];
            puVar8[uVar10 >> 1] = *puVar8;
            *puVar8 = uVar2;
            puVar21 = puVar14 + 1;
            puVar7 = puVar8;
            do {
              puVar9 = puVar7 + 1;
              puVar3 = puVar7 + 1;
              do {
                puVar7 = puVar3;
                puVar19 = puVar9;
                if (puVar14 < puVar7) break;
                cVar4 = FUN_140306aa4(&local_438,puVar8,puVar7);
                puVar9 = puVar19 + 1;
                puVar3 = puVar7 + 1;
              } while (cVar4 == '\0');
              puVar3 = puVar21 + -2;
              do {
                puVar15 = puVar21;
                puVar9 = puVar3;
                puVar21 = puVar15 + -1;
                if (puVar21 <= puVar8) break;
                cVar4 = FUN_140306aa4(&local_438,puVar21,puVar8);
                puVar3 = puVar9 + -1;
              } while (cVar4 == '\0');
              if (puVar21 < puVar7) goto LAB_14030667b;
              uVar2 = *puVar7;
              *puVar7 = *puVar21;
              *puVar21 = uVar2;
            } while( true );
          }
          for (; puVar19 = puVar8, puVar9 = puVar8, puVar8 < puVar14; puVar14 = puVar14 + -1) {
            while (puVar21 = puVar19, puVar9 = puVar9 + 1, puVar9 <= puVar14) {
              cVar4 = FUN_140306aa4(&local_438,puVar21,puVar9);
              puVar19 = puVar9;
              if (cVar4 == '\0') {
                puVar19 = puVar21;
              }
            }
            uVar2 = *puVar21;
            *puVar21 = *puVar14;
            *puVar14 = uVar2;
          }
          goto LAB_1403068ee;
        }
LAB_140306739:
        if (uVar10 != 0) {
          iVar13 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
          iVar20 = iVar13;
joined_r0x00014030675c:
          do {
            iVar17 = iVar13 * 2 + 1;
            if (iVar17 < (int)uVar10) {
              iVar16 = iVar13 * 2 + 2;
              if ((iVar16 < (int)uVar10) &&
                 (cVar4 = FUN_140306aa4(&local_438,puVar8 + iVar16,puVar8 + iVar17), cVar4 == '\0'))
              {
                iVar17 = iVar16;
              }
              puVar14 = puVar8 + iVar13;
              puVar9 = puVar8 + iVar17;
              cVar4 = FUN_140306aa4(&local_438,puVar14,puVar9);
              if (cVar4 != '\0') {
                uVar2 = *puVar14;
                *puVar14 = *puVar9;
                *puVar9 = uVar2;
                iVar13 = iVar17;
                goto joined_r0x00014030675c;
              }
            }
            bVar22 = iVar20 != 0;
            iVar13 = iVar20 + -1;
            iVar20 = iVar13;
          } while (bVar22);
          if (1 < (int)uVar10) {
            uVar11 = (ulonglong)uVar10;
            uVar2 = *puVar8;
            *puVar8 = puVar8[uVar11 - 1];
            puVar8[uVar11 - 1] = uVar2;
            if (uVar10 != 2) {
              do {
                uVar12 = uVar11 - 1;
                iVar13 = 0;
                iVar17 = 1;
                iVar20 = 0;
                do {
                  iVar13 = iVar13 + 2;
                  iVar16 = iVar17;
                  if (((longlong)iVar13 < (longlong)uVar12) &&
                     (cVar4 = FUN_140306aa4(&local_438,puVar8 + iVar13,puVar8 + iVar17),
                     cVar4 == '\0')) {
                    iVar16 = iVar13;
                  }
                  puVar14 = puVar8 + iVar20;
                  puVar9 = puVar8 + iVar16;
                  cVar4 = FUN_140306aa4(&local_438,puVar14,puVar9);
                  if (cVar4 == '\0') break;
                  uVar2 = *puVar14;
                  *puVar14 = *puVar9;
                  *puVar9 = uVar2;
                  iVar13 = iVar16 * 2;
                  iVar17 = iVar16 * 2 + 1;
                  iVar20 = iVar16;
                } while ((longlong)iVar17 < (longlong)uVar12);
                uVar2 = *puVar8;
                *puVar8 = puVar8[uVar11 - 2];
                puVar8[uVar11 - 2] = uVar2;
                uVar11 = uVar12;
              } while (2 < uVar12);
            }
          }
        }
LAB_1403068ee:
        local_450 = local_450 + -3;
      } while (&local_3b8 <= local_450);
    }
    if (local_3c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14030667b:
  uVar2 = *puVar8;
  *puVar8 = *puVar21;
  *puVar21 = uVar2;
  local_454 = local_454 + -1;
  puVar15 = puVar15 + -2;
  if ((longlong)puVar9 - (longlong)local_448 < (longlong)local_440 - (longlong)puVar19) {
    if (puVar7 < puVar14) {
      *local_450 = (longlong)puVar7;
      local_450[1] = (longlong)puVar14;
      *(int *)(local_450 + 2) = local_454;
      local_450 = local_450 + 3;
    }
    puVar19 = puVar8;
    if (puVar21 <= puVar8 + 1) goto LAB_1403068ee;
  }
  else {
    if (puVar8 + 1 < puVar21) {
      *local_450 = (longlong)puVar8;
      local_450[1] = (longlong)puVar15;
      *(int *)(local_450 + 2) = local_454;
      local_450 = local_450 + 3;
    }
    puVar9 = puVar14;
    puVar8 = puVar7;
    puVar15 = puVar14;
    if (puVar14 <= puVar7) goto LAB_1403068ee;
  }
  iVar13 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar19) >> 3);
  uVar10 = iVar13 + 1;
  puVar14 = puVar15;
  local_448 = puVar19;
  local_440 = puVar9;
  if (local_454 == 0) goto LAB_140306739;
  goto LAB_1403065e7;
}



// FUNCTION 140306928 FUN_140306928 body=310 status=ok
// SIG undefined FUN_140306928(void)

void FUN_140306928(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140306995;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140306995:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140306a5e FUN_140306a5e body=70 status=ok
// SIG undefined FUN_140306a5e(void)

bool FUN_140306a5e(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 140306aa4 FUN_140306aa4 body=1444 status=ok
// SIG undefined FUN_140306aa4(void)

bool FUN_140306aa4(undefined8 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined8 local_210;
  wchar_t *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  code **local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined1 local_1d0 [4];
  undefined1 local_1cc;
  undefined1 local_1c8 [4];
  undefined1 local_1c4;
  double local_190;
  code *local_100 [7];
  double local_c8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar4 = *param_1;
  if (param_2[1] == 0) {
LAB_140306eb9:
    uVar11 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar12 + 2) != param_2[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
      goto LAB_140306eb9;
      uVar11 = *puVar12;
    }
  }
  bVar6 = FUN_141320d76(uVar11);
  if (param_3[1] == 0) {
LAB_140306ec0:
    uVar11 = 0;
  }
  else {
    uVar1 = *param_3;
    uVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar12 + 2) != param_3[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
      goto LAB_140306ec0;
      uVar11 = *puVar12;
    }
  }
  bVar7 = FUN_141320d76(uVar11);
  bVar17 = bVar6 < bVar7;
  bVar18 = bVar6 == bVar7;
  if (bVar18) {
    uVar1 = param_2[1];
    if (uVar1 == 0) {
LAB_140306ec7:
      lVar10 = 0;
    }
    else {
      uVar2 = *param_2;
      lVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           ((*(uint *)(plVar15 + 2) != uVar1 || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
        goto LAB_140306ec7;
        lVar10 = *plVar15;
      }
    }
    lVar5 = *(longlong *)param_1[1];
    iVar3 = (int)((longlong *)param_1[1])[1];
    lVar14 = (longlong)iVar3;
    if (lVar14 == 0) {
      bVar18 = false;
    }
    else {
      lVar16 = 0;
      do {
        bVar18 = *(longlong *)(lVar5 + lVar16) == lVar10;
        if (bVar18) break;
        bVar17 = lVar14 * 8 + -8 != lVar16;
        lVar16 = lVar16 + 8;
      } while (bVar17);
    }
    if (param_3[1] == 0) {
LAB_140306ecf:
      lVar10 = 0;
    }
    else {
      uVar2 = *param_3;
      lVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           ((*(uint *)(plVar15 + 2) != param_3[1] || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
        goto LAB_140306ecf;
        lVar10 = *plVar15;
      }
    }
    if (iVar3 != 0) {
      lVar16 = 0;
      do {
        if (*(longlong *)(lVar5 + lVar16) == lVar10) {
          if (!bVar18) goto LAB_140306eb5;
          goto LAB_140306cac;
        }
        lVar16 = lVar16 + 8;
      } while (lVar14 * 8 != lVar16);
    }
    bVar17 = true;
    if (bVar18) goto LAB_140306e8b;
LAB_140306cac:
    if (uVar1 == 0) {
LAB_140306ef9:
      lVar10 = 0;
    }
    else {
      uVar2 = *param_2;
      lVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           ((*(uint *)(plVar15 + 2) != uVar1 || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
        goto LAB_140306ef9;
        lVar10 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar10 + 0xa8);
    if (plVar15 == (longlong *)0x0) {
LAB_140306d35:
      plVar15 = (longlong *)0x0;
    }
    else {
      if (DAT_14cb46ec8 == 0) {
        local_1f0 = local_100;
        local_100[0] = FUN_141030f22;
        local_1e0 = FUN_14081d0ea;
        local_1e8 = FUN_142b4754c;
        local_1f8 = &LAB_1483e40eb;
        local_200 = &LAB_146486986;
        local_208 = L"Engine";
        local_210 = 0;
        local_218 = 0x10000005;
        local_220 = (undefined1 *)CONCAT44(local_220._4_4_,8);
        local_228 = 0x420;
        FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
      }
      if ((*(int *)(plVar15[2] + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) !=
          DAT_14cb46ec8 + 0x30)) goto LAB_140306d35;
    }
    if (param_3[1] == 0) {
LAB_140306f00:
      lVar10 = 0;
    }
    else {
      uVar1 = *param_3;
      lVar10 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           ((*(uint *)(plVar13 + 2) != param_3[1] || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_140306f00;
        lVar10 = *plVar13;
      }
    }
    plVar13 = *(longlong **)(lVar10 + 0xa8);
    if (plVar13 != (longlong *)0x0) {
      if (DAT_14cb46ec8 == 0) {
        local_1f0 = local_100;
        local_100[0] = FUN_141030f22;
        local_1e0 = FUN_14081d0ea;
        local_1e8 = FUN_142b4754c;
        local_1f8 = &LAB_1483e40eb;
        local_200 = &LAB_146486986;
        local_208 = L"Engine";
        local_210 = 0;
        local_218 = 0x10000005;
        local_220 = (undefined1 *)CONCAT44(local_220._4_4_,8);
        local_228 = 0x420;
        FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
      }
      if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) ==
          DAT_14cb46ec8 + 0x30)) {
        if (plVar15 != (longlong *)0x0) {
          cVar8 = (**(code **)(*plVar15 + 0x638))(plVar15);
          cVar9 = (**(code **)(*plVar13 + 0x638))(plVar13);
          if (cVar8 != cVar9) {
            bVar6 = (**(code **)(*plVar15 + 0x638))(plVar15);
            bVar7 = (**(code **)(*plVar13 + 0x638))(plVar13);
            bVar17 = bVar6 < bVar7;
            goto LAB_140306e8b;
          }
          if ((plVar15[0x75] != 0) && (plVar13[0x75] != 0)) {
            local_220 = local_1c8;
            local_1c4 = 0;
            local_228 = 1;
            FUN_140b9461a(uVar4,local_100,plVar15[0x75],param_1[2]);
            local_220 = local_1d0;
            local_1cc = 0;
            local_228 = 1;
            FUN_140b9461a(uVar4,local_1c8,plVar13[0x75],param_1[2]);
            bVar18 = local_c8 == local_190;
            bVar17 = local_c8 < local_190;
            goto LAB_140306e88;
          }
        }
LAB_140306eb5:
        bVar17 = false;
        goto LAB_140306e8b;
      }
    }
    bVar17 = plVar15 != (longlong *)0x0;
  }
  else {
LAB_140306e88:
    bVar17 = !bVar17 && !bVar18;
  }
LAB_140306e8b:
  if ((local_38 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17;
}



// FUNCTION 14030704a FUN_14030704a body=734 status=ok
// SIG undefined FUN_14030704a(void)

void FUN_14030704a(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  char cVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  longlong lVar10;
  longlong *unaff_R14;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 *local_68;
  undefined4 local_60;
  ulonglong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar8 = DAT_14ca84e23 * '\x02' + '\x01';
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x69);
  FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar8) & 0xffffffff);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    unaff_R14 = (longlong *)0x0;
    if ((longlong)*(int *)(param_1 + 0x1b8) != 0) {
      plVar12 = *(longlong **)(param_1 + 0x1b0);
      unaff_R14 = plVar12 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
      do {
        lVar10 = (longlong)DAT_14c760da4;
        if (lVar10 != 0) {
          lVar7 = *plVar12;
          lVar9 = 0;
          do {
            FUN_143160b92(*(longlong *)(lVar7 + 2000 + lVar9) + 0x40);
            lVar9 = lVar9 + 8;
          } while (lVar10 * 8 != lVar9);
        }
        plVar12 = plVar12 + 2;
      } while (plVar12 != unaff_R14);
    }
  }
  else {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar5 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar5 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a34ff60;
    puVar5[2] = param_1;
    *(char *)(puVar5 + 3) = cVar8;
  }
  FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  FUN_14494c7ac(param_2,&local_68,1);
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_68)();
    }
  }
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x1b0);
    lVar7 = 0;
    do {
      LOCK();
      piVar1 = (int *)(*(longlong *)(*(longlong *)(lVar10 + lVar7) + 0x538) + 0x58);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_68,9);
  cVar8 = DAT_14ca84e23 * '\x02' + '\x01';
  uVar11 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar8);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_70 = param_1;
  FUN_14002049c(param_2,uVar11 & 0xffffffff);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    local_58[0] = 0;
    local_58[1] = 0;
    do {
      bVar4 = (byte)uVar11;
      uVar11 = (ulonglong)((-bVar4 & bVar4) == 2);
      local_58[uVar11] = param_2[uVar11 + 10];
      bVar4 = bVar4 - 1 & bVar4;
      uVar11 = (ulonglong)bVar4;
    } while (bVar4 != 0);
    FUN_143178b6e(&local_70,local_58);
  }
  else {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar5 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar5 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a34ff68;
    puVar5[2] = param_1;
    *(char *)(puVar5 + 3) = cVar8;
  }
  FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)&local_68 >> 8),uVar2) & 0xffffffff);
  FUN_14494c7ac(param_2,&local_68,1);
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
  if ((local_58[2] ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14030732a FUN_14030732a body=33 status=ok
// SIG undefined FUN_14030732a(void)

void FUN_14030732a(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_14030734c(param_1 + 200);
  return;
}



// FUNCTION 14030734c FUN_14030734c body=108 status=ok
// SIG undefined FUN_14030734c(void)

void FUN_14030734c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14015cd88(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_14015d178(param_1 + 0x20,0);
  }
  FUN_1403073b8(param_1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_144893a1c(param_1 + 0x50,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1403073b8 FUN_1403073b8 body=73 status=ok
// SIG undefined FUN_1403073b8(void)

void FUN_1403073b8(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_14015cbf8(param_1 + 0x30,0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 140307402 FUN_140307402 body=758 status=ok
// SIG undefined FUN_140307402(void)

undefined1 *
FUN_140307402(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  char local_68 [8];
  uint local_60;
  int iStack_5c;
  longlong *local_58;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1403076fe(&local_70,param_4);
  if ((local_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_70);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    local_68[0] = '\0';
    local_40 = 0;
    FUN_1456bb102(local_68,local_70);
    lVar5 = DAT_14c9a3da0;
    if (local_68[0] == '\x01') {
      bVar10 = CONCAT44(iStack_5c,local_60) == 0;
    }
    else {
      bVar10 = true;
      if (local_68[0] == '\x02') {
        if ((((iStack_5c != 0) && (-1 < (int)local_60)) && ((int)local_60 < DAT_14c9647dc)) &&
           ((lVar8 = (ulonglong)((local_60 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8), lVar8 != 0 &&
            (*(int *)(lVar8 + 0x10) == iStack_5c)))) {
          bVar10 = (*(uint *)(lVar8 + 8) & 0x10200000) != 0;
        }
      }
      else if (((local_68[0] == '\x03') && (CONCAT44(iStack_5c,local_60) != 0)) &&
              (local_58 != (longlong *)0x0)) {
        bVar10 = (int)local_58[1] < 1;
      }
    }
    if ((longlong)local_40 != 0) {
      lVar8 = (longlong)local_40 + -1;
      lVar9 = lVar8 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9));
      if (*(longlong *)(lVar5 + lVar9) != 0) {
        FUN_1400020a8();
      }
      lVar5 = DAT_14c9a3da0;
      iVar7 = (int)lVar8;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
      }
      *(undefined4 *)(lVar5 + lVar9) = 0xffffffff;
      iVar4 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar4 = DAT_14c9a3dd0;
      }
      *(int *)(lVar5 + 4 + lVar9) = iVar4;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar6 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar6 = DAT_14c9a3dc0;
      }
      iVar4 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      bVar2 = (byte)lVar8 & 0x1f;
      DAT_14c9a3dd0 = iVar7;
      *(uint *)(puVar6 + (longlong)(iVar4 >> 5) * 4) =
           *(uint *)(puVar6 + (longlong)(iVar4 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_40 = 0;
    }
    if ((local_68[0] == '\x03') && (local_58 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (!bVar10) {
      iVar7 = *(int *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = iVar7 + 1U;
      if (*(uint *)(param_2 + 0x3c) < iVar7 + 1U) {
        FUN_1400832a0(param_2,iVar7);
      }
      puVar3 = *(undefined1 **)(param_2 + 0x30);
      if (*(undefined1 **)(param_2 + 0x30) == (undefined1 *)0x0) {
        puVar3 = param_2;
      }
      lVar5 = (longlong)iVar7 * 0x30;
      puVar3[lVar5] = 0;
      *(undefined4 *)(puVar3 + lVar5 + 0x28) = 0;
      FUN_1456bb102(puVar3 + lVar5,local_70);
    }
  }
  else if ((*(char *)(param_1 + 8) == '\x01') && (local_70 != 0)) {
    lVar5 = *(longlong *)(local_70 + 0x1710);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar5 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1456bb102(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403076fe FUN_1403076fe body=1047 status=ok
// SIG undefined FUN_1403076fe(void)

longlong * FUN_1403076fe(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_14020958c(param_2);
  if (lVar2 != 0) {
    *param_1 = lVar2;
joined_r0x000140307734:
    if (DAT_14c950c29 == 1) goto LAB_140307829;
    goto LAB_14030773a;
  }
  lVar2 = FUN_1447262c2(param_2);
  if (lVar2 == 0) {
LAB_14030779e:
    lVar2 = FUN_1447262c2(param_2);
    if (lVar2 != 0) {
      if (DAT_14cad00c8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1479b7a0c;
        local_50 = (code *)&LAB_1463b464e;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000005;
        local_70 = 8;
        local_78 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      }
      if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) {
        lVar2 = *(longlong *)(lVar2 + 0xa8);
        if (lVar2 != 0) {
          lVar3 = FUN_1402095ca();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            *param_1 = lVar2;
            goto joined_r0x000140307734;
          }
        }
        goto LAB_14030791c;
      }
    }
    lVar2 = FUN_1400e8a68(param_2);
    if ((lVar2 == 0) ||
       (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x10))(lVar2 + 0x3c20), lVar2 == 0)) {
      lVar2 = FUN_1447262c2(param_2);
      if (lVar2 != 0) {
        lVar3 = FUN_1402095ca();
        if (DAT_14c951858 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1468c5283;
          local_50 = FUN_142809da0;
          local_58 = L"Engine";
          local_60 = 0x400000000;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar4 = *(longlong *)(lVar2 + 0x20);
        if (lVar4 != 0) {
          do {
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
               (lVar2 = lVar4,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
              lVar2 = 0;
            }
          } while ((lVar2 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
          goto LAB_14030780b;
        }
      }
LAB_14030791c:
      *param_1 = 0;
      goto LAB_14030773a;
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
LAB_14030780b:
    *param_1 = lVar2;
    bVar1 = DAT_14c950c29;
    if (lVar2 == 0) goto LAB_14030773a;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = (code *)&LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = (code *)&LAB_1457a9eb2;
      local_58 = L"Game";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_14030779e;
    lVar2 = *(longlong *)(lVar2 + 0x3998);
    if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0x65) & 2) != 0)) ||
       ((*(byte *)(lVar2 + 0x348) & 2) != 0)) goto LAB_14030791c;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar2);
    }
    bVar1 = DAT_14c950c29;
    *param_1 = lVar2;
    bVar1 = bVar1 & 1;
  }
  if (bVar1 != 0) {
LAB_140307829:
    FUN_1456cec3c(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_14030773a:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140307b1c FUN_140307b1c body=204 status=ok
// SIG undefined FUN_140307b1c(void)

longlong FUN_140307b1c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  do {
    lVar4 = param_1;
    lVar3 = *(longlong *)(lVar4 + 0xd8);
    if (lVar3 == 0) {
      uVar2 = FUN_141030812();
      lVar3 = FUN_14477b664(uVar2);
      *(longlong *)(lVar4 + 0xd8) = lVar3;
    }
    plVar1 = (longlong *)(lVar4 + 0xd0);
    param_1 = *(longlong *)(lVar4 + 0xe0);
    if (param_1 == 0) {
      if ((lVar3 == 0) || (*plVar1 == 0)) {
        return lVar4;
      }
      param_1 = FUN_14494cb38(lVar3,plVar1);
      *(longlong *)(lVar4 + 0xe0) = param_1;
      if (param_1 == 0) {
        return lVar4;
      }
      lVar3 = *(longlong *)(lVar4 + 0xd8);
    }
    if (lVar3 == 0) {
      uVar2 = FUN_141030812();
      lVar3 = FUN_14477b664(uVar2);
      *(longlong *)(lVar4 + 0xd8) = lVar3;
      param_1 = *(longlong *)(lVar4 + 0xe0);
      if (((*(longlong *)(lVar4 + 0xe0) == 0) && (param_1 = 0, lVar3 != 0)) && (*plVar1 != 0)) {
        param_1 = FUN_14494cb38(lVar3,plVar1);
        *(longlong *)(lVar4 + 0xe0) = param_1;
      }
    }
  } while( true );
}



// FUNCTION 140307bf4 FUN_140307bf4 body=101 status=ok
// SIG undefined FUN_140307bf4(void)

undefined8 * FUN_140307bf4(undefined8 *param_1)

{
  FUN_140307c5a();
  *param_1 = &PTR_FUN_14aad2190;
  param_1[0x19] = &PTR_FUN_14aad2550;
  param_1[0x1a] = &PTR_FUN_14aad2590;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if (param_1[7] != 0) {
    param_1[7] = 0;
    FUN_14128f1bc();
  }
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
  return param_1;
}



// FUNCTION 140307c5a FUN_140307c5a body=421 status=ok
// SIG undefined FUN_140307c5a(void)

undefined8 * FUN_140307c5a(undefined8 *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  FUN_140307e00();
  *param_1 = &PTR_FUN_14aad1940;
  param_1[0x19] = &PTR_FUN_14aad1ce0;
  param_1[0x1a] = &PTR_FUN_14aad1d20;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xf5) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar3 + 0xe) = 0;
  *puVar3 = &PTR_FUN_14a38cf40;
  puVar3[2] = 0;
  param_1[0x25] = puVar3;
  param_1[0x26] = 0;
  *(undefined1 *)((longlong)param_1 + 0xfd) = 0;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
  *(undefined2 *)((longlong)param_1 + 0xf1) = 3;
  *(undefined1 *)((longlong)param_1 + 0xf3) = 4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return param_1;
    }
    bVar2 = DAT_14c8442b8 & 1;
  }
  puVar3 = param_1;
  if (bVar2 == 0) {
    for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[4]) {
      if ((*(uint *)(puVar3 + 1) & 0x30) != 0) {
        return param_1;
      }
    }
    lVar1 = param_1[0x25];
    *(undefined1 *)(lVar1 + 0x18) = 1;
    FUN_140308182(lVar1,0);
  }
  return param_1;
}



// FUNCTION 140307e00 FUN_140307e00 body=526 status=ok
// SIG undefined FUN_140307e00(void)

undefined8 * FUN_140307e00(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined4 local_78;
  longlong local_70;
  ulonglong uStack_68;
  undefined1 local_60 [16];
  longlong local_50;
  undefined4 local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14aabecf0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  local_50 = 0;
  local_48 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0x80;
  uStack_40 = 0xffffffff;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_78 = 0xffffffff;
  if (param_1 + 10 != local_88) {
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  FUN_140308010(param_1 + 0xd,&local_70);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_14472eb64(&local_70,0);
  }
  uStack_40 = 0xffffffff;
  local_3c = 0;
  local_48 = 0;
  if (0x80 < local_44) {
    local_44 = 0x80;
    FUN_1446efbd8(local_60,0);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14030806e(param_1 + 10,L"r.Streaming.NoRefLODBiasQualityLevel",L"ViewDistanceQuality");
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140308010 FUN_140308010 body=93 status=ok
// SIG undefined FUN_140308010(void)

longlong FUN_140308010(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1403080ec(param_1);
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



// FUNCTION 14030806e FUN_14030806e body=125 status=ok
// SIG undefined FUN_14030806e(void)

void FUN_14030806e(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403080ec FUN_1403080ec body=150 status=ok
// SIG undefined FUN_1403080ec(void)

longlong * FUN_1403080ec(longlong *param_1,longlong *param_2)

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



// FUNCTION 140308182 FUN_140308182 body=2024 status=ok
// SIG undefined FUN_140308182(void)

void FUN_140308182(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  code *pcVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_138 [32];
  code **local_118;
  code *local_108;
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = (longlong *)0x0;
  local_e8 = &PTR_LAB_14a392b90;
  uStack_e0 = param_1;
  local_108 = (code *)&LAB_14322f6da;
  if ((param_2 == 0) || (DAT_14ca9a43c != 2)) {
    local_c8 = (code *)&LAB_14322f6da;
    local_b8 = (longlong *)0x0;
    local_a8 = &PTR_LAB_14a392b90;
    uStack_a0 = param_1;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
LAB_140308390:
    local_108 = (code *)0x0;
    pcVar18 = local_c8;
  }
  else {
    pcVar1 = (char *)(param_2 + 8);
    LOCK();
    bVar20 = *(char *)(param_2 + 8) == '\0';
    if (bVar20) {
      *(char *)(param_2 + 8) = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      FUN_1447d2058(pcVar1);
    }
    if (*(longlong *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        param_2) {
      local_88[0] = local_108;
      local_78 = local_f8;
      local_f8 = (longlong *)0x0;
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = (undefined4)uStack_e0;
      uStack_5c = uStack_e0._4_4_;
      local_58 = local_d8;
      uStack_54 = uStack_d4;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      local_48 = 1;
      FUN_1401a96bc(param_2,local_88);
LAB_140308328:
      (*(code *)(&PTR_LAB_14a3931f0)[local_48])();
      bVar20 = false;
    }
    else {
      if (*(longlong *)(param_2 + 0x10) != 0) {
        local_88[0] = local_108;
        local_78 = local_f8;
        local_f8 = (longlong *)0x0;
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = (undefined4)uStack_e0;
        uStack_5c = uStack_e0._4_4_;
        local_58 = local_d8;
        uStack_54 = uStack_d4;
        uStack_50 = uStack_d0;
        uStack_4c = uStack_cc;
        if (local_108 != (code *)0x0) {
          local_108 = (code *)0x0;
        }
        local_48 = 1;
        FUN_1401a98c8(param_2,local_88,L"InitCommand",&DAT_14ca9a024);
        goto LAB_140308328;
      }
      bVar20 = true;
    }
    LOCK();
    cVar4 = *pcVar1;
    if (cVar4 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar4 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
    if (!bVar20) goto LAB_140308535;
    local_c8 = local_108;
    local_b8 = local_f8;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    if (local_108 != (code *)0x0) goto LAB_140308390;
    pcVar18 = (code *)0x0;
  }
  local_f8 = (longlong *)0x0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar6 + 0xc60);
  local_e8 = local_a8;
  uStack_e0 = uStack_a0;
  if (DAT_14c86a9fc == 0) {
    if (iVar17 != 2) {
      if (iVar17 != 1) goto LAB_1403083bc;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      pcVar18 = local_c8;
      if (DVar9 == DVar10) goto LAB_1403083c1;
      goto LAB_14030840f;
    }
LAB_1403083c1:
    plVar14 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar14 = &local_a8;
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    (*pcVar18)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_1403083bc:
    if (iVar17 == 0x10) goto LAB_1403083c1;
LAB_14030840f:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar17 = *(int *)(lVar6 + 0xc60), iVar17 != 2)) {
        if (iVar17 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_140308924;
        }
        goto LAB_140308440;
      }
LAB_140308924:
      pcVar18 = local_c8;
      plVar14 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar14 = &local_a8;
      }
      uVar11 = (**(code **)(*plVar14 + 8))();
      (*pcVar18)(uVar11,&DAT_14ca85100);
    }
    else {
LAB_140308440:
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar3;
        if (puVar13 != (uint *)0x0) goto LAB_140308618;
        while( true ) {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_14322aa43);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar3 = puVar12;
          FUN_140217a48(puVar3);
          puVar13 = (uint *)*puVar3;
LAB_140308618:
          puVar16 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar16 + 0x1e);
          uVar8 = puVar13[0x12];
          if (puVar15 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar5 = *puVar13;
            *puVar13 = *puVar13 + uVar8 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar8) != 0xffffffff) break;
            puVar13 = (uint *)*puVar3;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            puVar16 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar16 + 0x1e);
            uVar8 = 0;
            if (puVar15 <= puVar13 + 0x4000) {
              uVar8 = 1;
              goto LAB_140308698;
            }
          }
        }
        uVar8 = uVar8 + 1;
LAB_140308698:
        *(uint **)(puVar13 + 0x10) = puVar15;
        puVar13[0x12] = uVar8;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a392b80;
        puVar16[0x16] = local_c8;
        puVar16[0x18] = local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(puVar16 + 0x1c) = local_98;
        *(undefined4 *)((longlong)puVar16 + 0xe4) = uStack_94;
        *(undefined4 *)(puVar16 + 0x1d) = uStack_90;
        *(undefined4 *)((longlong)puVar16 + 0xec) = uStack_8c;
        *(undefined4 *)(puVar16 + 0x1a) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar16 + 0xd4) = local_a8._4_4_;
        *(undefined4 *)(puVar16 + 0x1b) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar16 + 0xdc) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar8 = DAT_14c7585c8 >> 10 & 3;
          iVar17 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar17 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar7 = 1;
          if ((char)uVar19 != '\x06') {
            uVar7 = uVar19;
          }
          uVar19 = uVar7;
          uVar11 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar17;
        if (puVar16 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar2 = (int *)(puVar16 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_78 = (longlong)&PTR_LAB_14a392b60;
        local_78[2] = (longlong)local_c8;
        local_78[4] = (longlong)local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(local_78 + 8) = local_98;
        *(undefined4 *)((longlong)local_78 + 0x44) = uStack_94;
        *(undefined4 *)(local_78 + 9) = uStack_90;
        *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_8c;
        *(undefined4 *)(local_78 + 6) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_78 + 0x34) = local_a8._4_4_;
        *(undefined4 *)(local_78 + 7) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_a0._4_4_;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        if (local_78 != (longlong *)&DAT_fffffffffffffff0) {
          local_88[0] = FUN_14322f488;
        }
        local_118 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"InitCommand",&DAT_14ca9a024);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = (longlong *)&local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
  }
  if (local_c8 != (code *)0x0) {
    plVar14 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar14 = local_b8;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_140308535:
  if (local_108 != (code *)0x0) {
    plVar14 = &local_e8;
    if (local_f8 != (longlong *)0x0) {
      plVar14 = local_f8;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030896c FUN_14030896c body=968 status=ok
// SIG undefined FUN_14030896c(void)

void FUN_14030896c(longlong param_1,undefined8 param_2,char param_3,float param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  void *_Dst;
  longlong *plVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  longlong local_c0;
  longlong *local_b8;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_91;
  undefined8 local_90;
  undefined1 local_88 [48];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_1 + 0x24) != param_3) || (1e-08 < ABS(*(float *)(param_1 + 0x28) - param_4)))
  {
    *(char *)(param_1 + 0x24) = param_3;
    *(float *)(param_1 + 0x28) = param_4;
    uVar10 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    uVar10 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(lVar3 + 0x30);
    plVar11 = *(longlong **)(lVar3 + 0x38);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    local_b8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      FUN_1400606f6(local_88,lVar3,param_2);
      if (0 < (longlong)*(int *)(param_1 + 0x70)) {
        lVar16 = param_1 + 0x30;
        lVar12 = (longlong)*(int *)(param_1 + 0x70);
        local_ac = uVar10;
        do {
          local_a8 = lVar12 + -1;
          lVar9 = *(longlong *)(param_1 + 0x68);
          lVar14 = lVar9;
          if (lVar9 == 0) {
            lVar14 = lVar16;
          }
          local_c0 = local_a8 * 0x38;
          lVar14 = lVar14 + local_c0;
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_88;
          }
          if ((longlong)local_50 != 0) {
            local_a0 = (longlong)local_50 * 0x30;
            do {
              cVar7 = FUN_140308e2a(puVar13,lVar14);
              if (cVar7 != '\0') {
                if ((char)local_ac != '\0') {
                  lVar9 = *(longlong *)(param_1 + 0x68);
                  if (*(longlong *)(param_1 + 0x68) == 0) {
                    lVar9 = lVar16;
                  }
                  local_e8 = local_c0 + lVar9 + 0x30;
                  local_d0 = &local_91;
                  local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,*(undefined4 *)(param_1 + 0x28));
                  local_e0 = CONCAT31(local_e0._1_3_,*(undefined1 *)(param_1 + 0x24));
                  (**(code **)(*local_b8 + 0x68))(local_b8,&local_90,lVar3,lVar14);
                  lVar9 = *(longlong *)(param_1 + 0x68);
                  if (*(longlong *)(param_1 + 0x68) == 0) {
                    lVar9 = lVar16;
                  }
                  *(undefined8 *)(lVar9 + 0x30 + local_c0) = local_90;
                }
                FUN_140308d36(local_88,lVar14);
                goto LAB_140308aa5;
              }
              puVar13 = puVar13 + 0x30;
              local_a0 = local_a0 + -0x30;
            } while (local_a0 != 0);
            lVar9 = *(longlong *)(param_1 + 0x68);
          }
          if (lVar9 == 0) {
            lVar9 = lVar16;
          }
          (**(code **)(*local_b8 + 0x70))(local_b8,lVar3,lVar14,lVar9 + local_c0 + 0x30);
          lVar9 = *(longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == 0) {
            lVar9 = lVar16;
          }
          uVar6 = (uint)local_a8;
          _Dst = (void *)((longlong)(int)(uint)local_a8 * 0x38 + lVar9);
          local_c0 = lVar16;
          FUN_14053dda4(_Dst,1);
          iVar8 = *(int *)(param_1 + 0x70);
          iVar15 = ~uVar6 + iVar8;
          if (iVar15 != 0) {
            if (0 < iVar15) {
              iVar15 = 1;
            }
            memmove(_Dst,(void *)(lVar9 + (longlong)(iVar8 - iVar15) * 0x38),(longlong)iVar15 * 0x38
                   );
            iVar8 = *(int *)(param_1 + 0x70);
          }
          *(int *)(param_1 + 0x70) = iVar8 + -1;
          lVar16 = local_c0;
LAB_140308aa5:
          bVar5 = 1 < lVar12;
          lVar12 = local_a8;
        } while (bVar5);
      }
      puVar13 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar13 = local_88;
      }
      iVar8 = 0;
      if ((longlong)local_50 != 0) {
        lVar16 = (longlong)local_50 * 0x30;
        do {
          local_e0 = *(undefined4 *)(param_1 + 0x28);
          local_e8 = CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 0x24));
          local_d8 = &local_91;
          (**(code **)(*local_b8 + 0x60))(local_b8,&local_90,lVar3,puVar13);
          FUN_140c4083a(param_1,puVar13,&local_90);
          puVar13 = puVar13 + 0x30;
          lVar16 = lVar16 + -0x30;
          iVar8 = local_50;
        } while (lVar16 != 0);
      }
      puVar13 = local_88;
      if (local_58 != (undefined1 *)0x0) {
        puVar13 = local_58;
      }
      FUN_1446fdf58(puVar13,iVar8);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140308af9;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1470dc3f6(param_1 + 0x30);
LAB_140308af9:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar11 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140308d36 FUN_140308d36 body=243 status=ok
// SIG undefined FUN_140308d36(void)

void FUN_140308d36(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar3 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar2 != 0) {
    lVar7 = 0;
    do {
      cVar1 = FUN_140308e2a(lVar3 + lVar7,param_2);
      if (cVar1 != '\0') {
        uVar5 = (int)(lVar7 >> 4) * -0x55555555;
        if (uVar5 == 0xffffffff) {
          return;
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar3 = param_1;
        }
        _Dst = (void *)((longlong)(int)uVar5 * 0x30 + lVar3);
        FUN_1446fdf58(_Dst,1);
        iVar2 = *(int *)(param_1 + 0x38);
        iVar6 = ~uVar5 + iVar2;
        if (iVar6 != 0) {
          iVar4 = 1;
          if (iVar6 < 1) {
            iVar4 = iVar6;
          }
          memmove(_Dst,(void *)(lVar3 + (longlong)(iVar2 - iVar4) * 0x30),(longlong)iVar4 * 0x30);
          iVar2 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = iVar2 + -1;
        FUN_140308ed4(param_1);
        return;
      }
      lVar7 = lVar7 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar7);
  }
  return;
}



// FUNCTION 140308e2a FUN_140308e2a body=170 status=ok
// SIG undefined FUN_140308e2a(void)

bool FUN_140308e2a(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    lVar5 = *(longlong *)(param_1 + 8);
    goto LAB_140308e3b;
  }
  if (cVar1 == '\x03') {
    if (*param_2 != '\x03') {
      return false;
    }
    uVar3 = FUN_140308f7c(param_1 + 8,param_2 + 8);
    return (bool)uVar3;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\0') {
      return false;
    }
    return *param_2 == '\0';
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = *(uint *)(param_1 + 8);
    lVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140308e3b;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == *(int *)(param_1 + 0xc) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))))
    {
      lVar5 = *plVar6;
      goto LAB_140308e3b;
    }
  }
  lVar5 = 0;
LAB_140308e3b:
  lVar4 = FUN_1447262c2(param_2);
  return lVar5 == lVar4;
}



// FUNCTION 140308ed4 FUN_140308ed4 body=168 status=ok
// SIG undefined FUN_140308ed4(void)

void FUN_140308ed4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x3c);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if ((ulonglong)((longlong)iVar3 * 0x30) < 0x4000) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 * 0x30,0);
      uVar4 = uVar4 / 0x30;
      iVar2 = *(int *)(param_1 + 0x3c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x3c) = (int)uVar4;
  FUN_1400833b4(param_1,*(undefined4 *)(param_1 + 0x38),uVar4,0x30);
  return;
}



// FUNCTION 140308f7c FUN_140308f7c body=168 status=ok
// SIG undefined FUN_140308f7c(void)

bool FUN_140308f7c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar7 = (longlong *)param_1[1];
  if (plVar7 == (longlong *)0x0) {
LAB_140308fe5:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_140308fe5;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  lVar6 = *param_1;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_140308fca;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *param_2;
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
LAB_140308fca:
  if (plVar7 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return lVar6 == lVar8;
}



// FUNCTION 140309024 FUN_140309024 body=62 status=ok
// SIG undefined FUN_140309024(void)

void FUN_140309024(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140c41132(param_1 + 0x78);
  FUN_14030896c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140309062 FUN_140309062 body=645 status=ok
// SIG undefined FUN_140309062(void)

undefined8 *
FUN_140309062(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             char *param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  longlong local_70;
  longlong local_68;
  char local_58;
  ulonglong local_50;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6);
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_5 == '\0') {
    local_88 = param_8;
    local_90 = CONCAT44(local_90._4_4_,param_7);
    local_98 = CONCAT71(local_98._1_7_,param_6);
    FUN_140c40aa0(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  if ((*(int *)(param_5 + 4) == -1) ||
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1), cVar1 == '\0')) {
    *param_2 = *(undefined8 *)param_5;
    goto LAB_140309190;
  }
  FUN_1400e1dbc(param_1,&local_70);
  if ((local_58 != '\0') && ((**(code **)(*param_1 + 0x98))(param_1,&local_70), local_70 != 0)) {
    puVar4 = *(undefined **)(local_70 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar5 = puVar4 != (undefined *)0x0;
      if (puVar4 != &DAT_14c952a08 && bVar5) {
        do {
          puVar4 = *(undefined **)(puVar4 + 0x30);
          bVar5 = puVar4 != (undefined *)0x0;
          if (puVar4 == &DAT_14c952a08) break;
        } while (puVar4 != (undefined *)0x0);
      }
      if (bVar5) goto LAB_140309157;
    }
    else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952a10) != 0) {
LAB_140309157:
      if (local_68 != 0) {
        lVar2 = FUN_140168d6e();
        if (*(longlong *)(local_70 + 0x70) == lVar2) {
          local_90 = param_8;
          local_98 = CONCAT44(local_98._4_4_,param_7);
          FUN_140cda1b6(param_2,local_68,param_5,uVar3 & 0xffffffff);
          goto LAB_140309190;
        }
        lVar2 = FUN_140168da8();
        if (*(longlong *)(local_70 + 0x70) == lVar2) {
          local_90 = param_8;
          local_98 = CONCAT44(local_98._4_4_,param_7);
          FUN_1470b0d80(local_68,param_2,param_5,uVar3 & 0xffffffff);
          goto LAB_140309190;
        }
      }
    }
  }
  *(undefined1 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0xffffffff;
LAB_140309190:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403092ee FUN_1403092ee body=455 status=ok
// SIG undefined FUN_1403092ee(void)

undefined8 FUN_1403092ee(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48;
  longlong local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    FUN_1400e1dbc(param_1,&local_48);
    if (local_30 == '\x01') {
      (**(code **)(*param_1 + 0x98))(param_1,&local_48);
      if (local_48 != 0) {
        puVar4 = *(undefined **)(local_48 + 8);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c952a58) {
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
        if (DAT_14c952a10 == 0) {
          bVar5 = puVar4 != (undefined *)0x0;
          if (puVar4 != &DAT_14c952a08 && bVar5) {
            do {
              puVar4 = *(undefined **)(puVar4 + 0x30);
              bVar5 = puVar4 != (undefined *)0x0;
              if (puVar4 == &DAT_14c952a08) break;
            } while (puVar4 != (undefined *)0x0);
          }
          if (bVar5) goto LAB_14030939a;
        }
        else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952a10) != 0) {
LAB_14030939a:
          if (local_40 != 0) {
            lVar2 = FUN_140168d6e();
            if (*(longlong *)(local_48 + 0x70) == lVar2) {
              uVar3 = FUN_1409d14a4(local_40,param_4);
              goto LAB_1403093be;
            }
            lVar2 = FUN_140168da8();
            if (*(longlong *)(local_48 + 0x70) == lVar2) {
              uVar3 = thunk_FUN_1456fac0c(local_40,param_4);
              goto LAB_1403093be;
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_1403093be:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403094b6 FUN_1403094b6 body=1319 status=ok
// SIG undefined FUN_1403094b6(void)

char * FUN_1403094b6(longlong param_1,char *param_2,longlong param_3,undefined8 param_4,
                    undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *_Dst;
  longlong lVar10;
  code ****_Src;
  code ****ppppcVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code ***local_a0;
  code *local_98;
  code *local_90;
  code ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 != 0) {
    plVar5 = (longlong *)FUN_1447262c2(param_4);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_a0 = (code ***)local_88;
        local_88[0] = (code ***)FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_1427b09ee;
        local_a8 = &LAB_1470c76a3;
        local_b0 = FUN_1462ab034;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10004001;
        local_d0 = CONCAT44(local_d0._4_4_,8);
        local_d8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14c9a4e08);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14c9a4e08 == 0) {
          local_a0 = (code ***)local_88;
          local_88[0] = (code ***)FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_1427b09ee;
          local_a8 = &LAB_1470c76a3;
          local_b0 = FUN_1462ab034;
          local_b8 = L"Engine";
          local_c0 = 0;
          local_c8 = 0x10004001;
          local_d0 = CONCAT44(local_d0._4_4_,8);
          local_d8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
        }
        plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14c9a4e08);
        if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
          if (*(code *****)(param_1 + 8) == (code ****)0x0) {
            puVar12 = &DAT_14c9485f0;
            if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
              puVar12 = *(undefined4 **)(param_3 + 8);
            }
            if (DAT_14c947fe0 == 0) {
              lVar7 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar7);
              DAT_14c947fe0 = lVar7;
            }
            FUN_140045924(DAT_14c947fe0,local_88,puVar12,1);
            uVar15 = 0xffffffff;
            ppppcVar11 = (code ****)local_88[0];
            if ((code ****)local_88[0] == (code ****)0x0) goto LAB_140309774;
          }
          else {
            uVar15 = *(uint *)(param_1 + 0x10);
            ppppcVar11 = *(code *****)(param_1 + 8);
          }
          lVar7 = (**(code **)(*plVar6 + 0x28))(plVar6);
          FUN_140c41d6c(param_1,local_88);
          if ((local_68 & 0xfe) == 2) {
            lVar17 = lVar7 + 0x10;
            iVar2 = *(int *)(lVar7 + 0x918);
            lVar16 = (longlong)iVar2;
            lVar9 = *(longlong *)(lVar7 + 0x910);
            if (((int)uVar15 < 0) || (iVar2 <= (int)uVar15)) {
LAB_1403096ac:
              lVar10 = lVar9;
              if (lVar9 == 0) {
                lVar10 = lVar17;
              }
              if (iVar2 != 0) {
                lVar14 = 0;
                do {
                  if (*(code *****)(lVar10 + 0x28 + lVar14) == ppppcVar11) {
                    uVar15 = (int)(lVar14 >> 3) * 0x38e38e39;
                    if ((-1 < (int)uVar15) && ((int)uVar15 < iVar2)) {
                      uVar13 = (ulonglong)(uVar15 & 0x7fffffff);
                      goto LAB_1403095ea;
                    }
                    break;
                  }
                  lVar14 = lVar14 + 0x48;
                } while (lVar16 * 0x48 != lVar14);
              }
LAB_1403096de:
              *(uint *)(lVar7 + 0x918) = iVar2 + 1U;
              if (*(uint *)(lVar7 + 0x91c) < iVar2 + 1U) {
                FUN_14576eef0(lVar17,iVar2);
                lVar9 = *(longlong *)(lVar7 + 0x910);
              }
              bVar4 = local_68;
              if (lVar9 == 0) {
                lVar9 = lVar17;
              }
              puVar1 = (undefined8 *)(lVar9 + lVar16 * 0x48);
              *(ushort *)(puVar1 + 3) = local_70;
              if (local_70 < 0x19) {
                _Src = local_88;
                _Dst = puVar1;
              }
              else {
                _Dst = (undefined8 *)FUN_14001cc68(local_70,0);
                *puVar1 = _Dst;
                _Src = (code ****)local_88[0];
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar4 * 0x120));
              if (pcVar3 == (code *)0x0) {
                memcpy(_Dst,_Src,
                       (longlong)
                       *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar4 * 0x120)));
              }
              else {
                (*pcVar3)();
              }
              *(byte *)(puVar1 + 4) = local_68;
              puVar1[5] = ppppcVar11;
              *(undefined4 *)(puVar1 + 6) = 0;
              puVar1[7] = 0;
              puVar1[8] = 0;
              if (*(longlong *)(lVar7 + 0x910) != 0) {
                lVar17 = *(longlong *)(lVar7 + 0x910);
              }
              lVar10 = lVar17 + lVar16 * 0x48;
            }
            else {
              lVar10 = lVar9;
              if (lVar9 == 0) {
                lVar10 = lVar17;
              }
              uVar13 = (ulonglong)uVar15;
              if (*(code *****)(lVar10 + 0x28 + uVar13 * 0x48) != ppppcVar11) goto LAB_1403096ac;
LAB_1403095ea:
              lVar10 = lVar10 + uVar13 * 0x48;
              if (lVar10 == 0) goto LAB_1403096de;
            }
            uVar8 = FUN_140c41dec(lVar10);
            local_d0 = param_8;
            local_d8 = param_7;
            FUN_140cda23a(uVar8,param_2,param_5,param_6);
            if (*param_2 == '\x01') {
              FUN_140c41f80(lVar10,lVar7);
            }
          }
          else {
            *param_2 = '\0';
            param_2[4] = -1;
            param_2[5] = -1;
            param_2[6] = -1;
            param_2[7] = -1;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppcVar11 = local_88;
            if (0x18 < local_70) {
              ppppcVar11 = (code ****)local_88[0];
            }
            (*pcVar3)(ppppcVar11);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(local_88[0]);
          }
          goto LAB_140309673;
        }
      }
    }
  }
LAB_140309774:
  *param_2 = '\0';
  param_2[4] = -1;
  param_2[5] = -1;
  param_2[6] = -1;
  param_2[7] = -1;
LAB_140309673:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403099de FUN_1403099de body=766 status=ok
// SIG undefined FUN_1403099de(void)

undefined8 FUN_1403099de(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (plVar3 = (longlong *)FUN_1447262c2(param_3), plVar3 != (longlong *)0x0)) {
    if (DAT_14c9a4e08 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_1470c76a3;
      local_60 = FUN_1462ab034;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,DAT_14c9a4e08);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_1470c76a3;
        local_60 = FUN_1462ab034;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14c9a4e08);
      uVar6 = 0;
      if ((plVar3 == plVar4) || (plVar4 == (longlong *)0x0)) goto LAB_140309ae8;
      if (*(code **)(param_1 + 8) == (code *)0x0) {
        puVar9 = &DAT_14c9485f0;
        if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
          puVar9 = *(undefined4 **)(param_2 + 8);
        }
        FUN_1447325ac(puVar9,&local_38,1);
        uVar10 = 0xffffffff;
        pcVar11 = local_38;
        if (local_38 == (code *)0x0) goto LAB_140309b36;
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x10);
        pcVar11 = *(code **)(param_1 + 8);
      }
      lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
      iVar1 = *(int *)(lVar5 + 0x918);
      lVar7 = *(longlong *)(lVar5 + 0x910);
      if ((-1 < (int)uVar10) && ((int)uVar10 < iVar1)) {
        lVar8 = lVar7;
        if (lVar7 == 0) {
          lVar8 = lVar5 + 0x10;
        }
        if (*(code **)(lVar8 + 0x28 + (ulonglong)uVar10 * 0x48) == pcVar11) {
          lVar8 = lVar8 + (ulonglong)uVar10 * 0x48;
LAB_140309ac1:
          if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x38) != 0)) &&
             (cVar2 = FUN_1409d14fc(*(longlong *)(lVar8 + 0x38),param_4), cVar2 != '\0')) {
            FUN_140c41f80(lVar8,lVar5);
            uVar6 = 1;
            goto LAB_140309ae8;
          }
          goto LAB_140309b36;
        }
      }
      lVar8 = lVar5 + 0x10;
      if (lVar7 != 0) {
        lVar8 = lVar7;
      }
      if (iVar1 != 0) {
        lVar7 = 0;
        do {
          if (*(code **)(lVar8 + 0x28 + lVar7) == pcVar11) {
            uVar10 = (int)(lVar7 >> 3) * 0x38e38e39;
            uVar6 = 0;
            if (((int)uVar10 < 0) || (uVar6 = 0, iVar1 <= (int)uVar10)) goto LAB_140309ae8;
            lVar8 = lVar8 + (ulonglong)(uVar10 & 0x7fffffff) * 0x48;
            goto LAB_140309ac1;
          }
          lVar7 = lVar7 + 0x48;
        } while ((longlong)iVar1 * 0x48 != lVar7);
      }
    }
  }
LAB_140309b36:
  uVar6 = 0;
LAB_140309ae8:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140309cde FUN_140309cde body=341 status=ok
// SIG undefined FUN_140309cde(void)

void FUN_140309cde(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  cVar3 = FUN_140337e44(lVar2 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar2 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar2 + 0x51) != cVar3;
  uVar5 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  lVar4 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar2 = *(longlong *)(param_1 + 0x48);
  FUN_140309ec4(lVar2 + 0x80,&local_68,lVar4);
  *(undefined8 *)(param_1 + 0x70) = local_58;
  *(undefined4 *)(param_1 + 0x60) = local_68;
  *(undefined4 *)(param_1 + 100) = uStack_64;
  *(undefined4 *)(param_1 + 0x68) = uStack_60;
  *(undefined4 *)(param_1 + 0x6c) = uStack_5c;
  uVar5 = FUN_140309e34(lVar2 + 0x118,lVar4,lVar2 + 0x130);
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  fVar6 = (float)FUN_140309e34(lVar2 + 0x138,lVar4,lVar2 + 0x150);
  *(float *)(param_1 + 0x7c) = fVar6;
  fVar1 = *(float *)(param_1 + 0x78);
  if (*(int *)(lVar2 + 0x178) == 2) {
    fVar7 = (fVar6 + fVar1) * 0.5;
  }
  else {
    fVar7 = fVar1;
    if (*(int *)(lVar2 + 0x178) == 3) {
      fVar7 = (float)FUN_140309e34(lVar2 + 0x158,lVar4,lVar2 + 0x170);
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      if (fVar7 <= fVar1) {
        fVar7 = fVar1;
      }
    }
  }
  *(float *)(param_1 + 0x80) = fVar7;
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140309e34 FUN_140309e34 body=143 status=ok
// SIG undefined FUN_140309e34(void)

void FUN_140309e34(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0xac) != -1) {
    uVar3 = *param_3;
    goto LAB_140309e6a;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar1 = FUN_14030a730(param_2,*(undefined8 *)(param_1 + 8),&local_1c);
LAB_140309e9f:
    puVar2 = &local_1c;
    if (cVar1 == '\0') goto LAB_140309e63;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      cVar1 = FUN_14030adb4(param_2,*(undefined8 *)(param_1 + 8),&local_1c);
      goto LAB_140309e9f;
    }
LAB_140309e63:
    puVar2 = param_3;
  }
  uVar3 = *puVar2;
LAB_140309e6a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar3);
  }
  return;
}



// FUNCTION 140309ec4 FUN_140309ec4 body=389 status=ok
// SIG undefined FUN_140309ec4(void)

longlong FUN_140309ec4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14030a04a(param_1,param_3);
  if (lVar1 == 0) {
    FUN_14030acf6(param_1,param_2,param_3,param_1 + 0x18);
  }
  else {
    FUN_14030a482(param_1 + 0x30,param_2,lVar1,0);
  }
  if ((*(char *)(param_1 + 0x90) == '\x01') && (lVar1 = FUN_14030ac4c(param_3), lVar1 != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      uVar2 = DAT_14c8464f0;
      if (*(longlong *)(lVar1 + 0x1c8) != 0) {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x1c8) + 0x270);
      }
      *(undefined8 *)(param_2 + 0x10) = uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14030a04a FUN_14030a04a body=389 status=ok
// SIG undefined FUN_14030a04a(void)

void FUN_14030a04a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x10) == '\x02') &&
     (*(int *)(param_2 + 0xb8) != *(int *)(param_2 + 0xe4))) {
    lVar3 = *(longlong *)(param_1 + 8);
    uVar8 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    lVar5 = param_2 + 0xe8;
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      lVar5 = *(longlong *)(param_2 + 0xf0);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_2 + 0xf8) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                             (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_2 + 0xb0);
      do {
        lVar1 = lVar5 + (longlong)iVar7 * 0x38;
        if (*(longlong *)(lVar5 + (longlong)iVar7 * 0x38) == lVar3) {
          if ((lVar1 == 0) || (lVar1 == -8)) break;
          bVar2 = *(byte *)(lVar1 + 0x28);
          if (bVar2 != 7) {
            uVar8 = (uint)bVar2 * 0x120;
            if (*(code **)(&DAT_14c9a8560 + uVar8) != (code *)0x0) {
              cVar4 = (**(code **)(&DAT_14c9a8560 + uVar8))
                                (CONCAT71((int7)((ulonglong)lVar5 >> 8),7));
              if (cVar4 != '\0') goto LAB_14030a1a7;
            }
            if (((DAT_14c9a8d48 == (code *)0x0) || (cVar4 = (*DAT_14c9a8d48)(bVar2), cVar4 == '\0'))
               && (((((&DAT_14c9a8514)[uVar8] & 0x20) == 0 || ((DAT_14c9a8cf4 & 0x20) != 0)) ||
                   ((*(code **)(&DAT_14c9a8588 + uVar8) != (code *)0x0 &&
                    (cVar4 = (**(code **)(&DAT_14c9a8588 + uVar8))(7), cVar4 == '\0')))))) break;
          }
LAB_14030a1a7:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
        iVar7 = *(int *)(lVar1 + 0x30);
      } while (iVar7 != -1);
    }
  }
  local_40 = 0;
  FUN_14030a1e6(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14030a1e6 FUN_14030a1e6 body=141 status=ok
// SIG undefined FUN_14030a1e6(void)

undefined8 FUN_14030a1e6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0xac) != -1) {
    uVar2 = *param_3;
    goto LAB_14030a22e;
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    cVar1 = FUN_14030a274(param_2,*(undefined8 *)(param_1 + 8),&local_20);
LAB_14030a227:
    puVar3 = &local_20;
    if (cVar1 == '\0') goto LAB_14030a26a;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      cVar1 = FUN_14030af0e(param_2,*(undefined8 *)(param_1 + 8),&local_20);
      goto LAB_14030a227;
    }
LAB_14030a26a:
    puVar3 = param_3;
  }
  uVar2 = *puVar3;
LAB_14030a22e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030a274 FUN_14030a274 body=186 status=ok
// SIG undefined FUN_14030a274(void)

bool FUN_14030a274(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x38) == param_2)
        goto LAB_14030a306;
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_14030a306:
  lVar5 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    uVar4 = FUN_14030a32e(lVar5);
    *param_3 = uVar4;
  }
  return lVar5 != 0;
}



// FUNCTION 14030a32e FUN_14030a32e body=338 status=ok
// SIG undefined FUN_14030a32e(void)

undefined8 FUN_14030a32e(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  uint local_40;
  int iStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[8] == '\a') {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      uVar3 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14030a43e;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         ((*(uint *)(puVar5 + 2) == param_1[1] && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        uVar3 = *puVar5;
        goto LAB_14030a43e;
      }
    }
    uVar3 = 0;
    goto LAB_14030a43e;
  }
  puVar4 = &local_40;
  FUN_1400b56fe(puVar4,param_1,7);
  if ((local_20 == 0) || (iStack_3c == 0)) {
LAB_14030a45f:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((-1 < (int)local_40) && ((int)local_40 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((local_40 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8));
      if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != iStack_3c)) ||
         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_14030a45f;
      uVar3 = *puVar5;
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_28) {
      puVar4 = (uint *)CONCAT44(iStack_3c,local_40);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(iStack_3c,local_40));
  }
LAB_14030a43e:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030a482 FUN_14030a482 body=365 status=ok
// SIG undefined FUN_14030a482(void)

double * FUN_14030a482(longlong param_1,double *param_2,undefined8 param_3,undefined4 param_4)

{
  double dVar1;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14030a5f0();
  if (1.0 < ABS(*(float *)(param_1 + 0x40))) {
    FUN_141036372(param_1 + 0x10,&local_50,param_3,param_4);
    dVar1 = (double)*(float *)(param_1 + 0x40);
    *param_2 = dVar1 * local_50 + *param_2;
    param_2[1] = local_48 * dVar1 + param_2[1];
    param_2[2] = local_40 * dVar1 + param_2[2];
  }
  if ((*(double *)(param_1 + 0x48) == 0.0) && (!NAN(*(double *)(param_1 + 0x48)))) {
    if ((*(double *)(param_1 + 0x50) == 0.0) && (!NAN(*(double *)(param_1 + 0x50)))) {
      if ((*(double *)(param_1 + 0x58) == 0.0) && (!NAN(*(double *)(param_1 + 0x58))))
      goto LAB_14030a50e;
    }
  }
  FUN_140d0fb16(param_1 + 0x10,&local_50,param_3,param_4);
  FUN_1401c9a0e(&local_50,&local_68,param_1 + 0x48);
  *param_2 = local_68 + *param_2;
  param_2[1] = local_60 + param_2[1];
  param_2[2] = local_58 + param_2[2];
LAB_14030a50e:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030a5f0 FUN_14030a5f0 body=316 status=ok
// SIG undefined FUN_14030a5f0(void)

undefined8 * FUN_14030a5f0(char *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [44];
  float local_5c;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  cVar1 = *param_1;
  uVar6 = (undefined4)DAT_14c8464f0;
  uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if (cVar1 == '\0') {
    lVar2 = param_3[0x39];
    if (lVar2 == 0) {
      puVar5 = &DAT_14c8464e0;
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
      puVar5 = (undefined8 *)(lVar2 + 0x260);
    }
    uVar3 = puVar5[1];
    *param_2 = *puVar5;
    param_2[1] = uVar3;
    param_2[2] = CONCAT44(uVar7,uVar6);
  }
  else {
    if (cVar1 == '\x01') {
      FUN_14030b2be(0,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
    if (cVar1 == '\x03') {
      (**(code **)(*param_3 + 0x588))(param_3,param_2,local_58);
    }
    else if (cVar1 == '\x02') {
      lVar2 = param_3[0x39];
      if (lVar2 == 0) {
        puVar5 = &DAT_14c8464e0;
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
        puVar5 = (undefined8 *)(lVar2 + 0x260);
      }
      uVar3 = *puVar5;
      uVar4 = puVar5[1];
      (**(code **)(*param_3 + 0x528))(param_3,local_58,&local_5c);
      *param_2 = uVar3;
      param_2[1] = uVar4;
      param_2[2] = (double)CONCAT44(uVar7,uVar6) - (double)local_5c;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030a730 FUN_14030a730 body=1307 status=ok
// SIG undefined FUN_14030a730(void)

/* WARNING: Removing unreachable block (ram,0x00014030aacb) */
/* WARNING: Removing unreachable block (ram,0x00014030aae9) */

bool FUN_14030a730(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined1 auStack_f8 [40];
  char local_d0 [8];
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined1 local_b0;
  int local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar9) +
                    (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar5 * 0x48);
        if (*plVar7 == param_2) goto LAB_14030a7ce;
        iVar5 = (int)plVar7[8];
      } while (iVar5 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_14030a7ce:
  plVar14 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  if (plVar14 == (longlong *)0x0) goto LAB_14030a895;
  cVar2 = (char)param_1[0x20];
  if (cVar2 == '\x01') {
    if (param_1[0x21] == 0) goto LAB_14030a804;
    local_d0[0] = '\x02';
    uVar6 = *(uint *)(param_1[0x21] + 0xc);
    local_c8 = (ulonglong)uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar5 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar5 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar5 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar13;
        iVar5 = 0;
      }
      UNLOCK();
      uVar6 = (uint)local_c8;
      if (bVar18) {
        iVar5 = iVar13;
      }
    }
    local_c8._0_4_ = uVar6;
    local_c8 = CONCAT44(iVar5,(uint)local_c8);
LAB_14030a92b:
    local_a8[0] = 0;
    if ((int)param_1[0x25] != 0) {
      uVar8 = FUN_1448174c4(local_a8);
      FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)(int)param_1[0x25] * 0x10 + -0x10);
    }
  }
  else {
    if (cVar2 == '\x02') {
      if (((((*(int *)((longlong)param_1 + 0x10c) == 0) ||
            (uVar6 = *(uint *)(param_1 + 0x21), (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6))
          || ((lVar17 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar17 == 0
              || (*(int *)(lVar17 + 0x10) != *(int *)((longlong)param_1 + 0x10c))))) ||
         ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)) goto LAB_14030a804;
      local_d0[0] = '\x02';
      local_c8 = param_1[0x21];
      goto LAB_14030a92b;
    }
    if (((cVar2 == '\x03') && (lVar17 = param_1[0x21], lVar17 != 0)) &&
       ((plVar7 = (longlong *)param_1[0x22], plVar7 != (longlong *)0x0 && (0 < (int)plVar7[1])))) {
      local_d0[0] = '\x03';
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      local_b8 = param_1[0x23];
      local_b0 = (undefined1)param_1[0x24];
      local_c8 = lVar17;
      local_c0 = plVar7;
      goto LAB_14030a92b;
    }
LAB_14030a804:
    uVar8 = FUN_14030ac4c(param_1);
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar8);
  }
  puVar12 = &local_a0;
  FUN_1447c3578(plVar14,puVar12,local_d0);
  if (local_80 == 3) {
    uVar6 = 3;
    uVar19 = local_a0;
  }
  else {
    puVar16 = &local_78;
    FUN_1400b56fe(puVar16,&local_a0,3);
    uVar19 = 0;
    if (local_58 != 0) {
      uVar19 = local_78;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar16 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar3)(puVar16);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar6 = (uint)local_80;
  }
  *param_3 = uVar19;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar12 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(puVar12);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar17 = DAT_14c9a3da0;
  if ((longlong)local_a8[0] != 0) {
    lVar15 = (longlong)local_a8[0] + -1;
    lVar11 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar17 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar17 = DAT_14c9a3da0;
    iVar5 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
    }
    *(undefined4 *)(lVar17 + lVar11) = 0xffffffff;
    iVar13 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar13 = DAT_14c9a3dd0;
    }
    *(int *)(lVar17 + 4 + lVar11) = iVar13;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar13 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar13 = iVar5;
    }
    bVar4 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar5;
    *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_a8[0] = 0;
  }
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
LAB_14030a895:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar14 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030ac4c FUN_14030ac4c body=170 status=ok
// SIG undefined FUN_14030ac4c(void)

undefined8 FUN_14030ac4c(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [40];
  uint uStack_40;
  int iStack_3c;
  ushort uStack_28;
  byte bStack_20;
  ulonglong uStack_18;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar2 = (uint)((ulonglong)DAT_14c9ab028 >> 0x10);
    uVar6 = (uint)DAT_14c9ab028 & 0xffff;
    lVar3 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)DAT_14c9ab028 >> 0x20) +
                             ((uint)DAT_14c9ab028 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar8 = (longlong)iVar7 * 0x38;
        lVar3 = *(longlong *)(param_1 + 0xb0) + lVar8;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar8) == DAT_14c9ab028) {
          if (lVar3 == 0) {
            return 0;
          }
          if (lVar3 + 8 == 0) {
            return 0;
          }
          uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
          if (*(char *)(lVar3 + 0x28) == '\x06') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_68);
          }
          puVar4 = &uStack_40;
          FUN_1400b56fe(puVar4,lVar3 + 8,CONCAT71((int7)((ulonglong)lVar8 >> 8),6));
          if ((bStack_20 != 0) && (iStack_3c != 0)) {
            uVar5 = 0;
            if (((int)uStack_40 < 0) || (DAT_14c9647dc <= (int)uStack_40)) goto LAB_14070d8d3;
            puVar9 = (undefined8 *)
                     ((ulonglong)((uStack_40 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_40 >> 0x10) * 8));
            if (((puVar9 != (undefined8 *)0x0) && (*(int *)(puVar9 + 2) == iStack_3c)) &&
               ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)) {
              uVar5 = *puVar9;
              goto LAB_14070d8d3;
            }
          }
          uVar5 = 0;
LAB_14070d8d3:
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_20 * 0x120));
          if (pcVar1 != (code *)0x0) {
            if (0x18 < uStack_28) {
              puVar4 = (uint *)CONCAT44(iStack_3c,uStack_40);
            }
            (*pcVar1)(puVar4);
          }
          if (0x18 < uStack_28) {
            FUN_1400020a8(CONCAT44(iStack_3c,uStack_40));
          }
          if ((uStack_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
            return uVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        iVar7 = *(int *)(lVar3 + 0x30);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14030acf6 FUN_14030acf6 body=186 status=ok
// SIG undefined FUN_14030acf6(void)

undefined4 *
FUN_14030acf6(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_3 + 0xac) != -1) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *param_2 = *param_4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    cVar4 = FUN_14030b33e(param_3,*(undefined8 *)(param_1 + 8),&local_30);
LAB_14030ad6c:
    if (cVar4 != '\0') {
      *(undefined8 *)(param_2 + 4) = local_20;
      goto LAB_14030ad34;
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar4 = FUN_14030b4dc(param_3,*(undefined8 *)(param_1 + 8),&local_30);
    goto LAB_14030ad6c;
  }
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 4);
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
LAB_14030ad34:
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030adb4 FUN_14030adb4 body=345 status=ok
// SIG undefined FUN_14030adb4(void)

bool FUN_14030adb4(longlong param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x38) == param_2)
        goto LAB_14030ae5b;
        iVar3 = *(int *)(lVar4 + 0x30);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_14030ae5b:
  puVar6 = (undefined4 *)(lVar4 + 8);
  if (lVar4 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  if (puVar6 != (undefined4 *)0x0) {
    if (*(char *)(puVar6 + 8) == '\x03') {
      uVar8 = *puVar6;
    }
    else {
      puVar5 = &local_58;
      FUN_1400b56fe(puVar5,puVar6,3);
      uVar8 = 0;
      if (local_38 != 0) {
        uVar8 = local_58;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar5);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
    *param_3 = uVar8;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar6 != (undefined4 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030af0e FUN_14030af0e body=942 status=ok
// SIG undefined FUN_14030af0e(void)

/* WARNING: Removing unreachable block (ram,0x00014030b235) */
/* WARNING: Removing unreachable block (ram,0x00014030b253) */

bool FUN_14030af0e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  char local_90 [8];
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  undefined1 local_70;
  undefined4 local_68 [2];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x48);
        if (*plVar6 == param_2) goto LAB_14030afa4;
        iVar5 = (int)plVar6[8];
      } while (iVar5 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14030afa4:
  plVar11 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  if (plVar11 == (longlong *)0x0) goto LAB_14030b06d;
  cVar2 = (char)param_1[0x20];
  if (cVar2 == '\x01') {
    if (param_1[0x21] == 0) goto LAB_14030afda;
    local_90[0] = '\x02';
    uVar3 = *(uint *)(param_1[0x21] + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar5 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar5 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar10;
        iVar5 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar13) {
        iVar5 = iVar10;
      }
    }
    local_88._0_4_ = uVar3;
    local_88 = CONCAT44(iVar5,(uint)local_88);
LAB_14030b0fb:
    local_68[0] = 0;
    if ((int)param_1[0x25] != 0) {
      uVar7 = FUN_1448174c4(local_68);
      FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)(int)param_1[0x25] * 0x10 + -0x10);
    }
  }
  else {
    if (cVar2 == '\x02') {
      if (((((*(int *)((longlong)param_1 + 0x10c) == 0) ||
            (uVar3 = *(uint *)(param_1 + 0x21), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
          || ((lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 == 0
              || (*(int *)(lVar12 + 0x10) != *(int *)((longlong)param_1 + 0x10c))))) ||
         ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) goto LAB_14030afda;
      local_90[0] = '\x02';
      local_88 = param_1[0x21];
      goto LAB_14030b0fb;
    }
    if (((cVar2 == '\x03') && (lVar12 = param_1[0x21], lVar12 != 0)) &&
       ((plVar6 = (longlong *)param_1[0x22], plVar6 != (longlong *)0x0 && (0 < (int)plVar6[1])))) {
      local_90[0] = '\x03';
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      local_78 = param_1[0x23];
      local_70 = (undefined1)param_1[0x24];
      local_88 = lVar12;
      local_80 = plVar6;
      goto LAB_14030b0fb;
    }
LAB_14030afda:
    uVar7 = FUN_14030ac4c(param_1);
    local_90[0] = '\0';
    local_68[0] = 0;
    FUN_1456bb102(local_90,uVar7);
  }
  FUN_1447c3578(plVar11,local_60,local_90);
  uVar7 = FUN_14030a32e(local_60);
  *param_3 = uVar7;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar9 = local_60;
    if (0x18 < local_48) {
      ppppuVar9 = (undefined8 ****)local_60[0];
    }
    (*pcVar4)(ppppuVar9);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  FUN_1448173f8(local_68);
  if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
LAB_14030b06d:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return plVar11 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030b2be FUN_14030b2be body=127 status=ok
// SIG undefined FUN_14030b2be(void)

undefined8 * FUN_14030b2be(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_144a545f2(param_3,*(undefined8 *)(param_1 + 4),param_4);
  if (plVar3 == (longlong *)0x0) {
    lVar1 = *(longlong *)(param_3 + 0x1c8);
    if (lVar1 == 0) {
      param_2[2] = DAT_14c8464f0;
      uVar2 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = uVar2;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x268);
      *param_2 = *(undefined8 *)(lVar1 + 0x260);
      param_2[1] = uVar2;
      param_2[2] = *(undefined8 *)(lVar1 + 0x270);
    }
  }
  else {
    (**(code **)(*plVar3 + 0x4b0))(plVar3,param_2,*(undefined8 *)(param_1 + 4));
  }
  return param_2;
}



// FUNCTION 14030b33e FUN_14030b33e body=412 status=ok
// SIG undefined FUN_14030b33e(void)

bool FUN_14030b33e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 **local_58;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar7 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar7 * 0x38) == param_2) break;
        iVar7 = *(int *)(lVar3 + 0x30);
        lVar3 = 0;
      } while (iVar7 != -1);
      goto LAB_14030b3e4;
    }
  }
  lVar3 = 0;
LAB_14030b3e4:
  puVar5 = (undefined8 *)(lVar3 + 8);
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    if (*(char *)(puVar5 + 4) == '\x04') {
      local_58 = (undefined8 **)puVar5[2];
      local_68 = (undefined8 ***)*puVar5;
      uStack_60 = (undefined8 ***)puVar5[1];
    }
    else {
      FUN_1400b56fe(local_48,puVar5,4);
      ppppuVar4 = (undefined8 ****)&DAT_14c9ab228;
      if (local_28 != 0) {
        ppppuVar4 = local_48;
      }
      local_58 = ppppuVar4[2];
      local_68 = *ppppuVar4;
      uStack_60 = ppppuVar4[1];
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar4 = local_48;
        if (0x18 < local_30) {
          ppppuVar4 = (undefined8 ****)local_48[0];
        }
        (*pcVar1)(ppppuVar4);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(local_48[0]);
      }
    }
    *(undefined8 ***)(param_3 + 4) = local_58;
    *param_3 = (undefined4)local_68;
    param_3[1] = local_68._4_4_;
    param_3[2] = (undefined4)uStack_60;
    param_3[3] = uStack_60._4_4_;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5 != (undefined8 *)0x0;
}



// FUNCTION 14030b4dc FUN_14030b4dc body=822 status=ok
// SIG undefined FUN_14030b4dc(void)

bool FUN_14030b4dc(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong ****pppplVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong **local_b8;
  char local_a8 [16];
  longlong *local_98;
  undefined4 local_80 [2];
  undefined8 ***local_78;
  longlong **pplStack_70;
  longlong **local_68;
  ushort local_60;
  byte local_58;
  longlong ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar4 * 0x48);
        if (*plVar6 == param_2) goto LAB_14030b56f;
        iVar4 = (int)plVar6[8];
      } while (iVar4 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14030b56f:
  plVar12 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  if (plVar12 == (longlong *)0x0) goto LAB_14030b68d;
  cVar2 = (char)param_1[0x20];
  if (cVar2 == '\x01') {
    if (param_1[0x21] != 0) goto LAB_14030b7a2;
LAB_14030b5cc:
    uVar7 = FUN_14030ac4c(param_1);
    local_a8[0] = '\0';
    local_80[0] = 0;
    FUN_1456bb102(local_a8,uVar7);
  }
  else {
    if (cVar2 == '\x02') {
      if (((((*(int *)((longlong)param_1 + 0x10c) != 0) &&
            (uVar5 = *(uint *)(param_1 + 0x21), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc))
          && ((lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar10 != 0
              && (*(int *)(lVar10 + 0x10) == *(int *)((longlong)param_1 + 0x10c))))) &&
         ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) goto LAB_14030b7a2;
      goto LAB_14030b5cc;
    }
    if (((cVar2 != '\x03') || (param_1[0x21] == 0)) ||
       ((param_1[0x22] == 0 || (*(int *)(param_1[0x22] + 8) < 1)))) goto LAB_14030b5cc;
LAB_14030b7a2:
    local_a8[0] = '\0';
    FUN_1447f8f6a(local_a8,param_1 + 0x20);
    FUN_1447f8ea6(local_80,param_1 + 0x25);
  }
  FUN_1447c3578(plVar12,&local_78,local_a8);
  if (local_58 == 4) {
    local_b8 = local_68;
    local_c8 = (undefined8 ****)local_78;
    uStack_c0 = (longlong ***)pplStack_70;
    uVar5 = 4;
  }
  else {
    FUN_1400b56fe(local_50,&local_78,4);
    pppplVar9 = (longlong ****)&DAT_14c9ab228;
    if (local_30 != 0) {
      pppplVar9 = local_50;
    }
    local_b8 = (longlong **)pppplVar9[2];
    local_c8 = (undefined8 ****)*pppplVar9;
    uStack_c0 = pppplVar9[1];
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppplVar9 = local_50;
      if (0x18 < local_38) {
        pppplVar9 = (longlong ****)local_50[0];
      }
      (*pcVar3)(pppplVar9);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
    uVar5 = (uint)local_58;
  }
  *(longlong ***)(param_3 + 4) = local_b8;
  *param_3 = (undefined4)local_c8;
  param_3[1] = local_c8._4_4_;
  param_3[2] = (undefined4)uStack_c0;
  param_3[3] = uStack_c0._4_4_;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar11 = &local_78;
    if (0x18 < local_60) {
      ppppuVar11 = (undefined8 ****)local_78;
    }
    (*pcVar3)(ppppuVar11);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78);
  }
  FUN_1448173f8(local_80);
  if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
LAB_14030b68d:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar12 != (longlong *)0x0;
}



// FUNCTION 14030b856 FUN_14030b856 body=886 status=ok
// SIG undefined FUN_14030b856(void)

void FUN_14030b856(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong *local_1b0;
  undefined1 *local_1a8;
  undefined8 *local_1a0;
  undefined2 *local_198;
  longlong local_188;
  ulonglong uStack_180;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  bVar16 = false;
  if (param_2 == (longlong *)0x0) {
    bVar17 = false;
  }
  else {
    bVar17 = false;
    bVar16 = false;
    if (1 < *(byte *)((longlong)param_2 + 0xc)) {
      lVar8 = (longlong)(int)param_2[1] * 0x10;
      cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar8);
      bVar17 = cVar2 == '\x01';
      bVar16 = (byte)(cVar2 - 3U) < 0xfe;
      if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + lVar8) != '\0') goto LAB_14030bac1;
    }
  }
  if ((bVar16 || bVar17) || (*(char *)(param_1 + 0x154) == '\x01')) {
    lVar8 = *param_2;
    lVar6 = (longlong)(int)param_2[1];
    if (*(char *)(*(longlong *)(lVar8 + 0x158) + lVar6) == '\x01') {
      local_f8 = 0;
      uStack_f0 = 0;
      lVar12 = *(longlong *)(lVar8 + 0xf8) + lVar6 * 0x18;
      lVar15 = *(longlong *)(lVar12 + 8);
      if (*(longlong *)(lVar12 + 8) == 0) {
        lVar15 = lVar12;
      }
      if ((longlong)*(int *)(lVar12 + 0x10) != 0) {
        lVar9 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar7 = 0;
        uVar14 = 0;
        do {
          lVar4 = *(longlong *)(lVar15 + lVar9);
          if ((lVar4 != 0) &&
             ((*(byte *)(lVar4 + 0x71 + (ulonglong)((*(uint *)(lVar4 + 8) & 3) == 0) * 8) & 5) != 0)
             ) {
            uVar13 = (ulonglong)((*(uint *)(lVar4 + 8) & 3) == 0);
            uVar14 = uVar14 | *(uint *)(lVar4 + 0x58 + uVar13 * 8);
            uVar7 = uVar7 | *(uint *)(lVar4 + 0x5c + uVar13 * 8);
            local_f8 = CONCAT44(uVar7,uVar14);
            uVar11 = uVar11 | *(uint *)(lVar4 + 0x60 + uVar13 * 8);
            uVar10 = uVar10 | *(uint *)(lVar4 + 100 + uVar13 * 8);
            uStack_f0 = CONCAT44(uVar10,uVar11);
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(lVar12 + 0x10) * 8 != lVar9);
      }
      lVar8 = *(longlong *)(lVar8 + 0x140);
      lVar6 = lVar6 * 0x30;
      local_118 = *(undefined8 *)(lVar8 + 0x10 + lVar6);
      local_128 = *(undefined8 *)(lVar8 + lVar6);
      uStack_120 = ((undefined8 *)(lVar8 + lVar6))[1];
      puVar1 = (undefined4 *)(lVar8 + 0x18 + lVar6);
      local_110 = *puVar1;
      uStack_10c = puVar1[1];
      uStack_108 = puVar1[2];
      uStack_104 = puVar1[3];
      local_100 = *(undefined8 *)(lVar8 + 0x28 + lVar6);
      FUN_14030bbce(&local_188,param_2,&local_f8,param_4);
      iVar3 = *(int *)(param_3 + 0x20);
      if ((longlong)iVar3 != 0) {
        lVar8 = *(longlong *)(param_3 + 0x18);
        uVar7 = 0xfffffffc;
        lVar6 = 0;
        do {
          if (uVar7 < 0xfffffffe) {
            local_98 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_7e = 0;
            local_80 = 0;
            local_b8 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_1b0 = &local_188;
            local_1b8 = &local_128;
            local_1a8 = local_78;
            local_1a0 = &local_a8;
            local_198 = &local_80;
            local_b0 = local_78;
            FUN_14480acae(*(undefined8 *)(lVar8 + lVar6),&local_e8,&local_b0,&local_c8);
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar3 * 0x10 != lVar6);
      }
    }
    else {
      local_188 = 0;
      uStack_180 = 0;
      FUN_146e05670(param_3 + 0x118,&local_188);
      if ((int)uStack_180 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_180 & 0xffffffff);
      }
      if (*(int *)((longlong)param_4 + 0xc) < (int)uStack_180) {
        FUN_146e0520a(param_4);
      }
      lVar8 = local_188;
      if ((int)uStack_180 != 0) {
        lVar6 = (longlong)(int)uStack_180;
        lVar12 = 0;
        do {
          plVar5 = *(longlong **)(lVar8 + 8 + lVar12);
          if (plVar5 != param_2) {
            iVar3 = (int)param_4[1];
            lVar15 = (longlong)iVar3;
            *(uint *)(param_4 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
              FUN_1400f3dc4(param_4,iVar3);
            }
            lVar9 = *param_4;
            *(longlong **)(lVar9 + lVar15 * 0x18) = param_2;
            *(longlong **)(lVar9 + 8 + lVar15 * 0x18) = plVar5;
            *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) = 1;
            *(undefined1 *)(lVar9 + 0x14 + lVar15 * 0x18) = 1;
          }
          lVar12 = lVar12 + 0x68;
        } while (lVar6 * 0x68 - lVar12 != 0);
      }
      if (local_188 != 0) {
        FUN_1400020a8(local_188);
      }
    }
  }
LAB_14030bac1:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14030bbce FUN_14030bbce body=431 status=ok
// SIG undefined FUN_14030bbce(void)

void FUN_14030bbce(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  *param_1 = param_4;
  uVar3 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar3;
  if (param_2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
  }
  *(undefined4 *)(param_1 + 3) = uVar4;
  param_1[4] = *(undefined8 *)(*(longlong *)(*param_2 + 0xb0) + (longlong)(int)param_2[1] * 8);
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) =
       *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  if (param_2 != (longlong *)0x0) {
    lVar8 = *(longlong *)(*param_2 + 0xf8) + (longlong)(int)param_2[1] * 0x18;
    lVar5 = *(longlong *)(lVar8 + 8);
    if (*(longlong *)(lVar8 + 8) == 0) {
      lVar5 = lVar8;
    }
    iVar1 = *(int *)(lVar8 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar6 = 0;
      uVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar5 + lVar8);
        if (lVar2 != 0) {
          if ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 2) != 0)
          {
            uVar11 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
            uVar7 = uVar7 | *(uint *)(lVar2 + 0x48 + uVar11 * 8);
            *(uint *)((longlong)param_1 + 0x34) = uVar7;
            uVar6 = uVar6 | *(uint *)(lVar2 + 0x4c + uVar11 * 8);
            *(uint *)(param_1 + 7) = uVar6;
            uVar10 = uVar10 | *(uint *)(lVar2 + 0x50 + uVar11 * 8);
            *(uint *)((longlong)param_1 + 0x3c) = uVar10;
            uVar9 = uVar9 | *(uint *)(lVar2 + 0x54 + uVar11 * 8);
            *(uint *)(param_1 + 8) = uVar9;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
      lVar8 = *(longlong *)(*param_2 + 0xf8) + (longlong)(int)param_2[1] * 0x18;
      iVar1 = *(int *)(lVar8 + 0x10);
      lVar5 = *(longlong *)(lVar8 + 8);
      if (*(longlong *)(lVar8 + 8) == 0) {
        lVar5 = lVar8;
      }
      if ((longlong)iVar1 != 0) {
        lVar8 = 0;
        uVar7 = 0;
        uVar9 = 0;
        uVar10 = 0;
        uVar6 = 0;
        do {
          lVar2 = *(longlong *)(lVar5 + lVar8);
          if (lVar2 != 0) {
            if ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 5) !=
                0) {
              uVar11 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
              uVar6 = uVar6 | *(uint *)(lVar2 + 0x58 + uVar11 * 8);
              *(uint *)((longlong)param_1 + 0x44) = uVar6;
              uVar10 = uVar10 | *(uint *)(lVar2 + 0x5c + uVar11 * 8);
              *(uint *)(param_1 + 9) = uVar10;
              uVar9 = uVar9 | *(uint *)(lVar2 + 0x60 + uVar11 * 8);
              *(uint *)((longlong)param_1 + 0x4c) = uVar9;
              uVar7 = uVar7 | *(uint *)(lVar2 + 100 + uVar11 * 8);
              *(uint *)(param_1 + 10) = uVar7;
            }
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar1 * 8 != lVar8);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  }
  return;
}



// FUNCTION 14030bdda FUN_14030bdda body=80 status=ok
// SIG undefined FUN_14030bdda(void)

ulonglong FUN_14030bdda(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  
  *(undefined1 *)((longlong)param_1 + 0x2da) = 0;
  (**(code **)(*param_1 + 0x548))();
  cVar2 = *(char *)((longlong)param_1 + 0x2da);
  if (cVar2 == '\0') {
    plVar3 = (longlong *)param_1[0x60];
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar2) & 0xffffffff;
}



// FUNCTION 14030be2a FUN_14030be2a body=66 status=ok
// SIG undefined FUN_14030be2a(void)

undefined8 FUN_14030be2a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((((*(char *)(param_1 + 0x418) != '\x02') ||
       (lVar1 = *(longlong *)(param_1 + 0x1e0), lVar1 == 0)) ||
      (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 == 0)) ||
     ((uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1), *(int *)(lVar2 + 0x268) < 1 &&
      (*(int *)(lVar2 + 0x278) < 1)))) {
    FUN_1415aa5bc();
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14030be6c FUN_14030be6c body=5173 status=ok
// SIG undefined FUN_14030be6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14030be6c(longlong *param_1,float param_2)

{
  wchar_t *pwVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  byte bVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  undefined4 local_1d0;
  code **local_1c8;
  undefined8 *local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  code *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_128;
  double local_120;
  double local_118;
  code *local_110;
  longlong local_108;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined2 local_f9;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14030d746();
  cVar11 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar11 != '\0') {
    lVar16 = FUN_14030d330(param_1);
    if (lVar16 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = *(char *)(lVar16 + 0x370);
    }
    if (param_1[0x1e8] == 0) {
      bVar25 = 0;
    }
    else {
      lVar16 = *(longlong *)(&DAT_00006850 + param_1[0x1e8]);
      if (cVar11 == '\x01' && lVar16 != 0) {
        fVar35 = (float)FUN_1479c05fa(lVar16);
        if (fVar35 < *(float *)(param_1 + 0x63e) || fVar35 == *(float *)(param_1 + 0x63e)) {
          bVar10 = false;
        }
        else {
          bVar10 = 0.0 < *(double *)(lVar16 + 0x2f70) * *(double *)(lVar16 + 0x2f70) +
                         *(double *)(lVar16 + 0x2f78) * *(double *)(lVar16 + 0x2f78);
        }
      }
      else {
        bVar25 = 0;
        bVar10 = false;
        if (lVar16 == 0) goto LAB_14030bf88;
      }
      bVar25 = bVar10;
      if ((*(longlong *)(&DAT_00001ce8 + lVar16) == 0) ||
         (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar16) + 0x178) < 2)) {
        cVar11 = *(char *)(lVar16 + 0x1ee0);
joined_r0x00014030c3f6:
        if (cVar11 != '\0') {
LAB_14030ce43:
          bVar12 = FUN_143e4a860(lVar16,0);
          bVar25 = bVar25 | bVar12 ^ 1;
        }
      }
      else {
        plVar18 = *(longlong **)(lVar16 + 0x1eb8);
        if (plVar18 != (longlong *)0x0) {
          if (*(code **)(*plVar18 + 0x40) != (code *)&LAB_1449cc0ea) {
            cVar11 = (**(code **)(*plVar18 + 0x40))();
            goto joined_r0x00014030c3f6;
          }
          if ((*(char *)((longlong)plVar18 + 0xb2) != '\0') ||
             ((*(char *)((longlong)plVar18 + 0x79) == '\0' &&
              (((int)plVar18[4] < 1 || ((char)plVar18[0xf] != '\x01')))))) goto LAB_14030bf88;
          goto LAB_14030ce43;
        }
      }
    }
LAB_14030bf88:
    if ((char)param_1[0x63d] == '\x01') {
      fVar35 = 0.0;
      if (0.0 < *(float *)((longlong)param_1 + 0x31f4)) {
        lVar16 = FUN_1447210f0(param_1);
        if (lVar16 != 0) {
          lVar16 = FUN_1447210f0(param_1);
          fVar35 = (float)*(double *)(lVar16 + 0x6d0);
        }
        if (bVar25 == 0 &&
            fVar35 < *(float *)((longlong)param_1 + 0x31ec) + *(float *)((longlong)param_1 + 0x31f4)
           ) goto LAB_14030bf9d;
      }
LAB_14030c93c:
      if ((((param_1[0x1e8] != 0) && (*(longlong *)(&DAT_00006850 + param_1[0x1e8]) != 0)) &&
          (cVar11 = FUN_14030de6a(param_1), cVar11 != '\0')) &&
         (cVar11 = FUN_1456facfe(*(longlong *)(&DAT_00006850 + param_1[0x1e8]) + 0x1f08),
         cVar11 != '\0')) {
        *(byte *)(*(longlong *)(&DAT_00006850 + param_1[0x1e8]) + 0x1f18) =
             *(byte *)(*(longlong *)(&DAT_00006850 + param_1[0x1e8]) + 0x1f18) | 8;
      }
    }
    else if (bVar25 != 0) goto LAB_14030c93c;
LAB_14030bf9d:
    lVar16 = FUN_1447210f0(param_1);
    plVar18 = (longlong *)param_1[0x7a];
    if (plVar18 != (longlong *)0x0 && lVar16 != 0) {
      lVar17 = FUN_1403ca227();
      if (*(float *)((longlong)param_1 + 0x3294) + *(float *)(lVar17 + 0x14c) <=
          (float)*(double *)(lVar16 + 0x6d0)) {
        *(float *)((longlong)param_1 + 0x3294) = (float)*(double *)(lVar16 + 0x6d0);
        (**(code **)(*param_1 + 0x718))(param_1,&local_128,&local_148);
        dVar32 = (double)FUN_144719204(local_148);
        dVar31 = (double)FUN_144719204(uStack_140);
        dVar29 = sin(dVar32 * 0.017453292519943295);
        dVar32 = cos(dVar32 * 0.017453292519943295);
        dVar30 = sin(dVar31 * 0.017453292519943295);
        dVar31 = cos(dVar31 * 0.017453292519943295);
        dVar33 = (double)*(float *)(lVar17 + 0x148);
        local_168 = dVar31 * dVar32 * dVar33 + local_128;
        local_160 = dVar30 * dVar32 * dVar33 + local_120;
        local_158 = dVar29 * dVar33 + local_118;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cbcfb38) &&
           (FUN_144b3d300(&DAT_14cbcfb38), DAT_14cbcfb38 == -1)) {
          FUN_1446f470e(&DAT_14cbcfb30,L"FullyAimingAtTarget",1);
          _Init_thread_footer(&DAT_14cbcfb38);
        }
        lVar17 = 0;
        local_ec = 0;
        local_e8 = 0x101;
        local_c0 = 0;
        local_b8 = 0x800000000;
        local_a0 = 0;
        local_94 = 4;
        local_100 = 0;
        local_f4 = 0;
        local_110 = DAT_14cbcfb30;
        local_ff = 1;
        local_fd = 0;
        local_f0 = 0;
        local_fc = 0;
        local_fa = 0;
        local_98 = 1;
        local_b0 = *(undefined4 *)((longlong)plVar18 + 0xc);
        local_108 = plVar18[3];
        local_f9 = 0x101;
        local_178 = _DAT_14cad0ee0;
        uStack_170 = uRam000000014cad0ee8;
        local_188 = _DAT_14cad0ed0;
        uStack_180 = _DAT_14cad0ed8;
        do {
          cVar11 = *(char *)((longlong)&uStack_180 + lVar17);
          cVar3 = *(char *)((longlong)&uStack_180 + lVar17 + 1);
          cVar4 = *(char *)((longlong)&uStack_180 + lVar17 + 2);
          cVar5 = *(char *)((longlong)&uStack_180 + lVar17 + 3);
          cVar6 = *(char *)((longlong)&uStack_180 + lVar17 + 4);
          cVar7 = *(char *)((longlong)&uStack_180 + lVar17 + 5);
          cVar8 = *(char *)((longlong)&uStack_180 + lVar17 + 6);
          cVar9 = *(char *)((longlong)&uStack_180 + lVar17 + 7);
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17) == DAT_149c360b0) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17 + 1) == DAT_149c360b0._1_1_) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17 + 1) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17 + 2) == DAT_149c360b0._2_1_) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17 + 2) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17 + 3) == DAT_149c360b0._3_1_) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17 + 3) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17 + 4) == DAT_149c360b0._4_1_) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17 + 4) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17 + 5) == DAT_149c360b0._5_1_) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17 + 5) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17 + 6) == DAT_149c360b0._6_1_) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17 + 6) = 2;
          }
          if ((bool)(~(*(char *)((longlong)&local_188 + lVar17 + 7) == DAT_149c360b0._7_1_) & 1)) {
            *(undefined1 *)((longlong)&local_188 + lVar17 + 7) = 2;
          }
          if ((bool)(~(cVar11 == DAT_149c360b0._8_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17) = 2;
          }
          if ((bool)(~(cVar3 == DAT_149c360b0._9_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17 + 1) = 2;
          }
          if ((bool)(~(cVar4 == DAT_149c360b0._10_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17 + 2) = 2;
          }
          if ((bool)(~(cVar5 == DAT_149c360b0._11_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17 + 3) = 2;
          }
          if ((bool)(~(cVar6 == DAT_149c360b0._12_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17 + 4) = 2;
          }
          if ((bool)(~(cVar7 == DAT_149c360b0._13_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17 + 5) = 2;
          }
          if ((bool)(~(cVar8 == DAT_149c360b0._14_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17 + 6) = 2;
          }
          if ((bool)(~(cVar9 == DAT_149c360b0._15_1_) & 1)) {
            *(undefined1 *)((longlong)&uStack_180 + lVar17 + 7) = 2;
          }
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != 0x20);
        if (DAT_14cb223d8 == 0) {
          local_1a0 = &local_150;
          local_150 = FUN_1449e2820;
          local_190 = FUN_14081d0ea;
          local_198 = FUN_1427b09ee;
          local_1a8 = &LAB_147f29feb;
          local_1b0 = FUN_1464384fe;
          local_1b8 = L"Engine";
          local_1c0 = (undefined8 *)0x0;
          local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x10004001);
          local_1d0 = 8;
          local_1d8 = (double *)CONCAT44(local_1d8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb223d8);
        if (plVar18 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_1a0 = &local_150;
            local_150 = FUN_1449e2820;
            local_190 = FUN_14081d0ea;
            local_198 = FUN_1427b09ee;
            local_1a8 = &LAB_147f29feb;
            local_1b0 = FUN_1464384fe;
            local_1b8 = L"Engine";
            local_1c0 = (undefined8 *)0x0;
            local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x10004001);
            local_1d0 = 8;
            local_1d8 = (double *)CONCAT44(local_1d8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar19 = (longlong *)FUN_144718840(plVar18,DAT_14cb223d8);
          if (((((plVar18 != plVar19) && (plVar19 != (longlong *)0x0)) &&
               ((lVar17 = (**(code **)(*plVar19 + 0x10))(plVar19), lVar17 != 0 &&
                ((*(char *)(lVar17 + 0x50) == '\x01' &&
                 (lVar23 = *(longlong *)(lVar17 + 0x20), lVar23 != 0)))))) &&
              ((*(short *)(lVar17 + 0x28) < 0 || (*(longlong *)(lVar17 + 0x30) != 0)))) &&
             (((*(char *)(lVar23 + 0x88) == '\x01' &&
               (uVar20 = (ulonglong)*(byte *)(lVar23 + 0x89), uVar20 < 6)) &&
              (*(char *)((longlong)&uStack_170 + uVar20 + 2) != '\0')))) {
            *(undefined1 *)((longlong)&uStack_170 + uVar20 + 2) = 0;
          }
        }
        pwVar1 = (wchar_t *)(param_1 + 0x650);
        iVar15 = (int)param_1[0x651];
        if (iVar15 == 0) {
LAB_14030ce7f:
          FUN_1446efa72(pwVar1,0,3,0x10);
          *(undefined4 *)(param_1 + 0x651) = 3;
LAB_14030ce9f:
          puVar2 = *(undefined8 **)pwVar1;
          *puVar2 = &PTR_LAB_14a78e0f0;
          LOCK();
          UNLOCK();
          lVar23 = DAT_14c758608 + 1;
          lVar17 = DAT_14c758608 + 1;
          if (lVar23 == 0) {
            LOCK();
            UNLOCK();
            lVar23 = DAT_14c758608 + 2;
            lVar17 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar17;
          puVar2[2] = lVar23;
          *puVar2 = &PTR_FUN_14b994d80;
          puVar2[3] = 0;
          FUN_14485c47a(puVar2 + 3,param_1);
          puVar2[4] = FUN_140716c3c;
          *(undefined4 *)(puVar2 + 5) = 0;
        }
        else {
          if (*(longlong **)pwVar1 == (longlong *)0x0) {
LAB_14030ce7a:
            if (iVar15 != 3) goto LAB_14030ce7f;
            goto LAB_14030ce9f;
          }
          cVar11 = (**(code **)(**(longlong **)pwVar1 + 0x30))();
          if (cVar11 == '\0') {
            iVar15 = (int)param_1[0x651];
            goto LAB_14030ce7a;
          }
        }
        local_1c0 = &local_188;
        local_1c8 = &local_110;
        local_1d8 = &local_168;
        local_1b0 = (code *)((ulonglong)local_1b0 & 0xffffffff00000000);
        local_1d0 = 0x10;
        local_1b8 = pwVar1;
        FUN_1447de878(lVar16,&local_150,2,&local_128);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
      }
    }
    cVar11 = FUN_14030d5d4(param_1);
    uVar20 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
    if (cVar11 == '\0') {
      if (param_1[0x78a] == 0) {
LAB_14030cd0d:
        uVar20 = 0;
      }
      else {
        cVar11 = FUN_14030d2b6(param_1[0x78a] + 0xd98,&DAT_14cbd96c0);
        if (cVar11 == '\0') {
          if (param_1[0x78a] == 0) goto LAB_14030cd0d;
          uVar13 = FUN_14030d2b6(param_1[0x78a] + 0xd98,&DAT_14cbd96e0);
          uVar20 = (ulonglong)uVar13;
        }
      }
    }
    lVar16 = param_1[0x73];
    if (lVar16 != 0) {
      if (DAT_14cbae3d8 == 0) {
        local_1a0 = &local_110;
        local_110 = FUN_141030f22;
        local_190 = FUN_14081d0ea;
        local_198 = (code *)&LAB_1464f5fc4;
        local_1a8 = &LAB_148c3dd26;
        local_1b0 = (code *)&LAB_1459673ba;
        local_1b8 = L"Engine";
        local_1c0 = (undefined8 *)0x0;
        local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x10000004);
        local_1d0 = 0x10;
        local_1d8 = (double *)CONCAT44(local_1d8._4_4_,0x1360);
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar16 = param_1[0x73];
        if (lVar16 == 0) goto LAB_14030c08c;
      }
      if (((DAT_14cbae3d8 != 0) && (lVar17 = *(longlong *)(lVar16 + 0x10), lVar17 != 0)) &&
         ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar17 + 0x38) &&
          (*(longlong *)
            (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
           DAT_14cbae3d8 + 0x30)))) {
        FUN_14030d2e8(lVar16,uVar20 & 0xffffffff);
      }
    }
LAB_14030c08c:
    lVar16 = FUN_14030d330(param_1);
    if (((lVar16 == 0) || (*(char *)((longlong)param_1 + 0xa99) != '\x01')) ||
       (((char)param_1[0x153] != '\x01' || (*(char *)(lVar16 + 0x368) == '\0')))) {
LAB_14030c0af:
      *(undefined4 *)((longlong)param_1 + 0x32b4) = 0;
    }
    else {
      (**(code **)(*param_1 + 0x718))(param_1,&local_110,&local_188);
      plVar18 = (longlong *)param_1[0x7a];
      if (plVar18 == (longlong *)0x0) {
LAB_14030c8cc:
        if (-9.999999747378752e-05 < local_188) goto LAB_14030c0af;
      }
      else {
        lVar16 = FUN_144a2f878();
        if ((((*(int *)(plVar18[2] + 0x38) < *(int *)(lVar16 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
              lVar16 + 0x30)) || (lVar16 = (**(code **)(*plVar18 + 0x638))(plVar18), lVar16 == 0))
           || (0.0 <= local_188)) goto LAB_14030c8cc;
        lVar16 = (**(code **)(*plVar18 + 0x638))(plVar18);
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0x3ff0000000000000;
        FUN_140ccff96(lVar16 + 0x128,&local_128,uStack_180 * -0.017453292519943295);
        fVar35 = (float)SQRT(local_128 * local_128 + local_120 * local_120);
        if (((fVar35 < 0.0001) || (fVar35 < *(float *)(param_1 + 0x655))) ||
           (dVar32 = (double)(&DAT_149931160)[0.0 <= local_128],
           dVar31 = cos(((double)*(float *)((longlong)param_1 + 0x329c) * 3.14) / 360.0),
           (double)(float)((1.0 / (double)fVar35) * local_128 * dVar32 +
                          local_120 * (1.0 / (double)fVar35) * 0.0) < ABS(dVar31)))
        goto LAB_14030c0af;
        fVar26 = *(float *)((longlong)param_1 + 0x32b4) + param_2;
        *(float *)((longlong)param_1 + 0x32b4) = fVar26;
        fVar35 = *(float *)(param_1 + 0x654);
        if (fVar35 <= fVar26) {
          fVar27 = *(float *)((longlong)param_1 + 0x32a4);
          dVar31 = -local_188;
          dVar32 = (double)(*(float *)(param_1 + 0x656) * fVar27 * 0.5);
          if (dVar31 <= dVar32) {
            fVar34 = (float)((double)fVar27 * (dVar31 / dVar32) + 0.0);
            if (fVar34 <= 1.0) {
              fVar34 = 1.0;
            }
LAB_14030d243:
            fVar34 = fVar34 * param_2;
          }
          else {
            fVar34 = fVar27 * param_2;
            if (dVar31 < (double)fVar34) {
              fVar34 = (float)dVar31;
            }
            if (fVar26 < fVar35 + *(float *)((longlong)param_1 + 0x32ac)) {
              fVar34 = ((fVar26 - fVar35) / *(float *)((longlong)param_1 + 0x32ac)) * fVar27 + 0.0;
              goto LAB_14030d243;
            }
          }
          lVar16 = *(longlong *)(param_1[0x4a0] + 0x39d8);
          *(double *)(lVar16 + 0x48) = (double)fVar34 + *(double *)(lVar16 + 0x48);
          *(double *)(lVar16 + 0x50) = *(double *)(lVar16 + 0x50) + 0.0;
          *(double *)(lVar16 + 0x58) = *(double *)(lVar16 + 0x58) + 0.0;
        }
      }
    }
    if (*(int *)((longlong)param_1 + 0x32cc) == 0) {
LAB_14030c3e8:
      bVar25 = 0;
      cVar11 = '\0';
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x659);
      bVar25 = 0;
      if ((int)uVar13 < 0) goto LAB_14030c3e8;
      cVar11 = '\0';
      if ((int)uVar13 < DAT_14c9647dc) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
        if (((plVar18 != (longlong *)0x0) &&
            ((int)plVar18[2] == *(int *)((longlong)param_1 + 0x32cc))) &&
           (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
            ((lVar16 = *plVar18, lVar16 != 0 && (lVar17 = param_1[0x7a], lVar17 != 0)))))) {
          if (DAT_14cb94538 == 0) {
            local_1a0 = &local_110;
            local_110 = FUN_1449e2820;
            local_190 = FUN_14081d0ea;
            local_198 = FUN_1427b09ee;
            local_1a8 = &LAB_148a18249;
            local_1b0 = FUN_14657713c;
            local_1b8 = L"Engine";
            local_1c0 = (undefined8 *)0x0;
            local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x10004001);
            local_1d0 = 8;
            local_1d8 = (double *)CONCAT44(local_1d8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248)
            ;
          }
          plVar18 = (longlong *)FUN_144718840(lVar17,DAT_14cb94538);
          if ((plVar18 != (longlong *)0x0) &&
             (lVar17 = (**(code **)(*plVar18 + 0x10))(plVar18), 0 < *(int *)(lVar17 + 0xa8))) {
            plVar18 = *(longlong **)(*(longlong *)(lVar17 + 0xa0) + 0x20);
            if ((DAT_14c950c29 == '\x01') && (plVar18 != (longlong *)0x0)) {
              FUN_1456cec3c(plVar18);
            }
            else if (plVar18 == (longlong *)0x0) goto LAB_14030c3e8;
            cVar11 = FUN_14022747e(plVar18);
            if (((cVar11 == '\0') &&
                (cVar11 = (**(code **)(*plVar18 + 0x810))(plVar18), cVar11 != '\0')) &&
               (cVar11 = (**(code **)(plVar18[0x118] + 0x10))(plVar18 + 0x118), cVar11 == '\0')) {
              cVar11 = '\0';
            }
            else {
              cVar11 = '\x01';
            }
            if (*(char *)(lVar16 + 0x30) == '\x04') {
              bVar25 = FUN_1402273fc(plVar18);
              bVar25 = bVar25 ^ 1;
            }
            else {
              bVar25 = 0;
            }
            goto LAB_14030c1e2;
          }
        }
        goto LAB_14030c3e8;
      }
    }
LAB_14030c1e2:
    if ((cVar11 != *(char *)((longlong)param_1 + 0x32bb)) ||
       (bVar25 != *(byte *)((longlong)param_1 + 0x32bc))) {
      *(char *)((longlong)param_1 + 0x32bb) = cVar11;
      *(byte *)((longlong)param_1 + 0x32bc) = bVar25;
      (**(code **)(*param_1 + 0x14b8))(param_1);
    }
    if (((param_1[0x1e8] != 0) && (lVar16 = FUN_1447210f0(param_1), lVar16 != 0)) &&
       (*(longlong *)(lVar16 + 0x178) != 0)) {
      lVar17 = FUN_14030d660();
      lVar16 = *(longlong *)(lVar16 + 0x178);
      if ((((lVar16 != 0) && (lVar17 != 0)) && (lVar23 = *(longlong *)(lVar16 + 0x10), lVar23 != 0))
         && ((*(int *)(lVar17 + 0x38) <= *(int *)(lVar23 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar23 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
              lVar17 + 0x30)))) {
        bVar25 = (**(code **)(*(longlong *)param_1[0x1e8] + 0xbc0))();
        if (*(longlong *)(param_1[0x1e8] + 0x81c0) == 0) {
          bVar12 = 0;
        }
        else {
          bVar12 = *(byte *)(*(longlong *)(param_1[0x1e8] + 0x81c0) + 0x210);
        }
        bVar25 = bVar25 & (bVar12 ^ 1);
        if (*(byte *)(lVar16 + 0x6a0) != bVar25) {
          *(byte *)(lVar16 + 0x6a0) = bVar25;
          FUN_1447f69b6(lVar16 + 0x5c8);
        }
      }
    }
    uVar14 = (**(code **)(*param_1 + 0x1080))(param_1);
    if (param_1[0x63f] != 0) {
      if (param_1[0x1e8] == 0) goto LAB_14030c35a;
      uVar13 = *(uint *)(param_1[0x63f] + 0x170);
      uVar24 = (uint)(byte)((char)uVar13 + 2);
      if ((char)uVar14 == '\0') {
        uVar24 = uVar13;
      }
      FUN_14030d934(param_1[0x1e8],uVar24);
    }
    if (((param_1[0x1e8] != 0) && (FUN_14030d586(param_1[0x1e8],uVar14), param_1[0x1e8] != 0)) &&
       (((longlong *)param_1[0x157] != (longlong *)0x0 &&
        ((*(longlong *)param_1[0x157] != -1 && (lVar16 = FUN_14030dc32(), lVar16 != 0)))))) {
      lVar17 = param_1[0x157];
      uVar28 = FUN_144916004(param_1[0x1e8]);
      lVar23 = *(longlong *)(lVar16 + 0x480);
      if (lVar23 == 0) {
        uVar21 = FUN_1407f787c();
        lVar23 = FUN_14477b664(uVar21);
        *(longlong *)(lVar16 + 0x480) = lVar23;
      }
      lVar22 = *(longlong *)(lVar16 + 0x488);
      if (((lVar22 == 0) && (lVar22 = 0, lVar23 != 0)) && (*(longlong *)(lVar16 + 0x478) != 0)) {
        plVar18 = *(longlong **)(lVar23 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar11 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar11 == '\0')) {
          lVar22 = 0;
        }
        else {
          uVar21 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar22 = FUN_144aff482(uVar21,(longlong *)(lVar16 + 0x478));
        }
        *(longlong *)(lVar16 + 0x488) = lVar22;
      }
      local_1d8 = (double *)((ulonglong)local_1d8 & 0xffffffffffffff00);
      FUN_1447997cc(lVar17,lVar22,uVar28,0);
    }
  }
LAB_14030c35a:
  lVar16 = param_1[0x1e8];
  if (lVar16 != 0) {
    uVar28 = FUN_14030d84e();
    plVar18 = (longlong *)FUN_144718840(lVar16,uVar28);
    if (((plVar18 != (longlong *)0x0) &&
        (cVar11 = (**(code **)(*plVar18 + 0xd0))(plVar18), cVar11 != '\0')) &&
       (0 < *(int *)(param_1[0x1e8] + 0x6190))) {
      lVar16 = *(longlong *)(*(longlong *)(param_1[0x1e8] + 0x6188) + 0x20);
      if ((DAT_14c950c29 == '\x01') && (lVar16 != 0)) {
        FUN_1456cec3c(lVar16);
      }
      else if (lVar16 == 0) goto LAB_14030c38f;
      lVar17 = FUN_144a7a5f4();
      if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) {
        plVar18 = (longlong *)(**(code **)(*(longlong *)param_1[0x1e8] + 0x638))();
        fVar35 = 0.0;
        if (plVar18 != (longlong *)0x0) {
          lVar17 = FUN_14016cc74();
          if ((*(int *)(lVar17 + 0x38) <= *(int *)(plVar18[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
              lVar17 + 0x30)) {
            fVar35 = (float)(**(code **)(*plVar18 + 0xbe8))(plVar18);
            fVar26 = (float)(**(code **)(*plVar18 + 0x480))(plVar18);
            if (fVar26 <= fVar35) {
              fVar26 = fVar35;
            }
            fVar35 = (float)FUN_148f17aea(lVar16);
            cVar11 = (**(code **)(plVar18[0x2f] + 0xe0))(plVar18 + 0x2f);
            if (((0.0 < fVar26) && (cVar11 != '\0')) && ((*(byte *)(plVar18 + 0x6d5) & 4) == 0)) {
              dVar32 = SQRT((double)plVar18[0x27] * (double)plVar18[0x27] +
                            (double)plVar18[0x25] * (double)plVar18[0x25] +
                            (double)plVar18[0x26] * (double)plVar18[0x26]) / (double)fVar26;
              if (1.0 <= dVar32) {
                dVar32 = 1.0;
              }
              if (dVar32 <= 0.0) {
                dVar32 = 0.0;
              }
              cVar11 = (**(code **)(plVar18[0x2f] + 0xd0))(plVar18 + 0x2f);
              if (cVar11 == '\0') {
                fVar27 = (float)FUN_148f17b56(lVar16);
                fVar26 = fVar27 * fVar35;
                if (fVar35 <= fVar27 * fVar35) {
                  fVar26 = fVar35;
                }
                if (fVar26 <= 0.0) {
                  fVar26 = 0.0;
                }
                fVar35 = (float)dVar32 * (fVar35 - fVar26) + fVar26;
              }
              else {
                fVar27 = (float)FUN_148f17bc2();
                fVar26 = fVar27 * fVar35;
                if (fVar35 <= fVar27 * fVar35) {
                  fVar26 = fVar35;
                }
                if (fVar26 <= 0.0) {
                  fVar26 = 0.0;
                }
                fVar35 = fVar26 * (float)dVar32;
              }
            }
          }
        }
        *(float *)(lVar16 + 0xf6c) = fVar35;
      }
    }
  }
LAB_14030c38f:
  if ((local_90 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030d2b6 FUN_14030d2b6 body=49 status=ok
// SIG undefined FUN_14030d2b6(void)

undefined8 FUN_14030d2b6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      uVar2 = FUN_1400c2d3a(lVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14030d2e8 FUN_14030d2e8 body=71 status=ok
// SIG undefined FUN_14030d2e8(void)

void FUN_14030d2e8(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1350) != param_2) {
    *(char *)(param_1 + 0x1350) = param_2;
    FUN_14036c744(param_1 + 0x1338,param_1);
    if (*(char *)(param_1 + 0x178) != '\x03') {
      FUN_1456fae56(param_1,*(undefined1 *)(param_1 + 0x1350));
      return;
    }
  }
  return;
}



// FUNCTION 14030d330 FUN_14030d330 body=366 status=ok
// SIG undefined FUN_14030d330(void)

longlong FUN_14030d330(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x430);
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_1 + 0x430);
      if (lVar2 == 0) goto LAB_14030d476;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      lVar1 = FUN_14030d4a0();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) goto LAB_14030d478;
    }
  }
LAB_14030d476:
  lVar2 = 0;
LAB_14030d478:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14030d4a0 FUN_14030d4a0 body=228 status=ok
// SIG undefined FUN_14030d4a0(void)

longlong FUN_14030d4a0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbac708 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417de738;
    local_20 = &LAB_145893408;
    local_28 = &LAB_1464ec654;
    local_38 = &LAB_148c2d8ed;
    local_40 = &LAB_145d213ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x508;
    FUN_14081cfa3(L"/Script/OakGame",L"OakLocalPlayer",&DAT_14cbac708,FUN_1465e2636);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbac708;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030d586 FUN_14030d586 body=78 status=ok
// SIG undefined FUN_14030d586(void)

void FUN_14030d586(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x66b8) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x66b8) = param_2;
  FUN_1456fac64(param_1 + 0x66a8);
  if (*(byte *)(param_1 + 0x178) < 3) {
    FUN_1456faca2(param_1,*(undefined1 *)(param_1 + 0x66b8));
  }
  FUN_14030ec08(param_1);
  return;
}



// FUNCTION 14030d5d4 FUN_14030d5d4 body=138 status=ok
// SIG undefined FUN_14030d5d4(void)

ulonglong FUN_14030d5d4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14030da5e(param_1,&local_30);
  AcquireSRWLockShared((PSRWLOCK)(local_30 + 0xa0));
  uVar3 = *(undefined1 *)(local_30 + 0x20);
  ReleaseSRWLockShared((PSRWLOCK)(local_30 + 0xa0));
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)local_30 >> 8),uVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030d660 FUN_14030d660 body=228 status=ok
// SIG undefined FUN_14030d660(void)

longlong FUN_14030d660(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaac58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464e4756;
    local_38 = &LAB_148c1559b;
    local_40 = &LAB_145955028;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xcc8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakGameState",&DAT_14cbaac58,FUN_1465d9e2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaac58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030d746 FUN_14030d746 body=240 status=ok
// SIG undefined FUN_14030d746(void)

void FUN_14030d746(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_34 = param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_34);
    lVar3 = FUN_1447210f0(param_1);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        lVar4 = lVar3 + 0x460;
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar4,param_1,*(undefined4 *)(lVar3 + 0x6f4));
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030d84e FUN_14030d84e body=228 status=ok
// SIG undefined FUN_14030d84e(void)

longlong FUN_14030d84e(void)

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
  if (DAT_14cbbd6d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146577164;
    local_38 = &LAB_148ca5403;
    local_40 = FUN_145adb16a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeaponUserInterface",&DAT_14cbbd6d0,&DAT_148ca5402);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbd6d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030d934 FUN_14030d934 body=296 status=ok
// SIG undefined FUN_14030d934(void)

void FUN_14030d934(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x62fa) != param_2) {
    *(char *)((longlong)param_1 + 0x62fa) = param_2;
    uVar1 = param_1[5];
    if (uVar1 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,0x33);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar4 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar4 = DAT_14c998080;
        }
        if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          lVar5 = *(longlong *)(lVar3 + 0x18);
          if (*(longlong *)(lVar3 + 0x18) == 0) {
            lVar5 = lVar3 + 8;
          }
          *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x80000;
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
        }
      }
    }
    if (*(byte *)(param_1 + 0x2f) < 3) {
      local_21 = param_2;
      uVar2 = FUN_14477b072(param_1,DAT_14cba8070);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_21);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14030da5e FUN_14030da5e body=467 status=ok
// SIG undefined FUN_14030da5e(void)

undefined8 * FUN_14030da5e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  uint local_34;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *(ulonglong *)(param_1 + 0x430);
  uVar6 = 0;
  uVar7 = uVar6;
  if (uVar5 != 0) {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568);
      uVar5 = *(ulonglong *)(param_1 + 0x430);
      uVar7 = 0;
      if (uVar5 == 0) goto LAB_14030dacf;
    }
    uVar7 = uVar6;
    if (((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(uVar5 + 0x10), lVar3 != 0)) &&
       (uVar7 = 0, *(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      uVar4 = (uint)(uVar5 >> 4);
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          != DAT_14cae9568 + 0x30) {
        uVar4 = 0;
      }
      uVar7 = (ulonglong)uVar4;
    }
  }
LAB_14030dacf:
  uVar4 = ((uint)(uVar7 >> 0x10) ^ (uint)uVar7) * -0x7a143595;
  local_34 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_34 = local_34 >> 0x10 ^ local_34;
  FUN_1448d5e3c(&local_30);
  *param_2 = *(undefined8 *)(local_30 + 0x600);
  lVar3 = *(longlong *)(local_30 + 0x608);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
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
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14030dc32 FUN_14030dc32 body=488 status=ok
// SIG undefined FUN_14030dc32(void)

longlong FUN_14030dc32(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb253f8 == 0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f6f09d;
    local_40 = &LAB_146201c25;
    local_48 = L"Game";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar1 = DAT_14cb253f8;
  if (*(longlong *)(DAT_14cb253f8 + 0x110) == 0) {
    FUN_140aa6c08(DAT_14cb253f8);
    if (*(longlong *)(lVar1 + 0x110) != 0) goto LAB_14030dc67;
  }
  else {
LAB_14030dc67:
    lVar1 = DAT_14cb25be0;
    if (DAT_14cb25be0 != 0) {
      if (DAT_14cba7010 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = (code *)&LAB_145a8146a;
        local_38 = &LAB_148bf1a59;
        local_40 = &LAB_145bfc4c7;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10000000;
        local_60 = 8;
        local_68 = 0x640;
        FUN_14081cfa3(L"/Script/OakGame",L"OakAudioGlobals",&DAT_14cba7010,&DAT_148bf1a58);
      }
      if ((*(int *)(DAT_14cba7010 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba7010 + 0x38) * 8) == DAT_14cba7010 + 0x30))
      goto LAB_14030dca6;
    }
  }
  lVar1 = 0;
LAB_14030dca6:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030de6a FUN_14030de6a body=102 status=ok
// SIG undefined FUN_14030de6a(void)

ulonglong FUN_14030de6a(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if ((((param_1[0x1e8] == 0) || (*(longlong *)(&DAT_00006850 + param_1[0x1e8]) == 0)) ||
      (cVar1 = FUN_14022753c(*(longlong *)(&DAT_00006850 + param_1[0x1e8]) + 0x1f08), cVar1 == '\0')
      ) || (((uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1),
             (*(byte *)(param_1 + 0x84) & 2) != 0 &&
             (cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar1 != '\0')) &&
            (cVar1 = FUN_1456faeb2(param_1), cVar1 == '\0')))) {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14030ded0 FUN_14030ded0 body=2594 status=ok
// SIG undefined FUN_14030ded0(void)

void FUN_14030ded0(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  longlong local_128;
  ulonglong uStack_120;
  code *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined1 local_f0;
  byte local_ef;
  undefined1 local_ee;
  undefined4 local_ec;
  code *local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined6 uStack_b4;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  cVar7 = (**(code **)(*param_1 + 0x14b0))();
  if ((cVar7 != '\0') && (*(int *)((longlong)param_1 + 0x32cc) != 0)) {
    puVar2 = (uint *)(param_1 + 0x659);
    uVar8 = *puVar2;
    if ((-1 < (int)uVar8) &&
       (((((int)uVar8 < DAT_14c9647dc &&
          (plVar13 = (longlong *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
          plVar13 != (longlong *)0x0)) && ((int)plVar13[2] == *(int *)((longlong)param_1 + 0x32cc)))
        && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
        lVar9 = *plVar13;
      }
      else {
        lVar9 = 0;
      }
      if (*(char *)(lVar9 + 0x30) != '\0') {
        lVar9 = param_1[0x86];
        if (lVar9 != 0) {
          if (DAT_14cae9568 == 0) {
            local_140 = &local_e8;
            local_e8 = FUN_1417de738;
            local_130 = &LAB_145893408;
            local_138 = &LAB_1458cbbd2;
            local_148 = &LAB_147ba21f1;
            local_150 = &LAB_1463e9233;
            local_158 = L"Engine";
            local_160 = 0;
            local_168 = 0x1000000c;
            local_170 = 8;
            local_178 = 0x2b8;
            FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
            lVar9 = param_1[0x86];
            if (lVar9 == 0) goto LAB_14030e4d7;
          }
          if (((((DAT_14cae9568 != 0) && (lVar5 = *(longlong *)(lVar9 + 0x10), lVar5 != 0)) &&
               ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                ((*(longlong *)
                   (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                  DAT_14cae9568 + 0x30 && (iVar3 = *(int *)(lVar9 + 0xe0), -1 < iVar3)))))) &&
              (plVar13 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))(),
              plVar13 != (longlong *)0x0)) &&
             (((lVar9 = FUN_1400b6e86(lVar9), lVar9 != 0 &&
               (plVar10 = (longlong *)
                          (**(code **)(*(longlong *)(lVar9 + 0x30) + 0x18))(lVar9 + 0x30),
               plVar10 != (longlong *)0x0)) &&
              (plVar10 = (longlong *)(**(code **)(*plVar10 + 800))(plVar10,plVar10 + 0xe),
              plVar10 != (longlong *)0x0)))) {
            local_110 = (code *)0x0;
            local_108 = (undefined4)DAT_14c966e80;
            uStack_104 = DAT_14c966e80._4_4_;
            uStack_100 = (undefined4)DAT_14c966e88;
            uStack_fc = DAT_14c966e88._4_4_;
            local_f8 = DAT_14c966e90;
            if (DAT_14c966e90 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
              UNLOCK();
            }
            local_f0 = 7;
            local_ef = (local_ef & 0xfc) + 1;
            local_ee = 0;
            local_ec = 0;
            FUN_1446f470e(&local_e8,L"action_gamepad_fire",1);
            local_110 = local_e8;
            local_128 = 0;
            uStack_120 = 0;
            (**(code **)(*plVar10 + 0x2c8))(plVar10,&local_110,&local_128);
            if ((longlong)(int)uStack_120 != 0) {
              lVar9 = 0;
              do {
                lVar5 = *(longlong *)(local_128 + lVar9);
                uVar14 = 1;
                if (((lVar5 == DAT_14c965938) || (lVar5 == DAT_14c9657e8)) ||
                   ((uVar14 = 2, lVar5 == DAT_14c965950 || (lVar5 == DAT_14c965800)))) {
                  local_e8 = (code *)0x14b99584c;
                  local_e0 = 0x10;
                  local_dc = local_dc & 0xffffffffffffff00;
                  uVar8 = FUN_14001a6c0();
                  local_e8 = (code *)(ulonglong)uVar8;
                  local_e0._0_2_ = CONCAT11(3,uVar14);
                  local_dc = 0;
                  uStack_d4 = 0;
                  local_cc = 0;
                  uStack_c4 = 0;
                  local_bc = 0;
                  uStack_b4 = 0;
                  uStack_ae = 0;
                  uStack_ac = 0;
                  uStack_a8 = 0;
                  uStack_a7 = 0;
                  iVar4 = *(int *)((longlong)param_1 + 0x32cc);
                  if (iVar4 == 0) {
LAB_14030e6fa:
                    lVar9 = 0;
                  }
                  else {
                    uVar8 = *puVar2;
                    lVar9 = 0;
                    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
                      plVar10 = (longlong *)
                                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                      if ((plVar10 == (longlong *)0x0) ||
                         (((int)plVar10[2] != iVar4 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))
                         )) goto LAB_14030e6fa;
                      lVar9 = *plVar10;
                    }
                  }
                  cVar7 = *(char *)(lVar9 + 0x30);
                  if (cVar7 == '\x02') {
                    if (iVar4 == 0) {
LAB_14030e708:
                      lVar9 = 0;
                    }
                    else {
                      uVar8 = *puVar2;
                      lVar9 = 0;
                      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
                        plVar10 = (longlong *)
                                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                        if ((plVar10 == (longlong *)0x0) ||
                           (((int)plVar10[2] != iVar4 ||
                            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14030e708;
                        lVar9 = *plVar10;
                      }
                    }
                    fVar20 = *(float *)(lVar9 + 0x3c);
                    if (1.0 <= fVar20) {
                      fVar20 = 1.0;
                    }
                    if (fVar20 <= 0.0) {
                      fVar20 = 0.0;
                    }
                    iVar11 = (int)ROUND(fVar20 * 9.0 + fVar20 * 9.0 + 0.5) >> 1;
                    if (iVar4 == 0) {
LAB_14030e70f:
                      lVar9 = 0;
                    }
                    else {
                      uVar8 = *puVar2;
                      lVar9 = 0;
                      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
                        plVar10 = (longlong *)
                                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                        if ((plVar10 == (longlong *)0x0) ||
                           (((int)plVar10[2] != iVar4 ||
                            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14030e70f;
                        lVar9 = *plVar10;
                      }
                    }
                    fVar20 = *(float *)(lVar9 + 0x40);
                    if (1.0 <= fVar20) {
                      fVar20 = 1.0;
                    }
                    if (fVar20 <= 0.0) {
                      fVar20 = 0.0;
                    }
                    iVar12 = (int)ROUND(fVar20 * 9.0 + fVar20 * 9.0 + 0.5) >> 1;
                    iVar15 = 7;
                    if (iVar11 < 7) {
                      iVar15 = iVar11;
                    }
                    iVar11 = 2;
                    if (2 < iVar15) {
                      iVar11 = iVar15;
                    }
                    iVar16 = 8;
                    if (iVar12 < 8) {
                      iVar16 = iVar12;
                    }
                    iVar12 = 3;
                    if (3 < iVar16) {
                      iVar12 = iVar16;
                    }
                    iVar16 = iVar11 + 1;
                    if (iVar15 != iVar12) {
                      iVar16 = iVar12;
                    }
                    if (iVar4 == 0) {
LAB_14030e716:
                      lVar9 = 0;
                    }
                    else {
                      uVar8 = *puVar2;
                      lVar9 = 0;
                      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
                        plVar10 = (longlong *)
                                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                        if ((plVar10 == (longlong *)0x0) ||
                           (((int)plVar10[2] != iVar4 ||
                            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14030e716;
                        lVar9 = *plVar10;
                      }
                    }
                    fVar20 = *(float *)(lVar9 + 0x44);
                    if (1.0 <= fVar20) {
                      fVar20 = 1.0;
                    }
                    if (fVar20 <= 0.0) {
                      fVar20 = 0.0;
                    }
                    local_dc._0_5_ = CONCAT14((char)iVar11,2);
                    local_dc._0_6_ = CONCAT15((char)iVar16,(uint5)local_dc);
                    local_dc._0_7_ =
                         CONCAT16((char)((uint)(int)ROUND(fVar20 * 8.0 + fVar20 * 8.0 + 0.5) >> 1),
                                  (uint6)local_dc);
                    local_dc = (ulonglong)(uint7)local_dc;
                  }
                  else if (cVar7 == '\x04') {
                    if (*(char *)((longlong)param_1 + 0x32bc) == '\0') {
                      lVar9 = FUN_14479d2ce(puVar2);
                      fVar20 = *(float *)(lVar9 + 0x60);
                      if (1.0 <= fVar20) {
                        fVar20 = 1.0;
                      }
                      if (fVar20 <= 0.0) {
                        fVar20 = 0.0;
                      }
                      uVar14 = (undefined1)
                               ((uint)(int)ROUND(fVar20 * 8.0 + fVar20 * 8.0 + 0.5) >> 1);
                      lVar9 = FUN_14479d2ce(puVar2);
                      fVar20 = *(float *)(lVar9 + 0x5c);
                      if (1.0 <= fVar20) {
                        fVar20 = 1.0;
                      }
                      if (fVar20 <= 0.0) {
                        fVar20 = 0.0;
                      }
                      lVar9 = FUN_14479d2ce();
                      uVar6 = local_dc;
                      fVar17 = *(float *)(lVar9 + 0x58);
                      if (1.0 <= fVar17) {
                        fVar17 = 1.0;
                      }
                      if (fVar17 <= 0.0) {
                        fVar17 = 0.0;
                      }
                      local_dc._0_5_ =
                           CONCAT14((char)((uint)(int)ROUND(fVar17 * 9.0 + fVar17 * 9.0 + 0.5) >> 1)
                                    ,3);
                      local_dc._7_1_ = SUB81(uVar6,7);
                      local_dc._0_6_ = (uint6)(uint5)local_dc;
                      local_dc._0_7_ =
                           CONCAT16((char)((uint)(int)ROUND(fVar20 * 255.0 + fVar20 * 255.0 + 0.5)
                                          >> 1),(uint6)local_dc);
LAB_14030e661:
                      local_dc._0_6_ = CONCAT15(uVar14,(uint5)local_dc);
                    }
                  }
                  else {
                    if (cVar7 == '\x01') {
                      lVar9 = FUN_14479d2ce(puVar2);
                      fVar20 = *(float *)(lVar9 + 0x38);
                      if (1.0 <= fVar20) {
                        fVar20 = 1.0;
                      }
                      if (fVar20 <= 0.0) {
                        fVar20 = 0.0;
                      }
                      uVar14 = (undefined1)
                               ((uint)(int)ROUND(fVar20 * 8.0 + fVar20 * 8.0 + 0.5) >> 1);
                      lVar9 = FUN_14479d2ce();
                      fVar20 = *(float *)(lVar9 + 0x34);
                      if (1.0 <= fVar20) {
                        fVar20 = 1.0;
                      }
                      if (fVar20 <= 0.0) {
                        fVar20 = 0.0;
                      }
                      local_dc._0_5_ =
                           CONCAT14((char)((uint)(int)ROUND(fVar20 * 9.0 + fVar20 * 9.0 + 0.5) >> 1)
                                    ,1);
                      goto LAB_14030e661;
                    }
                    if (cVar7 == '\x03') {
                      lVar9 = FUN_14479d2ce(puVar2);
                      fVar20 = *(float *)(lVar9 + 0x54);
                      if (1.0 <= fVar20) {
                        fVar20 = 1.0;
                      }
                      if (fVar20 <= 0.0) {
                        fVar20 = 0.0;
                      }
                      lVar9 = FUN_14479d2ce(puVar2);
                      fVar17 = *(float *)(lVar9 + 0x50);
                      if (1.0 <= fVar17) {
                        fVar17 = 1.0;
                      }
                      if (fVar17 <= 0.0) {
                        fVar17 = 0.0;
                      }
                      lVar9 = FUN_14479d2ce(puVar2);
                      fVar18 = *(float *)(lVar9 + 0x4c);
                      if (1.0 <= fVar18) {
                        fVar18 = 1.0;
                      }
                      if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                      }
                      lVar9 = FUN_14479d2ce();
                      fVar19 = *(float *)(lVar9 + 0x48);
                      if (1.0 <= fVar19) {
                        fVar19 = 1.0;
                      }
                      if (fVar19 <= 0.0) {
                        fVar19 = 0.0;
                      }
                      local_dc._0_5_ =
                           CONCAT14((char)((uint)(int)ROUND(fVar19 * 9.0 + fVar19 * 9.0 + 0.5) >> 1)
                                    ,5);
                      local_dc._0_6_ =
                           CONCAT15((char)((uint)(int)ROUND(fVar17 * 9.0 + fVar17 * 9.0 + 0.5) >> 1)
                                    ,(uint5)local_dc);
                      local_dc = CONCAT17((char)((uint)(int)ROUND(fVar20 * 8.0 + fVar20 * 8.0 + 0.5)
                                                >> 1),
                                          CONCAT16((char)((uint)(int)ROUND(fVar18 * 8.0 +
                                                                           fVar18 * 8.0 + 0.5) >> 1)
                                                   ,(uint6)local_dc));
                    }
                  }
                  if (*(int *)((longlong)param_1 + 0x32cc) == 0) {
LAB_14030e701:
                    lVar9 = 0;
                  }
                  else {
                    uVar8 = *puVar2;
                    lVar9 = 0;
                    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
                      plVar10 = (longlong *)
                                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                      if ((plVar10 == (longlong *)0x0) ||
                         (((int)plVar10[2] != *(int *)((longlong)param_1 + 0x32cc) ||
                          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14030e701;
                      lVar9 = *plVar10;
                    }
                  }
                  fVar20 = *(float *)(lVar9 + 100);
                  if (1.0 <= fVar20) {
                    fVar20 = 1.0;
                  }
                  if (fVar20 <= 0.0) {
                    fVar20 = 0.0;
                  }
                  uStack_a7 = (undefined1)
                              ((uint)(int)ROUND(fVar20 * 255.0 + fVar20 * 255.0 + 0.5) >> 1);
                  uStack_a8 = 0;
                  (**(code **)(*plVar13 + 0x20))(plVar13,iVar3);
                  *(undefined1 *)((longlong)param_1 + 0x32ba) = 1;
                  goto LAB_14030e4a9;
                }
                lVar9 = lVar9 + 0x18;
              } while ((longlong)(int)uStack_120 * 0x18 != lVar9);
            }
            (**(code **)(*param_1 + 0x14c8))(param_1,0);
LAB_14030e4a9:
            FUN_144a65a1e(local_128,uStack_120 & 0xffffffff);
            if (local_128 != 0) {
              FUN_1400020a8();
            }
            plVar13 = local_f8;
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_f8 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_f8)(local_f8);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
          }
        }
LAB_14030e4d7:
        if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_198);
}



// FUNCTION 14030e93c FUN_14030e93c body=170 status=ok
// SIG undefined FUN_14030e93c(void)

ulonglong FUN_14030e93c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14030d330();
  if (((((lVar2 == 0) || (*(char *)(lVar2 + 0x2d8) != '\x01')) ||
       (*(char *)(param_1 + 0x32bb) != '\0')) || ((*(byte *)(param_1 + 0x5a0) & 2) != 0)) ||
     (((*(longlong *)(param_1 + 0x3c50) != 0 &&
       (cVar1 = FUN_14030d2b6(*(longlong *)(param_1 + 0x3c50) + 0xd98,&DAT_14cbd96c0), cVar1 != '\0'
       )) || (cVar1 = FUN_14030d5d4(param_1), cVar1 != '\0')))) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xf40);
    if (lVar2 == 0) {
      if ((*(longlong *)(param_1 + 0x2370) == 0) ||
         (uVar3 = 1, 0xfffffffd < *(int *)(param_1 + 0x2378) - 1U)) {
        if (*(char *)(param_1 + 0x2368) == '\0') {
          uVar3 = (ulonglong)*(byte *)(param_1 + 0x23b8);
        }
        else {
          uVar3 = 1;
        }
      }
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x1990));
    }
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 14030e9e6 FUN_14030e9e6 body=544 status=ok
// SIG undefined FUN_14030e9e6(void)

void FUN_14030e9e6(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  code *local_70;
  undefined4 local_68;
  ulonglong local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 != '\0') || (*(char *)(param_1 + 0x32ba) == '\x01')) {
    *(undefined1 *)(param_1 + 0x32ba) = 0;
    lVar4 = *(longlong *)(param_1 + 0x430);
    if (lVar4 != 0) {
      if (DAT_14cae9568 == 0) {
        local_90 = &local_70;
        local_70 = FUN_1417de738;
        local_80 = &LAB_145893408;
        local_88 = &LAB_1458cbbd2;
        local_98 = &LAB_147ba21f1;
        local_a0 = &LAB_1463e9233;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x1000000c;
        local_c0 = 8;
        local_c8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar4 = *(longlong *)(param_1 + 0x430);
        if (lVar4 == 0) goto LAB_14030eb33;
      }
      if ((((DAT_14cae9568 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
          (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (((*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30 && (iVar1 = *(int *)(lVar4 + 0xe0), -1 < iVar1)) &&
          (plVar5 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))(), plVar5 != (longlong *)0x0)))
         ) {
        local_70 = (code *)0x14b99584c;
        local_68 = 0x10;
        local_64 = local_64 & 0xffffffffffffff00;
        uVar3 = FUN_14001a6c0(&local_70,1);
        local_70 = (code *)(ulonglong)uVar3;
        local_68 = CONCAT22(local_68._2_2_,0x303);
        local_64 = 0;
        uStack_5c = 0;
        local_54 = 0;
        uStack_4c = 0;
        local_44 = 0;
        uStack_3c = 0;
        local_34 = 0;
        fVar6 = *DAT_14cbcfb98;
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        local_2f = (undefined1)((uint)(int)ROUND(fVar6 * 255.0 + fVar6 * 255.0 + 0.5) >> 1);
        local_30 = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5,iVar1,&local_70);
      }
    }
  }
LAB_14030eb33:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14030ec08 FUN_14030ec08 body=335 status=ok
// SIG undefined FUN_14030ec08(void)

void FUN_14030ec08(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      if (lVar1 == 0) goto LAB_14030ed4a;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_14030ed4a:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14030ed6e FUN_14030ed6e body=1207 status=ok
// SIG undefined FUN_14030ed6e(void)

void FUN_14030ed6e(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5,char param_6)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar10 + 0x5c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x2f0);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar10 + 0x5c;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  *puVar10 = &PTR_FUN_14a312388;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0x3f80000000000000;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0x3f80000000000000;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0x3f80000000000000;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0x3f80000000000000;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0x3f80000000000000;
  puVar10[0x5a] = 0;
  puVar10[0x5b] = 0x3f80000000000000;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x4f] = 0;
  puVar10[0x50] = 0;
  plVar3 = (longlong *)(param_1 + 0x98);
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(plVar3,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar10;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar9 + 0x5c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x2f0);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar9 + 0x5c;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  *puVar9 = &PTR_FUN_14a312390;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x3f80000000000000;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0x3f80000000000000;
  puVar9[0x10] = 0;
  puVar9[0x11] = 0x3f80000000000000;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0x3f80000000000000;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0x3f80000000000000;
  puVar9[0x5a] = 0;
  puVar9[0x5b] = 0x3f80000000000000;
  puVar9[0x16] = 0;
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x4f] = 0;
  puVar9[0x50] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(plVar3,iVar4);
  }
  puVar8 = puVar10 + 2;
  *(undefined8 **)(*plVar3 + (longlong)iVar4 * 8) = puVar9;
  puVar2 = puVar9 + 2;
  if (param_6 == '\0') {
    *(undefined4 *)(puVar10 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0x3f800000;
    *(undefined4 *)(puVar10 + 3) = 0x3f800000;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = 0x3f800000;
    FUN_14030f3f1(param_1,puVar10 + 4);
  }
  else {
    if (*param_4 == 0) {
      *(undefined4 *)(puVar10 + 2) = 0x3f800000;
      *(undefined4 *)((longlong)puVar10 + 0x14) = 0x3f800000;
      *(undefined4 *)(puVar10 + 3) = 0x3f800000;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = 0x3f800000;
      FUN_14030f3f1(param_1,puVar10 + 4);
    }
    else {
      FUN_14030f225(param_1,puVar8,param_5,*param_4,param_4[2]);
    }
    if (param_4[1] != 0) {
      FUN_14030f30b(param_1,puVar2,param_5,param_4[1],param_4[3]);
      goto LAB_14030ef60;
    }
  }
  *(undefined4 *)(puVar9 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar9 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = 0x3f800000;
  FUN_14030f3f1(param_1,puVar9 + 4);
LAB_14030ef60:
  lVar6 = FUN_14494cb8a();
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar9 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x50);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 9;
  }
  *puVar1 = (ulonglong)puVar10;
  puVar9[1] = uVar5;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_14a1fb9b8;
  lVar7 = FUN_14494cb8a();
  puVar9[3] = puVar8;
  lVar6 = *(longlong *)(lVar7 + 0x48);
  puVar9[4] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  puVar9[5] = lVar7;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar9 + 0x3c) = 0;
  *puVar9 = &PTR_FUN_14a312398;
  puVar9[8] = puVar8;
  iVar4 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar4 * 8) = puVar9;
  *(int *)(puVar9 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  *param_2 = puVar9;
  lVar6 = FUN_14494cd32();
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x50);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar10 + 9;
  }
  *puVar1 = (ulonglong)puVar8;
  puVar10[1] = uVar5;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_14a1fb9b8;
  lVar7 = FUN_14494cd32();
  puVar10[3] = puVar2;
  lVar6 = *(longlong *)(lVar7 + 0x48);
  puVar10[4] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  puVar10[5] = lVar7;
  puVar10[6] = 0;
  *(undefined4 *)(puVar10 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar10 + 0x3c) = 0;
  *puVar10 = &PTR_FUN_14a3123a0;
  puVar10[8] = puVar2;
  iVar4 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar4 * 8) = puVar10;
  *(int *)(puVar10 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  *param_3 = puVar10;
  return;
}



// FUNCTION 14030f225 FUN_14030f225 body=229 status=ok
// SIG undefined FUN_14030f225(void)

void FUN_14030f225(undefined8 param_1,float *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_f8 [32];
  float *local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  float local_b0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(**(longlong **)(param_4 + 0x28) + 0x78))(*(longlong **)(param_4 + 0x28),&local_c8,0);
  dVar1 = *(double *)(param_3 + 0x1040);
  dVar2 = *(double *)(param_3 + 0x1038);
  *param_2 = (float)(*(double *)(param_3 + 0x1030) + local_c8);
  param_2[1] = (float)(dVar2 + local_c0);
  param_2[2] = (float)(dVar1 + local_b8);
  param_2[3] = local_b0;
  local_d8 = param_2 + 4;
  FUN_14494ceda(param_1,param_3,param_4,param_5);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030f30b FUN_14030f30b body=229 status=ok
// SIG undefined FUN_14030f30b(void)

void FUN_14030f30b(undefined8 param_1,float *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_f8 [32];
  float *local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  float local_b0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(**(longlong **)(param_4 + 0x28) + 0x78))(*(longlong **)(param_4 + 0x28),&local_c8,0);
  dVar1 = *(double *)(param_3 + 0x1040);
  dVar2 = *(double *)(param_3 + 0x1038);
  *param_2 = (float)(*(double *)(param_3 + 0x1030) + local_c8);
  param_2[1] = (float)(dVar2 + local_c0);
  param_2[2] = (float)(dVar1 + local_b8);
  param_2[3] = local_b0;
  local_d8 = param_2 + 4;
  FUN_14494ceda(param_1,param_3,param_4,param_5);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030f3f1 FUN_14030f3f1 body=460 status=ok
// SIG undefined FUN_14030f3f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14030f3f1(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(local_30,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar3 = _DAT_14c846288;
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar1 != 0)) {
    puVar4 = (undefined8 *)(lVar1 + 8);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  uVar2 = puVar4[7];
  param_2[6] = _DAT_14c846280;
  param_2[7] = uVar3;
  uVar3 = _DAT_14c846278;
  param_2[4] = _DAT_14c846270;
  param_2[5] = uVar3;
  uVar3 = _DAT_14c846268;
  param_2[2] = _DAT_14c846260;
  param_2[3] = uVar3;
  uVar3 = DAT_14c846258;
  *param_2 = _DAT_14c846250;
  param_2[1] = uVar3;
  param_2[8] = 0x3f800000;
  param_2[9] = 0x3f80000000000000;
  param_2[10] = 0x3f800000;
  param_2[0xb] = 0x3f80000000000000;
  param_2[0xc] = 0x3f800000;
  param_2[0xd] = 0x3f80000000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x4a) = 0;
  uVar3 = _DAT_14c846288;
  param_2[0x54] = _DAT_14c846280;
  param_2[0x55] = uVar3;
  uVar3 = _DAT_14c846278;
  param_2[0x52] = _DAT_14c846270;
  param_2[0x53] = uVar3;
  uVar3 = _DAT_14c846268;
  param_2[0x50] = _DAT_14c846260;
  param_2[0x51] = uVar3;
  uVar3 = DAT_14c846258;
  param_2[0x4e] = _DAT_14c846250;
  param_2[0x4f] = uVar3;
  param_2[0x56] = 0x3f800000;
  param_2[0x57] = 0x3f80000000000000;
  param_2[0x12] = *puVar4;
  param_2[0x4b] = *(undefined8 *)(DAT_14ca94e18 + 0x10);
  param_2[0x13] = DAT_14c9c0d80;
  param_2[0x4c] = DAT_14c9c0de0;
  memset(param_2 + 0x18,0,0x180);
  *(undefined4 *)(param_2 + 0x48) = 0x3f800000;
  param_2[0x14] = uVar2;
  param_2[0x15] = uVar2;
  param_2[0x16] = DAT_14c9c0dc8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030f5be FUN_14030f5be body=1591 status=ok
// SIG undefined FUN_14030f5be(void)

double * FUN_14030f5be(longlong param_1,double *param_2,float *param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar3;
  double dVar5;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  longlong lVar37;
  longlong *plVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  float fVar52;
  double dVar2;
  double dVar4;
  double dVar6;
  
  if (param_4 == (undefined8 *)0x0) {
    fVar39 = 16384.0;
    if (*(int *)(param_1 + 0x99c) != -1) {
      fVar40 = 16384.0;
      goto LAB_14030f677;
    }
    fVar40 = 16384.0;
    if (*(longlong *)(param_1 + 0xb50) != 0) goto LAB_14030f677;
    plVar38 = *(longlong **)(param_1 + 0x28);
    if (plVar38 == (longlong *)0x0) {
      plVar38 = (longlong *)**(longlong **)(param_1 + 0x18);
    }
    lVar37 = (**(code **)(*plVar38 + 0x10))();
    param_4 = (undefined8 *)(lVar37 + 0x2c);
  }
  fVar39 = (float)(int)*param_4;
  fVar40 = (float)(int)((ulonglong)*param_4 >> 0x20);
LAB_14030f677:
  fVar39 = 1.0 / fVar39;
  uVar7 = *(uint *)(param_1 + 0x958);
  fVar40 = 1.0 / fVar40;
  uVar8 = *(uint *)(param_1 + 0x95c);
  dVar31 = (double)*(float *)(param_1 + 0x1e0);
  dVar12 = (double)*(float *)(param_1 + 0x1e4);
  dVar51 = (double)*(float *)(param_1 + 0x1e8);
  dVar43 = (double)*(float *)(param_1 + 0x1ec);
  dVar44 = (double)*(float *)(param_1 + 0x1f0);
  dVar45 = (double)*(float *)(param_1 + 500);
  dVar14 = (double)*(float *)(param_1 + 0x1f8);
  dVar46 = (double)*(float *)(param_1 + 0x1fc);
  dVar47 = (double)*(float *)(param_1 + 0x200);
  dVar16 = (double)*(float *)(param_1 + 0x204);
  dVar28 = (double)*(float *)(param_1 + 0x208);
  dVar18 = (double)*(float *)(param_1 + 0x20c);
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar3 = *(double *)(param_1 + 0x50);
  dVar4 = *(double *)(param_1 + 0x50);
  dVar5 = *(double *)(param_1 + 0x58);
  dVar6 = *(double *)(param_1 + 0x58);
  fVar50 = (float)uVar7 * 0.5 * fVar39;
  fVar52 = (float)uVar8 * 0.5 * fVar40;
  dVar48 = dVar47 * dVar5 + dVar44 * dVar3 + dVar31 * dVar1 + (double)*(float *)(param_1 + 0x210);
  dVar49 = dVar16 * dVar6 + dVar45 * dVar4 + dVar12 * dVar2 + (double)*(float *)(param_1 + 0x214);
  dVar33 = (double)*(float *)(param_1 + 0x210) * 0.0;
  dVar34 = (double)*(float *)(param_1 + 0x214) * 0.0;
  dVar29 = dVar28 * dVar5 + dVar14 * dVar3 + dVar51 * dVar1 + (double)*(float *)(param_1 + 0x218);
  dVar30 = dVar18 * dVar6 + dVar46 * dVar4 + dVar43 * dVar2 + (double)*(float *)(param_1 + 0x21c);
  dVar5 = (double)*(float *)(param_1 + 0x218) * 0.0;
  dVar6 = (double)*(float *)(param_1 + 0x21c) * 0.0;
  dVar35 = dVar31 + dVar44 * 0.0 + dVar47 * 0.0 + dVar33;
  dVar36 = dVar12 + dVar45 * 0.0 + dVar16 * 0.0 + dVar34;
  dVar19 = dVar51 + dVar14 * 0.0 + dVar28 * 0.0 + dVar5;
  dVar20 = dVar43 + dVar46 * 0.0 + dVar18 * 0.0 + dVar6;
  dVar25 = dVar31 * 0.0 + dVar44 + dVar47 * 0.0 + dVar33;
  dVar26 = dVar12 * 0.0 + dVar45 + dVar16 * 0.0 + dVar34;
  dVar22 = dVar51 * 0.0 + dVar14 + dVar28 * 0.0 + dVar5;
  dVar23 = dVar43 * 0.0 + dVar46 + dVar18 * 0.0 + dVar6;
  dVar33 = dVar31 * 0.0 + dVar44 * 0.0 + dVar47 + dVar33;
  dVar34 = dVar12 * 0.0 + dVar45 * 0.0 + dVar16 + dVar34;
  dVar5 = dVar51 * 0.0 + dVar14 * 0.0 + dVar28 + dVar5;
  dVar6 = dVar43 * 0.0 + dVar46 * 0.0 + dVar18 + dVar6;
  iVar9 = *(int *)(param_1 + 0x950);
  iVar10 = *(int *)(param_1 + 0x954);
  iVar11 = *(int *)(param_1 + 0x960);
  fVar41 = (float)(uint)(iVar11 + iVar10) * fVar40;
  dVar2 = (double)(fVar41 + fVar52);
  fVar42 = (float)(uint)(iVar9 + iVar11) * fVar39;
  dVar31 = (double)(fVar42 + fVar50);
  dVar1 = (double)-fVar52;
  dVar4 = (double)fVar50;
  dVar44 = (double)*(float *)(param_1 + 0x2a0);
  dVar14 = dVar20 * 1.0 + dVar19 * 0.0 + dVar36 * 0.0 + dVar35 * 0.0;
  dVar3 = dVar23 * dVar2 + dVar22 * 0.0 + dVar1 * dVar26 + dVar25 * 0.0;
  dVar16 = dVar23 * 1.0 + dVar22 * 0.0 + dVar26 * 0.0 + dVar25 * 0.0;
  dVar18 = dVar6 * dVar2 + dVar5 * 0.0 + dVar1 * dVar34 + dVar33 * 0.0;
  dVar12 = dVar6 * 1.0 + dVar5 * 0.0 + dVar34 * 0.0 + dVar33 * 0.0;
  dVar43 = dVar2 * dVar30 + dVar29 * 0.0 + dVar1 * dVar49 + dVar48 * 0.0;
  dVar28 = dVar30 * 1.0 + dVar29 * 0.0 + dVar49 * 0.0 + dVar48 * 0.0;
  *param_2 = dVar20 * dVar31 + dVar19 * 0.0 + dVar36 * 0.0 + dVar35 * dVar4;
  param_2[1] = dVar20 * dVar2 + dVar19 * 0.0 + dVar1 * dVar36 + dVar35 * 0.0;
  auVar17._8_4_ = SUB84(dVar14,0);
  auVar17._0_8_ = dVar20 * 0.0 + dVar19 * dVar44 + dVar36 * 0.0 + dVar35 * 0.0;
  auVar17._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar17;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar23 * dVar31 + dVar22 * 0.0 + dVar26 * 0.0 + dVar25 * dVar4;
  auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar13;
  auVar21._8_4_ = SUB84(dVar16,0);
  auVar21._0_8_ = dVar23 * 0.0 + dVar22 * dVar44 + dVar26 * 0.0 + dVar25 * 0.0;
  auVar21._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 6) = auVar21;
  auVar24._8_4_ = SUB84(dVar18,0);
  auVar24._0_8_ = dVar6 * dVar31 + dVar5 * 0.0 + dVar34 * 0.0 + dVar33 * dVar4;
  auVar24._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar24;
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._0_8_ = dVar6 * 0.0 + dVar5 * dVar44 + dVar34 * 0.0 + dVar33 * 0.0;
  auVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar15;
  auVar32._8_4_ = SUB84(dVar43,0);
  auVar32._0_8_ = dVar31 * dVar30 + dVar29 * 0.0 + dVar49 * 0.0 + dVar48 * dVar4;
  auVar32._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0xc) = auVar32;
  auVar27._8_4_ = SUB84(dVar28,0);
  auVar27._0_8_ = dVar30 * 0.0 + dVar29 * dVar44 + dVar49 * 0.0 + dVar48 * 0.0;
  auVar27._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0xe) = auVar27;
  *param_3 = fVar42;
  param_3[1] = fVar41;
  param_3[2] = (float)(uVar7 + iVar11 * 2 + iVar9) * fVar39;
  param_3[3] = (float)(uVar8 + iVar10 + iVar11 * 2) * fVar40;
  return param_2;
}



// FUNCTION 14030fbf6 FUN_14030fbf6 body=31 status=ok
// SIG undefined FUN_14030fbf6(void)

undefined8 FUN_14030fbf6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_2 + 8);
    }
    uVar1 = FUN_14030fc16(param_1,puVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14030fc16 FUN_14030fc16 body=90 status=ok
// SIG undefined FUN_14030fc16(void)

undefined1 FUN_14030fc16(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = DAT_14cb1aeb8;
  lVar1 = DAT_14cb1aeb8;
  if (param_1 != 0) {
    while (lVar1 != 0) {
      piVar3 = *(int **)(param_1 + 8);
      if (piVar3 == (int *)0x0) {
        piVar3 = &DAT_14c9485f0;
      }
      if (*piVar3 == *param_2) {
        return 1;
      }
      param_1 = FUN_14030fc70(lVar2,param_1);
      lVar1 = param_1;
    }
  }
  return 0;
}



// FUNCTION 14030fc70 FUN_14030fc70 body=598 status=ok
// SIG undefined FUN_14030fc70(void)

undefined8 FUN_14030fc70(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    plVar9 = (longlong *)(param_2 + 8);
    if (*(char *)(param_2 + 0x10) == '\0') {
LAB_14030fde2:
      if (*plVar9 != 0) {
        FUN_14030ff28(param_1,&local_48,*plVar9 + 0x48);
        if ((((int)local_48 != 0) && (local_48._4_4_ != 0)) && ((int)local_48 != DAT_14c948000)) {
          uVar7 = FUN_144837462(param_1,&local_48);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
          goto LAB_14030fdb0;
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else if (*(char *)(param_2 + 0x10) == '\x02') {
      plVar9 = (longlong *)(*plVar9 + 0x30);
      goto LAB_14030fde2;
    }
  }
  else {
    piVar4 = *(int **)(param_2 + 8);
    if (piVar4 == (int *)0x0) {
      piVar4 = &DAT_14c9485f0;
    }
    if (((*piVar4 == 0) || (iVar2 = piVar4[1], iVar2 == 0)) || (*piVar4 == DAT_14c948000)) {
LAB_14030fe5c:
      local_40 = DAT_14c948620;
      local_48 = DAT_14c948618;
    }
    else {
      if ((iVar2 < 2) && (piVar4[9] < 1)) {
        puVar5 = (ulonglong *)(piVar4 + 2);
      }
      else {
        puVar5 = *(ulonglong **)(piVar4 + 6);
      }
      if (iVar2 < 1) goto LAB_14030fe5c;
      local_40 = (int)puVar5[1];
      local_48 = *puVar5;
    }
    param_1 = param_1 + 0x72;
    uVar8 = local_48 & 0xffffffff;
    if (local_40 != 0) {
      uVar3 = FUN_144a78877(uVar8,local_40);
      uVar8 = (ulonglong)uVar3;
    }
    iVar2 = FUN_14030fec8(param_1,uVar8,&local_48);
    if (iVar2 != -1) {
      piVar4 = &DAT_14c9485f0;
      if (*(int **)(param_2 + 8) != (int *)0x0) {
        piVar4 = *(int **)(param_2 + 8);
      }
      if (((*piVar4 == 0) || (iVar2 = piVar4[1], iVar2 == 0)) || (*piVar4 == DAT_14c948000)) {
LAB_14030fe72:
        local_40 = DAT_14c948620;
        local_48 = DAT_14c948618;
      }
      else {
        if ((iVar2 < 2) && (piVar4[9] < 1)) {
          puVar5 = (ulonglong *)(piVar4 + 2);
        }
        else {
          puVar5 = *(ulonglong **)(piVar4 + 6);
        }
        if (iVar2 < 1) goto LAB_14030fe72;
        local_40 = (int)puVar5[1];
        local_48 = *puVar5;
      }
      uVar8 = local_48 & 0xffffffff;
      if (local_40 != 0) {
        uVar3 = FUN_144a78877(uVar8,local_40);
        uVar8 = (ulonglong)uVar3;
      }
      iVar2 = FUN_14030fec8(param_1,uVar8,&local_48);
      if (iVar2 == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = (longlong)iVar2 * 0x20 + *param_1;
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      goto LAB_14030fdb0;
    }
  }
  uVar7 = 0;
LAB_14030fdb0:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14030fec8 FUN_14030fec8 body=95 status=ok
// SIG undefined FUN_14030fec8(void)

int FUN_14030fec8(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14030ff28 FUN_14030ff28 body=368 status=ok
// SIG undefined FUN_14030ff28(void)

undefined8 FUN_14030ff28(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((byte *)*param_3 == (byte *)0x0) || ((~*(byte *)*param_3 & 3) != 0)) {
    FUN_1447a97f4(param_2,&DAT_14c9485f0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_48);
  if (((local_48 == 0) || (local_44 == 0)) || (local_48 == DAT_14c948000)) {
    puVar4 = &DAT_14c9485f0;
  }
  else {
    pbVar2 = (byte *)*param_3;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar3 = &DAT_14c9a1288;
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
        plVar5 = plVar3 + 8;
        if ((longlong *)plVar3[9] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar3[9];
        }
        iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_48) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_48) {
              if (((lVar1 != 0) && (plVar3 = (longlong *)(lVar1 + 0x28), plVar3 != (longlong *)0x0))
                 && (((byte *)*plVar3 != (byte *)0x0 && ((*(byte *)*plVar3 & 0x40) == 0))))
              goto LAB_14030fffc;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    plVar3 = &DAT_14c9a1308;
LAB_14030fffc:
    puVar4 = &DAT_14c9a12e0;
    if (*plVar3 != 0) {
      puVar4 = (undefined4 *)FUN_140625092(*plVar3,&DAT_14c9a12e0);
    }
  }
  FUN_1447a97f4(param_2,puVar4);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14031009c caseD_d body=55 status=ok
// SIG undefined caseD_d(void)

void switchD_14013128b::caseD_d(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_1403100d4(uVar1,param_1 + 8,*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



// FUNCTION 1403100d4 FUN_1403100d4 body=129 status=ok
// SIG undefined FUN_1403100d4(void)

undefined8 * FUN_1403100d4(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_149e064f0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  if (param_4 == 0) {
    lVar1 = -1;
  }
  else {
    FUN_14274e1bc(param_1 + 2,param_4);
    lVar1 = -(ulonglong)(*(byte *)((longlong)param_1 + 0x54) & 1);
  }
  param_1[1] = lVar1;
  *param_1 = &PTR_FUN_149e69960;
  if (param_3 != 0) {
    param_1[1] = param_3;
  }
  FUN_14009bf40(param_1);
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return param_1;
}



// FUNCTION 140310156 FUN_140310156 body=354 status=ok
// SIG undefined FUN_140310156(void)

void FUN_140310156(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 2;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403101da;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1403101da:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 1)) {
    uVar7 = uVar5 >> 1 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,2,2);
  return;
}



// FUNCTION 1403102ba FUN_1403102ba body=457 status=ok
// SIG undefined FUN_1403102ba(void)

undefined8 FUN_1403102ba(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [40];
  code *local_78 [2];
  longlong *local_68 [2];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar6 = *(int *)(param_1 + 0x68);
  local_78[0] = *(code **)(param_1 + 0x70);
  local_68[0] = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar3 = (undefined8 *)(param_1 + 0x90);
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x80);
    }
    (**(code **)*puVar3)(puVar3,local_68);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((*(char *)(param_1 + 0x5c) != '\0') || (lVar1 == 0)) {
    iVar6 = *(int *)(param_1 + 0xb0);
    FUN_1403223d2(local_78,param_1 + 0xc0);
  }
  if (iVar6 == 0) {
    FUN_14031058e(param_1);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if ((*(int *)(param_1 + 0x58) < 1) && ((param_3 == '\0' || (DAT_14cb0a468 < 1)))) {
      if (*(char *)(param_1 + 0x5d) == '\x01') {
        *(undefined1 *)(param_1 + 0x5d) = 0;
      }
      else {
        if (iVar6 == param_2) {
          FUN_14031058e(param_1);
          FUN_140310484(local_a0,lVar1,param_2);
          pcVar2 = local_78[0];
          plVar4 = local_68[0];
          if (local_68[0] == (longlong *)0x0) {
            plVar4 = local_58;
          }
          uVar5 = (**(code **)(*plVar4 + 8))();
          (*pcVar2)(uVar5,local_a0);
        }
        else {
          uVar5 = 2;
          if (iVar6 == 2) {
            if (*(int *)(param_1 + 0x48) != 0) goto LAB_1403103c8;
            FUN_1403104fe(param_1);
          }
          else if (iVar6 == 1) {
            if ((*(int *)(param_1 + 0x44) != 0) || (DAT_14ca9a438 != '\x01')) goto LAB_1403103c8;
            FUN_14031076c(param_1);
          }
          else {
            if ((iVar6 != 3) || (*(int *)(param_1 + 0x40) != 0)) goto LAB_1403103c8;
            FUN_14371c8b2(param_1);
          }
        }
        uVar5 = 3;
      }
    }
  }
LAB_1403103c8:
  if (local_78[0] != (code *)0x0) {
    plVar4 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140310484 FUN_140310484 body=121 status=ok
// SIG undefined FUN_140310484(void)

longlong * FUN_140310484(longlong *param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  if ((param_2 != 0) && (lVar2 = FUN_1448463c0(param_2), lVar2 != 0)) {
    plVar3 = (longlong *)FUN_1447b4020(*param_1);
    lVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return param_1;
    }
    bVar1 = *(byte *)(lVar2 + 0x5b);
    param_1[2] = (ulonglong)*(byte *)(lVar2 + 0x5c) * 8 +
                 *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x18);
    *(uint *)(param_1 + 3) = (uint)bVar1;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1403104fe FUN_1403104fe body=144 status=ok
// SIG undefined FUN_1403104fe(void)

void FUN_1403104fe(longlong param_1)

{
  longlong *plVar1;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  plVar1 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar1[1] = 0;
  *plVar1 = (longlong)&PTR_FUN_14aac25f0;
  plVar1[2] = param_1;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    UNLOCK();
  }
  if (DAT_14c8442c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014031055d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c8442c0 + 0x18))(DAT_14c8442c0,plVar1,3);
    return;
  }
  FUN_140126962(plVar1 + 2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140310583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14031058e FUN_14031058e body=476 status=ok
// SIG undefined FUN_14031058e(void)

void FUN_14031058e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_98 = *(longlong *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  local_88 = *(longlong **)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  local_38 = *(undefined8 *)(param_1 + 0x90);
  uStack_30 = *(undefined8 *)(param_1 + 0x98);
  local_28 = *(undefined8 *)(param_1 + 0xa0);
  uStack_20 = *(undefined8 *)(param_1 + 0xa8);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_8c,uStack_90);
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
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    uStack_50 = uVar1;
    uStack_40 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    local_28 = uVar5;
    uStack_20 = uVar6;
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_98 = *(longlong *)(param_1 + 0xc0);
  uStack_50 = *(undefined8 *)(param_1 + 200);
  local_88 = *(longlong **)(param_1 + 0xd0);
  uStack_40 = *(undefined8 *)(param_1 + 0xd8);
  local_38 = *(undefined8 *)(param_1 + 0xe0);
  uStack_30 = *(undefined8 *)(param_1 + 0xe8);
  local_28 = *(undefined8 *)(param_1 + 0xf0);
  uStack_20 = *(undefined8 *)(param_1 + 0xf8);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0xe0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(ulonglong *)(param_1 + 200) = CONCAT44(uStack_8c,uStack_90);
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
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031076c FUN_14031076c body=1263 status=ok
// SIG undefined FUN_14031076c(void)

void FUN_14031076c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  LOCK();
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  UNLOCK();
  piVar1 = (int *)(param_1 + 100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1403107b5;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1403107ba;
      goto LAB_140310837;
    }
  }
  else {
LAB_1403107b5:
    if (iVar6 != 0x10) {
LAB_140310837:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1403107ba;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1403107ba;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140310997;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14371f534);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_140310997:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140310a17;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140310a17:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aac25d8;
        puVar16[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aac2580;
        local_68[0] = FUN_143720c5a;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"RenderAssetUpdateCommand",&DAT_14cb0a8b8);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1403108d6;
    }
  }
LAB_1403107ba:
  FUN_1449b3b46(param_1,1);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((((*piVar1 == 0) && (*(int *)(param_1 + 0x60) == 0)) && (param_1 != 0)) &&
     (*(int *)(param_1 + 0x58) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
LAB_1403108d6:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140310cda FUN_140310cda body=40 status=ok
// SIG undefined FUN_140310cda(void)

void FUN_140310cda(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(lVar1 + 0x6d0);
  }
  return;
}



// FUNCTION 140310d02 FUN_140310d02 body=21 status=ok
// SIG undefined FUN_140310d02(void)

undefined8 FUN_140310d02(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140310d18 FUN_140310d18 body=475 status=ok
// SIG undefined FUN_140310d18(void)

void FUN_140310d18(longlong param_1,ulonglong param_2,longlong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar8 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x118);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & (uVar7 >> 0x10 ^ uVar7)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
        if (*puVar2 == param_2) {
          if ((puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) &&
             (plVar3 = (longlong *)puVar2[1], plVar3 != (longlong *)0x0)) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            lVar8 = (**(code **)(*plVar3 + 0x30))();
            iVar6 = *(int *)(param_1 + 0x154) + -1;
            if (*(int *)(param_1 + 0x154) == 0) {
              iVar6 = 0;
            }
            *(int *)(param_1 + 0x154) = iVar6;
            lVar4 = DAT_14cc28e58;
            if (lVar8 != 0) {
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60) == 0x40000002) {
                uVar9 = 0;
              }
              else {
                bVar5 = FUN_144a61b4f();
                uVar9 = (ulonglong)(bVar5 ^ 1);
              }
              if ((*(int *)(lVar4 + uVar9 * 4) != 0) &&
                 (*(longlong *)(param_1 + 0x148) =
                       *(longlong *)(param_1 + 0x148) + (ulonglong)(*(int *)(lVar8 + 0xa4) == 1),
                 *(int *)(param_1 + 0x154) != 0)) {
                local_38 = *param_3;
                if (local_38 != 0) {
                  LOCK();
                  *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
                  UNLOCK();
                }
                FUN_14465bae0(lVar8,&local_38);
              }
            }
            *(undefined1 *)(param_1 + 0x158) = 0;
            LOCK();
            puVar1 = (uint *)(plVar3 + 1);
            uVar7 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar7 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
            }
            goto LAB_140310d5e;
          }
          break;
        }
        iVar6 = (int)puVar2[2];
      } while (iVar6 != -1);
    }
  }
  iVar6 = *(int *)(param_1 + 0x154) + -1;
  if (*(int *)(param_1 + 0x154) == 0) {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x154) = iVar6;
  *(undefined1 *)(param_1 + 0x158) = 0;
LAB_140310d5e:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140310f08 FUN_140310f08 body=1207 status=ok
// SIG undefined FUN_140310f08(void)

void FUN_140310f08(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  code *pcVar13;
  byte bVar14;
  int iVar15;
  byte bVar16;
  undefined1 *puVar17;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar9 = *(longlong **)(param_2 + 0xc0);
  do {
    if (plVar9 == (longlong *)0x0) {
LAB_140311243:
      if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    plVar5 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9,*(undefined4 *)(param_1 + 0x20));
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x288))(plVar5,&local_b8);
      if (((ushort)local_b8 >> 10 & 1) == 0) goto LAB_140311243;
      uVar1 = *(uint *)(param_2 + 0xe4);
      pcVar8 = *(code **)(*plVar5 + 0x38);
      plVar12 = plVar5;
      local_e0 = param_3;
      if (pcVar8 == FUN_144765e18) {
        plVar12 = (longlong *)plVar5[9];
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)plVar5[8];
          pcVar8 = *(code **)(*plVar12 + 0x420);
          pcVar13 = (code *)&LAB_144b24e8a;
        }
        else {
          pcVar8 = *(code **)(*plVar12 + 0x420);
          pcVar13 = (code *)&LAB_14497e108;
        }
        if (pcVar8 != pcVar13) goto LAB_14031132b;
      }
      else {
LAB_14031132b:
        (*pcVar8)(plVar12);
      }
      lVar6 = *plVar5;
      if (*(code **)(lVar6 + 0x100) == (code *)&LAB_144b25520) {
        bVar14 = (*(byte *)(plVar5[8] + 0x1d0) & 0x40) >> 6;
      }
      else {
        bVar14 = (**(code **)(lVar6 + 0x100))(plVar5);
        lVar6 = *plVar5;
      }
      pcVar8 = *(code **)(lVar6 + 0x38);
      plVar12 = plVar5;
      local_d8 = param_4;
      if (pcVar8 == FUN_144765e18) {
        plVar12 = (longlong *)plVar5[9];
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)plVar5[8];
          pcVar8 = *(code **)(*plVar12 + 0x420);
          if (pcVar8 != (code *)&LAB_144b24e8a) goto LAB_140311345;
          bVar16 = *(byte *)(plVar12 + 0x30);
        }
        else {
          pcVar8 = *(code **)(*plVar12 + 0x420);
          if (pcVar8 != (code *)&LAB_14497e108) goto LAB_140311345;
          bVar16 = *(byte *)(plVar12 + 0x2a);
        }
        bVar16 = (bVar16 & 0x10) >> 4;
      }
      else {
LAB_140311345:
        bVar16 = (*pcVar8)(plVar12);
      }
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      uVar7 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
      local_f8 = local_f8 & 0xffffffffffffff00;
      local_100 = &local_a8;
      local_108 = &local_b8;
      local_118 = local_118 & 0xffffffffffffff00;
      local_120 = (longlong *)((ulonglong)local_120 & 0xffffffffffffff00);
      local_110 = (longlong *)((ulonglong)local_110 & 0xffffffff00000000);
      local_128 = (longlong *)CONCAT71(local_128._1_7_,1);
      cVar3 = FUN_1403113c0(plVar5,uVar7,0,uVar2);
      param_3 = local_e0;
      param_4 = local_d8;
      if (cVar3 != '\0') {
        iVar4 = 2 - (uint)((uVar1 >> 0xc & 1) != 0);
        if (bVar14 != 0) {
          iVar4 = 1;
        }
        iVar15 = 2 - (uint)((uVar1 & 0x40) == 0);
        if (bVar16 != 0) {
          iVar15 = 0;
        }
        if ((char)uVar1 < '\0') {
          iVar15 = 0;
        }
        local_c0 = 0;
        lVar6 = *(longlong *)(param_1 + 0x28);
        local_d0 = DAT_14ca44d40;
        local_c8 = DAT_14ca44d68;
        if (lVar6 != 0) {
          if (-1 < (int)param_5 && (uVar1 >> 0x18 & 1) != 0) {
            lVar11 = lVar6 + 0x3208;
            if (*(longlong *)(lVar6 + 0x3218) != 0) {
              lVar11 = *(longlong *)(lVar6 + 0x3218);
            }
            if ((*(uint *)(lVar11 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) == 0) {
              lVar11 = lVar6 + 0x3228;
              if (*(longlong *)(lVar6 + 0x3238) != 0) {
                lVar11 = *(longlong *)(lVar6 + 0x3238);
              }
              if ((*(uint *)(lVar11 + (ulonglong)(param_5 >> 5) * 4) & 1 << ((byte)param_5 & 0x1f))
                  == 0) goto LAB_140311178;
              lVar11 = 0x31c8;
            }
            else {
              lVar11 = 0x31d0;
            }
            local_c8 = *(undefined8 *)(lVar6 + lVar11);
          }
LAB_140311178:
          if (local_d8 != 0) {
            uVar1 = *(uint *)(*(longlong *)(local_d8 + 0x218) + 0x158);
            if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar6 + 0x31c0))) {
              puVar17 = &DAT_000031a8 + lVar6;
              if (*(undefined1 **)(lVar6 + 0x31b8) != (undefined1 *)0x0) {
                puVar17 = *(undefined1 **)(lVar6 + 0x31b8);
              }
              if ((*(uint *)(puVar17 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
                local_d0 = *(undefined8 *)(*(longlong *)(lVar6 + 0x3198) + (ulonglong)uVar1 * 8);
              }
            }
          }
        }
        if (local_b8 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulonglong)*(uint *)(local_b8 + 0xdc);
        }
        local_110 = &local_b8;
        if (local_a8 == 0) {
          local_f8 = 0;
        }
        else {
          local_f8 = (ulonglong)*(uint *)(local_a8 + 0xdc) << 0x20;
        }
        local_f8 = local_f8 | uVar10;
        local_118 = param_1 + 0x40;
        local_e8 = &local_d0;
        local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar15);
        local_108 = (longlong *)CONCAT44(local_108._4_4_,iVar4);
        local_f0 = 0;
        local_128 = plVar9;
        local_120 = plVar5;
        FUN_140077a6a(param_1,param_2,local_e0);
        goto LAB_140311243;
      }
    }
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9,*(undefined4 *)(param_1 + 0x20));
  } while( true );
}



// FUNCTION 1403113c0 FUN_1403113c0 body=1601 status=ok
// SIG undefined FUN_1403113c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1403113c0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,char param_5,
             char param_6,char param_7,int param_8,longlong *param_9,longlong *param_10,
             byte param_11)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  undefined8 unaff_R14;
  ulonglong uVar5;
  undefined *puVar6;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  wchar_t *local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  code *local_198;
  code *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0 [8];
  undefined8 auStack_d8 [12];
  uint auStack_78 [12];
  ulonglong local_48;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_5);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_3 != 0) {
    switch(param_3) {
    case 1:
      local_1a0 = CONCAT31(local_1a0._1_3_,param_11);
      local_1a8 = param_10;
      local_1b0 = (wchar_t *)param_9;
      local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,param_8);
      FUN_147130e72(param_1,param_2,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
      break;
    case 2:
      local_1a0 = CONCAT31(local_1a0._1_3_,param_11);
      local_1a8 = param_10;
      local_1b0 = (wchar_t *)param_9;
      local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,param_8);
      FUN_147130fe0(param_1,param_2,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
      break;
    case 3:
      local_1a0 = CONCAT31(local_1a0._1_3_,param_11);
      local_1a8 = param_10;
      local_1b0 = (wchar_t *)param_9;
      local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,param_8);
      FUN_14713114e(param_1,param_2,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
      break;
    case 4:
      local_1a0 = CONCAT31(local_1a0._1_3_,param_11);
      local_1a8 = param_10;
      local_1b0 = (wchar_t *)param_9;
      local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,param_8);
      FUN_1471312bc(param_1,param_2,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
      break;
    case 5:
      local_1a0 = CONCAT31(local_1a0._1_3_,param_11);
      local_1a8 = param_10;
      local_1b0 = (wchar_t *)param_9;
      local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,param_8);
      FUN_14713142a(param_1,param_2,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
      break;
    case 6:
      local_1a0 = CONCAT31(local_1a0._1_3_,param_11);
      local_1a8 = param_10;
      local_1b0 = (wchar_t *)param_9;
      local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,param_8);
      FUN_147131598(param_1,param_2,uVar5 & 0xffffffff,uVar4 & 0xffffffff);
      break;
    default:
      uVar2 = 0;
      goto LAB_140311572;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1d8);
  }
  memset(local_e0,0,0x98);
  if (param_9 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9af888) && (FUN_144b3d300(&DAT_14c9af888), DAT_14c9af888 == -1)) {
      FUN_1456c20ee();
      local_170 = &LAB_14712ac08;
      local_178 = &LAB_14712ac0c;
      local_180 = &LAB_14712cb18;
      local_188 = FUN_14027001e;
      local_190 = FUN_14712cb1c;
      local_198 = FUN_14712cb44;
      local_1b0 = L"Main";
      local_1b8 = L"/Engine/Private/BasePassVertexShader.usf";
      local_160 = 0;
      local_168 = 0x110;
      local_1a0 = 1;
      local_1a8 = (longlong *)((ulonglong)local_1a8 & 0xffffffff00000000);
      FUN_140db5666(&DAT_14c9af7e0,2,&DAT_14c9af778,L"TBasePassVSFNoLightMapPolicy");
      _DAT_14c9af7e0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c40f);
      _Init_thread_footer(&DAT_14c9af888);
    }
    auStack_d8[DAT_14c9af828] = &DAT_14c9af7e0;
    auStack_78[DAT_14c9af828] = 0;
  }
  if (param_10 != (longlong *)0x0) {
    if (param_8 == 0) {
      if (param_5 == '\0') {
        if (param_7 == '\0') {
          if (param_6 == '\0') {
            puVar6 = &DAT_14c9afa30;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9afad8) && (FUN_144b3d300(&DAT_14c9afad8), DAT_14c9afad8 == -1))
            {
              FUN_1456c1f9a();
              local_170 = &LAB_14712ac08;
              local_178 = &LAB_14712ac0c;
              local_180 = &LAB_14712ceac;
              local_188 = FUN_14174dd98;
              local_190 = FUN_14712ceb0;
              local_198 = FUN_14712ced8;
              local_1b0 = L"MainPS";
              local_1b8 = L"/Engine/Private/BasePassPixelShader.usf";
              local_160 = 0;
              local_168 = 0x110;
              local_1a0 = 2;
              local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,3);
              puVar6 = &DAT_14c9afa30;
              FUN_140db5666(&DAT_14c9afa30,2,&DAT_14c9af9c8,L"TBasePassPSFNoLightMapPolicy");
              _DAT_14c9afa30 = &PTR_FUN_14a1fb500;
              atexit((_func_5014 *)&LAB_142b7c427);
              puVar3 = &DAT_14c9afad8;
              goto LAB_1403118a9;
            }
          }
          else {
            FUN_140078d84();
            puVar6 = &DAT_14c9afed0;
          }
        }
        else {
          FUN_1460c2318();
          puVar6 = &DAT_14c9b6118;
        }
      }
      else if (param_6 == '\0') {
        puVar6 = &DAT_14c9af908;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9af9b0) &&
           (FUN_144b3d300(&DAT_14c9af9b0), DAT_14c9af9b0 == -1)) {
          FUN_1456c2242();
          local_170 = &LAB_14712ac08;
          local_178 = &LAB_14712ac0c;
          local_180 = &LAB_14712cce2;
          local_188 = FUN_14174d9f0;
          local_190 = FUN_14712cce6;
          local_198 = FUN_14712cd0e;
          local_1b0 = L"MainPS";
          local_1b8 = L"/Engine/Private/BasePassPixelShader.usf";
          local_160 = 0;
          local_168 = 0x110;
          local_1a0 = 2;
          local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,3);
          puVar6 = &DAT_14c9af908;
          FUN_140db5666(&DAT_14c9af908,2,&DAT_14c9af8a0,L"TBasePassPSFNoLightMapPolicySkylight");
          _DAT_14c9af908 = &PTR_FUN_14a1fb500;
          atexit((_func_5014 *)&LAB_142b7c41b);
          puVar3 = &DAT_14c9af9b0;
LAB_1403118a9:
          _Init_thread_footer(puVar3);
        }
      }
      else {
        FUN_140078c68();
        puVar6 = &DAT_14c9afda8;
      }
      bVar1 = puVar6[0x48];
      auStack_d8[bVar1] = puVar6;
      auStack_78[bVar1] = (uint)param_11;
    }
    else if (param_8 == 1) {
      FUN_14713f843(uVar5 & 0xffffffff,uVar4 & 0xffffffff,local_e0,
                    CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_11) & 0xffffffff);
    }
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uVar2 = FUN_14007744c(param_1,local_e0,param_2);
  if ((char)uVar2 != '\0') {
    if (local_148 != 0) {
      *param_9 = local_148;
      param_9[1] = local_158;
    }
    if (lStack_130 != 0) {
      *param_10 = lStack_130;
      param_10[1] = local_158;
    }
  }
LAB_140311572:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140311a0a FUN_140311a0a body=47 status=ok
// SIG undefined FUN_140311a0a(void)

void FUN_140311a0a(void)

{
  FUN_140311a3a();
  return;
}



// FUNCTION 140311a3a FUN_140311a3a body=1093 status=ok
// SIG undefined FUN_140311a3a(void)

void FUN_140311a3a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,char *param_7,wchar_t *param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  char *local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  undefined1 local_138 [16];
  longlong local_128;
  longlong local_120;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined4 local_fc;
  longlong local_f8;
  undefined1 *local_f0;
  code *local_e0;
  undefined8 local_d8 [12];
  longlong local_78;
  undefined1 *local_68;
  undefined8 local_50;
  longlong local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  lVar7 = DAT_14caf6768;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar2 == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar10 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        bVar10 = DVar4 == DVar5;
      }
      else {
        bVar10 = false;
      }
    }
    uVar6 = (ulonglong)(bVar10 ^ 1);
  }
  if (*(int *)(lVar7 + uVar6 * 4) == 0) goto LAB_140311d97;
  local_48 = 0;
  local_40 = &DAT_100000001;
  local_78 = 0;
  local_68 = &DAT_100000001;
  puVar8 = local_d8;
  local_50 = param_1;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + 1;
    puVar8 = puVar8 + 1;
  }
  if (param_4 != 0 && param_5 == 0) {
    param_5 = *(longlong *)(param_4 + 0xa8);
  }
  if (param_8 != (wchar_t *)0x0 && param_5 == 0) {
    param_5 = (**(code **)(*(longlong *)param_8 + 0x10))(param_8);
  }
  local_188 = param_4;
  local_180 = param_5;
  if (*param_7 == '\x01') {
    local_168 = param_8;
    local_170 = param_7;
    local_178 = param_6;
    FUN_14360570e(local_138,&local_50,local_d8,param_2);
    local_ff = 1;
    local_f8 = 0;
    if (local_f0[1] == '\x01') {
LAB_140311c30:
      local_f8 = 0;
      cVar1 = *(char *)(local_128 + 0x30);
joined_r0x000140311d32:
      if (cVar1 != '\x02') goto LAB_140311d47;
LAB_140311c42:
      local_fe = 1;
      if (*(char *)(local_128 + 0x30) == '\x02') {
        uVar11 = 0x3f800000;
        goto LAB_140311d58;
      }
    }
  }
  else {
    local_168 = param_8;
    local_170 = param_7;
    local_178 = param_6;
    FUN_14360570e(local_138,&local_50,local_d8,param_2);
    local_ff = *local_f0;
    if (local_120 == 0) {
LAB_140311c1a:
      local_f8 = 0;
      if (local_f0[1] != '\0') goto LAB_140311c30;
    }
    else {
      if (DAT_14cad2858 == 0) {
        local_150 = &local_e0;
        local_e0 = FUN_144a7958c;
        local_140 = FUN_14081d0ea;
        local_148 = &LAB_146395584;
        local_158 = &LAB_147a0ba80;
        local_160 = &LAB_14575ccce;
        local_168 = L"Engine";
        local_170 = (char *)0x40000000000;
        local_178 = CONCAT44(local_178._4_4_,0x10000004);
        local_180 = CONCAT44(local_180._4_4_,0x10);
        local_188 = CONCAT44(local_188._4_4_,0x1180);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(*(longlong *)(local_120 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_120 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
      goto LAB_140311c1a;
      local_f8 = local_120;
      if (local_f0[1] == '\0') goto LAB_140311d61;
      if (((((*(int *)(local_120 + 0x554) == 0) ||
            (uVar3 = *(uint *)(local_120 + 0x550), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)
           ) || ((plVar9 = (longlong *)
                           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(local_120 + 0x554))))) ||
         (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar7 = *plVar9, lVar7 == 0)))) {
LAB_140311d15:
        lVar7 = local_120;
LAB_140311d18:
        if ((*(byte *)(lVar7 + 0x427) & 0xfe) != 2) goto LAB_140311d47;
        cVar1 = *(char *)(local_128 + 0x30);
        if (cVar1 != '\0') goto joined_r0x000140311d32;
        if ((*(byte *)(local_120 + 0x418) & 1) == 0) goto LAB_140311d47;
        goto LAB_140311c42;
      }
      if ((*(longlong *)(lVar7 + 0xa8) == 0) ||
         ((*(byte *)(*(longlong *)(lVar7 + 0xa8) + 0x65) & 1) != 0)) {
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
        goto LAB_140311d15;
        goto LAB_140311d18;
      }
LAB_140311d47:
      local_fe = 0;
      uVar11 = 0;
      if (*(char *)(local_128 + 0x30) == '\x02') {
LAB_140311d58:
        local_fc = uVar11;
      }
    }
  }
LAB_140311d61:
  FUN_143605818(local_138);
  FUN_1417e53e4(param_1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_140311d97:
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140311e80 FUN_140311e80 body=53 status=ok
// SIG undefined FUN_140311e80(void)

void FUN_140311e80(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      FUN_140311eb6(param_2,param_3);
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 140311eb6 FUN_140311eb6 body=134 status=ok
// SIG undefined FUN_140311eb6(void)

longlong * FUN_140311eb6(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140311f3e(&local_28);
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
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140311f3e FUN_140311f3e body=79 status=ok
// SIG undefined FUN_140311f3e(void)

undefined8 * FUN_140311f3e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1468ec24a(param_1,iVar1);
      FUN_1400bbb64(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140311f98 FUN_140311f98 body=525 status=ok
// SIG undefined FUN_140311f98(void)

undefined8 * FUN_140311f98(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aaba5a0;
  param_1[0x72] = 0;
  FUN_1403121a6(param_1,0);
  uVar1 = DAT_14cb09ba8;
  if (DAT_14cad3688 == 0) {
    local_40 = &local_20;
    local_20 = FUN_144b223ce;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1417963e0;
    local_48 = &LAB_147a2f4c9;
    local_50 = &LAB_1400ea6f8;
    local_58 = L"Engine";
    local_60 = 0x200000000000;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  plVar2 = (longlong *)FUN_14048696c(param_1,uVar1,DAT_14cad3688,DAT_14cad3688);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  param_1[0x72] = plVar2;
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0ef8,1);
  *(undefined1 *)(param_1[0x72] + 0x1fb) = 0;
  plVar2 = (longlong *)param_1[0x72];
  if ((*(byte *)((longlong)plVar2 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar2 + 0x2d3) = *(byte *)((longlong)plVar2 + 0x2d3) & 0xf7;
    (**(code **)(*plVar2 + 0x958))();
    plVar2 = (longlong *)param_1[0x72];
  }
  *(byte *)((longlong)plVar2 + 0x675) = *(byte *)((longlong)plVar2 + 0x675) | 0x40;
  lVar4 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar4;
  lVar4 = param_1[2];
  lVar3 = FUN_1403126c0();
  *(byte *)((longlong)param_1 + 99) =
       *(byte *)((longlong)param_1 + 99) & 0xef | (lVar4 == lVar3) << 4;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403121a6 FUN_1403121a6 body=176 status=ok
// SIG undefined FUN_1403121a6(void)

void FUN_1403121a6(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfb | param_2 << 2;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000140312253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,3);
    return;
  }
  uVar6 = (uint)uVar1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
    puVar3 = &DAT_14c998070;
    if (DAT_14c998080 != (undefined *)0x0) {
      puVar3 = DAT_14c998080;
    }
    if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
      lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
      puVar4 = *(uint **)(lVar2 + 0x18);
      if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
        puVar4 = (uint *)(lVar2 + 8);
      }
      *puVar4 = *puVar4 | 8;
      *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
    }
  }
  return;
}



// FUNCTION 140312256 FUN_140312256 body=424 status=ok
// SIG undefined FUN_140312256(void)

undefined8 * FUN_140312256(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a77e150;
  param_1[5] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = &PTR_FUN_14a5f7830;
  *(undefined1 *)((longlong)param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  memset(param_1 + 0x10,0,0xd8);
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000000;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  param_1[0x31] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  memset((void *)((longlong)param_1 + 0x1ac),0,0xa4);
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x65) = 2;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 2;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 2;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0x200000000;
  FUN_1403123fe(param_1);
  return param_1;
}



// FUNCTION 1403123fe FUN_1403123fe body=706 status=ok
// SIG undefined FUN_1403123fe(void)

void FUN_1403123fe(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xe9 | 0x14;
  pbVar4 = *(byte **)(param_1 + 0x50);
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x3b) != '\0') {
      uVar2 = *(undefined8 *)(pbVar4 + 0x28);
      FUN_1402eb48e(uVar2,param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x3b) = 0;
      FUN_1402eb97e(uVar2,param_1 + 0x30);
      if (*(char *)(param_1 + 0x3b) != '\0') goto LAB_140312427;
      pbVar4 = *(byte **)(param_1 + 0x50);
    }
    pbVar4[0x24] = 0;
    pbVar4[0x25] = 0;
    pbVar4[0x26] = 0x80;
    pbVar4[0x27] = 0xbf;
  }
LAB_140312427:
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) & 0xbf;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x70,1);
  *(undefined1 *)(param_1 + 0x178) = 3;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar8 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar1,9);
  }
  else {
    uVar9 = (uint)uVar1;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
        lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
        puVar7 = *(uint **)(lVar5 + 0x18);
        if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
          puVar7 = (uint *)(lVar5 + 8);
        }
        *puVar7 = *puVar7 | 0x200;
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x60;
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0x77 | DAT_14cad0e90 << 7;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
  FUN_1405e4918(param_1,0x42c80000);
  *(undefined4 *)(param_1 + 0x19c) = 0x40000000;
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 8;
  bVar3 = *(byte *)(param_1 + 99) | 1;
  *(byte *)(param_1 + 99) = bVar3;
  *(undefined4 *)(param_1 + 0x194) = 0x4d5693a4;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
    bVar3 = *(byte *)(param_1 + 99);
  }
  *(ulonglong *)(param_1 + 0x170) = (ulonglong)DAT_14c892fa8;
  *(undefined1 *)(param_1 + 0x179) = 1;
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) | 1;
  *(byte *)(param_1 + 99) = bVar3 & 0xfb;
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf3 | 4;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar8 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar1,3);
  }
  else {
    uVar9 = (uint)uVar1;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
        lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
        puVar7 = *(uint **)(lVar5 + 0x18);
        if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
          puVar7 = (uint *)(lVar5 + 8);
        }
        *puVar7 = *puVar7 | 8;
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 0x20;
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x60;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0x9f | 0x20;
  *(undefined2 *)(param_1 + 0x66) = 0x200;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x2f;
  *(undefined1 *)(param_1 + 0x17a) = 1;
  return;
}



// FUNCTION 1403126c0 FUN_1403126c0 body=228 status=ok
// SIG undefined FUN_1403126c0(void)

longlong FUN_1403126c0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb09b90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147d558c6;
    local_40 = &LAB_140311f8d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshActor",&DAT_14cb09b90,FUN_146405a78);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb09b90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403127a6 FUN_1403127a6 body=243 status=ok
// SIG undefined FUN_1403127a6(void)

undefined8 FUN_1403127a6(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
    uVar1 = CONCAT71((int7)(local_8 >> 8),1);
  }
  else {
    local_48 = *(undefined8 *)(param_2 + 0x60);
    local_40 = *(undefined8 *)(param_2 + 0x68);
    local_38 = *(undefined8 *)(param_2 + 0x70);
    local_30 = *(undefined8 *)(param_2 + 0x78);
    local_28 = *(undefined4 *)(param_2 + 0x19c);
    local_24 = *(undefined4 *)(param_2 + 0x1a0);
    local_20 = *(undefined4 *)(param_2 + 0x1a4);
    local_1c = *(undefined1 *)(param_2 + 400);
    local_1b = *(float *)(param_2 + 0x194) != 0.0;
    local_1a = *(undefined1 *)(param_2 + 0x1b0);
    local_19 = *(undefined1 *)(param_2 + 0x1b1);
    local_18 = *(undefined1 *)(param_2 + 0x1b3);
    local_14 = *(undefined4 *)(param_2 + 0x1b4);
    local_10 = *(undefined4 *)(param_2 + 0x1b8);
    local_c = *(undefined4 *)(param_2 + 0x1bc);
    uVar1 = FUN_14031289a(*param_1 + 8,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031289a FUN_14031289a body=158 status=ok
// SIG undefined FUN_14031289a(void)

bool FUN_14031289a(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (((((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10) ==
          *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x10)) &&
        (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14) ==
         *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14))) &&
       (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) &&
      ((((*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24) &&
         (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) &&
        ((*(char *)(param_1 + 0x2c) == *(char *)(param_2 + 0x2c) &&
         ((*(char *)(param_1 + 0x2d) == *(char *)(param_2 + 0x2d) &&
          (*(char *)(param_1 + 0x2e) == *(char *)(param_2 + 0x2e))))))) &&
       (*(char *)(param_1 + 0x2f) == *(char *)(param_2 + 0x2f))))) &&
     (((*(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30) &&
       (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) &&
      (*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38))))) {
    bVar1 = *(int *)(param_1 + 0x3c) != *(int *)(param_2 + 0x3c);
  }
  return bVar1;
}



// FUNCTION 140312938 FUN_140312938 body=145 status=ok
// SIG undefined FUN_140312938(void)

undefined8 *
FUN_140312938(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + -0x18) + 0x58))(param_1 + -0x18,&DAT_14cb71330);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*plVar2 + 0x4c8))(plVar2,param_3), cVar1 == '\0')) {
    puVar4 = &DAT_14c846480;
    if (*(longlong *)(param_1 + -0x210) != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + -0x210) + 0x240);
    }
    puVar5 = param_2;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x4a8))(plVar2,param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 1403129ca FUN_1403129ca body=101 status=ok
// SIG undefined FUN_1403129ca(void)

undefined8 FUN_1403129ca(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x620) == 0) {
    uVar1 = 0;
  }
  else {
    local_10 = *param_2;
    if (local_10 == DAT_14cb8d438) {
      local_10 = DAT_14cb71330;
    }
    uVar1 = FUN_140312a30(param_1,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140312a30 FUN_140312a30 body=784 status=ok
// SIG undefined FUN_140312a30(void)

longlong FUN_140312a30(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  undefined1 *local_168;
  code *local_160;
  undefined8 *local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_130;
  int local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  local_150 = param_2;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x50))();
  plVar3 = (longlong *)*plVar3;
  if (plVar3 != (longlong *)0x0) {
    FUN_140312d42(plVar3,local_118,0);
    lVar8 = (longlong)(int)local_50;
    puVar9 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar9 = local_118;
    }
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        lVar6 = *(longlong *)(puVar9 + lVar7);
        if (lVar6 != 0) {
          local_148 = *(longlong *)(lVar6 + 0x18);
          FUN_1400021e4(&local_148,&local_130);
          iVar1 = local_128 + -1;
          if (local_128 == 0) {
            iVar1 = 0;
          }
          cVar2 = FUN_1402ca054(*local_150,local_130,iVar1);
          if (local_130 != 0) {
            FUN_1400020a8();
          }
          if (cVar2 != '\0') goto LAB_140312b3c;
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    uVar4 = FUN_140566488();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140566488();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      lVar6 = 0;
      if ((plVar3 == plVar5) || (plVar5 == (longlong *)0x0)) goto LAB_140312b3c;
      lVar8 = (**(code **)(*plVar5 + 0x20))(plVar5);
      if (lVar8 != 0) {
        local_148 = 0;
        uStack_140 = 0;
        lVar8 = FUN_140777470(lVar8,local_150);
        if (lVar8 != 0) {
          FUN_140777524(lVar8,&local_148);
          lVar8 = local_148;
          lVar7 = (longlong)(int)uStack_140;
          if (lVar7 == 0) {
            lVar6 = 0;
          }
          else {
            lVar10 = 0;
            do {
              lVar6 = *(longlong *)(lVar8 + lVar10);
              if (lVar6 != 0) {
                if (DAT_14cb63950 == 0) {
                  local_170 = &local_120;
                  local_120 = FUN_144a7958c;
                  local_160 = FUN_14081d0ea;
                  local_168 = &LAB_1464ec72a;
                  local_178 = &LAB_1486f5f75;
                  local_180 = &LAB_140945686;
                  local_188 = L"Engine";
                  local_190 = 0;
                  local_198 = 0x10000004;
                  local_1a0 = 0x10;
                  local_1a8 = 0x19d0;
                  FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                                FUN_1464fe8ee);
                }
                if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38))
                   && (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30))
                goto LAB_140312c68;
              }
              lVar10 = lVar10 + 8;
            } while (lVar7 * 8 != lVar10);
            lVar6 = 0;
          }
LAB_140312c68:
          if (local_148 != 0) {
            FUN_1400020a8(local_148);
          }
          goto LAB_140312b3c;
        }
      }
    }
  }
  lVar6 = 0;
LAB_140312b3c:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 140312d42 FUN_140312d42 body=336 status=ok
// SIG undefined FUN_140312d42(void)

void FUN_140312d42(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1488b3d90(param_2,0);
  }
  if (DAT_14cb63950 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464ec72a;
    local_58 = &LAB_1486f5f75;
    local_60 = &LAB_140945686;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  local_30 = DAT_14cb63950;
  if ((DAT_14cb63950 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140312e94(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140312e94 FUN_140312e94 body=719 status=ok
// SIG undefined FUN_140312e94(void)

void FUN_140312e94(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_14031301d:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_140312eff:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b4110(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b3e8c(param_1,&local_40,param_4);
      }
      goto LAB_140312f3d;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_14031301d;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140312eff;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140313164(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1488b4262(param_1,&local_50,param_4);
  }
LAB_140312f3d:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140313164 FUN_140313164 body=931 status=ok
// SIG undefined FUN_140313164(void)

void FUN_140313164(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar13 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_58 = param_2;
  if (iVar2 == 0) {
    uVar11 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = puVar13;
    }
    uVar10 = *puVar5;
    if (uVar10 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar11 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar11 == uVar14) goto LAB_140313399;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar11 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar10 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar12 != 0) {
        lVar15 = *local_58;
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          local_68 = puVar13;
          local_60 = param_3;
          FUN_1456cec3c(lVar15);
          puVar13 = local_68;
          param_3 = local_60;
LAB_14031326a:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_68 = puVar13;
            local_60 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar13 = local_68;
            param_3 = local_60;
            if (DAT_14cad00c8 == 0) goto LAB_140313483;
          }
          if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140313483;
          if (*(longlong *)
               (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar15 = 0;
          }
        }
        else {
          if (lVar15 != 0) goto LAB_14031326a;
LAB_140313483:
          lVar15 = 0;
        }
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
          iVar4 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar4 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar4 + 1U) {
            local_68 = puVar13;
            local_60 = param_3;
            FUN_1488b4568(param_3,iVar4);
            puVar13 = local_68;
            param_3 = local_60;
          }
          lVar15 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar15 = param_3;
          }
          *(longlong *)(lVar15 + (longlong)iVar4 * 8) = lVar12;
        }
      }
      uVar10 = uVar10 & ~(uint)uVar11;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar13;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar8 = puVar5[lVar12] & uVar10;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar15 = 0;
          do {
            uVar8 = puVar5[lVar12 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar15 + 1);
              uVar10 = 0xffffffff;
              goto LAB_140313323;
            }
            iVar9 = iVar9 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar12 != lVar15);
          uVar10 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_140313323:
        uVar11 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar11 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_140313399:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140313508 FUN_140313508 body=38 status=ok
// SIG undefined FUN_140313508(void)

longlong FUN_140313508(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14031352e();
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x70);
  }
  return lVar2;
}



// FUNCTION 14031352e FUN_14031352e body=173 status=ok
// SIG undefined FUN_14031352e(void)

ulonglong FUN_14031352e(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  lVar4 = *(longlong *)(param_1 + 0x70);
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar9 = uVar2;
    do {
      uVar8 = (uVar9 >> 1) + (int)uVar6;
      lVar7 = (ulonglong)uVar8 * 0x80;
      lVar1 = lVar4 + lVar7;
      uVar3 = *(uint *)(lVar4 + 0x38 + lVar7);
      if ((uVar3 < *param_2) ||
         ((uVar3 <= *param_2 &&
          ((*(uint *)(lVar1 + 0x3c) < param_2[1] ||
           ((*(uint *)(lVar1 + 0x3c) == param_2[1] &&
            ((*(uint *)(lVar1 + 0x40) < param_2[2] ||
             ((*(uint *)(lVar1 + 0x40) == param_2[2] && (*(uint *)(lVar1 + 0x44) < param_2[3])))))))
           ))))) {
        uVar6 = (ulonglong)(uVar8 + (uVar9 & 1));
      }
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar5);
  }
  if ((int)uVar6 < (int)uVar2) {
    lVar1 = lVar4 + uVar6 * 0x80;
    uVar2 = *(uint *)(lVar4 + 0x38 + uVar6 * 0x80);
    if (uVar2 <= *param_2) {
      if (*param_2 != uVar2) {
        return uVar6;
      }
      if (*(uint *)(lVar1 + 0x3c) <= param_2[1]) {
        if (param_2[1] != *(uint *)(lVar1 + 0x3c)) {
          return uVar6;
        }
        if (*(uint *)(lVar1 + 0x40) <= param_2[2]) {
          if (param_2[2] != *(uint *)(lVar1 + 0x40)) {
            return uVar6;
          }
          if (*(uint *)(lVar1 + 0x44) <= param_2[3]) {
            return uVar6;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 1403135dc FUN_1403135dc body=124 status=ok
// SIG undefined FUN_1403135dc(void)

undefined8 FUN_1403135dc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0.0001 < ABS(*(float *)(param_3 + 0x40))) {
    uVar1 = *(undefined4 *)(param_3 + 0x10);
    local_20 = *(undefined8 *)(param_3 + 0x20);
    local_18 = *(undefined8 *)(param_3 + 0x28);
    local_10 = *(longlong *)(param_3 + 0x30);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_14031365a(&local_20,uVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031365a FUN_14031365a body=424 status=ok
// SIG undefined FUN_14031365a(void)

void FUN_14031365a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  int local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14cb0d2b0 != 0) && (lVar4 = FUN_140313804(), lVar4 != 0)) {
    lVar5 = FUN_1403139a0();
    if (lVar5 == 0) {
      cVar3 = FUN_140230656(param_1);
      if ((((cVar3 != '\0') || (FUN_1405af760(lVar4,&local_50,param_2), DAT_14cb0f118 != local_50))
          || (DAT_14cb0f120 != local_48)) ||
         ((DAT_14cb0f128._4_4_ != local_3c || ((char)DAT_14cb0f128 != local_40))))
      goto LAB_140313709;
      plVar8 = (longlong *)&DAT_14cb0f130;
    }
    else {
      if (*(int *)(lVar5 + 0x20) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = *(undefined2 **)(lVar5 + 0x18);
      }
      FUN_1446f470e(&local_38,puVar7,1);
      lVar6 = FUN_140313a2a();
      if ((longlong)*(int *)(lVar6 + 0x60) != 0) {
        plVar8 = *(longlong **)(lVar6 + 0x58);
        lVar6 = (longlong)*(int *)(lVar6 + 0x60) * 0x18;
        do {
          if (plVar8[1] == local_38) {
            if (plVar8 != (longlong *)0x0) goto LAB_140313704;
            break;
          }
          plVar8 = plVar8 + 3;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      local_58 = 0;
      plVar8 = &local_50;
      FUN_147d92f8e(plVar8,*(undefined8 *)(lVar5 + 8),local_38,0);
    }
LAB_140313704:
    FUN_1403140a2(lVar4,param_2,plVar8);
  }
LAB_140313709:
  plVar8 = *(longlong **)(param_1 + 0x10);
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140313804 FUN_140313804 body=105 status=ok
// SIG undefined FUN_140313804(void)

void FUN_140313804(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1403138ba();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14031386e(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031386e FUN_14031386e body=76 status=ok
// SIG undefined FUN_14031386e(void)

void FUN_14031386e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1403138ba();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1403138ab;
    }
  }
  lVar2 = 0;
LAB_1403138ab:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1403138ba FUN_1403138ba body=228 status=ok
// SIG undefined FUN_1403138ba(void)

longlong FUN_1403138ba(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cada6d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_147a9c211;
    local_40 = &LAB_145cc953a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/Engine",L"InputDeviceSubsystem",&DAT_14cada6d0,FUN_1463c958c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cada6d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403139a0 FUN_1403139a0 body=137 status=ok
// SIG undefined FUN_1403139a0(void)

undefined8 FUN_1403139a0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xde0) == '\0') {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(lVar1 + 0xde0) = 1;
    *(undefined8 *)(lVar1 + 0xdd0) = 0;
    *(undefined8 *)(lVar1 + 0xdd8) = 0;
    __tlregdtor(&LAB_14284e3c5);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar2 = (longlong)*(int *)(lVar1 + 0xdd8);
  if (lVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0xdd0) + -8 + lVar2 * 8);
  }
  return uVar3;
}



// FUNCTION 140313a2a FUN_140313a2a body=138 status=ok
// SIG undefined FUN_140313a2a(void)

void FUN_140313a2a(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_140313b20();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  local_20 = FUN_140313bfe();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_140313ab6(lVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140313ab6 FUN_140313ab6 body=104 status=ok
// SIG undefined FUN_140313ab6(void)

void FUN_140313ab6(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  local_20 = *param_2;
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  FUN_140313ce4(param_1,&local_20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140313b20 FUN_140313b20 body=221 status=ok
// SIG undefined FUN_140313b20(void)

longlong FUN_140313b20(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c967b88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14692e193;
    local_40 = FUN_146278687;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/DeveloperSettings",L"PlatformSettingsManager",&DAT_14c967b88,
                  &DAT_14692e192);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c967b88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140313bfe FUN_140313bfe body=228 status=ok
// SIG undefined FUN_140313bfe(void)

longlong FUN_140313bfe(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0e368 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462785c0;
    local_38 = &LAB_147d92f1f;
    local_40 = &LAB_14589d405;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"InputPlatformSettings",&DAT_14cb0e368,&DAT_147d92f1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0e368;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140313ce4 FUN_140313ce4 body=310 status=ok
// SIG undefined FUN_140313ce4(void)

longlong FUN_140313ce4(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  local_38 = param_3;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  plVar4 = (longlong *)FUN_140313e1c(param_1 + 0x28,uVar2 >> 0x10 ^ uVar2,param_2);
  if (*(ulonglong *)(param_1 + 0x78) != param_3) {
    iVar3 = FUN_144a788f7(param_3 & 0xffffffff);
    plVar4 = (longlong *)FUN_14692e944(plVar4 + 1,(int)(param_3 >> 0x20) + iVar3,&local_38);
  }
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    local_40 = *param_2;
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    lVar5 = FUN_1456fbbac();
    if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(lVar5);
    }
    *plVar4 = lVar5;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140313e1c FUN_140313e1c body=142 status=ok
// SIG undefined FUN_140313e1c(void)

longlong FUN_140313e1c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140313eac();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_140313e55;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_1456fb57a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_140313e55:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140313eac FUN_140313eac body=279 status=ok
// SIG undefined FUN_140313eac(void)

int FUN_140313eac(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x60 + (longlong)iVar1 * 0x68)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x68);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_140313f27;
LAB_140313f49:
        lVar5 = 0;
      }
      else {
        FUN_14689c22e(lVar5);
LAB_140313f27:
        lVar3 = FUN_140313fc4();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_140313f49;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_140313fc4(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140313fc4 FUN_140313fc4 body=221 status=ok
// SIG undefined FUN_140313fc4(void)

longlong FUN_140313fc4(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c967b58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14692e18f;
    local_40 = FUN_14627858d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/DeveloperSettings",L"PlatformSettings",&DAT_14c967b58,&DAT_14692e18e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c967b58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403140a2 FUN_1403140a2 body=1652 status=ok
// SIG undefined FUN_1403140a2(void)

void FUN_1403140a2(longlong param_1,uint param_2,uint *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStack_88 [32];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar12 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar12,1,1);
    DAT_14c9670a0 = plVar12;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_4c,param_2);
  plVar12 = (longlong *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar13 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x178);
    }
    uVar16 = *(uint *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x180) - 1U & local_4c) * 4);
    if (uVar16 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar12 + (longlong)(int)uVar16 * 0x28);
        if (*puVar2 == local_4c) {
          if ((puVar2 == (uint *)0x0) || (puVar2 == (uint *)0xfffffffffffffffc)) break;
          puVar2[1] = param_2;
          if (*(longlong *)(puVar2 + 2) == *(longlong *)param_3) {
            lVar13 = *(longlong *)(param_3 + 2);
            lVar15 = *(longlong *)(puVar2 + 4);
            if (lVar15 != lVar13) goto LAB_1403141b8;
            if ((puVar2[7] == param_3[5]) && ((char)puVar2[6] == (char)param_3[4]))
            goto LAB_140314188;
          }
          else {
            lVar15 = *(longlong *)(puVar2 + 4);
            lVar13 = *(longlong *)(param_3 + 2);
LAB_1403141b8:
            if (lVar13 != lVar15) break;
          }
          *(longlong *)(puVar2 + 6) = *(longlong *)(param_3 + 4);
          uVar16 = param_3[1];
          uVar18 = param_3[2];
          uVar6 = param_3[3];
          puVar2[2] = *param_3;
          puVar2[3] = uVar16;
          puVar2[4] = uVar18;
          puVar2[5] = uVar6;
          goto LAB_140314188;
        }
        uVar16 = puVar2[8];
      } while (uVar16 != 0xffffffff);
    }
  }
  plVar1 = (longlong *)(param_1 + 0xe8);
  if (*(int *)(param_1 + 0x11c) == 0) {
    iVar19 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar19 + 1;
    if (*(int *)(param_1 + 0xf4) == iVar19) {
      FUN_14042c636(plVar1,iVar19);
    }
    lVar15 = (longlong)iVar19;
    iVar17 = FUN_144a54ea4(param_1 + 0xf8,1);
    lVar13 = *(longlong *)(param_1 + 0x108);
    if (*(longlong *)(param_1 + 0x108) == 0) {
      lVar13 = param_1 + 0xf8;
    }
    iVar11 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar11 = iVar17;
    }
    bVar5 = (byte)iVar17 & 0x1f;
    puVar2 = (uint *)(lVar13 + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x118);
    lVar15 = (longlong)iVar19;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0xe8) + 4 + lVar15 * 0x24);
    *(int *)(param_1 + 0x118) = iVar17;
    iVar11 = *(int *)(param_1 + 0x11c) + -1;
    *(int *)(param_1 + 0x11c) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar17 * 0x24) = 0xffffffff;
    }
  }
  iVar17 = 1;
  lVar13 = param_1 + 0xf8;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x108);
  }
  iVar11 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar11 = iVar19;
  }
  puVar2 = (uint *)(lVar13 + (longlong)(iVar11 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar19 & 0x1f);
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xe8) + lVar15 * 0x24);
  *puVar2 = param_2;
  uVar16 = param_3[1];
  uVar18 = param_3[2];
  uVar6 = param_3[3];
  puVar2[1] = *param_3;
  puVar2[2] = uVar16;
  puVar2[3] = uVar18;
  puVar2[4] = uVar6;
  *(longlong *)(puVar2 + 5) = *(longlong *)(param_3 + 4);
  puVar2[7] = 0xffffffff;
  uVar16 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0x11c);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    lVar13 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x128);
    }
    uVar18 = *(uint *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x130) - 1U & param_2) * 4);
    if (uVar18 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*plVar1 + (longlong)(int)uVar18 * 0x24);
        if (*puVar3 == param_2) {
          uVar16 = *puVar2;
          uVar18 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          uVar4 = *(undefined8 *)(puVar2 + 4);
          puVar3[6] = puVar2[6];
          *(undefined8 *)(puVar3 + 4) = uVar4;
          *puVar3 = uVar16;
          puVar3[1] = uVar18;
          puVar3[2] = uVar6;
          puVar3[3] = uVar7;
          FUN_1456fb492(plVar1,iVar19);
          goto LAB_1403142fc;
        }
        uVar18 = puVar3[7];
      } while (uVar18 != 0xffffffff);
    }
  }
  if (3 < uVar16) {
    uVar14 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar17 <= *(int *)(param_1 + 0x130))) {
    uVar16 = *(int *)(param_1 + 0x130) - 1U & param_2;
    puVar2[8] = uVar16;
    lVar13 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar13 = param_1 + 0x120;
    }
    puVar2[7] = *(uint *)(lVar13 + ((longlong)*(int *)(param_1 + 0x130) - 1U & (longlong)(int)uVar16
                                   ) * 4);
    lVar13 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar13 = param_1 + 0x120;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x130) - 1U & (longlong)(int)uVar16) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 0x130) = iVar17;
    FUN_1456fbf74(plVar1);
  }
LAB_1403142fc:
  local_58 = *(longlong *)(param_3 + 4);
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  if (*(int *)(param_1 + 0x16c) == 0) {
    iVar19 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = iVar19 + 1;
    if (*(int *)(param_1 + 0x144) == iVar19) {
      FUN_14055df60(plVar12,iVar19);
    }
    lVar15 = (longlong)iVar19;
    iVar17 = FUN_144a54ea4(param_1 + 0x148,1);
    lVar13 = *(longlong *)(param_1 + 0x158);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      lVar13 = param_1 + 0x148;
    }
    iVar11 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar11 = iVar17;
    }
    bVar5 = (byte)iVar17 & 0x1f;
    puVar2 = (uint *)(lVar13 + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x168);
    lVar15 = (longlong)iVar19;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0x138) + 4 + lVar15 * 0x28);
    *(int *)(param_1 + 0x168) = iVar17;
    iVar11 = *(int *)(param_1 + 0x16c) + -1;
    *(int *)(param_1 + 0x16c) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar17 * 0x28) = 0xffffffff;
    }
  }
  lVar13 = param_1 + 0x148;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x158);
  }
  iVar17 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar17 = iVar19;
  }
  puVar2 = (uint *)(lVar13 + (longlong)(iVar17 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar19 & 0x1f);
  iVar17 = 1;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x138) + lVar15 * 0x28);
  *puVar2 = local_4c;
  puVar2[1] = param_2;
  puVar2[2] = local_68;
  puVar2[3] = uStack_64;
  puVar2[4] = uStack_60;
  puVar2[5] = uStack_5c;
  *(longlong *)(puVar2 + 6) = local_58;
  puVar2[8] = 0xffffffff;
  uVar16 = *(int *)(param_1 + 0x140) - *(int *)(param_1 + 0x16c);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    lVar13 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x178);
    }
    uVar18 = *(uint *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x180) - 1U & local_4c) * 4);
    if (uVar18 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*plVar12 + (longlong)(int)uVar18 * 0x28);
        if (*puVar3 == local_4c) {
          uVar16 = *puVar2;
          uVar18 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          uVar8 = puVar2[5];
          uVar9 = puVar2[6];
          uVar10 = puVar2[7];
          puVar3[4] = puVar2[4];
          puVar3[5] = uVar8;
          puVar3[6] = uVar9;
          puVar3[7] = uVar10;
          *puVar3 = uVar16;
          puVar3[1] = uVar18;
          puVar3[2] = uVar6;
          puVar3[3] = uVar7;
          FUN_1456fb506(plVar12,iVar19);
          goto LAB_140314434;
        }
        uVar18 = puVar3[8];
      } while (uVar18 != 0xffffffff);
    }
  }
  if (3 < uVar16) {
    uVar14 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar17 <= *(int *)(param_1 + 0x180))) {
    uVar16 = *(int *)(param_1 + 0x180) - 1U & local_4c;
    puVar2[9] = uVar16;
    lVar13 = *(longlong *)(param_1 + 0x178);
    if (*(longlong *)(param_1 + 0x178) == 0) {
      lVar13 = param_1 + 0x170;
    }
    puVar2[8] = *(uint *)(lVar13 + ((longlong)*(int *)(param_1 + 0x180) - 1U & (longlong)(int)uVar16
                                   ) * 4);
    lVar13 = *(longlong *)(param_1 + 0x178);
    if (*(longlong *)(param_1 + 0x178) == 0) {
      lVar13 = param_1 + 0x170;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x180) - 1U & (longlong)(int)uVar16) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 0x180) = iVar17;
    FUN_1456fc122(plVar12);
  }
LAB_140314434:
  if (0 < *(int *)(param_1 + 0x40)) {
    local_68 = local_4c;
    uStack_64 = param_2;
    FUN_1447cd2ec(param_1 + 0x38);
  }
LAB_140314188:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140314718 FUN_140314718 body=117 status=ok
// SIG undefined FUN_140314718(void)

void FUN_140314718(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14031478e(param_1 + 0x15);
  if (param_1[0x26] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x26] + 0x68);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x25];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014031478a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14031478e FUN_14031478e body=1386 status=ok
// SIG undefined FUN_14031478e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14031478e(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined1 auStack_40f8 [32];
  undefined *local_40d8;
  ulonglong local_40d0;
  undefined4 local_40c8;
  undefined8 local_40c0;
  longlong local_40b8;
  uint local_40ac;
  ulonglong local_40a8;
  ulonglong local_40a0;
  int local_4098;
  uint local_4094;
  ulonglong local_4090;
  undefined4 local_4084;
  longlong local_4080;
  undefined1 *local_4078;
  undefined8 local_4070;
  ulonglong local_4068;
  ulonglong local_4060;
  undefined1 local_4058 [16384];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_40f8;
  puVar4 = *(uint **)(param_1 + 0x90);
  local_4080 = *(longlong *)(puVar4 + 0x2a);
  local_4060 = (ulonglong)*puVar4;
  uVar3 = puVar4[7];
  local_4090 = (ulonglong)uVar3;
  uVar16 = uVar3 * 2 + puVar4[6];
  local_40a8 = (ulonglong)uVar16;
  local_4094 = (uint)*(byte *)(param_1 + 0xa8);
  local_4084 = *(undefined4 *)(param_1 + 0xa4);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000000;
  if (local_4060 != 0) {
    local_4068 = (ulonglong)(uVar16 - 1);
    local_4090 = (ulonglong)(uVar3 + 4);
    local_4098 = -1;
    local_4080 = local_4080 + (longlong)*(int *)(param_1 + 0xa0) * 0x90;
    uVar14 = 0;
    local_40b8 = param_1;
    do {
      uVar6 = local_4084;
      uVar3 = local_4094;
      if ((*(byte *)(param_1 + 0xa9) >> ((uint)uVar14 & 0x1f) & 1) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x90);
        iVar8 = FUN_144b2c0a0(lVar5,local_4094,local_4084,uVar14 & 0xffffffff);
        iVar9 = FUN_144b2c0a0(lVar5,uVar3,uVar6,uVar14 + 1 & 0xffffffff);
        if (local_4098 == -1) {
          local_4098 = iVar8;
        }
        bVar2 = *(byte *)(lVar5 + 0x20 + uVar14);
        local_40a0 = (ulonglong)bVar2;
        uVar11 = (ulonglong)((uint)bVar2 * 0x30);
        uVar3 = *(uint *)((longlong)&DAT_14c873420 + uVar11);
        uVar18 = (int)local_4068 + uVar3;
        uVar16 = uVar18 / uVar3;
        plVar21 = (longlong *)(uVar14 * 0x10 + local_40b8);
        bVar2 = *(byte *)(uVar14 + 0x84 + local_4080);
        if (bVar2 < 6) {
          uVar19 = iVar9 - iVar8;
          uVar12 = iVar8 - local_4098;
          uVar15 = ((*(uint *)((longlong)&DAT_14c87341c + uVar11) + (int)local_4068) /
                   *(uint *)((longlong)&DAT_14c87341c + uVar11)) *
                   *(int *)((longlong)&DAT_14c873428 + uVar11);
          uVar13 = uVar15 * uVar16;
          switch(bVar2) {
          case 0:
            local_40d8 = &DAT_14cb10648;
            break;
          case 1:
switchD_140314951_caseD_1:
            local_40d8 = &DAT_14c761eb5;
            break;
          case 2:
            local_40d8 = &DAT_14c761eb9;
            break;
          case 3:
            local_40d8 = &DAT_14c761ebd;
            break;
          case 4:
            local_40ac = uVar16;
            cVar7 = (**(code **)(**(longlong **)(local_40b8 + 0x80) + 0x20))();
            if (cVar7 == '\0') goto switchD_140314951_caseD_1;
            uVar16 = *(uint *)((longlong)plVar21 + 0xc);
            if (uVar16 == uVar15) {
              if (*(uint *)(plVar21 + 1) < uVar19) goto LAB_140314b53;
              (**(code **)(**(longlong **)(local_40b8 + 0x80) + 0x10))
                        (*(longlong **)(local_40b8 + 0x80),*plVar21,uVar12,uVar19);
            }
            else {
              if (((uVar16 < uVar15) || (uVar13 < uVar19)) ||
                 (*(uint *)(plVar21 + 1) < uVar16 * local_40ac)) goto LAB_140314b53;
              FUN_147da81e8(local_4058,uVar13,0);
              puVar10 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar10 = local_4058;
              }
              (**(code **)(**(longlong **)(local_40b8 + 0x80) + 0x10))
                        (*(longlong **)(local_40b8 + 0x80),puVar10,uVar12,uVar19);
              if (uVar3 <= uVar18) {
                uVar11 = (ulonglong)local_40ac;
                uVar20 = 0;
                do {
                  puVar10 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar10 = local_4058;
                  }
                  memcpy((void *)((ulonglong)(uint)(*(int *)((longlong)plVar21 + 0xc) * (int)uVar20)
                                 + *plVar21),puVar10 + uVar15 * (int)uVar20,(ulonglong)uVar15);
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar11);
              }
            }
            goto LAB_140314ba6;
          case 5:
            if (*(uint *)((longlong)plVar21 + 0xc) == uVar15) {
              if (uVar13 <= *(uint *)(plVar21 + 1)) {
                uVar17 = *(undefined8 *)(local_40b8 + 0x80);
                lVar5 = *plVar21;
                if (DAT_14c87ead8 == '\0') {
                  FUN_140024d3a(&DAT_14c87eb00);
                  DAT_14c87ead8 = '\x01';
                }
                local_40d0 = (ulonglong)uVar19;
                local_40d8 = (undefined *)(ulonglong)uVar12;
                local_40c0 = 0;
                local_40c8 = 0;
                cVar7 = FUN_142773244(DAT_14c892f44,lVar5,uVar13,uVar17);
                if (cVar7 != '\0') goto LAB_140314ba6;
              }
            }
            else if (uVar15 <= *(uint *)((longlong)plVar21 + 0xc)) {
              local_40ac = uVar16;
              FUN_147da81e8(local_4058,uVar13,0);
              puVar10 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar10 = local_4058;
              }
              uVar17 = *(undefined8 *)(local_40b8 + 0x80);
              if (DAT_14c87ead8 == '\0') {
                local_4078 = puVar10;
                local_4070 = *(undefined8 *)(local_40b8 + 0x80);
                FUN_140024d3a(&DAT_14c87eb00);
                DAT_14c87ead8 = '\x01';
                puVar10 = local_4078;
                uVar17 = local_4070;
              }
              local_40d0 = (ulonglong)uVar19;
              local_40d8 = (undefined *)(ulonglong)uVar12;
              local_40c0 = 0;
              local_40c8 = 0;
              cVar7 = FUN_142773244(DAT_14c892f44,puVar10,uVar13,uVar17);
              if (cVar7 != '\0') {
                if (uVar3 <= uVar18) {
                  uVar11 = (ulonglong)local_40ac;
                  uVar20 = 0;
                  do {
                    puVar10 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar10 = local_4058;
                    }
                    memcpy((void *)((ulonglong)
                                    (uint)(*(int *)((longlong)plVar21 + 0xc) * (int)uVar20) +
                                   *plVar21),puVar10 + uVar15 * (int)uVar20,(ulonglong)uVar15);
                    uVar20 = uVar20 + 1;
                  } while (uVar20 < uVar11);
                }
                goto LAB_140314ba6;
              }
            }
            goto LAB_140314b53;
          }
LAB_140314b87:
          FUN_147da724c(plVar21,local_40a8,local_40a8 & 0xffffffff,local_40a0);
        }
        else {
LAB_140314b53:
          if (DAT_14c761eb4 == '\x01') {
            local_40d8 = &DAT_14c761ec1;
            goto LAB_140314b87;
          }
        }
LAB_140314ba6:
        param_1 = local_40b8;
        if (DAT_14cb0ffb8 != 0) {
          local_40d0 = CONCAT44(local_40d0._4_4_,local_4094);
          local_40d8 = (undefined *)CONCAT71(local_40d8._1_7_,(char)local_40a0);
          FUN_147da5bfa(plVar21,local_40a8,local_40a8 & 0xffffffff,local_4090);
          param_1 = local_40b8;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != local_4060);
  }
  plVar21 = *(longlong **)(param_1 + 0x80);
  if (plVar21 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar21 + 0x28))(plVar21,1);
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_40f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140314cfa FUN_140314cfa body=196 status=ok
// SIG undefined FUN_140314cfa(void)

undefined8 FUN_140314cfa(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158 [2];
  int local_148 [66];
  undefined8 local_40;
  ulonglong local_38;
  
  puVar1 = DAT_14c844ed8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = 0;
  FUN_140314dc0(param_1 + 8,local_158);
  local_168 = &local_160;
  FUN_140270e3c(*puVar1,local_148,param_1 + 0x18,local_158);
  uVar2 = 0;
  if (local_148[0] == 0) {
    uVar2 = local_40;
  }
  local_168 = (undefined8 *)local_160;
  FUN_140314e6b(local_158,param_1 + 8,param_1 + 0x18,uVar2);
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return local_158[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140314dc0 FUN_140314dc0 body=171 status=ok
// SIG undefined FUN_140314dc0(void)

void FUN_140314dc0(int *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar4 = *param_1;
  uVar1 = *(undefined1 *)((longlong)param_1 + 1);
  uVar2 = *(undefined1 *)((longlong)param_1 + 2);
  uVar3 = *(undefined1 *)((longlong)param_1 + 3);
  iVar5 = param_1[1];
  if (*param_1 == 0 && (char)iVar5 == '\0') {
    *(undefined2 *)(param_2 + 1) = 0;
    *param_2 = 0;
  }
  else {
    uVar6 = 0xffffffffffffffff;
    if ((ulonglong)*(uint5 *)((longlong)param_1 + 5) != 0xffffffffff) {
      uVar6 = (ulonglong)*(uint5 *)((longlong)param_1 + 5);
    }
    *(char *)param_2 = (char)(uVar6 >> 0x20);
    *(char *)((longlong)param_2 + 1) = (char)(uVar6 >> 0x18);
    *(char *)((longlong)param_2 + 2) = (char)(uVar6 >> 0x10);
    *(char *)((longlong)param_2 + 3) = (char)(uVar6 >> 8);
    *(char *)((longlong)param_2 + 4) = (char)uVar6;
    *(char *)((longlong)param_2 + 5) = (char)iVar5;
    *(undefined1 *)((longlong)param_2 + 6) = uVar3;
    *(undefined1 *)((longlong)param_2 + 7) = uVar2;
    *(undefined1 *)(param_2 + 1) = uVar1;
    *(char *)((longlong)param_2 + 9) = (char)iVar4;
  }
  return;
}



// FUNCTION 140314e6b FUN_140314e6b body=194 status=ok
// SIG undefined FUN_140314e6b(void)

undefined8 *
FUN_140314e6b(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [46];
  undefined8 local_3a;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_3[1] == DAT_14c845dc4 && *param_3 == DAT_14c845dbc) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_140314dc0(param_2,&local_3a);
    puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar1 = &PTR_caseD_c_149e69bd0;
    puVar1[1] = *param_3;
    *(int *)(puVar1 + 2) = (int)param_3[1];
    *(undefined8 *)((longlong)puVar1 + 0x14) = local_3a;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = local_32;
    puVar1[4] = param_4;
    puVar1[5] = param_5;
  }
  *param_1 = puVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140314f2e FUN_140314f2e body=97 status=ok
// SIG undefined FUN_140314f2e(void)

void FUN_140314f2e(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140314f90();
  plVar2 = (longlong *)*puVar3;
  if (plVar2 != param_2) {
    puVar3 = (undefined8 *)*plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140314f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140314f90 FUN_140314f90 body=393 status=ok
// SIG undefined FUN_140314f90(void)

longlong * FUN_140314f90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar3 = 1;
  if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) & 0x20) == 0) {
    uVar3 = DAT_14c760d80 ^ 1;
  }
  plVar6 = (longlong *)(param_1 + (ulonglong)(uVar3 << 4) + 0x18);
  if (*plVar6 == 0) {
    plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14a37d380;
    plVar5 = plVar4 + 2;
    plVar4[2] = 0;
    plVar4[3] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *(longlong **)(param_1 + 0x18) = plVar5;
    plVar8 = *(longlong **)(param_1 + 0x20);
    plVar7 = plVar4;
    if (plVar4 != plVar8) {
      *(longlong **)(param_1 + 0x20) = plVar4;
      if (plVar8 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        plVar8 = plVar4;
      }
      else {
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        plVar5 = *(longlong **)(param_1 + 0x18);
        plVar8 = *(longlong **)(param_1 + 0x20);
        plVar7 = (longlong *)0x0;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(param_1 + 0x30);
    *(longlong **)(param_1 + 0x28) = plVar5;
    *(longlong **)(param_1 + 0x30) = plVar8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
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
  }
  return plVar6;
}



// FUNCTION 14031511a FUN_14031511a body=67 status=ok
// SIG undefined FUN_14031511a(void)

longlong * FUN_14031511a(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_14031515e();
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)param_1 + 0x17) & 0x40) == 0) {
    return plVar1;
  }
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      return (longlong *)*plVar1;
    }
    if (plVar1[2] != 0) {
      return *(longlong **)(plVar1[2] + 8);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14031515e FUN_14031515e body=188 status=ok
// SIG undefined FUN_14031515e(void)

void FUN_14031515e(longlong *param_1)

{
  undefined1 uVar1;
  uint5 uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar2 = *(uint5 *)(param_1 + 1);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0xc);
    uVar5 = (ulonglong)*(uint5 *)(param_1 + 1);
    if (uVar5 != 0) {
      lVar4 = FUN_14001fdce(0,uVar5,0);
      *param_1 = lVar4;
      local_30 = (longlong *)FUN_14001cc68(0x20,0x10);
      local_30[1] = 0;
      local_30[2] = 0;
      *local_30 = lVar4;
      *(int *)(local_30 + 1) = (int)uVar2;
      *(undefined1 *)(local_30 + 3) = uVar1;
      *(undefined1 *)((longlong)local_30 + 0x19) = 0;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
      }
      cVar3 = FUN_1427d88f8(param_1,&local_30);
      if (cVar3 == '\0') {
        FUN_1400ea36e(param_1,param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031521c FUN_14031521c body=255 status=ok
// SIG undefined FUN_14031521c(void)

void FUN_14031521c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar9);
      if (lVar5 != 0) {
        uVar8 = FUN_14031531c();
        cVar7 = FUN_1448093f4(lVar5,uVar8);
        if (cVar7 != '\0') {
          lVar5 = *(longlong *)(lVar4 + lVar9);
          if (lVar5 == 0) {
LAB_1403152f3:
            local_48 = 0;
            plStack_40 = (longlong *)0x0;
          }
          else {
            uVar8 = FUN_14031531c();
            cVar7 = FUN_1448093f4(lVar5,uVar8);
            if (cVar7 == '\0') goto LAB_1403152f3;
            local_48 = *(undefined8 *)(lVar4 + lVar9);
            plStack_40 = *(longlong **)(lVar4 + 8 + lVar9);
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
              UNLOCK();
            }
          }
          (*(code *)*param_2)(param_2[1],&local_48);
          plVar6 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_40)(plStack_40);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
      }
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031531c FUN_14031531c body=57 status=ok
// SIG undefined FUN_14031531c(void)

void FUN_14031531c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e68 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e68 = FUN_140002ddd(FUN_1464abe34,uVar1,L"TimeOfDayParameterKey");
  }
  return;
}



// FUNCTION 140315356 FUN_140315356 body=48 status=ok
// SIG undefined FUN_140315356(void)

void FUN_140315356(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 140315386 FUN_140315386 body=209 status=ok
// SIG undefined FUN_140315386(void)

void FUN_140315386(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Buf1;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48[0] = 8;
  FUN_14485a44c(*(undefined8 *)(param_1 + 8),param_2,local_48);
  lVar5 = FUN_140315458();
  lVar3 = DAT_14ca4b2f0;
  lVar6 = (longlong)DAT_14ca19b00;
  lVar7 = param_3 + 0x10;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    lVar7 = *(longlong *)(param_3 + 0x20);
  }
  iVar2 = *(int *)(lVar5 + 0x3c);
  iVar4 = DAT_14ca19b00 + 0x1f;
  if (-1 < lVar6) {
    iVar4 = DAT_14ca19b00;
  }
  puVar1 = (uint *)(lVar7 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)DAT_14ca19b00 & 0x1f);
  _Buf1 = (void *)((longlong)*(int *)(lVar3 + 4 + lVar6 * 0x60) + *(longlong *)(param_3 + 0x30));
  iVar4 = memcmp(_Buf1,local_48,(longlong)iVar2);
  if (iVar4 != 0) {
    *(undefined1 *)(param_3 + 8) = 1;
    memcpy(_Buf1,local_48,(longlong)iVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140315458 FUN_140315458 body=265 status=ok
// SIG undefined FUN_140315458(void)

undefined * FUN_140315458(void)

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
              0x110) < DAT_14ca1bd30) {
    FUN_144b3d300(&DAT_14ca1bd30);
    if (DAT_14ca1bd30 == -1) {
      FUN_1456fc4d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNaniteMaterialsParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x3e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1bcb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5c550);
      _Init_thread_footer(&DAT_14ca1bd30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca1bcb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140315562 FUN_140315562 body=65 status=ok
// SIG undefined FUN_140315562(void)

void FUN_140315562(longlong *param_1)

{
  FUN_14494dff0(param_1 + 0x4a);
  FUN_14494dff0(param_1 + 0x26);
  FUN_14494dff0(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403155a4 FUN_1403155a4 body=105 status=ok
// SIG undefined FUN_1403155a4(void)

longlong FUN_1403155a4(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 == 0) {
    uVar1 = FUN_141030812();
    lVar2 = FUN_14477b664(uVar1);
    *(longlong *)(param_1 + 0xd8) = lVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if (lVar3 == 0) {
    if ((*(longlong *)(param_1 + 0xd0) == 0) || (lVar2 == 0)) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14494cb38(lVar2);
      *(longlong *)(param_1 + 0xe0) = lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 14031560e FUN_14031560e body=169 status=ok
// SIG undefined FUN_14031560e(void)

double * FUN_14031560e(longlong param_1,double *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + -0x1100);
  plVar3 = (longlong *)FUN_14494e0ba(plVar1);
  if ((plVar3 == (longlong *)0x0) &&
     (plVar3 = (longlong *)(**(code **)(*plVar1 + 0x5d0))(plVar1), plVar3 == (longlong *)0x0)) {
    uVar2 = *(ushort *)(param_1 + 0x8c8);
    *param_2 = (double)((float)*(ushort *)(param_1 + 0x8ca) * 360.0 * 1.5258789e-05);
    param_2[1] = (double)((float)uVar2 * 360.0 * 1.5258789e-05);
    param_2[2] = 0.0;
    return param_2;
  }
  (**(code **)(*plVar3 + 0x680))(plVar3,param_2);
  return param_2;
}



// FUNCTION 1403156b8 FUN_1403156b8 body=164 status=ok
// SIG undefined FUN_1403156b8(void)

void FUN_1403156b8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x3c8) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 0x38,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031575e FUN_14031575e body=135 status=ok
// SIG undefined FUN_14031575e(void)

undefined8 * FUN_14031575e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    lVar4 = FUN_140927942();
  }
  uVar3 = *param_2;
  uVar2 = FUN_14477b664(lVar4);
  uVar1 = param_2[2];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = uVar3;
  uVar3 = FUN_14477b664(uVar2);
  uVar3 = FUN_14477b664(uVar3);
  param_1[6] = uVar3;
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1403157e6(param_1 + 5);
  return param_1;
}



// FUNCTION 1403157e6 FUN_1403157e6 body=89 status=ok
// SIG undefined FUN_1403157e6(void)

void FUN_1403157e6(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = FUN_140315840(lVar1);
    if (lVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else if (lVar1 != lVar2) {
      param_1[2] = 0;
      uVar3 = FUN_14477b664(lVar2);
      uVar3 = FUN_14477b664(uVar3);
      param_1[1] = uVar3;
    }
  }
  return;
}



// FUNCTION 140315840 FUN_140315840 body=104 status=ok
// SIG undefined FUN_140315840(void)

longlong FUN_140315840(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    plVar2 = &DAT_14c9a6180;
    if (DAT_14c9a6200 != (longlong *)0x0) {
      plVar2 = DAT_14c9a6200;
    }
    if ((longlong)DAT_14c9a6208 != 0) {
      lVar3 = (longlong)DAT_14c9a6208 << 4;
      while ((lVar1 = *plVar2, lVar1 != param_1 &&
             (((lVar1 == 0 || (*(int *)(param_1 + 0x38) < *(int *)(lVar1 + 0x38))) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
               != lVar1 + 0x30))))) {
        plVar2 = plVar2 + 2;
        lVar3 = lVar3 + -0x10;
        if (lVar3 == 0) {
          return 0;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        return lVar1;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1403158a8 FUN_1403158a8 body=338 status=ok
// SIG undefined FUN_1403158a8(void)

undefined8 * FUN_1403158a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adc5a30;
  param_1[0xe] = &DAT_14a176f00;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &PTR_FUN_14a177080;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_14472eb64(param_1 + 0xf,0);
  }
  param_1[0x15] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xa4)) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
    FUN_1446efbd8(param_1 + 0x11,0);
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14adc62b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403159fa FUN_1403159fa body=1236 status=ok
// SIG undefined FUN_1403159fa(void)

void FUN_1403159fa(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adafe70;
  puVar3 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar3 == (undefined8 *)0x0) goto LAB_140315b33;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140315a57;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140315a5c;
      goto LAB_140315a89;
    }
LAB_140315a5c:
    puVar9 = (undefined8 *)*puVar3;
    puVar17 = puVar3;
LAB_140315a62:
    (*(code *)*puVar9)(puVar17,1);
  }
  else {
LAB_140315a57:
    if (iVar6 == 0x10) goto LAB_140315a5c;
LAB_140315a89:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_140315a5c;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_140315a5c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar9 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar9;
      if (puVar11 != (uint *)0x0) goto LAB_140315bfc;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar9 = puVar10;
        FUN_140217a48(puVar9);
        puVar11 = (uint *)*puVar9;
LAB_140315bfc:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar2 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar9;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar9 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_140315c7c;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_140315c7c:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14adbc2c0;
      puVar17[0x15] = puVar3;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_140315b20;
      }
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_140315b20;
      puVar9 = (undefined8 *)*puVar17;
      goto LAB_140315a62;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adbc280;
    local_68[0] = &LAB_143a0cb80;
    local_40 = puVar3;
    FUN_14005a792(&DAT_14ca9a440,L"FDeleteProxyRT",&DAT_14cb3ad18);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_140315b20:
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
LAB_140315b33:
  FUN_144760e82(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140315ed0 FUN_140315ed0 body=12 status=ok
// SIG undefined FUN_140315ed0(void)

void FUN_140315ed0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140315ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140315edc FUN_140315edc body=31 status=ok
// SIG undefined FUN_140315edc(void)

undefined8 FUN_140315edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140315efc FUN_140315efc body=75 status=ok
// SIG undefined FUN_140315efc(void)

undefined8 FUN_140315efc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14001cc68(0x48,0x10);
    FUN_140315f48(uVar2,param_1,lVar1,param_2);
  }
  return uVar2;
}



// FUNCTION 140315f48 FUN_140315f48 body=164 status=ok
// SIG undefined FUN_140315f48(void)

undefined8 *
FUN_140315f48(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *(undefined4 *)(param_1 + 1) = DAT_14c846338;
  *param_1 = DAT_14c846330;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x101;
  lVar2 = *(longlong *)(param_3 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x44) = param_4;
  _Src = *(void **)(lVar2 + 0x490);
  iVar1 = *(int *)(lVar2 + 0x498);
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 << 2);
  }
  FUN_14098c1d0(param_1,param_3,param_2);
  return param_1;
}



// FUNCTION 140315fec FUN_140315fec body=517 status=ok
// SIG undefined FUN_140315fec(void)

undefined8 FUN_140315fec(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_1403ca227();
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_1447210f0();
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    fVar7 = 1.0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x448) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x2500);
      fVar5 = (float)(**(code **)(*plVar2 + 0x6e8))(plVar2);
      fVar5 = tanf(fVar5 * 0.5 * 0.017453292);
      fVar6 = tanf(*(float *)(plVar2 + 0x75) * 0.5 * 0.017453292);
      fVar5 = (float)(-(uint)(0.0 < fVar6) & (uint)(fVar5 / fVar6));
      if (1e-08 <= fVar5) {
        fVar7 = fVar5;
      }
    }
    *(float *)(param_1 + 0xa0) = fVar7;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar3 + 0x148);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x718))
              (*(longlong **)(param_1 + 0x28),param_1 + 0xa8,param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined2 *)(param_1 + 0xf8) = 0x100;
    *(undefined4 *)(param_1 + 0xfa) = 0;
    *(undefined1 *)(param_1 + 0xfe) = 0;
    *(undefined2 *)(param_1 + 0xff) = 0x101;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined2 *)(param_1 + 0x110) = 0x101;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0x800000000;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0x400000000;
    *(undefined8 *)(param_1 + 0xe8) = DAT_14cbcef00;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x3d0);
    uVar4 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),1);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
      *(undefined4 *)(param_1 + 0x160) = 1;
      *(undefined4 *)(param_1 + 0x148) = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1403161f2 FUN_1403161f2 body=180 status=ok
// SIG undefined FUN_1403161f2(void)

void FUN_1403161f2(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  uint local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 1;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_30 = 0;
  local_2c = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_5c = *(undefined4 *)(param_2 + 1);
  local_64 = *param_2;
  local_78 = 0;
  local_80 = param_5;
  local_28 = param_3;
  FUN_1403162a8(param_1,0);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403162a8 FUN_1403162a8 body=1492 status=ok
// SIG undefined FUN_1403162a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1403162a8(longlong param_1,undefined8 param_2,uint *param_3,ulonglong param_4,longlong param_5,
             undefined8 param_6,byte param_7)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar8;
  uint uVar9;
  char *_Str;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  char **ppcVar13;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d0;
  byte local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_8c;
  char *local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  char *local_50;
  ulonglong local_48;
  size_t sVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca769d0) && (FUN_144b3d300(&DAT_14ca769d0), DAT_14ca769d0 == -1)) {
    DAT_14ca769c0 = 0x800000014a347ede;
    local_88 = (char *)CONCAT44(local_88._4_4_,10);
    DAT_14ca769c8 = FUN_14577453c();
    DAT_14ca769cc = '\x01';
    _Init_thread_footer(&DAT_14ca769d0);
  }
  uVar12 = *(ulonglong *)(param_5 + 0x38);
  if (uVar12 == 0) {
    if ((longlong)DAT_14ca769c0 < 0) {
      _Str = (char *)(DAT_14ca769c0 & 0x7fffffffffffffff);
      if (DAT_14ca769cc == '\x01') {
        ppcVar13 = &local_88;
        FUN_1446f470e(ppcVar13,_Str,1);
      }
      else {
        local_88 = _Str;
        if (_Str == (char *)0x0) {
          uVar4 = 0;
        }
        else {
          sVar7 = strlen(_Str);
          uVar4 = (undefined4)sVar7;
        }
        local_80 = CONCAT44(local_80._4_4_,uVar4);
        ppcVar13 = &local_50;
        FUN_14001c09c(ppcVar13,&local_88,1);
      }
      uVar5 = (ulonglong)*(uint *)ppcVar13;
      uVar12 = (ulonglong)DAT_14ca769c8 << 0x20;
      DAT_14ca769c0 = uVar5;
    }
    else {
      uVar5 = (ulonglong)DAT_14ca769c8 << 0x20;
      uVar12 = DAT_14ca769c0 & 0xffffffff;
    }
    uVar12 = uVar12 | uVar5;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca76938) && (FUN_144b3d300(&DAT_14ca76938), DAT_14ca76938 == -1)) {
    _DAT_14ca76928 = 0x800000014a347ede;
    local_88 = (char *)CONCAT44(local_88._4_4_,10);
    _DAT_14ca76930 = FUN_14577453c();
    DAT_14ca76934 = 1;
    _Init_thread_footer(&DAT_14ca76938);
  }
  if (uVar12 == 0) {
    FUN_1446f57c6(&DAT_14ca76928,&local_50);
  }
  uVar1 = param_3[2];
  uVar9 = param_3[1];
  local_88 = (char *)CONCAT44(local_88._4_4_,1);
  local_80 = 0;
  local_70 = 0x1000100000001;
  local_68 = 0;
  uStack_64 = 1;
  uStack_60 = 0;
  uStack_5c = 1;
  local_58 = 0;
  local_78 = (ulonglong)*param_3 + 0xf & 0xfffffffffffffff0;
  uVar8 = uVar1 >> 1 & 4;
  uVar10 = uVar8 + 8;
  if ((uVar1 & 0x2100) != 0) {
    uVar10 = uVar8;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    uVar10 = uVar10 | 0x20;
  }
  if ((uVar1 & 0x1008) != 0 || (uVar1 & 0x2100) == 0) {
    local_58 = uVar10;
  }
  if ((uVar1 >> 0x16 & 1) == 0) {
    uVar10 = 0x10;
    if ((uVar9 != 0) && ((uVar1 >> 0x10 & 1) != 0 || (uVar1 & 0x90) == 0)) {
      uVar10 = uVar9;
      uVar8 = 0x10;
      do {
        uVar11 = uVar8;
        uVar8 = (int)uVar10 % (int)uVar11;
        uVar10 = uVar11;
      } while (uVar8 != 0);
      uVar10 = (int)uVar9 / (int)uVar11 << 4;
    }
  }
  else {
    uVar10 = 0x10000;
  }
  local_d8 = uVar1 & 0x2000;
  lVar2 = *(longlong *)(param_5 + 8);
  uVar9 = 0xac3;
  if ((uVar1 & 6) == 0) {
    if ((0x100 < uVar10 || (local_58 & 4) != 0 && local_d8 == 0) && ((local_58 & 7) != 0)) {
      uVar8 = (uint)param_4;
      if ((param_4 & 0xfffbffff) == 0) {
        uVar9 = 0xac3;
        if ((local_58 & 4) != 0) {
          uVar9 = 0;
        }
        bVar3 = true;
        goto LAB_140316465;
      }
      bVar3 = true;
      if ((int)uVar8 < 0xc00) {
        if ((uVar8 == 0x400) || (uVar8 == 0x800)) {
LAB_140316565:
          uVar9 = 8;
          goto LAB_140316465;
        }
        if (uVar8 == 2) {
          uVar9 = 0;
          goto LAB_140316465;
        }
      }
      else if ((int)uVar8 < 0x1000) {
        if (uVar8 == 0xc00) goto LAB_140316565;
      }
      else if ((int)uVar8 < 0x8000) {
        if (uVar8 == 0x1000) {
          uVar9 = 4;
          goto LAB_140316465;
        }
        if (uVar8 == 0x2000) {
          uVar9 = 0x400;
          goto LAB_140316465;
        }
        if (uVar8 == 0x4000) {
          uVar9 = 0x1000;
          goto LAB_140316465;
        }
      }
      else if ((int)uVar8 < 0x901ff) {
        if ((uVar8 == 0x8000) || (uVar8 == 0x8200)) {
          uVar9 = 0x10;
          goto LAB_140316465;
        }
      }
      else if ((uVar8 == 0x901ff) || (uVar8 == 0x903ff)) goto LAB_140316465;
      uVar9 = 0xc0;
      if ((param_4 & 0x60) == 0) {
        uVar9 = uVar8 & 0x60;
      }
      uVar9 = uVar8 * 4 & 0x40 | uVar9;
      uVar11 = uVar9 + 3;
      if ((param_4 & 8) == 0) {
        uVar11 = uVar9;
      }
      uVar11 = (uint)(param_4 >> 4) & 0x20 |
               (uVar8 & 0x100) << 5 | (uVar8 & 4) << 7 | (uVar8 & 0x80) << 4 | uVar11;
      uVar9 = uVar11;
      if (((uVar8 >> 0x13 & 1) != 0) && (uVar9 = uVar11 + 0x1000000, DAT_14ca84f34 == '\0')) {
        uVar9 = uVar11;
      }
      goto LAB_140316465;
    }
    uVar9 = 0x400000;
    if (local_d8 == 0) {
      uVar9 = 0xac3;
    }
  }
  bVar3 = false;
LAB_140316465:
  local_d8 = local_d8 >> 0xd;
  local_d0 = 0x400;
  if (!bVar3) {
    local_d0 = uVar9;
  }
  if (lVar2 == 0) {
    local_d0 = uVar9;
  }
  local_8c = 1;
  if ((uVar1 >> 0xb & 1) == 0) {
    local_8c = *(undefined4 *)(param_5 + 0x24);
  }
  local_c0 = &local_8c;
  local_b0 = *(undefined8 *)(param_5 + 0x30);
  local_c8 = lVar2 != 0 | param_7;
  local_b8 = param_6;
  uVar6 = FUN_1401297de(**(undefined8 **)(param_1 + 0x1b0),&local_88,uVar10,param_3);
  if (lVar2 != 0) {
    FUN_140129ec2(uVar6,param_2,*(undefined8 *)(param_5 + 8),uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14031688a FUN_14031688a body=133 status=ok
// SIG undefined FUN_14031688a(void)

void FUN_14031688a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x478) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x470);
    lVar2 = (longlong)*(int *)(param_1 + 0x478) * 0x50;
    do {
      local_48 = *(undefined4 *)(param_1 + 0x10);
      uStack_44 = *(undefined4 *)(param_1 + 0x14);
      uStack_40 = *(undefined4 *)(param_1 + 0x18);
      uStack_3c = *(undefined4 *)(param_1 + 0x1c);
      local_38 = *(undefined4 *)(param_1 + 0x20);
      uStack_34 = *(undefined4 *)(param_1 + 0x24);
      uStack_30 = *(undefined4 *)(param_1 + 0x28);
      uStack_2c = *(undefined4 *)(param_1 + 0x2c);
      FUN_140316910(lVar1,&local_48);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140316910 FUN_140316910 body=222 status=ok
// SIG undefined FUN_140316910(void)

void FUN_140316910(longlong *param_1,double *param_2)

{
  uint uVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  longlong lVar11;
  
  if ((((*param_1 != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
      (*(int *)((longlong)param_1 + 0xc) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar11 != 0) &&
       ((*(int *)(lVar11 + 0x10) == *(int *)((longlong)param_1 + 0xc) &&
        ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
      cVar10 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
      if (cVar10 != '\0') {
        pdVar2 = (double *)*param_1;
        if ((((*pdVar2 != *param_2) || (NAN(*pdVar2) || NAN(*param_2))) || (pdVar2[1] != param_2[1])
            ) || (((NAN(pdVar2[1]) || NAN(param_2[1]) || (pdVar2[2] != param_2[2])) ||
                  ((NAN(pdVar2[2]) || NAN(param_2[2]) ||
                   ((pdVar2[3] != param_2[3] || (NAN(pdVar2[3]) || NAN(param_2[3]))))))))) {
          uVar3 = *(undefined4 *)param_2;
          uVar4 = *(undefined4 *)((longlong)param_2 + 4);
          uVar5 = *(undefined4 *)(param_2 + 1);
          uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
          uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
          uVar8 = *(undefined4 *)(param_2 + 3);
          uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(undefined4 *)(pdVar2 + 2) = *(undefined4 *)(param_2 + 2);
          *(undefined4 *)((longlong)pdVar2 + 0x14) = uVar7;
          *(undefined4 *)(pdVar2 + 3) = uVar8;
          *(undefined4 *)((longlong)pdVar2 + 0x1c) = uVar9;
          *(undefined4 *)pdVar2 = uVar3;
          *(undefined4 *)((longlong)pdVar2 + 4) = uVar4;
          *(undefined4 *)(pdVar2 + 1) = uVar5;
          *(undefined4 *)((longlong)pdVar2 + 0xc) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0001403169eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)param_1[2] + 0x20))
                    ((longlong *)param_1[2],param_1[4],param_1[3]);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140316a06 FUN_140316a06 body=38 status=ok
// SIG undefined FUN_140316a06(void)

undefined8 FUN_140316a06(undefined8 param_1,int param_2)

{
  FUN_140316a2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140316a2c FUN_140316a2c body=72 status=ok
// SIG undefined FUN_140316a2c(void)

void FUN_140316a2c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149e17a80;
  if (DAT_14c8443b8 != 0) {
    FUN_140316a74(DAT_14c8443b8,param_1 + 1);
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140316a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140316a74 FUN_140316a74 body=822 status=ok
// SIG undefined FUN_140316a74(void)

void FUN_140316a74(LPCRITICAL_SECTION param_1,ulonglong *param_2)

{
  LPCRITICAL_SECTION p_Var1;
  int *piVar2;
  LONG *pLVar3;
  ulonglong uVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  _RTL_CRITICAL_SECTION *p_Var6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  HANDLE *ppvVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  bool bVar18;
  
  EnterCriticalSection(param_1);
  plVar14 = (longlong *)param_2[1];
  if (plVar14 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar9 = (int)plVar14[1];
    do {
      iVar8 = iVar9;
      if (iVar8 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_140316bf9;
      }
      LOCK();
      iVar9 = (int)plVar14[1];
      bVar18 = iVar8 == iVar9;
      if (bVar18) {
        *(int *)(plVar14 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      UNLOCK();
    } while (!bVar18);
    uVar4 = *param_2;
    if (uVar4 != 0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      if (param_1[1].LockCount != param_1[2].RecursionCount) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar14 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar17 = (int *)((longlong)plVar14 + 0xc);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        uVar10 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        ppvVar12 = param_1[2].LockSemaphore;
        if (param_1[2].LockSemaphore == (HANDLE *)0x0) {
          ppvVar12 = &param_1[2].OwningThread;
        }
        uVar13 = (longlong)(int)(uVar10 >> 0x10 ^ uVar10) & (longlong)(int)param_1[2].SpinCount - 1U
        ;
        iVar9 = *(int *)((longlong)ppvVar12 + uVar13 * 4);
        if (iVar9 != -1) {
          p_Var1 = param_1 + 1;
          piVar17 = (int *)((longlong)ppvVar12 + uVar13 * 4);
LAB_140316b45:
          p_Var5 = p_Var1->DebugInfo;
          lVar11 = (longlong)iVar9;
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          uVar13 = *(ulonglong *)(&p_Var5->Type + lVar11 * 0xc);
          p_Var6 = (&p_Var5->CriticalSection)[lVar11 * 3];
          if (p_Var6 != (_RTL_CRITICAL_SECTION *)0x0) {
            LOCK();
            p_Var6->LockCount = p_Var6->LockCount + 1;
            UNLOCK();
            LOCK();
            pLVar3 = &p_Var6->LockCount;
            *pLVar3 = *pLVar3 + -1;
            UNLOCK();
            if (*pLVar3 == 0) {
              (**(code **)p_Var6->DebugInfo)(p_Var6);
              LOCK();
              pLVar3 = &p_Var6->RecursionCount;
              *pLVar3 = *pLVar3 + -1;
              UNLOCK();
              if (*pLVar3 == 0) {
                (*(code *)(p_Var6->DebugInfo->ProcessLocksList).Flink)(p_Var6);
              }
            }
          }
          LOCK();
          plVar7 = plVar14 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          if (uVar13 != uVar4) goto LAB_140316c57;
          iVar9 = *piVar17;
          lVar11 = (longlong)iVar9;
          p_Var5 = param_1[1].DebugInfo;
          ppvVar12 = &param_1[2].OwningThread;
          if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
            ppvVar12 = param_1[2].LockSemaphore;
          }
          lVar16 = (longlong)*(int *)((longlong)&p_Var5->ProcessLocksList + lVar11 * 0x18 + 4);
          iVar15 = *(int *)((longlong)ppvVar12 + lVar16 * 4);
          if (iVar15 == iVar9) {
            piVar17 = (int *)(lVar16 * 4 + (longlong)ppvVar12);
          }
          else {
            do {
              piVar17 = (int *)((longlong)&p_Var5->ProcessLocksList + (longlong)iVar15 * 0x18);
              iVar15 = *piVar17;
            } while (iVar15 != iVar9);
          }
          *piVar17 = *(int *)((longlong)&p_Var5->ProcessLocksList + lVar11 * 0x18);
          p_Var6 = (&p_Var1->DebugInfo->CriticalSection)[lVar11 * 3];
          if (p_Var6 != (_RTL_CRITICAL_SECTION *)0x0) {
            LOCK();
            pLVar3 = &p_Var6->LockCount;
            *pLVar3 = *pLVar3 + -1;
            UNLOCK();
            if (*pLVar3 == 0) {
              (**(code **)p_Var6->DebugInfo)(p_Var6);
              LOCK();
              pLVar3 = &p_Var6->RecursionCount;
              *pLVar3 = *pLVar3 + -1;
              UNLOCK();
              if (*pLVar3 == 0) {
                (*(code *)(p_Var6->DebugInfo->ProcessLocksList).Flink)(p_Var6);
              }
            }
          }
          FUN_140316dc2(p_Var1,iVar9);
        }
      }
LAB_140316be5:
      LOCK();
      plVar7 = plVar14 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar17 = (int *)((longlong)plVar14 + 0xc);
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
LAB_140316bf9:
    plVar7 = (longlong *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar17 = (int *)((longlong)plVar7 + 0xc);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if (iVar8 != 0) {
      LOCK();
      plVar7 = plVar14 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar17 = (int *)((longlong)plVar14 + 0xc);
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140316c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
LAB_140316c57:
  iVar9 = *(int *)((longlong)&p_Var5->ProcessLocksList + lVar11 * 0x18);
  piVar17 = (int *)((longlong)&p_Var5->ProcessLocksList + lVar11 * 0x18);
  if (iVar9 == -1) goto LAB_140316be5;
  goto LAB_140316b45;
}



// FUNCTION 140316daa FUN_140316daa body=24 status=ok
// SIG undefined FUN_140316daa(void)

void FUN_140316daa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140316dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140316dc2 FUN_140316dc2 body=114 status=ok
// SIG undefined FUN_140316dc2(void)

void FUN_140316dc2(longlong *param_1,int param_2)

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



// FUNCTION 140316e34 FUN_140316e34 body=150 status=ok
// SIG undefined FUN_140316e34(void)

void FUN_140316e34(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x188) == '\x01') {
    FUN_140319860();
    if ((((*(longlong **)(param_1 + 0x180) != (longlong *)0x0) && (*(int *)(param_1 + 0x17c) != 0))
        && (uVar1 = *(uint *)(param_1 + 0x178), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x17c))) &&
         ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))();
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x178) == '\x03')) {
          *(undefined1 *)(param_1 + 0x189) = *(undefined1 *)(param_1 + 0x188);
        }
      }
    }
  }
  return;
}



// FUNCTION 140316eca FUN_140316eca body=89 status=ok
// SIG undefined FUN_140316eca(void)

undefined8 FUN_140316eca(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((((*(int *)(param_1 + 0x24c) != 0) && (uVar1 = *(uint *)(param_1 + 0x248), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x24c))) &&
      (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))))) {
    uVar3 = *(undefined8 *)(*plVar2 + 0x6e8);
  }
  return uVar3;
}


