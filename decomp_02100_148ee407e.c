// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ee407e FUN_148ee407e body=29 status=ok
// SIG undefined FUN_148ee407e(void)

undefined8 FUN_148ee407e(longlong param_1,undefined8 param_2)

{
  FUN_148ee409c(param_2,param_1 + 0x70);
  return param_2;
}



// FUNCTION 148ee409c FUN_148ee409c body=698 status=ok
// SIG undefined FUN_148ee409c(void)

undefined8 * FUN_148ee409c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  void *_Src;
  ulonglong uVar2;
  
  cVar1 = FUN_144a23846(param_2,&DAT_14cbe34a0);
  if (cVar1 == '\0') {
    cVar1 = FUN_144a23846(param_2,&DAT_14cbe34b0);
    if (cVar1 == '\0') {
      cVar1 = FUN_144a23846(param_2,&DAT_14cbe34c0);
      if (cVar1 == '\0') {
        cVar1 = FUN_144a23846(param_2,&DAT_14cbe34d0);
        if (cVar1 == '\0') {
          cVar1 = FUN_144a23846(param_2,&DAT_14cbe34e0);
          if (cVar1 == '\0') {
            cVar1 = FUN_144a23846(param_2,&DAT_14cbe3500);
            if (cVar1 == '\0') {
              cVar1 = FUN_144a23846(param_2,&DAT_14cbe34f0);
              if (cVar1 == '\0') {
                cVar1 = FUN_144a23846(param_2,&DAT_14cbe3510);
                if (cVar1 == '\0') {
                  cVar1 = FUN_144a23846(param_2,&DAT_14cbe3520);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_144a23846(param_2,&DAT_14cbe3530);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_144a23846(param_2,&DAT_14cbe3540);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_144a23846(param_2,&DAT_14cbe3550);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_144a23846(param_2,&DAT_14cbe3560);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_144a23846(param_2,&DAT_14cbe3570);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_144a23846(param_2,&DAT_14cbe3590);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_144a23846(param_2,&DAT_14cbe3580);
                                *param_1 = 0;
                                if (cVar1 == '\0') {
                                  uVar2 = (ulonglong)DAT_14cbe3208;
                                  _Src = DAT_14cbe3200;
                                }
                                else {
                                  uVar2 = (ulonglong)DAT_14cbe3468;
                                  _Src = DAT_14cbe3460;
                                }
                              }
                              else {
                                *param_1 = 0;
                                uVar2 = (ulonglong)DAT_14cbe3478;
                                _Src = DAT_14cbe3470;
                              }
                              goto LAB_148ee40d1;
                            }
                          }
                        }
                      }
                    }
                    *param_1 = 0;
                    uVar2 = (ulonglong)DAT_14cbe3458;
                    _Src = DAT_14cbe3450;
                  }
                  else {
                    *param_1 = 0;
                    uVar2 = (ulonglong)DAT_14cbe3428;
                    _Src = DAT_14cbe3420;
                  }
                }
                else {
                  *param_1 = 0;
                  uVar2 = (ulonglong)DAT_14cbe3448;
                  _Src = DAT_14cbe3440;
                }
              }
              else {
                *param_1 = 0;
                uVar2 = (ulonglong)DAT_14cbe3438;
                _Src = DAT_14cbe3430;
              }
            }
            else {
              *param_1 = 0;
              uVar2 = (ulonglong)DAT_14cbe3488;
              _Src = DAT_14cbe3480;
            }
          }
          else {
            *param_1 = 0;
            uVar2 = (ulonglong)DAT_14cbe33f8;
            _Src = DAT_14cbe33f0;
          }
        }
        else {
          *param_1 = 0;
          uVar2 = (ulonglong)DAT_14cbe3418;
          _Src = DAT_14cbe3410;
        }
      }
      else {
        *param_1 = 0;
        uVar2 = (ulonglong)DAT_14cbe3408;
        _Src = DAT_14cbe3400;
      }
    }
    else {
      *param_1 = 0;
      uVar2 = (ulonglong)DAT_14cbe33e8;
      _Src = DAT_14cbe33e0;
    }
  }
  else {
    *param_1 = 0;
    uVar2 = (ulonglong)DAT_14cbe33d8;
    _Src = DAT_14cbe33d0;
  }
LAB_148ee40d1:
  *(int *)(param_1 + 1) = (int)uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,uVar2 & 0xffffffff,0);
    memcpy((void *)*param_1,_Src,uVar2 * 2);
  }
  return param_1;
}



// FUNCTION 148ee4356 FUN_148ee4356 body=698 status=ok
// SIG undefined FUN_148ee4356(void)

undefined8 * FUN_148ee4356(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  void *_Src;
  ulonglong uVar2;
  
  cVar1 = FUN_144a23846(param_2,&DAT_14cbe34a0);
  if (cVar1 == '\0') {
    cVar1 = FUN_144a23846(param_2,&DAT_14cbe34b0);
    if (cVar1 == '\0') {
      cVar1 = FUN_144a23846(param_2,&DAT_14cbe34c0);
      if (cVar1 == '\0') {
        cVar1 = FUN_144a23846(param_2,&DAT_14cbe34d0);
        if (cVar1 == '\0') {
          cVar1 = FUN_144a23846(param_2,&DAT_14cbe34e0);
          if (cVar1 == '\0') {
            cVar1 = FUN_144a23846(param_2,&DAT_14cbe3500);
            if (cVar1 == '\0') {
              cVar1 = FUN_144a23846(param_2,&DAT_14cbe34f0);
              if (cVar1 == '\0') {
                cVar1 = FUN_144a23846(param_2,&DAT_14cbe3510);
                if (cVar1 == '\0') {
                  cVar1 = FUN_144a23846(param_2,&DAT_14cbe3520);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_144a23846(param_2,&DAT_14cbe3530);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_144a23846(param_2,&DAT_14cbe3540);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_144a23846(param_2,&DAT_14cbe3550);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_144a23846(param_2,&DAT_14cbe3560);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_144a23846(param_2,&DAT_14cbe3570);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_144a23846(param_2,&DAT_14cbe3590);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_144a23846(param_2,&DAT_14cbe3580);
                                *param_1 = 0;
                                if (cVar1 == '\0') {
                                  uVar2 = (ulonglong)DAT_14cbe3208;
                                  _Src = DAT_14cbe3200;
                                }
                                else {
                                  uVar2 = (ulonglong)DAT_14cbe3468;
                                  _Src = DAT_14cbe3460;
                                }
                              }
                              else {
                                *param_1 = 0;
                                uVar2 = (ulonglong)DAT_14cbe3478;
                                _Src = DAT_14cbe3470;
                              }
                              goto LAB_148ee438b;
                            }
                          }
                        }
                      }
                    }
                    *param_1 = 0;
                    uVar2 = (ulonglong)DAT_14cbe3458;
                    _Src = DAT_14cbe3450;
                  }
                  else {
                    *param_1 = 0;
                    uVar2 = (ulonglong)DAT_14cbe3428;
                    _Src = DAT_14cbe3420;
                  }
                }
                else {
                  *param_1 = 0;
                  uVar2 = (ulonglong)DAT_14cbe3448;
                  _Src = DAT_14cbe3440;
                }
              }
              else {
                *param_1 = 0;
                uVar2 = (ulonglong)DAT_14cbe3438;
                _Src = DAT_14cbe3430;
              }
            }
            else {
              *param_1 = 0;
              uVar2 = (ulonglong)DAT_14cbe3488;
              _Src = DAT_14cbe3480;
            }
          }
          else {
            *param_1 = 0;
            uVar2 = (ulonglong)DAT_14cbe33f8;
            _Src = DAT_14cbe33f0;
          }
        }
        else {
          *param_1 = 0;
          uVar2 = (ulonglong)DAT_14cbe3418;
          _Src = DAT_14cbe3410;
        }
      }
      else {
        *param_1 = 0;
        uVar2 = (ulonglong)DAT_14cbe3408;
        _Src = DAT_14cbe3400;
      }
    }
    else {
      *param_1 = 0;
      uVar2 = (ulonglong)DAT_14cbe33e8;
      _Src = DAT_14cbe33e0;
    }
  }
  else {
    *param_1 = 0;
    uVar2 = (ulonglong)DAT_14cbe33d8;
    _Src = DAT_14cbe33d0;
  }
LAB_148ee438b:
  *(int *)(param_1 + 1) = (int)uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,uVar2 & 0xffffffff,0);
    memcpy((void *)*param_1,_Src,uVar2 * 2);
  }
  return param_1;
}



// FUNCTION 148ee4610 FUN_148ee4610 body=107 status=ok
// SIG undefined FUN_148ee4610(void)

bool FUN_148ee4610(longlong param_1)

{
  bool bVar1;
  
  if ((((((DAT_14cbe3b38 == '\0') && ((*(byte *)(param_1 + 0x9c) & 0x40) != 0)) ||
        ((DAT_14cbe3b68 == '\0' && ((*(byte *)(param_1 + 0x9c) & 0x20) != 0)))) ||
       ((DAT_14c76409b == '\0' && (*(char *)(param_1 + 0x9c) < '\0')))) ||
      ((DAT_14c76409d == '\0' && ((*(byte *)(param_1 + 0x9c) & 0x10) != 0)))) ||
     (((*(byte *)(param_1 + 0x9e) & 0x40) != 0 || ((*(byte *)(param_1 + 0x9c) & 1) != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(byte *)(param_1 + 0x9f) & 0x20) == 0;
  }
  return bVar1;
}



// FUNCTION 148ee467c FUN_148ee467c body=388 status=ok
// SIG undefined FUN_148ee467c(void)

undefined8 * FUN_148ee467c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_148eec092();
  *param_1 = &PTR_FUN_14b895f80;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_140b856de(param_1 + 3,iVar1,0);
    FUN_140b8566a(param_1[3],uVar2,iVar1);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_140b856de(param_1 + 5,iVar1,0);
    FUN_140b8566a(param_1[5],uVar2,iVar1);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_140b856de(param_1 + 7,iVar1,0);
    FUN_140b8566a(param_1[7],uVar2,iVar1);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_140b856de(param_1 + 9,iVar1,0);
    FUN_140b8566a(param_1[9],uVar2,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xb,iVar1,0);
    FUN_140b8566a(param_1[0xb],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 148ee4800 FUN_148ee4800 body=158 status=ok
// SIG undefined FUN_148ee4800(void)

longlong FUN_148ee4800(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1402735c8();
  uVar1 = FUN_148eb04ae(lVar2 + 2000,param_2);
  switch(uVar1) {
  case 1:
    lVar2 = param_1 + 0x18;
    goto LAB_148ee486e;
  case 2:
    lVar2 = param_1 + 0x38;
    goto LAB_148ee486e;
  case 3:
    lVar2 = param_1 + 0x48;
    goto LAB_148ee486e;
  case 4:
    lVar2 = param_1 + 0x58;
LAB_148ee486e:
    FUN_1412fabe8(lVar2,param_2);
    break;
  case 5:
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 4;
    break;
  case 6:
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 8;
    break;
  case 7:
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 0x10;
    break;
  case 8:
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 1;
    break;
  case 9:
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
    break;
  case 0xf:
    FUN_1412fabe8(param_1 + 0x28,param_2);
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 0x20;
    break;
  case 0x10:
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 0x40;
    break;
  case 0x11:
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 0x80;
  }
  return param_1;
}



// FUNCTION 148ee489e FUN_148ee489e body=33 status=ok
// SIG undefined FUN_148ee489e(void)

void FUN_148ee489e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_148eddf84(param_1,uVar1);
  return;
}



// FUNCTION 148ee48c0 FUN_148ee48c0 body=33 status=ok
// SIG undefined FUN_148ee48c0(void)

void FUN_148ee48c0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_148ede5b8(param_1,uVar1);
  return;
}



// FUNCTION 148ee48e2 FUN_148ee48e2 body=33 status=ok
// SIG undefined FUN_148ee48e2(void)

void FUN_148ee48e2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_148ede168(param_1,uVar1);
  return;
}



// FUNCTION 148ee4904 FUN_148ee4904 body=33 status=ok
// SIG undefined FUN_148ee4904(void)

void FUN_148ee4904(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_148ede34c(param_1,uVar1);
  return;
}



// FUNCTION 148ee4926 FUN_148ee4926 body=804 status=ok
// SIG undefined FUN_148ee4926(void)

void FUN_148ee4926(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined4 *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  longlong local_b0;
  undefined **ppuStack_a8;
  longlong local_a0;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar8 = *(longlong *)(param_1 + 0x400);
  if ((longlong)*(int *)(param_1 + 0x408) == 0) {
    uVar6 = 0;
    local_a0 = param_1;
  }
  else {
    lVar7 = (longlong)*(int *)(param_1 + 0x408) * 0x268;
    lVar8 = lVar8 + 0x118;
    local_150 = param_1;
    do {
      if ((0 < *(int *)(lVar8 + -0x90)) && ((*(byte *)(lVar8 + -0x79) & 0x20) == 0)) {
        local_128 = 0;
        plStack_120 = (longlong *)0x0;
        FUN_1413a454c(local_118,*(int *)(lVar8 + -0x90),0,&local_128);
        local_c8 = (code *)0x0;
        uStack_c0 = 0;
        local_b8 = (undefined ***)((ulonglong)local_b8 & 0xffffffff00000000);
        local_b0 = 0;
        ppuStack_a8 = (undefined **)0x0;
        FUN_1446ddda2(&local_c8,"CashValueFormat",0);
        FUN_1410d1eba(local_148,&local_c8);
        FUN_14023409e(&local_138,local_148,1);
        local_80[0] = 4;
        FUN_14023423e(local_70,local_118);
        local_e8 = local_80;
        local_e0 = local_60;
        FUN_14010d304(&local_d8,&local_e8);
        local_f8 = local_138;
        local_f0 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_108,&local_f8);
        FUN_14007f2db(local_d8,local_d0);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        if (local_70[0] != (longlong *)0x0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        plVar3 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_118[0] != (longlong *)0x0) {
          (**(code **)(*local_118[0] + 0x10))();
        }
        uVar4 = FUN_1447a1f4a(local_108);
        FUN_144a787a6(lVar8,uVar4);
        if (local_108[0] != (longlong *)0x0) {
          (**(code **)(*local_108[0] + 0x10))();
        }
        if (local_148[0] != (longlong *)0x0) {
          (**(code **)(*local_148[0] + 0x10))();
        }
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        plVar3 = plStack_120;
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_120 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_120)(plStack_120);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        *(float *)(lVar8 + 0x58) = (float)*(int *)(lVar8 + -0x90);
        *(byte *)(lVar8 + -0x79) = *(byte *)(lVar8 + -0x79) | 2;
      }
      lVar8 = lVar8 + 0x268;
      lVar7 = lVar7 + -0x268;
    } while (lVar7 != 0);
    uVar6 = *(undefined4 *)(local_150 + 0x408);
    lVar8 = *(longlong *)(local_150 + 0x400);
    local_a0 = local_150;
  }
  local_b8 = (undefined ***)0x0;
  ppuStack_a8 = &PTR_LAB_14b9d8960;
  local_c8 = FUN_144323090;
  FUN_1415d0667(lVar8,uVar6);
  if (local_c8 != (code *)0x0) {
    pppuVar5 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar5 = &ppuStack_a8;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_60[0] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee4c4c FUN_148ee4c4c body=33 status=ok
// SIG undefined FUN_148ee4c4c(void)

void FUN_148ee4c4c(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_148ede9cc(param_1,uVar1);
  return;
}



// FUNCTION 148ee4c6e FUN_148ee4c6e body=33 status=ok
// SIG undefined FUN_148ee4c6e(void)

void FUN_148ee4c6e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_148edebb0(param_1,uVar1);
  return;
}



// FUNCTION 148ee4c90 FUN_148ee4c90 body=33 status=ok
// SIG undefined FUN_148ee4c90(void)

void FUN_148ee4c90(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_148eded94(param_1,uVar1);
  return;
}



// FUNCTION 148ee4cc0 FUN_148ee4cc0 body=33 status=ok
// SIG undefined FUN_148ee4cc0(void)

void FUN_148ee4cc0(longlong param_1,undefined4 param_2)

{
  ushort *puVar1;
  
  *(undefined4 *)(param_1 + 0x32c) = param_2;
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee4ce2 FUN_148ee4ce2 body=388 status=ok
// SIG undefined FUN_148ee4ce2(void)

void FUN_148ee4ce2(longlong *param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  byte bVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x22])) {
    lVar2 = param_1[0x21];
    lVar5 = lVar2 + (ulonglong)param_2 * 0x90;
    FUN_148e6a12e(param_1 + 0x16);
    bVar1 = *(byte *)(lVar2 + 0x88 + (ulonglong)param_2 * 0x90);
    plVar4 = (longlong *)FUN_145917192(param_1);
    lVar2 = *plVar4;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
    *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
    if ((bVar1 & 0x40) == 0) {
      (**(code **)(*param_1 + 0xa8))(param_1,local_48);
      FUN_148e1b412(lVar2,local_48,lVar5);
    }
    else {
      (**(code **)(*param_1 + 0xa8))(param_1,local_48);
      FUN_148e1b3c2(lVar2,local_48,lVar5);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
    plVar4 = (longlong *)FUN_145917192(param_1);
    lVar5 = *plVar4;
    SRWLock = (PSRWLOCK)(lVar5 + 0x58);
    AcquireSRWLockShared(SRWLock);
    (**(code **)(*param_1 + 0xa8))(param_1,local_48);
    lVar5 = FUN_148e1b2aa(lVar5,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockShared(SRWLock);
    if (lVar5 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)(lVar5 + 0x30) != 0;
    }
    *(bool *)((longlong)param_1 + 0x119) = bVar6;
    *(byte *)((longlong)param_1 + 0x331) = *(byte *)((longlong)param_1 + 0x331) | 2;
    puVar3 = (ushort *)param_1[0x10];
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee4e68 FUN_148ee4e68 body=1444 status=ok
// SIG undefined FUN_148ee4e68(void)

void FUN_148ee4e68(longlong param_1,char param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined2 *puVar10;
  ushort uVar11;
  int iVar12;
  longlong lVar13;
  ushort uVar14;
  uint uVar15;
  
  if ((longlong)*(int *)(param_1 + 0x9f8) == 0) {
LAB_148ee51e0:
    puVar1 = *(ushort **)(param_1 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
    }
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x9f0);
  puVar6 = puVar2 + (longlong)*(int *)(param_1 + 0x9f8) * 0x12;
LAB_148ee4eb5:
  iVar5 = *(int *)(puVar2 + 1);
  puVar10 = &DAT_149dfb77a;
  if (iVar5 != 0) {
    puVar10 = (undefined2 *)*puVar2;
  }
  lVar13 = 0;
  while( true ) {
    uVar11 = *(ushort *)((longlong)puVar10 + lVar13);
    uVar14 = *(ushort *)((longlong)L"trash" + lVar13);
    if (uVar11 != uVar14) break;
    if (uVar11 == 0) goto LAB_148ee4f59;
LAB_148ee4edb:
    lVar13 = lVar13 + 2;
  }
  if ((uVar14 | uVar11) < 0x80) {
    if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[(uint)uVar14]) goto LAB_148ee4edb;
    iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar11] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar14];
  }
  else {
    iVar12 = (uint)uVar11 - (uint)uVar14;
  }
  if (iVar12 != 0) {
    puVar10 = &DAT_149dfb77a;
    if (iVar5 != 0) {
      puVar10 = (undefined2 *)*puVar2;
    }
    lVar13 = 0;
    goto LAB_148ee4f17;
  }
LAB_148ee4f59:
  bVar7 = *(char *)(param_1 + 0x72c) << 2;
  goto LAB_148ee4f64;
LAB_148ee4f17:
  uVar11 = *(ushort *)((longlong)puVar10 + lVar13);
  uVar4 = (ulonglong)uVar11;
  uVar14 = *(ushort *)((longlong)L"favorite" + lVar13);
  if (uVar11 == uVar14) {
    if (uVar11 == 0) goto LAB_148ee4f98;
LAB_148ee4f2d:
    lVar13 = lVar13 + 2;
    goto LAB_148ee4f17;
  }
  if ((uVar14 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar3 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee4f2d;
  }
  if (uVar11 != uVar14) {
    puVar10 = &DAT_149dfb77a;
    if (iVar5 != 0) {
      puVar10 = (undefined2 *)*puVar2;
    }
    lVar13 = 0;
    goto LAB_148ee4fa4;
  }
LAB_148ee4f98:
  bVar7 = *(char *)(param_1 + 0x72c) * '\x02';
  goto LAB_148ee4f64;
LAB_148ee4fa4:
  uVar11 = *(ushort *)((longlong)puVar10 + lVar13);
  uVar4 = (ulonglong)uVar11;
  uVar14 = *(ushort *)((longlong)L"bankdeposit" + lVar13);
  if (uVar11 == uVar14) {
    if (uVar11 == 0) goto LAB_148ee5225;
LAB_148ee4fc5:
    lVar13 = lVar13 + 2;
    goto LAB_148ee4fa4;
  }
  if ((uVar14 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar3 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee4fc5;
  }
  if (uVar11 != uVar14) {
    puVar10 = &DAT_149dfb77a;
    if (iVar5 != 0) {
      puVar10 = (undefined2 *)*puVar2;
    }
    lVar13 = 0;
    goto LAB_148ee5001;
  }
LAB_148ee5225:
  bVar7 = *(byte *)(param_1 + 0x72c);
LAB_148ee4f64:
  bVar7 = bVar7 & 0x40;
  if (param_2 == '\0') {
    bVar7 = 0;
  }
  *(byte *)(puVar2 + 0x11) = *(byte *)(puVar2 + 0x11) & 0xbf | bVar7;
  goto LAB_148ee4f84;
LAB_148ee5001:
  uVar11 = *(ushort *)((longlong)puVar10 + lVar13);
  uVar4 = (ulonglong)uVar11;
  uVar14 = *(ushort *)((longlong)L"taggroup1" + lVar13);
  if (uVar11 == uVar14) {
    if (uVar11 == 0) goto LAB_148ee5231;
LAB_148ee5022:
    lVar13 = lVar13 + 2;
    goto LAB_148ee5001;
  }
  if ((uVar14 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar3 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee5022;
  }
  if (uVar11 != uVar14) {
    puVar10 = &DAT_149dfb77a;
    if (iVar5 != 0) {
      puVar10 = (undefined2 *)*puVar2;
    }
    lVar13 = 0;
    goto LAB_148ee505e;
  }
LAB_148ee5231:
  if (param_2 == '\0') goto LAB_148ee53c0;
  iVar5 = *(int *)(param_1 + 0x780);
  iVar12 = DAT_14cbe3100;
  if (iVar5 != DAT_14cbe3100) goto LAB_148ee53e0;
  if (1 < iVar5) {
    lVar13 = 0;
    do {
      uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x778) + lVar13);
      uVar9 = (uint)uVar11;
      uVar14 = *(ushort *)(DAT_14cbe30f8 + lVar13);
      uVar15 = (uint)uVar14;
      if (uVar11 == uVar14) {
        if (uVar11 == 0) break;
      }
      else {
        if (0x7f < (uVar14 | uVar11)) goto LAB_148ee52a7;
        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
        uVar4 = (ulonglong)uVar15;
        uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar4]) goto LAB_148ee52a7;
      }
      lVar13 = lVar13 + 2;
    } while( true );
  }
LAB_148ee53f9:
  bVar7 = *(byte *)(puVar2 + 0x11);
  goto LAB_148ee5407;
LAB_148ee505e:
  uVar11 = *(ushort *)((longlong)puVar10 + lVar13);
  uVar4 = (ulonglong)uVar11;
  uVar14 = *(ushort *)((longlong)L"taggroup2" + lVar13);
  if (uVar11 == uVar14) {
    if (uVar11 == 0) goto LAB_148ee52c6;
LAB_148ee507f:
    lVar13 = lVar13 + 2;
    goto LAB_148ee505e;
  }
  if ((uVar14 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar3 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee507f;
  }
  if (uVar11 != uVar14) {
    puVar10 = &DAT_149dfb77a;
    if (iVar5 != 0) {
      puVar10 = (undefined2 *)*puVar2;
    }
    lVar13 = 0;
    goto LAB_148ee50bb;
  }
LAB_148ee52c6:
  if (param_2 == '\0') goto LAB_148ee53c0;
  iVar5 = *(int *)(param_1 + 0x780);
  iVar12 = DAT_14cbe3110;
  if (iVar5 == DAT_14cbe3110) {
    if (1 < iVar5) {
      lVar13 = 0;
      do {
        uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x778) + lVar13);
        uVar9 = (uint)uVar11;
        uVar14 = *(ushort *)(DAT_14cbe3108 + lVar13);
        uVar15 = (uint)uVar14;
        if (uVar11 == uVar14) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar14 | uVar11)) goto LAB_148ee52a7;
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
          uVar4 = (ulonglong)uVar15;
          uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar4]) goto LAB_148ee52a7;
        }
        lVar13 = lVar13 + 2;
      } while( true );
    }
    goto LAB_148ee53f9;
  }
  goto LAB_148ee53e0;
