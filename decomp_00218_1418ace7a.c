// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418ace7a FUN_1418ace7a body=48 status=ok
// SIG undefined FUN_1418ace7a(void)

void FUN_1418ace7a(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab65fd0);
  FUN_1448284b2(param_1,param_2);
  return;
}



// FUNCTION 1418aceaa FUN_1418aceaa body=155 status=ok
// SIG undefined FUN_1418aceaa(void)

void FUN_1418aceaa(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0xc78) == 0) ||
     ((-1 < *(short *)(param_1 + 0xc80) && (*(longlong *)(param_1 + 0xc88) == 0)))) {
    plVar1 = (longlong *)FUN_14092a406(param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x70))(plVar1,local_40);
      FUN_1406407c2(local_38,local_40);
      FUN_140365ba6(param_1 + 0xc58,local_38,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418acf46 FUN_1418acf46 body=233 status=ok
// SIG undefined FUN_1418acf46(void)

void FUN_1418acf46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + -0xb90) != 0) &&
      (*(char *)(*(longlong *)(param_1 + -0xb90) + 0x178) == '\x03')) &&
     (*(char *)(param_1 + 0xe5) == '\x02')) {
    FUN_1403fa066(param_2 + 0x20,local_50,0);
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,local_58,local_50,1);
    FUN_140bfca4e(param_1 + 0xd8,&DAT_14cb246b0,local_58,0);
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



// FUNCTION 1418ad04c FUN_1418ad04c body=32 status=ok
// SIG undefined FUN_1418ad04c(void)

undefined8 FUN_1418ad04c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxGameSpawnPoint");
  return param_2;
}



// FUNCTION 1418ad06c FUN_1418ad06c body=705 status=ok
// SIG undefined FUN_1418ad06c(void)

void FUN_1418ad06c(longlong param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  float local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == '\x02') {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      lVar11 = *(longlong *)(param_1 + 0x30);
      if ((lVar11 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar11);
      }
    }
    else {
      lVar11 = 0;
    }
    local_c0[0] = '\0';
    local_98 = 0;
    FUN_1456bb102(local_c0,lVar11);
    pfVar12 = &local_90;
    FUN_1448729ea(param_1 + 0x60,pfVar12,local_c0);
    if (local_70 == 3) {
      uVar4 = 3;
      fVar13 = local_90;
    }
    else {
      pfVar7 = &local_68;
      FUN_1400b56fe(pfVar7,&local_90,3);
      fVar13 = 0.0;
      if (local_48 != 0) {
        fVar13 = local_68;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_50) {
          pfVar7 = (float *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar2)(pfVar7);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
      uVar4 = (uint)local_70;
    }
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    *(float *)(param_1 + 0xb0) = fVar13;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_78) {
        pfVar12 = (float *)CONCAT44(uStack_8c,local_90);
      }
      (*pcVar2)(pfVar12);
    }
    if (0x18 < local_78) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
    lVar11 = DAT_14c9a3da0;
    if ((longlong)local_98 != 0) {
      lVar9 = (longlong)local_98 + -1;
      lVar10 = lVar9 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
      if (*(longlong *)(lVar11 + lVar10) != 0) {
        FUN_1400020a8();
      }
      lVar11 = DAT_14c9a3da0;
      iVar8 = (int)lVar9;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
      }
      *(undefined4 *)(lVar11 + lVar10) = 0xffffffff;
      iVar5 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar5 = DAT_14c9a3dd0;
      }
      *(int *)(lVar11 + 4 + lVar10) = iVar5;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar6 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar6 = DAT_14c9a3dc0;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      bVar3 = (byte)lVar9 & 0x1f;
      DAT_14c9a3dd0 = iVar8;
      *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
           (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      local_98 = 0;
    }
    if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ad32e FUN_1418ad32e body=364 status=ok
// SIG undefined FUN_1418ad32e(void)

ulonglong FUN_1418ad32e(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  undefined7 uVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x30);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) goto LAB_1418ad3a2;
    FUN_1448c1924(lVar5,&local_30);
    if ((local_30 == 0) || (*(int *)(local_30 + 0x180) < 1)) {
LAB_1418ad387:
      plVar4 = (longlong *)0x0;
    }
    else {
      local_48 = *(undefined8 *)(local_30 + 0x18);
      local_40 = *(undefined8 *)(local_30 + 0x20);
      local_38 = 0;
      local_34 = 0;
      lVar5 = FUN_140b94fc8();
      if (lVar5 == 0) goto LAB_1418ad387;
      plVar4 = (longlong *)FUN_14479d2ce(lVar5 + 0x18);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = FUN_144a7b040();
      plVar3 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
      uVar7 = (undefined7)((ulonglong)plVar4 >> 8);
      uVar6 = CONCAT71(uVar7,1);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_144a7b040();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
          if (lVar5 != 0) {
            fVar8 = (float)FUN_140b54f46(lVar5);
            uVar6 = CONCAT71(uVar7,fVar8 <= *(float *)(param_1 + 0xb0));
          }
        }
      }
      goto LAB_1418ad3a4;
    }
  }
LAB_1418ad3a2:
  uVar6 = 0;
LAB_1418ad3a4:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ad49c FUN_1418ad49c body=211 status=ok
// SIG undefined FUN_1418ad49c(void)

void FUN_1418ad49c(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_21);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar3 = param_1[8];
  if (lVar3 != 0) {
    iVar1 = (int)param_1[7];
    *(uint *)(param_1 + 7) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x3c) < iVar1 + 1U) {
      FUN_14899acf2(param_1 + 6,iVar1);
      lVar3 = param_1[8];
    }
    *(longlong *)(param_1[6] + (longlong)iVar1 * 8) = lVar3;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    param_1[8] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ad570 FUN_1418ad570 body=40 status=ok
// SIG undefined FUN_1418ad570(void)

void FUN_1418ad570(undefined8 param_1,longlong param_2)

{
  FUN_140907f3e();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cb8c240,0);
  return;
}



// FUNCTION 1418ad598 FUN_1418ad598 body=26 status=ok
// SIG undefined FUN_1418ad598(void)

void FUN_1418ad598(undefined8 param_1)

{
  FUN_140a0f7b0();
  FUN_140cdcab8(param_1);
  return;
}



// FUNCTION 1418ad5b2 FUN_1418ad5b2 body=40 status=ok
// SIG undefined FUN_1418ad5b2(void)

undefined8 FUN_1418ad5b2(undefined8 param_1,int param_2)

{
  FUN_14076bd02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad5da FUN_1418ad5da body=14 status=ok
// SIG undefined FUN_1418ad5da(void)

void FUN_1418ad5da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1418ad5e8 FUN_1418ad5e8 body=29 status=ok
// SIG undefined FUN_1418ad5e8(void)

undefined8 FUN_1418ad5e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad606 FUN_1418ad606 body=29 status=ok
// SIG undefined FUN_1418ad606(void)

undefined8 FUN_1418ad606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad624 FUN_1418ad624 body=118 status=ok
// SIG undefined FUN_1418ad624(void)

void FUN_1418ad624(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42dd50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418ad69a FUN_1418ad69a body=68 status=ok
// SIG undefined FUN_1418ad69a(void)

undefined8 * FUN_1418ad69a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42de90;
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



// FUNCTION 1418ad6de FUN_1418ad6de body=118 status=ok
// SIG undefined FUN_1418ad6de(void)

void FUN_1418ad6de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42de90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418ad754 FUN_1418ad754 body=353 status=ok
// SIG undefined FUN_1418ad754(void)

void FUN_1418ad754(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418ad7d9;
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
LAB_1418ad7d9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418ad8b6 FUN_1418ad8b6 body=29 status=ok
// SIG undefined FUN_1418ad8b6(void)

undefined8 FUN_1418ad8b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad8d4 FUN_1418ad8d4 body=29 status=ok
// SIG undefined FUN_1418ad8d4(void)

undefined8 FUN_1418ad8d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad8f2 FUN_1418ad8f2 body=29 status=ok
// SIG undefined FUN_1418ad8f2(void)

undefined8 FUN_1418ad8f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad910 FUN_1418ad910 body=29 status=ok
// SIG undefined FUN_1418ad910(void)

undefined8 FUN_1418ad910(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad92e FUN_1418ad92e body=29 status=ok
// SIG undefined FUN_1418ad92e(void)

undefined8 FUN_1418ad92e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ad94c FUN_1418ad94c body=147 status=ok
// SIG undefined FUN_1418ad94c(void)

int FUN_1418ad94c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x168);
    lVar4 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar1 = FUN_1409d2f40(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 == 0) {
          return 0;
        }
        if ((longlong)*(int *)(param_1 + 0x160) == 0) {
          return 0;
        }
        lVar4 = 0;
        iVar3 = 0;
        do {
          iVar3 = iVar3 + (uint)(*(int *)(*(longlong *)(param_1 + 0x158) + 4 + lVar4) ==
                                *(int *)(lVar2 + 8));
          lVar4 = lVar4 + 0x14;
        } while ((longlong)*(int *)(param_1 + 0x160) * 0x14 != lVar4);
        return iVar3;
      }
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 1418ad9e0 FUN_1418ad9e0 body=543 status=ok
// SIG undefined FUN_1418ad9e0(void)

int FUN_1418ad9e0(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_a8 [40];
  int local_80;
  int local_7c;
  longlong *local_78;
  longlong local_70;
  char *local_68;
  undefined **local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = DAT_14cb8c3a0;
  if (*param_2 == '\x01') {
    piVar10 = &DAT_14cb8c3a0;
    if ((longlong)*(int *)(param_1 + 0x170) != 0) {
      uVar4 = *(undefined8 *)(param_2 + 8);
      lVar11 = *(longlong *)(param_1 + 0x168);
      lVar14 = (longlong)*(int *)(param_1 + 0x170) << 4;
      do {
        cVar5 = FUN_1409d2f40(lVar11,uVar4);
        if (cVar5 != '\0') {
          piVar10 = &DAT_14cb8c3a0;
          if (lVar11 != 0) {
            piVar10 = (int *)(lVar11 + 8);
          }
          break;
        }
        lVar11 = lVar11 + 0x10;
        lVar14 = lVar14 + -0x10;
      } while (lVar14 != 0);
    }
    iVar6 = *piVar10;
    if (*piVar10 != 0) goto LAB_1418ada60;
  }
  else {
LAB_1418ada60:
    uVar3 = *(uint *)(param_1 + 0x160);
    uVar13 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      local_78 = (longlong *)(param_1 + 0x158);
      iVar12 = -uVar3;
      lVar11 = uVar13 * 0x14 + -0x10;
      lVar14 = 0;
      iVar9 = -1;
      iVar8 = 0;
      local_80 = iVar6;
      local_68 = param_2;
      do {
        uVar1 = uVar13 + lVar14;
        if ((*local_68 != '\x01') || (*(int *)(*local_78 + lVar11) == iVar6)) {
          if ((0 < (longlong)(uVar13 + lVar14)) &&
             ((int)(uVar3 + iVar9) < *(int *)(param_1 + 0x160))) {
            uVar7 = uVar1 - 1 & 0xffffffff;
            local_70 = uVar7 * 5;
            lVar2 = *(longlong *)(param_1 + 0x158) + uVar7 * 0x14;
            local_7c = iVar8;
            FUN_140c5fc30(param_1,*(undefined4 *)(lVar2 + 4));
            local_60 = &PTR_FUN_14b42da40;
            local_50 = 0;
            local_58 = lVar2;
            FUN_140c5fd14(param_1,&local_60);
            iVar6 = *(int *)(param_1 + 0x160);
            if (uVar3 + (int)lVar14 != iVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x158) + local_70 * 4),
                      (void *)(*(longlong *)(param_1 + 0x158) + local_70 * 4 + 0x14),
                      (longlong)(iVar6 + iVar12) * 0x14);
              iVar6 = *(int *)(param_1 + 0x160);
            }
            *(int *)(param_1 + 0x160) = iVar6 + -1;
            FUN_140c5fe52(local_78);
            iVar8 = local_7c;
          }
          iVar8 = iVar8 + 1;
          iVar6 = local_80;
        }
        lVar14 = lVar14 + -1;
        iVar12 = iVar12 + 1;
        iVar9 = iVar9 + -1;
        lVar11 = lVar11 + -0x14;
      } while (1 < uVar1);
      if (*(uint *)(param_1 + 0x160) != uVar3) {
        FUN_140c5ef80(param_1,*(uint *)(param_1 + 0x160),uVar3);
      }
      goto LAB_1418adb7f;
    }
  }
  iVar8 = 0;
LAB_1418adb7f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 1418adc00 FUN_1418adc00 body=220 status=ok
// SIG undefined FUN_1418adc00(void)

void FUN_1418adc00(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1418adcdc FUN_1418adcdc body=96 status=ok
// SIG undefined FUN_1418adcdc(void)

void FUN_1418adcdc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1418add3c FUN_1418add3c body=96 status=ok
// SIG undefined FUN_1418add3c(void)

void FUN_1418add3c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1418add9c FUN_1418add9c body=68 status=ok
// SIG undefined FUN_1418add9c(void)

undefined8 * FUN_1418add9c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42f3a0;
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



// FUNCTION 1418adde0 FUN_1418adde0 body=118 status=ok
// SIG undefined FUN_1418adde0(void)

void FUN_1418adde0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42f3a0;
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



// FUNCTION 1418ade56 FUN_1418ade56 body=255 status=ok
// SIG undefined FUN_1418ade56(void)

void FUN_1418ade56(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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



// FUNCTION 1418adf56 FUN_1418adf56 body=110 status=ok
// SIG undefined FUN_1418adf56(void)

void FUN_1418adf56(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = (longlong)(int)param_2[1] << 5;
    plVar3 = (longlong *)(*param_2 + 0x14);
    do {
      plVar1 = plVar3;
      if (*plVar3 == 0) {
        plVar1 = param_3;
      }
      FUN_140553a9a(param_1,(longlong)plVar3 + -0x14,*(undefined1 *)((longlong)plVar3 + -0xc),
                    (int)plVar3[-1],*(undefined4 *)((longlong)plVar3 + -4),plVar1,(char)plVar3[1]);
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1418adfc4 FUN_1418adfc4 body=53 status=ok
// SIG undefined FUN_1418adfc4(void)

void FUN_1418adfc4(undefined8 *param_1)

{
  FUN_1408c28ac(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_1489a18bc(param_1,0);
  return;
}



// FUNCTION 1418adffa FUN_1418adffa body=418 status=ok
// SIG undefined FUN_1418adffa(void)

undefined8 * FUN_1418adffa(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14b3f62b0;
  *(undefined1 *)(param_1 + 1) = 0;
  cVar1 = *param_4;
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
    plVar4 = (longlong *)(param_4 + 8);
  }
  else {
    if (cVar1 == '\x02') {
      param_1[2] = *(undefined8 *)(param_4 + 8);
      goto LAB_1418ae086;
    }
    if (cVar1 != '\x03') goto LAB_1418ae086;
    param_1[2] = *(undefined8 *)(param_4 + 8);
    lVar7 = *(longlong *)(param_4 + 0x10);
    param_1[3] = lVar7;
    if (lVar7 == 0) {
      param_1[4] = *(undefined8 *)(param_4 + 0x18);
      *(char *)(param_1 + 5) = param_4[0x20];
      goto LAB_1418ae086;
    }
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
    param_1[4] = *(undefined8 *)(param_4 + 0x18);
    *(char *)(param_1 + 5) = param_4[0x20];
    if (*(char *)(param_1 + 1) != '\x01') goto LAB_1418ae086;
    plVar4 = param_1 + 2;
  }
  lVar7 = *plVar4;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0;
  if (lVar7 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 2) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar3;
LAB_1418ae086:
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)(param_4 + 0x28) != 0) {
    uVar5 = FUN_1448174c4(param_1 + 6);
    FUN_1400e08b0(uVar5,DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
  }
  *param_1 = &PTR_FUN_14b42f700;
  param_1[7] = param_2;
  param_1[8] = *param_3;
  return param_1;
}



// FUNCTION 1418ae19c FUN_1418ae19c body=125 status=ok
// SIG undefined FUN_1418ae19c(void)

void FUN_1418ae19c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) && (param_2[1] != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
    *(longlong *)(param_1 + 0x120) = lVar2;
    plVar3 = (longlong *)param_2[1];
    *(longlong **)(param_1 + 0x128) = plVar3;
    if (*param_2 == 0) {
      plVar3 = (longlong *)0x0;
    }
    lVar2 = (**(code **)(*plVar3 + 8))();
    if (lVar2 != 0) {
      iVar1 = FUN_14487fd02(lVar2);
      *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) & 0xfd | (iVar1 != 3) * '\x02';
    }
  }
  return;
}



