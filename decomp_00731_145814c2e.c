// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145814c2e FUN_145814c2e body=380 status=ok
// SIG undefined FUN_145814c2e(void)

longlong * FUN_145814c2e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1412daae5(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1490ef462(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x55555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490d941e(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1490d9da6(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1490ee890(param_2);
        FUN_1490d941e(uVar3,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145814dab FUN_145814dab body=671 status=ok
// SIG undefined FUN_145814dab(void)

longlong * FUN_145814dab(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar2;
    }
    local_68 = param_2 + 2;
    local_70 = &DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_80 = local_58;
    local_7c = local_54;
    local_88 = local_60;
    uVar7 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar5 = *local_a0;
        FUN_141158ce6(lVar5 + (longlong)iVar8 * 0x20,param_1);
        FUN_1490ee982(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined1 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined1 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    FUN_1458b794e(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar8 = 0;
      do {
        FUN_1490e8038(param_2,&local_a0);
        *local_98 = 0;
        *(undefined4 *)(local_98 + 2) = 0xffffffff;
        puVar3 = local_98 + 8;
        *(undefined8 *)(local_98 + 8) = 0;
        *(undefined8 *)(local_98 + 0x10) = 0;
        *(undefined4 *)(local_98 + 0x18) = 0xffffffff;
        FUN_141158ce6(local_98,param_1);
        FUN_1490ee982(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_88;
      } while (iVar8 < (int)local_70);
    }
  }
  local_88 = uVar7;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14581504c FUN_14581504c body=2020 status=ok
// SIG undefined FUN_14581504c(void)

longlong * FUN_14581504c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  longlong local_c0;
  int local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_70;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_70 = (wchar_t *)0x0;
  iStack_68 = *(int *)(param_3 + 1);
  lVar6 = (longlong)iStack_68;
  _Src = (void *)*param_3;
  if (lVar6 == 0) {
    uStack_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,iStack_68,0);
    memcpy(local_70,_Src,lVar6 * 2);
  }
  local_d8 = 1;
  FUN_140807d8e(&local_70,&local_88,&DAT_149e2b508,&DAT_149e0635c);
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_70 = local_88;
  iStack_68 = (int)uStack_80;
  uStack_64 = uStack_80._4_4_;
  local_d8 = 1;
  FUN_140807d8e(&local_70,&local_88,&DAT_149e2b50c,&DAT_149e0635c);
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_70 = local_88;
  iStack_68 = (int)uStack_80;
  uStack_64 = uStack_80._4_4_;
  local_d8 = 1;
  local_c0 = param_2;
  FUN_140807d8e(&local_70,&local_88,&DAT_149e06258,&DAT_149e0635c);
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_70 = local_88;
  iStack_68 = (int)uStack_80;
  uStack_64 = uStack_80._4_4_;
  FUN_140db34f4(&local_70,0x2e,0);
  if (1 < iStack_68) {
    local_c8 = param_1 + 2;
    do {
      local_88 = (wchar_t *)0x0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      FUN_140056680(&local_a8,&DAT_149e0635c);
      local_d0 = 0;
      local_d8 = 1;
      cVar1 = FUN_1407cdbc6(&local_70,&local_a8,&local_88,&local_98);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (cVar1 == '\0') {
        iVar2 = iStack_68 + -1;
        if (iStack_68 == 0) {
          iVar2 = 0;
        }
        FUN_1402980a2(&local_88,local_70,iVar2);
        FUN_144a7e010(&local_98);
      }
      lVar6 = local_c0;
      if (local_c0 == 0) goto LAB_145815811;
      lVar4 = *(longlong *)(local_c0 + 8);
      lVar3 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar11 = lVar4 != 0;
        if (lVar4 != lVar3 && bVar11) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar11 = lVar4 != 0;
            if (lVar4 == lVar3) break;
          } while (lVar4 != 0);
        }
        lVar6 = local_c0;
        if (bVar11) goto LAB_145815285;
LAB_145815508:
        lVar6 = *(longlong *)(lVar6 + 8);
        lVar4 = FUN_1446e6bbc();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar11 = lVar6 != 0;
          if (lVar6 != lVar4 && bVar11) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar11 = lVar6 != 0;
              if (lVar6 == lVar4) break;
            } while (lVar6 != 0);
          }
          if (bVar11) goto LAB_145815529;
LAB_145815643:
          lVar6 = *(longlong *)(local_c0 + 8);
          lVar3 = FUN_1446ebfd4();
          lVar4 = local_c0;
          if (*(ulonglong *)(lVar3 + 8) == 0) {
            bVar11 = lVar6 != 0;
            if (lVar6 != lVar3 && bVar11) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar11 = lVar6 != 0;
                if (lVar6 == lVar3) break;
              } while (lVar6 != 0);
            }
            if (!bVar11) goto LAB_145815760;
LAB_145815668:
            pwVar5 = local_88;
            if ((int)uStack_80 == 0) {
              pwVar5 = L"";
            }
            lVar6 = *(longlong *)(local_c0 + 0x78);
            FUN_1446f470e(&local_a8,pwVar5,1);
            uVar10 = 2;
            iVar2 = -1;
            param_2 = lVar4;
            uVar9 = local_a8;
            goto LAB_1458156a5;
          }
          if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_145815668;
LAB_145815760:
          lVar6 = *(longlong *)(local_c0 + 8);
          lVar4 = FUN_144a7e162();
          if (*(ulonglong *)(lVar4 + 8) == 0) {
            bVar11 = lVar6 != 0;
            if (lVar6 != lVar4 && bVar11) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar11 = lVar6 != 0;
                if (lVar6 == lVar4) break;
              } while (lVar6 != 0);
            }
            if (bVar11) goto LAB_145815781;
LAB_145815811:
            *(undefined4 *)(param_1 + 3) = 0;
            iVar2 = *(int *)((longlong)param_1 + 0x1c);
joined_r0x000145815821:
            if (iVar2 != 0) {
              FUN_1458158c6(local_c8);
            }
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if (local_88 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_145815437;
          }
          if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_145815811;
LAB_145815781:
          uVar9 = 0;
          uVar8 = 0;
          uVar10 = local_b4;
          iVar2 = local_b8;
        }
        else {
          if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_145815643;
LAB_145815529:
          lVar6 = *(longlong *)(local_c0 + 0x78);
          if (lVar6 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(ulonglong *)(lVar6 + 0x20);
          }
          pwVar5 = local_88;
          if ((int)uStack_80 == 0) {
            pwVar5 = L"";
          }
          iVar2 = _wtoi(pwVar5);
          uVar10 = 1;
          param_2 = local_c0;
LAB_1458156a5:
          uVar8 = uVar9 & 0xffffffff00000000;
          local_c0 = lVar6;
        }
      }
      else {
        if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_145815508;
LAB_145815285:
        pwVar5 = L"";
        if ((int)uStack_80 != 0) {
          pwVar5 = local_88;
        }
        lVar6 = *(longlong *)(lVar6 + 0x70);
        FUN_1446f470e(&local_b0,pwVar5,1);
        param_2 = *(longlong *)(lVar6 + 0x70);
        while( true ) {
          if (param_2 == 0) {
            *(undefined4 *)(param_1 + 3) = 0;
            iVar2 = *(int *)((longlong)param_1 + 0x1c);
            goto joined_r0x000145815821;
          }
          if (*(ulonglong *)(param_2 + 0x20) == local_b0) break;
          param_2 = *(longlong *)(param_2 + 0x48);
        }
        uVar8 = local_b0 & 0xffffffff00000000;
        uVar9 = local_b0;
        uVar10 = 0;
        iVar2 = *(int *)(param_2 + 0x44);
        local_c0 = param_2;
      }
      iVar7 = (int)param_1[3];
      lVar6 = (longlong)iVar7;
      *(uint *)(param_1 + 3) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar7 + 1U) {
        FUN_145815832(local_c8,iVar7);
      }
      lVar4 = *local_c8;
      *(undefined4 *)(lVar4 + lVar6 * 0x18) = uVar10;
      *(ulonglong *)(lVar4 + 4 + lVar6 * 0x18) = uVar8 | uVar9 & 0xffffffff;
      *(int *)(lVar4 + 0xc + lVar6 * 0x18) = iVar2;
      *(longlong *)(lVar4 + 0x10 + lVar6 * 0x18) = param_2;
      iVar7 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iVar7 = 0;
      }
      local_b8 = iVar2;
      local_b4 = uVar10;
      FUN_1402980a2(&local_70,local_98,iVar7);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    } while (1 < iStack_68);
  }
  FUN_144a7e010(param_1);
  lVar6 = param_1[3];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = param_1[2];
    lVar3 = 0;
    do {
      iVar2 = *(int *)(lVar4 + lVar3);
      if (iVar2 == 0) {
        if (1 < (int)param_1[1]) {
          FUN_1400020e8(param_1,&DAT_149e0635c,1);
        }
        FUN_1400021e4(lVar3 + lVar4 + 4,&local_88);
        iVar2 = (int)uStack_80 + -1;
        if ((int)uStack_80 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_1,local_88,iVar2);
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_c8 = param_1;
        if (iVar2 == 1) {
          local_a8 = 0;
          uStack_a0 = 0;
          FUN_144a83b10(&local_a8,*(undefined4 *)(lVar4 + 0xc + lVar3));
          FUN_140ba7826(&local_98,&DAT_149e2b508,&local_a8);
          FUN_144a882a8(&local_88,&local_98,&DAT_149e2b50c);
          iVar2 = (int)uStack_80 + -1;
          if ((int)uStack_80 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(local_c8,local_88,iVar2);
        }
        else {
          if (iVar2 != 2) goto LAB_14581542e;
          FUN_1400021e4(lVar3 + lVar4 + 4,&local_a8);
          FUN_140ba7826(&local_98,&DAT_149e2b508,&local_a8);
          FUN_144a882a8(&local_88,&local_98,&DAT_149e2b50c);
          iVar2 = (int)uStack_80 + -1;
          if ((int)uStack_80 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(param_1,local_88,iVar2);
        }
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        param_1 = local_c8;
        if (local_a8 != 0) {
          FUN_1400020a8();
          param_1 = local_c8;
        }
      }
LAB_14581542e:
      lVar3 = lVar3 + 0x18;
    } while ((longlong)(int)lVar6 * 0x18 != lVar3);
  }
LAB_145815437:
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145815832 FUN_145815832 body=147 status=ok
// SIG undefined FUN_145815832(void)

void FUN_145815832(longlong param_1,int param_2)

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



// FUNCTION 1458158c6 FUN_1458158c6 body=48 status=ok
// SIG undefined FUN_1458158c6(void)

void FUN_1458158c6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1458158f6 FUN_1458158f6 body=55 status=ok
// SIG undefined FUN_1458158f6(void)

void FUN_1458158f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01040 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01040 = FUN_140002ddd(FUN_146684a72,uVar1,L"RigVMOperand");
  }
  return;
}



// FUNCTION 14581592e FUN_14581592e body=106 status=ok
// SIG undefined FUN_14581592e(void)

void FUN_14581592e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 0x12;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < 0x12) {
    FUN_1447403be(param_1,iVar2);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(lVar3 + 0x10 + lVar5) = 0;
  lVar3 = *param_1;
  uVar4 = param_2[1];
  *(undefined8 *)(lVar3 + lVar5) = *param_2;
  ((undefined8 *)(lVar3 + lVar5))[1] = uVar4;
  *(undefined2 *)(lVar3 + 0x10 + lVar5) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)(lVar3 + 1 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 3 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 9 + lVar5) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 145815998 FUN_145815998 body=295 status=ok
// SIG undefined FUN_145815998(void)

void FUN_145815998(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_141158ce6(param_1 + 2,param_2);
  FUN_141158ce6(param_1 + 8,param_2);
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc78), iVar3 < 0x2b)) {
    *(undefined2 *)(param_1 + 0xe) = 0;
    param_1[0x10] = 4;
    return;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xe,2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xe) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    param_1[0x10] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145815aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x10,1);
  return;
}



// FUNCTION 145815ac0 FUN_145815ac0 body=147 status=ok
// SIG undefined FUN_145815ac0(void)

void FUN_145815ac0(longlong param_1,int param_2)

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



// FUNCTION 145815b54 FUN_145815b54 body=394 status=ok
// SIG undefined FUN_145815b54(void)

longlong * FUN_145815b54(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1490f13c8(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490f5886(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1490f13c8(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1490f1388(param_2);
        FUN_1490f5886(uVar3,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145815ce0 FUN_145815ce0 body=79 status=ok
// SIG undefined FUN_145815ce0(void)

void FUN_145815ce0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_10 = 0;
  FUN_140fd0a38(param_1,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145815d44 FUN_145815d44 body=113 status=ok
// SIG undefined FUN_145815d44(void)

void FUN_145815d44(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar3) {
    iVar4 = -0x10;
    do {
      lVar1 = (longlong)((int)param_1[1] + iVar4);
      if (*(longlong *)(*param_1 + lVar1) != 0) {
        puVar2 = (undefined8 *)(*param_1 + lVar1);
        (**(code **)(*param_2 + 0x88))(param_2,puVar2,0,0);
        FUN_144a79930(param_2,*puVar2);
      }
      iVar4 = iVar4 + -0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 145815dc6 FUN_145815dc6 body=39 status=ok
// SIG undefined FUN_145815dc6(void)

void FUN_145815dc6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145815dee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba187d0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 145815dee FUN_145815dee body=32 status=ok
// SIG undefined FUN_145815dee(void)

undefined8 * FUN_145815dee(undefined8 *param_1)

{
  FUN_140e6d9f4();
  *param_1 = &PTR_FUN_14aef9ba0;
  return param_1;
}



// FUNCTION 145815e0e FUN_145815e0e body=145 status=ok
// SIG undefined FUN_145815e0e(void)

void FUN_145815e0e(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = (longlong)param_2 * 0x28 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x01') {
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_4 + 4);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 *)(lVar4 + 8) = *param_4;
    *(undefined4 *)(lVar4 + 0xc) = uVar1;
    *(undefined4 *)(lVar4 + 0x10) = uVar2;
    *(undefined4 *)(lVar4 + 0x14) = uVar3;
    *(byte *)(lVar4 + 0x20) = *(byte *)(lVar4 + 0x20) | 3;
  }
  else if ((*(byte *)(lVar4 + 0x20) & 1) == 0) {
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_4 + 4);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 *)(lVar4 + 8) = *param_4;
    *(undefined4 *)(lVar4 + 0xc) = uVar1;
    *(undefined4 *)(lVar4 + 0x10) = uVar2;
    *(undefined4 *)(lVar4 + 0x14) = uVar3;
    *(byte *)(lVar4 + 0x20) = *(byte *)(lVar4 + 0x20) | 1;
  }
  else {
    FUN_14768b3c6(param_1 + 0xa0,&local_c,param_4);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145815ea0 FUN_145815ea0 body=231 status=ok
// SIG undefined FUN_145815ea0(void)

int * FUN_145815ea0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145815f88 FUN_145815f88 body=307 status=ok
// SIG undefined FUN_145815f88(void)

undefined4 * FUN_145815f88(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_49 = 0;
  uVar8 = 0;
  if (((param_2 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_2 + 0x180))(), lVar4 != 0)) &&
     ((*(char *)(lVar4 + 0x152) == '\x01' || (*(char *)(lVar4 + 0x152) == '\x03')))) {
    lVar5 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x1f0) + 0x40);
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0x38) + lVar7);
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
          plVar2 = *(longlong **)(lVar1 + 0x448);
          if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
            uVar3 = (**(code **)(*plVar2 + 0x888))(plVar2,&local_34,&local_48,&local_49);
            uVar8 = local_34;
            uVar6 = local_49;
            goto LAB_145816062;
          }
          break;
        }
        lVar7 = lVar7 + 8;
      } while (lVar5 * 8 != lVar7);
    }
  }
  uVar6 = 0;
  uVar3 = 0;
LAB_145816062:
  *param_1 = uVar8;
  param_1[1] = local_48;
  param_1[2] = uStack_44;
  param_1[3] = uStack_40;
  param_1[4] = uStack_3c;
  *(undefined1 *)(param_1 + 5) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x15) = uVar3;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458160bc FUN_1458160bc body=321 status=ok
// SIG undefined FUN_1458160bc(void)

