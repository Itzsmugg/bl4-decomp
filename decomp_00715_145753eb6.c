// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145753eb6 FUN_145753eb6 body=29 status=ok
// SIG undefined FUN_145753eb6(void)

undefined8 FUN_145753eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145753ed4 FUN_145753ed4 body=123 status=ok
// SIG undefined FUN_145753ed4(void)

void FUN_145753ed4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      iVar5 = 0x20;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_145753f50(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145753f50 FUN_145753f50 body=140 status=ok
// SIG undefined FUN_145753f50(void)

void FUN_145753f50(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 145753fdc FUN_145753fdc body=8 status=ok
// SIG undefined FUN_145753fdc(void)

void FUN_145753fdc(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x188) = param_2;
  return;
}



// FUNCTION 145753fe4 FUN_145753fe4 body=11 status=ok
// SIG undefined FUN_145753fe4(void)

void FUN_145753fe4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x160) = *param_2;
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  return;
}



// FUNCTION 145753ff0 FUN_145753ff0 body=11 status=ok
// SIG undefined FUN_145753ff0(void)

void FUN_145753ff0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x170) = *param_2;
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  return;
}



// FUNCTION 145753ffc FUN_145753ffc body=12 status=ok
// SIG undefined FUN_145753ffc(void)

void FUN_145753ffc(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x180);
  return;
}



// FUNCTION 145754008 FUN_145754008 body=17 status=ok
// SIG undefined FUN_145754008(void)

void FUN_145754008(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) & 0xfe | param_2;
  return;
}



// FUNCTION 145754019 FUN_145754019 body=221 status=ok
// SIG undefined FUN_145754019(void)

undefined8
FUN_145754019(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1408c9060();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457540f8 FUN_1457540f8 body=132 status=ok
// SIG undefined FUN_1457540f8(void)

void FUN_1457540f8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14575417c FUN_14575417c body=210 status=ok
// SIG undefined FUN_14575417c(void)

undefined8 * FUN_14575417c(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_2;
  param_1[1] = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  FUN_1400021e4(param_1,local_30);
  FUN_14001a25e(&local_48,local_30,param_1[1]);
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_38,puVar1,1);
  *param_1 = local_38;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145754250 FUN_145754250 body=132 status=ok
// SIG undefined FUN_145754250(void)

void FUN_145754250(longlong param_1,int param_2)

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



// FUNCTION 1457542d6 FUN_1457542d6 body=151 status=ok
// SIG undefined FUN_1457542d6(void)

longlong FUN_1457542d6(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408ccf3c(&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14575436e FUN_14575436e body=96 status=ok
// SIG undefined FUN_14575436e(void)

void FUN_14575436e(longlong param_1,int param_2)

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



// FUNCTION 1457543ce FUN_1457543ce body=107 status=ok
// SIG undefined FUN_1457543ce(void)

longlong * FUN_1457543ce(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140851d9a();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14575443a FUN_14575443a body=132 status=ok
// SIG undefined FUN_14575443a(void)

void FUN_14575443a(longlong param_1,int param_2)

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



// FUNCTION 1457544c0 FUN_1457544c0 body=3502 status=ok
// SIG undefined FUN_1457544c0(void)

void FUN_1457544c0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  longlong lStack_110;
  longlong *local_108;
  undefined8 local_f8;
  longlong lStack_f0;
  longlong *local_e8;
  undefined8 local_d8;
  longlong lStack_d0;
  longlong *local_c8;
  undefined8 local_b8;
  longlong lStack_b0;
  longlong *local_a8;
  longlong local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined2 local_78;
  undefined1 local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_1 + 0x90))();
  uVar6 = DAT_14cb7e590;
  uVar4 = FUN_141115664();
  lVar5 = FUN_140c48046(param_1 + 0x10,uVar4,uVar6,0);
  if (lVar5 != 0) {
    uVar6 = FUN_140ffad2a();
    lVar7 = FUN_140c483dc(lVar5,uVar6,&DAT_14cb7e5f8,0);
    if (lVar7 != 0) {
      uVar6 = FUN_1408d77e6();
      lVar8 = FUN_140c483dc(lVar7,uVar6,&DAT_14cb7e598,0);
      if (lVar8 != 0) {
        local_98 = 0;
        local_78 = 4;
        plStack_90 = (longlong *)CONCAT44(plStack_90._4_4_,1);
        local_70 = 1;
        local_68 = (DAT_14c9a8634 & 0x20) == 0;
        cVar3 = FUN_144a43716(param_1 + 0x34);
        FUN_144a2da94(&local_98);
        if (cVar3 == '\0') {
          local_98 = 0;
          uVar6 = FUN_1408d77ac();
          plVar9 = (longlong *)FUN_140c47e50(lVar8,uVar6,&local_98);
          if (plVar9 != (longlong *)0x0) {
            *(undefined1 *)(plVar9 + 0x20) = 1;
            FUN_144983130(plVar9 + 0x10,param_1 + 0x33);
            *(undefined1 *)(plVar9 + 0x53) = 1;
            *(undefined1 *)(plVar9 + 0x52) = 1;
            FUN_144983130(plVar9 + 0x43,param_1 + 0x33);
            (**(code **)(*plVar9 + 0x90))(plVar9);
          }
        }
        local_98 = 0;
        uVar6 = FUN_1411157a2();
        lVar10 = FUN_140c47e50(lVar8,uVar6,&local_98);
        if (lVar10 != 0) {
          FUN_14054d68c(lVar10 + 0x80,param_1 + 0x5f);
          *(undefined1 *)(lVar10 + 0x331) = 0;
        }
        local_98 = 0;
        local_158 = lVar5;
        uVar6 = FUN_14575528a();
        lVar5 = FUN_140c47e50(lVar8,uVar6,&local_98);
        if (lVar5 != 0) {
          local_b8 = 0;
          lStack_b0 = 0;
          local_a8 = (longlong *)0x0;
          if (lVar10 == 0) {
            lStack_b0 = 0;
            local_a8 = (longlong *)0x0;
            plVar9 = local_a8;
          }
          else {
            FUN_14111569e(lVar10,&local_98);
            lStack_b0 = local_98;
            plVar9 = plStack_90;
            local_98 = 0;
            plStack_90 = (longlong *)0x0;
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_a8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar11 = *local_a8;
                local_a8 = plVar9;
                (**(code **)(lVar11 + 0x10))();
                plVar9 = local_a8;
              }
              local_a8 = plVar9;
              plVar9 = local_a8;
              if (plStack_90 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plStack_90 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plStack_90 + 0x10))();
                  plVar9 = local_a8;
                }
              }
            }
          }
          local_a8 = plVar9;
          FUN_141115702(&local_98,&local_b8);
          FUN_1403719a4(lVar5 + 0x80,&local_98);
          FUN_144a2da94(&local_98);
        }
        uVar6 = FUN_1408d77e6();
        lVar5 = FUN_140c483dc(lVar8,uVar6,&DAT_14cb7e608,0);
        if (lVar5 != 0) {
          uVar6 = FUN_140a48832();
          lVar11 = FUN_140c483dc(lVar5,uVar6,&DAT_14cb7e5b8,0);
          if (lVar11 != 0) {
            local_98 = 0;
            uVar6 = FUN_140c48226();
            lVar12 = FUN_140c47e50(lVar11,uVar6,&local_98);
            if (lVar12 != 0) {
              *(undefined4 *)(lVar12 + 0x19c) = 1;
              local_d8 = 0;
              lStack_d0 = 0;
              local_c8 = (longlong *)0x0;
              if (lVar10 == 0) {
                lStack_d0 = 0;
                local_c8 = (longlong *)0x0;
                plVar9 = local_c8;
              }
              else {
                FUN_14111569e(lVar10,&local_98);
                lStack_d0 = local_98;
                plVar9 = plStack_90;
                local_98 = 0;
                plStack_90 = (longlong *)0x0;
                if (local_c8 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_c8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    lVar2 = *local_c8;
                    local_c8 = plVar9;
                    (**(code **)(lVar2 + 0x10))();
                    plVar9 = local_c8;
                  }
                  local_c8 = plVar9;
                  plVar9 = local_c8;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plStack_90 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plStack_90 + 0x10))();
                      plVar9 = local_c8;
                    }
                  }
                }
              }
              local_c8 = plVar9;
              FUN_141115702(&local_98,&local_d8);
              FUN_1403719a4(lVar12 + 0x1e8,&local_98);
              FUN_144a2da94(&local_98);
              *(undefined1 *)(lVar12 + 0x1a3) = *(undefined1 *)((longlong)param_1 + 0x2b1);
              *(undefined1 *)(lVar12 + 0x1a4) = *(undefined1 *)((longlong)param_1 + 0x2b2);
              FUN_144983130(lVar12 + 0x1a8,param_1 + 0x57);
              *(undefined1 *)(lVar12 + 0x1e0) = *(undefined1 *)((longlong)param_1 + 0x2f1);
            }
            local_98 = 0;
            uVar6 = FUN_140c4800c();
            lVar11 = FUN_140c47e50(lVar11,uVar6,&local_98);
            if (lVar11 != 0) {
              if (*(char *)(lVar11 + 0xb8) != '\x03') {
                *(undefined1 *)(lVar11 + 0xb8) = 3;
                FUN_1403a3fe6(lVar11);
              }
              local_f8 = 0;
              lStack_f0 = 0;
              local_e8 = (longlong *)0x0;
              if (lVar10 == 0) {
                lStack_f0 = 0;
                local_e8 = (longlong *)0x0;
                plVar9 = local_e8;
              }
              else {
                FUN_14111569e(lVar10,&local_98);
                lStack_f0 = local_98;
                plVar9 = plStack_90;
                local_98 = 0;
                plStack_90 = (longlong *)0x0;
                if (local_e8 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_e8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    lVar12 = *local_e8;
                    local_e8 = plVar9;
                    (**(code **)(lVar12 + 0x10))();
                    plVar9 = local_e8;
                  }
                  local_e8 = plVar9;
                  plVar9 = local_e8;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plStack_90 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plStack_90 + 0x10))();
                      plVar9 = local_e8;
                    }
                  }
                }
              }
              local_e8 = plVar9;
              FUN_141115702(&local_98,&local_f8);
              FUN_1403719a4(lVar11 + 0x80,&local_98);
              FUN_144a2da94(&local_98);
            }
          }
          uVar6 = FUN_140a48832();
          lVar5 = FUN_140c483dc(lVar5,uVar6,&DAT_14cb7e610,0);
          if (lVar5 != 0) {
            FUN_140440628(&local_98,&DAT_14cb7e618,0);
            FUN_1403719a4(lVar5 + 0x38,&local_98);
            FUN_144a2da94(&local_98);
            local_98 = 0;
            uVar6 = FUN_140c4800c();
            plVar9 = (longlong *)FUN_140c47e50(lVar5,uVar6,&local_98);
            if (plVar9 != (longlong *)0x0) {
              local_150 = lVar8;
              local_148 = lVar7;
              if ((char)plVar9[0x17] != '\x02') {
                *(undefined1 *)(plVar9 + 0x17) = 2;
                FUN_1403a3fe6(plVar9);
              }
              FUN_140440628(&local_98,&DAT_14cb7e620,0);
              FUN_1403719a4(plVar9 + 0x10,&local_98);
              FUN_144a2da94(&local_98);
              *(undefined1 *)((longlong)plVar9 + 0x219) = 1;
              *(undefined1 *)(plVar9 + 0x3b) = 1;
              local_98 = 0;
              local_78 = 4;
              plStack_90._0_4_ = 0x41200000;
              local_70 = 3;
              local_68 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
              FUN_1403719a4(plVar9 + 0x1d,&local_98);
              FUN_144a2da94(&local_98);
              local_98 = 0;
              local_78 = 4;
              plStack_90 = (longlong *)CONCAT44(plStack_90._4_4_,0x40a00000);
              local_70 = 3;
              local_68 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
              FUN_1403719a4(plVar9 + 0x3c,&local_98);
              FUN_144a2da94(&local_98);
              (**(code **)(*plVar9 + 0x90))(plVar9);
              lVar7 = local_148;
              lVar8 = local_150;
            }
          }
        }
        uVar6 = FUN_140a48832();
        lVar8 = FUN_140c483dc(lVar8,uVar6,&DAT_14cb7e5a0,0);
        lVar5 = local_158;
        if (lVar8 != 0) {
          local_98 = 0;
          uVar6 = FUN_1457552c4();
          lVar8 = FUN_140c47e50(lVar8,uVar6,&local_98);
          if (lVar8 != 0) {
            local_118 = 0;
            lStack_110 = 0;
            local_108 = (longlong *)0x0;
            if (lVar10 == 0) {
              lStack_110 = 0;
              local_108 = (longlong *)0x0;
              plVar9 = local_108;
            }
            else {
              FUN_14111569e(lVar10,&local_98);
              lStack_110 = local_98;
              plVar9 = plStack_90;
              local_98 = 0;
              plStack_90 = (longlong *)0x0;
              if (local_108 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)local_108 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar5 = *local_108;
                  local_108 = plVar9;
                  (**(code **)(lVar5 + 0x10))();
                  plVar9 = local_108;
                }
                local_108 = plVar9;
                lVar5 = local_158;
                plVar9 = local_108;
                if (plStack_90 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plStack_90 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plStack_90 + 0x10))();
                    plVar9 = local_108;
                  }
                }
              }
            }
            local_108 = plVar9;
            FUN_141115702(&local_98,&local_118);
            FUN_1403719a4(lVar8 + 0x80,&local_98);
            FUN_144a2da94(&local_98);
          }
        }
      }
      uVar6 = FUN_141115664();
      lVar8 = FUN_140c483dc(lVar7,uVar6,&DAT_14cb7e5d8,0);
      if (lVar8 != 0) {
        uVar6 = FUN_140a48832();
        lVar10 = FUN_140c483dc(lVar8,uVar6,&DAT_14cb7e5d0,0);
        if (lVar10 != 0) {
          local_98 = 0;
          uVar6 = FUN_140ffa760();
          lVar10 = FUN_140c47e50(lVar10,uVar6,&local_98);
          if (lVar10 != 0) {
            *(undefined1 *)(lVar10 + 0x460) = 0;
            FUN_14054d68c(lVar10 + 0x1e8,param_1 + 0xae);
            FUN_145755400(&local_98,param_1);
            FUN_1457552fe(lVar10 + 0x80,local_120,&local_98);
            FUN_1449db362(&local_98);
            *(undefined1 *)(lVar10 + 0x1a3) = *(undefined1 *)((longlong)param_1 + 0x2b1);
            *(undefined1 *)(lVar10 + 0x1a4) = 0;
            *(undefined1 *)(lVar10 + 0xa2) = 1;
          }
        }
        if ((char)param_1[0x5e] == '\x01') {
          uVar6 = FUN_140a48832();
          lVar10 = FUN_140c483dc(lVar8,uVar6,&DAT_14cb7e5e0,0);
          if (lVar10 != 0) {
            local_98 = 0;
            uVar6 = FUN_140ffa760();
            lVar10 = FUN_140c47e50(lVar10,uVar6,&local_98);
            if (lVar10 != 0) {
              *(undefined1 *)(lVar10 + 0x460) = 0;
              FUN_14054d68c(lVar10 + 0x1e8,param_1 + 0xae);
              FUN_145755400(&local_98,param_1);
              FUN_1457552fe(lVar10 + 0x80,local_120,&local_98);
              FUN_1449db362(&local_98);
              *(undefined1 *)(lVar10 + 0x1a3) = *(undefined1 *)((longlong)param_1 + 0x2b1);
              *(undefined1 *)(lVar10 + 0x1e0) = 0;
              *(undefined1 *)(lVar10 + 0x1a4) = 0;
              *(undefined1 *)(lVar10 + 0xa2) = 1;
            }
          }
        }
        local_98 = 0;
        uVar6 = FUN_140ffa7d4();
        plVar9 = (longlong *)FUN_140c47e50(lVar8,uVar6,&local_98);
        if (plVar9 != (longlong *)0x0) {
          FUN_144983130(plVar9 + 0x38,param_1 + 0x3a);
          *(undefined1 *)(plVar9 + 0x3f) = 1;
          (**(code **)(*plVar9 + 0x90))(plVar9);
        }
      }
      uVar6 = FUN_140a48832();
      lVar7 = FUN_140c483dc(lVar7,uVar6,&DAT_14cb7e5f0,0);
      if (lVar7 != 0) {
        local_98 = 0;
        local_78 = 4;
        plStack_90 = (longlong *)CONCAT44(plStack_90._4_4_,1);
        local_70 = 1;
        local_68 = (DAT_14c9a8634 & 0x20) == 0;
        cVar3 = FUN_144a43716(param_1 + 0x42);
        FUN_144a2da94(&local_98);
        if (cVar3 == '\0') {
          local_98 = 0;
          uVar6 = FUN_1408d77ac();
          plVar9 = (longlong *)FUN_140c47e50(lVar7,uVar6,&local_98);
          if (plVar9 != (longlong *)0x0) {
            *(undefined1 *)(plVar9 + 0x20) = 1;
            FUN_144983130(plVar9 + 0x10,param_1 + 0x41);
            *(undefined1 *)(plVar9 + 0x53) = 1;
            *(undefined1 *)(plVar9 + 0x52) = 1;
            FUN_144983130(plVar9 + 0x43,param_1 + 0x41);
            (**(code **)(*plVar9 + 0x90))(plVar9);
          }
        }
        local_98 = 0;
        uVar6 = FUN_140c48260();
        lVar8 = FUN_140c47e50(lVar7,uVar6,&local_98);
        if (lVar8 != 0) {
          if (DAT_14caa8580 == 0) {
            FUN_140608a9e();
          }
          lVar10 = DAT_14caa8580;
          FUN_1446f470e(&local_128,L"Trick.Generic.Fidget",1);
          FUN_1400702d4(lVar10,local_120,local_128,1);
          FUN_145755270(&local_98,local_120);
          if (DAT_14c950c29 == '\x01') {
            if (local_98 == 0) {
              local_98 = 0;
            }
            else {
              FUN_1456cec3c();
            }
          }
          *(longlong *)(lVar8 + 0x80) = local_98;
          *(longlong **)(lVar8 + 0x88) = plStack_90;
          *(undefined4 *)(lVar8 + 0x90) = local_88;
        }
        local_98 = 0;
        uVar6 = FUN_140ffa7d4();
        plVar9 = (longlong *)FUN_140c47e50(lVar7,uVar6,&local_98);
        if (plVar9 != (longlong *)0x0) {
          FUN_144983130(plVar9 + 0x38,param_1 + 0x48);
          *(undefined1 *)(plVar9 + 0x3f) = 1;
          FUN_144983130(plVar9 + 0x10,param_1 + 0x4f);
          *(char *)(plVar9 + 0x17) = (char)param_1[0x56];
          (**(code **)(*plVar9 + 0x90))(plVar9);
        }
      }
    }
    uVar6 = FUN_140a48832();
    lVar7 = FUN_140c483dc(lVar5,uVar6,&DAT_14cb7e600,0);
    if (lVar7 != 0) {
      local_98 = 0;
      uVar6 = FUN_140c4880e();
      plVar9 = (longlong *)FUN_140c47e50(lVar7,uVar6,&local_98);
      if (plVar9 != (longlong *)0x0) {
        *(undefined1 *)(plVar9 + 0x10) = 0;
        *(undefined1 *)(plVar9 + 0x18) = 0;
        *(undefined1 *)(plVar9 + 0x20) = 0;
        *(undefined2 *)(plVar9 + 0x28) = 0x100;
        *(undefined1 *)((longlong)plVar9 + 0x143) = 1;
        *(undefined4 *)(plVar9 + 0xf) = 1;
        (**(code **)(*plVar9 + 0x90))(plVar9);
      }
      local_98 = 0;
      uVar6 = FUN_140c48226();
      lVar7 = FUN_140c47e50(lVar7,uVar6,&local_98);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x19c) = 0;
        local_140 = 0;
        if (plVar9 == (longlong *)0x0) {
          local_130 = (longlong *)0x0;
          local_138 = 0;
        }
        else {
          FUN_14111569e(plVar9,&local_98);
          local_130 = plStack_90;
          local_138 = local_98;
        }
        FUN_141115702(&local_98);
        FUN_1403719a4(lVar7 + 0x1e8,&local_98);
        FUN_144a2da94(&local_98);
        *(undefined1 *)(lVar7 + 0x1a0) = 0;
        *(undefined1 *)(lVar7 + 0x1e0) = 0;
      }
    }
    uVar6 = FUN_140a48832();
    FUN_140c483dc(lVar5,uVar6,&DAT_14cb7e5e8,0);
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145755270 FUN_145755270 body=25 status=ok
// SIG undefined FUN_145755270(void)

void FUN_145755270(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 14575528a FUN_14575528a body=57 status=ok
// SIG undefined FUN_14575528a(void)

void FUN_14575528a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a9b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a9b0 = FUN_140002ddd(FUN_1464cb672,uVar1,L"GbxBrainAspectSettings_ClaimPerch");
  }
  return;
}



// FUNCTION 1457552c4 FUN_1457552c4 body=57 status=ok
// SIG undefined FUN_1457552c4(void)

void FUN_1457552c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aed0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aed0 = FUN_140002ddd(FUN_1464cd389,uVar1,L"GbxBrainAspectSettings_UsePerch");
  }
  return;
}



// FUNCTION 1457552fe FUN_1457552fe body=216 status=ok
// SIG undefined FUN_1457552fe(void)

