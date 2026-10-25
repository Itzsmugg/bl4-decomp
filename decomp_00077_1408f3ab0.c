// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408f3ab0 FUN_1408f3ab0 body=135 status=ok
// SIG undefined FUN_1408f3ab0(void)

undefined8 * FUN_1408f3ab0(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a653230;
  param_1[5] = &PTR_FUN_14a653810;
  param_1[6] = &PTR_LAB_14a653850;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x40490fdb;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  *(uint *)((longlong)param_1 + 0x2d4) = *(uint *)((longlong)param_1 + 0x2d4) | 0x107;
  *(byte *)((longlong)param_1 + 0x2dc) = *(byte *)((longlong)param_1 + 0x2dc) | 3;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f000000;
  return param_1;
}



// FUNCTION 1408f3b38 FUN_1408f3b38 body=161 status=ok
// SIG undefined FUN_1408f3b38(void)

void FUN_1408f3b38(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x3bc0) + 0x10))(param_1 + 0x3bc0);
  bVar1 = *(byte *)(lVar2 + 0x57);
  if ((ulonglong)bVar1 < 6) {
    lVar2 = FUN_1408f3bda();
    lVar2 = FUN_1408f3cd0(lVar2 + (ulonglong)bVar1 * 0x28 + 0x138);
    if (lVar2 != 0) {
      local_30 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_28 = 0x3f800000;
      local_20 = 1;
      FUN_14038d1be(param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f3bda FUN_1408f3bda body=244 status=ok
// SIG undefined FUN_1408f3bda(void)

longlong * FUN_1408f3bda(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc6e28 == (longlong *)0x0) {
    memset(&DAT_14cbc6e30,0,0x228);
    FUN_145c1e7e2(&DAT_14cbc6e30);
    DAT_14cbc6e28 = (longlong *)&DAT_14cbc6e30;
  }
  plVar1 = DAT_14cbc6e28;
  plVar3 = DAT_14cbc6e28 + 1;
  if ((char)DAT_14cbc6e28[2] == '\0') {
LAB_1408f3c07:
    if (*plVar3 == 0) goto LAB_1408f3c74;
    cVar2 = FUN_1449e3c20(DAT_14cbc6e28);
    if (cVar2 == '\0') goto LAB_1408f3c1d;
  }
  else {
    if ((char)DAT_14cbc6e28[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1408f3c07;
    }
LAB_1408f3c74:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1408f3c1d;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_element",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1408f3c1d:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f3cd0 FUN_1408f3cd0 body=246 status=ok
// SIG undefined FUN_1408f3cd0(void)

longlong FUN_1408f3cd0(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1408f3dc6();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1408f3dc6 FUN_1408f3dc6 body=228 status=ok
// SIG undefined FUN_1408f3dc6(void)

longlong FUN_1408f3dc6(void)

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
  if (DAT_14cac14e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14786f403;
    local_40 = FUN_14637960d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"GbxNavArea",&DAT_14cac14e8,&DAT_14786f402);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac14e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f3eac FUN_1408f3eac body=241 status=ok
// SIG undefined FUN_1408f3eac(void)

undefined8 * FUN_1408f3eac(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a2700;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x16] = local_38;
  *(undefined4 *)(param_1 + 0x17) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xbc) = local_2c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x19] = local_38;
  *(undefined4 *)(param_1 + 0x1a) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xd4) = local_2c;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1d) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f3f9e FUN_1408f3f9e body=144 status=ok
// SIG undefined FUN_1408f3f9e(void)

undefined8 * FUN_1408f3f9e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b473650;
  FUN_1400b22c2(param_1 + 1,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 3,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 5,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 7,&DAT_149e02088);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1408f402e FUN_1408f402e body=201 status=ok
// SIG undefined FUN_1408f402e(void)

void FUN_1408f402e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_1408f40f8();
  lVar8 = 0;
  do {
    lVar5 = (longlong)*(int *)(param_1 + 0x8d0 + lVar8 * 0x10);
    if (lVar5 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x8c8 + lVar8 * 0x10);
      plVar6 = plVar7 + lVar5 * 2;
      do {
        if ((longlong)(int)plVar7[1] != 0) {
          lVar5 = (longlong)(int)plVar7[1] << 6;
          lVar4 = *plVar7 + 0x18;
          do {
            *(undefined8 *)(lVar4 + 8) = 0;
            plVar3 = *(longlong **)(lVar4 + 0x10);
            if (plVar3 != (longlong *)0x0) {
              *(undefined8 *)(lVar4 + 0x10) = 0;
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
            FUN_140b3e76a(lVar4);
            lVar4 = lVar4 + 0x40;
            lVar5 = lVar5 + -0x40;
          } while (lVar5 != 0);
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar6);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  FUN_1411af724(param_1);
  return;
}



// FUNCTION 1408f40f8 FUN_1408f40f8 body=89 status=ok
// SIG undefined FUN_1408f40f8(void)

void FUN_1408f40f8(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    cVar1 = '\0';
    do {
      FUN_1408f4152(param_1,cVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x4f0) + 0xbd8));
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\x04');
    FUN_140994ddc(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x4f0) + 0xbd8));
    return;
  }
  return;
}



// FUNCTION 1408f4152 FUN_1408f4152 body=78 status=ok
// SIG undefined FUN_1408f4152(void)

void FUN_1408f4152(longlong param_1,byte param_2,byte param_3)

{
  uint uVar1;
  
  if (param_2 != 4) {
    uVar1 = (uint)param_2 + (uint)param_3 * 4;
    if ((*(uint *)(param_1 + 0x908) >> (uVar1 & 0x1f) & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x908) & ~(1 << ((byte)uVar1 & 0x1f));
      *(uint *)(param_1 + 0x908) = uVar1;
      FUN_140a9d838(param_1,(ulonglong)param_2 * 0x10 + param_1 + 0x8c8,param_3,
                    CONCAT71((uint7)(uint3)(uVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 1408f41a0 FUN_1408f41a0 body=284 status=ok
// SIG undefined FUN_1408f41a0(void)

undefined * FUN_1408f41a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  undefined *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 200))(*(longlong **)(param_1 + 0x18),&local_38);
  plVar2 = plStack_30;
  puVar4 = local_38;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (puVar4 != (undefined *)0x0) {
    local_38 = (undefined *)0x0;
    plStack_30 = (longlong *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 200))(*(longlong **)(param_1 + 0x18),&local_48);
    (**(code **)(*local_48 + 0x68))(local_48,*(undefined8 *)(param_1 + 8),&local_38);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)local_40 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    plVar2 = plStack_30;
    puVar4 = local_38;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (puVar4 != (undefined *)0x0) goto LAB_1408f4249;
  }
  puVar4 = &DAT_14cbf4a90;
LAB_1408f4249:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f42e0 FUN_1408f42e0 body=726 status=ok
// SIG undefined FUN_1408f42e0(void)

undefined8 FUN_1408f42e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = 0;
  iVar5 = DAT_14cbf4b20 + -1;
  if (DAT_14cbf4b20 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    puVar4 = DAT_14cbf4b18;
    if (DAT_14cbf4b20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    lVar10 = 0;
    uVar6 = 0;
    do {
      uVar7 = ((uint)(0x19 < (ushort)puVar4[lVar10] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar10]) -
              0x20;
      uVar11 = (uint)(uVar6 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
      uVar6 = (ulonglong)
              (uVar11 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
      lVar10 = lVar10 + 1;
    } while (iVar5 != (int)lVar10);
  }
  iVar5 = FUN_1408f471e((longlong *)(param_1 + 0x40),uVar6,&DAT_14cbf4b18);
  uVar9 = 1;
  if (iVar5 == -1) goto LAB_1408f44ab;
  lVar10 = *(longlong *)(param_1 + 0x40);
  if ((lVar10 + (longlong)iVar5 * 0x68 == 0) ||
     (plVar12 = (longlong *)(lVar10 + (longlong)iVar5 * 0x68 + 0x10), plVar12 == (longlong *)0x0))
  goto LAB_1408f44ab;
  FUN_1408f45ee(&local_58,param_2);
  plVar8 = local_50;
  if (local_50 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    local_40 = local_50;
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  uVar3 = (**(code **)(*local_58 + 0x40))();
  iVar5 = FUN_1408f4668(plVar12,uVar3,local_48);
  plVar2 = local_40;
  if (iVar5 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)iVar5 * 0x28 + *plVar12;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_40 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  puVar13 = (undefined8 *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_50 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (puVar13 == (undefined8 *)0x0) goto LAB_1408f44ab;
  uVar9 = *puVar13;
  plVar12 = (longlong *)puVar13[1];
  if (plVar12 == (longlong *)0x0) {
    *param_3 = uVar9;
    plVar8 = (longlong *)param_3[1];
    if (plVar8 != (longlong *)0x0) {
      param_3[1] = 0;
LAB_1408f4566:
      uVar9 = 0;
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 != 0) goto LAB_1408f44ab;
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar5 = *piVar1;
      UNLOCK();
      goto joined_r0x0001408f45af;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *param_3 = uVar9;
    plVar8 = (longlong *)param_3[1];
    if (plVar12 == plVar8) {
      uVar9 = 0;
      LOCK();
      plVar8 = plVar12 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 != 0) goto LAB_1408f44ab;
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar5 = *piVar1;
      UNLOCK();
      plVar8 = plVar12;
joined_r0x0001408f45af:
      uVar9 = 0;
      if (iVar5 != 0) goto LAB_1408f44ab;
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else {
      param_3[1] = plVar12;
      if (plVar8 != (longlong *)0x0) goto LAB_1408f4566;
    }
  }
  uVar9 = 0;
LAB_1408f44ab:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f45b8 FUN_1408f45b8 body=42 status=ok
// SIG undefined FUN_1408f45b8(void)

void FUN_1408f45b8(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_1447053be(uVar2,uVar1);
  return;
}



// FUNCTION 1408f45ee FUN_1408f45ee body=122 status=ok
// SIG undefined FUN_1408f45ee(void)

undefined8 * FUN_1408f45ee(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_2 + 8) == 0) ||
      (plVar3 = *(longlong **)(param_2 + 0x10), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    FUN_1459a3e4e(param_1);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = plVar3;
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
  return param_1;
}



// FUNCTION 1408f4668 FUN_1408f4668 body=181 status=ok
// SIG undefined FUN_1408f4668(void)

int FUN_1408f4668(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
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
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 1408f471e FUN_1408f471e body=197 status=ok
// SIG undefined FUN_1408f471e(void)

int FUN_1408f471e(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1408f4764:
      lVar10 = (longlong)iVar1 * 0x68;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1408f47bc;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1408f47bc;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1408f47d2;
    }
  }
  return -1;
LAB_1408f47bc:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1408f47d2:
  iVar1 = *(int *)(lVar4 + 0x60 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1408f4764;
}



// FUNCTION 1408f47f2 FUN_1408f47f2 body=137 status=ok
// SIG undefined FUN_1408f47f2(void)

undefined8 * FUN_1408f47f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab70670;
  FUN_1408f487b(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a428b40;
  FUN_1448d844e(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408f487b FUN_1408f487b body=127 status=ok
// SIG undefined FUN_1408f487b(void)

void FUN_1408f487b(longlong param_1,int param_2)

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
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-10] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408f4902 FUN_1408f4902 body=885 status=ok
// SIG undefined FUN_1408f4902(void)

bool FUN_1408f4902(undefined1 *param_1,longlong *param_2)

{
  byte *pbVar1;
  float *pfVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  float *pfVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  float *pfVar11;
  float fVar12;
  
  lVar7 = param_2[8];
  if (0x16d < (int)lVar7) {
    (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
    }
    else {
      *param_1 = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
    }
    else {
      param_1[1] = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    pbVar1 = param_1 + 2;
    pbVar4 = *(byte **)param_2[1];
    if ((byte *)((undefined8 *)param_2[1])[1] < pbVar4 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,pbVar1,1);
    }
    else {
      *pbVar1 = *pbVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 8,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 8) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    pfVar2 = (float *)(param_1 + 0x10);
    pfVar6 = *(float **)param_2[1];
    if ((float *)((undefined8 *)param_2[1])[1] < pfVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pfVar2,4);
      }
      else {
        FUN_14572512c(param_2,pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x14,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    pfVar11 = (float *)(param_1 + 0x18);
    pfVar6 = *(float **)param_2[1];
    if ((float *)((undefined8 *)param_2[1])[1] < pfVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pfVar11,4);
      }
      else {
        FUN_14572512c(param_2,pfVar11);
      }
    }
    else {
      *pfVar11 = *pfVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    if (((*(byte *)(param_2 + 5) & 1) != 0) && (3 < *pbVar1)) {
      iVar9 = FUN_1448332aa(param_2,&DAT_149e3cc78);
      if (iVar9 < 0x40) {
        *pbVar1 = 0;
        fVar12 = ABS(*pfVar2);
        if ((1e-08 < fVar12) || (1e-08 < ABS(*pfVar11))) {
          bVar10 = 1;
          if (1e-08 < fVar12) {
            bVar10 = (1e-08 < ABS(*pfVar11)) * '\x02' + 1;
          }
          bVar8 = 2;
          if (1e-08 < fVar12) {
            bVar8 = bVar10;
          }
          *pbVar1 = bVar8;
        }
      }
    }
  }
  return 0x16d < (int)lVar7;
}



// FUNCTION 1408f4c78 FUN_1408f4c78 body=469 status=ok
// SIG undefined FUN_1408f4c78(void)

void FUN_1408f4c78(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0x180);
  if (lVar7 != 0) {
    bVar3 = *(byte *)(lVar7 + 0x240);
    if ((bVar3 & 0x20) != 0) {
      local_28 = 0;
      local_40 = 0;
      local_48 = 0;
      FUN_143787f6c(param_2,lVar7,0);
      lVar7 = *(longlong *)(param_1 + 0x180);
      bVar3 = *(byte *)(lVar7 + 0x240);
    }
    if ((bVar3 & 0x20) == 0) {
      if (DAT_14c872bf0 == '\0') {
        cVar4 = FUN_1408f4ed2(lVar7);
        if (cVar4 == '\0') {
          if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
            lVar6 = 0;
            do {
              lVar2 = *(longlong *)
                       (*(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar6) + 0x360);
              if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x153) & 4) != 0)) {
                DAT_14cae9140 = 1;
                local_38 = 0;
                FUN_14485c47a(&local_38,lVar7);
                goto LAB_1408f4d2e;
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar6);
          }
          FUN_14355c7f8(lVar7);
        }
        else {
          if (lVar7 == 0) {
            local_38._0_4_ = 0;
            iVar5 = 0;
            uVar1 = (uint)local_38;
          }
          else {
            uVar1 = *(uint *)(lVar7 + 0xc);
            local_38 = (ulonglong)uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            iVar5 = *(int *)(lVar7 + 0x10);
            if (*(int *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar9 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar9) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar5 = *(int *)(lVar7 + 0x10);
              bVar9 = iVar5 == 0;
              if (bVar9) {
                *(int *)(lVar7 + 0x10) = iVar8;
                iVar5 = 0;
              }
              UNLOCK();
              uVar1 = (uint)local_38;
              if (bVar9) {
                iVar5 = iVar8;
              }
            }
          }
          local_38._0_4_ = uVar1;
          local_38 = CONCAT44(iVar5,(uint)local_38);
LAB_1408f4d2e:
          FUN_1408f4e4e(&local_38);
        }
      }
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408f4e4e FUN_1408f4e4e body=132 status=ok
// SIG undefined FUN_1408f4e4e(void)

void FUN_1408f4e4e(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = DAT_14cae90e0;
  lVar4 = (longlong)(int)DAT_14cae90e8;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      cVar2 = FUN_1448a4d96(lVar5 + uVar3,param_1);
      if (cVar2 != '\0') {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 != uVar3);
  }
  iVar1 = DAT_14cae90e8;
  lVar5 = (longlong)(int)DAT_14cae90e8;
  DAT_14cae90e8 = DAT_14cae90e8 + 1;
  if (DAT_14cae90ec < DAT_14cae90e8) {
    FUN_1408f50d4(iVar1);
  }
  *(undefined8 *)(DAT_14cae90e0 + lVar5 * 8) = *param_1;
  return;
}



// FUNCTION 1408f4ed2 FUN_1408f4ed2 body=512 status=ok
// SIG undefined FUN_1408f4ed2(void)

undefined8 FUN_1408f4ed2(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
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
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = uVar4;
  if (param_1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar3 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
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
    uVar4 = *(ulonglong *)(param_1 + 0x20);
    if (uVar4 != 0) {
      iVar2 = *(int *)(lVar3 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < iVar2) ||
           (uVar6 = uVar4,
           *(longlong *)(*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar3 + 0x30)) {
          uVar6 = 0;
        }
      } while ((uVar6 == 0) && (uVar4 = *(ulonglong *)(uVar4 + 0x20), uVar4 != 0));
      if (uVar6 != 0) {
        bVar1 = *(byte *)(uVar6 + 0x152);
        uVar4 = 0;
        if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
           (DAT_14c7615aa != '\x01')) {
          uVar5 = 0;
          goto LAB_1408f4f6a;
        }
      }
    }
  }
  uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_1408f4f6a:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1408f50d4 FUN_1408f50d4 body=361 status=ok
// SIG undefined FUN_1408f50d4(void)

void FUN_1408f50d4(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = DAT_14cae90e8;
  if ((int)DAT_14cae90e8 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14cae90ec == 0) {
    uVar3 = 4;
    if (4 < DAT_14cae90e8) {
      uVar3 = DAT_14cae90e8;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)DAT_14cae90e8 * 3) >> 3) + (longlong)(int)DAT_14cae90e8 +
            0x10;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408f515d;
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
LAB_1408f515d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  DAT_14cae90ec = (int)uVar7;
  FUN_1446f8d3c(&DAT_14cae90e0,param_1,uVar7,8,4);
  return;
}



// FUNCTION 1408f523e FUN_1408f523e body=455 status=ok
// SIG undefined FUN_1408f523e(void)

void FUN_1408f523e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = FUN_1408f543e();
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar4,uVar5,0);
  }
  FUN_14083c276(lVar3,uVar5,uVar1,param_3,0);
  lVar3 = *param_2;
  uVar5 = FUN_1408f543e();
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar4,uVar5,1);
  }
  FUN_14083c276(lVar3,uVar5,0,param_3,0);
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = FUN_1408f5405();
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar4,uVar5,0);
  }
  FUN_14083c276(lVar3,uVar5,uVar1,param_3,0);
  lVar3 = *param_2;
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar5 = FUN_1408f5405();
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar4,uVar5,1);
  }
  FUN_14083c276(lVar3,uVar5,(float)iVar2,param_3,0);
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = FUN_1408f5405();
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar4,uVar5,2);
  }
  FUN_14083c276(lVar3,uVar5,uVar1,param_3,0);
  lVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = FUN_1408f5405();
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar4,uVar5,3);
  }
  FUN_14083c276(lVar3,uVar5,uVar1,param_3,0);
  return;
}



// FUNCTION 1408f5405 FUN_1408f5405 body=57 status=ok
// SIG undefined FUN_1408f5405(void)

void FUN_1408f5405(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0ef0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0ef0 = FUN_14171c317(FUN_146619cd4,uVar1,L"EAtt_WeaponBehaviorStockReload");
  }
  return;
}



// FUNCTION 1408f543e FUN_1408f543e body=57 status=ok
// SIG undefined FUN_1408f543e(void)

void FUN_1408f543e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94028 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94028 = FUN_14171c317(FUN_1465753a8,uVar1,L"EAtt_WeaponBehaviorReload");
  }
  return;
}



// FUNCTION 1408f5478 FUN_1408f5478 body=785 status=ok
// SIG undefined FUN_1408f5478(void)

void FUN_1408f5478(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1408f578a();
  lVar2 = FUN_140a3abf4(param_1);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x620) != 0)) {
    FUN_14480f766(lVar2 + 0x1618);
  }
  if ((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_1408f5573;
  lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(lVar2 + 8) & 0x10200000) != 0)) goto LAB_1408f5573;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
  if (lVar2 == 0) goto LAB_1408f5573;
  if (DAT_14cac9ca8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
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
  lVar5 = *(longlong *)(lVar2 + 0x10);
  iVar6 = *(int *)(lVar5 + 0x38);
  if ((iVar6 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
      DAT_14cac9ca8 + 0x30)) goto LAB_1408f5573;
  if (DAT_14cb5b388 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141864c34;
    local_30 = FUN_14081d0ea;
    local_38 = (code *)&LAB_146431698;
    local_48 = &LAB_1486775cb;
    local_50 = &LAB_1464cee35;
    local_58 = L"Game";
    local_60 = 0;
    local_68 = 0x10000005;
    local_70 = 0x10;
    local_78 = 0x3a20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    lVar5 = *(longlong *)(lVar2 + 0x10);
    iVar6 = *(int *)(lVar5 + 0x38);
  }
  if ((iVar6 < *(int *)(DAT_14cb5b388 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
      DAT_14cb5b388 + 0x30)) goto LAB_1408f5573;
  if (*(char *)(param_1 + 0x304) == '\x01') {
    uVar3 = FUN_1447210f0(lVar2);
    plVar4 = (longlong *)FUN_140a3d526(uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2d8))(plVar4,param_1);
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1408f5644:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1408f5644;
      uVar3 = *puVar7;
    }
  }
  lVar5 = FUN_1405e4c36(uVar3);
  if (lVar5 != 0) {
    FUN_140042148(lVar5 + 0x40,lVar2);
  }
LAB_1408f5573:
  *(undefined8 *)(param_1 + 0x620) = 0;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f578a FUN_1408f578a body=3564 status=ok
// SIG undefined FUN_1408f578a(void)

void FUN_1408f578a(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  uint *puVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined1 auStack_118 [47];
  char local_e9;
  longlong *local_e8;
  longlong *local_e0;
  uint local_d4;
  uint *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar19 = (longlong *)(param_1 + 0x280);
  plVar21 = (longlong *)(param_1 + 0x290);
  local_90 = (longlong *)&DAT_100000000;
  local_80 = 0xffffffff;
  local_78 = 0;
  iVar8 = 0;
  local_88 = plVar21;
  if (*(int *)(param_1 + 0x2a8) != 0) {
    FUN_1449c0562(&local_90);
    iVar8 = *(int *)(param_1 + 0x2a8);
  }
  local_b0 = local_80;
  lVar14 = local_b0;
  local_a8 = (longlong *)CONCAT44(local_74,local_78);
  uStack_c0 = local_90;
  local_b8 = local_88;
  local_b0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
  iVar12 = local_b0._4_4_;
  local_c8 = plVar19;
  cVar4 = param_2;
  if ((local_b0._4_4_ != iVar8) || (local_b0 = lVar14, cVar4 = param_2, local_88 != plVar21)) {
    do {
      local_e9 = cVar4;
      local_b0 = lVar14;
      lVar14 = *local_c8;
      puVar11 = (undefined8 *)(lVar14 + (longlong)iVar12 * 0x28);
      FUN_1403c747e(param_1,&local_90,*puVar11);
      lVar22 = puVar11[2];
      if (lVar22 == 0) {
        if (DAT_14cb256c8 == 0) {
          uVar6 = FUN_140cd185c();
          DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar6,L"WwiseGameParameterDef");
        }
        lVar22 = FUN_14477b664(DAT_14cb256c8);
        puVar11[2] = lVar22;
      }
      plVar24 = (longlong *)(lVar14 + (longlong)iVar12 * 0x28 + 8);
      lVar14 = puVar11[3];
      if (lVar14 == 0) {
        if ((lVar22 != 0) && (*plVar24 != 0)) {
          plVar2 = *(longlong **)(lVar22 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            puVar11[3] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar14 = FUN_144aff482(uVar6,plVar24);
            puVar11[3] = lVar14;
            if (lVar14 != 0) goto LAB_1408f643b;
          }
        }
LAB_1408f6317:
        if (local_90 != (longlong *)0x0) {
LAB_1408f6452:
          *(int *)(local_90 + 0x21) = (int)local_90[0x21] + -1;
          FUN_140d274d8(local_90);
        }
      }
      else {
LAB_1408f643b:
        plVar2 = local_90;
        if (local_90 != (longlong *)0x0) {
          if (*local_90 != -1) {
            if (puVar11[2] == 0) {
              if (DAT_14cb256c8 == 0) {
                uVar6 = FUN_140cd185c();
                DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar6,L"WwiseGameParameterDef");
              }
              lVar22 = FUN_14477b664(DAT_14cb256c8);
              puVar11[2] = lVar22;
              lVar14 = puVar11[3];
              if (((lVar14 == 0) && (lVar14 = 0, lVar22 != 0)) && (*plVar24 != 0)) {
                local_e8 = *(longlong **)(lVar22 + 0xb8);
                if ((local_e8 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*local_e8 + 0x108))(), cVar4 == '\0')) {
                  lVar14 = 0;
                }
                else {
                  uVar6 = (**(code **)(*local_e8 + 0x110))();
                  lVar14 = FUN_144aff482(uVar6,plVar24);
                }
                puVar11[3] = lVar14;
              }
            }
            FUN_147f7cc76(plVar2,*(undefined4 *)(lVar14 + 0x38));
            goto LAB_1408f6317;
          }
          goto LAB_1408f6452;
        }
      }
      local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~uStack_c0._4_4_);
      FUN_1449c0562(&uStack_c0);
      iVar12 = local_b0._4_4_;
      lVar14 = local_b0;
      cVar4 = local_e9;
    } while (((local_b0._4_4_ != iVar8) || (local_b8 != plVar21)) ||
            (param_2 = local_e9, local_c8 != plVar19));
  }
  plVar19 = (longlong *)(param_1 + 0x140);
  puVar23 = (uint *)(param_1 + 0x150);
  iVar8 = *(int *)(param_1 + 0x168);
  iVar12 = iVar8;
  if (iVar8 == 0) {
    uVar13 = 1;
    uVar17 = 0;
    iVar18 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar5 = puVar23;
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar18 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar18 = iVar8 + -1;
      }
      uVar17 = 0;
      uVar25 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar25 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar25 == uVar17) goto LAB_1408f5892;
        iVar18 = iVar18 + 0x20;
        uVar15 = puVar5[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar13 = (ulonglong)(-uVar15 & uVar15);
    uVar25 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar10) {
      iVar10 = iVar8;
    }
  }
  if (iVar10 != iVar8) {
    uVar15 = 0xffffffff;
    local_e9 = param_2;
    local_e8 = plVar19;
    local_d0 = puVar23;
    do {
      lVar14 = *plVar19;
      lVar22 = (longlong)iVar10 * 0x40;
      local_c8 = *(longlong **)(lVar14 + lVar22);
      uStack_c0 = (longlong *)((undefined8 *)(lVar14 + lVar22))[1];
      local_e0 = *(longlong **)(lVar14 + 0x10 + lVar22);
      if (local_e0 != (longlong *)0x0) {
        *(int *)(local_e0 + 0x21) = (int)local_e0[0x21] + 1;
      }
      lVar14 = lVar14 + lVar22;
      lVar22 = *(longlong *)(lVar14 + 0x18);
      local_d4 = uVar15;
      local_b8 = local_e0;
      local_b0 = lVar22;
      if ((lVar22 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        piVar1 = *(int **)(lVar22 + 0x50);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar12 = 5;
        }
        else {
          if ((char)piVar1[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60),lVar22);
            goto LAB_1408f5b0f;
          }
          iVar12 = 2;
        }
        LOCK();
        piVar1[2] = iVar12;
        UNLOCK();
      }
LAB_1408f5b0f:
      plVar19 = *(longlong **)(lVar14 + 0x20);
      local_a0 = *(longlong *)(lVar14 + 0x28);
      local_98 = *(longlong *)(lVar14 + 0x30);
      local_a8 = plVar19;
      if ((local_a0 != -1 && (plVar19 != (longlong *)0x0 && local_98 != 0)) &&
         (*plVar19 == local_a0)) {
        lVar14 = plVar19[0x21];
        *(int *)(plVar19 + 0x21) = (int)lVar14 + 1;
        plVar21 = plVar19 + 0x24;
        do {
          lVar20 = *plVar21;
          if (lVar20 == 0) break;
          plVar21 = (longlong *)(lVar20 + 0x30);
        } while (local_98 != lVar20);
        *(int *)(plVar19 + 0x21) = (int)lVar14;
        if (((int)plVar19[0x26] < 1) && (FUN_1400847bc(plVar19 + 0x17,0), (int)plVar19[0x21] == 0))
        {
          FUN_140087e46(plVar19);
          if (*plVar19 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_1408f5ba8;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar19);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar19);
          }
        }
LAB_1408f5ba8:
        if (lVar20 != 0) {
          FUN_14072d42a(&local_a8,0);
        }
      }
      param_2 = local_e9;
      if ((lVar22 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar22 + 0x50),lVar22);
      }
      puVar23 = local_d0;
      plVar19 = local_e8;
      if (((local_e0 != (longlong *)0x0) &&
          (*(int *)(local_e0 + 0x21) = (int)local_e0[0x21] + -1, (int)local_e0[0x26] < 1)) &&
         (FUN_1400847bc(local_e0 + 0x17,0), (int)local_e0[0x21] == 0)) {
        FUN_140087e46(local_e0);
        if (*local_e0 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1408f5c19;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_e0);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_e0);
        }
      }
LAB_1408f5c19:
      uVar15 = local_d4 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 0x160);
      if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
        puVar5 = puVar23;
      }
      iVar12 = *(int *)(param_1 + 0x168);
      iVar10 = (int)uVar17;
      lVar14 = (longlong)iVar10;
      uVar9 = puVar5[lVar14] & uVar15;
      if (uVar9 == 0) {
        iVar16 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar16 = iVar12 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar7 = iVar16;
        if (iVar16 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar16) {
          lVar22 = 0;
          do {
            uVar9 = puVar5[lVar14 + lVar22 + 1];
            if (uVar9 != 0) {
              uVar17 = (ulonglong)(iVar10 + (int)lVar22 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1408f5c8d;
            }
            iVar18 = iVar18 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar7 - lVar14 != lVar22);
          uVar15 = 0xffffffff;
          lVar14 = (longlong)iVar7;
        }
        uVar17 = lVar14 + 1U & 0xffffffff;
        plVar19 = local_e8;
        puVar23 = local_d0;
        iVar10 = iVar12;
        param_2 = local_e9;
      }
      else {
LAB_1408f5c8d:
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar25 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar12 <= iVar10) {
          iVar10 = iVar12;
        }
      }
    } while (iVar10 != iVar8);
  }
LAB_1408f5892:
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar14 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x180);
    }
    iVar8 = *(int *)(param_1 + 0x188);
    iVar18 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar18 = iVar8;
    }
    iVar10 = iVar12;
    if (*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x174) < iVar18 >> 2) {
      if (iVar12 == 0) {
        uVar17 = 0;
        uVar25 = 1;
        iVar8 = 0;
        iVar18 = 0;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x160);
        if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
          puVar5 = puVar23;
        }
        uVar15 = *puVar5;
        if (uVar15 == 0) {
          iVar8 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar8 = iVar12 + -1;
          }
          uVar17 = 0;
          uVar25 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar25 = uVar17;
          }
          iVar18 = 0;
          do {
            if (uVar25 == uVar17) goto LAB_1408f5d2b;
            iVar18 = iVar18 + 0x20;
            uVar15 = puVar5[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar17 = 0;
          iVar18 = 0;
        }
        uVar25 = (ulonglong)(-uVar15 & uVar15);
        uVar13 = uVar25 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar8 = (iVar18 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar12 <= iVar8) {
          iVar8 = iVar12;
        }
      }
      if (iVar8 != iVar12) {
        uVar15 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar14 + (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x140) + 0x3c + (longlong)iVar8 * 0x40) * 4) =
               0xffffffff;
          uVar15 = ~(uint)uVar25 & uVar15;
          puVar5 = *(uint **)(param_1 + 0x160);
          if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
            puVar5 = puVar23;
          }
          iVar10 = *(int *)(param_1 + 0x168);
          iVar8 = (int)uVar17;
          lVar22 = (longlong)iVar8;
          uVar9 = puVar5[lVar22] & uVar15;
          if (uVar9 == 0) {
            iVar16 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar16 = iVar10 + -1;
            }
            iVar16 = iVar16 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar7 = iVar16;
            if (iVar16 < iVar8) {
              iVar7 = iVar8;
            }
            if (iVar8 < iVar16) {
              lVar20 = 0;
              do {
                uVar9 = puVar5[lVar22 + lVar20 + 1];
                if (uVar9 != 0) {
                  uVar17 = (ulonglong)(iVar8 + (int)lVar20 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_1408f60ef;
                }
                iVar18 = iVar18 + 0x20;
                lVar20 = lVar20 + 1;
              } while (iVar7 - lVar22 != lVar20);
              uVar15 = 0xffffffff;
              lVar22 = (longlong)iVar7;
            }
            uVar17 = lVar22 + 1U & 0xffffffff;
            iVar8 = iVar10;
          }
          else {
LAB_1408f60ef:
            uVar25 = (ulonglong)(-uVar9 & uVar9);
            uVar13 = uVar25 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar8 = (iVar18 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if (iVar10 <= iVar8) {
              iVar8 = iVar10;
            }
          }
        } while (iVar8 != iVar12);
      }
    }
    else if (0 < iVar8) {
      lVar22 = 0;
      do {
        *(undefined4 *)(lVar14 + lVar22 * 4) = 0xffffffff;
        lVar22 = lVar22 + 1;
      } while (lVar22 < *(int *)(param_1 + 0x188));
      iVar10 = *(int *)(param_1 + 0x168);
    }
LAB_1408f5d2b:
    local_e9 = param_2;
    local_e8 = plVar19;
    if (iVar10 == 0) {
      uVar17 = 0;
      uVar25 = 1;
      iVar8 = 0;
      iVar12 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x160);
      if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
        puVar5 = puVar23;
      }
      uVar15 = *puVar5;
      if (uVar15 == 0) {
        iVar8 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar8 = iVar10 + -1;
        }
        uVar17 = 0;
        uVar25 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar25 = uVar17;
        }
        iVar12 = 0;
        do {
          if (uVar25 == uVar17) goto LAB_1408f64e9;
          iVar12 = iVar12 + 0x20;
          uVar15 = puVar5[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar17 = 0;
        iVar12 = 0;
      }
      uVar25 = (ulonglong)(-uVar15 & uVar15);
      uVar13 = uVar25 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar8) {
        iVar8 = iVar10;
      }
    }
    if (iVar8 < iVar10) {
      uVar15 = 0xffffffff;
      do {
        lVar14 = *local_e8;
        lVar20 = (longlong)iVar8 * 0x40;
        *(undefined8 *)(lVar14 + 0x20 + lVar20) = 0;
        *(undefined8 *)(lVar14 + 0x28 + lVar20) = 0xffffffffffffffff;
        lVar22 = *(longlong *)(lVar14 + 0x18 + lVar20);
        if ((lVar22 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(lVar22 + 0x50));
        }
        plVar21 = (longlong *)(lVar20 + lVar14 + 0x10);
        plVar19 = (longlong *)*plVar21;
        if (plVar19 != (longlong *)0x0) {
          *(int *)(plVar19 + 0x21) = (int)plVar19[0x21] + -1;
          if (((int)plVar19[0x26] < 1) && (FUN_1400847bc(plVar19 + 0x17,0), (int)plVar19[0x21] == 0)
             ) {
            FUN_140087e46(plVar19);
            if (*plVar19 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_1408f5e2c;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar19);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar19);
            }
          }
LAB_1408f5e2c:
          *plVar21 = 0;
        }
        uVar15 = uVar15 & ~(uint)uVar25;
        puVar5 = *(uint **)(param_1 + 0x160);
        if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
          puVar5 = puVar23;
        }
        iVar18 = *(int *)(param_1 + 0x168);
        iVar8 = (int)uVar17;
        lVar14 = (longlong)iVar8;
        uVar9 = puVar5[lVar14] & uVar15;
        if (uVar9 == 0) {
          iVar10 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar10 = iVar18 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar16 = iVar10;
          if (iVar10 < iVar8) {
            iVar16 = iVar8;
          }
          if (iVar10 <= iVar8) break;
          lVar22 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar9 = puVar5[lVar14 + lVar22 + 1];
            if (uVar9 != 0) break;
            lVar22 = lVar22 + 1;
            if (iVar16 - lVar14 == lVar22) goto LAB_1408f64e9;
          }
          uVar17 = (ulonglong)(iVar8 + (int)lVar22 + 1);
          uVar15 = 0xffffffff;
        }
        uVar25 = (ulonglong)(-uVar9 & uVar9);
        uVar13 = uVar25 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar18);
    }
LAB_1408f64e9:
    *(undefined4 *)(param_1 + 0x148) = 0;
    if (*(int *)(param_1 + 0x14c) < 0) {
      FUN_140b7ce44(local_e8,0);
    }
    *(undefined8 *)(param_1 + 0x170) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168) = 0;
    param_2 = local_e9;
  }
  local_50 = param_1;
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_1408f5fae:
      uVar6 = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x30);
      uVar6 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1408f5fae;
        uVar6 = *puVar11;
      }
    }
    FUN_1408f67ec(&local_c8,uVar6,1);
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
      bVar3 = false;
      goto LAB_1408f593a;
    }
  }
  else {
    local_c8 = (longlong *)0x0;
  }
  uStack_c0 = (longlong *)0x0;
  bVar3 = true;
LAB_1408f593a:
  plVar21 = uStack_c0;
  plVar19 = local_c8;
  FUN_1408f6578(&local_50,&local_c8,param_1 + 0x60);
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x120);
    lVar22 = (longlong)*(int *)(param_1 + 0x128) * 0xc0;
    do {
      if (!bVar3) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      local_90 = plVar19;
      local_88 = plVar21;
      FUN_1408f6578(&local_50,&local_90,lVar14);
      lVar14 = lVar14 + 0xc0;
      lVar22 = lVar22 + -0xc0;
    } while (lVar22 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x198) != 0) {
    lVar14 = *(longlong *)(param_1 + 400);
    lVar22 = (longlong)*(int *)(param_1 + 0x198) * 0xc0;
    do {
      if (!bVar3) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      local_60 = plVar19;
      local_58 = plVar21;
      FUN_1408f6578(&local_50,&local_60,lVar14);
      lVar14 = lVar14 + 0xc0;
      lVar22 = lVar22 + -0xc0;
    } while (lVar22 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x1a0);
    lVar22 = (longlong)*(int *)(param_1 + 0x1a8) * 0xc0;
    do {
      if (!bVar3) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      local_70 = plVar19;
      local_68 = plVar21;
      FUN_1408f6578(&local_50,&local_70,lVar14);
      lVar14 = lVar14 + 0xc0;
      lVar22 = lVar22 + -0xc0;
    } while (lVar22 != 0);
  }
  if (!bVar3) {
    LOCK();
    plVar19 = plVar21 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f6578 FUN_1408f6578 body=627 status=ok
// SIG undefined FUN_1408f6578(void)

void FUN_1408f6578(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *in_RCX;
  longlong *plVar8;
  longlong lVar9;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  ulonglong local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  ulonglong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = *in_RCX;
  if (*(char *)(param_3 + 0xa8) == '\x02') {
    plVar8 = *(longlong **)(param_3 + 0xb0);
    if ((plVar8 != (longlong *)0x0) && (*plVar8 != -1)) {
      bVar5 = 0 < (int)plVar8[0x26];
      goto LAB_1408f6660;
    }
  }
  else if ((((*(char *)(param_3 + 0xa8) == '\0') &&
            (plVar8 = *(longlong **)(param_3 + 0xb0), plVar8 != (longlong *)0x0)) && (*plVar8 != -1)
           ) && (0 < (int)plVar8[0x26])) {
    bVar5 = true;
    for (lVar9 = plVar8[0x24]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if ((((*(char *)(lVar9 + 0x21) != '\0') || (lVar4 = *(longlong *)(lVar9 + 0x18), lVar4 == 0))
          || (((DAT_14cb26569 & 1) == 0 ||
              ((*(char *)(lVar4 + 0x40) != '\x01' ||
               (iVar6 = _finite((double)*(float *)(lVar4 + 0x48)), param_1 = extraout_XMM0_Qa,
               iVar6 == 0)))))) || (*(char *)(lVar4 + 0x41) != '\0')) goto LAB_1408f6686;
    }
LAB_1408f6660:
    if (!(bool)(bVar5 ^ 1U | *param_2 == 0)) {
      FUN_14085029e(*param_2,param_3 + 0xb0);
      goto LAB_1408f6770;
    }
  }
LAB_1408f6686:
  if (*(longlong *)(param_3 + 0xb0) != 0) {
    plVar8 = (longlong *)(param_3 + 0xb0);
    iVar6 = *(int *)(*(longlong *)(param_3 + 0xb0) + 0x108);
    if (1 < iVar6) {
      if (((((*(longlong **)(lVar7 + 0x20) == (longlong *)0x0) || (*(int *)(lVar7 + 0x1c) == 0)) ||
           (uVar3 = *(uint *)(lVar7 + 0x18), (int)uVar3 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar3 ||
           (lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 == 0)))) ||
         ((*(int *)(lVar9 + 0x10) != *(int *)(lVar7 + 0x1c) ||
          (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 ||
           (lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x20) + 0x30))(), lVar7 == 0)))))) {
        FUN_140056680(local_a0,&DAT_149e01fe8);
      }
      else {
        local_90 = *(ulonglong *)(lVar7 + 0x18);
        FUN_1400021e4(&local_90,local_a0);
      }
      local_60 = &local_90;
      local_90 = local_90 & 0xffffffff00000000;
      local_78 = 0;
      local_68 = &PTR_LAB_14acb4d70;
      local_88 = &LAB_1438a6d6e;
      param_1 = FUN_1438a42ba(*plVar8);
      if (local_a0[0] != 0) {
        param_1 = FUN_1400020a8();
      }
      if (*plVar8 == 0) goto LAB_1408f6770;
      iVar6 = *(int *)(*plVar8 + 0x108);
    }
    if (iVar6 == 1) {
      FUN_14033a61a(param_1,plVar8);
    }
  }
LAB_1408f6770:
  plVar8 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f67ec FUN_1408f67ec body=620 status=ok
// SIG undefined FUN_1408f67ec(void)

undefined8 * FUN_1408f67ec(undefined8 *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  lVar4 = DAT_14cb259f8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x158) != '\x01')) {
    local_58 = param_2;
    if (DAT_14cb25a58 != DAT_14cb25a84) {
      puVar7 = &DAT_14cb25a88;
      if (DAT_14cb25a90 != (undefined *)0x0) {
        puVar7 = DAT_14cb25a90;
      }
      iVar5 = *(int *)(puVar7 + (ulonglong)
                                (DAT_14cb25a98 - 1U &
                                (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
      while (iVar5 != -1) {
        lVar9 = DAT_14cb25a50 + (longlong)iVar5 * 0x20;
        if (*(longlong *)(DAT_14cb25a50 + (longlong)iVar5 * 0x20) == param_2) {
          if ((lVar9 + 8U & 0xfffffffffffffff7) != 0) {
            *param_1 = *(undefined8 *)(lVar9 + 8);
            lVar4 = *(longlong *)(lVar9 + 0x10);
            param_1[1] = lVar4;
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            goto LAB_1408f69d1;
          }
          break;
        }
        iVar5 = *(int *)(lVar9 + 0x18);
      }
    }
    if ((param_3 != '\0') && (DAT_14cb259f8 != 0)) {
      plVar6 = (longlong *)FUN_14575602d();
      local_68 = plVar6 + 2;
      local_60 = plVar6;
      FUN_14575608e(&local_68);
      plVar6[7] = param_2;
      uVar3 = *(uint *)(param_2 + 0xc);
      *(uint *)(plVar6 + 8) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar5 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar5 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar5 = iVar8;
        }
      }
      *(int *)((longlong)plVar6 + 0x44) = iVar5;
      local_50 = &local_58;
      local_48 = &local_68;
      FUN_145756130(local_3c);
      local_78 = local_68;
      local_70 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_1408f6a5c(lVar4,&local_78);
      if (*(char *)((longlong)local_68 + 0x3c) == '\0') {
        *(undefined1 *)((longlong)local_68 + 0x3c) = 1;
        (**(code **)(*local_68 + 0x10))();
      }
      plVar6 = local_60;
      *param_1 = local_68;
      param_1[1] = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
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
LAB_1408f69d1:
      if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 1408f6a5c FUN_1408f6a5c body=131 status=ok
// SIG undefined FUN_1408f6a5c(void)

void FUN_1408f6a5c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1408f6ae0(uVar3,&local_20);
  plVar4 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f6ae0 FUN_1408f6ae0 body=105 status=ok
// SIG undefined FUN_1408f6ae0(void)

bool FUN_1408f6ae0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  lVar3 = ((longlong *)*param_2)[5];
  if (lVar3 != 0) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x38))();
    FUN_144a4394a(param_1 + (ulonglong)uVar5 * 0x10,param_2);
  }
  plVar4 = (longlong *)param_2[1];
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
  return lVar3 != 0;
}



// FUNCTION 1408f6b4a FUN_1408f6b4a body=269 status=ok
// SIG undefined FUN_1408f6b4a(void)

void FUN_1408f6b4a(longlong param_1,int param_2)

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



// FUNCTION 1408f6c58 FUN_1408f6c58 body=551 status=ok
// SIG undefined FUN_1408f6c58(void)

undefined8 * FUN_1408f6c58(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = param_2;
  if (((((int)param_3 < 4) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) &&
      (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x388) + 8))(), cVar4 != '\0')) &&
     ((*(longlong *)(param_1 + 0x390) != 0 &&
      (*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3cc))))) {
    lVar5 = param_1 + 0x3d0;
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x3d8);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x3e0) - 1U & param_3) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x398) + (longlong)iVar6 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar6 * 0x20) == param_3) {
          if (((lVar5 != 0) && (plVar9 = (longlong *)(lVar5 + 8), plVar9 != (longlong *)0x0)) &&
             (0 < *(int *)(lVar5 + 0x10))) {
            lVar10 = 0;
            lVar7 = 0;
            goto LAB_1408f6d47;
          }
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1408f6dc3;
  while( true ) {
    lVar7 = lVar7 + 1;
    lVar10 = lVar10 + 0x10;
    if (*(int *)(lVar5 + 0x10) <= lVar7) break;
LAB_1408f6d47:
    (**(code **)(**(longlong **)(*plVar9 + lVar10) + 8))(*(longlong **)(*plVar9 + lVar10),&local_58)
    ;
    cVar4 = (**(code **)*local_58)(local_58,param_4);
    plVar8 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (cVar4 != '\0') {
      uVar3 = *(undefined8 *)(*plVar9 + lVar10);
      plVar9 = *(longlong **)(*plVar9 + 8 + lVar10);
      if (plVar9 == (longlong *)0x0) {
        *local_60 = uVar3;
        plVar8 = (longlong *)local_60[1];
        if (plVar8 == (longlong *)0x0) break;
        local_60[1] = 0;
LAB_1408f6e39:
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 != 0) break;
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
        plVar9 = plVar8;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        *local_60 = uVar3;
        plVar8 = (longlong *)local_60[1];
        if (plVar9 != plVar8) {
          local_60[1] = plVar9;
          if (plVar8 != (longlong *)0x0) goto LAB_1408f6e39;
          break;
        }
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 != 0) break;
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
      }
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      break;
    }
  }
LAB_1408f6dc3:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f6e9c FUN_1408f6e9c body=181 status=ok
// SIG undefined FUN_1408f6e9c(void)

undefined8 FUN_1408f6e9c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *_Buf2;
  void *_Buf1;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))(param_1,&local_30);
  (**(code **)(*param_2 + 0x10))(param_2,&local_38);
  if (local_30 == local_38) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    if (iVar1 == iVar2) {
      iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      _Buf2 = (void *)(**(code **)(*param_2 + 0x18))(param_2);
      _Buf1 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
      iVar1 = memcmp(_Buf1,_Buf2,(longlong)iVar1);
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
      goto LAB_1408f6f2d;
    }
  }
  uVar3 = 0;
LAB_1408f6f2d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f6f78 FUN_1408f6f78 body=31 status=ok
// SIG undefined FUN_1408f6f78(void)

undefined8 FUN_1408f6f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408f6f98 FUN_1408f6f98 body=149 status=ok
// SIG undefined FUN_1408f6f98(void)

void FUN_1408f6f98(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    cVar1 = FUN_1408f702e();
    if (*(longlong *)(param_1 + 0x68) == 0) {
      if (cVar1 == '\0') {
        return;
      }
    }
    else {
      cVar2 = FUN_1408f72d4();
      if (cVar1 == '\0' && cVar2 == '\0') {
        return;
      }
    }
    *(undefined2 *)(param_1 + 0x108) = 0x100;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (0x80 < *(uint *)(param_1 + 0xe4)) {
      *(undefined4 *)(param_1 + 0xe4) = 0x80;
      FUN_1446efbd8(param_1 + 200,0);
    }
    puVar3 = (undefined8 *)(param_1 + 0xe8);
    if (0xf < *(ulonglong *)(param_1 + 0x100)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)puVar3 = 0;
  }
  return;
}



// FUNCTION 1408f702e FUN_1408f702e body=547 status=ok
// SIG undefined FUN_1408f702e(void)

byte FUN_1408f702e(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *_Buf1;
  undefined8 *puVar6;
  void *_Buf2;
  void *pvVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  ulonglong uVar13;
  undefined8 *_Dst;
  int iVar14;
  
  bVar9 = 0;
  do {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_1408f702e();
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 != 0) {
      _Dst = (undefined8 *)(param_1 + 8);
      uVar2 = *(ulonglong *)(param_1 + 0x18);
      if (uVar2 < 2) {
        if (*(longlong *)(lVar1 + 0x18) == 0) {
          iVar14 = -1;
LAB_1408f70e4:
          uVar5 = *(uint *)(lVar1 + 0x30);
          uVar13 = (ulonglong)uVar5;
          if (*(int *)(param_1 + 0x30) < 2) {
            if ((-1 < iVar14) && ((int)uVar5 < 1)) {
              *(undefined1 *)(param_1 + 0x60) = 1;
              iVar4 = -1;
LAB_1408f7177:
              if (0xf < *(ulonglong *)(param_1 + 0x20)) {
                _Dst = (undefined8 *)*_Dst;
              }
              uVar13 = (ulonglong)(iVar14 + 1);
              if (uVar2 < iVar14 + 1) {
                uVar13 = uVar2;
              }
              memmove(_Dst,(void *)(uVar13 + (longlong)_Dst),(uVar2 - uVar13) + 1);
              *(ulonglong *)(param_1 + 0x18) = uVar2 - uVar13;
              goto LAB_1408f71a9;
            }
          }
          else if ((0 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x30))) {
            pvVar12 = *(void **)(lVar1 + 0x28);
            pvVar7 = *(void **)(param_1 + 0x28);
            do {
              if (*(int *)((longlong)pvVar12 + 0x18) != *(int *)((longlong)pvVar7 + 0x18))
              goto LAB_1408f708e;
              _Buf2 = *(void **)((longlong)pvVar7 + 0x10);
              if (*(void **)((longlong)pvVar7 + 0x10) == (void *)0x0) {
                _Buf2 = pvVar7;
              }
              _Buf1 = *(void **)((longlong)pvVar12 + 0x10);
              if (*(void **)((longlong)pvVar12 + 0x10) == (void *)0x0) {
                _Buf1 = pvVar12;
              }
              iVar4 = memcmp(_Buf1,_Buf2,
                             (ulonglong)
                             (*(int *)((longlong)pvVar12 + 0x18) + 0x1fU >> 3 & 0xfffffffc));
              if (iVar4 != 0) goto LAB_1408f708e;
              pvVar7 = (void *)((longlong)pvVar7 + 0x20);
              pvVar12 = (void *)((longlong)pvVar12 + 0x20);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            iVar4 = uVar5 - 1;
            *(undefined1 *)(param_1 + 0x60) = 1;
            if (-1 < iVar14) goto LAB_1408f7177;
LAB_1408f71a9:
            bVar3 = 1;
            if (-1 < iVar4) {
              uVar8 = iVar4 + 1;
              pvVar12 = *(void **)(param_1 + 0x28);
              FUN_14026ccd7(pvVar12,uVar8);
              iVar14 = *(int *)(param_1 + 0x30) - uVar8;
              uVar5 = uVar8;
              if (iVar14 != 0) {
                memmove(pvVar12,(void *)((ulonglong)uVar8 * 0x20 + (longlong)pvVar12),
                        (longlong)iVar14 << 5);
                uVar5 = *(uint *)(param_1 + 0x30);
              }
              *(uint *)(param_1 + 0x30) = uVar5 - uVar8;
              FUN_1408f7252((undefined8 *)(param_1 + 0x28));
            }
          }
        }
      }
      else {
        uVar13 = *(ulonglong *)(lVar1 + 0x18);
        if ((uVar13 != 0) && (uVar13 < uVar2)) {
          puVar6 = _Dst;
          if (0xf < *(ulonglong *)(param_1 + 0x20)) {
            puVar6 = (undefined8 *)*_Dst;
          }
          if (*(char *)((longlong)puVar6 + uVar13) == '.') {
            uVar10 = 0;
            do {
              puVar6 = (undefined8 *)(lVar1 + 8);
              if (0xf < *(ulonglong *)(lVar1 + 0x20)) {
                puVar6 = *(undefined8 **)(lVar1 + 8);
              }
              puVar11 = _Dst;
              if (0xf < *(ulonglong *)(param_1 + 0x20)) {
                puVar11 = (undefined8 *)*_Dst;
              }
              if (*(char *)((longlong)puVar6 + uVar10) != *(char *)((longlong)puVar11 + uVar10))
              goto LAB_1408f708e;
              uVar10 = uVar10 + 1;
            } while (uVar13 != uVar10);
            iVar14 = (int)uVar13 + -1;
            goto LAB_1408f70e4;
          }
        }
      }
    }
LAB_1408f708e:
    bVar9 = bVar9 | bVar3;
    param_1 = *(longlong *)(param_1 + 0x40);
    if (param_1 == 0) {
      return bVar9 & 1;
    }
  } while( true );
}



// FUNCTION 1408f7252 FUN_1408f7252 body=129 status=ok
// SIG undefined FUN_1408f7252(void)

void FUN_1408f7252(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x7fffffffffffe00U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 5,8);
      uVar2 = uVar2 >> 5;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,0x20,8);
    }
  }
  return;
}



// FUNCTION 1408f72d4 FUN_1408f72d4 body=1873 status=ok
// SIG undefined FUN_1408f72d4(void)

ulonglong FUN_1408f72d4(uint *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  void *_Buf1;
  uint *puVar12;
  void *_Buf2;
  uint *puVar13;
  uint *puVar14;
  undefined1 *_Src;
  ulonglong uVar15;
  uint uVar16;
  void *pvVar17;
  void *pvVar18;
  longlong lVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  uint *local_e0;
  uint *local_d8;
  uint *local_d0;
  uint *local_c8;
  uint *local_c0;
  ulonglong local_b8;
  uint *local_b0;
  longlong local_a8;
  uint *local_a0;
  void *local_98;
  void *local_90;
  undefined1 local_81;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(longlong *)(param_1 + 0x14);
  uVar10 = 0xffffffff;
  puVar5 = (uint *)&DAT_ffffffff;
  local_d8 = (uint *)0x0;
  puVar14 = (uint *)0x0;
  puVar13 = (uint *)0x0;
  puVar12 = (uint *)0x0;
  puVar7 = (uint *)0x0;
  puVar23 = param_1;
  do {
    puVar6 = puVar13;
    puVar24 = *(uint **)(puVar23 + 0x10);
    puVar20 = puVar23;
    if (puVar7 != (uint *)0x0) {
      puVar13 = puVar7 + 2;
      uVar21 = *(ulonglong *)(puVar7 + 6);
      uVar22 = puVar7[0xc];
      local_c8 = (uint *)(ulonglong)uVar22;
      uVar9 = puVar23[0xc];
      local_d0 = (uint *)(ulonglong)uVar9;
      local_c0 = puVar5;
      local_b8 = uVar10;
      local_a0 = puVar12;
      if (((2 < uVar21 || 1 < (int)uVar22) && (2 < uVar21 != *(ulonglong *)(puVar23 + 6) < 3)) &&
         (1 < (int)uVar22 != (int)uVar9 < 2)) {
        uVar15 = 0xffffffff;
        if (uVar21 < 3) {
LAB_1408f74eb:
          uVar16 = 0xffffffff;
          if ((int)uVar22 < 2) {
LAB_1408f75c0:
            local_c0 = (uint *)(ulonglong)uVar16;
            puVar14 = puVar23;
            local_b8 = uVar15;
            if (puVar24 != (uint *)0x0) {
              puVar5 = (uint *)(ulonglong)uVar16;
              puVar6 = local_a0;
              uVar10 = uVar15;
              puVar20 = puVar7;
              goto LAB_1408f7475;
            }
          }
          else if (1 < (int)uVar9) {
            local_d0 = (uint *)(ulonglong)(uVar9 - 1);
            local_c8 = (uint *)(ulonglong)(uVar22 - 1);
            pvVar17 = *(void **)(puVar7 + 10);
            pvVar18 = *(void **)(puVar23 + 10);
            puVar12 = (uint *)0x0;
            local_b0 = puVar5;
            while (local_e0 = puVar12,
                  *(int *)((longlong)pvVar17 + 0x18) == *(int *)((longlong)pvVar18 + 0x18)) {
              _Buf2 = *(void **)((longlong)pvVar18 + 0x10);
              if (*(void **)((longlong)pvVar18 + 0x10) == (void *)0x0) {
                _Buf2 = pvVar18;
              }
              _Buf1 = *(void **)((longlong)pvVar17 + 0x10);
              if (*(void **)((longlong)pvVar17 + 0x10) == (void *)0x0) {
                _Buf1 = pvVar17;
              }
              local_98 = pvVar18;
              local_90 = pvVar17;
              iVar4 = memcmp(_Buf1,_Buf2,
                             (ulonglong)
                             (*(int *)((longlong)pvVar17 + 0x18) + 0x1fU >> 3 & 0xfffffffc));
              puVar12 = local_e0;
              if (((iVar4 != 0) ||
                  (puVar12 = (uint *)((longlong)local_e0 + 1), local_b0 <= local_e0)) ||
                 (local_c8 <= puVar12)) break;
              pvVar18 = (void *)((longlong)local_98 + 0x20);
              pvVar17 = (void *)((longlong)local_90 + 0x20);
              if (local_d0 <= puVar12) break;
            }
            uVar16 = (int)puVar12 - 1;
            if ((int)puVar12 != 0) goto LAB_1408f75c0;
          }
        }
        else {
          uVar8 = (int)uVar21 - 1;
          uVar16 = (int)*(ulonglong *)(puVar23 + 6) - 1;
          if ((int)uVar8 < (int)uVar16) {
            uVar16 = uVar8;
          }
          if (0 < (int)uVar16) {
            local_b8._0_4_ = (int)uVar10;
            uVar10 = 0;
            while( true ) {
              puVar12 = puVar13;
              if (0xf < *(ulonglong *)(puVar7 + 8)) {
                puVar12 = *(uint **)puVar13;
              }
              puVar11 = puVar23 + 2;
              if (0xf < *(ulonglong *)(puVar23 + 8)) {
                puVar11 = *(uint **)(puVar23 + 2);
              }
              if (*(char *)((longlong)puVar12 + uVar10) != *(char *)((longlong)puVar11 + uVar10))
              break;
              puVar12 = puVar13;
              if (0xf < *(ulonglong *)(puVar7 + 8)) {
                puVar12 = *(uint **)puVar13;
              }
              if (*(char *)((longlong)puVar12 + uVar10) == '.') {
                uVar15 = uVar10 & 0xffffffff;
              }
              if (((longlong)(int)local_b8 <= (longlong)uVar10 && -1 < (int)local_b8) ||
                 (uVar10 = uVar10 + 1, uVar16 <= uVar10)) break;
            }
            local_e0 = puVar14;
            if (0 < (int)uVar15) goto LAB_1408f74eb;
          }
        }
      }
      uVar10 = 0xffffffff;
      if (puVar14 != (uint *)0x0) {
        local_d0 = puVar24;
        puVar6 = (uint *)FUN_14001cc68(0x68,0x10);
        lVar19 = *(longlong *)(param_1 + 0x16);
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0xf;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        *(undefined ***)puVar6 = &PTR_FUN_14b4257d8;
        *(undefined1 *)(puVar6 + 0xe) = 0;
        *(undefined2 *)((longlong)puVar6 + 0x3a) = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        *(longlong *)(puVar6 + 0x16) = lVar19;
        *(undefined2 *)(puVar6 + 0x18) = 0;
        if (0 < (int)local_b8) {
          local_e0 = puVar6 + 2;
          local_d8 = (uint *)(ulonglong)((int)local_b8 + 1);
          FUN_14014a7b6(local_e0,local_d8,0);
          local_e8 = &local_81;
          FUN_1408f7a26(&local_80,puVar13,0,local_d8);
          puVar13 = local_e0;
          FUN_1401d9a90(local_e0);
          puVar13[4] = (uint)local_70;
          puVar13[5] = local_70._4_4_;
          puVar13[6] = (uint)uStack_68;
          puVar13[7] = uStack_68._4_4_;
          *puVar13 = local_80;
          puVar13[1] = uStack_7c;
          puVar13[2] = uStack_78;
          puVar13[3] = uStack_74;
          local_70 = 0;
          uStack_68 = 0xf;
          local_80 = local_80 & 0xffffff00;
          FUN_1401d9a90(&local_80);
        }
        iVar4 = (int)local_c0;
        if (-1 < (int)local_c0) {
          puVar13 = puVar6 + 10;
          uVar22 = (int)local_c0 + 1;
          local_d8 = puVar7;
          FUN_14026ccd7(*(longlong *)(puVar6 + 10),puVar6[0xc]);
          puVar6[0xc] = 0;
          if ((puVar6[0xd] != uVar22) && (FUN_1408f7a70(puVar13,uVar22), (int)puVar6[0xd] <= iVar4))
          {
            FUN_1408f7a70(puVar13,uVar22);
          }
          puVar7 = local_d8;
          puVar12 = (uint *)(ulonglong)uVar22;
          lVar19 = 0;
          local_e0 = puVar13;
          do {
            puVar13 = *(uint **)(puVar7 + 10);
            uVar22 = puVar6[0xc];
            puVar6[0xc] = uVar22 + 1;
            if (puVar6[0xd] < uVar22 + 1) {
              local_c8 = puVar12;
              local_b0 = puVar13;
              FUN_14067abd0(local_e0,uVar22);
              puVar12 = local_c8;
              puVar13 = local_b0;
            }
            pvVar17 = (void *)(*(longlong *)local_e0 + (longlong)(int)uVar22 * 0x20);
            puVar1 = (undefined8 *)(*(longlong *)local_e0 + 0x10 + (longlong)(int)uVar22 * 0x20);
            *puVar1 = 0;
            puVar1[1] = 0;
            iVar4 = *(int *)((longlong)puVar13 + lVar19 + 0x18);
            uVar22 = iVar4 + 0x1fU & 0xffffffe0;
            if (0 < (int)uVar22) {
              uVar9 = 0x80;
              if (0x80 < uVar22) {
                uVar9 = uVar22;
              }
              *(uint *)((longlong)pvVar17 + 0x1c) = uVar9;
              local_c8 = puVar12;
              local_b0 = puVar13;
              FUN_1446efbd8(pvVar17,0);
              iVar4 = *(int *)((longlong)local_b0 + lVar19 + 0x18);
              puVar12 = local_c8;
              puVar13 = local_b0;
            }
            *(int *)((longlong)pvVar17 + 0x18) = iVar4;
            if (iVar4 != 0) {
              puVar2 = *(undefined1 **)((longlong)puVar13 + lVar19 + 0x10);
              _Src = (undefined1 *)((longlong)puVar13 + lVar19);
              if (puVar2 != (undefined1 *)0x0) {
                _Src = puVar2;
              }
              pvVar18 = *(void **)((longlong)pvVar17 + 0x10);
              if (*(void **)((longlong)pvVar17 + 0x10) == (void *)0x0) {
                pvVar18 = pvVar17;
              }
              memcpy(pvVar18,_Src,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
            }
            lVar19 = lVar19 + 0x20;
            puVar12 = (uint *)((longlong)puVar12 + -1);
          } while (puVar12 != (uint *)0x0);
        }
        *(char *)(puVar6 + 0x18) = (char)puVar7[0x18];
        *(undefined1 *)((longlong)puVar6 + 0x61) = 1;
        *(undefined2 *)((longlong)puVar6 + 0x3a) = *(undefined2 *)((longlong)puVar7 + 0x3a);
        *(longlong *)(puVar6 + 0x14) = local_a8;
        *(uint **)(puVar6 + 0x12) = puVar7;
        *(longlong *)(puVar6 + 0x10) = *(longlong *)(puVar14 + 0x10);
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        lVar19 = *(longlong *)(param_1 + 0x16);
        iVar4 = *(int *)(lVar19 + 0xc0);
        *(uint *)(lVar19 + 0xc0) = iVar4 + 1U;
        if (*(uint *)(lVar19 + 0xc4) < iVar4 + 1U) {
          FUN_140be38f6((longlong *)(lVar19 + 0xb8),iVar4);
        }
        *(uint **)(*(longlong *)(lVar19 + 0xb8) + (longlong)iVar4 * 8) = puVar6;
        local_d8 = (uint *)(ulonglong)((int)local_b8 + 1);
        local_e0 = (uint *)(ulonglong)((int)local_c0 + 1);
        local_c8 = (uint *)((longlong)local_e0 << 5);
        puVar12 = local_c0;
        uVar21 = local_b8;
        puVar13 = puVar7;
        do {
          if (0 < (int)uVar21) {
            puVar12 = puVar13 + 2;
            if (0xf < *(ulonglong *)(puVar13 + 8)) {
              puVar12 = *(uint **)puVar12;
            }
            uVar21 = *(ulonglong *)(puVar13 + 6);
            puVar14 = local_d8;
            if (uVar21 < local_d8) {
              puVar14 = (uint *)uVar21;
            }
            memmove(puVar12,(undefined1 *)((longlong)puVar14 + (longlong)puVar12),
                    (uVar21 - (longlong)puVar14) + 1);
            *(ulonglong *)(puVar13 + 6) = uVar21 - (longlong)puVar14;
            puVar12 = local_c0;
            uVar21 = local_b8;
          }
          if (-1 < (int)puVar12) {
            pvVar17 = *(void **)(puVar13 + 10);
            uVar22 = (uint)local_e0;
            FUN_14026ccd7(pvVar17,(ulonglong)local_e0 & 0xffffffff);
            if (puVar13[0xc] - uVar22 != 0) {
              memmove(pvVar17,(undefined1 *)((longlong)pvVar17 + (longlong)local_c8),
                      (longlong)(int)(puVar13[0xc] - uVar22) << 5);
              uVar22 = puVar13[0xc];
            }
            puVar13[0xc] = uVar22 - (int)local_e0;
            FUN_1408f7252(puVar13 + 10);
            puVar12 = local_c0;
            uVar21 = local_b8;
          }
          *(undefined2 *)(puVar13 + 0x18) = 0;
          FUN_1408c4af8(puVar13,1);
          *(uint **)(puVar13 + 0x14) = puVar6;
          puVar13 = *(uint **)(puVar13 + 0x10);
        } while (puVar13 != (uint *)0x0);
        puVar24 = local_d0;
        if (local_a0 == (uint *)0x0) {
          if (local_a8 == 0) {
            lVar19 = 0;
            if (puVar7 != *(uint **)(*(longlong *)(param_1 + 0x16) + 0x68)) goto LAB_1408f79e6;
            puVar7 = (uint *)(*(longlong *)(param_1 + 0x16) + 0x68);
          }
          else {
            lVar19 = local_a8;
            if (*(uint **)(local_a8 + 0x48) != puVar7) {
LAB_1408f79e6:
              local_d8 = (uint *)CONCAT71((int7)((ulonglong)lVar19 >> 8),1);
              puVar5 = (uint *)&DAT_ffffffff;
              puVar14 = (uint *)0x0;
              goto LAB_1408f7475;
            }
            puVar7 = (uint *)(local_a8 + 0x48);
          }
        }
        else {
          puVar7 = local_a0 + 0x10;
        }
        *(uint **)puVar7 = puVar6;
        local_d8 = (uint *)CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
      }
      puVar5 = (uint *)&DAT_ffffffff;
      puVar14 = (uint *)0x0;
    }
LAB_1408f7475:
    puVar13 = puVar23;
    puVar11 = local_d8;
    puVar12 = puVar6;
    puVar7 = puVar20;
    puVar23 = puVar24;
    if (puVar24 == (uint *)0x0) {
      do {
        if (*(longlong *)(param_1 + 0x12) != 0) {
          bVar3 = FUN_1408f72d4();
          puVar11 = (uint *)CONCAT71((int7)((ulonglong)puVar11 >> 8),(byte)puVar11 | bVar3);
        }
        param_1 = *(uint **)(param_1 + 0x10);
      } while (param_1 != (uint *)0x0);
      if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return (ulonglong)puVar11 & 0xffffff01;
    }
  } while( true );
}



// FUNCTION 1408f7a26 FUN_1408f7a26 body=72 status=ok
// SIG undefined FUN_1408f7a26(void)

undefined8 *
FUN_1408f7a26(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = param_2[2] - param_3;
  if (param_3 <= (ulonglong)param_2[2]) {
    if (uVar1 < param_4) {
      param_4 = uVar1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_140cd1a74(param_1,(longlong)param_2 + param_3,param_4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14709e5c0();
}



// FUNCTION 1408f7a70 FUN_1408f7a70 body=214 status=ok
// SIG undefined FUN_1408f7a70(void)

void FUN_1408f7a70(longlong param_1,int param_2)

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



// FUNCTION 1408f7b46 FUN_1408f7b46 body=117 status=ok
// SIG undefined FUN_1408f7b46(void)

void FUN_1408f7b46(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1408f7bbc();
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x140) * 0x4d0;
    lVar1 = *(longlong *)(param_1 + 0x138) + 0xe8;
    do {
      FUN_14019c9f2(lVar1 + -0x10,param_2);
      FUN_14019c9f2(lVar1,param_2);
      FUN_14019c9f2(lVar1 + -0x20,param_2);
      lVar1 = lVar1 + 0x4d0;
      lVar2 = lVar2 + -0x4d0;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1408f7bbc FUN_1408f7bbc body=4013 status=ok
// SIG undefined FUN_1408f7bbc(void)

void FUN_1408f7bbc(longlong param_1,longlong param_2)

{
  longlong *_Src;
  void *pvVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined4 uVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulonglong uVar32;
  int *piVar33;
  undefined8 *puVar34;
  uint uVar35;
  int iVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  undefined8 *puVar40;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [12];
  longlong local_148;
  ulonglong local_140;
  int local_138;
  int *local_130;
  undefined8 uStack_128;
  void *local_120;
  ulonglong uStack_118;
  void *local_110;
  ulonglong uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined2 local_d0;
  undefined6 uStack_ce;
  undefined2 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  uint local_8c;
  int iStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  uint local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar26 = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  iStack_88 = -1;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  lVar29 = *(longlong *)(param_1 + 0xf8);
  local_1b8 = param_2;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar39 = (longlong)*(int *)(param_1 + 0x100) * 0xf0 + lVar29;
    do {
      iVar36 = iStack_88;
      uVar19 = uStack_b0;
      lVar37 = *(longlong *)(lVar29 + 0x60);
      if (lVar37 != 0) {
        if (local_84 == 0) {
          iVar36 = (int)uStack_b0;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
          if (uStack_b0._4_4_ == iVar36) {
            FUN_14488f93c(&local_b8,uVar19 & 0xffffffff);
          }
          iVar22 = local_90;
          if (local_90 == 0) {
            iVar17 = -1;
          }
          else {
            iVar17 = local_90 + 0x1e;
            if (-1 < local_90 + -1) {
              iVar17 = local_90 + -1;
            }
            iVar17 = iVar17 >> 5;
          }
          iVar23 = local_90 + 1;
          iVar28 = local_90 + 0x1f;
          if (-1 < local_90) {
            iVar28 = local_90;
          }
          if (iVar28 >> 5 == iVar17) {
            local_90 = iVar23;
          }
          else {
            if ((int)local_8c <= local_90) {
              if (local_90 + 0x20U < 0xa0) {
                local_8c = 0x80;
              }
              else {
                uVar25 = local_90 + 0x20U >> 5;
                if (local_8c + 0x1f < 0xa0) {
                  uVar35 = 4;
                  if (4 < uVar25) {
                    uVar35 = uVar25;
                  }
                }
                else {
                  uVar35 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
                }
                uVar19 = FUN_144a3809e(uVar35 << 2,0);
                iVar17 = (int)(uVar19 >> 2);
                local_8c = 0xffffffe0;
                if ((int)uVar25 <= iVar17) {
                  local_8c = iVar17 << 5;
                }
              }
              FUN_1446efbd8(local_a8,local_90);
              iVar23 = local_90 + 1;
            }
            iVar17 = iVar23 + 0x1f;
            if (-1 < iVar23) {
              iVar17 = iVar23;
            }
            local_90 = iVar23;
            if (iVar23 % 0x20 != 0) {
              puVar20 = local_98;
              if (local_98 == (uint *)0x0) {
                puVar20 = local_a8;
              }
              bVar21 = -(char)(iVar23 % 0x20);
              puVar20[iVar17 >> 5] = (puVar20[iVar17 >> 5] << (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
            }
          }
          lVar18 = (longlong)iVar36;
          puVar20 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar20 = local_a8;
          }
          bVar21 = (byte)iVar22 & 0x1f;
          puVar20[iVar28 >> 5] =
               puVar20[iVar28 >> 5] & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
        }
        else {
          lVar18 = (longlong)iStack_88;
          iStack_88 = *(int *)(local_b8 + 4 + lVar18 * 0x60);
          local_84 = local_84 + -1;
          if (local_84 != 0) {
            *(undefined4 *)(local_b8 + (longlong)iStack_88 * 0x60) = 0xffffffff;
          }
        }
        puVar20 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar20 = local_a8;
        }
        iVar22 = iVar36 + 0x1f;
        if (-1 < iVar36) {
          iVar22 = iVar36;
        }
        puVar20[iVar22 >> 5] = puVar20[iVar22 >> 5] | 1 << ((byte)iVar36 & 0x1f);
        lVar18 = lVar18 * 0x60;
        _Src = (longlong *)(local_b8 + lVar18);
        lVar37 = *(longlong *)(lVar37 + 0x10);
        *(longlong *)(local_b8 + lVar18) = lVar37;
        *(undefined8 *)(local_b8 + 8 + lVar18) = 0;
        iVar22 = *(int *)(lVar29 + 0xa0);
        pvVar1 = *(void **)(lVar29 + 0x98);
        *(int *)(local_b8 + 0x10 + lVar18) = iVar22;
        if ((longlong)iVar22 == 0) {
          *(undefined4 *)((longlong)_Src + 0x14) = 0;
        }
        else {
          FUN_1408f8bc0(local_b8 + lVar18 + 8,iVar22,0);
          memcpy((void *)_Src[1],pvVar1,(longlong)iVar22 * 0x70);
          lVar37 = *_Src;
        }
        uVar26 = *(undefined4 *)(lVar29 + 0xa8);
        uVar3 = *(undefined4 *)(lVar29 + 0xac);
        uVar4 = *(undefined4 *)(lVar29 + 0xb0);
        uVar5 = *(undefined4 *)(lVar29 + 0xb4);
        uVar6 = *(undefined4 *)(lVar29 + 0xb8);
        uVar7 = *(undefined4 *)(lVar29 + 0xbc);
        uVar8 = *(undefined4 *)(lVar29 + 0xc0);
        uVar9 = *(undefined4 *)(lVar29 + 0xc4);
        uVar10 = *(undefined4 *)(lVar29 + 200);
        uVar11 = *(undefined4 *)(lVar29 + 0xcc);
        uVar12 = *(undefined4 *)(lVar29 + 0xd0);
        uVar13 = *(undefined4 *)(lVar29 + 0xd4);
        uVar14 = *(undefined4 *)(lVar29 + 0xd6);
        uVar15 = *(undefined4 *)(lVar29 + 0xda);
        uVar16 = *(undefined4 *)(lVar29 + 0xde);
        *(undefined4 *)((longlong)_Src + 0x42) = *(undefined4 *)(lVar29 + 0xd2);
        *(undefined4 *)((longlong)_Src + 0x46) = uVar14;
        *(undefined4 *)((longlong)_Src + 0x4a) = uVar15;
        *(undefined4 *)((longlong)_Src + 0x4e) = uVar16;
        *(undefined4 *)(_Src + 7) = uVar10;
        *(undefined4 *)((longlong)_Src + 0x3c) = uVar11;
        *(undefined4 *)(_Src + 8) = uVar12;
        *(undefined4 *)((longlong)_Src + 0x44) = uVar13;
        *(undefined4 *)(_Src + 5) = uVar6;
        *(undefined4 *)((longlong)_Src + 0x2c) = uVar7;
        *(undefined4 *)(_Src + 6) = uVar8;
        *(undefined4 *)((longlong)_Src + 0x34) = uVar9;
        *(undefined4 *)(_Src + 3) = uVar26;
        *(undefined4 *)((longlong)_Src + 0x1c) = uVar3;
        *(undefined4 *)(_Src + 4) = uVar4;
        *(undefined4 *)((longlong)_Src + 0x24) = uVar5;
        *(undefined4 *)(_Src + 0xb) = 0xffffffff;
        uVar25 = (uint)((ulonglong)lVar37 >> 0x10);
        uVar35 = (uint)lVar37 & 0xffff;
        uVar25 = ((uint)lVar37 << 0x10 | uVar35) + (int)((ulonglong)lVar37 >> 0x20) +
                 (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar35 >> 4);
        uVar35 = (int)uStack_b0 - local_84;
        if (1 < uVar35) {
          puVar24 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar24 = local_80;
          }
          iVar22 = *(int *)(puVar24 + (ulonglong)(local_70 - 1 & uVar25) * 4);
          while (iVar22 != -1) {
            pvVar1 = (void *)(local_b8 + (longlong)iVar22 * 0x60);
            if (*(longlong *)(local_b8 + (longlong)iVar22 * 0x60) == lVar37) {
              if (*(longlong *)((longlong)pvVar1 + 8) != 0) {
                FUN_1400020a8();
              }
              memmove(pvVar1,_Src,0x58);
              FUN_1474ff6ca(&local_b8,iVar36);
              goto LAB_1408f8150;
            }
            iVar22 = *(int *)((longlong)pvVar1 + 0x58);
          }
        }
        uVar31 = 1;
        if (3 < uVar35) {
          uVar19 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
          lVar37 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar37 == 0; lVar37 = lVar37 + -1) {
            }
          }
          uVar31 = 1 << ((byte)lVar37 & 0x1f);
        }
        if (((int)uVar35 < 1) || ((int)uVar31 <= (int)local_70)) {
          uVar25 = local_70 - 1 & uVar25;
          *(uint *)((longlong)_Src + 0x5c) = uVar25;
          puVar24 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar24 = local_80;
          }
          *(undefined4 *)(_Src + 0xb) =
               *(undefined4 *)(puVar24 + ((longlong)(int)local_70 - 1U & (longlong)(int)uVar25) * 4)
          ;
          puVar24 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar24 = local_80;
          }
          *(int *)(puVar24 + ((longlong)(int)local_70 - 1U & (longlong)(int)uVar25) * 4) = iVar36;
        }
        else {
          local_70 = uVar31;
          if (local_78 != (undefined1 *)0x0) {
            FUN_1446efa72(&local_78,0,0,4);
          }
          uVar25 = local_70;
          if (local_70 == 1) {
            if (local_78 != (undefined1 *)0x0) {
              FUN_1446efa72(&local_78,0,0,4);
            }
LAB_1408f7ed3:
            uVar35 = 0;
            do {
              puVar24 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar24 = local_80;
              }
              *(undefined4 *)(puVar24 + (ulonglong)(local_70 + 0x7fffffff & uVar35) * 4) =
                   0xffffffff;
              uVar35 = uVar35 + 1;
            } while (uVar25 != uVar35);
          }
          else {
            if (local_70 == 0) goto LAB_1408f8150;
            FUN_1446efa72(&local_78,0,local_70,4);
            if (0 < (int)uVar25) goto LAB_1408f7ed3;
          }
          if (local_90 == 0) {
            uVar19 = 0;
            uVar38 = 1;
            iVar36 = 0;
            iVar22 = 0;
          }
          else {
            puVar20 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar20 = local_a8;
            }
            uVar25 = *puVar20;
            if (uVar25 == 0) {
              iVar36 = local_90 + 0x1e;
              if (-1 < local_90 + -1) {
                iVar36 = local_90 + -1;
              }
              uVar19 = 0;
              uVar35 = iVar36 >> 5;
              if (iVar36 >> 5 < 1) {
                uVar35 = 0;
              }
              iVar22 = 0;
              do {
                if (uVar35 == uVar19) goto LAB_1408f8150;
                iVar22 = iVar22 + 0x20;
                uVar25 = puVar20[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar25 == 0);
            }
            else {
              uVar19 = 0;
              iVar22 = 0;
            }
            uVar38 = (ulonglong)(-uVar25 & uVar25);
            uVar32 = uVar38 * 2 + 1;
            lVar37 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar37 == 0; lVar37 = lVar37 + -1) {
              }
            }
            iVar36 = (iVar22 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
            if (local_90 <= iVar36) {
              iVar36 = local_90;
            }
          }
          if (iVar36 < local_90) {
            uVar25 = 0xffffffff;
            do {
              lVar37 = (longlong)iVar36 * 0x60;
              uVar2 = *(undefined8 *)(local_b8 + lVar37);
              uVar35 = (uint)((ulonglong)uVar2 >> 0x10);
              uVar31 = (uint)uVar2 & 0xffff;
              uVar32 = (longlong)
                       (int)(((uint)uVar2 << 0x10 | uVar31) + (int)((ulonglong)uVar2 >> 0x20) +
                             (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar31 >> 4)) &
                       (longlong)(int)local_70 - 1U;
              iVar17 = (int)uVar32;
              *(int *)(local_b8 + 0x5c + lVar37) = iVar17;
              puVar24 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar24 = local_80;
              }
              *(undefined4 *)(local_b8 + 0x58 + lVar37) =
                   *(undefined4 *)(puVar24 + ((longlong)(int)local_70 - 1U & uVar32) * 4);
              puVar24 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar24 = local_80;
              }
              *(int *)(puVar24 + ((longlong)iVar17 & (longlong)(int)local_70 - 1U) * 4) = iVar36;
              uVar25 = ~(uint)uVar38 & uVar25;
              puVar20 = local_98;
              if (local_98 == (uint *)0x0) {
                puVar20 = local_a8;
              }
              iVar36 = (int)uVar19;
              lVar37 = (longlong)iVar36;
              uVar35 = puVar20[lVar37] & uVar25;
              if (uVar35 == 0) {
                iVar17 = local_90 + 0x1e;
                if (-1 < local_90 + -1) {
                  iVar17 = local_90 + -1;
                }
                iVar17 = iVar17 >> 5;
                iVar23 = iVar17;
                if (iVar17 < iVar36) {
                  iVar23 = iVar36;
                }
                if (iVar17 <= iVar36) break;
                lVar18 = 0;
                while( true ) {
                  iVar22 = iVar22 + 0x20;
                  uVar35 = puVar20[lVar37 + lVar18 + 1];
                  if (uVar35 != 0) break;
                  lVar18 = lVar18 + 1;
                  if (iVar23 - lVar37 == lVar18) goto LAB_1408f8150;
                }
                uVar19 = (ulonglong)(iVar36 + (int)lVar18 + 1);
                uVar25 = 0xffffffff;
              }
              uVar38 = (ulonglong)(-uVar35 & uVar35);
              uVar32 = uVar38 * 2 + 1;
              lVar37 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                }
              }
              iVar36 = (iVar22 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
            } while (iVar36 < local_90);
          }
        }
      }
LAB_1408f8150:
      lVar29 = lVar29 + 0xf0;
    } while (lVar29 != lVar39);
    uVar26 = *(undefined4 *)(param_1 + 0x100);
    lVar29 = *(longlong *)(param_1 + 0xf8);
  }
  local_1b0 = (longlong *)(param_1 + 0xf8);
  iVar36 = *(int *)(param_1 + 0x104);
  FUN_1408f8ca5(lVar29,uVar26);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((iVar36 < 0) && (*(int *)(param_1 + 0x104) != 0)) {
    FUN_1474ff744(local_1b0);
  }
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar29 = *(longlong *)(param_1 + 0xe8);
    lVar39 = (longlong)*(int *)(param_1 + 0xf0) * 0x34 + lVar29;
    do {
      lVar37 = local_1b8;
      FUN_14019c9f2(lVar29,local_1b8);
      FUN_14019c9f2((longlong *)(lVar29 + 0x10),lVar37);
      puVar30 = &DAT_14c846480;
      puVar40 = local_1a8;
      for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
        *puVar40 = *puVar30;
        puVar30 = puVar30 + 1;
        puVar40 = puVar40 + 1;
      }
      local_148 = 0;
      local_138 = -1;
      local_110 = (void *)0x0;
      uStack_108 = 0;
      local_120 = (void *)0x0;
      uStack_118 = 0;
      local_130 = (int *)0x0;
      uStack_128 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = CONCAT44(local_e8._4_4_,0xffffffff);
      local_d0 = (undefined2)DAT_14c8464f0;
      uStack_ce = (undefined6)((ulonglong)DAT_14c8464f0 >> 0x10);
      local_e0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_d8 = (undefined2)(undefined4)DAT_14c8464e8;
      uStack_d6 = (undefined2)((uint)(undefined4)DAT_14c8464e8 >> 0x10);
      uStack_d4 = DAT_14c8464e8._4_4_;
      local_c8 = 0;
      uVar25 = *(uint *)(lVar29 + 8);
      if ((int)uVar25 < 0) {
        uVar35 = 0xffffffff;
        if ((((~uVar25 & 0x7fffffff) != 0) && (uVar25 = (int)(uVar25 * 2) >> 1, -1 < (int)uVar25))
           && ((int)uVar25 < *(int *)(local_1b8 + 0x88))) {
          puVar20 = (uint *)((ulonglong)uVar25 * 4 + *(longlong *)(local_1b8 + 0x80));
          goto LAB_1408f8311;
        }
      }
      else {
        puVar20 = (uint *)(lVar29 + 0xc);
LAB_1408f8311:
        uVar35 = *puVar20;
      }
      local_140 = (ulonglong)uVar35;
      uVar25 = *(uint *)(lVar29 + 0x18);
      if ((int)uVar25 < 0) {
        if ((((~uVar25 & 0x7fffffff) != 0) && (uVar25 = (int)(uVar25 * 2) >> 1, -1 < (int)uVar25))
           && ((int)uVar25 < *(int *)(local_1b8 + 0x88))) {
          piVar33 = (int *)((ulonglong)uVar25 * 4 + *(longlong *)(local_1b8 + 0x80));
          goto LAB_1408f832c;
        }
      }
      else {
        piVar33 = (int *)(lVar29 + 0x1c);
LAB_1408f832c:
        if ((uVar35 != 0xffffffff) && (iVar36 = *piVar33, iVar36 != -1)) {
          iVar22 = *(int *)(lVar29 + 0x20);
          if (*(int *)(lVar29 + 0x20) < 2) {
            iVar22 = 1;
          }
          uStack_128 = 1;
          FUN_1408f8cfa(&local_130,0);
          *local_130 = iVar36;
          piVar33 = (int *)((longlong)iVar36 * 4 + *(longlong *)(local_1b8 + 0x90));
          uVar25 = iVar22 + 1;
          lVar37 = local_1b8;
          do {
            uVar19 = uStack_128;
            iVar36 = *piVar33;
            if ((longlong)iVar36 == -1) break;
            lVar18 = (longlong)(int)uStack_128;
            uVar35 = (int)uStack_128 + 1;
            uStack_128 = CONCAT44(uStack_128._4_4_,uVar35);
            if (uStack_128._4_4_ < uVar35) {
              FUN_1408f8cfa(&local_130,uVar19 & 0xffffffff);
              lVar37 = local_1b8;
            }
            local_130[lVar18] = iVar36;
            piVar33 = (int *)((longlong)iVar36 * 4 + *(longlong *)(lVar37 + 0x90));
            uVar25 = uVar25 - 1;
          } while (1 < uVar25);
          if (2 < (int)uStack_128) {
            local_138 = (int)uStack_128;
            if ((int)uStack_b0 != local_84) {
              lVar37 = *(longlong *)(lVar29 + 0x10);
              uVar25 = (uint)((ulonglong)lVar37 >> 0x10);
              uVar35 = (uint)lVar37 & 0xffff;
              puVar24 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar24 = local_80;
              }
              iVar36 = *(int *)(puVar24 +
                               (ulonglong)
                               (local_70 - 1 &
                               (int)((ulonglong)lVar37 >> 0x20) + ((uint)lVar37 << 0x10 | uVar35) +
                               (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar35 >> 4)) * 4);
              while (iVar36 != -1) {
                lVar18 = local_b8 + (longlong)iVar36 * 0x60;
                if (*(longlong *)(local_b8 + (longlong)iVar36 * 0x60) == lVar37) {
                  if ((lVar18 != 0) && (lVar18 != -8)) {
                    FUN_1408f8b6a(&local_110);
                    uVar2 = *(undefined8 *)(lVar18 + 0x42);
                    uStack_100 = *(undefined4 *)(lVar18 + 0x18);
                    uStack_fc = *(undefined4 *)(lVar18 + 0x1c);
                    local_f8 = *(undefined8 *)(lVar18 + 0x20);
                    uStack_f0 = *(undefined8 *)(lVar18 + 0x28);
                    local_e8 = *(undefined8 *)(lVar18 + 0x30);
                    local_e0 = *(undefined8 *)(lVar18 + 0x38);
                    uStack_d8 = (undefined2)*(undefined8 *)(lVar18 + 0x40);
                    uStack_d6 = (undefined2)uVar2;
                    uStack_d4 = (undefined4)((ulonglong)uVar2 >> 0x10);
                    local_d0 = (undefined2)((ulonglong)uVar2 >> 0x30);
                    uStack_ce = (undefined6)*(undefined8 *)(lVar18 + 0x4a);
                    local_c8 = (undefined2)((ulonglong)*(undefined8 *)(lVar18 + 0x4a) >> 0x30);
                  }
                  break;
                }
                iVar36 = *(int *)(lVar18 + 0x58);
              }
            }
            local_148 = lVar29;
            iVar36 = *(int *)(param_1 + 0x100);
            *(uint *)(param_1 + 0x100) = iVar36 + 1U;
            if (*(uint *)(param_1 + 0x104) < iVar36 + 1U) {
              FUN_1408f8f9a(local_1b0,iVar36);
            }
            piVar33 = local_130;
            lVar37 = *local_1b0;
            lVar27 = (longlong)iVar36 * 0xf0;
            puVar30 = (undefined8 *)(lVar37 + lVar27);
            puVar40 = local_1a8;
            puVar34 = puVar30;
            for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
              *puVar34 = *puVar40;
              puVar40 = puVar40 + 1;
              puVar34 = puVar34 + 1;
            }
            *(int *)(lVar37 + 0x70 + lVar27) = local_138;
            *(undefined8 *)(lVar37 + 0x78 + lVar27) = 0;
            lVar18 = (longlong)(int)uStack_128;
            *(int *)(lVar37 + 0x80 + lVar27) = (int)uStack_128;
            if (lVar18 == 0) {
              *(undefined4 *)((longlong)puVar30 + 0x84) = 0;
            }
            else {
              puVar40 = (undefined8 *)(lVar37 + lVar27 + 0x78);
              FUN_1408f8e5c(puVar40,uStack_128 & 0xffffffff,0);
              memcpy((void *)*puVar40,piVar33,lVar18 << 2);
            }
            pvVar1 = local_120;
            puVar30[0x11] = 0;
            lVar37 = (longlong)(int)uStack_118;
            *(int *)(puVar30 + 0x12) = (int)uStack_118;
            if (lVar37 == 0) {
              *(undefined4 *)((longlong)puVar30 + 0x94) = 0;
            }
            else {
              FUN_144756262(puVar30 + 0x11,uStack_118 & 0xffffffff,0);
              memcpy((void *)puVar30[0x11],pvVar1,lVar37 * 0x60);
            }
            pvVar1 = local_110;
            puVar30[0x13] = 0;
            lVar37 = (longlong)(int)uStack_108;
            *(int *)(puVar30 + 0x14) = (int)uStack_108;
            if (lVar37 == 0) {
              *(undefined4 *)((longlong)puVar30 + 0xa4) = 0;
            }
            else {
              FUN_1408f8bc0(puVar30 + 0x13,uStack_108 & 0xffffffff,0);
              memcpy((void *)puVar30[0x13],pvVar1,lVar37 * 0x70);
            }
            *(ulonglong *)((longlong)puVar30 + 0xd2) =
                 CONCAT26(local_d0,CONCAT42(uStack_d4,uStack_d6));
            *(ulonglong *)((longlong)puVar30 + 0xda) = CONCAT26(local_c8,uStack_ce);
            puVar30[0x19] = local_e0;
            puVar30[0x1a] = CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
            puVar30[0x17] = uStack_f0;
            puVar30[0x18] = local_e8;
            *(undefined4 *)(puVar30 + 0x15) = uStack_100;
            *(undefined4 *)((longlong)puVar30 + 0xac) = uStack_fc;
            *(undefined4 *)(puVar30 + 0x16) = (undefined4)local_f8;
            *(undefined4 *)((longlong)puVar30 + 0xb4) = local_f8._4_4_;
          }
        }
      }
      if (local_110 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_120 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_130 != (int *)0x0) {
        FUN_1400020a8();
      }
      lVar29 = lVar29 + 0x34;
    } while (lVar29 != lVar39);
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 == 0) {
    uVar19 = 0;
    uVar38 = 1;
    iVar36 = 0;
    iVar22 = 0;
  }
  else {
    puVar20 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar20 = local_a8;
    }
    uVar25 = *puVar20;
    if (uVar25 == 0) {
      iVar36 = local_90 + 0x1e;
      if (-1 < local_90 + -1) {
        iVar36 = local_90 + -1;
      }
      uVar19 = 0;
      uVar38 = (ulonglong)(uint)(iVar36 >> 5);
      if (iVar36 >> 5 < 1) {
        uVar38 = uVar19;
      }
      iVar22 = 0;
      do {
        if (uVar38 == uVar19) goto LAB_1408f87d6;
        iVar22 = iVar22 + 0x20;
        uVar25 = puVar20[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar19 = 0;
      iVar22 = 0;
    }
    uVar38 = (ulonglong)(-uVar25 & uVar25);
    uVar32 = uVar38 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    iVar36 = (iVar22 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    if (local_90 <= iVar36) {
      iVar36 = local_90;
    }
  }
  if (iVar36 < local_90) {
    uVar25 = 0xffffffff;
    iVar17 = local_90;
    do {
      if (*(longlong *)(local_b8 + 8 + (longlong)iVar36 * 0x60) != 0) {
        FUN_1400020a8();
        iVar17 = local_90;
      }
      uVar25 = uVar25 & ~(uint)uVar38;
      puVar20 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar20 = local_a8;
      }
      iVar36 = (int)uVar19;
      lVar29 = (longlong)iVar36;
      uVar35 = puVar20[lVar29] & uVar25;
      if (uVar35 == 0) {
        iVar23 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar23 = iVar17 + -1;
        }
        iVar23 = iVar23 >> 5;
        iVar28 = iVar23;
        if (iVar23 < iVar36) {
          iVar28 = iVar36;
        }
        if (iVar23 <= iVar36) break;
        lVar39 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar35 = puVar20[lVar29 + lVar39 + 1];
          if (uVar35 != 0) break;
          lVar39 = lVar39 + 1;
          if (iVar28 - lVar29 == lVar39) goto LAB_1408f87d6;
        }
        uVar19 = (ulonglong)(iVar36 + (int)lVar39 + 1);
        uVar25 = 0xffffffff;
      }
      uVar38 = (ulonglong)(-uVar35 & uVar35);
      uVar32 = uVar38 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar36 = (iVar22 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    } while (iVar36 < iVar17);
  }
LAB_1408f87d6:
  uVar19 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar19 != 0) {
    FUN_1448fc38a(&local_b8,0);
  }
  iStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408f8b6a FUN_1408f8b6a body=85 status=ok
// SIG undefined FUN_1408f8b6a(void)

undefined8 * FUN_1408f8b6a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1408f8bc0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408f8bc0 FUN_1408f8bc0 body=229 status=ok
// SIG undefined FUN_1408f8bc0(void)

void FUN_1408f8bc0(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1408f8ca5 FUN_1408f8ca5 body=85 status=ok
// SIG undefined FUN_1408f8ca5(void)

void FUN_1408f8ca5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
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
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408f8cfa FUN_1408f8cfa body=353 status=ok
// SIG undefined FUN_1408f8cfa(void)

void FUN_1408f8cfa(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408f8d7f;
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
LAB_1408f8d7f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 1408f8e5c FUN_1408f8e5c body=317 status=ok
// SIG undefined FUN_1408f8e5c(void)

void FUN_1408f8e5c(longlong param_1,int param_2,int param_3)

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
    uVar5 = (longlong)param_2 * 4;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408f8eca;
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
LAB_1408f8eca:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1408f8f9a FUN_1408f8f9a body=271 status=ok
// SIG undefined FUN_1408f8f9a(void)

void FUN_1408f8f9a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xf0;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1408f90aa FUN_1408f90aa body=186 status=ok
// SIG undefined FUN_1408f90aa(void)

int FUN_1408f90aa(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_1408f9166(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1408f912a;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1408f912a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f9166 FUN_1408f9166 body=104 status=ok
// SIG undefined FUN_1408f9166(void)

ulonglong FUN_1408f9166(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 1408f91ce FUN_1408f91ce body=1144 status=ok
// SIG undefined FUN_1408f91ce(void)

void FUN_1408f91ce(longlong param_1,uint *param_2,longlong *param_3,undefined1 param_4)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((*param_3 != 0) && (param_2[1] != 0)) && (uVar1 = *param_2, -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0)) &&
      ((*(uint *)(plVar11 + 2) == param_2[1] &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar8 = *plVar11, lVar8 != 0)))))))) {
    lVar10 = *(longlong *)(*param_3 + 0x30);
    uVar5 = FUN_1408f965a();
    cVar3 = FUN_1448093f4(lVar10,uVar5);
    if ((cVar3 != '\0') && (lVar10 != 0)) {
      FUN_1408f9d2c(param_1,lVar10,lVar8);
      *(undefined1 *)(param_1 + 0x17f) = *(undefined1 *)(lVar10 + 0x33c);
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x174) = 0;
      *(undefined1 *)(param_1 + 0x17d) = 1;
      *(undefined1 *)(param_1 + 0xc30) = 0;
      *(undefined4 *)(param_1 + 0xc34) = 0xbf800000;
      local_58 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_1408f9c56(param_1 + 0xc38,&local_88);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar12 = &local_88;
        if (0x18 < (ushort)uStack_70) {
          puVar12 = local_88;
        }
        (*pcVar2)(puVar12);
      }
      if (0x18 < (ushort)uStack_70) {
        FUN_1400020a8(local_88);
      }
      *(undefined2 *)(param_1 + 0xc70) = 0;
      lVar10 = param_3[0x4e];
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(*param_3 + 0x18);
      }
      *(longlong *)(param_1 + 0x164) = lVar10;
      iVar4 = rand();
      *(int *)(param_1 + 0x4e8) = iVar4;
      *(int *)(param_1 + 0x4ec) = iVar4;
      *(undefined1 *)(param_1 + 0x148) = param_4;
      FUN_14054d6dc(param_1 + 0x240,param_3 + 1);
      *(undefined1 *)(param_1 + 0x17e) = 0;
      iVar4 = *(int *)(param_1 + 0x78);
      if (0 < (longlong)iVar4) {
        lVar10 = 0;
        do {
          if ((lVar10 < *(int *)(param_1 + 0x78)) &&
             (plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x70) + lVar10 * 8),
             plVar11 != (longlong *)0x0)) {
            lVar6 = (**(code **)(*plVar11 + 8))(plVar11);
            lVar7 = FUN_1400ef5b4();
            if ((lVar7 != 0) &&
               ((((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                   == lVar7 + 0x30)) &&
                 (cVar3 = (**(code **)(*plVar11 + 0x28))(plVar11), cVar3 != '\0')) &&
                (cVar3 = (**(code **)(*plVar11 + 0x80))(plVar11), cVar3 != '\0')))) {
              *(undefined1 *)(param_1 + 0x17e) = 1;
              break;
            }
          }
          lVar10 = lVar10 + 1;
        } while (iVar4 != lVar10);
      }
      lVar10 = *(longlong *)(*param_3 + 0x30);
      if (*(char *)(lVar10 + 0x330) == '\0') {
        FUN_140e5e628(lVar10);
      }
      FUN_14054d926(param_1 + 0x370,lVar10 + 0x1f8);
      FUN_14054d926(param_1 + 0x3d8,lVar10 + 0x260);
      uStack_70 = CONCAT62(uStack_70._2_6_,8);
      uVar1 = *(uint *)(lVar8 + 0xc);
      local_88 = (undefined8 *)(ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar13 = iVar4 == 0;
        if (bVar13) {
          *(int *)(lVar10 + 0x10) = iVar9;
          iVar4 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_88;
        if (bVar13) {
          iVar4 = iVar9;
        }
      }
      local_88._0_4_ = uVar1;
      local_88 = (undefined8 *)CONCAT44(iVar4,(uint)local_88);
      local_68 = CONCAT71(local_68._1_7_,7);
      local_a0 = &DAT_14c9ab028;
      local_98 = &local_88;
      FUN_140881f5a(param_1 + 0x2f0,local_8c,&local_a0,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar12 = &local_88;
        if (0x18 < (ushort)uStack_70) {
          puVar12 = local_88;
        }
        (*pcVar2)(puVar12);
      }
      if (0x18 < (ushort)uStack_70) {
        FUN_1400020a8(local_88);
      }
      lVar8 = FUN_1447210f0(lVar8);
      if (lVar8 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(lVar8 + 0x930);
      }
      *(undefined4 *)(param_1 + 0x170) = uVar14;
      iVar4 = *(int *)(param_1 + 0x78);
      if ((longlong)iVar4 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x70);
        lVar10 = 0;
        do {
          plVar11 = *(longlong **)(lVar8 + lVar10);
          if (plVar11 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar11 + 8))(plVar11);
            lVar7 = FUN_1400ef5b4();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                 == lVar7 + 0x30 && (cVar3 = (**(code **)(*plVar11 + 0x28))(plVar11), cVar3 != '\0')
                ))) {
              (**(code **)(*plVar11 + 0x90))(plVar11);
            }
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar4 * 8 != lVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408f965a FUN_1408f965a body=57 status=ok
// SIG undefined FUN_1408f965a(void)

void FUN_1408f965a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22e90 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22e90 = FUN_140002ddd(FUN_14643bbde,uVar1,L"GpsQuerySettings");
  }
  return;
}



// FUNCTION 1408f9694 FUN_1408f9694 body=186 status=ok
// SIG undefined FUN_1408f9694(void)

void FUN_1408f9694(longlong param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  code *local_38;
  longlong *local_30;
  code **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x38);
  FUN_1408f97d0();
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x424) < 0) {
    *(undefined4 *)(param_1 + 0x420) = 0;
    FUN_147f5bb6c(param_1 + 0x418,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  local_30 = &local_40;
  local_28 = &local_38;
  local_38 = FUN_143887b14;
  local_18 = &local_28;
  local_20 = FUN_14181611a;
  local_40 = param_1;
  FUN_1408f9750(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f9750 FUN_1408f9750 body=128 status=ok
// SIG undefined FUN_1408f9750(void)

void FUN_1408f9750(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(longlong *)(param_1 + 0x40) != 0) && (lVar3 = *(longlong *)(param_1 + 0x48), lVar3 != 0))
     && (iVar1 = *(int *)(lVar3 + 0x30), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    lVar5 = 0;
    do {
      if ((*(char *)(lVar3 + 8 + lVar5) == '\x03') &&
         (lVar4 = *(longlong *)(lVar3 + lVar5), lVar4 != 0)) {
        iVar2 = *(int *)(lVar4 + 0x18);
        if ((-1 < (longlong)iVar2) &&
           ((iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar2 * 8) != 0)))) {
          (*(code *)*param_2)(param_2[1]);
        }
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
  }
  return;
}



// FUNCTION 1408f97d0 FUN_1408f97d0 body=679 status=ok
// SIG undefined FUN_1408f97d0(void)

void FUN_1408f97d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_c8 [40];
  uint local_a0;
  uint local_9c;
  ulonglong local_98;
  longlong local_90;
  uint local_84;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1408f9a78();
  local_50 = &local_60;
  local_58 = FUN_143888448;
  local_60 = param_1;
  FUN_14480914e(param_1);
  uVar16 = *(uint *)(param_1 + 0x400);
  uVar9 = (ulonglong)uVar16;
  if ((uVar9 != 0) && (0 < (int)uVar16)) {
    lVar18 = *(longlong *)(param_1 + 0x3f8);
    uVar15 = 1;
    do {
      if ((uVar15 < uVar9) &&
         (cVar6 = FUN_1408f9aea(*(undefined8 *)(lVar18 + uVar15 * 8),
                                *(undefined8 *)(lVar18 + -8 + uVar15 * 8)), cVar6 != '\0')) {
        uVar4 = *(undefined8 *)(lVar18 + -8 + uVar15 * 8);
        *(undefined8 *)(lVar18 + -8 + uVar15 * 8) = *(undefined8 *)(lVar18 + uVar15 * 8);
        *(undefined8 *)(lVar18 + uVar15 * 8) = uVar4;
      }
      iVar17 = (int)uVar15;
      uVar15 = uVar15 + 2;
    } while (iVar17 + 1 < (int)uVar16);
    local_68 = lVar18;
    if (2 < (int)uVar16) {
      uVar15 = 2;
      local_70 = uVar9;
      do {
        local_84 = (int)uVar15 * 2;
        local_78 = (longlong)(int)local_84;
        lVar18 = 0;
        local_98 = uVar15;
        do {
          local_9c = (int)local_70 - (int)lVar18;
          if ((int)local_84 <= (int)local_9c) {
            local_9c = local_84;
          }
          if (((int)uVar15 < (int)local_9c) && (0 < (int)uVar15)) {
            local_90 = local_68 + lVar18 * 8;
            iVar17 = 0;
            uVar9 = uVar15 & 0xffffffff;
            while( true ) {
              local_a0 = (uint)uVar9;
              puVar2 = (undefined8 *)(local_90 + (longlong)(int)local_a0 * 8);
              iVar12 = 0;
              uVar16 = local_a0 - iVar17;
              if (uVar16 != 0 && iVar17 <= (int)local_a0) {
                lVar3 = local_90 + (longlong)iVar17 * 8;
                iVar12 = 0;
                uVar9 = (ulonglong)uVar16;
                do {
                  uVar9 = uVar9 >> 1;
                  iVar11 = (uint)uVar9 + iVar12;
                  cVar6 = FUN_1408f9aea(*puVar2,*(undefined8 *)(lVar3 + (longlong)iVar11 * 8));
                  if (cVar6 == '\0') {
                    iVar12 = iVar11 + (uVar16 & 1);
                  }
                  bVar5 = 1 < uVar16;
                  uVar16 = (uint)uVar9;
                } while (bVar5);
              }
              iVar12 = iVar12 + iVar17;
              iVar17 = local_a0 - iVar12;
              uVar15 = local_98;
              if (iVar17 == 0 || (int)local_a0 < iVar12) break;
              uVar16 = local_9c - local_a0;
              if (uVar16 == 0 || (int)local_9c < (int)local_a0) {
                uVar7 = 0;
                uVar9 = (ulonglong)local_a0;
              }
              else {
                puVar10 = (undefined8 *)(local_90 + (longlong)iVar12 * 8);
                uVar7 = 0;
                uVar9 = (ulonglong)uVar16;
                do {
                  uVar9 = uVar9 >> 1;
                  uVar13 = (uint)uVar9 + (int)uVar7;
                  local_80 = uVar7;
                  cVar6 = FUN_1408f9aea(puVar2[uVar13],*puVar10);
                  uVar7 = local_80;
                  if (cVar6 != '\0') {
                    uVar7 = (ulonglong)(uVar13 + (uVar16 & 1));
                  }
                  bVar5 = 1 < uVar16;
                  uVar16 = (uint)uVar9;
                } while (bVar5);
                uVar16 = local_a0 + (int)uVar7;
                uVar9 = (ulonglong)uVar16;
                if (0 < (int)uVar7) {
                  puVar2 = puVar10 + (int)(uVar16 - iVar12);
                  puVar14 = puVar10 + iVar17;
                  puVar8 = puVar10 + iVar17;
                  do {
                    while( true ) {
                      puVar1 = puVar14 + 1;
                      uVar4 = *puVar10;
                      *puVar10 = *puVar14;
                      puVar10 = puVar10 + 1;
                      *puVar14 = uVar4;
                      if (puVar1 == puVar2) break;
                      puVar14 = puVar1;
                      if (puVar10 == puVar8) {
                        puVar8 = puVar1;
                      }
                    }
                    puVar14 = puVar8;
                  } while (puVar10 != puVar8);
                }
              }
              uVar15 = local_98;
              if (((int)local_9c <= (int)uVar9) ||
                 (iVar17 = (int)uVar7 + iVar12 + 1, (int)uVar9 <= iVar17)) break;
            }
          }
          lVar18 = lVar18 + local_78;
        } while (lVar18 < (longlong)local_70);
        uVar15 = (ulonglong)local_84;
      } while ((int)local_84 < (int)local_70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408f9a78 FUN_1408f9a78 body=114 status=ok
// SIG undefined FUN_1408f9a78(void)

void FUN_1408f9a78(longlong param_1)

{
  if (*(int *)(param_1 + 0x3f4) < 0) {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    FUN_147f5c02c(param_1 + 1000,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  if (*(int *)(param_1 + 0x404) < 0) {
    *(undefined4 *)(param_1 + 0x400) = 0;
    FUN_147f5c08c(param_1 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x400) = 0;
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  return;
}



// FUNCTION 1408f9aea FUN_1408f9aea body=362 status=ok
// SIG undefined FUN_1408f9aea(void)

bool FUN_1408f9aea(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  char local_4c;
  int local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 200))(param_1,&local_48);
  lVar1 = param_1[9];
  uVar6 = FUN_140c910e2();
  cVar3 = FUN_1448093f4(lVar1,uVar6);
  lVar9 = 0;
  if (cVar3 != '\0') {
    lVar9 = lVar1;
  }
  uVar6 = FUN_140c90d40();
  cVar3 = FUN_1448093f4(lVar1,uVar6);
  uVar6 = FUN_14180ebee();
  FUN_1448093f4(lVar1,uVar6);
  (**(code **)(*param_2 + 200))(param_2,&local_50);
  lVar2 = param_2[9];
  uVar6 = FUN_140c910e2();
  cVar4 = FUN_1448093f4(lVar2,uVar6);
  lVar7 = 0;
  if (cVar4 != '\0') {
    lVar7 = lVar2;
  }
  uVar6 = FUN_140c90d40();
  bVar5 = FUN_1448093f4(lVar2,uVar6);
  uVar6 = FUN_14180ebee();
  cVar4 = FUN_1448093f4(lVar2,uVar6);
  lVar8 = 0;
  if (cVar4 != '\0') {
    lVar8 = lVar2;
  }
  if (lVar7 == 0 || lVar9 == 0) {
    if ((lVar9 == 0) || ((bVar5 & lVar2 != 0) == 0)) {
      if ((cVar3 == '\x01' && lVar1 != 0) && lVar7 != 0) {
        bVar10 = true;
        if ((lVar8 != 0) && (local_4c == '\x01')) {
          bVar10 = (byte)(*(char *)(lVar7 + 0x78) - 3U) < 0xfe;
        }
        goto LAB_1408f9c2f;
      }
    }
    else if ((lVar8 != 0) && (local_44 == '\x01')) {
      bVar10 = (byte)(*(char *)(lVar9 + 0x78) - 1U) < 2;
      goto LAB_1408f9c2f;
    }
    bVar10 = false;
  }
  else {
    bVar10 = local_48 < local_50;
  }
LAB_1408f9c2f:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1408f9c56 FUN_1408f9c56 body=213 status=ok
// SIG undefined FUN_1408f9c56(void)

undefined8 * FUN_1408f9c56(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
  if (pcVar3 != (code *)0x0) {
    puVar6 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      puVar6 = (undefined8 *)*param_1;
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    FUN_1400020a8(*param_1);
  }
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  if (uVar2 < 0x19) {
    uVar5 = (ulonglong)((uint)bVar1 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar5) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar5) == (code *)0x0) {
        memcpy(param_1,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar5))(param_1,param_2);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar5))(param_1,param_2);
    }
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 0;
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  return param_1;
}



// FUNCTION 1408f9d2c FUN_1408f9d2c body=1269 status=ok
// SIG undefined FUN_1408f9d2c(void)

void FUN_1408f9d2c(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_79;
  char local_78 [16];
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar12 = param_1[1];
  if (((lVar12 == 0) || (param_1[2] == 0)) || (*(int *)(param_1[2] + 8) < 1)) {
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a1c9e20;
    plVar5[2] = (longlong)param_1;
    if (((lVar12 == 0) || (param_1[2] == 0)) || (*(int *)(param_1[2] + 8) < 1)) {
      if (plVar5 == (longlong *)0x0) {
        param_1[1] = (longlong)param_1;
        plVar7 = (longlong *)param_1[2];
        if (plVar7 != (longlong *)0x0) {
LAB_1408f9ded:
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          param_1[2] = (longlong)plVar5;
          if (plVar5 != (longlong *)0x0) goto LAB_1408f9e01;
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        param_1[1] = (longlong)param_1;
        if ((longlong *)param_1[2] != plVar5) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[2];
          if (plVar7 != (longlong *)0x0) goto LAB_1408f9ded;
          param_1[2] = (longlong)plVar5;
        }
LAB_1408f9e01:
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
      }
    }
    param_1[0x24] = (longlong)param_1;
    plVar7 = (longlong *)param_1[0x25];
    if (plVar5 == plVar7) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar7 = plVar5;
          goto joined_r0x0001408f9e73;
        }
      }
    }
    else {
      param_1[0x25] = (longlong)plVar5;
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
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x0001408f9e73:
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 9) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar4 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar4 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar10;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar4 = iVar10;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x4c) = iVar4;
  param_1[8] = param_2;
  plVar5 = *(longlong **)(param_2 + 0x50);
  if (((plVar5 != param_1) && (param_1[3] == 0)) && (param_1[4] == 0)) {
    if (plVar5 != (longlong *)0x0) {
      param_1[3] = (longlong)plVar5;
      *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x20) = param_1;
    }
    *(longlong **)(param_2 + 0x50) = param_1;
    param_2 = param_1[8];
  }
  if (((((param_2 == 0) || (*(int *)((longlong)param_1 + 0x4c) == 0)) ||
       (uVar2 = *(uint *)(param_1 + 9), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0)))) ||
     (((int)plVar5[2] != *(int *)((longlong)param_1 + 0x4c) ||
      (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar12 = *plVar5, lVar12 == 0))))))
  goto LAB_1408fa0aa;
  lVar3 = param_1[0x12];
  iVar4 = (int)param_1[0x13];
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_140b57998(param_1 + 0x12,param_2 + 0x58);
  local_79 = 2;
  if (*(int *)((longlong)param_1 + 0x4c) == 0) {
LAB_1408fa101:
    local_88 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 9);
    local_88 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x4c) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1408fa101;
      local_88 = *puVar8;
    }
  }
  local_98 = (longlong *)param_1[1];
  local_90 = (longlong *)param_1[2];
  if (local_90 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
    UNLOCK();
    plVar5 = local_90;
  }
  local_78[0] = '\0';
  local_50[0] = 0;
  FUN_1402b8912(local_78,&local_98,&local_88,&local_79);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  local_98 = param_1;
  uVar6 = (**(code **)(*(longlong *)param_1[8] + 0x68))((longlong *)param_1[8],lVar12);
  FUN_142b3fb4e(&local_98,uVar6);
  uVar6 = (**(code **)(*(longlong *)param_1[8] + 0x60))((longlong *)param_1[8],lVar12);
  FUN_142b3fb4e(&local_98,uVar6);
  if (iVar4 != 0) {
    lVar12 = lVar3;
    do {
      if ((longlong)(int)param_1[0x13] != 0) {
        lVar11 = param_1[0x12];
        lVar9 = (longlong)(int)param_1[0x13] * 0x58;
        do {
          if (*(longlong *)(lVar11 + 0x38) == *(longlong *)(lVar12 + 0x38)) {
            if (lVar11 != 0) {
              FUN_1403719a4(lVar11,lVar12);
              *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar12 + 0x38);
              if (lVar11 != lVar12) {
                if (*(longlong *)(lVar11 + 0x40) != 0) {
                  FUN_1400020a8();
                }
                *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(lVar12 + 0x40);
                *(undefined8 *)(lVar12 + 0x40) = 0;
                *(undefined4 *)(lVar11 + 0x48) = *(undefined4 *)(lVar12 + 0x48);
                *(undefined4 *)(lVar11 + 0x4c) = *(undefined4 *)(lVar12 + 0x4c);
                *(undefined8 *)(lVar12 + 0x48) = 0;
              }
              *(undefined1 *)(lVar11 + 0x50) = *(undefined1 *)(lVar12 + 0x50);
            }
            break;
          }
          lVar11 = lVar11 + 0x58;
          lVar9 = lVar9 + -0x58;
        } while (lVar9 != 0);
      }
      lVar12 = lVar12 + 0x58;
    } while (lVar12 != (longlong)iVar4 * 0x58 + lVar3);
  }
  FUN_1448173f8(local_50);
  if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_1403d8100(lVar3,iVar4);
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
LAB_1408fa0aa:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001408fa0d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fa222 FUN_1408fa222 body=360 status=ok
// SIG undefined FUN_1408fa222(void)

ulonglong FUN_1408fa222(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
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
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (((((lVar4 != 0) && (*(int *)(lVar4 + 0x4c) != 0)) &&
       (uVar1 = *(uint *)(lVar4 + 0x48), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)))) &&
     (((int)plVar3[2] == *(int *)(lVar4 + 0x4c) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar4 = *plVar3, lVar4 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_1408fa2c0;
  }
  lVar4 = 0;
LAB_1408fa2c0:
  uVar2 = FUN_1408fa38b(lVar4);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fa38b FUN_1408fa38b body=405 status=ok
// SIG undefined FUN_1408fa38b(void)

ulonglong FUN_1408fa38b(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_3b8 [32];
  undefined1 local_398 [4];
  char local_394;
  longlong local_2d8;
  char local_2c8;
  longlong *local_288;
  longlong *local_118;
  char local_e8;
  char local_78;
  char local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != 0) {
    lVar4 = FUN_14070cc62();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (lVar4 = *(longlong *)(param_1 + 0x858), lVar4 != 0)) {
      cVar3 = FUN_140532d9e(lVar4);
      if (cVar3 != '\0') {
        if (*(longlong *)(lVar4 + 0x1518) != 0) {
          FUN_144a238e8(local_398,lVar4 + 0x1730);
          if (local_40 == '\x01') {
            local_40 = '\0';
          }
          if (local_78 == '\x01') {
            local_78 = '\0';
          }
          if (local_e8 == '\x01') {
            local_e8 = '\0';
          }
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_118 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar2 = (int *)((longlong)local_118 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_118 + 0x10))(local_118);
              }
            }
          }
          if (local_288 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_288 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_288)(local_288);
              LOCK();
              piVar2 = (int *)((longlong)local_288 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_288 + 0x10))(local_288);
              }
            }
          }
          if ((local_2c8 == '\x01') && (local_2d8 != 0)) {
            FUN_1400020a8();
          }
          if (local_394 != '\0') goto LAB_1408fa478;
        }
        uVar5 = 0;
      }
    }
  }
LAB_1408fa478:
  if ((local_20 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fa528 FUN_1408fa528 body=57 status=ok
// SIG undefined FUN_1408fa528(void)

void FUN_1408fa528(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0ba0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0ba0 = FUN_140002ddd(FUN_146618b9c,uVar1,L"WeaponBehaviorDef_AmmoPool");
  }
  return;
}



// FUNCTION 1408fa568 FUN_1408fa568 body=57 status=ok
// SIG undefined FUN_1408fa568(void)

void FUN_1408fa568(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a6a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a6a8 = FUN_140002ddd(FUN_1464ca812,uVar1,L"GbxBodyNodeState_GestaltPart");
  }
  return;
}



// FUNCTION 1408fa5a2 FUN_1408fa5a2 body=700 status=ok
// SIG undefined FUN_1408fa5a2(void)

void FUN_1408fa5a2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) < 0) {
    FUN_147f61d1c(plVar1,0);
  }
  if ((*(char *)(param_1 + 0xc4) == '\0') && (*(char *)(param_1 + 0x350) != '\x01')) {
    if ((*(longlong **)(param_1 + 0x70) != (longlong *)0x0) && (*(int *)(param_1 + 0x6c) != 0)) {
      uVar3 = *(uint *)(param_1 + 0x68);
      if (((-1 < (int)uVar3) &&
          ((((int)uVar3 < DAT_14c9647dc &&
            (lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 != 0))
           && (*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x6c))))) &&
         ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) {
        local_68 = 0;
        uStack_60 = 0;
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))();
        FUN_144a439d2(uVar9,&local_68);
        lVar12 = local_68;
        lVar14 = (longlong)(int)uStack_60;
        if (lVar14 != 0) {
          lVar11 = 0;
          do {
            lVar15 = *(longlong *)(lVar12 + lVar11);
            iVar8 = *(int *)(param_1 + 0x90);
            *(uint *)(param_1 + 0x90) = iVar8 + 1U;
            if (*(uint *)(param_1 + 0x94) < iVar8 + 1U) {
              FUN_1403cac46(plVar1,iVar8);
            }
            lVar4 = *plVar1;
            lVar10 = (longlong)iVar8 * 0x30;
            lVar2 = lVar4 + lVar10;
            *(undefined8 *)(lVar4 + lVar10) = 0x7fffffff;
            *(undefined4 *)(lVar4 + 8 + lVar10) = 0;
            local_50 = lVar15;
            if (lVar15 == 0) {
              iVar8 = 0;
            }
            else {
              uVar3 = *(uint *)(lVar15 + 0xc);
              *(uint *)(lVar2 + 4) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              iVar8 = *(int *)(lVar15 + 0x10);
              if (*(int *)(lVar15 + 0x10) == 0) {
                LOCK();
                iVar8 = DAT_14c964868 + 1;
                UNLOCK();
                iVar13 = DAT_14c964868 + 1;
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar8;
                if (bVar16) {
                  local_6c = iVar13;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar13);
                  iVar13 = local_6c;
                }
                LOCK();
                iVar8 = *(int *)(lVar15 + 0x10);
                bVar16 = iVar8 == 0;
                if (bVar16) {
                  *(int *)(lVar15 + 0x10) = iVar13;
                  iVar8 = 0;
                }
                UNLOCK();
                if (bVar16) {
                  iVar8 = iVar13;
                }
              }
            }
            *(int *)(lVar2 + 8) = iVar8;
            uVar5 = *(undefined4 *)(param_1 + 0x6c);
            uVar6 = *(undefined4 *)(param_1 + 0x70);
            uVar7 = *(undefined4 *)(param_1 + 0x74);
            *(uint *)(lVar2 + 0x10) = *(uint *)(param_1 + 0x68);
            *(undefined4 *)(lVar2 + 0x14) = uVar5;
            *(undefined4 *)(lVar2 + 0x18) = uVar6;
            *(undefined4 *)(lVar2 + 0x1c) = uVar7;
            FUN_1408fa87e(lVar2 + 0x20,&local_50);
            lVar11 = lVar11 + 8;
          } while (lVar14 * 8 != lVar11);
        }
        if (local_68 != 0) {
          FUN_1400020a8(local_68);
        }
      }
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x90) = iVar8;
    if (iVar8 == 0 && *(int *)(param_1 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      FUN_140bf885c(plVar1,iVar8);
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408fa87e FUN_1408fa87e body=196 status=ok
// SIG undefined FUN_1408fa87e(void)

uint * FUN_1408fa87e(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = FUN_14069ce7c();
    lVar4 = FUN_144718840(lVar4,uVar3);
    *(longlong *)(param_1 + 2) = lVar4;
    if (lVar4 != 0) {
      if (*param_2 == 0) {
        *param_1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*param_2 + 0xc);
        *param_1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        if (*(uint *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar5 = DAT_14c964868 + 1;
          bVar6 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar6) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar5);
          }
          LOCK();
          uVar2 = *(uint *)(lVar4 + 0x10);
          bVar6 = uVar2 == 0;
          if (bVar6) {
            *(uint *)(lVar4 + 0x10) = uVar5;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar6) {
            uVar2 = uVar5;
          }
        }
      }
      param_1[1] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 1408fa942 FUN_1408fa942 body=184 status=ok
// SIG undefined FUN_1408fa942(void)

void FUN_1408fa942(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408faac4(param_2,*(undefined8 *)(param_1 + 0x13c8));
  FUN_1408fa9fc(param_2,param_1 + 0x1710);
  if (*(char *)(param_1 + 0x1af0) == '\x01') {
    *(undefined1 *)(param_2 + 0x189) = 1;
  }
  if ((*(longlong *)(param_1 + 0x13c8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x13c8) + 0x56) == '\x01')) {
    lVar1 = FUN_14477bcf0();
    lVar1 = *(longlong *)(lVar1 + 0x60);
    if (lVar1 != 0) {
      local_30 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      local_28 = 0x3f800000;
      local_20 = 1;
      FUN_14038d1be(param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fa9fc FUN_1408fa9fc body=200 status=ok
// SIG undefined FUN_1408fa9fc(void)

void FUN_1408fa9fc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar3 = FUN_1408fae60();
    lVar5 = FUN_14477b664(uVar3);
    param_2[1] = lVar5;
  }
  lVar4 = param_2[2];
  if (lVar4 == 0) {
    if (*param_2 == 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
      return;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,param_2);
    param_2[2] = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  if ((longlong)*(int *)(lVar4 + 0x20) != 0) {
    lVar5 = *(longlong *)(lVar4 + 0x18);
    lVar4 = (longlong)*(int *)(lVar4 + 0x20) * 0x28;
    do {
      uVar3 = FUN_1408faf7a(lVar5);
      FUN_1408fae9a(param_1,uVar3);
      lVar5 = lVar5 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1408faac4 FUN_1408faac4 body=712 status=ok
// SIG undefined FUN_1408faac4(void)

void FUN_1408faac4(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar4 = FUN_1402d24da(param_2 + 200);
    if (lVar4 != 0) {
      if ((longlong)*(int *)(lVar4 + 0x38) != 0) {
        plVar12 = *(longlong **)(lVar4 + 0x30);
        lVar16 = (longlong)*(int *)(lVar4 + 0x38) * 0x18;
        do {
          if (*plVar12 != 0) {
            FUN_14038d1be(param_1,plVar12);
          }
          plVar12 = plVar12 + 3;
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
      }
      *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(lVar4 + 0x40);
    }
    if (*(char *)(param_2 + 0xf0) == '\x01') {
      lVar4 = FUN_144a43c10();
      if (lVar4 != 0) {
        iVar2 = *(int *)(lVar4 + 0xc0);
        if (iVar2 == 0) {
          uVar15 = 1;
          uVar14 = 0;
          iVar6 = 0;
          iVar11 = 0;
        }
        else {
          puVar5 = *(uint **)(lVar4 + 0xb8);
          if (*(uint **)(lVar4 + 0xb8) == (uint *)0x0) {
            puVar5 = (uint *)(lVar4 + 0xa8);
          }
          uVar10 = *puVar5;
          if (uVar10 == 0) {
            iVar6 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar6 = iVar2 + -1;
            }
            uVar14 = 0;
            uVar15 = (ulonglong)(uint)(iVar6 >> 5);
            if (iVar6 >> 5 < 1) {
              uVar15 = uVar14;
            }
            iVar11 = 0;
            do {
              if (uVar15 == uVar14) goto LAB_1408fad3f;
              iVar11 = iVar11 + 0x20;
              uVar10 = puVar5[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar10 == 0);
          }
          else {
            uVar14 = 0;
            iVar11 = 0;
          }
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar15 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar6 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar6) {
            iVar6 = iVar2;
          }
        }
        if (iVar6 != iVar2) {
          uVar10 = 0xffffffff;
          iVar3 = iVar2;
          do {
            lVar16 = *(longlong *)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar6 * 0x28);
            if (lVar16 != 0) {
              local_58 = lVar16;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c();
              }
              local_50 = 0x3fc00000;
              FUN_1408fad8e(param_1,&local_58);
              iVar3 = *(int *)(lVar4 + 0xc0);
            }
            uVar10 = uVar10 & ~(uint)uVar15;
            puVar5 = *(uint **)(lVar4 + 0xb8);
            if (*(uint **)(lVar4 + 0xb8) == (uint *)0x0) {
              puVar5 = (uint *)(lVar4 + 0xa8);
            }
            iVar6 = (int)uVar14;
            lVar16 = (longlong)iVar6;
            uVar7 = puVar5[lVar16] & uVar10;
            if (uVar7 == 0) {
              iVar8 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar8 = iVar3 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar9 = iVar8;
              if (iVar8 < iVar6) {
                iVar9 = iVar6;
              }
              if (iVar6 < iVar8) {
                lVar13 = 0;
                do {
                  uVar7 = puVar5[lVar16 + lVar13 + 1];
                  if (uVar7 != 0) {
                    uVar14 = (ulonglong)(iVar6 + (int)lVar13 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_1408facaa;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar13 = lVar13 + 1;
                } while (iVar9 - lVar16 != lVar13);
                uVar10 = 0xffffffff;
                iVar6 = iVar9;
              }
              uVar14 = (ulonglong)(iVar6 + 1);
              iVar6 = iVar3;
            }
            else {
LAB_1408facaa:
              uVar15 = (ulonglong)(-uVar7 & uVar7);
              uVar1 = uVar15 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar6 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar6) {
                iVar6 = iVar3;
              }
            }
          } while (iVar6 != iVar2);
        }
      }
    }
    else {
      lVar4 = FUN_1408fb156(param_2 + 0xf8);
      if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x38) != 0)) {
        plVar12 = *(longlong **)(lVar4 + 0x30);
        lVar4 = (longlong)*(int *)(lVar4 + 0x38) << 4;
        do {
          if (*plVar12 != 0) {
            FUN_1408fad8e(param_1,plVar12);
          }
          plVar12 = plVar12 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
    }
  }
LAB_1408fad3f:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408fad8e FUN_1408fad8e body=210 status=ok
// SIG undefined FUN_1408fad8e(void)

void FUN_1408fad8e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar6 = (longlong)*(int *)(*param_1 + 0x78);
    if (lVar6 != 0) {
      iVar4 = 0;
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(*param_1 + 0x70) + lVar3) == lVar2) {
          if (iVar4 == 1) {
            return;
          }
          uVar5 = -iVar4;
          if (-1 < (int)uVar5) {
            if ((int)param_1[0x2c] <= (int)uVar5) {
              return;
            }
            if ((int)uVar5 < (int)param_1[0x30]) {
              plVar1 = param_1 + 0x2d;
              if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
                plVar1 = (longlong *)param_1[0x2f];
              }
              if ((*(uint *)((longlong)plVar1 +
                            (ulonglong)((uint)((ulonglong)lVar3 >> 8) & 0x7ffffff) * 4) >>
                   (uVar5 & 0x1f) & 1) != 0) {
                return;
              }
            }
            plVar1 = param_1 + 0x1b;
            if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
              plVar1 = (longlong *)param_1[0x2b];
            }
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c();
              lVar2 = *param_2;
            }
            plVar1[(ulonglong)(uVar5 & 0x7fffffff) * 2] = lVar2;
            *(int *)(plVar1 + (ulonglong)(uVar5 & 0x7fffffff) * 2 + 1) = (int)param_2[1];
            return;
          }
          return;
        }
        lVar3 = lVar3 + 8;
        iVar4 = iVar4 + -1;
      } while (lVar6 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 1408fae60 FUN_1408fae60 body=57 status=ok
// SIG undefined FUN_1408fae60(void)

void FUN_1408fae60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bb28 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bb28 = FUN_140002ddd(FUN_14641d58f,uVar1,L"GbxNavFilterOverrideDef");
  }
  return;
}



// FUNCTION 1408fae9a FUN_1408fae9a body=224 status=ok
// SIG undefined FUN_1408fae9a(void)

void FUN_1408fae9a(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 0x78);
    if (lVar2 != 0) {
      iVar4 = 0;
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(*param_1 + 0x70) + lVar6) == param_2) {
          uVar5 = -iVar4;
          if ((int)uVar5 < 0) {
            return;
          }
          if ((int)param_1[0x2c] <= (int)uVar5) {
            return;
          }
          if ((int)param_1[0x30] == 0) {
            FUN_14476b79c(param_1 + 0x2d,(int)param_1[0x2c],0);
          }
          plVar3 = param_1 + 0x2d;
          if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
            plVar3 = (longlong *)param_1[0x2f];
          }
          puVar1 = (uint *)((longlong)plVar3 +
                           (ulonglong)((uint)((ulonglong)lVar6 >> 8) & 0x7ffffff) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
          plVar3 = param_1 + 0x1b;
          if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
            plVar3 = (longlong *)param_1[0x2b];
          }
          if (plVar3[(ulonglong)(uVar5 & 0x7fffffff) * 2] == 0) {
            return;
          }
          plVar3[(ulonglong)(uVar5 & 0x7fffffff) * 2] = 0;
          *(undefined4 *)(plVar3 + (ulonglong)(uVar5 & 0x7fffffff) * 2 + 1) = 0x3fc00000;
          return;
        }
        lVar6 = lVar6 + 8;
        iVar4 = iVar4 + -1;
      } while (lVar2 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 1408faf7a FUN_1408faf7a body=246 status=ok
// SIG undefined FUN_1408faf7a(void)

longlong FUN_1408faf7a(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_1408fb070();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1408fb070 FUN_1408fb070 body=228 status=ok
// SIG undefined FUN_1408fb070(void)

longlong FUN_1408fb070(void)

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
  if (DAT_14cb1bcc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147e31fbb;
    local_40 = FUN_14641dcaa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavLinkData",&DAT_14cb1bcc8,&DAT_147e31fba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bcc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fb156 FUN_1408fb156 body=246 status=ok
// SIG undefined FUN_1408fb156(void)

longlong FUN_1408fb156(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_1408fb24c();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1408fb24c FUN_1408fb24c body=228 status=ok
// SIG undefined FUN_1408fb24c(void)

longlong FUN_1408fb24c(void)

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
  if (DAT_14cb1bb98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147e31dc3;
    local_40 = FUN_14641d7ac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavEdgeUserData",&DAT_14cb1bb98,&DAT_147e31dc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bb98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fb332 FUN_1408fb332 body=593 status=ok
// SIG undefined FUN_1408fb332(void)

void FUN_1408fb332(longlong param_1,uint param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  FUN_14575664a();
  if ((longlong)*(int *)(param_1 + 0x2f0) != 0) {
    uVar10 = param_2 & 0x3fffffff | 0x40000000;
    lVar13 = (longlong)*(int *)(param_1 + 0x2f0) * 0x1a0;
    lVar9 = *(longlong *)(param_1 + 0x2e8) + 0xe0;
    do {
      plVar12 = *(longlong **)(lVar9 + 0xa0);
      cVar3 = *(char *)(lVar9 + 0xbd);
      iVar4 = FUN_1408fb584(lVar9,uVar10);
      if (iVar4 != -1 && cVar3 == '\0') {
        FUN_1410d3824(plVar12,(longlong)*(int *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar4 * 8)
                              * 0x30 + *(longlong *)(param_1 + 0x18));
      }
      iVar4 = FUN_1408fb60a(lVar9 + 0x20,uVar10);
      if (iVar4 != -1 && cVar3 == '\0') {
        plVar7 = (longlong *)0x0;
        if (*(char *)((longlong)plVar12 + 0xc) != '\0') {
          plVar7 = plVar12;
        }
        lVar5 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar4 * 8);
        lVar8 = *(longlong *)(param_1 + 0x38);
        uVar2 = *(undefined4 *)(lVar8 + 8 + lVar5 * 0x18);
        lVar6 = plVar7[1];
        lVar11 = *(longlong *)(*plVar7 + 0x278);
        *(undefined8 *)(lVar11 + (longlong)(int)lVar6 * 0xc) = *(undefined8 *)(lVar8 + lVar5 * 0x18)
        ;
        *(undefined4 *)(lVar11 + 8 + (longlong)(int)lVar6 * 0xc) = uVar2;
        uVar2 = *(undefined4 *)(lVar8 + 0x14 + lVar5 * 0x18);
        lVar6 = plVar7[1];
        lVar11 = *(longlong *)(*plVar7 + 0x290);
        *(undefined8 *)(lVar11 + (longlong)(int)lVar6 * 0xc) =
             *(undefined8 *)(lVar8 + 0xc + lVar5 * 0x18);
        *(undefined4 *)(lVar11 + 8 + (longlong)(int)lVar6 * 0xc) = uVar2;
      }
      if (*(byte *)((longlong)plVar12 + 0xc) < 2) {
        plVar12 = (longlong *)0x0;
      }
      iVar4 = FUN_1408fb690(lVar9 + 0x40,uVar10);
      if (((iVar4 != -1 && cVar3 == '\0') && (plVar12 != (longlong *)0x0)) &&
         (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x3d8) + 0x9c8), lVar8 != 0)) {
        lVar11 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar4 * 8) * 0x2c +
                 *(longlong *)(param_1 + 0x78);
        if (*(char *)(*(longlong *)(*plVar12 + 0x2c0) + 0xd + (longlong)(int)plVar12[1] * 0x10) !=
            *(char *)(lVar11 + 0x29)) {
          if (*(char *)(lVar11 + 0x29) == '\0') {
            FUN_140a36458();
          }
          else {
            FUN_14016e00e(lVar8,plVar12);
          }
        }
        lVar6 = (longlong)(int)plVar12[1];
        lVar8 = *(longlong *)(*plVar12 + 0x2c0);
        if (*(char *)(lVar8 + 0xb + lVar6 * 0x10) != *(char *)(lVar11 + 0x1c)) {
          pbVar1 = (byte *)(lVar8 + 10 + lVar6 * 0x10);
          *pbVar1 = *pbVar1 | 1;
          lVar6 = (longlong)(int)plVar12[1];
          lVar8 = *(longlong *)(*plVar12 + 0x2c0);
        }
        *(undefined1 *)(lVar8 + 0xd + lVar6 * 0x10) = *(undefined1 *)(lVar11 + 0x29);
        FUN_1400d2fee(*(undefined8 *)(*(longlong *)(param_1 + 0x3d8) + 0x9c8),plVar12,
                      *(undefined1 *)(lVar11 + 0x1c));
        *(bool *)(*(longlong *)(*plVar12 + 0x200) + (longlong)(int)plVar12[1]) =
             *(char *)(lVar11 + 0x1c) != '\x01' && *(char *)(lVar11 + 0x1c) != '\x04';
      }
      lVar9 = lVar9 + 0x1a0;
      lVar13 = lVar13 + -0x1a0;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 1408fb584 FUN_1408fb584 body=133 status=ok
// SIG undefined FUN_1408fb584(void)

int FUN_1408fb584(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  iVar2 = -1;
  if (0 < iVar4) {
    iVar2 = *param_1;
    iVar6 = (int)(param_2 * 4) >> 2;
    iVar5 = -1;
    do {
      if (iVar2 < 1) {
        iVar2 = param_1[6];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar2 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar6) || ((iVar3 == iVar6 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + -1;
      iVar5 = iVar2;
    } while (iVar4 != 0);
    iVar2 = -1;
    if ((iVar5 != -1) &&
       (iVar2 = -1, *(uint *)(*(longlong *)(param_1 + 4) + 4 + (longlong)iVar5 * 8) == param_2)) {
      iVar2 = iVar5;
    }
  }
  return iVar2;
}



// FUNCTION 1408fb60a FUN_1408fb60a body=133 status=ok
// SIG undefined FUN_1408fb60a(void)

int FUN_1408fb60a(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  iVar2 = -1;
  if (0 < iVar4) {
    iVar2 = *param_1;
    iVar6 = (int)(param_2 * 4) >> 2;
    iVar5 = -1;
    do {
      if (iVar2 < 1) {
        iVar2 = param_1[6];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar2 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar6) || ((iVar3 == iVar6 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + -1;
      iVar5 = iVar2;
    } while (iVar4 != 0);
    iVar2 = -1;
    if ((iVar5 != -1) &&
       (iVar2 = -1, *(uint *)(*(longlong *)(param_1 + 4) + 4 + (longlong)iVar5 * 8) == param_2)) {
      iVar2 = iVar5;
    }
  }
  return iVar2;
}



// FUNCTION 1408fb690 FUN_1408fb690 body=133 status=ok
// SIG undefined FUN_1408fb690(void)

int FUN_1408fb690(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  iVar2 = -1;
  if (0 < iVar4) {
    iVar2 = *param_1;
    iVar6 = (int)(param_2 * 4) >> 2;
    iVar5 = -1;
    do {
      if (iVar2 < 1) {
        iVar2 = param_1[6];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar2 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar6) || ((iVar3 == iVar6 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + -1;
      iVar5 = iVar2;
    } while (iVar4 != 0);
    iVar2 = -1;
    if ((iVar5 != -1) &&
       (iVar2 = -1, *(uint *)(*(longlong *)(param_1 + 4) + 4 + (longlong)iVar5 * 8) == param_2)) {
      iVar2 = iVar5;
    }
  }
  return iVar2;
}



// FUNCTION 1408fb716 FUN_1408fb716 body=75 status=ok
// SIG undefined FUN_1408fb716(void)

longlong FUN_1408fb716(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1408fb762();
  if (((param_3 != 0) && (param_2 != 0)) && (lVar1 != 0)) {
    FUN_1408fb934(param_1,lVar1,param_4);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return lVar1;
}



// FUNCTION 1408fb762 FUN_1408fb762 body=334 status=ok
// SIG undefined FUN_1408fb762(void)

longlong * FUN_1408fb762(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = *(int *)(param_1 + 0x3c) != 0;
  uVar7 = param_2 + (uint)bVar14 * 2;
  uVar1 = (ulonglong)(((uint)bVar14 * 2 + param_2 + (uint)(uVar7 == 0)) - 1) * 2 + 1;
  uVar6 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  if ((int)uVar6 < (int)*(uint *)(param_1 + 0x28)) {
    uVar12 = param_3 + (uint)bVar14 * 2;
    uVar6 = uVar6 & 0xffffffff;
    do {
      for (plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x20) + uVar6 * 8);
          plVar10 != (longlong *)0x0; plVar10 = (longlong *)*plVar10) {
        uVar2 = *(uint *)(plVar10 + 3);
        uVar8 = uVar2 - uVar7;
        if (uVar7 <= uVar2) {
          uVar3 = *(uint *)((longlong)plVar10 + 0x1c);
          uVar13 = uVar3 - uVar12;
          if (uVar12 <= uVar3) {
            if (1 < (uVar13 | uVar8)) {
              if (uVar8 < uVar13) {
                FUN_1408fb8b0(param_1,(int)plVar10[2],*(int *)((longlong)plVar10 + 0x14) + uVar12,
                              uVar2,uVar13);
                if (uVar8 < 2) goto LAB_1408fb821;
                iVar11 = *(int *)((longlong)plVar10 + 0x14);
                iVar5 = (int)plVar10[2] + uVar7;
                uVar13 = uVar12;
              }
              else {
                FUN_1408fb8b0(param_1,(int)plVar10[2] + uVar7,*(int *)((longlong)plVar10 + 0x14),
                              uVar8,uVar3);
                if (uVar13 < 2) goto LAB_1408fb821;
                iVar11 = *(int *)((longlong)plVar10 + 0x14) + uVar12;
                iVar5 = (int)plVar10[2];
                uVar8 = uVar7;
              }
              FUN_1408fb8b0(param_1,iVar5,iVar11,uVar8,uVar13);
            }
LAB_1408fb821:
            *(uint *)(plVar10 + 3) = uVar7;
            *(uint *)((longlong)plVar10 + 0x1c) = uVar12;
            plVar9 = (longlong *)plVar10[1];
            if (*plVar10 != 0) {
              *(longlong **)(*plVar10 + 8) = plVar9;
            }
            if (plVar9 != (longlong *)0x0) {
              *plVar9 = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            plVar9 = (longlong *)(param_1 + 0x18);
            if (*(longlong *)(param_1 + 0x18) == 0) {
              lVar4 = 0;
            }
            else {
              *(longlong **)(*(longlong *)(param_1 + 0x18) + 8) = plVar10;
              lVar4 = *plVar9;
            }
            *plVar10 = lVar4;
            plVar10[1] = (longlong)plVar9;
            *plVar9 = (longlong)plVar10;
            return plVar10;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != *(uint *)(param_1 + 0x28));
  }
  return (longlong *)0x0;
}



// FUNCTION 1408fb8b0 FUN_1408fb8b0 body=131 status=ok
// SIG undefined FUN_1408fb8b0(void)

void FUN_1408fb8b0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(plVar3 + 2) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_3;
  *(int *)(plVar3 + 3) = param_4;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = param_5;
  *(bool *)(plVar3 + 4) = iVar2 != 0;
  uVar4 = (ulonglong)(param_4 + -1 + (uint)(param_4 == 0)) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar4 = (ulonglong)(uint)((int)lVar5 << 3);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + uVar4);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    *(longlong **)(lVar5 + 8) = plVar3;
    lVar5 = *plVar1;
  }
  *plVar3 = lVar5;
  plVar3[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar3;
  return;
}



// FUNCTION 1408fb934 FUN_1408fb934 body=359 status=ok
// SIG undefined FUN_1408fb934(void)

void FUN_1408fb934(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(int *)(param_1 + 0x30);
  local_68 = (void *)((longlong)
                      ((*(int *)(param_2 + 0x14) * local_78 + *(int *)(param_2 + 0x10)) *
                      *(int *)(param_1 + 0x38)) + *(longlong *)(param_1 + 8));
  iVar5 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_2 + 0x1c);
  bVar7 = iVar5 == 0;
  bVar2 = !bVar7;
  local_58 = *(int *)(param_2 + 0x18);
  local_54 = local_58 + -2 + (uint)bVar7 * 2;
  local_70 = *param_3;
  local_50 = local_78;
  if (!bVar7) {
    local_60 = 0;
    if (iVar5 == 1) {
      FUN_1408fbaba(param_1,&local_70);
    }
    else {
      memset(local_68,0,(ulonglong)(uint)(*(int *)(param_1 + 0x38) * local_58));
    }
  }
  uVar6 = (uint)bVar2;
  uVar3 = *(int *)(param_2 + 0x1c) - uVar6;
  local_74 = iVar5;
  if (uVar6 < uVar3) {
    iVar5 = 0;
    do {
      local_60 = CONCAT44(iVar5 + (uint)bVar2,iVar5);
      FUN_1408fbaba(param_1,&local_70);
      uVar3 = *(int *)(param_2 + 0x1c) - uVar6;
      iVar4 = iVar5 + (uint)bVar2;
      iVar5 = iVar5 + 1;
    } while (iVar4 + 1U < uVar3);
  }
  if (local_74 != 0) {
    local_60 = CONCAT44(uVar3,iVar1 + -3);
    if (*(int *)(param_1 + 0x3c) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    FUN_1408fbaba(param_1,&local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fbaba FUN_1408fbaba body=222 status=ok
// SIG undefined FUN_1408fbaba(void)

void FUN_1408fbaba(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  void *_Dst_00;
  void *_Src;
  
  lVar3 = param_2[1];
  iVar1 = *(int *)((longlong)param_2 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar5 = *(int *)((longlong)param_2 + 0x14) * (int)param_2[4];
  uVar4 = *(int *)(param_1 + 0x38) * iVar1;
  _Src = (void *)((ulonglong)((int)param_2[2] * uVar4) + *param_2);
  memcpy((void *)((ulonglong)(((uint)(iVar2 != 0) + iVar5) * *(int *)(param_1 + 0x38)) + lVar3),_Src
         ,(ulonglong)uVar4);
  if (iVar2 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  _Dst = (void *)(lVar3 + (ulonglong)(iVar5 * uVar4));
  _Dst_00 = (void *)((ulonglong)(((int)param_2[3] + -1) * uVar4) + (longlong)_Dst);
  if (*(int *)(param_1 + 0x3c) != 1) {
    memset(_Dst,0,(ulonglong)uVar4);
    memset(_Dst_00,0,(ulonglong)*(uint *)(param_1 + 0x38));
    return;
  }
  memcpy(_Dst,_Src,(ulonglong)uVar4);
  memcpy(_Dst_00,(void *)((ulonglong)((iVar1 + -1) * uVar4) + (longlong)_Src),
         (ulonglong)*(uint *)(param_1 + 0x38));
  return;
}



// FUNCTION 1408fbb98 FUN_1408fbb98 body=811 status=ok
// SIG undefined FUN_1408fbb98(void)

void FUN_1408fbb98(longlong param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_1407d6a19(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1407d6aba(param_1 + 0x60,0);
  }
  FUN_14087e154(param_2,1);
  iVar3 = *(int *)(param_2 + 0x68);
  if (iVar3 == 0) {
    uVar17 = 1;
    uVar19 = 0;
    iVar5 = 0;
    iVar14 = 0;
  }
  else {
    puVar6 = *(uint **)(param_2 + 0x60);
    if (*(uint **)(param_2 + 0x60) == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 0x50);
    }
    uVar18 = *puVar6;
    if (uVar18 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar19 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar17 == uVar19) {
          return;
        }
        iVar14 = iVar14 + 0x20;
        uVar18 = puVar6[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar19 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar11 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar5 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != iVar3) {
    uVar18 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(param_2 + 0x40);
      lVar16 = *(longlong *)(lVar15 + 8 + (longlong)iVar5 * 0x18);
      if (lVar16 != 0) {
        puVar7 = (undefined8 *)FUN_1408fbec4(param_1 + 0x60);
        *puVar7 = *(undefined8 *)(lVar15 + (longlong)iVar5 * 0x18);
        *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(lVar16 + 0x26);
        cVar2 = *(char *)(lVar16 + 8);
        if (cVar2 == '\0') {
          lVar15 = *(longlong *)(lVar16 + 0x28);
          puVar7[2] = lVar15;
          if (*(char *)(lVar16 + 0x24) == '\0') {
            bVar20 = *(longlong *)(lVar16 + 0x10) != lVar15;
          }
          else {
            bVar20 = true;
          }
          *(bool *)(puVar7 + 9) = bVar20;
        }
        else if (cVar2 == '\x01') {
          fVar21 = *(float *)(lVar16 + 0x1c);
          fVar1 = *(float *)(lVar16 + 0x20);
          fVar22 = *(float *)(lVar16 + 0x30);
          if (fVar1 <= *(float *)(lVar16 + 0x30)) {
            fVar22 = fVar1;
          }
          if (fVar22 <= fVar21) {
            fVar22 = fVar21;
          }
          uVar13 = ~(-1L << (*(byte *)(lVar16 + 0x25) & 0x3f));
          fVar21 = ((float)(longlong)uVar13 * (fVar22 - fVar21)) / (fVar1 - fVar21);
          uVar11 = (ulonglong)fVar21;
          uVar11 = (longlong)(fVar21 - 9.223372e+18) & (longlong)uVar11 >> 0x3f | uVar11;
          uVar13 = (ulonglong)(int)uVar13;
          if ((longlong)uVar13 <= (longlong)uVar11) {
            uVar11 = uVar13;
          }
          if ((longlong)uVar11 < 1) {
            uVar11 = 0;
          }
          puVar7[2] = uVar11;
          if (*(char *)(lVar16 + 0x24) == '\0') {
            bVar8 = -(*(float *)(lVar16 + 0x30) != *(float *)(lVar16 + 0x18)) & 1;
          }
          else {
            bVar8 = 1;
          }
          *(byte *)(puVar7 + 9) = bVar8;
        }
        else if (cVar2 == '\x02') {
          iVar5 = *(int *)(lVar16 + 0x40) + -1;
          if (*(int *)(lVar16 + 0x40) == 0) {
            iVar5 = 0;
          }
          FUN_1402980a2(puVar7 + 7,*(undefined8 *)(lVar16 + 0x38),iVar5);
        }
      }
      uVar18 = uVar18 & ~(uint)uVar17;
      puVar6 = *(uint **)(param_2 + 0x60);
      if (*(uint **)(param_2 + 0x60) == (uint *)0x0) {
        puVar6 = (uint *)(param_2 + 0x50);
      }
      iVar4 = *(int *)(param_2 + 0x68);
      iVar5 = (int)uVar19;
      lVar15 = (longlong)iVar5;
      uVar12 = puVar6[lVar15] & uVar18;
      if (uVar12 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar16 = 0;
          do {
            uVar12 = puVar6[lVar15 + lVar16 + 1];
            if (uVar12 != 0) {
              uVar19 = (ulonglong)(iVar5 + (int)lVar16 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1408fbd47;
            }
            iVar14 = iVar14 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar15 != lVar16);
          uVar18 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar19 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar4;
      }
      else {
LAB_1408fbd47:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar11 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar5 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar3);
  }
  return;
}



// FUNCTION 1408fbec4 FUN_1408fbec4 body=65 status=ok
// SIG undefined FUN_1408fbec4(void)

longlong FUN_1408fbec4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1408fbf32(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_1408fbf05(lVar2);
  return lVar2;
}



// FUNCTION 1408fbf05 FUN_1408fbf05 body=45 status=ok
// SIG undefined FUN_1408fbf05(void)

void FUN_1408fbf05(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0x8000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1408fbf32 FUN_1408fbf32 body=275 status=ok
// SIG undefined FUN_1408fbf32(void)

void FUN_1408fbf32(longlong param_1,int param_2)

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



// FUNCTION 1408fc046 FUN_1408fc046 body=95 status=ok
// SIG undefined FUN_1408fc046(void)

undefined8 * FUN_1408fc046(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4dc420;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1408fc0a6(param_1 + 8);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408fc0a6 FUN_1408fc0a6 body=55 status=ok
// SIG undefined FUN_1408fc0a6(void)

void FUN_1408fc0a6(longlong *param_1)

{
  FUN_14012803a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408fc0e8 FUN_1408fc0e8 body=147 status=ok
// SIG undefined FUN_1408fc0e8(void)

undefined8 * FUN_1408fc0e8(undefined8 *param_1)

{
  FUN_14090bd5e();
  *param_1 = &PTR_FUN_14a3a2600;
  param_1[5] = &PTR_FUN_14a3a31f0;
  param_1[6] = &PTR_FUN_14a3a3230;
  param_1[0x55] = &PTR_FUN_14a3a3280;
  param_1[0x56] = &PTR_FUN_14a3a3300;
  param_1[0x57] = &PTR_FUN_14a3a3310;
  param_1[0xe3] = &PTR_FUN_14a3a3340;
  *(undefined1 *)(param_1 + 0x194) = 0;
  if (*(char *)((longlong)param_1 + 0x95c) != '\x02') {
    FUN_14062aa18(param_1 + 0x118,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x95c) = 2;
  return param_1;
}



// FUNCTION 1408fc17c FUN_1408fc17c body=3915 status=ok
// SIG undefined FUN_1408fc17c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408fc17c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong **_Dst;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar39;
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auStack_4d8 [32];
  longlong **local_4b8;
  ulonglong *local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0;
  longlong *local_498;
  LPCRITICAL_SECTION local_490;
  ulonglong local_488;
  ulonglong uStack_480;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  undefined1 local_438 [16];
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  double dStack_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  longlong *local_360;
  undefined8 local_358;
  longlong *local_350;
  uint local_348;
  int iStack_344;
  undefined4 local_340;
  undefined4 local_33c;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  longlong *local_318;
  undefined8 local_310;
  longlong *plStack_308;
  undefined1 local_300 [16];
  double local_2f0;
  double local_2e8;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  ulonglong local_288;
  longlong *plStack_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  ulonglong uStack_240;
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
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if ((char)param_1[0x114] != '\x01') {
    if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1408fd134(param_1);
    return;
  }
  if ((char)param_1[0x47] == '\x01') {
    FUN_1408fd134(param_1);
  }
  local_490 = (LPCRITICAL_SECTION)(param_1 + 0x4a);
  EnterCriticalSection(local_490);
  plVar3 = (longlong *)param_1[0x5f];
  local_318 = plVar3;
  if (0 < (int)plVar3[0x18]) {
    lVar17 = 0;
    do {
      local_288 = *(ulonglong *)(plVar3[0x17] + lVar17 * 8);
      FUN_1444954ae(&local_318,&local_288);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)plVar3[0x18]);
  }
  if ((int)param_1[0x116] == 0) {
    local_4b8 = &local_318;
    local_318 = (longlong *)0x0;
    local_310 = (double)((ulonglong)local_310 & 0xffffffff00000000);
    local_4b0 = (ulonglong *)CONCAT71(local_4b0._1_7_,1);
    FUN_1444a18e6(plVar3,&local_288,0,9);
    FUN_149185768(param_1 + 0x115,&local_288);
    FUN_1401f95f4(&local_288);
  }
  else {
    FUN_149196552(plVar3,param_1 + 0x115,1);
  }
  FUN_1446f57c6(&DAT_14cc074b8,&local_288);
  (**(code **)(*param_1 + 0x2e0))(param_1,&local_288);
  plVar1 = param_1 + 0x13b;
  plVar2 = param_1 + 0x13d;
  local_288 = 0x100000000;
  local_278 = 0xffffffff;
  uStack_270 = 0;
  iVar18 = 0;
  plStack_280 = plVar2;
  if ((int)param_1[0x140] != 0) {
    FUN_1449c0562(&local_288);
    iVar18 = (int)param_1[0x140];
  }
  auVar24._8_4_ = uStack_270;
  auVar24._0_8_ = local_278;
  auVar24._12_4_ = uStack_26c;
  local_310 = (double)local_288;
  plStack_308 = plStack_280;
  local_300._4_4_ = (undefined4)((ulonglong)local_278 >> 0x20);
  iVar15 = local_300._4_4_;
  local_318 = plVar1;
  if ((local_300._4_4_ != iVar18) || (local_300 = auVar24, plStack_280 != plVar2)) {
    do {
      local_300 = auVar24;
      lVar17 = (longlong)iVar15 * 0x24 + *local_318;
      uVar13 = FUN_140813180(plVar3,lVar17);
      if ((-1 < (int)uVar13) &&
         (((((int)uVar13 < (int)plVar3[0x18] &&
            (lVar4 = *(longlong *)(plVar3[0x17] + (ulonglong)uVar13 * 8), lVar4 != 0)) &&
           (uVar13 = FUN_140813180(plVar3,lVar17 + 0xc), -1 < (int)uVar13)) &&
          (((int)uVar13 < (int)plVar3[0x18] &&
           (lVar16 = *(longlong *)(plVar3[0x17] + (ulonglong)uVar13 * 8), lVar16 != 0)))))) {
        local_268 = 0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_278 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        local_288 = 0;
        plStack_280 = (longlong *)0x0;
        uStack_260 = 0x8000000000;
        local_258 = 0xffffffff;
        local_4b0 = &local_288;
        local_4b8 = (longlong **)CONCAT71(local_4b8._1_7_,*(undefined1 *)(lVar17 + 0x19));
        local_4a8 = 0;
        FUN_1491dc052(plVar3,lVar4,lVar16,*(undefined1 *)(lVar17 + 0x18));
        uStack_240 = uStack_240 & 0xffffffff00000000;
        if (local_248 != 0) {
          FUN_1400020a8();
        }
        FUN_14083ed90(&local_288);
      }
      local_300._0_4_ = local_300._0_4_ & ~local_310._4_4_;
      FUN_1449c0562(&local_310);
      iVar15 = local_300._4_4_;
      auVar24 = local_300;
    } while (local_318 != plVar1 || (plStack_308 != plVar2 || local_300._4_4_ != iVar18));
  }
  local_4b8 = &local_318;
  local_318 = (longlong *)0x0;
  local_310 = (double)((ulonglong)local_310 & 0xffffffff00000000);
  local_4b0 = (ulonglong *)CONCAT71(local_4b0._1_7_,1);
  iVar18 = 0;
  FUN_1444a18e6(plVar3,&local_288,0,4);
  FUN_149185768(param_1 + 0x123);
  FUN_1401f95f4(&local_288);
  if ((longlong)(int)param_1[0xc5] != 0) {
    lVar17 = 0;
    do {
      if ((*(int *)(param_1[0xc4] + 8 + lVar17) != 0) &&
         (*(longlong *)(param_1[0xc4] + lVar17) != 0)) {
        FUN_1446f470e(&local_288,L"Additive",1);
        FUN_1491c9588(param_1 + 0xc4,param_1,&local_288);
        break;
      }
      lVar17 = lVar17 + 0x10;
    } while ((longlong)(int)param_1[0xc5] * 0x10 != lVar17);
  }
  plVar1 = param_1 + 0x131;
  plVar2 = param_1 + 0x133;
  local_288 = 0x100000000;
  local_278._0_4_ = 0xffffffff;
  local_278._4_4_ = 0;
  uStack_270 = 0;
  plStack_280 = plVar2;
  if ((int)param_1[0x136] != 0) {
    FUN_1449c0562(&local_288);
    iVar18 = (int)param_1[0x136];
  }
  local_348 = (uint)local_278;
  iStack_344 = local_278._4_4_;
  local_340 = uStack_270;
  local_33c = uStack_26c;
  local_358 = local_288;
  local_350 = plStack_280;
  local_360 = plVar1;
  if ((local_278._4_4_ != iVar18) || (plStack_280 != plVar2)) {
    local_498 = param_1 + 0x105;
    do {
      lVar17 = (longlong)iStack_344 * 0xb8 + *local_360;
      uVar13 = FUN_140813180(plVar3,lVar17);
      if ((((-1 < (int)uVar13) && ((int)uVar13 < (int)plVar3[0x18])) &&
          (lVar4 = *(longlong *)(plVar3[0x17] + (ulonglong)uVar13 * 8), lVar4 != 0)) &&
         (*(char *)(lVar4 + 0x10) == '\x04')) {
        _Dst = (longlong **)(lVar17 + 0xc);
        if ((*(char *)(lVar4 + 0x211) != '\0') &&
           ((*(char *)(lVar4 + 0x211) != '\x02' || (*(longlong *)(lVar4 + 0x360) == 0)))) {
          local_4b8 = (longlong **)((ulonglong)local_4b8 & 0xffffffffffffff00);
          FUN_1444a0032(plVar3,&local_288,lVar4,1);
          FUN_1491932b8(&local_288,&local_3c8,*(undefined1 *)(lVar4 + 0x211),
                        *(undefined1 *)(lVar4 + 0x21c));
          uVar14 = FUN_1491932b8(_Dst,&local_428,*(undefined1 *)(lVar4 + 0x211),
                                 *(undefined1 *)(lVar4 + 0x21c));
          auVar24 = _DAT_149934d80;
          local_458 = 0.0;
          dStack_450 = 0.0;
          local_468 = ZEXT816(0);
          dVar22 = local_388._0_8_;
          dVar5 = local_388._8_8_;
          dVar25 = local_378._0_8_;
          dVar6 = local_378._8_8_;
          dVar32 = local_3e8._0_8_;
          dVar7 = local_3e8._8_8_;
          dVar35 = local_3d8._0_8_;
          dVar12 = local_3d8._8_8_;
          auVar29 = minpd(local_3e8,local_388);
          auVar33 = minpd(local_3d8,local_378);
          auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
          auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
          iVar15 = movmskpd(uVar14,auVar30);
          auVar29._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
          auVar29._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
          uVar13 = movmskpd((int)_Dst,auVar29);
          if ((uVar13 & 0x3fffffff) == 0 && iVar15 == 0) {
            dVar28 = dStack_420 * local_3b8 * -1.0 +
                     local_418 * dStack_3c0 + dStack_410 * local_3c8 * 1.0 + local_428 * dStack_3b0;
            dVar31 = local_428 * local_3b8 * 1.0 +
                     dStack_410 * dStack_3c0 +
                     local_418 * local_3c8 * -1.0 + dStack_420 * dStack_3b0;
            auVar34._0_8_ =
                 dStack_410 * local_3b8 * 1.0 +
                 ((local_3c8 * dStack_420 * 1.0 + local_418 * dStack_3b0) - local_428 * dStack_3c0);
            auVar34._8_8_ =
                 local_418 * local_3b8 * -1.0 +
                 ((local_3c8 * local_428 * -1.0 + dStack_410 * dStack_3b0) - dStack_420 * dStack_3c0
                 );
            dVar10 = local_408 * dVar22;
            dVar11 = dStack_400 * dVar5;
            dVar8 = local_3f8 * dVar25;
            dVar9 = dStack_3f0 * dVar6;
            dVar37 = dVar11 * local_3c8 - dStack_3c0 * dVar10;
            dVar40 = dVar8 * dStack_3c0 - local_3b8 * dVar11;
            dVar36 = dVar10 * local_3b8 - local_3c8 * dVar8;
            dVar39 = dVar9 * dStack_3b0 - dStack_3b0 * dVar9;
            dVar40 = dVar40 + dVar40;
            dVar36 = dVar36 + dVar36;
            dVar37 = dVar37 + dVar37;
            dVar39 = dVar39 + dVar39;
            dVar11 = (dVar40 * local_3b8 - dVar37 * local_3c8) + dStack_3b0 * dVar36 + dVar11 +
                     dStack_3a0;
            local_468._8_4_ = SUB84(dVar11,0);
            local_468._0_8_ =
                 (dVar37 * dStack_3c0 - local_3b8 * dVar36) + dStack_3b0 * dVar40 + dVar10 +
                 local_3a8;
            local_468._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            local_458 = (dVar36 * local_3c8 - dStack_3c0 * dVar40) + dStack_3b0 * dVar37 + dVar8 +
                        (double)CONCAT44(uStack_394,local_398);
            dStack_450 = (dVar39 * dStack_3b0 - dVar39 * dStack_3b0) + dStack_3b0 * dVar39 + dVar9 +
                         dStack_390;
          }
          else {
            dVar31 = dStack_3c0 + dStack_3c0;
            dVar37 = local_3b8 + local_3b8;
            dVar28 = local_3c8 * (local_3c8 + local_3c8);
            local_128 = (1.0 - (dVar28 + dStack_3c0 * dVar31)) * dVar25;
            dVar40 = (local_3c8 + local_3c8) * dStack_3b0;
            local_138 = (dVar31 * dStack_3b0 + local_3c8 * dVar37) * dVar25;
            dStack_130 = (dVar37 * dStack_3c0 - dVar40) * dVar25;
            local_178 = ((double)DAT_149934d80 - (local_3b8 * dVar37 + dStack_3c0 * dVar31)) *
                        dVar22;
            dVar28 = (DAT_149934d80._8_8_ - (local_3b8 * dVar37 + dVar28)) * dVar5;
            dStack_170 = (dVar31 * local_3c8 + dVar37 * dStack_3b0) * dVar22;
            local_148 = (dVar37 * dStack_3c0 + dVar40) * dVar5;
            local_168 = (local_3c8 * dVar37 - dVar31 * dStack_3b0) * dVar22;
            uStack_160 = 0;
            local_158._8_4_ = SUB84(dVar28,0);
            local_158._0_8_ = (dVar31 * local_3c8 - dVar37 * dStack_3b0) * dVar5;
            local_158._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            uStack_140 = 0;
            uStack_120 = 0;
            local_118 = local_3a8;
            dStack_110 = dStack_3a0;
            local_108 = local_398;
            uStack_104 = uStack_394;
            uStack_100 = 0;
            uStack_fc = 0x3ff00000;
            dVar31 = dStack_420 + dStack_420;
            dVar37 = local_418 + local_418;
            dVar28 = local_428 * (local_428 + local_428);
            local_1a8 = (1.0 - (dVar28 + dStack_420 * dVar31)) * dVar35;
            dVar40 = (local_428 + local_428) * dStack_410;
            local_1b8 = (dVar31 * dStack_410 + local_428 * dVar37) * dVar35;
            dStack_1b0 = (dVar37 * dStack_420 - dVar40) * dVar35;
            local_1f8 = ((double)DAT_149934d80 - (local_418 * dVar37 + dStack_420 * dVar31)) *
                        dVar32;
            dVar28 = (DAT_149934d80._8_8_ - (local_418 * dVar37 + dVar28)) * dVar7;
            dStack_1f0 = (dVar31 * local_428 + dVar37 * dStack_410) * dVar32;
            local_1c8 = (dVar37 * dStack_420 + dVar40) * dVar7;
            local_1e8 = (local_428 * dVar37 - dVar31 * dStack_410) * dVar32;
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar28,0);
            local_1d8._0_8_ = (dVar31 * local_428 - dVar37 * dStack_410) * dVar7;
            local_1d8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_408;
            dStack_190 = dStack_400;
            local_188 = local_3f8;
            uStack_180 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_318,&local_1f8,&local_178);
            FUN_144a1c686(&local_318,0x3e45798ee0000000);
            auVar33._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
            auVar33._0_8_ = -(ulonglong)(0.0 <= dVar22 * dVar32);
            auVar29 = blendvpd(_DAT_149936790,auVar24,auVar33);
            uVar19 = -(ulonglong)(0.0 <= dVar25 * dVar35);
            dVar28 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
            dVar31 = auVar29._0_8_;
            plStack_308 = (longlong *)((double)plStack_308 * dVar31);
            local_310 = local_310 * dVar31;
            local_318 = (longlong *)((double)local_318 * dVar31);
            dVar31 = auVar29._8_8_;
            local_2e8 = local_2e8 * dVar31;
            local_2f0 = local_2f0 * dVar31;
            local_300._8_8_ = dVar31 * (double)local_300._8_8_;
            local_2c8 = local_2c8 * dVar28;
            local_2d0 = local_2d0 * dVar28;
            local_2d8 = dVar28 * local_2d8;
            FUN_14481fd10(&local_338);
            dVar28 = local_328 * local_328 + local_338 * local_338;
            dVar31 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
            auVar27._0_8_ = dVar28 + dVar31;
            auVar27._8_8_ = dVar28 + dVar31;
            auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
            auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
            auVar29 = sqrtpd(auVar27,auVar27);
            auVar24 = divpd(auVar24,auVar29);
            auVar38._0_8_ = auVar24._0_8_ * local_328;
            auVar38._8_8_ = auVar24._8_8_ * dStack_320;
            auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar21);
            dVar28 = (double)((ulonglong)(local_338 * auVar24._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
            dVar31 = (double)((ulonglong)(dStack_330 * auVar24._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
            local_468._8_8_ = uStack_2b0;
            local_468._0_8_ = local_2b8;
            local_458 = local_2a8;
            dStack_450 = 0.0;
          }
          dStack_440 = dVar7 * dVar5;
          local_448 = dVar32 * dVar22;
          dVar12 = dVar12 * dVar6;
          local_438._8_4_ = SUB84(dVar12,0);
          local_438._0_8_ = dVar35 * dVar25;
          local_438._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          dVar32 = auVar34._0_8_;
          dVar35 = auVar34._8_8_;
          dVar22 = dVar32 * dVar32 + dVar28 * dVar28;
          dVar25 = dVar35 * dVar35 + dVar31 * dVar31;
          auVar23._0_8_ = dVar22 + dVar25;
          auVar23._8_8_ = dVar22 + dVar25;
          auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
          auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
          auVar24 = sqrtpd(auVar23,auVar23);
          auVar24 = divpd(_DAT_149934d80,auVar24);
          auVar26._0_8_ = auVar24._0_8_ * dVar32;
          auVar26._8_8_ = auVar24._8_8_ * dVar35;
          local_488 = (ulonglong)(dVar28 * auVar24._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
          uStack_480 = (ulonglong)(dVar31 * auVar24._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
          local_478 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar20);
          _Dst = &local_318;
          memset(_Dst,0,0x84);
          FUN_14919dde6(_Dst,&local_488,*(undefined1 *)(lVar4 + 0x211),
                        *(undefined1 *)(lVar4 + 0x21c));
        }
        local_4a0 = 0;
        local_4a8 = CONCAT71(local_4a8._1_7_,*(undefined1 *)(lVar17 + 0xad));
        local_4b0 = (ulonglong *)((ulonglong)local_4b0 & 0xffffffffffffff00);
        local_4b8 = (longlong **)((ulonglong)local_4b8 & 0xffffffffffffff00);
        FUN_1444a57a4(plVar3,lVar4,_Dst,1);
        if ((*(char *)(lVar17 + 0x90) == '\x01') && ((longlong)(int)param_1[0x106] != 0)) {
          lVar16 = 0;
          do {
            if ((*(int *)(param_1[0x105] + 8 + lVar16) != 0) &&
               (*(longlong *)(param_1[0x105] + lVar16) != 0)) {
              FUN_1491c9638(local_498,param_1,lVar4,lVar17 + 0x94);
              *(undefined1 *)(lVar17 + 0x90) = 0;
              break;
            }
            lVar16 = lVar16 + 0x10;
          } while ((longlong)(int)param_1[0x106] * 0x10 != lVar16);
        }
      }
      local_348 = local_348 & ~local_358._4_4_;
      FUN_1449c0562(&local_358);
    } while (local_360 != plVar1 || (local_350 != plVar2 || iStack_344 != iVar18));
  }
  FUN_1446f57c6(&DAT_14cc07488,&local_288);
  (**(code **)(*param_1 + 0x2e0))(param_1,&local_288);
  LeaveCriticalSection(local_490);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_4d8);
}



// FUNCTION 1408fd134 FUN_1408fd134 body=782 status=ok
// SIG undefined FUN_1408fd134(void)

void FUN_1408fd134(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  void *_Src;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  int local_80;
  uint local_7c;
  uint *local_78;
  uint local_70;
  int local_6c;
  int local_68;
  void **local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  plVar1 = param_1 + 0x33;
  FUN_1408fd444(&local_60,plVar1);
  (**(code **)(*param_1 + 0x318))();
  plVar2 = param_1 + 0x35;
  puVar3 = (uint *)(param_1 + 0x37);
  iVar4 = (int)param_1[0x3a];
  local_7c = 1;
  if (iVar4 == 0) {
    local_68 = 0;
    local_80 = 0;
    local_6c = 0;
  }
  else {
    puVar5 = (uint *)param_1[0x39];
    if ((uint *)param_1[0x39] == (uint *)0x0) {
      puVar5 = puVar3;
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar7 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar7 = iVar4 + -1;
      }
      uVar10 = 0;
      uVar9 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar9 = uVar10;
      }
      local_80 = (int)uVar9 + 1;
      local_68 = (int)uVar9 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_6c = iVar4;
        if (uVar9 == uVar10) goto LAB_1408fd23e;
        iVar7 = iVar7 + 0x20;
        uVar11 = puVar5[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar11 == 0);
      local_80 = (int)uVar10;
      local_68 = iVar7;
    }
    else {
      local_68 = 0;
      local_80 = 0;
    }
    local_7c = -uVar11 & uVar11;
    uVar9 = (ulonglong)local_7c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_6c = (local_68 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar4 <= local_6c) {
      local_6c = iVar4;
    }
  }
LAB_1408fd23e:
  local_70 = 0xffffffff;
  local_88 = plVar2;
  local_78 = puVar3;
  if (local_6c != iVar4) {
    do {
      plVar8 = (longlong *)((longlong)local_6c * 0x14 + *local_88);
      lVar6 = param_1[0x33];
      iVar7 = (int)param_1[0x34];
      if ((longlong)iVar7 != 0) {
        lVar12 = 0;
        do {
          if (*(longlong *)(lVar6 + lVar12) == *plVar8) goto LAB_1408fd3af;
          lVar12 = lVar12 + 8;
        } while ((longlong)iVar7 * 8 - lVar12 != 0);
      }
      lVar12 = plVar8[1];
      *(uint *)(param_1 + 0x34) = iVar7 + 1U;
      lVar13 = (longlong)(int)lVar12;
      local_90 = plVar8;
      if (*(uint *)((longlong)param_1 + 0x1a4) < iVar7 + 1U) {
        local_98 = (longlong)(int)lVar12;
        FUN_1446f84a2(plVar1,iVar7);
        lVar6 = *plVar1;
        lVar13 = local_98;
      }
      memmove((void *)(lVar6 + lVar13 * 8 + 8),(void *)(lVar6 + lVar13 * 8),
              (ulonglong)(uint)(iVar7 - (int)lVar13) << 3);
      *(longlong *)(*plVar1 + lVar13 * 8) = *local_90;
LAB_1408fd3af:
      local_70 = local_70 & ~local_7c;
      FUN_1449c0562(&local_80);
    } while (((local_6c != iVar4) || (local_78 != puVar3)) || (local_88 != plVar2));
  }
  if ((longlong)(int)param_1[0x34] != 0) {
    lVar6 = param_1[0x33];
    lVar12 = (longlong)(int)param_1[0x34] << 3;
    do {
      (**(code **)(*param_1 + 0x2e0))(param_1,lVar6);
      lVar6 = lVar6 + 8;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  _Src = local_58;
  if (local_60 != &local_58) {
    *(int *)(local_60 + 1) = local_50;
    if (local_50 == 0 && *(int *)((longlong)local_60 + 0xc) == 0) {
      *(undefined4 *)((longlong)local_60 + 0xc) = 0;
    }
    else {
      FUN_1401b309e(local_60,local_50);
      if (local_50 != 0) {
        memcpy(*local_60,_Src,(longlong)local_50 << 3);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408fd444 FUN_1408fd444 body=110 status=ok
// SIG undefined FUN_1408fd444(void)

undefined8 * FUN_1408fd444(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
    param_2 = (undefined8 *)*param_1;
  }
  FUN_1406fa324(param_2,param_3);
  return param_1;
}



// FUNCTION 1408fd4ce FUN_1408fd4ce body=428 status=ok
// SIG undefined FUN_1408fd4ce(void)

void FUN_1408fd4ce(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x78)) {
    local_30 = &local_24;
    local_24 = 0;
    uStack_40 = &local_30;
    local_48 = &LAB_143cbcba2;
    FUN_1400b7536();
    if (local_24 == *(int *)(param_1 + 0x150)) {
      plVar3 = *(longlong **)(param_1 + 0x168);
      iVar5 = local_24;
      if ((((plVar3 != (longlong *)0x0) && (*(int *)(param_1 + 0x164) != 0)) &&
          (uVar2 = *(uint *)(param_1 + 0x160), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x164))) &&
           ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
          cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if (cVar4 == '\0') {
            iVar5 = *(int *)(param_1 + 0x150);
          }
          else {
            (**(code **)(*plVar3 + 0x30))();
            iVar5 = *(int *)(param_1 + 0x150);
            if (0 < iVar5) {
              lVar9 = 0;
              lVar7 = 0;
              do {
                lVar6 = *(longlong *)(param_1 + 0x148) + lVar9;
                lVar10 = 0x50;
                do {
                  if (*(char *)(lVar6 + lVar10) == '\x03') {
                    *(undefined8 *)(lVar6 + -0x28 + lVar10) = local_38;
                    puVar1 = (undefined4 *)(lVar6 + -0x38 + lVar10);
                    *puVar1 = (undefined4)local_48;
                    puVar1[1] = local_48._4_4_;
                    puVar1[2] = (undefined4)uStack_40;
                    puVar1[3] = uStack_40._4_4_;
                  }
                  lVar10 = lVar10 + 0x48;
                } while (lVar10 != 0x200);
                lVar7 = lVar7 + 1;
                iVar5 = *(int *)(param_1 + 0x150);
                lVar9 = lVar9 + 0x1c0;
              } while (lVar7 < iVar5);
            }
          }
        }
      }
      if (0 < iVar5) {
        lVar9 = 0;
        uVar8 = 0;
        do {
          lVar7 = FUN_1456e759a(param_1,uVar8 & 0xffffffff);
          if (lVar7 != 0) {
            FUN_140219a2c(lVar7,*(longlong *)(param_1 + 0x148) + lVar9);
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x1c0;
        } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x150));
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fd6d4 FUN_1408fd6d4 body=44 status=ok
// SIG undefined FUN_1408fd6d4(void)

void FUN_1408fd6d4(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1408fd700();
  if (cVar1 == '\0') {
    return;
  }
  FUN_1458c6388(param_1);
  FUN_1457566f8(param_1);
  return;
}



// FUNCTION 1408fd700 FUN_1408fd700 body=76 status=ok
// SIG undefined FUN_1408fd700(void)

undefined8 FUN_1408fd700(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x180))();
  plVar3 = (longlong *)FUN_1406f625c(uVar2);
  if ((((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3), lVar4 != 0))
      && (*(longlong **)(lVar4 + 0xe0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(lVar4 + 0xe0) + 0x28))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1408fd758 FUN_1408fd758 body=220 status=ok
// SIG undefined FUN_1408fd758(void)

void FUN_1408fd758(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if ((int)param_2 <= iVar2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_1401606fd(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146d9bde6(param_1);
        return;
      }
    }
    return;
  }
  *(uint *)(param_1 + 1) = param_2;
  param_2 = param_2 - iVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2) {
    FUN_1408fd834(param_1,iVar2);
  }
  if (param_2 != 0) {
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1408fd834 FUN_1408fd834 body=353 status=ok
// SIG undefined FUN_1408fd834(void)

void FUN_1408fd834(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408fd8bb;
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
LAB_1408fd8bb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1408fd9a2 FUN_1408fd9a2 body=220 status=ok
// SIG undefined FUN_1408fd9a2(void)

void FUN_1408fd9a2(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if ((int)param_2 <= iVar2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_140143f97(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146d9c878(param_1);
        return;
      }
    }
    return;
  }
  *(uint *)(param_1 + 1) = param_2;
  param_2 = param_2 - iVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2) {
    FUN_1408fda7e(param_1,iVar2);
  }
  if (param_2 != 0) {
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1408fda7e FUN_1408fda7e body=353 status=ok
// SIG undefined FUN_1408fda7e(void)

void FUN_1408fda7e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408fdb05;
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
LAB_1408fdb05:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1408fdbe0 FUN_1408fdbe0 body=286 status=ok
// SIG undefined FUN_1408fdbe0(void)

undefined8 FUN_1408fdbe0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1408fdcf8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1408fdcf8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1408fdcf8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1408fdca5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1408fdca5;
    }
  }
  uVar6 = 0;
LAB_1408fdca5:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408fdd00 FUN_1408fdd00 body=477 status=ok
// SIG undefined FUN_1408fdd00(void)

void FUN_1408fdd00(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
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
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1449027d0(param_1,&local_48);
  puVar2 = *(undefined8 **)(local_48 + 0x4f0);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
  *(int *)(puVar2 + 5) = *(int *)(puVar2 + 5) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  lVar3 = FUN_1400d7050(param_1 + 0x30);
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
        (0 < *(int *)(param_2 + 0x48))) && (*(char *)(param_2 + 0x10) != '\0')) {
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
      if ((longlong)*(int *)(puVar2 + 1) != 0) {
        plVar4 = (longlong *)*puVar2;
        lVar3 = (longlong)*(int *)(puVar2 + 1) * 0x28;
        do {
          if (*plVar4 == *(longlong *)(param_2 + 0x58)) {
            if (plVar4 != (longlong *)0x0) {
              FUN_1408fdede(plVar4,param_2);
            }
            break;
          }
          plVar4 = plVar4 + 5;
          lVar3 = lVar3 + -0x28;
        } while (lVar3 != 0);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408fdede FUN_1408fdede body=90 status=ok
// SIG undefined FUN_1408fdede(void)

void FUN_1408fdede(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(char *)(param_2 + 0x10) == '\x01';
  *(byte *)((longlong)param_1 + 0x14) = bVar2;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_140390f7a(param_2 + 0x20,param_1 + 3);
    bVar2 = *(byte *)((longlong)param_1 + 0x14);
  }
  *param_1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0x50);
  iVar1 = 100 - *(int *)(param_2 + 0x54);
  if ((bVar2 & 1) != 0) {
    iVar1 = *(int *)(param_2 + 0x54);
  }
  *(int *)(param_1 + 2) = iVar1;
  return;
}



// FUNCTION 1408fdf38 FUN_1408fdf38 body=88 status=ok
// SIG undefined FUN_1408fdf38(void)

undefined8 * FUN_1408fdf38(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1408fdf90(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408fdf90 FUN_1408fdf90 body=317 status=ok
// SIG undefined FUN_1408fdf90(void)

void FUN_1408fdf90(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408fdffe;
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
LAB_1408fdffe:
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



// FUNCTION 1408fe0ce FUN_1408fe0ce body=1417 status=ok
// SIG undefined FUN_1408fe0ce(void)

void FUN_1408fe0ce(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  undefined4 uStack_64;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1405f1eac();
  lVar10 = param_1;
  if (*(longlong *)(param_1 + 0x498) == 0) {
    for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x20)) {
      if ((*(uint *)(lVar10 + 8) & 0x30) != 0) goto LAB_1408fe0ff;
    }
    if (((*(uint *)(param_1 + 8) & 0x40) == 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
      plVar9 = (longlong *)(param_1 + 0x488);
      *(longlong **)(param_1 + 0x4a0) = &DAT_14cb70258;
      *(longlong *)(param_1 + 0x498) = param_1;
      lVar10 = DAT_14cb70258;
      while( true ) {
        *(longlong *)(param_1 + 0x488) = lVar10;
        LOCK();
        lVar6 = **(longlong **)(param_1 + 0x4a0);
        bVar11 = lVar10 == lVar6;
        if (bVar11) {
          **(longlong **)(param_1 + 0x4a0) = (longlong)plVar9;
          lVar6 = lVar10;
        }
        UNLOCK();
        if (bVar11) break;
        *(longlong *)(param_1 + 0x488) = lVar6;
        lVar10 = **(longlong **)(param_1 + 0x4a0);
      }
      if (*plVar9 != 0) {
        *(longlong **)(*plVar9 + 8) = plVar9;
      }
    }
  }
LAB_1408fe0ff:
  if (*(int *)(param_1 + 0x514) != 0) {
    FUN_1407bebdc(param_1 + 0x4f0,param_1 + 0x438,param_1);
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  plVar9 = local_70;
  local_68 = 3;
  *local_70 = (longlong)&PTR_LAB_14a1ca3a0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_70[2] = lVar6;
  *local_70 = (longlong)&PTR_FUN_14b3e5660;
  local_70[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_70 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar8;
      }
    }
  }
  *(int *)((longlong)plVar9 + 0x1c) = iVar7;
  plVar9[4] = (longlong)FUN_1487adb86;
  *(undefined4 *)(plVar9 + 5) = 0;
  if (((local_68 == 0) || (local_70 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_70 + 0x30))(), uVar3 = DAT_14cb0a938, cVar4 == '\0')) {
    if (local_68 != 0) {
      if (local_70 == (longlong *)0x0) {
        uVar5 = 0;
        goto LAB_1408fe2bb;
      }
      uVar5 = 0;
      (**(code **)*local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      goto LAB_1408fe2a5;
    }
    uVar5 = 0;
  }
  else {
    if ((DAT_14cb0a944 < 1) &&
       (DAT_14cb0a940 = DAT_14cb0a940 + -1, DAT_14cb0a940 <= (int)DAT_14cb0a938)) {
      if (0 < (int)DAT_14cb0a938) {
        iVar7 = 0;
        do {
          if (((*(int *)(DAT_14cb0a930 + 8 + (longlong)iVar7 * 0x10) == 0) ||
              (plVar9 = *(longlong **)(DAT_14cb0a930 + (longlong)iVar7 * 0x10),
              plVar9 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar9 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cb0a930,iVar7);
            FUN_14005b248(&DAT_14cb0a930);
          }
          else {
            iVar7 = iVar7 + 1;
          }
        } while (iVar7 < (int)DAT_14cb0a938);
      }
      DAT_14cb0a940 = 2;
      if (2 < (int)(DAT_14cb0a938 * 2)) {
        DAT_14cb0a940 = DAT_14cb0a938 * 2;
      }
      if ((DAT_14cb0a940 < (int)uVar3) && (DAT_14cb0a93c != DAT_14cb0a938)) {
        FUN_14045812c();
      }
    }
    uVar5 = 0;
    if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x38))(local_70,&local_78);
      uVar5 = local_78;
    }
    uVar3 = DAT_14cb0a938;
    lVar10 = (longlong)(int)DAT_14cb0a938;
    DAT_14cb0a938 = DAT_14cb0a938 + 1;
    if (DAT_14cb0a93c < DAT_14cb0a938) {
      FUN_1447a71f6(&DAT_14cb0a930,uVar3);
    }
    lVar6 = DAT_14cb0a930;
    lVar10 = lVar10 * 0x10;
    *(undefined8 *)(DAT_14cb0a930 + lVar10) = 0;
    *(undefined4 *)(lVar6 + 8 + lVar10) = 0;
    *(longlong **)(lVar6 + lVar10) = local_70;
    local_70 = (longlong *)0x0;
    *(int *)(lVar6 + 8 + lVar10) = local_68;
LAB_1408fe2a5:
    local_68 = 0;
  }
  if (local_70 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1408fe2bb:
  *(undefined8 *)(param_1 + 0x620) = uVar5;
  lVar10 = *(longlong *)(param_1 + 0x4c8);
  if (lVar10 == 0) {
    uVar5 = FUN_141848e32();
    lVar10 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x4c8) = lVar10;
  }
  lVar6 = *(longlong *)(param_1 + 0x4d0);
  if (((lVar6 == 0) && (lVar6 = 0, lVar10 != 0)) && (*(longlong *)(param_1 + 0x4c0) != 0)) {
    plVar9 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar9 + 0x110))(plVar9);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x4c0));
    }
    *(longlong *)(param_1 + 0x4d0) = lVar6;
  }
  FUN_1408fe6a6(param_1);
  if ((lVar6 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    FUN_140630e34(&local_70,param_1);
    plVar9 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar9 != (longlong *)0x0) {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)plVar9[1];
        bVar11 = iVar7 == iVar8;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar8 = iVar7;
        }
        iVar7 = iVar8;
        UNLOCK();
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_64,local_68) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
      }
      plVar2 = local_70;
      if (plVar9 != (longlong *)0x0) {
        if (local_70 != (longlong *)0x0) {
          FUN_1406f1bc8(param_1 + 0x4f0,&local_70);
          FUN_14090092e(plVar2,&local_70,lVar6);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408fe6a6 FUN_1408fe6a6 body=2145 status=ok
// SIG undefined FUN_1408fe6a6(void)

void FUN_1408fe6a6(double param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  longlong *plVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined4 local_160;
  double local_158;
  longlong local_150;
  longlong local_148;
  int local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  longlong local_f8 [2];
  uint local_e8 [4];
  uint *local_d8;
  int local_d0;
  byte local_c6;
  longlong local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar11 = param_1;
  if (param_1 == 0.0) goto LAB_1408fe974;
  do {
    if ((*(uint *)((longlong)dVar11 + 8) & 0x30) != 0) goto LAB_1408fe974;
    pdVar18 = (double *)((longlong)dVar11 + 0x20);
    dVar11 = *pdVar18;
  } while (*pdVar18 != 0.0);
  local_150 = FUN_1447210f0(param_1);
  if ((local_150 == 0) || ((*(byte *)(local_150 + 0x155) & 0x20) != 0)) goto LAB_1408fe974;
  lVar27 = *(longlong *)((longlong)param_1 + 0x4b0);
  if (lVar27 == 0) {
    uVar13 = FUN_141848df8();
    lVar27 = FUN_14477b664(uVar13);
    *(longlong *)((longlong)param_1 + 0x4b0) = lVar27;
  }
  lVar14 = *(longlong *)((longlong)param_1 + 0x4b8);
  local_158 = param_1;
  if (lVar14 == 0) {
    iVar28 = 0;
    if ((lVar27 != 0) && (*(longlong *)((longlong)param_1 + 0x4a8) != 0)) {
      plVar1 = *(longlong **)(lVar27 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar8 == '\0')) {
        *(undefined8 *)((longlong)param_1 + 0x4b8) = 0;
      }
      else {
        uVar13 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar14 = FUN_144aff482(uVar13,(longlong *)((longlong)param_1 + 0x4a8));
        *(longlong *)((longlong)param_1 + 0x4b8) = lVar14;
        if (lVar14 != 0) goto LAB_1408fe74e;
      }
    }
  }
  else {
LAB_1408fe74e:
    FUN_1408fef08(lVar14,local_f8);
    iVar10 = local_d0;
    iVar28 = 0;
    if (local_d0 == 0) {
      uVar25 = 1;
      uVar26 = 0;
      iVar9 = 0;
      iVar24 = 0;
    }
    else {
      puVar12 = local_d8;
      if (local_d8 == (uint *)0x0) {
        puVar12 = local_e8;
      }
      uVar29 = *puVar12;
      if (uVar29 == 0) {
        iVar9 = local_d0 + 0x1e;
        if (-1 < local_d0 + -1) {
          iVar9 = local_d0 + -1;
        }
        uVar26 = 0;
        uVar25 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar25 = uVar26;
        }
        iVar24 = 0;
        do {
          if (uVar25 == uVar26) {
            iVar28 = 0;
            goto LAB_1408fe92e;
          }
          iVar24 = iVar24 + 0x20;
          uVar29 = puVar12[uVar26 + 1];
          uVar26 = uVar26 + 1;
        } while (uVar29 == 0);
      }
      else {
        uVar26 = 0;
        iVar24 = 0;
      }
      uVar25 = (ulonglong)(-uVar29 & uVar29);
      uVar2 = uVar25 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar9 = (iVar24 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      if (local_d0 <= iVar9) {
        iVar9 = local_d0;
      }
    }
    if (iVar9 != local_d0) {
      uVar29 = 0xffffffff;
      iVar28 = 0;
      do {
        plVar1 = (longlong *)(local_f8[0] + (longlong)iVar9 * 0x20);
        lVar27 = *(longlong *)(local_f8[0] + 8 + (longlong)iVar9 * 0x20);
        if (lVar27 == 0) {
          uVar13 = FUN_141848e32();
          lVar27 = FUN_14477b664(uVar13);
          plVar1[1] = lVar27;
        }
        lVar14 = plVar1[2];
        if (lVar14 == 0) {
          if ((lVar27 != 0) && (*plVar1 != 0)) {
            plVar22 = *(longlong **)(lVar27 + 0xb8);
            if ((plVar22 == (longlong *)0x0) ||
               (cVar8 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar8 == '\0')) {
              plVar1[2] = 0;
            }
            else {
              uVar13 = (**(code **)(*plVar22 + 0x110))(plVar22);
              lVar14 = FUN_144aff482(uVar13,plVar1);
              plVar1[2] = lVar14;
              if (lVar14 != 0) goto LAB_1408fe878;
            }
          }
        }
        else {
LAB_1408fe878:
          iVar9 = 0;
          if ((longlong)*(int *)(lVar14 + 0x98) != 0) {
            lVar27 = 0;
            iVar9 = 0;
            do {
              iVar9 = (iVar9 + 1) -
                      (uint)(*(longlong *)(*(longlong *)(lVar14 + 0x90) + lVar27) == 0);
              lVar27 = lVar27 + 0x18;
            } while ((longlong)*(int *)(lVar14 + 0x98) * 0x18 != lVar27);
          }
          if (iVar28 < iVar9) {
            iVar28 = iVar9;
          }
        }
        uVar29 = uVar29 & ~(uint)uVar25;
        puVar12 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar12 = local_e8;
        }
        iVar9 = (int)uVar26;
        lVar27 = (longlong)iVar9;
        uVar23 = puVar12[lVar27] & uVar29;
        if (uVar23 == 0) {
          iVar19 = local_d0 + 0x1e;
          if (-1 < local_d0 + -1) {
            iVar19 = local_d0 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar24 = iVar24 + 0x20;
          iVar20 = iVar19;
          if (iVar19 < iVar9) {
            iVar20 = iVar9;
          }
          if (iVar9 < iVar19) {
            lVar14 = 0;
            do {
              uVar23 = (puVar12 + lVar27 + 1)[lVar14];
              if (uVar23 != 0) {
                uVar26 = (ulonglong)(iVar9 + (int)lVar14 + 1);
                uVar29 = 0xffffffff;
                goto LAB_1408fe902;
              }
              iVar24 = iVar24 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar20 - lVar27 != lVar14);
            uVar29 = 0xffffffff;
            iVar9 = iVar20;
          }
          uVar26 = (ulonglong)(iVar9 + 1);
          iVar9 = local_d0;
        }
        else {
LAB_1408fe902:
          uVar25 = (ulonglong)(-uVar23 & uVar23);
          uVar2 = uVar25 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar9 = (iVar24 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if (local_d0 <= iVar9) {
            iVar9 = local_d0;
          }
        }
      } while (iVar9 != iVar10);
    }
LAB_1408fe92e:
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408ff272(local_f8);
    param_1 = local_158;
  }
  dVar11 = local_158;
  plVar1 = (longlong *)((longlong)param_1 + 0x5d8);
  iVar10 = *(int *)((longlong)param_1 + 0x5e0);
  if (iVar10 != iVar28) {
    if (iVar28 < iVar10) {
      do {
        FUN_1412f3774(local_150,
                      *(undefined8 *)
                       (*(longlong *)((longlong)dVar11 + 0x5d8) + -8 + (longlong)iVar10 * 8),0,1);
        FUN_1487aebb8(plVar1,local_f8);
        iVar10 = *(int *)((longlong)dVar11 + 0x5e0);
      } while (iVar28 < iVar10);
    }
    if (iVar10 < iVar28) {
      lVar27 = (longlong)local_158 + 0x390;
      do {
        dVar11 = local_158;
        FUN_1487ae95a(local_158,&local_148);
        FUN_1411371f6(local_f8);
        local_c6 = local_c6 | 2;
        iVar10 = local_140 + -1;
        if (local_140 == 0) {
          iVar10 = 0;
        }
        FUN_1446f82e2(&local_138,iVar10,local_148,1);
        local_f8[0] = (longlong)local_138;
        lVar14 = FUN_1447210f0(dVar11);
        if (lVar14 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = FUN_1447210f0(local_158);
          uVar13 = FUN_147da9d74(uVar13,0);
        }
        iVar10 = local_140 + -1;
        if (local_140 == 0) {
          iVar10 = 0;
        }
        FUN_1446f82e2(&local_138,iVar10,local_148,1);
        local_160 = 0;
        local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
        lVar14 = 0;
        lVar15 = FUN_140be85e0(0,uVar13,local_138,0);
        if (lVar15 == 0) {
LAB_1408fec13:
          uVar21 = (undefined4)lVar14;
          lVar14 = *(longlong *)((longlong)local_158 + 0x1c8);
          if (lVar14 == 0) {
            local_108 = DAT_14c846508;
            local_118 = DAT_14c8464f8;
            dStack_110 = DAT_14c846500;
LAB_1408fed0c:
            local_128 = (double)DAT_14c8464f0;
            local_138 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            dVar11 = *(double *)(lVar14 + 0x240);
            dVar5 = *(double *)(lVar14 + 0x248);
            dVar6 = *(double *)(lVar14 + 0x250);
            dVar7 = *(double *)(lVar14 + 600);
            pdVar18 = *(double **)(lVar14 + 0x228);
            dVar17 = local_158;
            local_138 = dVar11;
            uStack_130 = dVar5;
            local_128 = dVar6;
            uStack_120 = dVar7;
            if (pdVar18 == (double *)0x0) {
              uVar21 = 0x40;
              pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
              dVar17 = DAT_14c8463d8;
              *pdVar18 = DAT_14c8463d0;
              pdVar18[1] = dVar17;
              dVar17 = DAT_14c8463e8;
              pdVar18[2] = DAT_14c8463e0;
              pdVar18[3] = dVar17;
              dVar17 = DAT_14c846500;
              pdVar18[4] = DAT_14c8464f8;
              pdVar18[5] = dVar17;
              dVar17 = DAT_14c846508;
              pdVar18[6] = DAT_14c846508;
              *(double **)(lVar14 + 0x228) = pdVar18;
            }
            auVar3._8_4_ = (int)-(ulonglong)(dVar5 != pdVar18[1]);
            auVar3._0_8_ = -(ulonglong)(dVar11 != *pdVar18);
            auVar3._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar18[1]) >> 0x20);
            iVar10 = movmskpd(SUB84(dVar17,0),auVar3);
            auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar18[3]);
            auVar4._0_8_ = -(ulonglong)(dVar6 != pdVar18[2]);
            auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar18[3]) >> 0x20);
            uVar29 = movmskpd(uVar21,auVar4);
            if ((uVar29 & 0x3fffffff) != 0 || iVar10 != 0) {
              *(undefined4 *)(pdVar18 + 2) = (undefined4)local_128;
              *(undefined4 *)((longlong)pdVar18 + 0x14) = local_128._4_4_;
              *(undefined4 *)(pdVar18 + 3) = (undefined4)uStack_120;
              *(undefined4 *)((longlong)pdVar18 + 0x1c) = uStack_120._4_4_;
              *(undefined4 *)pdVar18 = (undefined4)local_138;
              *(undefined4 *)((longlong)pdVar18 + 4) = local_138._4_4_;
              *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_130;
              *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_130._4_4_;
              FUN_1448052ee(&local_138,&local_118);
              pdVar18[6] = local_108;
              pdVar18[4] = local_118;
              pdVar18[5] = dStack_110;
            }
            local_108 = pdVar18[6];
            local_118 = pdVar18[4];
            dStack_110 = pdVar18[5];
            lVar14 = *(longlong *)((longlong)local_158 + 0x1c8);
            if (lVar14 == 0) goto LAB_1408fed0c;
            local_138 = *(double *)(lVar14 + 0x260);
            uStack_130 = *(double *)(lVar14 + 0x268);
            local_128 = *(double *)(lVar14 + 0x270);
          }
          uVar13 = FUN_141174638();
          local_168 = local_f8;
          lVar15 = FUN_141137228(local_150,uVar13,&local_138,&local_118);
          dVar11 = local_158;
          if (lVar15 != 0) {
            FUN_14485c47a(lVar15 + 0x438,local_158);
            (**(code **)(*(longlong *)((longlong)dVar11 + 0x390) + 0x90))(lVar27,&local_138);
            *(double *)(lVar15 + 0x440) = local_138;
            FUN_1433c2874(lVar15);
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar15);
            }
            iVar10 = *(int *)((longlong)local_158 + 0x5e0);
            *(uint *)((longlong)local_158 + 0x5e0) = iVar10 + 1U;
            if (*(uint *)((longlong)local_158 + 0x5e4) < iVar10 + 1U) {
              FUN_1487b4e8e(plVar1,iVar10);
            }
            *(longlong *)(*plVar1 + (longlong)iVar10 * 8) = lVar15;
            if (DAT_14c950c29 == '\x01') goto LAB_1408fee6a;
          }
        }
        else {
          lVar16 = FUN_141174638();
          lVar14 = *(longlong *)(lVar15 + 0x10);
          if ((*(int *)(lVar14 + 0x38) < *(int *)(lVar16 + 0x38)) ||
             (lVar14 = *(longlong *)(lVar14 + 0x30),
             *(longlong *)(lVar14 + (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30))
          goto LAB_1408fec13;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar15);
          }
          iVar10 = *(int *)((longlong)local_158 + 0x5e0);
          *(uint *)((longlong)local_158 + 0x5e0) = iVar10 + 1U;
          if (*(uint *)((longlong)local_158 + 0x5e4) < iVar10 + 1U) {
            FUN_1487b4e8e(plVar1,iVar10);
          }
          *(longlong *)(*plVar1 + (longlong)iVar10 * 8) = lVar15;
          if (DAT_14c950c29 != '\0') {
LAB_1408fee6a:
            FUN_1456cec3c(lVar15);
          }
        }
        if (local_b8 != 0) {
          plVar22 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar22 = local_98;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
      } while (*(int *)((longlong)local_158 + 0x5e0) < iVar28);
    }
  }
LAB_1408fe974:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408fef08 FUN_1408fef08 body=873 status=ok
// SIG undefined FUN_1408fef08(void)

undefined8 * FUN_1408fef08(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  uint *local_e8;
  int local_dc;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b0 [3];
  longlong local_98;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar10 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_1408ff324(param_2,param_1 + 0x98);
  puVar13 = (uint *)(param_1 + 0xf8);
  uVar2 = *(uint *)(param_1 + 0x110);
  uVar8 = 1;
  iVar11 = 0;
  uVar7 = 0;
  if (uVar2 != 0) {
    puVar4 = *(uint **)(param_1 + 0x108);
    if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
      puVar4 = puVar13;
    }
    uVar7 = *puVar4;
    if (uVar7 == 0) {
      iVar9 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar9 = uVar2 - 1;
      }
      uVar10 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar10;
      }
      do {
        if (uVar8 == uVar10) goto LAB_1408ff1dc;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar4[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar10 = 0;
    }
    uVar8 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar8 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar7 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
  }
  if (uVar7 != uVar2) {
    uVar14 = 0xffffffff;
    local_e8 = puVar13;
    local_d8 = (ulonglong)uVar2;
    do {
      local_c8 = 0;
      uStack_c0 = 0;
      local_d0 = *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + (longlong)(int)uVar7 * 0x20);
      local_dc = iVar11;
      FUN_1446dcdd4(local_b0,&local_d0);
      if (DAT_14cb705d8 == 0) {
        puVar13 = local_e8;
        if (local_98 != 0) {
          FUN_1400020a8();
          puVar13 = local_e8;
        }
      }
      else {
        lVar3 = FUN_144815d88(DAT_14cb705d8,local_b0);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        uVar1 = uStack_c0;
        if (lVar3 != 0) {
          lVar12 = (longlong)(int)uStack_c0;
          uVar2 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar2);
          if (uStack_c0._4_4_ < uVar2) {
            FUN_1446f84a2(&local_c8,uVar1 & 0xffffffff);
          }
          *(undefined8 *)(local_c8 + lVar12 * 8) = local_d0;
          FUN_1408ff636(lVar3,local_b0,&local_c8);
          FUN_1408ffb32(param_2,local_b0);
          local_68 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_1408ff272(local_b0);
          local_b0[0] = &local_d0;
          FUN_1408ff3be(&local_c8,local_b0);
          puVar13 = local_e8;
        }
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      puVar4 = *(uint **)(param_1 + 0x108);
      if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
        puVar4 = puVar13;
      }
      uVar2 = *(uint *)(param_1 + 0x110);
      iVar9 = (int)uVar10;
      lVar3 = (longlong)iVar9;
      uVar7 = puVar4[lVar3] & uVar14;
      iVar11 = local_dc;
      if (uVar7 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar11 = local_dc + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar9 < iVar5) {
          lVar12 = 0;
          do {
            uVar7 = puVar4[lVar3 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar10 = (ulonglong)(iVar9 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1408ff133;
            }
            iVar11 = iVar11 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar6 - lVar3 != lVar12);
          uVar14 = 0xffffffff;
          iVar9 = iVar6;
        }
        uVar10 = (ulonglong)(iVar9 + 1);
        puVar13 = local_e8;
        uVar7 = uVar2;
      }
      else {
LAB_1408ff133:
        uVar8 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar8 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar7 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar7) {
          uVar7 = uVar2;
        }
      }
    } while (uVar7 != (uint)local_d8);
  }
LAB_1408ff1dc:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408ff272 FUN_1408ff272 body=55 status=ok
// SIG undefined FUN_1408ff272(void)

void FUN_1408ff272(longlong *param_1)

{
  FUN_1408ff2aa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408ff2aa FUN_1408ff2aa body=121 status=ok
// SIG undefined FUN_1408ff2aa(void)

void FUN_1408ff2aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1408ff324 FUN_1408ff324 body=154 status=ok
// SIG undefined FUN_1408ff324(void)

longlong FUN_1408ff324(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_1408ff379;
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
LAB_1408ff379:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1408ff49c(param_1,param_2);
  return param_1;
}



// FUNCTION 1408ff3be FUN_1408ff3be body=222 status=ok
// SIG undefined FUN_1408ff3be(void)

int FUN_1408ff3be(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar4 = 0;
    bVar11 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar3 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar3;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar6 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar4 != iVar8) {
          memmove(plVar1 + iVar4,plVar1 + lVar3,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar4 = iVar4 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar6);
    *(int *)(param_1 + 1) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 1408ff49c FUN_1408ff49c body=410 status=ok
// SIG undefined FUN_1408ff49c(void)

longlong * FUN_1408ff49c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_1408ff2aa(param_1,(ulonglong)uVar2);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar9 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar9 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar9;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar3 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar3;
    if (iVar3 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar2) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar11 = 0;
      uVar10 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar5 + lVar11) = *(undefined4 *)(lVar4 + lVar11);
          *(undefined4 *)(lVar5 + 4 + lVar11) = *(undefined4 *)(lVar4 + 4 + lVar11);
        }
        else {
          puVar1 = (undefined8 *)(lVar5 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *(undefined8 *)(lVar5 + lVar11) = *(undefined8 *)(lVar4 + lVar11);
          uVar8 = FUN_14477b664(*(undefined8 *)(lVar4 + 8 + lVar11));
          uVar8 = FUN_14477b664(uVar8);
          *(undefined8 *)(lVar5 + 8 + lVar11) = uVar8;
          *(undefined8 *)(lVar5 + 0x10 + lVar11) = *(undefined8 *)(lVar4 + 0x10 + lVar11);
          *(undefined8 *)(lVar5 + 0x18 + lVar11) = *(undefined8 *)(lVar4 + 0x18 + lVar11);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x20;
      } while (uVar2 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 1408ff636 FUN_1408ff636 body=1275 status=ok
// SIG undefined FUN_1408ff636(void)

undefined8 * FUN_1408ff636(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_158 [40];
  longlong *local_130;
  ulonglong local_128;
  uint *local_120;
  uint local_114;
  longlong local_110;
  undefined8 *local_108;
  longlong local_100 [2];
  longlong local_f0 [2];
  undefined2 *local_e0;
  int local_d8;
  undefined8 local_d0;
  longlong local_c8 [3];
  longlong *local_b0 [3];
  longlong *local_98;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar12 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_1408ffb32(param_2,param_1 + 0x18);
  puVar13 = (uint *)(param_1 + 0x78);
  uVar17 = *(uint *)(param_1 + 0x90);
  uVar19 = (ulonglong)uVar17;
  if (uVar17 == 0) {
    uVar14 = 1;
    iVar10 = 0;
    uVar3 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x88);
    if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
      puVar4 = puVar13;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar10 = uVar17 + 0x1e;
      if (-1 < (int)(uVar17 - 1)) {
        iVar10 = uVar17 - 1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_1408ff729;
        iVar10 = iVar10 + 0x20;
        uVar3 = puVar4[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar14 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar3 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if ((int)uVar17 <= (int)uVar3) {
      uVar3 = uVar17;
    }
  }
  if (uVar3 != uVar17) {
    uVar17 = 0xffffffff;
    local_130 = param_3;
    local_128 = uVar19;
    local_120 = puVar13;
    local_110 = param_1;
    local_108 = param_2;
    do {
      local_c8[2] = *(longlong *)(*(longlong *)(local_110 + 0x68) + (longlong)(int)uVar3 * 0x20);
      local_114 = uVar17;
      FUN_1446dcdd4(local_b0,local_c8 + 2);
      plVar8 = local_98;
      if (DAT_14cb705d8 == 0) {
LAB_1408ffa37:
        if (plVar8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar5 = FUN_144815d88(DAT_14cb705d8,local_b0);
        if (local_98 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        plVar8 = local_130;
        if (lVar5 != 0) {
          lVar15 = *param_3;
          iVar11 = (int)param_3[1];
          lVar18 = (longlong)iVar11;
          if (lVar18 != 0) {
            lVar16 = 0;
            do {
              if (*(longlong *)(lVar15 + lVar16) == local_c8[2]) {
                FUN_1400021e4(lVar15 + lVar18 * 8 + -8,local_b0);
                local_c8[0] = 0;
                local_c8[1] = 0;
                lVar5 = local_130[1];
                if ((longlong)(int)lVar5 != 0) {
                  lVar15 = *local_130;
                  lVar18 = 0;
                  do {
                    local_d0 = *(undefined8 *)(lVar15 + lVar18);
                    FUN_1400b22c2(local_f0,&DAT_149eb5f30);
                    FUN_1400021e4(&local_d0,local_100);
                    FUN_1401c7f3e(&local_e0,local_100,local_f0);
                    iVar11 = local_d8 + -1;
                    if (local_d8 == 0) {
                      iVar11 = 0;
                    }
                    FUN_1400020e8(local_c8,local_e0,iVar11);
                    if (local_e0 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_100[0] != 0) {
                      FUN_1400020a8();
                    }
                    if (local_f0[0] != 0) {
                      FUN_1400020a8();
                    }
                    lVar18 = lVar18 + 8;
                  } while ((longlong)(int)lVar5 * 8 != lVar18);
                }
                FUN_1400b22c2(&local_e0,&DAT_149eb5f30);
                iVar11 = local_d8 + -1;
                if (local_d8 == 0) {
                  iVar11 = 0;
                }
                puVar9 = &DAT_149dfb77a;
                if (local_d8 != 0) {
                  puVar9 = local_e0;
                }
                FUN_140b127b8(local_c8,puVar9,iVar11,1);
                puVar13 = local_120;
                param_3 = local_130;
                if (local_e0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                param_2 = local_108;
                uVar19 = local_128;
                plVar8 = local_b0[0];
                if (local_c8[0] != 0) {
                  FUN_1400020a8();
                  plVar8 = local_b0[0];
                }
                goto LAB_1408ffa37;
              }
              lVar16 = lVar16 + 8;
            } while (lVar18 * 8 - lVar16 != 0);
          }
          *(uint *)(local_130 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)local_130 + 0xc) < iVar11 + 1U) {
            FUN_1446f84a2(local_130,iVar11);
            lVar15 = *plVar8;
          }
          *(longlong *)(lVar15 + lVar18 * 8) = local_c8[2];
          FUN_1408ff636(lVar5,local_b0,plVar8);
          FUN_1408ffb32(param_2,local_b0);
          uVar19 = local_128;
          local_68 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_1408ff272(local_b0);
          local_b0[0] = local_c8 + 2;
          FUN_1408ff3be(plVar8,local_b0);
          puVar13 = local_120;
          param_3 = plVar8;
        }
      }
      uVar17 = local_114 & ~(uint)uVar14;
      puVar4 = *(uint **)(local_110 + 0x88);
      if (*(uint **)(local_110 + 0x88) == (uint *)0x0) {
        puVar4 = puVar13;
      }
      uVar2 = *(uint *)(local_110 + 0x90);
      iVar11 = (int)uVar12;
      lVar5 = (longlong)iVar11;
      uVar3 = puVar4[lVar5] & uVar17;
      if (uVar3 == 0) {
        iVar6 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar6 = uVar2 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar11) {
          iVar7 = iVar11;
        }
        if (iVar11 < iVar6) {
          lVar15 = 0;
          do {
            uVar3 = puVar4[lVar5 + lVar15 + 1];
            if (uVar3 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar15 + 1);
              uVar17 = 0xffffffff;
              goto LAB_1408ffacb;
            }
            iVar10 = iVar10 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar5 != lVar15);
          uVar17 = 0xffffffff;
          iVar11 = iVar7;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        puVar13 = local_120;
        uVar19 = local_128;
        uVar3 = uVar2;
      }
      else {
LAB_1408ffacb:
        uVar14 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar14 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar3 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)uVar19);
  }
LAB_1408ff729:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408ffb32 FUN_1408ffb32 body=2698 status=ok
// SIG undefined FUN_1408ffb32(void)

void FUN_1408ffb32(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  undefined **ppuVar19;
  uint uVar20;
  int iVar21;
  undefined4 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong lVar27;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  longlong *plVar33;
  ulonglong uVar34;
  longlong *plVar35;
  
  uVar31 = *(uint *)(param_1 + 1);
  uVar6 = uVar31 - *(int *)((longlong)param_1 + 0x34);
  uVar23 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar6;
  if (uVar6 < uVar23) {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar23);
    }
    uVar6 = uVar23 - uVar31;
    if (uVar6 != 0 && (int)uVar31 <= (int)uVar23) {
      iVar29 = *(int *)((longlong)param_1 + 0xc);
      uVar20 = uVar31;
      if (iVar29 < (int)uVar23) {
        FUN_1446f4a44(param_1);
        uVar20 = *(uint *)(param_1 + 1);
        iVar29 = *(int *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = uVar20 + uVar6;
      if (iVar29 - uVar20 < uVar6) {
        FUN_1447711aa(param_1);
      }
      if ((int)uVar20 < (int)uVar23) {
        lVar32 = *param_1;
        uVar24 = (ulonglong)uVar23;
        iVar29 = *(int *)((longlong)param_1 + 0x34);
        puVar22 = (undefined4 *)(uVar24 * 0x20 + lVar32 + -0x1c);
        do {
          iVar7 = (int)uVar24;
          if (iVar29 != 0) {
            *(int *)(lVar32 + (longlong)(int)param_1[6] * 0x20) = iVar7 + -1;
          }
          puVar22[-1] = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar28 = 0xffffffff;
          }
          else {
            uVar28 = (undefined4)param_1[6];
          }
          uVar24 = uVar24 - 1;
          *puVar22 = uVar28;
          *(int *)(param_1 + 6) = iVar7 + -1;
          iVar29 = *(int *)((longlong)param_1 + 0x34) + 1;
          *(int *)((longlong)param_1 + 0x34) = iVar29;
          puVar22 = puVar22 + -8;
        } while ((longlong)(int)uVar20 < (longlong)uVar24);
      }
      if (uVar31 == 0) {
        plVar33 = param_1 + 2;
        *(uint *)(param_1 + 5) = uVar6;
        uVar31 = uVar6 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar31) {
          FUN_14499171c(plVar33,0,uVar31,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar6 + 0x1f & 0xffffffe0;
        }
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar33;
        }
        if (uVar6 < 0x101) {
          uVar31 = uVar31 + (uVar31 == 0);
        }
        memset(plVar18,0,(ulonglong)(uVar31 << 2));
        iVar29 = (int)param_1[5];
        iVar7 = iVar29 + 0x1f;
        if (-1 < iVar29) {
          iVar7 = iVar29;
        }
        if (iVar29 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar33 = (longlong *)param_1[4];
          }
          bVar15 = -(char)(iVar29 % 0x20);
          *(uint *)((longlong)plVar33 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar33 + (longlong)(iVar7 >> 5) * 4) << (bVar15 & 0x1f))
               >> (bVar15 & 0x1f);
        }
      }
      else if (-1 < (int)uVar6) {
        plVar33 = param_1 + 2;
        iVar29 = (int)param_1[5];
        if (uVar23 != uVar31) {
          if (iVar29 == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = iVar29 + 0x1e;
            if (-1 < iVar29 + -1) {
              iVar7 = iVar29 + -1;
            }
            iVar7 = iVar7 >> 5;
          }
          iVar30 = iVar29 + uVar6;
          iVar16 = iVar29 + uVar6 + -1;
          iVar21 = iVar29 + uVar6 + 0x1e;
          if (-1 < iVar16) {
            iVar21 = iVar16;
          }
          if (iVar21 >> 5 == iVar7) {
            *(int *)(param_1 + 5) = iVar30;
          }
          else {
            if (*(int *)((longlong)param_1 + 0x2c) < iVar30) {
              if (iVar30 + 0x1fU < 0xa0) {
                iVar30 = 0x80;
                iVar7 = iVar29;
              }
              else {
                uVar31 = iVar30 + 0x1fU >> 5;
                if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                  uVar20 = 4;
                  if (4 < uVar31) {
                    uVar20 = uVar31;
                  }
                }
                else {
                  uVar20 = (uVar31 * 3 >> 3) + uVar31 + 0x10;
                }
                uVar24 = FUN_144a3809e(uVar20 << 2,0);
                iVar7 = (int)(uVar24 >> 2);
                iVar30 = -0x20;
                if ((int)uVar31 <= iVar7) {
                  iVar30 = iVar7 << 5;
                }
                iVar7 = (int)param_1[5];
              }
              *(int *)((longlong)param_1 + 0x2c) = iVar30;
              FUN_1446efbd8(plVar33,iVar7);
              iVar30 = (int)param_1[5] + uVar6;
            }
            iVar7 = iVar30 + 0x1f;
            if (-1 < iVar30) {
              iVar7 = iVar30;
            }
            *(int *)(param_1 + 5) = iVar30;
            if (iVar30 % 0x20 != 0) {
              plVar18 = (longlong *)param_1[4];
              if ((longlong *)param_1[4] == (longlong *)0x0) {
                plVar18 = plVar33;
              }
              bVar15 = -(char)(iVar30 % 0x20);
              *(uint *)((longlong)plVar18 + (longlong)(iVar7 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar7 >> 5) * 4) <<
                         (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
            }
          }
        }
        FUN_1447c6044(plVar33,iVar29,uVar6,0);
      }
    }
    if (uVar23 < 4) {
      iVar29 = 1;
    }
    else {
      uVar31 = (uVar23 | 1) + 0xe;
      iVar29 = 0x1f;
      if (uVar31 != 0) {
        for (; uVar31 >> iVar29 == 0; iVar29 = iVar29 + -1) {
        }
      }
      iVar29 = 1 << ((byte)iVar29 & 0x1f);
    }
    if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar29)) {
      *(int *)(param_1 + 9) = iVar29;
      FUN_1409005bc(param_1);
    }
  }
  iVar29 = (int)param_2[5];
  if (iVar29 == 0) {
    uVar24 = 1;
    uVar34 = 0;
    iVar7 = 0;
    iVar30 = 0;
  }
  else {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_2 + 2);
    }
    uVar31 = *puVar8;
    if (uVar31 == 0) {
      iVar7 = iVar29 + 0x1e;
      if (-1 < iVar29 + -1) {
        iVar7 = iVar29 + -1;
      }
      uVar34 = 0;
      uVar24 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar24 = uVar34;
      }
      iVar30 = 0;
      do {
        if (uVar24 == uVar34) {
          return;
        }
        iVar30 = iVar30 + 0x20;
        uVar31 = puVar8[uVar34 + 1];
        uVar34 = uVar34 + 1;
      } while (uVar31 == 0);
    }
    else {
      uVar34 = 0;
      iVar30 = 0;
    }
    uVar24 = (ulonglong)(-uVar31 & uVar31);
    uVar11 = uVar24 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar7 = (iVar30 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar29 <= iVar7) {
      iVar7 = iVar29;
    }
  }
  if (iVar7 != iVar29) {
    plVar33 = param_1 + 2;
    plVar18 = param_1 + 7;
    uVar31 = 0xffffffff;
    do {
      puVar25 = (undefined8 *)((longlong)iVar7 * 0x20 + *param_2);
      if (*(int *)((longlong)param_1 + 0x34) == 0) {
        iVar7 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_1 + 0xc) == iVar7) {
          FUN_1447711aa(param_1,iVar7);
        }
        lVar32 = (longlong)iVar7;
        iVar21 = FUN_144a54ea4(plVar33,1);
        plVar35 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar35 = plVar33;
        }
        iVar16 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar16 = iVar21;
        }
        bVar15 = (byte)iVar21 & 0x1f;
        puVar8 = (uint *)((longlong)plVar35 + (longlong)(iVar16 >> 5) * 4);
        *puVar8 = *puVar8 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
      }
      else {
        iVar7 = (int)param_1[6];
        lVar32 = (longlong)iVar7;
        iVar21 = *(int *)(*param_1 + 4 + lVar32 * 0x20);
        *(int *)(param_1 + 6) = iVar21;
        iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
        *(int *)((longlong)param_1 + 0x34) = iVar16;
        if (iVar16 != 0) {
          *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x20) = 0xffffffff;
        }
      }
      plVar35 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar35 = plVar33;
      }
      iVar21 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar21 = iVar7;
      }
      puVar8 = (uint *)((longlong)plVar35 + (longlong)(iVar21 >> 5) * 4);
      *puVar8 = *puVar8 | 1 << ((byte)iVar7 & 0x1f);
      lVar27 = *param_1;
      lVar32 = lVar32 * 0x20;
      *(undefined8 *)(lVar27 + lVar32) = 0;
      ((undefined8 *)(lVar27 + lVar32))[1] = 0;
      *(undefined8 *)(lVar27 + 0x10 + lVar32) = 0;
      *(undefined8 *)(lVar27 + lVar32) = *puVar25;
      uVar9 = FUN_14477b664(puVar25[1]);
      lVar10 = FUN_14477b664(uVar9);
      *(longlong *)(lVar27 + 8 + lVar32) = lVar10;
      *(undefined8 *)(lVar27 + 0x10 + lVar32) = puVar25[2];
      *(undefined4 *)(lVar27 + 0x18 + lVar32) = 0xffffffff;
      if (lVar10 == 0) {
        lVar10 = FUN_141848e32();
      }
      plVar35 = (longlong *)(lVar27 + lVar32);
      lVar32 = *plVar35;
      uVar11 = FUN_14477b664(lVar10);
      uVar6 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar23 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar23 = uVar23 >> 0x10 ^ uVar23;
      uVar6 = (uint)((ulonglong)lVar32 >> 0x10);
      uVar20 = (uint)lVar32 & 0xffff;
      uVar6 = uVar23 >> 0xd ^
              (((uint)lVar32 << 0x10 | uVar20) + (int)((ulonglong)lVar32 >> 0x20) +
               (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar20 >> 4)) - uVar23;
      uVar20 = uVar6 << 8 ^ (-0x61c88647 - uVar23) - uVar6;
      uVar26 = uVar20 >> 0xd ^ (uVar23 - uVar6) - uVar20;
      uVar6 = uVar26 >> 0xc ^ (uVar6 - uVar20) - uVar26;
      uVar23 = uVar6 << 0x10 ^ (uVar20 - uVar26) - uVar6;
      uVar20 = uVar23 >> 5 ^ (uVar26 - uVar6) - uVar23;
      uVar26 = uVar20 >> 3 ^ (uVar6 - uVar23) - uVar20;
      uVar6 = uVar26 << 10 ^ (uVar23 - uVar20) - uVar26;
      uVar23 = uVar6 >> 0xf ^ uVar20 - (uVar26 + uVar6);
      uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if ((uVar6 != 0) && (uVar6 != 1)) {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar18;
        }
        iVar21 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
        if (iVar21 != -1) {
          lVar32 = *param_1;
          do {
            lVar27 = (longlong)iVar21 * 0x20;
            plVar12 = (longlong *)(lVar32 + lVar27);
            if (*(longlong *)(lVar32 + 8 + lVar27) == 0) {
              uVar9 = FUN_141848e32();
              lVar32 = FUN_14477b664(uVar9);
              plVar12[1] = lVar32;
            }
            lVar32 = plVar35[1];
            if (lVar32 == 0) {
              lVar32 = FUN_141848e32();
            }
            lVar10 = *plVar35;
            lVar32 = FUN_14477b664(lVar32);
            iVar21 = 0;
            if ((lVar32 != 0) && (plVar1 = *(longlong **)(lVar32 + 0xb8), plVar1 != (longlong *)0x0)
               ) {
              lVar13 = *plVar1;
              pcVar2 = *(code **)(lVar13 + 0x108);
              if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
                cVar5 = (*pcVar2)(plVar1);
                iVar21 = 0;
                if (cVar5 == '\0') goto LAB_140900192;
                lVar13 = *plVar1;
              }
              pcVar2 = *(code **)(lVar13 + 0x110);
              ppuVar19 = &PTR_PTR_14c763408;
              if ((pcVar2 != (code *)&LAB_144783426) &&
                 (ppuVar19 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
                ppuVar19 = (undefined **)(*pcVar2)(plVar1);
              }
              iVar21 = FUN_144aff48c(ppuVar19);
            }
LAB_140900192:
            lVar13 = *plVar12;
            lVar3 = plVar12[1];
            if ((lVar3 == 0) || (plVar12 = *(longlong **)(lVar3 + 0xb8), plVar12 == (longlong *)0x0)
               ) {
              iVar16 = 0;
            }
            else {
              lVar14 = *plVar12;
              pcVar2 = *(code **)(lVar14 + 0x108);
              if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
                cVar5 = (*pcVar2)(plVar12);
                iVar16 = 0;
                if (cVar5 == '\0') goto LAB_14090020f;
                lVar14 = *plVar12;
              }
              pcVar2 = *(code **)(lVar14 + 0x110);
              ppuVar19 = &PTR_PTR_14c763408;
              if ((pcVar2 != (code *)&LAB_144783426) &&
                 (ppuVar19 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
                ppuVar19 = (undefined **)(*pcVar2)(plVar12);
              }
              iVar16 = FUN_144aff48c(ppuVar19);
            }
LAB_14090020f:
            if ((iVar16 == iVar21) && (lVar13 == lVar10)) {
              if (lVar3 == lVar32) {
LAB_140900370:
                lVar32 = *param_1;
                lVar10 = *plVar35;
                uVar28 = *(undefined4 *)((longlong)plVar35 + 4);
                lVar13 = plVar35[1];
                uVar4 = *(undefined4 *)((longlong)plVar35 + 0xc);
                *(longlong *)(lVar32 + 0x10 + lVar27) = plVar35[2];
                puVar22 = (undefined4 *)(lVar32 + lVar27);
                *puVar22 = (int)lVar10;
                puVar22[1] = uVar28;
                puVar22[2] = (int)lVar13;
                puVar22[3] = uVar4;
                FUN_1457567e6(param_1,iVar7);
                goto LAB_140900031;
              }
              if ((lVar32 != 0) && (lVar3 != 0)) {
                iVar21 = *(int *)(lVar32 + 0x38);
                iVar16 = *(int *)(lVar3 + 0x38);
                if (((iVar21 <= iVar16) &&
                    (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar21 * 8) ==
                     lVar32 + 0x30)) ||
                   ((iVar16 <= iVar21 &&
                    (*(longlong *)(*(longlong *)(lVar32 + 0x30) + (longlong)iVar16 * 8) ==
                     lVar3 + 0x30)))) goto LAB_140900370;
              }
            }
            lVar32 = *param_1;
            iVar21 = *(int *)(lVar32 + 0x18 + lVar27);
          } while (iVar21 != -1);
          uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
        }
      }
      if (uVar6 < 4) {
        iVar21 = 1;
      }
      else {
        uVar11 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
        lVar32 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar32 & 0x1f);
      }
      if (((int)uVar6 < 1) || (iVar21 <= (int)param_1[9])) {
        uVar23 = (int)param_1[9] - 1U & uVar23;
        *(uint *)((longlong)plVar35 + 0x1c) = uVar23;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar18;
        }
        *(undefined4 *)(plVar35 + 3) =
             *(undefined4 *)
              ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
        plVar35 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar35 = plVar18;
        }
        *(int *)((longlong)plVar35 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
             iVar7;
      }
      else {
        *(int *)(param_1 + 9) = iVar21;
        FUN_1409005bc(param_1);
      }
LAB_140900031:
      uVar31 = uVar31 & ~(uint)uVar24;
      puVar8 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_2 + 2);
      }
      iVar21 = (int)param_2[5];
      iVar7 = (int)uVar34;
      lVar32 = (longlong)iVar7;
      uVar6 = puVar8[lVar32] & uVar31;
      if (uVar6 == 0) {
        iVar16 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar16 = iVar21 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar30 = iVar30 + 0x20;
        iVar17 = iVar16;
        if (iVar16 < iVar7) {
          iVar17 = iVar7;
        }
        if (iVar7 < iVar16) {
          lVar27 = 0;
          do {
            uVar6 = puVar8[lVar32 + lVar27 + 1];
            if (uVar6 != 0) {
              uVar34 = (ulonglong)(iVar7 + (int)lVar27 + 1);
              uVar31 = 0xffffffff;
              goto LAB_1409000ad;
            }
            iVar30 = iVar30 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar17 - lVar32 != lVar27);
          uVar31 = 0xffffffff;
          iVar7 = iVar17;
        }
        uVar34 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar21;
      }
      else {
LAB_1409000ad:
        uVar24 = (ulonglong)(-uVar6 & uVar6);
        uVar11 = uVar24 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar7 = (iVar30 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar7) {
          iVar7 = iVar21;
        }
      }
    } while (iVar7 != iVar29);
  }
  return;
}



// FUNCTION 1409005bc FUN_1409005bc body=882 status=ok
// SIG undefined FUN_1409005bc(void)

void FUN_1409005bc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  
  plVar10 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar10,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar18 = *(uint *)(param_1 + 9);
  if (uVar18 == 1) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
  }
  else {
    if (uVar18 == 0) {
      return;
    }
    FUN_1446efa72(plVar10,0,uVar18,4);
    if ((int)uVar18 < 1) goto LAB_140900622;
  }
  uVar3 = 0;
  do {
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = plVar1;
    }
    *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar18 != uVar3);
LAB_140900622:
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar13 = 0;
    uVar20 = 1;
    iVar19 = 0;
    iVar14 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 2);
    }
    uVar18 = *puVar9;
    if (uVar18 == 0) {
      iVar14 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar14 = iVar4 + -1;
      }
      uVar13 = 0;
      uVar20 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar20 = uVar13;
      }
      iVar14 = 0;
      do {
        if (uVar20 == uVar13) {
          return;
        }
        iVar14 = iVar14 + 0x20;
        uVar18 = puVar9[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar13 = 0;
      iVar14 = 0;
    }
    uVar20 = (ulonglong)(-uVar18 & uVar18);
    uVar5 = uVar20 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar19 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar19) {
      iVar19 = iVar4;
    }
  }
  if (iVar19 < iVar4) {
    uVar18 = 0xffffffff;
    do {
      lVar17 = *param_1;
      lVar12 = *(longlong *)(lVar17 + 8 + (longlong)iVar19 * 0x20);
      if (lVar12 == 0) {
        lVar12 = FUN_141848e32();
      }
      puVar15 = (undefined8 *)(lVar17 + (longlong)iVar19 * 0x20);
      uVar2 = *puVar15;
      uVar5 = FUN_14477b664(lVar12);
      uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
      uVar6 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar6 = uVar6 >> 0x10 ^ uVar6;
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar11 = (uint)uVar2 & 0xffff;
      uVar3 = uVar6 >> 0xd ^
              (((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) - uVar6;
      uVar11 = uVar3 << 8 ^ (-0x61c88647 - uVar6) - uVar3;
      uVar16 = uVar11 >> 0xd ^ (uVar6 - uVar3) - uVar11;
      uVar3 = uVar16 >> 0xc ^ (uVar3 - uVar11) - uVar16;
      uVar6 = uVar3 << 0x10 ^ (uVar11 - uVar16) - uVar3;
      uVar11 = uVar6 >> 5 ^ (uVar16 - uVar3) - uVar6;
      uVar16 = uVar11 >> 3 ^ (uVar3 - uVar6) - uVar11;
      uVar3 = uVar16 << 10 ^ (uVar6 - uVar11) - uVar16;
      uVar5 = (longlong)(int)(uVar3 >> 0xf ^ uVar11 - (uVar16 + uVar3)) &
              (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar5;
      *(int *)((longlong)puVar15 + 0x1c) = iVar4;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      *(undefined4 *)(puVar15 + 3) =
           *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar1;
      }
      *(int *)((longlong)plVar10 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar19;
      uVar18 = uVar18 & ~(uint)uVar20;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar19 = (int)uVar13;
      lVar17 = (longlong)iVar19;
      uVar3 = puVar9[lVar17] & uVar18;
      if (uVar3 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar19) {
          iVar8 = iVar19;
        }
        if (iVar7 <= iVar19) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar3 = puVar9[lVar17 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar17 == lVar12) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar19 + (int)lVar12 + 1);
        uVar18 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar3 & uVar3);
      uVar5 = uVar20 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar19 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar4);
  }
  return;
}



// FUNCTION 14090092e FUN_14090092e body=838 status=ok
// SIG undefined FUN_14090092e(void)

void FUN_14090092e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [4];
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d8 [2];
  longlong local_c8 [2];
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x74))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
      (plVar5 = (longlong *)*plVar5, plVar3 = plVar5, plVar5 != (longlong *)0x0)))) {
    do {
      if (plVar3[5] != 0) {
        lVar2 = *(longlong *)(plVar3[5] + 0x30);
        if (lVar2 != 0) {
          uVar8 = *(undefined8 *)(lVar2 + 0x360);
          goto LAB_1409009e8;
        }
        break;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
    } while (plVar3 != (longlong *)0x0);
    uVar8 = 0;
LAB_1409009e8:
    lVar2 = (**(code **)(*plVar5 + 0x2b0))(plVar5);
    if ((lVar2 != 0) && (plVar5 = (longlong *)FUN_1401499e8(lVar2), plVar5 != (longlong *)0x0)) {
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_98 = *param_2;
      local_90 = *(undefined4 *)(param_2 + 1);
      FUN_1447715ec(&local_88,param_2 + 2);
      local_e8[0] = 0;
      local_e4 = 0;
      local_dc = 0;
      local_f8 = DAT_14cb70240;
      local_f0 = DAT_14cb70248;
      FUN_144928d62(&local_88,5);
      local_a8 = 0;
      uStack_a0 = 0;
      if ((longlong)*(int *)(param_3 + 0x98) != 0) {
        lVar2 = *(longlong *)(param_3 + 0x90);
        lVar7 = (longlong)*(int *)(param_3 + 0x98) * 0x18;
        do {
          plVar3 = (longlong *)FUN_144a792bc(lVar2);
          lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar8);
          if (lVar4 != 0) {
            FUN_1400b22c2(local_c8,&DAT_149eb5f2c);
            FUN_14475cc44(lVar4 + 8,local_d8);
            FUN_1401c7f3e(&local_b8,local_d8,local_c8);
            iVar9 = local_b0 + -1;
            if (local_b0 == 0) {
              iVar9 = 0;
            }
            FUN_1400020e8(&local_a8,local_b8,iVar9);
            if (local_b8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_d8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
          }
          lVar2 = lVar2 + 0x18;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
      }
      FUN_1400b22c2(&local_b8,&DAT_149eb5f2c);
      iVar9 = local_b0 + -1;
      puVar6 = local_b8;
      if (local_b0 == 0) {
        puVar6 = &DAT_149dfb77a;
        iVar9 = 0;
      }
      FUN_140b127b8(&local_a8,puVar6,iVar9,1);
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar9 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar9 = 0;
      }
      FUN_1446f82e2(&local_b8,iVar9,local_a8,1);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_144976b9c(local_e8,local_b8);
      (**(code **)(*plVar5 + 0xb0))(plVar5,&local_98,local_e8,0);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140900c8a FUN_140900c8a body=271 status=ok
// SIG undefined FUN_140900c8a(void)

void FUN_140900c8a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  lVar2 = *(longlong *)(*param_2 + 0x6a0);
  local_3c = 0xffffffff;
  FUN_140900d9a(param_1 + 0x500,&local_3c,*(undefined4 *)(param_1 + 0x50));
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar8 = 0xc;
    lVar7 = 0;
    do {
      FUN_140900ef4(*(longlong *)(param_1 + 0x48) + lVar8 + -0xc,*(undefined8 *)(*param_2 + 0x140));
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x48) + -4 + lVar8);
      if ((int)uVar5 < 0) {
        uVar3 = 0xffffffff;
        if ((((~uVar5 & 0x7fffffff) != 0) && (uVar5 = (int)(uVar5 * 2) >> 1, -1 < (int)uVar5)) &&
           ((int)uVar5 < *(int *)(lVar2 + 0x88))) {
          puVar4 = (undefined4 *)((ulonglong)uVar5 * 4 + *(longlong *)(lVar2 + 0x80));
          goto LAB_140900d45;
        }
      }
      else {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar8);
LAB_140900d45:
        uVar3 = *puVar4;
      }
      lVar6 = *(longlong *)(param_1 + 0x520);
      if (*(longlong *)(param_1 + 0x520) == 0) {
        lVar6 = param_1 + 0x500;
      }
      *(undefined4 *)(lVar6 + lVar7 * 4) = uVar3;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x50));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140900d9a FUN_140900d9a body=120 status=ok
// SIG undefined FUN_140900d9a(void)

void FUN_140900d9a(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != param_3) {
    FUN_140900e12(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_14791f438(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = *param_2;
  }
  return;
}



// FUNCTION 140900e12 FUN_140900e12 body=94 status=ok
// SIG undefined FUN_140900e12(void)

void FUN_140900e12(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  FUN_140900e70(param_1,*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140900e70 FUN_140900e70 body=131 status=ok
// SIG undefined FUN_140900e70(void)

void FUN_140900e70(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,4);
  return;
}



// FUNCTION 140900ef4 FUN_140900ef4 body=228 status=ok
// SIG undefined FUN_140900ef4(void)

undefined4 FUN_140900ef4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_2 == 0) || (lVar2 = *param_1, lVar2 == 0)) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x7fffffff;
    uVar5 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    if (*(int *)(param_2 + 0xe8) != *(int *)(param_2 + 0x114)) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar7 = (uint)lVar2 & 0xffff;
      lVar6 = param_2 + 0x118;
      if (*(longlong *)(param_2 + 0x120) != 0) {
        lVar6 = *(longlong *)(param_2 + 0x120);
      }
      iVar8 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(param_2 + 0x128) - 1U &
                               (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar8 * 0x14);
          if (*plVar1 == lVar2) {
            if ((plVar1 != (longlong *)0x0) && ((uint *)(plVar1 + 1) != (uint *)0x0)) {
              uVar4 = *(uint *)(plVar1 + 1) | 0x80000000;
            }
            break;
          }
          iVar8 = *(int *)((longlong)plVar1 + 0xc);
        } while (iVar8 != -1);
      }
    }
    *(uint *)(param_1 + 1) = uVar4;
    uVar5 = CONCAT31((int3)(~uVar4 >> 8),(~uVar4 & 0x7fffffff) != 0);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return uVar5;
}



// FUNCTION 140900fd8 FUN_140900fd8 body=338 status=ok
// SIG undefined FUN_140900fd8(void)

undefined4 * FUN_140900fd8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xd] = 0x80;
  param_1[0xc] = param_2;
  uVar6 = param_2 + 0x1f;
  if (uVar6 < 0x20) goto LAB_1409010b9;
  puVar5 = param_1 + 6;
  puVar4 = puVar5;
  if (uVar6 < 0xa0) {
LAB_140901118:
    uVar6 = uVar6 >> 3 & 0xfffffffc;
  }
  else {
    FUN_1446efa72(param_1 + 10,0,uVar6 >> 5,4);
    param_1[0xd] = uVar6 & 0xffffffe0;
    puVar4 = *(undefined4 **)(param_1 + 10);
    if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
      puVar4 = puVar5;
    }
    if (uVar6 < 0x120) goto LAB_140901118;
    uVar6 = (uVar6 >> 5) << 2;
  }
  memset(puVar4,0,(ulonglong)uVar6);
  iVar1 = param_1[0xc];
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 10);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = puVar4;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    puVar5[iVar2 >> 5] = (uint)(puVar5[iVar2 >> 5] << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
LAB_1409010b9:
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0xbf800000;
  *(undefined1 (*) [16])(param_1 + 0x5c) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0x3ff0000000000000;
  FUN_14090112a(param_1 + 0xe,param_3,1);
  return param_1;
}



// FUNCTION 14090112a FUN_14090112a body=115 status=ok
// SIG undefined FUN_14090112a(void)

void FUN_14090112a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140901262(param_1,iVar1);
    }
    FUN_14090119e((longlong)iVar1 * 0x1980 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_147332ff4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14090119e FUN_14090119e body=195 status=ok
// SIG undefined FUN_14090119e(void)

void FUN_14090119e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144939946(param_1);
    *(undefined8 *)(param_1 + 0xba0) = 0;
    *(undefined8 *)(param_1 + 0xba8) = 0;
    *(undefined4 *)(param_1 + 0xbb0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xbc0) = 0xffffffff;
    FUN_144939946(param_1 + 0xbd0);
    *(undefined8 *)(param_1 + 6000) = 0;
    *(undefined8 *)(param_1 + 0x1778) = 0;
    *(undefined4 *)(param_1 + 0x1780) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x185c) = 0;
    *(undefined4 *)(param_1 + 0x187c) = 0;
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = 0xffffffff7fffffff;
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18ac) = 0;
    *(undefined8 *)(param_1 + 0x18b4) = 0;
    *(undefined8 *)(param_1 + 0x18bc) = 0;
    *(undefined8 *)(param_1 + 0x18c4) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = 0;
    *(undefined8 *)(param_1 + 0x1968) = 0;
    *(undefined8 *)(param_1 + 0x196c) = 0;
    *(undefined8 *)(param_1 + 0x1974) = 0;
    param_1 = param_1 + 0x1980;
  }
  return;
}



// FUNCTION 140901262 FUN_140901262 body=271 status=ok
// SIG undefined FUN_140901262(void)

void FUN_140901262(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x1980;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1980)) {
      uVar5 = uVar4 / 0x1980 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1980,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14090137a FUN_14090137a body=301 status=ok
// SIG undefined FUN_14090137a(void)

undefined8 * FUN_14090137a(undefined8 *param_1)

{
  FUN_1409014a8();
  *param_1 = &PTR_FUN_14b7f3e50;
  param_1[5] = &PTR_FUN_14b7f4950;
  param_1[6] = &PTR_LAB_14b7f4990;
  param_1[0x55] = &PTR_FUN_14b7f49e0;
  param_1[0x56] = &PTR_FUN_14b7f4a60;
  param_1[0x57] = &PTR_FUN_14b7f4a70;
  param_1[0xc4] = &PTR_FUN_14b7f4aa0;
  param_1[0xff] = &PTR_FUN_14b7f4ab0;
  param_1[0x17e] = &PTR_FUN_14b7f4ae0;
  param_1[0x186] = &PTR_FUN_14b7f4af0;
  param_1[0x187] = &PTR_FUN_14b7f4b90;
  param_1[0x188] = &PTR_FUN_14b7f4bb0;
  param_1[0x189] = &PTR_FUN_14b7f4bd0;
  param_1[0x1da] = &PTR_FUN_14b7f4be8;
  param_1[0x1db] = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf11) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf19) = 0;
  memset(param_1 + 0x1e5,0,0x82);
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc1) = 0;
  return param_1;
}



// FUNCTION 1409014a8 FUN_1409014a8 body=567 status=ok
// SIG undefined FUN_1409014a8(void)

undefined8 * FUN_1409014a8(undefined8 *param_1)

{
  FUN_1409016e0();
  *param_1 = &PTR_FUN_14b16cd80;
  param_1[5] = &PTR_FUN_14b16d870;
  param_1[6] = &PTR_LAB_14b16d8b0;
  param_1[0x55] = &PTR_FUN_14b16d900;
  param_1[0x56] = &PTR_FUN_14b16d980;
  param_1[0x57] = &PTR_FUN_14b16d990;
  param_1[0xc4] = &PTR_FUN_14b16d9c0;
  param_1[0xff] = &PTR_FUN_14b16d9d0;
  param_1[0x17e] = &PTR_FUN_14b16da00;
  param_1[0x186] = &PTR_FUN_14b16da10;
  param_1[0x187] = &PTR_FUN_14b16dab0;
  param_1[0x188] = &PTR_FUN_14b16dad0;
  param_1[0x189] = &PTR_FUN_14b16daf0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 2;
  param_1[399] = 0;
  param_1[400] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc74) = 0;
  *(undefined2 *)(param_1 + 400) = 0xffff;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  *(undefined2 *)(param_1 + 0x193) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xca7) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcab) = 1;
  param_1[0x196] = 0;
  *(undefined1 *)(param_1 + 0x197) = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0x200000000;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0x200000000;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd24) = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd41) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd49) = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd17) = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  *(undefined4 *)(param_1 + 0x1ad) = 2;
  *(undefined4 *)((longlong)param_1 + 0xd7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd74) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 2;
  *(undefined8 *)((longlong)param_1 + 0xd91) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8c) = 0;
  *(undefined1 *)(param_1 + 0x1c7) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe51) = 0;
  param_1[0x1c1] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  *(undefined1 *)(param_1 + 0x1cf) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined8 *)((longlong)param_1 + 0xea4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeac) = 0;
  return param_1;
}



// FUNCTION 1409016e0 FUN_1409016e0 body=256 status=ok
// SIG undefined FUN_1409016e0(void)

undefined8 * FUN_1409016e0(undefined8 *param_1)

{
  FUN_1409017e0();
  *param_1 = &PTR_FUN_14ab87d60;
  param_1[5] = &PTR_FUN_14ab88850;
  param_1[6] = &PTR_LAB_14ab88890;
  param_1[0x55] = &PTR_FUN_14ab888e0;
  param_1[0x56] = &PTR_FUN_14ab88960;
  param_1[0x57] = &PTR_FUN_14ab88970;
  param_1[0xc4] = &PTR_FUN_14ab889a0;
  param_1[0xff] = &PTR_FUN_14ab889b0;
  param_1[0x17e] = &PTR_LAB_14ab74bb0;
  FUN_1403a3c5e(param_1 + 0x17f,param_1,param_1 + 0x17e);
  *param_1 = &PTR_FUN_14ab87d60;
  param_1[5] = &PTR_FUN_14ab88850;
  param_1[6] = &PTR_LAB_14ab88890;
  param_1[0x55] = &PTR_FUN_14ab888e0;
  param_1[0x56] = &PTR_FUN_14ab88960;
  param_1[0x57] = &PTR_FUN_14ab88970;
  param_1[0xc4] = &PTR_FUN_14ab889a0;
  param_1[0xff] = &PTR_FUN_14ab889b0;
  param_1[0x17e] = &PTR_FUN_14ab889e0;
  *(undefined1 *)((longlong)param_1 + 0xc29) = 0;
  return param_1;
}



// FUNCTION 1409017e0 FUN_1409017e0 body=714 status=ok
// SIG undefined FUN_1409017e0(void)

undefined8 * FUN_1409017e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_14067239a();
  *param_1 = &PTR_FUN_14ab5c1f0;
  param_1[5] = &PTR_FUN_14ab5cce0;
  param_1[6] = &PTR_LAB_14ab5cd20;
  param_1[0x55] = &PTR_FUN_14ab5cd70;
  param_1[0x56] = &PTR_FUN_14ab5cdf0;
  param_1[0x57] = &DAT_14ab5ce00;
  param_1[0xc4] = &PTR_FUN_14ab5ce30;
  param_1[0xff] = &PTR_FUN_14ab5ce40;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0xffffffff;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined2 *)(param_1 + 0x109) = 1;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0x45fa0000;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0x457a0000;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0x457a0000;
  param_1[0x126] = 0;
  param_1[0x127] = 0x400000000;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x128) = 1;
  *(undefined8 *)((longlong)param_1 + 0x944) = 0x4461000000000000;
  *(undefined1 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  *(undefined1 *)(param_1 + 299) = 0;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0x45fa0000;
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x964) = 0x457a0000;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x134) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c4) = 0;
  param_1[0x13a] = 2;
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x4000;
  param_1[0x151] = 0;
  param_1[0x152] = 0x400000000;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0x400000000;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x16d] = 0;
  FUN_140901aaa(param_1 + 0x16e);
  param_1[0x175] = DAT_14cb1afc8;
  lVar3 = DAT_14cb1afd0;
  param_1[0x176] = DAT_14cb1afd0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x17d] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbdc) = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(undefined1 *)(param_1 + 0x109) = 1;
  if (((*(uint *)(param_1 + 1) & 0x30) == 0) && (param_1[0x102] == 0)) {
    plVar2 = param_1 + 0x100;
    param_1[0x103] = &DAT_14cb1afb8;
    param_1[0x102] = param_1;
    lVar3 = DAT_14cb1afb8;
    while( true ) {
      param_1[0x100] = lVar3;
      LOCK();
      lVar4 = *(longlong *)param_1[0x103];
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *(longlong *)param_1[0x103] = (longlong)plVar2;
        lVar4 = lVar3;
      }
      UNLOCK();
      if (bVar5) break;
      param_1[0x100] = lVar4;
      lVar3 = *(longlong *)param_1[0x103];
    }
    if (*plVar2 != 0) {
      *(longlong **)(*plVar2 + 8) = plVar2;
    }
  }
  return param_1;
}



// FUNCTION 140901aaa FUN_140901aaa body=265 status=ok
// SIG undefined FUN_140901aaa(void)

undefined1 * FUN_140901aaa(undefined1 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_50 = (longlong *)FUN_14001cc68(0x28,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14ab66d00;
  local_58 = local_50 + 2;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[2] = (longlong)&PTR_FUN_14ab5d330;
  FUN_140901bb4(local_48);
  FUN_14029d0b6(param_1 + 8,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140901bb4 FUN_140901bb4 body=301 status=ok
// SIG undefined FUN_140901bb4(void)

undefined8 * FUN_140901bb4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  
  plVar6 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *param_1 = plVar6;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar6;
    param_1[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar6 + 8))();
    param_1[2] = 0;
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0xc);
      *(uint *)(param_1 + 2) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar4 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar5 + 0x10);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(lVar5 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar4 = iVar7;
        }
      }
      goto LAB_140901c3b;
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  iVar4 = 0;
LAB_140901c3b:
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  return param_1;
}



// FUNCTION 140901ce2 FUN_140901ce2 body=88 status=ok
// SIG undefined FUN_140901ce2(void)

void FUN_140901ce2(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
            (*(longlong **)(param_1 + 0xb0),param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
            (*(longlong **)(param_1 + 0xb0),param_1 + 0x38);
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
            (*(longlong **)(param_1 + 0xb0),param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000140901d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
            (*(longlong **)(param_1 + 0xb0),param_1 + 0x68);
  return;
}



// FUNCTION 140901d3a FUN_140901d3a body=434 status=ok
// SIG undefined FUN_140901d3a(void)

void FUN_140901d3a(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x20) < 0x200001) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      if (DAT_14cad7828 != -1) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        uVar5 = DAT_14c7590b0;
        UNLOCK();
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
        uVar2 = *(uint *)(lVar9 + 0x20);
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar9);
        }
        uVar10 = 0;
        uVar8 = 0x10;
        do {
          uVar7 = uVar10 + uVar8 >> 1;
          uVar6 = uVar7;
          if (uVar2 <= (uint)(&DAT_14a8bdfa0)[uVar7 - 1]) {
            uVar6 = uVar10;
            uVar8 = uVar7;
          }
          uVar10 = uVar6;
        } while (1 < uVar8 - uVar10);
        uVar8 = DAT_14c7590b0 % 3;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad73e8);
        lVar4 = (ulonglong)uVar10 * 0x10 + (ulonglong)(uVar8 << 8);
        plVar11 = (longlong *)(&DAT_14cad73d8 + lVar4 + 0x138);
        iVar3 = *(int *)(&DAT_14cad73d8 + lVar4 + 0x140);
        *(uint *)(&DAT_14cad73d8 + lVar4 + 0x140) = iVar3 + 1U;
        if (*(uint *)(&DAT_14cad73d8 + lVar4 + 0x144) < iVar3 + 1U) {
          FUN_14011c5f8(plVar11,iVar3);
        }
        lVar4 = *plVar11;
        *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar9;
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
        *(ulonglong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = CONCAT44(uVar5,uVar2);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad73e8);
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar9);
        }
      }
      LOCK();
      puVar1 = (uint *)(lVar9 + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar9);
      }
      lVar9 = *param_2;
      if (lVar9 == 0) {
        return;
      }
    }
    *param_2 = 0;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar9);
      return;
    }
  }
  return;
}



// FUNCTION 140901eec FUN_140901eec body=76 status=ok
// SIG undefined FUN_140901eec(void)

undefined8 FUN_140901eec(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140901f38(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140901f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140901f38 FUN_140901f38 body=191 status=ok
// SIG undefined FUN_140901f38(void)

longlong FUN_140901f38(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140901ff8();
  lVar3 = *param_1;
  if (DAT_14cb703d0 != DAT_14cb703fc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb70400;
    if (DAT_14cb70408 != (undefined *)0x0) {
      puVar7 = DAT_14cb70408;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb70410 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb703c8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb703c0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140901ff8 FUN_140901ff8 body=152 status=ok
// SIG undefined FUN_140901ff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140901ff8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb70418) {
    FUN_144b3d300(&DAT_14cb70418);
    if (DAT_14cb70418 == -1) {
      DAT_14cb703e8 = 0;
      DAT_14cb703f0 = 0;
      DAT_14cb703c8 = 0;
      _DAT_14cb703d0 = 0;
      _DAT_14cb703f4 = 0xffffffff00000080;
      DAT_14cb703fc = 0;
      DAT_14cb70408 = 0;
      DAT_14cb70410 = 0;
      atexit(FUN_143c8ddf8);
      _Init_thread_footer(&DAT_14cb70418);
      return;
    }
  }
  return;
}



// FUNCTION 140902090 FUN_140902090 body=160 status=ok
// SIG undefined FUN_140902090(void)

void FUN_140902090(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_140902130((longlong *)(param_1 + 0x18),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  *(undefined8 *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = param_2[1];
  param_2[1] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (param_2[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_2[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 140902130 FUN_140902130 body=269 status=ok
// SIG undefined FUN_140902130(void)

void FUN_140902130(longlong param_1,int param_2)

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



// FUNCTION 14090223e FUN_14090223e body=556 status=ok
// SIG undefined FUN_14090223e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14090223e(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [7];
  char local_91;
  longlong local_90 [5];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x27c);
  *(int *)(param_1 + 0x27c) = iVar1 + 1;
  uVar5 = (ulonglong)*(int *)(param_1 + 0x270);
  if ((longlong)uVar5 < 1) {
    *(int *)(param_1 + 0x27c) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while ((lVar7 = *(longlong *)(param_1 + 0x268), *(int *)(lVar7 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(lVar7 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        cVar4 = (**(code **)(*plVar2 + 0x60))();
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + -1;
          if (!bVar6) goto LAB_1409022e5;
          goto LAB_1409023b0;
        }
      }
      uVar5 = uVar9 - 1;
      bVar6 = true;
    } while (1 < uVar9);
    *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + -1;
LAB_1409023b0:
    FUN_14474d06a((longlong *)(param_1 + 0x268),0);
  }
LAB_1409022e5:
  if (((param_2 != '\0') && ((*(byte *)(param_1 + 0x243) & 1) != 0)) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x3f0), lVar8 != 0)) {
    cVar4 = FUN_14090251e(lVar8);
    if (cVar4 != '\0') {
      FUN_140902526(lVar8);
    }
  }
  cVar4 = FUN_1408f4ed2(param_1);
  local_68 = 0;
  local_60 = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
LAB_14090232f:
  lVar7 = param_1;
  lVar8 = lVar7;
  if (*(longlong *)(lVar7 + 0x20) != 0) goto code_r0x00014090233e;
  goto LAB_14090234c;
code_r0x00014090233e:
  param_1 = *(longlong *)(lVar7 + 0x20);
  if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) {
    lVar8 = FUN_142840154(lVar7);
LAB_14090234c:
    if (lVar8 != 0) {
      if (cVar4 == '\0') {
        local_90[0] = lVar8;
        FUN_14096d82e(local_90 + 1,local_98,local_90,&local_91);
        if ((local_91 == '\0') && (local_90[0] != DAT_14c951640)) {
          FUN_147b99a18();
        }
        local_40 = 0;
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        local_40 = 0;
      }
      FUN_14090246c(local_90 + 1);
      if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    param_1 = *(longlong *)(lVar7 + 0x20);
  }
  goto LAB_14090232f;
}



// FUNCTION 14090246c FUN_14090246c body=55 status=ok
// SIG undefined FUN_14090246c(void)

void FUN_14090246c(longlong *param_1)

{
  FUN_1409024a4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409024a4 FUN_1409024a4 body=121 status=ok
// SIG undefined FUN_1409024a4(void)

void FUN_1409024a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14090251e FUN_14090251e body=8 status=ok
// SIG undefined FUN_14090251e(void)

bool FUN_14090251e(longlong param_1)

{
  return *(int *)(param_1 + 0x48) == 2;
}



// FUNCTION 140902526 FUN_140902526 body=626 status=ok
// SIG undefined FUN_140902526(void)

void FUN_140902526(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
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
  if (*(int *)(param_1 + 0x48) == 2) {
    *(undefined4 *)(param_1 + 0x48) = 3;
    if (DAT_14cb10130 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar3 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
           (lVar5 = lVar4,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar3 + 0x30)) {
          lVar5 = 0;
        }
      } while ((lVar5 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    }
    if (*(longlong *)(param_1 + 0x40) == lVar5) {
      FUN_14621444e();
    }
    FUN_1464118e2(param_1);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      FUN_1437b9a00(*(longlong *)(param_1 + 0x40),param_1);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_14640ffc2();
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_145a16c20(*(longlong *)(param_1 + 0x40) + 0x588,param_1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14090279a FUN_14090279a body=917 status=ok
// SIG undefined FUN_14090279a(void)

longlong * FUN_14090279a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  if (*param_2 != 0) {
    cVar4 = (**(code **)(*param_1 + 0x300))();
    if (cVar4 == '\0') {
      plVar1 = param_1 + 0x5d;
      plVar13 = param_1 + 0x5f;
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      plStack_60 = plVar13;
      if ((int)param_1[0x62] == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar11 = (int)param_1[0x62];
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar12 = local_78;
      local_88 = local_68;
      uStack_80 = plStack_60;
      local_78._4_4_ = (int)(local_58 >> 0x20);
      iVar8 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar11) || (local_78 = uVar12, plStack_60 != plVar13)) {
        do {
          local_78 = uVar12;
          lVar5 = *local_90;
          lVar6 = *(longlong *)(lVar5 + 0x10 + (longlong)iVar8 * 0x20);
          if (lVar6 != 0) {
            FUN_144837e54(lVar6,0);
            plVar15 = *(longlong **)(*(longlong *)(lVar5 + (longlong)iVar8 * 0x20 + 0x10) + 0x30);
            if (plVar15 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar15 + 8))(plVar15);
              lVar6 = FUN_140902b36();
              if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                  (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                   == lVar6 + 0x30)) &&
                 (FUN_140902b70(plVar15,&local_68), local_68 == (longlong *)*local_98))
              goto LAB_140902a1e;
            }
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar8 = local_78._4_4_;
          uVar12 = local_78;
        } while ((uStack_80 != plVar13 || local_78._4_4_ != iVar11) || local_90 != plVar1);
      }
    }
    else {
      local_a0 = param_1 + 0x41;
      local_90 = (longlong *)&DAT_100000000;
      uStack_80 = (longlong *)&DAT_ffffffff;
      local_78 = local_78 & 0xffffffff00000000;
      local_88 = local_a0;
      if ((int)param_1[0x44] == 0) {
        uVar12 = 1;
        uVar14 = 0xffffffff;
        iVar11 = 0;
        iVar10 = 0;
        iVar7 = 0;
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_90);
        uVar12 = (ulonglong)local_90 >> 0x20;
        iVar11 = (int)param_1[0x44];
        iVar8 = (int)local_90;
        uVar14 = (uint)uStack_80;
        iVar7 = uStack_80._4_4_;
        iVar10 = (uint)local_78;
      }
      plVar1 = local_88;
      if (iVar7 != iVar11 || local_88 != local_a0) {
        do {
          local_a4 = iVar11;
          plVar15 = *(longlong **)(param_1[0x3f] + 0x10 + (longlong)iVar7 * 0x70);
          if (plVar15 != (longlong *)0x0) {
            lVar5 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar6 = FUN_140902b36();
            if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
               ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30 &&
                (FUN_140902b70(plVar15,&local_90), local_90 == (longlong *)*local_98))))
            goto LAB_140902a1e;
          }
          uVar14 = uVar14 & ~(uint)uVar12;
          plVar13 = (longlong *)plVar1[2];
          if ((longlong *)plVar1[2] == (longlong *)0x0) {
            plVar13 = plVar1;
          }
          iVar11 = (int)plVar1[3];
          lVar5 = (longlong)iVar8;
          uVar9 = *(uint *)((longlong)plVar13 + lVar5 * 4) & uVar14;
          if (uVar9 == 0) {
            iVar7 = iVar11 + 0x1e;
            if (-1 < iVar11 + -1) {
              iVar7 = iVar11 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar3 = iVar7;
            if (iVar7 < iVar8) {
              iVar3 = iVar8;
            }
            if (iVar8 < iVar7) {
              lVar6 = 0;
              do {
                uVar9 = *(uint *)((longlong)plVar13 + lVar6 * 4 + lVar5 * 4 + 4);
                if (uVar9 != 0) {
                  iVar8 = iVar8 + (int)lVar6 + 1;
                  uVar14 = 0xffffffff;
                  goto LAB_140902935;
                }
                iVar10 = iVar10 + 0x20;
                lVar6 = lVar6 + 1;
              } while (iVar3 - lVar5 != lVar6);
              uVar14 = 0xffffffff;
              iVar8 = iVar3;
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar11;
          }
          else {
LAB_140902935:
            uVar12 = (ulonglong)(-uVar9 & uVar9);
            uVar2 = uVar12 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar7 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar11 <= iVar7) {
              iVar7 = iVar11;
            }
          }
          iVar11 = local_a4;
        } while (iVar7 != local_a4 || plVar1 != local_a0);
      }
    }
  }
  plVar15 = (longlong *)0x0;
LAB_140902a1e:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar15;
}



// FUNCTION 140902b36 FUN_140902b36 body=57 status=ok
// SIG undefined FUN_140902b36(void)

void FUN_140902b36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60390 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60390 = FUN_140002ddd(FUN_1464ec04c,uVar1,L"GbxLevelStreamingDef");
  }
  return;
}



// FUNCTION 140902b70 FUN_140902b70 body=323 status=ok
// SIG undefined FUN_140902b70(void)

undefined8 * FUN_140902b70(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    cVar1 = FUN_140902d42(*(undefined8 *)(param_1 + 0x24));
    if (cVar1 == '\0') {
      FUN_1400021e4((undefined8 *)(param_1 + 0x24),&local_88);
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = local_88;
      iVar3 = 0;
      iVar2 = local_80 + -1;
      if (local_80 == 0) {
        iVar2 = 0;
      }
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar2);
      FUN_14475bf92(&local_78);
      local_48 = lStack_70;
      if (lStack_70 == 0) {
        local_58 = 0;
        uStack_50 = 0;
      }
      else {
        FUN_1400021e4(&local_48,&local_58);
        iVar3 = (int)uStack_50;
      }
      iVar2 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(param_2,iVar2,local_58,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_2 = *(undefined8 *)(param_1 + 0x24);
    }
  }
  else {
    local_78 = *(longlong *)(param_1 + 0x38);
    FUN_140902cb4(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140902cb4 FUN_140902cb4 body=141 status=ok
// SIG undefined FUN_140902cb4(void)

undefined8 * FUN_140902cb4(undefined8 *param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_858 [32];
  wchar_t local_838 [1036];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_858;
  FUN_14026f16c(param_2,local_838,0x40b);
  pwVar1 = wcsrchr(local_838,L'/');
  if (pwVar1 == (wchar_t *)0x0) {
    *param_1 = *param_2;
  }
  else {
    FUN_1446f470e(param_1,pwVar1 + 1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_858) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140902d42 FUN_140902d42 body=122 status=ok
// SIG undefined FUN_140902d42(void)

bool FUN_140902d42(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_838 [40];
  undefined8 local_810;
  short local_808 [1024];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_838;
  local_810 = param_1;
  iVar2 = FUN_140278f2a(&local_810);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = 0;
    do {
      bVar4 = *(short *)((longlong)local_808 + lVar3) == 0x2f;
      bVar1 = !bVar4;
      if (bVar4) break;
      bVar4 = (longlong)iVar2 * 2 + -2 != lVar3;
      lVar3 = lVar3 + 2;
    } while (bVar4);
  }
  if ((local_8 ^ (ulonglong)auStack_838) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140902dbe FUN_140902dbe body=134 status=ok
// SIG undefined FUN_140902dbe(void)

void FUN_140902dbe(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140313b20();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  local_20 = FUN_140902e46();
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



// FUNCTION 140902e46 FUN_140902e46 body=228 status=ok
// SIG undefined FUN_140902e46(void)

longlong FUN_140902e46(void)

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
  if (DAT_14cb44860 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462785c0;
    local_38 = &LAB_1482164dd;
    local_40 = &LAB_1459b5d06;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CommonInput",L"CommonInputPlatformSettings",&DAT_14cb44860,
                  &DAT_1482164dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44860;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140902f2c FUN_140902f2c body=82 status=ok
// SIG undefined FUN_140902f2c(void)

void FUN_140902f2c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      FUN_140902f7e(uVar2,*(undefined4 *)(lVar3 + lVar4),param_2);
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar1 * 4 != lVar4);
  }
  return;
}



// FUNCTION 140902f7e FUN_140902f7e body=972 status=ok
// SIG undefined FUN_140902f7e(void)

void FUN_140902f7e(longlong param_1,int param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (((((DAT_14c75f2c0 == '\x01') && (DAT_14c75f2c1 == '\x01')) &&
       (*(char *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 0x88) == '\x01')) &&
      ((lVar10 = (longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0xa0), lVar10 != 0 &&
       (0 < *(int *)(lVar10 + 0x58))))) &&
     ((*(int *)(lVar10 + 0x58) == 1 ||
      (((DAT_14c993198 & 1) == 0 ||
       (FUN_146d6f5f8(lVar10,(float)param_3), 0 < *(int *)(lVar10 + 0x58))))))) {
    lVar8 = 0x18;
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar10 + 0x50);
      fVar12 = *(float *)(lVar5 + 0xd0 + lVar8);
      if (0.0 < fVar12) {
        fVar14 = -(fVar12 + *(float *)(lVar5 + 0xe8 + lVar8)) / (float)param_3;
        lVar6 = *(longlong *)(lVar10 + 0x18);
        lVar7 = *(longlong *)(lVar10 + 0x30);
        fVar12 = *(float *)(lVar5 + 4 + lVar8);
        fVar13 = *(float *)(lVar5 + 8 + lVar8);
        fVar1 = 0.0;
        if (fVar14 <= 0.0) {
          fVar1 = fVar14;
        }
        fVar15 = -*(float *)(lVar5 + 0xc4 + lVar8) * *(float *)(lVar10 + 0x10) *
                 ((*(float *)(lVar6 + 0x38) * *(float *)(lVar5 + 0x3c + lVar8) +
                   *(float *)(lVar6 + 0x30) * *(float *)(lVar5 + 0x34 + lVar8) +
                   *(float *)(lVar6 + 0x34) * *(float *)(lVar5 + 0x38 + lVar8) +
                  (((*(float *)(lVar6 + 0x28) - *(float *)(lVar7 + 0x28)) * fVar13 +
                   (*(float *)(lVar6 + 0x20) - *(float *)(lVar7 + 0x20)) * *(float *)(lVar5 + lVar8)
                   + (*(float *)(lVar6 + 0x24) - *(float *)(lVar7 + 0x24)) * fVar12) -
                  *(float *)(lVar5 + 0x30 + lVar8))) -
                 (*(float *)(lVar7 + 0x38) * *(float *)(lVar5 + 0x48 + lVar8) +
                 *(float *)(lVar7 + 0x30) * *(float *)(lVar5 + 0x40 + lVar8) +
                 *(float *)(lVar7 + 0x34) * *(float *)(lVar5 + 0x44 + lVar8)));
        fVar14 = *(float *)(lVar5 + 0xdc + lVar8);
        uVar11 = -(uint)(fVar14 + fVar15 < fVar1);
        fVar15 = (float)((uint)(fVar1 - fVar14) & uVar11 | ~uVar11 & (uint)fVar15);
        *(float *)(lVar5 + 0xdc + lVar8) = fVar14 + fVar15;
        fVar14 = *(float *)(lVar5 + lVar8) * fVar15;
        fVar12 = fVar12 * fVar15;
        fVar13 = fVar15 * fVar13;
        fVar1 = *(float *)(lVar10 + 0x48);
        if (1.1754944e-38 < fVar1) {
          fVar2 = *(float *)(lVar5 + 0x84 + lVar8);
          fVar3 = *(float *)(lVar5 + 0x80 + lVar8);
          lVar6 = *(longlong *)(lVar10 + 0x18);
          fVar4 = *(float *)(lVar5 + 0x7c + lVar8);
          *(float *)(lVar6 + 0x20) = fVar1 * fVar14 + *(float *)(lVar6 + 0x20);
          *(float *)(lVar6 + 0x24) = fVar1 * fVar12 + *(float *)(lVar6 + 0x24);
          *(float *)(lVar6 + 0x28) = fVar1 * fVar13 + *(float *)(lVar6 + 0x28);
          *(float *)(lVar6 + 0x30) = fVar4 * fVar15 + *(float *)(lVar6 + 0x30);
          *(float *)(lVar6 + 0x34) = fVar3 * fVar15 + *(float *)(lVar6 + 0x34);
          *(float *)(lVar6 + 0x38) = fVar2 * fVar15 + *(float *)(lVar6 + 0x38);
        }
        fVar1 = *(float *)(lVar10 + 0x4c);
        if (1.1754944e-38 < fVar1) {
          lVar6 = *(longlong *)(lVar10 + 0x30);
          fVar2 = *(float *)(lVar5 + 0xa8 + lVar8);
          fVar3 = *(float *)(lVar5 + 0xa4 + lVar8);
          fVar4 = *(float *)(lVar5 + 0xa0 + lVar8);
          *(float *)(lVar6 + 0x20) = *(float *)(lVar6 + 0x20) - fVar14 * fVar1;
          *(float *)(lVar6 + 0x24) = *(float *)(lVar6 + 0x24) - fVar12 * fVar1;
          *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - fVar13 * fVar1;
          *(float *)(lVar6 + 0x30) = *(float *)(lVar6 + 0x30) - fVar4 * fVar15;
          *(float *)(lVar6 + 0x34) = *(float *)(lVar6 + 0x34) - fVar3 * fVar15;
          *(float *)(lVar6 + 0x38) = *(float *)(lVar6 + 0x38) - fVar2 * fVar15;
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10c;
    } while (lVar9 < *(int *)(lVar10 + 0x58));
  }
  return;
}



// FUNCTION 140903372 FUN_140903372 body=123 status=ok
// SIG undefined FUN_140903372(void)

void FUN_140903372(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((~uVar1 & 0x7fffffff) != 0) {
    lVar3 = param_2 + 0x10;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x20);
    }
    if ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) != 0) {
      return;
    }
  }
  FUN_14019c9f2(param_1,param_2);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0x14;
    do {
      FUN_14019c9f2(lVar3,param_2);
      lVar3 = lVar3 + 0x14;
      lVar2 = lVar2 + -0x14;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1409033ee FUN_1409033ee body=45 status=ok
// SIG undefined FUN_1409033ee(void)

void FUN_1409033ee(undefined8 param_1,longlong param_2)

{
  FUN_14090341b(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14090341b FUN_14090341b body=63 status=ok
// SIG undefined FUN_14090341b(void)

void FUN_14090341b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14090345c FUN_14090345c body=328 status=ok
// SIG undefined FUN_14090345c(void)

void FUN_14090345c(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  pcVar2 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar2 != (code *)&LAB_1427dd5fe) {
    (*pcVar2)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  plVar5 = (longlong *)FUN_1409035a4();
  lVar7 = plVar5[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar7 = plVar5[0x22];
    if (lVar7 == 0) {
      return;
    }
  }
  lVar6 = FUN_14090368a(param_1 + 0x28);
  if ((((lVar6 != 0) && (lVar3 = *(longlong *)(lVar7 + 0x10), lVar3 != 0)) &&
      (*(int *)(lVar3 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    uVar1 = *(uint *)(param_1 + 0x58);
    uVar4 = *(uint *)(lVar7 + 0x68) >> 1 & 2;
    *(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffd | uVar4;
    uVar1 = (uVar1 & 0xfffffff9 | uVar4) + (*(uint *)(lVar7 + 0x68) & 1) * 4;
    *(uint *)(param_1 + 0x58) = uVar1;
    *(uint *)(param_1 + 0x58) = (uVar1 & 0xfffffff7) + (*(uint *)(lVar7 + 0x68) & 2) * 4;
  }
  return;
}



// FUNCTION 1409035a4 FUN_1409035a4 body=228 status=ok
// SIG undefined FUN_1409035a4(void)

longlong FUN_1409035a4(void)

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
  if (DAT_14cb1d740 == 0) {
    local_30 = &local_10;
    local_10 = FUN_145b05304;
    local_20 = &LAB_1457dfdaa;
    local_28 = &LAB_14594a936;
    local_38 = &LAB_147e7746c;
    local_40 = &LAB_146263650;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000e;
    local_60 = 8;
    local_68 = 0x1660;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavigationSystemV1",&DAT_14cb1d740,FUN_146423f44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d740;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090368a FUN_14090368a body=459 status=ok
// SIG undefined FUN_14090368a(void)

longlong FUN_14090368a(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 != 0) {
    if (DAT_14c86a9f8 == '\x01') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar1 == 2) goto LAB_140903842;
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 == DVar3) goto LAB_140903842;
      }
    }
    else {
LAB_140903842:
      if (DAT_14c950c28 != '\0') goto LAB_14090384f;
    }
    lVar4 = FUN_1400078bc(param_1);
    if (lVar4 != 0) {
      if (DAT_14c949118 == 0) {
        local_38 = FUN_140631fbe;
        lVar5 = FUN_1446f8604();
        DAT_14c949118 = lVar5;
        FUN_1446f470e(local_30,L"Class",1);
        local_48 = &LAB_146891e90;
        local_50 = &LAB_146273097;
        local_60 = L"Engine";
        local_58 = 199;
        local_68 = 0x20;
        local_70 = 0x10000000;
        local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
        local_40 = &local_38;
        FUN_14574b4b2(lVar5);
        DAT_14c949118 = lVar5;
        uVar6 = FUN_144a7a812();
        lVar5 = DAT_14c949118;
        uVar7 = FUN_1449e2fb2();
        local_78 = L"Class";
        FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30))
      goto LAB_14090372a;
    }
  }
LAB_14090384f:
  lVar4 = 0;
LAB_14090372a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140903856 FUN_140903856 body=366 status=ok
// SIG undefined FUN_140903856(void)

void FUN_140903856(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = *(uint *)(param_1 + 0x58);
  uVar6 = *(uint *)(param_1 + 0x5c);
  if ((ulonglong)uVar7 < 0xb) {
    uVar7 = 10;
  }
  else {
    iVar3 = uVar6 - uVar7;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar6 * 2) <= (int)(uVar7 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar7) {
      uVar4 = (ulonglong)uVar7 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar5 = uVar4 + 0xf;
          if (uVar7 < 0xfff) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
              uVar8 = 0x32;
              if (0x32 < bVar2) {
                uVar8 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14090390a;
                lVar1 = uVar8 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
          uVar6 = *(uint *)(param_1 + 0x5c);
        }
      }
LAB_14090390a:
      uVar7 = (uint)(uVar4 >> 3);
    }
  }
  if (uVar7 == uVar6) {
    return;
  }
  *(uint *)(param_1 + 0x5c) = uVar7;
  FUN_140903b14(param_1,*(undefined4 *)(param_1 + 0x58));
  return;
}



// FUNCTION 1409039c4 FUN_1409039c4 body=335 status=ok
// SIG undefined FUN_1409039c4(void)

void FUN_1409039c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x58);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0xb) {
    iVar8 = 10;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (10 < *(uint *)(param_1 + 0x5c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140903a50;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_140903a50:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar8;
  FUN_140903b14(param_1,param_2);
  return;
}



// FUNCTION 140903b14 FUN_140903b14 body=131 status=ok
// SIG undefined FUN_140903b14(void)

void FUN_140903b14(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,8);
  return;
}



// FUNCTION 140903b98 FUN_140903b98 body=103 status=ok
// SIG undefined FUN_140903b98(void)

ulonglong FUN_140903b98(longlong param_1)

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
LAB_140903be2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140903be2;
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



// FUNCTION 140903c00 FUN_140903c00 body=114 status=ok
// SIG undefined FUN_140903c00(void)

void FUN_140903c00(longlong param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    cVar1 = FUN_140903c78(*(undefined8 *)(param_1 + 0xa8));
    if (cVar1 != '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xc0);
      plVar3 = (longlong *)(param_1 + 0xe0);
      if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0xd0);
      }
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x000140903c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar2,param_1 + 0x98,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140903c78 FUN_140903c78 body=139 status=ok
// SIG undefined FUN_140903c78(void)

byte FUN_140903c78(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  
  bVar4 = 0;
  fVar7 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
  if ((0.0 < fVar7) || (*(char *)(param_1 + 9) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar1 == 0) {
      bVar4 = 1;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar5);
        bVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        if ((bVar4 ^ *(byte *)(plVar3 + 1)) != 1) {
          return bVar4 ^ *(byte *)(plVar3 + 1);
        }
        bVar6 = (longlong)iVar1 * 0x18 + -0x18 != lVar5;
        bVar4 = 1;
        lVar5 = lVar5 + 0x18;
      } while (bVar6);
    }
  }
  return bVar4;
}



// FUNCTION 140903d10 FUN_140903d10 body=53 status=ok
// SIG undefined FUN_140903d10(void)

void FUN_140903d10(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  uVar2 = FUN_14095dd8e(param_1 + 0x10);
  FUN_140903d46(uVar1,uVar2);
  return;
}



// FUNCTION 140903d46 FUN_140903d46 body=118 status=ok
// SIG undefined FUN_140903d46(void)

undefined8 FUN_140903d46(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140eca14a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140eca14a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          uVar1 = FUN_1418ae21a(lVar4,param_2);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140903dbc FUN_140903dbc body=3512 status=ok
// SIG undefined FUN_140903dbc(void)

ulonglong FUN_140903dbc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
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
  bool bVar13;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong unaff_RBX;
  longlong lVar23;
  float *pfVar24;
  float *pfVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  float local_17c;
  double local_178;
  double local_170;
  double local_168;
  code *local_160;
  double local_158;
  longlong *local_150;
  undefined4 local_138 [2];
  float local_130;
  undefined4 uStack_12c;
  ushort local_118;
  byte local_110;
  float local_108;
  undefined4 uStack_104;
  ushort local_f0;
  byte local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    unaff_RBX = param_1 + 0x88;
    uVar16 = (**(code **)(*param_2 + 0xd8))(param_2);
    cVar14 = FUN_1403343e8(unaff_RBX,uVar16);
    if (cVar14 != '\0') goto LAB_140903e74;
    goto switchD_140903ec2_default;
  }
LAB_140903e74:
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    unaff_RBX = param_1 + 0xb0;
    uVar16 = (**(code **)(*param_2 + 0xe0))(param_2);
    cVar14 = FUN_14187bccc(unaff_RBX,uVar16);
    if (cVar14 == '\0') goto switchD_140903ec2_default;
  }
  switch(*(undefined1 *)(param_1 + 0xd0)) {
  case 0:
switchD_140903ec2_caseD_0:
    switch(*(undefined1 *)(param_1 + 0xd1)) {
    case 0:
      goto switchD_140903f3d_caseD_0;
    case 1:
      cVar14 = (**(code **)(*param_2 + 0xa0))(param_2,1);
      if (cVar14 != '\0') goto switchD_140903f3d_caseD_0;
      break;
    case 2:
      cVar14 = (**(code **)(*param_2 + 0xa0))(param_2,1);
      if (cVar14 == '\0') goto switchD_140903f3d_caseD_0;
      break;
    case 3:
      unaff_RBX = 0;
      cVar14 = (**(code **)(*param_2 + 0xa0))(param_2,0);
      if (cVar14 == '\0') goto LAB_1409044e2;
      goto switchD_140903f3d_caseD_0;
    case 4:
      unaff_RBX = 0;
      cVar14 = (**(code **)(*param_2 + 0xa0))(param_2,0);
      if (cVar14 != '\0') goto LAB_1409044e2;
switchD_140903f3d_caseD_0:
      if (*(char *)(param_1 + 0xd2) == '\x01') {
        lVar17 = (**(code **)(*param_2 + 0x10))(param_2);
        unaff_RBX = 0;
        if ((*(longlong *)(lVar17 + 8) != 0) && (*(longlong *)(lVar17 + 0x10) != 0)) {
          lVar17 = (**(code **)(*param_2 + 0x10))(param_2);
          plVar18 = (longlong *)0x0;
          if (*(longlong *)(lVar17 + 8) != 0) {
            plVar18 = *(longlong **)(lVar17 + 0x10);
          }
          unaff_RBX = (**(code **)(*plVar18 + 0x20))();
        }
        (**(code **)(*param_2 + 0xb8))(param_2,&local_178);
        bVar13 = false;
        bVar26 = false;
        if ((((local_178 == 0.0) && (bVar26 = bVar13, !NAN(local_178))) && (local_170 == 0.0)) &&
           (!NAN(local_170))) {
          bVar26 = local_168 == 0.0;
        }
        if ((unaff_RBX != 0) && (!bVar26)) {
          uVar16 = (**(code **)(*param_2 + 0xf8))(param_2);
          local_160 = (code *)((ulonglong)local_160 & 0xffffffffffffff00);
          local_138[0] = 0;
          FUN_1456bb102(&local_160,uVar16);
          pfVar24 = &local_130;
          FUN_1448729ea(param_1 + 0xd8,pfVar24,&local_160);
          if (local_110 == 3) {
            uVar15 = 3;
            fVar34 = local_130;
          }
          else {
            pfVar25 = &local_108;
            FUN_1400b56fe(pfVar25,&local_130,3);
            fVar34 = 0.0;
            if (local_e8 != 0) {
              fVar34 = local_108;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_f0) {
                pfVar25 = (float *)CONCAT44(uStack_104,local_108);
              }
              (*pcVar2)(pfVar25);
            }
            if (0x18 < local_f0) {
              FUN_1400020a8(CONCAT44(uStack_104,local_108));
            }
            uVar15 = (uint)local_110;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar15 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_118) {
              pfVar24 = (float *)CONCAT44(uStack_12c,local_130);
            }
            (*pcVar2)(pfVar24);
          }
          if (0x18 < local_118) {
            FUN_1400020a8(CONCAT44(uStack_12c,local_130));
          }
          FUN_1448173f8(local_138);
          if (((char)local_160 == '\x03') && (local_150 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_150 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_150 + 0x10))();
            }
          }
          uVar16 = (**(code **)(*param_2 + 0xf8))(param_2);
          local_160 = (code *)((ulonglong)local_160 & 0xffffffffffffff00);
          local_138[0] = 0;
          FUN_1456bb102(&local_160,uVar16);
          pfVar24 = &local_130;
          FUN_1448729ea(param_1 + 0x128,pfVar24,&local_160);
          if (local_110 == 3) {
            uVar15 = 3;
            fVar35 = local_130;
          }
          else {
            pfVar25 = &local_108;
            FUN_1400b56fe(pfVar25,&local_130,3);
            fVar35 = 0.0;
            if (local_e8 != 0) {
              fVar35 = local_108;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_f0) {
                pfVar25 = (float *)CONCAT44(uStack_104,local_108);
              }
              (*pcVar2)(pfVar25);
            }
            if (0x18 < local_f0) {
              FUN_1400020a8(CONCAT44(uStack_104,local_108));
            }
            uVar15 = (uint)local_110;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar15 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_118) {
              pfVar24 = (float *)CONCAT44(uStack_12c,local_130);
            }
            (*pcVar2)(pfVar24);
          }
          if (0x18 < local_118) {
            FUN_1400020a8(CONCAT44(uStack_12c,local_130));
          }
          if (360.0 <= fVar34) {
            fVar34 = 360.0;
          }
          FUN_1448173f8(local_138);
          if (((char)local_160 == '\x03') && (local_150 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_150 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_150 + 0x10))();
            }
          }
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          local_17c = fVar34;
          FUN_1412d231c(unaff_RBX,&local_160);
          dVar3 = sin((double)fVar35 * 0.017453292519943295);
          dVar4 = cos((double)fVar35 * 0.017453292519943295);
          dVar10 = DAT_14c8462c8 * DAT_14c8462c8;
          dVar11 = dVar3 * DAT_14c8462c0;
          dVar7 = dVar3 * DAT_14c8462c8;
          dVar3 = dVar3 * DAT_14c8462d0;
          dVar30 = DAT_14c8462d0 * DAT_14c8462d0;
          dVar8 = 1.0 - dVar4;
          dVar6 = DAT_14c8462c0 * DAT_14c8462d0 * dVar8;
          dVar29 = DAT_14c8462c8 * DAT_14c8462d0 * dVar8;
          dVar27 = (dVar6 - dVar7) * (double)local_160;
          dVar32 = DAT_14c8462c0 * DAT_14c8462c8 * dVar8;
          dVar28 = (dVar32 + dVar3) * (double)local_160;
          dVar9 = (dVar8 * DAT_14c8462c0 * DAT_14c8462c0 + dVar4) * (double)local_160;
          dVar5 = local_178 * local_178 + local_170 * local_170;
          if ((dVar5 != 1.0) || (NAN(dVar5))) {
            dVar31 = DAT_14c8464f0;
            dVar33 = DAT_14c8464e8;
            dVar12 = DAT_14c8464e0;
            if (9.99999993922529e-09 <= dVar5) {
              dVar31 = 0.0;
              dVar33 = local_170 * (1.0 / SQRT(dVar5));
              dVar12 = local_178 * (1.0 / SQRT(dVar5));
            }
          }
          else {
            dVar31 = (double)(-(ulonglong)(local_168 == 0.0) & (ulonglong)local_168);
            dVar33 = local_170;
            dVar12 = local_178;
          }
          fVar34 = cosf(local_17c * 0.5 * 0.017453292);
          if (fVar34 <= (float)((((dVar6 + dVar7) * (double)local_150 +
                                 dVar9 + (dVar32 - dVar3) * local_158) * -dVar12 -
                                ((dVar29 - dVar11) * (double)local_150 +
                                dVar28 + (dVar10 * dVar8 + dVar4) * local_158) * dVar33) -
                               ((dVar30 * dVar8 + dVar4) * (double)local_150 +
                               dVar27 + (dVar29 + dVar11) * local_158) * dVar31))
          goto LAB_140903f64;
        }
      }
      else {
LAB_140903f64:
        uVar16 = (**(code **)(*param_2 + 0xf8))(param_2);
        cVar14 = FUN_143e2803c(param_1 + 0x10,uVar16);
        if (cVar14 != '\0') {
          uVar16 = (**(code **)(*param_2 + 0x100))(param_2);
          cVar14 = FUN_143e2803c(param_1 + 0x28,uVar16);
          if (cVar14 != '\0') {
            if (((*(char *)(param_1 + 0x40) == '\0') && (*(char *)(param_1 + 0x43) == '\0')) &&
               (unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1), *(char *)(param_1 + 0x60) != '\x01')
               ) goto LAB_1409044e2;
            plVar18 = (longlong *)(**(code **)(*param_2 + 0xf8))(param_2);
            if (plVar18 == (longlong *)0x0) {
LAB_140904569:
              lVar17 = 0;
            }
            else {
              if (DAT_14cb223d8 == 0) {
                local_1a0 = &local_160;
                local_160 = FUN_1449e2820;
                local_190 = FUN_14081d0ea;
                local_198 = FUN_1427b09ee;
                local_1a8 = &LAB_147f29feb;
                local_1b0 = FUN_1464384fe;
                local_1b8 = L"Engine";
                local_1c0 = 0;
                local_1c8 = 0x10004001;
                local_1d0 = 8;
                local_1d8 = 0x28;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
              }
              plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb223d8);
              if (plVar18 == (longlong *)0x0) goto LAB_140904569;
              if (DAT_14cb223d8 == 0) {
                local_1a0 = &local_160;
                local_160 = FUN_1449e2820;
                local_190 = FUN_14081d0ea;
                local_198 = FUN_1427b09ee;
                local_1a8 = &LAB_147f29feb;
                local_1b0 = FUN_1464384fe;
                local_1b8 = L"Engine";
                local_1c0 = 0;
                local_1c8 = 0x10004001;
                local_1d0 = 8;
                local_1d8 = 0x28;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
              }
              plVar19 = (longlong *)FUN_144718840(plVar18,DAT_14cb223d8);
              lVar17 = 0;
              if ((plVar18 != plVar19) && (plVar19 != (longlong *)0x0)) {
                lVar17 = (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
            plVar18 = (longlong *)(**(code **)(*param_2 + 0x108))(param_2);
            if (plVar18 == (longlong *)0x0) {
LAB_140904570:
              lVar20 = 0;
            }
            else {
              if (DAT_14cb223d8 == 0) {
                local_1a0 = &local_160;
                local_160 = FUN_1449e2820;
                local_190 = FUN_14081d0ea;
                local_198 = FUN_1427b09ee;
                local_1a8 = &LAB_147f29feb;
                local_1b0 = FUN_1464384fe;
                local_1b8 = L"Engine";
                local_1c0 = 0;
                local_1c8 = 0x10004001;
                local_1d0 = 8;
                local_1d8 = 0x28;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
              }
              plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb223d8);
              if (plVar18 == (longlong *)0x0) goto LAB_140904570;
              if (DAT_14cb223d8 == 0) {
                local_1a0 = &local_160;
                local_160 = FUN_1449e2820;
                local_190 = FUN_14081d0ea;
                local_198 = FUN_1427b09ee;
                local_1a8 = &LAB_147f29feb;
                local_1b0 = FUN_1464384fe;
                local_1b8 = L"Engine";
                local_1c0 = 0;
                local_1c8 = 0x10004001;
                local_1d0 = 8;
                local_1d8 = 0x28;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
              }
              plVar19 = (longlong *)FUN_144718840(plVar18,DAT_14cb223d8);
              lVar20 = 0;
              if ((plVar18 != plVar19) && (plVar19 != (longlong *)0x0)) {
                lVar20 = (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
            if (*(char *)(param_1 + 0x40) == '\x01') {
              if (lVar17 == 0) {
                uVar15 = 1;
              }
              else {
                uVar15 = FUN_14479d732(lVar17,lVar20);
              }
              if (*(char *)(param_1 + 0x41) == '\x01') {
                if (uVar15 != *(byte *)(param_1 + 0x42)) goto LAB_1409040cf;
              }
              else if ((*(char *)(param_1 + 0x41) == '\0') && (uVar15 == *(byte *)(param_1 + 0x42)))
              goto LAB_1409040cf;
            }
            else {
LAB_1409040cf:
              if (*(char *)(param_1 + 0x43) == '\x01') {
                if ((longlong)*(int *)(param_1 + 0x58) == 0) {
                  bVar26 = false;
                }
                else {
                  lVar23 = *(longlong *)(lVar17 + 0x20);
                  lVar17 = *(longlong *)(param_1 + 0x50);
                  lVar22 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
                  do {
                    lVar21 = FUN_14064a6f8(lVar17);
                    if (lVar21 == lVar23) goto LAB_1409049f6;
                    lVar17 = lVar17 + 0x18;
                    lVar22 = lVar22 + -0x18;
                  } while (lVar22 != 0);
                  lVar17 = 0;
LAB_1409049f6:
                  bVar26 = lVar17 != 0;
                }
                if (*(char *)(param_1 + 0x48) == '\0') {
                  if (bVar26) goto LAB_1409040d9;
                }
                else if ((*(char *)(param_1 + 0x48) == '\x01') && (!bVar26)) goto LAB_1409040d9;
              }
              else {
LAB_1409040d9:
                if (*(char *)(param_1 + 0x60) != '\x01') {
LAB_1409040e3:
                  unaff_RBX = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
                  goto LAB_1409044e2;
                }
                if ((longlong)*(int *)(param_1 + 0x78) == 0) {
                  bVar26 = false;
                }
                else {
                  lVar17 = *(longlong *)(lVar20 + 0x20);
                  lVar20 = *(longlong *)(param_1 + 0x70);
                  lVar23 = (longlong)*(int *)(param_1 + 0x78) * 0x18;
                  do {
                    lVar22 = FUN_14064a6f8(lVar20);
                    if (lVar22 == lVar17) goto LAB_140904a37;
                    lVar20 = lVar20 + 0x18;
                    lVar23 = lVar23 + -0x18;
                  } while (lVar23 != 0);
                  lVar20 = 0;
LAB_140904a37:
                  bVar26 = lVar20 != 0;
                }
                if (*(char *)(param_1 + 0x68) == '\0') {
                  if (bVar26) goto LAB_1409040e3;
                }
                else if ((*(char *)(param_1 + 0x68) == '\x01') && (!bVar26)) goto LAB_1409040e3;
              }
            }
          }
        }
      }
    }
    break;
  case 1:
    cVar14 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar14 == '\0') goto switchD_140903ec2_caseD_0;
    break;
  case 2:
    cVar14 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar14 != '\0') goto switchD_140903ec2_caseD_0;
    break;
  case 3:
    lVar17 = (**(code **)(*param_2 + 0x18))(param_2);
    if (*(float *)(lVar17 + 0x18) <= 0.0001 && *(float *)(lVar17 + 0x18) != 0.0001)
    goto switchD_140903ec2_caseD_0;
    break;
  case 4:
    lVar17 = (**(code **)(*param_2 + 0x18))(param_2);
    if (0.0 < *(float *)(lVar17 + 0x18)) goto switchD_140903ec2_caseD_0;
  }
switchD_140903ec2_default:
  unaff_RBX = 0;
LAB_1409044e2:
  if ((local_e0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 140904b76 FUN_140904b76 body=215 status=ok
// SIG undefined FUN_140904b76(void)

ulonglong FUN_140904b76(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x60);
    lVar9 = 0;
    uVar8 = 0xffffffff;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar9);
      uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      uVar4 = uVar8;
      if ((int)uVar3 < (int)uVar8) {
        uVar4 = uVar3;
      }
      bVar10 = uVar8 == 0xffffffff;
      uVar8 = uVar4;
      if (bVar10) {
        uVar8 = uVar3;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_140904bf2:
    return (ulonglong)uVar8;
  }
  uVar4 = FUN_140904c54();
  if (uVar8 == 0xffffffff) {
    lVar6 = *(longlong *)(param_1 + 8);
    uVar3 = *(uint *)(lVar6 + 0x3f4);
    if (uVar4 == 0xffffffff) {
      uVar8 = 0xffffffff;
      uVar7 = uVar3;
      if (uVar3 == 0xffffffff) goto LAB_140904bf2;
      goto LAB_140904c35;
    }
  }
  else {
    uVar3 = uVar8;
    if ((int)uVar4 < (int)uVar8) {
      uVar3 = uVar4;
    }
    bVar10 = uVar4 == 0xffffffff;
    uVar4 = uVar3;
    if (bVar10) {
      uVar4 = uVar8;
    }
    lVar6 = *(longlong *)(param_1 + 8);
    uVar3 = *(uint *)(lVar6 + 0x3f4);
  }
  uVar7 = uVar4;
  if ((uVar3 != 0xffffffff) && (uVar7 = uVar3, (int)uVar4 <= (int)uVar3)) {
    uVar7 = uVar4;
  }
LAB_140904c35:
  uVar5 = FUN_1409051d0(lVar6,uVar7);
  return uVar5;
}



// FUNCTION 140904c54 FUN_140904c54 body=1403 status=ok
// SIG undefined FUN_140904c54(void)

int FUN_140904c54(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  double *pdVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  double *pdVar15;
  float *pfVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  
  uVar12 = *(int *)(param_1 + 0x3e0) + 0x3fffffff;
  iVar14 = (int)(uVar12 * 4) >> 2;
  iVar6 = -1;
  if (iVar14 <= *(int *)(param_1 + 0x3f8)) {
    uVar7 = FUN_14091baa4();
    plVar8 = (longlong *)FUN_14109baf6(uVar7);
    cVar2 = (**(code **)(*plVar8 + 0x20))(plVar8);
    uVar7 = FUN_14091baa4();
    plVar8 = (longlong *)FUN_14109baf6(uVar7);
    cVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
    uVar7 = FUN_14091baa4();
    plVar8 = (longlong *)FUN_14109baf6(uVar7);
    bVar4 = (**(code **)(*plVar8 + 0x40))(plVar8);
    uVar7 = FUN_14091baa4();
    plVar8 = (longlong *)FUN_14109baf6(uVar7);
    bVar5 = (**(code **)(*plVar8 + 0x50))(plVar8);
    if ((longlong)*(int *)(param_1 + 0x2f0) != 0) {
      uVar12 = uVar12 & 0x3fffffff | 0x40000000;
      lVar13 = *(longlong *)(param_1 + 0x2e8);
      lVar9 = (longlong)*(int *)(param_1 + 0x2f0) * 0x1a0 + lVar13;
      bVar17 = false;
      do {
        if (*(longlong *)(lVar13 + 0x180) != 0) {
          if (((cVar2 != '\0' || cVar3 != '\0') && (*(int *)(lVar13 + 0xe4) != 0)) &&
             (iVar6 = FUN_1408fb584(lVar13 + 0xe0,uVar12), iVar6 != -1)) {
            lVar1 = *(longlong *)(param_1 + 0x18);
            pdVar10 = (double *)
                      ((longlong)*(int *)(*(longlong *)(lVar13 + 0xf0) + (longlong)iVar6 * 8) * 0x30
                      + lVar1);
            if (((pdVar10 != (double *)0x0) && (iVar6 = FUN_142a2cfee(lVar13,uVar12), iVar6 != -1))
               && (pdVar15 = (double *)
                             (lVar1 + (longlong)
                                      *(int *)(*(longlong *)(lVar13 + 0x10) + (longlong)iVar6 * 8) *
                                      0x30), pdVar15 != (double *)0x0)) {
              if (cVar2 != '\0') {
                uVar7 = FUN_14091baa4();
                plVar8 = (longlong *)FUN_14109baf6(uVar7);
                fVar18 = (float)(**(code **)(*plVar8 + 0x28))(plVar8);
                bVar17 = (bool)(bVar17 | (double)fVar18 <=
                                         SQRT((pdVar10[2] - pdVar15[2]) * (pdVar10[2] - pdVar15[2])
                                              + (*pdVar10 - *pdVar15) * (*pdVar10 - *pdVar15) +
                                                (pdVar10[1] - pdVar15[1]) *
                                                (pdVar10[1] - pdVar15[1])));
              }
              if (cVar3 != '\0') {
                uVar7 = FUN_14091baa4();
                plVar8 = (longlong *)FUN_14109baf6(uVar7);
                fVar18 = (float)(**(code **)(*plVar8 + 0x38))(plVar8);
                dVar20 = ((double)*(float *)((longlong)pdVar15 + 0x2c) * 1.0 *
                          (double)*(float *)((longlong)pdVar10 + 0x2c) +
                          (double)*(float *)(pdVar10 + 4) * (double)*(float *)(pdVar15 + 4) +
                         (double)*(float *)((longlong)pdVar10 + 0x24) *
                         (double)*(float *)((longlong)pdVar15 + 0x24)) -
                         (double)*(float *)(pdVar15 + 5) * -1.0 * (double)*(float *)(pdVar10 + 5);
                dVar21 = dVar20;
                if (1.0 <= dVar20) {
                  dVar21 = 1.0;
                }
                dVar21 = acos((double)(-(ulonglong)(dVar20 < -1.0) & 0xbff0000000000000 |
                                      ~-(ulonglong)(dVar20 < -1.0) & (ulonglong)dVar21));
                for (fVar19 = (float)(dVar21 + dVar21); 3.1415927 < fVar19;
                    fVar19 = fVar19 + -6.2831855) {
                }
                for (; fVar19 < -3.1415927; fVar19 = fVar19 + 6.2831855) {
                }
                bVar17 = (bool)(bVar17 | fVar18 <= ABS(fVar19 * 57.295776));
              }
            }
          }
          if ((((byte)((bVar17 ^ 1U) & (bVar4 | bVar5)) == 1) && (*(int *)(lVar13 + 0x104) != 0)) &&
             ((iVar6 = FUN_1408fb60a(lVar13 + 0x100,uVar12), iVar6 != -1 &&
              (((pfVar11 = (float *)((longlong)
                                     *(int *)(*(longlong *)(lVar13 + 0x110) + (longlong)iVar6 * 8) *
                                     0x18 + *(longlong *)(param_1 + 0x38)), pfVar11 != (float *)0x0
                && (iVar6 = FUN_142a2d052(lVar13 + 0x40,uVar12), iVar6 != -1)) &&
               (pfVar16 = (float *)((longlong)
                                    *(int *)(*(longlong *)(lVar13 + 0x50) + (longlong)iVar6 * 8) *
                                    0x18 + *(longlong *)(param_1 + 0x38)), pfVar16 != (float *)0x0))
              )))) {
            if (bVar4 != 0) {
              uVar7 = FUN_14091baa4();
              plVar8 = (longlong *)FUN_14109baf6(uVar7);
              fVar18 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
              bVar17 = fVar18 <= SQRT((pfVar11[2] - pfVar16[2]) * (pfVar11[2] - pfVar16[2]) +
                                      (*pfVar11 - *pfVar16) * (*pfVar11 - *pfVar16) +
                                      (pfVar11[1] - pfVar16[1]) * (pfVar11[1] - pfVar16[1]));
            }
            if (bVar5 != 0) {
              uVar7 = FUN_14091baa4();
              plVar8 = (longlong *)FUN_14109baf6(uVar7);
              fVar18 = (float)(**(code **)(*plVar8 + 0x58))(plVar8);
              bVar17 = (bool)(bVar17 | fVar18 <= SQRT((pfVar11[5] - pfVar16[5]) *
                                                      (pfVar11[5] - pfVar16[5]) +
                                                      (pfVar11[3] - pfVar16[3]) *
                                                      (pfVar11[3] - pfVar16[3]) +
                                                      (pfVar11[4] - pfVar16[4]) *
                                                      (pfVar11[4] - pfVar16[4])));
            }
          }
        }
        lVar13 = lVar13 + 0x1a0;
      } while (lVar13 != lVar9);
      iVar6 = -1;
      if (bVar17 != false) {
        iVar6 = iVar14;
      }
    }
  }
  return iVar6;
}



// FUNCTION 1409051d0 FUN_1409051d0 body=803 status=ok
// SIG undefined FUN_1409051d0(void)

uint FUN_1409051d0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_c8 [44];
  uint local_9c;
  int local_98;
  uint local_94;
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  int local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = *(int *)(param_1 + 0x3fc);
  if ((int)param_2 <= iVar3) {
    local_9c = 0xffffffff;
    goto LAB_1409053ca;
  }
  local_94 = param_2;
  local_50 = param_1;
  if (DAT_14c75f3e8 == 1) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x3d8) + 0x9c8) + 0x100;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    iVar3 = *(int *)(param_1 + 0x2f0);
    if ((longlong)iVar3 == 0) {
      local_80 = 0;
LAB_140905422:
      local_88 = (void *)0x0;
      local_7c = 0;
      param_2 = local_94;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x2e8);
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(lVar8 + 0x180 + lVar7);
        if (((plVar1 != (longlong *)0x0) &&
            (lVar4 = *(longlong *)(*(longlong *)(*plVar1 + 0x1e8) + (longlong)(int)plVar1[1] * 8),
            lVar4 != 0)) && (*(int *)(lVar4 + 0x48) != -1)) {
          local_78 = FUN_145757538(lVar5);
          FUN_145757658(&local_68,&local_78);
        }
        _Src = local_68;
        param_2 = local_94;
        lVar7 = lVar7 + 0x1a0;
      } while ((longlong)iVar3 * 0x1a0 - lVar7 != 0);
      lVar8 = (longlong)(int)uStack_60;
      local_88 = (void *)0x0;
      local_80 = (int)uStack_60;
      if (lVar8 == 0) goto LAB_140905422;
      FUN_1457575fe(&local_88,uStack_60 & 0xffffffff);
      memcpy(local_88,_Src,lVar8 << 3);
    }
    FUN_14091c32a(lVar5,&local_78,&local_88);
    lVar5 = local_78;
    lVar8 = (longlong)local_70;
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = *(int *)(param_1 + 0x3fc);
  }
  else {
    lVar8 = 0;
    lVar5 = 0;
  }
  iVar9 = *(int *)(param_1 + 0x3e0) - *(int *)(param_1 + 1000);
  if (iVar9 < iVar3) {
    iVar9 = iVar3;
  }
  if (iVar9 < (int)param_2) {
    local_98 = DAT_14c75f3e8;
    local_9c = param_2;
    do {
      uVar6 = local_9c & 0x3fffffff | 0x40000000;
      if (local_98 == 1) {
        if (lVar8 == 0) goto LAB_1409053bd;
        lVar7 = 0;
        while ((lVar4 = FUN_14575755c(param_1 + 0x298,*(undefined8 *)(lVar5 + lVar7)), lVar4 == 0 ||
               (cVar2 = FUN_1409054f4(&local_50,lVar4,uVar6), cVar2 != '\0'))) {
          lVar7 = lVar7 + 8;
          if (lVar8 * 8 - lVar7 == 0) goto LAB_1409053bd;
        }
      }
      else {
        if ((longlong)*(int *)(param_1 + 0x2f0) == 0) goto LAB_1409053bd;
        lVar7 = *(longlong *)(param_1 + 0x2e8);
        local_90 = (longlong)*(int *)(param_1 + 0x2f0) * 0x1a0;
        while (((local_98 == 2 &&
                (((plVar1 = *(longlong **)(lVar7 + 0x180), plVar1 == (longlong *)0x0 ||
                  (lVar4 = *(longlong *)
                            (*(longlong *)(*plVar1 + 0x1e8) + (longlong)(int)plVar1[1] * 8),
                  lVar4 == 0)) || (*(int *)(lVar4 + 0x48) == -1)))) ||
               (cVar2 = FUN_1409054f4(&local_50,lVar7,uVar6), cVar2 != '\0'))) {
          lVar7 = lVar7 + 0x1a0;
          local_90 = local_90 + -0x1a0;
          if (local_90 == 0) goto LAB_1409053bd;
        }
      }
      local_9c = local_9c - 1;
    } while (iVar9 < (int)local_9c);
    local_9c = 0xffffffff;
    if ((DAT_14c997878 & 1) != 0) {
      local_9c = local_94;
    }
  }
  else {
    local_9c = 0xffffffff;
    if ((DAT_14c997878 & 1) != 0) {
      local_9c = param_2;
    }
  }
LAB_1409053bd:
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
LAB_1409053ca:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_9c;
}



// FUNCTION 1409054f4 FUN_1409054f4 body=288 status=ok
// SIG undefined FUN_1409054f4(void)

ulonglong FUN_1409054f4(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = *(int *)(param_2 + 0x84);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (0 < iVar4) {
    iVar5 = *(int *)(param_2 + 0x80);
    iVar6 = param_3 * 4 >> 2;
    iVar7 = -1;
    do {
      if (iVar5 < 1) {
        iVar5 = *(int *)(param_2 + 0x98);
      }
      lVar8 = (longlong)iVar5;
      iVar5 = iVar5 + -1;
      uVar1 = *(uint *)(*(longlong *)(param_2 + 0x90) + -4 + lVar8 * 8);
      iVar2 = (int)(uVar1 * 4) >> 2;
    } while (((iVar6 <= iVar2) && (0x3fffffff < uVar1 || iVar2 != iVar6)) &&
            (iVar4 = iVar4 + -1, iVar7 = iVar5, iVar4 != 0));
    if (((((iVar7 != -1) &&
          (lVar8 = (longlong)*(int *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar7 * 8) * 0x2c +
                   *(longlong *)(*param_1 + 0x78), lVar8 != 0)) &&
         ((*(char *)(lVar8 + 0x29) == '\0' &&
          ((*(char *)(lVar8 + 0x1c) == '\x04' && (*(int *)(param_2 + 0xe4) != 0)))))) &&
        ((*(int *)(param_2 + 0x104) != 0 && (*(int *)(param_2 + 0x124) != 0)))) &&
       ((((*(char *)(param_2 + 0x19d) != '\0' ||
          (iVar4 = FUN_1408fb584(param_2 + 0xe0,param_3), iVar4 == -1)) ||
         (iVar4 = FUN_1408fb60a(param_2 + 0x100,param_3), iVar4 == -1)) ||
        (iVar4 = FUN_1408fb690(param_2 + 0x120,param_3), iVar4 == -1)))) {
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140905614 FUN_140905614 body=683 status=ok
// SIG undefined FUN_140905614(void)

void FUN_140905614(longlong *param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  int local_88;
  int local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    lVar9 = FUN_1409059be();
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
       (*(int *)(param_2 + 0x670) != 0)) {
      (**(code **)(*param_1 + 0x458))(param_1,param_2,&local_84,&local_88);
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      if (local_88 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_88 * 3);
      }
      if (local_88 != 0) {
        FUN_14480809c(&local_98);
      }
      if (local_84 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_84);
      }
      if (local_84 != 0) {
        FUN_140678446(&local_a8);
      }
      iVar4 = *(int *)(param_2 + 0x670);
      if (0 < (longlong)iVar4) {
        local_b8 = param_3 + 0x40;
        lVar9 = 0;
        local_b0 = param_3;
        do {
          if (lVar9 < *(int *)(param_2 + 0x670)) {
            plVar12 = (longlong *)(lVar9 * 0x60 + *(longlong *)(param_2 + 0x668));
          }
          else {
            plVar12 = (longlong *)0x0;
          }
          if (0 < (int)plVar12[3]) {
            iVar6 = (int)uStack_a0;
            lVar13 = 0;
            do {
              uVar7 = uStack_90;
              iVar5 = *(int *)(plVar12[2] + lVar13 * 4);
              lVar10 = (longlong)(int)uStack_90;
              uVar8 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
              if (uStack_90._4_4_ < uVar8) {
                FUN_1447808da(&local_98,uVar7 & 0xffffffff);
              }
              *(int *)(local_98 + lVar10 * 4) = iVar5 + iVar6;
              lVar13 = lVar13 + 1;
            } while (lVar13 < (int)plVar12[3]);
          }
          lVar13 = local_b0;
          if (0 < (int)plVar12[1]) {
            lVar14 = 0x10;
            lVar10 = 0;
            do {
              uVar7 = uStack_a0;
              lVar11 = *plVar12;
              dVar1 = *(double *)(lVar11 + lVar14);
              dVar2 = *(double *)(lVar11 + -8 + lVar14);
              dVar3 = *(double *)(lVar11 + -0x10 + lVar14);
              lVar11 = (longlong)(int)uStack_a0;
              uVar8 = (int)uStack_a0 + 1;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
              if (uStack_a0._4_4_ < uVar8) {
                FUN_140c0b6f2(&local_a8,uVar7 & 0xffffffff);
              }
              *(float *)(local_a8 + lVar11 * 0xc) = (float)dVar3;
              *(float *)(local_a8 + 4 + lVar11 * 0xc) = (float)dVar2;
              *(float *)(local_a8 + 8 + lVar11 * 0xc) = (float)dVar1;
              lVar10 = lVar10 + 1;
              lVar14 = lVar14 + 0x98;
            } while (lVar10 < (int)plVar12[1]);
          }
          *(undefined1 *)(lVar13 + 0x70) = 1;
          FUN_140905aa4(local_b8,&local_98,3);
          FUN_1409058c0(lVar13,&local_a8,1);
          lVar9 = lVar9 + 1;
        } while (lVar9 != iVar4);
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409058c0 FUN_1409058c0 body=98 status=ok
// SIG undefined FUN_1409058c0(void)

void FUN_1409058c0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 0x34) = iVar1;
  *(char *)(param_1 + 0x38) = (char)param_3;
  if (iVar1 != 0) {
    FUN_140563108(param_1,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
              (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34),0);
    _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
    *(void **)(param_1 + 0x28) = _Dst;
    memcpy(_Dst,(void *)*param_2,
           (ulonglong)(uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30)));
    return;
  }
  return;
}



// FUNCTION 140905922 FUN_140905922 body=156 status=ok
// SIG undefined FUN_140905922(void)

void FUN_140905922(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 != 0) {
    lVar2 = FUN_1409059be();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (iVar1 = *(int *)(param_2 + 0x670), 0 < (longlong)iVar1)) {
      lVar2 = 0;
      do {
        if (lVar2 < *(int *)(param_2 + 0x670)) {
          lVar3 = lVar2 * 0x60 + *(longlong *)(param_2 + 0x668);
        }
        else {
          lVar3 = 0;
        }
        *param_3 = *param_3 + *(int *)(lVar3 + 8);
        *param_4 = *param_4 + *(int *)(lVar3 + 0x18) / 3;
        lVar2 = lVar2 + 1;
      } while (lVar2 != iVar1);
    }
  }
  return;
}



// FUNCTION 1409059be FUN_1409059be body=228 status=ok
// SIG undefined FUN_1409059be(void)

longlong FUN_1409059be(void)

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
  if (DAT_14cb44698 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_148213da3;
    local_40 = FUN_14183c097;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6f0;
    FUN_14081cfa3(L"/Script/ProceduralMeshComponent",L"ProceduralMeshComponent",&DAT_14cb44698,
                  FUN_14647d0aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44698;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140905aa4 FUN_140905aa4 body=282 status=ok
// SIG undefined FUN_140905aa4(void)

void FUN_140905aa4(longlong param_1,longlong *param_2,int param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  void *_Dst;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar2 = *(uint *)(param_2 + 1);
  bVar5 = true;
  if (param_3 == 3) {
    if (0 < (int)uVar2) {
      uVar8 = 1;
      do {
        uVar9 = *(uint *)(*param_2 + -4 + uVar8 * 4);
        if (0xffff < uVar9) break;
        bVar10 = uVar8 < uVar2;
        uVar8 = uVar8 + 1;
      } while (bVar10);
      if (0xffff < uVar9) {
        param_3 = 2;
        goto LAB_140905b00;
      }
    }
  }
  else if (param_3 == 2) goto LAB_140905b00;
  param_3 = 1;
  bVar5 = false;
LAB_140905b00:
  puVar1 = (ulonglong *)(param_1 + 0x20);
  uVar9 = uVar2 << ((byte)param_3 & 0x1f);
  FUN_140397dde(puVar1,uVar9);
  iVar3 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar3 + uVar9;
  if ((uint)(*(int *)(param_1 + 0x2c) - iVar3) < uVar9) {
    FUN_14746fa8e(puVar1);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  if (bVar5) {
    pvVar4 = *(void **)(param_1 + 0x20);
    _Dst = (void *)((longlong)puVar1 + ((longlong)pvVar4 >> 0x18));
    if (((ulonglong)pvVar4 & 1) == 0) {
      _Dst = pvVar4;
    }
    memcpy(_Dst,(void *)*param_2,(longlong)*(int *)(param_1 + 0x28));
    uVar6 = 1;
  }
  else {
    uVar8 = *puVar1;
    if ((uVar8 & 1) != 0) {
      uVar8 = (longlong)puVar1 + ((longlong)uVar8 >> 0x18);
    }
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        *(undefined2 *)(uVar8 + uVar7 * 2) = *(undefined2 *)(*param_2 + uVar7 * 4);
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x3c) = uVar6;
  return;
}



// FUNCTION 140905bcc FUN_140905bcc body=71 status=ok
// SIG undefined FUN_140905bcc(void)

undefined8 * FUN_140905bcc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3a4a00;
  FUN_1447cd778(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140905c22 FUN_140905c22 body=97 status=ok
// SIG undefined FUN_140905c22(void)

void FUN_140905c22(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1401e7ce8();
  bifrost::telemetry::rowBuilder::vBeginArray((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
  FUN_140905c84(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140905c84 FUN_140905c84 body=67 status=ok
// SIG undefined FUN_140905c84(void)

void FUN_140905c84(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1470b585c(param_1 + 8,iVar1);
  }
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 2;
  return;
}



// FUNCTION 140905cc8 FUN_140905cc8 body=150 status=ok
// SIG undefined FUN_140905cc8(void)

void FUN_140905cc8(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140905ee6(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x18 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0xffffffffffffffff;
      *(undefined2 *)(puVar2 + 2) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x12) = 0xff;
      puVar2 = puVar2 + 3;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 < iVar1) {
    *(int *)(param_1 + 1) = param_2;
    FUN_140905d60(param_1);
    return;
  }
  return;
}



// FUNCTION 140905d60 FUN_140905d60 body=389 status=ok
// SIG undefined FUN_140905d60(void)

ulonglong FUN_140905d60(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x18)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x555) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x1ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140905e10;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x1ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140905e10:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0x18;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x18,8);
    }
  }
  return uVar6;
}



// FUNCTION 140905ee6 FUN_140905ee6 body=373 status=ok
// SIG undefined FUN_140905ee6(void)

void FUN_140905ee6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140905f71;
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
LAB_140905f71:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14090605c FUN_14090605c body=73 status=ok
// SIG undefined FUN_14090605c(void)

void FUN_14090605c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  PSRWLOCK SRWLock;
  undefined8 unaff_RBP;
  
  SRWLock = (PSRWLOCK)*param_1;
  uVar1 = *(undefined1 *)&SRWLock[0x30].Ptr;
  AcquireSRWLockExclusive(SRWLock);
  FUN_1409060a6(SRWLock + 1,param_2,param_3,
                (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffff01);
                    /* WARNING: Could not recover jumptable at 0x00014090609e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 1409060a6 FUN_1409060a6 body=1267 status=ok
// SIG undefined FUN_1409060a6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1409060a6(longlong param_1,undefined1 *param_2,undefined2 *param_3,char param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  ulonglong uVar12;
  ushort uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ushort uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_1928 [32];
  undefined8 local_1908;
  longlong local_1900;
  int local_18f8;
  undefined2 *local_18f0;
  undefined2 *local_18e8;
  undefined1 *local_18e0;
  char local_18d8;
  undefined2 local_18d0 [1035];
  undefined1 local_10ba [2];
  undefined1 *local_10b8;
  undefined1 *local_10b0;
  undefined1 *local_10a8;
  char local_10a0;
  undefined1 local_1098 [2070];
  undefined1 auStack_882 [2];
  undefined2 *local_880;
  undefined2 *local_878;
  undefined1 *local_870;
  char local_868;
  undefined2 local_860 [1035];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1928;
  FUN_14090659a();
  if ((param_4 == '\0') || (*(char *)(param_1 + 0x89) != '\x01')) goto LAB_140906392;
  local_880 = local_860;
  uVar21 = 0;
  local_868 = '\0';
  local_870 = local_4a;
  local_10b8 = param_2;
  local_878 = local_880;
  FUN_14005eb5c(&local_10b8,&local_880);
  local_10b8 = local_1098;
  local_10a0 = '\0';
  local_10a8 = auStack_882;
  local_18f0 = param_3;
  local_10b0 = local_10b8;
  FUN_14005eb5c(&local_18f0,&local_10b8);
  puVar3 = local_880;
  puVar2 = local_10b8;
  uVar12 = (ulonglong)((longlong)local_878 - (longlong)local_880) >> 1;
  uVar23 = (ulonglong)((longlong)local_10b0 - (longlong)local_10b8) >> 1;
  uVar22 = (uint)uVar23;
  if (0 < (int)uVar22) {
    uVar21 = uVar23 & 0xffffffff;
  }
  iVar6 = (int)uVar21;
  puVar8 = (undefined2 *)(local_10b8 + ((longlong)(int)uVar22 * 2 - (ulonglong)(uint)(iVar6 * 2)));
  iVar11 = (int)uVar12;
  if (iVar11 == 1) {
    local_18e8 = (undefined2 *)CONCAT44(local_18e8._4_4_,iVar6);
    local_18f0 = puVar8;
    iVar6 = FUN_144aff2e5(&local_18f0,*local_880,1);
LAB_14090622c:
    if (iVar6 != -1) {
      uVar4 = (int)uVar22 >> 0x1f & uVar22;
      iVar14 = uVar22 - uVar4;
      if (iVar6 < iVar14) {
        iVar14 = iVar6;
      }
      if (iVar14 < 1) {
        iVar14 = 0;
      }
      FUN_1402980a2(param_1 + 0x68,puVar2 + (longlong)(int)uVar4 * 2,iVar14);
      uVar4 = iVar6 + iVar11;
      uVar5 = (int)uVar4 >> 0x1f & uVar4;
      uVar4 = uVar4 - uVar5;
      iVar6 = uVar5 + 0x7fffffff;
      if ((int)uVar22 <= (int)uVar4) {
        uVar4 = uVar22;
      }
      iVar14 = uVar22 - uVar4;
      if (iVar6 < (int)(uVar22 - uVar4)) {
        iVar14 = iVar6;
      }
      if (iVar14 < 1) {
        iVar14 = 0;
      }
      FUN_1402980a2(param_1 + 0x78,puVar2 + (longlong)(int)uVar4 * 2,iVar14);
    }
  }
  else if ((iVar11 <= iVar6) && (lVar9 = (longlong)iVar11, lVar9 <= (longlong)uVar21)) {
    puVar10 = puVar8;
    if (iVar11 != 0) {
LAB_1409061ce:
      lVar15 = 0;
      lVar16 = lVar9;
      do {
        uVar17 = *(ushort *)((longlong)puVar10 + lVar15);
        uVar23 = (ulonglong)uVar17;
        uVar13 = *(ushort *)((longlong)local_880 + lVar15);
        if (uVar17 == uVar13) {
          if (uVar17 == 0) break;
        }
        else {
          if (0x7f < (uVar13 | uVar17)) goto LAB_140906213;
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
          uVar21 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
          if ((&DAT_149e05da0)[uVar23] != (&DAT_149e05da0)[uVar21]) goto LAB_140906213;
        }
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) break;
        lVar15 = lVar15 + 2;
      } while( true );
    }
LAB_140906226:
    iVar6 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar8) >> 1);
    goto LAB_14090622c;
  }
LAB_14090629f:
  if ((1 < *(int *)(param_1 + 0x70)) || (1 < *(int *)(param_1 + 0x80))) {
    iVar6 = 0;
    if (0 < iVar11) {
      iVar6 = iVar11;
    }
    if (0xc < iVar11) {
      uVar23 = (ulonglong)(uint)(iVar6 * 2);
      lVar16 = ((longlong)iVar11 * 2 - uVar23) + (longlong)puVar3;
      lVar9 = -uVar23;
LAB_1409062df:
      lVar15 = 0xd;
      lVar18 = 0;
      do {
        uVar17 = *(ushort *)(lVar16 + lVar18);
        uVar21 = (ulonglong)uVar17;
        uVar13 = *(ushort *)((longlong)L"/_Generated_/" + lVar18);
        if (uVar17 == uVar13) {
          if (uVar17 == 0) goto LAB_140906341;
        }
        else {
          if (0x7f < (uVar13 | uVar17)) goto LAB_140906326;
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
          uVar20 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
          if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[uVar20]) goto LAB_140906326;
        }
        lVar15 = lVar15 + -1;
        if (lVar15 == 0) goto LAB_140906341;
        lVar18 = lVar18 + 2;
      } while( true );
    }
LAB_140906351:
    if (*(int *)(param_1 + 0x60) < 2) {
      FUN_1402980a2(param_1 + 0x58,puVar3,uVar12 & 0xffffffff);
      FUN_1400020e8(param_1 + 0x58,L"/_Generated_/",0xd);
    }
  }
  if (local_10a0 == '\x01') {
    FUN_1400020a8(local_10b8);
  }
  if (local_868 == '\x01') {
    FUN_1400020a8(local_880);
  }
LAB_140906392:
  if ((local_48 ^ (ulonglong)auStack_1928) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140906213:
  if (uVar17 == uVar13) goto LAB_140906226;
  puVar10 = puVar10 + 1;
  if (local_10b8 + lVar9 * -2 + (longlong)(int)uVar22 * 2 < puVar10) goto LAB_14090629f;
  goto LAB_1409061ce;
LAB_140906326:
  if (uVar17 == uVar13) {
LAB_140906341:
    iVar6 = (int)(lVar9 + uVar23 >> 1);
    if (iVar6 != -1) {
      iVar14 = iVar6 + 0xd;
      local_18f0 = &DAT_149e065c6;
      local_18e8 = (undefined2 *)CONCAT44(local_18e8._4_4_,1);
      local_18f8 = iVar11 - iVar14;
      if (iVar11 <= iVar11 - iVar14) {
        local_18f8 = iVar11;
      }
      iVar19 = 0;
      if (local_18f8 < 1) {
        local_18f8 = 0;
      }
      local_1900 = (longlong)puVar3 + ((longlong)iVar11 * 2 - (ulonglong)(uint)(local_18f8 * 2));
      iVar7 = FUN_144a08910(&local_1900,&local_18f0,1);
      if ((iVar7 == -1) || (iVar7 + iVar6 == -0xe)) {
        if (iVar11 <= iVar14) {
          iVar14 = iVar11;
        }
        if (iVar14 < 1) {
          iVar14 = 0;
        }
        FUN_1402980a2(param_1 + 0x58,puVar3,iVar14);
        if (iVar11 <= iVar6) {
          iVar6 = iVar11;
        }
        if (iVar6 < 1) {
          iVar6 = iVar19;
        }
        FUN_14006620a(&local_18f0,puVar3,iVar6);
        puVar8 = local_18f0;
        iVar6 = (int)local_18e8;
        local_18f0 = local_18d0;
        local_18d8 = '\0';
        local_18e0 = local_10ba;
        iVar11 = *(int *)(param_1 + 0x70) + -1;
        if (*(int *)(param_1 + 0x70) == 0) {
          iVar11 = iVar19;
        }
        local_18e8 = local_18f0;
        FUN_1449668a2(&local_18f0,*(undefined8 *)(param_1 + 0x68),iVar11);
        iVar11 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar11 = iVar19;
        }
        FUN_1449668a2(&local_18f0,puVar8,iVar11);
        iVar11 = *(int *)(param_1 + 0x80) + -1;
        if (*(int *)(param_1 + 0x80) == 0) {
          iVar11 = iVar19;
        }
        FUN_1449668a2(&local_18f0,*(undefined8 *)(param_1 + 0x78),iVar11);
        FUN_1446f82e2(&local_1900,(ulonglong)((longlong)local_18e8 - (longlong)local_18f0) >> 1,
                      local_18f0,1);
        lVar9 = local_1900;
        puVar10 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar10 = puVar8;
        }
        FUN_1446f470e(&local_1908,puVar10,1);
        FUN_14090659a(param_1,local_1908,lVar9);
        if (local_18d8 == '\x01') {
          FUN_1400020a8(local_18f0);
        }
        if (puVar8 != (undefined2 *)0x0) {
          FUN_1400020a8(puVar8);
        }
      }
    }
    goto LAB_140906351;
  }
  lVar16 = lVar16 + 2;
  bVar1 = -0x1c < lVar9;
  lVar9 = lVar9 + 2;
  if (bVar1) goto LAB_140906351;
  goto LAB_1409062df;
}



// FUNCTION 14090659a FUN_14090659a body=390 status=ok
// SIG undefined FUN_14090659a(void)

void FUN_14090659a(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  local_38 = param_2;
  if ((char)param_1[10] == '\0') {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar1 = (uint)((ulonglong)param_2 >> 0x10);
      uVar3 = (uint)param_2 & 0xffff;
      plVar2 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_1[8];
      }
      iVar4 = *(int *)((longlong)plVar2 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2) goto LAB_1409065ff;
          iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
        } while (iVar4 != -1);
      }
    }
    local_30 = &local_38;
    plVar2 = &local_40;
  }
  else {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar1 = (uint)((ulonglong)param_3 >> 0x10);
      uVar3 = (uint)param_3 & 0xffff;
      plVar2 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_1[8];
      }
      iVar4 = *(int *)((longlong)plVar2 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar3) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == param_3) goto LAB_1409065ff;
          iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
        } while (iVar4 != -1);
      }
    }
    local_30 = &local_40;
    plVar2 = &local_38;
  }
  local_28 = plVar2;
  FUN_140906722(param_1,local_1c,&local_30,0);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | *plVar2 != 0;
LAB_1409065ff:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140906722 FUN_140906722 body=358 status=ok
// SIG undefined FUN_140906722(void)

undefined4 *
FUN_140906722(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_1402ca3ce(param_1,local_48);
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
  cVar3 = FUN_14090688a(param_1,uVar8,local_40);
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
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090688a FUN_14090688a body=150 status=ok
// SIG undefined FUN_14090688a(void)

void FUN_14090688a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_140906bd0((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_1409068f4;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_1409068f4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140906920 FUN_140906920 body=688 status=ok
// SIG undefined FUN_140906920(void)

void FUN_140906920(longlong *param_1)

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
    if ((int)uVar10 < 1) goto LAB_140906986;
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
LAB_140906986:
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



// FUNCTION 140906bd0 FUN_140906bd0 body=138 status=ok
// SIG undefined FUN_140906bd0(void)

void FUN_140906bd0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140906c5a FUN_140906c5a body=96 status=ok
// SIG undefined FUN_140906c5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140906c5a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140906cba(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140906cba(param_1[0x15],param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140906cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 140906cba FUN_140906cba body=1980 status=ok
// SIG undefined FUN_140906cba(void)

void FUN_140906cba(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  void *_Buf1;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint uVar23;
  LPCRITICAL_SECTION lpCriticalSection;
  size_t _Size;
  void *_Buf2;
  undefined1 auStack_128 [32];
  size_t local_108;
  undefined4 local_100;
  undefined8 local_f8;
  ulonglong *local_e8;
  uint *local_e0;
  ulonglong local_d8;
  LPCRITICAL_SECTION local_d0;
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98 [4];
  ulonglong *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = param_2;
  if (param_2[1] == 0) {
    uVar12 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
      local_a8 = *(undefined4 *)(param_1 + 0x160);
      uStack_a4 = *(undefined4 *)(param_1 + 0x164);
      uStack_a0 = *(undefined4 *)(param_1 + 0x168);
      uStack_9c = *(undefined4 *)(param_1 + 0x16c);
      FUN_142b08556(param_2[1],(longlong)(int)param_2[4]);
    }
    uVar12 = FUN_14001cc68((longlong)(int)param_2[5],0);
    local_108 = (size_t)*(int *)((longlong)param_2 + 0x24);
    local_f8 = 0;
    local_100 = 0;
    cVar6 = FUN_140aa9920(*(undefined8 *)(param_1 + 0x14c),uVar12,(longlong)(int)param_2[5],
                          param_2[1]);
    if (cVar6 == '\0') {
      iVar19 = 0x20;
      if (*(int *)((longlong)param_2 + 0x24) < 0x20) {
        iVar19 = *(int *)((longlong)param_2 + 0x24);
      }
      local_98[0] = 0;
      local_98[1] = 0;
      FUN_1407c8a86(param_2[1],iVar19,local_98);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      _Buf1 = (void *)FUN_14001cc68((longlong)(int)param_2[4],0);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      uVar20 = *param_2;
      if (uVar20 == 0) {
        FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xdc7,
                      L"Cannot retry because Block.RawRequest is null.");
        uVar20 = *local_e8;
      }
      FUN_14707e702(uVar20,_Buf1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      param_2 = local_e8;
      if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
        local_b8 = *(undefined4 *)(param_1 + 0x160);
        uStack_b4 = *(undefined4 *)(param_1 + 0x164);
        uStack_b0 = *(undefined4 *)(param_1 + 0x168);
        uStack_ac = *(undefined4 *)(param_1 + 0x16c);
        FUN_142b08556(_Buf1,(longlong)(int)local_e8[4]);
      }
      uVar9 = *(uint *)((longlong)param_2 + 0x24);
      _Size = (size_t)(int)uVar9;
      _Buf2 = (void *)param_2[1];
      iVar19 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar19 != 0) {
        if ((int)uVar9 < 1) {
          uVar7 = 0;
        }
        else {
          uVar20 = 0;
          do {
            if (*(char *)((longlong)_Buf1 + uVar20) != *(char *)((longlong)_Buf2 + uVar20)) {
              uVar7 = (uint)uVar20;
              goto LAB_1409073ab;
            }
            uVar20 = uVar20 + 1;
            uVar7 = uVar9;
          } while (uVar9 != uVar20);
        }
        FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xddc,
                      L"Buffers were different yet all bytes were the same????");
        uVar9 = *(uint *)((longlong)local_e8 + 0x24);
        _Buf2 = (void *)local_e8[1];
LAB_1409073ab:
        puVar14 = local_e8;
        iVar19 = uVar9 - uVar7;
        if (0x3f < iVar19) {
          iVar19 = 0x40;
        }
        local_98[0] = 0;
        local_98[1] = 0;
        FUN_1407c8a86((longlong)_Buf2 + (ulonglong)uVar7,iVar19);
        iVar19 = *(int *)((longlong)puVar14 + 0x24) - uVar7;
        if (0x3f < iVar19) {
          iVar19 = 0x40;
        }
        local_c8[0] = 0;
        local_c8[1] = 0;
        FUN_1407c8a86((longlong)_Buf1 + (ulonglong)uVar7,iVar19,local_c8);
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        _Size = (size_t)*(int *)((longlong)local_e8 + 0x24);
        param_2 = local_e8;
      }
      local_f8 = 0;
      local_100 = 0;
      local_108 = _Size;
      cVar6 = FUN_140aa9920(*(undefined8 *)(param_1 + 0x14c),uVar12,(longlong)(int)param_2[5],_Buf1)
      ;
      if (cVar6 == '\0') {
        FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xde6,
                      L"Retry was NOT sucessful.");
      }
      FUN_1400020a8(_Buf1);
    }
    FUN_1400020a8(param_2[1]);
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x120);
  EnterCriticalSection(lpCriticalSection);
  param_2[2] = uVar12;
  plVar16 = (longlong *)*param_2;
  if (plVar16 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar16 + 0x51) == '\0') {
      (**(code **)(*plVar16 + 0x10))(plVar16,0);
      plVar16 = (longlong *)*param_2;
      if (plVar16 != (longlong *)0x0) goto LAB_140906db9;
    }
    else {
LAB_140906db9:
      (**(code **)*plVar16)(plVar16,1);
    }
    *param_2 = 0;
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
  }
  if (*(int *)((longlong)param_2 + 0x2c) < 1) {
    if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
      uVar9 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      lVar17 = param_1 + 0x1a8;
      if (*(longlong *)(param_1 + 0x1b0) != 0) {
        lVar17 = *(longlong *)(param_1 + 0x1b0);
      }
      iVar19 = *(int *)(lVar17 + (ulonglong)
                                 (*(int *)(param_1 + 0x1b8) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
      if (iVar19 != -1) {
        do {
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar19 * 0x18);
          if ((ulonglong *)*puVar15 == param_2) goto LAB_14090722c;
          iVar19 = *(int *)(puVar15 + 2);
        } while (iVar19 != -1);
      }
    }
    puVar15 = (undefined8 *)0x0;
LAB_14090722c:
    uVar4 = puVar15[1];
    FUN_14707ea7a((longlong *)(param_1 + 0x170),param_2);
    cVar6 = FUN_14707e914(uVar4,param_2);
    if (cVar6 != '\0') {
      FUN_140320f38(param_1 + 0x80,uVar4);
    }
    FUN_140320ec2(param_2);
    if (param_2 == (ulonglong *)0x0) goto LAB_140907160;
    puVar15 = (undefined8 *)param_2[3];
    if (puVar15 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  else {
    local_78 = (ulonglong *)0x0;
    local_70 = 0x400000000;
    puVar22 = (uint *)(param_1 + 0x90);
    uVar9 = *(uint *)(param_1 + 0xa8);
    if (uVar9 == 0) {
      uVar20 = 1;
      uVar12 = 0;
      iVar19 = 0;
      uVar7 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0xa0);
      if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
        puVar13 = puVar22;
      }
      uVar7 = *puVar13;
      if (uVar7 == 0) {
        iVar19 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar19 = uVar9 - 1;
        }
        uVar12 = 0;
        uVar20 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar20 = uVar12;
        }
        iVar19 = 0;
        do {
          if (uVar20 == uVar12) goto LAB_140906e85;
          iVar19 = iVar19 + 0x20;
          uVar7 = puVar13[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar12 = 0;
        iVar19 = 0;
      }
      uVar20 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar20 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar7 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)uVar9 <= (int)uVar7) {
        uVar7 = uVar9;
      }
    }
    if (uVar7 == uVar9) {
LAB_140906e85:
      *(undefined1 *)((longlong)param_2 + 0x35) = 1;
      goto LAB_140907160;
    }
    uVar23 = 0xffffffff;
    local_e0 = puVar22;
    local_d8 = (ulonglong)uVar9;
    local_d0 = lpCriticalSection;
    do {
      uVar5 = local_70;
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)(int)uVar7 * 0x10);
      if (((*(char *)(uVar3 + 0x80) == '\x01') && (*(char *)(uVar3 + 0x82) == '\0')) &&
         (puVar22 = local_e0, *(char *)(uVar3 + 0x81) == '\0')) {
        uVar21 = (ulonglong)*(uint *)(param_1 + 0x70);
        lVar17 = *(longlong *)(uVar3 + 0x60);
        if ((lVar17 < (longlong)(((longlong)(int)param_2[6] + 1) * uVar21)) &&
           ((longlong)((longlong)(int)param_2[6] * uVar21) < *(longlong *)(uVar3 + 0x68) + lVar17))
        {
          iVar10 = (int)(lVar17 / (longlong)uVar21);
          iVar8 = (int)((lVar17 + *(longlong *)(uVar3 + 0x68) + -1) / (longlong)uVar21);
          if (iVar10 <= iVar8) {
            lVar17 = 0;
            do {
              if (*(longlong *)
                   (*(longlong *)((longlong)iVar10 * 8 + *(longlong *)(param_1 + 0xd0) + lVar17 * 8)
                   + 0x10) == 0) goto LAB_140906fa9;
              lVar17 = lVar17 + 1;
            } while ((iVar8 - iVar10) + 1 != (int)lVar17);
          }
          *(undefined1 *)(uVar3 + 0x82) = 1;
          lVar17 = (longlong)(int)local_70;
          uVar9 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,uVar9);
          if (local_70._4_4_ < uVar9) {
            FUN_14707e986(local_98,uVar5 & 0xffffffff);
          }
          puVar14 = local_78;
          if (local_78 == (ulonglong *)0x0) {
            puVar14 = local_98;
          }
          puVar14[lVar17] = uVar3;
          uVar9 = *(uint *)(param_1 + 0xa8);
          puVar22 = local_e0;
          param_2 = local_e8;
        }
      }
LAB_140906fa9:
      lpCriticalSection = local_d0;
      uVar23 = uVar23 & ~(uint)uVar20;
      puVar13 = *(uint **)(param_1 + 0xa0);
      if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
        puVar13 = puVar22;
      }
      iVar8 = (int)uVar12;
      lVar17 = (longlong)iVar8;
      uVar7 = puVar13[lVar17] & uVar23;
      if (uVar7 == 0) {
        iVar10 = uVar9 + 0x1e;
        if (-1 < (int)(uVar9 - 1)) {
          iVar10 = uVar9 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar18 = 0;
          do {
            uVar7 = puVar13[lVar17 + lVar18 + 1];
            if (uVar7 != 0) {
              uVar12 = (ulonglong)(iVar8 + (int)lVar18 + 1);
              uVar23 = 0xffffffff;
              goto LAB_140907021;
            }
            iVar19 = iVar19 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar11 - lVar17 != lVar18);
          uVar23 = 0xffffffff;
          iVar8 = iVar11;
        }
        uVar12 = (ulonglong)(iVar8 + 1);
        puVar22 = local_e0;
        param_2 = local_e8;
        uVar7 = uVar9;
      }
      else {
LAB_140907021:
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar3 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar7 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar9 <= (int)uVar7) {
          uVar7 = uVar9;
        }
      }
    } while (uVar7 != (uint)local_d8);
    puVar14 = local_98;
    if (local_78 != (ulonglong *)0x0) {
      puVar14 = local_78;
    }
    if ((longlong)(int)local_70 != 0) {
      puVar2 = puVar14 + (int)local_70;
      do {
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          uVar12 = *puVar14;
          uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          lVar17 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar17 = param_1 + 0xb8;
          }
          iVar19 = *(int *)(lVar17 + (ulonglong)
                                     (*(int *)(param_1 + 200) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar19 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar19 * 0x10) == uVar12)
              {
                FUN_140e64072();
                break;
              }
              iVar19 = *(int *)((longlong)iVar19 * 0x10 + *(longlong *)(param_1 + 0x80) + 8);
            } while (iVar19 != -1);
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar2);
    }
    *(undefined1 *)((longlong)param_2 + 0x35) = 1;
    param_2 = local_78;
    if (local_78 == (ulonglong *)0x0) goto LAB_140907160;
  }
  FUN_1400020a8(param_2);
LAB_140907160:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140907478 FUN_140907478 body=20 status=ok
// SIG undefined FUN_140907478(void)

void FUN_140907478(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14090748c(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 14090748c FUN_14090748c body=379 status=ok
// SIG undefined FUN_14090748c(void)

void FUN_14090748c(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *_Src;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,8);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    local_50 = param_2;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = param_3 * 8;
    uVar8 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (local_50 != 0 && _Src != (void *)0x0) {
      iVar7 = local_50;
      if (param_3 < local_50) {
        iVar7 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)iVar7 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14090760e FUN_14090760e body=57 status=ok
// SIG undefined FUN_14090760e(void)

void FUN_14090760e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb218c8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb218c8 = FUN_140002ddd(FUN_1464344e1,uVar1,L"GbxBrainAspect_Stance");
  }
  return;
}



// FUNCTION 140907648 FUN_140907648 body=355 status=ok
// SIG undefined FUN_140907648(void)

void FUN_140907648(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    FUN_1409077ac();
    local_40 = 1;
    local_48 = uVar4;
    (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_30,lVar5,DAT_14caa6ec0);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
      if (local_30 != 0) {
        LOCK();
        puVar1 = (uint *)(local_30 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_30 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_30 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = local_30;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar9 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar9) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar9) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_30;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409077ac FUN_1409077ac body=423 status=ok
// SIG undefined FUN_1409077ac(void)

undefined * FUN_1409077ac(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa6ef8) {
    FUN_144b3d300(&DAT_14caa6ef8);
    if (DAT_14caa6ef8 == -1) {
      FUN_1457576c4(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LandscapeFixedGrid";
      local_78 = L"FLandscapeFixedGridUniformShaderParameters";
      local_50 = 0x10;
      local_58 = 0x8e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa6e78,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143262c2e);
      _Init_thread_footer(&DAT_14caa6ef8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caa6e78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090795c FUN_14090795c body=232 status=ok
// SIG undefined FUN_14090795c(void)

undefined8 * FUN_14090795c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140907a46();
  *param_1 = &PTR_FUN_14b810290;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0xffffffff;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x235) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x4a) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x254) = uVar1;
  *(undefined4 *)(param_1 + 0x4b) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x25c) = uVar3;
  param_1[0x4c] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_1446f470e(&local_20,L"UpperBody",1);
  param_1[0x43] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140907a46 FUN_140907a46 body=493 status=ok
// SIG undefined FUN_140907a46(void)

undefined8 * FUN_140907a46(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b2b5bc0;
  puVar1 = param_1 + 6;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7f) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3ff00000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ff00000;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)((longlong)param_1 + 0x201) = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  FUN_140907c34(puVar1,0);
  *(undefined1 *)param_1[6] = 2;
  iVar2 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_140907c34(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[6] + (longlong)iVar2) = 0;
  iVar2 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_140907c34(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[6] + (longlong)iVar2) = 1;
  iVar2 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_140907c34(puVar1,iVar2);
  }
  *(undefined1 *)(param_1[6] + (longlong)iVar2) = 7;
  iVar2 = *(int *)(param_1 + 10);
  *(uint *)(param_1 + 10) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x54) < iVar2 + 1U) {
    FUN_1403de658(param_1 + 9,iVar2);
  }
  *(undefined8 *)(param_1[9] + (longlong)iVar2 * 8) = DAT_14cb72618;
  return param_1;
}



// FUNCTION 140907c34 FUN_140907c34 body=345 status=ok
// SIG undefined FUN_140907c34(void)

void FUN_140907c34(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140907cb5;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_140907cb5:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 140907d8e FUN_140907d8e body=373 status=ok
// SIG undefined FUN_140907d8e(void)

void FUN_140907d8e(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined4 local_30;
  undefined5 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140907f04();
  local_a8 = (undefined8 *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_37 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_b0 = DAT_14cbc18a0;
  local_98 = 0;
  local_90 = 0;
  uStack_a0 = 1;
  uStack_9c = 0;
  FUN_1446f84a2(&local_a8,0);
  uVar2 = uStack_a0;
  *local_a8 = DAT_14cbc18b0;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  uVar2 = uStack_a0;
  local_a8[lVar3] = DAT_14cbc18a8;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  local_a8[lVar3] = DAT_14cbc1898;
  FUN_140ab6af6(param_2,&local_b0);
  FUN_14072ffb2(CONCAT71(uStack_37,uStack_38),local_30);
  if (CONCAT71(uStack_37,uStack_38) != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140907f04 FUN_140907f04 body=57 status=ok
// SIG undefined FUN_140907f04(void)

void FUN_140907f04(longlong param_1,undefined8 param_2)

{
  FUN_140907f3e();
  if (*(char *)(param_1 + 0x368) != '\x01') {
    return;
  }
  FUN_1457577b2(param_1 + 0x369,param_2);
  return;
}



// FUNCTION 140907f3e FUN_140907f3e body=418 status=ok
// SIG undefined FUN_140907f3e(void)

void FUN_140907f3e(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  longlong local_80;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cb1aeb8 != 0) {
    lVar2 = FUN_14030fc70(DAT_14cb1aeb8,param_1);
    if (lVar2 != 0) {
      local_40 = 0;
      lStack_38 = 0;
      uVar3 = FUN_140927942();
      lVar4 = FUN_14477b664(uVar3);
      lVar5 = FUN_140927942();
      uVar3 = FUN_140927942();
      FUN_1402d1bfa(local_98,uVar3,lVar2);
      if (local_98[0] != 0) {
        lStack_38 = 0;
      }
      local_48 = local_98[0];
      lVar6 = FUN_140927942();
      if (lVar5 == 0) {
LAB_14090806a:
        lVar6 = lVar5;
      }
      else if (lVar6 == 0) {
        lVar6 = 0;
      }
      else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)) goto LAB_14090806a;
      if (lVar4 != lVar6) {
        lStack_38 = 0;
      }
      uVar3 = FUN_14477b664(lVar6);
      local_40 = FUN_14477b664(uVar3);
      if ((local_98[0] != 0) && (local_40 != 0)) {
        lStack_38 = lVar2;
      }
      FUN_14031575e(local_98,&local_48);
      goto LAB_140907f96;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_14042b5a6(local_98,uVar3);
LAB_140907f96:
  FUN_1409080e2(param_2,local_98,0);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409080e2 FUN_1409080e2 body=175 status=ok
// SIG undefined FUN_1409080e2(void)

void FUN_1409080e2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_14042b392(param_2,param_1 + 0x18);
  if (cVar1 != '\0') {
    return;
  }
  iVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar4 = (longlong)*(int *)(param_1 + 0x70) * 0x50;
    do {
      cVar1 = FUN_14042b392(lVar3,param_2);
      if (cVar1 != '\0') {
        return;
      }
      lVar3 = lVar3 + 0x50;
      lVar4 = lVar4 + -0x50;
    } while (lVar4 != 0);
    iVar2 = *(int *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_140908192(param_1 + 0x68,iVar2);
  }
  FUN_14042b2d2((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x68),param_2);
  FUN_14085140c(param_1,param_2,param_3);
  return;
}



// FUNCTION 140908192 FUN_140908192 body=272 status=ok
// SIG undefined FUN_140908192(void)

void FUN_140908192(longlong param_1,int param_2)

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



// FUNCTION 1409082a2 FUN_1409082a2 body=227 status=ok
// SIG undefined FUN_1409082a2(void)

longlong FUN_1409082a2(void)

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
  if (DAT_14cac9ca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478c0a72;
    local_40 = &LAB_1417b2375;
    local_48 = L"Engine";
    local_50 = 0x1000000000;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac9ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140908386 FUN_140908386 body=730 status=ok
// SIG undefined FUN_140908386(void)

ushort * FUN_140908386(longlong *param_1,ushort *param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *_Dst;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  if (param_2 == (ushort *)0x0) goto LAB_1409085d3;
  cVar1 = (**(code **)(*param_1 + 0x1e8))();
  puVar9 = param_2;
  if (cVar1 != '\0') {
    iVar2 = iswalpha(*param_2);
    if (iVar2 == 0) {
      lVar3 = 2;
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)((longlong)param_2 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)((longlong)&DAT_149e26620 + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_1409084ef;
LAB_140908481:
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) goto LAB_1409084ef;
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_140908481;
      }
      if (uVar5 != uVar7) {
        puVar9 = (ushort *)0x0;
        puVar10 = param_2;
        goto LAB_1409084b8;
      }
LAB_1409084ef:
      puVar9 = param_2 + 2;
      do {
        uVar5 = *puVar9;
        iVar2 = uVar5 - 0x30;
        if (9 < (ushort)iVar2) {
          if ((ushort)(uVar5 - 0x61) < 6) {
            iVar2 = uVar5 - 0x57;
          }
          else {
            if (5 < (ushort)(uVar5 - 0x41)) goto LAB_140908402;
            iVar2 = uVar5 - 0x37;
          }
        }
        if ((uVar5 != 0x30) && (iVar2 == 0)) goto LAB_140908402;
        puVar9 = puVar9 + 1;
      } while (puVar9 != (ushort *)0x0);
      puVar9 = (ushort *)0x0;
      goto LAB_140908538;
    }
    lVar3 = FUN_14689a7e0(&local_48);
    local_50 = lVar3;
    if (lVar3 != -1) {
      if (param_4 == 1) {
        cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
          if (cVar1 == '\0') {
            _Dst = (longlong *)(param_3 + *(int *)((longlong)param_1 + 0x44));
            puVar9 = local_48;
            if (_Dst != &local_50) {
              if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
                (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_50,(int)param_1[6]);
                puVar9 = local_48;
              }
              else {
                memcpy(_Dst,&local_50,
                       (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
                puVar9 = local_48;
              }
            }
          }
          else {
            (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_50);
            puVar9 = local_48;
          }
          goto LAB_14090841d;
        }
        param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
      }
      (**(code **)(*param_1 + 0x1f8))(param_1,param_3,lVar3);
      puVar9 = local_48;
      goto LAB_14090841d;
    }
    goto LAB_1409085d3;
  }
  while( true ) {
    uVar5 = *puVar9;
    if (((0x2e < (ulonglong)uVar5) || ((0x680000000000U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)) &&
       (9 < (ushort)(uVar5 - 0x30))) break;
    puVar9 = puVar9 + 1;
  }
  if ((uVar5 | 0x20) == 0x66) {
    puVar9 = puVar9 + 1;
  }
  goto LAB_140908402;
  while (puVar10 = puVar10 + 1, puVar10 != (ushort *)0x0) {
LAB_1409084b8:
    if ((*puVar10 != 0x2d) && (*puVar10 != 0x2b)) {
      goto LAB_1409084d8;
    }
  }
  goto LAB_140908538;
  while (puVar10 = puVar10 + 1, puVar9 = (ushort *)0x0, puVar10 != (ushort *)0x0) {
LAB_1409084d8:
    iVar2 = iswdigit(*puVar10);
    puVar9 = puVar10;
    if (iVar2 == 0) break;
  }
LAB_140908538:
  if (puVar9 == param_2) {
LAB_1409085d3:
    puVar9 = (ushort *)0x0;
  }
  else {
LAB_140908402:
    if (param_4 == 1) {
      cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x218))(param_1,param_3,param_2);
        goto LAB_14090841d;
      }
      param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
    }
    (**(code **)(*param_1 + 0x210))(param_1,param_3,param_2);
  }
LAB_14090841d:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar9;
}



// FUNCTION 140908666 FUN_140908666 body=31 status=ok
// SIG undefined FUN_140908666(void)

void FUN_140908666(undefined8 param_1,float *param_2,wchar_t *param_3)

{
  double dVar1;
  
  dVar1 = _wtof(param_3);
  *param_2 = (float)dVar1;
  return;
}



// FUNCTION 14090868a FUN_14090868a body=25 status=ok
// SIG undefined FUN_14090868a(void)

void FUN_14090868a(undefined8 param_1,int *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = iVar1;
  return;
}



// FUNCTION 1409086a4 FUN_1409086a4 body=25 status=ok
// SIG undefined FUN_1409086a4(void)

void FUN_1409086a4(undefined8 param_1,undefined1 *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = (char)iVar1;
  return;
}



// FUNCTION 1409086be FUN_1409086be body=195 status=ok
// SIG undefined FUN_1409086be(void)

undefined8 FUN_1409086be(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if ((*plVar11 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar12 * 0x28) == param_3[1])) {
          plVar3 = (longlong *)plVar11[3];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar11 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
          *(int *)(plVar11 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
          *(int *)plVar11 = (int)lVar8;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
          *(int *)(plVar11 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
          FUN_140908782(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = (int)plVar11[4];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 140908782 FUN_140908782 body=116 status=ok
// SIG undefined FUN_140908782(void)

void FUN_140908782(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1409087f6 FUN_1409087f6 body=145 status=ok
// SIG undefined FUN_1409087f6(void)

void FUN_1409087f6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_60;
  local_48 = 0;
  local_38 = &PTR_LAB_14a1e3b70;
  local_58 = FUN_140908888;
  local_60 = param_2;
  local_28 = param_1;
  AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
  FUN_140908888(&local_30,*(undefined8 *)(param_1 + 0x1b0));
  ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140908888 FUN_140908888 body=2243 status=ok
// SIG undefined FUN_140908888(void)

void FUN_140908888(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint *puVar29;
  bool bVar30;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined8 *local_1a0;
  undefined1 *local_198;
  code *local_190;
  int local_184;
  longlong local_180;
  undefined8 *local_178;
  uint *local_170;
  longlong *local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_180 = param_1[1];
  iVar24 = (int)param_2[5];
  local_178 = param_1;
  if (iVar24 == 0) {
    uVar22 = 1;
    uVar26 = 0;
    iVar23 = 0;
    iVar17 = 0;
  }
  else {
    puVar29 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar29 = (uint *)(param_2 + 2);
    }
    uVar25 = *puVar29;
    if (uVar25 == 0) {
      iVar23 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar23 = iVar24 + -1;
      }
      uVar26 = 0;
      uVar22 = (ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        uVar22 = uVar26;
      }
      iVar23 = 0;
      do {
        if (uVar22 == uVar26) goto LAB_140908eeb;
        iVar23 = iVar23 + 0x20;
        uVar25 = puVar29[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar26 = 0;
      iVar23 = 0;
    }
    uVar22 = (ulonglong)(-uVar25 & uVar25);
    uVar1 = uVar22 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar17 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar24 <= iVar17) {
      iVar17 = iVar24;
    }
  }
  if (iVar17 < iVar24) {
    uVar25 = 0xffffffff;
    local_170 = (uint *)(param_2 + 2);
    local_168 = param_2;
    do {
      iVar24 = *(int *)(*local_168 + 4 + (longlong)iVar17 * 0x20);
      local_184 = iVar23;
      local_160 = uVar26;
      if (iVar24 != 0) {
        puVar29 = (uint *)(*local_168 + (longlong)iVar17 * 0x20);
        uVar18 = *puVar29;
        if (((((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) &&
             (plVar21 = (longlong *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
             plVar21 != (longlong *)0x0)) &&
            (((int)plVar21[2] == iVar24 && ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))) &&
           (lVar27 = *plVar21, lVar27 != 0)) {
          if (DAT_14cad2858 == 0) {
            local_138 = FUN_144a7958c;
            local_190 = FUN_14081d0ea;
            local_198 = &LAB_146395584;
            local_1a0 = &local_138;
            local_1a8 = &LAB_147a0ba80;
            local_1b0 = &LAB_14575ccce;
            local_1b8 = L"Engine";
            local_1c0 = 0x40000000000;
            local_1c8 = 0x10000004;
            local_1d0 = 0x10;
            local_1d8 = 0x1180;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) {
            local_148 = 0;
            uStack_140 = 0;
            local_158 = (code *)0x0;
            uStack_150 = 0;
            uVar18 = *(uint *)(lVar27 + 0xc);
            if ((int)uVar18 < DAT_14c9647dc) {
              lVar28 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
            }
            else {
              lVar28 = 0;
            }
            iVar24 = *(int *)(lVar28 + 0x10);
            if (*(int *)(lVar28 + 0x10) == 0) {
              LOCK();
              iVar24 = DAT_14c964868 + 1;
              UNLOCK();
              iVar23 = DAT_14c964868 + 1;
              bVar30 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar24;
              if (bVar30) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar23);
              }
              LOCK();
              iVar24 = *(int *)(lVar28 + 0x10);
              bVar30 = iVar24 == 0;
              if (bVar30) {
                *(int *)(lVar28 + 0x10) = iVar23;
                iVar24 = 0;
              }
              UNLOCK();
              if (bVar30) {
                iVar24 = iVar23;
              }
            }
            uVar4 = puVar29[2];
            FUN_142b70b4b(&local_138,lVar27,uVar4,1);
            uVar13 = uStack_f0;
            uVar12 = local_f8;
            uVar11 = uStack_120;
            uVar10 = local_128;
            uVar8 = uStack_130;
            pcVar9 = local_138;
            local_158 = (code *)CONCAT44(uStack_114,local_118);
            uStack_150._0_4_ = uStack_110;
            uStack_150._4_4_ = uStack_10c;
            local_148 = local_108;
            uStack_140 = uStack_100;
            uVar6 = CONCAT44(uStack_e4,local_e8);
            uVar7 = CONCAT44(uStack_dc,uStack_e0);
            uVar2 = *(undefined8 *)*local_178;
            puVar15 = (undefined8 *)FUN_14001cc68(0x90,0x10);
            *puVar15 = 0;
            *(uint *)(puVar15 + 2) = uVar18;
            *(int *)((longlong)puVar15 + 0x14) = iVar24;
            *(uint *)(puVar15 + 3) = uVar4;
            puVar15[4] = pcVar9;
            puVar15[5] = uVar8;
            puVar15[6] = uVar10;
            puVar15[7] = uVar11;
            *(undefined4 *)(puVar15 + 8) = (undefined4)local_158;
            *(undefined4 *)((longlong)puVar15 + 0x44) = local_158._4_4_;
            *(undefined4 *)(puVar15 + 9) = (undefined4)uStack_150;
            *(undefined4 *)((longlong)puVar15 + 0x4c) = uStack_150._4_4_;
            *(undefined4 *)(puVar15 + 10) = (undefined4)local_148;
            *(undefined4 *)((longlong)puVar15 + 0x54) = local_148._4_4_;
            *(undefined4 *)(puVar15 + 0xb) = (undefined4)uStack_140;
            *(undefined4 *)((longlong)puVar15 + 0x5c) = uStack_140._4_4_;
            puVar15[0xc] = uVar12;
            puVar15[0xd] = uVar13;
            puVar15[0xe] = uVar6;
            puVar15[0xf] = uVar7;
            puVar15[0x10] = uVar2;
            if (puVar15 != (undefined8 *)0x0) {
              LOCK();
              puVar3 = *(undefined8 **)(local_180 + 0x280);
              *(undefined8 **)(local_180 + 0x280) = puVar15;
              UNLOCK();
              LOCK();
              *puVar3 = puVar15;
              UNLOCK();
            }
          }
          else if (0 < *(int *)(lVar27 + 0xd78)) {
            lVar28 = 0;
            do {
              lVar5 = *(longlong *)(*(longlong *)(lVar27 + 0xd70) + lVar28 * 8);
              if ((lVar5 != 0) && (lVar16 = FUN_140aa2aee(lVar5), lVar16 != 0)) {
                local_148 = 0;
                uStack_140 = 0;
                local_158 = (code *)0x0;
                uStack_150 = 0;
                uVar18 = *(uint *)(lVar27 + 0xc);
                if ((int)uVar18 < DAT_14c9647dc) {
                  lVar16 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
                }
                else {
                  lVar16 = 0;
                }
                iVar24 = *(int *)(lVar16 + 0x10);
                if (*(int *)(lVar16 + 0x10) == 0) {
                  LOCK();
                  iVar24 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar23 = DAT_14c964868 + 1;
                  bVar30 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar24;
                  if (bVar30) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  iVar24 = *(int *)(lVar16 + 0x10);
                  bVar30 = iVar24 == 0;
                  if (bVar30) {
                    *(int *)(lVar16 + 0x10) = iVar23;
                    iVar24 = 0;
                  }
                  UNLOCK();
                  if (bVar30) {
                    iVar24 = iVar23;
                  }
                }
                FUN_1447f067c(lVar5,&local_138,1,0);
                uVar12 = uStack_120;
                uVar11 = local_128;
                uVar10 = uStack_130;
                pcVar9 = local_138;
                uVar8 = DAT_14c846520;
                uVar7 = DAT_14c846518;
                uVar6 = DAT_14c846510;
                local_158 = (code *)CONCAT44(uStack_114,local_118);
                uStack_150._0_4_ = uStack_110;
                uStack_150._4_4_ = uStack_10c;
                local_148 = local_108;
                uStack_140 = uStack_100;
                uVar2 = *(undefined8 *)*local_178;
                puVar15 = (undefined8 *)FUN_14001cc68(0x90,0x10);
                *puVar15 = 0;
                *(uint *)(puVar15 + 2) = uVar18;
                *(int *)((longlong)puVar15 + 0x14) = iVar24;
                *(int *)(puVar15 + 3) = (int)lVar28;
                puVar15[4] = pcVar9;
                puVar15[5] = uVar10;
                puVar15[6] = uVar11;
                puVar15[7] = uVar12;
                *(undefined4 *)(puVar15 + 8) = (undefined4)local_158;
                *(undefined4 *)((longlong)puVar15 + 0x44) = local_158._4_4_;
                *(undefined4 *)(puVar15 + 9) = (undefined4)uStack_150;
                *(undefined4 *)((longlong)puVar15 + 0x4c) = uStack_150._4_4_;
                *(undefined4 *)(puVar15 + 10) = (undefined4)local_148;
                *(undefined4 *)((longlong)puVar15 + 0x54) = local_148._4_4_;
                *(undefined4 *)(puVar15 + 0xb) = (undefined4)uStack_140;
                *(undefined4 *)((longlong)puVar15 + 0x5c) = uStack_140._4_4_;
                puVar15[0xc] = uVar6;
                puVar15[0xd] = uVar7;
                puVar15[0xe] = uVar8;
                puVar15[0xf] = 0;
                puVar15[0x10] = uVar2;
                if (puVar15 != (undefined8 *)0x0) {
                  LOCK();
                  puVar3 = *(undefined8 **)(local_180 + 0x280);
                  *(undefined8 **)(local_180 + 0x280) = puVar15;
                  UNLOCK();
                  LOCK();
                  *puVar3 = puVar15;
                  UNLOCK();
                }
              }
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar27 + 0xd78));
          }
        }
      }
      uVar25 = uVar25 & ~(uint)uVar22;
      puVar29 = (uint *)local_168[4];
      if ((uint *)local_168[4] == (uint *)0x0) {
        puVar29 = local_170;
      }
      iVar24 = (int)local_168[5];
      iVar17 = (int)local_160;
      lVar27 = (longlong)iVar17;
      uVar18 = puVar29[lVar27] & uVar25;
      uVar26 = local_160;
      iVar23 = local_184;
      if (uVar18 == 0) {
        iVar19 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar19 = iVar24 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar20 = iVar19;
        if (iVar19 < iVar17) {
          iVar20 = iVar17;
        }
        if (iVar19 <= iVar17) break;
        lVar28 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar18 = puVar29[lVar27 + lVar28 + 1];
          if (uVar18 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar20 - lVar27 == lVar28) goto LAB_140908eeb;
        }
        uVar25 = 0xffffffff;
        uVar26 = (ulonglong)(iVar17 + (int)lVar28 + 1);
      }
      uVar22 = (ulonglong)(-uVar18 & uVar18);
      uVar1 = uVar22 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar17 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    } while (iVar17 < iVar24);
  }
LAB_140908eeb:
  local_138 = (code *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3ff00000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e4 = 0x3ff00000;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  lVar27 = local_180 + 0x290;
  cVar14 = FUN_141745c40(lVar27);
  if (cVar14 != '\0') {
    do {
      if ((((local_138._4_4_ != 0) && (-1 < (int)(uint)local_138)) &&
          ((int)(uint)local_138 < DAT_14c9647dc)) &&
         (((plVar21 = (longlong *)
                      ((ulonglong)(((uint)local_138 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_138 >> 0x10) * 8)),
           plVar21 != (longlong *)0x0 && ((int)plVar21[2] == local_138._4_4_)) &&
          (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar28 = *plVar21, lVar28 != 0)))))) {
        if (DAT_14cad2858 == 0) {
          local_158 = FUN_144a7958c;
          local_190 = FUN_14081d0ea;
          local_198 = &LAB_146395584;
          local_1a0 = &local_158;
          local_1a8 = &LAB_147a0ba80;
          local_1b0 = &LAB_14575ccce;
          local_1b8 = L"Engine";
          local_1c0 = 0x40000000000;
          local_1c8 = 0x10000004;
          local_1d0 = 0x10;
          local_1d8 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if ((*(int *)(*(longlong *)(lVar28 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) {
          local_e8 = *(undefined4 *)(lVar28 + 0x280);
          uStack_e4 = *(undefined4 *)(lVar28 + 0x284);
          uStack_e0 = *(undefined4 *)(lVar28 + 0x288);
          uStack_dc = *(undefined4 *)(lVar28 + 0x28c);
          local_d8 = *(undefined8 *)(lVar28 + 0x290);
          uStack_d0 = 0;
          local_1d8 = local_1d8 & 0xffffff00;
          FUN_140613f88(lVar28,&local_128,0,0);
        }
      }
      cVar14 = FUN_141745c40(lVar27,&local_138);
    } while (cVar14 != '\0');
  }
  if ((local_b0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090914c FUN_14090914c body=318 status=ok
// SIG undefined FUN_14090914c(void)

void FUN_14090914c(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 4;
  *puVar2 = &PTR_FUN_14a4dcfa0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 7) = 2;
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar3 + 0xf16);
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x4a);
    local_20 = puVar2[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_20,uVar1);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x130);
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_28,uVar1);
  }
  local_30 = puVar2[2];
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_38 = FUN_14090928c();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  FUN_140909372(&local_38,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090928c FUN_14090928c body=228 status=ok
// SIG undefined FUN_14090928c(void)

longlong FUN_14090928c(void)

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
  if (DAT_14cab2c98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411e5bea;
    local_38 = &LAB_147547f19;
    local_40 = FUN_14179db99;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneCachePreAnimatedStateSystem",&DAT_14cab2c98,
                  &DAT_147547f18);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2c98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140909372 FUN_140909372 body=580 status=ok
// SIG undefined FUN_140909372(void)

void FUN_140909372(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
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
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_14090950e:
    lVar3 = 0;
  }
  else {
    if (DAT_14cab2770 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1475472e1;
      local_50 = &LAB_14633c0b5;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x40;
      FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
      if (DAT_14cab2770 == 0) goto LAB_14090950e;
    }
    if ((*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cab2770 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8) !=
        DAT_14cab2770 + 0x30)) goto LAB_14090950e;
    lVar3 = *param_1;
  }
  uVar1 = FUN_1409095b8(&DAT_14cab2788,lVar3);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if (DAT_14cab2770 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1475472e1;
      local_50 = &LAB_14633c0b5;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x40;
      FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
      if (DAT_14cab2770 == 0) goto LAB_1409095b0;
    }
    if ((*(int *)(DAT_14cab2770 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8) ==
        DAT_14cab2770 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14090941b;
    }
  }
LAB_1409095b0:
  lVar3 = 0;
LAB_14090941b:
  uVar2 = FUN_1409095b8(&DAT_14cab2788,lVar3);
  FUN_1447ba426(&DAT_14cab2870,uVar1,uVar2);
  FUN_1447ba426(&DAT_14cab2838,uVar2,uVar1);
  DAT_14cab2900 = DAT_14cab2900 + 1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409095b8 FUN_1409095b8 body=761 status=ok
// SIG undefined FUN_1409095b8(void)

ulonglong FUN_1409095b8(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar10 = *(longlong *)(param_2 + 0x18);
    uVar9 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar5 = (uint)lVar10 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar5) +
                    (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar8 * 0x14);
        if (*plVar4 == lVar10) {
          if ((plVar4 != (longlong *)0x0) && ((ushort *)(plVar4 + 1) != (ushort *)0x0)) {
            uVar7 = (ulonglong)*(ushort *)(plVar4 + 1);
            goto LAB_140909808;
          }
          break;
        }
        iVar8 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar8 != -1);
    }
  }
  if (param_2 == 0) {
    uVar9 = 0;
    iVar8 = 0;
  }
  else {
    uVar9 = *(uint *)(param_2 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar6;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar6;
      }
    }
  }
  iVar6 = (int)param_1[0x15];
  uVar7 = (ulonglong)iVar6;
  *(uint *)(param_1 + 0x15) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar6 + 1U) {
    FUN_1457577de(param_1 + 0x14,iVar6);
  }
  lVar10 = param_1[0x14];
  *(uint *)(lVar10 + uVar7 * 0xc) = uVar9;
  *(int *)(lVar10 + 4 + uVar7 * 0xc) = iVar8;
  *(undefined2 *)(lVar10 + 8 + uVar7 * 0xc) = 0xffff;
  FUN_1409098b2(param_1 + 0x16,iVar6);
  FUN_1409098b2(param_1 + 0x1d,iVar6);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FUN_1408128a4(param_1,local_48);
  *local_40 = uVar1;
  *(short *)(local_40 + 1) = (short)iVar6;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar9 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar2 = FUN_140812804(param_1,uVar9,local_40);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar5 < 4) {
      iVar8 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= (int)param_1[9])) {
      uVar9 = (int)param_1[9] - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      *(undefined4 *)
       ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 9) = iVar8;
      FUN_140812c16(param_1);
    }
  }
  FUN_1409098b2(param_1 + 0x24,iVar6);
  *(int *)(param_1 + 0x2f) = (int)param_1[0x2f] + 1;
LAB_140909808:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1409098b2 FUN_1409098b2 body=309 status=ok
// SIG undefined FUN_1409098b2(void)

void FUN_1409098b2(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  FUN_1409099e8();
  param_2 = param_2 & 0xffff;
  uVar3 = (uint)param_2;
  iVar6 = uVar3 + 1;
  iVar2 = *(int *)(param_1 + 0x18);
  iVar10 = iVar6 - iVar2;
  if (iVar10 == 0 || iVar6 < iVar2) goto LAB_14090990a;
  if (iVar2 == 0) {
LAB_140909930:
    if (*(int *)(param_1 + 0x1c) <= (int)uVar3) {
      if (uVar3 < 0x80) {
        iVar9 = 0x80;
        iVar6 = iVar2;
      }
      else {
        uVar11 = uVar3 + 0x20 >> 5;
        if (*(int *)(param_1 + 0x1c) + 0x1fU < 0xa0) {
          uVar7 = 4;
          if (4 < uVar11) {
            uVar7 = uVar11;
          }
        }
        else {
          uVar7 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
        }
        uVar4 = FUN_144a3809e(uVar7 << 2,0);
        iVar6 = (int)(uVar4 >> 2);
        iVar9 = -0x20;
        if ((int)uVar11 <= iVar6) {
          iVar9 = iVar6 << 5;
        }
        iVar6 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x1c) = iVar9;
      FUN_1446efbd8(param_1,iVar6);
      iVar6 = *(int *)(param_1 + 0x18) + iVar10;
    }
    iVar9 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    *(int *)(param_1 + 0x18) = iVar6;
    if (iVar6 % 0x20 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = param_1;
      }
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar8 + (longlong)(iVar9 >> 5) * 4) =
           (uint)(*(int *)(lVar8 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar9 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar9 = iVar2 + -1;
    }
    if (iVar9 >> 5 != (int)(param_2 >> 5)) goto LAB_140909930;
    *(int *)(param_1 + 0x18) = iVar6;
  }
  FUN_1447c6044(param_1,iVar2,iVar10,0);
LAB_14090990a:
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar8 = param_1;
  }
  puVar1 = (uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}



// FUNCTION 1409099e8 FUN_1409099e8 body=161 status=ok
// SIG undefined FUN_1409099e8(void)

void FUN_1409099e8(longlong param_1)

{
  void *_Dst;
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    iVar3 = *(int *)(param_1 + 0x28);
    if (0 < iVar3) {
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x20);
        lVar4 = (longlong)(int)uVar5;
        uVar1 = *(ushort *)(lVar2 + 2 + lVar4 * 4);
        if ((int)(uint)uVar1 < (int)*(uint *)(param_1 + 0x18)) {
          lVar6 = *(longlong *)(param_1 + 0x10);
          if (*(longlong *)(param_1 + 0x10) == 0) {
            lVar6 = param_1;
          }
          if ((((*(uint *)(lVar6 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) ||
              (uVar1 = *(ushort *)(lVar2 + lVar4 * 4), *(uint *)(param_1 + 0x18) <= (uint)uVar1)) ||
             ((*(uint *)(lVar6 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0))
          goto LAB_140909a60;
          uVar5 = uVar5 + 1;
        }
        else {
LAB_140909a60:
          if (~uVar5 + iVar3 != 0) {
            _Dst = (void *)(lVar2 + lVar4 * 4);
            memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)(int)(~uVar5 + iVar3) << 2);
            iVar3 = *(int *)(param_1 + 0x28);
          }
          iVar3 = iVar3 + -1;
          *(int *)(param_1 + 0x28) = iVar3;
        }
      } while ((int)uVar5 < iVar3);
    }
  }
  return;
}



// FUNCTION 140909a8a FUN_140909a8a body=1779 status=ok
// SIG undefined FUN_140909a8a(void)

void FUN_140909a8a(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  longlong local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1400ef488();
  if (*(int *)(param_1 + 0x424) < 0) {
    *(undefined4 *)(param_1 + 0x420) = 0;
    FUN_14892fdd6(param_1 + 0x418);
  }
  else {
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if ((((iVar1 != 0) && (uVar14 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar14)
       ) && ((int)uVar14 < DAT_14c9647dc)) &&
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar1)) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
       (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_100 = &local_80;
      local_80 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = FUN_14081d0ea;
      local_108 = &LAB_1478c0a72;
      local_110 = (code *)&LAB_1417b2375;
      local_118 = L"Engine";
      local_120 = 0x1000000000;
      local_128 = 0x10000004;
      local_130 = 8;
      local_138 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      puVar4 = (undefined8 *)FUN_1447210f0(plVar10);
      if (DAT_14cb22468 == 0) {
        local_100 = &local_80;
        local_80 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_1427b09ee;
        local_108 = &LAB_147f2c44f;
        local_110 = FUN_146438a21;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10004001;
        local_130 = 8;
        local_138 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar5 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,DAT_14cb22468);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14cb22468 == 0) {
          local_100 = &local_80;
          local_80 = FUN_1449e2820;
          local_f0 = FUN_14081d0ea;
          local_f8 = FUN_1427b09ee;
          local_108 = &LAB_147f2c44f;
          local_110 = FUN_146438a21;
          local_118 = L"Engine";
          local_120 = 0;
          local_128 = 0x10004001;
          local_130 = 8;
          local_138 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
        }
        plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb22468);
        if (((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) &&
           (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar9 = DAT_14caa8578, lVar7 != 0)) {
          uVar8 = FUN_14090a268();
          plVar5 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar8);
          local_e0 = param_1;
          if (plVar5 != (longlong *)0x0) {
            uVar8 = FUN_14090a268();
            plVar6 = (longlong *)FUN_144718840(plVar5,uVar8);
            if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
              lVar9 = (**(code **)(*plVar6 + 0x18))(plVar6);
              lVar9 = *(longlong *)(lVar9 + 8);
            }
          }
          local_c8 = lVar9;
          local_98 = puVar4;
          FUN_14090a34e(&local_80,&local_98);
          local_98 = local_78;
          local_90 = local_70;
          LOCK();
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
          UNLOCK();
          local_88 = local_68;
          local_c0 = local_58;
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
          if (local_78 != local_60) {
            local_d0 = (longlong *)(local_e0 + 0x418);
            do {
              puVar4 = local_98;
              lVar9 = local_98[2];
              if (*(char *)(lVar9 + 0x631) == '\0') {
                local_b8 = *(undefined8 *)(lVar9 + 0x260);
                uStack_b0 = *(undefined8 *)(lVar9 + 0x268);
                local_a8 = *(undefined8 *)(lVar9 + 0x270);
                cVar2 = FUN_14488bfb8(lVar7);
                if (cVar2 != '\0') {
                  if (*(char *)(lVar9 + 0x668) == '\x01') {
                    plVar5 = (longlong *)(lVar9 + 0x648);
                  }
                  else {
                    if (*(longlong *)(lVar9 + 0x638) == 0) goto LAB_140909d09;
                    plVar5 = (longlong *)(*(longlong *)(lVar9 + 0x638) + 0x38);
                  }
                  if (plVar5 != (longlong *)0x0) {
                    if (local_c8 == 0) {
                      lVar11 = *(longlong *)(*(longlong *)(local_e0 + 0x48) + 0x44);
                      if (lVar11 == 0) {
LAB_140909df9:
                        cVar2 = FUN_14090a3d8(lVar9,plVar10);
                        if (cVar2 == '\0') {
                          if (lVar9 == 0) {
                            uVar12 = 0;
                            uVar15 = 0;
                          }
                          else {
                            uVar14 = *(uint *)(lVar9 + 0xc);
                            uVar12 = (ulonglong)uVar14;
                            if ((int)uVar14 < DAT_14c9647dc) {
                              lVar9 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)
                              ;
                            }
                            else {
                              lVar9 = 0;
                            }
                            uVar15 = (ulonglong)*(uint *)(lVar9 + 0x10);
                            if (*(uint *)(lVar9 + 0x10) == 0) {
                              LOCK();
                              iVar1 = DAT_14c964868 + 1;
                              UNLOCK();
                              uVar14 = DAT_14c964868 + 1;
                              bVar16 = DAT_14c964868 < 1000;
                              DAT_14c964868 = iVar1;
                              if (bVar16) {
                                local_d8 = uVar12;
                                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                              ,0x23d,
                                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                             );
                                uVar12 = local_d8;
                              }
                              LOCK();
                              uVar3 = *(uint *)(lVar9 + 0x10);
                              bVar16 = uVar3 == 0;
                              if (bVar16) {
                                *(uint *)(lVar9 + 0x10) = uVar14;
                                uVar3 = 0;
                              }
                              UNLOCK();
                              if (bVar16) {
                                uVar3 = uVar14;
                              }
                              uVar15 = (ulonglong)uVar3;
                            }
                          }
                          iVar1 = *(int *)(local_e0 + 0x420);
                          *(uint *)(local_e0 + 0x420) = iVar1 + 1U;
                          if (*(uint *)(local_e0 + 0x424) < iVar1 + 1U) {
                            local_d8 = uVar12;
                            FUN_145757934(local_d0,iVar1);
                            uVar12 = local_d8;
                          }
                          *(ulonglong *)(*local_d0 + (longlong)iVar1 * 8) =
                               uVar12 & 0xffffffff | uVar15 << 0x20;
                          puVar4 = local_98;
                        }
                      }
                      else if ((longlong)(int)plVar5[1] != 0) {
                        lVar13 = 0;
                        do {
                          if (*(longlong *)(*plVar5 + lVar13) == lVar11) goto LAB_140909df9;
                          lVar13 = lVar13 + 8;
                        } while ((longlong)(int)plVar5[1] * 8 != lVar13);
                      }
                    }
                    else if ((longlong)(int)plVar5[1] != 0) {
                      lVar11 = 0;
                      do {
                        if (*(longlong *)(*plVar5 + lVar11) == local_c8) goto LAB_140909df9;
                        lVar11 = lVar11 + 8;
                      } while ((longlong)(int)plVar5[1] * 8 != lVar11);
                    }
                  }
                }
              }
LAB_140909d09:
              local_98 = (undefined8 *)FUN_14090a1e8(*puVar4);
              FUN_14090a19a(&local_98);
            } while (local_98 != local_60);
          }
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
          UNLOCK();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14090a19a FUN_14090a19a body=77 status=ok
// SIG undefined FUN_14090a19a(void)

void FUN_14090a19a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_14090a1e8(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14090a1e8 FUN_14090a1e8 body=128 status=ok
// SIG undefined FUN_14090a1e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14090a1e8(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_14090a23c:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_14090a23c;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 14090a268 FUN_14090a268 body=228 status=ok
// SIG undefined FUN_14090a268(void)

longlong FUN_14090a268(void)

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
  if (DAT_14cb6e3e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487980f5;
    local_40 = FUN_14653ab5d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"PerchUserInterface",&DAT_14cb6e3e8,&DAT_1487980f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e3e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090a34e FUN_14090a34e body=137 status=ok
// SIG undefined FUN_14090a34e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14090a34e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb88c68 = _DAT_14cb88c68 + 1;
  UNLOCK();
  uVar1 = FUN_14090a1e8(DAT_14cb88c60);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb88c60;
  LOCK();
  _DAT_14cb88c68 = _DAT_14cb88c68 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_14090a19a(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb88c60;
  LOCK();
  _DAT_14cb88c68 = _DAT_14cb88c68 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_14090a19a(param_1 + 4);
  LOCK();
  _DAT_14cb88c68 = _DAT_14cb88c68 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 14090a3d8 FUN_14090a3d8 body=295 status=ok
// SIG undefined FUN_14090a3d8(void)

ulonglong FUN_14090a3d8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  float fVar7;
  
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,2);
  if (((*(longlong *)(param_1 + 0x638) == 0) || (param_2 == (longlong *)0x0)) ||
     (*(char *)(param_1 + 0x630) == '\0')) goto LAB_14090a4aa;
  fVar7 = *(float *)(param_1 + 0x6b4);
  if (0.0 < fVar7) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
      if (lVar3 != 0) {
        fVar7 = *(float *)(param_1 + 0x6b4);
        goto LAB_14090a4c6;
      }
    }
    else {
LAB_14090a4c6:
      if ((double)fVar7 <= *(double *)(lVar3 + 0x6d0)) goto LAB_14090a421;
    }
    uVar5 = CONCAT71(uVar6,4);
  }
  else {
LAB_14090a421:
    if (*(longlong **)(param_1 + 0x690) == (longlong *)0x0 ||
        *(longlong **)(param_1 + 0x690) == param_2) {
      uVar2 = FUN_1407ca880();
      lVar3 = (**(code **)(*param_2 + 0x288))(param_2,uVar2);
      uVar5 = CONCAT71(uVar6,3);
      if (lVar3 != 0) {
        uVar2 = FUN_1407ca880();
        lVar4 = FUN_144718840(lVar3,uVar2);
        if ((lVar3 != lVar4) && (lVar4 != 0)) {
          cVar1 = FUN_14090a5ee(param_1,param_2);
          if (cVar1 == '\0') {
            uVar5 = CONCAT71(uVar6,5);
          }
          else {
            cVar1 = FUN_14090a876(param_1,param_2);
            if (cVar1 == '\0') {
              uVar5 = CONCAT71(uVar6,6);
            }
            else {
              cVar1 = FUN_14090a500(param_1,param_2);
              uVar5 = 7;
              if (cVar1 == '\0') {
                uVar5 = 0;
              }
            }
          }
        }
      }
    }
    else {
      uVar5 = CONCAT71(uVar6,1);
    }
  }
LAB_14090a4aa:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14090a500 FUN_14090a500 body=238 status=ok
// SIG undefined FUN_14090a500(void)

undefined8 FUN_14090a500(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 == plVar3) {
        return 0;
      }
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x638) == 0) {
        return 1;
      }
      lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x638) + 0x60);
      if (lVar5 != 0) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x638) + 0x58);
        plVar2 = plVar3 + lVar5;
        do {
          if (*(int *)(lVar4 + 0x80) != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x78) + lVar5) == *plVar3) {
                return 1;
              }
              lVar5 = lVar5 + 8;
            } while ((longlong)*(int *)(lVar4 + 0x80) << 3 != lVar5);
          }
          if (*(int *)(lVar4 + 0x90) != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x88) + lVar5) == *plVar3) {
                return 1;
              }
              lVar5 = lVar5 + 8;
            } while ((longlong)*(int *)(lVar4 + 0x90) << 3 != lVar5);
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar2);
      }
    }
  }
  return 0;
}



// FUNCTION 14090a5ee FUN_14090a5ee body=554 status=ok
// SIG undefined FUN_14090a5ee(void)

undefined8 FUN_14090a5ee(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x6a8) == 0) ||
     (uVar4 = 1, *(longlong *)(param_1 + 0x690) != param_2)) {
    if (*(longlong *)(param_1 + 0x638) == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(*(longlong *)(param_1 + 0x638) + 0x30);
    }
    lVar3 = FUN_1409639d4(param_2);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x78) != *(int *)(lVar3 + 0xa4))) {
      uVar1 = (uint)((ulonglong)local_20 >> 0x10);
      uVar6 = (uint)local_20 & 0xffff;
      lVar5 = lVar3 + 0xa8;
      if (*(longlong *)(lVar3 + 0xb0) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0xb0);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar3 + 0xb8) - 1U &
                               (int)((ulonglong)local_20 >> 0x20) + ((uint)local_20 << 0x10 | uVar6)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          lVar5 = *(longlong *)(lVar3 + 0x70) + (longlong)iVar7 * 0x38;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar7 * 0x38) == local_20) {
            if (((lVar5 + 8U & 0xfffffffffffffff7) != 0) &&
               (uVar4 = 1, *(longlong *)(lVar5 + 0x10) != 0)) goto LAB_14090a718;
            break;
          }
          iVar7 = *(int *)(lVar5 + 0x30);
        } while (iVar7 != -1);
      }
    }
    lVar3 = FUN_14090a81a(param_2);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x20) != *(int *)(lVar3 + 0x4c)) {
        uVar1 = (uint)((ulonglong)local_20 >> 0x10);
        uVar6 = (uint)local_20 & 0xffff;
        lVar5 = lVar3 + 0x50;
        if (*(longlong *)(lVar3 + 0x58) != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x58);
        }
        iVar7 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(lVar3 + 0x60) - 1U &
                                 (int)((ulonglong)local_20 >> 0x20) +
                                 ((uint)local_20 << 0x10 | uVar6) + (uVar1 << 0x13 | uVar1 & 0xffff)
                                 + (uVar6 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            lVar5 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar7 * 0x38;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar7 * 0x38) == local_20) {
              if (((lVar5 != 0) && (lVar5 != -8)) && (uVar4 = 1, *(longlong *)(lVar5 + 0x10) != 0))
              goto LAB_14090a718;
              break;
            }
            iVar7 = *(int *)(lVar5 + 0x30);
          } while (iVar7 != -1);
        }
      }
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
      cVar2 = FUN_14090aaac(lVar5,lVar3,&local_20);
      if (cVar2 != '\0') {
        uVar4 = 1;
        goto LAB_14090a718;
      }
    }
    uVar4 = 0;
  }
LAB_14090a718:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14090a81a FUN_14090a81a body=91 status=ok
// SIG undefined FUN_14090a81a(void)

undefined8 FUN_14090a81a(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14090a268();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14090a268();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014090a869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14090a876 FUN_14090a876 body=565 status=ok
// SIG undefined FUN_14090a876(void)

undefined8 FUN_14090a876(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x6a8) == 0) ||
     (uVar4 = 1, *(longlong *)(param_1 + 0x690) != param_2)) {
    if (*(longlong *)(param_1 + 0x638) == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(*(longlong *)(param_1 + 0x638) + 0x30);
    }
    lVar3 = FUN_1409639d4(param_2);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x78) != *(int *)(lVar3 + 0xa4))) {
      uVar1 = (uint)((ulonglong)local_20 >> 0x10);
      uVar7 = (uint)local_20 & 0xffff;
      lVar5 = lVar3 + 0xa8;
      if (*(longlong *)(lVar3 + 0xb0) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0xb0);
      }
      iVar6 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar3 + 0xb8) - 1U &
                               (int)((ulonglong)local_20 >> 0x20) + ((uint)local_20 << 0x10 | uVar7)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          lVar5 = *(longlong *)(lVar3 + 0x70) + (longlong)iVar6 * 0x38;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar6 * 0x38) == local_20) {
            if (lVar5 != -8 && lVar5 != 0) {
              lVar3 = FUN_140963a30();
              uVar4 = 1;
              if (lVar3 != 0) goto LAB_14090a980;
            }
            break;
          }
          iVar6 = *(int *)(lVar5 + 0x30);
        } while (iVar6 != -1);
      }
    }
    lVar3 = FUN_14090a81a(param_2);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x20) != *(int *)(lVar3 + 0x4c)) {
        uVar1 = (uint)((ulonglong)local_20 >> 0x10);
        uVar7 = (uint)local_20 & 0xffff;
        lVar5 = lVar3 + 0x50;
        if (*(longlong *)(lVar3 + 0x58) != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x58);
        }
        iVar6 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(lVar3 + 0x60) - 1U &
                                 (int)((ulonglong)local_20 >> 0x20) +
                                 ((uint)local_20 << 0x10 | uVar7) + (uVar1 << 0x13 | uVar1 & 0xffff)
                                 + (uVar7 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            lVar5 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar6 * 0x38;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar6 * 0x38) == local_20) {
              if ((lVar5 != 0) && (lVar5 != -8)) {
                lVar5 = FUN_140963a30();
                uVar4 = 1;
                if (lVar5 != 0) goto LAB_14090a980;
              }
              break;
            }
            iVar6 = *(int *)(lVar5 + 0x30);
          } while (iVar6 != -1);
        }
      }
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
      cVar2 = FUN_145757872(lVar5,lVar3,&local_20);
      if (cVar2 != '\0') {
        uVar4 = 1;
        goto LAB_14090a980;
      }
    }
    uVar4 = 0;
  }
LAB_14090a980:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14090aaac FUN_14090aaac body=475 status=ok
// SIG undefined FUN_14090aaac(void)

bool FUN_14090aaac(undefined8 param_1,ulonglong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c88a82(&local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    iVar7 = (int)local_28[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_28[1];
      bVar13 = iVar7 == iVar6;
      if (bVar13) {
        *(int *)(local_28 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar8 = local_28;
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (((local_30 == 0) || (lVar4 = *param_3, lVar4 == 0)) ||
         (*(int *)(local_30 + 0xe8) == *(int *)(local_30 + 0x114))) {
LAB_14090ac7a:
        bVar13 = false;
      }
      else {
        uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar11 = (uint)lVar4 & 0xffff;
        uVar12 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = uVar12 >> 0x10 ^ uVar12;
        lVar9 = local_30 + 0x118;
        if (*(longlong *)(local_30 + 0x120) != 0) {
          lVar9 = *(longlong *)(local_30 + 0x120);
        }
        iVar7 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(local_30 + 0x128) - 1U &
                                 ((uVar11 >> 4) +
                                  (int)((ulonglong)lVar4 >> 0x20) + (uint)lVar4 * 0x10000 + uVar11 +
                                  (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 2) + uVar12 * 0x40 +
                                  0x9e3779b9 ^ uVar12)) * 4);
        if (iVar7 == -1) goto LAB_14090ac7a;
        lVar9 = *(longlong *)(local_30 + 0xe0);
        bVar13 = false;
        do {
          lVar10 = (longlong)iVar7 * 0x40;
          lVar3 = lVar9 + lVar10;
          if ((*(ulonglong *)(lVar9 + lVar10) == param_2) &&
             (*(longlong *)(lVar9 + 8 + lVar10) == lVar4)) {
            if ((lVar3 + 0x10U & 0xffffffffffffffef) == 0) goto LAB_14090ac7a;
            bVar13 = *(longlong *)(lVar3 + 0x18) != 0;
            break;
          }
          iVar7 = *(int *)(lVar3 + 0x38);
        } while (iVar7 != -1);
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
      goto LAB_14090ac1e;
    }
  }
  bVar13 = false;
LAB_14090ac1e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar13;
}



// FUNCTION 14090ae24 FUN_14090ae24 body=624 status=ok
// SIG undefined FUN_14090ae24(void)

longlong FUN_14090ae24(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar4 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        if (lVar4 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          goto LAB_14090aebf;
        }
        uVar3 = *(uint *)(lVar4 + 0xc);
        *param_1 = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        uVar3 = *(uint *)(lVar7 + 0x10);
        if (*(uint *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
          }
          LOCK();
          uVar3 = *(uint *)(lVar7 + 0x10);
          bVar8 = uVar3 == 0;
          if (bVar8) {
            *(uint *)(lVar7 + 0x10) = uVar6;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar8) {
            uVar3 = uVar6;
          }
        }
        param_1[1] = uVar3;
      }
      else {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_14090ae8b;
    }
  }
  else {
LAB_14090ae8b:
    if (DAT_14cb0b4f0 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_14580b774;
      local_58 = &LAB_147d6e27b;
      local_60 = &LAB_140307be8;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x158;
      FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
    }
    if ((*(int *)(DAT_14cb0b4f0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) == DAT_14cb0b4f0 + 0x30)) goto LAB_14090aec1;
  }
LAB_14090aebf:
  lVar4 = 0;
LAB_14090aec1:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14090b096 FUN_14090b096 body=497 status=ok
// SIG undefined FUN_14090b096(void)

void FUN_14090b096(longlong param_1)

{
  uint uVar1;
  double dVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = param_1 + 0x688;
  lVar4 = FUN_14090ae24(lVar5);
  if (lVar4 != 0) {
    lVar4 = FUN_14090ae24(lVar5);
    dVar2 = 0.0;
    dVar9 = 0.0;
    if (*(longlong *)(lVar4 + 0x148) != 0) {
      dVar9 = (double)*(int *)(*(longlong *)(lVar4 + 0x148) + 4);
    }
    lVar5 = FUN_14090ae24(lVar5);
    if (*(int **)(lVar5 + 0x148) != (int *)0x0) {
      dVar2 = (double)**(int **)(lVar5 + 0x148);
    }
    lVar5 = *(longlong *)(param_1 + 0xa8);
    if (lVar5 != 0) {
      lVar4 = FUN_14090b288();
      if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
          (*(int *)(lVar5 + 0x394) != 0)) &&
         ((uVar1 = *(uint *)(lVar5 + 0x390), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar6 != (longlong *)0x0) &&
            (((int)plVar6[2] == *(int *)(lVar5 + 0x394) &&
             ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) && (lVar5 = *plVar6, lVar5 != 0)) {
          fVar7 = (*(float *)(lVar5 + 0x504) / *(float *)(lVar5 + 0x500)) *
                  *(float *)(param_1 + 0x6cc);
          if (*(int *)(param_1 + 0x788) == 1) {
            fVar7 = fVar7 + fVar7;
          }
          dVar8 = (double)fVar7;
          dVar9 = (double)((float)((dVar9 / dVar2) * dVar8) / *(float *)(param_1 + 0x774));
          *(double *)(param_1 + 0x6e0) = dVar9;
          *(double *)(param_1 + 0x6e8) = dVar8;
          fVar7 = *(float *)(lVar5 + 0x6c0);
          *(double *)(param_1 + 0x6e0) = dVar9 * (double)fVar7;
          *(double *)(param_1 + 0x6e8) = dVar8 * (double)fVar7;
          if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
            bVar3 = *(byte *)(param_1 + 0x9d);
            if ((bVar3 & 1) == 0) {
LAB_14090b258:
              *(byte *)(param_1 + 0x9d) = bVar3 | 1;
              FUN_1401057d4(param_1);
              FUN_14010586c(&DAT_14cad0140,param_1);
              return;
            }
            if (*(longlong *)(param_1 + 0xb0) == 0) {
              lVar5 = FUN_1448abda6(param_1);
              if (lVar5 == 0) {
                bVar3 = *(byte *)(param_1 + 0x9d);
                goto LAB_14090b258;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14090b288 FUN_14090b288 body=228 status=ok
// SIG undefined FUN_14090b288(void)

longlong FUN_14090b288(void)

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
  if (DAT_14cbaca90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148c2ec65;
    local_40 = FUN_1418cb126;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x400;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMapViewerPOI",&DAT_14cbaca90,&DAT_148c2ec64);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaca90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090b36e FUN_14090b36e body=21 status=ok
// SIG undefined FUN_14090b36e(void)

undefined8 FUN_14090b36e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14090b384 FUN_14090b384 body=149 status=ok
// SIG undefined FUN_14090b384(void)

void FUN_14090b384(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*param_1 + 0x40))();
  FUN_1446f470e(&local_30,uVar1,1);
  if (local_30 == param_2) {
    if (param_3 == 0) {
      uVar1 = FUN_144a52528();
      uVar1 = FUN_1401e3324(uVar1,param_2);
      (**(code **)(*param_1 + 0x50))(param_1,uVar1);
    }
    else if (param_3 == 1) {
      (**(code **)(*param_1 + 0x58))(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090b41a FUN_14090b41a body=1004 status=ok
// SIG undefined FUN_14090b41a(void)

int * FUN_14090b41a(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  char cVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_140044672(param_1,iVar21);
    }
    iVar24 = (int)param_1[5];
    if (iVar24 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar11 = iVar24 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar18 = param_1 + 2;
    iVar17 = iVar24 + 1;
    iVar22 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar22 = iVar24;
    }
    if (iVar22 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar24) {
        if (iVar24 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar24;
        }
        else {
          uVar23 = iVar24 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar23) {
              uVar12 = uVar23;
            }
          }
          else {
            uVar12 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
          }
          uVar20 = FUN_144a3809e(uVar12 << 2,0);
          iVar11 = (int)(uVar20 >> 2);
          iVar17 = -0x20;
          if ((int)uVar23 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar18,iVar11);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar18;
        }
        bVar15 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar24 & 0x1f;
    puVar3 = (uint *)((longlong)plVar18 + (longlong)(iVar22 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar13 = (longlong)iVar21;
    iVar24 = *(int *)(*param_1 + 4 + lVar13 * 0x30);
    *(int *)(param_1 + 6) = iVar24;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar24 * 0x30) = 0xffffffff;
    }
  }
  plVar18 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar18 = (longlong *)param_1[4];
  }
  iVar24 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar24 = iVar21;
  }
  puVar3 = (uint *)((longlong)plVar18 + (longlong)(iVar24 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar21 & 0x1f);
  lVar4 = *param_1;
  lVar13 = lVar13 * 0x30;
  plVar18 = (longlong *)(lVar4 + lVar13);
  plVar19 = (longlong *)*param_3;
  puVar5 = (undefined4 *)param_3[1];
  lVar14 = *plVar19;
  *(longlong *)(lVar4 + lVar13) = lVar14;
  *(longlong *)(lVar4 + 8 + lVar13) = plVar19[1];
  lVar6 = plVar19[2];
  *(longlong *)(lVar4 + 0x10 + lVar13) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    lVar14 = *plVar18;
  }
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  *(undefined4 *)(plVar18 + 3) = *puVar5;
  *(undefined4 *)((longlong)plVar18 + 0x1c) = uVar7;
  *(undefined4 *)(plVar18 + 4) = uVar8;
  *(undefined4 *)((longlong)plVar18 + 0x24) = uVar9;
  *(undefined4 *)(plVar18 + 5) = 0xffffffff;
  uVar23 = (uint)((ulonglong)lVar14 >> 0x10);
  uVar12 = (uint)lVar14 & 0xffff;
  uVar23 = ((uint)lVar14 << 0x10 | uVar12) + (int)((ulonglong)lVar14 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar12 >> 4);
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar19 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[8];
    }
    iVar24 = *(int *)((longlong)plVar19 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
    if (iVar24 != -1) {
      do {
        puVar5 = (undefined4 *)(*param_1 + (longlong)iVar24 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar24 * 0x30) == lVar14) {
          plVar19 = *(longlong **)(puVar5 + 4);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar19 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar19)();
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))();
              }
            }
          }
          lVar13 = *plVar18;
          uVar7 = *(undefined4 *)((longlong)plVar18 + 4);
          lVar4 = plVar18[1];
          uVar8 = *(undefined4 *)((longlong)plVar18 + 0xc);
          lVar14 = plVar18[2];
          uVar9 = *(undefined4 *)((longlong)plVar18 + 0x14);
          lVar6 = plVar18[3];
          uVar10 = *(undefined4 *)((longlong)plVar18 + 0x1c);
          *(longlong *)(puVar5 + 8) = plVar18[4];
          puVar5[4] = (int)lVar14;
          puVar5[5] = uVar9;
          puVar5[6] = (int)lVar6;
          puVar5[7] = uVar10;
          *puVar5 = (int)lVar13;
          puVar5[1] = uVar7;
          puVar5[2] = (int)lVar4;
          puVar5[3] = uVar8;
          FUN_147da30e0(param_1,iVar21);
          cVar16 = '\x01';
          goto LAB_14090b59d;
        }
        iVar24 = puVar5[10];
      } while (iVar24 != -1);
    }
  }
  cVar16 = '\0';
  iVar24 = iVar21;
LAB_14090b59d:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar16;
  }
  if (cVar16 == '\0') {
    uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar12 < 4) {
      iVar21 = 1;
    }
    else {
      uVar20 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar21 <= (int)param_1[9])) {
      uVar23 = (int)param_1[9] - 1U & uVar23;
      *(uint *)((longlong)plVar18 + 0x2c) = uVar23;
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = param_1 + 7;
      }
      *(undefined4 *)(plVar18 + 5) =
           *(undefined4 *)
            ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = param_1 + 7;
      }
      *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
           iVar24;
    }
    else {
      *(int *)(param_1 + 9) = iVar21;
      FUN_14090b806(param_1);
    }
  }
  *param_2 = iVar24;
  return param_2;
}



// FUNCTION 14090b806 FUN_14090b806 body=598 status=ok
// SIG undefined FUN_14090b806(void)

void FUN_14090b806(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x30;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x2c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x28 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_14090ba13;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_14090ba13:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090ba5e FUN_14090ba5e body=88 status=ok
// SIG undefined FUN_14090ba5e(void)

undefined8 * FUN_14090ba5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1d0b80;
  FUN_14090bab6(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_14090bb66(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14090bab6 FUN_14090bab6 body=84 status=ok
// SIG undefined FUN_14090bab6(void)

void FUN_14090bab6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_14090bb0a(plVar1[2],(int)plVar1[3]);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_14090bb35(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14090bb0a FUN_14090bb0a body=43 status=ok
// SIG undefined FUN_14090bb0a(void)

void FUN_14090bb0a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14090bb35 FUN_14090bb35 body=49 status=ok
// SIG undefined FUN_14090bb35(void)

void FUN_14090bb35(longlong param_1,int param_2)

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



// FUNCTION 14090bb66 FUN_14090bb66 body=103 status=ok
// SIG undefined FUN_14090bb66(void)

void FUN_14090bb66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1d03a0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0x10);
  FUN_14090bc82(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14090bbce FUN_14090bbce body=55 status=ok
// SIG undefined FUN_14090bbce(void)

void FUN_14090bbce(longlong *param_1)

{
  FUN_14090bc06(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14090bc06 FUN_14090bc06 body=123 status=ok
// SIG undefined FUN_14090bc06(void)

void FUN_14090bc06(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140240048(param_1,param_2);
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



// FUNCTION 14090bc82 FUN_14090bc82 body=47 status=ok
// SIG undefined FUN_14090bc82(void)

void FUN_14090bc82(longlong param_1,int param_2)

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



// FUNCTION 14090bcbc FUN_14090bcbc body=162 status=ok
// SIG undefined FUN_14090bcbc(void)

undefined8 * FUN_14090bcbc(undefined8 *param_1)

{
  FUN_14090bd5e();
  *param_1 = &PTR_FUN_14a39a9d0;
  param_1[5] = &PTR_FUN_14a39b5c0;
  param_1[6] = &PTR_FUN_14a39b600;
  param_1[0x55] = &PTR_FUN_14a39b650;
  param_1[0x56] = &PTR_FUN_14a39b6d0;
  param_1[0x57] = &PTR_FUN_14a39b6e0;
  param_1[0xe3] = &PTR_FUN_14a39b710;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  *(undefined1 *)(param_1 + 0x199) = 0;
  *(undefined8 *)((longlong)param_1 + 0xccc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd4) = 0;
  *(byte *)(param_1 + 0x164) = *(byte *)(param_1 + 0x164) | 1;
  *(byte *)((longlong)param_1 + 0x2d2) = *(byte *)((longlong)param_1 + 0x2d2) & 0xfe;
  *(undefined1 *)(param_1 + 0x194) = 1;
  return param_1;
}


