// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475331b0 FUN_1475331b0 body=143 status=ok
// SIG undefined FUN_1475331b0(void)

ulonglong FUN_1475331b0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_144a788f7(param_2 & 0xffffffff);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar4 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U & iVar3 + (int)(param_2 >> 0x20)) * 4);
    if (iVar3 != -1) {
      while (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x18),
            *puVar1 != param_2) {
        iVar3 = (int)puVar1[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (puVar1 != (ulonglong *)0x0) {
        uVar2 = puVar1[1];
        if (DAT_14c950c29 != '\x01') {
          return uVar2;
        }
        if (uVar2 == 0) {
          return 0;
        }
        FUN_1456cec3c(uVar2);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 147533240 FUN_147533240 body=179 status=ok
// SIG undefined FUN_147533240(void)

void FUN_147533240(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  uVar2 = *param_2;
  iVar4 = FUN_144a788f7(uVar2 & 0xffffffff);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar5 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x68);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U & iVar4 + (int)(uVar2 >> 0x20)) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return;
          }
          plVar3 = (longlong *)puVar1[1];
                    /* WARNING: Could not recover jumptable at 0x0001475332f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2,param_3,param_4);
          return;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1475332f4 FUN_1475332f4 body=927 status=ok
// SIG undefined FUN_1475332f4(void)

void FUN_1475332f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong ****pppplVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong ***local_e0 [8];
  byte local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar11 = *(longlong *)(param_1 + 0x20);
  local_138 = param_2;
  local_130 = param_3;
  if (lVar11 != 0) {
    uVar4 = FUN_1459e3e54();
    plVar5 = (longlong *)FUN_144718840(lVar11,uVar4);
    if (plVar5 != (longlong *)0x0) {
      local_78 = 0;
      iVar12 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_148 = plVar5;
      local_140 = param_1;
      lVar6 = FUN_14757509a(param_5);
      lVar11 = lVar6 + 0x28;
      if (*(longlong *)(lVar6 + 0x40) != 0) {
        lVar11 = *(longlong *)(lVar6 + 0x40);
      }
      if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
        lVar6 = lVar11 + (longlong)*(int *)(lVar6 + 0x48) * 0x18;
        do {
          lVar14 = (longlong)*(int *)(lVar11 + 0x10);
          if (0 < lVar14) {
            lVar15 = *(longlong *)(lVar11 + 8);
            do {
              FUN_14754060a(&local_98,local_e0,lVar15);
              lVar15 = lVar15 + 8;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          lVar11 = lVar11 + 0x18;
        } while (lVar11 != lVar6);
      }
      (**(code **)(*local_148 + 0x18))(local_148,local_e0);
      lVar6 = local_140;
      plVar5 = (longlong *)(local_140 + 0x28);
      lVar11 = local_140 + 0x38;
      local_100 = 0x100000000;
      local_f0 = 0xffffffff;
      local_e8 = 0;
      local_f8 = lVar11;
      if (*(int *)(local_140 + 0x50) != 0) {
        FUN_1449c0562(&local_100);
        iVar12 = *(int *)(lVar6 + 0x50);
      }
      local_110 = local_f0;
      uVar4 = local_110;
      local_108 = local_e8;
      local_104 = local_e4;
      local_120 = local_100;
      local_118 = local_f8;
      local_110._4_4_ = (int)((ulonglong)local_f0 >> 0x20);
      local_128 = plVar5;
      if ((local_110._4_4_ != iVar12) || (local_f8 != lVar11)) {
        iVar1 = local_110._4_4_;
        local_110 = uVar4;
        do {
          lVar6 = *local_128;
          uVar7 = (**(code **)(**(longlong **)(lVar6 + 8 + (longlong)iVar1 * 0x18) + 0x2b8))();
          if ((int)uStack_90 != local_64) {
            uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            puVar9 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar9 = local_60;
            }
            iVar13 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar13 != -1) {
              do {
                if (*(ulonglong *)(local_98 + (longlong)iVar13 * 0x10) == uVar7) {
                  pppplVar10 = local_e0;
                  if ((local_a0 & 2) == 0) {
                    pppplVar10 = (longlong ****)local_e0[0];
                  }
                  uVar2 = (*(code *)(*pppplVar10)[2])
                                    (pppplVar10,*(undefined8 *)(lVar6 + (longlong)iVar1 * 0x18));
                  uVar2 = FUN_14755452a(param_4,param_5,uVar2);
                  uVar3 = FUN_1475545d8(param_4,local_130);
                  FUN_147554828(param_4,local_138,uVar2,uVar3);
                  break;
                }
                iVar13 = *(int *)((longlong)iVar13 * 0x10 + local_98 + 8);
              } while (iVar13 != -1);
            }
          }
          local_110 = CONCAT44(local_110._4_4_,(uint)local_110 & ~local_120._4_4_);
          FUN_1449c0562(&local_120);
          iVar1 = local_110._4_4_;
          uVar4 = local_110;
        } while (local_128 != plVar5 || (local_118 != lVar11 || local_110._4_4_ != iVar12));
      }
      local_110 = uVar4;
      if ((local_a0 & 1) != 0) {
        pppplVar10 = local_e0;
        if ((local_a0 & 2) == 0) {
          pppplVar10 = (longlong ****)local_e0[0];
        }
        local_a0 = local_a0 & 0xfe;
        (*(code *)**pppplVar10)(pppplVar10,0);
        if ((local_a0 & 2) == 0) {
          FUN_1400020a8(local_e0[0]);
        }
      }
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14754057c(&local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147533694 FUN_147533694 body=148 status=ok
// SIG undefined FUN_147533694(void)

void FUN_147533694(double param_1,int param_2,double param_3)

{
  int iVar1;
  longlong lVar2;
  longlong in_RCX;
  longlong lVar3;
  float fVar4;
  
  if ((*(char *)(in_RCX + 0x120) == '\x01') &&
     (iVar1 = *(int *)(in_RCX + 0x70), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(in_RCX + 0x68);
    lVar3 = 0;
    do {
      param_1 = *(double *)(lVar2 + lVar3) / param_3;
      *(double *)(lVar2 + lVar3) = param_1;
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  iVar1 = *(int *)(in_RCX + 0x60);
  if ((longlong)iVar1 != 0) {
    param_1 = (double)(ulonglong)(uint)(float)param_3;
    lVar2 = *(longlong *)(in_RCX + 0x58);
    lVar3 = 0;
    do {
      fVar4 = (float)(*(int *)(lVar2 + lVar3) - param_2) * (float)param_3;
      *(int *)(lVar2 + lVar3) = ((int)ROUND(fVar4 + fVar4 + -0.5) >> 1) + param_2;
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
  }
  FUN_14752901c(param_1,0);
  return;
}



// FUNCTION 14753372c FUN_14753372c body=414 status=ok
// SIG undefined FUN_14753372c(void)

undefined8 FUN_14753372c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  longlong local_e8;
  char local_e0 [4];
  int local_dc;
  char local_d8;
  int local_d4;
  undefined8 ***local_d0 [16];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_3;
  plVar4 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x18) + 0x328))();
  lVar3 = plVar4[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *plVar4;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar7);
      FUN_14073c474(lVar2,local_e0);
      if (((*(byte *)(lVar2 + 0xc0) & 1) != 0) &&
         (((local_e0[0] == '\x02' || (local_d8 == '\x02')) ||
          ((local_dc <= local_d4 &&
           ((local_dc != local_d4 || (local_d8 != '\0' && local_e0[0] != '\0')))))))) {
        (**(code **)(*param_1 + 0x28))(param_1,local_d0,lVar2);
        if ((local_50 & 1) != 0) {
          cVar6 = *(char *)(lVar2 + 0x59);
          if (cVar6 == '\x02') {
            cVar6 = (char)*(undefined4 *)(local_e8 + 0x10);
          }
          ppppuVar5 = local_d0;
          if ((local_50 & 2) == 0) {
            ppppuVar5 = (undefined8 ****)local_d0[0];
          }
          *(char *)(ppppuVar5 + 2) = cVar6;
          ppppuVar5 = (undefined8 ****)local_d0[0];
          if ((local_50 & 2) != 0) {
            ppppuVar5 = local_d0;
          }
          FUN_14485c47a((longlong)ppppuVar5 + 0x14,lVar2);
          FUN_1475564ee(param_2,local_d0);
        }
        if ((local_50 & 1) != 0) {
          ppppuVar5 = local_d0;
          if ((local_50 & 2) == 0) {
            ppppuVar5 = (undefined8 ****)local_d0[0];
          }
          local_50 = local_50 & 0xfe;
          (*(code *)**ppppuVar5)(ppppuVar5,0);
          if ((local_50 & 2) == 0) {
            FUN_1400020a8(local_d0[0]);
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1475338cc FUN_1475338cc body=55 status=ok
// SIG undefined FUN_1475338cc(void)

void FUN_1475338cc(longlong param_1)

{
  FUN_140a31f5e(param_1 + 0x30);
  FUN_140a31ef0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147533904 FUN_147533904 body=210 status=ok
// SIG undefined FUN_147533904(void)

void FUN_147533904(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [20];
  undefined1 local_84 [92];
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1475564b0(local_98);
  local_28 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x58) >> 2 & 3 | local_28 & 0xfffffffc;
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_98,param_2);
  if (cVar1 != '\0') {
    if (cVar1 != '\x02') goto LAB_1475339a8;
    FUN_14753372c(param_1,local_98,param_2);
  }
  FUN_14485c47a(local_84,*(undefined8 *)(param_2 + 0x18));
  (**(code **)(*param_1 + 0x20))(param_1,local_98,param_2);
  (**(code **)**(undefined8 **)(param_2 + 0x20))
            (*(undefined8 **)(param_2 + 0x20),local_98,*(undefined8 *)(param_2 + 0x18));
LAB_1475339a8:
  FUN_1475338cc(local_98);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475339e4 FUN_1475339e4 body=192 status=ok
// SIG undefined FUN_1475339e4(void)

void FUN_1475339e4(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  return;
}



// FUNCTION 147533aa4 FUN_147533aa4 body=84 status=ok
// SIG undefined FUN_147533aa4(void)

void FUN_147533aa4(longlong *param_1)

{
  FUN_140a318c3(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140a31900(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147533afc FUN_147533afc body=520 status=ok
// SIG undefined FUN_147533afc(void)

longlong FUN_147533afc(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab2530) && (FUN_144b3d300(&DAT_14cab2530), DAT_14cab2530 == -1)) {
    DAT_14cab2520 = 0;
    DAT_14cab2528 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_1432d23eb);
    _Init_thread_footer(&DAT_14cab2530);
  }
  plVar8 = DAT_14cab2528;
  bVar2 = 1;
  if (DAT_14cab2528 == (longlong *)0x0) {
LAB_147533b72:
    plVar8 = (longlong *)0x0;
LAB_147533b74:
    FUN_1446ddc76(&local_40,"MovieScene",1);
    lVar7 = local_40;
    uVar5 = FUN_144a52528();
    plVar6 = (longlong *)FUN_14493e38c(uVar5,lVar7);
    (**(code **)(*plVar6 + 0x50))(plVar6,&local_40);
    plVar9 = plStack_38;
    plVar6 = DAT_14cab2528;
    DAT_14cab2520 = local_40;
    local_40 = 0;
    plStack_38 = (longlong *)0x0;
    DAT_14cab2528 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_38 + 0x10))();
        }
      }
    }
    plVar6 = DAT_14cab2528;
    if (DAT_14cab2528 == (longlong *)0x0) {
LAB_147533c1b:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)DAT_14cab2528[1];
      do {
        if (iVar4 == 0) goto LAB_147533c1b;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar10 = iVar4 == iVar3;
        if (bVar10) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar10);
    }
    lVar7 = DAT_14cab2520;
    plVar9 = (longlong *)0x0;
    if (plVar6 == plVar8) {
      plVar9 = plVar6;
    }
    if ((bool)(bVar2 | plVar6 == plVar8)) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar8 = plVar6;
          goto joined_r0x000147533c68;
        }
      }
    }
    else {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x000147533c68:
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    plVar8 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      lVar7 = 0;
      goto LAB_147533c99;
    }
  }
  else {
    iVar4 = (int)DAT_14cab2528[1];
    do {
      if (iVar4 == 0) goto LAB_147533b72;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
    lVar7 = DAT_14cab2520;
    if (DAT_14cab2520 == 0) {
      bVar2 = 0;
      goto LAB_147533b74;
    }
  }
  LOCK();
  plVar6 = plVar8 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_147533c99:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147533d05 FUN_147533d05 body=48 status=ok
// SIG undefined FUN_147533d05(void)

undefined2 FUN_147533d05(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_2;
  if (*param_1 != uVar1) {
    return CONCAT11((char)(uVar1 >> 8),uVar1 < *param_1);
  }
  uVar1 = param_2[1];
  if (param_1[1] == uVar1) {
    uVar2 = param_2[2];
    uVar1 = param_1[2];
    bVar5 = SBORROW2(uVar1,uVar2);
    sVar3 = uVar1 - uVar2;
    bVar4 = false;
    if (uVar1 == uVar2) {
      uVar2 = param_1[3];
      uVar1 = param_2[3];
      bVar5 = SBORROW2(uVar2,uVar1);
      sVar3 = uVar2 - uVar1;
      bVar4 = uVar2 == uVar1;
    }
    return CONCAT11((char)(uVar2 >> 8),!bVar4 && bVar5 == sVar3 < 0);
  }
  return CONCAT11((char)(uVar1 >> 8),(short)param_1[1] < (short)uVar1);
}



// FUNCTION 147533d35 FUN_147533d35 body=427 status=ok
// SIG undefined FUN_147533d35(void)

void FUN_147533d35(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = DAT_14cab2580;
  iVar3 = DAT_14cab2550;
  if (DAT_14cab2550 != 0 || DAT_14cab2580 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_147540e1a(param_1,iVar2);
    }
    *(ulonglong *)(*param_1 + (longlong)iVar2 * 8) = CONCAT44(iVar5,iVar3);
    FUN_147533ee0(param_1 + 2,&DAT_14cab2548);
    FUN_147533ee0(param_1 + 2,&DAT_14cab2578);
    uVar4 = DAT_14cab2568;
    plVar1 = param_1 + 4;
    lVar6 = (longlong)(int)DAT_14cab2568;
    if (lVar6 != 0) {
      iVar3 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar3 + DAT_14cab2568;
      if ((uint)(*(int *)((longlong)param_1 + 0x2c) - iVar3) < uVar4) {
        FUN_147540f34(plVar1,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 8 + *plVar1),DAT_14cab2560,lVar6 << 3);
    }
    uVar4 = DAT_14cab2598;
    lVar6 = (longlong)(int)DAT_14cab2598;
    if (lVar6 != 0) {
      iVar3 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar3 + DAT_14cab2598;
      if ((uint)(*(int *)((longlong)param_1 + 0x2c) - iVar3) < uVar4) {
        FUN_147540f34(plVar1,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 8 + *plVar1),DAT_14cab2590,lVar6 << 3);
    }
    DAT_14cab2550 = 0;
    if (DAT_14cab2554 < 0) {
      FUN_147540fba(&DAT_14cab2548);
    }
    DAT_14cab2568 = 0;
    if (DAT_14cab256c < 0) {
      FUN_147540fea(&DAT_14cab2560);
    }
    DAT_14cab2580 = 0;
    if (DAT_14cab2584 < 0) {
      FUN_147540fba(&DAT_14cab2578);
    }
    DAT_14cab2598 = 0;
    if (DAT_14cab259c < 0) {
      FUN_147540fea(&DAT_14cab2590);
      return;
    }
  }
  return;
}



// FUNCTION 147533ee0 FUN_147533ee0 body=104 status=ok
// SIG undefined FUN_147533ee0(void)

void FUN_147533ee0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147540ea0(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0xc + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    return;
  }
  return;
}



// FUNCTION 147533f48 FUN_147533f48 body=176 status=ok
// SIG undefined FUN_147533f48(void)

longlong FUN_147533f48(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_14753c81e();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  FUN_14753c8be(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x18) = 2;
  *(undefined8 *)(param_2 + 0x20) = 2;
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  FUN_14753c86a(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_1400a241c(param_1 + 0x88,param_2 + 0x88);
  FUN_14753c97c(param_1 + 0x98,param_2 + 0x98);
  FUN_14753c9da(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  return param_1;
}



// FUNCTION 147533ff8 FUN_147533ff8 body=348 status=ok
// SIG undefined FUN_147533ff8(void)

undefined8 * FUN_147533ff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 3);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  FUN_14753c8be(param_1 + 4,param_2 + 4);
  *param_2 = 2;
  param_2[1] = 2;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
  FUN_14753ca86(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0xd);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0xe);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0xf);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0xf) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar7;
  FUN_14753c8be(param_1 + 0x10,param_2 + 0x10);
  param_2[0xc] = 2;
  param_2[0xd] = 2;
  *(undefined4 *)(param_2 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_2 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0xffffffff;
  FUN_14753ca86(param_1 + 0x14,param_2 + 0x14);
  if (param_1 == param_2) {
    FUN_14753ca38(param_1 + 0x1a,param_2 + 0x1a);
  }
  else {
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    param_1[0x18] = param_2[0x18];
    param_2[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
    param_2[0x19] = 0;
    FUN_14753ca38(param_1 + 0x1a,param_2 + 0x1a);
    if (param_1[0x1c] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1c] = param_2[0x1c];
    param_2[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
    *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
    param_2[0x1d] = 0;
  }
  return param_1;
}



// FUNCTION 147534154 FUN_147534154 body=96 status=ok
// SIG undefined FUN_147534154(void)

longlong * FUN_147534154(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_14753caf6(param_1 + 2,param_2 + 2);
  FUN_14753cb44(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14753425c FUN_14753425c body=135 status=ok
// SIG undefined FUN_14753425c(void)

undefined4 * FUN_14753425c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1400a26b2(param_1 + 2,param_2 + 2);
  FUN_14753cb92(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  FUN_1447bdcfc(param_1 + 0x22,param_2 + 0x22);
  FUN_14753cff2(param_1 + 0x26,param_2 + 0x26);
  FUN_14753d16e(param_1 + 0x3a,param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
  return param_1;
}



// FUNCTION 1475342e4 FUN_1475342e4 body=103 status=ok
// SIG undefined FUN_1475342e4(void)

longlong FUN_1475342e4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14753d324();
  FUN_14753d324(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_14753d6f8(param_1 + 0xc0,param_2 + 0xc0);
  FUN_14753d7ec(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 14753434c FUN_14753434c body=94 status=ok
// SIG undefined FUN_14753434c(void)

longlong FUN_14753434c(longlong param_1,longlong param_2)

{
  FUN_14753df60();
  FUN_14753df60(param_1 + 0x60,param_2 + 0x60);
  FUN_14753de52(param_1 + 0xc0,param_2 + 0xc0);
  FUN_14753deaa(param_1 + 0xd0,param_2 + 0xd0);
  FUN_14753df08(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 1475343aa FUN_1475343aa body=144 status=ok
// SIG undefined FUN_1475343aa(void)

undefined4 * FUN_1475343aa(undefined8 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_4;
  if (DAT_14cab2074 == param_4) {
    *param_2 = param_3;
  }
  else {
    lVar1 = FUN_1400a382a(param_1,param_3);
    if (lVar1 != 0) {
      lVar1 = FUN_1400d12c6(lVar1,&local_1c);
      if (lVar1 != 0) {
        lVar1 = FUN_1400a4c08(lVar1);
        if (lVar1 != 0) {
          FUN_140b56998(param_1,param_2,lVar1);
          goto LAB_1475343d3;
        }
      }
    }
    *param_2 = 0xffffffff;
  }
LAB_1475343d3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753443c FUN_14753443c body=553 status=ok
// SIG undefined FUN_14753443c(void)

ulonglong FUN_14753443c(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = *(longlong **)(param_2 + 8);
  lVar5 = FUN_14479d2ce();
  uVar3 = local_78;
  if (lVar5 != 0) {
    local_90 = *(longlong **)(param_2 + 8);
    lVar5 = FUN_14479d2ce();
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((((*param_2 != *(int *)(lVar5 + 0x2c)) || (param_2[1] != *(int *)(lVar5 + 0x30))) ||
        (param_2[2] != *(int *)(lVar5 + 0x34))) || (param_2[3] != *(int *)(lVar5 + 0x38)))
    goto LAB_147534573;
    lVar5 = FUN_1400a382a(param_1,param_2[10]);
    iVar7 = 0;
    uVar3 = local_78;
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + 0x98);
      lVar9 = lVar5 + 0xa8;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar5 + 0xc0) != 0) {
        FUN_1449c0562(&local_68);
        iVar7 = *(int *)(lVar5 + 0xc0);
      }
      local_78 = local_58;
      uVar3 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar7) || (local_60 != lVar9)) {
        iVar4 = local_78._4_4_;
        local_78 = uVar3;
        do {
          lVar5 = FUN_1400a4c08(*local_90 + (longlong)iVar4 * 0x100 + 8);
          if (lVar5 == 0) goto LAB_147534573;
          FUN_140b56bb8(param_1,&local_68,lVar5);
          if ((longlong)(int)local_68 == -1) goto LAB_147534573;
          lVar2 = *(longlong *)(param_1 + 0xa0);
          lVar6 = (longlong)(int)local_68 * 0x30;
          if (((*(int *)(lVar2 + lVar6) != *(int *)(lVar5 + 0x2c)) ||
              (*(int *)(lVar2 + 4 + lVar6) != *(int *)(lVar5 + 0x30))) ||
             ((*(int *)(lVar2 + 8 + lVar6) != *(int *)(lVar5 + 0x34) ||
              (*(int *)(lVar2 + 0xc + lVar6) != *(int *)(lVar5 + 0x38))))) goto LAB_147534573;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 || (local_80 != lVar9 || local_78._4_4_ != iVar7));
      }
    }
  }
  local_78 = uVar3;
  uVar8 = 0;
LAB_147534573:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147534666 FUN_147534666 body=2672 status=ok
// SIG undefined FUN_147534666(void)

void FUN_147534666(longlong param_1,int param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  void *_Src;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_508 [32];
  undefined8 *local_4e8;
  undefined8 *local_4e0;
  undefined8 *local_4d8;
  char local_4c9;
  longlong local_4c8;
  longlong local_4c0;
  longlong *local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined8 local_3b4;
  undefined8 local_3ac;
  undefined8 local_3a4;
  undefined1 local_39c;
  undefined8 local_398;
  undefined4 local_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368;
  undefined1 local_360 [16];
  undefined1 local_350;
  undefined2 local_348;
  undefined1 local_346;
  char local_345;
  undefined **local_340;
  longlong local_338;
  undefined1 local_330 [16];
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined8 *local_260;
  undefined2 uStack_258;
  undefined6 uStack_256;
  uint local_250;
  uint uStack_24c;
  byte local_248;
  char local_247;
  undefined2 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  ulonglong *local_228;
  uint local_220;
  uint local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  int local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a0 [2];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  lVar7 = *(longlong *)(param_1 + 0xa0);
  lVar11 = (longlong)param_2 * 0x30;
  local_238 = *(undefined8 *)(lVar7 + lVar11);
  uStack_230 = ((undefined8 *)(lVar7 + lVar11))[1];
  local_228 = (ulonglong *)0x0;
  local_220 = *(uint *)(lVar7 + 0x18 + lVar11);
  lVar16 = (longlong)(int)local_220;
  _Src = *(void **)(lVar7 + 0x10 + lVar11);
  local_1fc = param_2;
  if (lVar16 == 0) {
    local_21c = 0;
  }
  else {
    FUN_140a472a8(&local_228,local_220,0);
    memcpy(local_228,_Src,lVar16 << 3);
  }
  local_218 = *(undefined8 *)(lVar7 + lVar11 + 0x20);
  uStack_210 = *(undefined8 *)(lVar7 + lVar11 + 0x28);
  cVar6 = FUN_14753443c(param_1);
  if (cVar6 != '\0') {
    local_320 = 2;
    local_318 = 2;
    local_310 = 0xffffffff;
    uStack_30c = 0xffffffff;
    uStack_308 = 0xffffffff;
    uStack_304 = 0xffffffff;
    local_300 = (undefined1  [16])0x0;
    local_2f0 = (undefined1  [16])0x0;
    local_2e0 = (undefined1  [16])0x0;
    local_2d0 = (undefined1  [16])0x0;
    local_2c0 = 2;
    local_2b8 = 2;
    local_2b0 = 0xffffffff;
    uStack_2ac = 0xffffffff;
    uStack_2a8 = 0xffffffff;
    uStack_2a4 = 0xffffffff;
    local_240 = 0;
    local_2a0 = (undefined1  [16])0x0;
    local_290 = (undefined1  [16])0x0;
    local_280 = (undefined1  [16])0x0;
    local_270 = (undefined1  [16])0x0;
    local_260 = (undefined8 *)0x0;
    uStack_258 = 0;
    uStack_256 = 0;
    local_250 = 0;
    uStack_24c = 0;
    local_248 = 0;
    local_247 = '\0';
    local_3c0 = DAT_14cab2074;
    local_3bc = 2;
    local_3b4 = 2;
    local_3ac = 2;
    local_3a4 = 2;
    local_39c = 0;
    local_398 = 0x3f800000;
    local_390 = 0;
    local_348 = 0;
    local_346 = 0;
    local_388 = (undefined1  [16])0x0;
    local_378 = (undefined1  [16])0x0;
    local_368 = 0;
    local_360 = (undefined1  [16])0x0;
    local_350 = 0;
    local_340 = &PTR_FUN_14a46d240;
    local_330 = (undefined1  [16])0x0;
    local_220 = 0;
    local_338 = param_1;
    if (local_21c != 0) {
      FUN_1475418f4(&local_228);
    }
    uStack_210._0_5_ = CONCAT14(*(undefined1 *)((longlong)param_3 + 99),(uint)uStack_210);
    FUN_14753510c(&local_340);
    local_345 = param_4;
    lVar7 = (**(code **)(*param_3 + 0x2e8))(param_3);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x16c) < 0) {
        *(undefined4 *)(lVar7 + 0x168) = 0;
        FUN_14753e33a(lVar7 + 0x160);
      }
      else {
        *(undefined4 *)(lVar7 + 0x168) = 0;
      }
    }
    local_1a0[0] = DAT_14cab2070;
    local_198 = (undefined1  [16])0x0;
    local_188 = 2;
    local_180 = 2;
    local_178 = 0xffffffff;
    uStack_174 = 0xffffffff;
    uStack_170 = 0xffffffff;
    uStack_16c = 0xffffffff;
    local_168 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_128 = 0x3f800000;
    local_120 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_118 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = '\x03';
    local_4c8 = param_1;
    cVar6 = FUN_14753518c(param_3,&local_3c0);
    if ((local_345 == '\x03') && (local_68 != '\x03')) {
      uStack_210 = uStack_210 | 0x100000000;
    }
    if (param_3 != (longlong *)0x0) {
      uVar8 = FUN_145a66d90();
      plVar9 = (longlong *)FUN_144718840(param_3,uVar8);
      if (plVar9 != (longlong *)0x0) {
        local_4b0 = 2;
        local_4a8 = 2;
        (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_258);
      }
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_4c9 = cVar6;
    local_4b8 = param_3;
    if (lVar7 != 0) {
      iVar10 = *(int *)(lVar7 + 0x158);
      if ((longlong)iVar10 != 0) {
        lVar11 = *(longlong *)(lVar7 + 0x150);
        lVar16 = 0;
        do {
          uVar5 = local_250;
          if (*(char *)(lVar11 + 0x18 + lVar16) == '\x01') {
            lVar14 = (longlong)(int)local_250;
            local_250 = local_250 + 1;
            if (uStack_24c < local_250) {
              FUN_147541924(&uStack_258,uVar5);
            }
            lVar4 = CONCAT62(uStack_256,uStack_258);
            bVar2 = *(byte *)(lVar11 + 0x19 + lVar16);
            *(undefined4 *)(lVar4 + lVar14 * 8) = *(undefined4 *)(lVar11 + lVar16);
            *(byte *)(lVar4 + 4 + lVar14 * 8) = *(byte *)(lVar4 + 4 + lVar14 * 8) & 0xfe | bVar2;
          }
          lVar16 = lVar16 + 0x20;
        } while ((longlong)iVar10 * 0x20 != lVar16);
      }
      lVar11 = FUN_14756e164(lVar7);
      if (lVar11 != 0) {
        local_4d8 = &local_320;
        local_4e0 = &local_1f8;
        local_4e8 = (undefined8 *)&local_3c0;
        FUN_14753536c(local_4c8,&local_238,0,lVar11);
      }
      lVar11 = local_4c8;
      iVar10 = *(int *)(lVar7 + 0xe8);
      local_4c0 = lVar7;
      if ((longlong)iVar10 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0xe0);
        lVar16 = 0;
        do {
          local_4e8 = (undefined8 *)&local_3c0;
          local_4e0 = &local_1f8;
          local_4d8 = &local_320;
          FUN_14753536c(lVar11,&local_238,0,*(undefined8 *)(lVar7 + lVar16));
          lVar16 = lVar16 + 8;
        } while ((longlong)iVar10 * 8 != lVar16);
      }
      if ((longlong)*(int *)(local_4c0 + 0x88) != 0) {
        lVar7 = *(longlong *)(local_4c0 + 0x80);
        lVar11 = (longlong)*(int *)(local_4c0 + 0x88) * 0x30 + lVar7;
        do {
          iVar10 = *(int *)(lVar7 + 0x28);
          if ((longlong)iVar10 != 0) {
            lVar16 = *(longlong *)(lVar7 + 0x20);
            lVar14 = 0;
            do {
              local_4e8 = (undefined8 *)&local_3c0;
              local_4e0 = &local_1f8;
              local_4d8 = &local_320;
              FUN_14753536c(local_4c8,&local_238,lVar7,*(undefined8 *)(lVar16 + lVar14));
              lVar14 = lVar14 + 8;
            } while ((longlong)iVar10 * 8 != lVar14);
          }
          lVar7 = lVar7 + 0x30;
        } while (lVar7 != lVar11);
      }
    }
    plVar9 = local_4b8;
    lVar7 = local_4c8;
    local_260 = &local_4b0;
    local_4b0 = 2;
    local_4a8 = 2;
    local_4a0 = 0xffffffff;
    uStack_49c = 0xffffffff;
    uStack_498 = 0xffffffff;
    uStack_494 = 0xffffffff;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 2;
    local_448 = 2;
    local_440 = 0xffffffff;
    uStack_43c = 0xffffffff;
    uStack_438 = 0xffffffff;
    uStack_434 = 0xffffffff;
    local_430 = 0;
    uStack_428 = 0;
    local_420 = 0;
    uStack_418 = 0;
    local_410 = 0;
    uStack_408 = 0;
    local_400 = 0;
    uStack_3f8 = 0;
    local_3f0 = 0;
    uStack_3e8 = 0;
    local_3e0 = 0;
    uStack_3d8 = 0;
    local_3d0 = 0;
    uStack_3c8 = 0;
    local_4e8 = &local_320;
    FUN_147535626(local_4c8,&local_238,local_4b8,&local_3c0);
    local_260 = (undefined8 *)0x0;
    if ((int)uStack_3e8 == 0) {
      FUN_140d21406();
    }
    else {
      uVar8 = FUN_1475419aa(lVar7 + 0x1c8,local_1fc,&local_1fc);
      FUN_147533ff8(uVar8,&local_4b0);
      local_240 = local_240 | 0x800;
    }
    cVar6 = local_4c9;
    if (local_4c9 != '\0') {
      FUN_14753575a(lVar7,local_1a0,&local_3c0,&local_320);
      uVar3 = uStack_210;
      uStack_210._0_5_ = CONCAT14(uStack_210._4_1_ | (byte)local_240,(uint)uStack_210);
      uVar8 = uStack_210;
      uStack_210._6_1_ = SUB81(uVar3,6);
      uStack_210._7_1_ = SUB81(uVar3,7);
      uStack_210._0_6_ = (undefined6)uVar8;
      uStack_210._0_7_ = CONCAT16(uStack_210._6_1_ | local_240._1_1_,(undefined6)uStack_210);
    }
    if (*(int *)(lVar7 + 0x130) != *(int *)(lVar7 + 0x15c)) {
      lVar11 = lVar7 + 0x160;
      if (*(longlong *)(lVar7 + 0x168) != 0) {
        lVar11 = *(longlong *)(lVar7 + 0x168);
      }
      iVar10 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar7 + 0x170) - 1U & (uint)uStack_210) * 4);
      if (iVar10 != -1) {
        do {
          lVar11 = *(longlong *)(lVar7 + 0x128) + (longlong)iVar10 * 0x170;
          if (*(uint *)(*(longlong *)(lVar7 + 0x128) + (longlong)iVar10 * 0x170) == (uint)uStack_210
             ) {
            if (lVar11 + 8 != 0 && lVar11 != 0) {
              FUN_147556072(lVar11 + 8,&local_1f8);
            }
            break;
          }
          iVar10 = *(int *)(lVar11 + 0x168);
        } while (iVar10 != -1);
      }
    }
    FUN_14753604c(lVar7,&local_238,local_1a0,&local_320);
    if (cVar6 == '\0') {
      FUN_140d213ac(lVar7 + 0xd8,local_1fc);
    }
    else {
      uVar8 = FUN_147541c44(lVar7 + 0xd8,local_1fc,&local_1fc);
      FUN_147533f48(uVar8,local_1a0);
    }
    local_238 = *(undefined8 *)((longlong)plVar9 + 0x2c);
    uStack_230 = *(undefined8 *)((longlong)plVar9 + 0x34);
    uStack_210._0_7_ = CONCAT16(local_240._1_1_,(undefined6)uStack_210);
    uStack_210 = CONCAT17(local_247 * '\x02' | uStack_210._7_1_ & 0xfc | local_248,
                          (undefined7)uStack_210);
    if (local_228 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = local_250;
    local_228 = (ulonglong *)CONCAT62(uStack_256,uStack_258);
    uStack_258 = 0;
    uStack_256 = 0;
    local_220 = local_250;
    local_21c = uStack_24c;
    local_250 = 0;
    uStack_24c = 0;
    if (uVar5 != 0) {
      FUN_147541f3a();
      if (1 < (longlong)(int)local_220) {
        lVar11 = (longlong)(int)local_220 * 8 + -8;
        puVar12 = local_228;
        puVar15 = local_228;
        do {
          uVar3 = puVar15[1];
          if ((((int)*puVar12 != (int)uVar3) ||
              (puVar13 = puVar12, ((*puVar12 ^ uVar3) & 0x100000000) != 0)) &&
             (puVar13 = puVar12 + 1, puVar15 != puVar12)) {
            *puVar13 = uVar3;
          }
          puVar15 = puVar15 + 1;
          lVar11 = lVar11 + -8;
          puVar12 = puVar13;
        } while (lVar11 != 0);
        if (local_220 != (uint)((ulonglong)((longlong)puVar13 + (8 - (longlong)local_228)) >> 3)) {
          FUN_1475363f2(&local_228);
        }
      }
    }
    uVar5 = local_220;
    puVar12 = local_228;
    lVar11 = *(longlong *)(lVar7 + 0xa0);
    lVar16 = (longlong)local_1fc * 0x30;
    puVar1 = (undefined8 *)(lVar11 + lVar16);
    *(undefined8 *)(lVar11 + lVar16) = local_238;
    ((undefined8 *)(lVar11 + lVar16))[1] = uStack_230;
    if (puVar1 != &local_238) {
      lVar14 = (longlong)(int)local_220;
      *(uint *)(puVar1 + 3) = local_220;
      if (local_220 == 0 && *(int *)((longlong)puVar1 + 0x1c) == 0) {
        *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
      }
      else {
        puVar17 = (undefined8 *)(lVar11 + lVar16 + 0x10);
        FUN_140a472a8(puVar17,local_220);
        if (uVar5 != 0) {
          memcpy((void *)*puVar17,puVar12,lVar14 << 3);
        }
      }
    }
    puVar1[4] = local_218;
    puVar1[5] = uStack_210;
    *(int *)(lVar7 + 0x228) = *(int *)(lVar7 + 0x228) + 1;
    FUN_140a31b96(&local_4b0);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_1f8);
    FUN_140a31f9c(local_1a0);
    FUN_147537f4a(&local_3c0);
    FUN_147536460(&local_320);
  }
  if (local_228 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475350d8 FUN_1475350d8 body=52 status=ok
// SIG undefined FUN_1475350d8(void)

undefined4 * FUN_1475350d8(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  FUN_140b56998();
  FUN_147534666(param_1,*param_2,param_3,*(undefined1 *)(param_1 + 0x22c));
  return param_2;
}



// FUNCTION 14753510c FUN_14753510c body=128 status=ok
// SIG undefined FUN_14753510c(void)

void FUN_14753510c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *(longlong *)(param_1 + 0x10) = param_2;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x130) != *(int *)(lVar1 + 0x15c)) {
    lVar3 = lVar1 + 0x160;
    if (*(longlong *)(lVar1 + 0x168) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x168);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x170) - 1U & *(uint *)(param_2 + 0x28)) *
                             4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(lVar1 + 0x128) + (longlong)iVar2 * 0x170;
        if (*(uint *)(*(longlong *)(lVar1 + 0x128) + (longlong)iVar2 * 0x170) ==
            *(uint *)(param_2 + 0x28)) goto LAB_147535126;
        iVar2 = *(int *)(lVar3 + 0x168);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_147535126:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  return;
}



// FUNCTION 14753518c FUN_14753518c body=479 status=ok
// SIG undefined FUN_14753518c(void)

uint FUN_14753518c(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_e8;
  int *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 local_b0 [24];
  undefined1 local_98 [64];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_147552d3c(local_98);
  if (*param_2 == DAT_14cab2074) {
    lVar5 = (**(code **)(*param_1 + 0x2e8))(param_1);
    iVar1 = *(int *)(lVar5 + 0xe8);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0xe0);
      lVar8 = 0;
      local_e8 = param_3 + 0x88;
      bVar7 = 0;
      local_e0 = param_2;
      do {
        lVar2 = *(longlong *)(lVar5 + lVar8);
        if (lVar2 != 0) {
          lVar6 = FUN_140e50756();
          if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
              (*(undefined1 *)(lVar2 + 0xf8) = 0, bVar7 == 0)) && (*(char *)(lVar2 + 0x69) == '\0'))
          {
            FUN_147585bd0(lVar2,local_b0);
            cVar3 = FUN_147537f94(local_b0);
            if (cVar3 == '\0') {
              FUN_147537fe8(&local_d8,local_b0);
              *(undefined8 *)(param_3 + 0x78) = local_d8;
              *(undefined4 *)(param_3 + 0x80) = (undefined4)uStack_d0;
              FUN_1400a241c(local_e8,&local_c8);
              FUN_1447bda9c(CONCAT44(uStack_c4,local_c8),local_c0);
              if (CONCAT44(uStack_c4,local_c8) != 0) {
                FUN_1400020a8();
              }
              *(undefined1 *)(lVar2 + 0xf8) = 1;
              bVar7 = 1;
            }
          }
        }
        lVar8 = lVar8 + 8;
        param_2 = local_e0;
      } while ((longlong)iVar1 * 8 != lVar8);
      goto LAB_1475351f0;
    }
  }
  bVar7 = 0;
LAB_1475351f0:
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_f8 = param_3;
  uVar4 = FUN_14753807c(param_1,param_2,&local_d8,local_98);
  FUN_14753821a(param_1,param_2,local_98,param_3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),(byte)uVar4 | bVar7) & 0xffffff01;
}



// FUNCTION 14753536c FUN_14753536c body=696 status=ok
// SIG undefined FUN_14753536c(void)

void FUN_14753536c(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar10 = *(byte *)(param_5 + 0x24);
  if ((((bVar10 != 0) && (((bVar10 & 1) == 0 || ((*(byte *)(param_4 + 0x58) & 4) == 0)))) &&
      (((bVar10 & 2) == 0 || ((*(byte *)(param_4 + 0x58) & 8) == 0)))) ||
     (*(char *)(param_4 + 0x69) != '\0')) goto LAB_1475353c1;
  local_78 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = FUN_14479d2ce();
  if (param_4 != 0) {
    uVar7 = FUN_14113c6a6();
    plVar8 = (longlong *)FUN_144718840(param_4,uVar7);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = FUN_147540af6(param_1 + 0x128,*(undefined4 *)(param_2 + 0x28),param_2 + 0x28);
      lVar11 = param_4 + 0x2c;
      FUN_147555e20(lVar9 + 0xb8,&local_78,lVar11);
      if ((int)local_78 == -1) {
        param_5 = param_5 + 0x80;
        local_78 = 0;
        uStack_70 = 0;
        local_60 = param_4;
        local_58 = param_5;
        uVar7 = FUN_140ce4600();
        FUN_144a78ede(param_4,uVar7);
        if (param_3 != (undefined8 *)0x0) {
          local_78 = *param_3;
          uStack_70 = param_3[1];
        }
        local_68 = *(undefined1 *)(lVar6 + 0x60);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_147555e20(lVar9 + 0xb8,&local_7c,lVar11);
        if (local_7c != -1) goto LAB_14753560b;
      }
      else {
LAB_14753560b:
        FUN_1457adc9c(param_6,&local_78,lVar11,0);
      }
      *(byte *)(param_7 + 0xe1) = *(byte *)(param_7 + 0xe1) | 2;
    }
    uVar7 = FUN_145a66d90();
    plVar8 = (longlong *)FUN_144718840(param_4,uVar7);
    if (plVar8 != (longlong *)0x0) {
      local_78 = 2;
      uStack_70 = 2;
      (**(code **)(*plVar8 + 0x10))(plVar8,param_7 + 200);
    }
  }
  plVar8 = (longlong *)FUN_1456c5f90(param_4);
  if ((longlong)(int)plVar8[1] != 0) {
    cVar2 = *DAT_14cab2518;
    cVar3 = *(char *)(lVar6 + 0x60);
    plVar1 = (longlong *)(param_7 + 200);
    lVar11 = (longlong)(int)plVar8[1] << 5;
    lVar6 = *plVar8 + 8;
    do {
      if (cVar2 == '\0') {
LAB_1475354b4:
        lVar9 = *(longlong *)(lVar6 + -8);
        if (lVar9 != 0) {
          uVar7 = FUN_145a66d90();
          plVar8 = (longlong *)FUN_144718840(lVar9,uVar7);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,plVar1,lVar6);
          }
        }
      }
      else {
        lVar9 = *(longlong *)(lVar6 + -8);
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0xa0) != '\x02') {
            uVar4 = *(undefined4 *)(lVar9 + 0xa4);
            if ((*(char *)(lVar9 + 0x59) == '\0') ||
               (*(char *)(lVar9 + 0x59) == '\x02' && cVar3 == '\0')) {
              iVar5 = *(int *)(param_7 + 0xd0);
              *(uint *)(param_7 + 0xd0) = iVar5 + 1U;
              if (*(uint *)(param_7 + 0xd4) < iVar5 + 1U) {
                FUN_147541924(plVar1,iVar5);
              }
              bVar10 = (byte)param_5;
              param_5 = (ulonglong)(bVar10 & 0xfe);
              *(ulonglong *)(*plVar1 + (longlong)iVar5 * 8) =
                   (ulonglong)(CONCAT14(bVar10,uVar4) & 0xfeffffffff);
            }
          }
          goto LAB_1475354b4;
        }
      }
      lVar6 = lVar6 + 0x20;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
LAB_1475353c1:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147535626 FUN_147535626 body=308 status=ok
// SIG undefined FUN_147535626(void)

void FUN_147535626(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = FUN_1400a38a4(param_1,*(undefined4 *)(param_2 + 0x28));
  lVar3 = (**(code **)(*param_3 + 0x2e8))(param_3);
  if (lVar3 != 0) {
    lVar4 = FUN_14756e164(lVar3);
    if (lVar4 != 0) {
      FUN_147536490(param_1,0,lVar4,param_4,uVar2,param_5);
    }
    iVar1 = *(int *)(lVar3 + 0xe8);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0xe0);
      lVar5 = 0;
      do {
        FUN_147536490(param_1,0,*(undefined8 *)(lVar4 + lVar5),param_4,uVar2,param_5);
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x80);
      lVar3 = (longlong)*(int *)(lVar3 + 0x88) * 0x30 + lVar4;
      do {
        iVar1 = *(int *)(lVar4 + 0x28);
        if ((longlong)iVar1 != 0) {
          lVar5 = *(longlong *)(lVar4 + 0x20);
          lVar6 = 0;
          do {
            FUN_147536490(param_1,lVar4,*(undefined8 *)(lVar5 + lVar6),param_4,uVar2,param_5);
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar1 * 8 != lVar6);
        }
        lVar4 = lVar4 + 0x30;
      } while (lVar4 != lVar3);
    }
  }
  return;
}



// FUNCTION 14753575a FUN_14753575a body=2289 status=ok
// SIG undefined FUN_14753575a(void)

void FUN_14753575a(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  void *_Src;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint *puVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auStack_248 [32];
  longlong local_228;
  byte local_212;
  byte local_211;
  longlong *local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  uint local_1ec;
  longlong local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  code *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint local_16c;
  undefined4 local_168;
  int iStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  undefined4 local_78;
  int iStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  int local_68;
  int iStack_64;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(byte *)(param_4 + 0xe1) = *(byte *)(param_4 + 0xe1) | 1;
  plVar10 = (longlong *)(param_2 + 0x98);
  uVar15 = param_2 + 0xa8;
  local_1a8 = 0x100000000;
  local_198 = &DAT_ffffffff;
  iStack_190 = 0;
  local_208 = param_1;
  local_200 = param_3;
  local_1f8 = param_2;
  uStack_1a0 = uVar15;
  if (*(int *)(param_2 + 0xc0) == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_1a8);
    iVar14 = *(int *)(param_2 + 0xc0);
  }
  uStack_138 = CONCAT44(uStack_18c,iStack_190);
  local_140 = local_198;
  puVar3 = local_140;
  uStack_150 = (undefined4)local_1a8;
  uStack_14c = local_1a8._4_4_;
  uStack_148 = (undefined4)uStack_1a0;
  uStack_144 = uStack_1a0._4_4_;
  local_140._4_4_ = (int)((ulonglong)local_198 >> 0x20);
  iVar17 = local_140._4_4_;
  local_158 = plVar10;
  if ((local_140._4_4_ != iVar14) || (local_140 = puVar3, uStack_1a0 != uVar15)) {
    do {
      local_140 = puVar3;
      lVar6 = FUN_1400a4c08(*local_158 + (longlong)iVar17 * 0x100 + 8);
      lVar13 = local_208;
      if (lVar6 != 0) {
        FUN_140b56998(local_208,&local_1a8,lVar6);
        FUN_147534666(lVar13,local_1a8 & 0xffffffff,lVar6,*(undefined1 *)(lVar13 + 0x22c));
      }
      local_140 = (undefined1 *)CONCAT44(local_140._4_4_,(uint)local_140 & ~uStack_14c);
      FUN_1449c0562(&uStack_150);
      iVar17 = local_140._4_4_;
      puVar3 = local_140;
    } while (local_158 != plVar10 ||
             (CONCAT44(uStack_144,uStack_148) != uVar15 || local_140._4_4_ != iVar14));
  }
  lVar13 = local_1f8;
  local_1c8 = local_1f8 + 0x18;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147552a7a(local_1c8,&local_78,*(undefined8 *)(local_200 + 4));
  if ((local_68 != -1) || (iStack_64 == 0)) {
    local_1d0 = local_200 + 4;
    local_1d8 = local_208 + 0x160;
    local_210 = (longlong *)(param_4 + 200);
    uVar15 = 0;
    local_1e8 = param_4;
    do {
      local_158 = (longlong *)CONCAT44(iStack_74,local_78);
      uStack_150 = uStack_70;
      uStack_14c = uStack_6c;
      cVar4 = FUN_14055ad78(&local_158,local_1d0);
      if (cVar4 == '\0') break;
      FUN_1400ab8bc(&local_90,local_1c8,CONCAT44(iStack_64,local_68));
      local_a8 = local_90;
      uStack_a4 = uStack_8c;
      uStack_a0 = uStack_88;
      uStack_9c = uStack_84;
      lVar23 = CONCAT44(uStack_8c,local_90);
      local_98 = local_80;
      lVar6 = CONCAT44(uStack_8c,local_90);
      uVar12 = CONCAT44(uStack_84,uStack_88);
      local_1e0 = uVar15;
      if (uVar12 != 0 || (int)local_80 != 0) {
        local_1ec = (int)uVar15 - 1;
        uVar9 = local_80;
        do {
          if ((longlong)*(int *)(uVar12 + 0x1c) == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (longlong)
                    *(int *)(*(longlong *)(lVar6 + 0x40) + (longlong)*(int *)(uVar12 + 0x1c) * 0xc)
                    * 0x30 + *(longlong *)(lVar6 + 0x50);
          }
          lVar18 = (longlong)(int)uVar9 * 0x30;
          local_ac = *(uint *)(lVar6 + lVar18);
          lVar7 = FUN_1400d12c6(lVar13,&local_ac);
          lVar8 = FUN_1400a4c08(lVar7);
          if (lVar8 != 0) {
            FUN_147536c00(local_200,&local_158,lVar7,local_ac);
            bVar1 = uStack_138._4_1_ | *(byte *)(lVar6 + lVar18 + 4);
            uStack_138._0_5_ = CONCAT14(bVar1,(undefined4)uStack_138);
            local_168 = local_78;
            iStack_164 = iStack_74;
            uStack_160 = uStack_70;
            uStack_15c = uStack_6c;
            FUN_147536d96(&local_158,&local_168);
            lVar13 = local_208;
            FUN_140b56998(local_208,&local_16c,lVar8);
            lVar13 = *(longlong *)(lVar13 + 0xa0);
            lVar6 = (longlong)(int)local_16c * 0x30;
            local_1a8 = *(ulonglong *)(lVar13 + lVar6);
            uStack_1a0 = ((ulonglong *)(lVar13 + lVar6))[1];
            local_198 = (undefined1 *)0x0;
            iStack_190 = *(int *)(lVar13 + 0x18 + lVar6);
            lVar18 = (longlong)iStack_190;
            _Src = *(void **)(lVar13 + 0x10 + lVar6);
            if (lVar18 == 0) {
              uStack_18c = 0;
            }
            else {
              FUN_140a472a8(&local_198,iStack_190,0);
              memcpy(local_198,_Src,lVar18 << 3);
            }
            param_4 = local_1e8;
            lVar18 = local_208;
            lVar13 = lVar13 + lVar6;
            local_188 = *(undefined4 *)(lVar13 + 0x20);
            uStack_184 = *(undefined4 *)(lVar13 + 0x24);
            uStack_180 = *(undefined4 *)(lVar13 + 0x28);
            uStack_17c = *(uint *)(lVar13 + 0x2c);
            if (*(int *)(local_208 + 0x130) != *(int *)(local_208 + 0x15c)) {
              lVar13 = *(longlong *)(local_208 + 0x168);
              if (*(longlong *)(local_208 + 0x168) == 0) {
                lVar13 = local_1d8;
              }
              iVar14 = *(int *)(lVar13 + (ulonglong)(*(int *)(local_208 + 0x170) - 1U & local_16c) *
                                         4);
              if (iVar14 != -1) {
                do {
                  if (*(uint *)(*(longlong *)(local_208 + 0x128) + (longlong)iVar14 * 0x170) ==
                      local_16c) {
                    local_228 = local_1e8;
                    FUN_147535626(local_208,&local_1a8,lVar8,&local_158);
                    break;
                  }
                  iVar14 = *(int *)((longlong)iVar14 * 0x170 + *(longlong *)(local_208 + 0x128) +
                                   0x168);
                } while (iVar14 != -1);
              }
            }
            uVar15 = uStack_50;
            *(byte *)(param_4 + 0xe0) =
                 *(byte *)(param_4 + 0xe0) |
                 *(byte *)(*(longlong *)(lVar18 + 0xa0) + 0x2c + (longlong)(int)local_16c * 0x30) &
                 1;
            *(byte *)(param_4 + 0xe1) = *(byte *)(param_4 + 0xe1) | uStack_17c._2_1_;
            uVar5 = (uint)uStack_50;
            uVar22 = 0;
            if (0 < (int)(uint)uStack_50) {
              uVar22 = 0;
              uVar12 = uStack_50 & 0xffffffff;
              uVar11 = (uint)uStack_50;
              do {
                uVar11 = uVar11 >> 1;
                uVar20 = (uint)uVar12;
                if (*(uint *)(local_58 + (ulonglong)(uVar11 + uVar22) * 0x10) < local_ac) {
                  uVar22 = uVar11 + uVar22 + (uVar20 & 1);
                }
                uVar12 = (ulonglong)uVar11;
              } while (1 < uVar20);
            }
            if ((((int)uVar22 < (int)(uint)uStack_50) &&
                (*(uint *)(local_58 + (ulonglong)uVar22 * 0x10) <= local_ac)) &&
               (puVar16 = (uint *)((longlong)(int)uVar22 * 0x10 + local_58 + 4),
               puVar16 != (uint *)0x0 && uVar22 != 0xffffffff)) {
              uVar5 = *puVar16;
            }
            else {
              uVar22 = 0;
              if ((int)(uint)uStack_50 < 1) {
LAB_147535da1:
                uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + 1);
                if (uStack_50._4_4_ == uVar5) {
                  FUN_1432d35f6(&local_58,uVar15 & 0xffffffff);
                }
                lVar13 = (ulonglong)uVar22 * 0x10;
                memmove((void *)(local_58 + lVar13 + 0x10),(void *)(local_58 + lVar13),
                        (ulonglong)(uVar5 - uVar22) << 4);
                puVar19 = (uint *)(lVar13 + local_58);
              }
              else {
                uVar22 = 0;
                uVar11 = (uint)uStack_50;
                do {
                  uVar20 = (uVar11 >> 1) + uVar22;
                  if (*(uint *)(local_58 + (ulonglong)uVar20 * 0x10) < local_ac) {
                    uVar22 = uVar20 + (uVar11 & 1);
                  }
                  bVar2 = 1 < uVar11;
                  uVar11 = uVar11 >> 1;
                } while (bVar2);
                if (((int)(uint)uStack_50 <= (int)uVar22) ||
                   (local_ac < *(uint *)(local_58 + (ulonglong)uVar22 * 0x10))) goto LAB_147535da1;
                puVar19 = (uint *)(local_58 + (ulonglong)uVar22 * 0x10);
                FUN_1432d2b7c(puVar19,1);
              }
              *puVar19 = local_ac;
              puVar16 = puVar19 + 1;
              puVar19[1] = 0xffffffff;
              *(undefined1 *)(puVar19 + 3) = 0;
              uVar5 = 0xffffffff;
            }
            if (((uStack_17c & 0x1000000) != 0) && (uVar5 == 0xffffffff || uVar5 != local_1ec)) {
              iVar17 = iStack_74 +
                       *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_78 == '\0') * 4);
              iVar14 = *(int *)(param_4 + 0xd0);
              *(uint *)(param_4 + 0xd0) = iVar14 + 1U;
              if (*(uint *)(param_4 + 0xd4) < iVar14 + 1U) {
                FUN_147541924(local_210,iVar14);
              }
              *(ulonglong *)(*local_210 + (longlong)iVar14 * 8) =
                   (ulonglong)(CONCAT14(local_211,iVar17) & 0xfeffffffff);
              local_211 = local_211 & 0xfe;
            }
            if ((uStack_17c._3_1_ & 2) != 0) {
              puVar16[1] = uStack_6c +
                           *(int *)(&DAT_14a46e600 + (ulonglong)((char)uStack_70 == '\x01') * 4);
              *(undefined1 *)(puVar16 + 2) = 1;
            }
            if ((*(int *)(lVar7 + 0x38) != 0) && ((uStack_17c & 0x3000000) != 0)) {
              local_1c0 = param_4;
              local_1b0 = &local_1c0;
              local_1b8 = FUN_1432d36fc;
              FUN_14755ac52(lVar7 + 0x20,iStack_74,uStack_6c,&local_1b8);
            }
            uVar15 = local_1e0;
            *puVar16 = (uint)local_1e0;
            if (local_198 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_147537f4a(&local_158);
            lVar13 = local_1f8;
          }
          FUN_1400ab81a(&local_a8);
          lVar6 = CONCAT44(uStack_a4,local_a8);
          uVar12 = CONCAT44(uStack_9c,uStack_a0);
          uVar9 = local_98 & 0xffffffff;
        } while ((lVar6 != lVar23 || uVar12 != 0) || (int)local_98 != 0);
      }
      lVar13 = local_58;
      lVar6 = (longlong)(int)(uint)uStack_50;
      bVar1 = local_212;
      if (lVar6 != 0) {
        lVar23 = 0;
        plVar10 = local_210;
        uVar9 = (ulonglong)local_212;
        do {
          uVar21 = uVar9;
          if ((*(int *)(lVar13 + 4 + lVar23) == (int)uVar15 + -1) &&
             (*(char *)(lVar13 + 0xc + lVar23) == '\x01')) {
            uVar5 = *(uint *)(lVar13 + 8 + lVar23);
            iVar14 = *(int *)(param_4 + 0xd0);
            *(uint *)(param_4 + 0xd0) = iVar14 + 1U;
            if (*(uint *)(param_4 + 0xd4) < iVar14 + 1U) {
              FUN_147541924(plVar10,iVar14);
              plVar10 = local_210;
            }
            uVar21 = uVar9 & 0xfffffffffffffffe;
            uVar12 = (uVar9 & 0xfe) << 0x20 | (ulonglong)uVar5;
            *(ulonglong *)(*plVar10 + (longlong)iVar14 * 8) = uVar12;
            if (*(char *)(lVar13 + 0xc + lVar23) == '\x01') {
              *(undefined1 *)(lVar13 + 0xc + lVar23) = 0;
            }
          }
          lVar23 = lVar23 + 0x10;
          uVar9 = uVar21;
          bVar1 = (byte)uVar21;
        } while (lVar6 * 0x10 != lVar23);
      }
      local_212 = bVar1;
      FUN_14055b6c8(&local_78,CONCAT71((int7)(uVar12 >> 8),1));
      uVar15 = (ulonglong)((int)local_1e0 + 1);
      lVar13 = local_1f8;
    } while ((local_68 != -1) || (iStack_64 == 0));
  }
  FUN_1432d2b7c(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14753604c FUN_14753604c body=896 status=ok
// SIG undefined FUN_14753604c(void)

void FUN_14753604c(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong local_118;
  longlong lStack_110;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int iStack_b4;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(byte *)(param_4 + 0xe1) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
  }
  local_140 = FUN_14754234c(param_1 + 0x178,*(undefined4 *)(param_2 + 0x28));
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  lStack_90 = 0;
  FUN_147534154(local_140,&local_98);
  FUN_147533aa4(&local_98);
  *(byte *)(param_4 + 0xe1) = *(byte *)(param_4 + 0xe1) | 4;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_147556536(&local_c8,param_4);
  if ((local_b8 != -1) || (iStack_b4 == 0)) {
    do {
      bVar17 = (longlong)uStack_a0 < 0;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      if (bVar17) {
        FUN_147542586(&local_a8);
      }
      local_d8 = local_c8;
      uStack_d4 = uStack_c4;
      uStack_d0 = uStack_c0;
      uStack_cc = uStack_bc;
      FUN_1475425b6(&local_98,param_4,CONCAT44(iStack_b4,local_b8));
      lVar10 = local_98;
      local_118 = local_98;
      lStack_110 = lStack_90;
      local_108 = local_88;
      lVar15 = local_a8;
      uVar16 = local_88;
      if (lStack_90 != 0 || (int)local_88 != 0) {
        do {
          uVar9 = uStack_a0;
          if ((longlong)*(int *)(lStack_110 + 0x1c) == -1) {
            lVar14 = 0;
          }
          else {
            lVar14 = (longlong)
                     *(int *)(*(longlong *)(local_118 + 0x40) +
                             (longlong)*(int *)(lStack_110 + 0x1c) * 0xc) * 0x24 +
                     *(longlong *)(local_118 + 0x50);
          }
          lVar13 = (longlong)(int)uStack_a0;
          uVar11 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar11);
          if (uStack_a0._4_4_ < uVar11) {
            FUN_1475426aa(&local_a8,uVar9 & 0xffffffff);
          }
          lVar15 = local_a8;
          puVar12 = (undefined4 *)((longlong)(int)uVar16 * 0x24 + lVar14);
          *(undefined4 *)(local_a8 + 0x20 + lVar13 * 0x24) = puVar12[8];
          uVar2 = *puVar12;
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar5 = puVar12[3];
          uVar6 = puVar12[5];
          uVar7 = puVar12[6];
          uVar8 = puVar12[7];
          puVar1 = (undefined4 *)(local_a8 + 0x10 + lVar13 * 0x24);
          *puVar1 = puVar12[4];
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          puVar1 = (undefined4 *)(local_a8 + lVar13 * 0x24);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_147536e40(&local_118);
          uVar16 = local_108 & 0xffffffff;
        } while ((local_118 != lVar10 || lStack_110 != 0) || (int)local_108 != 0);
      }
      FUN_14754273e(lVar15,uStack_a0 & 0xffffffff);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      lStack_90 = 0;
      FUN_147536ee2(&local_a8,&local_98);
      FUN_147552a7a(param_3 + 0x18,&local_118,CONCAT44(uStack_d4,local_d8));
      FUN_1400ab8bc(&local_f0,param_3 + 0x18,local_108);
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      lStack_110 = 0;
      local_138 = local_f0;
      uStack_134 = uStack_ec;
      uStack_130 = uStack_e8;
      uStack_12c = uStack_e4;
      local_128 = local_e0;
      FUN_14753735c(&local_a8,&local_138,&local_118);
      FUN_147554cb4(local_140,&local_d8,&local_98,&local_118);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      FUN_1475376a4(&local_98);
      FUN_14055b6c8(&local_c8,1);
    } while ((local_b8 != -1) || (iStack_b4 == 0));
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475363f2 FUN_1475363f2 body=109 status=ok
// SIG undefined FUN_1475363f2(void)

void FUN_1475363f2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147541924(param_1,iVar1);
    }
    FUN_147542293((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1475422b0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147536460 FUN_147536460 body=47 status=ok
// SIG undefined FUN_147536460(void)

void FUN_147536460(longlong param_1)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_14753e36a(param_1 + 0x60);
  FUN_14753e3b6(param_1);
  return;
}



// FUNCTION 147536490 FUN_147536490 body=1902 status=ok
// SIG undefined FUN_147536490(void)

void FUN_147536490(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 auStack_258 [32];
  longlong *local_238;
  undefined8 local_230;
  code *local_228;
  undefined8 *local_220;
  ulonglong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e4;
  longlong local_1e0;
  undefined4 local_1d0;
  undefined1 local_1cc;
  byte local_1cb;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  int local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined8 *local_148;
  int local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_60;
  
  lVar22 = param_6;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  bVar4 = *(byte *)(param_4 + 0x24);
  if ((((bVar4 != 0) && (((bVar4 & 1) == 0 || ((*(byte *)(param_3 + 0x58) & 4) == 0)))) &&
      (((bVar4 & 2) == 0 || ((*(byte *)(param_3 + 0x58) & 8) == 0)))) ||
     (*(char *)(param_3 + 0x69) != '\0')) goto LAB_1475364f0;
  local_1a8 = 0;
  lStack_1a0 = 0;
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_198 = 0;
  local_190 = 0x80000000;
  local_18c = 0;
  local_230 = param_1;
  FUN_1475847e0(param_3);
  plVar11 = (longlong *)FUN_1456c5f90(param_3);
  if (*(longlong *)(lVar22 + 0xc0) != 0) {
    FUN_147554388(&local_160);
    if (param_2 != (undefined4 *)0x0) {
      puVar12 = (undefined4 *)FUN_147554508(&local_160);
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      uVar7 = param_2[3];
      *puVar12 = *param_2;
      puVar12[1] = uVar9;
      puVar12[2] = uVar10;
      puVar12[3] = uVar7;
    }
    if (param_3 == 0) {
LAB_1475365bd:
      if ((longlong)(int)plVar11[1] != 0) {
        plVar21 = (longlong *)*plVar11;
        plVar23 = plVar21 + (longlong)(int)plVar11[1] * 4;
        puVar1 = (ulonglong *)(param_4 + 0x14);
        plVar14 = (longlong *)(param_4 + 0x1c);
        local_238 = plVar11;
        do {
          lVar22 = *plVar21;
          if (lVar22 != 0) {
            if ((longlong)*(int *)(param_3 + 0x78) != 0) {
              lVar18 = 0;
              do {
                if (*(int *)(*(longlong *)(param_3 + 0x70) + lVar18) == *(int *)(lVar22 + 0xb8))
                goto LAB_1475366d2;
                lVar18 = lVar18 + 4;
              } while ((longlong)*(int *)(param_3 + 0x78) * 4 != lVar18);
            }
            uVar13 = FUN_14055f060();
            plVar15 = (longlong *)FUN_144718840(lVar22,uVar13);
            if ((plVar15 != (longlong *)0x0) &&
               (((cVar8 = *(char *)puVar1, cVar8 == '\x02' || (*(char *)plVar14 == '\x02')) ||
                ((*(int *)(param_4 + 0x18) <= *(int *)(param_4 + 0x20) &&
                 ((*(int *)(param_4 + 0x18) != *(int *)(param_4 + 0x20) ||
                  (*(char *)plVar14 != '\0' && cVar8 != '\0')))))))) {
              puVar2 = (ulonglong *)(plVar21 + 1);
              cVar5 = (char)*puVar2;
              if ((cVar5 == '\x02') ||
                 (((char)plVar21[2] == '\x02' ||
                  ((*(int *)((longlong)plVar21 + 0xc) <= *(int *)((longlong)plVar21 + 0x14) &&
                   ((*(int *)((longlong)plVar21 + 0xc) != *(int *)((longlong)plVar21 + 0x14) ||
                    ((char)plVar21[2] != '\0' && cVar5 != '\0')))))))) {
                plVar3 = plVar21 + 2;
                plVar19 = plVar3;
                if ((*(char *)plVar14 != '\x02') && (plVar19 = plVar14, (char)*plVar3 != '\x02')) {
                  plVar11 = local_238;
                  if (((*(int *)((longlong)plVar21 + 0x14) <= *(int *)(param_4 + 0x20)) &&
                      (plVar19 = plVar3,
                      *(int *)(param_4 + 0x20) <= *(int *)((longlong)plVar21 + 0x14))) &&
                     (*(char *)plVar14 == '\0')) {
                    plVar19 = plVar14;
                  }
                }
                puVar20 = puVar2;
                if ((cVar8 != '\x02') && (puVar20 = puVar1, cVar5 != '\x02')) {
                  if ((*(int *)(param_4 + 0x18) <= *(int *)((longlong)plVar21 + 0xc)) &&
                     ((puVar20 = puVar2,
                      *(int *)((longlong)plVar21 + 0xc) <= *(int *)(param_4 + 0x18) &&
                      (cVar8 == '\0')))) {
                    puVar20 = puVar1;
                  }
                }
                local_218 = *puVar20;
                local_210 = *plVar19;
                if (((char)local_218 != '\x02') && ((char)local_210 != '\x02')) {
                  iVar17 = (int)(local_218 >> 0x20);
                  iVar16 = (int)((ulonglong)local_210 >> 0x20);
                  if ((iVar16 < iVar17) ||
                     ((iVar17 == iVar16 && (((char)local_218 == '\0' || ((char)local_210 == '\0'))))
                     )) goto LAB_1475366d2;
                }
                FUN_1475376e2(&local_208,&local_1c8);
                local_1d0 = (undefined4)plVar21[3];
                local_1cc = *(undefined1 *)((longlong)plVar21 + 0x1c);
                local_1cb = *(byte *)(param_3 + 0x58) >> 2 & 3 | local_1cb & 0xfc;
                lVar22 = FUN_147571e62(param_3,*plVar21,1);
                if (lVar22 == 0) {
                  local_208 = 0;
                  uStack_200 = 0;
                  uStack_1f8 = 0;
                  uStack_1e8 = 0;
                  if (iStack_1e4 < 0) {
                    FUN_1446f8c06(&local_1f0,0);
                  }
                  if ((undefined2 *)CONCAT44(uStack_1ec,local_1f0) != (undefined2 *)0x0) {
                    *(undefined2 *)CONCAT44(uStack_1ec,local_1f0) = 0;
                  }
                }
                else {
                  FUN_1400bbfae(&local_180,lVar22);
                  uStack_200 = CONCAT44(uStack_17c,local_180);
                  uStack_1f8 = CONCAT44(uStack_174,uStack_178);
                  if (CONCAT44(uStack_1ec,local_1f0) != 0) {
                    FUN_1400020a8();
                  }
                  local_1f0 = local_170;
                  uStack_1ec = uStack_16c;
                  uStack_1e8 = uStack_168;
                  iStack_1e4 = iStack_164;
                  cVar8 = (*(code *)PTR_FUN_14c758760)();
                  if (cVar8 != '\0') {
                    uVar6 = *(uint *)(lVar22 + 0xc);
                    if ((int)uVar6 < DAT_14c9647dc) {
                      lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                    }
                    else {
                      lVar18 = 0;
                    }
                    if ((*(uint *)(lVar18 + 8) & 0x8400000) != 0) {
                      local_208 = 0;
                      goto LAB_147536890;
                    }
                  }
                  FUN_14485c47a(&local_208,lVar22);
                }
LAB_147536890:
                plVar11 = local_238;
                cVar8 = (**(code **)(*plVar15 + 0x20))(plVar15,&local_218,&local_208,&local_160);
                if (cVar8 == '\0') {
                  uVar9 = FUN_14755452a(&local_160,*plVar21,0);
                  uVar10 = FUN_1475545d8(&local_160,&local_208);
                  plVar11 = local_238;
                  FUN_147554828(&local_160,&local_218,uVar9,uVar10);
                }
                if (local_1e0 != 0) {
                  FUN_1400020a8();
                }
                if (CONCAT44(uStack_1ec,local_1f0) != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
LAB_1475366d2:
          plVar21 = plVar21 + 4;
        } while (plVar21 != plVar23);
      }
    }
    else {
      uVar13 = FUN_14055f060();
      plVar14 = (longlong *)FUN_144718840(param_3,uVar13);
      if (plVar14 == (longlong *)0x0) goto LAB_1475365bd;
      FUN_1475376e2(&local_208,&local_1c8);
      local_1cb = *(byte *)(param_3 + 0x58) >> 2 & 3 | local_1cb & 0xfc;
      lVar22 = *(longlong *)(param_3 + 0x60);
      if ((lVar22 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar22);
LAB_1475369ae:
        FUN_1400bbfae(&local_180,lVar22);
        uStack_200 = CONCAT44(uStack_17c,local_180);
        uStack_1f8 = CONCAT44(uStack_174,uStack_178);
        if (CONCAT44(uStack_1ec,local_1f0) != 0) {
          FUN_1400020a8();
        }
        local_1f0 = local_170;
        uStack_1ec = uStack_16c;
        uStack_1e8 = uStack_168;
        iStack_1e4 = iStack_164;
        cVar8 = (*(code *)PTR_FUN_14c758760)();
        if (cVar8 != '\0') {
          uVar6 = *(uint *)(lVar22 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          if ((*(uint *)(lVar18 + 8) & 0x8400000) != 0) {
            local_208 = 0;
            goto LAB_147536a79;
          }
        }
        FUN_14485c47a(&local_208,lVar22);
      }
      else {
        if (lVar22 != 0) goto LAB_1475369ae;
        local_208 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_1e8 = 0;
        if (iStack_1e4 < 0) {
          FUN_1446f8c06(&local_1f0,0);
        }
        if ((undefined2 *)CONCAT44(uStack_1ec,local_1f0) != (undefined2 *)0x0) {
          *(undefined2 *)CONCAT44(uStack_1ec,local_1f0) = 0;
        }
      }
LAB_147536a79:
      (**(code **)(*plVar14 + 0x20))(plVar14,param_4 + 0x14,&local_208,&local_160);
      if (local_1e0 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_1ec,local_1f0) != 0) {
        FUN_1400020a8();
      }
    }
    FUN_147554418(&local_160);
  }
  if (((param_5 != 0) && (FUN_147555e20(param_5 + 0xb8,&local_180,param_3 + 0x2c), local_180 != -1))
     && ((longlong)(int)plVar11[1] != 0)) {
    lVar22 = *plVar11;
    lVar18 = (longlong)(int)plVar11[1] * 0x20 + lVar22;
    do {
      FUN_14087ad3e(param_4 + 0x28,&local_208);
      local_160 = local_230;
      local_148 = &param_6;
      local_140 = local_180;
      local_138 = param_5;
      local_228 = FUN_1432d3744;
      local_220 = &local_160;
      local_158 = lVar22;
      local_150 = param_4;
      local_130 = param_3;
      FUN_1475377a4(param_4,lVar22 + 8,&local_228);
      if (uStack_1f8 != 0) {
        FUN_1400020a8();
      }
      lVar22 = lVar22 + 0x20;
    } while (lVar22 != lVar18);
  }
  if (lStack_1a0 != 0) {
    FUN_1400020a8();
  }
  if (lStack_1b0 != 0) {
    FUN_1400020a8();
  }
LAB_1475364f0:
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147536c00 FUN_147536c00 body=405 status=ok
// SIG undefined FUN_147536c00(void)

undefined4 * FUN_147536c00(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined5 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined2 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7a) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined ***)(param_2 + 0x20) = &PTR_FUN_14a46d240;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  FUN_1475388d6(0,&local_b0);
  *(ulonglong *)((longlong)param_2 + 0x1d) = CONCAT53(uStack_90,uStack_94._1_3_);
  param_2[4] = local_a0;
  param_2[5] = uStack_9c;
  param_2[6] = uStack_98;
  param_2[7] = uStack_94;
  *param_2 = local_b0;
  param_2[1] = uStack_ac;
  param_2[2] = uStack_a8;
  param_2[3] = uStack_a4;
  *(undefined8 *)(param_2 + 10) = local_88;
  param_2[0xc] = local_80;
  FUN_1400a241c(param_2 + 0xe,local_78);
  if (&local_b0 == param_2) {
    *(undefined1 *)(param_2 + 0x16) = local_58;
  }
  else {
    if (*(longlong *)(param_2 + 0x12) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_2 + 0x12) = local_68;
    local_68 = 0;
    param_2[0x14] = (undefined4)local_60;
    param_2[0x15] = local_60._4_4_;
    local_60 = 0;
    *(undefined1 *)(param_2 + 0x16) = local_58;
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_2 + 0x18) = local_50;
    local_50 = 0;
    param_2[0x1a] = (undefined4)local_48;
    param_2[0x1b] = local_48._4_4_;
    local_48 = 0;
  }
  *(undefined1 *)(param_2 + 0x1c) = local_40;
  param_2[0x1e] = local_38;
  FUN_147537f4a();
  *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + 0x94);
  param_2[0x22] = *(undefined4 *)(param_1 + 0x88);
  param_2[0x23] = uVar1;
  param_2[0x24] = uVar2;
  param_2[0x25] = uVar3;
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147536d96 FUN_147536d96 body=169 status=ok
// SIG undefined FUN_147536d96(void)

void FUN_147536d96(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  char local_30 [4];
  int local_2c;
  float local_28;
  char local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  FUN_14755820a(param_1 + 0x28,local_30,param_2);
  lVar4 = 2;
  if (local_30[0] != '\x02') {
    lVar4 = ((ulonglong)((uint)(local_28 != 0.0 || local_30[0] != '\x01') + local_2c) << 0x20) + 1;
  }
  local_20 = local_20 << 0x20;
  if (local_24 == '\x02') {
    local_20 = 2;
  }
  *(longlong *)(param_1 + 0x14) = lVar4;
  *(longlong *)(param_1 + 0x1c) = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147536e40 FUN_147536e40 body=161 status=ok
// SIG undefined FUN_147536e40(void)

void FUN_147536e40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar3;
  lVar1 = param_1[1];
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if ((longlong)*(int *)(lVar1 + 0x1c) == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(longlong *)(*param_1 + 0x40) + 4 + (longlong)*(int *)(lVar1 + 0x1c) * 0xc);
    }
    if ((-1 < iVar3) && (iVar3 < iVar4)) break;
    if ((*(int *)(lVar1 + 0x10) == -1) && (*(int *)(lVar1 + 0x14) != 0)) {
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    lVar2 = *param_1;
    iVar3 = (int)*(longlong *)(lVar1 + 0x10);
    if (iVar3 != -1) {
      lVar2 = (*(longlong *)(lVar1 + 0x10) >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar3 * 0xc) * 0x20 +
              *(longlong *)(lVar2 + 0x30);
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = 0;
    lVar1 = lVar2;
  }
  return;
}



// FUNCTION 147536ee2 FUN_147536ee2 body=1146 status=ok
// SIG undefined FUN_147536ee2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147536ee2(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  if ((int)param_1[1] == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab2558) && (FUN_144b3d300(&DAT_14cab2558), DAT_14cab2558 == -1)) {
    DAT_14cab2548 = 0;
    _DAT_14cab2550 = 0;
    atexit((_func_5014 *)&LAB_1432d2405);
    _Init_thread_footer(&DAT_14cab2558);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab2570) && (FUN_144b3d300(&DAT_14cab2570), DAT_14cab2570 == -1)) {
    DAT_14cab2560 = 0;
    _DAT_14cab2568 = 0;
    atexit((_func_5014 *)&LAB_1432d2416);
    _Init_thread_footer(&DAT_14cab2570);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab2588) && (FUN_144b3d300(&DAT_14cab2588), DAT_14cab2588 == -1)) {
    DAT_14cab2578 = 0;
    _DAT_14cab2580 = 0;
    atexit((_func_5014 *)&LAB_1432d2427);
    _Init_thread_footer(&DAT_14cab2588);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab25a0) && (FUN_144b3d300(&DAT_14cab25a0), DAT_14cab25a0 == -1)) {
    DAT_14cab2590 = 0;
    _DAT_14cab2598 = 0;
    atexit((_func_5014 *)&LAB_1432d2438);
    _Init_thread_footer(&DAT_14cab25a0);
  }
  bVar13 = (longlong)_DAT_14cab2550 < 0;
  _DAT_14cab2550 = _DAT_14cab2550 & 0xffffffff00000000;
  if (bVar13) {
    FUN_147540fba(&DAT_14cab2548);
  }
  bVar13 = (longlong)_DAT_14cab2568 < 0;
  _DAT_14cab2568 = _DAT_14cab2568 & 0xffffffff00000000;
  if (bVar13) {
    FUN_147540fea(&DAT_14cab2560);
  }
  bVar13 = (longlong)_DAT_14cab2580 < 0;
  _DAT_14cab2580 = _DAT_14cab2580 & 0xffffffff00000000;
  if (bVar13) {
    FUN_147540fba(&DAT_14cab2578);
  }
  bVar13 = (longlong)_DAT_14cab2598 < 0;
  _DAT_14cab2598 = _DAT_14cab2598 & 0xffffffff00000000;
  if (bVar13) {
    FUN_147540fea(&DAT_14cab2590);
  }
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar11 = *(longlong *)(*param_1 + 8);
    iVar5 = 0;
    do {
      lVar10 = (longlong)iVar5;
      lVar9 = *param_1 + lVar10 * 0x24;
      if (*(longlong *)(lVar9 + 8) != lVar11) {
        FUN_147533d35(param_2);
        lVar11 = *(longlong *)(lVar9 + 8);
        iVar2 = (int)param_1[1];
      }
      lVar4 = *(longlong *)(lVar9 + 0x14);
      if (iVar5 < iVar2) {
        lVar12 = lVar10 * 0x24 + 0x1c;
        sVar7 = 0;
        do {
          uVar1 = _DAT_14cab2568;
          lVar6 = *param_1;
          if (*(longlong *)(lVar6 + -8 + lVar12) != lVar4) break;
          if (*(short *)(lVar6 + lVar12) != -1) {
            if (*(char *)(lVar9 + 0x10) == '\x01') {
              lVar8 = (longlong)DAT_14cab2568;
              uVar3 = DAT_14cab2568 + 1;
              _DAT_14cab2568 = CONCAT44(DAT_14cab256c,uVar3);
              if (DAT_14cab256c < uVar3) {
                FUN_147540f34(&DAT_14cab2560,uVar1 & 0xffffffff);
              }
              *(undefined8 *)(DAT_14cab2560 + lVar8 * 8) = *(undefined8 *)(lVar6 + lVar12);
              lVar6 = *param_1;
            }
            uVar1 = _DAT_14cab2598;
            lVar8 = (longlong)DAT_14cab2598;
            uVar3 = DAT_14cab2598 + 1;
            _DAT_14cab2598 = CONCAT44(DAT_14cab259c,uVar3);
            if (DAT_14cab259c < uVar3) {
              FUN_147540f34(&DAT_14cab2590,uVar1 & 0xffffffff);
            }
            sVar7 = sVar7 + 1;
            *(undefined8 *)(DAT_14cab2590 + lVar8 * 8) = *(undefined8 *)(lVar6 + lVar12);
            iVar2 = (int)param_1[1];
          }
          lVar10 = lVar10 + 1;
          iVar5 = iVar5 + 1;
          lVar12 = lVar12 + 0x24;
        } while (lVar10 < iVar2);
        lVar4 = *(longlong *)(lVar9 + 0x14);
      }
      else {
        sVar7 = 0;
      }
      uVar1 = _DAT_14cab2550;
      if (*(char *)(lVar9 + 0x10) == '\x01') {
        lVar9 = (longlong)DAT_14cab2550;
        uVar3 = DAT_14cab2550 + 1;
        _DAT_14cab2550 = CONCAT44(DAT_14cab2554,uVar3);
        if (DAT_14cab2554 < uVar3) {
          FUN_147540ea0(&DAT_14cab2548,uVar1 & 0xffffffff);
        }
        lVar10 = DAT_14cab2548;
        *(longlong *)(DAT_14cab2548 + lVar9 * 0xc) = lVar4;
        *(short *)(lVar10 + 8 + lVar9 * 0xc) = sVar7;
      }
      uVar1 = _DAT_14cab2580;
      lVar9 = (longlong)DAT_14cab2580;
      uVar3 = DAT_14cab2580 + 1;
      _DAT_14cab2580 = CONCAT44(DAT_14cab2584,uVar3);
      if (DAT_14cab2584 < uVar3) {
        FUN_147540ea0(&DAT_14cab2578,uVar1 & 0xffffffff);
      }
      lVar10 = DAT_14cab2578;
      *(longlong *)(DAT_14cab2578 + lVar9 * 0xc) = lVar4;
      *(short *)(lVar10 + 8 + lVar9 * 0xc) = sVar7;
      iVar2 = (int)param_1[1];
    } while (iVar5 < iVar2);
  }
  FUN_147533d35(param_2);
  return;
}



// FUNCTION 14753735c FUN_14753735c body=838 status=ok
// SIG undefined FUN_14753735c(void)

void FUN_14753735c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_2;
  FUN_1400a2664(param_3);
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar11 = *param_1;
    plVar4 = param_3 + 2;
    lVar12 = 0;
    uVar5 = 0;
    uVar9 = 0;
    local_90 = param_1;
    local_80 = plVar4;
    local_70 = param_3;
    do {
      if (*(char *)(lVar11 + 0x10 + lVar12) == '\x01') {
        uVar7 = (uint)*(ushort *)(lVar11 + 0x1c + lVar12);
        if (uVar7 == 0xffff) {
          uVar7 = 0xffffffff;
        }
        uVar8 = *(undefined4 *)(lVar11 + 0x14 + lVar12);
        uVar10 = *(undefined4 *)(lVar11 + 0x18 + lVar12);
        bVar1 = *(byte *)(lVar11 + 0x11 + lVar12);
        iVar6 = (int)param_3[3];
        *(uint *)(param_3 + 3) = iVar6 + 1U;
        if (*(uint *)((longlong)param_3 + 0x1c) < iVar6 + 1U) {
          local_94 = uVar8;
          local_88 = uVar5;
          FUN_14179cb80(plVar4,iVar6);
          plVar4 = local_80;
          uVar5 = local_88;
          param_3 = local_70;
          uVar8 = local_94;
        }
        lVar2 = *plVar4;
        lVar13 = (longlong)iVar6 * 0x10;
        *(undefined4 *)(lVar2 + lVar13) = uVar8;
        *(undefined4 *)(lVar2 + 4 + lVar13) = uVar10;
        *(uint *)(lVar2 + 8 + lVar13) = uVar7;
        *(short *)(lVar2 + 0xc + lVar13) = (short)uVar5;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        *(ushort *)(lVar2 + 0xe + lVar13) = -(bVar1 ^ 1) ^ uVar9;
        uVar9 = uVar9 + 1;
      }
      lVar12 = lVar12 + 0x24;
    } while ((longlong)(int)lVar3 * 0x24 != lVar12);
    lVar3 = local_90[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar11 = *local_90;
      lVar12 = 0;
      do {
        if (*(char *)(lVar11 + 0x10 + lVar12) == '\0') {
          uVar7 = (uint)*(ushort *)(lVar11 + 0x1c + lVar12);
          if (uVar7 == 0xffff) {
            uVar7 = 0xffffffff;
          }
          uVar8 = *(undefined4 *)(lVar11 + 0x14 + lVar12);
          uVar10 = *(undefined4 *)(lVar11 + 0x18 + lVar12);
          bVar1 = *(byte *)(lVar11 + 0x11 + lVar12);
          iVar6 = (int)param_3[3];
          *(uint *)(param_3 + 3) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0x1c) < iVar6 + 1U) {
            local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar8);
            local_94 = uVar10;
            local_88 = uVar5;
            FUN_14179cb80(plVar4,iVar6);
            plVar4 = local_80;
            uVar5 = local_88;
            uVar8 = local_90._0_4_;
            uVar10 = local_94;
          }
          lVar2 = *plVar4;
          lVar13 = (longlong)iVar6 * 0x10;
          *(undefined4 *)(lVar2 + lVar13) = uVar8;
          *(undefined4 *)(lVar2 + 4 + lVar13) = uVar10;
          *(uint *)(lVar2 + 8 + lVar13) = uVar7;
          *(short *)(lVar2 + 0xc + lVar13) = (short)uVar5;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          *(ushort *)(lVar2 + 0xe + lVar13) = -(bVar1 ^ 1) ^ uVar9;
          uVar9 = uVar9 + 1;
        }
        lVar12 = lVar12 + 0x24;
      } while ((longlong)(int)lVar3 * 0x24 != lVar12);
    }
  }
  FUN_147542dd4(param_3[2],(int)param_3[3]);
  uVar7 = *(uint *)((longlong)param_3 + 0xc);
  iVar6 = 0;
  if ((int)uVar7 < 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    FUN_14753e462(param_3,0);
    iVar6 = (int)param_3[1];
    uVar7 = *(uint *)((longlong)param_3 + 0xc);
  }
  *(uint *)(param_3 + 1) = iVar6 + 1U;
  if (uVar7 < iVar6 + 1U) {
    FUN_14754335a(param_3,iVar6);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar6 * 4) = DAT_14cab2074;
  local_68 = (undefined4)*local_78;
  uStack_64 = *(undefined4 *)((longlong)local_78 + 4);
  lVar11 = *local_78;
  uStack_60 = (undefined4)local_78[1];
  uStack_5c = *(undefined4 *)((longlong)local_78 + 0xc);
  lVar12 = local_78[1];
  uVar5 = local_78[2];
  lVar3 = *local_78;
  local_58 = uVar5;
  if ((lVar11 != lVar3 || lVar12 != 0) || (int)uVar5 != 0) {
    do {
      if ((longlong)*(int *)(lVar12 + 0x1c) == -1) {
        lVar11 = 0;
      }
      else {
        lVar11 = (longlong)
                 *(int *)(*(longlong *)(lVar11 + 0x40) + (longlong)*(int *)(lVar12 + 0x1c) * 0xc) *
                 0x30 + *(longlong *)(lVar11 + 0x50);
      }
      iVar6 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
        FUN_14754335a(param_3,iVar6);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar6 * 4) =
           *(undefined4 *)(lVar11 + (longlong)(int)uVar5 * 0x30);
      FUN_1400ab81a(&local_68);
      lVar11 = CONCAT44(uStack_64,local_68);
      lVar12 = CONCAT44(uStack_5c,uStack_60);
      uVar5 = local_58 & 0xffffffff;
    } while ((lVar11 != lVar3 || lVar12 != 0) || (int)local_58 != 0);
  }
  FUN_1475433df(*param_3,(int)param_3[1]);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475376a4 FUN_1475376a4 body=61 status=ok
// SIG undefined FUN_1475376a4(void)

void FUN_1475376a4(longlong *param_1)

{
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



// FUNCTION 1475376e2 FUN_1475376e2 body=194 status=ok
// SIG undefined FUN_1475376e2(void)

undefined8 * FUN_1475376e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)((longlong)param_1 + 0x3c) = *(undefined2 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 1475377a4 FUN_1475377a4 body=1957 status=ok
// SIG undefined FUN_1475377a4(void)

void FUN_1475377a4(longlong param_1,char *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  char *pcVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  char cVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  ulonglong local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [3];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 local_c4;
  ulonglong local_c0;
  undefined8 local_b8 [4];
  undefined1 local_98 [8];
  float local_90;
  longlong local_88;
  int local_80;
  char local_78;
  undefined2 uStack_77;
  char cStack_75;
  float fStack_74;
  float fStack_70;
  char cStack_6c;
  undefined2 uStack_6b;
  char cStack_69;
  undefined8 local_68;
  undefined2 local_60;
  char local_5e;
  undefined2 local_5c;
  char local_5a;
  float local_58;
  float fStack_54;
  float fStack_50;
  char local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_78 = '\x02';
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  cStack_6c = '\x02';
  local_68 = 0;
  if (*param_2 != '\x02') {
    local_78 = (char)*(undefined8 *)param_2 == '\x01';
    fStack_74 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  }
  if (param_2[8] != '\x02') {
    cStack_6c = (char)*(ulonglong *)(param_2 + 8) == '\x01';
    local_68 = *(ulonglong *)(param_2 + 8) >> 0x20;
  }
  lVar1 = param_1 + 0x28;
  FUN_14087ad3e(lVar1,local_98);
  if (local_80 == 0) {
    fStack_50 = local_90;
    local_58 = local_98._0_4_;
    fStack_54 = local_98._4_4_;
    if (local_78 != '\x02') {
      FUN_1400a24f6(&fStack_74,CONCAT44(fStack_70,fStack_74),&local_58);
    }
    if (cStack_6c != '\x02') {
      FUN_1400a24f6(&local_d0,local_68,&local_58);
      local_68 = CONCAT44(uStack_cc,local_d0);
    }
    puVar5 = local_b8;
LAB_147537937:
    puVar5[2] = local_68;
    *puVar5 = CONCAT44(fStack_74,CONCAT13(cStack_75,CONCAT21(uStack_77,local_78)));
    puVar5[1] = CONCAT17(cStack_69,CONCAT25(uStack_6b,CONCAT14(cStack_6c,fStack_70)));
LAB_147537946:
    (*(code *)*param_3)(param_3[1]);
  }
  else {
    if ((local_78 == '\x02') || (cStack_6c == '\x02')) {
      local_d0 = CONCAT31(local_d0._1_3_,2);
      uStack_cc = 0;
      uStack_c8 = 0;
      local_c4 = 2;
      local_c0 = 0;
      if (*(char *)(param_1 + 4) != '\x02') {
        local_d0 = CONCAT31(local_d0._1_3_,(char)*(undefined8 *)(param_1 + 4) == '\x01');
        uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
      }
      if (*(char *)(param_1 + 0xc) != '\x02') {
        local_c4 = (char)*(ulonglong *)(param_1 + 0xc) == '\x01';
        local_c0 = *(ulonglong *)(param_1 + 0xc) >> 0x20;
      }
      FUN_1456c5fde(lVar1,&local_58,&local_d0);
      fVar10 = (float)local_68;
      fVar3 = (float)(local_68 >> 0x20);
      if ((local_78 == '\x02') || (cStack_6c == '\x02')) goto LAB_147537a35;
      fVar14 = 0.0;
      if (((int)fVar10 < (int)fStack_74) || ((fStack_74 == fVar10 && (fVar3 < fStack_70)))) {
LAB_147537c48:
        cVar13 = '\0';
        fVar14 = 0.0;
        fVar9 = 0.0;
        uVar11 = 0;
        uVar15 = 0;
        cVar2 = '\0';
      }
      else if ((fStack_74 != fVar10) || ((fStack_70 != fVar3 || (NAN(fStack_70) || NAN(fVar3))))) {
LAB_147537a35:
        fVar8 = (float)local_4c._4_8_;
        fVar4 = SUB84(local_4c._4_8_,4);
        if ((local_58._0_1_ != '\x02') && (local_4c[0] != '\x02')) {
          fVar14 = 0.0;
          if (((int)fVar8 < (int)fStack_54) || ((fStack_54 == fVar8 && (fVar4 < fStack_50))))
          goto LAB_147537c48;
          if (fStack_54 == fVar8) {
            if ((fStack_50 == fVar4) && (!NAN(fStack_50) && !NAN(fVar4))) {
              cVar13 = '\0';
              fVar9 = 0.0;
              uVar11 = 0;
              uVar15 = 0;
              cVar2 = '\0';
              if (local_4c[0] == '\0' || local_58._0_1_ == '\0') goto LAB_147537ada;
            }
          }
        }
        pcVar6 = local_4c;
        if ((((cStack_6c != '\x02') && (pcVar6 = &cStack_6c, local_4c[0] != '\x02')) &&
            ((int)fVar8 <= (int)fVar10)) && ((fVar10 != fVar8 || (fVar4 <= fVar3)))) {
          pcVar6 = local_4c;
          if (((int)fVar10 <= (int)fVar8) &&
             ((fVar10 != fVar8 || fVar3 <= fVar4 && (cStack_6c == '\0')))) {
            pcVar6 = &cStack_6c;
          }
        }
        pfVar7 = (float *)&local_78;
        if (local_78 == '\x02') {
          pfVar7 = &local_58;
        }
        if (((local_78 != '\x02' && local_58._0_1_ != '\x02') &&
            (pfVar7 = (float *)&local_78, (int)fStack_74 <= (int)fStack_54)) &&
           ((fStack_74 != fStack_54 || (fStack_70 <= fStack_50)))) {
          pfVar7 = &local_58;
          if (((int)fStack_54 <= (int)fStack_74) &&
             (fStack_74 != fStack_54 || fStack_50 <= fStack_70)) {
            pfVar7 = &local_58;
            if (local_78 == '\0') {
              pfVar7 = (float *)&local_78;
            }
          }
        }
        cVar13 = *(char *)pfVar7;
        local_5a = *(char *)((longlong)pfVar7 + 3);
        local_5c = *(undefined2 *)((longlong)pfVar7 + 1);
        fVar9 = pfVar7[1];
        fVar14 = pfVar7[2];
        local_5e = pcVar6[3];
        local_60 = *(undefined2 *)(pcVar6 + 1);
        uVar11 = *(undefined4 *)(pcVar6 + 4);
        uVar15 = *(undefined4 *)(pcVar6 + 8);
        cVar2 = *pcVar6;
      }
      else {
        cVar13 = '\0';
        fVar9 = 0.0;
        uVar11 = 0;
        uVar15 = 0;
        cVar2 = '\0';
        if (cStack_6c != '\0' && local_78 != '\0') goto LAB_147537a35;
      }
LAB_147537ada:
      cStack_6c = cVar2;
      cStack_75 = local_5a;
      uStack_77 = local_5c;
      uStack_6b = local_60;
      cStack_69 = local_5e;
      local_68 = CONCAT44(uVar15,uVar11);
      local_78 = cVar13;
      fStack_74 = fVar9;
      fStack_70 = fVar14;
      if (cVar13 == '\x02') {
        uVar12 = *(ulonglong *)(param_1 + 4) & 0xff;
        cVar13 = '\x02';
        if (uVar12 != 2) {
          FUN_14040645e(lVar1,&local_58,*(ulonglong *)(param_1 + 4) >> 0x20);
          cVar13 = (int)uVar12 == 1;
          fStack_74 = local_58;
          fStack_70 = fStack_54;
          local_78 = cVar13;
        }
      }
      if (cStack_6c == '\x02') {
        uVar12 = *(ulonglong *)(param_1 + 0xc) & 0xff;
        if (uVar12 == 2) {
          if (cVar13 == '\x02') {
            puVar5 = local_e8;
            goto LAB_147537937;
          }
          FUN_140cdcd32(local_98,&local_58,CONCAT44(fStack_70,fStack_74),param_1 + 0x48);
          if (fStack_50._0_1_ != '\x01') goto LAB_14753794c;
          fStack_74 = local_58;
          fStack_70 = 0.0;
          local_128 = local_68;
          local_138 = CONCAT13(cStack_75,CONCAT21(uStack_77,local_78));
          local_130 = 0;
          local_12c = CONCAT13(cStack_69,CONCAT21(uStack_6b,cStack_6c));
          goto LAB_147537946;
        }
        FUN_14040645e(lVar1,&local_58,*(ulonglong *)(param_1 + 0xc) >> 0x20);
        cStack_6c = (int)uVar12 == 1;
        local_68 = CONCAT44(fStack_54,local_58);
        cVar13 = local_78;
      }
      if (cVar13 == '\x02') {
        FUN_140cdcd32(local_98,&local_58,local_68,param_1 + 0x60);
        if (fStack_50._0_1_ != '\x01') goto LAB_14753794c;
        local_68 = (ulonglong)(uint)local_58;
        local_118 = CONCAT44(fStack_74,CONCAT13(cStack_75,CONCAT21(uStack_77,local_78)));
        uStack_110 = CONCAT17(cStack_69,CONCAT25(uStack_6b,CONCAT14(cStack_6c,fStack_70)));
        local_108 = local_68;
        goto LAB_147537946;
      }
    }
    local_148 = param_1 + 0x60;
    local_f8 = *param_3;
    local_f0 = param_3[1];
    FUN_14755a48c(local_98,&local_78,&local_f8,param_1 + 0x48);
  }
LAB_14753794c:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147537f4a FUN_147537f4a body=74 status=ok
// SIG undefined FUN_147537f4a(void)

void FUN_147537f4a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147537f94 FUN_147537f94 body=83 status=ok
// SIG undefined FUN_147537f94(void)

byte FUN_147537f94(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  double dVar3;
  
  if (((param_1[1] & 0x7fffffffffffffff) == 0) &&
     (((uint)((ulonglong)*param_1 >> 0x33) < 0x1fff || (cVar2 = FUN_1432e0f08(param_1), cVar2 == -1)
      ))) {
    dVar3 = (double)FUN_147585474(param_1);
    bVar1 = -(dVar3 == 1.0) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



// FUNCTION 147537fe8 FUN_147537fe8 body=147 status=ok
// SIG undefined FUN_147537fe8(void)

undefined8 * FUN_147537fe8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((0x1ffe < (uint)((ulonglong)*param_2 >> 0x33)) &&
     (cVar3 = FUN_1432e0f08(param_2), cVar3 != -1)) {
    iVar1 = *(int *)(param_1 + 3);
    *(uint *)(param_1 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
      FUN_140407554(param_1 + 2,iVar1);
    }
    FUN_14755ac28((longlong)iVar1 * 0x18 + param_1[2],param_2);
    return param_1;
  }
  uVar4 = FUN_1432e0f50(param_2);
  uVar2 = param_2[1];
  *(undefined4 *)param_1 = uVar4;
  *(undefined8 *)((longlong)param_1 + 4) = uVar2;
  return param_1;
}



// FUNCTION 14753807c FUN_14753807c body=412 status=ok
// SIG undefined FUN_14753807c(void)

byte FUN_14753807c(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_4;
  if ((param_1 == (longlong *)0x0) || (lVar3 = (**(code **)(*param_1 + 0x2e8))(), lVar3 == 0)) {
    bVar6 = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0xe8);
    if ((longlong)iVar1 == 0) {
      bVar6 = 0;
    }
    else {
      lVar9 = *(longlong *)(lVar3 + 0xe0);
      lVar8 = 0;
      bVar6 = 0;
      do {
        lVar5 = *(longlong *)(lVar9 + lVar8);
        if (lVar5 != 0) {
          lVar4 = FUN_14086216a();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            local_78 = param_5;
            bVar2 = FUN_14753834c(lVar5,param_2,param_3,local_70);
            bVar6 = bVar6 | bVar2;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
      puVar10 = *(undefined4 **)(lVar3 + 0x80);
      puVar7 = puVar10 + (longlong)*(int *)(lVar3 + 0x88) * 0xc;
      do {
        iVar1 = puVar10[10];
        if ((longlong)iVar1 != 0) {
          lVar3 = *(longlong *)(puVar10 + 8);
          lVar9 = 0;
          do {
            lVar8 = *(longlong *)(lVar3 + lVar9);
            if (lVar8 != 0) {
              lVar5 = FUN_14086216a();
              if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                local_68 = *puVar10;
                uStack_64 = puVar10[1];
                uStack_60 = puVar10[2];
                uStack_5c = puVar10[3];
                local_58 = *param_2;
                local_78 = param_5;
                bVar2 = FUN_14753834c(lVar8,param_2,&local_68,local_70);
                bVar6 = bVar6 | bVar2;
              }
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar1 * 8 != lVar9);
        }
        puVar10 = puVar10 + 0xc;
      } while (puVar10 != puVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6 & 1;
}



// FUNCTION 14753821a FUN_14753821a body=305 status=ok
// SIG undefined FUN_14753821a(void)

void FUN_14753821a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x2e8))(), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0xe8);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(lVar2 + 0xe0);
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(lVar7 + lVar5);
        if (lVar6 != 0) {
          lVar3 = FUN_14086216a();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            FUN_147538ad6(lVar6,param_2,param_3,param_4);
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    if ((longlong)*(int *)(lVar2 + 0x88) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x80);
      lVar2 = (longlong)*(int *)(lVar2 + 0x88) * 0x30 + lVar7;
      do {
        iVar1 = *(int *)(lVar7 + 0x28);
        if ((longlong)iVar1 != 0) {
          lVar5 = *(longlong *)(lVar7 + 0x20);
          lVar6 = 0;
          do {
            lVar3 = *(longlong *)(lVar5 + lVar6);
            if (lVar3 != 0) {
              lVar4 = FUN_14086216a();
              if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                FUN_147538ad6(lVar3,param_2,param_3,param_4);
              }
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar1 * 8 != lVar6);
        }
        lVar7 = lVar7 + 0x30;
      } while (lVar7 != lVar2);
    }
  }
  return;
}



// FUNCTION 14753834c FUN_14753834c body=1416 status=ok
// SIG undefined FUN_14753834c(void)

ulonglong FUN_14753834c(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                       undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  ulonglong local_228;
  ulonglong local_220;
  undefined4 *local_218;
  longlong local_210;
  undefined4 *local_208;
  undefined4 *local_200;
  char local_1f8 [4];
  int iStack_1f4;
  float local_1f0;
  char local_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  uint local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  uint local_15c;
  uint local_158;
  undefined4 local_154;
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  undefined1 local_110 [8];
  float local_108;
  undefined1 local_100 [24];
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  short local_a4;
  byte local_a2;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_154 = *param_2;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x328))();
  if ((longlong)(int)plVar6[1] == 0) {
    uVar8 = 0;
  }
  else {
    plVar18 = (longlong *)*plVar6;
    plVar6 = plVar18 + (int)plVar6[1];
    local_208 = param_2 + 5;
    uVar8 = 0;
    local_200 = param_2;
    do {
      plVar2 = (longlong *)*plVar18;
      if ((longlong)(int)param_1[0xf] != 0) {
        lVar16 = 0;
        do {
          if (*(int *)(param_1[0xe] + lVar16) == (int)plVar2[0x17]) goto LAB_147538411;
          lVar16 = lVar16 + 4;
        } while ((longlong)(int)param_1[0xf] * 4 != lVar16);
      }
      if (plVar2 != (longlong *)0x0) {
        lVar16 = FUN_1408612da();
        if ((((*(int *)(lVar16 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8)
              == lVar16 + 0x30)) &&
            (plVar7 = (longlong *)FUN_1432e0ea6(plVar2), plVar7 != (longlong *)0x0)) &&
           (lVar16 = (**(code **)(*plVar7 + 0x2e8))(plVar7), lVar16 != 0)) {
          local_218 = param_3;
          FUN_14029898a(plVar2,&local_15c);
          iVar1 = *(int *)(param_4 + 0x48);
          uVar9 = local_15c;
          local_210 = param_4;
          if ((longlong)iVar1 != 0) {
            lVar16 = *(longlong *)(param_4 + 0x40);
            if (*(longlong *)(param_4 + 0x40) == 0) {
              lVar16 = param_4;
            }
            lVar13 = 0;
            uVar15 = local_15c;
            do {
              uVar9 = *(uint *)(lVar16 + lVar13);
              if (uVar15 != 0) {
                uVar9 = FUN_144a78877(uVar15,uVar9);
              }
              lVar13 = lVar13 + 8;
              uVar15 = uVar9;
            } while ((longlong)iVar1 << 3 != lVar13);
          }
          param_3 = local_218;
          local_170 = *local_218;
          uStack_16c = local_218[1];
          uStack_168 = local_218[2];
          uStack_164 = local_218[3];
          local_160 = local_218[4];
          local_174 = uVar9;
          local_158 = uVar9;
          (**(code **)(*plVar2 + 0x368))(plVar2,local_150,&local_174);
          puVar4 = local_200;
          uVar8 = *(ulonglong *)(local_200 + 5);
          uVar11 = *(ulonglong *)(local_200 + 7);
          if ((char)uVar11 == '\x02' || (char)uVar8 == '\x02') {
            local_220 = uVar8;
            local_228 = uVar11;
            uVar14 = (uint)(uVar11 >> 0x20);
            uVar9 = (uint)(uVar8 >> 0x20);
            if ((char)uVar8 == '\x02') {
              cVar5 = '\x02';
              bVar3 = true;
              goto LAB_147538631;
            }
            uVar15 = uVar14;
            if ((char)uVar11 == '\x02') {
              uVar11 = 2;
LAB_1475385cd:
              uVar14 = uVar15;
              cVar5 = (char)uVar8;
              bVar3 = false;
              goto LAB_147538631;
            }
LAB_147538875:
            uVar14 = uVar9;
            cVar5 = (char)uVar8;
            if ((int)uVar14 <= (int)uVar15) {
              uVar9 = uVar14;
              if (uVar14 != uVar15) goto LAB_1475385cd;
              bVar3 = false;
              if ((char)uVar11 != '\0' && cVar5 != '\0') goto LAB_147538631;
            }
LAB_14753887d:
            uStack_dc = 0;
            local_e4 = 0;
          }
          else {
            FUN_14755820a(local_130);
            local_220 = CONCAT71(local_220._1_7_,2);
            local_220 = local_220 & 0xffffffff;
            local_228 = CONCAT71(local_228._1_7_,2);
            local_228 = local_228 & 0xffffffff;
            if (local_1f8[0] == '\x02') {
              if (local_1ec == '\x02') {
                uVar11 = 2;
                uVar14 = 0;
              }
              else {
                local_228 = CONCAT44(uStack_1e4,local_1e8) << 0x20;
                uVar11 = 0;
                uVar14 = local_1e8;
              }
              cVar5 = '\x02';
              bVar3 = true;
              uVar9 = 0;
            }
            else {
              uVar9 = (uint)(local_1f0 != 0.0 || local_1f8[0] != '\x01') + iStack_1f4;
              local_220 = ((ulonglong)uVar9 << 0x20) + 1;
              if (local_1ec != '\x02') {
                local_228 = CONCAT44(uStack_1e4,local_1e8) << 0x20;
                uVar8 = 1;
                uVar11 = 0;
                uVar15 = local_1e8;
                goto LAB_147538875;
              }
              bVar3 = false;
              cVar5 = '\x02';
              uVar11 = 2;
              uVar14 = 0;
            }
LAB_147538631:
            if (((char)local_e4 != '\x02') && ((char)uStack_dc != '\x02')) {
              if (uStack_dc._4_4_ < local_e4._4_4_) {
                uStack_dc = 0;
                local_e4 = 0;
                param_3 = local_218;
                goto LAB_1475386f4;
              }
              param_3 = local_218;
              if ((local_e4._4_4_ == uStack_dc._4_4_) &&
                 ((char)uStack_dc == '\0' || (char)local_e4 == '\0')) goto LAB_14753887d;
            }
            puVar17 = &uStack_dc;
            if (((char)uVar11 != '\x02') &&
               (((puVar17 = &local_228, (char)uStack_dc != '\x02' &&
                 (param_3 = local_218, uStack_dc._4_4_ <= (int)uVar14)) &&
                (puVar17 = &uStack_dc, (int)uVar14 <= uStack_dc._4_4_)))) {
              puVar17 = &local_228;
              if ((char)uVar11 != '\0') {
                puVar17 = &uStack_dc;
              }
            }
            puVar12 = &local_220;
            if (bVar3) {
              puVar12 = &local_e4;
            }
            if ((((char)local_e4 != '\x02' && !bVar3) &&
                (puVar12 = &local_220, (int)uVar9 <= local_e4._4_4_)) &&
               (puVar12 = &local_e4, local_e4._4_4_ <= (int)uVar9)) {
              puVar12 = &local_220;
              if (cVar5 != '\0') {
                puVar12 = &local_e4;
              }
            }
            local_e4 = *puVar12;
            uStack_dc = *puVar17;
          }
LAB_1475386f4:
          param_4 = local_210;
          FUN_1475571e0(local_110,local_1f8,puVar4 + 10);
          local_108 = local_1f0;
          FUN_1400a241c(local_100,&local_1e8);
          FUN_1447bda9c(CONCAT44(uStack_1e4,local_1e8),uStack_1e0);
          if (CONCAT44(uStack_1e4,local_1e8) != 0) {
            FUN_1400020a8();
          }
          local_a4 = local_a4 + *(short *)(puVar4 + 0x1e);
          bVar10 = local_a2 & 0xfc;
          if ((*(byte *)((longlong)puVar4 + 0x7a) & 3) == 0) {
            bVar10 = local_a2;
          }
          local_a2 = bVar10 | *(byte *)((longlong)puVar4 + 0x7a);
          FUN_1475582a4(param_5,local_150,&local_158,&local_154);
          FUN_1475388d6(puVar4,local_1f8,local_150,local_158);
          uStack_1e4 = (undefined4)local_e4;
          uStack_1e0 = local_e4._4_4_;
          uStack_1dc = (undefined4)uStack_dc;
          uStack_1d8 = uStack_dc._4_4_;
          FUN_147557bac(param_4,local_158,local_e8);
          local_238 = param_5;
          FUN_14753807c(plVar7,local_1f8);
          FUN_1410cbfee(param_4,1);
          FUN_147537f4a(local_1f8);
          FUN_145765194(local_150);
          uVar8 = CONCAT71((int7)((ulonglong)local_150 >> 8),1);
        }
      }
LAB_147538411:
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 1475388d6 FUN_1475388d6 body=511 status=ok
// SIG undefined FUN_1475388d6(void)

undefined4 * FUN_1475388d6(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_2 + 0x18;
  *(undefined2 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7a) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *param_2 = param_4;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  FUN_14755820a((undefined8 *)(param_3 + 0x40),&local_78,param_1 + 4);
  lVar6 = 2;
  if ((char)local_78 != '\x02') {
    lVar6 = ((ulonglong)
             ((uint)((float)uStack_70 != 0.0 || (char)local_78 != '\x01') + local_78._4_4_) << 0x20)
            + 1;
  }
  lVar7 = CONCAT71(uStack_67,local_68) << 0x20;
  if (uStack_70._4_1_ == '\x02') {
    lVar7 = 2;
  }
  *(longlong *)(param_2 + 5) = lVar6;
  *(longlong *)(param_2 + 7) = lVar7;
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x24);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 0x40);
  param_2[0xc] = *(undefined4 *)(param_3 + 0x48);
  FUN_1447bdcfc(param_2 + 0xe,param_3 + 0x50);
  FUN_1447bdca4(param_2 + 0x12,param_1 + 0x48);
  puVar4 = local_88;
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_1 + 0x58);
  FUN_1447bdca4(local_88,param_1 + 0x60);
  *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_1 + 0x70);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar5 = FUN_1475575ec(&local_78,param_2 + 0x12);
  FUN_147552a96(param_2 + 10,local_80,
                (int)((ulonglong)*(undefined8 *)(param_3 + 0x7c) >> 0x20) +
                *(int *)(&DAT_14a46e5f8 +
                        (ulonglong)((char)*(undefined8 *)(param_3 + 0x7c) == '\0') * 4),uVar5);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uVar5 = FUN_1475575ec(&local_78,puVar4);
  FUN_147552a96(param_2 + 10,local_80,
                (int)((ulonglong)*(undefined8 *)(param_3 + 0x84) >> 0x20) +
                *(int *)(&DAT_14a46e600 +
                        (ulonglong)((char)*(undefined8 *)(param_3 + 0x84) == '\x01') * 4),uVar5);
  *(undefined2 *)(param_2 + 0x1e) = *(undefined2 *)(param_3 + 0xac);
  *(undefined1 *)((longlong)param_2 + 0x7a) = *(undefined1 *)(param_3 + 0xae);
  *(undefined1 *)((longlong)param_2 + 0x7b) = *(undefined1 *)(param_1 + 0x7b);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147538ad6 FUN_147538ad6 body=573 status=ok
// SIG undefined FUN_147538ad6(void)

void FUN_147538ad6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  code *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  byte local_70;
  undefined8 local_68;
  int local_60;
  int local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar3 = *(byte *)(param_2 + 0x24);
  local_50 = param_3;
  if ((((bVar3 == 0) || (((bVar3 & 1) != 0 && ((*(byte *)(param_1 + 0x58) & 4) != 0)))) ||
      (((bVar3 & 2) != 0 && ((*(byte *)(param_1 + 0x58) & 8) != 0)))) &&
     (*(char *)(param_1 + 0x69) == '\0')) {
    uVar5 = FUN_140ce4600();
    lVar6 = FUN_144a78ede(param_1,uVar5);
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_1456c5f90(param_1);
      if ((longlong)(int)plVar7[1] != 0) {
        plVar11 = (longlong *)*plVar7;
        plVar7 = plVar11 + (longlong)(int)plVar7[1] * 4;
        do {
          if (*plVar11 != 0) {
            uVar5 = FUN_1408612da();
            bVar3 = FUN_144a7ca96(plVar11,uVar5);
            lVar6 = *plVar11;
            if (((lVar6 != 0 & bVar3) == 1) && (lVar8 = FUN_1432e0ea6(lVar6), lVar8 != 0)) {
              plVar9 = (longlong *)FUN_1432e0ea6(lVar6);
              lVar10 = (**(code **)(*plVar9 + 0x2e8))(plVar9);
              lVar8 = local_50;
              if (lVar10 != 0) {
                if ((longlong)*(int *)(param_1 + 0x78) != 0) {
                  lVar10 = 0;
                  do {
                    if (*(int *)(*(longlong *)(param_1 + 0x70) + lVar10) == *(int *)(lVar6 + 0xb8))
                    goto LAB_147538c17;
                    lVar10 = lVar10 + 4;
                  } while ((longlong)*(int *)(param_1 + 0x78) * 4 != lVar10);
                }
                bVar3 = *(byte *)(param_2 + 0x7b) & *(byte *)(lVar6 + 0x13c);
                if (bVar3 != 0) {
                  *(byte *)(param_4 + 0x138) = *(byte *)(param_4 + 0x138) & *(byte *)(lVar6 + 0x13c)
                  ;
                  local_b0 = param_2;
                  local_a8 = param_4;
                  FUN_14029898a(lVar6,&local_58);
                  iVar1 = *(int *)(lVar8 + 0x48);
                  iVar4 = local_58;
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(lVar8 + 0x40);
                    if (*(longlong *)(lVar8 + 0x40) == 0) {
                      lVar6 = lVar8;
                    }
                    lVar8 = 0;
                    iVar2 = local_58;
                    do {
                      iVar4 = *(int *)(lVar6 + lVar8);
                      if (iVar2 != 0) {
                        iVar4 = FUN_144a78877(iVar2,iVar4);
                      }
                      lVar8 = lVar8 + 8;
                      iVar2 = iVar4;
                    } while ((longlong)iVar1 << 3 != lVar8);
                  }
                  param_4 = local_a8;
                  local_54 = iVar4;
                  local_68 = FUN_147538d14(local_a8,&local_54);
                  param_2 = local_b0;
                  local_90 = local_b0;
                  local_80 = &local_50;
                  local_78 = param_4;
                  local_98 = &local_90;
                  local_a0 = FUN_1432d3bd0;
                  local_88 = plVar11;
                  local_70 = bVar3;
                  local_60 = iVar4;
                  FUN_1475377a4(local_b0,plVar11 + 1);
                }
              }
            }
          }
LAB_147538c17:
          plVar11 = plVar11 + 4;
        } while (plVar11 != plVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147538d14 FUN_147538d14 body=124 status=ok
// SIG undefined FUN_147538d14(void)

longlong FUN_147538d14(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *param_2;
  if (uVar1 == DAT_14cab2074) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x100;
        if (*(uint *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x100) == uVar1)
        goto LAB_147538d31;
        iVar4 = *(int *)(lVar3 + 0xf8);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_147538d31:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147538d90 FUN_147538d90 body=392 status=ok
// SIG undefined FUN_147538d90(void)

ulonglong FUN_147538d90(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  undefined7 uVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar12 = (longlong *)param_1[1];
  bVar3 = true;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar12[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_147538dc7;
      }
      LOCK();
      iVar6 = (int)plVar12[1];
      bVar15 = iVar5 == iVar6;
      if (bVar15) {
        *(int *)(plVar12 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      iVar5 = iVar6;
      UNLOCK();
    } while (!bVar15);
    lVar8 = *param_1;
    bVar3 = false;
  }
LAB_147538dc7:
  iVar5 = *(int *)(lVar8 + 0x34);
  lVar2 = *(longlong *)(lVar8 + 0x28);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  lVar14 = (longlong)iVar5 * 0x30;
  cVar4 = FUN_14753443c(lVar2,*(longlong *)(lVar2 + 0xa0) + lVar14);
  if (cVar4 == '\0') {
    cVar4 = FUN_147538f86(param_1);
    if (cVar4 == '\0') {
      uVar13 = 0;
      goto LAB_147538e71;
    }
  }
  else {
    uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar10 = (undefined4)CONCAT71(uVar11,*(undefined1 *)(lVar2 + 0x22c));
    plVar7 = (longlong *)FUN_14479d2ce(lVar8 + 0x18);
    if ((plVar7 != (longlong *)0x0) && (lVar8 = (**(code **)(*plVar7 + 0x180))(plVar7), lVar8 != 0))
    {
      iVar6 = FUN_14490d72a(lVar8);
      if (iVar6 == 1) {
        uVar10 = (undefined4)CONCAT71(uVar11,1);
      }
      else if (iVar6 == 3) {
        uVar10 = (undefined4)CONCAT71(uVar11,2);
      }
    }
    local_50 = *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + 0x20 + lVar14);
    local_4c = *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + 0x24 + lVar14);
    uVar9 = FUN_14479d2ce();
    FUN_147534666(lVar2,iVar5,uVar9,uVar10);
  }
  FUN_1432d244a(param_1);
  uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_147538e71:
  if (!bVar3) {
    LOCK();
    plVar7 = plVar12 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 147538f1a FUN_147538f1a body=108 status=ok
// SIG undefined FUN_147538f1a(void)

undefined8 * FUN_147538f1a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x1000000000;
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
  return param_1;
}



// FUNCTION 147538f86 FUN_147538f86 body=582 status=ok
// SIG undefined FUN_147538f86(void)

ulonglong FUN_147538f86(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 unaff_R15;
  ulonglong uVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined1 auStack_c8 [44];
  uint local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar11 = (longlong *)param_1[1];
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    iVar6 = (int)plVar11[1];
    lVar9 = 0;
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        goto LAB_147538fc1;
      }
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar15 = iVar6 == iVar7;
      if (bVar15) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar15);
    lVar9 = *param_1;
    uVar10 = 0;
  }
LAB_147538fc1:
  uVar3 = *(undefined4 *)(lVar9 + 0x34);
  lVar9 = *(longlong *)(lVar9 + 0x28);
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar9);
  }
  cVar5 = FUN_1475391ce(param_1,uVar3,DAT_14cab2074);
  uVar13 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  if (cVar5 == '\0') {
    lVar8 = FUN_1400a382a(lVar9,uVar3);
    iVar6 = 0;
    if (lVar8 == 0) {
      uVar13 = 0;
    }
    else {
      local_9c = (uint)uVar10;
      plVar2 = (longlong *)(lVar8 + 0x98);
      lVar12 = lVar8 + 0xa8;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar12;
      if (*(int *)(lVar8 + 0xc0) != 0) {
        FUN_1449c0562(&local_68);
        iVar6 = *(int *)(lVar8 + 0xc0);
      }
      local_78 = local_58;
      uVar4 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar7 = local_78._4_4_;
      local_90 = plVar2;
      if ((local_78._4_4_ != iVar6) || (local_78 = uVar4, local_60 != lVar12)) {
        do {
          local_78 = uVar4;
          local_98 = plVar2;
          lVar8 = *local_90;
          FUN_1475343aa(lVar9,&local_68,uVar3,*(undefined4 *)(lVar8 + (longlong)iVar7 * 0x100));
          if ((int)local_68 != -1) {
            puVar14 = (undefined4 *)(lVar8 + (longlong)iVar7 * 0x100);
            cVar5 = FUN_1475391ce(param_1,local_68 & 0xffffffff,*puVar14);
            if (cVar5 != '\0') {
              uVar10 = (ulonglong)local_9c;
              uVar13 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
              goto LAB_147538ff8;
            }
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar7 = local_78._4_4_;
          plVar2 = local_98;
          uVar4 = local_78;
        } while (local_90 != local_98 || (local_80 != lVar12 || local_78._4_4_ != iVar6));
      }
      uVar13 = 0;
      uVar10 = (ulonglong)local_9c;
    }
  }
LAB_147538ff8:
  if ((char)uVar10 == '\0') {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1475391ce FUN_1475391ce body=331 status=ok
// SIG undefined FUN_1475391ce(void)

ulonglong FUN_1475391ce(longlong *param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  
  uVar4 = *(uint *)(param_1 + 0x2b);
  uVar11 = (ulonglong)uVar4;
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[0x2a];
  }
  uVar14 = 0;
  if (0 < (int)uVar4) {
    do {
      uVar13 = (int)(uVar11 >> 1) + (int)uVar14;
      uVar15 = (uint)uVar11;
      if (*(uint *)((longlong)plVar9 + (ulonglong)uVar13 * 0x14) < param_3) {
        uVar14 = (ulonglong)(uVar13 + (uVar15 & 1));
      }
      uVar11 = uVar11 >> 1;
    } while (1 < uVar15);
  }
  if ((int)uVar14 < (int)uVar4) {
    puVar3 = (uint *)((longlong)plVar9 + uVar14 * 0x14);
    puVar16 = (uint *)0x0;
    if (*puVar3 <= param_3) {
      puVar16 = puVar3 + 1;
    }
  }
  else {
    puVar16 = (uint *)0x0;
  }
  plVar9 = (longlong *)param_1[1];
  bVar6 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar8 = (int)plVar9[1];
    lVar12 = 0;
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_14753927a;
      }
      LOCK();
      iVar7 = (int)plVar9[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    lVar12 = *param_1;
    bVar6 = false;
  }
LAB_14753927a:
  lVar12 = *(longlong *)(lVar12 + 0x28);
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar12);
  }
  if (puVar16 == (uint *)0x0) {
    bVar17 = true;
  }
  else {
    lVar5 = *(longlong *)(lVar12 + 0xa0);
    lVar10 = (longlong)param_2 * 0x30;
    bVar17 = puVar16[3] != *(uint *)(lVar5 + 0xc + lVar10) ||
             (puVar16[2] != *(uint *)(lVar5 + 8 + lVar10) ||
             (puVar16[1] != *(uint *)(lVar5 + 4 + lVar10) || *puVar16 != *(uint *)(lVar5 + lVar10)))
    ;
  }
  if (!bVar6) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return CONCAT71((int7)((ulonglong)lVar12 >> 8),bVar17) & 0xffffffff;
}



// FUNCTION 147539319 FUN_147539319 body=558 status=ok
// SIG undefined FUN_147539319(void)

undefined8 *
FUN_147539319(undefined8 *param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) {
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      goto LAB_147539511;
    }
    uVar1 = *(undefined4 *)(param_4 + 4);
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_60 = (undefined4 *)0x0;
    local_58 = 0x400000000;
    lVar9 = param_4 + 0x18;
    if (*(longlong *)(param_4 + 0x48) != 0) {
      lVar9 = *(longlong *)(param_4 + 0x48);
    }
    iVar2 = *(int *)(param_4 + 0x50);
    if ((longlong)iVar2 != 0) {
      lVar8 = 0;
      do {
        uVar4 = local_58;
        uVar3 = *(undefined4 *)(lVar9 + lVar8);
        lVar7 = (longlong)(int)local_58;
        uVar5 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,uVar5);
        if (local_58._4_4_ < uVar5) {
          FUN_147522c04(&local_90,uVar4 & 0xffffffff);
        }
        puVar6 = local_60;
        if (local_60 == (undefined4 *)0x0) {
          puVar6 = &local_90;
        }
        puVar6[lVar7 * 3] = uVar3;
        puVar6[lVar7 * 3 + 1] = uVar1;
        *(undefined1 *)(puVar6 + lVar7 * 3 + 2) = 0;
        lVar8 = lVar8 + 0xc;
      } while ((longlong)iVar2 * 0xc != lVar8);
      goto LAB_1475394a0;
    }
LAB_1475394c5:
    local_58 = 0x400000000;
    local_60 = (undefined4 *)0x0;
    uStack_94 = 0;
    uStack_98 = 0xffffffff;
    *(ulonglong *)((longlong)param_1 + 0xd) = (ulonglong)CONCAT43(0xffffffff,uStack_9c._1_3_);
    *param_1 = CONCAT44(uStack_a4,local_a8);
    param_1[1] = CONCAT44(uStack_9c,uStack_a0);
    param_1[9] = 0;
LAB_1475394de:
    param_1[7] = local_70;
    param_1[8] = uStack_68;
    param_1[5] = local_80;
    param_1[6] = uStack_78;
    *(undefined4 *)(param_1 + 3) = local_90;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_8c;
    *(undefined4 *)(param_1 + 4) = uStack_88;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_84;
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_60 = (undefined4 *)0x0;
    local_58 = 0x400000000;
    lVar9 = param_3 + 0x18;
    if (*(longlong *)(param_3 + 0x48) != 0) {
      lVar9 = *(longlong *)(param_3 + 0x48);
    }
    iVar2 = *(int *)(param_3 + 0x50);
    if ((longlong)iVar2 == 0) goto LAB_1475394c5;
    lVar8 = 0;
    do {
      uVar4 = local_58;
      uVar3 = *(undefined4 *)(lVar9 + lVar8);
      lVar7 = (longlong)(int)local_58;
      uVar5 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,uVar5);
      if (local_58._4_4_ < uVar5) {
        FUN_147522c04(&local_90,uVar4 & 0xffffffff);
      }
      puVar6 = local_60;
      if (local_60 == (undefined4 *)0x0) {
        puVar6 = &local_90;
      }
      puVar6[lVar7 * 3] = uVar3;
      puVar6[lVar7 * 3 + 1] = uVar1;
      *(undefined1 *)(puVar6 + lVar7 * 3 + 2) = 0;
      lVar8 = lVar8 + 0xc;
    } while ((longlong)iVar2 * 0xc != lVar8);
LAB_1475394a0:
    *(ulonglong *)((longlong)param_1 + 0xd) =
         CONCAT17(uStack_94,CONCAT43(uStack_98,uStack_9c._1_3_));
    *(undefined4 *)param_1 = local_a8;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_a4;
    *(undefined4 *)(param_1 + 1) = uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_9c;
    param_1[9] = 0;
    puVar6 = local_60;
    if (local_60 == (undefined4 *)0x0) goto LAB_1475394de;
  }
  param_1[9] = puVar6;
  *(int *)(param_1 + 10) = (int)local_58;
  *(uint *)((longlong)param_1 + 0x54) = local_58._4_4_;
  *(undefined1 *)(param_1 + 0xb) = 1;
LAB_147539511:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147539548 FUN_147539548 body=225 status=ok
// SIG undefined FUN_147539548(void)

void FUN_147539548(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  iVar7 = (int)param_1[9];
  uVar4 = (ulonglong)iVar7;
  if (uVar4 != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1;
    }
    plVar1 = plVar5 + uVar4 * 2;
    iVar6 = -0x80000000;
    do {
      if (((*(byte *)(*plVar5 + 0xda) & 1) == 0) && ((*(byte *)((longlong)plVar5 + 0xc) & 3) == 0))
      {
        iVar3 = *(int *)(*plVar5 + 0xbc);
        if (iVar6 < iVar3) {
          iVar6 = iVar3;
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar1);
    if (0 < iVar7) {
      iVar7 = -iVar7;
      uVar10 = uVar4;
      lVar9 = uVar4 * 0x10;
      do {
        iVar3 = (int)uVar4;
        lVar8 = lVar9 + -0x10;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1;
        }
        if (((*(int *)(*(longlong *)((longlong)plVar5 + lVar8) + 0xbc) != iVar6) &&
            ((*(byte *)(*(longlong *)((longlong)plVar5 + lVar8) + 0xda) & 1) == 0)) &&
           ((*(byte *)((longlong)plVar5 + lVar9 + -4) & 3) == 0)) {
          if (uVar10 != (uVar4 & 0xffffffff)) {
            memmove((void *)((longlong)plVar5 + lVar8),(void *)((longlong)plVar5 + lVar9),
                    (longlong)(iVar3 + iVar7) << 4);
            iVar3 = (int)param_1[9];
          }
          uVar4 = (ulonglong)(iVar3 - 1U);
          *(uint *)(param_1 + 9) = iVar3 - 1U;
        }
        iVar7 = iVar7 + 1;
        bVar2 = 1 < uVar10;
        uVar10 = uVar10 - 1;
        lVar9 = lVar8;
      } while (bVar2);
    }
  }
  return;
}



// FUNCTION 14753962a FUN_14753962a body=51 status=ok
// SIG undefined FUN_14753962a(void)

undefined8 FUN_14753962a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return 1;
}



// FUNCTION 14753966a FUN_14753966a body=87 status=ok
// SIG undefined FUN_14753966a(void)

undefined8 FUN_14753966a(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000040;
  
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneSpawnableBinding.h",0x59,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneSpawnableBindingBase::SpawnObjectInternal");
  plVar3 = *(longlong **)(in_stack_00000040 + 8);
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
  return 0;
}



// FUNCTION 1475396c2 FUN_1475396c2 body=41 status=ok
// SIG undefined FUN_1475396c2(void)

void FUN_1475396c2(void)

{
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneSpawnableBinding.h",0x5c,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneSpawnableBindingBase::DestroySpawnedObjectInternal");
  return;
}



// FUNCTION 1475396ec FUN_1475396ec body=69 status=ok
// SIG undefined FUN_1475396ec(void)

undefined8 * FUN_1475396ec(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000030;
  
  *param_2 = 0;
  plVar3 = *(longlong **)(in_stack_00000030 + 8);
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
  return param_2;
}



// FUNCTION 14753973c FUN_14753973c body=41 status=ok
// SIG undefined FUN_14753973c(void)

void FUN_14753973c(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\Variants/MovieSceneTimeWarpGetter.h",0x3e,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTimeWarpGetter::ScaleBy");
  return;
}



// FUNCTION 147539766 FUN_147539766 body=56 status=ok
// SIG undefined FUN_147539766(void)

undefined8 * FUN_147539766(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\Variants/MovieSceneTimeWarpGetter.h",0x48,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTimeWarpGetter::RemapTime");
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 14753979e FUN_14753979e body=65 status=ok
// SIG undefined FUN_14753979e(void)

undefined1 * FUN_14753979e(undefined8 param_1,undefined1 *param_2)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\Variants/MovieSceneTimeWarpGetter.h",0x51,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneTimeWarpGetter::ComputeTraversedHull");
  *param_2 = 2;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[0xc] = 2;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return param_2;
}



// FUNCTION 1475397e0 FUN_1475397e0 body=52 status=ok
// SIG undefined FUN_1475397e0(void)

longlong FUN_1475397e0(undefined8 param_1,longlong param_2)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\Variants/MovieSceneTimeWarpGetter.h",99,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneTimeWarpGetter::InverseRemapTimeCycled");
  *(undefined1 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 147539814 FUN_147539814 body=42 status=ok
// SIG undefined FUN_147539814(void)

undefined1 FUN_147539814(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\Variants/MovieSceneTimeWarpGetter.h",0x75,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneTimeWarpGetter::InverseRemapTimeWithinRange");
  return 1;
}



// FUNCTION 14753983e FUN_14753983e body=42 status=ok
// SIG undefined FUN_14753983e(void)

undefined8 FUN_14753983e(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\Variants/MovieSceneTimeWarpGetter.h",0x7b,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTimeWarpGetter::GetDomain");
  return 0;
}



// FUNCTION 14753986a FUN_14753986a body=45 status=ok
// SIG undefined FUN_14753986a(void)

longlong FUN_14753986a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x60;
  thunk_FUN_1404db954(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147539898 FUN_147539898 body=122 status=ok
// SIG undefined FUN_147539898(void)

void FUN_147539898(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x98) != '\x02') {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14753e8f2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x9c);
    }
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14753e8f2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0xa4);
    }
  }
  return;
}



// FUNCTION 14753991c FUN_14753991c body=56 status=ok
// SIG undefined FUN_14753991c(void)

void FUN_14753991c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147539949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14753997e FUN_14753997e body=23 status=ok
// SIG undefined FUN_14753997e(void)

bool FUN_14753997e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147553876(param_1 + 0x68);
  return iVar1 != 0;
}



// FUNCTION 147539996 FUN_147539996 body=30 status=ok
// SIG undefined FUN_147539996(void)

undefined8 FUN_147539996(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_147553876(param_1 + 0x68);
  uVar2 = 0xf;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147539a50 FUN_147539a50 body=59 status=ok
// SIG undefined FUN_147539a50(void)

undefined8 FUN_147539a50(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147539af2 FUN_147539af2 body=59 status=ok
// SIG undefined FUN_147539af2(void)

void FUN_147539af2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x128);
  FUN_1406ed1bc(param_2);
  *param_2 = &PTR_FUN_14a464530;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 147539b2e FUN_147539b2e body=43 status=ok
// SIG undefined FUN_147539b2e(void)

void FUN_147539b2e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406ed1bc(param_2);
  *param_2 = &PTR_FUN_14a464530;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 147539b7e FUN_147539b7e body=63 status=ok
// SIG undefined FUN_147539b7e(void)

undefined1 FUN_147539b7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147539ca6(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 147539be6 FUN_147539be6 body=59 status=ok
// SIG undefined FUN_147539be6(void)

undefined8 FUN_147539be6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147539c32 FUN_147539c32 body=38 status=ok
// SIG undefined FUN_147539c32(void)

void FUN_147539c32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_1404db99a(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 147539ca6 FUN_147539ca6 body=83 status=ok
// SIG undefined FUN_147539ca6(void)

longlong FUN_147539ca6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147539cfa();
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x118);
    }
  }
  *(longlong *)(param_1 + 0x118) = lVar1;
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
  return param_1;
}



// FUNCTION 147539cfa FUN_147539cfa body=107 status=ok
// SIG undefined FUN_147539cfa(void)

longlong FUN_147539cfa(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  FUN_147539dac(param_1 + 0x58,param_2 + 0x58);
  FUN_147539e04(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_147a408e2(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 147539d66 FUN_147539d66 body=69 status=ok
// SIG undefined FUN_147539d66(void)

longlong FUN_147539d66(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_1407377d4(param_1 + 8,param_2 + 8);
    FUN_1407377d4(param_1 + 0x20,param_2 + 0x20);
    FUN_140737960(param_1 + 0x38,param_2 + 0x38);
  }
  return param_1;
}



// FUNCTION 147539dac FUN_147539dac body=88 status=ok
// SIG undefined FUN_147539dac(void)

undefined8 * FUN_147539dac(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147539e5c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147539e04 FUN_147539e04 body=88 status=ok
// SIG undefined FUN_147539e04(void)

undefined8 * FUN_147539e04(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147539ebe(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147539e5c FUN_147539e5c body=98 status=ok
// SIG undefined FUN_147539e5c(void)

void FUN_147539e5c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147539ebe FUN_147539ebe body=98 status=ok
// SIG undefined FUN_147539ebe(void)

void FUN_147539ebe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147539f22 FUN_147539f22 body=42 status=ok
// SIG undefined FUN_147539f22(void)

undefined1 FUN_147539f22(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x158,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::IsEmpty");
  return 1;
}



// FUNCTION 147539f4e FUN_147539f4e body=42 status=ok
// SIG undefined FUN_147539f4e(void)

undefined8 FUN_147539f4e(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x1a5,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::SupportsType");
  return 0;
}



// FUNCTION 147539f78 FUN_147539f78 body=41 status=ok
// SIG undefined FUN_147539f78(void)

void FUN_147539f78(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x1ac,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::AddSection");
  return;
}



// FUNCTION 147539fa2 FUN_147539fa2 body=42 status=ok
// SIG undefined FUN_147539fa2(void)

undefined8 FUN_147539fa2(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x1b3,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::CreateNewSection");
  return 0;
}



// FUNCTION 147539fcc FUN_147539fcc body=137 status=ok
// SIG undefined FUN_147539fcc(void)

undefined8 * FUN_147539fcc(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x1ba,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::GetAllSections");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab25b8) {
    FUN_144b3d300(&DAT_14cab25b8);
    if (DAT_14cab25b8 == -1) {
      DAT_14cab25a8 = 0;
      uRam000000014cab25b0 = 0;
      atexit((_func_5014 *)&LAB_1432d29de);
      _Init_thread_footer(&DAT_14cab25b8);
    }
  }
  return &DAT_14cab25a8;
}



// FUNCTION 14753a056 FUN_14753a056 body=42 status=ok
// SIG undefined FUN_14753a056(void)

undefined8 FUN_14753a056(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x1c2,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::HasSection");
  return 0;
}



// FUNCTION 14753a080 FUN_14753a080 body=41 status=ok
// SIG undefined FUN_14753a080(void)

void FUN_14753a080(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x1c9,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::RemoveSection");
  return;
}



// FUNCTION 14753a0aa FUN_14753a0aa body=41 status=ok
// SIG undefined FUN_14753a0aa(void)

void FUN_14753a0aa(void)

{
  FUN_140033559("Runtime\\MovieScene\\Public\\MovieSceneTrack.h",0x1d0,
                L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::RemoveSectionAt");
  return;
}



// FUNCTION 14753a108 FUN_14753a108 body=116 status=ok
// SIG undefined FUN_14753a108(void)

undefined8 FUN_14753a108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14141a0f6(param_3,&local_38);
      *(ulonglong *)(param_2 + lVar1 * 8) = local_38;
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 8;
    } while (param_4 != (int)lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753a17e FUN_14753a17e body=31 status=ok
// SIG undefined FUN_14753a17e(void)

undefined1
FUN_14753a17e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147588a0a(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14753a19e FUN_14753a19e body=242 status=ok
// SIG undefined FUN_14753a19e(void)

undefined4
FUN_14753a19e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_60 = param_7;
    local_68 = param_6;
    FUN_14758ae00(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  local_48 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_4c & 2) == 0) {
    FUN_1432e0f1a(&local_48,0x3ff0000000000000);
  }
  local_60 = param_7;
  local_68 = param_6;
  uVar1 = FUN_14758ae00(param_3,param_2,&local_48,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14753a292 FUN_14753a292 body=39 status=ok
// SIG undefined FUN_14753a292(void)

void FUN_14753a292(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14758afe2(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14753a2d2 FUN_14753a2d2 body=59 status=ok
// SIG undefined FUN_14753a2d2(void)

undefined8 FUN_14753a2d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753a3e0 FUN_14753a3e0 body=59 status=ok
// SIG undefined FUN_14753a3e0(void)

undefined8 FUN_14753a3e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753a4fa FUN_14753a4fa body=59 status=ok
// SIG undefined FUN_14753a4fa(void)

undefined8 FUN_14753a4fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753a5c4 FUN_14753a5c4 body=90 status=ok
// SIG undefined FUN_14753a5c4(void)

undefined1 FUN_14753a5c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 14753a646 FUN_14753a646 body=59 status=ok
// SIG undefined FUN_14753a646(void)

undefined8 FUN_14753a646(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753a754 FUN_14753a754 body=59 status=ok
// SIG undefined FUN_14753a754(void)

undefined8 FUN_14753a754(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753a862 FUN_14753a862 body=59 status=ok
// SIG undefined FUN_14753a862(void)

undefined8 FUN_14753a862(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753a970 FUN_14753a970 body=59 status=ok
// SIG undefined FUN_14753a970(void)

undefined8 FUN_14753a970(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753aa7e FUN_14753aa7e body=59 status=ok
// SIG undefined FUN_14753aa7e(void)

undefined8 FUN_14753aa7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753ab96 FUN_14753ab96 body=59 status=ok
// SIG undefined FUN_14753ab96(void)

undefined8 FUN_14753ab96(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753ad02 FUN_14753ad02 body=37 status=ok
// SIG undefined FUN_14753ad02(void)

void FUN_14753ad02(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_14753ae7e(param_2);
  return;
}



// FUNCTION 14753ad54 FUN_14753ad54 body=63 status=ok
// SIG undefined FUN_14753ad54(void)

undefined1 FUN_14753ad54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753af86(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 14753adbc FUN_14753adbc body=59 status=ok
// SIG undefined FUN_14753adbc(void)

undefined8 FUN_14753adbc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753ae08 FUN_14753ae08 body=40 status=ok
// SIG undefined FUN_14753ae08(void)

void FUN_14753ae08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_14753af42(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 14753ae7e FUN_14753ae7e body=157 status=ok
// SIG undefined FUN_14753ae7e(void)

void FUN_14753ae7e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a46bc60;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 14753af1c FUN_14753af1c body=38 status=ok
// SIG undefined FUN_14753af1c(void)

undefined8 FUN_14753af1c(undefined8 param_1,int param_2)

{
  FUN_14753af42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753af42 FUN_14753af42 body=68 status=ok
// SIG undefined FUN_14753af42(void)

void FUN_14753af42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46bc60;
  FUN_141177934(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 14753af86 FUN_14753af86 body=65 status=ok
// SIG undefined FUN_14753af86(void)

longlong FUN_14753af86(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  FUN_147539dac(param_1 + 0x50,param_2 + 0x50);
  FUN_1447cd5a6(param_1 + 0x60,param_2 + 0x60);
  FUN_147a408e2(param_1 + 0x70);
  return param_1;
}



// FUNCTION 14753affc FUN_14753affc body=63 status=ok
// SIG undefined FUN_14753affc(void)

undefined1 FUN_14753affc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753b184(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 14753b068 FUN_14753b068 body=59 status=ok
// SIG undefined FUN_14753b068(void)

undefined8 FUN_14753b068(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753b0b4 FUN_14753b0b4 body=38 status=ok
// SIG undefined FUN_14753b0b4(void)

void FUN_14753b0b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_140bb7e7c(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 14753b128 FUN_14753b128 body=38 status=ok
// SIG undefined FUN_14753b128(void)

undefined8 FUN_14753b128(undefined8 param_1,int param_2)

{
  FUN_140bb7e7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753b184 FUN_14753b184 body=84 status=ok
// SIG undefined FUN_14753b184(void)

longlong FUN_14753b184(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  FUN_147539dac(param_1 + 0x58,param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  FUN_1447cd5a6(param_1 + 0x70,param_2 + 0x70);
  FUN_147a408e2(param_1 + 0x80);
  return param_1;
}



// FUNCTION 14753b1da FUN_14753b1da body=76 status=ok
// SIG undefined FUN_14753b1da(void)

undefined8 * FUN_14753b1da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a46be50;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753b226 FUN_14753b226 body=39 status=ok
// SIG undefined FUN_14753b226(void)

void FUN_14753b226(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x80,0x10);
  FUN_140a3da46(uVar1,param_1);
  return;
}



// FUNCTION 14753b282 FUN_14753b282 body=63 status=ok
// SIG undefined FUN_14753b282(void)

undefined1 FUN_14753b282(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753b3d4(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 14753b2ee FUN_14753b2ee body=59 status=ok
// SIG undefined FUN_14753b2ee(void)

undefined8 FUN_14753b2ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753b33a FUN_14753b33a body=38 status=ok
// SIG undefined FUN_14753b33a(void)

void FUN_14753b33a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_140e127fe(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14753b3ae FUN_14753b3ae body=38 status=ok
// SIG undefined FUN_14753b3ae(void)

undefined8 FUN_14753b3ae(undefined8 param_1,int param_2)

{
  FUN_140e127fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753b3d4 FUN_14753b3d4 body=125 status=ok
// SIG undefined FUN_14753b3d4(void)

longlong FUN_14753b3d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147539d66();
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  FUN_147539dac(param_1 + 0x58,param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  FUN_1447a122a(param_1 + 0x70,param_2 + 0x70);
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar1;
  FUN_147a408e2(param_1 + 0x88);
  return param_1;
}



// FUNCTION 14753b4f2 FUN_14753b4f2 body=54 status=ok
// SIG undefined FUN_14753b4f2(void)

undefined1 FUN_14753b4f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147539d66(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14753b550 FUN_14753b550 body=59 status=ok
// SIG undefined FUN_14753b550(void)

undefined8 FUN_14753b550(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753b596 FUN_14753b596 body=32 status=ok
// SIG undefined FUN_14753b596(void)

void FUN_14753b596(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1404dbac8(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14753b606 FUN_14753b606 body=62 status=ok
// SIG undefined FUN_14753b606(void)

void FUN_14753b606(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  return;
}



// FUNCTION 14753b6a4 FUN_14753b6a4 body=45 status=ok
// SIG undefined FUN_14753b6a4(void)

undefined1 FUN_14753b6a4(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a408e2(param_2);
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14753b6fa FUN_14753b6fa body=59 status=ok
// SIG undefined FUN_14753b6fa(void)

undefined8 FUN_14753b6fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753b746 FUN_14753b746 body=38 status=ok
// SIG undefined FUN_14753b746(void)

void FUN_14753b746(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_141177934(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14753b866 FUN_14753b866 body=59 status=ok
// SIG undefined FUN_14753b866(void)

undefined8 FUN_14753b866(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753b950 FUN_14753b950 body=19 status=ok
// SIG undefined FUN_14753b950(void)

void FUN_14753b950(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 14753b9a0 FUN_14753b9a0 body=31 status=ok
// SIG undefined FUN_14753b9a0(void)

undefined1
FUN_14753b9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14752acd8(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14753b9dc FUN_14753b9dc body=59 status=ok
// SIG undefined FUN_14753b9dc(void)

undefined8 FUN_14753b9dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753baae FUN_14753baae body=63 status=ok
// SIG undefined FUN_14753baae(void)

undefined1 FUN_14753baae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147539cfa(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 14753bb1a FUN_14753bb1a body=59 status=ok
// SIG undefined FUN_14753bb1a(void)

undefined8 FUN_14753bb1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753bb66 FUN_14753bb66 body=38 status=ok
// SIG undefined FUN_14753bb66(void)

void FUN_14753bb66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1404db99a(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 14753bbdc FUN_14753bbdc body=38 status=ok
// SIG undefined FUN_14753bbdc(void)

undefined8 FUN_14753bbdc(undefined8 param_1,int param_2)

{
  FUN_1404dbc70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753bc4e FUN_14753bc4e body=31 status=ok
// SIG undefined FUN_14753bc4e(void)

undefined1
FUN_14753bc4e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14752dc02(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14753bc8a FUN_14753bc8a body=59 status=ok
// SIG undefined FUN_14753bc8a(void)

undefined8 FUN_14753bc8a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753bd5c FUN_14753bd5c body=63 status=ok
// SIG undefined FUN_14753bd5c(void)

undefined1 FUN_14753bd5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753be88(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 14753bdc8 FUN_14753bdc8 body=59 status=ok
// SIG undefined FUN_14753bdc8(void)

undefined8 FUN_14753bdc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753be14 FUN_14753be14 body=38 status=ok
// SIG undefined FUN_14753be14(void)

void FUN_14753be14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_1404dbc70(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14753be88 FUN_14753be88 body=99 status=ok
// SIG undefined FUN_14753be88(void)

longlong FUN_14753be88(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  FUN_147539dac(param_1 + 0x58,param_2 + 0x58);
  FUN_14753beec(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  FUN_147a408e2(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  return param_1;
}



// FUNCTION 14753beec FUN_14753beec body=92 status=ok
// SIG undefined FUN_14753beec(void)

undefined8 * FUN_14753beec(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753bf48(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753bf48 FUN_14753bf48 body=121 status=ok
// SIG undefined FUN_14753bf48(void)

void FUN_14753bf48(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753bff6 FUN_14753bff6 body=63 status=ok
// SIG undefined FUN_14753bff6(void)

undefined1 FUN_14753bff6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753c14a(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 14753c062 FUN_14753c062 body=59 status=ok
// SIG undefined FUN_14753c062(void)

undefined8 FUN_14753c062(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753c0ae FUN_14753c0ae body=40 status=ok
// SIG undefined FUN_14753c0ae(void)

void FUN_14753c0ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_14581ef76(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 14753c124 FUN_14753c124 body=38 status=ok
// SIG undefined FUN_14753c124(void)

undefined8 FUN_14753c124(undefined8 param_1,int param_2)

{
  FUN_14581ef76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753c14a FUN_14753c14a body=94 status=ok
// SIG undefined FUN_14753c14a(void)

longlong FUN_14753c14a(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  FUN_147539dac(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  FUN_14054c6c4(param_1 + 0x70,param_2 + 0x70);
  FUN_147a408e2(param_1 + 0x80);
  return param_1;
}



// FUNCTION 14753c1de FUN_14753c1de body=54 status=ok
// SIG undefined FUN_14753c1de(void)

undefined1 FUN_14753c1de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14179cae6(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14753c240 FUN_14753c240 body=59 status=ok
// SIG undefined FUN_14753c240(void)

undefined8 FUN_14753c240(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753c286 FUN_14753c286 body=38 status=ok
// SIG undefined FUN_14753c286(void)

void FUN_14753c286(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14753c330 FUN_14753c330 body=63 status=ok
// SIG undefined FUN_14753c330(void)

undefined1 FUN_14753c330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753c47e(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 14753c398 FUN_14753c398 body=59 status=ok
// SIG undefined FUN_14753c398(void)

undefined8 FUN_14753c398(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753c3e4 FUN_14753c3e4 body=38 status=ok
// SIG undefined FUN_14753c3e4(void)

void FUN_14753c3e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_140e91cce(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 14753c458 FUN_14753c458 body=38 status=ok
// SIG undefined FUN_14753c458(void)

undefined8 FUN_14753c458(undefined8 param_1,int param_2)

{
  FUN_140e91cce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753c47e FUN_14753c47e body=116 status=ok
// SIG undefined FUN_14753c47e(void)

longlong FUN_14753c47e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147539d66();
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x50);
    }
  }
  *(longlong *)(param_1 + 0x50) = lVar1;
  FUN_147539dac(param_1 + 0x58,param_2 + 0x58);
  FUN_14753c4f2(param_1 + 0x68,param_2 + 0x68);
  FUN_14179cae6(param_1 + 0x78,param_2 + 0x78);
  FUN_147a408e2(param_1 + 0xa8);
  return param_1;
}



// FUNCTION 14753c4f2 FUN_14753c4f2 body=93 status=ok
// SIG undefined FUN_14753c4f2(void)

undefined8 * FUN_14753c4f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e91e06(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14753c550(param_1,iVar1);
      FUN_14753c5c3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14753c550 FUN_14753c550 body=115 status=ok
// SIG undefined FUN_14753c550(void)

void FUN_14753c550(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753c5c3 FUN_14753c5c3 body=52 status=ok
// SIG undefined FUN_14753c5c3(void)

void FUN_14753c5c3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14753c5f8(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 14753c5f8 FUN_14753c5f8 body=144 status=ok
// SIG undefined FUN_14753c5f8(void)

undefined8 * FUN_14753c5f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  lVar2 = param_2[5];
  param_1[5] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14753c704 FUN_14753c704 body=19 status=ok
// SIG undefined FUN_14753c704(void)

void FUN_14753c704(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 14753c77c FUN_14753c77c body=59 status=ok
// SIG undefined FUN_14753c77c(void)

undefined8 FUN_14753c77c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753c81e FUN_14753c81e body=75 status=ok
// SIG undefined FUN_14753c81e(void)

undefined4 * FUN_14753c81e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
  }
  return param_1;
}



// FUNCTION 14753c86a FUN_14753c86a body=83 status=ok
// SIG undefined FUN_14753c86a(void)

longlong * FUN_14753c86a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_14753c92e(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14753c8be FUN_14753c8be body=111 status=ok
// SIG undefined FUN_14753c8be(void)

longlong * FUN_14753c8be(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 14753c92e FUN_14753c92e body=78 status=ok
// SIG undefined FUN_14753c92e(void)

longlong * FUN_14753c92e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140a32090(*param_1,(int)param_1[1]);
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



// FUNCTION 14753c97c FUN_14753c97c body=93 status=ok
// SIG undefined FUN_14753c97c(void)

longlong FUN_14753c97c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1457c38f6(param_1);
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



// FUNCTION 14753c9da FUN_14753c9da body=93 status=ok
// SIG undefined FUN_14753c9da(void)

longlong FUN_14753c9da(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1457c3aac(param_1);
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



// FUNCTION 14753ca38 FUN_14753ca38 body=78 status=ok
// SIG undefined FUN_14753ca38(void)

longlong * FUN_14753ca38(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140a31c81(*param_1,(int)param_1[1]);
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



// FUNCTION 14753ca86 FUN_14753ca86 body=111 status=ok
// SIG undefined FUN_14753ca86(void)

longlong * FUN_14753ca86(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 14753caf6 FUN_14753caf6 body=78 status=ok
// SIG undefined FUN_14753caf6(void)

longlong * FUN_14753caf6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140a31900(*param_1,(int)param_1[1]);
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



// FUNCTION 14753cb44 FUN_14753cb44 body=78 status=ok
// SIG undefined FUN_14753cb44(void)

longlong * FUN_14753cb44(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140a318c3(*param_1,(int)param_1[1]);
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



// FUNCTION 14753cb92 FUN_14753cb92 body=91 status=ok
// SIG undefined FUN_14753cb92(void)

undefined4 * FUN_14753cb92(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_14753cbee(param_1 + 8,param_2 + 8);
  FUN_14753cc48(param_1 + 0xc,param_2 + 0xc);
  FUN_14753cd76(param_1 + 0x10,param_2 + 0x10);
  FUN_14753cdd0(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 14753cbee FUN_14753cbee body=89 status=ok
// SIG undefined FUN_14753cbee(void)

undefined8 * FUN_14753cbee(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753cca0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753cc48 FUN_14753cc48 body=88 status=ok
// SIG undefined FUN_14753cc48(void)

undefined8 * FUN_14753cc48(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753cd14(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753cca0 FUN_14753cca0 body=115 status=ok
// SIG undefined FUN_14753cca0(void)

void FUN_14753cca0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753cd14 FUN_14753cd14 body=98 status=ok
// SIG undefined FUN_14753cd14(void)

void FUN_14753cd14(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,4);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753cd76 FUN_14753cd76 body=89 status=ok
// SIG undefined FUN_14753cd76(void)

undefined8 * FUN_14753cd76(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753ce2e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753cdd0 FUN_14753cdd0 body=93 status=ok
// SIG undefined FUN_14753cdd0(void)

undefined8 * FUN_14753cdd0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a32090(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14753cea2(param_1,iVar1);
      FUN_14753cf15(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14753ce2e FUN_14753ce2e body=115 status=ok
// SIG undefined FUN_14753ce2e(void)

void FUN_14753ce2e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753cea2 FUN_14753cea2 body=115 status=ok
// SIG undefined FUN_14753cea2(void)

void FUN_14753cea2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753cf15 FUN_14753cf15 body=52 status=ok
// SIG undefined FUN_14753cf15(void)

void FUN_14753cf15(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147557dfa(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 14753cf4a FUN_14753cf4a body=115 status=ok
// SIG undefined FUN_14753cf4a(void)

void FUN_14753cf4a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753cfbd FUN_14753cfbd body=52 status=ok
// SIG undefined FUN_14753cfbd(void)

void FUN_14753cfbd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14755ac28(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14753cff2 FUN_14753cff2 body=122 status=ok
// SIG undefined FUN_14753cff2(void)

longlong FUN_14753cff2(longlong param_1,longlong param_2)

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
    FUN_14753d06c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14753d06c FUN_14753d06c body=258 status=ok
// SIG undefined FUN_14753d06c(void)

longlong * FUN_14753d06c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a32128(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1406c169c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          FUN_147557c1e(lVar6 + lVar4 + 8,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0xf8 + lVar6) = *(undefined8 *)(lVar3 + 0xf8 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x100;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 14753d16e FUN_14753d16e body=122 status=ok
// SIG undefined FUN_14753d16e(void)

longlong FUN_14753d16e(longlong param_1,longlong param_2)

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
    FUN_14753d1e8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14753d1e8 FUN_14753d1e8 body=211 status=ok
// SIG undefined FUN_14753d1e8(void)

undefined8 * FUN_14753d1e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a322ae(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_14753d2bc(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14753d2bc FUN_14753d2bc body=103 status=ok
// SIG undefined FUN_14753d2bc(void)

undefined4 * FUN_14753d2bc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1400a3390(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14753d324 FUN_14753d324 body=122 status=ok
// SIG undefined FUN_14753d324(void)

longlong FUN_14753d324(longlong param_1,longlong param_2)

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
    FUN_14753d39e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14753d39e FUN_14753d39e body=256 status=ok
// SIG undefined FUN_14753d39e(void)

longlong * FUN_14753d39e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a31cc4(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1401600aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
        if ((uVar2 >> ((uint)uVar6 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          FUN_14753d49e(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x80 + lVar7) = *(undefined8 *)(lVar3 + 0x80 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x88;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14753d49e FUN_14753d49e body=145 status=ok
// SIG undefined FUN_14753d49e(void)

undefined4 * FUN_14753d49e(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[10] = iVar1;
  if (iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_14753d530(param_1 + 8,iVar1,0);
    FUN_14753d5a6(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc | 2;
  FUN_14753d678(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 14753d530 FUN_14753d530 body=118 status=ok
// SIG undefined FUN_14753d530(void)

void FUN_14753d530(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753d5a6 FUN_14753d5a6 body=76 status=ok
// SIG undefined FUN_14753d5a6(void)

void FUN_14753d5a6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfc | 2;
    FUN_14753d5f2(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 14753d5f2 FUN_14753d5f2 body=134 status=ok
// SIG undefined FUN_14753d5f2(void)

undefined8 FUN_14753d5f2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    FUN_140a31f1a(param_1);
  }
  else {
    plVar3 = param_2;
    if ((*(byte *)(param_2 + 0x10) & 2) == 0) {
      plVar3 = (longlong *)*param_2;
    }
    lVar1 = (**(code **)(*plVar3 + 0x20))();
    plVar3 = *(longlong **)(lVar1 + 0xb8);
    uVar2 = FUN_140ee558c(param_1,(int)plVar3[1],*(undefined4 *)((longlong)plVar3 + 0xc));
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar2);
    if ((*(byte *)(param_2 + 0x10) & 2) == 0) {
      param_2 = (longlong *)*param_2;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar2,param_2,1);
  }
  return param_1;
}



// FUNCTION 14753d678 FUN_14753d678 body=128 status=ok
// SIG undefined FUN_14753d678(void)

undefined8 FUN_14753d678(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_2 + 6) & 1) == 0) {
    FUN_140a31f5e(param_1);
  }
  else {
    plVar3 = param_2;
    if ((*(byte *)(param_2 + 6) & 2) == 0) {
      plVar3 = (longlong *)*param_2;
    }
    lVar1 = (**(code **)(*plVar3 + 0x20))();
    plVar3 = *(longlong **)(lVar1 + 0xb8);
    uVar2 = FUN_140f3c6b4(param_1,(int)plVar3[1],*(undefined4 *)((longlong)plVar3 + 0xc));
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar2);
    if ((*(byte *)(param_2 + 6) & 2) == 0) {
      param_2 = (longlong *)*param_2;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar2,param_2,1);
  }
  return param_1;
}



// FUNCTION 14753d6f8 FUN_14753d6f8 body=122 status=ok
// SIG undefined FUN_14753d6f8(void)

longlong FUN_14753d6f8(longlong param_1,longlong param_2)

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
    FUN_14753d772(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14753d772 FUN_14753d772 body=122 status=ok
// SIG undefined FUN_14753d772(void)

undefined8 * FUN_14753d772(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a31aa0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 14753d7ec FUN_14753d7ec body=122 status=ok
// SIG undefined FUN_14753d7ec(void)

longlong FUN_14753d7ec(longlong param_1,longlong param_2)

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
    FUN_14753d866(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14753d866 FUN_14753d866 body=119 status=ok
// SIG undefined FUN_14753d866(void)

undefined8 * FUN_14753d866(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a31b1a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14055df60(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 14753d8de FUN_14753d8de body=88 status=ok
// SIG undefined FUN_14753d8de(void)

undefined8 * FUN_14753d8de(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753d9f2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753d936 FUN_14753d936 body=93 status=ok
// SIG undefined FUN_14753d936(void)

undefined8 * FUN_14753d936(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a31900(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14753da54(param_1,iVar1);
      FUN_14753dac7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14753d994 FUN_14753d994 body=93 status=ok
// SIG undefined FUN_14753d994(void)

undefined8 * FUN_14753d994(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a318c3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14753dd1e(param_1,iVar1);
      FUN_14753dd80(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14753d9f2 FUN_14753d9f2 body=98 status=ok
// SIG undefined FUN_14753d9f2(void)

void FUN_14753d9f2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753da54 FUN_14753da54 body=115 status=ok
// SIG undefined FUN_14753da54(void)

void FUN_14753da54(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753dac7 FUN_14753dac7 body=52 status=ok
// SIG undefined FUN_14753dac7(void)

void FUN_14753dac7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14753dafc(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 14753dafc FUN_14753dafc body=233 status=ok
// SIG undefined FUN_14753dafc(void)

undefined8 * FUN_14753dafc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14753dbe6(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14753dc48(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14753dcbc(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14753dbe6 FUN_14753dbe6 body=98 status=ok
// SIG undefined FUN_14753dbe6(void)

void FUN_14753dbe6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14753dc48 FUN_14753dc48 body=115 status=ok
// SIG undefined FUN_14753dc48(void)

void FUN_14753dc48(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753dcbc FUN_14753dcbc body=98 status=ok
// SIG undefined FUN_14753dcbc(void)

void FUN_14753dcbc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14753dd1e FUN_14753dd1e body=98 status=ok
// SIG undefined FUN_14753dd1e(void)

void FUN_14753dd1e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14753dd80 FUN_14753dd80 body=52 status=ok
// SIG undefined FUN_14753dd80(void)

void FUN_14753dd80(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14753ddb4(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 14753ddb4 FUN_14753ddb4 body=158 status=ok
// SIG undefined FUN_14753ddb4(void)

undefined8 * FUN_14753ddb4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1400a3390(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1400a32aa(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 14753de52 FUN_14753de52 body=88 status=ok
// SIG undefined FUN_14753de52(void)

undefined8 * FUN_14753de52(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753e144(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753deaa FUN_14753deaa body=93 status=ok
// SIG undefined FUN_14753deaa(void)

undefined8 * FUN_14753deaa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a31c81(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14753e1a6(param_1,iVar1);
      FUN_14753e208(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14753df08 FUN_14753df08 body=88 status=ok
// SIG undefined FUN_14753df08(void)

undefined8 * FUN_14753df08(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753e23c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753df60 FUN_14753df60 body=91 status=ok
// SIG undefined FUN_14753df60(void)

undefined4 * FUN_14753df60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_14753cbee(param_1 + 8,param_2 + 8);
  FUN_14753cc48(param_1 + 0xc,param_2 + 0xc);
  FUN_14753dfbc(param_1 + 0x10,param_2 + 0x10);
  FUN_14753e016(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 14753dfbc FUN_14753dfbc body=89 status=ok
// SIG undefined FUN_14753dfbc(void)

undefined8 * FUN_14753dfbc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753e06e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753e016 FUN_14753e016 body=88 status=ok
// SIG undefined FUN_14753e016(void)

undefined8 * FUN_14753e016(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753e0e2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14753e06e FUN_14753e06e body=115 status=ok
// SIG undefined FUN_14753e06e(void)

void FUN_14753e06e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753e0e2 FUN_14753e0e2 body=98 status=ok
// SIG undefined FUN_14753e0e2(void)

void FUN_14753e0e2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14753e144 FUN_14753e144 body=98 status=ok
// SIG undefined FUN_14753e144(void)

void FUN_14753e144(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753e1a6 FUN_14753e1a6 body=98 status=ok
// SIG undefined FUN_14753e1a6(void)

void FUN_14753e1a6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753e208 FUN_14753e208 body=52 status=ok
// SIG undefined FUN_14753e208(void)

void FUN_14753e208(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1475376e2(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 14753e23c FUN_14753e23c body=98 status=ok
// SIG undefined FUN_14753e23c(void)

void FUN_14753e23c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14753e29e FUN_14753e29e body=125 status=ok
// SIG undefined FUN_14753e29e(void)

void FUN_14753e29e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = FUN_147540af6(*(longlong *)(param_1 + 8) + 0x128,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28),
                          *(longlong *)(param_1 + 0x10) + 0x28);
    *(longlong *)(param_1 + 0x18) = lVar1;
  }
  FUN_147555eea(lVar1,local_24,param_3 + 0x2c,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753e31c FUN_14753e31c body=29 status=ok
// SIG undefined FUN_14753e31c(void)

undefined8 FUN_14753e31c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14753e33a FUN_14753e33a body=48 status=ok
// SIG undefined FUN_14753e33a(void)

void FUN_14753e33a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14753e36a FUN_14753e36a body=76 status=ok
// SIG undefined FUN_14753e36a(void)

void FUN_14753e36a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14753e3b6 FUN_14753e3b6 body=76 status=ok
// SIG undefined FUN_14753e3b6(void)

void FUN_14753e3b6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14753e402 FUN_14753e402 body=96 status=ok
// SIG undefined FUN_14753e402(void)

void FUN_14753e402(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 14753e462 FUN_14753e462 body=96 status=ok
// SIG undefined FUN_14753e462(void)

void FUN_14753e462(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 14753e4c2 FUN_14753e4c2 body=147 status=ok
// SIG undefined FUN_14753e4c2(void)

void FUN_14753e4c2(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  
  uVar3 = FUN_147526062();
  if (uVar3 != param_2) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar1 = *(undefined1 *)(*plVar2 + (longlong)(int)param_2);
    iVar4 = (int)plVar2[1];
    if (~param_2 + iVar4 != 0) {
      _Dst = (void *)(*plVar2 + (longlong)(int)param_2);
      memmove(_Dst,(void *)((longlong)_Dst + 1),(longlong)(int)(~param_2 + iVar4));
      iVar4 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar4 + -1;
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar4 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
      FUN_1401c3474(plVar2,iVar4);
    }
    lVar5 = (longlong)(int)uVar3;
    memmove((void *)(*plVar2 + lVar5 + 1),(void *)(*plVar2 + lVar5),(ulonglong)(iVar4 - uVar3));
    *(undefined1 *)(*plVar2 + lVar5) = uVar1;
  }
  return;
}



// FUNCTION 14753e556 FUN_14753e556 body=275 status=ok
// SIG undefined FUN_14753e556(void)

uint FUN_14753e556(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147525f8a();
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1401c3474(plVar2,iVar1);
  }
  uVar6 = (ulonglong)uVar4;
  memmove((void *)(*plVar2 + uVar6 + 1),(void *)(*plVar2 + uVar6),(ulonglong)(iVar1 - uVar4));
  *(undefined1 *)(*plVar2 + uVar6) = param_3;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x10) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 8) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar3 + 8) + lVar5) != 0)) {
        local_58 = (ulonglong *)0x0;
        uStack_50 = 1;
        FUN_14753e66a(&local_58,0);
        *local_58 = param_2 << 0x20 | uVar6;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_58);
        if (local_58 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x10) * 0x10 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753e66a FUN_14753e66a body=132 status=ok
// SIG undefined FUN_14753e66a(void)

void FUN_14753e66a(longlong param_1,int param_2)

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



// FUNCTION 14753e6f0 FUN_14753e6f0 body=175 status=ok
// SIG undefined FUN_14753e6f0(void)

void FUN_14753e6f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14753e779;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14753e779:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14753e7a0 FUN_14753e7a0 body=336 status=ok
// SIG undefined FUN_14753e7a0(void)

void FUN_14753e7a0(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2),
            (void *)((longlong)(int)param_2 + *plVar3 + 1),(longlong)iVar6);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753e8f2 FUN_14753e8f2 body=132 status=ok
// SIG undefined FUN_14753e8f2(void)

void FUN_14753e8f2(longlong param_1,int param_2)

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



// FUNCTION 14753e978 FUN_14753e978 body=147 status=ok
// SIG undefined FUN_14753e978(void)

void FUN_14753e978(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  
  uVar3 = FUN_147526062();
  if (uVar3 != param_2) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar1 = *(undefined1 *)(*plVar2 + (longlong)(int)param_2);
    iVar4 = (int)plVar2[1];
    if (~param_2 + iVar4 != 0) {
      _Dst = (void *)(*plVar2 + (longlong)(int)param_2);
      memmove(_Dst,(void *)((longlong)_Dst + 1),(longlong)(int)(~param_2 + iVar4));
      iVar4 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar4 + -1;
    plVar2 = *(longlong **)(param_1 + 0x18);
    iVar4 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
      FUN_1447403be(plVar2,iVar4);
    }
    lVar5 = (longlong)(int)uVar3;
    memmove((void *)(*plVar2 + lVar5 + 1),(void *)(*plVar2 + lVar5),(ulonglong)(iVar4 - uVar3));
    *(undefined1 *)(*plVar2 + lVar5) = uVar1;
  }
  return;
}



// FUNCTION 14753ea0c FUN_14753ea0c body=275 status=ok
// SIG undefined FUN_14753ea0c(void)

uint FUN_14753ea0c(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_147525f8a();
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447403be(plVar2,iVar1);
  }
  uVar6 = (ulonglong)uVar4;
  memmove((void *)(*plVar2 + uVar6 + 1),(void *)(*plVar2 + uVar6),(ulonglong)(iVar1 - uVar4));
  *(undefined1 *)(*plVar2 + uVar6) = param_3;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x10) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 8) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar3 + 8) + lVar5) != 0)) {
        local_58 = (ulonglong *)0x0;
        uStack_50 = 1;
        FUN_14753e66a(&local_58,0);
        *local_58 = param_2 << 0x20 | uVar6;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_58);
        if (local_58 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x10) * 0x10 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753eb20 FUN_14753eb20 body=336 status=ok
// SIG undefined FUN_14753eb20(void)

void FUN_14753eb20(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2),
            (void *)((longlong)(int)param_2 + *plVar3 + 1),(longlong)iVar6);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753ec72 FUN_14753ec72 body=132 status=ok
// SIG undefined FUN_14753ec72(void)

void FUN_14753ec72(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14753ecf8 FUN_14753ecf8 body=175 status=ok
// SIG undefined FUN_14753ecf8(void)

void FUN_14753ecf8(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14753ed81;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14753ed81:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14753eda8 FUN_14753eda8 body=359 status=ok
// SIG undefined FUN_14753eda8(void)

void FUN_14753eda8(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x1c),
            (void *)((longlong)(int)param_2 * 0x1c + *plVar3 + 0x1c),(longlong)iVar6 * 0x1c);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753ef10 FUN_14753ef10 body=355 status=ok
// SIG undefined FUN_14753ef10(void)

longlong * FUN_14753ef10(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
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
      FUN_140aba11c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1402d4140(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140aba11c(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14753f074(param_2);
        FUN_1402d4140(param_1,uVar3);
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