undefined4 *
FUN_1458160bc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145816296(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar3 = FUN_1458161fe(param_1,uVar6,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14581637e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458161fe FUN_1458161fe body=152 status=ok
// SIG undefined FUN_1458161fe(void)

void FUN_1458161fe(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14621f730((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_145816222;
    }
  }
  uVar5 = 0;
LAB_145816222:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 145816296 FUN_145816296 body=231 status=ok
// SIG undefined FUN_145816296(void)

int * FUN_145816296(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14581637e FUN_14581637e body=456 status=ok
// SIG undefined FUN_14581637e(void)

void FUN_14581637e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145816548 FUN_145816548 body=110 status=ok
// SIG undefined FUN_145816548(void)

void FUN_145816548(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14041c91c(param_1,iVar1);
    }
    FUN_14041c3e4((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_1458165b6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1458165b6 FUN_1458165b6 body=62 status=ok
// SIG undefined FUN_1458165b6(void)

void FUN_1458165b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458165f4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1458165f4 FUN_1458165f4 body=89 status=ok
// SIG undefined FUN_1458165f4(void)

ulonglong FUN_1458165f4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 145816656 FUN_145816656 body=87 status=ok
// SIG undefined FUN_145816656(void)

undefined8 * FUN_145816656(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14b40f080;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 1458166ae FUN_1458166ae body=57 status=ok
// SIG undefined FUN_1458166ae(void)

void FUN_1458166ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc00e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc00e0 = FUN_140002ddd(FUN_146615b59,uVar1,L"SiloBaseObjectDef");
  }
  return;
}



// FUNCTION 1458166e8 FUN_1458166e8 body=2161 status=ok
// SIG undefined FUN_1458166e8(void)

void FUN_1458166e8(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8 [12];
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [24];
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8 [13];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(longlong *)(param_1 + 0x25f8) == 0) goto LAB_145816d86;
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x458);
  local_68 = FUN_144a799b0();
  if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_68);
  }
  local_1c8 = 0;
  lVar10 = FUN_140ae4830(param_1,&local_68,uVar11,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x2620) = lVar10;
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x460);
  local_70 = FUN_144a799b0();
  if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_70);
  }
  local_1c8 = 0;
  lVar10 = FUN_140ae4830(param_1,&local_70,uVar11,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x2628) = lVar10;
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x470);
  local_78 = FUN_144a799b0();
  if ((local_78 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_78);
  }
  local_1c8 = 0;
  lVar10 = FUN_140ae4830(param_1,&local_78,uVar11,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x2630) = lVar10;
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x468);
  local_80 = FUN_144a799b0();
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_80);
  }
  local_1c8 = 0;
  lVar10 = FUN_140ae4830(param_1,&local_80,uVar11,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x2638) = lVar10;
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x478);
  local_88 = FUN_144a799b0();
  if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_88);
  }
  local_1c8 = 0;
  lVar10 = FUN_140ae4830(param_1,&local_88,uVar11,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x2640) = lVar10;
  uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x480);
  local_90 = FUN_144a799b0();
  if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_90);
  }
  local_1c8 = 0;
  lVar10 = FUN_140ae4830(param_1,&local_90,uVar11,0);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  *(longlong *)(param_1 + 0x2648) = lVar10;
  lVar2 = *(longlong *)(param_1 + 0x25f8);
  if (((((lVar2 == 0) || (*(longlong *)(param_1 + 0x2620) == 0)) ||
       (*(longlong *)(param_1 + 0x2628) == 0)) ||
      ((lVar10 == 0 || (*(longlong *)(param_1 + 0x2640) == 0)))) ||
     (*(longlong *)(param_1 + 0x2630) == 0)) goto LAB_145816d86;
  puVar14 = &DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  puVar13 = local_f8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x2870) = 0;
  if (*(longlong *)(lVar2 + 0x4a0) != 0) {
    lVar10 = *(longlong *)(lVar2 + 0x4a8);
    if (lVar10 == 0) {
      uVar11 = FUN_140de9e7e();
      lVar10 = FUN_14477b664(uVar11);
      *(longlong *)(lVar2 + 0x4a8) = lVar10;
    }
    lVar12 = *(longlong *)(lVar2 + 0x4b0);
    if (lVar12 == 0) {
      if ((lVar10 != 0) && (*(longlong *)(lVar2 + 0x4a0) != 0)) {
        plVar3 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar9 == '\0')) {
          *(undefined8 *)(lVar2 + 0x4b0) = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar2 + 0x4a0));
          *(longlong *)(lVar2 + 0x4b0) = lVar12;
          if (lVar12 != 0) goto LAB_145816a4f;
        }
      }
    }
    else {
LAB_145816a4f:
      *(undefined4 *)(param_1 + 0x2870) = *(undefined4 *)(lVar12 + 0x4c8);
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x2640);
  lVar2 = *(longlong *)(param_1 + 0x2648);
  dVar19 = *(double *)(lVar10 + 0x260);
  uVar11 = *(undefined8 *)(lVar10 + 0x268);
  dVar5 = *(double *)(lVar10 + 0x270);
  dVar17 = *(double *)(lVar10 + 0x268);
  *(double *)(param_1 + 0x2660) = dVar19;
  *(undefined8 *)(param_1 + 0x2668) = uVar11;
  *(double *)(param_1 + 0x2670) = dVar5;
  dVar6 = *(double *)(lVar2 + 0x260);
  uVar11 = *(undefined8 *)(lVar2 + 0x268);
  dVar7 = *(double *)(lVar2 + 0x270);
  dVar1 = *(double *)(lVar2 + 0x268);
  *(double *)(param_1 + 0x2678) = dVar6;
  *(undefined8 *)(param_1 + 0x2680) = uVar11;
  *(double *)(param_1 + 0x2688) = dVar7;
  local_110 = dVar6 - dVar19;
  local_108 = dVar1 - dVar17;
  local_100 = dVar7 - dVar5;
  if (*(longlong *)(param_1 + 0x2638) != 0) {
    FUN_144a79a9c(&local_110,local_128);
    FUN_144a7484c(local_128,local_1b8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_140 = (dVar19 + dVar6) * 0.5;
    local_138 = (dVar17 + dVar1) * 0.5;
    local_130 = (dVar5 + dVar7) * 0.5;
    FUN_14084f9fc(*(undefined8 *)(param_1 + 0x2638),&local_140,local_1b8,0);
    local_158 = (double)((float)SQRT(local_100 * local_100 +
                                     local_110 * local_110 + local_108 * local_108) / 100.0);
    local_150 = 0x3fb99999a0000000;
    local_148 = 0x3fb99999a0000000;
    (**(code **)(**(longlong **)(param_1 + 0x2638) + 0x478))();
  }
  puVar14 = local_f8;
  puVar13 = (undefined8 *)(param_1 + 0x27b0);
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  lVar10 = *(longlong *)(param_1 + 0x2630);
  uVar8 = *(undefined8 *)(lVar10 + 0x268);
  uVar11 = *(undefined8 *)(lVar10 + 0x270);
  *(undefined8 *)(param_1 + 0x27d0) = *(undefined8 *)(lVar10 + 0x260);
  *(undefined8 *)(param_1 + 0x27d8) = uVar8;
  *(undefined8 *)(param_1 + 0x27e0) = uVar11;
  *(undefined8 *)(param_1 + 0x27e8) = 0;
  puVar14 = (undefined8 *)(param_1 + 0x2810);
  puVar13 = (undefined8 *)(param_1 + 0x27b0);
  puVar15 = puVar14;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  if (*(char *)(param_1 + 0x2618) == '\0') {
    if (*(char *)(param_1 + 0x2610) == '\0') {
      dVar1 = *(double *)(param_1 + 0x2678);
      dVar19 = *(double *)(param_1 + 0x2680);
      dVar17 = *(double *)(param_1 + 0x2688);
    }
    else {
      fVar18 = *(float *)(param_1 + 0x2614);
      if ((float)local_100 <= *(float *)(param_1 + 0x2614)) {
        fVar18 = (float)local_100;
      }
      dVar1 = (double)fVar18 / local_100;
      dVar17 = local_100 * dVar1 + *(double *)(param_1 + 0x2670);
      dVar19 = local_108 * dVar1 + *(double *)(param_1 + 0x2668);
      dVar1 = dVar1 * local_110 + *(double *)(param_1 + 0x2660);
    }
    auVar4._8_4_ = SUB84(dVar19,0);
    auVar4._0_8_ = dVar1;
    auVar4._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x2830) = auVar4;
    *(double *)(param_1 + 0x2840) = dVar17;
    *(undefined8 *)(param_1 + 0x2848) = 0;
  }
  FUN_1449437a2(puVar14,local_1b8);
  puVar13 = local_1b8;
  puVar15 = puVar14;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  FUN_145816fcc(param_1 + 0x2690,*(longlong *)(param_1 + 0x25f8) + 0x4b8);
  FUN_145816f5a(param_1 + 0x2698);
  **(undefined4 **)(param_1 + 0x2698) = 2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x2698) + 0xb0) = 0;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x2698) + 0xc0);
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  fVar18 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x26ac)) {
    fVar18 = (float)(SQRT(*(double *)(param_1 + 0x2840) * *(double *)(param_1 + 0x2840) +
                          *(double *)(param_1 + 0x2830) * *(double *)(param_1 + 0x2830) +
                          *(double *)(param_1 + 0x2838) * *(double *)(param_1 + 0x2838)) /
                    (double)*(float *)(param_1 + 0x26ac));
  }
  *(float *)(&DAT_00002874 + param_1) = fVar18;
  lVar10 = *(longlong *)(param_1 + 0x25f8);
  fVar16 = (*(float *)(lVar10 + 0x5f8) + 1.0) * fVar18;
  *(float *)(param_1 + 0x2878) = fVar16;
  fVar16 = fVar16 - fVar18;
  *(float *)(&DAT_0000287c + param_1) = fVar16;
  *(float *)(param_1 + 0x2880) = fVar16 + *(float *)(lVar10 + 0x49c);
LAB_145816d86:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145816f5a FUN_145816f5a body=114 status=ok
// SIG undefined FUN_145816f5a(void)

void FUN_145816f5a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 2) {
    *(undefined4 *)(param_1 + 1) = 2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2U - iVar1) {
      FUN_148dd3588(param_1,iVar1);
    }
    FUN_148dd352c((longlong)iVar1 * 0xb0 + *param_1,2U - iVar1);
    return;
  }
  if (iVar1 == 2) {
    return;
  }
  FUN_148dd361c(param_1,iVar1 + -2);
  FUN_148dd3672(param_1);
  return;
}



// FUNCTION 145816fcc FUN_145816fcc body=226 status=ok
// SIG undefined FUN_145816fcc(void)

undefined4 * FUN_145816fcc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  *param_1 = *param_2;
  FUN_14115e11a(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  FUN_14115e0ba(param_1 + 10,param_2 + 10);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  lVar9 = *(longlong *)(param_2 + 0x2e);
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x2e);
    }
  }
  *(longlong *)(param_1 + 0x2e) = lVar9;
  uVar1 = param_2[0x31];
  uVar2 = param_2[0x32];
  uVar3 = param_2[0x33];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(undefined8 *)((longlong)param_1 + 0xcd) = *(undefined8 *)((longlong)param_2 + 0xcd);
  FUN_1458170ae(param_1 + 0x36,param_2 + 0x36);
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  uVar5 = *(undefined8 *)(param_2 + 0x3e);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x42);
  uVar8 = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x3c) = uVar4;
  *(undefined8 *)(param_1 + 0x3e) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x42) = uVar7;
  *(undefined8 *)(param_1 + 0x44) = uVar8;
  param_1[0x46] = param_2[0x46];
  return param_1;
}



// FUNCTION 1458170ae FUN_1458170ae body=84 status=ok
// SIG undefined FUN_1458170ae(void)

undefined8 * FUN_1458170ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14126e37a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 145817102 FUN_145817102 body=26 status=ok
// SIG undefined FUN_145817102(void)

void FUN_145817102(undefined8 param_1)

{
  FUN_14581711c();
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 14581711c FUN_14581711c body=79 status=ok
// SIG undefined FUN_14581711c(void)

void FUN_14581711c(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1407f4ede();
  if (lVar1 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140b4b272(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14581716c FUN_14581716c body=1712 status=ok
// SIG undefined FUN_14581716c(void)

longlong FUN_14581716c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145818198();
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_30,"Button",1);
  uVar2 = FUN_141492734(plVar1,local_30,0,0);
  FUN_141254448(param_1,uVar2);
  FUN_14115fd14(param_1 + 0x18);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 0x228);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_38,"Checkbox",1);
  uVar2 = FUN_145a4e88a(plVar1,local_38,0,0);
  FUN_1414c3ed0(param_1 + 0x370,uVar2);
  FUN_14581809a(param_1 + 0x370);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_40,"Throbber.CircleChunk",1);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,local_40,0,0);
  FUN_140f13d9e(param_1 + 0xcc0,uVar2);
  FUN_14115fd14(param_1 + 0xcc8);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_48,"ComboBox",1);
  uVar2 = FUN_145817be4(plVar1,local_48,0,0);
  FUN_1457c735e(param_1 + 0xd70,uVar2);
  FUN_145817b20(param_1 + 0xd80);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_50,"NormalEditableText",1);
  uVar2 = FUN_145817c5e(plVar1,local_50,0,0);
  FUN_145c2d5d0(param_1 + 0x1310,uVar2);
  FUN_14115fd14(param_1 + 0x1378);
  FUN_14115fd14(param_1 + 0x1398);
  FUN_14115fd14(param_1 + 0x1448);
  FUN_14115fd14(param_1 + 0x14f8);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_58,"NormalEditableTextBox",1);
  uVar2 = FUN_145817874(plVar1,local_58,0,0);
  FUN_1458a2fee(param_1 + 0x15a0,uVar2);
  FUN_145817cd8(param_1 + 0x15a0);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_60,"ExpandableArea",1);
  lVar3 = FUN_145817d52(plVar1,local_60,0,0);
  FUN_140f13d9e(param_1 + 0x2230,lVar3 + 0x10);
  FUN_140f13d9e(param_1 + 0x22e0,lVar3 + 0xc0);
  *(undefined4 *)(param_1 + 0x2390) = *(undefined4 *)(lVar3 + 0x170);
  FUN_14115fd14(param_1 + 0x2238);
  FUN_14115fd14(param_1 + 0x22e8);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_68,"ExpandableArea.Border",1);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,local_68,0,0);
  FUN_140f13d9e(param_1 + 0x23a0,uVar2);
  FUN_14115fd14(param_1 + 0x23a8);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_70,"ListView",1);
  lVar3 = FUN_1458178ee(plVar1,local_70,0,0);
  FUN_140f13d9e(param_1 + 0x2460,lVar3 + 0x10);
  FUN_14115fd14(param_1 + 0x2468);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_78,"ProgressBar",1);
  lVar3 = FUN_145817dcc(plVar1,local_78,0,0);
  FUN_140f13d9e(param_1 + 0x2520,lVar3 + 0x10);
  FUN_140f13d9e(param_1 + 0x25d0,lVar3 + 0xc0);
  FUN_140f13d9e(param_1 + 0x2680,lVar3 + 0x170);
  *(undefined1 *)(param_1 + 0x2730) = *(undefined1 *)(lVar3 + 0x220);
  FUN_14115fd14(param_1 + 0x2528);
  FUN_14115fd14(param_1 + 0x25d8);
  FUN_14115fd14(param_1 + 0x2688);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_80,"ScrollBar",1);
  uVar2 = FUN_145817968(plVar1,local_80,0);
  FUN_1412cc8ca(param_1 + 0x2740,uVar2);
  FUN_1458179e2(param_1 + 0x2740);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_88,"ScrollBox",1);
  uVar2 = FUN_145817e46(plVar1,local_88,0);
  FUN_1458d9ec6(param_1 + 0x2d90,uVar2);
  FUN_14115fd14(param_1 + 0x2da8);
  FUN_14115fd14(param_1 + 0x2e58);
  FUN_14115fd14(param_1 + 0x2f08);
  FUN_14115fd14(param_1 + 0x2fb8);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_90,"Slider",1);
  uVar2 = FUN_145817a5c(plVar1,local_90,0);
  FUN_145931d36(param_1 + 0x3080,uVar2);
  FUN_14581781e(param_1 + 0x3080);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_98,"SpinBox",1);
  uVar2 = FUN_145817ec0(plVar1,local_98,0,0);
  FUN_14134d094(param_1 + 0x34c0,uVar2);
  FUN_145817b76(param_1 + 0x34c0);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_a0,"TableView.Row",1);
  uVar2 = FUN_145817f3a(plVar1,local_a0,0,0);
  FUN_1457c74aa(param_1 + 0x39e0,uVar2);
  FUN_145817fb4(param_1 + 0x39e0);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_a8,"Throbber.Chunk",1);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,local_a8,0,0);
  FUN_140f13d9e(param_1 + 0x4530,uVar2);
  FUN_14115fd14(param_1 + 0x4538);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_b0,"NormalText",1);
  uVar2 = FUN_140a57516(plVar1,local_b0,0,0);
  FUN_140a5e6b8(param_1 + 0x45e0,uVar2);
  FUN_145817ad6(param_1 + 0x45e0);
  plVar1 = DAT_14c98de08;
  FUN_1446ddc76(&local_b8,"TreeView",1);
  lVar3 = FUN_1458178ee(plVar1,local_b8,0,0);
  FUN_140f13d9e(param_1 + 0x48d0,lVar3 + 0x10);
  FUN_14115fd14(param_1 + 0x48d8);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581781e FUN_14581781e body=85 status=ok
// SIG undefined FUN_14581781e(void)