LAB_148ee50bb:
  uVar11 = *(ushort *)((longlong)puVar10 + lVar13);
  uVar4 = (ulonglong)uVar11;
  uVar14 = *(ushort *)((longlong)L"taggroup3" + lVar13);
  if (uVar11 == uVar14) {
    if (uVar11 == 0) goto LAB_148ee534d;
LAB_148ee50dc:
    lVar13 = lVar13 + 2;
    goto LAB_148ee50bb;
  }
  if ((uVar14 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar3 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee50dc;
  }
  if (uVar11 != uVar14) {
    puVar10 = &DAT_149dfb77a;
    if (iVar5 != 0) {
      puVar10 = (undefined2 *)*puVar2;
    }
    lVar13 = 0;
    goto LAB_148ee5118;
  }
LAB_148ee534d:
  if (param_2 == '\0') goto LAB_148ee53c0;
  iVar5 = *(int *)(param_1 + 0x780);
  iVar12 = DAT_14cbe3120;
  if (iVar5 == DAT_14cbe3120) {
    if (1 < iVar5) {
      lVar13 = 0;
      do {
        uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x778) + lVar13);
        uVar9 = (uint)uVar11;
        uVar14 = *(ushort *)(DAT_14cbe3118 + lVar13);
        uVar15 = (uint)uVar14;
        if (uVar11 == uVar14) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar14 | uVar11)) goto LAB_148ee52a7;
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
          uVar4 = (ulonglong)uVar15;
          uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar4]) goto LAB_148ee52a7;
        }
        lVar13 = lVar13 + 2;
      } while( true );
    }
    goto LAB_148ee53f9;
  }
  goto LAB_148ee53e0;
LAB_148ee5118:
  uVar11 = *(ushort *)((longlong)puVar10 + lVar13);
  uVar4 = (ulonglong)uVar11;
  uVar14 = *(ushort *)((longlong)L"taggroup4" + lVar13);
  if (uVar11 == uVar14) {
    if (uVar11 == 0) goto LAB_148ee5161;
LAB_148ee5135:
    lVar13 = lVar13 + 2;
    goto LAB_148ee5118;
  }
  if ((uVar14 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar3 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee5135;
  }
  if (uVar11 != uVar14) goto LAB_148ee4f84;
LAB_148ee5161:
  if (param_2 == '\0') {
LAB_148ee53c0:
    bVar7 = *(byte *)(puVar2 + 0x11);
    goto LAB_148ee53ce;
  }
  iVar5 = *(int *)(param_1 + 0x780);
  iVar12 = DAT_14cbe3130;
  if (iVar5 == DAT_14cbe3130) {
    if (1 < iVar5) {
      lVar13 = 0;
      do {
        uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x778) + lVar13);
        uVar9 = (uint)uVar11;
        uVar14 = *(ushort *)(DAT_14cbe3128 + lVar13);
        uVar15 = (uint)uVar14;
        if (uVar11 == uVar14) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar14 | uVar11)) goto LAB_148ee52a7;
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
          uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar14]) goto LAB_148ee52a7;
        }
        lVar13 = lVar13 + 2;
      } while( true );
    }
    goto LAB_148ee53f9;
  }
LAB_148ee53e0:
  bVar7 = *(byte *)(puVar2 + 0x11);
  if (iVar12 + iVar5 == 1) {
LAB_148ee5407:
    bVar8 = 0x40;
  }
  else {
LAB_148ee53ce:
    bVar8 = 0;
  }
  *(byte *)(puVar2 + 0x11) = bVar7 & 0xbf | bVar8;
LAB_148ee4f84:
  puVar2 = puVar2 + 0x12;
  if (puVar2 == puVar6) goto LAB_148ee51e0;
  goto LAB_148ee4eb5;
LAB_148ee52a7:
  bVar7 = *(byte *)(puVar2 + 0x11);
  if (uVar9 == uVar15) goto LAB_148ee5407;
  goto LAB_148ee53ce;
}



// FUNCTION 148ee540c FUN_148ee540c body=71 status=ok
// SIG undefined FUN_148ee540c(void)

longlong FUN_148ee540c(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_2 != -1) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x120))();
    if ((longlong)(int)plVar1[1] != 0) {
      lVar2 = *plVar1;
      lVar3 = (longlong)(int)plVar1[1] * 0x430;
      do {
        if (*(int *)(lVar2 + 8) == *param_2) {
          return lVar2;
        }
        lVar2 = lVar2 + 0x430;
        lVar3 = lVar3 + -0x430;
      } while (lVar3 != 0);
    }
  }
  return 0;
}



// FUNCTION 148ee5454 FUN_148ee5454 body=32 status=ok
// SIG undefined FUN_148ee5454(void)

longlong FUN_148ee5454(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3f8))) {
    return (ulonglong)param_2 * 0x268 + *(longlong *)(param_1 + 0x3f0);
  }
  return 0;
}



// FUNCTION 148ee5474 FUN_148ee5474 body=52 status=ok
// SIG undefined FUN_148ee5474(void)

longlong FUN_148ee5474(longlong param_1)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x8e4) == -1) && (*(int *)(param_1 + 0x8e8) == 0)) {
    lVar1 = 0;
    if ((*(byte *)(param_1 + 0x72f) & 0x20) != 0) {
      lVar1 = param_1 + 0x690;
    }
    return lVar1;
  }
  return param_1 + 0x690;
}



// FUNCTION 148ee54a8 FUN_148ee54a8 body=424 status=ok
// SIG undefined FUN_148ee54a8(void)

uint FUN_148ee54a8(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  ushort uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  plVar9 = (longlong *)(param_1 + 0x40);
  plVar10 = (longlong *)(param_2 + 0x40);
  iVar8 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(param_2 + 0x48);
  if (iVar8 == iVar5) {
    if (1 < iVar8) {
      lVar12 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*plVar9 + lVar12);
        uVar13 = (ulonglong)uVar7;
        uVar4 = *(ushort *)(*plVar10 + lVar12);
        if (uVar7 != uVar4) break;
        if (uVar7 == 0) goto LAB_148ee5524;
LAB_148ee54ec:
        lVar12 = lVar12 + 2;
      }
      if ((uVar4 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        uVar6 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar6]) goto LAB_148ee54ec;
      }
      if (uVar7 != uVar4) goto LAB_148ee5510;
    }
LAB_148ee5524:
    uVar1 = *(uint *)(param_1 + 0x78);
    uVar11 = *(uint *)(param_2 + 0x78);
    if ((int)uVar11 < 1 || (int)uVar1 < 1) {
      return 2;
    }
    if (uVar1 < uVar11) {
      uVar11 = uVar1;
    }
    uVar13 = 0;
    do {
      lVar12 = uVar13 * 0x10;
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x70) + lVar12);
      plVar10 = (longlong *)(*(longlong *)(param_2 + 0x70) + lVar12);
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x70) + 8 + lVar12);
      iVar5 = *(int *)(*(longlong *)(param_2 + 0x70) + 8 + lVar12);
      if (iVar8 == iVar5) {
        if (1 < iVar8) {
          lVar12 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*plVar9 + lVar12);
            uVar6 = (ulonglong)uVar7;
            uVar4 = *(ushort *)(*plVar10 + lVar12);
            if (uVar7 != uVar4) break;
            if (uVar7 == 0) goto LAB_148ee55d7;
LAB_148ee559e:
            lVar12 = lVar12 + 2;
          }
          if ((uVar4 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar14 = (ulonglong)uVar4;
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar14]) goto LAB_148ee559e;
          }
          if (uVar7 != uVar4) goto LAB_148ee5510;
        }
      }
      else if (iVar5 + iVar8 != 1) goto LAB_148ee55e1;
LAB_148ee55d7:
      uVar13 = uVar13 + 1;
      if (uVar13 == uVar11) {
        return 2;
      }
    } while( true );
  }
  if (iVar5 + iVar8 == 1) goto LAB_148ee5524;
LAB_148ee55e1:
  puVar2 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if (iVar5 != 0) {
    puVar3 = (undefined2 *)*plVar10;
  }
  if (iVar8 == 0) goto LAB_148ee55f9;
  goto LAB_148ee55f6;
LAB_148ee5510:
  puVar3 = (undefined2 *)*plVar10;
LAB_148ee55f6:
  puVar2 = (undefined2 *)*plVar9;
LAB_148ee55f9:
  lVar12 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar2 + lVar12);
    uVar1 = (uint)uVar7;
    uVar4 = *(ushort *)((longlong)puVar3 + lVar12);
    uVar11 = (uint)uVar4;
    if (uVar7 != uVar4) {
      if ((uVar4 | uVar7) < 0x80) {
        uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar7];
        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_148ee5617;
      }
      uVar1 = uVar1 - uVar11;
      goto LAB_148ee5642;
    }
    if (uVar7 == 0) break;
LAB_148ee5617:
    lVar12 = lVar12 + 2;
  }
  uVar1 = 0;
LAB_148ee5642:
  return uVar1 >> 0x1f;
}



// FUNCTION 148ee5650 FUN_148ee5650 body=428 status=ok
// SIG undefined FUN_148ee5650(void)

bool FUN_148ee5650(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  ushort uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  plVar9 = (longlong *)(param_1 + 0x40);
  plVar10 = (longlong *)(param_2 + 0x40);
  iVar4 = *(int *)(param_1 + 0x48);
  iVar6 = *(int *)(param_2 + 0x48);
  if (iVar4 == iVar6) {
    if (1 < iVar4) {
      lVar12 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*plVar9 + lVar12);
        uVar13 = (ulonglong)uVar8;
        uVar5 = *(ushort *)(*plVar10 + lVar12);
        if (uVar8 != uVar5) break;
        if (uVar8 == 0) goto LAB_148ee56cc;
LAB_148ee5694:
        lVar12 = lVar12 + 2;
      }
      if ((uVar5 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        uVar7 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar7]) goto LAB_148ee5694;
      }
      if (uVar8 != uVar5) goto LAB_148ee56b8;
    }
LAB_148ee56cc:
    uVar3 = *(uint *)(param_1 + 0x78);
    uVar11 = *(uint *)(param_2 + 0x78);
    if ((int)uVar11 < 1 || (int)uVar3 < 1) {
      return (bool)2;
    }
    if (uVar3 < uVar11) {
      uVar11 = uVar3;
    }
    uVar13 = 0;
    do {
      lVar12 = uVar13 * 0x10;
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x70) + lVar12);
      plVar10 = (longlong *)(*(longlong *)(param_2 + 0x70) + lVar12);
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x70) + 8 + lVar12);
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x70) + 8 + lVar12);
      if (iVar4 == iVar6) {
        if (1 < iVar4) {
          lVar12 = 0;
          while( true ) {
            uVar8 = *(ushort *)(*plVar9 + lVar12);
            uVar7 = (ulonglong)uVar8;
            uVar5 = *(ushort *)(*plVar10 + lVar12);
            if (uVar8 != uVar5) break;
            if (uVar8 == 0) goto LAB_148ee577f;
LAB_148ee5746:
            lVar12 = lVar12 + 2;
          }
          if ((uVar5 | uVar8) < 0x80) {
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar14 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar14]) goto LAB_148ee5746;
          }
          if (uVar8 != uVar5) goto LAB_148ee56b8;
        }
      }
      else if (iVar6 + iVar4 != 1) goto LAB_148ee5789;
LAB_148ee577f:
      uVar13 = uVar13 + 1;
      if (uVar13 == uVar11) {
        return (bool)2;
      }
    } while( true );
  }
  if (iVar6 + iVar4 == 1) goto LAB_148ee56cc;
LAB_148ee5789:
  puVar1 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (iVar6 != 0) {
    puVar2 = (undefined2 *)*plVar10;
  }
  if (iVar4 == 0) goto LAB_148ee57a1;
  goto LAB_148ee579e;
LAB_148ee56b8:
  puVar2 = (undefined2 *)*plVar10;
LAB_148ee579e:
  puVar1 = (undefined2 *)*plVar9;
LAB_148ee57a1:
  lVar12 = 0;
  while( true ) {
    uVar8 = *(ushort *)((longlong)puVar1 + lVar12);
    uVar3 = (uint)uVar8;
    uVar5 = *(ushort *)((longlong)puVar2 + lVar12);
    uVar11 = (uint)uVar5;
    if (uVar8 != uVar5) {
      if ((uVar5 | uVar8) < 0x80) {
        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar8];
        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar5]) goto LAB_148ee57bf;
      }
      iVar4 = uVar3 - uVar11;
      goto LAB_148ee57ea;
    }
    if (uVar8 == 0) break;
LAB_148ee57bf:
    lVar12 = lVar12 + 2;
  }
  iVar4 = 0;
LAB_148ee57ea:
  return 0 < iVar4;
}



// FUNCTION 148ee57fc FUN_148ee57fc body=37 status=ok
// SIG undefined FUN_148ee57fc(void)

void FUN_148ee57fc(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[4] = &PTR_LAB_14b9d88c0;
  param_2[5] = param_1;
  *param_2 = FUN_14432237e;
  return;
}



// FUNCTION 148ee5822 FUN_148ee5822 body=37 status=ok
// SIG undefined FUN_148ee5822(void)

void FUN_148ee5822(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[4] = &PTR_LAB_14b9d88e0;
  param_2[5] = param_1;
  *param_2 = FUN_1443225ba;
  return;
}



// FUNCTION 148ee5848 FUN_148ee5848 body=37 status=ok
// SIG undefined FUN_148ee5848(void)

void FUN_148ee5848(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[4] = &PTR_LAB_14b9d8900;
  param_2[5] = param_1;
  *param_2 = FUN_1443228f2;
  return;
}



// FUNCTION 148ee586e FUN_148ee586e body=37 status=ok
// SIG undefined FUN_148ee586e(void)

void FUN_148ee586e(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[4] = &PTR_LAB_14b9d8920;
  param_2[5] = param_1;
  *param_2 = FUN_144322c22;
  return;
}



// FUNCTION 148ee5894 FUN_148ee5894 body=37 status=ok
// SIG undefined FUN_148ee5894(void)

void FUN_148ee5894(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[4] = &PTR_LAB_14b9d8940;
  param_2[5] = param_1;
  *param_2 = FUN_144322e56;
  return;
}



// FUNCTION 148ee58ba FUN_148ee58ba body=37 status=ok
// SIG undefined FUN_148ee58ba(void)

void FUN_148ee58ba(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[4] = &PTR_LAB_14b9d8980;
  param_2[5] = param_1;
  *param_2 = FUN_1443232c4;
  return;
}



// FUNCTION 148ee58e0 FUN_148ee58e0 body=37 status=ok
// SIG undefined FUN_148ee58e0(void)

void FUN_148ee58e0(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[4] = &PTR_LAB_14b9d89a0;
  param_2[5] = param_1;
  *param_2 = FUN_1443234ee;
  return;
}



// FUNCTION 148ee5906 FUN_148ee5906 body=983 status=ok
// SIG undefined FUN_148ee5906(void)

void FUN_148ee5906(longlong *param_1,uint param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) goto LAB_148ee592a;
  *(undefined1 *)(param_1 + 0x125) = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0xffffffff);
  lVar6 = FUN_145916fde(param_1);
  if (lVar6 == 0) goto LAB_148ee592a;
  if ((int)param_2 < 0x10) {
    if (param_2 == 2) {
      bVar11 = (bool)((*(byte *)(param_3 + 0x9c) & 0x20) >> 5);
      goto LAB_148ee5bdb;
    }
    if (param_2 != 4) {
      if (param_2 != 8) goto LAB_148ee5c57;
      bVar11 = (bool)((*(byte *)(param_3 + 0x9c) & 0x40) >> 6);
      goto LAB_148ee5bdb;
    }
    uVar5 = *(uint *)(param_3 + 0x9c) >> 4 & 1;
    goto LAB_148ee5bde;
  }
  if (0x3f < (int)param_2) {
    if (param_2 == 0x40) {
      iVar8 = *(int *)(param_3 + 0xf0);
      iVar4 = DAT_14cbe3120;
      if (iVar8 != DAT_14cbe3120) goto LAB_148ee5bd3;
      bVar11 = true;
      if (1 < iVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ushort *)(*(longlong *)(param_3 + 0xe8) + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cbe3118 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_148ee5cd5;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5bcb;
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5bcb;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
    }
    else {
      if (param_2 != 0x80) goto LAB_148ee5c57;
      iVar8 = *(int *)(param_3 + 0xf0);
      iVar4 = DAT_14cbe3130;
      if (iVar8 != DAT_14cbe3130) goto LAB_148ee5bd3;
      bVar11 = true;
      if (1 < iVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ushort *)(*(longlong *)(param_3 + 0xe8) + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cbe3128 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_148ee5cd5;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5bcb;
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5bcb;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
    }
    goto LAB_148ee5bdb;
  }
  if (param_2 == 0x10) {
    iVar8 = *(int *)(param_3 + 0xf0);
    iVar4 = DAT_14cbe3100;
    if (iVar8 == DAT_14cbe3100) {
      bVar11 = true;
      if (1 < iVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ushort *)(*(longlong *)(param_3 + 0xe8) + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cbe30f8 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_148ee5cd5;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5bcb;
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5bcb;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
    }
    else {
LAB_148ee5bd3:
      bVar11 = iVar4 + iVar8 == 1;
    }
    goto LAB_148ee5bdb;
  }
  if (param_2 == 0x20) {
    iVar8 = *(int *)(param_3 + 0xf0);
    iVar4 = DAT_14cbe3110;
    if (iVar8 != DAT_14cbe3110) goto LAB_148ee5bd3;
    bVar11 = true;
    if (1 < iVar8) {
      lVar9 = 0;
      do {
        uVar1 = *(ushort *)(*(longlong *)(param_3 + 0xe8) + lVar9);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)(DAT_14cbe3108 + lVar9);
        uVar10 = (uint)uVar2;
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_148ee5cd5;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5bcb;
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5bcb;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
    goto LAB_148ee5bdb;
  }
  goto LAB_148ee5c57;
LAB_148ee5cd5:
  iVar8 = 0;
  goto LAB_148ee5cd7;
LAB_148ee5bcb:
  iVar8 = uVar5 - uVar10;
LAB_148ee5cd7:
  bVar11 = iVar8 == 0;
LAB_148ee5bdb:
  uVar5 = (uint)bVar11;
LAB_148ee5bde:
  if (uVar5 == 0) {
LAB_148ee5c57:
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x54);
    *puVar7 = &PTR_FUN_14b9c7260;
    FUN_1446ddc76(&local_50,"UpdateItemFlags",1);
    FUN_14039176c(puVar7,uVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7260;
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(param_3 + 0x254);
    *(uint *)((longlong)puVar7 + 0x3c) = param_2;
    *(uint *)(puVar7 + 8) = ~param_2 & 0xfe;
  }
  else {
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x54);
    *puVar7 = &PTR_FUN_14b9c7260;
    FUN_1446ddc76(&local_50,"UpdateItemFlags",1);
    FUN_14039176c(puVar7,uVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7260;
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(param_3 + 0x254);
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
    *(uint *)(puVar7 + 8) = param_2;
  }
  FUN_14039144e(lVar6,puVar7);
LAB_148ee592a:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee5cde FUN_148ee5cde body=1012 status=ok
// SIG undefined FUN_148ee5cde(void)

void FUN_148ee5cde(longlong *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(int *)((longlong)param_1 + 0x8e4) == -1) && ((int)param_1[0x11d] == 0)) &&
      ((*(byte *)((longlong)param_1 + 0x72f) & 0x20) == 0)) ||
     (lVar6 = FUN_145916fde(param_1), lVar6 == 0)) goto LAB_148ee5d1d;
  if ((int)param_2 < 0x10) {
    if (param_2 == 2) {
      bVar11 = (bool)((*(byte *)((longlong)param_1 + 0x72c) & 0x20) >> 5);
      goto LAB_148ee5fb1;
    }
    if (param_2 != 4) {
      if (param_2 != 8) goto LAB_148ee6049;
      bVar11 = (bool)((*(byte *)((longlong)param_1 + 0x72c) & 0x40) >> 6);
      goto LAB_148ee5fb1;
    }
    uVar5 = *(uint *)((longlong)param_1 + 0x72c) >> 4 & 1;
    goto LAB_148ee5fb4;
  }
  if (0x3f < (int)param_2) {
    if (param_2 == 0x40) {
      iVar8 = (int)param_1[0xf0];
      iVar4 = DAT_14cbe3120;
      if (iVar8 != DAT_14cbe3120) goto LAB_148ee5fa9;
      bVar11 = true;
      if (1 < iVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ushort *)(param_1[0xef] + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cbe3118 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_148ee60ca;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5fa1;
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5fa1;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
    }
    else {
      if (param_2 != 0x80) goto LAB_148ee6049;
      iVar8 = (int)param_1[0xf0];
      iVar4 = DAT_14cbe3130;
      if (iVar8 != DAT_14cbe3130) goto LAB_148ee5fa9;
      bVar11 = true;
      if (1 < iVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ushort *)(param_1[0xef] + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cbe3128 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_148ee60ca;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5fa1;
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5fa1;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
    }
    goto LAB_148ee5fb1;
  }
  if (param_2 == 0x10) {
    iVar8 = (int)param_1[0xf0];
    iVar4 = DAT_14cbe3100;
    if (iVar8 == DAT_14cbe3100) {
      bVar11 = true;
      if (1 < iVar8) {
        lVar9 = 0;
        do {
          uVar1 = *(ushort *)(param_1[0xef] + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cbe30f8 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_148ee60ca;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5fa1;
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5fa1;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
    }
    else {
LAB_148ee5fa9:
      bVar11 = iVar4 + iVar8 == 1;
    }
    goto LAB_148ee5fb1;
  }
  if (param_2 == 0x20) {
    iVar8 = (int)param_1[0xf0];
    iVar4 = DAT_14cbe3110;
    if (iVar8 != DAT_14cbe3110) goto LAB_148ee5fa9;
    bVar11 = true;
    if (1 < iVar8) {
      lVar9 = 0;
      do {
        uVar1 = *(ushort *)(param_1[0xef] + lVar9);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)(DAT_14cbe3108 + lVar9);
        uVar10 = (uint)uVar2;
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_148ee60ca;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) goto LAB_148ee5fa1;
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_148ee5fa1;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
    goto LAB_148ee5fb1;
  }
  goto LAB_148ee6049;
LAB_148ee60ca:
  iVar8 = 0;
  goto LAB_148ee60cc;
LAB_148ee5fa1:
  iVar8 = uVar5 - uVar10;
LAB_148ee60cc:
  bVar11 = iVar8 == 0;
LAB_148ee5fb1:
  uVar5 = (uint)bVar11;
LAB_148ee5fb4:
  if (uVar5 == 0) {
LAB_148ee6049:
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x54);
    *puVar7 = &PTR_FUN_14b9c7260;
    FUN_1446ddc76(&local_50,"UpdateItemFlags",1);
    FUN_14039176c(puVar7,uVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7260;
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)((longlong)param_1 + 0x8e4);
    *(uint *)((longlong)puVar7 + 0x3c) = param_2;
    *(uint *)(puVar7 + 8) = ~param_2 & 0xfe;
  }
  else {
    puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x54);
    *puVar7 = &PTR_FUN_14b9c7260;
    FUN_1446ddc76(&local_50,"UpdateItemFlags",1);
    FUN_14039176c(puVar7,uVar3,local_50,1);
    *puVar7 = &PTR_FUN_14b9c7260;
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)((longlong)param_1 + 0x8e4);
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
    *(uint *)(puVar7 + 8) = param_2;
  }
  FUN_14039144e(lVar6,puVar7);
  *(undefined1 *)(param_1 + 0x125) = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0xffffffff);
LAB_148ee5d1d:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee60d4 FUN_148ee60d4 body=33 status=ok
// SIG undefined FUN_148ee60d4(void)

void FUN_148ee60d4(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x120))();
  FUN_144314850(param_1,uVar1);
  return;
}