// FUNCTION 1418ae21a FUN_1418ae21a body=132 status=ok
// SIG undefined FUN_1418ae21a(void)

ulonglong FUN_1418ae21a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14094904c(param_1,&local_28,param_2);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(char *)(local_28 + 0x148) == '\x01');
  }
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
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ae2a0 FUN_1418ae2a0 body=86 status=ok
// SIG undefined FUN_1418ae2a0(void)

void FUN_1418ae2a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001418ae2f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418ae2f6 FUN_1418ae2f6 body=92 status=ok
// SIG undefined FUN_1418ae2f6(void)

undefined8 * FUN_1418ae2f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1409ed966(param_1,iVar1,0);
    FUN_1409ed8c2(*param_1,uVar2,iVar1);
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418ae352 FUN_1418ae352 body=47 status=ok
// SIG undefined FUN_1418ae352(void)

void FUN_1418ae352(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb67458);
                    /* WARNING: Could not recover jumptable at 0x0001418ae37e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1418ae382 FUN_1418ae382 body=148 status=ok
// SIG undefined FUN_1418ae382(void)

uint FUN_1418ae382(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
  FUN_144757f48(param_1,0x40000000);
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  do {
    uVar3 = *(uint *)(lVar6 + 8);
    if ((uVar3 >> 0x15 & 1) != 0) {
      return uVar3;
    }
    LOCK();
    uVar5 = *(uint *)(lVar6 + 8);
    bVar7 = uVar3 == uVar5;
    if (bVar7) {
      *(uint *)(lVar6 + 8) = uVar3 | 0x200000;
      uVar5 = uVar3;
    }
    UNLOCK();
  } while (!bVar7);
  return uVar5;
}



// FUNCTION 1418ae416 FUN_1418ae416 body=157 status=ok
// SIG undefined FUN_1418ae416(void)

undefined8 * FUN_1418ae416(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c718) {
    FUN_144b3d300(&DAT_14cb8c718);
    if (DAT_14cb8c718 == -1) {
      DAT_14cb8c710 = '\0';
      atexit((_func_5014 *)&LAB_143e47788);
      _Init_thread_footer(&DAT_14cb8c718);
    }
  }
  if (DAT_14cb8c710 == '\0') {
    DAT_14cb8c708 = 0;
    DAT_14cb8c710 = '\x01';
    uVar1 = FUN_140c602de();
    FUN_145759622(&DAT_14cb8c708,uVar1);
  }
  return &DAT_14cb8c708;
}



// FUNCTION 1418ae4b4 FUN_1418ae4b4 body=203 status=ok
// SIG undefined FUN_1418ae4b4(void)

void FUN_1418ae4b4(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 4;
  local_20 = 3;
  local_40 = param_2;
  local_48 = FUN_140c602de();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  puVar2 = &local_40;
  FUN_14095c1ce(param_1,&local_48,puVar2,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_28) {
      puVar2 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ae580 FUN_1418ae580 body=32 status=ok
// SIG undefined FUN_1418ae580(void)

void FUN_1418ae580(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14095dd8e(param_2);
  FUN_140903d46(param_1,uVar1);
  return;
}



// FUNCTION 1418ae5a0 FUN_1418ae5a0 body=307 status=ok
// SIG undefined FUN_1418ae5a0(void)

void FUN_1418ae5a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_34 = 0;
  if (param_2[3] == 0) {
    local_38 = 0;
    iVar3 = 0;
  }
  else {
    local_38 = *(uint *)(param_2[3] + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar4;
      }
    }
  }
  local_34 = iVar3;
  FUN_140c8398a(uVar1,param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      if ((*(char *)(lVar5 + 8 + lVar6) == '\x03') &&
         (plVar2 = *(longlong **)(lVar5 + lVar6), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
      }
      lVar6 = lVar6 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418ae6d4 FUN_1418ae6d4 body=307 status=ok
// SIG undefined FUN_1418ae6d4(void)

void FUN_1418ae6d4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_34 = 0;
  if (param_2[3] == 0) {
    local_38 = 0;
    iVar3 = 0;
  }
  else {
    local_38 = *(uint *)(param_2[3] + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar4;
      }
    }
  }
  local_34 = iVar3;
  FUN_140c8398a(uVar1,param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      if ((*(char *)(lVar5 + 8 + lVar6) == '\x05') &&
         (plVar2 = *(longlong **)(lVar5 + lVar6), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x90))(plVar2,param_2);
      }
      lVar6 = lVar6 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418ae808 FUN_1418ae808 body=1024 status=ok
// SIG undefined FUN_1418ae808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1418ae808(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  undefined1 local_48 [8];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_3[1];
  plVar3 = *(longlong **)*param_3;
  plVar4 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b430440;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_LAB_14b3ef590;
  plVar4[5] = *plVar3;
  lVar6 = plVar3[1];
  plVar4[6] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar3 = plVar4 + 2;
  plVar4[7] = param_3[2];
  lVar6 = param_3[3];
  plVar4[8] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(plVar4 + 9) = *(byte *)(plVar4 + 9) & 0xf9;
  plVar4[10] = lVar2;
  plVar4[0xb] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b430460;
  *(undefined1 *)(plVar4 + 0xc) = 1;
  if ((plVar3 != (longlong *)0x0) &&
     (((plVar4[3] == 0 || (plVar4[4] == 0)) || (*(int *)(plVar4[4] + 8) < 1)))) {
    if (plVar4 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar7 = (longlong *)&DAT_00000020;
      plVar5 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1418aeb50:
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        *plVar7 = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_1418ae901;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar4[3] = (longlong)plVar3;
      if ((longlong *)plVar4[4] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar4[4] != (longlong *)0x0) {
          plVar7 = plVar4 + 4;
          plVar5 = (longlong *)plVar4[4];
          goto LAB_1418aeb50;
        }
        plVar4[4] = (longlong)plVar4;
      }
LAB_1418ae901:
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  param_3 = (undefined8 *)*param_3;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  if (plVar4 == (longlong *)0x0) {
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_58[2] = lVar6;
    *local_58 = &PTR_FUN_14b4304a0;
    local_58[3] = 0x10;
    local_58[4] = 0;
    local_58[5] = &LAB_140bf9308;
    *(undefined4 *)(local_58 + 6) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_58[2] = lVar6;
    *local_58 = &PTR_FUN_14b4304a0;
    local_58[3] = plVar3;
    local_58[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_58[5] = &LAB_140bf9308;
    *(undefined4 *)(local_58 + 6) = 0;
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  lVar2 = *(longlong *)*param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_14009d848(&local_40,&local_58);
  FUN_1448b6402(lVar2 + 0xb0,local_48,&local_40);
  if (local_38 == 0) {
LAB_1418ae9ed:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_1418ae9ed;
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1418aea14;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418aea14:
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418aec0a FUN_1418aec0a body=417 status=ok
// SIG undefined FUN_1418aec0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1418aec0a(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = param_3[1];
  plVar3 = *(longlong **)*param_3;
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b430510;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_LAB_14b3ef590;
  plVar5[5] = *plVar3;
  lVar4 = plVar3[1];
  plVar5[6] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar3 = plVar5 + 2;
  plVar5[7] = param_3[2];
  lVar4 = param_3[3];
  plVar5[8] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(plVar5 + 9) = *(byte *)(plVar5 + 9) & 0xf9;
  plVar5[10] = lVar2;
  plVar5[0xb] = 0;
  *(undefined1 *)(plVar5 + 0xc) = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b430530;
  if ((plVar3 == (longlong *)0x0) ||
     (((plVar5[3] != 0 && (plVar5[4] != 0)) && (0 < *(int *)(plVar5[4] + 8))))) {
    *param_2 = (longlong)plVar3;
    param_2[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_1418aecfd;
  }
  if (plVar5 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar7 = (longlong *)&DAT_00000020;
    plVar6 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_1418aed7f;
LAB_1418aed67:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *plVar7 = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) {
LAB_1418aed7f:
      *param_2 = (longlong)plVar3;
      param_2[1] = (longlong)plVar5;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar5[3] = (longlong)plVar3;
    if ((longlong *)plVar5[4] != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar5[4] != (longlong *)0x0) {
        plVar7 = plVar5 + 4;
        plVar6 = (longlong *)plVar5[4];
        goto LAB_1418aed67;
      }
      plVar5[4] = (longlong)plVar5;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar5;
LAB_1418aecfd:
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar3 = plVar5 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_2;
}



// FUNCTION 1418aedac FUN_1418aedac body=423 status=ok
// SIG undefined FUN_1418aedac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1418aedac(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = param_3[1];
  plVar3 = *(longlong **)*param_3;
  plVar5 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4305c0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_LAB_14b3ef590;
  plVar5[5] = *plVar3;
  lVar4 = plVar3[1];
  plVar5[6] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar3 = plVar5 + 2;
  plVar5[7] = param_3[2];
  lVar4 = param_3[3];
  plVar5[8] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(plVar5 + 9) = *(byte *)(plVar5 + 9) & 0xf9;
  plVar5[10] = lVar2;
  plVar5[2] = (longlong)&PTR_FUN_14b4305e0;
  plVar5[0xb] = 0;
  plVar5[0xc] = -1;
  plVar5[0xd] = 0;
  if ((plVar3 == (longlong *)0x0) ||
     (((plVar5[3] != 0 && (plVar5[4] != 0)) && (0 < *(int *)(plVar5[4] + 8))))) {
    *param_2 = (longlong)plVar3;
    param_2[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_1418aeea5;
  }
  if (plVar5 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar7 = (longlong *)&DAT_00000020;
    plVar6 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_1418aef27;
LAB_1418aef0f:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *plVar7 = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) {
LAB_1418aef27:
      *param_2 = (longlong)plVar3;
      param_2[1] = (longlong)plVar5;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar5[3] = (longlong)plVar3;
    if ((longlong *)plVar5[4] != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar5[4] != (longlong *)0x0) {
        plVar7 = plVar5 + 4;
        plVar6 = (longlong *)plVar5[4];
        goto LAB_1418aef0f;
      }
      plVar5[4] = (longlong)plVar5;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *param_2 = (longlong)plVar3;
  param_2[1] = (longlong)plVar5;
LAB_1418aeea5:
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar3 = plVar5 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_2;
}



// FUNCTION 1418aef54 FUN_1418aef54 body=142 status=ok
// SIG undefined FUN_1418aef54(void)

longlong * FUN_1418aef54(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  fVar5 = (float)exp2f((float)param_2);
  iVar3 = (int)fVar5;
  iVar1 = iVar3 + -1;
  if (0 < iVar3) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
      FUN_14482f6fa(param_1,iVar1);
    }
    iVar4 = 0;
    do {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14475e4ac(param_1,iVar2);
      }
      *(float *)(*param_1 + (longlong)iVar2 * 4) = (float)iVar4 / (float)iVar1;
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1418aefe4 FUN_1418aefe4 body=353 status=ok
// SIG undefined FUN_1418aefe4(void)

void FUN_1418aefe4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    plVar1 = (longlong *)(param_1 + 0x40);
    uVar6 = 0;
    bVar5 = false;
    do {
      lVar7 = uVar6 * 0x78 + 0x68;
      while (lVar4 = FUN_14479d2ce(*plVar1 + lVar7), lVar4 != param_2) {
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x78;
        if ((longlong)*(int *)(param_1 + 0x48) <= (longlong)uVar6) {
          if (bVar5) goto LAB_1418af124;
          goto LAB_1418aeffe;
        }
      }
      do {
        FUN_1489a4ccc(plVar1,uVar6 & 0xffffffff);
        if ((longlong)*(int *)(param_1 + 0x48) <= (longlong)uVar6) goto LAB_1418af124;
        lVar4 = FUN_14479d2ce(*plVar1 + lVar7);
      } while (lVar4 == param_2);
      uVar6 = uVar6 + 1;
      bVar5 = true;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x48));
LAB_1418af124:
    FUN_145732246(plVar1);
  }
LAB_1418aeffe:
  iVar2 = *(int *)(param_1 + 0x38);
  if (0 < iVar2) {
    plVar1 = (longlong *)(param_1 + 0x30);
    uVar6 = 0;
    bVar5 = false;
    do {
      lVar7 = uVar6 * 0x88 + 0x60;
      while (lVar4 = FUN_14479d2ce(*plVar1 + lVar7), lVar4 != param_2) {
        uVar6 = uVar6 + 1;
        iVar3 = *(int *)(param_1 + 0x38);
        lVar7 = lVar7 + 0x88;
        if ((longlong)iVar3 <= (longlong)uVar6) {
          if (bVar5) goto LAB_1418af0f0;
          goto LAB_1418af05a;
        }
      }
      do {
        FUN_1489a4d54(plVar1,uVar6 & 0xffffffff);
        if ((longlong)*(int *)(param_1 + 0x38) <= (longlong)uVar6) goto LAB_1418af0f0;
        lVar4 = FUN_14479d2ce(*plVar1 + lVar7);
      } while (lVar4 == param_2);
      uVar6 = uVar6 + 1;
      bVar5 = true;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x38));
LAB_1418af0f0:
    FUN_145adadea(plVar1);
    iVar3 = *(int *)(param_1 + 0x38);
LAB_1418af05a:
    if (iVar3 < iVar2) {
      FUN_1457321a4(param_1 + 0x10,plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1418af146 FUN_1418af146 body=38 status=ok
// SIG undefined FUN_1418af146(void)

undefined8 FUN_1418af146(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1400f6f32();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418af15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1418af17b FUN_1418af17b body=100 status=ok
// SIG undefined FUN_1418af17b(void)

void FUN_1418af17b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    do {
      if ((int)plVar2[1] == 0) {
LAB_1418af194:
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72(plVar2,0,0,0x10);
          *(undefined4 *)(plVar2 + 1) = 0;
          goto LAB_1418af194;
        }
      }
      plVar2 = plVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418af1e0 FUN_1418af1e0 body=29 status=ok
// SIG undefined FUN_1418af1e0(void)

undefined8 FUN_1418af1e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418af1fe FUN_1418af1fe body=269 status=ok
// SIG undefined FUN_1418af1fe(void)

void FUN_1418af1fe(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418af30c FUN_1418af30c body=151 status=ok
// SIG undefined FUN_1418af30c(void)

void FUN_1418af30c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x18) + -1;
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
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1418af3a4 FUN_1418af3a4 body=29 status=ok
// SIG undefined FUN_1418af3a4(void)

undefined8 FUN_1418af3a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418af3c2 FUN_1418af3c2 body=257 status=ok
// SIG undefined FUN_1418af3c2(void)

int FUN_1418af3c2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar6 = iVar3 + 1;
      if (iVar3 + 1 < iVar7) {
        iVar6 = iVar7;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar4 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar6;
        if (lVar8 <= lVar11) break;
        lVar2 = *plVar9;
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 2;
        iVar5 = iVar4;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar6 = iVar5 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar6 << 4);
        }
        iVar13 = iVar13 + iVar6;
      }
      else {
        FUN_140cf8141(plVar1 + lVar10 * 2,iVar6);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar5;
    } while (lVar11 < lVar8);
    *(int *)(param_1 + 1) = iVar13;
    iVar7 = iVar7 - iVar13;
  }
  return iVar7;
}



// FUNCTION 1418af4c4 FUN_1418af4c4 body=68 status=ok
// SIG undefined FUN_1418af4c4(void)

undefined8 * FUN_1418af4c4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42fe40;
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



// FUNCTION 1418af508 FUN_1418af508 body=353 status=ok
// SIG undefined FUN_1418af508(void)

void FUN_1418af508(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418af58d;
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
LAB_1418af58d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418af66a FUN_1418af66a body=353 status=ok
// SIG undefined FUN_1418af66a(void)

void FUN_1418af66a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418af6ef;
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
LAB_1418af6ef:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418af7cc FUN_1418af7cc body=269 status=ok
// SIG undefined FUN_1418af7cc(void)

void FUN_1418af7cc(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418af8da FUN_1418af8da body=64 status=ok
// SIG undefined FUN_1418af8da(void)

void FUN_1418af8da(void)

{
  if (DAT_14cb8c3d4 != 0) {
    DAT_14cb8c3d4 = 0;
    FUN_1446f8d3c(&DAT_14cb8c3c8,DAT_14cb8c3d0,0,0x18,8);
  }
  return;
}



// FUNCTION 1418af91a FUN_1418af91a body=68 status=ok
// SIG undefined FUN_1418af91a(void)

undefined8 * FUN_1418af91a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430070;
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



// FUNCTION 1418af95e FUN_1418af95e body=9 status=ok
// SIG undefined FUN_1418af95e(void)

void FUN_1418af95e(longlong param_1)

{
  FUN_140cda65e(param_1 + 0x10);
  return;
}



// FUNCTION 1418af968 FUN_1418af968 body=29 status=ok
// SIG undefined FUN_1418af968(void)

undefined8 FUN_1418af968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418af986 FUN_1418af986 body=9 status=ok
// SIG undefined FUN_1418af986(void)

void FUN_1418af986(longlong param_1)

{
  FUN_140cda65e(param_1 + 0x10);
  return;
}



// FUNCTION 1418af990 FUN_1418af990 body=29 status=ok
// SIG undefined FUN_1418af990(void)

undefined8 FUN_1418af990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418af9ae FUN_1418af9ae body=66 status=ok
// SIG undefined FUN_1418af9ae(void)

undefined8 * FUN_1418af9ae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4301d0;
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



// FUNCTION 1418af9f0 FUN_1418af9f0 body=275 status=ok
// SIG undefined FUN_1418af9f0(void)

void FUN_1418af9f0(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418afb04 FUN_1418afb04 body=29 status=ok
// SIG undefined FUN_1418afb04(void)

undefined8 FUN_1418afb04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418afb28 FUN_1418afb28 body=118 status=ok
// SIG undefined FUN_1418afb28(void)

void FUN_1418afb28(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4303d0;
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



// FUNCTION 1418afb9e FUN_1418afb9e body=29 status=ok
// SIG undefined FUN_1418afb9e(void)

undefined8 FUN_1418afb9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418afbbc FUN_1418afbbc body=66 status=ok
// SIG undefined FUN_1418afbbc(void)

undefined8 * FUN_1418afbbc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4304a0;
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



// FUNCTION 1418afbfe FUN_1418afbfe body=118 status=ok
// SIG undefined FUN_1418afbfe(void)

void FUN_1418afbfe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4304a0;
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



// FUNCTION 1418afc74 FUN_1418afc74 body=9 status=ok
// SIG undefined FUN_1418afc74(void)

void FUN_1418afc74(longlong param_1)

{
  FUN_140bef390(param_1 + 0x10);
  return;
}



// FUNCTION 1418afc7e FUN_1418afc7e body=29 status=ok
// SIG undefined FUN_1418afc7e(void)

undefined8 FUN_1418afc7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418afc9c FUN_1418afc9c body=123 status=ok
// SIG undefined FUN_1418afc9c(void)

void FUN_1418afc9c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140c50cd4();
  if (lVar1 != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    uVar2 = FUN_140e99050(lVar1,*(longlong *)(param_1 + 0x40) + 0x38,local_28);
    FUN_14485c47a(param_1 + 0x48,uVar2);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418afd18 FUN_1418afd18 body=29 status=ok
// SIG undefined FUN_1418afd18(void)

undefined8 FUN_1418afd18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418afd3e FUN_1418afd3e body=269 status=ok
// SIG undefined FUN_1418afd3e(void)

void FUN_1418afd3e(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418afe4c FUN_1418afe4c body=333 status=ok
// SIG undefined FUN_1418afe4c(void)

void FUN_1418afe4c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x111) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418afeb5;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1418afeb5:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x78)) {
      uVar4 = uVar3 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x78,8);
  }
  return;
}



// FUNCTION 1418aff9a FUN_1418aff9a body=68 status=ok
// SIG undefined FUN_1418aff9a(void)

undefined8 * FUN_1418aff9a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430630;
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



// FUNCTION 1418affde FUN_1418affde body=118 status=ok
// SIG undefined FUN_1418affde(void)

void FUN_1418affde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430630;
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



// FUNCTION 1418b0054 FUN_1418b0054 body=68 status=ok
// SIG undefined FUN_1418b0054(void)

undefined8 * FUN_1418b0054(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4306a0;
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



// FUNCTION 1418b0098 FUN_1418b0098 body=68 status=ok
// SIG undefined FUN_1418b0098(void)

undefined8 * FUN_1418b0098(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430710;
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



// FUNCTION 1418b00dc FUN_1418b00dc body=428 status=ok
// SIG undefined FUN_1418b00dc(void)

longlong * FUN_1418b00dc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1418b01bc:
    *puVar5 = &PTR_LAB_14b430810;
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
    *puVar5 = &PTR_FUN_14b4307a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1418b01bc;
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
    *puVar5 = &PTR_LAB_14b430810;
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
    *puVar5 = &PTR_FUN_14b4307a0;
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



// FUNCTION 1418b0288 FUN_1418b0288 body=68 status=ok
// SIG undefined FUN_1418b0288(void)

undefined8 * FUN_1418b0288(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4307a0;
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



// FUNCTION 1418b02cc FUN_1418b02cc body=212 status=ok
// SIG undefined FUN_1418b02cc(void)

void FUN_1418b02cc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x200) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1418b03a0 FUN_1418b03a0 body=212 status=ok
// SIG undefined FUN_1418b03a0(void)

void FUN_1418b03a0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1418b0474 FUN_1418b0474 body=212 status=ok
// SIG undefined FUN_1418b0474(void)

void FUN_1418b0474(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1418b0548 FUN_1418b0548 body=269 status=ok
// SIG undefined FUN_1418b0548(void)

void FUN_1418b0548(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b0656 FUN_1418b0656 body=29 status=ok
// SIG undefined FUN_1418b0656(void)

undefined8 FUN_1418b0656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b0674 FUN_1418b0674 body=53 status=ok
// SIG undefined FUN_1418b0674(void)

void FUN_1418b0674(longlong param_1)

{
  FUN_1403272a0(param_1,0x3f800000);
  if ((*(byte *)(param_1 + 0x78) & 0x20) == 0) {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 0x20;
    FUN_140435058(param_1);
    return;
  }
  return;
}



// FUNCTION 1418b06aa FUN_1418b06aa body=29 status=ok
// SIG undefined FUN_1418b06aa(void)

undefined8 FUN_1418b06aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b06ce FUN_1418b06ce body=66 status=ok
// SIG undefined FUN_1418b06ce(void)

undefined8 * FUN_1418b06ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430940;
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



// FUNCTION 1418b0710 FUN_1418b0710 body=9 status=ok
// SIG undefined FUN_1418b0710(void)

void FUN_1418b0710(longlong param_1)

{
  FUN_140bef390(param_1 + 0x10);
  return;
}



// FUNCTION 1418b071a FUN_1418b071a body=29 status=ok
// SIG undefined FUN_1418b071a(void)

undefined8 FUN_1418b071a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b0738 FUN_1418b0738 body=29 status=ok
// SIG undefined FUN_1418b0738(void)

undefined8 FUN_1418b0738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b0756 FUN_1418b0756 body=117 status=ok
// SIG undefined FUN_1418b0756(void)

void FUN_1418b0756(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar5);
      bVar1 = *(byte *)(plVar4 + 0xf);
      if (((bVar1 & 2) == 0) && (*(byte *)(plVar4 + 0xf) = bVar1 & 0xf5, (bVar1 & 1) == 0)) {
        *(byte *)(plVar4 + 0xf) = (bVar1 & 0xf4) + 1;
        (**(code **)(*plVar4 + 8))(plVar4);
        if ((*(byte *)(plVar4 + 0xf) & 5) == 1) {
          if ((*(float *)(plVar4 + 0xe) != *(float *)((longlong)plVar4 + 0x74)) ||
             (NAN(*(float *)(plVar4 + 0xe)) || NAN(*(float *)((longlong)plVar4 + 0x74)))) {
            FUN_14032804c(plVar4);
          }
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418b07cc FUN_1418b07cc body=269 status=ok
// SIG undefined FUN_1418b07cc(void)

void FUN_1418b07cc(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b08da FUN_1418b08da body=255 status=ok
// SIG undefined FUN_1418b08da(void)

void FUN_1418b08da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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



// FUNCTION 1418b09da FUN_1418b09da body=29 status=ok
// SIG undefined FUN_1418b09da(void)

undefined8 FUN_1418b09da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b09f8 FUN_1418b09f8 body=118 status=ok
// SIG undefined FUN_1418b09f8(void)

void FUN_1418b09f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430ad0;
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



// FUNCTION 1418b0a6e FUN_1418b0a6e body=68 status=ok
// SIG undefined FUN_1418b0a6e(void)

undefined8 * FUN_1418b0a6e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b430b40;
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



// FUNCTION 1418b0ab2 FUN_1418b0ab2 body=38 status=ok
// SIG undefined FUN_1418b0ab2(void)

longlong FUN_1418b0ab2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    if (param_2 != 0) {
      lVar1 = FUN_1404dcd0c(param_2 + 0x1288,param_1);
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1418b0ad8 FUN_1418b0ad8 body=47 status=ok
// SIG undefined FUN_1418b0ad8(void)

void FUN_1418b0ad8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x58))();
  if (lVar1 != 0) {
    return;
  }
  FUN_140312a30(param_1,param_2);
  return;
}



// FUNCTION 1418b0b08 FUN_1418b0b08 body=141 status=ok
// SIG undefined FUN_1418b0b08(void)

void FUN_1418b0b08(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1409765ee();
  if (((*(char *)(param_1 + 0x40) == '\0') && (param_2 != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0xa8), plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
        FUN_1401df954(uVar1,param_1 + 0x38,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418b0b96 FUN_1418b0b96 body=155 status=ok
// SIG undefined FUN_1418b0b96(void)

void FUN_1418b0b96(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1409765ee();
  if (((*(char *)(param_1 + 0x40) == '\0') && (param_2 != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0xa8), plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
        FUN_1401df954(uVar1,param_1 + 0x38,
                      CONCAT31((int3)((uint)param_4 >> 8),(char)param_4 == '\0') ^ 3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418b0c32 FUN_1418b0c32 body=277 status=ok
// SIG undefined FUN_1418b0c32(void)

bool FUN_1418b0c32(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + -0x14) != 0) {
    uVar1 = *(uint *)(param_1 + -0x18);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + -0x14))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar6, lVar2 != 0)) &&
        (((*(longlong *)(lVar2 + 0x30) == 0 ||
          (lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar7 == 0)) ||
         ((*(longlong *)(lVar7 + 0x588) == 0 ||
          (*(double *)(lVar2 + 0x6d0) < *(double *)(lVar2 + 0x708))))))) &&
       (((*(byte *)(lVar2 + 0x154) & 0x40) == 0 || (iVar5 = FUN_14490d72a(lVar2), iVar5 != 3)))) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar7);
          if (*(longlong *)(lVar3 + 0x360) == lVar2) {
            if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x278) & 1) != 0)) {
              return false;
            }
            break;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar7);
      }
      cVar4 = FUN_144a80e00(lVar2);
      if (cVar4 != '\0') {
        return -1 < *(char *)(lVar2 + 0x155);
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 1418b0d48 FUN_1418b0d48 body=128 status=ok
// SIG undefined FUN_1418b0d48(void)

void FUN_1418b0d48(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b430eb0);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b0dda FUN_1418b0dda body=143 status=ok
// SIG undefined FUN_1418b0dda(void)

longlong FUN_1418b0dda(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1;
  FUN_144a3f2ea(&local_30);
  if (local_28 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,param_2);
      if (lVar2 != 0) goto LAB_1418b0e2b;
    }
    lVar2 = switchD_143c3d4dc::caseD_57(param_1,param_2);
  }
  else {
    lVar2 = 0;
  }
LAB_1418b0e2b:
  if (local_28 == '\0') {
    *(int *)(local_30 + 0x28) = *(int *)(local_30 + 0x28) + -1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b0e6a FUN_1418b0e6a body=390 status=ok
// SIG undefined FUN_1418b0e6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418b0e6a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)FUN_14001cc68(0x140,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b432c10;
  FUN_140724c88(plVar2 + 2,param_1,param_3);
  plVar2[0x1c] = param_1;
  *(undefined1 *)(plVar2 + 0x24) = 0;
  *(undefined4 *)(plVar2 + 0x25) = 0;
  *(undefined1 *)((longlong)plVar2 + 300) = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x20] = 0;
  plVar5 = plVar2 + 2;
  *plVar5 = (longlong)&PTR_FUN_14b4310a0;
  plVar2[0x26] = param_1;
  plVar2[0x27] = 0;
  if ((plVar5 == (longlong *)0x0) ||
     (((plVar2[3] != 0 && (plVar2[4] != 0)) && (0 < *(int *)(plVar2[4] + 8))))) {
    *param_2 = plVar5;
    param_2[1] = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_1418b0f46;
  }
  if (plVar2 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar4 = (longlong *)&DAT_00000020;
    plVar3 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_1418b0fc7;
LAB_1418b0faf:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *plVar4 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_1418b0fc7:
      *param_2 = plVar5;
      param_2[1] = plVar2;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar5;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar4 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_1418b0faf;
      }
      plVar2[4] = (longlong)plVar2;
    }
  }
  LOCK();
  plVar4 = plVar2 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *param_2 = plVar5;
  param_2[1] = plVar2;
LAB_1418b0f46:
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
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
  return param_2;
}



// FUNCTION 1418b0ffc FUN_1418b0ffc body=61 status=ok
// SIG undefined FUN_1418b0ffc(void)

void FUN_1418b0ffc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  FUN_1448262fc(lVar1,*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418b103a FUN_1418b103a body=704 status=ok
// SIG undefined FUN_1418b103a(void)

void FUN_1418b103a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    plVar8 = *(longlong **)(param_1 + 0xd8);
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0xe0) * 10;
    do {
      if ((((((int)plVar8[3] != 0) && (uVar1 = *(uint *)((longlong)plVar8 + 0x14), -1 < (int)uVar1))
           && ((int)uVar1 < DAT_14c9647dc)) &&
          ((plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == (int)plVar8[3])))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
        lVar3 = *(longlong *)(*plVar5 + 0x20);
        plVar5 = &DAT_14cacd708;
        if (lVar3 != 0) {
          if (DAT_14cb63950 == 0) {
            local_50 = FUN_144a7958c;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1464ec72a;
            local_78 = &LAB_1486f5f75;
            local_80 = &LAB_140945686;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 0x10;
            local_a8 = 0x19d0;
            local_70 = &local_50;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                          FUN_1464fe8ee);
          }
          if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
            lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x1240) + 0x10))(lVar3 + 0x1240);
            plVar5 = &DAT_14cacd708;
            if (lVar3 != 0) {
              if (*(int *)(lVar3 + 0x290) != *(int *)(lVar3 + 700)) {
                lVar2 = *plVar8;
                uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
                uVar9 = (uint)lVar2 & 0xffff;
                lVar6 = lVar3 + 0x2c0;
                if (*(longlong *)(lVar3 + 0x2c8) != 0) {
                  lVar6 = *(longlong *)(lVar3 + 0x2c8);
                }
                iVar10 = *(int *)(lVar6 + (ulonglong)
                                          (*(int *)(lVar3 + 0x2d0) - 1U &
                                          (int)((ulonglong)lVar2 >> 0x20) +
                                          ((uint)lVar2 << 0x10 | uVar9) +
                                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
                if (iVar10 != -1) {
                  do {
                    plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x288) + (longlong)iVar10 * 0x18);
                    if (*plVar4 == lVar2) goto LAB_1418b11fc;
                    iVar10 = (int)plVar4[2];
                  } while (iVar10 != -1);
                }
              }
              plVar4 = (longlong *)0x0;
LAB_1418b11fc:
              plVar5 = plVar4 + 1;
              if (plVar4 == (longlong *)0x0) {
                plVar5 = (longlong *)0x0;
              }
              if (plVar5 == (longlong *)0x0) {
                plVar5 = &DAT_14cacd708;
              }
            }
          }
        }
        local_50 = (code *)*plVar5;
        FUN_140721fbe(param_2,&local_50);
      }
      plVar8 = plVar8 + 10;
    } while (plVar8 != plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b12fc FUN_1418b12fc body=1119 status=ok
// SIG undefined FUN_1418b12fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1418b12fc(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined8 *_Src;
  longlong *plVar13;
  float *pfVar14;
  float fVar15;
  undefined1 auStack_c8 [40];
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar6 = (longlong *)FUN_14001cc68(0x140,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b432c30;
  plVar1 = plVar6 + 2;
  FUN_140724c88(plVar1,param_1,param_3);
  plVar6[0x1c] = param_1;
  *(undefined1 *)(plVar6 + 0x24) = 0;
  *(undefined4 *)(plVar6 + 0x25) = 0;
  *(undefined1 *)((longlong)plVar6 + 300) = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  plVar6[0x20] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b431160;
  plVar6[0x26] = param_1;
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x44)) {
    uVar5 = (uint)((ulonglong)DAT_14cb8ce10 >> 0x10);
    uVar11 = (uint)DAT_14cb8ce10 & 0xffff;
    lVar9 = param_3 + 0x48;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar9 = *(longlong *)(param_3 + 0x50);
    }
    iVar12 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_3 + 0x58) - 1U &
                              (int)((ulonglong)DAT_14cb8ce10 >> 0x20) +
                              ((uint)DAT_14cb8ce10 << 0x10 | uVar11) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar12 != -1) {
      do {
        lVar9 = *(longlong *)(param_3 + 0x10) + (longlong)iVar12 * 0x38;
        if (*(longlong *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar12 * 0x38) == DAT_14cb8ce10)
        {
          if (lVar9 != 0) {
            _Src = (undefined8 *)(lVar9 + 8);
            bVar3 = *(byte *)(lVar9 + 0x28);
            local_88 = *(ushort *)(lVar9 + 0x20);
            if (local_88 < 0x19) {
              ppppuVar8 = local_a0;
            }
            else {
              ppppuVar8 = (undefined8 ****)FUN_14001cc68(local_88,0);
              _Src = (undefined8 *)*_Src;
              local_a0[0] = ppppuVar8;
            }
            uVar7 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
            if (pcVar4 == (code *)0x0) {
              memcpy(ppppuVar8,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
            }
            else {
              (*pcVar4)(ppppuVar8,_Src);
            }
            local_80 = *(byte *)(lVar9 + 0x28);
            if (local_80 != 3) goto LAB_1418b161e;
            uVar5 = 3;
            fVar15 = local_a0[0]._0_4_;
            goto LAB_1418b149c;
          }
          break;
        }
        iVar12 = *(int *)(lVar9 + 0x30);
      } while (iVar12 != -1);
    }
  }
  local_88 = 0;
  local_80 = 0;
LAB_1418b161e:
  pfVar14 = &local_78;
  FUN_1400b56fe(pfVar14,local_a0,3);
  fVar15 = 0.0;
  if (local_58 != 0) {
    fVar15 = local_78;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      pfVar14 = (float *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(pfVar14);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  uVar5 = (uint)local_80;
LAB_1418b149c:
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar8 = (undefined8 ****)local_a0[0];
    if (local_88 < 0x19) {
      ppppuVar8 = local_a0;
    }
    (*pcVar4)(ppppuVar8);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  if (ABS(fVar15) < 45.0) {
    *(undefined4 *)(plVar6 + 0x27) = 0;
  }
  else if (ABS(fVar15) <= 135.0) {
    if (fVar15 <= 0.0) {
      *(undefined4 *)(plVar6 + 0x27) = 2;
    }
    else {
      *(undefined4 *)(plVar6 + 0x27) = 3;
    }
  }
  else {
    *(undefined4 *)(plVar6 + 0x27) = 1;
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar6[3] != 0 && (plVar6[4] != 0)) && (0 < *(int *)(plVar6[4] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_1418b1558;
  }
  else {
    if (plVar6 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar13 = (longlong *)&DAT_00000020;
      plVar10 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1418b16e6:
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        *plVar13 = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_1418b1539;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar6;
      goto LAB_1418b1558;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar6[3] = (longlong)plVar1;
    if ((longlong *)plVar6[4] != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar6[4] != (longlong *)0x0) {
        plVar13 = plVar6 + 4;
        plVar10 = (longlong *)plVar6[4];
        goto LAB_1418b16e6;
      }
      plVar6[4] = (longlong)plVar6;
    }
LAB_1418b1539:
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
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
LAB_1418b1558:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418b175c FUN_1418b175c body=54 status=ok
// SIG undefined FUN_1418b175c(void)

void FUN_1418b175c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 0xd8;
  do {
    FUN_140d077bc(param_1 + lVar1,param_2);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x618);
  return;
}



// FUNCTION 1418b1792 FUN_1418b1792 body=184 status=ok
// SIG undefined FUN_1418b1792(void)

undefined1 * FUN_1418b1792(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 uVar7;
  uint uVar8;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar3 = (uint)((ulonglong)DAT_14cb8cea8 >> 0x10);
    uVar8 = (uint)DAT_14cb8cea8 & 0xffff;
    plVar6 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8cea8 >> 0x20) + ((uint)DAT_14cb8cea8 << 0x10 | uVar8)
                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_2;
      uVar7 = 0;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x38;
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x38) == DAT_14cb8cea8) {
          if (lVar1 + 8 == 0 || lVar1 == 0) goto LAB_1418b1822;
          uVar7 = 1;
          uVar4 = FUN_140168b7a(lVar1 + 8,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
          *param_1 = uVar4;
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x30);
      } while (iVar5 != -1);
      goto LAB_1418b1832;
    }
  }
LAB_1418b1822:
  uVar7 = 0;
LAB_1418b1832:
  param_1[1] = uVar7;
  return param_1;
}



// FUNCTION 1418b184a FUN_1418b184a body=91 status=ok
// SIG undefined FUN_1418b184a(void)

void FUN_1418b184a(longlong param_1)

{
  FUN_140671132();
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1489a7558(param_1,*(longlong *)(param_1 + 0x160) + 0x238,param_1 + 0x150,
                  *(undefined4 *)(param_1 + 0x14c));
  }
  FUN_1408838b6(param_1,*(longlong *)(param_1 + 0x160) + 0x238,0,1);
  return;
}



// FUNCTION 1418b18a6 FUN_1418b18a6 body=346 status=ok
// SIG undefined FUN_1418b18a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418b18a6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)FUN_14001cc68(0xf0,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b432d60;
  FUN_140724c88(plVar2 + 2,param_1,param_3);
  plVar4 = plVar2 + 2;
  *plVar4 = (longlong)&PTR_FUN_14b4317c0;
  plVar2[0x1c] = param_1;
  plVar2[0x1d] = 0;
  if ((plVar4 == (longlong *)0x0) ||
     (((plVar2[3] != 0 && (plVar2[4] != 0)) && (0 < *(int *)(plVar2[4] + 8))))) {
    *param_2 = plVar4;
    param_2[1] = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_1418b1952;
  }
  if (plVar2 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar3 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_1418b19d4;
LAB_1418b19bc:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *plVar5 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_1418b19d4:
      *param_2 = plVar4;
      param_2[1] = plVar2;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar4;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar5 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_1418b19bc;
      }
      plVar2[4] = (longlong)plVar2;
    }
  }
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
  *param_2 = plVar4;
  param_2[1] = plVar2;
LAB_1418b1952:
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar2 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return param_2;
}



// FUNCTION 1418b1a00 FUN_1418b1a00 body=51 status=ok
// SIG undefined FUN_1418b1a00(void)

void FUN_1418b1a00(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xd8) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0xd8) + 8) >> 0x1e & 1) == 0)) {
    FUN_140b4f29a();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1418b1a34 FUN_1418b1a34 body=172 status=ok
// SIG undefined FUN_1418b1a34(void)

void FUN_1418b1a34(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 == 0) {
LAB_1418b1a6e:
    param_3 = 0;
  }
  else {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) goto LAB_1418b1a6e;
  }
  if (param_4 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1418b1a78;
  }
  param_4 = 0;
LAB_1418b1a78:
  if (param_3 != param_4) {
    if (param_4 != 0) {
      param_3 = param_4;
    }
    if (param_3 != 0) {
      FUN_140b161b0(param_1,param_2,param_3,0);
      FUN_140b161b0(param_1,param_2,param_3,1);
      return;
    }
  }
  return;
}



// FUNCTION 1418b1ae6 FUN_1418b1ae6 body=84 status=ok
// SIG undefined FUN_1418b1ae6(void)

void FUN_1418b1ae6(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x488,param_1 + 0x3a0);
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071049e(param_1 + 0x590,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 1418b1b3a FUN_1418b1b3a body=103 status=ok
// SIG undefined FUN_1418b1b3a(void)

void FUN_1418b1b3a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14487fd02();
  if (iVar1 != 3) {
    FUN_140d09fae(param_1 + 0x3d0,param_1 + 0x3a8,param_1 + 0x488);
  }
  if (*(int *)(param_1 + 0x4ac) != 0) {
    FUN_1407c0b34(param_1 + 0x488,param_1 + 0x3a0,param_1);
  }
  FUN_1405f1eac(param_1);
  FUN_140d09e18(param_1 + 0x3d0);
  return;
}



// FUNCTION 1418b1ba8 FUN_1418b1ba8 body=117 status=ok
// SIG undefined FUN_1418b1ba8(void)

void FUN_1418b1ba8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ac0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140b1548a(param_1 + 0x7a,param_2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b1c24 FUN_1418b1c24 body=84 status=ok
// SIG undefined FUN_1418b1c24(void)

void FUN_1418b1c24(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x4b8,param_1 + 0x3d0);
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071049e(param_1 + 0x5c0,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 1418b1c78 FUN_1418b1c78 body=117 status=ok
// SIG undefined FUN_1418b1c78(void)

void FUN_1418b1c78(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ac0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140b1548a(param_1 + 0x80,param_2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b1cee FUN_1418b1cee body=117 status=ok
// SIG undefined FUN_1418b1cee(void)

void FUN_1418b1cee(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ae0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140b1548a(param_1 + 0x80,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b1d64 FUN_1418b1d64 body=82 status=ok
// SIG undefined FUN_1418b1d64(void)

void FUN_1418b1d64(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb7bde0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb7bde8;
  bVar1 = *(byte *)(param_1 + 0x92);
  *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  *(uint *)(puVar2 + 3) = (uint)bVar1;
  puVar3 = &DAT_14cb7c580;
  if (bVar1 != 0) {
    puVar3 = &DAT_14cb7c588;
  }
  puVar2[2] = *puVar3;
  return;
}



// FUNCTION 1418b1db6 FUN_1418b1db6 body=129 status=ok
// SIG undefined FUN_1418b1db6(void)

void FUN_1418b1db6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x30);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else if (((0 < *(int *)(lVar2 + 0x2f8)) || (0 < *(int *)(lVar2 + 0x2e8))) ||
            ((*(byte *)(lVar2 + 0x157) & 1) != 0)) {
      FUN_14083337a();
      lVar2 = *(longlong *)(lVar1 + 0x30);
    }
    local_28 = 0;
    uStack_20 = 0;
    FUN_140bf13a7(*(undefined8 *)(lVar2 + 0x218));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b1e38 FUN_1418b1e38 body=195 status=ok
// SIG undefined FUN_1418b1e38(void)

undefined8 FUN_1418b1e38(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    uVar3 = FUN_1406ef318();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (((lVar4 == 0) && (lVar4 = 0, lVar5 != 0)) && (*(longlong *)(param_1 + 0x20) != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x20));
    }
    *(longlong *)(param_1 + 0x30) = lVar4;
  }
  uVar3 = FUN_140aa569c(param_2);
  lVar5 = FUN_140aa56e6(param_1,uVar3);
  if (lVar5 != 0) {
    cVar2 = FUN_14095026a(lVar5,lVar4);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1418b1efc FUN_1418b1efc body=606 status=ok
// SIG undefined FUN_1418b1efc(void)

undefined8 FUN_1418b1efc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = (**(code **)(*param_2 + 8))(param_2);
  lVar8 = FUN_1409e3b02();
  if (lVar8 == 0) {
    return 0;
  }
  if (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30) {
    return 0;
  }
  if (param_2[5] == 0) {
    uVar11 = FUN_1406ef318();
    lVar7 = FUN_14477b664(uVar11);
    param_2[5] = lVar7;
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
    lVar7 = FUN_1406ef318();
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  lVar7 = FUN_14477b664(lVar7);
  iVar6 = 0;
  iVar5 = 0;
  if ((lVar7 != 0) && (plVar1 = *(longlong **)(lVar7 + 0xb8), plVar1 != (longlong *)0x0)) {
    lVar9 = *plVar1;
    pcVar2 = *(code **)(lVar9 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar4 = (*pcVar2)(plVar1);
      iVar5 = 0;
      if (cVar4 == '\0') goto LAB_1418b1fe1;
      lVar9 = *plVar1;
    }
    pcVar2 = *(code **)(lVar9 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar2)(plVar1);
    }
    iVar5 = FUN_144aff48c(ppuVar12);
  }
LAB_1418b1fe1:
  lVar9 = param_2[4];
  lVar3 = param_2[5];
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0xb8), plVar1 != (longlong *)0x0)) {
    lVar10 = *plVar1;
    pcVar2 = *(code **)(lVar10 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar4 = (*pcVar2)(plVar1);
      if (cVar4 == '\0') goto LAB_1418b2049;
      lVar10 = *plVar1;
    }
    pcVar2 = *(code **)(lVar10 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar2)(plVar1);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_1418b2049:
  if ((iVar6 == iVar5) && (lVar9 == lVar8)) {
    if (lVar3 == lVar7) {
      return 1;
    }
    if ((lVar7 != 0) && (lVar3 != 0)) {
      iVar5 = *(int *)(lVar7 + 0x38);
      iVar6 = *(int *)(lVar3 + 0x38);
      if ((iVar5 <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar5 * 8) == lVar7 + 0x30)) {
        return 1;
      }
      if ((iVar6 <= iVar5) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar6 * 8) == lVar3 + 0x30)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1418b215a FUN_1418b215a body=785 status=ok
// SIG undefined FUN_1418b215a(void)

void FUN_1418b215a(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
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
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  local_a8 = param_1 + 0x2f8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  iStack_50 = 0;
  uStack_60 = local_a8;
  if (*(int *)(param_1 + 0x310) == 0) {
    local_ac = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_ac = *(int *)(param_1 + 0x310);
  }
  uStack_70 = CONCAT44(uStack_4c,iStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_a0 = param_1;
  local_98 = plVar1;
  local_90 = plVar1;
  if ((iStack_54 != local_ac) || (uStack_60 != local_a8)) {
    do {
      lVar4 = *local_90;
      lVar5 = (longlong)iStack_74;
      lVar16 = *(longlong *)(lVar4 + 0x10 + lVar5 * 0x20);
      if (lVar16 != 0) {
        plVar1 = *(longlong **)(lVar16 + 0x30);
        if (plVar1 != (longlong *)0x0) {
          *(undefined8 *)(lVar16 + 0x30) = 0;
          (**(code **)(*plVar1 + 0x18))();
          lVar16 = *(longlong *)(lVar4 + lVar5 * 0x20 + 0x10);
        }
        lVar4 = lVar16 + 0x80;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        iStack_54 = 0;
        iStack_50 = 0;
        uStack_60 = lVar4;
        if (*(int *)(lVar16 + 0x98) == 0) {
          uVar18 = 1;
          iVar9 = 0;
          uVar11 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          uVar11 = local_68 & 0xffffffff;
          uVar18 = local_68 >> 0x20;
          iVar9 = *(int *)(lVar16 + 0x98);
        }
        lVar5 = uStack_60;
        uVar17 = local_58;
        iVar6 = iStack_54;
        iVar12 = iStack_50;
        if (iStack_54 != iVar9 || uStack_60 != lVar4) {
          do {
            iVar10 = (int)uVar11;
            lVar15 = *(longlong *)(*(longlong *)(lVar16 + 0x70) + 0x10 + (longlong)iVar6 * 0x20);
            plVar1 = *(longlong **)(lVar15 + 0x30);
            if (plVar1 != (longlong *)0x0) {
              *(undefined8 *)(lVar15 + 0x30) = 0;
              (**(code **)(*plVar1 + 0x18))();
            }
            uVar17 = uVar17 & ~(uint)uVar18;
            lVar15 = *(longlong *)(lVar5 + 0x10);
            if (*(longlong *)(lVar5 + 0x10) == 0) {
              lVar15 = lVar5;
            }
            iVar3 = *(int *)(lVar5 + 0x18);
            lVar13 = (longlong)iVar10;
            uVar8 = *(uint *)(lVar15 + lVar13 * 4) & uVar17;
            if (uVar8 == 0) {
              iVar6 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar6 = iVar3 + -1;
              }
              iVar6 = iVar6 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar7 = iVar6;
              if (iVar6 < iVar10) {
                iVar7 = iVar10;
              }
              if (iVar10 < iVar6) {
                lVar14 = 0;
                do {
                  uVar8 = *(uint *)(lVar15 + lVar13 * 4 + 4 + lVar14 * 4);
                  if (uVar8 != 0) {
                    uVar11 = (ulonglong)(iVar10 + (int)lVar14 + 1);
                    uVar17 = 0xffffffff;
                    goto LAB_1418b238c;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar7 - lVar13 != lVar14);
                uVar17 = 0xffffffff;
                iVar10 = iVar7;
              }
              uVar11 = (ulonglong)(iVar10 + 1);
              iVar6 = iVar3;
            }
            else {
LAB_1418b238c:
              uVar18 = (ulonglong)(-uVar8 & uVar8);
              uVar2 = uVar18 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar6 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar6) {
                iVar6 = iVar3;
              }
            }
          } while ((iVar6 != iVar9) || (lVar5 != lVar4));
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != local_98 ||
             (CONCAT44(uStack_7c,uStack_80) != local_a8 || iStack_74 != local_ac));
  }
  FUN_14042ef50(local_a0);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b246c FUN_1418b246c body=140 status=ok
// SIG undefined FUN_1418b246c(void)

void FUN_1418b246c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0x10;
  if (param_2 < 0x11) {
LAB_1418b2481:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 0x11) && (*(longlong *)(param_1 + 0x100) == 0)) goto LAB_1418b2492;
    uVar3 = 0;
    if (0x10 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar2 = uVar2 >> 4;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_1418b2492;
      goto LAB_1418b2481;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x100,0,uVar3,0x10);
LAB_1418b2492:
  *(uint *)(param_1 + 0x10c) = uVar1;
  return;
}



// FUNCTION 1418b24f8 FUN_1418b24f8 body=269 status=ok
// SIG undefined FUN_1418b24f8(void)

void FUN_1418b24f8(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b2606 FUN_1418b2606 body=353 status=ok
// SIG undefined FUN_1418b2606(void)

void FUN_1418b2606(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418b268b;
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
LAB_1418b268b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418b2768 FUN_1418b2768 body=94 status=ok
// SIG undefined FUN_1418b2768(void)

void FUN_1418b2768(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      iVar4 = 0;
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if (((int)param_2 <= iVar1) && (iVar3 = iVar1, iVar1 < 1)) goto LAB_1418b2792;
    }
    FUN_1401dfc00(param_1,0,iVar3);
    iVar4 = iVar3;
  }
LAB_1418b2792:
  *(int *)(param_1 + 0x4c) = iVar4;
  return;
}



// FUNCTION 1418b27c6 FUN_1418b27c6 body=255 status=ok
// SIG undefined FUN_1418b27c6(void)

void FUN_1418b27c6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar11 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar9 = (longlong)iVar4;
      iVar12 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      plVar8 = plVar2 + lVar9 * 2 + 2;
      iVar5 = iVar4;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar6 = iVar12;
        if (lVar13 <= lVar10) break;
        lVar3 = *plVar8;
        iVar5 = iVar5 + 1;
        plVar8 = plVar8 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar12 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar11 != iVar4) {
          memmove(plVar2 + (longlong)iVar11 * 2,plVar2 + lVar9 * 2,(longlong)iVar12 << 4);
        }
        iVar11 = iVar11 + iVar12;
      }
      else {
        FUN_144a07593(plVar2 + lVar9 * 2,iVar12);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 1) = iVar11;
  }
  return;
}



// FUNCTION 1418b28c6 FUN_1418b28c6 body=110 status=ok
// SIG undefined FUN_1418b28c6(void)

void FUN_1418b28c6(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b40b600;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e55(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418b2934 FUN_1418b2934 body=29 status=ok
// SIG undefined FUN_1418b2934(void)

undefined8 FUN_1418b2934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b2952 FUN_1418b2952 body=275 status=ok
// SIG undefined FUN_1418b2952(void)

void FUN_1418b2952(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b2a66 FUN_1418b2a66 body=269 status=ok
// SIG undefined FUN_1418b2a66(void)

void FUN_1418b2a66(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b2b74 FUN_1418b2b74 body=373 status=ok
// SIG undefined FUN_1418b2b74(void)

void FUN_1418b2b74(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418b2bfd;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1418b2bfd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1418b2cea FUN_1418b2cea body=110 status=ok
// SIG undefined FUN_1418b2cea(void)

void FUN_1418b2cea(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b40b600;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e55(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418b2d58 FUN_1418b2d58 body=29 status=ok
// SIG undefined FUN_1418b2d58(void)

undefined8 FUN_1418b2d58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b2d76 FUN_1418b2d76 body=110 status=ok
// SIG undefined FUN_1418b2d76(void)

void FUN_1418b2d76(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b40b600;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e55(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418b2de4 FUN_1418b2de4 body=29 status=ok
// SIG undefined FUN_1418b2de4(void)

undefined8 FUN_1418b2de4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b2e02 FUN_1418b2e02 body=352 status=ok
// SIG undefined FUN_1418b2e02(void)

void FUN_1418b2e02(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4312c0;
  plVar1 = (longlong *)(param_1 + 0x210);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x230) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x228)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x228)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x1d0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e8)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b40b600;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e55(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418b2f62 FUN_1418b2f62 body=29 status=ok
// SIG undefined FUN_1418b2f62(void)

undefined8 FUN_1418b2f62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b2f80 FUN_1418b2f80 body=152 status=ok
// SIG undefined FUN_1418b2f80(void)

void FUN_1418b2f80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b433340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001418b300d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1418b3018 FUN_1418b3018 body=296 status=ok
// SIG undefined FUN_1418b3018(void)

ulonglong FUN_1418b3018(longlong param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1418b313a;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1418b313a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1418b313a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418b30e8;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pcVar3 = *(code **)(param_1 + 0x20);
      plVar9 = (longlong *)(param_1 + 0x40);
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x30);
      }
      uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
      (*pcVar3)(uVar6);
      uVar8 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
      goto LAB_1418b30e8;
    }
  }
  uVar8 = 0;
LAB_1418b30e8:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b3142 FUN_1418b3142 body=110 status=ok
// SIG undefined FUN_1418b3142(void)

void FUN_1418b3142(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b40b600;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e55(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418b31b0 FUN_1418b31b0 body=29 status=ok
// SIG undefined FUN_1418b31b0(void)

undefined8 FUN_1418b31b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b31ce FUN_1418b31ce body=50 status=ok
// SIG undefined FUN_1418b31ce(void)

void FUN_1418b31ce(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b431730;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418b3200 FUN_1418b3200 body=29 status=ok
// SIG undefined FUN_1418b3200(void)

undefined8 FUN_1418b3200(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b321e FUN_1418b321e body=9 status=ok
// SIG undefined FUN_1418b321e(void)

void FUN_1418b321e(longlong param_1)

{
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 1418b3228 FUN_1418b3228 body=29 status=ok
// SIG undefined FUN_1418b3228(void)

undefined8 FUN_1418b3228(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b3246 FUN_1418b3246 body=186 status=ok
// SIG undefined FUN_1418b3246(void)

undefined8 FUN_1418b3246(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 == (byte *)0x0) || ((~*pbVar1 & 3) != 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 1) & 2) == 0)) {
      pcVar4 = "false";
      if (*param_3 != '\0') {
        pcVar4 = "true";
      }
      FUN_140126aca(lVar2,pcVar4);
    }
    uVar3 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b3302 FUN_1418b3302 body=55 status=ok
// SIG undefined FUN_1418b3302(void)

void FUN_1418b3302(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1402057ac(param_3,param_2,uVar1,0);
  FUN_140ef41e4(param_2,param_3);
  return;
}



// FUNCTION 1418b333a FUN_1418b333a body=585 status=ok
// SIG undefined FUN_1418b333a(void)

undefined8 FUN_1418b333a(longlong param_1,double *param_2,double *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    dVar2 = param_2[1] - param_3[1];
    dVar1 = *param_2 - *param_3;
    dVar5 = dVar1 * dVar1 + dVar2 * dVar2;
    if ((dVar5 != 1.0) || (NAN(dVar5))) {
      if (dVar5 < 9.99999993922529e-09) {
        uVar10 = (undefined4)DAT_14c8464f0;
        uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar2 = DAT_14c8464e8;
        dVar1 = DAT_14c8464e0;
      }
      else {
        uVar10 = 0;
        uVar11 = 0;
        dVar2 = dVar2 * (1.0 / SQRT(dVar5));
        dVar1 = dVar1 * (1.0 / SQRT(dVar5));
      }
    }
    else {
      uVar3 = -(ulonglong)(param_2[2] - param_3[2] == 0.0) & (ulonglong)(param_2[2] - param_3[2]);
      uVar10 = (undefined4)uVar3;
      uVar11 = (undefined4)(uVar3 >> 0x20);
    }
    dVar5 = (double)FUN_144719204((double)*(float *)(param_1 + 0x1c) + *(double *)(param_4 + 8),0);
    dVar6 = (double)FUN_144719204(0,0);
    dVar5 = (double)FUN_144719204(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                                  (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0),0);
    dVar7 = sin(dVar6 * 0.017453292519943295);
    dVar6 = cos(dVar6 * 0.017453292519943295);
    dVar8 = sin(dVar5 * 0.017453292519943295);
    dVar5 = cos(dVar5 * 0.017453292519943295);
    fVar4 = (float)(dVar7 * (double)CONCAT44(uVar11,uVar10) +
                   dVar5 * dVar6 * dVar1 + dVar8 * dVar6 * dVar2);
    fVar9 = fVar4;
    if (1.0 <= fVar4) {
      fVar9 = 1.0;
    }
    fVar9 = acosf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 | ~-(uint)(fVar4 < -1.0) & (uint)fVar9)
                 );
    if (*(float *)(param_1 + 0x20) * 0.5 < fVar9 * 57.295776) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1418b3738 FUN_1418b3738 body=41 status=ok
// SIG undefined FUN_1418b3738(void)

undefined8 FUN_1418b3738(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c84c00();
  if (lVar1 != 0) {
    uVar2 = FUN_140c84c86(lVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1418b3762 FUN_1418b3762 body=662 status=ok
// SIG undefined FUN_1418b3762(void)

ulonglong FUN_1418b3762(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *unaff_RBP;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [16];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = (undefined8 *)0x0;
  local_50 = 0x1000000000;
  local_e8 = param_4;
  if (param_3 != -1) {
    unaff_RBP = local_d8;
    do {
      lVar2 = *(longlong *)(param_1 + 0x1f0);
      lVar10 = (longlong)param_3 * 0x50;
      if ((byte)(*(char *)(lVar2 + 8 + lVar10) - 1U) < 2) {
        lVar7 = (longlong)param_3 * 0x70;
        iVar1 = *(int *)(*(longlong *)(param_2 + 0x78) + 0x10 + lVar7);
        if (iVar1 == 0) {
          uVar8 = 0;
          goto LAB_1418b396b;
        }
        lVar7 = *(longlong *)(param_2 + 0x78) + lVar7;
        uVar8 = 0;
        if ((*(int *)(lVar7 + 0x14) == 0) || (iVar1 == DAT_14c948000)) goto LAB_1418b396b;
        if (DAT_14c947fe0 == 0) {
          lVar6 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar6);
          DAT_14c947fe0 = lVar6;
        }
        FUN_140045924(DAT_14c947fe0,&local_e0,lVar7 + 0x10,1);
        uVar8 = local_50 & 0xffffffff;
        uVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar4);
        if (local_50._4_4_ < uVar4) {
          FUN_1468b3bb8(local_d8,uVar8);
        }
        puVar5 = local_58;
        if (local_58 == (undefined8 *)0x0) {
          puVar5 = unaff_RBP;
        }
        memmove(puVar5 + 1,puVar5,uVar8 << 3);
        puVar5 = local_58;
        if (local_58 == (undefined8 *)0x0) {
          puVar5 = unaff_RBP;
        }
        *puVar5 = local_e0;
      }
      uVar8 = local_50 & 0xffffffff;
      uVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar4);
      if (local_50._4_4_ < uVar4) {
        FUN_1468b3bb8(local_d8,uVar8);
      }
      puVar11 = (undefined8 *)(lVar2 + lVar10);
      puVar5 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar5 = unaff_RBP;
      }
      memmove(puVar5 + 1,puVar5,uVar8 << 3);
      puVar5 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar5 = unaff_RBP;
      }
      *puVar5 = *puVar11;
      param_3 = *(int *)((longlong)puVar11 + 0x24);
    } while (param_3 != -1);
  }
  uVar3 = local_e8;
  FUN_1447715ec(local_e8,&DAT_14c9485f0);
  FUN_1447a993c(uVar3,local_50 & 0xffffffff);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (0 < (int)local_50) {
    uVar9 = 0;
    do {
      puVar5 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar5 = local_d8;
      }
      FUN_1402b5374(uVar3,uVar9 & 0xffffffff,puVar5[uVar9]);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)(int)local_50);
  }
LAB_1418b396b:
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1418b39fa FUN_1418b39fa body=172 status=ok
// SIG undefined FUN_1418b39fa(void)

longlong FUN_1418b39fa(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  int local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447a97f4(local_68);
  FUN_1447a97f4(local_40,local_68);
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    plVar2 = *(longlong **)(param_1 + 0xc0);
    lVar1 = (longlong)*(int *)(param_1 + 200) << 3;
    do {
      if (*(int *)(*plVar2 + 0x28) == local_40[0]) goto LAB_1418b3a5b;
      plVar2 = plVar2 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  plVar2 = (longlong *)0x0;
LAB_1418b3a5b:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (plVar2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *plVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b3aa8 FUN_1418b3aa8 body=742 status=ok
// SIG undefined FUN_1418b3aa8(void)

void FUN_1418b3aa8(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x210) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x210);
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0xf0);
    lVar15 = FUN_144a61814(uVar5,puVar1);
    if (lVar15 != 0) {
      FUN_1405a424c(uVar5,*puVar1);
    }
    *puVar1 = 0;
  }
  if (((*(longlong *)(param_1 + 0x1b0) != 0) &&
      (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar15 != 0)) &&
     (local_90 = *(longlong *)(lVar15 + 0x68), local_90 != 0)) {
    iVar3 = *(int *)(param_1 + 0x188);
    if (iVar3 == 0) {
      uVar17 = 1;
      uVar12 = 0;
      iVar6 = 0;
      iVar13 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x180);
      if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x170);
      }
      uVar14 = *puVar8;
      if (uVar14 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        uVar12 = 0;
        uVar17 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar17 = uVar12;
        }
        iVar13 = 0;
        do {
          if (uVar17 == uVar12) goto LAB_1418b3cac;
          iVar13 = iVar13 + 0x20;
          uVar14 = puVar8[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar12 = 0;
        iVar13 = 0;
      }
      uVar17 = (ulonglong)(-uVar14 & uVar14);
      uVar2 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar6) {
        iVar6 = iVar3;
      }
    }
    if (iVar6 != iVar3) {
      uVar14 = 0xffffffff;
      do {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 8 + (longlong)iVar6 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
          FUN_1456cec3c(lVar15);
        }
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_70[0] = 0xffff;
        FUN_140fe4ff6(param_1,lVar15,&local_88);
        if (((lVar15 != 0) && (-1 < (short)local_70[0])) &&
           (*(int *)(lVar15 + 300) < *(int *)(lVar15 + 0x100))) {
          uVar7 = FUN_1402d8968(local_90,local_70);
          FUN_145a0d6ac(param_1,lVar15,&local_88,uVar7);
        }
        uVar14 = uVar14 & ~(uint)uVar17;
        puVar8 = *(uint **)(param_1 + 0x180);
        if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x170);
        }
        iVar4 = *(int *)(param_1 + 0x188);
        iVar6 = (int)uVar12;
        lVar15 = (longlong)iVar6;
        uVar11 = puVar8[lVar15] & uVar14;
        if (uVar11 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar16 = 0;
            do {
              uVar11 = puVar8[lVar15 + lVar16 + 1];
              if (uVar11 != 0) {
                uVar12 = (ulonglong)(iVar6 + (int)lVar16 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1418b3c7d;
              }
              iVar13 = iVar13 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar10 - lVar15 != lVar16);
            uVar14 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar12 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar4;
        }
        else {
LAB_1418b3c7d:
          uVar17 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar17 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar6 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar6) {
            iVar6 = iVar4;
          }
        }
      } while (iVar6 != iVar3);
    }
  }
LAB_1418b3cac:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b3d90 FUN_1418b3d90 body=90 status=ok
// SIG undefined FUN_1418b3d90(void)

void FUN_1418b3d90(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1418b3dea FUN_1418b3dea body=29 status=ok
// SIG undefined FUN_1418b3dea(void)

undefined8 FUN_1418b3dea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b3e08 FUN_1418b3e08 body=275 status=ok
// SIG undefined FUN_1418b3e08(void)

void FUN_1418b3e08(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b3f1c FUN_1418b3f1c body=353 status=ok
// SIG undefined FUN_1418b3f1c(void)

void FUN_1418b3f1c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418b3fa1;
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
LAB_1418b3fa1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418b407e FUN_1418b407e body=68 status=ok
// SIG undefined FUN_1418b407e(void)

undefined8 * FUN_1418b407e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b434450;
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



// FUNCTION 1418b40c2 FUN_1418b40c2 body=118 status=ok
// SIG undefined FUN_1418b40c2(void)

void FUN_1418b40c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434450;
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



// FUNCTION 1418b4138 FUN_1418b4138 body=93 status=ok
// SIG undefined FUN_1418b4138(void)

void FUN_1418b4138(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418b4195 FUN_1418b4195 body=109 status=ok
// SIG undefined FUN_1418b4195(void)

void FUN_1418b4195(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x68);
    do {
      *puVar4 = 0;
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140cb2c32(puVar4 + -0x12);
      plVar3 = *(longlong **)(puVar4 + -0x14);
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
      puVar4 = puVar4 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418b4202 FUN_1418b4202 body=366 status=ok
// SIG undefined FUN_1418b4202(void)

void FUN_1418b4202(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x78;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418b4287;
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
LAB_1418b4287:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 1418b4370 FUN_1418b4370 body=305 status=ok
// SIG undefined FUN_1418b4370(void)

void FUN_1418b4370(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1418b440a;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1418b43e3:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1418b43e3;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1418b440a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418b440a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b44a2 FUN_1418b44a2 body=86 status=ok
// SIG undefined FUN_1418b44a2(void)

ulonglong FUN_1418b44a2(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong unaff_RSI;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = *(int **)(param_2 + 8);
    if (piVar2 == (int *)0x0) {
      piVar2 = &DAT_14c9485f0;
    }
    if (param_1 != 0) {
      do {
        piVar1 = *(int **)(param_1 + 8);
        if (piVar1 == (int *)0x0) {
          piVar1 = &DAT_14c9485f0;
        }
        unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),*piVar1 == *piVar2);
        if (*piVar1 == *piVar2) break;
        param_1 = FUN_1403155a4(param_1);
      } while (param_1 != 0);
      goto LAB_1418b44ea;
    }
  }
  unaff_RSI = 0;
LAB_1418b44ea:
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1418b44f8 FUN_1418b44f8 body=59 status=ok
// SIG undefined FUN_1418b44f8(void)

undefined8 FUN_1418b44f8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1403155a4();
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1418b4534 FUN_1418b4534 body=627 status=ok
// SIG undefined FUN_1418b4534(void)

void FUN_1418b4534(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
LAB_1418b4769:
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    lVar3 = FUN_141030812();
    if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) goto LAB_1418b4769;
    plVar7 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      plVar7 = param_2;
    }
  }
  *(undefined1 *)(plVar7 + 0xc) = 6;
  FUN_140c25b54(plVar7 + 0xc);
  local_48 = DAT_14cb8df18;
  local_50 = DAT_14cb8df10;
  plVar6 = plVar7 + 0xe;
  FUN_144928d62(plVar6,1);
  piVar4 = &DAT_14c9485f0;
  if ((int *)plVar7[1] != (int *)0x0) {
    piVar4 = (int *)plVar7[1];
  }
  if (((*piVar4 == 0) || (iVar1 = piVar4[1], iVar1 == 0)) || (*piVar4 == DAT_14c948000)) {
LAB_1418b474a:
    local_58 = DAT_14c948620;
    local_60 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar4[9] < 1)) {
      plVar5 = (longlong *)(piVar4 + 2);
    }
    else {
      plVar5 = *(longlong **)(piVar4 + 6);
    }
    if (iVar1 < 1) goto LAB_1418b474a;
    local_58 = (int)plVar5[1];
    local_60 = *plVar5;
  }
  FUN_144928d62(plVar6,2,&local_60);
  *(int *)(plVar7 + 0x14) = (int)plVar7[0xd];
  plVar7[0x13] = plVar7[0xc];
  FUN_1447715ec(plVar7 + 0x15,plVar6);
  local_70 = DAT_14cb8ded8;
  local_68 = DAT_14cb8dee0;
  FUN_1402939f8(plVar7 + 0x13);
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1c] = 0;
  if (DAT_14cb8df08 != 0) {
    plVar6 = plVar7 + 1;
    if ((char)plVar7[2] != '\0') {
      if ((char)plVar7[2] != '\x02') goto LAB_1418b4722;
      plVar6 = (longlong *)(*plVar6 + 0x30);
    }
    if (*plVar6 != 0) {
      FUN_14030ff28(DAT_14cb8df08,&local_50,*plVar6 + 0x48);
      if (DAT_14c947fe0 == 0) {
        lVar2 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar2);
        DAT_14c947fe0 = lVar2;
      }
      FUN_140045924(DAT_14c947fe0,&local_60,&local_50,1);
      if (plVar7[0x1a] != local_60) {
        plVar7[0x1c] = 0;
      }
      plVar7[0x1a] = local_60;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1418b4722:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b47a8 FUN_1418b47a8 body=508 status=ok
// SIG undefined FUN_1418b47a8(void)

uint * FUN_1418b47a8(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined1 uVar6;
  uint uVar7;
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
  lVar3 = FUN_1447262c2(param_4);
  if (lVar3 == 0) {
switchD_1418b490c_default:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = 0;
LAB_1418b48f6:
    uVar6 = 1;
  }
  else {
    if (DAT_14cb6fd70 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1487a9cc9;
      local_50 = FUN_1465433f8;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    plVar4 = (longlong *)FUN_144718840(lVar3,DAT_14cb6fd70);
    if (plVar4 == (longlong *)0x0) goto switchD_1418b490c_default;
    if (*(char *)(param_1 + 8) == '\0') {
      uVar7 = FUN_14023bf44(plVar4);
      goto LAB_1418b480f;
    }
    switch(*(char *)(param_1 + 8)) {
    case '\x01':
      uVar7 = FUN_14023c00e(plVar4);
      break;
    case '\x02':
      lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x28))(plVar4);
      if (plVar4 == (longlong *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined1 *)(lVar3 + 1));
      }
      break;
    case '\x03':
      uVar7 = FUN_14023bdd2(plVar4);
      break;
    case '\x04':
      uVar7 = FUN_140541422(plVar4);
      break;
    case '\x05':
      pcVar5 = (char *)(**(code **)(*plVar4 + 0x18))(plVar4);
      cVar1 = *pcVar5;
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = (uint)(cVar1 == '\0');
      goto LAB_1418b48f6;
    case '\x06':
      uVar6 = 1;
      bVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,1);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = (uint)bVar2;
      goto LAB_1418b481c;
    default:
      goto switchD_1418b490c_default;
    }
LAB_1418b480f:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar7;
    uVar6 = 3;
  }
LAB_1418b481c:
  *(undefined1 *)(param_2 + 8) = uVar6;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418b49a6 FUN_1418b49a6 body=105 status=ok
// SIG undefined FUN_1418b49a6(void)

bool FUN_1418b49a6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_2 + 0x3d0);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 == plVar3) {
        return false;
      }
      if (plVar3 == (longlong *)0x0) {
        return false;
      }
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        return 0 < *(int *)(lVar4 + 0x70);
      }
    }
  }
  return false;
}



// FUNCTION 1418b4a10 FUN_1418b4a10 body=527 status=ok
// SIG undefined FUN_1418b4a10(void)

void FUN_1418b4a10(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    if ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0) {
      FUN_140457ffc(param_2 + 0x57,param_1);
    }
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb56270);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b4c34 FUN_1418b4c34 body=146 status=ok
// SIG undefined FUN_1418b4c34(void)

longlong * FUN_1418b4c34(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b435460;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b176ca0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
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



// FUNCTION 1418b4cc6 FUN_1418b4cc6 body=25 status=ok
// SIG undefined FUN_1418b4cc6(void)

void FUN_1418b4cc6(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ab64e90;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1418b4ce0 FUN_1418b4ce0 body=29 status=ok
// SIG undefined FUN_1418b4ce0(void)

undefined8 FUN_1418b4ce0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b4cfe FUN_1418b4cfe body=650 status=ok
// SIG undefined FUN_1418b4cfe(void)

undefined8 FUN_1418b4cfe(char *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == '\x01') {
    if ((int)param_2[1] == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*param_2;
    }
    iVar3 = _wtoi(pwVar7);
    FUN_140c3a2ac(param_1);
    *param_1 = '\x01';
    *(int *)(param_1 + 8) = iVar3;
    goto LAB_1418b4d4f;
  }
  uVar5 = 0;
  switch(*param_1) {
  case '\x02':
    if ((int)param_2[1] == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*param_2;
    }
    uVar6 = _wcstoui64(pwVar7,(wchar_t **)0x0,10);
    FUN_140c3a2ac(param_1);
    *param_1 = '\x02';
    *(int *)(param_1 + 8) = (int)uVar6;
    break;
  case '\x03':
    if ((int)param_2[1] == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*param_2;
    }
    uVar6 = _wtoi64(pwVar7);
    FUN_140c3a2ac(param_1);
    *param_1 = '\x03';
    goto LAB_1418b4ee9;
  case '\x04':
    if ((int)param_2[1] == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*param_2;
    }
    uVar6 = _wcstoui64(pwVar7,(wchar_t **)0x0,10);
    FUN_140c3a2ac(param_1);
    *param_1 = '\x04';
LAB_1418b4ee9:
    *(ulonglong *)(param_1 + 8) = uVar6;
    break;
  case '\x05':
    if ((int)param_2[1] == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*param_2;
    }
    dVar12 = wcstod(pwVar7,(wchar_t **)0x0);
    FUN_140c3a2ac(param_1);
    *param_1 = '\x05';
    *(double *)(param_1 + 8) = dVar12;
    break;
  case '\x06':
    if ((int)param_2[1] == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    FUN_140c3a228(param_1,puVar8);
    break;
  case '\a':
    if ((int)param_2[1] == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*param_2;
    }
    dVar12 = _wtof(pwVar7);
    FUN_140c3a2ac(param_1);
    *param_1 = '\a';
    *(float *)(param_1 + 8) = (float)dVar12;
    break;
  default:
    goto switchD_1418b4d8d_caseD_8;
  case '\t':
    FUN_140056680(&local_40,&DAT_149e06346);
    iVar3 = (int)param_2[1];
    if (iVar3 == local_38) {
      bVar11 = true;
      if (1 < iVar3) {
        lVar9 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_2 + lVar9);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_40 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1418b4e52;
            }
            iVar3 = uVar4 - uVar10;
            goto LAB_1418b4f82;
          }
          if (uVar1 == 0) break;
LAB_1418b4e52:
          lVar9 = lVar9 + 2;
        }
        iVar3 = 0;
LAB_1418b4f82:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = local_38 + iVar3 == 1;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_140c3a2ac(param_1);
    *param_1 = '\t';
    param_1[8] = bVar11;
  }
LAB_1418b4d4f:
  uVar5 = 1;
switchD_1418b4d8d_caseD_8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b4f8a FUN_1418b4f8a body=56 status=ok
// SIG undefined FUN_1418b4f8a(void)

undefined8 FUN_1418b4f8a(char *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  if ((byte)(*param_1 - 1U) < 10) {
    puVar1 = (undefined2 *)(&PTR_DAT_14b438f38)[(byte)(*param_1 - 1U)];
  }
  else {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar1);
  return param_2;
}



// FUNCTION 1418b4fc2 FUN_1418b4fc2 body=64 status=ok
// SIG undefined FUN_1418b4fc2(void)

void FUN_1418b4fc2(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418b5002 FUN_1418b5002 body=353 status=ok
// SIG undefined FUN_1418b5002(void)

void FUN_1418b5002(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418b5087;
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
LAB_1418b5087:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418b5164 FUN_1418b5164 body=142 status=ok
// SIG undefined FUN_1418b5164(void)

void FUN_1418b5164(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1418b51f2 FUN_1418b51f2 body=142 status=ok
// SIG undefined FUN_1418b51f2(void)

void FUN_1418b51f2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1418b5280 FUN_1418b5280 body=85 status=ok
// SIG undefined FUN_1418b5280(void)

void FUN_1418b5280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b438dd0;
  FUN_141215b86(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
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



// FUNCTION 1418b52d6 FUN_1418b52d6 body=323 status=ok
// SIG undefined FUN_1418b52d6(void)

void FUN_1418b52d6(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar2 = puVar1 + 5;
  if (DAT_14ca85108 < puVar2) {
    FUN_140023dd8(&DAT_14ca85100,0x30);
    puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar1 + 5;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar2;
  *DAT_14ca85130 = puVar1;
  DAT_14ca85130 = puVar1 + 1;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    local_58 = &local_48;
    local_48 = 0xffffffffffffffff;
    local_40 = 0xffffffff;
    local_30 = 1;
    local_2c = 0x6000000000;
    local_24 = 0;
    local_18 = 0;
    local_50 = 1;
    local_38 = *(longlong *)(param_1 + 0x2a0);
    FUN_144760590(&DAT_14ca85100,&local_58,0);
  }
  local_48 = 0;
  local_40 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_48,1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b541a FUN_1418b541a body=153 status=ok
// SIG undefined FUN_1418b541a(void)

void FUN_1418b541a(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  uint local_34;
  undefined1 local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (1 < *(uint *)(param_1 + 0x2c)) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 1;
    local_44 = 0;
    uStack_3c = 0;
    local_34 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_30 = 0;
    local_2c = 0;
    local_28 = L"Coh_ViewRenderTargetTextureMSAA";
    local_20 = 0;
    uStack_18 = 0;
    FUN_143e78696(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_78);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140040b50(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b54ba FUN_1418b54ba body=269 status=ok
// SIG undefined FUN_1418b54ba(void)

void FUN_1418b54ba(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b55c8 FUN_1418b55c8 body=269 status=ok
// SIG undefined FUN_1418b55c8(void)

void FUN_1418b55c8(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b56d6 FUN_1418b56d6 body=49 status=ok
// SIG undefined FUN_1418b56d6(void)

longlong FUN_1418b56d6(void)

{
  if (DAT_14cb903d8 == 0) {
    FUN_14073dd9a(&DAT_14cb903d8,&PTR_LAB_14b440030);
  }
  return DAT_14cb903d8;
}



// FUNCTION 1418b5707 FUN_1418b5707 body=49 status=ok
// SIG undefined FUN_1418b5707(void)

longlong FUN_1418b5707(void)

{
  if (DAT_14cb909d0 == 0) {
    FUN_14073dd9a(&DAT_14cb909d0,&PTR_LAB_14b44d1a0);
  }
  return DAT_14cb909d0;
}



// FUNCTION 1418b5738 FUN_1418b5738 body=132 status=ok
// SIG undefined FUN_1418b5738(void)

undefined8 * FUN_1418b5738(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_38,"Material\'/CohtmlPlugin/CohtmlEditorMaterial.CohtmlEditorMaterial\'");
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = local_38;
  local_20 = local_30 + -1;
  if (local_30 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b57ca FUN_1418b57ca body=179 status=ok
// SIG undefined FUN_1418b57ca(void)

void FUN_1418b57ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
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
  plVar5 = *(longlong **)(param_1 + 0x58);
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
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x30) + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418b587e FUN_1418b587e body=217 status=ok
// SIG undefined FUN_1418b587e(void)

void FUN_1418b587e(longlong param_1,char *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar1 = *(longlong **)(param_1 + 8);
  local_38 = 0;
  if (param_2 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_138,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_148,local_30);
  (**(code **)(*plVar1 + 8))(plVar1,local_148);
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b5958 FUN_1418b5958 body=174 status=ok
// SIG undefined FUN_1418b5958(void)

void FUN_1418b5958(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_18 = param_1;
  (**(code **)(param_1[0x16] + 0x28))(param_1 + 0x16,0x8ff,&local_18);
  param_1[0x16] = &PTR_FUN_14b452260;
  if (param_1[0x1a] != 0) {
    plVar2 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (local_18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_18 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_18)(local_18,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b5a08 FUN_1418b5a08 body=29 status=ok
// SIG undefined FUN_1418b5a08(void)

undefined8 FUN_1418b5a08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b5a26 FUN_1418b5a26 body=29 status=ok
// SIG undefined FUN_1418b5a26(void)

undefined8 FUN_1418b5a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b5a44 FUN_1418b5a44 body=74 status=ok
// SIG undefined FUN_1418b5a44(void)

void FUN_1418b5a44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418b5a8e FUN_1418b5a8e body=29 status=ok
// SIG undefined FUN_1418b5a8e(void)

undefined8 FUN_1418b5a8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b5aab FUN_1418b5aab body=331 status=ok
// SIG undefined FUN_1418b5aab(void)

bool FUN_1418b5aab(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (param_1 == 0) {
LAB_1418b5bef:
    bVar6 = false;
  }
  else {
    puVar4 = *(undefined **)(param_1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951ae0) {
      FUN_144b3d300(&DAT_14c951ae0);
      if (DAT_14c951ae0 == -1) {
        FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                      FUN_140b31576);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
    }
    if (DAT_14c951a98 == 0) {
      bVar6 = puVar4 != (undefined *)0x0;
      if (puVar4 != &DAT_14c951a90 && bVar6) {
        do {
          puVar4 = *(undefined **)(puVar4 + 0x30);
          bVar6 = puVar4 != (undefined *)0x0;
          if (puVar4 == &DAT_14c951a90) break;
        } while (puVar4 != (undefined *)0x0);
      }
      if (!bVar6) goto LAB_1418b5bef;
    }
    else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951a98) == 0) goto LAB_1418b5bef;
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    uVar5 = (ulonglong)(byte)param_2 ^ 0x13;
    ppuVar3 = &PTR_FUN_14b454510;
    do {
      cVar2 = (*(code *)*ppuVar3)(uVar1,param_2);
      if (cVar2 != '\0') goto LAB_1418b5b2a;
      ppuVar3 = ppuVar3 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    ppuVar3 = (undefined **)0x0;
LAB_1418b5b2a:
    bVar6 = ppuVar3 != (undefined **)0x0;
  }
  return bVar6;
}



// FUNCTION 1418b5bf6 FUN_1418b5bf6 body=432 status=ok
// SIG undefined FUN_1418b5bf6(void)

longlong * FUN_1418b5bf6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  
  local_20 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_48);
  plVar7 = local_20;
  if (DAT_14cb0d2b0 != 0) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar8 = 0;
      do {
        pcVar4 = *(char **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
        if (*(longlong *)(pcVar4 + 0x360) != 0) {
          cVar3 = *pcVar4;
          if ((cVar3 == '\x01') || (cVar3 == '\x03')) {
            plVar7 = (longlong *)FUN_1449baec6();
            if ((((plVar7 == (longlong *)0x0) ||
                 (plVar5 = (longlong *)plVar7[0x1f], plVar5 == (longlong *)0x0)) ||
                (plVar7 = *(longlong **)((longlong)plVar5 + 0xb4), plVar7 != DAT_14cb08720)) ||
               (plVar7 = (longlong *)0x0, plVar5 == (longlong *)&DAT_00000008)) goto LAB_1418b5caf;
            plVar7 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
            plVar6 = (longlong *)*plVar7;
            if (plVar6 == (longlong *)0x0) {
              if (plVar5[0x12] == 0) goto LAB_1418b5caf;
              plVar7 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x2c8))(DAT_14ca83900,&local_28);
            }
            else {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              local_28 = plVar6;
            }
            if (local_28 != (longlong *)0x0) {
              lVar8 = (**(code **)(*local_28 + 8))();
              *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(lVar8 + 0x24);
              lVar8 = (**(code **)(*local_28 + 8))();
              *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar8 + 0x28);
              LOCK();
              uVar2 = *(uint *)(param_1 + 0xf8);
              *(uint *)(param_1 + 0xf8) = 1;
              plVar7 = (longlong *)(ulonglong)uVar2;
              UNLOCK();
              if (local_28 != (longlong *)0x0) {
                LOCK();
                puVar1 = (uint *)(local_28 + 1);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                plVar7 = (longlong *)(ulonglong)(uVar2 & 0x3fffffff);
                if ((uVar2 & 0x3fffffff) == 1) {
                  plVar7 = (longlong *)FUN_144a54812();
                }
              }
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              puVar1 = (uint *)(plVar6 + 1);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              plVar7 = (longlong *)(ulonglong)(uVar2 & 0x3fffffff);
              if ((uVar2 & 0x3fffffff) == 1) {
                plVar7 = (longlong *)FUN_144a54812(plVar6);
              }
            }
            goto LAB_1418b5caf;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
    }
    LOCK();
    uVar2 = *(uint *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xf8) = 2;
    plVar7 = (longlong *)(ulonglong)uVar2;
    UNLOCK();
  }
LAB_1418b5caf:
  if (((ulonglong)local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b5da8 FUN_1418b5da8 body=30 status=ok
// SIG undefined FUN_1418b5da8(void)

undefined8 FUN_1418b5da8(undefined8 param_1,undefined8 param_2)

{
  FUN_1407c952c();
  return param_2;
}



// FUNCTION 1418b5dc6 FUN_1418b5dc6 body=30 status=ok
// SIG undefined FUN_1418b5dc6(void)

undefined8 FUN_1418b5dc6(undefined8 param_1,undefined8 param_2)

{
  FUN_1407c952c();
  return param_2;
}



// FUNCTION 1418b5de4 FUN_1418b5de4 body=30 status=ok
// SIG undefined FUN_1418b5de4(void)

undefined8 FUN_1418b5de4(undefined8 param_1,undefined8 param_2)

{
  FUN_1407c952c();
  return param_2;
}



// FUNCTION 1418b5e0e FUN_1418b5e0e body=213 status=ok
// SIG undefined FUN_1418b5e0e(void)

void FUN_1418b5e0e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1418b5ee3 FUN_1418b5ee3 body=108 status=ok
// SIG undefined FUN_1418b5ee3(void)

void FUN_1418b5ee3(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + 8);
  do {
    *param_1 = 0;
    iVar1 = *piVar2;
    _Src = *(void **)(piVar2 + -2);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1409e00a6(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1);
    }
    param_1 = param_1 + 2;
    piVar2 = piVar2 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1418b5f4f FUN_1418b5f4f body=43 status=ok
// SIG undefined FUN_1418b5f4f(void)

void FUN_1418b5f4f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1418b5f7a FUN_1418b5f7a body=783 status=ok
// SIG undefined FUN_1418b5f7a(void)

ulonglong FUN_1418b5f7a(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  code *local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  ulonglong local_60;
  ulonglong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = *(ulonglong *)(param_1 + 0x18);
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  else {
    puVar11 = *(undefined **)(uVar7 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_70 = FUN_140b31576;
      local_78 = &DAT_14c951a38;
      local_80 = (code *)0x0;
      local_88 = (code *)0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar13 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c951a90 && bVar13) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar13 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c951a90) break;
        } while (puVar11 != (undefined *)0x0);
      }
    }
    else {
      bVar13 = (*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a98) != 0;
    }
    uVar8 = 0;
    if (bVar13) {
      uVar8 = uVar7;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  local_60 = param_3;
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    uVar5 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar9 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x78);
    }
    iVar6 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar10 = (ulonglong *)(*plVar1 + (longlong)iVar6 * 0x28);
        if (*puVar10 == param_3) {
          if (puVar10 != (ulonglong *)0x0) goto LAB_1418b607e;
          break;
        }
        iVar6 = (int)puVar10[4];
      } while (iVar6 != -1);
    }
  }
  local_58 = &local_60;
  FUN_14006627a(plVar1,&local_4c);
  puVar10 = (ulonglong *)(*plVar1 + (longlong)local_4c * 0x28);
LAB_1418b607e:
  puVar10[1] = param_3;
  puVar10[2] = uVar8;
  puVar10[3] = *(ulonglong *)(param_1 + 0x30);
  iVar6 = *(int *)(uVar8 + 0x44);
  bVar2 = *(byte *)(uVar8 + 0x70);
  (**(code **)(**(longlong **)(uVar8 + 0x78) + 0x178))();
  iVar3 = *(int *)(*(longlong *)(uVar8 + 0x78) + 0x34);
  local_80 = FUN_144b3a246;
  local_88 = FUN_144b3a2f7;
  cVar4 = (**(code **)(*param_2 + 0x158))(param_2,puVar10 + 1,FUN_1405c1ba6,FUN_1489dbc33);
  if (cVar4 == '\0') {
    puVar10 = (ulonglong *)((longlong)iVar6 + param_3);
    (**(code **)(*param_2 + 0x160))(param_2,(longlong)(int)puVar10[1]);
    if (0 < (int)puVar10[1]) {
      lVar12 = 0;
      lVar9 = 0;
      do {
        if ((bVar2 & 1) == 0) {
          uVar7 = *puVar10;
        }
        else {
          uVar7 = *puVar10;
          if ((uVar7 & 1) != 0) {
            uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar10;
          }
        }
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),param_2,uVar7 + lVar12);
        lVar9 = lVar9 + 1;
        lVar12 = lVar12 + iVar3;
      } while (lVar9 < (int)puVar10[1]);
    }
    (**(code **)(*param_2 + 0x168))(param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1418b628a FUN_1418b628a body=67 status=ok
// SIG undefined FUN_1418b628a(void)

Property * FUN_1418b628a(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1418b62ce FUN_1418b62ce body=67 status=ok
// SIG undefined FUN_1418b62ce(void)

Property * FUN_1418b62ce(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1418b6311 FUN_1418b6311 body=102 status=ok
// SIG undefined FUN_1418b6311(void)

undefined8 * FUN_1418b6311(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455cb0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1418b6377 FUN_1418b6377 body=102 status=ok
// SIG undefined FUN_1418b6377(void)

undefined8 * FUN_1418b6377(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455e60;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1418b63dd FUN_1418b63dd body=102 status=ok
// SIG undefined FUN_1418b63dd(void)

undefined8 * FUN_1418b63dd(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b456010;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1418b6443 FUN_1418b6443 body=102 status=ok
// SIG undefined FUN_1418b6443(void)

undefined8 * FUN_1418b6443(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b4560a0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1418b64aa FUN_1418b64aa body=94 status=ok
// SIG undefined FUN_1418b64aa(void)

undefined8 * FUN_1418b64aa(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455c20;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 1418b6508 FUN_1418b6508 body=385 status=ok
// SIG undefined FUN_1418b6508(void)

undefined8 FUN_1418b6508(longlong param_1,longlong param_2,void *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  size_t sVar2;
  wchar_t *_Str;
  ulonglong _Size;
  uint uVar3;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  int local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x248))(plVar1,&local_e8,*(int *)((longlong)plVar1 + 0x44) + param_2);
  _Str = local_e8;
  if (local_e0 == 0) {
    _Str = L"";
  }
  local_58 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
    _Size = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
    uVar3 = local_48 + 1;
    local_50 = (undefined1 *)0x0;
    if (0x80 < uVar3) {
      FUN_1446efa72(&local_58,0,uVar3,1);
      local_50 = local_58;
    }
    if (local_50 == (undefined1 *)0x0) {
      local_50 = local_d8;
    }
    FUN_14475a98a(local_50,uVar3,_Str,(int)sVar2 + 1);
    _Size = (ulonglong)local_48;
  }
  if ((param_3 != (void *)0x0) && (_Size <= *param_4)) {
    memcpy(param_3,local_50,_Size);
  }
  *param_4 = _Size;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1418b668a FUN_1418b668a body=114 status=ok
// SIG undefined FUN_1418b668a(void)

Property * FUN_1418b668a(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455cb0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1418b66fc FUN_1418b66fc body=94 status=ok
// SIG undefined FUN_1418b66fc(void)

undefined8 * FUN_1418b66fc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455cb0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 1418b675a FUN_1418b675a body=114 status=ok
// SIG undefined FUN_1418b675a(void)

Property * FUN_1418b675a(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455dd0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1418b67cc FUN_1418b67cc body=114 status=ok
// SIG undefined FUN_1418b67cc(void)

Property * FUN_1418b67cc(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455e60;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1418b683e FUN_1418b683e body=94 status=ok
// SIG undefined FUN_1418b683e(void)

undefined8 * FUN_1418b683e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455e60;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 1418b689c FUN_1418b689c body=114 status=ok
// SIG undefined FUN_1418b689c(void)

Property * FUN_1418b689c(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b456010;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1418b690e FUN_1418b690e body=705 status=ok
// SIG undefined FUN_1418b690e(void)

longlong FUN_1418b690e(longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  bool bVar12;
  
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    puVar11 = *(undefined **)(lVar8 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
      uVar3 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0,0x40008001,0,uVar3,FUN_140fb5c52);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
    if (DAT_14c963e98 == 0) {
      bVar12 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c963e90 && bVar12) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar12 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c963e90) break;
        } while (puVar11 != (undefined *)0x0);
      }
    }
    else {
      bVar12 = (*(ulonglong *)(puVar11 + 0x18) & DAT_14c963e98) != 0;
    }
    lVar10 = 0;
    if (bVar12) {
      lVar10 = lVar8;
    }
    lVar8 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar8 + 0x30) < 2) {
    plVar4 = *(longlong **)(param_3 + *(int *)(lVar10 + 0x44));
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    plVar6 = plVar4;
    if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4);
    }
    FUN_1447a1fc0(plVar6);
    pcVar1 = *(code **)(*plVar4 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar6 = (longlong *)(plVar4[5] + 8);
      if (plVar4[5] == 0) {
        plVar6 = plVar4 + 3;
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar6 = plVar4 + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar1)(plVar4);
    }
    if ((int)plVar6[1] == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*plVar6;
    }
    (**(code **)(*param_2 + 0xd0))(param_2,puVar7);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  else {
    plVar4 = (longlong *)FUN_1489e9264(param_1,param_3);
    *plVar4 = param_3;
    plVar4[1] = *(longlong *)(param_1 + 0x18);
    cVar2 = (**(code **)(*param_2 + 0x158))
                      (param_2,plVar4,FUN_143ea2285,FUN_143ea2510,&LAB_143e9109a,FUN_143ea20cb);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(lVar10 + 0x30));
      if (0 < *(int *)(lVar10 + 0x30)) {
        lVar8 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x44) + param_3;
        lVar9 = 0;
        do {
          puVar5 = (undefined8 *)FUN_1447a1f4a(lVar8);
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(puVar5 + 1) != 0) {
            puVar7 = (undefined2 *)*puVar5;
          }
          (**(code **)(*param_2 + 0xd0))(param_2,puVar7);
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar9 < *(int *)(lVar10 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  return param_3;
}



// FUNCTION 1418b6bd0 FUN_1418b6bd0 body=94 status=ok
// SIG undefined FUN_1418b6bd0(void)

undefined8 * FUN_1418b6bd0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b456010;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 1418b6c2e FUN_1418b6c2e body=114 status=ok
// SIG undefined FUN_1418b6c2e(void)

Property * FUN_1418b6c2e(Property *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b4560a0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::Property::~Property(param_1);
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1418b6ca0 FUN_1418b6ca0 body=94 status=ok
// SIG undefined FUN_1418b6ca0(void)

undefined8 * FUN_1418b6ca0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4560a0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 1418b6cfe FUN_1418b6cfe body=693 status=ok
// SIG undefined FUN_1418b6cfe(void)

undefined8 FUN_1418b6cfe(longlong param_1,longlong param_2,void *param_3,ulonglong *param_4)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  wchar_t *_Str;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  wchar_t *local_100;
  int local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1400021e4(*(int *)(*(longlong *)(param_1 + 0x18) + 0x44) + param_2,&local_100);
  _Str = local_100;
  if (local_f8 == 0) {
    _Str = L"";
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar6 = 0;
  }
  else {
    sVar4 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar6 = sVar4 & 0xffffffff;
    pwVar8 = _Str;
    do {
      iVar9 = (int)uVar6;
      if (iVar9 < 1) {
LAB_1418b6e26:
        local_50 = local_e4;
        uVar5 = local_e4 + 1;
        if (uVar5 < 0x81) goto LAB_1418b6e43;
        FUN_1446efa72(&local_60,0,uVar5,1);
        local_f0 = local_60;
        goto LAB_1418b6e45;
      }
      wVar1 = *pwVar8;
      uVar5 = (uint)(ushort)wVar1;
      pwVar7 = pwVar8 + 1;
      uVar10 = iVar9 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
          if (cVar3 != '\0') goto LAB_1418b6e26;
          break;
        }
        if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
          pwVar7 = pwVar8 + 2;
          uVar10 = iVar9 - 2;
        }
      }
      cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
      uVar6 = (ulonglong)uVar10;
      pwVar8 = pwVar7;
    } while (cVar3 != '\0');
    local_50 = 0xffffffff;
    uVar5 = 0;
LAB_1418b6e43:
    local_f0 = (undefined1 *)0x0;
LAB_1418b6e45:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar9 = (int)sVar4 + 1;
    local_e4 = uVar5;
    local_58 = local_f0;
    do {
      if (iVar9 < 1) break;
      wVar1 = *_Str;
      uVar5 = (uint)(ushort)wVar1;
      pwVar8 = _Str + 1;
      iVar2 = iVar9 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          FUN_1400247af(uVar5,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = _Str + 2;
          iVar2 = iVar9 + -2;
        }
      }
      iVar9 = iVar2;
      _Str = pwVar8;
      cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
    } while (cVar3 != '\0');
    uVar6 = (ulonglong)(int)local_50;
  }
  if ((param_3 != (void *)0x0) && (uVar6 <= *param_4)) {
    memcpy(param_3,local_58,uVar6);
  }
  *param_4 = uVar6;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_100 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1418b6fb4 FUN_1418b6fb4 body=168 status=ok
// SIG undefined FUN_1418b6fb4(void)

void FUN_1418b6fb4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  *(undefined1 *)(puVar1 + 0x39) = 0;
  *(undefined4 *)(puVar1 + 0x32) = 0xffffffff;
  *(byte *)((longlong)puVar1 + 0x194) = *(byte *)((longlong)puVar1 + 0x194) & 0xfe;
  *puVar1 = &PTR_FUN_14b458040;
  puVar1[5] = &PTR_LAB_14b4584e0;
  puVar1[6] = &PTR_LAB_14b458520;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return;
}



// FUNCTION 1418b705c FUN_1418b705c body=97 status=ok
// SIG undefined FUN_1418b705c(void)

void FUN_1418b705c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409915e6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b459500;
  puVar1[5] = 0x3f800000;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[7] = 0x3ff0000000000000;
  puVar1[8] = 0x3ff0000000000000;
  puVar1[9] = 0;
  puVar1[10] = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[0xb] = DAT_14c8464e0;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = DAT_14c8464f0;
  return;
}



// FUNCTION 1418b70be FUN_1418b70be body=375 status=ok
// SIG undefined FUN_1418b70be(void)

void FUN_1418b70be(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409f0fb8(param_1,&local_48);
  if (((local_44 != 0) && (-1 < (int)local_48)) && ((int)local_48 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((local_48 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == local_44)) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      plVar2 = (longlong *)FUN_1409f0ca6();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
        lVar4 = *plVar2;
        lVar7 = (longlong)(int)plVar2[1] * 0x28;
        do {
          if ((local_44 == 0) || ((int)local_48 < 0)) {
LAB_1418b7231:
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if ((int)local_48 < DAT_14c9647dc) {
              plVar5 = (longlong *)
                       ((ulonglong)((local_48 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8));
              if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != local_44)) ||
                 ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_1418b7231;
              lVar6 = *plVar5;
            }
          }
          local_49 = 1;
          lVar1 = plVar2[2];
          uVar3 = FUN_1409f0d56(lVar4);
          (**(code **)(*(longlong *)(lVar6 + 0x30) + 0x98))(lVar6 + 0x30,uVar3,(int)lVar1,&local_49)
          ;
          lVar4 = lVar4 + 0x28;
          lVar7 = lVar7 + -0x28;
        } while (lVar7 != 0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b7236 FUN_1418b7236 body=357 status=ok
// SIG undefined FUN_1418b7236(void)

void FUN_1418b7236(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined1 local_51;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409f0fb8(param_1,&local_50);
  cVar3 = FUN_144729dda(&local_50);
  if ((cVar3 != '\0') && (uVar1 = *(uint *)(param_2 + 1), (ulonglong)uVar1 != 0)) {
    uVar9 = 0;
    local_60 = param_2;
    do {
      lVar10 = *local_60;
      plVar4 = (longlong *)FUN_1409f0ca6();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,uVar9 * 8 + lVar10);
      if ((plVar4 != (longlong *)0x0) && ((longlong)(int)plVar4[1] != 0)) {
        lVar10 = *plVar4;
        lVar8 = (longlong)(int)plVar4[1] * 0x28;
        do {
          if ((local_4c == 0) || ((int)local_50 < 0)) {
LAB_1418b7398:
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            if ((int)local_50 < DAT_14c9647dc) {
              plVar6 = (longlong *)
                       ((ulonglong)((local_50 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8));
              if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != local_4c)) ||
                 ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_1418b7398;
              lVar7 = *plVar6;
            }
          }
          local_51 = 1;
          lVar2 = plVar4[2];
          uVar5 = FUN_1409f0d56(lVar10);
          (**(code **)(*(longlong *)(lVar7 + 0x30) + 0x98))(lVar7 + 0x30,uVar5,(int)lVar2,&local_51)
          ;
          lVar10 = lVar10 + 0x28;
          lVar8 = lVar8 + -0x28;
        } while (lVar8 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b739c FUN_1418b739c body=40 status=ok
// SIG undefined FUN_1418b739c(void)

undefined8 FUN_1418b739c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b73c4 FUN_1418b73c4 body=40 status=ok
// SIG undefined FUN_1418b73c4(void)

undefined8 FUN_1418b73c4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b73ec FUN_1418b73ec body=44 status=ok
// SIG undefined FUN_1418b73ec(void)

void FUN_1418b73ec(undefined8 param_1,longlong *param_2)

{
  FUN_140cc83f7(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418b7418 FUN_1418b7418 body=57 status=ok
// SIG undefined FUN_1418b7418(void)

void FUN_1418b7418(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91a50 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb91a50 = FUN_140002ddd(FUN_14656ab92,uVar1,L"GbxUIState");
  }
  return;
}



// FUNCTION 1418b747a FUN_1418b747a body=29 status=ok
// SIG undefined FUN_1418b747a(void)

undefined8 FUN_1418b747a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b7497 FUN_1418b7497 body=49 status=ok
// SIG undefined FUN_1418b7497(void)

longlong FUN_1418b7497(void)

{
  if (DAT_14cb91ea8 == 0) {
    FUN_14086a14e(&DAT_14cb91ea8,&PTR_FUN_14b4667e0);
  }
  return DAT_14cb91ea8;
}



// FUNCTION 1418b74c8 FUN_1418b74c8 body=49 status=ok
// SIG undefined FUN_1418b74c8(void)

longlong FUN_1418b74c8(void)

{
  if (DAT_14cb92288 == 0) {
    FUN_14086a14e(&DAT_14cb92288,&PTR_FUN_14b46cc68);
  }
  return DAT_14cb92288;
}



// FUNCTION 1418b74f9 FUN_1418b74f9 body=49 status=ok
// SIG undefined FUN_1418b74f9(void)

longlong FUN_1418b74f9(void)

{
  if (DAT_14cb92170 == 0) {
    FUN_14073dd9a(&DAT_14cb92170,&PTR_LAB_14b46a690);
  }
  return DAT_14cb92170;
}



// FUNCTION 1418b752f FUN_1418b752f body=49 status=ok
// SIG undefined FUN_1418b752f(void)

longlong FUN_1418b752f(void)

{
  if (DAT_14cb92240 == 0) {
    FUN_14086a14e(&DAT_14cb92240,&PTR_FUN_14b46c4d0);
  }
  return DAT_14cb92240;
}



// FUNCTION 1418b7560 FUN_1418b7560 body=49 status=ok
// SIG undefined FUN_1418b7560(void)

longlong FUN_1418b7560(void)

{
  if (DAT_14cb92438 == 0) {
    FUN_14086a14e(&DAT_14cb92438,&PTR_FUN_14b46e7e8);
  }
  return DAT_14cb92438;
}



// FUNCTION 1418b7592 FUN_1418b7592 body=85 status=ok
// SIG undefined FUN_1418b7592(void)

void FUN_1418b7592(undefined8 *param_1)

{
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
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418b75e8 FUN_1418b75e8 body=71 status=ok
// SIG undefined FUN_1418b75e8(void)

undefined8 * FUN_1418b75e8(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1418b762f FUN_1418b762f body=172 status=ok
// SIG undefined FUN_1418b762f(void)

void FUN_1418b762f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    param_1 = param_1 + 0x28;
    do {
      *(undefined4 *)(plVar1 + 9) = 0;
      if (plVar1[8] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_14472eb64(plVar1,0);
      }
      plVar1[6] = 0xffffffff;
      *(undefined4 *)(plVar1 + 5) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + 0x2c)) {
        *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x80;
        FUN_1446efbd8(param_1);
      }
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_1 = param_1 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418b76dc FUN_1418b76dc body=117 status=ok
// SIG undefined FUN_1418b76dc(void)

undefined8 * FUN_1418b76dc(undefined8 param_1,undefined8 *param_2,longlong param_3)

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



// FUNCTION 1418b7752 FUN_1418b7752 body=128 status=ok
// SIG undefined FUN_1418b7752(void)

void FUN_1418b7752(undefined8 param_1,longlong param_2)

{
  FUN_140d4f835(*(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x88));
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x78));
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x38) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418b77d2 FUN_1418b77d2 body=118 status=ok
// SIG undefined FUN_1418b77d2(void)

undefined8 FUN_1418b77d2(undefined8 param_1,undefined8 *param_2)

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
  if (DAT_14cb92f38 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb92f38,local_38);
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



// FUNCTION 1418b784a FUN_1418b784a body=460 status=ok
// SIG undefined FUN_1418b784a(void)

/* WARNING: Removing unreachable block (ram,0x0001418b79f9) */
/* WARNING: Removing unreachable block (ram,0x0001418b7a08) */
/* WARNING: Removing unreachable block (ram,0x0001418b7a0c) */

undefined8
FUN_1418b784a(longlong param_1,char *param_2,undefined4 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a0 [256];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_a0 = 0;
  if (param_2 == (char *)0x0) {
    local_98 = 0;
    local_90 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_1a0,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b8,local_98);
  local_1a8 = *param_3;
  local_1a4 = *param_4;
  local_1a3 = *param_5;
  local_1a2 = *param_6;
  local_68 = &PTR_FUN_14b4788a0;
  uStack_60 = local_1b8;
  uStack_58 = uStack_1b0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  uStack_4c = CONCAT13(uStack_4c._3_1_,CONCAT12(local_1a2,CONCAT11(local_1a3,local_1a4)));
  uStack_50 = local_1a8;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = FUN_1418b8d32;
  puVar3[4] = 0;
  local_78 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_68._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_60._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_58._4_4_;
  *(undefined4 *)(puVar3 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_4c;
  local_88 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_1b8 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_a0 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}