void FUN_14581781e(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x18);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 0x228);
  FUN_14115fd14(param_1 + 0x2d8);
  FUN_14115fd14(param_1 + 0x388);
  return;
}



// FUNCTION 145817874 FUN_145817874 body=120 status=ok
// SIG undefined FUN_145817874(void)

undefined *
FUN_145817874(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c96d8c8,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_146962730();
    puVar1 = &DAT_14c96d8d0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458178ee FUN_1458178ee body=120 status=ok
// SIG undefined FUN_1458178ee(void)

undefined *
FUN_1458178ee(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979c78,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_146962d9a();
    puVar1 = &DAT_14c970a90;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817968 FUN_145817968 body=120 status=ok
// SIG undefined FUN_145817968(void)

undefined *
FUN_145817968(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c96e798,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_14696289a();
    puVar1 = &DAT_14c96e7a0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458179e2 FUN_1458179e2 body=121 status=ok
// SIG undefined FUN_1458179e2(void)

void FUN_1458179e2(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x18);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 0x228);
  FUN_14115fd14(param_1 + 0x2d8);
  FUN_14115fd14(param_1 + 0x388);
  FUN_14115fd14(param_1 + 0x438);
  FUN_14115fd14(param_1 + 0x4e8);
  FUN_14115fd14(param_1 + 0x598);
  return;
}



// FUNCTION 145817a5c FUN_145817a5c body=120 status=ok
// SIG undefined FUN_145817a5c(void)

undefined *
FUN_145817a5c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c96ff78,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_146962a6a();
    puVar1 = &DAT_14c96ff80;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817ad6 FUN_145817ad6 body=73 status=ok
// SIG undefined FUN_145817ad6(void)

void FUN_145817ad6(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x68);
  FUN_14115fd14(param_1 + 0x94);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 0x228);
  return;
}



// FUNCTION 145817b20 FUN_145817b20 body=85 status=ok
// SIG undefined FUN_145817b20(void)

void FUN_145817b20(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x28);
  FUN_14115fd14(param_1 + 0xd8);
  FUN_14115fd14(param_1 + 0x188);
  FUN_14115fd14(param_1 + 0x238);
  FUN_14115fd14(param_1 + 0x388);
  FUN_14115fd14(param_1 + 0x458);
  return;
}



// FUNCTION 145817b76 FUN_145817b76 body=109 status=ok
// SIG undefined FUN_145817b76(void)

void FUN_145817b76(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x18);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x228);
  FUN_14115fd14(param_1 + 0x2d8);
  FUN_14115fd14(param_1 + 0x388);
  FUN_14115fd14(param_1 + 0x438);
  FUN_14115fd14(param_1 + 0x4e0);
  return;
}



// FUNCTION 145817be4 FUN_145817be4 body=120 status=ok
// SIG undefined FUN_145817be4(void)

undefined *
FUN_145817be4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c96c9f8,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_14696255c();
    puVar1 = &DAT_14c96ca00;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817c5e FUN_145817c5e body=120 status=ok
// SIG undefined FUN_145817c5e(void)

undefined *
FUN_145817c5e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c96d628,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_1469626c4();
    puVar1 = &DAT_14c96d630;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817cd8 FUN_145817cd8 body=121 status=ok
// SIG undefined FUN_145817cd8(void)

void FUN_145817cd8(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x18);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 0x228);
  FUN_14115fd14(param_1 + 0x5c0);
  FUN_14115fd14(param_1 + 0x5d4);
  FUN_14115fd14(param_1 + 0x5e8);
  FUN_14115fd14(param_1 + 0x5fc);
  FUN_1458179e2(param_1 + 0x630);
  return;
}



// FUNCTION 145817d52 FUN_145817d52 body=120 status=ok
// SIG undefined FUN_145817d52(void)

undefined *
FUN_145817d52(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979c98,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_14696296e();
    puVar1 = &DAT_14c96ee00;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817dcc FUN_145817dcc body=120 status=ok
// SIG undefined FUN_145817dcc(void)

undefined *
FUN_145817dcc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979c90,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_14696282e();
    puVar1 = &DAT_14c96e560;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817e46 FUN_145817e46 body=120 status=ok
// SIG undefined FUN_145817e46(void)

undefined *
FUN_145817e46(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979cc0,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_146963326();
    puVar1 = &DAT_14c973890;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817ec0 FUN_145817ec0 body=120 status=ok
// SIG undefined FUN_145817ec0(void)

undefined *
FUN_145817ec0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c9703d0,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_146962c6c();
    puVar1 = &DAT_14c9703e0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817f3a FUN_145817f3a body=120 status=ok
// SIG undefined FUN_145817f3a(void)

undefined *
FUN_145817f3a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979c80,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_1469630bc();
    puVar1 = &DAT_14c970b60;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145817fb4 FUN_145817fb4 body=229 status=ok
// SIG undefined FUN_145817fb4(void)

void FUN_145817fb4(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x18);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 0x228);
  FUN_14115fd14(param_1 + 0x2d8);
  FUN_14115fd14(param_1 + 0x398);
  FUN_14115fd14(param_1 + 0x448);
  FUN_14115fd14(param_1 + 0x4f8);
  FUN_14115fd14(param_1 + 0x5a8);
  FUN_14115fd14(param_1 + 0x658);
  FUN_14115fd14(param_1 + 0x708);
  FUN_14115fd14(param_1 + 0x7b0);
  FUN_14115fd14(param_1 + 0x7c4);
  FUN_14115fd14(param_1 + 0x7e8);
  FUN_14115fd14(param_1 + 0x898);
  FUN_14115fd14(param_1 + 0x948);
  FUN_14115fd14(param_1 + 0x9f8);
  FUN_14115fd14(param_1 + 0xaa8);
  return;
}



// FUNCTION 14581809a FUN_14581809a body=253 status=ok
// SIG undefined FUN_14581809a(void)

void FUN_14581809a(longlong param_1)

{
  FUN_14115fd14(param_1 + 0x18);
  FUN_14115fd14(param_1 + 200);
  FUN_14115fd14(param_1 + 0x178);
  FUN_14115fd14(param_1 + 0x228);
  FUN_14115fd14(param_1 + 0x2d8);
  FUN_14115fd14(param_1 + 0x388);
  FUN_14115fd14(param_1 + 0x438);
  FUN_14115fd14(param_1 + 0x4e8);
  FUN_14115fd14(param_1 + 0x598);
  FUN_14115fd14(param_1 + 0x658);
  FUN_14115fd14(param_1 + 0x708);
  FUN_14115fd14(param_1 + 0x7b8);
  FUN_14115fd14(param_1 + 0x860);
  FUN_14115fd14(param_1 + 0x874);
  FUN_14115fd14(param_1 + 0x888);
  FUN_14115fd14(param_1 + 0x89c);
  FUN_14115fd14(param_1 + 0x8b0);
  FUN_14115fd14(param_1 + 0x8c4);
  FUN_14115fd14(param_1 + 0x8d8);
  FUN_14115fd14(param_1 + 0x8ec);
  return;
}



// FUNCTION 145818198 FUN_145818198 body=368 status=ok
// SIG undefined FUN_145818198(void)

longlong FUN_145818198(longlong param_1)

{
  FUN_140ca8d78();
  FUN_1414c3a06(param_1 + 0x370);
  FUN_140ca8f8e(param_1 + 0xcc0);
  FUN_1457c71ee(param_1 + 0xd70);
  FUN_145c2d572(param_1 + 0x1310);
  FUN_1412cd24a(param_1 + 0x15a0);
  *(undefined ***)(param_1 + 0x2220) = &PTR_FUN_149eeb6d0;
  FUN_140ca8f8e(param_1 + 0x2230);
  FUN_140ca8f8e(param_1 + 0x22e0);
  *(undefined4 *)(param_1 + 0x2390) = 0x3dcccccd;
  FUN_140ca8f8e(param_1 + 0x23a0);
  FUN_141266cde(param_1 + 0x2450);
  *(undefined ***)(param_1 + 0x2510) = &PTR_FUN_149eeb690;
  FUN_140ca8f8e(param_1 + 0x2520);
  FUN_140ca8f8e(param_1 + 0x25d0);
  FUN_140ca8f8e(param_1 + 0x2680);
  *(undefined1 *)(param_1 + 0x2730) = 0;
  FUN_1412cd7de(param_1 + 0x2740);
  FUN_1458d9e50(param_1 + 0x2d90);
  FUN_145931ccc(param_1 + 0x3080);
  FUN_14134cd04(param_1 + 0x34c0);
  FUN_1457c724e(param_1 + 0x39e0);
  FUN_140ca8f8e(param_1 + 0x4530);
  FUN_140a581a0(param_1 + 0x45e0);
  FUN_141266cde(param_1 + 0x48c0);
  *(undefined8 *)(param_1 + 0x49a0) = 0;
  *(undefined4 *)(param_1 + 0x49a8) = 0;
  *(undefined8 *)(param_1 + 0x4980) = 0;
  *(undefined8 *)(param_1 + 0x4988) = 0;
  *(undefined8 *)(param_1 + 0x49ac) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x49b4) = 0;
  *(undefined8 *)(param_1 + 0x49c0) = 0;
  *(undefined4 *)(param_1 + 0x49c8) = 0;
  return param_1;
}



// FUNCTION 145818308 FUN_145818308 body=60 status=ok
// SIG undefined FUN_145818308(void)

int FUN_145818308(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1405bc420(param_1,iVar1);
  }
  FUN_145818344((longlong)iVar1 * 0x58 + *param_1,1);
  return iVar1;
}



// FUNCTION 145818344 FUN_145818344 body=65 status=ok
// SIG undefined FUN_145818344(void)

void FUN_145818344(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    uVar1 = DAT_14c8464e8;
    param_1[3] = DAT_14c8464e0;
    param_1[4] = uVar1;
    param_1[5] = DAT_14c8464f0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1 = param_1 + 0xb;
  }
  return;
}



// FUNCTION 145818386 FUN_145818386 body=106 status=ok
// SIG undefined FUN_145818386(void)