// FUNCTION 148ee60f6 FUN_148ee60f6 body=180 status=ok
// SIG undefined FUN_148ee60f6(void)

undefined8 FUN_148ee60f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x10) + 0xa8);
  if (*(int *)(param_1 + 0xac4) != iVar2) {
    *(int *)(param_1 + 0xac4) = iVar2;
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0xa9c) == *(int *)(lVar1 + 0xc)) {
      iVar2 = *(int *)(param_1 + 0xa98);
    }
    else {
      iVar2 = *(int *)(lVar1 + 8);
      *(int *)(param_1 + 0xa98) = iVar2;
      *(undefined4 *)(param_1 + 0xa9c) = *(undefined4 *)(lVar1 + 0xc);
      lVar1 = *(longlong *)(param_2 + 0x10);
    }
    lVar3 = param_1 + 0x3b0;
    if (iVar2 == 1) {
      lVar3 = lVar1 + 0x20;
    }
    FUN_144a787a6(param_1 + 0x3a0,lVar3);
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0xaec) != *(int *)(lVar1 + 0x1c)) {
      *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined1 *)(param_1 + 0x928) = 0;
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined1 *)(param_1 + 0x1c0) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148ee61aa FUN_148ee61aa body=42 status=ok
// SIG undefined FUN_148ee61aa(void)

undefined4 FUN_148ee61aa(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xad4);
  iVar2 = *(int *)(param_2 + 0x2c);
  if (iVar1 != iVar2) {
    *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xad4) = *(undefined4 *)(param_2 + 0x2c);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != iVar2);
}



// FUNCTION 148ee6222 FUN_148ee6222 body=46 status=ok
// SIG undefined FUN_148ee6222(void)

void FUN_148ee6222(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_141352880();
  *(byte *)(param_2 + 0x9d) = *(byte *)(param_2 + 0x9d) & 0x7f | (cVar1 == '\0') << 7;
  return;
}



// FUNCTION 148ee6250 FUN_148ee6250 body=198 status=ok
// SIG undefined FUN_148ee6250(void)

void FUN_148ee6250(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1408be2c4(param_1 + 0x18,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1408be2c4(param_1 + 0x28,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1408be2c4(param_1 + 0x38,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1408be2c4(param_1 + 0x48,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1408be2c4(param_1 + 0x58,0);
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 148ee6316 FUN_148ee6316 body=100 status=ok
// SIG undefined FUN_148ee6316(void)

void FUN_148ee6316(longlong *param_1)

{
  ushort *puVar1;
  
  (**(code **)(*param_1 + 0x60))();
  (**(code **)(*param_1 + 0x68))(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x90))(param_1,(int)param_1[0x65]);
  (**(code **)(*param_1 + 0x88))(param_1,*(undefined4 *)((longlong)param_1 + 0x32c));
  puVar1 = (ushort *)param_1[0x10];
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
  }
  return;
}



// FUNCTION 148ee637a FUN_148ee637a body=102 status=ok
// SIG undefined FUN_148ee637a(void)

void FUN_148ee637a(longlong *param_1,uint param_2)

{
  ushort *puVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x22])) {
    if ((*(byte *)(param_1[0x21] + 0x89 + (ulonglong)param_2 * 0x90) & 1) == 0) {
      (**(code **)(*param_1 + 0x70))(param_1);
    }
    else {
      FUN_148e6a14e(param_1 + 0x16);
    }
    puVar1 = (ushort *)param_1[0x10];
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ee63e0 FUN_148ee63e0 body=519 status=ok
// SIG undefined FUN_148ee63e0(void)

/* WARNING: Removing unreachable block (ram,0x000148ee6539) */
/* WARNING: Removing unreachable block (ram,0x000148ee6545) */
/* WARNING: Removing unreachable block (ram,0x000148ee6549) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x000148ee6570 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_148ee63e0(longlong *param_1,uint param_2)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [3];
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x42])) {
    lVar2 = (ulonglong)param_2 * 0x90;
    if ((*(byte *)(param_1[0x41] + 0x89 + lVar2) & 1) == 0) {
      lVar2 = param_1[0x41] + lVar2;
      FUN_144a787a6(param_1 + 0x6b,lVar2);
      *(byte *)((longlong)param_1 + 0x331) = *(byte *)((longlong)param_1 + 0x331) & 0xfe;
      FUN_14148d276(param_1 + 0x36,(ulonglong)param_2);
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(byte *)((longlong)param_1 + 0x331) = *(byte *)((longlong)param_1 + 0x331) | 2;
      (**(code **)(*param_1 + 0x58))(param_1);
      if (0 < *(longlong *)(lVar2 + 0x80)) {
        local_48 = (undefined4)local_88;
        uStack_44 = local_88._4_4_;
        uStack_40 = (undefined4)uStack_80;
        uStack_3c = uStack_80._4_4_;
        local_38 = (undefined4)local_78;
        uStack_34 = local_78._4_4_;
        uStack_30 = uStack_70;
        uStack_2c = uStack_6c;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = uStack_90;
        uStack_4c = uStack_8c;
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = uStack_a0;
        uStack_5c = uStack_9c;
        local_98 = (longlong *)0x0;
        local_a8 = FUN_144323b62;
        local_88 = &PTR_LAB_14b9d8a20;
        uStack_80 = param_1;
        local_78 = &local_a8;
        uStack_b0 = uStack_70;
        uStack_ac = uStack_6c;
        uStack_54 = 0;
        local_58 = 0;
        local_68[1] = 0;
        local_88 = &PTR_LAB_14b9d8a20;
        local_98 = (longlong *)0x0;
        local_a8 = FUN_144323b62;
        uStack_cc = uStack_8c;
        uStack_d0 = uStack_90;
        local_d8 = 0;
        uStack_dc = uStack_9c;
        uStack_e0 = uStack_a0;
        local_e8 = 0;
        local_68[0] = param_2;
        uVar3 = (*(code *)&LAB_144323c62)();
        FUN_144323b62(uVar3,local_68);
        if (local_a8 != (code *)0x0) {
          plVar4 = &local_88;
          if (local_98 != (longlong *)0x0) {
            plVar4 = local_98;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    else {
      FUN_148e6a14e(param_1 + 0x36,param_2);
    }
    puVar1 = (ushort *)param_1[0x10];
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0xf) & 0x3f));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee65e8 FUN_148ee65e8 body=34 status=ok
// SIG undefined FUN_148ee65e8(void)

void FUN_148ee65e8(longlong param_1)

{
  ushort *puVar1;
  
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) ^ 1;
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee660a FUN_148ee660a body=34 status=ok
// SIG undefined FUN_148ee660a(void)

void FUN_148ee660a(longlong param_1)

{
  ushort *puVar1;
  
  *(byte *)(param_1 + 0x1c0) = *(byte *)(param_1 + 0x1c0) ^ 1;
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee662c FUN_148ee662c body=118 status=ok
// SIG undefined FUN_148ee662c(void)

longlong FUN_148ee662c(longlong param_1)

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
    return local_28 + 0x4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee66a4 FUN_148ee66a4 body=138 status=ok
// SIG undefined FUN_148ee66a4(void)

void FUN_148ee66a4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x48);
  FUN_144a787a6(param_1 + 6,param_2 + 0x88);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  return;
}



// FUNCTION 148ee672e FUN_148ee672e body=124 status=ok
// SIG undefined FUN_148ee672e(void)

ulonglong FUN_148ee672e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_1 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*param_2 + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_148ee679e;
LAB_148ee6766:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee6766;
      }
      if (uVar5 != uVar2) {
        return CONCAT71((int7)((ulonglong)*param_2 >> 8),1);
      }
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
LAB_148ee679e:
  return (ulonglong)CONCAT31((int3)((uint)(int)param_1[5] >> 8),(int)param_1[5] != (int)param_2[5]);
}



// FUNCTION 148ee67aa FUN_148ee67aa body=133 status=ok
// SIG undefined FUN_148ee67aa(void)

ulonglong FUN_148ee67aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar3 = FUN_148ee672e();
  if (cVar3 == '\0') {
    uVar4 = *(uint *)(param_2 + 0x28);
    if ((int)*(uint *)(param_1 + 0x28) < (int)*(uint *)(param_2 + 0x28)) {
      uVar4 = *(uint *)(param_1 + 0x28);
    }
    if (uVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar2 = *(longlong *)(param_2 + 0x20);
      uVar5 = (ulonglong)uVar4;
      lVar6 = uVar5 * 0x110;
      lVar7 = 0;
      do {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        if (((*(byte *)(lVar2 + 0xc0 + lVar7) ^ *(byte *)(lVar1 + 0xc0 + lVar7)) & 0x3b) != 0) {
          return uVar5;
        }
        if (*(char *)(lVar1 + 0xb8 + lVar7) != *(char *)(lVar2 + 0xb8 + lVar7)) {
          return uVar5;
        }
        if (*(int *)(lVar1 + 0x20 + lVar7) != *(int *)(lVar2 + 0x20 + lVar7)) {
          return uVar5;
        }
        lVar7 = lVar7 + 0x110;
      } while (lVar6 - lVar7 != 0);
    }
  }
  return 0;
}



// FUNCTION 148ee6830 FUN_148ee6830 body=630 status=ok
// SIG undefined FUN_148ee6830(void)

/* WARNING: Removing unreachable block (ram,0x000148ee6977) */
/* WARNING: Removing unreachable block (ram,0x000148ee6a22) */
/* WARNING: Removing unreachable block (ram,0x000148ee6986) */
/* WARNING: Removing unreachable block (ram,0x000148ee6a31) */

void FUN_148ee6830(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x2b0);
  iVar2 = *(int *)(param_1 + 700);
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b8));
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 700) != 0)) {
    FUN_148e23c9e(plVar1,0);
  }
  iVar2 = *(int *)(param_1 + 0x450);
  if (((longlong)iVar2 < 0) || (*(int *)(param_1 + 0x418) <= iVar2)) {
LAB_148ee68cb:
    lVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x32c);
    if ((int)uVar3 < 0) goto LAB_148ee68cb;
    lVar6 = (longlong)iVar2 * 0x30;
    if (*(int *)(*(longlong *)(param_1 + 0x410) + 0x28 + lVar6) <= (int)uVar3) goto LAB_148ee68cb;
    lVar6 = (ulonglong)uVar3 * 0x110 + *(longlong *)(*(longlong *)(param_1 + 0x410) + 0x20 + lVar6);
  }
  if (*(char *)(param_1 + 0x3a8) == '\x01') {
    puVar7 = &DAT_14cbe3c38;
  }
  else {
    if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0xc0) & 0x40) == 0)) goto LAB_148ee698b;
    puVar7 = &DAT_14cbe3c28;
  }
  FUN_146637162(&local_40,&DAT_14cbe3c18,puVar7);
  iVar2 = *(int *)(param_1 + 0x2b8);
  *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
    FUN_146638242(plVar1,iVar2);
  }
  lVar6 = *plVar1;
  lVar5 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar6 + lVar5) = 0;
  *(undefined8 *)(lVar6 + lVar5) = local_40;
  *(undefined4 *)(lVar6 + 8 + lVar5) = (undefined4)local_38;
  *(undefined4 *)(lVar6 + 0xc + lVar5) = local_38._4_4_;
  *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x10 + lVar5) = local_30;
  *(undefined4 *)(lVar6 + 0x18 + lVar5) = (undefined4)local_28;
  *(undefined4 *)(lVar6 + 0x1c + lVar5) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
LAB_148ee698b:
  FUN_146637162(&local_40,&DAT_14cbe3c08,&DAT_14cbe3c48);
  iVar2 = *(int *)(param_1 + 0x2b8);
  *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
    FUN_146638242(plVar1,iVar2);
  }
  lVar6 = *plVar1;
  lVar5 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar6 + lVar5) = 0;
  *(undefined8 *)(lVar6 + lVar5) = local_40;
  *(undefined4 *)(lVar6 + 8 + lVar5) = (undefined4)local_38;
  *(undefined4 *)(lVar6 + 0xc + lVar5) = local_38._4_4_;
  *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x10 + lVar5) = local_30;
  *(undefined4 *)(lVar6 + 0x18 + lVar5) = (undefined4)local_28;
  *(undefined4 *)(lVar6 + 0x1c + lVar5) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  puVar4 = *(ushort **)(param_1 + 0x80);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee6aa8 FUN_148ee6aa8 body=68 status=ok
// SIG undefined FUN_148ee6aa8(void)

longlong FUN_148ee6aa8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x450);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x418))) {
    uVar2 = *(uint *)(param_1 + 0x32c);
    if (-1 < (int)uVar2) {
      lVar3 = (longlong)iVar1 * 0x30;
      if ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 0x410) + 0x28 + lVar3)) {
        return (ulonglong)uVar2 * 0x110 +
               *(longlong *)(*(longlong *)(param_1 + 0x410) + 0x20 + lVar3);
      }
    }
  }
  return 0;
}



// FUNCTION 148ee6b08 FUN_148ee6b08 body=316 status=ok
// SIG undefined FUN_148ee6b08(void)

void FUN_148ee6b08(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uVar1 = *(uint *)(param_1 + 0x418);
  uVar2 = *(undefined8 *)(param_1 + 0x410);
  local_48 = uVar1;
  if (uVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_148ca8a70(&local_50,uVar1,0);
    FUN_148ca8ae3(local_50,uVar2,uVar1);
  }
  FUN_148ee6316(param_1);
  uVar1 = local_48;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x418);
  if (*(uint *)(param_1 + 0x418) == local_48) {
    if (uVar8 == 0) goto LAB_148ee6bd3;
    lVar4 = *(longlong *)(param_1 + 0x410);
    bVar5 = 0;
    bVar6 = 0;
    lVar7 = local_50;
    do {
      bVar3 = FUN_148ee672e(lVar4,lVar7);
      bVar5 = bVar5 | bVar3;
      bVar3 = FUN_148ee67aa(lVar4,lVar7);
      bVar6 = bVar6 | bVar3;
      lVar7 = lVar7 + 0x30;
      lVar4 = lVar4 + 0x30;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if ((bVar5 & 1) == 0) {
      if ((bVar6 & 1) != 0) {
        *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
      }
      goto LAB_148ee6bd3;
    }
  }
  *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
LAB_148ee6bd3:
  if (DAT_14c76409a == '\x01') {
    bVar9 = *(int *)(param_1 + 0x460) == 0;
  }
  else {
    bVar9 = false;
  }
  *(bool *)(param_1 + 0x118) = bVar9;
  *(bool *)(param_1 + 0x218) = bVar9;
  FUN_148ca88bf(local_50,uVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee6c46 FUN_148ee6c46 body=2770 status=ok
// SIG undefined FUN_148ee6c46(void)

void FUN_148ee6c46(longlong param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong *plVar2;
  ushort *puVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined **local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e8 [2];
  undefined8 local_1d8;
  longlong *local_1d0;
  ulonglong local_1c8;
  longlong *plStack_1c0;
  longlong *local_1b8 [2];
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong local_198 [2];
  longlong *local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong *plStack_160;
  longlong *local_158 [2];
  longlong *local_148 [2];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined **local_c8;
  ulonglong *puStack_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78 [2];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_130 = 0;
  uStack_128 = 0;
  local_138 = &PTR_FUN_14b9d8630;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  plVar6 = (longlong *)FUN_145917192();
  lVar7 = *plVar6;
  SRWLock = (PSRWLOCK)(lVar7 + 0x58);
  AcquireSRWLockShared(SRWLock);
  FUN_14135388e(param_1,&local_c8);
  lVar7 = FUN_148e1b2aa(lVar7,&local_c8);
  if (local_c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  if (lVar7 != 0) {
    FUN_144245026(&local_138,lVar7,param_1 + 0x468);
  }
  FUN_1400b22c2(&local_c8,"discovered");
  local_210 = param_1 + 0x468;
  FUN_144244f38(&local_138,&local_c8,param_1 + 0x468);
  if (local_c8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  lVar7 = param_1 + 0xb0;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    ppuVar16 = *(undefined ***)(param_1 + 0x108);
    ppuVar15 = ppuVar16 + (longlong)*(int *)(param_1 + 0x110) * 0x12;
    local_1f0 = param_1 + 0x130;
    local_208 = param_1 + 0x120;
    local_218 = lVar7;
    local_200 = ppuVar15;
    local_1f8 = param_1;
    do {
      iVar12 = FUN_145c4ace0(local_1f0,ppuVar16);
      lVar11 = (longlong)iVar12 * 0x90 + *(longlong *)(param_1 + 0x188);
      local_1c8 = local_1c8 & 0xffffffff00000000;
      if (DAT_14c76409a == '\x01') {
        if ((*(byte *)(lVar11 + 0x89) & 2) == 0) {
          FUN_148e6a174(lVar7,ppuVar16);
        }
        else {
          FUN_1412fabe8(local_208,ppuVar16);
          FUN_1410d0f68(lVar7);
        }
      }
      if ((*(byte *)((longlong)ppuVar16 + 0x89) & 1) == 0) {
        if ((longlong)*(int *)(param_1 + 0x448) != 0) {
          lVar14 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
          lVar13 = *(longlong *)(param_1 + 0x440) + 0x88;
          do {
            if (((*(byte *)(lVar13 + 0x38) & 2) == 0) || (DAT_14cbe3a40 == '\x01')) {
              puStack_c0 = &local_1c8;
              local_c8 = ppuVar16;
              cVar5 = FUN_144319f24(&local_c8,lVar13,1);
              if (cVar5 == '\0') {
                FUN_144319f24(&local_c8,lVar13 + 0x18,0);
              }
            }
            lVar13 = lVar13 + 0x110;
            lVar14 = lVar14 + -0x110;
          } while (lVar14 != 0);
        }
        if ((DAT_14c764098 & (int)local_1c8 == 0) == 0) {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_1413a454c(&local_c8,local_1c8 & 0xffffffff,0);
          FUN_140008f88(ppuVar16 + 0xc,&local_c8);
          if (local_c8 != (undefined **)0x0) {
            (**(code **)(*local_c8 + 0x10))();
          }
          plVar6 = plStack_80;
          ppuVar15 = local_200;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          bVar4 = *(byte *)(ppuVar16 + 0x11) & 0xf7 | ((int)local_1c8 == 0 & DAT_14c764099) << 3;
        }
        else {
          FUN_148ee771a(&local_c8,&local_138);
          FUN_144244f38(&local_c8,ppuVar16,local_210);
          if ((longlong)*(int *)(param_1 + 0x448) == 0) {
            iVar12 = 0;
            iVar10 = 0;
          }
          else {
            lVar7 = *(longlong *)(param_1 + 0x440);
            lVar13 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
            iVar12 = 0;
            do {
              bVar4 = (*(code *)*local_c8)(&local_c8,lVar7);
              iVar12 = iVar12 + (uint)bVar4;
              lVar7 = lVar7 + 0x110;
              lVar13 = lVar13 + -0x110;
            } while (lVar13 != 0);
            if ((longlong)*(int *)(param_1 + 0x448) == 0) {
              iVar10 = 0;
            }
            else {
              lVar7 = *(longlong *)(param_1 + 0x440);
              lVar13 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
              iVar10 = 0;
              do {
                bVar4 = (*(code *)*local_138)(&local_138,lVar7);
                iVar10 = iVar10 + (uint)bVar4;
                lVar7 = lVar7 + 0x110;
                lVar13 = lVar13 + -0x110;
                param_1 = local_1f8;
              } while (lVar13 != 0);
            }
          }
          iVar9 = iVar12 - iVar10;
          if (iVar9 == 0 || iVar12 < iVar10) {
            local_1a8 = 0;
            plStack_1a0 = (longlong *)0x0;
            FUN_1413a454c(local_148,local_1c8 & 0xffffffff,0);
            lVar7 = local_218;
          }
          else {
            local_168 = 0;
            plStack_160 = (longlong *)0x0;
            FUN_1413a454c(local_158,iVar9,0);
            FUN_140056680(local_198,L"({0})");
            FUN_140233b1a(local_188,local_198);
            FUN_14023409e(&local_178,local_188,1);
            local_88 = CONCAT44(local_88._4_4_,4);
            FUN_14023423e(local_78,local_158);
            local_e0 = local_68;
            local_e8 = &local_88;
            FUN_14010d304(&local_d8,&local_e8);
            lVar7 = local_218;
            local_f8 = local_178;
            local_f0 = local_170;
            if (local_170 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_170 + 1) = (int)local_170[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_148,&local_f8,&local_d8);
            FUN_14007f2db(local_d8,local_d0);
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
            if (local_78[0] != (longlong *)0x0) {
              (**(code **)(*local_78[0] + 0x10))();
            }
            plVar6 = local_170;
            if (local_170 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_170 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_170)(local_170);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            if (local_158[0] != (longlong *)0x0) {
              (**(code **)(*local_158[0] + 0x10))();
            }
          }
          FUN_140008f88(ppuVar16 + 0xc,local_148);
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          plVar6 = plStack_1a0;
          if (0 < iVar9) {
            if (local_188[0] != (longlong *)0x0) {
              (**(code **)(*local_188[0] + 0x10))();
            }
            plVar6 = plStack_160;
            if (local_198[0] != 0) {
              FUN_1400020a8();
              plVar6 = plStack_160;
            }
          }
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
          *(byte *)(ppuVar16 + 0x11) =
               *(byte *)(ppuVar16 + 0x11) & 0xf7 |
               ((int)local_1c8 == 0 & DAT_14c764099 & iVar9 < 1) << 3;
          FUN_1461edcda(&local_c8);
          bVar4 = *(byte *)(ppuVar16 + 0x11);
          ppuVar15 = local_200;
        }
        *(byte *)(ppuVar16 + 0x11) = bVar4 | 2;
        if ((DAT_14c76409a == '\x01') && ((*(byte *)(lVar11 + 0x89) & 2) == 0)) {
          puStack_c0 = (ulonglong *)0x0;
          local_b8 = 0;
          local_b0 = 0;
          local_c8 = &PTR_FUN_14b9d8630;
          local_98 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          FUN_144244f38(&local_c8,ppuVar16);
          iVar12 = 0;
          if ((longlong)*(int *)(param_1 + 0x448) != 0) {
            lVar7 = *(longlong *)(param_1 + 0x440);
            lVar11 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
            iVar12 = 0;
            do {
              bVar4 = (*(code *)*local_c8)(&local_c8,lVar7);
              iVar12 = iVar12 + (uint)bVar4;
              lVar7 = lVar7 + 0x110;
              lVar11 = lVar11 + -0x110;
            } while (lVar11 != 0);
          }
          FUN_1461edcda(&local_c8);
          lVar7 = local_218;
          if (iVar12 == 0 && (int)local_1c8 == 0) {
            FUN_1412fabe8(local_208,ppuVar16);
            lVar7 = local_218;
            FUN_1410d0f68(local_218);
          }
          else {
            FUN_148e6a174(local_218,ppuVar16);
          }
        }
      }
      ppuVar16 = ppuVar16 + 0x12;
    } while (ppuVar16 != ppuVar15);
  }
  if ((DAT_14c76409a != '\0') && ((longlong)*(int *)(param_1 + 0x110) != 0)) {
    lVar11 = *(longlong *)(param_1 + 0x108);
    lVar13 = (longlong)*(int *)(param_1 + 0x110) * 0x90 + lVar11;
    do {
      if (((*(byte *)(lVar11 + 0x89) & 1) != 0) &&
         (iVar12 = FUN_145c4ace0(param_1 + 0x130,lVar11),
         (*(byte *)(*(longlong *)(param_1 + 0x188) + 0x89 + (longlong)iVar12 * 0x90) & 2) == 0)) {
        if ((longlong)*(int *)(lVar11 + 0x78) != 0) {
          bVar4 = 1;
          lVar14 = 0;
          do {
            bVar4 = bVar4 & (*(byte *)(*(longlong *)(param_1 + 0x108) + 0x89 +
                                      (longlong)*(int *)(*(longlong *)(lVar11 + 0x70) + lVar14) *
                                      0x90) & 2) >> 1;
            lVar14 = lVar14 + 8;
          } while ((longlong)*(int *)(lVar11 + 0x78) * 8 != lVar14);
          if (bVar4 == 0) {
            FUN_148e6a174(lVar7,lVar11);
            goto LAB_148ee76ed;
          }
        }
        FUN_1412fabe8(param_1 + 0x120,lVar11);
        FUN_1410d0f68(lVar7);
      }
LAB_148ee76ed:
      lVar11 = lVar11 + 0x90;
    } while (lVar11 != lVar13);
  }
  local_1c8 = 0;
  plStack_1c0 = (longlong *)0x0;
  iVar12 = 0;
  if ((longlong)*(int *)(param_1 + 0x448) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x440);
    lVar11 = (longlong)*(int *)(param_1 + 0x448) * 0x110;
    iVar12 = 0;
    do {
      bVar4 = (*(code *)*local_138)(&local_138,lVar7);
      iVar12 = iVar12 + (uint)bVar4;
      lVar7 = lVar7 + 0x110;
      lVar11 = lVar11 + -0x110;
    } while (lVar11 != 0);
  }
  FUN_1413a454c(local_1b8,iVar12,0,&local_1c8);
  local_c8 = (undefined **)0x0;
  puStack_c0 = (ulonglong *)0x0;
  local_b8 = local_b8 & 0xffffffff00000000;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_1446ddda2(&local_c8,"FilterHeaderText",0);
  FUN_1410d1eba(local_1e8,&local_c8);
  FUN_14023409e(&local_1d8,local_1e8,1);
  local_88 = CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_1b8);
  local_e8 = &local_88;
  local_e0 = local_68;
  FUN_14010d304(&local_d8);
  local_f8 = local_1d8;
  local_f0 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_148,&local_f8,&local_d8);
  FUN_14007f2db(local_d8,local_d0);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1d0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1d0 + 0x10))(local_1d0);
      }
    }
  }
  if (local_1b8[0] != (longlong *)0x0) {
    (**(code **)(*local_1b8[0] + 0x10))();
  }
  uVar8 = FUN_1447a1f4a(local_148);
  FUN_144a787a6(param_1 + 200,uVar8);
  if (local_148[0] != (longlong *)0x0) {
    (**(code **)(*local_148[0] + 0x10))();
  }
  if (local_1e8[0] != (longlong *)0x0) {
    (**(code **)(*local_1e8[0] + 0x10))();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  plVar6 = plStack_1c0;
  if (plStack_1c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_1c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_1c0)(plStack_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  FUN_1461edcda(&local_138);
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee771a FUN_148ee771a body=177 status=ok
// SIG undefined FUN_148ee771a(void)

undefined8 * FUN_148ee771a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_148eec50e();
  *param_1 = &PTR_FUN_14b9d8630;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 4,iVar1,0);
    FUN_140b8566a(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 6,iVar1,0);
    FUN_140b8566a(param_1[6],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148ee77cc FUN_148ee77cc body=78 status=ok
// SIG undefined FUN_148ee77cc(void)

longlong * FUN_148ee77cc(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1418d3311(*param_1,(int)param_1[1]);
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



// FUNCTION 148ee781a FUN_148ee781a body=245 status=ok
// SIG undefined FUN_148ee781a(void)

void FUN_148ee781a(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  
  if (1 < *(int *)(param_1 + 0x360)) {
    lVar4 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x358) + lVar4 * 2);
      bVar1 = (&DAT_149e377fe)[lVar4];
      iVar5 = (uint)uVar2 - (uint)bVar1;
      if (iVar5 == 0) {
        if (uVar2 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148ee789e;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148ee789b;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  goto LAB_148ee782c;
code_r0x000148ee78db:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148ee78de:
  if (iVar5 == 0) {
LAB_148ee78e7:
    FUN_14431b740(param_1);
  }
  goto LAB_148ee7834;
code_r0x000148ee789b:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148ee789e:
  if (iVar5 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x358) + lVar4 * 2);
      bVar1 = "region"[lVar4];
      iVar5 = (uint)uVar2 - (uint)bVar1;
      if (iVar5 == 0) {
        if (uVar2 == 0) goto LAB_148ee78e7;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148ee78de;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148ee78db;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
LAB_148ee782c:
  FUN_14431a5d2(param_1);
LAB_148ee7834:
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee7910 FUN_148ee7910 body=61 status=ok
// SIG undefined FUN_148ee7910(void)

void FUN_148ee7910(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_148eee0c8(param_1);
    return;
  }
  FUN_148ca88bf(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 148ee794e FUN_148ee794e body=368 status=ok
// SIG undefined FUN_148ee794e(void)

void FUN_148ee794e(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  undefined8 uVar2;
  ushort *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)FUN_145917192();
  lVar6 = *plVar5;
  SRWLock = (PSRWLOCK)(lVar6 + 0x58);
  AcquireSRWLockShared(SRWLock);
  FUN_14135388e(param_1,&local_38);
  lVar6 = FUN_148e1b2aa(lVar6,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  if (lVar6 == 0) {
    local_38 = 0;
    uStack_30 = 0;
  }
  else {
    local_38 = 0;
    iVar1 = *(int *)(lVar6 + 0x30);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    uStack_30 = CONCAT44(uStack_30._4_4_,iVar1);
    if (iVar1 == 0) {
      uStack_30 = 0;
    }
    else {
      FUN_140b856de(&local_38,iVar1,0);
      FUN_140b8566a(local_38,uVar2,iVar1);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x108);
    lVar7 = (longlong)*(int *)(param_1 + 0x110) * 0x90;
    do {
      *(byte *)(lVar6 + 0x88) = *(byte *)(lVar6 + 0x88) & 0x7f;
      cVar4 = FUN_144a23846(&local_38,lVar6);
      *(byte *)(lVar6 + 0x88) = *(byte *)(lVar6 + 0x88) & 0xbf | cVar4 << 6;
      lVar6 = lVar6 + 0x90;
      lVar7 = lVar7 + -0x90;
    } while (lVar7 != 0);
  }
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee7ac0 FUN_148ee7ac0 body=276 status=ok
// SIG undefined FUN_148ee7ac0(void)

void FUN_148ee7ac0(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_145917192();
  lVar3 = *plVar2;
  SRWLock = (PSRWLOCK)(lVar3 + 0x58);
  AcquireSRWLockShared(SRWLock);
  FUN_14135388e(param_1,local_38);
  lVar3 = FUN_148e1b2aa(lVar3,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  if (lVar3 == 0) {
    if (1 < *(int *)(param_1 + 0x360)) goto LAB_148ee7b94;
  }
  else {
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfe | *(byte *)(lVar3 + 0x10);
    if (1 < *(int *)(param_1 + 0x360)) goto LAB_148ee7b94;
    if (1 < *(int *)(lVar3 + 8)) {
      FUN_144a787a6(param_1 + 0x358,lVar3);
      goto LAB_148ee7b94;
    }
  }
  iVar1 = *(int *)(param_1 + 0x350) + -1;
  if (*(int *)(param_1 + 0x350) == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x358,*(undefined8 *)(param_1 + 0x348),iVar1);
  *(byte *)(param_1 + 0x331) = *(byte *)(param_1 + 0x331) | 1;
LAB_148ee7b94:
  iVar1 = FUN_145c4ace0(param_1 + 0x1b0,param_1 + 0x358);
  if (iVar1 != -1) {
    FUN_148ee63e0(param_1,iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee7bd6 FUN_148ee7bd6 body=1454 status=ok
// SIG undefined FUN_148ee7bd6(void)

void FUN_148ee7bd6(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  ushort uVar4;
  longlong lVar5;
  ushort *puVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50 [4];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)*(int *)(param_1 + 0x418) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x410);
    lVar9 = (longlong)*(int *)(param_1 + 0x418) * 0x30 + lVar8;
    do {
      iVar11 = *(int *)(lVar8 + 0x28);
      if ((longlong)iVar11 != 0) {
        lVar5 = *(longlong *)(lVar8 + 0x20);
        lVar12 = 0;
        do {
          pbVar3 = (byte *)(lVar5 + 0xc0 + lVar12);
          *pbVar3 = *pbVar3 & 0xdf;
          lVar12 = lVar12 + 0x110;
        } while ((longlong)iVar11 * 0x110 - lVar12 != 0);
      }
      lVar8 = lVar8 + 0x30;
    } while (lVar8 != lVar9);
  }
  *(uint *)(param_1 + 0x32c) = param_3;
  *(uint *)(param_1 + 0x450) = param_2;
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0x418) <= (int)param_2)) || ((int)param_3 < 0))
  goto LAB_148ee7d1c;
  if (*(int *)(*(longlong *)(param_1 + 0x410) + 0x28 + (ulonglong)param_2 * 0x30) <= (int)param_3)
  goto LAB_148ee7d1c;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x410) + 0x20 + (ulonglong)param_2 * 0x30);
  lVar9 = (ulonglong)param_3 * 0x110;
  bVar7 = 1;
  if (*(char *)(param_1 + 0x3a8) == '\0') {
    bVar7 = *(byte *)(lVar8 + 0xc0 + lVar9) >> 6 & 1;
  }
  *(byte *)(param_1 + 0x3b0) = bVar7;
  puVar10 = &DAT_14cbe3c28;
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    puVar10 = &DAT_14cbe3c38;
  }
  FUN_144a787a6(param_1 + 0x3b8,puVar10);
  if ((*(byte *)(lVar8 + 0xc0 + lVar9) & 1) == 0) {
    *(byte *)(param_1 + 0x408) = *(byte *)(param_1 + 0x408) & 0xfe;
    goto LAB_148ee7cfb;
  }
  lVar8 = lVar8 + lVar9;
  FUN_148ee66a4(param_1 + 0x3c8);
  *(byte *)(lVar8 + 0xc0) = *(byte *)(lVar8 + 0xc0) | 0x20;
  if (1 < *(int *)(param_1 + 0x360)) {
    lVar9 = 0;
    do {
      uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x358) + lVar9 * 2);
      bVar7 = (&DAT_149e377fe)[lVar9];
      iVar11 = (uint)uVar4 - (uint)bVar7;
      if (iVar11 == 0) {
        if (uVar4 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar7 | (uint)uVar4)) goto LAB_148ee7f77;
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[bVar7]) goto code_r0x000148ee7f74;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
  goto LAB_148ee7d6b;
code_r0x000148ee7fc0:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[bVar7];
LAB_148ee7fc3:
  if (iVar11 == 0) {
LAB_148ee7fcc:
    local_f8 = *(longlong **)(lVar8 + 0x70);
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
    local_f0 = *(undefined4 *)(lVar8 + 0x78);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"EchoLog_Region_Format",0);
    FUN_1410d1eba(local_e8,&local_78);
    FUN_14023409e(&local_108,local_e8,1);
    local_50[0] = 4;
    FUN_14023423e(local_40,&local_f8);
    local_98 = local_50;
    local_90 = &local_30;
    FUN_14010d304(&local_88);
    local_a8 = local_108;
    local_a0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    FUN_140008f88(param_1 + 1000,local_b8);
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    lVar8 = lVar8 + 0x70;
    goto LAB_148ee7ef3;
  }
  goto LAB_148ee7cfb;