undefined8 * FUN_1457552fe(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145755400 FUN_145755400 body=479 status=ok
// SIG undefined FUN_145755400(void)

longlong * FUN_145755400(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_1457555e0(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b406cf0;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b406c80;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_140427b54;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b406cf0;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b406c80;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_140427b54;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457555e0 FUN_1457555e0 body=142 status=ok
// SIG undefined FUN_1457555e0(void)

longlong * FUN_1457555e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xa0);
  if (plVar2 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
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
    iVar4 = (int)plVar2[1];
    do {
      plVar5 = (longlong *)0x0;
      if (iVar4 == 0) break;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = plVar2;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    param_1 = 0;
  }
  *param_2 = param_1;
  param_2[1] = (longlong)plVar5;
  return param_2;
}



// FUNCTION 14575566e FUN_14575566e body=95 status=ok
// SIG undefined FUN_14575566e(void)

void FUN_14575566e(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  DAT_14cb94688 = 0;
  lVar1 = *param_1;
  iVar2 = (int)((ulonglong)(param_1[1] - lVar1) >> 6) * 0x286bca1b;
  DAT_14cb94690 = iVar2;
  if (iVar2 != 0) {
    FUN_145755704(iVar2);
    FUN_1457556cd(DAT_14cb94688,lVar1,iVar2);
    return;
  }
  DAT_14cb94694 = 0;
  return;
}



// FUNCTION 1457556cd FUN_1457556cd body=55 status=ok
// SIG undefined FUN_1457556cd(void)

void FUN_1457556cd(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_140df4314(param_1,param_2);
    param_1 = param_1 + 0x4c0;
    param_2 = param_2 + 0x4c0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145755704 FUN_145755704 body=103 status=ok
// SIG undefined FUN_145755704(void)

undefined8 FUN_145755704(int param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_1 * 0x4c0,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xd79435e50d79435f),0);
  uVar5 = 0x7fffffff;
  if (param_1 <= (int)(uVar2 / 0x4c0)) {
    uVar5 = uVar2 / 0x4c0 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(&DAT_14cb94688,0,uVar5,0x4c0,8);
  }
  DAT_14cb94694 = iVar4;
  return uVar3;
}



// FUNCTION 14575576c FUN_14575576c body=1473 status=ok
// SIG undefined FUN_14575576c(void)

undefined4 * FUN_14575576c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_1408db122(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  FUN_1408db122(param_1 + 0x16,param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  param_1[0x2a] = param_2[0x2a];
  FUN_1408db122(param_1 + 0x2c,param_2 + 0x2c);
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = param_2[0x3c];
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  param_1[0x40] = param_2[0x40];
  FUN_1408db122(param_1 + 0x42,param_2 + 0x42);
  uVar1 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar1;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  param_1[0x4e] = param_2[0x4e];
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x52] = param_2[0x52];
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  param_1[0x56] = param_2[0x56];
  FUN_1408db122(param_1 + 0x58,param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_2 + 0x62);
  param_1[100] = param_2[100];
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x68] = param_2[0x68];
  *(undefined1 *)((longlong)param_1 + 0x1aa) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_2 + 0x6a);
  param_1[0x6c] = param_2[0x6c];
  FUN_1408db122(param_1 + 0x6e,param_2 + 0x6e);
  uVar1 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  param_1[0x7a] = param_2[0x7a];
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = param_2[0x7e];
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  param_1[0x82] = param_2[0x82];
  FUN_1408db122(param_1 + 0x84,param_2 + 0x84);
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  *(undefined8 *)(param_1 + 0x8e) = *(undefined8 *)(param_2 + 0x8e);
  param_1[0x90] = param_2[0x90];
  *(undefined8 *)(param_1 + 0x92) = 0;
  param_1[0x94] = param_2[0x94];
  *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 0x96);
  param_1[0x98] = param_2[0x98];
  FUN_1408db122(param_1 + 0x9a,param_2 + 0x9a);
  uVar1 = *(undefined8 *)(param_2 + 0xa2);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa2) = uVar1;
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  param_1[0xa6] = param_2[0xa6];
  *(undefined8 *)(param_1 + 0xa8) = 0;
  param_1[0xaa] = param_2[0xaa];
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  FUN_1408db122(param_1 + 0xb0,param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_2 + 0xb6);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xba) = *(undefined8 *)(param_2 + 0xba);
  param_1[0xbc] = param_2[0xbc];
  *(undefined8 *)(param_1 + 0xbe) = 0;
  param_1[0xc0] = param_2[0xc0];
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  param_1[0xc4] = param_2[0xc4];
  FUN_1408db122(param_1 + 0xc6,param_2 + 0xc6);
  uVar1 = *(undefined8 *)(param_2 + 0xce);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xce) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  param_1[0xd2] = param_2[0xd2];
  *(undefined8 *)(param_1 + 0xd4) = 0;
  param_1[0xd6] = param_2[0xd6];
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  param_1[0xda] = param_2[0xda];
  FUN_1408db122(param_1 + 0xdc,param_2 + 0xdc);
  uVar1 = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  *(undefined8 *)(param_1 + 0xe4) = uVar1;
  *(undefined8 *)(param_1 + 0xe6) = *(undefined8 *)(param_2 + 0xe6);
  param_1[0xe8] = param_2[0xe8];
  *(undefined8 *)(param_1 + 0xea) = 0;
  param_1[0xec] = param_2[0xec];
  param_1[0xee] = param_2[0xee];
  FUN_1408db122(param_1 + 0xf0,param_2 + 0xf0);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf6) = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0xfa) = *(undefined8 *)(param_2 + 0xfa);
  param_1[0xfc] = param_2[0xfc];
  *(undefined8 *)(param_1 + 0xfe) = 0;
  param_1[0x100] = param_2[0x100];
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_2 + 0x102);
  param_1[0x104] = param_2[0x104];
  FUN_1408db122(param_1 + 0x106,param_2 + 0x106);
  uVar1 = *(undefined8 *)(param_2 + 0x10e);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x10e) = uVar1;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  param_1[0x112] = param_2[0x112];
  *(undefined8 *)(param_1 + 0x114) = 0;
  param_1[0x116] = param_2[0x116];
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  param_1[0x11a] = param_2[0x11a];
  FUN_1408db122(param_1 + 0x11c,param_2 + 0x11c);
  uVar1 = *(undefined8 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x122) = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x124) = uVar1;
  *(undefined8 *)(param_1 + 0x126) = *(undefined8 *)(param_2 + 0x126);
  param_1[0x128] = param_2[0x128];
  *(undefined8 *)(param_1 + 0x12a) = 0;
  param_1[300] = param_2[300];
  *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_2 + 0x12e);
  return param_1;
}



// FUNCTION 145755d2e FUN_145755d2e body=146 status=ok
// SIG undefined FUN_145755d2e(void)

