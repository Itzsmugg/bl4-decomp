// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d29642 FUN_140d29642 body=57 status=ok
// SIG undefined FUN_140d29642(void)

void FUN_140d29642(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5acd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5acd8 = FUN_140002ddd(FUN_1464ccbaf,uVar1,L"GbxBrainAspect_Leap");
  }
  return;
}



// FUNCTION 140d2967c FUN_140d2967c body=155 status=ok
// SIG undefined FUN_140d2967c(void)

void FUN_140d2967c(longlong *param_1,undefined8 param_2,float param_3,float param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_4 < param_3) {
    if (0 < (int)uVar1) {
      uVar4 = (ulonglong)uVar1 + 1;
      lVar2 = (ulonglong)uVar1 << 6;
      do {
        lVar2 = lVar2 + -0x40;
        FUN_140d29718(*param_1 + lVar2,param_2,param_3,param_4);
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
  }
  else if (0 < (int)uVar1) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_140d29718(*param_1 + lVar2,param_2,param_3,param_4);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 140d29718 FUN_140d29718 body=1209 status=ok
// SIG undefined FUN_140d29718(void)

void FUN_140d29718(longlong *param_1,longlong *param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_108 [36];
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((((param_3 == param_4) && (!NAN(param_3) && !NAN(param_4))) ||
      (*(char *)((longlong)param_1 + 0x1c) != '\x01')) || (*param_1 == 0)) goto LAB_140d29a14;
  fVar12 = *(float *)(param_1 + 1);
  fVar14 = *(float *)((longlong)param_1 + 0xc);
  fVar1 = *(float *)(param_1 + 2);
  fVar10 = *(float *)(*param_1 + 0xb0) * *(float *)((longlong)param_1 + 0x14);
  fVar13 = ABS(fVar10);
  fVar9 = ((float)(int)param_1[3] * (fVar1 - fVar14)) /
          (float)(-(uint)(fVar13 <= 1e-08) & 0x3f800000 | ~-(uint)(fVar13 <= 1e-08) & (uint)fVar13)
          + fVar12;
  fVar11 = param_4;
  if (param_4 < param_3) {
    if ((param_3 <= fVar12) || (fVar9 <= param_4)) goto LAB_140d29a14;
    fVar10 = (float)(~-(uint)(fVar13 <= 1e-08) & (uint)fVar10 |
                    -(uint)(fVar13 <= 1e-08) & 0x3f800000);
    local_e4 = param_3;
    if (fVar9 <= param_3) {
      local_e4 = fVar9;
    }
    if (param_4 <= fVar12) {
      fVar11 = fVar12;
    }
  }
  else {
    if ((param_4 <= fVar12) || (fVar9 <= param_3)) goto LAB_140d29a14;
    fVar10 = (float)(~-(uint)(fVar13 <= 1e-08) & (uint)fVar10 |
                    -(uint)(fVar13 <= 1e-08) & 0x3f800000);
    local_e4 = param_3;
    if (param_3 <= fVar12) {
      local_e4 = fVar12;
    }
    if (fVar9 <= param_4) {
      fVar11 = fVar9;
    }
  }
  fVar12 = local_e4;
  fVar9 = (float)FUN_140d29bd2(param_1,&local_e4);
  fVar13 = fVar14;
  fVar15 = fVar1;
  if (param_4 < param_3 == fVar10 < 0.0) {
    fVar13 = fVar1;
    fVar15 = fVar14;
  }
  lVar4 = FUN_1402576f0();
  lVar7 = *param_1;
  lVar5 = 0;
  if (lVar7 == 0) {
LAB_140d29b03:
    lVar8 = 0;
  }
  else {
    if ((lVar4 != 0) && (lVar8 = *(longlong *)(lVar7 + 0x10), lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38)) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar7;
        }
      }
    }
    lVar4 = FUN_140d29c90();
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_140d29b03;
    lVar8 = 0;
    if ((lVar4 != 0) && (lVar3 = *(longlong *)(lVar7 + 0x10), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_140d29b03;
      lVar8 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar8 = lVar7;
      }
    }
  }
  if ((lVar5 != 0 || lVar8 != 0) && (fVar11 - fVar12 != 0.0)) {
    fVar12 = ABS(fVar11 - fVar12);
    if (fVar1 <= fVar9) {
      fVar9 = fVar1;
    }
    if (fVar9 <= fVar14) {
      fVar9 = fVar14;
    }
    iVar6 = 1;
    if (1 < (int)param_1[3]) {
      iVar6 = (int)param_1[3];
    }
    do {
      fVar14 = (fVar13 - fVar9) / fVar10;
      if (ABS(fVar12) < ABS(fVar14)) {
        fVar12 = fVar12 * (float)(~-(uint)(param_4 < param_3) & (uint)fVar10 |
                                 (uint)-fVar10 & -(uint)(param_4 < param_3)) + fVar9;
        if (lVar5 == 0) {
          if (lVar8 != 0) {
            FUN_140d2967c(lVar8 + 0xc0,param_2,fVar9,fVar12);
          }
        }
        else {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar5);
          }
          iVar6 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
            FUN_140d29d76(param_2,iVar6);
          }
          lVar7 = *param_2 + (longlong)iVar6 * 0x10;
          *(longlong *)(*param_2 + (longlong)iVar6 * 0x10) = lVar5;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar5);
          }
          *(float *)(lVar7 + 8) = fVar9;
          *(float *)(lVar7 + 0xc) = fVar12;
        }
        break;
      }
      if (lVar5 == 0) {
        if (lVar8 != 0) {
          FUN_140d2967c(lVar8 + 0xc0,param_2,fVar9,fVar13);
        }
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140d29d76(param_2,iVar2);
        }
        lVar7 = *param_2;
        *(longlong *)(lVar7 + (longlong)iVar2 * 0x10) = lVar5;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
        lVar7 = lVar7 + (longlong)iVar2 * 0x10;
        *(float *)(lVar7 + 8) = fVar9;
        *(float *)(lVar7 + 0xc) = fVar13;
      }
      if (iVar6 < 2) break;
      fVar12 = fVar12 - fVar14;
      iVar6 = iVar6 + -1;
      fVar9 = fVar15;
    } while (0.0 < fVar12);
  }
LAB_140d29a14:
  if ((local_e0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d29bd2 FUN_140d29bd2 body=190 status=ok
// SIG undefined FUN_140d29bd2(void)

float FUN_140d29bd2(longlong *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*param_1 == 0) {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(*param_1 + 0xb0);
  }
  fVar4 = fVar4 * *(float *)((longlong)param_1 + 0x14);
  uVar3 = -(uint)(ABS(fVar4) <= 1e-08);
  fVar4 = (float)(uVar3 & 0x3f800000 | ~uVar3 & (uint)fVar4);
  fVar6 = *(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0xc);
  fVar5 = (*param_2 - *(float *)(param_1 + 1)) * fVar4;
  iVar2 = 1;
  if (1 < (int)param_1[3]) {
    iVar2 = (int)param_1[3];
  }
  fVar7 = ABS(fVar5) / fVar6;
  iVar1 = (int)ROUND(fVar7 + fVar7 + -0.5) >> 1;
  if (iVar2 + -1 <= iVar1) {
    iVar1 = iVar2 + -1;
  }
  uVar3 = -(uint)(fVar4 < 0.0);
  return (fVar5 - (float)iVar1 * fVar6) +
         (float)(~uVar3 & (uint)*(float *)((longlong)param_1 + 0xc) |
                (uint)*(float *)(param_1 + 2) & uVar3);
}



// FUNCTION 140d29c90 FUN_140d29c90 body=228 status=ok
// SIG undefined FUN_140d29c90(void)

longlong FUN_140d29c90(void)

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
  if (DAT_14cacb210 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463a1b5a;
    local_38 = &LAB_1478df05b;
    local_40 = FUN_1417b44e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/Engine",L"AnimComposite",&DAT_14cacb210,&DAT_1478df05a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d29d76 FUN_140d29d76 body=269 status=ok
// SIG undefined FUN_140d29d76(void)

void FUN_140d29d76(longlong param_1,int param_2)

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



// FUNCTION 140d29e84 FUN_140d29e84 body=193 status=ok
// SIG undefined FUN_140d29e84(void)

longlong FUN_140d29e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined8 local_50;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  byte local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &DAT_14c6eb650;
  local_50 = 0;
  FUN_144b464e0(param_1,&local_40,param_2,param_3);
  if (local_40 != 0) {
    if (local_38 != 0) {
      cVar1 = FUN_144b45dd0(local_38,&DAT_14c6eb650);
      if (cVar1 != '\0') {
        FUN_144b45d50(local_38,local_24);
        lVar2 = local_40;
        if ((local_24[0] & 8) == 0) goto LAB_140d29efc;
      }
    }
    FUN_144becfe0(&local_40,3,1);
  }
  lVar2 = 0;
LAB_140d29efc:
  if ((local_30 & 1) != 0) {
    FUN_144be6b30(local_30 & 0xfffffffffffffffe);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d29f46 FUN_140d29f46 body=138 status=ok
// SIG undefined FUN_140d29f46(void)

undefined8 * FUN_140d29f46(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac43f80;
  plVar1 = param_1 + 0x3e;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x42) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x41)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x41)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d29fd0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d29fd0 FUN_140d29fd0 body=541 status=ok
// SIG undefined FUN_140d29fd0(void)

void FUN_140d29fd0(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac47f90;
  plVar1 = param_1 + 0x36;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3a) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x39)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x39)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x31) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x25;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x29) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x28)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x1a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140d2a1fc FUN_140d2a1fc body=102 status=ok
// SIG undefined FUN_140d2a1fc(void)

undefined8 * FUN_140d2a1fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b35b2c0;
  FUN_140d2a262(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2a2ab(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140d2a262 FUN_140d2a262 body=73 status=ok
// SIG undefined FUN_140d2a262(void)

void FUN_140d2a262(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d2a2ab FUN_140d2a2ab body=73 status=ok
// SIG undefined FUN_140d2a2ab(void)

void FUN_140d2a2ab(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d2a2f4 FUN_140d2a2f4 body=372 status=ok
// SIG undefined FUN_140d2a2f4(void)

undefined8
FUN_140d2a2f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140d2a462;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140d2a462;
    }
    FUN_140192332(param_1 + 0x18,&local_58,0);
    lVar7 = CONCAT44(uStack_54,local_58);
  }
  else {
LAB_140d2a462:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140d2a40b;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_48 = *(undefined8 *)(param_4 + 4);
      local_58 = *param_4;
      uStack_54 = param_4[1];
      uStack_50 = param_4[2];
      uStack_4c = param_4[3];
      local_60 = param_6;
      local_68 = param_5;
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140d2a40b;
    }
  }
  uVar6 = 0;
LAB_140d2a40b:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2a46a FUN_140d2a46a body=624 status=ok
// SIG undefined FUN_140d2a46a(void)

void FUN_140d2a46a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,int param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  longlong local_50;
  longlong *local_48;
  code *local_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = FUN_1400d7050(param_1 + 0x30);
  if (lVar7 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_40;
      local_40 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (plVar3 = *(longlong **)(lVar7 + 0x2500), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x730))(plVar3,&local_40);
      FUN_1449027d0(param_1,&local_50);
      lVar7 = *(longlong *)(local_50 + 0x50);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x200));
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      lVar4 = *(longlong *)(lVar7 + 0x30);
      *(int *)(lVar7 + 0x40) = *(int *)(lVar7 + 0x40) + 2;
      if ((longlong)*(int *)(lVar7 + 0x38) != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(lVar4 + 8 + lVar8) == (longlong)param_6) {
            uVar6 = param_4[1];
            puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar8);
            *puVar2 = *param_4;
            puVar2[1] = uVar6;
            *(undefined8 *)(lVar4 + 0x28 + lVar8) = param_4[2];
            dVar5 = *(double *)(lVar4 + 0x18 + lVar8) - (double)local_40;
            local_38 = *(double *)(lVar4 + 0x20 + lVar8) - local_38;
            dVar5 = SQRT(local_38 * local_38 + dVar5 * dVar5) / 100.0;
            *(float *)(lVar4 + 0x58 + lVar8) =
                 (float)(int)((ulonglong)(longlong)ROUND(dVar5 + dVar5 + 0.5) >> 1);
            *(int *)(lVar7 + 0x1f8) = *(int *)(lVar7 + 0x1f8) + 1;
            break;
          }
          lVar8 = lVar8 + 0xb8;
        } while ((longlong)*(int *)(lVar7 + 0x38) * 0xb8 - lVar8 != 0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x200));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d2a6db FUN_140d2a6db body=49 status=ok
// SIG undefined FUN_140d2a6db(void)

longlong FUN_140d2a6db(void)

{
  if (DAT_14cab4840 == 0) {
    FUN_140f50038(&DAT_14cab4840,&PTR_s__Script_MovieSceneTracks_14a4a6390);
  }
  return DAT_14cab4840;
}



// FUNCTION 140d2a74a FUN_140d2a74a body=215 status=ok
// SIG undefined FUN_140d2a74a(void)

void FUN_140d2a74a(longlong *param_1)

{
  longlong lVar1;
  
  switch((char)param_1[0x5c]) {
  case '\x01':
    if (param_1[0x59] == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d2a7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x5e8))(param_1);
      return;
    }
    break;
  case '\x02':
    lVar1 = param_1[0x5a];
    if (lVar1 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      if (param_1[0x59] != lVar1) {
        (**(code **)(*param_1 + 0x5f0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140d2a801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x600))(param_1,param_1[0x5a]);
        return;
      }
    }
    break;
  case '\x03':
    if ((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x03')) {
                    /* WARNING: Could not recover jumptable at 0x000140d2a792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x5e0))(param_1);
      return;
    }
    break;
  case '\x04':
                    /* WARNING: Could not recover jumptable at 0x000140d2a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5f0))(param_1);
    return;
  }
  return;
}



// FUNCTION 140d2a848 FUN_140d2a848 body=183 status=ok
// SIG undefined FUN_140d2a848(void)

void FUN_140d2a848(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3a0);
  if ((((((lVar2 == 0) || (*(longlong *)(lVar2 + 0x620) == 0)) ||
        (*(char *)(lVar2 + 0x629) != '\x01')) ||
       ((*(int *)(lVar2 + 0x638) < 1 || (*(char *)(lVar2 + 0x628) != '\x01')))) ||
      ((*(longlong *)(param_1 + 0x3a8) == 0 ||
       ((*(longlong *)(param_1 + 0x3b0) == 0 && (*(char *)(param_1 + 0x3b8) == '\x01')))))) &&
     (*(char *)(param_1 + 0x4c8) == '\x03')) {
    FUN_14386c99e(param_1);
  }
  else {
    FUN_14386c64c(param_1,param_1 + 0x3a0);
    FUN_14386cc76(param_1,*(undefined1 *)(param_1 + 0x4c8));
  }
  iVar1 = *(int *)(param_1 + 0x398);
  if ((iVar1 != -1) && (*(char *)(param_1 + 0x51) == '\0')) {
    *(ulonglong *)(param_1 + 0x4d0) = CONCAT44(iVar1,iVar1);
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}



// FUNCTION 140d2a910 FUN_140d2a910 body=41 status=ok
// SIG undefined FUN_140d2a910(void)

void FUN_140d2a910(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 140d2a93a FUN_140d2a93a body=484 status=ok
// SIG undefined FUN_140d2a93a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140d2a93a(longlong param_1,void *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 *_Dst;
  undefined1 *puVar6;
  size_t _Size;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  ulonglong local_60;
  undefined1 local_48 [8];
  
  puVar6 = auStack_68;
  local_60 = DAT_14c707940 ^ (ulonglong)local_48;
  _Size = (size_t)*(int *)(param_3 + 0x58);
  if (_Size == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    lVar5 = (longlong)*(int *)(param_3 + 0x5c);
    if (lVar5 < 0x11) {
      uStack_70 = 0x140d2a992;
      lVar5 = -(_Size + 0x1e & 0xfffffffffffffff0);
      puVar6 = auStack_68 + lVar5;
      _Dst = auStack_68 + lVar5;
    }
    else {
      uStack_70 = 0x140d2ab0c;
      lVar7 = -((longlong)(*(int *)(param_3 + 0x58) + *(int *)(param_3 + 0x5c) + -1) + 0xfU &
               0xfffffffffffffff0);
      puVar6 = auStack_68 + lVar7;
      _Dst = (undefined1 *)(-lVar5 & (ulonglong)(auStack_68 + lVar5 + lVar7 + -1));
    }
  }
  *(undefined8 *)(puVar6 + -0x28) = 0x140d2a9a6;
  memset(_Dst,0,_Size);
  pbVar4 = *(byte **)(param_1 + 0x20);
  if (*pbVar4 != 0x16) {
    plVar8 = (longlong *)(param_3 + 0x50);
    do {
      lVar5 = *plVar8;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      if ((*(byte *)(lVar5 + 0x39) & 1) == 0) {
        lVar7 = (longlong)*(int *)(lVar5 + 0x44) + (longlong)_Dst;
      }
      else {
        lVar7 = 0;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(byte **)(param_1 + 0x20) = pbVar4 + 1;
      pcVar3 = (code *)(&DAT_14c962c70)[*pbVar4];
      *(undefined8 *)(puVar6 + -0x28) = 0x140d2a9f6;
      (*pcVar3)(uVar2,param_1,lVar7);
      plVar8 = (longlong *)(lVar5 + 0x18);
      pbVar4 = *(byte **)(param_1 + 0x20);
    } while (*pbVar4 != 0x16);
  }
  *(byte **)(param_1 + 0x20) = pbVar4 + 1;
  for (plVar8 = *(longlong **)(param_3 + 0x80); plVar8 != (longlong *)0x0;
      plVar8 = (longlong *)plVar8[0xb]) {
    if ((plVar8[7] & 0x1000000100U) == 0) {
      pcVar3 = *(code **)(*plVar8 + 0x148);
      *(undefined8 *)(puVar6 + -0x28) = 0x140d2aae4;
      (*pcVar3)(plVar8);
    }
  }
  *(undefined8 *)(puVar6 + -0x28) = 0x140d2aa31;
  plVar8 = (longlong *)FUN_140d2ab24(param_3);
  if (plVar8 != (longlong *)0x0) {
    if ((*(byte *)((longlong)plVar8 + 0x3c) & 0x10) == 0) {
      pcVar3 = *(code **)(*plVar8 + 0x148);
      *(undefined8 *)(puVar6 + -0x28) = 0x140d2aab0;
      (*pcVar3)(plVar8);
    }
    lVar5 = plVar8[6];
    iVar1 = *(int *)((longlong)plVar8 + 0x34);
    *(undefined8 *)(puVar6 + -0x28) = 0x140d2aa97;
    memset(param_2,0,(longlong)iVar1 * (longlong)(int)lVar5);
  }
  if ((local_60 ^ (ulonglong)local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -0x28) = &UNK_140d2aa68;
  FUN_144d8e3a0();
}



// FUNCTION 140d2ab24 FUN_140d2ab24 body=199 status=ok
// SIG undefined FUN_140d2ab24(void)

longlong FUN_140d2ab24(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  
  do {
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
    for (lVar3 = param_1[10]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x38);
        cVar4 = (char)uVar1;
joined_r0x000140d2ab52:
        if (-1 < cVar4) {
          return 0;
        }
        if (((uint)uVar1 >> 10 & 1) != 0) {
          return lVar3;
        }
        plVar2 = (longlong *)(lVar3 + 0x18);
        do {
          for (lVar3 = *plVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
            if ((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) {
              uVar1 = *(undefined8 *)(lVar3 + 0x38);
              cVar4 = (char)uVar1;
              goto joined_r0x000140d2ab52;
            }
          }
          if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
            param_1 = (longlong *)param_1[8];
          }
          else {
            param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
          }
          plVar2 = param_1 + 10;
          if (param_1 == (longlong *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
    if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
      param_1 = (longlong *)param_1[8];
    }
    else {
      param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
    }
  } while( true );
}



// FUNCTION 140d2ac02 FUN_140d2ac02 body=94 status=ok
// SIG undefined FUN_140d2ac02(void)

void FUN_140d2ac02(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14070cc62();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) == lVar3 + 0x30)) {
      (**(code **)(*plVar2 + 0x8f8))
                (plVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(param_1 + 0x153a)));
    }
  }
  FUN_14035bd78(param_1,*(undefined1 *)(param_1 + 0x153a),1);
  return;
}



// FUNCTION 140d2ac68 FUN_140d2ac68 body=741 status=ok
// SIG undefined FUN_140d2ac68(void)

undefined8 * FUN_140d2ac68(undefined8 *param_1)

{
  undefined1 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b401200;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0xd] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x7010;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x7010;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f8000003dcccccd;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa5) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf00000d0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  param_1[0x1f] = &PTR_FUN_14b00bdf8;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x404;
  param_1[0x20] = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 0x19a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a2) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x36] = &PTR_FUN_14b00bdf8;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x224) = 0x404;
  param_1[0x37] = &DAT_14a176f00;
  param_1[0x4d] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x7013;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x59] = &DAT_4030000000000000;
  param_1[0x5a] = 0x4022000000000000;
  *(undefined4 *)(param_1 + 0x5b) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x2de) = 1;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x1010000;
  uVar1 = FUN_140691b73();
  *(undefined1 *)((longlong)param_1 + 0x2ec) = uVar1;
  uVar1 = FUN_140691bc1();
  *(undefined1 *)((longlong)param_1 + 0x2ed) = uVar1;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  return param_1;
}



// FUNCTION 140d2af4e FUN_140d2af4e body=40 status=ok
// SIG undefined FUN_140d2af4e(void)

undefined8 FUN_140d2af4e(undefined8 param_1,int param_2)

{
  FUN_140d2af76();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d2af76 FUN_140d2af76 body=131 status=ok
// SIG undefined FUN_140d2af76(void)

void FUN_140d2af76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b256e10;
  FUN_140d2b021(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2aff9(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2b085(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140d2aff9 FUN_140d2aff9 body=40 status=ok
// SIG undefined FUN_140d2aff9(void)

void FUN_140d2aff9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14579d1b4(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 140d2b021 FUN_140d2b021 body=100 status=ok
// SIG undefined FUN_140d2b021(void)

void FUN_140d2b021(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    do {
      if ((int)plVar2[1] == 0) {
LAB_140d2b041:
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
          goto LAB_140d2b041;
        }
      }
      plVar2 = plVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d2b085 FUN_140d2b085 body=155 status=ok
// SIG undefined FUN_140d2b085(void)

void FUN_140d2b085(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x30);
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
      plVar3 = (longlong *)plVar4[-3];
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
      plVar3 = (longlong *)plVar4[-5];
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d2b120 FUN_140d2b120 body=152 status=ok
// SIG undefined FUN_140d2b120(void)

void FUN_140d2b120(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_14762a076(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2b1f2 FUN_140d2b1f2 body=40 status=ok
// SIG undefined FUN_140d2b1f2(void)

undefined8 FUN_140d2b1f2(undefined8 param_1,int param_2)

{
  FUN_140d2b21a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d2b21a FUN_140d2b21a body=262 status=ok
// SIG undefined FUN_140d2b21a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d2b21a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2ec8c0;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  param_1[0x44] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (*(int *)((longlong)param_1 + 0x23c) != 0) {
    FUN_140115c12(param_1 + 0x46,0);
  }
  param_1[0x45] = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1408c28ac(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140d2b2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140d2b32e FUN_140d2b32e body=70 status=ok
// SIG undefined FUN_140d2b32e(void)

undefined8 * FUN_140d2b32e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b07de20;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d2b374 FUN_140d2b374 body=685 status=ok
// SIG undefined FUN_140d2b374(void)

void FUN_140d2b374(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong *puVar11;
  
  if (*(int *)(param_1 + 0x3e0) == *(int *)(param_1 + 0x40c)) {
    return;
  }
  lVar1 = param_1 + 0x410;
  lVar6 = *(longlong *)(param_1 + 0x418);
  if (*(longlong *)(param_1 + 0x418) == 0) {
    lVar6 = lVar1;
  }
  iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
  if (iVar7 == -1) {
    return;
  }
  while (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar7 * 0x60) != param_2) {
    iVar7 = *(int *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 0x3d8) + 0x58);
    if (iVar7 == -1) {
      return;
    }
  }
  if ((longlong)*(int *)(param_1 + 0xd8) == 0) {
    return;
  }
  puVar11 = *(ulonglong **)(param_1 + 0xd0);
  puVar2 = puVar11 + *(int *)(param_1 + 0xd8);
LAB_140d2b3f9:
  plVar3 = (longlong *)*puVar11;
  if ((plVar3 != (longlong *)0x0) && ((*plVar3 == 0 || (*(char *)(*plVar3 + 200) == '\0')))) {
    if (*(int *)(param_1 + 0x3e0) == *(int *)(param_1 + 0x40c)) {
LAB_140d2b5ca:
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x418);
      if (*(longlong *)(param_1 + 0x418) == 0) {
        lVar6 = lVar1;
      }
      iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
      if (iVar7 == -1) goto LAB_140d2b5ca;
      do {
        lVar6 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar7 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar7 * 0x60) == param_2) break;
        iVar7 = *(int *)(lVar6 + 0x58);
        lVar6 = 0;
      } while (iVar7 != -1);
    }
    if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
      uVar10 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
               -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      uVar10 = uVar10 >> 0x10 ^ uVar10;
      lVar8 = lVar6 + 0x40;
      if (*(longlong *)(lVar6 + 0x48) != 0) {
        lVar8 = *(longlong *)(lVar6 + 0x48);
      }
      iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar6 + 0x50) - 1U & uVar10) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong **)(*(longlong *)(lVar6 + 8) + (longlong)iVar7 * 0x18) == plVar3) {
            if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
              lVar6 = *(longlong *)(param_1 + 0x418);
              if (*(longlong *)(param_1 + 0x418) == 0) {
                lVar6 = lVar1;
              }
              iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
              if (iVar7 != -1) {
                goto LAB_140d2b537;
              }
            }
            lVar6 = 0;
            goto LAB_140d2b550;
          }
          iVar7 = *(int *)(*(longlong *)(lVar6 + 8) + (longlong)iVar7 * 0x18 + 0x10);
        } while (iVar7 != -1);
      }
    }
  }
  goto LAB_140d2b5af;
  while( true ) {
    iVar7 = *(int *)(lVar6 + 0x58);
    lVar6 = 0;
    if (iVar7 == -1) break;
LAB_140d2b537:
    lVar6 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar7 * 0x60;
    if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar7 * 0x60) == param_2) break;
  }
LAB_140d2b550:
  if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
    lVar8 = lVar6 + 0x40;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      lVar8 = *(longlong *)(lVar6 + 0x48);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar6 + 0x50) - 1U & uVar10) * 4);
    if (iVar7 != -1) {
      do {
        puVar9 = (ulonglong *)(*(longlong *)(lVar6 + 8) + (longlong)iVar7 * 0x18);
        if ((longlong *)*puVar9 == plVar3) goto LAB_140d2b598;
        iVar7 = (int)puVar9[2];
      } while (iVar7 != -1);
    }
  }
  puVar9 = (ulonglong *)0x0;
LAB_140d2b598:
  uVar4 = puVar9[1];
  if ((uVar4 != 0) && (cVar5 = FUN_140d2b622(param_1,param_2), cVar5 != '\0')) {
    *(undefined1 *)(uVar4 + 0x28) = 1;
  }
LAB_140d2b5af:
  puVar11 = puVar11 + 1;
  if (puVar11 == puVar2) {
    return;
  }
  goto LAB_140d2b3f9;
}



// FUNCTION 140d2b622 FUN_140d2b622 body=712 status=ok
// SIG undefined FUN_140d2b622(void)

undefined8 FUN_140d2b622(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  uint7 uVar9;
  undefined8 uVar8;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_140623bee(param_3,&local_58);
    uVar9 = (uint7)(uint3)(param_2 >> 8);
    if ((longlong)(int)uStack_50 == 0) {
      uVar8 = CONCAT71(uVar9,1);
    }
    else {
      plVar1 = local_58 + (int)uStack_50;
      plVar7 = local_58;
      do {
        if (*plVar7 != 0) {
          puVar11 = *(undefined4 **)(*plVar7 + 8);
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar3 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar3);
            DAT_14c947fe0 = lVar3;
          }
          FUN_140045924(DAT_14c947fe0,local_60,puVar11);
          uVar2 = FUN_1403363fe(param_1,local_60);
          if (uVar2 != 0) {
            if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
              lVar3 = *(longlong *)(param_1 + 0x418);
              if (*(longlong *)(param_1 + 0x418) == 0) {
                lVar3 = param_1 + 0x410;
              }
              iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
              if (iVar4 != -1) {
                do {
                  lVar3 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar4 * 0x60;
                  if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar4 * 0x60) == param_2)
                  goto LAB_140d2b737;
                  iVar4 = *(int *)(lVar3 + 0x58);
                } while (iVar4 != -1);
              }
            }
            lVar3 = 0;
LAB_140d2b737:
            if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
              uVar10 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              uVar10 = uVar10 >> 0x10 ^ uVar10;
              lVar5 = lVar3 + 0x40;
              if (*(longlong *)(lVar3 + 0x48) != 0) {
                lVar5 = *(longlong *)(lVar3 + 0x48);
              }
              iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & uVar10) * 4);
              if (iVar4 != -1) {
                while (*(ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar4 * 0x18) != uVar2) {
                  iVar4 = *(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar4 * 0x18 + 0x10);
                  if (iVar4 == -1) goto LAB_140d2b8a3;
                }
                if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
                  lVar3 = *(longlong *)(param_1 + 0x418);
                  if (*(longlong *)(param_1 + 0x418) == 0) {
                    lVar3 = param_1 + 0x410;
                  }
                  iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4
                                  );
                  if (iVar4 != -1) {
                    do {
                      lVar3 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar4 * 0x60;
                      if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar4 * 0x60) ==
                          param_2) goto LAB_140d2b80d;
                      iVar4 = *(int *)(lVar3 + 0x58);
                    } while (iVar4 != -1);
                  }
                }
                lVar3 = 0;
LAB_140d2b80d:
                if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
                  lVar5 = lVar3 + 0x40;
                  if (*(longlong *)(lVar3 + 0x48) != 0) {
                    lVar5 = *(longlong *)(lVar3 + 0x48);
                  }
                  iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & uVar10) * 4);
                  if (iVar4 != -1) {
                    do {
                      puVar6 = (ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar4 * 0x18);
                      if (*puVar6 == uVar2) goto LAB_140d2b855;
                      iVar4 = (int)puVar6[2];
                    } while (iVar4 != -1);
                  }
                }
                puVar6 = (ulonglong *)0x0;
LAB_140d2b855:
                uVar2 = puVar6[1];
                if ((uVar2 != 0) &&
                   ((*(char *)(uVar2 + 0x11) != '\0' || (*(char *)(uVar2 + 0x12) != '\0'))))
                goto LAB_140d2b86a;
              }
            }
LAB_140d2b8a3:
            uVar8 = 0;
            goto LAB_140d2b8af;
          }
        }
LAB_140d2b86a:
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
      uVar8 = CONCAT71(uVar9,1);
    }
LAB_140d2b8af:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140d2b8ec FUN_140d2b8ec body=1252 status=ok
// SIG undefined FUN_140d2b8ec(void)

undefined8 FUN_140d2b8ec(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  wchar_t *pwVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_4b8 [32];
  longlong local_498;
  undefined8 uStack_490;
  undefined8 *local_488;
  int local_480;
  int local_47c;
  undefined2 *local_478;
  int local_470;
  void *local_468;
  uint local_460;
  undefined8 *local_458;
  undefined8 uStack_450;
  wchar_t *local_448;
  char local_440;
  undefined8 local_438;
  undefined2 local_430;
  undefined8 local_42e [126];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  FUN_140d2be42(&local_468,param_2 + 1);
  FUN_140d2bdd2(&local_478,param_2 + 1);
  iVar6 = *(int *)(*param_2 + 0xd0);
  uVar10 = (ulonglong)(iVar6 - 1);
  if (iVar6 == 0) {
    uVar10 = 0;
  }
  uVar4 = (uint)uVar10;
  if (0 < (int)uVar4) {
    puVar9 = &DAT_149dfb77a;
    if (iVar6 != 0) {
      puVar9 = *(undefined2 **)(*param_2 + 200);
    }
    puVar8 = &DAT_149dfb77a;
    if (local_470 != 0) {
      puVar8 = local_478;
    }
    lVar11 = 0;
    while( true ) {
      uVar12 = *(ushort *)((longlong)puVar8 + lVar11);
      uVar13 = (ulonglong)uVar12;
      uVar7 = *(ushort *)((longlong)puVar9 + lVar11);
      if (uVar12 != uVar7) break;
      if (uVar12 == 0) goto LAB_140d2b9c5;
LAB_140d2b994:
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_140d2b9c5;
      lVar11 = lVar11 + 2;
    }
    if ((uVar7 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar15 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_140d2b994;
    }
    if (uVar12 != uVar7) goto LAB_140d2b9ff;
LAB_140d2b9c5:
    uVar5 = local_470 - 1;
    if (local_470 == 0) {
      uVar5 = 0;
    }
    if ((int)uVar4 < (int)uVar5) {
      uVar5 = uVar4;
    }
    if (0 < (int)uVar5) {
      if (local_470 - uVar5 != 0) {
        memmove(local_478,local_478 + uVar5,(longlong)(int)(local_470 - uVar5) * 2);
      }
      local_470 = local_470 - uVar5;
    }
  }
LAB_140d2b9ff:
  pvVar2 = local_468;
  lVar11 = (longlong)(int)local_460;
  local_458 = (undefined8 *)0x0;
  uStack_450 = (wchar_t *)CONCAT44(uStack_450._4_4_,local_460);
  FUN_1446dd670(&local_458,(lVar11 == 0) + local_460 + 1,0);
  if (lVar11 != 0) {
    memcpy(local_458,pvVar2,lVar11 * 2);
  }
  FUN_1400020e8(&local_458,&DAT_149e065c6,1);
  puVar9 = local_478;
  local_480 = (int)uStack_450;
  if ((int)uStack_450 < 2) {
    local_488 = (undefined8 *)0x0;
    local_480 = local_470;
    lVar11 = (longlong)local_470;
    if (lVar11 == 0) {
      local_47c = 0;
    }
    else {
      FUN_1446dd670(&local_488,local_470,0);
      memcpy(local_488,puVar9,lVar11 * 2);
    }
  }
  else {
    iVar6 = local_470 + -1;
    if (local_470 == 0) {
      iVar6 = 0;
    }
    local_488 = local_458;
    local_47c = uStack_450._4_4_;
    local_458 = (undefined8 *)0x0;
    uStack_450 = (wchar_t *)0x0;
    if (iVar6 + local_480 < local_480) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar6);
    }
    if (local_47c < iVar6 + local_480) {
      FUN_1446f8c06(&local_488);
    }
    FUN_1400020e8(&local_488,local_478,iVar6);
  }
  if (local_458 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  pvVar2 = local_468;
  local_448 = (wchar_t *)&local_38;
  local_440 = '\0';
  if ((char)param_2[0x12] == '\x01') {
    local_438 = 0x6d00650054002f;
    local_430 = 0x70;
    lVar11 = 0x2a;
    uStack_450 = (wchar_t *)local_42e;
  }
  else {
    lVar11 = 0x20;
    uStack_450 = (wchar_t *)&local_438;
  }
  iVar6 = local_460 - 1;
  if (local_460 == 0) {
    iVar6 = 0;
  }
  lVar14 = (longlong)iVar6;
  local_458 = &local_438;
  if (0x41f < lVar11 + lVar14 * 2) {
    FUN_140213274(&local_458,lVar14);
  }
  puVar1 = (undefined8 *)uStack_450;
  if (1 < local_460) {
    memcpy(uStack_450,pvVar2,lVar14 * 2);
    uStack_450 = (wchar_t *)((longlong)puVar1 + lVar14 * 2);
  }
  if (local_448 <= (wchar_t *)((longlong)uStack_450 + 2)) {
    FUN_140213274(&local_458,1);
  }
  *uStack_450 = 0x2f;
  uStack_450 = (wchar_t *)((longlong)uStack_450 + 2);
  puVar1 = (undefined8 *)param_2[0x10];
  if (puVar1 == (undefined8 *)0x0) {
    iVar6 = local_470 + -1;
    if (local_470 == 0) {
      iVar6 = 0;
    }
    FUN_1449668a2(&local_458,local_478,iVar6);
    if (local_448 <= uStack_450 + 0xf) {
      FUN_140213274(&local_458,0xf);
    }
    builtin_wcsncpy(uStack_450,L"_LevelInstance_",0xf);
    uStack_450 = uStack_450 + 0xf;
    DAT_14cae9030 = DAT_14cae9030 + 1;
    local_498 = 0;
    uStack_490 = 0;
    FUN_144a83b10(&local_498);
    iVar6 = (int)uStack_490 + -1;
    if ((int)uStack_490 == 0) {
      iVar6 = 0;
    }
    FUN_1449668a2(&local_458,local_498,iVar6);
    if (local_498 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    pvVar2 = (void *)*puVar1;
    uVar4 = *(uint *)(puVar1 + 1);
    iVar6 = uVar4 - 1;
    if (uVar4 == 0) {
      iVar6 = 0;
    }
    lVar11 = (longlong)iVar6;
    if (local_448 <= uStack_450 + lVar11) {
      FUN_140213274(&local_458,lVar11);
    }
    pwVar3 = uStack_450;
    if (1 < uVar4) {
      memcpy(uStack_450,pvVar2,lVar11 * 2);
      uStack_450 = pwVar3 + lVar11;
    }
  }
  *uStack_450 = L'\0';
  FUN_140056680(param_1,local_458);
  if (local_440 == '\x01') {
    FUN_1400020a8(local_458);
  }
  if (local_488 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_478 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_468 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2bdd2 FUN_140d2bdd2 body=111 status=ok
// SIG undefined FUN_140d2bdd2(void)

undefined8 FUN_140d2bdd2(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar4 = (undefined2 *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  uVar6 = (longlong)iVar2 * 2;
  do {
    if (uVar6 == 0) {
      uVar5 = 0;
      goto LAB_140d2be03;
    }
    uVar1 = uVar6 - 2;
    lVar3 = uVar6 - 2;
    uVar6 = uVar1;
  } while (*(short *)((longlong)puVar4 + lVar3) != 0x2f);
  uVar5 = (int)(uVar1 >> 1) + 1;
LAB_140d2be03:
  uVar7 = iVar2 - 1;
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
    uVar7 = 0;
  }
  if ((int)uVar7 <= (int)uVar5) {
    uVar5 = uVar7;
  }
  uVar6 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    uVar6 = 0;
  }
  FUN_14006620a(param_1,puVar4 + uVar6,uVar7 - (int)uVar6);
  return param_1;
}



// FUNCTION 140d2be42 FUN_140d2be42 body=170 status=ok
// SIG undefined FUN_140d2be42(void)

undefined8 * FUN_140d2be42(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *_Src;
  int iVar6;
  
  _Src = (undefined2 *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  uVar5 = (longlong)iVar2 * 2;
  do {
    if (uVar5 == 0) goto LAB_140d2beb2;
    uVar1 = uVar5 - 2;
    lVar3 = uVar5 - 2;
    uVar5 = uVar1;
  } while (*(short *)((longlong)_Src + lVar3) != 0x2f);
  iVar4 = (int)(uVar1 >> 1);
  if (iVar4 == -1) {
LAB_140d2beb2:
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar2,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
  }
  else {
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      _Src = &DAT_149dfb77a;
      iVar6 = 0;
    }
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    FUN_14006620a(param_1,_Src,iVar6);
  }
  return param_1;
}



// FUNCTION 140d2beec FUN_140d2beec body=140 status=ok
// SIG undefined FUN_140d2beec(void)

void FUN_140d2beec(longlong *param_1)

{
  FUN_140d2bf78(param_1[0xc],(int)param_1[0xd]);
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
  FUN_140d2bfcd(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d2bf78 FUN_140d2bf78 body=85 status=ok
// SIG undefined FUN_140d2bf78(void)

void FUN_140d2bf78(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x58);
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        *plVar3 = 0;
        LOCK();
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*plVar3 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar3 + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
      }
      if (plVar3[-3] != 0) {
        FUN_1400020a8();
      }
      plVar3 = plVar3 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d2bfcd FUN_140d2bfcd body=90 status=ok
// SIG undefined FUN_140d2bfcd(void)

void FUN_140d2bfcd(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14adfe8b0;
    FUN_14006c0c4(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
    if (param_1[0x53] != 0) {
      FUN_1400020a8();
    }
    FUN_14006c124(param_1);
    param_1 = param_1 + 0x55;
  }
  return;
}



// FUNCTION 140d2c028 FUN_140d2c028 body=45 status=ok
// SIG undefined FUN_140d2c028(void)

undefined8 FUN_140d2c028(undefined8 param_1,int param_2)

{
  FUN_140d2c056();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 140d2c056 FUN_140d2c056 body=391 status=ok
// SIG undefined FUN_140d2c056(void)

void FUN_140d2c056(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c9570;
  plVar1 = param_1 + 0x28;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2b)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x20;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x24) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x23)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x23)) {
    FUN_1400020a8(*plVar1);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0x15);
  FUN_140d2c1dd(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140d2c1dd FUN_140d2c1dd body=43 status=ok
// SIG undefined FUN_140d2c1dd(void)

void FUN_140d2c1dd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14866f8e2(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 140d2c208 FUN_140d2c208 body=93 status=ok
// SIG undefined FUN_140d2c208(void)

undefined8 * FUN_140d2c208(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d2c265(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872f1f2(param_1,iVar1);
      FUN_14872f254(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d2c265 FUN_140d2c265 body=75 status=ok
// SIG undefined FUN_140d2c265(void)

void FUN_140d2c265(longlong param_1,int param_2)

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



// FUNCTION 140d2c2b0 FUN_140d2c2b0 body=1019 status=ok
// SIG undefined FUN_140d2c2b0(void)

undefined8 FUN_140d2c2b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *_Src;
  undefined8 uVar6;
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
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined1 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  
  if (param_4 != 0) {
    lVar24 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar24) = *(undefined2 *)(param_3 + 0x10 + lVar24);
      *(undefined8 *)(param_2 + 8 + lVar24) = *(undefined8 *)(param_3 + 8 + lVar24);
      *(undefined8 *)(param_2 + 0x38 + lVar24) = *(undefined8 *)(param_3 + 0x38 + lVar24);
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar24);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar24);
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x28 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar11;
      puVar4[2] = uVar12;
      puVar4[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + 0x18 + lVar24);
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      *(undefined2 *)(param_2 + 0x48 + lVar24) = *(undefined2 *)(param_3 + 0x48 + lVar24);
      *(undefined8 *)(param_2 + 0x40 + lVar24) = *(undefined8 *)(param_3 + 0x40 + lVar24);
      lVar23 = *(longlong *)(param_3 + 0x50 + lVar24);
      if (DAT_14c950c29 == 1) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x50 + lVar24);
        }
      }
      bVar20 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x50 + lVar24) = lVar23;
      lVar23 = *(longlong *)(param_3 + 0x58 + lVar24);
      if ((bVar20 & 1) != 0) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x58 + lVar24);
        }
      }
      lVar1 = param_3 + lVar24;
      lVar2 = param_2 + lVar24;
      *(longlong *)(param_2 + 0x58 + lVar24) = lVar23;
      puVar22 = (undefined8 *)(param_3 + 0x60 + lVar24);
      uVar6 = puVar22[1];
      puVar25 = (undefined8 *)(param_3 + 0x70 + lVar24);
      uVar18 = *puVar25;
      uVar19 = puVar25[1];
      puVar25 = (undefined8 *)(param_2 + 0x60 + lVar24);
      *puVar25 = *puVar22;
      puVar25[1] = uVar6;
      puVar22 = (undefined8 *)(param_2 + 0x70 + lVar24);
      *puVar22 = uVar18;
      puVar22[1] = uVar19;
      *(undefined4 *)(param_2 + 0x80 + lVar24) = *(undefined4 *)(param_3 + 0x80 + lVar24);
      puVar3 = (undefined4 *)(param_3 + 0x88 + lVar24);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x98 + lVar24);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0xa8 + lVar24);
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      uVar16 = puVar4[2];
      uVar17 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x88 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 0x98 + lVar24);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + 0xa8 + lVar24);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      *(undefined8 *)(param_2 + 0xb8 + lVar24) = *(undefined8 *)(param_3 + 0xb8 + lVar24);
      FUN_140d2c6ac(lVar2 + 0xc0,lVar1 + 0xc0);
      *(undefined1 *)(param_2 + 0xd0 + lVar24) = *(undefined1 *)(param_3 + 0xd0 + lVar24);
      puVar3 = (undefined4 *)(param_3 + 0xd8 + lVar24);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0xd8 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      FUN_140d2c702(lVar2 + 0xe8,lVar1 + 0xe8);
      FUN_140d2c758(lVar2 + 0xf8,lVar1 + 0xf8);
      *(undefined8 *)(param_2 + 0x108 + lVar24) = *(undefined8 *)(param_3 + 0x108 + lVar24);
      *(undefined4 *)(param_2 + 0x120 + lVar24) = *(undefined4 *)(param_3 + 0x120 + lVar24);
      puVar3 = (undefined4 *)(param_3 + 0x110 + lVar24);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x110 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      if (lVar2 == lVar1) {
        memcpy((void *)(lVar2 + 0x150),(void *)(lVar1 + 0x150),0x2c0);
        memcpy((void *)(lVar2 + 0x410),(void *)(lVar1 + 0x410),0x110);
      }
      else {
        iVar5 = *(int *)(param_3 + 0x130 + lVar24);
        _Src = *(void **)(param_3 + 0x128 + lVar24);
        *(int *)(param_2 + 0x130 + lVar24) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x134 + lVar24) == 0) {
          *(undefined4 *)(param_2 + 0x134 + lVar24) = 0;
        }
        else {
          puVar22 = (undefined8 *)(param_2 + lVar24 + 0x128);
          FUN_1486642a8(puVar22,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar22,_Src,(longlong)iVar5 * 0x58);
          }
        }
        FUN_140166747(*(undefined8 *)(param_2 + 0x138 + lVar24),
                      *(undefined4 *)(param_2 + 0x140 + lVar24));
        iVar5 = *(int *)(param_3 + 0x140 + lVar24);
        uVar6 = *(undefined8 *)(param_3 + 0x138 + lVar24);
        *(int *)(param_2 + 0x140 + lVar24) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x144 + lVar24) == 0) {
          *(undefined4 *)(param_2 + 0x144 + lVar24) = 0;
        }
        else {
          puVar22 = (undefined8 *)(param_2 + lVar24 + 0x138);
          FUN_140166770(puVar22,iVar5);
          FUN_144871a9b(*puVar22,uVar6,iVar5);
        }
        memcpy((void *)(lVar2 + 0x150),(void *)(lVar1 + 0x150),0x2c0);
        memcpy((void *)(lVar2 + 0x410),(void *)(lVar1 + 0x410),0x110);
        if (*(char *)(param_3 + 0x580 + lVar24) == '\x01') {
          puVar22 = (undefined8 *)(lVar1 + 0x520);
          puVar25 = (undefined8 *)(lVar2 + 0x520);
          for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
            *puVar25 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar25 = puVar25 + 1;
          }
          uVar21 = 1;
        }
        else {
          if (*(char *)(param_2 + 0x580 + lVar24) != '\x01') goto LAB_140d2c526;
          uVar21 = 0;
        }
        *(undefined1 *)(param_2 + 0x580 + lVar24) = uVar21;
      }
LAB_140d2c526:
      puVar22 = (undefined8 *)(param_3 + 0x5ac + lVar24);
      uVar6 = puVar22[1];
      puVar25 = (undefined8 *)(param_2 + 0x5ac + lVar24);
      *puVar25 = *puVar22;
      puVar25[1] = uVar6;
      puVar22 = (undefined8 *)(param_3 + 0x590 + lVar24);
      uVar6 = *puVar22;
      uVar18 = puVar22[1];
      puVar3 = (undefined4 *)(param_3 + 0x5a0 + lVar24);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x5a0 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar22 = (undefined8 *)(param_2 + 0x590 + lVar24);
      *puVar22 = uVar6;
      puVar22[1] = uVar18;
      puVar3 = (undefined4 *)(param_3 + 0x5c0 + lVar24);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x5c0 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      FUN_140d2c7b6(lVar2 + 0x5d0,lVar1 + 0x5d0);
      lVar24 = lVar24 + 0x620;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140d2c6ac FUN_140d2c6ac body=85 status=ok
// SIG undefined FUN_140d2c6ac(void)

undefined8 * FUN_140d2c6ac(undefined8 *param_1,undefined8 *param_2)

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
      FUN_142b5d91a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d2c702 FUN_140d2c702 body=85 status=ok
// SIG undefined FUN_140d2c702(void)

undefined8 * FUN_140d2c702(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140d2c946(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x34);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d2c758 FUN_140d2c758 body=93 status=ok
// SIG undefined FUN_140d2c758(void)

undefined8 * FUN_140d2c758(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408f8ca5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474faf68(param_1,iVar1);
      FUN_1474fafda(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d2c7b6 FUN_140d2c7b6 body=154 status=ok
// SIG undefined FUN_140d2c7b6(void)

longlong FUN_140d2c7b6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140d2c7e2;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140d2c7e2:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140d2c850(param_1,param_2);
  return param_1;
}



// FUNCTION 140d2c850 FUN_140d2c850 body=245 status=ok
// SIG undefined FUN_140d2c850(void)

undefined8 * FUN_140d2c850(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c85f1c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 140d2c946 FUN_140d2c946 body=330 status=ok
// SIG undefined FUN_140d2c946(void)

void FUN_140d2c946(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x34;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d2c9b4;
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
LAB_140d2c9b4:
    iVar5 = (int)(uVar4 / 0x34);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x34,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d2ca90 FUN_140d2ca90 body=148 status=ok
// SIG undefined FUN_140d2ca90(void)

longlong FUN_140d2ca90(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x60))();
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar4 = lVar3;
    }
    if ((longlong)*(int *)(lVar3 + 0x18) != 0) {
      lVar6 = 0;
      while ((((iVar1 = *(int *)(lVar4 + 4 + lVar6), iVar1 == 0 ||
               (uVar2 = *(uint *)(lVar4 + lVar6), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
             || (((plVar5 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                  plVar5 == (longlong *)0x0 || ((int)plVar5[2] != iVar1)) ||
                 (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0))))))) {
        lVar6 = lVar6 + 8;
        if ((longlong)*(int *)(lVar3 + 0x18) * 8 == lVar6) {
          return 0;
        }
      }
      return *plVar5;
    }
  }
  return 0;
}



// FUNCTION 140d2cb24 FUN_140d2cb24 body=918 status=ok
// SIG undefined FUN_140d2cb24(void)

longlong FUN_140d2cb24(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1401144ce(param_2);
  if (cVar1 != '\0') {
    if (((*(int *)(param_2 + 0x10) == 0) || (iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0)) ||
       (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_140d2cde0:
      local_20 = DAT_14c948620;
      uVar4 = DAT_14c948618;
    }
    else {
      lVar5 = param_2 + 0x18;
      if (0 < *(int *)(param_2 + 0x34)) {
        lVar5 = *(longlong *)(param_2 + 0x28);
      }
      if (1 < iVar2) {
        lVar5 = *(longlong *)(param_2 + 0x28);
      }
      if ((iVar2 == 1) || (iVar2 < 3)) goto LAB_140d2cde0;
      local_20 = *(uint *)(lVar5 + 0x20);
      uVar4 = *(ulonglong *)(lVar5 + 0x18);
    }
    local_28._0_4_ = (uint)uVar4;
    if (local_20 != 0) {
      uVar3 = local_20 >> 0xd ^ (uint)local_28 - local_20;
      uVar8 = uVar3 << 8 ^ (-0x61c88647 - local_20) - uVar3;
      uVar10 = uVar8 >> 0xd ^ (local_20 - uVar3) - uVar8;
      uVar6 = uVar10 >> 0xc ^ (uVar3 - uVar8) - uVar10;
      uVar3 = uVar6 << 0x10 ^ (uVar8 - uVar10) - uVar6;
      uVar8 = uVar3 >> 5 ^ (uVar10 - uVar6) - uVar3;
      uVar6 = uVar8 >> 3 ^ (uVar6 - uVar3) - uVar8;
      uVar3 = uVar6 << 10 ^ (uVar3 - uVar8) - uVar6;
      local_28._0_4_ = uVar3 >> 0xf ^ uVar8 - (uVar6 + uVar3);
    }
    uVar3 = (uint)local_28;
    local_28 = uVar4;
    iVar2 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar3,&local_28);
    if (iVar2 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x78);
      if ((lVar5 + (longlong)iVar2 * 0x70 != 0) &&
         (plVar9 = (longlong *)(lVar5 + (longlong)iVar2 * 0x70 + 0x10), plVar9 != (longlong *)0x0))
      {
        if ((*(int *)(param_2 + 0x10) == 0) ||
           ((iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0 ||
            (*(int *)(param_2 + 0x10) == DAT_14c948000)))) {
LAB_140d2cdf6:
          local_20 = DAT_14c948620;
          local_28 = DAT_14c948618;
        }
        else {
          lVar5 = param_2 + 0x18;
          if (0 < *(int *)(param_2 + 0x34)) {
            lVar5 = *(longlong *)(param_2 + 0x28);
          }
          if (1 < iVar2) {
            lVar5 = *(longlong *)(param_2 + 0x28);
          }
          if ((iVar2 == 1) || (iVar2 < 4)) goto LAB_140d2cdf6;
          local_20 = *(uint *)(lVar5 + 0x2c);
          local_28 = *(ulonglong *)(lVar5 + 0x24);
        }
        uVar4 = local_28 & 0xffffffff;
        if (local_20 != 0) {
          uVar3 = FUN_144a78877(uVar4,local_20);
          uVar4 = (ulonglong)uVar3;
        }
        iVar2 = FUN_144a24328(plVar9,uVar4,&local_28);
        if (iVar2 != -1) {
          if ((*plVar9 + (longlong)iVar2 * 0x68 != 0) &&
             (plVar9 = (longlong *)(*plVar9 + (longlong)iVar2 * 0x68 + 0x10),
             plVar9 != (longlong *)0x0)) {
            if (((*(int *)(param_2 + 0x10) == 0) || (iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0))
               || (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_140d2ce0c:
              local_20 = DAT_14c948620;
              uVar4 = DAT_14c948618;
            }
            else {
              lVar5 = param_2 + 0x18;
              if (0 < *(int *)(param_2 + 0x34)) {
                lVar5 = *(longlong *)(param_2 + 0x28);
              }
              if (1 < iVar2) {
                lVar5 = *(longlong *)(param_2 + 0x28);
              }
              if ((iVar2 == 1) || (iVar2 < 5)) goto LAB_140d2ce0c;
              local_20 = *(uint *)(lVar5 + 0x38);
              uVar4 = *(ulonglong *)(lVar5 + 0x30);
            }
            local_28._0_4_ = (uint)uVar4;
            if (local_20 != 0) {
              uVar3 = local_20 >> 0xd ^ (uint)local_28 - local_20;
              uVar8 = uVar3 << 8 ^ (-0x61c88647 - local_20) - uVar3;
              uVar10 = uVar8 >> 0xd ^ (local_20 - uVar3) - uVar8;
              uVar6 = uVar10 >> 0xc ^ (uVar3 - uVar8) - uVar10;
              uVar3 = uVar6 << 0x10 ^ (uVar8 - uVar10) - uVar6;
              uVar8 = uVar3 >> 5 ^ (uVar10 - uVar6) - uVar3;
              uVar6 = uVar8 >> 3 ^ (uVar6 - uVar3) - uVar8;
              uVar3 = uVar6 << 10 ^ (uVar3 - uVar8) - uVar6;
              local_28._0_4_ = uVar3 >> 0xf ^ uVar8 - (uVar6 + uVar3);
            }
            uVar3 = (uint)local_28;
            local_28 = uVar4;
            iVar2 = FUN_140727b76(plVar9,uVar3,&local_28);
            if (iVar2 == -1) {
              lVar5 = 0;
            }
            else {
              lVar5 = (longlong)iVar2 * 0xa8 + *plVar9;
            }
            lVar7 = lVar5 + 0x10;
            if (lVar5 == 0) {
              lVar7 = 0;
            }
            lVar5 = lVar7 + 0x10;
            if (lVar7 == 0) {
              lVar5 = 0;
            }
            goto LAB_140d2cd3c;
          }
        }
      }
    }
  }
  lVar5 = 0;
LAB_140d2cd3c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2cebc FUN_140d2cebc body=67 status=ok
// SIG undefined FUN_140d2cebc(void)

void FUN_140d2cebc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_140d2ceff();
  if (cVar2 != '\0') {
    FUN_140898514(param_1 + 0xd8,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d2cef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x100))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 140d2ceff FUN_140d2ceff body=96 status=ok
// SIG undefined FUN_140d2ceff(void)

bool FUN_140d2ceff(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 == DVar3) goto LAB_140d2cf56;
    }
    DVar2 = GetCurrentThreadId();
    return DVar2 == DAT_14c867d18;
  }
LAB_140d2cf56:
  return DAT_14c867d18 == 0;
}



// FUNCTION 140d2cf60 FUN_140d2cf60 body=377 status=ok
// SIG undefined FUN_140d2cf60(void)

void FUN_140d2cf60(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined8 local_238;
  undefined1 local_230 [8];
  int local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_200 [2];
  undefined1 local_1f0 [424];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  cVar3 = (**(code **)(*param_1 + 0x180))(param_1,param_4,1);
  if (cVar3 != '\0') {
    local_218 = 0;
    uStack_210 = 0;
    FUN_14000e9de(local_1f0,*(undefined4 *)((longlong)param_1 + 0x8c));
    local_200[0] = param_1[0xe];
    local_200[1] = param_1[0xf];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)((longlong)local_200 + lVar4);
      cVar3 = (**(code **)(*plVar2 + 0x180))(plVar2,param_4,1);
      if (cVar3 != '\0') {
        iVar1 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
          FUN_14000e500(param_5,iVar1);
        }
        *(longlong **)(*param_5 + (longlong)iVar1 * 8) = plVar2;
        local_248 = param_5;
        (**(code **)(*plVar2 + 0x188))(plVar2,local_1f0,0,param_4);
        *(int *)(param_5 + 1) = (int)param_5[1] + -1;
        FUN_14000e472(param_5);
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x10);
    FUN_1446f07d6(local_1f0,&local_238,0);
    iVar1 = *(int *)((longlong)param_1 + 0x44);
    FUN_14000e6f0(local_230,6);
    local_224 = 6;
    local_220 = local_238;
    local_228 = param_3 + iVar1;
    FUN_14000e760(param_2,local_230);
    FUN_14000eb08(local_1f0);
  }
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2d0da FUN_140d2d0da body=73 status=ok
// SIG undefined FUN_140d2d0da(void)

undefined8 FUN_140d2d0da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x180))();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140d2d116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x180))
                      (*(longlong **)(param_1 + 0x78),param_2,param_3);
    return uVar2;
  }
  return 1;
}



// FUNCTION 140d2d124 FUN_140d2d124 body=121 status=ok
// SIG undefined FUN_140d2d124(void)

void FUN_140d2d124(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    param_3 = param_3 + *(int *)(param_1 + 0x44);
    do {
      FUN_14000e6f0(local_40,0x10);
      local_34 = 0x10;
      local_30 = 0;
      local_38 = param_3;
      FUN_14000e760(param_2,local_40);
      param_3 = param_3 + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2d19e FUN_140d2d19e body=562 status=ok
// SIG undefined FUN_140d2d19e(void)

undefined8 * FUN_140d2d19e(longlong *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_140d2d64c(param_2,0,1);
  if ((cVar1 == '\0') || (lVar2 = (**(code **)(*param_1 + 0x108))(param_1,param_2), lVar2 == -1)) {
    if ((param_3 & 4) != 0) {
      plVar4 = (longlong *)FUN_1400dbadc();
      plVar5 = (longlong *)*plVar4;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_140e92164();
        *plVar4 = (longlong)plVar5;
      }
      (**(code **)(*plVar5 + 0xa8))(plVar5,param_2,0);
    }
    plVar4 = (longlong *)FUN_1400dbadc();
    plVar5 = (longlong *)*plVar4;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_140e92164();
      *plVar4 = (longlong)plVar5;
    }
    uVar8 = (param_3 & 0x10) >> 4;
    uVar9 = (param_3 & 8) >> 3;
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x100))(plVar5,param_2,uVar9,uVar8);
    if (plVar5 == (longlong *)0x0) {
      FUN_140056680(local_60,param_2);
      FUN_140beea4a(&local_50,local_60);
      puVar7 = local_50;
      if (local_48 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      (**(code **)(*param_1 + 0x58))(param_1,puVar7,1);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      plVar4 = (longlong *)FUN_1400dbadc();
      plVar5 = (longlong *)*plVar4;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_140e92164();
        *plVar4 = (longlong)plVar5;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x100))(plVar5,param_2,uVar9,uVar8);
      if (plVar5 == (longlong *)0x0) {
        if ((param_3 & 1) != 0) {
          FUN_140033559(".\\Runtime/Core/Private/HAL/FileManagerGeneric.cpp",0x7b,
                        L"Failed to create file: %s",param_2);
        }
        puVar3 = (undefined8 *)0x0;
        goto LAB_140d2d2c2;
      }
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    uVar6 = (**(code **)(*plVar5 + 8))(plVar5);
    local_78 = 0x1000;
    local_70 = param_3;
    FUN_140d2d3d2(puVar3,plVar5,param_2,uVar6);
  }
  else {
    puVar3 = (undefined8 *)FUN_14001cc68(0x98,0x10);
    FUN_144869430(puVar3);
    *puVar3 = &PTR_FUN_149e133b0;
    puVar3[0x12] = 0;
    *(byte *)(puVar3 + 5) = *(byte *)(puVar3 + 5) | 4;
    *(byte *)((longlong)puVar3 + 0x29) = *(byte *)((longlong)puVar3 + 0x29) | 1;
  }
LAB_140d2d2c2:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 140d2d3d2 FUN_140d2d3d2 body=214 status=ok
// SIG undefined FUN_140d2d3d2(void)

longlong *
FUN_140d2d3d2(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,int param_5,
             undefined4 param_6)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_149e11c50;
  FUN_140056680(param_1 + 0x12,param_3);
  *(undefined4 *)(param_1 + 0x14) = param_6;
  param_1[0x15] = param_4;
  param_1[0x16] = param_2;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  uVar3 = (ulonglong)(param_5 + (uint)(param_5 == 0)) - 1;
  if (uVar3 == 0) {
    bVar2 = 0;
  }
  else {
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    bVar2 = (byte)lVar1 ^ 0x3f;
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 1L << (-bVar2 & 0x3f);
  FUN_140d2d4a8(param_1 + 0x17);
  (**(code **)(*param_1 + 0xc0))(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,1);
  return param_1;
}



// FUNCTION 140d2d4a8 FUN_140d2d4a8 body=315 status=ok
// SIG undefined FUN_140d2d4a8(void)

void FUN_140d2d4a8(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_140d2d511;
              lVar1 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,param_2,1);
      }
    }
LAB_140d2d511:
    uVar6 = 0x7fffffffffffffff;
    if ((longlong)param_2 <= (longlong)uVar3) {
      uVar6 = uVar3;
    }
  }
  if (uVar6 != *(ulonglong *)(param_1 + 0x10)) {
    *(ulonglong *)(param_1 + 0x10) = uVar6;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),uVar6,1,1);
  }
  return;
}



// FUNCTION 140d2d5e4 FUN_140d2d5e4 body=103 status=ok
// SIG undefined FUN_140d2d5e4(void)

void FUN_140d2d5e4(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  
  if (param_3 != 0 || *param_1 != 0) {
    if ((((longlong)param_3 < 0) || (param_4 - 0x80000000 < 0xffffffff80000001)) ||
       (auVar1._8_8_ = 0, auVar1._0_8_ = param_4,
       SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0) < param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afa99(0x40,param_3,param_4);
    }
    lVar2 = FUN_14001fdce(*param_1,param_4 * param_3,param_5);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140d2d64c FUN_140d2d64c body=453 status=ok
// SIG undefined FUN_140d2d64c(void)

bool FUN_140d2d64c(undefined8 param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = (longlong *)&DAT_14c873140;
  if (param_3 != '\0') {
    plVar10 = &DAT_14c8730f0;
  }
  FUN_140056680(local_58,param_1);
  FUN_14093d9c4(&local_48);
  uVar8 = 0;
  uVar5 = local_40 - 1;
  if (local_40 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    uVar8 = 0;
    do {
      local_48[uVar8] = (ushort)((ushort)local_48[uVar8] - 0x41 < 0x1a) * 0x20 + local_48[uVar8];
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    puVar7 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar7 = local_48;
    }
    lVar11 = 0;
    uVar8 = 0;
    do {
      uVar9 = ((uint)(0x19 < (ushort)puVar7[lVar11] - 0x61) * 0x20 + (uint)(ushort)puVar7[lVar11]) -
              0x20;
      uVar12 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar9) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar12 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar9 >> 8 & 0xff) * 4));
      lVar11 = lVar11 + 1;
    } while (uVar5 != (uint)lVar11);
  }
  local_38[0] = local_48;
  local_48 = (undefined2 *)0x0;
  iVar6 = FUN_140d2d812(plVar10,uVar8,local_38);
  lVar11 = 0;
  if (iVar6 != -1) {
    lVar11 = (longlong)iVar6 * 0x20 + *plVar10;
  }
  plVar10 = (longlong *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    plVar10 = (longlong *)0x0;
  }
  if (local_38[0] != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((param_2 != (undefined4 *)0x0) && (plVar10 != (longlong *)0x0)) {
    puVar1 = (undefined4 *)*plVar10;
    param_2[4] = puVar1[4];
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_2 = *puVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10 != (longlong *)0x0;
}



// FUNCTION 140d2d812 FUN_140d2d812 body=203 status=ok
// SIG undefined FUN_140d2d812(void)

int FUN_140d2d812(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140d2d85c:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140d2d8d2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140d2d8d2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140d2d8c3;
    }
  }
  return -1;
LAB_140d2d8d2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140d2d8c3:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140d2d85c;
}



// FUNCTION 140d2d8de FUN_140d2d8de body=874 status=ok
// SIG undefined FUN_140d2d8de(void)

void FUN_140d2d8de(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar6 = (**(code **)(*param_1 + 0x300))();
  local_a8 = param_1;
  if (cVar6 == '\0') {
    local_a0 = param_1 + 0x51;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x54] == 0) {
      uVar14 = 1;
      uVar12 = 0xffffffff;
      iVar13 = 0;
      iVar16 = 0;
      iVar9 = 0;
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar14 = (ulonglong)local_90 >> 0x20;
      iVar13 = (int)param_1[0x54];
      iVar10 = (int)local_90;
      uVar12 = (uint)uStack_80;
      iVar9 = uStack_80._4_4_;
      iVar16 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar9 != iVar13 || local_88 != local_a0) {
      do {
        lVar7 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar9 * 0x20);
        if (((lVar7 != 0) && (*(byte **)(lVar7 + 0x48) != (byte *)0x0)) &&
           (((**(byte **)(lVar7 + 0x48) & 0x6b) == 3 &&
            (plVar15 = *(longlong **)(lVar7 + 0x30), plVar15 != (longlong *)0x0)))) {
          lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
          lVar8 = FUN_140d2dc4a();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar15);
          }
        }
        uVar12 = uVar12 & ~(uint)uVar14;
        plVar15 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar7 = (longlong)iVar10;
        uVar11 = *(uint *)((longlong)plVar15 + lVar7 * 4) & uVar12;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar5 = iVar9;
          if (iVar9 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar10 < iVar9) {
            lVar8 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar15 + lVar8 * 4 + lVar7 * 4 + 4);
              if (uVar11 != 0) {
                iVar10 = iVar10 + (int)lVar8 + 1;
                uVar12 = 0xffffffff;
                goto LAB_140d2da7e;
              }
              iVar16 = iVar16 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar5 - lVar7 != lVar8);
            uVar12 = 0xffffffff;
            iVar10 = iVar5;
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar3;
        }
        else {
LAB_140d2da7e:
          uVar14 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar14 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar9 = (iVar16 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
        param_1 = local_a8;
      } while (iVar9 != iVar13 || plVar1 != local_a0);
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar15 = param_1 + 0x3b;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar15;
    if ((int)param_1[0x3e] == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = (int)local_a8[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar7 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar10 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar13) || (local_78 = lVar7, plStack_60 != plVar15)) {
      do {
        local_78 = lVar7;
        plVar4 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar10 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar8 = FUN_140d2dc4a();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar4);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar10 = local_78._4_4_;
        lVar7 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar15 || local_78._4_4_ != iVar13));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d2dc4a FUN_140d2dc4a body=57 status=ok
// SIG undefined FUN_140d2dc4a(void)

void FUN_140d2dc4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a7e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a7e8 = FUN_140002ddd(FUN_1465272c4,uVar1,L"ItemPoolDef");
  }
  return;
}



// FUNCTION 140d2dc84 FUN_140d2dc84 body=67 status=ok
// SIG undefined FUN_140d2dc84(void)

void FUN_140d2dc84(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2dcc8 FUN_140d2dcc8 body=2739 status=ok
// SIG undefined FUN_140d2dcc8(void)

void FUN_140d2dcc8(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  code *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_198 = FUN_1446ddbd2();
      local_190 = FUN_1403a682c;
      local_1a0 = 0;
      local_1a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar2);
          if (cVar8 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&uStack_58);
            goto LAB_140d2ddbd;
          }
        }
        puVar11 = (undefined4 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar11 != &uStack_58) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&uStack_58,puVar11,(int)plVar2[6]);
          }
          else {
            memcpy(&uStack_58,puVar11,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_1a0 = CONCAT44(local_1a0._4_4_,(int)plVar2[6]);
        local_1a8 = local_1a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&uStack_58,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,&uStack_58,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_58);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_58);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_58 = (undefined4)uVar6;
      uStack_54 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar4)(uVar6,param_2,&uStack_58);
    }
  }
LAB_140d2ddbd:
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_198 = FUN_1446ddbd2();
      local_190 = FUN_14067a048;
      local_1a0 = 0;
      local_1a8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar2);
          if (cVar8 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_5c);
            goto LAB_140d2de94;
          }
        }
        piVar12 = (int *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (piVar12 != &local_5c) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_5c,piVar12,(int)plVar2[6]);
          }
          else {
            memcpy(&local_5c,piVar12,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_1a0 = CONCAT44(local_1a0._4_4_,(int)plVar2[6]);
        local_1a8 = local_1a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_5c,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,&local_5c,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_5c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_5c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_5c = (int)uVar6;
      uStack_58 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar4)(uVar6,param_2,&local_5c);
    }
  }
LAB_140d2de94:
  iVar7 = local_5c;
  memset(&uStack_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar2);
          if (cVar8 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&uStack_160);
            goto LAB_140d2df71;
          }
        }
        puVar11 = (undefined4 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar11 != &uStack_160) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&uStack_160,puVar11,(int)plVar2[6]);
          }
          else {
            memcpy(&uStack_160,puVar11,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_1a0 = CONCAT44(local_1a0._4_4_,(int)plVar2[6]);
        local_1a8 = local_1a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&uStack_160,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,&uStack_160,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&uStack_160);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&uStack_160);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_160 = (undefined4)uVar6;
      local_15c = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar4)(uVar6,param_2,&uStack_160);
    }
  }
LAB_140d2df71:
  puVar11 = *(undefined4 **)(param_2 + 0x38);
  local_164 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_198 = FUN_1446ddbd2();
      local_190 = FUN_14067a048;
      local_1a0 = 0;
      local_1a8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar2);
          if (cVar8 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_164);
            goto LAB_140d2e045;
          }
        }
        piVar12 = (int *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (piVar12 != &local_164) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_164,piVar12,(int)plVar2[6]);
          }
          else {
            memcpy(&local_164,piVar12,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_1a0 = CONCAT44(local_1a0._4_4_,(int)plVar2[6]);
        local_1a8 = local_1a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_164,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,&local_164,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_164);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_164);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_164 = (int)uVar6;
      uStack_160 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar4)(uVar6,param_2,&local_164);
    }
  }
LAB_140d2e045:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = local_48;
  local_188 = uStack_58;
  uStack_184 = uStack_54;
  uStack_180 = uStack_50;
  uStack_17c = uStack_4c;
  local_1a8 = CONCAT71(local_1a8._1_7_,local_164 != 0);
  puVar10 = &uStack_160;
  if (puVar11 != (undefined4 *)0x0) {
    puVar10 = puVar11;
  }
  FUN_140d2e77c(param_1,&local_188,iVar7 != 0,puVar10);
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2e77c FUN_140d2e77c body=593 status=ok
// SIG undefined FUN_140d2e77c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d2e77c(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  auVar7 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar3 = auVar7._0_8_;
  dVar4 = auVar7._8_8_;
  dVar12 = *(double *)(param_1 + 0x1c0);
  puVar6 = *(undefined8 **)(param_1 + 0x230);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = DAT_14c8463d8;
    *puVar6 = DAT_14c8463d0;
    puVar6[1] = uVar5;
    uVar5 = DAT_14c8463e8;
    puVar6[2] = DAT_14c8463e0;
    puVar6[3] = uVar5;
    uVar5 = DAT_14c846500;
    puVar6[4] = DAT_14c8464f8;
    puVar6[5] = uVar5;
    puVar6[6] = DAT_14c846508;
    *(undefined8 **)(param_1 + 0x230) = puVar6;
  }
  if (((((double)puVar6[4] != dVar3) || (NAN((double)puVar6[4]) || NAN(dVar3))) ||
      ((double)puVar6[5] != dVar4)) ||
     (((NAN((double)puVar6[5]) || NAN(dVar4) || ((double)puVar6[6] != dVar12)) ||
      (NAN((double)puVar6[6]) || NAN(dVar12))))) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar12;
    dVar1 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar7 = divpd(auVar7,_DAT_1499387d0);
    auVar10 = divpd(auVar15,_DAT_1499387d0);
    auVar7 = roundpd(auVar7,auVar7,3);
    auVar10 = roundpd(auVar10,auVar10,3);
    dVar3 = dVar3 - auVar7._0_8_ * dVar1;
    dVar4 = dVar4 - auVar7._8_8_ * dVar2;
    auVar16._0_8_ = dVar12 - auVar10._0_8_ * dVar1;
    auVar16._8_8_ = 0.0 - auVar10._8_8_ * dVar2;
    auVar14._0_8_ = dVar3 + dVar1;
    auVar14._8_8_ = dVar4 + dVar2;
    auVar13._0_8_ = dVar1 + auVar16._0_8_;
    auVar13._8_8_ = dVar2 + auVar16._8_8_;
    auVar10._8_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar10._0_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar7._8_4_ = SUB84(dVar4,0);
    auVar7._0_8_ = dVar3;
    auVar7._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar10 = blendvpd(auVar14,auVar7,auVar10);
    auVar8._8_8_ = -(ulonglong)(0.0 <= auVar16._8_8_);
    auVar8._0_8_ = -(ulonglong)(0.0 <= auVar16._0_8_);
    auVar7 = blendvpd(auVar13,auVar16,auVar8);
    auVar11._0_8_ = auVar10._0_8_ + -360.0;
    auVar11._8_8_ = auVar10._8_8_ + -360.0;
    auVar9._8_8_ = -(ulonglong)(180.0 < auVar10._8_8_);
    auVar9._0_8_ = -(ulonglong)(180.0 < auVar10._0_8_);
    auVar10 = blendvpd(auVar10,auVar11,auVar9);
    dVar12 = auVar7._0_8_;
    *(undefined1 (*) [16])(puVar6 + 4) = auVar10;
    puVar6[6] = ~-(ulonglong)(180.0 < dVar12) & (ulonglong)dVar12 |
                (ulonglong)(dVar12 + -360.0) & -(ulonglong)(180.0 < dVar12);
    FUN_144a7484c(puVar6 + 4,&local_88);
    puVar6[2] = local_78;
    puVar6[3] = uStack_70;
    *puVar6 = local_88;
    puVar6[1] = uStack_80;
  }
  local_b8 = 0;
  if ((char)param_3 != '\0') {
    local_b8 = param_4;
  }
  local_88 = *puVar6;
  uStack_80 = puVar6[1];
  local_78 = puVar6[2];
  uStack_70 = puVar6[3];
  local_b0 = param_5;
  FUN_144927ad4(param_1,&local_a8,&local_88,param_3);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2e9ce FUN_140d2e9ce body=1371 status=ok
// SIG undefined FUN_140d2e9ce(void)

void FUN_140d2e9ce(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined2 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  code **local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  undefined1 local_2b8 [312];
  code *local_180;
  longlong *local_178;
  longlong local_e0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar4 = (**(code **)(*param_1 + 0x310))(param_1,0), cVar4 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  lVar12 = param_1[5];
  lVar7 = *(longlong *)(lVar12 + 0x98);
  if (lVar7 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_2d0 = &local_180;
      local_180 = FUN_141030f22;
      local_2c0 = FUN_14081d0ea;
      local_2c8 = &LAB_1463c0cc2;
      local_2d8 = &LAB_147c9db5b;
      local_2e0 = &LAB_1463f9c44;
      local_2e8 = &DAT_149e063b2;
      local_2f0 = 0x2000000000;
      local_2f8 = 0x10000004;
      local_300 = 8;
      local_308 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar7 = *(longlong *)(lVar12 + 0x98);
      if (lVar7 == 0) goto LAB_140d2ea62;
    }
    if (((((DAT_14caf9cd0 != 0) && (lVar12 = *(longlong *)(lVar7 + 0x10), lVar12 != 0)) &&
         (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
          == DAT_14caf9cd0 + 0x30 && (*(longlong *)(lVar7 + 0x438) != 0)))) &&
       (((int)param_1[0x10] != 0 || ((int)param_1[0x12] != 0)))) {
      plVar1 = param_1 + 0xf;
      if ((int)param_1[0xd] == 3) {
        lVar12 = (**(code **)(*(longlong *)param_1[5] + 0x180))();
        if ((lVar12 == 0) || (plVar8 = *(longlong **)(lVar12 + 0x1f0), plVar8 == (longlong *)0x0))
        goto LAB_140d2ea62;
        if (DAT_14cb5e538 == 0) {
          local_2d0 = &local_180;
          local_180 = (code *)&LAB_1417c5d06;
          local_2c0 = FUN_14081d0ea;
          local_2c8 = &LAB_1417ad04a;
          local_2d8 = &LAB_1486a7af7;
          local_2e0 = &LAB_1464e1631;
          local_2e8 = &DAT_149e063b2;
          local_2f0 = 0;
          local_2f8 = 0x1000000c;
          local_300 = 8;
          local_308 = 0x420;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
          plVar8 = *(longlong **)(lVar12 + 0x1f0);
          if (plVar8 == (longlong *)0x0) goto LAB_140d2ea62;
        }
        if ((((DAT_14cb5e538 == 0) || (lVar7 = plVar8[2], lVar7 == 0)) ||
            (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cb5e538 + 0x38))) ||
           ((*(longlong *)
              (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) !=
             DAT_14cb5e538 + 0x30 ||
            (cVar4 = (**(code **)(*plVar8 + 0x498))(), (byte)(cVar4 - 9U) < 0xfe))))
        goto LAB_140d2ea62;
        uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar7 = FUN_140149a73(uVar6,0);
        if ((lVar7 == 0) ||
           ((*(longlong **)(lVar7 + 0x1b0) == (longlong *)0x0 ||
            (lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x1b0) + 0xb0))(), lVar7 == 0))))
        goto LAB_140d2ea62;
        lVar2 = param_1[0x10];
        if ((longlong)(int)lVar2 != 0) {
          lVar3 = param_1[0xf];
          lVar13 = 0;
          do {
            plVar8 = *(longlong **)(lVar3 + lVar13);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar7);
            }
            lVar13 = lVar13 + 0x10;
          } while ((longlong)(int)lVar2 * 0x10 != lVar13);
        }
      }
      else {
        FUN_1449daf8c(local_2b8,param_1,0);
        if (param_1[5] != 0) {
          FUN_1449daf8c(&local_180,param_1,0);
          FUN_140d2f0ba(plVar1,&local_180);
          uVar14 = 0;
          lVar12 = 0;
          do {
            lVar7 = lVar12;
            uVar5 = uVar14;
            if ((longlong)(int)param_1[0x12] <= (longlong)uVar5) break;
            lVar12 = param_1[0x11];
            puVar10 = (undefined1 *)(*(longlong *)(lVar12 + lVar7) + 8);
            if ((undefined1 *)local_178[1] < (undefined1 *)*local_178 + 1) {
              (**(code **)(local_180 + 0x170))(&local_180,puVar10,1);
            }
            else {
              *puVar10 = *(undefined1 *)*local_178;
              *local_178 = *local_178 + 1;
            }
            plVar8 = *(longlong **)(lVar12 + lVar7);
            (**(code **)(*plVar8 + 0x10))(plVar8,&local_180);
            uVar14 = uVar5 + 1;
            lVar12 = lVar7 + 0x10;
          } while (local_e0 < 0x80001);
          iVar11 = (int)uVar5;
          if (iVar11 != 0) {
            iVar9 = (int)(*(uint *)(param_1 + 0x10) + uVar5);
            if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(*(uint *)(param_1 + 0x10) + uVar5 & 0xffffffff);
            }
            if (*(int *)((longlong)param_1 + 0x84) < iVar9) {
              FUN_140d2efe6(plVar1);
            }
            lVar12 = 8;
            uVar14 = uVar5;
            do {
              lVar2 = param_1[0x11];
              iVar9 = (int)param_1[0x10];
              *(uint *)(param_1 + 0x10) = iVar9 + 1U;
              if (*(uint *)((longlong)param_1 + 0x84) < iVar9 + 1U) {
                FUN_140d2f4b4(plVar1,iVar9);
              }
              lVar3 = *plVar1;
              *(undefined8 *)(lVar3 + (longlong)iVar9 * 0x10) = *(undefined8 *)(lVar2 + -8 + lVar12)
              ;
              lVar2 = *(longlong *)(lVar2 + lVar12);
              *(longlong *)(lVar3 + 8 + (longlong)iVar9 * 0x10) = lVar2;
              if (lVar2 != 0) {
                LOCK();
                *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
                UNLOCK();
              }
              lVar12 = lVar12 + 0x10;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            _Dst = (void *)param_1[0x11];
            FUN_140d2ef74(_Dst,uVar5 & 0xffffffff);
            iVar9 = iVar11;
            if ((int)param_1[0x12] != iVar11) {
              memmove(_Dst,(void *)(lVar7 + (longlong)_Dst),
                      (longlong)((int)param_1[0x12] - iVar11) << 4);
              iVar9 = (int)param_1[0x12];
            }
            *(int *)(param_1 + 0x12) = iVar9 - iVar11;
          }
          FUN_1449daebe(&local_180);
        }
        FUN_140d2f0ba(plVar1,local_2b8);
        (**(code **)(*param_1 + 0x308))(param_1,&local_180,local_2b8,1);
        FUN_1449daebe(local_2b8);
      }
      FUN_140d2ef40(plVar1);
    }
  }
LAB_140d2ea62:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d2ef40 FUN_140d2ef40 body=52 status=ok
// SIG undefined FUN_140d2ef40(void)

void FUN_140d2ef40(longlong *param_1)

{
  FUN_140d2ef74(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d2ef74(0,0);
  return;
}



// FUNCTION 140d2ef74 FUN_140d2ef74 body=73 status=ok
// SIG undefined FUN_140d2ef74(void)

void FUN_140d2ef74(longlong param_1,int param_2)

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



// FUNCTION 140d2efbe FUN_140d2efbe body=40 status=ok
// SIG undefined FUN_140d2efbe(void)

undefined8 FUN_140d2efbe(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) & 0xed | 0x10;
  FUN_1408f10c6();
  return param_2;
}



// FUNCTION 140d2efe6 FUN_140d2efe6 body=212 status=ok
// SIG undefined FUN_140d2efe6(void)

void FUN_140d2efe6(longlong param_1,uint param_2)

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



// FUNCTION 140d2f0ba FUN_140d2f0ba body=684 status=ok
// SIG undefined FUN_140d2f0ba(void)

void FUN_140d2f0ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_4d;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (int)param_1[1];
  puVar4 = (ulonglong *)param_2[1];
  piVar2 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    local_4c = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar2;
  }
  iVar3 = (int)param_1[1];
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (iVar3 != 0) {
      lVar9 = *param_1;
      lVar11 = 0;
      do {
        puVar8 = (undefined1 *)(*(longlong *)(lVar9 + lVar11) + 8);
        puVar5 = *(undefined1 **)param_2[1];
        if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar8,1);
        }
        else {
          *puVar8 = *puVar5;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
        }
        plVar6 = *(longlong **)(lVar9 + lVar11);
        (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
        lVar11 = lVar11 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar11);
    }
  }
  else {
    if (iVar3 < local_4c) {
      *(int *)(param_1 + 1) = local_4c;
      uVar10 = local_4c - iVar3;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < uVar10) {
        FUN_140d2f4b4(param_1);
      }
      memset((void *)((longlong)iVar3 * 0x10 + *param_1),0,(longlong)(int)uVar10 << 4);
    }
    else {
      if (local_4c < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_4c);
      }
      if (local_4c < iVar3) {
        FUN_148849cc6(param_1,local_4c,iVar3 - local_4c);
        FUN_148849d20(param_1);
      }
    }
    if (0 < local_4c) {
      lVar11 = 0;
      lVar9 = 0;
      do {
        puVar4 = (ulonglong *)param_2[1];
        puVar5 = (undefined1 *)*puVar4 + 1;
        if ((undefined1 *)puVar4[1] < puVar5) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_4d,1);
        }
        else {
          local_4d = *(undefined1 *)*puVar4;
          *puVar4 = (ulonglong)puVar5;
        }
        FUN_140d2f368(&local_60,local_4d);
        plVar1 = local_58;
        lVar7 = *param_1;
        *(undefined8 *)(lVar7 + lVar11) = local_60;
        local_60 = 0;
        plVar6 = *(longlong **)(lVar7 + 8 + lVar11);
        if (local_58 == plVar6) {
LAB_140d2f2fe:
          plVar6 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_58)(local_58);
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
        else {
          local_58 = (longlong *)0x0;
          *(longlong **)(lVar7 + 8 + lVar11) = plVar1;
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
            goto LAB_140d2f2fe;
          }
        }
        plVar6 = *(longlong **)(*param_1 + lVar11);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar9 < local_4c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d2f368 FUN_140d2f368 body=331 status=ok
// SIG undefined FUN_140d2f368(void)

longlong * FUN_140d2f368(longlong *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong *plVar7;
  
  if (DAT_14cb7c628 != DAT_14cb7c654) {
    puVar6 = &DAT_14cb7c658;
    if (DAT_14cb7c660 != (undefined *)0x0) {
      puVar6 = DAT_14cb7c660;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7c668 - 1U & (uint)param_2) * 4);
    while (iVar1 != -1) {
      lVar4 = DAT_14cb7c620 + (longlong)iVar1 * 0x20;
      if (*(byte *)(DAT_14cb7c620 + (longlong)iVar1 * 0x20) == param_2) {
        if (((lVar4 != 0) && (plVar7 = (longlong *)(lVar4 + 8), plVar7 != (longlong *)0x0)) &&
           (*plVar7 != 0)) {
          lVar4 = FUN_140b4bade(*plVar7 + 8);
          uVar2 = ((uint *)*plVar7)[1];
          if (uVar2 != 0) {
            uVar3 = *(uint *)*plVar7;
            plVar7 = (longlong *)0x0;
            if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140d2f446;
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((puVar5 != (undefined8 *)0x0) &&
               ((*(uint *)(puVar5 + 2) == uVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
              plVar7 = (longlong *)*puVar5;
              goto LAB_140d2f446;
            }
          }
          plVar7 = (longlong *)0x0;
LAB_140d2f446:
          (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar4,1);
          *(byte *)(lVar4 + 8) = param_2;
          *param_1 = lVar4;
          puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          puVar5[1] = &DAT_100000001;
          *puVar5 = &PTR_FUN_14b400450;
          puVar5[2] = lVar4;
          param_1[1] = (longlong)puVar5;
          return param_1;
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140d2f4b4 FUN_140d2f4b4 body=269 status=ok
// SIG undefined FUN_140d2f4b4(void)

void FUN_140d2f4b4(longlong param_1,int param_2)

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



// FUNCTION 140d2f5c2 FUN_140d2f5c2 body=168 status=ok
// SIG undefined FUN_140d2f5c2(void)

void FUN_140d2f5c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b427a50;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14b427a90;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar3 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b427aa0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b427ae0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1 + 0x10);
  return;
}



// FUNCTION 140d2f66a FUN_140d2f66a body=189 status=ok
// SIG undefined FUN_140d2f66a(void)

void FUN_140d2f66a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4270f0;
  param_1[4] = &PTR_LAB_14b427130;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_140d2f728(param_1 + 4);
  *param_1 = &PTR_LAB_14b242fd0;
  plVar3 = (longlong *)param_1[2];
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
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d2f723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140d2f728 FUN_140d2f728 body=80 status=ok
// SIG undefined FUN_140d2f728(void)

void FUN_140d2f728(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42ae68;
  FUN_140d2f778(param_1);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d2f774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140d2f778 FUN_140d2f778 body=141 status=ok
// SIG undefined FUN_140d2f778(void)

void FUN_140d2f778(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar1 = (longlong *)(param_1 + 8);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_140d2f7c1;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*plVar1 != 0) {
      FUN_140d2f806(*plVar1,param_1,0);
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
LAB_140d2f7c1:
    plVar4 = *(longlong **)(param_1 + 0x10);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d2f801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d2f806 FUN_140d2f806 body=232 status=ok
// SIG undefined FUN_140d2f806(void)

void FUN_140d2f806(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_1 + 0x58);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    iVar13 = 0;
    bVar6 = *plVar2 == param_2;
    iVar10 = 0;
    do {
      lVar8 = (longlong)iVar10;
      iVar4 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar7 = plVar2 + lVar8 * 3 + 3;
      iVar11 = iVar10;
      lVar9 = lVar8;
      do {
        lVar9 = lVar9 + 1;
        iVar12 = iVar4;
        if (lVar5 <= lVar9) break;
        lVar3 = *plVar7;
        iVar11 = iVar11 + 1;
        plVar7 = plVar7 + 3;
        iVar12 = iVar11;
      } while (bVar6 == (lVar3 == param_2));
      if (bVar6 == false) {
        if (iVar13 != iVar10) {
          memmove(plVar2 + (longlong)iVar13 * 3,plVar2 + lVar8 * 3,
                  (longlong)(iVar12 - iVar10) * 0x18);
        }
        iVar13 = iVar13 + (iVar12 - iVar10);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar10 = iVar12;
    } while (lVar9 < lVar5);
    *(int *)(param_1 + 0x58) = iVar13;
  }
  return;
}



// FUNCTION 140d2f8ee FUN_140d2f8ee body=166 status=ok
// SIG undefined FUN_140d2f8ee(void)

undefined8 * FUN_140d2f8ee(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14aed7c60;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  return param_1;
}



// FUNCTION 140d2f994 FUN_140d2f994 body=60 status=ok
// SIG undefined FUN_140d2f994(void)

undefined8 FUN_140d2f994(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_14cb8be38;
  if (DAT_14cb8be38 != 0) {
    lVar2 = FUN_1400e3c00(DAT_14cb8be38,param_1,1);
    if (lVar2 != 0) {
      uVar3 = FUN_140cbed0a(lVar1,lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140d2f9d0 FUN_140d2f9d0 body=224 status=ok
// SIG undefined FUN_140d2f9d0(void)

longlong * FUN_140d2f9d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  if (lVar3 == 0) {
    uVar2 = FUN_140d2fab0();
    lVar3 = FUN_14477b664(uVar2);
    *(longlong *)(param_1 + 0xe8) = lVar3;
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  if (plVar4 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      return (longlong *)0x0;
    }
    if (lVar3 == 0) {
      return (longlong *)0x0;
    }
    plVar4 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      return (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
    plVar4 = (longlong *)FUN_144aff482(uVar2,(longlong *)(param_1 + 0xe0));
    *(longlong **)(param_1 + 0xf0) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  lVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  lVar5 = FUN_146527c60();
  if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    if ((char)plVar4[3] != '\0') {
      return plVar4;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 140d2fab0 FUN_140d2fab0 body=57 status=ok
// SIG undefined FUN_140d2fab0(void)

void FUN_140d2fab0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5c30 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5c30 = FUN_140002ddd(FUN_1462afb8d,uVar1,L"DefSelectorBaseDef");
  }
  return;
}



// FUNCTION 140d2fae9 FUN_140d2fae9 body=200 status=ok
// SIG undefined FUN_140d2fae9(void)

void FUN_140d2fae9(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3d11c0;
  puVar1[0x72] = &PTR_FUN_14a3d1800;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  FUN_1446f470e(&local_20,L"RootComponent0",1);
  uVar2 = FUN_140d2fbb2();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(puVar1,local_20,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  puVar1[0x39] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2fbb2 FUN_140d2fbb2 body=228 status=ok
// SIG undefined FUN_140d2fbb2(void)

longlong FUN_140d2fbb2(void)

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
  if (DAT_14caa1c28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147452122;
    local_40 = FUN_14179189c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSplinesComponent",&DAT_14caa1c28,FUN_146323ad6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1c28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d2fc98 FUN_140d2fc98 body=2745 status=ok
// SIG undefined FUN_140d2fc98(void)

void FUN_140d2fc98(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 *_Src;
  undefined8 *puVar6;
  undefined1 *_Src_00;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_140d2fd94;
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
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_140d2fd94:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_140d2fe6a;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_140d2fe6a:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_140d2ff40;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_140d2ff40:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1403a682c;
      local_190 = (undefined1 *)0x0;
      local_198 = (undefined4 *)0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_60);
            goto LAB_140d30008;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_60) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_60,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_60,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_60,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_60,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
LAB_140d30008:
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
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
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_160);
            goto LAB_140d300d8;
          }
        }
        _Src_00 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != local_160) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_160,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(local_160,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = (undefined1 *)CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_160,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_160,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_160);
  }
LAB_140d300d8:
  local_190 = local_160;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_190 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_198 = &local_178;
  local_168 = local_50;
  local_178 = local_60;
  uStack_174 = uStack_5c;
  uStack_170 = uStack_58;
  uStack_16c = uStack_54;
  FUN_140d30752(param_1,local_38,local_40,local_48);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d30752 FUN_140d30752 body=1871 status=ok
// SIG undefined FUN_140d30752(void)

void FUN_140d30752(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  int iVar16;
  float fVar17;
  longlong in_stack_00000030;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  longlong *local_c0;
  undefined2 *local_b8;
  undefined4 **local_b0;
  double local_a8;
  undefined4 *local_a0;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x720) == 0) goto LAB_140d30d85;
  lVar8 = FUN_140696450();
  lVar3 = *(longlong *)(param_1 + 0x720);
  if ((((lVar3 == 0) || (lVar8 == 0)) || (lVar9 = *(longlong *)(lVar3 + 0x10), lVar9 == 0)) ||
     (((*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38) || (param_2 == 0)) ||
      (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
       lVar8 + 0x30)))) goto LAB_140d30d85;
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if (lVar8 == 0) {
    lVar8 = FUN_1448abda6(param_1);
  }
  dVar2 = *(double *)(lVar8 + 0x6d0);
  if ((double)(float)dVar2 - *(double *)(param_1 + 0x750) < (double)*(float *)(lVar3 + 0x158))
  goto LAB_140d30d85;
  FUN_14083167e(param_2,&local_b8,0);
  fVar17 = (float)(local_a8 * local_a8 +
                  (double)local_b8 * (double)local_b8 + (double)local_b0 * (double)local_b0);
  if (fVar17 <= *(float *)(lVar3 + 0x160) * *(float *)(lVar3 + 0x160)) goto LAB_140d30d85;
  fVar17 = SQRT(fVar17);
  if ((*(char *)(lVar3 + 0x168) != '\x01') || (fVar17 < *(float *)(lVar3 + 0x16c))) {
    lVar8 = FUN_1449e3f1e();
    if (lVar8 != 0) {
      local_a0 = *(undefined4 **)(lVar3 + 0x18);
      FUN_1400021e4(&local_a0,&local_b8);
      puVar14 = local_b8;
      if ((int)local_b0 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      FUN_140056680(local_d0,puVar14);
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
      }
      FUN_14084feb6(&local_c0,lVar9,local_d0);
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar13 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        lVar12 = *(longlong *)(in_stack_00000030 + 0x10);
        lVar4 = *(longlong *)(in_stack_00000030 + 0x18);
        lVar9 = *(longlong *)(in_stack_00000030 + 0x20);
        plVar15 = local_c0 + 0x28;
        uVar7 = *(uint *)((longlong)local_c0 + 0x1d4);
        iVar16 = 0;
        *(undefined4 *)(local_c0 + 0x3a) = 0;
        if ((int)uVar7 < 0) {
          FUN_147f80112(plVar15,0);
          iVar16 = (int)plVar13[0x3a];
          uVar7 = *(uint *)((longlong)plVar13 + 0x1d4);
        }
        *(undefined1 *)((longlong)plVar13 + 0x26c) = 0;
        *(uint *)(plVar13 + 0x3a) = iVar16 + 1U;
        if (uVar7 < iVar16 + 1U) {
          FUN_140089f7a(plVar15,iVar16);
        }
        if ((longlong *)plVar13[0x38] != (longlong *)0x0) {
          plVar15 = (longlong *)plVar13[0x38];
        }
        lVar10 = (longlong)iVar16;
        plVar15[lVar10 * 0x10] = 0;
        (plVar15 + lVar10 * 0x10)[1] = 0;
        plVar1 = plVar15 + lVar10 * 0x10 + 2;
        *(undefined4 *)plVar1 = 0;
        *(undefined4 *)((longlong)plVar1 + 4) = 0;
        *(undefined4 *)(plVar1 + 1) = 0;
        *(undefined4 *)((longlong)plVar1 + 0xc) = 0x3ff00000;
        plVar15[lVar10 * 0x10 + 4] = lVar12;
        (plVar15 + lVar10 * 0x10 + 4)[1] = lVar4;
        plVar15[lVar10 * 0x10 + 6] = lVar9;
        (plVar15 + lVar10 * 0x10 + 6)[1] = 0;
        plVar1 = plVar15 + lVar10 * 0x10 + 8;
        *(undefined4 *)plVar1 = 0;
        *(undefined4 *)((longlong)plVar1 + 4) = 0x3ff00000;
        *(undefined4 *)(plVar1 + 1) = 0;
        *(undefined4 *)((longlong)plVar1 + 0xc) = 0x3ff00000;
        plVar15[lVar10 * 0x10 + 10] = 0x3ff0000000000000;
        (plVar15 + lVar10 * 0x10 + 10)[1] = 0;
        plVar15[lVar10 * 0x10 + 0xc] = 0x3f800000;
        *(undefined2 *)(plVar15 + lVar10 * 0x10 + 0xd) = 0;
        *(undefined8 *)((longlong)plVar15 + lVar10 * 0x80 + 0x6c) = 0;
        FUN_1447906c0(plVar13,0);
        plVar13 = local_c0;
        lVar9 = *(longlong *)(lVar8 + 0x3a0);
        if (lVar9 == 0) {
          uVar11 = FUN_1407f787c();
          lVar9 = FUN_14477b664(uVar11);
          *(longlong *)(lVar8 + 0x3a0) = lVar9;
        }
        lVar12 = *(longlong *)(lVar8 + 0x3a8);
        if (((lVar12 == 0) && (lVar12 = 0, lVar9 != 0)) && (*(longlong *)(lVar8 + 0x398) != 0)) {
          plVar15 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
            lVar12 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar8 + 0x398));
          }
          *(longlong *)(lVar8 + 0x3a8) = lVar12;
        }
        local_f8 = local_f8 & 0xffffff00;
        FUN_1447997cc(plVar13,lVar12,fVar17,0);
        plVar13 = local_c0;
        local_a0 = &local_94;
        local_94 = 0;
        local_b8 = (undefined2 *)&LAB_14362051c;
        local_b0 = &local_a0;
        FUN_1448e6002(param_1 + 0x548);
        uVar5 = local_94;
        lVar9 = *(longlong *)(lVar8 + 0x3b8);
        if (lVar9 == 0) {
          uVar11 = FUN_1407f787c();
          lVar9 = FUN_14477b664(uVar11);
          *(longlong *)(lVar8 + 0x3b8) = lVar9;
        }
        lVar12 = *(longlong *)(lVar8 + 0x3c0);
        if (((lVar12 == 0) && (lVar12 = 0, lVar9 != 0)) && (*(longlong *)(lVar8 + 0x3b0) != 0)) {
          plVar15 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 == '\0')) {
            lVar12 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar8 + 0x3b0));
          }
          *(longlong *)(lVar8 + 0x3c0) = lVar12;
        }
        local_f8 = local_f8 & 0xffffff00;
        FUN_1447997cc(plVar13,lVar12,uVar5,0);
        if (*(char *)(lVar3 + 0x138) == '\x01') {
          lVar8 = *(longlong *)(lVar3 + 0x148);
          if (lVar8 == 0) {
            uVar11 = FUN_140067708();
            lVar8 = FUN_14477b664(uVar11);
            *(longlong *)(lVar3 + 0x148) = lVar8;
          }
          local_a8 = *(double *)(lVar3 + 0x150);
          if (((local_a8 == 0.0) && (local_a8 = 0.0, lVar8 != 0)) &&
             (*(longlong *)(lVar3 + 0x140) != 0)) {
            plVar13 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar13 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar6 == '\0')) {
              local_a8 = 0.0;
            }
            else {
              uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
              local_a8 = (double)FUN_144aff482(uVar11,(longlong *)(lVar3 + 0x140));
            }
            *(double *)(lVar3 + 0x150) = local_a8;
          }
        }
        else {
          uVar11 = FUN_14034b308(param_1 + 0x410);
          FUN_1415c55d4(lVar8,&local_b8,uVar11);
          if (local_b0 == (undefined4 **)0x0) {
            uVar11 = FUN_140067708();
            local_b0 = (undefined4 **)FUN_14477b664(uVar11);
          }
          if (((local_a8 == 0.0) && (local_a8 = 0.0, local_b0 != (undefined4 **)0x0)) &&
             (local_b8 != (undefined2 *)0x0)) {
            plVar13 = (longlong *)local_b0[0x17];
            if ((plVar13 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar6 == '\0')) {
              local_a8 = 0.0;
            }
            else {
              uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
              local_a8 = (double)FUN_144aff482(uVar11,&local_b8);
            }
          }
        }
        local_f8 = 0;
        FUN_14084a448(local_c0,&local_e8,local_a8,*(undefined8 *)(param_1 + 0xa8));
        local_e8 = 0;
        local_e0 = 0xffffffffffffffff;
        if (((local_c0 != (longlong *)0x0) &&
            (*(int *)(local_c0 + 0x21) = (int)local_c0[0x21] + -1, (int)local_c0[0x26] < 1)) &&
           (FUN_1400847bc(local_c0 + 0x17,0), (int)local_c0[0x21] == 0)) {
          FUN_140087e46(local_c0);
          if (*local_c0 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140d30d53;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_c0);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_c0);
          }
        }
      }
    }
LAB_140d30d53:
    if ((*(longlong *)(param_1 + 0x768) != 0) &&
       (plVar13 = *(longlong **)(param_1 + 0x770), plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,param_1 + 0x718,in_stack_00000030,fVar17);
    }
  }
  else {
    lVar3 = DAT_14cb24ad0;
    if (DAT_14cb24ad0 == 0) {
      plVar13 = (longlong *)FUN_145a7712c();
      lVar3 = plVar13[0x22];
      if (plVar13[0x22] == 0) {
        (**(code **)(*plVar13 + 1000))(plVar13);
        lVar3 = plVar13[0x22];
      }
    }
    DAT_14cb24ad0 = lVar3;
    (**(code **)(*(longlong *)(param_1 + 0x718) + 0x20))
              (param_1 + 0x718,in_stack_00000030 + 0x10,*(undefined4 *)(DAT_14cb24ad0 + 0x50),
               *(undefined4 *)(DAT_14cb24ad0 + 0x4c));
  }
  *(double *)(param_1 + 0x750) = (double)(float)dVar2;
LAB_140d30d85:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d30eb0 FUN_140d30eb0 body=6716 status=ok
// SIG undefined FUN_140d30eb0(void)

undefined8 FUN_140d30eb0(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *_Dst;
  char cVar9;
  undefined2 uVar10;
  uint uVar11;
  int *piVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  void *pvVar19;
  int *piVar20;
  longlong *plVar21;
  void *pvVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  int iVar34;
  undefined4 *puVar35;
  undefined1 auStack_258 [36];
  int local_234;
  undefined8 *local_230;
  ulonglong local_228;
  int local_21c;
  void *local_218;
  void *local_210;
  void *local_208;
  void *local_200;
  void *local_1f8;
  void *local_1f0;
  void *local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_190;
  undefined4 local_188;
  uint uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (((byte *)*param_2 == (byte *)0x0) || ((~*(byte *)*param_2 & 3) != 0)) goto LAB_140d31d2c;
  *(undefined1 *)(param_1 + 0xb) = 1;
  piVar12 = &DAT_14c9485f0;
  if ((int *)param_1[1] != (int *)0x0) {
    piVar12 = (int *)param_1[1];
  }
  piVar20 = (int *)&DAT_14c948618;
  if (((*piVar12 != 0) && (iVar23 = piVar12[1], iVar23 != 0)) && (*piVar12 != DAT_14c948000)) {
    if ((iVar23 < 2) && (piVar12[9] < 1)) {
      piVar12 = piVar12 + 2;
    }
    else {
      piVar12 = *(int **)(piVar12 + 6);
    }
    piVar20 = (int *)&DAT_14c948618;
    if (0 < iVar23) {
      piVar20 = piVar12;
    }
  }
  local_230 = param_2;
  if (*piVar20 != 0) {
    local_1b0 = DAT_14cb86338;
    local_1b8 = DAT_14cb86330;
    FUN_1448075d0(&local_190);
    pbVar4 = (byte *)*param_2;
    if (pbVar4 != (byte *)0x0) {
      if ((*pbVar4 & 2) == 0) {
        plVar21 = &DAT_14c9a1288;
      }
      else {
        plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
      }
      if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
        plVar14 = plVar21 + 8;
        if ((longlong *)plVar21[9] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar21[9];
        }
        iVar23 = *(int *)((longlong)plVar14 +
                         (ulonglong)((int)plVar21[10] - 1U & (uint)local_190) * 4);
        if (iVar23 != -1) {
          do {
            lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
            if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_190) {
              if (((lVar33 != 0) &&
                  (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar25 != (byte *)0x0 && ((*(byte *)*puVar25 & 0x40) == 0))))
              goto LAB_140d31006;
              break;
            }
            iVar23 = *(int *)(lVar33 + 0x38);
          } while (iVar23 != -1);
        }
      }
    }
    puVar25 = &DAT_14c9a1308;
LAB_140d31006:
    plVar21 = param_1 + 0xe;
    pbVar4 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc80);
    if ((*pbVar4 & 1) == 0) {
      pbVar5 = (byte *)*puVar25;
      puVar13 = &DAT_14c9a1270;
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
        puVar13 = *(undefined8 **)(pbVar5 + 8);
      }
      FUN_140d32990(plVar21,*(undefined4 *)(puVar13 + 2));
    }
    else {
      puVar35 = (undefined4 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc7c);
      uVar3 = *puVar35;
      *pbVar4 = 0;
      *puVar35 = 0xffffffff;
      pbVar5 = (byte *)*puVar25;
      puVar13 = &DAT_14c9a1270;
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
        puVar13 = *(undefined8 **)(pbVar5 + 8);
      }
      FUN_140d32990(plVar21,*(undefined4 *)(puVar13 + 2));
      *puVar35 = uVar3;
      *pbVar4 = 1;
    }
    puVar13 = local_230;
    pbVar5 = (byte *)*puVar25;
    plVar14 = &DAT_14c9a1270;
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
      plVar14 = *(longlong **)(pbVar5 + 8);
    }
    if ((longlong)(int)plVar14[2] != 0) {
      lVar33 = *plVar14;
      lVar26 = (longlong)(int)plVar14[2] << 4;
      do {
        iVar23 = (int)param_1[0xf];
        *(uint *)(param_1 + 0xf) = iVar23 + 1U;
        if (*(uint *)((longlong)param_1 + 0x7c) < iVar23 + 1U) {
          FUN_148911d32(plVar21,iVar23);
        }
        lVar31 = *plVar21;
        lVar18 = (longlong)iVar23 * 0x60;
        puVar25 = (undefined8 *)(lVar31 + 0x10 + lVar18);
        *puVar25 = 0;
        puVar25[1] = 0;
        *(undefined8 *)(lVar31 + lVar18) = 0;
        ((undefined8 *)(lVar31 + lVar18))[1] = 0;
        *(undefined8 *)(lVar31 + 0x20 + lVar18) = 0;
        *(undefined ***)(lVar31 + 0x28 + lVar18) = &PTR_FUN_14b00be10;
        puVar25 = (undefined8 *)(lVar31 + 0x30 + lVar18);
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = (undefined8 *)(lVar31 + 0x40 + lVar18);
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = (undefined8 *)(lVar31 + 0x50 + lVar18);
        *puVar25 = 0;
        puVar25[1] = 0;
        uVar15 = FUN_140db5582();
        FUN_1446e7478(lVar33,lVar31 + lVar18,uVar15,0);
        lVar33 = lVar33 + 0x10;
        lVar26 = lVar26 + -0x10;
      } while (lVar26 != 0);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    local_1b0 = DAT_14cb86350;
    local_1b8 = DAT_14cb86348;
    FUN_1448075d0(&local_190);
    pbVar5 = (byte *)*puVar13;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar21 = &DAT_14c9a1288;
      }
      else {
        plVar21 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
        plVar14 = plVar21 + 8;
        if ((longlong *)plVar21[9] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar21[9];
        }
        iVar23 = *(int *)((longlong)plVar14 +
                         (ulonglong)((int)plVar21[10] - 1U & (uint)local_190) * 4);
        if (iVar23 != -1) {
          do {
            lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
            if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_190) {
              if ((((lVar33 != 0) &&
                   (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar25 != (byte *)0x0)) && ((*(byte *)*puVar25 & 0x40) == 0))
              goto LAB_140d311d5;
              break;
            }
            iVar23 = *(int *)(lVar33 + 0x38);
          } while (iVar23 != -1);
        }
      }
    }
    puVar25 = &DAT_14c9a1308;
LAB_140d311d5:
    plVar21 = param_1 + 0xc;
    if ((*pbVar4 & 1) == 0) {
      FUN_140d329d6(plVar21);
    }
    else {
      puVar35 = (undefined4 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc7c);
      uVar3 = *puVar35;
      *pbVar4 = 0;
      *puVar35 = 0xffffffff;
      FUN_140d329d6(plVar21);
      *puVar35 = uVar3;
      *pbVar4 = 1;
    }
    lVar33 = 0;
    lVar26 = 0;
    do {
      pbVar4 = (byte *)*puVar25;
      if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 2) == 0)) {
        plVar14 = &DAT_14c9a1270;
        if (DAT_14c9a1280 <= lVar26) goto LAB_140d313ee;
      }
      else {
        if (*(int *)(*(longlong *)(pbVar4 + 8) + 0x10) <= lVar26) goto LAB_140d313ee;
        plVar14 = *(longlong **)(pbVar4 + 8);
      }
      lVar31 = *plVar14;
      lVar18 = param_1[0xd];
      uVar11 = (int)lVar18 + 1;
      *(uint *)(param_1 + 0xd) = uVar11;
      if (*(uint *)((longlong)param_1 + 0x6c) < uVar11) {
        FUN_148911dc6(plVar21);
      }
      puVar35 = (undefined4 *)((longlong)(int)lVar18 * 0xc0 + *plVar21);
      memset(puVar35,0,0xc0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      plVar14 = DAT_14c844840;
      *(longlong **)(puVar35 + 4) = DAT_14c844840;
      if (plVar14 != (longlong *)0x0) {
        if (*(code **)(*plVar14 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*plVar14 + 8))();
        }
      }
      puVar35[6] = 0;
      *(undefined2 *)(puVar35 + 8) = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      plVar14 = DAT_14c844840;
      *(longlong **)(puVar35 + 10) = DAT_14c844840;
      if (plVar14 != (longlong *)0x0) {
        if (*(code **)(*plVar14 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*plVar14 + 8))();
        }
      }
      puVar35[0xc] = 0;
      *(undefined2 *)(puVar35 + 0xe) = 0;
      *(undefined1 *)(puVar35 + 0x10) = 0;
      *(undefined ***)(puVar35 + 0x12) = &PTR_FUN_14b00be10;
      *(undefined8 *)((longlong)puVar35 + 0x79) = 0;
      *(undefined8 *)((longlong)puVar35 + 0x81) = 0;
      *(undefined8 *)(puVar35 + 0x1c) = 0;
      *(undefined8 *)(puVar35 + 0x1e) = 0;
      *(undefined8 *)(puVar35 + 0x18) = 0;
      *(undefined8 *)(puVar35 + 0x1a) = 0;
      *(undefined8 *)(puVar35 + 0x14) = 0;
      *(undefined8 *)(puVar35 + 0x16) = 0;
      uVar15 = DAT_14c8464e8;
      *(undefined8 *)(puVar35 + 0x24) = DAT_14c8464e0;
      *(undefined8 *)(puVar35 + 0x26) = uVar15;
      *(undefined8 *)(puVar35 + 0x28) = DAT_14c8464f0;
      uVar8 = DAT_14c846500._4_4_;
      uVar7 = (undefined4)DAT_14c846500;
      uVar3 = DAT_14c8464f8._4_4_;
      puVar35[0x2a] = (undefined4)DAT_14c8464f8;
      puVar35[0x2b] = uVar3;
      puVar35[0x2c] = uVar7;
      puVar35[0x2d] = uVar8;
      *(undefined8 *)(puVar35 + 0x2e) = DAT_14c846508;
      uVar15 = FUN_1407db92c();
      FUN_1446e7478(lVar31 + lVar33,puVar35,uVar15);
      lVar26 = lVar26 + 1;
      *puVar35 = (int)lVar26;
      lVar33 = lVar33 + 0x10;
    } while( true );
  }
  goto LAB_140d315de;
LAB_140d313ee:
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  local_188 = DAT_14cb86368;
  local_190 = DAT_14cb86360;
  FUN_1448075d0(&local_1b8);
  param_2 = local_230;
  pbVar4 = (byte *)*local_230;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar21 = &DAT_14c9a1288;
    }
    else {
      plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
      plVar14 = plVar21 + 8;
      if ((longlong *)plVar21[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar21[9];
      }
      iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar21[10] - 1U & (uint)local_1b8) * 4
                       );
      if (iVar23 != -1) {
        do {
          lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
          if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_1b8) {
            if (((lVar33 != 0) &&
                (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
               (((byte *)*puVar25 != (byte *)0x0 && ((*(byte *)*puVar25 & 0x40) == 0))))
            goto LAB_140d314a4;
            break;
          }
          iVar23 = *(int *)(lVar33 + 0x38);
        } while (iVar23 != -1);
      }
    }
  }
  puVar25 = &DAT_14c9a1308;
LAB_140d314a4:
  plVar21 = param_1 + 0x10;
  pbVar4 = (byte *)*puVar25;
  if (pbVar4 == (byte *)0x0) {
LAB_140d314b7:
    FUN_140d32de3(param_1[0x10],(int)param_1[0x11]);
    *(undefined4 *)(param_1 + 0x11) = 0;
    lVar33 = local_178;
    if (*(int *)((longlong)param_1 + 0x8c) != 0) {
      FUN_140d32ed6(plVar21,0);
      lVar33 = local_178;
    }
  }
  else if ((*pbVar4 & 0x6b) == 2) {
    iVar23 = *(int *)(*(longlong *)(pbVar4 + 8) + 0x10);
    FUN_140d32d9e(plVar21,iVar23);
    FUN_140d33130(plVar21,iVar23);
    lVar33 = local_178;
    if (0 < (longlong)iVar23) {
      lVar26 = 0;
      lVar31 = 0;
      do {
        uVar15 = FUN_1405a29be();
        plVar14 = &DAT_14c9a1270;
        if ((*(byte *)*puVar25 & 2) != 0) {
          plVar14 = *(longlong **)((byte *)*puVar25 + 8);
        }
        FUN_1446e7478(*plVar14 + lVar26,*plVar21 + lVar31,uVar15,0);
        lVar31 = lVar31 + 0x30;
        lVar26 = lVar26 + 0x10;
        lVar33 = local_178;
      } while ((longlong)iVar23 * 0x30 != lVar31);
    }
  }
  else {
    if ((*pbVar4 & 0x6b) != 3) goto LAB_140d314b7;
    lVar33 = FUN_1415a93e0();
    iVar23 = *(int *)(lVar33 + 0x10) - *(int *)(lVar33 + 0x3c);
    FUN_140d32d9e(plVar21,iVar23);
    FUN_140d33130(plVar21,iVar23);
    plVar16 = (longlong *)FUN_1415a93e0(*puVar25);
    plVar14 = plVar16 + 3;
    local_1d8 = 0x100000000;
    local_1c8 = 0xffffffff;
    uStack_1c0 = 0;
    uStack_1d0 = plVar14;
    if ((int)plVar16[6] == 0) {
      iVar23 = 0;
    }
    else {
      FUN_1449c0562(&local_1d8);
      iVar23 = (int)plVar16[6];
    }
    uStack_170 = CONCAT44(uStack_1bc,uStack_1c0);
    local_178 = local_1c8;
    lVar33 = local_178;
    local_188 = (undefined4)local_1d8;
    uStack_184 = local_1d8._4_4_;
    uStack_180 = (undefined4)uStack_1d0;
    uStack_17c = uStack_1d0._4_4_;
    local_178._4_4_ = (int)((ulonglong)local_1c8 >> 0x20);
    local_190 = plVar16;
    if ((local_178._4_4_ != iVar23) || (param_2 = local_230, uStack_1d0 != plVar14)) {
      lVar26 = 0;
      iVar24 = local_178._4_4_;
      local_178 = lVar33;
      do {
        lVar33 = *local_190;
        uVar15 = FUN_1405a29be();
        FUN_1446e7478((longlong)iVar24 * 0x40 + lVar33 + 0x28,*plVar21 + lVar26,uVar15,0);
        local_178 = CONCAT44(local_178._4_4_,(uint)local_178 & ~uStack_184);
        FUN_1449c0562(&local_188);
        lVar26 = lVar26 + 0x30;
        param_2 = local_230;
        iVar24 = local_178._4_4_;
        lVar33 = local_178;
      } while (local_190 != plVar16 ||
               ((longlong *)CONCAT44(uStack_17c,uStack_180) != plVar14 || local_178._4_4_ != iVar23)
              );
    }
  }
  local_178 = lVar33;
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  local_188 = DAT_14cb86380;
  local_190 = DAT_14cb86378;
  FUN_1448075d0(&local_1b8);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar21 = &DAT_14c9a1288;
    }
    else {
      plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
      plVar14 = plVar21 + 8;
      if ((longlong *)plVar21[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar21[9];
      }
      iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar21[10] - 1U & (uint)local_1b8) * 4
                       );
      if (iVar23 != -1) {
        do {
          lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
          if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_1b8) {
            if ((((lVar33 != 0) &&
                 (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                ((byte *)*puVar25 != (byte *)0x0)) && ((*(byte *)*puVar25 & 0x40) == 0))
            goto LAB_140d31591;
            break;
          }
          iVar23 = *(int *)(lVar33 + 0x38);
        } while (iVar23 != -1);
      }
    }
  }
  puVar25 = &DAT_14c9a1308;
LAB_140d31591:
  plVar21 = param_1 + 0x71;
  pbVar4 = (byte *)*puVar25;
  if (pbVar4 == (byte *)0x0) {
LAB_140d315a4:
    FUN_140d32e71(param_1[0x71],(int)param_1[0x72]);
    *(undefined4 *)(param_1 + 0x72) = 0;
    lVar33 = local_178;
    if (*(int *)((longlong)param_1 + 0x394) != 0) {
      FUN_140d32fbe(plVar21,0);
      lVar33 = local_178;
    }
  }
  else if ((*pbVar4 & 0x6b) == 2) {
    iVar23 = *(int *)(*(longlong *)(pbVar4 + 8) + 0x10);
    FUN_140d32e2c(plVar21,iVar23);
    FUN_140d330a0(plVar21,iVar23);
    lVar33 = local_178;
    if (0 < (longlong)iVar23) {
      lVar26 = 0;
      do {
        uVar15 = FUN_140d328f2();
        plVar14 = &DAT_14c9a1270;
        if ((*(byte *)*puVar25 & 2) != 0) {
          plVar14 = *(longlong **)((byte *)*puVar25 + 8);
        }
        FUN_1446e7478(*plVar14 + lVar26,*plVar21 + lVar26,uVar15,0);
        lVar26 = lVar26 + 0x10;
        lVar33 = local_178;
      } while ((longlong)iVar23 * 0x10 != lVar26);
    }
  }
  else {
    if ((*pbVar4 & 0x6b) != 3) goto LAB_140d315a4;
    lVar33 = FUN_1415a93e0();
    iVar23 = *(int *)(lVar33 + 0x10) - *(int *)(lVar33 + 0x3c);
    FUN_140d32e2c(plVar21,iVar23);
    FUN_140d330a0(plVar21,iVar23);
    plVar16 = (longlong *)FUN_1415a93e0(*puVar25);
    plVar14 = plVar16 + 3;
    local_1d8 = 0x100000000;
    local_1c8 = 0xffffffff;
    uStack_1c0 = 0;
    uStack_1d0 = plVar14;
    if ((int)plVar16[6] == 0) {
      iVar23 = 0;
    }
    else {
      FUN_1449c0562(&local_1d8);
      iVar23 = (int)plVar16[6];
    }
    uStack_170 = CONCAT44(uStack_1bc,uStack_1c0);
    local_178 = local_1c8;
    lVar33 = local_178;
    local_188 = (undefined4)local_1d8;
    uStack_184 = local_1d8._4_4_;
    uStack_180 = (undefined4)uStack_1d0;
    uStack_17c = uStack_1d0._4_4_;
    local_178._4_4_ = (int)((ulonglong)local_1c8 >> 0x20);
    local_190 = plVar16;
    if ((local_178._4_4_ != iVar23) || (param_2 = local_230, uStack_1d0 != plVar14)) {
      lVar26 = 0;
      iVar24 = local_178._4_4_;
      local_178 = lVar33;
      do {
        lVar33 = *local_190;
        uVar15 = FUN_140d328f2();
        FUN_1446e7478((longlong)iVar24 * 0x40 + lVar33 + 0x28,*plVar21 + lVar26,uVar15,0);
        local_178 = CONCAT44(local_178._4_4_,(uint)local_178 & ~uStack_184);
        FUN_1449c0562(&local_188);
        lVar26 = lVar26 + 0x10;
        param_2 = local_230;
        iVar24 = local_178._4_4_;
        lVar33 = local_178;
      } while (local_190 != plVar16 ||
               ((longlong *)CONCAT44(uStack_17c,uStack_180) != plVar14 || local_178._4_4_ != iVar23)
              );
    }
  }
  local_178 = lVar33;
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
LAB_140d315de:
  local_188 = DAT_14cb86398;
  local_190 = DAT_14cb86390;
  FUN_1448075d0(&local_1b8);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar21 = &DAT_14c9a1288;
    }
    else {
      plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
      plVar14 = plVar21 + 8;
      if ((longlong *)plVar21[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar21[9];
      }
      iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar21[10] - 1U & (uint)local_1b8) * 4
                       );
      if (iVar23 != -1) {
        do {
          lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
          if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_1b8) {
            if ((((lVar33 != 0) &&
                 (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                ((byte *)*puVar25 != (byte *)0x0)) && ((*(byte *)*puVar25 & 0x40) == 0))
            goto LAB_140d3167a;
            break;
          }
          iVar23 = *(int *)(lVar33 + 0x38);
        } while (iVar23 != -1);
      }
    }
  }
  puVar25 = &DAT_14c9a1308;
LAB_140d3167a:
  plVar21 = param_1 + 0x14;
  pbVar4 = (byte *)*puVar25;
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 2)) {
    iVar23 = *(int *)((longlong)param_1 + 0xac);
    FUN_140d3292b(param_1[0x14],(int)param_1[0x15]);
    *(undefined4 *)(param_1 + 0x15) = 0;
    if ((iVar23 < 0) && (*(int *)((longlong)param_1 + 0xac) != 0)) {
      FUN_140d331dc(plVar21,0);
    }
  }
  else {
    lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(byte *)(lVar33 + 0xc80) & 1) == 0) {
      FUN_140d32b88(plVar21,*(undefined4 *)(*(longlong *)(pbVar4 + 8) + 0x10));
    }
    else {
      puVar1 = (undefined1 *)(lVar33 + 0xc80);
      puVar35 = (undefined4 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc7c);
      uVar3 = *puVar35;
      *puVar1 = 0;
      *puVar35 = 0xffffffff;
      if ((*pbVar4 & 2) == 0) {
        puVar13 = &DAT_14c9a1270;
      }
      else {
        puVar13 = *(undefined8 **)(pbVar4 + 8);
      }
      FUN_140d32b88(plVar21,*(undefined4 *)(puVar13 + 2));
      *puVar35 = uVar3;
      *puVar1 = 1;
    }
    param_2 = local_230;
    pbVar4 = (byte *)*puVar25;
    plVar14 = &DAT_14c9a1270;
    if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
      plVar14 = *(longlong **)(pbVar4 + 8);
    }
    if ((longlong)(int)plVar14[2] != 0) {
      lVar33 = *plVar14;
      lVar26 = (longlong)(int)plVar14[2] << 4;
      do {
        uVar15 = FUN_140d32956();
        iVar23 = (int)param_1[0x15];
        *(uint *)(param_1 + 0x15) = iVar23 + 1U;
        if (*(uint *)((longlong)param_1 + 0xac) < iVar23 + 1U) {
          FUN_14891853e(plVar21,iVar23);
        }
        lVar31 = (longlong)iVar23 * 0x130 + *plVar21;
        thunk_FUN_140bbb4fa(lVar31);
        FUN_1446e7478(lVar33,lVar31,uVar15,0);
        lVar33 = lVar33 + 0x10;
        lVar26 = lVar26 + -0x10;
      } while (lVar26 != 0);
    }
    iVar23 = (int)param_1[0x15];
    uVar32 = (ulonglong)iVar23;
    if (0 < (longlong)uVar32) {
      pvVar19 = (void *)param_1[0x14];
      uVar27 = 0;
      pvVar22 = pvVar19;
      do {
        if ((uVar27 + 1 < uVar32) &&
           (*(int *)((longlong)pvVar22 + 0x13c) < *(int *)((longlong)pvVar22 + 0xc))) {
          memcpy(&local_190,pvVar22,0x130);
          memcpy(pvVar22,(void *)((longlong)pvVar22 + 0x130),0x130);
          memcpy((void *)((longlong)pvVar22 + 0x130),&local_190,0x130);
        }
        uVar27 = uVar27 + 2;
        pvVar22 = (void *)((longlong)pvVar22 + 0x260);
      } while (uVar27 < uVar32);
      if (2 < iVar23) {
        iVar24 = 2;
        local_200 = pvVar19;
        do {
          iVar28 = iVar24 * 2;
          local_1e0 = (longlong)iVar28;
          lVar33 = 0;
          pvVar22 = pvVar19;
          local_21c = iVar28;
          do {
            iVar34 = iVar23 - (int)lVar33;
            if (iVar28 <= iVar34) {
              iVar34 = iVar28;
            }
            pvVar19 = pvVar22;
            if ((0 < iVar24) && (iVar24 < iVar34)) {
              iVar17 = 0;
              local_234 = iVar24;
              while( true ) {
                lVar26 = (longlong)local_234 * 0x130 + lVar33 * 0x130;
                iVar30 = 0;
                if (local_234 - iVar17 != 0 && iVar17 <= local_234) {
                  iVar30 = 0;
                  uVar11 = local_234 - iVar17;
                  do {
                    iVar28 = (uVar11 >> 1) + iVar30;
                    if (*(int *)((longlong)pvVar22 +
                                (longlong)iVar28 * 0x130 +
                                (longlong)iVar17 * 0x130 + lVar33 * 0x130 + 0xc) <=
                        *(int *)((longlong)pvVar22 + lVar26 + 0xc)) {
                      iVar30 = iVar28 + (uVar11 & 1);
                    }
                    bVar6 = 1 < uVar11;
                    uVar11 = uVar11 >> 1;
                  } while (bVar6);
                }
                iVar30 = iVar30 + iVar17;
                iVar17 = local_234 - iVar30;
                pvVar19 = local_200;
                param_2 = local_230;
                iVar28 = local_21c;
                if (iVar17 == 0 || local_234 < iVar30) break;
                uVar11 = iVar34 - local_234;
                if (uVar11 == 0 || iVar34 < local_234) {
                  local_228 = 0;
                }
                else {
                  local_218 = (void *)((longlong)pvVar22 + (longlong)iVar30 * 0x130 + lVar33 * 0x130
                                      );
                  local_228 = 0;
                  uVar27 = (ulonglong)uVar11;
                  do {
                    uVar27 = uVar27 >> 1;
                    uVar29 = (int)local_228 + (uint)uVar27;
                    if (*(int *)((longlong)pvVar22 + (ulonglong)uVar29 * 0x130 + lVar26 + 0xc) <
                        *(int *)((longlong)local_218 + 0xc)) {
                      local_228 = (ulonglong)(uVar29 + (uVar11 & 1));
                    }
                    bVar6 = 1 < uVar11;
                    uVar11 = (uint)uVar27;
                  } while (bVar6);
                  local_234 = local_234 + (int)local_228;
                  if (0 < (int)local_228) {
                    pvVar19 = (void *)((longlong)iVar17 * 0x130 + (longlong)local_218);
                    local_1f8 = (void *)((longlong)(local_234 - iVar30) * 0x130 +
                                        (longlong)local_218);
                    local_210 = pvVar19;
                    do {
                      while( true ) {
                        _Dst = local_218;
                        local_1e8 = (void *)((longlong)pvVar19 + 0x130);
                        local_208 = (void *)((longlong)local_218 + 0x130);
                        local_1f0 = pvVar19;
                        memcpy(&local_190,local_218,0x130);
                        pvVar19 = local_1f0;
                        memcpy(_Dst,local_1f0,0x130);
                        memcpy(pvVar19,&local_190,0x130);
                        if (local_1e8 == local_1f8) break;
                        if (local_208 == local_210) {
                          local_210 = local_1e8;
                        }
                        local_218 = (void *)((longlong)local_218 + 0x130);
                        pvVar19 = local_1e8;
                      }
                      local_218 = local_208;
                      pvVar19 = local_210;
                    } while (local_208 != local_210);
                  }
                }
                pvVar19 = local_200;
                param_2 = local_230;
                iVar28 = local_21c;
                if ((iVar34 <= local_234) ||
                   (iVar17 = (int)local_228 + iVar30 + 1, local_234 <= iVar17)) break;
              }
            }
            lVar33 = lVar33 + local_1e0;
            pvVar22 = pvVar19;
          } while (lVar33 < (longlong)uVar32);
          iVar24 = iVar28;
        } while (iVar28 < iVar23);
      }
    }
  }
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  uVar15 = (**(code **)(*param_1 + 8))(param_1);
  FUN_1402057ac(param_2,param_1,uVar15,0);
  local_1b0 = DAT_14cb863b0;
  local_1b8 = DAT_14cb863a8;
  FUN_1448075d0(&local_190);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar21 = &DAT_14c9a1288;
    }
    else {
      plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
      plVar14 = plVar21 + 8;
      if ((longlong *)plVar21[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar21[9];
      }
      iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar21[10] - 1U & (uint)local_190) * 4
                       );
      if (iVar23 != -1) {
        do {
          lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
          if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_190) {
            if ((((lVar33 != 0) &&
                 (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                ((byte *)*puVar25 != (byte *)0x0)) && ((*(byte *)*puVar25 & 0x40) == 0))
            goto LAB_140d319af;
            break;
          }
          iVar23 = *(int *)(lVar33 + 0x38);
        } while (iVar23 != -1);
      }
    }
  }
  puVar25 = &DAT_14c9a1308;
LAB_140d319af:
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar25 != (byte *)0x0) && ((~*(byte *)*puVar25 & 3) == 0)) {
    uVar15 = FUN_140d32e9c();
    FUN_1446e7478(puVar25,param_1 + 0xc6,uVar15,0);
  }
  if ((int)param_1[0xa9] == 0) {
    local_1b0 = DAT_14cb862b8;
    local_1b8 = DAT_14cb862b0;
    FUN_1448075d0(&local_190);
    pbVar4 = (byte *)*param_2;
    if (pbVar4 != (byte *)0x0) {
      if ((*pbVar4 & 2) == 0) {
        plVar21 = &DAT_14c9a1288;
      }
      else {
        plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
      }
      if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
        plVar14 = plVar21 + 8;
        if ((longlong *)plVar21[9] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar21[9];
        }
        iVar23 = *(int *)((longlong)plVar14 +
                         (ulonglong)((int)plVar21[10] - 1U & (uint)local_190) * 4);
        if (iVar23 != -1) {
          do {
            lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
            if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_190) {
              if (((lVar33 != 0) &&
                  (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar25 != (byte *)0x0 && ((*(byte *)*puVar25 & 0x40) == 0))))
              goto LAB_140d31a81;
              break;
            }
            iVar23 = *(int *)(lVar33 + 0x38);
          } while (iVar23 != -1);
        }
      }
    }
    puVar25 = &DAT_14c9a1308;
LAB_140d31a81:
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar25 != (byte *)0x0) && ((*(byte *)*puVar25 & 3) == 1)) {
      iVar23 = (int)param_1[0xa9];
      *(uint *)(param_1 + 0xa9) = iVar23 + 1U;
      if (*(uint *)((longlong)param_1 + 0x54c) < iVar23 + 1U) {
        FUN_140d332fc(param_1 + 0xa8,iVar23);
      }
      lVar33 = param_1[0xa8];
      lVar26 = (longlong)iVar23 * 0x30;
      puVar2 = (ulonglong *)(lVar33 + lVar26);
      *(undefined8 *)(lVar33 + lVar26) = 0;
      ((undefined8 *)(lVar33 + lVar26))[1] = 0;
      puVar13 = (undefined8 *)(lVar33 + 0x20 + lVar26);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13 = (undefined8 *)(lVar33 + 0x10 + lVar26);
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined4 *)(lVar33 + 8 + lVar26) = 0x6000;
      *(undefined4 *)(lVar33 + 0x20 + lVar26) = 0x6000;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1d8 = CONCAT35(local_1d8._5_3_,0x100006000);
      FUN_140008118(&local_190,puVar25);
      if ((*(longlong **)(lVar33 + lVar26) != local_190) || ((int)puVar2[1] != 0x6000)) {
        *puVar2 = (ulonglong)local_190;
        *(undefined4 *)(puVar2 + 1) = 0x6000;
        puVar2[2] = 0;
      }
    }
  }
  local_1b0 = DAT_14cb862e8;
  local_1b8 = DAT_14cb862e0;
  FUN_1448075d0(&local_190);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar21 = &DAT_14c9a1288;
    }
    else {
      plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
      plVar14 = plVar21 + 8;
      if ((longlong *)plVar21[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar21[9];
      }
      iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar21[10] - 1U & (uint)local_190) * 4
                       );
      if (iVar23 != -1) {
        do {
          lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
          if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_190) {
            if ((((lVar33 != 0) &&
                 (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                ((byte *)*puVar25 != (byte *)0x0)) && ((*(byte *)*puVar25 & 0x40) == 0))
            goto LAB_140d31b46;
            break;
          }
          iVar23 = *(int *)(lVar33 + 0x38);
        } while (iVar23 != -1);
      }
    }
  }
  puVar25 = &DAT_14c9a1308;
LAB_140d31b46:
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if ((((byte *)*puVar25 != (byte *)0x0) && ((*(byte *)*puVar25 & 3) == 1)) &&
     (cVar9 = FUN_1410c4486(puVar25,0), cVar9 != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x751) = 2;
  }
  local_1b0 = DAT_14cb86300;
  local_1b8 = DAT_14cb862f8;
  FUN_1448075d0(&local_190);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar21 = &DAT_14c9a1288;
    }
    else {
      plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
      plVar14 = plVar21 + 8;
      if ((longlong *)plVar21[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar21[9];
      }
      iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar21[10] - 1U & (uint)local_190) * 4
                       );
      if (iVar23 != -1) {
        do {
          lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
          if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_190) {
            if (((lVar33 != 0) &&
                (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
               (((byte *)*puVar25 != (byte *)0x0 && ((*(byte *)*puVar25 & 0x40) == 0))))
            goto LAB_140d31c0b;
            break;
          }
          iVar23 = *(int *)(lVar33 + 0x38);
        } while (iVar23 != -1);
      }
    }
  }
  puVar25 = &DAT_14c9a1308;
LAB_140d31c0b:
  pbVar4 = (byte *)*puVar25;
  if (((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) ||
     (*(char **)(pbVar4 + 8) != "GeneratedMission")) {
    lVar33 = param_1[0x15];
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (0 < (int)lVar33) goto LAB_140d31c32;
  }
  else {
    param_2 = local_230;
    if (local_178 != 0) {
      FUN_1400020a8();
      param_2 = local_230;
    }
LAB_140d31c32:
    *(undefined1 *)(param_1 + 0xea) = 1;
  }
  local_1b0 = DAT_14cb86300;
  local_1b8 = DAT_14cb862f8;
  FUN_1448075d0(&local_190);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar21 = &DAT_14c9a1288;
    }
    else {
      plVar21 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
      plVar14 = plVar21 + 8;
      if ((longlong *)plVar21[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar21[9];
      }
      iVar23 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar21[10] - 1U & (uint)local_190) * 4
                       );
      if (iVar23 != -1) {
        do {
          lVar33 = *plVar21 + (longlong)iVar23 * 0x40;
          if (*(uint *)(*plVar21 + (longlong)iVar23 * 0x40) == (uint)local_190) {
            if (((lVar33 != 0) &&
                (puVar25 = (undefined8 *)(lVar33 + 0x28), puVar25 != (undefined8 *)0x0)) &&
               (((byte *)*puVar25 != (byte *)0x0 && ((*(byte *)*puVar25 & 0x40) == 0))))
            goto LAB_140d31cd9;
            break;
          }
          iVar23 = *(int *)(lVar33 + 0x38);
        } while (iVar23 != -1);
      }
    }
  }
  puVar25 = &DAT_14c9a1308;
LAB_140d31cd9:
  (**(code **)(*param_1 + 0x78))(param_1,puVar25);
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  lVar33 = DAT_14cb86da8 + 0x370;
  if ((DAT_14cb86314 == DAT_14c948034) && (DAT_14cb86310 != DAT_14c948030)) {
    FUN_14011791e(&local_190,DAT_14cb86310,(ulonglong)DAT_14cb86314 >> 0x20);
    DAT_14cb86314 = local_190;
  }
  uVar10 = FUN_144a69566(param_2,&DAT_14cb86314,lVar33);
  *(undefined2 *)((longlong)param_1 + 0x53a) = uVar10;
LAB_140d31d2c:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140d328ed thunk_FUN_140bbb4fa body=5 status=ok
// SIG undefined thunk_FUN_140bbb4fa(void)

ulonglong * thunk_FUN_140bbb4fa(ulonglong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [32];
  char *pcStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x500000000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (ulonglong)&DAT_14a171d50;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = (ulonglong)&DAT_14a171d50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x11) = 8;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0xb;
  uVar2 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar2 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x13) = uVar2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x18) = 8;
  *(undefined1 *)(param_1 + 0x19) = 0xb;
  uVar2 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar2 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x1a) = uVar2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 8;
  *(undefined1 *)(param_1 + 0x20) = 0xb;
  uVar2 = 0xb;
  if ((DAT_14c9a9174 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  pcStack_28 = "NewChoice";
  uStack_20 = 9;
  uStack_1c = 0;
  uVar1 = FUN_14001a6c0(&pcStack_28,1);
  *param_1 = (ulonglong)uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 7,0);
  }
  param_1[6] = (ulonglong)&DAT_14cb70058;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_140115c12(param_1 + 0xb,0);
  }
  param_1[10] = (ulonglong)&DAT_14cb70058;
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d328f2 FUN_140d328f2 body=57 status=ok
// SIG undefined FUN_140d328f2(void)

void FUN_140d328f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c718 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c718 = FUN_140002ddd(FUN_14653208f,uVar1,L"MissionObjectiveSet");
  }
  return;
}



// FUNCTION 140d3292b FUN_140d3292b body=43 status=ok
// SIG undefined FUN_140d3292b(void)

void FUN_140d3292b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140ae6eec(param_1);
    param_1 = param_1 + 0x130;
  }
  return;
}



// FUNCTION 140d32956 FUN_140d32956 body=57 status=ok
// SIG undefined FUN_140d32956(void)

void FUN_140d32956(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6be20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6be20 = FUN_140002ddd(FUN_14652f624,uVar1,L"MissionChoice");
  }
  return;
}



// FUNCTION 140d32990 FUN_140d32990 body=69 status=ok
// SIG undefined FUN_140d32990(void)

void FUN_140d32990(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140d32ae8(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d32bce(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d329d6 FUN_140d329d6 body=69 status=ok
// SIG undefined FUN_140d329d6(void)

void FUN_140d329d6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140d32a1c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d32cb6(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d32a1c FUN_140d32a1c body=43 status=ok
// SIG undefined FUN_140d32a1c(void)

void FUN_140d32a1c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d32a48(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 140d32a48 FUN_140d32a48 body=160 status=ok
// SIG undefined FUN_140d32a48(void)

void FUN_140d32a48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d32ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140d32ae8 FUN_140d32ae8 body=160 status=ok
// SIG undefined FUN_140d32ae8(void)

void FUN_140d32ae8(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      FUN_140741dda(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(puVar1 + -0xc) = &PTR_FUN_14b00be10;
      FUN_14487da0a(*(undefined8 *)(puVar1 + -6),puVar1[-4]);
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      FUN_14487da48(*(undefined8 *)(puVar1 + -10),puVar1[-8]);
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      FUN_140741e11(*(undefined8 *)(puVar1 + -0x10),puVar1[-0xe]);
      if (*(longlong *)(puVar1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d32b88 FUN_140d32b88 body=69 status=ok
// SIG undefined FUN_140d32b88(void)

void FUN_140d32b88(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140d3292b(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d331dc(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d32bce FUN_140d32bce body=231 status=ok
// SIG undefined FUN_140d32bce(void)

void FUN_140d32bce(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 140d32cb6 FUN_140d32cb6 body=231 status=ok
// SIG undefined FUN_140d32cb6(void)

void FUN_140d32cb6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if (param_2 <= (int)(uVar1 / 0xc0)) {
      uVar2 = uVar1 / 0xc0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc0,8);
  }
  return;
}



// FUNCTION 140d32d9e FUN_140d32d9e body=69 status=ok
// SIG undefined FUN_140d32d9e(void)

void FUN_140d32d9e(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140d32de3(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d32ed6(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d32de3 FUN_140d32de3 body=73 status=ok
// SIG undefined FUN_140d32de3(void)

void FUN_140d32de3(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d32e2c FUN_140d32e2c body=69 status=ok
// SIG undefined FUN_140d32e2c(void)

void FUN_140d32e2c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140d32e71(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d32fbe(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140d32e71 FUN_140d32e71 body=43 status=ok
// SIG undefined FUN_140d32e71(void)

void FUN_140d32e71(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140d32e9c FUN_140d32e9c body=57 status=ok
// SIG undefined FUN_140d32e9c(void)

void FUN_140d32e9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cb18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cb18 = FUN_140002ddd(FUN_14653377b,uVar1,L"MissionStatesData");
  }
  return;
}



// FUNCTION 140d32ed6 FUN_140d32ed6 body=231 status=ok
// SIG undefined FUN_140d32ed6(void)

void FUN_140d32ed6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 140d32fbe FUN_140d32fbe body=226 status=ok
// SIG undefined FUN_140d32fbe(void)

void FUN_140d32fbe(longlong param_1,int param_2)

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



// FUNCTION 140d330a0 FUN_140d330a0 body=142 status=ok
// SIG undefined FUN_140d330a0(void)

void FUN_140d330a0(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_14891221e(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_1489122a4(param_1,param_2,iVar1 - param_2);
  FUN_1489122fe(param_1);
  return;
}



// FUNCTION 140d33130 FUN_140d33130 body=171 status=ok
// SIG undefined FUN_140d33130(void)

void FUN_140d33130(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_148912076(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xc) = DAT_14cb86b60;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2 = puVar2 + 6;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14891210a(param_1,param_2,iVar1 - param_2);
    FUN_148912170(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140d331dc FUN_140d331dc body=230 status=ok
// SIG undefined FUN_140d331dc(void)

void FUN_140d331dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x130;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if (param_2 <= (int)(uVar1 / 0x130)) {
      uVar2 = uVar1 / 0x130 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x130,8);
  }
  return;
}



// FUNCTION 140d332c2 FUN_140d332c2 body=57 status=ok
// SIG undefined FUN_140d332c2(void)

void FUN_140d332c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c068 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c068 = FUN_140002ddd(FUN_146530046,uVar1,L"MissionDisplayText");
  }
  return;
}



// FUNCTION 140d332fc FUN_140d332fc body=272 status=ok
// SIG undefined FUN_140d332fc(void)

void FUN_140d332fc(longlong param_1,int param_2)

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



// FUNCTION 140d3340c FUN_140d3340c body=73 status=ok
// SIG undefined FUN_140d3340c(void)

void FUN_140d3340c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef0850;
  FUN_140d33455(*(undefined8 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x210));
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 140d33455 FUN_140d33455 body=52 status=ok
// SIG undefined FUN_140d33455(void)

void FUN_140d33455(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140d3348a FUN_140d3348a body=322 status=ok
// SIG undefined FUN_140d3348a(void)

void FUN_140d3348a(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = param_2[1] ^ *param_2;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    uVar8 = (longlong)(int)(uVar4 * 0x40 + param_2[2] + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4) &
            (longlong)(int)param_1[9] - 1U;
    lVar10 = (longlong)*(int *)((longlong)plVar11 + uVar8 * 4);
    if (lVar10 != -1) {
      lVar9 = *param_1;
      lVar10 = lVar10 * 0x20;
      lVar5 = lVar9 + lVar10;
      cVar3 = FUN_1404853da(lVar5,param_2);
      if ((cVar3 == '\0') || (*(uint *)(lVar9 + 8 + lVar10) != param_2[2])) {
        do {
          lVar10 = lVar5;
          lVar9 = (longlong)*(int *)(lVar10 + 0x18);
          if (lVar9 == -1) {
            return;
          }
          lVar2 = *param_1;
          lVar9 = lVar9 * 0x20;
          lVar5 = lVar9 + lVar2;
          cVar3 = FUN_1404853da(lVar5,param_2);
        } while ((cVar3 == '\0') || (*(uint *)(lVar2 + 8 + lVar9) != param_2[2]));
        piVar7 = (int *)(lVar10 + 0x18);
      }
      else {
        piVar7 = (int *)((longlong)plVar11 + uVar8 * 4);
      }
      iVar1 = *piVar7;
      lVar10 = *param_1;
      plVar11 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[8];
      }
      lVar5 = (longlong)*(int *)(lVar10 + 0x1c + (longlong)iVar1 * 0x20);
      iVar6 = *(int *)((longlong)plVar11 + lVar5 * 4);
      if (iVar6 == iVar1) {
        piVar7 = (int *)((longlong)plVar11 + lVar5 * 4);
      }
      else {
        do {
          piVar7 = (int *)(lVar10 + (longlong)iVar6 * 0x20 + 0x18);
          iVar6 = *piVar7;
        } while (iVar6 != iVar1);
      }
      *piVar7 = *(int *)(lVar10 + (longlong)iVar1 * 0x20 + 0x18);
      FUN_140d335cc(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140d335cc FUN_140d335cc body=114 status=ok
// SIG undefined FUN_140d335cc(void)

void FUN_140d335cc(longlong *param_1,int param_2)

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



// FUNCTION 140d3363e FUN_140d3363e body=4701 status=ok
// SIG undefined FUN_140d3363e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d3363e(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 unaff_XMM12_Da;
  float fVar24;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM13_Da;
  float fVar25;
  undefined4 unaff_XMM13_Db;
  float fVar26;
  float fVar27;
  undefined4 unaff_XMM15_Da;
  float fVar28;
  undefined4 unaff_XMM15_Db;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined8 *local_330;
  undefined4 *local_328;
  uint local_320;
  undefined8 local_318;
  undefined4 local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  int local_2a8;
  float local_2a4;
  float local_2a0;
  uint local_29c;
  longlong local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined8 local_268;
  float local_25c;
  float local_258;
  float local_254;
  double local_250;
  undefined8 *local_248;
  longlong *local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c4;
  float local_1bc;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1ac;
  float local_1a4;
  undefined1 local_1a0 [8];
  longlong local_198;
  longlong local_190;
  undefined8 local_178 [17];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (*(longlong **)(param_1 + 0x2d8) == (longlong *)0x0) {
    local_268 = 0;
  }
  else {
    local_268 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x2f0))();
  }
  puVar1 = (undefined8 *)(param_1 + 0x100);
  cVar10 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xd8))
                     (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x218),local_178);
  if (cVar10 == '\0') {
    puVar17 = puVar1;
    puVar18 = local_178;
    for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  if ((*(longlong *)(param_1 + 0x2d0) != 0) && (lVar14 = FUN_1447b4020(), lVar14 != 0)) {
    local_29c = param_4;
    local_248 = puVar1;
    local_240 = param_2;
    if (*(char *)(param_1 + 0x2f1) == '\0') {
      if (0 < (int)param_2[1]) {
        iVar15 = *(int *)(*(longlong *)(param_1 + 0x2d0) + 0x140);
        iVar16 = *(int *)(*(longlong *)(param_1 + 0x2d0) + 0x144);
        fVar21 = -(float)-iVar16 * (float)*(double *)(param_1 + 0x2c0);
        fVar22 = -(float)-iVar15 * (float)*(double *)(param_1 + 0x2b8);
        fVar20 = -(1.0 - (float)*(double *)(param_1 + 0x2c0)) * (float)iVar16;
        fVar19 = -(1.0 - (float)*(double *)(param_1 + 0x2b8)) * (float)iVar15;
        lVar14 = 0;
        do {
          local_330 = (undefined8 *)0x0;
          local_338 = (undefined8 *)((ulonglong)local_338 & 0xffffffffffffff00);
          FUN_140d3493e(local_1a0,*(undefined4 *)(*(longlong *)(*param_2 + lVar14 * 8) + 0x3090),1,0
                       );
          if ((param_4 >> ((uint)lVar14 & 0x1f) & 1) != 0) {
            local_1ac = 0x3f800000;
            local_1a4 = 0.0;
            local_1b8 = 0;
            local_1b0 = -1.0;
            local_1c4 = 0xbf80000000000000;
            local_1bc = 0.0;
            local_1cc = (undefined1 *)0x0;
            local_1d8 = -0.0;
            local_328 = &DAT_149e1e2cc;
            local_330 = &local_1ac;
            local_338 = &local_1b8;
            local_1d4 = fVar22;
            local_1d0 = fVar21;
            uVar11 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
            local_308 = (double)CONCAT44(local_308._4_4_,uVar11);
            local_1ac = 0x3f800000;
            local_1a4 = 0.0;
            local_1b8 = 0;
            local_1b0 = -1.0;
            local_1c4 = 0xbf80000000000000;
            local_1bc = 0.0;
            local_1cc = (undefined1 *)0x3f80000000000000;
            local_1d8 = -0.0;
            local_328 = &DAT_149e1e2cc;
            local_330 = &local_1ac;
            local_338 = &local_1b8;
            local_1d4 = fVar22;
            local_1d0 = fVar20;
            uVar11 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
            local_1ac = 0x3f800000;
            local_1a4 = 0.0;
            local_1b8 = 0;
            local_1b0 = -1.0;
            local_1c4 = 0xbf80000000000000;
            local_1bc = 0.0;
            local_1cc = &DAT_3f8000003f800000;
            local_1d8 = -0.0;
            local_328 = &DAT_149e1e2cc;
            local_338 = &local_1b8;
            local_330 = &local_1ac;
            local_1d4 = fVar19;
            local_1d0 = fVar20;
            uVar12 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
            local_1ac = 0x3f800000;
            local_1a4 = 0.0;
            local_1b8 = 0;
            local_1b0 = -1.0;
            local_1c4 = 0xbf80000000000000;
            local_1bc = 0.0;
            local_1cc = (undefined1 *)0x3f800000;
            local_1d8 = -0.0;
            local_328 = &DAT_149e1e2cc;
            local_338 = &local_1b8;
            local_330 = &local_1ac;
            local_1d4 = fVar19;
            local_1d0 = fVar21;
            uVar13 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
            puVar1 = local_248;
            dVar2 = local_308;
            FUN_140d3489c(local_1a0,(ulonglong)local_308 & 0xffffffff,uVar11,uVar12);
            FUN_140d3489c(local_1a0,(ulonglong)dVar2 & 0xffffffff,uVar12,uVar13);
            local_1ac = CONCAT17(local_1ac._7_1_,0x101000001);
            local_318 = param_5;
            local_328 = (undefined4 *)0x0;
            local_330 = &local_1ac;
            local_338 = (undefined8 *)((ulonglong)local_338 & 0xffffffffffffff00);
            local_310 = 0xffffffff;
            local_320 = (uint)lVar14;
            FUN_140d351b2(local_1a0,puVar1,local_178);
          }
          param_2 = local_240;
          param_4 = local_29c;
          if (local_190 != 0) {
            (*(code *)**(undefined8 **)(local_190 + 8))(local_190 + 8,1);
          }
          if (local_198 != 0) {
            (*(code *)**(undefined8 **)(local_198 + 8))(local_198 + 8,1);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)param_2[1]);
      }
    }
    else {
      iVar15 = *(int *)(*(longlong *)(param_1 + 0x2d0) + 0x140);
      dVar2 = *(double *)(param_1 + 0x2b0);
      local_270 = cos(dVar2 * 0.5);
      dVar4 = sin(*(double *)(param_1 + 0x2b0) * 0.5);
      if (0 < (int)param_2[1]) {
        dVar5 = (double)iVar15 / dVar2;
        local_2a8 = (int)((dVar2 / 3.1415927410125732) * 28.0 + 4.0);
        local_208 = (0.5 - *(double *)(param_1 + 0x2b8)) * (dVar5 + dVar5) * dVar4;
        iVar15 = *(int *)(*(longlong *)(param_1 + 0x2d0) + 0x144);
        local_210 = (double)local_2a8;
        uVar3 = DAT_149931e80;
        local_1e8._8_4_ = unaff_XMM7_Dc;
        local_1e8._0_8_ = dVar5;
        local_1e8._12_4_ = unaff_XMM7_Dd;
        local_270 = local_270 * (double)((ulonglong)dVar5 ^ uVar3);
        local_25c = (float)local_2a8;
        dVar4 = (double)((ulonglong)(1.0 - *(double *)(param_1 + 0x2c0)) ^ uVar3) * (double)iVar15;
        local_2a0 = (float)dVar4;
        dVar2 = (double)((ulonglong)*(double *)(param_1 + 0x2c0) ^ uVar3) * (double)-iVar15;
        local_228._8_4_ = DAT_149931e80._8_4_;
        local_228._0_8_ = dVar4 - dVar2;
        local_228._12_4_ = DAT_149931e80._12_4_;
        local_2a4 = (float)dVar2;
        local_238._8_4_ = DAT_149931e80._8_4_;
        local_238._0_8_ = dVar2 - dVar2;
        local_238._12_4_ = DAT_149931e80._12_4_;
        local_298 = 0;
        do {
          lVar14 = local_298;
          local_330 = (undefined8 *)0x0;
          local_338 = (undefined8 *)((ulonglong)local_338 & 0xffffffffffffff00);
          FUN_140d3493e(local_1a0,*(undefined4 *)(*(longlong *)(*param_2 + local_298 * 8) + 0x3090),
                        1,0);
          if ((param_4 >> ((uint)lVar14 & 0x1f) & 1) != 0) {
            if (local_2a8 < 1) {
              local_2b8 = (double)CONCAT44(unaff_XMM12_Db,unaff_XMM12_Da);
              local_2b0 = local_2d8;
              local_300 = (double)CONCAT44(unaff_XMM13_Db,unaff_XMM13_Da);
              local_2e8 = (double)CONCAT44(unaff_XMM15_Db,unaff_XMM15_Da);
            }
            else {
              local_200 = *(double *)(param_1 + 0x2b0) / local_210;
              local_250 = 0.0;
              iVar15 = 0;
              do {
                dVar8 = local_250;
                dVar4 = local_250 * local_200 + *(double *)(param_1 + 0x2b0) * -0.5;
                dVar6 = local_200 + dVar4;
                dVar2 = cos(dVar4);
                dVar5 = local_270;
                uVar9 = local_1e8._0_8_;
                dVar7 = dVar2 * (double)local_1e8._0_8_ + local_270;
                dVar2 = sin(dVar4);
                dVar4 = cos(dVar6);
                dVar5 = dVar4 * (double)uVar9 + dVar5;
                dVar4 = sin(dVar6);
                local_250 = dVar8 + 1.0;
                dVar6 = dVar2 * (double)uVar9 + local_208;
                local_1f8 = dVar4 * (double)uVar9 + local_208;
                local_308 = dVar6 - local_1f8;
                local_2f0 = dVar7 - dVar5;
                dVar2 = (double)local_238._0_8_ * (double)local_238._0_8_ +
                        local_2f0 * local_2f0 + local_308 * local_308;
                if (dVar2 <= 9.99999993922529e-09) {
                  local_2e0 = (double)local_238._0_8_;
                }
                else {
                  local_2e0 = 1.0 / SQRT(dVar2);
                  local_2f0 = local_2f0 * local_2e0;
                  local_308 = local_308 * local_2e0;
                  local_2e0 = local_2e0 * (double)local_238._0_8_;
                }
                local_2f8 = dVar6 - dVar6;
                local_300 = dVar7 - dVar7;
                dVar2 = (double)local_228._0_8_ * (double)local_228._0_8_ +
                        local_300 * local_300 + local_2f8 * local_2f8;
                if (dVar2 <= 9.99999993922529e-09) {
                  local_2e8 = (double)local_228._0_8_;
                }
                else {
                  local_2e8 = 1.0 / SQRT(dVar2);
                  local_300 = local_300 * local_2e8;
                  local_2f8 = local_2f8 * local_2e8;
                  local_2e8 = local_2e8 * (double)local_228._0_8_;
                }
                fVar19 = (float)iVar15 / local_25c;
                iVar16 = iVar15 + 1;
                local_254 = (float)iVar16 / local_25c;
                local_2b0 = local_2f0 * local_2f8 - local_300 * local_308;
                local_2b8 = local_2e0 * local_300 - local_2e8 * local_2f0;
                local_2c0 = local_308 * local_2e8 - local_2f8 * local_2e0;
                dVar2 = (double)CONCAT44(unaff_XMM12_Db,unaff_XMM12_Da);
                if (iVar15 == 0) {
                  unaff_XMM13_Da = SUB84(local_300,0);
                  unaff_XMM13_Db = (undefined4)((ulonglong)local_300 >> 0x20);
                  local_280 = local_2f8;
                  unaff_XMM15_Da = SUB84(local_2e8,0);
                  unaff_XMM15_Db = (undefined4)((ulonglong)local_2e8 >> 0x20);
                  local_2c8 = local_2f0;
                  local_2d0 = local_308;
                  local_290 = local_2e0;
                  local_2d8 = local_2b0;
                  local_288 = local_2c0;
                  dVar2 = local_2b8;
                }
                local_258 = (float)local_2d8;
                local_2d8 = (double)CONCAT44(local_2d8._4_4_,(float)dVar2);
                fVar23 = (float)local_288;
                local_1ac = CONCAT44((float)dVar2,fVar23);
                fVar21 = (float)local_280;
                local_1b8 = CONCAT44(fVar21,(float)(double)CONCAT44(unaff_XMM13_Db,unaff_XMM13_Da));
                fVar26 = (float)local_290;
                fVar20 = (float)local_2d0;
                fVar22 = (float)local_2c8;
                local_1c4 = CONCAT44(fVar20,fVar22);
                local_1cc = (undefined1 *)(ulonglong)(uint)fVar19;
                local_1d0 = local_2a4;
                local_328 = &DAT_149e1e2cc;
                local_330 = &local_1ac;
                local_338 = &local_1b8;
                local_278 = dVar7;
                local_1f0 = dVar5;
                local_1d8 = -(float)dVar7;
                local_1d4 = -(float)dVar6;
                local_1bc = fVar26;
                local_1b0 = (float)(double)CONCAT44(unaff_XMM15_Db,unaff_XMM15_Da);
                local_1a4 = local_258;
                uVar11 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
                local_278 = (double)CONCAT44(local_278._4_4_,uVar11);
                local_1ac = CONCAT44(local_2d8._0_4_,fVar23);
                local_1a4 = local_258;
                local_1b8 = CONCAT44(fVar21,(float)(double)CONCAT44(unaff_XMM13_Db,unaff_XMM13_Da));
                local_1c4 = CONCAT44(fVar20,fVar22);
                local_1cc = (undefined1 *)CONCAT44(0x3f800000,fVar19);
                local_1d0 = local_2a0;
                local_328 = &DAT_149e1e2cc;
                local_338 = &local_1b8;
                local_330 = &local_1ac;
                local_1d8 = -(float)dVar7;
                local_1d4 = -(float)dVar6;
                local_1bc = fVar26;
                local_1b0 = (float)(double)CONCAT44(unaff_XMM15_Db,unaff_XMM15_Da);
                uVar11 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
                fVar19 = local_254;
                local_1a4 = (float)local_2b0;
                local_2d0 = (double)CONCAT44(local_2d0._4_4_,local_1a4);
                local_2c8 = (double)CONCAT44(local_2c8._4_4_,(float)local_2b8);
                fVar23 = (float)local_2c0;
                local_1ac = CONCAT44((float)local_2b8,fVar23);
                fVar22 = (float)local_2e8;
                fVar21 = (float)local_2f8;
                fVar26 = (float)local_300;
                local_1b8 = CONCAT44(fVar21,fVar26);
                fVar24 = (float)local_2e0;
                fVar25 = (float)local_308;
                fVar27 = (float)local_2f0;
                local_1c4 = CONCAT44(fVar25,fVar27);
                fVar28 = (float)local_1f8;
                local_1cc = (undefined1 *)CONCAT44(0x3f800000,local_254);
                fVar20 = (float)local_1f0;
                local_1d0 = local_2a0;
                local_328 = &DAT_149e1e2cc;
                local_338 = &local_1b8;
                local_330 = &local_1ac;
                local_1d8 = -fVar20;
                local_1d4 = -fVar28;
                local_1bc = fVar24;
                local_1b0 = fVar22;
                uVar12 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
                local_1ac = CONCAT44(local_2c8._0_4_,fVar23);
                local_1a4 = (float)local_2d0._0_4_;
                local_1b8 = CONCAT44(fVar21,fVar26);
                local_1c4 = CONCAT44(fVar25,fVar27);
                local_1cc = (undefined1 *)(ulonglong)(uint)fVar19;
                local_1d0 = local_2a4;
                local_328 = &DAT_149e1e2cc;
                local_338 = &local_1b8;
                local_330 = &local_1ac;
                local_1d8 = -fVar20;
                local_1d4 = -fVar28;
                local_1bc = fVar24;
                local_1b0 = fVar22;
                uVar13 = FUN_140d34aec(local_1a0,&local_1d8,&local_1cc,&local_1c4);
                dVar2 = local_278;
                FUN_140d3489c(local_1a0,(ulonglong)local_278 & 0xffffffff,uVar11,uVar12);
                FUN_140d3489c(local_1a0,(ulonglong)dVar2 & 0xffffffff,uVar12,uVar13);
                local_290 = local_2e0;
                local_2d0 = local_308;
                local_2c8 = local_2f0;
                unaff_XMM15_Da = SUB84(local_2e8,0);
                unaff_XMM15_Db = (undefined4)((ulonglong)local_2e8 >> 0x20);
                local_280 = local_2f8;
                unaff_XMM13_Da = SUB84(local_300,0);
                unaff_XMM13_Db = (undefined4)((ulonglong)local_300 >> 0x20);
                local_2d8 = local_2b0;
                unaff_XMM12_Da = SUB84(local_2b8,0);
                unaff_XMM12_Db = (undefined4)((ulonglong)local_2b8 >> 0x20);
                local_288 = local_2c0;
                iVar15 = iVar16;
              } while (iVar16 != local_2a8);
            }
            local_1ac = CONCAT17(local_1ac._7_1_,0x101000001);
            local_318 = param_5;
            local_320 = (uint)local_298;
            local_330 = &local_1ac;
            local_338 = (undefined8 *)((ulonglong)local_338 & 0xffffffffffffff00);
            local_310 = 0xffffffff;
            local_328 = (undefined4 *)0x0;
            local_308 = local_2d0;
            local_2f8 = local_280;
            local_2f0 = local_2c8;
            local_2e0 = local_290;
            local_2d8 = local_2b0;
            local_2c0 = local_288;
            FUN_140d351b2(local_1a0,local_248,local_178);
            local_288 = local_2c0;
            unaff_XMM12_Da = SUB84(local_2b8,0);
            unaff_XMM12_Db = (undefined4)((ulonglong)local_2b8 >> 0x20);
            local_2d8 = local_2b0;
            unaff_XMM13_Da = SUB84(local_300,0);
            unaff_XMM13_Db = (undefined4)((ulonglong)local_300 >> 0x20);
            local_280 = local_2f8;
            unaff_XMM15_Da = SUB84(local_2e8,0);
            unaff_XMM15_Db = (undefined4)((ulonglong)local_2e8 >> 0x20);
            local_2c8 = local_2f0;
            local_2d0 = local_308;
            local_290 = local_2e0;
          }
          if (local_190 != 0) {
            (*(code *)**(undefined8 **)(local_190 + 8))(local_190 + 8,1);
          }
          if (local_198 != 0) {
            (*(code *)**(undefined8 **)(local_198 + 8))(local_198 + 8,1);
          }
          local_298 = local_298 + 1;
          param_2 = local_240;
          param_4 = local_29c;
        } while (local_298 < (int)local_240[1]);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d3489c FUN_140d3489c body=161 status=ok
// SIG undefined FUN_140d3489c(void)

void FUN_140d3489c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x2c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x20),iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar1 * 4) = param_2;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x2c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x20),iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar1 * 4) = param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x2c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x20),iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar1 * 4) = param_4;
  return;
}



// FUNCTION 140d3493e FUN_140d3493e body=220 status=ok
// SIG undefined FUN_140d3493e(void)

undefined8 *
FUN_140d3493e(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined **param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = 0;
  ppuVar3 = &PTR_PTR_14c761508;
  if (param_6 != (undefined **)0x0) {
    ppuVar3 = param_6;
  }
  uVar1 = FUN_14001cc68(0xc0,0x10);
  FUN_140d34a1a(uVar1,param_2,param_3,param_4,param_5,ppuVar3);
  param_1[2] = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)puVar2 + 0x14) = 0x105;
  *(undefined1 *)((longlong)puVar2 + 0x16) = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_14a8ca1c0;
  puVar2[1] = &PTR_FUN_14a8ca1d0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = ppuVar3;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 140d34a1a FUN_140d34a1a body=210 status=ok
// SIG undefined FUN_140d34a1a(void)

void FUN_140d34a1a(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  *param_1 = &PTR_LAB_14a8ca178;
  param_1[1] = &PTR_FUN_14a8ca190;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  param_1[3] = &PTR_FUN_14a38cff0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x3e) = 0;
  param_1[6] = &PTR_FUN_14a38cff0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  param_1[9] = &PTR_FUN_14a38cff0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x6e) = 0;
  param_1[0xc] = &PTR_FUN_14a38cff0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x15) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xac) = param_4;
  *(undefined1 *)(param_1 + 0x16) = param_5;
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_2;
  param_1[0x17] = param_6;
  return;
}



// FUNCTION 140d34aec FUN_140d34aec body=1368 status=ok
// SIG undefined FUN_140d34aec(void)

int FUN_140d34aec(longlong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                 float *param_5,float *param_6,undefined4 *param_7)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_140d35044((longlong *)(lVar2 + 0x98),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x98);
  lVar5 = (longlong)iVar1 * 0x58;
  *(undefined8 *)(lVar2 + 0x4c + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = *param_2;
  *(undefined4 *)(lVar2 + 8 + lVar5) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0xc + lVar5) = *param_3;
  iVar7 = (int)ROUND(*param_4 * 127.0 + *param_4 * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar6 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar6 = 0x80;
  }
  *(undefined1 *)(lVar2 + 0x4c + lVar5) = uVar6;
  iVar7 = (int)ROUND(param_4[1] * 127.0 + param_4[1] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar6 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar6 = 0x80;
  }
  *(undefined1 *)(lVar2 + 0x4d + lVar5) = uVar6;
  iVar7 = (int)ROUND(param_4[2] * 127.0 + param_4[2] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar6 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar6 = 0x80;
  }
  *(undefined1 *)(lVar2 + 0x4e + lVar5) = uVar6;
  *(undefined1 *)(lVar2 + 0x4f + lVar5) = 0x7f;
  iVar7 = (int)ROUND(*param_6 * 127.0 + *param_6 * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar6 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar6 = 0x80;
  }
  *(undefined1 *)(lVar2 + 0x50 + lVar5) = uVar6;
  iVar7 = (int)ROUND(param_6[1] * 127.0 + param_6[1] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar6 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar6 = 0x80;
  }
  *(undefined1 *)(lVar2 + 0x51 + lVar5) = uVar6;
  iVar7 = (int)ROUND(param_6[2] * 127.0 + param_6[2] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar6 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar6 = 0x80;
  }
  *(undefined1 *)(lVar2 + 0x52 + lVar5) = uVar6;
  *(undefined1 *)(lVar2 + 0x53 + lVar5) = 0x7f;
  uVar8 = (int)ROUND(*param_6 * 127.0 + *param_6 * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar8) {
    uVar8 = 0x7f;
  }
  uVar11 = 0xffffff80;
  if ((int)uVar8 < -0x7f) {
    uVar8 = uVar11;
  }
  uVar9 = (int)ROUND(param_6[1] * 127.0 + param_6[1] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar9) {
    uVar9 = 0x7f;
  }
  if ((int)uVar9 < -0x7f) {
    uVar9 = uVar11;
  }
  uVar10 = (int)ROUND(param_6[2] * 127.0 + param_6[2] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar10) {
    uVar10 = 0x7f;
  }
  if ((int)uVar10 < -0x7f) {
    uVar10 = uVar11;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ =
       (ulonglong)uVar8 & 0xff | 0x7f000000 | ((ulonglong)uVar9 & 0xff) << 8 |
       ((ulonglong)uVar10 & 0xff) << 0x10;
  uVar8 = (int)ROUND(*param_5 * 127.0 + *param_5 * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar8) {
    uVar8 = 0x7f;
  }
  if ((int)uVar8 < -0x7f) {
    uVar8 = uVar11;
  }
  uVar9 = (int)ROUND(param_5[1] * 127.0 + param_5[1] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar9) {
    uVar9 = 0x7f;
  }
  if ((int)uVar9 < -0x7f) {
    uVar9 = uVar11;
  }
  uVar10 = (int)ROUND(param_5[2] * 127.0 + param_5[2] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar10) {
    uVar10 = 0x7f;
  }
  if ((int)uVar10 < -0x7f) {
    uVar10 = uVar11;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ =
       (ulonglong)uVar8 & 0xff | 0x7f000000 | ((ulonglong)uVar9 & 0xff) << 8 |
       ((ulonglong)uVar10 & 0xff) << 0x10;
  uVar8 = (int)ROUND(*param_4 * 127.0 + *param_4 * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar8) {
    uVar8 = 0x7f;
  }
  if ((int)uVar8 < -0x7f) {
    uVar8 = uVar11;
  }
  uVar9 = (int)ROUND(param_4[1] * 127.0 + param_4[1] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar9) {
    uVar9 = 0x7f;
  }
  if ((int)uVar9 < -0x7f) {
    uVar9 = uVar11;
  }
  fVar12 = param_4[2] * 127.0 + param_4[2] * 127.0 + 0.5;
  uVar11 = (int)ROUND(fVar12) >> 1;
  if (0x7e < (int)uVar11) {
    uVar11 = 0x7f;
  }
  if ((int)uVar11 < -0x7f) {
    uVar11 = 0xffffff80;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ =
       (ulonglong)uVar8 & 0xff | 0x7f000000 | ((ulonglong)uVar9 & 0xff) << 8 |
       ((ulonglong)uVar11 & 0xff) << 0x10;
  auVar13 = pmovsxbd(ZEXT416((uint)fVar12),auVar13);
  fVar14 = (float)auVar13._4_4_ * 0.007874016;
  fVar15 = (float)auVar13._8_4_ * 0.007874016;
  auVar20 = pmovsxbd(auVar17,auVar17);
  fVar21 = (float)auVar20._4_4_ * 0.007874016;
  fVar22 = (float)auVar20._8_4_ * 0.007874016;
  auVar17 = pmovsxbd(auVar16,auVar16);
  fVar18 = (float)auVar17._4_4_ * 0.007874016;
  fVar19 = (float)auVar17._8_4_ * 0.007874016;
  fVar4 = fVar22 * 0.0 + fVar15 * -0.0;
  fVar3 = fVar15 * -0.0 + fVar19 * 0.0;
  fVar12 = fVar22 * -0.0 + fVar19 * 0.0;
  *(char *)(lVar2 + 0x53 + lVar5) =
       (((fVar4 * fVar18 - fVar3 * fVar21) + fVar14 * fVar12) * -0.0 +
        (fVar12 * 0.0 + (fVar18 * fVar22 - fVar21 * fVar19)) * (float)auVar13._0_4_ * 0.007874016 +
        ((fVar4 * 0.0 + (fVar21 * fVar15 - fVar14 * fVar22)) * (float)auVar17._0_4_ * 0.007874016 -
        (fVar3 * 0.0 + (fVar18 * fVar15 - fVar14 * fVar19)) * (float)auVar20._0_4_ * 0.007874016) <
       0.0) * '\x02' + '\x7f';
  *(undefined4 *)(lVar2 + 0x54 + lVar5) = *param_7;
  return iVar1;
}



// FUNCTION 140d35044 FUN_140d35044 body=366 status=ok
// SIG undefined FUN_140d35044(void)

void FUN_140d35044(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d350c9;
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
LAB_140d350c9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,4);
  return;
}



// FUNCTION 140d351b2 FUN_140d351b2 body=2952 status=ok
// SIG undefined FUN_140d351b2(void)

void FUN_140d351b2(undefined1 param_1 [8],double *param_2,undefined8 *param_3,undefined8 param_4,
                  byte param_5,byte *param_6,undefined4 *param_7,undefined4 param_8,
                  longlong *param_9,undefined4 param_10)

{
  byte *pbVar1;
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
  byte bVar13;
  int iVar14;
  longlong *plVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  uint *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  void *pvVar22;
  longlong lVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong lVar26;
  double *pdVar27;
  double *pdVar28;
  uint uVar29;
  uint uVar30;
  undefined8 in_R10;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  bool bVar35;
  double dVar36;
  undefined1 auStack_968 [36];
  int local_944;
  uint local_940;
  uint local_93c;
  undefined1 local_938 [8];
  undefined1 local_930 [8];
  undefined1 local_928 [4];
  undefined8 local_924;
  undefined4 local_91c;
  undefined4 local_90c;
  undefined4 local_7bc;
  undefined4 local_7ac;
  undefined4 local_79c;
  undefined4 local_78c;
  undefined4 local_77c;
  undefined4 local_76c;
  undefined4 local_75c;
  undefined4 local_74c;
  undefined4 local_73c;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_70c;
  undefined8 local_6fc;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6a8 [24];
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  double local_5c8 [16];
  undefined8 local_548 [16];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  double local_4a0;
  undefined4 local_498;
  int local_494;
  uint local_490;
  undefined8 local_48c;
  undefined2 local_484;
  undefined8 local_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined8 uStack_46c;
  undefined1 local_458 [872];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_968;
  lVar23 = param_9[0x22];
  local_938 = (undefined1  [8])param_4;
  if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
    if (param_7 == (undefined4 *)0x0) goto LAB_140d35ba9;
    if (*(longlong *)((longlong)param_1 + 8) != 0) goto LAB_140d3528f;
  }
  else {
    if ((param_7 == (undefined4 *)0x0) &&
       (*(int *)(*(longlong *)((longlong)param_1 + 0x10) + 0xa0) < 1)) goto LAB_140d35ba9;
LAB_140d3528f:
    plVar15 = (longlong *)param_9[0x1d];
    puVar20 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xea8);
    puVar19 = (uint *)*puVar20;
    if (puVar19 != (uint *)0x0) goto LAB_140d352c3;
    while( true ) {
      FUN_14472e504(puVar20);
      puVar19 = (uint *)*puVar20;
LAB_140d352c3:
      puVar25 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
      uVar29 = puVar19[0x12];
      if (puVar25 + 7 <= puVar19 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
        LOCK();
        uVar30 = *puVar19;
        *puVar19 = *puVar19 + uVar29 + 1;
        UNLOCK();
        if ((uVar30 ^ uVar29) != 0xffffffff) break;
        puVar19 = (uint *)*puVar20;
        *puVar19 = 0xffffffff;
        *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar20 = puVar19;
        puVar25 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
        uVar29 = 0;
        if (puVar25 + 7 <= puVar19 + 0x4000) {
          uVar29 = 1;
          goto LAB_140d35339;
        }
      }
    }
    uVar29 = uVar29 + 1;
LAB_140d35339:
    *(undefined8 **)(puVar19 + 0x10) = puVar25 + 8;
    puVar19[0x12] = uVar29;
    *(int *)(puVar25 + -1) = ((int)puVar25 + -8) - (int)puVar19;
    *(undefined4 *)((longlong)puVar25 + -4) = 0x38;
    puVar25[1] = 0;
    *puVar25 = &PTR_FUN_14a8cabf8;
    lVar21 = *plVar15;
    do {
      puVar25[1] = lVar21;
      LOCK();
      lVar26 = *plVar15;
      bVar35 = lVar21 == lVar26;
      if (bVar35) {
        *plVar15 = (longlong)puVar25;
        lVar26 = lVar21;
      }
      UNLOCK();
      lVar21 = lVar26;
    } while (!bVar35);
    puVar25[2] = &PTR_FUN_14a8be088;
    puVar25[3] = 0;
    puVar25[4] = 0;
    puVar25[5] = 0;
    puVar25[6] = 0;
    *(undefined8 **)param_1 = puVar25 + 2;
    puVar25[3] = *(longlong *)((longlong)param_1 + 0x10);
    *(longlong *)(*(longlong *)param_1 + 0x10) = *(longlong *)((longlong)param_1 + 8);
    lVar21 = *(longlong *)param_1;
    lVar26 = *(longlong *)(lVar21 + 8);
    if (lVar26 != 0) {
      (**(code **)(*(longlong *)(lVar26 + 8) + 0x18))(lVar26 + 8,lVar23);
      lVar21 = *(longlong *)param_1;
    }
    lVar21 = *(longlong *)(lVar21 + 0x10);
    if ((lVar21 != 0) && (*(int *)(*(longlong *)((longlong)param_1 + 8) + 0x28) != 0)) {
      (**(code **)(*(longlong *)(lVar21 + 8) + 0x18))(lVar21 + 8,lVar23);
    }
    puVar20 = (undefined8 *)FUN_14001cc68(0x230,0x10);
    lVar21 = *(longlong *)((longlong)param_1 + 0x10);
    lVar26 = *(longlong *)((longlong)param_1 + 0x18);
    *(undefined4 *)(puVar20 + 2) = 0xffffffff;
    *(char *)((longlong)puVar20 + 0x14) = (char)lVar26;
    *(undefined2 *)((longlong)puVar20 + 0x15) = 1;
    puVar20[0x13] = 0;
    puVar20[0x14] = 0x800000000;
    puVar20[0x19] = 0;
    puVar20[0x1a] = 0x200000000;
    puVar20[0x21] = 0;
    puVar20[0x22] = 0x300000000;
    puVar20[0x25] = 0;
    puVar20[0x23] = 0;
    puVar20[0x24] = 0;
    *(undefined4 *)(puVar20 + 0x26) = 0x1ffffff;
    *(undefined4 *)(puVar20 + 0x35) = 0;
    puVar20[0x27] = 0;
    puVar20[0x28] = 0;
    puVar20[0x29] = 0;
    puVar20[0x2a] = 0;
    puVar20[0x2b] = 0;
    puVar20[0x2c] = 0;
    *(undefined4 *)((longlong)puVar20 + 0x1ac) = 4;
    puVar20[0x3c] = 0;
    puVar20[0x3d] = 0;
    puVar20[0x3a] = 0;
    puVar20[0x3b] = 0;
    puVar20[0x38] = 0;
    puVar20[0x39] = 0;
    puVar20[0x36] = 0;
    puVar20[0x37] = 0;
    *(undefined4 *)(puVar20 + 0x3e) = 0xffffffff;
    *(undefined2 *)((longlong)puVar20 + 500) = 0xff;
    *(undefined1 *)((longlong)puVar20 + 0x1f6) = 0;
    puVar20[0x43] = 0;
    puVar20[0x41] = 0;
    puVar20[0x42] = 0;
    puVar20[0x3f] = 0;
    puVar20[0x40] = 0;
    *(undefined4 *)(puVar20 + 0x44) = 0xffffffff;
    *(undefined1 *)((longlong)puVar20 + 0x224) = 0;
    *puVar20 = &PTR_LAB_14a8ca200;
    puVar20[1] = &PTR_FUN_14a8ca210;
    puVar20[0x45] = lVar21;
    *(undefined8 **)(*(longlong *)param_1 + 0x18) = puVar20;
    (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)param_1 + 0x18) + 8) + 0x18))
              (*(longlong *)(*(longlong *)param_1 + 0x18) + 8,lVar23);
    puVar20 = (undefined8 *)FUN_14001cc68(0x30);
    puVar20[2] = 0;
    puVar20[3] = 0;
    *(undefined4 *)(puVar20 + 2) = 0xffffffff;
    *(undefined2 *)((longlong)puVar20 + 0x14) = 0x105;
    *(undefined4 *)(puVar20 + 3) = 2;
    puVar20[4] = 0;
    puVar20[5] = 0;
    *puVar20 = &PTR_LAB_14a8ca268;
    puVar20[1] = &PTR_FUN_14a8ca280;
    *(undefined8 **)(*(longlong *)param_1 + 0x20) = puVar20;
    memset(local_928,0,0x4d0);
    local_7ac = 0x3f800000;
    local_75c = 0x3f800000;
    lVar21 = 0x28c;
    do {
      *(undefined8 *)(local_938 + lVar21 + 4) = 0;
      *(undefined8 *)(local_928 + lVar21 + -4) = 0x3f80000000000000;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x31c);
    local_5e8 = 0;
    uStack_5e0 = 0x3f80000000000000;
    local_490 = local_490 & 0xfffff800;
    local_79c = 0;
    local_78c = 0;
    local_6f0 = 0xffffff00ffffff00;
    local_76c = 0;
    local_77c = 0xffffffff;
    local_91c = 0xffffffff;
    local_90c = 0xffffffff;
    local_74c = 0xffffffff;
    local_73c = 0xffffffff;
    local_6e8 = 0xffffffff00ffffff;
    local_6c0 = 0xffffffff;
    local_924 = 0xffffffff;
    local_70c = 0xffffffff;
    local_6fc = 0;
    local_6c8 = 0;
    memset(local_6a8,0,0x90);
    local_48c = 0;
    local_484 = 0;
    local_480 = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    pdVar27 = param_2;
    pdVar28 = local_5c8;
    for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
      *pdVar28 = *pdVar27;
      pdVar27 = pdVar27 + 1;
      pdVar28 = pdVar28 + 1;
    }
    puVar20 = local_548;
    for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
      *puVar20 = *param_3;
      param_3 = param_3 + 1;
      puVar20 = puVar20 + 1;
    }
    local_4a0 = param_2[0xe];
    local_4b0 = *(undefined4 *)(param_2 + 0xc);
    uStack_4ac = *(undefined4 *)((longlong)param_2 + 100);
    uStack_4a8 = *(undefined4 *)(param_2 + 0xd);
    uStack_4a4 = *(undefined4 *)((longlong)param_2 + 0x6c);
    local_498 = 0;
    local_7bc = 0;
    local_738 = 0;
    uStack_730 = 0;
    local_728 = 0;
    uStack_720 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    local_494 = (uint)param_6[3] * 8 + 0xfe0781;
    pvVar22 = (void *)FUN_144788782(local_928);
    memcpy(local_458,pvVar22,0x360);
    lVar21 = *(longlong *)(*(longlong *)param_1 + 0x20);
    pvVar22 = *(void **)(lVar21 + 0x28);
    if (pvVar22 == (void *)0x0) {
      pvVar22 = (void *)FUN_14001cc68(0x360,0x10);
      *(void **)(lVar21 + 0x28) = pvVar22;
    }
    memcpy(pvVar22,local_458,0x360);
    FUN_1447fd100(lVar21 + 8,lVar23);
    (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)param_1 + 0x20) + 8) + 0x18))
              (*(longlong *)(*(longlong *)param_1 + 0x20) + 8,lVar23);
    *(longlong *)((longlong)param_1 + 8) = 0;
    *(longlong *)((longlong)param_1 + 0x10) = 0;
  }
  lVar21 = *(longlong *)(*(longlong *)param_1 + 0x10);
  if (lVar21 == 0) {
    uVar31 = 0;
  }
  else {
    uVar31 = CONCAT71((int7)((ulonglong)in_R10 >> 8),*(int *)(lVar21 + 0x28) != 0);
  }
  lVar21 = *(longlong *)(*(longlong *)param_1 + 8);
  if (lVar21 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = CONCAT71((int7)((ulonglong)lVar23 >> 8),*(int *)(lVar21 + 0xa0) != 0);
  }
  iVar24 = (int)param_9[1];
  iVar14 = (int)param_9[2];
  iVar18 = (iVar14 + 0x44) / 0x44;
  *(int *)(param_9 + 2) = iVar14 + 1;
  if (iVar24 < iVar18) {
    local_93c = (uint)uVar34;
    local_940 = (uint)uVar31;
    local_930 = param_1;
    do {
      local_944 = iVar24;
      lVar23 = FUN_14001cc68(0x3fc0,0x10);
      lVar21 = 0;
      do {
        *(undefined8 *)(lVar23 + 0xa8 + lVar21) = 0;
        puVar20 = (undefined8 *)(lVar23 + 0xb8 + lVar21);
        *puVar20 = 0;
        puVar20[1] = 0;
        *(undefined8 *)(lVar23 + 200 + lVar21) = 0;
        *(undefined8 *)(lVar23 + 0xd0 + lVar21) = 0xffffffff;
        *(undefined8 *)(lVar23 + 0xd8 + lVar21) = 0xff0000ffffffff;
        *(undefined1 *)(lVar23 + 0xe0 + lVar21) = 0;
        *(undefined4 *)(lVar23 + 0xe4 + lVar21) = 0x40c00f07;
        pbVar1 = (byte *)(lVar23 + 0xe8 + lVar21);
        *pbVar1 = *pbVar1 & 0xfc;
        *(undefined1 **)(lVar23 + 0xb0 + lVar21) = &DAT_100000001;
        FUN_14470b9e0(lVar23 + lVar21,1);
        lVar21 = lVar21 + 0xf0;
      } while (lVar21 != 0x3fc0);
      iVar24 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar24 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar24 + 1U) {
        FUN_14002baf6(param_9,iVar24);
      }
      *(longlong *)(*param_9 + (longlong)iVar24 * 8) = lVar23;
      iVar24 = local_944 + 1;
      uVar34 = (ulonglong)local_93c;
      uVar31 = (ulonglong)local_940;
      param_1 = local_930;
    } while (iVar24 != iVar18);
  }
  lVar21 = *(longlong *)(*param_9 + (longlong)(iVar14 / 0x44) * 8);
  lVar26 = (ulonglong)(uint)(iVar14 % 0x44) * 0xf0;
  lVar23 = lVar21 + lVar26;
  lVar21 = *(longlong *)(lVar21 + 0xa8 + lVar26);
  if (lVar21 == 0) {
    lVar21 = lVar23;
  }
  if ((char)uVar31 == '\0') {
    lVar26 = 0;
  }
  else {
    lVar26 = *(longlong *)(*(longlong *)param_1 + 0x10);
  }
  lVar33 = lVar26 + 8;
  if (lVar26 == 0) {
    lVar33 = 0;
  }
  *(longlong *)(lVar21 + 0x18) = lVar33;
  lVar26 = *(longlong *)(*(longlong *)param_1 + 0x18) + 8;
  if (*(longlong *)(*(longlong *)param_1 + 0x18) == 0) {
    lVar26 = 0;
  }
  *(longlong *)(lVar23 + 0xb8) = lVar26;
  *(undefined1 (*) [8])(lVar23 + 0xc0) = local_938;
  lVar26 = *(longlong *)(*(longlong *)param_1 + 0x20) + 8;
  if (*(longlong *)(*(longlong *)param_1 + 0x20) == 0) {
    lVar26 = 0;
  }
  *(longlong *)(lVar21 + 8) = lVar26;
  uVar29 = *(uint *)(lVar23 + 0xe4) & 0xfffffeff | (uint)*param_6 << 8;
  *(uint *)(lVar23 + 0xe4) = uVar29;
  bVar13 = param_6[2];
  *(uint *)(lVar23 + 0xe4) = uVar29 & 0xffffefff | (uint)bVar13 << 0xc;
  uVar29 = uVar29 & 0xffefefff | (uint)bVar13 << 0xc | (uint)param_6[5] << 0x14;
  *(uint *)(lVar23 + 0xe4) = uVar29;
  uVar30 = (uint)param_6[6] << 0x15;
  *(uint *)(lVar23 + 0xe4) = uVar29 & 0xffdfffff | uVar30;
  dVar2 = param_2[5];
  dVar3 = param_2[10];
  dVar4 = param_2[0xf];
  dVar5 = param_2[0xb];
  dVar6 = param_2[0xe];
  dVar17 = dVar3 * dVar4 - dVar6 * dVar5;
  dVar7 = param_2[9];
  dVar8 = param_2[6];
  dVar9 = param_2[7];
  dVar16 = dVar8 * dVar4 - dVar6 * dVar9;
  dVar10 = param_2[0xd];
  dVar11 = param_2[2];
  dVar12 = param_2[3];
  dVar36 = dVar4 * dVar11 - dVar6 * dVar12;
  dVar4 = dVar5 * dVar11 - dVar3 * dVar12;
  dVar5 = dVar8 * dVar5 - dVar3 * dVar9;
  dVar3 = param_2[1];
  dVar6 = dVar11 * dVar9 - dVar8 * dVar12;
  uVar32 = (uint)(((dVar10 * dVar6 + (dVar16 * dVar3 - dVar36 * dVar2)) * param_2[8] +
                  ((dVar10 * dVar5 + (dVar2 * dVar17 - dVar16 * dVar7)) * *param_2 -
                  (dVar10 * dVar4 + (dVar17 * dVar3 - dVar36 * dVar7)) * param_2[4])) -
                  (dVar6 * dVar7 + (dVar5 * dVar3 - dVar4 * dVar2)) * param_2[0xc] < 0.0) << 6;
  *(uint *)(lVar23 + 0xe4) = uVar29 & 0xffdfffbf | uVar30 | uVar32;
  uVar30 = uVar29 & 0xffd03f3f | uVar30 | uVar32 | (uint)param_6[1] << 7;
  uVar29 = (uint)(param_5 & 7) << 0x11;
  *(uint *)(lVar23 + 0xe4) = uVar29 | uVar30;
  *(uint *)(lVar23 + 0xe4) = uVar29 | uVar30 & 0xffbe3fff | (uint)param_6[4] << 0x16;
  *(undefined4 *)(lVar23 + 0xd0) = param_10;
  if (param_7 == (undefined4 *)0x0) {
    *(undefined4 *)(lVar21 + 0x58) = 0;
    if ((char)uVar31 == '\0') {
      if ((char)uVar34 != '\0') {
        *(int *)(lVar21 + 0x5c) = *(int *)(*(longlong *)(*(longlong *)param_1 + 8) + 0xa0) / 3;
        *(undefined4 *)(lVar21 + 0x68) = 0;
        goto LAB_140d35b85;
      }
      iVar24 = 0;
      *(undefined4 *)(lVar21 + 0x5c) = 0;
      *(undefined4 *)(lVar21 + 0x68) = 0;
    }
    else {
      *(int *)(lVar21 + 0x5c) = *(int *)(*(longlong *)(*(longlong *)param_1 + 0x10) + 0x28) / 3;
      *(undefined4 *)(lVar21 + 0x68) = 0;
      iVar24 = 0;
      if ((char)uVar34 != '\0') {
LAB_140d35b85:
        iVar24 = *(int *)(*(longlong *)(*(longlong *)param_1 + 8) + 0xa0) + -1;
      }
    }
  }
  else {
    *(undefined4 *)(lVar21 + 0x58) = *param_7;
    *(undefined4 *)(lVar21 + 0x5c) = param_7[3];
    *(undefined4 *)(lVar21 + 0x68) = param_7[1];
    iVar24 = param_7[2];
  }
  *(int *)(lVar21 + 0x6c) = iVar24;
  FUN_1436a14f8(param_9,param_8);
LAB_140d35ba9:
  if ((local_f0 ^ (ulonglong)auStack_968) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d35d3c FUN_140d35d3c body=16 status=ok
// SIG undefined FUN_140d35d3c(void)

byte FUN_140d35d3c(void)

{
  byte bVar1;
  
  bVar1 = FUN_140d35d4c();
  return bVar1 ^ 1;
}



// FUNCTION 140d35d4c FUN_140d35d4c body=592 status=ok
// SIG undefined FUN_140d35d4c(void)

ulonglong FUN_140d35d4c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
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
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1403b0700();
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(longlong *)(lVar1 + 0x38) == 0) || (*(longlong *)(lVar1 + 0x38) == DAT_14cb71810))
  goto LAB_140d35e2d;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = L"Game";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar2 = *(longlong *)(lVar1 + 0x430), lVar2 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1417de738;
        local_30 = (code *)&LAB_145893408;
        local_38 = &LAB_1458cbbd2;
        local_48 = &LAB_147ba21f1;
        local_50 = &LAB_1463e9233;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x1000000c;
        local_70 = 8;
        local_78 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar2 = *(longlong *)(lVar1 + 0x430);
        if (lVar2 == 0) goto LAB_140d35e2b;
      }
      if (((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
           == DAT_14cae9568 + 0x30)))) {
        lVar1 = FUN_14030d4a0();
        if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
           (*(char *)(lVar2 + 0x3de) != '\0')) goto LAB_140d35e2d;
      }
    }
  }
LAB_140d35e2b:
  uVar3 = 0;
LAB_140d35e2d:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140d35f9e FUN_140d35f9e body=278 status=ok
// SIG undefined FUN_140d35f9e(void)

longlong * FUN_140d35f9e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar1 = FUN_14487fd02();
    if (iVar1 != 1) {
      uVar2 = FUN_1447210f0(param_1);
      plVar3 = (longlong *)FUN_140d360b6(param_1,param_2,uVar2);
      if (plVar3 != (longlong *)0x0) {
        local_48 = *param_3;
        uStack_40 = param_3[1];
        local_38 = param_3[2];
        uStack_30 = param_3[3];
        local_68 = param_3[4];
        uStack_60 = param_3[5];
        local_58 = param_3[6];
        local_70 = 0;
        local_78 = 0;
        FUN_144927ad4(plVar3,&local_68,&local_48,0);
        local_48 = param_3[8];
        uStack_40 = param_3[9];
        local_38 = param_3[10];
        if (*(code **)(*plVar3 + 0x478) == FUN_14028a216) {
          FUN_14028a216(plVar3);
        }
        else {
          (**(code **)(*plVar3 + 0x478))(plVar3,&local_48);
        }
        FUN_140b506dc(plVar3,uVar2,0);
        goto LAB_140d36086;
      }
    }
  }
  plVar3 = (longlong *)0x0;
LAB_140d36086:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d360b6 FUN_140d360b6 body=593 status=ok
// SIG undefined FUN_140d360b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140d360b6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  
  uVar2 = *(uint *)(param_1 + 0x418);
  if (0 < (int)uVar2) {
    fVar10 = (float)(*(double *)(param_3 + 0x6d0) - (double)_DAT_14c7639ec);
    plVar4 = *(longlong **)(param_1 + 0x410);
    uVar7 = 0xffffffff;
    uVar8 = 0;
    _Dst = plVar4;
    do {
      plVar1 = (longlong *)_Dst[1];
      if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
        if (*_Dst == param_2) {
          if (uVar2 - 1 != (int)uVar8) {
            iVar9 = (uVar2 - 1) - (int)uVar8;
            iVar6 = 1;
            if (iVar9 < 1) {
              iVar6 = iVar9;
            }
            memmove(_Dst,plVar4 + (ulonglong)(uVar2 - iVar6) * 3,(longlong)iVar6 * 0x18);
            uVar2 = *(uint *)(param_1 + 0x418);
          }
          *(uint *)(param_1 + 0x418) = uVar2 - 1;
          return plVar1;
        }
        if (*(float *)(_Dst + 2) < fVar10) {
          uVar7 = uVar8 & 0xffffffff;
          fVar10 = *(float *)(_Dst + 2);
        }
      }
      uVar8 = uVar8 + 1;
      _Dst = _Dst + 3;
    } while (uVar2 != uVar8);
    uVar5 = (uint)uVar7;
    if (uVar5 != 0xffffffff) {
      plVar4 = (longlong *)plVar4[(longlong)(int)uVar5 * 3 + 1];
      if ((plVar4 != (longlong *)0x0) && ((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar4 + 0x420))(plVar4,0);
        uVar2 = *(uint *)(param_1 + 0x418);
      }
      iVar6 = ~uVar5 + uVar2;
      if (iVar6 != 0) {
        iVar9 = 1;
        if (iVar6 < 1) {
          iVar9 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_1 + 0x410) + (longlong)(int)uVar5 * 0x18),
                (void *)(*(longlong *)(param_1 + 0x410) + (longlong)(int)(uVar2 - iVar9) * 0x18),
                (longlong)iVar9 * 0x18);
        uVar2 = *(uint *)(param_1 + 0x418);
      }
      *(uint *)(param_1 + 0x418) = uVar2 - 1;
    }
  }
  if (param_2 != 0) {
    lVar3 = FUN_1406d0862();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      plVar4 = (longlong *)FUN_140995b6b(param_1);
      *(byte *)((longlong)plVar4 + 0x2d4) = *(byte *)((longlong)plVar4 + 0x2d4) & 0xbe;
      *(byte *)((longlong)plVar4 + 0x2d5) = *(byte *)((longlong)plVar4 + 0x2d5) & 0xfe;
      *(undefined1 *)((longlong)plVar4 + 0x1fb) = 2;
      (**(code **)(*plVar4 + 0x720))(plVar4,0);
      FUN_14057a3b2(plVar4,1,1,1);
      (**(code **)(*plVar4 + 0xa78))(plVar4,param_2);
      return plVar4;
    }
    lVar3 = FUN_144a85a6c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      plVar4 = (longlong *)FUN_1488e5c62(param_1);
      *(byte *)((longlong)plVar4 + 0x2d4) = *(byte *)((longlong)plVar4 + 0x2d4) & 0xbe;
      *(byte *)((longlong)plVar4 + 0x2d5) = *(byte *)((longlong)plVar4 + 0x2d5) & 0xfe;
      *(undefined1 *)((longlong)plVar4 + 0x1fb) = 2;
      (**(code **)(*plVar4 + 0x720))(plVar4,0);
      FUN_14057a3b2(plVar4,1,1,1);
      (**(code **)(*plVar4 + 0xaa8))(plVar4,param_2,1);
      return plVar4;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140d36308 FUN_140d36308 body=286 status=ok
// SIG undefined FUN_140d36308(void)

undefined8 FUN_140d36308(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140d36420;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140d36420;
    }
    FUN_1400841de(param_1 + 0x18,&local_38);
  }
  else {
LAB_140d36420:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140d363cb;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_140d363cb;
    }
  }
  uVar6 = 0;
LAB_140d363cb:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d36434 FUN_140d36434 body=668 status=ok
// SIG undefined FUN_140d36434(void)

void FUN_140d36434(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [200];
  longlong local_108;
  longlong local_78;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 != 1) goto LAB_140d36486;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 != DVar8) goto LAB_140d36486;
  }
  if (((param_1[0x2a5] == 0) || (param_1[0x2a6] == 0)) || (*(int *)(param_1[0x2a6] + 8) < 1)) {
    FUN_140a416a4(local_1d0);
    (**(code **)(*param_1 + 0xc58))(param_1,local_1d0);
    plVar3 = (longlong *)param_1[0x29d];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x900))(plVar3,local_1d0);
    }
    lVar12 = param_1[0x16];
    if (lVar12 == 0) {
      lVar12 = FUN_1448abda6(param_1);
    }
    FUN_1405f96d0(&local_1e0,lVar12,local_1d0);
    if (param_1 + 0x2a5 != &local_1e0) {
      param_1[0x2a5] = local_1e0;
      local_1e0 = 0;
      plVar3 = (longlong *)param_1[0x2a6];
      param_1[0x2a6] = (longlong)local_1d8;
      local_1d8 = (longlong *)0x0;
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
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1d8 + 0x10))();
      }
    }
    iVar2 = *(int *)((longlong)param_1 + 0x14e4);
    *(int *)((longlong)param_1 + 0x14e4) = iVar2 + 1;
    uVar9 = (ulonglong)(int)param_1[0x29b];
    if ((longlong)uVar9 < 1) {
      *(int *)((longlong)param_1 + 0x14e4) = iVar2;
    }
    else {
      bVar10 = false;
      do {
        lVar12 = uVar9 * 0x10 + -8;
        uVar11 = uVar9;
        while (((lVar4 = param_1[0x29a], *(int *)(lVar4 + lVar12) != 0 &&
                (plVar3 = *(longlong **)(lVar4 + -8 + lVar12), plVar3 != (longlong *)0x0)) &&
               (cVar6 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,local_1d0,param_1 + 0x2a5),
               cVar6 != '\0'))) {
          lVar12 = lVar12 + -0x10;
          bVar5 = uVar11 < 2;
          uVar11 = uVar11 - 1;
          if (bVar5) {
            *(int *)((longlong)param_1 + 0x14e4) = *(int *)((longlong)param_1 + 0x14e4) + -1;
            if (bVar10) goto LAB_140d36658;
            goto LAB_140d365fb;
          }
        }
        uVar9 = uVar11 - 1;
        bVar10 = true;
      } while (1 < uVar11);
      *(int *)((longlong)param_1 + 0x14e4) = *(int *)((longlong)param_1 + 0x14e4) + -1;
LAB_140d36658:
      FUN_14474d06a(param_1 + 0x29a,0);
    }
LAB_140d365fb:
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140d36486:
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d366d2 FUN_140d366d2 body=78 status=ok
// SIG undefined FUN_140d366d2(void)

void FUN_140d366d2(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = &LAB_1427437d4;
  local_20 = param_1;
  FUN_14008cf08();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d36738 FUN_140d36738 body=134 status=ok
// SIG undefined FUN_140d36738(void)

void FUN_140d36738(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x152] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x648))();
    local_20 = *(undefined4 *)(param_1[0x152] + 0x1a4);
    local_28 = *(undefined8 *)(param_1[0x152] + 0x19c);
    FUN_1409b5530(param_1 + 0x184,param_1 + 0x131,&local_28,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d367c0 FUN_140d367c0 body=735 status=ok
// SIG undefined FUN_140d367c0(void)

void FUN_140d367c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  undefined4 uVar4;
  void *_Src;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448aa298();
  for (lVar8 = param_1; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x20)) {
    if ((*(uint *)(lVar8 + 8) & 0x30) != 0) goto LAB_140d3684b;
  }
  if (*(longlong *)(param_1 + 0x758) == 0) {
    plVar9 = (longlong *)(param_1 + 0x748);
    *(longlong **)(param_1 + 0x760) = &DAT_14cb1cd30;
    *(longlong *)(param_1 + 0x758) = param_1;
    lVar8 = DAT_14cb1cd30;
    while( true ) {
      *(longlong *)(param_1 + 0x748) = lVar8;
      LOCK();
      lVar7 = **(longlong **)(param_1 + 0x760);
      bVar11 = lVar8 == lVar7;
      if (bVar11) {
        **(longlong **)(param_1 + 0x760) = (longlong)plVar9;
        lVar7 = lVar8;
      }
      UNLOCK();
      if (bVar11) break;
      *(longlong *)(param_1 + 0x748) = lVar7;
      lVar8 = **(longlong **)(param_1 + 0x760);
    }
    if (*plVar9 != 0) {
      *(longlong **)(*plVar9 + 8) = plVar9;
    }
  }
LAB_140d3684b:
  FUN_140d370ea(&local_58,param_1);
  _Src = local_40;
  *(longlong *)(param_1 + 0x6e0) = local_58;
  *(undefined4 *)(param_1 + 0x6e8) = local_50;
  *(undefined4 *)(param_1 + 0x6ec) = uStack_4c;
  *(undefined4 *)(param_1 + 0x6f0) = uStack_48;
  *(undefined4 *)(param_1 + 0x6f4) = uStack_44;
  ppvVar3 = (void **)(param_1 + 0x6f8);
  if (ppvVar3 != &local_40) {
    *(int *)(param_1 + 0x700) = local_38;
    if (local_38 == 0 && *(int *)(param_1 + 0x704) == 0) {
      *(undefined4 *)(param_1 + 0x704) = 0;
    }
    else {
      FUN_1446dd670(ppvVar3,local_38);
      if (local_38 != 0) {
        memcpy(*ppvVar3,_Src,(longlong)local_38 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x708) = local_30;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if ((lVar8 != 0) || (lVar8 = FUN_1448abda6(param_1), lVar8 != 0)) {
    uVar4 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_58,uVar4,lVar8);
    if ((local_58 == 0) ||
       (plVar9 = (longlong *)CONCAT44(uStack_4c,local_50), plVar9 == (longlong *)0x0)) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    plVar10 = (longlong *)CONCAT44(uStack_4c,local_50);
    if (plVar10 != (longlong *)0x0) {
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
    if (plVar9 != (longlong *)0x0) {
      iVar6 = (int)plVar9[1];
      do {
        plVar10 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar6 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar10 = plVar9;
      } while (!bVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_58 != 0) {
          FUN_140d36aa0(local_58 + 0x200,param_1,0);
        }
        LOCK();
        plVar9 = plVar10 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d36aa0 FUN_140d36aa0 body=1236 status=ok
// SIG undefined FUN_140d36aa0(void)

void FUN_140d36aa0(longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  int local_6c;
  longlong local_68;
  
  plVar1 = (longlong *)(param_1 + 0x78);
  iVar7 = *(int *)(param_1 + 0x80);
  lVar17 = (longlong)iVar7;
  if (lVar17 == 0) {
    iVar16 = 0;
    goto LAB_140d36c43;
  }
  puVar2 = (uint *)*plVar1;
  local_6c = DAT_14c9647dc;
  if (puVar2[1] == 0) {
LAB_140d36e86:
    uVar8 = 0;
  }
  else {
    uVar4 = *puVar2;
    uVar8 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar6 = (ulonglong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar6 == (ulonglong *)0x0) ||
         (((uint)puVar6[2] != puVar2[1] || ((puVar6[1] & 0x10200000) != 0)))) goto LAB_140d36e86;
      uVar8 = *puVar6;
    }
  }
  local_68 = DAT_14c9647c8;
  iVar16 = 0;
  iVar10 = 0;
  bVar18 = uVar8 == param_2;
  do {
    lVar13 = (longlong)iVar10;
    iVar3 = iVar10 + 1;
    if (iVar10 + 1 < iVar7) {
      iVar3 = iVar7;
    }
    puVar15 = puVar2 + lVar13 * 3 + 4;
    iVar11 = iVar10;
    lVar14 = lVar13;
    do {
      lVar14 = lVar14 + 1;
      iVar12 = iVar3;
      if (lVar17 <= lVar14) break;
      if ((*puVar15 == 0) || (uVar4 = puVar15[-1], (int)uVar4 < 0)) {
LAB_140d36e73:
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if ((int)uVar4 < local_6c) {
          puVar6 = (ulonglong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(local_68 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((puVar6 == (ulonglong *)0x0) || ((uint)puVar6[2] != *puVar15)) ||
             ((puVar6[1] & 0x10200000) != 0)) goto LAB_140d36e73;
          uVar8 = *puVar6;
        }
      }
      iVar11 = iVar11 + 1;
      puVar15 = puVar15 + 3;
      iVar12 = iVar11;
    } while (bVar18 == (uVar8 == param_2));
    if (bVar18 == false) {
      if (iVar16 != iVar10) {
        memmove(puVar2 + (longlong)iVar16 * 3,puVar2 + lVar13 * 3,(longlong)(iVar12 - iVar10) * 0xc)
        ;
        local_6c = DAT_14c9647dc;
        local_68 = DAT_14c9647c8;
      }
      iVar16 = iVar16 + (iVar12 - iVar10);
    }
    iVar10 = iVar12;
    bVar18 = (bool)(bVar18 ^ 1);
  } while (lVar14 < lVar17);
  *(int *)(param_1 + 0x80) = iVar16;
LAB_140d36c43:
  if ((param_3 == '\0') && (*(char *)(param_2 + 0x658) != '\0')) {
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar17 = param_1 + 0x60;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar17 = *(longlong *)(param_1 + 0x68);
      }
      iVar7 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & (uVar4 >> 0x10 ^ uVar4))
                                * 4);
      if (iVar7 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18) == param_2) {
            return;
          }
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18 + 0x10);
        } while (iVar7 != -1);
      }
    }
    *(uint *)(param_1 + 0x80) = iVar16 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar16 + 1U) {
      FUN_140d36f74(plVar1,iVar16);
    }
    puVar6 = (ulonglong *)(*plVar1 + (longlong)iVar16 * 0xc);
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = 0;
    if (param_2 == 0) {
      uVar4 = 0;
      uVar8 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      uVar8 = (ulonglong)*(uint *)(lVar17 + 0x10);
      if (*(uint *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar5 = *(uint *)(lVar17 + 0x10);
        bVar18 = uVar5 == 0;
        if (bVar18) {
          *(uint *)(lVar17 + 0x10) = uVar9;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar18) {
          uVar5 = uVar9;
        }
        uVar8 = (ulonglong)uVar5;
      }
    }
    *puVar6 = (ulonglong)uVar4 | uVar8 << 0x20;
    *(undefined1 *)(puVar6 + 1) = 1;
  }
  else if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar17 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x68);
    }
    iVar7 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                              4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18) == param_2) {
          *(uint *)(param_1 + 0x80) = iVar16 + 1U;
          if (*(uint *)(param_1 + 0x84) < iVar16 + 1U) {
            FUN_140d36f74(plVar1,iVar16);
          }
          puVar6 = (ulonglong *)(*plVar1 + (longlong)iVar16 * 0xc);
          *(undefined4 *)(puVar6 + 1) = 0;
          *puVar6 = 0;
          if (param_2 == 0) {
            uVar4 = 0;
            uVar8 = 0;
          }
          else {
            uVar4 = *(uint *)(param_2 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar17 = 0;
            }
            uVar8 = (ulonglong)*(uint *)(lVar17 + 0x10);
            if (*(uint *)(lVar17 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              uVar9 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar18) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar9);
              }
              LOCK();
              uVar5 = *(uint *)(lVar17 + 0x10);
              bVar18 = uVar5 == 0;
              if (bVar18) {
                *(uint *)(lVar17 + 0x10) = uVar9;
                uVar5 = 0;
              }
              UNLOCK();
              if (bVar18) {
                uVar5 = uVar9;
              }
              uVar8 = (ulonglong)uVar5;
            }
          }
          *puVar6 = (ulonglong)uVar4 | uVar8 << 0x20;
          *(undefined1 *)(puVar6 + 1) = 0;
          return;
        }
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 140d36f74 FUN_140d36f74 body=373 status=ok
// SIG undefined FUN_140d36f74(void)

void FUN_140d36f74(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d36ffd;
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
LAB_140d36ffd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140d370ea FUN_140d370ea body=1001 status=ok
// SIG undefined FUN_140d370ea(void)

uint * FUN_140d370ea(uint *param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined4 local_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  uint uStack_48;
  uint uStack_44;
  longlong local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == 0) goto LAB_140d37354;
  local_50 = *(undefined2 **)(*(longlong *)(param_2 + 0xa8) + 0x18);
  FUN_1400021e4(&local_50,&local_60);
  iVar8 = DAT_14cb1cd28 + -1;
  puVar5 = DAT_14cb1cd20;
  if (DAT_14cb1cd28 == 0) {
    puVar5 = &DAT_149dfb77a;
    iVar8 = 0;
  }
  local_90 = 0xffffffff;
  local_98 = (undefined2 *)CONCAT44(local_98._4_4_,1);
  iVar8 = FUN_1447ee042(&local_60,puVar5,iVar8,1);
  if (iVar8 != -1) {
    uVar3 = 0;
    uVar6 = DAT_14cb1cd28 - 1;
    if (DAT_14cb1cd28 == 0) {
      uVar6 = uVar3;
    }
    uVar4 = local_58 - 1;
    if (local_58 == 0) {
      uVar4 = uVar3;
    }
    if (0 < (int)((uVar4 - (iVar8 + uVar6)) + -0x1d)) {
      iVar8 = iVar8 + uVar6 + 0x12;
      uVar4 = uVar4 - iVar8;
      uVar6 = 0x11;
      if ((int)uVar4 < 0x11) {
        uVar6 = uVar4;
      }
      if (0 < (int)uVar6) {
        uVar3 = uVar6;
      }
      if (0 < (int)uVar4) {
        iVar9 = local_58 - (uVar3 + iVar8);
        if (iVar9 != 0) {
          memmove(local_60 + iVar8,local_60 + iVar8 + uVar3,(longlong)iVar9 * 2);
        }
        local_58 = local_58 - uVar3;
        FUN_1449649ae();
      }
    }
  }
  puVar1 = param_1 + 6;
  lVar11 = *(longlong *)(param_2 + 0xa8);
  if (lVar11 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    if ((int)param_1[9] < 0) {
      FUN_1446f8c06(puVar1,0);
    }
    if (*(undefined2 **)puVar1 != (undefined2 *)0x0) {
      **(undefined2 **)puVar1 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_50,lVar11);
    param_1[2] = (uint)local_50;
    param_1[3] = local_50._4_4_;
    param_1[4] = uStack_48;
    param_1[5] = uStack_44;
    if (param_1 + 2 == (uint *)&local_50) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)puVar1 != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 6) = local_40;
      local_40 = 0;
      param_1[8] = local_38;
      param_1[9] = local_34;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    iVar8 = DAT_14c9647dc;
    uVar3 = *(uint *)(lVar11 + 0xc);
    if (cVar2 != '\0') {
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      if ((*(uint *)(lVar11 + 8) & 0x8400000) != 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_140d3727b;
      }
    }
    *param_1 = uVar3;
    if ((int)uVar3 < iVar8) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar3 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar3 = uVar6;
      }
    }
    param_1[1] = uVar3;
  }
LAB_140d3727b:
  local_50 = *(undefined2 **)(param_2 + 0x18);
  FUN_1400021e4(&local_50,&local_70);
  puVar5 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar5 = local_70;
  }
  local_50 = *(undefined2 **)(*(longlong *)(param_2 + 0x10) + 0x18);
  FUN_1400021e4(&local_50,&local_80);
  puVar10 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar10 = local_80;
  }
  puVar7 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar7 = local_60;
  }
  local_98 = puVar5;
  FUN_140002266(&local_50,L"%s.%s.%s",puVar7,puVar10);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar5 = local_50;
  if (uStack_48 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  uVar3 = FUN_144a1ccda(puVar5,0);
  param_1[10] = uVar3;
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140d37354:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d37530 FUN_140d37530 body=2304 status=ok
// SIG undefined FUN_140d37530(void)

void FUN_140d37530(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  undefined8 in_R11;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  bool local_cd;
  uint local_cc;
  longlong local_c8;
  uint *local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  code *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x2a8) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x2b0);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x2b0);
    if (*(longlong *)(*(longlong *)(param_1 + 0x2a8) + 0x18) == lVar6) goto LAB_140d37cc3;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  if (lVar6 == 0) goto LAB_140d37cc3;
  local_98 = 0;
  uStack_90 = 0;
  local_c8 = *(longlong *)(param_1 + 0xa8);
  lVar6 = FUN_140d37e32();
  bVar21 = lVar6 != 0;
  if ((lVar6 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar6 != 0) goto LAB_140d375c8;
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140d37a4f;
    lVar17 = 0;
    uVar14 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
LAB_140d375f7:
    local_cd = bVar21;
    if (lVar17 != DAT_14cad00c8) goto LAB_140d37605;
    if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar6);
    }
    FUN_147f49d46(local_c8,&local_98);
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_140d375c8:
    if (DAT_14cad00c8 == 0) {
      local_f0 = &local_a8;
      local_a8 = FUN_144a7958c;
      local_e0 = FUN_14081d0ea;
      local_e8 = FUN_14081d0ea;
      local_f8 = &LAB_1479b7a0c;
      local_100 = &LAB_1463b464e;
      local_108 = L"Engine";
      local_110 = 0;
      local_118 = 0x10000005;
      local_120 = 8;
      local_128 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        uVar14 = 0;
LAB_140d37a4f:
        local_f0 = &local_a8;
        local_a8 = FUN_144a7958c;
        local_e0 = FUN_14081d0ea;
        local_e8 = FUN_14081d0ea;
        local_f8 = &LAB_1479b7a0c;
        local_100 = &LAB_1463b464e;
        local_108 = L"Engine";
        local_110 = 0;
        local_118 = 0x10000005;
        local_120 = 8;
        local_128 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8);
        lVar17 = 0;
        uVar14 = uVar14 & 0xffffffff;
        goto LAB_140d375f7;
      }
    }
    local_cd = true;
    if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      lVar17 = lVar6;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) goto LAB_140d375f7;
    }
LAB_140d37605:
    if ((local_cd != false) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar6);
      uVar14 = uVar14 & 0xffffffff;
    }
    puVar18 = (uint *)(local_c8 + 0x250);
    iVar12 = *(int *)(local_c8 + 0x268);
    if (iVar12 == 0) {
      uVar20 = 1;
      uVar13 = 0;
      iVar5 = 0;
      iVar15 = 0;
    }
    else {
      puVar7 = *(uint **)(local_c8 + 0x260);
      if (*(uint **)(local_c8 + 0x260) == (uint *)0x0) {
        puVar7 = puVar18;
      }
      uVar19 = *puVar7;
      if (uVar19 == 0) {
        iVar5 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar5 = iVar12 + -1;
        }
        uVar13 = 0;
        uVar20 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar20 = uVar13;
        }
        iVar15 = 0;
        do {
          if (uVar20 == uVar13) goto LAB_140d37b1c;
          iVar15 = iVar15 + 0x20;
          uVar19 = puVar7[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar13 = 0;
        iVar15 = 0;
      }
      uVar20 = (ulonglong)(-uVar19 & uVar19);
      uVar1 = uVar20 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar5 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar12 <= iVar5) {
        iVar5 = iVar12;
      }
    }
    if (iVar5 != iVar12) {
      uVar19 = 0xffffffff;
      do {
        lVar17 = *(longlong *)(*(longlong *)(local_c8 + 0x240) + (longlong)iVar5 * 0x10);
        if (lVar17 != 0) {
          if ((DAT_14c950c29 & local_cd) == 1) {
            local_cc = (uint)uVar14;
            local_c0 = puVar18;
            FUN_1456cec3c(lVar6);
            uVar14 = (ulonglong)local_cc;
            puVar18 = local_c0;
LAB_140d376e0:
            if (DAT_14cad00c8 == 0) {
              local_f0 = &local_a8;
              local_a8 = FUN_144a7958c;
              local_e0 = FUN_14081d0ea;
              local_e8 = FUN_14081d0ea;
              local_f8 = &LAB_1479b7a0c;
              local_100 = &LAB_1463b464e;
              local_108 = L"Engine";
              local_110 = 0;
              local_118 = 0x10000005;
              local_120 = 8;
              local_128 = 0x110;
              local_cc = (uint)uVar14;
              local_c0 = puVar18;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              uVar14 = (ulonglong)local_cc;
              puVar18 = local_c0;
              if (DAT_14cad00c8 == 0) goto LAB_140d3793c;
            }
            if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140d3793c;
            lVar16 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar16 = lVar6;
            }
          }
          else {
            if ((char)uVar14 == '\0') goto LAB_140d376e0;
LAB_140d3793c:
            lVar16 = 0;
          }
          uVar1 = uStack_90;
          if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) {
            lVar16 = (longlong)(int)uStack_90;
            uVar11 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar11);
            local_b8 = param_1;
            if (uStack_90._4_4_ < uVar11) {
              local_cc = (uint)uVar14;
              local_c0 = puVar18;
              FUN_140d3808e(&local_98,uVar1 & 0xffffffff);
              uVar14 = (ulonglong)local_cc;
              puVar18 = local_c0;
            }
            *(longlong *)(local_98 + lVar16 * 8) = lVar17;
            param_1 = local_b8;
          }
        }
        uVar19 = uVar19 & ~(uint)uVar20;
        puVar7 = *(uint **)(local_c8 + 0x260);
        if (*(uint **)(local_c8 + 0x260) == (uint *)0x0) {
          puVar7 = puVar18;
        }
        iVar2 = *(int *)(local_c8 + 0x268);
        iVar5 = (int)uVar13;
        lVar17 = (longlong)iVar5;
        uVar11 = puVar7[lVar17] & uVar19;
        if (uVar11 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar8) {
            lVar16 = 0;
            do {
              uVar11 = puVar7[lVar17 + lVar16 + 1];
              if (uVar11 != 0) {
                uVar13 = (ulonglong)(iVar5 + (int)lVar16 + 1);
                uVar19 = 0xffffffff;
                goto LAB_140d377a8;
              }
              iVar15 = iVar15 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar9 - lVar17 != lVar16);
            uVar19 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar13 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar2;
        }
        else {
LAB_140d377a8:
          uVar20 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar20 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar5 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar5) {
            iVar5 = iVar2;
          }
        }
      } while (iVar5 != iVar12);
    }
  }
LAB_140d37b1c:
  if ((longlong)(int)uStack_90 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(local_98 + lVar6) + 0x18) == *(longlong *)(param_1 + 0x2b0)) {
        FUN_140d37f18(param_1);
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)uStack_90 * 8 != lVar6);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0x2a8) == 0) &&
     ((lVar6 = *(longlong *)(param_1 + 0xb0), lVar6 != 0 ||
      (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)))) {
    if (*(longlong *)(lVar6 + 0x1f0) == 0) {
      puVar10 = (undefined8 *)(lVar6 + 0x458);
    }
    else {
      puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar10;
    local_a8 = (code *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    pcVar4 = local_a8;
    local_a0 = 3;
    *(undefined ***)local_a8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar17 == 0) {
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    *(longlong *)(local_a8 + 0x10) = lVar17;
    *(undefined ***)local_a8 = &PTR_FUN_14ac88cd0;
    *(undefined8 *)(local_a8 + 0x18) = 0;
    iVar12 = 0;
    if (param_1 != 0) {
      uVar19 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_a8 + 0x18) = uVar19;
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar12 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar6 + 0x10);
        bVar21 = iVar12 == 0;
        if (bVar21) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar12;
    *(code **)(pcVar4 + 0x20) = FUN_140d37530;
    *(undefined4 *)(pcVar4 + 0x28) = 0;
    local_98 = 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    FUN_14016fdb0(uVar3,local_b0,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    if (local_a0 != 0) {
      if (local_a8 == (code *)0x0) goto LAB_140d37cc3;
      (*(code *)**(undefined8 **)local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      local_a0 = 0;
    }
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140d37cc3:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d37e32 FUN_140d37e32 body=228 status=ok
// SIG undefined FUN_140d37e32(void)

longlong FUN_140d37e32(void)

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
  if (DAT_14cb21f68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458bba18;
    local_38 = &LAB_147f22aa5;
    local_40 = &LAB_14180c776;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x350;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxChildActorComponent",&DAT_14cb21f68,FUN_146436a04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb21f68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d37f18 FUN_140d37f18 body=230 status=ok
// SIG undefined FUN_140d37f18(void)

void FUN_140d37f18(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x55] = param_2;
  (**(code **)(*param_1 + 0x490))(param_1,param_2,&DAT_14cadad98,0);
  if (param_1[0x15] == 0) {
    lVar2 = param_1[0x55];
  }
  else {
    lVar2 = param_1[0x55];
    if (*(char *)(param_1[0x15] + 0x178) == '\x03') {
      *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(lVar2 + 0x2e0);
      lVar1 = *(longlong *)(lVar2 + 0x2d0);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(lVar2 + 0x2d0);
        }
      }
      param_1[0x57] = lVar1;
      return;
    }
  }
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x2e0) != (char)param_1[0x58])) {
    *(char *)(lVar2 + 0x2e0) = (char)param_1[0x58];
    FUN_140d2a74a(param_1[0x55]);
  }
  FUN_140d37ffe(param_1);
  return;
}



// FUNCTION 140d37ffe FUN_140d37ffe body=144 status=ok
// SIG undefined FUN_140d37ffe(void)

void FUN_140d37ffe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2b8);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    if (*(longlong *)(lVar1 + 0x2d0) != lVar2) {
      lVar1 = *(longlong *)(param_1 + 0x2a8);
      lVar2 = *(longlong *)(param_1 + 0x2b8);
      if (DAT_14c950c29 == 1) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_1 + 0x2b8);
        }
      }
      *(longlong *)(lVar1 + 0x2d0) = lVar2;
      FUN_140d381f0(*(undefined8 *)(param_1 + 0x2a8));
      return;
    }
  }
  return;
}



// FUNCTION 140d3808e FUN_140d3808e body=353 status=ok
// SIG undefined FUN_140d3808e(void)

void FUN_140d3808e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d38113;
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
LAB_140d38113:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140d381f0 FUN_140d381f0 body=107 status=ok
// SIG undefined FUN_140d381f0(void)

void FUN_140d381f0(longlong *param_1)

{
  longlong lVar1;
  
  if (((char)param_1[0x5c] == '\x02') && (lVar1 = param_1[0x5a], lVar1 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    if (param_1[0x59] != lVar1) {
      (**(code **)(*param_1 + 0x5f0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140d38246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x600))(param_1,param_1[0x5a]);
      return;
    }
  }
  return;
}



// FUNCTION 140d3825c FUN_140d3825c body=1157 status=ok
// SIG undefined FUN_140d3825c(void)

void FUN_140d3825c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 local_31;
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
            goto LAB_140d38347;
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
LAB_140d38347:
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_31);
            goto LAB_140d38410;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_31) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_31,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_31,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_31,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_31,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
LAB_140d38410:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d386e2(param_1,local_30,local_31);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d386e2 FUN_140d386e2 body=111 status=ok
// SIG undefined FUN_140d386e2(void)

void FUN_140d386e2(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    FUN_140d38752();
    lVar1 = *(longlong *)(param_1 + 0x3a8);
    if (lVar1 != 0) {
      FUN_141078a6c(&local_28);
      FUN_1410789fe(lVar1 + 0x59e,param_1,local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d38752 FUN_140d38752 body=2925 status=ok
// SIG undefined FUN_140d38752(void)

void FUN_140d38752(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_408 [40];
  ulonglong local_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined4 local_3b0;
  longlong local_3a8;
  longlong *local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  ulonglong local_380;
  longlong local_378;
  float local_36c;
  undefined8 local_368;
  longlong *local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  uVar8 = FUN_1447210f0();
  FUN_1404d1e78(&local_3a8,uVar8);
  if (((local_3a8 != 0) && (local_3a0 != (longlong *)0x0)) && (0 < (int)local_3a0[1])) {
    iVar14 = (int)local_3a0[1];
    do {
      if (iVar14 == 0) {
        plVar22 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar19 = (int)local_3a0[1];
      bVar30 = iVar14 == iVar19;
      if (bVar30) {
        *(int *)(local_3a0 + 1) = iVar14 + 1;
        iVar19 = iVar14;
      }
      iVar14 = iVar19;
      UNLOCK();
      plVar22 = local_3a0;
    } while (!bVar30);
    lVar17 = 0;
    if (plVar22 != (longlong *)0x0) {
      lVar17 = local_3a8;
    }
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x3f0) != 0)) &&
       (*(int *)(param_1 + 0x3f8) - 1U < 0xfffffffe)) {
      if ((*(longlong *)(lVar17 + 0x200) != 0) &&
         ((*(byte *)(*(longlong *)(lVar17 + 0x200) + 0xa0) & 1) == 0)) {
        FUN_14009fd82(DAT_14c82b500,lVar17 + 0x200,0xff);
      }
      uVar10 = FUN_140d3be2e(param_1 + 0x3f0);
      uVar8 = 0;
      FUN_140d39ec2(lVar17,uVar10,0);
      if (*(int *)(lVar17 + 0xc) != 0) {
        uVar6 = *(uint *)(lVar17 + 8);
        uVar8 = 0;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
          puVar15 = (undefined8 *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          if ((puVar15 == (undefined8 *)0x0) ||
             ((*(int *)(puVar15 + 2) != *(int *)(lVar17 + 0xc) ||
              ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) {
            uVar8 = 0;
          }
          else {
            uVar8 = *puVar15;
          }
        }
      }
      FUN_140d3ab18(&local_368,uVar8);
      lVar9 = local_368;
      lVar12 = (longlong)(int)local_360;
      if (lVar12 != 0) {
        lVar28 = 0;
        do {
          if (*(longlong *)(lVar9 + lVar28) != 0) {
            FUN_140d397ce(lVar17);
          }
          lVar28 = lVar28 + 8;
        } while (lVar12 * 8 != lVar28);
      }
      if (local_368 != 0) {
        FUN_1400020a8(local_368);
      }
      FUN_140d3b414(lVar17,param_1 + 0x3c8);
      (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x10))(param_1 + 0x3c8);
      if (*(int *)(lVar17 + 0x4a0) != *(int *)(lVar17 + 0x4cc)) {
        uVar6 = (uint)((ulonglong)local_378 >> 0x10);
        uVar7 = (uint)local_378 & 0xffff;
        lVar9 = lVar17 + 0x4d0;
        if (*(longlong *)(lVar17 + 0x4d8) != 0) {
          lVar9 = *(longlong *)(lVar17 + 0x4d8);
        }
        iVar14 = *(int *)(lVar9 + (ulonglong)
                                  (*(int *)(lVar17 + 0x4e0) - 1U &
                                  (int)((ulonglong)local_378 >> 0x20) +
                                  ((uint)local_378 << 0x10 | uVar7) +
                                  (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar14 != -1) {
          do {
            plVar11 = (longlong *)(*(longlong *)(lVar17 + 0x498) + (longlong)iVar14 * 0x24);
            if (*plVar11 == local_378) {
              if (((ulonglong)(plVar11 + 1) & 0xfffffffffffffff7) != 0) {
                *(longlong *)(param_1 + 0x3d0) = plVar11[2];
                *(int *)(param_1 + 0x3d8) = (int)plVar11[3];
              }
              break;
            }
            iVar14 = *(int *)((longlong)plVar11 + 0x1c);
          } while (iVar14 != -1);
        }
      }
      uVar6 = *(uint *)(param_1 + 0xc);
      local_368 = (ulonglong)uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar14 = *(int *)(lVar9 + 0x10);
      local_3d8 = lVar17;
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar14 = *(int *)(lVar9 + 0x10);
        bVar30 = iVar14 == 0;
        if (bVar30) {
          *(int *)(lVar9 + 0x10) = iVar19;
          iVar14 = 0;
        }
        UNLOCK();
        uVar6 = (uint)local_368;
        if (bVar30) {
          iVar14 = iVar19;
        }
      }
      local_368._0_4_ = uVar6;
      lVar17 = local_3d8;
      plVar11 = (longlong *)(local_3d8 + 0x208);
      local_368 = CONCAT44(iVar14,(uint)local_368);
      iVar14 = *(int *)(local_3d8 + 0x210);
      if ((longlong)iVar14 != 0) {
        lVar9 = *(longlong *)(local_3d8 + 0x208);
        uVar29 = 0;
        do {
          cVar5 = FUN_141078c26(uVar29 + lVar9);
          if (cVar5 != '\0') {
            if ((int)(~uVar29 >> 3) != 0) goto LAB_140d38ba5;
            break;
          }
          uVar29 = uVar29 + 8;
        } while ((longlong)iVar14 * 8 != uVar29);
      }
      iVar14 = *(int *)(lVar17 + 0x210);
      uVar6 = iVar14 + 1;
      *(uint *)(lVar17 + 0x210) = uVar6;
      if (*(uint *)(lVar17 + 0x214) < uVar6) {
        FUN_14579da12(plVar11);
      }
      *(ulonglong *)(*plVar11 + (longlong)iVar14 * 8) = local_368;
LAB_140d38ba5:
      iVar14 = *(int *)(lVar17 + 0x210);
      if (1 < (longlong)iVar14) {
        lVar17 = *plVar11;
        memset(local_358,0,0x2f0);
        local_360 = (longlong *)(lVar17 + (longlong)iVar14 * 8 + -8);
        local_368 = lVar17;
        fVar31 = logf((float)iVar14);
        local_358[0] = (int)(longlong)(fVar31 + fVar31);
        plVar11 = &local_368;
        do {
          puVar13 = (undefined8 *)*plVar11;
          puVar18 = (undefined8 *)plVar11[1];
          iVar14 = (int)plVar11[2];
          iVar19 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar13) >> 3);
          uVar6 = iVar19 + 1;
          puVar15 = puVar18;
          puVar23 = puVar13;
          puVar24 = puVar13;
          local_3d0 = plVar11;
          if (iVar14 != 0) {
LAB_140d38c35:
            if (8 < (int)uVar6) {
              local_3e0 = CONCAT44(local_3e0._4_4_,iVar14);
              uVar8 = puVar23[uVar6 >> 1];
              puVar23[uVar6 >> 1] = *puVar23;
              *puVar23 = uVar8;
              puVar25 = puVar15 + 1;
              puVar24 = puVar23;
              local_3c8 = puVar13;
              local_3c0 = puVar18;
              do {
                puVar18 = puVar24 + 1;
                puVar20 = puVar24 + 1;
                do {
                  puVar24 = puVar20;
                  puVar13 = puVar18;
                  if (puVar15 < puVar24) break;
                  cVar5 = FUN_140d392c0(puVar23,puVar24);
                  puVar18 = puVar13 + 1;
                  puVar20 = puVar24 + 1;
                } while (cVar5 == '\0');
                puVar18 = puVar25 + -2;
                do {
                  puVar20 = puVar25;
                  puVar16 = puVar18;
                  puVar25 = puVar20 + -1;
                  if (puVar25 <= puVar23) break;
                  cVar5 = FUN_140d392c0(puVar25,puVar23);
                  puVar18 = puVar16 + -1;
                } while (cVar5 == '\0');
                if (puVar25 < puVar24) goto LAB_140d38cd5;
                uVar8 = *puVar24;
                *puVar24 = *puVar25;
                *puVar25 = uVar8;
              } while( true );
            }
            for (; puVar18 = puVar23, puVar13 = puVar23, puVar23 < puVar15; puVar15 = puVar15 + -1)
            {
              while (puVar24 = puVar18, puVar13 = puVar13 + 1, puVar13 <= puVar15) {
                cVar5 = FUN_140d392c0(puVar24,puVar13);
                puVar18 = puVar13;
                if (cVar5 == '\0') {
                  puVar18 = puVar24;
                }
              }
              uVar8 = *puVar24;
              *puVar24 = *puVar15;
              *puVar15 = uVar8;
            }
            goto LAB_140d38dae;
          }
LAB_140d3901c:
          if (uVar6 != 0) {
            uVar7 = (iVar19 - (iVar19 + -1 >> 0x1f)) + -1 >> 1;
            do {
              local_3e0 = (ulonglong)uVar7;
              uVar29 = local_3e0;
              while (uVar4 = uVar7 * 2 + 1, (int)uVar4 < (int)uVar6) {
                uVar21 = (ulonglong)uVar4;
                uVar7 = uVar7 * 2 + 2;
                if (((int)uVar7 < (int)uVar6) &&
                   (cVar5 = FUN_140d392c0(puVar24 + (int)uVar7,puVar24 + (int)uVar4), cVar5 == '\0')
                   ) {
                  uVar21 = (ulonglong)uVar7;
                }
                uVar7 = (uint)uVar21;
                puVar15 = puVar24 + (int)uVar29;
                puVar13 = puVar24 + (int)uVar7;
                cVar5 = FUN_140d392c0(puVar15,puVar13);
                if (cVar5 == '\0') break;
                uVar8 = *puVar15;
                *puVar15 = *puVar13;
                *puVar13 = uVar8;
                uVar29 = uVar21;
              }
              uVar7 = (int)local_3e0 - 1;
            } while ((int)local_3e0 != 0);
            local_3e0 = 0xffffffff;
            if (1 < (int)uVar6) {
              local_3e0 = (ulonglong)uVar6;
              uVar8 = *puVar24;
              *puVar24 = puVar24[local_3e0 - 1];
              puVar24[local_3e0 - 1] = uVar8;
              if (uVar6 != 2) {
                local_3e0 = local_3e0 - 1;
                do {
                  iVar14 = 0;
                  iVar27 = 1;
                  iVar19 = 0;
                  do {
                    iVar14 = iVar14 + 2;
                    iVar26 = iVar27;
                    if (((longlong)iVar14 < (longlong)local_3e0) &&
                       (cVar5 = FUN_140d392c0(puVar24 + iVar14,puVar24 + iVar27), cVar5 == '\0')) {
                      iVar26 = iVar14;
                    }
                    puVar15 = puVar24 + iVar19;
                    puVar13 = puVar24 + iVar26;
                    cVar5 = FUN_140d392c0(puVar15,puVar13);
                    if (cVar5 == '\0') break;
                    uVar8 = *puVar15;
                    *puVar15 = *puVar13;
                    *puVar13 = uVar8;
                    iVar14 = iVar26 * 2;
                    iVar27 = iVar26 * 2 + 1;
                    iVar19 = iVar26;
                  } while ((longlong)iVar27 < (longlong)local_3e0);
                  uVar8 = *puVar24;
                  *puVar24 = puVar24[local_3e0 - 1];
                  puVar24[local_3e0 - 1] = uVar8;
                  uVar29 = local_3e0 - 1;
                  bVar30 = 2 < local_3e0;
                  local_3e0 = uVar29;
                } while (bVar30);
              }
            }
          }
LAB_140d38dae:
          plVar11 = local_3d0 + -3;
          lVar17 = local_3d8;
        } while (&local_368 <= plVar11);
      }
      if ((*(char *)(param_1 + 0x415) == '\x01') && (0 < *(int *)(lVar17 + 0x3c0))) {
        iVar14 = *(int *)(lVar17 + 0x210);
        if ((longlong)iVar14 == 0) {
          lVar9 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar17 + 0x208);
          lVar9 = 0;
          lVar28 = 0;
          do {
            local_380 = *(ulonglong *)(lVar12 + lVar28);
            if (((((local_380 >> 0x20 != 0) && (uVar6 = (uint)local_380, -1 < (int)uVar6)) &&
                 ((int)uVar6 < DAT_14c9647dc)) &&
                ((lVar17 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8)),
                 lVar17 != 0 && (*(int *)(lVar17 + 0x10) == (int)(local_380 >> 0x20))))) &&
               ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)) {
              lVar17 = FUN_14479d2ce(&local_380);
              puVar3 = *(undefined4 **)(local_3d8 + 0x3b8);
              local_388 = *(undefined8 *)(puVar3 + 4);
              local_398 = *puVar3;
              uStack_394 = puVar3[1];
              uStack_390 = puVar3[2];
              uStack_38c = puVar3[3];
              plVar11 = *(longlong **)(lVar17 + 0x3a8);
              if (((plVar11 != (longlong *)0x0) &&
                  (cVar5 = (**(code **)(*plVar11 + 0x7c0))(plVar11,&local_398,&local_36c,&local_368)
                  , cVar5 != '\0')) && ((0.0 <= local_36c && (local_36c <= 0.0)))) {
                lVar9 = FUN_14479d2ce(&local_380);
                lVar17 = local_3d8;
                break;
              }
            }
            lVar28 = lVar28 + 8;
            lVar17 = local_3d8;
          } while ((longlong)iVar14 * 8 != lVar28);
        }
        if (lVar9 == param_1) {
          FUN_143c29c0c(lVar17);
        }
      }
    }
    if (((*(longlong *)(param_1 + 0x3f0) != 0) && (*(int *)(param_1 + 0x3f8) - 1U < 0xfffffffe)) &&
       (lVar9 = FUN_140d3be2e(param_1 + 0x3f0), lVar9 != 0)) {
      FUN_140d39538(lVar17,&local_368,lVar9);
      plVar11 = local_360;
      if ((longlong *)(param_1 + 0x418) != &local_368) {
        *(ulonglong *)(param_1 + 0x418) = local_368;
        local_368 = 0;
        plVar2 = *(longlong **)(param_1 + 0x420);
        if (local_360 != plVar2) {
          local_360 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x420) = plVar11;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar2 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
        }
      }
      plVar11 = local_360;
      if (local_360 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_360 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_360)(local_360);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      lVar17 = *(longlong *)(param_1 + 0x418);
      if ((lVar17 != 0) &&
         (((*(char *)(lVar17 + 0x30) != '\0' || (*(char *)(lVar17 + 0x31) != '\0')) ||
          (*(int *)(lVar17 + 0x6c) != 2)))) {
        local_3b8 = (undefined8 *)0x0;
        local_3b0 = 0;
        FUN_1446efa72(&local_3b8,0,3,0x10);
        puVar15 = local_3b8;
        local_3b0 = 3;
        *local_3b8 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_3b8[2] = lVar12;
        *local_3b8 = &PTR_FUN_14afe32b0;
        local_3b8[3] = 0;
        FUN_14485c47a(local_3b8 + 3,param_1);
        puVar15[4] = FUN_1459b04b0;
        *(undefined4 *)(puVar15 + 5) = 0;
        FUN_140844560(lVar17,&local_368,&local_3b8);
      }
    }
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar22 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_3a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_3a0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140d38cd5:
  uVar8 = *puVar23;
  *puVar23 = *puVar25;
  *puVar25 = uVar8;
  iVar14 = (int)local_3e0 + -1;
  puVar20 = puVar20 + -2;
  if ((longlong)puVar16 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)puVar13) {
    if (puVar24 < puVar15) {
      *local_3d0 = (longlong)puVar24;
      local_3d0[1] = (longlong)puVar15;
      *(int *)(local_3d0 + 2) = iVar14;
      local_3d0 = local_3d0 + 3;
    }
    puVar15 = puVar16;
    puVar24 = puVar23;
    puVar13 = puVar23;
    if (puVar25 <= puVar23 + 1) goto LAB_140d38dae;
  }
  else {
    if (puVar23 + 1 < puVar25) {
      *local_3d0 = (longlong)puVar23;
      local_3d0[1] = (longlong)puVar20;
      *(int *)(local_3d0 + 2) = iVar14;
      local_3d0 = local_3d0 + 3;
    }
    puVar20 = puVar15;
    if (puVar15 <= puVar24) goto LAB_140d38dae;
  }
  iVar19 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar13) >> 3);
  uVar6 = iVar19 + 1;
  puVar18 = puVar15;
  puVar15 = puVar20;
  puVar23 = puVar24;
  if (iVar14 == 0) goto LAB_140d3901c;
  goto LAB_140d38c35;
}



// FUNCTION 140d392c0 FUN_140d392c0 body=631 status=ok
// SIG undefined FUN_140d392c0(void)

uint FUN_140d392c0(uint *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    uVar10 = *param_1;
    uVar7 = 0;
    if (((int)uVar10 < 0) || (DAT_14c9647dc <= (int)uVar10)) goto LAB_140d39364;
    plVar3 = (longlong *)
             ((ulonglong)((uVar10 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       ((*(uint *)(plVar3 + 2) == param_1[1] && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
      if (param_2[1] != 0) {
        uVar10 = *param_2;
        uVar7 = 0;
        if (((int)uVar10 < 0) || (uVar7 = 0, DAT_14c9647dc <= (int)uVar10)) goto LAB_140d39364;
        plVar4 = (longlong *)
                 ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
        if ((plVar4 != (longlong *)0x0) &&
           ((*(uint *)(plVar4 + 2) == param_2[1] && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar3;
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
            lVar5 = *plVar4;
          }
          else {
            lVar5 = 0;
          }
          if (*(int *)(lVar9 + 0x410) != *(int *)(lVar5 + 0x410)) {
            if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
              lVar9 = *plVar3;
            }
            else {
              lVar9 = 0;
            }
            if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
              lVar5 = *plVar4;
            }
            else {
              lVar5 = 0;
            }
            uVar7 = (uint)(*(int *)(lVar5 + 0x410) < *(int *)(lVar9 + 0x410));
            goto LAB_140d39364;
          }
          if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
            lVar9 = *plVar4;
          }
          else {
            lVar9 = 0;
          }
          local_40 = *(undefined2 **)(lVar9 + 0x18);
          FUN_1400021e4(&local_40,&local_30);
          if (param_1[1] == 0) {
LAB_140d39513:
            lVar9 = 0;
          }
          else {
            uVar10 = *param_1;
            lVar9 = 0;
            if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
              plVar3 = (longlong *)
                       ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
              if ((plVar3 == (longlong *)0x0) ||
                 ((*(uint *)(plVar3 + 2) != param_1[1] ||
                  ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_140d39513;
              lVar9 = *plVar3;
            }
          }
          local_20 = *(undefined8 *)(lVar9 + 0x18);
          FUN_1400021e4(&local_20,&local_40);
          puVar8 = local_30;
          if (local_28 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          puVar6 = &DAT_149dfb77a;
          if (local_38 != 0) {
            puVar6 = local_40;
          }
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)puVar6 + lVar9);
            uVar7 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)puVar8 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140d39491;
              }
              uVar7 = uVar7 - uVar10;
              goto LAB_140d394eb;
            }
            if (uVar1 == 0) break;
LAB_140d39491:
            lVar9 = lVar9 + 2;
          }
          uVar7 = 0;
LAB_140d394eb:
          if (local_40 != (undefined2 *)0x0) {
            FUN_1400020a8(local_40);
          }
          uVar7 = uVar7 >> 0x1f;
          if (local_30 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_140d39364;
        }
      }
    }
  }
  uVar7 = 0;
LAB_140d39364:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d39538 FUN_140d39538 body=526 status=ok
// SIG undefined FUN_140d39538(void)

longlong * FUN_140d39538(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar8 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_3 + 8);
  }
  FUN_1447a97f4(local_50,puVar8);
  if (local_50[0] == DAT_14c9485f0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_140d39663;
  }
  if (*(int *)(param_1 + 0x370) != *(int *)(param_1 + 0x39c)) {
    lVar5 = param_1 + 0x3a0;
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x3a8);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x3b0) - 1U & local_50[0]) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x368);
      iVar10 = iVar7;
      do {
        if (*(uint *)(lVar5 + (longlong)iVar10 * 0x40) == local_50[0]) goto LAB_140d395f2;
        iVar10 = *(int *)((longlong)iVar10 * 0x40 + lVar5 + 0x38);
      } while (iVar10 != -1);
    }
  }
  goto LAB_140d3969f;
  while (iVar7 = *(int *)(lVar9 + 0x38), iVar7 != -1) {
LAB_140d395f2:
    lVar9 = lVar5 + (longlong)iVar7 * 0x40;
    if (*(uint *)(lVar5 + (longlong)iVar7 * 0x40) == local_50[0]) goto LAB_140d3960d;
  }
  lVar9 = 0;
LAB_140d3960d:
  plVar2 = *(longlong **)(lVar9 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = *(longlong *)(lVar9 + 0x28);
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    if ((lVar5 != 0) && (0 < (int)plVar2[1])) {
      *param_2 = 0;
      param_2[1] = (longlong)plVar2;
      iVar7 = (int)plVar2[1];
      do {
        if (iVar7 == 0) {
          param_2[1] = 0;
          goto LAB_140d39659;
        }
        LOCK();
        iVar10 = (int)plVar2[1];
        bVar11 = iVar7 == iVar10;
        if (bVar11) {
          *(int *)(plVar2 + 1) = iVar7 + 1;
          iVar10 = iVar7;
        }
        iVar7 = iVar10;
        UNLOCK();
      } while (!bVar11);
      if (param_2[1] != 0) {
        *param_2 = lVar5;
      }
LAB_140d39659:
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      goto LAB_140d39663;
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
LAB_140d3969f:
  uVar3 = thunk_FUN_14050fd64();
  local_58 = 0;
  FUN_14088df30(uVar3,param_2,param_3,0);
  plVar4 = (longlong *)FUN_14579d500((longlong *)(param_1 + 0x368),local_50[0]);
  *plVar4 = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = (longlong *)plVar4[1];
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = (longlong *)plVar4[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    plVar4[1] = (longlong)plVar2;
  }
LAB_140d39663:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d39748 FUN_140d39748 body=133 status=ok
// SIG undefined FUN_140d39748(void)

undefined8 FUN_140d39748(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_1 + -0x3b0);
  FUN_1400021e4(&local_20,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_2,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d397ce FUN_140d397ce body=381 status=ok
// SIG undefined FUN_140d397ce(void)

void FUN_140d397ce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x200) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
    }
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    (**(code **)(*param_2 + 0x18))(param_2,&local_48);
    if ((longlong)(int)uStack_40 != 0) {
      plVar8 = local_48 + (longlong)(int)uStack_40 * 4;
      plVar7 = local_48;
      do {
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar1 = *plVar7;
          uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar5 = (uint)lVar1 & 0xffff;
          lVar4 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar4 = param_1 + 0xb8;
          }
          iVar6 = *(int *)(lVar4 + (ulonglong)
                                   (*(int *)(param_1 + 200) - 1U &
                                   (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
          if (iVar6 != -1) {
            do {
              lVar4 = *(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0x20;
              if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0x20) == lVar1) {
                if (((lVar4 != 0) && ((longlong *)(lVar4 + 8) != (longlong *)0x0)) &&
                   (plVar2 = *(longlong **)(lVar4 + 8), plVar2 != (longlong *)0x0)) {
                  (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,plVar7);
                }
                break;
              }
              iVar6 = *(int *)(lVar4 + 0x18);
            } while (iVar6 != -1);
          }
        }
        plVar7 = plVar7 + 4;
      } while (plVar7 != plVar8);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d3994c FUN_140d3994c body=401 status=ok
// SIG undefined FUN_140d3994c(void)

void FUN_140d3994c(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 unaff_XMM6_Da;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    if ((longlong)*(int *)(param_1 + 0x138) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x130);
      lVar5 = (longlong)*(int *)(param_1 + 0x138) * 0x30;
      do {
        if (((*(longlong *)(lVar4 + 0x10) == 0) || (*(int *)(lVar4 + 0xc) == 0)) ||
           (uVar1 = *(uint *)(lVar4 + 8), (int)uVar1 < 0)) {
LAB_140d39a07:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(lVar4 + 0xc)))
            goto LAB_140d39a07;
            lVar6 = *(longlong *)(lVar4 + 0x10);
            if ((*(uint *)(lVar7 + 8) & 0x10200000) != 0) {
              lVar6 = 0;
            }
          }
        }
        if (lVar6 == param_2) {
          if (lVar4 != 0) goto LAB_140d39a11;
          break;
        }
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
    }
    FUN_140d3b348(&local_70);
    puVar8 = (undefined4 *)((longlong)*(int *)(lVar3 + 0x44) + *(longlong *)(param_3 + 0x10));
    if (puVar8 != (undefined4 *)0x0) {
      unaff_XMM6_Da = *puVar8;
    }
    local_78 = *(undefined8 *)(param_3 + 0x18);
    iVar2 = *(int *)(param_1 + 0x138);
    *(uint *)(param_1 + 0x138) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x13c) < iVar2 + 1U) {
      FUN_140d39db2((longlong *)(param_1 + 0x130),iVar2);
    }
    lVar4 = *(longlong *)(param_1 + 0x130);
    lVar5 = (longlong)iVar2 * 0x30;
    *(undefined4 **)(lVar4 + lVar5) = puVar8;
    *(undefined4 *)(lVar4 + 8 + lVar5) = local_70;
    *(undefined4 *)(lVar4 + 0xc + lVar5) = local_6c;
    *(undefined8 *)(lVar4 + 0x10 + lVar5) = local_68;
    *(longlong *)(lVar4 + 0x18 + lVar5) = lVar3;
    *(undefined8 *)(lVar4 + 0x20 + lVar5) = local_78;
    *(undefined4 *)(lVar4 + 0x28 + lVar5) = unaff_XMM6_Da;
  }
LAB_140d39a11:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d39ade FUN_140d39ade body=337 status=ok
// SIG undefined FUN_140d39ade(void)

void FUN_140d39ade(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_3 + 8) != 0) {
    if ((longlong)*(int *)(param_1 + 0x138) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x130);
      lVar5 = (longlong)*(int *)(param_1 + 0x138) * 0x30;
      do {
        if (((*(longlong *)(lVar4 + 0x10) == 0) || (*(int *)(lVar4 + 0xc) == 0)) ||
           (uVar2 = *(uint *)(lVar4 + 8), (int)uVar2 < 0)) {
LAB_140d39b85:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(lVar4 + 0xc)))
            goto LAB_140d39b85;
            lVar6 = *(longlong *)(lVar4 + 0x10);
            if ((*(uint *)(lVar7 + 8) & 0x10200000) != 0) {
              lVar6 = 0;
            }
          }
        }
        if (lVar6 == param_2) {
          if (lVar4 != 0) goto LAB_140d39b8f;
          break;
        }
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = 0;
    FUN_140d3b1c4();
    iVar3 = *(int *)(param_1 + 0x138);
    *(uint *)(param_1 + 0x138) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
      FUN_140d3af46((longlong *)(param_1 + 0x130),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x130);
    lVar5 = (longlong)iVar3 * 0x30;
    puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5);
    *puVar1 = (undefined4)local_38;
    puVar1[1] = local_38._4_4_;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5);
    *puVar1 = (undefined4)local_48;
    puVar1[1] = local_48._4_4_;
    puVar1[2] = (undefined4)uStack_40;
    puVar1[3] = uStack_40._4_4_;
    puVar1 = (undefined4 *)(lVar4 + lVar5);
    *puVar1 = (undefined4)local_58;
    puVar1[1] = local_58._4_4_;
    puVar1[2] = (undefined4)uStack_50;
    puVar1[3] = uStack_50._4_4_;
  }
LAB_140d39b8f:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d39c30 FUN_140d39c30 body=385 status=ok
// SIG undefined FUN_140d39c30(void)

void FUN_140d39c30(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    if ((longlong)*(int *)(param_1 + 0x450) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x448);
      lVar8 = (longlong)*(int *)(param_1 + 0x450) * 0x38;
      do {
        if (((*(longlong *)(lVar7 + 0x10) == 0) || (*(int *)(lVar7 + 0xc) == 0)) ||
           (uVar1 = *(uint *)(lVar7 + 8), (int)uVar1 < 0)) {
LAB_140d39ce2:
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) != *(int *)(lVar7 + 0xc)))
            goto LAB_140d39ce2;
            lVar9 = *(longlong *)(lVar7 + 0x10);
            if ((*(uint *)(lVar11 + 8) & 0x10200000) != 0) {
              lVar9 = 0;
            }
          }
        }
        if (lVar9 == param_2) {
          if (lVar7 != 0) goto LAB_140d39cec;
          break;
        }
        lVar7 = lVar7 + 0x38;
        lVar8 = lVar8 + -0x38;
      } while (lVar8 != 0);
    }
    FUN_140d3b348(&local_58);
    uVar6 = local_58;
    local_5c = uStack_54;
    uVar5 = CONCAT44(uStack_4c,uStack_50);
    puVar10 = (undefined4 *)((longlong)*(int *)(lVar3 + 0x44) + *(longlong *)(param_3 + 0x10));
    if (puVar10 != (undefined4 *)0x0) {
      local_58 = *puVar10;
      uStack_54 = puVar10[1];
      uStack_50 = puVar10[2];
      uStack_4c = puVar10[3];
    }
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    iVar2 = *(int *)(param_1 + 0x450);
    *(uint *)(param_1 + 0x450) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x454) < iVar2 + 1U) {
      FUN_140d3b056((longlong *)(param_1 + 0x448),iVar2);
    }
    lVar7 = *(longlong *)(param_1 + 0x448);
    lVar8 = (longlong)iVar2 * 0x38;
    *(undefined4 **)(lVar7 + lVar8) = puVar10;
    *(undefined4 *)(lVar7 + 8 + lVar8) = uVar6;
    *(undefined4 *)(lVar7 + 0xc + lVar8) = local_5c;
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar5;
    *(longlong *)(lVar7 + 0x18 + lVar8) = lVar3;
    *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar4;
    puVar10 = (undefined4 *)(lVar7 + 0x28 + lVar8);
    *puVar10 = local_58;
    puVar10[1] = uStack_54;
    puVar10[2] = uStack_50;
    puVar10[3] = uStack_4c;
  }
LAB_140d39cec:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d39db2 FUN_140d39db2 body=272 status=ok
// SIG undefined FUN_140d39db2(void)

void FUN_140d39db2(longlong param_1,int param_2)

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



// FUNCTION 140d39ec2 FUN_140d39ec2 body=461 status=ok
// SIG undefined FUN_140d39ec2(void)

void FUN_140d39ec2(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1d0);
    uVar7 = (ulonglong)*(int *)(param_1 + 0x1d8);
    if (0 < (longlong)uVar7) {
      lVar5 = uVar7 * 0x18;
      do {
        lVar5 = lVar5 + -0x18;
        if (*(longlong *)(*plVar1 + lVar5) == param_2) {
          if (param_3 == '\0') goto LAB_140d3a026;
          FUN_14860a756(plVar1,(int)uVar7 + -1);
          FUN_14860a7c0(plVar1);
        }
        bVar3 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar3);
    }
    local_60 = &local_58;
    local_50 = 0;
    uStack_48 = 0;
    local_70 = param_1;
    local_68 = param_2;
    local_58 = param_2;
    if ((longlong)*(int *)(param_2 + 0x88) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x80);
      lVar6 = (longlong)*(int *)(param_2 + 0x88) * 0x90;
      do {
        FUN_140d3cc8e(&local_70,lVar5);
        lVar5 = lVar5 + 0x90;
        lVar6 = lVar6 + -0x90;
      } while (lVar6 != 0);
    }
    if ((longlong)*(int *)(param_2 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x90);
      lVar6 = (longlong)*(int *)(param_2 + 0x98) * 0x90;
      do {
        FUN_140d3cc8e(&local_70,lVar5);
        lVar5 = lVar5 + 0x90;
        lVar6 = lVar6 + -0x90;
      } while (lVar6 != 0);
    }
    iVar2 = *(int *)(param_1 + 0x1d8);
    *(uint *)(param_1 + 0x1d8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1dc) < iVar2 + 1U) {
      FUN_14579d97e(plVar1,iVar2);
    }
    FUN_14579d5b6((longlong)iVar2 * 0x18 + *plVar1);
    if (param_3 != '\0') {
      lVar5 = 0;
      bVar3 = true;
      do {
        bVar4 = bVar3;
        if (*(longlong *)(param_1 + 0x180 + lVar5 * 8) == param_2) {
          FUN_14093b8fc(param_1);
        }
        lVar5 = 1;
        bVar3 = false;
      } while (bVar4);
    }
    FUN_140b6229c(local_50,uStack_48 & 0xffffffff);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140d3a026:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d3a090 FUN_140d3a090 body=55 status=ok
// SIG undefined FUN_140d3a090(void)

void FUN_140d3a090(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_140d3a0c8(param_1,param_2);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140d3a0c8 FUN_140d3a0c8 body=482 status=ok
// SIG undefined FUN_140d3a0c8(void)

undefined4 * FUN_140d3a0c8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  param_1[8] = param_2[8];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  uVar2 = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_140d3a4fe(param_1 + 10,iVar1);
    FUN_140d3a5d8(*(undefined8 *)(param_1 + 10),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if (iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_140d3a81c(param_1 + 0xe,iVar1);
    FUN_140d3a8f6(*(undefined8 *)(param_1 + 0xe),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if (iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_140d3a424(param_1 + 0x12,iVar1);
    FUN_140d3a9de(*(undefined8 *)(param_1 + 0x12),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if (iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_14860af38(param_1 + 0x16,iVar1);
    FUN_14860afa2(*(undefined8 *)(param_1 + 0x16),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar1 = param_2[0x1c];
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  param_1[0x1c] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_140d3a35a(param_1 + 0x1a,iVar1);
    FUN_140d3a2aa(*(undefined8 *)(param_1 + 0x1a),uVar2,iVar1);
  }
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar1 = param_2[0x24];
  uVar2 = *(undefined8 *)(param_2 + 0x22);
  param_1[0x24] = iVar1;
  if (iVar1 == 0) {
    param_1[0x25] = 0;
  }
  else {
    FUN_140d3a6ce(param_1 + 0x22,iVar1,0);
    FUN_140d3a320(*(undefined8 *)(param_1 + 0x22),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 140d3a2aa FUN_140d3a2aa body=118 status=ok
// SIG undefined FUN_140d3a2aa(void)

void FUN_140d3a2aa(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x10);
  do {
    *(undefined4 *)(puVar3 + -1) = *(undefined4 *)(param_2 + 1);
    puVar3[-2] = *param_2;
    *puVar3 = 0;
    iVar1 = *(int *)(param_2 + 3);
    uVar2 = param_2[2];
    *(int *)(puVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_140d3a6ce(puVar3,iVar1,0);
      FUN_140d3a320(*puVar3,uVar2);
    }
    param_2 = param_2 + 4;
    puVar3 = puVar3 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140d3a320 FUN_140d3a320 body=57 status=ok
// SIG undefined FUN_140d3a320(void)

void FUN_140d3a320(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
      *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d3a35a FUN_140d3a35a body=201 status=ok
// SIG undefined FUN_140d3a35a(void)

void FUN_140d3a35a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x20;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[((longlong)param_2 & 0x7ffffffffffffffU) * 2]
                        ];
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
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140d3a424 FUN_140d3a424 body=217 status=ok
// SIG undefined FUN_140d3a424(void)

undefined8 FUN_140d3a424(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = (longlong)param_2 * 0x210;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar2 < 0x7ff1) {
        uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
      }
      else {
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar2 = -uVar5 & (uVar2 + uVar5) - 1;
      }
    }
    else {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xf83e0f83e0f83e1),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x210)) {
    uVar5 = uVar2 / 0x210 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x210,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 140d3a4fe FUN_140d3a4fe body=218 status=ok
// SIG undefined FUN_140d3a4fe(void)

undefined8 FUN_140d3a4fe(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = (longlong)param_2 * 0x90;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      }
      else {
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar5 & (uVar3 + uVar5) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 / 0x90)) {
    uVar5 = uVar3 / 0x90 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_1446f8d3c(param_1,0,uVar5,0x90,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar2;
}



// FUNCTION 140d3a5d8 FUN_140d3a5d8 body=245 status=ok
// SIG undefined FUN_140d3a5d8(void)

void FUN_140d3a5d8(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x80);
  do {
    *(undefined4 *)(puVar2 + -0xf) = *(undefined4 *)(param_2 + 1);
    puVar2[-0x10] = *param_2;
    puVar2[-9] = 0;
    *(undefined4 *)(puVar2 + -8) = 0;
    puVar2[-0xd] = 0;
    puVar2[-0xc] = 0;
    *(undefined8 *)((longlong)puVar2 + -0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar2 + -0x34) = 0;
    puVar2[-5] = 0;
    *(undefined4 *)(puVar2 + -4) = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-0xe] = &PTR_FUN_14a176fc0;
    *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_2 + 0xf);
    *(undefined2 *)((longlong)puVar2 + -4) = *(undefined2 *)((longlong)param_2 + 0x7c);
    puVar2[-0xe] = &DAT_14a176f00;
    *puVar2 = 0;
    iVar1 = *(int *)(param_2 + 0x11);
    _Src = (void *)param_2[0x10];
    *(int *)(puVar2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_140501c24(puVar2,iVar1,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 0x1c);
    }
    param_2 = param_2 + 0x12;
    puVar2 = puVar2 + 0x12;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140d3a6ce FUN_140d3a6ce body=334 status=ok
// SIG undefined FUN_140d3a6ce(void)

void FUN_140d3a6ce(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d3a740;
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
LAB_140d3a740:
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



// FUNCTION 140d3a81c FUN_140d3a81c body=218 status=ok
// SIG undefined FUN_140d3a81c(void)

undefined8 FUN_140d3a81c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = (longlong)param_2 * 0x90;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      }
      else {
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar5 & (uVar3 + uVar5) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 / 0x90)) {
    uVar5 = uVar3 / 0x90 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_1446f8d3c(param_1,0,uVar5,0x90,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar2;
}



// FUNCTION 140d3a8f6 FUN_140d3a8f6 body=232 status=ok
// SIG undefined FUN_140d3a8f6(void)

void FUN_140d3a8f6(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x78);
  do {
    *(undefined4 *)(puVar2 + -0xe) = *(undefined4 *)(param_2 + 1);
    puVar2[-0xf] = *param_2;
    puVar2[-8] = 0;
    *(undefined4 *)(puVar2 + -7) = 0;
    puVar2[-0xc] = 0;
    puVar2[-0xb] = 0;
    *(undefined8 *)((longlong)puVar2 + -0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar2 + -0x2c) = 0;
    puVar2[-4] = 0;
    *(undefined4 *)(puVar2 + -3) = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    puVar2[-0xd] = &PTR_FUN_14a46be50;
    *puVar2 = 0;
    iVar1 = *(int *)(param_2 + 0x10);
    _Src = (void *)param_2[0xf];
    *(int *)(puVar2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_140a3dae8(puVar2,iVar1,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar1 << 3);
    }
    *(undefined1 *)((longlong)puVar2 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x8c);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x11);
    param_2 = param_2 + 0x12;
    puVar2 = puVar2 + 0x12;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140d3a9de FUN_140d3a9de body=313 status=ok
// SIG undefined FUN_140d3a9de(void)

void FUN_140d3a9de(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = (longlong)param_1 + 0x8c;
  puVar5 = param_1 + 0x10;
  do {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    lVar3 = 0;
    do {
      *(undefined8 *)(lVar4 + -0x54 + lVar3) = 0;
      *(undefined4 *)(lVar4 + -0x4c + lVar3) = 0;
      puVar1 = (undefined8 *)(lVar4 + -0x74 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar4 + -0x48 + lVar3) = 0xffffffff00000080;
      *(undefined4 *)(lVar4 + -0x40 + lVar3) = 0;
      *(undefined8 *)(lVar4 + -0x34 + lVar3) = 0;
      *(undefined4 *)(lVar4 + -0x2c + lVar3) = 0;
      puVar1 = (undefined8 *)(lVar4 + -0x24 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined ***)(lVar4 + -0x7c + lVar3) = &PTR_FUN_14a176fc0;
      *(undefined4 *)(lVar4 + -0x14 + lVar3) = *(undefined4 *)((longlong)param_2 + lVar3 + 0x78);
      *(undefined2 *)(lVar4 + -0x10 + lVar3) = *(undefined2 *)((longlong)param_2 + lVar3 + 0x7c);
      *(undefined **)(lVar4 + -0x7c + lVar3) = &DAT_14a176f00;
      *(undefined8 *)(lVar4 + -0xc + lVar3) = 0;
      iVar2 = *(int *)((longlong)param_2 + lVar3 + 0x88);
      _Src = *(void **)((longlong)param_2 + lVar3 + 0x80);
      *(int *)(lVar4 + -4 + lVar3) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(lVar4 + lVar3) = 0;
      }
      else {
        FUN_140501c24(lVar3 + (longlong)puVar5,iVar2,0);
        memcpy(*(void **)(lVar4 + -0xc + lVar3),_Src,(longlong)iVar2 * 0x1c);
      }
      lVar3 = lVar3 + 0x80;
    } while (lVar3 != 0x200);
    param_1 = param_1 + 0x42;
    param_2 = param_2 + 0x42;
    lVar4 = lVar4 + 0x210;
    puVar5 = puVar5 + 0x42;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140d3ab18 FUN_140d3ab18 body=714 status=ok
// SIG undefined FUN_140d3ab18(void)

longlong * FUN_140d3ab18(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar9 = (ulonglong)DAT_14cade138;
  if (0 < (longlong)uVar9) {
    iVar7 = -DAT_14cade138;
    lVar8 = uVar9 << 4;
    do {
      plVar6 = *(longlong **)(DAT_14cade130 + -8 + lVar8);
      if ((((plVar6 == (longlong *)0x0) ||
           (iVar1 = *(int *)(DAT_14cade130 + -0xc + lVar8), iVar1 == 0)) ||
          (uVar3 = *(uint *)(DAT_14cade130 + -0x10 + lVar8), (int)uVar3 < 0)) ||
         (((DAT_14c9647dc <= (int)uVar3 ||
           (lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar5 == 0)) ||
          ((*(int *)(lVar5 + 0x10) != iVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))))) {
        uVar3 = *(uint *)(param_1 + 1);
        if (uVar9 != uVar3) {
          memmove((void *)(*param_1 + uVar9 * 8 + -8),(void *)(*param_1 + uVar9 * 8),
                  (longlong)(int)(uVar3 + iVar7) << 3);
          uVar3 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar3 - 1;
        FUN_14579d940(param_1);
      }
      else {
        if ((*(uint *)(lVar5 + 8) & 0x10200000) == 0) {
          lVar5 = (**(code **)(*plVar6 + 8))(plVar6);
          if (lVar5 == 0) {
LAB_140d3ad79:
            lVar5 = (**(code **)(*plVar6 + 8))(plVar6);
            if (lVar5 != 0) {
              lVar4 = FUN_144a78d6a();
              if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) && (param_2 != 0)) {
                lVar4 = *(longlong *)(lVar5 + 0xb0);
                if (lVar4 == 0) {
                  lVar4 = FUN_1448abda6(lVar5);
                }
                goto LAB_140d3ac35;
              }
            }
          }
          else {
            if (DAT_14cac9ca8 == 0) {
              local_60 = &local_48;
              local_48 = FUN_141030f22;
              local_50 = FUN_14081d0ea;
              local_58 = FUN_14081d0ea;
              local_68 = &LAB_1478c0a72;
              local_70 = &LAB_1417b2375;
              local_78 = L"Engine";
              local_80 = 0x1000000000;
              local_88 = 0x10000004;
              local_90 = 8;
              local_98 = 0x390;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
            goto LAB_140d3ad79;
            if (param_2 == 0) goto LAB_140d3ac3a;
            lVar4 = FUN_1447210f0(lVar5);
LAB_140d3ac35:
            if (lVar4 != param_2) goto LAB_140d3ac5c;
          }
        }
        else {
          plVar6 = (longlong *)0x0;
        }
LAB_140d3ac3a:
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_140d3ade4(param_1,iVar1);
        }
        *(longlong **)(*param_1 + (longlong)iVar1 * 8) = plVar6;
      }
LAB_140d3ac5c:
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + -0x10;
      bVar2 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d3ade4 FUN_140d3ade4 body=353 status=ok
// SIG undefined FUN_140d3ade4(void)

void FUN_140d3ade4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d3ae69;
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
LAB_140d3ae69:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140d3af46 FUN_140d3af46 body=272 status=ok
// SIG undefined FUN_140d3af46(void)

void FUN_140d3af46(longlong param_1,int param_2)

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



// FUNCTION 140d3b056 FUN_140d3b056 body=366 status=ok
// SIG undefined FUN_140d3b056(void)

void FUN_140d3b056(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140d3b0db;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_140d3b0db:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140d3b1c4 FUN_140d3b1c4 body=387 status=ok
// SIG undefined FUN_140d3b1c4(void)

void FUN_140d3b1c4(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_3 + 8) == 0) goto LAB_140d3b274;
  param_1[3] = *(longlong *)(param_3 + 8);
  FUN_140d3b348(&local_38);
  *(undefined4 *)(param_1 + 1) = local_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
  *(undefined4 *)(param_1 + 2) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_2c;
  lVar1 = param_1[3];
  lVar2 = (longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_3 + 0x10);
  *param_1 = lVar2;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    puVar3 = *(undefined8 **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar4 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar4) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar4 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (bVar4) goto LAB_140d3b25b;
    }
    else if ((puVar3[3] & DAT_14c951cd8) != 0) {
LAB_140d3b25b:
      *(bool *)(param_1 + 5) =
           (*(byte *)(*param_1 + (ulonglong)*(byte *)(lVar1 + 0x71)) & *(byte *)(lVar1 + 0x73)) != 0
      ;
    }
  }
  param_1[4] = *(longlong *)(param_3 + 0x18);
LAB_140d3b274:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d3b348 FUN_140d3b348 body=204 status=ok
// SIG undefined FUN_140d3b348(void)

uint * FUN_140d3b348(uint *param_1,longlong *param_2)

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



// FUNCTION 140d3b414 FUN_140d3b414 body=2413 status=ok
// SIG undefined FUN_140d3b414(void)

void FUN_140d3b414(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  void *_Src;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  code *local_a8;
  longlong **pplStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == (longlong *)0x0) {
LAB_140d3bc1c:
    if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  (**(code **)(*param_2 + 0x18))(param_2,&local_70);
  local_c0 = param_2[1];
  lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
  if (((lVar7 == 0) || (local_c0 == 0)) || (local_70 == 0)) goto LAB_140d3bc1c;
  FUN_140d3bf04(lVar7,&local_78);
  local_b8 = param_2;
  FUN_140d3c3be(param_1,param_2);
  iVar14 = *(int *)(lVar7 + 0x88);
  local_b0 = lVar7;
  if ((longlong)iVar14 == 0) {
LAB_140d3bb38:
    FUN_140d3c0aa(param_1);
    goto LAB_140d3bc1c;
  }
  lVar7 = *(longlong *)(lVar7 + 0x80);
  lVar16 = 0;
LAB_140d3b4dc:
  local_58 = (longlong *)0x0;
  uVar6 = *(uint *)(lVar7 + 8 + lVar16);
  _Src = *(void **)(lVar7 + lVar16);
  uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar6);
  if ((longlong)(int)uVar6 == 0) {
    uStack_50 = (longlong *)(ulonglong)uVar6;
  }
  else {
    FUN_1446dd670(&local_58,uVar6,0);
    memcpy(local_58,_Src,(longlong)(int)uVar6 * 2);
  }
  cVar5 = FUN_1402ca054(local_c0,local_58);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_b8;
  if (cVar5 == '\0') goto code_r0x000140d3b567;
  local_68 = (longlong *)0x0;
  uStack_60 = (longlong *)0x0;
  lVar8 = (longlong)*(int *)(lVar7 + 0x58 + lVar16);
  if (lVar8 == 0) {
    iVar14 = 0;
  }
  else {
    plVar17 = *(longlong **)(lVar7 + 0x50 + lVar16);
    lVar8 = lVar8 * 0x18;
    do {
      lVar7 = *plVar17;
      if (lVar7 != 0) {
        uVar9 = FUN_140d3bd82();
        cVar5 = FUN_1448093f4(lVar7,uVar9);
        if (cVar5 != '\0') {
          FUN_140d3bdbc(plVar17,&local_a8);
          plVar10 = uStack_60;
          lVar7 = (longlong)(int)uStack_60;
          uVar6 = (int)uStack_60 + 1;
          uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uVar6);
          if (uStack_60._4_4_ < uVar6) {
            FUN_140d3bfa2(&local_68,(ulonglong)plVar10 & 0xffffffff);
          }
          local_68[lVar7 * 2] = (longlong)local_a8;
          local_68[lVar7 * 2 + 1] = (longlong)pplStack_a0;
        }
      }
      plVar17 = plVar17 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
    iVar14 = (int)uStack_60;
  }
  FUN_140d3beb9(local_68,iVar14);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (iVar14 < 1) goto LAB_140d3bb38;
  plVar17 = (longlong *)(param_1 + 0x448);
  iVar14 = *(int *)(param_1 + 0x450);
  iVar12 = *(int *)(param_1 + 0x47c);
  if (iVar14 == iVar12) {
LAB_140d3b703:
    plVar10 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14afe3140;
    local_58 = plVar10 + 2;
    plVar10[2] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    plVar10[0xd] = 0;
    uStack_50 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    local_58[3] = local_c0;
    local_58[4] = local_78;
    *local_58 = local_70;
    local_a8 = (code *)&local_70;
    pplStack_a0 = (longlong **)&local_58;
    FUN_14579dcce(plVar17,&local_68);
    plVar10 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*uStack_50)(uStack_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    iVar14 = *(int *)(param_1 + 0x450);
    iVar12 = *(int *)(param_1 + 0x47c);
  }
  else {
    uVar6 = (uint)((ulonglong)local_70 >> 0x10);
    uVar13 = (uint)local_70 & 0xffff;
    lVar7 = param_1 + 0x480;
    if (*(longlong *)(param_1 + 0x488) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x488);
    }
    iVar15 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0x490) - 1U &
                              (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar13)
                              + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar15 == -1) goto LAB_140d3b703;
    while (*(longlong *)(*plVar17 + (longlong)iVar15 * 0x20) != local_70) {
      iVar15 = *(int *)((longlong)iVar15 * 0x20 + *plVar17 + 0x18);
      if (iVar15 == -1) goto LAB_140d3b703;
    }
  }
  if (iVar14 == iVar12) {
LAB_140d3b860:
    lVar7 = 0;
  }
  else {
    uVar6 = (uint)((ulonglong)local_70 >> 0x10);
    uVar13 = (uint)local_70 & 0xffff;
    lVar7 = param_1 + 0x480;
    if (*(longlong *)(param_1 + 0x488) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x488);
    }
    iVar14 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0x490) - 1U &
                              (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar13)
                              + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar14 == -1) goto LAB_140d3b860;
    while (lVar7 = *plVar17 + (longlong)iVar14 * 0x20,
          *(longlong *)(*plVar17 + (longlong)iVar14 * 0x20) != local_70) {
      iVar14 = *(int *)(lVar7 + 0x18);
      if (iVar14 == -1) goto LAB_140d3b860;
    }
  }
  lVar16 = *(longlong *)(lVar7 + 8);
  plVar17 = *(longlong **)(lVar7 + 0x10);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  FUN_140d3c6ea(&local_58,plVar2);
  lVar7 = *(longlong *)(lVar16 + 8);
  iVar14 = *(int *)(lVar16 + 0x10);
  lVar8 = (longlong)iVar14;
  if (lVar8 == 0) {
LAB_140d3b8b7:
    *(uint *)(lVar16 + 0x10) = iVar14 + 1U;
    if (*(uint *)(lVar16 + 0x14) < iVar14 + 1U) {
      FUN_14579dc48((longlong *)(lVar16 + 8),iVar14);
      lVar7 = *(longlong *)(lVar16 + 8);
    }
    puVar1 = (undefined4 *)(lVar7 + lVar8 * 0x10);
    *puVar1 = (undefined4)local_58;
    puVar1[1] = local_58._4_4_;
    puVar1[2] = (undefined4)uStack_50;
    puVar1[3] = uStack_50._4_4_;
  }
  else {
    uVar11 = 0;
    while (*(longlong **)(lVar7 + 8 + uVar11) != uStack_50) {
      uVar11 = uVar11 + 0x10;
      if (lVar8 << 4 == uVar11) goto LAB_140d3b8b7;
    }
    if ((int)(~uVar11 >> 4) == 0) goto LAB_140d3b8b7;
  }
  if (*(char *)(param_1 + 0x298) != '\x01') goto LAB_140d3bbc7;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    uVar6 = (uint)((ulonglong)local_70 >> 0x10);
    uVar13 = (uint)local_70 & 0xffff;
    lVar7 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x160);
    }
    iVar14 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0x168) - 1U &
                              (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar13)
                              + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar14 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x120);
      do {
        if (*(longlong *)(lVar7 + (longlong)iVar14 * 0x20) == local_70) goto LAB_140d3bbc7;
        iVar14 = *(int *)((longlong)iVar14 * 0x20 + lVar7 + 0x18);
      } while (iVar14 != -1);
    }
  }
  plVar10 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14afe3160;
  local_68 = plVar10 + 2;
  plVar10[3] = 0;
  *(undefined4 *)((longlong)plVar10 + 0x24) = 0xbf800000;
  plVar10[5] = 0;
  plVar10[6] = 0;
  *(undefined4 *)(plVar10 + 7) = 2;
  *(undefined8 *)((longlong)plVar10 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x4c) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar10 + 100) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x6c) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x7c) = 0;
  *(undefined8 *)((longlong)plVar10 + 0x84) = 0;
  *(undefined4 *)((longlong)plVar10 + 0x8c) = 0;
  plVar10[2] = (longlong)&PTR_FUN_14afdfef0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 2;
  *(undefined1 *)((longlong)plVar10 + 0x21) = 1;
  *(undefined1 *)(plVar10 + 4) = 0;
  uStack_60 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = local_68;
  local_68[1] = local_70;
  local_a8 = FUN_140fa11b2;
  pplStack_a0 = (longlong **)((ulonglong)pplStack_a0 & 0xffffffff00000000);
  FUN_14579e17e(local_68 + 0x12,local_80,param_1);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)plVar10[0x11];
  plVar10[0x10] = lVar16;
  plVar10[0x11] = (longlong)plVar17;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x1d0);
    lVar7 = (longlong)*(int *)(param_1 + 0x1d8) * 0x18;
    do {
      if (*plVar10 == local_b0) {
        if ((plVar10 != (longlong *)0x0) && ((longlong)(int)plVar10[2] != 0)) {
          lVar7 = 0;
          lVar8 = 0;
          goto LAB_140d3bb1d;
        }
        break;
      }
      plVar10 = plVar10 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  goto LAB_140d3bb8d;
code_r0x000140d3b567:
  lVar16 = lVar16 + 0x90;
  if ((longlong)iVar14 * 0x90 == lVar16) goto LAB_140d3bb38;
  goto LAB_140d3b4dc;
  while( true ) {
    lVar8 = lVar8 + -0x98;
    lVar7 = lVar7 + 0x98;
    if ((longlong)(int)plVar10[2] * -0x98 - lVar8 == 0) break;
LAB_140d3bb1d:
    if (*(longlong *)(plVar10[1] + lVar7) == local_c0) {
      lVar8 = plVar10[1] - lVar8;
      if (lVar8 != 0) {
        (**(code **)(*local_68 + 0x20))(local_68,0,lVar8 + 0x78);
        plVar10 = local_68;
        (**(code **)(*local_68 + 0xa0))(local_68,*(undefined4 *)(param_1 + 500),0);
        FUN_140fa0ba0(plVar10,*(undefined4 *)(param_1 + 500));
      }
      break;
    }
  }
LAB_140d3bb8d:
  local_a8 = (code *)&local_70;
  pplStack_a0 = &local_68;
  FUN_14579e540((longlong *)(param_1 + 0x120),local_80);
  plVar10 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = uStack_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_140d3bbc7:
  if (lVar16 != 0) {
    *(longlong *)(lVar16 + 0x18) = local_c0;
    *(longlong *)(lVar16 + 0x20) = local_78;
    if (*(char *)(lVar16 + 0x4c) == '\x01') {
      local_88 = *(undefined4 *)(lVar16 + 0x48);
      local_a8 = *(code **)(lVar16 + 0x28);
      pplStack_a0 = *(longlong ***)(lVar16 + 0x30);
      local_98 = *(undefined4 *)(lVar16 + 0x38);
      uStack_94 = *(undefined4 *)(lVar16 + 0x3c);
      uStack_90 = *(undefined4 *)(lVar16 + 0x40);
      uStack_8c = *(undefined4 *)(lVar16 + 0x44);
      (**(code **)(*plVar2 + 0x40))(plVar2);
    }
  }
  FUN_140d3c0aa(param_1);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar17 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar3 = (int *)((longlong)plVar17 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  goto LAB_140d3bc1c;
}



// FUNCTION 140d3bd82 FUN_140d3bd82 body=57 status=ok
// SIG undefined FUN_140d3bd82(void)

void FUN_140d3bd82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53ec8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53ec8 = FUN_140002ddd(FUN_1464abfec,uVar1,L"TimeOfDayForecastKey");
  }
  return;
}



// FUNCTION 140d3bdbc FUN_140d3bdbc body=83 status=ok
// SIG undefined FUN_140d3bdbc(void)

longlong * FUN_140d3bdbc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140d3bd82();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140d3be2e FUN_140d3be2e body=138 status=ok
// SIG undefined FUN_140d3be2e(void)

longlong FUN_140d3be2e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb541e0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb541e0,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d3beb9 FUN_140d3beb9 body=75 status=ok
// SIG undefined FUN_140d3beb9(void)

void FUN_140d3beb9(longlong param_1,int param_2)

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



// FUNCTION 140d3bf04 FUN_140d3bf04 body=157 status=ok
// SIG undefined FUN_140d3bf04(void)

undefined8 * FUN_140d3bf04(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar5 = 0;
    do {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar5) != 0) {
        puVar4 = *(undefined2 **)(lVar2 + lVar5);
      }
      cVar3 = FUN_1402ca022(param_3,puVar4);
      if (cVar3 != '\0') {
        if (*(int *)(lVar2 + 0x18 + lVar5) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = *(undefined2 **)(lVar2 + 0x10 + lVar5);
        }
        FUN_1446f470e(param_2,puVar4,1);
        return param_2;
      }
      lVar5 = lVar5 + 0x90;
    } while ((longlong)iVar1 * 0x90 != lVar5);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140d3bfa2 FUN_140d3bfa2 body=262 status=ok
// SIG undefined FUN_140d3bfa2(void)

void FUN_140d3bfa2(longlong param_1,int param_2)

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



// FUNCTION 140d3c0aa FUN_140d3c0aa body=787 status=ok
// SIG undefined FUN_140d3c0aa(void)

void FUN_140d3c0aa(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  puVar16 = (uint *)(param_1 + 0x458);
  local_58 = 0;
  uStack_50 = 0;
  iVar2 = *(int *)(param_1 + 0x470);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar17 = 0;
    iVar9 = 0;
    iVar14 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x468);
    if (*(uint **)(param_1 + 0x468) == (uint *)0x0) {
      puVar7 = puVar16;
    }
    uVar19 = *puVar7;
    if (uVar19 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar17 = 0;
      uVar13 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar13 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar13 == uVar17) goto LAB_140d3c267;
        iVar14 = iVar14 + 0x20;
        uVar19 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar13 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar13 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar9 = (iVar14 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 != iVar2) {
    local_68 = (longlong *)(param_1 + 0x448);
    uVar19 = 0xffffffff;
    iVar6 = iVar2;
    do {
      lVar4 = *local_68;
      lVar15 = *(longlong *)(lVar4 + 8 + (longlong)iVar9 * 0x20);
      if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) == 0)) {
        lVar15 = (longlong)(int)uStack_50;
        uVar10 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar10);
        if (uStack_50._4_4_ < uVar10) {
          local_70 = lVar15;
          local_60 = puVar16;
          FUN_1446f84a2(&local_58,lVar15);
          lVar15 = local_70;
          puVar16 = local_60;
        }
        *(undefined8 *)(local_58 + lVar15 * 8) = *(undefined8 *)(lVar4 + (longlong)iVar9 * 0x20);
        iVar6 = *(int *)(param_1 + 0x470);
      }
      lVar4 = local_58;
      uVar19 = uVar19 & ~(uint)uVar13;
      puVar7 = *(uint **)(param_1 + 0x468);
      if (*(uint **)(param_1 + 0x468) == (uint *)0x0) {
        puVar7 = puVar16;
      }
      iVar9 = (int)uVar17;
      lVar15 = (longlong)iVar9;
      uVar10 = puVar7[lVar15] & uVar19;
      if (uVar10 == 0) {
        iVar11 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar11 = iVar6 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar18 = 0;
          do {
            uVar10 = puVar7[lVar15 + lVar18 + 1];
            if (uVar10 != 0) {
              uVar17 = (ulonglong)(iVar9 + (int)lVar18 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140d3c225;
            }
            iVar14 = iVar14 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar12 - lVar15 != lVar18);
          uVar19 = 0xffffffff;
          iVar9 = iVar12;
        }
        uVar17 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar6;
      }
      else {
LAB_140d3c225:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar9) {
          iVar9 = iVar6;
        }
      }
    } while (iVar9 != iVar2);
    lVar15 = (longlong)(int)uStack_50;
    if (lVar15 != 0) {
      lVar18 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar4 + lVar18);
        if (*(char *)(param_1 + 0x298) == '\x01') {
          FUN_14860c2d6(param_1 + 0x120,uVar3);
          cVar5 = FUN_144729dda(param_1 + 0x238);
          if (cVar5 != '\0') {
            uVar8 = FUN_14479d2ce(param_1 + 0x238);
            FUN_1486074c4(uVar8,uVar3);
          }
        }
        FUN_14579dfe0(local_68,uVar3);
        lVar18 = lVar18 + 8;
      } while (lVar15 * 8 != lVar18);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
LAB_140d3c267:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d3c3be FUN_140d3c3be body=810 status=ok
// SIG undefined FUN_140d3c3be(void)

void FUN_140d3c3be(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  longlong local_90;
  ulonglong local_88;
  uint *local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  FUN_140d3c6ea(local_58,param_2);
  puVar17 = (uint *)(param_1 + 0x458);
  uVar4 = *(uint *)(param_1 + 0x470);
  uVar9 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    uVar22 = 1;
    uVar20 = 0;
    uVar6 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x468);
    if (*(uint **)(param_1 + 0x468) == (uint *)0x0) {
      puVar5 = puVar17;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar10 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar10 = uVar4 - 1;
      }
      uVar20 = 0;
      uVar22 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar22 = uVar20;
      }
      iVar10 = 0;
      do {
        if (uVar22 == uVar20) goto LAB_140d3c640;
        iVar10 = iVar10 + 0x20;
        uVar6 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar20 = 0;
      iVar10 = 0;
    }
    uVar22 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar22 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar6) {
      uVar6 = uVar4;
    }
  }
  if (uVar6 != uVar4) {
    uVar14 = 0xffffffff;
    local_88 = uVar9;
    local_80 = puVar17;
    local_78 = param_1;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x448) + 8 + (longlong)(int)uVar6 * 0x20);
      if (lVar13 != 0) {
        iVar19 = *(int *)(lVar13 + 0x10);
        lVar12 = (longlong)iVar19;
        if (lVar12 != 0) {
          local_90 = *(longlong *)(lVar13 + 8);
          local_60 = local_90 + 0x18;
          iVar11 = 0;
          bVar21 = *(longlong *)(local_90 + 8) == local_50;
          local_98 = uVar14;
          local_94 = iVar10;
          local_70 = uVar22;
          local_68 = uVar20;
          iVar10 = 0;
          do {
            lVar16 = (longlong)iVar10;
            iVar7 = iVar10 + 1;
            if (iVar10 + 1 < iVar19) {
              iVar7 = iVar19;
            }
            lVar8 = lVar16 * 0x10;
            plVar15 = (longlong *)(local_60 + lVar8);
            iVar18 = iVar10;
            do {
              lVar16 = lVar16 + 1;
              iVar3 = iVar7;
              if (lVar12 <= lVar16) break;
              lVar2 = *plVar15;
              iVar18 = iVar18 + 1;
              plVar15 = plVar15 + 2;
              iVar3 = iVar18;
            } while (bVar21 == (lVar2 == local_50));
            if (bVar21 == false) {
              if (iVar11 != iVar10) {
                memmove((void *)((longlong)iVar11 * 0x10 + local_90),(void *)(lVar8 + local_90),
                        (longlong)(iVar3 - iVar10) << 4);
              }
              iVar11 = iVar11 + (iVar3 - iVar10);
            }
            bVar21 = (bool)(bVar21 ^ 1);
            iVar10 = iVar3;
          } while (lVar16 < lVar12);
          *(int *)(lVar13 + 0x10) = iVar11;
          uVar4 = *(uint *)(local_78 + 0x470);
          uVar9 = local_88;
          param_1 = local_78;
          puVar17 = local_80;
          uVar20 = local_68;
          uVar22 = local_70;
          iVar10 = local_94;
          uVar14 = local_98;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar22;
      puVar5 = *(uint **)(param_1 + 0x468);
      if (*(uint **)(param_1 + 0x468) == (uint *)0x0) {
        puVar5 = puVar17;
      }
      iVar19 = (int)uVar20;
      lVar13 = (longlong)iVar19;
      uVar6 = puVar5[lVar13] & uVar14;
      if (uVar6 == 0) {
        iVar11 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar11 = uVar4 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar11;
        if (iVar11 < iVar19) {
          iVar7 = iVar19;
        }
        if (iVar19 < iVar11) {
          lVar12 = 0;
          do {
            uVar6 = puVar5[lVar13 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar20 = (ulonglong)(iVar19 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140d3c614;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar13 != lVar12);
          uVar14 = 0xffffffff;
          iVar19 = iVar7;
        }
        uVar20 = (ulonglong)(iVar19 + 1);
        uVar6 = uVar4;
      }
      else {
LAB_140d3c614:
        uVar22 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar22 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar6) {
          uVar6 = uVar4;
        }
      }
    } while (uVar6 != (uint)uVar9);
  }
LAB_140d3c640:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d3c6ea FUN_140d3c6ea body=204 status=ok
// SIG undefined FUN_140d3c6ea(void)

uint * FUN_140d3c6ea(uint *param_1,longlong *param_2)

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



// FUNCTION 140d3c7b6 FUN_140d3c7b6 body=730 status=ok
// SIG undefined FUN_140d3c7b6(void)

undefined8 FUN_140d3c7b6(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  int local_8c;
  longlong local_88 [2];
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  lVar3 = (**(code **)(*param_1 + 0x20))();
  if (lVar3 == 0) {
    puVar8 = (undefined2 *)0x0;
    iVar7 = 0;
LAB_140d3c972:
    if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
      local_68 = (undefined2 *)param_1[-0x76];
      FUN_1400021e4(&local_68,&local_78);
      FUN_144a7dea0(&local_68,&local_78,&local_58);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar8 = local_68;
      local_58 = local_68;
      local_68 = (undefined2 *)0x0;
      iVar7 = (int)local_60;
      uStack_50 = local_60;
      local_60 = 0;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
        puVar8 = local_58;
        iVar7 = (int)uStack_50;
      }
    }
    puVar6 = &DAT_149dfb77a;
    if (iVar7 != 0) {
      puVar6 = puVar8;
    }
    FUN_1446f470e(param_2,puVar6,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1400021e4(param_1 + 1,local_88);
  puVar4 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(lVar3 + 8);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1400b2348(puVar4,&local_a8,1);
  iVar7 = (int)uStack_a0;
  iVar2 = ((int)uStack_a0 == 0) + 1;
  local_98 = local_a8;
  local_a8 = 0;
  local_90 = (int)uStack_a0;
  iVar1 = uStack_a0._4_4_;
  local_8c = uStack_a0._4_4_;
  uStack_a0 = 0;
  iVar5 = iVar2 + iVar7;
  if (iVar7 <= iVar5) {
    if (-1 < iVar5) {
      if (iVar1 < iVar5) {
        FUN_1446f8c06(&local_98);
      }
      FUN_1400020e8(&local_98,&DAT_149e01f60,1);
      FUN_1401c7f3e(&local_78,&local_98,local_88);
      iVar7 = (int)local_70;
      iVar2 = ((int)local_70 == 0) + 9;
      local_68 = local_78;
      local_78 = (undefined2 *)0x0;
      iVar1 = local_70._4_4_;
      local_60 = local_70;
      local_70 = 0;
      iVar5 = iVar2 + iVar7;
      if (iVar5 < iVar7) goto LAB_140d3c9d9;
      if (-1 < iVar5) {
        if (iVar1 < iVar5) {
          FUN_1446f8c06(&local_68);
        }
        FUN_1400020e8(&local_68,L"_Forecast",9);
        puVar8 = local_68;
        iVar7 = (int)local_60;
        local_58 = local_68;
        local_68 = (undefined2 *)0x0;
        uStack_50 = local_60;
        local_60 = 0;
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_140d3c972;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
LAB_140d3c9d9:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 140d3ca92 FUN_140d3ca92 body=476 status=ok
// SIG undefined FUN_140d3ca92(void)

void FUN_140d3ca92(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d3cc8e FUN_140d3cc8e body=15829 status=ok
// SIG undefined FUN_140d3cc8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d3cc8e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *****pppppcVar2;
  int *piVar3;
  code *******pppppppcVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 ******ppppppuVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *******pppppppuVar19;
  undefined8 uVar20;
  code *****pppppcVar21;
  code *******pppppppcVar22;
  code *****pppppcVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  undefined8 *******pppppppuVar27;
  undefined2 *puVar28;
  undefined8 *puVar29;
  code ******ppppppcVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  undefined8 *******pppppppuVar38;
  undefined8 ******ppppppuVar39;
  longlong *plVar40;
  code *pcVar41;
  uint uVar42;
  code ******ppppppcVar43;
  bool bVar44;
  undefined1 auStack_668 [32];
  undefined8 ******local_648;
  undefined8 ******local_640;
  code *****local_638;
  undefined8 *local_630;
  undefined8 ******local_628;
  longlong local_620;
  undefined8 ******local_618;
  longlong *local_610;
  undefined8 ******local_608;
  undefined8 ******local_600;
  longlong local_5f8;
  undefined8 ******local_5f0;
  undefined8 local_5e8;
  undefined1 local_5e0;
  undefined8 local_5dc;
  undefined8 uStack_5d4;
  undefined8 local_5cc;
  longlong local_5c0;
  undefined8 uStack_5b8;
  longlong local_5b0;
  undefined8 uStack_5a8;
  longlong local_5a0;
  undefined8 uStack_598;
  longlong local_590;
  undefined8 uStack_588;
  longlong local_580;
  uint uStack_578;
  uint uStack_574;
  undefined1 local_570;
  undefined7 uStack_56f;
  uint local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 ******local_550;
  undefined8 ******local_548;
  code *local_540;
  undefined8 ******local_538;
  undefined8 local_530;
  longlong lStack_528;
  code *****local_520;
  undefined8 ******local_518;
  undefined1 local_50c [4];
  code *****local_508;
  undefined8 uStack_500;
  undefined8 ******local_4f8;
  undefined8 uStack_4f0;
  undefined8 ******local_4e8;
  undefined8 uStack_4e0;
  code *local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 ******ppppppuStack_4c0;
  undefined8 ******local_4b8;
  undefined8 uStack_4b0;
  code ******local_4a8;
  undefined8 uStack_4a0;
  code *****local_498;
  undefined1 local_490 [56];
  undefined8 auStack_458 [6];
  undefined4 uStack_428;
  undefined8 uStack_424;
  undefined4 auStack_41c [3];
  undefined8 uStack_410;
  undefined4 auStack_408 [2];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 ******local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  code ******local_3d8;
  undefined8 uStack_3d0;
  code *****local_3c8;
  undefined1 local_3c0 [8];
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  longlong lStack_3b0;
  undefined4 local_3a8;
  uint local_3a4;
  undefined4 uStack_3a0;
  undefined4 local_39c;
  longlong local_390;
  undefined4 local_388;
  longlong local_380;
  undefined8 uStack_378;
  undefined4 local_370;
  undefined2 local_36c [2];
  void *local_368;
  ulonglong auStack_360 [6];
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_2f0;
  undefined4 local_270;
  undefined4 local_1f0;
  code *****local_1d8;
  ulonglong uStack_1d0;
  uint local_1c8 [4];
  uint *local_1b8;
  int local_1b0;
  uint local_1ac;
  undefined4 uStack_1a8;
  int local_1a4;
  longlong local_198;
  undefined4 local_190;
  undefined8 ******local_188;
  code ******ppppppcStack_180;
  uint local_178 [4];
  uint *local_168;
  int local_160;
  uint local_15c;
  undefined4 uStack_158;
  int local_154;
  longlong local_148;
  undefined4 local_140;
  code ******local_138;
  code ******ppppppcStack_130;
  uint local_128 [4];
  uint *local_118;
  int local_110;
  uint local_10c;
  undefined4 uStack_108;
  int local_104;
  longlong local_f8;
  undefined4 local_f0;
  code ******local_e8;
  code ******ppppppcStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_668;
  local_640 = (undefined8 ******)*param_1;
  local_5e8 = 0;
  local_5e0 = 0;
  local_5dc = _DAT_14cb54764;
  uStack_5d4 = _DAT_14cb5476c;
  local_5cc = DAT_14cb54774;
  local_5c0 = 0;
  uStack_5b8 = 0;
  local_5b0 = 0;
  uStack_5a8 = 0;
  local_5a0 = 0;
  uStack_598 = 0;
  local_590 = 0;
  uStack_588 = 0;
  local_580 = 0;
  uStack_578 = 0;
  uStack_574 = 0;
  local_570 = 0;
  uStack_56f = 0;
  local_568 = local_568 & 0xffffff00;
  local_560 = 0;
  uStack_558 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar28 = &DAT_149dfb77a;
  }
  else {
    puVar28 = (undefined2 *)*param_2;
  }
  local_610 = param_1;
  FUN_1446f470e(&local_5e8,puVar28,1);
  local_5e0 = *(undefined1 *)(param_2 + 0xf);
  local_5cc = param_2[0xe];
  local_5dc = param_2[0xc];
  uStack_5d4 = param_2[0xd];
  local_648 = (undefined8 ******)local_610[1];
  lVar15 = FUN_144a6654a((longlong)local_648 + 0x18);
  local_630 = param_2;
  if (lVar15 != 0) {
    lVar16 = FUN_140fb7d76();
    if ((((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) &&
        (*(int *)((longlong)local_640 + 0xc) != 0)) &&
       (((uVar42 = *(uint *)(local_640 + 1), -1 < (int)uVar42 && ((int)uVar42 < DAT_14c9647dc)) &&
        ((puVar29 = (undefined8 *)
                    ((ulonglong)((uVar42 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8)),
         puVar29 != (undefined8 *)0x0 &&
         ((*(int *)(puVar29 + 2) == *(int *)((longlong)local_640 + 0xc) &&
          ((*(uint *)(puVar29 + 1) & 0x10200000) == 0)))))))) {
      if ((*(uint *)(puVar29 + 1) & 0x10200000) == 0) {
        uVar20 = *puVar29;
      }
      else {
        uVar20 = 0;
      }
      local_5f8 = FUN_1448e494c(uVar20,lVar15);
      if (local_5f8 != 0) {
        local_138 = (code ******)0x0;
        ppppppcStack_130 = (code ******)0x0;
        FUN_1417e221e(lVar15,&local_138,0);
        local_620 = lVar15;
        if ((longlong)(int)ppppppcStack_130 != 0) {
          ppppppcVar30 = local_138 + (int)ppppppcStack_130;
          local_628 = local_640 + 6;
          local_608 = local_640 + 0xd;
          ppppppuVar39 = local_648;
          ppppppcVar43 = local_138;
          local_638 = (code *****)ppppppcVar30;
          do {
            pppppppuVar38 = (undefined8 *******)*ppppppcVar43;
            lVar16 = (longlong)*(int *)(lVar15 + 0x40);
            local_4f8 = pppppppuVar38;
            if (0 < lVar16) {
              plVar40 = *(longlong **)(lVar15 + 0x38);
              do {
                if ((undefined8 *******)*plVar40 == pppppppuVar38) {
                  if ((plVar40 != (longlong *)0x0) &&
                     ((longlong)*(int *)((longlong)ppppppuVar39 + 0x48) != 0)) {
                    lVar16 = *(longlong *)((longlong)ppppppuVar39 + 0x40);
                    lVar33 = (longlong)*(int *)((longlong)ppppppuVar39 + 0x48) * 0x38;
                    goto LAB_140d3cf38;
                  }
                  break;
                }
                plVar40 = (longlong *)((longlong)plVar40 + 0x1c);
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
LAB_140d3d2ba:
            ppppppcVar43 = ppppppcVar43 + 1;
          } while (ppppppcVar43 != ppppppcVar30);
        }
        local_4e8 = (undefined8 *******)0x0;
        uStack_4e0 = (longlong *)0x0;
        FUN_1417e221e(lVar15,&local_4e8,1);
        if ((longlong)(int)(uint)uStack_4e0 != 0) {
          pppppppuVar38 = (undefined8 *******)(local_4e8 + (int)(uint)uStack_4e0);
          local_608 = local_640 + 6;
          local_600 = local_640 + 0xd;
          pppppppuVar27 = (undefined8 *******)local_4e8;
          ppppppuVar39 = local_648;
          local_618 = pppppppuVar38;
          do {
            pppppppuVar19 = (undefined8 *******)*pppppppuVar27;
            lVar16 = (longlong)*(int *)(lVar15 + 0x50);
            local_518 = pppppppuVar19;
            if (0 < lVar16) {
              plVar40 = *(longlong **)(lVar15 + 0x48);
              do {
                if ((undefined8 *******)*plVar40 == pppppppuVar19) {
                  if ((plVar40 != (longlong *)0x0) &&
                     ((longlong)*(int *)((longlong)ppppppuVar39 + 0x58) != 0)) {
                    local_638 = (code *****)(plVar40 + 1);
                    lVar16 = *(longlong *)((longlong)ppppppuVar39 + 0x50);
                    lVar33 = (longlong)*(int *)((longlong)ppppppuVar39 + 0x58) * 0x38;
                    goto LAB_140d3dc3b;
                  }
                  break;
                }
                plVar40 = plVar40 + 5;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
LAB_140d3dc5d:
            pppppppuVar27 = pppppppuVar27 + 1;
          } while (pppppppuVar27 != pppppppuVar38);
        }
        if ((undefined8 *******)local_4e8 != (undefined8 *******)0x0) {
          FUN_1400020a8(local_4e8);
        }
        if (local_138 != (code ******)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  local_648 = (undefined8 ******)local_610[1];
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_e8 = (code ******)0x0;
  ppppppcStack_e0 = (code ******)0x0;
  local_bc = 0x80;
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_118 = (uint *)0x0;
  local_110 = 0;
  local_138 = (code ******)0x0;
  ppppppcStack_130 = (code ******)0x0;
  local_10c = 0x80;
  uStack_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_168 = (uint *)0x0;
  local_160 = 0;
  local_188 = (undefined8 ******)0x0;
  ppppppcStack_180 = (code ******)0x0;
  local_15c = 0x80;
  uStack_158 = 0xffffffff;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_1b8 = (uint *)0x0;
  local_1b0 = 0;
  local_1d8 = (code *****)0x0;
  uStack_1d0 = 0;
  local_1ac = 0x80;
  uStack_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  uVar20 = FUN_140dae4d8();
  local_4b8 = local_640;
  uStack_4b0 = &local_e8;
  local_4a8 = (code ******)&local_138;
  uStack_4a0 = &local_188;
  local_498 = (code *****)&local_1d8;
  FUN_143c25a42(local_490,param_2);
  local_400 = uVar20;
  if (0 < *(int *)(param_2 + 9)) {
    lVar15 = 0;
    do {
      FUN_14029cd3e();
      FUN_143c2a756(&local_4b8,
                    (ulonglong)((uint)*(ushort *)(param_2[8] + lVar15 * 2) * 0x18) + DAT_14cb54430,1
                    ,0);
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_2 + 9));
  }
  uVar5 = *(undefined4 *)(local_648 + 0xc);
  local_3c8 = local_498;
  local_3d8 = local_4a8;
  uStack_3d0 = uStack_4a0;
  local_3e8 = local_4b8;
  uStack_3e0 = (int)uStack_4b0;
  uStack_3dc = uStack_4b0._4_4_;
  FUN_143c25a42(local_3c0,local_490);
  local_330 = local_400;
  ppppppuStack_4c0 = &local_3e8;
  local_4c8 = FUN_143c30e74;
  local_328 = uVar5;
  FUN_14031521c(param_2);
  local_4d8 = (code *)0x0;
  uStack_4d0 = (undefined8 *******)0x0;
  iVar35 = (uint)ppppppcStack_e0 - local_b4;
  if (-1 < iVar35) {
    uVar37 = 0;
    FUN_140b626ab(0,0);
    uVar31 = (ulonglong)uStack_4d0 >> 0x20;
    uStack_4d0 = (undefined8 *******)((ulonglong)uStack_4d0 & 0xffffffff00000000);
    if ((int)uVar31 != iVar35) {
      FUN_141843a14(&local_4d8,iVar35);
    }
    if (local_c0 == 0) {
      uVar31 = 1;
      iVar35 = 0;
      iVar34 = 0;
    }
    else {
      puVar26 = local_c8;
      if (local_c8 == (uint *)0x0) {
        puVar26 = (uint *)&local_d8;
      }
      uVar42 = *puVar26;
      if (uVar42 == 0) {
        iVar35 = local_c0 + 0x1e;
        if (-1 < local_c0 + -1) {
          iVar35 = local_c0 + -1;
        }
        uVar37 = 0;
        uVar31 = (ulonglong)(uint)(iVar35 >> 5);
        if (iVar35 >> 5 < 1) {
          uVar31 = uVar37;
        }
        iVar34 = 0;
        do {
          if (uVar31 == uVar37) goto LAB_140d3e815;
          iVar34 = iVar34 + 0x20;
          uVar42 = puVar26[uVar37 + 1];
          uVar37 = uVar37 + 1;
        } while (uVar42 == 0);
      }
      else {
        uVar37 = 0;
        iVar34 = 0;
      }
      uVar31 = (ulonglong)(-uVar42 & uVar42);
      uVar32 = uVar31 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (local_c0 <= iVar35) {
        iVar35 = local_c0;
      }
    }
    if (iVar35 < local_c0) {
      uVar42 = 0xffffffff;
      do {
        ppppppcVar30 = local_e8;
        uVar32 = (ulonglong)uStack_4d0;
        lVar15 = (longlong)(int)(uint)uStack_4d0;
        uVar14 = (uint)uStack_4d0 + 1;
        uStack_4d0 = (undefined8 *******)CONCAT44(uStack_4d0._4_4_,uVar14);
        if (uStack_4d0._4_4_ < uVar14) {
          FUN_1418437ce(&local_4d8,uVar32 & 0xffffffff);
        }
        lVar15 = lVar15 * 0x90;
        *(undefined4 *)(local_4d8 + lVar15 + 8) =
             *(undefined4 *)(ppppppcVar30 + (longlong)iVar35 * 0x14 + 2);
        *(code ******)(local_4d8 + lVar15) = ppppppcVar30[(longlong)iVar35 * 0x14 + 1];
        *(undefined8 *)(local_4d8 + lVar15 + 0x38) = 0;
        *(undefined4 *)(local_4d8 + lVar15 + 0x40) = 0;
        *(undefined8 *)(local_4d8 + lVar15 + 0x18) = 0;
        *(undefined8 *)(local_4d8 + lVar15 + 0x18 + 8) = 0;
        *(undefined8 *)(local_4d8 + lVar15 + 0x44) = 0xffffffff00000080;
        *(undefined4 *)(local_4d8 + lVar15 + 0x4c) = 0;
        *(undefined8 *)(local_4d8 + lVar15 + 0x58) = 0;
        *(undefined4 *)(local_4d8 + lVar15 + 0x60) = 0;
        *(undefined8 *)(local_4d8 + lVar15 + 0x68) = 0;
        *(undefined8 *)(local_4d8 + lVar15 + 0x68 + 8) = 0;
        *(undefined ***)(local_4d8 + lVar15 + 0x10) = &PTR_FUN_14a176fc0;
        *(undefined4 *)(local_4d8 + lVar15 + 0x78) =
             *(undefined4 *)(ppppppcVar30 + (longlong)iVar35 * 0x14 + 0x10);
        *(undefined2 *)(local_4d8 + lVar15 + 0x7c) =
             *(undefined2 *)((longlong)ppppppcVar30 + (longlong)iVar35 * 0xa0 + 0x84);
        *(undefined **)(local_4d8 + lVar15 + 0x10) = &DAT_14a176f00;
        *(undefined8 *)(local_4d8 + lVar15 + 0x80) = 0;
        iVar24 = *(int *)(ppppppcVar30 + (longlong)iVar35 * 0x14 + 0x12);
        ppppppcVar30 = (code ******)ppppppcVar30[(longlong)iVar35 * 0x14 + 0x11];
        *(int *)(local_4d8 + lVar15 + 0x88) = iVar24;
        if ((longlong)iVar24 == 0) {
          *(undefined4 *)(local_4d8 + lVar15 + 0x8c) = 0;
        }
        else {
          pcVar41 = local_4d8 + lVar15 + 0x80;
          FUN_140501c24(pcVar41,iVar24,0);
          memcpy(*(void **)pcVar41,ppppppcVar30,(longlong)iVar24 * 0x1c);
        }
        uVar42 = uVar42 & ~(uint)uVar31;
        puVar26 = local_c8;
        if (local_c8 == (uint *)0x0) {
          puVar26 = (uint *)&local_d8;
        }
        iVar35 = (int)uVar37;
        lVar15 = (longlong)iVar35;
        uVar14 = puVar26[lVar15] & uVar42;
        if (uVar14 == 0) {
          iVar24 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar24 = local_c0 + -1;
          }
          iVar24 = iVar24 >> 5;
          iVar25 = iVar24;
          if (iVar24 < iVar35) {
            iVar25 = iVar35;
          }
          if (iVar24 <= iVar35) break;
          lVar16 = 0;
          while( true ) {
            iVar34 = iVar34 + 0x20;
            uVar14 = puVar26[lVar15 + lVar16 + 1];
            if (uVar14 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar25 - lVar15 == lVar16) goto LAB_140d3e815;
          }
          uVar37 = (ulonglong)(iVar35 + (int)lVar16 + 1);
          uVar42 = 0xffffffff;
        }
        uVar31 = (ulonglong)(-uVar14 & uVar14);
        uVar32 = uVar31 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar35 < local_c0);
    }
LAB_140d3e815:
    uVar37 = (ulonglong)uStack_4d0;
    uVar31 = uStack_5b8;
    if ((uint)uStack_4d0 != 0) {
      iVar35 = (int)uStack_5b8;
      lVar15 = (longlong)(int)uStack_5b8;
      uStack_5b8 = CONCAT44(uStack_5b8._4_4_,(int)uStack_5b8 + (uint)uStack_4d0);
      if (uStack_5b8._4_4_ - iVar35 < (uint)uStack_4d0) {
        FUN_1418437ce(&local_5c0,uVar31 & 0xffffffff);
      }
      FUN_140d3a5d8(lVar15 * 0x90 + local_5c0,local_4d8,uVar37 & 0xffffffff);
    }
    local_4e8 = (undefined8 *******)0x0;
    uStack_4e0 = (longlong *)0x0;
    iVar35 = (int)ppppppcStack_130 - local_104;
    if (-1 < iVar35) {
      uVar37 = 0;
      FUN_140b625c0(0,0);
      uVar31 = (ulonglong)uStack_4e0 >> 0x20;
      uStack_4e0 = (longlong *)((ulonglong)uStack_4e0 & 0xffffffff00000000);
      if ((int)uVar31 != iVar35) {
        FUN_141843afa(&local_4e8,iVar35);
      }
      if (local_110 == 0) {
        uVar31 = 1;
        iVar34 = 0;
        iVar35 = 0;
      }
      else {
        puVar26 = local_118;
        if (local_118 == (uint *)0x0) {
          puVar26 = local_128;
        }
        uVar42 = *puVar26;
        if (uVar42 == 0) {
          iVar35 = local_110 + 0x1e;
          if (-1 < local_110 + -1) {
            iVar35 = local_110 + -1;
          }
          uVar37 = 0;
          uVar31 = (ulonglong)(uint)(iVar35 >> 5);
          if (iVar35 >> 5 < 1) {
            uVar31 = uVar37;
          }
          iVar34 = 0;
          do {
            if (uVar31 == uVar37) goto LAB_140d3eb6a;
            iVar34 = iVar34 + 0x20;
            uVar42 = puVar26[uVar37 + 1];
            uVar37 = uVar37 + 1;
          } while (uVar42 == 0);
        }
        else {
          uVar37 = 0;
          iVar34 = 0;
        }
        uVar31 = (ulonglong)(-uVar42 & uVar42);
        uVar32 = uVar31 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (local_110 <= iVar35) {
          iVar35 = local_110;
        }
      }
      if (iVar35 < local_110) {
        uVar42 = 0xffffffff;
        do {
          ppppppcVar30 = local_138;
          plVar40 = uStack_4e0;
          lVar15 = (longlong)(int)(uint)uStack_4e0;
          uVar14 = (uint)uStack_4e0 + 1;
          uStack_4e0 = (longlong *)CONCAT44(uStack_4e0._4_4_,uVar14);
          if (uStack_4e0._4_4_ < uVar14) {
            local_648 = (undefined8 ******)CONCAT44(local_648._4_4_,uVar42);
            FUN_141843be0(&local_4e8,(ulonglong)plVar40 & 0xffffffff);
            uVar42 = (uint)local_648;
          }
          ppppppuVar39 = local_4e8;
          lVar16 = lVar15 * 0x90;
          *(undefined4 *)(local_4e8 + lVar15 * 0x12 + 1) =
               *(undefined4 *)(ppppppcVar30 + (longlong)iVar35 * 0x14 + 2);
          local_4e8[lVar15 * 0x12] = (undefined8 *****)ppppppcVar30[(longlong)iVar35 * 0x14 + 1];
          local_4e8[lVar15 * 0x12 + 7] = (undefined8 ******)0x0;
          *(undefined4 *)(local_4e8 + lVar15 * 0x12 + 8) = 0;
          local_4e8[lVar15 * 0x12 + 3] = (undefined8 ******)0x0;
          (local_4e8 + lVar15 * 0x12 + 3)[1] = (undefined8 ******)0x0;
          *(undefined8 *)((longlong)local_4e8 + lVar16 + 0x44) = 0xffffffff00000080;
          *(undefined4 *)((longlong)local_4e8 + lVar16 + 0x4c) = 0;
          local_4e8[lVar15 * 0x12 + 0xb] = (undefined8 ******)0x0;
          *(undefined4 *)(local_4e8 + lVar15 * 0x12 + 0xc) = 0;
          local_4e8[lVar15 * 0x12 + 0xd] = (undefined8 ******)0x0;
          (local_4e8 + lVar15 * 0x12 + 0xd)[1] = (undefined8 ******)0x0;
          local_4e8[lVar15 * 0x12 + 2] = (undefined8 *****)&PTR_FUN_14a46be50;
          local_4e8[lVar15 * 0x12 + 0xf] = (undefined8 ******)0x0;
          iVar24 = *(int *)(ppppppcVar30 + (longlong)iVar35 * 0x14 + 0x11);
          ppppppcVar43 = (code ******)ppppppcVar30[(longlong)iVar35 * 0x14 + 0x10];
          *(int *)(local_4e8 + lVar15 * 0x12 + 0x10) = iVar24;
          if ((longlong)iVar24 == 0) {
            *(undefined4 *)((longlong)local_4e8 + lVar16 + 0x84) = 0;
          }
          else {
            pppppppuVar38 = (undefined8 *******)(local_4e8 + lVar15 * 0x12 + 0xf);
            local_648 = (undefined8 ******)CONCAT44(local_648._4_4_,uVar42);
            FUN_140a3dae8(pppppppuVar38,iVar24,0);
            memcpy(*pppppppuVar38,ppppppcVar43,(longlong)iVar24 << 3);
            uVar42 = (uint)local_648;
          }
          *(undefined1 *)((longlong)ppppppuVar39 + lVar16 + 0x8c) =
               *(undefined1 *)((longlong)ppppppcVar30 + (longlong)iVar35 * 0xa0 + 0x94);
          *(undefined4 *)(ppppppuVar39 + lVar15 * 0x12 + 0x11) =
               *(undefined4 *)(ppppppcVar30 + (longlong)iVar35 * 0x14 + 0x12);
          uVar42 = uVar42 & ~(uint)uVar31;
          puVar26 = local_118;
          if (local_118 == (uint *)0x0) {
            puVar26 = local_128;
          }
          iVar35 = (int)uVar37;
          lVar15 = (longlong)iVar35;
          uVar14 = puVar26[lVar15] & uVar42;
          if (uVar14 == 0) {
            iVar24 = local_110 + 0x1e;
            if (-1 < local_110 + -1) {
              iVar24 = local_110 + -1;
            }
            iVar24 = iVar24 >> 5;
            iVar25 = iVar24;
            if (iVar24 < iVar35) {
              iVar25 = iVar35;
            }
            if (iVar24 <= iVar35) break;
            lVar16 = 0;
            while( true ) {
              iVar34 = iVar34 + 0x20;
              uVar14 = puVar26[lVar15 + lVar16 + 1];
              if (uVar14 != 0) break;
              lVar16 = lVar16 + 1;
              if (iVar25 - lVar15 == lVar16) goto LAB_140d3eb6a;
            }
            uVar37 = (ulonglong)(iVar35 + (int)lVar16 + 1);
            uVar42 = 0xffffffff;
          }
          uVar31 = (ulonglong)(-uVar14 & uVar14);
          uVar32 = uVar31 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        } while (iVar35 < local_110);
      }
LAB_140d3eb6a:
      plVar40 = uStack_4e0;
      uVar31 = uStack_5a8;
      if ((uint)uStack_4e0 != 0) {
        iVar35 = (int)uStack_5a8;
        lVar15 = (longlong)(int)uStack_5a8;
        uStack_5a8 = CONCAT44(uStack_5a8._4_4_,(uint)uStack_4e0 + (int)uStack_5a8);
        if ((uint)(uStack_5a8._4_4_ - iVar35) < (uint)uStack_4e0) {
          FUN_141843be0(&local_5b0,uVar31 & 0xffffffff);
        }
        FUN_140d3a8f6(lVar15 * 0x90 + local_5b0,local_4e8,(ulonglong)plVar40 & 0xffffffff);
      }
      local_4f8 = (undefined8 *******)0x0;
      uStack_4f0 = (undefined4 *)0x0;
      iVar35 = (int)ppppppcStack_180 - local_154;
      if (-1 < iVar35) {
        pppppppuVar38 = (undefined8 *******)0x0;
        FUN_140b623b1(0,0);
        uVar31 = (ulonglong)uStack_4f0 >> 0x20;
        uStack_4f0 = (undefined4 *)((ulonglong)uStack_4f0 & 0xffffffff00000000);
        if ((int)uVar31 != iVar35) {
          FUN_141843cf0(&local_4f8,iVar35);
        }
        if (local_160 == 0) {
          uVar31 = 1;
          iVar34 = 0;
          iVar35 = 0;
        }
        else {
          puVar26 = local_168;
          if (local_168 == (uint *)0x0) {
            puVar26 = local_178;
          }
          uVar42 = *puVar26;
          if (uVar42 == 0) {
            iVar35 = local_160 + 0x1e;
            if (-1 < local_160 + -1) {
              iVar35 = local_160 + -1;
            }
            pppppppuVar38 = (undefined8 *******)0x0;
            pppppppuVar27 = (undefined8 *******)(ulonglong)(uint)(iVar35 >> 5);
            if (iVar35 >> 5 < 1) {
              pppppppuVar27 = pppppppuVar38;
            }
            iVar35 = 0;
            do {
              if (pppppppuVar27 == pppppppuVar38) goto LAB_140d3eedd;
              iVar35 = iVar35 + 0x20;
              uVar42 = puVar26[(longlong)pppppppuVar38 + 1];
              pppppppuVar38 = (undefined8 *******)((longlong)pppppppuVar38 + 1);
            } while (uVar42 == 0);
          }
          else {
            pppppppuVar38 = (undefined8 *******)0x0;
            iVar35 = 0;
          }
          uVar31 = (ulonglong)(-uVar42 & uVar42);
          uVar37 = uVar31 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar34 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (local_160 <= iVar34) {
            iVar34 = local_160;
          }
        }
        if (iVar34 < local_160) {
          uVar42 = 0xffffffff;
          do {
            ppppppuVar39 = local_188;
            puVar12 = uStack_4f0;
            local_620 = CONCAT44(local_620._4_4_,uVar42);
            local_638 = (code *****)CONCAT44(local_638._4_4_,iVar35);
            lVar15 = (longlong)(int)(uint)uStack_4f0;
            uVar42 = (uint)uStack_4f0 + 1;
            uStack_4f0 = (undefined4 *)CONCAT44(uStack_4f0._4_4_,uVar42);
            local_648 = pppppppuVar38;
            if (uStack_4f0._4_4_ < uVar42) {
              FUN_141843900(&local_4f8,(ulonglong)puVar12 & 0xffffffff);
            }
            ppppppuVar8 = local_4f8;
            pppppppuVar38 = (undefined8 *******)(local_4f8 + lVar15 * 0x42);
            *(undefined4 *)(pppppppuVar38 + 1) =
                 *(undefined4 *)(ppppppuVar39 + (longlong)iVar34 * 0x44 + 2);
            *pppppppuVar38 = (undefined8 ******)ppppppuVar39[(longlong)iVar34 * 0x44 + 1];
            lVar16 = 0;
            do {
              *(undefined8 *)((longlong)pppppppuVar38 + lVar16 + 0x38) = 0;
              *(undefined4 *)((longlong)pppppppuVar38 + lVar16 + 0x40) = 0;
              puVar29 = (undefined8 *)((longlong)pppppppuVar38 + lVar16 + 0x18);
              *puVar29 = 0;
              puVar29[1] = 0;
              *(undefined8 *)((longlong)pppppppuVar38 + lVar16 + 0x44) = 0xffffffff00000080;
              *(undefined4 *)((longlong)pppppppuVar38 + lVar16 + 0x4c) = 0;
              *(undefined8 *)((longlong)pppppppuVar38 + lVar16 + 0x58) = 0;
              *(undefined4 *)((longlong)pppppppuVar38 + lVar16 + 0x60) = 0;
              puVar29 = (undefined8 *)((longlong)pppppppuVar38 + lVar16 + 0x68);
              *puVar29 = 0;
              puVar29[1] = 0;
              *(undefined ***)((longlong)pppppppuVar38 + lVar16 + 0x10) = &PTR_FUN_14a176fc0;
              *(undefined4 *)((longlong)pppppppuVar38 + lVar16 + 0x78) =
                   *(undefined4 *)
                    ((longlong)ppppppuVar39 + lVar16 + (longlong)iVar34 * 0x220 + 0x80);
              *(undefined2 *)((longlong)pppppppuVar38 + lVar16 + 0x7c) =
                   *(undefined2 *)
                    ((longlong)ppppppuVar39 + lVar16 + (longlong)iVar34 * 0x220 + 0x84);
              *(undefined **)((longlong)pppppppuVar38 + lVar16 + 0x10) = &DAT_14a176f00;
              *(undefined8 *)((longlong)pppppppuVar38 + lVar16 + 0x80) = 0;
              iVar35 = *(int *)((longlong)ppppppuVar39 + lVar16 + (longlong)iVar34 * 0x220 + 0x90);
              pvVar9 = *(void **)((longlong)ppppppuVar39 + lVar16 + (longlong)iVar34 * 0x220 + 0x88)
              ;
              *(int *)((longlong)pppppppuVar38 + lVar16 + 0x88) = iVar35;
              if ((longlong)iVar35 == 0) {
                *(undefined4 *)((longlong)pppppppuVar38 + lVar16 + 0x8c) = 0;
              }
              else {
                FUN_140501c24((longlong)ppppppuVar8 + lVar16 + lVar15 * 0x210 + 0x80,iVar35,0);
                memcpy(*(void **)((longlong)pppppppuVar38 + lVar16 + 0x80),pvVar9,
                       (longlong)iVar35 * 0x1c);
              }
              lVar16 = lVar16 + 0x80;
            } while (lVar16 != 0x200);
            uVar42 = (uint)local_620 & ~(uint)uVar31;
            puVar26 = local_168;
            if (local_168 == (uint *)0x0) {
              puVar26 = local_178;
            }
            iVar34 = (int)local_648;
            lVar15 = (longlong)iVar34;
            uVar14 = puVar26[lVar15] & uVar42;
            pppppppuVar38 = (undefined8 *******)local_648;
            iVar35 = (int)local_638;
            if (uVar14 == 0) {
              iVar24 = local_160 + 0x1e;
              if (-1 < local_160 + -1) {
                iVar24 = local_160 + -1;
              }
              iVar24 = iVar24 >> 5;
              iVar25 = iVar24;
              if (iVar24 < iVar34) {
                iVar25 = iVar34;
              }
              if (iVar24 <= iVar34) break;
              lVar16 = 0;
              while( true ) {
                iVar35 = iVar35 + 0x20;
                uVar14 = puVar26[lVar15 + lVar16 + 1];
                if (uVar14 != 0) break;
                lVar16 = lVar16 + 1;
                if (iVar25 - lVar15 == lVar16) goto LAB_140d3eedd;
              }
              uVar42 = 0xffffffff;
              pppppppuVar38 = (undefined8 *******)(ulonglong)(iVar34 + (int)lVar16 + 1);
            }
            uVar31 = (ulonglong)(-uVar14 & uVar14);
            uVar37 = uVar31 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar34 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          } while (iVar34 < local_160);
        }
LAB_140d3eedd:
        puVar12 = uStack_4f0;
        uVar31 = uStack_598;
        if ((uint)uStack_4f0 != 0) {
          iVar35 = (int)uStack_598;
          lVar15 = (longlong)(int)uStack_598;
          uStack_598 = CONCAT44(uStack_598._4_4_,(uint)uStack_4f0 + (int)uStack_598);
          if (uStack_598._4_4_ - iVar35 < (uint)uStack_4f0) {
            FUN_141843900(&local_5a0,uVar31 & 0xffffffff);
          }
          FUN_140d3a9de(lVar15 * 0x210 + local_5a0,local_4f8,(ulonglong)puVar12 & 0xffffffff);
        }
        local_508 = (code *****)0x0;
        uStack_500 = 0;
        iVar35 = (int)uStack_1d0 - local_1a4;
        if (-1 < iVar35) {
          iVar34 = 0;
          FUN_140b62389(0,0);
          uVar31 = uStack_500 >> 0x20;
          uStack_500 = uStack_500 & 0xffffffff00000000;
          if ((int)uVar31 != iVar35) {
            FUN_14860b3c6(&local_508,iVar35);
          }
          uVar37 = 1;
          uVar31 = 0;
          iVar35 = 0;
          if (local_1b0 != 0) {
            puVar26 = local_1b8;
            if (local_1b8 == (uint *)0x0) {
              puVar26 = local_1c8;
            }
            uVar42 = *puVar26;
            if (uVar42 == 0) {
              iVar35 = local_1b0 + 0x1e;
              if (-1 < local_1b0 + -1) {
                iVar35 = local_1b0 + -1;
              }
              uVar31 = 0;
              uVar37 = (ulonglong)(uint)(iVar35 >> 5);
              if (iVar35 >> 5 < 1) {
                uVar37 = 0;
              }
              iVar34 = 0;
              do {
                if (uVar37 == uVar31) goto LAB_140d3efb0;
                iVar34 = iVar34 + 0x20;
                uVar42 = puVar26[uVar31 + 1];
                uVar31 = uVar31 + 1;
              } while (uVar42 == 0);
            }
            else {
              iVar34 = 0;
              uVar31 = 0;
            }
            uVar37 = (ulonglong)(-uVar42 & uVar42);
            uVar32 = uVar37 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (local_1b0 <= iVar35) {
              iVar35 = local_1b0;
            }
          }
          if (iVar35 < local_1b0) {
            uVar42 = 0xffffffff;
            do {
              pppppcVar21 = local_1d8;
              uVar32 = uStack_500;
              lVar15 = (longlong)(int)(uint)uStack_500;
              uVar14 = (uint)uStack_500 + 1;
              uStack_500 = CONCAT44(uStack_500._4_4_,uVar14);
              if (uStack_500._4_4_ < uVar14) {
                FUN_14860b436(&local_508,uVar32 & 0xffffffff);
              }
              FUN_1486038da(local_508 + lVar15 * 9,pppppcVar21 + (longlong)iVar35 * 0xb + 1);
              uVar42 = uVar42 & ~(uint)uVar37;
              puVar26 = local_1b8;
              if (local_1b8 == (uint *)0x0) {
                puVar26 = local_1c8;
              }
              iVar35 = (int)uVar31;
              lVar15 = (longlong)iVar35;
              uVar14 = puVar26[lVar15] & uVar42;
              if (uVar14 == 0) {
                iVar24 = local_1b0 + 0x1e;
                if (-1 < local_1b0 + -1) {
                  iVar24 = local_1b0 + -1;
                }
                iVar25 = iVar24 >> 5;
                if (iVar24 >> 5 < iVar35) {
                  iVar25 = iVar35;
                }
                lVar16 = 0;
                do {
                  if (iVar25 - lVar15 == lVar16) goto LAB_140d3efb0;
                  iVar34 = iVar34 + 0x20;
                  uVar14 = puVar26[lVar15 + lVar16 + 1];
                  lVar16 = lVar16 + 1;
                } while (uVar14 == 0);
                uVar31 = (ulonglong)(uint)(iVar35 + (int)lVar16);
                uVar42 = 0xffffffff;
              }
              uVar37 = (ulonglong)(-uVar14 & uVar14);
              uVar32 = uVar37 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            } while (iVar35 < local_1b0);
          }
LAB_140d3efb0:
          uVar37 = uStack_500;
          uVar31 = uStack_588;
          uVar32 = 0;
          if ((uint)uStack_500 != 0) {
            iVar35 = (int)uStack_588;
            lVar15 = (longlong)(int)uStack_588;
            uStack_588 = CONCAT44(uStack_588._4_4_,(uint)uStack_500 + (int)uStack_588);
            if ((uint)(uStack_588._4_4_ - iVar35) < (uint)uStack_500) {
              FUN_14860b436(&local_590,uVar31 & 0xffffffff);
            }
            FUN_14860afa2(lVar15 * 0x48 + local_590,local_508,uVar37 & 0xffffffff);
            uVar32 = uStack_500 & 0xffffffff;
          }
          FUN_140b62389(local_508,uVar32);
          if ((code ******)local_508 != (code ******)0x0) {
            FUN_1400020a8();
          }
          FUN_140b623b1(local_4f8,(ulonglong)uStack_4f0 & 0xffffffff);
          if ((undefined8 *******)local_4f8 != (undefined8 *******)0x0) {
            FUN_1400020a8();
          }
          FUN_140b625c0(local_4e8,(ulonglong)uStack_4e0 & 0xffffffff);
          if ((undefined8 *******)local_4e8 != (undefined8 *******)0x0) {
            FUN_1400020a8();
          }
          FUN_140b626ab(local_4d8,(ulonglong)uStack_4d0 & 0xffffffff);
          if (local_4d8 != (code *)0x0) {
            FUN_1400020a8();
          }
          FUN_140cf30f4(local_3c0);
          FUN_140cf30f4(local_490);
          local_190 = 0;
          if (local_198 != 0) {
            FUN_1400020a8();
          }
          if (local_1b0 == 0) {
            uVar32 = 1;
            uVar31 = 0;
            iVar35 = 0;
            iVar34 = 0;
          }
          else {
            puVar26 = local_1b8;
            if (local_1b8 == (uint *)0x0) {
              puVar26 = local_1c8;
            }
            uVar42 = *puVar26;
            if (uVar42 == 0) {
              iVar35 = local_1b0 + 0x1e;
              if (-1 < local_1b0 + -1) {
                iVar35 = local_1b0 + -1;
              }
              uVar31 = 0;
              uVar37 = (ulonglong)(uint)(iVar35 >> 5);
              if (iVar35 >> 5 < 1) {
                uVar37 = uVar31;
              }
              iVar35 = 0;
              do {
                if (uVar37 == uVar31) goto LAB_140d3f0b4;
                iVar35 = iVar35 + 0x20;
                uVar42 = puVar26[uVar31 + 1];
                uVar31 = uVar31 + 1;
              } while (uVar42 == 0);
            }
            else {
              uVar31 = 0;
              iVar35 = 0;
            }
            uVar32 = (ulonglong)(-uVar42 & uVar42);
            uVar37 = uVar32 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar34 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (local_1b0 <= iVar34) {
              iVar34 = local_1b0;
            }
          }
          if (iVar34 < local_1b0) {
            uVar42 = 0xffffffff;
            do {
              FUN_148603a84(local_1d8 + (longlong)iVar34 * 0xb + 1);
              uVar42 = ~(uint)uVar32 & uVar42;
              puVar26 = local_1b8;
              if (local_1b8 == (uint *)0x0) {
                puVar26 = local_1c8;
              }
              iVar34 = (int)uVar31;
              lVar15 = (longlong)iVar34;
              uVar14 = puVar26[lVar15] & uVar42;
              if (uVar14 == 0) {
                iVar24 = local_1b0 + 0x1e;
                if (-1 < local_1b0 + -1) {
                  iVar24 = local_1b0 + -1;
                }
                iVar25 = iVar24 >> 5;
                if (iVar24 >> 5 < iVar34) {
                  iVar25 = iVar34;
                }
                lVar16 = 0;
                do {
                  if (iVar25 - lVar15 == lVar16) goto LAB_140d3f0b4;
                  iVar35 = iVar35 + 0x20;
                  uVar14 = puVar26[lVar15 + lVar16 + 1];
                  lVar16 = lVar16 + 1;
                } while (uVar14 == 0);
                uVar31 = (ulonglong)(uint)(iVar34 + (int)lVar16);
                uVar42 = 0xffffffff;
              }
              uVar32 = (ulonglong)(-uVar14 & uVar14);
              uVar37 = uVar32 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar34 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            } while (iVar34 < local_1b0);
          }
LAB_140d3f0b4:
          uVar31 = uStack_1d0 >> 0x20;
          uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
          if ((int)uVar31 != 0) {
            FUN_140e91948(&local_1d8,0);
          }
          uStack_1a8 = 0xffffffff;
          local_1a4 = 0;
          local_1b0 = 0;
          if (0x80 < local_1ac) {
            local_1ac = 0x80;
            FUN_1446efbd8(local_1c8,0);
          }
          if (local_1b8 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if (local_1d8 != (code *****)0x0) {
            FUN_1400020a8();
          }
          local_140 = 0;
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          if (local_160 == 0) {
            uVar37 = 0;
            uVar31 = 1;
            iVar35 = 0;
            iVar34 = 0;
          }
          else {
            puVar26 = local_168;
            if (local_168 == (uint *)0x0) {
              puVar26 = local_178;
            }
            uVar42 = *puVar26;
            if (uVar42 == 0) {
              iVar35 = local_160 + 0x1e;
              if (-1 < local_160 + -1) {
                iVar35 = local_160 + -1;
              }
              uVar37 = 0;
              uVar31 = (ulonglong)(uint)(iVar35 >> 5);
              if (iVar35 >> 5 < 1) {
                uVar31 = uVar37;
              }
              iVar34 = 0;
              do {
                if (uVar31 == uVar37) goto LAB_140d3f277;
                iVar34 = iVar34 + 0x20;
                uVar42 = puVar26[uVar37 + 1];
                uVar37 = uVar37 + 1;
              } while (uVar42 == 0);
            }
            else {
              uVar37 = 0;
              iVar34 = 0;
            }
            uVar31 = (ulonglong)(-uVar42 & uVar42);
            uVar32 = uVar31 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (local_160 <= iVar35) {
              iVar35 = local_160;
            }
          }
          if (iVar35 < local_160) {
            uVar42 = 0xffffffff;
            do {
              FUN_140b623da(local_188 + (longlong)iVar35 * 0x44 + 1);
              uVar42 = ~(uint)uVar31 & uVar42;
              puVar26 = local_168;
              if (local_168 == (uint *)0x0) {
                puVar26 = local_178;
              }
              iVar35 = (int)uVar37;
              lVar15 = (longlong)iVar35;
              uVar14 = puVar26[lVar15] & uVar42;
              if (uVar14 == 0) {
                iVar24 = local_160 + 0x1e;
                if (-1 < local_160 + -1) {
                  iVar24 = local_160 + -1;
                }
                iVar24 = iVar24 >> 5;
                iVar25 = iVar24;
                if (iVar24 < iVar35) {
                  iVar25 = iVar35;
                }
                if (iVar24 <= iVar35) break;
                lVar16 = 0;
                while( true ) {
                  iVar34 = iVar34 + 0x20;
                  uVar14 = puVar26[lVar15 + lVar16 + 1];
                  if (uVar14 != 0) break;
                  lVar16 = lVar16 + 1;
                  if (iVar25 - lVar15 == lVar16) goto LAB_140d3f277;
                }
                uVar37 = (ulonglong)(iVar35 + (int)lVar16 + 1);
                uVar42 = 0xffffffff;
              }
              uVar31 = (ulonglong)(-uVar14 & uVar14);
              uVar32 = uVar31 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            } while (iVar35 < local_160);
          }
LAB_140d3f277:
          uVar31 = (ulonglong)ppppppcStack_180 >> 0x20;
          ppppppcStack_180 = (code ******)((ulonglong)ppppppcStack_180 & 0xffffffff00000000);
          if ((int)uVar31 != 0) {
            FUN_14178cb18(&local_188,0);
          }
          uStack_158 = 0xffffffff;
          local_154 = 0;
          local_160 = 0;
          if (0x80 < local_15c) {
            local_15c = 0x80;
            FUN_1446efbd8(local_178,0);
          }
          if (local_168 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if (local_188 != (undefined8 ******)0x0) {
            FUN_1400020a8();
          }
          local_f0 = 0;
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          if (local_110 == 0) {
            uVar31 = 0;
            uVar37 = 1;
            iVar34 = 0;
            iVar35 = 0;
          }
          else {
            puVar26 = local_118;
            if (local_118 == (uint *)0x0) {
              puVar26 = local_128;
            }
            uVar42 = *puVar26;
            if (uVar42 == 0) {
              iVar35 = local_110 + 0x1e;
              if (-1 < local_110 + -1) {
                iVar35 = local_110 + -1;
              }
              uVar31 = 0;
              uVar37 = (ulonglong)(uint)(iVar35 >> 5);
              if (iVar35 >> 5 < 1) {
                uVar37 = uVar31;
              }
              iVar34 = 0;
              do {
                if (uVar37 == uVar31) goto LAB_140d3f546;
                iVar34 = iVar34 + 0x20;
                uVar42 = puVar26[uVar31 + 1];
                uVar31 = uVar31 + 1;
              } while (uVar42 == 0);
            }
            else {
              uVar31 = 0;
              iVar34 = 0;
            }
            uVar37 = (ulonglong)(-uVar42 & uVar42);
            uVar32 = uVar37 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (local_110 <= iVar35) {
              iVar35 = local_110;
            }
          }
          if (iVar35 < local_110) {
            uVar42 = 0xffffffff;
            do {
              ppppppcVar30 = local_138;
              lVar15 = (longlong)iVar35;
              lVar16 = lVar15 * 0xa0;
              local_138[lVar15 * 0x14 + 3] = (code *****)&PTR_FUN_14a46be50;
              if ((code ******)local_138[lVar15 * 0x14 + 0x10] != (code ******)0x0) {
                FUN_1400020a8();
              }
              ppppppcVar30[lVar15 * 0x14 + 3] = (code *****)&PTR_FUN_14a177080;
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 0xe] != (code ******)0x0) {
                FUN_1400020a8();
              }
              *(undefined4 *)(ppppppcVar30 + lVar15 * 0x14 + 0xd) = 0;
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 0xc] != (code ******)0x0) {
                FUN_1400020a8();
              }
              *(undefined4 *)(ppppppcVar30 + lVar15 * 0x14 + 5) = 0;
              if (*(int *)((longlong)ppppppcVar30 + lVar16 + 0x2c) != 0) {
                FUN_14472eb64(ppppppcVar30 + lVar15 * 0x14 + 4,0);
              }
              ppppppcVar30[lVar15 * 0x14 + 10] = (code *****)0xffffffff;
              *(undefined4 *)(ppppppcVar30 + lVar15 * 0x14 + 9) = 0;
              if (0x80 < *(uint *)((longlong)ppppppcVar30 + lVar16 + 0x4c)) {
                *(undefined4 *)((longlong)ppppppcVar30 + lVar16 + 0x4c) = 0x80;
                FUN_1446efbd8(ppppppcVar30 + lVar15 * 0x14 + 6,0);
              }
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 8] != (code ******)0x0) {
                FUN_1400020a8();
              }
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 4] != (code ******)0x0) {
                FUN_1400020a8();
              }
              uVar42 = uVar42 & ~(uint)uVar37;
              puVar26 = local_118;
              if (local_118 == (uint *)0x0) {
                puVar26 = local_128;
              }
              iVar35 = (int)uVar31;
              lVar15 = (longlong)iVar35;
              uVar14 = puVar26[lVar15] & uVar42;
              if (uVar14 == 0) {
                iVar24 = local_110 + 0x1e;
                if (-1 < local_110 + -1) {
                  iVar24 = local_110 + -1;
                }
                iVar24 = iVar24 >> 5;
                iVar25 = iVar24;
                if (iVar24 < iVar35) {
                  iVar25 = iVar35;
                }
                if (iVar24 <= iVar35) break;
                lVar16 = 0;
                while( true ) {
                  iVar34 = iVar34 + 0x20;
                  uVar14 = puVar26[lVar15 + lVar16 + 1];
                  if (uVar14 != 0) break;
                  lVar16 = lVar16 + 1;
                  if (iVar25 - lVar15 == lVar16) goto LAB_140d3f546;
                }
                uVar31 = (ulonglong)(iVar35 + (int)lVar16 + 1);
                uVar42 = 0xffffffff;
              }
              uVar37 = (ulonglong)(-uVar14 & uVar14);
              uVar32 = uVar37 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            } while (iVar35 < local_110);
          }
LAB_140d3f546:
          uVar31 = (ulonglong)ppppppcStack_130 >> 0x20;
          ppppppcStack_130 = (code ******)((ulonglong)ppppppcStack_130 & 0xffffffff00000000);
          if ((int)uVar31 != 0) {
            FUN_14152de66(&local_138,0);
          }
          uStack_108 = 0xffffffff;
          local_104 = 0;
          local_110 = 0;
          if (0x80 < local_10c) {
            local_10c = 0x80;
            FUN_1446efbd8(local_128,0);
          }
          if (local_118 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if ((code *******)local_138 != (code *******)0x0) {
            FUN_1400020a8();
          }
          local_a0 = 0;
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (local_c0 == 0) {
            uVar31 = 0;
            uVar37 = 1;
            iVar35 = 0;
            iVar34 = 0;
          }
          else {
            puVar26 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar26 = (uint *)&local_d8;
            }
            uVar42 = *puVar26;
            if (uVar42 == 0) {
              iVar35 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar35 = local_c0 + -1;
              }
              uVar31 = 0;
              uVar37 = (ulonglong)(uint)(iVar35 >> 5);
              if (iVar35 >> 5 < 1) {
                uVar37 = uVar31;
              }
              iVar34 = 0;
              do {
                if (uVar37 == uVar31) goto LAB_140d3f843;
                iVar34 = iVar34 + 0x20;
                uVar42 = puVar26[uVar31 + 1];
                uVar31 = uVar31 + 1;
              } while (uVar42 == 0);
            }
            else {
              uVar31 = 0;
              iVar34 = 0;
            }
            uVar37 = (ulonglong)(-uVar42 & uVar42);
            uVar32 = uVar37 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (local_c0 <= iVar35) {
              iVar35 = local_c0;
            }
          }
          if (iVar35 < local_c0) {
            uVar42 = 0xffffffff;
            do {
              ppppppcVar30 = local_e8;
              lVar15 = (longlong)iVar35;
              lVar16 = lVar15 * 0xa0;
              local_e8[lVar15 * 0x14 + 3] = (code *****)&DAT_14a176f00;
              if ((code ******)local_e8[lVar15 * 0x14 + 0x11] != (code ******)0x0) {
                FUN_1400020a8();
              }
              ppppppcVar30[lVar15 * 0x14 + 3] = (code *****)&PTR_FUN_14a177080;
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 0xe] != (code ******)0x0) {
                FUN_1400020a8();
              }
              *(undefined4 *)(ppppppcVar30 + lVar15 * 0x14 + 0xd) = 0;
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 0xc] != (code ******)0x0) {
                FUN_1400020a8();
              }
              *(undefined4 *)(ppppppcVar30 + lVar15 * 0x14 + 5) = 0;
              if (*(int *)((longlong)ppppppcVar30 + lVar16 + 0x2c) != 0) {
                FUN_14472eb64(ppppppcVar30 + lVar15 * 0x14 + 4,0);
              }
              ppppppcVar30[lVar15 * 0x14 + 10] = (code *****)0xffffffff;
              *(undefined4 *)(ppppppcVar30 + lVar15 * 0x14 + 9) = 0;
              if (0x80 < *(uint *)((longlong)ppppppcVar30 + lVar16 + 0x4c)) {
                *(undefined4 *)((longlong)ppppppcVar30 + lVar16 + 0x4c) = 0x80;
                FUN_1446efbd8(ppppppcVar30 + lVar15 * 0x14 + 6,0);
              }
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 8] != (code ******)0x0) {
                FUN_1400020a8();
              }
              if ((code ******)ppppppcVar30[lVar15 * 0x14 + 4] != (code ******)0x0) {
                FUN_1400020a8();
              }
              uVar42 = uVar42 & ~(uint)uVar37;
              puVar26 = local_c8;
              if (local_c8 == (uint *)0x0) {
                puVar26 = (uint *)&local_d8;
              }
              iVar35 = (int)uVar31;
              lVar15 = (longlong)iVar35;
              uVar14 = puVar26[lVar15] & uVar42;
              if (uVar14 == 0) {
                iVar24 = local_c0 + 0x1e;
                if (-1 < local_c0 + -1) {
                  iVar24 = local_c0 + -1;
                }
                iVar24 = iVar24 >> 5;
                iVar25 = iVar24;
                if (iVar24 < iVar35) {
                  iVar25 = iVar35;
                }
                if (iVar24 <= iVar35) break;
                lVar16 = 0;
                while( true ) {
                  iVar34 = iVar34 + 0x20;
                  uVar14 = puVar26[lVar15 + lVar16 + 1];
                  if (uVar14 != 0) break;
                  lVar16 = lVar16 + 1;
                  if (iVar25 - lVar15 == lVar16) goto LAB_140d3f843;
                }
                uVar31 = (ulonglong)(iVar35 + (int)lVar16 + 1);
                uVar42 = 0xffffffff;
              }
              uVar37 = (ulonglong)(-uVar14 & uVar14);
              uVar32 = uVar37 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar35 = (iVar34 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            } while (iVar35 < local_c0);
          }
LAB_140d3f843:
          uVar31 = (ulonglong)ppppppcStack_e0 >> 0x20;
          ppppppcStack_e0 = (code ******)((ulonglong)ppppppcStack_e0 & 0xffffffff00000000);
          if ((int)uVar31 != 0) {
            FUN_14152de66(&local_e8,0);
          }
          puVar29 = local_630;
          uStack_b8 = 0xffffffff;
          local_b4 = 0;
          local_c0 = 0;
          if (0x80 < local_bc) {
            local_bc = 0x80;
            FUN_1446efbd8(&local_d8,0);
          }
          if (local_c8 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if ((code *******)local_e8 != (code *******)0x0) {
            FUN_1400020a8();
          }
          local_3d8 = (code ******)0x0;
          uStack_3d0 = (undefined8 *******)0x0;
          local_3e8 = (undefined8 ******)DAT_14cb54190;
          uStack_3e0 = CONCAT31(uStack_3e0._1_3_,*(undefined1 *)(puVar29 + 0xf));
          fVar6 = *(float *)(local_610[1] + 0x60);
          if ((longlong)*(int *)(puVar29 + 0xb) != 0) {
            plVar40 = (longlong *)puVar29[10];
            lVar15 = (longlong)*(int *)(puVar29 + 0xb) * 0x18;
            do {
              lVar16 = *plVar40;
              if (lVar16 != 0) {
                uVar20 = FUN_141199f54();
                cVar13 = FUN_1448093f4(lVar16,uVar20);
                if (cVar13 != '\0') {
                  FUN_145827a60(plVar40,&local_4b8);
                  pppppppcVar22 = uStack_4b0;
                  ppppppuVar39 = local_4b8;
                  local_4b8 = (undefined8 *******)0x0;
                  uStack_4b0 = (code *******)0x0;
                  if ((((undefined8 *******)ppppppuVar39 != (undefined8 *******)0x0) &&
                      (*(char *)((longlong)ppppppuVar39 + 0xc) == '\x01')) &&
                     ((fVar7 = *(float *)(ppppppuVar39 + 1), 0.0 <= fVar7 && (fVar7 < fVar6)))) {
                    pppppcVar21 = (code *****)FUN_14001cc68(0x18,0x10);
                    pppppcVar21[1] = (code ****)&DAT_100000001;
                    *pppppcVar21 = (code ****)&PTR_FUN_14afe2fe0;
                    pppppppuVar38 = (undefined8 *******)(pppppcVar21 + 2);
                    pppppcVar21[2] = (code ****)0x0;
                    if (pppppcVar21 == (code *****)0x0) {
                      _DAT_00000010 = (undefined8 ******)ppppppuVar39[2];
                    }
                    else {
                      LOCK();
                      *(int *)(pppppcVar21 + 1) = *(int *)(pppppcVar21 + 1) + 1;
                      UNLOCK();
                      LOCK();
                      pppppcVar23 = pppppcVar21 + 1;
                      *(int *)pppppcVar23 = *(int *)pppppcVar23 + -1;
                      UNLOCK();
                      if (*(int *)pppppcVar23 == 0) {
                        local_648 = pppppppuVar38;
                        (*(code *)**pppppcVar21)(pppppcVar21);
                        LOCK();
                        piVar3 = (int *)((longlong)pppppcVar21 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        pppppppuVar38 = (undefined8 *******)local_648;
                        if (*piVar3 == 0) {
                          (*(code *)(*pppppcVar21)[2])(pppppcVar21);
                          pppppppuVar38 = (undefined8 *******)local_648;
                        }
                      }
                      pppppcVar21[2] = (code ****)ppppppuVar39[2];
                      LOCK();
                      *(int *)(pppppcVar21 + 1) = *(int *)(pppppcVar21 + 1) + 1;
                      UNLOCK();
                    }
                    uVar31 = (ulonglong)uStack_3d0;
                    lVar16 = (longlong)(int)uStack_3d0;
                    uVar42 = (int)uStack_3d0 + 1;
                    uStack_3d0 = (undefined8 *******)CONCAT44(uStack_3d0._4_4_,uVar42);
                    if (uStack_3d0._4_4_ < uVar42) {
                      local_648 = pppppppuVar38;
                      FUN_1404fc222(&local_3d8,uVar31 & 0xffffffff);
                      pppppppuVar38 = (undefined8 *******)local_648;
                    }
                    *(float *)(local_3d8 + lVar16 * 3) = fVar7 / fVar6;
                    local_3d8[lVar16 * 3 + 1] = (code *****)pppppppuVar38;
                    local_3d8[lVar16 * 3 + 2] = pppppcVar21;
                    if (pppppcVar21 != (code *****)0x0) {
                      LOCK();
                      *(int *)(pppppcVar21 + 1) = *(int *)(pppppcVar21 + 1) + 1;
                      UNLOCK();
                      LOCK();
                      pppppcVar23 = pppppcVar21 + 1;
                      *(int *)pppppcVar23 = *(int *)pppppcVar23 + -1;
                      UNLOCK();
                      if (*(int *)pppppcVar23 == 0) {
                        (*(code *)**pppppcVar21)(pppppcVar21);
                        LOCK();
                        piVar3 = (int *)((longlong)pppppcVar21 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (*(code *)(*pppppcVar21)[2])(pppppcVar21);
                        }
                      }
                      LOCK();
                      pppppcVar23 = pppppcVar21 + 1;
                      *(int *)pppppcVar23 = *(int *)pppppcVar23 + -1;
                      UNLOCK();
                      if (*(int *)pppppcVar23 == 0) {
                        (*(code *)**pppppcVar21)(pppppcVar21);
                        LOCK();
                        piVar3 = (int *)((longlong)pppppcVar21 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (*(code *)(*pppppcVar21)[2])(pppppcVar21);
                        }
                      }
                    }
                  }
                  if (pppppppcVar22 != (code *******)0x0) {
                    LOCK();
                    pppppppcVar4 = pppppppcVar22 + 1;
                    *(int *)pppppppcVar4 = *(int *)pppppppcVar4 + -1;
                    UNLOCK();
                    if (*(int *)pppppppcVar4 == 0) {
                      (*(code *)**pppppppcVar22)(pppppppcVar22);
                      LOCK();
                      piVar3 = (int *)((longlong)pppppppcVar22 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (*(code *)(*pppppppcVar22)[2])(pppppppcVar22);
                      }
                    }
                  }
                  pppppppcVar22 = uStack_4b0;
                  if (uStack_4b0 != (code *******)0x0) {
                    LOCK();
                    pppppppcVar4 = uStack_4b0 + 1;
                    *(int *)pppppppcVar4 = *(int *)pppppppcVar4 + -1;
                    UNLOCK();
                    if (*(int *)pppppppcVar4 == 0) {
                      (*(code *)**uStack_4b0)(uStack_4b0);
                      LOCK();
                      piVar3 = (int *)((longlong)pppppppcVar22 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (*(code *)(*pppppppcVar22)[2])(pppppppcVar22);
                      }
                    }
                  }
                }
              }
              plVar40 = plVar40 + 3;
              lVar15 = lVar15 + -0x18;
              puVar29 = local_630;
            } while (lVar15 != 0);
          }
          pppppppuVar38 = (undefined8 *******)(local_640 + 0x1a);
          if (*(int *)(local_640 + 0x1b) != *(int *)((longlong)local_640 + 0x104)) {
            uVar42 = (uint)((ulonglong)local_3e8 >> 0x10);
            uVar14 = (uint)local_3e8 & 0xffff;
            pppppppuVar27 = (undefined8 *******)(local_640 + 0x21);
            if ((undefined8 *******)local_640[0x22] != (undefined8 *******)0x0) {
              pppppppuVar27 = (undefined8 *******)local_640[0x22];
            }
            iVar35 = *(int *)((longlong)pppppppuVar27 +
                             (ulonglong)
                             (*(int *)(local_640 + 0x23) - 1U &
                             (int)((ulonglong)local_3e8 >> 0x20) +
                             ((uint)local_3e8 << 0x10 | uVar14) + (uVar42 << 0x13 | uVar42 & 0xffff)
                             + (uVar14 >> 4)) * 4);
            if (iVar35 != -1) {
              do {
                if ((undefined8 ******)(*pppppppuVar38)[(longlong)iVar35 * 4] == local_3e8)
                goto LAB_140d3fcf5;
                iVar35 = *(int *)(*pppppppuVar38 + (longlong)iVar35 * 4 + 3);
              } while (iVar35 != -1);
            }
          }
          pppppppcVar22 = (code *******)FUN_14001cc68(0x90,0x10);
          pppppppcVar22[1] = (code ******)&DAT_100000001;
          *pppppppcVar22 = (code ******)&PTR_FUN_14afe3000;
          local_e8 = (code ******)(pppppppcVar22 + 2);
          pppppppcVar22[2] = (code ******)&PTR_FUN_14afdfd90;
          pppppppcVar22[3] = (code ******)0x0;
          *(undefined2 *)(pppppppcVar22 + 4) = 0;
          *(undefined4 *)((longlong)pppppppcVar22 + 0x24) = 0xbf800000;
          pppppppcVar22[5] = (code ******)0x0;
          pppppppcVar22[6] = (code ******)0x0;
          *(undefined4 *)(pppppppcVar22 + 7) = 2;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x3c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x44) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x4c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x54) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x5c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 100) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x6c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x74) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x7c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x84) = 0;
          *(undefined4 *)((longlong)pppppppcVar22 + 0x8c) = 0;
          ppppppcStack_e0 = (code ******)pppppppcVar22;
          if (pppppppcVar22 != (code *******)0x0) {
            LOCK();
            *(int *)(pppppppcVar22 + 1) = *(int *)(pppppppcVar22 + 1) + 1;
            UNLOCK();
            LOCK();
            pppppppcVar4 = pppppppcVar22 + 1;
            *(int *)pppppppcVar4 = *(int *)pppppppcVar4 + -1;
            UNLOCK();
            if (*(int *)pppppppcVar4 == 0) {
              (*(code *)**pppppppcVar22)(pppppppcVar22);
              LOCK();
              piVar3 = (int *)((longlong)pppppppcVar22 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (*(code *)(*pppppppcVar22)[2])(pppppppcVar22);
              }
            }
          }
          local_e8[1] = (code *****)local_3e8;
          local_4b8 = (undefined8 ******)FUN_140fa3434;
          uStack_4b0 = (code *******)((ulonglong)uStack_4b0 & 0xffffffff00000000);
          FUN_14571e21e(local_e8 + 3,&local_138,local_640,&local_4b8);
          local_4b8 = &local_3e8;
          uStack_4b0 = &local_e8;
          FUN_145d2e1bc(pppppppuVar38,&local_138,&local_4b8);
          ppppppcVar30 = ppppppcStack_e0;
          if ((code *******)ppppppcStack_e0 != (code *******)0x0) {
            LOCK();
            pppppppcVar22 = (code *******)(ppppppcStack_e0 + 1);
            *(int *)pppppppcVar22 = *(int *)pppppppcVar22 + -1;
            UNLOCK();
            if (*(int *)pppppppcVar22 == 0) {
              (*(code *)**ppppppcStack_e0)(ppppppcStack_e0);
              LOCK();
              piVar3 = (int *)((longlong)ppppppcVar30 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (*(code *)(*ppppppcVar30)[2])(ppppppcVar30);
              }
            }
          }
LAB_140d3fcf5:
          FUN_1404fc398(local_3d8,(ulonglong)uStack_3d0 & 0xffffffff);
          uVar42 = uStack_578;
          lVar15 = (longlong)(int)uStack_578;
          uStack_578 = uStack_578 + 1;
          if (uStack_574 < uStack_578) {
            FUN_141843dd2(&local_580,uVar42);
          }
          uVar31 = (ulonglong)uStack_3d0;
          ppppppcVar30 = local_3d8;
          lVar15 = lVar15 * 0x20;
          *(undefined4 *)(local_580 + 8 + lVar15) = uStack_3e0;
          *(undefined8 *******)(local_580 + lVar15) = local_3e8;
          *(undefined8 *)(local_580 + 0x10 + lVar15) = 0;
          *(int *)(local_580 + 0x18 + lVar15) = (int)uStack_3d0;
          if ((int)uStack_3d0 == 0) {
            *(undefined4 *)(local_580 + lVar15 + 0x1c) = 0;
          }
          else {
            puVar36 = (undefined8 *)(lVar15 + local_580 + 0x10);
            FUN_140d3a6ce(puVar36,(ulonglong)uStack_3d0 & 0xffffffff,0);
            FUN_140d3a320(*puVar36,ppppppcVar30,uVar31 & 0xffffffff);
          }
          local_4a8 = (code ******)0x0;
          uStack_4a0 = (undefined8 *******)0x0;
          local_4b8 = (undefined8 ******)DAT_14cb541a0;
          uStack_4b0 = (code *******)CONCAT71(uStack_4b0._1_7_,*(undefined1 *)(puVar29 + 0xf));
          iVar35 = *(int *)(puVar29 + 0xb);
          if ((longlong)iVar35 != 0) {
            lVar15 = puVar29[10];
            lVar16 = 0;
            do {
              lVar33 = *(longlong *)(lVar15 + lVar16);
              if (lVar33 != 0) {
                uVar20 = FUN_14184246a();
                cVar13 = FUN_1448093f4(lVar33,uVar20);
                if ((cVar13 != '\0') && (lVar33 = *(longlong *)(lVar15 + lVar16), lVar33 != 0)) {
                  uVar20 = FUN_14184246a();
                  cVar13 = FUN_1448093f4(lVar33,uVar20);
                  if (cVar13 != '\0') {
                    pppppcVar21 = *(code ******)(lVar15 + lVar16);
                    plVar40 = *(longlong **)(lVar15 + 8 + lVar16);
                    if (plVar40 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
                      UNLOCK();
                    }
                    local_648 = pppppppuVar38;
                    if ((((pppppcVar21 != (code *****)0x0) &&
                         (*(char *)((longlong)pppppcVar21 + 0xc) == '\x01')) &&
                        (fVar7 = *(float *)(pppppcVar21 + 1), 0.0 <= fVar7)) && (fVar7 < fVar6)) {
                      pppppcVar23 = (code *****)FUN_14001cc68(0x48,0x10);
                      pppppcVar23[1] = (code ****)&DAT_100000001;
                      *pppppcVar23 = (code ****)&PTR_FUN_14afe2cc0;
                      pppppcVar23[2] = (code ****)0x0;
                      pppppcVar23[3] = (code ****)0x0;
                      pppppcVar23[4] = (code ****)0x0;
                      pppppcVar23[5] = (code ****)0x0;
                      pppppcVar23[6] = (code ****)0x0;
                      pppppcVar23[7] = (code ****)0x3dcccccd;
                      *(undefined2 *)(pppppcVar23 + 8) = 0;
                      if (pppppcVar23 != (code *****)0x0) {
                        LOCK();
                        *(int *)(pppppcVar23 + 1) = *(int *)(pppppcVar23 + 1) + 1;
                        UNLOCK();
                        LOCK();
                        pppppcVar2 = pppppcVar23 + 1;
                        *(int *)pppppcVar2 = *(int *)pppppcVar2 + -1;
                        UNLOCK();
                        if (*(int *)pppppcVar2 == 0) {
                          (*(code *)**pppppcVar23)(pppppcVar23);
                          LOCK();
                          piVar3 = (int *)((longlong)pppppcVar23 + 0xc);
                          *piVar3 = *piVar3 + -1;
                          UNLOCK();
                          if (*piVar3 == 0) {
                            (*(code *)(*pppppcVar23)[2])(pppppcVar23);
                          }
                        }
                      }
                      pppppcVar23[2] = pppppcVar21[2];
                      uVar5 = *(undefined4 *)((longlong)pppppcVar21 + 0x1c);
                      uVar10 = *(undefined4 *)(pppppcVar21 + 4);
                      uVar11 = *(undefined4 *)((longlong)pppppcVar21 + 0x24);
                      *(undefined4 *)(pppppcVar23 + 3) = *(undefined4 *)(pppppcVar21 + 3);
                      *(undefined4 *)((longlong)pppppcVar23 + 0x1c) = uVar5;
                      *(undefined4 *)(pppppcVar23 + 4) = uVar10;
                      *(undefined4 *)((longlong)pppppcVar23 + 0x24) = uVar11;
                      if (pppppcVar23 != pppppcVar21) {
                        iVar34 = *(int *)(pppppcVar21 + 6);
                        ppppppcVar30 = (code ******)pppppcVar21[5];
                        *(int *)(pppppcVar23 + 6) = iVar34;
                        if (iVar34 == 0 && *(int *)((longlong)pppppcVar23 + 0x34) == 0) {
                          *(undefined4 *)((longlong)pppppcVar23 + 0x34) = 0;
                        }
                        else {
                          local_638 = (code *****)ppppppcVar30;
                          FUN_1446dd670(pppppcVar23 + 5,iVar34);
                          if (iVar34 != 0) {
                            memcpy(pppppcVar23[5],local_638,(longlong)iVar34 * 2);
                          }
                        }
                      }
                      uVar31 = (ulonglong)uStack_4a0;
                      puVar29 = local_630;
                      *(float *)(pppppcVar23 + 7) = *(float *)(pppppcVar21 + 7) / fVar6;
                      if (pppppcVar23 != (code *****)0x0) {
                        LOCK();
                        *(int *)(pppppcVar23 + 1) = *(int *)(pppppcVar23 + 1) + 1;
                        UNLOCK();
                      }
                      lVar33 = (longlong)(int)uStack_4a0;
                      uVar42 = (int)uStack_4a0 + 1;
                      uStack_4a0 = (undefined8 *******)CONCAT44(uStack_4a0._4_4_,uVar42);
                      if (uStack_4a0._4_4_ < uVar42) {
                        FUN_1404fc222(&local_4a8,uVar31 & 0xffffffff);
                      }
                      *(float *)(local_4a8 + lVar33 * 3) = fVar7 / fVar6;
                      local_4a8[lVar33 * 3 + 1] = pppppcVar23 + 2;
                      local_4a8[lVar33 * 3 + 2] = pppppcVar23;
                      if (pppppcVar23 != (code *****)0x0) {
                        LOCK();
                        *(int *)(pppppcVar23 + 1) = *(int *)(pppppcVar23 + 1) + 1;
                        UNLOCK();
                        LOCK();
                        pppppcVar21 = pppppcVar23 + 1;
                        *(int *)pppppcVar21 = *(int *)pppppcVar21 + -1;
                        UNLOCK();
                        if (*(int *)pppppcVar21 == 0) {
                          (*(code *)**pppppcVar23)(pppppcVar23);
                          LOCK();
                          piVar3 = (int *)((longlong)pppppcVar23 + 0xc);
                          *piVar3 = *piVar3 + -1;
                          UNLOCK();
                          if (*piVar3 == 0) {
                            (*(code *)(*pppppcVar23)[2])(pppppcVar23);
                          }
                        }
                        LOCK();
                        pppppcVar21 = pppppcVar23 + 1;
                        *(int *)pppppcVar21 = *(int *)pppppcVar21 + -1;
                        UNLOCK();
                        if (*(int *)pppppcVar21 == 0) {
                          (*(code *)**pppppcVar23)(pppppcVar23);
                          LOCK();
                          piVar3 = (int *)((longlong)pppppcVar23 + 0xc);
                          *piVar3 = *piVar3 + -1;
                          UNLOCK();
                          if (*piVar3 == 0) {
                            (*(code *)(*pppppcVar23)[2])(pppppcVar23);
                          }
                        }
                      }
                    }
                    pppppppuVar38 = (undefined8 *******)local_648;
                    if (plVar40 != (longlong *)0x0) {
                      LOCK();
                      plVar17 = plVar40 + 1;
                      *(int *)plVar17 = (int)*plVar17 + -1;
                      UNLOCK();
                      if ((int)*plVar17 == 0) {
                        (**(code **)*plVar40)(plVar40);
                        LOCK();
                        piVar3 = (int *)((longlong)plVar40 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (**(code **)(*plVar40 + 0x10))(plVar40);
                        }
                      }
                    }
                  }
                }
              }
              lVar16 = lVar16 + 0x18;
            } while ((longlong)iVar35 * 0x18 != lVar16);
          }
          if (*(int *)(local_640 + 0x1b) != *(int *)((longlong)local_640 + 0x104)) {
            uVar42 = (uint)((ulonglong)local_4b8 >> 0x10);
            uVar14 = (uint)local_4b8 & 0xffff;
            pppppppuVar27 = (undefined8 *******)(local_640 + 0x21);
            if ((undefined8 *******)local_640[0x22] != (undefined8 *******)0x0) {
              pppppppuVar27 = (undefined8 *******)local_640[0x22];
            }
            iVar35 = *(int *)((longlong)pppppppuVar27 +
                             (ulonglong)
                             (*(int *)(local_640 + 0x23) - 1U &
                             (int)((ulonglong)local_4b8 >> 0x20) +
                             ((uint)local_4b8 << 0x10 | uVar14) + (uVar42 << 0x13 | uVar42 & 0xffff)
                             + (uVar14 >> 4)) * 4);
            if (iVar35 != -1) {
              do {
                if ((undefined8 ******)(*pppppppuVar38)[(longlong)iVar35 * 4] == local_4b8)
                goto LAB_140d40206;
                iVar35 = *(int *)(*pppppppuVar38 + (longlong)iVar35 * 4 + 3);
              } while (iVar35 != -1);
            }
          }
          pppppppcVar22 = (code *******)FUN_14001cc68(0x90,0x10);
          pppppppcVar22[1] = (code ******)&DAT_100000001;
          *pppppppcVar22 = (code ******)&PTR_FUN_14afe3100;
          pppppppcVar22[3] = (code ******)0x0;
          *(undefined4 *)((longlong)pppppppcVar22 + 0x24) = 0xbf800000;
          pppppppcVar22[5] = (code ******)0x0;
          pppppppcVar22[6] = (code ******)0x0;
          *(undefined4 *)(pppppppcVar22 + 7) = 2;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x3c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x44) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x4c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x54) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x5c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 100) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x6c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x74) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x7c) = 0;
          *(undefined8 *)((longlong)pppppppcVar22 + 0x84) = 0;
          *(undefined4 *)((longlong)pppppppcVar22 + 0x8c) = 0;
          pppppppcVar22[2] = (code ******)&PTR_FUN_14afe00a0;
          *(undefined2 *)(pppppppcVar22 + 4) = 0x101;
          if (pppppppcVar22 != (code *******)0x0) {
            LOCK();
            *(int *)(pppppppcVar22 + 1) = *(int *)(pppppppcVar22 + 1) + 1;
            UNLOCK();
            LOCK();
            pppppppcVar4 = pppppppcVar22 + 1;
            *(int *)pppppppcVar4 = *(int *)pppppppcVar4 + -1;
            UNLOCK();
            if (*(int *)pppppppcVar4 == 0) {
              (*(code *)**pppppppcVar22)(pppppppcVar22);
              LOCK();
              piVar3 = (int *)((longlong)pppppppcVar22 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (*(code *)(*pppppppcVar22)[2])(pppppppcVar22);
              }
            }
          }
          pppppppcVar22[3] = (code ******)local_4b8;
          local_e8 = (code ******)FUN_140fa2e68;
          ppppppcStack_e0 = (code ******)((ulonglong)ppppppcStack_e0 & 0xffffffff00000000);
          FUN_14571e21e(pppppppcVar22 + 5,&local_138,local_640);
          if (pppppppcVar22 != (code *******)0x0) {
            LOCK();
            *(int *)(pppppppcVar22 + 1) = *(int *)(pppppppcVar22 + 1) + 1;
            UNLOCK();
          }
          local_e8 = (code ******)&local_4b8;
          local_138 = (code ******)(pppppppcVar22 + 2);
          ppppppcStack_130 = (code ******)pppppppcVar22;
          ppppppcStack_e0 = (code ******)&local_138;
          FUN_1464adc3e(pppppppuVar38,&local_188);
          ppppppcVar30 = ppppppcStack_130;
          if ((code *******)ppppppcStack_130 != (code *******)0x0) {
            LOCK();
            pppppppcVar4 = (code *******)(ppppppcStack_130 + 1);
            *(int *)pppppppcVar4 = *(int *)pppppppcVar4 + -1;
            UNLOCK();
            if (*(int *)pppppppcVar4 == 0) {
              (*(code *)**ppppppcStack_130)(ppppppcStack_130);
              LOCK();
              piVar3 = (int *)((longlong)ppppppcVar30 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (*(code *)(*ppppppcVar30)[2])(ppppppcVar30);
              }
            }
          }
          if (pppppppcVar22 != (code *******)0x0) {
            LOCK();
            pppppppcVar4 = pppppppcVar22 + 1;
            *(int *)pppppppcVar4 = *(int *)pppppppcVar4 + -1;
            UNLOCK();
            if (*(int *)pppppppcVar4 == 0) {
              (*(code *)**pppppppcVar22)(pppppppcVar22);
              LOCK();
              piVar3 = (int *)((longlong)pppppppcVar22 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (*(code *)(*pppppppcVar22)[2])(pppppppcVar22);
              }
            }
          }
LAB_140d40206:
          FUN_1404fc398(local_4a8,(ulonglong)uStack_4a0 & 0xffffffff);
          uVar42 = uStack_578;
          lVar15 = (longlong)(int)uStack_578;
          uStack_578 = uStack_578 + 1;
          if (uStack_574 < uStack_578) {
            FUN_141843dd2(&local_580,uVar42);
          }
          uVar31 = (ulonglong)uStack_4a0;
          ppppppcVar30 = local_4a8;
          lVar15 = lVar15 * 0x20;
          *(int *)(local_580 + 8 + lVar15) = (int)uStack_4b0;
          *(undefined8 *******)(local_580 + lVar15) = local_4b8;
          *(undefined8 *)(local_580 + 0x10 + lVar15) = 0;
          *(int *)(local_580 + 0x18 + lVar15) = (int)uStack_4a0;
          if ((int)uStack_4a0 == 0) {
            *(undefined4 *)(local_580 + lVar15 + 0x1c) = 0;
          }
          else {
            puVar36 = (undefined8 *)(lVar15 + local_580 + 0x10);
            FUN_140d3a6ce(puVar36,(ulonglong)uStack_4a0 & 0xffffffff,0);
            FUN_140d3a320(*puVar36,ppppppcVar30,uVar31 & 0xffffffff);
          }
          if ((*(char *)(puVar29 + 0xf) == '\0') && (*(char *)(local_640 + 0x53) == '\x01')) {
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = (code ******)DAT_14cb541a8;
            ppppppcStack_e0 = (code ******)((ulonglong)ppppppcStack_e0 & 0xffffffffffffff00);
            local_138 = (code ******)CONCAT44(local_138._4_4_,fVar6);
            ppppppcStack_130 = (code ******)&local_e8;
            ppppppcStack_180 = (code ******)&local_138;
            local_188 = (undefined8 ******)FUN_143c30f3a;
            FUN_14184312a(puVar29);
            FUN_1404fc398(local_d8,uStack_d0 & 0xffffffff);
            local_568 = (uint)ppppppcStack_e0;
            local_570 = SUB81(local_e8,0);
            uStack_56f = (undefined7)((ulonglong)local_e8 >> 8);
            FUN_1464ad936(&local_560,&local_d8);
            FUN_140b62557(local_d8,uStack_d0 & 0xffffffff);
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
          }
          FUN_140b62557(local_4a8,(ulonglong)uStack_4a0 & 0xffffffff);
          if (local_4a8 != (code ******)0x0) {
            FUN_1400020a8();
          }
          FUN_140b62557(local_3d8,(ulonglong)uStack_3d0 & 0xffffffff);
          if (local_3d8 != (code ******)0x0) {
            FUN_1400020a8();
          }
          lVar15 = local_610[2];
          iVar35 = *(int *)(lVar15 + 0x10);
          *(uint *)(lVar15 + 0x10) = iVar35 + 1U;
          if (*(uint *)(lVar15 + 0x14) < iVar35 + 1U) {
            FUN_1464adb32((longlong *)(lVar15 + 8),iVar35);
          }
          FUN_140d3a0c8((longlong)iVar35 * 0x98 + *(longlong *)(lVar15 + 8),&local_5e8);
          FUN_140b622c6(&local_5e8);
          if ((local_90 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar35);
LAB_140d3cf38:
  if ((((*(int *)(lVar16 + 8) != (int)plVar40[1]) ||
       (*(int *)(lVar16 + 0xc) != *(int *)((longlong)plVar40 + 0xc))) ||
      (*(int *)(lVar16 + 0x10) != (int)plVar40[2])) ||
     (*(int *)(lVar16 + 0x14) != *(int *)((longlong)plVar40 + 0x14))) goto LAB_140d3cf50;
  if (lVar16 != 0) {
    local_4b8 = *(undefined8 *******)(lVar15 + 0x18);
    local_618 = (undefined8 ******)(plVar40 + 1);
    FUN_1400021e4(&local_4b8,&local_1d8);
    local_3e8 = (undefined8 ******)CONCAT44(local_3e8._4_4_,3);
    local_3d8 = (code ******)local_1d8;
    uStack_3d0 = (undefined8 *******)uStack_1d0;
    local_1d8 = (code *****)0x0;
    uStack_1d0 = 0;
    FUN_1400021e4(&local_4f8,&local_4c8);
    local_3c8 = (code *****)CONCAT44(local_3c8._4_4_,3);
    local_3b8 = (undefined4)local_4c8;
    uStack_3b4 = local_4c8._4_4_;
    lStack_3b0 = (longlong)ppppppuStack_4c0;
    local_4c8 = (code *)0x0;
    ppppppuStack_4c0 = (undefined8 ******)0x0;
    local_188 = &local_3e8;
    ppppppcStack_180 = (code ******)&local_3a8;
    FUN_1407adb6e(&local_e8,&local_188);
    FUN_140230a63();
    FUN_140230ad0(&DAT_14c8731a8,&local_4b8,L"MatParam_{0}_Scalar_{1}",&local_e8);
    ppppppcVar30 = (code ******)&DAT_149dfb77a;
    if ((int)uStack_4b0 != 0) {
      ppppppcVar30 = (code ******)local_4b8;
    }
    FUN_1446f470e(&local_508,ppppppcVar30,1);
    if ((code ******)local_4b8 != (code ******)0x0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_e8,(ulonglong)ppppppcStack_e0 & 0xffffffff);
    lVar15 = local_620;
    if (local_e8 != (code ******)0x0) {
      FUN_1400020a8();
    }
    lVar16 = 0x40;
    do {
      if (*(longlong *)((longlong)&local_3f8 + lVar16) != 0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + -0x20;
    } while (lVar16 != 0);
    lStack_3b0 = 0;
    local_3a8 = 0;
    uStack_3d0 = (undefined8 *******)0x0;
    local_3c8 = (code *****)0x0;
    local_3a4 = 0x80;
    uStack_3a0 = 0xffffffff;
    local_39c = 0;
    local_390 = 0;
    local_388 = 0;
    local_380 = 0;
    uStack_378 = 0;
    local_370 = 0x7f7fffff;
    local_36c[0] = 0x404;
    local_3d8 = (code ******)&DAT_14a176f00;
    local_368 = (void *)0x0;
    auStack_360[0] = 0;
    local_3e8 = (undefined8 ******)local_508;
    uStack_3e0 = CONCAT31(uStack_3e0._1_3_,*(undefined1 *)(param_2 + 0xf));
    uStack_4b0 = (code *******)
                 CONCAT44(uStack_4b0._4_4_,*(undefined4 *)((longlong)local_648 + 0x60));
    local_4a8 = (code ******)&local_3e8;
    uStack_4d0 = &local_4b8;
    local_4d8 = FUN_143c30b30;
    local_4b8 = pppppppuVar38;
    FUN_14031521c(param_2,&local_4d8);
    uVar31 = uStack_5b8;
    ppppppcVar30 = (code ******)local_638;
    if ((longlong)*(int *)(param_2 + 5) == 0) {
LAB_140d3d1eb:
      plVar17 = plVar40;
      if ((int)auStack_360[0] != 0) goto LAB_140d3d2d1;
    }
    else {
      plVar17 = (longlong *)param_2[4];
      lVar16 = (longlong)*(int *)(param_2 + 5) * 0x1c;
      while ((undefined8 *******)*plVar17 != pppppppuVar38) {
        plVar17 = (longlong *)((longlong)plVar17 + 0x1c);
        lVar16 = lVar16 + -0x1c;
        if (lVar16 == 0) goto LAB_140d3d1eb;
      }
LAB_140d3d2d1:
      local_370 = (undefined4)plVar17[3];
      lVar16 = (longlong)(int)uStack_5b8;
      uVar42 = (int)uStack_5b8 + 1;
      uStack_5b8 = CONCAT44(uStack_5b8._4_4_,uVar42);
      if (uStack_5b8._4_4_ < uVar42) {
        FUN_1418437ce(&local_5c0,uVar31 & 0xffffffff);
      }
      pvVar9 = local_368;
      lVar16 = lVar16 * 0x90;
      *(undefined4 *)(local_5c0 + 8 + lVar16) = uStack_3e0;
      *(undefined8 *******)(local_5c0 + lVar16) = local_3e8;
      *(undefined8 *)(local_5c0 + 0x38 + lVar16) = 0;
      *(undefined4 *)(local_5c0 + 0x40 + lVar16) = 0;
      puVar29 = (undefined8 *)(local_5c0 + 0x18 + lVar16);
      *puVar29 = 0;
      puVar29[1] = 0;
      *(undefined8 *)(local_5c0 + 0x44 + lVar16) = 0xffffffff00000080;
      *(undefined4 *)(local_5c0 + 0x4c + lVar16) = 0;
      *(undefined8 *)(local_5c0 + 0x58 + lVar16) = 0;
      *(undefined4 *)(local_5c0 + 0x60 + lVar16) = 0;
      puVar29 = (undefined8 *)(local_5c0 + 0x68 + lVar16);
      *puVar29 = 0;
      puVar29[1] = 0;
      *(undefined ***)(local_5c0 + 0x10 + lVar16) = &PTR_FUN_14a176fc0;
      *(undefined4 *)(local_5c0 + 0x78 + lVar16) = local_370;
      *(undefined2 *)(local_5c0 + 0x7c + lVar16) = local_36c[0];
      *(undefined **)(local_5c0 + 0x10 + lVar16) = &DAT_14a176f00;
      *(undefined8 *)(local_5c0 + 0x80 + lVar16) = 0;
      lVar33 = (longlong)(int)auStack_360[0];
      *(int *)(local_5c0 + 0x88 + lVar16) = (int)auStack_360[0];
      if (lVar33 == 0) {
        *(undefined4 *)(local_5c0 + lVar16 + 0x8c) = 0;
      }
      else {
        puVar29 = (undefined8 *)(local_5c0 + lVar16 + 0x80);
        FUN_140501c24(puVar29,auStack_360[0] & 0xffffffff,0);
        ppppppcVar30 = (code ******)local_638;
        memcpy((void *)*puVar29,pvVar9,lVar33 * 0x1c);
      }
      if (*(int *)(local_640 + 7) != *(int *)((longlong)local_640 + 100)) {
        uVar42 = (uint)((ulonglong)local_508 >> 0x10);
        uVar14 = (uint)local_508 & 0xffff;
        pppppppuVar38 = (undefined8 *******)local_640[0xe];
        if ((undefined8 *******)local_640[0xe] == (undefined8 *******)0x0) {
          pppppppuVar38 = (undefined8 *******)local_608;
        }
        iVar35 = *(int *)((longlong)pppppppuVar38 +
                         (ulonglong)
                         (*(int *)(local_640 + 0xf) - 1U &
                         (int)((ulonglong)local_508 >> 0x20) + ((uint)local_508 << 0x10 | uVar14) +
                         (uVar42 << 0x13 | uVar42 & 0xffff) + (uVar14 >> 4)) * 4);
        if (iVar35 != -1) {
          do {
            if ((code *****)(*local_628)[(longlong)iVar35 * 4] == local_508) goto LAB_140d3d201;
            iVar35 = *(int *)(*local_628 + (longlong)iVar35 * 4 + 3);
          } while (iVar35 != -1);
        }
      }
      plVar18 = (longlong *)FUN_14001cc68(0x180);
      plVar18[1] = (longlong)&DAT_100000001;
      *plVar18 = (longlong)&PTR_FUN_14afe2ec0;
      local_600 = (undefined8 ******)(plVar18 + 2);
      plVar18[3] = 0;
      plVar18[4] = 0;
      plVar18[5] = 0;
      plVar18[6] = 0;
      plVar18[2] = (longlong)&PTR_FUN_14afdf6f0;
      plVar17 = plVar18 + 7;
      plVar18[7] = 0;
      plVar18[8] = 0;
      plVar18[9] = 2;
      *(undefined1 *)(plVar18 + 10) = 1;
      *(undefined8 *)((longlong)plVar18 + 0x54) = 0;
      lVar16 = 0xe0;
      do {
        *(undefined8 *)((longlong)plVar18 + lVar16 + -0x80) = 0;
        *(undefined1 *)((longlong)plVar18 + lVar16 + -0x78) = 0;
        *(undefined8 *)((longlong)plVar18 + lVar16 + -0x48) = 0;
        *(undefined4 *)((longlong)plVar18 + lVar16 + -0x40) = 0;
        puVar29 = (undefined8 *)((longlong)plVar18 + lVar16 + -0x68);
        *puVar29 = 0;
        puVar29[1] = 0;
        *(undefined8 *)((longlong)plVar18 + lVar16 + -0x3c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar18 + lVar16 + -0x34) = 0;
        *(undefined8 *)((longlong)plVar18 + lVar16 + -0x28) = 0;
        *(undefined4 *)((longlong)plVar18 + lVar16 + -0x20) = 0;
        puVar29 = (undefined8 *)((longlong)plVar18 + lVar16 + -0x18);
        *puVar29 = 0;
        puVar29[1] = 0;
        *(undefined4 *)((longlong)plVar18 + lVar16 + -8) = 0x7f7fffff;
        *(undefined2 *)((longlong)plVar18 + lVar16 + -4) = 0x404;
        *(undefined **)((longlong)plVar18 + lVar16 + -0x70) = &DAT_14a176f00;
        *(undefined8 *)((longlong)plVar18 + lVar16) = 0;
        ((undefined8 *)((longlong)plVar18 + lVar16))[1] = 0;
        lVar16 = lVar16 + 0x90;
      } while (lVar16 != 0x200);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar18 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar3 = (int *)((longlong)plVar18 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      ppppppuVar39 = local_618;
      uVar42 = *(uint *)(local_5f8 + 0xc);
      *(uint *)(plVar18 + 6) = uVar42;
      if ((int)uVar42 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar35 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar35 = DAT_14c964868 + 1;
        UNLOCK();
        iVar34 = DAT_14c964868 + 1;
        bVar44 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar35;
        if (bVar44) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar34);
        }
        LOCK();
        iVar35 = *(int *)(lVar16 + 0x10);
        bVar44 = iVar35 == 0;
        if (bVar44) {
          *(int *)(lVar16 + 0x10) = iVar34;
          iVar35 = 0;
        }
        UNLOCK();
        if (bVar44) {
          iVar35 = iVar34;
        }
      }
      *(int *)((longlong)plVar18 + 0x34) = iVar35;
      plVar18[3] = (longlong)local_4f8;
      ppppppuVar8 = (undefined8 ******)ppppppuVar39[1];
      plVar18[4] = (longlong)*ppppppuVar39;
      plVar18[5] = (longlong)ppppppuVar8;
      lVar16 = plVar40[3];
      *(int *)(plVar18 + 0xb) = (int)lVar16;
      *(int *)(plVar18 + 0x1b) = (int)lVar16;
      *(int *)(plVar18 + 0x2d) = (int)plVar40[3];
      local_e8 = (code ******)0x0;
      ppppppcStack_e0 = (code ******)((ulonglong)ppppppcStack_e0 & 0xffffffff00000000);
      FUN_1446efa72(&local_e8,0,4,0x10);
      param_2 = local_630;
      ppppppcStack_e0 = (code ******)CONCAT44(ppppppcStack_e0._4_4_,4);
      ppppppuVar39 = (undefined8 ******)local_640[3];
      if (ppppppuVar39 == (undefined8 ******)0x0) {
LAB_140d3d9ab:
        *local_e8 = (code *****)&PTR_LAB_14afe2f50;
        LOCK();
        UNLOCK();
        pppppcVar21 = (code *****)(DAT_14c758608 + 1);
        lVar15 = DAT_14c758608 + 1;
        if (pppppcVar21 == (code *****)0x0) {
          LOCK();
          UNLOCK();
          pppppcVar21 = (code *****)(DAT_14c758608 + 2);
          lVar15 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar15;
        local_e8[2] = pppppcVar21;
        *local_e8 = (code *****)&PTR_FUN_14afe2ee0;
        local_e8[3] = (code *****)0x0;
        local_e8[4] = (code *****)0x0;
        local_e8[5] = (code *****)FUN_1449cf926;
        *(undefined4 *)(local_e8 + 6) = 0;
        lVar15 = local_620;
      }
      else {
        iVar35 = *(int *)(ppppppuVar39 + 1);
        do {
          if (iVar35 == 0) goto LAB_140d3d9ab;
          LOCK();
          iVar34 = *(int *)(ppppppuVar39 + 1);
          bVar44 = iVar35 == iVar34;
          if (bVar44) {
            *(int *)(ppppppuVar39 + 1) = iVar35 + 1;
            iVar34 = iVar35;
          }
          iVar35 = iVar34;
          UNLOCK();
        } while (!bVar44);
        ppppppuVar8 = (undefined8 ******)local_640[2];
        LOCK();
        *(int *)(ppppppuVar39 + 1) = *(int *)(ppppppuVar39 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)(ppppppuVar39 + 1) = *(int *)(ppppppuVar39 + 1) + 1;
        UNLOCK();
        *local_e8 = (code *****)&PTR_LAB_14afe2f50;
        LOCK();
        UNLOCK();
        pppppcVar21 = (code *****)(DAT_14c758608 + 1);
        lVar16 = DAT_14c758608 + 1;
        if (pppppcVar21 == (code *****)0x0) {
          LOCK();
          UNLOCK();
          pppppcVar21 = (code *****)(DAT_14c758608 + 2);
          lVar16 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar16;
        local_e8[2] = pppppcVar21;
        *local_e8 = (code *****)&PTR_FUN_14afe2ee0;
        local_e8[3] = (code *****)ppppppuVar8;
        local_e8[4] = (code *****)ppppppuVar39;
        LOCK();
        *(int *)((longlong)ppppppuVar39 + 0xc) = *(int *)((longlong)ppppppuVar39 + 0xc) + 1;
        UNLOCK();
        local_e8[5] = (code *****)FUN_1449cf926;
        *(undefined4 *)(local_e8 + 6) = 0;
        LOCK();
        ppppppuVar8 = ppppppuVar39 + 1;
        *(int *)ppppppuVar8 = *(int *)ppppppuVar8 + -1;
        UNLOCK();
        if (*(int *)ppppppuVar8 == 0) {
          (*(code *)**ppppppuVar39)(ppppppuVar39);
          LOCK();
          piVar3 = (int *)((longlong)ppppppuVar39 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*ppppppuVar39)[2])(ppppppuVar39);
          }
        }
        LOCK();
        ppppppuVar8 = ppppppuVar39 + 1;
        *(int *)ppppppuVar8 = *(int *)ppppppuVar8 + -1;
        UNLOCK();
        if (*(int *)ppppppuVar8 == 0) {
          (*(code *)**ppppppuVar39)(ppppppuVar39);
          LOCK();
          piVar3 = (int *)((longlong)ppppppuVar39 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*ppppppuVar39)[2])(ppppppuVar39);
          }
        }
        LOCK();
        ppppppuVar8 = ppppppuVar39 + 1;
        *(int *)ppppppuVar8 = *(int *)ppppppuVar8 + -1;
        UNLOCK();
        if (*(int *)ppppppuVar8 == 0) {
          (*(code *)**ppppppuVar39)(ppppppuVar39);
          LOCK();
          piVar3 = (int *)((longlong)ppppppuVar39 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*ppppppuVar39)[2])(ppppppuVar39);
          }
        }
      }
      if (((uint)ppppppcStack_e0 == 0) || (local_e8 == (code ******)0x0)) {
LAB_140d3dab7:
        lVar15 = local_620;
        param_2 = local_630;
        if ((uint)ppppppcStack_e0 == 0) goto LAB_140d3d867;
        if (local_e8 != (code ******)0x0) {
          (*(code *)**local_e8)(local_e8,0);
          FUN_1446efa72(&local_e8,0,0,0x10);
          goto LAB_140d3d854;
        }
      }
      else {
        cVar13 = (*(code *)(*local_e8)[6])();
        if (cVar13 == '\0') {
          goto LAB_140d3dab7;
        }
        if (*(int *)((longlong)plVar18 + 0x4c) < 1) {
          iVar35 = (int)plVar18[8];
          iVar34 = (int)plVar18[9] + -1;
          *(int *)(plVar18 + 9) = iVar34;
          if (iVar34 <= iVar35) {
            iVar34 = iVar35;
            if (0 < iVar35) {
              iVar24 = 0;
              do {
                if (((*(int *)(*plVar17 + 8 + (longlong)iVar24 * 0x10) == 0) ||
                    (plVar40 = *(longlong **)(*plVar17 + (longlong)iVar24 * 0x10),
                    plVar40 == (longlong *)0x0)) ||
                   (cVar13 = (**(code **)(*plVar40 + 0x28))(), cVar13 != '\0')) {
                  FUN_14005b288(plVar17,iVar24);
                  FUN_14005b248(plVar17);
                }
                else {
                  iVar24 = iVar24 + 1;
                }
                iVar34 = (int)plVar18[8];
              } while (iVar24 < iVar34);
            }
            iVar24 = iVar34 * 2;
            if (iVar24 < 3) {
              iVar24 = 2;
            }
            *(int *)(plVar18 + 9) = iVar24;
            if ((iVar24 < iVar35) && (*(int *)((longlong)plVar18 + 0x44) != iVar34)) {
              FUN_14045812c(plVar17);
            }
          }
        }
        if (((uint)ppppppcStack_e0 != 0) && (local_e8 != (code ******)0x0)) {
          (*(code *)(*local_e8)[7])();
        }
        lVar16 = plVar18[8];
        uVar42 = (int)lVar16 + 1;
        *(uint *)(plVar18 + 8) = uVar42;
        if (*(uint *)((longlong)plVar18 + 0x44) < uVar42) {
          FUN_1447a71f6(plVar17);
        }
        lVar33 = *plVar17;
        lVar16 = (longlong)(int)lVar16 * 0x10;
        *(undefined8 *)(lVar33 + lVar16) = 0;
        *(undefined4 *)(lVar33 + 8 + lVar16) = 0;
        *(code *******)(lVar33 + lVar16) = local_e8;
        local_e8 = (code ******)0x0;
        *(uint *)(lVar33 + 8 + lVar16) = (uint)ppppppcStack_e0;
LAB_140d3d854:
        ppppppcStack_e0 = (code ******)((ulonglong)ppppppcStack_e0 & 0xffffffff00000000);
LAB_140d3d867:
        if (local_e8 != (code ******)0x0) {
          FUN_1400020a8();
        }
      }
      local_4e8 = local_600;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      local_e8 = &local_508;
      ppppppcStack_e0 = (code ******)&local_4e8;
      uStack_4e0 = plVar18;
      FUN_1415ab0da(local_628,&local_530,&local_e8);
      plVar40 = uStack_4e0;
      if (uStack_4e0 != (longlong *)0x0) {
        LOCK();
        plVar17 = uStack_4e0 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*uStack_4e0)(uStack_4e0);
          LOCK();
          piVar3 = (int *)((longlong)plVar40 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar40 + 0x10))(plVar40);
          }
        }
      }
      ppppppcVar30 = (code ******)local_638;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar40 = plVar18 + 1;
        *(int *)plVar40 = (int)*plVar40 + -1;
        UNLOCK();
        if ((int)*plVar40 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar3 = (int *)((longlong)plVar18 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
    }
LAB_140d3d201:
    local_3d8 = (code ******)&DAT_14a176f00;
    if (local_368 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_3d8 = (code ******)&PTR_FUN_14a177080;
    if (local_380 != 0) {
      FUN_1400020a8();
    }
    local_388 = 0;
    if (local_390 != 0) {
      FUN_1400020a8();
    }
    uVar31 = (ulonglong)local_3c8 >> 0x20;
    local_3c8 = (code *****)((ulonglong)local_3c8 & 0xffffffff00000000);
    if ((int)uVar31 != 0) {
      FUN_14472eb64(&uStack_3d0,0);
    }
    uStack_3a0 = 0xffffffff;
    local_39c = 0;
    local_3a8 = 0;
    if (0x80 < local_3a4) {
      local_3a4 = 0x80;
      FUN_1446efbd8(local_3c0,0);
    }
    if (lStack_3b0 != 0) {
      FUN_1400020a8();
    }
    ppppppuVar39 = local_648;
    if (uStack_3d0 != (undefined8 *******)0x0) {
      FUN_1400020a8();
      ppppppuVar39 = local_648;
    }
  }
  goto LAB_140d3d2ba;
LAB_140d3cf50:
  lVar16 = lVar16 + 0x38;
  lVar33 = lVar33 + -0x38;
  if (lVar33 == 0) goto LAB_140d3d2ba;
  goto LAB_140d3cf38;
LAB_140d3dc3b:
  if ((((*(int *)(lVar16 + 8) != (int)plVar40[1]) ||
       (*(int *)(lVar16 + 0xc) != *(int *)((longlong)plVar40 + 0xc))) ||
      (*(int *)(lVar16 + 0x10) != (int)plVar40[2])) ||
     (*(int *)(lVar16 + 0x14) != *(int *)((longlong)plVar40 + 0x14))) goto LAB_140d3dc53;
  if (lVar16 != 0) {
    local_4b8 = *(undefined8 *******)(lVar15 + 0x18);
    FUN_1400021e4(&local_4b8,&local_508);
    local_3e8 = (undefined8 ******)CONCAT44(local_3e8._4_4_,3);
    local_3d8 = (code ******)local_508;
    uStack_3d0 = (undefined8 *******)uStack_500;
    local_508 = (code *****)0x0;
    uStack_500 = 0;
    FUN_1400021e4(&local_518,&local_530);
    local_3c8 = (code *****)CONCAT44(local_3c8._4_4_,3);
    local_3b8 = (undefined4)local_530;
    uStack_3b4 = local_530._4_4_;
    lStack_3b0 = lStack_528;
    local_530 = 0;
    lStack_528 = 0;
    local_4f8 = &local_3e8;
    uStack_4f0 = &local_3a8;
    FUN_1407adb6e(&local_e8,&local_4f8);
    FUN_140230a63();
    FUN_140230ad0(&DAT_14c8731a8,&local_4b8,L"MatParam_{0}_Vector_{1}",&local_e8);
    ppppppcVar30 = (code ******)&DAT_149dfb77a;
    if ((int)uStack_4b0 != 0) {
      ppppppcVar30 = (code ******)local_4b8;
    }
    FUN_1446f470e(&local_520,ppppppcVar30,1);
    if ((code ******)local_4b8 != (code ******)0x0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_e8,(ulonglong)ppppppcStack_e0 & 0xffffffff);
    if (local_e8 != (code ******)0x0) {
      FUN_1400020a8();
    }
    lVar15 = local_620;
    param_2 = local_630;
    lVar16 = 0x40;
    do {
      if (*(longlong *)((longlong)&local_3f8 + lVar16) != 0) {
        FUN_1400020a8();
      }
      pppppppuVar38 = (undefined8 *******)local_618;
      lVar16 = lVar16 + -0x20;
    } while (lVar16 != 0);
    lVar16 = 0x80;
    do {
      *(undefined8 *)((longlong)auStack_458 + lVar16 + 0x28) = 0;
      *(undefined4 *)((longlong)&uStack_428 + lVar16) = 0;
      *(undefined8 *)((longlong)auStack_458 + lVar16 + 8) = 0;
      *(undefined8 *)((longlong)auStack_458 + lVar16 + 0x10) = 0;
      *(undefined8 *)((longlong)&uStack_424 + lVar16) = 0xffffffff00000080;
      *(undefined4 *)((longlong)auStack_41c + lVar16) = 0;
      *(undefined8 *)((longlong)&uStack_410 + lVar16) = 0;
      *(undefined4 *)((longlong)auStack_408 + lVar16) = 0;
      *(undefined8 *)((longlong)&local_400 + lVar16) = 0;
      *(undefined8 *)((longlong)&local_3f8 + lVar16) = 0;
      *(undefined4 *)((longlong)&local_3f0 + lVar16) = 0x7f7fffff;
      *(undefined2 *)((longlong)&local_3ec + lVar16) = 0x404;
      *(undefined **)((longlong)auStack_458 + lVar16) = &DAT_14a176f00;
      *(undefined8 *)((longlong)&local_3e8 + lVar16) = 0;
      *(undefined8 *)((longlong)&uStack_3e0 + lVar16) = 0;
      lVar16 = lVar16 + 0x80;
    } while (lVar16 != 0x280);
    local_3e8 = (undefined8 ******)local_520;
    uStack_3e0 = CONCAT31(uStack_3e0._1_3_,*(undefined1 *)(param_2 + 0xf));
    uStack_4b0 = (code *******)
                 CONCAT44(uStack_4b0._4_4_,*(undefined4 *)((longlong)local_648 + 0x60));
    local_4a8 = (code ******)&local_3e8;
    local_538 = &local_4b8;
    local_540 = FUN_143c30cec;
    local_4b8 = pppppppuVar19;
    FUN_14031521c(param_2,&local_540);
    uVar31 = uStack_598;
    if ((longlong)*(int *)(param_2 + 7) == 0) {
LAB_140d3def4:
      plVar17 = plVar40;
      if ((int)auStack_360[0] != 0) goto LAB_140d3df18;
    }
    else {
      plVar17 = (longlong *)param_2[6];
      lVar16 = (longlong)*(int *)(param_2 + 7) * 0x28;
      while ((undefined8 *******)*plVar17 != pppppppuVar19) {
        plVar17 = plVar17 + 5;
        lVar16 = lVar16 + -0x28;
        if (lVar16 == 0) goto LAB_140d3def4;
      }
LAB_140d3df18:
      local_370 = (int)plVar17[3];
      local_2f0 = *(undefined4 *)((longlong)plVar17 + 0x1c);
      local_270 = (int)plVar17[4];
      local_1f0 = *(undefined4 *)((longlong)plVar17 + 0x24);
      lVar16 = (longlong)(int)uStack_598;
      uVar42 = (int)uStack_598 + 1;
      uStack_598 = CONCAT44(uStack_598._4_4_,uVar42);
      if (uStack_598._4_4_ < uVar42) {
        FUN_141843900(&local_5a0,uVar31 & 0xffffffff);
      }
      puVar29 = (undefined8 *)(local_5a0 + lVar16 * 0x210);
      *(undefined4 *)(puVar29 + 1) = uStack_3e0;
      *puVar29 = local_3e8;
      local_628 = (undefined8 ******)(local_5a0 + lVar16 * 0x210 + 0x80);
      lVar16 = 0;
      do {
        *(undefined8 *)((longlong)puVar29 + lVar16 + 0x38) = 0;
        *(undefined4 *)((longlong)puVar29 + lVar16 + 0x40) = 0;
        puVar36 = (undefined8 *)((longlong)puVar29 + lVar16 + 0x18);
        *puVar36 = 0;
        puVar36[1] = 0;
        *(undefined8 *)((longlong)puVar29 + lVar16 + 0x44) = 0xffffffff00000080;
        *(undefined4 *)((longlong)puVar29 + lVar16 + 0x4c) = 0;
        *(undefined8 *)((longlong)puVar29 + lVar16 + 0x58) = 0;
        *(undefined4 *)((longlong)puVar29 + lVar16 + 0x60) = 0;
        puVar36 = (undefined8 *)((longlong)puVar29 + lVar16 + 0x68);
        *puVar36 = 0;
        puVar36[1] = 0;
        *(undefined ***)((longlong)puVar29 + lVar16 + 0x10) = &PTR_FUN_14a176fc0;
        *(undefined4 *)((longlong)puVar29 + lVar16 + 0x78) =
             *(undefined4 *)((longlong)local_36c + lVar16 + -4);
        *(undefined2 *)((longlong)puVar29 + lVar16 + 0x7c) =
             *(undefined2 *)((longlong)local_36c + lVar16);
        *(undefined **)((longlong)puVar29 + lVar16 + 0x10) = &DAT_14a176f00;
        *(undefined8 *)((longlong)puVar29 + lVar16 + 0x80) = 0;
        iVar35 = *(int *)((longlong)auStack_360 + lVar16);
        pvVar9 = *(void **)((longlong)auStack_360 + lVar16 + -8);
        *(int *)((longlong)puVar29 + lVar16 + 0x88) = iVar35;
        if ((longlong)iVar35 == 0) {
          *(undefined4 *)((longlong)puVar29 + lVar16 + 0x8c) = 0;
        }
        else {
          FUN_140501c24((longlong)local_628 + lVar16,iVar35,0);
          memcpy(*(void **)((longlong)puVar29 + lVar16 + 0x80),pvVar9,(longlong)iVar35 * 0x1c);
        }
        param_2 = local_630;
        lVar16 = lVar16 + 0x80;
      } while (lVar16 != 0x200);
      if (*(int *)(local_640 + 7) != *(int *)((longlong)local_640 + 100)) {
        uVar42 = (uint)((ulonglong)local_520 >> 0x10);
        uVar14 = (uint)local_520 & 0xffff;
        pppppppuVar38 = (undefined8 *******)local_640[0xe];
        if ((undefined8 *******)local_640[0xe] == (undefined8 *******)0x0) {
          pppppppuVar38 = (undefined8 *******)local_600;
        }
        iVar35 = *(int *)((longlong)pppppppuVar38 +
                         (ulonglong)
                         (*(int *)(local_640 + 0xf) - 1U &
                         (int)((ulonglong)local_520 >> 0x20) + ((uint)local_520 << 0x10 | uVar14) +
                         (uVar42 << 0x13 | uVar42 & 0xffff) + (uVar14 >> 4)) * 4);
        if (iVar35 != -1) {
          do {
            pppppppuVar38 = (undefined8 *******)local_618;
            if ((code *****)(*local_608)[(longlong)iVar35 * 4] == local_520) goto LAB_140d3df01;
            iVar35 = *(int *)(*local_608 + (longlong)iVar35 * 4 + 3);
          } while (iVar35 != -1);
        }
      }
      pppppppuVar38 = (undefined8 *******)FUN_14001cc68(0x480,0x10);
      pppppppuVar38[1] = (undefined8 ******)&DAT_100000001;
      *pppppppuVar38 = (undefined8 ******)&PTR_FUN_14afe2fc0;
      local_5f0 = pppppppuVar38 + 2;
      FUN_143c2683e();
      if (pppppppuVar38 != (undefined8 *******)0x0) {
        LOCK();
        *(int *)(pppppppuVar38 + 1) = *(int *)(pppppppuVar38 + 1) + 1;
        UNLOCK();
        LOCK();
        pppppppuVar19 = pppppppuVar38 + 1;
        *(int *)pppppppuVar19 = *(int *)pppppppuVar19 + -1;
        UNLOCK();
        if (*(int *)pppppppuVar19 == 0) {
          (*(code *)**pppppppuVar38)();
          LOCK();
          piVar3 = (int *)((longlong)pppppppuVar38 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*pppppppuVar38)[2])();
          }
        }
      }
      uVar42 = *(uint *)(local_5f8 + 0xc);
      *(uint *)(pppppppuVar38 + 6) = uVar42;
      if ((int)uVar42 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar35 = *(int *)(lVar16 + 0x10);
      local_628 = pppppppuVar38;
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar35 = DAT_14c964868 + 1;
        UNLOCK();
        iVar34 = DAT_14c964868 + 1;
        bVar44 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar35;
        if (bVar44) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar34);
        }
        LOCK();
        iVar35 = *(int *)(lVar16 + 0x10);
        bVar44 = iVar35 == 0;
        if (bVar44) {
          *(int *)(lVar16 + 0x10) = iVar34;
          iVar35 = 0;
        }
        UNLOCK();
        if (bVar44) {
          iVar35 = iVar34;
        }
      }
      pppppppuVar38 = (undefined8 *******)local_618;
      *(int *)((longlong)local_628 + 0x34) = iVar35;
      local_628[3] = local_518;
      ppppppuVar39 = (undefined8 ******)local_638[1];
      local_628[4] = (undefined8 *****)*local_638;
      local_628[5] = ppppppuVar39;
      lVar16 = plVar40[3];
      local_3f8._4_4_ = *(undefined4 *)((longlong)plVar40 + 0x1c);
      lVar33 = plVar40[4];
      local_3ec = *(undefined4 *)((longlong)plVar40 + 0x24);
      *(int *)((longlong)local_628 + 0x4c) = (int)lVar16;
      *(undefined4 *)(local_628 + 10) = local_3f8._4_4_;
      *(int *)((longlong)local_628 + 0x54) = (int)lVar33;
      *(undefined4 *)(local_628 + 0xb) = local_3ec;
      local_3f8._0_4_ = (int)lVar16;
      local_3f0 = (int)lVar33;
      pppppppuVar19 = (undefined8 *******)(local_628 + 0x1b);
      lVar16 = 0;
      do {
        uVar5 = *(undefined4 *)((longlong)&local_3f8 + lVar16 * 4);
        *(undefined4 *)pppppppuVar19 = uVar5;
        *(undefined4 *)(pppppppuVar19 + 0x42) = uVar5;
        lVar16 = lVar16 + 1;
        pppppppuVar19 = pppppppuVar19 + 0x10;
      } while (lVar16 != 4);
      local_550 = local_5f0;
      if ((undefined8 *******)local_628 != (undefined8 *******)0x0) {
        LOCK();
        *(int *)(local_628 + 1) = *(int *)(local_628 + 1) + 1;
        UNLOCK();
      }
      local_e8 = &local_520;
      ppppppcStack_e0 = (code ******)&local_550;
      local_548 = local_628;
      FUN_1415ab0da(local_608,local_50c,&local_e8);
      ppppppuVar39 = local_548;
      if ((undefined8 *******)local_548 != (undefined8 *******)0x0) {
        LOCK();
        pppppppuVar19 = (undefined8 *******)(local_548 + 1);
        *(int *)pppppppuVar19 = *(int *)pppppppuVar19 + -1;
        UNLOCK();
        if (*(int *)pppppppuVar19 == 0) {
          (*(code *)**local_548)(local_548);
          LOCK();
          piVar3 = (int *)((longlong)ppppppuVar39 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*ppppppuVar39)[2])(ppppppuVar39);
          }
        }
      }
      ppppppuVar39 = local_628;
      if ((undefined8 *******)local_628 != (undefined8 *******)0x0) {
        LOCK();
        pppppppuVar19 = (undefined8 *******)(local_628 + 1);
        *(int *)pppppppuVar19 = *(int *)pppppppuVar19 + -1;
        UNLOCK();
        if (*(int *)pppppppuVar19 == 0) {
          (*(code *)**local_628)(local_628);
          LOCK();
          piVar3 = (int *)((longlong)ppppppuVar39 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (*(code *)(*ppppppuVar39)[2])(ppppppuVar39);
          }
        }
      }
    }
LAB_140d3df01:
    FUN_140b623da(&local_3e8);
    ppppppuVar39 = local_648;
  }
  goto LAB_140d3dc5d;
LAB_140d3dc53:
  lVar16 = lVar16 + 0x38;
  lVar33 = lVar33 + -0x38;
  if (lVar33 == 0) goto LAB_140d3dc5d;
  goto LAB_140d3dc3b;
}



// FUNCTION 140d40a64 FUN_140d40a64 body=20262 status=ok
// SIG undefined FUN_140d40a64(void)

void FUN_140d40a64(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_268 [40];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar3 = param_1 + -0x390;
  FUN_1446f470e(&local_208,L"SunlightZenithOffset",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_208);
  iVar5 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
    FUN_140d4598c(param_2,iVar5);
  }
  puVar1 = (uint *)(param_2 + 1);
  puVar2 = (uint *)((longlong)param_2 + 0xc);
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)iVar5 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)iVar5 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_210,L"SunlightRotation",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_210);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_218,L"bUseMoonlightZenithRotation",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_218);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_220,L"MoonlightPitch",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_220);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_228,L"MoonlightYaw",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_228);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_230,L"MoonlightRoll",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_230);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_238,L"MoonlightZenithOffset",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_238);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_240,L"MoonlightRotation",1);
  FUN_140056680(local_80,L"WorldTimeOfDay");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_240);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140d45a8c(lVar3,*(undefined8 *)(param_1 + 0x30),param_2);
  FUN_140d45a8c(lVar3,*(undefined8 *)(param_1 + 0x38),param_2);
  FUN_1446f470e(&local_70,L"Intensity",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_70);
  iVar5 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
    FUN_140d4598c(param_2,iVar5);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)iVar5 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)iVar5 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_88,L"LightColor",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_88);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_90,L"bLowerHemisphereIsBlack",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_90);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_98,L"LowerHemisphereColor",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_98);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a0,L"bRealTimeCapture",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a8,L"IndirectLightingIntensity",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b0,L"VolumetricScatteringIntensity",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b8,L"bCloudAmbientOcclusion",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c0,L"CloudAmbientOcclusionStrength",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c8,L"CloudAmbientOcclusionExtent",1);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyLight");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_70,L"RayleighScatteringScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_70);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_88,L"RayleighScattering",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_88);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_90,L"MieScatteringScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_90);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_98,L"MieScattering",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_98);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a0,L"MieAbsorptionScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a8,L"MieAbsorption",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b0,L"MieAnisotropy",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b8,L"MieExponentialDistribution",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c0,L"OtherAbsorptionScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c8,L"OtherAbsorption",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_d0,L"SkyLuminanceFactor",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_d0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_d8,L"AerialPespectiveViewDistanceScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_d8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_e0,L"HeightFogContribution",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_e0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_e8,L"BottomRadius",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_e8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_f0,L"GroundAlbedo",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_f0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_f8,L"AtmosphereHeight",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_f8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_100,L"MultiScatteringFactor",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_100);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_108,L"RayleighExponentialDistribution",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_108);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_110,L"OtherTentDistribution.TipAltitude",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_110);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_118,L"OtherTentDistribution.TipValue",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_118);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_120,L"OtherTentDistribution.Width",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_120);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_128,L"AerialPespectiveViewDistanceScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_128);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"TransmittanceMinLightElevationAngle",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_130);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_138,L"AerialPerspectiveStartDepth",1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  FUN_140056680(local_80,L"WorldTimeOfDaySkyAtmosphere");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_138);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar7 = *param_2;
  puVar4 = (undefined4 *)(lVar7 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar7 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_70,L"bIsVolumetricCloudComponentVisible",1);
  FUN_140056680(local_80,L"WorldTimeOfDayVolumetricCloud");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,lVar3,local_70);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_88,L"LayerBottomAltitude",1);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  FUN_140056680(local_80,L"WorldTimeOfDayVolumetricCloud");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_88);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_90,L"LayerHeight",1);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  FUN_140056680(local_80,L"WorldTimeOfDayVolumetricCloud");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_90);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_98,L"TracingStartMaxDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  FUN_140056680(local_80,L"WorldTimeOfDayVolumetricCloud");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_98);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_70,L"FogDensity",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_70);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_88,L"FogHeightFalloff",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_88);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_90,L"FogInscatteringLuminance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_90);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_98,L"StartDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_98);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a0,L"DirectionalInscatteringLuminance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a8,L"bEnableVolumetricFog",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b0,L"VolumetricFogScatteringDistribution",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b8,L"VolumetricFogAlbedo",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c0,L"VolumetricFogEmissive",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c8,L"VolumetricFogExtinctionScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_d0,L"VolumetricFogDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_d0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_d8,L"FogMaxOpacity",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_d8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_e0,L"SecondFogData.FogDensity",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_e0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_e8,L"SecondFogData.FogHeightFalloff",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_e8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_f0,L"SecondFogData.FogHeightOffset",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_f0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_f8,L"VolumetricFogStartDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_f8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_100,L"VolumetricFogNearFadeInDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_100);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_108,L"SkyAtmosphereAmbientContributionColorScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_108);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_110,L"DirectionalInscatteringExponent",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_110);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_118,L"DirectionalInscatteringStartDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_118);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_120,L"EndDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  FUN_140056680(local_80,L"WorldTimeOfDayExponentialHeightFog");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_120);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_70,L"Settings.AutoExposureBias",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_70);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_88,L"Settings.AutoExposureMinBrightness",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_88);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_90,L"Settings.AutoExposureMaxBrightness",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_90);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_98,L"Settings.AutoExposureSpeedUp",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_98);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a0,L"Settings.AutoExposureSpeedDown",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_a8,L"Settings.AutoExposureLowPercent",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_a8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b0,L"Settings.AutoExposureHighPercent",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_b8,L"Settings.HistogramLogMin",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_b8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c0,L"Settings.HistogramLogMax",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_c8,L"Settings.LocalExposureHighlightContrastScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_c8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_d0,L"Settings.LocalExposureShadowContrastScale",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_d0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_d8,L"Settings.LocalExposureDetailStrength",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_d8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_e0,L"Settings.LocalExposureBlurredLuminanceBlend",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_e0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_e8,L"Settings.LocalExposureBlurredLuminanceKernelSizePercent",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_e8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_f0,L"Settings.LocalExposureMiddleGreyBias",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_f0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_f8,L"Settings.WhiteTemp",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_f8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_100,L"Settings.WhiteTint",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_100);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_108,L"Settings.ColorSaturation",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_108);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_110,L"Settings.ColorContrast",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_110);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_118,L"Settings.ColorGamma",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_118);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_120,L"Settings.ColorGain",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_120);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_128,L"Settings.ColorOffset",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_128);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_130,L"Settings.ColorSaturationShadows",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_130);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_138,L"Settings.ColorContrastShadows",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_138);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_140,L"Settings.ColorGammaShadows",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_140);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_148,L"Settings.ColorGainShadows",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_148);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_150,L"Settings.ColorOffsetShadows",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_150);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_158,L"Settings.ColorSaturationMidtones",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_158);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_160,L"Settings.ColorContrastMidtones",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_160);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_168,L"Settings.ColorGammaMidtones",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_168);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_170,L"Settings.ColorGainMidtones",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_170);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_178,L"Settings.ColorOffsetMidtones",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_178);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_180,L"Settings.ColorSaturationHighlights",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_180);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_188,L"Settings.ColorContrastHighlights",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_188);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_190,L"Settings.ColorGammaHighlights",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_190);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_198,L"Settings.ColorGainHighlights",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_198);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1a0,L"Settings.ColorOffsetHighlights",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1a0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1a8,L"Settings.ColorCorrectionHighlightsMin",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1a8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1b0,L"Settings.FilmSlope",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1b0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1b8,L"Settings.FilmToe",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1b8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1c0,L"Settings.AmbientCubemapTint",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1c0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1c8,L"Settings.AmbientCubemapIntensity",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1c8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1d0,L"Settings.LumenSceneLightingQuality",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1d0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1d8,L"Settings.LumenSceneDetail",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1d8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1e0,L"Settings.LumenSceneViewDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1e0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1e8,L"Settings.LumenFinalGatherQuality",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1e8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1f0,L"Settings.LumenMaxTraceDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1f0);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_1f8,L"Settings.LumenSkylightLeaking",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_1f8);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_200,L"Settings.LumenFullSkylightLeakingDistance",1);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_140056680(local_80,L"WorldTimeOfDayPostProcess");
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408d639c(&local_68,local_80,uVar8,local_200);
  uVar6 = *puVar1;
  *puVar1 = uVar6 + 1;
  if (*puVar2 < uVar6 + 1) {
    FUN_140d4598c(param_2,uVar6);
  }
  lVar3 = *param_2;
  puVar4 = (undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_58;
  puVar4[1] = local_58._4_4_;
  puVar4[2] = (undefined4)uStack_50;
  puVar4[3] = uStack_50._4_4_;
  puVar4 = (undefined4 *)(lVar3 + (longlong)(int)uVar6 * 0x20);
  *puVar4 = (undefined4)local_68;
  puVar4[1] = local_68._4_4_;
  puVar4[2] = (undefined4)uStack_60;
  puVar4[3] = uStack_60._4_4_;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4598c FUN_140d4598c body=255 status=ok
// SIG undefined FUN_140d4598c(void)

void FUN_140d4598c(longlong param_1,int param_2)

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



// FUNCTION 140d45a8c FUN_140d45a8c body=4349 status=ok
// SIG undefined FUN_140d45a8c(void)

void FUN_140d45a8c(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pwVar4 = L"WorldTimeOfDayMoonLight";
  if (*(longlong *)(param_1 + 0x3c0) == param_2) {
    pwVar4 = L"WorldTimeOfDaySunLight";
  }
  FUN_140056680(local_50,pwVar4);
  FUN_1446f470e(&local_80,L"Intensity",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_80);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_88,L"bAffectsWorld",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_88);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_90,L"CastShadows",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_90);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_98,L"LightColor",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_98);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_a0,L"LightSourceAngle",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_a0);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_a8,L"IndirectLightingIntensity",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_a8);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_b0,L"VolumetricScatteringIntensity",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_b0);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_b8,L"OcclusionMaskDarkness",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_b8);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_c0,L"OcclusionDepthRange",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_c0);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_c8,L"bEnableLightShaftBloom",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_c8);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_d0,L"BloomScale",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_d0);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_d8,L"BloomThreshold",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_d8);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_e0,L"BloomMaxBrightness",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_e0);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_e8,L"BloomTint",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_e8);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_f0,L"CloudScatteredLuminanceScale",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_f0);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_f8,L"AtmosphereSunDiskColorScale",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_f8);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_100,L"CloudShadowStrength",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_100);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_108,L"DynamicShadowDistanceMovableLight",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_108);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_110,L"DynamicShadowCascades",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_110);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_118,L"CascadeDistributionExponent",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_118);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_120,L"CascadeTransitionFraction",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_120);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_128,L"DistanceFieldShadowDistance",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_128);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_130,L"bUseRayTracedDistanceFieldShadows",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_130);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_138,L"bUseTemperature",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_138);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_140,L"Temperature",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_140);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_148,L"FarShadowCascadeCount",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_148);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_150,L"FarShadowDistance",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_150);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_158,L"TraceDistance",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_158);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_160,L"bCastCloudShadows",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_160);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_168,L"CloudShadowOnAtmosphereStrength",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_168);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  FUN_1446f470e(&local_170,L"CloudShadowOnSurfaceStrength",1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1408d639c(&local_78,local_50,param_2,local_170);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_140d4598c(param_3,iVar2);
  }
  lVar3 = *param_3;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  if (*(longlong *)(param_1 + 0x3c0) == param_2) {
    FUN_1446f470e(&local_178,L"LightFunctionMaterial",1);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_1408d639c(&local_78,local_50,param_2,local_178);
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_140d4598c(param_3,iVar2);
    }
    lVar3 = *param_3;
    puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
    *puVar1 = (undefined4)local_68;
    puVar1[1] = local_68._4_4_;
    puVar1[2] = (undefined4)uStack_60;
    puVar1[3] = uStack_60._4_4_;
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d46bae FUN_140d46bae body=112 status=ok
// SIG undefined FUN_140d46bae(void)

undefined8 FUN_140d46bae(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((param_1[6] == 0) || (lVar4 = *(longlong *)(param_1[6] + 0x360), lVar4 == 0)) {
LAB_140d46c1a:
    uVar3 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x490))();
    if (cVar1 == '\0') {
      bVar2 = (**(code **)(*param_1 + 0x498))(param_1);
      if (bVar2 < 6) goto LAB_140d46c02;
      cVar1 = (**(code **)(*param_1 + 0x498))(param_1);
      if (cVar1 == '\t') goto LAB_140d46c02;
    }
    else {
LAB_140d46c02:
      lVar4 = FUN_1405e677a(DAT_14cb0d2b0,lVar4);
      if (*(char *)(lVar4 + 0x88) != '\x01') goto LAB_140d46c1a;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140d46c52 FUN_140d46c52 body=40 status=ok
// SIG undefined FUN_140d46c52(void)

undefined8 FUN_140d46c52(undefined8 param_1,int param_2)

{
  FUN_140d46c7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d46c7a FUN_140d46c7a body=323 status=ok
// SIG undefined FUN_140d46c7a(void)

void FUN_140d46c7a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a424100;
  FUN_140d46ec5(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x31];
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
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140d46dbd(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42b090;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x91) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x91) = 0;
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d46dbd FUN_140d46dbd body=264 status=ok
// SIG undefined FUN_140d46dbd(void)

void FUN_140d46dbd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -4) = 0;
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -0xc) = 0;
      if (*(int *)((longlong)plVar1 + -0x5c) != 0) {
        FUN_14472eb64(plVar1 + -0xd,0);
      }
      plVar1[-7] = 0xffffffff;
      *(undefined4 *)(plVar1 + -8) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + -0x3c)) {
        *(undefined4 *)((longlong)plVar1 + -0x3c) = 0x80;
        FUN_1446efbd8(plVar1 + -0xb);
      }
      if (plVar1[-9] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x14] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d46ec5 FUN_140d46ec5 body=264 status=ok
// SIG undefined FUN_140d46ec5(void)

void FUN_140d46ec5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x88);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -4) = 0;
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -0xc) = 0;
      if (*(int *)((longlong)plVar1 + -0x5c) != 0) {
        FUN_14472eb64(plVar1 + -0xd,0);
      }
      plVar1[-7] = 0xffffffff;
      *(undefined4 *)(plVar1 + -8) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + -0x3c)) {
        *(undefined4 *)((longlong)plVar1 + -0x3c) = 0x80;
        FUN_1446efbd8(plVar1 + -0xb);
      }
      if (plVar1[-9] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x11] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d46fcd FUN_140d46fcd body=41 status=ok
// SIG undefined FUN_140d46fcd(void)

void FUN_140d46fcd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d46ff6(param_1);
    param_1 = param_1 + 0x1e8;
  }
  return;
}



// FUNCTION 140d46ff6 FUN_140d46ff6 body=275 status=ok
// SIG undefined FUN_140d46ff6(void)

void FUN_140d46ff6(longlong *param_1)

{
  if ((longlong *)param_1[0x36] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x36] + 0x10))();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4710a(param_1 + 0x1a);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14110cecd(param_1[0x13],(int)param_1[0x14]);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d470c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140d4710a FUN_140d4710a body=135 status=ok
// SIG undefined FUN_140d4710a(void)

void FUN_140d4710a(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140d47191(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d47191 FUN_140d47191 body=41 status=ok
// SIG undefined FUN_140d47191(void)

void FUN_140d47191(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d471ba(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 140d471ba FUN_140d471ba body=141 status=ok
// SIG undefined FUN_140d471ba(void)

void FUN_140d471ba(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
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



// FUNCTION 140d47262 FUN_140d47262 body=57 status=ok
// SIG undefined FUN_140d47262(void)

void FUN_140d47262(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25668 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25668 = FUN_140002ddd(FUN_146447949,uVar1,L"WwiseAuxBusDef");
  }
  return;
}



// FUNCTION 140d472aa FUN_140d472aa body=705 status=ok
// SIG undefined FUN_140d472aa(void)

void FUN_140d472aa(longlong param_1,double *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  PSRWLOCK SRWLock;
  longlong lVar10;
  ulonglong *puVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = (double)(float)*param_2;
  if (*(double *)(param_1 + 0x368) <= dVar3 && dVar3 != *(double *)(param_1 + 0x368)) {
    *(double *)(param_1 + 0x368) = dVar3;
    local_78 = 0;
    uStack_70 = 0;
    if ((longlong)*(int *)(param_2 + 2) != 0) {
      puVar11 = (ulonglong *)param_2[1];
      puVar9 = puVar11 + (longlong)*(int *)(param_2 + 2) * 0xb;
      lVar10 = param_1 + 0x2e0;
      local_80 = lVar10;
      do {
        uVar8 = puVar11[4];
        if (uVar8 != 0) {
          SRWLock = (PSRWLOCK)0x0;
          if (DAT_14c992a90 != '\0') {
            SRWLock = (PSRWLOCK)(param_1 + 0x280);
          }
          if (SRWLock != (PSRWLOCK)0x0) {
            AcquireSRWLockShared(SRWLock);
          }
          if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
            uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            lVar7 = *(longlong *)(param_1 + 0x2e8);
            if (*(longlong *)(param_1 + 0x2e8) == 0) {
              lVar7 = lVar10;
            }
            iVar6 = *(int *)(lVar7 + (ulonglong)
                                     (*(int *)(param_1 + 0x2f0) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4)
            ;
            if (iVar6 != -1) {
              do {
                puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar6 * 0x18);
                if (*puVar1 == uVar8) {
                  if (puVar1 != (ulonglong *)0x0) {
                    uVar8 = 0;
                    if (puVar1 + 1 != (ulonglong *)0x0) {
                      uVar8 = puVar1[1];
                    }
                    goto LAB_140d473e0;
                  }
                  break;
                }
                iVar6 = (int)puVar1[2];
              } while (iVar6 != -1);
            }
          }
          uVar8 = 0;
LAB_140d473e0:
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockShared(SRWLock);
          }
          uVar4 = uStack_70;
          if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
            uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            lVar7 = *(longlong *)(param_1 + 0x1a0);
            if (*(longlong *)(param_1 + 0x1a0) == 0) {
              lVar7 = param_1 + 0x198;
            }
            iVar6 = *(int *)(lVar7 + (ulonglong)
                                     (*(int *)(param_1 + 0x1a8) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4)
            ;
            if (iVar6 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar6 * 0x10) == uVar8
                   ) {
                  lVar10 = (longlong)(int)uStack_70;
                  uVar5 = (int)uStack_70 + 1;
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
                  if (uStack_70._4_4_ < uVar5) {
                    FUN_14748d076(&local_78,uVar4 & 0xffffffff);
                  }
                  lVar7 = local_78;
                  puVar2 = (undefined8 *)(local_78 + 0x10 + lVar10 * 0x28);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  puVar2 = (undefined8 *)(local_78 + lVar10 * 0x28);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  *(undefined8 *)(local_78 + 0x20 + lVar10 * 0x28) = 0;
                  if ((uVar8 != 0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c(uVar8);
                  }
                  puVar1 = (ulonglong *)(lVar7 + lVar10 * 0x28);
                  *puVar1 = uVar8;
                  uVar8 = puVar11[1];
                  puVar1[1] = *puVar11;
                  puVar1[2] = uVar8;
                  puVar1[3] = puVar11[2];
                  *(float *)(puVar1 + 4) = (float)(double)puVar11[3];
                  lVar10 = local_80;
                  break;
                }
                iVar6 = *(int *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x160) + 8);
              } while (iVar6 != -1);
            }
          }
        }
        puVar11 = puVar11 + 0xb;
      } while (puVar11 != puVar9);
      if ((0 < (int)uStack_70) && (0 < *(int *)(*(longlong *)(param_1 + 0x350) + 0x50))) {
        FUN_147860e7b(*(longlong *)(param_1 + 0x350) + 0x48,&local_78);
      }
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d4756c FUN_140d4756c body=45 status=ok
// SIG undefined FUN_140d4756c(void)

void FUN_140d4756c(undefined8 param_1,longlong param_2)

{
  FUN_140d47599(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d47599 FUN_140d47599 body=54 status=ok
// SIG undefined FUN_140d47599(void)

void FUN_140d47599(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140b55689(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140d475d0 FUN_140d475d0 body=76 status=ok
// SIG undefined FUN_140d475d0(void)

undefined8 FUN_140d475d0(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140d4761c(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140d47611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140d4761c FUN_140d4761c body=191 status=ok
// SIG undefined FUN_140d4761c(void)

longlong FUN_140d4761c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140d476dc();
  lVar3 = *param_1;
  if (DAT_14cbe6aa0 != DAT_14cbe6acc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbe6ad0;
    if (DAT_14cbe6ad8 != (undefined *)0x0) {
      puVar7 = DAT_14cbe6ad8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbe6ae0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbe6a98 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbe6a90;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140d476dc FUN_140d476dc body=152 status=ok
// SIG undefined FUN_140d476dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d476dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe6ae8) {
    FUN_144b3d300(&DAT_14cbe6ae8);
    if (DAT_14cbe6ae8 == -1) {
      DAT_14cbe6ab8 = 0;
      DAT_14cbe6ac0 = 0;
      DAT_14cbe6a98 = 0;
      _DAT_14cbe6aa0 = 0;
      _DAT_14cbe6ac4 = 0xffffffff00000080;
      DAT_14cbe6acc = 0;
      DAT_14cbe6ad8 = 0;
      DAT_14cbe6ae0 = 0;
      atexit(FUN_1443453de);
      _Init_thread_footer(&DAT_14cbe6ae8);
      return;
    }
  }
  return;
}



// FUNCTION 140d47774 FUN_140d47774 body=1004 status=ok
// SIG undefined FUN_140d47774(void)

ulonglong FUN_140d47774(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  float local_118;
  undefined2 local_112;
  undefined8 local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined7 local_a8;
  undefined4 uStack_a1;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)((longlong)param_1 + 0x37b) == '\x01') &&
     (((char)param_1[0x6f] != '\0' || (*(char *)((longlong)param_1 + 0x379) == '\x01')))) {
    if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x3c)) {
LAB_140d47a07:
      if (*(char *)((longlong)param_1 + 0x37a) == '\x01') {
        plVar9 = (longlong *)FUN_144a81a0a();
        (**(code **)(*plVar9 + 0x50))(plVar9,&local_94);
        uVar3 = DAT_14c9680a8;
        (**(code **)(*(longlong *)DAT_14c968088[1] + 0x20))((longlong *)DAT_14c968088[1],&local_110)
        ;
        local_120 = local_94;
        local_128 = uVar3;
        uVar8 = (**(code **)(*param_1 + 0xf0))(param_1,&local_110,0x3f800000,0);
        uVar13 = (ulonglong)uVar8;
      }
      else {
        uVar13 = 0;
      }
      goto LAB_140d479a8;
    }
    uVar8 = (uint)((ulonglong)DAT_14c966e98 >> 0x10);
    uVar10 = (uint)DAT_14c966e98 & 0xffff;
    plVar9 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[9];
    }
    iVar11 = *(int *)((longlong)plVar9 +
                     (ulonglong)
                     ((int)param_1[10] - 1U &
                     (int)((ulonglong)DAT_14c966e98 >> 0x20) +
                     ((uint)DAT_14c966e98 << 0x10 | uVar10) + (uVar8 << 0x13 | uVar8 & 0xffff) +
                     (uVar10 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        if (*(longlong *)(param_1[1] + (longlong)iVar11 * 0x20) == DAT_14c966e98)
        goto LAB_140d47a07;
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + param_1[1] + 0x18);
      } while (iVar11 != -1);
    }
  }
  plVar9 = param_1 + -0x29;
  (**(code **)(param_1[-0x29] + 0x68))(plVar9,&local_110);
  fVar4 = (float)local_110;
  fVar6 = local_110._4_4_;
  (**(code **)(param_1[-0x29] + 0x70))(plVar9,&local_110);
  fVar5 = (float)local_110;
  fVar7 = local_110._4_4_;
  lVar14 = param_1[0x9f];
  param_1[0x9f] = lVar14 + 1U;
  if (3 < lVar14 + 1U) {
    FUN_140d47b6c(plVar9,1);
  }
  if ((fVar5 == fVar4) && (!NAN(fVar5) && !NAN(fVar4))) {
    if ((fVar7 == fVar6) && (!NAN(fVar7) && !NAN(fVar6))) {
      uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_140d479a8;
    }
  }
  local_118 = fVar6;
  lVar14 = (**(code **)(param_1[-0x29] + 0x60))(plVar9);
  param_1[0x4a] = lVar14;
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_112);
  plVar1 = DAT_14c966e90;
  local_c8 = DAT_14c966e88;
  local_d0 = DAT_14c966e80;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar12 = param_1 + 1;
  local_104 = (*(code *)**(undefined8 **)param_1[0xbb])();
  local_108 = local_112;
  local_106 = 0;
  local_f8 = 0;
  local_110 = &PTR_FUN_149eda650;
  local_f0 = fVar4;
  local_ec = local_118;
  local_e8 = fVar5;
  local_e4 = fVar7;
  local_dc = fVar6 - fVar7;
  local_e0 = fVar4 - fVar5;
  local_c0 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
  local_b8 = 10;
  local_b0 = 0x3f800000;
  local_ac = 0;
  local_a8 = 0;
  uStack_a1 = 0;
  local_100 = local_104;
  local_d8 = plVar12;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar1 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  uVar8 = FUN_14058dffc(plVar9,&local_110,0);
  plVar9 = local_c0;
  uVar13 = (ulonglong)uVar8;
  local_110 = &PTR_FUN_149eda650;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_140d479a8:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 140d47b6c FUN_140d47b6c body=479 status=ok
// SIG undefined FUN_140d47b6c(void)

void FUN_140d47b6c(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x318) < 1) goto LAB_140d47c59;
  lVar3 = **(longlong **)(param_1 + 0x310);
  puVar4 = (undefined8 *)(*(longlong **)(param_1 + 0x310))[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  lVar8 = DAT_14c968088;
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(lVar3 + 0x20);
    plVar7 = *(longlong **)(lVar3 + 0x28);
    if (plVar7 == (longlong *)0x0) {
      lVar8 = *(longlong *)(DAT_14c968088 + 8);
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      lVar8 = *(longlong *)(lVar8 + 8);
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
    lVar6 = DAT_14c968088;
    if ((((lVar5 == lVar8) != (bool)param_2) && (DAT_14c968088 != 0)) &&
       (*(longlong *)(DAT_14c968088 + 8) != 0)) {
      *(undefined8 *)(param_1 + 0x640) = 0;
      if (param_2 == '\0') {
        plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_149efd9a0;
        local_50 = plVar7 + 2;
        plVar7[2] = (longlong)&PTR_FUN_149efd9c0;
        *(undefined1 *)(plVar7 + 3) = 0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[4] = -0x3e20000000000000;
        plVar7[5] = -0x3e20000000000000;
        local_48 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          FUN_1469a9a44(lVar3,&local_50);
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
          goto LAB_140d47c17;
        }
      }
      else {
        local_50 = *(longlong **)(lVar6 + 8);
        local_48 = *(longlong **)(lVar6 + 0x10);
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
      }
      FUN_1469a9a44(lVar3,&local_50);
    }
  }
LAB_140d47c17:
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
LAB_140d47c59:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d47d6e FUN_140d47d6e body=289 status=ok
// SIG undefined FUN_140d47d6e(void)

undefined8 * FUN_140d47d6e(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d47e90();
  *param_1 = &PTR_FUN_14b977610;
  *(undefined2 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = 0x3f800000;
  FUN_1400b22c2(&local_68,"/Script/OakGame.OakLightProjectile");
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = local_68;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_58._4_4_;
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 6);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 7) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d47e90 FUN_140d47e90 body=1663 status=ok
// SIG undefined FUN_140d47e90(void)

undefined8 * FUN_140d47e90(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b334210;
  ppvVar1 = (void **)(param_1 + 6);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3ff00000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3ff00000;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 3;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xc5daac38;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3ff00000;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x4fc71eb6;
  param_1[0x40] = 0;
  *(undefined2 *)((longlong)param_1 + 0x20a) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x46] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x49] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0xc5daac38;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3ff00000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3ff00000;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x464b20003dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 1;
  param_1[100] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x3f8000003e4ccccd;
  *(undefined2 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x43fa0000;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0x43fa0000442f0000;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(byte *)((longlong)param_1 + 0x354) = *(byte *)((longlong)param_1 + 0x354) | 0x7f;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0x200000000;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x3002;
  param_1[0x7a] = 0;
  FUN_1405c5fa2();
  param_1[0x7c] = &DAT_14cb769e8;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7b] = &PTR_FUN_14b0394b0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3005;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0xf00000d0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xf00000d0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0xf00000d0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  memset(param_1 + 0xa4,0,0x90);
  *(undefined4 *)(param_1 + 0xb6) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x5b9) = 0x1010000010101;
  *(undefined1 *)((longlong)param_1 + 0x5c1) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbd] = 0;
  *(undefined2 *)(param_1 + 0xc1) = 4;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 3;
  *(char *)(param_1 + 0xc3) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_140c51964(param_1 + 0xc4);
  param_1[0xdb] = 0;
  *(undefined2 *)(param_1 + 0xdf) = 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 3;
  *(char *)(param_1 + 0xe1) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0xe2] = &PTR_FUN_14aff4f48;
  param_1[0xe3] = 0x44bb8000;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x724) = 1;
  *(undefined4 *)(param_1 + 0xe5) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0x43340000;
  *(undefined4 *)(param_1 + 0xe6) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0x42340000;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0;
  param_1[0xed] = 0x4076800000000000;
  param_1[0xee] = 0x4076800000000000;
  *(undefined4 *)(param_1 + 0xef) = 0x40800000;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  FUN_1400b22c2(&local_98,"/Script/GbxGame.LightProjectile");
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_60 = local_98;
  local_58 = local_90 + -1;
  if (local_90 == 0) {
    local_58 = 0;
  }
  FUN_14475bf92(&local_88);
  _Src = local_78;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_88._4_4_;
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_80._4_4_;
  if (ppvVar1 != &local_78) {
    iVar2 = (int)uStack_70;
    lVar3 = (longlong)(int)uStack_70;
    *(int *)(param_1 + 7) = (int)uStack_70;
    if ((int)uStack_70 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x359) = 0x1110;
  *(undefined1 *)(param_1 + 0x6d) = 10;
  *(byte *)((longlong)param_1 + 0x369) = *(byte *)((longlong)param_1 + 0x369) & 0xfe;
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xf8;
  *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) | 1;
  *(byte *)((longlong)param_1 + 0x519) = *(byte *)((longlong)param_1 + 0x519) & 0xfc | 2;
  *(byte *)(param_1 + 0xb7) = *(byte *)(param_1 + 0xb7) & 0xfe;
  *(byte *)((longlong)param_1 + 0x5c2) = *(byte *)((longlong)param_1 + 0x5c2) & 0xfc | 2;
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfc;
  *(byte *)(param_1 + 0xec) = *(byte *)(param_1 + 0xec) & 0xfe;
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) & 0xfe;
  *(byte *)((longlong)param_1 + 0x334) = *(byte *)((longlong)param_1 + 0x334) & 0xfc;
  *(byte *)((longlong)param_1 + 0x34c) = *(byte *)((longlong)param_1 + 0x34c) | 1;
  *(byte *)(param_1 + 0x6b) = (*(byte *)(param_1 + 0x6b) & 0xfc) + 1;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4851e FUN_140d4851e body=31 status=ok
// SIG undefined FUN_140d4851e(void)

undefined8 FUN_140d4851e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d48544 FUN_140d48544 body=57 status=ok
// SIG undefined FUN_140d48544(void)

void FUN_140d48544(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb227e0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb227e0 = FUN_140002ddd(FUN_14643985c,uVar1,L"GpsFlow_Combine");
  }
  return;
}



// FUNCTION 140d4857e FUN_140d4857e body=433 status=ok
// SIG undefined FUN_140d4857e(void)

void FUN_140d4857e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined **local_190 [5];
  byte local_166;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_f0 [168];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_48 = 0;
  uStack_40 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar5 * 8);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        lVar3 = FUN_140d48730();
        if (lVar2 == lVar3) {
          FUN_1400337aa(lVar1);
          bVar6 = (longlong)uStack_40 < 0;
          uStack_40 = uStack_40 & 0xffffffff00000000;
          if (bVar6) {
            FUN_144893a1c(&local_48,0);
          }
          local_198 = 0;
          local_1a0 = 1;
          local_1a8 = 0;
          FUN_147587eae(local_f0,lVar1,&local_48,0);
          FUN_144a7fc42(local_f0);
          plVar4 = (longlong *)FUN_147587f81(param_1);
          memset(local_190,0,0x90);
          FUN_144869430(local_190);
          local_100 = 0;
          local_190[0] = &PTR_FUN_149fba270;
          local_f8 = &local_48;
          FUN_140996f94(local_190,1);
          (*(code *)local_190[0][0x1e])(local_190,0);
          local_166 = local_166 & 0x7b;
          (**(code **)(*plVar4 + 0xd8))(plVar4);
          FUN_144a7fc42(local_190);
          lVar1 = *(longlong *)(param_1 + 0xf8);
          if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar4);
          }
          *(longlong **)(lVar1 + lVar5 * 8) = plVar4;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x100));
  }
  FUN_1409dad52(param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d48730 FUN_140d48730 body=228 status=ok
// SIG undefined FUN_140d48730(void)

longlong FUN_140d48730(void)

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
  if (DAT_14cab3e58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_14758530f;
    local_40 = &LAB_14179fa0d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x208;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneBoolSection",&DAT_14cab3e58,&DAT_14758530e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3e58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d48816 FUN_140d48816 body=172 status=ok
// SIG undefined FUN_140d48816(void)

ulonglong FUN_140d48816(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  
  (**(code **)(*param_1 + 0x70))();
  param_1[3] = 0;
  if (param_1[4] != 0) {
    FUN_140d2d4a8(param_1 + 2);
  }
  if (param_2 != (void *)0x0 && 0 < (longlong)param_3) {
    plVar1 = param_1 + 5;
    param_1[6] = 0;
    if (param_1[7] == param_3) {
      lVar3 = 0;
      uVar2 = param_3;
    }
    else {
      FUN_140d2d4a8(plVar1,param_3);
      lVar3 = param_1[6];
      uVar2 = param_1[7];
    }
    param_1[6] = lVar3 + param_3;
    if (uVar2 - lVar3 < param_3) {
      FUN_14112c458(plVar1);
    }
    memcpy((void *)*plVar1,param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_2 != (void *)0x0 && 0 < (longlong)param_3)
         & 0xffffffff;
}



// FUNCTION 140d488c2 FUN_140d488c2 body=38 status=ok
// SIG undefined FUN_140d488c2(void)

void FUN_140d488c2(longlong param_1)

{
  FUN_140d488e8();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  return;
}



// FUNCTION 140d488e8 FUN_140d488e8 body=114 status=ok
// SIG undefined FUN_140d488e8(void)

void FUN_140d488e8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1446f8c06(param_1 + 0x58,0);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_140d2d4a8(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_140d2d4a8(param_1 + 0x28,0);
  }
  *(undefined1 *)(param_1 + 0x40) = 0xff;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



// FUNCTION 140d4895a FUN_140d4895a body=1978 status=ok
// SIG undefined FUN_140d4895a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d4895a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined1 local_1e0;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  longlong lStack_160;
  undefined8 local_158;
  ulonglong uStack_150;
  undefined2 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong lStack_128;
  longlong *local_118;
  longlong local_108 [4];
  undefined8 local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar12 = FUN_1447210f0();
  if ((lVar12 != 0) &&
     (lVar12 = (**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x18))(param_1 + 0x3a8), lVar12 != 0))
  {
    lVar13 = FUN_140d499bc();
    if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30 &&
        (*(longlong *)(param_1 + 0x1c8) != 0)))) {
      local_1d0 = (longlong *)(param_1 + 0x2698);
      iVar17 = *(int *)(param_1 + 0x26a0);
      iVar1 = *(int *)(lVar12 + 0x70);
      if (iVar17 != iVar1) {
        if (iVar1 < iVar17) {
          lVar13 = (longlong)iVar17;
          iVar17 = -iVar17;
          do {
            plVar14 = *(longlong **)(*local_1d0 + -8 + lVar13 * 8);
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x420))(plVar14,0);
              iVar11 = *(int *)(param_1 + 0x26a0);
              if ((int)lVar13 != iVar11) {
                memmove((void *)(*(longlong *)(param_1 + 0x2698) + lVar13 * 8 + -8),
                        (void *)(*(longlong *)(param_1 + 0x2698) + lVar13 * 8),
                        (longlong)(iVar11 + iVar17) << 3);
                iVar11 = *(int *)(param_1 + 0x26a0);
              }
              *(int *)(param_1 + 0x26a0) = iVar11 + -1;
              FUN_148e121ee(local_1d0);
            }
            lVar13 = lVar13 + -1;
            iVar17 = iVar17 + 1;
          } while (iVar1 < lVar13);
        }
        FUN_140d49940(local_1d0,iVar1,1);
        iVar17 = *(int *)(param_1 + 0x26a0);
      }
      auVar9 = _DAT_1499387d0;
      if (0 < iVar17) {
        dVar4 = (double)DAT_1499387d0;
        dVar5 = DAT_1499387d0._8_8_;
        lVar13 = 0;
        lVar18 = 0;
        do {
          plVar14 = *(longlong **)(*local_1d0 + lVar18 * 8);
          if (plVar14 == (longlong *)0x0) {
            uVar2 = *(uint *)(param_1 + 8);
            FUN_14058b40c(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                         );
            local_168 = FUN_140d49116();
            local_118 = (longlong *)0x0;
            local_e8 = 0;
            local_158 = 0;
            local_148 = 0;
            local_130 = 0;
            lStack_128 = 0;
            uStack_150 = (ulonglong)uVar2 & 0xffffffff00000069;
            local_140 = 0;
            uStack_138 = 0;
            lStack_160 = param_1;
            plVar14 = (longlong *)FUN_1402710dd(&local_168);
            if (lStack_128 != 0) {
              plVar16 = local_118;
              if (local_118 == (longlong *)0x0) {
                plVar16 = local_108;
              }
              (**(code **)(*plVar16 + 0x10))();
            }
            *(undefined1 *)((longlong)plVar14 + 0xb9) = 3;
            FUN_14010ee68(param_1,plVar14);
            FUN_140b506a4(plVar14);
            lVar3 = *(longlong *)(param_1 + 0x2698);
            if ((plVar14 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(plVar14);
            }
            *(longlong **)(lVar3 + lVar18 * 8) = plVar14;
          }
          (**(code **)(*plVar14 + 0x490))(plVar14,*(undefined8 *)(param_1 + 0x1c8),&DAT_14cadada0,0)
          ;
          FUN_140d491fc(plVar14);
          FUN_140d491fc(plVar14);
          local_198 = *(undefined8 *)(*(longlong *)(lVar12 + 0x68) + 0x10 + lVar13);
          puVar15 = (undefined8 *)(*(longlong *)(lVar12 + 0x68) + lVar13);
          local_1a8 = *puVar15;
          uStack_1a0 = puVar15[1];
          auVar19 = *(undefined1 (*) [16])(plVar14 + 0x36);
          dVar7 = auVar19._0_8_;
          dVar8 = auVar19._8_8_;
          dVar34 = (double)plVar14[0x38];
          puVar15 = (undefined8 *)plVar14[0x46];
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            uVar10 = DAT_14c8463d8;
            *puVar15 = DAT_14c8463d0;
            puVar15[1] = uVar10;
            uVar10 = DAT_14c8463e8;
            puVar15[2] = DAT_14c8463e0;
            puVar15[3] = uVar10;
            uVar10 = DAT_14c846500;
            puVar15[4] = DAT_14c8464f8;
            puVar15[5] = uVar10;
            puVar15[6] = DAT_14c846508;
            plVar14[0x46] = (longlong)puVar15;
          }
          if (((((double)puVar15[4] != dVar7) || (NAN((double)puVar15[4]) || NAN(dVar7))) ||
              ((double)puVar15[5] != dVar8)) ||
             (((NAN((double)puVar15[5]) || NAN(dVar8) || ((double)puVar15[6] != dVar34)) ||
              (NAN((double)puVar15[6]) || NAN(dVar34))))) {
            auVar32._8_8_ = 0;
            auVar32._0_8_ = dVar34;
            auVar19 = divpd(auVar19,auVar9);
            auVar25 = divpd(auVar32,auVar9);
            auVar19 = roundpd(auVar19,auVar19,3);
            auVar25 = roundpd(auVar25,auVar25,3);
            dVar7 = dVar7 - auVar19._0_8_ * dVar4;
            dVar8 = dVar8 - auVar19._8_8_ * dVar5;
            auVar33._0_8_ = dVar34 - auVar25._0_8_ * dVar4;
            auVar33._8_8_ = 0.0 - auVar25._8_8_ * dVar5;
            auVar29._0_8_ = dVar7 + dVar4;
            auVar29._8_8_ = dVar8 + dVar5;
            auVar36._0_8_ = auVar33._0_8_ + dVar4;
            auVar36._8_8_ = auVar33._8_8_ + dVar5;
            auVar25._8_8_ = -(ulonglong)(0.0 <= dVar8);
            auVar25._0_8_ = -(ulonglong)(0.0 <= dVar7);
            auVar19._8_4_ = SUB84(dVar8,0);
            auVar19._0_8_ = dVar7;
            auVar19._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar19 = blendvpd(auVar29,auVar19,auVar25);
            auVar23._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
            auVar23._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
            auVar25 = blendvpd(auVar36,auVar33,auVar23);
            auVar27._0_8_ = auVar19._0_8_ + -360.0;
            auVar27._8_8_ = auVar19._8_8_ + -360.0;
            auVar24._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
            auVar24._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
            auVar19 = blendvpd(auVar19,auVar27,auVar24);
            dVar34 = auVar25._0_8_;
            *(undefined1 (*) [16])(puVar15 + 4) = auVar19;
            puVar15[6] = ~-(ulonglong)(180.0 < dVar34) & (ulonglong)dVar34 |
                         (ulonglong)(dVar34 + -360.0) & -(ulonglong)(180.0 < dVar34);
            FUN_144a7484c(puVar15 + 4,&local_168);
            puVar15[2] = local_158;
            puVar15[3] = uStack_150;
            *puVar15 = local_168;
            puVar15[1] = lStack_160;
          }
          local_168 = *puVar15;
          lStack_160 = puVar15[1];
          local_158 = puVar15[2];
          uStack_150 = puVar15[3];
          local_188 = local_1a8;
          uStack_180 = uStack_1a0;
          local_178 = local_198;
          local_1e0 = 0;
          local_1e8 = (undefined8 *)0x0;
          FUN_144927ad4(plVar14,&local_188,&local_168);
          local_1b8 = *(undefined8 *)(*(longlong *)(lVar12 + 0x68) + 0x28 + lVar13);
          puVar15 = (undefined8 *)(*(longlong *)(lVar12 + 0x68) + 0x18 + lVar13);
          local_1c8 = *puVar15;
          uStack_1c0 = puVar15[1];
          local_1e8 = (undefined8 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
          FUN_14020f75c(plVar14,&local_1c8,0);
          auVar19 = *(undefined1 (*) [16])(plVar14 + 0x36);
          dVar7 = auVar19._0_8_;
          dVar8 = auVar19._8_8_;
          dVar34 = (double)plVar14[0x38];
          puVar15 = (undefined8 *)plVar14[0x46];
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            uVar10 = DAT_14c8463d8;
            *puVar15 = DAT_14c8463d0;
            puVar15[1] = uVar10;
            uVar10 = DAT_14c8463e8;
            puVar15[2] = DAT_14c8463e0;
            puVar15[3] = uVar10;
            uVar10 = DAT_14c846500;
            puVar15[4] = DAT_14c8464f8;
            puVar15[5] = uVar10;
            puVar15[6] = DAT_14c846508;
            plVar14[0x46] = (longlong)puVar15;
          }
          if ((((double)puVar15[4] != dVar7) || (NAN((double)puVar15[4]) || NAN(dVar7))) ||
             (((double)puVar15[5] != dVar8 ||
              (((NAN((double)puVar15[5]) || NAN(dVar8) || ((double)puVar15[6] != dVar34)) ||
               (NAN((double)puVar15[6]) || NAN(dVar34))))))) {
            auVar30._8_8_ = 0;
            auVar30._0_8_ = dVar34;
            auVar19 = divpd(auVar19,auVar9);
            auVar25 = divpd(auVar30,auVar9);
            auVar19 = roundpd(auVar19,auVar19,3);
            auVar25 = roundpd(auVar25,auVar25,3);
            dVar7 = dVar7 - auVar19._0_8_ * dVar4;
            dVar8 = dVar8 - auVar19._8_8_ * dVar5;
            auVar31._0_8_ = dVar34 - auVar25._0_8_ * dVar4;
            auVar31._8_8_ = 0.0 - auVar25._8_8_ * dVar5;
            auVar28._0_8_ = dVar7 + dVar4;
            auVar28._8_8_ = dVar8 + dVar5;
            auVar35._0_8_ = auVar31._0_8_ + dVar4;
            auVar35._8_8_ = auVar31._8_8_ + dVar5;
            auVar20._8_8_ = -(ulonglong)(0.0 <= dVar8);
            auVar20._0_8_ = -(ulonglong)(0.0 <= dVar7);
            auVar6._8_4_ = SUB84(dVar8,0);
            auVar6._0_8_ = dVar7;
            auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar19 = blendvpd(auVar28,auVar6,auVar20);
            auVar21._8_8_ = -(ulonglong)(0.0 <= auVar31._8_8_);
            auVar21._0_8_ = -(ulonglong)(0.0 <= auVar31._0_8_);
            auVar25 = blendvpd(auVar35,auVar31,auVar21);
            auVar26._0_8_ = auVar19._0_8_ + -360.0;
            auVar26._8_8_ = auVar19._8_8_ + -360.0;
            auVar22._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
            auVar22._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
            auVar19 = blendvpd(auVar19,auVar26,auVar22);
            dVar34 = auVar25._0_8_;
            *(undefined1 (*) [16])(puVar15 + 4) = auVar19;
            puVar15[6] = ~-(ulonglong)(180.0 < dVar34) & (ulonglong)dVar34 |
                         (ulonglong)(dVar34 + -360.0) & -(ulonglong)(180.0 < dVar34);
            FUN_144a7484c(puVar15 + 4,&local_168);
            puVar15[2] = local_158;
            puVar15[3] = uStack_150;
            *puVar15 = local_168;
            puVar15[1] = lStack_160;
          }
          local_168 = *puVar15;
          lStack_160 = puVar15[1];
          local_158 = puVar15[2];
          uStack_150 = puVar15[3];
          local_1e8 = &local_168;
          local_1e0 = 0;
          FUN_140092404(plVar14,plVar14[0x24],plVar14[0x25]);
          lVar18 = lVar18 + 1;
          lVar13 = lVar13 + 0x30;
        } while (lVar18 < *(int *)(param_1 + 0x26a0));
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d49116 FUN_140d49116 body=228 status=ok
// SIG undefined FUN_140d49116(void)

longlong FUN_140d49116(void)

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
  if (DAT_14cbc0478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b5a5c;
    local_38 = &LAB_148cba1c7;
    local_40 = FUN_1418d3b7c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/OakGame",L"TravelPointCapsuleComponent",&DAT_14cbc0478,&DAT_148cba1c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d491fc FUN_140d491fc body=384 status=ok
// SIG undefined FUN_140d491fc(void)

void FUN_140d491fc(longlong *param_1,float param_2,float param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = param_3;
  }
  if (fVar5 <= param_2) {
    fVar5 = param_2;
  }
  *(float *)(param_1 + 200) = fVar5;
  fVar5 = 0.0;
  if (0.0 <= param_2) {
    fVar5 = param_2;
  }
  *(float *)((longlong)param_1 + 0x644) = fVar5;
  (**(code **)(*param_1 + 0x540))();
  (**(code **)(*param_1 + 0x9f8))(param_1);
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) != 0) goto LAB_140d492a0;
  bVar1 = *(byte *)((longlong)param_1 + 0x9d);
  if ((bVar1 & 1) != 0) {
    if (param_1[0x16] != 0) goto LAB_140d492a0;
    lVar4 = FUN_1448abda6(param_1);
    if (lVar4 != 0) goto LAB_140d492a0;
    bVar1 = *(byte *)((longlong)param_1 + 0x9d);
  }
  *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
LAB_140d492a0:
  if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
    local_38 = param_1[0x50];
    lStack_30 = param_1[0x51];
    local_28 = param_1[0x52];
    FUN_140043360(param_1 + 0x82,&local_38,1);
    if (param_4 != '\0') {
      iVar3 = (**(code **)(*param_1 + 0x570))(param_1);
      if ((iVar3 != 0) && (param_1[0x15] != 0)) {
        if ((longlong)(int)param_1[0x44] < 1) {
          if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
            cVar2 = (**(code **)(*param_1 + 0x508))(param_1,0,1,0);
            *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar2 * '\x02';
          }
        }
        else {
          lVar4 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
          *(byte *)(lVar4 + 0x608) = *(byte *)(lVar4 + 0x608) | 2;
          *(undefined4 *)(lVar4 + 0x10) = 3;
          *(undefined4 *)(lVar4 + 200) = 0xffffffff;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4937e FUN_140d4937e body=362 status=ok
// SIG undefined FUN_140d4937e(void)

void FUN_140d4937e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar6 = FUN_140d494ea();
  if (cVar6 == '\0') goto LAB_140d493b3;
  fVar9 = *(float *)(param_1 + 0x644);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x58);
  fVar10 = *(float *)(lVar1 + 0x60);
  if ((fVar10 != fVar9) || (NAN(fVar10) || NAN(fVar9))) {
LAB_140d49497:
    *(undefined8 *)(param_1 + 0x620) = 0;
    bVar7 = *(byte *)(param_1 + 0x62c);
    bVar8 = 0;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x640) - fVar9;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar10 = *(float *)(lVar1 + 100);
    if ((fVar10 != fVar9 + fVar9) || (NAN(fVar10) || NAN(fVar9 + fVar9))) goto LAB_140d49497;
    bVar7 = *(byte *)(param_1 + 0x62c);
    bVar8 = bVar7 & 0x10;
  }
  *(byte *)(param_1 + 0x62c) = bVar7 & 0xef | bVar8;
LAB_140d493b3:
  FUN_140d49554(param_1);
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    fVar9 = *(float *)(param_1 + 0x644);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x58);
    fVar10 = *(float *)(param_1 + 0x640) - fVar9;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    local_68 = DAT_14c846480;
    uStack_60 = DAT_14c846488;
    local_58 = (undefined4)DAT_14c846490;
    uStack_54 = DAT_14c846490._4_4_;
    uStack_50 = (undefined4)DAT_14c846498;
    uStack_4c = DAT_14c846498._4_4_;
    FUN_1448052ee(&local_68,&local_80);
    *(undefined8 *)(lVar1 + 0x58) = local_70;
    *(undefined8 *)(lVar1 + 0x48) = local_80;
    *(undefined8 *)(lVar1 + 0x50) = uStack_78;
    uVar5 = DAT_14c8464b0;
    uVar4 = DAT_14c8464a8._4_4_;
    uVar3 = (undefined4)DAT_14c8464a8;
    uVar2 = DAT_14c8464a0._4_4_;
    *(undefined4 *)(lVar1 + 0x30) = (undefined4)DAT_14c8464a0;
    *(undefined4 *)(lVar1 + 0x34) = uVar2;
    *(undefined4 *)(lVar1 + 0x38) = uVar3;
    *(undefined4 *)(lVar1 + 0x3c) = uVar4;
    *(undefined8 *)(lVar1 + 0x40) = uVar5;
    *(float *)(lVar1 + 0x60) = fVar9;
    *(float *)(lVar1 + 100) = fVar10 + fVar10;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d494ea FUN_140d494ea body=106 status=ok
// SIG undefined FUN_140d494ea(void)

ulonglong FUN_140d494ea(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (*(longlong *)(param_1 + 0x620) == 0) {
      plVar1 = (longlong *)FUN_144938c96(param_1);
      lVar2 = (**(code **)(*plVar1 + 0x7a0))(plVar1);
      uVar3 = CONCAT71(uVar4,lVar2 != 0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x620) = lVar2;
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140d49554 FUN_140d49554 body=1003 status=ok
// SIG undefined FUN_140d49554(void)

void FUN_140d49554(undefined **param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined ***local_a0;
  undefined **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined4 local_78;
  undefined ***local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_1[0xc4] != (undefined *)0x0) && ((*(uint *)(param_1[0xc4] + 8) >> 0x1e & 1) == 0))
  goto LAB_140d4958c;
  local_b0 = 0;
  local_b8 = 0;
  puVar4 = (undefined *)FUN_140c9d4a9(param_1,0,0x40,0);
  if ((puVar4 != (undefined *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(puVar4);
  }
  param_1[0xc4] = puVar4;
  if (*(int *)((longlong)param_1 + 0xc) <= DAT_14c9647bc) {
    uVar8 = *(uint *)(puVar4 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    FUN_1447f71cc(lVar9,0x40000000);
    puVar4 = param_1[0xc4];
  }
  lVar9 = 0;
  FUN_1406555d4(puVar4,param_1,0);
  puVar4 = param_1[0xc4];
  uVar8 = *(uint *)(puVar4 + 0xc);
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  if ((*(uint *)(lVar9 + 8) >> 0x1a & 1) != 0) {
    lVar9 = FUN_14065579a(&DAT_14c9640e8);
    puVar4 = param_1[0xc4];
    if (lVar9 != 0) {
      uVar8 = *(uint *)(puVar4 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      FUN_14482b126(lVar9,0x4000000);
      puVar4 = param_1[0xc4];
    }
  }
  puVar4[0x31] = 2;
  puVar4 = param_1[0xc4];
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 2;
  local_80 = 0x3ff;
  local_78 = 6;
  local_98 = &PTR_FUN_14a1dee70;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_58 = DAT_14c8464f0;
  uStack_50 = (undefined4)DAT_14c8464f8;
  uStack_4c = DAT_14c8464f8._4_4_;
  uStack_48 = (undefined4)DAT_14c846500;
  uStack_44 = DAT_14c846500._4_4_;
  uStack_40 = DAT_14c846508;
  local_38 = &DAT_3f8000003f800000;
  iVar2 = *(int *)(puVar4 + 0x60);
  *(uint *)(puVar4 + 0x60) = iVar2 + 1U;
  local_70 = &local_98;
  if (*(uint *)(puVar4 + 100) < iVar2 + 1U) {
    FUN_1407e1e9e(puVar4 + 0x58,iVar2);
  }
  lVar9 = *(longlong *)(puVar4 + 0x58);
  lVar7 = (longlong)iVar2 * 0x68;
  *(undefined ***)(lVar9 + lVar7) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar9 + 8 + lVar7) = local_90;
  *(ulonglong *)(lVar9 + 0xc + lVar7) = CONCAT44(uStack_88,uStack_8c);
  *(undefined4 *)(lVar9 + 0x14 + lVar7) = uStack_84;
  *(byte *)(lVar9 + 0x18 + lVar7) = *(byte *)(lVar9 + 0x18 + lVar7) & 0xfe | (byte)local_80 & 1;
  *(undefined1 *)(lVar9 + 0x19 + lVar7) = local_80._1_1_;
  *(undefined4 *)(lVar9 + 0x20 + lVar7) = 6;
  *(longlong *)(lVar9 + 0x28 + lVar7) = lVar9 + lVar7;
  *(undefined ***)(lVar9 + lVar7) = &PTR_FUN_14a1dee70;
  puVar1 = (undefined4 *)(lVar9 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  puVar1 = (undefined4 *)(lVar9 + 0x40 + lVar7);
  *puVar1 = (undefined4)local_58;
  puVar1[1] = local_58._4_4_;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar9 + 0x50 + lVar7);
  *puVar1 = uStack_48;
  puVar1[1] = uStack_44;
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  *(undefined1 **)(lVar9 + 0x60 + lVar7) = local_38;
  param_1[0xc4][0xb9] = param_1[0xc4][0xb9] | 8;
  *(byte *)((longlong)param_1 + 0x62c) = *(byte *)((longlong)param_1 + 0x62c) & 0xef;
  puVar4 = param_1[0xc4];
  if ((puVar4 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(puVar4);
LAB_140d497a5:
    uVar8 = *(uint *)(puVar4 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar11 = uVar3 == 0;
      if (bVar11) {
        *(uint *)(lVar9 + 0x10) = uVar10;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar3 = uVar10;
      }
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    if (puVar4 != (undefined *)0x0) goto LAB_140d497a5;
    uVar8 = 0;
    uVar6 = 0;
  }
  param_1[0x82] = (undefined *)((ulonglong)uVar8 | uVar6 << 0x20);
  if (param_1[0xa9] != (undefined *)0x0) {
    local_a8 = &LAB_147a145dc;
    local_a0 = &local_98;
    local_98 = param_1;
    uVar5 = FUN_1457b57b4(param_1 + 0x82);
    FUN_140e2683c(uVar5,&local_a8);
  }
LAB_140d4958c:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d49940 FUN_140d49940 body=122 status=ok
// SIG undefined FUN_140d49940(void)

void FUN_140d49940(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140d49aa2(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148e121ee(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140d499bc FUN_140d499bc body=228 status=ok
// SIG undefined FUN_140d499bc(void)

longlong FUN_140d499bc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc0520 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458bd3ca;
    local_38 = &LAB_148cba233;
    local_40 = &LAB_1466170d6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/OakGame",L"TravelStationObjectBodyData",&DAT_14cbc0520,&DAT_148cba232);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0520;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d49aa2 FUN_140d49aa2 body=353 status=ok
// SIG undefined FUN_140d49aa2(void)

void FUN_140d49aa2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d49b27;
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
LAB_140d49b27:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140d49c12 FUN_140d49c12 body=132 status=ok
// SIG undefined FUN_140d49c12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d49c12(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d49c96 FUN_140d49c96 body=103 status=ok
// SIG undefined FUN_140d49c96(void)

ulonglong FUN_140d49c96(longlong param_1)

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
LAB_140d49ce0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d49ce0;
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



// FUNCTION 140d49d08 FUN_140d49d08 body=876 status=ok
// SIG undefined FUN_140d49d08(void)

void FUN_140d49d08(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_140d49ee8:
    **(undefined1 **)(param_1 + 0x28) = 0;
    puVar11 = &local_40;
  }
  else {
    puVar1 = (uint *)(param_1 + 8);
    uVar2 = *puVar1;
    if (((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
        (plVar10 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar10 == (longlong *)0x0)) ||
       (((int)plVar10[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))
       )) goto LAB_140d49ee8;
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar9 = *plVar10;
    }
    else {
      lVar9 = 0;
    }
    if (DAT_14cba8288 == 0) {
      local_60 = &local_38;
      local_38 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) {
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_140d49f47:
        lVar9 = 0;
      }
      else {
        uVar2 = *puVar1;
        lVar9 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar10 == (longlong *)0x0) ||
             (((int)plVar10[2] != *(int *)(param_1 + 0xc) ||
              ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_140d49f47;
          lVar9 = *plVar10;
        }
      }
      lVar8 = FUN_140e85284();
      if (((((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) ||
           (*(int *)(param_1 + 0xc) == 0)) ||
          ((uVar2 = *puVar1, (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)))) ||
         (((plVar10 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar10 == (longlong *)0x0 ||
           (((int)plVar10[2] != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) || (lVar9 = *plVar10, lVar9 == 0))))
      goto LAB_140d49ec0;
      lVar8 = FUN_140e85284();
      if (((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) ||
         (lVar9 = FUN_140d4a076(lVar9), lVar9 == 0)) goto LAB_140d49ec0;
      cVar7 = FUN_140d4a310(lVar9,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      lVar9 = FUN_14479d2ce(puVar1);
      if (lVar9 == 0) goto LAB_140d49ec0;
      lVar8 = FUN_144a2f878();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) != lVar8 + 0x30)) goto LAB_140d49ec0;
      **(undefined1 **)(param_1 + 0x28) = *(undefined1 *)(lVar9 + 0x4f12);
      cVar7 = *(char *)(lVar9 + 0x4f11);
    }
    if (cVar7 == '\0') goto LAB_140d49ec0;
    puVar11 = &local_48;
  }
  *puVar11 = 0;
  FUN_14485c47a(puVar11,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *puVar11;
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar4 = *(int *)(param_2 + 0x58);
  *(uint *)(param_2 + 0x58) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar4 + 1U) {
    FUN_14579eadc(param_2,iVar4);
  }
  lVar9 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar9 = param_2;
  }
  lVar8 = (longlong)iVar4;
  *(undefined8 *)(lVar9 + lVar8 * 0x14) = uVar5;
  *(undefined4 *)(lVar9 + 8 + lVar8 * 0x14) = uVar3;
  *(undefined8 *)(lVar9 + 0xc + lVar8 * 0x14) = uVar6;
LAB_140d49ec0:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d4a076 FUN_140d4a076 body=47 status=ok
// SIG undefined FUN_140d4a076(void)

undefined8 FUN_140d4a076(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d4a0e8();
  if (lVar1 != 0) {
    uVar2 = FUN_140d4a22a();
    uVar2 = FUN_140d4a0a6(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140d4a0a6 FUN_140d4a0a6 body=66 status=ok
// SIG undefined FUN_140d4a0a6(void)

longlong FUN_140d4a0a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x38)) {
    uVar2 = (longlong)*(int *)(param_1 + 0x38) + 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + -0x10 + uVar2 * 8);
      if (lVar1 != 0) {
        if ((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) {
          return lVar1;
        }
      }
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return 0;
}



// FUNCTION 140d4a0e8 FUN_140d4a0e8 body=91 status=ok
// SIG undefined FUN_140d4a0e8(void)

undefined8 FUN_140d4a0e8(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140d4a137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140d4a144 FUN_140d4a144 body=228 status=ok
// SIG undefined FUN_140d4a144(void)

longlong FUN_140d4a144(void)

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
  if (DAT_14cb58c70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148655cef;
    local_40 = FUN_1464c3c5d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorScriptInterface",&DAT_14cb58c70,FUN_1464c3c36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58c70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4a22a FUN_140d4a22a body=228 status=ok
// SIG undefined FUN_140d4a22a(void)

longlong FUN_140d4a22a(void)

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
  if (DAT_14cba6778 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141843f54;
    local_38 = &LAB_148beb3f5;
    local_40 = FUN_1465c813f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/OakGame",L"OakActorScript_Echo4",&DAT_14cba6778,FUN_1465c8118);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6778;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4a310 FUN_140d4a310 body=336 status=ok
// SIG undefined FUN_140d4a310(void)

byte FUN_140d4a310(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
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
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar3 == 0) {
    bVar2 = 0;
    goto LAB_140d4a391;
  }
  lVar1 = *(longlong *)(lVar3 + 0x168);
  if (lVar1 == 0) {
LAB_140d4a453:
    bVar2 = (byte)lVar3;
    bVar4 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    lVar3 = DAT_14cba8288;
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (lVar3 = DAT_14cba8288 + 0x30,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != lVar3)) goto LAB_140d4a453;
    *param_2 = *(undefined1 *)(lVar1 + 0x4f12);
    bVar2 = *(byte *)(lVar1 + 0x4f11);
    bVar4 = 1;
  }
  bVar2 = bVar2 & bVar4;
LAB_140d4a391:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4a462 FUN_140d4a462 body=1061 status=ok
// SIG undefined FUN_140d4a462(void)

void FUN_140d4a462(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  FUN_140cfa276(param_1 + 0x850);
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x738);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x758) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x750)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x750)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x700);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x720) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x718)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x718)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x6c8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x6e8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x6e0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x6e0)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x678);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x698) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x690)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x690)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x640);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x660) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x658)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x658)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d4a904(param_1 + 0x520);
  FUN_140d4a904(param_1 + 0x408);
  plVar1 = (longlong *)(param_1 + 0x3c0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3e0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3d8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3d8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x388);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3a8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3a0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3a0)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d4a904(param_1 + 0x268);
  plVar1 = (longlong *)(param_1 + 0x220);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x240) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x238)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x238)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x1e8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x208) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x200)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x200)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d4a904(param_1 + 200);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4a888(param_1 + 0x48,1);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d4a888 FUN_140d4a888 body=124 status=ok
// SIG undefined FUN_140d4a888(void)

void FUN_140d4a888(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140d4a904 FUN_140d4a904 body=440 status=ok
// SIG undefined FUN_140d4a904(void)

void FUN_140d4a904(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)(param_1 + 0xe0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x100) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0xf8)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf8)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = (longlong *)(param_1 + 0xa0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xc0) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0xb8)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb8)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = (longlong *)(param_1 + 0x68);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x88) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x80)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x80)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
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
  }
  plVar2 = (longlong *)(param_1 + 8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (*(ushort *)(param_1 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar2);
  return;
}



// FUNCTION 140d4aabc FUN_140d4aabc body=127 status=ok
// SIG undefined FUN_140d4aabc(void)

void FUN_140d4aabc(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144837e54(param_3,0);
  lVar2 = *(longlong *)(param_3 + 0x30);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x470))(param_1);
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x480))(param_1);
    *(undefined8 *)(param_3 + 0x38) = uVar1;
    FUN_1400f0d6e(param_1,param_3,0);
    lVar2 = *(longlong *)(param_3 + 0x30);
  }
  if (*(int *)(param_3 + 0x40) != *(int *)(param_3 + 0x44)) {
    uVar1 = FUN_1407f787c();
    FUN_1446e7478(param_3 + 0x48,lVar2,uVar1,1);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}



// FUNCTION 140d4ab3c FUN_140d4ab3c body=169 status=ok
// SIG undefined FUN_140d4ab3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d4ab3c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb26408;
  if (DAT_14cb26408 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x4800,0);
    lVar4 = 0xff;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 9;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb26408;
    _DAT_14cb26410 = _DAT_14cb26410 + 0x100;
  }
  DAT_14cb26408 = (undefined8 *)*puVar2;
  _DAT_14cb26414 = _DAT_14cb26414 + 1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  *puVar2 = &PTR_FUN_14acb7aa0;
  puVar2[8] = 0xff7fffff7f7fffff;
  return;
}



// FUNCTION 140d4abe5 FUN_140d4abe5 body=73 status=ok
// SIG undefined FUN_140d4abe5(void)

void FUN_140d4abe5(longlong param_1,int param_2)

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



// FUNCTION 140d4ac2e FUN_140d4ac2e body=75 status=ok
// SIG undefined FUN_140d4ac2e(void)

void FUN_140d4ac2e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
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
      plVar4 = plVar4 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4ac79 FUN_140d4ac79 body=47 status=ok
// SIG undefined FUN_140d4ac79(void)

void FUN_140d4ac79(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4aca8 FUN_140d4aca8 body=54 status=ok
// SIG undefined FUN_140d4aca8(void)

void FUN_140d4aca8(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d4acde(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140d4acde FUN_140d4acde body=47 status=ok
// SIG undefined FUN_140d4acde(void)

void FUN_140d4acde(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4ad0d FUN_140d4ad0d body=143 status=ok
// SIG undefined FUN_140d4ad0d(void)

void FUN_140d4ad0d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar5 * 8);
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x40);
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
        if (*(longlong *)(lVar3 + 0x20) != 0) {
          FUN_1400020a8();
        }
        FUN_140d4ad9c(*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x18));
        if (*(longlong *)(lVar3 + 0x10) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar3);
      }
      lVar5 = lVar5 + 1;
    } while (param_2 != (int)lVar5);
  }
  return;
}



// FUNCTION 140d4ad9c FUN_140d4ad9c body=51 status=ok
// SIG undefined FUN_140d4ad9c(void)

void FUN_140d4ad9c(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_140d4ae72(param_1);
      FUN_140d4add0(param_1 + -0x18);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4add0 FUN_140d4add0 body=63 status=ok
// SIG undefined FUN_140d4add0(void)

void FUN_140d4add0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140d4ae10();
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
                    /* WARNING: Could not recover jumptable at 0x000140d4ae0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4ae10 FUN_140d4ae10 body=97 status=ok
// SIG undefined FUN_140d4ae10(void)

void FUN_140d4ae10(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140d4ae6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}