code_r0x000148ee7f74:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[bVar7];
LAB_148ee7f77:
  if (iVar11 != 0) {
    lVar9 = 0;
    do {
      uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x358) + lVar9 * 2);
      bVar7 = "region"[lVar9];
      iVar11 = (uint)uVar4 - (uint)bVar7;
      if (iVar11 == 0) {
        if (uVar4 == 0) goto LAB_148ee7fcc;
      }
      else {
        if (0x7f < ((uint)bVar7 | (uint)uVar4)) goto LAB_148ee7fc3;
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[bVar7]) goto code_r0x000148ee7fc0;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
LAB_148ee7d6b:
  local_c8 = *(longlong **)(lVar8 + 0x58);
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 8))();
  }
  local_c0 = *(undefined4 *)(lVar8 + 0x60);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddda2(&local_78,"EchoLog_Type_Format",0);
  FUN_1410d1eba(local_e8,&local_78);
  FUN_14023409e(&local_d8,local_e8,1);
  local_50[0] = 4;
  FUN_14023423e(local_40,&local_c8);
  local_98 = local_50;
  local_90 = &local_30;
  FUN_14010d304(&local_88);
  local_a8 = local_d8;
  local_a0 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_b8,&local_a8,&local_88);
  FUN_14007f2db(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  FUN_140008f88(param_1 + 1000,local_b8);
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  lVar8 = lVar8 + 0x58;
LAB_148ee7ef3:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  bVar7 = FUN_144a7c5f6(lVar8);
  *(byte *)(param_1 + 0x408) = *(byte *)(param_1 + 0x408) & 0xfd | (bVar7 ^ 1) * '\x02';
LAB_148ee7cfb:
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x20;
  puVar6 = *(ushort **)(param_1 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
LAB_148ee7d1c:
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee8186 FUN_148ee8186 body=37 status=ok
// SIG undefined FUN_148ee8186(void)

void FUN_148ee8186(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14cbe3c28;
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    puVar1 = &DAT_14cbe3c38;
  }
  FUN_144a787a6(param_1 + 0x3b8,puVar1);
  return;
}



// FUNCTION 148ee81ac FUN_148ee81ac body=244 status=ok
// SIG undefined FUN_148ee81ac(void)

void FUN_148ee81ac(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x110))) {
    FUN_148e6a12e(param_1 + 0xb0,param_2);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x108) + 0x88 + (ulonglong)param_2 * 0x90);
    plVar3 = (longlong *)FUN_145917192(param_1);
    lVar2 = *plVar3;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
    *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
    lVar4 = (ulonglong)param_2 * 0x90 + *(longlong *)(param_1 + 0x108);
    if ((bVar1 & 0x40) == 0) {
      FUN_14135388e(param_1,local_48);
      FUN_148e1b412(lVar2,local_48,lVar4);
    }
    else {
      FUN_14135388e(param_1,local_48);
      FUN_148e1b3c2(lVar2,local_48,lVar4);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
    *(byte *)(param_1 + 0x331) = *(byte *)(param_1 + 0x331) | 2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee82aa FUN_148ee82aa body=68 status=ok
// SIG undefined FUN_148ee82aa(void)

longlong FUN_148ee82aa(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x454);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x418))) {
    uVar2 = *(uint *)(param_1 + 0x328);
    if (-1 < (int)uVar2) {
      lVar3 = (longlong)iVar1 * 0x30;
      if ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 0x410) + 0x28 + lVar3)) {
        return (ulonglong)uVar2 * 0x110 +
               *(longlong *)(*(longlong *)(param_1 + 0x410) + 0x20 + lVar3);
      }
    }
  }
  return 0;
}



// FUNCTION 148ee82ee FUN_148ee82ee body=93 status=ok
// SIG undefined FUN_148ee82ee(void)

longlong FUN_148ee82ee(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xb68))) &&
      (iVar1 = *(int *)(*(longlong *)(param_1 + 0xb60) + 0x254 + (ulonglong)param_2 * 0x280),
      iVar1 != -1)) && ((longlong)*(int *)(param_1 + 0x3f8) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x3f0);
    lVar3 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268;
    do {
      if (*(int *)(lVar2 + 0x254) == iVar1) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x268;
      lVar3 = lVar3 + -0x268;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 148ee834c FUN_148ee834c body=493 status=ok
// SIG undefined FUN_148ee834c(void)

ulonglong FUN_148ee834c(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if ((*(char *)(param_1 + 0x928) == '\0') && (*(int *)(param_1 + 0xb8c) == 1)) {
    uVar1 = *(uint *)(param_1 + 0x328);
    uVar2 = *(uint *)(param_1 + 0x32c);
    if ((uVar1 != uVar2) && ((-1 < (int)uVar1 && ((int)uVar1 < (int)*(uint *)(param_1 + 0xb68))))) {
      lVar6 = *(longlong *)(param_1 + 0xb60);
      lVar11 = lVar6 + (ulonglong)uVar1 * 0x280;
      if (lVar11 != 0) {
        if (*(uint *)(param_1 + 0xb68) <= uVar2) {
          return 0;
        }
        if ((int)uVar2 < 0) {
          return 0;
        }
        if ((*(byte *)(lVar11 + 0x9d) & 4) != 0) {
          return 0;
        }
        lVar10 = lVar6 + (ulonglong)uVar2 * 0x280;
        if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x9d) & 4) == 0)) {
          iVar3 = *(int *)(lVar11 + 0x278);
          if (iVar3 == *(int *)(lVar10 + 0x278)) {
            if (1 < iVar3) {
              lVar12 = 0;
              while( true ) {
                uVar9 = *(ushort *)(*(longlong *)(lVar11 + 0x270) + lVar12);
                uVar4 = (ulonglong)uVar9;
                uVar7 = *(ushort *)(*(longlong *)(lVar10 + 0x270) + lVar12);
                if (uVar9 != uVar7) break;
                if (uVar9 == 0) goto LAB_148ee844f;
LAB_148ee8419:
                lVar12 = lVar12 + 2;
              }
              if ((uVar7 | uVar9) < 0x80) {
                uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
                uVar8 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar8]) goto LAB_148ee8419;
              }
              if (uVar9 != uVar7) {
                return 0;
              }
            }
          }
          else if (*(int *)(lVar10 + 0x278) + iVar3 != 1) {
            return 0;
          }
LAB_148ee844f:
          iVar3 = *(int *)(lVar6 + 0x254 + (ulonglong)uVar1 * 0x280);
          if ((iVar3 != -1) && ((longlong)*(int *)(param_1 + 0x3f8) != 0)) {
            lVar11 = *(longlong *)(param_1 + 0x3f0);
            lVar10 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268;
            do {
              if (*(int *)(lVar11 + 0x254) == iVar3) goto LAB_148ee8493;
              lVar11 = lVar11 + 0x268;
              lVar10 = lVar10 + -0x268;
            } while (lVar10 != 0);
          }
          lVar11 = 0;
LAB_148ee8493:
          uVar1 = *(uint *)(lVar6 + 0x254 + (ulonglong)uVar2 * 0x280);
          uVar4 = (ulonglong)uVar1;
          if ((uVar1 != 0xffffffff) && ((longlong)*(int *)(param_1 + 0x3f8) != 0)) {
            lVar6 = *(longlong *)(param_1 + 0x3f0);
            lVar10 = (longlong)*(int *)(param_1 + 0x3f8) * 0x268;
            do {
              if (*(uint *)(lVar6 + 0x254) == uVar1) goto LAB_148ee84d3;
              lVar6 = lVar6 + 0x268;
              lVar10 = lVar10 + -0x268;
            } while (lVar10 != 0);
          }
          lVar6 = 0;
LAB_148ee84d3:
          if (lVar11 != 0) {
            uVar4 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
            if (*(int *)(lVar11 + 0x254) != -1) {
              return uVar4;
            }
            if (*(int *)(lVar11 + 600) != 0) {
              return uVar4;
            }
            if ((*(byte *)(lVar11 + 0x9f) & 0x20) != 0) {
              return uVar4;
            }
          }
          if (lVar6 != 0) {
            uVar5 = (undefined7)(uVar4 >> 8);
            uVar4 = CONCAT71(uVar5,1);
            if (*(int *)(lVar6 + 0x254) != -1) {
              return uVar4;
            }
            if (*(int *)(lVar6 + 600) == 0) {
              uVar4 = CONCAT71(uVar5,*(undefined1 *)(lVar6 + 0x9f)) & 0xffffffffffffff20;
              return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 5);
            }
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148ee853a FUN_148ee853a body=64 status=ok
// SIG undefined FUN_148ee853a(void)

longlong FUN_148ee853a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148eee8b6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_148eee890(lVar2,1);
  return lVar2;
}



// FUNCTION 148ee857a FUN_148ee857a body=119 status=ok
// SIG undefined FUN_148ee857a(void)

void FUN_148ee857a(longlong param_1,uint param_2)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  
  if ((int)param_2 < 0) {
    bVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x120);
    if ((int)param_2 < iVar3) {
      FUN_148c5648a(param_1 + 0xb0,(ulonglong)param_2 * 0x68 + *(longlong *)(param_1 + 0x118));
      iVar3 = *(int *)(param_1 + 0x120);
    }
    bVar2 = ((int)param_2 < iVar3) * '\x02';
  }
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xfd | bVar2;
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee85f2 FUN_148ee85f2 body=833 status=ok
// SIG undefined FUN_148ee85f2(void)

longlong FUN_148ee85f2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60 [4];
  longlong *local_50 [2];
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_145a03fbe(param_1,param_2 + 0xb);
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfe;
  plVar2 = (longlong *)*param_2;
  *(longlong **)(param_1 + 0x50) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 0x58) = (int)param_2[1];
  plVar2 = (longlong *)param_2[4];
  *(longlong **)(param_1 + 0x60) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 0x68) = (int)param_2[5];
  plVar2 = (longlong *)param_2[2];
  *(longlong **)(param_1 + 0x70) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 0x78) = (int)param_2[3];
  plVar3 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar3;
  *(longlong **)(param_1 + 0x80) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 0x88) = (int)plVar3[1];
  FUN_144a2b0a4(param_2 + 6,param_1 + 0x90);
  FUN_144a2b0a4(param_2 + 8,param_1 + 0xa0);
  lVar5 = param_2[10];
  *(int *)(param_1 + 0xb0) = (int)lVar5;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe | *(byte *)(param_2 + 0x14) & 1;
  *(longlong *)(param_1 + 0xd0) = param_2[0x15];
  *(longlong *)(param_1 + 0xd8) = param_2[0x16];
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  FUN_1413a454c(local_d8,(int)lVar5,0);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"LevelTextFormat",0);
  FUN_1410d1eba(local_108,&local_88);
  FUN_14023409e(&local_f8,local_108,1);
  local_60[0] = 4;
  FUN_14023423e(local_50,local_d8);
  local_a8 = local_60;
  local_a0 = local_40;
  FUN_14010d304(&local_98);
  local_b8 = local_f8;
  local_b0 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_c8,&local_b8,&local_98);
  FUN_14007f2db(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_f0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f0 + 0x10))(local_f0);
      }
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  FUN_140008f88(param_1 + 0x80,local_c8);
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  plVar2 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((longlong)(int)param_2[0x18] != 0) {
    lVar5 = param_2[0x17];
    lVar6 = (longlong)(int)param_2[0x18] * 0x430;
    do {
      uVar4 = FUN_141352650(param_1 + 0xb8);
      FUN_141352d9a(uVar4,lVar5);
      lVar5 = lVar5 + 0x430;
      lVar6 = lVar6 + -0x430;
    } while (lVar6 != 0);
  }
  if ((local_40[0] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee8934 FUN_148ee8934 body=80 status=ok
// SIG undefined FUN_148ee8934(void)

void FUN_148ee8934(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x18) = (int)plVar3[1];
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfb;
  return;
}



// FUNCTION 148ee8984 FUN_148ee8984 body=123 status=ok
// SIG undefined FUN_148ee8984(void)

void FUN_148ee8984(longlong param_1,uint param_2)

{
  ushort *puVar1;
  
  *(uint *)(param_1 + 0x328) = param_2;
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x20;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x4d8) <= (int)param_2)) {
    FUN_1461cf39e(param_1 + 0x3d8,0);
    *(byte *)(param_1 + 0x4b8) = *(byte *)(param_1 + 0x4b8) & 0xfe;
  }
  else {
    FUN_148caac8a(param_1 + 0x3d8,(ulonglong)param_2 * 0xe0 + *(longlong *)(param_1 + 0x4d0));
    *(byte *)(param_1 + 0x4b8) = *(byte *)(param_1 + 0x4b8) | 1;
  }
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee8a50 FUN_148ee8a50 body=265 status=ok
// SIG undefined FUN_148ee8a50(void)

void FUN_148ee8a50(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar5 = *(uint *)(param_1 + 0x4d8);
  if ((*(byte *)(param_1 + 0x3a0) & 1) != 0) {
    uVar5 = *(uint *)(param_1 + 0x4d8) - *(int *)(param_1 + 0x3a8);
    if ((int)*(uint *)(param_1 + 0x3a4) <= (int)uVar5) {
      uVar5 = *(uint *)(param_1 + 0x3a4);
    }
  }
  iVar6 = *(int *)(param_1 + 0x390);
  uVar2 = *(uint *)(param_1 + 0x3b0);
  uVar4 = uVar5;
  if ((int)uVar5 < (int)uVar2) {
    uVar4 = uVar2;
  }
  if ((int)uVar2 < 1) {
    uVar4 = uVar5;
  }
  uVar8 = (ulonglong)uVar4;
  if ((0 < iVar6) && ((int)uVar4 % iVar6 != 0)) {
    uVar8 = (ulonglong)((uVar4 + iVar6) - (int)uVar4 % iVar6);
  }
  iVar7 = (int)uVar8;
  FUN_148ee8b5a((longlong *)(param_1 + 0x4c0),uVar8);
  iVar6 = *(int *)(param_1 + 0x4d8);
  if (*(int *)(param_1 + 0x4d8) <= iVar7) {
    iVar6 = iVar7;
  }
  *(int *)(param_1 + 0x3b4) = iVar6;
  if (iVar7 != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar5 = (uint)uVar10;
      if ((*(byte *)(param_1 + 0x3a0) & 1) != 0) {
        uVar5 = *(int *)(param_1 + 0x3a8) + uVar5;
      }
      if (((int)uVar5 < 0) || (*(int *)(param_1 + 0x4d8) <= (int)uVar5)) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x4c0) + 0x48 + lVar9);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        FUN_148caac8a(*(longlong *)(param_1 + 0x4c0) + lVar9,
                      (ulonglong)uVar5 * 0xe0 + *(longlong *)(param_1 + 0x4d0));
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0xe0;
    } while (uVar8 != uVar10);
  }
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ee8b5a FUN_148ee8b5a body=121 status=ok
// SIG undefined FUN_148ee8b5a(void)