undefined8 FUN_145818386(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1411604ae(local_40,0);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458183f2 FUN_1458183f2 body=70 status=ok
// SIG undefined FUN_1458183f2(void)

undefined8 * FUN_1458183f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bce66c0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145818438(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145818438 FUN_145818438 body=181 status=ok
// SIG undefined FUN_145818438(void)

void FUN_145818438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcd6f60;
  FUN_141161157(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141161157(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14581851a(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1458184ed(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458184ed FUN_1458184ed body=45 status=ok
// SIG undefined FUN_1458184ed(void)

void FUN_1458184ed(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14581851a FUN_14581851a body=63 status=ok
// SIG undefined FUN_14581851a(void)

void FUN_14581851a(longlong param_1,int param_2)

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



// FUNCTION 145818559 FUN_145818559 body=3 status=ok
// SIG undefined FUN_145818559(void)

undefined1 FUN_145818559(void)

{
  return 1;
}



// FUNCTION 14581855c FUN_14581855c body=40 status=ok
// SIG undefined FUN_14581855c(void)

undefined8 FUN_14581855c(undefined8 param_1,int param_2)

{
  FUN_145818584();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145818584 FUN_145818584 body=74 status=ok
// SIG undefined FUN_145818584(void)

void FUN_145818584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4f3900;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1458185ce(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1404db954(param_1);
  return;
}



// FUNCTION 1458185ce FUN_1458185ce body=49 status=ok
// SIG undefined FUN_1458185ce(void)

void FUN_1458185ce(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
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



// FUNCTION 14581860e FUN_14581860e body=45 status=ok
// SIG undefined FUN_14581860e(void)

undefined8 FUN_14581860e(undefined8 param_1,int param_2)

{
  FUN_14581863c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 14581863c FUN_14581863c body=61 status=ok
// SIG undefined FUN_14581863c(void)

void FUN_14581863c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0f9570;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14581868e FUN_14581868e body=57 status=ok
// SIG undefined FUN_14581868e(void)

void FUN_14581868e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a878 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a878 = FUN_140002ddd(FUN_1464cb0de,uVar1,L"GbxBodySettings");
  }
  return;
}



// FUNCTION 1458186d8 FUN_1458186d8 body=80 status=ok
// SIG undefined FUN_1458186d8(void)

void FUN_1458186d8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  if (param_1[0xc] == param_1[4]) {
    iVar2 = (int)param_1[5];
    if ((int)param_1[0xd] == iVar2) {
      return;
    }
  }
  else {
    iVar2 = (int)param_1[5];
  }
  param_1[0xc] = param_1[4];
  *(int *)(param_1 + 0xd) = iVar2;
  param_1[0xe] = 0;
  return;
}



// FUNCTION 145818730 FUN_145818730 body=88 status=ok
// SIG undefined FUN_145818730(void)

undefined8 * FUN_145818730(undefined8 *param_1)

{
  FUN_14076ff26();
  *param_1 = &PTR_FUN_14b65c840;
  param_1[6] = &PTR_FUN_14b65cb30;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 145818788 FUN_145818788 body=86 status=ok
// SIG undefined FUN_145818788(void)

void FUN_145818788(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    plVar2 = (longlong *)FUN_1412ba9fc(param_1 + 0x718);
    cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
    if (cVar1 != '\0') {
      FUN_1458187de(param_1 + 0x738,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1458187de FUN_1458187de body=62 status=ok
// SIG undefined FUN_1458187de(void)

void FUN_1458187de(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581881e FUN_14581881e body=322 status=ok
// SIG undefined FUN_14581881e(void)

ulonglong FUN_14581881e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x770);
  lVar13 = (longlong)iVar1;
  uVar8 = 0;
  if (lVar13 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x768);
    bVar4 = FUN_14069eaf4(lVar2);
    iVar9 = 0;
    do {
      lVar11 = (longlong)iVar9;
      iVar7 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar7 = iVar1;
      }
      lVar6 = lVar2 + 0xc + lVar11 * 0xc;
      lVar12 = lVar11;
      iVar10 = iVar9;
      do {
        lVar12 = lVar12 + 1;
        iVar3 = iVar7;
        if (lVar13 <= lVar12) break;
        bVar5 = FUN_14069eaf4(lVar6,param_2);
        iVar10 = iVar10 + 1;
        lVar6 = lVar6 + 0xc;
        iVar3 = iVar10;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        iVar7 = (int)uVar8;
        if (iVar7 != iVar9) {
          memmove((void *)(lVar2 + (longlong)iVar7 * 0xc),(void *)(lVar2 + lVar11 * 0xc),
                  (longlong)(iVar3 - iVar9) * 0xc);
        }
        uVar8 = (ulonglong)(uint)(iVar7 + (iVar3 - iVar9));
      }
      iVar9 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar12 < lVar13);
    *(int *)(param_1 + 0x770) = (int)uVar8;
    uVar8 = CONCAT71((int7)(uVar8 >> 8),(int)uVar8 < iVar1);
  }
  return uVar8;
}



// FUNCTION 145818966 FUN_145818966 body=232 status=ok
// SIG undefined FUN_145818966(void)

void FUN_145818966(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140cb1480(uVar1);
  if (lVar2 != 0) {
    FUN_145818abc(lVar2,param_2);
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_140b70372(uVar1);
  if (lVar2 != 0) {
    FUN_14581a89a(lVar2,param_2);
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_14591aac6(uVar1);
  if (lVar2 != 0) {
    FUN_145818cea(lVar2,param_2);
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_141356fb0(uVar1);
  if (lVar2 != 0) {
    FUN_145818a4e(lVar2,param_2);
  }
  lVar2 = FUN_1400b465c(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_1459b10c6(lVar2);
    if (lVar2 != 0) {
      FUN_145818b84(lVar2,param_2);
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar2 = FUN_14591a9e4(uVar1);
  if (lVar2 == 0) {
    return;
  }
  FUN_148aa9778(lVar2,param_2);
  return;
}



// FUNCTION 145818a4e FUN_145818a4e body=110 status=ok
// SIG undefined FUN_145818a4e(void)

void FUN_145818a4e(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_2) {
          FUN_144a7cc9e((longlong *)(param_1 + 0x18),param_2);
          FUN_14581909e(param_1,param_2);
          return;
        }
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145818abc FUN_145818abc body=198 status=ok
// SIG undefined FUN_145818abc(void)

void FUN_145818abc(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      plVar1 = (longlong *)(param_1 + 0x28);
      do {
        lVar2 = *plVar1 + (longlong)iVar3 * 0x70;
        if (*(uint *)(*plVar1 + (longlong)iVar3 * 0x70) == param_2) {
          if (lVar2 == 0) {
            return;
          }
          if (lVar2 == -8) {
            return;
          }
          FUN_141163218();
          if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
            lVar2 = param_1 + 0x60;
            if (*(longlong *)(param_1 + 0x68) != 0) {
              lVar2 = *(longlong *)(param_1 + 0x68);
            }
            iVar3 = *(int *)(lVar2 + ((longlong)(int)param_2 &
                                     (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
            if (iVar3 != -1) {
              do {
                if (*(uint *)(*plVar1 + (longlong)iVar3 * 0x70) == param_2) {
                  FUN_145818bfc(plVar1,iVar3);
                  return;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x70 + *plVar1 + 0x68);
              } while (iVar3 != -1);
            }
          }
          return;
        }
        iVar3 = *(int *)(lVar2 + 0x68);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 145818b84 FUN_145818b84 body=120 status=ok
// SIG undefined FUN_145818b84(void)

void FUN_145818b84(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_144a7cc9e(param_1 + 9);
  if (0 < iVar1) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_141030f66();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
        FUN_1458192d8(*(longlong *)(lVar2 + 0x30),param_2,DAT_14cb978e0);
      }
    }
    FUN_14116350a(param_1,param_2);
    FUN_1458191a8(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145818bfc FUN_145818bfc body=120 status=ok
// SIG undefined FUN_145818bfc(void)

void FUN_145818bfc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x70;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x6c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x70 + 0x68);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x68);
  FUN_145f97cf4(*param_1 + lVar2 + 8);
  FUN_145818c74(param_1,param_2);
  return;
}



// FUNCTION 145818c74 FUN_145818c74 body=118 status=ok
// SIG undefined FUN_145818c74(void)

void FUN_145818c74(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145818cea FUN_145818cea body=191 status=ok
// SIG undefined FUN_145818cea(void)

void FUN_145818cea(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_144a7cc9e(param_1 + 5);
  if (0 < iVar1) {
    FUN_144a7cc9e(param_1 + 0x26,param_2);
    local_28 = 0;
    uStack_20 = 0;
    local_30[0] = param_2;
    FUN_1411642e0(param_1,param_2);
    FUN_14116373e(param_1,local_30);
    FUN_145818daa(param_1 + 0x19,param_2);
    FUN_145819bdc(param_1,param_2);
    if ((int)param_1[6] == *(int *)((longlong)param_1 + 0x5c)) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    FUN_141164df8(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145818daa FUN_145818daa body=85 status=ok
// SIG undefined FUN_145818daa(void)

void FUN_145818daa(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_145818e00(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145818e00 FUN_145818e00 body=94 status=ok
// SIG undefined FUN_145818e00(void)

void FUN_145818e00(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_145818e5e();
  return;
}



// FUNCTION 145818e5e FUN_145818e5e body=84 status=ok
// SIG undefined FUN_145818e5e(void)

void FUN_145818e5e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145818eb2(lVar1 + lVar2 + 8);
  FUN_145818ee8(param_1,param_2);
  return;
}



// FUNCTION 145818eb2 FUN_145818eb2 body=53 status=ok
// SIG undefined FUN_145818eb2(void)

void FUN_145818eb2(longlong *param_1)

{
  FUN_145818f64();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145818ee8 FUN_145818ee8 body=124 status=ok
// SIG undefined FUN_145818ee8(void)

void FUN_145818ee8(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145818f64 FUN_145818f64 body=312 status=ok
// SIG undefined FUN_145818f64(void)

void FUN_145818f64(longlong *param_1)

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
      FUN_14116327c(*local_68 + (longlong)iStack_4c * 0x78 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581909e FUN_14581909e body=264 status=ok
// SIG undefined FUN_14581909e(void)

void FUN_14581909e(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar4 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x68);
      do {
        lVar6 = (longlong)iVar3;
        if (*(uint *)(lVar4 + lVar6 * 0x18) == param_2) {
          local_20 = *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18);
          FUN_14581b41a();
          plVar5 = (longlong *)FUN_140a68038(1);
          if (plVar5 == (longlong *)0x0) {
            local_38 = (longlong *)0x0;
            plStack_30 = (longlong *)0x0;
          }
          else {
            (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
            if (local_38 != (longlong *)0x0) {
              (**(code **)(*local_38 + 0x30))(local_38,param_2,&local_20);
            }
          }
          plVar5 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + lVar6 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458191a8 FUN_1458191a8 body=303 status=ok
// SIG undefined FUN_1458191a8(void)

void FUN_1458191a8(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[0x14] != *(int *)((longlong)param_1 + 0xcc)) {
    plVar5 = param_1 + 0x1a;
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x1b];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x1c] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = param_1[0x13];
      do {
        lVar6 = (longlong)iVar3;
        if (*(uint *)(lVar4 + lVar6 * 0x18) == param_2) {
          local_28 = *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18);
          FUN_14581b41a();
          (**(code **)(*param_1 + 0x180))(param_1);
          local_20 = 0;
          plVar5 = (longlong *)FUN_1401e3228();
          if (plVar5 == (longlong *)0x0) {
            local_38 = (longlong *)0x0;
            plStack_30 = (longlong *)0x0;
          }
          else {
            (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
            if (local_38 != (longlong *)0x0) {
              (**(code **)(*local_38 + 0x30))(local_38,param_2,&local_28);
            }
          }
          plVar5 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + lVar6 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458192d8 FUN_1458192d8 body=502 status=ok
// SIG undefined FUN_1458192d8(void)

void FUN_1458192d8(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xdc)) {
    return;
  }
  lVar2 = param_1 + 0xe0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
  }
  iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
  if (iVar3 == -1) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  while (*(uint *)(lVar2 + (longlong)iVar3 * 0xc) != param_2) {
    iVar3 = *(int *)(lVar2 + (longlong)iVar3 * 0xc + 4);
    if (iVar3 == -1) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar2 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x188);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 400) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x148);
      do {
        lVar4 = lVar2 + (longlong)iVar3 * 0x60;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x60) == param_2) break;
        iVar3 = *(int *)(lVar4 + 0x58);
        lVar4 = 0;
      } while (iVar3 != -1);
      goto LAB_14581939e;
    }
  }
  lVar4 = 0;
LAB_14581939e:
  if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar2 = lVar4 + 0x40;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      lVar2 = *(longlong *)(lVar4 + 0x48);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(lVar4 + 0x50) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(lVar4 + 8);
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar3 * 0x10) == param_3) {
          FUN_144a8b5fe((longlong *)(lVar4 + 8),param_3);
          if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
            return;
          }
          FUN_144a7cc9e((longlong *)(param_1 + 0xa8),param_2);
          FUN_145819572((longlong *)(param_1 + 0x148),param_2);
          FUN_144a7cc9e(param_1 + 0xf8,param_2);
          FUN_1458194ce(param_1 + 0x1a8,param_2);
          FUN_145819520(param_1 + 0x1f8,param_2);
          FUN_1458195c8(param_1 + 0x248,param_2);
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1458194ce FUN_1458194ce body=81 status=ok
// SIG undefined FUN_1458194ce(void)

void FUN_1458194ce(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x14) == param_2) {
          FUN_14581961e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145819520 FUN_145819520 body=81 status=ok
// SIG undefined FUN_145819520(void)

void FUN_145819520(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x14) == param_2) {
          FUN_145819674(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145819572 FUN_145819572 body=85 status=ok
// SIG undefined FUN_145819572(void)

void FUN_145819572(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_1458196ca(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1458195c8 FUN_1458195c8 body=85 status=ok
// SIG undefined FUN_1458195c8(void)

void FUN_1458195c8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_1458198e0(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14581961e FUN_14581961e body=85 status=ok
// SIG undefined FUN_14581961e(void)

void FUN_14581961e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_14581977c();
  return;
}



// FUNCTION 145819674 FUN_145819674 body=85 status=ok
// SIG undefined FUN_145819674(void)

void FUN_145819674(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_1458197f0();
  return;
}



// FUNCTION 1458196ca FUN_1458196ca body=94 status=ok
// SIG undefined FUN_1458196ca(void)

void FUN_1458196ca(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_145819728();
  return;
}



// FUNCTION 145819728 FUN_145819728 body=84 status=ok
// SIG undefined FUN_145819728(void)

void FUN_145819728(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(lVar1 + lVar2 + 8);
  FUN_145819864(param_1,param_2);
  return;
}



// FUNCTION 14581977c FUN_14581977c body=116 status=ok
// SIG undefined FUN_14581977c(void)

void FUN_14581977c(longlong *param_1,int param_2)

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



// FUNCTION 1458197f0 FUN_1458197f0 body=116 status=ok
// SIG undefined FUN_1458197f0(void)

void FUN_1458197f0(longlong *param_1,int param_2)

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



// FUNCTION 145819864 FUN_145819864 body=124 status=ok
// SIG undefined FUN_145819864(void)

void FUN_145819864(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1458198e0 FUN_1458198e0 body=94 status=ok
// SIG undefined FUN_1458198e0(void)

void FUN_1458198e0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_14581993e();
  return;
}



// FUNCTION 14581993e FUN_14581993e body=84 status=ok
// SIG undefined FUN_14581993e(void)

void FUN_14581993e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145819992(lVar1 + lVar2 + 8);
  FUN_1458199c8(param_1,param_2);
  return;
}



// FUNCTION 145819992 FUN_145819992 body=53 status=ok
// SIG undefined FUN_145819992(void)

void FUN_145819992(longlong *param_1)

{
  FUN_145819a44();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458199c8 FUN_1458199c8 body=124 status=ok
// SIG undefined FUN_1458199c8(void)

void FUN_1458199c8(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145819a44 FUN_145819a44 body=305 status=ok
// SIG undefined FUN_145819a44(void)

void FUN_145819a44(longlong *param_1)

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
      FUN_145819b76((longlong)iStack_4c * 0x38 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145819b76 FUN_145819b76 body=101 status=ok
// SIG undefined FUN_145819b76(void)

void FUN_145819b76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000145819bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145819bdc FUN_145819bdc body=541 status=ok
// SIG undefined FUN_145819bdc(void)

void FUN_145819bdc(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar6 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xb8);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x78);
      do {
        lVar3 = lVar6 + (longlong)iVar5 * 0x60;
        if (*(uint *)(lVar6 + (longlong)iVar5 * 0x60) == param_2) {
          if ((lVar3 != 0) && (plVar7 = (longlong *)(lVar3 + 8), plVar7 != (longlong *)0x0)) {
            local_68 = (longlong *)(lVar3 + 0x18);
            local_70 = (longlong *)&DAT_100000000;
            local_60 = 0xffffffff;
            local_58 = 0;
            if (*(int *)(lVar3 + 0x30) != 0) {
              FUN_1449c0562(&local_70);
            }
            local_80 = local_60;
            uVar4 = local_80;
            local_78 = local_58;
            local_74 = local_54;
            local_90 = local_70;
            local_88 = local_68;
            local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
            local_98 = plVar7;
            if (local_80._4_4_ < (int)local_68[3]) {
              iVar5 = local_80._4_4_;
              local_80 = uVar4;
              do {
                local_a0 = *(undefined8 *)(*local_98 + 8 + (longlong)iVar5 * 0x18);
                uVar4 = *(undefined8 *)(*local_98 + (longlong)iVar5 * 0x18);
                FUN_141164a58(param_1);
                local_50 = uVar4;
                plVar7 = (longlong *)FUN_1401e3228(&local_50);
                if (plVar7 != (longlong *)0x0) {
                  (**(code **)(*plVar7 + 0x80))(plVar7,&local_70);
                  if (local_70 != (longlong *)0x0) {
                    (**(code **)(*local_70 + 0x30))(local_70,param_2,&local_a0);
                  }
                  plVar7 = local_68;
                  if (local_68 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_68 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_68)(local_68);
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
                local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
                FUN_1449c0562(&local_90);
                iVar5 = local_80._4_4_;
                uVar4 = local_80;
              } while (local_80._4_4_ < (int)local_88[3]);
            }
            local_80 = uVar4;
            FUN_145819dfa((longlong *)(param_1 + 0x78),param_2);
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x58);
      } while (iVar5 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145819dfa FUN_145819dfa body=85 status=ok
// SIG undefined FUN_145819dfa(void)

void FUN_145819dfa(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_145819e50(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145819e50 FUN_145819e50 body=94 status=ok
// SIG undefined FUN_145819e50(void)

void FUN_145819e50(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_145819eae();
  return;
}



// FUNCTION 145819eae FUN_145819eae body=84 status=ok
// SIG undefined FUN_145819eae(void)

void FUN_145819eae(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(lVar1 + lVar2 + 8);
  FUN_145819f02(param_1,param_2);
  return;
}



// FUNCTION 145819f02 FUN_145819f02 body=124 status=ok
// SIG undefined FUN_145819f02(void)

void FUN_145819f02(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145819f7e FUN_145819f7e body=269 status=ok
// SIG undefined FUN_145819f7e(void)

undefined4 * FUN_145819f7e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_14581a25e(param_1,local_48);
  FUN_14581a08c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_14581a1a0(param_1,param_3,local_40,local_48);
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
      FUN_14581a34e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581a08c FUN_14581a08c body=149 status=ok
// SIG undefined FUN_14581a08c(void)

undefined4 * FUN_14581a08c(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  *param_2 = *(undefined4 *)*param_1;
  FUN_14581a122(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145818eb2(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581a122 FUN_14581a122 body=125 status=ok
// SIG undefined FUN_14581a122(void)

undefined8 * FUN_14581a122(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14581a500();
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



// FUNCTION 14581a1a0 FUN_14581a1a0 body=189 status=ok
// SIG undefined FUN_14581a1a0(void)

undefined8 FUN_14581a1a0(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_145818eb2((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_145818ee8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14581a25e FUN_14581a25e body=239 status=ok
// SIG undefined FUN_14581a25e(void)

int * FUN_14581a25e(longlong *param_1,int *param_2)

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



// FUNCTION 14581a34e FUN_14581a34e body=432 status=ok
// SIG undefined FUN_14581a34e(void)

void FUN_14581a34e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 14581a500 FUN_14581a500 body=436 status=ok
// SIG undefined FUN_14581a500(void)

longlong * FUN_14581a500(longlong *param_1,longlong *param_2)

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
          FUN_14116327c(*local_78 + (longlong)iVar6 * 0x78 + 8);
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



// FUNCTION 14581a6b6 FUN_14581a6b6 body=482 status=ok
// SIG undefined FUN_14581a6b6(void)

void FUN_14581a6b6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x78;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x74 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar7) =
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



// FUNCTION 14581a89a FUN_14581a89a body=2943 status=ok
// SIG undefined FUN_14581a89a(void)

void FUN_14581a89a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = FUN_144a7cc9e(param_1 + 0x16);
  if (iVar4 < 1) goto LAB_14581af01;
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  FUN_14581b552(param_1 + 0x70,param_2);
  FUN_14581b552(param_1 + 0x7a,param_2);
  FUN_144a7cc9e(param_1 + 0x5c,param_2);
  FUN_144a7cc9e(param_1 + 0x66,param_2);
  FUN_14581b814(param_1 + 0x8e,param_2);
  plVar5 = param_1 + 0xb9;
  if ((int)param_1[0xba] == *(int *)((longlong)param_1 + 0x5fc)) {
LAB_14581af2a:
    puVar6 = (uint *)0x0;
  }
  else {
    plVar7 = param_1 + 0xc0;
    if ((longlong *)param_1[0xc1] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0xc1];
    }
    uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xc2] - 1U & param_2) * 4);
    if (uVar8 == 0xffffffff) goto LAB_14581af2a;
    do {
      puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
      if (*puVar6 == param_2) break;
      uVar8 = puVar6[8];
      puVar6 = (uint *)0x0;
    } while (uVar8 != 0xffffffff);
  }
  if (((*(longlong *)(puVar6 + 2) != 0) && (*(longlong *)(puVar6 + 4) != 0)) &&
     (0 < *(int *)(*(longlong *)(puVar6 + 4) + 8))) {
    FUN_1401cb356();
    if ((int)param_1[0xba] != *(int *)((longlong)param_1 + 0x5fc)) {
      plVar7 = param_1 + 0xc0;
      if ((longlong *)param_1[0xc1] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xc1];
      }
      uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xc2] - 1U & param_2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
          if (*puVar6 == param_2) goto LAB_14581afa2;
          uVar8 = puVar6[8];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_14581afa2:
    local_40 = *(undefined8 *)(puVar6 + 2);
    local_38 = *(longlong *)(puVar6 + 4);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_40);
    if ((int)param_1[0xba] != *(int *)((longlong)param_1 + 0x5fc)) {
      plVar7 = param_1 + 0xc0;
      if ((longlong *)param_1[0xc1] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xc1];
      }
      uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xc2] - 1U & param_2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
          if (*puVar6 == param_2) goto LAB_14581b005;
          uVar8 = puVar6[8];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_14581b005:
    plVar7 = *(longlong **)(puVar6 + 4);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if ((int)param_1[0xba] != *(int *)((longlong)param_1 + 0x5fc)) {
      plVar7 = param_1 + 0xc0;
      if ((longlong *)param_1[0xc1] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xc1];
      }
      uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xc2] - 1U & param_2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
          if (*puVar6 == param_2) goto LAB_14581b05c;
          uVar8 = puVar6[8];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_14581b05c:
    plVar7 = *(longlong **)(puVar6 + 4);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  FUN_14581b500(plVar5,param_2);
  plVar5 = param_1 + 0xc3;
  if ((int)param_1[0xc4] == *(int *)((longlong)param_1 + 0x64c)) {
LAB_14581af31:
    puVar6 = (uint *)0x0;
  }
  else {
    plVar7 = param_1 + 0xca;
    if ((longlong *)param_1[0xcb] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0xcb];
    }
    uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xcc] - 1U & param_2) * 4);
    if (uVar8 == 0xffffffff) goto LAB_14581af31;
    do {
      puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
      if (*puVar6 == param_2) break;
      uVar8 = puVar6[8];
      puVar6 = (uint *)0x0;
    } while (uVar8 != 0xffffffff);
  }
  if (((*(longlong *)(puVar6 + 2) != 0) && (*(longlong *)(puVar6 + 4) != 0)) &&
     (0 < *(int *)(*(longlong *)(puVar6 + 4) + 8))) {
    FUN_1401cb356();
    if ((int)param_1[0xc4] != *(int *)((longlong)param_1 + 0x64c)) {
      plVar7 = param_1 + 0xca;
      if ((longlong *)param_1[0xcb] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xcb];
      }
      uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xcc] - 1U & param_2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
          if (*puVar6 == param_2) goto LAB_14581b0ef;
          uVar8 = puVar6[8];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_14581b0ef:
    local_50 = *(undefined8 *)(puVar6 + 2);
    local_48 = *(longlong *)(puVar6 + 4);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_50);
    if ((int)param_1[0xc4] != *(int *)((longlong)param_1 + 0x64c)) {
      plVar7 = param_1 + 0xca;
      if ((longlong *)param_1[0xcb] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xcb];
      }
      uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xcc] - 1U & param_2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
          if (*puVar6 == param_2) goto LAB_14581b14f;
          uVar8 = puVar6[8];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_14581b14f:
    plVar7 = *(longlong **)(puVar6 + 4);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if ((int)param_1[0xc4] != *(int *)((longlong)param_1 + 0x64c)) {
      plVar7 = param_1 + 0xca;
      if ((longlong *)param_1[0xcb] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xcb];
      }
      uVar8 = *(uint *)((longlong)plVar7 + (ulonglong)((int)param_1[0xcc] - 1U & param_2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar5 + (longlong)(int)uVar8 * 0x28);
          if (*puVar6 == param_2) goto LAB_14581b1a6;
          uVar8 = puVar6[8];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_14581b1a6:
    plVar7 = *(longlong **)(puVar6 + 4);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  FUN_14581b500(plVar5,param_2);
  local_58 = 0;
  if ((int)param_1[0x49] != *(int *)((longlong)param_1 + 0x274)) {
    plVar5 = param_1 + 0x4f;
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x50];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x51] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = param_1[0x48];
      do {
        lVar9 = (longlong)iVar4;
        if (*(uint *)(lVar3 + lVar9 * 0x18) == param_2) {
          local_58 = *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18);
          FUN_14581b41a();
          FUN_140b708a0(param_1);
          local_90 = (longlong *)0x0;
          plVar5 = (longlong *)FUN_1401e3228();
          if (plVar5 == (longlong *)0x0) {
            local_68 = (longlong *)0x0;
            plStack_60 = (longlong *)0x0;
          }
          else {
            (**(code **)(*plVar5 + 0x80))(plVar5,&local_68);
            if (local_68 != (longlong *)0x0) {
              (**(code **)(*local_68 + 0x30))(local_68,param_2,&local_58);
            }
          }
          plVar5 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_60 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + lVar9 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_70 = 0;
  if ((int)param_1[0x35] != *(int *)((longlong)param_1 + 0x1d4)) {
    plVar5 = param_1 + 0x3b;
    if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x3c];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x3d] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = param_1[0x34];
      do {
        lVar9 = (longlong)iVar4;
        if (*(uint *)(lVar3 + lVar9 * 0x18) == param_2) {
          local_70 = *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18);
          FUN_14581b41a();
          FUN_140b708a0(param_1);
          local_90 = (longlong *)0x0;
          plVar5 = (longlong *)FUN_1401e3228();
          if (plVar5 == (longlong *)0x0) {
            local_68 = (longlong *)0x0;
            plStack_60 = (longlong *)0x0;
          }
          else {
            (**(code **)(*plVar5 + 0x28))(plVar5,&local_68);
            if (local_68 != (longlong *)0x0) {
              (**(code **)(*local_68 + 0x10))(local_68,param_2,&local_70);
            }
          }
          plVar5 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_60 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + lVar9 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  FUN_14581b97a(param_1,param_2);
  if ((int)param_1[0x17] == *(int *)((longlong)param_1 + 0xe4)) {
    if (param_1[0x98] != 0) {
      FUN_140b708a0(param_1);
      local_90 = (longlong *)0x0;
      plVar5 = (longlong *)FUN_1401e3228();
      if (plVar5 == (longlong *)0x0) {
        local_68 = (longlong *)0x0;
        plStack_60 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar5 + 200))(plVar5,&local_68);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x30))(local_68,param_1 + 0x98);
        }
      }
      plVar5 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_60 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      param_1[0x98] = 0;
    }
    if (param_1[0x9c] != 0) {
      FUN_140b708a0(param_1);
      local_90 = (longlong *)0x0;
      plVar5 = (longlong *)FUN_1401e3228();
      if (plVar5 == (longlong *)0x0) {
        local_68 = (longlong *)0x0;
        plStack_60 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar5 + 0x28))(plVar5,&local_68);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x50))(local_68,param_1 + 0x9c);
        }
      }
      plVar5 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_60 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      param_1[0x9c] = 0;
    }
  }
  plVar5 = (longlong *)FUN_140a68038(0);
  if (plVar5 != (longlong *)0x0) {
    local_78 = 0;
    if ((int)param_1[0x53] != *(int *)((longlong)param_1 + 0x2c4)) {
      plVar7 = param_1 + 0x59;
      if ((longlong *)param_1[0x5a] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0x5a];
      }
      iVar4 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[0x5b] - 1U & param_2) * 4);
      if (iVar4 != -1) {
        lVar3 = param_1[0x52];
        do {
          lVar9 = (longlong)iVar4;
          if (*(uint *)(lVar3 + lVar9 * 0x18) == param_2) {
            local_78 = *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18);
            FUN_14581b41a();
            (**(code **)(*plVar5 + 0x80))(plVar5,&local_68);
            if (local_68 != (longlong *)0x0) {
              (**(code **)(*local_68 + 0x30))(local_68,param_2,&local_78);
            }
            plVar7 = plStack_60;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_60)(plStack_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            break;
          }
          iVar4 = *(int *)(lVar3 + lVar9 * 0x18 + 0x10);
        } while (iVar4 != -1);
      }
    }
    local_80 = 0;
    if ((int)param_1[0x3f] != *(int *)((longlong)param_1 + 0x224)) {
      plVar7 = param_1 + 0x45;
      if ((longlong *)param_1[0x46] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0x46];
      }
      iVar4 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[0x47] - 1U & param_2) * 4);
      if (iVar4 != -1) {
        lVar3 = param_1[0x3e];
        do {
          lVar9 = (longlong)iVar4;
          if (*(uint *)(lVar3 + lVar9 * 0x18) == param_2) {
            local_80 = *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18);
            FUN_14581b41a();
            break;
          }
          iVar4 = *(int *)(lVar3 + lVar9 * 0x18 + 0x10);
        } while (iVar4 != -1);
      }
    }
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_68);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))(local_68,param_2,&local_80);
      plVar7 = local_68;
      local_90 = (longlong *)0x0;
      local_88 = 0;
      FUN_1446efa72(&local_90,0,2,0x10);
      local_88 = 2;
      *local_90 = (longlong)&PTR_LAB_14b4392c0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_90[2] = lVar9;
      *local_90 = (longlong)&PTR_FUN_14b4e2b50;
      (**(code **)(*plVar7 + 0xf0))(plVar7,param_2,&DAT_14cb97068,&local_90);
      FUN_1449db362(&local_90);
      FUN_14581b86c(param_1,param_2);
    }
    if (((int)param_1[0x17] == *(int *)((longlong)param_1 + 0xe4)) && (param_1[0x99] != 0)) {
      (**(code **)(*plVar5 + 200))(plVar5,&local_90);
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x30))(local_90,param_1 + 0x99);
      }
      plVar5 = (longlong *)CONCAT44(uStack_84,local_88);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      param_1[0x99] = 0;
    }
    plVar5 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_60 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