void FUN_145755d2e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x4c0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x4c0)) {
      uVar5 = uVar4 / 0x4c0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x4c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145755dd6 FUN_145755dd6 body=190 status=ok
// SIG undefined FUN_145755dd6(void)

void FUN_145755dd6(undefined8 param_1,undefined8 *param_2)

{
  void **ppvVar1;
  void *_Src;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408db4c4(&local_48,param_1,0,1);
  _Src = local_38;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = local_48;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
  *(undefined4 *)(param_2 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
  ppvVar1 = (void **)(param_2 + 3);
  if (ppvVar1 != &local_38) {
    *(int *)(param_2 + 4) = local_30;
    if (local_30 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_30);
      if (local_30 != 0) {
        memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145755e96 FUN_145755e96 body=121 status=ok
// SIG undefined FUN_145755e96(void)

void FUN_145755e96(longlong param_1,uint param_2,byte param_3)

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
        FUN_140cc18e8(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147ce5556(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147ce55dc(lVar1);
    return;
  }
  return;
}



// FUNCTION 145755f16 FUN_145755f16 body=273 status=ok
// SIG undefined FUN_145755f16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145755f16(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  param_1[1] = puVar1;
  *param_1 = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[3] = puVar1;
  param_1[2] = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[9] = puVar1;
  param_1[8] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  FUN_1408ed160(param_1 + 0xc);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  uVar2 = DAT_14cadbaa0;
  if (((DAT_14cadba98 != 0x400) || (DAT_14c7585d8 != 0)) &&
     ((DAT_14cadba98 != 0x800 || (DAT_14c7585dc != 0)))) {
    uVar2 = DAT_14cadba98 | _DAT_14cadba9c;
  }
  FUN_141501120(param_1 + 0xc,uVar2 | 0xff);
  return param_1;
}



// FUNCTION 14575602d FUN_14575602d body=97 status=ok
// SIG undefined FUN_14575602d(void)

void FUN_14575602d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14acb55f0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  puVar1[2] = &PTR_FUN_14acb0810;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 14575608e FUN_14575608e body=162 status=ok
// SIG undefined FUN_14575608e(void)

void FUN_14575608e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457560cd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457560cd;
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
LAB_1457560cd:
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
                    /* WARNING: Could not recover jumptable at 0x00014575612c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145756130 FUN_145756130 body=336 status=ok
// SIG undefined FUN_145756130(void)

undefined4 * FUN_145756130(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14575634e(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar6 = *(undefined8 *)*param_2;
  *local_38 = uVar6;
  local_38[1] = *puVar1;
  lVar2 = puVar1[1];
  local_38[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    uVar6 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6;
  cVar4 = FUN_145756284(uVar10,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb25a58 - DAT_14cb25a84;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14cb25a98)) {
      uVar10 = DAT_14cb25a98 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x1c) = uVar10;
      puVar7 = DAT_14cb25a90;
      if (DAT_14cb25a90 == (undefined *)0x0) {
        puVar7 = &DAT_14cb25a88;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb25a98 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb25a90;
      if (DAT_14cb25a90 == (undefined *)0x0) {
        puVar7 = &DAT_14cb25a88;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb25a98 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb25a98 = iVar9;
      FUN_145756454();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145756284 FUN_145756284 body=202 status=ok
// SIG undefined FUN_145756284(void)

undefined8 FUN_145756284(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14cb25a58 - DAT_14cb25a84 != 1) && (DAT_14cb25a58 != DAT_14cb25a84)) {
    puVar9 = &DAT_14cb25a88;
    if (DAT_14cb25a90 != (undefined *)0x0) {
      puVar9 = DAT_14cb25a90;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14cb25a98 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(DAT_14cb25a50 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(DAT_14cb25a50 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(puVar3 + 4);
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
          lVar7 = *param_2;
          uVar5 = *(undefined4 *)((longlong)param_2 + 4);
          lVar8 = param_2[1];
          uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar3 + 4) = param_2[2];
          *puVar3 = (int)lVar7;
          puVar3[1] = uVar5;
          puVar3[2] = (int)lVar8;
          puVar3[3] = uVar6;
          FUN_1457cb02a(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14575634e FUN_14575634e body=262 status=ok
// SIG undefined FUN_14575634e(void)

int * FUN_14575634e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb25a80;
  iVar4 = DAT_14cb25a58;
  if (DAT_14cb25a84 == 0) {
    iVar2 = DAT_14cb25a58 + 1;
    bVar7 = DAT_14cb25a5c == DAT_14cb25a58;
    DAT_14cb25a58 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb25a50,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb25a60,1);
    puVar3 = DAT_14cb25a70;
    if (DAT_14cb25a70 == (undefined *)0x0) {
      puVar3 = &DAT_14cb25a60;
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
    lVar6 = (longlong)DAT_14cb25a80;
    DAT_14cb25a80 = *(int *)(DAT_14cb25a50 + 4 + lVar6 * 0x20);
    DAT_14cb25a84 = DAT_14cb25a84 + -1;
    iVar4 = iVar2;
    if (DAT_14cb25a84 != 0) {
      *(undefined4 *)(DAT_14cb25a50 + (longlong)DAT_14cb25a80 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb25a60;
  if (DAT_14cb25a70 != (undefined *)0x0) {
    puVar3 = DAT_14cb25a70;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb25a50;
  return param_1;
}



// FUNCTION 145756454 FUN_145756454 body=500 status=ok
// SIG undefined FUN_145756454(void)

void FUN_145756454(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
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
  if (DAT_14cb25a90 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb25a90,0,0,4);
  }
  uVar2 = DAT_14cb25a98;
  uVar3 = local_50;
  if (DAT_14cb25a98 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb25a88,0,DAT_14cb25a98,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb25a90;
        if (DAT_14cb25a90 == (undefined *)0x0) {
          puVar5 = &DAT_14cb25a88;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb25a98 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb25a60;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb25a78 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb25a50;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                ((int)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb25a98 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb25a90;
        if (DAT_14cb25a90 == (undefined *)0x0) {
          puVar5 = &DAT_14cb25a88;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb25a98 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb25a90;
        if (DAT_14cb25a90 == (undefined *)0x0) {
          puVar5 = &DAT_14cb25a88;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb25a98 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14575664a FUN_14575664a body=174 status=ok
// SIG undefined FUN_14575664a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14575664a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  if ((longlong)*(int *)(param_1 + 0x3d0) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x3c8);
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x3d0) * 2;
    do {
      if (((*plVar7 != 0) && (plVar3 = (longlong *)plVar7[1], plVar3 != (longlong *)0x0)) &&
         (0 < (int)plVar3[1])) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) {
            (**(code **)(_DAT_00000000 + 200))(0,param_2,param_3);
            goto LAB_145756689;
          }
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
        (**(code **)(*(longlong *)*plVar7 + 200))((longlong *)*plVar7,param_2,param_3);
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)();
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
LAB_145756689:
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
  }
  return;
}



// FUNCTION 1457566f8 FUN_1457566f8 body=228 status=ok
// SIG undefined FUN_1457566f8(void)

void FUN_1457566f8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458c62fc();
  FUN_145756ca4(param_1);
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      cVar4 = FUN_141882374(*(longlong *)(lVar2 + lVar5) + 0x30,DAT_14cb858b8);
      if ((cVar4 != '\0') &&
         (lVar3 = *(longlong *)(lVar2 + lVar5),
         *(char *)(*(longlong *)(lVar3 + 0x10) + 0x90) == '\x01')) {
        local_48[0] = 2;
        local_3c = 1;
        local_44 = 0;
        local_58 = *(undefined8 *)(lVar3 + 0x18);
        local_50 = *(undefined4 *)(lVar3 + 0x20);
        FUN_1488e86f0(param_1,&local_58,local_48);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_1457567de(param_1 + 0x28);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457567de FUN_1457567de body=7 status=ok
// SIG undefined FUN_1457567de(void)

void FUN_1457567de(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1457567e6 FUN_1457567e6 body=114 status=ok
// SIG undefined FUN_1457567e6(void)

void FUN_1457567e6(longlong *param_1,int param_2)

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



// FUNCTION 145756858 FUN_145756858 body=213 status=ok
// SIG undefined FUN_145756858(void)

bool FUN_145756858(longlong param_1,undefined8 param_2,undefined2 *param_3)

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
      FUN_14689c22e();
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



// FUNCTION 14575692e FUN_14575692e body=56 status=ok
// SIG undefined FUN_14575692e(void)

void FUN_14575692e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1406f625c(param_2);
  if ((lVar1 == param_1) && (*(char *)(param_1 + 0x50) == '\0')) {
    FUN_145756966(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145756966 FUN_145756966 body=278 status=ok
// SIG undefined FUN_145756966(void)

void FUN_145756966(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_145756a82();
  lVar2 = param_1[6];
  if (lVar2 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x388))(param_1);
    if (cVar1 != '\0') {
      lVar2 = FUN_14895e534(param_1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar2);
      }
      param_1[6] = lVar2;
      FUN_143dd9df2(lVar2,param_1[5]);
    }
    lVar2 = param_1[6];
    if (lVar2 != 0) goto LAB_145756a20;
  }
  else {
LAB_145756a20:
    FUN_143ddb94e(lVar2,param_1 + 0x1c,*(undefined1 *)((longlong)param_1 + 0xd1),
                  *(undefined1 *)((longlong)param_1 + 0x49));
  }
  lVar2 = param_1[7];
  if (lVar2 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x390))(param_1);
    if (cVar1 != '\0') {
      lVar2 = FUN_145756bf1(param_1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar2);
      }
      param_1[7] = lVar2;
      FUN_145757360(lVar2,param_1[5]);
    }
    lVar2 = param_1[7];
    if (lVar2 == 0) goto LAB_1457569c2;
  }
  thunk_FUN_145756ca4(lVar2,param_1 + 0x1c,*(undefined1 *)((longlong)param_1 + 0xd1),
                      *(undefined1 *)((longlong)param_1 + 0x49));
LAB_1457569c2:
                    /* WARNING: Could not recover jumptable at 0x0001457569d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,param_2);
  return;
}



// FUNCTION 145756a7c thunk_FUN_145756ca4 body=5 status=ok
// SIG undefined thunk_FUN_145756ca4(void)

void thunk_FUN_145756ca4(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [32];
  uint *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  longlong *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [12];
  longlong lStack_b8;
  ulonglong uStack_b0;
  undefined8 *puStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 *puStack_68;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)FUN_145b08b9a();
  if (plVar5 != (longlong *)0x0) {
    lStack_b8 = 0;
    uStack_b0 = 0;
    if (DAT_14cb85a38 != 0) {
      FUN_145757204(&lStack_b8);
    }
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    uStack_88 = (uint)*(undefined8 *)(lVar6 + 0x18);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
    FUN_1400021e4(&uStack_88,&puStack_a8);
    iVar2 = (int)uStack_a0 + -1;
    if ((int)uStack_a0 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&uStack_88,iVar2,puStack_a8);
    uStack_78 = CONCAT44(uStack_84,uStack_88);
    lVar6 = FUN_14575717a(&uStack_78);
    if (puStack_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar6 != 0) {
      lVar6 = FUN_14575718a(lVar6);
      if (0 < (longlong)(int)uStack_b0) {
        plStack_e0 = param_1 + 8;
        uVar13 = (longlong)(int)uStack_b0;
        do {
          uVar12 = uVar13 - 1;
          if ((lVar6 != 0) &&
             (lVar9 = *(longlong *)(lStack_b8 + -8 + uVar13 * 8), *(char *)(lVar9 + 0x68) == '\0'))
          {
            cVar4 = FUN_140d1d704(lVar6,lVar9 + 0x18,*(undefined1 *)(lVar9 + 0x38));
            if (cVar4 == '\0') {
              if (uVar13 != (uStack_b0 & 0xffffffff)) {
                memmove((void *)(lStack_b8 + uVar12 * 8),(void *)(lStack_b8 + uVar12 * 8 + 8),
                        (longlong)((int)uStack_b0 - (int)uVar13) << 3);
              }
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + -1);
              FUN_1488f0694(&lStack_b8);
            }
            else {
              puVar10 = *(undefined4 **)(*(longlong *)(lStack_b8 + uVar12 * 8) + 8);
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = &DAT_14c9485f0;
              }
              FUN_144a7660c(puVar10,auStack_c4,1);
              lVar9 = *(longlong *)(lStack_b8 + uVar12 * 8);
              if ((longlong)(int)param_1[9] != 0) {
                plVar11 = (longlong *)param_1[8];
                lVar7 = (longlong)(int)param_1[9] << 3;
                do {
                  if (*(longlong *)(*plVar11 + 0x10) == lVar9) {
                    if (plVar11 != (longlong *)0x0) goto LAB_145756f4d;
                    break;
                  }
                  plVar11 = plVar11 + 1;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
              uStack_e8 = FUN_14001cc68(0xf0,0x10);
              uStack_78 = DAT_14c948618;
              uStack_70 = DAT_14c948620;
              uStack_88 = uStack_88 & 0xffffff00;
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              FUN_144976b9c(&uStack_88,DAT_14cb858b8);
              puStack_a8 = (undefined8 *)0x0;
              uStack_a0 = 0;
              lStack_98 = 0;
              uVar8 = FUN_14653326e();
              uStack_a0 = FUN_14477b664(uVar8);
              uStack_d8 = FUN_14653326e();
              uVar8 = FUN_14653326e();
              FUN_1402d1bfa(&puStack_68,uVar8,lVar9);
              if (puStack_a8 != puStack_68) {
                lStack_98 = 0;
              }
              puStack_a8 = puStack_68;
              uVar8 = FUN_14653326e();
              lVar7 = FUN_141459e9e(uStack_d8,uVar8);
              if (uStack_a0 != lVar7) {
                lStack_98 = 0;
              }
              uVar8 = FUN_14477b664(lVar7);
              uStack_a0 = FUN_14477b664(uVar8);
              if ((uStack_a0 != 0) && (puStack_a8 != (undefined8 *)0x0)) {
                lStack_98 = lVar9;
              }
              puStack_f8 = &uStack_88;
              puStack_f0 = &uStack_78;
              FUN_1488e9bea(uStack_e8,param_1,&puStack_a8);
              iVar2 = (int)param_1[9];
              *(uint *)(param_1 + 9) = iVar2 + 1U;
              if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
                FUN_1488f0730(plStack_e0,iVar2);
              }
              *(undefined8 *)(*plStack_e0 + (longlong)iVar2 * 8) = uStack_e8;
            }
          }
LAB_145756f4d:
          bVar1 = 1 < (longlong)uVar13;
          uVar13 = uVar12;
        } while (bVar1);
      }
      if (0 < (longlong)(int)param_1[9]) {
        uVar13 = (longlong)(int)param_1[9];
        do {
          lVar6 = *(longlong *)(param_1[8] + -8 + uVar13 * 8);
          if ((longlong)(int)uStack_b0 != 0) {
            lVar9 = 0;
            do {
              if (*(longlong *)(lStack_b8 + lVar9) == *(longlong *)(lVar6 + 0x10))
              goto LAB_145756f9d;
              lVar9 = lVar9 + 8;
            } while ((longlong)(int)uStack_b0 * 8 != lVar9);
          }
          uStack_c8 = *(undefined4 *)(lVar6 + 0x20);
          uStack_d0 = *(undefined8 *)(lVar6 + 0x18);
          (**(code **)(*plVar5 + 0x38))(plVar5,&uStack_d0);
          FUN_1488ea49a(param_1 + 8,uVar13 - 1 & 0xffffffff);
LAB_145756f9d:
          bVar1 = 1 < (longlong)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
      }
    }
    puStack_a8 = (undefined8 *)0x0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    FUN_1446efa72(&puStack_a8,0,3,0x10);
    puVar3 = puStack_a8;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
    *puStack_a8 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puStack_a8[2] = lVar9;
    *puStack_a8 = &PTR_FUN_14b417060;
    puStack_a8[3] = 0;
    FUN_14485c47a(puStack_a8 + 3,param_1);
    puVar3[4] = FUN_1488ea4f8;
    (**(code **)(*plVar5 + 0x48))(plVar5,&puStack_a8);
    FUN_1449db362(&puStack_a8);
    if (lStack_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145756a82 FUN_145756a82 body=366 status=ok
// SIG undefined FUN_145756a82(void)

void FUN_145756a82(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong *)param_1[5] == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[5] + 0x490))();
  }
  *(undefined1 *)((longlong)param_1 + 0xd1) = uVar2;
  if (param_2 == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = FUN_14490d72a(param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = FUN_144a78654(DAT_14cb0d2b0,param_2);
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x230) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x230) + 0x30) != 0)) {
      uVar3 = FUN_144a43e8c();
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
    }
  }
  *(bool *)((longlong)param_1 + 0x49) = *(int *)((longlong)param_1 + 0x4c) < 3;
  if (*(char *)((longlong)param_1 + 0xd1) == '\x01') {
    FUN_14020fad6(param_1 + 0x1c,&DAT_149dfb77a);
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
  }
  else {
    if (param_2 == 0) {
      FUN_140056680(&local_28,&DAT_149dfb77a);
    }
    else {
      FUN_1410908dc(param_2,&local_28,0);
    }
    iVar1 = local_20 + -1;
    if (local_20 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0x1c,local_28,iVar1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x370))(param_1,param_1 + 0x1c,param_1 + 0x1e);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145756bf1 FUN_145756bf1 body=177 status=ok
// SIG undefined FUN_145756bf1(void)

undefined8 FUN_145756bf1(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459878bc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145756ca4 FUN_145756ca4 body=1236 status=ok
// SIG undefined FUN_145756ca4(void)

void FUN_145756ca4(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [32];
  uint *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [12];
  longlong local_b8;
  ulonglong uStack_b0;
  undefined8 *local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)FUN_145b08b9a();
  if (plVar5 != (longlong *)0x0) {
    local_b8 = 0;
    uStack_b0 = 0;
    if (DAT_14cb85a38 != 0) {
      FUN_145757204(&local_b8);
    }
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    local_88 = (uint)*(undefined8 *)(lVar6 + 0x18);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
    FUN_1400021e4(&local_88,&local_a8);
    iVar2 = (int)uStack_a0 + -1;
    if ((int)uStack_a0 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_88,iVar2,local_a8);
    local_78 = CONCAT44(uStack_84,local_88);
    lVar6 = FUN_14575717a(&local_78);
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar6 != 0) {
      lVar6 = FUN_14575718a(lVar6);
      if (0 < (longlong)(int)uStack_b0) {
        local_e0 = param_1 + 8;
        uVar13 = (longlong)(int)uStack_b0;
        do {
          uVar12 = uVar13 - 1;
          if ((lVar6 != 0) &&
             (lVar9 = *(longlong *)(local_b8 + -8 + uVar13 * 8), *(char *)(lVar9 + 0x68) == '\0')) {
            cVar4 = FUN_140d1d704(lVar6,lVar9 + 0x18,*(undefined1 *)(lVar9 + 0x38));
            if (cVar4 == '\0') {
              if (uVar13 != (uStack_b0 & 0xffffffff)) {
                memmove((void *)(local_b8 + uVar12 * 8),(void *)(local_b8 + uVar12 * 8 + 8),
                        (longlong)((int)uStack_b0 - (int)uVar13) << 3);
              }
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + -1);
              FUN_1488f0694(&local_b8);
            }
            else {
              puVar10 = *(undefined4 **)(*(longlong *)(local_b8 + uVar12 * 8) + 8);
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = &DAT_14c9485f0;
              }
              FUN_144a7660c(puVar10,local_c4,1);
              lVar9 = *(longlong *)(local_b8 + uVar12 * 8);
              if ((longlong)(int)param_1[9] != 0) {
                plVar11 = (longlong *)param_1[8];
                lVar7 = (longlong)(int)param_1[9] << 3;
                do {
                  if (*(longlong *)(*plVar11 + 0x10) == lVar9) {
                    if (plVar11 != (longlong *)0x0) goto LAB_145756f4d;
                    break;
                  }
                  plVar11 = plVar11 + 1;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
              local_e8 = FUN_14001cc68(0xf0,0x10);
              local_78 = DAT_14c948618;
              local_70 = DAT_14c948620;
              local_88 = local_88 & 0xffffff00;
              uStack_84 = 0;
              uStack_80 = 0;
              local_7c = 0;
              FUN_144976b9c(&local_88,DAT_14cb858b8);
              local_a8 = (undefined8 *)0x0;
              uStack_a0 = 0;
              local_98 = 0;
              uVar8 = FUN_14653326e();
              uStack_a0 = FUN_14477b664(uVar8);
              local_d8 = FUN_14653326e();
              uVar8 = FUN_14653326e();
              FUN_1402d1bfa(&local_68,uVar8,lVar9);
              if (local_a8 != local_68) {
                local_98 = 0;
              }
              local_a8 = local_68;
              uVar8 = FUN_14653326e();
              lVar7 = FUN_141459e9e(local_d8,uVar8);
              if (uStack_a0 != lVar7) {
                local_98 = 0;
              }
              uVar8 = FUN_14477b664(lVar7);
              uStack_a0 = FUN_14477b664(uVar8);
              if ((uStack_a0 != 0) && (local_a8 != (undefined8 *)0x0)) {
                local_98 = lVar9;
              }
              local_f8 = &local_88;
              local_f0 = &local_78;
              FUN_1488e9bea(local_e8,param_1,&local_a8);
              iVar2 = (int)param_1[9];
              *(uint *)(param_1 + 9) = iVar2 + 1U;
              if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
                FUN_1488f0730(local_e0,iVar2);
              }
              *(undefined8 *)(*local_e0 + (longlong)iVar2 * 8) = local_e8;
            }
          }
LAB_145756f4d:
          bVar1 = 1 < (longlong)uVar13;
          uVar13 = uVar12;
        } while (bVar1);
      }
      if (0 < (longlong)(int)param_1[9]) {
        uVar13 = (longlong)(int)param_1[9];
        do {
          lVar6 = *(longlong *)(param_1[8] + -8 + uVar13 * 8);
          if ((longlong)(int)uStack_b0 != 0) {
            lVar9 = 0;
            do {
              if (*(longlong *)(local_b8 + lVar9) == *(longlong *)(lVar6 + 0x10))
              goto LAB_145756f9d;
              lVar9 = lVar9 + 8;
            } while ((longlong)(int)uStack_b0 * 8 != lVar9);
          }
          local_c8 = *(undefined4 *)(lVar6 + 0x20);
          local_d0 = *(undefined8 *)(lVar6 + 0x18);
          (**(code **)(*plVar5 + 0x38))(plVar5,&local_d0);
          FUN_1488ea49a(param_1 + 8,uVar13 - 1 & 0xffffffff);
LAB_145756f9d:
          bVar1 = 1 < (longlong)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar1);
      }
    }
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar3 = local_a8;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
    *local_a8 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_a8[2] = lVar9;
    *local_a8 = &PTR_FUN_14b417060;
    local_a8[3] = 0;
    FUN_14485c47a(local_a8 + 3,param_1);
    puVar3[4] = FUN_1488ea4f8;
    (**(code **)(*plVar5 + 0x48))(plVar5,&local_a8);
    FUN_1449db362(&local_a8);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14575717a FUN_14575717a body=15 status=ok
// SIG undefined FUN_14575717a(void)

void FUN_14575717a(undefined8 param_1)

{
  FUN_14090279a(DAT_14cb84f20,param_1);
  return;
}



// FUNCTION 14575718a FUN_14575718a body=121 status=ok
// SIG undefined FUN_14575718a(void)

longlong FUN_14575718a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b5f98e(param_1 + 0x58,&local_28);
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
  lVar3 = local_28 + 8;
  if (local_28 == 0) {
    lVar3 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145757204 FUN_145757204 body=346 status=ok
// SIG undefined FUN_145757204(void)

void FUN_145757204(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  lVar3 = DAT_14cb85a38;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb85a38 != 0) {
    plVar1 = (longlong *)(DAT_14cb85a38 + 0x2e8);
    lVar2 = DAT_14cb85a38 + 0x2f8;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar6 = 0;
    local_58 = lVar2;
    if (*(int *)(DAT_14cb85a38 + 0x310) != 0) {
      FUN_1449c0562(&local_60);
      iVar6 = *(int *)(lVar3 + 0x310);
    }
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar6) || (local_70 = uVar4, local_58 != lVar2)) {
      do {
        local_70 = uVar4;
        lVar3 = *(longlong *)(*local_88 + 0x10 + (longlong)iVar5 * 0x20);
        if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
          iVar5 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
            FUN_1488f1986(param_1,iVar5);
          }
          *(longlong *)(*param_1 + (longlong)iVar5 * 8) = lVar3;
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (((local_70._4_4_ != iVar6) || (local_78 != lVar2)) || (local_88 != plVar1));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145757360 FUN_145757360 body=449 status=ok
// SIG undefined FUN_145757360(void)

void FUN_145757360(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14485c47a(param_1 + 7);
  cVar3 = FUN_1408fd700(param_1);
  if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar4 != 0) && (param_1[10] == 0)) {
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,3,0x10);
    puVar5 = local_a0;
    local_98 = 3;
    *local_a0 = &PTR_LAB_14a1c8830;
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
    local_a0[2] = lVar6;
    *local_a0 = &PTR_FUN_14b416ff0;
    local_a0[3] = 0;
    FUN_14485c47a(local_a0 + 3,param_1);
    puVar5[4] = FUN_1408fd6d4;
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar5;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 1;
    local_8c = 0;
    FUN_1406f4044(uVar1,param_1 + 10,&local_88,0x3f000000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_a0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145757538 FUN_145757538 body=36 status=ok
// SIG undefined FUN_145757538(void)

undefined8 FUN_145757538(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x1e8) + (longlong)(int)param_2[1] * 8),
     lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 14575755c FUN_14575755c body=162 status=ok
// SIG undefined FUN_14575755c(void)

longlong FUN_14575755c(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      while (puVar1 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18), *puVar1 != param_2) {
        iVar4 = (int)puVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        return 0;
      }
      if (puVar1 + 1 == (ulonglong *)0x0) {
        return 0;
      }
      return (longlong)(int)puVar1[1] * 0x1a0 + param_1[10];
    }
  }
  return 0;
}



// FUNCTION 1457575fe FUN_1457575fe body=89 status=ok
// SIG undefined FUN_1457575fe(void)

void FUN_1457575fe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 145757658 FUN_145757658 body=107 status=ok
// SIG undefined FUN_145757658(void)

void FUN_145757658(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14091d212(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1457576c4 FUN_1457576c4 body=232 status=ok
// SIG undefined FUN_1457576c4(void)

longlong * FUN_1457576c4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14632634a;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1457577b2 FUN_1457577b2 body=44 status=ok
// SIG undefined FUN_1457577b2(void)

void FUN_1457577b2(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1409f759a();
  FUN_1409f75d4(param_2,&DAT_14cbc8e58,uVar2,uVar1);
  return;
}



// FUNCTION 1457577de FUN_1457577de body=147 status=ok
// SIG undefined FUN_1457577de(void)

void FUN_1457577de(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145757872 FUN_145757872 body=192 status=ok
// SIG undefined FUN_145757872(void)

undefined4 FUN_145757872(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c88a82(&local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1457579ba(local_30,param_2,param_3);
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
      goto LAB_1457578e5;
    }
  }
  uVar5 = 0;
LAB_1457578e5:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 145757934 FUN_145757934 body=132 status=ok
// SIG undefined FUN_145757934(void)

void FUN_145757934(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457579ba FUN_1457579ba body=288 status=ok
// SIG undefined FUN_1457579ba(void)

bool FUN_1457579ba(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114))) {
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    uVar8 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    lVar5 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x120);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             ((uVar6 >> 4) +
                              (int)((ulonglong)lVar4 >> 0x20) + (uint)lVar4 * 0x10000 + uVar6 +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 2) + uVar8 * 0x40 +
                              0x9e3779b9 ^ uVar8)) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0xe0);
      while( true ) {
        lVar3 = (longlong)iVar7 * 0x40;
        lVar1 = lVar5 + lVar3;
        if ((*(ulonglong *)(lVar5 + lVar3) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar3) == lVar4)) break;
        iVar7 = *(int *)(lVar1 + 0x38);
        if (iVar7 == -1) {
          return false;
        }
      }
      if (lVar1 != -0x10 && lVar1 != 0) {
        lVar4 = FUN_140963a30();
        return lVar4 != 0;
      }
    }
  }
  return false;
}



// FUNCTION 145757ada FUN_145757ada body=260 status=ok
// SIG undefined FUN_145757ada(void)

void FUN_145757ada(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar5 = (longlong)*(int *)(param_1 + 0x18) << 3;
      do {
        cVar2 = FUN_140f9880e(lVar4,param_2);
        if (cVar2 != '\0') goto LAB_145757bd3;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    plVar3 = (longlong *)FUN_145757c60(param_1);
    if ((longlong)(int)plVar3[1] < 1) {
LAB_145757b40:
      local_30 = 0;
      FUN_14485c47a(&local_30,param_2);
      iVar1 = *(int *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
        FUN_1410872ba(param_1 + 0x10,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = local_30;
      FUN_145757bf4(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    lVar4 = 0;
    do {
      if (*(longlong *)(*plVar3 + lVar4) == *(longlong *)(param_2 + 0x18)) goto LAB_145757b40;
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)plVar3[1] * 8 != lVar4);
  }
LAB_145757bd3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145757bf4 FUN_145757bf4 body=107 status=ok
// SIG undefined FUN_145757bf4(void)

undefined8 FUN_145757bf4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,local_40);
    uVar2 = FUN_1402d20ea(local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145757c60 FUN_145757c60 body=134 status=ok
// SIG undefined FUN_145757c60(void)

undefined8 * FUN_145757c60(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
     (puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(),
     puVar1 != (undefined8 *)0x0)) {
    return puVar1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbc1ae0) && (FUN_144b3d300(&DAT_14cbc1ae0), DAT_14cbc1ae0 == -1)) {
    DAT_14cbc1ad0 = 0;
    uRam000000014cbc1ad8 = 0;
    atexit((_func_5014 *)&LAB_1440a9d9f);
    _Init_thread_footer(&DAT_14cbc1ae0);
  }
  return &DAT_14cbc1ad0;
}



// FUNCTION 145757ce6 FUN_145757ce6 body=157 status=ok
// SIG undefined FUN_145757ce6(void)

undefined8 * FUN_145757ce6(undefined8 *param_1)

{
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 145757d84 FUN_145757d84 body=184 status=ok
// SIG undefined FUN_145757d84(void)

void FUN_145757d84(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146e12118(0,&local_38,param_2);
  if ((longlong)local_30 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(local_38 + lVar2);
      if (((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) &&
         (*(char *)(*(longlong *)(*plVar1 + 0x2c0) + 0xb + (longlong)(int)plVar1[1] * 0x10) ==
          '\x04')) {
        FUN_1400d2fee(param_1,plVar1,1);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)local_30 * 8 != lVar2);
  }
  if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145757e4e FUN_145757e4e body=105 status=ok
// SIG undefined FUN_145757e4e(void)

void FUN_145757e4e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  
  lVar2 = FUN_14091baa4();
  ppuVar3 = &PTR_PTR_14c75ef90;
  if (*(undefined ***)(lVar2 + 8) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(lVar2 + 8);
  }
  fVar5 = (float)(**(code **)(*ppuVar3 + 0x60))();
  dVar6 = (double)(fVar5 * 0.001) / *(double *)(param_1 + 0x228);
  iVar1 = -((int)ROUND(-0.5 - (dVar6 + dVar6)) >> 1);
  iVar4 = 1;
  if (1 < iVar1) {
    iVar4 = iVar1;
  }
  FUN_140920ed6(param_1,iVar4);
  return;
}



// FUNCTION 145757eb8 FUN_145757eb8 body=822 status=ok
// SIG undefined FUN_145757eb8(void)

void FUN_145757eb8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    lVar2 = FUN_140175a60();
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149f45900;
    uVar3 = FUN_144a3f946();
    puVar1[2] = uVar3;
    *puVar1 = &PTR_FUN_149f45890;
    puVar1[3] = param_1;
    puVar1[4] = FUN_1410e941a;
    FUN_1457581f0(lVar2 + 0x18,&local_50,&local_60);
    *(undefined8 *)(param_1 + 0xd8) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149f45900;
    uVar3 = FUN_144a3f946();
    puVar1[2] = uVar3;
    *puVar1 = &PTR_FUN_149f45890;
    puVar1[3] = param_1;
    puVar1[4] = FUN_1410e930e;
    FUN_1457581f0(lVar2 + 0x30,&local_50,&local_60);
    *(undefined8 *)(param_1 + 0xe0) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149f45900;
    uVar3 = FUN_144a3f946();
    puVar1[2] = uVar3;
    *puVar1 = &PTR_FUN_149f45890;
    puVar1[3] = param_1;
    puVar1[4] = FUN_1410e9198;
    FUN_1457581f0(lVar2,&local_50,&local_60);
    *(undefined8 *)(param_1 + 0xe8) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149f459e0;
    uVar3 = FUN_144a3f946();
    puVar1[2] = uVar3;
    *puVar1 = &PTR_FUN_149f45970;
    puVar1[3] = param_1;
    puVar1[4] = FUN_146c969d8;
    FUN_1457582da(lVar2 + 0x60,&local_50,&local_60);
    *(undefined8 *)(param_1 + 0xf0) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149f459e0;
    uVar3 = FUN_144a3f946();
    puVar1[2] = uVar3;
    *puVar1 = &PTR_FUN_149f45970;
    puVar1[3] = param_1;
    puVar1[4] = FUN_146c96bf4;
    FUN_1457582da(lVar2 + 0x78,&local_50,&local_60);
    *(undefined8 *)(param_1 + 0xf8) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149f459e0;
    uVar3 = FUN_144a3f946();
    puVar1[2] = uVar3;
    *puVar1 = &PTR_FUN_149f45970;
    puVar1[3] = param_1;
    puVar1[4] = FUN_146c96d02;
    FUN_1457582da(lVar2 + 0x48,&local_50,&local_60);
    *(undefined8 *)(param_1 + 0x100) = local_50;
    FUN_1449db362(&local_60);
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457581f0 FUN_1457581f0 body=216 status=ok
// SIG undefined FUN_1457581f0(void)

undefined8 * FUN_1457581f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457582da FUN_1457582da body=216 status=ok
// SIG undefined FUN_1457582da(void)

undefined8 * FUN_1457582da(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457583c4 FUN_1457583c4 body=492 status=ok
// SIG undefined FUN_1457583c4(void)

void FUN_1457583c4(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x150;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x144 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x140 + lVar6) =
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



// FUNCTION 1457585b1 FUN_1457585b1 body=30 status=ok
// SIG undefined FUN_1457585b1(void)

void FUN_1457585b1(longlong param_1)

{
  FUN_14092322a(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1457585d0 FUN_1457585d0 body=38 status=ok
// SIG undefined FUN_1457585d0(void)

undefined8 FUN_1457585d0(undefined8 param_1,int param_2)

{
  FUN_1457585f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457585f6 FUN_1457585f6 body=255 status=ok
// SIG undefined FUN_1457585f6(void)

void FUN_1457585f6(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149e27978;
  FUN_140056680(local_28,&DAT_149dfb77a);
  FUN_140d6d8de(param_1,1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x785] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x783],*(undefined4 *)(param_1 + 0x784));
  if (param_1[0x783] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x782) = 0;
  if (param_1[0x781] != 0) {
    FUN_1400020a8();
  }
  FUN_14575873c(param_1 + 0x779);
  lVar1 = 0x35d0;
  do {
    FUN_140925f20((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x5f8;
  } while (lVar1 != -0x5e0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457586f6 FUN_1457586f6 body=70 status=ok
// SIG undefined FUN_1457586f6(void)

void FUN_1457586f6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14575873c FUN_14575873c body=53 status=ok
// SIG undefined FUN_14575873c(void)

void FUN_14575873c(longlong *param_1)

{
  FUN_141586c1c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145758774 FUN_145758774 body=141 status=ok
// SIG undefined FUN_145758774(void)

longlong FUN_145758774(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar4 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar4 != (longlong *)0x0 && plVar2 != plVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001457587fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
        return lVar3;
      }
    }
    lVar3 = FUN_140929c72();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      return param_1[0x82];
    }
  }
  return 0;
}



// FUNCTION 145758802 FUN_145758802 body=145 status=ok
// SIG undefined FUN_145758802(void)

void FUN_145758802(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xbc8);
  if (lVar1 != param_2) {
    FUN_14282b7b8(param_1);
    lVar1 = *(longlong *)(param_1 + 0xbc8);
  }
  if (lVar1 != 0) {
    FUN_147e23212(lVar1,param_1);
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0xbc8) = param_2;
    if (param_2 == 0) goto LAB_145758839;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0xbc8) = param_2;
  }
  FUN_147e23058(param_2,param_1);
LAB_145758839:
  if (*(char *)(param_1 + 0x947) == '\0') {
    *(char *)(param_1 + 0x946) = (*(longlong *)(param_1 + 0xbc8) != 0) * '\x02';
  }
  return;
}



// FUNCTION 145758894 FUN_145758894 body=253 status=ok
// SIG undefined FUN_145758894(void)

void FUN_145758894(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_218 [40];
  undefined1 local_1f0 [448];
  undefined1 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  puVar3 = *(undefined1 **)(param_1 + 0x300);
  if (puVar3 == (undefined1 *)0x0) {
    memcpy(local_1f0,(void *)(param_1 + 0x140),0x1c0);
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  local_28 = *(int *)(param_1 + 0x308);
  lVar2 = (longlong)local_28;
  local_24 = *(undefined4 *)(param_1 + 0x30c);
  *(undefined8 *)(param_1 + 0x308) = 0x800000000;
  local_30 = puVar3;
  FUN_140514d2a(param_1);
  if (lVar2 != 0) {
    puVar4 = local_1f0;
    if (puVar3 != (undefined1 *)0x0) {
      puVar4 = puVar3;
    }
    lVar2 = lVar2 * 0x38;
    do {
      lVar1 = FUN_14479d2ce(puVar4);
      if (lVar1 != 0) {
        FUN_140aeefbc(lVar1,0,1);
      }
      puVar4 = puVar4 + 0x38;
      lVar2 = lVar2 + -0x38;
      puVar3 = local_30;
    } while (lVar2 != 0);
  }
  if (puVar3 != (undefined1 *)0x0) {
    FUN_1400020a8(puVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145758992 FUN_145758992 body=274 status=ok
// SIG undefined FUN_145758992(void)

undefined8
FUN_145758992(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,uint param_5
             )

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_14092d3c4();
  FUN_145758aa4(param_1,param_2);
  plVar3 = (longlong *)
           FUN_145758b06(param_2,DAT_14cbca598,*(uint *)(param_2 + 8) & 0x61 | 0x800000,0,
                         param_5 & 0xffffff00,0);
  *(byte *)((longlong)plVar3 + 0xb9) = (byte)~(byte)*(undefined4 *)(param_2 + 8) >> 4 & 2;
  *(undefined1 *)(plVar3 + 0x21) = 1;
  FUN_1409300b2(param_1,plVar3);
  if ((*(byte *)((longlong)plVar3 + 0x9f) & 4) == 0) {
    (**(code **)(*plVar3 + 0x428))(plVar3);
  }
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  iVar1 = *(int *)(param_2 + 0x2a8);
  *(uint *)(param_2 + 0x2a8) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x2ac) < iVar1 + 1U) {
    FUN_14092ecf6((longlong *)(param_2 + 0x2a0),iVar1);
  }
  *(longlong **)(*(longlong *)(param_2 + 0x2a0) + (longlong)iVar1 * 8) = plVar3;
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  return uVar2;
}



// FUNCTION 145758aa4 FUN_145758aa4 body=98 status=ok
// SIG undefined FUN_145758aa4(void)

void FUN_145758aa4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x3f8 + (ulonglong)((*(byte *)(param_1 + 0x89) & 2) >> 1) * 8) == 0) {
    lVar1 = FUN_1457b68d8(param_2);
    if (((param_2 != 0) && (lVar1 != 0)) && ((*(uint *)(param_2 + 8) & 0x40000000) == 0)) {
      FUN_140f26c7f();
      FUN_1407692f0(&DAT_14cb710d0,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 145758b06 FUN_145758b06 body=257 status=ok
// SIG undefined FUN_145758b06(void)

undefined8
FUN_145758b06(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
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
  local_d8 = FUN_144a78c84();
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



// FUNCTION 145758c08 FUN_145758c08 body=180 status=ok
// SIG undefined FUN_145758c08(void)

void FUN_145758c08(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar3 = FUN_144a800f8();
    lVar4 = FUN_144718840(param_2,uVar3);
    if (lVar4 != 0) {
      FUN_1402f20d0(param_1 + 0xda8,&local_38);
      if (local_38 != 0) {
        FUN_145758cbe(local_38,param_1 + 0xda8,lVar4,param_3);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145758cbe FUN_145758cbe body=780 status=ok
// SIG undefined FUN_145758cbe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145758cbe(longlong param_1,longlong *param_2,ulonglong param_3,uint param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  undefined1 auStack_1298 [40];
  longlong *local_1270;
  undefined1 local_1268;
  ulonglong local_960;
  undefined4 local_958;
  undefined1 local_954;
  undefined1 local_950 [16];
  char local_940 [1120];
  char local_4e0 [1176];
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1298;
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) &&
     (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4))) {
    uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar3 >> 0x10 ^ uVar3))
                             * 4);
    if (iVar6 != -1) {
      lVar4 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1b88);
      }
      do {
        plVar8 = (longlong *)(lVar4 + (longlong)iVar6 * 0x18);
        if ((longlong *)*plVar8 == param_2) {
          if (((plVar8 != (longlong *)0x0) && (plVar8 = plVar8 + 1, plVar8 != (longlong *)0x0)) &&
             ((*plVar8 != 0 && (*(int *)(&DAT_00001868 + param_1) != *(int *)(param_1 + 0x18a4)))))
          {
            uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            lVar4 = param_1 + 0x18a8;
            if (*(longlong *)(param_1 + 0x1aa8) != 0) {
              lVar4 = *(longlong *)(param_1 + 0x1aa8);
            }
            iVar6 = *(int *)(lVar4 + (ulonglong)
                                     (*(int *)(param_1 + 0x1ab0) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4
                            );
            if (iVar6 != -1) {
              lVar4 = param_1 + 0x60;
              if (*(longlong *)(&DAT_00001860 + param_1) != 0) {
                lVar4 = *(longlong *)(&DAT_00001860 + param_1);
              }
              goto LAB_145758e37;
            }
          }
          break;
        }
        iVar6 = (int)plVar8[2];
      } while (iVar6 != -1);
    }
  }
  goto LAB_145758f40;
  while (iVar6 = (int)puVar7[2], iVar6 != -1) {
LAB_145758e37:
    puVar7 = (ulonglong *)(lVar4 + (longlong)iVar6 * 0x18);
    if (*puVar7 == param_3) {
      if ((puVar7 != (ulonglong *)0x0) && (puVar7 = puVar7 + 1, puVar7 != (ulonglong *)0x0)) {
        cVar2 = (**(code **)(*param_2 + 0x20))(param_2);
        if (cVar2 == '\0') {
          FUN_144a44f9a(local_950,param_3);
          local_4e0[0x18] = '\0';
          local_48 = '\0';
          local_1268 = 0;
          local_1270 = param_2;
          FUN_140931e3c(param_3,&local_1270,local_950);
          if ((char)param_4 == '\0') {
            if (local_4e0[0x18] != '\0') {
LAB_145758ebe:
              pcVar5 = local_940;
LAB_145758ec6:
              if ((pcVar5 != (char *)0x0) && (pcVar5[0x460] == '\x03')) {
                uVar1 = *puVar7;
                FUN_14023c3a2(&local_1270,local_950);
                local_958 = 0;
                local_954 = 0;
                local_960 = uVar1;
                FUN_1458ddc42(*plVar8,&local_1270,param_4,1);
                FUN_14023c33c(&local_1270);
                FUN_14023c33c(local_950);
                goto LAB_145758f31;
              }
            }
          }
          else if ((param_4 & 0xff) == 1) {
            if (local_48 != '\0') {
LAB_145758f8f:
              pcVar5 = local_4e0 + 0x20;
              goto LAB_145758ec6;
            }
          }
          else if ((param_4 & 0xff) == 2) {
            if (local_4e0[0x18] != '\0') goto LAB_145758ebe;
            if (local_48 == '\x01') goto LAB_145758f8f;
          }
          FUN_14023c33c(local_950);
        }
        else {
LAB_145758f31:
          FUN_145758fcc(*puVar7,param_2,param_4);
        }
      }
      break;
    }
  }
LAB_145758f40:
  if ((local_40 ^ (ulonglong)auStack_1298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145758fcc FUN_145758fcc body=481 status=ok
// SIG undefined FUN_145758fcc(void)

void FUN_145758fcc(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auStack_988 [32];
  undefined8 local_968;
  uint uStack_960;
  undefined4 uStack_95c;
  undefined1 local_958 [16];
  char local_948 [1120];
  char local_4e8 [1176];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_988;
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_1457590f8;
  lVar4 = 200;
  if ((char)param_3 != '\0') {
    if ((param_3 & 0xff) != 1) goto LAB_1457590f8;
    lVar4 = 0xe0;
  }
  plVar5 = (longlong *)(lVar4 + param_1);
  if (plVar5 == (longlong *)0x0) goto LAB_1457590f8;
  FUN_144a44f9a(local_958);
  local_4e8[0x18] = '\0';
  local_50 = '\0';
  uStack_960 = uStack_960 & 0xffffff00;
  local_968 = param_2;
  FUN_140931e3c(*(undefined8 *)(param_1 + 0x10),&local_968,local_958);
  if ((char)param_3 == '\0') {
    if (local_4e8[0x18] != '\0') {
      pcVar6 = local_948;
LAB_14575906e:
      if ((pcVar6 != (char *)0x0) && (pcVar6[0x460] == '\x03')) {
        lVar4 = plVar5[2];
        if ((longlong)(int)lVar4 != 0) {
          lVar3 = plVar5[1];
          lVar7 = 0;
          do {
            FUN_1401036f0(&local_968,param_2);
            if (*(longlong *)(lVar3 + 8 + lVar7) == CONCAT44(uStack_95c,uStack_960))
            goto LAB_1457590ee;
            lVar7 = lVar7 + 0x10;
          } while ((longlong)(int)lVar4 * 0x10 != lVar7);
        }
        FUN_1401036f0(&local_968,param_2);
        iVar2 = (int)plVar5[2];
        *(uint *)(plVar5 + 2) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar5 + 0x14) < iVar2 + 1U) {
          FUN_1457591ae(plVar5 + 1,iVar2);
        }
        puVar1 = (undefined4 *)(plVar5[1] + (longlong)iVar2 * 0x10);
        *puVar1 = (undefined4)local_968;
        puVar1[1] = local_968._4_4_;
        puVar1[2] = uStack_960;
        puVar1[3] = uStack_95c;
        lVar4 = *(longlong *)(pcVar6 + 0x468);
        if ((lVar4 != 0) && ((*plVar5 == 0 || (*plVar5 == lVar4)))) {
          *plVar5 = lVar4;
          FUN_1489ae990(param_1,lVar4,1);
        }
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                  (*(longlong **)(param_1 + 0x10),param_2,param_3);
      }
    }
  }
  else if (local_50 == '\x01') {
    pcVar6 = local_4e8 + 0x20;
    goto LAB_14575906e;
  }
LAB_1457590ee:
  FUN_14023c33c(local_958);
LAB_1457590f8:
  if ((local_48 ^ (ulonglong)auStack_988) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457591ae FUN_1457591ae body=132 status=ok
// SIG undefined FUN_1457591ae(void)

void FUN_1457591ae(longlong param_1,int param_2)

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



// FUNCTION 145759232 FUN_145759232 body=570 status=ok
// SIG undefined FUN_145759232(void)

longlong FUN_145759232(longlong param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = L"True";
  local_50 = 4;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Core";
  local_50 = 4;
  FUN_1446e940c(local_60,&local_58);
  FUN_140208bae(param_1,local_60,local_5c,&DAT_149e0617a);
  local_58 = L"False";
  local_50 = 5;
  local_68 = param_1 + 0x10;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Core";
  local_50 = 4;
  FUN_1446e940c(local_60,&local_58);
  FUN_140208bae(param_1 + 0x10,local_60,local_5c,L"False");
  local_58 = L"Yes";
  local_50 = 3;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Core";
  local_50 = 4;
  FUN_1446e940c(local_60,&local_58);
  FUN_140208bae(param_1 + 0x20,local_60,local_5c,&DAT_149e06384);
  local_58 = L"No";
  local_50 = 2;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Core";
  local_50 = 4;
  FUN_1446e940c(local_60,&local_58);
  FUN_140208bae(param_1 + 0x30,local_60,local_5c,&DAT_149e06338);
  local_58 = L"None";
  local_50 = 4;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"Core";
  local_50 = 4;
  FUN_1446e940c(local_60,&local_58);
  FUN_140208bae(param_1 + 0x40,local_60,local_5c,&DAT_149e01fe8);
  *(longlong *)(param_1 + 0x50) = param_1;
  *(longlong *)(param_1 + 0x58) = local_68;
  *(longlong *)(param_1 + 0x60) = param_1 + 0x20;
  *(longlong *)(param_1 + 0x68) = param_1 + 0x30;
  *(longlong *)(param_1 + 0x70) = param_1 + 0x40;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575946e FUN_14575946e body=338 status=ok
// SIG undefined FUN_14575946e(void)

void FUN_14575946e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_1457595c2();
  if (lVar4 == 0) {
    plVar6 = *(longlong **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 8);
    plVar2 = *(longlong **)(lVar4 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined8 *)(param_1 + 0x220) = uVar5;
    plVar6 = *(longlong **)(param_1 + 0x228);
    *(longlong **)(param_1 + 0x228) = plVar2;
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
  *(undefined1 *)(param_1 + 0x230) = 0;
  uVar5 = FUN_14479d2ce(param_1 + 0x48);
  lVar4 = FUN_14598d578(uVar5);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) != 0)) {
    cVar3 = FUN_144729dda(lVar4 + 0x10);
    if (cVar3 != '\0') {
      uVar5 = FUN_14045cd5e(param_1);
      FUN_140851e80(local_70,uVar5);
      FUN_14078a636(lVar4,local_70);
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
      *(undefined1 *)(param_1 + 0x230) = 1;
    }
  }
  FUN_140936066(param_1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457595c2 FUN_1457595c2 body=93 status=ok
// SIG undefined FUN_1457595c2(void)

longlong FUN_1457595c2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 0x48);
    lVar2 = FUN_140937900(uVar1);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar3 + 0x230) != 0) {
        lVar2 = FUN_14886d182(lVar2,lVar3 + 0x228);
      }
      goto LAB_1457595f4;
    }
  }
  lVar2 = 0;
LAB_1457595f4:
  lVar3 = 0;
  if (lVar2 != param_1) {
    lVar3 = lVar2;
  }
  return lVar3;
}



// FUNCTION 145759620 FUN_145759620 body=1 status=ok
// SIG undefined FUN_145759620(void)

void FUN_145759620(void)

{
  return;
}



// FUNCTION 145759622 FUN_145759622 body=139 status=ok
// SIG undefined FUN_145759622(void)

void FUN_145759622(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (param_2 == (longlong *)0x0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
  }
  lVar1 = param_2[0x22];
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 1000))(param_2);
    lVar1 = param_2[0x22];
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(char *)(lVar1 + 0x40) == '\0') {
    if ((ulonglong *)(lVar1 + 0x38) != (ulonglong *)&DAT_14c763a58) {
      *(longlong *)(lVar1 + 0x38) = DAT_14c763a58;
      *(undefined1 *)(lVar1 + 0x40) = 1;
    }
    DAT_14c763a58 = DAT_14c763a58 * 2;
  }
  *param_1 = *param_1 | *(ulonglong *)(lVar1 + 0x38);
  return;
}



// FUNCTION 1457596ad FUN_1457596ad body=62 status=ok
// SIG undefined FUN_1457596ad(void)

void FUN_1457596ad(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = 0;
      *(undefined8 *)(param_1 + 8 + lVar1) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = *(undefined8 *)(param_2 + 0x10 + lVar1);
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457596ec FUN_1457596ec body=169 status=ok
// SIG undefined FUN_1457596ec(void)

void FUN_1457596ec(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
    goto LAB_145759718;
  }
  uVar2 = 0x10;
  if (param_2 < 0x11) {
LAB_145759707:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 0x11) && (*(longlong *)(param_1 + 0x180) == 0)) goto LAB_145759718;
    uVar3 = 0;
    if (0x10 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = uVar2 / 0x18;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_145759718;
      goto LAB_145759707;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x180,0,uVar3,0x18);
LAB_145759718:
  *(uint *)(param_1 + 0x18c) = uVar1;
  return;
}



// FUNCTION 145759796 FUN_145759796 body=361 status=ok
// SIG undefined FUN_145759796(void)

undefined8 FUN_145759796(undefined8 param_1)

{
  char *pcVar1;
  void *_Src;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((DAT_14cb0d2b0 == 0) || ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0)) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      pcVar1 = *(char **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
      if (*pcVar1 == '\x01') {
        lVar4 = *(longlong *)(pcVar1 + 0x360);
        local_40 = *(void **)(lVar4 + 0x18);
        FUN_1400021e4(&local_40,&local_50);
        puVar3 = local_50;
        if (local_48 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_40,L"Sequencer [GAME] - %s",puVar3);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        _Src = local_40;
        local_60 = (void *)0x0;
        local_58 = local_38;
        if ((longlong)local_38 == 0) {
          local_54 = 0;
        }
        else {
          FUN_1446dd670(&local_60,local_38,0);
          memcpy(local_60,_Src,(longlong)local_38 * 2);
        }
        FUN_14084feb6(&local_50,lVar4,&local_60);
        FUN_1403c75f4(param_1,&local_50);
        FUN_144a61ac8(&local_50);
        if (local_40 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar2 = 1;
        break;
      }
      lVar4 = lVar4 + 8;
      uVar2 = 0;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 145759900 FUN_145759900 body=76 status=ok
// SIG undefined FUN_145759900(void)

void FUN_145759900(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1414a73aa(param_1);
  return;
}



// FUNCTION 14575994c FUN_14575994c body=204 status=ok
// SIG undefined FUN_14575994c(void)

void FUN_14575994c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_1446f4a44(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 145759a18 FUN_145759a18 body=77 status=ok
// SIG undefined FUN_145759a18(void)

undefined8 * FUN_145759a18(undefined8 *param_1,undefined8 *param_2)

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
    FUN_145759a66(param_1,iVar1,0);
    FUN_14094c91b(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145759a66 FUN_145759a66 body=98 status=ok
// SIG undefined FUN_145759a66(void)

void FUN_145759a66(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145759ac8 FUN_145759ac8 body=122 status=ok
// SIG undefined FUN_145759ac8(void)

longlong FUN_145759ac8(longlong param_1,longlong param_2)

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
    FUN_145759b42(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145759b42 FUN_145759b42 body=200 status=ok
// SIG undefined FUN_145759b42(void)

undefined8 * FUN_145759b42(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14572d5f4(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406a7630(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14876606e(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x1a;
        puVar6 = puVar6 + 0x1a;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 145759c0a FUN_145759c0a body=100 status=ok
// SIG undefined FUN_145759c0a(void)

void FUN_145759c0a(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  
  lVar1 = param_2[0x1c];
  cVar2 = FUN_14094cb5d(param_3);
  uVar3 = (**(code **)(*param_2 + 0x180))(param_2);
  lVar4 = FUN_14094c996(uVar3);
  if (lVar4 != 0) {
    cVar5 = '\x04';
    if (cVar2 != '\x02') {
      cVar5 = (cVar2 == '\0') * '\x02';
    }
    FUN_14094cb76(lVar4,(int)lVar1,cVar5);
    return;
  }
  return;
}



// FUNCTION 145759c6e FUN_145759c6e body=109 status=ok
// SIG undefined FUN_145759c6e(void)

void FUN_145759c6e(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = DAT_14cb71108;
  if (param_1 <= (int)DAT_14cb71108) {
    if (DAT_14cb71108 < 5) {
      DAT_14cb7110c = 4;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb71108;
      if (4 < DAT_14cb7110c) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      DAT_14cb7110c = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        DAT_14cb7110c = iVar2;
      }
    }
    FUN_145759cdc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb71108);
}



// FUNCTION 145759cdc FUN_145759cdc body=141 status=ok
// SIG undefined FUN_145759cdc(void)

void FUN_145759cdc(int param_1,uint param_2)

{
  if (param_2 < 5) {
    if (DAT_14cb71100 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb710e0,DAT_14cb71100,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb71100 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb71100,0,param_2,8);
    memmove(DAT_14cb71100,&DAT_14cb710e0,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cb71100,param_1,param_2,8);
  return;
}



// FUNCTION 145759d6a FUN_145759d6a body=75 status=ok
// SIG undefined FUN_145759d6a(void)

undefined8 * FUN_145759d6a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47ce70;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145759db6(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145759db6 FUN_145759db6 body=53 status=ok
// SIG undefined FUN_145759db6(void)

void FUN_145759db6(longlong *param_1)

{
  FUN_145759ee2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145759dec FUN_145759dec body=38 status=ok
// SIG undefined FUN_145759dec(void)

undefined8 FUN_145759dec(undefined8 param_1,int param_2)

{
  FUN_145759e12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145759e12 FUN_145759e12 body=153 status=ok
// SIG undefined FUN_145759e12(void)

void FUN_145759e12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a476060;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140957b56(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145759eac(param_1 + 0x1f);
  if (*(char *)((longlong)param_1 + 0xf1) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  }
  if (param_1[0x1b] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145759eac FUN_145759eac body=53 status=ok
// SIG undefined FUN_145759eac(void)

void FUN_145759eac(longlong *param_1)

{
  FUN_14575a024();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145759ee2 FUN_145759ee2 body=321 status=ok
// SIG undefined FUN_145759ee2(void)

void FUN_145759ee2(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 14575a024 FUN_14575a024 body=373 status=ok
// SIG undefined FUN_14575a024(void)

void FUN_14575a024(longlong *param_1)

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
      FUN_14055a9b2(lVar2 + lVar3 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14575a19a FUN_14575a19a body=101 status=ok
// SIG undefined FUN_14575a19a(void)

void FUN_14575a19a(char *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      plVar3 = *(longlong **)(param_1 + 0x10);
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
    else if (cVar2 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\0';
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 14575a200 FUN_14575a200 body=106 status=ok
// SIG undefined FUN_14575a200(void)

void FUN_14575a200(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1[3];
  local_28 = param_1[5];
  local_10 = param_1[4];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1405fd19a(*param_1,param_1[1],param_1[2],&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575a26c FUN_14575a26c body=147 status=ok
// SIG undefined FUN_14575a26c(void)

void FUN_14575a26c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 14575a300 FUN_14575a300 body=58 status=ok
// SIG undefined FUN_14575a300(void)

void FUN_14575a300(undefined8 *param_1,int param_2)

{
  FUN_1409580a1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14575a33a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14575a33a FUN_14575a33a body=112 status=ok
// SIG undefined FUN_14575a33a(void)

void FUN_14575a33a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 14575a3aa FUN_14575a3aa body=52 status=ok
// SIG undefined FUN_14575a3aa(void)

void FUN_14575a3aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_14095cb81(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575a3de FUN_14575a3de body=105 status=ok
// SIG undefined FUN_14575a3de(void)

void FUN_14575a3de(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar1) {
      FUN_148824190(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    FUN_14575a447((longlong)iVar2 * 0x10 + lVar3,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14575a447 FUN_14575a447 body=45 status=ok
// SIG undefined FUN_14575a447(void)

void FUN_14575a447(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14575a474 FUN_14575a474 body=40 status=ok
// SIG undefined FUN_14575a474(void)

undefined8 FUN_14575a474(undefined8 param_1,int param_2)

{
  FUN_14575a49c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14575a49c FUN_14575a49c body=496 status=ok
// SIG undefined FUN_14575a49c(void)

void FUN_14575a49c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a3de310;
  FUN_14575aa7a();
  DAT_14caa8580 = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14024d120(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x46) == '\x01') {
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x22e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x22e) = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_14575a68c(param_1 + 0x31);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_14575a6c2(param_1 + 0x25);
  plVar3 = (longlong *)param_1[0x24];
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
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14575a6f8(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xf);
  FUN_14141661e(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14575a68c FUN_14575a68c body=53 status=ok
// SIG undefined FUN_14575a68c(void)

void FUN_14575a68c(longlong *param_1)

{
  FUN_14575a72e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575a6c2 FUN_14575a6c2 body=53 status=ok
// SIG undefined FUN_14575a6c2(void)

void FUN_14575a6c2(longlong *param_1)

{
  FUN_14575a910();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575a6f8 FUN_14575a6f8 body=53 status=ok
// SIG undefined FUN_14575a6f8(void)

void FUN_14575a6f8(longlong *param_1)

{
  FUN_14575a786();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575a72e FUN_14575a72e body=88 status=ok
// SIG undefined FUN_14575a72e(void)

void FUN_14575a72e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 14575a786 FUN_14575a786 body=334 status=ok
// SIG undefined FUN_14575a786(void)

void FUN_14575a786(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x40);
      FUN_14575a8d6(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575a8d6 FUN_14575a8d6 body=58 status=ok
// SIG undefined FUN_14575a8d6(void)

void FUN_14575a8d6(longlong *param_1)

{
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575a910 FUN_14575a910 body=360 status=ok
// SIG undefined FUN_14575a910(void)

void FUN_14575a910(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
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
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14575aa7a FUN_14575aa7a body=403 status=ok
// SIG undefined FUN_14575aa7a(void)

void FUN_14575aa7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_14024d028();
    *(undefined8 *)(param_1 + 0x118) = 0;
    plVar4 = *(longlong **)(param_1 + 0x120);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
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
    if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
      FUN_14096be4a(param_1 + 0x128);
      FUN_14096bf90(param_1 + 0x128);
    }
  }
  FUN_1449ad616(param_1 + 0x1d8);
  plVar4 = (longlong *)(param_1 + 200);
  lVar3 = param_1 + 0xd8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar3;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0xf0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar4;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar3)) {
    do {
      do {
        *(undefined1 *)(*local_78 + 0x31 + (longlong)iStack_5c * 0x40) = 0;
        local_60 = local_60 & ~uStack_6c;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar5);
    } while ((CONCAT44(uStack_64,uStack_68) != lVar3) || (local_78 != plVar4));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575ac0e FUN_14575ac0e body=163 status=ok
// SIG undefined FUN_14575ac0e(void)

undefined4 FUN_14575ac0e(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 in_stack_00000028;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_68;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  local_70 = in_stack_00000028;
  uVar1 = (**(code **)(*param_1 + 0x20))();
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_68);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575acb2 FUN_14575acb2 body=572 status=ok
// SIG undefined FUN_14575acb2(void)

void FUN_14575acb2(longlong param_1,undefined8 param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 == 0) goto LAB_14575ad41;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    cVar3 = FUN_140977065(*(undefined8 *)(DAT_14cb0d2b0 + 0x9c8));
    if (cVar3 != '\0') {
      pplVar1 = (longlong **)(param_1 + 0x78);
      local_38 = L"GGX.LTCMat";
      FUN_1409770b6(&local_30,param_2,DAT_14cb0d2b0 + 0x9c8,10);
      if (pplVar1 != &local_30) {
        plVar2 = *pplVar1;
        *pplVar1 = local_30;
        local_30 = (longlong *)0x0;
        if (plVar2 == (longlong *)0x0) goto LAB_14575acf7;
        (**(code **)(*plVar2 + 0x38))();
      }
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x38))();
      }
    }
  }
LAB_14575acf7:
  if (*(longlong *)(param_1 + 0x80) == 0) {
    cVar3 = FUN_140977065(*(undefined8 *)(DAT_14cb0d2b0 + 0x9a0));
    if (cVar3 != '\0') {
      pplVar1 = (longlong **)(param_1 + 0x80);
      local_38 = L"GGX.LTCAmp";
      FUN_1409770b6(&local_30,param_2,DAT_14cb0d2b0 + 0x9a0,0xf);
      if (pplVar1 != &local_30) {
        plVar2 = *pplVar1;
        *pplVar1 = local_30;
        local_30 = (longlong *)0x0;
        if (plVar2 == (longlong *)0x0) goto LAB_14575ad1c;
        (**(code **)(*plVar2 + 0x38))();
      }
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x38))();
      }
    }
  }
LAB_14575ad1c:
  if (*(longlong *)(param_1 + 0x88) == 0) {
    cVar3 = FUN_140977065(*(undefined8 *)(DAT_14cb0d2b0 + 0x9f0));
    if (cVar3 != '\0') {
      pplVar1 = (longlong **)(param_1 + 0x88);
      local_38 = L"Sheen.LTC";
      FUN_1409770b6(&local_30,param_2,DAT_14cb0d2b0 + 0x9f0,10);
      if (pplVar1 != &local_30) {
        plVar2 = *pplVar1;
        *pplVar1 = local_30;
        local_30 = (longlong *)0x0;
        if (plVar2 == (longlong *)0x0) goto LAB_14575ad41;
        (**(code **)(*plVar2 + 0x38))();
      }
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x38))();
      }
    }
  }
LAB_14575ad41:
  if ((*(longlong *)(param_1 + 0x78) == 0) || (*(longlong *)(param_1 + 0x80) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    cVar3 = FUN_14473b0f0();
    if (cVar3 != '\0') {
      bVar4 = *(longlong *)(param_1 + 0x88) != 0;
    }
  }
  *(bool *)(param_1 + 0x124) = bVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575aef0 FUN_14575aef0 body=170 status=ok
// SIG undefined FUN_14575aef0(void)

void FUN_14575aef0(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_14479d2ce(*param_1 + (longlong)param_2 * 0x30 + 0x10);
  FUN_14479d2ce(*param_1 + (longlong)param_2 * 0x30 + 8);
  FUN_14575b048();
  FUN_14575b118(param_1,param_2);
  FUN_14575af9a(param_1);
  if ((lVar2 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar4 = *param_1 + 0x10;
    lVar3 = (longlong)(int)param_1[1] * 0x30;
    do {
      cVar1 = FUN_14069eaf4(lVar4,lVar2);
      if (cVar1 != '\0') {
        return;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  FUN_14575b19a(lVar2);
  return;
}



// FUNCTION 14575af9a FUN_14575af9a body=62 status=ok
// SIG undefined FUN_14575af9a(void)

void FUN_14575af9a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14575afd8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14575afd8 FUN_14575afd8 body=111 status=ok
// SIG undefined FUN_14575afd8(void)

ulonglong FUN_14575afd8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x30) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 14575b048 FUN_14575b048 body=207 status=ok
// SIG undefined FUN_14575b048(void)

void FUN_14575b048(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_140502f56(param_2);
  if (lVar2 != 0) {
    puVar3 = &local_40;
    local_28 = 4;
    local_40 = 0;
    local_20 = 1;
    FUN_1402b90a2(lVar2,&DAT_14cbc2f98,puVar3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_28) {
        puVar3 = (undefined4 *)CONCAT44(uStack_3c,local_40);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(CONCAT44(uStack_3c,local_40));
    }
  }
  lVar2 = FUN_140519fd4(param_2);
  if (lVar2 != 0) {
    FUN_140fd1e04(lVar2,&DAT_14cbc2fa0,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575b118 FUN_14575b118 body=130 status=ok
// SIG undefined FUN_14575b118(void)

void FUN_14575b118(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)param_2 * 0x30);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar5) * 0x30);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14575b19a FUN_14575b19a body=168 status=ok
// SIG undefined FUN_14575b19a(void)

void FUN_14575b19a(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140502f56();
  if (lVar2 != 0) {
    puVar3 = &local_38;
    local_20 = 4;
    local_38 = 0;
    local_18 = 1;
    FUN_1402b90a2(lVar2,&DAT_14cbc2fa8,puVar3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_20) {
        puVar3 = (undefined4 *)CONCAT44(uStack_34,local_38);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_20) {
      FUN_1400020a8(CONCAT44(uStack_34,local_38));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575b244 FUN_14575b244 body=181 status=ok
// SIG undefined FUN_14575b244(void)

void FUN_14575b244(longlong *param_1,char *param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 == '\a') {
    cVar1 = FUN_140114204(param_2);
    if (cVar1 != '\0') {
      FUN_144a659ac(param_2 + 0x10,local_4c,2);
      FUN_144a659ac(param_2 + 0x10,local_58,1);
      local_60 = param_5;
      local_68 = param_4;
      (**(code **)(*param_1 + 0x50))(param_1,local_58,local_4c,param_3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575b2fa FUN_14575b2fa body=92 status=ok
// SIG undefined FUN_14575b2fa(void)

void FUN_14575b2fa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_140391552();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x148);
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = &PTR_FUN_14b4778e0;
    puVar4[1] = uVar2;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    FUN_14039144e(lVar3,puVar4);
    return;
  }
  return;
}



// FUNCTION 14575b356 FUN_14575b356 body=132 status=ok
// SIG undefined FUN_14575b356(void)

void FUN_14575b356(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14575b3dc FUN_14575b3dc body=257 status=ok
// SIG undefined FUN_14575b3dc(void)

void FUN_14575b3dc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    lVar2 = FUN_14575b4de();
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      local_88 = &LAB_145857a48;
      local_80 = 0;
      FUN_14575b516(local_98,param_1,&local_88);
      local_88 = (undefined1 *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar1,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(local_98);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575b4de FUN_14575b4de body=56 status=ok
// SIG undefined FUN_14575b4de(void)

undefined8 FUN_14575b4de(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0xa8);
    uVar2 = FUN_14098d926(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14575b516 FUN_14575b516 body=428 status=ok
// SIG undefined FUN_14575b516(void)

longlong * FUN_14575b516(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14575b5f6:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b41cfb0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14575b5f6;
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
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b41cfb0;
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



// FUNCTION 14575b6c2 FUN_14575b6c2 body=98 status=ok
// SIG undefined FUN_14575b6c2(void)

void FUN_14575b6c2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*param_1 + 0x10))();
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1458771b0(param_1);
  param_1[3] = 0;
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    param_1[4] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014575b720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14575b724 FUN_14575b724 body=9 status=ok
// SIG undefined FUN_14575b724(void)

void FUN_14575b724(longlong param_1)

{
  FUN_14575b72e(param_1 + 0x10);
  return;
}



// FUNCTION 14575b72e FUN_14575b72e body=157 status=ok
// SIG undefined FUN_14575b72e(void)

void FUN_14575b72e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14575b7cb(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_14575b7fe(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14575b834(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014575b7c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14575b7cb FUN_14575b7cb body=51 status=ok
// SIG undefined FUN_14575b7cb(void)

void FUN_14575b7cb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
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



// FUNCTION 14575b7fe FUN_14575b7fe body=53 status=ok
// SIG undefined FUN_14575b7fe(void)

void FUN_14575b7fe(longlong *param_1)

{
  FUN_14575b86c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575b834 FUN_14575b834 body=55 status=ok
// SIG undefined FUN_14575b834(void)

void FUN_14575b834(longlong *param_1)

{
  FUN_14575b8c6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575b86c FUN_14575b86c body=90 status=ok
// SIG undefined FUN_14575b86c(void)

void FUN_14575b86c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 14575b8c6 FUN_14575b8c6 body=390 status=ok
// SIG undefined FUN_14575b8c6(void)

void FUN_14575b8c6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      if (*(longlong *)(*local_70 + 0x38 + (longlong)iStack_54 * 0x90) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d97c6c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14575ba4e FUN_14575ba4e body=859 status=ok
// SIG undefined FUN_14575ba4e(void)

void FUN_14575ba4e(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_14099030e(param_1 + 0x40,0);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_14480809c(param_1 + 0x180,0);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_14480809c(param_1 + 0x1c0,0);
  }
  FUN_14575bdce(param_1 + 0x78);
  if (DAT_14cb7bd70 != 0) {
    FUN_144a78877((undefined4)DAT_14cb7bd68,DAT_14cb7bd70);
  }
  uVar6 = FUN_140726908(param_1 + 0x78);
  if (DAT_14cb7bd88 != 0) {
    FUN_144a78877((undefined4)DAT_14cb7bd80,DAT_14cb7bd88);
  }
  FUN_140726d02(uVar6);
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_14575c464(param_1 + 400);
  }
  FUN_14575be12(param_1 + 200);
  FUN_14575be56(param_1 + 0x118);
  FUN_140861e20(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b8));
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_1403539de(param_1 + 0x1b0,0);
  }
  if (DAT_14c872bd8 != '\0') {
LAB_14575bc8b:
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar1 = param_1 + 8;
  cVar4 = FUN_144729dda(lVar1);
  if (cVar4 == '\0') goto LAB_14575bc8b;
  lVar7 = FUN_14479d2ce(lVar1);
  if (((*(longlong *)(lVar7 + 0x30) != 0) &&
      (*(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x360) != 0)) &&
     (iVar5 = FUN_14490d72a(), iVar5 == 3)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar2 = (int *)((longlong)puVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
    goto LAB_14575bc8b;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) goto LAB_14575bc8b;
  uVar6 = FUN_14479d2ce(lVar1);
  plVar8 = (longlong *)FUN_14001cc68(0x100,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b401c80;
  plVar9 = plVar8 + 2;
  FUN_14575c534(plVar9,uVar6);
  local_38 = plVar9;
  local_30 = plVar8;
  FUN_14575c494(&local_38,plVar9);
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x20);
    if (plVar9 == (longlong *)0x0) goto LAB_14575bc31;
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_14575bd63:
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14575bc31;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
    plVar8 = plVar9;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x18) = plVar9;
    plVar9 = *(longlong **)(param_1 + 0x20);
    if (plVar8 != plVar9) {
      *(longlong **)(param_1 + 0x20) = plVar8;
      if (plVar9 == (longlong *)0x0) goto LAB_14575bc31;
      goto LAB_14575bd63;
    }
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14575bc31;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14575bc31:
  plVar9 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14575bdce FUN_14575bdce body=67 status=ok
// SIG undefined FUN_14575bdce(void)

void FUN_14575bdce(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14575c154(param_1);
    FUN_14098fa36(param_1,0);
    return;
  }
  FUN_14098fa36(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140727d52(param_1);
  return;
}



// FUNCTION 14575be12 FUN_14575be12 body=67 status=ok
// SIG undefined FUN_14575be12(void)

void FUN_14575be12(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14575c29a(param_1);
    FUN_14098f828(param_1,0);
    return;
  }
  FUN_14098f828(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140990520(param_1);
  return;
}



// FUNCTION 14575be56 FUN_14575be56 body=67 status=ok
// SIG undefined FUN_14575be56(void)

void FUN_14575be56(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14575be9a(param_1);
    FUN_14575bfe0(param_1,0);
    return;
  }
  FUN_14575bfe0(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145c1b8f8(param_1);
  return;
}



// FUNCTION 14575be9a FUN_14575be9a body=325 status=ok
// SIG undefined FUN_14575be9a(void)

void FUN_14575be9a(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 14575bfe0 FUN_14575bfe0 body=370 status=ok
// SIG undefined FUN_14575bfe0(void)

void FUN_14575bfe0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      FUN_145be86be((longlong)iStack_54 * 0x38 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14575c154 FUN_14575c154 body=325 status=ok
// SIG undefined FUN_14575c154(void)

void FUN_14575c154(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
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



// FUNCTION 14575c29a FUN_14575c29a body=329 status=ok
// SIG undefined FUN_14575c29a(void)

void FUN_14575c29a(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 14575c464 FUN_14575c464 body=48 status=ok
// SIG undefined FUN_14575c464(void)

void FUN_14575c464(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x24,4);
  }
  return;
}



// FUNCTION 14575c494 FUN_14575c494 body=159 status=ok
// SIG undefined FUN_14575c494(void)

void FUN_14575c494(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14575c4d1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14575c4d1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14575c4d1:
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
                    /* WARNING: Could not recover jumptable at 0x00014575c52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14575c534 FUN_14575c534 body=176 status=ok
// SIG undefined FUN_14575c534(void)

undefined8 * FUN_14575c534(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0x1ffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  return param_1;
}



// FUNCTION 14575c5e4 FUN_14575c5e4 body=422 status=ok
// SIG undefined FUN_14575c5e4(void)

longlong * FUN_14575c5e4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14575c6ba:
    *puVar3 = &PTR_LAB_14b3e62a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b401ca0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_145a0e25e;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14575c6ba;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3e62a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b401ca0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_145a0e25e;
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
  return param_1;
}



// FUNCTION 14575c792 FUN_14575c792 body=145 status=ok
// SIG undefined FUN_14575c792(void)

void FUN_14575c792(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a61b4f();
  if ((int)param_1[0x1e] != 0) {
    plVar1 = (longlong *)FUN_14575c834(*(undefined8 *)param_1[0x1d]);
    local_30 = (longlong *)*plVar1;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    local_28 = (undefined4)plVar1[1];
    uVar2 = FUN_140998de2(param_1 + 0x1d,0);
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575c834 FUN_14575c834 body=37 status=ok
// SIG undefined FUN_14575c834(void)

longlong FUN_14575c834(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144a7c5f6(param_1 + 0x10);
  lVar2 = param_1 + 0x10;
  if (cVar1 != '\0') {
    lVar2 = param_1;
  }
  return lVar2;
}



// FUNCTION 14575c85a FUN_14575c85a body=132 status=ok
// SIG undefined FUN_14575c85a(void)

void FUN_14575c85a(longlong param_1,int param_2)

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



// FUNCTION 14575c8de FUN_14575c8de body=328 status=ok
// SIG undefined FUN_14575c8de(void)

undefined4 * FUN_14575c8de(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14575caba(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar5 = FUN_14575ca28(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14ca985a8 - DAT_14ca985d4;
    if (uVar6 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14ca985e8)) {
      uVar10 = DAT_14ca985e8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14ca985e0;
      if (DAT_14ca985e0 == (undefined *)0x0) {
        puVar7 = &DAT_14ca985d8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14ca985e8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14ca985e0;
      if (DAT_14ca985e0 == (undefined *)0x0) {
        puVar7 = &DAT_14ca985d8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14ca985e8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14ca985e8 = iVar9;
      FUN_140999704();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575ca28 FUN_14575ca28 body=146 status=ok
// SIG undefined FUN_14575ca28(void)

undefined8 FUN_14575ca28(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14ca985a8 != DAT_14ca985d4) && (DAT_14ca985a8 - DAT_14ca985d4 != 1)) {
    puVar6 = &DAT_14ca985d8;
    if (DAT_14ca985e0 != (undefined *)0x0) {
      puVar6 = DAT_14ca985e0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14ca985e8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14ca985a0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_14586316a(&DAT_14ca985a0,*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14575caba FUN_14575caba body=283 status=ok
// SIG undefined FUN_14575caba(void)

int * FUN_14575caba(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca985d0;
  iVar3 = DAT_14ca985a8;
  if (DAT_14ca985d4 == 0) {
    iVar2 = DAT_14ca985a8 + 1;
    bVar7 = DAT_14ca985ac == DAT_14ca985a8;
    DAT_14ca985a8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14ca985a0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14ca985b0,1);
    puVar4 = DAT_14ca985c0;
    if (DAT_14ca985c0 == (undefined *)0x0) {
      puVar4 = &DAT_14ca985b0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14ca985d0;
    DAT_14ca985d0 = *(int *)(DAT_14ca985a0 + 4 + lVar6 * 0x18);
    DAT_14ca985d4 = DAT_14ca985d4 + -1;
    if (DAT_14ca985d4 != 0) {
      *(undefined4 *)(DAT_14ca985a0 + (longlong)DAT_14ca985d0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14ca985b0;
  if (DAT_14ca985c0 != (undefined *)0x0) {
    puVar4 = DAT_14ca985c0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14ca985a0;
  return param_1;
}



// FUNCTION 14575cbd6 FUN_14575cbd6 body=95 status=ok
// SIG undefined FUN_14575cbd6(void)

void FUN_14575cbd6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14575cc36 FUN_14575cc36 body=38 status=ok
// SIG undefined FUN_14575cc36(void)

undefined8 FUN_14575cc36(undefined8 param_1,int param_2)

{
  FUN_14575cc5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14575cc5c FUN_14575cc5c body=114 status=ok
// SIG undefined FUN_14575cc5c(void)

void FUN_14575cc5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9bf420;
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_14099c296(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x5e);
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 14575ccda FUN_14575ccda body=1726 status=ok
// SIG undefined FUN_14575ccda(void)

void FUN_14575ccda(undefined4 *param_1,longlong param_2)

{
  *param_1 = 0x30;
  FUN_14020fad6(param_2,L"Zero");
  param_1[1] = 0x31;
  FUN_14020fad6(param_2 + 0x10,&DAT_149ebbb90);
  param_1[2] = 0x32;
  FUN_14020fad6(param_2 + 0x20,&DAT_149ebbb98);
  param_1[3] = 0x33;
  FUN_14020fad6(param_2 + 0x30,L"Three");
  param_1[4] = 0x34;
  FUN_14020fad6(param_2 + 0x40,L"Four");
  param_1[5] = 0x35;
  FUN_14020fad6(param_2 + 0x50,L"Five");
  param_1[6] = 0x36;
  FUN_14020fad6(param_2 + 0x60,&DAT_149ebbbc0);
  param_1[7] = 0x37;
  FUN_14020fad6(param_2 + 0x70,L"Seven");
  param_1[8] = 0x38;
  FUN_14020fad6(param_2 + 0x80,L"Eight");
  param_1[9] = 0x39;
  FUN_14020fad6(param_2 + 0x90,L"Nine");
  param_1[10] = 0x41;
  FUN_14020fad6(param_2 + 0xa0,&DAT_149e71d50);
  param_1[0xb] = 0x42;
  FUN_14020fad6(param_2 + 0xb0,&DAT_149e060e8);
  param_1[0xc] = 0x43;
  FUN_14020fad6(param_2 + 0xc0,&DAT_149e25bec);
  param_1[0xd] = 0x44;
  FUN_14020fad6(param_2 + 0xd0,&DAT_149e189f0);
  param_1[0xe] = 0x45;
  FUN_14020fad6(param_2 + 0xe0,&DAT_149e8ad72);
  param_1[0xf] = 0x46;
  FUN_14020fad6(param_2 + 0xf0,&DAT_149e25bf0);
  param_1[0x10] = 0x47;
  FUN_14020fad6(param_2 + 0x100,&DAT_149ebbbea);
  param_1[0x11] = 0x48;
  FUN_14020fad6(param_2 + 0x110,&DAT_149ebbbee);
  param_1[0x12] = 0x49;
  FUN_14020fad6(param_2 + 0x120,&DAT_149ebbbf2);
  param_1[0x13] = 0x4a;
  FUN_14020fad6(param_2 + 0x130,&DAT_149ebbbf6);
  param_1[0x14] = 0x4b;
  FUN_14020fad6(param_2 + 0x140,&DAT_149e25a6e);
  param_1[0x15] = 0x4c;
  FUN_14020fad6(param_2 + 0x150,&DAT_149ebbbfa);
  param_1[0x16] = 0x4d;
  FUN_14020fad6(param_2 + 0x160,&DAT_149ebbbfe);
  param_1[0x17] = 0x4e;
  FUN_14020fad6(param_2 + 0x170,&DAT_149e25ace);
  param_1[0x18] = 0x4f;
  FUN_14020fad6(param_2 + 0x180,&DAT_149ebbc02);
  param_1[0x19] = 0x50;
  FUN_14020fad6(param_2 + 400,&DAT_149ebbc06);
  param_1[0x1a] = 0x51;
  FUN_14020fad6(param_2 + 0x1a0,&DAT_149ebbc0a);
  param_1[0x1b] = 0x52;
  FUN_14020fad6(param_2 + 0x1b0,&DAT_149ebbc0e);
  param_1[0x1c] = 0x53;
  FUN_14020fad6(param_2 + 0x1c0,&DAT_149ebbc12);
  param_1[0x1d] = 0x54;
  FUN_14020fad6(param_2 + 0x1d0,&DAT_149ebbc16);
  param_1[0x1e] = 0x55;
  FUN_14020fad6(param_2 + 0x1e0,&DAT_149e71d4c);
  param_1[0x1f] = 0x56;
  FUN_14020fad6(param_2 + 0x1f0,&DAT_149e8411a);
  param_1[0x20] = 0x57;
  FUN_14020fad6(param_2 + 0x200,&DAT_149ebbc1a);
  param_1[0x21] = 0x58;
  FUN_14020fad6(param_2 + 0x210,&DAT_149e25cc8);
  param_1[0x22] = 0x59;
  FUN_14020fad6(param_2 + 0x220,&DAT_149e25ccc);
  param_1[0x23] = 0x5a;
  FUN_14020fad6(param_2 + 0x230,&DAT_149e25cd0);
  param_1[0x24] = 0x3b;
  FUN_14020fad6(param_2 + 0x240,L"Semicolon");
  param_1[0x25] = 0x3d;
  FUN_14020fad6(param_2 + 0x250,L"Equals");
  param_1[0x26] = 0x2c;
  FUN_14020fad6(param_2 + 0x260,L"Comma");
  param_1[0x27] = 0x2d;
  FUN_14020fad6(param_2 + 0x270,L"Hyphen");
  param_1[0x28] = 0x2e;
  FUN_14020fad6(param_2 + 0x280,L"Period");
  param_1[0x29] = 0x2f;
  FUN_14020fad6(param_2 + 0x290,L"Slash");
  param_1[0x2a] = 0x60;
  FUN_14020fad6(param_2 + 0x2a0,L"Tilde");
  param_1[0x2b] = 0x5b;
  FUN_14020fad6(param_2 + 0x2b0,L"LeftBracket");
  param_1[0x2c] = 0x5c;
  FUN_14020fad6(param_2 + 0x2c0,L"Backslash");
  param_1[0x2d] = 0x5d;
  FUN_14020fad6(param_2 + 0x2d0,L"RightBracket");
  param_1[0x2e] = 0x27;
  FUN_14020fad6(param_2 + 0x2e0,L"Apostrophe");
  param_1[0x2f] = 0x20;
  FUN_14020fad6(param_2 + 0x2f0,L"SpaceBar");
  param_1[0x30] = 0x26;
  FUN_14020fad6(param_2 + 0x300,L"Ampersand");
  param_1[0x31] = 0x2a;
  FUN_14020fad6(param_2 + 0x310,L"Asterix");
  param_1[0x32] = 0x5e;
  FUN_14020fad6(param_2 + 800,L"Caret");
  param_1[0x33] = 0x3a;
  FUN_14020fad6(param_2 + 0x330,L"Colon");
  param_1[0x34] = 0x24;
  FUN_14020fad6(param_2 + 0x340,L"Dollar");
  param_1[0x35] = 0x21;
  FUN_14020fad6(param_2 + 0x350,L"Exclamation");
  param_1[0x36] = 0x28;
  FUN_14020fad6(param_2 + 0x360,L"LeftParantheses");
  param_1[0x37] = 0x29;
  FUN_14020fad6(param_2 + 0x370,L"RightParantheses");
  param_1[0x38] = 0x22;
  FUN_14020fad6(param_2 + 0x380,L"Quote");
  param_1[0x39] = 0x5f;
  FUN_14020fad6(param_2 + 0x390,L"Underscore");
  param_1[0x3a] = 0xe0;
  FUN_14020fad6(param_2 + 0x3a0,L"A_AccentGrave");
  param_1[0x3b] = 0xe7;
  FUN_14020fad6(param_2 + 0x3b0,L"C_Cedille");
  param_1[0x3c] = 0xe9;
  FUN_14020fad6(param_2 + 0x3c0,L"E_AccentAigu");
  param_1[0x3d] = 0xe8;
  FUN_14020fad6(param_2 + 0x3d0,L"E_AccentGrave");
  param_1[0x3e] = 0xa7;
  FUN_14020fad6(param_2 + 0x3e0,L"Section");
  return;
}



// FUNCTION 14575d398 FUN_14575d398 body=61 status=ok
// SIG undefined FUN_14575d398(void)

void FUN_14575d398(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14575d5b6(param_2);
  FUN_14485c47a(param_1 + 8,uVar1);
  uVar1 = FUN_14479d2ce(param_1 + 8);
  FUN_14575d514(param_1 + 0x10,uVar1);
  return;
}



// FUNCTION 14575d3d6 FUN_14575d3d6 body=155 status=ok
// SIG undefined FUN_14575d3d6(void)

void FUN_14575d3d6(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x360) = uVar3;
  *(longlong *)(param_1 + 0x368) = lVar4;
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
  FUN_14575d472(param_1 + 0x870,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00014575d46d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14575d472 FUN_14575d472 body=162 status=ok
// SIG undefined FUN_14575d472(void)

void FUN_14575d472(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14575d4ff;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14575d4ff:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14575d514 FUN_14575d514 body=162 status=ok
// SIG undefined FUN_14575d514(void)

void FUN_14575d514(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14575d5a1;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14575d5a1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14575d5b6 FUN_14575d5b6 body=191 status=ok
// SIG undefined FUN_14575d5b6(void)

longlong FUN_14575d5b6(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_1411e6332();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
      lVar1 = FUN_144a74fb4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
      lVar1 = FUN_140f5e1c2();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
    }
    else {
      lVar1 = FUN_1491ae766(param_1);
      if (lVar1 != 0) {
        return lVar1;
      }
      lVar1 = FUN_140849bbe(param_1);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14575d676 FUN_14575d676 body=228 status=ok
// SIG undefined FUN_14575d676(void)

undefined8 FUN_14575d676(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14bb75fa0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14bb75f30;
  local_38[3] = param_3;
  local_38[4] = &LAB_145850942;
  FUN_14575d75c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575d75c FUN_14575d75c body=216 status=ok
// SIG undefined FUN_14575d75c(void)

undefined8 * FUN_14575d75c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14575d845 FUN_14575d845 body=262 status=ok
// SIG undefined FUN_14575d845(void)

undefined8
FUN_14575d845(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

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
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
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



// FUNCTION 14575d94c FUN_14575d94c body=57 status=ok
// SIG undefined FUN_14575d94c(void)

void FUN_14575d94c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a43d8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a43d8 = FUN_140002ddd(FUN_141739bf4,uVar1,L"GbxActorStateMachineKey");
  }
  return;
}



// FUNCTION 14575d986 FUN_14575d986 body=57 status=ok
// SIG undefined FUN_14575d986(void)

void FUN_14575d986(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a43f0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a43f0 = FUN_140002ddd(FUN_141739c25,uVar1,L"GbxActorStateMachineStateKey");
  }
  return;
}



// FUNCTION 14575d9c0 FUN_14575d9c0 body=132 status=ok
// SIG undefined FUN_14575d9c0(void)

void FUN_14575d9c0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14575da46 FUN_14575da46 body=147 status=ok
// SIG undefined FUN_14575da46(void)

void FUN_14575da46(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14575dada FUN_14575dada body=128 status=ok
// SIG undefined FUN_14575dada(void)

int FUN_14575dada(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar4 + uVar3) == *param_2) {
        iVar2 = (int)(uVar3 >> 2) * -0x55555555;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0xc;
    } while (lVar5 * 0xc != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145a612e0(param_1,iVar1);
    lVar4 = *param_1;
  }
  *(int *)(lVar4 + 8 + lVar5 * 0xc) = (int)param_2[1];
  *(longlong *)(lVar4 + lVar5 * 0xc) = *param_2;
  return iVar1;
}



// FUNCTION 14575db5a FUN_14575db5a body=147 status=ok
// SIG undefined FUN_14575db5a(void)

void FUN_14575db5a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14575dbee FUN_14575dbee body=55 status=ok
// SIG undefined FUN_14575dbee(void)

void FUN_14575dbee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ef18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ef18 = FUN_140002ddd(FUN_1464e4495,uVar1,L"GbxGameSpawnerReclaimedActorInfo");
  }
  return;
}



// FUNCTION 14575ddfc FUN_14575ddfc body=138 status=ok
// SIG undefined FUN_14575ddfc(void)

void FUN_14575ddfc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14575de86 FUN_14575de86 body=2638 status=ok
// SIG undefined FUN_14575de86(void)

ulonglong FUN_14575de86(longlong *param_1,int param_2,float *param_3)

{
  double *pdVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  double *local_2b0;
  double *pdStack_2a8;
  double *local_2a0;
  undefined1 *local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  undefined1 *local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined1 local_254 [4];
  double local_250;
  double local_248;
  double dStack_240;
  ulonglong local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  char local_1cb [3];
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined2 local_1ac;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [16];
  double local_158 [3];
  undefined1 local_140 [24];
  undefined1 local_128 [32];
  double local_108 [3];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar10 = *(longlong *)param_1[1];
  lVar9 = (longlong)param_2;
  uVar7 = (ulonglong)*(ushort *)(lVar10 + lVar9 * 6);
  lVar2 = *(longlong *)(*param_1 + 0x28);
  local_1d8 = (double)*(float *)(lVar2 + 8 + uVar7 * 0xc);
  dStack_1e0 = (double)*(float *)(lVar2 + 4 + uVar7 * 0xc);
  pdVar1 = (double *)param_1[4];
  local_1e8 = (double)*(float *)(lVar2 + uVar7 * 0xc);
  uVar7 = (ulonglong)*(ushort *)(lVar10 + 2 + lVar9 * 6);
  local_1f0 = (double)*(float *)(lVar2 + 8 + uVar7 * 0xc);
  local_1f8 = (double)*(float *)(lVar2 + 4 + uVar7 * 0xc);
  local_200 = (double)*(float *)(lVar2 + uVar7 * 0xc);
  uVar7 = (ulonglong)*(ushort *)(lVar10 + 4 + lVar9 * 6);
  local_208 = (double)*(float *)(lVar2 + 8 + uVar7 * 0xc);
  local_210 = (double)*(float *)(lVar2 + 4 + uVar7 * 0xc);
  local_218 = (double)*(float *)(lVar2 + uVar7 * 0xc);
  dVar13 = (local_200 - local_1e8) * (local_210 - dStack_1e0) -
           (local_218 - local_1e8) * (local_1f8 - dStack_1e0);
  dVar16 = (local_1f0 - local_1d8) * (local_218 - local_1e8) -
           (local_208 - local_1d8) * (local_200 - local_1e8);
  dVar4 = (local_1f8 - dStack_1e0) * (local_208 - local_1d8) -
          (local_210 - dStack_1e0) * (local_1f0 - local_1d8);
  dVar19 = dVar13 * dVar13 + dVar4 * dVar4 + dVar16 * dVar16;
  uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar7 = CONCAT71(uVar11,1);
  if ((dVar19 < 9.99999993922529e-09) || (dVar19 = SQRT(dVar19), dVar19 <= 9.99999993922529e-09))
  goto LAB_14575e25e;
  pdVar3 = (double *)param_1[3];
  if ((0.0 < pdVar3[2] * (dVar13 / dVar19) +
             *pdVar3 * (dVar4 / dVar19) + pdVar3[1] * (dVar16 / dVar19)) &&
     (*(char *)((longlong)param_1 + 100) != '\0')) goto LAB_14575e25e;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0x100;
  local_1ae = 0;
  local_1ac = 0x202;
  local_1c8 = &PTR_FUN_149f48540;
  local_2a0 = &local_248;
  local_2b0 = &local_250;
  local_2b8 = pdVar1;
  pdStack_2a8 = &local_230;
  local_298 = local_254;
  local_1a8 = local_1e8;
  dStack_1a0 = dStack_1e0;
  local_198 = local_1d8;
  local_190 = dVar4 / dVar19;
  local_188 = dVar16 / dVar19;
  local_180 = dVar13 / dVar19;
  cVar6 = FUN_1406644e2(&local_1a8,param_1[2],pdVar3,(double)*param_3);
  dVar4 = local_220;
  dVar16 = local_228;
  dVar13 = local_230;
  uVar7 = CONCAT71(uVar11,1);
  if (cVar6 != '\0') {
    if ((local_250 != 0.0) || (NAN(local_250))) {
      local_2b8 = &local_218;
      local_2b0 = &local_230;
      FUN_1449056f5(local_108,&local_230,&local_1e8,&local_200);
      if (9.999999878450581e-17 <
          (local_220 - local_108[2]) * (local_220 - local_108[2]) +
          (local_230 - local_108[0]) * (local_230 - local_108[0]) +
          (local_228 - local_108[1]) * (local_228 - local_108[1])) goto LAB_14575e3f1;
LAB_14575e1fa:
      if (local_250 < (double)param_1[5]) {
        param_1[6] = (longlong)dVar13;
        param_1[7] = (longlong)dVar16;
        param_1[8] = (longlong)dVar4;
        param_1[9] = (longlong)local_248;
        param_1[10] = (longlong)dStack_240;
        param_1[0xb] = local_238;
        param_1[5] = (longlong)local_250;
        *param_3 = (float)local_250;
        *(int *)(param_1 + 0xc) = param_2;
      }
    }
    else {
      dVar19 = (double)pdVar1 + 9.99999993922529e-09;
      local_2b0 = (double *)param_1[2];
      dVar18 = (local_2b0[2] - local_198) * local_180 +
               (*local_2b0 - local_1a8) * local_190 + (local_2b0[1] - dStack_1a0) * local_188;
      local_108[2] = local_2b0[2] - dVar18 * local_180;
      local_108[1] = local_2b0[1] - local_188 * dVar18;
      local_108[0] = *local_2b0 - local_190 * dVar18;
      local_2b8 = &local_218;
      FUN_1449056f5(local_158,local_108,&local_1e8,&local_200);
      pdVar1 = (double *)param_1[2];
      if (dVar19 * dVar19 <
          (pdVar1[2] - local_158[2]) * (pdVar1[2] - local_158[2]) +
          (*pdVar1 - local_158[0]) * (*pdVar1 - local_158[0]) +
          (pdVar1[1] - local_158[1]) * (pdVar1[1] - local_158[1])) {
LAB_14575e3f1:
        dVar14 = local_1f0 - local_1d8;
        dVar17 = local_1f8 - dStack_1e0;
        dVar20 = local_200 - local_1e8;
        dVar19 = dVar14 * dVar14 + dVar20 * dVar20 + dVar17 * dVar17;
        dVar18 = 0.0;
        dVar21 = 1.0;
        local_270 = 1.0;
        local_268 = 0.0;
        local_260 = 0.0;
        uVar15 = 0;
        if (9.999999747378752e-05 <= dVar19) {
          dVar19 = SQRT(dVar19);
          uVar15 = SUB84(dVar19,0);
          local_260 = dVar14 / dVar19;
          local_268 = dVar17 / dVar19;
          local_270 = dVar20 / dVar19;
        }
        local_2a0 = (double *)(double)*param_3;
        local_2b0 = (double *)param_1[2];
        pdStack_2a8 = (double *)param_1[3];
        local_280 = local_158;
        local_288 = local_108;
        local_290 = &local_178;
        local_2b8 = &local_200;
        local_298 = (undefined1 *)0x0;
        local_278 = local_254;
        local_1cb[0] = FUN_140663684(param_1[4],uVar15,&local_270,&local_1e8);
        dVar14 = local_208 - local_1f0;
        dVar17 = local_210 - local_1f8;
        dVar20 = local_218 - local_200;
        dVar19 = dVar14 * dVar14 + dVar20 * dVar20 + dVar17 * dVar17;
        local_270 = 1.0;
        local_260 = 0.0;
        uVar15 = 0;
        if (9.999999747378752e-05 <= dVar19) {
          dVar19 = SQRT(dVar19);
          uVar15 = SUB84(dVar19,0);
          local_260 = dVar14 / dVar19;
          dVar18 = dVar17 / dVar19;
          local_270 = dVar20 / dVar19;
        }
        local_280 = (double *)local_140;
        local_288 = (double *)local_f0;
        local_290 = (double *)local_170;
        local_2a0 = (double *)(double)*param_3;
        local_2b0 = (double *)param_1[2];
        pdStack_2a8 = (double *)param_1[3];
        local_298 = (undefined1 *)0x0;
        local_2b8 = &local_218;
        local_278 = local_254;
        local_268 = dVar18;
        local_1cb[1] = FUN_140663684(param_1[4],uVar15,&local_270,&local_200);
        dVar18 = local_208 - local_1d8;
        dVar14 = local_210 - dStack_1e0;
        dVar17 = local_218 - local_1e8;
        dVar19 = dVar18 * dVar18 + dVar17 * dVar17 + dVar14 * dVar14;
        uVar22 = 0;
        uVar23 = 0;
        local_268 = 0.0;
        local_260 = 0.0;
        uVar15 = 0;
        if (9.999999747378752e-05 <= dVar19) {
          dVar19 = SQRT(dVar19);
          uVar15 = SUB84(dVar19,0);
          local_260 = dVar18 / dVar19;
          local_268 = dVar14 / dVar19;
          dVar21 = dVar17 / dVar19;
        }
        local_280 = (double *)local_128;
        local_288 = (double *)local_d8;
        local_290 = (double *)local_168;
        local_2a0 = (double *)(double)*param_3;
        local_2b0 = (double *)param_1[2];
        pdStack_2a8 = (double *)param_1[3];
        local_298 = (undefined1 *)0x0;
        local_2b8 = &local_218;
        local_278 = local_254;
        local_270 = dVar21;
        local_1cb[2] = FUN_140663684(param_1[4],uVar15,&local_270,&local_1e8);
        iVar8 = -1;
        lVar10 = 0;
        bVar5 = false;
        do {
          if ((local_1cb[lVar10] == '\x01') &&
             ((dVar19 = *(double *)(local_170 + lVar10 * 8 + -8), !bVar5 ||
              (dVar19 <= (double)CONCAT44(uVar23,uVar22) &&
               (double)CONCAT44(uVar23,uVar22) != dVar19)))) {
            bVar5 = true;
            iVar8 = (int)lVar10;
            uVar22 = SUB84(dVar19,0);
            uVar23 = (undefined4)((ulonglong)dVar19 >> 0x20);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
        if (iVar8 != -1) {
          lVar10 = (longlong)iVar8;
          dVar13 = (double)param_1[4];
          if ((local_250 == 0.0) && (!NAN(local_250))) {
            pdVar1 = (double *)param_1[2];
            dVar4 = (pdVar1[2] - local_198) * local_180 +
                    (*pdVar1 - local_1a8) * local_190 + (pdVar1[1] - dStack_1a0) * local_188;
            uVar12 = -(ulonglong)(dVar4 < 0.0);
            local_238 = ~uVar12 & (ulonglong)local_180 | (ulonglong)-local_180 & uVar12;
            local_248 = local_190;
            dStack_240 = local_188;
            if (dVar4 < 0.0) {
              dStack_240 = -local_188;
              local_248 = -local_190;
            }
          }
          dVar4 = *(double *)(local_f0 + lVar10 * 0x18 + -8) -
                  *(double *)(local_140 + lVar10 * 0x18 + -8) * dVar13;
          dVar16 = local_108[lVar10 * 3 + 1] - local_158[lVar10 * 3 + 1] * dVar13;
          dVar13 = local_108[lVar10 * 3] - dVar13 * local_158[lVar10 * 3];
          local_250 = (double)CONCAT44(uVar23,uVar22);
        }
        if (bVar5) goto LAB_14575e1fa;
      }
      else {
        param_1[5] = 0;
        *(int *)(param_1 + 0xc) = param_2;
        uVar7 = 0;
      }
    }
  }
  local_1c8 = &PTR_FUN_149f553e0;
LAB_14575e25e:
  if ((local_c0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14575e8d6 FUN_14575e8d6 body=175 status=ok
// SIG undefined FUN_14575e8d6(void)

void FUN_14575e8d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_1400b465c();
  if (lVar4 != 0) {
    lVar5 = FUN_144a79464();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_140457ffc(lVar4 + 0x2a8,param_1);
    }
  }
  lVar4 = FUN_144a2383e();
  if (lVar4 != 0) {
    FUN_140457ffc(lVar4 + 0x598,param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014575e979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14575e986 FUN_14575e986 body=9 status=ok
// SIG undefined FUN_14575e986(void)

void FUN_14575e986(longlong param_1)

{
  FUN_14575e990(param_1 + 0x10);
  return;
}



// FUNCTION 14575e990 FUN_14575e990 body=736 status=ok
// SIG undefined FUN_14575e990(void)

void FUN_14575e990(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14575ee42();
  plVar3 = *(longlong **)(param_1 + 0x330);
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
  *(undefined4 *)(param_1 + 800) = 0;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  FUN_14575ee0a(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FUN_1400020a8();
  }
  FUN_14575ecd6(param_1 + 0x288);
  if (*(longlong *)(param_1 + 0x268) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  FUN_1456d172d(*(undefined8 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x260));
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_1400020a8();
  }
  FUN_14575ec70(*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x250));
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  FUN_14575ed0c(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_14575edd2(param_1 + 0x1a8);
  FUN_1409c0f2d(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x1a0));
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  FUN_145a27346(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1409c0ca4(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_14575ec9d(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14575ed9c(param_1 + 8);
  return;
}



// FUNCTION 14575ec70 FUN_14575ec70 body=45 status=ok
// SIG undefined FUN_14575ec70(void)

void FUN_14575ec70(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 14575ec9d FUN_14575ec9d body=56 status=ok
// SIG undefined FUN_14575ec9d(void)

void FUN_14575ec9d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144716727(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14575ecd6 FUN_14575ecd6 body=53 status=ok
// SIG undefined FUN_14575ecd6(void)

void FUN_14575ecd6(longlong *param_1)

{
  FUN_1409c1690();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575ed0c FUN_14575ed0c body=53 status=ok
// SIG undefined FUN_14575ed0c(void)

void FUN_14575ed0c(longlong *param_1)

{
  FUN_14575ed42();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575ed42 FUN_14575ed42 body=89 status=ok
// SIG undefined FUN_14575ed42(void)

void FUN_14575ed42(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14575ed9c FUN_14575ed9c body=53 status=ok
// SIG undefined FUN_14575ed9c(void)

void FUN_14575ed9c(longlong *param_1)

{
  FUN_1409c142a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575edd2 FUN_14575edd2 body=55 status=ok
// SIG undefined FUN_14575edd2(void)

void FUN_14575edd2(longlong *param_1)

{
  FUN_1409c1236(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575ee0a FUN_14575ee0a body=55 status=ok
// SIG undefined FUN_14575ee0a(void)

void FUN_14575ee0a(longlong *param_1)

{
  FUN_1409c18b4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14575ee42 FUN_14575ee42 body=530 status=ok
// SIG undefined FUN_14575ee42(void)

void FUN_14575ee42(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x328);
  if (*(longlong *)(param_1 + 0x328) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x328);
    }
  }
  FUN_1456d172d(*(undefined8 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x260));
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    FUN_140179e18(param_1 + 600,0);
  }
  FUN_14575ec70(*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x250));
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x254) != 0) {
    FUN_1487b6720(param_1 + 0x248,0);
  }
  FUN_14575f054(param_1 + 0x1f8);
  FUN_1409c0f2d(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x1a0));
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_1402b39de(param_1 + 0x198,0);
  }
  FUN_14575ec9d(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1487b68d4(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_14481578e(param_1 + 0x98,0);
  }
  FUN_14068ded2(param_1 + 0xa8,0);
  FUN_1409c0ca4(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_145776648(param_1 + 0x78,0);
  }
  FUN_14575f094(param_1 + 0x1a8);
  FUN_14575f0d8(param_1 + 0x148);
  lVar2 = DAT_14cb7cbd0;
  if ((DAT_14cb7cbd0 != 0) && ((longlong)*(int *)(param_1 + 0x260) != 0)) {
    lVar4 = *(longlong *)(param_1 + 600);
    lVar5 = (longlong)*(int *)(param_1 + 0x260) * 0x28;
    do {
      FUN_148846b7e(lVar2,lVar4);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14575f054 FUN_14575f054 body=63 status=ok
// SIG undefined FUN_14575f054(void)

void FUN_14575f054(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14575ed42(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1409c1ac6(param_1);
    return;
  }
  FUN_1487b6790(param_1);
  FUN_14575ed42(param_1);
  return;
}



// FUNCTION 14575f094 FUN_14575f094 body=67 status=ok
// SIG undefined FUN_14575f094(void)

void FUN_14575f094(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1409c1236(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402b4c92(param_1);
    return;
  }
  FUN_1487b6904(param_1);
  FUN_1409c1236(param_1,0);
  return;
}



// FUNCTION 14575f0d8 FUN_14575f0d8 body=67 status=ok
// SIG undefined FUN_14575f0d8(void)

void FUN_14575f0d8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141464618(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402b4eec(param_1);
    return;
  }
  FUN_1487b6a48(param_1);
  FUN_141464618(param_1,0);
  return;
}



// FUNCTION 14575f11c FUN_14575f11c body=190 status=ok
// SIG undefined FUN_14575f11c(void)

void FUN_14575f11c(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_2 == -1) {
    return;
  }
  uVar1 = *(uint *)(param_3 + 0xa0);
  if (uVar1 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x400));
  uVar4 = (ulonglong)(uint)(iVar3 << 4);
  iVar2 = *(int *)(param_1 + 8 + uVar4);
  *(uint *)(param_1 + 8 + uVar4) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xc + uVar4) < iVar2 + 1U) {
    FUN_1447808da((longlong *)(param_1 + uVar4),iVar2);
  }
  *(int *)(*(longlong *)(param_1 + uVar4) + (longlong)iVar2 * 4) = param_2;
  *(undefined8 *)
   (*(longlong *)(param_1 + 0x200 + (ulonglong)(uint)(iVar3 << 4)) + (longlong)param_2 * 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014575f1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x400));
  return;
}



// FUNCTION 14575f1e8 FUN_14575f1e8 body=9 status=ok
// SIG undefined FUN_14575f1e8(void)

void FUN_14575f1e8(longlong param_1)

{
  FUN_14575f1f2(param_1 + 0x10);
  return;
}



// FUNCTION 14575f1f2 FUN_14575f1f2 body=86 status=ok
// SIG undefined FUN_14575f1f2(void)

void FUN_14575f1f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1403d9da7(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014575f244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14575f248 thunk_FUN_140b9c3d4 body=5 status=ok
// SIG undefined thunk_FUN_140b9c3d4(void)

longlong * thunk_FUN_140b9c3d4(longlong param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *plStack_38;
  longlong *plStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plStack_30 = (longlong *)FUN_14001cc68(0x80,0x10);
  plStack_30[1] = (longlong)&DAT_100000001;
  *plStack_30 = (longlong)&PTR_FUN_14b41ba60;
  plStack_38 = plStack_30 + 2;
  plStack_30[3] = 0;
  plStack_30[4] = 0;
  plStack_30[2] = (longlong)&PTR_FUN_14b417bb0;
  plStack_30[5] = *param_2;
  *(int *)(plStack_30 + 6) = (int)param_2[1];
  *(undefined4 *)((longlong)plStack_30 + 0x3c) = DAT_14c948620;
  *(undefined8 *)((longlong)plStack_30 + 0x34) = DAT_14c948618;
  *(undefined1 *)(plStack_30 + 8) = 0;
  *(undefined1 *)(plStack_30 + 0xf) = 0;
  plStack_30[0xd] = 0;
  plStack_30[0xe] = 0;
  plStack_30[0xb] = 0;
  plStack_30[0xc] = 0;
  plStack_30[9] = 0;
  plStack_30[10] = 0;
  FUN_1408241ea();
  iVar3 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar3 + 1U) {
    FUN_14082428c((longlong *)(param_1 + 0x180),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x180);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plStack_38;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (*param_3 != 0) {
    FUN_14082216c(plStack_38,param_3);
  }
  plVar6 = plStack_30;
  plVar5 = plStack_38;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575f24e FUN_14575f24e body=96 status=ok
// SIG undefined FUN_14575f24e(void)

void FUN_14575f24e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406251ee(param_1,iVar2);
    }
    FUN_140ffff67((longlong)iVar2 * 0x48 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14575f2ae FUN_14575f2ae body=125 status=ok
// SIG undefined FUN_14575f2ae(void)

void FUN_14575f2ae(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_2 != '\0') {
    FUN_1409ca648(param_1,&local_38);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_30 < 1) goto LAB_14575f300;
  }
  (**(code **)(*param_1 + 0xb48))(param_1,param_2);
LAB_14575f300:
  (**(code **)(*param_1 + 0x540))(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575f32c FUN_14575f32c body=86 status=ok
// SIG undefined FUN_14575f32c(void)

void FUN_14575f32c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14575f382 FUN_14575f382 body=58 status=ok
// SIG undefined FUN_14575f382(void)

ulonglong FUN_14575f382(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1456eda10(param_1,param_3,0);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = thunk_FUN_1409d14a4(lVar2,param_4);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 14575f3bc FUN_14575f3bc body=63 status=ok
// SIG undefined FUN_14575f3bc(void)

void FUN_14575f3bc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ca78d0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14575f3fc FUN_14575f3fc body=132 status=ok
// SIG undefined FUN_14575f3fc(void)

void FUN_14575f3fc(longlong param_1,int param_2)

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



// FUNCTION 14575f482 FUN_14575f482 body=454 status=ok
// SIG undefined FUN_14575f482(void)

void FUN_14575f482(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x4dd) == '\x01') {
    uVar3 = FUN_1403b0700();
    local_30 = 0;
    FUN_145d0a0b4(uVar3,&local_30,1);
    *(undefined4 *)(param_1 + 0xdac) = 0;
    *(undefined1 *)(param_1 + 0xdc8) = 0;
    *(undefined2 *)(param_1 + 0x6b3) = 0;
    FUN_14575f758(param_1);
    FUN_14119e5ee(param_1,1);
    *(undefined1 *)(param_1 + 0xce9) = 0;
    FUN_14119eb2c(param_1,1);
    FUN_144a7e010(param_1 + 0x728);
    *(undefined8 *)(param_1 + 0x738) = 0;
    FUN_1409da3ac(param_1,0);
    plVar2 = *(longlong **)(param_1 + 0x168);
    plVar5 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        plVar5 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar2 + 0x10b0))(plVar2);
        plVar5 = plVar2;
      }
    }
    FUN_1407934de(&local_30,param_1);
    if (local_30 != 0) {
      FUN_1409da528(local_30,plVar5,0,1);
      FUN_1409da528(local_30,plVar5,0,2);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    *(undefined8 *)(param_1 + 0xf20) = 0;
    *(undefined1 *)(param_1 + 0xf40) = 0;
    if (*(longlong *)(param_1 + 0xf78) != 0) {
      FUN_14575f64a();
    }
    FUN_1457e628e(*(undefined8 *)(param_1 + 0x1300),*(undefined4 *)(param_1 + 0x1308));
    *(undefined4 *)(param_1 + 0x1308) = 0;
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_14575f900(param_1 + 0x1300);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575f64a FUN_14575f64a body=86 status=ok
// SIG undefined FUN_14575f64a(void)

void FUN_14575f64a(longlong param_1)

{
  FUN_1411b79c1(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_14575f6a0(param_1 + 0xe0);
  }
  FUN_14575f6d0(param_1 + 0xf0);
  FUN_14575f714(param_1 + 0x40);
  return;
}



// FUNCTION 14575f6a0 FUN_14575f6a0 body=48 status=ok
// SIG undefined FUN_14575f6a0(void)

void FUN_14575f6a0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xf0,8);
  }
  return;
}



// FUNCTION 14575f6d0 FUN_14575f6d0 body=67 status=ok
// SIG undefined FUN_14575f6d0(void)

void FUN_14575f6d0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1411520e2(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_141280386(param_1);
    return;
  }
  FUN_14575f7ba(param_1);
  FUN_1411520e2(param_1,0);
  return;
}



// FUNCTION 14575f714 FUN_14575f714 body=67 status=ok
// SIG undefined FUN_14575f714(void)

void FUN_14575f714(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14115215c(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1412fc684(param_1);
    return;
  }
  FUN_14575f930(param_1);
  FUN_14115215c(param_1,0);
  return;
}



// FUNCTION 14575f758 FUN_14575f758 body=97 status=ok
// SIG undefined FUN_14575f758(void)

void FUN_14575f758(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined1 *)((longlong)param_1 + 0x4dd) = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1403c7982();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1403c7982();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014575f7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14575f7ba FUN_14575f7ba body=325 status=ok
// SIG undefined FUN_14575f7ba(void)

void FUN_14575f7ba(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
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



// FUNCTION 14575f900 FUN_14575f900 body=48 status=ok
// SIG undefined FUN_14575f900(void)

void FUN_14575f900(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14575f930 FUN_14575f930 body=338 status=ok
// SIG undefined FUN_14575f930(void)

void FUN_14575f930(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xfc + (longlong)iVar4 * 0x100) * 4) =
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



// FUNCTION 14575fa83 FUN_14575fa83 body=69 status=ok
// SIG undefined FUN_14575fa83(void)

void FUN_14575fa83(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409e15fe(puVar1);
  *puVar1 = &PTR_FUN_14b824c90;
  puVar1[6] = &PTR_FUN_14b824f50;
  puVar1[7] = &PTR_LAB_14b824fe0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 14575fac8 FUN_14575fac8 body=185 status=ok
// SIG undefined FUN_14575fac8(void)

bool FUN_14575fac8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575fb82 FUN_14575fb82 body=26 status=ok
// SIG undefined FUN_14575fb82(void)

void FUN_14575fb82(undefined8 param_1)

{
  FUN_1413d2588();
  FUN_14575fb9c(param_1);
  return;
}



// FUNCTION 14575fb9c FUN_14575fb9c body=110 status=ok
// SIG undefined FUN_14575fb9c(void)

void FUN_14575fb9c(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14140fc00();
  plVar1 = (longlong *)*plVar1;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar1 + 0x26));
  *(int *)(plVar1 + 0x25) = (int)plVar1[0x25] + 1;
  lVar2 = *plVar1;
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 2;
  if ((longlong)(int)plVar1[1] != 0) {
    lVar3 = (longlong)(int)plVar1[1] << 8;
    do {
      FUN_14575fc0a(param_1,lVar2);
      lVar2 = lVar2 + 0x100;
      lVar3 = lVar3 + -0x100;
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014575fc03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar1 + 0x26));
  return;
}



// FUNCTION 14575fc0a FUN_14575fc0a body=56 status=ok
// SIG undefined FUN_14575fc0a(void)

void FUN_14575fc0a(undefined8 param_1,undefined8 param_2)

{
  FUN_1409e49aa();
  FUN_145761a10(param_1,param_2);
  FUN_1409e454c(param_1,param_2);
  FUN_1409e24fc(param_1,param_2);
  return;
}



// FUNCTION 14575fc42 FUN_14575fc42 body=68 status=ok
// SIG undefined FUN_14575fc42(void)

void FUN_14575fc42(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  puVar1 = (undefined8 *)FUN_1409e2db8(param_1 + 0xd0);
  *puVar1 = *param_2;
  FUN_14575fdac(param_1,puVar1,param_2 + 1,param_3);
  return;
}



// FUNCTION 14575fc86 FUN_14575fc86 body=141 status=ok
// SIG undefined FUN_14575fc86(void)

undefined8 * FUN_14575fc86(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + lVar7);
      if (lVar5 != 0) {
        uVar4 = FUN_1409e3b02();
        cVar3 = FUN_1448093f4(lVar5,uVar4);
        if ((cVar3 != '\0') && (lVar5 = FUN_140aa5740(lVar5), lVar5 != 0)) {
          puVar6 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)(lVar5 + 8);
          }
          FUN_1447325ac(puVar6,param_1,1);
          return param_1;
        }
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar7);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14575fd14 FUN_14575fd14 body=150 status=ok
// SIG undefined FUN_14575fd14(void)

void FUN_14575fd14(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x208,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x208)) {
      uVar5 = uVar4 / 0x208 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x208,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14575fdac FUN_14575fdac body=313 status=ok
// SIG undefined FUN_14575fdac(void)

void FUN_14575fdac(undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_218 [40];
  undefined1 local_1f0 [8];
  undefined8 local_1e8;
  undefined1 local_1b0 [160];
  undefined1 local_110 [40];
  undefined4 local_e8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  *(undefined4 *)(param_2 + 0x48) = *param_3;
  iVar1 = FUN_1457600e2(param_1,param_2,param_4);
  *(int *)(param_2 + 0x4c) = iVar1;
  *(bool *)(param_2 + 0x50) = iVar1 != 0;
  FUN_140cf4802(local_1f0);
  FUN_14576087c(local_1f0,param_3 + 0x10);
  FUN_140c5254a(local_1f0,local_110);
  FUN_1409e2f4a(param_2 + 0x58,local_110);
  FUN_1407dde54(local_110);
  FUN_1409e3140(param_2 + 0x30,local_1b0);
  *(undefined8 *)(param_2 + 8) = local_1e8;
  if (param_4 != 0) {
    FUN_144a787a6(param_2 + 0x18,param_3 + 10);
    local_110[0] = 0;
    local_e8 = 0;
    FUN_1456bb102(local_110,param_4);
    uVar2 = FUN_14575fee6(param_3 + 0x10,local_110,0xffffffff);
    FUN_14575ffe6(param_3 + 2,param_4,uVar2,param_2 + 0x130);
    FUN_144a5ac3a(local_110);
  }
  FUN_1409e3194(local_1f0);
  if ((local_38 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575fee6 FUN_14575fee6 body=148 status=ok
// SIG undefined FUN_14575fee6(void)

undefined4 FUN_14575fee6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14049cbd6(param_2);
  uVar2 = FUN_140cbc0d8(uVar2);
  uVar3 = FUN_1447262c2(param_2);
  uVar1 = FUN_14575ff7c(param_3,uVar3);
  local_38 = uVar2;
  FUN_145760262(&local_30,param_1 + 0x20,param_2,uVar1);
  if (local_2c != '\0') {
    uVar1 = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575ff7c FUN_14575ff7c body=106 status=ok
// SIG undefined FUN_14575ff7c(void)

ulonglong FUN_14575ff7c(uint param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (((int)param_1 < 0) && (param_2 != (longlong *)0x0)) {
    uVar1 = FUN_14018b740();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14018b740();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x00014575ffe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        return uVar4;
      }
    }
  }
  return (ulonglong)param_1;
}



// FUNCTION 14575ffe6 FUN_14575ffe6 body=169 status=ok
// SIG undefined FUN_14575ffe6(void)

undefined4 FUN_14575ffe6(longlong param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar1 = FUN_14088c870(param_4,param_1 + 0x20);
  if (((char)uVar1 != '\0') && (*(char *)(param_1 + 0x30) == '\x01')) {
    if (param_2 != (longlong *)0x0) {
      uVar2 = FUN_14018b740();
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_14018b740();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if (((plVar3 != plVar4) && (param_3 < 1)) && (plVar4 != (longlong *)0x0)) {
          param_3 = (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
    }
    if (0 < param_3) {
      FUN_1409e3208(param_4,&DAT_14cb843e8,param_3);
      FUN_145760090(param_4);
    }
  }
  return uVar1;
}



// FUNCTION 145760090 FUN_145760090 body=81 status=ok
// SIG undefined FUN_145760090(void)

void FUN_145760090(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001457600d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457600e2 FUN_1457600e2 body=298 status=ok
// SIG undefined FUN_1457600e2(void)

undefined4 FUN_1457600e2(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = FUN_144a5dd5e();
  if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) {
    return 0;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30) {
    return 0;
  }
  lVar3 = *(longlong *)(param_3 + 0x3db8);
  if (lVar3 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 == 0) {
    uVar4 = FUN_141218768();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x40) = lVar5;
  }
  if (((*(longlong *)(param_1 + 0x48) == 0) && (lVar5 != 0)) && (*(longlong *)(param_1 + 0x38) != 0)
     ) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x48) = uVar4;
  }
  lVar3 = FUN_14576020c(lVar3);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x20) != 0)) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + lVar5);
      if ((*param_2 == (int)uVar4) && (param_2[1] == (int)((ulonglong)uVar4 >> 0x20))) {
        return *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + 8 + lVar5);
      }
      lVar5 = lVar5 + 0xc;
    } while ((longlong)*(int *)(lVar3 + 0x20) * 0xc != lVar5);
  }
  return 0;
}



// FUNCTION 14576020c FUN_14576020c body=86 status=ok
// SIG undefined FUN_14576020c(void)

longlong FUN_14576020c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar2 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
    do {
      lVar1 = FUN_140e44844(lVar3);
      if (lVar1 == param_2) {
        return lVar3;
      }
      lVar3 = lVar3 + 0xe8;
      lVar2 = lVar2 + -0xe8;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 145760262 FUN_145760262 body=836 status=ok
// SIG undefined FUN_145760262(void)

undefined4 *
FUN_145760262(undefined4 *param_1,longlong *param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  char local_164;
  int local_160;
  undefined1 local_15c;
  undefined4 local_158;
  char local_154;
  undefined4 local_150;
  char local_14c;
  undefined1 local_148 [4];
  undefined1 local_144;
  undefined4 local_140;
  char local_13c;
  undefined4 local_138;
  char local_134;
  undefined4 local_130;
  char local_12c;
  undefined8 local_128;
  ulonglong uStack_120;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((param_2[1] == 0) || ((int)param_2[2] + 1U < 2)) && (param_2[5] == 0)) &&
     (cVar1 = (**(code **)(*param_2 + 8))(param_2), cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_14576036c;
  }
  plVar6 = param_2 + 1;
  iVar3 = FUN_1457605a8(param_2,param_3);
  if (iVar3 < param_4) {
    iVar3 = param_4;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    bVar12 = false;
  }
  else {
    FUN_140e45f8a(&local_128,param_2 + 8);
    FUN_145761d9c(&local_130,&local_128,param_3,iVar3);
    local_13c = local_12c;
    if (local_12c == '\x01') {
      local_140 = local_130;
    }
    local_144 = 0;
    FUN_1457605f6(&local_138,iVar3,local_148,&local_140);
    bVar12 = local_134 == '\x01';
    if (bVar12) {
      *param_1 = local_138;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    FUN_140060ea8(&local_128);
  }
  if (*plVar6 == 0) {
    if (param_2[5] == 0) goto LAB_14576036c;
    iVar4 = (int)param_2[2];
  }
  else {
    iVar4 = (int)param_2[2];
    if ((0xfffffffd < iVar4 - 1U) && (param_2[5] == 0)) goto LAB_14576036c;
  }
  if (iVar4 == 0x1010) {
    lVar5 = FUN_14005ef80(plVar6);
    if (lVar5 == 0) {
      lVar5 = FUN_140cde26e(plVar6);
      if (lVar5 == 0) goto LAB_14576052a;
      local_160 = FUN_14005f6be(lVar5,param_3,0);
    }
    else {
      local_160 = FUN_14005f32a(lVar5,param_3,0);
    }
    if (local_160 < iVar3) {
      local_160 = iVar3;
    }
    local_15c = 1;
  }
  else {
    plVar6 = (longlong *)FUN_140372928(plVar6);
    if (plVar6 != (longlong *)0x0) {
      local_128 = 0;
      uStack_120 = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_128,param_5);
      lVar5 = local_128;
      lVar7 = (longlong)(int)uStack_120;
      uVar8 = 0;
      uVar11 = *param_1;
      if (lVar7 != 0) {
        lVar9 = 0;
        bVar10 = bVar12;
        do {
          bVar12 = bVar10;
          if (*(longlong *)(lVar5 + lVar9) != 0) {
            FUN_1488cefb0(&local_130,*(longlong *)(lVar5 + lVar9),param_3,iVar3);
            local_14c = local_12c;
            if (local_12c == '\x01') {
              local_150 = local_130;
            }
            if (bVar10 != false) {
              bVar12 = false;
              local_158 = uVar11;
            }
            local_154 = bVar10;
            FUN_1457605f6(&local_138,iVar3,&local_158,&local_150);
            if (local_134 != '\0') {
              bVar12 = true;
              uVar11 = local_138;
            }
          }
          lVar9 = lVar9 + 0xd0;
          bVar10 = bVar12;
        } while (lVar7 * 0xd0 - lVar9 != 0);
        uVar8 = uStack_120 & 0xffffffff;
      }
      *(bool *)(param_1 + 1) = bVar12;
      *param_1 = uVar11;
      FUN_140372266(local_128,uVar8);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
LAB_14576052a:
    local_15c = 0;
  }
  local_164 = bVar12;
  if (bVar12 == false) {
    FUN_1457605f6(&local_128,iVar3,&local_168,&local_160);
    if (local_128._4_1_ != '\x01') goto LAB_14576036c;
LAB_145760361:
    *param_1 = (undefined4)local_128;
    uVar2 = 1;
  }
  else {
    local_168 = *param_1;
    FUN_1457605f6(&local_128,iVar3,&local_168,&local_160);
    if (local_128._4_1_ != '\0') goto LAB_145760361;
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
LAB_14576036c:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457605a8 FUN_1457605a8 body=78 status=ok
// SIG undefined FUN_1457605a8(void)

undefined8 FUN_1457605a8(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if ((cVar1 != '\0') &&
     (((param_1[1] == 0 || (0xfffffffd < (int)param_1[2] - 1U)) && (param_1[5] == 0)))) {
    return 0;
  }
  uVar2 = FUN_14576067a(param_1 + 1,param_2);
  return uVar2;
}



// FUNCTION 1457605f6 FUN_1457605f6 body=132 status=ok
// SIG undefined FUN_1457605f6(void)

void FUN_1457605f6(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  bVar3 = *(byte *)(param_4 + 1);
  if ((char)param_3[1] == '\0') {
    *(byte *)(param_1 + 1) = bVar3;
    if (bVar3 != 0) {
      *param_1 = *param_4;
    }
    goto LAB_145760614;
  }
  if (bVar3 == 0) {
    *(char *)(param_1 + 1) = (char)param_3[1];
    iVar7 = *param_3;
LAB_14576066c:
    *param_1 = iVar7;
  }
  else {
    iVar1 = *param_3;
    uVar6 = iVar1 - param_2;
    uVar8 = -uVar6;
    if ((int)uVar8 < 0) {
      uVar8 = uVar6;
    }
    iVar7 = *param_4;
    uVar4 = iVar7 - param_2;
    uVar6 = -uVar4;
    if ((int)uVar6 < 0) {
      uVar6 = uVar4;
    }
    piVar5 = param_4;
    if (uVar8 < uVar6) {
      piVar5 = param_3;
    }
    iVar2 = piVar5[1];
    *(char *)(param_1 + 1) = (char)iVar2;
    if ((char)iVar2 == '\x01') {
      if (uVar8 < uVar6) {
        iVar7 = iVar1;
      }
      goto LAB_14576066c;
    }
  }
  *(undefined1 *)(param_3 + 1) = 0;
  bVar3 = *(byte *)(param_4 + 1);
LAB_145760614:
  if ((bVar3 & 1) != 0) {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  return;
}



// FUNCTION 14576067a FUN_14576067a body=304 status=ok
// SIG undefined FUN_14576067a(void)

int FUN_14576067a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 8) == 0x1010) {
    lVar3 = FUN_14005ef80(param_1);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    lVar3 = FUN_140cde26e(param_1);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  else {
    plVar4 = (longlong *)FUN_140372928(param_1);
    if (plVar4 != (longlong *)0x0) {
      local_48 = 0;
      uStack_40 = 0;
      uVar7 = 0;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48,0);
      lVar3 = local_48;
      lVar5 = (longlong)(int)uStack_40;
      if (lVar5 == 0) {
        iVar6 = 0;
      }
      else {
        lVar8 = 0;
        iVar6 = 0;
        do {
          if (*(longlong *)(lVar3 + lVar8) != 0) {
            iVar2 = FUN_14005ff6c(*(longlong *)(lVar3 + lVar8),param_2,0);
            iVar1 = iVar6;
            if (iVar2 < iVar6) {
              iVar1 = iVar2;
            }
            bVar9 = iVar6 == 0;
            iVar6 = iVar1;
            if (bVar9) {
              iVar6 = iVar2;
            }
          }
          lVar8 = lVar8 + 0xd0;
        } while (lVar5 * 0xd0 - lVar8 != 0);
        uVar7 = (int)uStack_40;
      }
      FUN_140372266(local_48,uVar7);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1457607b4;
    }
  }
  iVar6 = 0;
LAB_1457607b4:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 1457607de FUN_1457607de body=158 status=ok
// SIG undefined FUN_1457607de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457607de(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x78;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e08];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x78,4);
  }
  iVar2 = (int)(uVar1 / 0xc);
  iVar3 = 0x7fffffff;
  if (9 < iVar2) {
    iVar3 = iVar2;
  }
  FUN_1446f8d3c(&DAT_14cbd5898,0,iVar3,0xc,4);
  _DAT_14cbd58a4 = iVar3;
  return;
}



// FUNCTION 14576087c FUN_14576087c body=3330 status=ok
// SIG undefined FUN_14576087c(void)

void FUN_14576087c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  code ***pppcVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_208 [40];
  longlong *local_1e0;
  longlong *local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  undefined4 *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  code *local_198;
  longlong *local_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  ulonglong uStack_170;
  code **local_160;
  code *local_158;
  code ***local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 uStack_128;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar10 = (**(code **)(*(longlong *)(param_2 + 0x20) + 8))(param_2 + 0x20);
  if (cVar10 == '\0') {
    plVar1 = (longlong *)(param_2 + 0x28);
    cVar10 = FUN_1457615a8(plVar1);
    if (((cVar10 == '\0') && ((code *)*plVar1 != (code *)0x0)) &&
       (iVar2 = *(int *)(param_2 + 0x30), iVar2 - 1U < 0xfffffffe)) {
      if (iVar2 == 0x1010) {
        FUN_140cde26e(plVar1);
        FUN_14005ef80(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
      }
      if (iVar2 == 0x1030) {
        local_158 = (code *)*plVar1;
        FUN_1446dcdd4(&local_148);
        lVar13 = FUN_146554086(&local_148);
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        if (lVar13 != 0) {
          local_178 = 0;
          uStack_170 = 0;
          uVar14 = FUN_1488ceda0(lVar13);
          FUN_148dc77c4(uVar14,&local_178);
          if ((longlong)(int)uStack_170 == 0) {
            uVar20 = 0;
          }
          else {
            local_1b8 = (longlong)(int)uStack_170 * 0xc0 + local_178;
            local_1e0 = (longlong *)(param_1 + 0x10);
            local_1d0 = (undefined8 *)(param_1 + 0x58);
            local_1c0 = (undefined4 *)(param_1 + 0x60);
            local_1c8 = param_1 + 0x70;
            local_1d8 = (longlong *)(param_1 + 8);
            lVar13 = local_178;
            do {
              lVar15 = FUN_1488cecfe(lVar13);
              lVar16 = FUN_1488ced08(lVar13);
              if (lVar16 == 0 || lVar15 != 0) {
                if (lVar16 != 0) goto LAB_145760d78;
                if (lVar15 == 0) break;
LAB_145760fd5:
                local_148 = (void *)0x0;
                iVar2 = *(int *)(lVar15 + 0x410);
                pvVar3 = *(void **)(lVar15 + 0x408);
                uStack_140 = CONCAT44(uStack_140._4_4_,iVar2);
                if ((longlong)iVar2 != 0) {
                  FUN_140c7c212(&local_148,iVar2,0);
                  memcpy(local_148,pvVar3,(longlong)iVar2 << 3);
                  pvVar3 = local_148;
                  lVar17 = (longlong)(int)uStack_140;
                  if (lVar17 == 0) {
                    lVar16 = 0;
                  }
                  else {
                    lVar18 = 0;
                    do {
                      uVar14 = *(undefined8 *)((longlong)pvVar3 + lVar18);
                      lVar16 = FUN_14087df18(uVar14);
                      if ((lVar16 != 0) && (lVar16 = FUN_14087df18(uVar14), lVar16 != 0))
                      goto LAB_145761077;
                      lVar18 = lVar18 + 8;
                    } while (lVar17 * 8 != lVar18);
                    lVar16 = 0;
                  }
LAB_145761077:
                  if (local_148 != (void *)0x0) {
                    FUN_1400020a8(local_148);
                  }
                  if (lVar16 != 0) goto LAB_145760d95;
                }
              }
              else {
                lVar15 = *(longlong *)(lVar16 + 0x30);
LAB_145760d78:
                lVar16 = FUN_14087df18(lVar16);
                if (lVar15 == 0) break;
                if (lVar16 == 0) goto LAB_145760fd5;
LAB_145760d95:
                lVar17 = *(longlong *)(param_1 + 0x18);
                if (lVar17 == 0) {
                  uVar14 = FUN_140c5407a();
                  lVar17 = FUN_14477b664(uVar14);
                  *(longlong *)(param_1 + 0x18) = lVar17;
                }
                if (*(longlong *)(param_1 + 0x20) == 0) {
                  if ((lVar17 != 0) && (*local_1e0 != 0)) {
                    plVar1 = *(longlong **)(lVar17 + 0xb8);
                    if ((plVar1 == (longlong *)0x0) ||
                       (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
                      *(undefined8 *)(param_1 + 0x20) = 0;
                    }
                    else {
                      uVar14 = (**(code **)(*plVar1 + 0x110))(plVar1);
                      lVar17 = FUN_144aff482(uVar14,local_1e0);
                      *(longlong *)(param_1 + 0x20) = lVar17;
                      if (lVar17 != 0) goto LAB_145760dba;
                    }
                  }
                  lVar17 = FUN_145761a08();
                  if (lVar17 != 0) {
                    FUN_1400021e4(lVar16 + 0x1c,&local_188);
                    FUN_1400b22c2(&local_198,"Reward_");
                    FUN_1401c7f3e(&local_158,&local_198);
                    FUN_14000bbd8(&local_148,&local_158);
                    lVar16 = thunk_FUN_144837462(lVar17,&local_148);
                    if (local_130 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_158 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_198 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_188 != 0) {
                      FUN_1400020a8();
                    }
                    if (lVar16 != 0) {
                      if (*(longlong *)(param_1 + 0x18) == 0) {
                        uVar14 = FUN_140c5407a();
                        uVar14 = FUN_14477b664(uVar14);
                        *(undefined8 *)(param_1 + 0x18) = uVar14;
                      }
                      lVar17 = FUN_140c5407a();
                      uVar14 = FUN_140c5407a();
                      FUN_1402d1bfa(&local_148,uVar14);
                      if ((void *)*local_1e0 != local_148) {
                        *(undefined8 *)(param_1 + 0x20) = 0;
                      }
                      *local_1e0 = (longlong)local_148;
                      lVar18 = FUN_140c5407a();
                      if (lVar17 == 0) {
LAB_14576122a:
                        lVar18 = lVar17;
                      }
                      else if (lVar18 == 0) {
                        lVar18 = 0;
                      }
                      else if ((*(int *)(lVar18 + 0x38) <= *(int *)(lVar17 + 0x38)) &&
                              (*(longlong *)
                                (*(longlong *)(lVar17 + 0x30) +
                                (longlong)*(int *)(lVar18 + 0x38) * 8) == lVar18 + 0x30))
                      goto LAB_14576122a;
                      if (*(longlong *)(param_1 + 0x18) != lVar18) {
                        *(undefined8 *)(param_1 + 0x20) = 0;
                      }
                      uVar14 = FUN_14477b664(lVar18);
                      lVar17 = FUN_14477b664(uVar14);
                      *(longlong *)(param_1 + 0x18) = lVar17;
                      if ((lVar17 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
                        *(longlong *)(param_1 + 0x20) = lVar16;
                      }
                    }
                  }
                }
              }
LAB_145760dba:
              lVar17 = FUN_14001d26e(lVar15);
              lVar16 = DAT_14cb8d358;
              if (lVar17 == 0) break;
              if (DAT_14cb8d358 != 0) {
                lVar15 = FUN_14001d26e(lVar15);
                puVar19 = *(undefined4 **)(lVar15 + 8);
                if (puVar19 == (undefined4 *)0x0) {
                  puVar19 = &DAT_14c9485f0;
                }
                FUN_141710b0e(puVar19,&local_158);
                FUN_14000bbd8(&local_148,&local_158);
                lVar15 = FUN_144837462(lVar16,&local_148);
                if (local_130 != 0) {
                  FUN_1400020a8();
                }
                if (local_158 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (lVar15 != 0) {
                  if (*(longlong *)(lVar15 + 0x18) == 0) break;
                  lVar17 = FUN_14090ae24(local_1d0);
                  if (lVar17 == 0) {
                    *local_1d0 = *(undefined8 *)(lVar15 + 0x30);
                    uVar5 = *(undefined4 *)(lVar15 + 0x3c);
                    uVar6 = *(undefined4 *)(lVar15 + 0x40);
                    uVar7 = *(undefined4 *)(lVar15 + 0x44);
                    *local_1c0 = *(undefined4 *)(lVar15 + 0x38);
                    local_1c0[1] = uVar5;
                    local_1c0[2] = uVar6;
                    local_1c0[3] = uVar7;
                    FUN_144a787a6(local_1c8,lVar15 + 0x48);
                  }
                  if (*local_1d8 == 0) {
                    *local_1d8 = *(longlong *)(lVar15 + 0x18);
                    lVar16 = *(longlong *)(lVar15 + 0x60);
                    if (lVar16 == 0) {
                      uVar14 = FUN_145c20674();
                      lVar16 = FUN_14477b664(uVar14);
                      *(longlong *)(lVar15 + 0x60) = lVar16;
                    }
                    lVar17 = *(longlong *)(lVar15 + 0x68);
                    if (lVar17 == 0) {
                      if (lVar16 == 0) {
                        lVar17 = 0;
                      }
                      else {
                        lVar17 = 0;
                        if (*(longlong *)(lVar15 + 0x58) != 0) {
                          plVar1 = *(longlong **)(lVar16 + 0xb8);
                          if ((plVar1 == (longlong *)0x0) ||
                             (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
                            lVar17 = 0;
                          }
                          else {
                            uVar14 = (**(code **)(*plVar1 + 0x110))(plVar1);
                            lVar17 = FUN_144aff482(uVar14,(longlong *)(lVar15 + 0x58));
                          }
                          *(longlong *)(lVar15 + 0x68) = lVar17;
                        }
                      }
                    }
                    uVar14 = FUN_140c54336();
                    cVar10 = FUN_1448093f4(lVar17,uVar14);
                    if (cVar10 == '\0') {
                      lVar17 = 0;
                    }
                    if (*(longlong *)(param_1 + 0x48) == 0) {
                      uVar14 = FUN_140c54336();
                      uVar14 = FUN_14477b664(uVar14);
                      *(undefined8 *)(param_1 + 0x48) = uVar14;
                    }
                    lVar16 = FUN_140c54336();
                    uVar14 = FUN_140c54336();
                    FUN_1402d1bfa(&local_148,uVar14);
                    if (*(void **)(param_1 + 0x40) != local_148) {
                      *(undefined8 *)(param_1 + 0x50) = 0;
                    }
                    *(void **)(param_1 + 0x40) = local_148;
                    lVar18 = FUN_140c54336();
                    if (lVar16 == 0) {
LAB_145761328:
                      lVar18 = lVar16;
                    }
                    else if (lVar18 == 0) {
                      lVar18 = 0;
                    }
                    else if ((*(int *)(lVar18 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8)
                             == lVar18 + 0x30)) goto LAB_145761328;
                    if (*(longlong *)(param_1 + 0x48) != lVar18) {
                      *(undefined8 *)(param_1 + 0x50) = 0;
                    }
                    uVar14 = FUN_14477b664(lVar18);
                    lVar16 = FUN_14477b664(uVar14);
                    *(longlong *)(param_1 + 0x48) = lVar16;
                    if ((lVar16 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
                      *(longlong *)(param_1 + 0x50) = lVar17;
                    }
                    plVar1 = *(longlong **)(lVar15 + 0x20);
                    plVar4 = *(longlong **)(param_1 + 0xb8);
                    if (plVar4 != plVar1) {
                      *(longlong **)(param_1 + 0xb8) = plVar1;
                      if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 8))();
                      }
                      if (plVar4 != (longlong *)0x0) {
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                      }
                    }
                    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar15 + 0x28);
                  }
                  else {
                    uVar11 = FUN_14474cf0e(lVar15 + 0x18,local_1d8);
                    local_188 = 0;
                    uStack_180 = 0;
                    if (DAT_14caa8580 == 0) {
                      FUN_140608a9e();
                    }
                    FUN_140c54370(DAT_14caa8580,lVar15 + 0x18);
                    if ((0 < (int)uVar11) && ((int)uVar11 <= (int)uStack_180)) {
                      local_148 = (void *)0x0;
                      uStack_140 = 0;
                      local_138 = 0;
                      local_130 = 0;
                      uStack_128 = 0;
                      uVar20 = 0;
                      do {
                        FUN_1402b5374(&local_148,uVar20 & 0xffffffff,
                                      *(undefined8 *)(local_188 + uVar20 * 8));
                        uVar20 = uVar20 + 1;
                      } while (uVar11 != uVar20);
                      if (DAT_14caa8580 == 0) {
                        FUN_140608a9e();
                      }
                      lVar15 = DAT_14caa8580;
                      FUN_1447325ac(&local_148,&local_1a8,1);
                      FUN_1400702d4(lVar15,&local_1a0,local_1a8,0);
                      if (local_1a0 != 0) {
                        *(longlong *)(param_1 + 8) = local_1a0;
                        local_190 = &local_1b0;
                        local_198 = FUN_1442180d8;
                        local_160 = &local_198;
                        local_150 = &local_160;
                        local_158 = FUN_148dd2668;
                        local_1b0 = param_1;
                        FUN_148dd23a8(lVar16,&local_158);
                      }
                      if (local_130 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    if (local_188 != 0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
              lVar13 = lVar13 + 0xc0;
            } while (lVar13 != local_1b8);
            uVar20 = uStack_170 & 0xffffffff;
          }
          FUN_1404858e9(local_178,uVar20);
          if (local_178 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    goto LAB_145760c61;
  }
  FUN_140e45f8a(&local_148,param_2 + 0x60);
  uVar14 = FUN_1488ccbe0(uStack_140);
  uVar12 = thunk_FUN_1402735c8();
  lVar15 = FUN_14431da7c(uVar12,uVar14);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar15 + 0x18);
  lVar13 = *(longlong *)(lVar15 + 0x60);
  if (lVar13 == 0) {
    uVar14 = FUN_145c20674();
    lVar13 = FUN_14477b664(uVar14);
    *(longlong *)(lVar15 + 0x60) = lVar13;
  }
  lVar16 = *(longlong *)(lVar15 + 0x68);
  if (((lVar16 == 0) && (lVar16 = 0, lVar13 != 0)) && (*(longlong *)(lVar15 + 0x58) != 0)) {
    plVar1 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
      lVar16 = 0;
    }
    else {
      uVar14 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar16 = FUN_144aff482(uVar14,(longlong *)(lVar15 + 0x58));
    }
    *(longlong *)(lVar15 + 0x68) = lVar16;
  }
  uVar14 = FUN_140c54336();
  cVar10 = FUN_1448093f4(lVar16,uVar14);
  lVar13 = 0;
  if (cVar10 != '\0') {
    lVar13 = lVar16;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar14 = FUN_140c54336();
    uVar14 = FUN_14477b664(uVar14);
    *(undefined8 *)(param_1 + 0x48) = uVar14;
  }
  lVar16 = FUN_140c54336();
  uVar14 = FUN_140c54336();
  FUN_1402d1bfa(&local_158,uVar14,lVar13);
  if (*(code **)(param_1 + 0x40) != local_158) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(code **)(param_1 + 0x40) = local_158;
  lVar17 = FUN_140c54336();
  if (lVar16 == 0) {
LAB_145760a3a:
    lVar17 = lVar16;
  }
  else if (lVar17 == 0) {
    lVar17 = 0;
  }
  else if ((*(int *)(lVar17 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
           lVar17 + 0x30)) goto LAB_145760a3a;
  if (*(longlong *)(param_1 + 0x48) != lVar17) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar14 = FUN_14477b664(lVar17);
  lVar16 = FUN_14477b664(uVar14);
  *(longlong *)(param_1 + 0x48) = lVar16;
  if ((lVar16 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    *(longlong *)(param_1 + 0x50) = lVar13;
  }
  plVar1 = *(longlong **)(lVar15 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar15 + 0x28);
  uVar14 = FUN_1488ccbe0(local_130);
  uVar12 = thunk_FUN_1402735c8();
  FUN_14431df10(uVar12,&local_158,uVar14);
  pcVar8 = local_158;
  if (local_158 != (code *)0x0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar14 = FUN_140c5407a();
      uVar14 = FUN_14477b664(uVar14);
      *(undefined8 *)(param_1 + 0x18) = uVar14;
    }
    lVar13 = FUN_140c5407a();
    uVar14 = FUN_140c5407a();
    FUN_1402d1bfa(&local_178,uVar14,pcVar8);
    if (*(longlong *)(param_1 + 0x10) != local_178) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(longlong *)(param_1 + 0x10) = local_178;
    lVar15 = FUN_140c5407a();
    if (lVar13 == 0) {
LAB_145760b5c:
      lVar15 = lVar13;
    }
    else if (lVar15 == 0) {
      lVar15 = 0;
    }
    else if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
             lVar15 + 0x30)) goto LAB_145760b5c;
    if (*(longlong *)(param_1 + 0x18) != lVar15) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    uVar14 = FUN_14477b664(lVar15);
    lVar13 = FUN_14477b664(uVar14);
    *(longlong *)(param_1 + 0x18) = lVar13;
    if ((lVar13 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      *(code **)(param_1 + 0x20) = pcVar8;
    }
  }
  pppcVar9 = local_150;
  if (local_150 != (code ***)0x0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar14 = FUN_140c5407a();
      uVar14 = FUN_14477b664(uVar14);
      *(undefined8 *)(param_1 + 0x30) = uVar14;
    }
    lVar13 = FUN_140c5407a();
    uVar14 = FUN_140c5407a();
    FUN_1402d1bfa(&local_178,uVar14,pppcVar9);
    if (*(longlong *)(param_1 + 0x28) != local_178) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    *(longlong *)(param_1 + 0x28) = local_178;
    lVar15 = FUN_140c5407a();
    if (lVar13 == 0) {
LAB_145760c1f:
      lVar15 = lVar13;
    }
    else if (lVar15 == 0) {
      lVar15 = 0;
    }
    else if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
             lVar15 + 0x30)) goto LAB_145760c1f;
    if (*(longlong *)(param_1 + 0x30) != lVar15) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    uVar14 = FUN_14477b664(lVar15);
    lVar13 = FUN_14477b664(uVar14);
    *(longlong *)(param_1 + 0x30) = lVar13;
    if ((lVar13 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      *(code ****)(param_1 + 0x38) = pppcVar9;
    }
  }
  FUN_140060ea8(&local_148);
LAB_145760c61:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457615a8 FUN_1457615a8 body=4 status=ok
// SIG undefined FUN_1457615a8(void)

undefined1 FUN_1457615a8(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



// FUNCTION 1457615ac FUN_1457615ac body=1108 status=ok
// SIG undefined FUN_1457615ac(void)

void FUN_1457615ac(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [3];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_1457618f5;
    lVar7 = FUN_14087e00e(param_3);
LAB_1457615f5:
    lVar8 = FUN_14001d26e(param_3);
    puVar12 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
      puVar12 = *(undefined4 **)(lVar8 + 8);
    }
  }
  else {
    lVar7 = FUN_14087df18(param_2);
    param_3 = *(longlong *)(param_2 + 0x30);
    if (param_3 != 0) goto LAB_1457615f5;
    puVar12 = (undefined4 *)0x0;
  }
  if (lVar7 != 0) {
    lVar8 = FUN_145761a08();
    if (lVar8 != 0) {
      FUN_1400021e4(lVar7 + 0x1c,local_80);
      FUN_1400b22c2(local_90,"Reward_");
      FUN_1401c7f3e(local_70,local_90,local_80);
      FUN_14000bbd8(local_60,local_70,0);
      lVar7 = thunk_FUN_144837462(lVar8,local_60);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar7 != 0) {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          uVar9 = FUN_140c5407a();
          uVar9 = FUN_14477b664(uVar9);
          *(undefined8 *)(param_1 + 0x18) = uVar9;
        }
        lVar8 = FUN_140c5407a();
        uVar9 = FUN_140c5407a();
        FUN_1402d1bfa(local_60,uVar9,lVar7);
        if (*(longlong *)(param_1 + 0x10) != local_60[0]) {
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        *(longlong *)(param_1 + 0x10) = local_60[0];
        lVar10 = FUN_140c5407a();
        if (lVar8 == 0) {
LAB_145761742:
          lVar10 = lVar8;
        }
        else if (lVar10 == 0) {
          lVar10 = 0;
        }
        else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                 == lVar10 + 0x30)) goto LAB_145761742;
        if (*(longlong *)(param_1 + 0x18) != lVar10) {
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        uVar9 = FUN_14477b664(lVar10);
        lVar8 = FUN_14477b664(uVar9);
        *(longlong *)(param_1 + 0x18) = lVar8;
        if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
          *(longlong *)(param_1 + 0x20) = lVar7;
        }
      }
    }
  }
  if ((puVar12 == (undefined4 *)0x0) || (DAT_14cb8d358 == 0)) goto LAB_1457618f5;
  lVar7 = FUN_144837462(DAT_14cb8d358,puVar12);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x18) == 0)) goto LAB_1457618f5;
  lVar8 = FUN_14090ae24(param_1 + 0x58);
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar7 + 0x30);
    uVar3 = *(undefined4 *)(lVar7 + 0x3c);
    uVar4 = *(undefined4 *)(lVar7 + 0x40);
    uVar5 = *(undefined4 *)(lVar7 + 0x44);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar7 + 0x38);
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    FUN_144a787a6(param_1 + 0x70,lVar7 + 0x48);
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar7 + 0x18);
  lVar8 = *(longlong *)(lVar7 + 0x60);
  if (lVar8 == 0) {
    uVar9 = FUN_145c20674();
    lVar8 = FUN_14477b664(uVar9);
    *(longlong *)(lVar7 + 0x60) = lVar8;
  }
  lVar10 = *(longlong *)(lVar7 + 0x68);
  if (((lVar10 == 0) && (lVar10 = 0, lVar8 != 0)) && (*(longlong *)(lVar7 + 0x58) != 0)) {
    plVar1 = *(longlong **)(lVar8 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1457619f9:
      lVar10 = 0;
    }
    else {
      cVar6 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar6 == '\0') goto LAB_1457619f9;
      uVar9 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar7 + 0x58));
    }
    *(longlong *)(lVar7 + 0x68) = lVar10;
  }
  uVar9 = FUN_140c54336();
  cVar6 = FUN_1448093f4(lVar10,uVar9);
  lVar8 = 0;
  if (cVar6 != '\0') {
    lVar8 = lVar10;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar9 = FUN_140c54336();
    uVar9 = FUN_14477b664(uVar9);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
  }
  lVar10 = FUN_140c54336();
  uVar9 = FUN_140c54336();
  FUN_1402d1bfa(local_60,uVar9,lVar8);
  if (*(longlong *)(param_1 + 0x40) != local_60[0]) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = local_60[0];
  lVar11 = FUN_140c54336();
  if (lVar10 == 0) {
LAB_14576188b:
    lVar11 = lVar10;
  }
  else if (lVar11 == 0) {
    lVar11 = 0;
  }
  else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
           lVar11 + 0x30)) goto LAB_14576188b;
  if (*(longlong *)(param_1 + 0x48) != lVar11) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar9 = FUN_14477b664(lVar11);
  lVar10 = FUN_14477b664(uVar9);
  *(longlong *)(param_1 + 0x48) = lVar10;
  if ((lVar10 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    *(longlong *)(param_1 + 0x50) = lVar8;
  }
  plVar1 = *(longlong **)(lVar7 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar7 + 0x28);
LAB_1457618f5:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145761a02 thunk_FUN_144837462 body=5 status=ok
// SIG undefined thunk_FUN_144837462(void)

undefined8 thunk_FUN_144837462(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) == 0) ||
       ((int)param_1[0x3a] <= *(int *)((longlong)param_1 + 0x1fc))) {
LAB_144837614:
      lVar7 = FUN_144837648(param_1,param_2,1);
      if (lVar7 == 0) {
        return 0;
      }
      FUN_14012a344(param_1,lVar7,0);
      puVar8 = (undefined8 *)(lVar7 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar4 == '\0') goto LAB_144837614;
  }
  puVar6 = (uint *)&DAT_14c948618;
  if (((*param_2 != 0) && (0 < param_2[1])) && (*param_2 != DAT_14c948000)) {
    puVar6 = (uint *)(param_2 + 2);
    if (0 < param_2[9]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
    if (1 < (uint)param_2[1]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
  }
  uVar2 = *puVar6;
  uVar3 = puVar6[2];
  uVar5 = uVar2;
  if (uVar3 != 0) {
    uVar5 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
    uVar12 = uVar9 >> 0xd ^ (uVar3 - uVar5) - uVar9;
    uVar5 = uVar12 >> 0xc ^ (uVar5 - uVar9) - uVar12;
    uVar14 = uVar5 << 0x10 ^ (uVar9 - uVar12) - uVar5;
    uVar9 = uVar14 >> 5 ^ (uVar12 - uVar5) - uVar14;
    uVar12 = uVar9 >> 3 ^ (uVar5 - uVar14) - uVar9;
    uVar5 = uVar12 << 10 ^ (uVar14 - uVar9) - uVar12;
    uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar12 + uVar5);
  }
  if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
    plVar10 = param_1 + 0x40;
    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x41];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar7 = param_1[0x39];
      while ((lVar13 = (longlong)iVar11 * 0x20, *(uint *)(lVar7 + lVar13) != uVar2 ||
             (lVar1 = lVar7 + lVar13, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar11 = *(int *)(lVar7 + 0x18 + lVar13);
        if (iVar11 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar8 = (undefined8 *)(lVar1 + 0x10);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar8;
    }
  }
  return 0;
}



// FUNCTION 145761a08 FUN_145761a08 body=8 status=ok
// SIG undefined FUN_145761a08(void)

undefined8 FUN_145761a08(void)

{
  return DAT_14cb8d338;
}



// FUNCTION 145761a10 FUN_145761a10 body=906 status=ok
// SIG undefined FUN_145761a10(void)

void FUN_145761a10(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 *local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_80 [2];
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = FUN_141356c7a(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar6 = FUN_144a7b4ca();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      lVar6 = *(longlong *)(param_2 + 0x40);
      if (lVar6 == 0) {
        uVar7 = FUN_141218768();
        lVar6 = FUN_14477b664(uVar7);
        *(longlong *)(param_2 + 0x40) = lVar6;
      }
      lVar10 = *(longlong *)(param_2 + 0x48);
      if (lVar10 == 0) {
        if ((lVar6 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) goto LAB_145761cb6;
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(param_2 + 0x48) = 0;
          goto LAB_145761cb6;
        }
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar10 = FUN_144aff482(uVar7,(longlong *)(param_2 + 0x38));
        *(longlong *)(param_2 + 0x48) = lVar10;
        if (lVar10 == 0) goto LAB_145761cb6;
      }
      lVar6 = FUN_140e448c6(lVar10);
      if (lVar6 != 0) {
        iVar4 = FUN_1409e483c(lVar5,lVar6);
        uVar7 = FUN_140d72879();
        uVar8 = FUN_140d72a52(uVar7,lVar6,iVar4);
        uVar9 = FUN_1409e4972(lVar5,lVar6);
        lVar5 = FUN_1409e498e(lVar5,lVar6);
        uVar11 = 0;
        if (uVar8 <= uVar9) {
          uVar11 = uVar9 - uVar8;
        }
        fVar12 = 0.0;
        if (lVar5 - uVar8 != 0) {
          fVar12 = ((float)uVar11 / (float)(lVar5 - uVar8)) * 100.0;
        }
        FUN_144a5dc74(&local_c0);
        FUN_140ac6c96(&DAT_14cbd8af0,&local_c0);
        FUN_14023409e(&local_e0,&local_c0,1);
        local_a0 = local_80;
        local_80[0] = 0;
        local_70 = (longlong *)0x0;
        local_68 = 0;
        local_98 = local_60;
        local_78 = (longlong)iVar4;
        FUN_14010d304(&local_90);
        local_b0 = local_e0;
        local_a8 = local_d8;
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_d0,&local_b0,&local_90);
        FUN_14007f2db(local_90,local_88);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        if (local_70 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x10))();
        }
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_d8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d8 + 0x10))(local_d8);
            }
          }
        }
        FUN_140008f88(&local_c0,local_d0);
        if (local_d0[0] != (longlong *)0x0) {
          (**(code **)(*local_d0[0] + 0x10))();
        }
        *(longlong *)(param_2 + 0x68) = (longlong)iVar4;
        plVar2 = *(longlong **)(param_2 + 0x70);
        if (plVar2 != local_c0) {
          *(longlong **)(param_2 + 0x70) = local_c0;
          if (local_c0 != (longlong *)0x0) {
            (**(code **)(*local_c0 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        if (100.0 <= fVar12) {
          fVar12 = 100.0;
        }
        *(undefined4 *)(param_2 + 0x78) = local_b8;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        *(float *)(param_2 + 0x80) = fVar12;
        *(ulonglong *)(param_2 + 0x88) = uVar11;
        *(ulonglong *)(param_2 + 0x90) = lVar5 - uVar8;
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
      }
    }
  }
LAB_145761cb6:
  if ((local_60[0] ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