void FUN_148ee8b5a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148eeea8e(param_1,iVar1);
    }
    FUN_148eeea65((longlong)iVar1 * 0xe0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148eeeb22(param_1,param_2,iVar1 - param_2);
    FUN_148eeeb84(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148ee8bd4 FUN_148ee8bd4 body=435 status=ok
// SIG undefined FUN_148ee8bd4(void)

void FUN_148ee8bd4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  ushort *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong local_130;
  undefined1 local_128 [224];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = (longlong *)(param_1 + 0x4d0);
  iVar1 = *(int *)(param_1 + 0x4dc);
  FUN_145c9035f(*(undefined8 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4d8));
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4dc) != 0)) {
    FUN_148eeec30(local_138);
  }
  if ((longlong)*(int *)(param_1 + 0x4e8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x4e0);
    local_130 = (longlong)*(int *)(param_1 + 0x4e8) * 0xe8 + lVar9;
    do {
      FUN_148ee85f2(local_128,lVar9);
      iVar1 = *(int *)(param_1 + 0x508);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x500);
        uVar10 = 0;
        do {
          pcVar3 = *(code **)(lVar2 + uVar10);
          if (pcVar3 != (code *)0x0) {
            plVar4 = *(longlong **)(lVar2 + 0x10 + uVar10);
            plVar8 = (longlong *)(lVar2 + 0x20 + uVar10);
            if (plVar4 != (longlong *)0x0) {
              plVar8 = plVar4;
            }
            uVar7 = (**(code **)(*plVar8 + 8))();
            cVar6 = (*pcVar3)(uVar7,local_128);
            if (cVar6 == '\0') {
              if ((int)(~uVar10 >> 6) != 0) goto LAB_148ee8cba;
              break;
            }
          }
          uVar10 = uVar10 + 0x40;
        } while ((longlong)iVar1 * 0x40 != uVar10);
      }
      iVar1 = *(int *)(param_1 + 0x4d8);
      *(uint *)(param_1 + 0x4d8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x4dc) < iVar1 + 1U) {
        FUN_148eeea8e(local_138,iVar1);
      }
      FUN_148eeec60((longlong)iVar1 * 0xe0 + *local_138,local_128);
LAB_148ee8cba:
      FUN_145c903c6(local_128);
      lVar9 = lVar9 + 0xe8;
    } while (lVar9 != local_130);
  }
  puVar5 = *(ushort **)(param_1 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee8d88 FUN_148ee8d88 body=421 status=ok
// SIG undefined FUN_148ee8d88(void)

void FUN_148ee8d88(longlong param_1)

{
  int iVar1;
  undefined ***pppuVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x360);
  if (iVar1 < 2) {
LAB_148ee8e10:
    local_30 = &LAB_144326746;
  }
  else {
    if (iVar1 == DAT_14cbe4048) {
      lVar4 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x358) + lVar4);
        uVar5 = (ulonglong)uVar6;
        uVar7 = *(ushort *)(DAT_14cbe4040 + lVar4);
        if (uVar6 != uVar7) break;
        if (uVar6 == 0) goto LAB_148ee8e10;
LAB_148ee8de3:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar3 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee8de3;
      }
      if (uVar6 != uVar7) goto LAB_148ee8e97;
      goto LAB_148ee8e10;
    }
    if (DAT_14cbe4048 + iVar1 == 1) goto LAB_148ee8e10;
LAB_148ee8e97:
    if (iVar1 == DAT_14cbe4058) {
      lVar4 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x358) + lVar4);
        uVar5 = (ulonglong)uVar6;
        uVar7 = *(ushort *)(DAT_14cbe4050 + lVar4);
        if (uVar6 != uVar7) break;
        if (uVar6 == 0) goto LAB_148ee8f0a;
LAB_148ee8ece:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar3 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_148ee8ece;
      }
      if (uVar6 != uVar7) goto LAB_148ee8e6e;
    }
    else if (DAT_14cbe4058 + iVar1 != 1) goto LAB_148ee8e6e;
LAB_148ee8f0a:
    local_30 = &LAB_14432674a;
  }
  local_38 = &PTR_LAB_14b9d8b00;
  local_48 = (undefined ***)0x0;
  local_58[0] = &LAB_148eef16e;
  FUN_148eeed9e(*(undefined8 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4d8),local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
LAB_148ee8e6e:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee8f2e FUN_148ee8f2e body=32 status=ok
// SIG undefined FUN_148ee8f2e(void)

longlong FUN_148ee8f2e(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x4c8))) {
    return (ulonglong)param_2 * 0xe0 + *(longlong *)(param_1 + 0x4c0);
  }
  return 0;
}



// FUNCTION 148ee8f4e FUN_148ee8f4e body=249 status=ok
// SIG undefined FUN_148ee8f4e(void)

void FUN_148ee8f4e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x3a0) & 2) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"BackpackFullWarning",0);
    FUN_1410d1eba(&local_58,&local_48);
    plVar1 = *(longlong **)(param_1 + 0x3c8);
    if (plVar1 != local_58) {
      *(longlong **)(param_1 + 0x3c8) = local_58;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))(local_58);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x3d0) = local_50;
    *(byte *)(param_1 + 0x4b8) = *(byte *)(param_1 + 0x4b8) | 4;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))(local_58);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_148ee8934(param_1 + 0x3b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee9052 FUN_148ee9052 body=126 status=ok
// SIG undefined FUN_148ee9052(void)

undefined4 FUN_148ee9052(void)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)FUN_148ee662c();
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0x88);
  AcquireSRWLockShared(SRWLock);
  FUN_1446ddc76(local_28,&DAT_14b826fa2,1);
  uVar2 = FUN_148e1d4dc(lVar1,local_28);
  ReleaseSRWLockShared(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee90d2 FUN_148ee90d2 body=62 status=ok
// SIG undefined FUN_148ee90d2(void)

undefined4 FUN_148ee90d2(void)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_141350006();
  lVar1 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar1 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  uVar2 = FUN_148e1abe8(lVar1 + 0x50);
  ReleaseSRWLockShared(SRWLock);
  return uVar2;
}



// FUNCTION 148ee9110 FUN_148ee9110 body=84 status=ok
// SIG undefined FUN_148ee9110(void)

longlong FUN_148ee9110(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 0x38U) {
    FUN_140213274(param_1,0x1c);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  lVar2 = 0;
  do {
    *(short *)(lVar1 + lVar2 * 2) = (short)"character.inventory.rewards."[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x1c);
  *(longlong *)(param_1 + 8) = lVar1 + 0x38;
  return param_1;
}



// FUNCTION 148ee9164 FUN_148ee9164 body=151 status=ok
// SIG undefined FUN_148ee9164(void)

ulonglong FUN_148ee9164(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar4 = (longlong *)FUN_141350006();
  lVar1 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x1c0));
  if (*(int *)(param_1 + 0x530) == *(int *)(lVar1 + 0x1b8)) {
    uVar5 = 0;
  }
  else {
    *(int *)(param_1 + 0x530) = *(int *)(lVar1 + 0x1b8);
    bVar3 = ((*(byte *)(param_1 + 0x3a0) & 2) == 0) !=
            *(int *)(lVar1 + 0x58) <= *(int *)(lVar1 + 0x50);
    if (!bVar3) {
      *(byte *)(param_1 + 0x3a0) =
           *(byte *)(param_1 + 0x3a0) & 0xfd |
           (*(int *)(lVar1 + 0x58) <= *(int *)(lVar1 + 0x50)) * '\x02';
      puVar2 = *(ushort **)(param_1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar3) ^ 1;
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x1c0));
  return uVar5 & 0xffffffff;
}



// FUNCTION 148ee9234 FUN_148ee9234 body=40 status=ok
// SIG undefined FUN_148ee9234(void)

undefined8 FUN_148ee9234(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145966786(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148ee926a FUN_148ee926a body=115 status=ok
// SIG undefined FUN_148ee926a(void)

void FUN_148ee926a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b6bc760;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return;
}



// FUNCTION 148ee92de FUN_148ee92de body=49 status=ok
// SIG undefined FUN_148ee92de(void)

void FUN_148ee92de(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_140df91e0(&DAT_14cbe4238);
  memset(_Dst,0,0xd0);
  FUN_1458760ba(_Dst);
  return;
}



// FUNCTION 148ee9310 FUN_148ee9310 body=44 status=ok
// SIG undefined FUN_148ee9310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ee9310(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbe4244 = _DAT_14cbe4244 + -1;
  *param_1 = DAT_14cbe4238;
  DAT_14cbe4238 = param_1;
  return;
}



// FUNCTION 148ee933c FUN_148ee933c body=44 status=ok
// SIG undefined FUN_148ee933c(void)

void FUN_148ee933c(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0xd0);
  FUN_1458760ba(param_1);
  return;
}



// FUNCTION 148ee9368 FUN_148ee9368 body=103 status=ok
// SIG undefined FUN_148ee9368(void)

undefined8 FUN_148ee9368(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 200) == '\0') {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1 + 8);
    }
    FUN_1447325ac(puVar2,local_18,1);
    uVar1 = FUN_148d33e17(local_18);
  }
  else {
    uVar1 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee93d0 FUN_148ee93d0 body=22 status=ok
// SIG undefined FUN_148ee93d0(void)

undefined8 FUN_148ee93d0(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cbe42e8;
  if (DAT_14cbe42e8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbe42e8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe42e8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbe42e8[0x3a] <= *(int *)((longlong)DAT_14cbe42e8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cbe42e8 + 0x300))(DAT_14cbe42e8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 148ee9436 FUN_148ee9436 body=49 status=ok
// SIG undefined FUN_148ee9436(void)

void FUN_148ee9436(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_140cbef0c(&DAT_14cbe4378);
  memset(_Dst,0,0xb0);
  FUN_148be8016(_Dst);
  return;
}



// FUNCTION 148ee9468 FUN_148ee9468 body=44 status=ok
// SIG undefined FUN_148ee9468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ee9468(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbe4384 = _DAT_14cbe4384 + -1;
  *param_1 = DAT_14cbe4378;
  DAT_14cbe4378 = param_1;
  return;
}



// FUNCTION 148ee9494 FUN_148ee9494 body=44 status=ok
// SIG undefined FUN_148ee9494(void)

void FUN_148ee9494(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0xb0);
  FUN_148be8016(param_1);
  return;
}



// FUNCTION 148ee94c0 FUN_148ee94c0 body=97 status=ok
// SIG undefined FUN_148ee94c0(void)

longlong * FUN_148ee94c0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((DAT_14cb8d378 != 0) &&
     (plVar1 = (longlong *)FUN_144837462(DAT_14cb8d378,param_1), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465c62fc();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148ee9522 FUN_148ee9522 body=50 status=ok
// SIG undefined FUN_148ee9522(void)

void FUN_148ee9522(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414015aa(&DAT_14cbe4470);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_1458f9bb8(puVar1);
  return;
}



// FUNCTION 148ee9554 FUN_148ee9554 body=44 status=ok
// SIG undefined FUN_148ee9554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ee9554(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbe447c = _DAT_14cbe447c + -1;
  *param_1 = DAT_14cbe4470;
  DAT_14cbe4470 = param_1;
  return;
}



// FUNCTION 148ee9580 FUN_148ee9580 body=50 status=ok
// SIG undefined FUN_148ee9580(void)

void FUN_148ee9580(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1458f9bb8(param_1);
  return;
}



// FUNCTION 148ee95da FUN_148ee95da body=8 status=ok
// SIG undefined FUN_148ee95da(void)

undefined8 FUN_148ee95da(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x390);
}



// FUNCTION 148ee95e2 FUN_148ee95e2 body=50 status=ok
// SIG undefined FUN_148ee95e2(void)

void FUN_148ee95e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_148c05e8c();
  if (lVar1 != 0) {
    FUN_14112d480(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148ee982c FUN_148ee982c body=346 status=ok
// SIG undefined FUN_148ee982c(void)

void * FUN_148ee982c(longlong *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) &&
      (lVar6 = FUN_14119d4d6(), lVar6 != 0)) &&
     (((lVar5 = FUN_140334a94(lVar6,lVar5), lVar5 != 0 &&
       (lVar5 = *(longlong *)(lVar5 + 0x448), lVar5 != 0)) &&
      ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)))) {
    memcpy(param_2,(void *)(lVar5 + 0x440),0x98);
    cVar1 = *(char *)(lVar5 + 0x4dc);
    *(char *)((longlong)param_2 + 0x9c) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined4 *)((longlong)param_2 + 0x98) = *(undefined4 *)(lVar5 + 0x4d8);
    }
    *(undefined4 *)((longlong)param_2 + 0xa8) = *(undefined4 *)(lVar5 + 0x4e8);
    *(undefined8 *)((longlong)param_2 + 0xa0) = *(undefined8 *)(lVar5 + 0x4e0);
    FUN_144903306((longlong)param_2 + 0xb0,lVar5 + 0x4f0);
    uVar2 = *(undefined8 *)(lVar5 + 0xdb8);
    uVar3 = *(undefined8 *)(lVar5 + 0xdc0);
    uVar4 = *(undefined8 *)(lVar5 + 0xdc8);
    *(undefined8 *)((longlong)param_2 + 0x970) = *(undefined8 *)(lVar5 + 0xdb0);
    *(undefined8 *)((longlong)param_2 + 0x978) = uVar2;
    *(undefined8 *)((longlong)param_2 + 0x980) = uVar3;
    *(undefined8 *)((longlong)param_2 + 0x988) = uVar4;
    cVar1 = *(char *)(lVar5 + 0xe30);
    *(char *)((longlong)param_2 + 0x9f0) = cVar1;
    if (cVar1 == '\x01') {
      puVar7 = (undefined8 *)(lVar5 + 0xdd0);
      puVar8 = (undefined8 *)((longlong)param_2 + 0x990);
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined8 *)((longlong)param_2 + 0xa20) = *(undefined8 *)(lVar5 + 0xe60);
    uVar2 = *(undefined8 *)(lVar5 + 0xe40);
    uVar3 = *(undefined8 *)(lVar5 + 0xe48);
    uVar4 = *(undefined8 *)(lVar5 + 0xe58);
    *(undefined8 *)((longlong)param_2 + 0xa10) = *(undefined8 *)(lVar5 + 0xe50);
    *(undefined8 *)((longlong)param_2 + 0xa18) = uVar4;
    *(undefined8 *)((longlong)param_2 + 0xa00) = uVar2;
    *(undefined8 *)((longlong)param_2 + 0xa08) = uVar3;
    return param_2;
  }
  FUN_1400e6e60(param_2);
  return param_2;
}



// FUNCTION 148ee9986 FUN_148ee9986 body=660 status=ok
// SIG undefined FUN_148ee9986(void)

void FUN_148ee9986(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_1[0x18] == 0) || ((char)param_1[0x164] != '\0')) goto LAB_148ee99bc;
  FUN_140bd4428(param_1[0x18],0,1);
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 == 0) goto LAB_148ee99bc;
  iVar2 = (int)param_1[0x17];
  if (((longlong)iVar2 < 0) || ((int)param_1[6] <= iVar2)) goto LAB_148ee99bc;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0x800000100;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  lVar11 = (longlong)iVar2 * 0x28 + param_1[5];
  lVar6 = FUN_14479d2ce(lVar11);
  if (lVar6 == 0) {
    if (*(longlong *)(lVar11 + 8) != 0) {
      lVar6 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar6 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(lVar11,lVar6);
        if (lVar6 == 0) goto LAB_148ee9b42;
      }
      else {
        uVar3 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar11,lVar6);
        }
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_148ee9a6e;
    }
LAB_148ee9b42:
    lVar9 = 0;
  }
  else {
LAB_148ee9a6e:
    lVar11 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) ||
        (lVar11 = FUN_1459f33da(), lVar11 == 0)) ||
       (*(int *)(lVar6 + 0x38) < *(int *)(lVar11 + 0x38))) goto LAB_148ee9b42;
    lVar9 = 0;
    if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
        lVar11 + 0x30) {
      lVar9 = lVar6;
    }
  }
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  uVar7 = FUN_141037e38(lVar5,lVar9,&local_108,&local_a8);
  plVar1 = param_1 + 0x1c;
  FUN_14485c47a(plVar1,uVar7);
  if (local_68 != 0) {
    plVar10 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar10 = local_48;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  cVar4 = FUN_144729dda(plVar1);
  if (cVar4 != '\0') {
    uVar7 = FUN_14479d2ce(plVar1);
    uVar8 = FUN_14479d2ce(plVar1);
    FUN_148ee9e38(param_1,&local_a8,uVar8);
    local_118 = 0;
    FUN_1413d4c10(uVar7,&local_a8,0,0);
  }
LAB_148ee99bc:
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ee9c1c FUN_148ee9c1c body=240 status=ok
// SIG undefined FUN_148ee9c1c(void)

void FUN_148ee9c1c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar4 = *puVar6;
    plVar1 = param_1 + 0x1d;
    lVar3 = FUN_144a61814(uVar4,plVar1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar4,*plVar1);
    }
    *plVar1 = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_140886972();
  }
  if (param_1[0x1a] != 0) {
    FUN_140886972();
  }
  plVar1 = param_1 + 0x1c;
  cVar2 = FUN_144729dda(plVar1);
  if (cVar2 != '\0') {
    uVar4 = FUN_14479d2ce(plVar1);
    plVar5 = (longlong *)FUN_148c05e8c(uVar4);
    if ((plVar5 != (longlong *)0x0) && ((*(byte *)((longlong)plVar5 + 0x9e) & 0x10) != 0)) {
      (**(code **)(*plVar5 + 0xa68))(plVar5);
    }
    uVar4 = FUN_14479d2ce(plVar1);
    FUN_140aeefbc(uVar4,0,1);
    param_1[0x1c] = 0;
  }
  return;
}



// FUNCTION 148ee9d9e FUN_148ee9d9e body=153 status=ok
// SIG undefined FUN_148ee9d9e(void)

void FUN_148ee9d9e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144904448(param_1 + 0xa0);
  if (cVar1 != '\0') {
    local_28 = 0;
    uStack_20 = 0;
    lVar2 = FUN_140206ee8(param_1 + 0x68);
    if (lVar2 == 0) {
      FUN_14072d42a(param_1 + 0xa0,0);
    }
    else {
      local_58 = (undefined4)DAT_14c8463f0;
      uStack_54 = DAT_14c8463f0._4_4_;
      uStack_50 = (undefined4)DAT_14c8463f8;
      uStack_4c = DAT_14c8463f8._4_4_;
      FUN_140d26af5(local_40,lVar2);
      FUN_144a7b030(local_40);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ee9e38 FUN_148ee9e38 body=696 status=ok
// SIG undefined FUN_148ee9e38(void)

undefined8 * FUN_148ee9e38(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  int local_80;
  int local_7c;
  undefined1 local_78 [16];
  double local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar10 = (**(code **)(*param_1 + 0x180))();
  if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1f0) != 0)) {
    lVar11 = FUN_1403ca142();
    plVar1 = *(longlong **)(lVar10 + 0x1f0);
    if ((plVar1 != (longlong *)0x0) && ((lVar11 != 0 && (lVar2 = plVar1[2], lVar2 != 0)))) {
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)) {
        if (*(char *)(param_3 + 0x398) == '\x02') {
          fVar19 = 0.75;
        }
        else {
          fVar19 = *(float *)(&DAT_149ef8380 + (ulonglong)(*(char *)(param_3 + 0x398) == '\x01') * 4
                             );
        }
        iVar9 = FUN_140d01982(plVar1);
        if (iVar9 < 2) {
LAB_148ee9f64:
          lVar11 = FUN_14119d4d6(plVar1);
        }
        else {
          cVar8 = (**(code **)(*plVar1 + 0x498))(plVar1);
          if (cVar8 != '\x05') goto LAB_148ee9f64;
          lVar11 = FUN_148d30a86(plVar1);
        }
        if (lVar11 != 0) {
          lVar10 = FUN_140334a94(lVar11,lVar10);
          if (lVar10 != 0) {
            FUN_14039bfee(lVar10,&local_80,&local_7c);
            fVar15 = (float)local_80;
            local_80 = (int)(fVar19 * fVar15);
            fVar16 = (float)local_7c;
            local_7c = (int)(fVar16 * 0.5);
            dVar17 = (double)(int)(fVar16 * 0.5);
            local_78._8_4_ = SUB84(dVar17,0);
            local_78._0_8_ = (double)(int)(fVar19 * fVar15);
            local_78._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            cVar8 = FUN_147ab7a10(lVar10,local_78,&local_98,&local_b0);
            if (cVar8 != '\0') {
              FUN_144a76660(param_1 + 0x21,local_78);
              fVar19 = (float)(local_68 * local_a0 +
                              (double)local_78._0_8_ * local_b0 + (double)local_78._8_8_ * local_a8)
              ;
              uVar14 = -(uint)(ABS(fVar19) <= 1e-08);
              dVar17 = (double)(float)(uVar14 & 0x42960000 | ~uVar14 & (uint)(75.0 / fVar19));
              dVar18 = local_a8 * dVar17 + local_90;
              FUN_144a7484c(param_1 + 0x21,local_78);
              *param_2 = local_78._0_8_;
              param_2[1] = local_78._8_8_;
              param_2[2] = local_68;
              param_2[3] = uStack_60;
              auVar3._8_4_ = SUB84(dVar18,0);
              auVar3._0_8_ = local_b0 * dVar17 + local_98;
              auVar3._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              *(undefined1 (*) [16])(param_2 + 4) = auVar3;
              uVar6 = DAT_14c846510._4_4_;
              uVar5 = (undefined4)DAT_14c846510;
              uVar20 = (undefined4)DAT_14c846518;
              uVar4 = (ulonglong)DAT_14c846518 >> 0x20;
              param_2[6] = local_a0 * dVar17 + local_88;
              param_2[7] = 0;
              uVar7 = DAT_14c846520;
              *(undefined4 *)(param_2 + 8) = uVar5;
              *(undefined4 *)((longlong)param_2 + 0x44) = uVar6;
              *(undefined4 *)(param_2 + 9) = uVar20;
              *(int *)((longlong)param_2 + 0x4c) = (int)uVar4;
              param_2[10] = uVar7;
              param_2[0xb] = 0;
              goto LAB_148ee9ed5;
            }
          }
        }
      }
    }
  }
  puVar12 = &DAT_14c846480;
  puVar13 = param_2;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
LAB_148ee9ed5:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eea0f2 FUN_148eea0f2 body=240 status=ok
// SIG undefined FUN_148eea0f2(void)

void FUN_148eea0f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0xd8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 200);
  *(longlong *)(param_1 + 0xc0) = lVar3;
  *(longlong *)(param_1 + 200) = lVar4;
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
  *(undefined8 *)(param_1 + 0xd0) = 0;
  plVar5 = *(longlong **)(param_1 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
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
  cVar6 = FUN_144729dda(param_1 + 0xe0);
  if (cVar6 != '\0') {
    uVar7 = FUN_14479d2ce(param_1 + 0xe0);
    FUN_140aeefbc(uVar7,0,1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0xb8) = (*(int *)(param_1 + 0xb8) + 1) % *(int *)(param_1 + 0x30);
  }
  FUN_148ee9986(param_1);
  return;
}



// FUNCTION 148eea1e2 FUN_148eea1e2 body=318 status=ok
// SIG undefined FUN_148eea1e2(void)