LAB_14581af01:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581b41a FUN_14581b41a body=91 status=ok
// SIG undefined FUN_14581b41a(void)

void FUN_14581b41a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14581b476(param_1,param_2,1);
  return;
}



// FUNCTION 14581b476 FUN_14581b476 body=138 status=ok
// SIG undefined FUN_14581b476(void)

void FUN_14581b476(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14581b500 FUN_14581b500 body=81 status=ok
// SIG undefined FUN_14581b500(void)

void FUN_14581b500(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_14581b5a8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14581b552 FUN_14581b552 body=85 status=ok
// SIG undefined FUN_14581b552(void)

void FUN_14581b552(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_14581b63c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14581b5a8 FUN_14581b5a8 body=85 status=ok
// SIG undefined FUN_14581b5a8(void)

void FUN_14581b5a8(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_14581b5fe();
  return;
}



// FUNCTION 14581b5fe FUN_14581b5fe body=61 status=ok
// SIG undefined FUN_14581b5fe(void)

void FUN_14581b5fe(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14581b724(param_1,param_2);
  return;
}



// FUNCTION 14581b63c FUN_14581b63c body=94 status=ok
// SIG undefined FUN_14581b63c(void)

void FUN_14581b63c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_14581b69a();
  return;
}



// FUNCTION 14581b69a FUN_14581b69a body=82 status=ok
// SIG undefined FUN_14581b69a(void)

void FUN_14581b69a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_14581b6ec(lVar1 + lVar2 + 8);
  FUN_14581b798(param_1,param_2);
  return;
}



// FUNCTION 14581b6ec FUN_14581b6ec body=55 status=ok
// SIG undefined FUN_14581b6ec(void)

void FUN_14581b6ec(longlong *param_1)

{
  FUN_141164fb0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14581b724 FUN_14581b724 body=116 status=ok
// SIG undefined FUN_14581b724(void)

void FUN_14581b724(longlong *param_1,int param_2)

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



// FUNCTION 14581b798 FUN_14581b798 body=124 status=ok
// SIG undefined FUN_14581b798(void)

void FUN_14581b798(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14581b814 FUN_14581b814 body=87 status=ok
// SIG undefined FUN_14581b814(void)

void FUN_14581b814(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_148a76fa8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14581b86c FUN_14581b86c body=269 status=ok
// SIG undefined FUN_14581b86c(void)

void FUN_14581b86c(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_30);
    if ((local_30 != (longlong *)0x0) && (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184))) {
      lVar4 = param_1 + 0x188;
      if (*(longlong *)(param_1 + 400) != 0) {
        lVar4 = *(longlong *)(param_1 + 400);
      }
      iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_2) * 4);
      if (iVar2 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x150);
        do {
          lVar5 = (longlong)iVar2;
          if (*(uint *)(lVar4 + lVar5 * 0x18) == param_2) {
            local_38 = *(undefined8 *)(lVar4 + 8 + lVar5 * 0x18);
            FUN_14581b41a((longlong *)(param_1 + 0x150));
            (**(code **)(*local_30 + 0x218))(local_30,&local_38);
            break;
          }
          iVar2 = *(int *)(lVar4 + lVar5 * 0x18 + 0x10);
        } while (iVar2 != -1);
      }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581b97a FUN_14581b97a body=294 status=ok
// SIG undefined FUN_14581b97a(void)

void FUN_14581b97a(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b708a0();
  local_28 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_38);
    if ((local_38 != (longlong *)0x0) && (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134))) {
      lVar5 = param_1 + 0x138;
      if (*(longlong *)(param_1 + 0x140) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x140);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x148) - 1U & param_2) * 4);
      if (iVar3 != -1) {
        lVar5 = *(longlong *)(param_1 + 0x100);
        do {
          lVar6 = (longlong)iVar3;
          if (*(uint *)(lVar5 + lVar6 * 0x18) == param_2) {
            local_28 = *(undefined8 *)(lVar5 + 8 + lVar6 * 0x18);
            FUN_14581b41a((longlong *)(param_1 + 0x100));
            (**(code **)(*local_38 + 0x218))(local_38,&local_28);
            break;
          }
          iVar3 = *(int *)(lVar5 + lVar6 * 0x18 + 0x10);
        } while (iVar3 != -1);
      }
    }
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581bab0 FUN_14581bab0 body=40 status=ok
// SIG undefined FUN_14581bab0(void)

undefined8 FUN_14581bab0(undefined8 param_1,int param_2)

{
  FUN_14581bad8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581bad8 FUN_14581bad8 body=107 status=ok
// SIG undefined FUN_14581bad8(void)

void FUN_14581bad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b84d000;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14581bb44 FUN_14581bb44 body=169 status=ok
// SIG undefined FUN_14581bb44(void)

void FUN_14581bb44(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10b0))();
  FUN_14581bcce(param_1,param_2);
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 3) != 0)) {
    FUN_14581c554(param_1,param_2);
    FUN_14581c300(param_1,param_2);
    FUN_14581d40e(param_1,param_2);
    FUN_141166376(param_1,param_2);
    if (param_1[0x43b] != 0) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_14581becc();
    }
    FUN_14116603a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581bbee FUN_14581bbee body=56 status=ok
// SIG undefined FUN_14581bbee(void)

void FUN_14581bbee(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    FUN_14581bc4e();
  }
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FUN_14581bc26(*(longlong *)(param_1 + 0xc30),0);
    return;
  }
  return;
}



// FUNCTION 14581bc26 FUN_14581bc26 body=40 status=ok
// SIG undefined FUN_14581bc26(void)

void FUN_14581bc26(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  FUN_1411657fa(param_1,uVar1,param_2);
  return;
}



// FUNCTION 14581bc4e FUN_14581bc4e body=128 status=ok
// SIG undefined FUN_14581bc4e(void)

void FUN_14581bc4e(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_1402191ca(param_1 + 0x78,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x94);
  FUN_141165946(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
    FUN_14581d39c(param_1 + 0x88,0);
    return;
  }
  return;
}



// FUNCTION 14581bcce FUN_14581bcce body=112 status=ok
// SIG undefined FUN_14581bcce(void)

void FUN_14581bcce(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    FUN_141165bde(*(longlong *)(param_1 + 0xd60),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0xc30);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2,0);
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0xd68));
  plVar2 = (longlong *)FUN_144a06846(param_2,&DAT_14cb71598);
  if (*plVar2 != 0) {
    uVar1 = FUN_14000584e(*plVar2,uVar3 & 0xffffffff);
    uVar3 = (ulonglong)uVar1;
  }
  *(char *)(param_1 + 0xd68) = (char)uVar3;
  return;
}



// FUNCTION 14581bd3e FUN_14581bd3e body=396 status=ok
// SIG undefined FUN_14581bd3e(void)

void FUN_14581bd3e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  longlong local_60;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar2 = FUN_140a9a328();
  if (lVar2 != 0) {
    FUN_144928b90(local_50,8);
    lVar3 = FUN_1411cfb7f();
    local_98 = *(undefined8 *)(lVar3 + 0xb8);
    local_90 = *(undefined4 *)(lVar3 + 0xc0);
    FUN_144928d62(local_40,1);
    cVar1 = FUN_140114204(local_50);
    if (cVar1 != '\0') {
      FUN_140e1bbe8(local_88,0);
      lVar3 = FUN_140149a73(lVar2,0);
      if (lVar3 != 0) {
        FUN_140bc53f1(local_50,local_88,lVar3,0);
      }
    }
    FUN_144928b90(local_88,8);
    lVar3 = FUN_1411cfb7f();
    local_a8 = *(undefined8 *)(lVar3 + 0xc4);
    local_a0 = *(undefined4 *)(lVar3 + 0xcc);
    FUN_144928d62(local_78,1);
    cVar1 = FUN_140114204(local_88);
    if (cVar1 != '\0') {
      FUN_140e1bbe8(local_b8,0);
      lVar2 = FUN_140149a73(lVar2,0);
      if (lVar2 != 0) {
        FUN_140bc53f1(local_88,local_b8,lVar2,0);
      }
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581becc FUN_14581becc body=239 status=ok
// SIG undefined FUN_14581becc(void)

void FUN_14581becc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1 + 0x18;
  cVar3 = FUN_144729dda(lVar6);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(lVar6);
    lVar5 = FUN_144a7ba4c(uVar4);
    if (lVar5 != 0) {
      FUN_1457aa3ca(param_1);
      if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*(longlong *)*param_2 + 0x30))();
        if (cVar3 != '\0') {
          iVar1 = *(int *)(param_1 + 0x80);
          *(uint *)(param_1 + 0x80) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
            FUN_148d2429e((longlong *)(param_1 + 0x78),iVar1);
          }
          lVar2 = *(longlong *)(param_1 + 0x78);
          lVar7 = (longlong)iVar1 * 0x10;
          *(undefined8 *)(lVar2 + lVar7) = 0;
          *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
          FUN_148d24324(lVar2 + lVar7,param_2);
        }
      }
      uVar4 = FUN_14479d2ce(lVar6);
      uVar4 = FUN_1447210f0(uVar4);
      lVar6 = FUN_141165984(uVar4);
      if (lVar6 != 0) {
        FUN_14581bfbc(lVar6,*(undefined4 *)(lVar5 + 0xe0));
      }
    }
  }
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 14581bfbc FUN_14581bfbc body=298 status=ok
// SIG undefined FUN_14581bfbc(void)

