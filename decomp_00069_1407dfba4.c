// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407dfba4 FUN_1407dfba4 body=1154 status=ok
// SIG undefined FUN_1407dfba4(void)

void FUN_1407dfba4(undefined8 param_1,longlong param_2)

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
  undefined8 local_38;
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
            goto LAB_1407dfc8f;
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
LAB_1407dfc8f:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1407dfd5c;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1407dfd5c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407e0028(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e0028 FUN_1407e0028 body=163 status=ok
// SIG undefined FUN_1407e0028(void)

void FUN_1407e0028(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_1 + 0x968);
  *(byte *)(param_1 + 0x968) = bVar1 | 8;
  FUN_14022e476();
  if ((bVar1 & 8) == 0) {
    FUN_14051c90a(param_1);
  }
  (**(code **)(*(longlong *)(param_1 + 0x520) + 0x18))(param_1 + 0x520,&local_28);
  if (local_24 == '\x01') {
    uVar2 = FUN_1447210f0(param_1);
    plVar3 = (longlong *)FUN_14007a5e6(uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_28);
    }
  }
  FUN_143da9e14(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e00cc FUN_1407e00cc body=541 status=ok
// SIG undefined FUN_1407e00cc(void)

void FUN_1407e00cc(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [36];
  int local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0x500000008;
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(param_1 + 100) == '\0' && lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)(*(char *)(param_1 + 0x66) == '\0' && *(char *)(param_1 + 100) != '\0') << 3;
    if (lVar9 != 0) {
      uVar5 = 8;
      uVar6 = 0;
      uVar8 = 0;
      local_54 = 0;
      lVar3 = 0;
      do {
        lVar4 = *(longlong *)(lVar9 + 8);
        bVar1 = *(byte *)(lVar9 + 0x29);
        if (bVar1 == 0) {
          if (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x60) < uVar5) {
              uVar5 = *(uint *)(lVar3 + 0x60);
            }
            uVar10 = (-uVar5 & (uVar10 + uVar5) - 1) + *(int *)(lVar3 + 0x58);
            uVar6 = 0;
          }
          bVar1 = *(byte *)(param_1 + 0x65);
          uVar2 = (**(code **)(lVar4 + 0x38))(lVar4,&local_50);
          uVar5 = (uint)local_50;
          if (uVar2 < (uint)local_50) {
            uVar5 = uVar2;
          }
          iVar7 = *(int *)(lVar4 + 0x5c);
          uVar10 = -uVar5 & (uVar10 + uVar5) - 1;
          uVar5 = (uint)local_50;
          if (iVar7 == 0 && uVar8 < bVar1) {
            iVar7 = 1;
            if (local_54 == 0) {
              local_54 = 1;
              lVar4 = 0;
              goto LAB_1407e01df;
            }
            local_54 = 1;
          }
          else {
            iVar7 = iVar7 + (uint)(iVar7 == 0);
          }
          if ((uVar8 < bVar1) && ((local_50 & 0x400000000) == 0)) {
            uVar10 = iVar7 + uVar10;
            lVar4 = 0;
          }
          else {
            uVar10 = (-uVar2 & (iVar7 + uVar2) - 1) * *(int *)(lVar9 + 0x24) + uVar10;
            lVar4 = 0;
          }
        }
        else if ((lVar3 == lVar4) && (uVar6 + bVar1 <= (uint)(*(int *)(lVar4 + 0x58) << 3))) {
          *(uint *)(lVar9 + 0x20) = uVar10;
          lVar4 = lVar3;
          uVar6 = uVar6 + bVar1;
        }
        else {
          if (lVar3 != 0) {
            uVar6 = *(uint *)(lVar3 + 0x60);
            if (uVar5 <= *(uint *)(lVar3 + 0x60)) {
              uVar6 = uVar5;
            }
            uVar10 = (-uVar6 & (uVar10 + uVar6) - 1) + *(int *)(lVar3 + 0x58);
          }
          *(uint *)(lVar9 + 0x20) = uVar10;
          uVar6 = (uint)bVar1;
        }
LAB_1407e01df:
        lVar9 = *(longlong *)(lVar9 + 0x10);
        uVar8 = uVar8 + 1;
        lVar3 = lVar4;
      } while (lVar9 != 0);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x60) < uVar5) {
          uVar5 = *(uint *)(lVar4 + 0x60);
        }
        uVar10 = (-uVar5 & (uVar10 + uVar5) - 1) + *(int *)(lVar4 + 0x58);
      }
    }
  }
  *(uint *)(param_1 + 0x5c) = uVar10;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e02ea FUN_1407e02ea body=119 status=ok
// SIG undefined FUN_1407e02ea(void)

uint FUN_1407e02ea(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  uVar3 = 1;
  if ((*(char *)(param_1 + 100) != '\0') &&
     (uVar3 = (uint)((param_2[1] & 2) == 0) * 4 + 4, uVar2 <= uVar3)) {
    uVar3 = uVar2;
  }
  if (uVar3 < uVar2) {
    for (lVar1 = *(longlong *)(param_1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if (((*(byte *)(lVar1 + 0x28) & 1) == 0) || ((param_2[1] & 8) != 0)) {
        uVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x38))(*(longlong *)(lVar1 + 8),param_2);
        if (uVar3 < uVar2) {
          uVar3 = uVar2;
        }
        if (*param_2 <= uVar2) {
          return *param_2;
        }
      }
    }
  }
  return uVar3;
}



// FUNCTION 1407e036c FUN_1407e036c body=230 status=ok
// SIG undefined FUN_1407e036c(void)

bool FUN_1407e036c(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = DAT_14ca97170;
  uVar7 = (ulonglong)*param_1;
  iVar5 = (&DAT_14ca814b8)[uVar7 * 0xf];
  if (2 < iVar5) {
    if (uVar7 == 0x30) {
      return false;
    }
    if (*(longlong *)(&DAT_14ca814b0 + uVar7 * 0x3c) == DAT_14ca838f8) {
      return false;
    }
    if (((*(byte *)(&DAT_14ca814d8 + uVar7 * 0xf) & 0x80) == 0) ||
       ((*(byte *)((longlong)&DAT_14ca814d0 + uVar7 * 0x3c + 3) & 2) == 0)) {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
        uVar6 = 0;
      }
      else if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar3 != DVar4);
        iVar5 = (&DAT_14ca814b8)[uVar7 * 0xf];
      }
      else {
        uVar6 = 1;
      }
      if (iVar5 == 1) {
        return false;
      }
      if (0 < *(int *)(lVar2 + uVar6 * 4) && iVar5 < 4) {
        return false;
      }
      return *(int *)(param_1 + 8) == 3;
    }
  }
  return false;
}



// FUNCTION 1407e0460 FUN_1407e0460 body=75 status=ok
// SIG undefined FUN_1407e0460(void)

undefined8 * FUN_1407e0460(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3d6e90;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407e04ac FUN_1407e04ac body=308 status=ok
// SIG undefined FUN_1407e04ac(void)

void FUN_1407e04ac(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  void *param_9)

{
  undefined8 uVar1;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [256];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_148 = param_8[2];
  local_158 = *param_8;
  uStack_150 = param_8[1];
  local_170 = *param_7;
  uStack_168 = param_7[1];
  local_160 = param_7[2];
  local_178 = param_6[2];
  local_188 = *param_6;
  uStack_180 = param_6[1];
  local_190 = param_5;
  local_1a8 = param_2;
  uStack_1a0 = param_3;
  local_198 = param_4;
  memcpy(local_140,param_9,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ba0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1a8);
  local_198 = param_7[2];
  local_1a8 = *param_7;
  uStack_1a0 = param_7[1];
  local_1b0 = param_9;
  local_1b8 = &local_1a8;
  FUN_1407e05e2(param_1 + 0x237,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e05e2 FUN_1407e05e2 body=293 status=ok
// SIG undefined FUN_1407e05e2(void)

void FUN_1407e05e2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_58 = *(undefined8 *)(param_5 + 4);
        local_68 = *param_5;
        uStack_64 = param_5[1];
        uStack_60 = param_5[2];
        uStack_5c = param_5[3];
        local_78 = &local_68;
        local_70 = param_6;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_1407e06ea;
          goto LAB_1407e0619;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1407e06ea:
    FUN_14474d06a(param_1,0);
  }
LAB_1407e0619:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e0740 FUN_1407e0740 body=84 status=ok
// SIG undefined FUN_1407e0740(void)

float FUN_1407e0740(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = (float)(**(code **)(*param_1 + 0x2c0))();
  lVar1 = param_1[7];
  if ((int)(param_2 & 0xff) < *(int *)(lVar1 + 0x38)) {
    fVar2 = fVar2 * *(float *)(*(longlong *)(lVar1 + 0x30) + 4 + (param_2 & 0xff) * 0x14);
  }
  if (((*(byte *)(lVar1 + 0x44) & 2) != 0) && (*(byte *)((longlong)param_1 + 100) != 0)) {
    fVar2 = fVar2 * (float)*(byte *)((longlong)param_1 + 100) * *(float *)(lVar1 + 0x58);
  }
  return fVar2;
}



// FUNCTION 1407e0794 FUN_1407e0794 body=221 status=ok
// SIG undefined FUN_1407e0794(void)

void FUN_1407e0794(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_3 + 0x28);
  if (iVar2 < 8) {
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        lVar4 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar4 = param_3;
        }
        lVar4 = *(longlong *)(lVar4 + lVar3 * 8);
        if (lVar4 != 0) {
          if ((*(byte *)(lVar4 + 0xa0) & 1) == 0) goto LAB_1407e07df;
          iVar2 = *(int *)(param_3 + 0x28);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
LAB_1407e07df:
  local_20 = (undefined8 *)0x0;
  local_38 = 0;
  local_40 = 1;
  local_48 = 1;
  local_28 = param_2;
  FUN_1407e0882(&local_20,L"TriggerEventWhenTaskComplete");
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e0882 FUN_1407e0882 body=288 status=ok
// SIG undefined FUN_1407e0882(void)

void FUN_1407e0882(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_1407e09a4(0xb0);
  local_60 = param_7;
  local_68 = param_6;
  FUN_1407e0ae8(puVar3,param_2,param_3,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  *puVar3 = &PTR_FUN_149dffcf8;
  FUN_1407e0c6c(puVar3,param_4,1);
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = (longlong)puVar3;
  local_49 = 1;
  FUN_1447439e4(puVar3);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e09a4 FUN_1407e09a4 body=323 status=ok
// SIG undefined FUN_1407e09a4(void)

undefined8 * FUN_1407e09a4(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (0x100 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001407e0aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0xb0,0x10);
    return puVar3;
  }
  puVar3 = TlsGetValue(DAT_14c896140);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    TlsSetValue(DAT_14c896140,puVar3);
  }
  puVar5 = (undefined8 *)puVar3[1];
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 2) + -1;
    goto LAB_1407e09dd;
  }
  puVar5 = (undefined8 *)*puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar3[1] = 0;
LAB_1407e0aba:
      puVar5 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar3[1] = puVar5;
      iVar1 = 0xff;
      puVar6 = puVar5;
      do {
        puVar4 = puVar6 + 0x20;
        *puVar6 = puVar4;
        iVar1 = iVar1 + -1;
        puVar6 = puVar4;
      } while (iVar1 != 0);
      goto LAB_1407e0a00;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar3[1] = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1407e0aba;
  }
  else {
    puVar3[1] = puVar5;
    puVar4 = puVar3;
LAB_1407e0a00:
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0x100;
  iVar1 = 0xff;
LAB_1407e09dd:
  puVar3[1] = *puVar5;
  *(int *)(puVar3 + 2) = iVar1;
  return puVar5;
}



// FUNCTION 1407e0ae8 FUN_1407e0ae8 body=387 status=ok
// SIG undefined FUN_1407e0ae8(void)

undefined8 *
FUN_1407e0ae8(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,byte param_4,
             undefined4 param_5,int param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  param_1[1] = &DAT_100000002;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0x100000000;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0xe800000000000020;
  param_1[0x12] = 0;
  param_1[0x13] = 0x100000000;
  *(undefined2 *)(param_1 + 0x14) = 0;
  FUN_145747f22(param_1 + 8);
  *param_1 = &PTR_FUN_149dffd08;
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  param_1[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  param_1[9] = param_1;
  param_1[10] = param_1;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar1 == 0) {
    bVar2 = 1;
    if (param_4 != 6) {
      bVar2 = param_4;
    }
    param_4 = bVar2;
    uVar3 = 0;
  }
  else {
    if (param_4 == 6) {
      param_4 = (byte)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b);
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
  }
  param_1[0xf] = uVar3;
  param_1[0x10] =
       (ulonglong)(param_6 != 1) << 0x3e |
       (ulonglong)(param_4 & 7) << 0x3b | (param_2 & 0x1fffffffffffff) << 6 | 0x8000000000000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  param_1[0x15] = *param_3;
  return param_1;
}



// FUNCTION 1407e0c6c FUN_1407e0c6c body=1106 status=ok
// SIG undefined FUN_1407e0c6c(void)

void FUN_1407e0c6c(longlong param_1,longlong *param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_a1;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [16];
  byte *local_80;
  byte local_78;
  undefined1 local_69;
  byte *local_68;
  byte **local_60;
  code *local_58;
  byte **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)param_2[5];
  UNLOCK();
  plVar9 = (longlong *)param_2[4];
  if ((longlong *)param_2[4] == (longlong *)0x0) {
    plVar9 = param_2;
  }
  if ((longlong)(int)param_2[5] == 0) {
    iVar12 = 0;
  }
  else {
    plVar8 = plVar9 + (int)param_2[5];
    lVar10 = param_1 + 0x28;
    iVar12 = 0;
    do {
      lVar4 = *plVar9;
      if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0xa0) & 1) != 0)) {
LAB_1407e0d8f:
        iVar12 = iVar12 + 1;
      }
      else {
        pbVar1 = (byte *)(lVar4 + 0xa1);
        LOCK();
        bVar13 = *(char *)(lVar4 + 0xa1) == '\0';
        if (bVar13) {
          *(char *)(lVar4 + 0xa1) = '\x01';
        }
        UNLOCK();
        if (!bVar13) {
          local_a0 = lVar10;
          bVar5 = local_78;
          uVar11 = 0;
LAB_1407e0e88:
          do {
            local_78 = bVar5;
            local_98 = (longlong *)CONCAT44(local_98._4_4_,uVar11);
            bVar6 = *pbVar1;
            bVar5 = local_78;
            while (uVar11 = (uint)local_98, (bVar6 & 1) != 0) {
              local_78 = bVar6;
              if ((bVar6 & 2) == 0) {
                if ((uint)local_98 < 0x28) {
                  local_78 = bVar5;
                  SwitchToThread();
                  lVar10 = local_a0;
                  bVar5 = local_78;
                  uVar11 = uVar11 + 1;
                  goto LAB_1407e0e88;
                }
                local_78 = bVar6 | 2;
                LOCK();
                bVar2 = *pbVar1;
                if (bVar6 == bVar2) {
                  *pbVar1 = local_78;
                }
                UNLOCK();
                lVar10 = local_a0;
                if (bVar6 != bVar2) goto LAB_1407e0e88;
              }
              local_50 = (byte **)&local_69;
              local_58 = (code *)&DAT_1427437b8;
              local_60 = &local_80;
              local_68 = &LAB_1427437ba;
              local_b8 = 0x7ff0000000000000;
              local_80 = pbVar1;
              FUN_1456d3e9c(local_90,pbVar1,&local_68,&local_58);
              lVar10 = local_a0;
              bVar5 = local_78;
              bVar6 = *pbVar1;
            }
            LOCK();
            bVar2 = *pbVar1;
            if (bVar6 == bVar2) {
              *pbVar1 = bVar6 | 1;
            }
            UNLOCK();
            local_78 = bVar5;
          } while (bVar6 != bVar2);
        }
        bVar5 = *(byte *)(lVar4 + 0xa0);
        if ((bVar5 & 1) == 0) {
          iVar3 = *(int *)(lVar4 + 0x98);
          *(uint *)(lVar4 + 0x98) = iVar3 + 1U;
          if (*(uint *)(lVar4 + 0x9c) < iVar3 + 1U) {
            local_a1 = param_3;
            local_a0 = lVar10;
            local_98 = plVar8;
            FUN_144724bd8(lVar4 + 0x88,iVar3);
            plVar8 = local_98;
            lVar10 = local_a0;
            param_3 = local_a1;
          }
          lVar7 = lVar4 + 0x88;
          if (*(longlong *)(lVar4 + 0x90) != 0) {
            lVar7 = *(longlong *)(lVar4 + 0x90);
          }
          *(longlong *)(lVar7 + (longlong)iVar3 * 8) = param_1;
        }
        LOCK();
        bVar6 = *pbVar1;
        if (bVar6 == 1) {
          *pbVar1 = 0;
        }
        UNLOCK();
        if (bVar6 != 1) {
          bVar6 = *pbVar1;
          do {
            local_a0 = lVar10;
            if (bVar6 != 1) {
              local_50 = &local_68;
              local_58 = FUN_1400e502e;
              local_68 = pbVar1;
              FUN_14008cf08();
              lVar10 = local_a0;
              if ((bVar5 & 1) == 0) goto LAB_1407e0d51;
              goto LAB_1407e0d8f;
            }
            LOCK();
            bVar6 = *pbVar1;
            bVar13 = bVar6 == 1;
            if (bVar13) {
              *pbVar1 = 0;
              bVar6 = 1;
            }
            UNLOCK();
          } while (!bVar13);
        }
        if ((bVar5 & 1) != 0) goto LAB_1407e0d8f;
LAB_1407e0d51:
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        if (param_3 == '\0') {
          iVar3 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
            FUN_144724bd8(lVar10,iVar3);
            param_3 = '\0';
          }
          lVar7 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(param_1 + 0x30) == 0) {
            lVar7 = lVar10;
          }
          *(longlong *)(lVar7 + (longlong)iVar3 * 8) = lVar4;
        }
        else {
          pbVar1 = (byte *)(param_1 + 0x40);
          LOCK();
          bVar13 = *(char *)(param_1 + 0x40) == '\0';
          if (bVar13) {
            *(char *)(param_1 + 0x40) = '\x01';
          }
          UNLOCK();
          if (!bVar13) {
            FUN_1447d2058();
          }
          iVar3 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
            local_98 = plVar8;
            FUN_144724bd8(lVar10,iVar3);
            plVar8 = local_98;
          }
          lVar7 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(param_1 + 0x30) == 0) {
            lVar7 = lVar10;
          }
          *(longlong *)(lVar7 + (longlong)iVar3 * 8) = lVar4;
          LOCK();
          bVar13 = *(char *)(param_1 + 0x40) == '\x01';
          if (bVar13) {
            *(char *)(param_1 + 0x40) = '\0';
          }
          UNLOCK();
          if (!bVar13) {
            bVar5 = *pbVar1;
            do {
              if (bVar5 != 1) {
                local_50 = &local_68;
                local_58 = FUN_1400e502e;
                local_68 = pbVar1;
                FUN_14008cf08();
                break;
              }
              LOCK();
              bVar5 = *pbVar1;
              bVar13 = bVar5 == 1;
              if (bVar13) {
                *pbVar1 = 0;
                bVar5 = 1;
              }
              UNLOCK();
            } while (!bVar13);
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar8);
  }
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar12;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e10c0 FUN_1407e10c0 body=115 status=ok
// SIG undefined FUN_1407e10c0(void)

undefined8 * FUN_1407e10c0(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1407e1134(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1407e1134 FUN_1407e1134 body=247 status=ok
// SIG undefined FUN_1407e1134(void)

void FUN_1407e1134(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *lpTlsValue;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 < 0x101) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar2 = lpTlsValue[1];
    }
    else {
      lVar2 = *lpTlsValue;
      if (lVar2 != 0) {
        uVar1 = FUN_14493c560();
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                  *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        FUN_144a8fde6(&DAT_14c896180,uVar1);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar2 = 0;
    }
    *param_1 = lVar2;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001407e1224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  return;
}



// FUNCTION 1407e122c FUN_1407e122c body=607 status=ok
// SIG undefined FUN_1407e122c(void)

undefined8 FUN_1407e122c(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  ushort local_58;
  undefined6 uStack_56;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_1;
  if ((lVar4 != 0) && (lVar3 = param_1[1], lVar3 != 0)) {
    uVar5 = 0;
    if ((param_3 == '\x02') || ((int)param_2[1] < 1)) goto LAB_1407e13ce;
    if (param_3 == '\0') {
      lVar1 = *(longlong *)(lVar3 + 0x48);
      if (lVar1 == 0) {
LAB_1407e1296:
        lVar3 = FUN_1407e15d4(lVar4,lVar3,1);
        FUN_1407e1ade(lVar3);
      }
      else {
        cVar2 = FUN_14895dea2(lVar1);
        lVar3 = lVar1;
        if (cVar2 == '\0') {
          lVar4 = *param_1;
          lVar3 = param_1[1];
          goto LAB_1407e1296;
        }
      }
      lVar4 = *param_1;
      uVar5 = 0;
    }
    else {
      if (param_3 != '\x01') goto LAB_1407e1469;
      uVar5 = 1;
    }
    lVar4 = FUN_1407e15d4(lVar4,lVar3,uVar5);
    if (lVar4 != 0) {
      lVar3 = param_2[1];
      uVar5 = 1;
      if ((longlong)(int)lVar3 != 0) {
        lVar1 = *param_2;
        lVar8 = 0;
        lVar9 = lVar4;
        do {
          lVar6 = *(longlong *)(lVar1 + lVar8);
          if (lVar6 != 0) {
            if (lVar9 == 0) {
              lVar4 = FUN_140be36a8(*param_1,lVar4);
              if (lVar4 == 0) goto LAB_1407e1469;
              lVar6 = *(longlong *)(lVar1 + lVar8);
              lVar9 = lVar4;
            }
            *(longlong *)(lVar6 + 0x48) = lVar9;
            lVar6 = *(longlong *)(lVar1 + lVar8);
            if (-1 < (short)*(ushort *)(lVar6 + 0xc)) {
              local_58 = *(ushort *)(lVar6 + 0xc);
              FUN_1407e1732(lVar9,&local_58,0);
              lVar6 = *(longlong *)(lVar1 + lVar8);
            }
            if (*(longlong *)(lVar6 + 4) != 0) {
              FUN_1400021e4(lVar6 + 4,&local_58);
              FUN_1407e14ea(lVar9,&local_58);
              if (CONCAT62(uStack_56,local_58) != 0) {
                FUN_1400020a8();
              }
              lVar6 = *(longlong *)(lVar1 + lVar8);
            }
            if (*(longlong *)(lVar6 + 0x20) == 0) {
              if (-1 < *(short *)(lVar6 + 0x30)) goto LAB_1407e13f6;
              if (*(short *)(lVar6 + 0x30) == -2) {
                plVar7 = (longlong *)FUN_1407e15d4(*param_1,lVar9);
                lVar9 = *(longlong *)(lVar1 + lVar8);
                (**(code **)(*plVar7 + 8))(plVar7);
                FUN_1407e148c(plVar7 + 5,lVar9 + 0x38);
              }
            }
            else {
LAB_1407e13f6:
              plVar7 = (longlong *)FUN_1407e15d4(*param_1,lVar9);
              lVar9 = *(longlong *)(lVar1 + lVar8);
              if (-1 < (short)*(ushort *)(lVar9 + 0x30)) {
                local_58 = *(ushort *)(lVar9 + 0x30);
                FUN_1407e1732(plVar7,&local_58,0);
                lVar9 = *(longlong *)(lVar1 + lVar8);
              }
              if (*(longlong *)(lVar9 + 0x20) != 0) {
                (**(code **)(*plVar7 + 8))(plVar7);
                FUN_1401d7e14(plVar7 + 1,lVar9 + 0x10);
              }
            }
            lVar9 = 0;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar3 * 8 != lVar8);
        uVar5 = 1;
      }
      goto LAB_1407e13ce;
    }
  }
LAB_1407e1469:
  uVar5 = 0;
LAB_1407e13ce:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e148c FUN_1407e148c body=93 status=ok
// SIG undefined FUN_1407e148c(void)

undefined8 * FUN_1407e148c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14026ccd7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1407e1a06(param_1,iVar1);
      FUN_14066b305(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1407e14ea FUN_1407e14ea body=233 status=ok
// SIG undefined FUN_1407e14ea(void)

void FUN_1407e14ea(longlong *param_1,undefined8 *param_2,char param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 8))();
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_40 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1449b853c(local_c0,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_1401d7cf8(param_1 + 1,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (param_3 != '\0') {
    FUN_141016770(param_1,param_1 + 5);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e15d4 FUN_1407e15d4 body=349 status=ok
// SIG undefined FUN_1407e15d4(void)

undefined8 * FUN_1407e15d4(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x58) != param_1)) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (0x80 < *(uint *)(param_1 + 0xe4)) {
      *(undefined4 *)(param_1 + 0xe4) = 0x80;
      FUN_1446efbd8(param_1 + 200,0);
    }
    puVar2 = (undefined8 *)(param_1 + 0xe8);
    if (0xf < *(ulonglong *)(param_1 + 0x100)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)puVar2 = 0;
    if (*(longlong *)(param_2 + 0x48) != 0 && param_3 == '\0') {
      puVar2 = (undefined8 *)FUN_140be36a8(param_1);
      return puVar2;
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0xf;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_FUN_14b4257d8;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[9] = 0;
    puVar2[0xb] = param_1;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
      FUN_140be38f6((longlong *)(param_1 + 0xb8),iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 8) = puVar2;
    *(short *)((longlong)puVar2 + 0x3a) = *(short *)(param_2 + 0x3a) + 1;
    puVar2[10] = param_2;
    puVar2[8] = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 **)(param_2 + 0x48) = puVar2;
  }
  return puVar2;
}



// FUNCTION 1407e1732 FUN_1407e1732 body=486 status=ok
// SIG undefined FUN_1407e1732(void)

void FUN_1407e1732(longlong *param_1,ushort *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ushort uVar13;
  uint uVar14;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)*param_2 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  (**(code **)(*param_1 + 8))();
  plVar1 = param_1 + 5;
  if ((param_3 < 0) || ((int)param_1[6] <= param_3)) {
    FUN_1407e198a(plVar1,param_3 + 1);
  }
  uVar13 = 1;
  if (1 < (ushort)lVar7) {
    uVar13 = (ushort)lVar7;
  }
  lVar7 = *plVar1;
  lVar12 = (longlong)param_3 * 0x20;
  *(undefined4 *)(lVar7 + 0x18 + lVar12) = 0;
  if (*(int *)(lVar7 + 0x1c + lVar12) - 0x81U < 0xffffff9f) {
    *(undefined4 *)(lVar7 + lVar12 + 0x1c) = 0x80;
    FUN_1446efbd8(lVar7 + lVar12,0);
  }
  uVar14 = (uint)uVar13;
  local_3c = (uint)*param_2;
  iVar2 = *(int *)(*plVar1 + 0x18 + lVar12);
  if (iVar2 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar3 = iVar2 + -1;
    }
    iVar3 = iVar3 >> 5;
  }
  lVar12 = *plVar1 + lVar12;
  iVar11 = iVar2 + uVar14;
  iVar5 = iVar2 + uVar14 + -1;
  iVar8 = iVar2 + uVar14 + 0x1e;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  if (iVar8 >> 5 == iVar3) {
    *(int *)(lVar12 + 0x18) = iVar11;
  }
  else {
    if (*(int *)(lVar12 + 0x1c) < iVar11) {
      if (iVar11 + 0x1fU < 0xa0) {
        iVar11 = 0x80;
        iVar3 = iVar2;
      }
      else {
        uVar10 = iVar11 + 0x1fU >> 5;
        if (*(int *)(lVar12 + 0x1c) + 0x1fU < 0xa0) {
          uVar6 = 4;
          if (4 < uVar10) {
            uVar6 = uVar10;
          }
        }
        else {
          uVar6 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
        }
        uVar4 = FUN_144a3809e(uVar6 << 2,0);
        iVar3 = (int)(uVar4 >> 2);
        iVar11 = -0x20;
        if ((int)uVar10 <= iVar3) {
          iVar11 = iVar3 << 5;
        }
        iVar3 = *(int *)(lVar12 + 0x18);
      }
      *(int *)(lVar12 + 0x1c) = iVar11;
      FUN_1446efbd8(lVar12,iVar3);
      iVar11 = *(int *)(lVar12 + 0x18) + uVar14;
    }
    iVar3 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar3 = iVar11;
    }
    *(int *)(lVar12 + 0x18) = iVar11;
    if (iVar11 % 0x20 != 0) {
      lVar7 = *(longlong *)(lVar12 + 0x10);
      if (*(longlong *)(lVar12 + 0x10) == 0) {
        lVar7 = lVar12;
      }
      bVar9 = -(char)(iVar11 % 0x20);
      *(uint *)(lVar7 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)(lVar7 + (longlong)(iVar3 >> 5) * 4) << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
    }
  }
  lVar7 = *(longlong *)(lVar12 + 0x10);
  if (*(longlong *)(lVar12 + 0x10) == 0) {
    lVar7 = lVar12;
  }
  local_48 = uVar14;
  FUN_14493566c(lVar7,iVar2,&local_3c,0);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e191a FUN_1407e191a body=111 status=ok
// SIG undefined FUN_1407e191a(void)

void FUN_1407e191a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x108) = 0;
    *(undefined4 *)(lVar1 + 0xe0) = 0;
    if (0x80 < *(uint *)(lVar1 + 0xe4)) {
      *(undefined4 *)(lVar1 + 0xe4) = 0x80;
      FUN_1446efbd8(lVar1 + 200,0);
    }
    puVar2 = (undefined8 *)(lVar1 + 0xe8);
    if (0xf < *(ulonglong *)(lVar1 + 0x100)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined8 *)(lVar1 + 0xf8) = 0;
    *(undefined1 *)puVar2 = 0;
  }
  return;
}



// FUNCTION 1407e198a FUN_1407e198a body=123 status=ok
// SIG undefined FUN_1407e198a(void)

void FUN_1407e198a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14067abd0(param_1,iVar1);
    }
    FUN_14067aba8((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148966f10(param_1,param_2,iVar1 - param_2);
    FUN_1408f7252(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1407e1a06 FUN_1407e1a06 body=216 status=ok
// SIG undefined FUN_1407e1a06(void)

void FUN_1407e1a06(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407e1ade FUN_1407e1ade body=126 status=ok
// SIG undefined FUN_1407e1ade(void)

void FUN_1407e1ade(longlong param_1)

{
  undefined1 auStack_38 [38];
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1401d7cf8(param_1 + 8,L"_Common");
  FUN_14026ccd7(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1408f7a70(param_1 + 0x28,0);
  }
  local_12 = 0;
  FUN_1407e1732(param_1,&local_12,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e1b5e FUN_1407e1b5e body=190 status=ok
// SIG undefined FUN_1407e1b5e(void)

void FUN_1407e1b5e(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  FUN_1407e1d32(param_1 + 0x38);
  FUN_1407e1c1c(param_1 + 0x48,param_2 + 0x10);
  FUN_1407e1c78(param_1 + 0x58,param_2 + 0x20);
  iVar2 = *(int *)(param_1 + 0x70);
  lVar5 = (longlong)iVar2;
  FUN_1407e1cd4((longlong *)(param_1 + 0x68),param_2 + 0x30);
  if (iVar2 < *(int *)(param_1 + 0x70)) {
    uVar6 = lVar5 << 8 | 0xf0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x68);
      puVar4 = *(undefined8 **)(lVar3 + uVar6);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + uVar6) = 0;
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      lVar5 = lVar5 + 1;
      uVar6 = uVar6 + 0x100;
    } while (lVar5 < *(int *)(param_1 + 0x70));
  }
  FUN_1407e1d92(param_1 + 0x88,param_2 + 0x50);
  return;
}



// FUNCTION 1407e1c1c FUN_1407e1c1c body=91 status=ok
// SIG undefined FUN_1407e1c1c(void)

void FUN_1407e1c1c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140c9d5a2(param_1,iVar2);
  }
  FUN_1407e1df1((longlong)iVar2 * 0x70 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1407e1c78 FUN_1407e1c78 body=92 status=ok
// SIG undefined FUN_1407e1c78(void)

void FUN_1407e1c78(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1407e1e9e(param_1,iVar2);
    }
    FUN_14058b995((longlong)iVar2 * 0x68 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1407e1cd4 FUN_1407e1cd4 body=94 status=ok
// SIG undefined FUN_1407e1cd4(void)

void FUN_1407e1cd4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1474ba6a4(param_1,iVar2);
  }
  FUN_14785813a((longlong)iVar2 * 0x100 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1407e1d32 FUN_1407e1d32 body=95 status=ok
// SIG undefined FUN_1407e1d32(void)

void FUN_1407e1d32(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140e25fd0(param_1,iVar2);
  }
  FUN_14572255f((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1407e1d92 FUN_1407e1d92 body=95 status=ok
// SIG undefined FUN_1407e1d92(void)

void FUN_1407e1d92(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147c63fee(param_1,iVar2);
  }
  FUN_14785828d((longlong)iVar2 * 0xa0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1407e1df1 FUN_1407e1df1 body=173 status=ok
// SIG undefined FUN_1407e1df1(void)

void FUN_1407e1df1(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      *(undefined ***)(param_1 + lVar10) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(param_1 + 8 + lVar10) = *(undefined4 *)(param_2 + 8 + lVar10);
      *(undefined8 *)(param_1 + 0xc + lVar10) = *(undefined8 *)(param_2 + 0xc + lVar10);
      *(undefined4 *)(param_1 + 0x14 + lVar10) = *(undefined4 *)(param_2 + 0x14 + lVar10);
      *(byte *)(param_1 + 0x18 + lVar10) =
           *(byte *)(param_1 + 0x18 + lVar10) & 0xfe | *(byte *)(param_2 + 0x18 + lVar10) & 1;
      *(undefined1 *)(param_1 + 0x19 + lVar10) = *(undefined1 *)(param_2 + 0x19 + lVar10);
      *(undefined4 *)(param_1 + 0x20 + lVar10) = 6;
      *(longlong *)(param_1 + 0x28 + lVar10) = param_1 + lVar10;
      *(undefined ***)(param_1 + lVar10) = &PTR_FUN_14a1e3c70;
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x40 + lVar10);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x50 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x5c + lVar10);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x40 + lVar10);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x50 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(param_1 + 0x5c + lVar10);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      lVar10 = lVar10 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407e1e9e FUN_1407e1e9e body=369 status=ok
// SIG undefined FUN_1407e1e9e(void)

void FUN_1407e1e9e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407e1f25;
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
LAB_1407e1f25:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 1407e2010 FUN_1407e2010 body=57 status=ok
// SIG undefined FUN_1407e2010(void)

void FUN_1407e2010(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1407e2cf4();
  FUN_1407e204a(param_1,*(undefined8 *)(param_1 + 0xc40),param_2,param_3);
  return;
}



// FUNCTION 1407e204a FUN_1407e204a body=3011 status=ok
// SIG undefined FUN_1407e204a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e204a(longlong param_1,longlong param_2,float param_3,undefined1 (*param_4) [16])

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  double *pdVar18;
  double *pdVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined4 uVar45;
  double dVar46;
  double dVar48;
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auStack_308 [40];
  float local_2e0;
  float local_2dc;
  double local_2d8 [2];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2e0 = 0.0;
  if (*(longlong *)(param_1 + 0xc98) != DAT_14c872be0) {
    local_2e0 = param_3;
  }
  *(longlong *)(param_1 + 0xc98) = DAT_14c872be0;
  auVar30 = _DAT_149934d80;
  pdVar18 = (double *)(param_1 + 0x240);
  pdVar19 = local_2d8;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *pdVar19 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar19 = pdVar19 + 1;
  }
  fVar44 = *(float *)param_4[3];
  if ((longlong)*(int *)(param_1 + 0xc38) != 0) {
    plVar13 = *(longlong **)(param_1 + 0xc30);
    lVar16 = (longlong)*(int *)(param_1 + 0xc38) << 7;
    do {
      if (*plVar13 == param_2) {
        if (plVar13 != (longlong *)0x0) {
          if ((char)plVar13[0xe] == '\x01') {
            fVar44 = *(float *)((longlong)plVar13 + 0x74);
          }
          auVar31 = *(undefined1 (*) [16])(param_1 + 0x280);
          dVar4 = auVar31._0_8_;
          dVar2 = auVar31._8_8_;
          auVar23 = *(undefined1 (*) [16])(param_1 + 0x290);
          dVar5 = auVar23._0_8_;
          auVar37 = *(undefined1 (*) [16])(plVar13 + 10);
          dVar28 = auVar37._0_8_;
          dVar35 = auVar37._8_8_;
          auVar24 = *(undefined1 (*) [16])(plVar13 + 0xc);
          dVar51 = auVar24._0_8_;
          auVar31 = minpd(auVar37,auVar31);
          auVar39 = minpd(auVar24,auVar23);
          auVar37._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
          auVar37._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
          iVar15 = movmskpd((int)lVar16,auVar37);
          auVar31._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
          auVar31._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
          uVar17 = movmskpd((int)param_2,auVar31);
          local_2dc = fVar44;
          if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
            dVar42 = (double)plVar13[2];
            dVar48 = (double)plVar13[3];
            dVar6 = (double)plVar13[4];
            dVar7 = (double)plVar13[5];
            dVar8 = *(double *)(param_1 + 0x240);
            dVar9 = *(double *)(param_1 + 0x248);
            dVar10 = *(double *)(param_1 + 0x250);
            dVar11 = *(double *)(param_1 + 600);
            dVar34 = *(double *)(param_1 + 600);
            dVar36 = *(double *)(param_1 + 600);
            dVar49 = *(double *)(param_1 + 0x240);
            dVar1 = *(double *)(param_1 + 0x240);
            dVar46 = *(double *)(param_1 + 0x248);
            dVar40 = *(double *)(param_1 + 0x248);
            dVar38 = *(double *)(param_1 + 0x250);
            dVar41 = *(double *)(param_1 + 0x250);
            local_2d8[0] = dVar48 * dVar38 * -1.0 +
                           dVar6 * dVar46 + dVar7 * dVar49 * 1.0 + dVar42 * dVar34;
            local_2d8[1] = dVar42 * dVar41 * 1.0 +
                           dVar7 * dVar40 + dVar6 * dVar1 * -1.0 + dVar48 * dVar36;
            local_2c8._0_8_ =
                 dVar7 * dVar38 * 1.0 + ((dVar49 * dVar48 * 1.0 + dVar6 * dVar34) - dVar42 * dVar46)
            ;
            local_2c8._8_8_ =
                 dVar6 * dVar41 * -1.0 +
                 ((dVar1 * dVar42 * -1.0 + dVar7 * dVar36) - dVar48 * dVar40);
            dVar40 = (double)plVar13[6] * dVar4;
            dVar38 = (double)plVar13[7] * dVar2;
            dVar41 = (double)plVar13[8] * dVar5;
            dVar42 = (double)plVar13[9] * auVar23._8_8_;
            dVar46 = dVar38 * dVar8 - dVar9 * dVar40;
            dVar48 = dVar41 * dVar9 - dVar10 * dVar38;
            dVar49 = dVar40 * dVar10 - dVar8 * dVar41;
            dVar1 = dVar42 * dVar11 - dVar11 * dVar42;
            dVar48 = dVar48 + dVar48;
            dVar49 = dVar49 + dVar49;
            dVar46 = dVar46 + dVar46;
            dVar1 = dVar1 + dVar1;
            local_f8 = (dVar46 * dVar9 - dVar10 * dVar49) + dVar34 * dVar48 + dVar40 +
                       *(double *)(param_1 + 0x260);
            dStack_f0 = (dVar48 * dVar10 - dVar46 * dVar8) + dVar36 * dVar49 + dVar38 +
                        *(double *)(param_1 + 0x268);
            local_e8 = (dVar49 * dVar8 - dVar9 * dVar48) + dVar34 * dVar46 + dVar41 +
                       *(double *)(param_1 + 0x270);
            dStack_2a0 = (dVar1 * dVar11 - dVar1 * dVar11) + dVar36 * dVar1 + dVar42 +
                         *(double *)(param_1 + 0x278);
          }
          else {
            dVar1 = *(double *)(param_1 + 0x240);
            dVar46 = *(double *)(param_1 + 0x248);
            dVar40 = *(double *)(param_1 + 0x250);
            dVar38 = dVar46 + dVar46;
            dVar41 = dVar40 + dVar40;
            dVar34 = dVar1 * (dVar1 + dVar1);
            local_188 = (1.0 - (dVar34 + dVar46 * dVar38)) * dVar5;
            dVar49 = *(double *)(param_1 + 0x240) * dVar41;
            dVar36 = *(double *)(param_1 + 600);
            dVar42 = dVar41 * dVar36;
            dVar48 = (dVar1 + dVar1) * *(double *)(param_1 + 600);
            dVar36 = dVar38 * dVar36;
            local_198 = (dVar36 + dVar49) * dVar5;
            dStack_1b0 = (DAT_149934d80._8_8_ - (dVar40 * dVar41 + dVar34)) * dVar2;
            dVar34 = (dVar38 * dVar1 + dVar42) * dVar4;
            local_1a8 = (dVar41 * dVar46 + dVar48) * dVar2;
            local_1b8 = (dVar38 * dVar1 - dVar42) * dVar2;
            dStack_190 = (dVar41 * dVar46 - dVar48) * dVar5;
            local_1c8 = (dVar49 - dVar36) * dVar4;
            local_1d8._8_4_ = SUB84(dVar34,0);
            local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar41 + dVar46 * dVar38)) * dVar4;
            local_1d8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            uStack_180 = 0;
            local_178 = *(undefined8 *)(param_1 + 0x260);
            uStack_170 = *(undefined8 *)(param_1 + 0x268);
            local_168 = *(undefined8 *)(param_1 + 0x270);
            uStack_160 = 0x3ff0000000000000;
            dVar49 = (double)plVar13[2];
            dVar1 = (double)plVar13[3];
            dVar46 = (double)plVar13[4];
            dVar40 = dVar1 + dVar1;
            dVar38 = dVar46 + dVar46;
            dVar34 = dVar49 * (dVar49 + dVar49);
            local_208 = (1.0 - (dVar34 + dVar1 * dVar40)) * dVar51;
            dVar36 = (double)plVar13[5];
            dVar41 = dVar38 * dVar36;
            dVar42 = (dVar49 + dVar49) * (double)plVar13[5];
            dVar36 = dVar40 * dVar36;
            local_218 = (dVar36 + (double)plVar13[2] * dVar38) * dVar51;
            dStack_210 = (dVar38 * dVar1 - dVar42) * dVar51;
            local_258 = ((double)DAT_149934d80 - (dVar46 * dVar38 + dVar1 * dVar40)) * dVar28;
            dVar34 = (DAT_149934d80._8_8_ - (dVar46 * dVar38 + dVar34)) * dVar35;
            dStack_250 = (dVar40 * dVar49 + dVar41) * dVar28;
            local_228 = (dVar38 * dVar1 + dVar42) * dVar35;
            local_248 = ((double)plVar13[2] * dVar38 - dVar36) * dVar28;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar34,0);
            local_238._0_8_ = (dVar40 * dVar49 - dVar41) * dVar35;
            local_238._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            uStack_220 = 0;
            uStack_200 = 0;
            local_1f8 = plVar13[6];
            lStack_1f0 = plVar13[7];
            local_1e8 = plVar13[8];
            uStack_1e0 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_158);
            FUN_144a1c686(&local_158,0x3e45798ee0000000);
            auVar39._8_8_ = -(ulonglong)(0.0 <= dVar2 * dVar35);
            auVar39._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar28);
            auVar31 = blendvpd(_DAT_149936790,auVar30,auVar39);
            uVar20 = -(ulonglong)(0.0 <= dVar5 * dVar51);
            dVar36 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
            dVar34 = auVar31._0_8_;
            local_148 = local_148 * dVar34;
            dStack_150 = dStack_150 * dVar34;
            local_158 = local_158 * dVar34;
            dVar34 = auVar31._8_8_;
            local_128 = local_128 * dVar34;
            local_138._8_8_ = (double)local_138._8_8_ * dVar34;
            local_138._0_8_ = dVar34 * (double)local_138._0_8_;
            local_108 = local_108 * dVar36;
            dStack_110 = dStack_110 * dVar36;
            local_118 = dVar36 * local_118;
            FUN_14481fd10(&local_278,&local_158);
            dVar36 = local_268 * local_268 + local_278 * local_278;
            dVar34 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
            auVar33._0_8_ = dVar36 + dVar34;
            auVar33._8_8_ = dVar36 + dVar34;
            auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
            auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
            auVar31 = sqrtpd(auVar33,auVar33);
            auVar30 = divpd(auVar30,auVar31);
            auVar47._0_8_ = auVar30._0_8_ * local_268;
            auVar47._8_8_ = auVar30._8_8_ * dStack_260;
            local_2d8[0] = (double)((ulonglong)(local_278 * auVar30._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
            local_2d8[1] = (double)((ulonglong)(dStack_270 * auVar30._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
            local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar27);
            dStack_2a0 = 0.0;
          }
          dStack_290 = dVar35 * dVar2;
          local_298 = dVar28 * dVar4;
          dStack_280 = auVar24._8_8_ * auVar23._8_8_;
          local_288 = dVar51 * dVar5;
          fVar44 = local_2dc;
          local_2b8 = local_f8;
          dStack_2b0 = dStack_f0;
          local_2a8 = local_e8;
        }
        break;
      }
      plVar13 = plVar13 + 0x10;
      lVar16 = lVar16 + -0x80;
    } while (lVar16 != 0);
  }
  plVar13 = *(longlong **)(param_1 + 0xa8);
  if (plVar13 != (longlong *)0x0) {
    uVar12 = FUN_1407e2c0e();
    plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar12);
    if (plVar13 != (longlong *)0x0) {
      uVar12 = FUN_1407e2c0e();
      plVar14 = (longlong *)FUN_144718840(plVar13,uVar12);
      if (plVar14 != (longlong *)0x0 && plVar13 != plVar14) {
        (**(code **)(*plVar14 + 0x10))(plVar14,*plVar14,local_2d8);
      }
    }
  }
  dVar5 = local_2a8;
  dVar28 = dStack_2b0;
  dVar4 = local_2b8;
  local_158 = local_2d8[0];
  dStack_150 = local_2d8[1];
  local_148 = (double)local_2c8._0_8_;
  uStack_140 = local_2c8._8_8_;
  FUN_1448052ee(&local_158,&local_258);
  fVar22 = *(float *)(param_1 + 0xc90);
  if (0.0 < fVar22) {
    fVar21 = (*(float *)(param_1 + 0xc50) - fVar22) / *(float *)(param_1 + 0xc50);
    *(float *)(param_1 + 0xc90) = fVar22 - local_2e0;
    if (fVar21 < 0.5) {
      fVar22 = powf(fVar21 + fVar21,*(float *)(param_1 + 0xc54));
      fVar22 = (fVar22 + 0.0) * 0.5;
    }
    else {
      fVar22 = powf(1.0 - (fVar21 + fVar21 + -1.0),*(float *)(param_1 + 0xc54));
      fVar22 = (1.0 - fVar22) * 0.5 + 0.5;
    }
    dVar35 = (double)(fVar22 + 0.0);
    dVar5 = (dVar5 - *(double *)(param_1 + 0xc70)) * dVar35 + *(double *)(param_1 + 0xc70);
    dVar28 = (dVar28 - *(double *)(param_1 + 0xc68)) * dVar35 + *(double *)(param_1 + 0xc68);
    dVar4 = (dVar4 - *(double *)(param_1 + 0xc60)) * dVar35 + *(double *)(param_1 + 0xc60);
    local_248 = local_248 - *(double *)(param_1 + 0xc88);
    dStack_250 = dStack_250 - *(double *)(param_1 + 0xc80);
    local_258 = local_258 - *(double *)(param_1 + 0xc78);
    dVar51 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar29._8_8_ = dStack_250;
    auVar29._0_8_ = local_258;
    auVar30 = divpd(auVar29,_DAT_1499387d0);
    auVar23._0_8_ = local_248 / 360.0;
    auVar23._8_8_ = 0;
    auVar31 = roundpd(auVar30,auVar30,3);
    auVar30 = roundpd(auVar23,auVar23,3);
    auVar43._0_8_ = local_248 - auVar30._0_8_ * dVar51;
    auVar43._8_8_ = 0.0 - auVar30._8_8_ * dVar2;
    local_258 = local_258 - auVar31._0_8_ * dVar51;
    dStack_250 = dStack_250 - auVar31._8_8_ * dVar2;
    auVar50._0_8_ = local_258 + dVar51;
    auVar50._8_8_ = dStack_250 + dVar2;
    auVar52._0_8_ = dVar51 + auVar43._0_8_;
    auVar52._8_8_ = dVar2 + auVar43._8_8_;
    auVar24._8_8_ = -(ulonglong)(0.0 <= dStack_250);
    auVar24._0_8_ = -(ulonglong)(0.0 <= local_258);
    auVar30._8_4_ = SUB84(dStack_250,0);
    auVar30._0_8_ = local_258;
    auVar30._12_4_ = (int)((ulonglong)dStack_250 >> 0x20);
    auVar30 = blendvpd(auVar50,auVar30,auVar24);
    auVar25._8_8_ = -(ulonglong)(0.0 <= auVar43._8_8_);
    auVar25._0_8_ = -(ulonglong)(0.0 <= auVar43._0_8_);
    auVar31 = blendvpd(auVar52,auVar43,auVar25);
    auVar32._0_8_ = auVar30._0_8_ + -360.0;
    auVar32._8_8_ = auVar30._8_8_ + -360.0;
    auVar26._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
    auVar26._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
    auVar30 = blendvpd(auVar30,auVar32,auVar26);
    dVar51 = auVar31._0_8_;
    local_248 = (double)(~-(ulonglong)(180.0 < dVar51) & (ulonglong)dVar51 |
                        (ulonglong)(dVar51 + -360.0) & -(ulonglong)(180.0 < dVar51)) * dVar35 +
                *(double *)(param_1 + 0xc88);
    dStack_250 = auVar30._8_8_ * dVar35 + *(double *)(param_1 + 0xc80);
    local_258 = auVar30._0_8_ * dVar35 + *(double *)(param_1 + 0xc78);
    fVar44 = (fVar44 - *(float *)(param_1 + 0xc58)) * (fVar22 + 0.0) + *(float *)(param_1 + 0xc58);
  }
  uVar45 = (undefined4)((ulonglong)dVar28 >> 0x20);
  plVar13 = *(longlong **)(param_1 + 0xa8);
  if (plVar13 != (longlong *)0x0) {
    uVar12 = FUN_1407e2c0e();
    plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar12);
    if (plVar13 != (longlong *)0x0) {
      uVar12 = FUN_1407e2c0e();
      plVar14 = (longlong *)FUN_144718840(plVar13,uVar12);
      if (plVar14 != (longlong *)0x0 && plVar13 != plVar14) {
        FUN_144a7484c(&local_258,local_1d8);
        local_158 = (double)local_1d8._0_8_;
        dStack_150 = (double)local_1d8._8_8_;
        local_148 = local_1c8;
        uStack_140 = uStack_1c0;
        local_138._8_4_ = SUB84(dVar28,0);
        local_138._0_8_ = dVar4;
        local_138._12_4_ = uVar45;
        uStack_120 = 0;
        local_118 = DAT_14c846510;
        dStack_110 = DAT_14c846518;
        local_108 = DAT_14c846520;
        uStack_100 = 0;
        local_128 = dVar5;
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
  }
  auVar3._8_4_ = SUB84(dVar28,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = uVar45;
  *param_4 = auVar3;
  *(double *)param_4[1] = dVar5;
  *(double *)(param_4[1] + 8) = local_258;
  *(double *)param_4[2] = dStack_250;
  *(double *)(param_4[2] + 8) = local_248;
  *(float *)param_4[3] = fVar44;
  if ((local_d0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e2c0e FUN_1407e2c0e body=228 status=ok
// SIG undefined FUN_1407e2c0e(void)

longlong FUN_1407e2c0e(void)

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
  if (DAT_14cbac908 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c2eb79;
    local_40 = FUN_1465e2e98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMainMenuCameraViewModifier",&DAT_14cbac908,&DAT_148c2eb78)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbac908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e2cf4 FUN_1407e2cf4 body=4011 status=ok
// SIG undefined FUN_1407e2cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e2cf4(longlong *param_1,undefined8 param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  int iVar13;
  double *pdVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  undefined *puVar23;
  double *pdVar24;
  ulonglong uVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auStack_308 [32];
  undefined1 local_2e8;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  longlong lStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  dVar28 = DAT_14cb0d2b0;
  plVar19 = param_1;
  if ((DAT_14cb0d2b0 == 0.0) || (*(longlong *)((longlong)DAT_14cb0d2b0 + 0xfe0) == 0))
  goto LAB_1407e2d95;
  dVar28 = (double)param_1[0x16];
  if (dVar28 == 0.0) {
    lVar22 = FUN_1448abda6();
    dVar28 = 0.0;
    if (lVar22 == 0) goto LAB_1407e2d95;
    dVar28 = (double)param_1[0x16];
    if (dVar28 == 0.0) {
      plVar19 = param_1;
      dVar28 = (double)FUN_1448abda6();
    }
  }
  if (*(char *)((longlong)dVar28 + 0x152) == '\x02') goto LAB_1407e2d95;
  plVar20 = *(longlong **)((longlong)DAT_14cb0d2b0 + 0xfe0);
  plVar19 = plVar20;
  dVar28 = (double)(**(code **)(*plVar20 + 0x118))(plVar20,local_158,0);
  if ((double)local_158._0_8_ == 0.0) {
LAB_1407e3ba3:
    bVar10 = true;
  }
  else {
    lVar22 = param_1[0x16];
    if (lVar22 == 0) {
      lVar22 = FUN_1448abda6(param_1);
    }
    dVar28 = (double)(**(code **)(*plVar20 + 0x158))(plVar20,lVar22);
    plVar19 = plVar20;
    if (SUB81(dVar28,0) == '\0') goto LAB_1407e3ba3;
    bVar10 = false;
  }
  plVar20 = (longlong *)local_158._8_8_;
  if ((longlong *)local_158._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar2 = (longlong *)(local_158._8_8_ + 8);
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      plVar19 = (longlong *)local_158._8_8_;
      dVar28 = (double)(*(code *)**(undefined8 **)local_158._8_8_)();
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        dVar28 = (double)(**(code **)(*plVar20 + 0x10))();
        plVar19 = plVar20;
      }
    }
  }
  if (!bVar10) {
    plVar19 = param_1;
    dVar28 = (double)(**(code **)(*param_1 + 0x5f0))();
  }
LAB_1407e2d95:
  if (((*(byte *)((longlong)param_1 + 0x2da) & 2) != 0) &&
     (plVar20 = (longlong *)param_1[0x15], plVar20 != (longlong *)0x0)) {
    dVar28 = (double)FUN_144a7cbb2();
    plVar19 = (longlong *)plVar20[2];
    piVar1 = (int *)((longlong)dVar28 + 0x38);
    if (*piVar1 <= (int)plVar19[7]) {
      dVar28 = (double)((longlong)dVar28 + 0x30);
      plVar19 = (longlong *)plVar19[6];
      if (((((double)plVar19[*piVar1] == dVar28) &&
           (plVar19 = (longlong *)plVar20[0x78], plVar19 != (longlong *)0x0)) &&
          ((*(byte *)(plVar19 + 0x84) & 2) != 0)) &&
         (dVar28 = (double)(**(code **)(*plVar19 + 0x6c8))(), SUB81(dVar28,0) != '\0')) {
        dVar29 = (double)(**(code **)(*plVar20 + 0x710))(plVar20,&local_258);
        uVar15 = SUB84(plVar20,0);
        dVar28 = *(double *)*(undefined1 (*) [16])(param_1 + 0x48);
        dVar46 = (double)param_1[0x49];
        local_158 = *(undefined1 (*) [16])(param_1 + 0x48);
        dVar4 = *(double *)*(undefined1 (*) [16])(param_1 + 0x4a);
        dVar50 = (double)param_1[0x4b];
        local_148 = *(undefined1 (*) [16])(param_1 + 0x4a);
        pdVar14 = (double *)param_1[0x45];
        if (pdVar14 == (double *)0x0) {
          uVar15 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar29 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar29;
          dVar29 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar29;
          dVar29 = DAT_14c846500;
          pdVar14[4] = DAT_14c8464f8;
          pdVar14[5] = dVar29;
          dVar29 = DAT_14c846508;
          pdVar14[6] = DAT_14c846508;
          param_1[0x45] = (longlong)pdVar14;
        }
        auVar48._8_8_ = -(ulonglong)(dVar46 != pdVar14[1]);
        auVar48._0_8_ = -(ulonglong)(dVar28 != *pdVar14);
        auVar36._8_8_ = -(ulonglong)(dVar50 != pdVar14[3]);
        auVar36._0_8_ = -(ulonglong)(dVar4 != pdVar14[2]);
        uVar16 = movmskpd(SUB84(dVar29,0),auVar48);
        uVar17 = movmskpd(uVar15,auVar36);
        uVar15 = 0;
        dVar28 = (double)(ulonglong)uVar16;
        if ((uVar17 & 0x3fffffff) != 0 || uVar16 != 0) {
          puVar18 = local_158;
          pdVar14[2] = (double)local_148._0_8_;
          pdVar14[3] = (double)local_148._8_8_;
          *pdVar14 = (double)local_158._0_8_;
          pdVar14[1] = (double)local_158._8_8_;
          FUN_1448052ee(puVar18,local_1d8);
          uVar15 = SUB84(puVar18,0);
          pdVar14[6] = local_1c8;
          pdVar14[4] = (double)local_1d8._0_8_;
          pdVar14[5] = (double)local_1d8._8_8_;
          dVar28 = local_1c8;
        }
        dVar46 = (double)DAT_1499387d0;
        dVar4 = DAT_1499387d0._8_8_;
        auVar41._8_8_ = dStack_250 - pdVar14[5];
        auVar41._0_8_ = local_258 - pdVar14[4];
        auVar48 = divpd(auVar41,_DAT_1499387d0);
        auVar30._0_8_ = (local_248 - pdVar14[6]) / 360.0;
        auVar30._8_8_ = 0;
        auVar36 = roundpd(auVar48,auVar48,3);
        auVar48 = roundpd(auVar30,auVar30,3);
        auVar51._0_8_ = (local_248 - pdVar14[6]) - auVar48._0_8_ * dVar46;
        auVar51._8_8_ = 0.0 - auVar48._8_8_ * dVar4;
        dVar50 = (local_258 - pdVar14[4]) - auVar36._0_8_ * dVar46;
        dVar29 = (dStack_250 - pdVar14[5]) - auVar36._8_8_ * dVar4;
        auVar47._0_8_ = dVar50 + dVar46;
        auVar47._8_8_ = dVar29 + dVar4;
        auVar44._0_8_ = dVar46 + auVar51._0_8_;
        auVar44._8_8_ = dVar4 + auVar51._8_8_;
        auVar31._8_8_ = -(ulonglong)(0.0 <= dVar29);
        auVar31._0_8_ = -(ulonglong)(0.0 <= dVar50);
        auVar55._8_8_ = dVar29;
        auVar55._0_8_ = dVar50;
        auVar36 = blendvpd(auVar47,auVar55,auVar31);
        auVar32._8_8_ = -(ulonglong)(0.0 <= auVar51._8_8_);
        auVar32._0_8_ = -(ulonglong)(0.0 <= auVar51._0_8_);
        auVar48 = blendvpd(auVar44,auVar51,auVar32);
        auVar52._0_8_ = auVar36._0_8_ + -360.0;
        auVar52._8_8_ = auVar36._8_8_ + -360.0;
        auVar33._8_8_ = -(ulonglong)(180.0 < auVar36._8_8_);
        auVar33._0_8_ = -(ulonglong)(180.0 < auVar36._0_8_);
        auVar36 = blendvpd(auVar36,auVar52,auVar33);
        auVar34._8_8_ = -(ulonglong)(180.0 < auVar48._8_8_);
        auVar34._0_8_ = -(ulonglong)(180.0 < auVar48._0_8_);
        auVar3._8_8_ = auVar48._8_8_ + -360.0;
        auVar3._0_8_ = auVar48._0_8_ + -360.0;
        auVar48 = blendvpd(auVar48,auVar3,auVar34);
        auVar42._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar36._8_8_));
        auVar42._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar36._0_8_));
        uVar16 = movmskpd(SUB84(dVar28,0),auVar42);
        dVar28 = (double)(ulonglong)uVar16;
        auVar35._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar48._8_8_));
        auVar35._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar48._0_8_));
        iVar13 = movmskpd(uVar15,auVar35);
        uVar16 = iVar13 << 2 | uVar16;
        plVar19 = (longlong *)(ulonglong)uVar16;
        if (uVar16 != 0) {
          local_288 = local_248;
          local_298 = local_258;
          dStack_290 = dStack_250;
          local_2e8 = 0;
          plVar19 = param_1;
          dVar28 = (double)FUN_14020f670(param_1,&local_298,0,0);
        }
      }
    }
  }
  auVar48 = _DAT_149934d80;
  uVar15 = SUB84(plVar19,0);
  if ((*(byte *)((longlong)param_1 + 0x2da) & 0x10) == 0) {
    dVar4 = (double)param_1[0x4d];
    dVar46 = (double)param_1[0x4e];
    *param_3 = (double)param_1[0x4c];
    param_3[1] = dVar4;
    param_3[2] = dVar46;
    dVar46 = *(double *)*(undefined1 (*) [16])(param_1 + 0x48);
    dVar4 = (double)param_1[0x49];
    local_158 = *(undefined1 (*) [16])(param_1 + 0x48);
    dVar50 = *(double *)*(undefined1 (*) [16])(param_1 + 0x4a);
    dVar29 = (double)param_1[0x4b];
    local_148 = *(undefined1 (*) [16])(param_1 + 0x4a);
    pdVar14 = (double *)param_1[0x45];
    if (pdVar14 == (double *)0x0) {
      uVar15 = 0x40;
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar28 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar28;
      dVar28 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar28;
      dVar28 = DAT_14c846500;
      pdVar14[4] = DAT_14c8464f8;
      pdVar14[5] = dVar28;
      dVar28 = DAT_14c846508;
      pdVar14[6] = DAT_14c846508;
      param_1[0x45] = (longlong)pdVar14;
    }
    auVar53._8_8_ = -(ulonglong)(dVar4 != pdVar14[1]);
    auVar53._0_8_ = -(ulonglong)(dVar46 != *pdVar14);
    auVar54._8_8_ = -(ulonglong)(dVar29 != pdVar14[3]);
    auVar54._0_8_ = -(ulonglong)(dVar50 != pdVar14[2]);
    iVar13 = movmskpd(SUB84(dVar28,0),auVar53);
    uVar16 = movmskpd(uVar15,auVar54);
    if ((uVar16 & 0x3fffffff) != 0 || iVar13 != 0) {
      pdVar14[2] = (double)local_148._0_8_;
      pdVar14[3] = (double)local_148._8_8_;
      *pdVar14 = (double)local_158._0_8_;
      pdVar14[1] = (double)local_158._8_8_;
      FUN_1448052ee(local_158,local_1d8);
      pdVar14[6] = local_1c8;
      pdVar14[4] = (double)local_1d8._0_8_;
      pdVar14[5] = (double)local_1d8._8_8_;
    }
    dVar28 = pdVar14[4];
    dVar46 = pdVar14[5];
    param_3[5] = pdVar14[6];
  }
  else {
    dVar40 = (double)param_1[0x5c];
    dVar59 = (double)param_1[0x5d];
    dVar7 = (double)param_1[0x5e];
    dVar8 = (double)param_1[0x5f];
    local_2b8 = (double)param_1[0x60];
    dStack_2b0 = (double)param_1[0x61];
    local_2a8 = (double)param_1[0x62];
    lStack_2a0 = param_1[99];
    auVar36 = *(undefined1 (*) [16])(param_1 + 100);
    dVar46 = auVar36._0_8_;
    dVar29 = auVar36._8_8_;
    dVar4 = SUB168(*(undefined1 (*) [16])(param_1 + 0x66),0);
    dVar43 = (double)param_1[0x48];
    dVar58 = (double)param_1[0x49];
    dVar61 = (double)param_1[0x4a];
    dVar9 = (double)param_1[0x4b];
    local_2d8 = (double)param_1[0x4c];
    dStack_2d0 = (double)param_1[0x4d];
    auVar55 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar50 = auVar55._0_8_;
    dVar6 = auVar55._8_8_;
    local_2c8 = *(undefined1 (*) [16])(param_1 + 0x52);
    auVar36 = minpd(auVar36,auVar55);
    auVar55 = minpd(*(undefined1 (*) [16])(param_1 + 0x66),local_2c8);
    auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    iVar13 = movmskpd(SUB84(dVar28,0),auVar37);
    auVar56._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
    auVar56._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
    uVar16 = movmskpd(uVar15,auVar56);
    uVar11 = local_2c8._0_8_;
    if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar28 = dVar59 * dVar61 * -1.0 + dVar7 * dVar58 + dVar8 * dVar43 * 1.0 + dVar40 * dVar9;
      dVar46 = dVar40 * dVar61 * 1.0 + dVar8 * dVar58 + dVar7 * dVar43 * -1.0 + dVar59 * dVar9;
      local_148._0_8_ =
           dVar8 * dVar61 * 1.0 + ((dVar43 * dVar59 * 1.0 + dVar7 * dVar9) - dVar58 * dVar40);
      local_148._8_8_ =
           dVar7 * dVar61 * -1.0 + ((dVar43 * dVar40 * -1.0 + dVar8 * dVar9) - dVar58 * dVar59);
      dVar50 = local_2b8 * dVar50;
      dVar6 = dStack_2b0 * dVar6;
      dVar4 = local_2a8 * (double)local_2c8._0_8_;
      dVar29 = dVar6 * dVar43 - dVar58 * dVar50;
      dVar40 = dVar4 * dVar58 - dVar61 * dVar6;
      dVar59 = dVar50 * dVar61 - dVar43 * dVar4;
      dVar40 = dVar40 + dVar40;
      dVar59 = dVar59 + dVar59;
      dVar29 = dVar29 + dVar29;
      local_2d8 = local_2d8 + (dVar29 * dVar58 - dVar61 * dVar59) + dVar9 * dVar40 + dVar50;
      dStack_2d0 = dStack_2d0 + (dVar40 * dVar61 - dVar29 * dVar43) + dVar9 * dVar59 + dVar6;
      local_e8 = (double)param_1[0x4e] +
                 (dVar59 * dVar43 - dVar58 * dVar40) + dVar9 * dVar29 + dVar4;
    }
    else {
      dVar5 = dVar58 + dVar58;
      dVar57 = dVar61 + dVar61;
      dVar27 = dVar43 * (dVar43 + dVar43);
      dVar60 = (dVar43 + dVar43) * dVar9;
      local_1b8 = (dVar5 * dVar43 - dVar57 * dVar9) * dVar6;
      dStack_190 = (dVar57 * dVar58 - dVar60) * (double)local_2c8._0_8_;
      dStack_1b0 = (1.0 - (dVar61 * dVar57 + dVar27)) * dVar6;
      dVar28 = (dVar5 * dVar43 + dVar57 * dVar9) * dVar50;
      local_1a8 = (dVar57 * dVar58 + dVar60) * dVar6;
      local_1c8 = (dVar43 * dVar57 - dVar5 * dVar9) * dVar50;
      local_198 = (dVar5 * dVar9 + dVar43 * dVar57) * (double)local_2c8._0_8_;
      local_1d8._8_4_ = SUB84(dVar28,0);
      local_1d8._0_8_ = (1.0 - (dVar61 * dVar57 + dVar58 * dVar5)) * dVar50;
      local_1d8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      uStack_1c0 = 0;
      local_188 = (1.0 - (dVar27 + dVar58 * dVar5)) * (double)local_2c8._0_8_;
      uStack_1a0 = 0;
      uStack_180 = 0;
      uStack_160 = 0x3ff0000000000000;
      dVar43 = dVar59 + dVar59;
      dVar58 = dVar7 + dVar7;
      dVar28 = dVar40 * (dVar40 + dVar40);
      dVar61 = (dVar40 + dVar40) * dVar8;
      local_238 = (dVar43 * dVar40 - dVar58 * dVar8) * dVar29;
      dStack_210 = (dVar58 * dVar59 - dVar61) * dVar4;
      local_258 = ((double)DAT_149934d80 - (dVar7 * dVar58 + dVar59 * dVar43)) * dVar46;
      dStack_230 = (DAT_149934d80._8_8_ - (dVar7 * dVar58 + dVar28)) * dVar29;
      dStack_250 = (dVar43 * dVar40 + dVar58 * dVar8) * dVar46;
      local_228 = (dVar58 * dVar59 + dVar61) * dVar29;
      local_218 = (dVar43 * dVar8 + dVar40 * dVar58) * dVar4;
      local_248 = (dVar40 * dVar58 - dVar43 * dVar8) * dVar46;
      uStack_240 = 0;
      uStack_220 = 0;
      local_208 = (1.0 - (dVar28 + dVar59 * dVar43)) * dVar4;
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = local_2b8;
      dStack_1f0 = dStack_2b0;
      local_1e8 = local_2a8;
      local_178 = local_2d8;
      dStack_170 = dStack_2d0;
      local_168 = (double)param_1[0x4e];
      FUN_1447fea8d(local_158);
      FUN_144a1c686(local_158,0x3e45798ee0000000);
      auVar38._8_8_ = -(ulonglong)(0.0 <= dVar29 * dVar6);
      auVar38._0_8_ = -(ulonglong)(0.0 <= dVar46 * dVar50);
      auVar36 = blendvpd(_DAT_149936790,auVar48,auVar38);
      uVar25 = -(ulonglong)(0.0 <= dVar4 * (double)uVar11);
      dVar28 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
      dVar46 = auVar36._0_8_;
      local_158._8_8_ = (double)local_158._8_8_ * dVar46;
      local_158._0_8_ = (double)local_158._0_8_ * dVar46;
      local_148._0_8_ = (double)local_148._0_8_ * dVar46;
      dVar46 = auVar36._8_8_;
      local_128 = local_128 * dVar46;
      local_130 = local_130 * dVar46;
      local_138 = dVar46 * local_138;
      local_108 = local_108 * dVar28;
      local_110 = local_110 * dVar28;
      local_118 = dVar28 * local_118;
      FUN_14481fd10(&local_278,local_158);
      dVar28 = local_268 * local_268 + local_278 * local_278;
      dVar46 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar45._0_8_ = dVar28 + dVar46;
      auVar45._8_8_ = dVar28 + dVar46;
      auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
      auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
      auVar36 = sqrtpd(auVar45,auVar45);
      auVar48 = divpd(auVar48,auVar36);
      auVar49._0_8_ = auVar48._0_8_ * local_268;
      auVar49._8_8_ = auVar48._8_8_ * dStack_260;
      dVar28 = (double)((ulonglong)(local_278 * auVar48._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
      dVar46 = (double)((ulonglong)(dStack_270 * auVar48._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
      local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar39);
      local_2d8 = local_f8;
      dStack_2d0 = dStack_f0;
    }
    *param_3 = local_2d8;
    param_3[1] = dStack_2d0;
    param_3[2] = local_e8;
    local_158._8_4_ = SUB84(dVar46,0);
    local_158._0_8_ = dVar28;
    local_158._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
    FUN_1448052ee(local_158,local_1d8);
    param_3[5] = local_1c8;
    dVar28 = (double)local_1d8._0_8_;
    dVar46 = (double)local_1d8._8_8_;
  }
  param_3[3] = dVar28;
  param_3[4] = dVar46;
  fVar26 = *(float *)(param_1 + 0x55);
  if ((*(byte *)((longlong)param_1 + 0x2da) & 0x10) != 0) {
    fVar26 = fVar26 + *(float *)((longlong)param_1 + 0x344);
  }
  *(float *)(param_3 + 6) = fVar26;
  *(undefined4 *)((longlong)param_3 + 0x94) = *(undefined4 *)((longlong)param_1 + 0x2cc);
  uVar16 = (*(uint *)(param_3 + 0x14) & 0xfffffffb) + (*(byte *)((longlong)param_1 + 0x2d1) & 1) * 4
  ;
  *(uint *)(param_3 + 0x14) = uVar16;
  uVar16 = (uVar16 & 0xffffffef) + (*(byte *)((longlong)param_1 + 0x2d1) & 4) * 4;
  *(uint *)(param_3 + 0x14) = uVar16;
  *(undefined1 *)((longlong)param_3 + 0xa4) = *(undefined1 *)((longlong)param_1 + 0x2db);
  *(undefined4 *)(param_3 + 0xf) = *(undefined4 *)((longlong)param_1 + 0x2b4);
  *(int *)(param_3 + 0x11) = (int)param_1[0x58];
  *(undefined4 *)((longlong)param_3 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0x2c4);
  *(char *)((longlong)param_3 + 0x7c) = (char)param_1[0x57];
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)((longlong)param_1 + 700);
  *(char *)((longlong)param_3 + 0x84) = (char)param_1[0x59];
  *(undefined1 *)((longlong)param_3 + 0x85) = *(undefined1 *)((longlong)param_1 + 0x2c9);
  pdVar14 = (double *)((longlong)param_1 + 0x2ac);
  if ((*(byte *)((longlong)param_1 + 0x2da) & 4) == 0) {
    pdVar14 = param_3 + 6;
  }
  *(undefined4 *)(param_3 + 0xe) = *(undefined4 *)pdVar14;
  if ((*(byte *)((longlong)param_1 + 0x2da) & 8) == 0) {
    uVar15 = 0x3f800000;
  }
  else {
    uVar15 = (undefined4)param_1[0x56];
  }
  *(undefined4 *)((longlong)param_3 + 0x74) = uVar15;
  uVar17 = 8;
  if ((*(byte *)((longlong)param_1 + 0x2da) & 4) == 0) {
    uVar17 = (uint)(*(byte *)((longlong)param_1 + 0x2da) & 8);
  }
  *(uint *)(param_3 + 0x14) = uVar16 & 0xfffffff7 | uVar17;
  FUN_1407e3ca0(param_3,uVar17,(char)param_1[0x5b],*(undefined1 *)((longlong)param_1 + 0x2d9));
  if (((char)param_1[0x57] == '\x01') && (param_1[0x15] != 0)) {
    lVar22 = *(longlong *)(param_1[0x15] + 0x1c8);
    if (lVar22 == 0) {
      pdVar14 = (double *)&DAT_14c8464e0;
      dVar28 = DAT_14c8464f0;
    }
    else {
      pdVar14 = (double *)(lVar22 + 0x260);
      dVar28 = *(double *)(lVar22 + 0x270);
    }
    dVar46 = pdVar14[1];
    param_3[0x142] = *pdVar14 - *param_3;
    param_3[0x143] = dVar46 - param_3[1];
    param_3[0x144] = dVar28 - param_3[2];
  }
  if ((*(byte *)((longlong)param_1 + 0x2d1) & 2) != 0) {
    *(uint *)(param_3 + 0x13) = (uint)*(byte *)(param_1 + 0x5a);
    *(undefined1 *)((longlong)param_3 + 0x9c) = 1;
  }
  fVar26 = *(float *)(param_1 + 0x68);
  *(float *)(param_3 + 0x15) = fVar26;
  if (0.0 < fVar26) {
    FUN_14477b16e(param_3 + 0x16,param_1 + 0x6e);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caff428) && (FUN_144b3d300(&DAT_14caff428), DAT_14caff428 == -1)) {
    FUN_145f8e32a(&DAT_14caff3a0);
    atexit((_func_5014 *)&LAB_1436691a2);
    _Init_thread_footer(&DAT_14caff428);
  }
  if (DAT_14caff38c != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
    if (DAT_14caff3e0 != DAT_14caff40c) {
      uVar16 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      puVar23 = &DAT_14caff410;
      if (DAT_14caff418 != (undefined *)0x0) {
        puVar23 = DAT_14caff418;
      }
      iVar13 = *(int *)(puVar23 + (ulonglong)(DAT_14caff420 - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
      if (iVar13 != -1) {
LAB_1407e39c7:
        lVar22 = DAT_14caff3d8 + (longlong)iVar13 * 0x90;
        if (*(longlong **)(DAT_14caff3d8 + (longlong)iVar13 * 0x90) != param_1)
        goto code_r0x0001407e39e0;
        if (((double *)(lVar22 + 0x10) != (double *)0x0 && lVar22 != 0) &&
           (*(longlong *)(lVar22 + 0x70) == DAT_14c872be0)) {
          pdVar14 = (double *)(lVar22 + 0x10);
          pdVar24 = (double *)local_158;
          for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
            *pdVar24 = *pdVar14;
            pdVar14 = pdVar14 + 1;
            pdVar24 = pdVar24 + 1;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
          pdVar14 = (double *)local_158;
          pdVar24 = param_3 + 0x132;
          for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
            *pdVar24 = *pdVar14;
            pdVar14 = pdVar14 + 1;
            pdVar24 = pdVar24 + 1;
          }
          uVar12 = 1;
          goto LAB_1407e38cd;
        }
      }
    }
LAB_1407e38b2:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
  }
  if (*(char *)(param_3 + 0x13e) == '\x01') {
    uVar12 = 0;
LAB_1407e38cd:
    *(undefined1 *)(param_3 + 0x13e) = uVar12;
  }
  if ((local_d0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001407e39e0:
  iVar13 = *(int *)(lVar22 + 0x80);
  if (iVar13 == -1) goto LAB_1407e38b2;
  goto LAB_1407e39c7;
}



// FUNCTION 1407e3ca0 FUN_1407e3ca0 body=280 status=ok
// SIG undefined FUN_1407e3ca0(void)

void FUN_1407e3ca0(longlong param_1,float param_2,char param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (1e-08 < ABS(param_2)) {
    fVar1 = *(float *)(param_1 + 0xa08);
    fVar3 = 1.0;
    fVar2 = -fVar1 / (fVar1 + 1.0);
    if (param_2 <= fVar2) {
      param_2 = fVar2;
    }
    fVar2 = param_2 + 1.0;
    *(float *)(param_1 + 0xa08) = fVar1 * fVar2 + param_2;
    fVar1 = tanf(*(float *)(param_1 + 0x30) * 0.5 * 0.017453292);
    fVar1 = atanf(fVar1 * fVar2);
    *(float *)(param_1 + 0x30) = fVar1 * 57.295776 + fVar1 * 57.295776;
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) * fVar2;
    fVar1 = fVar2;
    if (param_3 == '\0') {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0xa00) = *(float *)(param_1 + 0xa00) * fVar1;
    if (param_4 != '\0') {
      fVar3 = 1.0 / fVar2;
    }
    *(float *)(param_1 + 0xa04) = fVar3 * *(float *)(param_1 + 0xa04);
  }
  return;
}



// FUNCTION 1407e3db8 FUN_1407e3db8 body=3130 status=ok
// SIG undefined FUN_1407e3db8(void)

void FUN_1407e3db8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  float fVar22;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8;
  longlong local_3b0;
  char local_399;
  longlong local_398;
  int local_38c;
  int *local_388;
  longlong *local_380;
  longlong *local_378;
  int *local_370;
  longlong local_368;
  ulonglong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  ulonglong auStack_328 [5];
  undefined4 local_300;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [64];
  undefined1 *local_e8;
  int local_e0;
  longlong local_d8 [3];
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_3b8 = (longlong *)(*(longlong *)(param_1 + 8) + 0x24);
  lVar6 = FUN_1407e49f4(param_3,param_4,param_5,*(longlong *)(param_1 + 8) + 0x38);
  if (*(int *)(lVar6 + 0x68) < 1) goto LAB_1407e4149;
  lVar15 = *(longlong *)(param_1 + 8);
  uVar10 = *(ulonglong *)(lVar15 + 0x50);
  local_358 = uVar10;
  uVar7 = FUN_14477b664(*(undefined8 *)(lVar15 + 0x58));
  uStack_350 = FUN_14477b664(uVar7);
  lVar15 = *(longlong *)(lVar15 + 0x60);
  if (uStack_350 == 0) {
    uVar7 = FUN_14016979c();
    uStack_350 = FUN_14477b664(uVar7);
  }
  if (lVar15 == 0) {
    uStack_348 = 0;
    if ((((uVar10 != 0) && (uStack_350 != 0)) &&
        (plVar11 = *(longlong **)(uStack_350 + 0xb8), plVar11 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar2 != '\0')) {
      uVar7 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar15 = FUN_144aff482(uVar7);
      if (lVar15 != 0) goto LAB_1407e46f5;
    }
  }
  else {
LAB_1407e46f5:
    lVar14 = FUN_14479d2ce(lVar6 + 0x108);
    if (lVar14 == 0) {
      cVar2 = FUN_144729dda(*(longlong *)(lVar6 + 0x60) + 0xc);
      if (cVar2 == '\0') {
        lVar14 = 0;
      }
      else {
        lVar14 = FUN_14479d2ce(*(longlong *)(lVar6 + 0x60) + 0xc);
        lVar14 = *(longlong *)(lVar14 + 0xa8);
      }
    }
    local_358 = local_358 & 0xffffffffffffff00;
    local_330 = (ulonglong)local_330._4_4_ << 0x20;
    FUN_1456bb102(&local_358,lVar14);
    auStack_328[0] = auStack_328[0] & 0xffffffffffffff00;
    local_300 = 0;
    plVar11 = local_d8;
    FUN_144750e81(plVar11,lVar15,&local_358);
    FUN_144a5ac3a(auStack_328);
    FUN_144a5ac3a(&local_358);
    cVar2 = FUN_144a7b75a(uStack_b8 & 0xff);
    if (cVar2 == '\0') {
      cVar2 = FUN_144a7b75a(uStack_b8 & 0xff);
      if (cVar2 != '\0') {
        FUN_1489524b6(local_d8);
        lVar15 = param_1 + 0x78;
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          lVar15 = *(longlong *)(param_1 + 0xf8);
        }
        iVar21 = *(int *)(param_1 + 0x100);
        if ((longlong)iVar21 != 0) {
          lVar14 = 0;
          do {
            *(float *)(lVar15 + 0x10 + lVar14) =
                 *(float *)(lVar15 + 0x10 + lVar14) * (float)local_358;
            *(float *)(lVar15 + 0x14 + lVar14) =
                 *(float *)(lVar15 + 0x14 + lVar14) * local_358._4_4_;
            *(float *)(lVar15 + 0x18 + lVar14) =
                 *(float *)(lVar15 + 0x18 + lVar14) * (float)uStack_350;
            *(float *)(lVar15 + 0x1c + lVar14) =
                 *(float *)(lVar15 + 0x1c + lVar14) * uStack_350._4_4_;
            lVar14 = lVar14 + 0x20;
          } while ((longlong)iVar21 * 0x20 != lVar14);
        }
      }
    }
    else {
      fVar22 = (float)FUN_144a7b41a(local_d8,0x3f800000);
      lVar15 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar15 = *(longlong *)(param_1 + 0x68);
      }
      iVar21 = *(int *)(param_1 + 0x70);
      if ((longlong)iVar21 != 0) {
        lVar14 = 0;
        do {
          *(float *)(lVar15 + 0x10 + lVar14) = *(float *)(lVar15 + 0x10 + lVar14) * fVar22;
          lVar14 = lVar14 + 0x14;
        } while ((longlong)iVar21 * 0x14 != lVar14);
      }
      lVar15 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        lVar15 = *(longlong *)(param_1 + 0xf8);
      }
      iVar21 = *(int *)(param_1 + 0x100);
      if ((longlong)iVar21 != 0) {
        lVar14 = 0;
        do {
          *(float *)(lVar15 + 0x10 + lVar14) = *(float *)(lVar15 + 0x10 + lVar14) * fVar22;
          *(float *)(lVar15 + 0x14 + lVar14) = *(float *)(lVar15 + 0x14 + lVar14) * fVar22;
          *(float *)(lVar15 + 0x18 + lVar14) = *(float *)(lVar15 + 0x18 + lVar14) * fVar22;
          lVar14 = lVar14 + 0x20;
        } while ((longlong)iVar21 * 0x20 != lVar14);
      }
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_b8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < (ushort)local_c0) {
        plVar11 = (longlong *)CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]);
      }
      (*pcVar1)(plVar11);
    }
    if (0x18 < (ushort)local_c0) {
      FUN_1400020a8(CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]));
    }
  }
  *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) | 2;
  lVar15 = *(longlong *)(lVar6 + 0x148);
  iVar21 = *(int *)(lVar6 + 0x150);
  lVar14 = (longlong)iVar21;
  if (lVar14 != 0) {
    lVar19 = *(longlong *)(param_1 + 8);
    uVar10 = 0;
    do {
      if (*(longlong *)(lVar15 + uVar10) == lVar19) {
        if ((int)(~uVar10 >> 3) != 0) goto LAB_1407e3eef;
        break;
      }
      uVar10 = uVar10 + 8;
    } while (lVar14 * 8 - uVar10 != 0);
  }
  *(uint *)(lVar6 + 0x150) = iVar21 + 1U;
  if (*(uint *)(lVar6 + 0x154) < iVar21 + 1U) {
    FUN_1407e5df2((longlong *)(lVar6 + 0x148),iVar21);
    lVar15 = *(longlong *)(lVar6 + 0x148);
  }
  lVar19 = *(longlong *)(param_1 + 8);
  *(longlong *)(lVar15 + lVar14 * 8) = lVar19;
LAB_1407e3eef:
  uVar5 = *(uint *)(lVar19 + 0x20);
  if (((uVar5 & 1) != 0) && ((longlong)*(int *)(lVar6 + 0x68) != 0)) {
    piVar17 = *(int **)(lVar6 + 0x60);
    piVar18 = piVar17 + (longlong)*(int *)(lVar6 + 0x68) * 0xe;
    plVar11 = (longlong *)(param_1 + 0x18);
    local_398 = lVar6 + 0x88;
    local_368 = param_1 + 0x78;
    local_388 = piVar18;
    local_380 = plVar11;
    do {
      if ((((piVar17[4] != 0) && (uVar5 = piVar17[3], -1 < (int)uVar5)) &&
          (((int)uVar5 < DAT_14c9647dc &&
           (((plVar12 = (longlong *)
                        ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0 && ((int)plVar12[2] == piVar17[4])) &&
            ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))))) &&
         (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)) {
        local_399 = '\x01';
        if (*piVar17 != -1) {
          local_399 = *(char *)(param_1 + 0x10);
        }
        plVar16 = (longlong *)(piVar17 + 6);
        if (piVar17[8] < 1) {
          plVar16 = (longlong *)0x0;
        }
        plVar20 = *(longlong **)(param_1 + 0x68);
        if (*(longlong **)(param_1 + 0x68) == (longlong *)0x0) {
          plVar20 = plVar11;
        }
        if ((longlong)*(int *)(param_1 + 0x70) != 0) {
          local_378 = (longlong *)((longlong)plVar20 + (longlong)*(int *)(param_1 + 0x70) * 0x14);
          local_370 = piVar17;
          do {
            lVar15 = plVar20[2];
            iVar3 = (**(code **)(*plVar12 + 0x7b0))(plVar12);
            iVar21 = iVar3;
            if ((local_399 != '\0') &&
               (iVar4 = (**(code **)(*plVar12 + 0xa08))(plVar12), iVar3 < iVar4)) {
              iVar21 = iVar4;
            }
            local_158 = (undefined8 *)0x0;
            local_150 = 0x2000000000;
            local_140 = 0;
            local_138 = 0x2000000000;
            uStack_130 = 0xffffffff;
            local_e8 = (undefined1 *)0x0;
            local_e0 = 0;
            local_38c = iVar3;
            if (0 < iVar21) {
              iVar3 = 0;
              do {
                if (plVar16 == (longlong *)0x0) {
LAB_1407e443d:
                  lVar14 = (**(code **)(*plVar12 + 0x610))(plVar12,iVar3);
                  if ((lVar14 != 0) &&
                     (uVar10 = (**(code **)(*plVar12 + 0x678))(plVar12,iVar3,lVar14,0),
                     local_360 = uVar10, uVar10 != 0)) {
                    if ((int)local_150 != uStack_130._4_4_) {
                      uVar5 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
                      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
                      puVar8 = local_e8;
                      if (local_e8 == (undefined1 *)0x0) {
                        puVar8 = local_128;
                      }
                      iVar4 = *(int *)(puVar8 + (ulonglong)(local_e0 - 1U & (uVar5 >> 0x10 ^ uVar5))
                                                * 4);
                      if (iVar4 != -1) {
                        puVar9 = local_158;
                        if (local_158 == (undefined8 *)0x0) {
                          puVar9 = &local_358;
                        }
                        do {
                          if (puVar9[(longlong)iVar4 * 2] == uVar10) goto LAB_1407e455c;
                          iVar4 = *(int *)(puVar9 + (longlong)iVar4 * 2 + 1);
                        } while (iVar4 != -1);
                      }
                    }
                    plVar11 = plVar20;
                    if (local_398 != 0) {
                      uVar13 = uVar10;
                      if (*(ulonglong *)(uVar10 + 0x110) != 0) {
                        uVar13 = *(ulonglong *)(uVar10 + 0x110);
                      }
                      plVar11 = (longlong *)FUN_1405b2aea(local_398,uVar13,plVar20);
                    }
                    if (*plVar11 != 0) {
                      local_d8[0]._0_1_ = 0;
                      local_90 = 0;
                      uStack_88 = 0;
                      local_a0 = 0;
                      uStack_98 = 0;
                      local_b0 = 0;
                      uStack_a8 = 0;
                      local_c0 = 0;
                      uStack_b8 = 0;
                      local_d8[1] = 0;
                      local_d8[2] = 0;
                      local_3b8 = local_d8;
                      FUN_140042bb4(uVar10,plVar11,(int)lVar15);
                    }
                    FUN_1407e55b2(&local_358,local_d8,&local_360);
                  }
                }
                else if ((longlong)(int)plVar16[1] != 0) {
                  uVar10 = 0;
                  do {
                    if (*(int *)(*plVar16 + uVar10) == iVar3 % local_38c) {
                      if ((int)(~uVar10 >> 2) != 0) goto LAB_1407e443d;
                      break;
                    }
                    uVar10 = uVar10 + 4;
                  } while ((longlong)(int)plVar16[1] * 4 != uVar10);
                }
LAB_1407e455c:
                iVar3 = iVar3 + 1;
              } while (iVar3 != iVar21);
              local_e0 = 0;
              if (local_e8 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
            }
            FUN_1407e5394(&local_358);
            plVar20 = (longlong *)((longlong)plVar20 + 0x14);
            piVar17 = local_370;
            piVar18 = local_388;
            plVar11 = local_380;
          } while (plVar20 != local_378);
        }
        lVar15 = *(longlong *)(param_1 + 0xf8);
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          lVar15 = local_368;
        }
        if ((longlong)*(int *)(param_1 + 0x100) != 0) {
          lVar14 = (longlong)*(int *)(param_1 + 0x100) * 0x20 + lVar15;
          do {
            local_3b0 = local_398;
            local_3b8 = plVar16;
            FUN_145748142(plVar12,lVar15,lVar15 + 0x10,local_399);
            lVar15 = lVar15 + 0x20;
            piVar18 = local_388;
          } while (lVar15 != lVar14);
        }
      }
      piVar17 = piVar17 + 0xe;
    } while (piVar17 != piVar18);
    uVar5 = *(uint *)(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (((((uVar5 & 2) != 0) && (*(int *)(lVar6 + 0xe4) != 0)) &&
      (uVar5 = *(uint *)(lVar6 + 0xe0), -1 < (int)uVar5)) &&
     ((((int)uVar5 < DAT_14c9647dc &&
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0)) &&
      (((int)plVar11[2] == *(int *)(lVar6 + 0xe4) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar15 = *plVar11, lVar15 != 0)))))))) {
    lVar14 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x68);
    }
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      lVar19 = (longlong)*(int *)(param_1 + 0x70) * 0x14;
      do {
        local_358 = local_358 & 0xffffffffffffff00;
        auStack_328[3] = 0;
        auStack_328[4] = 0;
        auStack_328[1] = 0;
        auStack_328[2] = 0;
        local_330 = 0;
        auStack_328[0] = 0;
        local_340 = 0;
        uStack_338 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        local_3b8 = &local_358;
        FUN_140042bb4(lVar15,lVar14,*(undefined4 *)(lVar14 + 0x10),0);
        lVar14 = lVar14 + 0x14;
        lVar19 = lVar19 + -0x14;
      } while (lVar19 != 0);
    }
    lVar14 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar14 = *(longlong *)(param_1 + 0xf8);
    }
    if ((longlong)*(int *)(param_1 + 0x100) != 0) {
      lVar19 = (longlong)*(int *)(param_1 + 0x100) << 5;
      do {
        local_358 = *(ulonglong *)(lVar14 + 0x10);
        uStack_350 = *(longlong *)(lVar14 + 0x18);
        FUN_14016d7a8(lVar15,lVar14,&local_358);
        lVar14 = lVar14 + 0x20;
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != 0);
    }
  }
  if (((((((*(byte *)(*(longlong *)(param_1 + 8) + 0x20) & 4) != 0) && (*(int *)(lVar6 + 0xf4) != 0)
         ) && (uVar5 = *(uint *)(lVar6 + 0xf0), -1 < (int)uVar5)) &&
       (((int)uVar5 < DAT_14c9647dc &&
        (plVar11 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
        plVar11 != (longlong *)0x0)))) && ((int)plVar11[2] == *(int *)(lVar6 + 0xf4))) &&
     (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar15 = *plVar11, lVar15 != 0)))) {
    lVar14 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x68);
    }
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      lVar19 = (longlong)*(int *)(param_1 + 0x70) * 0x14;
      do {
        local_358 = local_358 & 0xffffffffffffff00;
        auStack_328[3] = 0;
        auStack_328[4] = 0;
        auStack_328[1] = 0;
        auStack_328[2] = 0;
        local_330 = 0;
        auStack_328[0] = 0;
        local_340 = 0;
        uStack_338 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        local_3b8 = &local_358;
        FUN_140042bb4(lVar15,lVar14,*(undefined4 *)(lVar14 + 0x10),0);
        lVar14 = lVar14 + 0x14;
        lVar19 = lVar19 + -0x14;
      } while (lVar19 != 0);
    }
    lVar14 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar14 = *(longlong *)(param_1 + 0xf8);
    }
    if ((longlong)*(int *)(param_1 + 0x100) != 0) {
      lVar19 = (longlong)*(int *)(param_1 + 0x100) << 5;
      do {
        local_358 = *(ulonglong *)(lVar14 + 0x10);
        uStack_350 = *(longlong *)(lVar14 + 0x18);
        FUN_14016d7a8(lVar15,lVar14,&local_358);
        lVar14 = lVar14 + 0x20;
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != 0);
    }
  }
  if (((((*(byte *)(*(longlong *)(param_1 + 8) + 0x20) & 8) != 0) && (*(int *)(lVar6 + 0x104) != 0))
      && (uVar5 = *(uint *)(lVar6 + 0x100), -1 < (int)uVar5)) &&
     ((((int)uVar5 < DAT_14c9647dc &&
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0)) &&
      (((int)plVar11[2] == *(int *)(lVar6 + 0x104) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar6 = *plVar11, lVar6 != 0)))))))) {
    lVar15 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x68);
    }
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      lVar14 = (longlong)*(int *)(param_1 + 0x70) * 0x14;
      do {
        local_358 = local_358 & 0xffffffffffffff00;
        auStack_328[3] = 0;
        auStack_328[4] = 0;
        auStack_328[1] = 0;
        auStack_328[2] = 0;
        local_330 = 0;
        auStack_328[0] = 0;
        local_340 = 0;
        uStack_338 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        local_3b8 = &local_358;
        FUN_140042bb4(lVar6,lVar15,*(undefined4 *)(lVar15 + 0x10),0);
        lVar15 = lVar15 + 0x14;
        lVar14 = lVar14 + -0x14;
      } while (lVar14 != 0);
    }
    lVar15 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar15 = *(longlong *)(param_1 + 0xf8);
    }
    if ((longlong)*(int *)(param_1 + 0x100) != 0) {
      lVar14 = (longlong)*(int *)(param_1 + 0x100) << 5;
      do {
        local_358 = *(ulonglong *)(lVar15 + 0x10);
        uStack_350 = *(longlong *)(lVar15 + 0x18);
        FUN_14016d7a8(lVar6,lVar15,&local_358);
        lVar15 = lVar15 + 0x20;
        lVar14 = lVar14 + -0x20;
      } while (lVar14 != 0);
    }
  }
LAB_1407e4149:
  if ((local_80 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e49f4 FUN_1407e49f4 body=1171 status=ok
// SIG undefined FUN_1407e49f4(void)

undefined8 *
FUN_1407e49f4(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
             undefined4 *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_6c;
  undefined8 *local_68;
  code *local_60;
  undefined8 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = *param_5;
  iStack_94 = param_5[1];
  uStack_90 = param_5[2];
  uStack_8c = param_5[3];
  FUN_1407e4e88();
  uVar9 = DAT_14cb8a448;
  local_80 = DAT_14cb8a448;
  uStack_7c = local_98;
  iStack_78 = iStack_94;
  uStack_74 = uStack_90;
  uStack_70 = uStack_8c;
  local_6c = 0;
  plVar6 = *(longlong **)(param_2 + 0x10);
  uVar3 = FUN_1447addd0(&uStack_7c,0x10);
  uVar10 = uVar3 >> 0xd ^ local_6c - uVar3;
  uVar11 = uVar10 << 8 ^ (-0x61c88647 - uVar10) - uVar3;
  uVar13 = uVar11 >> 0xd ^ (uVar3 - uVar10) - uVar11;
  uVar3 = uVar13 >> 0xc ^ (uVar10 - uVar11) - uVar13;
  uVar10 = uVar3 << 0x10 ^ (uVar11 - uVar13) - uVar3;
  uVar11 = uVar10 >> 5 ^ (uVar13 - uVar3) - uVar10;
  uVar13 = uVar11 >> 3 ^ (uVar3 - uVar10) - uVar11;
  uVar3 = uVar13 << 10 ^ (uVar10 - uVar11) - uVar13;
  uVar10 = uVar9 >> 0xd ^ (uVar3 >> 0xf ^ uVar11 - (uVar13 + uVar3)) - uVar9;
  uVar3 = uVar10 << 8 ^ (-0x61c88647 - uVar9) - uVar10;
  uVar9 = uVar3 >> 0xd ^ (uVar9 - uVar10) - uVar3;
  uVar10 = uVar9 >> 0xc ^ (uVar10 - uVar3) - uVar9;
  uVar11 = uVar10 << 0x10 ^ (uVar3 - uVar9) - uVar10;
  uVar9 = uVar11 >> 5 ^ (uVar9 - uVar10) - uVar11;
  uVar3 = uVar9 >> 3 ^ (uVar10 - uVar11) - uVar9;
  uVar10 = uVar3 << 10 ^ (uVar11 - uVar9) - uVar3;
  iVar4 = FUN_1407e4ee4(plVar6,uVar10 >> 0xf ^ uVar9 - (uVar3 + uVar10),&local_80);
  if ((iVar4 == -1) ||
     (lVar15 = *plVar6 + (longlong)iVar4 * 0x28, puVar5 = (undefined8 *)(lVar15 + 0x18),
     puVar5 == (undefined8 *)0x0 || lVar15 == 0)) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x158,0x10);
    FUN_1407e4f8e(puVar5);
    local_58 = &local_68;
    local_68 = puVar5;
    local_60 = (code *)&local_80;
    FUN_1407e5144(*(undefined8 *)(param_2 + 0x10),local_4c,&local_60,0);
    if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
  else {
    puVar5 = (undefined8 *)*puVar5;
  }
  if (*(char *)(puVar5 + 1) == '\x01') {
    if ((puVar5[0xe] == *param_4) && (*(int *)(puVar5 + 0xf) == (int)param_4[1]))
    goto LAB_1407e4c25;
    FUN_1411bda8e(puVar5,0);
  }
  FUN_1401abe9c(param_3,&local_80,param_1,param_1 + 0x10);
  lVar15 = (longlong)iStack_78;
  if (lVar15 != 0) {
    lVar12 = CONCAT44(uStack_7c,local_80);
    lVar14 = 0;
    do {
      uVar1 = *(ulonglong *)(lVar12 + lVar14);
      if (uVar1 >> 0x20 != 0) {
        uVar9 = (uint)uVar1;
        iVar4 = (int)(uVar1 >> 0x20);
        if (((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar1 >> 0xd) & 0x3fff8))),
             plVar6 != (longlong *)0x0)) &&
            (((int)plVar6[2] == iVar4 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) &&
           (lVar2 = *plVar6, lVar2 != 0)) {
          if (DAT_14cac9ca8 == 0) {
            local_c0 = &local_60;
            local_60 = FUN_141030f22;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_14081d0ea;
            local_c8 = &LAB_1478c0a72;
            local_d0 = &LAB_1417b2375;
            local_d8 = L"Engine";
            local_e0 = 0x1000000000;
            local_e8 = 0x10000004;
            local_f0 = 8;
            local_f8 = 0x390;
            local_a0 = lVar12;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            lVar12 = local_a0;
          }
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
            uVar7 = (**(code **)(*param_3 + 0x20))(param_3);
            FUN_1407e5f54(puVar5,lVar2,param_4,uVar7);
            break;
          }
        }
        if ((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
            (plVar6 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8))),
            plVar6 != (longlong *)0x0)) &&
           ((((int)plVar6[2] == iVar4 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
            (lVar2 = *plVar6, lVar2 != 0)))) {
          lVar8 = FUN_14081cebe();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            uVar7 = (**(code **)(*param_3 + 0x20))(param_3);
            FUN_1407e7de2(puVar5,lVar2,uVar7);
            break;
          }
        }
      }
      lVar14 = lVar14 + 8;
    } while (lVar15 * 8 != lVar14);
  }
LAB_1407e4c25:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1407e4e88 FUN_1407e4e88 body=91 status=ok
// SIG undefined FUN_1407e4e88(void)

void FUN_1407e4e88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a44c) {
    FUN_144b3d300(&DAT_14cb8a44c);
    if (DAT_14cb8a44c == -1) {
      FUN_1457480a0(&DAT_14cb8a448);
      _Init_thread_footer(&DAT_14cb8a44c);
      return;
    }
  }
  return;
}



// FUNCTION 1407e4ee4 FUN_1407e4ee4 body=111 status=ok
// SIG undefined FUN_1407e4ee4(void)

int FUN_1407e4ee4(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_1407e4f53(lVar3 + (longlong)iVar4 * 0x28,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1407e4f53 FUN_1407e4f53 body=59 status=ok
// SIG undefined FUN_1407e4f53(void)

undefined4 FUN_1407e4f53(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[5] == param_2[5])) {
    uVar1 = CONCAT31((int3)((uint)(param_1[1] ^ param_2[1]) >> 8),
                     param_1[4] == param_2[4] &&
                     (param_1[3] == param_2[3] &&
                     (param_1[2] == param_2[2] && (param_1[1] ^ param_2[1]) == 0)));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1407e4f8e FUN_1407e4f8e body=438 status=ok
// SIG undefined FUN_1407e4f8e(void)

undefined8 * FUN_1407e4f8e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14b422db8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xbf80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x7393099c;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b423bf0;
  *(undefined4 *)(plVar5 + 2) = 1;
  if (plVar5 == (longlong *)0x0) {
    param_1[9] = 0x10;
    goto LAB_1407e50af;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_1[10];
  param_1[9] = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar5;
joined_r0x0001407e5101:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_1[10] = plVar5;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001407e5101;
      }
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1407e50af:
  iVar3 = DAT_14cb8a458;
  lVar6 = (longlong)(int)DAT_14cb8a458;
  DAT_14cb8a458 = DAT_14cb8a458 + 1;
  if (DAT_14cb8a45c < DAT_14cb8a458) {
    FUN_1457480b4(iVar3);
  }
  *(undefined8 **)(DAT_14cb8a450 + lVar6 * 8) = param_1;
  return param_1;
}



// FUNCTION 1407e5144 FUN_1407e5144 body=590 status=ok
// SIG undefined FUN_1407e5144(void)

undefined4 *
FUN_1407e5144(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407e5c1c(param_1,local_50);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *(undefined8 *)(local_48 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar6 = puVar1[1];
  uVar4 = puVar1[2];
  uVar7 = puVar1[3];
  *local_48 = *puVar1;
  local_48[1] = uVar6;
  local_48[2] = uVar4;
  local_48[3] = uVar7;
  *(undefined8 *)(local_48 + 6) = *puVar2;
  *puVar2 = 0;
  local_48[8] = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = *local_48;
  uVar4 = FUN_1447addd0(local_48 + 1,0x10);
  uVar7 = uVar4 >> 0xd ^ local_48[5] - uVar4;
  uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar7) - uVar4;
  uVar11 = uVar8 >> 0xd ^ (uVar4 - uVar7) - uVar8;
  uVar4 = uVar11 >> 0xc ^ (uVar7 - uVar8) - uVar11;
  uVar7 = uVar4 << 0x10 ^ (uVar8 - uVar11) - uVar4;
  uVar8 = uVar7 >> 5 ^ (uVar11 - uVar4) - uVar7;
  uVar11 = uVar8 >> 3 ^ (uVar4 - uVar7) - uVar8;
  uVar4 = uVar11 << 10 ^ (uVar7 - uVar8) - uVar11;
  uVar7 = uVar6 >> 0xd ^ (uVar4 >> 0xf ^ uVar8 - (uVar11 + uVar4)) - uVar6;
  uVar4 = uVar7 << 8 ^ (-0x61c88647 - uVar6) - uVar7;
  uVar6 = uVar4 >> 0xd ^ (uVar6 - uVar7) - uVar4;
  uVar8 = uVar6 >> 0xc ^ (uVar7 - uVar4) - uVar6;
  uVar7 = uVar8 << 0x10 ^ (uVar4 - uVar6) - uVar8;
  uVar6 = uVar7 >> 5 ^ (uVar6 - uVar8) - uVar7;
  uVar4 = uVar6 >> 3 ^ (uVar8 - uVar7) - uVar6;
  uVar7 = uVar4 << 10 ^ (uVar7 - uVar6) - uVar4;
  uVar6 = uVar7 >> 0xf ^ uVar6 - (uVar4 + uVar7);
  local_68 = param_4;
  cVar3 = FUN_1407e551e(param_1,uVar6,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[9] = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_48[8] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1407e807a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e5394 FUN_1407e5394 body=141 status=ok
// SIG undefined FUN_1407e5394(void)

void FUN_1407e5394(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_1407e5422(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (0x20 < *(uint *)(param_1 + 0x224)) {
    *(undefined4 *)(param_1 + 0x224) = 0x20;
    FUN_14008f53c(param_1 + 0x210,0);
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x200) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407e5422 FUN_1407e5422 body=110 status=ok
// SIG undefined FUN_1407e5422(void)

void FUN_1407e5422(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0x20, 0x20 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = (int)uVar2;
  FUN_1407e5490(param_1,*(undefined4 *)(param_1 + 0x208),uVar2,0x10);
  return;
}



// FUNCTION 1407e5490 FUN_1407e5490 body=141 status=ok
// SIG undefined FUN_1407e5490(void)

void FUN_1407e5490(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 1407e551e FUN_1407e551e body=148 status=ok
// SIG undefined FUN_1407e551e(void)

void FUN_1407e551e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = FUN_1407e4ee4();
    if (iVar11 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x28);
      puVar2 = *(undefined8 **)(puVar1 + 6);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      puVar1[4] = param_3[4];
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_140dda278(param_1,*param_4,1);
      *param_4 = iVar11;
      uVar10 = 1;
      goto LAB_1407e553f;
    }
  }
  uVar10 = 0;
LAB_1407e553f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 1407e55b2 FUN_1407e55b2 body=1642 status=ok
// SIG undefined FUN_1407e55b2(void)

int * FUN_1407e55b2(longlong param_1,int *param_2,ulonglong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    iVar14 = *(int *)(param_1 + 0x208);
    *(int *)(param_1 + 0x208) = iVar14 + 1;
    if (*(int *)(param_1 + 0x20c) == iVar14) {
      FUN_147e29160(param_1,iVar14);
    }
    iVar19 = *(int *)(param_1 + 0x220);
    if (iVar19 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar3 = iVar19 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    lVar9 = param_1 + 0x210;
    iVar7 = iVar19 + 1;
    iVar10 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar10 = iVar19;
    }
    if (iVar10 >> 5 == iVar3) {
      *(int *)(param_1 + 0x220) = iVar7;
    }
    else {
      if (*(int *)(param_1 + 0x224) <= iVar19) {
        if (iVar19 + 0x20U < 0x40) {
          iVar7 = 0x20;
          iVar3 = iVar19;
        }
        else {
          uVar15 = iVar19 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x224) + 0x1fU < 0x40) {
            uVar17 = 4;
            if (4 < uVar15) {
              uVar17 = uVar15;
            }
          }
          else {
            uVar17 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar17 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar7 = -0x20;
          if ((int)uVar15 <= iVar3) {
            iVar7 = iVar3 << 5;
          }
          iVar3 = *(int *)(param_1 + 0x220);
        }
        *(int *)(param_1 + 0x224) = iVar7;
        FUN_14008f53c(lVar9,iVar3);
        iVar7 = *(int *)(param_1 + 0x220) + 1;
      }
      iVar3 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 0x220) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x218);
        if (*(longlong *)(param_1 + 0x218) == 0) {
          lVar4 = lVar9;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar14;
    if (*(longlong *)(param_1 + 0x218) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x218);
    }
    bVar6 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)(lVar9 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar9 = param_1;
    }
    iVar14 = *(int *)(param_1 + 0x228);
    lVar4 = (longlong)iVar14;
    iVar19 = *(int *)(lVar9 + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 0x228) = iVar19;
    iVar3 = *(int *)(param_1 + 0x22c) + -1;
    *(int *)(param_1 + 0x22c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar9 + (longlong)iVar19 * 0x10) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 0x210);
  puVar8 = *(uint **)(param_1 + 0x218);
  if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
    puVar8 = puVar1;
  }
  iVar19 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar19 = iVar14;
  }
  puVar8[iVar19 >> 5] = puVar8[iVar19 >> 5] | 1 << ((byte)iVar14 & 0x1f);
  lVar9 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar9 = param_1;
  }
  lVar4 = lVar4 * 0x10;
  uVar5 = *param_3;
  *(ulonglong *)(lVar9 + lVar4) = uVar5;
  *(undefined4 *)(lVar9 + 8 + lVar4) = 0xffffffff;
  uVar15 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  uVar15 = uVar15 >> 0x10 ^ uVar15;
  uVar17 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c);
  if ((uVar17 != 0) && (uVar17 != 1)) {
    lVar16 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x270) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x270);
    }
    iVar19 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x278) - 1U & uVar15) * 4);
    if (iVar19 != -1) {
      lVar16 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar16 = param_1;
      }
      do {
        puVar2 = (ulonglong *)(lVar16 + (longlong)iVar19 * 0x10);
        if (*(ulonglong *)(lVar16 + (longlong)iVar19 * 0x10) == uVar5) {
          *puVar2 = uVar5;
          FUN_148952dec(param_1,iVar14);
          iVar14 = iVar19;
          goto LAB_1407e57c5;
        }
        iVar19 = (int)puVar2[1];
      } while (iVar19 != -1);
    }
  }
  uVar5 = (ulonglong)(((uVar17 >> 1) - 1) + (uint)(uVar17 >> 1 == 0)) * 2 + 1;
  lVar16 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  uVar13 = 1 << ((byte)lVar16 & 0x1f);
  if ((uint)lVar16 < 4) {
    uVar13 = 0x10;
  }
  if (uVar17 < 4) {
    uVar13 = 0x10;
  }
  if (((int)uVar17 < 1) || ((int)uVar13 <= *(int *)(param_1 + 0x278))) {
    uVar15 = *(int *)(param_1 + 0x278) - 1U & uVar15;
    *(uint *)(lVar9 + lVar4 + 0xc) = uVar15;
    lVar16 = *(longlong *)(param_1 + 0x270);
    if (*(longlong *)(param_1 + 0x270) == 0) {
      lVar16 = param_1 + 0x230;
    }
    *(undefined4 *)(lVar9 + lVar4 + 8) =
         *(undefined4 *)
          (lVar16 + ((longlong)*(int *)(param_1 + 0x278) - 1U & (longlong)(int)uVar15) * 4);
    lVar9 = *(longlong *)(param_1 + 0x270);
    if (*(longlong *)(param_1 + 0x270) == 0) {
      lVar9 = param_1 + 0x230;
    }
    *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x278) - 1U & (longlong)(int)uVar15) * 4) =
         iVar14;
    goto LAB_1407e57c5;
  }
  *(uint *)(param_1 + 0x278) = uVar13;
  lVar9 = param_1 + 0x230;
  if (*(longlong *)(param_1 + 0x270) == 0) {
    FUN_1400bf6d8(lVar9,0,uVar13,4);
LAB_1407e5898:
    uVar15 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x270);
      if (*(longlong *)(param_1 + 0x270) == 0) {
        lVar4 = lVar9;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x278) + 0x7fffffffU & uVar15) * 4) =
           0xffffffff;
      uVar15 = uVar15 + 1;
    } while (uVar13 != uVar15);
  }
  else {
    FUN_1446efa72(param_1 + 0x270,0,0,4);
    uVar13 = *(uint *)(param_1 + 0x278);
    if (uVar13 == 0) goto LAB_1407e57c5;
    FUN_1400bf6d8(lVar9,0,uVar13,4);
    if (0 < (int)uVar13) goto LAB_1407e5898;
  }
  iVar19 = *(int *)(param_1 + 0x220);
  if (iVar19 == 0) {
    uVar5 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x218);
    if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar3 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar3 = iVar19 + -1;
      }
      uVar5 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar5;
      }
      iVar7 = 0;
      do {
        if (uVar12 == uVar5) goto LAB_1407e57c5;
        iVar7 = iVar7 + 0x20;
        uVar15 = puVar8[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar5 = 0;
      iVar7 = 0;
    }
    uVar12 = (ulonglong)(-uVar15 & uVar15);
    uVar20 = uVar12 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar3 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar3) {
      iVar3 = iVar19;
    }
  }
  if (iVar3 < iVar19) {
    uVar15 = 0xffffffff;
    do {
      lVar4 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar4 = param_1;
      }
      lVar18 = (longlong)iVar3 * 0x10;
      uVar17 = ((uint)(*(ulonglong *)(lVar4 + lVar18) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar4 + lVar18) >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar20 = (longlong)(int)(uVar17 >> 0x10 ^ uVar17) & (longlong)*(int *)(param_1 + 0x278) - 1U;
      iVar19 = (int)uVar20;
      *(int *)(lVar4 + 0xc + lVar18) = iVar19;
      lVar16 = *(longlong *)(param_1 + 0x270);
      if (*(longlong *)(param_1 + 0x270) == 0) {
        lVar16 = lVar9;
      }
      *(undefined4 *)(lVar4 + 8 + lVar18) =
           *(undefined4 *)(lVar16 + ((longlong)*(int *)(param_1 + 0x278) - 1U & uVar20) * 4);
      lVar4 = *(longlong *)(param_1 + 0x270);
      if (*(longlong *)(param_1 + 0x270) == 0) {
        lVar4 = lVar9;
      }
      *(int *)(lVar4 + ((longlong)iVar19 & (longlong)*(int *)(param_1 + 0x278) - 1U) * 4) = iVar3;
      uVar15 = ~(uint)uVar12 & uVar15;
      puVar8 = *(uint **)(param_1 + 0x218);
      if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar19 = *(int *)(param_1 + 0x220);
      iVar3 = (int)uVar5;
      lVar4 = (longlong)iVar3;
      uVar17 = puVar8[lVar4] & uVar15;
      if (uVar17 == 0) {
        iVar10 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar10 = iVar19 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar3) {
          iVar11 = iVar3;
        }
        if (iVar10 <= iVar3) break;
        lVar16 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar17 = puVar8[lVar4 + lVar16 + 1];
          if (uVar17 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar11 - lVar4 == lVar16) goto LAB_1407e57c5;
        }
        uVar5 = (ulonglong)(iVar3 + (int)lVar16 + 1);
        uVar15 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar17 & uVar17);
      uVar20 = uVar12 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar3 = (iVar7 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar19);
  }
LAB_1407e57c5:
  *param_2 = iVar14;
  return param_2;
}



// FUNCTION 1407e5c1c FUN_1407e5c1c body=470 status=ok
// SIG undefined FUN_1407e5c1c(void)

int * FUN_1407e5c1c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140549c28(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1407e5df2 FUN_1407e5df2 body=353 status=ok
// SIG undefined FUN_1407e5df2(void)

void FUN_1407e5df2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407e5e77;
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
LAB_1407e5e77:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1407e5f54 FUN_1407e5f54 body=4325 status=ok
// SIG undefined FUN_1407e5f54(void)

void FUN_1407e5f54(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_148 [40];
  longlong local_120;
  int local_114;
  longlong local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_f0;
  longlong *local_e8;
  int local_e0;
  undefined ***local_d8;
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)(param_1 + 8) != '\0') goto LAB_1407e678a;
  *(undefined1 *)(param_1 + 8) = 1;
  lVar6 = FUN_1447210f0(param_2);
  if (lVar6 == 0) {
    fVar21 = -1.0;
  }
  else {
    lVar6 = FUN_1447210f0(param_2);
    fVar21 = (float)*(double *)(lVar6 + 0x6d0);
  }
  *(float *)(param_1 + 0x58) = fVar21;
  if (param_4 == 0) {
    param_4 = param_2;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    iVar13 = 0;
  }
  else {
    uVar2 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 0x110) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar13 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar13 = *(int *)(lVar6 + 0x10);
      bVar20 = iVar13 == 0;
      if (bVar20) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar13 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x114) = iVar13;
  if ((*(longlong *)(param_1 + 0x70) != *param_3) || (*(int *)(param_1 + 0x78) != (int)param_3[1]))
  {
    *(longlong *)(param_1 + 0x70) = *param_3;
    *(int *)(param_1 + 0x78) = (int)param_3[1];
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    iVar13 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x108) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar13 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar13 = *(int *)(lVar6 + 0x10);
      bVar20 = iVar13 == 0;
      if (bVar20) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar13 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x10c) = iVar13;
  local_108 = 0;
  uStack_100 = 0;
  local_70 = (longlong *)FUN_140b247ea(param_1 + 0x70);
  local_98 = 0;
  local_88 = &PTR_LAB_14b423c10;
  local_e8 = (longlong *)&LAB_143e1814a;
  local_a8 = &LAB_143e1814a;
  local_120 = param_2;
  local_80 = param_1;
  uStack_78 = param_2;
  if (local_70 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    local_e8 = (longlong *)0x0;
  }
  else {
    uVar4 = (**(code **)(*local_70 + 0x20))(local_70);
    *(undefined1 *)(param_1 + 0xb) = uVar4;
    local_c8 = &PTR_LAB_14b423c10;
    local_c0 = (undefined4)local_80;
    uStack_bc = local_80._4_4_;
    uStack_b8 = (undefined4)uStack_78;
    uStack_b4 = uStack_78._4_4_;
    local_b0 = local_70;
  }
  local_d8 = (undefined ***)0x0;
  FUN_1407e718c(local_120,&local_108,&local_e8);
  if (local_e8 != (longlong *)0x0) {
    pppuVar7 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar7 = &local_c8;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((int)uStack_100 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_100 & 0xffffffff);
  }
  plVar8 = (longlong *)(param_1 + 0x60);
  local_110 = param_4;
  if (*(int *)(param_1 + 0x6c) < (int)uStack_100) {
    FUN_1407e703e(plVar8);
  }
  lVar6 = local_108;
  if ((int)uStack_100 != 0) {
    lVar17 = (longlong)(int)uStack_100;
    lVar12 = 0;
    do {
      lVar14 = *(longlong *)(lVar6 + lVar12);
      iVar13 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar13 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar13 + 1U) {
        FUN_140b249d6(plVar8,iVar13);
      }
      lVar15 = *plVar8;
      lVar18 = (longlong)iVar13 * 0x38;
      puVar1 = (undefined8 *)(lVar15 + 0x20 + lVar18);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar15 + lVar18) = 0;
      ((undefined8 *)(lVar15 + lVar18))[1] = 0;
      *(undefined8 *)(lVar15 + 0x30 + lVar18) = 0;
      lVar15 = *plVar8;
      puVar9 = (uint *)(lVar15 + lVar18 + 0xc);
      if (lVar14 == 0) {
        *puVar9 = 0;
        iVar13 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar14 + 0xc);
        *puVar9 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar13 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar20) {
            local_114 = iVar5;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
            iVar5 = local_114;
          }
          LOCK();
          iVar13 = *(int *)(lVar14 + 0x10);
          bVar20 = iVar13 == 0;
          if (bVar20) {
            *(int *)(lVar14 + 0x10) = iVar5;
            iVar13 = 0;
          }
          UNLOCK();
          if (bVar20) {
            iVar13 = iVar5;
          }
        }
      }
      *(int *)(lVar15 + lVar18 + 0x10) = iVar13;
      *(undefined4 *)(*plVar8 + lVar18) = 0xffffffff;
      lVar12 = lVar12 + 8;
    } while (lVar17 * 8 != lVar12);
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  plVar8 = local_e8;
  lVar6 = local_120;
  local_e0 = 3;
  *local_e8 = (longlong)&PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  lVar12 = local_120 + 0x300;
  local_e8[2] = lVar17;
  *local_e8 = (longlong)&PTR_FUN_14b423c30;
  local_e8[3] = 0;
  iVar13 = 0;
  if (local_110 != 0) {
    uVar2 = *(uint *)(local_110 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar20 = iVar13 == 0;
      if (bVar20) {
        *(int *)(lVar17 + 0x10) = iVar5;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar13 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar8 + 0x1c) = iVar13;
  plVar8[4] = param_1;
  FUN_14080ef1c(lVar12,&local_f0,&local_e8);
  if (local_e0 == 0) {
LAB_1407e62f8:
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (longlong *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1407e62f8;
  }
  *(undefined8 *)(param_1 + 0x118) = local_f0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  plVar8 = local_e8;
  lVar12 = local_110;
  local_e0 = 3;
  *local_e8 = (longlong)&PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_e8[2] = lVar14;
  *local_e8 = (longlong)&PTR_FUN_14b423ca0;
  local_e8[3] = 0;
  iVar13 = 0;
  if (local_110 != 0) {
    uVar2 = *(uint *)(local_110 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar13 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar13 = *(int *)(lVar17 + 0x10);
      bVar20 = iVar13 == 0;
      if (bVar20) {
        *(int *)(lVar17 + 0x10) = iVar5;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar13 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar8 + 0x1c) = iVar13;
  plVar8[4] = param_1;
  FUN_14080ef1c(lVar6 + 0x318,&local_f0,&local_e8);
  if (local_e0 == 0) {
LAB_1407e63f1:
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (longlong *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1407e63f1;
  }
  *(undefined8 *)(param_1 + 0x120) = local_f0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  plVar8 = local_e8;
  local_e0 = 3;
  *local_e8 = (longlong)&PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_e8[2] = lVar14;
  *local_e8 = (longlong)&PTR_FUN_14b423d10;
  local_e8[3] = 0;
  iVar13 = 0;
  if (lVar12 != 0) {
    uVar2 = *(uint *)(lVar12 + 0xc);
    *(uint *)(local_e8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar13 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar13 = *(int *)(lVar12 + 0x10);
      bVar20 = iVar13 == 0;
      if (bVar20) {
        *(int *)(lVar12 + 0x10) = iVar5;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar13 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar8 + 0x1c) = iVar13;
  plVar8[4] = param_1;
  if (((local_e0 == 0) || (local_e8 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_e8 + 0x30))(), cVar3 == '\0')) {
    lVar6 = local_120;
    if (local_e0 == 0) {
      uVar16 = 0;
      goto LAB_1407e6595;
    }
    if (local_e8 != (longlong *)0x0) {
      uVar16 = 0;
      (**(code **)*local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      lVar6 = local_120;
      goto LAB_1407e6588;
    }
    uVar16 = 0;
  }
  else {
    plVar8 = (longlong *)(lVar6 + 0x2b8);
    if (*(int *)(lVar6 + 0x2cc) < 1) {
      iVar13 = *(int *)(lVar6 + 0x2c0);
      iVar5 = *(int *)(lVar6 + 0x2c8) + -1;
      *(int *)(lVar6 + 0x2c8) = iVar5;
      if (iVar5 <= iVar13) {
        iVar5 = iVar13;
        if (0 < iVar13) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar10 = *(longlong **)(*plVar8 + (longlong)iVar11 * 0x10),
                plVar10 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar10 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar8,iVar11);
              FUN_14005b248(plVar8);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar5 = *(int *)(lVar6 + 0x2c0);
          } while (iVar11 < iVar5);
        }
        iVar11 = 2;
        if (2 < iVar5 * 2) {
          iVar11 = iVar5 * 2;
        }
        *(int *)(lVar6 + 0x2c8) = iVar11;
        if ((iVar11 < iVar13) && (*(int *)(lVar6 + 0x2c4) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar16 = 0;
    if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
      (**(code **)(*local_e8 + 0x38))(local_e8,&local_f0);
      uVar16 = local_f0;
    }
    iVar13 = *(int *)(lVar6 + 0x2c0);
    *(uint *)(lVar6 + 0x2c0) = iVar13 + 1U;
    if (*(uint *)(lVar6 + 0x2c4) < iVar13 + 1U) {
      FUN_1447a71f6(plVar8,iVar13);
    }
    lVar12 = *plVar8;
    lVar17 = (longlong)iVar13 * 0x10;
    *(undefined8 *)(lVar12 + lVar17) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar17) = 0;
    *(longlong **)(lVar12 + lVar17) = local_e8;
    local_e8 = (longlong *)0x0;
    *(int *)(lVar12 + 8 + lVar17) = local_e0;
LAB_1407e6588:
    local_e0 = 0;
LAB_1407e6595:
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x128) = uVar16;
  if (*(char *)(param_1 + 0xb) != '\0') {
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    plVar8 = local_e8;
    local_e0 = 3;
    *local_e8 = (longlong)&PTR_LAB_14b40ec50;
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar17 == 0) {
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_e8[2] = lVar17;
    *local_e8 = (longlong)&PTR_FUN_14b423d80;
    local_e8[3] = 0;
    iVar13 = 0;
    if (local_110 != 0) {
      uVar2 = *(uint *)(local_110 + 0xc);
      *(uint *)(local_e8 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar13 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar13 = *(int *)(lVar12 + 0x10);
        bVar20 = iVar13 == 0;
        if (bVar20) {
          *(int *)(lVar12 + 0x10) = iVar5;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar13 = iVar5;
        }
      }
    }
    *(int *)((longlong)plVar8 + 0x1c) = iVar13;
    plVar8[4] = param_1;
    if (((local_e0 == 0) || (local_e8 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*local_e8 + 0x30))(), cVar3 == '\0')) {
      if (local_e0 == 0) {
        uVar16 = 0;
        goto LAB_1407e6acb;
      }
      if (local_e8 != (longlong *)0x0) {
        uVar16 = 0;
        (**(code **)*local_e8)(local_e8,0);
        FUN_1446efa72(&local_e8,0,0,0x10);
        goto LAB_1407e6abe;
      }
      uVar16 = 0;
    }
    else {
      plVar8 = (longlong *)(lVar6 + 0x330);
      if (*(int *)(lVar6 + 0x344) < 1) {
        iVar13 = *(int *)(lVar6 + 0x338);
        iVar5 = *(int *)(lVar6 + 0x340) + -1;
        *(int *)(lVar6 + 0x340) = iVar5;
        if (iVar5 <= iVar13) {
          iVar5 = iVar13;
          if (0 < iVar13) {
            iVar11 = 0;
            do {
              if (((*(int *)(*plVar8 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                  (plVar10 = *(longlong **)(*plVar8 + (longlong)iVar11 * 0x10),
                  plVar10 == (longlong *)0x0)) ||
                 (cVar3 = (**(code **)(*plVar10 + 0x28))(), cVar3 != '\0')) {
                FUN_14005b288(plVar8,iVar11);
                FUN_14005b248(plVar8);
              }
              else {
                iVar11 = iVar11 + 1;
              }
              iVar5 = *(int *)(lVar6 + 0x338);
            } while (iVar11 < iVar5);
          }
          iVar11 = 2;
          if (2 < iVar5 * 2) {
            iVar11 = iVar5 * 2;
          }
          *(int *)(lVar6 + 0x340) = iVar11;
          if ((iVar11 < iVar13) && (*(int *)(lVar6 + 0x33c) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      uVar16 = 0;
      if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
        (**(code **)(*local_e8 + 0x38))(local_e8,&local_f0);
        uVar16 = local_f0;
      }
      iVar13 = *(int *)(lVar6 + 0x338);
      *(uint *)(lVar6 + 0x338) = iVar13 + 1U;
      if (*(uint *)(lVar6 + 0x33c) < iVar13 + 1U) {
        FUN_1447a71f6(plVar8,iVar13);
      }
      lVar6 = *plVar8;
      lVar12 = (longlong)iVar13 * 0x10;
      *(undefined8 *)(lVar6 + lVar12) = 0;
      *(undefined4 *)(lVar6 + 8 + lVar12) = 0;
      *(longlong **)(lVar6 + lVar12) = local_e8;
      local_e8 = (longlong *)0x0;
      *(int *)(lVar6 + 8 + lVar12) = local_e0;
LAB_1407e6abe:
      local_e0 = 0;
LAB_1407e6acb:
      if (local_e8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x130) = uVar16;
  }
  if (0 < *(int *)(param_1 + 0x140)) {
    iVar13 = 0;
    do {
      FUN_140dda826(param_1,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x140));
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) < 0) {
    FUN_1411bde0a(param_1 + 0x138);
  }
  if (*(int *)(param_1 + 0x10c) == 0) {
LAB_1407e6bbf:
    lVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x108);
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x10c) ||
          ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_1407e6bbf;
      lVar6 = *plVar8;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x60);
    lVar17 = (longlong)*(int *)(param_1 + 0x68) * 0x38 + lVar12;
    do {
      if (*(int *)(lVar12 + 0x10) != 0) {
        uVar2 = *(uint *)(lVar12 + 0xc);
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar8 != (longlong *)0x0) &&
             (((((int)plVar8[2] == *(int *)(lVar12 + 0x10) &&
                ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (*plVar8 != 0)) &&
              ((lVar14 = *(longlong *)(*plVar8 + 0xa8), lVar14 != 0 && (lVar14 != lVar6)))))) {
            if ((longlong)*(int *)(param_1 + 0x140) != 0) {
              puVar9 = *(uint **)(param_1 + 0x138);
              lVar15 = (longlong)*(int *)(param_1 + 0x140) * 0x18;
              do {
                if ((puVar9[1] == 0) || (uVar2 = *puVar9, (int)uVar2 < 0)) {
LAB_1407e6c89:
                  lVar18 = 0;
                }
                else {
                  lVar18 = 0;
                  if ((int)uVar2 < DAT_14c9647dc) {
                    plVar8 = (longlong *)
                             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                    if (((plVar8 == (longlong *)0x0) || (*(uint *)(plVar8 + 2) != puVar9[1])) ||
                       ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_1407e6c89;
                    lVar18 = *plVar8;
                  }
                }
                if (lVar18 == lVar14) {
                  if (puVar9 != (uint *)0x0) goto LAB_1407e66a8;
                  break;
                }
                puVar9 = puVar9 + 6;
                lVar15 = lVar15 + -0x18;
              } while (lVar15 != 0);
            }
            FUN_1407e7782(param_1);
          }
        }
      }
LAB_1407e66a8:
      lVar12 = lVar12 + 0x38;
    } while (lVar12 != lVar17);
  }
  if ((*(char *)(param_1 + 0xb) != '\0') && ((longlong)*(int *)(lVar6 + 0x1c0) != 0)) {
    plVar10 = *(longlong **)(lVar6 + 0x1b8);
    plVar8 = plVar10 + *(int *)(lVar6 + 0x1c0);
    do {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        if ((longlong)*(int *)(param_1 + 0x140) != 0) {
          puVar9 = *(uint **)(param_1 + 0x138);
          lVar12 = (longlong)*(int *)(param_1 + 0x140) * 0x18;
          do {
            if ((puVar9[1] == 0) || (uVar2 = *puVar9, (int)uVar2 < 0)) {
LAB_1407e6d72:
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              if ((int)uVar2 < DAT_14c9647dc) {
                plVar19 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if (((plVar19 == (longlong *)0x0) || (*(uint *)(plVar19 + 2) != puVar9[1])) ||
                   ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_1407e6d72;
                lVar17 = *plVar19;
              }
            }
            if (lVar17 == lVar6) {
              if (puVar9 != (uint *)0x0) goto LAB_1407e6bad;
              break;
            }
            puVar9 = puVar9 + 6;
            lVar12 = lVar12 + -0x18;
          } while (lVar12 != 0);
        }
        FUN_1407e8406(param_1,lVar6,1);
      }
LAB_1407e6bad:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8);
  }
  FUN_1407e73ea(param_1);
  (*(code *)local_88[3])(&local_88,0);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
LAB_1407e678a:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e703e FUN_1407e703e body=333 status=ok
// SIG undefined FUN_1407e703e(void)

void FUN_1407e703e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar4 + 0xf;
        if (param_2 < 0x249) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0x3ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1407e70a7;
              lVar1 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar5 & 0x3ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1407e70a7:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4 >> 3;
    iVar6 = SUB164(auVar3 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar8,0x38,8);
  }
  return;
}



// FUNCTION 1407e718c FUN_1407e718c body=605 status=ok
// SIG undefined FUN_1407e718c(void)

void FUN_1407e718c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_140b24684(*(longlong *)(param_1 + 0x1c8),param_2);
  }
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x250);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar11 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar11 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar13 != 0) {
        lVar6 = FUN_14081cebe();
        if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
            ((*(byte *)(lVar13 + 0x9c) & 1) != 0)) &&
           ((*(longlong *)(lVar13 + 0x120) == 0 ||
            (*(longlong *)(*(longlong *)(lVar13 + 0x120) + 0xa8) != param_1)))) {
          if ((longlong)(int)param_2[1] != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(*param_2 + lVar6) == lVar13) goto LAB_1407e7293;
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)param_2[1] * 8 != lVar6);
          }
          FUN_140b24684(lVar13,param_2,param_3);
        }
      }
LAB_1407e7293:
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x250);
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar14;
      lVar13 = (longlong)iVar4;
      uVar9 = puVar5[lVar13] & uVar12;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar6 = 0;
          do {
            uVar9 = puVar5[lVar13 + lVar6 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar6 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1407e7302;
            }
            iVar10 = iVar10 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar8 - lVar13 != lVar6);
          uVar12 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1407e7302:
        uVar11 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 1407e73ea FUN_1407e73ea body=893 status=ok
// SIG undefined FUN_1407e73ea(void)

void FUN_1407e73ea(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 10) != '\0') goto LAB_1407e7645;
  *(undefined1 *)(param_1 + 10) = 1;
  if (((*(int *)(param_1 + 0x2c) == 0 && *(int *)(param_1 + 0x28) == 0) &&
      *(int *)(param_1 + 0x30) == 0) && *(int *)(param_1 + 0x34) == 0) {
LAB_1407e7430:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar6 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar6) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar6) != 0)) goto LAB_1407e7430;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0x10 != lVar6);
  }
  FUN_1447f69b6(param_1 + 0x10);
  if (((((*(int *)(param_1 + 0x114) == 0) || (uVar2 = *(uint *)(param_1 + 0x110), (int)uVar2 < 0))
       || (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x114))))) ||
     (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
      ((plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0 ||
       (lVar6 = (**(code **)(*plVar9 + 0x180))(plVar9), lVar6 == 0)))))) goto LAB_1407e7645;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (*(longlong *)(lVar6 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar6 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
    }
    uVar10 = *puVar7;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    if (*(longlong *)(lVar6 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar6 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
    }
    uVar10 = *puVar7;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,4,0x10);
  puVar7 = local_a8;
  local_a0 = 4;
  *local_a8 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_a8[2] = lVar8;
  *local_a8 = &PTR_FUN_14b423fb0;
  local_a8[3] = 0;
  uVar2 = *(uint *)((longlong)plVar9 + 0xc);
  *(uint *)(local_a8 + 3) = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  iVar5 = *(int *)(lVar6 + 0x10);
  if (*(int *)(lVar6 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar11 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar11);
    }
    LOCK();
    iVar5 = *(int *)(lVar6 + 0x10);
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(lVar6 + 0x10) = iVar11;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar5 = iVar11;
    }
  }
  *(int *)((longlong)puVar7 + 0x1c) = iVar5;
  puVar7[4] = param_1;
  puVar7[5] = uVar3;
  puVar7[6] = plVar4;
  local_98 = 0;
  local_90 = 0;
  FUN_14487d8d8(&local_98,&local_a8);
  local_58 = 1;
  FUN_14016fdb0(uVar10,local_b0,&local_98);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  if (local_a0 == 0) {
LAB_1407e7628:
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_1407e7628;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1407e7645:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e7782 FUN_1407e7782 body=1256 status=ok
// SIG undefined FUN_1407e7782(void)

void FUN_1407e7782(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    uVar8 = 0;
    iVar4 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar5;
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0x138);
  iVar5 = *(int *)(param_1 + 0x140);
  lVar7 = (longlong)iVar5;
  *(uint *)(param_1 + 0x140) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar5 + 1U) {
    FUN_1407e7c6c(plVar3,iVar5);
  }
  lVar9 = *(longlong *)(param_1 + 0x138);
  *(uint *)(lVar9 + lVar7 * 0x18) = uVar8;
  *(int *)(lVar9 + 4 + lVar7 * 0x18) = iVar4;
  puVar1 = (undefined8 *)(lVar9 + 8 + lVar7 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  local_68 = plVar3;
  if ((((*(int *)(param_1 + 0x114) == 0) || (uVar8 = *(uint *)(param_1 + 0x110), (int)uVar8 < 0)) ||
      (DAT_14c9647dc <= (int)uVar8)) ||
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar3 == (longlong *)0x0 || ((int)plVar3[2] != *(int *)(param_1 + 0x114))) ||
      (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 || (lVar9 = *plVar3, lVar9 == 0))))))
  goto LAB_1407e7a81;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar1 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14b423ed0;
  local_58[3] = 0;
  uVar8 = *(uint *)(lVar9 + 0xc);
  *(uint *)(local_58 + 3) = uVar8;
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  iVar4 = *(int *)(lVar6 + 0x10);
  if (*(int *)(lVar6 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar5 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar10) {
      local_6c = iVar5;
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar5);
      iVar5 = local_6c;
    }
    LOCK();
    iVar4 = *(int *)(lVar6 + 0x10);
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(lVar6 + 0x10) = iVar5;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar10) {
      iVar4 = iVar5;
    }
  }
  *(int *)((longlong)puVar1 + 0x1c) = iVar4;
  puVar1[4] = param_1;
  FUN_14080ef1c(param_2 + 0x300,&local_60,&local_58);
  plVar3 = local_68;
  if (local_50 == 0) {
LAB_1407e797c:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1407e797c;
  }
  *(undefined8 *)(*plVar3 + 8 + lVar7 * 0x18) = local_60;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar1 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14b423f40;
  local_58[3] = 0;
  uVar8 = *(uint *)(lVar9 + 0xc);
  *(uint *)(local_58 + 3) = uVar8;
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar4 = *(int *)(lVar9 + 0x10);
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar5 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar5);
    }
    LOCK();
    iVar4 = *(int *)(lVar9 + 0x10);
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(lVar9 + 0x10) = iVar5;
      iVar4 = 0;
    }
    UNLOCK();
    plVar3 = local_68;
    if (bVar10) {
      iVar4 = iVar5;
    }
  }
  *(int *)((longlong)puVar1 + 0x1c) = iVar4;
  puVar1[4] = param_1;
  FUN_14080ef1c(param_2 + 0x318,&local_60,&local_58);
  if (local_50 == 0) {
LAB_1407e7a65:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1407e7a65;
  }
  *(undefined8 *)(*plVar3 + 0x10 + lVar7 * 0x18) = local_60;
LAB_1407e7a81:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e7c6c FUN_1407e7c6c body=373 status=ok
// SIG undefined FUN_1407e7c6c(void)

void FUN_1407e7c6c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407e7cf5;
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
LAB_1407e7cf5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1407e7de2 FUN_1407e7de2 body=622 status=ok
// SIG undefined FUN_1407e7de2(void)

void FUN_1407e7de2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_2 + 0xa8);
    if (param_3 != 0) goto LAB_1407e7e0e;
    *(undefined4 *)(param_1 + 0x110) = 0;
    iVar3 = 0;
  }
  else {
LAB_1407e7e0e:
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x110) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
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
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x114) = iVar3;
  *(undefined1 *)(param_1 + 8) = 1;
  lVar6 = *(longlong *)(param_2 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_2);
    if (lVar6 == 0) {
      fVar8 = -1.0;
      goto LAB_1407e7e66;
    }
    lVar6 = *(longlong *)(param_2 + 0xb0);
    if (lVar6 == 0) {
      lVar6 = FUN_1448abda6(param_2);
    }
  }
  fVar8 = (float)*(double *)(lVar6 + 0x6d0);
LAB_1407e7e66:
  *(float *)(param_1 + 0x58) = fVar8;
  plVar1 = (longlong *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    if ((uint)(*(int *)(param_1 + 0x6c) - iVar3) < 1U - iVar3) {
      FUN_140b249d6(plVar1,iVar3);
    }
    FUN_1407e8050((longlong)iVar3 * 0x38 + *plVar1,1U - iVar3);
  }
  else if (iVar3 != 1) {
    FUN_148952e82(plVar1,iVar3 + -1);
    FUN_1410f6da4(plVar1);
  }
  lVar6 = *plVar1;
  if (param_2 == 0) {
    *(undefined4 *)(lVar6 + 0xc) = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(lVar6 + 0xc) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
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
  *(int *)(lVar6 + 0x10) = iVar3;
  **(undefined4 **)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4) = 0;
  FUN_1407e73ea(param_1);
  return;
}



// FUNCTION 1407e8050 FUN_1407e8050 body=42 status=ok
// SIG undefined FUN_1407e8050(void)

void FUN_1407e8050(undefined8 *param_1,int param_2)

{
  do {
    *param_1 = 0xffffffff;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1 = param_1 + 7;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1407e807a FUN_1407e807a body=907 status=ok
// SIG undefined FUN_1407e807a(void)

void FUN_1407e807a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar17 = *(uint *)(param_1 + 9);
  if (uVar17 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar17 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar17,4);
    if ((int)uVar17 < 1) goto LAB_1407e80e0;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar17 != uVar3);
LAB_1407e80e0:
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar19 = 0;
    uVar18 = 1;
    iVar6 = 0;
    iVar14 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar17 = *puVar10;
    if (uVar17 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar19) {
          return;
        }
        iVar14 = iVar14 + 0x20;
        uVar17 = puVar10[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar19 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar17 & uVar17);
    uVar11 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar17 = 0xffffffff;
    do {
      puVar10 = (uint *)(*param_1 + (longlong)iVar6 * 0x28);
      uVar3 = *puVar10;
      uVar4 = FUN_1447addd0(puVar10 + 1,0x10);
      uVar12 = uVar4 >> 0xd ^ puVar10[5] - uVar4;
      uVar7 = uVar12 << 8 ^ (-0x61c88647 - uVar12) - uVar4;
      uVar15 = uVar7 >> 0xd ^ (uVar4 - uVar12) - uVar7;
      uVar4 = uVar15 >> 0xc ^ (uVar12 - uVar7) - uVar15;
      uVar12 = uVar4 << 0x10 ^ (uVar7 - uVar15) - uVar4;
      uVar7 = uVar12 >> 5 ^ (uVar15 - uVar4) - uVar12;
      uVar15 = uVar7 >> 3 ^ (uVar4 - uVar12) - uVar7;
      uVar4 = uVar15 << 10 ^ (uVar12 - uVar7) - uVar15;
      uVar7 = uVar3 >> 0xd ^ (uVar4 >> 0xf ^ uVar7 - (uVar15 + uVar4)) - uVar3;
      uVar4 = uVar7 << 8 ^ (-0x61c88647 - uVar3) - uVar7;
      uVar3 = uVar4 >> 0xd ^ (uVar3 - uVar7) - uVar4;
      uVar7 = uVar3 >> 0xc ^ (uVar7 - uVar4) - uVar3;
      uVar4 = uVar7 << 0x10 ^ (uVar4 - uVar3) - uVar7;
      uVar3 = uVar4 >> 5 ^ (uVar3 - uVar7) - uVar4;
      uVar7 = uVar3 >> 3 ^ (uVar7 - uVar4) - uVar3;
      uVar4 = uVar7 << 10 ^ (uVar4 - uVar3) - uVar7;
      uVar11 = (longlong)(int)(uVar4 >> 0xf ^ uVar3 - (uVar7 + uVar4)) &
               (longlong)(int)param_1[9] - 1U;
      uVar3 = (uint)uVar11;
      puVar10[9] = uVar3;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      puVar10[8] = *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U) * 4) =
           iVar6;
      uVar17 = ~(uint)uVar18 & uVar17;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar19;
      lVar16 = (longlong)iVar6;
      uVar3 = puVar10[lVar16] & uVar17;
      if (uVar3 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar3 = puVar10[lVar16 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar16 == lVar13) {
            return;
          }
        }
        uVar19 = (ulonglong)(iVar6 + (int)lVar13 + 1);
        uVar17 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar3 & uVar3);
      uVar11 = uVar18 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
  return;
}



// FUNCTION 1407e8406 FUN_1407e8406 body=740 status=ok
// SIG undefined FUN_1407e8406(void)

void FUN_1407e8406(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  ulonglong uStack_b0;
  undefined1 *local_a8;
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
  }
  plVar6 = (longlong *)FUN_140b247ea(param_1 + 0x70);
  if (*(int *)(param_1 + 0x10c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x108);
    uVar12 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1407e84a6;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar9 != (undefined8 *)0x0) &&
       ((*(int *)(puVar9 + 2) == *(int *)(param_1 + 0x10c) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      uVar12 = *puVar9;
      goto LAB_1407e84a6;
    }
  }
  uVar12 = 0;
LAB_1407e84a6:
  cVar5 = (**(code **)(*plVar6 + 0x28))(plVar6,param_2,uVar12);
  if (cVar5 != '\0') {
    FUN_1410f6e3a(param_1,param_2,1);
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14b424060;
    local_a8 = &LAB_143e1a866;
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    local_80 = param_1;
    local_78 = param_2;
    local_70 = plVar6;
    FUN_1407e718c(param_2,&local_b8);
    if ((longlong)(int)uStack_b0 == 0) {
      bVar15 = false;
    }
    else {
      plVar1 = local_b8 + (int)uStack_b0;
      plVar6 = (longlong *)(param_1 + 0x60);
      bVar15 = false;
      plVar17 = local_b8;
      do {
        lVar4 = *plVar17;
        lVar7 = *(longlong *)(param_1 + 0x60);
        iVar3 = *(int *)(param_1 + 0x68);
        lVar16 = (longlong)iVar3;
        if (lVar16 != 0) {
          lVar13 = lVar16 * 0x38;
          lVar14 = lVar7;
          do {
            if ((*(int *)(lVar14 + 0x10) == 0) || (uVar2 = *(uint *)(lVar14 + 0xc), (int)uVar2 < 0))
            {
LAB_1407e86de:
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if ((int)uVar2 < DAT_14c9647dc) {
                plVar11 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if (((plVar11 == (longlong *)0x0) || ((int)plVar11[2] != *(int *)(lVar14 + 0x10)))
                   || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_1407e86de;
                lVar10 = *plVar11;
              }
            }
            if (lVar10 == lVar4) {
              if (lVar14 != 0) goto LAB_1407e861a;
              break;
            }
            lVar14 = lVar14 + 0x38;
            lVar13 = lVar13 + -0x38;
          } while (lVar13 != 0);
        }
        *(uint *)(param_1 + 0x68) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
          FUN_140b249d6(plVar6,iVar3);
          lVar7 = *plVar6;
        }
        lVar16 = lVar16 * 0x38;
        puVar9 = (undefined8 *)(lVar7 + 0x20 + lVar16);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = (undefined8 *)(lVar7 + 0x10 + lVar16);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined8 *)(lVar7 + lVar16) = 0;
        ((undefined8 *)(lVar7 + lVar16))[1] = 0;
        *(undefined8 *)(lVar7 + 0x30 + lVar16) = 0;
        FUN_14485c47a(*plVar6 + lVar16 + 0xc,lVar4);
        *(undefined4 *)(*plVar6 + lVar16) = 0xffffffff;
        bVar15 = true;
LAB_1407e861a:
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar1);
    }
    bVar18 = (longlong)uStack_b0 < 0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    if (bVar18) {
      FUN_148952ed2(&local_b8,0);
    }
    if (bVar15) {
      FUN_1407e73ea(param_1);
    }
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined1 *)0x0) {
      pppuVar8 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar8 = &local_88;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407e8714 FUN_1407e8714 body=58 status=ok
// SIG undefined FUN_1407e8714(void)

ulonglong FUN_1407e8714(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar2 = FUN_140df24ba();
    lVar1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)) goto LAB_1407e8746;
  }
  uVar3 = 0;
LAB_1407e8746:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1407e874e FUN_1407e874e body=61 status=ok
// SIG undefined FUN_1407e874e(void)

void FUN_1407e874e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1294e0;
  FUN_1407e878c(param_1 + 0x1d);
  if (*(char *)((longlong)param_1 + 0xe4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  }
  FUN_1407e87c4(param_1);
  return;
}



// FUNCTION 1407e878c FUN_1407e878c body=55 status=ok
// SIG undefined FUN_1407e878c(void)

void FUN_1407e878c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001407e87bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407e87c4 FUN_1407e87c4 body=93 status=ok
// SIG undefined FUN_1407e87c4(void)

void FUN_1407e87c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b129070;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1407e8822 FUN_1407e8822 body=112 status=ok
// SIG undefined FUN_1407e8822(void)

undefined8 FUN_1407e8822(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1407e8892();
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    if (ABS(*(double *)(lVar2 + 0x6d0) - (double)*(float *)(param_1 + 0x4380)) <=
        (double)*(float *)(lVar1 + 0x124)) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x4380) = 0;
  }
  return 0;
}



// FUNCTION 1407e8892 FUN_1407e8892 body=258 status=ok
// SIG undefined FUN_1407e8892(void)

longlong * FUN_1407e8892(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbc5a48 == (longlong *)0x0) {
    memset(&DAT_14cbc5a50,0,0x1b0);
    FUN_145d39048(&DAT_14cbc5a50);
    DAT_14cbc5a48 = (longlong *)&DAT_14cbc5a50;
  }
  plVar1 = DAT_14cbc5a48;
  plVar3 = DAT_14cbc5a48 + 1;
  if ((char)DAT_14cbc5a48[2] == '\0') {
LAB_1407e88be:
    if (*plVar3 == 0) goto LAB_1407e892a;
    cVar2 = FUN_1449e3c20(DAT_14cbc5a48);
    if (cVar2 == '\0') goto LAB_1407e88d4;
  }
  else {
    if ((char)DAT_14cbc5a48[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1407e88be;
    }
LAB_1407e892a:
    if (DAT_14c9a17d8 == (longlong *)0x0) goto LAB_1407e88d4;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1446ddda2(&local_38,"def_globals_oak_challenges",0);
    if (DAT_14c9a17d8 != (longlong *)0x0) {
      (**(code **)(*DAT_14c9a17d8 + 0x2a0))(DAT_14c9a17d8,plVar1,&local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1407e88d4:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e8995 FUN_1407e8995 body=35 status=ok
// SIG undefined FUN_1407e8995(void)

void FUN_1407e8995(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1407e89b8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14abb2e50;
  return;
}



// FUNCTION 1407e89b8 FUN_1407e89b8 body=236 status=ok
// SIG undefined FUN_1407e89b8(void)

undefined8 * FUN_1407e89b8(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a78f560;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x7fffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  lVar6 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    puVar1 = param_1 + 7;
    uVar3 = *(undefined4 *)(DAT_14cb0d2b0 + 0x1e4);
    uVar4 = *(undefined4 *)(DAT_14cb0d2b0 + 0x1e8);
    uVar5 = *(undefined4 *)(DAT_14cb0d2b0 + 0x1ec);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(DAT_14cb0d2b0 + 0x1e0);
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
    *(undefined4 *)(param_1 + 6) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
    if (puVar1 != (undefined8 *)(lVar6 + 0x1f0)) {
      iVar2 = *(int *)(lVar6 + 0x1f8);
      _Src = *(void **)(lVar6 + 0x1f0);
      *(int *)(param_1 + 8) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x44) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407e8aa4 FUN_1407e8aa4 body=581 status=ok
// SIG undefined FUN_1407e8aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e8aa4(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  if ((char)param_1[0x80] != '\x01') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca9f334) && (FUN_144b3d300(&DAT_14ca9f334), DAT_14ca9f334 == -1)) {
    _DAT_14ca9f320 = (undefined1  [16])0x0;
    DAT_14ca9f330 = 0;
    _Init_thread_footer(&DAT_14ca9f334);
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if (DAT_14ca9f330 == param_1[5] && _DAT_14ca9f320 == *(undefined1 (*) [16])(param_1 + 1))
    goto LAB_1407e8b16;
    piVar3 = param_1 + 1;
  }
  else if (iVar1 == 1) {
    if (DAT_14ca9f330 != param_1[10] || _DAT_14ca9f320 != *(undefined1 (*) [16])(param_1 + 6)) {
      FUN_1407e8cea(param_1 + 6);
    }
    if (DAT_14ca9f330 != param_1[0x19] || _DAT_14ca9f320 != *(undefined1 (*) [16])(param_1 + 0x15))
    {
      FUN_1407e8cea(param_1 + 0x15);
    }
    if (DAT_14ca9f330 != param_1[0x1e] || _DAT_14ca9f320 != *(undefined1 (*) [16])(param_1 + 0x1a))
    {
      FUN_1407e8cea(param_1 + 0x1a);
    }
    if (DAT_14ca9f330 != param_1[0xf] || _DAT_14ca9f320 != *(undefined1 (*) [16])(param_1 + 0xb)) {
      FUN_1407e8cea(param_1 + 0xb);
    }
    if (DAT_14ca9f330 == param_1[0x14] && _DAT_14ca9f320 == *(undefined1 (*) [16])(param_1 + 0x10))
    goto LAB_1407e8b16;
    piVar3 = param_1 + 0x10;
  }
  else {
    if (((iVar1 != 2) || (cVar2 = FUN_144a7ebcb(), cVar2 == '\0')) ||
       (DAT_14ca9f330 == param_1[0x7a] && _DAT_14ca9f320 == *(undefined1 (*) [16])(param_1 + 0x76)))
    goto LAB_1407e8b16;
    piVar3 = param_1 + 0x76;
  }
  FUN_1407e8cea(piVar3);
LAB_1407e8b16:
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



// FUNCTION 1407e8cea FUN_1407e8cea body=108 status=ok
// SIG undefined FUN_1407e8cea(void)

ulonglong FUN_1407e8cea(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14ca9a668 == 0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0xffffffff;
    puVar1 = (undefined8 *)FUN_1404d2d58(DAT_14ca9a668,param_1);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),puVar1 != (undefined8 *)0x0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)(*(longlong *)*puVar1 + 0x78))((longlong *)*puVar1,local_14);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e8d66 FUN_1407e8d66 body=143 status=ok
// SIG undefined FUN_1407e8d66(void)

undefined8 * FUN_1407e8d66(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407e8df6 FUN_1407e8df6 body=10 status=ok
// SIG undefined FUN_1407e8df6(void)

void FUN_1407e8df6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001407e8df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5f0))();
  return;
}



// FUNCTION 1407e8e04 FUN_1407e8e04 body=93 status=ok
// SIG undefined FUN_1407e8e04(void)

void FUN_1407e8e04(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2814) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2814) = 0;
    if (*(void **)((longlong)param_1 + 0x2800) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x2800),
              (longlong)*(int *)((longlong)param_1 + 0x2810) * 0x140);
      FUN_1446efa72((longlong)param_1 + 0x2800,0,0,0x140);
      return;
    }
  }
  return;
}



// FUNCTION 1407e8e62 FUN_1407e8e62 body=326 status=ok
// SIG undefined FUN_1407e8e62(void)

void FUN_1407e8e62(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x2810);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x21) {
    *(undefined4 *)((longlong)param_1 + 0x2814) = 0x20;
    _Src = *(void **)((longlong)param_1 + 0x2800);
joined_r0x0001407e8f6a:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x140);
    param_2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1;
    if (0x20 < *(uint *)((longlong)param_1 + 0x2814)) {
      lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar2 * 0x140,0);
    uVar3 = uVar3 / 0x140;
    uVar4 = (uint)uVar3;
    if ((int)uVar4 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x2814) = 0x7fffffff;
      uVar3 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x2800);
    }
    else {
      *(uint *)((longlong)param_1 + 0x2814) = uVar4;
      _Src = *(void **)((longlong)param_1 + 0x2800);
      if (uVar4 < 0x21) goto joined_r0x0001407e8f6a;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x2800,0,uVar3,0x140);
      memmove(*(void **)((longlong)param_1 + 0x2800),param_1,(longlong)param_2 * 0x140);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x2800,param_2,uVar3,0x140);
  return;
}



// FUNCTION 1407e8fa8 FUN_1407e8fa8 body=526 status=ok
// SIG undefined FUN_1407e8fa8(void)

longlong * FUN_1407e8fa8(longlong param_1,longlong *param_2,uint param_3,uint param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  uint local_60;
  uint uStack_5c;
  uint *local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)(param_1 + 0x168);
  local_60 = param_4;
  uStack_5c = param_3;
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar8 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x1b0) - 1U & (param_3 ^ param_4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar8 = *plVar3 + (longlong)iVar7 * 0x20;
        if (*(longlong *)(*plVar3 + (longlong)iVar7 * 0x20) == CONCAT44(param_3,param_4)) {
          if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
            lVar6 = *(longlong *)(lVar8 + 8);
            *param_2 = lVar6;
            lVar8 = *(longlong *)(lVar8 + 0x10);
            param_2[1] = lVar8;
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
              lVar6 = *param_2;
            }
            if (*(int *)(lVar6 + 0x40) == param_5) {
              *(undefined1 *)(lVar6 + 0x12) = 1;
              *(undefined4 *)(lVar6 + 0x14) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 0x5674);
              goto LAB_1407e9112;
            }
            FUN_1407cb4e2(plVar3,CONCAT44(param_3,param_4));
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
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar8 + 0x18);
      } while (iVar7 != -1);
    }
  }
  uVar4 = *(undefined4 *)
           (*(longlong *)(param_1 + 0x210) + 0x5224 +
           (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x210) + 0x52f0) * 4);
  plVar5 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a329730;
  FUN_140900fd8(plVar5 + 2,uVar4,param_5);
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
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
  }
  lVar8 = *param_2;
  *(undefined1 *)(lVar8 + 0x12) = 1;
  *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 0x5674);
  local_58 = &local_60;
  local_50 = param_2;
  FUN_140b2f52e(plVar3,local_44,&local_58,0);
LAB_1407e9112:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407e91c0 FUN_1407e91c0 body=728 status=ok
// SIG undefined FUN_1407e91c0(void)

undefined8 FUN_1407e91c0(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58 [2];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar4 = 0;
    goto LAB_1407e91f4;
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_1400b22c2(local_58,*(undefined8 *)(pbVar1 + 8));
  FUN_1403de9f2(local_58,&local_48,&DAT_149e0635c,1);
  uVar4 = DAT_14c948618;
  iVar6 = (int)uStack_40;
  if ((int)uStack_40 < 2) {
    *(undefined4 *)(param_1 + 1) = DAT_14c948620;
    *param_1 = uVar4;
LAB_1407e9316:
    local_60 = DAT_14c948620;
    local_68 = DAT_14c948618;
    iVar3 = (int)uStack_40;
  }
  else {
    if (*(int *)(local_48 + 0x18) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(local_48 + 0x10);
    }
    bVar2 = (int)uStack_40 < 5;
    FUN_1446f470e(&local_70,puVar8,1);
    local_30 = local_70;
    FUN_1401533ba(&local_68,&local_30,1);
    *(undefined4 *)(param_1 + 1) = local_60;
    *param_1 = local_68;
    if ((int)uStack_40 < 3 || bVar2) goto LAB_1407e9316;
    if (*(int *)(local_48 + 0x28) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(local_48 + 0x20);
    }
    FUN_1446f470e(&local_78,puVar8,1);
    local_30 = local_78;
    FUN_1401533ba(&local_68,&local_30,1);
    iVar3 = (int)uStack_40;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = local_60;
  *(undefined8 *)((longlong)param_1 + 0xc) = local_68;
  uVar5 = 4 < iVar6 | 2;
  if ((int)uVar5 < iVar3) {
    uVar7 = (ulonglong)(uVar5 << 4);
    if (*(int *)(local_48 + 8 + uVar7) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(local_48 + uVar7);
    }
    FUN_1446f470e(&local_80,puVar8,1);
    local_30 = local_80;
    FUN_1401533ba(&local_68,&local_30,1);
    iVar3 = (int)uStack_40;
  }
  else {
    local_60 = DAT_14c948620;
    local_68 = DAT_14c948618;
  }
  *(undefined4 *)(param_1 + 4) = local_60;
  param_1[3] = local_68;
  iVar6 = (4 < iVar6) + 3;
  if (iVar6 < iVar3) {
    uVar7 = (ulonglong)(uint)(iVar6 * 0x10);
    if (*(int *)(local_48 + 8 + uVar7) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(local_48 + uVar7);
    }
    FUN_1446f470e(&local_88,puVar8,1);
    local_30 = local_88;
    FUN_1401533ba(&local_68,&local_30,1);
  }
  else {
    local_60 = DAT_14c948620;
    local_68 = DAT_14c948618;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_60;
  *(undefined8 *)((longlong)param_1 + 0x24) = local_68;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
LAB_1407e91f4:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407e949a FUN_1407e949a body=9991 status=ok
// SIG undefined FUN_1407e949a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e949a(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  float *pfVar3;
  ushort uVar4;
  ushort uVar5;
  byte *pbVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  short sVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  char *pcVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined **ppuVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined1 uVar27;
  short sVar28;
  undefined2 uVar29;
  longlong lVar30;
  char *pcVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong *plVar34;
  int iVar35;
  longlong lVar36;
  uint *puVar37;
  longlong lVar38;
  longlong lVar39;
  longlong *plVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lVar44;
  bool bVar45;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong local_218;
  ulonglong local_210;
  longlong *local_208;
  byte local_1f9;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  uint *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  longlong *local_1a8;
  longlong *local_1a0;
  byte *local_198;
  undefined4 *local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  ulonglong local_170;
  ulonglong local_168;
  uint local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong *local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  uint local_c8;
  float fStack_c4;
  float fStack_c0;
  char cStack_bc;
  char cStack_bb;
  undefined2 uStack_ba;
  longlong local_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_218 = param_1;
  if (*(int *)(param_2 + 0x44) != *(int *)(param_2 + 0x40)) {
    FUN_144837e54(param_2,0);
    plVar24 = *(longlong **)(param_2 + 0x30);
    if (plVar24 == (longlong *)0x0) {
      plVar24 = DAT_14cb7f838;
      if (DAT_14cb7f838 == (longlong *)0x0) {
        plVar24 = (longlong *)FUN_140595974(0x2a00,0);
        lVar38 = 0x1f;
        plVar19 = plVar24;
        do {
          plVar40 = plVar19 + 0x2a;
          *plVar19 = (longlong)plVar40;
          lVar38 = lVar38 + -1;
          plVar19 = plVar40;
        } while (lVar38 != 0);
        *plVar40 = (longlong)DAT_14cb7f838;
        _DAT_14cb7f840 = _DAT_14cb7f840 + 0x20;
      }
      DAT_14cb7f838 = (longlong *)*plVar24;
      _DAT_14cb7f844 = _DAT_14cb7f844 + 1;
      plVar24[1] = 0;
      *(undefined1 *)(plVar24 + 2) = 0;
      *plVar24 = (longlong)&PTR_FUN_14b056c30;
      plVar24[0x11] = 0;
      *(undefined4 *)(plVar24 + 0x12) = 0;
      plVar24[3] = 0;
      plVar24[4] = 0;
      plVar24[5] = 0;
      plVar24[6] = 0;
      plVar24[7] = 0;
      plVar24[8] = 0;
      plVar24[9] = 0;
      plVar24[10] = 0;
      plVar24[0xb] = 0;
      plVar24[0xc] = 0;
      plVar24[0xd] = 0;
      plVar24[0xe] = 0;
      *(undefined8 *)((longlong)plVar24 + 0x94) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar24 + 0x9c) = 0;
      plVar24[0x15] = 0;
      *(undefined4 *)(plVar24 + 0x16) = 0;
      plVar24[0x1b] = 0;
      *(undefined4 *)(plVar24 + 0x1c) = 0;
      plVar24[0x17] = 0;
      plVar24[0x18] = 0;
      *(undefined8 *)((longlong)plVar24 + 0xe4) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar24 + 0xec) = 0;
      plVar24[0x1f] = 0;
      *(undefined4 *)(plVar24 + 0x20) = 0;
      plVar24[0x29] = 0;
      plVar24[0x27] = 0;
      plVar24[0x28] = 0;
      plVar24[0x25] = 0;
      plVar24[0x26] = 0;
      plVar24[0x23] = 0;
      plVar24[0x24] = 0;
      plVar24[0x21] = 0;
      plVar24[0x22] = 0;
      *(longlong **)(param_2 + 0x30) = plVar24;
      if ((param_2 != 0) && (plVar24 != (longlong *)0x0)) {
        FUN_1407d81de(plVar24 + 1,param_2);
        plVar24 = *(longlong **)(param_2 + 0x30);
      }
    }
    if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44)) {
      uVar14 = (**(code **)(*plVar24 + 8))(plVar24);
      FUN_144a34c66(param_2 + 0x48,plVar24,uVar14,1);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
    }
  }
  puVar37 = (uint *)(param_2 + 0x80);
  uVar12 = *(uint *)(param_2 + 0x98);
  uVar32 = (ulonglong)uVar12;
  if (uVar12 == 0) {
    uVar42 = 1;
    uVar43 = 0;
    uVar20 = 0;
    iVar35 = 0;
  }
  else {
    puVar15 = *(uint **)(param_2 + 0x90);
    if (*(uint **)(param_2 + 0x90) == (uint *)0x0) {
      puVar15 = puVar37;
    }
    uVar20 = *puVar15;
    if (uVar20 == 0) {
      iVar35 = uVar12 + 0x1e;
      if (-1 < (int)(uVar12 - 1)) {
        iVar35 = uVar12 - 1;
      }
      uVar43 = 0;
      uVar42 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar42 = uVar43;
      }
      iVar35 = 0;
      do {
        if (uVar42 == uVar43) goto LAB_1407eaaf1;
        iVar35 = iVar35 + 0x20;
        uVar20 = puVar15[uVar43 + 1];
        uVar43 = uVar43 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar43 = 0;
      iVar35 = 0;
    }
    uVar42 = (ulonglong)(-uVar20 & uVar20);
    uVar2 = uVar42 * 2 + 1;
    lVar38 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar38 == 0; lVar38 = lVar38 + -1) {
      }
    }
    uVar20 = (iVar35 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
    if ((int)uVar12 <= (int)uVar20) {
      uVar20 = uVar12;
    }
  }
  if (uVar20 == uVar12) {
LAB_1407eaaf1:
    FUN_140220358(param_2);
    if ((local_80 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar33 = 0xffffffff;
  local_1d8 = puVar37;
  local_1c0 = uVar32;
LAB_1407e95f0:
  lVar38 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x10 + (longlong)(int)uVar20 * 0x20);
  if ((lVar38 != 0) && (*(int *)(lVar38 + 0x44) != *(int *)(lVar38 + 0x40))) {
    local_1e0 = lVar38;
    FUN_144837e54(lVar38,0);
    if (*(char *)(local_1e0 + 0x2a) == '\0') {
      plVar24 = *(longlong **)(local_1e0 + 0x30);
      if (plVar24 == (longlong *)0x0) {
        puVar16 = (undefined8 *)FUN_1407ebc1c();
        puVar16[1] = 0;
        *(undefined1 *)(puVar16 + 2) = 0;
        *puVar16 = &PTR_FUN_14b056c10;
        puVar16[8] = 0;
        puVar16[3] = 0;
        puVar16[4] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        *(undefined2 *)(puVar16 + 7) = 0;
        *(undefined8 **)(local_1e0 + 0x30) = puVar16;
        FUN_1400f0d6e(local_218,local_1e0,0);
        plVar24 = *(longlong **)(local_1e0 + 0x30);
      }
      if (*(int *)(local_1e0 + 0x40) == *(int *)(local_1e0 + 0x44)) goto LAB_1407e9628;
      plVar19 = (longlong *)(local_1e0 + 0x48);
      local_208 = plVar24;
      local_1b0 = uVar33;
      local_1ac = iVar35;
      local_170 = uVar42;
      local_168 = uVar43;
      FUN_1407ebbb6(plVar24,plVar19);
      pbVar6 = *(byte **)(local_1e0 + 0x48);
      if ((pbVar6 != (byte *)0x0) && ((~*pbVar6 & 3) == 0)) {
        lVar38 = *(longlong *)(pbVar6 + 8);
        uStack_130 = CONCAT44(uStack_130._4_4_,DAT_14cb7f7c0);
        local_138 = DAT_14cb7f7b8;
        FUN_1448075d0(&local_c8,&local_138);
        lVar39 = lStack_b0;
        if (*(int *)(lVar38 + 0x28) != *(int *)(lVar38 + 0x54)) {
          lVar41 = lVar38 + 0x58;
          if (*(longlong *)(lVar38 + 0x60) != 0) {
            lVar41 = *(longlong *)(lVar38 + 0x60);
          }
          iVar35 = *(int *)(lVar41 + (ulonglong)(*(int *)(lVar38 + 0x68) - 1U & local_c8) * 4);
          if (iVar35 != -1) {
            do {
              if (*(uint *)(*(longlong *)(lVar38 + 0x18) + (longlong)iVar35 * 0x40) == local_c8) {
                if (lStack_b0 != 0) {
                  FUN_1400020a8();
                }
                uStack_130 = CONCAT44(uStack_130._4_4_,DAT_14cb7f7c0);
                local_138 = DAT_14cb7f7b8;
                FUN_1448075d0(&local_c8,&local_138);
                pbVar6 = (byte *)*plVar19;
                puVar16 = &DAT_14c9a1308;
                if (pbVar6 == (byte *)0x0) goto LAB_1407ea7f9;
                plVar24 = &DAT_14c9a1288;
                if ((*pbVar6 & 2) != 0) {
                  plVar24 = (longlong *)(*(longlong *)(pbVar6 + 8) + 0x18);
                }
                puVar16 = &DAT_14c9a1308;
                if ((int)plVar24[2] == *(int *)((longlong)plVar24 + 0x3c)) goto LAB_1407ea7f9;
                plVar40 = plVar24 + 8;
                if ((longlong *)plVar24[9] != (longlong *)0x0) {
                  plVar40 = (longlong *)plVar24[9];
                }
                iVar35 = *(int *)((longlong)plVar40 +
                                 (ulonglong)((int)plVar24[10] - 1U & local_c8) * 4);
                puVar16 = &DAT_14c9a1308;
                if (iVar35 == -1) goto LAB_1407ea7f9;
                goto LAB_1407ea77a;
              }
              iVar35 = *(int *)((longlong)iVar35 * 0x40 + *(longlong *)(lVar38 + 0x18) + 0x38);
            } while (iVar35 != -1);
          }
        }
        goto LAB_1407e97cc;
      }
      goto LAB_1407e97da;
    }
    goto LAB_1407e9628;
  }
  goto LAB_1407e9637;
  while (iVar35 = *(int *)(lVar38 + 0x38), iVar35 != -1) {
LAB_1407ea77a:
    lVar38 = *plVar24 + (longlong)iVar35 * 0x40;
    if (*(uint *)(*plVar24 + (longlong)iVar35 * 0x40) == local_c8) {
      puVar16 = &DAT_14c9a1308;
      if (lVar38 == 0) goto LAB_1407ea7f9;
      puVar25 = (undefined8 *)(lVar38 + 0x28);
      puVar16 = &DAT_14c9a1308;
      if ((puVar25 == (undefined8 *)0x0) ||
         (((byte *)*puVar25 != (byte *)0x0 && (puVar16 = puVar25, (*(byte *)*puVar25 & 0x40) == 0)))
         ) goto LAB_1407ea7f9;
      break;
    }
  }
  puVar16 = &DAT_14c9a1308;
LAB_1407ea7f9:
  pbVar6 = (byte *)*puVar16;
  local_1d0 = &DAT_14c9a1270;
  if ((pbVar6 != (byte *)0x0) && (local_1d0 = &DAT_14c9a1270, (*pbVar6 & 2) != 0)) {
    local_1d0 = *(longlong **)(pbVar6 + 8);
  }
  if (lStack_b0 != 0) {
    FUN_1400020a8();
  }
  if ((int)local_1d0[2] == (int)local_208[4]) {
    lVar38 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    FUN_1400b22c2(&local_160,&DAT_14b407826);
    uStack_130 = CONCAT44(uStack_130._4_4_,DAT_14cb7f7d8);
    local_138 = DAT_14cb7f7d0;
    FUN_1448075d0(&local_c8,&local_138);
    pbVar6 = *(byte **)(param_2 + 0x48);
    puVar16 = &DAT_14c9a1308;
    if (pbVar6 != (byte *)0x0) {
      plVar24 = &DAT_14c9a1288;
      if ((*pbVar6 & 2) != 0) {
        plVar24 = (longlong *)(*(longlong *)(pbVar6 + 8) + 0x18);
      }
      puVar16 = &DAT_14c9a1308;
      if ((int)plVar24[2] != *(int *)((longlong)plVar24 + 0x3c)) {
        plVar40 = plVar24 + 8;
        if ((longlong *)plVar24[9] != (longlong *)0x0) {
          plVar40 = (longlong *)plVar24[9];
        }
        iVar35 = *(int *)((longlong)plVar40 + (ulonglong)((int)plVar24[10] - 1U & local_c8) * 4);
        puVar16 = &DAT_14c9a1308;
        if (iVar35 != -1) {
          do {
            lVar39 = *plVar24 + (longlong)iVar35 * 0x40;
            if (*(uint *)(*plVar24 + (longlong)iVar35 * 0x40) == local_c8) {
              puVar16 = &DAT_14c9a1308;
              if (lVar39 == 0) goto LAB_1407ea8b5;
              puVar25 = (undefined8 *)(lVar39 + 0x28);
              puVar16 = &DAT_14c9a1308;
              if ((puVar25 == (undefined8 *)0x0) ||
                 (((byte *)*puVar25 != (byte *)0x0 &&
                  (puVar16 = puVar25, (*(byte *)*puVar25 & 0x40) == 0)))) goto LAB_1407ea8b5;
              break;
            }
            iVar35 = *(int *)(lVar39 + 0x38);
          } while (iVar35 != -1);
          puVar16 = &DAT_14c9a1308;
        }
      }
    }
LAB_1407ea8b5:
    if (lStack_b0 != 0) {
      FUN_1400020a8();
    }
    pbVar6 = (byte *)*puVar16;
    if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 3) != 0)) {
      if ((*pbVar6 & 3) == 1) {
        uVar14 = *(undefined8 *)(pbVar6 + 8);
      }
      else {
        uVar14 = 0;
      }
      FUN_1400b22c2(&local_c8,uVar14);
      if (CONCAT44(fStack_15c,local_160) != 0) {
        FUN_1400020a8();
      }
      local_160 = local_c8;
      fStack_15c = fStack_c4;
      fStack_158 = fStack_c0;
      uStack_154 = CONCAT22(uStack_ba,CONCAT11(cStack_bb,cStack_bc));
    }
    local_228 = local_1d0;
    FUN_1407ec20c(local_208,&local_160);
    puVar16 = &DAT_14c9a1308;
    if (*plVar19 != 0) {
      puVar16 = (undefined8 *)FUN_1446e60f4(*plVar19,&DAT_14cb7f830);
    }
    local_190 = (undefined4 *)(lVar38 + 0xc7c);
    local_198 = (byte *)(lVar38 + 0xc80);
    local_1b8 = *local_190;
    local_1f9 = *local_198;
    if ((local_1f9 & 1) != 0) {
      *local_198 = 0;
      *local_190 = 0;
    }
    local_118 = (longlong *)0x0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_188 = param_2;
    if (((byte *)*puVar16 != (byte *)0x0) && ((*(byte *)*puVar16 & 3) != 0)) {
      FUN_1407ebf34();
      FUN_144a34c66(puVar16,&local_138);
    }
    lVar39 = local_138;
    local_148 = 0;
    uStack_140 = 0;
    lVar38 = *(longlong *)(local_218 + 0x3c0);
    iVar35 = *(int *)(local_218 + 0x3c8);
    uVar32 = (ulonglong)iVar35;
    if (uVar32 != 0) {
      iVar13 = (int)uStack_130;
      lVar41 = 0;
      iVar21 = 0;
      do {
        if ((*(int *)(lVar38 + 8 + lVar41) == iVar13) &&
           (cVar11 = FUN_1407ebf6d(*(undefined8 *)(lVar38 + lVar41),lVar39), cVar11 != '\0')) {
          if (iVar21 != 1) {
            uVar32 = (ulonglong)(uint)-iVar21;
            goto LAB_1407ea9f0;
          }
          break;
        }
        iVar21 = iVar21 + -1;
        lVar41 = lVar41 + 0x10;
      } while (uVar32 << 4 != lVar41);
    }
    *(uint *)(local_218 + 0x3c8) = iVar35 + 1U;
    if (*(uint *)(local_218 + 0x3cc) < iVar35 + 1U) {
      plVar24 = (longlong *)(local_218 + 0x3c0);
      FUN_1459dec26(plVar24,iVar35);
      lVar38 = *plVar24;
    }
    lVar39 = uVar32 * 0x10;
    *(undefined8 *)(lVar38 + lVar39) = 0;
    *(longlong *)(lVar38 + lVar39) = local_138;
    local_138 = 0;
    *(int *)(lVar38 + 8 + lVar39) = (int)uStack_130;
    *(undefined4 *)(lVar38 + 0xc + lVar39) = uStack_130._4_4_;
    uStack_130 = 0;
LAB_1407ea9f0:
    lVar39 = local_128;
    local_150 = CONCAT22(local_150._2_2_,(short)uVar32);
    lVar38 = *(longlong *)(local_218 + 0x3d0);
    iVar35 = *(int *)(local_218 + 0x3d8);
    uVar32 = (ulonglong)iVar35;
    if (uVar32 != 0) {
      iVar13 = (int)uStack_120;
      lVar41 = 0;
      iVar21 = 0;
      do {
        if ((*(int *)(lVar38 + 8 + lVar41) == iVar13) &&
           (cVar11 = FUN_1407ebebe(*(undefined8 *)(lVar38 + lVar41),lVar39), cVar11 != '\0')) {
          if (iVar21 != 1) {
            uVar32 = (ulonglong)(uint)-iVar21;
            goto LAB_1407eaa66;
          }
          break;
        }
        iVar21 = iVar21 + -1;
        lVar41 = lVar41 + 0x10;
      } while (uVar32 << 4 != lVar41);
    }
    *(uint *)(local_218 + 0x3d8) = iVar35 + 1U;
    if (*(uint *)(local_218 + 0x3dc) < iVar35 + 1U) {
      plVar24 = (longlong *)(local_218 + 0x3d0);
      FUN_1459decac(plVar24,iVar35);
      lVar38 = *plVar24;
    }
    lVar39 = uVar32 * 0x10;
    *(undefined8 *)(lVar38 + lVar39) = 0;
    *(longlong *)(lVar38 + lVar39) = local_128;
    local_128 = 0;
    *(int *)(lVar38 + 8 + lVar39) = (int)uStack_120;
    *(undefined4 *)(lVar38 + 0xc + lVar39) = uStack_120._4_4_;
    uStack_120 = 0;
LAB_1407eaa66:
    uVar43 = uStack_110;
    uVar42 = uStack_140;
    local_150 = CONCAT22((short)uVar32,(short)local_150);
    iVar35 = (int)uStack_140;
    lVar38 = (longlong)(int)uStack_140;
    uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_140 + (uint)uStack_110);
    if ((uint)(uStack_140._4_4_ - iVar35) < (uint)uStack_110) {
      FUN_1407ec09a(&local_148,uVar42 & 0xffffffff);
    }
    FUN_1407ebe0b(lVar38 * 0x18 + local_148,uVar43 & 0xffffffff);
    if ((longlong)(int)(uint)uStack_110 != 0) {
      local_1c8 = local_118 + (longlong)(int)(uint)uStack_110 * 3;
      local_1f8 = (longlong *)(local_218 + 0x3e0);
      uVar32 = 0;
      plVar24 = local_118;
      do {
        plVar19 = (longlong *)(local_148 + uVar32 * 0x18);
        *(int *)(plVar19 + 2) = (int)plVar24[2];
        uVar12 = *(uint *)(plVar24 + 1);
        iVar35 = (int)plVar19[1];
        *(uint *)(plVar19 + 1) = iVar35 + uVar12;
        local_210 = uVar32;
        if ((uint)(*(int *)((longlong)plVar19 + 0xc) - iVar35) < uVar12) {
          FUN_1407ebcaa(plVar19,iVar35);
        }
        FUN_1407ebba2((longlong)iVar35 * 4 + *plVar19,uVar12);
        local_1e8 = plVar24;
        if ((longlong)(int)plVar24[1] != 0) {
          lVar38 = *plVar24;
          lVar41 = (longlong)(int)plVar24[1] * 0x30 + lVar38;
          lVar39 = 0;
          do {
            lVar44 = *plVar19;
            uVar14 = *(undefined8 *)(lVar38 + 0x28);
            lVar36 = *(longlong *)(local_218 + 0x3e0);
            iVar35 = *(int *)(local_218 + 1000);
            lVar30 = (longlong)iVar35;
            if (lVar30 != 0) {
              lVar17 = lVar30 * 8;
              lVar26 = 0;
              do {
                if ((*(int *)(lVar36 + lVar26 * 8) == *(int *)(lVar38 + 0x28)) &&
                   (*(int *)(lVar36 + 4 + lVar26 * 8) == *(int *)(lVar38 + 0x2c))) {
                  iVar13 = (int)lVar26;
                  if (iVar13 != -1) goto LAB_1407e98cb;
                  break;
                }
                lVar26 = lVar26 + 1;
                lVar17 = lVar17 + -8;
              } while (lVar17 != 0);
            }
            *(uint *)(local_218 + 1000) = iVar35 + 1U;
            if (*(uint *)(local_218 + 0x3ec) < iVar35 + 1U) {
              FUN_1459deba2(local_1f8,iVar35);
              lVar36 = *local_1f8;
            }
            *(undefined8 *)(lVar36 + lVar30 * 8) = uVar14;
            iVar13 = iVar35;
LAB_1407e98cb:
            *(short *)(lVar44 + 2 + lVar39 * 4) = (short)iVar13;
            if ((longlong)(int)local_208[4] != 0) {
              lVar36 = local_208[3];
              lVar30 = (longlong)(int)local_208[4] * 0x60;
              sVar28 = 0;
              do {
                lVar17 = FUN_14494f566(lVar38);
                if (lVar36 == lVar17) {
                  *(short *)(lVar44 + lVar39 * 4) = sVar28;
                  break;
                }
                sVar28 = sVar28 + 1;
                lVar36 = lVar36 + 0x60;
                lVar30 = lVar30 + -0x60;
              } while (lVar30 != 0);
            }
            lVar39 = lVar39 + 1;
            lVar38 = lVar38 + 0x30;
          } while (lVar38 != lVar41);
        }
        uVar32 = local_210 + 1;
        plVar24 = local_1e8 + 3;
      } while (plVar24 != local_1c8);
    }
    lVar39 = local_148;
    lVar38 = *(longlong *)(local_218 + 0x3b0);
    iVar35 = *(int *)(local_218 + 0x3b8);
    lVar41 = (longlong)iVar35;
    if (lVar41 != 0) {
      sVar28 = (short)local_150;
      sVar10 = local_150._2_2_;
      iVar13 = (int)uStack_140;
      uVar42 = uStack_140 & 0xffffffff;
      uVar32 = 0;
      do {
        if ((((*(short *)(lVar38 + uVar32) == sVar28) && (*(short *)(lVar38 + 2 + uVar32) == sVar10)
             ) && (*(int *)(lVar38 + 0x10 + uVar32) == iVar13)) &&
           (cVar11 = FUN_1407ebe25(*(undefined8 *)(lVar38 + 8 + uVar32),lVar39), cVar11 != '\0')) {
          iVar13 = (int)(uVar32 >> 3) * -0x55555555;
          if (iVar13 != -1) goto LAB_1407e99de;
          break;
        }
        uVar32 = uVar32 + 0x18;
      } while (lVar41 * 0x18 != uVar32);
    }
    *(uint *)(local_218 + 0x3b8) = iVar35 + 1U;
    if (*(uint *)(local_218 + 0x3bc) < iVar35 + 1U) {
      plVar24 = (longlong *)(local_218 + 0x3b0);
      FUN_1459deffa(plVar24,iVar35);
      lVar38 = *plVar24;
    }
    *(undefined4 *)(lVar38 + lVar41 * 0x18) = local_150;
    uVar42 = 0;
    *(undefined8 *)(lVar38 + 8 + lVar41 * 0x18) = 0;
    *(longlong *)(lVar38 + 8 + lVar41 * 0x18) = local_148;
    local_148 = 0;
    *(int *)(lVar38 + 0x10 + lVar41 * 0x18) = (int)uStack_140;
    *(int *)(lVar38 + 0x14 + lVar41 * 0x18) = uStack_140._4_4_;
    uStack_140 = 0;
    iVar13 = iVar35;
LAB_1407e99de:
    *(short *)(local_208 + 7) = (short)iVar13;
    uVar32 = local_1c0;
    puVar37 = local_1d8;
    if ((longlong)(int)local_208[4] != 0) {
      plVar24 = (longlong *)local_208[3];
      plVar40 = plVar24 + (longlong)(int)local_208[4] * 0xc;
      local_1a8 = (longlong *)(local_218 + 0x350);
      local_1a0 = (longlong *)(local_218 + 0x3a0);
      iVar35 = 0;
      plVar19 = local_1d0;
      local_178 = plVar40;
      do {
        plVar34 = (longlong *)*plVar19;
        pbVar6 = (byte *)plVar34[(longlong)iVar35 * 2];
        if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 3) != 0)) {
          local_1b4 = iVar35;
          puVar16 = (undefined8 *)FUN_1446e60f4(pbVar6,&DAT_14cb7f800);
          if (((byte *)*puVar16 == (byte *)0x0) || ((*(byte *)*puVar16 & 3) == 0)) {
            uVar29 = 0;
          }
          else {
            local_c8 = local_c8 & 0xffffff00;
            fStack_c0 = 0.0;
            cStack_bc = '\0';
            cStack_bb = '\0';
            uStack_ba = 0;
            local_b8 = 0;
            lStack_b0 = 0;
            lStack_a8 = 0;
            local_a0 = 0;
            local_98 = 1.0;
            fStack_94 = (float)CONCAT31(fStack_94._1_3_,1);
            uStack_90 = 0x3f800000;
            local_1f8 = plVar24;
            local_1f0 = plVar34;
            uVar14 = FUN_1407ec060();
            FUN_1446e7478(puVar16,&local_c8,uVar14);
            pcVar18 = *(char **)(local_218 + 0x340);
            uVar12 = *(uint *)(local_218 + 0x348);
            local_208 = (longlong *)(longlong)(int)uVar12;
            lVar38 = (longlong)local_208 * 0x40;
            if (local_208 != (longlong *)0x0) {
              pcVar31 = pcVar18;
              do {
                if (((*pcVar31 == (char)local_c8) && (pcVar31[0x34] == fStack_94._0_1_)) &&
                   ((*(longlong *)(pcVar31 + 0x10) == local_b8 &&
                    (*(longlong *)(pcVar31 + 0x18) == lStack_b0)))) {
                  if (*(int *)(pcVar31 + 0x28) == (int)local_a0) {
                    if (1 < (int)local_a0) {
                      local_1e8 = *(longlong **)(pcVar31 + 0x20);
                      lVar39 = 0;
                      while( true ) {
                        uVar4 = *(ushort *)((longlong)local_1e8 + lVar39);
                        uVar5 = *(ushort *)(lStack_a8 + lVar39);
                        if (uVar4 != uVar5) break;
                        if (uVar4 == 0) goto LAB_1407ea5d0;
LAB_1407ea61a:
                        lVar39 = lVar39 + 2;
                      }
                      if ((uVar5 | uVar4) < 0x80) {
                        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5])
                        goto LAB_1407ea61a;
                        iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar4] -
                                 (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
                      }
                      else {
                        iVar13 = (uint)uVar4 - (uint)uVar5;
                      }
                      if (iVar13 != 0) goto LAB_1407ea5a6;
                    }
                  }
                  else if (*(int *)(pcVar31 + 0x28) + (int)local_a0 != 1) goto LAB_1407ea5a6;
LAB_1407ea5d0:
                  if ((ABS(*(float *)(pcVar31 + 0x30) - local_98) <= 1e-05) &&
                     (ABS(*(float *)(pcVar31 + 0x38) - (float)uStack_90) <= 1e-05)) {
                    uVar32 = (ulonglong)((longlong)pcVar31 - (longlong)pcVar18) >> 6;
                    if ((int)uVar32 != -1) goto LAB_1407ea65f;
                    break;
                  }
                }
LAB_1407ea5a6:
                pcVar31 = pcVar31 + 0x40;
              } while (pcVar31 != pcVar18 + lVar38);
            }
            *(uint *)(local_218 + 0x348) = uVar12 + 1;
            if (*(uint *)(local_218 + 0x34c) < uVar12 + 1) {
              puVar16 = (undefined8 *)(local_218 + 0x340);
              FUN_1459ded32(puVar16);
              pcVar18 = (char *)*puVar16;
            }
            pcVar18[lVar38] = (char)local_c8;
            *(ulonglong *)(pcVar18 + lVar38 + 8) =
                 CONCAT26(uStack_ba,CONCAT15(cStack_bb,CONCAT14(cStack_bc,fStack_c0)));
            *(longlong *)(pcVar18 + lVar38 + 0x10) = local_b8;
            *(longlong *)((longlong)(pcVar18 + lVar38 + 0x10) + 8) = lStack_b0;
            pcVar31 = pcVar18 + lVar38 + 0x20;
            pcVar31[0] = '\0';
            pcVar31[1] = '\0';
            pcVar31[2] = '\0';
            pcVar31[3] = '\0';
            pcVar31[4] = '\0';
            pcVar31[5] = '\0';
            pcVar31[6] = '\0';
            pcVar31[7] = '\0';
            *(longlong *)(pcVar18 + lVar38 + 0x20) = lStack_a8;
            lStack_a8 = 0;
            *(int *)(pcVar18 + lVar38 + 0x28) = (int)local_a0;
            *(undefined4 *)(pcVar18 + lVar38 + 0x2c) = local_a0._4_4_;
            local_a0 = 0;
            pfVar3 = (float *)(pcVar18 + lVar38 + 0x30);
            *pfVar3 = local_98;
            pfVar3[1] = fStack_94;
            pfVar3[2] = (float)uStack_90;
            pfVar3[3] = uStack_90._4_4_;
            uVar32 = (ulonglong)uVar12;
LAB_1407ea65f:
            uVar29 = (undefined2)uVar32;
            plVar34 = local_1f0;
            puVar37 = local_1d8;
            plVar24 = local_1f8;
            if (lStack_a8 != 0) {
              FUN_1400020a8();
              plVar34 = local_1f0;
              puVar37 = local_1d8;
              plVar24 = local_1f8;
            }
          }
          plVar34 = plVar34 + (longlong)iVar35 * 2;
          *(undefined2 *)(plVar24 + 5) = uVar29;
          puVar16 = &DAT_14c9a1308;
          if (*plVar34 != 0) {
            puVar16 = (undefined8 *)FUN_1446e60f4(*plVar34,&DAT_14cb7f810);
          }
          if ((byte *)*puVar16 == (byte *)0x0) {
            uVar29 = 0;
          }
          else {
            local_1f8 = plVar24;
            local_1f0 = plVar34;
            if ((*(byte *)*puVar16 & 3) == 0) {
              iVar35 = 0;
            }
            else {
              local_e8 = 0;
              plStack_e0 = (longlong *)0x0;
              local_d8 = 0;
              uVar14 = FUN_14043db3a();
              FUN_140205d94(&local_c8,puVar16,uVar14);
              local_1c8 = (longlong *)CONCAT44(fStack_c4,local_c8);
              uVar14 = FUN_14477b664(CONCAT26(uStack_ba,
                                              CONCAT15(cStack_bb,CONCAT14(cStack_bc,fStack_c0))));
              uVar14 = FUN_14477b664(uVar14);
              local_180 = local_b8;
              uVar14 = FUN_14477b664(uVar14);
              local_208 = (longlong *)FUN_14477b664(uVar14);
              if ((longlong)*(int *)(local_218 + 0x358) != 0) {
                lVar38 = *(longlong *)(local_218 + 0x350);
                local_1e8 = (longlong *)((longlong)*(int *)(local_218 + 0x358) * 0x18);
                plVar24 = (longlong *)0x0;
                do {
                  if (*(longlong *)(lVar38 + 8 + (longlong)plVar24) == 0) {
                    uVar14 = FUN_14043db3a();
                    uVar14 = FUN_14477b664(uVar14);
                    *(undefined8 *)(lVar38 + 8 + (longlong)plVar24) = uVar14;
                  }
                  plVar19 = local_208;
                  if ((local_208 == (longlong *)0x0) &&
                     (plVar19 = (longlong *)FUN_14043db3a(), plVar19 == (longlong *)0x0)) {
                    plVar19 = (longlong *)0x0;
                    local_210 = CONCAT44(local_210._4_4_,1);
LAB_1407eb776:
                    iVar35 = 0;
                  }
                  else {
                    uVar32 = (ulonglong)*(uint *)(plVar19 + 1);
                    if ((*(uint *)(plVar19 + 1) & 0x809f600) != 0) {
LAB_1407eb76e:
                      local_210 = CONCAT44(local_210._4_4_,(int)CONCAT71((int7)(uVar32 >> 8),1));
                      plVar19 = (longlong *)0x0;
                      goto LAB_1407eb776;
                    }
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14c949388) &&
                       (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
                      FUN_1446f470e(&local_c8,L"GbxHasStructType",1);
                      DAT_14c949380 = FUN_141473ad5(CONCAT44(fStack_c4,local_c8));
                      _Init_thread_footer(&DAT_14c949388);
                    }
                    uVar32 = DAT_14c949380;
                    if ((((DAT_14c949380 == 0) || ((int)plVar19[7] < *(int *)(DAT_14c949380 + 0x38))
                         ) || (uVar32 = DAT_14c949380 + 0x30,
                              *(ulonglong *)
                               (plVar19[6] + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) != uVar32
                              )) ||
                       (plVar40 = (longlong *)plVar19[0x17], plVar40 == (longlong *)0x0))
                    goto LAB_1407eb76e;
                    lVar39 = *plVar40;
                    pcVar7 = *(code **)(lVar39 + 0x108);
                    if (pcVar7 != (code *)&LAB_14478342e && pcVar7 != (code *)&LAB_144783422) {
                      uVar32 = (*pcVar7)(plVar40);
                      if ((char)uVar32 == '\0') goto LAB_1407eb76e;
                      lVar39 = *plVar40;
                    }
                    pcVar7 = *(code **)(lVar39 + 0x110);
                    if ((pcVar7 != (code *)&LAB_144783432 && pcVar7 != (code *)&LAB_144783426) &&
                       (lVar39 = (*pcVar7)(plVar40), lVar39 == 0)) {
                      uVar32 = 0;
                      goto LAB_1407eb76e;
                    }
                    plVar40 = (longlong *)plVar19[0x17];
                    if (plVar40 == (longlong *)0x0) {
LAB_1407eba1c:
                      local_210 = local_210 & 0xffffffff00000000;
                      goto LAB_1407eb776;
                    }
                    lVar39 = *plVar40;
                    pcVar7 = *(code **)(lVar39 + 0x108);
                    if (pcVar7 != (code *)&LAB_14478342e && pcVar7 != (code *)&LAB_144783422) {
                      cVar11 = (*pcVar7)(plVar40);
                      if (cVar11 == '\0') goto LAB_1407eba1c;
                      lVar39 = *plVar40;
                    }
                    pcVar7 = *(code **)(lVar39 + 0x110);
                    ppuVar23 = &PTR_PTR_14c763408;
                    if ((pcVar7 != (code *)&LAB_144783426) &&
                       (ppuVar23 = &PTR_PTR_14c75f798, pcVar7 != (code *)&LAB_144783432)) {
                      ppuVar23 = (undefined **)(*pcVar7)(plVar40);
                    }
                    iVar35 = FUN_144aff48c(ppuVar23);
                    local_210 = local_210 & 0xffffffff00000000;
                  }
                  plVar40 = *(longlong **)(lVar38 + (longlong)plVar24);
                  plVar34 = *(longlong **)(lVar38 + 8 + (longlong)plVar24);
                  iVar13 = 0;
                  if ((plVar34 != (longlong *)0x0) &&
                     (plVar8 = (longlong *)plVar34[0x17], plVar8 != (longlong *)0x0)) {
                    lVar39 = *plVar8;
                    pcVar7 = *(code **)(lVar39 + 0x108);
                    if (pcVar7 != (code *)&LAB_14478342e && pcVar7 != (code *)&LAB_144783422) {
                      cVar11 = (*pcVar7)(plVar8);
                      iVar13 = 0;
                      if (cVar11 == '\0') goto LAB_1407e9d9d;
                      lVar39 = *plVar8;
                    }
                    pcVar7 = *(code **)(lVar39 + 0x110);
                    ppuVar23 = &PTR_PTR_14c763408;
                    if ((pcVar7 != (code *)&LAB_144783426) &&
                       (ppuVar23 = &PTR_PTR_14c75f798, pcVar7 != (code *)&LAB_144783432)) {
                      ppuVar23 = (undefined **)(*pcVar7)(plVar8);
                    }
                    iVar13 = FUN_144aff48c(ppuVar23);
                  }
LAB_1407e9d9d:
                  if ((iVar13 == iVar35) && (plVar40 == local_1c8)) {
                    if (plVar34 == plVar19) {
LAB_1407e9e67:
                      iVar35 = (int)((ulonglong)plVar24 >> 3) * -0x55555555;
                      if (iVar35 != -1) goto LAB_1407e9e7a;
                      break;
                    }
                    if ((char)local_210 == '\0' && plVar34 != (longlong *)0x0) {
                      iVar35 = (int)plVar19[7];
                      iVar13 = (int)plVar34[7];
                      if (((iVar35 <= iVar13) &&
                          (*(longlong **)(plVar34[6] + (longlong)iVar35 * 8) == plVar19 + 6)) ||
                         ((iVar13 <= iVar35 &&
                          (*(longlong **)(plVar19[6] + (longlong)iVar13 * 8) == plVar34 + 6))))
                      goto LAB_1407e9e67;
                    }
                  }
                  plVar24 = plVar24 + 3;
                } while (local_1e8 != plVar24);
              }
              iVar35 = *(int *)(local_218 + 0x358);
              *(uint *)(local_218 + 0x358) = iVar35 + 1U;
              if (*(uint *)(local_218 + 0x35c) < iVar35 + 1U) {
                FUN_1403633a6(local_1a8,iVar35);
              }
              lVar39 = (longlong)iVar35;
              lVar38 = *local_1a8;
              puVar16 = (undefined8 *)(lVar38 + 8 + lVar39 * 0x18);
              *puVar16 = 0;
              puVar16[1] = 0;
              *(longlong **)(lVar38 + lVar39 * 0x18) = local_1c8;
              uVar14 = FUN_14477b664(local_208);
              uVar14 = FUN_14477b664(uVar14);
              *(undefined8 *)(lVar38 + 8 + lVar39 * 0x18) = uVar14;
              *(longlong *)(lVar38 + 0x10 + lVar39 * 0x18) = local_180;
            }
LAB_1407e9e7a:
            uVar29 = (undefined2)iVar35;
            plVar34 = local_1f0;
            puVar37 = local_1d8;
            plVar24 = local_1f8;
          }
          *(undefined2 *)(plVar24 + 2) = uVar29;
          puVar16 = &DAT_14c9a1308;
          if (*plVar34 != 0) {
            puVar16 = (undefined8 *)FUN_1446e60f4(*plVar34,&DAT_14cb7f818);
          }
          if (((byte *)*puVar16 == (byte *)0x0) || ((*(byte *)*puVar16 & 3) == 0)) {
            uVar27 = 0;
          }
          else {
            local_e8 = 0;
            plStack_e0 = (longlong *)0x0;
            local_d8 = 0;
            uVar14 = FUN_14065b502();
            FUN_140205d94(&local_c8,puVar16,uVar14);
            uVar32 = CONCAT44(fStack_c4,local_c8);
            uVar14 = FUN_14477b664(CONCAT26(uStack_ba,
                                            CONCAT15(cStack_bb,CONCAT14(cStack_bc,fStack_c0))));
            uVar14 = FUN_14477b664(uVar14);
            lVar38 = local_b8;
            local_210 = uVar32;
            local_108 = uVar32;
            uVar14 = FUN_14477b664(uVar14);
            local_208 = (longlong *)FUN_14477b664(uVar14);
            local_f8 = lVar38;
            plStack_100 = local_208;
            if ((longlong)*(int *)(local_218 + 0x368) != 0) {
              lVar39 = *(longlong *)(local_218 + 0x360);
              local_1e8 = (longlong *)((longlong)*(int *)(local_218 + 0x368) * 0x18);
              plVar19 = (longlong *)0x0;
              local_1f8 = plVar24;
              local_1f0 = plVar34;
              local_f8 = lVar38;
              do {
                if (*(longlong *)(lVar39 + 8 + (longlong)plVar19) == 0) {
                  uVar14 = FUN_14065b502();
                  uVar14 = FUN_14477b664(uVar14);
                  *(undefined8 *)(lVar39 + 8 + (longlong)plVar19) = uVar14;
                }
                plVar24 = local_208;
                if (local_208 == (longlong *)0x0) {
                  plVar24 = (longlong *)FUN_14065b502(0);
                }
                lVar38 = FUN_14477b664(plVar24);
                iVar35 = 0;
                if ((lVar38 != 0) &&
                   (plVar24 = *(longlong **)(lVar38 + 0xb8), plVar24 != (longlong *)0x0)) {
                  lVar41 = *plVar24;
                  pcVar7 = *(code **)(lVar41 + 0x108);
                  if (pcVar7 != (code *)&LAB_14478342e && pcVar7 != (code *)&LAB_144783422) {
                    cVar11 = (*pcVar7)(plVar24);
                    iVar35 = 0;
                    if (cVar11 == '\0') goto LAB_1407ea12e;
                    lVar41 = *plVar24;
                  }
                  pcVar7 = *(code **)(lVar41 + 0x110);
                  ppuVar23 = &PTR_PTR_14c763408;
                  if ((pcVar7 != (code *)&LAB_144783426) &&
                     (ppuVar23 = &PTR_PTR_14c75f798, pcVar7 != (code *)&LAB_144783432)) {
                    ppuVar23 = (undefined **)(*pcVar7)(plVar24);
                  }
                  iVar35 = FUN_144aff48c(ppuVar23);
                }
LAB_1407ea12e:
                uVar32 = *(ulonglong *)(lVar39 + (longlong)plVar19);
                lVar41 = *(longlong *)(lVar39 + 8 + (longlong)plVar19);
                iVar13 = 0;
                if ((lVar41 != 0) &&
                   (plVar24 = *(longlong **)(lVar41 + 0xb8), iVar13 = 0, plVar24 != (longlong *)0x0)
                   ) {
                  lVar44 = *plVar24;
                  pcVar7 = *(code **)(lVar44 + 0x108);
                  if (pcVar7 != (code *)&LAB_14478342e && pcVar7 != (code *)&LAB_144783422) {
                    cVar11 = (*pcVar7)(plVar24);
                    if (cVar11 == '\0') goto LAB_1407ea197;
                    lVar44 = *plVar24;
                  }
                  pcVar7 = *(code **)(lVar44 + 0x110);
                  ppuVar23 = &PTR_PTR_14c763408;
                  if ((pcVar7 != (code *)&LAB_144783426) &&
                     (ppuVar23 = &PTR_PTR_14c75f798, pcVar7 != (code *)&LAB_144783432)) {
                    ppuVar23 = (undefined **)(*pcVar7)(plVar24);
                  }
                  iVar13 = FUN_144aff48c(ppuVar23);
                }
LAB_1407ea197:
                plVar34 = local_1f0;
                plVar24 = local_1f8;
                if ((iVar13 == iVar35) && (uVar32 == local_210)) {
                  if (lVar41 == lVar38) {
LAB_1407eb8b1:
                    iVar35 = (int)((ulonglong)plVar19 >> 3) * -0x55555555;
                    if (iVar35 != -1) goto LAB_1407eb8cb;
                    break;
                  }
                  if ((lVar38 != 0) && (lVar41 != 0)) {
                    iVar35 = *(int *)(lVar38 + 0x38);
                    iVar13 = *(int *)(lVar41 + 0x38);
                    if (((iVar35 <= iVar13) &&
                        (*(longlong *)(*(longlong *)(lVar41 + 0x30) + (longlong)iVar35 * 8) ==
                         lVar38 + 0x30)) ||
                       ((iVar13 <= iVar35 &&
                        (*(longlong *)(*(longlong *)(lVar38 + 0x30) + (longlong)iVar13 * 8) ==
                         lVar41 + 0x30)))) goto LAB_1407eb8b1;
                  }
                }
                plVar19 = plVar19 + 3;
              } while (local_1e8 != plVar19);
            }
            plVar19 = (longlong *)(local_218 + 0x360);
            iVar35 = *(int *)(local_218 + 0x368);
            *(uint *)(local_218 + 0x368) = iVar35 + 1U;
            if (*(uint *)(local_218 + 0x36c) < iVar35 + 1U) {
              FUN_1459dee3e(plVar19,iVar35);
            }
            FUN_1457483fa((longlong)iVar35 * 0x18 + *plVar19,&local_108);
LAB_1407eb8cb:
            uVar27 = (undefined1)iVar35;
            puVar37 = local_1d8;
          }
          *(undefined1 *)((longlong)plVar24 + 0x12) = uVar27;
          puVar16 = &DAT_14c9a1308;
          if (*plVar34 != 0) {
            puVar16 = (undefined8 *)FUN_1446e60f4(*plVar34,&DAT_14cb7f808);
          }
          if (((byte *)*puVar16 == (byte *)0x0) || ((*(byte *)*puVar16 & 3) == 0)) {
            uVar27 = 0;
          }
          else {
            local_e8 = 0;
            plStack_e0 = (longlong *)0x0;
            local_d8 = 0;
            uVar14 = FUN_1407ad36c();
            FUN_140205d94(&local_c8,puVar16,uVar14);
            uVar32 = CONCAT44(fStack_c4,local_c8);
            uVar14 = FUN_14477b664(CONCAT26(uStack_ba,
                                            CONCAT15(cStack_bb,CONCAT14(cStack_bc,fStack_c0))));
            uVar14 = FUN_14477b664(uVar14);
            lVar38 = local_b8;
            local_210 = uVar32;
            local_108 = uVar32;
            uVar14 = FUN_14477b664(uVar14);
            local_208 = (longlong *)FUN_14477b664(uVar14);
            local_f8 = lVar38;
            plStack_100 = local_208;
            if ((longlong)*(int *)(local_218 + 0x378) != 0) {
              lVar39 = *(longlong *)(local_218 + 0x370);
              local_1e8 = (longlong *)((longlong)*(int *)(local_218 + 0x378) * 0x18);
              plVar19 = (longlong *)0x0;
              local_1f8 = plVar24;
              local_1f0 = plVar34;
              local_f8 = lVar38;
              do {
                if (*(longlong *)(lVar39 + 8 + (longlong)plVar19) == 0) {
                  uVar14 = FUN_1407ad36c();
                  uVar14 = FUN_14477b664(uVar14);
                  *(undefined8 *)(lVar39 + 8 + (longlong)plVar19) = uVar14;
                }
                plVar24 = local_208;
                if (local_208 == (longlong *)0x0) {
                  plVar24 = (longlong *)FUN_1407ad36c(0);
                }
                lVar38 = FUN_14477b664(plVar24);
                iVar35 = 0;
                if ((lVar38 != 0) &&
                   (plVar24 = *(longlong **)(lVar38 + 0xb8), plVar24 != (longlong *)0x0)) {
                  lVar41 = *plVar24;
                  pcVar7 = *(code **)(lVar41 + 0x108);
                  if (pcVar7 != (code *)&LAB_14478342e && pcVar7 != (code *)&LAB_144783422) {
                    cVar11 = (*pcVar7)(plVar24);
                    iVar35 = 0;
                    if (cVar11 == '\0') goto LAB_1407ea2dd;
                    lVar41 = *plVar24;
                  }
                  pcVar7 = *(code **)(lVar41 + 0x110);
                  ppuVar23 = &PTR_PTR_14c763408;
                  if ((pcVar7 != (code *)&LAB_144783426) &&
                     (ppuVar23 = &PTR_PTR_14c75f798, pcVar7 != (code *)&LAB_144783432)) {
                    ppuVar23 = (undefined **)(*pcVar7)(plVar24);
                  }
                  iVar35 = FUN_144aff48c(ppuVar23);
                }
LAB_1407ea2dd:
                uVar32 = *(ulonglong *)(lVar39 + (longlong)plVar19);
                lVar41 = *(longlong *)(lVar39 + 8 + (longlong)plVar19);
                iVar13 = 0;
                if ((lVar41 != 0) &&
                   (plVar24 = *(longlong **)(lVar41 + 0xb8), iVar13 = 0, plVar24 != (longlong *)0x0)
                   ) {
                  lVar44 = *plVar24;
                  pcVar7 = *(code **)(lVar44 + 0x108);
                  if (pcVar7 != (code *)&LAB_14478342e && pcVar7 != (code *)&LAB_144783422) {
                    cVar11 = (*pcVar7)(plVar24);
                    if (cVar11 == '\0') goto LAB_1407ea346;
                    lVar44 = *plVar24;
                  }
                  pcVar7 = *(code **)(lVar44 + 0x110);
                  ppuVar23 = &PTR_PTR_14c763408;
                  if ((pcVar7 != (code *)&LAB_144783426) &&
                     (ppuVar23 = &PTR_PTR_14c75f798, pcVar7 != (code *)&LAB_144783432)) {
                    ppuVar23 = (undefined **)(*pcVar7)(plVar24);
                  }
                  iVar13 = FUN_144aff48c(ppuVar23);
                }
LAB_1407ea346:
                plVar34 = local_1f0;
                plVar24 = local_1f8;
                if ((iVar13 == iVar35) && (uVar32 == local_210)) {
                  if (lVar41 == lVar38) {
LAB_1407eb9ac:
                    iVar35 = (int)((ulonglong)plVar19 >> 3) * -0x55555555;
                    if (iVar35 != -1) goto LAB_1407eb9c6;
                    break;
                  }
                  if ((lVar38 != 0) && (lVar41 != 0)) {
                    iVar35 = *(int *)(lVar38 + 0x38);
                    iVar13 = *(int *)(lVar41 + 0x38);
                    if (((iVar35 <= iVar13) &&
                        (*(longlong *)(*(longlong *)(lVar41 + 0x30) + (longlong)iVar35 * 8) ==
                         lVar38 + 0x30)) ||
                       ((iVar13 <= iVar35 &&
                        (*(longlong *)(*(longlong *)(lVar38 + 0x30) + (longlong)iVar13 * 8) ==
                         lVar41 + 0x30)))) goto LAB_1407eb9ac;
                  }
                }
                plVar19 = plVar19 + 3;
              } while (local_1e8 != plVar19);
            }
            plVar19 = (longlong *)(local_218 + 0x370);
            iVar35 = *(int *)(local_218 + 0x378);
            *(uint *)(local_218 + 0x378) = iVar35 + 1U;
            if (*(uint *)(local_218 + 0x37c) < iVar35 + 1U) {
              FUN_1459deed2(plVar19,iVar35);
            }
            FUN_145748442((longlong)iVar35 * 0x18 + *plVar19,&local_108);
LAB_1407eb9c6:
            uVar27 = (undefined1)iVar35;
            puVar37 = local_1d8;
          }
          *(undefined1 *)((longlong)plVar24 + 0x13) = uVar27;
          puVar16 = &DAT_14c9a1308;
          if (*plVar34 != 0) {
            puVar16 = (undefined8 *)FUN_1446e60f4(*plVar34,&DAT_14cb7f820);
          }
          if (((byte *)*puVar16 == (byte *)0x0) || ((*(byte *)*puVar16 & 3) == 0)) {
            uVar32 = 0;
          }
          else {
            local_c8 = local_c8 & 0xffffff00;
            fStack_c4 = 0.0;
            fStack_c0 = 0.0;
            cStack_bc = '\0';
            cStack_bb = '\0';
            uStack_ba = 0x3f40;
            FUN_1407ec026();
            FUN_1446e7478(puVar16,&local_c8);
            lVar38 = *(longlong *)(local_218 + 0x380);
            iVar35 = *(int *)(local_218 + 0x388);
            uVar32 = (ulonglong)iVar35;
            if (uVar32 != 0) {
              lVar39 = 0;
              iVar13 = 0;
              do {
                if (((*(char *)(lVar38 + lVar39) == (char)local_c8) &&
                    (*(longlong *)(lVar38 + 4 + lVar39) == CONCAT44(fStack_c0,fStack_c4))) &&
                   (ABS(*(float *)(lVar38 + 0xc + lVar39) -
                        (float)CONCAT22(uStack_ba,CONCAT11(cStack_bb,cStack_bc))) <= 1e-05)) {
                  if (iVar13 != 1) {
                    uVar32 = (ulonglong)(uint)-iVar13;
                    goto LAB_1407e9f2c;
                  }
                  break;
                }
                iVar13 = iVar13 + -1;
                lVar39 = lVar39 + 0x10;
              } while (uVar32 << 4 != lVar39);
            }
            *(uint *)(local_218 + 0x388) = iVar35 + 1U;
            if (*(uint *)(local_218 + 0x38c) < iVar35 + 1U) {
              plVar19 = (longlong *)(local_218 + 0x380);
              FUN_1459dedb8(plVar19,iVar35);
              lVar38 = *plVar19;
            }
            puVar15 = (uint *)(lVar38 + uVar32 * 0x10);
            *puVar15 = local_c8;
            puVar15[1] = (uint)fStack_c4;
            puVar15[2] = (uint)fStack_c0;
            puVar15[3] = CONCAT22(uStack_ba,CONCAT11(cStack_bb,cStack_bc));
          }
LAB_1407e9f2c:
          *(char *)((longlong)plVar24 + 0x2a) = (char)uVar32;
          puVar16 = &DAT_14c9a1308;
          if (*plVar34 != 0) {
            puVar16 = (undefined8 *)FUN_1446e60f4(*plVar34,&DAT_14cb7f828);
          }
          if (((byte *)*puVar16 == (byte *)0x0) || ((*(byte *)*puVar16 & 3) == 0)) {
            uVar27 = 0;
          }
          else {
            local_108 = 0;
            plStack_100 = (longlong *)0x0;
            local_f8 = 0;
            local_b8 = 0;
            local_c8 = 0;
            fStack_c4 = 0.0;
            fStack_c0 = 0.0;
            cStack_bc = 0;
            cStack_bb = 0;
            uStack_ba = 0;
            uVar14 = FUN_1407ec996();
            FUN_140005cc6(puVar16,&local_c8,uVar14);
            lVar39 = FUN_1400014c6(&local_c8);
            lVar38 = CONCAT44(fStack_c4,local_c8);
            uVar14 = 0;
            if (lVar38 == 0) {
LAB_1407ebaab:
              plStack_e0 = (longlong *)0x0;
              bVar9 = true;
              local_e8 = uVar14;
            }
            else {
              uVar14 = FUN_1407ec996();
              cVar11 = FUN_1448093f4(lVar38,uVar14);
              if (cVar11 == '\0') {
                uVar14 = 0;
                goto LAB_1407ebaab;
              }
              uVar14 = CONCAT44(fStack_c4,local_c8);
              plStack_e0 = (longlong *)
                           CONCAT26(uStack_ba,CONCAT15(cStack_bb,CONCAT14(cStack_bc,fStack_c0)));
              if (plStack_e0 == (longlong *)0x0) goto LAB_1407ebaab;
              LOCK();
              *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
              UNLOCK();
              bVar9 = false;
              local_e8 = uVar14;
            }
            plVar19 = plStack_e0;
            if (lVar39 == 0) {
              local_d8._0_4_ = 0;
              iVar35 = 0;
              uVar12 = (uint)local_d8;
            }
            else {
              uVar12 = *(uint *)(lVar39 + 0xc);
              local_d8 = (ulonglong)uVar12;
              if ((int)uVar12 < DAT_14c9647dc) {
                lVar38 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
              }
              else {
                lVar38 = 0;
              }
              iVar35 = *(int *)(lVar38 + 0x10);
              if (*(int *)(lVar38 + 0x10) == 0) {
                LOCK();
                iVar35 = DAT_14c964868 + 1;
                UNLOCK();
                iVar13 = DAT_14c964868 + 1;
                bVar45 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar35;
                if (bVar45) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                iVar35 = *(int *)(lVar38 + 0x10);
                bVar45 = iVar35 == 0;
                if (bVar45) {
                  *(int *)(lVar38 + 0x10) = iVar13;
                  iVar35 = 0;
                }
                UNLOCK();
                uVar12 = (uint)local_d8;
                if (bVar45) {
                  iVar35 = iVar13;
                }
              }
            }
            local_d8._0_4_ = uVar12;
            local_d8 = CONCAT44(iVar35,(uint)local_d8);
            FUN_14029d0b6(&local_108,&local_e8);
            plVar40 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar8 = plStack_e0 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar40 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar40 + 0x10))(plVar40);
                }
              }
            }
            if (!bVar9) {
              LOCK();
              plVar40 = plVar19 + 1;
              *(int *)plVar40 = (int)*plVar40 + -1;
              UNLOCK();
              if ((int)*plVar40 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
            plVar19 = (longlong *)
                      CONCAT26(uStack_ba,CONCAT15(cStack_bb,CONCAT14(cStack_bc,fStack_c0)));
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar40 = plVar19 + 1;
              *(int *)plVar40 = (int)*plVar40 + -1;
              UNLOCK();
              if ((int)*plVar40 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
            if ((longlong)*(int *)(local_218 + 0x398) != 0) {
              lVar38 = *(longlong *)(local_218 + 0x390);
              local_208 = (longlong *)(lVar38 + (longlong)*(int *)(local_218 + 0x398) * 0x18);
              uVar32 = 0;
              do {
                if (*(longlong *)(lVar38 + uVar32) == 0 && local_108 == 0) {
LAB_1407eb4a5:
                  iVar35 = (int)(uVar32 >> 3) * -0x55555555;
                  if (iVar35 != -1) goto LAB_1407eb4b8;
                  break;
                }
                lVar39 = lVar38 + 0x10 + uVar32;
                iVar35 = *(int *)(lVar39 + 4);
                if (((iVar35 != 0) && (uVar12 = *(uint *)(lVar38 + 0x10 + uVar32), -1 < (int)uVar12)
                    ) && (((int)uVar12 < DAT_14c9647dc &&
                          ((((plVar19 = (longlong *)
                                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                             plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar35)) &&
                            ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) &&
                           (lVar41 = *plVar19, lVar41 != 0)))))) {
                  lVar44 = 0;
                  lVar36 = lVar41;
                  if ((*(uint *)(plVar19 + 1) & 0x10200000) != 0) {
                    lVar36 = 0;
                  }
                  if (local_f8._4_4_ != 0) {
                    if ((int)(uint)local_f8 < 0) {
LAB_1407eb78c:
                      lVar44 = 0;
                    }
                    else {
                      lVar44 = 0;
                      if ((int)(uint)local_f8 < DAT_14c9647dc) {
                        plVar40 = (longlong *)
                                  ((ulonglong)(((uint)local_f8 & 0xffff) * 0x18) +
                                  *(longlong *)
                                   (DAT_14c9647c8 + (ulonglong)((uint)local_f8 >> 0x10) * 8));
                        if (((plVar40 == (longlong *)0x0) || ((int)plVar40[2] != local_f8._4_4_)) ||
                           ((*(uint *)(plVar40 + 1) & 0x10200000) != 0)) goto LAB_1407eb78c;
                        lVar44 = *plVar40;
                      }
                    }
                  }
                  if (lVar36 == lVar44) {
                    if ((*(uint *)(plVar19 + 1) & 0x10200000) != 0) {
                      lVar41 = 0;
                    }
                    cVar11 = FUN_14470ec92(lVar41);
                    if (cVar11 != '\0') goto LAB_1407eb4a5;
                  }
                }
                uVar32 = uVar32 + 0x18;
              } while ((longlong *)(lVar39 + 8) != local_208);
            }
            plVar19 = (longlong *)(local_218 + 0x390);
            iVar35 = *(int *)(local_218 + 0x398);
            *(uint *)(local_218 + 0x398) = iVar35 + 1U;
            if (*(uint *)(local_218 + 0x39c) < iVar35 + 1U) {
              FUN_1459def66(plVar19,iVar35);
            }
            FUN_140c13cc0((longlong)iVar35 * 0x18 + *plVar19,&local_108);
LAB_1407eb4b8:
            plVar19 = plStack_100;
            uVar27 = (undefined1)iVar35;
            puVar37 = local_1d8;
            if (plStack_100 != (longlong *)0x0) {
              LOCK();
              plVar40 = plStack_100 + 1;
              *(int *)plVar40 = (int)*plVar40 + -1;
              UNLOCK();
              if ((int)*plVar40 == 0) {
                (**(code **)*plStack_100)(plStack_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                puVar37 = local_1d8;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                  puVar37 = local_1d8;
                }
              }
            }
          }
          *(undefined1 *)((longlong)plVar24 + 0x2b) = uVar27;
          local_c8 = 0xffffffff;
          fStack_c4 = 0.0;
          fStack_c0 = 1.0;
          cStack_bc = '\0';
          cStack_bb = '\0';
          uVar14 = FUN_1407ebc70();
          FUN_144a34c66(plVar34,&local_c8,uVar14);
          plVar19 = local_1a0;
          lVar38 = *(longlong *)(local_218 + 0x3a0);
          iVar35 = *(int *)(local_218 + 0x3a8);
          uVar32 = (ulonglong)iVar35;
          if (uVar32 != 0) {
            lVar39 = 0;
            iVar13 = 0;
            do {
              if (((*(uint *)(lVar38 + lVar39) == local_c8) &&
                  (*(char *)(lVar38 + 0xc + lVar39) == cStack_bc)) &&
                 ((*(char *)(lVar38 + 0xd + lVar39) == cStack_bb &&
                  ((ABS(*(float *)(lVar38 + 8 + lVar39) - fStack_c0) <= 1e-05 &&
                   (ABS(*(float *)(lVar38 + 4 + lVar39) - fStack_c4) <= 1e-05)))))) {
                if (iVar13 != 1) {
                  uVar32 = (ulonglong)(uint)-iVar13;
                  goto LAB_1407ea066;
                }
                break;
              }
              iVar13 = iVar13 + -1;
              lVar39 = lVar39 + 0x10;
            } while (uVar32 << 4 != lVar39);
          }
          *(uint *)(local_218 + 0x3a8) = iVar35 + 1U;
          if (*(uint *)(local_218 + 0x3ac) < iVar35 + 1U) {
            FUN_1459deb1c(local_1a0,iVar35);
            lVar38 = *plVar19;
          }
          puVar15 = (uint *)(lVar38 + uVar32 * 0x10);
          *puVar15 = local_c8;
          puVar15[1] = (uint)fStack_c4;
          puVar15[2] = (uint)fStack_c0;
          puVar15[3] = CONCAT22(uStack_ba,CONCAT11(cStack_bb,cStack_bc));
LAB_1407ea066:
          *(char *)((longlong)plVar24 + 0x2c) = (char)uVar32;
          iVar35 = local_1b4 + 1;
          plVar19 = local_1d0;
          plVar40 = local_178;
          uVar32 = local_1c0;
        }
        plVar24 = plVar24 + 0xc;
      } while (plVar24 != plVar40);
      uVar42 = uStack_140 & 0xffffffff;
    }
    FUN_140df641b(local_148,uVar42);
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    FUN_1400e1c41(local_118,uStack_110 & 0xffffffff);
    param_2 = local_188;
    if (local_118 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    FUN_1400e1c6c(local_138,uStack_130 & 0xffffffff);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if ((local_1f9 & 1) != 0) {
      *local_190 = local_1b8;
      *local_198 = 1;
    }
    lVar39 = CONCAT44(fStack_15c,local_160);
LAB_1407e97cc:
    if (lVar39 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1407e97da:
  *(undefined4 *)(local_1e0 + 0x40) = *(undefined4 *)(local_1e0 + 0x44);
  uVar42 = local_170;
  uVar43 = local_168;
  iVar35 = local_1ac;
  uVar33 = local_1b0;
LAB_1407e9628:
  FUN_140220358(local_1e0);
  uVar12 = *(uint *)(param_2 + 0x98);
LAB_1407e9637:
  uVar33 = uVar33 & ~(uint)uVar42;
  puVar15 = *(uint **)(param_2 + 0x90);
  if (*(uint **)(param_2 + 0x90) == (uint *)0x0) {
    puVar15 = puVar37;
  }
  iVar13 = (int)uVar43;
  lVar38 = (longlong)iVar13;
  uVar20 = puVar15[lVar38] & uVar33;
  if (uVar20 == 0) {
    iVar21 = uVar12 + 0x1e;
    if (-1 < (int)(uVar12 - 1)) {
      iVar21 = uVar12 - 1;
    }
    iVar21 = iVar21 >> 5;
    iVar35 = iVar35 + 0x20;
    iVar22 = iVar21;
    if (iVar21 < iVar13) {
      iVar22 = iVar13;
    }
    if (iVar13 < iVar21) {
      lVar39 = 0;
      do {
        uVar20 = puVar15[lVar38 + lVar39 + 1];
        if (uVar20 != 0) {
          uVar43 = (ulonglong)(iVar13 + (int)lVar39 + 1);
          uVar33 = 0xffffffff;
          goto LAB_1407e96a1;
        }
        iVar35 = iVar35 + 0x20;
        lVar39 = lVar39 + 1;
      } while (iVar22 - lVar38 != lVar39);
      uVar33 = 0xffffffff;
      iVar13 = iVar22;
    }
    uVar43 = (ulonglong)(iVar13 + 1);
    uVar32 = local_1c0;
    puVar37 = local_1d8;
    uVar20 = uVar12;
  }
  else {
LAB_1407e96a1:
    uVar42 = (ulonglong)(-uVar20 & uVar20);
    uVar2 = uVar42 * 2 + 1;
    lVar38 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar38 == 0; lVar38 = lVar38 + -1) {
      }
    }
    uVar20 = (iVar35 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
    if ((int)uVar12 <= (int)uVar20) {
      uVar20 = uVar12;
    }
  }
  if (uVar20 == (uint)uVar32) goto LAB_1407eaaf1;
  goto LAB_1407e95f0;
}



// FUNCTION 1407ebba2 FUN_1407ebba2 body=19 status=ok
// SIG undefined FUN_1407ebba2(void)

void FUN_1407ebba2(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 1407ebbb6 FUN_1407ebbb6 body=102 status=ok
// SIG undefined FUN_1407ebbb6(void)

void FUN_1407ebbb6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  param_1[5] = 0;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    param_1[6] = 0;
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
  uVar4 = (**(code **)(*param_1 + 8))(param_1);
  FUN_144a34c66(param_2,param_1,uVar4,1);
  return;
}



// FUNCTION 1407ebc1c FUN_1407ebc1c body=84 status=ok
// SIG undefined FUN_1407ebc1c(void)

void FUN_1407ebc1c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x900,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 9;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1407ebc70 FUN_1407ebc70 body=57 status=ok
// SIG undefined FUN_1407ebc70(void)

void FUN_1407ebc70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb571b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb571b0 = FUN_140002ddd(FUN_1464bba12,uVar1,L"GBXDialogLineRuntimeDataScalars");
  }
  return;
}



// FUNCTION 1407ebcaa FUN_1407ebcaa body=353 status=ok
// SIG undefined FUN_1407ebcaa(void)

void FUN_1407ebcaa(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407ebd2f;
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
LAB_1407ebd2f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,2);
  return;
}



// FUNCTION 1407ebe0b FUN_1407ebe0b body=26 status=ok
// SIG undefined FUN_1407ebe0b(void)

void FUN_1407ebe0b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1407ebe25 FUN_1407ebe25 body=101 status=ok
// SIG undefined FUN_1407ebe25(void)

ulonglong FUN_1407ebe25(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar3 = 0x10;
    do {
      if ((*(int *)(param_1 + lVar3) != *(int *)(param_2 + lVar3)) ||
         (*(int *)(param_1 + -8 + lVar3) != *(int *)(param_2 + -8 + lVar3))) {
LAB_1407ebe86:
        uVar2 = 0;
        break;
      }
      cVar1 = FUN_1407ebe8a(*(undefined8 *)(param_1 + -0x10 + lVar3),
                            *(undefined8 *)(param_2 + -0x10 + lVar3));
      if (cVar1 == '\0') goto LAB_1407ebe86;
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1407ebe8a FUN_1407ebe8a body=52 status=ok
// SIG undefined FUN_1407ebe8a(void)

undefined8 FUN_1407ebe8a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(short *)(param_1 + lVar1 * 4) != *(short *)(param_2 + lVar1 * 4)) ||
         (*(short *)(param_1 + 2 + lVar1 * 4) != *(short *)(param_2 + 2 + lVar1 * 4))) {
        return 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return 1;
}



// FUNCTION 1407ebebe FUN_1407ebebe body=118 status=ok
// SIG undefined FUN_1407ebebe(void)

undefined8 FUN_1407ebebe(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((((*(short *)(param_1 + lVar1) != *(short *)(param_2 + lVar1)) ||
           (*(short *)(param_1 + 2 + lVar1) != *(short *)(param_2 + 2 + lVar1))) ||
          (*(short *)(param_1 + 4 + lVar1) != *(short *)(param_2 + 4 + lVar1))) ||
         (((*(short *)(param_1 + 6 + lVar1) != *(short *)(param_2 + 6 + lVar1) ||
           (*(short *)(param_1 + 8 + lVar1) != *(short *)(param_2 + 8 + lVar1))) ||
          ((*(short *)(param_1 + 10 + lVar1) != *(short *)(param_2 + 10 + lVar1) ||
           (*(int *)(param_1 + 0xc + lVar1) != *(int *)(param_2 + 0xc + lVar1))))))) {
        return 0;
      }
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1407ebf34 FUN_1407ebf34 body=57 status=ok
// SIG undefined FUN_1407ebf34(void)

void FUN_1407ebf34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cb70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cb70 = FUN_140002ddd(FUN_1464d811e,uVar1,L"DialogDecisionTree");
  }
  return;
}



// FUNCTION 1407ebf6d FUN_1407ebf6d body=184 status=ok
// SIG undefined FUN_1407ebf6d(void)

undefined8 FUN_1407ebf6d(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
       (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10))) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == *(int *)(param_2 + 0x20)) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x18) + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x18) + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_1407ebfad;
LAB_1407ebfee:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_1407ebfee;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if (*(int *)(param_2 + 0x20) + iVar1 != 1) {
      return 0;
    }
LAB_1407ebfad:
    if (*(char *)(param_1 + 0x40) != *(char *)(param_2 + 0x40)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44)) {
      return 0;
    }
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 1407ec026 FUN_1407ec026 body=57 status=ok
// SIG undefined FUN_1407ec026(void)

void FUN_1407ec026(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57070 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57070 = FUN_140002ddd(FUN_1464bae50,uVar1,L"DialogMoodRef");
  }
  return;
}



// FUNCTION 1407ec060 FUN_1407ec060 body=57 status=ok
// SIG undefined FUN_1407ec060(void)

void FUN_1407ec060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57028 = FUN_140002ddd(FUN_1464bacf9,uVar1,L"DialogGestureRef");
  }
  return;
}



// FUNCTION 1407ec09a FUN_1407ec09a body=370 status=ok
// SIG undefined FUN_1407ec09a(void)

void FUN_1407ec09a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407ec123;
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
LAB_1407ec123:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1407ec20c FUN_1407ec20c body=1647 status=ok
// SIG undefined FUN_1407ec20c(void)

void FUN_1407ec20c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  void *_Src;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong local_110;
  undefined8 *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  void *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  uint local_90 [4];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar6 = (int)param_5[2];
  local_118 = param_4;
  local_110 = param_1;
  local_108 = param_2;
  local_100 = param_3;
  if ((0 < iVar6) && (iVar6 == *(int *)(param_1 + 0x20))) {
    lVar9 = 0;
    do {
      lVar1 = *param_5;
      if ((~**(byte **)(lVar1 + lVar9 * 0x10) & 3) == 0) {
        local_f8 = *(longlong *)(local_110 + 0x18);
        local_a8 = (void *)0x0;
        iStack_a0 = *(int *)(local_108 + 1);
        lVar10 = (longlong)iStack_a0;
        _Src = (void *)*local_108;
        local_f0 = lVar9;
        if (lVar10 == 0) {
          uStack_9c = 0;
        }
        else {
          FUN_1446dd670(&local_a8,iStack_a0,0);
          memcpy(local_a8,_Src,lVar10 * 2);
        }
        puVar11 = (undefined8 *)(lVar1 + lVar9 * 0x10);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,*(undefined4 *)(local_118 + 1));
        local_b8 = (void *)*local_118;
        FUN_1448075d0(local_90,&local_b8);
        pbVar2 = (byte *)*puVar11;
        puVar8 = &DAT_14c9a1308;
        if (pbVar2 != (byte *)0x0) {
          plVar4 = &DAT_14c9a1288;
          if ((*pbVar2 & 2) != 0) {
            plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          puVar8 = &DAT_14c9a1308;
          if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
            plVar7 = plVar4 + 8;
            if ((longlong *)plVar4[9] != (longlong *)0x0) {
              plVar7 = (longlong *)plVar4[9];
            }
            iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & local_90[0]) * 4)
            ;
            puVar8 = &DAT_14c9a1308;
            if (iVar6 != -1) {
              do {
                lVar9 = *plVar4 + (longlong)iVar6 * 0x40;
                if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == local_90[0]) {
                  puVar8 = &DAT_14c9a1308;
                  if (lVar9 == 0) goto LAB_1407ec3ea;
                  puVar5 = (undefined8 *)(lVar9 + 0x28);
                  puVar8 = &DAT_14c9a1308;
                  if ((puVar5 == (undefined8 *)0x0) ||
                     (((byte *)*puVar5 != (byte *)0x0 &&
                      (puVar8 = puVar5, (*(byte *)*puVar5 & 0x40) == 0)))) goto LAB_1407ec3ea;
                  break;
                }
                iVar6 = *(int *)(lVar9 + 0x38);
              } while (iVar6 != -1);
              puVar8 = &DAT_14c9a1308;
            }
          }
        }
LAB_1407ec3ea:
        if ((byte *)*puVar8 == (byte *)0x0) {
          bVar12 = false;
        }
        else {
          bVar12 = (*(byte *)*puVar8 & 3) != 0;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (bVar12) {
          uStack_b0 = CONCAT44(uStack_b0._4_4_,*(undefined4 *)(local_118 + 1));
          local_b8 = (void *)*local_118;
          FUN_1448075d0(local_90,&local_b8);
          pbVar2 = (byte *)*puVar11;
          puVar8 = &DAT_14c9a1308;
          if (pbVar2 != (byte *)0x0) {
            plVar4 = &DAT_14c9a1288;
            if ((*pbVar2 & 2) != 0) {
              plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
            }
            puVar8 = &DAT_14c9a1308;
            if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
              plVar7 = plVar4 + 8;
              if ((longlong *)plVar4[9] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar4[9];
              }
              iVar6 = *(int *)((longlong)plVar7 +
                              (ulonglong)((int)plVar4[10] - 1U & local_90[0]) * 4);
              puVar8 = &DAT_14c9a1308;
              if (iVar6 != -1) {
                do {
                  lVar9 = *plVar4 + (longlong)iVar6 * 0x40;
                  if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == local_90[0]) {
                    puVar8 = &DAT_14c9a1308;
                    if (lVar9 == 0) goto LAB_1407ec7e0;
                    puVar5 = (undefined8 *)(lVar9 + 0x28);
                    puVar8 = &DAT_14c9a1308;
                    if ((puVar5 == (undefined8 *)0x0) ||
                       (((byte *)*puVar5 != (byte *)0x0 &&
                        (puVar8 = puVar5, (*(byte *)*puVar5 & 0x40) == 0)))) goto LAB_1407ec7e0;
                    break;
                  }
                  iVar6 = *(int *)(lVar9 + 0x38);
                } while (iVar6 != -1);
                puVar8 = &DAT_14c9a1308;
              }
            }
          }
LAB_1407ec7e0:
          pbVar2 = (byte *)*puVar8;
          if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(pbVar2 + 8);
          }
          FUN_1400b22c2(&local_b8,uVar3);
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
          iStack_a0 = (int)uStack_b0;
          uStack_9c = uStack_b0._4_4_;
          local_a8 = local_b8;
          local_b8 = (void *)0x0;
          uStack_b0 = 0;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)local_100[1]);
        local_b8 = (void *)*local_100;
        FUN_1448075d0(local_90,&local_b8);
        pbVar2 = (byte *)*puVar11;
        puVar8 = &DAT_14c9a1308;
        if (pbVar2 != (byte *)0x0) {
          plVar4 = &DAT_14c9a1288;
          if ((*pbVar2 & 2) != 0) {
            plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          puVar8 = &DAT_14c9a1308;
          if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
            plVar7 = plVar4 + 8;
            if ((longlong *)plVar4[9] != (longlong *)0x0) {
              plVar7 = (longlong *)plVar4[9];
            }
            iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & local_90[0]) * 4)
            ;
            puVar8 = &DAT_14c9a1308;
            if (iVar6 != -1) {
              do {
                lVar9 = *plVar4 + (longlong)iVar6 * 0x40;
                if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == local_90[0]) {
                  puVar8 = &DAT_14c9a1308;
                  if (lVar9 == 0) goto LAB_1407ec4d7;
                  puVar11 = (undefined8 *)(lVar9 + 0x28);
                  puVar8 = &DAT_14c9a1308;
                  if ((puVar11 == (undefined8 *)0x0) ||
                     (((byte *)*puVar11 != (byte *)0x0 &&
                      (puVar8 = puVar11, (*(byte *)*puVar11 & 0x40) == 0)))) goto LAB_1407ec4d7;
                  break;
                }
                iVar6 = *(int *)(lVar9 + 0x38);
              } while (iVar6 != -1);
              puVar8 = &DAT_14c9a1308;
            }
          }
        }
LAB_1407ec4d7:
        pbVar2 = (byte *)*puVar8;
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(pbVar2 + 8);
        }
        FUN_1400b22c2(local_c8,uVar3);
        FUN_1400b22c2(local_e8,L".Preview");
        FUN_1407ec8fc(local_d8,&local_a8,local_e8);
        FUN_1401c7f3e(&local_b8,local_d8,local_c8);
        iVar6 = (int)uStack_b0 + -1;
        if ((int)uStack_b0 == 0) {
          iVar6 = 0;
        }
        FUN_1446f82e2(&local_98,iVar6,local_b8,1);
        lVar1 = local_98;
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar9 = local_f0;
        if (local_d8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_90[0] = local_90[0] & 0xffffff00;
        local_90[1] = 0;
        local_90[2] = 0;
        local_80 = lVar1;
        lVar10 = local_f8 + lVar9 * 0x60;
        local_68 = 0;
        local_78 = 0;
        uStack_70 = 0;
        *(undefined4 *)(lVar10 + 0x38) = 0;
        *(ulonglong *)(lVar10 + 0x30) = (ulonglong)local_90[0];
        if (*(longlong *)(lVar10 + 0x40) != lVar1) {
          *(undefined8 *)(lVar10 + 0x50) = 0;
        }
        *(longlong *)(lVar10 + 0x40) = lVar1;
        if (*(longlong *)(lVar10 + 0x48) != 0) {
          *(undefined8 *)(lVar10 + 0x50) = 0;
        }
        uVar3 = FUN_14477b664();
        uVar3 = FUN_14477b664(uVar3);
        *(undefined8 *)(lVar10 + 0x48) = uVar3;
        *(undefined8 *)(lVar10 + 0x50) = uStack_70;
        FUN_1407ec87c(lVar10 + 0x58,&local_68);
        if ((local_68 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_68 + 0x50));
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        iVar6 = (int)param_5[2];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407ec87c FUN_1407ec87c body=127 status=ok
// SIG undefined FUN_1407ec87c(void)

longlong * FUN_1407ec87c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  
  if ((*param_1 != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*param_1 + 0x50));
  }
  bVar3 = DAT_14cb26569;
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0) && ((bVar3 & 1) != 0)) {
    piVar2 = *(int **)(lVar1 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar4 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        return param_1;
      }
      iVar4 = 2;
    }
    LOCK();
    piVar2[2] = iVar4;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1407ec8fc FUN_1407ec8fc body=153 status=ok
// SIG undefined FUN_1407ec8fc(void)

undefined8 * FUN_1407ec8fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 2) {
    *param_1 = *param_3;
    *param_3 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar2 = 0;
    }
    *param_1 = 0;
    _Src = (void *)*param_2;
    *(uint *)(param_1 + 1) = uVar1;
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2 + uVar1);
    }
    FUN_1446dd670(param_1,iVar2 + uVar1,0);
    memcpy((void *)*param_1,_Src,(ulonglong)uVar1 * 2);
    FUN_1400020e8(param_1,*param_3,iVar2);
  }
  return param_1;
}



// FUNCTION 1407ec996 FUN_1407ec996 body=57 status=ok
// SIG undefined FUN_1407ec996(void)

void FUN_1407ec996(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57040 = FUN_140002ddd(FUN_1464bad58,uVar1,L"DialogLineEchoData");
  }
  return;
}



// FUNCTION 1407ec9d0 FUN_1407ec9d0 body=519 status=ok
// SIG undefined FUN_1407ec9d0(void)

void FUN_1407ec9d0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = *(longlong **)(param_1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_1407ecbe1;
    if (plVar4 == (longlong *)0x0) goto LAB_1407ecb1d;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1407ecbe1:
    FUN_1456cec3c(plVar4);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
      == DAT_14cb06da8 + 0x30)) {
    lVar3 = (**(code **)(*plVar4 + 0x310))(plVar4);
    puVar1 = (undefined8 *)(param_1 + 0xb18);
    if (puVar1 != (undefined8 *)(lVar3 + 0x30)) {
      iVar2 = *(int *)(lVar3 + 0x38);
      _Src = *(void **)(lVar3 + 0x30);
      *(int *)(param_1 + 0xb20) = iVar2;
      if (iVar2 == 0 && *(int *)(param_1 + 0xb24) == 0) {
        *(undefined4 *)(param_1 + 0xb24) = 0;
      }
      else {
        FUN_144756262(puVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 0x60);
        }
      }
    }
    FUN_1407ecbee(plVar4,puVar1,param_1 + 0xd60,
                  param_1 + (longlong)*(int *)(param_1 + 0x714) * 0x10 + 0x6d0);
    *(byte *)(param_1 + 0x8a1) = *(byte *)(param_1 + 0x8a1) | 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_1407ecb1d:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ecbee FUN_1407ecbee body=110 status=ok
// SIG undefined FUN_1407ecbee(void)

void FUN_1407ecbee(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_2 + 1) != 0) {
    param_2 = (undefined8 *)*param_2;
    param_4 = (undefined8 *)*param_4;
    puVar3 = param_2;
    puVar4 = param_4;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar1 = *(undefined4 *)(param_3 + 1);
    lVar2 = (**(code **)(*param_1 + 0x308))(param_1);
    FUN_14222a900(param_4,param_2,*param_3,*(undefined8 *)(lVar2 + 0x20),0xc,8,uVar1);
  }
  return;
}



// FUNCTION 1407ecc5c FUN_1407ecc5c body=427 status=ok
// SIG undefined FUN_1407ecc5c(void)

void FUN_1407ecc5c(longlong param_1,undefined8 *param_2)

{
  BOOLEAN BVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  BVar1 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar1 != '\0') {
    local_78 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    local_60 = &local_78;
    local_58 = param_2;
    FUN_1407ece1a(param_1 + 0xf8,&local_80,&local_60,0);
    local_78 = 0;
    uStack_70 = 0;
    cVar2 = (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_78);
    lVar3 = local_78;
    if (cVar2 == '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
      if (lVar3 != 0) {
        local_80 = (**(code **)(*(longlong *)*param_2 + 0x18))();
        local_60 = &local_80;
        local_58 = param_2;
        FUN_1407ece1a(param_1 + 0xa8,local_4c,&local_60,0);
      }
    }
    else {
      lVar4 = (longlong)(int)uStack_70;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          local_80 = *(longlong *)(lVar3 + lVar5);
          local_60 = &local_80;
          local_58 = param_2;
          FUN_146e9ed00(param_1 + 0x58,local_4c,&local_60,0);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  FUN_146e9f100(param_1 + 0x150,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001407ecdab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  return;
}



// FUNCTION 1407ece1a FUN_1407ece1a body=1493 status=ok
// SIG undefined FUN_1407ece1a(void)

int * FUN_1407ece1a(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_14482b872(param_1,iVar20);
    }
    iVar23 = (int)param_1[5];
    if (iVar23 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar10 = iVar23 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar12 = iVar23 + 1;
    iVar16 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar16 = iVar23;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar10 = iVar23;
        }
        else {
          uVar11 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar11) {
              uVar6 = uVar11;
            }
          }
          else {
            uVar6 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar6 << 2,0);
          iVar10 = (int)(uVar15 >> 2);
          iVar12 = -0x20;
          if ((int)uVar11 <= iVar10) {
            iVar12 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar14,iVar10);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar10 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar10 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar14;
        }
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar23 & 0x1f;
    puVar2 = (uint *)((longlong)plVar14 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar7 = (longlong)iVar20;
    iVar23 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar23;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x18) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar2;
  }
  iVar23 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar23 = iVar20;
  }
  puVar13[iVar23 >> 5] = puVar13[iVar23 >> 5] | 1 << ((byte)iVar20 & 0x1f);
  puVar1 = (ulonglong *)(*param_1 + lVar7 * 0x18);
  puVar3 = (ulonglong *)param_3[1];
  uVar15 = *(ulonglong *)*param_3;
  *puVar1 = uVar15;
  puVar1[1] = *puVar3;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar11 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  cVar8 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar23 == -1) {
      cVar8 = '\0';
    }
    else {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar23 * 0x18);
        if (*puVar3 == uVar15) {
          uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar15 = puVar1[1];
          uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(int *)puVar3 = (int)*puVar1;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
          *(int *)(puVar3 + 1) = (int)uVar15;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
          FUN_140652b3a(param_1,iVar20);
          cVar8 = '\x01';
          iVar20 = iVar23;
          break;
        }
        iVar23 = (int)puVar3[2];
        cVar8 = '\0';
      } while (iVar23 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar8;
  }
  if (cVar8 != '\0') goto LAB_1407ecfc0;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 < 4) {
    uVar21 = 1;
  }
  else {
    uVar15 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar21 <= (int)param_1[9])) {
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)puVar1 + 0x14) = uVar11;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar20;
    goto LAB_1407ecfc0;
  }
  *(uint *)(param_1 + 9) = uVar21;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar21 = *(uint *)(param_1 + 9);
  }
  plVar18 = param_1 + 7;
  if (uVar21 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_1407ed0f4:
    uVar11 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar18;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4) =
           0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar21 != uVar11);
  }
  else {
    if (uVar21 == 0) goto LAB_1407ecfc0;
    FUN_1446efa72(plVar14,0,uVar21,4);
    if (0 < (int)uVar21) goto LAB_1407ed0f4;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar15 = 0;
    uVar19 = 1;
    iVar10 = 0;
    iVar12 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = *puVar13;
    if (uVar11 == 0) {
      iVar10 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar10 = iVar23 + -1;
      }
      uVar15 = 0;
      uVar19 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar19 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar19 == uVar15) goto LAB_1407ecfc0;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar13[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar19 = (ulonglong)(-uVar11 & uVar11);
    uVar24 = uVar19 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar10 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar10) {
      iVar10 = iVar23;
    }
  }
  if (iVar10 < iVar23) {
    uVar11 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar22 = (longlong)iVar10;
      uVar24 = *(ulonglong *)(lVar7 + lVar22 * 0x18);
      uVar6 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar6 >> 0x10 ^ uVar6) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar7 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar18;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar18;
      }
      *(int *)((longlong)plVar14 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
      ;
      uVar11 = ~(uint)uVar19 & uVar11;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar2;
      }
      iVar23 = (int)param_1[5];
      iVar10 = (int)uVar15;
      lVar7 = (longlong)iVar10;
      uVar6 = puVar13[lVar7] & uVar11;
      if (uVar6 == 0) {
        iVar16 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar16 = iVar23 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar17 = iVar16;
        if (iVar16 < iVar10) {
          iVar17 = iVar10;
        }
        if (iVar16 <= iVar10) break;
        lVar22 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar13[lVar7 + lVar22 + 1];
          if (uVar6 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar17 - lVar7 == lVar22) goto LAB_1407ecfc0;
        }
        uVar15 = (ulonglong)(iVar10 + (int)lVar22 + 1);
        uVar11 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar6 & uVar6);
      uVar24 = uVar19 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar10 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar23);
  }
LAB_1407ecfc0:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 1407ed400 FUN_1407ed400 body=230 status=ok
// SIG undefined FUN_1407ed400(void)

undefined8 FUN_1407ed400(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    uVar2 = FUN_1407ed4e6(uVar3,&DAT_14cb70c60,
                          (ulonglong)*(ushort *)(param_1 + 0xc0) * 0x20 + DAT_14cb70c78,
                          &DAT_14cb70c78);
    *(undefined2 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_1407ed4e6(uVar3,&DAT_14cb70c68,
                          (ulonglong)*(ushort *)(param_1 + 0xc2) * 0x20 + DAT_14cb70c78,
                          &DAT_14cb70c78);
    *(undefined2 *)(param_1 + 0xc2) = uVar2;
    uVar2 = FUN_1407ed622(uVar3,&DAT_14cb70c70,&DAT_14cb70c88);
    *(undefined2 *)(param_1 + 0xc4) = uVar2;
    if (DAT_14cb70c84 != DAT_14cb70c80) {
      FUN_1407ed6d4(&DAT_14cb70c78);
    }
    if (DAT_14cb70c94 != DAT_14cb70c90) {
      FUN_1407ed7ac(&DAT_14cb70c88);
    }
  }
  return 0;
}



// FUNCTION 1407ed4e6 FUN_1407ed4e6 body=257 status=ok
// SIG undefined FUN_1407ed4e6(void)

undefined4 FUN_1407ed4e6(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &DAT_14a171d50;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = *(undefined8 *)(param_3 + 8);
  FUN_1406022fe(&local_40,param_3 + 0x10);
  if (*param_1 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_1,param_2);
  }
  if (((byte *)*puVar3 != (byte *)0x0) && ((*(byte *)*puVar3 & 3) != 0)) {
    uVar4 = FUN_1407ed5e8();
    FUN_1446e7478(puVar3,&local_50,uVar4,1);
  }
  uVar2 = FUN_144a05bde(param_4,&local_50);
  local_50 = &DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ed5e8 FUN_1407ed5e8 body=57 status=ok
// SIG undefined FUN_1407ed5e8(void)

void FUN_1407ed5e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0490 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0490 = FUN_140002ddd(FUN_1417379ed,uVar1,L"NexusBitSet");
  }
  return;
}



// FUNCTION 1407ed622 FUN_1407ed622 body=176 status=ok
// SIG undefined FUN_1407ed622(void)

undefined4 FUN_1407ed622(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1446e60f4();
  }
  if (((byte *)*puVar2 == (byte *)0x0) || ((*(byte *)*puVar2 & 3) == 0)) {
    uVar1 = 0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    uVar3 = FUN_1407ed88e();
    FUN_1446e7478(puVar2,&local_38,uVar3,1);
    uVar1 = FUN_1407ed8c8(param_3,&local_38);
    FUN_1447cd778(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ed6d4 FUN_1407ed6d4 body=215 status=ok
// SIG undefined FUN_1407ed6d4(void)

void FUN_1407ed6d4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1407ed7ac FUN_1407ed7ac body=226 status=ok
// SIG undefined FUN_1407ed7ac(void)

void FUN_1407ed7ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1407ed88e FUN_1407ed88e body=57 status=ok
// SIG undefined FUN_1407ed88e(void)

void FUN_1407ed88e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb576b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb576b0 = FUN_140002ddd(FUN_1418484c1,uVar1,L"FactExpression");
  }
  return;
}



// FUNCTION 1407ed8c8 FUN_1407ed8c8 body=156 status=ok
// SIG undefined FUN_1407ed8c8(void)

int FUN_1407ed8c8(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 4;
    iVar2 = 0;
    do {
      cVar1 = FUN_140251310(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1410f5714(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar3 + 0xc + lVar4) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return iVar2;
}



// FUNCTION 1407ed964 FUN_1407ed964 body=202 status=ok
// SIG undefined FUN_1407ed964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ed964(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = ram0x00014cb7bde4;
  if ((ram0x00014cb7bde4 == DAT_14c948034) &&
     (uVar3 = DAT_14c948034, (int)DAT_14cb7bde0 != DAT_14c948030)) {
    FUN_14011791e(&local_38,(int)DAT_14cb7bde0,ram0x00014cb7bde4 >> 0x20);
    unique0x00023e00 = local_38;
    uVar3 = local_38;
  }
  if (*param_2 == uVar3) {
    uVar2 = FUN_1407eda54(*param_3);
    *(undefined1 *)(param_1 + -0x1d8) = uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  (**(code **)(*(longlong *)(lVar1 + 0x3d0) + 0x18))(lVar1 + 0x3d0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1407eda54 FUN_1407eda54 body=95 status=ok
// SIG undefined FUN_1407eda54(void)

bool FUN_1407eda54(ulonglong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (DAT_14cb7c580 != param_1)) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (DAT_14c892e68 == param_1) {
      bVar1 = false;
    }
    else {
      bVar1 = DAT_14cb7c568 != param_1 && DAT_14cb7c578 != param_1;
    }
  }
  return bVar1;
}



// FUNCTION 1407edadc FUN_1407edadc body=483 status=ok
// SIG undefined FUN_1407edadc(void)

void FUN_1407edadc(longlong *param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  bool bVar5;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[5] = 0;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[6] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14a3cb5b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = &PTR_FUN_14a3cb610;
  *(undefined1 *)(puVar1 + 4) = 0;
  *param_1 = (longlong)puVar1;
  FUN_1407edcc0(puVar1,param_2,param_3);
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14a3cb650;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = &PTR_FUN_14a3cb6b0;
  *(undefined1 *)(puVar1 + 4) = 0;
  param_1[4] = (longlong)puVar1;
  FUN_1407edd3a(puVar1,param_2,param_3);
  ppuVar3 = &PTR_FUN_14a3cb790;
  bVar5 = (char)param_1[9] != '\0';
  if (bVar5) {
    ppuVar3 = &PTR_FUN_14a3cb6f0;
  }
  ppuVar4 = &PTR_FUN_14a3cb7f0;
  if (bVar5) {
    ppuVar4 = &PTR_FUN_14a3cb750;
  }
  pcVar2 = FUN_147464fc0;
  if (bVar5) {
    pcVar2 = FUN_1407ede2e;
  }
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = ppuVar3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = ppuVar4;
  *(undefined1 *)(puVar1 + 4) = 0;
  param_1[2] = (longlong)puVar1;
  (*pcVar2)(puVar1,param_2,param_3);
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14a3cb830;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = &PTR_FUN_14a34c530;
  *(undefined1 *)(puVar1 + 4) = 0;
  param_1[6] = (longlong)puVar1;
  FUN_1407eddb4(puVar1,param_2 * *(int *)((longlong)param_1 + 0x44),param_3);
  return;
}



// FUNCTION 1407edcc0 FUN_1407edcc0 body=121 status=ok
// SIG undefined FUN_1407edcc0(void)

void FUN_1407edcc0(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_1407edea8(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_14070246c(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147463314(lVar1);
    return;
  }
  return;
}



// FUNCTION 1407edd3a FUN_1407edd3a body=121 status=ok
// SIG undefined FUN_1407edd3a(void)

void FUN_1407edd3a(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_1407edfb0(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147463d84(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147463e0a(lVar1);
    return;
  }
  return;
}



// FUNCTION 1407eddb4 FUN_1407eddb4 body=121 status=ok
// SIG undefined FUN_1407eddb4(void)

void FUN_1407eddb4(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_140272f20(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_14066e04e(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_14737b8a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1407ede2e FUN_1407ede2e body=121 status=ok
// SIG undefined FUN_1407ede2e(void)

void FUN_1407ede2e(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_1407ee10e(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147464988(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147464a1c(lVar1);
    return;
  }
  return;
}



// FUNCTION 1407edea8 FUN_1407edea8 body=264 status=ok
// SIG undefined FUN_1407edea8(void)

void FUN_1407edea8(ulonglong *param_1,int param_2,undefined8 param_3,code *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int unaff_EDI;
  
  if (param_2 == 0) {
    uVar3 = 0;
    param_2 = unaff_EDI;
    goto LAB_1407edf28;
  }
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    param_4 = *(code **)(*DAT_14c872d28 + 0x60);
    if (param_4 != (code *)&LAB_14489e5c8) goto LAB_1407edf9f;
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
  do {
    uVar3 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar3 = uVar1 >> 4 & 0xffffffff;
    }
LAB_1407edf28:
    uVar2 = (uint)uVar3;
    if (uVar2 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    uVar1 = *param_1;
    if ((uVar1 & 1) == 0) {
      if ((int)uVar2 < 1 && uVar1 == 0) {
        return;
      }
      if (-1 < (int)uVar2) {
        uVar3 = FUN_14001fdce(uVar1,uVar3 << 4,0x10);
        *param_1 = uVar3;
        return;
      }
    }
    else if (uVar2 <= (uint)param_1[1]) {
      return;
    }
    FUN_1467ac767(uVar3,0x10);
LAB_1407edf9f:
    uVar1 = (*param_4)();
  } while( true );
}



// FUNCTION 1407edfb0 FUN_1407edfb0 body=350 status=ok
// SIG undefined FUN_1407edfb0(void)

void FUN_1407edfb0(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar5 = 0;
    param_2 = unaff_EDI;
    goto LAB_1407ee028;
  }
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar5 = uVar6 & 0xfffffffffffffff0;
        if (uVar5 < 0x7ff1) goto LAB_1407ee0a8;
        goto LAB_1407ee07a;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_1407ee01a:
  do {
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
LAB_1407ee028:
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5 << 3,2);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar6 = 0;
    FUN_1467ac767();
LAB_1407ee0a8:
    bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1407ee01a;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_1407ee07a:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 1407ee10e FUN_1407ee10e body=378 status=ok
// SIG undefined FUN_1407ee10e(void)

void FUN_1407ee10e(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar5 = 0;
    param_2 = unaff_EDI;
    goto LAB_1407ee19b;
  }
  uVar3 = (longlong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar5 = uVar6 & 0xfffffffffffffff0;
        if (uVar5 < 0x7ff1) goto LAB_1407ee222;
        goto LAB_1407ee1f1;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_1407ee180:
  do {
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
LAB_1407ee19b:
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5 * 0x18,2);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar6 = 0x18;
    FUN_1467ac767();
LAB_1407ee222:
    bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1407ee180;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_1407ee1f1:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 1407ee28e FUN_1407ee28e body=355 status=ok
// SIG undefined FUN_1407ee28e(void)

bool FUN_1407ee28e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  lVar8 = DAT_14ca97170;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) ||
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c) & 4) == 0)) {
    bVar9 = false;
  }
  else {
    uVar1 = param_1[10];
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = *(ulonglong *)(param_1 + 0x1c);
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar7 = 0;
    }
    else if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    bVar9 = false;
    if (((*(int *)(lVar8 + uVar7 * 4) < 1) && ((uVar4 & 0x100000) != 0)) && (uVar2 < 2)) {
      local_40 = (undefined8 *)0x0;
      local_38 = 2;
      bVar9 = false;
      FUN_14470b5ae(&local_40,2,0);
      *local_40 = 0x400000001;
      if ((longlong)local_38 != 0) {
        lVar8 = 0;
        do {
          bVar9 = (uVar1 >> (*(uint *)((longlong)local_40 + lVar8) & 0x1f) & 1) != 0;
          if (bVar9) break;
          bVar10 = (longlong)local_38 * 4 + -4 != lVar8;
          lVar8 = lVar8 + 4;
        } while (bVar10);
      }
      if (local_40 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ee3f2 FUN_1407ee3f2 body=107 status=ok
// SIG undefined FUN_1407ee3f2(void)

undefined8 *
FUN_1407ee3f2(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0xffffffff;
  lVar1 = FUN_1404d2d58(param_1,param_4);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1407ee45e(lVar1,param_2,local_14,1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407ee45e FUN_1407ee45e body=1190 status=ok
// SIG undefined FUN_1407ee45e(void)

longlong * FUN_1407ee45e(undefined8 *param_1,longlong *param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  PSRWLOCK pRVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_98 [40];
  PSRWLOCK local_70;
  longlong local_68;
  longlong lStack_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  *param_2 = 0;
  lVar13 = (longlong)(int)(param_3 - (uVar4 & 0xffffffe0));
  pRVar12 = (PSRWLOCK)(param_1 + lVar13 + 0x143);
  local_4c = param_3;
  AcquireSRWLockShared(pRVar12);
  plVar10 = param_1 + lVar13 * 10 + 1;
  if (*(int *)(param_1 + lVar13 * 10 + 2) != *(int *)((longlong)param_1 + lVar13 * 0x50 + 0x3c)) {
    puVar5 = param_1 + lVar13 * 10 + 8;
    if ((undefined8 *)param_1[lVar13 * 10 + 9] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[lVar13 * 10 + 9];
    }
    iVar11 = *(int *)((longlong)puVar5 +
                     (ulonglong)(*(int *)(param_1 + lVar13 * 10 + 10) - 1U & param_3) * 4);
    if (iVar11 != -1) {
      do {
        lVar13 = *plVar10 + (longlong)iVar11 * 0x20;
        if (*(uint *)(*plVar10 + (longlong)iVar11 * 0x20) == param_3) {
          if (((lVar13 + 8U & 0xfffffffffffffff7) != 0) &&
             (lVar13 = *(longlong *)(lVar13 + 0x10), lVar13 != 0)) {
            *param_2 = lVar13;
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
            lVar13 = *param_2;
            ReleaseSRWLockShared(pRVar12);
            param_3 = local_4c;
            if (lVar13 == 0) goto LAB_1407ee558;
            goto LAB_1407ee84b;
          }
          break;
        }
        iVar11 = *(int *)(lVar13 + 0x18);
      } while (iVar11 != -1);
    }
  }
  ReleaseSRWLockShared(pRVar12);
LAB_1407ee558:
  AcquireSRWLockExclusive(pRVar12);
  local_68 = 0;
  lStack_60 = 0;
  pcVar6 = (char *)FUN_144adc2b0(plVar10,param_3,&local_4c,&local_68);
  lVar13 = lStack_60;
  if (lStack_60 != 0) {
    LOCK();
    puVar1 = (uint *)(lStack_60 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lStack_60 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lStack_60 + 0xd);
        local_70 = pRVar12;
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar13;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        pRVar12 = local_70;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar14) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar14 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar14) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  if (*pcVar6 == '\0') {
    *pcVar6 = '\x03';
  }
  ReleaseSRWLockExclusive(pRVar12);
  (**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,&local_68,local_4c,param_4);
  lVar13 = local_68;
  if (&local_68 != param_2) {
    lVar3 = *param_2;
    *param_2 = local_68;
    local_68 = 0;
    if (lVar3 == 0) goto LAB_1407ee70c;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar3 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar3;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar14) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar14 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar14) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  lVar13 = local_68;
  if (local_68 != 0) {
    LOCK();
    puVar1 = (uint *)(local_68 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_68 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_68 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar13;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar14) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar14 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar14) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  lVar13 = *param_2;
LAB_1407ee70c:
  if (lVar13 != 0) {
    AcquireSRWLockExclusive(pRVar12);
    local_68 = 0;
    lStack_60 = 0;
    pcVar6 = (char *)FUN_144adc2b0(plVar10,local_4c,&local_4c,&local_68);
    lVar13 = lStack_60;
    if (lStack_60 != 0) {
      LOCK();
      puVar1 = (uint *)(lStack_60 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lStack_60 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lStack_60 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
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
    lVar13 = *(longlong *)(pcVar6 + 8);
    lVar3 = *param_2;
    if (lVar13 == 0) {
      if (lVar3 != 0) {
        *(longlong *)(pcVar6 + 8) = lVar3;
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (*pcVar6 == '\x01') {
        (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,local_4c);
        *pcVar6 = '\x02';
      }
    }
    else if (lVar3 != lVar13) {
      *param_2 = lVar13;
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar3 + 8);
          LOCK();
          uVar4 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar4 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar3 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar3;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
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
    }
    ReleaseSRWLockExclusive(pRVar12);
  }
LAB_1407ee84b:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407ee916 FUN_1407ee916 body=41 status=ok
// SIG undefined FUN_1407ee916(void)

void FUN_1407ee916(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1407ee946 FUN_1407ee946 body=57 status=ok
// SIG undefined FUN_1407ee946(void)

void FUN_1407ee946(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ddc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ddc0 = FUN_140002ddd(FUN_1464deb1d,uVar1,L"GbxFeedbackDef");
  }
  return;
}



// FUNCTION 1407ee980 FUN_1407ee980 body=2381 status=ok
// SIG undefined FUN_1407ee980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1407ee980(longlong param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double *pdVar4;
  int iVar5;
  undefined4 extraout_EAX;
  double *extraout_RAX;
  double *extraout_RAX_00;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double _X;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(int *)(param_1 + 0x524) == 0) || (uVar9 = *(uint *)(param_1 + 0x520), (int)uVar9 < 0)) ||
     (DAT_14c9647dc <= (int)uVar9)) {
LAB_1407ef0d6:
    local_138 = param_5;
    FUN_1407ef37c(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_158);
  }
  uVar8 = uVar9 >> 0x10;
  plVar11 = (longlong *)
            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar8 * 8));
  if (((plVar11 == (longlong *)0x0) || ((int)plVar11[2] != *(int *)(param_1 + 0x524))) ||
     (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar2 = *plVar11, lVar2 == 0))))
  goto LAB_1407ef0d6;
  local_118._8_8_ = _DAT_14cb76018;
  local_118._0_8_ = _DAT_14cb76010;
  local_128 = _DAT_14cb76000;
  dStack_120 = _DAT_14cb76008;
  bVar1 = *(byte *)(lVar2 + 0x1642);
  pdVar7 = (double *)(ulonglong)bVar1;
  if (bVar1 == 2) {
    lVar10 = lVar2;
    FUN_1407ef2d4(lVar2,&local_108);
    uVar8 = (uint)lVar10;
    lVar10 = *(longlong *)(lVar2 + 0x1c8);
    if (lVar10 == 0) {
      pdVar7 = &DAT_14c8464e0;
      pdVar6 = DAT_14c8464f0;
    }
    else {
      pdVar7 = (double *)(lVar10 + 0x260);
      pdVar6 = *(double **)(lVar10 + 0x270);
    }
    dVar25 = dStack_100 - pdVar7[1];
    dVar12 = local_108 - *pdVar7;
    pdVar6 = (double *)((double)local_f8 - (double)pdVar6);
    dVar17 = (double)pdVar6 * (double)pdVar6 + dVar12 * dVar12 + dVar25 * dVar25;
    if (((dVar17 != 1.0) || (dVar13 = dVar25, pdVar4 = pdVar6, dVar14 = dVar12, NAN(dVar17))) &&
       (dVar13 = DAT_14c8464e8, pdVar4 = DAT_14c8464f0, dVar14 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar17)) {
      dVar17 = 1.0 / SQRT(dVar17);
      dVar13 = dVar25 * dVar17;
      pdVar4 = (double *)((double)pdVar6 * dVar17);
      dVar14 = dVar12 * dVar17;
    }
    dVar25 = 0.0;
    if (((((dVar14 == 0.0) && (!NAN(dVar14))) && (dVar13 == 0.0)) &&
        ((!NAN(dVar13) && ((double)pdVar4 == 0.0)))) && (!NAN((double)pdVar4))) goto LAB_1407eeab6;
    if (((dVar14 != 0.0) || (NAN(dVar14))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
      dVar25 = atan2(dVar13,dVar14);
      dVar25 = dVar25 * 0.5;
    }
    dVar12 = 0.0;
    dVar17 = SQRT(dVar14 * dVar14 + dVar13 * dVar13);
    if (((((double)pdVar4 != 0.0) || (NAN((double)pdVar4))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
      dVar12 = atan2((double)pdVar4,dVar17);
      dVar12 = dVar12 * 0.5;
    }
    dVar17 = sin(dVar12);
    dVar13 = cos(dVar12);
    dVar12 = sin(dVar25);
    dVar25 = cos(dVar25);
    local_128 = dVar17 * dVar12;
    dStack_120 = -dVar17 * dVar25;
    local_118._0_8_ = dVar12 * dVar13;
    pdVar7 = extraout_RAX;
  }
  else {
    if (bVar1 != 1) {
      if (bVar1 == 3) {
        lVar10 = *(longlong *)(lVar2 + 0x1c8);
        if (lVar10 == 0) {
          pdVar7 = &DAT_14c8464e0;
          local_f8 = DAT_14c8464f0;
        }
        else {
          pdVar7 = (double *)(lVar10 + 0x260);
          local_f8 = *(double **)(lVar10 + 0x270);
        }
        dStack_100 = *(double *)(lVar2 + 0x18a0) - pdVar7[1];
        local_108 = *(double *)(lVar2 + 0x1898) - *pdVar7;
        local_f8 = (double *)(*(double *)(lVar2 + 0x18a8) - (double)local_f8);
        dVar25 = (double)local_f8 * (double)local_f8 +
                 local_108 * local_108 + dStack_100 * dStack_100;
        if ((dVar25 != 1.0) || (NAN(dVar25))) {
          if (9.99999993922529e-09 <= dVar25) {
            dVar25 = 1.0 / SQRT(dVar25);
            local_f8 = (double *)((double)local_f8 * dVar25);
            dStack_100 = dStack_100 * dVar25;
            local_108 = local_108 * dVar25;
          }
          else {
            local_108 = DAT_14c8464e0;
            dStack_100 = DAT_14c8464e8;
            local_f8 = DAT_14c8464f0;
            pdVar7 = DAT_14c8464f0;
          }
        }
        if (((local_108 != 0.0) || (NAN(local_108))) ||
           ((dStack_100 != 0.0 ||
            (((NAN(dStack_100) || ((double)local_f8 != 0.0)) || (NAN((double)local_f8))))))) {
          pdVar6 = &local_108;
          pdVar7 = (double *)FUN_144afe7fe(pdVar6,&local_128);
          uVar8 = (uint)pdVar6;
        }
      }
      goto LAB_1407eeab6;
    }
    dVar25 = *param_3;
    uVar20 = SUB84(dVar25,0);
    uVar21 = (undefined4)((ulonglong)dVar25 >> 0x20);
    dVar12 = param_3[1];
    dVar14 = 0.0;
    dVar17 = param_3[2];
    if (((dVar25 == 0.0) && (!NAN(dVar25))) &&
       (((dVar12 == 0.0 && ((!NAN(dVar12) && (dVar17 == 0.0)))) && (!NAN(dVar17)))))
    goto LAB_1407eeab6;
    if ((((dVar25 != 0.0) || (NAN(dVar25))) || (dVar12 != 0.0)) || (NAN(dVar12))) {
      dVar14 = atan2(dVar12,dVar25);
      dVar14 = dVar14 * 0.5;
      uVar20 = SUB84(*param_3,0);
      uVar21 = (undefined4)((ulonglong)*param_3 >> 0x20);
      dVar12 = param_3[1];
      dVar17 = param_3[2];
    }
    dVar25 = SQRT((double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20) +
                  dVar12 * dVar12);
    dVar12 = 0.0;
    if (((dVar17 != 0.0) || (NAN(dVar17))) || ((dVar25 != 0.0 || (NAN(dVar25))))) {
      dVar12 = atan2(dVar17,dVar25);
      dVar12 = dVar12 * 0.5;
    }
    dVar17 = sin(dVar12);
    dVar13 = cos(dVar12);
    dVar12 = sin(dVar14);
    dVar25 = cos(dVar14);
    local_128 = dVar17 * dVar12;
    dStack_120 = -dVar17 * dVar25;
    local_118._0_8_ = dVar12 * dVar13;
    pdVar7 = extraout_RAX_00;
  }
  local_118._8_8_ = dVar13 * dVar25;
LAB_1407eeab6:
  uVar20 = SUB84(pdVar7,0);
  if (*(char *)(lVar2 + 0x1640) == '\x04') {
    lVar10 = *(longlong *)(lVar2 + 0x1c8);
    if (lVar10 == 0) {
      uVar26 = SUB84(DAT_14c8464f8,0);
      uVar27 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
      uVar20 = SUB84(DAT_14c846500,0);
      uVar21 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
      pdVar7 = DAT_14c846508;
    }
    else {
      dVar25 = *(double *)(lVar10 + 0x240);
      dVar17 = *(double *)(lVar10 + 0x248);
      pdVar4 = *(double **)(lVar10 + 0x250);
      dVar12 = *(double *)(lVar10 + 600);
      pdVar6 = *(double **)(lVar10 + 0x228);
      local_108 = dVar25;
      dStack_100 = dVar17;
      local_f8 = pdVar4;
      uStack_f0 = dVar12;
      if (pdVar6 == (double *)0x0) {
        uVar8 = 0x40;
        pdVar6 = (double *)FUN_14001cc68(0x40,0x10);
        dVar13 = DAT_14c8463d8;
        *pdVar6 = DAT_14c8463d0;
        pdVar6[1] = dVar13;
        dVar13 = DAT_14c8463e8;
        pdVar6[2] = DAT_14c8463e0;
        pdVar6[3] = dVar13;
        dVar13 = DAT_14c846500;
        pdVar6[4] = DAT_14c8464f8;
        pdVar6[5] = dVar13;
        pdVar7 = DAT_14c846508;
        pdVar6[6] = (double)DAT_14c846508;
        *(double **)(lVar10 + 0x228) = pdVar6;
      }
      auVar24._8_8_ = -(ulonglong)(dVar12 != pdVar6[3]);
      auVar24._0_8_ = -(ulonglong)((double)pdVar4 != pdVar6[2]);
      auVar23._8_4_ = (int)-(ulonglong)(dVar17 != pdVar6[1]);
      auVar23._0_8_ = -(ulonglong)(dVar25 != *pdVar6);
      auVar23._12_4_ = (int)(-(ulonglong)(dVar17 != pdVar6[1]) >> 0x20);
      iVar5 = movmskpd((int)pdVar7,auVar23);
      uVar9 = movmskpd(uVar8,auVar24);
      uVar8 = 0;
      if ((uVar9 & 0x3fffffff) != 0 || iVar5 != 0) {
        pdVar7 = &local_108;
        *(undefined4 *)(pdVar6 + 2) = (undefined4)local_f8;
        *(undefined4 *)((longlong)pdVar6 + 0x14) = local_f8._4_4_;
        *(undefined4 *)(pdVar6 + 3) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)pdVar6 + 0x1c) = uStack_f0._4_4_;
        *pdVar6 = local_108;
        pdVar6[1] = dStack_100;
        FUN_1448052ee(pdVar7,&local_e8);
        uVar8 = (uint)pdVar7;
        pdVar6[6] = local_d8;
        pdVar6[4] = local_e8;
        pdVar6[5] = dStack_e0;
      }
      uVar26 = SUB84(pdVar6[4],0);
      uVar27 = (undefined4)((ulonglong)pdVar6[4] >> 0x20);
      uVar20 = SUB84(pdVar6[5],0);
      uVar21 = (undefined4)((ulonglong)pdVar6[5] >> 0x20);
      pdVar7 = (double *)pdVar6[6];
    }
    auVar22._4_4_ = uVar27;
    auVar22._0_4_ = uVar26;
    auVar22._12_4_ = uVar21;
    auVar22._8_4_ = uVar20;
    auVar23 = divpd(auVar22,_DAT_1499387d0);
    auVar18._0_8_ = (double)pdVar7 / 360.0;
    auVar18._8_8_ = 0;
    auVar24 = roundpd(auVar23,auVar23,3);
    auVar23 = roundpd(auVar18,auVar18,3);
    dVar25 = ((double)CONCAT44(uVar27,uVar26) - auVar24._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar17 = ((double)CONCAT44(uVar21,uVar20) - auVar24._8_8_ * DAT_1499387d0._8_8_) *
             0.008726646259971648;
    dVar28 = ((double)pdVar7 - auVar23._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    _X = (0.0 - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar12 = sin(dVar25);
    dVar13 = sin(dVar17);
    dVar14 = sin(dVar28);
    sin(_X);
    dVar15 = cos(dVar25);
    dVar16 = cos(dVar17);
    dVar28 = cos(dVar28);
    cos(_X);
    dVar25 = -(dVar16 * dVar12 * dVar14) + dVar13 * dVar15 * dVar28;
    dVar17 = dVar13 * dVar12 * dVar14 + dVar16 * dVar15 * dVar28;
    local_128 = dVar12 * dVar13 * dVar28 - dVar15 * dVar16 * dVar14;
    dStack_120 = -(dVar12 * dVar16 * dVar28) - dVar15 * dVar13 * dVar14;
    local_118._8_4_ = SUB84(dVar17,0);
    local_118._0_8_ = dVar25;
    local_118._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    uVar20 = extraout_EAX;
  }
  else {
    dVar25 = (double)local_118._0_8_;
    dVar17 = (double)local_118._8_8_;
  }
  auVar19._8_8_ = -(ulonglong)(dStack_120 != _DAT_14cb76008);
  auVar19._0_8_ = -(ulonglong)(local_128 != _DAT_14cb76000);
  iVar5 = movmskpd(uVar20,auVar19);
  auVar3._8_4_ = (int)-(ulonglong)(dVar17 != _DAT_14cb76018);
  auVar3._0_8_ = -(ulonglong)(dVar25 != _DAT_14cb76010);
  auVar3._12_4_ = (int)(-(ulonglong)(dVar17 != _DAT_14cb76018) >> 0x20);
  uVar9 = movmskpd(uVar8,auVar3);
  if ((uVar9 & 0x3fffffff) == 0 && iVar5 == 0) {
    local_138 = param_5;
    FUN_1407ef37c(param_1,&local_108,param_3,param_4);
    local_128 = local_108;
    dStack_120 = dStack_100;
    local_118._8_8_ = uStack_f0;
    local_118._0_8_ = local_f8;
  }
  lVar10 = *(longlong *)(param_1 + 0x110);
  if (lVar10 == 0) {
    local_f8 = (double *)local_118._0_8_;
    uStack_f0 = (double)local_118._8_8_;
    local_108 = local_128;
    dStack_100 = dStack_120;
  }
  else {
    local_108 = *(double *)(lVar10 + 0x240);
    dStack_100 = *(double *)(lVar10 + 0x248);
    local_f8 = *(double **)(lVar10 + 0x250);
    uStack_f0 = *(double *)(lVar10 + 600);
  }
  local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)(lVar2 + 0x1644));
  FUN_140aff276(param_2,&local_108,&local_128,param_4);
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407ef2d4 FUN_1407ef2d4 body=168 status=ok
// SIG undefined FUN_1407ef2d4(void)

void FUN_1407ef2d4(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((((*(int *)(param_1 + 0x1700) == 0) || (uVar1 = *(uint *)(param_1 + 0x16fc), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      (((plVar4 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0x1700))) ||
       (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (lVar3 = *plVar4, lVar3 == 0)))))) &&
     (lVar3 = *(longlong *)(param_1 + 0x168), lVar3 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x1c8);
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
  }
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x268);
    *param_2 = *(undefined8 *)(lVar3 + 0x260);
    param_2[1] = uVar2;
    param_2[2] = *(undefined8 *)(lVar3 + 0x270);
    return;
  }
  param_2[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 1407ef37c FUN_1407ef37c body=1342 status=ok
// SIG undefined FUN_1407ef37c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1407ef37c(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                      double *param_5)

{
  longlong lVar1;
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
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  
  FUN_1407ef8ba(param_1,param_2,param_3,param_4,param_5);
  if ((*(byte *)(param_1 + 0x36c) & 2) != 0) {
    if (((*(byte *)(param_1 + 0x180) & 1) == 0) ||
       (((ABS(*param_3) <= 0.009999999776482582 && (ABS(param_3[1]) <= 0.009999999776482582)) &&
        (ABS(param_3[2]) <= 0.009999999776482582)))) {
      dVar15 = (double)(float)param_4;
      dVar7 = *(double *)(param_1 + 0x380) * dVar15;
      dVar16 = *(double *)(param_1 + 0x378) * dVar15;
      dVar15 = dVar15 * *(double *)(param_1 + 0x370);
      auVar19._8_8_ = dVar16;
      auVar19._0_8_ = dVar15;
      auVar19 = divpd(auVar19,_DAT_1499387d0);
      auVar14._0_8_ = dVar7 / 360.0;
      auVar14._8_8_ = 0;
      auVar19 = roundpd(auVar19,auVar19,3);
      auVar14 = roundpd(auVar14,auVar14,3);
      dVar15 = (dVar15 - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar16 = (dVar16 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar7 = (dVar7 - auVar14._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar20 = (0.0 - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar8 = sin(dVar15);
      dVar9 = sin(dVar16);
      dVar10 = sin(dVar7);
      sin(dVar20);
      dVar11 = cos(dVar15);
      dVar12 = cos(dVar16);
      dVar13 = cos(dVar7);
      cos(dVar20);
      dVar15 = -(dVar12 * dVar8 * dVar10) + dVar9 * dVar11 * dVar13;
      dVar16 = dVar9 * dVar8 * dVar10 + dVar12 * dVar11 * dVar13;
      dVar7 = dVar8 * dVar9 * dVar13 - dVar11 * dVar12 * dVar10;
      dVar8 = -(dVar8 * dVar12 * dVar13) - dVar11 * dVar9 * dVar10;
    }
    else {
      dVar7 = *(double *)(param_1 + 0x500);
      dVar8 = *(double *)(param_1 + 0x508);
      dVar15 = *(double *)(param_1 + 0x510);
      dVar16 = *(double *)(param_1 + 0x518);
    }
    dVar10 = param_2[3];
    dVar9 = param_2[3];
    dVar11 = param_2[1];
    dVar12 = param_2[1];
    dVar13 = param_2[2];
    dVar20 = param_2[2];
    dVar17 = dVar8 * dVar13 * -1.0 + dVar15 * dVar11 + *param_2 * dVar16 * 1.0 + dVar10 * dVar7;
    dVar18 = dVar7 * dVar20 * 1.0 + dVar16 * dVar12 + *param_2 * dVar15 * -1.0 + dVar9 * dVar8;
    dVar10 = dVar16 * dVar13 * 1.0 + ((*param_2 * dVar8 * 1.0 + dVar10 * dVar15) - dVar11 * dVar7);
    dVar15 = dVar15 * dVar20 * -1.0 + ((*param_2 * dVar7 * -1.0 + dVar9 * dVar16) - dVar12 * dVar8);
    *param_2 = dVar17;
    param_2[1] = dVar18;
    param_2[2] = dVar10;
    param_2[3] = dVar15;
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (lVar1 != 0) {
      dVar16 = *(double *)(param_1 + 0x388);
      dVar7 = *(double *)(param_1 + 0x390);
      dVar8 = *(double *)(param_1 + 0x398);
      if ((((dVar16 != 0.0) || (NAN(dVar16))) ||
          ((dVar7 != 0.0 || ((NAN(dVar7) || (dVar8 != 0.0)))))) || (NAN(dVar8))) {
        dVar9 = *(double *)(lVar1 + 0x250);
        dVar11 = *(double *)(lVar1 + 0x240);
        dVar12 = *(double *)(lVar1 + 0x248);
        dVar2 = dVar11 * dVar7 - dVar16 * dVar12;
        dVar4 = dVar9 * dVar16 - dVar8 * dVar11;
        dVar20 = dVar12 * dVar8 - dVar7 * dVar9;
        dVar2 = dVar2 + dVar2;
        dVar4 = dVar4 + dVar4;
        dVar20 = dVar20 + dVar20;
        dVar13 = *(double *)(lVar1 + 600);
        dVar5 = dVar17 * dVar7 - dVar16 * dVar18;
        dVar3 = dVar10 * dVar16 - dVar8 * dVar17;
        dVar6 = dVar18 * dVar8 - dVar7 * dVar10;
        dVar5 = dVar5 + dVar5;
        dVar3 = dVar3 + dVar3;
        dVar6 = dVar6 + dVar6;
        *param_5 = (((dVar12 * dVar2 - dVar4 * dVar9) + dVar13 * dVar20 + dVar16) -
                   ((dVar18 * dVar5 - dVar3 * dVar10) + dVar15 * dVar6 + dVar16)) + *param_5;
        param_5[1] = (((dVar9 * dVar20 - dVar2 * dVar11) + dVar13 * dVar4 + dVar7) -
                     ((dVar10 * dVar6 - dVar5 * dVar17) + dVar15 * dVar3 + dVar7)) + param_5[1];
        param_5[2] = (((dVar11 * dVar4 - dVar20 * dVar12) + dVar13 * dVar2 + dVar8) -
                     ((dVar17 * dVar3 - dVar6 * dVar18) + dVar15 * dVar5 + dVar8)) + param_5[2];
      }
    }
  }
  return param_2;
}



// FUNCTION 1407ef8ba FUN_1407ef8ba body=1033 status=ok
// SIG undefined FUN_1407ef8ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1407ef8ba(longlong param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  
  dVar15 = DAT_14c8463e8;
  param_2[2] = DAT_14c8463e0;
  param_2[3] = dVar15;
  dVar15 = DAT_14c8463d8;
  *param_2 = DAT_14c8463d0;
  param_2[1] = dVar15;
  if ((*(byte *)(param_1 + 0x180) & 1) != 0) {
    dVar17 = *param_3;
    dVar15 = param_3[1];
    uVar11 = SUB84(dVar15,0);
    uVar12 = (undefined4)((ulonglong)dVar15 >> 0x20);
    if (((0.009999999776482582 < ABS(dVar17)) || (0.009999999776482582 < ABS(dVar15))) ||
       (0.009999999776482582 < ABS(param_3[2]))) {
      dVar18 = 0.0;
      if (((dVar17 != 0.0) || (NAN(dVar17))) || ((dVar15 != 0.0 || (NAN(dVar15))))) {
        dVar18 = atan2(dVar15,dVar17);
        dVar18 = dVar18 * 0.5;
        dVar17 = *param_3;
        uVar11 = SUB84(param_3[1],0);
        uVar12 = (undefined4)((ulonglong)param_3[1] >> 0x20);
      }
      dVar13 = SQRT(dVar17 * dVar17 +
                    (double)CONCAT44(uVar12,uVar11) * (double)CONCAT44(uVar12,uVar11));
      dVar15 = param_3[2];
      dVar17 = 0.0;
      if (((dVar15 != 0.0) || (NAN(dVar15))) || ((dVar13 != 0.0 || (NAN(dVar13))))) {
        dVar17 = atan2(dVar15,dVar13);
        dVar17 = dVar17 * 0.5;
      }
      dVar15 = sin(dVar17);
      dVar13 = cos(dVar17);
      dVar3 = sin(dVar18);
      dVar17 = cos(dVar18);
      dVar14 = dVar15 * dVar3;
      dVar4 = -dVar15 * dVar17;
      dVar3 = dVar3 * dVar13;
      dVar13 = dVar13 * dVar17;
      auVar1 = *(undefined1 (*) [16])(param_1 + 0x2c8);
      auVar16 = divpd(auVar1,_DAT_1499387d0);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *(double *)(param_1 + 0x2d8);
      auVar19 = divpd(auVar19,_DAT_1499387d0);
      auVar16 = roundpd(auVar16,auVar16,3);
      auVar19 = roundpd(auVar19,auVar19,3);
      dVar5 = (auVar1._0_8_ - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar7 = (auVar1._8_8_ - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar9 = (*(double *)(param_1 + 0x2d8) - auVar19._0_8_ * (double)DAT_1499387d0) *
              0.008726646259971648;
      dVar10 = (0.0 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar15 = sin(dVar5);
      dVar17 = sin(dVar7);
      dVar18 = sin(dVar9);
      sin(dVar10);
      dVar5 = cos(dVar5);
      dVar7 = cos(dVar7);
      dVar9 = cos(dVar9);
      cos(dVar10);
      dVar6 = -(dVar7 * dVar15 * dVar18) + dVar17 * dVar5 * dVar9;
      dVar8 = dVar17 * dVar15 * dVar18 + dVar7 * dVar5 * dVar9;
      dVar10 = dVar15 * dVar17 * dVar9 - dVar5 * dVar7 * dVar18;
      dVar5 = -(dVar15 * dVar7 * dVar9) - dVar5 * dVar17 * dVar18;
      dVar15 = dVar5 * dVar3 * -1.0 + dVar6 * dVar4 + dVar14 * dVar8 * 1.0 + dVar13 * dVar10;
      dVar17 = dVar10 * dVar3 * 1.0 + dVar8 * dVar4 + dVar14 * dVar6 * -1.0 + dVar13 * dVar5;
      dVar18 = dVar8 * dVar3 * 1.0 + ((dVar14 * dVar5 * 1.0 + dVar13 * dVar6) - dVar10 * dVar4);
      dVar13 = dVar6 * dVar3 * -1.0 + ((dVar14 * dVar10 * -1.0 + dVar13 * dVar8) - dVar5 * dVar4);
      goto LAB_1407efc0e;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x110);
  if (lVar2 == 0) {
    return param_2;
  }
  dVar15 = *(double *)(lVar2 + 0x240);
  dVar17 = *(double *)(lVar2 + 0x248);
  dVar18 = *(double *)(lVar2 + 0x250);
  dVar13 = *(double *)(lVar2 + 600);
LAB_1407efc0e:
  *param_2 = dVar15;
  param_2[1] = dVar17;
  param_2[2] = dVar18;
  param_2[3] = dVar13;
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
  return param_2;
}



// FUNCTION 1407efcc4 FUN_1407efcc4 body=589 status=ok
// SIG undefined FUN_1407efcc4(void)

void FUN_1407efcc4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14066e964();
  lVar5 = FUN_140343d7a(param_1);
  if (lVar5 != 0) {
    uVar6 = FUN_1407725cc();
    lVar5 = FUN_144718840(lVar5,uVar6);
    if (lVar5 != 0) {
      FUN_1407eff2c(&local_60,lVar5);
      *(undefined4 *)(param_1 + 0xe8) = local_60;
      *(undefined4 *)(param_1 + 0xec) = uStack_5c;
      *(int *)(param_1 + 0xf0) = iStack_58;
      *(undefined4 *)(param_1 + 0xf4) = uStack_54;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar5 + 200);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  lVar1 = param_1 + 0xf8;
  if (*(int *)(param_1 + 0x224) < iVar4) {
    FUN_14887435c(lVar1);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar7 = lVar1;
    }
    FUN_1405f994b(lVar7,*(undefined4 *)(param_1 + 0x220));
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  local_68 = (ulonglong)*(uint *)(lVar5 + 200);
  if (local_68 != 0) {
    uVar10 = 0;
    do {
      lVar7 = *(longlong *)(lVar5 + 0xc0);
      iVar4 = *(int *)(param_1 + 0x220);
      *(uint *)(param_1 + 0x220) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x224) < iVar4 + 1U) {
        FUN_148874428(lVar1,iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x218);
      if (*(longlong *)(param_1 + 0x218) == 0) {
        lVar9 = lVar1;
      }
      lVar2 = (longlong)iVar4 * 0x60 + lVar9;
      FUN_1407eff12(lVar2);
      *(undefined8 *)(lVar9 + (longlong)iVar4 * 0x60) = *(undefined8 *)(lVar7 + uVar10 * 8);
      lVar9 = *(longlong *)(lVar7 + uVar10 * 8);
      if (lVar9 == DAT_14cb72618) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
        if (lVar9 != DAT_14cb72620) {
          cVar3 = (lVar9 == DAT_14cb725f8 || lVar9 == DAT_14cb72628) + '\x01';
        }
      }
      *(char *)(lVar2 + 8) = cVar3;
      *(undefined8 *)(lVar2 + 0xc) = 0;
      iVar4 = -1;
      if ((longlong)*(int *)(lVar5 + 0x2b0) != 0) {
        uVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + 0x2a8) + uVar8) ==
              *(longlong *)(lVar7 + uVar10 * 8)) {
            iVar4 = (int)(uVar8 >> 3) * -0x49249249;
            break;
          }
          uVar8 = uVar8 + 0x38;
        } while ((longlong)*(int *)(lVar5 + 0x2b0) * 0x38 - uVar8 != 0);
      }
      *(int *)(lVar2 + 0x14) = iVar4;
      uVar10 = uVar10 + 1;
    } while (uVar10 != local_68);
  }
  FUN_140273082(param_1,&local_60);
  iVar4 = iStack_58 + -1;
  if (iStack_58 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(&local_50,iVar4,CONCAT44(uStack_5c,local_60),1);
  if (CONCAT44(uStack_5c,local_60) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x228) = local_50;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407eff12 FUN_1407eff12 body=25 status=ok
// SIG undefined FUN_1407eff12(void)

void FUN_1407eff12(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  return;
}



// FUNCTION 1407eff2c FUN_1407eff2c body=200 status=ok
// SIG undefined FUN_1407eff2c(void)

uint * FUN_1407eff2c(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 1407f0006 FUN_1407f0006 body=144 status=ok
// SIG undefined FUN_1407f0006(void)

undefined8 FUN_1407f0006(longlong param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14cb8a670,&local_28);
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_1407f0098(*(undefined8 *)(param_1 + 0x860),6,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144757f48(uVar1,0x900040);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1407f0098 FUN_1407f0098 body=164 status=ok
// SIG undefined FUN_1407f0098(void)

void FUN_1407f0098(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    param_1 = DAT_14c951640;
  }
  uVar1 = FUN_1407f013e();
  lVar2 = FUN_140277b32(uVar1,param_1,param_3,0);
  if (lVar2 == 0) {
    FUN_1446f470e(&local_30,param_3,1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_1407f021c(param_1,local_30,0,0);
    *(undefined4 *)(lVar2 + 0x700) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f013e FUN_1407f013e body=221 status=ok
// SIG undefined FUN_1407f013e(void)

longlong FUN_1407f013e(void)

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
  if (DAT_14cab29a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1400213d8;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147547783;
    local_40 = &LAB_140c61025;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x750;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystemLinker",&DAT_14cab29a0,
                  &DAT_147547782);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab29a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f021c FUN_1407f021c body=257 status=ok
// SIG undefined FUN_1407f021c(void)

undefined8
FUN_1407f021c(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_1407f013e();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f031e FUN_1407f031e body=583 status=ok
// SIG undefined FUN_1407f031e(void)

ulonglong FUN_1407f031e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  code **ppcVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
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
  undefined1 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    lVar2 = 0;
    plVar4 = param_1;
    do {
      if ((*(uint *)(plVar4 + 1) & 0x30) != 0) goto LAB_1407f035c;
      plVar4 = (longlong *)plVar4[4];
    } while (plVar4 != (longlong *)0x0);
  }
  lVar2 = param_1[4];
LAB_1407f035c:
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  plVar4 = param_1;
  if (*(char *)(lVar2 + 0x152) != '\x03') {
LAB_1407f036f:
    plVar5 = plVar4;
    plVar4 = plVar5;
    if ((longlong *)plVar5[4] != (longlong *)0x0) goto code_r0x0001407f037e;
    goto LAB_1407f038c;
  }
LAB_1407f044f:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
code_r0x0001407f037e:
  plVar4 = (longlong *)plVar5[4];
  if ((*(uint *)(plVar5 + 1) >> 0x1c & 1) == 0) goto LAB_1407f036f;
  plVar4 = (longlong *)FUN_142840154(plVar5);
LAB_1407f038c:
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)plVar5[4];
    goto LAB_1407f036f;
  }
  if (((*(byte *)((longlong)plVar4 + 0x2e) & 0x10) == 0) && (param_1[6] != 0)) {
    (**(code **)(*param_1 + 0x2d0))(param_1,&local_28);
    lVar2 = local_28;
    if (DAT_14c951858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    local_80 = 0;
    local_88 = 0;
    lVar3 = FUN_140be85e0(DAT_14c951858,0,lVar2,0);
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x48) == 0)) ||
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x48) + 0x20), lVar3 == 0)) {
      lVar3 = *(longlong *)((longlong)param_1 + 0x54);
      if (local_28 != lVar3 && lVar3 != 0) {
        local_28 = lVar3;
      }
      local_30 = 0;
      local_38 = (code *)0x0;
      cVar1 = FUN_1407f0566(local_28);
      if (cVar1 == '\0') {
        uVar7 = 0;
        goto LAB_1407f044f;
      }
      ppcVar6 = &local_38;
    }
    else {
      ppcVar6 = (code **)(lVar3 + 0x318);
    }
    cVar1 = FUN_1407f0622(ppcVar6,0xff,0,0);
    uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),cVar1 != '\0');
  }
  goto LAB_1407f044f;
}



// FUNCTION 1407f0566 FUN_1407f0566 body=186 status=ok
// SIG undefined FUN_1407f0566(void)

undefined4 FUN_1407f0566(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined1 local_220 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_240 = local_220;
  local_228 = '\0';
  local_230 = &local_20;
  local_248 = param_1;
  local_238 = local_240;
  FUN_14005eb5c(&local_248,&local_240);
  local_258 = local_240;
  local_250 = (undefined4)((ulonglong)((longlong)local_238 - (longlong)local_240) >> 1);
  uVar1 = FUN_1449072f6(&local_258,0);
  if ((char)uVar1 != '\0') {
    *param_2 = local_248;
  }
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f0622 FUN_1407f0622 body=1692 status=ok
// SIG undefined FUN_1407f0622(void)

ulonglong FUN_1407f0622(undefined8 *param_1,byte param_2,char param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  char local_2b9;
  undefined8 *local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  undefined1 *local_2a0;
  uint local_298;
  ushort *local_290;
  uint local_288;
  undefined4 local_27c;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 **local_268;
  char local_260;
  undefined1 local_258 [512];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_278 = local_258;
  local_260 = '\0';
  local_268 = &local_58;
  local_2b9 = param_3;
  local_2b8 = param_4;
  local_270 = local_278;
  FUN_14005eb5c(param_1,&local_278);
  puVar4 = local_278;
  uVar15 = (longlong)local_270 - (longlong)local_278;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
    FUN_1400684da(&DAT_14c9482f8);
    atexit(FUN_1427b7fa2);
    _Init_thread_footer(&DAT_14c948490);
  }
  puVar2 = DAT_14c948330;
  uVar13 = 0;
  uVar14 = (ulonglong)(DAT_14c948338 - 1);
  if (DAT_14c948338 == 0) {
    uVar14 = uVar13;
  }
LAB_1407f06d1:
  uVar10 = (uint)(uVar14 + uVar13);
  if (2 < (int)uVar10) {
    uVar7 = uVar14 + uVar13 & 0xffffffff;
    if (((DAT_14c948330[uVar7 - 1] != 0x2f) && (DAT_14c948330[uVar7 - 1] != 0x5c)) ||
       (DAT_14c948330[uVar7 - 2] == 0x3a)) goto LAB_1407f072c;
LAB_1407f06f3:
    uVar13 = uVar13 - 1;
    goto LAB_1407f06d1;
  }
  if (uVar10 == 2) {
    if (((DAT_14c948330[1] != 0x5c) && (DAT_14c948330[1] != 0x2f)) ||
       ((*DAT_14c948330 - 0x2f < 0x2e &&
        ((0x200000000801U >> ((ulonglong)(*DAT_14c948330 - 0x2f) & 0x3f) & 1) != 0))))
    goto LAB_1407f072c;
    goto LAB_1407f06f3;
  }
  if (uVar10 == 0) goto LAB_1407f077a;
LAB_1407f072c:
  uVar11 = (uint)(uVar15 >> 1);
  if ((int)uVar10 <= (int)uVar11) {
    uVar6 = (int)uVar11 >> 0x1f & uVar11;
    uVar8 = uVar11 - uVar6;
    if ((int)uVar10 < (int)uVar8) {
      uVar8 = uVar10;
    }
    local_50 = 0;
    if (0 < (int)uVar8) {
      local_50 = uVar8;
    }
    local_58 = puVar4 + (longlong)(int)uVar6 * 2;
    local_290 = DAT_14c948330;
    local_288 = uVar10;
    cVar5 = FUN_14005b3f4();
    if (cVar5 == '\0') goto LAB_1407f077a;
    if (uVar10 != uVar11) {
      iVar12 = (int)uVar14;
      if ((puVar2[(longlong)iVar12 + (uVar13 - 1)] == 0x2f) ||
         (puVar2[(longlong)iVar12 + (uVar13 - 1)] == 0x5c)) {
        if ((iVar12 + (int)uVar13 != 1) ||
           ((*(short *)(puVar4 + 2) != 0x2f && (*(short *)(puVar4 + 2) != 0x5c))))
        goto LAB_1407f0b5a;
      }
      else {
        uVar15 = 0;
        if ((*(short *)(puVar4 + uVar13 * 2 + (longlong)iVar12 * 2) == 0x2f) ||
           (*(short *)(puVar4 + uVar13 * 2 + (longlong)iVar12 * 2) == 0x5c)) goto LAB_1407f0ad4;
      }
      goto LAB_1407f077a;
    }
    goto LAB_1407f0b5a;
  }
LAB_1407f077a:
  puVar4 = local_278;
  uVar15 = (longlong)local_270 - (longlong)local_278;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
    FUN_1400684da(&DAT_14c9482f8);
    atexit(FUN_1427b7fa2);
    _Init_thread_footer(&DAT_14c948490);
  }
  puVar2 = DAT_14c948340;
  uVar13 = 0;
  uVar14 = (ulonglong)(DAT_14c948348 - 1);
  if (DAT_14c948348 == 0) {
    uVar14 = uVar13;
  }
LAB_1407f07c8:
  uVar10 = (uint)(uVar13 + uVar14);
  if (2 < (int)uVar10) {
    uVar7 = uVar13 + uVar14 & 0xffffffff;
    if (((DAT_14c948340[uVar7 - 1] != 0x2f) && (DAT_14c948340[uVar7 - 1] != 0x5c)) ||
       (DAT_14c948340[uVar7 - 2] == 0x3a)) goto LAB_1407f087e;
LAB_1407f07f2:
    uVar13 = uVar13 - 1;
    goto LAB_1407f07c8;
  }
  if (uVar10 == 2) {
    if (((DAT_14c948340[1] != 0x5c) && (DAT_14c948340[1] != 0x2f)) ||
       ((*DAT_14c948340 - 0x2f < 0x2e &&
        ((0x200000000801U >> ((ulonglong)(*DAT_14c948340 - 0x2f) & 0x3f) & 1) != 0))))
    goto LAB_1407f087e;
    goto LAB_1407f07f2;
  }
  if (uVar10 == 0) goto LAB_1407f08cc;
LAB_1407f087e:
  uVar11 = (uint)(uVar15 >> 1);
  if ((int)uVar10 <= (int)uVar11) {
    uVar6 = (int)uVar11 >> 0x1f & uVar11;
    uVar8 = uVar11 - uVar6;
    if ((int)uVar10 < (int)uVar8) {
      uVar8 = uVar10;
    }
    local_50 = 0;
    if (0 < (int)uVar8) {
      local_50 = uVar8;
    }
    local_58 = puVar4 + (longlong)(int)uVar6 * 2;
    local_290 = DAT_14c948340;
    local_288 = uVar10;
    cVar5 = FUN_14005b3f4();
    if (cVar5 != '\0') {
      if (uVar10 == uVar11) {
LAB_1407f0b5a:
        uVar15 = 0;
        goto LAB_1407f0ad4;
      }
      iVar12 = (int)uVar14;
      if ((puVar2[(longlong)iVar12 + (uVar13 - 1)] == 0x2f) ||
         (puVar2[(longlong)iVar12 + (uVar13 - 1)] == 0x5c)) {
        if (((int)uVar13 + iVar12 != 1) ||
           ((*(short *)(puVar4 + 2) != 0x2f && (*(short *)(puVar4 + 2) != 0x5c))))
        goto LAB_1407f0b5a;
      }
      else {
        uVar15 = 0;
        if ((*(short *)(puVar4 + uVar13 * 2 + (longlong)iVar12 * 2) == 0x2f) ||
           (*(short *)(puVar4 + uVar13 * 2 + (longlong)iVar12 * 2) == 0x5c)) goto LAB_1407f0ad4;
      }
    }
  }
LAB_1407f08cc:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  puVar3 = local_2b8;
  local_2b0 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  puVar4 = local_278;
  local_2a8 = 0;
  uVar15 = (ulonglong)((longlong)local_270 - (longlong)local_278) >> 1;
  local_58 = local_278;
  local_50 = (uint)uVar15;
  cVar5 = FUN_1449072f6(&local_58,&local_27c);
  if (cVar5 == '\0') {
    local_2a0 = puVar4;
    local_298 = (uint)uVar15;
    FUN_1427b5a38(&local_290,&local_2a0,local_27c);
    FUN_140008f88(&local_2b0,&local_290);
    if (local_290 != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_290 + 0x10))();
    }
    uVar15 = 0;
  }
  else {
    if ((param_2 & 2) == 0) {
LAB_1407f0960:
      uVar15 = 0;
    }
    else if (local_2b9 == '\0') {
      local_2c8 = puVar3;
      uVar15 = 0;
      cVar5 = (**(code **)(*DAT_14c9518c8 + 0x18))(DAT_14c9518c8,param_1,0,0);
      if (cVar5 != '\0') goto LAB_1407f0a8a;
    }
    else {
      cVar5 = (**(code **)(*DAT_14c9518c8 + 0x40))(DAT_14c9518c8,param_1,puVar3);
      if (cVar5 == '\0') goto LAB_1407f0960;
LAB_1407f0a8a:
      uVar15 = CONCAT71((int7)(uVar15 >> 8),2);
      if (param_2 == 0xff) goto LAB_1407f0ac4;
    }
    if ((param_2 & 1) != 0) {
      if ((DAT_14c9481d8 == (longlong *)0x0 || DAT_14c9481e0 == 0) ||
         (cVar5 = (**(code **)(*DAT_14c9481d8 + 0x30))(), cVar5 == '\0')) {
        puVar1 = DAT_14c844ed8;
        if (DAT_14c844ed8 == (undefined8 *)0x0) goto LAB_1407f0ac4;
        local_290 = (ushort *)*param_1;
        FUN_14491a35e(&local_58);
        local_50 = 0x1000000;
        cVar5 = FUN_1402df388(*puVar1,&local_58);
      }
      else {
        plVar9 = DAT_14c9481d8;
        if (DAT_14c9481e0 == 0) {
          plVar9 = (longlong *)0x0;
        }
        cVar5 = (**(code **)(*plVar9 + 0x58))(plVar9,*param_1);
      }
      if (cVar5 != '\0') {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = *param_1;
          cVar5 = '\x06';
          if ((char)*(undefined4 *)(param_1 + 1) != '\0') {
            cVar5 = (char)*(undefined4 *)(param_1 + 1);
          }
          *(char *)(puVar3 + 1) = cVar5;
        }
        uVar15 = uVar15 | 1;
      }
    }
  }
LAB_1407f0ac4:
  if (local_2b0 != (longlong *)0x0) {
    (**(code **)(*local_2b0 + 0x10))();
  }
LAB_1407f0ad4:
  if (local_260 == '\x01') {
    FUN_1400020a8(local_278);
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 1407f0cd8 FUN_1407f0cd8 body=186 status=ok
// SIG undefined FUN_1407f0cd8(void)

void FUN_1407f0cd8(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_1407f0d29;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_1407f0d29:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_1407f0d70;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_1407f0d70:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1407f0d92 FUN_1407f0d92 body=406 status=ok
// SIG undefined FUN_1407f0d92(void)

void FUN_1407f0d92(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if ((param_1[0x66] != 0) && (plVar1 = (longlong *)param_1[0x23], plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x138) != 0)) {
      *(longlong *)(param_1[0x66] + 0x18) = *(longlong *)(lVar2 + 0x138);
      lVar2 = param_1[0x66];
      uVar3 = FUN_1407f0f28(param_1 + 0x7a,(int)param_1[0x75]);
      *(undefined4 *)(lVar2 + 0x44) = uVar3;
      uVar3 = FUN_1407f0f28(param_1 + 0x8d,*(undefined4 *)((longlong)param_1 + 0x3ac));
      *(undefined4 *)(lVar2 + 0x48) = uVar3;
      uVar3 = FUN_1407f0f28(param_1 + 0xa0,*(undefined4 *)((longlong)param_1 + 0x3a4));
      *(undefined4 *)(lVar2 + 0x40) = uVar3;
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)((longlong)param_1 + 0x3bc);
      uVar3 = FUN_1407f0f28(param_1 + 0xd9,*(undefined4 *)((longlong)param_1 + 0x3b4));
      *(undefined4 *)(lVar2 + 0x50) = uVar3;
      uVar3 = FUN_1407f0f28(param_1 + 0xc6,(int)param_1[0x76]);
      *(undefined4 *)(lVar2 + 0x4c) = uVar3;
      uVar3 = FUN_1407f0f28(param_1 + 0xec);
      *(undefined4 *)(lVar2 + 0x54) = uVar3;
      *(byte *)(lVar2 + 0x5e) = *(byte *)((longlong)param_1 + 0x314) >> 1 & 1;
      *(byte *)(lVar2 + 0x5f) = *(byte *)((longlong)param_1 + 0x314) >> 2 & 1;
      *(undefined1 *)(lVar2 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x31d);
      *(byte *)(lVar2 + 0x5c) = *(byte *)((longlong)param_1 + 0x31c) & 1;
      if (((0.0 < DAT_14c763b28) && (*(float *)(param_1 + 0x75) != 0.0)) &&
         (DAT_14c763b28 <= ABS((*(float *)(param_1 + 0x12d) * 2236.942) / 100000.0))) {
        *(undefined4 *)(lVar2 + 0x44) = 0x3dcccccd;
      }
      uVar3 = (**(code **)(*param_1 + 0x478))(param_1);
      *(undefined4 *)(lVar2 + 0x20) = uVar3;
    }
  }
  return;
}



// FUNCTION 1407f0f28 FUN_1407f0f28 body=181 status=ok
// SIG undefined FUN_1407f0f28(void)

ulonglong FUN_1407f0f28(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = (uint)(param_2 >> 0x20);
  fVar5 = (float)param_2;
  auVar7._8_4_ = in_XMM1_Dc;
  auVar7._0_8_ = param_2;
  auVar7._12_4_ = in_XMM1_Dd;
  auVar8._4_12_ = auVar7._4_12_;
  if (*(char *)(param_1 + 8) == '\x01') {
    fVar3 = -fVar5;
    if (-fVar5 <= fVar5) {
      fVar3 = fVar5;
    }
    auVar8._0_4_ = fVar5 * fVar3;
    param_2 = auVar8._0_8_;
  }
  else if (*(char *)(param_1 + 8) == '\x02') {
    param_1 = param_1 + 0x10;
    lVar1 = FUN_1401e2d36(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_1401e2d36(param_1);
      if (*(int *)(lVar1 + 0x78) != 0) {
        uVar2 = FUN_1401e2d36(param_1);
        uVar2 = FUN_1448c9f94(uVar2,ABS(fVar5),0);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x20);
        fVar3 = (float)uVar2;
        if (1.0 <= fVar3) {
          fVar3 = 1.0;
        }
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        param_2 = CONCAT44(uVar6 & (uVar4 ^ 0x80000000),-(uint)(fVar5 < 0.0) & (uint)-fVar3) |
                  CONCAT44(~uVar6 & uVar4,~-(uint)(fVar5 < 0.0) & (uint)fVar3);
      }
    }
  }
  return param_2;
}



// FUNCTION 1407f0fde FUN_1407f0fde body=386 status=ok
// SIG undefined FUN_1407f0fde(void)

void FUN_1407f0fde(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  double local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  dVar14 = *(double *)(param_1 + 0x40);
  if ((9.999999747378752e-05 <= dVar14) &&
     (dVar12 = *(double *)(param_1 + 0x1d0), 9.999999747378752e-05 <= dVar12)) {
    dVar13 = *(double *)(param_1 + 0x38);
    if (dVar13 <= dVar12) {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        uVar10 = 0;
        do {
          lVar8 = uVar10 * 0x30;
          plVar2 = (longlong *)(param_1 + 0x50 + lVar8);
          bVar9 = *(byte *)(param_1 + 0x7a + lVar8);
          uVar3 = *(undefined1 *)((ulonglong)bVar9 + 0x20 + (longlong)plVar2);
          bVar9 = bVar9 + 1;
          *(byte *)(param_1 + 0x7a + lVar8) = bVar9;
          if (*(byte *)(param_1 + 0x78 + lVar8) <= bVar9) {
            *(undefined1 *)((longlong)plVar2 + 0x2a) = *(undefined1 *)((longlong)plVar2 + 0x29);
          }
          plVar4 = (longlong *)plVar2[1];
          if (plVar4 != (longlong *)0x0) {
            iVar7 = (int)plVar4[1];
            do {
              if (iVar7 == 0) goto LAB_1407f111f;
              LOCK();
              iVar6 = (int)plVar4[1];
              bVar11 = iVar7 == iVar6;
              if (bVar11) {
                *(int *)(plVar4 + 1) = iVar7 + 1;
                iVar6 = iVar7;
              }
              iVar7 = iVar6;
              UNLOCK();
            } while (!bVar11);
            lVar8 = *plVar2;
            if (lVar8 != 0) {
              local_58 = (double)plVar2[3] + *(double *)(param_1 + 0x38);
              lVar5 = plVar2[2];
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              local_60 = 0x3f50624dd2f1a9fc;
              local_68 = 0;
              local_50 = lVar8;
              local_48 = plVar4;
              FUN_1407f1161(&local_50,(int)lVar5,uVar3,0x50);
            }
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
LAB_1407f111f:
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulonglong *)(param_1 + 0x48));
        dVar13 = *(double *)(param_1 + 0x38);
        dVar14 = *(double *)(param_1 + 0x40);
        dVar12 = *(double *)(param_1 + 0x1d0);
      }
      dVar13 = dVar13 + dVar14;
    }
    *(double *)(param_1 + 0x38) = dVar13 - dVar12;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f1161 FUN_1407f1161 body=557 status=ok
// SIG undefined FUN_1407f1161(void)

void FUN_1407f1161(longlong *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,double param_6,double param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((DAT_14cb262b8 == '\x01') && (*param_1 != 0)) {
    uVar7 = (ulonglong)DAT_14cb262bc;
    uVar9 = (longlong)(param_7 * (double)uVar7) & 0xffffffff;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
    puVar3 = (undefined8 *)*param_1;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) {
      uVar8 = *puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar8 = *(undefined8 *)*param_1;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
    uVar6 = DAT_14cb262d8;
    lVar10 = (longlong)(int)DAT_14cb262d8;
    DAT_14cb262d8 = DAT_14cb262d8 + 1;
    if (DAT_14cb262dc < DAT_14cb262d8) {
      FUN_145748684(uVar6);
    }
    lVar5 = DAT_14cb262d0;
    *(undefined8 *)(DAT_14cb262d0 + lVar10 * 0x48) = uVar8;
    *(undefined4 *)(lVar5 + 8 + lVar10 * 0x48) = param_2;
    *(undefined1 *)(lVar5 + 0xc + lVar10 * 0x48) = 0x90;
    *(undefined1 *)(lVar5 + 0xd + lVar10 * 0x48) = param_5;
    *(undefined1 *)(lVar5 + 0x10 + lVar10 * 0x48) = param_3;
    *(undefined1 *)(lVar5 + 0x11 + lVar10 * 0x48) = param_4;
    *(ulonglong *)(lVar5 + 0x18 + lVar10 * 0x48) = uVar9;
    *(undefined1 *)(lVar5 + 0x20 + lVar10 * 0x48) = 0x80;
    *(undefined1 *)(lVar5 + 0x21 + lVar10 * 0x48) = param_5;
    *(undefined1 *)(lVar5 + 0x24 + lVar10 * 0x48) = param_3;
    *(undefined1 *)(lVar5 + 0x25 + lVar10 * 0x48) = 0;
    *(ulonglong *)(lVar5 + 0x2c + lVar10 * 0x48) =
         (longlong)((double)uVar7 * param_6 + (double)uVar9) & 0xffffffff;
    *(undefined8 **)(lVar5 + 0x38 + lVar10 * 0x48) = puVar3;
    *(longlong **)(lVar5 + 0x40 + lVar10 * 0x48) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
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
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
  }
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001407f138a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407f138e FUN_1407f138e body=88 status=ok
// SIG undefined FUN_1407f138e(void)

void FUN_1407f138e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
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



// FUNCTION 1407f13e6 FUN_1407f13e6 body=113 status=ok
// SIG undefined FUN_1407f13e6(void)

void FUN_1407f13e6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 1407f1458 FUN_1407f1458 body=345 status=ok
// SIG undefined FUN_1407f1458(void)

void FUN_1407f1458(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *(undefined4 *)(param_1 + 3) = 0;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    param_1[1] = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    param_1[2] = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1407f15b2 FUN_1407f15b2 body=694 status=ok
// SIG undefined FUN_1407f15b2(void)

void FUN_1407f15b2(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_1400020a8();
  }
  FUN_145748bfc(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  FUN_145748c32(param_1 + 0x1f0);
  lVar16 = 0x1e8;
  do {
    *(undefined4 *)(param_1 + -8 + lVar16) = 0;
    if (*(longlong *)(param_1 + -0x10 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar2 = param_1 + lVar16;
    plVar12 = (longlong *)(lVar2 + -0x50);
    puVar1 = (uint *)(lVar2 + -0x40);
    iVar4 = *(int *)(lVar2 + -0x28);
    if (iVar4 == 0) {
      uVar14 = 0;
      uVar15 = 1;
      iVar6 = 0;
      iVar11 = 0;
    }
    else {
      puVar10 = *(uint **)(lVar2 + -0x30);
      if (*(uint **)(lVar2 + -0x30) == (uint *)0x0) {
        puVar10 = puVar1;
      }
      uVar17 = *puVar10;
      if (uVar17 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar11 = 0;
        do {
          if (uVar15 == uVar14) goto LAB_1407f178f;
          iVar11 = iVar11 + 0x20;
          uVar17 = puVar10[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar14 = 0;
        iVar11 = 0;
      }
      uVar15 = (ulonglong)(-uVar17 & uVar17);
      uVar3 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 < iVar4) {
      uVar17 = 0xffffffff;
      do {
        lVar13 = *plVar12;
        lVar5 = (longlong)iVar6;
        FUN_145748bd6(*(undefined8 *)(lVar13 + 0x10 + lVar5 * 0x28),
                      *(undefined4 *)(lVar13 + 0x18 + lVar5 * 0x28));
        if (*(longlong *)(lVar13 + 0x10 + lVar5 * 0x28) != 0) {
          FUN_1400020a8();
        }
        uVar17 = uVar17 & ~(uint)uVar15;
        puVar10 = *(uint **)(lVar2 + -0x30);
        if (*(uint **)(lVar2 + -0x30) == (uint *)0x0) {
          puVar10 = puVar1;
        }
        iVar4 = *(int *)(lVar2 + -0x28);
        iVar6 = (int)uVar14;
        lVar13 = (longlong)iVar6;
        uVar7 = puVar10[lVar13] & uVar17;
        if (uVar7 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar5 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar7 = puVar10[lVar13 + lVar5 + 1];
            if (uVar7 != 0) break;
            lVar5 = lVar5 + 1;
            if (iVar9 - lVar13 == lVar5) goto LAB_1407f178f;
          }
          uVar14 = (ulonglong)(iVar6 + (int)lVar5 + 1);
          uVar17 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar3 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar4);
    }
LAB_1407f178f:
    *(undefined4 *)(lVar2 + -0x48) = 0;
    if (*(int *)(lVar2 + -0x44) != 0) {
      FUN_140549ad6(plVar12,0);
    }
    *(undefined8 *)(lVar2 + -0x20) = 0xffffffff;
    *(undefined4 *)(lVar2 + -0x28) = 0;
    if (0x80 < *(uint *)(lVar2 + -0x24)) {
      *(undefined4 *)(lVar2 + -0x24) = 0x80;
      FUN_1446efbd8(puVar1);
    }
    if (*(longlong *)(lVar2 + -0x30) != 0) {
      FUN_1400020a8();
    }
    if (*plVar12 != 0) {
      FUN_1400020a8();
    }
    lVar16 = lVar16 + -0x50;
    if (lVar16 == 8) {
      return;
    }
  } while( true );
}



// FUNCTION 1407f1868 FUN_1407f1868 body=346 status=ok
// SIG undefined FUN_1407f1868(void)

void FUN_1407f1868(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f19c4 FUN_1407f19c4 body=346 status=ok
// SIG undefined FUN_1407f19c4(void)

void FUN_1407f19c4(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f1b20 FUN_1407f1b20 body=313 status=ok
// SIG undefined FUN_1407f1b20(void)

undefined8
FUN_1407f1b20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  undefined1 auStack_68 [45];
  byte local_3b;
  byte local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = true;
  if ((DAT_14cadac08 == '\0') && (param_5[1] != *param_5)) {
    local_39 = param_5[1] == 0;
  }
  local_3a = *(byte *)((longlong)param_5 + 0x14) & 1;
  local_3b = *(byte *)((longlong)param_5 + 0x14) >> 1 & 1;
  (**(code **)(*param_2 + 0x178))(param_2,&local_39,1);
  (**(code **)(*param_2 + 0x178))(param_2,&local_3a,1);
  (**(code **)(*param_2 + 0x178))(param_2,&local_3b,1);
  (**(code **)(*param_2 + 0x160))(param_2,param_5);
  if (local_39 == '\0') {
    (**(code **)(*param_2 + 0x160))(param_2,param_5 + 1);
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_5[1] = *param_5;
  }
  FUN_1407f1c5a(param_5 + 2,param_2,param_4);
  iVar1 = (*(uint *)((longlong)param_5 + 0x14) & 0xfffffffc | (uint)local_3a) + (uint)local_3b * 2;
  *(int *)((longlong)param_5 + 0x14) = iVar1;
  *(bool *)param_4 = (*(byte *)((longlong)param_2 + 0x29) & 2) == 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f1c5a FUN_1407f1c5a body=219 status=ok
// SIG undefined FUN_1407f1c5a(void)

void FUN_1407f1c5a(uint *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  uint local_38;
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_31 = (byte)(*param_1 >> 0x1f);
    local_38 = *param_1 & 0x7fffffff;
    (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
    (**(code **)(*param_2 + 0x188))(param_2,&local_38);
  }
  else {
    local_31 = 0;
    local_38 = 0;
    (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
    (**(code **)(*param_2 + 0x188))(param_2,&local_38);
    *param_1 = local_38 & 0x7fffffff | (uint)local_31 << 0x1f;
  }
  *(bool *)param_3 = (*(byte *)((longlong)param_2 + 0x29) & 2) == 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f1d36 FUN_1407f1d36 body=279 status=ok
// SIG undefined FUN_1407f1d36(void)

void FUN_1407f1d36(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar3 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar3;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar3;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar3) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar3);
  }
  cVar5 = FUN_14022c706(param_1);
  if (cVar5 == '\0') {
    lVar6 = FUN_1407f1eb8(param_1);
    FUN_1407f1e4e(lVar6,param_4,param_6);
    FUN_14023a0a8(lVar6,param_1,7,param_2,param_3,param_5);
    cVar5 = (**(code **)(*(longlong *)*param_4 + 0x40))();
    if (cVar5 == '\x01') {
      *(byte *)(lVar6 + 0x49) = *(byte *)(lVar6 + 0x49) | 1;
    }
  }
  plVar4 = (longlong *)param_4[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001407f1e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407f1e4e FUN_1407f1e4e body=105 status=ok
// SIG undefined FUN_1407f1e4e(void)

void FUN_1407f1e4e(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x50) = *param_3;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar6 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  bVar4 = (**(code **)(*(longlong *)*param_2 + 0x58))();
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe | bVar4;
  cVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfd | cVar5 * '\x02';
  cVar5 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfb | cVar5 << 2;
  return;
}



// FUNCTION 1407f1eb8 FUN_1407f1eb8 body=107 status=ok
// SIG undefined FUN_1407f1eb8(void)

longlong FUN_1407f1eb8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_14696a398(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_1407f1f24(param_1 + 0x1f0);
  return (longlong)iVar1 * 0x70 + *(longlong *)(param_1 + 0x1f0);
}



// FUNCTION 1407f1f24 FUN_1407f1f24 body=60 status=ok
// SIG undefined FUN_1407f1f24(void)

int FUN_1407f1f24(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428764ec(param_1,iVar1);
  }
  FUN_1428764c0((longlong)iVar1 * 0x70 + *param_1,1);
  return iVar1;
}



// FUNCTION 1407f1f68 FUN_1407f1f68 body=140 status=ok
// SIG undefined FUN_1407f1f68(void)

undefined8 * FUN_1407f1f68(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  local_20 = FUN_1402d2740();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  local_18 = 1;
  local_16 = 0;
  local_14 = 0xffffffff;
  param_1[1] = 0;
  uVar1 = FUN_144830b78();
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f1ff6 FUN_1407f1ff6 body=79 status=ok
// SIG undefined FUN_1407f1ff6(void)

undefined8 * FUN_1407f1ff6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1407f2096(param_1,iVar1);
      FUN_1407f2045(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1407f2045 FUN_1407f2045 body=80 status=ok
// SIG undefined FUN_1407f2045(void)

void FUN_1407f2045(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1407f2096 FUN_1407f2096 body=326 status=ok
// SIG undefined FUN_1407f2096(void)

void FUN_1407f2096(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407f2104;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1407f2104:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407f21dc FUN_1407f21dc body=21 status=ok
// SIG undefined FUN_1407f21dc(void)

undefined8 FUN_1407f21dc(longlong param_1)

{
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1407f21f1 FUN_1407f21f1 body=652 status=ok
// SIG undefined FUN_1407f21f1(void)

void FUN_1407f21f1(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((param_1 >> 0x20 != 0) && (uVar4 = (uint)param_1, -1 < (int)uVar4)) &&
       ((int)uVar4 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == (int)(param_1 >> 0x20))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
      (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
    if (DAT_14cb1c498 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_1427b09ee;
      local_38 = &LAB_147e36893;
      local_40 = FUN_146420564;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10004001;
      local_60 = 8;
      local_68 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb1c498);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cb1c498 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = FUN_1427b09ee;
        local_38 = &LAB_147e36893;
        local_40 = FUN_146420564;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10004001;
        local_60 = 8;
        local_68 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      plVar1 = (longlong *)FUN_144718840(plVar5,DAT_14cb1c498);
      if ((plVar5 != plVar1) && (plVar1 != (longlong *)0x0)) {
        lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (lVar2 != 0) {
          if (*(char *)(lVar2 + 0x118) == '\0') {
            uVar3 = FUN_144836af6(lVar2);
            FUN_1448367ba(lVar2,uVar3);
          }
          if (((*(char *)(lVar2 + 0x160) == '\x01') &&
              (4 < DAT_14c872be0 - *(longlong *)(lVar2 + 0x158))) &&
             ((*(longlong *)(lVar2 + 0x150) + 4U <= DAT_14c872be0 ||
              (*(char *)(lVar2 + 0x148) == '\0')))) {
            FUN_14012b994(lVar2);
          }
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f2484 FUN_1407f2484 body=57 status=ok
// SIG undefined FUN_1407f2484(void)

void FUN_1407f2484(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22d40 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22d40 = FUN_140002ddd(FUN_14643b6e4,uVar1,L"GpsModifier_Project");
  }
  return;
}



// FUNCTION 1407f24be FUN_1407f24be body=12 status=ok
// SIG undefined FUN_1407f24be(void)

void FUN_1407f24be(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001407f24c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1407f24ca FUN_1407f24ca body=59 status=ok
// SIG undefined FUN_1407f24ca(void)

undefined8 * FUN_1407f24ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1470;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407f250a FUN_1407f250a body=127 status=ok
// SIG undefined FUN_1407f250a(void)

void FUN_1407f250a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 1407f258a FUN_1407f258a body=358 status=ok
// SIG undefined FUN_1407f258a(void)

undefined4 *
FUN_1407f258a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407f278a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1407f26f2(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1407f2960(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f26f2 FUN_1407f26f2 body=152 status=ok
// SIG undefined FUN_1407f26f2(void)

void FUN_1407f26f2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1470e3eaa((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1407f275b;
    }
  }
  uVar5 = 0;
LAB_1407f275b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1407f278a FUN_1407f278a body=470 status=ok
// SIG undefined FUN_1407f278a(void)

int * FUN_1407f278a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1407f2960 FUN_1407f2960 body=679 status=ok
// SIG undefined FUN_1407f2960(void)

void FUN_1407f2960(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1407f29d5;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1407f29d5:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 1407f2c16 FUN_1407f2c16 body=865 status=ok
// SIG undefined FUN_1407f2c16(void)

undefined8 FUN_1407f2c16(longlong param_1,float param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return 1;
  }
  puVar1 = (uint *)(param_1 + 0x14);
  uVar3 = *puVar1;
  if ((int)uVar3 < 0) {
    return 1;
  }
  if (DAT_14c9647dc <= (int)uVar3) {
    return 1;
  }
  lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (lVar9 == 0) {
    return 1;
  }
  if (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x18)) {
    return 1;
  }
  if ((*(uint *)(lVar9 + 8) & 0x10200000) != 0) {
    return 1;
  }
  fVar11 = 1.0;
  if (param_2 <= 1.0) {
    fVar11 = param_2;
  }
  cVar6 = FUN_1407f2f78(*(longlong *)(param_1 + 0x48),(ulonglong)(uVar3 >> 0x10),
                        CONCAT71((int7)((ulonglong)lVar9 >> 8),0.0 <= *(float *)(param_1 + 0x54)),
                        CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),
                                 0.0 <= *(float *)(param_1 + 0x74)));
  if (cVar6 == '\0') {
    return 1;
  }
  puVar2 = (uint *)(param_1 + 0x1c);
  if (((((*(int *)(param_1 + 0x20) == 0) || (uVar3 = *puVar2, (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x20))))) ||
     ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
    if (((*(int *)(param_1 + 0x18) != 0) && (uVar3 = *puVar1, -1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        (((lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 != 0 &&
          (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x18))) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))))) {
      fVar10 = *(float *)(param_1 + 0x2c);
      if (fVar10 < 0.0) {
LAB_1407f2e29:
        if ((fVar10 != 0.0) || (NAN(fVar10))) goto LAB_1407f2d53;
      }
      else {
        fVar10 = fVar10 - fVar11;
        *(float *)(param_1 + 0x2c) = fVar10;
        if (0.0 <= fVar10) goto LAB_1407f2e29;
        if (-1 < *(int *)(param_1 + 0x28)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
      }
      lVar9 = FUN_14479d2ce(puVar1);
      lVar9 = *(longlong *)(lVar9 + 0x108);
      if ((lVar9 != 0) && (iVar4 = *(int *)(lVar9 + 0x30), (longlong)iVar4 != 0)) {
        lVar9 = *(longlong *)(lVar9 + 0x28);
        lVar8 = 0;
        do {
          lVar5 = *(longlong *)(lVar9 + lVar8);
          if ((lVar5 != 0) && (cVar6 = FUN_1407f4918(lVar5), cVar6 != '\0')) {
            if (*(char *)(param_1 + 0x10) == '\0') {
              FUN_145748e18((int *)(param_1 + 0x50),*(undefined8 *)(lVar5 + 0x2b8));
              FUN_145748e18((int *)(param_1 + 0x70),*(undefined8 *)(lVar5 + 0x2b8));
              *(undefined1 *)(param_1 + 0x10) = 1;
            }
            FUN_14485c47a(puVar2,lVar5);
            goto LAB_1407f2d53;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar4 * 8 != lVar8);
      }
      if (*(int *)(param_1 + 0x28) < 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
      }
      else {
        *(float *)(param_1 + 0x2c) = (float)*(int *)(param_1 + 0x28);
      }
    }
  }
  else {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar9 = *plVar7;
    }
    else {
      lVar9 = 0;
    }
    if (*(longlong *)(lVar9 + 0x2b8) == 0) {
      puVar2[0] = 0;
      puVar2[1] = 0;
    }
  }
LAB_1407f2d53:
  fVar10 = *(float *)(param_1 + 0x54);
  if (fVar10 < 0.0) {
LAB_1407f2d72:
    if ((fVar10 == 0.0) && (!NAN(fVar10))) goto LAB_1407f2f34;
  }
  else {
    fVar10 = fVar10 - fVar11;
    *(float *)(param_1 + 0x54) = fVar10;
    if (0.0 <= fVar10) goto LAB_1407f2d72;
    if (-1 < *(int *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
LAB_1407f2f34:
    FUN_1456e6df2(*(undefined8 *)(param_1 + 0x48));
    if (*(int *)(param_1 + 0x50) < 0) {
      fVar10 = -1.0;
    }
    else {
      fVar10 = (float)*(int *)(param_1 + 0x50);
    }
    *(float *)(param_1 + 0x54) = fVar10;
  }
  fVar10 = *(float *)(param_1 + 0x74);
  if (0.0 <= fVar10) {
    fVar10 = fVar10 - fVar11;
    *(float *)(param_1 + 0x74) = fVar10;
    if (fVar10 < 0.0) {
      if (-1 < *(int *)(param_1 + 0x70)) {
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      goto LAB_1407f2e46;
    }
  }
  if (fVar10 != 0.0) {
    return 1;
  }
  if (NAN(fVar10)) {
    return 1;
  }
LAB_1407f2e46:
  FUN_1407f4802(*(longlong *)(param_1 + 0x48) + 0xd0,0);
  if (*(int *)(param_1 + 0x70) < 0) {
    fVar11 = -1.0;
  }
  else {
    fVar11 = (float)*(int *)(param_1 + 0x70);
  }
  *(float *)(param_1 + 0x74) = fVar11;
  return 1;
}



// FUNCTION 1407f2f78 FUN_1407f2f78 body=6281 status=ok
// SIG undefined FUN_1407f2f78(void)

undefined8 FUN_1407f2f78(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  double *pdVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong *puVar20;
  longlong lVar21;
  longlong *plVar22;
  int *piVar23;
  int *piVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  char *pcVar31;
  uint *puVar32;
  char *pcVar33;
  int *piVar34;
  ulonglong uVar35;
  uint *puVar36;
  uint *puVar37;
  ulonglong uVar38;
  uint uVar39;
  ulonglong uVar40;
  bool bVar41;
  float fVar42;
  undefined4 uVar43;
  undefined8 uVar44;
  undefined4 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  LARGE_INTEGER *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  uint *local_1a0;
  longlong local_198;
  uint *local_190;
  undefined8 local_188;
  undefined8 *local_180;
  ulonglong local_178;
  int local_16c;
  uint *local_168;
  uint *local_160;
  uint *local_158;
  ulonglong local_150;
  uint *local_148;
  uint *local_140;
  uint local_138;
  int local_134;
  ulonglong local_130;
  int local_124;
  int local_120;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  LARGE_INTEGER local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (DAT_14cb96828 == (undefined8 *)0x0) {
    DAT_14cb96828 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *DAT_14cb96828 = 0;
    DAT_14cb96828[1] = 0;
    DAT_14cb96828[2] = 0;
    DAT_14cb96828[3] = 0;
    DAT_14cb96828[4] = 0;
    DAT_14cb96828[5] = 0;
  }
  puVar10 = DAT_14cb96828;
  FUN_1412f6f7a(DAT_14cb96828,param_1);
  if (*(char *)(param_1 + 0x138) == '\0') {
    cVar6 = *(char *)(param_1 + 0x139);
    *(char *)(param_1 + 0x138) = param_3;
    *(char *)(param_1 + 0x139) = param_4;
    if (param_3 != '\0' || param_4 != '\0') goto LAB_1407f3051;
    if (cVar6 != '\0') goto LAB_1407f30a3;
  }
  else {
    *(char *)(param_1 + 0x138) = param_3;
    *(char *)(param_1 + 0x139) = param_4;
    if (param_3 == '\0' && param_4 == '\0') {
LAB_1407f30a3:
      FUN_145d3e75a(param_1 + 0xd0);
    }
    else {
LAB_1407f3051:
      puVar37 = (uint *)(param_1 + 0x139);
      if ((DAT_14c867b48 != (longlong *)0x0 && DAT_14c867b50 != 0) &&
         (cVar6 = (**(code **)(*DAT_14c867b48 + 0x30))(), cVar6 != '\0')) {
        local_188 = 0;
        plVar22 = DAT_14c867b48;
        if (DAT_14c867b50 == 0) {
          plVar22 = (longlong *)0x0;
        }
        cVar6 = (**(code **)(*plVar22 + 0x58))();
        if (cVar6 != '\0') goto LAB_1407f32a7;
      }
      local_198 = param_1;
      if (*(char *)(param_1 + 200) == '\x01') {
        *(undefined1 *)(param_1 + 200) = 0;
        FUN_1415b618c(param_1);
        lVar21 = local_198;
        if (((*(char *)(param_1 + 0x138) == '\x01') && (0 < *(int *)(param_1 + 0xc0))) ||
           ((*(char *)puVar37 == '\x01' && (0 < *(int *)(param_1 + 0xc4))))) {
          local_190 = (uint *)(param_1 + 0xe0);
          uVar11 = *(uint *)(param_1 + 0xf8);
          if (uVar11 == 0) {
            uVar35 = 1;
            iVar27 = 0;
            uVar38 = 0;
            uVar7 = 0;
          }
          else {
            puVar13 = *(uint **)(param_1 + 0xf0);
            if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
              puVar13 = local_190;
            }
            uVar7 = *puVar13;
            if (uVar7 == 0) {
              iVar27 = uVar11 + 0x1e;
              if (-1 < (int)(uVar11 - 1)) {
                iVar27 = uVar11 - 1;
              }
              uVar38 = 0;
              uVar35 = (ulonglong)(uint)(iVar27 >> 5);
              if (iVar27 >> 5 < 1) {
                uVar35 = uVar38;
              }
              iVar27 = 0;
              do {
                if (uVar35 == uVar38) goto LAB_1407f31bb;
                iVar27 = iVar27 + 0x20;
                uVar7 = puVar13[uVar38 + 1];
                uVar38 = uVar38 + 1;
              } while (uVar7 == 0);
            }
            else {
              iVar27 = 0;
              uVar38 = 0;
            }
            uVar35 = (ulonglong)(-uVar7 & uVar7);
            uVar40 = uVar35 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar7 = (iVar27 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if ((int)uVar11 <= (int)uVar7) {
              uVar7 = uVar11;
            }
          }
          if (uVar7 != uVar11) {
            uVar19 = 0xffffffff;
            local_1a0 = puVar37;
            local_180 = puVar10;
            local_178 = (ulonglong)uVar11;
            do {
              lVar14 = *(longlong *)(lVar21 + 0xd0);
              lVar25 = lVar14 + (longlong)(int)uVar7 * 0x6f8 + 8;
              FUN_140eb5152(lVar25);
              FUN_140f513b8(lVar21,lVar14 + (longlong)(int)uVar7 * 0x6f8 + 0x690);
              FUN_1456e703c(lVar25);
              FUN_140f514be(lVar21,lVar25);
              uVar19 = ~(uint)uVar35 & uVar19;
              puVar37 = *(uint **)(lVar21 + 0xf0);
              if (*(uint **)(lVar21 + 0xf0) == (uint *)0x0) {
                puVar37 = local_190;
              }
              uVar11 = *(uint *)(lVar21 + 0xf8);
              iVar29 = (int)uVar38;
              lVar14 = (longlong)iVar29;
              uVar7 = puVar37[lVar14] & uVar19;
              if (uVar7 == 0) {
                iVar12 = uVar11 + 0x1e;
                if (-1 < (int)(uVar11 - 1)) {
                  iVar12 = uVar11 - 1;
                }
                iVar12 = iVar12 >> 5;
                iVar27 = iVar27 + 0x20;
                iVar30 = iVar12;
                if (iVar12 < iVar29) {
                  iVar30 = iVar29;
                }
                if (iVar29 < iVar12) {
                  lVar25 = 0;
                  do {
                    uVar7 = puVar37[lVar14 + lVar25 + 1];
                    if (uVar7 != 0) {
                      uVar38 = (ulonglong)(iVar29 + (int)lVar25 + 1);
                      uVar19 = 0xffffffff;
                      goto LAB_1407f3431;
                    }
                    iVar27 = iVar27 + 0x20;
                    lVar25 = lVar25 + 1;
                  } while (iVar30 - lVar14 != lVar25);
                  uVar19 = 0xffffffff;
                  iVar29 = iVar30;
                }
                uVar38 = (ulonglong)(iVar29 + 1);
                uVar7 = uVar11;
              }
              else {
LAB_1407f3431:
                uVar35 = (ulonglong)(-uVar7 & uVar7);
                uVar40 = uVar35 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar40 != 0) {
                  for (; uVar40 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar7 = (iVar27 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if ((int)uVar11 <= (int)uVar7) {
                  uVar7 = uVar11;
                }
              }
              puVar10 = local_180;
              puVar37 = local_1a0;
            } while (uVar7 != (uint)local_178);
          }
        }
        else {
          FUN_145d3e75a(param_1 + 0xd0);
        }
      }
LAB_1407f31bb:
      if (((*(char *)(local_198 + 0x138) == '\x01') && (0 < *(int *)(local_198 + 0xc0))) ||
         (((char)*puVar37 == '\x01' && (0 < *(int *)(local_198 + 0xc4))))) {
        local_188 = 0;
        if (*(int *)(local_198 + 0x104) < *(int *)(local_198 + 0xd8)) {
          local_148 = (uint *)(local_198 + 0xe0);
          uVar11 = *(uint *)(local_198 + 0xf8);
          puVar37 = (uint *)(ulonglong)uVar11;
          lVar21 = local_198;
          if (uVar11 == 0) {
            uVar38 = 1;
            iVar27 = 0;
            puVar32 = (uint *)0x0;
            puVar13 = local_148;
            uVar7 = 0;
          }
          else {
            puVar9 = *(uint **)(local_198 + 0xf0);
            if (*(uint **)(local_198 + 0xf0) == (uint *)0x0) {
              puVar9 = local_148;
            }
            uVar7 = *puVar9;
            if (uVar7 == 0) {
              iVar27 = uVar11 + 0x1e;
              if (-1 < (int)(uVar11 - 1)) {
                iVar27 = uVar11 - 1;
              }
              puVar32 = (uint *)0x0;
              puVar13 = (uint *)(ulonglong)(uint)(iVar27 >> 5);
              if (iVar27 >> 5 < 1) {
                puVar13 = puVar32;
              }
              iVar27 = 0;
              do {
                if (puVar13 == puVar32) goto LAB_1407f34b2;
                iVar27 = iVar27 + 0x20;
                uVar7 = puVar9[(longlong)puVar32 + 1];
                puVar32 = (uint *)((longlong)puVar32 + 1);
              } while (uVar7 == 0);
            }
            else {
              puVar32 = (uint *)0x0;
              iVar27 = 0;
            }
            uVar38 = (ulonglong)(-uVar7 & uVar7);
            uVar35 = uVar38 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar7 = (uint)lVar14 ^ 0x3f;
            puVar13 = (uint *)(ulonglong)uVar7;
            uVar7 = (iVar27 - uVar7) + 0x3e;
            if ((int)uVar11 <= (int)uVar7) {
              uVar7 = uVar11;
            }
          }
          puVar9 = (uint *)(ulonglong)uVar7;
          if (uVar7 == uVar11) {
LAB_1407f34b2:
            puVar36 = (uint *)(ulonglong)uVar11;
          }
          else {
            uVar7 = 0xffffffff;
            puVar36 = (uint *)(ulonglong)uVar11;
            local_1a0 = puVar37;
            do {
              lVar14 = (longlong)(int)puVar9 * 0x6f8;
              iVar29 = *(int *)(*(longlong *)(lVar21 + 0xd0) + 4 + lVar14);
              local_190 = (uint *)CONCAT44(local_190._4_4_,iVar27);
              if ((iVar29 == 0) ||
                 (uVar11 = *(uint *)(*(longlong *)(lVar21 + 0xd0) + lVar14), (int)uVar11 < 0)) {
LAB_1407f372e:
                lVar14 = 0;
              }
              else {
                lVar14 = 0;
                if ((int)uVar11 < DAT_14c9647dc) {
                  plVar22 = (longlong *)
                            ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                  if (((plVar22 == (longlong *)0x0) || ((int)plVar22[2] != iVar29)) ||
                     ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) goto LAB_1407f372e;
                  lVar14 = *plVar22;
                }
              }
              iVar27 = *(int *)(puVar10 + 5);
              if ((longlong)iVar27 != 0) {
                lVar21 = puVar10[4];
                lVar25 = 0;
                do {
                  plVar22 = *(longlong **)(lVar21 + lVar25);
                  if ((plVar22 != (longlong *)0x0) &&
                     ((**(code **)(*plVar22 + 0x18))(plVar22,param_2,local_198), lVar14 != 0)) {
                    plVar22 = *(longlong **)(lVar21 + lVar25);
                    (**(code **)(*plVar22 + 0x10))(plVar22,param_2,lVar14,local_198);
                  }
                  lVar25 = lVar25 + 8;
                } while ((longlong)iVar27 * 8 != lVar25);
                puVar36 = (uint *)(ulonglong)*(uint *)(local_198 + 0xf8);
                puVar37 = local_1a0;
                lVar21 = local_198;
              }
              uVar7 = uVar7 & ~(uint)uVar38;
              puVar13 = *(uint **)(lVar21 + 0xf0);
              if (*(uint **)(lVar21 + 0xf0) == (uint *)0x0) {
                puVar13 = local_148;
              }
              iVar29 = (int)puVar32;
              lVar14 = (longlong)iVar29;
              uVar11 = puVar13[lVar14] & uVar7;
              iVar12 = (int)puVar36;
              iVar27 = (int)local_190;
              if (uVar11 == 0) {
                iVar30 = iVar12 + 0x1e;
                if (-1 < iVar12 + -1) {
                  iVar30 = iVar12 + -1;
                }
                iVar30 = iVar30 >> 5;
                iVar27 = (int)local_190 + 0x20;
                iVar8 = iVar30;
                if (iVar30 < iVar29) {
                  iVar8 = iVar29;
                }
                if (iVar29 < iVar30) {
                  lVar25 = 0;
                  do {
                    uVar11 = puVar13[lVar14 + lVar25 + 1];
                    if (uVar11 != 0) {
                      puVar32 = (uint *)(ulonglong)(iVar29 + (int)lVar25 + 1);
                      uVar7 = 0xffffffff;
                      goto LAB_1407f36f2;
                    }
                    iVar27 = iVar27 + 0x20;
                    lVar25 = lVar25 + 1;
                  } while (iVar8 - lVar14 != lVar25);
                  uVar7 = 0xffffffff;
                  lVar14 = (longlong)iVar8;
                }
                puVar13 = (uint *)(lVar14 + 1);
                puVar32 = (uint *)((ulonglong)puVar13 & 0xffffffff);
                puVar9 = puVar36;
                puVar37 = local_1a0;
                lVar21 = local_198;
              }
              else {
LAB_1407f36f2:
                uVar38 = (ulonglong)(-uVar11 & uVar11);
                uVar35 = uVar38 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar11 = (uint)lVar14 ^ 0x3f;
                puVar13 = (uint *)(ulonglong)uVar11;
                uVar11 = (iVar27 - uVar11) + 0x3e;
                puVar9 = (uint *)(ulonglong)uVar11;
                if (iVar12 <= (int)uVar11) {
                  puVar9 = puVar36;
                }
              }
            } while ((int)puVar9 != (int)puVar37);
          }
          iVar27 = *(int *)(puVar10 + 3);
          if ((longlong)iVar27 != 0) {
            lVar14 = puVar10[2];
            lVar25 = 0;
            do {
              puVar13 = *(uint **)(lVar14 + 0x28 + lVar25);
              if (puVar13 == (uint *)0x0) {
                uVar44 = 0;
              }
              else {
                uVar44 = (**(code **)(*(longlong *)puVar13 + 0x10))(puVar13,lVar21);
              }
              *(undefined8 *)(lVar14 + lVar25) = uVar44;
              lVar25 = lVar25 + 0x80;
            } while ((longlong)iVar27 * 0x80 != lVar25);
            puVar36 = (uint *)(ulonglong)*(uint *)(lVar21 + 0xf8);
          }
          iVar27 = (int)puVar36;
          if (iVar27 == 0) {
            uVar38 = 1;
            uVar35 = 0;
            iVar29 = 0;
            puVar37 = (uint *)0x0;
          }
          else {
            puVar37 = *(uint **)(lVar21 + 0xf0);
            if (*(uint **)(lVar21 + 0xf0) == (uint *)0x0) {
              puVar37 = local_148;
            }
            uVar11 = *puVar37;
            if (uVar11 == 0) {
              iVar29 = iVar27 + 0x1e;
              if (-1 < iVar27 + -1) {
                iVar29 = iVar27 + -1;
              }
              uVar35 = 0;
              uVar38 = (ulonglong)(uint)(iVar29 >> 5);
              if (iVar29 >> 5 < 1) {
                uVar38 = uVar35;
              }
              iVar29 = 0;
              do {
                if (uVar38 == uVar35) goto LAB_1407f3762;
                iVar29 = iVar29 + 0x20;
                uVar11 = puVar37[uVar35 + 1];
                uVar35 = uVar35 + 1;
              } while (uVar11 == 0);
            }
            else {
              uVar35 = 0;
              iVar29 = 0;
            }
            uVar38 = (ulonglong)(-uVar11 & uVar11);
            uVar40 = uVar38 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar11 = (uint)lVar14 ^ 0x3f;
            puVar13 = (uint *)(ulonglong)uVar11;
            uVar11 = (iVar29 - uVar11) + 0x3e;
            puVar37 = (uint *)(ulonglong)uVar11;
            if (iVar27 <= (int)uVar11) {
              puVar37 = puVar36;
            }
          }
          if ((int)puVar37 == iVar27) {
LAB_1407f3762:
            local_188 = CONCAT71((int7)((ulonglong)puVar37 >> 8),1);
          }
          else {
            local_188 = CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
            uVar11 = 0xffffffff;
            local_158 = puVar36;
            local_150 = uVar35;
            do {
              lVar14 = (longlong)(int)puVar37 * 0x6f8;
              iVar27 = *(int *)(*(longlong *)(lVar21 + 0xd0) + 4 + lVar14);
              local_16c = iVar29;
              local_138 = uVar11;
              local_130 = uVar38;
              if (iVar27 != 0) {
                puVar37 = (uint *)(*(longlong *)(lVar21 + 0xd0) + lVar14);
                uVar11 = *puVar37;
                if (((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) &&
                   ((puVar20 = (ulonglong *)
                               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                    puVar20 != (ulonglong *)0x0 &&
                    ((((int)puVar20[2] == iVar27 && ((puVar20[1] & 0x10200000) == 0)) &&
                     (uVar38 = *puVar20, uVar38 != 0)))))) {
                  QueryPerformanceCounter(&local_f8);
                  fVar42 = (float)((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0);
                  if (*(double *)(puVar37 + 0x26) <= 0.0) {
                    local_134 = *(int *)(lVar21 + 0x84);
                    local_180 = (undefined8 *)
                                CONCAT71(local_180._1_7_,
                                         0 < *(int *)(lVar21 + 0xc4) & *(byte *)(lVar21 + 0x139));
                    local_160 = puVar37 + 0x2c;
                    uVar11 = puVar37[0x18e];
                    lVar14 = (longlong)(int)uVar11;
                    dVar46 = (double)fVar42;
                    local_190 = puVar37;
                    local_178 = uVar38;
                    if (lVar14 == 0) {
                      *(double *)(puVar37 + 0x28) = dVar46;
LAB_1407f3b67:
                      puVar37 = local_190;
                      if (*(int *)(local_178 + 0x238) < 1) {
                        uVar11 = 0;
                      }
                      else {
                        local_140 = local_190 + 400;
                        local_168 = local_190 + 0x20;
                        lVar21 = 0;
                        uVar11 = 0;
                        local_1a0 = (uint *)0x0;
                        puVar13 = local_160;
                        uVar38 = local_178;
                        do {
                          iVar27 = *(int *)(*(longlong *)(uVar38 + 0x230) + 4 + lVar21 * 8);
                          if ((((iVar27 != 0) &&
                               (uVar7 = *(uint *)(*(longlong *)(uVar38 + 0x230) + lVar21 * 8),
                               -1 < (int)uVar7)) &&
                              (((int)uVar7 < DAT_14c9647dc &&
                               ((((plVar22 = (longlong *)
                                             ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                                  plVar22 != (longlong *)0x0 && ((int)plVar22[2] == iVar27)) &&
                                 ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) &&
                                (plVar22 = (longlong *)*plVar22, plVar22 != (longlong *)0x0)))))) &&
                             ((iVar27 = FUN_14490d72a(uVar38), iVar27 < 3 ||
                              (cVar6 = (**(code **)(*plVar22 + 0x6c8))(), cVar6 != '\0')))) {
                            puVar32 = *(uint **)(puVar37 + 0x18c);
                            if (*(uint **)(puVar37 + 0x18c) == (uint *)0x0) {
                              puVar32 = puVar13;
                            }
                            if ((longlong)(int)puVar37[0x18e] != 0) {
                              lVar14 = (longlong)(int)puVar37[0x18e] * 0xb0;
                              do {
                                cVar6 = FUN_141280818(puVar32,plVar22);
                                if (cVar6 != '\0') {
                                  if (puVar32 != (uint *)0x0) goto LAB_1407f3c8c;
                                  break;
                                }
                                puVar32 = puVar32 + 0x2c;
                                lVar14 = lVar14 + -0xb0;
                              } while (lVar14 != 0);
                            }
                            uVar7 = puVar37[0x18e];
                            puVar37[0x18e] = uVar7 + 1;
                            if (puVar37[399] < uVar7 + 1) {
                              FUN_145c2677c(puVar13,uVar7);
                            }
                            puVar32 = *(uint **)(puVar37 + 0x18c);
                            if (*(uint **)(puVar37 + 0x18c) == (uint *)0x0) {
                              puVar32 = puVar13;
                            }
                            puVar32 = puVar32 + (longlong)(int)uVar7 * 0x2c;
                            FUN_14657d74a(puVar32,plVar22);
LAB_1407f3c8c:
                            plVar15 = (longlong *)plVar22[0x86];
                            uVar40 = 0;
                            uVar35 = 0;
                            puVar9 = local_1a0;
                            uVar38 = uVar35;
                            if (plVar15 != (longlong *)0x0) {
                              if (DAT_14cae9568 == 0) {
                                local_f8.QuadPart = (LONGLONG)FUN_1417de738;
                                local_1b0 = &LAB_145893408;
                                local_1b8 = &LAB_1458cbbd2;
                                local_1c0 = &local_f8;
                                local_1c8 = &LAB_147ba21f1;
                                local_1d0 = &LAB_1463e9233;
                                local_1d8 = L"Engine";
                                local_1e0 = 0;
                                local_1e8 = 0x1000000c;
                                local_1f0 = 8;
                                local_1f8 = 0x2b8;
                                FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,
                                              &DAT_147ba21f0);
                                plVar15 = (longlong *)plVar22[0x86];
                                puVar13 = local_160;
                                puVar9 = local_1a0;
                                puVar37 = local_190;
                                if (plVar15 == (longlong *)0x0) goto LAB_1407f3ce6;
                              }
                              puVar9 = local_1a0;
                              uVar38 = uVar40;
                              if (((DAT_14cae9568 != 0) && (lVar14 = plVar15[2], lVar14 != 0)) &&
                                 ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar14 + 0x38) &&
                                  (uVar38 = uVar35,
                                  *(longlong *)
                                   (*(longlong *)(lVar14 + 0x30) +
                                   (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                                  DAT_14cae9568 + 0x30)))) {
                                uVar38 = (**(code **)(*plVar15 + 0x328))();
                                uVar38 = uVar38 & 0xffffffff;
                              }
                            }
LAB_1407f3ce6:
                            puVar32[2] = (uint)uVar38;
                            local_e8 = 0;
                            local_f8.QuadPart = 0;
                            uStack_f0 = 0;
                            local_108 = 0.0;
                            local_118 = 0.0;
                            uStack_110 = 0.0;
                            (**(code **)(*plVar22 + 0x718))(plVar22,&local_118,&local_f8);
                            if ((byte)local_180 == '\0') {
LAB_1407f3da7:
                              uVar38 = (ulonglong)puVar9 & 0xffffffff;
                            }
                            else if (((*(float *)(local_198 + 0x40) != 0.0) ||
                                     (NAN(*(float *)(local_198 + 0x40)))) ||
                                    ((uVar38 = CONCAT71((int7)(uVar38 >> 8),1),
                                     ((ulonglong)puVar9 & 1) == 0 &&
                                     ((local_108 - *(double *)(puVar32 + 8)) *
                                      (local_108 - *(double *)(puVar32 + 8)) +
                                      (local_118 - *(double *)(puVar32 + 4)) *
                                      (local_118 - *(double *)(puVar32 + 4)) +
                                      (uStack_110 - *(double *)(puVar32 + 6)) *
                                      (uStack_110 - *(double *)(puVar32 + 6)) <= 10000.0)))) {
                              FUN_143eeee47(puVar32 + 10,puVar32 + 4);
                              goto LAB_1407f3da7;
                            }
                            *(double *)(puVar32 + 8) = local_108;
                            puVar32[4] = (uint)local_118;
                            puVar32[5] = local_118._4_4_;
                            puVar32[6] = (uint)uStack_110;
                            puVar32[7] = uStack_110._4_4_;
                            FUN_143eeee47(local_140,puVar32 + 4);
                            iVar27 = *(int *)(local_198 + 0x4c);
                            local_124 = (int)local_118 - (int)local_118 % iVar27;
                            local_120 = (int)uStack_110 - (int)uStack_110 % iVar27;
                            local_11c = (int)local_108 - (int)local_108 % iVar27;
                            iVar27 = FUN_1448eb174(&local_124,0xc);
                            if (0 < local_134) {
                              local_1a0 = (uint *)CONCAT71(local_1a0._1_7_,(char)uVar38);
                              iVar29 = *(int *)(local_198 + 0x84);
                              dVar46 = (double)((float)iVar29 * 0.5);
                              dVar48 = 1.0 / (double)iVar29;
                              iVar30 = (int)(dVar48 * (dVar46 + *(double *)(puVar32 + 4))) * iVar29;
                              iVar12 = (int)((*(double *)(puVar32 + 6) + dVar46) * dVar48) * iVar29;
                              iVar29 = (int)((*(double *)(puVar32 + 8) + dVar46) * dVar48) * iVar29;
                              lVar14 = *(longlong *)(puVar37 + 0x20);
                              uVar7 = puVar37[0x22];
                              lVar25 = (longlong)(int)uVar7;
                              if (lVar25 != 0) {
                                uVar38 = 0;
                                do {
                                  if (((iVar30 == *(int *)(lVar14 + 0x68 + uVar38)) &&
                                      (iVar12 == *(int *)(lVar14 + 0x6c + uVar38))) &&
                                     (iVar29 == *(int *)(lVar14 + 0x70 + uVar38))) {
                                    uVar19 = (int)(uVar38 >> 3) * -0x11111111;
                                    if (uVar19 != 0xffffffff) goto LAB_1407f3f80;
                                    break;
                                  }
                                  uVar38 = uVar38 + 0x78;
                                } while (lVar25 * 0x78 - uVar38 != 0);
                              }
                              local_190[0x22] = uVar7 + 1;
                              if (local_190[0x23] < uVar7 + 1) {
                                FUN_14657e3c4(local_168,uVar7);
                                lVar14 = *(longlong *)local_168;
                              }
                              lVar25 = lVar25 * 0x78;
                              *(undefined8 *)(lVar14 + 0x38 + lVar25) = 0;
                              *(undefined4 *)(lVar14 + 0x40 + lVar25) = 0;
                              *(undefined8 *)(lVar14 + lVar25) = 0;
                              ((undefined8 *)(lVar14 + lVar25))[1] = 0;
                              puVar10 = (undefined8 *)(lVar14 + 0x10 + lVar25);
                              *puVar10 = 0;
                              puVar10[1] = 0;
                              *(undefined8 *)(lVar14 + 0x20 + lVar25) = 0;
                              *(undefined8 *)(lVar14 + 0x44 + lVar25) = 0xffffffff00000080;
                              *(undefined4 *)(lVar14 + 0x4c + lVar25) = 0;
                              *(undefined8 *)(lVar14 + 0x58 + lVar25) = 0;
                              *(undefined4 *)(lVar14 + 0x60 + lVar25) = 0;
                              *(int *)(lVar14 + 0x68 + lVar25) = iVar30;
                              *(int *)(lVar14 + 0x6c + lVar25) = iVar12;
                              *(int *)(lVar14 + 0x70 + lVar25) = iVar29;
                              FUN_140f514be(local_198,lVar14 + lVar25);
                              uVar19 = uVar7;
LAB_1407f3f80:
                              uVar18 = puVar32[3];
                              uVar38 = CONCAT71((int7)(int3)(uVar7 >> 8),local_1a0._0_1_);
                              puVar13 = local_160;
                              puVar37 = local_190;
                              if (uVar19 != uVar18) {
                                if ((-1 < (int)uVar18) && ((int)uVar18 < (int)local_190[0x22])) {
                                  piVar23 = (int *)(*(longlong *)local_168 + 4 +
                                                   (ulonglong)uVar18 * 0x78);
                                  *piVar23 = *piVar23 + -1;
                                }
                                uVar7 = 0xffffffff;
                                if ((-1 < (int)uVar19) && ((int)uVar19 < (int)local_190[0x22])) {
                                  piVar23 = (int *)(*(longlong *)local_168 + 4 +
                                                   (ulonglong)uVar19 * 0x78);
                                  *piVar23 = *piVar23 + 1;
                                  uVar7 = uVar19;
                                }
                                puVar32[3] = uVar7;
                              }
                            }
                            uVar7 = uVar11 >> 0xd ^ iVar27 - uVar11;
                            uVar19 = uVar7 << 8 ^ (-0x61c88647 - uVar11) - uVar7;
                            uVar18 = uVar19 >> 0xd ^ (uVar11 - uVar7) - uVar19;
                            uVar17 = uVar18 >> 0xc ^ (uVar7 - uVar19) - uVar18;
                            uVar11 = uVar17 << 0x10 ^ (uVar19 - uVar18) - uVar17;
                            uVar7 = uVar11 >> 5 ^ (uVar18 - uVar17) - uVar11;
                            uVar19 = uVar7 >> 3 ^ (uVar17 - uVar11) - uVar7;
                            uVar11 = uVar19 << 10 ^ (uVar11 - uVar7) - uVar19;
                            uVar11 = uVar11 >> 0xf ^ uVar7 - (uVar19 + uVar11);
                            local_1a0 = (uint *)(uVar38 & 0xffffffff);
                            uVar38 = local_178;
                          }
                          lVar21 = lVar21 + 1;
                        } while ((int)lVar21 < *(int *)(uVar38 + 0x238));
                        lVar21 = local_198;
                        if (((byte)local_180 & (byte)local_1a0) != 0) {
                          if (*(uint **)(puVar37 + 0x18c) != (uint *)0x0) {
                            puVar13 = *(uint **)(puVar37 + 0x18c);
                          }
                          uVar7 = puVar37[0x18e];
                          if ((longlong)(int)uVar7 != 0) {
                            lVar14 = 0;
                            do {
                              uVar44 = *(undefined8 *)((longlong)puVar13 + lVar14 + 0x20);
                              *(undefined8 *)((longlong)puVar13 + lVar14 + 0x50) = uVar44;
                              pcVar31 = (char *)((longlong)puVar13 + lVar14 + 0x10);
                              uVar2 = *(undefined8 *)pcVar31;
                              uVar3 = *(undefined8 *)(pcVar31 + 8);
                              pcVar31 = (char *)((longlong)puVar13 + lVar14 + 0x40);
                              *(undefined8 *)pcVar31 = uVar2;
                              *(undefined8 *)(pcVar31 + 8) = uVar3;
                              pcVar31 = (char *)((longlong)puVar13 + lVar14 + 0x28);
                              *(undefined8 *)pcVar31 = uVar2;
                              *(undefined8 *)(pcVar31 + 8) = uVar3;
                              *(undefined8 *)((longlong)puVar13 + lVar14 + 0x38) = uVar44;
                              lVar14 = lVar14 + 0xb0;
                            } while ((longlong)(int)uVar7 * 0xb0 - lVar14 != 0);
                          }
                        }
                      }
                      dVar46 = 0.0;
                      if (puVar37[0x19e] == uVar11) {
                        dVar46 = *(double *)(puVar37 + 0x1a0);
                        uVar43 = SUB84(dVar46,0);
                        uVar45 = (undefined4)((ulonglong)dVar46 >> 0x20);
                        if ((dVar46 == 0.0) && (!NAN(dVar46))) {
                          QueryPerformanceCounter(&local_f8);
                          dVar46 = (double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0;
                          goto LAB_1407f426e;
                        }
                        if (0.0 < dVar46) {
                          fVar42 = *(float *)(lVar21 + 0x48);
                          QueryPerformanceCounter(&local_f8);
                          dVar48 = *(double *)(puVar37 + 0x1a0);
                          uVar43 = SUB84(dVar48,0);
                          uVar45 = (undefined4)((ulonglong)dVar48 >> 0x20);
                          dVar46 = -1.0;
                          if ((double)fVar42 + dVar48 <
                              (double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0)
                          goto LAB_1407f426e;
                        }
                      }
                      else {
LAB_1407f426e:
                        *(double *)(puVar37 + 0x1a0) = dVar46;
                        uVar43 = SUB84(dVar46,0);
                        uVar45 = (undefined4)((ulonglong)dVar46 >> 0x20);
                      }
                      puVar37[0x19e] = uVar11;
                      uVar11 = puVar37[0x18e];
                    }
                    else {
                      dVar48 = *(double *)(puVar37 + 0x28);
                      if (((dVar48 == 0.0) && (!NAN(dVar48))) ||
                         ((double)*(float *)(lVar21 + 0x40) < dVar46 - dVar48)) {
                        *(double *)(puVar37 + 0x28) = dVar46;
                        local_1a0 = *(uint **)(puVar37 + 0x18c);
                        if (*(uint **)(puVar37 + 0x18c) == (uint *)0x0) {
                          local_1a0 = local_160;
                        }
                        if (((local_1a0[1] == 0) || (uVar7 = *local_1a0, (int)uVar7 < 0)) ||
                           ((DAT_14c9647dc <= (int)uVar7 ||
                            (((lVar21 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8),
                              lVar21 == 0 || (*(uint *)(lVar21 + 0x10) != local_1a0[1])) ||
                             ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)))))) {
                          uVar7 = local_1a0[3];
                          if ((-1 < (longlong)(int)uVar7) && ((int)uVar7 < (int)puVar37[0x22])) {
                            piVar23 = (int *)(*(longlong *)(puVar37 + 0x20) + 4 +
                                             (longlong)(int)uVar7 * 0x78);
                            *piVar23 = *piVar23 + -1;
                          }
                          bVar4 = false;
                        }
                        else {
                          bVar4 = true;
                        }
                        local_140 = local_1a0 + 0x2f;
                        uVar19 = 0;
                        uVar7 = 0;
                        do {
                          lVar21 = (longlong)(int)uVar7;
                          uVar17 = uVar7 + 1;
                          uVar18 = uVar17;
                          if ((int)uVar17 < (int)uVar11) {
                            uVar18 = uVar11;
                          }
                          if (lVar21 + 1 < lVar14) {
                            puVar37 = local_140 + lVar21 * 0x2c;
                            bVar28 = true;
                            lVar25 = lVar21 + 2;
                            do {
                              uVar39 = uVar17;
                              if (((puVar37[-2] == 0) || (uVar1 = puVar37[-3], (int)uVar1 < 0)) ||
                                 ((DAT_14c9647dc <= (int)uVar1 ||
                                  (((lVar26 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                                              *(longlong *)
                                               (DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8),
                                    lVar26 == 0 || (*(uint *)(lVar26 + 0x10) != puVar37[-2])) ||
                                   ((*(uint *)(lVar26 + 8) & 0x10200000) != 0)))))) {
                                uVar1 = *puVar37;
                                if ((-1 < (longlong)(int)uVar1) &&
                                   ((int)uVar1 < (int)local_190[0x22])) {
                                  piVar23 = (int *)(*(longlong *)(local_190 + 0x20) + 4 +
                                                   (longlong)(int)uVar1 * 0x78);
                                  *piVar23 = *piVar23 + -1;
                                }
                                if (bVar4) break;
                              }
                              else if (!bVar4) break;
                              bVar28 = lVar25 < lVar14;
                              uVar17 = uVar17 + 1;
                              puVar37 = puVar37 + 0x2c;
                              bVar41 = lVar25 != lVar14;
                              lVar25 = lVar25 + 1;
                              uVar39 = uVar18;
                            } while (bVar41);
                          }
                          else {
                            bVar28 = false;
                            uVar39 = uVar18;
                          }
                          iVar27 = uVar39 - uVar7;
                          if (bVar4) {
                            if (uVar19 != uVar7) {
                              memmove(local_1a0 + (longlong)(int)uVar19 * 0x2c,
                                      local_1a0 + lVar21 * 0x2c,(longlong)iVar27 * 0xb0);
                            }
                            uVar19 = uVar19 + iVar27;
                          }
                          else {
                            FUN_1456e7130(local_1a0 + lVar21 * 0x2c,iVar27);
                          }
                          bVar4 = (bool)(bVar4 ^ 1);
                          uVar7 = uVar39;
                        } while (bVar28);
                        local_190[0x18e] = uVar19;
                        lVar21 = local_198;
                        goto LAB_1407f3b67;
                      }
                      uVar43 = (undefined4)*(undefined8 *)(puVar37 + 0x1a0);
                      uVar45 = (undefined4)((ulonglong)*(undefined8 *)(puVar37 + 0x1a0) >> 0x20);
                    }
                    puVar37[3] = uVar11;
                    if (0.0 < (double)CONCAT44(uVar45,uVar43) ||
                        (double)CONCAT44(uVar45,uVar43) == 0.0) {
                      if ((int)uVar11 < 1) {
                        bVar5 = *(byte *)(lVar21 + 0x7c) & (byte)local_180;
                      }
                      else {
                        puVar37[2] = puVar37[2] + uVar11;
                        if ((longlong)(int)puVar37[6] != 0) {
                          pcVar31 = *(char **)(puVar37 + 4);
                          pcVar33 = pcVar31 + (longlong)(int)puVar37[6] * 0x30;
                          puVar10 = DAT_14cb96828;
                          do {
                            uVar11 = puVar37[3];
                            cVar6 = *pcVar31;
                            if (puVar10 == (undefined8 *)0x0) {
                              puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                              *puVar10 = 0;
                              puVar10[1] = 0;
                              puVar10[2] = 0;
                              puVar10[3] = 0;
                              puVar10[4] = 0;
                              puVar10[5] = 0;
                              DAT_14cb96828 = puVar10;
                            }
                            if ((*(byte *)(puVar10[2] + 8 + (longlong)cVar6 * 0x80) & 2) != 0) {
                              pdVar16 = (double *)(puVar10[2] + (longlong)cVar6 * 0x80);
                              dVar46 = *pdVar16;
                              *(double *)(pcVar31 + 8) = *(double *)(pcVar31 + 8) + dVar46;
                              dVar48 = *(double *)(pcVar31 + 0x10);
                              if (dVar46 <= *(double *)(pcVar31 + 0x10)) {
                                dVar48 = dVar46;
                              }
                              *(double *)(pcVar31 + 0x10) = dVar48;
                              dVar48 = *(double *)(pcVar31 + 0x18);
                              if (*(double *)(pcVar31 + 0x18) <= dVar46) {
                                dVar48 = dVar46;
                              }
                              *(double *)(pcVar31 + 0x18) = dVar48;
                              if (((ulonglong)pdVar16[1] & 1) != 0) {
                                if ((longlong)*(int *)(lVar21 + 0x90) != 0) {
                                  lVar14 = 0;
                                  piVar23 = *(int **)(pcVar31 + 0x20);
                                  do {
                                    if (dVar46 <= *(double *)(*(longlong *)(lVar21 + 0x88) + lVar14)
                                       ) goto LAB_1407f438e;
                                    piVar23 = piVar23 + 1;
                                    lVar14 = lVar14 + 0x10;
                                  } while ((longlong)*(int *)(lVar21 + 0x90) * 0x10 != lVar14);
                                }
                                piVar23 = *(int **)(pcVar31 + 0x20) +
                                          (*(int *)(pcVar31 + 0x28) + -1);
LAB_1407f438e:
                                *piVar23 = *piVar23 + uVar11;
                                puVar10 = DAT_14cb96828;
                              }
                            }
                            pcVar31 = pcVar31 + 0x30;
                          } while (pcVar31 != pcVar33);
                        }
                        if ((longlong)(int)puVar37[0x22] != 0) {
                          piVar23 = *(int **)(local_190 + 0x20);
                          piVar34 = piVar23 + (longlong)(int)puVar37[0x22] * 0x1e;
                          do {
                            if (0 < piVar23[1]) {
                              *piVar23 = *piVar23 + piVar23[1];
                              if ((longlong)piVar23[4] != 0) {
                                pcVar31 = *(char **)(piVar23 + 2);
                                pcVar33 = pcVar31 + (longlong)piVar23[4] * 0x30;
                                puVar10 = DAT_14cb96828;
                                do {
                                  iVar27 = piVar23[1];
                                  cVar6 = *pcVar31;
                                  if (puVar10 == (undefined8 *)0x0) {
                                    puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                                    *puVar10 = 0;
                                    puVar10[1] = 0;
                                    puVar10[2] = 0;
                                    puVar10[3] = 0;
                                    puVar10[4] = 0;
                                    puVar10[5] = 0;
                                    DAT_14cb96828 = puVar10;
                                  }
                                  if ((*(byte *)(puVar10[2] + 8 + (longlong)cVar6 * 0x80) & 2) != 0)
                                  {
                                    pdVar16 = (double *)(puVar10[2] + (longlong)cVar6 * 0x80);
                                    dVar46 = *pdVar16;
                                    *(double *)(pcVar31 + 8) = *(double *)(pcVar31 + 8) + dVar46;
                                    dVar48 = *(double *)(pcVar31 + 0x10);
                                    if (dVar46 <= *(double *)(pcVar31 + 0x10)) {
                                      dVar48 = dVar46;
                                    }
                                    *(double *)(pcVar31 + 0x10) = dVar48;
                                    dVar48 = *(double *)(pcVar31 + 0x18);
                                    if (*(double *)(pcVar31 + 0x18) <= dVar46) {
                                      dVar48 = dVar46;
                                    }
                                    *(double *)(pcVar31 + 0x18) = dVar48;
                                    if (((ulonglong)pdVar16[1] & 1) != 0) {
                                      if ((longlong)*(int *)(lVar21 + 0x90) != 0) {
                                        lVar14 = 0;
                                        piVar24 = *(int **)(pcVar31 + 0x20);
                                        do {
                                          if (dVar46 <= *(double *)
                                                         (*(longlong *)(lVar21 + 0x88) + lVar14))
                                          goto LAB_1407f44c7;
                                          piVar24 = piVar24 + 1;
                                          lVar14 = lVar14 + 0x10;
                                        } while ((longlong)*(int *)(lVar21 + 0x90) * 0x10 != lVar14)
                                        ;
                                      }
                                      piVar24 = *(int **)(pcVar31 + 0x20) +
                                                (*(int *)(pcVar31 + 0x28) + -1);
LAB_1407f44c7:
                                      *piVar24 = *piVar24 + iVar27;
                                      puVar10 = DAT_14cb96828;
                                    }
                                  }
                                  pcVar31 = pcVar31 + 0x30;
                                } while (pcVar31 != pcVar33);
                              }
                            }
                            piVar23 = piVar23 + 0x1e;
                          } while (piVar23 != piVar34);
                        }
                        puVar37 = local_190;
                        bVar5 = (byte)local_180;
                      }
                      if (bVar5 != 0) {
                        puVar37[0x1a2] = puVar37[0x1a2] + 1;
                        uVar11 = puVar37[0x1a6];
                        if ((longlong)(int)uVar11 != 0) {
                          lVar14 = *(longlong *)(puVar37 + 0x1a4);
                          lVar25 = 0;
                          puVar10 = DAT_14cb96828;
                          do {
                            cVar6 = *(char *)(lVar14 + lVar25);
                            if (puVar10 == (undefined8 *)0x0) {
                              puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                              *puVar10 = 0;
                              puVar10[1] = 0;
                              puVar10[2] = 0;
                              puVar10[3] = 0;
                              puVar10[4] = 0;
                              puVar10[5] = 0;
                              DAT_14cb96828 = puVar10;
                            }
                            lVar26 = (longlong)cVar6 * 0x80;
                            if ((*(byte *)(puVar10[2] + 8 + lVar26) & 4) != 0) {
                              dVar46 = *(double *)(puVar10[2] + lVar26);
                              *(double *)(lVar14 + 8 + lVar25) =
                                   *(double *)(lVar14 + 8 + lVar25) + dVar46;
                              dVar48 = *(double *)(lVar14 + 0x10 + lVar25);
                              dVar47 = *(double *)(lVar14 + 0x18 + lVar25);
                              if (dVar46 <= dVar48) {
                                dVar48 = dVar46;
                              }
                              *(double *)(lVar14 + 0x10 + lVar25) = dVar48;
                              if (dVar47 <= dVar46) {
                                dVar47 = dVar46;
                              }
                              *(double *)(lVar14 + 0x18 + lVar25) = dVar47;
                            }
                            lVar25 = lVar25 + 0x20;
                          } while ((longlong)(int)uVar11 * 0x20 != lVar25);
                        }
                      }
                    }
                  }
                  else if (*(double *)(puVar37 + 0x26) <= (double)fVar42) {
                    puVar37[0x26] = 0;
                    puVar37[0x27] = 0;
                  }
                }
              }
              uVar11 = local_138 & ~(uint)local_130;
              puVar37 = *(uint **)(lVar21 + 0xf0);
              if (*(uint **)(lVar21 + 0xf0) == (uint *)0x0) {
                puVar37 = local_148;
              }
              uVar7 = *(uint *)(lVar21 + 0xf8);
              iVar27 = (int)local_150;
              lVar14 = (longlong)iVar27;
              uVar19 = puVar37[lVar14] & uVar11;
              iVar29 = local_16c;
              if (uVar19 == 0) {
                iVar12 = uVar7 + 0x1e;
                if (-1 < (int)(uVar7 - 1)) {
                  iVar12 = uVar7 - 1;
                }
                iVar12 = iVar12 >> 5;
                iVar29 = local_16c + 0x20;
                iVar30 = iVar12;
                if (iVar12 < iVar27) {
                  iVar30 = iVar27;
                }
                if (iVar27 < iVar12) {
                  lVar25 = 0;
                  do {
                    uVar19 = puVar37[lVar14 + lVar25 + 1];
                    if (uVar19 != 0) {
                      local_150 = (ulonglong)(iVar27 + (int)lVar25 + 1);
                      uVar11 = 0xffffffff;
                      goto LAB_1407f469d;
                    }
                    iVar29 = iVar29 + 0x20;
                    lVar25 = lVar25 + 1;
                  } while (iVar30 - lVar14 != lVar25);
                  uVar11 = 0xffffffff;
                  lVar14 = (longlong)iVar30;
                }
                local_150 = lVar14 + 1;
                uVar38 = local_130;
                lVar21 = local_198;
                uVar19 = uVar7;
              }
              else {
LAB_1407f469d:
                uVar38 = (ulonglong)(-uVar19 & uVar19);
                uVar35 = uVar38 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar19 = (iVar29 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if ((int)uVar7 <= (int)uVar19) {
                  uVar19 = uVar7;
                }
              }
              puVar37 = (uint *)(ulonglong)uVar19;
            } while (uVar19 != (uint)local_158);
          }
        }
        goto LAB_1407f32a7;
      }
    }
  }
  local_188 = 0;
LAB_1407f32a7:
  if ((local_e0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return local_188;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f4802 FUN_1407f4802 body=277 status=ok
// SIG undefined FUN_1407f4802(void)

undefined8 FUN_1407f4802(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar3 != -1) {
      lVar5 = *param_1;
      lVar3 = lVar3 * 0x6f8;
      local_48 = *(undefined8 *)(lVar5 + lVar3);
      local_50 = param_2;
      cVar2 = FUN_140bf1e82();
      if (cVar2 == '\0') {
        lVar3 = lVar5 + lVar3;
        do {
          lVar5 = lVar3;
          lVar3 = (longlong)*(int *)(lVar5 + 0x6f0);
          if (lVar3 == -1) goto LAB_1407f48a1;
          lVar1 = *param_1;
          lVar3 = lVar3 * 0x6f8;
          local_48 = *(undefined8 *)(lVar1 + lVar3);
          local_50 = param_2;
          cVar2 = FUN_140bf1e82(&local_48,&local_50);
          lVar3 = lVar1 + lVar3;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar5 + 0x6f0);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_145749030(param_1,*puVar6);
      uVar4 = 1;
    }
  }
LAB_1407f48a1:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f4918 FUN_1407f4918 body=22 status=ok
// SIG undefined FUN_1407f4918(void)

bool FUN_1407f4918(longlong param_1)

{
  bool bVar1;
  
  if (*(User **)(param_1 + 0x2b8) != (User *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407f4924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = bifrost::account::isAuthed(*(User **)(param_1 + 0x2b8));
    return bVar1;
  }
  return false;
}



// FUNCTION 1407f492e FUN_1407f492e body=144 status=ok
// SIG undefined FUN_1407f492e(void)

undefined8 FUN_1407f492e(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (((*(int *)(param_1 + 0x374) != 0) && (uVar1 = *(uint *)(param_1 + 0x370), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x374))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = 0;
      }
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar5 = (longlong *)*puVar2;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
      uVar3 = (**(code **)(*plVar5 + 0x180))();
      uVar4 = FUN_140334a94(uVar4,uVar3);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1407f49be FUN_1407f49be body=169 status=ok
// SIG undefined FUN_1407f49be(void)

ulonglong FUN_1407f49be(int *param_1,longlong param_2,float *param_3,float *param_4)

{
  bool bVar1;
  uint3 uVar2;
  float fVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((longlong)*(int *)(param_2 + 0x40) != 0) {
    piVar4 = *(int **)(param_2 + 0x38);
    lVar5 = (longlong)*(int *)(param_2 + 0x40) * 0x2c;
    do {
      if ((*piVar4 == *param_1) && (piVar4[1] == param_1[1])) {
        if (piVar4 == (int *)0x0) {
          return 0;
        }
        uVar6 = -(uint)((float)piVar4[3] == 0.0);
        fVar3 = (float)(~uVar6 & (uint)((float)piVar4[5] / (float)piVar4[3]) | piVar4[5] & uVar6);
        bVar1 = 1e-08 < ABS(fVar3 - *param_4);
        uVar2 = (uint3)((uint)*param_1 >> 8);
        if (bVar1) {
          *param_4 = fVar3;
        }
        if (1e-08 < ABS((float)piVar4[9] * 100.0 - *param_3)) {
          *param_3 = (float)piVar4[9] * 100.0;
          return CONCAT71((uint7)uVar2,1);
        }
        return (ulonglong)CONCAT31(uVar2,bVar1);
      }
      piVar4 = piVar4 + 0xb;
      lVar5 = lVar5 + -0x2c;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 1407f4a68 FUN_1407f4a68 body=57 status=ok
// SIG undefined FUN_1407f4a68(void)

void FUN_1407f4a68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e38 = FUN_140002ddd(FUN_146600ef7,uVar1,L"OakUIDisplayDataDef_Gadget");
  }
  return;
}



// FUNCTION 1407f4aa2 FUN_1407f4aa2 body=96 status=ok
// SIG undefined FUN_1407f4aa2(void)

void FUN_1407f4aa2(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b9bf410;
    *(undefined1 *)(puVar2 + 1) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0xc) = param_3;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 1407f4b02 FUN_1407f4b02 body=57 status=ok
// SIG undefined FUN_1407f4b02(void)

void FUN_1407f4b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb39b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb39b0 = FUN_140002ddd(FUN_1465f91d4,uVar1,L"OakUIDisplayDataDef_VaultHunterBar");
  }
  return;
}



// FUNCTION 1407f4b3c FUN_1407f4b3c body=57 status=ok
// SIG undefined FUN_1407f4b3c(void)

void FUN_1407f4b3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb39c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb39c8 =
         FUN_140002ddd(FUN_1465f9234,uVar1,L"OakUIDisplayDataDef_ActionSkillScreenButtons");
  }
  return;
}



// FUNCTION 1407f4b76 FUN_1407f4b76 body=641 status=ok
// SIG undefined FUN_1407f4b76(void)

void FUN_1407f4b76(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong *plVar12;
  undefined1 auStack_88 [32];
  code **local_68;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1407f4ede();
  if (lVar4 != 0) {
    lVar5 = FUN_1407f4df8();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      if (((param_2[1] == 0) ||
          (((uVar1 = *param_2, (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
           (plVar8 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar8 == (longlong *)0x0)))) ||
         (((*(uint *)(plVar8 + 2) != param_2[1] || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
          (lVar5 = *plVar8, lVar5 == 0)))) {
        if (*(longlong *)(param_2 + 2) == 0) goto LAB_1407f4d30;
        lVar5 = FUN_140007850();
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar5 == 0) || (cVar3 == '\0')) {
          FUN_14485c47a(param_2,lVar5);
          if (lVar5 == 0) goto LAB_1407f4d30;
        }
        else {
          uVar1 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(param_2,lVar5);
          }
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) goto LAB_1407f4d30;
      }
      lVar6 = FUN_1407f5004();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
         ((longlong)*(int *)(lVar5 + 0x58) != 0)) {
        plVar12 = *(longlong **)(lVar5 + 0x50);
        plVar8 = plVar12 + *(int *)(lVar5 + 0x58);
        bVar11 = false;
LAB_1407f4c75:
        do {
          lVar6 = *plVar12;
          if (lVar6 != 0) {
            lVar7 = FUN_1401d6df2();
            lVar6 = *(longlong *)(lVar6 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              plVar12 = plVar12 + 1;
              bVar11 = true;
              if (plVar12 == plVar8) goto LAB_1407f4cb8;
              goto LAB_1407f4c75;
            }
          }
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar8);
        if (bVar11) {
LAB_1407f4cb8:
          lVar6 = *(longlong *)(param_2 + 4);
          lVar7 = *(longlong *)(param_1 + 0x2b0);
          iVar2 = *(int *)(param_1 + 0x2b8);
          lVar10 = (longlong)iVar2;
          if (lVar10 != 0) {
            lVar9 = 0;
            do {
              if (*(longlong *)(lVar7 + lVar9) == lVar6) goto LAB_1407f4d30;
              lVar9 = lVar9 + 8;
            } while (lVar10 * 8 - lVar9 != 0);
          }
          *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
          if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
            FUN_1446f84a2((longlong *)(param_1 + 0x2b0),iVar2);
            lVar7 = *(longlong *)(param_1 + 0x2b0);
          }
          *(longlong *)(lVar7 + lVar10 * 8) = lVar6;
          local_68 = &local_58;
          local_58 = FUN_140de0f20;
          local_50 = 0;
          FUN_14574934e(param_1,lVar4,lVar5,param_1);
        }
      }
    }
  }
LAB_1407f4d30:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f4df8 FUN_1407f4df8 body=228 status=ok
// SIG undefined FUN_1407f4df8(void)

longlong FUN_1407f4df8(void)

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
  if (DAT_14cb92100 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146569172;
    local_38 = &LAB_1489f8bf1;
    local_40 = FUN_14656c1a6;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x1e0;
    FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUIEnhancedInputComponent",&DAT_14cb92100,
                  &DAT_1489f8bf0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb92100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f4ede FUN_1407f4ede body=91 status=ok
// SIG undefined FUN_1407f4ede(void)

undefined8 FUN_1407f4ede(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = FUN_1407f4f3a(*puVar3);
        return uVar2;
      }
      uVar2 = FUN_1407f4f3a(0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1407f4f3a FUN_1407f4f3a body=126 status=ok
// SIG undefined FUN_1407f4f3a(void)

undefined8 FUN_1407f4f3a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x598);
  if ((((lVar2 != 0) && (*(char *)(param_1 + 0x3b9) == '\0')) && (*(int *)(param_1 + 0x374) != 0))
     && ((uVar1 = *(uint *)(param_1 + 0x370), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x374) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = FUN_1407f4fb8(lVar2,*puVar4);
        return uVar3;
      }
      uVar3 = FUN_1407f4fb8(lVar2,0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1407f4fb8 FUN_1407f4fb8 body=75 status=ok
// SIG undefined FUN_1407f4fb8(void)

undefined8 FUN_1407f4fb8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar1 = FUN_140059518(puVar3 + 1);
      if (lVar1 == param_2) {
        if (puVar3 == (undefined8 *)0x0) {
          return 0;
        }
        return *puVar3;
      }
      puVar3 = puVar3 + 0xe;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 1407f5004 FUN_1407f5004 body=228 status=ok
// SIG undefined FUN_1407f5004(void)

longlong FUN_1407f5004(void)

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
  if (DAT_14cb91418 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14644ce58;
    local_38 = &LAB_1489f2045;
    local_40 = FUN_140e91e37;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxEnhancedInput",L"GbxEnhancedInputAction",&DAT_14cb91418,
                  &DAT_1489f2044);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91418;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f50ea FUN_1407f50ea body=438 status=ok
// SIG undefined FUN_1407f50ea(void)

longlong FUN_1407f50ea(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1447715ec();
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34)) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  if (*(int *)(param_1 + 0x50) != *(int *)(param_2 + 0x50)) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  }
  if (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60)) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  if (*(int *)(param_1 + 0x80) != *(int *)(param_2 + 0x80)) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  }
  if (*(int *)(param_1 + 0x8c) != *(int *)(param_2 + 0x8c)) {
    *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  }
  if (*(int *)(param_1 + 0x94) != *(int *)(param_2 + 0x94)) {
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  }
  if (*(int *)(param_1 + 0x9c) != *(int *)(param_2 + 0x9c)) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  }
  if (*(int *)(param_1 + 0xa4) != *(int *)(param_2 + 0xa4)) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  }
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_2 + 0xd0)) {
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    uVar1 = *(undefined4 *)(param_2 + 0xb4);
    uVar2 = *(undefined4 *)(param_2 + 0xb8);
    uVar3 = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = uVar1;
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  }
  FUN_140ae1244(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 1407f52a0 FUN_1407f52a0 body=789 status=ok
// SIG undefined FUN_1407f52a0(void)

undefined8 *
FUN_1407f52a0(longlong param_1,longlong param_2,undefined1 param_3,longlong param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  
  uVar3 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar8 = DAT_14c762760 + 1;
  *(int *)(puVar9 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar8;
  *puVar9 = &PTR_LAB_14acd0ae0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(puVar9 + 2) = 0;
    iVar8 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar9 + 2) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar8 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar9 + 0x14) = iVar8;
  *(undefined1 *)(puVar9 + 3) = param_3;
  *puVar9 = &PTR_FUN_14b47b110;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined1 *)(puVar9 + 6) = 0;
  plVar10 = (longlong *)FUN_14063f168(puVar9 + 4);
  if ((int)plVar10[1] != 4) {
    FUN_1446efa72(plVar10,0,4,0x10);
    *(undefined4 *)(plVar10 + 1) = 4;
  }
  puVar6 = (undefined8 *)*plVar10;
  plVar10 = *(longlong **)(param_4 + 0x10);
  if (plVar10 == (longlong *)0x0) {
LAB_1407f54aa:
    *puVar6 = &PTR_LAB_14b47b160;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    puVar6[2] = lVar11;
    *puVar6 = &PTR_FUN_14b9c0c10;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1407f54aa;
      LOCK();
      iVar13 = (int)plVar10[1];
      bVar14 = iVar8 == iVar13;
      if (bVar14) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar13 = iVar8;
      }
      iVar8 = iVar13;
      UNLOCK();
    } while (!bVar14);
    uVar7 = *(undefined8 *)(param_4 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *puVar6 = &PTR_LAB_14b47b160;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    puVar6[2] = lVar11;
    *puVar6 = &PTR_FUN_14b9c0c10;
    puVar6[3] = uVar7;
    puVar6[4] = plVar10;
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 6) = uVar3;
    puVar6[5] = uVar5;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar9;
  return puVar9;
}



// FUNCTION 1407f55bc FUN_1407f55bc body=1850 status=ok
// SIG undefined FUN_1407f55bc(void)

void FUN_1407f55bc(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  longlong lVar19;
  longlong lVar20;
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
  code *local_80;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_54 [4];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)param_1[1];
  if ((*(char *)*param_1 != '\0') || (cVar7 = FUN_1436236ae(plVar4), cVar7 != '\0')) {
    plVar13 = (longlong *)*plVar4;
    if (plVar4[6] != 0) {
      local_68 = 0;
      uStack_60 = 0;
      iVar3 = (int)plVar13[1];
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (iVar3 != 0) {
        FUN_140718530(&local_68);
        lVar11 = (longlong)*(int *)((undefined8 *)*plVar4 + 1);
        if (lVar11 != 0) {
          puVar15 = *(undefined8 **)*plVar4;
          puVar16 = puVar15 + lVar11;
          do {
            uVar17 = uStack_60;
            puVar5 = (uint *)*puVar15;
            lVar11 = *(longlong *)(puVar5 + 0x4e);
            if (lVar11 != 0) {
              lVar19 = (longlong)(int)uStack_60;
              uVar10 = (int)uStack_60 + 1;
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar10);
              if (uStack_60._4_4_ < uVar10) {
                FUN_140711e5c(&local_68,uVar17 & 0xffffffff);
                lVar11 = *(longlong *)(puVar5 + 0x4e);
              }
              *(longlong *)(local_68 + lVar19 * 8) = lVar11;
              lVar11 = *(longlong *)(puVar5 + 0x4e);
              uVar10 = *(uint *)(*(longlong *)(lVar11 + 0x40) + 0x88);
              uVar8 = puVar5[0x51];
              if ((((((uVar8 == 0) || (uVar2 = puVar5[0x50], (int)uVar2 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar2)) ||
                   ((plVar13 = (longlong *)
                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                    plVar13 == (longlong *)0x0 || (*(uint *)(plVar13 + 2) != uVar8)))) ||
                  ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (lVar19 = *plVar13, lVar19 == 0))
              {
LAB_1407f5754:
                pcVar18 = (char *)((longlong)puVar5 + 0x17);
LAB_1407f5758:
                if (*pcVar18 != '\x01') {
                  uVar8 = puVar5[0x51];
                  if (uVar8 != 0) goto LAB_1407f577c;
                  goto LAB_1407f5803;
                }
LAB_1407f575f:
                if (0 < (int)uVar10) goto LAB_1407f5813;
              }
              else {
                if ((*(longlong *)(lVar19 + 0xa8) == 0) ||
                   ((*(byte *)(*(longlong *)(lVar19 + 0xa8) + 0x65) & 1) != 0)) {
                  if (DAT_14cad2858 == 0) {
                    local_50 = FUN_144a7958c;
                    local_80 = FUN_14081d0ea;
                    local_88 = &LAB_146395584;
                    local_90 = &local_50;
                    local_98 = &LAB_147a0ba80;
                    local_a0 = &LAB_14575ccce;
                    local_a8 = L"Engine";
                    local_b0 = 0x40000000000;
                    local_b8 = 0x10000004;
                    local_c0 = 0x10;
                    local_c8 = 0x1180;
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                  FUN_1463bcebe);
                  }
                  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) <
                       *(int *)(DAT_14cad2858 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
                  goto LAB_1407f5754;
                  pcVar18 = (char *)(lVar19 + 0x427);
                  goto LAB_1407f5758;
                }
LAB_1407f577c:
                uVar2 = puVar5[0x50];
                if (((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
                    (plVar13 = (longlong *)
                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                    plVar13 == (longlong *)0x0)) ||
                   (((*(uint *)(plVar13 + 2) != uVar8 ||
                     ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) ||
                    (lVar19 = *plVar13, lVar19 == 0)))) {
LAB_1407f5803:
                  pcVar18 = (char *)((longlong)puVar5 + 0x17);
                }
                else {
                  if ((*(longlong *)(lVar19 + 0xa8) != 0) &&
                     ((*(byte *)(*(longlong *)(lVar19 + 0xa8) + 0x65) & 1) == 0))
                  goto LAB_1407f575f;
                  if (DAT_14cad2858 == 0) {
                    local_50 = FUN_144a7958c;
                    local_80 = FUN_14081d0ea;
                    local_88 = &LAB_146395584;
                    local_90 = &local_50;
                    local_98 = &LAB_147a0ba80;
                    local_a0 = &LAB_14575ccce;
                    local_a8 = L"Engine";
                    local_b0 = 0x40000000000;
                    local_b8 = 0x10000004;
                    local_c0 = 0x10;
                    local_c8 = 0x1180;
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                  FUN_1463bcebe);
                  }
                  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) <
                       *(int *)(DAT_14cad2858 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
                  goto LAB_1407f5803;
                  pcVar18 = (char *)(lVar19 + 0x427);
                }
                if ((0 < (int)uVar10) && (*pcVar18 == '\0')) {
LAB_1407f5813:
                  uVar17 = 0;
                  do {
                    lVar19 = *(longlong *)(*(longlong *)(lVar11 + 0x40) + 0x80);
                    lVar20 = *(longlong *)(lVar11 + 0x40) + 0x78;
                    if (lVar19 != 0) {
                      lVar20 = lVar19;
                    }
                    lVar19 = *(longlong *)(lVar20 + uVar17 * 8);
                    if ((*(byte *)(lVar19 + 0x79) & 1) != 0) {
                      uVar8 = *(uint *)(lVar19 + 0xc);
                      lVar20 = *(longlong *)(lVar19 + 0x48);
                      *(byte *)(lVar19 + 0x79) = *(byte *)(lVar19 + 0x79) & 0xfe;
                      *(uint *)(lVar19 + 0xc) = uVar8 | 1;
                      if ((lVar20 != 0 && uVar8 == 0) && (*(longlong *)(lVar20 + 8) != 0)) {
                        FUN_144821112(*(longlong *)(lVar20 + 8) + 0x70,lVar20,
                                      *(uint *)(lVar19 + 8) >> 3);
                      }
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar10 != uVar17);
                }
              }
              if ((((puVar5[1] != 0) && (uVar8 = *puVar5, -1 < (int)uVar8)) &&
                  ((int)uVar8 < DAT_14c9647dc)) &&
                 (((plVar13 = (longlong *)
                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                   plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar5[1])) &&
                  (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
                   ((0 < (int)uVar10 && (lVar19 = *plVar13, lVar19 != 0)))))))) {
                uVar17 = 0;
                do {
                  lVar20 = DAT_14c997cc0;
                  if (DAT_14c997cc0 == 0) {
                    plVar13 = (longlong *)FUN_145a62958();
                    lVar20 = plVar13[0x22];
                    if (lVar20 == 0) {
                      local_70 = plVar13;
                      (**(code **)(*plVar13 + 1000))();
                      lVar20 = local_70[0x22];
                    }
                  }
                  bVar1 = *(byte *)(lVar19 + 0x31);
                  bVar12 = *(byte *)(lVar20 + 0x75);
                  if (bVar1 != 0) {
                    bVar12 = bVar1;
                  }
                  if (4 < bVar12) {
                    bVar12 = 0;
                  }
                  lVar20 = *(longlong *)(*(longlong *)(lVar11 + 0x40) + 0x80);
                  lVar9 = *(longlong *)(lVar11 + 0x40) + 0x78;
                  if (lVar20 != 0) {
                    lVar9 = lVar20;
                  }
                  if (*(byte *)(*(longlong *)(lVar9 + uVar17 * 8) + 0x78) != bVar12) {
                    FUN_1429b8506();
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar10 != uVar17);
              }
            }
            puVar15 = puVar15 + 1;
          } while (puVar15 != puVar16);
        }
      }
      FUN_142a2e6cc(plVar4[6],&local_68,1);
      lVar11 = (longlong)(int)((longlong *)*plVar4)[1];
      if (lVar11 != 0) {
        lVar19 = *(longlong *)*plVar4;
        lVar20 = 0;
        do {
          lVar9 = *(longlong *)(lVar19 + lVar20);
          if (*(longlong *)(lVar9 + 0x138) != 0) {
            if ((*(int *)(lVar9 + 0x144) == 0) ||
               (uVar10 = *(uint *)(lVar9 + 0x140), (int)uVar10 < 0)) {
LAB_1407f5c55:
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              if ((int)uVar10 < DAT_14c9647dc) {
                puVar15 = (undefined8 *)
                          ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                if (((puVar15 == (undefined8 *)0x0) ||
                    (*(int *)(puVar15 + 2) != *(int *)(lVar9 + 0x144))) ||
                   ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_1407f5c55;
                uVar14 = *puVar15;
              }
            }
            FUN_14075bef6(plVar4[6],uVar14);
          }
          if (((((*(byte *)(lVar9 + 0x3b) & 0x20) != 0) && (*(int *)(lVar9 + 0x144) != 0)) &&
              ((uVar10 = *(uint *)(lVar9 + 0x140), -1 < (int)uVar10 &&
               (((int)uVar10 < DAT_14c9647dc &&
                (plVar13 = (longlong *)
                           ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                plVar13 != (longlong *)0x0)))))) &&
             (((int)plVar13[2] == *(int *)(lVar9 + 0x144) &&
              (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
               (pcVar6 = (code *)*plVar13, pcVar6 != (code *)0x0)))))) {
            lVar9 = *(longlong *)(pcVar6 + 0xb0);
            if (lVar9 == 0) {
              lVar9 = FUN_1448abda6(pcVar6);
            }
            local_50 = pcVar6;
            FUN_1409e9912(*(longlong *)(lVar9 + 0x260) + 0xc0,local_54,&local_50,0);
          }
          lVar20 = lVar20 + 8;
        } while (lVar11 * 8 != lVar20);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      plVar13 = (longlong *)*plVar4;
    }
    lVar11 = plVar13[1];
    if ((longlong)(int)lVar11 != 0) {
      lVar19 = *plVar13;
      lVar20 = 0;
      do {
        FUN_1436056b4(*(undefined8 *)(lVar19 + lVar20));
        lVar20 = lVar20 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar20);
    }
    if ((*(char *)((longlong)plVar4 + 0x39) == '\0') &&
       (iVar3 = *(int *)(*plVar4 + 8), 0 < (longlong)iVar3)) {
      lVar11 = 0;
      do {
        FUN_14034aa52(*(undefined8 *)(*(longlong *)*plVar4 + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (iVar3 != lVar11);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f5d04 FUN_1407f5d04 body=873 status=ok
// SIG undefined FUN_1407f5d04(void)

longlong * FUN_1407f5d04(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte *pbVar3;
  char cVar4;
  
  FUN_14480568a();
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0;
  param_1[0xcc] = 2;
  *param_1 = (longlong)&PTR_FUN_14ada3860;
  param_1[5] = (longlong)&PTR_FUN_14ada4330;
  param_1[6] = (longlong)&PTR_LAB_14ada4370;
  param_1[0x55] = (longlong)&PTR_FUN_14ada43c0;
  param_1[0x56] = (longlong)&PTR_FUN_14ada4440;
  param_1[0x57] = (longlong)&PTR_FUN_14ada4450;
  param_1[0xcd] = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  param_1[0xde] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(byte *)(param_1 + 0xdf) = *(byte *)(param_1 + 0xdf) | 0xf;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0;
  param_1[0xcf] = (longlong)&PTR_LAB_14adc1560;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(byte *)(param_1 + 0xea) = *(byte *)(param_1 + 0xea) & 0xfa;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0x3d88888900000000;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined1 *)((longlong)param_1 + 0x77c) = 1;
  *(undefined4 *)(param_1 + 0xf0) = 0x3d088889;
  *(undefined1 *)((longlong)param_1 + 0x784) = 1;
  *(undefined4 *)(param_1 + 0xf1) = 0x3d072b02;
  *(undefined1 *)((longlong)param_1 + 0x78c) = 0;
  *(byte *)(param_1 + 0xf2) = *(byte *)(param_1 + 0xf2) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x799) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c4) = 0x3f80000000000000;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(uint *)((longlong)param_1 + 0x7cc) = *(uint *)((longlong)param_1 + 0x7cc) & 0xfffff840 | 0x10;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x82c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x834) = 0;
  *(undefined8 *)((longlong)param_1 + 0x83c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x844) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x859) = 0;
  *(undefined1 *)(param_1 + 0x113) = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0x3f800000;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(uint *)(param_1 + 0x119) = *(uint *)(param_1 + 0x119) & 0xfffffffc | 2;
  *(undefined1 *)((longlong)param_1 + 0x8cc) = 0;
  param_1[0x11a] = 0;
  FUN_14090dd64(param_1 + 0xcf,param_1);
  cVar2 = (DAT_14c762810 == 0) * '\x02';
  *(char *)(param_1 + 9) = cVar2;
  cVar4 = '\x06';
  if (DAT_14c762814 == 0) {
    cVar4 = cVar2;
  }
  *(char *)((longlong)param_1 + 0x49) = cVar4;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf1 | 2;
  pbVar3 = (byte *)param_1[0xc];
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x4b) != '\0') {
      uVar1 = *(undefined8 *)(pbVar3 + 0x28);
      FUN_1402eb48e(uVar1,param_1 + 8);
      *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
      FUN_1402eb97e(uVar1,param_1 + 8);
      if (*(char *)((longlong)param_1 + 0x4b) != '\0') goto LAB_1407f5fa6;
      pbVar3 = (byte *)param_1[0xc];
    }
    pbVar3[0x24] = 0;
    pbVar3[0x25] = 0;
    pbVar3[0x26] = 0x80;
    pbVar3[0x27] = 0xbf;
  }
LAB_1407f5fa6:
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)(param_1 + 0xf2) = *(byte *)(param_1 + 0xf2) | 2;
  param_1[0x100] = 0x3ff0000000000000;
  param_1[0x101] = 0x3ff0000000000000;
  param_1[0x102] = 0x3ff0000000000000;
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cad0f30,1);
  *(byte *)((longlong)param_1 + 0x2d4) = *(byte *)((longlong)param_1 + 0x2d4) & 0xbf;
  return param_1;
}



// FUNCTION 1407f607c FUN_1407f607c body=94 status=ok
// SIG undefined FUN_1407f607c(void)

undefined8 * FUN_1407f607c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3162b0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f136(param_1 + 0x5c);
  FUN_1407f60da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407f60da FUN_1407f60da body=246 status=ok
// SIG undefined FUN_1407f60da(void)

void FUN_1407f60da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b14bcb0;
  FUN_14060f50f(param_1[0x55],*(undefined4 *)(param_1 + 0x56));
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f5ae(param_1 + 0x4b);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f5e6(param_1 + 0x2d);
  FUN_14060f567(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f50f(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f61d0(param_1);
  return;
}



// FUNCTION 1407f61d0 FUN_1407f61d0 body=378 status=ok
// SIG undefined FUN_1407f61d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407f61d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14acb1590;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14060ff88(param_1 + 0x1f);
  FUN_14060ff25(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f6382(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f634a(param_1 + 5);
  FUN_14060ffbf(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001407f630a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1407f634a FUN_1407f634a body=55 status=ok
// SIG undefined FUN_1407f634a(void)

void FUN_1407f634a(longlong *param_1)

{
  FUN_1407f63ba(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407f6382 FUN_1407f6382 body=55 status=ok
// SIG undefined FUN_1407f6382(void)

void FUN_1407f6382(longlong *param_1)

{
  FUN_1407f6436(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407f63ba FUN_1407f63ba body=123 status=ok
// SIG undefined FUN_1407f63ba(void)

void FUN_1407f63ba(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
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



// FUNCTION 1407f6436 FUN_1407f6436 body=123 status=ok
// SIG undefined FUN_1407f6436(void)

void FUN_1407f6436(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
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



// FUNCTION 1407f64b2 FUN_1407f64b2 body=281 status=ok
// SIG undefined FUN_1407f64b2(void)

void FUN_1407f64b2(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [20];
  char local_5c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0xa8), lVar3 != 0)) &&
     (((**(code **)(*param_1 + 0x2d8))(param_1,local_70), local_5c != '\0' ||
      (cVar4 = FUN_140b329fc(param_2), cVar4 != '\0')))) {
    FUN_1407f65cc(&local_80,lVar3);
    if (local_80 != 0) {
      local_98 = local_80;
      local_90 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      FUN_1407f66be(param_1,local_88,param_4,&local_98);
      FUN_1407f6842(local_80,local_88,local_70);
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f65cc FUN_1407f65cc body=182 status=ok
// SIG undefined FUN_1407f65cc(void)

longlong * FUN_1407f65cc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14026eace(&local_30);
  lVar4 = local_30;
  bVar3 = true;
  if (local_30 != 0) {
    uVar6 = FUN_1407f6684();
    cVar5 = FUN_1448093f4(lVar4,uVar6);
    if (cVar5 != '\0') {
      *param_1 = local_30;
      param_1[1] = (longlong)local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      bVar3 = false;
    }
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
  if (bVar3) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f6684 FUN_1407f6684 body=57 status=ok
// SIG undefined FUN_1407f6684(void)

void FUN_1407f6684(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dfe8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dfe8 = FUN_140002ddd(FUN_1464df37d,uVar1,L"GbxFoleyAudioProvider");
  }
  return;
}



// FUNCTION 1407f66be FUN_1407f66be body=289 status=ok
// SIG undefined FUN_1407f66be(void)

longlong * FUN_1407f66be(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  int local_80;
  longlong local_7c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x2d8))(param_1,local_88);
  lVar5 = local_7c;
  local_48 = local_7c;
  (**(code **)(*param_1 + 0x2d8))(param_1,local_88);
  if ((local_7c == 0) && (lVar4 = *param_4, lVar4 != 0)) {
    (**(code **)(*param_1 + 0x2d8))(param_1,local_88);
    if (((longlong)local_80 < 0) || (*(int *)(lVar4 + 0x380) <= local_80)) {
      lVar5 = 0;
      local_48 = lVar5;
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x378) + (longlong)local_80 * 0x70);
      local_48 = lVar5;
    }
  }
  if (*(longlong *)(param_3 + 0x18) == 0) {
    *param_2 = lVar5;
  }
  else {
    FUN_1407f8cf8(*(longlong *)(param_3 + 0x18),param_2,&local_48,1);
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407f6842 FUN_1407f6842 body=1800 status=ok
// SIG undefined FUN_1407f6842(void)

void FUN_1407f6842(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  double dVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [96];
  ulonglong local_178;
  longlong *plStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
        (uVar7 = *(uint *)(param_1 + 0x18), -1 < (int)uVar7)) &&
       (((int)uVar7 < DAT_14c9647dc &&
        (lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar9 != 0)))) &&
      ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c) &&
       (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 && (*(char *)(param_1 + 0x300) == '\0')))))) &&
     ((*(char *)(param_1 + 0x301) == '\0' &&
      ((*(char *)(param_1 + 0x302) == '\0' &&
       (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar9 != 0)))))) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
    lVar9 = (**(code **)(*plVar4 + 0x180))(plVar4);
    if (lVar9 != 0) {
      dVar2 = *(double *)(lVar9 + 0x6d0);
      plVar4 = (longlong *)(param_1 + 0x658);
      lVar9 = *param_2;
      uVar7 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar8 = (uint)lVar9 & 0xffff;
      uVar7 = ((uint)lVar9 << 0x10 | uVar8) + (int)((ulonglong)lVar9 >> 0x20) +
              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar8 >> 4);
      if (*(int *)(param_1 + 0x660) != *(int *)(param_1 + 0x68c)) {
        lVar11 = param_1 + 0x690;
        if (*(longlong *)(param_1 + 0x698) != 0) {
          lVar11 = *(longlong *)(param_1 + 0x698);
        }
        iVar10 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x6a0) - 1U & uVar7) * 4);
        if (iVar10 != -1) {
          do {
            plVar1 = (longlong *)(*plVar4 + (longlong)iVar10 * 0x14);
            if (*plVar1 == lVar9) {
              if (plVar1 != (longlong *)0x0) goto LAB_1407f6a90;
              break;
            }
            iVar10 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar10 != -1);
        }
      }
      FUN_1408cb62c(plVar4,&local_178);
      lVar9 = *param_2;
      *plStack_170 = lVar9;
      plStack_170[1] = -0x100000000;
      lVar11 = (longlong)(int)local_178;
      uVar8 = *(int *)(param_1 + 0x660) - *(int *)(param_1 + 0x68c);
      if ((uVar8 != 0) && (uVar8 != 1)) {
        lVar6 = param_1 + 0x690;
        if (*(longlong *)(param_1 + 0x698) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x698);
        }
        iVar10 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x6a0) - 1U & uVar7) * 4);
        if (iVar10 != -1) {
          do {
            plVar1 = (longlong *)(*plVar4 + (longlong)iVar10 * 0x14);
            if (*plVar1 == lVar9) {
              lVar9 = *plStack_170;
              *(int *)(plVar1 + 1) = (int)plStack_170[1];
              *plVar1 = lVar9;
              FUN_14064cf78(plVar4,local_178 & 0xffffffff,1);
              goto LAB_1407f6e59;
            }
            iVar10 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar10 != -1);
        }
      }
      iVar10 = 1;
      if (3 < uVar8) {
        uVar5 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
        lVar9 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x6a0))) {
        uVar7 = *(int *)(param_1 + 0x6a0) - 1U & uVar7;
        *(uint *)(plStack_170 + 2) = uVar7;
        lVar9 = *(longlong *)(param_1 + 0x698);
        if (*(longlong *)(param_1 + 0x698) == 0) {
          lVar9 = param_1 + 0x690;
        }
        *(undefined4 *)((longlong)plStack_170 + 0xc) =
             *(undefined4 *)
              (lVar9 + ((longlong)*(int *)(param_1 + 0x6a0) - 1U & (longlong)(int)uVar7) * 4);
        lVar9 = *(longlong *)(param_1 + 0x698);
        if (*(longlong *)(param_1 + 0x698) == 0) {
          lVar9 = param_1 + 0x690;
        }
        *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x6a0) - 1U & (longlong)(int)uVar7) * 4) =
             (int)local_178;
      }
      else {
        *(int *)(param_1 + 0x6a0) = iVar10;
        FUN_1408cb1a2(plVar4);
      }
LAB_1407f6e59:
      plVar1 = (longlong *)(*plVar4 + lVar11 * 0x14);
LAB_1407f6a90:
      if ((*(float *)(param_1 + 0x444) <= (float)dVar2 - *(float *)(plVar1 + 1)) &&
         ((longlong)*(int *)(param_1 + 0x380) != 0)) {
        lVar11 = *(longlong *)(param_1 + 0x378);
        lVar9 = lVar11 + 0x20;
        lVar6 = 0;
        do {
          if (*(longlong *)(lVar9 + -0x20) == *param_2) {
            if (lVar9 != 0x20) {
              bVar3 = FUN_1407f6f4c(param_1);
              lVar11 = lVar11 - lVar6;
              lVar6 = FUN_1401f6e4a(lVar11 + 8);
              if (*(char *)(param_1 + 0x303) == '\x01') {
                lVar6 = FUN_1401f6e4a(lVar11 + 0x20);
                bVar3 = 2;
              }
              else {
                bVar3 = bVar3 ^ 1;
              }
              if (lVar6 != 0) {
                local_148 = 0;
                uStack_140 = 0;
                local_158 = 0;
                uStack_150 = 0;
                local_168 = 0;
                uStack_160 = 0;
                local_178 = 0;
                plStack_170 = (longlong *)0x0;
                local_138 = 0xc0;
                local_128 = 0;
                local_118 = (longlong *)0x0;
                local_e8 = 0;
                local_d8 = (longlong *)0x0;
                local_a8 = 0;
                uStack_a0 = 0;
                local_98 = 0;
                local_90 = 0x3ff0000000000000;
                local_88 = 0x3ff0000000000000;
                local_80 = 0x3ff0000000000000;
                local_78 = 0x3f80000000000000;
                local_70 = *(float *)(param_3 + 0x18);
                if (*(char *)(param_3 + 0x38) == '\0') {
                  if (1.0 <= local_70) {
                    local_70 = 1.0;
                  }
                  if (local_70 <= 0.0) {
                    local_70 = 0.0;
                  }
                  local_70 = (*(float *)(lVar6 + 0x54) - *(float *)(lVar6 + 0x50)) * local_70 +
                             *(float *)(lVar6 + 0x50);
                }
                fVar12 = *(float *)(param_1 + 0x440) - *(float *)(param_1 + 0x43c);
                if (ABS(fVar12) <= 1e-08) {
                  fVar12 = (float)(-(uint)(*(float *)(param_1 + 0x440) <=
                                          *(float *)(param_1 + 0x498)) & 0x3f800000);
                }
                else {
                  fVar12 = (*(float *)(param_1 + 0x498) - *(float *)(param_1 + 0x43c)) / fVar12;
                }
                if (1.0 <= fVar12) {
                  fVar12 = 1.0;
                }
                if (fVar12 <= 0.0) {
                  fVar12 = 0.0;
                }
                local_70 = (((*(float *)(lVar6 + 0x54) - *(float *)(lVar6 + 0x50)) *
                             ((DAT_14cb7d66c - DAT_14cb7d668) * fVar12 + DAT_14cb7d668) +
                            *(float *)(lVar6 + 0x50)) - local_70) * *(float *)(param_1 + 0x438) +
                           local_70;
                FUN_1407f7390(param_1);
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                          (*(longlong **)(param_1 + 0x20),local_1d8,*(undefined8 *)(lVar9 + -0x20),0
                          );
                if (bVar3 == 1) {
                  FUN_1407f7bc4(param_1,lVar6,local_1d8,&local_178);
                }
                else if (bVar3 == 0) {
                  local_230 = &local_1e8;
                  local_1e8 = 0;
                  uStack_1e0 = 0;
                  local_238 = &local_228;
                  uStack_210 = 0;
                  uStack_1ef = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  local_228 = 0;
                  uStack_220 = 0;
                  local_218 = 0x100000000;
                  uStack_1ff = 0;
                  local_1f8 = 0;
                  uStack_1f7 = 0;
                  uStack_1f0 = 0;
                  FUN_1407f8722(param_1,lVar6,local_1d8,&local_178);
                }
                else {
                  FUN_1407f8ebe(param_1,lVar6,local_1d8,&local_178);
                }
                *(float *)(plVar1 + 1) = (float)dVar2;
                if (local_e8 != 0) {
                  plVar4 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar4 = local_c8;
                  }
                  (**(code **)(*plVar4 + 0x10))();
                }
                if (local_128 != 0) {
                  plVar4 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar4 = local_108;
                  }
                  (**(code **)(*plVar4 + 0x10))();
                }
                if (local_148 != 0) {
                  FUN_1400020a8();
                }
                if (local_158 != 0) {
                  FUN_1400020a8();
                }
                if (local_168 != 0) {
                  FUN_1400020a8();
                }
                if (local_178 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            break;
          }
          lVar6 = lVar6 + -0x70;
          lVar9 = lVar9 + 0x70;
        } while ((longlong)*(int *)(param_1 + 0x380) * -0x70 - lVar6 != 0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f6f4c FUN_1407f6f4c body=1090 status=ok
// SIG undefined FUN_1407f6f4c(void)

undefined8 FUN_1407f6f4c(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
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
  if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1407f7104;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) &&
       (plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(),
       plVar4 != (longlong *)0x0)) {
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
      lVar3 = plVar4[2];
      iVar7 = *(int *)(lVar3 + 0x38);
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar7) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        if (DAT_14cacf818 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = (code *)&LAB_1463b216c;
          local_48 = &LAB_1479977e3;
          local_50 = &LAB_1463b2171;
          local_58 = L"Game";
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x750;
          FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
          lVar3 = plVar4[2];
          iVar7 = *(int *)(lVar3 + 0x38);
        }
        if ((*(int *)(DAT_14cacf818 + 0x38) <= iVar7) &&
           (*(longlong *)
             (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) ==
            DAT_14cacf818 + 0x30)) {
          pcVar2 = *(code **)(*plVar4 + 0x5e8);
          if (pcVar2 == FUN_140972dde) {
            if (plVar4[0x76] != 0) {
LAB_1407f721d:
              uVar6 = 1;
              goto LAB_1407f7104;
            }
            pcVar2 = *(code **)(*plVar4 + 0x5f8);
            if (pcVar2 == FUN_144784df4) {
              if (*(code **)(plVar4[0x784] + 0x18) == (code *)&LAB_144904684) {
                if ((((*(int *)((longlong)plVar4 + 0x75b4) == 0) ||
                     (uVar1 = *(uint *)(plVar4 + 0xeb6), (int)uVar1 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar1)) ||
                   (((plVar10 = (longlong *)
                                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar10 == (longlong *)0x0 ||
                     ((int)plVar10[2] != *(int *)((longlong)plVar4 + 0x75b4))) ||
                    ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1407f7046;
                if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                  lVar3 = *plVar10;
                }
                else {
                  lVar3 = 0;
                }
                lVar3 = lVar3 + 0x110;
              }
              else {
                lVar3 = (**(code **)(plVar4[0x784] + 0x18))(plVar4 + 0x784);
              }
              if (lVar3 == 0) goto LAB_1407f7046;
              lVar3 = *(longlong *)(lVar3 + 0x20);
            }
            else {
              lVar3 = (*pcVar2)(plVar4);
            }
            if (lVar3 == 0) goto LAB_1407f7046;
            lVar3 = *(longlong *)(lVar3 + 0x3b0);
          }
          else {
            lVar3 = (*pcVar2)(plVar4);
          }
          uVar6 = 1;
          if (lVar3 != 0) goto LAB_1407f7104;
        }
LAB_1407f7046:
        lVar3 = DAT_14cb259f8;
        if ((DAT_14cb259f8 != 0) && (lVar5 = FUN_1447210f0(plVar4), DAT_14cb25ab0 == '\x01')) {
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x40) + 0x18);
          if (lVar8 != 0) {
            plVar10 = *(longlong **)(*(longlong *)(lVar3 + 0x40) + 0x10);
            plVar9 = plVar10 + lVar8 * 2;
            do {
              lVar3 = *plVar10;
              if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) == lVar5)) {
                puVar11 = (undefined8 *)(plVar4[0x39] + 0x240);
                if (plVar4[0x39] == 0) {
                  puVar11 = &DAT_14c846480;
                }
                dVar12 = (double)puVar11[4] - *(double *)(lVar3 + 0xb0);
                dVar13 = (double)puVar11[5] - *(double *)(lVar3 + 0xb8);
                dVar14 = (double)puVar11[6] - *(double *)(lVar3 + 0xc0);
                if (dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14 <=
                    (double)(*(float *)(param_1 + 0x430) * *(float *)(param_1 + 0x430)))
                goto LAB_1407f721d;
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 != plVar9);
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_1407f7104:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1407f7390 FUN_1407f7390 body=1258 status=ok
// SIG undefined FUN_1407f7390(void)

void FUN_1407f7390(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70 [3];
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = FUN_1449e3f1e();
  if (lVar8 == 0) goto LAB_1407f746e;
  if (((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
       (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3)) &&
      (((int)uVar3 < DAT_14c9647dc &&
       (lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 != 0)))) &&
     ((*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0x1c) &&
      (((*(uint *)(lVar13 + 8) & 0x10200000) == 0 &&
       (lVar13 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar13 != 0)))))) {
    if (DAT_14cb5b388 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_146431698;
      local_a8 = &LAB_1486775cb;
      local_b0 = &LAB_1464cee35;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 0x10;
      local_d8 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (lVar13 = *(longlong *)(lVar13 + 0x11e8), lVar13 != 0)) {
      lVar12 = *(longlong *)(lVar8 + 0x408);
      if (lVar12 == 0) {
        uVar11 = FUN_1407f787c();
        lVar12 = FUN_14477b664(uVar11);
        *(longlong *)(lVar8 + 0x408) = lVar12;
      }
      plVar14 = (longlong *)(lVar8 + 0x400);
      if (*(longlong *)(lVar8 + 0x410) == 0) {
        if ((lVar12 != 0) && (*plVar14 != 0)) {
          plVar5 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            *(undefined8 *)(lVar8 + 0x410) = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar12 = FUN_144aff482(uVar11,plVar14);
            *(longlong *)(lVar8 + 0x410) = lVar12;
            if (lVar12 != 0) goto LAB_1407f7684;
          }
        }
      }
      else {
LAB_1407f7684:
        uVar15 = FUN_144a381b0(lVar13);
        local_70[0] = *plVar14;
        local_70[1] = 0;
        local_70[2] = 0;
        FUN_1407f78b6(param_2,local_70,uVar15);
      }
    }
  }
  fVar2 = *(float *)(param_1 + 0x628);
  if (0.0 < fVar2) {
    lVar13 = *(longlong *)(lVar8 + 0x308);
    if (lVar13 == 0) {
      uVar11 = FUN_1407f787c();
      lVar13 = FUN_14477b664(uVar11);
      *(longlong *)(lVar8 + 0x308) = lVar13;
    }
    lVar12 = *(longlong *)(lVar8 + 0x310);
    if (((lVar12 == 0) && (lVar12 = 0, lVar13 != 0)) && (*(longlong *)(lVar8 + 0x300) != 0)) {
      plVar14 = *(longlong **)(lVar13 + 0xb8);
      if ((plVar14 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar7 == '\0')) {
        lVar12 = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar14 + 0x110))(plVar14);
        lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar8 + 0x300));
      }
      *(longlong *)(lVar8 + 0x310) = lVar12;
    }
    local_88 = (code *)0x0;
    lStack_80 = 0;
    local_78 = 0;
    uVar11 = FUN_1407f787c();
    lVar13 = FUN_14477b664(uVar11);
    lStack_80 = lVar13;
    lVar9 = FUN_1407f787c();
    uVar11 = FUN_1407f787c();
    FUN_1402d1bfa(&local_58,uVar11,lVar12);
    pcVar6 = local_58;
    if (local_58 != (code *)0x0) {
      local_78 = 0;
    }
    local_88 = local_58;
    lVar10 = FUN_1407f787c();
    if (lVar9 == 0) {
LAB_1407f7559:
      lVar10 = lVar9;
    }
    else if (lVar10 == 0) {
      lVar10 = 0;
    }
    else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
             lVar10 + 0x30)) goto LAB_1407f7559;
    if (lVar13 != lVar10) {
      local_78 = 0;
    }
    uVar11 = FUN_14477b664(lVar10);
    lStack_80 = FUN_14477b664(uVar11);
    if ((pcVar6 != (code *)0x0) && (lStack_80 != 0)) {
      local_78 = lVar12;
    }
    FUN_1407f78b6(param_2,&local_88,fVar2);
  }
  if ((*(longlong *)(param_1 + 0x640) != 0) && ((longlong)*(int *)(lVar8 + 0x438) != 0)) {
    plVar14 = *(longlong **)(lVar8 + 0x430);
    lVar8 = (longlong)*(int *)(lVar8 + 0x438) * 0x28;
    do {
      if (*(longlong *)(param_1 + 0x640) == *plVar14) {
        if (plVar14 != (longlong *)0x0) {
          iVar4 = *(int *)(param_2 + 0x28);
          lVar8 = (longlong)iVar4;
          *(uint *)(param_2 + 0x28) = iVar4 + 1U;
          if (*(uint *)(param_2 + 0x2c) < iVar4 + 1U) {
            FUN_1407f7a52((longlong *)(param_2 + 0x20),iVar4);
          }
          lVar13 = *(longlong *)(param_2 + 0x20);
          puVar1 = (undefined8 *)(lVar13 + lVar8 * 0x18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar13 + 0x10 + lVar8 * 0x18) = 0;
          *(longlong *)(lVar13 + lVar8 * 0x18) = plVar14[1];
          uVar11 = FUN_14477b664(plVar14[2]);
          uVar11 = FUN_14477b664(uVar11);
          *(undefined8 *)(lVar13 + 8 + lVar8 * 0x18) = uVar11;
          *(longlong *)(lVar13 + 0x10 + lVar8 * 0x18) = plVar14[3];
        }
        break;
      }
      plVar14 = plVar14 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
LAB_1407f746e:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f787c FUN_1407f787c body=57 status=ok
// SIG undefined FUN_1407f787c(void)

void FUN_1407f787c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb256c8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar1,L"WwiseGameParameterDef");
  }
  return;
}



// FUNCTION 1407f78b6 FUN_1407f78b6 body=156 status=ok
// SIG undefined FUN_1407f78b6(void)

void FUN_1407f78b6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
    FUN_1407f7952(plVar1,iVar4);
  }
  lVar6 = *plVar1;
  lVar7 = (longlong)iVar4 * 0x20;
  puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar6 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  plVar2 = (longlong *)(*plVar1 + lVar7);
  lVar6 = *param_2;
  if (*(longlong *)(*plVar1 + lVar7) != lVar6) {
    plVar2[2] = 0;
  }
  *plVar2 = lVar6;
  if (plVar2[1] != param_2[1]) {
    plVar2[2] = 0;
  }
  uVar5 = FUN_14477b664();
  lVar6 = FUN_14477b664(uVar5);
  plVar2[1] = lVar6;
  plVar2[2] = param_2[2];
  *(undefined4 *)(plVar2 + 3) = param_3;
  return;
}



// FUNCTION 1407f7952 FUN_1407f7952 body=255 status=ok
// SIG undefined FUN_1407f7952(void)

void FUN_1407f7952(longlong param_1,int param_2)

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



// FUNCTION 1407f7a52 FUN_1407f7a52 body=370 status=ok
// SIG undefined FUN_1407f7a52(void)

void FUN_1407f7a52(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407f7adb;
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
LAB_1407f7adb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1407f7bc4 FUN_1407f7bc4 body=958 status=ok
// SIG undefined FUN_1407f7bc4(void)

void FUN_1407f7bc4(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  code *local_168;
  code *local_160;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_a4;
  uint local_98;
  int local_94;
  undefined4 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3)) &&
     ((((int)uVar3 < DAT_14c9647dc &&
       (lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 != 0)) &&
      ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
       (((*(uint *)(lVar7 + 8) & 0x10200000) == 0 &&
        (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar7 != 0)))))))) {
    if (DAT_14cac9ca8 == 0) {
      local_170 = &local_148;
      local_148 = FUN_141030f22;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_1478c0a72;
      local_180 = &LAB_1417b2375;
      local_188 = L"Engine";
      local_190 = 0x1000000000;
      local_198 = 0x10000004;
      local_1a0 = CONCAT44(local_1a0._4_4_,8);
      local_1a8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (lVar6 = FUN_1447210f0(lVar7), lVar6 != 0)) {
      FUN_1447210f0(lVar7);
      FUN_1407f7f84(&local_148);
      if (local_140 != (longlong *)0x0) {
        iVar5 = (int)local_140[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar9 = (int)local_140[1];
          bVar10 = iVar5 == iVar9;
          if (bVar10) {
            *(int *)(local_140 + 1) = iVar5 + 1;
            iVar9 = iVar5;
          }
          iVar5 = iVar9;
          UNLOCK();
          plVar8 = local_140;
        } while (!bVar10);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_140 + 0x10))();
        }
        pcVar4 = local_148;
        if (plVar8 != (longlong *)0x0) {
          local_150 = param_4;
          if (local_148 != (code *)0x0) {
            memset(&local_148,0,0x100);
            local_78 = 0xffffffff;
            local_148 = (code *)CONCAT44(0x3f800000,(undefined4)local_148);
            local_a4 = 0xffffffff;
            local_138 = *(undefined8 *)(param_3 + 0x20);
            uStack_130 = *(undefined8 *)(param_3 + 0x28);
            local_128 = *(undefined8 *)(param_3 + 0x30);
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = 0x3ff0000000000000;
            local_120 = local_138;
            uStack_118 = uStack_130;
            local_110 = local_128;
            lVar6 = FUN_1407f80bc(param_1);
            if (lVar6 == 0) {
              local_98 = 0;
              local_94 = 0;
            }
            else {
              local_98 = *(uint *)(lVar6 + 0xc);
              if ((int)local_98 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((local_98 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_98 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              local_94 = *(int *)(lVar6 + 0x10);
              if (*(int *)(lVar6 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                iVar9 = DAT_14c964868 + 1;
                bVar10 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar10) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar9);
                }
                LOCK();
                local_94 = *(int *)(lVar6 + 0x10);
                bVar10 = local_94 == 0;
                if (bVar10) {
                  *(int *)(lVar6 + 0x10) = iVar9;
                  local_94 = 0;
                }
                UNLOCK();
                if (bVar10) {
                  local_94 = iVar9;
                }
              }
            }
            if (param_2 != 0) {
              local_1a0 = local_150;
              local_198 = 0;
              local_1a8 = local_1a8 & 0xffffff00;
              FUN_1408f2522(pcVar4,param_2,lVar7,&local_148);
            }
          }
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f7f84 FUN_1407f7f84 body=310 status=ok
// SIG undefined FUN_1407f7f84(void)

longlong * FUN_1407f7f84(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb75f60;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407f80bc FUN_1407f80bc body=1637 status=ok
// SIG undefined FUN_1407f80bc(void)

longlong FUN_1407f80bc(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = local_60;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3))
         && ((int)uVar3 < DAT_14c9647dc)) &&
        ((lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 != 0 &&
         (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c))))) &&
       (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 &&
        (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar9 != 0)))) {
      if (DAT_14cac9ca8 == 0) {
        local_90 = &local_78;
        local_78 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1478c0a72;
        local_a0 = &LAB_1417b2375;
        local_a8 = L"Engine";
        local_b0 = 0x1000000000;
        local_b8 = 0x10000004;
        local_c0 = 8;
        local_c8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      lVar7 = *(longlong *)(lVar9 + 0x10);
      iVar8 = *(int *)(lVar7 + 0x38);
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar8) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        if (DAT_14cb5b388 == 0) {
          local_90 = &local_78;
          local_78 = FUN_141864c34;
          local_80 = FUN_14081d0ea;
          local_88 = (code *)&LAB_146431698;
          local_98 = &LAB_1486775cb;
          local_a0 = &LAB_1464cee35;
          local_a8 = L"Game";
          local_b0 = 0;
          local_b8 = 0x10000005;
          local_c0 = 0x10;
          local_c8 = 0x3a20;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          lVar7 = *(longlong *)(lVar9 + 0x10);
          iVar8 = *(int *)(lVar7 + 0x38);
        }
        if ((((*(int *)(DAT_14cb5b388 + 0x38) <= iVar8) &&
             (*(longlong *)
               (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) ==
              DAT_14cb5b388 + 0x30)) && (lVar9 = *(longlong *)(lVar9 + 0x430), lVar9 != 0)) &&
           ((*(byte *)(lVar9 + 0x555) & 3) == 1)) {
          if (*(int *)(lVar9 + 0x55c) != 0) {
            uVar3 = *(uint *)(lVar9 + 0x558);
            lVar7 = 0;
            if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1407f823a;
            plVar6 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((plVar6 != (longlong *)0x0) &&
               (((int)plVar6[2] == *(int *)(lVar9 + 0x55c) &&
                ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
              lVar7 = *plVar6;
              goto LAB_1407f823a;
            }
          }
          lVar7 = 0;
          goto LAB_1407f823a;
        }
      }
    }
    uVar4 = local_60;
    if ((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
        (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3)) &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 != 0)) &&
        ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c) &&
         (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 &&
          (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), uVar4 = local_60,
          lVar9 != 0)))))))) {
      if (DAT_14cac9ca8 == 0) {
        local_90 = &local_78;
        local_78 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1478c0a72;
        local_a0 = &LAB_1417b2375;
        local_a8 = L"Engine";
        local_b0 = 0x1000000000;
        local_b8 = 0x10000004;
        local_c0 = 8;
        local_c8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      lVar7 = *(longlong *)(lVar9 + 0x10);
      iVar8 = *(int *)(lVar7 + 0x38);
      uVar4 = local_60;
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar8) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        if (DAT_14cacf818 == 0) {
          local_90 = &local_78;
          local_78 = FUN_141030f22;
          local_80 = FUN_14081d0ea;
          local_88 = (code *)&LAB_1463b216c;
          local_98 = &LAB_1479977e3;
          local_a0 = &LAB_1463b2171;
          local_a8 = L"Game";
          local_b0 = 0;
          local_b8 = 0x10000004;
          local_c0 = 0x10;
          local_c8 = 0x750;
          FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
          lVar7 = *(longlong *)(lVar9 + 0x10);
          iVar8 = *(int *)(lVar7 + 0x38);
        }
        uVar4 = local_60;
        if ((((*(int *)(DAT_14cacf818 + 0x38) <= iVar8) &&
             (*(longlong *)
               (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) ==
              DAT_14cacf818 + 0x30)) && (*(longlong *)(lVar9 + 0x450) != 0)) &&
           (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x450) + 0xa8), lVar9 != 0)) {
          pcVar1 = (code *)(lVar9 + 0x240);
          lVar2 = lVar9 + 0x250;
          local_50 = 0x100000000;
          local_40 = 0xffffffff;
          uStack_38 = 0;
          uStack_48 = lVar2;
          if (*(int *)(lVar9 + 0x268) == 0) {
            iVar8 = 0;
          }
          else {
            FUN_1449c0562(&local_50);
            iVar8 = *(int *)(lVar9 + 0x268);
          }
          local_70 = (undefined4)local_50;
          uStack_6c = local_50._4_4_;
          uStack_68 = (undefined4)uStack_48;
          uStack_64 = uStack_48._4_4_;
          uStack_58 = CONCAT44(uStack_34,uStack_38);
          local_60 = local_40;
          uVar4 = local_60;
          local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
          local_78 = pcVar1;
          if ((local_60._4_4_ != iVar8) || (uStack_48 != lVar2)) {
            iVar5 = local_60._4_4_;
            local_60 = uVar4;
            do {
              lVar9 = *(longlong *)(*(longlong *)local_78 + (longlong)iVar5 * 0x10);
              if (lVar9 != 0) {
                lVar7 = FUN_144a3a302();
                if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
                   ((lVar7 = FUN_14885623c(lVar9), lVar7 != 0 &&
                    (*(longlong *)(DAT_14cb0d2b0 + 0x898) != lVar7)))) goto LAB_1407f823a;
              }
              local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
              FUN_1449c0562(&local_70);
              iVar5 = local_60._4_4_;
              uVar4 = local_60;
            } while (local_78 != pcVar1 ||
                     (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar8));
          }
        }
      }
    }
  }
  local_60 = uVar4;
  lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x898);
LAB_1407f823a:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1407f8722 FUN_1407f8722 body=1493 status=ok
// SIG undefined FUN_1407f8722(void)

void FUN_1407f8722(longlong param_1,undefined8 param_2,longlong param_3,wchar_t *param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  double *pdVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_178 [32];
  code **local_158;
  uint local_150;
  uint local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  code *local_f0;
  longlong *local_e8;
  double local_e0;
  code *local_d8;
  longlong *local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
       (uVar5 = *(uint *)(param_1 + 0x18), -1 < (int)uVar5)) &&
      (((int)uVar5 < DAT_14c9647dc &&
       (lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar15 != 0)))) &&
     ((*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x1c) &&
      (((*(uint *)(lVar15 + 8) & 0x10200000) == 0 &&
       (lVar15 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar15 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_120 = &local_d8;
      local_d8 = FUN_141030f22;
      local_110 = FUN_14081d0ea;
      local_118 = FUN_14081d0ea;
      local_128 = &LAB_1478c0a72;
      local_130 = (undefined8 *)&LAB_1417b2375;
      local_138 = L"Engine";
      local_140 = 0x1000000000;
      local_148 = 0x10000004;
      local_150 = 8;
      local_158 = (code **)CONCAT44(local_158._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (lVar12 = FUN_1447210f0(lVar15), lVar12 != 0)) {
      uVar13 = FUN_1447210f0(lVar15);
      FUN_1407f7f84(&local_d8,uVar13);
      if (local_d0 != (longlong *)0x0) {
        iVar11 = (int)local_d0[1];
        do {
          if (iVar11 == 0) {
            plVar16 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar10 = (int)local_d0[1];
          bVar17 = iVar11 == iVar10;
          if (bVar17) {
            *(int *)(local_d0 + 1) = iVar11 + 1;
            iVar10 = iVar11;
          }
          iVar11 = iVar10;
          UNLOCK();
          plVar16 = local_d0;
        } while (!bVar17);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
        if (plVar16 != (longlong *)0x0) {
          if (local_d8 != (code *)0x0) {
            local_108 = local_d8;
            local_d0 = (longlong *)(*(double *)(param_3 + 0x28) + 0.0);
            local_d8 = (code *)(*(double *)(param_3 + 0x20) + 0.0);
            local_c8 = *(double *)(param_3 + 0x30) + 10.0;
            local_e0 = *(double *)(param_3 + 0x30) - (double)*(float *)(param_1 + 0x434);
            local_f0 = local_d8;
            local_e8 = local_d0;
            if (*(char *)(param_5 + 0x1c) == '\x01') {
              dVar3 = *(double *)(param_5 + 0x20);
              dVar21 = *(double *)(param_5 + 0x28);
              dVar4 = *(double *)(param_5 + 0x30);
              if (((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar21))) ||
                 (9.999999747378752e-05 < ABS(dVar4))) {
                dVar22 = dVar4 * dVar4 + dVar3 * dVar3 + dVar21 * dVar21;
                if ((dVar22 != 1.0) || (NAN(dVar22))) {
                  dVar18 = DAT_14c8464e0;
                  dVar19 = DAT_14c8464e8;
                  dVar20 = DAT_14c8464f0;
                  if (9.99999993922529e-09 <= dVar22) {
                    dVar22 = 1.0 / SQRT(dVar22);
                    dVar18 = dVar3 * dVar22;
                    dVar19 = dVar21 * dVar22;
                    dVar20 = dVar4 * dVar22;
                  }
                }
                else {
                  dVar18 = *(double *)(param_5 + 0x20);
                  dVar19 = *(double *)(param_5 + 0x28);
                  dVar20 = dVar4;
                }
                pdVar14 = (double *)&DAT_14c846480;
                if (*(longlong *)(lVar15 + 0x1c8) != 0) {
                  pdVar14 = (double *)(*(longlong *)(lVar15 + 0x1c8) + 0x240);
                }
                dVar7 = *pdVar14;
                dVar8 = pdVar14[1];
                dVar9 = pdVar14[2];
                dVar3 = pdVar14[3];
                dVar22 = dVar18 * dVar9 - dVar7 * dVar20;
                dVar21 = dVar19 * dVar7 - dVar18 * dVar8;
                dVar4 = dVar20 * dVar8 - dVar19 * dVar9;
                dVar4 = dVar4 + dVar4;
                dVar22 = dVar22 + dVar22;
                dVar21 = dVar21 + dVar21;
                local_e0 = local_c8 +
                           (dVar21 * dVar3 + dVar20 + (dVar22 * dVar7 - dVar4 * dVar8)) * 200.0;
                local_e8 = (longlong *)
                           ((double)local_d0 +
                           ((dVar9 * dVar4 - dVar7 * dVar21) + pdVar14[3] * dVar22 + dVar19) * 200.0
                           );
                local_f0 = (code *)((double)local_d8 +
                                   ((dVar21 * dVar8 - dVar22 * dVar9) + dVar3 * dVar4 + dVar18) *
                                   200.0);
              }
            }
            local_100 = 0;
            local_f8 = 0;
            FUN_1405bcfbc(&local_100,param_6);
            local_148 = local_148 & 0xffffff00;
            local_150 = local_150 & 0xffffff00;
            local_158 = &local_f0;
            local_140 = CONCAT44(local_140._4_4_,3);
            local_138 = param_4;
            local_130 = &local_100;
            FUN_1405bc592(local_108,param_2,lVar15,&local_d8);
          }
          LOCK();
          plVar2 = plVar16 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
    }
  }
  if ((int)param_6[1] != 0) {
    puVar6 = (undefined8 *)*param_6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_1407f882c;
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(param_6,0,0,0x10);
    *(undefined4 *)(param_6 + 1) = 0;
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
LAB_1407f882c:
  if ((local_c0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f8cf8 FUN_1407f8cf8 body=453 status=ok
// SIG undefined FUN_1407f8cf8(void)

void FUN_1407f8cf8(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  
  lVar2 = *(longlong *)(param_1 + 200);
  if (lVar2 != 0) {
    lVar3 = *param_3;
    uVar5 = (uint)lVar3;
    iVar9 = (int)((ulonglong)lVar3 >> 0x20);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    if ((param_4 != '\0') && (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224))) {
      lVar8 = param_1 + 0x228;
      if (*(longlong *)(param_1 + 0x230) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x230);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(param_1 + 0x238) - 1U &
                               iVar9 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar3) {
            plVar7 = plVar1 + 1;
            if (plVar7 != (longlong *)0x0 && plVar1 != (longlong *)0x0) goto LAB_1407f8e92;
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
    if ((lVar3 != 0) && (*(int *)(lVar2 + 0xe8) != *(int *)(lVar2 + 0x114))) {
      lVar8 = lVar2 + 0x118;
      if (*(longlong *)(lVar2 + 0x120) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x120);
      }
      iVar9 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(lVar2 + 0x128) - 1U &
                               iVar9 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
      if (iVar9 != -1) {
        lVar8 = 0;
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar2 + 0xe0) + (longlong)iVar9 * 0x14);
          if (*plVar1 == lVar3) {
            lVar8 = 0;
            if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
              iVar9 = (int)plVar1[1];
              if ((-1 < (longlong)iVar9) && (iVar9 < *(int *)(param_1 + 0xd8))) {
                iVar9 = *(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar9 * 4);
                if ((-1 < (longlong)iVar9) && (iVar9 < *(int *)(lVar2 + 0x78))) {
                  plVar7 = (longlong *)((longlong)iVar9 * 0xc + *(longlong *)(lVar2 + 0x70));
LAB_1407f8e92:
                  lVar8 = *plVar7;
                  break;
                }
              }
              goto LAB_1407f8e9a;
            }
            break;
          }
          iVar9 = *(int *)((longlong)plVar1 + 0xc);
        } while (iVar9 != -1);
        goto LAB_1407f8e95;
      }
    }
  }
LAB_1407f8e9a:
  lVar8 = 0;
LAB_1407f8e95:
  *param_2 = lVar8;
  return;
}



// FUNCTION 1407f8ebe FUN_1407f8ebe body=2102 status=ok
// SIG undefined FUN_1407f8ebe(void)

void FUN_1407f8ebe(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_2a8 [32];
  double *local_288;
  undefined4 local_280;
  undefined8 *local_278;
  undefined1 *local_270;
  undefined8 **local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  code **local_250;
  code *local_248;
  code *local_240;
  undefined8 *local_238;
  int local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  code *local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8 [2];
  longlong local_1d8;
  longlong local_1c8;
  longlong local_1b8;
  longlong local_198;
  longlong *local_188;
  longlong local_178 [4];
  longlong local_158;
  longlong *local_148;
  longlong local_138 [13];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
        (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar3 ||
        (lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 == 0)))) ||
      (*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     (((*(uint *)(lVar11 + 8) & 0x10200000) != 0 ||
      (lVar11 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar11 == 0))))
  goto LAB_1407f8f45;
  if (DAT_14cac9ca8 == 0) {
    local_250 = &local_1f8;
    local_1f8 = FUN_141030f22;
    local_240 = FUN_14081d0ea;
    local_248 = FUN_14081d0ea;
    local_258 = &LAB_1478c0a72;
    local_260 = &LAB_1417b2375;
    local_268 = (undefined8 **)0x149e2b68a;
    local_270 = (undefined1 *)0x1000000000;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,0x10000004);
    local_280 = 8;
    local_288 = (double *)CONCAT44(local_288._4_4_,0x390);
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if (((((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) ||
       (lVar8 = FUN_1447210f0(lVar11), lVar8 == 0)) ||
      (((*(longlong *)(lVar8 + 0x30) != 0 &&
        (lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0), lVar9 != 0)) &&
       ((*(longlong *)(lVar9 + 0x588) != 0 &&
        (*(double *)(lVar8 + 0x708) <= *(double *)(lVar8 + 0x6d0))))))) ||
     (((*(byte *)(lVar8 + 0x154) & 0x40) != 0 && (iVar7 = FUN_14490d72a(lVar8), iVar7 == 3))))
  goto LAB_1407f8f45;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar9);
      if (*(longlong *)(lVar4 + 0x360) == lVar8) {
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x278) & 1) != 0)) goto LAB_1407f8f45;
        break;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar9);
  }
  cVar6 = FUN_144a80e00(lVar8);
  if (((((cVar6 != '\0') && (*(char *)(lVar8 + 0x155) < '\0')) ||
       (*(longlong **)(param_1 + 0x20) == (longlong *)0x0)) ||
      (((*(int *)(param_1 + 0x1c) == 0 || (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar3 ||
        ((lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 == 0 ||
         (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x1c))))))))) ||
     (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 ||
      (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar9 == 0))))
  goto LAB_1407f8f45;
  if (DAT_14cb5b388 == 0) {
    local_250 = &local_1f8;
    local_1f8 = FUN_141864c34;
    local_240 = FUN_14081d0ea;
    local_248 = (code *)&LAB_146431698;
    local_258 = &LAB_1486775cb;
    local_260 = &LAB_1464cee35;
    local_268 = (undefined8 **)&DAT_149e063b2;
    local_270 = (undefined1 *)0x0;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,0x10000005);
    local_280 = 0x10;
    local_288 = (double *)CONCAT44(local_288._4_4_,0x3a20);
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  if (((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) ||
     (lVar9 = *(longlong *)(lVar9 + 0x11e8), lVar9 == 0)) goto LAB_1407f8f45;
  lVar4 = *(longlong *)(lVar9 + 0x1eb8);
  plVar5 = *(longlong **)(lVar9 + 0x1ec0);
  if (plVar5 == (longlong *)0x0) {
    fVar13 = 0.0;
    if ((*(longlong *)(&DAT_00001ce8 + *(longlong *)(lVar4 + 0xe0)) != 0) &&
       (lVar9 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + *(longlong *)(lVar4 + 0xe0)) + 0x438),
       lVar9 != 0)) {
      fVar13 = (float)*(double *)(lVar9 + 0x290) * *(float *)(lVar9 + 0x640);
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    fVar13 = 0.0;
    if ((*(longlong *)(&DAT_00001ce8 + *(longlong *)(lVar4 + 0xe0)) != 0) &&
       (lVar9 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + *(longlong *)(lVar4 + 0xe0)) + 0x438),
       lVar9 != 0)) {
      fVar13 = (float)*(double *)(lVar9 + 0x290) * *(float *)(lVar9 + 0x640);
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
  local_200 = (double)fVar13 + *(double *)(param_3 + 0x30);
  local_220 = *(double *)(param_3 + 0x28) + 0.0;
  local_228 = *(double *)(param_3 + 0x20) + 0.0;
  local_218 = local_200 - (double)(fVar13 + 100.0);
  uVar3 = *(uint *)(lVar11 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar7 = *(int *)(lVar9 + 0x10);
  local_210 = local_228;
  local_208 = local_220;
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar7 = *(int *)(lVar9 + 0x10);
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(lVar9 + 0x10) = iVar10;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar7 = iVar10;
    }
  }
  local_ac = 0;
  local_a8 = 0x101;
  local_80 = 0;
  local_78 = 0x800000000;
  local_60 = 0;
  local_54 = 4;
  local_c0 = 0;
  local_b4 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_bf = 1;
  local_bd = 0;
  local_b0 = 0;
  local_bc = 0x1000000;
  local_b8 = 1;
  local_70 = *(undefined4 *)(lVar11 + 0xc);
  local_58 = 1;
  local_1f8 = (code *)CONCAT44(iVar7,uVar3);
  uStack_1f0 = param_2;
  FUN_1405bd0f8(local_1e8,param_4);
  local_238 = (undefined8 *)0x0;
  local_230 = 0;
  FUN_1446efa72(&local_238,0,0x14,0x10);
  local_230 = 0x14;
  *local_238 = &PTR_LAB_14a78e0f0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_238[2] = lVar9;
  *local_238 = &PTR_FUN_14b401fb0;
  local_238[4] = local_1f8;
  local_238[5] = uStack_1f0;
  FUN_1405bd0f8(local_238 + 6,local_1e8);
  if (local_158 != 0) {
    if (local_148 == (longlong *)0x0) {
      local_148 = local_138;
    }
    (**(code **)(*local_148 + 0x10))();
  }
  if (local_198 != 0) {
    if (local_188 == (longlong *)0x0) {
      local_188 = local_178;
    }
    (**(code **)(*local_188 + 0x10))();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1e8[0] != 0) {
    FUN_1400020a8();
  }
  local_260 = (undefined1 *)((ulonglong)local_260 & 0xffffffff00000000);
  local_270 = &DAT_14cad0f10;
  local_278 = &local_d0;
  local_280 = 0;
  local_288 = &local_228;
  local_268 = &local_238;
  FUN_1447de878(lVar8,&local_1f8,1,&local_210);
  if (local_230 == 0) {
LAB_1407f9561:
    if (local_238 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_238 != (undefined8 *)0x0) {
    (**(code **)*local_238)(local_238,0);
    FUN_1446efa72(&local_238,0,0,0x10);
    local_230 = 0;
    goto LAB_1407f9561;
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_1407f8f45:
  if ((local_50 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407f96f6 FUN_1407f96f6 body=539 status=ok
// SIG undefined FUN_1407f96f6(void)

undefined8 FUN_1407f96f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      lVar1 = param_3 + lVar15;
      lVar4 = param_2 + 0x28 + lVar15;
      *(undefined2 *)(lVar4 + -0x18) = *(undefined2 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)(lVar1 + 8);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar4 + -0xc) = uVar7;
      *(undefined4 *)(lVar4 + -8) = uVar8;
      *(undefined4 *)(lVar4 + -4) = uVar9;
      FUN_1404306dc(lVar4,lVar1 + 0x28);
      *(undefined1 *)(lVar4 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      if (param_2 != param_3) {
        iVar5 = *(int *)(param_3 + 0x48 + lVar15);
        uVar6 = *(undefined8 *)(param_3 + 0x40 + lVar15);
        *(int *)(param_2 + 0x48 + lVar15) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x4c + lVar15) == 0) {
          *(undefined4 *)(param_2 + 0x4c + lVar15) = 0;
        }
        else {
          puVar16 = (undefined8 *)(param_2 + lVar15 + 0x40);
          FUN_1407f9dfa(puVar16,iVar5);
          FUN_1407f9da9(*puVar16,uVar6,iVar5);
        }
        FUN_1404eeb61(*(undefined8 *)(param_2 + 0x50 + lVar15),
                      *(undefined4 *)(param_2 + 0x58 + lVar15));
        iVar5 = *(int *)(param_3 + 0x58 + lVar15);
        uVar6 = *(undefined8 *)(param_3 + 0x50 + lVar15);
        *(int *)(param_2 + 0x58 + lVar15) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x5c + lVar15) == 0) {
          *(undefined4 *)(param_2 + 0x5c + lVar15) = 0;
        }
        else {
          puVar16 = (undefined8 *)(param_2 + lVar15 + 0x50);
          FUN_1407f9a3a(puVar16,iVar5);
          FUN_1407f99c3(*puVar16,uVar6,iVar5);
        }
        iVar5 = *(int *)(param_3 + 0x68 + lVar15);
        _Src = *(void **)(param_3 + 0x60 + lVar15);
        *(int *)(param_2 + 0x68 + lVar15) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x6c + lVar15) == 0) {
          *(undefined4 *)(param_2 + 0x6c + lVar15) = 0;
        }
        else {
          puVar16 = (undefined8 *)(param_2 + lVar15 + 0x60);
          FUN_1447c510a(puVar16,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar16,_Src,(longlong)iVar5 << 2);
          }
        }
      }
      lVar1 = param_2 + lVar15;
      lVar4 = param_2 + lVar15;
      lVar2 = param_3 + lVar15;
      lVar3 = param_3 + lVar15;
      FUN_1407f9912(lVar4 + 0x70,lVar3 + 0x70);
      FUN_1407f9912(lVar1 + 0x80,lVar2 + 0x80);
      FUN_1407f9912(lVar1 + 0x90,lVar2 + 0x90);
      FUN_1407f996a(lVar1 + 0xa0,lVar2 + 0xa0);
      *(undefined1 *)(lVar4 + 0xb0) = *(undefined1 *)(lVar3 + 0xb0);
      *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar3 + 0xb8);
      uVar6 = *(undefined8 *)(lVar3 + 0xc0);
      uVar14 = *(undefined8 *)(lVar3 + 200);
      uVar7 = *(undefined4 *)(lVar3 + 0xd0);
      uVar8 = *(undefined4 *)(lVar3 + 0xd4);
      uVar9 = *(undefined4 *)(lVar3 + 0xd8);
      uVar10 = *(undefined4 *)(lVar3 + 0xdc);
      uVar11 = *(undefined4 *)(lVar3 + 0xe1);
      uVar12 = *(undefined4 *)(lVar3 + 0xe5);
      uVar13 = *(undefined4 *)(lVar3 + 0xe9);
      *(undefined4 *)(lVar4 + 0xdd) = *(undefined4 *)(lVar3 + 0xdd);
      *(undefined4 *)(lVar4 + 0xe1) = uVar11;
      *(undefined4 *)(lVar4 + 0xe5) = uVar12;
      *(undefined4 *)(lVar4 + 0xe9) = uVar13;
      *(undefined4 *)(lVar4 + 0xd0) = uVar7;
      *(undefined4 *)(lVar4 + 0xd4) = uVar8;
      *(undefined4 *)(lVar4 + 0xd8) = uVar9;
      *(undefined4 *)(lVar4 + 0xdc) = uVar10;
      *(undefined8 *)(lVar4 + 0xc0) = uVar6;
      *(undefined8 *)(lVar4 + 200) = uVar14;
      lVar15 = lVar15 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407f9912 FUN_1407f9912 body=88 status=ok
// SIG undefined FUN_1407f9912(void)

undefined8 * FUN_1407f9912(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1407f9c6c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407f996a FUN_1407f996a body=89 status=ok
// SIG undefined FUN_1407f996a(void)

undefined8 * FUN_1407f996a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d506e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407f99c3 FUN_1407f99c3 body=118 status=ok
// SIG undefined FUN_1407f99c3(void)

void FUN_1407f99c3(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
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
        FUN_1407f9b1e(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407f9a3a FUN_1407f9a3a body=228 status=ok
// SIG undefined FUN_1407f9a3a(void)

void FUN_1407f9a3a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407f9b1e FUN_1407f9b1e body=334 status=ok
// SIG undefined FUN_1407f9b1e(void)

void FUN_1407f9b1e(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0xc;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407f9b90;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1407f9b90:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407f9c6c FUN_1407f9c6c body=317 status=ok
// SIG undefined FUN_1407f9c6c(void)

void FUN_1407f9c6c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407f9cda;
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
LAB_1407f9cda:
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



// FUNCTION 1407f9da9 FUN_1407f9da9 body=80 status=ok
// SIG undefined FUN_1407f9da9(void)

void FUN_1407f9da9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1407f9dfa FUN_1407f9dfa body=317 status=ok
// SIG undefined FUN_1407f9dfa(void)

void FUN_1407f9dfa(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407f9e68;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1407f9e68:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407f9f37 FUN_1407f9f37 body=1678 status=ok
// SIG undefined FUN_1407f9f37(void)

void FUN_1407f9f37(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined ***pppuVar18;
  undefined1 auStack_238 [32];
  longlong *local_218;
  longlong *local_210;
  longlong local_208;
  ulonglong local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  int local_1dc;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  byte local_1a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar2 = *(ulonglong *)(param_2[1] + 0x18);
  uVar6 = (uint)uVar2;
  if ((param_2[7] & 0x80000000000000U) == 0 && (uVar2 & 0x3a800000) == 0) {
    uVar10 = 1;
    if (1 < (int)*(uint *)(param_2 + 6)) {
      uVar10 = (ulonglong)*(uint *)(param_2 + 6);
    }
    uVar7 = 0;
    do {
      pppuVar18 = (undefined ***)
                  ((longlong)*(int *)((longlong)param_2 + 0x34) * uVar7 +
                  *(int *)((longlong)param_2 + 0x44) + param_3);
      if ((uVar6 >> 0x10 & 1) == 0) {
        if ((uVar6 >> 0x15 & 1) == 0) {
          if ((uVar6 >> 0x14 & 1) == 0) {
            if ((uVar2 >> 0x2e & 1) == 0) {
              if ((uVar2 >> 0x2f & 1) == 0) {
                if ((uVar2 >> 0x34 & 1) == 0) {
                  if ((uVar6 >> 0xc & 1) == 0) {
                    if ((uVar2 >> 0x38 & 1) == 0) {
                      plVar12 = (longlong *)param_1[1];
                      local_210 = param_1;
                      if (plVar12 == (longlong *)0x0) {
                        FUN_1404a881e(param_1);
                        plVar12 = (longlong *)param_1[1];
                      }
                      local_200 = plVar12[0x12];
                      local_1f8 = (longlong *)plVar12[0xe];
                      local_208 = plVar12[0x13];
                      plVar12[0x12] = param_4;
                      (**(code **)(*plVar12 + 0x88))(plVar12,param_2);
                      plVar12[0x13] = 0;
                      local_1c0 = &local_1c8;
                      local_1d8 = &PTR_FUN_149e37810;
                      local_1c8 = &local_1d8;
                      local_1d0 = plVar12;
                      (**(code **)(*param_2 + 0xd0))(param_2,local_1c0,pppuVar18,0);
                      plVar12[0x12] = local_200;
                      (**(code **)(*plVar12 + 0x88))(plVar12,local_1f8);
                      plVar12[0x13] = local_208;
                      param_1 = local_210;
                    }
                    else {
                      local_210 = param_1;
                      FUN_146905c0a(param_1,param_2,pppuVar18,param_4);
                    }
                  }
                  else {
                    local_210 = param_1;
                    FUN_1404a87e6(param_1,param_2,pppuVar18,param_4);
                  }
                }
                else {
                  FUN_140176128(param_1,param_2);
                }
              }
              else {
                FUN_146905b0e(param_1,param_2);
              }
            }
            else {
              local_1a8 = *(byte *)(param_2 + 0x13);
              local_1d8 = (undefined **)param_2[0xe];
              local_1d0 = (longlong *)param_2[0xf];
              local_1c0 = (undefined ****)param_2[0x10];
              uStack_1b8 = (undefined4)param_2[0x11];
              uStack_1b4 = *(undefined4 *)((longlong)param_2 + 0x8c);
              local_1b0 = param_2[0x12];
              iVar15 = *(int *)(pppuVar18 + 1);
              local_210 = param_1;
              local_208 = param_4;
              local_1c8 = pppuVar18;
              if (iVar15 != *(int *)((longlong)pppuVar18 +
                                    (ulonglong)((local_1a8 & 1) == 0) * 0x10 + 0x24)) {
                if ((*(ulonglong *)(local_1d8[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar14 = 0;
                  local_1dc = iVar14;
                  if (0 < iVar15) {
                    do {
                      local_1dc = iVar14;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      local_1dc = iVar14;
                      if (cVar4 != '\0') break;
                      iVar14 = iVar14 + 1;
                      local_1dc = iVar15;
                    } while (iVar15 != iVar14);
                  }
LAB_1407fa48b:
                  iVar15 = local_1dc;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  if (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar9 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar9 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar9 & 1) == 0) {
                        ppuVar5 = ppuVar9;
                      }
                    }
                    FUN_1407f9f37(local_210,local_1d8,
                                  (undefined **)
                                  ((longlong)local_1b0._4_4_ * (longlong)iVar15 + (longlong)ppuVar5)
                                  ,local_208);
                    iVar14 = *(int *)(local_1c8 + 1);
                    do {
                      iVar15 = iVar15 + 1;
                      local_1dc = iVar15;
                      if (iVar14 <= iVar15) break;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      local_1dc = iVar15;
                    } while (cVar4 == '\0');
                    goto LAB_1407fa48b;
                  }
                }
                param_4 = local_208;
                param_1 = local_210;
                if ((*(ulonglong *)(local_1d0[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar15 = *(int *)(local_1c8 + 1);
                  iVar17 = 0;
                  iVar14 = iVar17;
                  if (0 < iVar15) {
                    do {
                      local_1dc = iVar17;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar14 = iVar17;
                      if (cVar4 != '\0') break;
                      iVar17 = iVar17 + 1;
                      iVar14 = iVar15;
                    } while (iVar15 != iVar17);
                  }
LAB_1407fa393:
                  local_1dc = iVar14;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  param_4 = local_208;
                  param_1 = local_210;
                  if (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar9 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar9 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar9 & 1) == 0) {
                        ppuVar5 = ppuVar9;
                      }
                    }
                    FUN_1407f9f37(local_210,local_1d0,
                                  (undefined **)
                                  ((longlong)local_1b0._4_4_ * (longlong)iVar14 + (longlong)ppuVar5)
                                  ,local_208);
                    iVar15 = *(int *)(local_1c8 + 1);
                    do {
                      iVar14 = iVar14 + 1;
                      if (iVar15 <= iVar14) break;
                      local_1dc = iVar14;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    goto LAB_1407fa393;
                  }
                }
              }
            }
          }
          else {
            FUN_1407fa5c6(param_1,param_2[0xe]);
          }
        }
        else {
          local_1f8 = (longlong *)param_2[0xf];
          uVar3 = *(ulonglong *)(local_1f8[1] + 0x18);
          if ((uVar3 & 0x810001fbc66bc2) == 0) {
            local_200 = CONCAT71(local_200._1_7_,(char)param_2[0xe]);
            local_210 = param_1;
            local_208 = param_4;
            (**(code **)(*local_1f8 + 0x178))();
            uVar1 = *(uint *)(pppuVar18 + 1);
            uVar11 = (ulonglong)uVar1;
            param_4 = local_208;
            param_1 = local_210;
            if (uVar11 != 0) {
              uVar13 = (uint)uVar3;
              if ((uVar13 >> 0x10 & 1) == 0 || (local_200 & 1) != 0) {
                local_1e8 = (longlong)*(int *)(param_2[0xf] + 0x34);
                if ((uVar13 >> 0x14 & 1) == 0) {
                  if (0 < (int)uVar1) {
                    local_1f0 = 0;
                    do {
                      param_4 = local_208;
                      if (*(int *)(pppuVar18 + 1) == 0) {
                        lVar16 = 0;
                      }
                      else {
                        if ((local_200 & 1) == 0) {
                          ppuVar9 = *pppuVar18;
                        }
                        else {
                          ppuVar9 = *pppuVar18;
                          if (((ulonglong)ppuVar9 & 1) != 0) {
                            ppuVar9 = (undefined **)
                                      (((longlong)ppuVar9 >> 0x18) + (longlong)pppuVar18);
                          }
                        }
                        lVar16 = (longlong)ppuVar9 + local_1f0;
                      }
                      FUN_1407f9f37(local_210,local_1f8,lVar16,local_208);
                      local_1f0 = local_1f0 + local_1e8;
                      uVar11 = uVar11 - 1;
                      param_1 = local_210;
                    } while (uVar11 != 0);
                  }
                }
                else if (0 < (int)uVar1) {
                  lVar16 = 0;
                  do {
                    if (*(int *)(pppuVar18 + 1) == 0) {
                      lVar8 = 0;
                    }
                    else {
                      if ((local_200 & 1) == 0) {
                        ppuVar9 = *pppuVar18;
                      }
                      else {
                        ppuVar9 = *pppuVar18;
                        if (((ulonglong)ppuVar9 & 1) != 0) {
                          ppuVar9 = (undefined **)
                                    (((longlong)ppuVar9 >> 0x18) + (longlong)pppuVar18);
                        }
                      }
                      lVar8 = (longlong)ppuVar9 + lVar16;
                    }
                    FUN_1407fa5c6(local_210,local_1f8[0xe],lVar8,local_208);
                    lVar16 = lVar16 + local_1e8;
                    uVar11 = uVar11 - 1;
                    param_4 = local_208;
                    param_1 = local_210;
                  } while (uVar11 != 0);
                }
              }
              else {
                local_218 = param_2;
                (**(code **)(*local_210 + 0x98))(local_210,*pppuVar18,uVar11,local_208);
                param_4 = local_208;
                param_1 = local_210;
              }
            }
          }
        }
      }
      else if (*pppuVar18 != (undefined **)0x0) {
        (**(code **)(*param_1 + 0x88))(param_1,pppuVar18,param_4,param_2);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407fa5c6 FUN_1407fa5c6 body=124 status=ok
// SIG undefined FUN_1407fa5c6(void)

void FUN_1407fa5c6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x78);
  if ((*(byte *)(param_2 + 0xb0) & 0x40) != 0) {
    pcVar1 = (code *)(**(code **)(**(longlong **)(param_2 + 0xb8) + 0x88))();
    (*pcVar1)(param_3,param_1);
    lVar2 = *(longlong *)(param_2 + 0x78);
  }
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x50)) {
    FUN_1407f9f37(param_1,lVar2,param_3,param_4);
  }
  return;
}



// FUNCTION 1407fa642 FUN_1407fa642 body=1020 status=ok
// SIG undefined FUN_1407fa642(void)

char FUN_1407fa642(uint *param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *param_1;
  uVar4 = (ulonglong)uVar2;
  if (param_2 != (ulonglong *)0x0) {
    if (uVar2 + 0x80000001 < 2) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_142b0faf8(&local_88);
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
      *(undefined4 *)(param_2 + 4) = uStack_68;
      *(undefined4 *)((longlong)param_2 + 0x24) = uStack_64;
      *(undefined4 *)(param_2 + 5) = uStack_60;
      *(undefined4 *)(param_2 + 2) = local_78;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_74;
      *(undefined4 *)(param_2 + 3) = uStack_70;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_6c;
      *(undefined4 *)param_2 = local_88;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_84;
      *(undefined4 *)(param_2 + 1) = uStack_80;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_7c;
      if ((ulonglong *)&local_88 == param_2) {
        *(undefined2 *)(param_2 + 9) = local_40;
        param_2[8] = local_48;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_2[6] != 0) {
          FUN_1400020a8();
        }
        param_2[6] = local_58;
        *(undefined4 *)(param_2 + 7) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_50._4_4_;
        param_2[8] = local_48;
        *(undefined2 *)(param_2 + 9) = local_40;
      }
      *(byte *)(param_2 + 9) = (byte)param_2[9] | 2;
    }
    else if (uVar2 < 0x7fffffff) {
      lVar9 = *param_3;
      uVar8 = *(uint *)(lVar9 + uVar4);
      if ((uVar8 & 0x3f) == 0x3f) {
        iVar14 = *(int *)(lVar9 + uVar4 + 4);
        puVar13 = (ulonglong *)(lVar9 + uVar4 + 8);
      }
      else {
        puVar13 = (ulonglong *)(lVar9 + uVar4 + 4);
        iVar14 = (uVar8 & 0x3f) << 0xb;
      }
      uVar7 = uVar8 >> 0x17 & 0x3f;
      *(uint *)((longlong)param_2 + 0x44) = uVar7;
      if ((int)uVar8 < 0) {
        uVar4 = (ulonglong)(uint)*puVar13;
        lVar9 = 4;
      }
      else {
        uVar4 = *puVar13;
        lVar9 = 8;
      }
      puVar13 = (ulonglong *)((longlong)puVar13 + lVar9);
      *param_2 = uVar4;
      if ((uVar8 >> 0x1e & 1) == 0) {
        uVar4 = *puVar13;
        lVar9 = 8;
      }
      else {
        uVar4 = (ulonglong)(uint)*puVar13;
        lVar9 = 4;
      }
      puVar13 = (ulonglong *)((longlong)puVar13 + lVar9);
      param_2[2] = uVar4;
      if (uVar7 == 0) {
        param_2[1] = uVar4;
      }
      else if ((uVar8 >> 0x1d & 1) == 0) {
        param_2[1] = *puVar13;
        puVar13 = puVar13 + 1;
      }
      else {
        param_2[1] = (ulonglong)(uint)*puVar13;
        puVar13 = (ulonglong *)((longlong)puVar13 + 4);
      }
      if ((uVar8 >> 0x16 & 1) == 0) {
        bVar6 = (byte)param_2[9] & 0xfe;
      }
      else {
        bVar6 = (byte)param_2[9] | 1;
      }
      *(byte *)(param_2 + 9) = bVar6;
      uVar7 = uVar8 >> 6 & 0xffff;
      puVar1 = param_2 + 6;
      *(undefined4 *)(param_2 + 7) = 0;
      uVar8 = 0;
      if (*(uint *)((longlong)param_2 + 0x3c) != uVar7) {
        FUN_1407faa40(puVar1,uVar7);
        uVar8 = (uint)param_2[7];
      }
      if ((int)uVar8 < (int)uVar7) {
        *(uint *)(param_2 + 7) = uVar7;
        if (*(int *)((longlong)param_2 + 0x3c) - uVar8 < uVar7 - uVar8) {
          FUN_14707f916(puVar1);
        }
      }
      else if (uVar7 < uVar8) {
        *(uint *)(param_2 + 7) = uVar7;
        FUN_1470857ce(puVar1);
      }
      *(undefined4 *)(param_2 + 8) = 0;
      if ((uVar7 != 0) && (*(int *)(param_2 + 8) = iVar14, uVar7 == 1)) {
        *(int *)(param_2 + 8) = (int)param_2[2];
      }
      bVar6 = (byte)param_2[9];
      *(byte *)(param_2 + 9) = bVar6 & 0xfd;
      iVar14 = *(int *)(param_5 + 4);
      if (iVar14 < 5) {
        uVar4 = *param_2;
      }
      else {
        uVar4 = 0;
      }
      uVar8 = (uint)param_2[7];
      if ((ulonglong)uVar8 == 1 && (bVar6 & 1) == 0) {
        plVar3 = (longlong *)param_2[6];
        lVar9 = 0x49;
        if (*(int *)((longlong)param_2 + 0x44) == 0) {
          lVar9 = 0x35;
        }
        lVar11 = 0x30;
        if (2 < iVar14) {
          lVar11 = lVar9;
        }
        lVar9 = lVar11 + 8;
        if (1 < iVar14) {
          lVar9 = lVar11;
        }
        *plVar3 = lVar9 + uVar4;
        plVar3[1] = lVar9 + uVar4 + param_2[1];
      }
      else if (0 < (int)uVar8) {
        if (iVar14 < 3) {
          lVar9 = 0x30;
        }
        else if (*(int *)((longlong)param_2 + 0x44) == 0) {
          lVar9 = 0x35;
        }
        else {
          lVar9 = (ulonglong)uVar8 * 0x10 + 0x39;
        }
        lVar11 = lVar9 + 8;
        if (1 < iVar14) {
          lVar11 = lVar9;
        }
        lVar11 = lVar11 + uVar4;
        lVar5 = 0;
        lVar9 = 0xf;
        if ((bVar6 & 1) == 0) {
          lVar9 = lVar5;
        }
        lVar10 = 8;
        do {
          uVar4 = param_2[6];
          *(longlong *)((uVar4 - 8) + lVar10) = lVar11;
          uVar12 = (ulonglong)*(uint *)((longlong)puVar13 + lVar5 * 4);
          *(ulonglong *)(uVar4 + lVar10) = lVar11 + uVar12;
          lVar11 = lVar11 + (uVar12 + lVar9 & (-(ulonglong)((bVar6 & 1) == 0) | 0xfffffffffffffff0))
          ;
          lVar5 = lVar5 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar5 < (int)param_2[7]);
      }
    }
    else {
      puVar13 = (ulonglong *)(*param_4 + (ulonglong)~uVar2 * 0x50);
      *param_2 = *puVar13;
      param_2[1] = puVar13[1];
      param_2[2] = puVar13[2];
      *(undefined4 *)((longlong)param_2 + 0x44) = *(undefined4 *)((longlong)puVar13 + 0x44);
      FUN_14707d5ec(param_2 + 6,puVar13 + 6);
      *(int *)(param_2 + 8) = (int)puVar13[8];
      *(char *)(param_2 + 9) = (char)puVar13[9];
    }
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined1 *)((longlong)param_2 + 0x49) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (uVar2 + 0x80000001 < 2) + '\x01';
}



// FUNCTION 1407faa40 FUN_1407faa40 body=212 status=ok
// SIG undefined FUN_1407faa40(void)

void FUN_1407faa40(longlong param_1,uint param_2)

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



// FUNCTION 1407fab14 FUN_1407fab14 body=306 status=ok
// SIG undefined FUN_1407fab14(void)

undefined8 FUN_1407fab14(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1407fac40;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1407fac40;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_1407fac40:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1407fabe8;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1407fabe8;
    }
  }
  uVar6 = 0;
LAB_1407fabe8:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fac48 FUN_1407fac48 body=1424 status=ok
// SIG undefined FUN_1407fac48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407fac48(longlong param_1,undefined8 param_2,float param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 unaff_XMM10 [16];
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  code *local_a0;
  longlong *local_98;
  ulonglong local_90;
  undefined1 auVar17 [16];
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = FUN_14011be0c(param_1 + 0x30);
  if (lVar7 == 0) goto LAB_1407fb0bd;
  if (DAT_14cbadd90 == 0) {
    local_c0 = &local_a0;
    local_a0 = FUN_141030f22;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_1459f2e4c;
    local_c8 = &LAB_148c39de3;
    local_d0 = &LAB_1457a9eb2;
    local_d8 = &DAT_149e063b2;
    local_e0 = 0;
    local_e8 = 0x10000004;
    local_f0 = CONCAT44(local_f0._4_4_,0x10);
    local_f8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1407fb0bd;
  cVar5 = FUN_14008355a((uint *)(param_1 + 0xb8),0);
  if (cVar5 != '\0') goto LAB_1407facfd;
  iVar4 = *(int *)(param_1 + 0xbc);
  if (((iVar4 == 0) || (uVar13 = *(uint *)(param_1 + 0xb8), (int)uVar13 < 0)) ||
     (DAT_14c9647dc <= (int)uVar13)) {
    if (_DAT_00000d60 == DAT_14cb95128) goto LAB_1407fb0bd;
LAB_1407fb11f:
    lVar11 = 0;
  }
  else {
    plVar12 = (longlong *)
              ((ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
    if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != iVar4)) ||
       ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar12;
    }
    if (*(longlong *)(lVar11 + 0xd60) == DAT_14cb95128) goto LAB_1407fb0bd;
    if (((DAT_14c9647dc <= (int)uVar13) ||
        (plVar12 = (longlong *)
                   ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
        plVar12 == (longlong *)0x0)) ||
       (((int)plVar12[2] != iVar4 || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0))))
    goto LAB_1407fb11f;
    lVar11 = *plVar12;
  }
  cVar5 = (**(code **)(*(longlong *)(lVar11 + 0x1068) + 0x38))(lVar11 + 0x1068);
  if (cVar5 == '\0') {
LAB_1407facfd:
    FUN_1403adc5e(&local_a0,lVar7);
    plVar12 = *(longlong **)(local_a0 + 0x70);
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 4));
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_98 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar8 = (int *)((longlong)local_98 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
        }
      }
    }
    if (0 < (int)plVar12[1]) {
      *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
      lVar7 = *plVar12;
      *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
      cVar5 = '\0';
      if ((longlong)*(int *)(lVar7 + 0x28) != 0) {
        piVar8 = *(int **)(lVar7 + 0x20);
        lVar11 = (longlong)*(int *)(lVar7 + 0x28) * 0x1c;
        do {
          if ((*piVar8 == (int)DAT_14cbd69c0) &&
             (piVar8[1] == (int)((ulonglong)DAT_14cbd69c0 >> 0x20))) {
            cVar5 = '\0';
            if ((piVar8 != (int *)0x0) && ((char)piVar8[3] == '\x01')) {
              puVar1 = (uint *)(param_1 + 0x58);
              plVar10 = *(longlong **)(param_1 + 0x60);
              fVar15 = 0.0;
              if ((((((plVar10 != (longlong *)0x0) && (*(int *)(param_1 + 0x5c) != 0)) &&
                    (uVar13 = *puVar1, -1 < (int)uVar13)) &&
                   (((int)uVar13 < DAT_14c9647dc &&
                    (lVar11 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8),
                    lVar11 != 0)))) && (*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x5c))) &&
                 ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) {
                if (*(code **)(*plVar10 + 0x10) == (code *)&LAB_1447a1f2e) {
                  plVar10 = plVar10 + 0xd9;
                }
                else {
                  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))();
                }
                cVar5 = FUN_14486eb0e(plVar10,puVar1);
                fVar15 = 0.0;
                if (cVar5 != '\0') {
                  lVar11 = FUN_14008e0ae(puVar1);
                  if ((*(longlong *)(lVar11 + 0x18) == 0) ||
                     (*(char *)(*(longlong *)(lVar11 + 0x18) + 0x18) != '\x01')) {
                    fVar16 = *(float *)(lVar11 + 0x30);
                  }
                  else {
                    auVar17 = roundps(unaff_XMM10,ZEXT416(*(uint *)(lVar11 + 0x30)),3);
                    fVar16 = auVar17._0_4_;
                  }
                  lVar11 = FUN_14008e0ae(puVar1);
                  fVar3 = *(float *)(lVar11 + 200);
                  uVar9 = FUN_14008e0ae(puVar1);
                  fVar14 = (float)FUN_1407fb3de(uVar9);
                  fVar15 = 0.0;
                  if (0.0 < fVar14) {
                    fVar15 = ABS(fVar16 - fVar3);
                  }
                  else {
                    lVar11 = FUN_14008e0ae(puVar1);
                    fVar14 = *(float *)(lVar11 + 0x54);
                    lVar11 = FUN_14008e0ae(puVar1);
                    if (fVar14 <= 0.0) goto LAB_1407faf61;
                    fVar15 = ABS(*(float *)(lVar11 + 200));
                  }
                  fVar15 = fVar15 / fVar14;
                }
              }
LAB_1407faf61:
              uVar9 = DAT_14cbd6a20;
              lVar11 = FUN_14008e0ae(puVar1);
              uVar2 = *(undefined4 *)(lVar11 + 0x60);
              lVar11 = FUN_14008e0ae(puVar1);
              fVar16 = *(float *)(lVar11 + 0x24);
              fVar14 = *(float *)(lVar11 + 0x30) - fVar16;
              fVar3 = *(float *)(lVar11 + 200);
              uVar13 = -(uint)(fVar14 != 0.0);
              lVar11 = FUN_14008e0ae(puVar1);
              local_f0 = uVar9;
              local_f8 = uVar2;
              cVar5 = FUN_1407fb220(lVar7,fVar15,*(undefined4 *)(lVar11 + 0x30),
                                    ~uVar13 & 0x3f800000 |
                                    (uint)(1.0 - (fVar3 - fVar16) / fVar14) & uVar13);
            }
            break;
          }
          piVar8 = piVar8 + 7;
          lVar11 = lVar11 + -0x1c;
          cVar5 = '\0';
        } while (lVar11 != 0);
      }
      uVar9 = DAT_14cbd6a50;
      lVar11 = FUN_14008e0ae(param_1 + 0x58);
      uVar2 = *(undefined4 *)(lVar11 + 0x60);
      lVar11 = FUN_14008e0ae(param_1 + 0x58);
      local_f0 = uVar9;
      local_f8 = uVar2;
      cVar6 = FUN_1407fb220(lVar7,1.0 - param_3,*(undefined4 *)(lVar11 + 0x30),1.0 - param_3);
      if (cVar6 != '\0' || cVar5 != '\0') {
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_118);
  }
LAB_1407fb0bd:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407fb220 FUN_1407fb220 body=446 status=ok
// SIG undefined FUN_1407fb220(void)

ulonglong FUN_1407fb220(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                       longlong param_6)

{
  byte bVar1;
  longlong *plVar2;
  byte bVar3;
  undefined7 uVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  
  iVar6 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar6 + 1;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x2c;
    do {
      if (((int)*plVar2 == (int)param_6) &&
         (*(int *)((longlong)plVar2 + 4) == (int)((ulonglong)param_6 >> 0x20))) {
        if (plVar2 != (longlong *)0x0) {
          bVar3 = 0;
          uVar4 = 0;
          goto LAB_1407fb290;
        }
        break;
      }
      plVar2 = (longlong *)((longlong)plVar2 + 0x2c);
      lVar9 = lVar9 + -0x2c;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 0x48) = iVar6 + 2;
  param_1 = param_1 + 0x38;
  plVar2 = (longlong *)FUN_14044046a(param_1);
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  bVar3 = 1;
  if ((int)plVar2[1] == 0 || *plVar2 != param_6) {
    *plVar2 = param_6;
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
LAB_1407fb290:
  if ((*(float *)((longlong)plVar2 + 0x14) != param_2) ||
     (NAN(*(float *)((longlong)plVar2 + 0x14)) || NAN(param_2))) {
    iVar6 = (int)plVar2[3] + 1;
LAB_1407fb2a6:
    *(float *)((longlong)plVar2 + 0x14) = param_2;
    *(int *)(plVar2 + 3) = iVar6;
    bVar5 = 1;
  }
  else {
    if ((int)plVar2[3] == 0) {
      iVar6 = 1;
      goto LAB_1407fb2a6;
    }
    bVar5 = 0;
  }
  if ((*(float *)((longlong)plVar2 + 0x1c) != param_3) ||
     (NAN(*(float *)((longlong)plVar2 + 0x1c)) || NAN(param_3))) {
    iVar6 = (int)plVar2[4] + 1;
LAB_1407fb395:
    *(float *)((longlong)plVar2 + 0x1c) = param_3;
    *(int *)(plVar2 + 4) = iVar6;
    bVar7 = 1;
  }
  else {
    if ((int)plVar2[4] == 0) {
      iVar6 = 1;
      goto LAB_1407fb395;
    }
    bVar7 = 0;
  }
  if ((*(float *)((longlong)plVar2 + 0x24) != param_4) ||
     (NAN(*(float *)((longlong)plVar2 + 0x24)) || NAN(param_4))) {
    iVar6 = (int)plVar2[5] + 1;
LAB_1407fb2f1:
    *(float *)((longlong)plVar2 + 0x24) = param_4;
    *(int *)(plVar2 + 5) = iVar6;
    bVar8 = 1;
  }
  else {
    if ((int)plVar2[5] == 0) {
      iVar6 = 1;
      goto LAB_1407fb2f1;
    }
    bVar8 = 0;
  }
  if ((*(float *)((longlong)plVar2 + 0xc) != param_5) ||
     (NAN(*(float *)((longlong)plVar2 + 0xc)) || NAN(param_5))) {
    iVar6 = (int)plVar2[2] + 1;
  }
  else {
    if ((int)plVar2[2] != 0) {
      bVar1 = 0;
      goto LAB_1407fb320;
    }
    iVar6 = 1;
  }
  *(float *)((longlong)plVar2 + 0xc) = param_5;
  *(int *)(plVar2 + 2) = iVar6;
  bVar1 = 1;
LAB_1407fb320:
  return CONCAT71(uVar4,bVar3 | bVar5 | bVar7 | bVar8 | bVar1) & 0xffffffff;
}



// FUNCTION 1407fb3de FUN_1407fb3de body=337 status=ok
// SIG undefined FUN_1407fb3de(void)

float FUN_1407fb3de(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x90);
  if ((1e-08 < ABS(*(float *)(param_1 + 0xa8))) || (1e-08 < ABS(*(float *)(param_1 + 0x9c)))) {
    fVar2 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24);
    fVar3 = 0.0;
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      fVar3 = (*(float *)(param_1 + 200) - *(float *)(param_1 + 0x24)) / fVar2;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar4 = fVar2 * *(float *)(param_1 + 0x9c) +
            *(float *)(param_1 + 0xa8) * (1.0 - fVar3) * fVar2 + fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x60) + fVar4;
  if (1e-08 < ABS(*(float *)(param_1 + 0x6c))) {
    lVar1 = FUN_141238f08(param_1);
    if (lVar1 == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = (float)*(double *)(lVar1 + 0x6d0);
    }
    fVar3 = *(float *)(param_1 + 0x78);
    if ((ABS(*(float *)(param_1 + 200) - *(float *)(param_1 + 0x24)) < 0.0001) &&
       (*(float *)(param_1 + 200) < *(float *)(param_1 + 0x30))) {
      fVar3 = fVar3 + *(float *)(param_1 + 0x84);
    }
    if ((*(float *)(param_1 + 0x11c) <= 0.0) || (fVar3 + *(float *)(param_1 + 0x11c) <= fVar2)) {
      fVar4 = fVar4 + *(float *)(param_1 + 0x6c);
    }
  }
  return fVar4;
}



// FUNCTION 1407fb530 FUN_1407fb530 body=47 status=ok
// SIG undefined FUN_1407fb530(void)

void FUN_1407fb530(longlong param_1)

{
  FUN_1407fb560();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x550);
    return;
  }
  return;
}



// FUNCTION 1407fb560 FUN_1407fb560 body=84 status=ok
// SIG undefined FUN_1407fb560(void)

void FUN_1407fb560(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_140331450(param_1,0);
  uVar1 = FUN_14477b072(param_1,DAT_14cac9b80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_1407fb5b4((longlong)param_1 + 0x20e,param_1);
  FUN_1400da9ba(param_1 + 0x57,param_1);
  return;
}



// FUNCTION 1407fb5b4 FUN_1407fb5b4 body=130 status=ok
// SIG undefined FUN_1407fb5b4(void)

void FUN_1407fb5b4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407fb638(param_1,&local_30);
  if (local_30 != 0) {
    local_20 = param_2;
    FUN_1447cd2ec();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fb638 FUN_1407fb638 body=264 status=ok
// SIG undefined FUN_1407fb638(void)

undefined8 * FUN_1407fb638(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1407fb65c;
  FUN_14111abfe(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x20e,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1407fb65c;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001407fb71e:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001407fb71e;
      }
    }
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
LAB_1407fb65c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fb742 FUN_1407fb742 body=166 status=ok
// SIG undefined FUN_1407fb742(void)

undefined8 * FUN_1407fb742(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b00be10;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1407fb7e8(param_1 + 1,iVar1,0);
    FUN_1406b363d(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1407fb936(param_1 + 3,iVar1,0);
    FUN_1406b40b4(param_1[3],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1407fb7e8 FUN_1407fb7e8 body=334 status=ok
// SIG undefined FUN_1407fb7e8(void)

void FUN_1407fb7e8(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407fb85a;
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
LAB_1407fb85a:
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



// FUNCTION 1407fb936 FUN_1407fb936 body=216 status=ok
// SIG undefined FUN_1407fb936(void)

void FUN_1407fb936(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1407fba0e FUN_1407fba0e body=128 status=ok
// SIG undefined FUN_1407fba0e(void)

undefined8 FUN_1407fba0e(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (ulonglong *)*param_1;
  if ((longlong)puVar1 < 0) {
    local_20 = CONCAT44((int)puVar1,(int)((ulonglong)puVar1 >> 0x20)) & 0xffffffff7fffffff;
    FUN_1407fba90(&local_20,param_2);
  }
  else {
    local_18 = (int)puVar1[1] + -1;
    if ((int)puVar1[1] == 0) {
      local_18 = 0;
    }
    local_20 = *puVar1;
    FUN_146858d2e(param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fba90 FUN_1407fba90 body=491 status=ok
// SIG undefined FUN_1407fba90(void)

ulonglong * FUN_1407fba90(uint *param_1,ulonglong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar11;
  size_t sVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong *local_40 [2];
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  ulonglong uVar10;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(&DAT_14c927ae8 + (ulonglong)*param_1 * 8);
  uVar9 = param_1[1] >> 3;
  uVar10 = (ulonglong)uVar9;
  switch(param_1[1] & 7) {
  case 0:
    local_28 = 0;
    pwVar15 = (wchar_t *)
              ((longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + uVar10 * 4) +
              *(longlong *)(lVar4 + 0x30));
    if (pwVar15 != (wchar_t *)0x0) {
      sVar12 = strlen((char *)pwVar15);
      local_28 = (int)sVar12;
    }
    local_30 = pwVar15;
    FUN_146858ed3(param_2);
    break;
  case 1:
    local_28 = 0;
    pwVar15 = (wchar_t *)
              ((longlong)*(int *)(*(longlong *)(lVar4 + 0x40) + uVar10 * 4) * 2 +
              *(longlong *)(lVar4 + 0x50));
    if (pwVar15 != (wchar_t *)0x0) {
      sVar12 = wcslen(pwVar15);
      local_28 = (int)sVar12;
    }
    local_30 = pwVar15;
    FUN_146858d2e(param_2);
    break;
  case 2:
    uVar10 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x60) + (ulonglong)uVar9 * 4);
    goto LAB_1407fbbdf;
  case 3:
    uVar10 = *(ulonglong *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)uVar9 * 8);
LAB_1407fbbdf:
    FUN_1427b1ae1(param_2,uVar10);
LAB_1407fbb55:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  case 4:
  case 6:
    if (*(int *)(*(longlong *)(lVar4 + 0xa0) + 8 + (ulonglong)uVar9 * 0x10) == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    else {
      puVar14 = *(undefined2 **)(*(longlong *)(lVar4 + 0xa0) + (ulonglong)uVar9 * 0x10);
    }
    local_48 = 0;
    FUN_1467d22ba(local_40,puVar14,0,0);
    puVar13 = (undefined8 *)FUN_1447a1f4a(local_40);
    local_28 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      local_28 = 0;
    }
    local_30 = (wchar_t *)*puVar13;
    FUN_146858d2e(param_2);
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    break;
  case 5:
    lVar4 = *(longlong *)(lVar4 + 0x90);
    uVar10 = (ulonglong)uVar9;
    param_2[4] = *(ulonglong *)(lVar4 + 0x20 + uVar10 * 0x28);
    puVar1 = (undefined4 *)(lVar4 + uVar10 * 0x28);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (ulonglong *)(lVar4 + 0x10 + uVar10 * 0x28);
    uVar10 = puVar2[1];
    param_2[2] = *puVar2;
    param_2[3] = uVar10;
    *(undefined4 *)param_2 = uVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
    goto LAB_1407fbb55;
  case 7:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    goto LAB_1407fbb55;
  default:
    lVar4 = *(longlong *)(lVar4 + 0x80);
    lVar11 = uVar10 * 0x10;
    uVar9 = *(uint *)(lVar4 + lVar11);
    uVar3 = *(uint *)(lVar4 + 4 + lVar11);
    param_2[2] = 0;
    *param_2 = (ulonglong)uVar9;
    param_2[1] = (ulonglong)uVar3;
    param_2[4] = (ulonglong)*(uint *)(lVar4 + 0xc + lVar11);
    param_2[3] = (ulonglong)*(uint *)(lVar4 + 8 + lVar11);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407fbc7e FUN_1407fbc7e body=98 status=ok
// SIG undefined FUN_1407fbc7e(void)

void FUN_1407fbc7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f51a30;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1407fbce0(param_1);
  return;
}



// FUNCTION 1407fbce0 FUN_1407fbce0 body=101 status=ok
// SIG undefined FUN_1407fbce0(void)

void FUN_1407fbce0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f4c0d8;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1407fbd50 FUN_1407fbd50 body=294 status=ok
// SIG undefined FUN_1407fbd50(void)

undefined8 * FUN_1407fbd50(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_38,L"SpawnComponent",1);
  uVar1 = FUN_1407fbe78();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar1,0);
  FUN_1446f470e(&local_40,L"Preview",1);
  uVar1 = FUN_140485ce2();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar1,0);
  FUN_1407fbf5e(param_1,param_2);
  *param_1 = &PTR_FUN_14b800e80;
  param_1[0x72] = &PTR_FUN_14b8014c0;
  param_1[0x73] = &PTR_FUN_14b8014e0;
  param_1[0x83] = &PTR_FUN_14b801500;
  param_1[0x84] = &PTR_FUN_14b801520;
  param_1[0x85] = &PTR_FUN_14b801540;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fbe78 FUN_1407fbe78 body=228 status=ok
// SIG undefined FUN_1407fbe78(void)

longlong FUN_1407fbe78(void)

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
  if (DAT_14cbaee40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464e42c6;
    local_38 = &LAB_148c45c54;
    local_40 = &LAB_140901371;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xfd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSpawnerComponent",&DAT_14cbaee40,FUN_1465edb64);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaee40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fbf5e FUN_1407fbf5e body=386 status=ok
// SIG undefined FUN_1407fbf5e(void)

undefined8 * FUN_1407fbf5e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_30,L"SpawnComponent",1);
  uVar1 = FUN_1407fc0e2();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_1407fc2ae(param_1,param_2);
  *param_1 = &PTR_FUN_14b16c1f0;
  param_1[0x72] = &PTR_LAB_14b16c830;
  param_1[0x73] = &PTR_LAB_14b16c850;
  param_1[0x83] = &PTR_LAB_14b16c870;
  param_1[0x84] = &PTR_LAB_14b16c890;
  param_1[0x85] = &PTR_LAB_14b16c8b0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = &DAT_14a171d50;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x8b] = &DAT_14cb70058;
  uVar1 = DAT_14cb8c398;
  uVar2 = FUN_1407fc1c8();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x87] = lVar3;
  FUN_140486fc4(lVar3,param_1[0x39],0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fc0e2 FUN_1407fc0e2 body=228 status=ok
// SIG undefined FUN_1407fc0e2(void)

longlong FUN_1407fc0e2(void)

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
  if (DAT_14cb5ee58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641f1d2;
    local_38 = &LAB_1486b0da1;
    local_40 = &LAB_1464e42be;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0xed0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameSpawnerComponent",&DAT_14cb5ee58,&DAT_1486b0da0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ee58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fc1c8 FUN_1407fc1c8 body=228 status=ok
// SIG undefined FUN_1407fc1c8(void)

longlong FUN_1407fc1c8(void)

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
  if (DAT_14cb22450 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147f2a025;
    local_40 = &LAB_1408036a9;
    local_48 = L"Editor";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 0x10;
    local_68 = 0x9c0;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryComponent",&DAT_14cb22450,&DAT_147f2a024);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb22450;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fc2ae FUN_1407fc2ae body=252 status=ok
// SIG undefined FUN_1407fc2ae(void)

undefined8 * FUN_1407fc2ae(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_38,L"SpawnComponent",1);
  uVar1 = FUN_1407fc3ac();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar1,0);
  FUN_1446f470e(&local_40,L"Preview",1);
  uVar1 = FUN_140486638();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar1,0);
  FUN_1407fc492(param_1,param_2);
  *param_1 = &PTR_FUN_14ab87580;
  param_1[0x72] = &PTR_FUN_14ab87bc0;
  param_1[0x73] = &PTR_FUN_14ab87be0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fc3ac FUN_1407fc3ac body=228 status=ok
// SIG undefined FUN_1407fc3ac(void)

longlong FUN_1407fc3ac(void)

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
  if (DAT_14cb1c0f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146419162;
    local_38 = &LAB_147e3424d;
    local_40 = &LAB_14641f1c9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0xc30;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavSpawnerComponent",&DAT_14cb1c0f0,&DAT_147e3424c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c0f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407fc492 FUN_1407fc492 body=314 status=ok
// SIG undefined FUN_1407fc492(void)

undefined8 * FUN_1407fc492(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_38,L"SpawnComponent",1);
  uVar2 = FUN_1407fc5ce();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar2,0);
  FUN_140486804(param_1,param_2);
  *param_1 = &PTR_FUN_14ab5bb70;
  param_1[0x72] = &PTR_FUN_14ab5c1b0;
  param_1[0x73] = &PTR_FUN_14ab5c1d0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  lVar1 = param_1[0x77];
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = FUN_1407fc5ce();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
    }
  }
  param_1[0x82] = lVar3;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407fc5ce FUN_1407fc5ce body=228 status=ok
// SIG undefined FUN_1407fc5ce(void)

longlong FUN_1407fc5ce(void)

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
  if (DAT_14cb1a910 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146419168;
    local_38 = &LAB_147e1c031;
    local_40 = &LAB_14641916d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xbf0;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnerComponent",&DAT_14cb1a910,FUN_146419140);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a910;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