ulonglong FUN_148eea1e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar7 = local_18;
  if (uVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0xb8) + 1;
    uVar7 = (longlong)iVar5 / (longlong)(int)uVar3 & 0xffffffff;
    uVar8 = iVar5 % (int)uVar3;
    if (-1 < (int)(uVar3 | uVar8)) {
      lVar6 = FUN_14050fd64();
      local_48 = 0;
      uStack_40 = 0;
      local_50 = &local_29;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      FUN_140a1e0be(lVar6 + 0x1e8,&local_28,
                    *(longlong *)(param_1 + 0x28) + (longlong)(int)uVar8 * 0x28 + 8);
      plVar1 = local_20;
      if ((undefined8 *)(param_1 + 0xd0) != &local_28) {
        *(undefined8 *)(param_1 + 0xd0) = local_28;
        local_28 = 0;
        plVar4 = *(longlong **)(param_1 + 0xd8);
        if (local_20 != plVar4) {
          local_20 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xd8) = plVar1;
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
      }
      plVar1 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_20 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      uVar7 = FUN_1449db362(&local_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eea321 FUN_148eea321 body=37 status=ok
// SIG undefined FUN_148eea321(void)

undefined8 FUN_148eea321(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  FUN_14605e648(param_1,lVar1 + 0x1d0);
  return param_1;
}



// FUNCTION 148eea346 FUN_148eea346 body=259 status=ok
// SIG undefined FUN_148eea346(void)

undefined8 * FUN_148eea346(undefined8 *param_1,longlong param_2)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar2 = FUN_1402735c8();
  if (*(int *)(lVar2 + 0xa28) != *(int *)(lVar2 + 0xa54)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = lVar2 + 0xa58;
    if (*(longlong *)(lVar2 + 0xa60) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0xa60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar2 + 0xa68) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar2 + 0xa20) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar2 + 0xa20) + (longlong)iVar3 * 0x20) == param_2) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
            *param_1 = 0;
            iVar3 = *(int *)(lVar4 + 0x10);
            _Src = *(void **)(lVar4 + 8);
            *(int *)(param_1 + 1) = iVar3;
            if ((longlong)iVar3 != 0) {
              FUN_1446dd670(param_1,iVar3,0);
              memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
              return param_1;
            }
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            return param_1;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 148eea44a FUN_148eea44a body=142 status=ok
// SIG undefined FUN_148eea44a(void)

longlong FUN_148eea44a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar1 = (uint)((ulonglong)DAT_14cbe4520 >> 0x10);
    uVar4 = (uint)DAT_14cbe4520 & 0xffff;
    lVar3 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)DAT_14cbe4520 >> 0x20) +
                             ((uint)DAT_14cbe4520 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x20) == DAT_14cbe4520)
        goto LAB_148eea4cc;
        iVar5 = *(int *)(lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar3 = 0;
LAB_148eea4cc:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 148eea4d8 FUN_148eea4d8 body=273 status=ok
// SIG undefined FUN_148eea4d8(void)

undefined8 *
FUN_148eea4d8(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  plVar1 = (longlong *)(param_1 + 0xac0);
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar5);
  iVar3 = FUN_14128acc0(plVar1,uVar2,param_3);
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_4 + 1);
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_4;
    }
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar4,puVar5);
    iVar3 = FUN_14128acc0(plVar1,uVar2,param_4);
    if (iVar3 == -1) {
      puVar7 = (undefined8 *)(param_1 + 0xab8);
      goto LAB_148eea577;
    }
    iVar3 = *(int *)(param_4 + 1);
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_4;
    }
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar4,puVar5);
  }
  else {
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar4,puVar5);
    param_4 = param_3;
  }
  lVar6 = 0;
  iVar3 = FUN_14128acc0(plVar1,uVar2,param_4);
  if (iVar3 != -1) {
    lVar6 = (longlong)iVar3 * 0x20 + *plVar1;
  }
  puVar7 = (undefined8 *)(lVar6 + 0x10);
LAB_148eea577:
  *param_2 = *puVar7;
  return param_2;
}



// FUNCTION 148eea5ea FUN_148eea5ea body=220 status=ok
// SIG undefined FUN_148eea5ea(void)

void FUN_148eea5ea(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14479d2ce(param_1 + 0x80);
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
  }
  lVar2 = FUN_1400f6f32(uVar3);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x30);
    if (lVar1 != 0 && *(longlong *)(lVar2 + 0x68) != 0) {
      FUN_140ceec26(*(longlong *)(lVar2 + 0x68),local_2c,param_2);
      if (-1 < local_2c[0]) {
        local_48 = 0;
        uStack_40 = 0;
        FUN_140ceec8e(lVar1,local_50,local_2c);
        lVar2 = FUN_1411753f0(param_1,param_2);
        if (lVar2 != 0) {
          FUN_141175460(param_1 + 0x88,lVar2);
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



// FUNCTION 148eea6c8 FUN_148eea6c8 body=53 status=ok
// SIG undefined FUN_148eea6c8(void)

void FUN_148eea6c8(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411753f0();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x10) = param_3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea6fe FUN_148eea6fe body=53 status=ok
// SIG undefined FUN_148eea6fe(void)

void FUN_148eea6fe(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411753f0();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x12) = param_3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea734 FUN_148eea734 body=92 status=ok
// SIG undefined FUN_148eea734(void)

void FUN_148eea734(undefined8 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1411753f0();
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == 2) {
    uVar2 = 0x3f99999a;
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_14b9d4470 + (ulonglong)(param_3 == 1) * 4);
  }
  *(undefined4 *)(lVar1 + 0x24) = uVar2;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea790 FUN_148eea790 body=39 status=ok
// SIG undefined FUN_148eea790(void)

undefined4 FUN_148eea790(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14588001a();
  uVar2 = DAT_14cbe45f8;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x28);
  }
  return uVar2;
}



// FUNCTION 148eea7b8 FUN_148eea7b8 body=67 status=ok
// SIG undefined FUN_148eea7b8(void)

void FUN_148eea7b8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411753f0();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x28) = param_3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea7fc FUN_148eea7fc body=84 status=ok
// SIG undefined FUN_148eea7fc(void)

void FUN_148eea7fc(undefined8 param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1411753f0();
  if (lVar1 == 0) {
    return;
  }
  if (param_3 < 4) {
    uVar2 = *(undefined4 *)(&DAT_14b9d8da8 + (ulonglong)param_3 * 4);
  }
  else {
    uVar2 = 0x3f800000;
  }
  *(undefined4 *)(lVar1 + 0x3c) = uVar2;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea850 FUN_148eea850 body=57 status=ok
// SIG undefined FUN_148eea850(void)

void FUN_148eea850(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_1411753f0();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(lVar4 + 0x2c) = *param_3;
  *(undefined4 *)(lVar4 + 0x30) = uVar1;
  *(undefined4 *)(lVar4 + 0x34) = uVar2;
  *(undefined4 *)(lVar4 + 0x38) = uVar3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea88a FUN_148eea88a body=46 status=ok
// SIG undefined FUN_148eea88a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_148eea88a(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_14588001a(param_1,param_3);
  uVar2 = _DAT_14cbe4614;
  uVar3 = _DAT_14cbe4618;
  uVar4 = _DAT_14cbe461c;
  uVar5 = _DAT_14cbe4620;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x44);
    uVar3 = *(undefined4 *)(lVar1 + 0x48);
    uVar4 = *(undefined4 *)(lVar1 + 0x4c);
    uVar5 = *(undefined4 *)(lVar1 + 0x50);
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return param_2;
}



// FUNCTION 148eea8b8 FUN_148eea8b8 body=57 status=ok
// SIG undefined FUN_148eea8b8(void)

void FUN_148eea8b8(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_1411753f0();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(lVar4 + 0x44) = *param_3;
  *(undefined4 *)(lVar4 + 0x48) = uVar1;
  *(undefined4 *)(lVar4 + 0x4c) = uVar2;
  *(undefined4 *)(lVar4 + 0x50) = uVar3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea8f2 FUN_148eea8f2 body=53 status=ok
// SIG undefined FUN_148eea8f2(void)

void FUN_148eea8f2(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411753f0();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x11) = param_3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea928 FUN_148eea928 body=57 status=ok
// SIG undefined FUN_148eea928(void)

void FUN_148eea928(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_1411753f0();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(lVar4 + 0x14) = *param_3;
  *(undefined4 *)(lVar4 + 0x18) = uVar1;
  *(undefined4 *)(lVar4 + 0x1c) = uVar2;
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea962 FUN_148eea962 body=53 status=ok
// SIG undefined FUN_148eea962(void)

void FUN_148eea962(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411753f0();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x40) = param_3;
  FUN_148eea5ea(param_1,param_2);
  return;
}



// FUNCTION 148eea997 FUN_148eea997 body=48 status=ok
// SIG undefined FUN_148eea997(void)

void FUN_148eea997(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar1 = FUN_1400d6ce6();
    if (lVar1 != 0) {
      FUN_148eea9c8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148eea9c8 FUN_148eea9c8 body=319 status=ok
// SIG undefined FUN_148eea9c8(void)

void FUN_148eea9c8(longlong param_1)

{
  undefined4 *puVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_1 + 0x48;
  local_58 = 0;
  uStack_50 = 0;
  FUN_148eeab50(local_98,&local_58);
  lVar2 = local_58;
  lVar3 = (longlong)(int)uStack_50;
  if (lVar3 != 0) {
    lVar5 = local_58 + 0x10;
    lVar4 = 0;
    do {
      local_90 = (void *)0x0;
      local_88 = *(int *)(lVar2 + 8 + lVar4);
      lVar6 = (longlong)local_88;
      _Src = *(void **)(lVar2 + lVar4);
      if (lVar6 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,local_88,0);
        memcpy(local_90,_Src,lVar6 * 2);
      }
      local_60 = *(undefined4 *)(lVar2 + 0x30 + lVar4);
      puVar1 = (undefined4 *)(lVar5 + lVar4);
      local_80 = *puVar1;
      uStack_7c = puVar1[1];
      uStack_78 = puVar1[2];
      uStack_74 = puVar1[3];
      puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar4);
      local_70 = *puVar1;
      uStack_6c = puVar1[1];
      uStack_68 = puVar1[2];
      uStack_64 = puVar1[3];
      FUN_145832e54(param_1,&local_90);
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x38;
    } while (lVar3 * 0x38 - lVar4 != 0);
  }
  FUN_145ed264a(local_98);
  FUN_1412f41f5(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeab0a FUN_148eeab0a body=68 status=ok
// SIG undefined FUN_148eeab0a(void)

void FUN_148eeab0a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1412f41f5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1461da36c(param_1,param_2);
  return;
}



// FUNCTION 148eeab50 FUN_148eeab50 body=403 status=ok
// SIG undefined FUN_148eeab50(void)

void FUN_148eeab50(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148eeab0a(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      puVar12 = (undefined8 *)((longlong)iStack_64 * 0x48 + *local_80);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_141306894(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar11 = (longlong)iVar2 * 0x38;
      puVar1 = (undefined8 *)(lVar3 + lVar11);
      *(undefined8 *)(lVar3 + lVar11) = 0;
      iVar2 = *(int *)(puVar12 + 1);
      _Src = (void *)*puVar12;
      *(int *)(lVar3 + 8 + lVar11) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar12 + 6);
      uVar4 = *(undefined4 *)(puVar12 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar12 + 0x14);
      uVar6 = *(undefined4 *)(puVar12 + 3);
      uVar7 = *(undefined4 *)((longlong)puVar12 + 0x1c);
      uVar8 = *(undefined4 *)((longlong)puVar12 + 0x24);
      uVar9 = *(undefined4 *)(puVar12 + 5);
      uVar10 = *(undefined4 *)((longlong)puVar12 + 0x2c);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar12 + 4);
      *(undefined4 *)((longlong)puVar1 + 0x24) = uVar8;
      *(undefined4 *)(puVar1 + 5) = uVar9;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar10;
      *(undefined4 *)(puVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
      *(undefined4 *)(puVar1 + 3) = uVar6;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar7;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eead1c FUN_148eead1c body=40 status=ok
// SIG undefined FUN_148eead1c(void)

undefined8 FUN_148eead1c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145982ebc(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148eead52 FUN_148eead52 body=42 status=ok
// SIG undefined FUN_148eead52(void)

void FUN_148eead52(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b827570;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 148eead7c FUN_148eead7c body=140 status=ok
// SIG undefined FUN_148eead7c(void)

undefined8 * FUN_148eead7c(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 != 0) {
    lVar2 = FUN_140391a3c(lVar2);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x38);
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_14b9d86e8;
      puVar3[4] = *(undefined8 *)(param_1 + 0x10);
      puVar3[5] = *(undefined8 *)(param_1 + 0x18);
      *(undefined4 *)(puVar3 + 6) = uVar1;
      *(undefined1 *)((longlong)puVar3 + 0x34) = 1;
      FUN_14039144e(lVar2,puVar3);
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  return param_2;
}



// FUNCTION 148eeae08 FUN_148eeae08 body=128 status=ok
// SIG undefined FUN_148eeae08(void)

void FUN_148eeae08(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 != 0) {
    lVar2 = FUN_140391a3c(lVar2);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x38);
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_14b9d86f8;
      puVar3[4] = *(undefined8 *)(param_1 + 0x10);
      puVar3[5] = *(undefined8 *)(param_1 + 0x18);
      *(undefined4 *)(puVar3 + 6) = uVar1;
      FUN_14039144e(lVar2,puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148eeae88 FUN_148eeae88 body=234 status=ok
// SIG undefined FUN_148eeae88(void)

undefined8 * FUN_148eeae88(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_14479d2ce(param_1 + 8);
  if (lVar3 != 0) {
    lVar3 = FUN_140391a3c(lVar3);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_14b9d86f8;
      puVar4[4] = *(undefined8 *)(param_1 + 0x10);
      puVar4[5] = *(undefined8 *)(param_1 + 0x18);
      *(undefined4 *)(puVar4 + 6) = uVar1;
      FUN_14039144e(lVar3,puVar4);
      if ((*(longlong *)(param_1 + 0x24) != 0) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != -1)) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        *puVar4 = &PTR_FUN_14b9d86f8;
        puVar4[4] = *(undefined8 *)(param_1 + 0x10);
        puVar4[5] = *(undefined8 *)(param_1 + 0x24);
        *(int *)(puVar4 + 6) = iVar2;
        FUN_14039144e(lVar3,puVar4);
      }
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x2c);
  return param_2;
}



// FUNCTION 148eeaf72 FUN_148eeaf72 body=138 status=ok
// SIG undefined FUN_148eeaf72(void)

void FUN_148eeaf72(undefined4 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x1f0) != 0) {
    lVar1 = FUN_140dbafcc();
    if (lVar1 != 0) {
      FUN_148a00168(lVar1,local_30,param_1);
      *param_3 = local_30[0];
      if (DAT_14c950c29 == '\x01') {
        if (local_28 == 0) {
          local_28 = 0;
        }
        else {
          FUN_1456cec3c();
        }
      }
      *(longlong *)(param_3 + 2) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeaffe FUN_148eeaffe body=401 status=ok
// SIG undefined FUN_148eeaffe(void)

void FUN_148eeaffe(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1f0), lVar3 != 0)) {
    lVar2 = FUN_140dbac94(lVar3);
    if (lVar2 != 0) {
      lVar3 = FUN_140dbafcc(lVar3);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_140636ec6(param_2);
        if (plVar4 != (longlong *)0x0) {
          cVar1 = FUN_14612443e();
          if (cVar1 == '\0') {
            FUN_1400b22c2(local_40,"GbxCoreStat.ShowStats 1");
            (**(code **)(*plVar4 + 0xd40))(plVar4,local_60,local_40,1);
            if (local_60[0] != 0) {
              FUN_1400020a8();
            }
            if (local_40[0] != 0) {
              FUN_1400020a8();
            }
            FUN_1400b22c2(local_40,"GbxCoreStat.ShowStatsEditor 1");
            lVar3 = *plVar4;
            plVar5 = local_70;
          }
          else {
            FUN_1400b22c2(local_40,"GbxCoreStat.ShowStats 0");
            (**(code **)(*plVar4 + 0xd40))(plVar4,local_30,local_40,1);
            if (local_30[0] != 0) {
              FUN_1400020a8();
            }
            if (local_40[0] != 0) {
              FUN_1400020a8();
            }
            FUN_1400b22c2(local_40,"GbxCoreStat.ShowStatsEditor 0");
            lVar3 = *plVar4;
            plVar5 = local_50;
          }
          (**(code **)(lVar3 + 0xd40))(plVar4,plVar5,local_40,1);
          if (*plVar5 != 0) {
            FUN_1400020a8();
          }
          if (local_40[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeb190 FUN_148eeb190 body=98 status=ok
// SIG undefined FUN_148eeb190(void)

void FUN_148eeb190(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0x1f0), lVar2 != 0)) {
    lVar1 = FUN_140dbac94(lVar2);
    if (lVar1 != 0) {
      lVar1 = FUN_140dbafcc(lVar2);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
        lVar2 = FUN_14119d4d6(lVar2);
        if (lVar2 != 0) {
          FUN_148eeb1f2(lVar1,*(undefined4 *)(lVar2 + 0xe0));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148eeb1f2 FUN_148eeb1f2 body=228 status=ok
// SIG undefined FUN_148eeb1f2(void)

void FUN_148eeb1f2(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  FUN_140e3418c(&DAT_14cbe489c,local_58,1);
  FUN_140e3418c(&DAT_14cbe4890,local_60,1);
  FUN_14131b4b0(local_48,local_60,local_58,&local_50);
  cVar3 = FUN_141165bc4(local_48);
  if (cVar3 != '\0') {
    FUN_145ef6794(param_1,local_48,param_2);
    FUN_148eebeb2(param_1,param_2);
  }
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeb2d8 FUN_148eeb2d8 body=67 status=ok
// SIG undefined FUN_148eeb2d8(void)

void FUN_148eeb2d8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411c6420();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 4) = param_3;
  FUN_148eebeb2(param_1,param_2);
  return;
}



// FUNCTION 148eeb31c FUN_148eeb31c body=52 status=ok
// SIG undefined FUN_148eeb31c(void)

void FUN_148eeb31c(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_1411c6420();
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *puVar1 = param_3;
  FUN_148eebeb2(param_1,param_2);
  return;
}



// FUNCTION 148eeb350 FUN_148eeb350 body=53 status=ok
// SIG undefined FUN_148eeb350(void)

void FUN_148eeb350(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411c6420();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 1) = param_3;
  FUN_148eebeb2(param_1,param_2);
  return;
}



// FUNCTION 148eeb386 FUN_148eeb386 body=147 status=ok
// SIG undefined FUN_148eeb386(void)

void FUN_148eeb386(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x1f0);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140009b9a(local_28,*param_1);
      FUN_140498822(lVar1 + 0x5c0,local_28);
      if (local_28[0] != (longlong *)0x0) {
        (**(code **)(*local_28[0] + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeb41a FUN_148eeb41a body=308 status=ok
// SIG undefined FUN_148eeb41a(void)

void FUN_148eeb41a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  wchar_t *_Str;
  undefined2 *puVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong *local_60 [2];
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x1f0);
  if ((lVar1 == 0) || ((int)param_1[1] < 2)) goto LAB_148eeb47a;
  if ((int)param_1[1] == 2) {
    fVar6 = 5.0;
LAB_148eeb458:
    uVar2 = 0;
  }
  else {
    if (*(int *)(*param_1 + 0x28) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(*param_1 + 0x20);
    }
    dVar5 = _wtof(_Str);
    fVar6 = (float)dVar5;
    if ((int)param_1[1] < 4) goto LAB_148eeb458;
    if (*(int *)(*param_1 + 0x38) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(*param_1 + 0x30);
    }
    uVar2 = FUN_14052c20c(puVar4);
  }
  lVar3 = FUN_1403ca142();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    FUN_140009b9a(local_50,*param_1 + 0x10);
    FUN_140009b9a(local_60,*param_1);
    local_68 = uVar2;
    FUN_148eef4c4(lVar1 + 0x5f0,local_60,local_50,fVar6);
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
  }
LAB_148eeb47a:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeb550 FUN_148eeb550 body=391 status=ok
// SIG undefined FUN_148eeb550(void)

void FUN_148eeb550(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *_Str;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_2 + 0x1f0);
  if ((lVar1 != 0) && (2 < (int)param_1[1])) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_140009b9a(local_60,*param_1);
      if (*(int *)(*param_1 + 0x18) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(*param_1 + 0x10);
      }
      dVar7 = _wtof(_Str);
      local_78 = 0;
      uStack_70 = 0;
      if (2 < (int)param_1[1]) {
        lVar4 = 2;
        lVar5 = 0x20;
        do {
          FUN_140009b9a(local_88,*param_1 + lVar5);
          uVar2 = uStack_70;
          lVar6 = (longlong)(int)uStack_70;
          uVar3 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
          if (uStack_70._4_4_ < uVar3) {
            FUN_14001d63e(&local_78,uVar2 & 0xffffffff);
          }
          FUN_14023423e(lVar6 * 0x10 + local_78,local_88);
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 0x10;
        } while (lVar4 < (int)param_1[1]);
      }
      FUN_148eef5a2(lVar1 + 0x5d8,local_60,(float)dVar7,&local_78);
      FUN_1401b9920(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_60[0] != (longlong *)0x0) {
        (**(code **)(*local_60[0] + 0x10))();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeb6d8 FUN_148eeb6d8 body=147 status=ok
// SIG undefined FUN_148eeb6d8(void)

void FUN_148eeb6d8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x1f0);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140009b9a(local_28,*param_1);
      FUN_140498822(lVar1 + 0x608,local_28);
      if (local_28[0] != (longlong *)0x0) {
        (**(code **)(*local_28[0] + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeb76c FUN_148eeb76c body=75 status=ok
// SIG undefined FUN_148eeb76c(void)

void FUN_148eeb76c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x1f0);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1447f69b6(lVar1 + 0x638);
      return;
    }
  }
  return;
}



// FUNCTION 148eeb7b8 FUN_148eeb7b8 body=109 status=ok
// SIG undefined FUN_148eeb7b8(void)

void FUN_148eeb7b8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x1f0);
  if (lVar1 != 0) {
    lVar3 = FUN_1403ca142();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = *(undefined2 **)*param_1;
      }
      uVar2 = FUN_14052c20c(puVar4);
      FUN_140898514(lVar1 + 0x620,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148eeb826 FUN_148eeb826 body=67 status=ok
// SIG undefined FUN_148eeb826(void)

void FUN_148eeb826(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411c6420();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  FUN_148eebeb2(param_1,param_2);
  return;
}



// FUNCTION 148eeb86a FUN_148eeb86a body=112 status=ok
// SIG undefined FUN_148eeb86a(void)

void FUN_148eeb86a(undefined8 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1411c6420();
  if (lVar1 == 0) {
    return;
  }
  *(int *)(lVar1 + 0x14) = param_3;
  plVar2 = (longlong *)FUN_144a7d136();
  lVar1 = plVar2[0x22];
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar1 = plVar2[0x22];
  }
  *(float *)(lVar1 + 0x6c) = (float)(param_3 * 10);
  FUN_148eebeb2(param_1,param_2);
  return;
}



// FUNCTION 148eeb8da FUN_148eeb8da body=67 status=ok
// SIG undefined FUN_148eeb8da(void)

void FUN_148eeb8da(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411c6420();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x1c) = param_3;
  FUN_148eebeb2(param_1,param_2);
  return;
}



// FUNCTION 148eeb91e FUN_148eeb91e body=53 status=ok
// SIG undefined FUN_148eeb91e(void)

void FUN_148eeb91e(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1411c6420();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x20) = param_3;
  FUN_148eebeb2(param_1,param_2);
  return;
}



// FUNCTION 148eeb954 FUN_148eeb954 body=117 status=ok
// SIG undefined FUN_148eeb954(void)

undefined8 *
FUN_148eeb954(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b9d8d00;
  FUN_1447a97f4(param_1 + 1);
  FUN_1447a97f4(param_1 + 6,param_3);
  *(undefined1 *)(param_1 + 0xb) = 1;
  lVar2 = 0x70;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xc) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x20) = 0;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x118);
  *(undefined4 *)(param_1 + 0xd) = *param_4;
  return param_1;
}



// FUNCTION 148eeb9cc FUN_148eeb9cc body=118 status=ok
// SIG undefined FUN_148eeb9cc(void)

undefined8 FUN_148eeb9cc(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cbe4f78;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbe4f78 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
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



// FUNCTION 148eeba6c FUN_148eeba6c body=323 status=ok
// SIG undefined FUN_148eeba6c(void)

void FUN_148eeba6c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    *puVar1 = *(undefined8 *)(param_2 + 8);
  }
  else {
    FUN_1400021e4(param_2 + 8,&local_60);
    puVar3 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar3 = local_60;
    }
    FUN_1400021e4(puVar1,&local_70);
    puVar4 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar4 = local_70;
    }
    FUN_140002266(&local_50,L"%s - %s",puVar4,puVar3);
    iVar2 = local_48 + -1;
    if (local_48 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_40,iVar2,local_50,1);
    *puVar1 = local_40;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  FUN_14094f414(param_1 + 0x28,param_2 + 0x28);
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | *(byte *)(param_2 + 0x20);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eebbb0 FUN_148eebbb0 body=769 status=ok
// SIG undefined FUN_148eebbb0(void)