void FUN_14581bfbc(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2,uVar4);
    if (lVar5 != 0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar1 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14b507390;
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
      local_30[2] = lVar6;
      *local_30 = &PTR_FUN_14b98a560;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      puVar1[4] = param_1;
      FUN_14581c0f0(lVar5,&local_30);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_148a63198(&DAT_14cbce5f8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14581c0f0 FUN_14581c0f0 body=312 status=ok
// SIG undefined FUN_14581c0f0(void)

void FUN_14581c0f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  longlong *local_40;
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x344);
  FUN_14581c229(*(undefined8 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x340));
  *(undefined4 *)(param_1 + 0x340) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x344) != 0)) {
    FUN_148a65384(param_1 + 0x338,0);
  }
  iVar1 = *(int *)(param_1 + 0x354);
  FUN_14581c24f(*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x350));
  *(undefined4 *)(param_1 + 0x350) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x354) != 0)) {
    FUN_148a653f2(param_1 + 0x348,0);
  }
  local_30 = FUN_143ef4db6;
  local_38 = param_1;
  local_28 = &local_38;
  bifrost::rewards::listOffers(*(undefined8 *)(param_1 + 0x2b8));
  local_48 = FUN_143ef4f34;
  local_40 = &local_38;
  local_38 = param_1;
  bifrost::rewards::listEntitlements(*(undefined8 *)(param_1 + 0x2b8));
  if (((int)param_2[1] != 0) && (plVar2 = (longlong *)*param_2, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  }
  FUN_1449db362(param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581c229 FUN_14581c229 body=38 status=ok
// SIG undefined FUN_14581c229(void)

void FUN_14581c229(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14581c278(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 14581c24f FUN_14581c24f body=40 status=ok
// SIG undefined FUN_14581c24f(void)

void FUN_14581c24f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14581c2b6(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 14581c278 FUN_14581c278 body=61 status=ok
// SIG undefined FUN_14581c278(void)

void FUN_14581c278(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14581c2b6 FUN_14581c2b6 body=74 status=ok
// SIG undefined FUN_14581c2b6(void)

void FUN_14581c2b6(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
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



// FUNCTION 14581c300 FUN_14581c300 body=477 status=ok
// SIG undefined FUN_14581c300(void)

void FUN_14581c300(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x84) & 2) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x6c8))();
    if (cVar1 != '\0') {
      cVar1 = FUN_14016169c(param_1,local_48);
      if ((((cVar1 == '\0') || ((int)local_48[0] == 0)) && ((byte *)*param_2 != (byte *)0x0)) &&
         ((*(byte *)*param_2 & 0x6b) == 3)) {
        local_68 = 0x6000;
        local_50 = DAT_14cbd0810;
        local_58 = DAT_14cbd0808;
        FUN_1448075d0(local_48);
        plVar2 = (longlong *)FUN_144a06846(param_2,local_48);
        if (*plVar2 == 0) {
          puVar3 = &DAT_14c9a12e0;
        }
        else {
          puVar3 = (undefined4 *)FUN_140625092(*plVar2,&DAT_14c9a12e0);
        }
        FUN_1447325ac(puVar3,&local_78,1);
        if (local_78 == 0) {
          local_70 = 0;
        }
        else {
          local_70 = local_78;
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        local_48[0] = local_78;
        local_60 = FUN_14050aea0();
        if (local_60 != 0) {
          cVar1 = FUN_141165b38(param_1,local_60);
          if (cVar1 != '\0') {
            FUN_141166838(param_1,&local_70,1);
            goto LAB_14581c425;
          }
        }
        FUN_14581c4f8(param_1);
        local_50 = DAT_14cbd0828;
        local_58 = DAT_14cbd0820;
        FUN_1448075d0(local_48);
        plVar2 = (longlong *)FUN_144a06846(param_2,local_48);
        puVar3 = &DAT_14c9a12e0;
        if (*plVar2 != 0) {
          puVar3 = (undefined4 *)FUN_140625092(*plVar2,&DAT_14c9a12e0);
        }
        FUN_1447715ec(param_1 + 0x481,puVar3);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_14581c425:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581c4de FUN_14581c4de body=26 status=ok
// SIG undefined FUN_14581c4de(void)

undefined1 FUN_14581c4de(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1407c8d60();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x31);
  }
  return uVar1;
}



// FUNCTION 14581c4f8 FUN_14581c4f8 body=92 status=ok
// SIG undefined FUN_14581c4f8(void)

void FUN_14581c4f8(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x23d8) != 0) && (*(int *)(param_1 + 0x23e0) - 1U < 0xfffffffe)) {
    *(undefined8 *)(param_1 + 0x23e8) = 0;
    *(undefined8 *)(param_1 + 0x23d8) = 0;
    FUN_1447715ec(param_1 + 0x2408,&DAT_14c9485f0);
    FUN_144203c8e(&DAT_14cbd0b18,param_1);
    return;
  }
  return;
}



// FUNCTION 14581c554 FUN_14581c554 body=578 status=ok
// SIG undefined FUN_14581c554(void)

void FUN_14581c554(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_c8 [47];
  char local_99;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 0x6b) == 3)) {
    lVar6 = FUN_14011c349();
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    local_78 = DAT_14cbcbd80;
    local_80 = DAT_14cbcbd78;
    FUN_1448075d0(&local_70);
    uVar7 = FUN_144a06846(param_2,&local_70);
    FUN_1446dcc2e(&local_98,uVar7);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_99 = FUN_141165bc4(&local_98);
    lVar12 = 0x2752;
    lVar10 = 0;
    uVar7 = FUN_1412868e8();
    uVar11 = 0;
    do {
      FUN_1401cfb1c(uVar7,&local_70,uVar11 & 0xffffffff);
      puVar9 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar9 = local_70;
      }
      FUN_1446f470e(&local_80,puVar9,1);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14119f284((longlong)param_1 + lVar10 + 0x2604,*(undefined4 *)(lVar6 + 0xf0 + uVar11 * 4));
      uVar8 = FUN_144a7cdc2(&local_98,&local_80);
      cVar4 = FUN_141165bc4(uVar8);
      if (cVar4 == '\0') {
        uVar5 = 0;
        if (local_99 == '\0') {
          uVar5 = (undefined4)param_1[lVar12 + -0x2291];
        }
      }
      else {
        uVar5 = FUN_140e1edd4(uVar8,0);
      }
      *(undefined4 *)(param_1 + lVar12 + -0x2292) = uVar5;
      cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
      if (cVar4 == '\0') {
        *(short *)((longlong)param_1 + lVar12 + -2) = (short)param_1[lVar12 + -0x2292];
        *(short *)((longlong)param_1 + lVar12) = (short)param_1[lVar12 + -0x2291];
      }
      FUN_1401861f4((longlong)param_1 + lVar10 + 0x25d0,(int)param_1[lVar12 + -0x2292]);
      FUN_1401861f4((longlong)param_1 + lVar10 + 0x25e8,(int)param_1[lVar12 + -0x2291]);
      plVar3 = plStack_90;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x40;
      lVar12 = lVar12 + 8;
    } while (lVar10 != 0x180);
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_90)(plStack_90);
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
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581c798 FUN_14581c798 body=848 status=ok
// SIG undefined FUN_14581c798(void)

void FUN_14581c798(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a0 = local_a0 & 0xffffff00;
  uStack_98 = 0;
  local_90 = &DAT_3f800000ffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_14581cb32(&local_a0,param_3);
  FUN_14105c148(local_d8,param_1);
  local_100 = uStack_60;
  local_f8 = (undefined4)local_90;
  uStack_f4 = local_90._4_4_;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  local_c8 = uStack_60;
  local_c0 = (undefined4)local_90;
  local_bc = local_90._4_4_;
  FUN_1411c9ab8(&local_b0,&local_e8);
  FUN_140de863f(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_141165f58(&local_a0,local_d8);
  if (param_2 != (longlong *)0x0) {
    if ((longlong)(int)(uint)local_68 != 0) {
      lVar7 = lStack_70 + 8;
      lVar8 = (longlong)(int)(uint)local_68 * 0x18;
      do {
        cVar6 = (**(code **)(*param_2 + 0x18))(param_2,lVar7);
        if (cVar6 != '\0') {
          local_108 = 0;
          FUN_1401412e0(param_3,&local_100,0,0);
          iVar4 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
            FUN_1488c96a4((longlong *)(param_1 + 0x98),iVar4);
          }
          lVar8 = *(longlong *)(param_1 + 0x98);
          *(undefined8 *)(lVar8 + (longlong)iVar4 * 0x10) = local_100;
          lVar7 = CONCAT44(uStack_f4,local_f8);
          *(longlong *)(lVar8 + 8 + (longlong)iVar4 * 0x10) = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
            plVar5 = (longlong *)CONCAT44(uStack_f4,local_f8);
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
          goto LAB_14581c971;
        }
        lVar7 = lVar7 + 0x18;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
    }
  }
  if ((char)local_a0 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar4 + 1U) {
      FUN_14655c5d6((longlong *)(param_1 + 0x88),iVar4);
    }
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x50);
    *(undefined1 **)(puVar3 + 4) = local_90;
    *puVar3 = local_a0;
    puVar3[1] = uStack_9c;
    puVar3[2] = (uint)uStack_98;
    puVar3[3] = uStack_98._4_4_;
    FUN_14581caea(puVar3 + 6,&local_88);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    *(longlong *)(puVar3 + 0xc) = lStack_70;
    lStack_70 = 0;
    puVar3[0xe] = (uint)local_68;
    puVar3[0xf] = local_68._4_4_;
    local_68 = 0;
    *(undefined1 *)(puVar3 + 0x12) = local_58;
    *(undefined8 *)(puVar3 + 0x10) = uStack_60;
  }
LAB_14581c971:
  FUN_140de863f(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_140de863f(lStack_70,local_68 & 0xffffffff);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581caea FUN_14581caea body=71 status=ok
// SIG undefined FUN_14581caea(void)

undefined8 * FUN_14581caea(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14581cb32 FUN_14581cb32 body=1048 status=ok
// SIG undefined FUN_14581cb32(void)

void FUN_14581cb32(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((byte *)*param_2 == (byte *)0x0) || ((~*(byte *)*param_2 & 3) != 0)) goto LAB_14581cdfb;
  uVar5 = FUN_144a06846(param_2,&DAT_14cb8a130);
  lVar6 = FUN_140d7984c(uVar5,0);
  if (lVar6 < 1) {
    FUN_140212f8e(local_78);
  }
  else {
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    FUN_14021300e(local_78,0x7b2,1,1);
    local_78[0] = lVar6 * 10000000 + local_78[0];
  }
  *(longlong *)(param_1 + 8) = local_78[0];
  uVar5 = FUN_144a06846(param_2,&DAT_14cb8a158);
  uVar4 = FUN_140e1edd4(uVar5,0xffffffff);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  uVar5 = FUN_144a06846(param_2,&DAT_14cb8a180);
  uVar4 = FUN_140b963dc(uVar5,0x3f800000);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  plVar7 = (longlong *)FUN_144a06846(param_2,&DAT_14cb8a1a8);
  local_98 = 0;
  if (*plVar7 == 0) {
    local_80 = 0;
  }
  else {
    FUN_1400bc2ec(*plVar7,&local_80,&local_98);
  }
  local_88 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_90 = &local_80;
  uVar5 = 0;
  FUN_14581cf4c(local_78,&local_90,0);
  if (DAT_14cb8a358 != 0) {
    uVar5 = FUN_144837462(DAT_14cb8a358,local_78);
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar8 = FUN_140c52150();
    uVar8 = FUN_14477b664(uVar8);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
  }
  lVar6 = FUN_140c52150();
  uVar8 = FUN_140c52150();
  FUN_1402d1bfa(&local_90,uVar8,uVar5);
  if (*(undefined8 **)(param_1 + 0x18) != local_90) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 **)(param_1 + 0x18) = local_90;
  lVar9 = FUN_140c52150();
  if (lVar6 == 0) {
LAB_14581cd23:
    lVar9 = lVar6;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_14581cd23;
  if (*(longlong *)(param_1 + 0x20) != lVar9) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar8 = FUN_14477b664(lVar9);
  lVar6 = FUN_14477b664(uVar8);
  *(longlong *)(param_1 + 0x20) = lVar6;
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)FUN_144a06846(param_2,&DAT_14cb8a1f8);
  local_90 = (undefined8 *)0x0;
  if (*plVar7 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_1400bc2ec(*plVar7,local_78,&local_90);
    lVar6 = local_78[0];
  }
  *(longlong *)(param_1 + 0x40) = lVar6;
  uVar5 = FUN_144a06846(param_2,&DAT_14cb8a220);
  uVar2 = FUN_1410c4486(uVar5,0);
  *(undefined1 *)(param_1 + 0x48) = uVar2;
  plVar7 = (longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x3c);
  FUN_140de863f(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_14581d07e(plVar7,0);
  }
  puVar10 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb8a1d0);
  cVar3 = FUN_144a79b3c(puVar10);
  if (cVar3 != '\0') {
    pbVar11 = (byte *)*puVar10;
    puVar12 = &DAT_14c9a1270;
    if ((pbVar11 != (byte *)0x0) && ((*pbVar11 & 2) != 0)) {
      puVar12 = *(undefined8 **)(pbVar11 + 8);
    }
    iVar1 = *(int *)(puVar12 + 2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)(param_1 + 0x3c) < iVar1) {
      FUN_14581d07e(plVar7);
      pbVar11 = (byte *)*puVar10;
    }
    plVar13 = &DAT_14c9a1270;
    if ((pbVar11 != (byte *)0x0) && ((*pbVar11 & 2) != 0)) {
      plVar13 = *(longlong **)(pbVar11 + 8);
    }
    if ((longlong)(int)plVar13[2] != 0) {
      lVar6 = *plVar13;
      lVar9 = (longlong)(int)plVar13[2] << 4;
      do {
        iVar1 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
          FUN_145c70f7e(plVar7,iVar1);
        }
        puVar10 = (undefined8 *)(*plVar7 + (longlong)iVar1 * 0x18);
        *puVar10 = 0xffffffff;
        puVar10[1] = 0;
        puVar10[2] = 0;
        FUN_14581d0f0(puVar10,lVar6);
        lVar6 = lVar6 + 0x10;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
  }
LAB_14581cdfb:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581cf4c FUN_14581cf4c body=305 status=ok
// SIG undefined FUN_14581cf4c(void)