ulonglong FUN_148eebbb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ushort uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  undefined7 uVar5;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *param_2;
  bVar10 = *(longlong *)(param_1 + 0x170) != lVar7;
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,bVar10);
  if (bVar10) {
    *(longlong *)(param_1 + 0x170) = lVar7;
  }
  if (((int)param_2[0x27] < 1) || (*(longlong *)param_2[0x26] == 0)) {
    FUN_140056680(&local_40,&DAT_149dfb77a);
  }
  else {
    FUN_1400021e4((longlong *)param_2[0x26],&local_50);
    uVar2 = local_48 - 1;
    if (local_48 == 0) {
      uVar2 = 0;
    }
    if (0 < (int)uVar2) {
      uVar3 = 0;
      do {
        uVar8 = *(ushort *)(local_50 + uVar3 * 2);
        *(ushort *)(local_50 + uVar3 * 2) = (ushort)(uVar8 - 0x41 < 0x1a) * 0x20 + uVar8;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    local_40 = local_50;
    local_38 = local_48;
    local_34 = local_44;
  }
  if (((int)param_2[0x27] < 2) || (*(longlong *)(param_2[0x26] + 8) == 0)) {
    FUN_140056680(&local_50,&DAT_149dfb77a);
  }
  else {
    FUN_1400021e4(param_2[0x26] + 8,&local_60);
    uVar2 = local_58 - 1;
    if (local_58 == 0) {
      uVar2 = 0;
    }
    if (0 < (int)uVar2) {
      uVar3 = 0;
      do {
        uVar8 = *(ushort *)(local_60 + uVar3 * 2);
        *(ushort *)(local_60 + uVar3 * 2) = (ushort)(uVar8 - 0x41 < 0x1a) * 0x20 + uVar8;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    local_50 = local_60;
    local_48 = local_58;
    local_44 = local_54;
  }
  iVar1 = *(int *)(param_1 + 0x180);
  if (iVar1 == local_38) {
    if (1 < iVar1) {
      lVar7 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x178) + lVar7);
        uVar3 = (ulonglong)uVar8;
        uVar6 = *(ushort *)(local_40 + lVar7);
        if (uVar8 != uVar6) break;
        if (uVar8 == 0) goto LAB_148eebd9b;
LAB_148eebd4f:
        lVar7 = lVar7 + 2;
      }
      if ((uVar6 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        uVar9 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar9]) goto LAB_148eebd4f;
      }
      if (uVar8 != uVar6) goto LAB_148eebd8a;
    }
  }
  else if (iVar1 + local_38 != 1) {
LAB_148eebd8a:
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2((longlong *)(param_1 + 0x178),local_40,iVar1);
    uVar4 = CONCAT71(uVar5,1);
  }
LAB_148eebd9b:
  iVar1 = *(int *)(param_1 + 400);
  if (iVar1 == local_48) {
    if (1 < iVar1) {
      lVar7 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x188) + lVar7);
        uVar3 = (ulonglong)uVar8;
        uVar6 = *(ushort *)(local_50 + lVar7);
        if (uVar8 != uVar6) break;
        if (uVar8 == 0) goto LAB_148eebe2a;
LAB_148eebdde:
        lVar7 = lVar7 + 2;
      }
      if ((uVar6 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        uVar9 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar9]) goto LAB_148eebdde;
      }
      if (uVar8 != uVar6) goto LAB_148eebe19;
    }
  }
  else if (iVar1 + local_48 != 1) {
LAB_148eebe19:
    iVar1 = local_48 + -1;
    if (local_48 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2((longlong *)(param_1 + 0x188),local_50,iVar1);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
LAB_148eebe2a:
  if (*(char *)(param_1 + 0x198) != (char)param_2[0x22]) {
    *(char *)(param_1 + 0x198) = (char)param_2[0x22];
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  if (*(char *)(param_1 + 0x199) != (char)param_2[0x21]) {
    *(char *)(param_1 + 0x199) = (char)param_2[0x21];
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  bVar10 = (int)param_2[0x18] == 1;
  if ((bool)*(char *)(param_1 + 0x19a) != bVar10) {
    *(bool *)(param_1 + 0x19a) = bVar10;
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 148eebeb2 FUN_148eebeb2 body=218 status=ok
// SIG undefined FUN_148eebeb2(void)

void FUN_148eebeb2(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14479d2ce(param_1 + 0x2c);
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
  }
  lVar2 = FUN_1400f6f32(uVar3);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x30);
    if (lVar1 != 0 && *(longlong *)(lVar2 + 0x68) != 0) {
      FUN_140ceec26(*(longlong *)(lVar2 + 0x68),local_2c,param_2);
      if (-1 < local_2c[0]) {
        local_48 = 0;
        uStack_40 = 0;
        FUN_140ceec8e(lVar1,local_50,local_2c);
        lVar2 = FUN_1411c6420(param_1,param_2);
        if (lVar2 != 0) {
          FUN_145ef6206(param_1 + 0x48,param_2,lVar2);
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



// FUNCTION 148eebf8e FUN_148eebf8e body=110 status=ok
// SIG undefined FUN_148eebf8e(void)

void FUN_148eebf8e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xaa0))();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_141246a66();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x2b0))
                (plVar1,CONCAT31((int3)((uint)(param_2 * 2) >> 8),(char)(param_2 * 2) + '\x01'));
    }
  }
  if (*(char *)((longlong)param_1 + 0x7cc) == '\0') {
    FUN_1412b60ee(param_1);
  }
  *(char *)((longlong)param_1 + 0x7cc) = (char)param_2;
  return;
}



// FUNCTION 148eebffc FUN_148eebffc body=68 status=ok
// SIG undefined FUN_148eebffc(void)