void FUN_14581cf4c(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  code *local_118;
  undefined1 **local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  local_110 = &local_120;
  local_118 = FUN_142b245f8;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_120 = local_108;
  uVar4 = FUN_140094010();
  if (puVar1 != puVar2) {
    do {
      puVar8 = puVar1 + 1;
      cVar3 = FUN_14493bb52(uVar4,*puVar1,&local_118,0);
      if (cVar3 == '\0') break;
      puVar1 = puVar8;
    } while (puVar8 != puVar2);
  }
  FUN_1447a993c(param_1,local_40 & 0xffffffff);
  if (0 < (int)local_40) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar7 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar7 = local_108;
      }
      FUN_140093fc6(param_1,uVar6 & 0xffffffff,puVar7 + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581d07e FUN_14581d07e body=113 status=ok
// SIG undefined FUN_14581d07e(void)

void FUN_14581d07e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14581d0f0 FUN_14581d0f0 body=683 status=ok
// SIG undefined FUN_14581d0f0(void)

void FUN_14581d0f0(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char *_Str;
  longlong lVar4;
  void *_Src;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  size_t sVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_198 [32];
  longlong local_178;
  void *local_170;
  int local_168;
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    uVar8 = FUN_144a06846(param_2,&DAT_14cb8a0e0);
    uVar6 = FUN_140e1edd4(uVar8,0xffffffff);
    *param_1 = uVar6;
    plVar1 = (longlong *)(param_1 + 2);
    iVar2 = param_1[5];
    FUN_1447a1747(*(undefined8 *)(param_1 + 2),param_1[4]);
    param_1[4] = 0;
    if ((iVar2 < 0) && (param_1[5] != 0)) {
      FUN_1408be2c4(plVar1,0);
    }
    puVar9 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb8a108);
    cVar5 = FUN_144a79b3c(puVar9);
    if (cVar5 != '\0') {
      pbVar10 = (byte *)*puVar9;
      puVar12 = &DAT_14c9a1270;
      if ((pbVar10 != (byte *)0x0) && ((*pbVar10 & 2) != 0)) {
        puVar12 = *(undefined8 **)(pbVar10 + 8);
      }
      iVar2 = *(int *)(puVar12 + 2);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if ((int)param_1[5] < iVar2) {
        FUN_1408be2c4(plVar1);
        pbVar10 = (byte *)*puVar9;
      }
      plVar13 = &DAT_14c9a1270;
      if ((pbVar10 != (byte *)0x0) && ((*pbVar10 & 2) != 0)) {
        plVar13 = *(longlong **)(pbVar10 + 8);
      }
      lVar4 = plVar13[2];
      if ((longlong)(int)lVar4 != 0) {
        local_178 = *plVar13;
        lVar14 = 0;
        do {
          pbVar10 = *(byte **)(local_178 + lVar14);
          if ((pbVar10 == (byte *)0x0) || ((*pbVar10 & 3) != 1)) {
LAB_14581d216:
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
          }
          else {
            _Str = *(char **)(pbVar10 + 8);
            local_60 = 0;
            if (_Str == (char *)0x0) goto LAB_14581d216;
            sVar11 = strlen(_Str);
            FUN_1446e6fe8(local_160,_Str,sVar11 & 0xffffffff,1);
          }
          FUN_140056680(&local_170,local_58);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (1 < local_168) {
            iVar2 = param_1[4];
            uVar7 = iVar2 + 1;
            param_1[4] = uVar7;
            if ((uint)param_1[5] < uVar7) {
              FUN_1447a1bd6(plVar1);
            }
            _Src = local_170;
            lVar3 = *plVar1;
            lVar16 = (longlong)iVar2 * 0x10;
            puVar9 = (undefined8 *)(lVar3 + lVar16);
            *(undefined8 *)(lVar3 + lVar16) = 0;
            lVar15 = (longlong)local_168;
            *(int *)(lVar3 + 8 + lVar16) = local_168;
            if (lVar15 == 0) {
              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar9,local_168,0);
              memcpy((void *)*puVar9,_Src,lVar15 * 2);
            }
          }
          if (local_170 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + 0x10;
        } while ((longlong)(int)lVar4 * 0x10 != lVar14);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581d39c FUN_14581d39c body=113 status=ok
// SIG undefined FUN_14581d39c(void)

void FUN_14581d39c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14581d40e FUN_14581d40e body=752 status=ok
// SIG undefined FUN_14581d40e(void)

void FUN_14581d40e(longlong param_1,undefined8 *param_2)

{
  void **ppvVar1;
  byte *pbVar2;
  void *_Src;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 0x6b) == 3)) {
    local_a0 = DAT_14cbe6fb8;
    local_a8 = DAT_14cbe6fb0;
    FUN_1448075d0(local_58);
    plVar5 = (longlong *)FUN_144a06846(param_2,local_58);
    if (*plVar5 == 0) {
      puVar6 = &DAT_14c9a12e0;
    }
    else {
      puVar6 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
    }
    FUN_1447325ac(puVar6,&local_60,1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_78 = local_60;
    local_70 = 0;
    uStack_68 = 0;
    FUN_14570615e(param_1);
    local_a0 = DAT_14cbe6fd0;
    local_a8 = DAT_14cbe6fc8;
    FUN_1448075d0(local_58);
    plVar5 = (longlong *)FUN_144a06846(param_2,local_58);
    if (*plVar5 == 0) {
      puVar6 = &DAT_14c9a12e0;
    }
    else {
      puVar6 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
    }
    FUN_1447325ac(puVar6,&local_80,1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_98 = local_80;
    local_90 = 0;
    uStack_88 = 0;
    FUN_145979580(param_1);
    local_a0 = DAT_14cbe6fe8;
    local_a8 = DAT_14cbe6fe0;
    FUN_1448075d0(local_58,&local_a8);
    puVar7 = (undefined8 *)FUN_144a06846(param_2,local_58);
    pbVar2 = (byte *)*puVar7;
    if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(pbVar2 + 8);
    }
    FUN_1400b22c2(&local_a8,uVar8);
    FUN_1458c43dc(param_1 + 0x3910);
    iVar3 = local_a0;
    _Src = local_a8;
    ppvVar1 = (void **)(param_1 + 0x3980);
    if (ppvVar1 != &local_a8) {
      lVar9 = (longlong)local_a0;
      *(int *)(param_1 + 0x3988) = local_a0;
      if (local_a0 == 0 && *(int *)(param_1 + 0x398c) == 0) {
        *(undefined4 *)(param_1 + 0x398c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_a0);
        if (iVar3 != 0) {
          memcpy(*ppvVar1,_Src,lVar9 * 2);
        }
      }
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_a0 = DAT_14cbe7000;
    local_a8 = DAT_14cbe6ff8;
    FUN_1448075d0(local_58);
    uVar8 = FUN_144a06846(param_2,local_58);
    uVar4 = FUN_140e1edd4(uVar8,0);
    *(undefined4 *)(param_1 + 0x3990) = uVar4;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581d70e FUN_14581d70e body=40 status=ok
// SIG undefined FUN_14581d70e(void)

undefined8 FUN_14581d70e(undefined8 param_1,int param_2)

{
  FUN_14581d736();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581d736 FUN_14581d736 body=75 status=ok
// SIG undefined FUN_14581d736(void)

void FUN_14581d736(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b09fe70;
  FUN_144a2da94(param_1 + 0x11);
  FUN_144a2da94(param_1 + 10);
  FUN_144a2da94(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14581d782 FUN_14581d782 body=65 status=ok
// SIG undefined FUN_14581d782(void)

undefined8 * FUN_14581d782(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b215780;
  FUN_141166e00(param_1 + 0x1f);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581d7c4 FUN_14581d7c4 body=53 status=ok
// SIG undefined FUN_14581d7c4(void)

void FUN_14581d7c4(longlong param_1)

{
  FUN_14581d81c();
  if ((*(byte *)(param_1 + 0x9f) & 0x20) != 0) {
    FUN_14581d7fa(param_1,(*(byte *)(param_1 + 0x1f9) & 8) == 0);
  }
  FUN_1412b60ee(param_1);
  return;
}



// FUNCTION 14581d7fa FUN_14581d7fa body=34 status=ok
// SIG undefined FUN_14581d7fa(void)

void FUN_14581d7fa(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x1f8) = *(byte *)(param_1 + 0x1f8) & 0xdf | param_2 << 5;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0xb);
  return;
}



// FUNCTION 14581d81c FUN_14581d81c body=71 status=ok
// SIG undefined FUN_14581d81c(void)

void FUN_14581d81c(longlong *param_1)

{
  FUN_14058337a();
  if (((*(byte *)((longlong)param_1 + 0x1f9) & 8) == 0) &&
     (((char)param_1[0xe7] != '\0' || (*(char *)((longlong)param_1 + 0x669) == '\x01')))) {
                    /* WARNING: Could not recover jumptable at 0x00014581d855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b0))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14581d868 FUN_14581d868 body=40 status=ok
// SIG undefined FUN_14581d868(void)

undefined8 FUN_14581d868(undefined8 param_1,int param_2)

{
  FUN_14581d890();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581d890 FUN_14581d890 body=112 status=ok
// SIG undefined FUN_14581d890(void)

void FUN_14581d890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5490e0;
  FUN_140cc83f7(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_141167a50(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14581d900 FUN_14581d900 body=41 status=ok
// SIG undefined FUN_14581d900(void)

void FUN_14581d900(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14581d92a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2d9d80;
  *(undefined2 *)(puVar1 + 5) = 0x200;
  return;
}



// FUNCTION 14581d92a FUN_14581d92a body=32 status=ok
// SIG undefined FUN_14581d92a(void)

undefined8 * FUN_14581d92a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ac60ce0;
  return param_1;
}



// FUNCTION 14581d958 FUN_14581d958 body=40 status=ok
// SIG undefined FUN_14581d958(void)

undefined8 FUN_14581d958(undefined8 param_1,int param_2)

{
  FUN_141167ffc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581d980 FUN_14581d980 body=92 status=ok
// SIG undefined FUN_14581d980(void)

void FUN_14581d980(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b41ddd0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = *param_1;
  lVar1 = param_1[1];
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return;
}



// FUNCTION 14581d9dc FUN_14581d9dc body=126 status=ok
// SIG undefined FUN_14581d9dc(void)

void FUN_14581d9dc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      iVar6 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_140ec3a62(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14581da5a FUN_14581da5a body=73 status=ok
// SIG undefined FUN_14581da5a(void)

void FUN_14581da5a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411695b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4b4770;
  puVar1[0x1f] = &PTR_FUN_14a4b4ae0;
  puVar1[0xfc] = 0;
  puVar1[0xfd] = 0;
  FUN_144a5dc74(puVar1 + 0xfe);
  return;
}



// FUNCTION 14581daa4 FUN_14581daa4 body=97 status=ok
// SIG undefined FUN_14581daa4(void)

void FUN_14581daa4(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14581db06(param_1,&local_21);
  cVar1 = FUN_1411696b0(&local_21,param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xda) = 1;
    *(char *)(param_1 + 0xd9) = (char)param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581db06 FUN_14581db06 body=58 status=ok
// SIG undefined FUN_14581db06(void)

undefined1 * FUN_14581db06(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1402984e6();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 == 0) {
    FUN_14581db40(param_2);
  }
  else {
    *param_2 = *(undefined1 *)(lVar2 + 0x68);
  }
  return param_2;
}



// FUNCTION 14581db40 FUN_14581db40 body=7 status=ok
// SIG undefined FUN_14581db40(void)

undefined1 * FUN_14581db40(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14581db58 FUN_14581db58 body=41 status=ok
// SIG undefined FUN_14581db58(void)

void FUN_14581db58(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 14581db82 FUN_14581db82 body=35 status=ok
// SIG undefined FUN_14581db82(void)

void FUN_14581db82(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xdf | param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x00014581dba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x70))();
  return;
}



// FUNCTION 14581dbb4 FUN_14581dbb4 body=274 status=ok
// SIG undefined FUN_14581dbb4(void)

undefined4 * FUN_14581dbb4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_14581de90(param_1,local_48);
  FUN_14581dcc8(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_14581ddde(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      FUN_14581e144(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581dcc8 FUN_14581dcc8 body=151 status=ok
// SIG undefined FUN_14581dcc8(void)

undefined8 * FUN_14581dcc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  *param_2 = *(undefined8 *)*param_1;
  FUN_14581dd60(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14598a7f6(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581dd60 FUN_14581dd60 body=125 status=ok
// SIG undefined FUN_14581dd60(void)

undefined8 * FUN_14581dd60(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14581df8c();
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



// FUNCTION 14581ddde FUN_14581ddde body=177 status=ok
// SIG undefined FUN_14581ddde(void)

undefined8 FUN_14581ddde(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
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
          FUN_14598a7f6((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_148e2c042(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14581de90 FUN_14581de90 body=251 status=ok
// SIG undefined FUN_14581de90(void)

int * FUN_14581de90(longlong *param_1,int *param_2)

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



// FUNCTION 14581df8c FUN_14581df8c body=439 status=ok
// SIG undefined FUN_14581df8c(void)

longlong * FUN_14581df8c(longlong *param_1,longlong *param_2)

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
          FUN_14116e718(*local_78 + (longlong)iVar6 * 0x160 + 8);
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



// FUNCTION 14581e144 FUN_14581e144 body=477 status=ok
// SIG undefined FUN_14581e144(void)

void FUN_14581e144(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 14581e322 FUN_14581e322 body=149 status=ok
// SIG undefined FUN_14581e322(void)

void FUN_14581e322(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_1411715c6(*param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 14581e414 FUN_14581e414 body=40 status=ok
// SIG undefined FUN_14581e414(void)

undefined8 FUN_14581e414(undefined8 param_1,int param_2)

{
  thunk_FUN_140e2eae8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581e43c thunk_FUN_140e2eae8 body=5 status=ok
// SIG undefined thunk_FUN_140e2eae8(void)

void thunk_FUN_140e2eae8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b193cc0;
  param_1[0xd] = &PTR_FUN_14b194040;
  param_1[0x16] = &PTR_FUN_14b194080;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140e2eb88(param_1 + 0x29);
  plVar3 = (longlong *)param_1[0x27];
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
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140843792(param_1);
  return;
}



// FUNCTION 14581e442 FUN_14581e442 body=126 status=ok
// SIG undefined FUN_14581e442(void)

undefined8 * FUN_14581e442(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
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
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  lVar2 = 0;
  do {
    FUN_14581e4c0((longlong)puVar1 + lVar2,1,1);
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x80);
  *param_1 = puVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x100;
  return param_1;
}



// FUNCTION 14581e4c0 FUN_14581e4c0 body=134 status=ok
// SIG undefined FUN_14581e4c0(void)

void FUN_14581e4c0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_14581e548(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146f2afee(param_1);
    return;
  }
  return;
}



// FUNCTION 14581e548 FUN_14581e548 body=132 status=ok
// SIG undefined FUN_14581e548(void)

void FUN_14581e548(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14581e5cc FUN_14581e5cc body=12 status=ok
// SIG undefined FUN_14581e5cc(void)

void FUN_14581e5cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014581e5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14581e5d8 FUN_14581e5d8 body=31 status=ok
// SIG undefined FUN_14581e5d8(void)

undefined8 FUN_14581e5d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581e5f8 FUN_14581e5f8 body=502 status=ok
// SIG undefined FUN_14581e5f8(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014581e7e4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14581e5f8(longlong param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [16];
  undefined8 local_190;
  int local_188;
  undefined4 local_184;
  undefined1 local_180 [256];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_80 = 0;
  if (param_2 == (char *)0x0) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    sVar3 = strlen(param_2);
    FUN_1446e6fe8(local_180,param_2,sVar3 & 0xffffffff,1);
  }
  FUN_140056680(local_1a0,local_78);
  local_190 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_188 = iVar1;
  if (iVar1 == 0) {
    local_184 = 0;
  }
  else {
    FUN_14581e860(&local_190,iVar1);
    FUN_14581e7ef(local_190,uVar2,iVar1);
  }
  local_68 = (undefined1 *)0x0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar4 = &PTR_FUN_14b9c1100;
  FUN_14581e8b8(puVar4 + 1,local_1a0);
  if (puVar4 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_145c27c10;
    local_68 = &LAB_145c27c10;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar5 = 0;
  puVar5[2] = puVar6;
  puVar5[4] = puVar4;
  local_58 = 0;
  *(undefined4 *)(puVar5 + 8) = local_38;
  *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_34;
  *(undefined4 *)(puVar5 + 9) = uStack_30;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_2c;
  *(undefined4 *)(puVar5 + 6) = local_48;
  *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_44;
  *(undefined4 *)(puVar5 + 7) = uStack_40;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_3c;
  if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (undefined1 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    UNLOCK();
    LOCK();
    *puVar4 = puVar5;
    UNLOCK();
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
  }
  FUN_14581e826(local_1a0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581e7ef FUN_14581e7ef body=55 status=ok
// SIG undefined FUN_14581e7ef(void)

void FUN_14581e7ef(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1411724f0(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14581e826 FUN_14581e826 body=58 status=ok
// SIG undefined FUN_14581e826(void)

void FUN_14581e826(longlong *param_1)

{
  FUN_1411721ae(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14581e860 FUN_14581e860 body=88 status=ok
// SIG undefined FUN_14581e860(void)

void FUN_14581e860(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 7,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 7)) {
    uVar3 = uVar1 >> 7 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x80,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14581e8b8 FUN_14581e8b8 body=110 status=ok
// SIG undefined FUN_14581e8b8(void)

undefined8 * FUN_14581e8b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14581e860(param_1 + 2,iVar1);
    FUN_14581e7ef(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14581e936 FUN_14581e936 body=60 status=ok
// SIG undefined FUN_14581e936(void)

undefined8 * FUN_14581e936(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14aff3820;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14581e972 FUN_14581e972 body=72 status=ok
// SIG undefined FUN_14581e972(void)

void FUN_14581e972(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xa60))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014581e9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa68))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerStopIdleTrick_Validate");
  return;
}



// FUNCTION 14581e9c4 FUN_14581e9c4 body=87 status=ok
// SIG undefined FUN_14581e9c4(void)

void FUN_14581e9c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x67e8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xa0) == '\0')) {
    FUN_14103b6f6(lVar1,1);
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined4 *)(param_1 + 0x67e0) = 0;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x3a);
    return;
  }
  return;
}



// FUNCTION 14581ea1c FUN_14581ea1c body=132 status=ok
// SIG undefined FUN_14581ea1c(void)

void FUN_14581ea1c(longlong param_1,int param_2)

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



// FUNCTION 14581eaa2 FUN_14581eaa2 body=148 status=ok
// SIG undefined FUN_14581eaa2(void)

bool FUN_14581eaa2(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581eb38 FUN_14581eb38 body=120 status=ok
// SIG undefined FUN_14581eb38(void)

void FUN_14581eb38(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_141546c72();
  FUN_141176278(uVar1,&local_28);
  FUN_14581ebb2(param_1 + 0x68,&local_28);
  FUN_141175adb(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_141175e14(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581ebb2 FUN_14581ebb2 body=78 status=ok
// SIG undefined FUN_14581ebb2(void)

longlong * FUN_14581ebb2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_141175adb(*param_1,(int)param_1[1]);
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



// FUNCTION 14581ec00 FUN_14581ec00 body=146 status=ok
// SIG undefined FUN_14581ec00(void)

void FUN_14581ec00(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x168,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x168)) {
      uVar5 = uVar4 / 0x168 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x168,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14581ec94 FUN_14581ec94 body=91 status=ok
// SIG undefined FUN_14581ec94(void)

void FUN_14581ec94(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((*(char *)(lVar1 + 0x178) == '\x03') && (*(longlong **)(lVar1 + 0x1b0) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1b0) + 0x700))();
    if (cVar2 == '\0') {
      uVar3 = FUN_141177592(lVar1,param_1);
      FUN_14581ecf0(lVar1,uVar3,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14581ecf0 FUN_14581ecf0 body=98 status=ok
// SIG undefined FUN_14581ecf0(void)

void FUN_14581ecf0(longlong *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_24[0] = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb93818);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581ed54 FUN_14581ed54 body=51 status=ok
// SIG undefined FUN_14581ed54(void)

void FUN_14581ed54(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(lVar1 + 0x178) != '\x03') {
    uVar2 = FUN_141177592(lVar1,param_1);
    FUN_14581ed88(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 14581ed88 FUN_14581ed88 body=91 status=ok
// SIG undefined FUN_14581ed88(void)

void FUN_14581ed88(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb93908);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581ede4 FUN_14581ede4 body=216 status=ok
// SIG undefined FUN_14581ede4(void)

undefined8 * FUN_14581ede4(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14581ef26 FUN_14581ef26 body=79 status=ok
// SIG undefined FUN_14581ef26(void)

undefined8 * FUN_14581ef26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4bb120;
  param_1[0x1f] = &PTR_LAB_14a4bb490;
  FUN_14581ef76(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581ef76 FUN_14581ef76 body=75 status=ok
// SIG undefined FUN_14581ef76(void)

void FUN_14581ef76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46eaf0;
  FUN_141177934(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 14581efd0 FUN_14581efd0 body=69 status=ok
// SIG undefined FUN_14581efd0(void)

undefined8 * FUN_14581efd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b676a60;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4522c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581f024 FUN_14581f024 body=40 status=ok
// SIG undefined FUN_14581f024(void)

undefined8 FUN_14581f024(undefined8 param_1,int param_2)

{
  FUN_140f5e6f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581f04c FUN_14581f04c body=58 status=ok
// SIG undefined FUN_14581f04c(void)

void FUN_14581f04c(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  FUN_14581f086(param_2);
  *param_2 = &PTR_FUN_14b18c4a0;
  return;
}



// FUNCTION 14581f086 FUN_14581f086 body=102 status=ok
// SIG undefined FUN_14581f086(void)

undefined8 * FUN_14581f086(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xa002;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b18b210;
  param_1[4] = &PTR_FUN_14b18a090;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1411786d8(param_1 + 7,&DAT_14cb80640);
  FUN_1411786d8(param_1 + 7,&DAT_14cb80648);
  return param_1;
}



// FUNCTION 14581f0ec FUN_14581f0ec body=147 status=ok
// SIG undefined FUN_14581f0ec(void)

void FUN_14581f0ec(longlong param_1,int param_2)

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



// FUNCTION 14581f180 FUN_14581f180 body=40 status=ok
// SIG undefined FUN_14581f180(void)

undefined8 FUN_14581f180(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581f1a8 thunk_FUN_1402ef4ac body=5 status=ok
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



// FUNCTION 14581f1ae thunk_FUN_1402ef4ac body=5 status=ok
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



// FUNCTION 14581f1b4 FUN_14581f1b4 body=199 status=ok
// SIG undefined FUN_14581f1b4(void)

void FUN_14581f1b4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x400;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar4) + 0x30) = 0;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar2 = *(longlong *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x400;
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar4);
        FUN_1407f1458(lVar3);
        *(undefined4 *)(lVar3 + 0x30) = 0;
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  FUN_14117915e(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_1447ab16c(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14581f286 FUN_14581f286 body=38 status=ok
// SIG undefined FUN_14581f286(void)

undefined8 FUN_14581f286(undefined8 param_1,int param_2)

{
  FUN_14581f2ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581f2ac FUN_14581f2ac body=52 status=ok
// SIG undefined FUN_14581f2ac(void)

void FUN_14581f2ac(undefined8 *param_1)

{
  FUN_141474ffa(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 14581f2e6 FUN_14581f2e6 body=85 status=ok
// SIG undefined FUN_14581f2e6(void)

void FUN_14581f2e6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123d8e(param_1 + 0x9b0,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x9e8,param_2,uVar1);
  return;
}



// FUNCTION 14581f33c FUN_14581f33c body=79 status=ok
// SIG undefined FUN_14581f33c(void)

void FUN_14581f33c(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_14117a1a7(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_14720287e(param_1);
  }
  FUN_14112dd96(param_1 + 6);
  FUN_144a686e6(param_1 + 2,0);
  return;
}



// FUNCTION 14581f414 FUN_14581f414 body=180 status=ok
// SIG undefined FUN_14581f414(void)

longlong FUN_14581f414(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_30 = 0x290;
  uVar1 = (*DAT_14c787670)(0,&local_30,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(uVar1,"FHavokTaskQueue");
  }
  FUN_1446f470e(&local_30,L"HavokNav/Generation",1);
  FUN_14117a3be(uVar1,&local_30);
  FUN_14581f4ca(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581f4ca FUN_14581f4ca body=97 status=ok
// SIG undefined FUN_14581f4ca(void)

void FUN_14581f4ca(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014581f527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14581f53a FUN_14581f53a body=95 status=ok
// SIG undefined FUN_14581f53a(void)

undefined8 * FUN_14581f53a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1406078d6(param_1,uVar1);
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 3;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_14b215b40;
  param_1[0x1f] = &PTR_FUN_14b215e90;
  param_1[0x20] = &PTR_FUN_14b215ec0;
  return param_1;
}



// FUNCTION 14581f599 FUN_14581f599 body=35 status=ok
// SIG undefined FUN_14581f599(void)

void FUN_14581f599(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14581f5bc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b84f490;
  return;
}



// FUNCTION 14581f5bc FUN_14581f5bc body=66 status=ok
// SIG undefined FUN_14581f5bc(void)

undefined8 * FUN_14581f5bc(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b5490e0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_144a5dc74(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14581f5fe FUN_14581f5fe body=62 status=ok
// SIG undefined FUN_14581f5fe(void)

undefined1 FUN_14581f5fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14117b026(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14581f63c FUN_14581f63c body=9 status=ok
// SIG undefined FUN_14581f63c(void)

void FUN_14581f63c(longlong param_1)

{
  FUN_14581f646(param_1 + 0x10);
  return;
}



// FUNCTION 14581f646 FUN_14581f646 body=57 status=ok
// SIG undefined FUN_14581f646(void)

void FUN_14581f646(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24d330;
  FUN_14117b073(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 14581f680 FUN_14581f680 body=21 status=ok
// SIG undefined FUN_14581f680(void)

undefined8 FUN_14581f680(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14581f6ba FUN_14581f6ba body=105 status=ok
// SIG undefined FUN_14581f6ba(void)

void FUN_14581f6ba(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar1 = (undefined8 *)FUN_1403f9e22(param_2);
  *(undefined4 *)(puVar1 + 1) = DAT_14cb7bde8;
  *puVar1 = DAT_14cb7bde0;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x630);
  }
  FUN_14117b6b4((longlong)puVar1 + 0xc,uVar2);
  return;
}



// FUNCTION 14581f724 FUN_14581f724 body=320 status=ok
// SIG undefined FUN_14581f724(void)

void FUN_14581f724(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_14581f87c(param_1,&local_40);
  plVar2 = *(longlong **)(param_1 + 0x3b8);
  if (plVar2 == (longlong *)0x0) {
LAB_14581f7b1:
    lVar7 = *param_2;
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_14581f7b1;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x3b0);
    lVar7 = *param_2;
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (lVar8 != lVar7) {
    FUN_14581f87a(*param_2,1);
    *(longlong *)(param_1 + 0x3b0) = *param_2;
    plVar2 = (longlong *)param_2[1];
    plVar6 = *(longlong **)(param_1 + 0x3b8);
    if (plVar6 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x3b8);
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
      *(longlong **)(param_1 + 0x3b8) = plVar2;
    }
  }
  FUN_14581fa28(param_1);
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581f87a FUN_14581f87a body=1 status=ok
// SIG undefined FUN_14581f87a(void)

void FUN_14581f87a(void)

{
  return;
}



// FUNCTION 14581f87c FUN_14581f87c body=291 status=ok
// SIG undefined FUN_14581f87c(void)

void FUN_14581f87c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x28))(param_1,&local_28,&local_38);
  if (local_28 != 0) {
    plVar3 = *(longlong **)(*param_2 + 0x270);
    if (plVar3 != (longlong *)0x0) {
      lVar6 = *(longlong *)(*param_2 + 0x268);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if ((lVar6 != 0) && (0 < (int)plVar3[1])) {
        iVar5 = (int)plVar3[1];
        do {
          local_40 = (longlong *)0x0;
          if (iVar5 == 0) break;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar7 = iVar5 == iVar4;
          if (bVar7) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          local_40 = plVar3;
        } while (!bVar7);
        if (local_40 == (longlong *)0x0) {
          lVar6 = 0;
        }
        local_48 = lVar6;
        FUN_14581f9a0(local_28);
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581f9a0 FUN_14581f9a0 body=135 status=ok
// SIG undefined FUN_14581f9a0(void)

void FUN_14581f9a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x3a0) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x3a8);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x3a8);
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
    *(longlong **)(param_1 + 0x3a8) = plVar3;
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
                    /* WARNING: Could not recover jumptable at 0x00014581fa15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14581fa28 FUN_14581fa28 body=800 status=ok
// SIG undefined FUN_14581fa28(void)

void FUN_14581fa28(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_280 [2];
  longlong local_278;
  longlong *local_270;
  undefined8 local_268;
  longlong *local_260;
  char local_258 [184];
  undefined1 local_1a0 [64];
  longlong local_160;
  longlong local_158 [28];
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((((*(char *)(param_1 + 0x1a0) == '\x01') && (*(longlong *)(param_1 + 0x3b0) != 0)) &&
      (plVar10 = *(longlong **)(param_1 + 0x3b8), plVar10 != (longlong *)0x0)) &&
     (0 < (int)plVar10[1])) {
    uVar11 = 0;
    iVar8 = (int)plVar10[1];
    do {
      iVar7 = iVar8;
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14581faa7;
      }
      LOCK();
      iVar8 = (int)plVar10[1];
      bVar12 = iVar7 == iVar8;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x3b0);
LAB_14581faa7:
    uVar5 = DAT_14c96b239;
    local_1a0[0] = DAT_14c96b238;
    local_78 = 0;
    local_70 = 0x400000000;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    if (iVar7 != 0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_268 = uVar11;
    local_260 = plVar10;
    cVar6 = FUN_1407c4db4(param_1 + 0x1b0,&local_268,local_1a0,uVar5);
    if (cVar6 != '\0') {
      plVar9 = (longlong *)(local_78 + 0x38);
      if (local_78 == 0) {
        plVar9 = &local_160;
      }
      lVar2 = *plVar9;
      plVar9 = local_158;
      if (local_78 != 0) {
        plVar9 = (longlong *)(local_78 + 0x40);
      }
      plVar9 = (longlong *)*plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)(lVar2 + 0x510);
      plVar4 = *(longlong **)(lVar2 + 0x518);
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x90))();
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(*plVar3 + 0x90))();
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
      local_278 = lVar2;
      if (plVar9 == (longlong *)0x0) {
        local_280[0] = 0;
        local_270 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_280[0] = 0;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        local_270 = plVar9;
        if ((int)*plVar3 == 0) {
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
      FUN_14581fd4a(uVar11,local_258,local_280);
      if (local_258[0] == '\x01') {
        local_290 = 0;
        local_298 = 0;
        FUN_1402c1d72(param_1,local_1a0,local_258,0);
      }
      FUN_14493db24(local_258);
      plVar3 = local_270;
      if (local_270 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_270 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_270)(local_270);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    FUN_1447fa21a(local_1a0);
    if (iVar7 != 0) {
      LOCK();
      plVar9 = plVar10 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14581fd4a FUN_14581fd4a body=602 status=ok
// SIG undefined FUN_14581fd4a(void)

undefined1 * FUN_14581fd4a(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  plVar7 = DAT_14c98e618;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14581fef1:
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar8 = true;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_14581fef1;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar3 = *(undefined8 *)(param_1 + 8);
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
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    bVar8 = false;
    local_68 = uVar3;
    plStack_60 = plVar6;
  }
  plVar1 = plStack_60;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_50,&local_68);
  plVar7 = local_48;
  *(undefined8 *)(param_1 + 0x278) = local_50;
  plVar6 = *(longlong **)(param_1 + 0x280);
  if (plVar6 != local_48) {
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x280);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x280) = plVar7;
    plVar7 = local_48;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)();
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  if (!bVar8) {
    LOCK();
    plVar6 = plVar1 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar1)();
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar6 = *(longlong **)(param_1 + 0x270), plVar6 == (longlong *)0x0)) || ((int)plVar6[1] < 1)
     ) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14581fe75;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x268);
LAB_14581fe75:
    (**(code **)(*plVar7 + 0x160))(plVar7,param_2,param_3);
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
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14581ffa6 FUN_14581ffa6 body=63 status=ok
// SIG undefined FUN_14581ffa6(void)

undefined1 FUN_14581ffa6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14581ffe6(param_2,param_3);
    param_3 = param_3 + 0x114;
    param_2 = param_2 + 0x114;
  }
  return 1;
}



// FUNCTION 14581ffe6 FUN_14581ffe6 body=364 status=ok
// SIG undefined FUN_14581ffe6(void)

longlong FUN_14581ffe6(longlong param_1,longlong param_2)

{
  FUN_14117bcd8();
  FUN_14117bcd8(param_1 + 0xc,param_2 + 0xc);
  FUN_14117bcd8(param_1 + 0x18,param_2 + 0x18);
  FUN_14117bcd8(param_1 + 0x24,param_2 + 0x24);
  FUN_14117bcd8(param_1 + 0x30,param_2 + 0x30);
  FUN_14117bcd8(param_1 + 0x3c,param_2 + 0x3c);
  FUN_14117bcd8(param_1 + 0x48,param_2 + 0x48);
  FUN_14117bcd8(param_1 + 0x54,param_2 + 0x54);
  FUN_14117bcd8(param_1 + 0x60,param_2 + 0x60);
  FUN_14117bcd8(param_1 + 0x6c,param_2 + 0x6c);
  FUN_14117bcd8(param_1 + 0x78,param_2 + 0x78);
  FUN_14117bcd8(param_1 + 0x84,param_2 + 0x84);
  FUN_14117bcd8(param_1 + 0x90,param_2 + 0x90);
  FUN_14117bcd8(param_1 + 0x9c,param_2 + 0x9c);
  FUN_140841e06(param_1 + 0xa8,param_2 + 0xa8);
  FUN_14117bcd8(param_1 + 0xb4,param_2 + 0xb4);
  FUN_14117bcd8(param_1 + 0xc0,param_2 + 0xc0);
  FUN_14117bcd8(param_1 + 0xcc,param_2 + 0xcc);
  FUN_14117bcd8(param_1 + 0xd8,param_2 + 0xd8);
  FUN_14117bcd8(param_1 + 0xe4,param_2 + 0xe4);
  FUN_140841e06(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14117bcd8(param_1 + 0xfc,param_2 + 0xfc);
  FUN_14117bcd8(param_1 + 0x108,param_2 + 0x108);
  return param_1;
}



// FUNCTION 145820152 FUN_145820152 body=40 status=ok
// SIG undefined FUN_145820152(void)

undefined8 FUN_145820152(undefined8 param_1,int param_2)

{
  FUN_14582017a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582017a FUN_14582017a body=57 status=ok
// SIG undefined FUN_14582017a(void)

void FUN_14582017a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b293fe0;
  FUN_1458201b3(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458201b3 FUN_1458201b3 body=73 status=ok
// SIG undefined FUN_1458201b3(void)

void FUN_1458201b3(longlong param_1,int param_2)

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



// FUNCTION 14582020a FUN_14582020a body=54 status=ok
// SIG undefined FUN_14582020a(void)

undefined8 * FUN_14582020a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582024e FUN_14582024e body=40 status=ok
// SIG undefined FUN_14582024e(void)

undefined8 FUN_14582024e(undefined8 param_1,int param_2)

{
  FUN_14117bcea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