void FUN_148eebffc(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xc20);
  memset(_Dst,0,0xc20);
  FUN_148c96122(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148eec068 FUN_148eec068 body=12 status=ok
// SIG undefined FUN_148eec068(void)

void FUN_148eec068(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148eec071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148eec074 FUN_148eec074 body=29 status=ok
// SIG undefined FUN_148eec074(void)

undefined8 FUN_148eec074(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eec092 FUN_148eec092 body=97 status=ok
// SIG undefined FUN_148eec092(void)

undefined8 * FUN_148eec092(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b895fa0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148c6c87a(param_1 + 1,iVar1,0);
    FUN_148c6c8dc(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148eec0f4 FUN_148eec0f4 body=257 status=ok
// SIG undefined FUN_148eec0f4(void)

undefined8 FUN_148eec0f4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  undefined8 local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined1 *local_68 [2];
  longlong local_58 [2];
  undefined **local_48 [4];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = 0;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14b9d8670;
  local_e8[0] = &LAB_148eec340;
  local_98 = 0;
  local_88 = &PTR_LAB_14b9d8690;
  local_a8 = &LAB_148eec3a4;
  local_58[0] = 0;
  local_48[0] = &PTR_LAB_14b9d86b0;
  local_68[0] = &LAB_148eec408;
  local_f8 = local_e8;
  local_f0 = local_28;
  local_c0 = param_1;
  local_80 = param_1;
  local_48[1] = (undefined **)param_1;
  FUN_148eec2ee(param_2);
  do {
    if (*(longlong *)((longlong)local_68 + lVar2) != 0) {
      plVar1 = (longlong *)((longlong)local_48 + lVar2);
      if (*(longlong **)((longlong)local_58 + lVar2) != (longlong *)0x0) {
        plVar1 = *(longlong **)((longlong)local_58 + lVar2);
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    lVar2 = lVar2 + -0x40;
  } while (lVar2 != -0xc0);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eec1f6 FUN_148eec1f6 body=38 status=ok
// SIG undefined FUN_148eec1f6(void)

undefined8 FUN_148eec1f6(undefined8 param_1,int param_2)

{
  FUN_1461edcda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eec21c FUN_148eec21c body=130 status=ok
// SIG undefined FUN_148eec21c(void)

ulonglong FUN_148eec21c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined7 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar10 = 0;
    do {
      pcVar3 = *(code **)(lVar2 + uVar10);
      if (pcVar3 != (code *)0x0) {
        plVar4 = *(longlong **)(lVar2 + 0x10 + uVar10);
        plVar7 = (longlong *)(lVar2 + 0x20 + uVar10);
        if (plVar4 != (longlong *)0x0) {
          plVar7 = plVar4;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar5 = (*pcVar3)(uVar6,param_2);
        if (cVar5 == '\0') {
          uVar8 = CONCAT71(uVar9,(int)(~uVar10 >> 6) == 0);
          break;
        }
      }
      uVar10 = uVar10 + 0x40;
    } while ((longlong)iVar1 * 0x40 != uVar10);
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148eec2a8 FUN_148eec2a8 body=69 status=ok
// SIG undefined FUN_148eec2a8(void)

undefined8 * FUN_148eec2a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d8650;
  FUN_1461edd49(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eec2ee FUN_148eec2ee body=82 status=ok
// SIG undefined FUN_148eec2ee(void)

undefined8 * FUN_148eec2ee(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 6;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148eec462(param_1,uVar2 & 0xffffffff);
    FUN_148eec4ba(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 148eec386 FUN_148eec386 body=29 status=ok
// SIG undefined FUN_148eec386(void)

undefined8 FUN_148eec386(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eec3de FUN_148eec3de body=12 status=ok
// SIG undefined FUN_148eec3de(void)

void FUN_148eec3de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148eec3e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148eec3ea FUN_148eec3ea body=29 status=ok
// SIG undefined FUN_148eec3ea(void)

undefined8 FUN_148eec3ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eec444 FUN_148eec444 body=29 status=ok
// SIG undefined FUN_148eec444(void)

undefined8 FUN_148eec444(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eec462 FUN_148eec462 body=88 status=ok
// SIG undefined FUN_148eec462(void)

void FUN_148eec462(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,0x10);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,0x10);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148eec4ba FUN_148eec4ba body=83 status=ok
// SIG undefined FUN_148eec4ba(void)

void FUN_148eec4ba(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x10);
  puVar4 = (undefined8 *)(param_2 + 0x20);
  do {
    lVar1 = puVar4[-4];
    puVar3[-2] = lVar1;
    *puVar3 = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)puVar4[-2];
      if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
        puVar2 = puVar4;
      }
      (**(code **)*puVar2)(puVar2,puVar3);
    }
    puVar3 = puVar3 + 8;
    puVar4 = puVar4 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148eec50e FUN_148eec50e body=94 status=ok
// SIG undefined FUN_148eec50e(void)

undefined8 * FUN_148eec50e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b9d8650;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148eec462(param_1 + 1,iVar1);
    FUN_148eec4ba(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148eec56c FUN_148eec56c body=29 status=ok
// SIG undefined FUN_148eec56c(void)

undefined8 FUN_148eec56c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eec58a FUN_148eec58a body=38 status=ok
// SIG undefined FUN_148eec58a(void)

undefined8 FUN_148eec58a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_Specialization_Activate",1);
  return param_2;
}



// FUNCTION 148eec5b0 FUN_148eec5b0 body=133 status=ok
// SIG undefined FUN_148eec5b0(void)

longlong FUN_148eec5b0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x430;
    do {
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar5);
      if (cVar2 != '\0') goto LAB_148eec608;
      lVar5 = lVar5 + 0x430;
      lVar6 = lVar6 + -0x430;
    } while (lVar6 != 0);
  }
  lVar5 = 0;
LAB_148eec608:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return lVar5;
}



// FUNCTION 148eec636 FUN_148eec636 body=351 status=ok
// SIG undefined FUN_148eec636(void)

void FUN_148eec636(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int local_68;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    lVar2 = *param_1;
    lVar5 = FUN_148eec9ee(*param_2 + 0x288,lVar2);
    local_68 = 0;
    iVar7 = 0;
    bVar4 = lVar5 == 0;
    do {
      lVar5 = (longlong)iVar7;
      iVar13 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar13 = iVar1;
      }
      lVar3 = *param_2;
      lVar12 = lVar5 * 0x90;
      lVar10 = lVar2 + 0x90 + lVar12;
      iVar8 = iVar7;
      do {
        lVar5 = lVar5 + 1;
        iVar9 = iVar13;
        if (lVar11 <= lVar5) break;
        lVar6 = FUN_148eec9ee(lVar3 + 0x288,lVar10);
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + 0x90;
        iVar9 = iVar8;
      } while (bVar4 == (lVar6 == 0));
      iVar13 = iVar9 - iVar7;
      if (bVar4 == false) {
        if (local_68 != iVar7) {
          memmove((void *)((longlong)local_68 * 0x90 + lVar2),(void *)(lVar12 + lVar2),
                  (longlong)iVar13 * 0x90);
        }
        local_68 = local_68 + iVar13;
      }
      else {
        FUN_140d47191(lVar12 + lVar2,iVar13);
      }
      iVar7 = iVar9;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar5 < lVar11);
    *(int *)(param_1 + 1) = local_68;
  }
  return;
}



// FUNCTION 148eec796 FUN_148eec796 body=598 status=ok
// SIG undefined FUN_148eec796(void)

void FUN_148eec796(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  longlong *local_178 [2];
  undefined1 local_168 [16];
  undefined1 local_158 [80];
  undefined1 local_108 [32];
  undefined8 local_e8;
  byte local_e0;
  byte local_df;
  undefined1 local_d8 [16];
  undefined1 local_c8 [120];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((int)param_4[1] != 0) {
    lVar5 = *param_1;
    FUN_1410d1d82(local_d8);
    FUN_144a787a6(local_d8,param_2);
    FUN_144a787a6(local_c8,param_3);
    plVar2 = (longlong *)(lVar5 + 0x208);
    iVar3 = *(int *)(lVar5 + 0x210);
    *(uint *)(lVar5 + 0x210) = iVar3 + 1U;
    if (*(uint *)(lVar5 + 0x214) < iVar3 + 1U) {
      FUN_1410d2002(plVar2,iVar3);
    }
    local_180 = (longlong)iVar3 * 0x90;
    FUN_1410d0c56(*plVar2 + local_180,local_d8);
    cVar6 = FUN_148eb848c(param_1[1],param_2);
    local_50 = local_50 & 0x7f | cVar6 << 7;
    if ((longlong)(int)param_4[1] != 0) {
      lVar7 = *param_4;
      lVar8 = (longlong)(int)param_4[1] * 0x20 + lVar7;
      do {
        FUN_1410d1d82(local_168);
        local_df = local_df | 4;
        FUN_144a787a6(local_168,lVar7);
        FUN_144a787a6(local_158,lVar7 + 0x10);
        FUN_140009b9a(local_178,lVar7 + 0x10);
        FUN_140008f88(local_108,local_178);
        if (local_178[0] != (longlong *)0x0) {
          (**(code **)(*local_178[0] + 0x10))();
        }
        local_e0 = local_e0 | 0x20;
        local_e8 = 1;
        iVar3 = *(int *)(lVar5 + 0x210);
        *(uint *)(lVar5 + 0x210) = iVar3 + 1U;
        if (*(uint *)(lVar5 + 0x214) < iVar3 + 1U) {
          FUN_1410d2002(plVar2,iVar3);
        }
        FUN_1410d0c56((longlong)iVar3 * 0x90 + *plVar2,local_168);
        lVar1 = *plVar2 + local_180;
        iVar4 = *(int *)(lVar1 + 0x78);
        *(uint *)(lVar1 + 0x78) = iVar4 + 1U;
        if (*(uint *)(lVar1 + 0x7c) < iVar4 + 1U) {
          FUN_1410d14fc((longlong *)(lVar1 + 0x70),iVar4);
        }
        *(longlong *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar4 * 8) = (longlong)iVar3;
        FUN_140d471ba(local_168);
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar8);
    }
    lVar5 = *plVar2;
    *(byte *)(lVar5 + 0x89 + local_180) =
         *(byte *)(lVar5 + 0x89 + local_180) & 0xfe | *(int *)(lVar5 + 0x78 + local_180) != 0;
    FUN_140d471ba(local_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eec9ee FUN_148eec9ee body=149 status=ok
// SIG undefined FUN_148eec9ee(void)

longlong * FUN_148eec9ee(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((longlong)(int)param_1[1] == 0) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)*param_1;
  plVar3 = plVar2 + (longlong)(int)param_1[1] * 0x12;
  iVar1 = (int)param_2[1];
LAB_148eeca14:
  if ((int)plVar2[1] == iVar1) {
    if (iVar1 < 2) {
      return plVar2;
    }
    lVar8 = 0;
    do {
      uVar6 = *(ushort *)(*plVar2 + lVar8);
      uVar7 = (ulonglong)uVar6;
      uVar4 = *(ushort *)(*param_2 + lVar8);
      if (uVar6 == uVar4) {
        if (uVar6 == 0) {
          return plVar2;
        }
      }
      else {
        if (0x7f < (uVar4 | uVar6)) goto LAB_148eeca7b;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar5 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar5]) goto LAB_148eeca7b;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  if ((int)plVar2[1] + iVar1 == 1) {
    return plVar2;
  }
  goto LAB_148eeca69;
LAB_148eeca7b:
  if (uVar6 == uVar4) {
    return plVar2;
  }
LAB_148eeca69:
  plVar2 = plVar2 + 0x12;
  if (plVar2 == plVar3) {
    return (longlong *)0x0;
  }
  goto LAB_148eeca14;
}



// FUNCTION 148eeca84 FUN_148eeca84 body=170 status=ok
// SIG undefined FUN_148eeca84(void)

longlong * FUN_148eeca84(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  if ((longlong)(int)param_1[1] == 0) {
LAB_148eecb09:
    plVar5 = (longlong *)0x0;
LAB_148eecb0b:
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    return plVar5;
  }
  plVar5 = (longlong *)*param_1;
  plVar2 = plVar5 + (longlong)(int)param_1[1] * 4;
  iVar1 = (int)param_2[1];
LAB_148eecaa9:
  if ((int)plVar5[1] == iVar1) {
    if (1 < iVar1) {
      lVar6 = 0;
      do {
        uVar7 = *(ushort *)(*plVar5 + lVar6);
        uVar8 = (ulonglong)uVar7;
        uVar3 = *(ushort *)(*param_2 + lVar6);
        if (uVar7 == uVar3) {
          if (uVar7 == 0) break;
        }
        else {
          if (0x7f < (uVar3 | uVar7)) goto LAB_148eecb24;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar4]) goto LAB_148eecb24;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
  }
  else if ((int)plVar5[1] + iVar1 != 1) goto LAB_148eecb00;
  goto LAB_148eecb0b;
LAB_148eecb24:
  if (uVar7 == uVar3) goto LAB_148eecb0b;
LAB_148eecb00:
  plVar5 = plVar5 + 4;
  if (plVar5 == plVar2) goto LAB_148eecb09;
  goto LAB_148eecaa9;
}



// FUNCTION 148eecb2e FUN_148eecb2e body=132 status=ok
// SIG undefined FUN_148eecb2e(void)

void FUN_148eecb2e(longlong param_1,int param_2)

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



// FUNCTION 148eecbb3 FUN_148eecbb3 body=61 status=ok
// SIG undefined FUN_148eecbb3(void)

void FUN_148eecbb3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148eecbf0 FUN_148eecbf0 body=133 status=ok
// SIG undefined FUN_148eecbf0(void)

longlong FUN_148eecbf0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x448;
    do {
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar5);
      if (cVar2 != '\0') goto LAB_148eecc48;
      lVar5 = lVar5 + 0x448;
      lVar6 = lVar6 + -0x448;
    } while (lVar6 != 0);
  }
  lVar5 = 0;
LAB_148eecc48:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return lVar5;
}



// FUNCTION 148eecc76 FUN_148eecc76 body=83 status=ok
// SIG undefined FUN_148eecc76(void)

void FUN_148eecc76(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_148eeccc9(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000148eeccc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 148eeccc9 FUN_148eeccc9 body=105 status=ok
// SIG undefined FUN_148eeccc9(void)

void FUN_148eeccc9(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (param_2 == 0) {
    uVar1 = FUN_14660aa9a();
    FUN_1401e1be1(param_1,0,uVar1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_14660aa9a();
    FUN_1401e1be1(param_1,param_2,uVar1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000148eecd1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 148eecd32 FUN_148eecd32 body=259 status=ok
// SIG undefined FUN_148eecd32(void)

undefined8 *
FUN_148eecd32(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
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
  FUN_148eece36(uVar5,param_4);
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



// FUNCTION 148eece36 FUN_148eece36 body=384 status=ok
// SIG undefined FUN_148eece36(void)

void FUN_148eece36(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148eecf49:
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
    *puVar5 = &PTR_FUN_14b9d8730;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148eecf49;
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
    *puVar5 = &PTR_FUN_14b9d8730;
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
                    /* WARNING: Could not recover jumptable at 0x000148eecf45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eecfb6 FUN_148eecfb6 body=64 status=ok
// SIG undefined FUN_148eecfb6(void)

undefined8 * FUN_148eecfb6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d8730;
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



// FUNCTION 148eecffa FUN_148eecffa body=81 status=ok
// SIG undefined FUN_148eecffa(void)

undefined8 FUN_148eecffa(longlong param_1)

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



// FUNCTION 148eed052 FUN_148eed052 body=89 status=ok
// SIG undefined FUN_148eed052(void)

bool FUN_148eed052(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eed09d;
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
LAB_148eed09d:
  return lVar6 == param_2;
}



// FUNCTION 148eed0c8 FUN_148eed0c8 body=118 status=ok
// SIG undefined FUN_148eed0c8(void)

void FUN_148eed0c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d8730;
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



// FUNCTION 148eed13e FUN_148eed13e body=118 status=ok
// SIG undefined FUN_148eed13e(void)

void FUN_148eed13e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d8730;
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



// FUNCTION 148eed1b4 FUN_148eed1b4 body=156 status=ok
// SIG undefined FUN_148eed1b4(void)

void FUN_148eed1b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d8730;
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
                    /* WARNING: Could not recover jumptable at 0x000148eed240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eed250 FUN_148eed250 body=104 status=ok
// SIG undefined FUN_148eed250(void)

void FUN_148eed250(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eed29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eed2ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eed2b8 FUN_148eed2b8 body=101 status=ok
// SIG undefined FUN_148eed2b8(void)

ulonglong FUN_148eed2b8(longlong param_1)

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
LAB_148eed312:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eed312;
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



// FUNCTION 148eed31e FUN_148eed31e body=244 status=ok
// SIG undefined FUN_148eed31e(void)

undefined8 *
FUN_148eed31e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  FUN_148eed414(uVar5,param_3);
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



// FUNCTION 148eed414 FUN_148eed414 body=384 status=ok
// SIG undefined FUN_148eed414(void)

void FUN_148eed414(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148eed527:
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
    *puVar5 = &PTR_FUN_14b9d87a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148eed527;
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
    *puVar5 = &PTR_FUN_14b9d87a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eed523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eed594 FUN_148eed594 body=64 status=ok
// SIG undefined FUN_148eed594(void)

undefined8 * FUN_148eed594(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d87a0;
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



// FUNCTION 148eed5d8 FUN_148eed5d8 body=81 status=ok
// SIG undefined FUN_148eed5d8(void)

undefined8 FUN_148eed5d8(longlong param_1)

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



// FUNCTION 148eed630 FUN_148eed630 body=89 status=ok
// SIG undefined FUN_148eed630(void)

bool FUN_148eed630(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eed67b;
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
LAB_148eed67b:
  return lVar6 == param_2;
}



// FUNCTION 148eed6a6 FUN_148eed6a6 body=118 status=ok
// SIG undefined FUN_148eed6a6(void)

void FUN_148eed6a6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d87a0;
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



// FUNCTION 148eed71c FUN_148eed71c body=118 status=ok
// SIG undefined FUN_148eed71c(void)

void FUN_148eed71c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9d87a0;
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



// FUNCTION 148eed792 FUN_148eed792 body=156 status=ok
// SIG undefined FUN_148eed792(void)

void FUN_148eed792(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d87a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eed81e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eed82e FUN_148eed82e body=100 status=ok
// SIG undefined FUN_148eed82e(void)

void FUN_148eed82e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eed87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eed887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eed892 FUN_148eed892 body=100 status=ok
// SIG undefined FUN_148eed892(void)

ulonglong FUN_148eed892(longlong param_1)

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
LAB_148eed8eb:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eed8eb;
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



// FUNCTION 148eed8f6 FUN_148eed8f6 body=64 status=ok
// SIG undefined FUN_148eed8f6(void)

undefined8 * FUN_148eed8f6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d8810;
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



// FUNCTION 148eed93a FUN_148eed93a body=81 status=ok
// SIG undefined FUN_148eed93a(void)

undefined8 FUN_148eed93a(longlong param_1)

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



// FUNCTION 148eed992 FUN_148eed992 body=89 status=ok
// SIG undefined FUN_148eed992(void)

bool FUN_148eed992(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eed9dd;
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
LAB_148eed9dd:
  return lVar6 == param_2;
}



// FUNCTION 148eeda08 FUN_148eeda08 body=118 status=ok
// SIG undefined FUN_148eeda08(void)

void FUN_148eeda08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d8810;
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



// FUNCTION 148eeda7e FUN_148eeda7e body=118 status=ok
// SIG undefined FUN_148eeda7e(void)

void FUN_148eeda7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d8810;
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



// FUNCTION 148eedaf4 FUN_148eedaf4 body=156 status=ok
// SIG undefined FUN_148eedaf4(void)

void FUN_148eedaf4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d8810;
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
                    /* WARNING: Could not recover jumptable at 0x000148eedb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eedb90 FUN_148eedb90 body=104 status=ok
// SIG undefined FUN_148eedb90(void)

void FUN_148eedb90(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eedbdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eedbee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eedbf8 FUN_148eedbf8 body=101 status=ok
// SIG undefined FUN_148eedbf8(void)

ulonglong FUN_148eedbf8(longlong param_1)

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
LAB_148eedc52:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eedc52;
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



// FUNCTION 148eedc5d FUN_148eedc5d body=68 status=ok
// SIG undefined FUN_148eedc5d(void)

char FUN_148eedc5d(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_148eedca2(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 148eedca2 FUN_148eedca2 body=227 status=ok
// SIG undefined FUN_148eedca2(void)

undefined8 FUN_148eedca2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  if (iVar4 == (int)param_2[1]) {
    if (1 < iVar4) {
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*param_1 + lVar7);
        uVar2 = (ulonglong)uVar9;
        uVar5 = *(ushort *)(*param_2 + lVar7);
        if (uVar9 != uVar5) break;
        if (uVar9 == 0) goto LAB_148eedd10;
LAB_148eedcda:
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar6]) goto LAB_148eedcda;
      }
      if (uVar9 != uVar5) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar4 != 1) {
    return 0;
  }
LAB_148eedd10:
  iVar4 = (int)param_1[3];
  iVar1 = (int)param_2[3];
  if (iVar4 == iVar1) {
    if (iVar4 < 2) {
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    uVar2 = param_2[2];
    lVar7 = 0;
    while( true ) {
      uVar9 = *(ushort *)(param_1[2] + lVar7);
      uVar3 = (uint)uVar9;
      uVar5 = *(ushort *)(uVar2 + lVar7);
      uVar8 = (uint)uVar5;
      if (uVar9 != uVar5) {
        if ((uVar5 | uVar9) < 0x80) {
          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar9];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar5]) goto LAB_148eedd4a;
        }
        iVar4 = uVar3 - uVar8;
        goto LAB_148eedd81;
      }
      if (uVar9 == 0) break;
LAB_148eedd4a:
      lVar7 = lVar7 + 2;
    }
    iVar4 = 0;
LAB_148eedd81:
    bVar10 = iVar4 == 0;
  }
  else {
    uVar2 = (ulonglong)(uint)(iVar1 + iVar4);
    bVar10 = iVar1 + iVar4 == 1;
  }
  return CONCAT71((int7)(uVar2 >> 8),bVar10);
}



// FUNCTION 148eedd86 FUN_148eedd86 body=119 status=ok
// SIG undefined FUN_148eedd86(void)

void FUN_148eedd86(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x110);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x114)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 6,0);
      iVar2 = (int)(uVar3 >> 6);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x114) = iVar5;
    FUN_148eeddfe(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148eeddfe FUN_148eeddfe body=141 status=ok
// SIG undefined FUN_148eeddfe(void)

void FUN_148eeddfe(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x40);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x40);
  return;
}



// FUNCTION 148eede8c FUN_148eede8c body=84 status=ok
// SIG undefined FUN_148eede8c(void)

void FUN_148eede8c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
  FUN_148eedee0(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000148eededc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 148eedee0 FUN_148eedee0 body=188 status=ok
// SIG undefined FUN_148eedee0(void)

void FUN_148eedee0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148eedfaf,FUN_148eee011,&LAB_148eee00c,&LAB_148eedf9c);
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    iVar4 = 0;
    do {
      lVar1 = *param_2;
      (**(code **)(*param_1 + 0x28))(param_1);
      uVar3 = FUN_1466108be();
      FUN_1401e1be1(param_1,lVar1 + lVar5,uVar3);
      (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar5);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (iVar4 < (int)param_2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x000148eedf95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 148eedfaf FUN_148eedfaf body=93 status=ok
// SIG undefined FUN_148eedfaf(void)

void FUN_148eedfaf(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = (longlong)param_3 * 0x20 + *param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_1466108be();
    FUN_1401e1be1(param_1,lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000148eedff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148eee005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}



// FUNCTION 148eee011 FUN_148eee011 body=44 status=ok
// SIG undefined FUN_148eee011(void)

void FUN_148eee011(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  uVar2 = FUN_1466108be();
  FUN_1489dc9e2(param_1,(longlong)param_3 * 0x20 + lVar1,uVar2);
  return;
}



// FUNCTION 148eee03e FUN_148eee03e body=137 status=ok
// SIG undefined FUN_148eee03e(void)

longlong * FUN_148eee03e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x110;
    do {
      cVar2 = (**(code **)*param_3)(param_3,lVar3);
      if (cVar2 != '\0') {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_148e3c462(param_2,iVar1);
        }
        FUN_148ca859a((longlong)iVar1 * 0x110 + *param_2,lVar3);
      }
      lVar3 = lVar3 + 0x110;
      lVar4 = lVar4 + -0x110;
    } while (lVar4 != 0);
  }
  return param_2;
}



// FUNCTION 148eee0c8 FUN_148eee0c8 body=57 status=ok
// SIG undefined FUN_148eee0c8(void)

void FUN_148eee0c8(undefined8 *param_1,int param_2)

{
  FUN_148ca88bf(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148eee102(param_1,param_2);
  return;
}



// FUNCTION 148eee102 FUN_148eee102 body=112 status=ok
// SIG undefined FUN_148eee102(void)

void FUN_148eee102(longlong param_1,uint param_2)

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



// FUNCTION 148eee172 FUN_148eee172 body=360 status=ok
// SIG undefined FUN_148eee172(void)

void FUN_148eee172(void *param_1,uint param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  void *pvVar12;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_174;
  void *local_170;
  undefined8 *local_168;
  ulonglong local_160;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_1;
  local_168 = param_3;
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    lVar11 = 0;
    do {
      if (lVar11 + 1U < uVar9) {
        pvVar12 = (void *)((longlong)param_1 + 0x110);
        pcVar1 = (code *)*param_3;
        plVar8 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar8 = param_3 + 4;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar6 = (*pcVar1)(uVar7,pvVar12,param_1);
        if (cVar6 != '\0') {
          memcpy(local_158,param_1,0x110);
          memcpy(param_1,pvVar12,0x110);
          memcpy(pvVar12,local_158,0x110);
        }
      }
      lVar11 = lVar11 + 2;
      param_1 = (void *)((longlong)param_1 + 0x220);
    } while ((int)lVar11 < (int)param_2);
    local_160 = uVar9;
    if (2 < (int)param_2) {
      uVar10 = 2;
      local_178 = param_2;
      do {
        puVar5 = local_168;
        uVar2 = uVar10 * 2;
        lVar11 = 0;
        pvVar12 = local_170;
        uVar3 = local_178;
        local_174 = uVar2;
        do {
          uVar4 = uVar3;
          if ((int)uVar2 <= (int)uVar3) {
            uVar4 = uVar2;
          }
          FUN_148eee2db(pvVar12,uVar10,uVar4,puVar5);
          lVar11 = lVar11 + (int)uVar2;
          pvVar12 = (void *)((longlong)pvVar12 + (longlong)(int)uVar2 * 0x110);
          uVar3 = uVar3 + uVar10 * -2;
        } while (lVar11 < (longlong)uVar9);
        uVar10 = local_174;
      } while ((int)local_174 < (int)local_178);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eee2db FUN_148eee2db body=613 status=ok
// SIG undefined FUN_148eee2db(void)

void FUN_148eee2db(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  void *_Src;
  void *pvVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  void *_Src_00;
  uint uVar14;
  longlong lVar15;
  void *pvVar16;
  undefined1 auStack_1b8 [44];
  int local_18c;
  ulonglong local_188;
  int local_17c;
  ulonglong local_178;
  longlong local_170;
  int local_164;
  longlong *local_160;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_17c = param_3;
  local_170 = param_1;
  if (param_2 < param_3 && 0 < param_2) {
    local_160 = param_4 + 4;
    iVar7 = 0;
    iVar9 = param_2;
    while( true ) {
      local_18c = iVar9;
      local_178 = (longlong)local_18c * 0x110 + local_170;
      iVar9 = 0;
      local_188 = CONCAT44(local_188._4_4_,iVar7);
      if (local_18c - iVar7 != 0 && iVar7 <= local_18c) {
        lVar15 = (longlong)iVar7 * 0x110 + local_170;
        iVar9 = 0;
        uVar12 = local_18c - iVar7;
        do {
          uVar14 = (uVar12 >> 1) + iVar9;
          pcVar3 = (code *)*param_4;
          plVar8 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar8 = local_160;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*pcVar3)(uVar6,local_178,(ulonglong)uVar14 * 0x110 + lVar15);
          if (cVar5 == '\0') {
            iVar9 = uVar14 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      uVar12 = iVar9 + (int)local_188;
      local_188 = (ulonglong)uVar12;
      if (local_18c - uVar12 == 0 || local_18c < (int)uVar12) break;
      uVar14 = local_17c - local_18c;
      if (uVar14 == 0 || local_17c < local_18c) {
        uVar13 = 0;
        iVar9 = local_18c;
      }
      else {
        _Src = (void *)((longlong)(int)uVar12 * 0x110 + local_170);
        uVar13 = 0;
        uVar11 = (ulonglong)uVar14;
        local_164 = local_18c - uVar12;
        do {
          uVar11 = uVar11 >> 1;
          uVar12 = (uint)uVar11 + (int)uVar13;
          lVar15 = (ulonglong)uVar12 * 0x110 + local_178;
          pcVar3 = (code *)*param_4;
          plVar8 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar8 = local_160;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*pcVar3)(uVar6,lVar15,_Src);
          if (cVar5 != '\0') {
            uVar13 = (ulonglong)(uVar12 + (uVar14 & 1));
          }
          bVar4 = 1 < uVar14;
          uVar14 = (uint)uVar11;
        } while (bVar4);
        iVar9 = local_18c + (int)uVar13;
        if (0 < (int)uVar13) {
          pvVar10 = (void *)((longlong)local_164 * 0x110 + (longlong)_Src);
          pvVar16 = (void *)((longlong)(iVar9 - (int)local_188) * 0x110 + (longlong)_Src);
          _Src_00 = pvVar10;
          local_18c = iVar9;
          local_178 = uVar13;
          do {
            while( true ) {
              pvVar1 = (void *)((longlong)_Src_00 + 0x110);
              pvVar2 = (void *)((longlong)_Src + 0x110);
              memcpy(local_158,_Src,0x110);
              memcpy(_Src,_Src_00,0x110);
              memcpy(_Src_00,local_158,0x110);
              if (pvVar1 == pvVar16) break;
              if (pvVar2 == pvVar10) {
                pvVar10 = pvVar1;
              }
              _Src = (void *)((longlong)_Src + 0x110);
              _Src_00 = pvVar1;
            }
            _Src = pvVar2;
            uVar13 = local_178;
            _Src_00 = pvVar10;
            iVar9 = local_18c;
          } while (pvVar2 != pvVar10);
        }
      }
      if ((local_17c <= iVar9) || (iVar7 = (int)local_188 + (int)uVar13 + 1, iVar9 <= iVar7)) break;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eee542 FUN_148eee542 body=147 status=ok
// SIG undefined FUN_148eee542(void)

void FUN_148eee542(longlong param_1,int param_2)

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



// FUNCTION 148eee5d6 FUN_148eee5d6 body=101 status=ok
// SIG undefined FUN_148eee5d6(void)

void FUN_148eee5d6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x280 + *param_1);
  FUN_145c2d9b9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x280 + (longlong)_Dst),(longlong)iVar2 * 0x280);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148eee63c FUN_148eee63c body=62 status=ok
// SIG undefined FUN_148eee63c(void)

void FUN_148eee63c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148eee67a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x280,8);
  }
  return;
}



// FUNCTION 148eee67a FUN_148eee67a body=112 status=ok
// SIG undefined FUN_148eee67a(void)

ulonglong FUN_148eee67a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x280) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148eee6b4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x280,8);
      param_2 = param_2 / 0x280;
    }
  }
LAB_148eee6b4:
  return param_2 & 0xffffffff;
}



// FUNCTION 148eee6ea FUN_148eee6ea body=110 status=ok
// SIG undefined FUN_148eee6ea(void)

void FUN_148eee6ea(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_148eee75a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148eee75a FUN_148eee75a body=132 status=ok
// SIG undefined FUN_148eee75a(void)

void FUN_148eee75a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,4);
  return;
}



// FUNCTION 148eee7de FUN_148eee7de body=68 status=ok
// SIG undefined FUN_148eee7de(void)

void FUN_148eee7de(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145a3c3c1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148eee824(param_1,param_2);
  return;
}



// FUNCTION 148eee824 FUN_148eee824 body=108 status=ok
// SIG undefined FUN_148eee824(void)

void FUN_148eee824(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 148eee890 FUN_148eee890 body=38 status=ok
// SIG undefined FUN_148eee890(void)

void FUN_148eee890(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1456e1756(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 148eee8b6 FUN_148eee8b6 body=143 status=ok
// SIG undefined FUN_148eee8b6(void)

void FUN_148eee8b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148eee946 FUN_148eee946 body=136 status=ok
// SIG undefined FUN_148eee946(void)

void FUN_148eee946(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x288);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x28c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x28c) = iVar5;
    FUN_148eee9d0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148eee9d0 FUN_148eee9d0 body=149 status=ok
// SIG undefined FUN_148eee9d0(void)

void FUN_148eee9d0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x280);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x280,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x280),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x280,param_2,param_3,0x28);
  return;
}



// FUNCTION 148eeea65 FUN_148eeea65 body=41 status=ok
// SIG undefined FUN_148eeea65(void)

void FUN_148eeea65(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145e29e8c(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 148eeea8e FUN_148eeea8e body=146 status=ok
// SIG undefined FUN_148eeea8e(void)

void FUN_148eeea8e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148eeeb22 FUN_148eeeb22 body=98 status=ok
// SIG undefined FUN_148eeeb22(void)

void FUN_148eeeb22(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xe0 + *param_1);
  FUN_145c9035f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xe0 + (longlong)_Dst),(longlong)iVar2 * 0xe0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148eeeb84 FUN_148eeeb84 body=62 status=ok
// SIG undefined FUN_148eeeb84(void)

void FUN_148eeeb84(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148eeebc2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe0,8);
  }
  return;
}



// FUNCTION 148eeebc2 FUN_148eeebc2 body=110 status=ok
// SIG undefined FUN_148eeebc2(void)

ulonglong FUN_148eeebc2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148eeebfb;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe0,8);
      param_2 = param_2 / 0xe0;
    }
  }
LAB_148eeebfb:
  return param_2 & 0xffffffff;
}



// FUNCTION 148eeec30 FUN_148eeec30 body=48 status=ok
// SIG undefined FUN_148eeec30(void)

void FUN_148eeec30(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe0,8);
  }
  return;
}



// FUNCTION 148eeec60 FUN_148eeec60 body=318 status=ok
// SIG undefined FUN_148eeec60(void)

longlong FUN_148eeec60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_145a47712();
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfe | *(byte *)(param_2 + 0x48) & 1;
  FUN_14023423e(param_1 + 0x50,param_2 + 0x50);
  FUN_14023423e(param_1 + 0x60,param_2 + 0x60);
  FUN_14023423e(param_1 + 0x70,param_2 + 0x70);
  FUN_14023423e(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  return param_1;
}



// FUNCTION 148eeed9e FUN_148eeed9e body=360 status=ok
// SIG undefined FUN_148eeed9e(void)

void FUN_148eeed9e(void *param_1,uint param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  void *pvVar12;
  undefined1 auStack_168 [32];
  uint local_148;
  uint local_144;
  void *local_140;
  undefined8 *local_138;
  ulonglong local_130;
  undefined1 local_128 [224];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = param_1;
  local_138 = param_3;
  if (0 < (int)param_2) {
    uVar9 = (ulonglong)param_2;
    lVar11 = 0;
    do {
      if (lVar11 + 1U < uVar9) {
        pvVar12 = (void *)((longlong)param_1 + 0xe0);
        pcVar1 = (code *)*param_3;
        plVar8 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar8 = param_3 + 4;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar6 = (*pcVar1)(uVar7,pvVar12,param_1);
        if (cVar6 != '\0') {
          memcpy(local_128,param_1,0xe0);
          memcpy(param_1,pvVar12,0xe0);
          memcpy(pvVar12,local_128,0xe0);
        }
      }
      lVar11 = lVar11 + 2;
      param_1 = (void *)((longlong)param_1 + 0x1c0);
    } while ((int)lVar11 < (int)param_2);
    local_130 = uVar9;
    if (2 < (int)param_2) {
      uVar10 = 2;
      local_148 = param_2;
      do {
        puVar5 = local_138;
        uVar2 = uVar10 * 2;
        lVar11 = 0;
        pvVar12 = local_140;
        uVar3 = local_148;
        local_144 = uVar2;
        do {
          uVar4 = uVar3;
          if ((int)uVar2 <= (int)uVar3) {
            uVar4 = uVar2;
          }
          FUN_148eeef07(pvVar12,uVar10,uVar4,puVar5);
          lVar11 = lVar11 + (int)uVar2;
          pvVar12 = (void *)((longlong)pvVar12 + (longlong)(int)uVar2 * 0xe0);
          uVar3 = uVar3 + uVar10 * -2;
        } while (lVar11 < (longlong)uVar9);
        uVar10 = local_144;
      } while ((int)local_144 < (int)local_148);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeef07 FUN_148eeef07 body=613 status=ok
// SIG undefined FUN_148eeef07(void)

void FUN_148eeef07(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  void *_Src;
  void *pvVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  void *_Src_00;
  uint uVar14;
  longlong lVar15;
  void *pvVar16;
  undefined1 auStack_188 [44];
  int local_15c;
  ulonglong local_158;
  int local_14c;
  ulonglong local_148;
  longlong local_140;
  int local_134;
  longlong *local_130;
  undefined1 local_128 [224];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_14c = param_3;
  local_140 = param_1;
  if (param_2 < param_3 && 0 < param_2) {
    local_130 = param_4 + 4;
    iVar7 = 0;
    iVar9 = param_2;
    while( true ) {
      local_15c = iVar9;
      local_148 = (longlong)local_15c * 0xe0 + local_140;
      iVar9 = 0;
      local_158 = CONCAT44(local_158._4_4_,iVar7);
      if (local_15c - iVar7 != 0 && iVar7 <= local_15c) {
        lVar15 = (longlong)iVar7 * 0xe0 + local_140;
        iVar9 = 0;
        uVar12 = local_15c - iVar7;
        do {
          uVar14 = (uVar12 >> 1) + iVar9;
          pcVar3 = (code *)*param_4;
          plVar8 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar8 = local_130;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*pcVar3)(uVar6,local_148,(ulonglong)uVar14 * 0xe0 + lVar15);
          if (cVar5 == '\0') {
            iVar9 = uVar14 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      uVar12 = iVar9 + (int)local_158;
      local_158 = (ulonglong)uVar12;
      if (local_15c - uVar12 == 0 || local_15c < (int)uVar12) break;
      uVar14 = local_14c - local_15c;
      if (uVar14 == 0 || local_14c < local_15c) {
        uVar13 = 0;
        iVar9 = local_15c;
      }
      else {
        _Src = (void *)((longlong)(int)uVar12 * 0xe0 + local_140);
        uVar13 = 0;
        uVar11 = (ulonglong)uVar14;
        local_134 = local_15c - uVar12;
        do {
          uVar11 = uVar11 >> 1;
          uVar12 = (uint)uVar11 + (int)uVar13;
          lVar15 = (ulonglong)uVar12 * 0xe0 + local_148;
          pcVar3 = (code *)*param_4;
          plVar8 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar8 = local_130;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*pcVar3)(uVar6,lVar15,_Src);
          if (cVar5 != '\0') {
            uVar13 = (ulonglong)(uVar12 + (uVar14 & 1));
          }
          bVar4 = 1 < uVar14;
          uVar14 = (uint)uVar11;
        } while (bVar4);
        iVar9 = local_15c + (int)uVar13;
        if (0 < (int)uVar13) {
          pvVar10 = (void *)((longlong)local_134 * 0xe0 + (longlong)_Src);
          pvVar16 = (void *)((longlong)(iVar9 - (int)local_158) * 0xe0 + (longlong)_Src);
          _Src_00 = pvVar10;
          local_15c = iVar9;
          local_148 = uVar13;
          do {
            while( true ) {
              pvVar1 = (void *)((longlong)_Src_00 + 0xe0);
              pvVar2 = (void *)((longlong)_Src + 0xe0);
              memcpy(local_128,_Src,0xe0);
              memcpy(_Src,_Src_00,0xe0);
              memcpy(_Src_00,local_128,0xe0);
              if (pvVar1 == pvVar16) break;
              if (pvVar2 == pvVar10) {
                pvVar10 = pvVar1;
              }
              _Src = (void *)((longlong)_Src + 0xe0);
              _Src_00 = pvVar1;
            }
            _Src = pvVar2;
            uVar13 = local_148;
            _Src_00 = pvVar10;
            iVar9 = local_15c;
          } while (pvVar2 != pvVar10);
        }
      }
      if ((local_14c <= iVar9) || (iVar7 = (int)local_158 + (int)uVar13 + 1, iVar9 <= iVar7)) break;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eef198 FUN_148eef198 body=12 status=ok
// SIG undefined FUN_148eef198(void)

void FUN_148eef198(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148eef1a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148eef1a4 FUN_148eef1a4 body=29 status=ok
// SIG undefined FUN_148eef1a4(void)

undefined8 FUN_148eef1a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eef1c2 FUN_148eef1c2 body=96 status=ok
// SIG undefined FUN_148eef1c2(void)

void FUN_148eef1c2(longlong param_1,int param_2)

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



// FUNCTION 148eef222 FUN_148eef222 body=96 status=ok
// SIG undefined FUN_148eef222(void)

void FUN_148eef222(longlong param_1,int param_2)

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



// FUNCTION 148eef282 FUN_148eef282 body=114 status=ok
// SIG undefined FUN_148eef282(void)

void FUN_148eef282(longlong *param_1,int param_2)

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



// FUNCTION 148eef2f4 FUN_148eef2f4 body=31 status=ok
// SIG undefined FUN_148eef2f4(void)

undefined8 FUN_148eef2f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eef32e FUN_148eef32e body=26 status=ok
// SIG undefined FUN_148eef32e(void)

bool FUN_148eef32e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148eef348 FUN_148eef348 body=101 status=ok
// SIG undefined FUN_148eef348(void)

void FUN_148eef348(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d8b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148eef3ae FUN_148eef3ae body=101 status=ok
// SIG undefined FUN_148eef3ae(void)

void FUN_148eef3ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b3b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d8b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148eef414 FUN_148eef414 body=134 status=ok
// SIG undefined FUN_148eef414(void)

void FUN_148eef414(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b3b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d8b90;
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
                    /* WARNING: Could not recover jumptable at 0x000148eef48b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eef49a FUN_148eef49a body=42 status=ok
// SIG undefined FUN_148eef49a(void)

void FUN_148eef49a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148eef4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148eef4c4 FUN_148eef4c4 body=222 status=ok
// SIG undefined FUN_148eef4c4(void)

void FUN_148eef4c4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_148eef56e;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148eef56e:
  FUN_14474d06a(param_1,0);
  return;
}


